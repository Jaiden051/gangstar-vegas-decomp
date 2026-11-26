#include "Core/Utils/DecompTypes.h"
#include "iap_IAPLog.h"

// ============================================================================
// G4_UP8Shop/lib/iap/decompiled/iap_IAPLog.cpp
// Library: iap | Module: iap_IAPLog
// Binary Address Span: 0x1537cf0 .. 0x1539110 (13 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x1537cf0 (size: 15 bytes)
// Symbol:    _ZN3iap6IAPLogC2Ev
// Demangled: iap::IAPLog::IAPLog(void)
// ============================================================================
// Alternative name is '_ZN3iap6IAPLogC1Ev'
struct iap::IAPLog::Self *iap::IAPLog::IAPLog(iap::IAPLog::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: iap::IAPLog::Destroy  (binary VA: 0x1537d00)
// Original: iap::IAPLog::~IAPLog
// ----------------------------------------------------------------------------
void iap::IAPLog::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: iap::IAPLog::GetInstance  (binary VA: 0x1537d10)
// Original: iap::IAPLog::GetInstance
// ----------------------------------------------------------------------------
iap::IAPLog::Self * iap::IAPLog::GetInstance()
{
  iap::IAPLog::Self *result;
  iap::IAPLog::Self *v1;

  result = (iap::IAPLog::Self *)iap::IAPLog::s_instance;
  if ( iap::IAPLog::s_instance == 0 )
  {
    v1 = (iap::IAPLog::Self *)opNew(4u);
    iap::IAPLog::IAPLog(v1);
    iap::IAPLog::s_instance = (uintptr_t)(uintptr_t)(v1);
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::IAPLog::LogInfo  (binary VA: 0x1537d70)
// Original: iap::IAPLog::LogInfo
// ----------------------------------------------------------------------------
int iap::IAPLog::LogInfo(int a1, int a2, int a3, const char **a4, ...)
{
  const char *v4;
  int v5;
  int result;
  void *v7;
  void *v8;
  void *v9;
  int v10;
  char *v11;
  const char *v12;
  va_list __varargs;
  typedef int _g4_t_v13[4];
  typedef int _g4_t_v14[3];
  typedef int _g4_t_v15;
  typedef char _g4_t_s[268];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_s)) > _g4_s3 ? (32u + sizeof(_g4_t_s)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 32u);

  va_start(__varargs, a4);
  v4 = *a4;
  if ( (unsigned int)(a3 - 3) <= 1 )
  {
    if ( *((uint32_t *)v4 - 3) != 0 )
    {
      if ( sub_1937EB0(a4, 37, 0) != (char *)(intptr_t)(-1) )
      {
        v12 = *a4;
        s[0] = 0;
        vsnprintf(s, 0x100u, v12, __varargs);
        g4_std_compat::string_assign((int)(uintptr_t)(a4), s, strlen(s));
      }
      v4 = *a4;
    }
    v13[0] = (int)(uintptr_t)(&dword_213B814);
    sub_1939B80(v13, *((uint32_t *)v4 - 3) + 11);
    g4_std::string::append((int)(uintptr_t)(v13), "\"Details\":\"", 0xBu);
    g4_std::string::append_str(v13, a4);
    g4_std::string::construct_copy(&v15, v13);
    g4_std::string::append((int)(uintptr_t)(&v15), "\"", 1u);
    g4_std::string::assign_str(a4, &v15);
    v8 = (void *)(v15 - 12);
    if ( (uint32_t *)(v15 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    result = v13[0];
    v9 = (void *)(v13[0] - 12);
    if ( (uint32_t *)(v13[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      { g4_std::string::Rep::M_destroy(v9); return 0; }
    }
  }
  else
  {
    v5 = *((uint32_t *)v4 - 3);
    if ( v5 != 0 )
    {
      v10 = v5 - 1;
      if ( *((int *)v4 - 1) >= 0 )
      {
        sub_19397C0(a4);
        v4 = *a4;
      }
      v11 = (char *)&v4[v10];
      if ( v4[v10] == 10 )
      {
        if ( *((int *)v4 - 1) >= 0 )
        {
          sub_19397C0(a4);
          v11 = (char *)&(*a4)[v10];
        }
        *v11 = 32;
        v4 = *a4;
      }
    }
    v14[0] = (int)(uintptr_t)(&dword_213B814);
    sub_1939B80(v14, *((uint32_t *)v4 - 3) + 7);
    g4_std::string::append((int)(uintptr_t)(v14), "\"Data\":", 7u);
    g4_std::string::append_str(v14, a4);
    g4_std::string::assign_str(a4, v14);
    result = v14[0];
    v7 = (void *)(v14[0] - 12);
    if ( (uint32_t *)(v14[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      { g4_std::string::Rep::M_destroy(v7); return 0; }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::IAPLog::LogToConsole  (binary VA: 0x1538010)
// Original: iap::IAPLog::LogToConsole
// ----------------------------------------------------------------------------
int iap::IAPLog::LogToConsole(int a1, int a2)
{
  { G4_PlatformLog(7 - a2, "IAP", "%s", ""); return 0; }
}

// ----------------------------------------------------------------------------
// Function: iap::IAPLog::LogToConsole  (binary VA: 0x1538060)
// Original: iap::IAPLog::LogToConsole
// ----------------------------------------------------------------------------
int iap::IAPLog::LogToConsole(int a1, int a2, char *a3, int a4, const char **a5, ...)
{
  int v5;
  unsigned int v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  va_list __varargs;
  typedef const char *_g4_t_v15;
  typedef int _g4_t_v16[2];
  typedef uint32_t _g4_t_v17[4];
  typedef uint32_t _g4_t_v18[4];
  typedef int _g4_t_v19[4];
  typedef uint32_t _g4_t_v20[4];
  typedef uint32_t _g4_t_v21[4];
  typedef uint32_t _g4_t_v22[3];
  typedef int _g4_t_v23;
  typedef char _g4_t_s[268];
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v16)) > _g4_s1 ? (31u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v17)) > _g4_s2 ? (40u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v18)) > _g4_s3 ? (56u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v19)) > _g4_s4 ? (72u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (88u + sizeof(_g4_t_v20)) > _g4_s5 ? (88u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (104u + sizeof(_g4_t_v21)) > _g4_s6 ? (104u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (120u + sizeof(_g4_t_v22)) > _g4_s7 ? (120u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (132u + sizeof(_g4_t_v23)) > _g4_s8 ? (132u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (136u + sizeof(_g4_t_s)) > _g4_s9 ? (136u + sizeof(_g4_t_s)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 31u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 88u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 120u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 132u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 136u);

  va_start(__varargs, a5);
  if ( *((uint32_t *)*a5 - 3) != 0 && sub_1937EB0(a5, 37, 0) != (char *)(intptr_t)(-1) )
  {
    v15 = *a5;
    s[0] = 0;
    vsnprintf(s, 0x100u, v15, __varargs);
    g4_std_compat::string_assign((int)(uintptr_t)(a5), s, strlen(s));
  }
  if ( a3 != nullptr )
  {
    sprintf(s, "%d", a4);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), s, (int)(uintptr_t)(v16) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), a3, (int)(uintptr_t)(v16));
    v5 = sub_1938190((int)(uintptr_t)(v17), "/\\", -1, 2u);
    if ( v5 <= 0 )
    {
      g4_std::string::construct_copy(v18, v17);
    }
    else
    {
      v6 = v5 + 1;
      if ( v6 > *(uint32_t *)(v17[0] - 12) )
        sub_1900210("basic_string::substr");
      sub_193A6F0(v18, v17, v6, -1);
    }
    v19[0] = (int)(uintptr_t)(&dword_213B814);
    sub_1939B80(v19, *(uint32_t *)(v18[0] - 12) + 2);
    g4_std::string::append((int)(uintptr_t)(v19), " (", 2u);
    g4_std::string::append_str(v19, v18);
    g4_std::string::construct_copy(v20, v19);
    g4_std::string::append((int)(uintptr_t)(v20), ":", 1u);
    g4_std::string::construct_copy(v22, v20);
    g4_std::string::append_str(v22, v21);
    g4_std::string::construct_copy(&v23, v22);
    g4_std::string::append((int)(uintptr_t)(&v23), ")", 1u);
    g4_std::string::append_str(a5, &v23);
    v7 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = (void *)(v22[0] - 12);
    if ( (uint32_t *)(v22[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    v9 = (void *)(v20[0] - 12);
    if ( (uint32_t *)(v20[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    v10 = (void *)(v19[0] - 12);
    if ( (uint32_t *)(v19[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = (void *)(v18[0] - 12);
    if ( (uint32_t *)(v18[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v17[0] - 12);
    if ( (uint32_t *)(v17[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = (void *)(v21[0] - 12);
    if ( (uint32_t *)(v21[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
  }
  return iap::IAPLog::LogToConsole(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: iap::IAPLog::Log  (binary VA: 0x15384c0)
// Original: iap::IAPLog::Log
// ----------------------------------------------------------------------------
int iap::IAPLog::Log(int a1, int a2, int a3, char *a4, int a5, const char **a6, ...)
{
  const char *v6;
  int v7;
  int result;
  void *v9;
  int v10;
  unsigned int v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  void *v18;
  void *v19;
  void *v20;
  int v21;
  char *v22;
  const char *v23;
  va_list __varargs;
  typedef int _g4_t_v24[3];
  typedef uint32_t _g4_t_v25[4];
  typedef uint32_t _g4_t_v26[4];
  typedef int _g4_t_v27[4];
  typedef uint32_t _g4_t_v28[4];
  typedef uint32_t _g4_t_v29[4];
  typedef uint32_t _g4_t_v30[4];
  typedef int _g4_t_v31[4];
  typedef int _g4_t_v32[2];
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char _g4_t_s[268];
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v26)) > _g4_s2 ? (28u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v27)) > _g4_s3 ? (44u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v28)) > _g4_s4 ? (60u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v29)) > _g4_s5 ? (76u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v30)) > _g4_s6 ? (92u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (108u + sizeof(_g4_t_v31)) > _g4_s7 ? (108u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (124u + sizeof(_g4_t_v32)) > _g4_s8 ? (124u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (132u + sizeof(_g4_t_v33)) > _g4_s9 ? (132u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (136u + sizeof(_g4_t_v34)) > _g4_s10 ? (136u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (140u + sizeof(_g4_t_s)) > _g4_s11 ? (140u + sizeof(_g4_t_s)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 108u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 124u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 132u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 136u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 140u);

  va_start(__varargs, a6);
  v6 = *a6;
  if ( (unsigned int)(a3 - 3) <= 1 )
  {
    if ( *((uint32_t *)v6 - 3) != 0 && sub_1937EB0(a6, 37, 0) != (char *)(intptr_t)(-1) )
    {
      v23 = *a6;
      s[0] = 0;
      vsnprintf(s, 0x100u, v23, __varargs);
      g4_std_compat::string_assign((int)(uintptr_t)(a6), s, strlen(s));
    }
    if ( a4 != nullptr )
    {
      sprintf(s, "%d", a5);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), s, (int)(uintptr_t)(v24) + 1);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), a4, (int)(uintptr_t)(v24));
      v10 = sub_1938190((int)(uintptr_t)(v25), "/\\", -1, 2u);
      if ( v10 <= 0 )
      {
        g4_std::string::construct_copy(v26, v25);
      }
      else
      {
        v11 = v10 + 1;
        if ( v11 > *(uint32_t *)(v25[0] - 12) )
          sub_1900210("basic_string::substr");
        sub_193A6F0(v26, v25, v11, -1);
      }
      v27[0] = (int)(uintptr_t)(&dword_213B814);
      sub_1939B80(v27, *(uint32_t *)(v26[0] - 12) + 2);
      g4_std::string::append((int)(uintptr_t)(v27), " (", 2u);
      g4_std::string::append_str(v27, v26);
      g4_std::string::construct_copy(v28, v27);
      g4_std::string::append((int)(uintptr_t)(v28), ":", 1u);
      g4_std::string::construct_copy(v30, v28);
      g4_std::string::append_str(v30, v29);
      g4_std::string::construct_copy(&v33, v30);
      g4_std::string::append((int)(uintptr_t)(&v33), ")", 1u);
      g4_std::string::append_str(a6, &v33);
      v12 = (void *)(v33 - 12);
      if ( (uint32_t *)(v33 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      v13 = (void *)(v30[0] - 12);
      if ( (uint32_t *)(v30[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v30[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v13);
      }
      v14 = (void *)(v28[0] - 12);
      if ( (uint32_t *)(v28[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14);
      }
      v15 = (void *)(v27[0] - 12);
      if ( (uint32_t *)(v27[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v15);
      }
      v16 = (void *)(v26[0] - 12);
      if ( (uint32_t *)(v26[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v26[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v16);
      }
      v17 = (void *)(v25[0] - 12);
      if ( (uint32_t *)(v25[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v17);
      }
      v18 = (void *)(v29[0] - 12);
      if ( (uint32_t *)(v29[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v29[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v18);
      }
    }
    v31[0] = (int)(uintptr_t)(&dword_213B814);
    sub_1939B80(v31, *((uint32_t *)*a6 - 3) + 11);
    g4_std::string::append((int)(uintptr_t)(v31), "\"Details\":\"", 0xBu);
    g4_std::string::append_str(v31, a6);
    g4_std::string::construct_copy(&v34, v31);
    g4_std::string::append((int)(uintptr_t)(&v34), "\"", 1u);
    g4_std::string::assign_str(a6, &v34);
    v19 = (void *)(v34 - 12);
    if ( (uint32_t *)(v34 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
    result = v31[0];
    v20 = (void *)(v31[0] - 12);
    if ( (uint32_t *)(v31[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      { g4_std::string::Rep::M_destroy(v20); return 0; }
    }
  }
  else
  {
    v7 = *((uint32_t *)v6 - 3);
    if ( v7 != 0 )
    {
      v21 = v7 - 1;
      if ( *((int *)v6 - 1) >= 0 )
      {
        sub_19397C0(a6);
        v6 = *a6;
      }
      v22 = (char *)&v6[v21];
      if ( v6[v21] == 10 )
      {
        if ( *((int *)v6 - 1) >= 0 )
        {
          sub_19397C0(a6);
          v22 = (char *)&(*a6)[v21];
        }
        *v22 = 32;
        v6 = *a6;
      }
    }
    v32[0] = (int)(uintptr_t)(&dword_213B814);
    sub_1939B80(v32, *((uint32_t *)v6 - 3) + 7);
    g4_std::string::append((int)(uintptr_t)(v32), "\"Data\":", 7u);
    g4_std::string::append_str(v32, a6);
    g4_std::string::assign_str(a6, v32);
    result = v32[0];
    v9 = (void *)(v32[0] - 12);
    if ( (uint32_t *)(v32[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v32[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v9)), (int)0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::IAPLog::GetCurrentDeviceTimeMillis  (binary VA: 0x1538b20)
// Original: iap::IAPLog::GetCurrentDeviceTimeMillis
// ----------------------------------------------------------------------------
int64_t iap::IAPLog::GetCurrentDeviceTimeMillis()
{
  typedef struct timeval _g4_t_tv;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_tv)) > _g4_s0 ? (8u + sizeof(_g4_t_tv)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 8u);

  gettimeofday(&tv, nullptr);
  return 1000 * tv.tv_sec + tv.tv_usec / 1000;
}

// ----------------------------------------------------------------------------
// Function: iap::IAPLog::appendParams  (binary VA: 0x1538b80)
// Original: iap::IAPLog::appendParams
// ----------------------------------------------------------------------------
uint32_t * iap::IAPLog::appendParams(int a1, int a2, uint32_t *a3, uint32_t *a4)
{
  uint32_t *result;

  result = a3;
  if ( *(uint32_t *)(*a3 - 12) != 0 && *(uint32_t *)(*a4 - 12) != 0 )
  {
    g4_std::string::append_str(a2, a3);
    return (uint32_t *)g4_std::string::append_str(a2, a4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::IAPLog::getNextRequestID  (binary VA: 0x1538bf0)
// Original: iap::IAPLog::getNextRequestID
// ----------------------------------------------------------------------------
int iap::IAPLog::getNextRequestID(iap::IAPLog::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: iap::IAPLog::appendLogRsponseData  (binary VA: 0x1538c00)
// Original: iap::IAPLog::appendLogRsponseData
// ----------------------------------------------------------------------------
void iap::IAPLog::appendLogRsponseData(iap::IAPLog::Self *a1, int a2, int *a3, int *a4)
{
  glwebtools::Self *v4;
  void *v5;
  void *v6;
  glwebtools::Self *v7;
  void *v8;
  void *v9;
  glwebtools::Self *v10;
  void *v11;
  void *v12;
  glwebtools::Json::Value::Self *Root;
  glwebtools::Json::Value::Self *v14;
  glwebtools::Json::Value::Self *v15;
  glwebtools::Json::Value::Self *v16;
  glwebtools::Json::Value::Self *v17;
  glwebtools::Json::Value::Self *v18;
  glwebtools::Json::Value::Self *v19;
  glwebtools::Json::Value::Self *v20;
  glwebtools::Json::Value::Self *v21;
  typedef const glwebtools::Json::Value::Self *_g4_t_v22;
  typedef const glwebtools::Json::Value::Self *_g4_t_v23;
  typedef const glwebtools::Json::Value::Self *_g4_t_v24;
  typedef int *_g4_t_v25;
  typedef char **_g4_t_v26;
  typedef char **_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_NextRequestID;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int *_g4_t_p_NextRequestID;
  typedef int _g4_t_v35;
  typedef char **_g4_t_v36;
  typedef int _g4_t_v37;
  typedef char **_g4_t_v38;
  typedef int _g4_t_v39[4];
  typedef int _g4_t_v40[4];
  typedef int _g4_t_v41[2];
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[16];
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[20];
  typedef uint8_t _g4_t_v46[32];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v26)) > _g4_s4 ? (16u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v27)) > _g4_s5 ? (16u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (31u + sizeof(_g4_t_v28)) > _g4_s6 ? (31u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v29)) > _g4_s7 ? (32u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_NextRequestID)) > _g4_s8 ? (40u + sizeof(_g4_t_NextRequestID)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v31)) > _g4_s9 ? (44u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v32)) > _g4_s10 ? (48u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v33)) > _g4_s11 ? (52u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_p_NextRequestID)) > _g4_s12 ? (56u + sizeof(_g4_t_p_NextRequestID)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v35)) > _g4_s13 ? (68u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v36)) > _g4_s14 ? (72u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v37)) > _g4_s15 ? (84u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v38)) > _g4_s16 ? (88u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v39)) > _g4_s17 ? (100u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v40)) > _g4_s18 ? (116u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (132u + sizeof(_g4_t_v41)) > _g4_s19 ? (132u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v42)) > _g4_s20 ? (140u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (156u + sizeof(_g4_t_v43)) > _g4_s21 ? (156u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (172u + sizeof(_g4_t_v44)) > _g4_s22 ? (172u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (188u + sizeof(_g4_t_v45)) > _g4_s23 ? (188u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (208u + sizeof(_g4_t_v46)) > _g4_s24 ? (208u + sizeof(_g4_t_v46)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 31u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_NextRequestID &NextRequestID = *reinterpret_cast<_g4_t_NextRequestID *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_p_NextRequestID &p_NextRequestID = *reinterpret_cast<_g4_t_p_NextRequestID *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 116u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 132u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 140u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 156u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 172u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 188u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 208u);

  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v45);
  NextRequestID = iap::IAPLog::getNextRequestID(a1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "requestID", (int)(uintptr_t)(&v28));
  p_NextRequestID = &NextRequestID;
  g4_std::string::construct_copy(v39, &v33);
  v25 = p_NextRequestID;
  v39[1] = (int)(uintptr_t)(p_NextRequestID);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v45) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v42), (char *)&loc_6 + 1);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v45);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v42);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v42);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v46);
  v4 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v46, *v25);
  if ( glwebtools::IsOperationSuccess(v4) )
  {
    v24 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v46);
    v20 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v45);
    v21 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v20, (char **)v39);
    glwebtools::Json::Value::opAssign(v21, v24);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v46);
  v5 = (void *)(v39[0] - 12);
  if ( (uint32_t *)(v39[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v31 = *a3;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "raw_response", (int)(uintptr_t)(&v29));
  v36 = (char **)&v31;
  g4_std::string::construct_copy(v40, &v35);
  v26 = v36;
  v40[1] = (int)(uintptr_t)(v36);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v45) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v43), (char *)&loc_6 + 1);
    v19 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v45);
    glwebtools::Json::Value::opAssign(v19, (const glwebtools::Json::Value::Self *)v43);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v43);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v46);
  v7 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)v46, *v26);
  if ( glwebtools::IsOperationSuccess(v7) )
  {
    v23 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v46);
    v17 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v45);
    v18 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v17, (char **)v40);
    glwebtools::Json::Value::opAssign(v18, v23);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v46);
  v8 = (void *)(v40[0] - 12);
  if ( (uint32_t *)(v40[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v35 - 12);
  if ( (uint32_t *)(v35 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v32 = *a4;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "response_type", (int)(uintptr_t)(&v29) + 1);
  v38 = (char **)&v32;
  g4_std::string::construct_copy(v41, &v37);
  v27 = v38;
  v41[1] = (int)(uintptr_t)(v38);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v45) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v44), (char *)&loc_6 + 1);
    v16 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v45);
    glwebtools::Json::Value::opAssign(v16, (const glwebtools::Json::Value::Self *)v44);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v44);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v46);
  v10 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)v46, *v27);
  if ( glwebtools::IsOperationSuccess(v10) )
  {
    v22 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v46);
    v14 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v45);
    v15 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v14, (char **)v41);
    glwebtools::Json::Value::opAssign(v15, v22);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v46);
  v11 = (void *)(v41[0] - 12);
  if ( (uint32_t *)(v41[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  v12 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)v45, a2);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v45);
}

// ----------------------------------------------------------------------------
// Function: iap::IAPLog::incrementID  (binary VA: 0x1539100)
// Original: iap::IAPLog::incrementID
// ----------------------------------------------------------------------------
iap::IAPLog::Self * iap::IAPLog::incrementID(iap::IAPLog::Self *self)
{
  ++*(uint32_t *)self;
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::IAPLog::appendLogRequestParams  (binary VA: 0x1539110)
// Original: iap::IAPLog::appendLogRequestParams
// ----------------------------------------------------------------------------
void iap::IAPLog::appendLogRequestParams(iap::IAPLog::Self *a1, int a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
  glwebtools::Self *v7;
  void *v8;
  void *v9;
  glwebtools::Json::Value::Self *Root;
  glwebtools::Self *v11;
  void *v12;
  void *v13;
  glwebtools::Self *v14;
  void *v15;
  void *v16;
  glwebtools::Self *v17;
  void *v18;
  void *v19;
  glwebtools::Self *v20;
  void *v21;
  void *v22;
  glwebtools::Self *v23;
  void *v24;
  void *v25;
  glwebtools::Json::Value::Self *v26;
  glwebtools::Json::Value::Self *v27;
  glwebtools::Json::Value::Self *v28;
  glwebtools::Json::Value::Self *v29;
  glwebtools::Json::Value::Self *v30;
  glwebtools::Json::Value::Self *v31;
  glwebtools::Json::Value::Self *v32;
  glwebtools::Json::Value::Self *v33;
  glwebtools::Json::Value::Self *v34;
  glwebtools::Json::Value::Self *v35;
  glwebtools::Json::Value::Self *v36;
  glwebtools::Json::Value::Self *v37;
  glwebtools::Json::Value::Self *v38;
  glwebtools::Json::Value::Self *v39;
  glwebtools::Json::Value::Self *v40;
  glwebtools::Json::Value::Self *v41;
  glwebtools::Json::Value::Self *v42;
  typedef const glwebtools::Json::Value::Self *_g4_t_v43;
  typedef const glwebtools::Json::Value::Self *_g4_t_v44;
  typedef const glwebtools::Json::Value::Self *_g4_t_v45;
  typedef const glwebtools::Json::Value::Self *_g4_t_v46;
  typedef const glwebtools::Json::Value::Self *_g4_t_v47;
  typedef const glwebtools::Json::Value::Self *_g4_t_v48;
  typedef int *_g4_t_v49;
  typedef char **_g4_t_v50;
  typedef char **_g4_t_v51;
  typedef char **_g4_t_v52;
  typedef char **_g4_t_v53;
  typedef char **_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_NextRequestID;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int *_g4_t_p_NextRequestID;
  typedef int _g4_t_v65;
  typedef char **_g4_t_v66;
  typedef int _g4_t_v67;
  typedef char **_g4_t_v68;
  typedef int _g4_t_v69;
  typedef char **_g4_t_v70;
  typedef int _g4_t_v71;
  typedef char **_g4_t_v72;
  typedef int _g4_t_v73;
  typedef char **_g4_t_v74;
  typedef int _g4_t_v75[4];
  typedef int _g4_t_v76[4];
  typedef int _g4_t_v77[4];
  typedef int _g4_t_v78[4];
  typedef int _g4_t_v79[4];
  typedef int _g4_t_v80[2];
  typedef uint8_t _g4_t_v81[16];
  typedef uint8_t _g4_t_v82[16];
  typedef uint8_t _g4_t_v83[16];
  typedef uint8_t _g4_t_v84[16];
  typedef uint8_t _g4_t_v85[16];
  typedef uint8_t _g4_t_v86[16];
  typedef uint8_t _g4_t_v87[20];
  typedef uint8_t _g4_t_v88[32];
  enum : size_t {
    _g4_s0 = 464u,
    _g4_s1 = (0u + sizeof(_g4_t_v43)) > _g4_s0 ? (0u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v44)) > _g4_s1 ? (0u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v45)) > _g4_s2 ? (0u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v46)) > _g4_s3 ? (0u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v47)) > _g4_s4 ? (0u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v48)) > _g4_s5 ? (0u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v49)) > _g4_s6 ? (4u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v50)) > _g4_s7 ? (4u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v51)) > _g4_s8 ? (4u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v52)) > _g4_s9 ? (4u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (4u + sizeof(_g4_t_v53)) > _g4_s10 ? (4u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (4u + sizeof(_g4_t_v54)) > _g4_s11 ? (4u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (14u + sizeof(_g4_t_v55)) > _g4_s12 ? (14u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v56)) > _g4_s13 ? (16u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_NextRequestID)) > _g4_s14 ? (32u + sizeof(_g4_t_NextRequestID)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v58)) > _g4_s15 ? (36u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v59)) > _g4_s16 ? (40u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v60)) > _g4_s17 ? (44u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v61)) > _g4_s18 ? (48u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v62)) > _g4_s19 ? (52u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v63)) > _g4_s20 ? (56u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_p_NextRequestID)) > _g4_s21 ? (60u + sizeof(_g4_t_p_NextRequestID)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v65)) > _g4_s22 ? (72u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v66)) > _g4_s23 ? (76u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v67)) > _g4_s24 ? (88u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v68)) > _g4_s25 ? (92u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v69)) > _g4_s26 ? (104u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v70)) > _g4_s27 ? (108u + sizeof(_g4_t_v70)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v71)) > _g4_s28 ? (120u + sizeof(_g4_t_v71)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v72)) > _g4_s29 ? (124u + sizeof(_g4_t_v72)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v73)) > _g4_s30 ? (136u + sizeof(_g4_t_v73)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v74)) > _g4_s31 ? (140u + sizeof(_g4_t_v74)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v75)) > _g4_s32 ? (152u + sizeof(_g4_t_v75)) : _g4_s32,
    _g4_s34 = (168u + sizeof(_g4_t_v76)) > _g4_s33 ? (168u + sizeof(_g4_t_v76)) : _g4_s33,
    _g4_s35 = (184u + sizeof(_g4_t_v77)) > _g4_s34 ? (184u + sizeof(_g4_t_v77)) : _g4_s34,
    _g4_s36 = (200u + sizeof(_g4_t_v78)) > _g4_s35 ? (200u + sizeof(_g4_t_v78)) : _g4_s35,
    _g4_s37 = (216u + sizeof(_g4_t_v79)) > _g4_s36 ? (216u + sizeof(_g4_t_v79)) : _g4_s36,
    _g4_s38 = (232u + sizeof(_g4_t_v80)) > _g4_s37 ? (232u + sizeof(_g4_t_v80)) : _g4_s37,
    _g4_s39 = (240u + sizeof(_g4_t_v81)) > _g4_s38 ? (240u + sizeof(_g4_t_v81)) : _g4_s38,
    _g4_s40 = (256u + sizeof(_g4_t_v82)) > _g4_s39 ? (256u + sizeof(_g4_t_v82)) : _g4_s39,
    _g4_s41 = (272u + sizeof(_g4_t_v83)) > _g4_s40 ? (272u + sizeof(_g4_t_v83)) : _g4_s40,
    _g4_s42 = (288u + sizeof(_g4_t_v84)) > _g4_s41 ? (288u + sizeof(_g4_t_v84)) : _g4_s41,
    _g4_s43 = (304u + sizeof(_g4_t_v85)) > _g4_s42 ? (304u + sizeof(_g4_t_v85)) : _g4_s42,
    _g4_s44 = (320u + sizeof(_g4_t_v86)) > _g4_s43 ? (320u + sizeof(_g4_t_v86)) : _g4_s43,
    _g4_s45 = (336u + sizeof(_g4_t_v87)) > _g4_s44 ? (336u + sizeof(_g4_t_v87)) : _g4_s44,
    _g4_s46 = (356u + sizeof(_g4_t_v88)) > _g4_s45 ? (356u + sizeof(_g4_t_v88)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 0u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 4u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 14u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_NextRequestID &NextRequestID = *reinterpret_cast<_g4_t_NextRequestID *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 52u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_p_NextRequestID &p_NextRequestID = *reinterpret_cast<_g4_t_p_NextRequestID *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 72u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 76u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 88u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 92u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 104u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 108u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 120u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 124u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 136u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 140u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 152u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 168u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 184u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 200u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 216u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 232u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 240u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 256u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 272u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 288u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 304u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 320u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 336u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 356u);

  iap::IAPLog::incrementID(a1);
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v87);
  NextRequestID = iap::IAPLog::getNextRequestID(a1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "requestID", (int)(uintptr_t)(&v55));
  p_NextRequestID = &NextRequestID;
  g4_std::string::construct_copy(v75, &v63);
  v49 = p_NextRequestID;
  v75[1] = (int)(uintptr_t)(p_NextRequestID);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v87) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v81), (char *)&loc_6 + 1);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v87);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v81);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v81);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v88);
  v7 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v88, *v49);
  if ( glwebtools::IsOperationSuccess(v7) )
  {
    v43 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v88);
    v26 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v87);
    v27 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v26, (char **)v75);
    glwebtools::Json::Value::opAssign(v27, v43);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v88);
  v8 = (void *)(v75[0] - 12);
  if ( (uint32_t *)(v75[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v75[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v63 - 12);
  if ( (uint32_t *)(v63 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v63 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  if ( *(uint32_t *)(*a3 - 12) != 0 )
  {
    v58 = *a3;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), "url", (int)(uintptr_t)(&v55) + 1);
    v66 = (char **)&v58;
    g4_std::string::construct_copy(v76, &v65);
    v54 = v66;
    v76[1] = (int)(uintptr_t)(v66);
    if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v87) == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v82), (char *)&loc_6 + 1);
      v42 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v87);
      glwebtools::Json::Value::opAssign(v42, (const glwebtools::Json::Value::Self *)v82);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v82);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v88);
    v23 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)v88, *v54);
    if ( glwebtools::IsOperationSuccess(v23) )
    {
      v48 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v88);
      v40 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v87);
      v41 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v40, (char **)v76);
      glwebtools::Json::Value::opAssign(v41, v48);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v88);
    v24 = (void *)(v76[0] - 12);
    if ( (uint32_t *)(v76[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v76[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v24);
    }
    v25 = (void *)(v65 - 12);
    if ( (uint32_t *)(v65 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v65 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v25);
    }
  }
  if ( *(uint32_t *)(*a4 - 12) != 0 )
  {
    v59 = *a4;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v67), "payload", (int)(uintptr_t)(&v56));
    v68 = (char **)&v59;
    g4_std::string::construct_copy(v77, &v67);
    v53 = v68;
    v77[1] = (int)(uintptr_t)(v68);
    if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v87) == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v83), (char *)&loc_6 + 1);
      v30 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v87);
      glwebtools::Json::Value::opAssign(v30, (const glwebtools::Json::Value::Self *)v83);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v83);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v88);
    v20 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)v88, *v53);
    if ( glwebtools::IsOperationSuccess(v20) )
    {
      v44 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v88);
      v28 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v87);
      v29 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v28, (char **)v77);
      glwebtools::Json::Value::opAssign(v29, v44);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v88);
    v21 = (void *)(v77[0] - 12);
    if ( (uint32_t *)(v77[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v77[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
    v22 = (void *)(v67 - 12);
    if ( (uint32_t *)(v67 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v22);
    }
  }
  if ( *(uint32_t *)(*a5 - 12) != 0 )
  {
    v60 = *a5;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v69), "methodType", (int)(uintptr_t)(&v56) + 1);
    v70 = (char **)&v60;
    g4_std::string::construct_copy(v78, &v69);
    v52 = v70;
    v78[1] = (int)(uintptr_t)(v70);
    if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v87) == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v84), (char *)&loc_6 + 1);
      v39 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v87);
      glwebtools::Json::Value::opAssign(v39, (const glwebtools::Json::Value::Self *)v84);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v84);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v88);
    v17 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)v88, *v52);
    if ( glwebtools::IsOperationSuccess(v17) )
    {
      v47 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v88);
      v37 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v87);
      v38 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v37, (char **)v78);
      glwebtools::Json::Value::opAssign(v38, v47);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v88);
    v18 = (void *)(v78[0] - 12);
    if ( (uint32_t *)(v78[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v78[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    v19 = (void *)(v69 - 12);
    if ( (uint32_t *)(v69 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
  }
  if ( *(uint32_t *)(*a6 - 12) != 0 )
  {
    v61 = *a6;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v71), "headers", (int)(uintptr_t)(&v56) + 2);
    v72 = (char **)&v61;
    g4_std::string::construct_copy(v79, &v71);
    v51 = v72;
    v79[1] = (int)(uintptr_t)(v72);
    if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v87) == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v85), (char *)&loc_6 + 1);
      v33 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v87);
      glwebtools::Json::Value::opAssign(v33, (const glwebtools::Json::Value::Self *)v85);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v85);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v88);
    v14 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)v88, *v51);
    if ( glwebtools::IsOperationSuccess(v14) )
    {
      v45 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v88);
      v31 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v87);
      v32 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v31, (char **)v79);
      glwebtools::Json::Value::opAssign(v32, v45);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v88);
    v15 = (void *)(v79[0] - 12);
    if ( (uint32_t *)(v79[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v79[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = (void *)(v71 - 12);
    if ( (uint32_t *)(v71 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v71 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
  }
  if ( *(uint32_t *)(*a7 - 12) != 0 )
  {
    v62 = *a7;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v73), "requestType", (int)(uintptr_t)(&v56) + 3);
    v74 = (char **)&v62;
    g4_std::string::construct_copy(v80, &v73);
    v50 = v74;
    v80[1] = (int)(uintptr_t)(v74);
    if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v87) == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v86), (char *)&loc_6 + 1);
      v36 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v87);
      glwebtools::Json::Value::opAssign(v36, (const glwebtools::Json::Value::Self *)v86);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v86);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v88);
    v11 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)v88, *v50);
    if ( glwebtools::IsOperationSuccess(v11) )
    {
      v46 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v88);
      v34 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v87);
      v35 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v34, (char **)v80);
      glwebtools::Json::Value::opAssign(v35, v46);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v88);
    v12 = (void *)(v80[0] - 12);
    if ( (uint32_t *)(v80[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v80[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = (void *)(v73 - 12);
    if ( (uint32_t *)(v73 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v73 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
  }
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)v87, a2);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v87);
}


