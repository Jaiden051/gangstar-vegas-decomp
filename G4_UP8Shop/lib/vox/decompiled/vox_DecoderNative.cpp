#include "Core/Utils/DecompTypes.h"
#include "vox_DecoderNative.h"

// ----------------------------------------------------------------------------
// Function: vox::DecoderNative::DestroyCursor  (binary VA: 0xfea250)
// Original: vox::DecoderNative::DestroyCursor
// ----------------------------------------------------------------------------
int vox::DecoderNative::DestroyCursor(vox::DecoderNative::Self *self, vox::DecoderCursorInterface::Self *a2)
{
  int result;

  if ( a2 != nullptr )
  {
    (**(void (***)(vox::DecoderCursorInterface::Self *))a2)(a2);
    return VoxFreeInternal(a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNative::Construct  (binary VA: 0xfea520)
// Original: vox::DecoderNative::DecoderNative
// ----------------------------------------------------------------------------
vox::DecoderNative::Self * vox::DecoderNative::Construct(vox::DecoderNative::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D028);
  *((uint32_t *)self + 6) = 0;
  *((uint8_t *)self + 12) = 0;
  *((uint8_t *)self + 13) = 0;
  *((uint8_t *)self + 14) = 0;
  *((uint8_t *)self + 15) = 0;
  *((uint8_t *)self + 16) = 0;
  *((uint8_t *)self + 17) = 0;
  *((uint8_t *)self + 18) = 0;
  *((uint8_t *)self + 19) = 0;
  *((uint16_t *)self + 18) = 0;
  *((uint16_t *)self + 19) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint16_t *)self + 23) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  vox::NativePlaylistsManager::Construct((vox::DecoderNative::Self *)((char *)self + 56));
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint8_t *)self + 140) = 1;
  *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)((char *)self + 116);
  *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)((char *)self + 116);
  *((uint32_t *)self + 34) = 0;
  return (vox::DecoderNative::Self *)((char *)self + 116);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNative::CreateFmtExtendedInfosContainer  (binary VA: 0xfea680)
// Original: vox::DecoderNative::CreateFmtExtendedInfosContainer
// ----------------------------------------------------------------------------
uint16_t * vox::DecoderNative::CreateFmtExtendedInfosContainer(vox::DecoderNative::Self *self)
{
  uint16_t *result;

  result = (uint16_t *)VoxAllocInternal(
                      0x406u,
                      0,
                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
                      (int)(uintptr_t)("CreateFmtExtendedInfosContainer"),
                      72);
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  *((uint32_t *)self + 34) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNative::CreatePlaylistsContainer  (binary VA: 0xfea6f0)
// Original: vox::DecoderNative::CreatePlaylistsContainer
// ----------------------------------------------------------------------------
int vox::DecoderNative::CreatePlaylistsContainer(vox::DecoderNative::Self *self, int a2)
{
  return ((vox::NativePlaylistsManager::Init((vox::DecoderNative::Self *)((char *)self + 56), a2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNative::CreateSegmentsInfoContainers  (binary VA: 0xfea720)
// Original: vox::DecoderNative::CreateSegmentsInfoContainers
// ----------------------------------------------------------------------------
int vox::DecoderNative::CreateSegmentsInfoContainers(vox::DecoderNative::Self *self, unsigned int a2, int a3)
{
  int result;
  int v4;
  unsigned int v5;
  size_t v6;
  int v7;
  int v8;
  void **v9;
  char *v10;
  char *v11;
  char *v12;
  unsigned int v13;
  char *v14;
  void **v15;
  vox::DecoderNative::Self *v16;
  int v17;
  void **v18;
  signed int v19;
  void **i;
  char *v21;
  char *v22;
  char *v23;
  unsigned int v24;
  char *v25;
  int v26;
  uint32_t *v27;
  int v28;
  uint32_t *v29;
  int v30;
  int v31;
  int *v32;
  int v33;
  char *v34;
  char *v35;
  uint32_t *v36;
  char **v37;
  int *v38;
  char **v39;
  int v40;
  int v41;
  uint32_t *v42;
  char *v43;
  char *v44;
  void **v45;
  void **v46;
  int *v47;
  char **v48;
  int v49;
  int v50;
  uint32_t *v51;
  char *v52;
  char *v53;
  void **v54;
  void **v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef void **_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef void **_g4_t_v61;
  typedef int _g4_t_v62;
  typedef char *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef size_t _g4_t_v65;
  typedef uint8_t *_g4_t_v66;
  typedef char *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef char **_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef uint8_t *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef unsigned int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef char *_g4_t_v76;
  typedef char *_g4_t_v77;
  typedef char *_g4_t_v78;
  typedef void **_g4_t_v79;
  typedef unsigned int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef char **_g4_t_v83;
  typedef void **_g4_t_v84;
  typedef char **_g4_t_v85;
  typedef int _g4_t_v86;
  typedef size_t _g4_t_v87;
  typedef size_t _g4_t_v88;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v56)) > _g4_s0 ? (0u + sizeof(_g4_t_v56)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v57)) > _g4_s1 ? (0u + sizeof(_g4_t_v57)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v58)) > _g4_s2 ? (8u + sizeof(_g4_t_v58)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v59)) > _g4_s3 ? (8u + sizeof(_g4_t_v59)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v60)) > _g4_s4 ? (12u + sizeof(_g4_t_v60)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v61)) > _g4_s5 ? (16u + sizeof(_g4_t_v61)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v62)) > _g4_s6 ? (16u + sizeof(_g4_t_v62)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v63)) > _g4_s7 ? (20u + sizeof(_g4_t_v63)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v64)) > _g4_s8 ? (20u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v65)) > _g4_s9 ? (24u + sizeof(_g4_t_v65)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v66)) > _g4_s10 ? (28u + sizeof(_g4_t_v66)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v67)) > _g4_s11 ? (28u + sizeof(_g4_t_v67)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v68)) > _g4_s12 ? (28u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v69)) > _g4_s13 ? (28u + sizeof(_g4_t_v69)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v70)) > _g4_s14 ? (28u + sizeof(_g4_t_v70)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v71)) > _g4_s15 ? (32u + sizeof(_g4_t_v71)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v72)) > _g4_s16 ? (32u + sizeof(_g4_t_v72)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v73)) > _g4_s17 ? (32u + sizeof(_g4_t_v73)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v74)) > _g4_s18 ? (36u + sizeof(_g4_t_v74)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v75)) > _g4_s19 ? (36u + sizeof(_g4_t_v75)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v76)) > _g4_s20 ? (36u + sizeof(_g4_t_v76)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v77)) > _g4_s21 ? (36u + sizeof(_g4_t_v77)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v78)) > _g4_s22 ? (36u + sizeof(_g4_t_v78)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v79)) > _g4_s23 ? (40u + sizeof(_g4_t_v79)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v80)) > _g4_s24 ? (40u + sizeof(_g4_t_v80)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v81)) > _g4_s25 ? (40u + sizeof(_g4_t_v81)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v82)) > _g4_s26 ? (40u + sizeof(_g4_t_v82)) : _g4_s26,
    _g4_s28 = (44u + sizeof(_g4_t_v83)) > _g4_s27 ? (44u + sizeof(_g4_t_v83)) : _g4_s27,
    _g4_s29 = (44u + sizeof(_g4_t_v84)) > _g4_s28 ? (44u + sizeof(_g4_t_v84)) : _g4_s28,
    _g4_s30 = (44u + sizeof(_g4_t_v85)) > _g4_s29 ? (44u + sizeof(_g4_t_v85)) : _g4_s29,
    _g4_s31 = (48u + sizeof(_g4_t_v86)) > _g4_s30 ? (48u + sizeof(_g4_t_v86)) : _g4_s30,
    _g4_s32 = (52u + sizeof(_g4_t_v87)) > _g4_s31 ? (52u + sizeof(_g4_t_v87)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v88)) > _g4_s32 ? (56u + sizeof(_g4_t_v88)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 0u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 0u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 20u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 28u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 32u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 32u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 36u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 36u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 36u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 36u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 36u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 40u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 40u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 40u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 40u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 44u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 44u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 44u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 48u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 52u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 56u);

  result = VoxAllocInternal(
             a3 + 24 * a2 - 24,
             0,
             (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
             (int)(uintptr_t)("CreateSegmentsInfoContainers"),
             92);
  *((uint32_t *)self + 13) = result;
  if ( result != 0 )
  {
    *((uint32_t *)self + 12) = a2;
    if ( a2 > 0x15555555 )
      sub_1900180("vector::reserve");
    v83 = *((char ***)self + 22);
    if ( a2 > -1431655765 * ((*((uint32_t *)self + 24) - (int)(uintptr_t)(v83)) >> 2) )
    {
      v37 = *((char ***)self + 23);
      v69 = v37;
      v59 = -1431655765 * (v37 - v83);
      v65 = 0;
      v62 = 0;
      if ( a2 != 0 )
      {
        v65 = 12 * a2;
        v62 = VoxAllocInternal(12 * a2, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        v37 = v69;
      }
      if ( v83 != v37 )
      {
        v38 = (int *)v62;
        do
        {
          if ( v38 != nullptr )
          {
            v39 = v83;
            v40 = 0;
            v81 = 0;
            v41 = (v83[1] - *v83) >> 2;
            *v38 = 0;
            v38[1] = 0;
            v38[2] = 0;
            if ( v41 != 0 )
            {
              v40 = 4 * v41;
              v81 = VoxAllocInternal(
                      4 * v41,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
              v39 = v83;
            }
            v42 = (uint32_t *)v81;
            *v38 = v81;
            v38[1] = v81;
            v38[2] = v81 + v40;
            v43 = v39[1];
            v77 = *v39;
            if ( v43 != *v39 )
            {
              v44 = *v39;
              do
              {
                if ( v42 != nullptr )
                  *v42 = *(uint32_t *)v44;
                v44 += 4;
                ++v42;
              }
              while ( v43 != v44 );
              v42 = (uint32_t *)(v81 + 4 * ((unsigned int)(v43 - (v77 + 4)) >> 2) + 4);
            }
            v38[1] = (int)(uintptr_t)(v42);
          }
          v83 += 3;
          v38 += 3;
        }
        while ( v69 != v83 );
      }
      v45 = *((void ***)self + 23);
      v46 = *((void ***)self + 22);
      if ( v45 != v46 )
      {
        do
        {
          if ( *v46 != nullptr )
            VoxFreeInternal(*v46);
          v46 += 3;
        }
        while ( v45 != v46 );
        v46 = *((void ***)self + 22);
      }
      if ( v46 != nullptr )
        VoxFreeInternal(v46);
      *((uint32_t *)self + 22) = v62;
      *((uint32_t *)self + 23) = v62 + 12 * v59;
      *((uint32_t *)self + 24) = v62 + v65;
    }
    else
    {
      v65 = 12 * a2;
    }
    v86 = 0;
    v87 = 0;
    v88 = 0;
    if ( a2 != 0 )
    {
      v4 = VoxAllocInternal(v65, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      v61 = (void **)v4;
      v86 = v4;
      v5 = a2;
      v65 += v4;
      v88 = v65;
      do
      {
        if ( v4 != 0 )
        {
          *(uint32_t *)v4 = 0;
          *(uint32_t *)(v4 + 4) = 0;
          *(uint32_t *)(v4 + 8) = 0;
        }
        v4 += 12;
        --v5;
      }
      while ( v5 != 0 );
      v6 = v65;
      v84 = v61;
    }
    else
    {
      v6 = v65;
      v61 = nullptr;
      v88 = v65;
      v84 = nullptr;
    }
    v87 = v6;
    if ( &v86 != (int *)((char *)self + 88) )
    {
      v7 = (int)(v65 - (uint32_t)(uintptr_t)(v84)) >> 2;
      v60 = -1431655765 * v7;
      v71 = -1431655765 * v7;
      v58 = *((void ***)self + 22);
      if ( -1431655765 * v7 > (unsigned int)(-1431655765 * ((*((uint32_t *)self + 24) - (int)(uintptr_t)(v58)) >> 2)) )
      {
        v64 = 0;
        v70 = 0;
        if ( v60 != 0 )
        {
          v64 = 4 * v7;
          v70 = VoxAllocInternal(
                  4 * v7,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
        }
        if ( (void **)v65 != v84 )
        {
          v47 = (int *)v70;
          do
          {
            if ( v47 != nullptr )
            {
              v48 = (char **)v84;
              v49 = 0;
              v82 = 0;
              v50 = ((uint8_t *)v84[1] - (uint8_t *)*v84) >> 2;
              *v47 = 0;
              v47[1] = 0;
              v47[2] = 0;
              if ( v50 != 0 )
              {
                v49 = 4 * v50;
                v82 = VoxAllocInternal(
                        4 * v50,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
                v48 = (char **)v84;
              }
              v51 = (uint32_t *)v82;
              *v47 = v82;
              v47[1] = v82;
              v47[2] = v82 + v49;
              v52 = v48[1];
              v78 = *v48;
              if ( v52 != *v48 )
              {
                v53 = *v48;
                do
                {
                  if ( v51 != nullptr )
                    *v51 = *(uint32_t *)v53;
                  v53 += 4;
                  ++v51;
                }
                while ( v52 != v53 );
                v51 = (uint32_t *)(v82 + 4 * ((unsigned int)(v52 - (v78 + 4)) >> 2) + 4);
              }
              v47[1] = (int)(uintptr_t)(v51);
            }
            v84 += 3;
            v47 += 3;
          }
          while ( (void **)v65 != v84 );
        }
        v54 = *((void ***)self + 23);
        v55 = *((void ***)self + 22);
        if ( v54 != v55 )
        {
          do
          {
            if ( *v55 != nullptr )
              VoxFreeInternal(*v55);
            v55 += 3;
          }
          while ( v54 != v55 );
          v55 = *((void ***)self + 22);
        }
        if ( v55 != nullptr )
          VoxFreeInternal(v55);
        v16 = self;
        *((uint32_t *)self + 22) = v70;
        v17 = v64 + v70;
        *((uint32_t *)self + 24) = v64 + v70;
      }
      else
      {
        v8 = (*((uint32_t *)self + 23) - (int)(uintptr_t)(v58)) >> 2;
        v79 = *((void ***)self + 23);
        if ( v60 > (unsigned int)(-1431655765 * v8) )
        {
          v19 = 4 * v8;
          v75 = -1431655765 * (v19 >> 2);
          if ( v75 > 0 )
          {
            for ( i = *((void ***)self + 22); ; i += 3 )
            {
              if ( i != v84 )
              {
                v72 = (uint8_t *)(*i);
                v22 = (char *)*v84;
                v67 = (char *)v84[1];
                v80 = (v67 - (char *)((uint8_t *)*v84)) >> 2;
                if ( v80 > ((uint8_t *)i[2] - (uint8_t *)*i) >> 2 )
                {
                  v28 = 0;
                  v73 = 0;
                  if ( v80 != 0 )
                  {
                    v73 = 4 * v80;
                    v28 = VoxAllocInternal(
                            4 * v80,
                            0,
                            (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                            (int)(uintptr_t)("internal_new"),
                            181);
                  }
                  if ( v22 != v67 )
                  {
                    v29 = (uint32_t *)v28;
                    do
                    {
                      if ( v29 != nullptr )
                        *v29 = *(uint32_t *)v22;
                      v22 += 4;
                      ++v29;
                    }
                    while ( v67 != v22 );
                  }
                  if ( *i != nullptr )
                  {
                    v57 = v28;
                    VoxFreeInternal(*i);
                    v28 = v57;
                  }
                  *i = (void *)v28;
                  v21 = (char *)(v28 + v73);
                  i[2] = (void *)(v28 + v73);
                }
                else
                {
                  v23 = (char *)i[1];
                  v24 = (v23 - (char *)(v72)) >> 2;
                  if ( v80 <= v24 )
                  {
                    v21 = (char *)*i;
                    if ( v80 != 0 )
                    {
                      memmove(v72, v22, 4 * v80);
                      v21 = (char *)*i + 4 * v80;
                    }
                  }
                  else
                  {
                    v25 = &v22[4 * v24];
                    if ( v24 != 0 )
                    {
                      memmove(v72, v22, 4 * v24);
                      v23 = (char *)i[1];
                      v72 = (uint8_t *)(*i);
                      v67 = (char *)v84[1];
                      v25 = (char *)*v84 + ((v23 - (char *)((uint8_t *)*i)) & 0xFFFFFFFC);
                    }
                    if ( v67 == v25 )
                    {
                      v21 = (char *)(&v72[4 * v80]);
                    }
                    else
                    {
                      do
                      {
                        if ( v23 != nullptr )
                          *(uint32_t *)v23 = *(uint32_t *)v25;
                        v25 += 4;
                        v23 += 4;
                      }
                      while ( v67 != v25 );
                      v21 = (char *)*i + 4 * v80;
                    }
                  }
                }
                i[1] = v21;
              }
              if ( --v75 == 0 )
                break;
              v84 += 3;
            }
            v79 = *((void ***)self + 23);
            v58 = *((void ***)self + 22);
            v19 = ((char *)v79 - (char *)v58) & 0xFFFFFFFC;
          }
          v85 = (char **)((char *)v61 + v19);
          if ( (void **)((char *)v61 + v19) == (void **)v65 )
          {
            v16 = self;
            v17 = (int)(uintptr_t)(&v58[3 * v60]);
          }
          else
          {
            do
            {
              if ( v79 != nullptr )
              {
                v30 = 0;
                v31 = 0;
                v32 = (int *)v79;
                v33 = (v85[1] - *v85) >> 2;
                *v79 = nullptr;
                v79[1] = nullptr;
                v79[2] = nullptr;
                if ( v33 != 0 )
                {
                  v30 = 4 * v33;
                  v31 = VoxAllocInternal(
                          4 * v33,
                          0,
                          (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                          (int)(uintptr_t)("internal_new"),
                          181);
                  v32 = (int *)v79;
                }
                *v32 = v31;
                v32[1] = v31;
                v32[2] = v31 + v30;
                v34 = *v85;
                v35 = v85[1];
                v76 = *v85;
                if ( v35 != *v85 )
                {
                  v36 = (uint32_t *)v31;
                  do
                  {
                    if ( v36 != nullptr )
                      *v36 = *(uint32_t *)v34;
                    v34 += 4;
                    ++v36;
                  }
                  while ( v35 != v34 );
                  v31 += 4 * ((unsigned int)(v35 - (v76 + 4)) >> 2) + 4;
                }
                v79[1] = (void *)v31;
              }
              v85 += 3;
              v79 += 3;
            }
            while ( v85 != (char **)v65 );
            v16 = self;
            v17 = *((uint32_t *)self + 22) + 12 * v60;
          }
        }
        else
        {
          if ( v60 > 0 )
          {
            v9 = *((void ***)self + 22);
            while ( 1 )
            {
              if ( v9 != v84 )
              {
                v66 = (uint8_t *)(*v9);
                v11 = (char *)*v84;
                v63 = (char *)v84[1];
                v74 = (v63 - (char *)((uint8_t *)*v84)) >> 2;
                if ( v74 > ((uint8_t *)v9[2] - (uint8_t *)*v9) >> 2 )
                {
                  v26 = 0;
                  v68 = 0;
                  if ( v74 != 0 )
                  {
                    v68 = 4 * v74;
                    v26 = VoxAllocInternal(
                            4 * v74,
                            0,
                            (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                            (int)(uintptr_t)("internal_new"),
                            181);
                  }
                  if ( v11 != v63 )
                  {
                    v27 = (uint32_t *)v26;
                    do
                    {
                      if ( v27 != nullptr )
                        *v27 = *(uint32_t *)v11;
                      v11 += 4;
                      ++v27;
                    }
                    while ( v63 != v11 );
                  }
                  if ( *v9 != nullptr )
                  {
                    v56 = v26;
                    VoxFreeInternal(*v9);
                    v26 = v56;
                  }
                  *v9 = (void *)v26;
                  v10 = (char *)(v26 + v68);
                  v9[2] = (void *)(v26 + v68);
                }
                else
                {
                  v12 = (char *)v9[1];
                  v13 = (v12 - (char *)(v66)) >> 2;
                  if ( v74 <= v13 )
                  {
                    v10 = (char *)*v9;
                    if ( v74 != 0 )
                    {
                      memmove(v66, v11, 4 * v74);
                      v10 = (char *)*v9 + 4 * v74;
                    }
                  }
                  else
                  {
                    v14 = &v11[4 * v13];
                    if ( v13 != 0 )
                    {
                      memmove(v66, v11, 4 * v13);
                      v12 = (char *)v9[1];
                      v66 = (uint8_t *)(*v9);
                      v63 = (char *)v84[1];
                      v14 = (char *)*v84 + ((v12 - (char *)((uint8_t *)*v9)) & 0xFFFFFFFC);
                    }
                    if ( v63 == v14 )
                    {
                      v10 = (char *)(&v66[4 * v74]);
                    }
                    else
                    {
                      do
                      {
                        if ( v12 != nullptr )
                          *(uint32_t *)v12 = *(uint32_t *)v14;
                        v14 += 4;
                        v12 += 4;
                      }
                      while ( v14 != v63 );
                      v10 = (char *)*v9 + 4 * v74;
                    }
                  }
                }
                v9[1] = v10;
              }
              v9 += 3;
              if ( --v71 == 0 )
                break;
              v84 += 3;
            }
            v58 += 3 * v60;
          }
          if ( v58 != v79 )
          {
            v15 = v58;
            do
            {
              if ( *v15 != nullptr )
                VoxFreeInternal(*v15);
              v15 += 3;
            }
            while ( v79 != v15 );
          }
          v16 = self;
          v17 = *((uint32_t *)self + 22) + 12 * v60;
        }
      }
      *((uint32_t *)v16 + 23) = v17;
    }
    if ( (void **)v65 != v61 )
    {
      v18 = v61;
      do
      {
        if ( *v18 != nullptr )
          VoxFreeInternal(*v18);
        v18 += 3;
      }
      while ( (void **)v65 != v18 );
    }
    result = (int)(uintptr_t)(v61);
    if ( v61 != nullptr )
      return VoxFreeInternal(v61);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNative::CreateStatesContainer  (binary VA: 0xfeb200)
// Original: vox::DecoderNative::CreateStatesContainer
// ----------------------------------------------------------------------------
int vox::DecoderNative::CreateStatesContainer(vox::DecoderNative::Self *self, int a2)
{
  int result;

  result = VoxAllocInternal(
             4 * a2,
             0,
             (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
             (int)(uintptr_t)("CreateStatesContainer"),
             112);
  *((uint32_t *)self + 19) = result;
  if ( result != 0 )
    *((uint32_t *)self + 18) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNative::CreateTransitionRulesContainer  (binary VA: 0xfeb280)
// Original: vox::DecoderNative::CreateTransitionRulesContainer
// ----------------------------------------------------------------------------
int vox::DecoderNative::CreateTransitionRulesContainer(vox::DecoderNative::Self *self, int a2, int a3)
{
  int result;

  result = VoxAllocInternal(
             a3 + 36 * a2 - 36,
             0,
             (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
             (int)(uintptr_t)("CreateTransitionRulesContainer"),
             130);
  *((uint32_t *)self + 21) = result;
  if ( result != 0 )
    *((uint32_t *)self + 20) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNative::CreateTransitionsContainer  (binary VA: 0xfeb300)
// Original: vox::DecoderNative::CreateTransitionsContainer
// ----------------------------------------------------------------------------
unsigned int vox::DecoderNative::CreateTransitionsContainer(vox::DecoderNative::Self *self, unsigned int a2)
{
  int v2;
  unsigned int v3;
  size_t v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  char *v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  int *v14;
  int v15;
  void **v16;
  vox::DecoderNative::Self *v17;
  int v18;
  void **v19;
  unsigned int result;
  int j;
  char *v22;
  char **v23;
  char *v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  uint32_t *v28;
  char *v29;
  uint32_t *v30;
  int v31;
  char *v32;
  uint32_t *v33;
  int v34;
  signed int v35;
  char *v36;
  int v37;
  char *v38;
  char *v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  char *v45;
  int v46;
  int v47;
  char *v48;
  int v49;
  int v50;
  int v51;
  uint32_t *v52;
  int v53;
  int v54;
  uint32_t *v55;
  int v56;
  int v57;
  int v58;
  int v59;
  uint32_t *v60;
  char *v61;
  char *v62;
  int v63;
  int v64;
  int v65;
  int v66;
  uint32_t *v67;
  char *v68;
  char *v69;
  int v70;
  void **v71;
  void **v72;
  int v73;
  int v74;
  int v75;
  uint32_t *v76;
  char *v77;
  char *v78;
  int v79;
  void **v80;
  void **v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int *_g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef char **_g4_t_v90;
  typedef int _g4_t_v91;
  typedef size_t _g4_t_v92;
  typedef size_t _g4_t_v93;
  typedef int _g4_t_v94;
  typedef char *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef char *_g4_t_v98;
  typedef unsigned int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef char **_g4_t_v101;
  typedef int *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef char **_g4_t_v105;
  typedef char *_g4_t_v106;
  typedef char *_g4_t_v107;
  typedef int *_g4_t_v108;
  typedef int _g4_t_i;
  typedef char *_g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef char **_g4_t_v113;
  typedef int _g4_t_v114;
  typedef unsigned int _g4_t_v115;
  typedef char **_g4_t_v116;
  typedef char *_g4_t_v117;
  typedef char *_g4_t_v118;
  typedef int *_g4_t_v119;
  typedef int *_g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int *_g4_t_v123;
  typedef int _g4_t_v124;
  typedef size_t _g4_t_v125;
  typedef size_t _g4_t_v126;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v82)) > _g4_s0 ? (12u + sizeof(_g4_t_v82)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v83)) > _g4_s1 ? (12u + sizeof(_g4_t_v83)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v84)) > _g4_s2 ? (20u + sizeof(_g4_t_v84)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v85)) > _g4_s3 ? (24u + sizeof(_g4_t_v85)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v86)) > _g4_s4 ? (24u + sizeof(_g4_t_v86)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v87)) > _g4_s5 ? (28u + sizeof(_g4_t_v87)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v88)) > _g4_s6 ? (28u + sizeof(_g4_t_v88)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v89)) > _g4_s7 ? (32u + sizeof(_g4_t_v89)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v90)) > _g4_s8 ? (32u + sizeof(_g4_t_v90)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v91)) > _g4_s9 ? (32u + sizeof(_g4_t_v91)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v92)) > _g4_s10 ? (36u + sizeof(_g4_t_v92)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v93)) > _g4_s11 ? (36u + sizeof(_g4_t_v93)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v94)) > _g4_s12 ? (40u + sizeof(_g4_t_v94)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v95)) > _g4_s13 ? (40u + sizeof(_g4_t_v95)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v96)) > _g4_s14 ? (40u + sizeof(_g4_t_v96)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v97)) > _g4_s15 ? (40u + sizeof(_g4_t_v97)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v98)) > _g4_s16 ? (44u + sizeof(_g4_t_v98)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v99)) > _g4_s17 ? (44u + sizeof(_g4_t_v99)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v100)) > _g4_s18 ? (44u + sizeof(_g4_t_v100)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v101)) > _g4_s19 ? (44u + sizeof(_g4_t_v101)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v102)) > _g4_s20 ? (48u + sizeof(_g4_t_v102)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v103)) > _g4_s21 ? (48u + sizeof(_g4_t_v103)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v104)) > _g4_s22 ? (48u + sizeof(_g4_t_v104)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v105)) > _g4_s23 ? (48u + sizeof(_g4_t_v105)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v106)) > _g4_s24 ? (48u + sizeof(_g4_t_v106)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v107)) > _g4_s25 ? (48u + sizeof(_g4_t_v107)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v108)) > _g4_s26 ? (52u + sizeof(_g4_t_v108)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_i)) > _g4_s27 ? (52u + sizeof(_g4_t_i)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v110)) > _g4_s28 ? (52u + sizeof(_g4_t_v110)) : _g4_s28,
    _g4_s30 = (52u + sizeof(_g4_t_v111)) > _g4_s29 ? (52u + sizeof(_g4_t_v111)) : _g4_s29,
    _g4_s31 = (52u + sizeof(_g4_t_v112)) > _g4_s30 ? (52u + sizeof(_g4_t_v112)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v113)) > _g4_s31 ? (56u + sizeof(_g4_t_v113)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v114)) > _g4_s32 ? (56u + sizeof(_g4_t_v114)) : _g4_s32,
    _g4_s34 = (56u + sizeof(_g4_t_v115)) > _g4_s33 ? (56u + sizeof(_g4_t_v115)) : _g4_s33,
    _g4_s35 = (56u + sizeof(_g4_t_v116)) > _g4_s34 ? (56u + sizeof(_g4_t_v116)) : _g4_s34,
    _g4_s36 = (56u + sizeof(_g4_t_v117)) > _g4_s35 ? (56u + sizeof(_g4_t_v117)) : _g4_s35,
    _g4_s37 = (56u + sizeof(_g4_t_v118)) > _g4_s36 ? (56u + sizeof(_g4_t_v118)) : _g4_s36,
    _g4_s38 = (56u + sizeof(_g4_t_v119)) > _g4_s37 ? (56u + sizeof(_g4_t_v119)) : _g4_s37,
    _g4_s39 = (60u + sizeof(_g4_t_v120)) > _g4_s38 ? (60u + sizeof(_g4_t_v120)) : _g4_s38,
    _g4_s40 = (60u + sizeof(_g4_t_v121)) > _g4_s39 ? (60u + sizeof(_g4_t_v121)) : _g4_s39,
    _g4_s41 = (60u + sizeof(_g4_t_v122)) > _g4_s40 ? (60u + sizeof(_g4_t_v122)) : _g4_s40,
    _g4_s42 = (60u + sizeof(_g4_t_v123)) > _g4_s41 ? (60u + sizeof(_g4_t_v123)) : _g4_s41,
    _g4_s43 = (64u + sizeof(_g4_t_v124)) > _g4_s42 ? (64u + sizeof(_g4_t_v124)) : _g4_s42,
    _g4_s44 = (68u + sizeof(_g4_t_v125)) > _g4_s43 ? (68u + sizeof(_g4_t_v125)) : _g4_s43,
    _g4_s45 = (72u + sizeof(_g4_t_v126)) > _g4_s44 ? (72u + sizeof(_g4_t_v126)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 12u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 12u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 20u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 24u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 24u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 28u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 28u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 32u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 32u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 32u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 36u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 36u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 40u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 40u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 40u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 40u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 44u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 44u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 44u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 44u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 48u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 48u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 48u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 48u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 48u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 48u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 52u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 52u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 52u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 52u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 52u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 56u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 56u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 56u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 56u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 56u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 56u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 56u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 60u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 60u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 60u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 60u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 64u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 68u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 72u);

  if ( a2 > 0x15555555 )
    sub_1900180("vector::reserve");
  v113 = *((char ***)self + 25);
  if ( a2 > -1431655765 * ((*((uint32_t *)self + 27) - (int)(uintptr_t)(v113)) >> 2) )
  {
    v92 = 0;
    v101 = *((char ***)self + 26);
    v88 = 0;
    v86 = -1431655765 * (v101 - v113);
    if ( a2 != 0 )
    {
      v92 = 12 * a2;
      v88 = VoxAllocInternal(12 * a2, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    }
    if ( v113 != v101 )
    {
      v123 = (int *)v88;
      do
      {
        if ( v123 != nullptr )
        {
          v111 = 0;
          v64 = v113[1] - *v113;
          *v123 = 0;
          v123[1] = 0;
          v123[2] = 0;
          v65 = 0;
          v66 = v64 >> 3;
          if ( v66 != 0 )
          {
            v65 = 8 * v66;
            v111 = VoxAllocInternal(
                     8 * v66,
                     0,
                     (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                     (int)(uintptr_t)("internal_new"),
                     181);
          }
          v67 = (uint32_t *)v111;
          *v123 = v111;
          v123[1] = v111;
          v123[2] = v111 + v65;
          v68 = v113[1];
          v106 = *v113;
          if ( v68 != *v113 )
          {
            v69 = *v113;
            do
            {
              if ( v67 != nullptr )
              {
                v70 = *(uint32_t *)v69;
                v67[1] = *((uint32_t *)v69 + 1);
                *v67 = v70;
              }
              v69 += 8;
              v67 += 2;
            }
            while ( v68 != v69 );
            v67 = (uint32_t *)(v111 + 8 * ((unsigned int)(v68 - (v106 + 8)) >> 3) + 8);
          }
          v123[1] = (int)(uintptr_t)(v67);
        }
        v113 += 3;
        v123 += 3;
      }
      while ( v101 != v113 );
    }
    v71 = *((void ***)self + 26);
    v72 = *((void ***)self + 25);
    if ( v71 != v72 )
    {
      do
      {
        if ( *v72 != nullptr )
          VoxFreeInternal(*v72);
        v72 += 3;
      }
      while ( v71 != v72 );
      v72 = *((void ***)self + 25);
    }
    if ( v72 != nullptr )
      VoxFreeInternal(v72);
    *((uint32_t *)self + 25) = v88;
    *((uint32_t *)self + 26) = v88 + 12 * v86;
    *((uint32_t *)self + 27) = v88 + v92;
  }
  else
  {
    v92 = 12 * a2;
  }
  v124 = 0;
  v125 = 0;
  v126 = 0;
  if ( a2 != 0 )
  {
    v2 = VoxAllocInternal(v92, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    v87 = (int *)v2;
    v124 = v2;
    v3 = a2;
    v92 += v2;
    v126 = v92;
    do
    {
      if ( v2 != 0 )
      {
        *(uint32_t *)v2 = 0;
        *(uint32_t *)(v2 + 4) = 0;
        *(uint32_t *)(v2 + 8) = 0;
      }
      v2 += 12;
      --v3;
    }
    while ( v3 != 0 );
    v4 = v92;
    v120 = v87;
  }
  else
  {
    v4 = v92;
    v87 = nullptr;
    v126 = v92;
    v120 = nullptr;
  }
  v125 = v4;
  if ( &v124 != (int *)((char *)self + 100) )
  {
    v5 = (int)(v92 - (uint32_t)(uintptr_t)(v120)) >> 2;
    v85 = -1431655765 * v5;
    v89 = -1431655765 * v5;
    v114 = *((uint32_t *)self + 25);
    if ( -1431655765 * v5 > (unsigned int)(-1431655765 * ((*((uint32_t *)self + 27) - v114) >> 2)) )
    {
      v91 = 0;
      v97 = 0;
      if ( -1431655765 * v5 != 0 )
      {
        v91 = 4 * v5;
        v97 = VoxAllocInternal(4 * v5, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      }
      if ( (int *)v92 != v120 )
      {
        v119 = (int *)v97;
        do
        {
          if ( v119 != nullptr )
          {
            v112 = 0;
            v73 = v120[1] - *v120;
            *v119 = 0;
            v119[1] = 0;
            v119[2] = 0;
            v74 = 0;
            v75 = v73 >> 3;
            if ( v75 != 0 )
            {
              v74 = 8 * v75;
              v112 = VoxAllocInternal(
                       8 * v75,
                       0,
                       (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                       (int)(uintptr_t)("internal_new"),
                       181);
            }
            v76 = (uint32_t *)v112;
            *v119 = v112;
            v119[1] = v112;
            v119[2] = v112 + v74;
            v77 = (char *)v120[1];
            v107 = (char *)*v120;
            if ( v77 != (char *)*v120 )
            {
              v78 = (char *)*v120;
              do
              {
                if ( v76 != nullptr )
                {
                  v79 = *(uint32_t *)v78;
                  v76[1] = *((uint32_t *)v78 + 1);
                  *v76 = v79;
                }
                v78 += 8;
                v76 += 2;
              }
              while ( v77 != v78 );
              v76 = (uint32_t *)(v112 + 8 * ((unsigned int)(v77 - (v107 + 8)) >> 3) + 8);
            }
            v119[1] = (int)(uintptr_t)(v76);
          }
          v120 += 3;
          v119 += 3;
        }
        while ( (int *)v92 != v120 );
      }
      v80 = *((void ***)self + 26);
      v81 = *((void ***)self + 25);
      if ( v80 != v81 )
      {
        do
        {
          if ( *v81 != nullptr )
            VoxFreeInternal(*v81);
          v81 += 3;
        }
        while ( v80 != v81 );
        v81 = *((void ***)self + 25);
      }
      if ( v81 != nullptr )
        VoxFreeInternal(v81);
      v17 = self;
      *((uint32_t *)self + 25) = v97;
      v18 = v91 + v97;
      *((uint32_t *)self + 27) = v91 + v97;
    }
    else
    {
      v108 = *((int **)self + 26);
      v6 = ((int)(uintptr_t)(v108) - v114) >> 2;
      if ( v85 <= (unsigned int)(-1431655765 * v6) )
      {
        if ( v85 > 0 )
        {
          v102 = *((int **)self + 25);
          while ( 1 )
          {
            if ( v102 == v120 )
              goto LABEL_23;
            v7 = (char *)*v120;
            v98 = (char *)v120[1];
            v8 = (int)(uintptr_t)(&v98[-*v120]) >> 3;
            v9 = (char *)*v102;
            v94 = v8;
            if ( v8 > (unsigned int)((v102[2] - *v102) >> 3) )
            {
              v54 = 0;
              v84 = 0;
              if ( v8 != 0 )
              {
                v84 = 8 * v8;
                v54 = VoxAllocInternal(
                        8 * v8,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
              }
              if ( v7 != v98 )
              {
                v55 = (uint32_t *)v54;
                do
                {
                  if ( v55 != nullptr )
                  {
                    v56 = *(uint32_t *)v7;
                    v55[1] = *((uint32_t *)v7 + 1);
                    *v55 = v56;
                  }
                  v7 += 8;
                  v55 += 2;
                }
                while ( v98 != v7 );
              }
              if ( *v102 != 0 )
                VoxFreeInternal((void *)*v102);
              v14 = v102;
              *v102 = v54;
              v15 = v84 + v54;
              v102[2] = v15;
              goto LABEL_22;
            }
            v10 = (char *)v102[1];
            v11 = (v10 - v9) >> 3;
            if ( v8 > (unsigned int)v11 )
            {
              v45 = &v7[8 * v11];
              if ( v11 > 0 )
              {
                do
                {
                  v46 = *((uint32_t *)v7 + 1);
                  --v11;
                  *(uint32_t *)v9 = *(uint32_t *)v7;
                  *((uint32_t *)v9 + 1) = v46;
                  v7 += 8;
                  v9 += 8;
                }
                while ( v11 != 0 );
                v10 = (char *)v102[1];
                v9 = (char *)*v102;
                v98 = (char *)v120[1];
                v45 = (char *)(*v120 + ((unsigned int)(uintptr_t)(&v10[-*v102]) & 0xFFFFFFF8));
              }
              if ( v98 == v45 )
              {
LABEL_176:
                v14 = v102;
                v15 = (int)(uintptr_t)(&v9[8 * v94]);
                goto LABEL_22;
              }
              do
              {
                if ( v10 != nullptr )
                {
                  v47 = *(uint32_t *)v45;
                  *((uint32_t *)v10 + 1) = *((uint32_t *)v45 + 1);
                  *(uint32_t *)v10 = v47;
                }
                v45 += 8;
                v10 += 8;
              }
              while ( v45 != v98 );
            }
            else
            {
              if ( v8 <= 0 )
                goto LABEL_176;
              v12 = (v98 - v7) >> 3;
              do
              {
                v13 = *((uint32_t *)v7 + 1);
                --v12;
                *(uint32_t *)v9 = *(uint32_t *)v7;
                *((uint32_t *)v9 + 1) = v13;
                v7 += 8;
                v9 += 8;
              }
              while ( v12 != 0 );
            }
            v14 = v102;
            v15 = *v102 + 8 * v94;
LABEL_22:
            v14[1] = v15;
LABEL_23:
            v102 += 3;
            if ( --v89 == 0 )
            {
              v114 += 12 * v85;
              break;
            }
            v120 += 3;
          }
        }
        if ( v108 == (int *)v114 )
        {
          v17 = self;
          v18 = *((uint32_t *)self + 25) + 12 * v85;
        }
        else
        {
          v16 = (void **)v114;
          do
          {
            if ( *v16 != nullptr )
              VoxFreeInternal(*v16);
            v16 += 3;
          }
          while ( v108 != (int *)v16 );
          v17 = self;
          v18 = *((uint32_t *)self + 25) + 12 * v85;
        }
        goto LABEL_32;
      }
      v35 = 4 * v6;
      v100 = -1431655765 * (v35 >> 2);
      if ( v100 > 0 )
      {
        while ( 1 )
        {
          if ( (int *)v114 == v120 )
            goto LABEL_77;
          v36 = (char *)*v120;
          v110 = (char *)v120[1];
          v37 = (int)(uintptr_t)(&v110[-*v120]) >> 3;
          v38 = *(char **)v114;
          v104 = v37;
          if ( v37 > (unsigned int)((*(uint32_t *)(v114 + 8) - *(uint32_t *)v114) >> 3) )
          {
            v51 = 0;
            v96 = 0;
            if ( v37 != 0 )
            {
              v96 = 8 * v37;
              v51 = VoxAllocInternal(
                      8 * v37,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
            }
            if ( v36 != v110 )
            {
              v52 = (uint32_t *)v51;
              do
              {
                if ( v52 != nullptr )
                {
                  v53 = *(uint32_t *)v36;
                  v52[1] = *((uint32_t *)v36 + 1);
                  *v52 = v53;
                }
                v36 += 8;
                v52 += 2;
              }
              while ( v110 != v36 );
            }
            if ( *(uint32_t *)v114 != 0 )
              VoxFreeInternal(*(void **)v114);
            v43 = v114;
            *(uint32_t *)v114 = v51;
            v44 = v96 + v51;
            *(uint32_t *)(v114 + 8) = v44;
            goto LABEL_76;
          }
          v39 = *(char **)(v114 + 4);
          v40 = (v39 - v38) >> 3;
          if ( v37 > (unsigned int)v40 )
          {
            v48 = &v36[8 * v40];
            if ( v40 > 0 )
            {
              do
              {
                v49 = *((uint32_t *)v36 + 1);
                --v40;
                *(uint32_t *)v38 = *(uint32_t *)v36;
                *((uint32_t *)v38 + 1) = v49;
                v36 += 8;
                v38 += 8;
              }
              while ( v40 != 0 );
              v39 = *(char **)(v114 + 4);
              v38 = *(char **)v114;
              v110 = (char *)v120[1];
              v48 = (char *)(*v120 + ((unsigned int)(uintptr_t)(&v39[-*(uint32_t *)v114]) & 0xFFFFFFF8));
            }
            if ( v110 == v48 )
            {
LABEL_177:
              v43 = v114;
              v44 = (int)(uintptr_t)(&v38[8 * v104]);
              goto LABEL_76;
            }
            do
            {
              if ( v39 != nullptr )
              {
                v50 = *(uint32_t *)v48;
                *((uint32_t *)v39 + 1) = *((uint32_t *)v48 + 1);
                *(uint32_t *)v39 = v50;
              }
              v48 += 8;
              v39 += 8;
            }
            while ( v110 != v48 );
          }
          else
          {
            v41 = (v110 - v36) >> 3;
            if ( v37 <= 0 )
              goto LABEL_177;
            do
            {
              v42 = *((uint32_t *)v36 + 1);
              --v41;
              *(uint32_t *)v38 = *(uint32_t *)v36;
              *((uint32_t *)v38 + 1) = v42;
              v36 += 8;
              v38 += 8;
            }
            while ( v41 != 0 );
          }
          v43 = v114;
          v44 = *(uint32_t *)v114 + 8 * v104;
LABEL_76:
          *(uint32_t *)(v43 + 4) = v44;
LABEL_77:
          if ( --v100 == 0 )
          {
            v114 = *((uint32_t *)self + 25);
            v108 = *((int **)self + 26);
            v35 = ((unsigned int)(uintptr_t)(v108) - v114) & 0xFFFFFFFC;
            break;
          }
          v120 += 3;
          v114 += 12;
        }
      }
      v105 = (char **)((char *)v87 + v35);
      if ( (int *)((char *)v87 + v35) == (int *)v92 )
      {
        v17 = self;
        v18 = v114 + 12 * v85;
      }
      else
      {
        do
        {
          if ( v108 != nullptr )
          {
            v122 = 0;
            v57 = v105[1] - *v105;
            *v108 = 0;
            v108[1] = 0;
            v108[2] = 0;
            v58 = 0;
            v59 = v57 >> 3;
            if ( v59 != 0 )
            {
              v58 = 8 * v59;
              v122 = VoxAllocInternal(
                       8 * v59,
                       0,
                       (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                       (int)(uintptr_t)("internal_new"),
                       181);
            }
            v60 = (uint32_t *)v122;
            *v108 = v122;
            v108[1] = v122;
            v108[2] = v122 + v58;
            v61 = v105[1];
            v118 = *v105;
            if ( v61 != *v105 )
            {
              v62 = *v105;
              do
              {
                if ( v60 != nullptr )
                {
                  v63 = *(uint32_t *)v62;
                  v60[1] = *((uint32_t *)v62 + 1);
                  *v60 = v63;
                }
                v62 += 8;
                v60 += 2;
              }
              while ( v61 != v62 );
              v60 = (uint32_t *)(v122 + 8 * ((unsigned int)(v61 - (v118 + 8)) >> 3) + 8);
            }
            v108[1] = (int)(uintptr_t)(v60);
          }
          v105 += 3;
          v108 += 3;
        }
        while ( v105 != (char **)v92 );
        v17 = self;
        v18 = *((uint32_t *)self + 25) + 12 * v85;
      }
    }
LABEL_32:
    *((uint32_t *)v17 + 26) = v18;
  }
  if ( v87 != (int *)v92 )
  {
    v19 = (void **)v87;
    do
    {
      if ( *v19 != nullptr )
        VoxFreeInternal(*v19);
      v19 += 3;
    }
    while ( (void **)v92 != v19 );
  }
  if ( v87 != nullptr )
    VoxFreeInternal(v87);
  result = a2;
  v121 = 0;
  for ( i = 0; i != a2; v121 += 12 )
  {
    for ( j = 0; j != a2; ++j )
    {
      while ( 1 )
      {
        v23 = (char **)(*((uint32_t *)self + 25) + v121);
        v24 = v23[1];
        if ( v24 != v23[2] )
          break;
        v25 = (v24 - *v23) >> 3;
        v26 = 1;
        v115 = v25;
        if ( v25 != 0 && ((v26 = 2 * v25, v25 > 2 * v25) || v26 > 0x1FFFFFFF) )
          v93 = 0xFFFFFFF8;
        else
          v93 = 8 * v26;
        v82 = j;
        v103 = VoxAllocInternal(v93, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        v99 = v103 + 8;
        v27 = v82;
        v28 = (uint32_t *)(v103 + 8 * v115);
        if ( v28 != nullptr )
        {
          *v28 = -1;
          v28[1] = 0;
        }
        v29 = *v23;
        v95 = *v23;
        if ( v24 != *v23 )
        {
          v30 = (uint32_t *)v103;
          v116 = v23;
          do
          {
            if ( v30 != nullptr )
            {
              v31 = *(uint32_t *)v29;
              v30[1] = *((uint32_t *)v29 + 1);
              *v30 = v31;
            }
            v29 += 8;
            v30 += 2;
          }
          while ( v24 != v29 );
          v23 = v116;
          v99 = v103 + 8 * ((unsigned int)(v24 - (v95 + 8)) >> 3) + 16;
        }
        v117 = v23[1];
        if ( v24 != v117 )
        {
          v32 = v24;
          v33 = (uint32_t *)v99;
          v90 = v23;
          do
          {
            if ( v33 != nullptr )
            {
              v34 = *(uint32_t *)v32;
              v33[1] = *((uint32_t *)v32 + 1);
              *v33 = v34;
            }
            v32 += 8;
            v33 += 2;
          }
          while ( v117 != v32 );
          v27 = v82;
          v23 = v90;
          v99 += 8 * ((unsigned int)(v117 - (v24 + 8)) >> 3) + 8;
        }
        if ( *v23 != nullptr )
        {
          v83 = v27;
          VoxFreeInternal(*v23);
          v27 = v83;
        }
        *v23 = (char *)v103;
        j = v27 + 1;
        result = v93 + v103;
        v23[1] = (char *)v99;
        v23[2] = (char *)(v93 + v103);
        if ( j == a2 )
          goto LABEL_65;
      }
      v22 = nullptr;
      if ( v24 != nullptr )
      {
        *(uint32_t *)v24 = -1;
        *((uint32_t *)v24 + 1) = 0;
        v22 = v23[1];
      }
      result = (unsigned int)(uintptr_t)(v22 + 8);
      v23[1] = (char *)result;
    }
LABEL_65:
    ++i;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNative::Destroy  (binary VA: 0xfed9f0)
// Original: vox::DecoderNative::~DecoderNative
// ----------------------------------------------------------------------------
void vox::DecoderNative::Destroy(void **self)
{
  void **v1;
  void **v2;
  void **v3;
  void **v4;

  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208D028));
  if ( *(self + 13) != nullptr )
  {
    VoxFreeInternal(*(self + 13));
    *(self + 13) = nullptr;
    *(self + 12) = nullptr;
  }
  if ( *(self + 21) != nullptr )
  {
    VoxFreeInternal(*(self + 21));
    *(self + 21) = nullptr;
    *(self + 20) = nullptr;
  }
  if ( *(self + 19) != nullptr )
  {
    VoxFreeInternal(*(self + 19));
    *(self + 19) = nullptr;
    *(self + 18) = nullptr;
  }
  if ( *(self + 34) != nullptr )
  {
    VoxFreeInternal(*(self + 34));
    *(self + 34) = nullptr;
  }
  g4_std::Rb_tree_basic_string_char_char_t_fd25b5::M_erase(
    (int)(uintptr_t)(self + 28),
    *(self + 30));
  v1 = (void **)*(self + 26);
  v2 = (void **)*(self + 25);
  if ( v1 != v2 )
  {
    do
    {
      if ( *v2 != nullptr )
        VoxFreeInternal(*v2);
      v2 += 3;
    }
    while ( v1 != v2 );
    v2 = (void **)*(self + 25);
  }
  if ( v2 != nullptr )
    VoxFreeInternal(v2);
  v3 = (void **)*(self + 23);
  v4 = (void **)*(self + 22);
  if ( v3 != v4 )
  {
    do
    {
      if ( *v4 != nullptr )
        VoxFreeInternal(*v4);
      v4 += 3;
    }
    while ( v3 != v4 );
    v4 = (void **)*(self + 22);
  }
  if ( v4 != nullptr )
    VoxFreeInternal(v4);
  vox::NativePlaylistsManager::Destroy((vox::NativePlaylistsManager::Self *)(self + 14));
  *self = &off_206AF28;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNative::Destroy_eafedb20  (binary VA: 0xfedb20)
// Original: vox::DecoderNative::~DecoderNative
// ----------------------------------------------------------------------------
void vox::DecoderNative::Destroy_eafedb20(void **self)
{
  vox::DecoderNative::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNative::CreateNewCursor  (binary VA: 0xfef910)
// Original: vox::DecoderNative::CreateNewCursor
// ----------------------------------------------------------------------------
int vox::DecoderNative::CreateNewCursor(vox::DecoderNative::Self *self, vox::StreamCursorInterface::Self *a2)
{
  int v2;

  v2 = VoxAllocInternal(
         0x74u,
         0,
         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_decoder_native.cpp"),
         (int)(uintptr_t)("CreateNewCursor"),
         159);
  vox::DecoderNativeCursor::Construct(v2, (int)(uintptr_t)(self), (int)(uintptr_t)(a2));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNative::GetType  (binary VA: 0xfef980)
// Original: vox::DecoderNative::GetType
// ----------------------------------------------------------------------------
int vox::DecoderNative::GetType()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: vox::DecoderNative::GetParam  (binary VA: 0xfef990)
// Original: vox::DecoderNative::GetParam
// ----------------------------------------------------------------------------
int vox::DecoderNative::GetParam()
{
  return 0;
}


