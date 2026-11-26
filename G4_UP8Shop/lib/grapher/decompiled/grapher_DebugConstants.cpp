#include "Core/Utils/DecompTypes.h"
#include "grapher_DebugConstants.h"

// ============================================================================
// G4_UP8Shop/lib/grapher/decompiled/grapher_DebugConstants.cpp
// Library: grapher | Module: grapher_DebugConstants
// Binary Address Span: 0x13d0990 .. 0x13d1b70 (7 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13d0990 (size: 57 bytes)
// Symbol:    _ZN7grapher14DebugConstantsC1Ev
// Demangled: grapher::DebugConstants::DebugConstants(void)
// ============================================================================
// Alternative name is '_ZN7grapher14DebugConstantsC2Ev'
struct grapher::DebugConstants::Self *grapher::DebugConstants::DebugConstants(grapher::DebugConstants::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094C50);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 8);
  return self;
}
// ----------------------------------------------------------------------------
// Function: grapher::DebugConstants::HasConstant  (binary VA: 0x13d09d0)
// Original: grapher::DebugConstants::HasConstant
// ----------------------------------------------------------------------------
bool grapher::DebugConstants::HasConstant(int a1, const char **a2, const char **a3)
{
  int v3;
  int v4;
  int v5;
  const char *s2;
  int v7;
  int v8;
  int v9;
  const char *s1;
  int v12;

  v3 = 0;
  v4 = *(uint32_t *)(a1 + 12);
  if ( v4 != 0 )
  {
    v5 = a1 + 8;
    s2 = *a2;
    do
    {
      while ( strcmp(*(const char **)(v4 + 16), s2) >= 0 )
      {
        v5 = v4;
        v4 = *(uint32_t *)(v4 + 8);
        if ( v4 == 0 )
          goto LABEL_6;
      }
      v4 = *(uint32_t *)(v4 + 12);
    }
    while ( v4 != 0 );
LABEL_6:
    v3 = 0;
    if ( a1 + 8 != v5 )
    {
      v7 = strcmp(s2, *(const char **)(v5 + 16));
      v3 = 0;
      if ( v7 >= 0 )
      {
        v8 = *(uint32_t *)(v5 + 28);
        v12 = v5 + 24;
        if ( v8 != 0 )
        {
          v9 = v5 + 24;
          s1 = *a3;
          do
          {
            while ( strcmp(*(const char **)(v8 + 16), s1) >= 0 )
            {
              v9 = v8;
              v8 = *(uint32_t *)(v8 + 8);
              if ( v8 == 0 )
                goto LABEL_13;
            }
            v8 = *(uint32_t *)(v8 + 12);
          }
          while ( v8 != 0 );
LABEL_13:
          v3 = 0;
          if ( v12 != v9 )
            return strcmp(s1, *(const char **)(v9 + 16)) >= 0;
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: grapher::DebugConstants::Export  (binary VA: 0x13d0ac0)
// Original: grapher::DebugConstants::Export
// ----------------------------------------------------------------------------
void grapher::DebugConstants::Export(int a1, const char **a2)
{
  int v2;
  int i;
  void *v4;
  void *v5;
  char *v6;
  void *v7;
  void *v8;
  typedef int _g4_t_v9;
  typedef FILE *_g4_t_v10;
  typedef int _g4_t_v11[4];
  typedef uint32_t _g4_t_v12[4];
  typedef char *_g4_t_v13;
  typedef uint32_t _g4_t_v14[3];
  typedef int _g4_t_v15[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v11)) > _g4_s2 ? (32u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v12)) > _g4_s3 ? (48u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v13)) > _g4_s4 ? (64u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v14)) > _g4_s5 ? (80u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v15)) > _g4_s6 ? (92u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 80u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 92u);

  if ( byte_20D5B50 != 0 || _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) == 0 )
  {
    if ( (dword_20D5BE0 & 0x20) == 0 )
      return;
  }
  else
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    if ( (dword_20D5BE0 & 0x20) == 0 )
      return;
  }
  v10 = fopen(*a2, "w");
  v11[0] = (int)(uintptr_t)(&dword_213B814);
  v12[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v13 = (char *)&dword_213B814;
  v9 = *(uint32_t *)(a1 + 16);
  if ( v9 != a1 + 8 )
  {
    v2 = *(uint32_t *)(a1 + 16);
    do
    {
      g4_std::string::assign_str(v11, v2 + 16);
      g4_std::string::append((int)(uintptr_t)(v11), ".", 1u);
      for ( i = *(uint32_t *)(v9 + 32); v9 + 24 != i; i = sub_1904890(i) )
      {
        g4_std::string::assign_str(v12, i + 16);
        g4_std::string::construct_copy(v14, v11);
        g4_std::string::append_str(v14, v12);
        g4_std::string::construct_copy(v15, v14);
        g4_std::string::append((int)(uintptr_t)(v15), &a0[1], 1u);
        g4_std::string::assign_str(&v13, v15);
        v4 = (void *)(v15[0] - 12);
        if ( (uint32_t *)(v15[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v15[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v4);
        }
        v5 = (void *)(v14[0] - 12);
        if ( (uint32_t *)(v14[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v5);
        }
        fwrite(v13, 1u, *((uint32_t *)v13 - 3), v10);
      }
      v2 = sub_1904890(v9);
      v9 = v2;
    }
    while ( a1 + 8 != v2 );
  }
  fclose(v10);
  v6 = v13 - 12;
  if ( v13 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v13 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v6);
  v7 = (void *)(v12[0] - 12);
  if ( (uint32_t *)(v12[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v11[0] - 12);
  if ( (uint32_t *)(v11[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::DebugConstants::Destroy  (binary VA: 0x13d0e00)
// Original: grapher::DebugConstants::~DebugConstants
// ----------------------------------------------------------------------------
void grapher::DebugConstants::Destroy(void **self)
{
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_2094C50));
  g4_std::Rb_tree_string_pair_string_const_c4aac7::M_erase(
    (int)(uintptr_t)(self + 1),
    *(self + 3));
}

// ----------------------------------------------------------------------------
// Function: grapher::DebugConstants::Destroy_ea13d0e40  (binary VA: 0x13d0e40)
// Original: grapher::DebugConstants::~DebugConstants
// ----------------------------------------------------------------------------
void grapher::DebugConstants::Destroy_ea13d0e40(void **self)
{
  grapher::DebugConstants::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::DebugConstants::AddConstant  (binary VA: 0x13d1850)
// Original: grapher::DebugConstants::AddConstant
// ----------------------------------------------------------------------------
void grapher::DebugConstants::AddConstant(int a1, const char **a2, const char **a3, int a4)
{
  int v4;
  const char *v5;
  uint32_t *v6;
  int *i;
  void *v8;
  int v9;
  const char *v10;
  void *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[5];
  typedef uint32_t _g4_t_v15[2];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef void *_g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef void *_g4_t_v25;
  typedef int *_g4_t_v26;
  typedef int *_g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v15)) > _g4_s3 ? (40u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v16)) > _g4_s4 ? (48u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v17)) > _g4_s5 ? (52u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v18)) > _g4_s6 ? (56u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v19)) > _g4_s7 ? (60u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v20)) > _g4_s8 ? (64u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v21)) > _g4_s9 ? (68u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v22)) > _g4_s10 ? (72u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v23)) > _g4_s11 ? (76u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v24)) > _g4_s12 ? (80u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v25)) > _g4_s13 ? (84u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v26)) > _g4_s14 ? (88u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v27)) > _g4_s15 ? (92u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v28)) > _g4_s16 ? (96u + sizeof(_g4_t_v28)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);

  if ( byte_20D5B50 != 0 || _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) == 0 )
  {
    if ( (dword_20D5BE0 & 0x20) != 0 )
      goto LABEL_6;
  }
  else
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    if ( (dword_20D5BE0 & 0x20) != 0 )
    {
LABEL_6:
      v4 = *(uint32_t *)(a1 + 12);
      if ( v4 != 0 )
      {
        v5 = *a2;
        v12 = a1 + 8;
        do
        {
          while ( strcmp(*(const char **)(v4 + 16), v5) >= 0 )
          {
            v12 = v4;
            v4 = *(uint32_t *)(v4 + 8);
            if ( v4 == 0 )
              goto LABEL_11;
          }
          v4 = *(uint32_t *)(v4 + 12);
        }
        while ( v4 != 0 );
LABEL_11:
        if ( a1 + 8 != v12 && strcmp(v5, *(const char **)(v12 + 16)) >= 0 )
        {
LABEL_23:
          v9 = *(uint32_t *)(v12 + 28);
          if ( v9 != 0 )
          {
            v13 = v12 + 24;
            v10 = *a3;
            do
            {
              while ( strcmp(*(const char **)(v9 + 16), v10) >= 0 )
              {
                v13 = v9;
                v9 = *(uint32_t *)(v9 + 8);
                if ( v9 == 0 )
                  goto LABEL_28;
              }
              v9 = *(uint32_t *)(v9 + 12);
            }
            while ( v9 != 0 );
LABEL_28:
            if ( v13 != v12 + 24 && strcmp(v10, *(const char **)(v13 + 16)) >= 0 )
              goto LABEL_31;
          }
          else
          {
            v13 = v12 + 24;
          }
          g4_std::string::construct_copy(v15, a3);
          v15[1] = 0;
          sub_13D0190((char *)v14, v12 + 20, v13, (int)(uintptr_t)(v15));
          v13 = v14[0];
          v11 = (void *)(v15[0] - 12);
          if ( (uint32_t *)(v15[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v15[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11);
          }
LABEL_31:
          *(uint32_t *)(v13 + 20) = a4;
          return;
        }
      }
      else
      {
        v12 = a1 + 8;
      }
      v19 = &v17;
      v20 = &v17;
      v17 = 0;
      v18 = nullptr;
      v21 = 0;
      g4_std::string::construct_copy(&v22, a2);
      v24 = 0;
      v25 = nullptr;
      v28 = 0;
      v26 = &v24;
      v27 = &v24;
      if ( v18 != nullptr )
      {
        v6 = (uint32_t *)g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                         &v23,
                         v18,
                         &v24);
        v25 = v6;
        for ( i = (int *)(v6); i[2] != 0; i = (int *)i[2] )
          ;
        v26 = i;
        while ( v6[3] != 0 )
          v6 = (uint32_t *)v6[3];
        v27 = (int *)(v6);
        v28 = v21;
      }
      sub_13D1150(v14, (uint32_t *)(a1 + 4), v12, (int)(uintptr_t)(&v22));
      v12 = v14[0];
      g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(
        (int)(uintptr_t)(&v23),
        v25);
      v8 = (void *)(v22 - 12);
      if ( (uint32_t *)(v22 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
      g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(
        (int)(uintptr_t)(&v16),
        v18);
      goto LABEL_23;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::DebugConstants::GetConstant  (binary VA: 0x13d1b70)
// Original: grapher::DebugConstants::GetConstant
// ----------------------------------------------------------------------------
int grapher::DebugConstants::GetConstant(int a1, const char **a2, const char **a3)
{
  int v3;
  int v4;
  const char *v5;
  int v6;
  const char *v7;
  void *v8;
  uint32_t *v10;
  int *i;
  void *v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[5];
  typedef uint32_t _g4_t_v16[2];
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef void *_g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef void *_g4_t_v26;
  typedef int *_g4_t_v27;
  typedef int *_g4_t_v28;
  typedef int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v16)) > _g4_s3 ? (40u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v17)) > _g4_s4 ? (48u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v18)) > _g4_s5 ? (52u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v19)) > _g4_s6 ? (56u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v20)) > _g4_s7 ? (60u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v21)) > _g4_s8 ? (64u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v22)) > _g4_s9 ? (68u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v23)) > _g4_s10 ? (72u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v24)) > _g4_s11 ? (76u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v25)) > _g4_s12 ? (80u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v26)) > _g4_s13 ? (84u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v27)) > _g4_s14 ? (88u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v28)) > _g4_s15 ? (92u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v29)) > _g4_s16 ? (96u + sizeof(_g4_t_v29)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 68u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 72u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);

  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  v3 = -1;
  if ( (dword_20D5BE0 & 0x20) != 0 && grapher::DebugConstants::HasConstant(a1, a2, a3) )
  {
    v4 = *(uint32_t *)(a1 + 12);
    if ( v4 != 0 )
    {
      v5 = *a2;
      v13 = a1 + 8;
      do
      {
        while ( strcmp(*(const char **)(v4 + 16), v5) >= 0 )
        {
          v13 = v4;
          v4 = *(uint32_t *)(v4 + 8);
          if ( v4 == 0 )
            goto LABEL_9;
        }
        v4 = *(uint32_t *)(v4 + 12);
      }
      while ( v4 != 0 );
LABEL_9:
      if ( a1 + 8 != v13 && strcmp(v5, *(const char **)(v13 + 16)) >= 0 )
      {
LABEL_11:
        v6 = *(uint32_t *)(v13 + 28);
        if ( v6 != 0 )
        {
          v14 = v13 + 24;
          v7 = *a3;
          do
          {
            while ( strcmp(*(const char **)(v6 + 16), v7) >= 0 )
            {
              v14 = v6;
              v6 = *(uint32_t *)(v6 + 8);
              if ( v6 == 0 )
                goto LABEL_16;
            }
            v6 = *(uint32_t *)(v6 + 12);
          }
          while ( v6 != 0 );
LABEL_16:
          if ( v14 != v13 + 24 && strcmp(v7, *(const char **)(v14 + 16)) >= 0 )
            return *(uint32_t *)(v14 + 20);
        }
        else
        {
          v14 = v13 + 24;
        }
        g4_std::string::construct_copy(v16, a3);
        v16[1] = 0;
        sub_13D0190((char *)v15, v13 + 20, v14, (int)(uintptr_t)(v16));
        v14 = v15[0];
        v8 = (void *)(v16[0] - 12);
        if ( (uint32_t *)(v16[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v8);
        }
        return *(uint32_t *)(v14 + 20);
      }
    }
    else
    {
      v13 = a1 + 8;
    }
    v20 = &v18;
    v21 = &v18;
    v18 = 0;
    v19 = nullptr;
    v22 = 0;
    g4_std::string::construct_copy(&v23, a2);
    v25 = 0;
    v26 = nullptr;
    v29 = 0;
    v27 = &v25;
    v28 = &v25;
    if ( v19 != nullptr )
    {
      v10 = (uint32_t *)g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                        &v24,
                        v19,
                        &v25);
      v26 = v10;
      for ( i = (int *)(v10); i[2] != 0; i = (int *)i[2] )
        ;
      v27 = i;
      while ( v10[3] != 0 )
        v10 = (uint32_t *)v10[3];
      v28 = (int *)(v10);
      v29 = v22;
    }
    sub_13D1150(v15, (uint32_t *)(a1 + 4), v13, (int)(uintptr_t)(&v23));
    v13 = v15[0];
    g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(
      (int)(uintptr_t)(&v24),
      v26);
    v12 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(
      (int)(uintptr_t)(&v17),
      v19);
    goto LABEL_11;
  }
  return v3;
}


