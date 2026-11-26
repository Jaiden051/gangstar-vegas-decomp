#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: ABundle.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (29 funcs)
// ============================================================================
#include "ABundle.h"
#include "../../../sources/Core/Memory/GameAllocator.h"

// ----------------------------------------------------------------------------
// Function: ABundle::init  (binary VA: 0x4bdfb0)
// Original: ABundle::init
// ----------------------------------------------------------------------------
int ABundle::init()
{
  int result;
  typedef char _g4_t_v1;
  typedef uint32_t _g4_t_v2[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v1)) > _g4_s0 ? (15u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v2)) > _g4_s1 ? (28u + sizeof(_g4_t_v2)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 15u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 28u);

  result = ABundle::cBundle;
  if ( ABundle::cBundle == 0 )
  {
    v2[0] = 0;
    if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v2, 65542) == -2 )
    {
      G4_VCALL<void>(AndroidOS_JavaVM, 16, v2, 0);
      v1 = 1;
    }
    else
    {
      v1 = 0;
    }
    result = G4_VCALL<int>(v2[0], 24, "android/os/Bundle");
    ABundle::cBundle = result;
    if ( result != 0 )
    {
      ABundle::cBundle = G4_VCALL<int>(v2[0], 84, result);
      ABundle::mInit = G4_VCALL<int>(v2[0], 132, ABundle::cBundle, "<init>", "()V");
      ABundle::mPutString = G4_VCALL<int>(v2[0], 132, ABundle::cBundle, "putString", "(Ljava/lang/String;Ljava/lang/String;)V");
      ABundle::mGetString = G4_VCALL<int>(v2[0], 132, ABundle::cBundle, "getString", "(Ljava/lang/String;)Ljava/lang/String;");
      ABundle::mGetInt = G4_VCALL<int>(v2[0], 132, ABundle::cBundle, "getInt", "(Ljava/lang/String;)I");
      ABundle::mPutInt = G4_VCALL<int>(v2[0], 132, ABundle::cBundle, "putInt", "(Ljava/lang/String;I)V");
      ABundle::mGetLong = G4_VCALL<int>(v2[0], 132, ABundle::cBundle, "getLong", "(Ljava/lang/String;)J");
      ABundle::mPutLong = G4_VCALL<int>(v2[0], 132, ABundle::cBundle, "putLong", "(Ljava/lang/String;J)V");
      ABundle::mGetBool = G4_VCALL<int>(v2[0], 132, ABundle::cBundle, "getBoolean", "(Ljava/lang/String;)Z");
      ABundle::mPutBool = G4_VCALL<int>(v2[0], 132, ABundle::cBundle, "putBoolean", "(Ljava/lang/String;Z)V");
      ABundle::mContains = G4_VCALL<int>(v2[0], 132, ABundle::cBundle, "containsKey", "(Ljava/lang/String;)Z");
      ABundle::mClear = G4_VCALL<int>(v2[0], 132, ABundle::cBundle, "clear", "()V");
      ABundle::mGetByteArrays = G4_VCALL<int>(v2[0], 132, ABundle::cBundle, "getByteArray", "(Ljava/lang/String;)[B");
      result = G4_VCALL<int>(v2[0], 132, ABundle::cBundle, "putByteArray", "(Ljava/lang/String;[B)V");
      ABundle::mPutByteArrays = result;
      if ( v1 == 0 )
        return result;
    }
    else if ( v1 == 0 )
    {
      return result;
    }
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ABundle_Init  (binary VA: 0x4be320)
// Original: ABundle_Init
// ----------------------------------------------------------------------------
int ABundle_Init()
{
  return ABundle::init();
}

// ----------------------------------------------------------------------------
// Function: ABundle::New  (binary VA: 0x4be340)
// Original: ABundle::New
// ----------------------------------------------------------------------------
int ABundle::New()
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
    return JNIEnv::NewObject(v2, ABundle::cBundle, ABundle::mInit);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  v0 = JNIEnv::NewObject(v2, ABundle::cBundle, ABundle::mInit);
  G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: ABundle_New  (binary VA: 0x4be410)
// Original: ABundle_New
// ----------------------------------------------------------------------------
int ABundle_New()
{
  return ABundle::New();
}

// ----------------------------------------------------------------------------
// Function: ABundle::Clear  (binary VA: 0x4be430)
// Original: ABundle::Clear
// ----------------------------------------------------------------------------
int ABundle::Clear(int a1)
{
  int v2[4];

  v2[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v2, 65542) != -2 )
    return JNIEnv::CallVoidMethod(v2[0], a1, ABundle::mClear);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v2, 0);
  JNIEnv::CallVoidMethod(v2[0], a1, ABundle::mClear);
  return G4_VCALL<int>(AndroidOS_JavaVM, 20);
}

// ----------------------------------------------------------------------------
// Function: ABundle_Clear  (binary VA: 0x4be500)
// Original: ABundle_Clear
// ----------------------------------------------------------------------------
int ABundle_Clear(int a1)
{
  return ABundle::Clear(a1);
}

// ----------------------------------------------------------------------------
// Function: ABundle::charToString  (binary VA: 0x4be530)
// Original: ABundle::charToString
// ----------------------------------------------------------------------------
int ABundle::charToString(ABundle::Self *self)
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
// Function: ABundle::ContainsKey  (binary VA: 0x4be5f0)
// Original: ABundle::ContainsKey
// ----------------------------------------------------------------------------
int ABundle::ContainsKey(ABundle::Self *a1, int a2)
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
    v5 = ABundle::charToString(a1);
    v3 = JNIEnv::CallBooleanMethod(*(int *)v6, a2, ABundle::mContains, v5);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v5);
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v2 = ABundle::charToString(a1);
    v3 = JNIEnv::CallBooleanMethod(*(int *)v6, a2, ABundle::mContains, v2);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v2);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ABundle_ContainsKey  (binary VA: 0x4be710)
// Original: ABundle_ContainsKey
// ----------------------------------------------------------------------------
int ABundle_ContainsKey(ABundle::Self *a1, int a2)
{
  return ABundle::ContainsKey(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: ABundle::PutBool  (binary VA: 0x4be740)
// Original: ABundle::PutBool
// ----------------------------------------------------------------------------
int ABundle::PutBool(ABundle::Self *a1, uint8_t a2, int a3)
{
  int v3;
  int v5;
  char v6[4];

  *(uint32_t *)v6 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
    v5 = ABundle::charToString(a1);
    JNIEnv::CallVoidMethod(*(int *)v6, a3, ABundle::mPutBool, v5, a2);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v5);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v3 = ABundle::charToString(a1);
    JNIEnv::CallVoidMethod(*(int *)v6, a3, ABundle::mPutBool, v3, a2);
    return (*(int (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v3);
  }
}

// ----------------------------------------------------------------------------
// Function: ABundle_PutBool  (binary VA: 0x4be870)
// Original: ABundle_PutBool
// ----------------------------------------------------------------------------
int ABundle_PutBool(ABundle::Self *a1, char a2, int a3)
{
  return ABundle::PutBool(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: ABundle::ReadBool  (binary VA: 0x4be8b0)
// Original: ABundle::ReadBool
// ----------------------------------------------------------------------------
int ABundle::ReadBool(ABundle::Self *a1, char *a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  v7[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v7, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v7, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v2 = 0;
  if ( (uint8_t)ABundle::ContainsKey(a1, (int)(uintptr_t)a2) != 0 )
  {
    v5 = ABundle::charToString(a1);
    v3 = JNIEnv::CallBooleanMethod(v7[0], (int)(uintptr_t)a2, ABundle::mGetBool, v5);
    LOBYTE(v3) = (uint8_t)v3 != 0;
    v2 = v3;
    G4_VCALL<void>(v7[0], 92, v5);
  }
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ABundle_ReadBool  (binary VA: 0x4be9c0)
// Original: ABundle_ReadBool
// ----------------------------------------------------------------------------
int ABundle_ReadBool(ABundle::Self *a1, char *a2)
{
  return ABundle::ReadBool(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: ABundle::PutLong  (binary VA: 0x4be9f0)
// Original: ABundle::PutLong
// ----------------------------------------------------------------------------
int ABundle::PutLong(ABundle::Self *a1, int a2, int a3, int a4)
{
  int v4;
  int v6;
  char v7[4];

  *(uint32_t *)v7 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v7, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v7, 0);
    v6 = ABundle::charToString(a1);
    JNIEnv::CallVoidMethod(*(int *)v7, a4, ABundle::mPutLong, v6, a2, a3);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v7 + 92))(*(uint32_t *)v7, v6);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v4 = ABundle::charToString(a1);
    JNIEnv::CallVoidMethod(*(int *)v7, a4, ABundle::mPutLong, v4, a2, a3);
    return (*(int (**)(uint32_t, int))(**(uint32_t **)v7 + 92))(*(uint32_t *)v7, v4);
  }
}

// ----------------------------------------------------------------------------
// Function: ABundle_PutLong  (binary VA: 0x4beb30)
// Original: ABundle_PutLong
// ----------------------------------------------------------------------------
int ABundle_PutLong(ABundle::Self *a1, int a2, int a3, int a4)
{
  return ABundle::PutLong(a1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: ABundle::ReadLong  (binary VA: 0x4beb70)
// Original: ABundle::ReadLong
// ----------------------------------------------------------------------------
int ABundle::ReadLong(ABundle::Self *a1, char *a2)
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
  if ( (uint8_t)ABundle::ContainsKey(a1, (int)(uintptr_t)a2) != 0 )
  {
    v4 = ABundle::charToString(a1);
    v2 = JNIEnv::CallLongMethod(v6[0], (int)(uintptr_t)a2, ABundle::mGetLong, v4);
    G4_VCALL<void>(v6[0], 92, v4);
  }
  if ( v5 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ABundle_ReadLong  (binary VA: 0x4bec90)
// Original: ABundle_ReadLong
// ----------------------------------------------------------------------------
int ABundle_ReadLong(ABundle::Self *a1, char *a2)
{
  return ABundle::ReadLong(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: ABundle::PutInt  (binary VA: 0x4becc0)
// Original: ABundle::PutInt
// ----------------------------------------------------------------------------
int ABundle::PutInt(ABundle::Self *a1, int a2, int a3)
{
  int v3;
  int v5;
  char v6[4];

  *(uint32_t *)v6 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
    v5 = ABundle::charToString(a1);
    JNIEnv::CallVoidMethod(*(int *)v6, a3, ABundle::mPutInt, v5, a2);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v5);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v3 = ABundle::charToString(a1);
    JNIEnv::CallVoidMethod(*(int *)v6, a3, ABundle::mPutInt, v3, a2);
    return (*(int (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v3);
  }
}

// ----------------------------------------------------------------------------
// Function: ABundle_PutInt  (binary VA: 0x4bede0)
// Original: ABundle_PutInt
// ----------------------------------------------------------------------------
int ABundle_PutInt(ABundle::Self *a1, int a2, int a3)
{
  return ABundle::PutInt(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: ABundle::ReadInt  (binary VA: 0x4bee20)
// Original: ABundle::ReadInt
// ----------------------------------------------------------------------------
int ABundle::ReadInt(ABundle::Self *a1, char *a2)
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
  if ( (uint8_t)ABundle::ContainsKey(a1, (int)(uintptr_t)a2) != 0 )
  {
    v3 = ABundle::charToString(a1);
    v2 = JNIEnv::CallIntMethod(v6[0], (int)(uintptr_t)a2, ABundle::mGetInt, v3);
    G4_VCALL<void>(v6[0], 92, v3);
  }
  if ( v5 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: ABundle_ReadInt  (binary VA: 0x4bef30)
// Original: ABundle_ReadInt
// ----------------------------------------------------------------------------
int ABundle_ReadInt(ABundle::Self *a1, char *a2)
{
  return ABundle::ReadInt(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: ABundle::PutBArray  (binary VA: 0x4bef60)
// Original: ABundle::PutBArray
// ----------------------------------------------------------------------------
int ABundle::PutBArray(ABundle::Self *a1, int a2, int a3)
{
  int v3;
  int v5;
  char v6[4];

  *(uint32_t *)v6 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
    v5 = ABundle::charToString(a1);
    JNIEnv::CallVoidMethod(*(int *)v6, a3, ABundle::mPutByteArrays, v5, a2);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v5);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v3 = ABundle::charToString(a1);
    JNIEnv::CallVoidMethod(*(int *)v6, a3, ABundle::mPutByteArrays, v3, a2);
    return (*(int (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v3);
  }
}

// ----------------------------------------------------------------------------
// Function: ABundle_PutBArray  (binary VA: 0x4bf080)
// Original: ABundle_PutBArray
// ----------------------------------------------------------------------------
int ABundle_PutBArray(ABundle::Self *a1, int a2, int a3)
{
  return ABundle::PutBArray(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: ABundle::ReadBArray  (binary VA: 0x4bf0c0)
// Original: ABundle::ReadBArray
// ----------------------------------------------------------------------------
int ABundle::ReadBArray(ABundle::Self *a1, int a2)
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
    v5 = ABundle::charToString(a1);
    v3 = JNIEnv::CallObjectMethod(*(int *)v6, a2, ABundle::mGetByteArrays, v5);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v5);
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v2 = ABundle::charToString(a1);
    v3 = JNIEnv::CallObjectMethod(*(int *)v6, a2, ABundle::mGetByteArrays, v2);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v2);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: ABundle_ReadBArray  (binary VA: 0x4bf1e0)
// Original: ABundle_ReadBArray
// ----------------------------------------------------------------------------
int ABundle_ReadBArray(ABundle::Self *a1, int a2)
{
  return ABundle::ReadBArray(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: ABundle::ReadString  (binary VA: 0x4bf210)
// Original: ABundle::ReadString
// ----------------------------------------------------------------------------
int ABundle::ReadString(ABundle::Self *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;
  typedef int _g4_t_v7;
  typedef char _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  *(uint32_t *)v8 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v7 = ABundle::charToString(a1);
    v6 = JNIEnv::CallObjectMethod(*(int *)v8, a2, ABundle::mGetString, v7);
    v4 = (*(int (**)(uint32_t, int, uint32_t))(**(uint32_t **)v8 + 676))(*(uint32_t *)v8, v6, 0);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v8 + 92))(*(uint32_t *)v8, v7);
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v2 = ABundle::charToString(a1);
    v3 = JNIEnv::CallObjectMethod(*(int *)v8, a2, ABundle::mGetString, v2);
    v4 = (*(int (**)(uint32_t, int, uint32_t))(**(uint32_t **)v8 + 676))(*(uint32_t *)v8, v3, 0);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v8 + 92))(*(uint32_t *)v8, v2);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: ABundle_ReadString  (binary VA: 0x4bf360)
// Original: ABundle_ReadString
// ----------------------------------------------------------------------------
int ABundle_ReadString(ABundle::Self *a1, int a2)
{
  return ABundle::ReadString(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: ABundle::PutString  (binary VA: 0x4bf390)
// Original: ABundle::PutString
// ----------------------------------------------------------------------------
int ABundle::PutString(ABundle::Self *a1, ABundle::Self *a2, int a3)
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
    v6 = ABundle::charToString(a1);
    v7 = ABundle::charToString(a2);
    JNIEnv::CallVoidMethod(*(int *)v8, a3, ABundle::mPutString, v6, v7);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v8 + 92))(*(uint32_t *)v8, v6);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v8 + 92))(*(uint32_t *)v8, v7);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v3 = ABundle::charToString(a1);
    v4 = ABundle::charToString(a2);
    JNIEnv::CallVoidMethod(*(int *)v8, a3, ABundle::mPutString, v3, v4);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v8 + 92))(*(uint32_t *)v8, v3);
    return (*(int (**)(uint32_t, int))(**(uint32_t **)v8 + 92))(*(uint32_t *)v8, v4);
  }
}

// ----------------------------------------------------------------------------
// Function: ABundle_PutString  (binary VA: 0x4bf4e0)
// Original: ABundle_PutString
// ----------------------------------------------------------------------------
int ABundle_PutString(ABundle::Self *a1, ABundle::Self *a2, int a3)
{
  return ABundle::PutString(a1, a2, a3);
}

