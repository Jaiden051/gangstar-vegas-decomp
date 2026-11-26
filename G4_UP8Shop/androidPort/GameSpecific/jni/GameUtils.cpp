#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: GameUtils.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (66 funcs)
// ============================================================================
#include "GameUtils.h"
#include "../../../sources/Core/Memory/GameAllocator.h"

// ----------------------------------------------------------------------------
// Function: GameUtils_GetGameName  (binary VA: 0x4c17e0)
// Original: GameUtils_GetGameName
// ----------------------------------------------------------------------------
int GameUtils_GetGameName(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 0;
  v1 = sub_4C0730(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_GetDefaultIGP  (binary VA: 0x4c1830)
// Original: GameUtils_GetDefaultIGP
// ----------------------------------------------------------------------------
int GameUtils_GetDefaultIGP(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 1;
  v1 = sub_4C0730(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_GetInjectedIGP  (binary VA: 0x4c1880)
// Original: GameUtils_GetInjectedIGP
// ----------------------------------------------------------------------------
int GameUtils_GetInjectedIGP(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 2;
  v1 = sub_4C0730(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_GetInjectedSerialKey  (binary VA: 0x4c18d0)
// Original: GameUtils_GetInjectedSerialKey
// ----------------------------------------------------------------------------
int GameUtils_GetInjectedSerialKey(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 3;
  v1 = sub_4C0730(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_GetSDFolder  (binary VA: 0x4c1920)
// Original: GameUtils_GetSDFolder
// ----------------------------------------------------------------------------
int GameUtils_GetSDFolder(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 4;
  v1 = sub_4C0730(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_GetSaveFolder  (binary VA: 0x4c1970)
// Original: GameUtils_GetSaveFolder
// ----------------------------------------------------------------------------
int GameUtils_GetSaveFolder(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 5;
  v1 = sub_4C0730(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::setJavaVM  (binary VA: 0x4c2080)
// Original: GameUtils::setJavaVM
// ----------------------------------------------------------------------------
uint32_t * GameUtils::setJavaVM(int a1)
{
  GameUtils::mJavaVM[0] = a1;
  return (uint32_t *)GameUtils::mJavaVM;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::setSharedPrefence  (binary VA: 0x4c20a0)
// Original: GameUtils::setSharedPrefence
// ----------------------------------------------------------------------------
int GameUtils::setSharedPrefence(int a1, ABundle::Self *a2, int a3, ABundle::Self *a4)
{
  int v5[4];

  v5[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v5, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v5, 0);
    ABundle_PutInt((ABundle::Self *)"npDataType", a1, a3);
    ABundle_PutString((ABundle::Self *)"npKey", a2, a3);
    ABundle_PutString((ABundle::Self *)"npPrefName", a4, a3);
    sub_4BFF00(v5[0], GameUtils::mClassGLGame, GameUtils::msetSharedPreference, a3);
    G4_VCALL<void>(v5[0], 92, a3);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    ABundle_PutInt((ABundle::Self *)"npDataType", a1, a3);
    ABundle_PutString((ABundle::Self *)"npKey", a2, a3);
    ABundle_PutString((ABundle::Self *)"npPrefName", a4, a3);
    sub_4BFF00(v5[0], GameUtils::mClassGLGame, GameUtils::msetSharedPreference, a3);
    return G4_VCALL<int>(v5[0], 92, a3);
  }
}

// ----------------------------------------------------------------------------
// Function: GameUtils_SavePrefenceString  (binary VA: 0x4c2240)
// Original: GameUtils_SavePrefenceString
// ----------------------------------------------------------------------------
int GameUtils_SavePrefenceString(ABundle::Self *a1, ABundle::Self *a2, ABundle::Self *a3)
{
  int v3;

  v3 = ABundle_New();
  ABundle_PutString((ABundle::Self *)"npData", a2, v3);
  return GameUtils::setSharedPrefence(3, a1, v3, a3);
}

// ----------------------------------------------------------------------------
// Function: GameUtils_SavePrefenceBool  (binary VA: 0x4c22b0)
// Original: GameUtils_SavePrefenceBool
// ----------------------------------------------------------------------------
int GameUtils_SavePrefenceBool(ABundle::Self *a1, char a2, ABundle::Self *a3)
{
  int v3;

  v3 = ABundle_New();
  ABundle_PutBool((ABundle::Self *)"npData", a2, v3);
  return GameUtils::setSharedPrefence(2, a1, v3, a3);
}

// ----------------------------------------------------------------------------
// Function: GameUtils_SavePrefenceLong  (binary VA: 0x4c2330)
// Original: GameUtils_SavePrefenceLong
// ----------------------------------------------------------------------------
int GameUtils_SavePrefenceLong(ABundle::Self *a1, int a2, int a3, ABundle::Self *a4)
{
  int v4;

  v4 = ABundle_New();
  ABundle_PutLong((ABundle::Self *)"npData", a2, a3, v4);
  return GameUtils::setSharedPrefence(1, a1, v4, a4);
}

// ----------------------------------------------------------------------------
// Function: GameUtils_SavePrefenceInt  (binary VA: 0x4c23b0)
// Original: GameUtils_SavePrefenceInt
// ----------------------------------------------------------------------------
int GameUtils_SavePrefenceInt(ABundle::Self *a1, int a2, ABundle::Self *a3)
{
  int v3;

  v3 = ABundle_New();
  ABundle_PutInt((ABundle::Self *)"npData", a2, v3);
  return GameUtils::setSharedPrefence(0, a1, v3, a3);
}

// ----------------------------------------------------------------------------
// Function: GameUtils::getSharedPrefence  (binary VA: 0x4c2420)
// Original: GameUtils::getSharedPrefence
// ----------------------------------------------------------------------------
int GameUtils::getSharedPrefence(ABundle::Self *a1, int a2, ABundle::Self *a3)
{
  int v3;
  int v5[4];

  v5[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v5, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v5, 0);
    ABundle_PutString((ABundle::Self *)"npKey", a1, a2);
    ABundle_PutString((ABundle::Self *)"npPrefName", a3, a2);
    v3 = JNIEnv::CallStaticObjectMethod(v5[0], GameUtils::mClassGLGame, GameUtils::mgetSharedPreference, a2);
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
  else
  {
    ABundle_PutString((ABundle::Self *)"npKey", a1, a2);
    ABundle_PutString((ABundle::Self *)"npPrefName", a3, a2);
    return JNIEnv::CallStaticObjectMethod(v5[0], GameUtils::mClassGLGame, GameUtils::mgetSharedPreference, a2);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_ReadSharedPrefenceLong  (binary VA: 0x4c2570)
// Original: GameUtils_ReadSharedPrefenceLong
// ----------------------------------------------------------------------------
int GameUtils_ReadSharedPrefenceLong(ABundle::Self *a1, int a2, ABundle::Self *a3)
{
  int v3;
  char *SharedPrefence;

  v3 = ABundle_New();
  ABundle_PutInt((ABundle::Self *)"npDataType", 1, v3);
  ABundle_PutLong((ABundle::Self *)"npDefaultValue", a2, a2 >> 31, v3);
  SharedPrefence = (char *)GameUtils::getSharedPrefence(a1, v3, a3);
  return ABundle_ReadLong((ABundle::Self *)"npResult", SharedPrefence);
}

// ----------------------------------------------------------------------------
// Function: GameUtils_ReadSharedPrefenceInt  (binary VA: 0x4c2600)
// Original: GameUtils_ReadSharedPrefenceInt
// ----------------------------------------------------------------------------
int GameUtils_ReadSharedPrefenceInt(ABundle::Self *a1, int a2, ABundle::Self *a3)
{
  int v3;
  char *SharedPrefence;

  v3 = ABundle_New();
  ABundle_PutInt((ABundle::Self *)"npDataType", 0, v3);
  ABundle_PutInt((ABundle::Self *)"npDefaultValue", a2, v3);
  SharedPrefence = (char *)GameUtils::getSharedPrefence(a1, v3, a3);
  return ABundle_ReadInt((ABundle::Self *)"npResult", SharedPrefence);
}

// ----------------------------------------------------------------------------
// Function: GameUtils_ReadSharedPrefenceBool  (binary VA: 0x4c2680)
// Original: GameUtils_ReadSharedPrefenceBool
// ----------------------------------------------------------------------------
int GameUtils_ReadSharedPrefenceBool(ABundle::Self *a1, char a2, ABundle::Self *a3)
{
  int v3;
  char *SharedPrefence;

  v3 = ABundle_New();
  ABundle_PutInt((ABundle::Self *)"npDataType", 2, v3);
  ABundle_PutBool((ABundle::Self *)"npDefaultValue", a2, v3);
  SharedPrefence = (char *)GameUtils::getSharedPrefence(a1, v3, a3);
  return ABundle_ReadBool((ABundle::Self *)"npResult", SharedPrefence);
}

// ----------------------------------------------------------------------------
// Function: GameUtils_ReadSharedPrefenceString  (binary VA: 0x4c2720)
// Original: GameUtils_ReadSharedPrefenceString
// ----------------------------------------------------------------------------
int GameUtils_ReadSharedPrefenceString(int a1, ABundle::Self *a2, ABundle::Self *a3, ABundle::Self *a4)
{
  int v4;
  int SharedPrefence;
  char *String;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v4 = ABundle_New();
  ABundle_PutInt((ABundle::Self *)"npDataType", 3, v4);
  ABundle_PutString((ABundle::Self *)"npDefaultValue", a3, v4);
  SharedPrefence = GameUtils::getSharedPrefence(a2, v4, a4);
  String = (char *)ABundle_ReadString((ABundle::Self *)"npResult", SharedPrefence);
  g4_std::string::construct_from_cstr(a1, String, (int)(uintptr_t)&v8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::stopVideo  (binary VA: 0x4c27d0)
// Original: GameUtils::stopVideo
// ----------------------------------------------------------------------------
int GameUtils::stopVideo()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  v1 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v1, 65542) != -2 )
    return sub_4BFF00(v1, GameUtils::mClassGLGame, GameUtils::mstopVideo);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, &v1, 0);
  sub_4BFF00(v1, GameUtils::mClassGLGame, GameUtils::mstopVideo);
  return G4_VCALL<int>(AndroidOS_JavaVM, 20);
}

// ----------------------------------------------------------------------------
// Function: GameUtils_stopVideo  (binary VA: 0x4c28a0)
// Original: GameUtils_stopVideo
// ----------------------------------------------------------------------------
int GameUtils_stopVideo()
{
  return GameUtils::stopVideo();
}

// ----------------------------------------------------------------------------
// Function: GameUtils::videoSetSkipEnabled  (binary VA: 0x4c28c0)
// Original: GameUtils::videoSetSkipEnabled
// ----------------------------------------------------------------------------
int GameUtils::videoSetSkipEnabled(GameUtils::Self *self)
{
  int v2[4];

  v2[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v2, 65542) != -2 )
    return sub_4BFF00(v2[0], GameUtils::mClassGLGame, GameUtils::mvideoSetSkipEnabled, (uint8_t)(uintptr_t)self);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v2, 0);
  sub_4BFF00(v2[0], GameUtils::mClassGLGame, GameUtils::mvideoSetSkipEnabled, (uint8_t)(uintptr_t)self);
  return G4_VCALL<int>(AndroidOS_JavaVM, 20);
}

// ----------------------------------------------------------------------------
// Function: GameUtils_videoSetSkipEnabled  (binary VA: 0x4c29b0)
// Original: GameUtils_videoSetSkipEnabled
// ----------------------------------------------------------------------------
int GameUtils_videoSetSkipEnabled(uint8_t a1)
{
  return GameUtils::videoSetSkipEnabled((GameUtils::Self *)a1);
}

// ----------------------------------------------------------------------------
// Function: GameUtils::getGameName  (binary VA: 0x4c29e0)
// Original: GameUtils::getGameName
// ----------------------------------------------------------------------------
GameUtils::Self * GameUtils::getGameName(GameUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], GameUtils::mClassGLGame, GameUtils::mgetGameName);
  v2 = v8[0];
  v3 = v1;
  v5 = (char *)G4_VCALL<int>(v8[0], 676, v1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5, (int)(uintptr_t)&v7);
  G4_VCALL<void>(v2, 680, v3, v5);
  G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::getDefaultIGP  (binary VA: 0x4c2b10)
// Original: GameUtils::getDefaultIGP
// ----------------------------------------------------------------------------
GameUtils::Self * GameUtils::getDefaultIGP(GameUtils::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)self, "GGSS", (int)(uintptr_t)&v2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::getInjectedIGP  (binary VA: 0x4c2b60)
// Original: GameUtils::getInjectedIGP
// ----------------------------------------------------------------------------
GameUtils::Self * GameUtils::getInjectedIGP(GameUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], GameUtils::mClassGLGame, GameUtils::mgetInjectedIGP);
  v2 = v8[0];
  v3 = v1;
  v5 = (char *)G4_VCALL<int>(v8[0], 676, v1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5, (int)(uintptr_t)&v7);
  G4_VCALL<void>(v2, 680, v3, v5);
  G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::getInjectedSerialKey  (binary VA: 0x4c2c90)
// Original: GameUtils::getInjectedSerialKey
// ----------------------------------------------------------------------------
GameUtils::Self * GameUtils::getInjectedSerialKey(GameUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], GameUtils::mClassGLGame, GameUtils::mgetInjectedSerialKey);
  v2 = v8[0];
  v3 = v1;
  v5 = (char *)G4_VCALL<int>(v8[0], 676, v1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5, (int)(uintptr_t)&v7);
  G4_VCALL<void>(v2, 680, v3, v5);
  G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::showCantGoBack  (binary VA: 0x4c2dc0)
// Original: GameUtils::showCantGoBack
// ----------------------------------------------------------------------------
int GameUtils::showCantGoBack(GameUtils::Self *self)
{
  int v1;
  int result;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v3, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v3, 0);
  }
  else
  {
    v1 = 0;
  }
  sub_4BFF00(v3, GameUtils::mClassGLGame, GameUtils::mshowCantGoBack, self != nullptr);
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_ShowCantGoBack  (binary VA: 0x4c2e90)
// Original: GameUtils_ShowCantGoBack
// ----------------------------------------------------------------------------
int GameUtils_ShowCantGoBack(GameUtils::Self *a1)
{
  return GameUtils::showCantGoBack(a1);
}

// ----------------------------------------------------------------------------
// Function: GameUtils::getSDFolder  (binary VA: 0x4c2ec0)
// Original: GameUtils::getSDFolder
// ----------------------------------------------------------------------------
GameUtils::Self * GameUtils::getSDFolder(GameUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], GameUtils::mClassGLGame, GameUtils::mgetSDFolder);
  v2 = v8[0];
  v3 = v1;
  v5 = (char *)G4_VCALL<int>(v8[0], 676, v1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5, (int)(uintptr_t)&v7);
  G4_VCALL<void>(v2, 680, v3, v5);
  G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::getSaveFolder  (binary VA: 0x4c2ff0)
// Original: GameUtils::getSaveFolder
// ----------------------------------------------------------------------------
GameUtils::Self * GameUtils::getSaveFolder(GameUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], GameUtils::mClassGLGame, GameUtils::mgetSaveFolder);
  v2 = v8[0];
  v3 = v1;
  v5 = (char *)G4_VCALL<int>(v8[0], 676, v1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5, (int)(uintptr_t)&v7);
  G4_VCALL<void>(v2, 680, v3, v5);
  G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::IsAppEnc  (binary VA: 0x4c3120)
// Original: GameUtils::IsAppEnc
// ----------------------------------------------------------------------------
int GameUtils::IsAppEnc()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef char _g4_t_v9;
  typedef int _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v9)) > _g4_s2 ? (15u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
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
  v0 = 1;
  v1 = JNIEnv::CallStaticObjectMethod(v10[0], GameUtils::mClassGLGame, GameUtils::mIsAppEnc);
  v8 = v1;
  if ( v1 != 0 )
  {
    v7 = G4_VCALL<int>(v10[0], 684, v1);
    v2 = G4_VCALL<int>(v10[0], 748, v8, 0);
    if ( v2 != 0 )
    {
      if ( v7 <= 0 )
      {
LABEL_18:
        G4_VCALL<void>(v10[0], 780, v8, v2, 0);
        G4_VCALL<void>(v10[0], 92, v8);
      }
      else
      {
        v3 = 2021;
        v4 = 0;
        while ( 1 )
        {
          if ( v4 == 0 )
            v3 *= 2;
          v5 = *(uint32_t *)(v2 + 4 * v4);
          if ( v5 == 100000 * v3 + 50541 )
            break;
          if ( v5 > 0 )
            v0 = 0;
          if ( ++v4 == v7 )
            goto LABEL_18;
        }
        v0 = 1;
        G4_VCALL<void>(v10[0], 780, v8, v2, 0);
        G4_VCALL<void>(v10[0], 92, v8);
      }
    }
  }
  if ( v9 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_IsAppEnc  (binary VA: 0x4c3300)
// Original: GameUtils_IsAppEnc
// ----------------------------------------------------------------------------
int GameUtils_IsAppEnc()
{
  return GameUtils::IsAppEnc();
}

// ----------------------------------------------------------------------------
// Function: GameUtils::GetApkPath  (binary VA: 0x4c33d0)
// Original: GameUtils::GetApkPath
// ----------------------------------------------------------------------------
GameUtils::Self * GameUtils::GetApkPath(GameUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], GameUtils::mClassGLGame, GameUtils::mGetApkPath);
  v2 = v8[0];
  v3 = v1;
  v5 = (char *)G4_VCALL<int>(v8[0], 676, v1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5, (int)(uintptr_t)&v7);
  G4_VCALL<void>(v2, 680, v3, v5);
  G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_GetApkPath  (binary VA: 0x4c3500)
// Original: GameUtils_GetApkPath
// ----------------------------------------------------------------------------
GameUtils::Self * GameUtils_GetApkPath(GameUtils::Self *a1)
{
  GameUtils::GetApkPath(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::setConnectionType  (binary VA: 0x4c3540)
// Original: GameUtils::setConnectionType
// ----------------------------------------------------------------------------
uint32_t * GameUtils::setConnectionType(GameUtils::Self *self)
{
  GameUtils::s_bConnectionType = (uintptr_t)self;
  return (uint32_t *)&GameUtils::s_bConnectionType;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::getConnectionType  (binary VA: 0x4c3590)
// Original: GameUtils::getConnectionType
// ----------------------------------------------------------------------------
int GameUtils::getConnectionType()
{
  return GameUtils::s_bConnectionType;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_hasConnectivity  (binary VA: 0x4c35b0)
// Original: GameUtils_hasConnectivity
// ----------------------------------------------------------------------------
int GameUtils_hasConnectivity()
{
  return GameUtils::getConnectionType();
}

// ----------------------------------------------------------------------------
// Function: GameUtils::retrieveConnectionType  (binary VA: 0x4c35d0)
// Original: GameUtils::retrieveConnectionType
// ----------------------------------------------------------------------------
int GameUtils::retrieveConnectionType()
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
    return sub_4C17B0(v2, GameUtils::mClassGLGame, GameUtils::mSUtils_initRetrieveConnectionType);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  v0 = sub_4C17B0(v2, GameUtils::mClassGLGame, GameUtils::mSUtils_initRetrieveConnectionType);
  G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::init  (binary VA: 0x4c36a0)
// Original: GameUtils::init
// ----------------------------------------------------------------------------
void GameUtils::init(int a1)
{
  typedef char _g4_t_v1;
  typedef GameUtils::Self *_g4_t_v2[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v1)) > _g4_s0 ? (15u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v2)) > _g4_s1 ? (28u + sizeof(_g4_t_v2)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 15u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 28u);

  if ( GameUtils::mClassGLGame == 0 )
  {
    v2[0] = nullptr;
    if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v2, 65542) == -2 )
    {
      G4_VCALL<void>(AndroidOS_JavaVM, 16, v2, 0);
      v1 = 1;
    }
    else
    {
      v1 = 0;
    }
    GameUtils::mClassGLGame = G4_VCALL<int>(v2[0], 84, a1);
    GameUtils::mshareInfo = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "shareInfo", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    GameUtils::mplayVideo = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "playVideo", "(Ljava/lang/String;Z)Z");
    GameUtils::mstopVideo = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "stopVideo", "()V");
    GameUtils::mvideoSetSkipEnabled = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "inGameVideoSetSkipEnabled", "(Z)V");
    GameUtils::mGetAssetAsString = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "getAssetAsString", "(Ljava/lang/String;)[B");
    GameUtils::mgetGameName = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "getGameName", "()Ljava/lang/String;");
    GameUtils::mgetInjectedIGP = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "getInjectedIGP", "()Ljava/lang/String;");
    GameUtils::mgetInjectedSerialKey = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "getInjectedSerialKey", "()Ljava/lang/String;");
    GameUtils::mshowCantGoBack = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "showCantGoBackPopup", "(I)V");
    GameUtils::mgetSDFolder = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "getSDFolder", "()Ljava/lang/String;");
    GameUtils::mgetSaveFolder = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "getSaveFolder", "()Ljava/lang/String;");
    GameUtils::mIsAppEnc = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "retrieveBarrels", "()[I");
    GameUtils::mGenerateGLUID = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "getGLUID", "(Ljava/lang/String;)[I");
    GameUtils::mGetMetaDataValue = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "getMetaDataValue", "(Ljava/lang/String;)Ljava/lang/String;");
    GameUtils::mGetApkPath = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "GetApkPath", "()Ljava/lang/String;");
    GameUtils::mSUtils_initRetrieveConnectionType = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "initCheckConnectionType", "()I");
    GameUtils::s_bConnectionType = GameUtils::retrieveConnectionType();
    GameUtils::msetSharedPreference = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "nativeSetPreference", "(Landroid/os/Bundle;)V");
    GameUtils::mgetSharedPreference = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "nativeGetPreference", "(Landroid/os/Bundle;)Landroid/os/Bundle;");
    GameUtils::mgenericUnzipArchive = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "genericUnzipArchive", "(Ljava/lang/String;Ljava/lang/String;)Z");
    GameUtils::mdeleteFile = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "deleteFile", "(Ljava/lang/String;)V");
    GameUtils::mremoveDirectoryRecursively = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "removeDirectoryRecursively", "(Ljava/lang/String;)Z");
    GameUtils::mshowKeyboard = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "ShowKeyboard", "(Ljava/lang/String;I)V");
    GameUtils::mhideKeyboard = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "HideKeyboard", "()V");
    GameUtils::misKeyboardVisible = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "IsKeyboardVisible", "()Z");
    GameUtils::mgetKeyboardText = G4_VCALL<int>(v2[0], 452, GameUtils::mClassGLGame, "GetVirtualKeyboardText", "()Ljava/lang/String;");
    if ( v1 != 0 )
      G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
}

// ----------------------------------------------------------------------------
// Function: GameUtils_Init  (binary VA: 0x4c3c30)
// Original: GameUtils_Init
// ----------------------------------------------------------------------------
int GameUtils_Init(int a1)
{
  uint32_t *v1;
  void *v2;
  uint32_t *v3;
  void *v4;
  uint32_t *v5;
  void *v6;
  uint32_t *v7;
  void *v8;
  uint32_t *v9;
  void *v10;
  uint32_t *v11;
  int result;
  void *v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t _g4_t_v25[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v18)) > _g4_s4 ? (16u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v19)) > _g4_s5 ? (20u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v20)) > _g4_s6 ? (24u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v21)) > _g4_s7 ? (28u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v22)) > _g4_s8 ? (32u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v23)) > _g4_s9 ? (36u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v24)) > _g4_s10 ? (40u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v25)) > _g4_s11 ? (44u + sizeof(_g4_t_v25)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);

  GameUtils::init(a1);
  GameUtils::getGameName((GameUtils::Self *)&v15);
  v14 = 0;
  v1 = sub_4C0730(&v14);
  g4_std::string::assign_str(v1, &v15);
  v2 = (void *)(v15 - 12);
  if ( (void *)(v15 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  GameUtils::getDefaultIGP((GameUtils::Self *)&v17);
  v16 = 1;
  v3 = sub_4C0730(&v16);
  g4_std::string::assign_str(v3, &v17);
  v4 = (void *)(v17 - 12);
  if ( (void *)(v17 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  GameUtils::getInjectedIGP((GameUtils::Self *)&v19);
  v18 = 2;
  v5 = sub_4C0730(&v18);
  g4_std::string::assign_str(v5, &v19);
  v6 = (void *)(v19 - 12);
  if ( (void *)(v19 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  GameUtils::getInjectedSerialKey((GameUtils::Self *)&v21);
  v20 = 3;
  v7 = sub_4C0730(&v20);
  g4_std::string::assign_str(v7, &v21);
  v8 = (void *)(v21 - 12);
  if ( (void *)(v21 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  GameUtils::getSDFolder((GameUtils::Self *)&v23);
  v22 = 4;
  v9 = sub_4C0730(&v22);
  g4_std::string::assign_str(v9, &v23);
  v10 = (void *)(v23 - 12);
  if ( (void *)(v23 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  GameUtils::getSaveFolder((GameUtils::Self *)v25);
  v24 = 5;
  v11 = sub_4C0730(&v24);
  g4_std::string::assign_str(v11, v25);
  result = v25[0];
  v13 = (void *)(v25[0] - 12);
  if ( (void *)(v25[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
  {
  {
    g4_std::string::Rep::M_destroy(v13);
    return result;
  }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::charToString  (binary VA: 0x4c3ed0)
// Original: GameUtils::charToString
// ----------------------------------------------------------------------------
int GameUtils::charToString(GameUtils::Self *self)
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
// Function: GameUtils::playVideo  (binary VA: 0x4c3f90)
// Original: GameUtils::playVideo
// ----------------------------------------------------------------------------
int GameUtils::playVideo(GameUtils::Self *self, const char *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  char v10[4];

  *(uint32_t *)v10 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v10, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v10, 0);
    v7 = GameUtils::charToString(self);
    v8 = sub_4BFED0(*(int *)v10, GameUtils::mClassGLGame, GameUtils::mplayVideo, v7, (uint8_t)(uintptr_t)a2);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v10 + 92))(*(uint32_t *)v10, v7);
    v9 = v8;
    LOBYTE(v9) = (uint8_t)v8 != 0;
    v5 = v9;
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v2 = GameUtils::charToString(self);
    v3 = sub_4BFED0(*(int *)v10, GameUtils::mClassGLGame, GameUtils::mplayVideo, v2, (uint8_t)(uintptr_t)a2);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v10 + 92))(*(uint32_t *)v10, v2);
    v4 = v3;
    LOBYTE(v4) = (uint8_t)v3 != 0;
    return v4;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_playVideo  (binary VA: 0x4c40e0)
// Original: GameUtils_playVideo
// ----------------------------------------------------------------------------
int GameUtils_playVideo(GameUtils::Self *a1, uint8_t a2)
{
  return GameUtils::playVideo(a1, (const char *)a2);
}

// ----------------------------------------------------------------------------
// Function: GameUtils::shareInfo  (binary VA: 0x4c4110)
// Original: GameUtils::shareInfo
// ----------------------------------------------------------------------------
int GameUtils::shareInfo(GameUtils::Self *self, GameUtils::Self *a2, GameUtils::Self *a3)
{
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int v9;
  char v10[4];

  *(uint32_t *)v10 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v10, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v10, 0);
    v7 = GameUtils::charToString(self);
    v8 = GameUtils::charToString(a2);
    v9 = GameUtils::charToString(a3);
    sub_4BFF00(*(int *)v10, GameUtils::mClassGLGame, GameUtils::mshareInfo, v7, v8, v9);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v3 = GameUtils::charToString(self);
    v4 = GameUtils::charToString(a2);
    v5 = GameUtils::charToString(a3);
    return sub_4BFF00(*(int *)v10, GameUtils::mClassGLGame, GameUtils::mshareInfo, v3, v4, v5);
  }
}

// ----------------------------------------------------------------------------
// Function: GameUtils_shareInfo  (binary VA: 0x4c4250)
// Original: GameUtils_shareInfo
// ----------------------------------------------------------------------------
int GameUtils_shareInfo(GameUtils::Self *a1, GameUtils::Self *a2, GameUtils::Self *a3)
{
  return GameUtils::shareInfo(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: GameUtils::GetMetaDataValue  (binary VA: 0x4c4290)
// Original: GameUtils::GetMetaDataValue
// ----------------------------------------------------------------------------
GameUtils::Self * GameUtils::GetMetaDataValue(GameUtils::Self *self, GameUtils::Self *a2)
{
  int v2;
  int v3;
  int v4;
  typedef int _g4_t_v6;
  typedef char *_g4_t_v7;
  typedef char _g4_t_v8;
  typedef char _g4_t_v9[4];
  typedef int _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v8)) > _g4_s2 ? (15u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (27u + sizeof(_g4_t_v9)) > _g4_s3 ? (27u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v10)) > _g4_s4 ? (28u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 15u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 27u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v10[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v10, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v10, 0);
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  v6 = GameUtils::charToString(a2);
  v2 = JNIEnv::CallStaticObjectMethod(v10[0], GameUtils::mClassGLGame, GameUtils::mGetMetaDataValue, v6);
  v3 = v10[0];
  v4 = v2;
  v7 = (v4 != 0) ? (char *)G4_VCALL<int>(v3, 676, v4, 0) : nullptr;
  if ( v6 != 0 ) G4_VCALL<void>(v3, 92, v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v7 != nullptr ? v7 : (char *)"", (int)(uintptr_t)v9);
  if ( v7 != nullptr ) G4_VCALL<void>(v3, 680, v4, v7);
  if ( v4 != 0 ) G4_VCALL<void>(v3, 92, v4);
  if ( v8 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_GetMetaDataValue  (binary VA: 0x4c43e0)
// Original: GameUtils_GetMetaDataValue
// ----------------------------------------------------------------------------
GameUtils::Self * GameUtils_GetMetaDataValue(GameUtils::Self *a1, GameUtils::Self *a2)
{
  GameUtils::GetMetaDataValue(a1, a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::GenerateGLUID  (binary VA: 0x4c4420)
// Original: GameUtils::GenerateGLUID
// ----------------------------------------------------------------------------
int GameUtils::GenerateGLUID(GameUtils::Self **a1)
{
  int v1;
  int result;
  int v3;
  char *v4;
  unsigned int v5;
  int v6;
  bool v7;
  unsigned int v8;
  int v9;
  char *v10;
  int v11;
  int v12;
  char *v13;
  unsigned int v14;
  size_t n;
  int v16;
  char *v17;
  int v18;
  typedef void *_g4_t_dest;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef size_t _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef char *_g4_t_v29;
  typedef void *_g4_t_v30;
  typedef char *_g4_t_src;
  typedef uint8_t *_g4_t_v32;
  typedef char _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char *_g4_t_v35;
  typedef char _g4_t_v36[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v23)) > _g4_s4 ? (16u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v24)) > _g4_s5 ? (16u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v25)) > _g4_s6 ? (20u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v26)) > _g4_s7 ? (20u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v27)) > _g4_s8 ? (20u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v28)) > _g4_s9 ? (20u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v29)) > _g4_s10 ? (24u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v30)) > _g4_s11 ? (24u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_src)) > _g4_s12 ? (28u + sizeof(_g4_t_src)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v32)) > _g4_s13 ? (32u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (39u + sizeof(_g4_t_v33)) > _g4_s14 ? (39u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v34)) > _g4_s15 ? (40u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v35)) > _g4_s16 ? (44u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v36)) > _g4_s17 ? (60u + sizeof(_g4_t_v36)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 39u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);

  *(uint32_t *)v36 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v36, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v36, 0);
    v33 = 1;
  }
  else
  {
    v33 = 0;
  }
  v1 = GameUtils::charToString(*a1);
  result = JNIEnv::CallStaticObjectMethod(*(int *)v36, GameUtils::mClassGLGame, GameUtils::mGenerateGLUID, v1);
  v3 = result;
  if ( result == 0 )
    goto LABEL_21;
  src = (char *)(*(int (**)(uint32_t, int, uint32_t))(**(uint32_t **)v36 + 748))(*(uint32_t *)v36, result, 0);
  v32 = (uint8_t *)GameUtils::GLUid[0];
  v4 = (char *)GameUtils::GLUid[1];
  if ( (unsigned int)(GameUtils::GLUid[2] - (uintptr_t)v4) > 0xF )
  {
    v14 = (int)(uintptr_t)&v4[-GameUtils::GLUid[0]] >> 2;
    v30 = (void *)v14;
    if ( v14 > 4 )
    {
      v24 = GameUtils::GLUid[1];
      v28 = v4 - 16;
      memmove(v4, v4 - 16, 0x10u);
      GameUtils::GLUid[1] += 16;
      if ( (v28 - (char *)v32) >> 2 != 0 )
        memmove((void *)(v24 - 4 * ((v28 - (char *)v32) >> 2)), v32, 4 * ((v28 - (char *)v32) >> 2));
      memmove(v32, src, 0x10u);
    }
    else
    {
      n = 4 * v14;
      v35 = &src[4 * v14];
      v16 = (int)(16 - 4 * v14) >> 2;
      if ( v16 != 0 )
      {
        v26 = n;
        memmove(v4, v35, 4 * v16);
        v4 = (char *)GameUtils::GLUid[1];
        n = v26;
      }
      v17 = &v4[4 * (4 - (uintptr_t)v30)];
      GameUtils::GLUid[1] = (uintptr_t)v17;
      if ( v30 != nullptr )
      {
        v27 = n;
        memmove(v17, v32, n);
        v17 = (char *)GameUtils::GLUid[1];
        n = v27;
      }
      GameUtils::GLUid[1] = (uintptr_t)&v17[n];
      if ( (v35 - src) >> 2 != 0 )
        memmove(v32, src, 4 * ((v35 - src) >> 2));
    }
    goto LABEL_18;
  }
  v5 = (int)(uintptr_t)&v4[-GameUtils::GLUid[0]] >> 2;
  if ( 0x3FFFFFFF - v5 < 4 )
    sub_1900180("vector::_M_range_insert");
  v6 = (int)(uintptr_t)&v4[-GameUtils::GLUid[0]] >> 2;
  v34 = -4;
  if ( v5 <= 4 )
    v6 = 4;
  v7 = __CFADD__(v5, v6);
  v8 = v5 + v6;
  if ( !v7 && v8 <= 0x3FFFFFFF )
  {
    if ( v8 == 0 )
    {
      v29 = nullptr;
      v34 = 0;
      goto LABEL_12;
    }
    v34 = 4 * v8;
  }
  v29 = (char *)opNew(v34);
  v18 = (int)(uintptr_t)&v32[-GameUtils::GLUid[0]] >> 2;
  if ( v18 != 0 )
  {
    v23 = 4 * v18;
    memmove(v29, (const void *)GameUtils::GLUid[0], 4 * v18);
    v9 = v23;
    goto LABEL_13;
  }
LABEL_12:
  v9 = 0;
LABEL_13:
  v20 = &v29[v9];
  memmove(&v29[v9], src, 0x10u);
  v10 = v20 + 16;
  v11 = 0;
  v12 = (GameUtils::GLUid[1] - (int)(uintptr_t)v32) >> 2;
  if ( v12 != 0 )
  {
    dest = v20 + 16;
    v21 = 4 * v12;
    v25 = v10;
    memmove(dest, v32, 4 * v12);
    v10 = v25;
    v11 = v21;
  }
  v13 = &v10[v11];
  if ( GameUtils::GLUid[0] != 0 )
  {
    v22 = v13;
    opDelete((void *)GameUtils::GLUid[0]);
    v13 = v22;
  }
  GameUtils::GLUid[1] = (uintptr_t)v13;
  GameUtils::GLUid[0] = (uintptr_t)v29;
  GameUtils::GLUid[2] = (uintptr_t)&v29[v34];
LABEL_18:
  if ( v1 != 0 )
    (*(void (**)(uint32_t, int))(**(uint32_t **)v36 + 92))(*(uint32_t *)v36, v1);
  (*(void (**)(uint32_t, int, char *, uint32_t))(**(uint32_t **)v36 + 780))(*(uint32_t *)v36, v3, src, 0);
  result = (*(int (**)(uint32_t, int))(**(uint32_t **)v36 + 92))(*(uint32_t *)v36, v3);
LABEL_21:
  if ( v33 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_GetGLUID  (binary VA: 0x4c47f0)
// Original: GameUtils_GetGLUID
// ----------------------------------------------------------------------------
uint32_t * GameUtils_GetGLUID(int a1, uint32_t *a2, GameUtils::Self **a3)
{
  unsigned int v3;
  int v4;
  char *dest;
  int v6;
  int v7;
  int v9;

  v3 = (GameUtils::GLUid[1] - GameUtils::GLUid[0]) >> 2;
  if ( v3 == 0 )
  {
    GameUtils::GenerateGLUID(a3);
    v3 = (GameUtils::GLUid[1] - GameUtils::GLUid[0]) >> 2;
  }
  v4 = 0;
  dest = nullptr;
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  if ( v3 != 0 )
  {
    if ( v3 > 0x3FFFFFFF )
      sub_18FFEE0(a1, 0);
    v9 = 4 * v3;
    dest = (char *)opNew(4 * v3);
    v4 = v9;
  }
  *a2 = (uint32_t)(uintptr_t)dest;
  a2[1] = (uint32_t)(uintptr_t)dest;
  a2[2] = (uint32_t)(uintptr_t)&dest[v4];
  v6 = 0;
  v7 = (GameUtils::GLUid[1] - GameUtils::GLUid[0]) >> 2;
  if ( v7 != 0 )
  {
    v6 = 4 * v7;
    memmove(dest, (const void *)GameUtils::GLUid[0], 4 * v7);
  }
  a2[1] = (uint32_t)(uintptr_t)&dest[v6];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::genericUnzipArchive  (binary VA: 0x4c48e0)
// Original: GameUtils::genericUnzipArchive
// ----------------------------------------------------------------------------
bool GameUtils::genericUnzipArchive(GameUtils::Self *self, const char *a2)
{
  int v2;
  int v3;
  typedef bool _g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v5)) > _g4_s0 ? (14u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 14u);
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
  v2 = G4_VCALL<int>(v7[0], 668, self);
  v3 = G4_VCALL<int>(v7[0], 668, a2);
  v5 = (uint8_t)sub_4BFED0(v7[0], GameUtils::mClassGLGame, GameUtils::mgenericUnzipArchive, v2, v3) != 0;
  G4_VCALL<void>(v7[0], 92, v2);
  G4_VCALL<void>(v7[0], 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_genericUnzipArchive  (binary VA: 0x4c4a10)
// Original: GameUtils_genericUnzipArchive
// ----------------------------------------------------------------------------
bool GameUtils_genericUnzipArchive(GameUtils::Self *a1, char *a2)
{
  return GameUtils::genericUnzipArchive(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: GameUtils::deleteFile  (binary VA: 0x4c4a40)
// Original: GameUtils::deleteFile
// ----------------------------------------------------------------------------
int GameUtils::deleteFile(GameUtils::Self *self)
{
  int v1;
  int v3;
  int v4[4];

  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
    v3 = G4_VCALL<int>(v4[0], 668, self);
    sub_4BFF00(v4[0], GameUtils::mClassGLGame, GameUtils::mdeleteFile, v3);
    G4_VCALL<void>(v4[0], 92, v3);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v1 = G4_VCALL<int>(v4[0], 668, self);
    sub_4BFF00(v4[0], GameUtils::mClassGLGame, GameUtils::mdeleteFile, v1);
    return G4_VCALL<int>(v4[0], 92, v1);
  }
}

// ----------------------------------------------------------------------------
// Function: GameUtils_deleteFile  (binary VA: 0x4c4b70)
// Original: GameUtils_deleteFile
// ----------------------------------------------------------------------------
int GameUtils_deleteFile(GameUtils::Self *a1)
{
  return GameUtils::deleteFile(a1);
}

// ----------------------------------------------------------------------------
// Function: GameUtils::removeDirectoryRecursively  (binary VA: 0x4c4ba0)
// Original: GameUtils::removeDirectoryRecursively
// ----------------------------------------------------------------------------
int GameUtils::removeDirectoryRecursively(GameUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v5;
  int v6;
  int v7[4];

  v7[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v7, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v7, 0);
    v5 = G4_VCALL<int>(v7[0], 668, self);
    v6 = sub_4BFED0(v7[0], GameUtils::mClassGLGame, GameUtils::mremoveDirectoryRecursively, v5);
    LOBYTE(v6) = (uint8_t)v6 != 0;
    v3 = v6;
    G4_VCALL<void>(v7[0], 92, v5);
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v1 = G4_VCALL<int>(v7[0], 668, self);
    v2 = sub_4BFED0(v7[0], GameUtils::mClassGLGame, GameUtils::mremoveDirectoryRecursively, v1);
    LOBYTE(v2) = (uint8_t)v2 != 0;
    v3 = v2;
    G4_VCALL<void>(v7[0], 92, v1);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_removeDirectoryRecursively  (binary VA: 0x4c4ce0)
// Original: GameUtils_removeDirectoryRecursively
// ----------------------------------------------------------------------------
int GameUtils_removeDirectoryRecursively(GameUtils::Self *a1)
{
  return GameUtils::removeDirectoryRecursively(a1);
}

// ----------------------------------------------------------------------------
// Function: GameUtils::showKeyboard  (binary VA: 0x4c4d10)
// Original: GameUtils::showKeyboard
// ----------------------------------------------------------------------------
int GameUtils::showKeyboard(int *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int result;
  int v6[4];

  v6[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
    v2 = *a1;
    v3 = 1;
    if ( *(uint32_t *)(*a1 - 12) != 0 )
      goto LABEL_3;
  }
  else
  {
    v2 = *a1;
    v3 = 0;
    if ( *(uint32_t *)(*a1 - 12) != 0 )
      goto LABEL_3;
  }
  if ( g4_std::string::compare((int)(uintptr_t)a1, (char *)&unk_1B15112) != 0 )
  {
    sub_4BFF00(v6[0], GameUtils::mClassGLGame, GameUtils::mshowKeyboard, 0, a2);
    goto LABEL_5;
  }
  v2 = *a1;
LABEL_3:
  v4 = G4_VCALL<int>(v6[0], 668, v2);
  sub_4BFF00(v6[0], GameUtils::mClassGLGame, GameUtils::mshowKeyboard, v4, a2);
  if ( v4 != 0 )
    G4_VCALL<void>(v6[0], 92, v4);
LABEL_5:
  result = v3;
  if ( (uint8_t)v3 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_ShowKeyboard  (binary VA: 0x4c4e80)
// Original: GameUtils_ShowKeyboard
// ----------------------------------------------------------------------------
int GameUtils_ShowKeyboard(int *a1, int a2, int a3)
{
  int result;
  int v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v8)) > _g4_s3 ? (16u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  result = a2;
  g_CallbackAppKeyboardReceiver = a2;
  if ( a2 != 0 )
  {
    if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
    {
      v4 = 1;
      G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    }
    else
    {
      v4 = 0;
    }
    if ( v8[0] != 0 )
      GameUtils::showKeyboard(a1, a3);
    result = v4;
    if ( (uint8_t)v4 != 0 )
      return G4_VCALL<int>(AndroidOS_JavaVM, 20, v5, v6, v7, v8[0], v8[1], v8[2], v8[3]);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::hideKeyboard  (binary VA: 0x4c4f40)
// Original: GameUtils::hideKeyboard
// ----------------------------------------------------------------------------
int GameUtils::hideKeyboard()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  v1 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v1, 65542) != -2 )
    return sub_4BFF00(v1, GameUtils::mClassGLGame, GameUtils::mhideKeyboard);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, &v1, 0);
  sub_4BFF00(v1, GameUtils::mClassGLGame, GameUtils::mhideKeyboard);
  return G4_VCALL<int>(AndroidOS_JavaVM, 20);
}

// ----------------------------------------------------------------------------
// Function: GameUtils_HideKeyboard  (binary VA: 0x4c5010)
// Original: GameUtils_HideKeyboard
// ----------------------------------------------------------------------------
int GameUtils_HideKeyboard()
{
  return GameUtils::hideKeyboard();
}

// ----------------------------------------------------------------------------
// Function: GameUtils::isKeyboardVisible  (binary VA: 0x4c5030)
// Original: GameUtils::isKeyboardVisible
// ----------------------------------------------------------------------------
int GameUtils::isKeyboardVisible()
{
  int v0;
  int v1;
  int v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v4 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v4, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v4, 0);
    v3 = sub_4BFED0(v4, GameUtils::mClassGLGame, GameUtils::misKeyboardVisible);
    LOBYTE(v3) = (uint8_t)v3 != 0;
    v1 = v3;
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v0 = sub_4BFED0(v4, GameUtils::mClassGLGame, GameUtils::misKeyboardVisible);
    LOBYTE(v0) = (uint8_t)v0 != 0;
    return v0;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_IsKeyboardVisible  (binary VA: 0x4c5110)
// Original: GameUtils_IsKeyboardVisible
// ----------------------------------------------------------------------------
int GameUtils_IsKeyboardVisible()
{
  return GameUtils::isKeyboardVisible();
}

// ----------------------------------------------------------------------------
// Function: GameUtils::getKeyboardText  (binary VA: 0x4c5130)
// Original: GameUtils::getKeyboardText
// ----------------------------------------------------------------------------
GameUtils::Self * GameUtils::getKeyboardText(GameUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], GameUtils::mClassGLGame, GameUtils::mgetKeyboardText);
  v2 = v8[0];
  v3 = v1;
  v5 = (char *)G4_VCALL<int>(v8[0], 676, v1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5, (int)(uintptr_t)&v7);
  G4_VCALL<void>(v2, 680, v3, v5);
  G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_GetKeyboardText  (binary VA: 0x4c5260)
// Original: GameUtils_GetKeyboardText
// ----------------------------------------------------------------------------
GameUtils::Self * GameUtils_GetKeyboardText(GameUtils::Self *a1)
{
  GameUtils::getKeyboardText(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::sendKeyboardTextCB  (binary VA: 0x4c52a0)
// Original: GameUtils::sendKeyboardTextCB
// ----------------------------------------------------------------------------
int GameUtils::sendKeyboardTextCB(int a1)
{
  int v1;
  char *v2;
  int result;
  typedef char *_g4_t_v4;
  typedef void (*_g4_t_v5)(int *);
  typedef char _g4_t_v6;
  typedef void *_g4_t_v7;
  typedef uint16_t _g4_t_v8[3];
  typedef int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v5)) > _g4_s1 ? (20u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v6)) > _g4_s2 ? (27u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v7)) > _g4_s3 ? (28u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (38u + sizeof(_g4_t_v8)) > _g4_s4 ? (38u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v9)) > _g4_s5 ? (44u + sizeof(_g4_t_v9)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 27u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 38u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);

  *(uint32_t *)&v8[1] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v8[1], 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v8[1], 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = *(uint32_t *)&v8[1];
  v2 = (char *)(*(int (**)(uint32_t, int, uint32_t))(**(uint32_t **)&v8[1] + 676))(*(uint32_t *)&v8[1], a1, 0);
  if ( g_CallbackAppKeyboardReceiver != 0 )
  {
    v4 = v2;
    v5 = (void (*)(int *))g_CallbackAppKeyboardReceiver;
    g4_std::string::construct_from_cstr((int)(uintptr_t)v9, v2, (int)(uintptr_t)v8);
    v5(v9);
    v2 = v4;
    v7 = (void *)(v9[0] - 12);
    if ( (void *)(v9[0] - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
      v2 = v4;
    }
  }
  G4_VCALL<void>(v1, 680, a1, v2);
  result = G4_VCALL<int>(v1, 92, a1);
  if ( v6 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_setJavaVM  (binary VA: 0x4c5510)
// Original: GameUtils_setJavaVM
// ----------------------------------------------------------------------------
int GameUtils_setJavaVM(int a1)
{
  DeviceUtils::setJavaVM(a1);
  GameUtils::setJavaVM(a1);
  return (int)(uintptr_t)acp_utils::HidController::Init(a1);
}

// ----------------------------------------------------------------------------
// Function: GameUtils::GetAssetResource  (binary VA: 0x4c88d0)
// Original: GameUtils::GetAssetResource
// ----------------------------------------------------------------------------
int GameUtils::GetAssetResource(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_v9)) > _g4_s2 ? (15u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (27u + sizeof(_g4_t_v10)) > _g4_s3 ? (27u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 15u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 27u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v11[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v11, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v11, 0);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  v8 = G4_VCALL<int>(v11[0], 668, *a2);
  v2 = JNIEnv::CallStaticObjectMethod(v11[0], GameUtils::mClassGLGame, GameUtils::mGetAssetAsString, v8);
  *(uint32_t *)a1 = 0;
  *(uint32_t *)(a1 + 4) = 0;
  *(uint32_t *)(a1 + 8) = 0;
  if ( v2 != 0 )
  {
    v3 = G4_VCALL<int>(v11[0], 684, v2);
    v4 = *(uint32_t *)a1;
    v10 = 0;
    v5 = *(uint32_t *)(a1 + 4) - v4;
    if ( v3 > v5 )
    {
      v7 = v3;
      {
        void *buf = (void *)(uintptr_t)opNew(v3);
        memset(buf, 0, v3);
        if (*(uint32_t *)a1) opDelete((void *)(uintptr_t)*(uint32_t *)a1);
        *(uint32_t *)a1 = (uint32_t)(uintptr_t)buf;
        *(uint32_t *)(a1 + 4) = *(uint32_t *)a1 + v3;
        *(uint32_t *)(a1 + 8) = *(uint32_t *)a1 + v3;
      }
      v3 = v7;
      if ( v7 <= 0 )
        goto LABEL_9;
    }
    else
    {
      if ( v3 < v5 )
        *(uint32_t *)(a1 + 4) = v3 + v4;
      if ( v3 <= 0 )
        goto LABEL_9;
    }
    G4_VCALL<void>(v11[0], 800, v2, 0, v3, *(uint32_t *)a1);
LABEL_9:
    G4_VCALL<void>(v11[0], 92, v2);
  }
  G4_VCALL<void>(v11[0], 92, v8);
  if ( v9 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_GetAssetResource  (binary VA: 0x4c8a90)
// Original: GameUtils_GetAssetResource
// ----------------------------------------------------------------------------
int GameUtils_GetAssetResource(int a1, uint32_t *a2)
{
  GameUtils::GetAssetResource(a1, a2);
  return a1;
}

