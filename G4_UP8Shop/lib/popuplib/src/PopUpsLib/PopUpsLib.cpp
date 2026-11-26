// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1be9494):
//   F:/G4/G4_UP8Shop/lib/popuplib/src/PopUpsLib/PopUpsLib.cpp
// Referenced by 3 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"

// ----------------------------------------------------------------------------
// Function: sub_1960BD0  (binary VA: 0x1960bd0)
// Original: sub_1960BD0
// ----------------------------------------------------------------------------
int sub_1960BD0(int a1)
{
  int Instance;
  gaia::Gaia::Self *v3;

  Instance = gaia::Gaia::GetInstance(v3);
  g4_std::string::construct_copy(a1, Instance + 240);
  if ( g4_std::string::compare(a1, (char *)&unk_1B15112) == 0 )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/popuplib/src/PopUpsLib/PopUpsLib.cpp",
      176,
      "std::string GetClientID()",
      "clientID != \"\"");
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_1963D20  (binary VA: 0x1963d20)
// Original: sub_1963D20
// ----------------------------------------------------------------------------
int sub_1963D20(int a1, void **a2)
{
  volatile int32_t *v2;
  size_t v3;
  size_t v4;
  size_t v5;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  void **v11;
  int Instance;
  void *v13;
  int v14;
  void *v15;
  volatile int32_t *v16;
  volatile int32_t *v17;
  volatile int32_t *v18;
  volatile int32_t *v19;
  volatile int32_t *v20;
  volatile int32_t *v21;
  void *v22;
  void *v23;
  void *v24;
  int result;
  void *v26;
  typedef gaia::Gaia::Self *_g4_t_v27;
  typedef size_t _g4_t_n;
  typedef int _g4_t_v29;
  typedef void **_g4_t_v30;
  typedef int _g4_t_v31;
  typedef void *_g4_t_s2;
  typedef void **_g4_t_v33;
  typedef char _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint32_t _g4_t_v39[2];
  typedef char _g4_t_v40;
  typedef int _g4_t_v41;
  typedef volatile int32_t *_g4_t_v42;
  typedef volatile int32_t *_g4_t_v43;
  typedef volatile int32_t *_g4_t_v44;
  typedef volatile int32_t *_g4_t_v45;
  typedef volatile int32_t *_g4_t_v46;
  typedef volatile int32_t *_g4_t_v47;
  typedef uint32_t _g4_t_v48[8];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_n)) > _g4_s1 ? (16u + sizeof(_g4_t_n)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v29)) > _g4_s2 ? (20u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v30)) > _g4_s3 ? (24u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v31)) > _g4_s4 ? (32u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_s2)) > _g4_s5 ? (36u + sizeof(_g4_t_s2)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v33)) > _g4_s6 ? (40u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (63u + sizeof(_g4_t_v34)) > _g4_s7 ? (63u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v35)) > _g4_s8 ? (76u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v36)) > _g4_s9 ? (80u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v37)) > _g4_s10 ? (84u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v38)) > _g4_s11 ? (88u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v39)) > _g4_s12 ? (92u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v40)) > _g4_s13 ? (100u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v41)) > _g4_s14 ? (104u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v42)) > _g4_s15 ? (112u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v43)) > _g4_s16 ? (116u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v44)) > _g4_s17 ? (120u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v45)) > _g4_s18 ? (124u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v46)) > _g4_s19 ? (128u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v47)) > _g4_s20 ? (132u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v48)) > _g4_s21 ? (136u + sizeof(_g4_t_v48)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 63u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 116u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 120u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 124u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 128u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 132u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 136u);

  v48[4] = (uint32_t)(uintptr_t)(&a1);
  v29 = a1;
  v30 = a2;
  v31 = *(uint32_t *)(dword_2140420 + 104);
  g4_std::string::construct_copy(&v36, v31 + 12);
  g4_std::string::construct_copy(&v37, v31 + 16);
  g4_std::string::construct_copy(&v38, v31 + 20);
  g4_std::string::construct_copy(v39, v31 + 24);
  v39[1] = *(uint32_t *)(v31 + 28);
  v40 = *(uint8_t *)(v31 + 32);
  v41 = *(uint32_t *)(v31 + 36);
  sub_197C1D0(&v42);
  v33 = (void **)&v43;
  if ( v44 != nullptr )
  {
    v2 = v44;
    s2 = *v30;
    v3 = *((uint32_t *)*v30 - 3);
    do
    {
      while ( 1 )
      {
        v4 = *(uint32_t *)(*((uint32_t *)v2 + 4) - 12);
        v5 = v4;
        n = v3;
        if ( v3 <= v4 )
          v5 = v3;
        v6 = memcmp(*((const void **)v2 + 4), s2, v5);
        v3 = n;
        v7 = v4 - n;
        if ( v6 == 0 )
          v6 = v7;
        if ( v6 < 0 )
          break;
        v33 = (void **)v2;
        v2 = *((volatile int32_t **)v2 + 2);
        if ( v2 == nullptr )
          goto LABEL_10;
      }
      v2 = *((volatile int32_t **)v2 + 3);
    }
    while ( v2 != nullptr );
LABEL_10:
    if ( v33 != (void **)&v43 )
    {
      v8 = *((uint32_t *)v33[4] - 3);
      v9 = v8;
      if ( n <= v8 )
        v9 = n;
      v10 = memcmp(s2, v33[4], v9);
      v11 = (void **)&v43;
      if ( v10 == 0 )
        v10 = n - v8;
      if ( v10 >= 0 )
        v11 = v33;
      v33 = v11;
    }
  }
  sub_1960100();
  if ( v33 == (void **)&v43 )
  {
    v42 = (volatile int32_t *)&unk_213B814;
    v43 = (volatile int32_t *)&unk_213B814;
    v44 = (volatile int32_t *)&unk_213B814;
    v45 = (volatile int32_t *)&unk_213B814;
    v46 = (volatile int32_t *)&unk_213B814;
    v47 = (volatile int32_t *)&unk_213B814;
    v48[0] = (uint32_t)(uintptr_t)(&unk_213B814);
    Instance = gaia::Gaia::GetInstance(v27);
    g4_std::string::construct_copy(&v35, Instance + 240);
    if ( g4_std::string::compare((int)(uintptr_t)(&v35), (char *)&unk_1B15112) == 0 )
      __assert2(
        "F:/G4/G4_UP8Shop/lib/popuplib/src/PopUpsLib/PopUpsLib.cpp",
        176,
        "std::string GetClientID()",
        "clientID != \"\"");
    g4_std::string::assign_str(&v47, &v35);
    v13 = (void *)(v35 - 12);
    if ( (uint32_t *)(v35 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    g4_std::string::assign_str(&v45, &v36);
    g4_std::string::assign_str(&v46, &v37);
    g4_std::string::assign_str(&v44, &v38);
    g4_std::string::assign_str(v48, v39);
    g4_std::string::assign_str(&v42, v29);
    g4_std::string::assign_str(&v43, v30);
    if ( *(uint8_t *)(v31 + 41) != 0 )
      v14 = *(uint8_t *)(v31 + 40) == 0 ? 176682 : 176684;
    else
      v14 = 176683 - (*(uint8_t *)(v31 + 40) == 0);
    v48[1] = v14;
    sub_1968BA0(&v34, v30, &v42);
    v15 = (void *)(v48[0] - 12);
    if ( (uint32_t *)(v48[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v48[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = v47 - 3;
    if ( v47 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v47 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v16);
    v17 = v46 - 3;
    if ( v46 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v46 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v17);
    v18 = v45 - 3;
    if ( v45 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v45 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v18);
    v19 = v44 - 3;
    if ( v44 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v44 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v19);
    v20 = v43 - 3;
    if ( v43 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v43 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v20);
    v21 = v42 - 3;
    if ( v42 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v42 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v21);
  }
  v22 = (void *)(v39[0] - 12);
  if ( (uint32_t *)(v39[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v22);
  }
  v23 = (void *)(v38 - 12);
  if ( (uint32_t *)(v38 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v23);
  }
  v24 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v24);
  }
  result = v36;
  v26 = (void *)(v36 - 12);
  if ( (uint32_t *)(v36 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v26); return 0; }
  }
  return result;
}



// ============================================================================
// Referencing Function: 0x19684f0 .. 0x1968918 (1064 bytes)
// Symbol:               sub_19684F0
// Demangled:            sub_19684F0
// ============================================================================
