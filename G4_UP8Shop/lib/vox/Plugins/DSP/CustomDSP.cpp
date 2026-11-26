// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd1c58):
//   F:/G4/G4_UP8Shop/lib/vox/Plugins/DSP/CustomDSP.cpp
// Referenced by 1 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQPresetBank::loadBank  (binary VA: 0xfc8c50)
// Original: vox::ReverbHQPresetBank::loadBank
// ----------------------------------------------------------------------------
bool vox::ReverbHQPresetBank::loadBank(void **self, const char *a2)
{
  int Instance;
  int v3;
  int v4;
  bool v5;
  bool v6;
  unsigned int v7;
  int v8;
  void *v9;
  int v10;
  uint16_t *v11;
  char *v12;
  uint8_t *v13;
  uint16_t *v14;
  char *v15;
  unsigned int v16;
  int v18;
  int v19;
  char ReverbSettings;
  typedef vox::FileSystemInterface::Self *_g4_t_v21;
  typedef bool _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef vox::FileInterface::Self *_g4_t_v26;
  typedef uint8_t _g4_t_v27[28];
  typedef char _g4_t_v28;
  typedef char _g4_t_v29;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v22)) > _g4_s1 ? (32u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v23)) > _g4_s2 ? (48u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v24)) > _g4_s3 ? (52u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v25)) > _g4_s4 ? (56u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v26)) > _g4_s5 ? (60u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v27)) > _g4_s6 ? (72u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (100u + sizeof(_g4_t_v28)) > _g4_s7 ? (100u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (101u + sizeof(_g4_t_v29)) > _g4_s8 ? (101u + sizeof(_g4_t_v29)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 101u);

  if ( *(self + 1) != nullptr )
    VoxFreeInternal(*(self + 1));
  *(self + 1) = nullptr;
  *self = nullptr;
  Instance = (int)(uintptr_t)(vox::FileSystemInterface::GetInstance(v21));
  v25 = Instance;
  v22 = false;
  if ( Instance != 0 )
  {
    v3 = G4_VCALL<int>(Instance, 8, a2, 6);
    v26 = (vox::FileInterface::Self *)v3;
    if ( v3 != 0 )
    {
      v4 = G4_VCALL<int>(v3, 8, v27, 1, 28);
      v5 = false;
      v6 = v4 == 28;
      if ( v27[0] != 67 )
        v6 = false;
      if ( v27[1] != 99 )
        v6 = false;
      if ( v27[2] != 110 )
        v6 = false;
      if ( v27[3] != 75 )
        v6 = false;
      if ( v27[8] != 70 )
        v6 = false;
      if ( v27[9] != 120 )
        v6 = false;
      if ( v27[10] != 66 )
        v6 = false;
      if ( v27[11] == 107 )
        v5 = v6;
      v22 = v5;
      v7 = v27[15] + ((v27[14] + (((v27[12] << 8) + v27[13]) << 8)) << 8);
      *self = (void *)(v27[27] + ((v27[26] + ((v27[25] + (v27[24] << 8)) << 8)) << 8));
      if ( v7 > 2 )
      {
        v22 = false;
      }
      else if ( v5 )
      {
        G4_VCALL<void>(v26, 12, 128, 1);
        v8 = VoxAllocInternal(
               92 * (uint32_t)(uintptr_t)(*self),
               0,
               (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/Plugins/DSP/CustomDSP.cpp"),
               (int)(uintptr_t)("loadBank"),
               235);
        v9 = *self;
        *(self + 1) = (void *)v8;
        if ( (int)(uintptr_t)(v9) > 0 )
        {
          v24 = 0;
          v23 = 0;
          while ( 1 )
          {
            vox::ReverbHQParameters::ReverbHQParameters((vox::ReverbHQParameters::Self *)&v28);
            v13 = (uint8_t *)((char *)*(self + 1) + v24);
            v14 = (uint16_t *)(v13);
            v15 = &v28;
            v16 = 89;
            if ( ((uint8_t)(uintptr_t)v13 & 1) != 0 )
            {
              v14 = (uint16_t *)(v13 + 1);
              v15 = &v29;
              *v13 = v28;
              v16 = 88;
              if ( ((unsigned int)(uintptr_t)(v13 + 1) & 2) != 0 )
              {
LABEL_33:
                v16 -= 2;
                *v14 = *(uint16_t *)v15;
                v15 += 2;
                ++v14;
              }
            }
            else if ( ((uint8_t)(uintptr_t)v13 & 2) != 0 )
            {
              goto LABEL_33;
            }
            v10 = 0;
            std::memcpy(v14, v15, 4 * (v16 >> 2));
            v12 = &v15[4 * (v16 >> 2)];
            v11 = &v14[2 * (v16 >> 2)];
            if ( (v16 & 2) != 0 )
            {
              *v11 = *(uint16_t *)v12;
              v10 = 1;
            }
            if ( (v16 & 1) != 0 )
              LOBYTE(v11[v10]) = v12[v10 * 2];
            vox::ReverbHQParameters::Destroy((vox::ReverbHQParameters::Self *)&v28);
            ++v23;
            v9 = *self;
            v24 += 92;
            if ( (int)(uintptr_t)(*self) <= v23 )
            {
              v8 = (int)(uintptr_t)(*(self + 1));
              break;
            }
          }
        }
        if ( v8 != 0 )
        {
          v18 = 0;
          if ( (int)(uintptr_t)(v9) > 0 )
          {
            while ( 1 )
            {
              v19 = 92 * v18++;
              ReverbSettings = vox::ReverbHQParameters::loadReverbSettings((vox::ReverbHQParameters::Self *)(v19 + v8), v26);
              if ( (int)(uintptr_t)(*self) <= v18 )
                break;
              if ( ReverbSettings == 0 )
                goto LABEL_42;
              v8 = (int)(uintptr_t)(*(self + 1));
            }
            v22 = ReverbSettings;
            if ( ReverbSettings != 0 )
              goto LABEL_35;
LABEL_42:
            VoxFreeInternal(*(self + 1));
            *self = nullptr;
            v22 = false;
          }
        }
        else
        {
          *self = nullptr;
        }
      }
LABEL_35:
      G4_VCALL<void>(v25, 12, v26);
    }
  }
  return v22;
}

