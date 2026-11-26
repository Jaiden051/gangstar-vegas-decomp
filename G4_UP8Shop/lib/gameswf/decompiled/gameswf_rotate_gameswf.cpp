#include "Core/Utils/DecompTypes.h"
#include "gameswf_rotate_gameswf.h"

// ----------------------------------------------------------------------------
// Function: g4_std::rotate_gameswf_ASEventDispatche_8a9ae9  (binary VA: 0x116c4f0)
// Original: std::rotate<gameswf::ASEventDispatcher::Entry *>
// ----------------------------------------------------------------------------
gameswf::Self * g4_std::rotate_gameswf_ASEventDispatche_8a9ae9(gameswf::Self **a1, gameswf::Self *a2, gameswf::Self *a3)
{
  gameswf::Self *result;
  int v4;
  gameswf::Self **v5;
  gameswf::Self **v6;
  gameswf::Self *v7;
  int v8;
  gameswf::Self **v9;
  gameswf::Self *v10;
  gameswf::Self *v11;
  gameswf::Self **v12;
  gameswf::Self **v13;
  gameswf::Self **v14;
  gameswf::Self **v15;
  gameswf::Self **v16;
  gameswf::Self **v17;
  char *v18;
  gameswf::Self *v19;
  char *v20;
  typedef gameswf::Self **_g4_t_v21;
  typedef gameswf::Self **_g4_t_v22;
  typedef int _g4_t_v23;
  typedef gameswf::Self **_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef gameswf::Self **_g4_t_v27;
  typedef gameswf::Self **_g4_t_v28;
  typedef int _g4_t_v29;
  typedef gameswf::Self **_g4_t_v30;
  typedef gameswf::Self **_g4_t_v31;
  typedef gameswf::Self **_g4_t_v32;
  typedef gameswf::Self **_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef gameswf::Self **_g4_t_v36;
  typedef gameswf::Self **_g4_t_v37;
  typedef gameswf::Self **_g4_t_v38;
  typedef int _g4_t_v39;
  typedef gameswf::Self *_g4_t_v40;
  typedef gameswf::Self *_g4_t_v41;
  typedef gameswf::Self *_g4_t_v42;
  typedef gameswf::Self *_g4_t_v43;
  typedef gameswf::Self *_g4_t_v44;
  typedef char _g4_t_v45;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v21)) > _g4_s0 ? (8u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v22)) > _g4_s1 ? (28u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v23)) > _g4_s2 ? (48u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v24)) > _g4_s3 ? (52u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v25)) > _g4_s4 ? (56u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v26)) > _g4_s5 ? (64u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v27)) > _g4_s6 ? (68u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v28)) > _g4_s7 ? (72u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v29)) > _g4_s8 ? (76u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v30)) > _g4_s9 ? (80u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v31)) > _g4_s10 ? (80u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v32)) > _g4_s11 ? (84u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v33)) > _g4_s12 ? (84u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v34)) > _g4_s13 ? (88u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v35)) > _g4_s14 ? (88u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v36)) > _g4_s15 ? (88u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v37)) > _g4_s16 ? (92u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v38)) > _g4_s17 ? (92u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v39)) > _g4_s18 ? (92u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v40)) > _g4_s19 ? (96u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v41)) > _g4_s20 ? (100u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v42)) > _g4_s21 ? (104u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v43)) > _g4_s22 ? (108u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v44)) > _g4_s23 ? (112u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v45)) > _g4_s24 ? (116u + sizeof(_g4_t_v45)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 84u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 88u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 92u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 92u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 100u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 104u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 108u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 112u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 116u);

  result = a3;
  if ( a2 != a3 && a1 != (gameswf::Self **)a2 )
  {
    v23 = -1431655765 * ((a3 - (gameswf::Self *)a1) >> 3);
    v26 = -1431655765 * ((a2 - (gameswf::Self *)a1) >> 3);
    if ( v26 != v23 - v26 )
    {
      while ( 1 )
      {
        v4 = v23 - v26;
        v25 = v23 - v26;
        if ( v26 >= v23 - v26 )
        {
          v24 = &a1[6 * v23];
          v12 = &v24[-6 * v4];
          a1 = v12;
          if ( v26 > 0 )
          {
            v27 = v24;
            v31 = v12 - 4;
            v13 = v12 - 6;
            v28 = v12;
            v39 = 0;
            v14 = v24 - 6;
            v21 = v12 - 6;
            v15 = v12;
            v16 = v24;
            while ( 1 )
            {
              v17 = v15 - 6;
              v18 = (char *)((char *)v17 - (char *)a1);
              v36 = v17;
              v33 = v16 - 6;
              v19 = *(gameswf::Self **)((char *)v13  + ((uintptr_t)((char *)v17) - (uintptr_t)(char *)(a1)) + 24);
              v40 = v19;
              if ( v19 != nullptr )
                ++*(uint16_t *)v19;
              v41 = *(gameswf::Self **)((char *)v21 + (uint32_t)(uintptr_t)(v18) + 28);
              v42 = *(gameswf::Self **)((char *)v31 + (uint32_t)(uintptr_t)(v18) + 24);
              if ( v42 != nullptr )
                ++*(uint16_t *)v42;
              v20 = (char *)((char *)v33 - (char *)v24);
              v43 = *(gameswf::Self **)((char *)v31 + (uint32_t)(uintptr_t)(v18) + 28);
              v44 = *(gameswf::Self **)((char *)v21 + (uint32_t)(uintptr_t)(v18) + 40);
              v45 = *((uint8_t *)v21 + (uint32_t)(uintptr_t)(v18) + 44);
              v22 = v14;
              gameswf::smart_ptr_proxy::set_ref(v36, *(gameswf::Self **)((char *)v14  + ((uintptr_t)((char *)v33) - (uintptr_t)(char *)(v24)) + 24));
              *(gameswf::Self **)((char *)v21 + (uint32_t)(uintptr_t)(v18) + 28) = *(gameswf::Self **)((char *)v22  + ((uintptr_t)((char *)v33) - (uintptr_t)(char *)(v24)) + 28);
              gameswf::smart_ptr_proxy::set_ref(v28 - 4, v33[2]);
              *(gameswf::Self **)((char *)v31 + (uint32_t)(uintptr_t)(v18) + 28) = v33[3];
              *(gameswf::Self **)((char *)v21 + (uint32_t)(uintptr_t)(v18) + 40) = *(gameswf::Self **)((char *)v22  + ((uintptr_t)((char *)v33) - (uintptr_t)(char *)(v24)) + 40);
              *((uint8_t *)v21 + (uint32_t)(uintptr_t)(v18) + 44) = *((uint8_t *)v22 + ((char *)v33 - (char *)v24) + 44);
              gameswf::smart_ptr_proxy::set_ref(v33, v40);
              *(gameswf::Self **)((char *)v22 + (uint32_t)(uintptr_t)(v20) + 28) = v41;
              gameswf::smart_ptr_proxy::set_ref(v27 - 4, v42);
              *(gameswf::Self **)((char *)v24 + (uint32_t)(uintptr_t)(v20) + 12) = v43;
              *(gameswf::Self **)((char *)v22 + (uint32_t)(uintptr_t)(v20) + 40) = v44;
              *((uint8_t *)v22 + (uint32_t)(uintptr_t)(v20) + 44) = v45;
              sub_7E5E90(&v42);
              sub_7E5E90(&v40);
              ++v39;
              v14 = v22;
              if ( v39 == v26 )
                break;
              v28 = v36;
              v15 = v36;
              v27 = v33;
              v16 = v33;
              v13 = v21;
            }
            a1 -= 6 * v39;
          }
          result = (gameswf::Self *)(v23 / v25);
          v26 = v23 % v25;
          if ( v23 % v25 == 0 )
            return result;
        }
        else
        {
          if ( v4 > 0 )
          {
            v5 = a1;
            v34 = 0;
            v6 = &a1[6 * v26];
            v30 = v6;
            v32 = v6 + 2;
            v37 = a1 + 2;
            do
            {
              v7 = *v5;
              v40 = *v5;
              if ( v40 != nullptr )
                ++*(uint16_t *)v7;
              v41 = v5[1];
              v29 = (char *)v5 - (char *)a1;
              v42 = v5[2];
              if ( v42 != nullptr )
                ++*(uint16_t *)v42;
              v43 = *(gameswf::Self **)((char *)v37 + v29 + 4);
              v44 = v5[4];
              v45 = *((uint8_t *)v5 + 20);
              gameswf::smart_ptr_proxy::set_ref(v5, *v6);
              v5[1] = v6[1];
              gameswf::smart_ptr_proxy::set_ref(v5 + 2, *(gameswf::Self **)((char *)v32  + ((uintptr_t)((char *)v6) - (uintptr_t)(char *)(v30))));
              *(gameswf::Self **)((char *)v37 + v29 + 4) = *(gameswf::Self **)((char *)v32  + ((uintptr_t)((char *)v6) - (uintptr_t)(char *)(v30)) + 4);
              v5[4] = v6[4];
              *((uint8_t *)v5 + 20) = *((uint8_t *)v6 + 20);
              gameswf::smart_ptr_proxy::set_ref(v6, v40);
              v5 += 6;
              v6[1] = v41;
              gameswf::smart_ptr_proxy::set_ref(v6 + 2, v42);
              *(gameswf::Self **)((char *)v32  + ((uintptr_t)((char *)v6) - (uintptr_t)(char *)(v30)) + 4) = v43;
              v6[4] = v44;
              *((uint8_t *)v6 + 20) = v45;
              v6 += 6;
              sub_7E5E90(&v42);
              sub_7E5E90(&v40);
              ++v34;
            }
            while ( v34 != v25 );
            a1 += 6 * v34;
          }
          result = (gameswf::Self *)(v23 / v26);
          if ( v23 % v26 == 0 )
            return result;
          v8 = v26;
          v26 -= v23 % v26;
          v25 = v8;
        }
        v23 = v25;
      }
    }
    v9 = a1;
    v10 = a2;
    v38 = a1 + 2;
    do
    {
      v11 = *v9;
      v40 = *v9;
      if ( v40 != nullptr )
        ++*(uint16_t *)v11;
      v41 = v9[1];
      v35 = (char *)v9 - (char *)a1;
      v42 = v9[2];
      if ( v42 != nullptr )
        ++*(uint16_t *)v42;
      v43 = *(gameswf::Self **)((char *)v38 + v35 + 4);
      v44 = v9[4];
      v45 = *((uint8_t *)v9 + 20);
      gameswf::smart_ptr_proxy::set_ref(v9, *(gameswf::Self **)v10);
      v9[1] = *((gameswf::Self **)v10 + 1);
      gameswf::smart_ptr_proxy::set_ref(v9 + 2, *((gameswf::Self **)v10 + 2));
      *(gameswf::Self **)((char *)v38 + v35 + 4) = *((gameswf::Self **)v10 + 3);
      v9[4] = *((gameswf::Self **)v10 + 4);
      *((uint8_t *)v9 + 20) = *((uint8_t *)v10 + 20);
      gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)v10, v40);
      v9 += 6;
      *((uint32_t *)v10 + 1) = (uint32_t)(uintptr_t)(v41);
      gameswf::smart_ptr_proxy::set_ref((gameswf::Self **)v10 + 2, v42);
      *((uint32_t *)v10 + 3) = (uint32_t)(uintptr_t)(v43);
      *((uint32_t *)v10 + 4) = (uint32_t)(uintptr_t)(v44);
      *((uint8_t *)v10 + 20) = v45;
      v10 = (gameswf::Self *)((char *)v10 + 24);
      sub_7E5E90(&v42);
      result = sub_7E5E90(&v40);
    }
    while ( a2 != (gameswf::Self *)v9 );
  }
  return result;
}


