#include "Core/Utils/DecompTypes.h"
#include "vox_AmbienceFileParams.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_AmbienceFileParams.cpp
// Library: vox | Module: vox_AmbienceFileParams
// Binary Address Span: 0xfd0480 .. 0xfd1d00 (4 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xfd0480 (size: 41 bytes)
// Symbol:    _ZN3vox18AmbienceFileParamsC2Ev
// Demangled: vox::AmbienceFileParams::AmbienceFileParams(void)
// ============================================================================
// Alternative name is '_ZN3vox18AmbienceFileParamsC1Ev'
struct vox::AmbienceFileParams::Self *vox::AmbienceFileParams::Construct(vox::AmbienceFileParams::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)((char *)self + 20);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)((char *)self + 20);
  return self;
}
// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: vox::AmbienceFileParams::UpgradeFromVersion_2_0_0_to_3_0_0  (binary VA: 0xfd0760)
// Original: vox::AmbienceFileParams::UpgradeFromVersion_2_0_0_to_3_0_0
// ----------------------------------------------------------------------------
uint32_t * vox::AmbienceFileParams::UpgradeFromVersion_2_0_0_to_3_0_0(vox::AmbienceFileParams::Self *self, float a2, float a3)
{
  unsigned int v3;
  float v4; // xmm1_4
  float v5; // xmm0_4
  uint32_t *result;

  v3 = *((uint32_t *)self + 9);
  v4 = (float)(uint16_t)v3;
  v5 = (float)HIWORD(v3) * 65536.0;
  for ( result = *((uint32_t **)self + 7); (uint32_t *)((char *)self + 20) != result; result = (uint32_t *)sub_19048E0(result) )
  {
    *(float *)(result[5] + 4) = a2;
    *(float *)(result[5] + 8) = a3;
    *(uint32_t *)(result[5] + 12) = (int)(float)(1000.0 / (float)(v5 + v4));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::AmbienceFileParams::Destroy  (binary VA: 0xfd1d00)
// Original: vox::AmbienceFileParams::~AmbienceFileParams
// ----------------------------------------------------------------------------
void vox::AmbienceFileParams::Destroy(vox::AmbienceFileParams::Self *self)
{
  vox::AmbienceFileParams::Self *v1;
  void **v2;
  uint32_t *j;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  void *v21;
  uint32_t *k;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  int v30;
  int v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;
  uint32_t *v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
  uint32_t *v48;
  uint32_t *v49;
  uint32_t *v50;
  uint32_t *v51;
  uint32_t *v52;
  uint32_t *v53;
  uint32_t *v54;
  uint32_t *v55;
  void **i;
  char *v57;

  v1 = self;
  v2 = *((void ***)self + 7);
  for ( i = (void **)((char *)self + 20); i != v2; v2 = (void **)sub_1904890(v2) )
  {
    VoxFreeInternal(v2[4]);
    if ( v2[5] != nullptr )
      VoxFreeInternal(v2[5]);
  }
  v57 = (char *)self + 16;
  v44 = *((uint32_t **)self + 6);
  if ( v44 != nullptr )
  {
    for ( j = *((uint32_t **)self + 6); ; j = v20 )
    {
      v4 = (uint32_t *)j[3];
      v48 = v4;
      if ( v4 != nullptr )
      {
        while ( 1 )
        {
          v5 = (uint32_t *)v4[3];
          v50 = v5;
          if ( v5 != nullptr )
          {
            while ( 1 )
            {
              v6 = (uint32_t *)v5[3];
              v52 = v6;
              if ( v6 != nullptr )
              {
                while ( 1 )
                {
                  v7 = (uint32_t *)v6[3];
                  v46 = v7;
                  if ( v7 != nullptr )
                  {
                    while ( 1 )
                    {
                      v8 = (uint32_t *)v7[3];
                      v54 = v8;
                      if ( v8 != nullptr )
                      {
                        while ( 1 )
                        {
                          v9 = (uint32_t *)v8[3];
                          v42 = v9;
                          if ( v9 != nullptr )
                          {
                            while ( 1 )
                            {
                              v10 = (uint32_t *)v9[3];
                              v40 = v10;
                              if ( v10 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v11 = v10[3];
                                  if ( v11 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_char_pair_char_const_vox_3a5088::M_erase(
                                        (int)(uintptr_t)(v57),
                                        *(void **)(v11 + 12));
                                      v12 = *(uint32_t *)(v11 + 8);
                                      VoxFreeInternal((void *)v11);
                                      if ( v12 == 0 )
                                        break;
                                      v11 = v12;
                                    }
                                  }
                                  v13 = (uint32_t *)v40[2];
                                  VoxFreeInternal(v40);
                                  if ( v13 == nullptr )
                                    break;
                                  v40 = v13;
                                  v10 = v13;
                                }
                              }
                              v14 = (uint32_t *)v42[2];
                              VoxFreeInternal(v42);
                              if ( v14 == nullptr )
                                break;
                              v42 = v14;
                              v9 = v14;
                            }
                          }
                          v15 = (uint32_t *)v54[2];
                          VoxFreeInternal(v54);
                          if ( v15 == nullptr )
                            break;
                          v54 = v15;
                          v8 = v15;
                        }
                      }
                      v16 = (uint32_t *)v46[2];
                      VoxFreeInternal(v46);
                      if ( v16 == nullptr )
                        break;
                      v46 = v16;
                      v7 = v16;
                    }
                  }
                  v17 = (uint32_t *)v52[2];
                  VoxFreeInternal(v52);
                  if ( v17 == nullptr )
                    break;
                  v52 = v17;
                  v6 = v17;
                }
              }
              v18 = (uint32_t *)v50[2];
              VoxFreeInternal(v50);
              if ( v18 == nullptr )
                break;
              v50 = v18;
              v5 = v18;
            }
          }
          v19 = (uint32_t *)v48[2];
          VoxFreeInternal(v48);
          if ( v19 == nullptr )
            break;
          v48 = v19;
          v4 = v19;
        }
      }
      v20 = (uint32_t *)v44[2];
      VoxFreeInternal(v44);
      if ( v20 == nullptr )
        break;
      v44 = v20;
    }
    v1 = self;
  }
  *((uint32_t *)v1 + 6) = 0;
  *((uint32_t *)v1 + 7) = (uint32_t)(uintptr_t)(i);
  *((uint32_t *)v1 + 8) = (uint32_t)(uintptr_t)(i);
  v21 = *(void **)v1;
  *((uint32_t *)v1 + 9) = 0;
  if ( v21 != nullptr )
  {
    VoxFreeInternal(v21);
    *(uint32_t *)v1 = 0;
    v55 = *((uint32_t **)v1 + 6);
    if ( v55 != nullptr )
    {
      for ( k = *((uint32_t **)v1 + 6); ; k = v39 )
      {
        v23 = (uint32_t *)k[3];
        v43 = v23;
        if ( v23 != nullptr )
        {
          while ( 1 )
          {
            v24 = (uint32_t *)v23[3];
            v45 = v24;
            if ( v24 != nullptr )
            {
              while ( 1 )
              {
                v25 = (uint32_t *)v24[3];
                v47 = v25;
                if ( v25 != nullptr )
                {
                  while ( 1 )
                  {
                    v26 = (uint32_t *)v25[3];
                    v49 = v26;
                    if ( v26 != nullptr )
                    {
                      while ( 1 )
                      {
                        v27 = (uint32_t *)v26[3];
                        v51 = v27;
                        if ( v27 != nullptr )
                        {
                          while ( 1 )
                          {
                            v28 = (uint32_t *)v27[3];
                            v53 = v28;
                            if ( v28 != nullptr )
                            {
                              while ( 1 )
                              {
                                v29 = (uint32_t *)v28[3];
                                v41 = v29;
                                if ( v29 != nullptr )
                                {
                                  while ( 1 )
                                  {
                                    v30 = v29[3];
                                    if ( v30 != 0 )
                                    {
                                      while ( 1 )
                                      {
                                        g4_std::Rb_tree_char_pair_char_const_vox_3a5088::M_erase(
                                          (int)(uintptr_t)(v57),
                                          *(void **)(v30 + 12));
                                        v31 = *(uint32_t *)(v30 + 8);
                                        VoxFreeInternal((void *)v30);
                                        if ( v31 == 0 )
                                          break;
                                        v30 = v31;
                                      }
                                    }
                                    v32 = (uint32_t *)v41[2];
                                    VoxFreeInternal(v41);
                                    if ( v32 == nullptr )
                                      break;
                                    v41 = v32;
                                    v29 = v32;
                                  }
                                }
                                v33 = (uint32_t *)v53[2];
                                VoxFreeInternal(v53);
                                if ( v33 == nullptr )
                                  break;
                                v53 = v33;
                                v28 = v33;
                              }
                            }
                            v34 = (uint32_t *)v51[2];
                            VoxFreeInternal(v51);
                            if ( v34 == nullptr )
                              break;
                            v51 = v34;
                            v27 = v34;
                          }
                        }
                        v35 = (uint32_t *)v49[2];
                        VoxFreeInternal(v49);
                        if ( v35 == nullptr )
                          break;
                        v49 = v35;
                        v26 = v35;
                      }
                    }
                    v36 = (uint32_t *)v47[2];
                    VoxFreeInternal(v47);
                    if ( v36 == nullptr )
                      break;
                    v47 = v36;
                    v25 = v36;
                  }
                }
                v37 = (uint32_t *)v45[2];
                VoxFreeInternal(v45);
                if ( v37 == nullptr )
                  break;
                v45 = v37;
                v24 = v37;
              }
            }
            v38 = (uint32_t *)v43[2];
            VoxFreeInternal(v43);
            if ( v38 == nullptr )
              break;
            v43 = v38;
            v23 = v38;
          }
        }
        v39 = (uint32_t *)v55[2];
        VoxFreeInternal(v55);
        if ( v39 == nullptr )
          break;
        v55 = v39;
      }
    }
  }
}


