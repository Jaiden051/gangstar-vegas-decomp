// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd1d5c):
//   F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp
// Referenced by 6 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"

// ----------------------------------------------------------------------------
// Function: vox::AmbienceFileParams::Construct  (binary VA: 0xfd04b0)
// Original: vox::AmbienceFileParams::AmbienceFileParams
// ----------------------------------------------------------------------------
vox::AmbienceFileParams::Self * vox::AmbienceFileParams::Construct(char ***self, const char **a2)
{
  vox::AmbienceFileParams::Self *v2;
  size_t v3;
  char *v4;
  vox::AmbienceFileParams::Self *result;
  vox::AmbienceFileParams::Self *v6;
  char *v7;
  char *v8;
  size_t v9;
  uint32_t *v10;
  char **v11;
  typedef char **_g4_t_v12;
  typedef char *_g4_t_dest;
  typedef char **_g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_dest)) > _g4_s1 ? (12u + sizeof(_g4_t_dest)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v14)) > _g4_s2 ? (44u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (55u + sizeof(_g4_t_v15)) > _g4_s3 ? (55u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v16)) > _g4_s4 ? (56u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 55u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);

  v2 = (vox::AmbienceFileParams::Self *)self;
  *self = nullptr;
  *(self + 5) = nullptr;
  *(self + 6) = nullptr;
  *(self + 9) = nullptr;
  *(self + 7) = (char **)(self + 5);
  *(self + 8) = (char **)(self + 5);
  if ( *a2 != nullptr )
  {
    v3 = strlen(*a2);
    v4 = (char *)VoxAllocInternal(
                   v3 + 1,
                   0,
                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
                   (int)(uintptr_t)("AmbienceFileParams"),
                   85);
    v2 = (vox::AmbienceFileParams::Self *)self;
    *self = (char **)v4;
    if ( v4 != nullptr )
    {
      strcpy(v4, *a2);
      v2 = (vox::AmbienceFileParams::Self *)self;
    }
  }
  *((uint32_t *)v2 + 1) = (uint32_t)(uintptr_t)(a2[1]);
  *((uint32_t *)v2 + 2) = (uint32_t)(uintptr_t)(a2[2]);
  result = (vox::AmbienceFileParams::Self *)a2[3];
  *((uint32_t *)v2 + 3) = (uint32_t)(uintptr_t)(result);
  v6 = (vox::AmbienceFileParams::Self *)a2[7];
  if ( v6 != (vox::AmbienceFileParams::Self *)(a2 + 5) )
  {
    while ( 1 )
    {
      v7 = (char *)VoxAllocInternal(
                     0x10u,
                     0,
                     (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
                     (int)(uintptr_t)("AmbienceFileParams"),
                     108);
      *(uint32_t *)v7 = 0;
      *((uint32_t *)v7 + 1) = 0;
      *((uint32_t *)v7 + 2) = 0;
      *((uint32_t *)v7 + 3) = 0;
      v8 = v7;
      v9 = strlen(*((const char **)v6 + 4));
      dest = (char *)VoxAllocInternal(
                       v9 + 1,
                       0,
                       (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
                       (int)(uintptr_t)("AmbienceFileParams"),
                       112);
      if ( dest != nullptr )
        break;
LABEL_15:
      result = (vox::AmbienceFileParams::Self *)sub_19048E0(v6);
      v6 = result;
      if ( a2 + 5 == (const char **)result )
        return result;
    }
    strcpy(dest, *((const char **)v6 + 4));
    dest[v9] = 0;
    v10 = *((uint32_t **)v6 + 5);
    *(uint32_t *)v8 = *v10;
    *((uint32_t *)v8 + 1) = v10[1];
    *((uint32_t *)v8 + 2) = v10[2];
    *((uint32_t *)v8 + 3) = v10[3];
    v11 = *(self + 6);
    if ( v11 != nullptr )
    {
      v12 = (char **)(self + 5);
      do
      {
        while ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(self + 4), v11[4], dest) == 0 )
        {
          v12 = v11;
          v11 = (char **)v11[2];
          if ( v11 == nullptr )
            goto LABEL_11;
        }
        v11 = (char **)v11[3];
      }
      while ( v11 != nullptr );
LABEL_11:
      if ( v12 != (char **)(self + 5) && (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(&v15), dest, v12[4]) == 0 )
        goto LABEL_14;
    }
    else
    {
      v12 = (char **)(self + 5);
    }
    v16[0] = (uint32_t)(uintptr_t)(dest);
    v16[1] = 0;
    sub_FCF9A0(v12, v16);
    v12 = v14;
LABEL_14:
    v12[5] = v8;
    goto LABEL_15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceInternal::Construct  (binary VA: 0xfd16f0)
// Original: vox::AmbienceInternal::AmbienceInternal
// ----------------------------------------------------------------------------
vox::AmbienceFileParams::Self * vox::AmbienceInternal::Construct(int a1, int a2)
{
  vox::AmbienceFileParams::Self *result;
  const char **v3;
  int v4;
  int v5;
  size_t v6;
  int v7;
  size_t v8;
  char **v9;
  char *v10;
  char ***v11;
  unsigned int v12;
  char ***v13;
  char *v14;
  uint32_t *v15;
  char *v16;
  uint32_t *v17;
  unsigned int v18;
  int v19;
  bool v20; // cc
  int v21;
  size_t v22;
  char *v23;
  size_t v24;
  int v25;
  unsigned int v26;
  char *v27;
  char *v28;
  size_t v29;
  unsigned int v30;
  int v31;

  *(uint32_t *)a1 = 0;
  *(uint32_t *)(a1 + 16) = a1 + 16;
  *(uint32_t *)(a1 + 20) = a1 + 16;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint8_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint8_t *)(a1 + 36) = 1;
  *(uint32_t *)(a1 + 40) = 0;
  *(uint32_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  result = (vox::AmbienceFileParams::Self *)(vox::Mutex::Construct((vox::Mutex::Self *)(a1 + 80)));
  if ( a2 != 0 )
  {
    result = (vox::AmbienceFileParams::Self *)vox::AmbienceInternal::s_pAmbienceReader;
    if ( vox::AmbienceInternal::s_pAmbienceReader != 0 )
    {
      result = (vox::AmbienceFileParams::Self *)vox::AmbienceFileReader::GetParameters(
                                            vox::AmbienceInternal::s_pAmbienceReader,
                                            *(const char **)a2);
      v3 = (const char **)result;
      if ( result != nullptr )
      {
        *(uint8_t *)(a1 + 37) = *(uint8_t *)(a2 + 4);
        *(uint32_t *)(a1 + 72) = *(uint32_t *)(a2 + 8);
        *(uint32_t *)(a1 + 76) = *(uint32_t *)(a2 + 12);
        v4 = VoxAllocInternal(
               0x28u,
               0,
               (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
               (int)(uintptr_t)("AmbienceInternal"),
               254);
        result = vox::AmbienceFileParams::Construct((char ***)v4, v3);
        *(uint32_t *)a1 = v4;
        if ( v4 != 0 )
        {
          v5 = *(uint32_t *)(v4 + 28);
          v25 = v4 + 20;
          v6 = 1;
          if ( v5 != v4 + 20 )
          {
            v24 = 0;
            do
            {
              v9 = (char **)VoxAllocInternal(
                              8u,
                              0,
                              (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
                              (int)(uintptr_t)("AmbienceInternal"),
                              268);
              *v9 = nullptr;
              v9[1] = nullptr;
              v22 = strlen(*(const char **)(v5 + 16));
              v10 = (char *)VoxAllocInternal(
                              v22 + 1,
                              0,
                              (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
                              (int)(uintptr_t)("AmbienceInternal"),
                              272);
              *v9 = v10;
              strcpy(v10, *(const char **)(v5 + 16));
              v9[1] = *(char **)(*(uint32_t *)(v5 + 20) + 12);
              v11 = *(char ****)(a1 + 8);
              if ( v11 == *(char ****)(a1 + 12) )
              {
                v12 = ((int)(uintptr_t)(v11) - *(uint32_t *)(a1 + 4)) >> 2;
                v29 = 4;
                v26 = v12;
                if ( v12 != 0 )
                {
                  v18 = 2 * v12;
                  if ( v12 <= 2 * v12 )
                  {
                    v19 = 8 * v12;
                    v20 = v18 <= 0x3FFFFFFF;
                    v21 = -4;
                    if ( v20 )
                      v21 = v19;
                    v29 = v21;
                  }
                  else
                  {
                    v29 = 0xFFFFFFFC;
                  }
                }
                v23 = *(char **)(a1 + 8);
                v31 = VoxAllocInternal(
                        v29,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
                v30 = v31 + 4;
                v13 = (char ***)(v31 + 4 * v26);
                if ( v13 != nullptr )
                  *v13 = v9;
                v14 = *(char **)(a1 + 4);
                v27 = v14;
                if ( v23 != v14 )
                {
                  v15 = (uint32_t *)v31;
                  do
                  {
                    if ( v15 != nullptr )
                      *v15 = *(uint32_t *)v14;
                    v14 += 4;
                    ++v15;
                  }
                  while ( v23 != v14 );
                  v30 = v31 + 4 * ((unsigned int)(v23 - (v27 + 4)) >> 2) + 8;
                }
                v28 = *(char **)(a1 + 8);
                if ( v23 != v28 )
                {
                  v16 = v23;
                  v17 = (uint32_t *)v30;
                  do
                  {
                    if ( v17 != nullptr )
                      *v17 = *(uint32_t *)v16;
                    v16 += 4;
                    ++v17;
                  }
                  while ( v28 != v16 );
                  v30 += 4 * ((unsigned int)(v28 - (v23 + 4)) >> 2) + 4;
                }
                if ( *(uint32_t *)(a1 + 4) != 0 )
                  VoxFreeInternal(*(void **)(a1 + 4));
                *(uint32_t *)(a1 + 4) = v31;
                *(uint32_t *)(a1 + 8) = v30;
                *(uint32_t *)(a1 + 12) = v29 + v31;
              }
              else
              {
                v7 = 0;
                if ( v11 != nullptr )
                {
                  *v11 = v9;
                  v7 = *(uint32_t *)(a1 + 8);
                }
                *(uint32_t *)(a1 + 8) = v7 + 4;
              }
              v8 = v22;
              if ( v24 >= v22 )
                v8 = v24;
              v24 = v8;
              v5 = sub_1904890(v5);
            }
            while ( v25 != v5 );
            v6 = v24 + 1;
          }
          result = (vox::AmbienceFileParams::Self *)VoxAllocInternal(
                                                v6,
                                                0,
                                                (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
                                                (int)(uintptr_t)("AmbienceInternal"),
                                                289);
          *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(result);
          if ( result != nullptr )
            *(uint8_t *)(a1 + 28) = 1;
        }
      }
    }
  }
  return result;
}



// ============================================================================
// Referencing Function: 0xfd1ad0 .. 0xfd1b3c (108 bytes)
// Symbol:               _ZN3vox8AmbienceC1EPNS_14AmbienceParamsE
// Demangled:            vox::Ambience::Ambience(vox::AmbienceParams *)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfd26a0 .. 0xfd3048 (2472 bytes)
// Symbol:               _ZN3vox18AmbienceFileReader4LoadEPKc
// Demangled:            vox::AmbienceFileReader::Load(char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfd3050 .. 0xfd30ec (156 bytes)
// Symbol:               _ZN3vox16AmbienceInternal13LoadAmbiencesEPKc
// Demangled:            vox::AmbienceInternal::LoadAmbiences(char const*)
// ============================================================================

// ============================================================================
// Referencing Function: 0xfd3120 .. 0xfd31ac (140 bytes)
// Symbol:               _ZN3vox16AmbienceInternal12AddAmbiencesEPKc
// Demangled:            vox::AmbienceInternal::AddAmbiences(char const*)
// ============================================================================
