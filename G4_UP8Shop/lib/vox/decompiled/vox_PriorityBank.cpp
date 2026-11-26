#include "Core/Utils/DecompTypes.h"
#include "vox_PriorityBank.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_PriorityBank.cpp
// Library: vox | Module: vox_PriorityBank
// Binary Address Span: 0x1038700 .. 0x1039890 (7 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1038700 (size: 71 bytes)
// Symbol:    _ZN3vox12PriorityBankC2Ev
// Demangled: vox::PriorityBank::PriorityBank(void)
// ============================================================================
// Alternative name is '_ZN3vox12PriorityBankC1Ev'
struct vox::PriorityBank::Self *vox::PriorityBank::Construct(vox::PriorityBank::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = -2147483647;
  *((uint32_t *)self + 2) = -1;
  *((uint32_t *)self + 3) = 4;
  *((uint32_t *)self + 4) = 0;
  *((uint8_t *)self + 20) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::PriorityBank::Construct  (binary VA: 0x1038750)
// Original: vox::PriorityBank::PriorityBank
// ----------------------------------------------------------------------------
unsigned int vox::PriorityBank::Construct(int a1, int a2, int a3)
{
  unsigned int v3;
  size_t v4;
  char *v5;
  uint32_t *v6;
  unsigned int result;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  void *v11;
  int v12;
  int v13;
  int v14;
  size_t v15;

  *(uint32_t *)a1 = 0;
  *(uint32_t *)(a1 + 4) = *(uint32_t *)(a2 + 4);
  v3 = *(uint32_t *)(a2 + 4 * *(uint32_t *)(a2 + 8) + 12);
  *(uint32_t *)(a1 + 8) = v3;
  *(uint32_t *)(a1 + 12) = *(uint32_t *)(a2 + 32);
  *(uint32_t *)(a1 + 16) = a3;
  *(uint8_t *)(a1 + 20) = *(uint8_t *)(a2 + 40);
  *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 44);
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  if ( *(uint32_t *)a2 != 0 )
  {
    v4 = strlen(*(const char **)a2);
    v5 = (char *)VoxAllocInternal(
                   v4 + 1,
                   0,
                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_priority_bank.cpp"),
                   (int)(uintptr_t)("PriorityBank"),
                   44);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v5);
    if ( v5 != nullptr )
      strcpy(v5, *(const char **)a2);
    v3 = *(uint32_t *)(a1 + 8);
  }
  if ( v3 > 0x20 )
  {
    *(uint32_t *)(a1 + 8) = 32;
    v3 = 32;
  }
  v6 = *(uint32_t **)(a1 + 28);
  result = -1431655765 * ((*(uint32_t *)(a1 + 36) - (int)(uintptr_t)(v6)) >> 2);
  if ( result < v3 )
  {
    v8 = *(uint32_t **)(a1 + 32);
    v15 = 0;
    v14 = -1431655765 * (v8 - v6);
    v9 = 0;
    if ( v3 != 0 )
    {
      v15 = 12 * v3;
      v9 = VoxAllocInternal(12 * v3, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    }
    if ( v6 != v8 )
    {
      v10 = (uint32_t *)v9;
      do
      {
        if ( v10 != nullptr )
        {
          *v10 = *v6;
          v10[1] = v6[1];
          v10[2] = v6[2];
        }
        v6 += 3;
        v10 += 3;
      }
      while ( v8 != v6 );
    }
    v11 = *(void **)(a1 + 28);
    if ( v11 != nullptr )
    {
      v13 = v9;
      VoxFreeInternal(v11);
      v9 = v13;
    }
    *(uint32_t *)(a1 + 28) = v9;
    v12 = v9 + 12 * v14;
    result = v15 + v9;
    *(uint32_t *)(a1 + 32) = v12;
    *(uint32_t *)(a1 + 36) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBank::CanAddEmitter  (binary VA: 0x10388f0)
// Original: vox::PriorityBank::CanAddEmitter
// ----------------------------------------------------------------------------
char vox::PriorityBank::CanAddEmitter(long double Attenuation, vox::PriorityBank::Self *self, vox::PriorityBank::Self *a3, int a4, float a5)
{
  vox::PriorityBank::Self *v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char result;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  float v37;
  float v38;
  float v39;
  int v40;
  int v41;
  vox::PriorityBank::Self *v42;
  int v43;
  int v44;
  vox::PriorityBank::Self *v45;
  int v46;
  int v47;
  vox::PriorityBank::Self *v48;
  vox::PriorityBank::Self *v49;
  float v50;

LABEL_1:
  if ( *((uint32_t *)self + 1) > a4 )
    return 0;
  while ( 1 )
  {
    v6 = *((vox::PriorityBank::Self **)self + 4);
    if ( v6 == nullptr )
      break;
    v7 = *((uint32_t *)self + 7);
    v8 = -1431655765 * ((*((uint32_t *)self + 8) - v7) >> 2);
    if ( *((uint32_t *)self + 2) > v8 )
      goto LABEL_27;
    v9 = *((uint32_t *)self + 3);
    switch ( v9 )
    {
      case 4:
        return 0;
      case 0:
        goto LABEL_27;
      case 1:
        if ( v8 == 0 )
          return 0;
        v48 = *((vox::PriorityBank::Self **)self + 4);
        v41 = -1431655765 * ((*((uint32_t *)self + 8) - v7) >> 2);
        v19 = a4;
        v20 = 0;
        v21 = 0;
        v49 = self;
        v17 = -1;
        do
        {
          v22 = *(uint32_t *)(v7 + v20 + 8);
          v20 += 12;
          if ( v22 < v19 )
          {
            v17 = v21;
            v19 = v22;
          }
          ++v21;
        }
        while ( v21 != v41 );
        goto LABEL_26;
      case 2:
        if ( v8 == 0 )
          return 0;
        v48 = *((vox::PriorityBank::Self **)self + 4);
        v40 = -1431655765 * ((*((uint32_t *)self + 8) - v7) >> 2);
        v14 = a4 + 1;
        v15 = 0;
        v16 = 0;
        v49 = self;
        v17 = -1;
        do
        {
          v18 = *(uint32_t *)(v7 + v15 + 8);
          v15 += 12;
          if ( v18 < v14 )
          {
            v17 = v16;
            v14 = v18;
          }
          ++v16;
        }
        while ( v16 != v40 );
LABEL_26:
        v6 = v48;
        self = v49;
        if ( v17 == -1 )
          return 0;
LABEL_27:
        if ( *((uint8_t *)self + 20) != 0 )
          a4 = *((uint32_t *)self + 6);
        self = v6;
        goto LABEL_1;
      default:
        break;
    }
    if ( v9 == 3 && v8 != 0 )
    {
      v45 = self;
      v10 = 0;
      v11 = -1431655765 * ((*((uint32_t *)self + 8) - v7) >> 2);
      v47 = -1;
      v39 = a5;
      v12 = 0;
      while ( 1 )
      {
        Attenuation = vox::EmitterObj::GetAttenuation(Attenuation, (vox::EmitterObj::Self *)*(uint32_t *)(v7 + v12));
        v37 = Attenuation;
        if ( v39 >= v37 )
        {
          v39 = Attenuation;
          v47 = v10;
        }
        ++v10;
        v12 += 12;
        if ( v10 == v11 )
          break;
        v7 = *((uint32_t *)v45 + 7);
      }
      if ( v47 != -1 )
      {
        if ( *((uint8_t *)v45 + 20) != 0 )
          a4 = *((uint32_t *)v45 + 6);
        self = *((vox::PriorityBank::Self **)v45 + 4);
        if ( *((uint32_t *)self + 1) <= a4 )
          continue;
      }
    }
    return 0;
  }
  v23 = *((uint32_t *)self + 7);
  result = 1;
  v24 = -1431655765 * ((*((uint32_t *)self + 8) - v23) >> 2);
  if ( *((uint32_t *)self + 2) <= v24 )
  {
    v25 = *((uint32_t *)self + 3);
    result = 0;
    if ( v25 != 4 )
    {
      result = 1;
      if ( v25 != 0 )
      {
        result = 0;
        if ( v25 == 1 )
        {
          if ( v24 == 0 )
            return result;
          v43 = -1431655765 * ((*((uint32_t *)self + 8) - v23) >> 2);
          v28 = a4;
          v29 = 0;
          v30 = 0;
          v31 = -1;
          do
          {
            v32 = *(uint32_t *)(v23 + v29 + 8);
            v29 += 12;
            if ( v32 < v28 )
            {
              v31 = v30;
              v28 = v32;
            }
            ++v30;
          }
          while ( v30 != v43 );
        }
        else
        {
          if ( v25 != 2 )
          {
            if ( v25 == 3 && v24 != 0 )
            {
              v42 = self;
              v26 = 0;
              v50 = a5;
              v46 = -1;
              v27 = 0;
              while ( 1 )
              {
                Attenuation = vox::EmitterObj::GetAttenuation(Attenuation, (vox::EmitterObj::Self *)*(uint32_t *)(v23 + v27));
                v38 = Attenuation;
                if ( v50 > v38 )
                {
                  v50 = Attenuation;
                  v46 = v26;
                }
                ++v26;
                v27 += 12;
                if ( v26 == v24 )
                  break;
                v23 = *((uint32_t *)v42 + 7);
              }
              return v46 != -1;
            }
            return result;
          }
          if ( v24 == 0 )
            return result;
          v44 = -1431655765 * ((*((uint32_t *)self + 8) - v23) >> 2);
          v33 = a4 + 1;
          v34 = 0;
          v35 = 0;
          v31 = -1;
          do
          {
            v36 = *(uint32_t *)(v23 + v34 + 8);
            v34 += 12;
            if ( v36 < v33 )
            {
              v31 = v35;
              v33 = v36;
            }
            ++v35;
          }
          while ( v35 != v44 );
        }
        return v31 != -1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBank::RemoveEmitter  (binary VA: 0x1038c20)
// Original: vox::PriorityBank::RemoveEmitter
// ----------------------------------------------------------------------------
int vox::PriorityBank::RemoveEmitter(vox::PriorityBank::Self *self, vox::EmitterObj::Self *a2, bool a3, bool a4, bool a5)
{
  int result;
  pthread_mutex_t ***v6;
  pthread_mutex_t ***v7;
  vox::PriorityBank::Self *v8;
  vox::PriorityBank::Self *v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;

  result = 0;
  if ( a2 != nullptr )
  {
    v6 = *((pthread_mutex_t ****)self + 7);
    v7 = *((pthread_mutex_t ****)self + 8);
    if ( v6 != v7 )
    {
      while ( a2 != (vox::EmitterObj::Self *)*v6 )
      {
        v6 += 3;
        if ( v7 == v6 )
          return 0;
      }
      if ( a4 )
      {
        v8 = *((vox::PriorityBank::Self **)self + 4);
        if ( v8 != nullptr )
          vox::PriorityBank::RemoveEmitter(v8, a2, false, true, false);
      }
      if ( a5 )
      {
        v9 = (vox::PriorityBank::Self *)v6[1];
        if ( v9 != nullptr )
        {
          vox::PriorityBank::RemoveEmitter(v9, a2, a3, false, true);
        }
        else
        {
          *((uint8_t *)*v6 + 48) = 0;
          if ( a3 )
            vox::EmitterObj::Stop(*v6, 0.05f);
        }
      }
      v10 = *((uint32_t **)self + 8);
      v11 = (uint32_t *)(v6 + 3);
      if ( v10 != v11 )
      {
        v12 = -1431655765 * (v10 - v11);
        if ( v12 > 0 )
        {
          do
          {
            --v12;
            *(v11 - 3) = *v11;
            *(v11 - 2) = v11[1];
            *(v11 - 1) = v11[2];
            v11 += 3;
          }
          while ( v12 != 0 );
          v10 = *((uint32_t **)self + 8);
        }
      }
      result = 1;
      *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v10 - 3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBank::AddEmitter  (binary VA: 0x1038d60)
// Original: vox::PriorityBank::AddEmitter
// ----------------------------------------------------------------------------
int vox::PriorityBank::AddEmitter(long double a1, vox::PriorityBank::Self *self, vox::EmitterObj::Self *a3, vox::PriorityBank::Self *a4, int a5)
{
  int result;
  vox::PriorityBank::Self *v6;
  vox::EmitterObj::Self **v7;
  unsigned int v8;
  int v9;
  char v10;
  int v11;
  long double Attenuation; // fst7
  int v13;
  int v14;
  vox::PriorityBank::Self *v15;
  int v16;
  char v17;
  int v18;
  bool v19;
  int v20;
  int v21;
  long double v22; // fst7
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  char v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  char v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  char v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef vox::EmitterObj::Self *_g4_t_v66;
  typedef vox::PriorityBank::Self *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef vox::EmitterObj::Self *_g4_t_v69;
  typedef vox::PriorityBank::Self *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef vox::EmitterObj::Self *_g4_t_v72;
  typedef vox::PriorityBank::Self *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef vox::EmitterObj::Self *_g4_t_v75;
  typedef vox::PriorityBank::Self *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef vox::EmitterObj::Self *_g4_t_v78;
  typedef vox::PriorityBank::Self *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef vox::EmitterObj::Self *_g4_t_v81;
  typedef vox::PriorityBank::Self *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef vox::EmitterObj::Self *_g4_t_v84;
  typedef vox::PriorityBank::Self *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef vox::EmitterObj::Self *_g4_t_v87;
  typedef vox::PriorityBank::Self *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef vox::EmitterObj::Self *_g4_t_v90;
  typedef vox::PriorityBank::Self *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef vox::EmitterObj::Self *_g4_t_v93;
  typedef vox::PriorityBank::Self *_g4_t_v94;
  typedef int _g4_t_v95;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v53)) > _g4_s0 ? (8u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v54)) > _g4_s1 ? (8u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v55)) > _g4_s2 ? (16u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v56)) > _g4_s3 ? (16u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v57)) > _g4_s4 ? (24u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v58)) > _g4_s5 ? (24u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v59)) > _g4_s6 ? (24u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v60)) > _g4_s7 ? (28u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v61)) > _g4_s8 ? (28u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v62)) > _g4_s9 ? (28u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v63)) > _g4_s10 ? (28u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v64)) > _g4_s11 ? (28u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v65)) > _g4_s12 ? (28u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v66)) > _g4_s13 ? (32u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v67)) > _g4_s14 ? (36u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v68)) > _g4_s15 ? (40u + sizeof(_g4_t_v68)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v69)) > _g4_s16 ? (48u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v70)) > _g4_s17 ? (52u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v71)) > _g4_s18 ? (56u + sizeof(_g4_t_v71)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v72)) > _g4_s19 ? (64u + sizeof(_g4_t_v72)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v73)) > _g4_s20 ? (68u + sizeof(_g4_t_v73)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v74)) > _g4_s21 ? (72u + sizeof(_g4_t_v74)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v75)) > _g4_s22 ? (80u + sizeof(_g4_t_v75)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v76)) > _g4_s23 ? (84u + sizeof(_g4_t_v76)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v77)) > _g4_s24 ? (88u + sizeof(_g4_t_v77)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v78)) > _g4_s25 ? (96u + sizeof(_g4_t_v78)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v79)) > _g4_s26 ? (100u + sizeof(_g4_t_v79)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v80)) > _g4_s27 ? (104u + sizeof(_g4_t_v80)) : _g4_s27,
    _g4_s29 = (112u + sizeof(_g4_t_v81)) > _g4_s28 ? (112u + sizeof(_g4_t_v81)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v82)) > _g4_s29 ? (116u + sizeof(_g4_t_v82)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v83)) > _g4_s30 ? (120u + sizeof(_g4_t_v83)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v84)) > _g4_s31 ? (128u + sizeof(_g4_t_v84)) : _g4_s31,
    _g4_s33 = (132u + sizeof(_g4_t_v85)) > _g4_s32 ? (132u + sizeof(_g4_t_v85)) : _g4_s32,
    _g4_s34 = (136u + sizeof(_g4_t_v86)) > _g4_s33 ? (136u + sizeof(_g4_t_v86)) : _g4_s33,
    _g4_s35 = (140u + sizeof(_g4_t_v87)) > _g4_s34 ? (140u + sizeof(_g4_t_v87)) : _g4_s34,
    _g4_s36 = (144u + sizeof(_g4_t_v88)) > _g4_s35 ? (144u + sizeof(_g4_t_v88)) : _g4_s35,
    _g4_s37 = (148u + sizeof(_g4_t_v89)) > _g4_s36 ? (148u + sizeof(_g4_t_v89)) : _g4_s36,
    _g4_s38 = (152u + sizeof(_g4_t_v90)) > _g4_s37 ? (152u + sizeof(_g4_t_v90)) : _g4_s37,
    _g4_s39 = (156u + sizeof(_g4_t_v91)) > _g4_s38 ? (156u + sizeof(_g4_t_v91)) : _g4_s38,
    _g4_s40 = (160u + sizeof(_g4_t_v92)) > _g4_s39 ? (160u + sizeof(_g4_t_v92)) : _g4_s39,
    _g4_s41 = (164u + sizeof(_g4_t_v93)) > _g4_s40 ? (164u + sizeof(_g4_t_v93)) : _g4_s40,
    _g4_s42 = (168u + sizeof(_g4_t_v94)) > _g4_s41 ? (168u + sizeof(_g4_t_v94)) : _g4_s41,
    _g4_s43 = (172u + sizeof(_g4_t_v95)) > _g4_s42 ? (172u + sizeof(_g4_t_v95)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 28u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 40u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 48u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 52u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 56u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 64u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 68u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 72u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 80u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 84u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 88u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 96u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 100u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 104u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 112u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 116u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 120u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 128u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 132u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 136u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 140u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 144u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 148u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 152u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 156u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 160u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 164u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 168u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 172u);

  result = 0;
  if ( a3 == nullptr || *((uint32_t *)self + 1) > a5 )
    return result;
  v6 = *((vox::PriorityBank::Self **)self + 4);
  v7 = *((vox::EmitterObj::Self ***)self + 7);
  if ( v6 != nullptr )
  {
    v8 = -1431655765 * ((*((uint32_t *)self + 8) - (int)(uintptr_t)(v7)) >> 2);
    if ( *((uint32_t *)self + 2) > v8 )
    {
      v9 = a5;
      if ( *((uint8_t *)self + 20) != 0 )
        v9 = *((uint32_t *)self + 6);
      v10 = vox::PriorityBank::AddEmitter(v6, a3, self, v9);
      result = 0;
      if ( v10 == 0 )
        return result;
      v66 = a3;
      v68 = a5;
      v27 = *((uint32_t *)self + 8);
      v19 = v27 == *((uint32_t *)self + 9);
      v67 = a4;
      if ( v19 )
      {
        sub_10384A0((int)(uintptr_t)(self) + 28, (char *)v27, (int *)&v66);
        return 1;
      }
      v28 = 0;
      if ( v27 != 0 )
      {
        *(uint32_t *)v27 = (uint32_t)(uintptr_t)(a3);
        *(uint32_t *)(v27 + 4) = (uint32_t)(uintptr_t)(v67);
        *(uint32_t *)(v27 + 8) = v68;
        v28 = *((uint32_t *)self + 8);
      }
LABEL_47:
      *((uint32_t *)self + 8) = v28 + 12;
      return 1;
    }
    v11 = *((uint32_t *)self + 3);
    if ( v11 == 4 )
      return result;
    if ( v11 != 0 )
    {
      switch ( v11 )
      {
        case 1:
          if ( v8 != 0 )
          {
            v33 = a5;
            LOWORD(v11) = 0;
            v34 = 0;
            v35 = -1;
            do
            {
              if ( *(int *)((char *)v7 + v11 + 8) < v33 )
              {
                v33 = *(int *)((char *)v7 + v11 + 8);
                v35 = v34;
              }
              ++v34;
              v62 = v35;
              v11 += 12;
            }
            while ( v34 != -1431655765 * ((*((uint32_t *)self + 8) - (int)(uintptr_t)(v7)) >> 2) );
            result = 0;
            v15 = self;
            if ( v62 != -1 )
            {
              vox::PriorityBank::RemoveEmitter(self, v7[3 * v62], true, true, true);
              v36 = a5;
              if ( *((uint8_t *)self + 20) != 0 )
                v36 = *((uint32_t *)self + 6);
              v37 = vox::PriorityBank::AddEmitter(*((vox::PriorityBank::Self **)self + 4), a3, self, v36);
              result = 0;
              if ( v37 != 0 )
              {
                v72 = a3;
                v73 = a4;
                v38 = *((uint32_t *)self + 8);
                v19 = v38 == *((uint32_t *)self + 9);
                v74 = a5;
                if ( v19 )
                {
                  sub_10384A0((int)(uintptr_t)(self) + 28, (char *)v38, (int *)&v72);
                  return 1;
                }
                if ( v38 != 0 )
                {
                  *(uint32_t *)v38 = (uint32_t)(uintptr_t)(a3);
                  *(uint32_t *)(v38 + 4) = (uint32_t)(uintptr_t)(v73);
                  *(uint32_t *)(v38 + 8) = v74;
                }
                goto LABEL_27;
              }
            }
          }
          break;
        case 2:
          if ( v8 != 0 )
          {
            v39 = a5 + 1;
            LOWORD(v11) = 0;
            v40 = 0;
            v41 = -1;
            do
            {
              if ( *(int *)((char *)v7 + v11 + 8) < v39 )
              {
                v39 = *(int *)((char *)v7 + v11 + 8);
                v41 = v40;
              }
              ++v40;
              v63 = v41;
              v11 += 12;
            }
            while ( v40 != -1431655765 * ((*((uint32_t *)self + 8) - (int)(uintptr_t)(v7)) >> 2) );
            result = 0;
            v15 = self;
            if ( v63 != -1 )
            {
              vox::PriorityBank::RemoveEmitter(self, v7[3 * v63], true, true, true);
              v42 = a5;
              if ( *((uint8_t *)self + 20) != 0 )
                v42 = *((uint32_t *)self + 6);
              v43 = vox::PriorityBank::AddEmitter(*((vox::PriorityBank::Self **)self + 4), a3, self, v42);
              result = 0;
              if ( v43 != 0 )
              {
                v75 = a3;
                v76 = a4;
                v44 = *((uint32_t *)self + 8);
                v19 = v44 == *((uint32_t *)self + 9);
                v77 = a5;
                if ( v19 )
                {
                  sub_10384A0((int)(uintptr_t)(self) + 28, (char *)v44, (int *)&v75);
                  return 1;
                }
                if ( v44 != 0 )
                {
                  *(uint32_t *)v44 = (uint32_t)(uintptr_t)(a3);
                  *(uint32_t *)(v44 + 4) = (uint32_t)(uintptr_t)(v76);
                  *(uint32_t *)(v44 + 8) = v77;
                }
                goto LABEL_27;
              }
            }
          }
          break;
        case 3:
          Attenuation = vox::EmitterObj::GetAttenuation(a1, a3);
          v13 = *((uint32_t *)self + 7);
          v60 = Attenuation;
          v57 = -1431655765 * ((*((uint32_t *)self + 8) - v13) >> 2);
          result = 0;
          if ( v57 != 0 )
          {
            LOWORD(v11) = 0;
            v55 = -1;
            v14 = 0;
            while ( 1 )
            {
              Attenuation = vox::EmitterObj::GetAttenuation(Attenuation, (vox::EmitterObj::Self *)*(uint32_t *)(v13 + v14));
              v53 = Attenuation;
              if ( v60 >= v53 )
              {
                v60 = Attenuation;
                v55 = v11;
              }
              ++v11;
              v14 += 12;
              if ( v11 == v57 )
                break;
              v13 = *((uint32_t *)self + 7);
            }
            result = 0;
            v15 = self;
            if ( v55 != -1 )
            {
              vox::PriorityBank::RemoveEmitter(
                self,
                *(vox::EmitterObj::Self **)(*((uint32_t *)self + 7) + 12 * v55),
                true,
                true,
                true);
              v16 = a5;
              if ( *((uint8_t *)self + 20) != 0 )
                v16 = *((uint32_t *)self + 6);
              v17 = vox::PriorityBank::AddEmitter(*((vox::PriorityBank::Self **)self + 4), a3, self, v16);
              result = 0;
              if ( v17 != 0 )
              {
                v78 = a3;
                v80 = a5;
                v18 = *((uint32_t *)self + 8);
                v19 = v18 == *((uint32_t *)self + 9);
                v79 = a4;
                if ( v19 )
                {
                  sub_10384A0((int)(uintptr_t)(self) + 28, (char *)v18, (int *)&v78);
                  return 1;
                }
                if ( v18 != 0 )
                {
                  *(uint32_t *)v18 = (uint32_t)(uintptr_t)(a3);
                  *(uint32_t *)(v18 + 4) = (uint32_t)(uintptr_t)(v79);
                  *(uint32_t *)(v18 + 8) = v80;
                }
                goto LABEL_27;
              }
            }
          }
          break;
        default:
          break;
      }
    }
    else
    {
      vox::PriorityBank::RemoveEmitter(self, *v7, true, true, true);
      v29 = a5;
      if ( *((uint8_t *)self + 20) != 0 )
        v29 = *((uint32_t *)self + 6);
      v30 = vox::PriorityBank::AddEmitter(*((vox::PriorityBank::Self **)self + 4), a3, self, v29);
      result = 0;
      if ( v30 != 0 )
      {
        v69 = a3;
        v70 = a4;
        v31 = *((uint32_t *)self + 8);
        v19 = v31 == *((uint32_t *)self + 9);
        v71 = a5;
        if ( v19 )
        {
          sub_10384A0((int)(uintptr_t)(self) + 28, (char *)v31, (int *)&v69);
          return 1;
        }
        v28 = 0;
        if ( v31 != 0 )
        {
          *(uint32_t *)v31 = (uint32_t)(uintptr_t)(a3);
          *(uint32_t *)(v31 + 4) = (uint32_t)(uintptr_t)(v70);
          *(uint32_t *)(v31 + 8) = v71;
          v28 = *((uint32_t *)self + 8);
        }
        goto LABEL_47;
      }
    }
  }
  else
  {
    v20 = *((uint32_t *)self + 8);
    v58 = -1431655765 * ((v20 - (int)(uintptr_t)(v7)) >> 2);
    if ( *((uint32_t *)self + 2) > v58 )
    {
      v81 = a3;
      v19 = v20 == *((uint32_t *)self + 9);
      v82 = a4;
      v83 = a5;
      if ( v19 )
      {
        sub_10384A0((int)(uintptr_t)(self) + 28, (char *)v20, (int *)&v81);
        return 1;
      }
      v28 = 0;
      if ( v20 != 0 )
      {
        *(uint32_t *)v20 = (uint32_t)(uintptr_t)(a3);
        *(uint32_t *)(v20 + 4) = (uint32_t)(uintptr_t)(v82);
        *(uint32_t *)(v20 + 8) = v83;
        v28 = *((uint32_t *)self + 8);
      }
      goto LABEL_47;
    }
    v21 = *((uint32_t *)self + 3);
    switch ( v21 )
    {
      case 4:
        return result;
      case 0:
        vox::PriorityBank::RemoveEmitter(self, *v7, true, true, true);
        v84 = a3;
        v86 = a5;
        v32 = *((uint32_t *)self + 8);
        v19 = v32 == *((uint32_t *)self + 9);
        v85 = a4;
        if ( v19 )
        {
          sub_10384A0((int)(uintptr_t)(self) + 28, (char *)v32, (int *)&v84);
          return 1;
        }
        v28 = 0;
        if ( v32 != 0 )
        {
          *(uint32_t *)v32 = (uint32_t)(uintptr_t)(a3);
          *(uint32_t *)(v32 + 4) = (uint32_t)(uintptr_t)(v85);
          *(uint32_t *)(v32 + 8) = v86;
          v28 = *((uint32_t *)self + 8);
        }
        goto LABEL_47;
      case 1:
        if ( v58 != 0 )
        {
          v45 = a5;
          LOBYTE(v21) = 0;
          v46 = 0;
          v47 = -1;
          do
          {
            if ( *(int *)((char *)v7 + v21 + 8) < v45 )
            {
              v45 = *(int *)((char *)v7 + v21 + 8);
              v47 = v46;
            }
            ++v46;
            v64 = v47;
            v21 += 12;
          }
          while ( v46 != v58 );
          result = 0;
          v15 = self;
          if ( v64 != -1 )
          {
            vox::PriorityBank::RemoveEmitter(self, v7[3 * v64], true, true, true);
            v87 = a3;
            v89 = a5;
            v48 = *((uint32_t *)self + 8);
            v19 = v48 == *((uint32_t *)self + 9);
            v88 = a4;
            if ( v19 )
            {
              sub_10384A0((int)(uintptr_t)(self) + 28, (char *)v48, (int *)&v87);
              return 1;
            }
            if ( v48 != 0 )
            {
              *(uint32_t *)v48 = (uint32_t)(uintptr_t)(a3);
              *(uint32_t *)(v48 + 4) = (uint32_t)(uintptr_t)(v88);
              *(uint32_t *)(v48 + 8) = v89;
            }
            goto LABEL_27;
          }
        }
        break;
      case 2:
        if ( v58 != 0 )
        {
          v49 = a5 + 1;
          LOBYTE(v21) = 0;
          v50 = 0;
          v51 = -1;
          do
          {
            if ( *(int *)((char *)v7 + v21 + 8) < v49 )
            {
              v49 = *(int *)((char *)v7 + v21 + 8);
              v51 = v50;
            }
            ++v50;
            v65 = v51;
            v21 += 12;
          }
          while ( v50 != v58 );
          result = 0;
          v15 = self;
          if ( v65 != -1 )
          {
            vox::PriorityBank::RemoveEmitter(self, v7[3 * v65], true, true, true);
            v90 = a3;
            v92 = a5;
            v52 = *((uint32_t *)self + 8);
            v19 = v52 == *((uint32_t *)self + 9);
            v91 = a4;
            if ( v19 )
            {
              sub_10384A0((int)(uintptr_t)(self) + 28, (char *)v52, (int *)&v90);
              return 1;
            }
            if ( v52 != 0 )
            {
              *(uint32_t *)v52 = (uint32_t)(uintptr_t)(a3);
              *(uint32_t *)(v52 + 4) = (uint32_t)(uintptr_t)(v91);
              *(uint32_t *)(v52 + 8) = v92;
            }
            goto LABEL_27;
          }
        }
        break;
      case 3:
        v22 = vox::EmitterObj::GetAttenuation(a1, a3);
        v23 = *((uint32_t *)self + 7);
        v61 = v22;
        v59 = -1431655765 * ((*((uint32_t *)self + 8) - v23) >> 2);
        result = 0;
        if ( v59 != 0 )
        {
          v24 = 0;
          v56 = -1;
          v25 = 0;
          while ( 1 )
          {
            v22 = vox::EmitterObj::GetAttenuation(v22, (vox::EmitterObj::Self *)*(uint32_t *)(v23 + v25));
            v54 = v22;
            if ( v61 > v54 )
            {
              v61 = v22;
              v56 = v24;
            }
            ++v24;
            v25 += 12;
            if ( v24 == v59 )
              break;
            v23 = *((uint32_t *)self + 7);
          }
          result = 0;
          v15 = self;
          if ( v56 != -1 )
          {
            vox::PriorityBank::RemoveEmitter(
              self,
              *(vox::EmitterObj::Self **)(*((uint32_t *)self + 7) + 12 * v56),
              true,
              true,
              true);
            v93 = a3;
            v94 = a4;
            v26 = *((uint32_t *)self + 8);
            v19 = v26 == *((uint32_t *)self + 9);
            v95 = a5;
            if ( v19 )
            {
              sub_10384A0((int)(uintptr_t)(self) + 28, (char *)v26, (int *)&v93);
              return 1;
            }
            if ( v26 != 0 )
            {
              *(uint32_t *)v26 = (uint32_t)(uintptr_t)(a3);
              *(uint32_t *)(v26 + 4) = (uint32_t)(uintptr_t)(v94);
              *(uint32_t *)(v26 + 8) = v95;
            }
LABEL_27:
            *((uint32_t *)v15 + 8) += 12;
            return 1;
          }
        }
        break;
      default:
        break;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBank::Update  (binary VA: 0x1039780)
// Original: vox::PriorityBank::Update
// ----------------------------------------------------------------------------
unsigned int vox::PriorityBank::Update(vox::PriorityBank::Self *self)
{
  unsigned int v1;
  int v2;
  int v3;
  int v4;
  unsigned int result;

  v1 = 0;
  v2 = *((uint32_t *)self + 7);
  v3 = *((uint32_t *)self + 8);
  while ( 1 )
  {
    result = -1431655765 * ((v3 - v2) >> 2);
    if ( v1 >= result )
      break;
    v4 = v2 + 12 * v1;
    if ( *(uint32_t *)(v4 + 4) != 0 )
    {
      ++v1;
    }
    else if ( (uint8_t)vox::EmitterObj::IsPlaying(*(pthread_mutex_t ***)v4) != 0
           || vox::EmitterObj::GetState(*(pthread_mutex_t ***)(*((uint32_t *)self + 7) + 12 * v1)) == 2 )
    {
      ++v1;
      v2 = *((uint32_t *)self + 7);
      v3 = *((uint32_t *)self + 8);
    }
    else
    {
      vox::PriorityBank::RemoveEmitter(self, *(vox::EmitterObj::Self **)(*((uint32_t *)self + 7) + 12 * v1), false, true, true);
      v2 = *((uint32_t *)self + 7);
      v3 = *((uint32_t *)self + 8);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBank::Serialize  (binary VA: 0x1039890)
// Original: vox::PriorityBank::Serialize
// ----------------------------------------------------------------------------
int vox::PriorityBank::Serialize(int a1, uint32_t *a2, char a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  const char *v8;
  uint32_t *v9;
  size_t v10;
  const char **v11;
  const char *v12;
  uint8_t *v13;
  uint32_t *v14;
  size_t v15;
  uint8_t *v16;
  int v17;
  int v18;
  int v19;
  char *v20;
  uint32_t *v21;
  void *v22;
  char v24;
  uint32_t *v25;
  const char *v26;
  size_t v27;
  uint32_t *v28;
  uint32_t *v29;
  const char *v30;
  uint32_t *v31;
  size_t v32;
  uint8_t *v33;
  uint32_t *v34;
  uint8_t *v35;
  uint32_t *v36;
  char *v37;
  char *v38;
  char *s;
  char *v40;
  char *v41;
  char *v42;
  char *v43;
  char *v44;
  char *v45;
  char *v46;
  char v47;
  uint8_t *v48;
  char *v49;
  char *v50;

  v3 = a2;
  v4 = a2[50];
  v48 = (uint8_t *)(a2 + 48);
  if ( (uint32_t *)v4 != a2 + 50 && *(uint8_t *)(v4 + 8) != 0 )
  {
    v7 = a2[48];
    if ( (uint32_t *)v7 == a2 + 48 )
      goto LABEL_8;
    if ( *(uint8_t *)(v7 + 8) != 0 )
      *(uint8_t *)(v7 + 8) = 0;
    else
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
  }
  v37 = (char *)a2[48];
  v5 = opNew(0xCu);
  if ( v5 != -8 )
    *(uint8_t *)(v5 + 8) = 1;
  sub_1901920(v5, v37);
  v38 = (char *)a2[50];
  v6 = opNew(0xCu);
  if ( v6 != -8 )
    *(uint8_t *)(v6 + 8) = 0;
  sub_1901920(v6, v38);
  g4_std_compat::ostream_write(a2 + 3, "{", 1);
  v7 = a2[48];
LABEL_8:
  v8 = *(const char **)a1;
  if ( *(uint32_t *)a1 == 0 )
    v8 = "Unnamed";
  if ( v48 != (uint8_t *)v7 )
  {
    if ( *(uint8_t *)(v7 + 8) != 0 )
    {
      *(uint8_t *)(v7 + 8) = 0;
      v9 = a2 + 3;
    }
    else
    {
      v41 = (char *)v8;
      v9 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
      v8 = v41;
    }
    s = (char *)v8;
    g4_std_compat::ostream_write(v9, "\"", 1);
    g4_std_compat::ostream_write(v9, "name", 4);
    g4_std_compat::ostream_write(v9, "\":\"", 3);
    v10 = strlen(s);
    g4_std_compat::ostream_write(v9, s, v10);
    g4_std_compat::ostream_write(v9, "\"", 1);
  }
  v11 = *(const char ***)(a1 + 16);
  if ( v11 != nullptr )
  {
    v12 = *v11;
    if ( *v11 == nullptr )
      v12 = "Unnamed";
    v13 = (uint8_t *)a2[48];
    if ( v48 != v13 )
    {
      if ( v13[8] != 0 )
      {
        v13[8] = 0;
        v14 = a2 + 3;
      }
      else
      {
        v42 = (char *)v12;
        v14 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
        v12 = v42;
      }
      v40 = (char *)v12;
      g4_std_compat::ostream_write(v14, "\"", 1);
      g4_std_compat::ostream_write(v14, "parent_name", 11);
      g4_std_compat::ostream_write(v14, "\":\"", 3);
      v15 = strlen(v40);
      g4_std_compat::ostream_write(v14, v40, v15);
      g4_std_compat::ostream_write(v14, "\"", 1);
    }
  }
  if ( (a3 & 1) != 0 )
  {
    v35 = (uint8_t *)a2[48];
    if ( v48 != v35 )
    {
      if ( v35[8] != 0 )
      {
        v35[8] = 0;
        v36 = a2 + 3;
      }
      else
      {
        v36 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      }
      v46 = *(char **)(a1 + 4);
      g4_std_compat::ostream_write(v36, "\"", 1);
      g4_std_compat::ostream_write(v36, "threshold", 9);
      g4_std_compat::ostream_write(v36, "\":", 2);
      g4_std::ostream::op_shl_int(v36, v46);
    }
  }
  if ( (a3 & 2) != 0 )
  {
    v33 = (uint8_t *)a2[48];
    if ( v48 != v33 )
    {
      if ( v33[8] != 0 )
      {
        v33[8] = 0;
        v34 = a2 + 3;
      }
      else
      {
        v34 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
      }
      v45 = *(char **)(a1 + 8);
      g4_std_compat::ostream_write(v34, "\"", 1);
      g4_std_compat::ostream_write(v34, "max_playback", 12);
      g4_std_compat::ostream_write(v34, "\":", 2);
      sub_192D8B0(v34, v45);
    }
  }
  if ( (a3 & 4) != 0 )
  {
    v30 = vox::BehaviourToString(*(uint32_t *)(a1 + 12));
    v16 = (uint8_t *)a2[48];
    v50 = (char *)v30;
    if ( v48 == v16 )
      goto LABEL_25;
    if ( v16[8] != 0 )
    {
      v16[8] = 0;
      v31 = a2 + 3;
    }
    else
    {
      v31 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    g4_std_compat::ostream_write(v31, "\"", 1);
    g4_std_compat::ostream_write(v31, "behaviour", 9);
    g4_std_compat::ostream_write(v31, "\":\"", 3);
    if ( v50 != nullptr )
    {
      v32 = strlen(v50);
      g4_std_compat::ostream_write(v31, v50, v32);
    }
    else
    {
      sub_1911530((char *)v31 + *(uint32_t *)(a2[3] - 12), *(uint32_t *)((char *)v31 + *(uint32_t *)(a2[3] - 12) + 20) | 1);
    }
    g4_std_compat::ostream_write(v31, "\"", 1);
  }
  v16 = (uint8_t *)a2[48];
LABEL_25:
  if ( (a3 & 8) != 0 && v48 != v16 )
  {
    if ( v16[8] != 0 )
    {
      v16[8] = 0;
      v29 = a2 + 3;
    }
    else
    {
      v29 = a2 + 3;
      g4_std_compat::ostream_write(a2 + 3, ",", 1);
    }
    v44 = *(char **)(a1 + 24);
    g4_std_compat::ostream_write(v29, "\"", 1);
    g4_std_compat::ostream_write(v29, "priority", 8);
    g4_std_compat::ostream_write(v29, "\":", 2);
    g4_std::ostream::op_shl_int(v29, v44);
    v16 = (uint8_t *)a2[48];
  }
  if ( (a3 & 0x10) != 0 )
  {
    v24 = *(uint8_t *)(a1 + 20);
    if ( v48 != v16 )
    {
      if ( v16[8] != 0 )
      {
        v16[8] = 0;
        v25 = a2 + 3;
      }
      else
      {
        v47 = *(uint8_t *)(a1 + 20);
        v25 = a2 + 3;
        g4_std_compat::ostream_write(a2 + 3, ",", 1);
        v24 = v47;
      }
      v26 = "true";
      if ( v24 == 0 )
        v26 = "false";
      v43 = (char *)v26;
      g4_std_compat::ostream_write(v25, "\"", 1);
      g4_std_compat::ostream_write(v25, "priority_child_override", 23);
      g4_std_compat::ostream_write(v25, "\":", 2);
      v27 = strlen(v43);
      g4_std_compat::ostream_write(v25, v43, v27);
      v16 = (uint8_t *)a2[48];
    }
  }
  v17 = *(uint32_t *)(a1 + 28);
  v49 = (char *)(-1431655765 * ((*(uint32_t *)(a1 + 32) - v17) >> 2));
  if ( (a3 & 0x20) != 0 )
  {
    v18 = 0;
    if ( -1431655765 * ((*(uint32_t *)(a1 + 32) - v17) >> 2) != 0 )
    {
      v19 = 0;
      v20 = nullptr;
      do
      {
        if ( *(uint32_t *)(v17 + v19 + 4) == 0 )
          ++v18;
        ++v20;
        v19 += 12;
      }
      while ( v20 != v49 );
      v3 = a2;
    }
    if ( v48 != v16 )
    {
      if ( v16[8] != 0 )
      {
        v16[8] = 0;
        v21 = v3 + 3;
      }
      else
      {
        v21 = v3 + 3;
        g4_std_compat::ostream_write(v3 + 3, ",", 1);
      }
      g4_std_compat::ostream_write(v21, "\"", 1);
      g4_std_compat::ostream_write(v21, "bank_element", 12);
      g4_std_compat::ostream_write(v21, "\":", 2);
      sub_192D8B0(v21, v18);
      v16 = (uint8_t *)v3[48];
    }
  }
  if ( (a3 & 0x40) != 0 )
  {
    if ( v48 == v16 )
      return 0;
    if ( v16[8] != 0 )
    {
      v16[8] = 0;
      v28 = v3 + 3;
    }
    else
    {
      v28 = v3 + 3;
      g4_std_compat::ostream_write(v3 + 3, ",", 1);
    }
    g4_std_compat::ostream_write(v28, "\"", 1);
    g4_std_compat::ostream_write(v28, "bank_child_element", 18);
    g4_std_compat::ostream_write(v28, "\":", 2);
    sub_192D8B0(v28, v49);
    v16 = (uint8_t *)v3[48];
  }
  if ( v48 != v16 && a2 + 50 != (uint32_t *)v3[50] )
  {
    sub_1901940(v16);
    opDelete(v16);
    v22 = (void *)v3[50];
    sub_1901940(v22);
    opDelete(v22);
    g4_std_compat::ostream_write(v3 + 3, "}", 1);
  }
  return 0;
}


