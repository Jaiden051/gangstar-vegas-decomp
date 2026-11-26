#include "Core/Utils/DecompTypes.h"
#include "vox_AmbienceFileReader.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_AmbienceFileReader.cpp
// Library: vox | Module: vox_AmbienceFileReader
// Binary Address Span: 0xfd15a0 .. 0xfd26a0 (6 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xfd15a0 (size: 35 bytes)
// Symbol:    _ZN3vox18AmbienceFileReaderC2Ev
// Demangled: vox::AmbienceFileReader::AmbienceFileReader(void)
// ============================================================================
// Alternative name is '_ZN3vox18AmbienceFileReaderC1Ev'
struct vox::AmbienceFileReader::Self *vox::AmbienceFileReader::AmbienceFileReader(vox::AmbienceFileReader::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::AmbienceFileReader::GetParameters  (binary VA: 0xfd15d0)
// Original: vox::AmbienceFileReader::GetParameters
// ----------------------------------------------------------------------------
int vox::AmbienceFileReader::GetParameters(vox::AmbienceFileReader::Self *self, char *a2)
{
  char *v2;
  char *v4;

  if ( a2 == nullptr )
    return 0;
  v2 = *((char **)self + 2);
  if ( v2 == nullptr )
    return 0;
  v4 = (char *)self + 4;
  do
  {
    while ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(self), *((char **)v2 + 4), a2) == 0 )
    {
      v4 = v2;
      v2 = *((char **)v2 + 2);
      if ( v2 == nullptr )
        goto LABEL_7;
    }
    v2 = *((char **)v2 + 3);
  }
  while ( v2 != nullptr );
LABEL_7:
  if ( (char *)self + 4 != v4
    && (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(self), a2, *((char **)v4 + 4)) == 0 )
  {
    return *((uint32_t *)v4 + 5);
  }
  else
  {
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceFileReader::ValidateAmbience  (binary VA: 0xfd1690)
// Original: vox::AmbienceFileReader::ValidateAmbience
// ----------------------------------------------------------------------------
int vox::AmbienceFileReader::ValidateAmbience(vox::AmbienceFileReader::Self *self, char *a2, vox::AmbienceFileParams::Self *a3)
{
  int Parameters;
  int v4;

  Parameters = vox::AmbienceFileReader::GetParameters(self, a2);
  v4 = 0;
  if ( Parameters == 0 )
  {
    v4 = 1;
    if ( *(uint32_t *)a3 == 0 )
      LOBYTE(v4) = *((uint32_t *)a3 + 9) != 0;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceFileReader::Unload  (binary VA: 0xfd2260)
// Original: vox::AmbienceFileReader::Unload
// ----------------------------------------------------------------------------
char * vox::AmbienceFileReader::Unload(vox::AmbienceFileReader::Self *self)
{
  int v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  char *v29;

  v1 = *((uint32_t *)self + 3);
  v29 = (char *)self + 4;
  if ( (vox::AmbienceFileReader::Self *)v1 != (vox::AmbienceFileReader::Self *)((char *)self + 4) )
  {
    do
    {
      VoxFreeInternal(*(void **)(v1 + 16));
      if ( *(uint32_t *)(v1 + 20) != 0 )
      {
        vox::AmbienceFileParams::Destroy(*(vox::AmbienceFileParams::Self **)(v1 + 20));
        VoxFreeInternal(*(void **)(v1 + 20));
      }
      v1 = sub_1904890(v1);
    }
    while ( v29 != (char *)v1 );
  }
  v2 = *((uint32_t **)self + 2);
  v23 = v2;
  if ( v2 != nullptr )
  {
    while ( 1 )
    {
      v3 = (uint32_t *)v2[3];
      v24 = v3;
      if ( v3 != nullptr )
      {
        while ( 1 )
        {
          v4 = (uint32_t *)v3[3];
          v25 = v4;
          if ( v4 != nullptr )
          {
            while ( 1 )
            {
              v5 = (uint32_t *)v4[3];
              v26 = v5;
              if ( v5 != nullptr )
              {
                while ( 1 )
                {
                  v6 = (uint32_t *)v5[3];
                  v27 = v6;
                  if ( v6 != nullptr )
                  {
                    while ( 1 )
                    {
                      v7 = (uint32_t *)v6[3];
                      v28 = v7;
                      if ( v7 != nullptr )
                      {
                        while ( 1 )
                        {
                          v8 = (uint32_t *)v7[3];
                          v22 = v8;
                          if ( v8 != nullptr )
                          {
                            while ( 1 )
                            {
                              v9 = (uint32_t *)v8[3];
                              v21 = v9;
                              if ( v9 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v10 = v9[3];
                                  if ( v10 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_char_pair_char_const_vox_d0f1ce::M_erase(
                                        (int)(uintptr_t)(self),
                                        *(void **)(v10 + 12));
                                      v11 = *(uint32_t *)(v10 + 8);
                                      VoxFreeInternal((void *)v10);
                                      if ( v11 == 0 )
                                        break;
                                      v10 = v11;
                                    }
                                  }
                                  v12 = (uint32_t *)v21[2];
                                  VoxFreeInternal(v21);
                                  if ( v12 == nullptr )
                                    break;
                                  v21 = v12;
                                  v9 = v12;
                                }
                              }
                              v13 = (uint32_t *)v22[2];
                              VoxFreeInternal(v22);
                              if ( v13 == nullptr )
                                break;
                              v22 = v13;
                              v8 = v13;
                            }
                          }
                          v14 = (uint32_t *)v28[2];
                          VoxFreeInternal(v28);
                          if ( v14 == nullptr )
                            break;
                          v28 = v14;
                          v7 = v14;
                        }
                      }
                      v15 = (uint32_t *)v27[2];
                      VoxFreeInternal(v27);
                      if ( v15 == nullptr )
                        break;
                      v27 = v15;
                      v6 = v15;
                    }
                  }
                  v16 = (uint32_t *)v26[2];
                  VoxFreeInternal(v26);
                  if ( v16 == nullptr )
                    break;
                  v26 = v16;
                  v5 = v16;
                }
              }
              v17 = (uint32_t *)v25[2];
              VoxFreeInternal(v25);
              if ( v17 == nullptr )
                break;
              v25 = v17;
              v4 = v17;
            }
          }
          v18 = (uint32_t *)v24[2];
          VoxFreeInternal(v24);
          if ( v18 == nullptr )
            break;
          v24 = v18;
          v3 = v18;
        }
      }
      v19 = (uint32_t *)v23[2];
      VoxFreeInternal(v23);
      if ( v19 == nullptr )
        break;
      v23 = v19;
      v2 = v19;
    }
  }
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v29);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v29);
  *((uint32_t *)self + 5) = 0;
  return (char *)self + 4;
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceFileReader::Destroy  (binary VA: 0xfd2470)
// Original: vox::AmbienceFileReader::~AmbienceFileReader
// ----------------------------------------------------------------------------
void vox::AmbienceFileReader::Destroy(vox::AmbienceFileReader::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;

  vox::AmbienceFileReader::Unload(self);
  v1 = *((uint32_t **)self + 2);
  v21 = v1;
  if ( v1 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)v1[3];
      v22 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v23 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v24 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v25 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v26 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v20 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              v19 = v8;
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = v8[3];
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_char_pair_char_const_vox_d0f1ce::M_erase(
                                        (int)(uintptr_t)(self),
                                        *(void **)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      VoxFreeInternal((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  VoxFreeInternal(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              VoxFreeInternal(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v26[2];
                          VoxFreeInternal(v26);
                          if ( v13 == nullptr )
                            break;
                          v26 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v25[2];
                      VoxFreeInternal(v25);
                      if ( v14 == nullptr )
                        break;
                      v25 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v24[2];
                  VoxFreeInternal(v24);
                  if ( v15 == nullptr )
                    break;
                  v24 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v23[2];
              VoxFreeInternal(v23);
              if ( v16 == nullptr )
                break;
              v23 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v22[2];
          VoxFreeInternal(v22);
          if ( v17 == nullptr )
            break;
          v22 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)v21[2];
      VoxFreeInternal(v21);
      if ( v18 == nullptr )
        break;
      v21 = v18;
      v1 = v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceFileReader::Load  (binary VA: 0xfd26a0)
// Original: vox::AmbienceFileReader::Load
// ----------------------------------------------------------------------------
int vox::AmbienceFileReader::Load(vox::AmbienceFileReader::Self *self, const char *a2)
{
  const char *v2;
  int Instance;
  int v4;
  int VersionStringSize;
  int v6;
  char *Version200Label;
  int v8;
  int v9;
  bool v10;
  int v11;
  float *v12;
  char *Version300Label;
  int v14;
  char *v16;
  int v17;
  typedef vox::FileSystemInterface::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef vox::AmbiencesVersions::Self *_g4_t_v23;
  typedef vox::AmbiencesVersions::Self *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef vox::AmbienceFileParams::Self *_g4_t_v26;
  typedef char *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef float *_g4_t_v30;
  typedef uint8_t _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34[4];
  typedef uint16_t _g4_t_v35[9];
  typedef int _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef int _g4_t_v39;
  typedef float _g4_t_v40;
  typedef uint32_t _g4_t_v41[2];
  typedef uint32_t _g4_t_v42[2];
  typedef char _g4_t_v43[8];
  typedef char _g4_t_v44[4];
  typedef char _g4_t_v45;
  typedef vox::AmbienceFileReader::Self **_g4_t_v46;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v21)) > _g4_s3 ? (48u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v22)) > _g4_s4 ? (52u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v23)) > _g4_s5 ? (56u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v24)) > _g4_s6 ? (60u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v25)) > _g4_s7 ? (68u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v26)) > _g4_s8 ? (84u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v27)) > _g4_s9 ? (88u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v28)) > _g4_s10 ? (92u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v29)) > _g4_s11 ? (96u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v30)) > _g4_s12 ? (100u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v31)) > _g4_s13 ? (104u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v32)) > _g4_s14 ? (104u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v33)) > _g4_s15 ? (104u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v34)) > _g4_s16 ? (112u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (130u + sizeof(_g4_t_v35)) > _g4_s17 ? (130u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (148u + sizeof(_g4_t_v36)) > _g4_s18 ? (148u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (156u + sizeof(_g4_t_v37)) > _g4_s19 ? (156u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v38)) > _g4_s20 ? (160u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v39)) > _g4_s21 ? (164u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (168u + sizeof(_g4_t_v40)) > _g4_s22 ? (168u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (172u + sizeof(_g4_t_v41)) > _g4_s23 ? (172u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (180u + sizeof(_g4_t_v42)) > _g4_s24 ? (180u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (188u + sizeof(_g4_t_v43)) > _g4_s25 ? (188u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (196u + sizeof(_g4_t_v44)) > _g4_s26 ? (196u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (200u + sizeof(_g4_t_v45)) > _g4_s27 ? (200u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (268u + sizeof(_g4_t_v46)) > _g4_s28 ? (268u + sizeof(_g4_t_v46)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 104u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 104u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 104u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 130u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 148u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 156u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 160u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 164u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 168u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 172u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 180u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 188u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 196u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 200u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 268u);

  v46 = &self;
  v24 = (vox::AmbiencesVersions::Self *)(self);
  v2 = a2;
  Instance = (int)(uintptr_t)(vox::FileSystemInterface::GetInstance(v18));
  v22 = Instance;
  v31 = 0;
  if ( Instance != 0 )
  {
    v4 = G4_VCALL<int>(Instance, 8, v2, 6);
    v23 = (vox::AmbiencesVersions::Self *)v4;
    if ( v4 != 0 )
    {
      G4_VCALL<void>(v4, 8, v44, 4, 1);
      v45 = 0;
      if ( strcmp(v44, "voxa") == 0 )
      {
        G4_VCALL<void>(v23, 8, &v39, 4, 1);
        VersionStringSize = vox::AmbiencesVersions::GetVersionStringSize();
        G4_VCALL<void>(v23, 8, v43, VersionStringSize, 1);
        v43[VersionStringSize] = 0;
        if ( (uint8_t)vox::AmbiencesVersions::IsVersionValid((vox::AmbiencesVersions::Self *)v43) != 0
          && (G4_VCALL<void>(v23, 8, v44, 4, 1),
              v45 = 0,
              strcmp(v44, "data") == 0) )
        {
          G4_VCALL<void>(v23, 8, &v39, 4, 1);
          G4_VCALL<void>(v23, 8, &v35[1], 4, 1);
          if ( *(int *)&v35[1] <= 0 )
          {
LABEL_36:
            G4_VCALL<void>(v22, 12, v23, v19, v20);
            return 1;
          }
          else
          {
            v21 = 0;
            while ( 1 )
            {
              G4_VCALL<void>(v23, 8, &v39, 4, 1);
              v25 = (char *)VoxAllocInternal(
                              v39 + 1,
                              0,
                              (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
                              (int)(uintptr_t)("Load"),
                              783);
              if ( v25 == nullptr )
                break;
              G4_VCALL<void>(v23, 8, v25, v39, 1);
              v25[v39] = 0;
              v26 = (vox::AmbienceFileParams::Self *)VoxAllocInternal(
                                                 0x28u,
                                                 0,
                                                 (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
                                                 (int)(uintptr_t)("Load"),
                                                 796);
              vox::AmbienceFileParams::Construct(v26);
              if ( v26 == nullptr )
                break;
              G4_VCALL<void>(v23, 8, &v39, 4, 1);
              if ( v39 > 0 )
              {
                v6 = VoxAllocInternal(
                       v39 + 1,
                       0,
                       (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
                       (int)(uintptr_t)("Load"),
                       815);
                *(uint32_t *)v26 = v6;
                if ( v6 != 0 )
                {
                  G4_VCALL<void>(v23, 8, v6, v39, 1);
                  *(uint8_t *)(*(uint32_t *)v26 + v39) = 0;
                }
                else
                {
                  G4_VCALL<void>(v23, 12, v39, 1);
                }
              }
              G4_VCALL<void>(v23, 8, (int)(uintptr_t)(v26) + 4, 4, 1);
              G4_VCALL<void>(v23, 8, (int)(uintptr_t)(v26) + 8, 4, 1);
              G4_VCALL<void>(v23, 8, (int)(uintptr_t)(v26) + 12, &loc_4, 1);
              Version200Label = vox::AmbiencesVersions::GetVersion200Label();
              if ( vox::AmbiencesVersions::CompareVersions((vox::AmbiencesVersions::Self *)v43, Version200Label) <= 0 )
              {
                G4_VCALL<void>(v23, 8, &v37, 4, 1);
                G4_VCALL<void>(v23, 8, &v38, 4, 1);
              }
              G4_VCALL<void>(v23, 8, &v36, 4, 1);
              v8 = v36;
              if ( *((uint32_t *)v26 + 1) >= v36 )
                *((uint32_t *)v26 + 1) = v36 - 1;
              if ( v8 > 0 )
              {
                v29 = 0;
                do
                {
                  G4_VCALL<void>(v23, 8, &v39, 4, 1);
                  if ( v39 > 0 )
                  {
                    v9 = VoxAllocInternal(
                           v39 + 1,
                           0,
                           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
                           (int)(uintptr_t)("Load"),
                           888);
                    v10 = v9 == 0;
                    v27 = (char *)v9;
                    v11 = *(uint32_t *)v23;
                    if ( v10 )
                    {
                      (*(void (**)(vox::AmbiencesVersions::Self *, int, int))(v11 + 12))(v23, v39 + 4, 1);
                    }
                    else
                    {
                      (*(void (**)(vox::AmbiencesVersions::Self *, char *, int, int))(v11 + 8))(v23, v27, v39, 1);
                      v27[v39] = 0;
                      v12 = (float *)VoxAllocInternal(
                                       0x10u,
                                       0,
                                       (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/ambiences/vox_ambiences.cpp"),
                                       (int)(uintptr_t)("Load"),
                                       896);
                      *v12 = 0.0;
                      v12[1] = 0.0;
                      v12[2] = 0.0;
                      v12[3] = 0.0;
                      v30 = v12;
                      G4_VCALL<void>(v23, 8, &v40, &loc_4, 1);
                      *v30 = v40;
                      Version300Label = vox::AmbiencesVersions::GetVersion300Label();
                      if ( vox::AmbiencesVersions::CompareVersions((vox::AmbiencesVersions::Self *)v43, Version300Label) >= 0 )
                      {
                        G4_VCALL<void>(v23, 8, &v40, 4, 1);
                        *((uint32_t *)v30 + 3) = (int)(float)(10.0 * v40);
                        G4_VCALL<void>(v23, 8, &v37, 4, 1);
                        v30[1] = v37;
                        G4_VCALL<void>(v23, 8, &v38, 4, 1);
                        v30[2] = v38;
                      }
                      v32 = (uint32_t *)((char *)v26 + 16);
                      v28 = (int)(uintptr_t)(v26) + 20;
                      v14 = *((uint32_t *)v26 + 6);
                      if ( v14 == 0 )
                        goto LABEL_30;
                      do
                      {
                        while ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(v32), *(char **)(v14 + 16), v27) == 0 )
                        {
                          v28 = v14;
                          v14 = *(uint32_t *)(v14 + 8);
                          if ( v14 == 0 )
                            goto LABEL_28;
                        }
                        v14 = *(uint32_t *)(v14 + 12);
                      }
                      while ( v14 != 0 );
LABEL_28:
                      if ( (vox::AmbienceFileParams::Self *)((char *)v26 + 20) == (vox::AmbienceFileParams::Self *)v28
                        || (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(v35) + 1, v27, *(char **)(v28 + 16)) != 0 )
                      {
LABEL_30:
                        v42[0] = (uint32_t)(uintptr_t)(v27);
                        v42[1] = 0;
                        sub_FCF9A0(v34, v32, v28, (int)(uintptr_t)(v42));
                        v28 = v34[0];
                      }
                      *(uint32_t *)(v28 + 20) = (uint32_t)(uintptr_t)(v30);
                    }
                  }
                  ++v29;
                }
                while ( v36 > v29 );
              }
              if ( (uint8_t)vox::AmbienceFileReader::ValidateAmbience((vox::AmbienceFileReader::Self *)(v24), v25, v26) != 0 )
              {
                v16 = vox::AmbiencesVersions::GetVersion200Label();
                if ( vox::AmbiencesVersions::CompareVersions((vox::AmbiencesVersions::Self *)v43, v16) == 0 )
                  vox::AmbienceFileParams::UpgradeFromVersion_2_0_0_to_3_0_0(v26, v37, v38);
                v33 = (int)(uintptr_t)(v24) + 4;
                v17 = *((uint32_t *)v24 + 2);
                if ( v17 == 0 )
                  goto LABEL_50;
                do
                {
                  while ( (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(v24), *(char **)(v17 + 16), v25) == 0 )
                  {
                    v33 = v17;
                    v17 = *(uint32_t *)(v17 + 8);
                    if ( v17 == 0 )
                      goto LABEL_48;
                  }
                  v17 = *(uint32_t *)(v17 + 12);
                }
                while ( v17 != 0 );
LABEL_48:
                if ( (vox::AmbiencesVersions::Self *)((char *)v24 + 4) == (vox::AmbiencesVersions::Self *)v33
                  || (uint8_t)vox::c8stringcompare::opCall((int)(uintptr_t)(v35), v25, *(char **)(v33 + 16)) != 0 )
                {
LABEL_50:
                  v41[0] = (uint32_t)(uintptr_t)(v25);
                  v20 = v41;
                  v41[1] = 0;
                  v19 = v33;
                  g4_std::Rb_tree_char_pair_char_const_vox_d0f1ce::M_insert_unique(v34);
                  v33 = v34[0];
                }
                *(uint32_t *)(v33 + 20) = (uint32_t)(uintptr_t)(v26);
              }
              else
              {
                vox::AmbienceFileParams::Destroy(v26);
                VoxFreeInternal(v26);
                VoxFreeInternal(v25);
              }
              if ( *(int *)&v35[1] <= ++v21 )
                goto LABEL_36;
            }
            G4_VCALL<void>(v22, 12, v23);
            return 0;
          }
        }
        else
        {
          G4_VCALL<void>(v22, 12, v23);
        }
      }
      else
      {
        G4_VCALL<void>(v22, 12, v23);
      }
    }
  }
  return v31;
}


