#include "Core/Utils/DecompTypes.h"
#include "glf_debugger.h"

// ----------------------------------------------------------------------------
// Function: glf::debugger::op_std_map_std_string_std_string_const  (binary VA: 0xc8fe50)
// Original: glf::debugger::operator<<<std::map<std::string,std::string> const>
// ----------------------------------------------------------------------------
int glf::debugger::op_std_map_std_string_std_string_const(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  void *v7;
  void *v8;
  int v9;
  int v10;
  int v11;
  int result;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  int v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef void *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[4];
  typedef int _g4_t_v26[4];
  typedef uint32_t _g4_t_v27[4];
  typedef int _g4_t_v28[2];
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t _g4_t_v31[7];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v22)) > _g4_s4 ? (12u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v23)) > _g4_s5 ? (24u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v24)) > _g4_s6 ? (28u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v25)) > _g4_s7 ? (48u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v26)) > _g4_s8 ? (64u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v27)) > _g4_s9 ? (80u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v28)) > _g4_s10 ? (96u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v29)) > _g4_s11 ? (104u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_v30)) > _g4_s12 ? (108u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v31)) > _g4_s13 ? (112u + sizeof(_g4_t_v31)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 104u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 108u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 112u);

  g4_std::string::construct_copy(v31, a2);
  v24 = *(uint32_t *)(a2 + 4);
  v31[1] = v24;
  v2 = *a1;
  v3 = *(uint32_t *)(*a1 - 12);
  if ( v3 == 0 )
    goto LABEL_2;
  if ( *(int *)(v2 - 4) >= 0 )
  {
    sub_19397C0(a1);
    v2 = *a1;
  }
  if ( *(uint8_t *)(v2 + v3 - 1) == 125 )
  {
    v17 = *(uint32_t *)(v2 - 12) - 1;
    if ( *(int *)(v2 - 4) >= 0 )
    {
      sub_19397C0(a1);
      v2 = *a1;
    }
    *(uint8_t *)(v2 + v17) = 44;
  }
  else
  {
LABEL_2:
    g4_std_compat::string_assign((int)(uintptr_t)(a1), "{", 1u);
  }
  glf::debugger::JsonWriter::JsonWriter((glf::debugger::JsonWriter::Self *)v25);
  v4 = *(uint32_t *)(v24 + 12);
  if ( v4 == v24 + 4 )
  {
LABEL_28:
    v26[0] = (int)(uintptr_t)(&dword_213B814);
    sub_1939B80(v26, *(uint32_t *)(v31[0] - 12) + 1);
    g4_std::string::append((int)(uintptr_t)(v26), "\"", 1u);
    g4_std::string::append_str(v26, v31);
    g4_std::string::construct_copy(&v29, v26);
    g4_std::string::append((int)(uintptr_t)(&v29), "\":", 2u);
    g4_std::string::append_str(a1, &v29);
    v15 = (void *)(v29 - 12);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = (void *)(v26[0] - 12);
    if ( (uint32_t *)(v26[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    g4_std::string::append_str(a1, v25);
    g4_std::string::append((int)(uintptr_t)(a1), "}", 1u);
    result = 0;
  }
  else
  {
    while ( 1 )
    {
      v9 = v25[0];
      v10 = *(uint32_t *)(v25[0] - 12);
      if ( v10 == 0 )
        goto LABEL_5;
      if ( *(int *)(v25[0] - 4) >= 0 )
      {
        v18 = *(uint32_t *)(v25[0] - 12);
        sub_19397C0(v25);
        v9 = v25[0];
        v10 = v18;
      }
      if ( *(uint8_t *)(v9 + v10 - 1) == 125 )
      {
        v11 = *(uint32_t *)(v9 - 12) - 1;
        if ( *(int *)(v9 - 4) >= 0 )
        {
          v19 = *(uint32_t *)(v9 - 12) - 1;
          sub_19397C0(v25);
          v9 = v25[0];
          v11 = v19;
        }
        *(uint8_t *)(v9 + v11) = 44;
      }
      else
      {
LABEL_5:
        g4_std_compat::string_assign((int)(uintptr_t)(v25), "{", 1u);
      }
      glf::debugger::JsonWriter::JsonWriter((glf::debugger::JsonWriter::Self *)v27);
      v5 = glf::debugger::JsonWriter::Write(v27, v4 + 20);
      v6 = -1;
      if ( v5 == 0 )
      {
        v28[0] = (int)(uintptr_t)(&dword_213B814);
        sub_1939B80(v28, *(uint32_t *)(*(uint32_t *)(v4 + 16) - 12) + 1);
        g4_std::string::append((int)(uintptr_t)(v28), "\"", 1u);
        g4_std::string::append_str(v28, v4 + 16);
        g4_std::string::construct_copy(&v30, v28);
        g4_std::string::append((int)(uintptr_t)(&v30), "\":", 2u);
        g4_std::string::append_str(v25, &v30);
        v7 = (void *)(v30 - 12);
        if ( (uint32_t *)(v30 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v7);
        }
        v8 = (void *)(v28[0] - 12);
        if ( (uint32_t *)(v28[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v8);
        }
        g4_std::string::append_str(v25, v27);
        g4_std::string::append((int)(uintptr_t)(v25), "}", 1u);
        v6 = 0;
      }
      v23 = (void *)(v27[0] - 12);
      if ( (uint32_t *)(v27[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v20 = v6;
        g4_std::string::Rep::M_destroy(v23);
        v6 = v20;
      }
      if ( v6 != 0 )
        break;
      v4 = sub_19048E0(v4);
      if ( v4 == v24 + 4 )
        goto LABEL_28;
    }
    result = -1;
  }
  v13 = (void *)(v25[0] - 12);
  if ( (uint32_t *)(v25[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v21 = result;
    g4_std::string::Rep::M_destroy(v13);
    result = v21;
  }
  v14 = (void *)(v31[0] - 12);
  if ( (uint32_t *)(v31[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v22 = result;
    g4_std::string::Rep::M_destroy(v14);
    return v22;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::JsonWriter::Insert_string_b32a05  (binary VA: 0xc90a30)
// Original: glf::debugger::JsonWriter::Insert<std::string>
// ----------------------------------------------------------------------------
int glf::debugger::JsonWriter::Insert_string_b32a05(int *a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  void *v5;
  void *v6;
  int result;
  void *v8;
  int v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  typedef int _g4_t_v12[3];
  typedef uint32_t _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v11)) > _g4_s1 ? (32u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v12)) > _g4_s2 ? (48u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v13)) > _g4_s3 ? (60u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);

  v3 = *a1;
  v4 = *(uint32_t *)(*a1 - 12);
  if ( v4 == 0 )
    goto LABEL_5;
  if ( *(int *)(v3 - 4) >= 0 )
  {
    sub_19397C0(a1);
    v3 = *a1;
  }
  if ( *(uint8_t *)(v3 + v4 - 1) == 125 )
  {
    v9 = *(uint32_t *)(v3 - 12) - 1;
    if ( *(int *)(v3 - 4) >= 0 )
    {
      sub_19397C0(a1);
      v3 = *a1;
    }
    *(uint8_t *)(v3 + v9) = 44;
  }
  else
  {
LABEL_5:
    g4_std_compat::string_assign((int)(uintptr_t)(a1), "{", 1u);
  }
  glf::debugger::JsonWriter::JsonWriter((glf::debugger::JsonWriter::Self *)v11);
  if ( glf::debugger::JsonWriter::Write(v11, a3) != 0 )
  {
    result = -1;
  }
  else
  {
    v12[0] = (int)(uintptr_t)(&dword_213B814);
    sub_1939B80(v12, *(uint32_t *)(*a2 - 12) + 1);
    g4_std::string::append((int)(uintptr_t)(v12), "\"", 1u);
    g4_std::string::append_str(v12, a2);
    g4_std::string::construct_copy(v13, v12);
    g4_std::string::append((int)(uintptr_t)(v13), "\":", 2u);
    g4_std::string::append_str(a1, v13);
    v5 = (void *)(v13[0] - 12);
    if ( (uint32_t *)(v13[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    g4_std::string::append_str(a1, v11);
    g4_std::string::append((int)(uintptr_t)(a1), "}", 1u);
    result = 0;
  }
  v8 = (void *)(v11[0] - 12);
  if ( (uint32_t *)(v11[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v10 = result;
    g4_std::string::Rep::M_destroy(v8);
    return v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Alloc  (binary VA: 0xc93540)
// Original: glf::debugger::Alloc
// ----------------------------------------------------------------------------
void * glf::debugger::Alloc(size_t self)
{
  return malloc(self);
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Free  (binary VA: 0xc93570)
// Original: glf::debugger::Free
// ----------------------------------------------------------------------------
void glf::debugger::Free(glf::debugger::Self *self)
{
  free(self);
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::GetLock  (binary VA: 0xc935a0)
// Original: glf::debugger::GetLock
// ----------------------------------------------------------------------------
int glf::debugger::GetLock()
{
  pthread_mutex_t *v1;
  int v2;

  if ( byte_20DF3F0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DF3F0) != 0 )
  {
    v1 = (pthread_mutex_t *)glf::debugger::Alloc(0x54u);
    v2 = (int)(uintptr_t)(v1);
    if ( v1 != nullptr )
      glf::DebuggerMutex::Construct(v1, 1);
    dword_20DF400 = v2;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20DF3F0);
  }
  return dword_20DF400;
}



// ============================================================================
// Address:   0xc93630 (size: 35 bytes)
// Symbol:    _ZN3glf8debugger10ScopeMutexC1Ev
// Demangled: glf::debugger::ScopeMutex::ScopeMutex(void)
// ============================================================================
// Alternative name is '_ZN3glf8debugger10ScopeMutexC2Ev'
struct glf::debugger::ScopeMutex::Self *glf::debugger::ScopeMutex::ScopeMutex()
{
  pthread_mutex_t **Lock;

  Lock = (pthread_mutex_t **)glf::debugger::GetLock();
  return (struct glf::debugger::ScopeMutex::Self *)glf::DebuggerMutex::Lock(Lock);
}
// ----------------------------------------------------------------------------
// Function: glf::debugger::ScopeMutex::Destroy  (binary VA: 0xc93660)
// Original: glf::debugger::ScopeMutex::~ScopeMutex
// ----------------------------------------------------------------------------
void glf::debugger::ScopeMutex::Destroy()
{
  pthread_mutex_t **Lock;

  Lock = (pthread_mutex_t **)glf::debugger::GetLock();
  glf::DebuggerMutex::Unlock(Lock);
}



// ============================================================================
// Address:   0xc93690 (size: 27 bytes)
// Symbol:    _ZN3glf8debugger10JsonWriterC1Ev
// Demangled: glf::debugger::JsonWriter::JsonWriter(void)
// ============================================================================
// Alternative name is '_ZN3glf8debugger10JsonWriterC2Ev'
struct glf::debugger::JsonWriter::Self *glf::debugger::JsonWriter::JsonWriter(glf::debugger::JsonWriter::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  return self;
}
// ----------------------------------------------------------------------------
// Function: glf::debugger::JsonWriter::Write  (binary VA: 0xc936b0)
// Original: glf::debugger::JsonWriter::Write
// ----------------------------------------------------------------------------
int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter::Self *self, int a2)
{
  uint32_t *v2;
  size_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v7;
  typedef uint8_t *_g4_t_v8;
  typedef size_t *_g4_t_v9;
  typedef size_t *_g4_t_v10;
  typedef size_t _g4_t_v11;
  typedef size_t _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint8_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int (**_g4_t_v18)(int);
  typedef int _g4_t_v19;
  typedef int (**_g4_t_v20)(int);
  typedef uint32_t _g4_t_v21[3];
  typedef uint8_t *_g4_t_v22;
  typedef uint8_t *_g4_t_v23;
  typedef uint8_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[2];
  typedef uint32_t *_g4_t_v27;
  typedef uint32_t _g4_t_v28[38];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v9)) > _g4_s2 ? (4u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v10)) > _g4_s3 ? (8u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v11)) > _g4_s4 ? (8u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v12)) > _g4_s5 ? (12u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v13)) > _g4_s6 ? (12u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v14)) > _g4_s7 ? (12u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v15)) > _g4_s8 ? (36u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v16)) > _g4_s9 ? (40u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v17)) > _g4_s10 ? (44u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v18)) > _g4_s11 ? (48u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v19)) > _g4_s12 ? (52u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v20)) > _g4_s13 ? (56u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v21)) > _g4_s14 ? (60u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v22)) > _g4_s15 ? (72u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v23)) > _g4_s16 ? (76u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v24)) > _g4_s17 ? (80u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v25)) > _g4_s18 ? (84u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v26)) > _g4_s19 ? (88u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v27)) > _g4_s20 ? (96u + sizeof(_g4_t_v27)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v28)) > _g4_s21 ? (100u + sizeof(_g4_t_v28)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);

  sub_1900810(v28);
  v28[28] = 0;
  LOWORD(v28[29]) = 0;
  memset(&v28[30], 0, 16);
  v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  sub_19119D0((char *)&v18 + (uint32_t)(uintptr_t)(*(v18 - 3)), 0);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v21[-1] + (uint32_t)(uintptr_t)(*(v20 - 3)), 0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v21[1] = 0;
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v21[2] = 0;
  v22 = nullptr;
  v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v23 = nullptr;
  v24 = nullptr;
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v25 = 0;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v26);
  v26[1] = 24;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v27 = &dword_213B814;
  sub_19119D0(v28, v21);
  g4_std::ostream::op_shl_int(&v20, a2);
  v2 = &dword_213B814;
  v15 = &dword_213B814;
  if ( v24 == nullptr )
  {
    g4_std::string::assign_str(&v15, &v27);
    goto LABEL_19;
  }
  if ( v24 <= v22 )
  {
    v14 = v23;
    if ( v22 == v23 )
      goto LABEL_18;
    if ( v23 != nullptr )
    {
      v11 = v22 - v23;
      v3 = (size_t *)sub_1938930(v22 - v23, 0);
      v2 = (uint32_t *)(v3 + 3);
      if ( v11 == 1 )
      {
        *((uint8_t *)v3 + 12) = *v14;
LABEL_16:
        if ( v3 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v3[2] = 0;
          *v3 = v11;
          *((uint8_t *)v2 + v11) = 0;
        }
LABEL_18:
        v16 = v2;
        g4_std::string::assign_str(&v15, &v16);
        v13 = v16 - 3;
        if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
          goto LABEL_11;
        goto LABEL_19;
      }
    }
    else
    {
      if ( v22 != nullptr )
        goto LABEL_24;
      v3 = (size_t *)sub_1938930(0, 0);
      v2 = (uint32_t *)(v3 + 3);
      v11 = 0;
    }
    v7 = v2;
    v9 = v3;
    memcpy(v2, v14, v11);
    v3 = v9;
    v2 = v7;
    goto LABEL_16;
  }
  if ( v24 == v23 )
    goto LABEL_9;
  if ( v23 == nullptr )
LABEL_24:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v8 = v23;
  v12 = v24 - v23;
  v10 = (size_t *)sub_1938930(v24 - v23, 0);
  v2 = (uint32_t *)(v10 + 3);
  if ( v12 == 1 )
  {
    *((uint8_t *)v10 + 12) = *v8;
  }
  else
  {
    memcpy(v2, v8, v12);
    v2 = (uint32_t *)(v10 + 3);
  }
  if ( v10 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    v10[2] = 0;
    *v10 = v12;
    *((uint8_t *)v10 + v12 + 12) = 0;
  }
LABEL_9:
  v17 = v2;
  g4_std::string::assign_str(&v15, &v17);
  v13 = v17 - 3;
  if ( v17 - 3 != dword_213B808 && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
LABEL_11:
    g4_std::string::Rep::M_destroy(v13);
LABEL_19:
  g4_std::string::assign_str(self, &v15);
  v4 = v15 - 3;
  if ( v15 - 3 != dword_213B808 && __sync_fetch_and_add(v15 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v5 = v27 - 3;
  if ( v27 - 3 != dword_213B808 && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v5);
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v26);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v28);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::JsonWriter::Write  (binary VA: 0xc93c10)
// Original: glf::debugger::JsonWriter::Write
// ----------------------------------------------------------------------------
int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter::Self *self, unsigned int a2)
{
  uint32_t *v2;
  size_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v7;
  typedef uint8_t *_g4_t_v8;
  typedef size_t *_g4_t_v9;
  typedef size_t *_g4_t_v10;
  typedef size_t _g4_t_v11;
  typedef size_t _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint8_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int (**_g4_t_v18)(int);
  typedef int _g4_t_v19;
  typedef int (**_g4_t_v20)(int);
  typedef uint32_t _g4_t_v21[3];
  typedef uint8_t *_g4_t_v22;
  typedef uint8_t *_g4_t_v23;
  typedef uint8_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[2];
  typedef uint32_t *_g4_t_v27;
  typedef uint32_t _g4_t_v28[38];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v9)) > _g4_s2 ? (4u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v10)) > _g4_s3 ? (8u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v11)) > _g4_s4 ? (8u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v12)) > _g4_s5 ? (12u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v13)) > _g4_s6 ? (12u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v14)) > _g4_s7 ? (12u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v15)) > _g4_s8 ? (36u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v16)) > _g4_s9 ? (40u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v17)) > _g4_s10 ? (44u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v18)) > _g4_s11 ? (48u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v19)) > _g4_s12 ? (52u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v20)) > _g4_s13 ? (56u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v21)) > _g4_s14 ? (60u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v22)) > _g4_s15 ? (72u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v23)) > _g4_s16 ? (76u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v24)) > _g4_s17 ? (80u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v25)) > _g4_s18 ? (84u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v26)) > _g4_s19 ? (88u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v27)) > _g4_s20 ? (96u + sizeof(_g4_t_v27)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v28)) > _g4_s21 ? (100u + sizeof(_g4_t_v28)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);

  sub_1900810(v28);
  v28[28] = 0;
  LOWORD(v28[29]) = 0;
  memset(&v28[30], 0, 16);
  v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  sub_19119D0((char *)&v18 + (uint32_t)(uintptr_t)(*(v18 - 3)), 0);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v21[-1] + (uint32_t)(uintptr_t)(*(v20 - 3)), 0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v21[1] = 0;
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v21[2] = 0;
  v22 = nullptr;
  v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v23 = nullptr;
  v24 = nullptr;
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v25 = 0;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v26);
  v26[1] = 24;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v27 = &dword_213B814;
  sub_19119D0(v28, v21);
  sub_192D8B0(&v20, a2);
  v2 = &dword_213B814;
  v15 = &dword_213B814;
  if ( v24 == nullptr )
  {
    g4_std::string::assign_str(&v15, &v27);
    goto LABEL_19;
  }
  if ( v24 <= v22 )
  {
    v14 = v23;
    if ( v22 == v23 )
      goto LABEL_18;
    if ( v23 != nullptr )
    {
      v11 = v22 - v23;
      v3 = (size_t *)sub_1938930(v22 - v23, 0);
      v2 = (uint32_t *)(v3 + 3);
      if ( v11 == 1 )
      {
        *((uint8_t *)v3 + 12) = *v14;
LABEL_16:
        if ( v3 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v3[2] = 0;
          *v3 = v11;
          *((uint8_t *)v2 + v11) = 0;
        }
LABEL_18:
        v16 = v2;
        g4_std::string::assign_str(&v15, &v16);
        v13 = v16 - 3;
        if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
          goto LABEL_11;
        goto LABEL_19;
      }
    }
    else
    {
      if ( v22 != nullptr )
        goto LABEL_24;
      v3 = (size_t *)sub_1938930(0, 0);
      v2 = (uint32_t *)(v3 + 3);
      v11 = 0;
    }
    v7 = v2;
    v9 = v3;
    memcpy(v2, v14, v11);
    v3 = v9;
    v2 = v7;
    goto LABEL_16;
  }
  if ( v24 == v23 )
    goto LABEL_9;
  if ( v23 == nullptr )
LABEL_24:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v8 = v23;
  v12 = v24 - v23;
  v10 = (size_t *)sub_1938930(v24 - v23, 0);
  v2 = (uint32_t *)(v10 + 3);
  if ( v12 == 1 )
  {
    *((uint8_t *)v10 + 12) = *v8;
  }
  else
  {
    memcpy(v2, v8, v12);
    v2 = (uint32_t *)(v10 + 3);
  }
  if ( v10 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    v10[2] = 0;
    *v10 = v12;
    *((uint8_t *)v10 + v12 + 12) = 0;
  }
LABEL_9:
  v17 = v2;
  g4_std::string::assign_str(&v15, &v17);
  v13 = v17 - 3;
  if ( v17 - 3 != dword_213B808 && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
LABEL_11:
    g4_std::string::Rep::M_destroy(v13);
LABEL_19:
  g4_std::string::assign_str(self, &v15);
  v4 = v15 - 3;
  if ( v15 - 3 != dword_213B808 && __sync_fetch_and_add(v15 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v5 = v27 - 3;
  if ( v27 - 3 != dword_213B808 && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v5);
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v26);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v28);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::JsonWriter::Write  (binary VA: 0xc94170)
// Original: glf::debugger::JsonWriter::Write
// ----------------------------------------------------------------------------
int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter::Self *self, int64_t a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  size_t *v6;
  uint32_t *v7;
  typedef uint8_t *_g4_t_v8;
  typedef size_t *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef size_t *_g4_t_v11;
  typedef size_t _g4_t_v12;
  typedef size_t _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef uint8_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int (**_g4_t_v19)(int);
  typedef int _g4_t_v20;
  typedef int (**_g4_t_v21)(int);
  typedef uint32_t _g4_t_v22[3];
  typedef uint8_t *_g4_t_v23;
  typedef uint8_t *_g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[2];
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t _g4_t_v29[38];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v12)) > _g4_s4 ? (20u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v13)) > _g4_s5 ? (24u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v14)) > _g4_s6 ? (24u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v15)) > _g4_s7 ? (24u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v16)) > _g4_s8 ? (52u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v17)) > _g4_s9 ? (56u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v18)) > _g4_s10 ? (60u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v19)) > _g4_s11 ? (64u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v20)) > _g4_s12 ? (68u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v21)) > _g4_s13 ? (72u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v22)) > _g4_s14 ? (76u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v23)) > _g4_s15 ? (88u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v24)) > _g4_s16 ? (92u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v25)) > _g4_s17 ? (96u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v26)) > _g4_s18 ? (100u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v27)) > _g4_s19 ? (104u + sizeof(_g4_t_v27)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v28)) > _g4_s20 ? (112u + sizeof(_g4_t_v28)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v29)) > _g4_s21 ? (116u + sizeof(_g4_t_v29)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 88u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 92u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 100u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 104u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 116u);

  sub_1900810(v29);
  v29[28] = 0;
  LOWORD(v29[29]) = 0;
  memset(&v29[30], 0, 16);
  v29[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v19 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v19 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v20 = 0;
  sub_19119D0((char *)&v19 + (uint32_t)(uintptr_t)(*(v19 - 3)), 0);
  v21 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v22[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v22[-1] + (uint32_t)(uintptr_t)(*(v21 - 3)), 0);
  v19 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v19 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v22[1] = 0;
  v19 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v22[2] = 0;
  v23 = nullptr;
  v29[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v24 = nullptr;
  v25 = nullptr;
  v21 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v26 = 0;
  v22[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v27);
  v27[1] = 24;
  v22[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v28 = &dword_213B814;
  sub_19119D0(v29, v22);
  sub_192DD40(&v21, a2, HIDWORD(a2));
  v16 = &dword_213B814;
  if ( v25 == nullptr )
  {
    g4_std::string::assign_str(&v16, &v28);
    goto LABEL_10;
  }
  if ( v25 <= v23 )
  {
    v15 = v24;
    if ( v23 == v24 )
    {
      v7 = &dword_213B814;
      goto LABEL_19;
    }
    if ( v24 != nullptr )
    {
      v12 = v23 - v24;
      v6 = (size_t *)sub_1938930(v23 - v24, 0);
      v7 = (uint32_t *)(v6 + 3);
      if ( v12 == 1 )
      {
        *((uint8_t *)v6 + 12) = *v15;
LABEL_17:
        if ( v6 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v6[2] = 0;
          *v6 = v12;
          *((uint8_t *)v7 + v12) = 0;
        }
LABEL_19:
        v17 = v7;
        g4_std::string::assign_str(&v16, &v17);
        v14 = v17 - 3;
        if ( v17 - 3 != dword_213B808 && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
          goto LABEL_21;
        goto LABEL_10;
      }
    }
    else
    {
      if ( v23 != nullptr )
        goto LABEL_26;
      v6 = (size_t *)sub_1938930(0, 0);
      v7 = (uint32_t *)(v6 + 3);
      v12 = 0;
    }
    v10 = v7;
    v9 = v6;
    memcpy(v7, v15, v12);
    v6 = v9;
    v7 = v10;
    goto LABEL_17;
  }
  if ( v25 == v24 )
  {
    v2 = &dword_213B814;
    goto LABEL_9;
  }
  if ( v24 == nullptr )
LABEL_26:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v8 = v24;
  v13 = v25 - v24;
  v11 = (size_t *)sub_1938930(v25 - v24, 0);
  v2 = (uint32_t *)(v11 + 3);
  if ( v13 == 1 )
  {
    *((uint8_t *)v11 + 12) = *v8;
  }
  else
  {
    memcpy(v2, v8, v13);
    v2 = (uint32_t *)(v11 + 3);
  }
  if ( v11 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    v11[2] = 0;
    *v11 = v13;
    *((uint8_t *)v11 + v13 + 12) = 0;
  }
LABEL_9:
  v18 = v2;
  g4_std::string::assign_str(&v16, &v18);
  v14 = v18 - 3;
  if ( v18 - 3 != dword_213B808 && __sync_fetch_and_add(v18 - 1, 0xFFFFFFFF) <= 0 )
LABEL_21:
    g4_std::string::Rep::M_destroy(v14);
LABEL_10:
  g4_std::string::assign_str(self, &v16);
  v3 = v16 - 3;
  if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  v19 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v29[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v21 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v22[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v4 = v28 - 3;
  if ( v28 - 3 != dword_213B808 && __sync_fetch_and_add(v28 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v22[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v27);
  v19 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v19 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v21 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v22[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v19 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v19 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v20 = 0;
  v29[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v29);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::JsonWriter::Write  (binary VA: 0xc94720)
// Original: glf::debugger::JsonWriter::Write
// ----------------------------------------------------------------------------
int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter::Self *self, uint64_t a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  size_t *v6;
  uint32_t *v7;
  typedef uint8_t *_g4_t_v8;
  typedef size_t *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef size_t *_g4_t_v11;
  typedef size_t _g4_t_v12;
  typedef size_t _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef uint8_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int (**_g4_t_v19)(int);
  typedef int _g4_t_v20;
  typedef int (**_g4_t_v21)(int);
  typedef uint32_t _g4_t_v22[3];
  typedef uint8_t *_g4_t_v23;
  typedef uint8_t *_g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[2];
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t _g4_t_v29[38];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v12)) > _g4_s4 ? (20u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v13)) > _g4_s5 ? (24u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v14)) > _g4_s6 ? (24u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v15)) > _g4_s7 ? (24u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v16)) > _g4_s8 ? (52u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v17)) > _g4_s9 ? (56u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v18)) > _g4_s10 ? (60u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v19)) > _g4_s11 ? (64u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v20)) > _g4_s12 ? (68u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v21)) > _g4_s13 ? (72u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v22)) > _g4_s14 ? (76u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v23)) > _g4_s15 ? (88u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v24)) > _g4_s16 ? (92u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v25)) > _g4_s17 ? (96u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v26)) > _g4_s18 ? (100u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v27)) > _g4_s19 ? (104u + sizeof(_g4_t_v27)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v28)) > _g4_s20 ? (112u + sizeof(_g4_t_v28)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v29)) > _g4_s21 ? (116u + sizeof(_g4_t_v29)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 88u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 92u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 100u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 104u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 116u);

  sub_1900810(v29);
  v29[28] = 0;
  LOWORD(v29[29]) = 0;
  memset(&v29[30], 0, 16);
  v29[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v19 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v19 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v20 = 0;
  sub_19119D0((char *)&v19 + (uint32_t)(uintptr_t)(*(v19 - 3)), 0);
  v21 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v22[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v22[-1] + (uint32_t)(uintptr_t)(*(v21 - 3)), 0);
  v19 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v19 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v22[1] = 0;
  v19 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v22[2] = 0;
  v23 = nullptr;
  v29[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v24 = nullptr;
  v25 = nullptr;
  v21 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v26 = 0;
  v22[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v27);
  v27[1] = 24;
  v22[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v28 = &dword_213B814;
  sub_19119D0(v29, v22);
  sub_192DF90(&v21, a2, HIDWORD(a2));
  v16 = &dword_213B814;
  if ( v25 == nullptr )
  {
    g4_std::string::assign_str(&v16, &v28);
    goto LABEL_10;
  }
  if ( v25 <= v23 )
  {
    v15 = v24;
    if ( v23 == v24 )
    {
      v7 = &dword_213B814;
      goto LABEL_19;
    }
    if ( v24 != nullptr )
    {
      v12 = v23 - v24;
      v6 = (size_t *)sub_1938930(v23 - v24, 0);
      v7 = (uint32_t *)(v6 + 3);
      if ( v12 == 1 )
      {
        *((uint8_t *)v6 + 12) = *v15;
LABEL_17:
        if ( v6 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v6[2] = 0;
          *v6 = v12;
          *((uint8_t *)v7 + v12) = 0;
        }
LABEL_19:
        v17 = v7;
        g4_std::string::assign_str(&v16, &v17);
        v14 = v17 - 3;
        if ( v17 - 3 != dword_213B808 && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
          goto LABEL_21;
        goto LABEL_10;
      }
    }
    else
    {
      if ( v23 != nullptr )
        goto LABEL_26;
      v6 = (size_t *)sub_1938930(0, 0);
      v7 = (uint32_t *)(v6 + 3);
      v12 = 0;
    }
    v10 = v7;
    v9 = v6;
    memcpy(v7, v15, v12);
    v6 = v9;
    v7 = v10;
    goto LABEL_17;
  }
  if ( v25 == v24 )
  {
    v2 = &dword_213B814;
    goto LABEL_9;
  }
  if ( v24 == nullptr )
LABEL_26:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v8 = v24;
  v13 = v25 - v24;
  v11 = (size_t *)sub_1938930(v25 - v24, 0);
  v2 = (uint32_t *)(v11 + 3);
  if ( v13 == 1 )
  {
    *((uint8_t *)v11 + 12) = *v8;
  }
  else
  {
    memcpy(v2, v8, v13);
    v2 = (uint32_t *)(v11 + 3);
  }
  if ( v11 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    v11[2] = 0;
    *v11 = v13;
    *((uint8_t *)v11 + v13 + 12) = 0;
  }
LABEL_9:
  v18 = v2;
  g4_std::string::assign_str(&v16, &v18);
  v14 = v18 - 3;
  if ( v18 - 3 != dword_213B808 && __sync_fetch_and_add(v18 - 1, 0xFFFFFFFF) <= 0 )
LABEL_21:
    g4_std::string::Rep::M_destroy(v14);
LABEL_10:
  g4_std::string::assign_str(self, &v16);
  v3 = v16 - 3;
  if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  v19 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v29[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v21 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v22[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v4 = v28 - 3;
  if ( v28 - 3 != dword_213B808 && __sync_fetch_and_add(v28 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v22[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v27);
  v19 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v19 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v21 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v22[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v19 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v19 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v20 = 0;
  v29[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v29);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::JsonWriter::Write_eac94cd0  (binary VA: 0xc94cd0)
// Original: glf::debugger::JsonWriter::Write
// ----------------------------------------------------------------------------
int glf::debugger::JsonWriter::Write_eac94cd0(glf::debugger::JsonWriter::Self *self, int64_t a2)
{
  uint32_t *v2;
  size_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v7;
  typedef uint8_t *_g4_t_v8;
  typedef size_t *_g4_t_v9;
  typedef size_t *_g4_t_v10;
  typedef size_t _g4_t_v11;
  typedef size_t _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint8_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int (**_g4_t_v18)(int);
  typedef int _g4_t_v19;
  typedef int (**_g4_t_v20)(int);
  typedef uint32_t _g4_t_v21[3];
  typedef uint8_t *_g4_t_v22;
  typedef uint8_t *_g4_t_v23;
  typedef uint8_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[2];
  typedef uint32_t *_g4_t_v27;
  typedef uint32_t _g4_t_v28[38];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v9)) > _g4_s2 ? (4u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v10)) > _g4_s3 ? (8u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v11)) > _g4_s4 ? (8u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v12)) > _g4_s5 ? (12u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v13)) > _g4_s6 ? (12u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v14)) > _g4_s7 ? (12u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v15)) > _g4_s8 ? (36u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v16)) > _g4_s9 ? (40u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v17)) > _g4_s10 ? (44u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v18)) > _g4_s11 ? (48u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v19)) > _g4_s12 ? (52u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v20)) > _g4_s13 ? (56u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v21)) > _g4_s14 ? (60u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v22)) > _g4_s15 ? (72u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v23)) > _g4_s16 ? (76u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v24)) > _g4_s17 ? (80u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v25)) > _g4_s18 ? (84u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v26)) > _g4_s19 ? (88u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v27)) > _g4_s20 ? (96u + sizeof(_g4_t_v27)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v28)) > _g4_s21 ? (100u + sizeof(_g4_t_v28)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);

  sub_1900810(v28);
  v28[28] = 0;
  LOWORD(v28[29]) = 0;
  memset(&v28[30], 0, 16);
  v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  sub_19119D0((char *)&v18 + (uint32_t)(uintptr_t)(*(v18 - 3)), 0);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v21[-1] + (uint32_t)(uintptr_t)(*(v20 - 3)), 0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v21[1] = 0;
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v21[2] = 0;
  v22 = nullptr;
  v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v23 = nullptr;
  v24 = nullptr;
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v25 = 0;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v26);
  v26[1] = 24;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v27 = &dword_213B814;
  sub_19119D0(v28, v21);
  g4_std::ostream::op_shl_double(&v20, a2);
  v2 = &dword_213B814;
  v15 = &dword_213B814;
  if ( v24 == nullptr )
  {
    g4_std::string::assign_str(&v15, &v27);
    goto LABEL_19;
  }
  if ( v24 <= v22 )
  {
    v14 = v23;
    if ( v22 == v23 )
      goto LABEL_18;
    if ( v23 != nullptr )
    {
      v11 = v22 - v23;
      v3 = (size_t *)sub_1938930(v22 - v23, 0);
      v2 = (uint32_t *)(v3 + 3);
      if ( v11 == 1 )
      {
        *((uint8_t *)v3 + 12) = *v14;
LABEL_16:
        if ( v3 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v3[2] = 0;
          *v3 = v11;
          *((uint8_t *)v2 + v11) = 0;
        }
LABEL_18:
        v16 = v2;
        g4_std::string::assign_str(&v15, &v16);
        v13 = v16 - 3;
        if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
          goto LABEL_11;
        goto LABEL_19;
      }
    }
    else
    {
      if ( v22 != nullptr )
        goto LABEL_24;
      v3 = (size_t *)sub_1938930(0, 0);
      v2 = (uint32_t *)(v3 + 3);
      v11 = 0;
    }
    v7 = v2;
    v9 = v3;
    memcpy(v2, v14, v11);
    v3 = v9;
    v2 = v7;
    goto LABEL_16;
  }
  if ( v24 == v23 )
    goto LABEL_9;
  if ( v23 == nullptr )
LABEL_24:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v8 = v23;
  v12 = v24 - v23;
  v10 = (size_t *)sub_1938930(v24 - v23, 0);
  v2 = (uint32_t *)(v10 + 3);
  if ( v12 == 1 )
  {
    *((uint8_t *)v10 + 12) = *v8;
  }
  else
  {
    memcpy(v2, v8, v12);
    v2 = (uint32_t *)(v10 + 3);
  }
  if ( v10 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    v10[2] = 0;
    *v10 = v12;
    *((uint8_t *)v10 + v12 + 12) = 0;
  }
LABEL_9:
  v17 = v2;
  g4_std::string::assign_str(&v15, &v17);
  v13 = v17 - 3;
  if ( v17 - 3 != dword_213B808 && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
LABEL_11:
    g4_std::string::Rep::M_destroy(v13);
LABEL_19:
  g4_std::string::assign_str(self, &v15);
  v4 = v15 - 3;
  if ( v15 - 3 != dword_213B808 && __sync_fetch_and_add(v15 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v5 = v27 - 3;
  if ( v27 - 3 != dword_213B808 && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v5);
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v26);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v28);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::JsonWriter::Write  (binary VA: 0xc95250)
// Original: glf::debugger::JsonWriter::Write
// ----------------------------------------------------------------------------
int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter::Self *self, float a2)
{
  uint32_t *v2;
  size_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v7;
  typedef uint8_t *_g4_t_v8;
  typedef size_t *_g4_t_v9;
  typedef size_t *_g4_t_v10;
  typedef size_t _g4_t_v11;
  typedef size_t _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint8_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int (**_g4_t_v18)(int);
  typedef int _g4_t_v19;
  typedef int (**_g4_t_v20)(int);
  typedef uint32_t _g4_t_v21[3];
  typedef uint8_t *_g4_t_v22;
  typedef uint8_t *_g4_t_v23;
  typedef uint8_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[2];
  typedef uint32_t *_g4_t_v27;
  typedef uint32_t _g4_t_v28[38];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v9)) > _g4_s2 ? (4u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v10)) > _g4_s3 ? (8u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v11)) > _g4_s4 ? (8u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v12)) > _g4_s5 ? (12u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v13)) > _g4_s6 ? (12u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v14)) > _g4_s7 ? (12u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v15)) > _g4_s8 ? (36u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v16)) > _g4_s9 ? (40u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v17)) > _g4_s10 ? (44u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v18)) > _g4_s11 ? (48u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v19)) > _g4_s12 ? (52u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v20)) > _g4_s13 ? (56u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v21)) > _g4_s14 ? (60u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v22)) > _g4_s15 ? (72u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v23)) > _g4_s16 ? (76u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v24)) > _g4_s17 ? (80u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v25)) > _g4_s18 ? (84u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v26)) > _g4_s19 ? (88u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v27)) > _g4_s20 ? (96u + sizeof(_g4_t_v27)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v28)) > _g4_s21 ? (100u + sizeof(_g4_t_v28)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);

  sub_1900810(v28);
  v28[28] = 0;
  LOWORD(v28[29]) = 0;
  memset(&v28[30], 0, 16);
  v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  sub_19119D0((char *)&v18 + (uint32_t)(uintptr_t)(*(v18 - 3)), 0);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v21[-1] + (uint32_t)(uintptr_t)(*(v20 - 3)), 0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v21[1] = 0;
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v21[2] = 0;
  v22 = nullptr;
  v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v23 = nullptr;
  v24 = nullptr;
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v25 = 0;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v26);
  v26[1] = 24;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v27 = &dword_213B814;
  sub_19119D0(v28, v21);
  g4_std::ostream::op_shl_double(&v20, COERCE__INT64(a2));
  v2 = &dword_213B814;
  v15 = &dword_213B814;
  if ( v24 == nullptr )
  {
    g4_std::string::assign_str(&v15, &v27);
    goto LABEL_19;
  }
  if ( v24 <= v22 )
  {
    v14 = v23;
    if ( v22 == v23 )
      goto LABEL_18;
    if ( v23 != nullptr )
    {
      v11 = v22 - v23;
      v3 = (size_t *)sub_1938930(v22 - v23, 0);
      v2 = (uint32_t *)(v3 + 3);
      if ( v11 == 1 )
      {
        *((uint8_t *)v3 + 12) = *v14;
LABEL_16:
        if ( v3 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v3[2] = 0;
          *v3 = v11;
          *((uint8_t *)v2 + v11) = 0;
        }
LABEL_18:
        v16 = v2;
        g4_std::string::assign_str(&v15, &v16);
        v13 = v16 - 3;
        if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
          goto LABEL_11;
        goto LABEL_19;
      }
    }
    else
    {
      if ( v22 != nullptr )
        goto LABEL_24;
      v3 = (size_t *)sub_1938930(0, 0);
      v2 = (uint32_t *)(v3 + 3);
      v11 = 0;
    }
    v7 = v2;
    v9 = v3;
    memcpy(v2, v14, v11);
    v3 = v9;
    v2 = v7;
    goto LABEL_16;
  }
  if ( v24 == v23 )
    goto LABEL_9;
  if ( v23 == nullptr )
LABEL_24:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v8 = v23;
  v12 = v24 - v23;
  v10 = (size_t *)sub_1938930(v24 - v23, 0);
  v2 = (uint32_t *)(v10 + 3);
  if ( v12 == 1 )
  {
    *((uint8_t *)v10 + 12) = *v8;
  }
  else
  {
    memcpy(v2, v8, v12);
    v2 = (uint32_t *)(v10 + 3);
  }
  if ( v10 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    v10[2] = 0;
    *v10 = v12;
    *((uint8_t *)v10 + v12 + 12) = 0;
  }
LABEL_9:
  v17 = v2;
  g4_std::string::assign_str(&v15, &v17);
  v13 = v17 - 3;
  if ( v17 - 3 != dword_213B808 && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
LABEL_11:
    g4_std::string::Rep::M_destroy(v13);
LABEL_19:
  g4_std::string::assign_str(self, &v15);
  v4 = v15 - 3;
  if ( v15 - 3 != dword_213B808 && __sync_fetch_and_add(v15 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v5 = v27 - 3;
  if ( v27 - 3 != dword_213B808 && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v5);
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v26);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v28);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::JsonWriter::Write  (binary VA: 0xc957b0)
// Original: glf::debugger::JsonWriter::Write
// ----------------------------------------------------------------------------
int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter::Self *self, char a2)
{
  uint32_t *v2;
  size_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v7;
  typedef uint8_t *_g4_t_v8;
  typedef size_t *_g4_t_v9;
  typedef size_t *_g4_t_v10;
  typedef size_t _g4_t_v11;
  typedef size_t _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint8_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int (**_g4_t_v18)(int);
  typedef int _g4_t_v19;
  typedef int (**_g4_t_v20)(int);
  typedef uint32_t _g4_t_v21[3];
  typedef uint8_t *_g4_t_v22;
  typedef uint8_t *_g4_t_v23;
  typedef uint8_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[2];
  typedef uint32_t *_g4_t_v27;
  typedef uint32_t _g4_t_v28[38];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v9)) > _g4_s2 ? (4u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v10)) > _g4_s3 ? (8u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v11)) > _g4_s4 ? (8u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v12)) > _g4_s5 ? (12u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v13)) > _g4_s6 ? (12u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v14)) > _g4_s7 ? (12u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v15)) > _g4_s8 ? (36u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v16)) > _g4_s9 ? (40u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v17)) > _g4_s10 ? (44u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v18)) > _g4_s11 ? (48u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v19)) > _g4_s12 ? (52u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v20)) > _g4_s13 ? (56u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v21)) > _g4_s14 ? (60u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v22)) > _g4_s15 ? (72u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v23)) > _g4_s16 ? (76u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v24)) > _g4_s17 ? (80u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v25)) > _g4_s18 ? (84u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v26)) > _g4_s19 ? (88u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v27)) > _g4_s20 ? (96u + sizeof(_g4_t_v27)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v28)) > _g4_s21 ? (100u + sizeof(_g4_t_v28)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);

  sub_1900810(v28);
  v28[28] = 0;
  LOWORD(v28[29]) = 0;
  memset(&v28[30], 0, 16);
  v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  sub_19119D0((char *)&v18 + (uint32_t)(uintptr_t)(*(v18 - 3)), 0);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v21[-1] + (uint32_t)(uintptr_t)(*(v20 - 3)), 0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v21[1] = 0;
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v21[2] = 0;
  v22 = nullptr;
  v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v23 = nullptr;
  v24 = nullptr;
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v25 = 0;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v26);
  v26[1] = 24;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v27 = &dword_213B814;
  sub_19119D0(v28, v21);
  *(uint32_t *)((char *)&v21[2] + (uint32_t)(uintptr_t)(*(v20 - 3))) |= 1u;
  sub_192DB00(&v20, a2);
  v2 = &dword_213B814;
  v15 = &dword_213B814;
  if ( v24 == nullptr )
  {
    g4_std::string::assign_str(&v15, &v27);
    goto LABEL_19;
  }
  if ( v24 <= v22 )
  {
    v14 = v23;
    if ( v22 == v23 )
      goto LABEL_18;
    if ( v23 != nullptr )
    {
      v11 = v22 - v23;
      v3 = (size_t *)sub_1938930(v22 - v23, 0);
      v2 = (uint32_t *)(v3 + 3);
      if ( v11 == 1 )
      {
        *((uint8_t *)v3 + 12) = *v14;
LABEL_16:
        if ( v3 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v3[2] = 0;
          *v3 = v11;
          *((uint8_t *)v2 + v11) = 0;
        }
LABEL_18:
        v16 = v2;
        g4_std::string::assign_str(&v15, &v16);
        v13 = v16 - 3;
        if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
          goto LABEL_11;
        goto LABEL_19;
      }
    }
    else
    {
      if ( v22 != nullptr )
        goto LABEL_24;
      v3 = (size_t *)sub_1938930(0, 0);
      v2 = (uint32_t *)(v3 + 3);
      v11 = 0;
    }
    v7 = v2;
    v9 = v3;
    memcpy(v2, v14, v11);
    v3 = v9;
    v2 = v7;
    goto LABEL_16;
  }
  if ( v24 == v23 )
    goto LABEL_9;
  if ( v23 == nullptr )
LABEL_24:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v8 = v23;
  v12 = v24 - v23;
  v10 = (size_t *)sub_1938930(v24 - v23, 0);
  v2 = (uint32_t *)(v10 + 3);
  if ( v12 == 1 )
  {
    *((uint8_t *)v10 + 12) = *v8;
  }
  else
  {
    memcpy(v2, v8, v12);
    v2 = (uint32_t *)(v10 + 3);
  }
  if ( v10 != (size_t *)(uintptr_t)(dword_213B808) )
  {
    v10[2] = 0;
    *v10 = v12;
    *((uint8_t *)v10 + v12 + 12) = 0;
  }
LABEL_9:
  v17 = v2;
  g4_std::string::assign_str(&v15, &v17);
  v13 = v17 - 3;
  if ( v17 - 3 != dword_213B808 && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
LABEL_11:
    g4_std::string::Rep::M_destroy(v13);
LABEL_19:
  g4_std::string::assign_str(self, &v15);
  v4 = v15 - 3;
  if ( v15 - 3 != dword_213B808 && __sync_fetch_and_add(v15 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v5 = v27 - 3;
  if ( v27 - 3 != dword_213B808 && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v5);
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v26);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v28);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::JsonWriter::Write  (binary VA: 0xc95d20)
// Original: glf::debugger::JsonWriter::Write
// ----------------------------------------------------------------------------
int glf::debugger::JsonWriter::Write(int a1, uint32_t *a2)
{
  void *v2;
  void *v3;
  typedef int _g4_t_v5[3];
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v5[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(v5, *(uint32_t *)(*a2 - 12) + 1);
  g4_std::string::append((int)(uintptr_t)(v5), "\"", 1u);
  g4_std::string::append_str(v5, a2);
  g4_std::string::construct_copy(v6, v5);
  g4_std::string::append((int)(uintptr_t)(v6), "\"", 1u);
  g4_std::string::assign_str(a1, v6);
  v2 = (void *)(v6[0] - 12);
  if ( (uint32_t *)(v6[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v5[0] - 12);
  if ( (uint32_t *)(v5[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::JsonWriter::Write  (binary VA: 0xc95e30)
// Original: glf::debugger::JsonWriter::Write
// ----------------------------------------------------------------------------
int glf::debugger::JsonWriter::Write(glf::debugger::JsonWriter::Self *self, char *s)
{
  size_t v2;
  void *v3;
  void *v4;
  void *v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  typedef int _g4_t_v9[3];
  typedef int _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v10)) > _g4_s3 ? (32u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), "\"", (int)(uintptr_t)(&v7));
  g4_std::string::construct_copy(v9, v8);
  v2 = strlen(s);
  g4_std::string::append((int)(uintptr_t)(v9), s, v2);
  g4_std::string::construct_copy(v10, v9);
  g4_std::string::append((int)(uintptr_t)(v10), "\"", 1u);
  g4_std::string::assign_str(self, v10);
  v3 = (void *)(v10[0] - 12);
  if ( (uint32_t *)(v10[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v9[0] - 12);
  if ( (uint32_t *)(v9[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v8[0] - 12);
  if ( (uint32_t *)(v8[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::JsonWriter::Clear  (binary VA: 0xc95f60)
// Original: glf::debugger::JsonWriter::Clear
// ----------------------------------------------------------------------------
int glf::debugger::JsonWriter::Clear(glf::debugger::JsonWriter::Self *self)
{
  return (int)(uintptr_t)(g4_std::string::clear(self, 0, *(uint32_t *)(*(uint32_t *)self - 12), 0));
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::GetInstanceName  (binary VA: 0xc95fa0)
// Original: glf::debugger::Tweakable::GetInstanceName
// ----------------------------------------------------------------------------
int glf::debugger::Tweakable::GetInstanceName(glf::debugger::Tweakable::Self *self)
{
  return *((uint32_t *)self + 16);
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::WriteValues  (binary VA: 0xc95fb0)
// Original: glf::debugger::Tweakable::WriteValues
// ----------------------------------------------------------------------------
void glf::debugger::Tweakable::WriteValues()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::OnSetValue  (binary VA: 0xc95fc0)
// Original: glf::debugger::Tweakable::OnSetValue
// ----------------------------------------------------------------------------
void glf::debugger::Tweakable::OnSetValue()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::Construct  (binary VA: 0xc95fd0)
// Original: glf::debugger::Tweakable::Tweakable
// ----------------------------------------------------------------------------
glf::debugger::Tweakable::Self * glf::debugger::Tweakable::Construct(glf::debugger::Tweakable::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DC60);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint8_t *)self + 84) = 0;
  *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)((char *)self + 4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::SetValuesFromXML  (binary VA: 0xc96080)
// Original: glf::debugger::Tweakable::SetValuesFromXML
// ----------------------------------------------------------------------------
void glf::debugger::Tweakable::SetValuesFromXML()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::LoadXML  (binary VA: 0xc96090)
// Original: glf::debugger::Tweakable::LoadXML
// ----------------------------------------------------------------------------
void glf::debugger::Tweakable::LoadXML(glf::debugger::Tweakable::Self *self, glf::IOStream::Self *a2)
{
  int v2;
  size_t n;
  int v4;
  int v5;
  int v6;
  void *v7;
  typedef char *_g4_t_s;
  typedef uint16_t _g4_t_v9[17];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_s)) > _g4_s0 ? (8u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v9)) > _g4_s1 ? (26u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 26u);

  G4_VCALL<void>(a2, 60, 0, 0);
  v2 = G4_VCALL<int>(a2, 52);
  s = nullptr;
  n = v2 + 1;
  if ( v2 != -1 )
  {
    s = (char *)opNew(v2 + 1);
    memset(s, 0, n);
  }
  v4 = G4_VCALL<int>(a2, 52);
  if ( v4 > 0 )
  {
    v5 = 0;
    do
    {
      v6 = G4_VCALL<int>(a2, 12, &s[v5], v4);
      v4 -= v6;
      v5 += v6;
    }
    while ( v4 > 0 );
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9[1]), s, (int)(uintptr_t)(v9));
  glf::debugger::Tweakable::SetValuesFromXML();
  v7 = (void *)(*(uint32_t *)&v9[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v9[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v9[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  if ( s != nullptr )
    opDelete(s);
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::LoadXML  (binary VA: 0xc961c0)
// Original: glf::debugger::Tweakable::LoadXML
// ----------------------------------------------------------------------------
void glf::debugger::Tweakable::LoadXML(glf::debugger::Tweakable::Self *self, const char *a2)
{
  uint32_t v2[13];

  glf::FileStreamImpl::Construct((glf::IOStream::Self *)v2, (int)(uintptr_t)(a2), 1);
  v2[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  if ( (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)v2) != 0 )
    glf::debugger::Tweakable::LoadXML(self, (glf::IOStream::Self *)v2);
  v2[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v2);
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::SaveXML  (binary VA: 0xc96250)
// Original: glf::debugger::Tweakable::SaveXML
// ----------------------------------------------------------------------------
void glf::debugger::Tweakable::SaveXML(glf::debugger::Tweakable::Self *self, const char *a2)
{
  char *v2;
  typedef char *_g4_t_v3;
  typedef uint32_t _g4_t_v4[13];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);

  glf::FileStreamImpl::Construct((glf::IOStream::Self *)v4, (int)(uintptr_t)(a2), 18);
  v4[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  if ( (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)v4) != 0 )
  {
    v3 = (char *)&dword_213B814;
    G4_VCALL<void>(self, 12, &v3);
    glf::FileStreamImpl::Write((glf::FileStreamImpl::Self *)v4, v3, *((uint32_t *)v3 - 3));
    v2 = v3 - 12;
    if ( v3 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v3 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v2);
  }
  v4[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v4);
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::GetPersistentName  (binary VA: 0xc96330)
// Original: glf::debugger::Tweakable::GetPersistentName
// ----------------------------------------------------------------------------
glf::debugger::Tweakable::Self * glf::debugger::Tweakable::GetPersistentName(glf::debugger::Tweakable::Self *self, int a2)
{
  char *v2;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v2 = (char *)G4_VCALL<int>(a2, 8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), v2, (int)(uintptr_t)(&v4));
  g4_std::string::append((int)(uintptr_t)(self), ".xml", 4u);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::LoadPersistent  (binary VA: 0xc963a0)
// Original: glf::debugger::Tweakable::LoadPersistent
// ----------------------------------------------------------------------------
void glf::debugger::Tweakable::LoadPersistent(glf::debugger::Tweakable::Self *self)
{
  void *v1;
  typedef int _g4_t_v2;
  typedef uint32_t _g4_t_v3[16];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  glf::debugger::Tweakable::GetPersistentName((glf::debugger::Tweakable::Self *)&v2, (int)(uintptr_t)(self));
  glf::FileStreamImpl::Construct((glf::IOStream::Self *)v3, v2, 4097);
  v3[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  v1 = (void *)(v2 - 12);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  if ( (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)v3) != 0 )
    glf::debugger::Tweakable::LoadXML(self, (glf::IOStream::Self *)v3);
  v3[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v3);
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::SetPersistent  (binary VA: 0xc96480)
// Original: glf::debugger::Tweakable::SetPersistent
// ----------------------------------------------------------------------------
void glf::debugger::Tweakable::SetPersistent(glf::debugger::Tweakable::Self *self)
{
  *((uint8_t *)self + 84) = 1;
  glf::debugger::Tweakable::LoadPersistent(self);
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::SavePersistent  (binary VA: 0xc964b0)
// Original: glf::debugger::Tweakable::SavePersistent
// ----------------------------------------------------------------------------
void glf::debugger::Tweakable::SavePersistent(glf::debugger::Tweakable::Self *self)
{
  glf::debugger::Tweakable::Self *v1;
  void *v2;
  char *v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[16];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v6[15] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  glf::debugger::Tweakable::GetPersistentName((glf::debugger::Tweakable::Self *)&v5, (int)(uintptr_t)(self));
  glf::FileStreamImpl::Construct((glf::IOStream::Self *)v6, v5, 4122);
  v6[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  v2 = (void *)(v5 - 12);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  if ( (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)v6) != 0 )
  {
    v4 = &dword_213B814;
    G4_VCALL<void>(v1, 12, &v4);
    glf::FileStreamImpl::Write((glf::FileStreamImpl::Self *)v6, v4, *((uint32_t *)v4 - 3));
    v3 = (char *)v4 - 12;
    if ( (char *)v4 - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v4 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
  }
  v6[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v6);
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::GetType  (binary VA: 0xc965d0)
// Original: glf::debugger::Tweakable::GetType
// ----------------------------------------------------------------------------
int glf::debugger::Tweakable::GetType(int a1, int a2)
{
  int v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  v2 = g4_std::string::compare(a2, "int");
  v3 = 1;
  if ( v2 != 0 )
  {
    v5 = g4_std::string::compare(a2, "float");
    v3 = 2;
    if ( v5 != 0 )
    {
      v6 = g4_std::string::compare(a2, "string");
      v3 = 3;
      if ( v6 != 0 )
      {
        v7 = g4_std::string::compare(a2, "bool");
        v3 = 4;
        if ( v7 != 0 )
        {
          v8 = g4_std::string::compare(a2, "color");
          v3 = 5;
          if ( v8 != 0 )
          {
            v9 = g4_std::string::compare(a2, "colorf");
            v3 = 6;
            if ( v9 != 0 )
            {
              v10 = g4_std::string::compare(a2, "vector2d");
              v3 = 7;
              if ( v10 != 0 )
              {
                v11 = g4_std::string::compare(a2, "vector3d");
                v3 = 8;
                if ( v11 != 0 )
                  return g4_std::string::compare(a2, "vector4d") == 0 ? 9 : 0;
              }
            }
          }
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::Color::Construct  (binary VA: 0xc96700)
// Original: glf::debugger::Tweakable::Color::Color
// ----------------------------------------------------------------------------
unsigned int glf::debugger::Tweakable::Color::Construct(uint8_t *a1, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  unsigned int result;
  unsigned int v11;
  unsigned int v12;

  v2 = *(uint32_t *)(*a2 - 12);
  if ( v2 <= 0 )
  {
    result = 0;
    LOBYTE(v12) = 0;
    LOBYTE(v11) = 0;
    LOBYTE(v9) = 0;
    goto LABEL_11;
  }
  v3 = v2 + *a2;
  v4 = 0;
  v5 = 0;
  v6 = 4 * v2;
  do
  {
    while ( 1 )
    {
      v7 = *(char *)(v3 - 1);
      if ( v7 <= 0xFF )
        LOWORD(v7) = *(uint16_t *)(tolower_tab_ + 2 * v7 + 2);
      if ( (uint8_t)(v7 - 48) > 9u )
        break;
      v5 |= ((char)v7 - 48) << v4;
LABEL_4:
      v4 += 4;
      --v3;
      if ( v4 == v6 )
        goto LABEL_10;
    }
    if ( (uint8_t)(v7 - 97) > 5u )
      goto LABEL_4;
    --v3;
    v8 = ((char)v7 - 87) << v4;
    v4 += 4;
    v5 |= v8;
  }
  while ( v4 != v6 );
LABEL_10:
  v9 = HIBYTE(v5);
  result = v5;
  v11 = (v5 & 0xFF0000) >> 16;
  v12 = v5 >> 8;
LABEL_11:
  a1[3] = v9;
  *a1 = v11;
  a1[1] = v12;
  a1[2] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::Vector4d::Construct  (binary VA: 0xc967e0)
// Original: glf::debugger::Tweakable::Vector4d::Vector4d
// ----------------------------------------------------------------------------
char * glf::debugger::Tweakable::Vector4d::Construct(uint32_t *a1, char **a2)
{
  char *result;
  char *s;
  int v4;
  char *v5;
  int v6;
  char *v7;
  float v8; // xmm0_4
  char *v9;
  typedef char *_g4_t_v10;
  typedef uint16_t _g4_t_v11[3];
  typedef char *_g4_t_nptr;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (22u + sizeof(_g4_t_v11)) > _g4_s1 ? (22u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_nptr)) > _g4_s2 ? (28u + sizeof(_g4_t_nptr)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 22u);
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 28u);

  result = (char *)a2;
  a1[2] = 0;
  a1[1] = 0;
  *a1 = 0;
  s = *a2;
  v4 = *((uint32_t *)*a2 - 3);
  *(uint32_t *)&v11[1] = 0;
  v5 = &s[v4];
  if ( v5 > s )
  {
    v6 = 0;
    do
    {
      v7 = strchr(s, 44);
      if ( v7 == nullptr )
        v7 = v5;
      v10 = v7;
      sub_193A970((int)(uintptr_t)(&nptr), s, v7 - s, (int)(uintptr_t)(v11));
      v8 = strtod(nptr, (char **)&v11[1]);
      *(float *)&a1[v6] = v8;
      s = v10 + 1;
      result = nptr;
      v9 = nptr - 12;
      if ( nptr - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)nptr - 1, 0xFFFFFFFF) <= 0 )
      {
        result = (g4_std::string::Rep::M_destroy(v9), (char *)0);
      }
      ++v6;
    }
    while ( v5 > s && v6 <= 3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::Vector3d::Construct  (binary VA: 0xc968f0)
// Original: glf::debugger::Tweakable::Vector3d::Vector3d
// ----------------------------------------------------------------------------
int glf::debugger::Tweakable::Vector3d::Construct(int a1, char **a2)
{
  int result;
  typedef int64_t _g4_t_v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);

  glf::debugger::Tweakable::Vector4d::Construct(&v3, a2);
  *(uint64_t *)a1 = v3;
  result = v4;
  *(uint32_t *)(a1 + 8) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::Vector2d::Construct  (binary VA: 0xc96940)
// Original: glf::debugger::Tweakable::Vector2d::Vector2d
// ----------------------------------------------------------------------------
int glf::debugger::Tweakable::Vector2d::Construct(uint32_t *a1, char **a2)
{
  int result;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);

  glf::debugger::Tweakable::Vector4d::Construct(&v3, a2);
  *a1 = v3;
  result = v4;
  a1[1] = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::Colorf::Construct  (binary VA: 0xc96990)
// Original: glf::debugger::Tweakable::Colorf::Colorf
// ----------------------------------------------------------------------------
int glf::debugger::Tweakable::Colorf::Construct(uint32_t *a1, char **a2)
{
  int result;
  typedef uint32_t _g4_t_v3[3];
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  glf::debugger::Tweakable::Vector4d::Construct(v3, a2);
  *a1 = v3[0];
  a1[1] = v3[1];
  a1[2] = v3[2];
  result = v4;
  a1[3] = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::SetValue  (binary VA: 0xc969f0)
// Original: glf::debugger::Tweakable::SetValue
// ----------------------------------------------------------------------------
int glf::debugger::Tweakable::SetValue(int a1, int a2, int a3, const void **a4, const char **a5)
{
  int result;
  int v6;
  size_t v7;
  size_t v8;
  size_t v9;
  int v10;
  size_t v11;
  size_t v12;
  void *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  g4_int128_t *v18;
  uint32_t *v19;
  bool *v20;
  float *v21;
  float v22; // xmm0_4
  int *v23;
  typedef size_t _g4_t_v24;
  typedef int _g4_t_v25;
  typedef const void *_g4_t_v26;
  typedef char *_g4_t_endptr;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint32_t _g4_t_v30[2];
  typedef uint32_t _g4_t_v31[3];
  typedef g4_int128_t _g4_t_v32;
  typedef uint32_t _g4_t_v33[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v25)) > _g4_s1 ? (20u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v26)) > _g4_s2 ? (24u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_endptr)) > _g4_s3 ? (48u + sizeof(_g4_t_endptr)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v28)) > _g4_s4 ? (52u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v29)) > _g4_s5 ? (56u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v30)) > _g4_s6 ? (60u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v31)) > _g4_s7 ? (68u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v32)) > _g4_s8 ? (80u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v33)) > _g4_s9 ? (96u + sizeof(_g4_t_v33)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);

  result = a2;
  v6 = *(uint32_t *)(a2 + 12);
  if ( v6 != 0 )
  {
    v25 = a2 + 8;
    v26 = *a4;
    v7 = *((uint32_t *)*a4 - 3);
    do
    {
      while ( 1 )
      {
        v8 = v7;
        v9 = *(uint32_t *)(*(uint32_t *)(v6 + 16) - 12);
        v24 = v7;
        if ( v9 <= v7 )
          v8 = *(uint32_t *)(*(uint32_t *)(v6 + 16) - 12);
        result = memcmp(*(const void **)(v6 + 16), v26, v8);
        v7 = v24;
        v10 = v9 - v24;
        if ( result != 0 )
          v10 = result;
        if ( v10 < 0 )
          break;
        v25 = v6;
        v6 = *(uint32_t *)(v6 + 8);
        if ( v6 == 0 )
          goto LABEL_10;
      }
      v6 = *(uint32_t *)(v6 + 12);
    }
    while ( v6 != 0 );
LABEL_10:
    if ( a2 + 8 != v25 )
    {
      v11 = v24;
      v12 = *(uint32_t *)(*(uint32_t *)(v25 + 16) - 12);
      if ( v12 <= v24 )
        v11 = *(uint32_t *)(*(uint32_t *)(v25 + 16) - 12);
      result = memcmp(v26, *(const void **)(v25 + 16), v11);
      if ( result == 0 )
        result = v24 - v12;
      if ( result >= 0 )
      {
        endptr = nullptr;
        switch ( *(uint32_t *)(v25 + 20) )
        {
          case 1:
            v23 = *(int **)(v25 + 24);
            *v23 = atoi(*a5);
            break;
          case 2:
            v21 = *(float **)(v25 + 24);
            v22 = strtod(*a5, &endptr);
            *v21 = v22;
            break;
          case 3:
            g4_std::string::assign_str(*(uint32_t *)(v25 + 24), a5);
            break;
          case 4:
            v20 = *(bool **)(v25 + 24);
            *v20 = g4_std::string::compare((int)(uintptr_t)(a5), "true") == 0;
            break;
          case 5:
            v19 = *(uint32_t **)(v25 + 24);
            glf::debugger::Tweakable::Color::Construct((uint8_t *)(&v29), (uint32_t *)(a5));
            *v19 = v29;
            break;
          case 6:
            v18 = *(g4_int128_t **)(v25 + 24);
            glf::debugger::Tweakable::Colorf::Construct((uint32_t *)(&v32), (char **)a5);
            *v18 = v32;
            break;
          case 7:
            v16 = *(uint32_t **)(v25 + 24);
            glf::debugger::Tweakable::Vector2d::Construct(v30, (char **)a5);
            v17 = v30[0];
            v16[1] = v30[1];
            *v16 = v17;
            break;
          case 8:
            v15 = *(uint32_t **)(v25 + 24);
            glf::debugger::Tweakable::Vector3d::Construct((int)(uintptr_t)(v31), (char **)a5);
            *v15 = v31[0];
            v15[1] = v31[1];
            v15[2] = v31[2];
            break;
          case 9:
            v14 = *(uint32_t **)(v25 + 24);
            glf::debugger::Tweakable::Vector4d::Construct(v33, (char **)a5);
            *v14 = v33[0];
            v14[1] = v33[1];
            v14[2] = v33[2];
            v14[3] = v33[3];
            break;
          default:
            break;
        }
        g4_std::string::construct_copy(&v28, v25 + 16);
        G4_VCALL<void>(a1, 16, &v28);
        result = v28;
        v13 = (void *)(v28 - 12);
        if ( (uint32_t *)(v28 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
        {
          return ((g4_std::string::Rep::M_destroy(v13)), (int)0);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::WriteGroup  (binary VA: 0xc96cd0)
// Original: glf::debugger::Tweakable::WriteGroup
// ----------------------------------------------------------------------------
void glf::debugger::Tweakable::WriteGroup()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::SendValues  (binary VA: 0xc96ce0)
// Original: glf::debugger::Tweakable::SendValues
// ----------------------------------------------------------------------------
void glf::debugger::Tweakable::SendValues()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::Destroy  (binary VA: 0xc96cf0)
// Original: glf::debugger::Tweakable::~Tweakable
// ----------------------------------------------------------------------------
void glf::debugger::Tweakable::Destroy(void **self)
{
  int v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  int v5;

  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_206DC60));
  if ( *(self + 17) != nullptr )
    opDelete(*(self + 17));
  v1 = (int)(uintptr_t)(*(self + 16));
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sub_7E9150((int)(uintptr_t)(self + 1));
  if ( *(self + 11) != nullptr )
    opDelete(*(self + 11));
  v2 = (uint32_t *)(*(self + 9));
  v3 = (uint32_t *)(*(self + 8));
  if ( v2 != v3 )
  {
    do
    {
      v4 = (uint32_t *)(*v3 - 12);
      if ( v4 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v3 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v4);
      ++v3;
    }
    while ( v2 != v3 );
    v3 = (uint32_t *)(*(self + 8));
  }
  if ( v3 != nullptr )
    opDelete(v3);
  g4_std::Rb_tree_string_pair_string_const_ed633f::M_erase(
    (int)(uintptr_t)(self + 2),
    *(self + 4));
  v5 = (int)(uintptr_t)(*(self + 1));
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: glf::debugger::Tweakable::Destroy_eac96e10  (binary VA: 0xc96e10)
// Original: glf::debugger::Tweakable::~Tweakable
// ----------------------------------------------------------------------------
void glf::debugger::Tweakable::Destroy_eac96e10(void **self)
{
  glf::debugger::Tweakable::Destroy(self);
  opDelete(self);
}


