#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: DataSharing.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (22 funcs)
// ============================================================================
#include "DataSharing.h"
#include "../../../sources/Core/Memory/GameAllocator.h"

// ----------------------------------------------------------------------------
// Function: DataSharing::init  (binary VA: 0x4bff30)
// Original: DataSharing::init
// ----------------------------------------------------------------------------
int DataSharing::init(int a1)
{
  int result;
  typedef char _g4_t_v2;
  typedef uint32_t _g4_t_v3[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v2)) > _g4_s0 ? (15u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v3)) > _g4_s1 ? (28u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 15u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 28u);

  result = DataSharing::mClassGLGame;
  if ( DataSharing::mClassGLGame == 0 )
  {
    v3[0] = 0;
    if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v3, 65542) == -2 )
    {
      G4_VCALL<void>(AndroidOS_JavaVM, 16, v3, 0);
      v2 = 1;
    }
    else
    {
      v2 = 0;
    }
    DataSharing::mClassGLGame = G4_VCALL<int>(v3[0], 84, a1);
    DataSharing::mSetSharedValue = G4_VCALL<int>(v3[0], 452, DataSharing::mClassGLGame, "setSharedValue", "(Ljava/lang/String;Ljava/lang/String;)V");
    DataSharing::mGetSharedValue = G4_VCALL<int>(v3[0], 452, DataSharing::mClassGLGame, "getSharedValue", "(Ljava/lang/String;)Ljava/lang/String;");
    DataSharing::mDeleteSharedValue = G4_VCALL<int>(v3[0], 452, DataSharing::mClassGLGame, "deleteSharedValue", "(Ljava/lang/String;)V");
    result = G4_VCALL<int>(v3[0], 452, DataSharing::mClassGLGame, "isSharedValue", "(Ljava/lang/String;)Z");
    DataSharing::mIsSharedValue = result;
    if ( v2 != 0 )
      return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_DataSharing_nativeInit  (binary VA: 0x4c00c0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_DataSharing_nativeInit
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_DataSharing_nativeInit(int a1, int a2)
{
  return DataSharing::init(a2);
}

// ----------------------------------------------------------------------------
// Function: DataSharing::charToString  (binary VA: 0x4c00f0)
// Original: DataSharing::charToString
// ----------------------------------------------------------------------------
int DataSharing::charToString(DataSharing::Self *self)
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
// Function: DataSharing::isSharedValue  (binary VA: 0x4c01b0)
// Original: DataSharing::isSharedValue
// ----------------------------------------------------------------------------
int DataSharing::isSharedValue(DataSharing::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;
  char v9[4];

  *(uint32_t *)v9 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v9, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v9, 0);
    v6 = DataSharing::charToString(self);
    v7 = sub_4BFED0(*(int *)v9, DataSharing::mClassGLGame, DataSharing::mIsSharedValue, v6);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v9 + 92))(*(uint32_t *)v9, v6);
    v8 = v7;
    LOBYTE(v8) = (uint8_t)v7 != 0;
    v4 = v8;
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v1 = DataSharing::charToString(self);
    v2 = sub_4BFED0(*(int *)v9, DataSharing::mClassGLGame, DataSharing::mIsSharedValue, v1);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v9 + 92))(*(uint32_t *)v9, v1);
    v3 = v2;
    LOBYTE(v3) = (uint8_t)v2 != 0;
    return v3;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: DataSharing_isSharedValue  (binary VA: 0x4c02e0)
// Original: DataSharing_isSharedValue
// ----------------------------------------------------------------------------
int DataSharing_isSharedValue(DataSharing::Self *a1)
{
  return DataSharing::isSharedValue(a1);
}

// ----------------------------------------------------------------------------
// Function: DataSharing::deleteSharedValue  (binary VA: 0x4c0310)
// Original: DataSharing::deleteSharedValue
// ----------------------------------------------------------------------------
int DataSharing::deleteSharedValue(DataSharing::Self *self)
{
  int v1;
  int v3;
  char v4[4];

  *(uint32_t *)v4 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
    v3 = DataSharing::charToString(self);
    sub_4BFF00(*(int *)v4, DataSharing::mClassGLGame, DataSharing::mDeleteSharedValue, v3);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v4 + 92))(*(uint32_t *)v4, v3);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v1 = DataSharing::charToString(self);
    sub_4BFF00(*(int *)v4, DataSharing::mClassGLGame, DataSharing::mDeleteSharedValue, v1);
    return (*(int (**)(uint32_t, int))(**(uint32_t **)v4 + 92))(*(uint32_t *)v4, v1);
  }
}

// ----------------------------------------------------------------------------
// Function: DataSharing_deleteSharedValue  (binary VA: 0x4c0420)
// Original: DataSharing_deleteSharedValue
// ----------------------------------------------------------------------------
int DataSharing_deleteSharedValue(DataSharing::Self *a1)
{
  return DataSharing::deleteSharedValue(a1);
}

// ----------------------------------------------------------------------------
// Function: DataSharing::setSharedValue  (binary VA: 0x4c0450)
// Original: DataSharing::setSharedValue
// ----------------------------------------------------------------------------
int DataSharing::setSharedValue(DataSharing::Self *self, DataSharing::Self *a2)
{
  int v2;
  int v3;
  int result;
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
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    v2 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
  }
  v3 = DataSharing::charToString(self);
  v5 = DataSharing::charToString(a2);
  sub_4BFF00(*(int *)v6, DataSharing::mClassGLGame, DataSharing::mSetSharedValue, v3, v5);
  (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v3);
  (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v5);
  result = v2;
  if ( (uint8_t)v2 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: DataSharing_setSharedValue  (binary VA: 0x4c0550)
// Original: DataSharing_setSharedValue
// ----------------------------------------------------------------------------
int DataSharing_setSharedValue(DataSharing::Self *a1, DataSharing::Self *a2)
{
  return DataSharing::setSharedValue(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: DataSharing::getSharedValue  (binary VA: 0x4c0580)
// Original: DataSharing::getSharedValue
// ----------------------------------------------------------------------------
DataSharing::Self * DataSharing::getSharedValue(DataSharing::Self *self, DataSharing::Self *a2)
{
  int v2;
  int v3;
  char *v4;
  typedef char _g4_t_v6;
  typedef char _g4_t_v7[4];
  typedef int _g4_t_v8[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (25u + sizeof(_g4_t_v8)) > _g4_s2 ? (25u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 25u);

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
  v2 = DataSharing::charToString(a2);
  v3 = JNIEnv::CallStaticObjectMethod(v8[0], DataSharing::mClassGLGame, DataSharing::mGetSharedValue, v2);
  G4_VCALL<void>(v8[0], 92, v2);
  v4 = (char *)G4_VCALL<int>(v8[0], 676, v3, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v4, (int)(uintptr_t)v7);
  G4_VCALL<void>(v8[0], 680, v3, v4);
  G4_VCALL<void>(v8[0], 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DataSharing_getSharedValue  (binary VA: 0x4c06c0)
// Original: DataSharing_getSharedValue
// ----------------------------------------------------------------------------
DataSharing::Self * DataSharing_getSharedValue(DataSharing::Self *a1, DataSharing::Self *a2)
{
  DataSharing::getSharedValue(a1, a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DataSharingGangstar::init  (binary VA: 0x4df830)
// Original: DataSharingGangstar::init
// ----------------------------------------------------------------------------
int DataSharingGangstar::init(int a1)
{
  int result;
  typedef char _g4_t_v2;
  typedef uint32_t _g4_t_v3[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v2)) > _g4_s0 ? (15u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v3)) > _g4_s1 ? (28u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 15u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 28u);

  result = DataSharingGangstar::mClassGLGame;
  if ( DataSharingGangstar::mClassGLGame == 0 )
  {
    v3[0] = 0;
    if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v3, 65542) == -2 )
    {
      G4_VCALL<void>(AndroidOS_JavaVM, 16, v3, 0);
      v2 = 1;
    }
    else
    {
      v2 = 0;
    }
    DataSharingGangstar::mClassGLGame = G4_VCALL<int>(v3[0], 84, a1);
    DataSharingGangstar::mSetSharedValue = G4_VCALL<int>(v3[0], 452, DataSharingGangstar::mClassGLGame, "setSharedValue", "(Ljava/lang/String;Ljava/lang/String;)V");
    DataSharingGangstar::mGetSharedValue = G4_VCALL<int>(v3[0], 452, DataSharingGangstar::mClassGLGame, "getSharedValue", "(Ljava/lang/String;)Ljava/lang/String;");
    DataSharingGangstar::mDeleteSharedValue = G4_VCALL<int>(v3[0], 452, DataSharingGangstar::mClassGLGame, "deleteSharedValue", "(Ljava/lang/String;)V");
    result = G4_VCALL<int>(v3[0], 452, DataSharingGangstar::mClassGLGame, "isSharedValue", "(Ljava/lang/String;)Z");
    DataSharingGangstar::mIsSharedValue = result;
    if ( v2 != 0 )
      return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_DataSharingGangstar_nativeInit  (binary VA: 0x4df9c0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_DataSharingGangstar_nativeInit
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_DataSharingGangstar_nativeInit(int a1, int a2)
{
  return DataSharingGangstar::init(a2);
}

// ----------------------------------------------------------------------------
// Function: DataSharingGangstar::charToString  (binary VA: 0x4df9f0)
// Original: DataSharingGangstar::charToString
// ----------------------------------------------------------------------------
int DataSharingGangstar::charToString(DataSharingGangstar::Self *self)
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
// Function: DataSharingGangstar::isSharedValue  (binary VA: 0x4dfab0)
// Original: DataSharingGangstar::isSharedValue
// ----------------------------------------------------------------------------
int DataSharingGangstar::isSharedValue(DataSharingGangstar::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v6;
  int v7;
  int v8;
  char v9[4];

  *(uint32_t *)v9 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v9, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v9, 0);
    v6 = DataSharingGangstar::charToString(self);
    v7 = sub_4BFED0(*(int *)v9, DataSharingGangstar::mClassGLGame, DataSharingGangstar::mIsSharedValue, v6);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v9 + 92))(*(uint32_t *)v9, v6);
    v8 = v7;
    LOBYTE(v8) = (uint8_t)v7 != 0;
    v4 = v8;
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v1 = DataSharingGangstar::charToString(self);
    v2 = sub_4BFED0(*(int *)v9, DataSharingGangstar::mClassGLGame, DataSharingGangstar::mIsSharedValue, v1);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v9 + 92))(*(uint32_t *)v9, v1);
    v3 = v2;
    LOBYTE(v3) = (uint8_t)v2 != 0;
    return v3;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: DataSharingGangstar_isSharedValue  (binary VA: 0x4dfbe0)
// Original: DataSharingGangstar_isSharedValue
// ----------------------------------------------------------------------------
int DataSharingGangstar_isSharedValue(DataSharingGangstar::Self *a1)
{
  return DataSharingGangstar::isSharedValue(a1);
}

// ----------------------------------------------------------------------------
// Function: DataSharingGangstar::deleteSharedValue  (binary VA: 0x4dfc10)
// Original: DataSharingGangstar::deleteSharedValue
// ----------------------------------------------------------------------------
int DataSharingGangstar::deleteSharedValue(DataSharingGangstar::Self *self)
{
  int v1;
  int v3;
  char v4[4];

  *(uint32_t *)v4 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
    v3 = DataSharingGangstar::charToString(self);
    sub_4BFF00(*(int *)v4, DataSharingGangstar::mClassGLGame, DataSharingGangstar::mDeleteSharedValue, v3);
    (*(void (**)(uint32_t, int))(**(uint32_t **)v4 + 92))(*(uint32_t *)v4, v3);
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  else
  {
    v1 = DataSharingGangstar::charToString(self);
    sub_4BFF00(*(int *)v4, DataSharingGangstar::mClassGLGame, DataSharingGangstar::mDeleteSharedValue, v1);
    return (*(int (**)(uint32_t, int))(**(uint32_t **)v4 + 92))(*(uint32_t *)v4, v1);
  }
}

// ----------------------------------------------------------------------------
// Function: DataSharingGangstar_deleteSharedValue  (binary VA: 0x4dfd20)
// Original: DataSharingGangstar_deleteSharedValue
// ----------------------------------------------------------------------------
int DataSharingGangstar_deleteSharedValue(DataSharingGangstar::Self *a1)
{
  return DataSharingGangstar::deleteSharedValue(a1);
}

// ----------------------------------------------------------------------------
// Function: DataSharingGangstar::setSharedValue  (binary VA: 0x4dfd50)
// Original: DataSharingGangstar::setSharedValue
// ----------------------------------------------------------------------------
int DataSharingGangstar::setSharedValue(DataSharingGangstar::Self *self, DataSharingGangstar::Self *a2)
{
  int v2;
  int v3;
  int result;
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
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    v2 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
  }
  v3 = DataSharingGangstar::charToString(self);
  v5 = DataSharingGangstar::charToString(a2);
  sub_4BFF00(*(int *)v6, DataSharingGangstar::mClassGLGame, DataSharingGangstar::mSetSharedValue, v3, v5);
  (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v3);
  (*(void (**)(uint32_t, int))(**(uint32_t **)v6 + 92))(*(uint32_t *)v6, v5);
  result = v2;
  if ( (uint8_t)v2 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: DataSharingGangstar_setSharedValue  (binary VA: 0x4dfe50)
// Original: DataSharingGangstar_setSharedValue
// ----------------------------------------------------------------------------
int DataSharingGangstar_setSharedValue(DataSharingGangstar::Self *a1, DataSharingGangstar::Self *a2)
{
  return DataSharingGangstar::setSharedValue(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: DataSharingGangstar::getSharedValue  (binary VA: 0x4dfe80)
// Original: DataSharingGangstar::getSharedValue
// ----------------------------------------------------------------------------
DataSharingGangstar::Self * DataSharingGangstar::getSharedValue(DataSharingGangstar::Self *self, DataSharingGangstar::Self *a2)
{
  int v2;
  int v3;
  char *v4;
  typedef char _g4_t_v6;
  typedef char _g4_t_v7[4];
  typedef int _g4_t_v8[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (25u + sizeof(_g4_t_v8)) > _g4_s2 ? (25u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 25u);

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
  v2 = DataSharingGangstar::charToString(a2);
  v3 = JNIEnv::CallStaticObjectMethod(
         v8[0],
         DataSharingGangstar::mClassGLGame,
         DataSharingGangstar::mGetSharedValue,
         v2);
  G4_VCALL<void>(v8[0], 92, v2);
  v4 = (char *)G4_VCALL<int>(v8[0], 676, v3, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v4, (int)(uintptr_t)v7);
  G4_VCALL<void>(v8[0], 680, v3, v4);
  G4_VCALL<void>(v8[0], 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DataSharingGangstar_getSharedValue  (binary VA: 0x4dffc0)
// Original: DataSharingGangstar_getSharedValue
// ----------------------------------------------------------------------------
DataSharingGangstar::Self * DataSharingGangstar_getSharedValue(DataSharingGangstar::Self *a1, DataSharingGangstar::Self *a2)
{
  DataSharingGangstar::getSharedValue(a1, a2);
  return a1;
}

