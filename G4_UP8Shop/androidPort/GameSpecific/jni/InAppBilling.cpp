#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: InAppBilling.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (73 funcs)
// ============================================================================
#include "InAppBilling.h"
#include "../../../sources/Core/Memory/GameAllocator.h"

// ----------------------------------------------------------------------------
// Function: InAppBilling::getState  (binary VA: 0x4d14b0)
// Original: InAppBilling::getState
// ----------------------------------------------------------------------------
int InAppBilling::getState()
{
  int v0;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) != -2 )
    return sub_4C17B0(v2, InAppBilling::cIABilling, InAppBilling::mGetState);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  v0 = sub_4C17B0(v2, InAppBilling::cIABilling, InAppBilling::mGetState);
  G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_GetState  (binary VA: 0x4d1580)
// Original: InAppBilling_GetState
// ----------------------------------------------------------------------------
int InAppBilling_GetState()
{
  return InAppBilling::getState();
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::getData  (binary VA: 0x4d17e0)
// Original: InAppBilling::getData
// ----------------------------------------------------------------------------
int InAppBilling::getData(int a1)
{
  int v1;
  int v3[4];

  v3[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v3, 65542) != -2 )
    return JNIEnv::CallStaticObjectMethod(v3[0], InAppBilling::cIABilling, InAppBilling::mGetData, a1);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v3, 0);
  v1 = JNIEnv::CallStaticObjectMethod(v3[0], InAppBilling::cIABilling, InAppBilling::mGetData, a1);
  G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::readChar  (binary VA: 0x4d18d0)
// Original: InAppBilling::readChar
// ----------------------------------------------------------------------------
InAppBilling::Self * InAppBilling::readChar(InAppBilling::Self *self, size_t n, int a3)
{
  int v3;
  int v4;

  memset(self, 0, n);
  v3 = 0;
  while ( 1 )
  {
    v4 = (dword_1BEFEA0 != 0) ? ((const uint32_t *)&dword_1BEFEA0)[512 * a3 + v3] : 12022;
    if ( v4 == 12022 )
      break;
    *((uint8_t *)self + v3++) = ((const uint8_t *)&byte_1C786A0)[v4];
    if ( v3 == 512 )
      return self;
  }
  *((uint8_t *)self + v3) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::newBundle  (binary VA: 0x4d1940)
// Original: InAppBilling::newBundle
// ----------------------------------------------------------------------------
int InAppBilling::newBundle(InAppBilling::Self *self)
{
  return JNIEnv::NewObject((int)(uintptr_t)self, InAppBilling::cBundle, InAppBilling::mBundleInit);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::bundleClear  (binary VA: 0x4d1980)
// Original: InAppBilling::bundleClear
// ----------------------------------------------------------------------------
int InAppBilling::bundleClear(int a1)
{
  int v2[4];

  v2[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v2, 65542) != -2 )
    return JNIEnv::CallVoidMethod(v2[0], a1, InAppBilling::mBundleClear);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v2, 0);
  JNIEnv::CallVoidMethod(v2[0], a1, InAppBilling::mBundleClear);
  return G4_VCALL<int>(AndroidOS_JavaVM, 20);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::charToString  (binary VA: 0x4d1a50)
// Original: InAppBilling::charToString
// ----------------------------------------------------------------------------
int InAppBilling::charToString(InAppBilling::Self *self)
{
  int v1;
  uint32_t v3[4];

  v3[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v3, 65542) != -2 )
    return G4_VCALL<int>(v3[0], 668, self);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v3, 0);
  v1 = G4_VCALL<int>(v3[0], 668, self);
  G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::bundleContainsKey  (binary VA: 0x4d1b10)
// Original: InAppBilling::bundleContainsKey
// ----------------------------------------------------------------------------
int InAppBilling::bundleContainsKey(InAppBilling::Self *a1, int a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v5;
  typedef char _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  *(uint32_t *)v6 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
    v5 = InAppBilling::charToString(a1);
    v3 = JNIEnv::CallBooleanMethod(*(int *)v6, a2, InAppBilling::mBundleContains, v5);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v5);
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v2 = InAppBilling::charToString(a1);
    v3 = JNIEnv::CallBooleanMethod(*(int *)v6, a2, InAppBilling::mBundleContains, v2);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v2);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::bundlePutLong  (binary VA: 0x4d1c30)
// Original: InAppBilling::bundlePutLong
// ----------------------------------------------------------------------------
int InAppBilling::bundlePutLong(InAppBilling::Self *a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  char v7[4];

  *(uint32_t *)v7 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v7, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v7, 0);
    v6 = InAppBilling::charToString(a1);
    JNIEnv::CallVoidMethod(*(int *)v7, a4, InAppBilling::mBundlePutLong, v6, a2, a3);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v7 + 92))(*(uint32_t *)v7, v6);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v4 = InAppBilling::charToString(a1);
    JNIEnv::CallVoidMethod(*(int *)v7, a4, InAppBilling::mBundlePutLong, v4, a2, a3);
    return (*(int (**)(uint32_t, int))(**(uint32_t **)v7 + 92))(*(uint32_t *)v7, v4);
  }
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::bundleReadLong  (binary VA: 0x4d1d70)
// Original: InAppBilling::bundleReadLong
// ----------------------------------------------------------------------------
int InAppBilling::bundleReadLong(InAppBilling::Self *a1, char *a2)
{
  int v2;
  typedef int _g4_t_v4;
  typedef char _g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v5)) > _g4_s1 ? (15u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 15u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  v6[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  v2 = -1;
  if ( (uint8_t)InAppBilling::bundleContainsKey(a1, (int)(uintptr_t)a2) != 0 )
  {
    v4 = InAppBilling::charToString(a1);
    v2 = JNIEnv::CallLongMethod(v6[0], (int)(uintptr_t)a2, InAppBilling::mBundleGetLong, v4);
    G4_VCALL<void>(v6[0], 92, v4);
  }
  if ( v5 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::bundlePutInt  (binary VA: 0x4d1e90)
// Original: InAppBilling::bundlePutInt
// ----------------------------------------------------------------------------
int InAppBilling::bundlePutInt(InAppBilling::Self *a1, int a2, int a3)
{
  int v3;
  int v5;
  char v6[4];

  *(uint32_t *)v6 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
    v5 = InAppBilling::charToString(a1);
    JNIEnv::CallVoidMethod(*(int *)v6, a3, InAppBilling::mBundlePutInt, v5, a2);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v5);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v3 = InAppBilling::charToString(a1);
    JNIEnv::CallVoidMethod(*(int *)v6, a3, InAppBilling::mBundlePutInt, v3, a2);
    return (*(int (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v3);
  }
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::restoreTransactions  (binary VA: 0x4d1fb0)
// Original: InAppBilling::restoreTransactions
// ----------------------------------------------------------------------------
int InAppBilling::restoreTransactions()
{
  int v0;
  int Data;
  int result;
  typedef char _g4_t_v3;
  typedef InAppBilling::Self *_g4_t_v4;
  typedef uint8_t _g4_t_v5[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (15u + sizeof(_g4_t_v3)) > _g4_s0 ? (15u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v4)) > _g4_s1 ? (28u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v5)) > _g4_s2 ? (32u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 15u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 28u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 32u);

  v4 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v4, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v4, 0);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  v0 = InAppBilling::newBundle(v4);
  InAppBilling::bundleClear(v0);
  InAppBilling::readChar((InAppBilling::Self *)v5, 0x20u, 30);
  InAppBilling::bundlePutInt((InAppBilling::Self *)v5, 17, v0);
  Data = InAppBilling::getData(v0);
  G4_VCALL<void>(v4, 92, Data);
  result = G4_VCALL<int>(v4, 92, v0);
  if ( v3 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_RestoreTransactions  (binary VA: 0x4d20d0)
// Original: InAppBilling_RestoreTransactions
// ----------------------------------------------------------------------------
int InAppBilling_RestoreTransactions()
{
  return InAppBilling::restoreTransactions();
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::bundleReadInt  (binary VA: 0x4d20f0)
// Original: InAppBilling::bundleReadInt
// ----------------------------------------------------------------------------
int InAppBilling::bundleReadInt(InAppBilling::Self *a1, char *a2)
{
  int v2;
  int v3;
  typedef char _g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v5)) > _g4_s0 ? (15u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 15u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  v6[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  v2 = -1;
  if ( (uint8_t)InAppBilling::bundleContainsKey(a1, (int)(uintptr_t)a2) != 0 )
  {
    v3 = InAppBilling::charToString(a1);
    v2 = JNIEnv::CallIntMethod(v6[0], (int)(uintptr_t)a2, InAppBilling::mBundleGetInt, v3);
    G4_VCALL<void>(v6[0], 92, v3);
  }
  if ( v5 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::bundlePutBArray  (binary VA: 0x4d2200)
// Original: InAppBilling::bundlePutBArray
// ----------------------------------------------------------------------------
int InAppBilling::bundlePutBArray(InAppBilling::Self *a1, int a2, int a3)
{
  int v3;
  int v5;
  char v6[4];

  *(uint32_t *)v6 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
    v5 = InAppBilling::charToString(a1);
    JNIEnv::CallVoidMethod(*(int *)v6, a3, InAppBilling::mBundlePutBArrays, v5, a2);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v5);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v3 = InAppBilling::charToString(a1);
    JNIEnv::CallVoidMethod(*(int *)v6, a3, InAppBilling::mBundlePutBArrays, v3, a2);
    return (*(int (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v3);
  }
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::bundleReadBArray  (binary VA: 0x4d2320)
// Original: InAppBilling::bundleReadBArray
// ----------------------------------------------------------------------------
int InAppBilling::bundleReadBArray(InAppBilling::Self *a1, int a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v5;
  typedef char _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  *(uint32_t *)v6 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
    v5 = InAppBilling::charToString(a1);
    v3 = JNIEnv::CallObjectMethod(*(int *)v6, a2, InAppBilling::mBundleGetBArrays, v5);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v5);
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v2 = InAppBilling::charToString(a1);
    v3 = JNIEnv::CallObjectMethod(*(int *)v6, a2, InAppBilling::mBundleGetBArrays, v2);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v2);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::getLastResults  (binary VA: 0x4d2440)
// Original: InAppBilling::getLastResults
// ----------------------------------------------------------------------------
int InAppBilling::getLastResults(InAppBilling::Self *self)
{
  char *v1;
  int BArray;
  int Int;
  typedef int _g4_t_v5;
  typedef int _g4_t_Data;
  typedef char _g4_t_v7;
  typedef InAppBilling::Self *_g4_t_v8;
  typedef uint8_t _g4_t_v9[60];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_Data)) > _g4_s1 ? (8u + sizeof(_g4_t_Data)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v7)) > _g4_s2 ? (15u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v9)) > _g4_s4 ? (32u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_Data &Data = *reinterpret_cast<_g4_t_Data *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 15u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  v8 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v8, 0);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  v1 = (char *)InAppBilling::newBundle(v8);
  InAppBilling::bundleClear((int)(uintptr_t)v1);
  InAppBilling::readChar((InAppBilling::Self *)v9, 0x20u, 30);
  InAppBilling::bundlePutInt((InAppBilling::Self *)v9, 4, (int)(uintptr_t)v1);
  Data = InAppBilling::getData((int)(uintptr_t)v1);
  InAppBilling::readChar((InAppBilling::Self *)v9, 0x20u, 31);
  BArray = InAppBilling::bundleReadBArray((InAppBilling::Self *)v9, Data);
  if ( BArray != 0 )
  {
    v5 = G4_VCALL<int>(v8, 684, BArray);
    memset(self, 0, v5 + 1);
    G4_VCALL<void>(v8, 800, BArray, 0, v5, self);
    G4_VCALL<void>(v8, 92, BArray);
  }
  G4_VCALL<void>(v8, 92, Data);
  InAppBilling::readChar((InAppBilling::Self *)v9, 0x20u, 33);
  Int = InAppBilling::bundleReadInt((InAppBilling::Self *)v9, v1);
  G4_VCALL<void>(v8, 92, v1);
  if ( v7 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return Int;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_GetLastResults  (binary VA: 0x4d2620)
// Original: InAppBilling_GetLastResults
// ----------------------------------------------------------------------------
int InAppBilling_GetLastResults(InAppBilling::Self *a1)
{
  return InAppBilling::getLastResults(a1);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::getHeaders  (binary VA: 0x4d2650)
// Original: InAppBilling::getHeaders
// ----------------------------------------------------------------------------
InAppBilling::Self * InAppBilling::getHeaders(InAppBilling::Self *self)
{
  int v1;
  int BArray;
  int v3;
  void *v4;
  InAppBilling::Self **v5;
  int v6;
  unsigned int v7;
  InAppBilling::Self **retaddr;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_Data;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef InAppBilling::Self *_g4_t_v24;
  typedef uint8_t _g4_t_v25[48];
  typedef InAppBilling::Self **_g4_t_v26;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v14)) > _g4_s5 ? (28u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v15)) > _g4_s6 ? (32u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v16)) > _g4_s7 ? (32u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v17)) > _g4_s8 ? (36u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (39u + sizeof(_g4_t_v18)) > _g4_s9 ? (39u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v19)) > _g4_s10 ? (40u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_Data)) > _g4_s11 ? (40u + sizeof(_g4_t_Data)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v21)) > _g4_s12 ? (44u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v22)) > _g4_s13 ? (48u + sizeof(_g4_t_v22)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v23)) > _g4_s14 ? (52u + sizeof(_g4_t_v23)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v24)) > _g4_s15 ? (56u + sizeof(_g4_t_v24)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v25)) > _g4_s16 ? (60u + sizeof(_g4_t_v25)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v26)) > _g4_s17 ? (108u + sizeof(_g4_t_v26)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 39u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_Data &Data = *reinterpret_cast<_g4_t_Data *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 108u);

  v24 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v24, 65542, v9, v10, v11, v12, v13, v14, v15, v17, v19, v21, v22, v23) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v24, 0);
    v18 = 1;
  }
  else
  {
    v18 = 0;
  }
  v1 = InAppBilling::newBundle(v24);
  InAppBilling::bundleClear(v1);
  InAppBilling::readChar((InAppBilling::Self *)v25, 0x20u, 30);
  InAppBilling::bundlePutInt((InAppBilling::Self *)v25, 18, v1);
  Data = InAppBilling::getData(v1);
  InAppBilling::readChar((InAppBilling::Self *)v25, 0x20u, 31);
  BArray = InAppBilling::bundleReadBArray((InAppBilling::Self *)v25, Data);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, (char *)&unk_1B15112, (int)(uintptr_t)&v23 + 3);
  G4_VCALL<void>(v24, 92, Data);
  G4_VCALL<void>(v24, 92, v1);
  if ( BArray != 0 )
  {
    v3 = G4_VCALL<int>(v24, 684, BArray);
    v4 = alloca(v3 + 16);
    v16 = v3;
    memset(&self, 0, v3 + 1);
    retaddr = &self;
    G4_VCALL<void>(v24, 800, BArray, 0, v16);
    G4_VCALL<void>(v24, 92, BArray);
    v5 = &self;
    do
    {
      v6 = (int)(uintptr_t)*v5++;
      v7 = ~v6 & (v6 - 16843009) & 0x80808080;
    }
    while ( v7 == 0 );
    v26 = &self;
    if ( (~v6 & (v6 - 16843009) & 0x8080) == 0 )
    {
      v7 >>= 16;
      v5 = (InAppBilling::Self **)((char *)v5 + 2);
    }
    g4_std::string::assign((int)(uintptr_t)self, v26, (char *)v5 - __CFADD__((uint8_t)v7, (uint8_t)v7) - 3 - (char *)&self);
  }
  if ( v18 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_GetHeaders  (binary VA: 0x4d2860)
// Original: InAppBilling_GetHeaders
// ----------------------------------------------------------------------------
InAppBilling::Self * InAppBilling_GetHeaders(InAppBilling::Self *a1)
{
  InAppBilling::getHeaders(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::bundlePutString  (binary VA: 0x4d28a0)
// Original: InAppBilling::bundlePutString
// ----------------------------------------------------------------------------
int InAppBilling::bundlePutString(InAppBilling::Self *a1, InAppBilling::Self *a2, int a3)
{
  int v3;
  int v4;
  int v6;
  int v7;
  char v8[4];

  *(uint32_t *)v8 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = InAppBilling::charToString(a1);
    v7 = InAppBilling::charToString(a2);
    JNIEnv::CallVoidMethod(*(int *)v8, a3, InAppBilling::mBundlePutString, v6, v7);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v8 + 92))(*(uint32_t *)v8, v6);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v8 + 92))(*(uint32_t *)v8, v7);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v3 = InAppBilling::charToString(a1);
    v4 = InAppBilling::charToString(a2);
    JNIEnv::CallVoidMethod(*(int *)v8, a3, InAppBilling::mBundlePutString, v3, v4);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v8 + 92))(*(uint32_t *)v8, v3);
    return (*(int (**)(uint32_t, int))(**(uint32_t **)v8 + 92))(*(uint32_t *)v8, v4);
  }
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::buyItem  (binary VA: 0x4d29f0)
// Original: InAppBilling::buyItem
// ----------------------------------------------------------------------------
int InAppBilling::buyItem(InAppBilling::Self *self)
{
  int v1;
  int Data;
  int result;
  typedef char _g4_t_v4;
  typedef InAppBilling::Self *_g4_t_v5;
  typedef uint8_t _g4_t_v6[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (15u + sizeof(_g4_t_v4)) > _g4_s0 ? (15u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v5)) > _g4_s1 ? (28u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v6)) > _g4_s2 ? (32u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 15u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);

  v5 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v5, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v5, 0);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  v1 = InAppBilling::newBundle(v5);
  InAppBilling::bundleClear(v1);
  InAppBilling::readChar((InAppBilling::Self *)v6, 0x20u, 30);
  InAppBilling::bundlePutInt((InAppBilling::Self *)v6, 2, v1);
  InAppBilling::readChar((InAppBilling::Self *)v6, 0x20u, 35);
  InAppBilling::bundlePutString((InAppBilling::Self *)v6, self, v1);
  Data = InAppBilling::getData(v1);
  G4_VCALL<void>(v5, 92, Data);
  result = G4_VCALL<int>(v5, 92, v1);
  if ( v4 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_BuyItem  (binary VA: 0x4d2b30)
// Original: InAppBilling_BuyItem
// ----------------------------------------------------------------------------
int InAppBilling_BuyItem(InAppBilling::Self *a1)
{
  return InAppBilling::buyItem(a1);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::showDialog  (binary VA: 0x4d2b60)
// Original: InAppBilling::showDialog
// ----------------------------------------------------------------------------
int InAppBilling::showDialog()
{
  int v0;
  int Data;
  int result;
  typedef char _g4_t_v3;
  typedef InAppBilling::Self *_g4_t_v4;
  typedef char _g4_t_v5[24];
  typedef uint8_t _g4_t_v6[60];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (15u + sizeof(_g4_t_v3)) > _g4_s0 ? (15u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v4)) > _g4_s1 ? (20u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v5)) > _g4_s2 ? (24u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v6)) > _g4_s3 ? (48u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 15u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 20u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 48u);

  v4 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v4, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v4, 0);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  v0 = InAppBilling::newBundle(v4);
  InAppBilling::bundleClear(v0);
  InAppBilling::readChar((InAppBilling::Self *)v6, 0x20u, 30);
  InAppBilling::bundlePutInt((InAppBilling::Self *)v6, 3, v0);
  InAppBilling::readChar((InAppBilling::Self *)v6, 0x20u, 39);
  strcpy(v5, "A");
  InAppBilling::bundlePutString((InAppBilling::Self *)v6, (InAppBilling::Self *)v5, v0);
  InAppBilling::readChar((InAppBilling::Self *)v6, 0x20u, 42);
  InAppBilling::bundlePutString((InAppBilling::Self *)v6, (InAppBilling::Self *)v5, v0);
  InAppBilling::readChar((InAppBilling::Self *)v6, 0x20u, 35);
  InAppBilling::bundlePutString((InAppBilling::Self *)v6, (InAppBilling::Self *)v5, v0);
  Data = InAppBilling::getData(v0);
  G4_VCALL<void>(v4, 92, Data);
  result = G4_VCALL<int>(v4, 92, v0);
  if ( v3 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_ShowPendingDialog  (binary VA: 0x4d2cf0)
// Original: InAppBilling_ShowPendingDialog
// ----------------------------------------------------------------------------
int InAppBilling_ShowPendingDialog()
{
  return InAppBilling::showDialog();
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::sendNotifyConfirmation  (binary VA: 0x4d2d10)
// Original: InAppBilling::sendNotifyConfirmation
// ----------------------------------------------------------------------------
int InAppBilling::sendNotifyConfirmation(InAppBilling::Self *self)
{
  int v1;
  int Data;
  int result;
  typedef char _g4_t_v4;
  typedef InAppBilling::Self *_g4_t_v5;
  typedef uint8_t _g4_t_v6[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (15u + sizeof(_g4_t_v4)) > _g4_s0 ? (15u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v5)) > _g4_s1 ? (28u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v6)) > _g4_s2 ? (32u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 15u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);

  v5 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v5, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v5, 0);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  v1 = InAppBilling::newBundle(v5);
  InAppBilling::bundleClear(v1);
  InAppBilling::readChar((InAppBilling::Self *)v6, 0x20u, 30);
  InAppBilling::bundlePutInt((InAppBilling::Self *)v6, 10, v1);
  InAppBilling::readChar((InAppBilling::Self *)v6, 0x20u, 40);
  InAppBilling::bundlePutString((InAppBilling::Self *)v6, self, v1);
  Data = InAppBilling::getData(v1);
  G4_VCALL<void>(v5, 92, Data);
  result = G4_VCALL<int>(v5, 92, v1);
  if ( v4 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_SendNotifyConfirmation  (binary VA: 0x4d2e50)
// Original: InAppBilling_SendNotifyConfirmation
// ----------------------------------------------------------------------------
int InAppBilling_SendNotifyConfirmation(InAppBilling::Self *a1)
{
  return InAppBilling::sendNotifyConfirmation(a1);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::getItemList  (binary VA: 0x4d2e80)
// Original: InAppBilling::getItemList
// ----------------------------------------------------------------------------
int InAppBilling::getItemList(InAppBilling::Self *self)
{
  int v1;
  int Data;
  int result;
  typedef char _g4_t_v4;
  typedef InAppBilling::Self *_g4_t_v5;
  typedef uint8_t _g4_t_v6[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (15u + sizeof(_g4_t_v4)) > _g4_s0 ? (15u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v5)) > _g4_s1 ? (28u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v6)) > _g4_s2 ? (32u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 15u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);

  v5 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v5, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v5, 0);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  v1 = InAppBilling::newBundle(v5);
  InAppBilling::bundleClear(v1);
  InAppBilling::readChar((InAppBilling::Self *)v6, 0x20u, 30);
  InAppBilling::bundlePutInt((InAppBilling::Self *)v6, 1, v1);
  InAppBilling::readChar((InAppBilling::Self *)v6, 0x20u, 38);
  InAppBilling::bundlePutString((InAppBilling::Self *)v6, self, v1);
  Data = InAppBilling::getData(v1);
  G4_VCALL<void>(v5, 92, Data);
  result = G4_VCALL<int>(v5, 92, v1);
  if ( v4 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_GetItemList  (binary VA: 0x4d2fc0)
// Original: InAppBilling_GetItemList
// ----------------------------------------------------------------------------
int InAppBilling_GetItemList(InAppBilling::Self *a1)
{
  return InAppBilling::getItemList(a1);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::getBillingAttByID  (binary VA: 0x4d2ff0)
// Original: InAppBilling::getBillingAttByID
// ----------------------------------------------------------------------------
InAppBilling::Self * InAppBilling::getBillingAttByID(InAppBilling::Self *self, InAppBilling::Self *a2, InAppBilling::Self *a3)
{
  int v3;
  int BArray;
  int v5;
  void *v6;
  InAppBilling::Self **v7;
  int v8;
  unsigned int v9;
  InAppBilling::Self **retaddr;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_Data;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef InAppBilling::Self *_g4_t_v26;
  typedef uint8_t _g4_t_v27[48];
  typedef InAppBilling::Self **_g4_t_v28;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v18)) > _g4_s7 ? (32u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v19)) > _g4_s8 ? (36u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (39u + sizeof(_g4_t_v20)) > _g4_s9 ? (39u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v21)) > _g4_s10 ? (40u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_Data)) > _g4_s11 ? (40u + sizeof(_g4_t_Data)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v23)) > _g4_s12 ? (44u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v24)) > _g4_s13 ? (48u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v25)) > _g4_s14 ? (52u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v26)) > _g4_s15 ? (56u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v27)) > _g4_s16 ? (60u + sizeof(_g4_t_v27)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v28)) > _g4_s17 ? (108u + sizeof(_g4_t_v28)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 39u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_Data &Data = *reinterpret_cast<_g4_t_Data *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 108u);

  v26 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v26, 65542, v11, v12, v13, v14, v15, v16, v17, v19, v21, v23, v24, v25) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v26, 0);
    v20 = 1;
  }
  else
  {
    v20 = 0;
  }
  v3 = InAppBilling::newBundle(v26);
  InAppBilling::bundleClear(v3);
  InAppBilling::readChar((InAppBilling::Self *)v27, 0x20u, 30);
  InAppBilling::bundlePutInt((InAppBilling::Self *)v27, 16, v3);
  InAppBilling::readChar((InAppBilling::Self *)v27, 0x20u, 47);
  InAppBilling::bundlePutString((InAppBilling::Self *)v27, a3, v3);
  InAppBilling::readChar((InAppBilling::Self *)v27, 0x20u, 74);
  InAppBilling::bundlePutString((InAppBilling::Self *)v27, a2, v3);
  Data = InAppBilling::getData(v3);
  InAppBilling::readChar((InAppBilling::Self *)v27, 0x20u, 31);
  BArray = InAppBilling::bundleReadBArray((InAppBilling::Self *)v27, Data);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, (char *)&unk_1B15112, (int)(uintptr_t)&v25 + 3);
  G4_VCALL<void>(v26, 92, Data);
  G4_VCALL<void>(v26, 92, v3);
  if ( BArray != 0 )
  {
    v5 = G4_VCALL<int>(v26, 684, BArray);
    v6 = alloca(v5 + 16);
    v18 = v5;
    memset(&self, 0, v5 + 1);
    retaddr = &self;
    G4_VCALL<void>(v26, 800, BArray, 0, v18);
    G4_VCALL<void>(v26, 92, BArray);
    v7 = &self;
    do
    {
      v8 = (int)(uintptr_t)*v7++;
      v9 = ~v8 & (v8 - 16843009) & 0x80808080;
    }
    while ( v9 == 0 );
    v28 = &self;
    if ( (~v8 & (v8 - 16843009) & 0x8080) == 0 )
    {
      v9 >>= 16;
      v7 = (InAppBilling::Self **)((char *)v7 + 2);
    }
    g4_std::string::assign((int)(uintptr_t)self, v28, (char *)v7 - __CFADD__((uint8_t)v9, (uint8_t)v9) - 3 - (char *)&self);
  }
  if ( v20 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_GetBillingAttByID  (binary VA: 0x4d3260)
// Original: InAppBilling_GetBillingAttByID
// ----------------------------------------------------------------------------
InAppBilling::Self * InAppBilling_GetBillingAttByID(InAppBilling::Self *a1, char *a2, InAppBilling::Self *a3)
{
  InAppBilling::getBillingAttByID(a1, (InAppBilling::Self *)a2, a3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::getAttByID  (binary VA: 0x4d32b0)
// Original: InAppBilling::getAttByID
// ----------------------------------------------------------------------------
InAppBilling::Self * InAppBilling::getAttByID(InAppBilling::Self *self, InAppBilling::Self *a2, InAppBilling::Self *a3)
{
  int v3;
  int BArray;
  int v5;
  void *v6;
  InAppBilling::Self **v7;
  int v8;
  unsigned int v9;
  InAppBilling::Self **retaddr;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_Data;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef InAppBilling::Self *_g4_t_v26;
  typedef uint8_t _g4_t_v27[48];
  typedef InAppBilling::Self **_g4_t_v28;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v18)) > _g4_s7 ? (32u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v19)) > _g4_s8 ? (36u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (39u + sizeof(_g4_t_v20)) > _g4_s9 ? (39u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v21)) > _g4_s10 ? (40u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_Data)) > _g4_s11 ? (40u + sizeof(_g4_t_Data)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v23)) > _g4_s12 ? (44u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v24)) > _g4_s13 ? (48u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v25)) > _g4_s14 ? (52u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v26)) > _g4_s15 ? (56u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v27)) > _g4_s16 ? (60u + sizeof(_g4_t_v27)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v28)) > _g4_s17 ? (108u + sizeof(_g4_t_v28)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 39u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_Data &Data = *reinterpret_cast<_g4_t_Data *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 108u);

  v26 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v26, 65542, v11, v12, v13, v14, v15, v16, v17, v19, v21, v23, v24, v25) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v26, 0);
    v20 = 1;
  }
  else
  {
    v20 = 0;
  }
  v3 = InAppBilling::newBundle(v26);
  InAppBilling::bundleClear(v3);
  InAppBilling::readChar((InAppBilling::Self *)v27, 0x20u, 30);
  InAppBilling::bundlePutInt((InAppBilling::Self *)v27, 15, v3);
  InAppBilling::readChar((InAppBilling::Self *)v27, 0x20u, 47);
  InAppBilling::bundlePutString((InAppBilling::Self *)v27, a3, v3);
  InAppBilling::readChar((InAppBilling::Self *)v27, 0x20u, 74);
  InAppBilling::bundlePutString((InAppBilling::Self *)v27, a2, v3);
  Data = InAppBilling::getData(v3);
  InAppBilling::readChar((InAppBilling::Self *)v27, 0x20u, 31);
  BArray = InAppBilling::bundleReadBArray((InAppBilling::Self *)v27, Data);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, (char *)&unk_1B15112, (int)(uintptr_t)&v25 + 3);
  G4_VCALL<void>(v26, 92, Data);
  G4_VCALL<void>(v26, 92, v3);
  if ( BArray != 0 )
  {
    v5 = G4_VCALL<int>(v26, 684, BArray);
    v6 = alloca(v5 + 16);
    v18 = v5;
    memset(&self, 0, v5 + 1);
    retaddr = &self;
    G4_VCALL<void>(v26, 800, BArray, 0, v18);
    G4_VCALL<void>(v26, 92, BArray);
    v7 = &self;
    do
    {
      v8 = (int)(uintptr_t)*v7++;
      v9 = ~v8 & (v8 - 16843009) & 0x80808080;
    }
    while ( v9 == 0 );
    v28 = &self;
    if ( (~v8 & (v8 - 16843009) & 0x8080) == 0 )
    {
      v9 >>= 16;
      v7 = (InAppBilling::Self **)((char *)v7 + 2);
    }
    g4_std::string::assign((int)(uintptr_t)self, v28, (char *)v7 - __CFADD__((uint8_t)v9, (uint8_t)v9) - 3 - (char *)&self);
  }
  if ( v20 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_GetAttByID  (binary VA: 0x4d3520)
// Original: InAppBilling_GetAttByID
// ----------------------------------------------------------------------------
InAppBilling::Self * InAppBilling_GetAttByID(InAppBilling::Self *a1, char *a2, InAppBilling::Self *a3)
{
  InAppBilling::getAttByID(a1, (InAppBilling::Self *)a2, a3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::getItemTypeByID  (binary VA: 0x4d3570)
// Original: InAppBilling::getItemTypeByID
// ----------------------------------------------------------------------------
InAppBilling::Self * InAppBilling::getItemTypeByID(InAppBilling::Self *self, InAppBilling::Self *a2)
{
  int v2;
  int BArray;
  int v4;
  void *v5;
  InAppBilling::Self **v6;
  int v7;
  unsigned int v8;
  InAppBilling::Self **retaddr;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_Data;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef InAppBilling::Self *_g4_t_v25;
  typedef uint8_t _g4_t_v26[48];
  typedef InAppBilling::Self **_g4_t_v27;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v16)) > _g4_s6 ? (32u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v17)) > _g4_s7 ? (32u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v18)) > _g4_s8 ? (36u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (39u + sizeof(_g4_t_v19)) > _g4_s9 ? (39u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v20)) > _g4_s10 ? (40u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_Data)) > _g4_s11 ? (40u + sizeof(_g4_t_Data)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v22)) > _g4_s12 ? (44u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v23)) > _g4_s13 ? (48u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v24)) > _g4_s14 ? (52u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v25)) > _g4_s15 ? (56u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v26)) > _g4_s16 ? (60u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v27)) > _g4_s17 ? (108u + sizeof(_g4_t_v27)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 39u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_Data &Data = *reinterpret_cast<_g4_t_Data *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);

  v25 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v25, 65542, v10, v11, v12, v13, v14, v15, v16, v18, v20, v22, v23, v24) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v25, 0);
    v19 = 1;
  }
  else
  {
    v19 = 0;
  }
  v2 = InAppBilling::newBundle(v25);
  InAppBilling::bundleClear(v2);
  InAppBilling::readChar((InAppBilling::Self *)v26, 0x20u, 30);
  InAppBilling::bundlePutInt((InAppBilling::Self *)v26, 14, v2);
  InAppBilling::readChar((InAppBilling::Self *)v26, 0x20u, 74);
  InAppBilling::bundlePutString((InAppBilling::Self *)v26, a2, v2);
  Data = InAppBilling::getData(v2);
  InAppBilling::readChar((InAppBilling::Self *)v26, 0x20u, 31);
  BArray = InAppBilling::bundleReadBArray((InAppBilling::Self *)v26, Data);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, (char *)&unk_1B15112, (int)(uintptr_t)&v24 + 3);
  G4_VCALL<void>(v25, 92, Data);
  G4_VCALL<void>(v25, 92, v2);
  if ( BArray != 0 )
  {
    v4 = G4_VCALL<int>(v25, 684, BArray);
    v5 = alloca(v4 + 16);
    v17 = v4;
    memset(&self, 0, v4 + 1);
    retaddr = &self;
    G4_VCALL<void>(v25, 800, BArray, 0, v17);
    G4_VCALL<void>(v25, 92, BArray);
    v6 = &self;
    do
    {
      v7 = (int)(uintptr_t)*v6++;
      v8 = ~v7 & (v7 - 16843009) & 0x80808080;
    }
    while ( v8 == 0 );
    v27 = &self;
    if ( (~v7 & (v7 - 16843009) & 0x8080) == 0 )
    {
      v8 >>= 16;
      v6 = (InAppBilling::Self **)((char *)v6 + 2);
    }
    g4_std::string::assign((int)(uintptr_t)self, v27, (char *)v6 - __CFADD__((uint8_t)v8, (uint8_t)v8) - 3 - (char *)&self);
  }
  if ( v19 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_GetItemTypeByID  (binary VA: 0x4d37b0)
// Original: InAppBilling_GetItemTypeByID
// ----------------------------------------------------------------------------
InAppBilling::Self * InAppBilling_GetItemTypeByID(InAppBilling::Self *a1, InAppBilling::Self *a2)
{
  InAppBilling::getItemTypeByID(a1, a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::getItemInfoByID  (binary VA: 0x4d37f0)
// Original: InAppBilling::getItemInfoByID
// ----------------------------------------------------------------------------
int InAppBilling::getItemInfoByID(InAppBilling::Self *self, const char *a2)
{
  size_t v2;
  void *v3;
  InAppBilling::Self *Char;
  char *v5;
  int v6;
  size_t v7;
  size_t v8;
  size_t v9;
  int v10;
  int v11;
  size_t v12;
  size_t v13;
  int v14;
  void *v15;
  void *v16;
  InAppBilling::Self *v17;
  char *v18;
  int v19;
  size_t v20;
  size_t v21;
  size_t v22;
  int v23;
  int v24;
  size_t v25;
  size_t v26;
  int v27;
  void *v28;
  void *v29;
  InAppBilling::Self *v30;
  char *v31;
  int v32;
  size_t v33;
  size_t v34;
  size_t v35;
  int v36;
  int v37;
  size_t v38;
  size_t v39;
  int v40;
  void *v41;
  void *v42;
  InAppBilling::Self *v43;
  char *v44;
  int v45;
  size_t v46;
  size_t v47;
  size_t v48;
  int v49;
  int v50;
  size_t v51;
  size_t v52;
  int v53;
  void *v54;
  void *v55;
  InAppBilling::Self *v56;
  char *v57;
  int v58;
  size_t v59;
  size_t v60;
  size_t v61;
  int v62;
  int v63;
  size_t v64;
  size_t v65;
  int v66;
  void *v67;
  void *v68;
  InAppBilling::Self *v69;
  char *v70;
  int v71;
  size_t v72;
  size_t v73;
  size_t v74;
  int v75;
  int v76;
  size_t v77;
  size_t v78;
  int v79;
  void *v80;
  void *v81;
  InAppBilling::Self *v82;
  char *v83;
  int v84;
  size_t v85;
  size_t v86;
  size_t v87;
  int v88;
  int v89;
  size_t v90;
  size_t v91;
  int v92;
  void *v93;
  void *v94;
  InAppBilling::Self *v95;
  char *v96;
  int v97;
  size_t v98;
  size_t v99;
  size_t v100;
  int v101;
  int v102;
  size_t v103;
  size_t v104;
  int v105;
  void *v106;
  void *v107;
  InAppBilling::Self *v108;
  char *v109;
  int v110;
  size_t v111;
  size_t v112;
  size_t v113;
  int v114;
  int v115;
  size_t v116;
  size_t v117;
  int v118;
  void *v119;
  void *v120;
  InAppBilling::Self *v121;
  char *v122;
  int v123;
  size_t v124;
  size_t v125;
  size_t v126;
  int v127;
  int v128;
  size_t v129;
  size_t v130;
  int v131;
  void *v132;
  void *v133;
  InAppBilling::Self *v134;
  char *v135;
  int v136;
  size_t v137;
  size_t v138;
  size_t v139;
  int v140;
  int v141;
  size_t v142;
  size_t v143;
  int v144;
  void *v145;
  void *v146;
  InAppBilling::Self *v147;
  char *v148;
  int v149;
  size_t v150;
  size_t v151;
  size_t v152;
  int v153;
  int v154;
  size_t v155;
  size_t v156;
  int v157;
  void *v158;
  void *v159;
  InAppBilling::Self *v160;
  char *v161;
  int v162;
  size_t v163;
  size_t v164;
  size_t v165;
  int v166;
  int v167;
  size_t v168;
  size_t v169;
  int v170;
  void *v171;
  void *v172;
  InAppBilling::Self *v173;
  char *v174;
  int v175;
  size_t v176;
  size_t v177;
  size_t v178;
  int v179;
  int v180;
  size_t v181;
  size_t v182;
  int v183;
  void *v184;
  void *v185;
  InAppBilling::Self *v186;
  char *v187;
  int v188;
  size_t v189;
  size_t v190;
  size_t v191;
  int v192;
  int v193;
  size_t v194;
  size_t v195;
  int v196;
  void *v197;
  void *v198;
  InAppBilling::Self *v199;
  char *v200;
  char *v201;
  size_t v202;
  size_t v203;
  size_t v204;
  int v205;
  int v206;
  size_t v207;
  size_t v208;
  int v209;
  void *v210;
  int result;
  void *v212;
  void *v213;
  volatile int32_t *v214;
  volatile int32_t *v215;
  void *v216;
  volatile int32_t *v217;
  volatile int32_t *v218;
  void *v219;
  volatile int32_t *v220;
  volatile int32_t *v221;
  void *v222;
  volatile int32_t *v223;
  volatile int32_t *v224;
  void *v225;
  volatile int32_t *v226;
  volatile int32_t *v227;
  void *v228;
  volatile int32_t *v229;
  volatile int32_t *v230;
  void *v231;
  volatile int32_t *v232;
  volatile int32_t *v233;
  void *v234;
  volatile int32_t *v235;
  volatile int32_t *v236;
  void *v237;
  volatile int32_t *v238;
  volatile int32_t *v239;
  void *v240;
  volatile int32_t *v241;
  volatile int32_t *v242;
  void *v243;
  volatile int32_t *v244;
  volatile int32_t *v245;
  void *v246;
  volatile int32_t *v247;
  volatile int32_t *v248;
  void *v249;
  volatile int32_t *v250;
  volatile int32_t *v251;
  void *v252;
  volatile int32_t *v253;
  volatile int32_t *v254;
  void *v255;
  volatile int32_t *v256;
  volatile int32_t *v257;
  void *v258;
  volatile int32_t *v259;
  volatile int32_t *v260;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef size_t _g4_t_nd;
  typedef size_t _g4_t_ne;
  typedef size_t _g4_t_nf;
  typedef size_t _g4_t_ng;
  typedef size_t _g4_t_nh;
  typedef size_t _g4_t_ni;
  typedef size_t _g4_t_nj;
  typedef size_t _g4_t_nk;
  typedef size_t _g4_t_nl;
  typedef size_t _g4_t_nm;
  typedef size_t _g4_t_nn;
  typedef size_t _g4_t_no;
  typedef const char *_g4_t_v277;
  typedef const char *_g4_t_v278;
  typedef InAppBilling::Self *_g4_t_s1;
  typedef void *_g4_t_s1a;
  typedef int _g4_t_v281;
  typedef int _g4_t_v282;
  typedef int _g4_t_v283;
  typedef int _g4_t_v284;
  typedef int _g4_t_v285;
  typedef int _g4_t_v286;
  typedef int _g4_t_v287;
  typedef int _g4_t_v288;
  typedef int _g4_t_v289;
  typedef int _g4_t_v290;
  typedef int _g4_t_v291;
  typedef int _g4_t_v292;
  typedef int _g4_t_v293;
  typedef int _g4_t_v294;
  typedef int _g4_t_v295;
  typedef void *_g4_t_s2;
  typedef void *_g4_t_s2a;
  typedef void *_g4_t_s2b;
  typedef void *_g4_t_s2c;
  typedef void *_g4_t_s2d;
  typedef void *_g4_t_s2e;
  typedef void *_g4_t_s2f;
  typedef void *_g4_t_s2g;
  typedef void *_g4_t_s2h;
  typedef void *_g4_t_s2i;
  typedef void *_g4_t_s2j;
  typedef void *_g4_t_s2k;
  typedef void *_g4_t_s2l;
  typedef void *_g4_t_s2m;
  typedef void *_g4_t_s2n;
  typedef const char *_g4_t_s2o;
  typedef int _g4_t_v312[4];
  typedef int _g4_t_v313;
  typedef int _g4_t_v314;
  typedef int _g4_t_v315;
  typedef int _g4_t_v316;
  typedef int _g4_t_v317;
  typedef int _g4_t_v318[4];
  typedef uint32_t _g4_t_v319[4];
  typedef int _g4_t_v320[4];
  typedef uint32_t _g4_t_v321[4];
  typedef int _g4_t_v322[4];
  typedef uint32_t _g4_t_v323[4];
  typedef int _g4_t_v324[4];
  typedef uint32_t _g4_t_v325[4];
  typedef int _g4_t_v326[4];
  typedef uint32_t _g4_t_v327[4];
  typedef int _g4_t_v328[4];
  typedef uint32_t _g4_t_v329[4];
  typedef int _g4_t_v330[4];
  typedef uint32_t _g4_t_v331[4];
  typedef int _g4_t_v332[4];
  typedef uint32_t _g4_t_v333[4];
  typedef int _g4_t_v334[4];
  typedef uint32_t _g4_t_v335[4];
  typedef int _g4_t_v336[4];
  typedef uint32_t _g4_t_v337[4];
  typedef int _g4_t_v338[4];
  typedef uint32_t _g4_t_v339[4];
  typedef int _g4_t_v340[4];
  typedef uint32_t _g4_t_v341[4];
  typedef int _g4_t_v342[4];
  typedef uint32_t _g4_t_v343[4];
  typedef int _g4_t_v344[4];
  typedef uint32_t _g4_t_v345[4];
  typedef int _g4_t_v346[4];
  typedef uint32_t _g4_t_v347[4];
  typedef int _g4_t_v348[4];
  typedef uint32_t _g4_t_v349[4];
  typedef volatile int32_t *_g4_t_v350;
  typedef volatile int32_t *_g4_t_v351;
  typedef volatile int32_t *_g4_t_v352;
  typedef volatile int32_t *_g4_t_v353;
  typedef volatile int32_t *_g4_t_v354;
  typedef volatile int32_t *_g4_t_v355;
  typedef volatile int32_t *_g4_t_v356;
  typedef volatile int32_t *_g4_t_v357;
  typedef volatile int32_t *_g4_t_v358;
  typedef volatile int32_t *_g4_t_v359;
  typedef volatile int32_t *_g4_t_v360;
  typedef volatile int32_t *_g4_t_v361;
  typedef volatile int32_t *_g4_t_v362;
  typedef volatile int32_t *_g4_t_v363;
  typedef volatile int32_t *_g4_t_v364;
  typedef volatile int32_t *_g4_t_v365;
  typedef int _g4_t_v366;
  typedef volatile int32_t *_g4_t_v367;
  typedef int _g4_t_v368[3];
  typedef volatile int32_t *_g4_t_v369;
  typedef int _g4_t_v370[3];
  typedef volatile int32_t *_g4_t_v371;
  typedef int _g4_t_v372[3];
  typedef volatile int32_t *_g4_t_v373;
  typedef int _g4_t_v374[3];
  typedef volatile int32_t *_g4_t_v375;
  typedef int _g4_t_v376[3];
  typedef volatile int32_t *_g4_t_v377;
  typedef int _g4_t_v378[3];
  typedef volatile int32_t *_g4_t_v379;
  typedef int _g4_t_v380[3];
  typedef volatile int32_t *_g4_t_v381;
  typedef int _g4_t_v382[3];
  typedef volatile int32_t *_g4_t_v383;
  typedef int _g4_t_v384[3];
  typedef volatile int32_t *_g4_t_v385;
  typedef int _g4_t_v386[3];
  typedef volatile int32_t *_g4_t_v387;
  typedef int _g4_t_v388[3];
  typedef volatile int32_t *_g4_t_v389;
  typedef int _g4_t_v390[3];
  typedef volatile int32_t *_g4_t_v391;
  typedef int _g4_t_v392[3];
  typedef volatile int32_t *_g4_t_v393;
  typedef int _g4_t_v394[3];
  typedef volatile int32_t *_g4_t_v395;
  typedef int _g4_t_v396[3];
  typedef volatile int32_t *_g4_t_v397;
  typedef int _g4_t_v398[3];
  typedef uint32_t _g4_t_v399[14];
  enum : size_t {
    _g4_s0 = 1296u,
    _g4_s1 = (0u + sizeof(_g4_t_n)) > _g4_s0 ? (0u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_na)) > _g4_s1 ? (0u + sizeof(_g4_t_na)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_nb)) > _g4_s2 ? (0u + sizeof(_g4_t_nb)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_nc)) > _g4_s3 ? (0u + sizeof(_g4_t_nc)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_nd)) > _g4_s4 ? (0u + sizeof(_g4_t_nd)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_ne)) > _g4_s5 ? (0u + sizeof(_g4_t_ne)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_nf)) > _g4_s6 ? (0u + sizeof(_g4_t_nf)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_ng)) > _g4_s7 ? (0u + sizeof(_g4_t_ng)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_nh)) > _g4_s8 ? (0u + sizeof(_g4_t_nh)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_ni)) > _g4_s9 ? (0u + sizeof(_g4_t_ni)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_nj)) > _g4_s10 ? (0u + sizeof(_g4_t_nj)) : _g4_s10,
    _g4_s12 = (0u + sizeof(_g4_t_nk)) > _g4_s11 ? (0u + sizeof(_g4_t_nk)) : _g4_s11,
    _g4_s13 = (0u + sizeof(_g4_t_nl)) > _g4_s12 ? (0u + sizeof(_g4_t_nl)) : _g4_s12,
    _g4_s14 = (0u + sizeof(_g4_t_nm)) > _g4_s13 ? (0u + sizeof(_g4_t_nm)) : _g4_s13,
    _g4_s15 = (0u + sizeof(_g4_t_nn)) > _g4_s14 ? (0u + sizeof(_g4_t_nn)) : _g4_s14,
    _g4_s16 = (0u + sizeof(_g4_t_no)) > _g4_s15 ? (0u + sizeof(_g4_t_no)) : _g4_s15,
    _g4_s17 = (4u + sizeof(_g4_t_v277)) > _g4_s16 ? (4u + sizeof(_g4_t_v277)) : _g4_s16,
    _g4_s18 = (8u + sizeof(_g4_t_v278)) > _g4_s17 ? (8u + sizeof(_g4_t_v278)) : _g4_s17,
    _g4_s19 = (12u + sizeof(_g4_t_s1)) > _g4_s18 ? (12u + sizeof(_g4_t_s1)) : _g4_s18,
    _g4_s20 = (12u + sizeof(_g4_t_s1a)) > _g4_s19 ? (12u + sizeof(_g4_t_s1a)) : _g4_s19,
    _g4_s21 = (16u + sizeof(_g4_t_v281)) > _g4_s20 ? (16u + sizeof(_g4_t_v281)) : _g4_s20,
    _g4_s22 = (16u + sizeof(_g4_t_v282)) > _g4_s21 ? (16u + sizeof(_g4_t_v282)) : _g4_s21,
    _g4_s23 = (16u + sizeof(_g4_t_v283)) > _g4_s22 ? (16u + sizeof(_g4_t_v283)) : _g4_s22,
    _g4_s24 = (16u + sizeof(_g4_t_v284)) > _g4_s23 ? (16u + sizeof(_g4_t_v284)) : _g4_s23,
    _g4_s25 = (16u + sizeof(_g4_t_v285)) > _g4_s24 ? (16u + sizeof(_g4_t_v285)) : _g4_s24,
    _g4_s26 = (16u + sizeof(_g4_t_v286)) > _g4_s25 ? (16u + sizeof(_g4_t_v286)) : _g4_s25,
    _g4_s27 = (16u + sizeof(_g4_t_v287)) > _g4_s26 ? (16u + sizeof(_g4_t_v287)) : _g4_s26,
    _g4_s28 = (16u + sizeof(_g4_t_v288)) > _g4_s27 ? (16u + sizeof(_g4_t_v288)) : _g4_s27,
    _g4_s29 = (16u + sizeof(_g4_t_v289)) > _g4_s28 ? (16u + sizeof(_g4_t_v289)) : _g4_s28,
    _g4_s30 = (16u + sizeof(_g4_t_v290)) > _g4_s29 ? (16u + sizeof(_g4_t_v290)) : _g4_s29,
    _g4_s31 = (16u + sizeof(_g4_t_v291)) > _g4_s30 ? (16u + sizeof(_g4_t_v291)) : _g4_s30,
    _g4_s32 = (16u + sizeof(_g4_t_v292)) > _g4_s31 ? (16u + sizeof(_g4_t_v292)) : _g4_s31,
    _g4_s33 = (16u + sizeof(_g4_t_v293)) > _g4_s32 ? (16u + sizeof(_g4_t_v293)) : _g4_s32,
    _g4_s34 = (16u + sizeof(_g4_t_v294)) > _g4_s33 ? (16u + sizeof(_g4_t_v294)) : _g4_s33,
    _g4_s35 = (16u + sizeof(_g4_t_v295)) > _g4_s34 ? (16u + sizeof(_g4_t_v295)) : _g4_s34,
    _g4_s36 = (20u + sizeof(_g4_t_s2)) > _g4_s35 ? (20u + sizeof(_g4_t_s2)) : _g4_s35,
    _g4_s37 = (20u + sizeof(_g4_t_s2a)) > _g4_s36 ? (20u + sizeof(_g4_t_s2a)) : _g4_s36,
    _g4_s38 = (20u + sizeof(_g4_t_s2b)) > _g4_s37 ? (20u + sizeof(_g4_t_s2b)) : _g4_s37,
    _g4_s39 = (20u + sizeof(_g4_t_s2c)) > _g4_s38 ? (20u + sizeof(_g4_t_s2c)) : _g4_s38,
    _g4_s40 = (20u + sizeof(_g4_t_s2d)) > _g4_s39 ? (20u + sizeof(_g4_t_s2d)) : _g4_s39,
    _g4_s41 = (20u + sizeof(_g4_t_s2e)) > _g4_s40 ? (20u + sizeof(_g4_t_s2e)) : _g4_s40,
    _g4_s42 = (20u + sizeof(_g4_t_s2f)) > _g4_s41 ? (20u + sizeof(_g4_t_s2f)) : _g4_s41,
    _g4_s43 = (20u + sizeof(_g4_t_s2g)) > _g4_s42 ? (20u + sizeof(_g4_t_s2g)) : _g4_s42,
    _g4_s44 = (20u + sizeof(_g4_t_s2h)) > _g4_s43 ? (20u + sizeof(_g4_t_s2h)) : _g4_s43,
    _g4_s45 = (20u + sizeof(_g4_t_s2i)) > _g4_s44 ? (20u + sizeof(_g4_t_s2i)) : _g4_s44,
    _g4_s46 = (20u + sizeof(_g4_t_s2j)) > _g4_s45 ? (20u + sizeof(_g4_t_s2j)) : _g4_s45,
    _g4_s47 = (20u + sizeof(_g4_t_s2k)) > _g4_s46 ? (20u + sizeof(_g4_t_s2k)) : _g4_s46,
    _g4_s48 = (20u + sizeof(_g4_t_s2l)) > _g4_s47 ? (20u + sizeof(_g4_t_s2l)) : _g4_s47,
    _g4_s49 = (20u + sizeof(_g4_t_s2m)) > _g4_s48 ? (20u + sizeof(_g4_t_s2m)) : _g4_s48,
    _g4_s50 = (20u + sizeof(_g4_t_s2n)) > _g4_s49 ? (20u + sizeof(_g4_t_s2n)) : _g4_s49,
    _g4_s51 = (20u + sizeof(_g4_t_s2o)) > _g4_s50 ? (20u + sizeof(_g4_t_s2o)) : _g4_s50,
    _g4_s52 = (24u + sizeof(_g4_t_v312)) > _g4_s51 ? (24u + sizeof(_g4_t_v312)) : _g4_s51,
    _g4_s53 = (43u + sizeof(_g4_t_v313)) > _g4_s52 ? (43u + sizeof(_g4_t_v313)) : _g4_s52,
    _g4_s54 = (44u + sizeof(_g4_t_v314)) > _g4_s53 ? (44u + sizeof(_g4_t_v314)) : _g4_s53,
    _g4_s55 = (48u + sizeof(_g4_t_v315)) > _g4_s54 ? (48u + sizeof(_g4_t_v315)) : _g4_s54,
    _g4_s56 = (52u + sizeof(_g4_t_v316)) > _g4_s55 ? (52u + sizeof(_g4_t_v316)) : _g4_s55,
    _g4_s57 = (56u + sizeof(_g4_t_v317)) > _g4_s56 ? (56u + sizeof(_g4_t_v317)) : _g4_s56,
    _g4_s58 = (140u + sizeof(_g4_t_v318)) > _g4_s57 ? (140u + sizeof(_g4_t_v318)) : _g4_s57,
    _g4_s59 = (156u + sizeof(_g4_t_v319)) > _g4_s58 ? (156u + sizeof(_g4_t_v319)) : _g4_s58,
    _g4_s60 = (172u + sizeof(_g4_t_v320)) > _g4_s59 ? (172u + sizeof(_g4_t_v320)) : _g4_s59,
    _g4_s61 = (188u + sizeof(_g4_t_v321)) > _g4_s60 ? (188u + sizeof(_g4_t_v321)) : _g4_s60,
    _g4_s62 = (204u + sizeof(_g4_t_v322)) > _g4_s61 ? (204u + sizeof(_g4_t_v322)) : _g4_s61,
    _g4_s63 = (220u + sizeof(_g4_t_v323)) > _g4_s62 ? (220u + sizeof(_g4_t_v323)) : _g4_s62,
    _g4_s64 = (236u + sizeof(_g4_t_v324)) > _g4_s63 ? (236u + sizeof(_g4_t_v324)) : _g4_s63,
    _g4_s65 = (252u + sizeof(_g4_t_v325)) > _g4_s64 ? (252u + sizeof(_g4_t_v325)) : _g4_s64,
    _g4_s66 = (268u + sizeof(_g4_t_v326)) > _g4_s65 ? (268u + sizeof(_g4_t_v326)) : _g4_s65,
    _g4_s67 = (284u + sizeof(_g4_t_v327)) > _g4_s66 ? (284u + sizeof(_g4_t_v327)) : _g4_s66,
    _g4_s68 = (300u + sizeof(_g4_t_v328)) > _g4_s67 ? (300u + sizeof(_g4_t_v328)) : _g4_s67,
    _g4_s69 = (316u + sizeof(_g4_t_v329)) > _g4_s68 ? (316u + sizeof(_g4_t_v329)) : _g4_s68,
    _g4_s70 = (332u + sizeof(_g4_t_v330)) > _g4_s69 ? (332u + sizeof(_g4_t_v330)) : _g4_s69,
    _g4_s71 = (348u + sizeof(_g4_t_v331)) > _g4_s70 ? (348u + sizeof(_g4_t_v331)) : _g4_s70,
    _g4_s72 = (364u + sizeof(_g4_t_v332)) > _g4_s71 ? (364u + sizeof(_g4_t_v332)) : _g4_s71,
    _g4_s73 = (380u + sizeof(_g4_t_v333)) > _g4_s72 ? (380u + sizeof(_g4_t_v333)) : _g4_s72,
    _g4_s74 = (396u + sizeof(_g4_t_v334)) > _g4_s73 ? (396u + sizeof(_g4_t_v334)) : _g4_s73,
    _g4_s75 = (412u + sizeof(_g4_t_v335)) > _g4_s74 ? (412u + sizeof(_g4_t_v335)) : _g4_s74,
    _g4_s76 = (428u + sizeof(_g4_t_v336)) > _g4_s75 ? (428u + sizeof(_g4_t_v336)) : _g4_s75,
    _g4_s77 = (444u + sizeof(_g4_t_v337)) > _g4_s76 ? (444u + sizeof(_g4_t_v337)) : _g4_s76,
    _g4_s78 = (460u + sizeof(_g4_t_v338)) > _g4_s77 ? (460u + sizeof(_g4_t_v338)) : _g4_s77,
    _g4_s79 = (476u + sizeof(_g4_t_v339)) > _g4_s78 ? (476u + sizeof(_g4_t_v339)) : _g4_s78,
    _g4_s80 = (492u + sizeof(_g4_t_v340)) > _g4_s79 ? (492u + sizeof(_g4_t_v340)) : _g4_s79,
    _g4_s81 = (508u + sizeof(_g4_t_v341)) > _g4_s80 ? (508u + sizeof(_g4_t_v341)) : _g4_s80,
    _g4_s82 = (524u + sizeof(_g4_t_v342)) > _g4_s81 ? (524u + sizeof(_g4_t_v342)) : _g4_s81,
    _g4_s83 = (540u + sizeof(_g4_t_v343)) > _g4_s82 ? (540u + sizeof(_g4_t_v343)) : _g4_s82,
    _g4_s84 = (556u + sizeof(_g4_t_v344)) > _g4_s83 ? (556u + sizeof(_g4_t_v344)) : _g4_s83,
    _g4_s85 = (572u + sizeof(_g4_t_v345)) > _g4_s84 ? (572u + sizeof(_g4_t_v345)) : _g4_s84,
    _g4_s86 = (588u + sizeof(_g4_t_v346)) > _g4_s85 ? (588u + sizeof(_g4_t_v346)) : _g4_s85,
    _g4_s87 = (604u + sizeof(_g4_t_v347)) > _g4_s86 ? (604u + sizeof(_g4_t_v347)) : _g4_s86,
    _g4_s88 = (620u + sizeof(_g4_t_v348)) > _g4_s87 ? (620u + sizeof(_g4_t_v348)) : _g4_s87,
    _g4_s89 = (636u + sizeof(_g4_t_v349)) > _g4_s88 ? (636u + sizeof(_g4_t_v349)) : _g4_s88,
    _g4_s90 = (652u + sizeof(_g4_t_v350)) > _g4_s89 ? (652u + sizeof(_g4_t_v350)) : _g4_s89,
    _g4_s91 = (668u + sizeof(_g4_t_v351)) > _g4_s90 ? (668u + sizeof(_g4_t_v351)) : _g4_s90,
    _g4_s92 = (684u + sizeof(_g4_t_v352)) > _g4_s91 ? (684u + sizeof(_g4_t_v352)) : _g4_s91,
    _g4_s93 = (700u + sizeof(_g4_t_v353)) > _g4_s92 ? (700u + sizeof(_g4_t_v353)) : _g4_s92,
    _g4_s94 = (716u + sizeof(_g4_t_v354)) > _g4_s93 ? (716u + sizeof(_g4_t_v354)) : _g4_s93,
    _g4_s95 = (732u + sizeof(_g4_t_v355)) > _g4_s94 ? (732u + sizeof(_g4_t_v355)) : _g4_s94,
    _g4_s96 = (748u + sizeof(_g4_t_v356)) > _g4_s95 ? (748u + sizeof(_g4_t_v356)) : _g4_s95,
    _g4_s97 = (764u + sizeof(_g4_t_v357)) > _g4_s96 ? (764u + sizeof(_g4_t_v357)) : _g4_s96,
    _g4_s98 = (780u + sizeof(_g4_t_v358)) > _g4_s97 ? (780u + sizeof(_g4_t_v358)) : _g4_s97,
    _g4_s99 = (796u + sizeof(_g4_t_v359)) > _g4_s98 ? (796u + sizeof(_g4_t_v359)) : _g4_s98,
    _g4_s100 = (812u + sizeof(_g4_t_v360)) > _g4_s99 ? (812u + sizeof(_g4_t_v360)) : _g4_s99,
    _g4_s101 = (828u + sizeof(_g4_t_v361)) > _g4_s100 ? (828u + sizeof(_g4_t_v361)) : _g4_s100,
    _g4_s102 = (844u + sizeof(_g4_t_v362)) > _g4_s101 ? (844u + sizeof(_g4_t_v362)) : _g4_s101,
    _g4_s103 = (860u + sizeof(_g4_t_v363)) > _g4_s102 ? (860u + sizeof(_g4_t_v363)) : _g4_s102,
    _g4_s104 = (876u + sizeof(_g4_t_v364)) > _g4_s103 ? (876u + sizeof(_g4_t_v364)) : _g4_s103,
    _g4_s105 = (892u + sizeof(_g4_t_v365)) > _g4_s104 ? (892u + sizeof(_g4_t_v365)) : _g4_s104,
    _g4_s106 = (904u + sizeof(_g4_t_v366)) > _g4_s105 ? (904u + sizeof(_g4_t_v366)) : _g4_s105,
    _g4_s107 = (908u + sizeof(_g4_t_v367)) > _g4_s106 ? (908u + sizeof(_g4_t_v367)) : _g4_s106,
    _g4_s108 = (912u + sizeof(_g4_t_v368)) > _g4_s107 ? (912u + sizeof(_g4_t_v368)) : _g4_s107,
    _g4_s109 = (924u + sizeof(_g4_t_v369)) > _g4_s108 ? (924u + sizeof(_g4_t_v369)) : _g4_s108,
    _g4_s110 = (928u + sizeof(_g4_t_v370)) > _g4_s109 ? (928u + sizeof(_g4_t_v370)) : _g4_s109,
    _g4_s111 = (940u + sizeof(_g4_t_v371)) > _g4_s110 ? (940u + sizeof(_g4_t_v371)) : _g4_s110,
    _g4_s112 = (944u + sizeof(_g4_t_v372)) > _g4_s111 ? (944u + sizeof(_g4_t_v372)) : _g4_s111,
    _g4_s113 = (956u + sizeof(_g4_t_v373)) > _g4_s112 ? (956u + sizeof(_g4_t_v373)) : _g4_s112,
    _g4_s114 = (960u + sizeof(_g4_t_v374)) > _g4_s113 ? (960u + sizeof(_g4_t_v374)) : _g4_s113,
    _g4_s115 = (972u + sizeof(_g4_t_v375)) > _g4_s114 ? (972u + sizeof(_g4_t_v375)) : _g4_s114,
    _g4_s116 = (976u + sizeof(_g4_t_v376)) > _g4_s115 ? (976u + sizeof(_g4_t_v376)) : _g4_s115,
    _g4_s117 = (988u + sizeof(_g4_t_v377)) > _g4_s116 ? (988u + sizeof(_g4_t_v377)) : _g4_s116,
    _g4_s118 = (992u + sizeof(_g4_t_v378)) > _g4_s117 ? (992u + sizeof(_g4_t_v378)) : _g4_s117,
    _g4_s119 = (1004u + sizeof(_g4_t_v379)) > _g4_s118 ? (1004u + sizeof(_g4_t_v379)) : _g4_s118,
    _g4_s120 = (1008u + sizeof(_g4_t_v380)) > _g4_s119 ? (1008u + sizeof(_g4_t_v380)) : _g4_s119,
    _g4_s121 = (1020u + sizeof(_g4_t_v381)) > _g4_s120 ? (1020u + sizeof(_g4_t_v381)) : _g4_s120,
    _g4_s122 = (1024u + sizeof(_g4_t_v382)) > _g4_s121 ? (1024u + sizeof(_g4_t_v382)) : _g4_s121,
    _g4_s123 = (1036u + sizeof(_g4_t_v383)) > _g4_s122 ? (1036u + sizeof(_g4_t_v383)) : _g4_s122,
    _g4_s124 = (1040u + sizeof(_g4_t_v384)) > _g4_s123 ? (1040u + sizeof(_g4_t_v384)) : _g4_s123,
    _g4_s125 = (1052u + sizeof(_g4_t_v385)) > _g4_s124 ? (1052u + sizeof(_g4_t_v385)) : _g4_s124,
    _g4_s126 = (1056u + sizeof(_g4_t_v386)) > _g4_s125 ? (1056u + sizeof(_g4_t_v386)) : _g4_s125,
    _g4_s127 = (1068u + sizeof(_g4_t_v387)) > _g4_s126 ? (1068u + sizeof(_g4_t_v387)) : _g4_s126,
    _g4_s128 = (1072u + sizeof(_g4_t_v388)) > _g4_s127 ? (1072u + sizeof(_g4_t_v388)) : _g4_s127,
    _g4_s129 = (1084u + sizeof(_g4_t_v389)) > _g4_s128 ? (1084u + sizeof(_g4_t_v389)) : _g4_s128,
    _g4_s130 = (1088u + sizeof(_g4_t_v390)) > _g4_s129 ? (1088u + sizeof(_g4_t_v390)) : _g4_s129,
    _g4_s131 = (1100u + sizeof(_g4_t_v391)) > _g4_s130 ? (1100u + sizeof(_g4_t_v391)) : _g4_s130,
    _g4_s132 = (1104u + sizeof(_g4_t_v392)) > _g4_s131 ? (1104u + sizeof(_g4_t_v392)) : _g4_s131,
    _g4_s133 = (1116u + sizeof(_g4_t_v393)) > _g4_s132 ? (1116u + sizeof(_g4_t_v393)) : _g4_s132,
    _g4_s134 = (1120u + sizeof(_g4_t_v394)) > _g4_s133 ? (1120u + sizeof(_g4_t_v394)) : _g4_s133,
    _g4_s135 = (1132u + sizeof(_g4_t_v395)) > _g4_s134 ? (1132u + sizeof(_g4_t_v395)) : _g4_s134,
    _g4_s136 = (1136u + sizeof(_g4_t_v396)) > _g4_s135 ? (1136u + sizeof(_g4_t_v396)) : _g4_s135,
    _g4_s137 = (1148u + sizeof(_g4_t_v397)) > _g4_s136 ? (1148u + sizeof(_g4_t_v397)) : _g4_s136,
    _g4_s138 = (1152u + sizeof(_g4_t_v398)) > _g4_s137 ? (1152u + sizeof(_g4_t_v398)) : _g4_s137,
    _g4_s139 = (1164u + sizeof(_g4_t_v399)) > _g4_s138 ? (1164u + sizeof(_g4_t_v399)) : _g4_s138
  };
  alignas(16) uint8_t _g4_sf[_g4_s139];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 0u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 0u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 0u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 0u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 0u);
  _g4_t_ne &ne = *reinterpret_cast<_g4_t_ne *>(_g4_sf + 0u);
  _g4_t_nf &nf = *reinterpret_cast<_g4_t_nf *>(_g4_sf + 0u);
  _g4_t_ng &ng = *reinterpret_cast<_g4_t_ng *>(_g4_sf + 0u);
  _g4_t_nh &nh = *reinterpret_cast<_g4_t_nh *>(_g4_sf + 0u);
  _g4_t_ni &ni = *reinterpret_cast<_g4_t_ni *>(_g4_sf + 0u);
  _g4_t_nj &nj = *reinterpret_cast<_g4_t_nj *>(_g4_sf + 0u);
  _g4_t_nk &nk = *reinterpret_cast<_g4_t_nk *>(_g4_sf + 0u);
  _g4_t_nl &nl = *reinterpret_cast<_g4_t_nl *>(_g4_sf + 0u);
  _g4_t_nm &nm = *reinterpret_cast<_g4_t_nm *>(_g4_sf + 0u);
  _g4_t_nn &nn = *reinterpret_cast<_g4_t_nn *>(_g4_sf + 0u);
  _g4_t_no &no = *reinterpret_cast<_g4_t_no *>(_g4_sf + 0u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 4u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 8u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 12u);
  _g4_t_s1a &s1a = *reinterpret_cast<_g4_t_s1a *>(_g4_sf + 12u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 16u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 16u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 16u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 16u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 16u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 16u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 16u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 16u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 16u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 16u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 16u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 16u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 16u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 16u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 16u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 20u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 20u);
  _g4_t_s2b &s2b = *reinterpret_cast<_g4_t_s2b *>(_g4_sf + 20u);
  _g4_t_s2c &s2c = *reinterpret_cast<_g4_t_s2c *>(_g4_sf + 20u);
  _g4_t_s2d &s2d = *reinterpret_cast<_g4_t_s2d *>(_g4_sf + 20u);
  _g4_t_s2e &s2e = *reinterpret_cast<_g4_t_s2e *>(_g4_sf + 20u);
  _g4_t_s2f &s2f = *reinterpret_cast<_g4_t_s2f *>(_g4_sf + 20u);
  _g4_t_s2g &s2g = *reinterpret_cast<_g4_t_s2g *>(_g4_sf + 20u);
  _g4_t_s2h &s2h = *reinterpret_cast<_g4_t_s2h *>(_g4_sf + 20u);
  _g4_t_s2i &s2i = *reinterpret_cast<_g4_t_s2i *>(_g4_sf + 20u);
  _g4_t_s2j &s2j = *reinterpret_cast<_g4_t_s2j *>(_g4_sf + 20u);
  _g4_t_s2k &s2k = *reinterpret_cast<_g4_t_s2k *>(_g4_sf + 20u);
  _g4_t_s2l &s2l = *reinterpret_cast<_g4_t_s2l *>(_g4_sf + 20u);
  _g4_t_s2m &s2m = *reinterpret_cast<_g4_t_s2m *>(_g4_sf + 20u);
  _g4_t_s2n &s2n = *reinterpret_cast<_g4_t_s2n *>(_g4_sf + 20u);
  _g4_t_s2o &s2o = *reinterpret_cast<_g4_t_s2o *>(_g4_sf + 20u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 24u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 43u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 44u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 48u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 52u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 56u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 140u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 156u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 172u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 188u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 204u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 220u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 236u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 252u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 268u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 284u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 300u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 316u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 332u);
  _g4_t_v331 &v331 = *reinterpret_cast<_g4_t_v331 *>(_g4_sf + 348u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 364u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 380u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 396u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 412u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 428u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 444u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 460u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 476u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 492u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 508u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 524u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 540u);
  _g4_t_v344 &v344 = *reinterpret_cast<_g4_t_v344 *>(_g4_sf + 556u);
  _g4_t_v345 &v345 = *reinterpret_cast<_g4_t_v345 *>(_g4_sf + 572u);
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 588u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 604u);
  _g4_t_v348 &v348 = *reinterpret_cast<_g4_t_v348 *>(_g4_sf + 620u);
  _g4_t_v349 &v349 = *reinterpret_cast<_g4_t_v349 *>(_g4_sf + 636u);
  _g4_t_v350 &v350 = *reinterpret_cast<_g4_t_v350 *>(_g4_sf + 652u);
  _g4_t_v351 &v351 = *reinterpret_cast<_g4_t_v351 *>(_g4_sf + 668u);
  _g4_t_v352 &v352 = *reinterpret_cast<_g4_t_v352 *>(_g4_sf + 684u);
  _g4_t_v353 &v353 = *reinterpret_cast<_g4_t_v353 *>(_g4_sf + 700u);
  _g4_t_v354 &v354 = *reinterpret_cast<_g4_t_v354 *>(_g4_sf + 716u);
  _g4_t_v355 &v355 = *reinterpret_cast<_g4_t_v355 *>(_g4_sf + 732u);
  _g4_t_v356 &v356 = *reinterpret_cast<_g4_t_v356 *>(_g4_sf + 748u);
  _g4_t_v357 &v357 = *reinterpret_cast<_g4_t_v357 *>(_g4_sf + 764u);
  _g4_t_v358 &v358 = *reinterpret_cast<_g4_t_v358 *>(_g4_sf + 780u);
  _g4_t_v359 &v359 = *reinterpret_cast<_g4_t_v359 *>(_g4_sf + 796u);
  _g4_t_v360 &v360 = *reinterpret_cast<_g4_t_v360 *>(_g4_sf + 812u);
  _g4_t_v361 &v361 = *reinterpret_cast<_g4_t_v361 *>(_g4_sf + 828u);
  _g4_t_v362 &v362 = *reinterpret_cast<_g4_t_v362 *>(_g4_sf + 844u);
  _g4_t_v363 &v363 = *reinterpret_cast<_g4_t_v363 *>(_g4_sf + 860u);
  _g4_t_v364 &v364 = *reinterpret_cast<_g4_t_v364 *>(_g4_sf + 876u);
  _g4_t_v365 &v365 = *reinterpret_cast<_g4_t_v365 *>(_g4_sf + 892u);
  _g4_t_v366 &v366 = *reinterpret_cast<_g4_t_v366 *>(_g4_sf + 904u);
  _g4_t_v367 &v367 = *reinterpret_cast<_g4_t_v367 *>(_g4_sf + 908u);
  _g4_t_v368 &v368 = *reinterpret_cast<_g4_t_v368 *>(_g4_sf + 912u);
  _g4_t_v369 &v369 = *reinterpret_cast<_g4_t_v369 *>(_g4_sf + 924u);
  _g4_t_v370 &v370 = *reinterpret_cast<_g4_t_v370 *>(_g4_sf + 928u);
  _g4_t_v371 &v371 = *reinterpret_cast<_g4_t_v371 *>(_g4_sf + 940u);
  _g4_t_v372 &v372 = *reinterpret_cast<_g4_t_v372 *>(_g4_sf + 944u);
  _g4_t_v373 &v373 = *reinterpret_cast<_g4_t_v373 *>(_g4_sf + 956u);
  _g4_t_v374 &v374 = *reinterpret_cast<_g4_t_v374 *>(_g4_sf + 960u);
  _g4_t_v375 &v375 = *reinterpret_cast<_g4_t_v375 *>(_g4_sf + 972u);
  _g4_t_v376 &v376 = *reinterpret_cast<_g4_t_v376 *>(_g4_sf + 976u);
  _g4_t_v377 &v377 = *reinterpret_cast<_g4_t_v377 *>(_g4_sf + 988u);
  _g4_t_v378 &v378 = *reinterpret_cast<_g4_t_v378 *>(_g4_sf + 992u);
  _g4_t_v379 &v379 = *reinterpret_cast<_g4_t_v379 *>(_g4_sf + 1004u);
  _g4_t_v380 &v380 = *reinterpret_cast<_g4_t_v380 *>(_g4_sf + 1008u);
  _g4_t_v381 &v381 = *reinterpret_cast<_g4_t_v381 *>(_g4_sf + 1020u);
  _g4_t_v382 &v382 = *reinterpret_cast<_g4_t_v382 *>(_g4_sf + 1024u);
  _g4_t_v383 &v383 = *reinterpret_cast<_g4_t_v383 *>(_g4_sf + 1036u);
  _g4_t_v384 &v384 = *reinterpret_cast<_g4_t_v384 *>(_g4_sf + 1040u);
  _g4_t_v385 &v385 = *reinterpret_cast<_g4_t_v385 *>(_g4_sf + 1052u);
  _g4_t_v386 &v386 = *reinterpret_cast<_g4_t_v386 *>(_g4_sf + 1056u);
  _g4_t_v387 &v387 = *reinterpret_cast<_g4_t_v387 *>(_g4_sf + 1068u);
  _g4_t_v388 &v388 = *reinterpret_cast<_g4_t_v388 *>(_g4_sf + 1072u);
  _g4_t_v389 &v389 = *reinterpret_cast<_g4_t_v389 *>(_g4_sf + 1084u);
  _g4_t_v390 &v390 = *reinterpret_cast<_g4_t_v390 *>(_g4_sf + 1088u);
  _g4_t_v391 &v391 = *reinterpret_cast<_g4_t_v391 *>(_g4_sf + 1100u);
  _g4_t_v392 &v392 = *reinterpret_cast<_g4_t_v392 *>(_g4_sf + 1104u);
  _g4_t_v393 &v393 = *reinterpret_cast<_g4_t_v393 *>(_g4_sf + 1116u);
  _g4_t_v394 &v394 = *reinterpret_cast<_g4_t_v394 *>(_g4_sf + 1120u);
  _g4_t_v395 &v395 = *reinterpret_cast<_g4_t_v395 *>(_g4_sf + 1132u);
  _g4_t_v396 &v396 = *reinterpret_cast<_g4_t_v396 *>(_g4_sf + 1136u);
  _g4_t_v397 &v397 = *reinterpret_cast<_g4_t_v397 *>(_g4_sf + 1148u);
  _g4_t_v398 &v398 = *reinterpret_cast<_g4_t_v398 *>(_g4_sf + 1152u);
  _g4_t_v399 &v399 = *reinterpret_cast<_g4_t_v399 *>(_g4_sf + 1164u);

  v399[10] = (uint32_t)(uintptr_t)&self;
  v277 = a2;
  s1 = self;
  v2 = strlen((const char *)self);
  g4_std::string::assign((int)(uintptr_t)v277, s1, v2);
  InAppBilling::getItemTypeByID((InAppBilling::Self *)&v366, s1);
  g4_std::string::assign_str(v277 + 4, &v366);
  v3 = (void *)(v366 - 12);
  if ( (void *)(v366 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v366 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  Char = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 47);
  InAppBilling::getAttByID((InAppBilling::Self *)v319, s1, Char);
  v5 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 47);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v318, v5, (int)(uintptr_t)&v313);
  v278 = v277 + 12;
  v6 = *((uint32_t *)v277 + 4);
  if ( v6 == 0 )
  {
    v281 = (int)(uintptr_t)(v277 + 12);
LABEL_276:
    v350 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v367, v318);
    g4_std::string::construct_copy(v368, &v350);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v281, (const void **)&v367);
    v281 = v312[0];
    v213 = (void *)(v368[0] - 12);
    if ( (void *)(v368[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v368[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v213);
    }
    v214 = v367 - 3;
    if ( v367 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v367 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v214);
    v215 = v350 - 3;
    if ( v350 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v350 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v215);
    goto LABEL_17;
  }
  s2 = (void *)v318[0];
  v281 = (int)(uintptr_t)(v277 + 12);
  v7 = *(uint32_t *)(v318[0] - 12);
  do
  {
    while ( 1 )
    {
      v8 = v7;
      v9 = *(uint32_t *)(*(uint32_t *)(v6 + 16) - 12);
      n = v7;
      if ( v9 <= v7 )
        v8 = *(uint32_t *)(*(uint32_t *)(v6 + 16) - 12);
      v10 = memcmp(*(const void **)(v6 + 16), s2, v8);
      v7 = n;
      v11 = v9 - n;
      if ( v10 == 0 )
        v10 = v11;
      if ( v10 < 0 )
        break;
      v281 = v6;
      v6 = *(uint32_t *)(v6 + 8);
      if ( v6 == 0 )
        goto LABEL_11;
    }
    v6 = *(uint32_t *)(v6 + 12);
  }
  while ( v6 != 0 );
LABEL_11:
  if ( v278 == (const char *)v281 )
    goto LABEL_276;
  v12 = n;
  v13 = *(uint32_t *)(*(uint32_t *)(v281 + 16) - 12);
  if ( v13 <= n )
    v12 = *(uint32_t *)(*(uint32_t *)(v281 + 16) - 12);
  v14 = memcmp(s2, *(const void **)(v281 + 16), v12);
  if ( v14 == 0 )
    v14 = n - v13;
  if ( v14 < 0 )
    goto LABEL_276;
LABEL_17:
  g4_std::string::assign_str(v281 + 20, v319);
  v15 = (void *)(v318[0] - 12);
  if ( (void *)(v318[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v318[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  v16 = (void *)(v319[0] - 12);
  if ( (void *)(v319[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v319[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  v17 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 89);
  InAppBilling::getAttByID((InAppBilling::Self *)v321, s1, v17);
  v18 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 89);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v320, v18, (int)(uintptr_t)&v314);
  v19 = *((uint32_t *)v277 + 4);
  if ( v19 == 0 )
  {
    v282 = (int)(uintptr_t)(v277 + 12);
LABEL_282:
    v351 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v369, v320);
    g4_std::string::construct_copy(v370, &v351);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v282, (const void **)&v369);
    v282 = v312[0];
    v216 = (void *)(v370[0] - 12);
    if ( (void *)(v370[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v370[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v216);
    }
    v217 = v369 - 3;
    if ( v369 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v369 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v217);
    v218 = v351 - 3;
    if ( v351 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v351 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v218);
    goto LABEL_34;
  }
  s2a = (void *)v320[0];
  v282 = (int)(uintptr_t)(v277 + 12);
  v20 = *(uint32_t *)(v320[0] - 12);
  do
  {
    while ( 1 )
    {
      v21 = v20;
      v22 = *(uint32_t *)(*(uint32_t *)(v19 + 16) - 12);
      na = v20;
      if ( v22 <= v20 )
        v21 = *(uint32_t *)(*(uint32_t *)(v19 + 16) - 12);
      v23 = memcmp(*(const void **)(v19 + 16), s2a, v21);
      v20 = na;
      v24 = v22 - na;
      if ( v23 == 0 )
        v23 = v24;
      if ( v23 < 0 )
        break;
      v282 = v19;
      v19 = *(uint32_t *)(v19 + 8);
      if ( v19 == 0 )
        goto LABEL_28;
    }
    v19 = *(uint32_t *)(v19 + 12);
  }
  while ( v19 != 0 );
LABEL_28:
  if ( v278 == (const char *)v282 )
    goto LABEL_282;
  v25 = na;
  v26 = *(uint32_t *)(*(uint32_t *)(v282 + 16) - 12);
  if ( v26 <= na )
    v25 = *(uint32_t *)(*(uint32_t *)(v282 + 16) - 12);
  v27 = memcmp(s2a, *(const void **)(v282 + 16), v25);
  if ( v27 == 0 )
    v27 = na - v26;
  if ( v27 < 0 )
    goto LABEL_282;
LABEL_34:
  g4_std::string::assign_str(v282 + 20, v321);
  v28 = (void *)(v320[0] - 12);
  if ( (void *)(v320[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v320[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v28);
  }
  v29 = (void *)(v321[0] - 12);
  if ( (void *)(v321[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v321[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v29);
  }
  v30 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 90);
  InAppBilling::getAttByID((InAppBilling::Self *)v323, s1, v30);
  v31 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 90);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v322, v31, (int)(uintptr_t)&v314 + 1);
  v32 = *((uint32_t *)v277 + 4);
  if ( v32 == 0 )
  {
    v283 = (int)(uintptr_t)(v277 + 12);
LABEL_288:
    v352 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v371, v322);
    g4_std::string::construct_copy(v372, &v352);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v283, (const void **)&v371);
    v283 = v312[0];
    v219 = (void *)(v372[0] - 12);
    if ( (void *)(v372[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v372[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v219);
    }
    v220 = v371 - 3;
    if ( v371 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v371 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v220);
    v221 = v352 - 3;
    if ( v352 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v352 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v221);
    goto LABEL_51;
  }
  s2b = (void *)v322[0];
  v283 = (int)(uintptr_t)(v277 + 12);
  v33 = *(uint32_t *)(v322[0] - 12);
  do
  {
    while ( 1 )
    {
      v34 = v33;
      v35 = *(uint32_t *)(*(uint32_t *)(v32 + 16) - 12);
      nb = v33;
      if ( v35 <= v33 )
        v34 = *(uint32_t *)(*(uint32_t *)(v32 + 16) - 12);
      v36 = memcmp(*(const void **)(v32 + 16), s2b, v34);
      v33 = nb;
      v37 = v35 - nb;
      if ( v36 == 0 )
        v36 = v37;
      if ( v36 < 0 )
        break;
      v283 = v32;
      v32 = *(uint32_t *)(v32 + 8);
      if ( v32 == 0 )
        goto LABEL_45;
    }
    v32 = *(uint32_t *)(v32 + 12);
  }
  while ( v32 != 0 );
LABEL_45:
  if ( v278 == (const char *)v283 )
    goto LABEL_288;
  v38 = nb;
  v39 = *(uint32_t *)(*(uint32_t *)(v283 + 16) - 12);
  if ( v39 <= nb )
    v38 = *(uint32_t *)(*(uint32_t *)(v283 + 16) - 12);
  v40 = memcmp(s2b, *(const void **)(v283 + 16), v38);
  if ( v40 == 0 )
    v40 = nb - v39;
  if ( v40 < 0 )
    goto LABEL_288;
LABEL_51:
  g4_std::string::assign_str(v283 + 20, v323);
  v41 = (void *)(v322[0] - 12);
  if ( (void *)(v322[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v322[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v41);
  }
  v42 = (void *)(v323[0] - 12);
  if ( (void *)(v323[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v323[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v42);
  }
  v43 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 48);
  InAppBilling::getAttByID((InAppBilling::Self *)v325, s1, v43);
  v44 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 48);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v324, v44, (int)(uintptr_t)&v314 + 2);
  v45 = *((uint32_t *)v277 + 4);
  if ( v45 == 0 )
  {
    v284 = (int)(uintptr_t)(v277 + 12);
LABEL_294:
    v353 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v373, v324);
    g4_std::string::construct_copy(v374, &v353);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v284, (const void **)&v373);
    v284 = v312[0];
    v222 = (void *)(v374[0] - 12);
    if ( (void *)(v374[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v374[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v222);
    }
    v223 = v373 - 3;
    if ( v373 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v373 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v223);
    v224 = v353 - 3;
    if ( v353 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v353 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v224);
    goto LABEL_68;
  }
  s2c = (void *)v324[0];
  v284 = (int)(uintptr_t)(v277 + 12);
  v46 = *(uint32_t *)(v324[0] - 12);
  do
  {
    while ( 1 )
    {
      v47 = *(uint32_t *)(*(uint32_t *)(v45 + 16) - 12);
      v48 = v47;
      nc = v46;
      if ( v46 <= v47 )
        v48 = v46;
      v49 = memcmp(*(const void **)(v45 + 16), s2c, v48);
      v46 = nc;
      v50 = v47 - nc;
      if ( v49 == 0 )
        v49 = v50;
      if ( v49 < 0 )
        break;
      v284 = v45;
      v45 = *(uint32_t *)(v45 + 8);
      if ( v45 == 0 )
        goto LABEL_62;
    }
    v45 = *(uint32_t *)(v45 + 12);
  }
  while ( v45 != 0 );
LABEL_62:
  if ( v278 == (const char *)v284 )
    goto LABEL_294;
  v51 = *(uint32_t *)(*(uint32_t *)(v284 + 16) - 12);
  v52 = v51;
  if ( nc <= v51 )
    v52 = nc;
  v53 = memcmp(s2c, *(const void **)(v284 + 16), v52);
  if ( v53 == 0 )
    v53 = nc - v51;
  if ( v53 < 0 )
    goto LABEL_294;
LABEL_68:
  g4_std::string::assign_str(v284 + 20, v325);
  v54 = (void *)(v324[0] - 12);
  if ( (void *)(v324[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v324[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v54);
  }
  v55 = (void *)(v325[0] - 12);
  if ( (void *)(v325[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v325[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v55);
  }
  v56 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 94);
  InAppBilling::getAttByID((InAppBilling::Self *)v327, s1, v56);
  v57 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 94);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v326, v57, (int)(uintptr_t)&v314 + 3);
  v58 = *((uint32_t *)v277 + 4);
  if ( v58 == 0 )
  {
    v285 = (int)(uintptr_t)(v277 + 12);
LABEL_300:
    v354 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v375, v326);
    g4_std::string::construct_copy(v376, &v354);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v285, (const void **)&v375);
    v285 = v312[0];
    v225 = (void *)(v376[0] - 12);
    if ( (void *)(v376[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v376[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v225);
    }
    v226 = v375 - 3;
    if ( v375 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v375 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v226);
    v227 = v354 - 3;
    if ( v354 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v354 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v227);
    goto LABEL_85;
  }
  s2d = (void *)v326[0];
  v285 = (int)(uintptr_t)(v277 + 12);
  v59 = *(uint32_t *)(v326[0] - 12);
  do
  {
    while ( 1 )
    {
      v60 = *(uint32_t *)(*(uint32_t *)(v58 + 16) - 12);
      v61 = v60;
      nd = v59;
      if ( v59 <= v60 )
        v61 = v59;
      v62 = memcmp(*(const void **)(v58 + 16), s2d, v61);
      v59 = nd;
      v63 = v60 - nd;
      if ( v62 == 0 )
        v62 = v63;
      if ( v62 < 0 )
        break;
      v285 = v58;
      v58 = *(uint32_t *)(v58 + 8);
      if ( v58 == 0 )
        goto LABEL_79;
    }
    v58 = *(uint32_t *)(v58 + 12);
  }
  while ( v58 != 0 );
LABEL_79:
  if ( v278 == (const char *)v285 )
    goto LABEL_300;
  v64 = *(uint32_t *)(*(uint32_t *)(v285 + 16) - 12);
  v65 = v64;
  if ( nd <= v64 )
    v65 = nd;
  v66 = memcmp(s2d, *(const void **)(v285 + 16), v65);
  if ( v66 == 0 )
    v66 = nd - v64;
  if ( v66 < 0 )
    goto LABEL_300;
LABEL_85:
  g4_std::string::assign_str(v285 + 20, v327);
  v67 = (void *)(v326[0] - 12);
  if ( (void *)(v326[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v326[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v67);
  }
  v68 = (void *)(v327[0] - 12);
  if ( (void *)(v327[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v327[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v68);
  }
  v69 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 95);
  InAppBilling::getAttByID((InAppBilling::Self *)v329, s1, v69);
  v70 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 95);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v328, v70, (int)(uintptr_t)&v315);
  v71 = *((uint32_t *)v277 + 4);
  if ( v71 == 0 )
  {
    v286 = (int)(uintptr_t)(v277 + 12);
LABEL_306:
    v355 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v377, v328);
    g4_std::string::construct_copy(v378, &v355);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v286, (const void **)&v377);
    v286 = v312[0];
    v228 = (void *)(v378[0] - 12);
    if ( (void *)(v378[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v378[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v228);
    }
    v229 = v377 - 3;
    if ( v377 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v377 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v229);
    v230 = v355 - 3;
    if ( v355 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v355 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v230);
    goto LABEL_102;
  }
  s2e = (void *)v328[0];
  v286 = (int)(uintptr_t)(v277 + 12);
  v72 = *(uint32_t *)(v328[0] - 12);
  do
  {
    while ( 1 )
    {
      v73 = *(uint32_t *)(*(uint32_t *)(v71 + 16) - 12);
      v74 = v73;
      ne = v72;
      if ( v72 <= v73 )
        v74 = v72;
      v75 = memcmp(*(const void **)(v71 + 16), s2e, v74);
      v72 = ne;
      v76 = v73 - ne;
      if ( v75 == 0 )
        v75 = v76;
      if ( v75 < 0 )
        break;
      v286 = v71;
      v71 = *(uint32_t *)(v71 + 8);
      if ( v71 == 0 )
        goto LABEL_96;
    }
    v71 = *(uint32_t *)(v71 + 12);
  }
  while ( v71 != 0 );
LABEL_96:
  if ( v278 == (const char *)v286 )
    goto LABEL_306;
  v77 = *(uint32_t *)(*(uint32_t *)(v286 + 16) - 12);
  v78 = v77;
  if ( ne <= v77 )
    v78 = ne;
  v79 = memcmp(s2e, *(const void **)(v286 + 16), v78);
  if ( v79 == 0 )
    v79 = ne - v77;
  if ( v79 < 0 )
    goto LABEL_306;
LABEL_102:
  g4_std::string::assign_str(v286 + 20, v329);
  v80 = (void *)(v328[0] - 12);
  if ( (void *)(v328[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v328[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v80);
  }
  v81 = (void *)(v329[0] - 12);
  if ( (void *)(v329[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v329[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v81);
  }
  v82 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 96);
  InAppBilling::getAttByID((InAppBilling::Self *)v331, s1, v82);
  v83 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 96);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v330, v83, (int)(uintptr_t)&v315 + 1);
  v84 = *((uint32_t *)v277 + 4);
  if ( v84 == 0 )
  {
    v287 = (int)(uintptr_t)(v277 + 12);
LABEL_312:
    v356 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v379, v330);
    g4_std::string::construct_copy(v380, &v356);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v287, (const void **)&v379);
    v287 = v312[0];
    v231 = (void *)(v380[0] - 12);
    if ( (void *)(v380[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v380[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v231);
    }
    v232 = v379 - 3;
    if ( v379 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v379 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v232);
    v233 = v356 - 3;
    if ( v356 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v356 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v233);
    goto LABEL_119;
  }
  s2f = (void *)v330[0];
  v287 = (int)(uintptr_t)(v277 + 12);
  v85 = *(uint32_t *)(v330[0] - 12);
  do
  {
    while ( 1 )
    {
      v86 = *(uint32_t *)(*(uint32_t *)(v84 + 16) - 12);
      v87 = v86;
      nf = v85;
      if ( v85 <= v86 )
        v87 = v85;
      v88 = memcmp(*(const void **)(v84 + 16), s2f, v87);
      v85 = nf;
      v89 = v86 - nf;
      if ( v88 == 0 )
        v88 = v89;
      if ( v88 < 0 )
        break;
      v287 = v84;
      v84 = *(uint32_t *)(v84 + 8);
      if ( v84 == 0 )
        goto LABEL_113;
    }
    v84 = *(uint32_t *)(v84 + 12);
  }
  while ( v84 != 0 );
LABEL_113:
  if ( v278 == (const char *)v287 )
    goto LABEL_312;
  v90 = *(uint32_t *)(*(uint32_t *)(v287 + 16) - 12);
  v91 = v90;
  if ( nf <= v90 )
    v91 = nf;
  v92 = memcmp(s2f, *(const void **)(v287 + 16), v91);
  if ( v92 == 0 )
    v92 = nf - v90;
  if ( v92 < 0 )
    goto LABEL_312;
LABEL_119:
  g4_std::string::assign_str(v287 + 20, v331);
  v93 = (void *)(v330[0] - 12);
  if ( (void *)(v330[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v330[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v93);
  }
  v94 = (void *)(v331[0] - 12);
  if ( (void *)(v331[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v331[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v94);
  }
  v95 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 85);
  InAppBilling::getAttByID((InAppBilling::Self *)v333, s1, v95);
  v96 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 85);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v332, v96, (int)(uintptr_t)&v315 + 2);
  v97 = *((uint32_t *)v277 + 4);
  if ( v97 == 0 )
  {
    v288 = (int)(uintptr_t)(v277 + 12);
LABEL_318:
    v357 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v381, v332);
    g4_std::string::construct_copy(v382, &v357);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v288, (const void **)&v381);
    v288 = v312[0];
    v234 = (void *)(v382[0] - 12);
    if ( (void *)(v382[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v382[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v234);
    }
    v235 = v381 - 3;
    if ( v381 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v381 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v235);
    v236 = v357 - 3;
    if ( v357 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v357 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v236);
    goto LABEL_136;
  }
  s2g = (void *)v332[0];
  v288 = (int)(uintptr_t)(v277 + 12);
  v98 = *(uint32_t *)(v332[0] - 12);
  do
  {
    while ( 1 )
    {
      v99 = *(uint32_t *)(*(uint32_t *)(v97 + 16) - 12);
      v100 = v99;
      ng = v98;
      if ( v98 <= v99 )
        v100 = v98;
      v101 = memcmp(*(const void **)(v97 + 16), s2g, v100);
      v98 = ng;
      v102 = v99 - ng;
      if ( v101 == 0 )
        v101 = v102;
      if ( v101 < 0 )
        break;
      v288 = v97;
      v97 = *(uint32_t *)(v97 + 8);
      if ( v97 == 0 )
        goto LABEL_130;
    }
    v97 = *(uint32_t *)(v97 + 12);
  }
  while ( v97 != 0 );
LABEL_130:
  if ( (const char *)v288 == v278 )
    goto LABEL_318;
  v103 = *(uint32_t *)(*(uint32_t *)(v288 + 16) - 12);
  v104 = v103;
  if ( ng <= v103 )
    v104 = ng;
  v105 = memcmp(s2g, *(const void **)(v288 + 16), v104);
  if ( v105 == 0 )
    v105 = ng - v103;
  if ( v105 < 0 )
    goto LABEL_318;
LABEL_136:
  g4_std::string::assign_str(v288 + 20, v333);
  v106 = (void *)(v332[0] - 12);
  if ( (void *)(v332[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v332[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v106);
  }
  v107 = (void *)(v333[0] - 12);
  if ( (void *)(v333[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v333[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v107);
  }
  v108 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 103);
  InAppBilling::getAttByID((InAppBilling::Self *)v335, s1, v108);
  v109 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 103);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v334, v109, (int)(uintptr_t)&v315 + 3);
  v110 = *((uint32_t *)v277 + 4);
  if ( v110 == 0 )
  {
    v289 = (int)(uintptr_t)(v277 + 12);
LABEL_324:
    v358 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v383, v334);
    g4_std::string::construct_copy(v384, &v358);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v289, (const void **)&v383);
    v289 = v312[0];
    v237 = (void *)(v384[0] - 12);
    if ( (void *)(v384[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v384[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v237);
    }
    v238 = v383 - 3;
    if ( v383 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v383 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v238);
    v239 = v358 - 3;
    if ( v358 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v358 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v239);
    goto LABEL_153;
  }
  s2h = (void *)v334[0];
  v289 = (int)(uintptr_t)(v277 + 12);
  v111 = *(uint32_t *)(v334[0] - 12);
  do
  {
    while ( 1 )
    {
      v112 = *(uint32_t *)(*(uint32_t *)(v110 + 16) - 12);
      v113 = v112;
      nh = v111;
      if ( v111 <= v112 )
        v113 = v111;
      v114 = memcmp(*(const void **)(v110 + 16), s2h, v113);
      v111 = nh;
      v115 = v112 - nh;
      if ( v114 == 0 )
        v114 = v115;
      if ( v114 < 0 )
        break;
      v289 = v110;
      v110 = *(uint32_t *)(v110 + 8);
      if ( v110 == 0 )
        goto LABEL_147;
    }
    v110 = *(uint32_t *)(v110 + 12);
  }
  while ( v110 != 0 );
LABEL_147:
  if ( v278 == (const char *)v289 )
    goto LABEL_324;
  v116 = *(uint32_t *)(*(uint32_t *)(v289 + 16) - 12);
  v117 = v116;
  if ( nh <= v116 )
    v117 = nh;
  v118 = memcmp(s2h, *(const void **)(v289 + 16), v117);
  if ( v118 == 0 )
    v118 = nh - v116;
  if ( v118 < 0 )
    goto LABEL_324;
LABEL_153:
  g4_std::string::assign_str(v289 + 20, v335);
  v119 = (void *)(v334[0] - 12);
  if ( (void *)(v334[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v334[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v119);
  }
  v120 = (void *)(v335[0] - 12);
  if ( (void *)(v335[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v335[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v120);
  }
  v121 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 58);
  InAppBilling::getBillingAttByID((InAppBilling::Self *)v337, s1, v121);
  v122 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 58);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v336, v122, (int)(uintptr_t)&v316);
  v123 = *((uint32_t *)v277 + 4);
  if ( v123 == 0 )
  {
    v290 = (int)(uintptr_t)(v277 + 12);
LABEL_330:
    v359 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v385, v336);
    g4_std::string::construct_copy(v386, &v359);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v290, (const void **)&v385);
    v290 = v312[0];
    v240 = (void *)(v386[0] - 12);
    if ( (void *)(v386[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v386[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v240);
    }
    v241 = v385 - 3;
    if ( v385 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v385 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v241);
    v242 = v359 - 3;
    if ( v359 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v359 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v242);
    goto LABEL_170;
  }
  s2i = (void *)v336[0];
  v290 = (int)(uintptr_t)(v277 + 12);
  v124 = *(uint32_t *)(v336[0] - 12);
  do
  {
    while ( 1 )
    {
      v125 = *(uint32_t *)(*(uint32_t *)(v123 + 16) - 12);
      v126 = v125;
      ni = v124;
      if ( v124 <= v125 )
        v126 = v124;
      v127 = memcmp(*(const void **)(v123 + 16), s2i, v126);
      v124 = ni;
      v128 = v125 - ni;
      if ( v127 == 0 )
        v127 = v128;
      if ( v127 < 0 )
        break;
      v290 = v123;
      v123 = *(uint32_t *)(v123 + 8);
      if ( v123 == 0 )
        goto LABEL_164;
    }
    v123 = *(uint32_t *)(v123 + 12);
  }
  while ( v123 != 0 );
LABEL_164:
  if ( v278 == (const char *)v290 )
    goto LABEL_330;
  v129 = *(uint32_t *)(*(uint32_t *)(v290 + 16) - 12);
  v130 = v129;
  if ( ni <= v129 )
    v130 = ni;
  v131 = memcmp(s2i, *(const void **)(v290 + 16), v130);
  if ( v131 == 0 )
    v131 = ni - v129;
  if ( v131 < 0 )
    goto LABEL_330;
LABEL_170:
  g4_std::string::assign_str(v290 + 20, v337);
  v132 = (void *)(v336[0] - 12);
  if ( (void *)(v336[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v336[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v132);
  }
  v133 = (void *)(v337[0] - 12);
  if ( (void *)(v337[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v337[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v133);
  }
  v134 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 87);
  InAppBilling::getBillingAttByID((InAppBilling::Self *)v339, s1, v134);
  v135 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 87);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v338, v135, (int)(uintptr_t)&v316 + 1);
  v136 = *((uint32_t *)v277 + 4);
  if ( v136 == 0 )
  {
    v291 = (int)(uintptr_t)(v277 + 12);
LABEL_336:
    v360 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v387, v338);
    g4_std::string::construct_copy(v388, &v360);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v291, (const void **)&v387);
    v291 = v312[0];
    v243 = (void *)(v388[0] - 12);
    if ( (void *)(v388[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v388[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v243);
    }
    v244 = v387 - 3;
    if ( v387 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v387 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v244);
    v245 = v360 - 3;
    if ( v360 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v360 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v245);
    goto LABEL_187;
  }
  s2j = (void *)v338[0];
  v291 = (int)(uintptr_t)(v277 + 12);
  v137 = *(uint32_t *)(v338[0] - 12);
  do
  {
    while ( 1 )
    {
      v138 = *(uint32_t *)(*(uint32_t *)(v136 + 16) - 12);
      v139 = v138;
      nj = v137;
      if ( v137 <= v138 )
        v139 = v137;
      v140 = memcmp(*(const void **)(v136 + 16), s2j, v139);
      v137 = nj;
      v141 = v138 - nj;
      if ( v140 == 0 )
        v140 = v141;
      if ( v140 < 0 )
        break;
      v291 = v136;
      v136 = *(uint32_t *)(v136 + 8);
      if ( v136 == 0 )
        goto LABEL_181;
    }
    v136 = *(uint32_t *)(v136 + 12);
  }
  while ( v136 != 0 );
LABEL_181:
  if ( v278 == (const char *)v291 )
    goto LABEL_336;
  v142 = *(uint32_t *)(*(uint32_t *)(v291 + 16) - 12);
  v143 = v142;
  if ( nj <= v142 )
    v143 = nj;
  v144 = memcmp(s2j, *(const void **)(v291 + 16), v143);
  if ( v144 == 0 )
    v144 = nj - v142;
  if ( v144 < 0 )
    goto LABEL_336;
LABEL_187:
  g4_std::string::assign_str(v291 + 20, v339);
  v145 = (void *)(v338[0] - 12);
  if ( (void *)(v338[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v338[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v145);
  }
  v146 = (void *)(v339[0] - 12);
  if ( (void *)(v339[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v339[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v146);
  }
  v147 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 59);
  InAppBilling::getBillingAttByID((InAppBilling::Self *)v341, s1, v147);
  v148 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 59);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v340, v148, (int)(uintptr_t)&v316 + 2);
  v149 = *((uint32_t *)v277 + 4);
  if ( v149 == 0 )
  {
    v292 = (int)(uintptr_t)(v277 + 12);
LABEL_342:
    v361 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v389, v340);
    g4_std::string::construct_copy(v390, &v361);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v292, (const void **)&v389);
    v292 = v312[0];
    v246 = (void *)(v390[0] - 12);
    if ( (void *)(v390[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v390[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v246);
    }
    v247 = v389 - 3;
    if ( v389 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v389 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v247);
    v248 = v361 - 3;
    if ( v361 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v361 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v248);
    goto LABEL_204;
  }
  s2k = (void *)v340[0];
  v292 = (int)(uintptr_t)(v277 + 12);
  v150 = *(uint32_t *)(v340[0] - 12);
  do
  {
    while ( 1 )
    {
      v151 = *(uint32_t *)(*(uint32_t *)(v149 + 16) - 12);
      v152 = v151;
      nk = v150;
      if ( v150 <= v151 )
        v152 = v150;
      v153 = memcmp(*(const void **)(v149 + 16), s2k, v152);
      v150 = nk;
      v154 = v151 - nk;
      if ( v153 == 0 )
        v153 = v154;
      if ( v153 < 0 )
        break;
      v292 = v149;
      v149 = *(uint32_t *)(v149 + 8);
      if ( v149 == 0 )
        goto LABEL_198;
    }
    v149 = *(uint32_t *)(v149 + 12);
  }
  while ( v149 != 0 );
LABEL_198:
  if ( v278 == (const char *)v292 )
    goto LABEL_342;
  v155 = *(uint32_t *)(*(uint32_t *)(v292 + 16) - 12);
  v156 = v155;
  if ( nk <= v155 )
    v156 = nk;
  v157 = memcmp(s2k, *(const void **)(v292 + 16), v156);
  if ( v157 == 0 )
    v157 = nk - v155;
  if ( v157 < 0 )
    goto LABEL_342;
LABEL_204:
  g4_std::string::assign_str(v292 + 20, v341);
  v158 = (void *)(v340[0] - 12);
  if ( (void *)(v340[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v340[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v158);
  }
  v159 = (void *)(v341[0] - 12);
  if ( (void *)(v341[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v341[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v159);
  }
  v160 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 60);
  InAppBilling::getBillingAttByID((InAppBilling::Self *)v343, s1, v160);
  v161 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 60);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v342, v161, (int)(uintptr_t)&v316 + 3);
  v162 = *((uint32_t *)v277 + 4);
  if ( v162 == 0 )
  {
    v293 = (int)(uintptr_t)(v277 + 12);
LABEL_348:
    v362 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v391, v342);
    g4_std::string::construct_copy(v392, &v362);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v293, (const void **)&v391);
    v293 = v312[0];
    v249 = (void *)(v392[0] - 12);
    if ( (void *)(v392[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v392[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v249);
    }
    v250 = v391 - 3;
    if ( v391 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v391 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v250);
    v251 = v362 - 3;
    if ( v362 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v362 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v251);
    goto LABEL_221;
  }
  s2l = (void *)v342[0];
  v293 = (int)(uintptr_t)(v277 + 12);
  v163 = *(uint32_t *)(v342[0] - 12);
  do
  {
    while ( 1 )
    {
      v164 = v163;
      v165 = *(uint32_t *)(*(uint32_t *)(v162 + 16) - 12);
      nl = v163;
      if ( v165 <= v163 )
        v164 = *(uint32_t *)(*(uint32_t *)(v162 + 16) - 12);
      v166 = memcmp(*(const void **)(v162 + 16), s2l, v164);
      v163 = nl;
      v167 = v165 - nl;
      if ( v166 == 0 )
        v166 = v167;
      if ( v166 < 0 )
        break;
      v293 = v162;
      v162 = *(uint32_t *)(v162 + 8);
      if ( v162 == 0 )
        goto LABEL_215;
    }
    v162 = *(uint32_t *)(v162 + 12);
  }
  while ( v162 != 0 );
LABEL_215:
  if ( (const char *)v293 == v278 )
    goto LABEL_348;
  v168 = nl;
  v169 = *(uint32_t *)(*(uint32_t *)(v293 + 16) - 12);
  if ( v169 <= nl )
    v168 = *(uint32_t *)(*(uint32_t *)(v293 + 16) - 12);
  v170 = memcmp(s2l, *(const void **)(v293 + 16), v168);
  if ( v170 == 0 )
    v170 = nl - v169;
  if ( v170 < 0 )
    goto LABEL_348;
LABEL_221:
  g4_std::string::assign_str(v293 + 20, v343);
  v171 = (void *)(v342[0] - 12);
  if ( (void *)(v342[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v342[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v171);
  }
  v172 = (void *)(v343[0] - 12);
  if ( (void *)(v343[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v343[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v172);
  }
  v173 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 74);
  InAppBilling::getBillingAttByID((InAppBilling::Self *)v345, s1, v173);
  v174 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 74);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v344, v174, (int)(uintptr_t)&v317);
  v175 = *((uint32_t *)v277 + 4);
  if ( v175 == 0 )
  {
    v294 = (int)(uintptr_t)(v277 + 12);
LABEL_354:
    v363 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v393, v344);
    g4_std::string::construct_copy(v394, &v363);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v294, (const void **)&v393);
    v294 = v312[0];
    v252 = (void *)(v394[0] - 12);
    if ( (void *)(v394[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v394[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v252);
    }
    v253 = v393 - 3;
    if ( v393 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v393 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v253);
    v254 = v363 - 3;
    if ( v363 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v363 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v254);
    goto LABEL_238;
  }
  s2m = (void *)v344[0];
  v294 = (int)(uintptr_t)(v277 + 12);
  v176 = *(uint32_t *)(v344[0] - 12);
  do
  {
    while ( 1 )
    {
      v177 = v176;
      v178 = *(uint32_t *)(*(uint32_t *)(v175 + 16) - 12);
      nm = v176;
      if ( v178 <= v176 )
        v177 = *(uint32_t *)(*(uint32_t *)(v175 + 16) - 12);
      v179 = memcmp(*(const void **)(v175 + 16), s2m, v177);
      v176 = nm;
      v180 = v178 - nm;
      if ( v179 == 0 )
        v179 = v180;
      if ( v179 < 0 )
        break;
      v294 = v175;
      v175 = *(uint32_t *)(v175 + 8);
      if ( v175 == 0 )
        goto LABEL_232;
    }
    v175 = *(uint32_t *)(v175 + 12);
  }
  while ( v175 != 0 );
LABEL_232:
  if ( v278 == (const char *)v294 )
    goto LABEL_354;
  v181 = nm;
  v182 = *(uint32_t *)(*(uint32_t *)(v294 + 16) - 12);
  if ( v182 <= nm )
    v181 = *(uint32_t *)(*(uint32_t *)(v294 + 16) - 12);
  v183 = memcmp(s2m, *(const void **)(v294 + 16), v181);
  if ( v183 == 0 )
    v183 = nm - v182;
  if ( v183 < 0 )
    goto LABEL_354;
LABEL_238:
  g4_std::string::assign_str(v294 + 20, v345);
  v184 = (void *)(v344[0] - 12);
  if ( (void *)(v344[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v344[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v184);
  }
  v185 = (void *)(v345[0] - 12);
  if ( (void *)(v345[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v345[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v185);
  }
  v186 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 80);
  InAppBilling::getBillingAttByID((InAppBilling::Self *)v347, s1, v186);
  v187 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 80);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v346, v187, (int)(uintptr_t)&v317 + 1);
  v188 = *((uint32_t *)v277 + 4);
  if ( v188 == 0 )
  {
    v295 = (int)(uintptr_t)(v277 + 12);
LABEL_360:
    v364 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v395, v346);
    g4_std::string::construct_copy(v396, &v364);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, v295, (const void **)&v395);
    v295 = v312[0];
    v255 = (void *)(v396[0] - 12);
    if ( (void *)(v396[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v396[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v255);
    }
    v256 = v395 - 3;
    if ( v395 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v395 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v256);
    v257 = v364 - 3;
    if ( v364 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v364 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v257);
    goto LABEL_255;
  }
  s2n = (void *)v346[0];
  v295 = (int)(uintptr_t)(v277 + 12);
  v189 = *(uint32_t *)(v346[0] - 12);
  do
  {
    while ( 1 )
    {
      v190 = v189;
      v191 = *(uint32_t *)(*(uint32_t *)(v188 + 16) - 12);
      nn = v189;
      if ( v191 <= v189 )
        v190 = *(uint32_t *)(*(uint32_t *)(v188 + 16) - 12);
      v192 = memcmp(*(const void **)(v188 + 16), s2n, v190);
      v189 = nn;
      v193 = v191 - nn;
      if ( v192 == 0 )
        v192 = v193;
      if ( v192 < 0 )
        break;
      v295 = v188;
      v188 = *(uint32_t *)(v188 + 8);
      if ( v188 == 0 )
        goto LABEL_249;
    }
    v188 = *(uint32_t *)(v188 + 12);
  }
  while ( v188 != 0 );
LABEL_249:
  if ( (const char *)v295 == v278 )
    goto LABEL_360;
  v194 = nn;
  v195 = *(uint32_t *)(*(uint32_t *)(v295 + 16) - 12);
  if ( v195 <= nn )
    v194 = *(uint32_t *)(*(uint32_t *)(v295 + 16) - 12);
  v196 = memcmp(s2n, *(const void **)(v295 + 16), v194);
  if ( v196 == 0 )
    v196 = nn - v195;
  if ( v196 < 0 )
    goto LABEL_360;
LABEL_255:
  g4_std::string::assign_str(v295 + 20, v347);
  v197 = (void *)(v346[0] - 12);
  if ( (void *)(v346[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v346[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v197);
  }
  v198 = (void *)(v347[0] - 12);
  if ( (void *)(v347[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v347[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v198);
  }
  v199 = InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 62);
  InAppBilling::getBillingAttByID((InAppBilling::Self *)v349, s1, v199);
  v200 = (char *)InAppBilling::readChar((InAppBilling::Self *)v399, 0x20u, 62);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v348, v200, (int)(uintptr_t)&v317 + 2);
  v201 = *((char **)v277 + 4);
  if ( v201 == nullptr )
  {
    s2o = v277 + 12;
LABEL_366:
    v365 = (volatile int32_t *)&unk_213B814;
    g4_std::string::construct_copy(&v397, v348);
    g4_std::string::construct_copy(v398, &v365);
    sub_4D0FC0(v312, (uint32_t *)v277 + 2, (int)(uintptr_t)s2o, (const void **)&v397);
    s2o = (const char *)v312[0];
    v258 = (void *)(v398[0] - 12);
    if ( (void *)(v398[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v398[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v258);
    }
    v259 = v397 - 3;
    if ( v397 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v397 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v259);
    v260 = v365 - 3;
    if ( v365 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v365 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v260);
    goto LABEL_272;
  }
  s1a = (void *)v348[0];
  s2o = v277 + 12;
  v202 = *(uint32_t *)(v348[0] - 12);
  do
  {
    while ( 1 )
    {
      v203 = v202;
      v204 = *(uint32_t *)(*((uint32_t *)v201 + 4) - 12);
      no = v202;
      if ( v204 <= v202 )
        v203 = *(uint32_t *)(*((uint32_t *)v201 + 4) - 12);
      v205 = memcmp(*((const void **)v201 + 4), s1a, v203);
      v202 = no;
      v206 = v204 - no;
      if ( v205 == 0 )
        v205 = v206;
      if ( v205 < 0 )
        break;
      s2o = v201;
      v201 = *((char **)v201 + 2);
      if ( v201 == nullptr )
        goto LABEL_266;
    }
    v201 = *((char **)v201 + 3);
  }
  while ( v201 != nullptr );
LABEL_266:
  if ( v278 == s2o )
    goto LABEL_366;
  v207 = no;
  v208 = *(uint32_t *)(*((uint32_t *)s2o + 4) - 12);
  if ( v208 <= no )
    v207 = *(uint32_t *)(*((uint32_t *)s2o + 4) - 12);
  v209 = memcmp(s1a, *((const void **)s2o + 4), v207);
  if ( v209 == 0 )
    v209 = no - v208;
  if ( v209 < 0 )
    goto LABEL_366;
LABEL_272:
  g4_std::string::assign_str(s2o + 20, v349);
  v210 = (void *)(v348[0] - 12);
  if ( (void *)(v348[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v348[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v210);
  }
  result = v349[0];
  v212 = (void *)(v349[0] - 12);
  if ( (void *)(v349[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v349[0] - 4), 0xFFFFFFFF) <= 0 )
  {
  {
    g4_std::string::Rep::M_destroy(v212);
    return result;
  }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_GetItemInfoByID  (binary VA: 0x4d6990)
// Original: InAppBilling_GetItemInfoByID
// ----------------------------------------------------------------------------
int InAppBilling_GetItemInfoByID(InAppBilling::Self *a1, const char *a2)
{
  return InAppBilling::getItemInfoByID(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::getShopAttributeByName  (binary VA: 0x4d69c0)
// Original: InAppBilling::getShopAttributeByName
// ----------------------------------------------------------------------------
InAppBilling::Self * InAppBilling::getShopAttributeByName(InAppBilling::Self *self, InAppBilling::Self *a2)
{
  int v2;
  int BArray;
  int v4;
  void *v5;
  InAppBilling::Self **v6;
  int v7;
  unsigned int v8;
  InAppBilling::Self **retaddr;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_Data;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef InAppBilling::Self *_g4_t_v25;
  typedef uint8_t _g4_t_v26[48];
  typedef InAppBilling::Self **_g4_t_v27;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v16)) > _g4_s6 ? (32u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v17)) > _g4_s7 ? (32u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v18)) > _g4_s8 ? (36u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (39u + sizeof(_g4_t_v19)) > _g4_s9 ? (39u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v20)) > _g4_s10 ? (40u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_Data)) > _g4_s11 ? (40u + sizeof(_g4_t_Data)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v22)) > _g4_s12 ? (44u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v23)) > _g4_s13 ? (48u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v24)) > _g4_s14 ? (52u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v25)) > _g4_s15 ? (56u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v26)) > _g4_s16 ? (60u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v27)) > _g4_s17 ? (108u + sizeof(_g4_t_v27)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 39u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_Data &Data = *reinterpret_cast<_g4_t_Data *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);

  v25 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v25, 65542, v10, v11, v12, v13, v14, v15, v16, v18, v20, v22, v23, v24) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v25, 0);
    v19 = 1;
  }
  else
  {
    v19 = 0;
  }
  v2 = InAppBilling::newBundle(v25);
  InAppBilling::bundleClear(v2);
  InAppBilling::readChar((InAppBilling::Self *)v26, 0x20u, 30);
  InAppBilling::bundlePutInt((InAppBilling::Self *)v26, 9, v2);
  InAppBilling::readChar((InAppBilling::Self *)v26, 0x20u, 47);
  InAppBilling::bundlePutString((InAppBilling::Self *)v26, a2, v2);
  Data = InAppBilling::getData(v2);
  InAppBilling::readChar((InAppBilling::Self *)v26, 0x20u, 31);
  BArray = InAppBilling::bundleReadBArray((InAppBilling::Self *)v26, Data);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, (char *)&unk_1B15112, (int)(uintptr_t)&v24 + 3);
  G4_VCALL<void>(v25, 92, Data);
  G4_VCALL<void>(v25, 92, v2);
  if ( BArray != 0 )
  {
    v4 = G4_VCALL<int>(v25, 684, BArray);
    v5 = alloca(v4 + 16);
    v17 = v4;
    memset(&self, 0, v4 + 1);
    retaddr = &self;
    G4_VCALL<void>(v25, 800, BArray, 0, v17);
    G4_VCALL<void>(v25, 92, BArray);
    v6 = &self;
    do
    {
      v7 = (int)(uintptr_t)*v6++;
      v8 = ~v7 & (v7 - 16843009) & 0x80808080;
    }
    while ( v8 == 0 );
    v27 = &self;
    if ( (~v7 & (v7 - 16843009) & 0x8080) == 0 )
    {
      v8 >>= 16;
      v6 = (InAppBilling::Self **)((char *)v6 + 2);
    }
    g4_std::string::assign((int)(uintptr_t)self, v27, (char *)v6 - __CFADD__((uint8_t)v8, (uint8_t)v8) - 3 - (char *)&self);
  }
  if ( v19 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_GetShopAttributeByName  (binary VA: 0x4d6c00)
// Original: InAppBilling_GetShopAttributeByName
// ----------------------------------------------------------------------------
InAppBilling::Self * InAppBilling_GetShopAttributeByName(InAppBilling::Self *a1, InAppBilling::Self *a2)
{
  InAppBilling::getShopAttributeByName(a1, a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::setContext  (binary VA: 0x4d6c40)
// Original: InAppBilling::setContext
// ----------------------------------------------------------------------------
int InAppBilling::setContext(int a1)
{
  int result;
  uint32_t v2[4];

  v2[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v2, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v2, 0);
    InAppBilling::oGameActivity = G4_VCALL<int>(v2[0], 84, a1);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    result = G4_VCALL<int>(v2[0], 84, a1);
    InAppBilling::oGameActivity = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::init  (binary VA: 0x4d6d00)
// Original: InAppBilling::init
// ----------------------------------------------------------------------------
int InAppBilling::init(int a1, int a2)
{
  InAppBilling::Self *v2;
  InAppBilling::Self *v3;
  InAppBilling::Self *v4;
  InAppBilling::Self *v5;
  int result;
  InAppBilling::Self *v7;
  InAppBilling::Self *v8;
  InAppBilling::Self *v9;
  InAppBilling::Self *v10;
  InAppBilling::Self *v11;
  InAppBilling::Self *v12;
  InAppBilling::Self *v13;
  InAppBilling::Self *v14;
  InAppBilling::Self *v15;
  InAppBilling::Self *v16;
  InAppBilling::Self *v17;
  InAppBilling::Self *v18;
  InAppBilling::Self *v19;
  InAppBilling::Self *v20;
  InAppBilling::Self *v21;
  typedef InAppBilling::Self *_g4_t_Char;
  typedef InAppBilling::Self *_g4_t_v23;
  typedef InAppBilling::Self *_g4_t_v24;
  typedef InAppBilling::Self *_g4_t_v25;
  typedef InAppBilling::Self *_g4_t_v26;
  typedef InAppBilling::Self *_g4_t_v27;
  typedef InAppBilling::Self *_g4_t_v28;
  typedef InAppBilling::Self *_g4_t_v29;
  typedef InAppBilling::Self *_g4_t_v30;
  typedef InAppBilling::Self *_g4_t_v31;
  typedef InAppBilling::Self *_g4_t_v32;
  typedef InAppBilling::Self *_g4_t_v33;
  typedef InAppBilling::Self *_g4_t_v34;
  typedef InAppBilling::Self *_g4_t_v35;
  typedef InAppBilling::Self *_g4_t_v36;
  typedef char _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint8_t _g4_t_v39[512];
  typedef uint8_t _g4_t_v40[512];
  typedef uint8_t _g4_t_v41[540];
  enum : size_t {
    _g4_s0 = 1664u,
    _g4_s1 = (8u + sizeof(_g4_t_Char)) > _g4_s0 ? (8u + sizeof(_g4_t_Char)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v25)) > _g4_s3 ? (8u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v26)) > _g4_s4 ? (8u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v27)) > _g4_s5 ? (8u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v28)) > _g4_s6 ? (8u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v29)) > _g4_s7 ? (8u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v30)) > _g4_s8 ? (8u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v31)) > _g4_s9 ? (8u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v32)) > _g4_s10 ? (8u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v33)) > _g4_s11 ? (8u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v34)) > _g4_s12 ? (8u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v35)) > _g4_s13 ? (8u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (8u + sizeof(_g4_t_v36)) > _g4_s14 ? (8u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (15u + sizeof(_g4_t_v37)) > _g4_s15 ? (15u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v38)) > _g4_s16 ? (28u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v39)) > _g4_s17 ? (32u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (544u + sizeof(_g4_t_v40)) > _g4_s18 ? (544u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (1056u + sizeof(_g4_t_v41)) > _g4_s19 ? (1056u + sizeof(_g4_t_v41)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_Char &Char = *reinterpret_cast<_g4_t_Char *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 15u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 544u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 1056u);

  G4_PlatformLog(4, "IAP", "Version [%s]", "2.0.9133");
  v38 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v38, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v38, 0);
    v37 = 1;
  }
  else
  {
    v37 = 0;
  }
  InAppBilling::cIABilling = G4_VCALL<int>(v38, 84, a1);
  Char = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 241);
  v2 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 240);
  InAppBilling::mTotalItems = G4_VCALL<int>(v38, 452, InAppBilling::cIABilling, v2, Char);
  v23 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 247);
  v3 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 246);
  InAppBilling::mGetData = G4_VCALL<int>(v38, 452, InAppBilling::cIABilling, v3, v23);
  v24 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 271);
  v4 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 270);
  InAppBilling::mGetState = G4_VCALL<int>(v38, 452, InAppBilling::cIABilling, v4, v24);
  InAppBilling::setContext(a2);
  v5 = InAppBilling::readChar((InAppBilling::Self *)v41, 0x200u, 220);
  result = G4_VCALL<int>(v38, 24, v5);
  InAppBilling::cIntent = result;
  if ( result != 0 )
  {
    InAppBilling::cIntent = G4_VCALL<int>(v38, 84, result);
    v25 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 225);
    v7 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 224);
    InAppBilling::mIntentInit = G4_VCALL<int>(v38, 132, InAppBilling::cIntent, v7, v25);
    InAppBilling::oIntent = JNIEnv::NewObject(v38, InAppBilling::cIntent, InAppBilling::mIntentInit);
    v26 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 249);
    v8 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 248);
    InAppBilling::mIntentSetClass = G4_VCALL<int>(v38, 132, InAppBilling::cIntent, v8, v26);
    v27 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 249);
    v9 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 250);
    InAppBilling::mIntentPutExtra = G4_VCALL<int>(v38, 132, InAppBilling::cIntent, v9, v27);
    v10 = InAppBilling::readChar((InAppBilling::Self *)v41, 0x200u, 221);
    result = G4_VCALL<int>(v38, 24, v10);
    InAppBilling::cBundle = result;
    if ( result != 0 )
    {
      InAppBilling::cBundle = G4_VCALL<int>(v38, 84, result);
      v28 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 225);
      v11 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 224);
      InAppBilling::mBundleInit = G4_VCALL<int>(v38, 132, InAppBilling::cBundle, v11, v28);
      v29 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 252);
      v12 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 251);
      InAppBilling::mBundlePutString = G4_VCALL<int>(v38, 132, InAppBilling::cBundle, v12, v29);
      v30 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 254);
      v13 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 253);
      InAppBilling::mBundleGetBArrays = G4_VCALL<int>(v38, 132, InAppBilling::cBundle, v13, v30);
      v31 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 256);
      v14 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 255);
      InAppBilling::mBundlePutBArrays = G4_VCALL<int>(v38, 132, InAppBilling::cBundle, v14, v31);
      v32 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 258);
      v15 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 257);
      InAppBilling::mBundleGetInt = G4_VCALL<int>(v38, 132, InAppBilling::cBundle, v15, v32);
      v33 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 260);
      v16 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 259);
      InAppBilling::mBundlePutInt = G4_VCALL<int>(v38, 132, InAppBilling::cBundle, v16, v33);
      v34 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 262);
      v17 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 261);
      InAppBilling::mBundleGetLong = G4_VCALL<int>(v38, 132, InAppBilling::cBundle, v17, v34);
      v35 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 264);
      v18 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 263);
      InAppBilling::mBundlePutLong = G4_VCALL<int>(v38, 132, InAppBilling::cBundle, v18, v35);
      v36 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 266);
      v19 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 265);
      InAppBilling::mBundleContains = G4_VCALL<int>(v38, 132, InAppBilling::cBundle, v19, v36);
      v20 = InAppBilling::readChar((InAppBilling::Self *)v40, 0x200u, 225);
      v21 = InAppBilling::readChar((InAppBilling::Self *)v39, 0x200u, 267);
      result = G4_VCALL<int>(v38, 132, InAppBilling::cBundle, v21, v20);
      InAppBilling::mBundleClear = result;
      if ( v37 == 0 )
        return result;
      return G4_VCALL<int>(AndroidOS_JavaVM, 20);
    }
  }
  if ( v37 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_iab_InAppBilling_nativeInit  (binary VA: 0x4d74f0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_iab_InAppBilling_nativeInit
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_iab_InAppBilling_nativeInit(int a1, int a2, int a3)
{
  return InAppBilling::init(a2, a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_iab_InAppBilling_nativeSetContext  (binary VA: 0x4d7520)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_iab_InAppBilling_nativeSetContext
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_iab_InAppBilling_nativeSetContext(int a1, int a2, int a3)
{
  return InAppBilling::setContext(a3);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::setIABObject  (binary VA: 0x4d7550)
// Original: InAppBilling::setIABObject
// ----------------------------------------------------------------------------
int InAppBilling::setIABObject(int a1)
{
  int result;
  uint32_t v2[4];

  v2[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v2, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v2, 0);
    InAppBilling::oIABilling = G4_VCALL<int>(v2[0], 84, a1);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    result = G4_VCALL<int>(v2[0], 84, a1);
    InAppBilling::oIABilling = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_iab_InAppBilling_nativeSetIABObject  (binary VA: 0x4d7610)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_iab_InAppBilling_nativeSetIABObject
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_iab_InAppBilling_nativeSetIABObject(int a1, int a2, int a3)
{
  return InAppBilling::setIABObject(a3);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::launchInAppBilling  (binary VA: 0x4d7640)
// Original: InAppBilling::launchInAppBilling
// ----------------------------------------------------------------------------
void InAppBilling::launchInAppBilling()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::CallJNIFuncChar  (binary VA: 0x4d7650)
// Original: InAppBilling::CallJNIFuncChar
// ----------------------------------------------------------------------------
int InAppBilling::CallJNIFuncChar(int a1, int a2, void *s, size_t n)
{
  int v4;
  int v5;
  int result;
  typedef char _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v7)) > _g4_s0 ? (15u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 15u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  memset(s, 0, n);
  v4 = JNIEnv::CallStaticObjectMethod(v8[0], a1, a2);
  v5 = G4_VCALL<int>(v8[0], 684, v4);
  G4_VCALL<void>(v8[0], 800, v4, 0, v5, s);
  result = G4_VCALL<int>(v8[0], 92, v4);
  if ( v7 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::CallJNIFuncChar  (binary VA: 0x4d7780)
// Original: InAppBilling::CallJNIFuncChar
// ----------------------------------------------------------------------------
int InAppBilling::CallJNIFuncChar(int a1, int a2, void *s, size_t n, int a5)
{
  int v5;
  int v6;
  int v7;
  int result;
  typedef char _g4_t_v9;
  typedef int _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v9)) > _g4_s0 ? (15u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 15u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v10[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v10, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v10, 0);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  memset(s, 0, n);
  v5 = G4_VCALL<int>(v10[0], 668, a5);
  v6 = JNIEnv::CallStaticObjectMethod(v10[0], a1, a2, v5);
  v7 = G4_VCALL<int>(v10[0], 684, v6);
  G4_VCALL<void>(v10[0], 800, v6, 0, v7, s);
  G4_VCALL<void>(v10[0], 92, v6);
  result = G4_VCALL<int>(v10[0], 92, v5);
  if ( v9 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::CallJNIFuncChar  (binary VA: 0x4d78d0)
// Original: InAppBilling::CallJNIFuncChar
// ----------------------------------------------------------------------------
uint8_t * InAppBilling::CallJNIFuncChar(int a1, int a2, uint8_t *s, size_t n, int a5, int a6)
{
  uint8_t *v6;
  int v7;
  int v8;
  int v9;
  typedef char _g4_t_v11;
  typedef int _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v11)) > _g4_s0 ? (15u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v12)) > _g4_s1 ? (28u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 15u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v12[0] = 0;
  v6 = s;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v12, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v12, 0);
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( n != -1 )
    memset(s, 0, n);
  v7 = G4_VCALL<int>(v12[0], 668, a5);
  v8 = JNIEnv::CallStaticObjectMethod(v12[0], a1, a2, v7, a6);
  G4_VCALL<void>(v12[0], 92, v7);
  if ( v8 != 0 )
  {
    v9 = G4_VCALL<int>(v12[0], 684, v8);
    if ( v9 > 0 )
    {
      if ( n == -1 )
      {
        v6 = (uint8_t *)opNew(1u);
        *v6 = v9 + 1;
        memset(v6, 0, v9 + 1);
      }
      G4_VCALL<void>(v12[0], 800, v8, 0, v9, v6);
      G4_VCALL<void>(v12[0], 92, v8);
    }
  }
  if ( v11 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::CallJNIFuncChar  (binary VA: 0x4d7a60)
// Original: InAppBilling::CallJNIFuncChar
// ----------------------------------------------------------------------------
uint8_t * InAppBilling::CallJNIFuncChar(int a1, int a2, uint8_t *s, size_t n, int a5)
{
  uint8_t *v5;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v10;
  typedef char _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v11)) > _g4_s1 ? (15u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 15u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v12[0] = 0;
  v5 = s;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v12, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v12, 0);
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( n != -1 )
    memset(s, 0, n);
  v6 = JNIEnv::CallStaticObjectMethod(v12[0], a1, a2, a5);
  if ( v6 != 0 )
  {
    v7 = G4_VCALL<int>(v12[0], 684, v6);
    v8 = v7;
    if ( v7 > 0 )
    {
      if ( n == -1 )
      {
        v10 = v7;
        v5 = (uint8_t *)opNew(1u);
        *v5 = v10 + 1;
        memset(v5, 0, v10 + 1);
        v8 = v10;
      }
      G4_VCALL<void>(v12[0], 800, v6, 0, v8, v5);
      G4_VCALL<void>(v12[0], 92, v6);
    }
  }
  if ( v11 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::CallJNIFuncSendChar  (binary VA: 0x4d7bf0)
// Original: InAppBilling::CallJNIFuncSendChar
// ----------------------------------------------------------------------------
int InAppBilling::CallJNIFuncSendChar(int a1, int a2, int a3)
{
  int v3;
  int v5;
  int v6[4];

  v6[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
    v5 = G4_VCALL<int>(v6[0], 668, a3);
    JNIEnv::CallStaticObjectMethod(v6[0], a1, a2, v5);
    G4_VCALL<void>(v6[0], 92, v5);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v3 = G4_VCALL<int>(v6[0], 668, a3);
    JNIEnv::CallStaticObjectMethod(v6[0], a1, a2, v3);
    return G4_VCALL<int>(v6[0], 92, v3);
  }
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::CallJNIFuncSendInt  (binary VA: 0x4d7d10)
// Original: InAppBilling::CallJNIFuncSendInt
// ----------------------------------------------------------------------------
int InAppBilling::CallJNIFuncSendInt(int a1, int a2, int a3)
{
  int v4[4];

  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) != -2 )
    return JNIEnv::CallStaticObjectMethod(v4[0], a1, a2, a3);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  JNIEnv::CallStaticObjectMethod(v4[0], a1, a2, a3);
  return G4_VCALL<int>(AndroidOS_JavaVM, 20);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::CallJNIFuncInt  (binary VA: 0x4d7de0)
// Original: InAppBilling::CallJNIFuncInt
// ----------------------------------------------------------------------------
int InAppBilling::CallJNIFuncInt(int a1, int a2)
{
  int v2;
  int v4[4];

  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) != -2 )
    return sub_4C17B0(v4[0], a1, a2);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  v2 = sub_4C17B0(v4[0], a1, a2);
  G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::getTotalItems  (binary VA: 0x4d7eb0)
// Original: InAppBilling::getTotalItems
// ----------------------------------------------------------------------------
int InAppBilling::getTotalItems()
{
  return InAppBilling::CallJNIFuncInt(InAppBilling::cIABilling, InAppBilling::mTotalItems);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::fillBillingAttArrayByName  (binary VA: 0x4d7ef0)
// Original: InAppBilling::fillBillingAttArrayByName
// ----------------------------------------------------------------------------
int InAppBilling::fillBillingAttArrayByName(InAppBilling::Self *self, char ***a2)
{
  int v2;
  int i;
  int BArray;
  int result;
  typedef int _g4_t_v6;
  typedef int *_g4_t_v7;
  typedef int _g4_t_Data;
  typedef int _g4_t_v9;
  typedef int _g4_t_TotalItems;
  typedef char _g4_t_v11;
  typedef InAppBilling::Self *_g4_t_v12;
  typedef uint8_t _g4_t_v13[60];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_Data)) > _g4_s2 ? (16u + sizeof(_g4_t_Data)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v9)) > _g4_s3 ? (20u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_TotalItems)) > _g4_s4 ? (24u + sizeof(_g4_t_TotalItems)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v11)) > _g4_s5 ? (31u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v12)) > _g4_s6 ? (44u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v13)) > _g4_s7 ? (48u + sizeof(_g4_t_v13)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_Data &Data = *reinterpret_cast<_g4_t_Data *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_TotalItems &TotalItems = *reinterpret_cast<_g4_t_TotalItems *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 31u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);

  v12 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v12, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v12, 0);
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  TotalItems = InAppBilling::getTotalItems();
  *(uint32_t *)self = opNewArray(4 * TotalItems);
  v2 = InAppBilling::newBundle(v12);
  if ( TotalItems > 0 )
  {
    for ( i = 0; i != TotalItems; ++i )
    {
      InAppBilling::bundleClear(v2);
      InAppBilling::readChar((InAppBilling::Self *)v13, 0x20u, 30);
      InAppBilling::bundlePutInt((InAppBilling::Self *)v13, 8, v2);
      InAppBilling::readChar((InAppBilling::Self *)v13, 0x20u, 32);
      InAppBilling::bundlePutInt((InAppBilling::Self *)v13, i, v2);
      InAppBilling::readChar((InAppBilling::Self *)v13, 0x20u, 47);
      InAppBilling::bundlePutString((InAppBilling::Self *)v13, (InAppBilling::Self *)a2, v2);
      Data = InAppBilling::getData(v2);
      InAppBilling::readChar((InAppBilling::Self *)v13, 0x20u, 31);
      BArray = InAppBilling::bundleReadBArray((InAppBilling::Self *)v13, Data);
      if ( BArray != 0 )
      {
        v6 = BArray;
        v9 = G4_VCALL<int>(v12, 684, BArray);
        v7 = (int *)(*(uint32_t *)self + 4 * i);
        *v7 = opNewArray(v9 + 1);
        memset(*(void **)(*(uint32_t *)self + 4 * i), 0, v9 + 1);
        G4_VCALL<void>(v12, 800, v6, 0, v9, *(uint32_t *)(*(uint32_t *)self + 4 * i));
        G4_VCALL<void>(v12, 92, v6);
      }
      G4_VCALL<void>(v12, 92, Data);
    }
  }
  result = G4_VCALL<int>(v12, 92, v2);
  if ( v11 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_FillBillingAttArrayByName  (binary VA: 0x4d8180)
// Original: InAppBilling_FillBillingAttArrayByName
// ----------------------------------------------------------------------------
int InAppBilling_FillBillingAttArrayByName(InAppBilling::Self *a1, char ***a2)
{
  return InAppBilling::fillBillingAttArrayByName(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::fillTypeArray  (binary VA: 0x4d81b0)
// Original: InAppBilling::fillTypeArray
// ----------------------------------------------------------------------------
int InAppBilling::fillTypeArray(InAppBilling::Self *self)
{
  int v1;
  int i;
  int BArray;
  int result;
  typedef int _g4_t_v5;
  typedef int *_g4_t_v6;
  typedef int _g4_t_Data;
  typedef int _g4_t_v8;
  typedef int _g4_t_TotalItems;
  typedef char _g4_t_v10;
  typedef InAppBilling::Self *_g4_t_v11;
  typedef uint8_t _g4_t_v12[60];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_Data)) > _g4_s2 ? (16u + sizeof(_g4_t_Data)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_TotalItems)) > _g4_s4 ? (24u + sizeof(_g4_t_TotalItems)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v10)) > _g4_s5 ? (31u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v11)) > _g4_s6 ? (44u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v12)) > _g4_s7 ? (48u + sizeof(_g4_t_v12)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_Data &Data = *reinterpret_cast<_g4_t_Data *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_TotalItems &TotalItems = *reinterpret_cast<_g4_t_TotalItems *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 31u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);

  v11 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v11, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v11, 0);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  TotalItems = InAppBilling::getTotalItems();
  *(uint32_t *)self = opNewArray(4 * TotalItems);
  v1 = InAppBilling::newBundle(v11);
  if ( TotalItems > 0 )
  {
    for ( i = 0; i != TotalItems; ++i )
    {
      InAppBilling::bundleClear(v1);
      InAppBilling::readChar((InAppBilling::Self *)v12, 0x20u, 30);
      InAppBilling::bundlePutInt((InAppBilling::Self *)v12, 6, v1);
      InAppBilling::readChar((InAppBilling::Self *)v12, 0x20u, 32);
      InAppBilling::bundlePutInt((InAppBilling::Self *)v12, i, v1);
      Data = InAppBilling::getData(v1);
      InAppBilling::readChar((InAppBilling::Self *)v12, 0x20u, 31);
      BArray = InAppBilling::bundleReadBArray((InAppBilling::Self *)v12, Data);
      if ( BArray != 0 )
      {
        v5 = BArray;
        v8 = G4_VCALL<int>(v11, 684, BArray);
        v6 = (int *)(*(uint32_t *)self + 4 * i);
        *v6 = opNewArray(v8 + 1);
        memset(*(void **)(*(uint32_t *)self + 4 * i), 0, v8 + 1);
        G4_VCALL<void>(v11, 800, v5, 0, v8, *(uint32_t *)(*(uint32_t *)self + 4 * i));
        G4_VCALL<void>(v11, 92, v5);
      }
      G4_VCALL<void>(v11, 92, Data);
    }
  }
  result = G4_VCALL<int>(v11, 92, v1);
  if ( v10 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_FillTypeArray  (binary VA: 0x4d8410)
// Original: InAppBilling_FillTypeArray
// ----------------------------------------------------------------------------
int InAppBilling_FillTypeArray(InAppBilling::Self *a1)
{
  return InAppBilling::fillTypeArray(a1);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::fillIdArray  (binary VA: 0x4d8440)
// Original: InAppBilling::fillIdArray
// ----------------------------------------------------------------------------
int InAppBilling::fillIdArray(InAppBilling::Self *self)
{
  int v1;
  int i;
  int BArray;
  int result;
  typedef int _g4_t_v5;
  typedef int *_g4_t_v6;
  typedef int _g4_t_Data;
  typedef int _g4_t_v8;
  typedef int _g4_t_TotalItems;
  typedef char _g4_t_v10;
  typedef InAppBilling::Self *_g4_t_v11;
  typedef uint8_t _g4_t_v12[60];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_Data)) > _g4_s2 ? (16u + sizeof(_g4_t_Data)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_TotalItems)) > _g4_s4 ? (24u + sizeof(_g4_t_TotalItems)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v10)) > _g4_s5 ? (31u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v11)) > _g4_s6 ? (44u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v12)) > _g4_s7 ? (48u + sizeof(_g4_t_v12)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_Data &Data = *reinterpret_cast<_g4_t_Data *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_TotalItems &TotalItems = *reinterpret_cast<_g4_t_TotalItems *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 31u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);

  v11 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v11, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v11, 0);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  TotalItems = InAppBilling::getTotalItems();
  *(uint32_t *)self = opNewArray(4 * TotalItems);
  v1 = InAppBilling::newBundle(v11);
  if ( TotalItems > 0 )
  {
    for ( i = 0; i != TotalItems; ++i )
    {
      InAppBilling::bundleClear(v1);
      InAppBilling::readChar((InAppBilling::Self *)v12, 0x20u, 30);
      InAppBilling::bundlePutInt((InAppBilling::Self *)v12, 5, v1);
      InAppBilling::readChar((InAppBilling::Self *)v12, 0x20u, 32);
      InAppBilling::bundlePutInt((InAppBilling::Self *)v12, i, v1);
      Data = InAppBilling::getData(v1);
      InAppBilling::readChar((InAppBilling::Self *)v12, 0x20u, 31);
      BArray = InAppBilling::bundleReadBArray((InAppBilling::Self *)v12, Data);
      if ( BArray != 0 )
      {
        v5 = BArray;
        v8 = G4_VCALL<int>(v11, 684, BArray);
        v6 = (int *)(*(uint32_t *)self + 4 * i);
        *v6 = opNewArray(v8 + 1);
        memset(*(void **)(*(uint32_t *)self + 4 * i), 0, v8 + 1);
        G4_VCALL<void>(v11, 800, v5, 0, v8, *(uint32_t *)(*(uint32_t *)self + 4 * i));
        G4_VCALL<void>(v11, 92, v5);
      }
      G4_VCALL<void>(v11, 92, Data);
    }
  }
  result = G4_VCALL<int>(v11, 92, v1);
  if ( v10 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_FillIdArray  (binary VA: 0x4d86a0)
// Original: InAppBilling_FillIdArray
// ----------------------------------------------------------------------------
int InAppBilling_FillIdArray(InAppBilling::Self *a1)
{
  return InAppBilling::fillIdArray(a1);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::fillAttributeArrayByName  (binary VA: 0x4d86d0)
// Original: InAppBilling::fillAttributeArrayByName
// ----------------------------------------------------------------------------
int InAppBilling::fillAttributeArrayByName(InAppBilling::Self *self, char ***a2)
{
  int v2;
  int i;
  int BArray;
  int result;
  typedef int _g4_t_v6;
  typedef int *_g4_t_v7;
  typedef int _g4_t_Data;
  typedef int _g4_t_v9;
  typedef int _g4_t_TotalItems;
  typedef char _g4_t_v11;
  typedef InAppBilling::Self *_g4_t_v12;
  typedef uint8_t _g4_t_v13[60];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_Data)) > _g4_s2 ? (16u + sizeof(_g4_t_Data)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v9)) > _g4_s3 ? (20u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_TotalItems)) > _g4_s4 ? (24u + sizeof(_g4_t_TotalItems)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v11)) > _g4_s5 ? (31u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v12)) > _g4_s6 ? (44u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v13)) > _g4_s7 ? (48u + sizeof(_g4_t_v13)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_Data &Data = *reinterpret_cast<_g4_t_Data *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_TotalItems &TotalItems = *reinterpret_cast<_g4_t_TotalItems *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 31u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);

  v12 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v12, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v12, 0);
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  TotalItems = InAppBilling::getTotalItems();
  *(uint32_t *)self = opNewArray(4 * TotalItems);
  v2 = InAppBilling::newBundle(v12);
  if ( TotalItems > 0 )
  {
    for ( i = 0; i != TotalItems; ++i )
    {
      InAppBilling::bundleClear(v2);
      InAppBilling::readChar((InAppBilling::Self *)v13, 0x20u, 30);
      InAppBilling::bundlePutInt((InAppBilling::Self *)v13, 7, v2);
      InAppBilling::readChar((InAppBilling::Self *)v13, 0x20u, 32);
      InAppBilling::bundlePutInt((InAppBilling::Self *)v13, i, v2);
      InAppBilling::readChar((InAppBilling::Self *)v13, 0x20u, 47);
      InAppBilling::bundlePutString((InAppBilling::Self *)v13, (InAppBilling::Self *)a2, v2);
      Data = InAppBilling::getData(v2);
      InAppBilling::readChar((InAppBilling::Self *)v13, 0x20u, 31);
      BArray = InAppBilling::bundleReadBArray((InAppBilling::Self *)v13, Data);
      if ( BArray != 0 )
      {
        v6 = BArray;
        v9 = G4_VCALL<int>(v12, 684, BArray);
        v7 = (int *)(*(uint32_t *)self + 4 * i);
        *v7 = opNewArray(v9 + 1);
        memset(*(void **)(*(uint32_t *)self + 4 * i), 0, v9 + 1);
        G4_VCALL<void>(v12, 800, v6, 0, v9, *(uint32_t *)(*(uint32_t *)self + 4 * i));
        G4_VCALL<void>(v12, 92, v6);
      }
      G4_VCALL<void>(v12, 92, Data);
    }
  }
  result = G4_VCALL<int>(v12, 92, v2);
  if ( v11 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_FillAttributeArrayByName  (binary VA: 0x4d8960)
// Original: InAppBilling_FillAttributeArrayByName
// ----------------------------------------------------------------------------
int InAppBilling_FillAttributeArrayByName(InAppBilling::Self *a1, char ***a2)
{
  return InAppBilling::fillAttributeArrayByName(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_FreeArrayMem  (binary VA: 0x4d8990)
// Original: InAppBilling_FreeArrayMem
// ----------------------------------------------------------------------------
void InAppBilling_FreeArrayMem(void **a1)
{
  int TotalItems;
  int i;

  TotalItems = InAppBilling::getTotalItems();
  if ( TotalItems > 0 )
  {
    for ( i = 0; i != TotalItems; ++i )
    {
      if ( a1[i] != nullptr )
        opDeleteArray(a1[i]);
    }
  }
  if ( a1 != nullptr )
    opDeleteArray(a1);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_getTotalItems  (binary VA: 0x4d89f0)
// Original: InAppBilling_getTotalItems
// ----------------------------------------------------------------------------
int InAppBilling_getTotalItems()
{
  return InAppBilling::getTotalItems();
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::nativeSendData  (binary VA: 0x4d8a10)
// Original: InAppBilling::nativeSendData
// ----------------------------------------------------------------------------
int InAppBilling::nativeSendData(char *a1)
{
  char *v1;
  int Int;
  int v3;
  void *v4;
  void *v5;
  int v7;
  char *v8;
  int Data;
  int BArray;
  int v11;
  int v12;
  void *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18;
  int v19;
  int v20;
  int v21;
  char v22;
  int v23;
  int v24;
  int v25;
  void *v26;
  int v27;
  int v28;
  int Instance;
  void *v30;
  void *v31;
  void *v32;
  void *v33;
  void *v34;
  volatile int32_t *v35;
  void *v36;
  void *v37;
  int v38;
  int v39;
  void *v40;
  int TotalItems;
  char *v42;
  int v43;
  unsigned int v44;
  bool v45;
  char *v46;
  int v47;
  int v48;
  volatile int32_t *v49;
  int v50;
  void *v51;
  int v52;
  int v53;
  int v54;
  int v55;
  void *v56;
  int v57;
  int v58;
  int v59;
  void *v60;
  void *v61;
  void *v62;
  void *v63;
  void *v64;
  void *v65;
  void *v66;
  int v67;
  void *v68;
  void *v69;
  int v70;
  int v71;
  typedef InAppBilling::Self *_g4_t_v72;
  typedef InAppBilling::Self *_g4_t_v73;
  typedef InAppBilling::Self *_g4_t_v74;
  typedef InAppBilling::Self *_g4_t_v75;
  typedef InAppBilling::Self *_g4_t_v76;
  typedef InAppBilling::Self *_g4_t_v77;
  typedef char _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef char _g4_t_v83;
  typedef char _g4_t_v84;
  typedef char _g4_t_v85;
  typedef char _g4_t_v86;
  typedef char _g4_t_v87;
  typedef char _g4_t_v88;
  typedef char _g4_t_v89;
  typedef char _g4_t_v90;
  typedef char _g4_t_v91;
  typedef char _g4_t_v92;
  typedef char _g4_t_v93;
  typedef char _g4_t_v94;
  typedef char _g4_t_v95;
  typedef char _g4_t_v96;
  typedef char _g4_t_v97;
  typedef char _g4_t_v98;
  typedef InAppBilling::Self *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef uint8_t _g4_t_v102[8];
  typedef uint8_t _g4_t_v103[8];
  typedef uint8_t _g4_t_v104[32];
  typedef uint8_t _g4_t_v105[32];
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef char _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef volatile int32_t *_g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef char _g4_t_v118[64];
  typedef char _g4_t_v119[64];
  typedef char _g4_t_dest[512];
  typedef int _g4_t_v121[128];
  typedef char _g4_t_v122[512];
  typedef char _g4_t_src[520];
  typedef char **_g4_t_v124;
  typedef int *_g4_t_v125;
  enum : size_t {
    _g4_s0 = 2480u,
    _g4_s1 = (0u + sizeof(_g4_t_v72)) > _g4_s0 ? (0u + sizeof(_g4_t_v72)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v73)) > _g4_s1 ? (0u + sizeof(_g4_t_v73)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v74)) > _g4_s2 ? (0u + sizeof(_g4_t_v74)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v75)) > _g4_s3 ? (0u + sizeof(_g4_t_v75)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v76)) > _g4_s4 ? (0u + sizeof(_g4_t_v76)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v77)) > _g4_s5 ? (0u + sizeof(_g4_t_v77)) : _g4_s5,
    _g4_s7 = (23u + sizeof(_g4_t_v78)) > _g4_s6 ? (23u + sizeof(_g4_t_v78)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v79)) > _g4_s7 ? (24u + sizeof(_g4_t_v79)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v80)) > _g4_s8 ? (28u + sizeof(_g4_t_v80)) : _g4_s8,
    _g4_s10 = (50u + sizeof(_g4_t_v81)) > _g4_s9 ? (50u + sizeof(_g4_t_v81)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v82)) > _g4_s10 ? (52u + sizeof(_g4_t_v82)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v83)) > _g4_s11 ? (56u + sizeof(_g4_t_v83)) : _g4_s11,
    _g4_s13 = (57u + sizeof(_g4_t_v84)) > _g4_s12 ? (57u + sizeof(_g4_t_v84)) : _g4_s12,
    _g4_s14 = (58u + sizeof(_g4_t_v85)) > _g4_s13 ? (58u + sizeof(_g4_t_v85)) : _g4_s13,
    _g4_s15 = (59u + sizeof(_g4_t_v86)) > _g4_s14 ? (59u + sizeof(_g4_t_v86)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v87)) > _g4_s15 ? (60u + sizeof(_g4_t_v87)) : _g4_s15,
    _g4_s17 = (61u + sizeof(_g4_t_v88)) > _g4_s16 ? (61u + sizeof(_g4_t_v88)) : _g4_s16,
    _g4_s18 = (62u + sizeof(_g4_t_v89)) > _g4_s17 ? (62u + sizeof(_g4_t_v89)) : _g4_s17,
    _g4_s19 = (63u + sizeof(_g4_t_v90)) > _g4_s18 ? (63u + sizeof(_g4_t_v90)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v91)) > _g4_s19 ? (64u + sizeof(_g4_t_v91)) : _g4_s19,
    _g4_s21 = (65u + sizeof(_g4_t_v92)) > _g4_s20 ? (65u + sizeof(_g4_t_v92)) : _g4_s20,
    _g4_s22 = (66u + sizeof(_g4_t_v93)) > _g4_s21 ? (66u + sizeof(_g4_t_v93)) : _g4_s21,
    _g4_s23 = (67u + sizeof(_g4_t_v94)) > _g4_s22 ? (67u + sizeof(_g4_t_v94)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v95)) > _g4_s23 ? (68u + sizeof(_g4_t_v95)) : _g4_s23,
    _g4_s25 = (69u + sizeof(_g4_t_v96)) > _g4_s24 ? (69u + sizeof(_g4_t_v96)) : _g4_s24,
    _g4_s26 = (70u + sizeof(_g4_t_v97)) > _g4_s25 ? (70u + sizeof(_g4_t_v97)) : _g4_s25,
    _g4_s27 = (71u + sizeof(_g4_t_v98)) > _g4_s26 ? (71u + sizeof(_g4_t_v98)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v99)) > _g4_s27 ? (72u + sizeof(_g4_t_v99)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v100)) > _g4_s28 ? (76u + sizeof(_g4_t_v100)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v101)) > _g4_s29 ? (80u + sizeof(_g4_t_v101)) : _g4_s29,
    _g4_s31 = (84u + sizeof(_g4_t_v102)) > _g4_s30 ? (84u + sizeof(_g4_t_v102)) : _g4_s30,
    _g4_s32 = (92u + sizeof(_g4_t_v103)) > _g4_s31 ? (92u + sizeof(_g4_t_v103)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v104)) > _g4_s32 ? (100u + sizeof(_g4_t_v104)) : _g4_s32,
    _g4_s34 = (132u + sizeof(_g4_t_v105)) > _g4_s33 ? (132u + sizeof(_g4_t_v105)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v106)) > _g4_s34 ? (164u + sizeof(_g4_t_v106)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v107)) > _g4_s35 ? (168u + sizeof(_g4_t_v107)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v108)) > _g4_s36 ? (172u + sizeof(_g4_t_v108)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v109)) > _g4_s37 ? (176u + sizeof(_g4_t_v109)) : _g4_s37,
    _g4_s39 = (180u + sizeof(_g4_t_v110)) > _g4_s38 ? (180u + sizeof(_g4_t_v110)) : _g4_s38,
    _g4_s40 = (184u + sizeof(_g4_t_v111)) > _g4_s39 ? (184u + sizeof(_g4_t_v111)) : _g4_s39,
    _g4_s41 = (188u + sizeof(_g4_t_v112)) > _g4_s40 ? (188u + sizeof(_g4_t_v112)) : _g4_s40,
    _g4_s42 = (192u + sizeof(_g4_t_v113)) > _g4_s41 ? (192u + sizeof(_g4_t_v113)) : _g4_s41,
    _g4_s43 = (196u + sizeof(_g4_t_v114)) > _g4_s42 ? (196u + sizeof(_g4_t_v114)) : _g4_s42,
    _g4_s44 = (200u + sizeof(_g4_t_v115)) > _g4_s43 ? (200u + sizeof(_g4_t_v115)) : _g4_s43,
    _g4_s45 = (204u + sizeof(_g4_t_v116)) > _g4_s44 ? (204u + sizeof(_g4_t_v116)) : _g4_s44,
    _g4_s46 = (208u + sizeof(_g4_t_v117)) > _g4_s45 ? (208u + sizeof(_g4_t_v117)) : _g4_s45,
    _g4_s47 = (212u + sizeof(_g4_t_v118)) > _g4_s46 ? (212u + sizeof(_g4_t_v118)) : _g4_s46,
    _g4_s48 = (276u + sizeof(_g4_t_v119)) > _g4_s47 ? (276u + sizeof(_g4_t_v119)) : _g4_s47,
    _g4_s49 = (340u + sizeof(_g4_t_dest)) > _g4_s48 ? (340u + sizeof(_g4_t_dest)) : _g4_s48,
    _g4_s50 = (852u + sizeof(_g4_t_v121)) > _g4_s49 ? (852u + sizeof(_g4_t_v121)) : _g4_s49,
    _g4_s51 = (1364u + sizeof(_g4_t_v122)) > _g4_s50 ? (1364u + sizeof(_g4_t_v122)) : _g4_s50,
    _g4_s52 = (1876u + sizeof(_g4_t_src)) > _g4_s51 ? (1876u + sizeof(_g4_t_src)) : _g4_s51,
    _g4_s53 = (2396u + sizeof(_g4_t_v124)) > _g4_s52 ? (2396u + sizeof(_g4_t_v124)) : _g4_s52,
    _g4_s54 = (2400u + sizeof(_g4_t_v125)) > _g4_s53 ? (2400u + sizeof(_g4_t_v125)) : _g4_s53
  };
  alignas(16) uint8_t _g4_sf[_g4_s54];
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 0u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 0u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 0u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 0u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 0u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 0u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 23u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 24u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 28u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 50u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 52u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 56u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 57u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 58u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 59u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 60u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 61u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 62u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 63u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 64u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 65u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 66u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 67u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 68u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 69u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 70u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 71u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 72u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 76u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 80u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 84u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 92u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 100u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 132u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 164u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 168u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 172u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 176u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 180u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 184u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 188u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 192u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 196u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 200u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 204u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 208u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 212u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 276u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 340u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 852u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 1364u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 1876u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 2396u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 2400u);

  v124 = &a1;
  v99 = nullptr;
  v1 = a1;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v99, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v99, 0);
    v78 = 1;
  }
  else
  {
    v78 = 0;
  }
  v80 = InAppBilling::newBundle(v99);
  InAppBilling::readChar((InAppBilling::Self *)v104, 0x20u, 30);
  Int = InAppBilling::bundleReadInt((InAppBilling::Self *)v104, v1);
  switch ( Int )
  {
    case 0:
      InAppBilling::readChar((InAppBilling::Self *)v102, 8u, 32);
      v7 = InAppBilling::bundleReadInt((InAppBilling::Self *)v102, v1);
      v8 = dest;
      InAppBilling::readChar((InAppBilling::Self *)dest, 0x200u, v7);
      goto LABEL_15;
    case 2:
      v79 = InAppBilling::newBundle(v99);
      InAppBilling::bundleClear(v79);
      InAppBilling::bundlePutInt((InAppBilling::Self *)v104, 19, v79);
      Data = InAppBilling::getData(v79);
      G4_VCALL<void>(v99, 92, v79);
      G4_VCALL<void>(v99, 92, Data);
      InAppBilling::readChar((InAppBilling::Self *)v105, 0x20u, 35);
      BArray = InAppBilling::bundleReadBArray((InAppBilling::Self *)v105, (int)(uintptr_t)v1);
      InAppBilling::readChar((InAppBilling::Self *)v103, 8u, 31);
      v11 = InAppBilling::bundleReadInt((InAppBilling::Self *)v103, v1);
      v107 = 0;
      v109 = 0;
      v110 = (int)(uintptr_t)&unk_213B814;
      v111 = (int)(uintptr_t)&unk_213B814;
      v112 = (volatile int32_t *)&unk_213B814;
      v113 = (int)(uintptr_t)&unk_213B814;
      v114 = (int)(uintptr_t)&unk_213B814;
      v115 = (int)(uintptr_t)&unk_213B814;
      v116 = (int)(uintptr_t)&unk_213B814;
      v117 = (int)(uintptr_t)&unk_213B814;
      v106 = v11;
      if ( BArray != 0 )
      {
        v12 = G4_VCALL<int>(v99, 684, BArray);
        v13 = alloca(v12 + 16);
        v72 = (InAppBilling::Self *)v12;
        memset(&a1, 0, v12 + 1);
        G4_VCALL<void>(v99, 800, BArray, 0, v72, &a1);
        G4_VCALL<void>(v99, 92, BArray);
        g4_std::string::assign((int)(uintptr_t)&v110, &a1, strlen((const char *)&a1));
        memset(v121, 0, sizeof(v121));
        InAppBilling::readChar((InAppBilling::Self *)v105, 0x20u, 40);
        v14 = InAppBilling::bundleReadBArray((InAppBilling::Self *)v105, (int)(uintptr_t)v1);
        if ( v14 != 0 )
        {
          v15 = G4_VCALL<int>(v99, 684, v14);
          G4_VCALL<void>(v99, 800, v14, 0, v15, v121);
          G4_VCALL<void>(v99, 92, v14);
        }
        g4_std::string::assign((int)(uintptr_t)&v111, v121, strlen((const char *)v121));
        memset(v118, 0, sizeof(v118));
        InAppBilling::readChar((InAppBilling::Self *)v105, 0x20u, 41);
        v16 = InAppBilling::bundleReadBArray((InAppBilling::Self *)v105, (int)(uintptr_t)v1);
        if ( v16 != 0 )
        {
          v17 = G4_VCALL<int>(v99, 684, v16);
          G4_VCALL<void>(v99, 800, v16, 0, v17, v118);
          G4_VCALL<void>(v99, 92, v16);
        }
        g4_std::string::assign((int)(uintptr_t)&v116, v118, strlen(v118));
        InAppBilling::readChar((InAppBilling::Self *)v105, 8u, 82);
        v18 = InAppBilling::bundleContainsKey((InAppBilling::Self *)v105, (int)(uintptr_t)v1);
        v19 = 0;
        if ( v18 == 1 )
          v19 = InAppBilling::bundleReadInt((InAppBilling::Self *)v105, v1);
        memset(v122, 0, sizeof(v122));
        v107 = v19;
        InAppBilling::readChar((InAppBilling::Self *)v105, 0x20u, 83);
        v20 = InAppBilling::bundleReadBArray((InAppBilling::Self *)v105, (int)(uintptr_t)v1);
        if ( v20 != 0 )
        {
          v21 = G4_VCALL<int>(v99, 684, v20);
          G4_VCALL<void>(v99, 800, v20, 0, v21, v122);
          G4_VCALL<void>(v99, 92, v20);
        }
        g4_std::string::assign((int)(uintptr_t)&v113, v122, strlen(v122));
        InAppBilling::readChar((InAppBilling::Self *)v105, 0x20u, 213);
        v22 = InAppBilling::bundleContainsKey((InAppBilling::Self *)v105, (int)(uintptr_t)v1);
        v23 = 0;
        if ( v22 == 1 )
          v23 = InAppBilling::bundleReadInt((InAppBilling::Self *)v105, v1);
        memset(src, 0, 0x200u);
        v108 = v23;
        InAppBilling::readChar((InAppBilling::Self *)v105, 0x20u, 214);
        if ( (uint8_t)InAppBilling::bundleContainsKey((InAppBilling::Self *)v105, (int)(uintptr_t)v1) == 1 )
        {
          v70 = InAppBilling::bundleReadBArray((InAppBilling::Self *)v105, (int)(uintptr_t)v1);
          if ( v70 != 0 )
          {
            v71 = G4_VCALL<int>(v99, 684, v70);
            G4_VCALL<void>(v99, 800, v70, 0, v71, src);
            G4_VCALL<void>(v99, 92, v70);
          }
        }
        g4_std::string::assign((int)(uintptr_t)&v117, src, strlen(src));
        InAppBilling::readChar((InAppBilling::Self *)v105, 0x20u, 206);
        v24 = InAppBilling::bundleReadBArray((InAppBilling::Self *)v105, (int)(uintptr_t)v1);
        if ( v24 != 0 )
        {
          v25 = G4_VCALL<int>(v99, 684, v24);
          v26 = alloca(v25 + 16);
          v73 = (InAppBilling::Self *)v25;
          memset(&a1, 0, v25 + 1);
          G4_VCALL<void>(v99, 800, v24, 0, v73, &a1);
          G4_VCALL<void>(v99, 92, v24);
          g4_std::string::assign((int)(uintptr_t)&v114, &a1, strlen((const char *)&a1));
        }
        memset(v119, 0, sizeof(v119));
        InAppBilling::readChar((InAppBilling::Self *)v105, 0x20u, 37);
        v27 = InAppBilling::bundleReadBArray((InAppBilling::Self *)v105, (int)(uintptr_t)v1);
        if ( v27 != 0 )
        {
          v28 = G4_VCALL<int>(v99, 684, v27);
          G4_VCALL<void>(v99, 800, v27, 0, v28, v119);
          G4_VCALL<void>(v99, 92, v27);
        }
        g4_std::string::assign((int)(uintptr_t)&v115, v119, strlen(v119));
      }
      Instance = (int)(uintptr_t)iap::TransactionManager::GetInstance((iap::TransactionManager::Self *)v124);
      iap::TransactionManager::AddTransaction((int *)(uintptr_t)Instance, (int)(uintptr_t)&v106);
      v30 = (void *)(v117 - 12);
      if ( (void *)(v117 - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v117 - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = &v82;
        g4_std::string::Rep::M_destroy(v30);
      }
      v31 = (void *)(v116 - 12);
      if ( (void *)(v116 - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v116 - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)((char *)&v82 + 1);
        g4_std::string::Rep::M_destroy(v31);
      }
      v32 = (void *)(v115 - 12);
      if ( (void *)(v115 - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v115 - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)((char *)&v82 + 2);
        g4_std::string::Rep::M_destroy(v32);
      }
      v33 = (void *)(v114 - 12);
      if ( (void *)(v114 - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v114 - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)((char *)&v82 + 3);
        g4_std::string::Rep::M_destroy(v33);
      }
      v34 = (void *)(v113 - 12);
      if ( (void *)(v113 - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v113 - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v83;
        g4_std::string::Rep::M_destroy(v34);
      }
      v35 = v112 - 3;
      if ( v112 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v112 - 1, 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v84;
        g4_std::string::Rep::M_destroy((void *)v35);
      }
      v36 = (void *)(v111 - 12);
      if ( (void *)(v111 - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v111 - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v85;
        g4_std::string::Rep::M_destroy(v36);
      }
      v37 = (void *)(v110 - 12);
      if ( (void *)(v110 - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v110 - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v86;
        g4_std::string::Rep::M_destroy(v37);
      }
      break;
    case 4:
      InAppBilling::readChar((InAppBilling::Self *)src, 0x20u, 38);
      v38 = InAppBilling::bundleReadBArray((InAppBilling::Self *)src, (int)(uintptr_t)v1);
      if ( v38 != 0 )
      {
        v39 = G4_VCALL<int>(v99, 684, v38);
        v40 = alloca(v39 + 16);
        v74 = (InAppBilling::Self *)v39;
        memset(&a1, 0, v39 + 1);
        G4_VCALL<void>(v99, 800, v38, 0, v74, &a1);
        G4_VCALL<void>(v99, 92, v38);
        TotalItems = InAppBilling::getTotalItems();
        InAppBilling_GetItemListCB((char *)&a1, TotalItems);
      }
      else
      {
        InAppBilling_GetItemListCB(nullptr, 0);
      }
      break;
    case 5:
      memset(dest, 0, sizeof(dest));
      v42 = dest;
      do
      {
        v43 = *(uint32_t *)v42;
        v42 += 4;
        v44 = ~v43 & (v43 - 16843009) & 0x80808080;
      }
      while ( v44 == 0 );
      v45 = (~v43 & (v43 - 16843009) & 0x8080) == 0;
      if ( (~v43 & (v43 - 16843009) & 0x8080) == 0 )
        v44 >>= 16;
      v46 = v42 + 2;
      if ( !v45 )
        v46 = v42;
      strcpy(&v46[-__CFADD__((uint8_t)v44, (uint8_t)v44) - 3], "com.gameloft.android.GAND.GloftGGSS");
      InAppBilling::readChar((InAppBilling::Self *)v102, 8u, 32);
      v47 = InAppBilling::bundleReadInt((InAppBilling::Self *)v102, v1);
      InAppBilling::readChar((InAppBilling::Self *)src, 0x80u, v47);
      strcat(dest, src);
      InAppBilling::readChar((InAppBilling::Self *)v103, 8u, 31);
      InAppBilling::bundlePutString((InAppBilling::Self *)v103, (InAppBilling::Self *)dest, v80);
      break;
    case 6:
    case 7:
      v75 = (InAppBilling::Self *)Int;
      InAppBilling::readChar((InAppBilling::Self *)v102, 8u, 32);
      InAppBilling::bundleReadInt((InAppBilling::Self *)v102, v1);
      if ( v75 == (InAppBilling::Self *)&loc_6 )
        v8 = (char *)sub_566940();
      else
        v8 = (char *)sub_5669B0();
LABEL_15:
      InAppBilling::readChar((InAppBilling::Self *)v103, 8u, 31);
      InAppBilling::bundlePutString((InAppBilling::Self *)v103, (InAppBilling::Self *)v8, v80);
      break;
    case 8:
      InAppBilling::readChar((InAppBilling::Self *)v119, 0x20u, 35);
      v48 = InAppBilling::bundleReadBArray((InAppBilling::Self *)v119, (int)(uintptr_t)v1);
      v121[1] = 0;
      LOBYTE(v121[3]) = 0;
      v121[0] = 2;
      v49 = (volatile int32_t *)&unk_213B814;
      v121[4] = (int)(uintptr_t)&unk_213B814;
      v121[5] = (int)(uintptr_t)&unk_213B814;
      v121[6] = (int)(uintptr_t)&unk_213B814;
      v121[7] = (int)(uintptr_t)&unk_213B814;
      v121[8] = (int)(uintptr_t)&unk_213B814;
      v121[9] = (int)(uintptr_t)&unk_213B814;
      v121[10] = (int)(uintptr_t)&unk_213B814;
      v121[11] = (int)(uintptr_t)&unk_213B814;
      if ( v48 != 0 )
      {
        LOBYTE(v121[3]) = 1;
        v50 = G4_VCALL<int>(v99, 684, v48);
        v51 = alloca(v50 + 16);
        v76 = (InAppBilling::Self *)v50;
        memset(&a1, 0, v50 + 1);
        G4_VCALL<void>(v99, 800, v48, 0, v76, &a1);
        G4_VCALL<void>(v99, 92, v48);
        g4_std::string::assign((int)(uintptr_t)&v121[4], &a1, strlen((const char *)&a1));
        memset(src, 0, 0x200u);
        InAppBilling::readChar((InAppBilling::Self *)v119, 0x20u, 40);
        v52 = InAppBilling::bundleReadBArray((InAppBilling::Self *)v119, (int)(uintptr_t)v1);
        if ( v52 != 0 )
        {
          v53 = G4_VCALL<int>(v99, 684, v52);
          G4_VCALL<void>(v99, 800, v52, 0, v53, src);
          G4_VCALL<void>(v99, 92, v52);
        }
        g4_std::string::assign((int)(uintptr_t)&v121[5], src, strlen(src));
        InAppBilling::readChar((InAppBilling::Self *)v119, 0x20u, 206);
        v54 = InAppBilling::bundleReadBArray((InAppBilling::Self *)v119, (int)(uintptr_t)v1);
        if ( v54 != 0 )
        {
          v55 = G4_VCALL<int>(v99, 684, v54);
          v56 = alloca(v55 + 16);
          v77 = (InAppBilling::Self *)v55;
          memset(&a1, 0, v55 + 1);
          G4_VCALL<void>(v99, 800, v54, 0, v77, &a1);
          G4_VCALL<void>(v99, 92, v54);
          g4_std::string::assign((int)(uintptr_t)&v121[8], &a1, strlen((const char *)&a1));
        }
        memset(v122, 0, 0x40u);
        InAppBilling::readChar((InAppBilling::Self *)v119, 0x20u, 37);
        v57 = InAppBilling::bundleReadBArray((InAppBilling::Self *)v119, (int)(uintptr_t)v1);
        if ( v57 != 0 )
        {
          v58 = G4_VCALL<int>(v99, 684, v57);
          G4_VCALL<void>(v99, 800, v57, 0, v58, v122);
          G4_VCALL<void>(v99, 92, v57);
        }
        g4_std::string::assign((int)(uintptr_t)&v121[9], v122, strlen(v122));
        v59 = (int)(uintptr_t)iap::TransactionManager::GetInstance((iap::TransactionManager::Self *)v124);
        iap::TransactionManager::AddTransaction((int *)(uintptr_t)v59, (int)(uintptr_t)v121);
        v49 = (volatile int32_t *)v121[11];
      }
      if ( v49 - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(v49 - 1, 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v87;
        g4_std::string::Rep::M_destroy((void *)(v49 - 3));
      }
      v60 = (void *)(v121[10] - 12);
      if ( (void *)(v121[10] - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v121[10] - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v88;
        g4_std::string::Rep::M_destroy(v60);
      }
      v61 = (void *)(v121[9] - 12);
      if ( (void *)(v121[9] - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v121[9] - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v89;
        g4_std::string::Rep::M_destroy(v61);
      }
      v62 = (void *)(v121[8] - 12);
      if ( (void *)(v121[8] - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v121[8] - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v90;
        g4_std::string::Rep::M_destroy(v62);
      }
      v63 = (void *)(v121[7] - 12);
      if ( (void *)(v121[7] - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v121[7] - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v91;
        g4_std::string::Rep::M_destroy(v63);
      }
      v64 = (void *)(v121[6] - 12);
      if ( (void *)(v121[6] - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v121[6] - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v92;
        g4_std::string::Rep::M_destroy(v64);
      }
      v65 = (void *)(v121[5] - 12);
      if ( (void *)(v121[5] - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v121[5] - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v93;
        g4_std::string::Rep::M_destroy(v65);
      }
      v66 = (void *)(v121[4] - 12);
      if ( (void *)(v121[4] - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v121[4] - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v94;
        g4_std::string::Rep::M_destroy(v66);
      }
      break;
    case 10:
    case 11:
    case 12:
    case 13:
      InAppBilling::bundlePutString((InAppBilling::Self *)v103, (InAppBilling::Self *)&unk_213B814, v80);
      break;
    case 14:
      InAppBilling::readChar((InAppBilling::Self *)v103, 8u, 31);
      InAppBilling::bundlePutInt((InAppBilling::Self *)v103, 0, v80);
      break;
    case 15:
      *(uint32_t *)src = (uint32_t)(uintptr_t)&unk_213B814;
      InAppBilling::readChar((InAppBilling::Self *)v103, 8u, 31);
      InAppBilling::readChar((InAppBilling::Self *)dest, 0x200u, 132);
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v100, dest, (int)(uintptr_t)&v81);
      v3 = (int)(uintptr_t)iap::TransactionManager::GetInstance((iap::TransactionManager::Self *)v124);
      iap::TransactionManager::GetSettings(v3, (int)(uintptr_t)&v100, (int)(uintptr_t)src);
      v4 = (void *)(v100 - 12);
      if ( (void *)(v100 - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v100 - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v95;
        g4_std::string::Rep::M_destroy(v4);
      }
      InAppBilling::bundlePutString((InAppBilling::Self *)v103, *(InAppBilling::Self **)src, v80);
      v5 = (void *)(*(uint32_t *)src - 12);
      if ( (void *)(*(uint32_t *)src - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)src - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v96;
        g4_std::string::Rep::M_destroy(v5);
      }
      break;
    case 16:
      *(uint32_t *)src = (uint32_t)(uintptr_t)&unk_213B814;
      InAppBilling::readChar((InAppBilling::Self *)v103, 8u, 31);
      InAppBilling::readChar((InAppBilling::Self *)dest, 0x200u, 133);
      g4_std::string::construct_from_cstr((int)(uintptr_t)&v101, dest, (int)(uintptr_t)&v81 + 1);
      v67 = (int)(uintptr_t)iap::TransactionManager::GetInstance((iap::TransactionManager::Self *)v124);
      iap::TransactionManager::GetSettings(v67, (int)(uintptr_t)&v101, (int)(uintptr_t)src);
      v68 = (void *)(v101 - 12);
      if ( (void *)(v101 - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v101 - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v97;
        g4_std::string::Rep::M_destroy(v68);
      }
      InAppBilling::bundlePutString((InAppBilling::Self *)v103, *(InAppBilling::Self **)src, v80);
      v69 = (void *)(*(uint32_t *)src - 12);
      if ( (void *)(*(uint32_t *)src - 12) != &unk_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)src - 4), 0xFFFFFFFF) <= 0 )
      {
        v125 = (int *)&v98;
        g4_std::string::Rep::M_destroy(v69);
      }
      break;
    default:
      break;
  }
  if ( v78 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v80;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_iab_InAppBilling_nativeSendData  (binary VA: 0x4da270)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_iab_InAppBilling_nativeSendData
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_iab_InAppBilling_nativeSendData(int a1, int a2, char *a3)
{
  return InAppBilling::nativeSendData(a3);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::getItemInfoArray  (binary VA: 0x4da2a0)
// Original: InAppBilling::getItemInfoArray
// ----------------------------------------------------------------------------
const char * InAppBilling::getItemInfoArray(InAppBilling::Self *self)
{
  int *v1;
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  int BArray;
  void *v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef size_t _g4_t_n;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17;
  typedef int _g4_t_v18;
  typedef const char *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_TotalItems;
  typedef int _g4_t_v23;
  typedef const char *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_Data;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef InAppBilling::Self *_g4_t_v37;
  typedef uint8_t _g4_t_v38[56];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_n)) > _g4_s5 ? (32u + sizeof(_g4_t_n)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v14)) > _g4_s6 ? (36u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v15)) > _g4_s7 ? (40u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v16)) > _g4_s8 ? (44u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (47u + sizeof(_g4_t_v17)) > _g4_s9 ? (47u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v18)) > _g4_s10 ? (48u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v19)) > _g4_s11 ? (48u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v20)) > _g4_s12 ? (52u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v21)) > _g4_s13 ? (56u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_TotalItems)) > _g4_s14 ? (56u + sizeof(_g4_t_TotalItems)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v23)) > _g4_s15 ? (60u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v24)) > _g4_s16 ? (60u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v25)) > _g4_s17 ? (64u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v26)) > _g4_s18 ? (64u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v27)) > _g4_s19 ? (64u + sizeof(_g4_t_v27)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v28)) > _g4_s20 ? (68u + sizeof(_g4_t_v28)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_Data)) > _g4_s21 ? (68u + sizeof(_g4_t_Data)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v30)) > _g4_s22 ? (72u + sizeof(_g4_t_v30)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v31)) > _g4_s23 ? (72u + sizeof(_g4_t_v31)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v32)) > _g4_s24 ? (76u + sizeof(_g4_t_v32)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v33)) > _g4_s25 ? (76u + sizeof(_g4_t_v33)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v34)) > _g4_s26 ? (80u + sizeof(_g4_t_v34)) : _g4_s26,
    _g4_s28 = (84u + sizeof(_g4_t_v35)) > _g4_s27 ? (84u + sizeof(_g4_t_v35)) : _g4_s27,
    _g4_s29 = (88u + sizeof(_g4_t_v36)) > _g4_s28 ? (88u + sizeof(_g4_t_v36)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v37)) > _g4_s29 ? (92u + sizeof(_g4_t_v37)) : _g4_s29,
    _g4_s31 = (96u + sizeof(_g4_t_v38)) > _g4_s30 ? (96u + sizeof(_g4_t_v38)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 47u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_TotalItems &TotalItems = *reinterpret_cast<_g4_t_TotalItems *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_Data &Data = *reinterpret_cast<_g4_t_Data *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 84u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 92u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);

  v37 = nullptr;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v37, 65542, v8, v9, v10, v11, v12, n, v14, v15, v16, v18, v20, v21, v23, v25, v28, v30, v32, v34, v35, v36) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v37, 0);
    v17 = 1;
  }
  else
  {
    v17 = 0;
  }
  TotalItems = InAppBilling::getTotalItems();
  v1 = (int *)opNewArray(32 * TotalItems + 4);
  v2 = (uint32_t *)(v1 + 1);
  *v1 = TotalItems;
  v19 = (const char *)(v1 + 1);
  if ( TotalItems != 0 )
  {
    v3 = (uint32_t *)(v1 + 4);
    v26 = 0;
    do
    {
      *v2 = (uint32_t)(uintptr_t)&unk_213B814;
      ++v26;
      v2[1] = (uint32_t)(uintptr_t)&unk_213B814;
      *v3 = 0;
      v3[1] = 0;
      v3[4] = 0;
      v3[2] = (uint32_t)(uintptr_t)(v2 + 3);
      v3[3] = (uint32_t)(uintptr_t)(v2 + 3);
      v2 += 8;
      v3 += 8;
    }
    while ( TotalItems != v26 );
  }
  v4 = InAppBilling::newBundle(v37);
  if ( TotalItems > 0 )
  {
    v31 = 0;
    v24 = v19;
    do
    {
      InAppBilling::bundleClear(v4);
      InAppBilling::readChar((InAppBilling::Self *)v38, 0x20u, 30);
      InAppBilling::bundlePutInt((InAppBilling::Self *)v38, 5, v4);
      InAppBilling::readChar((InAppBilling::Self *)v38, 0x20u, 32);
      InAppBilling::bundlePutInt((InAppBilling::Self *)v38, v31, v4);
      Data = InAppBilling::getData(v4);
      InAppBilling::readChar((InAppBilling::Self *)v38, 0x20u, 31);
      BArray = InAppBilling::bundleReadBArray((InAppBilling::Self *)v38, Data);
      v33 = BArray;
      if ( BArray != 0 )
      {
        v27 = G4_VCALL<int>(v37, 684, BArray);
        v6 = alloca(16 * ((v27 + 31) / 0x10u));
        memset(&self, 0, v27 + 1);
        G4_VCALL<void>(v37, 800, v33, 0, v27);
        G4_VCALL<void>(v37, 92, v33);
        InAppBilling::getItemInfoByID((InAppBilling::Self *)&self, v24);
      }
      G4_VCALL<void>(v37, 92, Data);
      ++v31;
      v24 += 32;
    }
    while ( v31 != TotalItems );
  }
  G4_VCALL<void>(v37, 92, v4);
  if ( v17 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v19;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_GetItemInfoArray  (binary VA: 0x4da570)
// Original: InAppBilling_GetItemInfoArray
// ----------------------------------------------------------------------------
const char * InAppBilling_GetItemInfoArray()
{
  InAppBilling::Self *v1;

  return InAppBilling::getItemInfoArray(v1);
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::CallJNIFuncBool  (binary VA: 0x4da590)
// Original: InAppBilling::CallJNIFuncBool
// ----------------------------------------------------------------------------
int InAppBilling::CallJNIFuncBool(int a1, int a2)
{
  int v2;
  int v4[4];

  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) != -2 )
    return (uint8_t)sub_4BFED0(v4[0], a1, a2);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  v2 = (uint8_t)sub_4BFED0(v4[0], a1, a2);
  G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::CallObjJNIFuncInt  (binary VA: 0x4da660)
// Original: InAppBilling::CallObjJNIFuncInt
// ----------------------------------------------------------------------------
int InAppBilling::CallObjJNIFuncInt(int a1, int a2)
{
  int v2;
  int v4[4];

  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) != -2 )
    return JNIEnv::CallIntMethod(v4[0], a1, a2);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  v2 = JNIEnv::CallIntMethod(v4[0], a1, a2);
  G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::CallObjJNIFuncChar  (binary VA: 0x4da730)
// Original: InAppBilling::CallObjJNIFuncChar
// ----------------------------------------------------------------------------
uint8_t * InAppBilling::CallObjJNIFuncChar(int a1, int a2, uint8_t *s, size_t n, int a5, int a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  typedef int _g4_t_v11;
  typedef char _g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v12)) > _g4_s1 ? (15u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 15u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v13[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v13, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v13, 0);
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  if ( n != -1 )
    memset(s, 0, n);
  v6 = G4_VCALL<int>(v13[0], 668, a5);
  v7 = JNIEnv::CallObjectMethod(v13[0], a1, a2, v6, a6);
  if ( v7 != 0 )
  {
    v8 = G4_VCALL<int>(v13[0], 684, v7);
    v9 = v8;
    if ( v8 > 0 )
    {
      if ( n == -1 )
      {
        v11 = v8;
        s = (uint8_t *)opNew(1u);
        *s = v11 + 1;
        memset(s, 0, v11 + 1);
        v9 = v11;
      }
      G4_VCALL<void>(v13[0], 800, v7, 0, v9, s);
      G4_VCALL<void>(v13[0], 92, v7);
      G4_VCALL<void>(v13[0], 92, v6);
    }
  }
  if ( v12 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return s;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling::CallObjJNIFuncChar  (binary VA: 0x4da8f0)
// Original: InAppBilling::CallObjJNIFuncChar
// ----------------------------------------------------------------------------
uint8_t * InAppBilling::CallObjJNIFuncChar(int a1, int a2, uint8_t *s, size_t n, int a5)
{
  uint8_t *v5;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v10;
  typedef char _g4_t_v11;
  typedef int _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v11)) > _g4_s1 ? (15u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 15u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v12[0] = 0;
  v5 = s;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v12, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v12, 0);
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  if ( n != -1 )
    memset(s, 0, n);
  v6 = JNIEnv::CallObjectMethod(v12[0], a1, a2, a5);
  if ( v6 != 0 )
  {
    v7 = G4_VCALL<int>(v12[0], 684, v6);
    v8 = v7;
    if ( v7 > 0 )
    {
      if ( n == -1 )
      {
        v10 = v7;
        v5 = (uint8_t *)opNew(1u);
        *v5 = v10 + 1;
        memset(v5, 0, v10 + 1);
        v8 = v10;
      }
      G4_VCALL<void>(v12[0], 800, v6, 0, v8, v5);
      G4_VCALL<void>(v12[0], 92, v6);
    }
  }
  if ( v11 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: InAppBilling_FreeItemInfoArray  (binary VA: 0x4db030)
// Original: InAppBilling_FreeItemInfoArray
// ----------------------------------------------------------------------------
void InAppBilling_FreeItemInfoArray(int a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  if ( a1 != 0 )
  {
    v1 = a1 + 32 * *(uint32_t *)(a1 - 4);
    v5 = v1;
    if ( a1 != v1 )
    {
      v2 = a1 + 32 * *(uint32_t *)(a1 - 4);
      v6 = v1 - 28;
      v7 = v1 - 32;
      do
      {
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
          v2 - 24,
          *(void **)(v2 - 16));
        v3 = *(uint32_t *)(v2 - v5 + v6);
        if ( (void *)(v3 - 12) != &unk_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v3 - 12));
        }
        v4 = *(uint32_t *)(v2 - v5 + v7);
        if ( (void *)(v4 - 12) != &unk_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v4 - 12));
        }
        v2 -= 32;
      }
      while ( a1 != v2 );
    }
    opDeleteArray((void *)(a1 - 4));
  }
}

