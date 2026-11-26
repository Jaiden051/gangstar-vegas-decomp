#include "Core/Utils/DecompTypes.h"
#include "sociallib_internal.h"

// ----------------------------------------------------------------------------
// Function: sub_142E980  (binary VA: 0x142e980)
// Original: sub_142E980
// ----------------------------------------------------------------------------
int sub_142E980()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_2119948);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119948, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&sociallib::LdapWrapper::s_winLdap_credential), "<your_gl_account>@gameloft.com", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &sociallib::LdapWrapper::s_winLdap_credential, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&sociallib::LdapWrapper::s_windLdap_password), "<your_gl_password>", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &sociallib::LdapWrapper::s_windLdap_password, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&sociallib::LdapWrapper::s_winLdap_name), "<your name>", (int)(uintptr_t)(&v1));
  return __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &sociallib::LdapWrapper::s_winLdap_name, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_142EA60  (binary VA: 0x142ea60)
// Original: sub_142EA60
// ----------------------------------------------------------------------------
void sub_142EA60()
{
  typedef char _g4_t_v0;
  typedef uint32_t _g4_t_v1[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v0)) > _g4_s0 ? (15u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v1)) > _g4_s1 ? (28u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 15u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 28u);

  if ( byte_2119A08 == 0 )
  {
    v1[0] = 0;
    if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v1, 65542) == -2 )
    {
      G4_VCALL<void>(AndroidOS_JavaVM, 16, v1, 0);
      v0 = 1;
    }
    else
    {
      v0 = 0;
    }
    if ( v1[0] != 0 )
    {
      dword_2119A04 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "Init", "(Ljava/lang/String;)V");
      dword_2119A0C = G4_VCALL<int>(v1[0], 452, dword_2119A00, "Login", "()V");
      dword_2119A10 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "Logout", "()V");
      dword_2119A14 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "IsLoggedIn", "()Z");
      dword_2119A18 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "GetMyInfo", "()V");
      dword_2119A1C = G4_VCALL<int>(v1[0], 452, dword_2119A00, "sendGameRequestToFriends", "(Ljava/lang/String;Ljava/lang/String;)V");
      dword_2119A20 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "PostToWall_facade", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava"
                        "/lang/String;Ljava/lang/String;)V");
      dword_2119A24 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "PostToWallWithoutDialog", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
      dword_2119A28 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "PostPhotoToWallWithoutDialog", "([BLjava/lang/String;)V");
      dword_2119A2C = G4_VCALL<int>(v1[0], 452, dword_2119A00, "postOpenGraphAction", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
      dword_2119A30 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "GetFriends", "()V");
      dword_2119A34 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "GetFriendsData", "(II)V");
      dword_2119A38 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "GetUserData", "(Ljava/lang/String;)V");
      dword_2119A3C = G4_VCALL<int>(v1[0], 452, dword_2119A00, "GetUserNames", "(Ljava/lang/String;)V");
      dword_2119A40 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "GetPicture", "()V");
      dword_2119A44 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "GetApp", "()V");
      dword_2119A48 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "getAccessToken", "()Ljava/lang/String;");
      dword_2119A4C = G4_VCALL<int>(v1[0], 452, dword_2119A00, "UploadVideoFile", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
      dword_2119A50 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "getUserScore", "(Ljava/lang/String;)V");
      dword_2119A54 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "getAppScores", "(Ljava/lang/String;)V");
      dword_2119A58 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "updateScore", "(I)V");
      dword_2119A5C = G4_VCALL<int>(v1[0], 452, dword_2119A00, "deleteScore", "()V");
      dword_2119A60 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "hasPermission", "(Ljava/lang/String;)V");
      dword_2119A64 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "hasPermissionInternal", "(Ljava/lang/String;)I");
      dword_2119A68 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "requestPermission", "(Ljava/lang/String;Z)V");
      dword_2119A6C = G4_VCALL<int>(v1[0], 452, dword_2119A00, "refreshPermissions", "(Ljava/lang/String;)V");
      dword_2119A70 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "getUserAchievements", "(Ljava/lang/String;)V");
      dword_2119A74 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "gotAchievement", "(Ljava/lang/String;)V");
      dword_2119A78 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "resetAchievement", "(Ljava/lang/String;)V");
      dword_2119A7C = G4_VCALL<int>(v1[0], 452, dword_2119A00, "getUserLikes", "(Ljava/lang/String;)V");
      dword_2119A80 = G4_VCALL<int>(v1[0], 452, dword_2119A00, "GetUserLocale", "()V");
      byte_2119A08 = 1;
    }
    if ( v0 != 0 )
      G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: setErrorForRequest  (binary VA: 0x142f310)
// Original: setErrorForRequest
// ----------------------------------------------------------------------------
int setErrorForRequest(uint32_t *a1, int a2)
{
  int result;

  if ( a1 != nullptr )
  {
    g4_std::string::clear(a1 + 15, 0, *(uint32_t *)(a1[15] - 12), 0);
    result = (int)(uintptr_t)(g4_std::string::assign_str(a1 + 15, a2));
    a1[3] = 1;
    a1[1] = 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_init  (binary VA: 0x142f390)
// Original: facebookAndroidGLSocialLib_init
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_init()
{
  int v0;
  int v1;
  void *v2;
  int result;
  typedef char *_g4_t_v4;
  typedef uint16_t _g4_t_v5[3];
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (22u + sizeof(_g4_t_v5)) > _g4_s1 ? (22u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 22u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  sub_142EA60();
  *(uint32_t *)&v5[1] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v5[1], 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v5[1], 0);
  }
  else
  {
    v0 = 0;
  }
  if ( *(uint32_t *)&v5[1] != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), "email,user_friends", (int)(uintptr_t)(v5));
    v1 = (*(int (**)(uint32_t, int))(**(uint32_t **)&v5[1] + 668))(*(uint32_t *)&v5[1], v6[0]);
    sub_4BFF00(*(int *)&v5[1], dword_2119A00, dword_2119A04, v1);
    (*(void (**)(uint32_t, int))(**(uint32_t **)&v5[1] + 92))(*(uint32_t *)&v5[1], v1);
    v2 = (void *)(v6[0] - 12);
    if ( (uint32_t *)(v6[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v4 = (char *)v5 + 1;
      g4_std::string::Rep::M_destroy(v2);
    }
  }
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20, v4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_login  (binary VA: 0x142f4d0)
// Original: facebookAndroidGLSocialLib_login
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_login()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_142EA60();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A00, dword_2119A0C);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_logout  (binary VA: 0x142f590)
// Original: facebookAndroidGLSocialLib_logout
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_logout()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_142EA60();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A00, dword_2119A10);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_isLoggedIn  (binary VA: 0x142f650)
// Original: facebookAndroidGLSocialLib_isLoggedIn
// ----------------------------------------------------------------------------
bool facebookAndroidGLSocialLib_isLoggedIn()
{
  char v0; // bp
  bool v1;
  int v3[4];

  sub_142EA60();
  v3[0] = 0;
  v0 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v3, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v3, 0);
  }
  v1 = false;
  if ( v3[0] != 0 )
    v1 = (uint8_t)sub_4BFED0(v3[0], dword_2119A00, dword_2119A14) == 1;
  if ( v0 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_getMyInfo  (binary VA: 0x142f720)
// Original: facebookAndroidGLSocialLib_getMyInfo
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_getMyInfo()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_142EA60();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A00, dword_2119A18);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_getUserLocale  (binary VA: 0x142f7e0)
// Original: facebookAndroidGLSocialLib_getUserLocale
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_getUserLocale()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_142EA60();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A00, dword_2119A80);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_getFriends  (binary VA: 0x142f8a0)
// Original: facebookAndroidGLSocialLib_getFriends
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_getFriends()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_142EA60();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A00, dword_2119A30);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_getFriendsData  (binary VA: 0x142f960)
// Original: facebookAndroidGLSocialLib_getFriendsData
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_getFriendsData(int a1, int a2)
{
  int v2;
  int result;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  sub_142EA60();
  v4 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v4, 65542) == -2 )
  {
    v2 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v4, 0);
  }
  else
  {
    v2 = 0;
  }
  if ( v4 != 0 )
    sub_4BFF00(v4, dword_2119A00, dword_2119A34, a1, a2);
  result = v2;
  if ( (uint8_t)v2 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_sendGameRequestToFriends  (binary VA: 0x142fa30)
// Original: facebookAndroidGLSocialLib_sendGameRequestToFriends
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_sendGameRequestToFriends(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int v3;
  int result;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  sub_142EA60();
  v6[0] = 0;
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    v2 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
  }
  if ( v6[0] != 0 )
  {
    v3 = G4_VCALL<int>(v6[0], 668, *a1);
    v5 = G4_VCALL<int>(v6[0], 668, *a2);
    sub_4BFF00(v6[0], dword_2119A00, dword_2119A1C, v3, v5);
    G4_VCALL<void>(v6[0], 92, v3);
    G4_VCALL<void>(v6[0], 92, v5);
  }
  result = v2;
  if ( (uint8_t)v2 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_postToWall  (binary VA: 0x142fb50)
// Original: facebookAndroidGLSocialLib_postToWall
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_postToWall(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7)
{
  int result;
  int v8;
  int v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef char _g4_t_v15;
  typedef int _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v15)) > _g4_s5 ? (31u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v16)) > _g4_s6 ? (44u + sizeof(_g4_t_v16)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 31u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  sub_142EA60();
  v16[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v16, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v16, 0);
    v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  result = v16[0];
  if ( v16[0] != 0 )
  {
    v8 = G4_VCALL<int>(v16[0], 668, *a1);
    v9 = G4_VCALL<int>(v16[0], 668, *a2);
    v11 = G4_VCALL<int>(v16[0], 668, *a3);
    v12 = G4_VCALL<int>(v16[0], 668, *a4);
    v13 = G4_VCALL<int>(v16[0], 668, *a5);
    v14 = G4_VCALL<int>(v16[0], 668, *a6);
    v10 = G4_VCALL<int>(v16[0], 668, *a7);
    sub_4BFF00(v16[0], dword_2119A00, dword_2119A20, v8, v9, v11, v12, v13, v14, v10);
    G4_VCALL<void>(v16[0], 92, v8);
    G4_VCALL<void>(v16[0], 92, v9);
    G4_VCALL<void>(v16[0], 92, v11);
    G4_VCALL<void>(v16[0], 92, v12);
    G4_VCALL<void>(v16[0], 92, v13);
    G4_VCALL<void>(v16[0], 92, v14);
    result = G4_VCALL<int>(v16[0], 92, v10);
  }
  if ( v15 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_postOpenGraphAction  (binary VA: 0x142fd90)
// Original: facebookAndroidGLSocialLib_postOpenGraphAction
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_postOpenGraphAction(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
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

  sub_142EA60();
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
  result = v10[0];
  if ( v10[0] != 0 )
  {
    v5 = G4_VCALL<int>(v10[0], 668, *a1);
    v6 = G4_VCALL<int>(v10[0], 668, *a2);
    v8 = G4_VCALL<int>(v10[0], 668, *a3);
    v7 = G4_VCALL<int>(v10[0], 668, *a4);
    sub_4BFF00(v10[0], dword_2119A00, dword_2119A2C, v5, v6, v8, v7);
    G4_VCALL<void>(v10[0], 92, v5);
    G4_VCALL<void>(v10[0], 92, v6);
    G4_VCALL<void>(v10[0], 92, v8);
    result = G4_VCALL<int>(v10[0], 92, v7);
  }
  if ( v9 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_UploadVideoFile  (binary VA: 0x142ff10)
// Original: facebookAndroidGLSocialLib_UploadVideoFile
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_UploadVideoFile(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5)
{
  int result;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef char _g4_t_v11;
  typedef int _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (15u + sizeof(_g4_t_v11)) > _g4_s3 ? (15u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 15u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  sub_142EA60();
  v12[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v12, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v12, 0);
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  result = v12[0];
  if ( v12[0] != 0 )
  {
    v6 = G4_VCALL<int>(v12[0], 668, *a1);
    v7 = G4_VCALL<int>(v12[0], 668, *a2);
    v9 = G4_VCALL<int>(v12[0], 668, *a3);
    v10 = G4_VCALL<int>(v12[0], 668, *a4);
    v8 = G4_VCALL<int>(v12[0], 668, *a5);
    sub_4BFF00(v12[0], dword_2119A00, dword_2119A4C, v6, v7, v9, v10, v8);
    G4_VCALL<void>(v12[0], 92, v6);
    G4_VCALL<void>(v12[0], 92, v7);
    G4_VCALL<void>(v12[0], 92, v9);
    G4_VCALL<void>(v12[0], 92, v10);
    result = G4_VCALL<int>(v12[0], 92, v8);
  }
  if ( v11 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_postToWallWithoutDialog  (binary VA: 0x14300d0)
// Original: facebookAndroidGLSocialLib_postToWallWithoutDialog
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_postToWallWithoutDialog(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6)
{
  int result;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef char _g4_t_v13;
  typedef int _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (31u + sizeof(_g4_t_v13)) > _g4_s4 ? (31u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v14)) > _g4_s5 ? (44u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 31u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  sub_142EA60();
  v14[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v14, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v14, 0);
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  result = v14[0];
  if ( v14[0] != 0 )
  {
    v7 = G4_VCALL<int>(v14[0], 668, *a1);
    v8 = G4_VCALL<int>(v14[0], 668, *a2);
    v10 = G4_VCALL<int>(v14[0], 668, *a3);
    v11 = G4_VCALL<int>(v14[0], 668, *a4);
    v12 = G4_VCALL<int>(v14[0], 668, *a5);
    v9 = G4_VCALL<int>(v14[0], 668, *a6);
    sub_4BFF00(v14[0], dword_2119A00, dword_2119A24, v7, v8, v10, v11, v12, v9);
    G4_VCALL<void>(v14[0], 92, v7);
    G4_VCALL<void>(v14[0], 92, v8);
    G4_VCALL<void>(v14[0], 92, v10);
    G4_VCALL<void>(v14[0], 92, v11);
    G4_VCALL<void>(v14[0], 92, v12);
    result = G4_VCALL<int>(v14[0], 92, v9);
  }
  if ( v13 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_postPhotoToWallWithoutDialog  (binary VA: 0x14302d0)
// Original: facebookAndroidGLSocialLib_postPhotoToWallWithoutDialog
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_postPhotoToWallWithoutDialog(uint32_t *a1, uint32_t *a2)
{
  int result;
  int v3;
  int v4;
  sociallib::ClientSNSInterface::Self *v5;
  uint32_t *v6;
  void *v7;
  typedef char *_g4_t_v8;
  typedef char _g4_t_v9;
  typedef uint16_t _g4_t_v10[3];
  typedef int _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (47u + sizeof(_g4_t_v9)) > _g4_s1 ? (47u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (54u + sizeof(_g4_t_v10)) > _g4_s2 ? (54u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v11)) > _g4_s3 ? (60u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 47u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 54u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);

  sub_142EA60();
  *(uint32_t *)&v10[1] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v10[1], 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v10[1], 0);
    v9 = 1;
    result = *(uint32_t *)(*a1 - 12);
    if ( result != 0 )
    {
LABEL_3:
      if ( *(uint32_t *)&v10[1] != 0 )
      {
        v3 = (*(int (**)(uint32_t, int))(**(uint32_t **)&v10[1] + 704))(*(uint32_t *)&v10[1], result);
        (*(void (**)(uint32_t, int, uint32_t, uint32_t, uint32_t))(**(uint32_t **)&v10[1] + 832))(
          *(uint32_t *)&v10[1],
          v3,
          0,
          *(uint32_t *)(*a1 - 12),
          *a1);
        v4 = (*(int (**)(uint32_t, uint32_t))(**(uint32_t **)&v10[1] + 668))(*(uint32_t *)&v10[1], *a2);
        sub_4BFF00(*(int *)&v10[1], dword_2119A00, dword_2119A28, v3, v4);
        (*(void (**)(uint32_t, int))(**(uint32_t **)&v10[1] + 92))(*(uint32_t *)&v10[1], v4);
        result = (*(int (**)(uint32_t, int))(**(uint32_t **)&v10[1] + 92))(*(uint32_t *)&v10[1], v3);
      }
      goto LABEL_5;
    }
  }
  else
  {
    v9 = 0;
    result = *(uint32_t *)(*a1 - 12);
    if ( result != 0 )
      goto LABEL_3;
  }
  v5 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v5 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v5);
    dword_20D2420 = (int)(uintptr_t)(v5);
  }
  result = sociallib::ClientSNSInterface::getCurrentActiveRequestState(v5);
  v6 = (uint32_t *)result;
  if ( result != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "You need to set a photo if you want to upload it", (int)(uintptr_t)(v10));
    setErrorForRequest(v6, (int)(uintptr_t)(v11));
    result = v11[0];
    v7 = (void *)(v11[0] - 12);
    if ( (uint32_t *)(v11[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v8 = (char *)v10 + 1;
      g4_std::string::Rep::M_destroy(v7);
    }
  }
LABEL_5:
  if ( v9 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20, v8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_getUserData  (binary VA: 0x14304e0)
// Original: facebookAndroidGLSocialLib_getUserData
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_getUserData(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  sub_142EA60();
  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  if ( v4[0] != 0 )
  {
    v2 = G4_VCALL<int>(v4[0], 668, *a1);
    sub_4BFF00(v4[0], dword_2119A00, dword_2119A38, v2);
    G4_VCALL<void>(v4[0], 92, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_getUserNames  (binary VA: 0x14305d0)
// Original: facebookAndroidGLSocialLib_getUserNames
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_getUserNames(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  sub_142EA60();
  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  if ( v4[0] != 0 )
  {
    v2 = G4_VCALL<int>(v4[0], 668, *a1);
    sub_4BFF00(v4[0], dword_2119A00, dword_2119A3C, v2);
    G4_VCALL<void>(v4[0], 92, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_getPicture  (binary VA: 0x14306c0)
// Original: facebookAndroidGLSocialLib_getPicture
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_getPicture()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_142EA60();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A00, dword_2119A40);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_getApp  (binary VA: 0x1430780)
// Original: facebookAndroidGLSocialLib_getApp
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_getApp()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_142EA60();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A00, dword_2119A44);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_getAccessToken  (binary VA: 0x1430840)
// Original: facebookAndroidGLSocialLib_getAccessToken
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_getAccessToken(int a1)
{
  int v1;
  char *v2;
  int *v3;
  void *v4;
  typedef char *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef char _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v8)) > _g4_s2 ? (31u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v9)) > _g4_s3 ? (36u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v10)) > _g4_s4 ? (40u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v11)) > _g4_s5 ? (44u + sizeof(_g4_t_v11)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);

  sub_142EA60();
  v10 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v10, 65542) != -2 )
  {
    v1 = v10;
    v8 = 0;
    if ( v10 != 0 )
      goto LABEL_3;
LABEL_9:
    v3 = (int *)((char *)&v9 + 2);
    goto LABEL_10;
  }
  G4_VCALL<void>(AndroidOS_JavaVM, 16, &v10, 0);
  v1 = v10;
  v8 = 1;
  if ( v10 == 0 )
    goto LABEL_9;
LABEL_3:
  v7 = JNIEnv::CallStaticObjectMethod(v1, dword_2119A00, dword_2119A48);
  v2 = (char *)G4_VCALL<int>(v10, 676, v7, 0);
  v3 = &v9;
  if ( v2 == nullptr )
  {
LABEL_10:
    g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(v3));
    goto LABEL_5;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), v2, (int)(uintptr_t)(&v9) + 1);
  G4_VCALL<void>(v10, 680, v7, v2);
  g4_std::string::construct_copy(a1, v11);
  v4 = (void *)(v11[0] - 12);
  if ( (uint32_t *)(v11[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v6 = (char *)&v9 + 3;
    g4_std::string::Rep::M_destroy(v4);
  }
LABEL_5:
  if ( v8 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20, v6);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_getUserScore  (binary VA: 0x14309e0)
// Original: facebookAndroidGLSocialLib_getUserScore
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_getUserScore(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  sub_142EA60();
  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  if ( v4[0] != 0 )
  {
    v2 = G4_VCALL<int>(v4[0], 668, *a1);
    sub_4BFF00(v4[0], dword_2119A00, dword_2119A50, v2);
    G4_VCALL<void>(v4[0], 92, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_getAppScores  (binary VA: 0x1430ad0)
// Original: facebookAndroidGLSocialLib_getAppScores
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_getAppScores(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  sub_142EA60();
  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  if ( v4[0] != 0 )
  {
    if ( *(uint32_t *)(*a1 - 12) != 0 )
      v2 = G4_VCALL<int>(v4[0], 668, *a1);
    else
      v2 = G4_VCALL<int>(v4[0], 668, &GLSocialLib_facebookAppId);
    sub_4BFF00(v4[0], dword_2119A00, dword_2119A54, v2);
    G4_VCALL<void>(v4[0], 92, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_updateScore  (binary VA: 0x1430bf0)
// Original: facebookAndroidGLSocialLib_updateScore
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_updateScore(unsigned int a1)
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

  sub_142EA60();
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
  if ( v3 != 0 )
    sub_4BFF00(v3, dword_2119A00, dword_2119A58, a1);
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_deleteScore  (binary VA: 0x1430cb0)
// Original: facebookAndroidGLSocialLib_deleteScore
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_deleteScore()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_142EA60();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A00, dword_2119A5C);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_hasPermissionInternal  (binary VA: 0x1430d70)
// Original: facebookAndroidGLSocialLib_hasPermissionInternal
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_hasPermissionInternal(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v5)) > _g4_s1 ? (28u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  v5[0] = 0;
  v1 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v5, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v5, 0);
  }
  if ( v5[0] != 0 )
  {
    v2 = G4_VCALL<int>(v5[0], 668, *a1);
    v4 = sub_4C17B0(v5[0], dword_2119A00, dword_2119A64, v2);
    G4_VCALL<void>(v5[0], 92, v2);
    if ( (uint8_t)v1 != 0 )
      G4_VCALL<void>(AndroidOS_JavaVM, 20);
    return v4;
  }
  else
  {
    result = v1;
    if ( (uint8_t)v1 != 0 )
      return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_requestPermission  (binary VA: 0x1430e80)
// Original: facebookAndroidGLSocialLib_requestPermission
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_requestPermission(uint32_t *a1, uint8_t a2)
{
  int v2;
  int result;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v5)) > _g4_s1 ? (28u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  sub_142EA60();
  v5[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v5, 65542) == -2 )
  {
    v2 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v5, 0);
  }
  else
  {
    v2 = 0;
  }
  if ( v5[0] != 0 )
  {
    v4 = G4_VCALL<int>(v5[0], 668, *a1);
    sub_4BFF00(v5[0], dword_2119A00, dword_2119A68, v4, a2);
    G4_VCALL<void>(v5[0], 92, v4);
  }
  result = v2;
  if ( (uint8_t)v2 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_refreshPermissions  (binary VA: 0x1430f90)
// Original: facebookAndroidGLSocialLib_refreshPermissions
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_refreshPermissions(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
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
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v4, 0);
  }
  else
  {
    v1 = 0;
  }
  if ( v4 != 0 )
  {
    v2 = G4_VCALL<int>(v4, 668, *a1);
    sub_4BFF00(v4, dword_2119A00, dword_2119A6C, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_hasPermission  (binary VA: 0x1431060)
// Original: facebookAndroidGLSocialLib_hasPermission
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_hasPermission(uint32_t *a1)
{
  return facebookAndroidGLSocialLib_refreshPermissions(a1);
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_getUserAchievements  (binary VA: 0x1431090)
// Original: facebookAndroidGLSocialLib_getUserAchievements
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_getUserAchievements(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  sub_142EA60();
  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  if ( v4[0] != 0 )
  {
    v2 = G4_VCALL<int>(v4[0], 668, *a1);
    sub_4BFF00(v4[0], dword_2119A00, dword_2119A70, v2);
    G4_VCALL<void>(v4[0], 92, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_gotAchievement  (binary VA: 0x1431180)
// Original: facebookAndroidGLSocialLib_gotAchievement
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_gotAchievement(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  sub_142EA60();
  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  if ( v4[0] != 0 )
  {
    v2 = G4_VCALL<int>(v4[0], 668, *a1);
    sub_4BFF00(v4[0], dword_2119A00, dword_2119A74, v2);
    G4_VCALL<void>(v4[0], 92, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_resetAchievement  (binary VA: 0x1431270)
// Original: facebookAndroidGLSocialLib_resetAchievement
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_resetAchievement(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  sub_142EA60();
  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  if ( v4[0] != 0 )
  {
    v2 = G4_VCALL<int>(v4[0], 668, *a1);
    sub_4BFF00(v4[0], dword_2119A00, dword_2119A78, v2);
    G4_VCALL<void>(v4[0], 92, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_getUserLikes  (binary VA: 0x1431360)
// Original: facebookAndroidGLSocialLib_getUserLikes
// ----------------------------------------------------------------------------
int facebookAndroidGLSocialLib_getUserLikes(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  sub_142EA60();
  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  if ( v4[0] != 0 )
  {
    v2 = G4_VCALL<int>(v4[0], 668, *a1);
    sub_4BFF00(v4[0], dword_2119A00, dword_2119A7C, v2);
    G4_VCALL<void>(v4[0], 92, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: facebookAndroidGLSocialLib_getAppId  (binary VA: 0x1431450)
// Original: facebookAndroidGLSocialLib_getAppId
// ----------------------------------------------------------------------------
char facebookAndroidGLSocialLib_getAppId()
{
  sociallib::ClientSNSInterface::Self *v0;
  int CurrentActiveRequestState;
  sociallib::ClientSNSInterface::Self *v2;
  int v3;

  v0 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v0 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v0);
    dword_20D2420 = (int)(uintptr_t)(v0);
  }
  LOBYTE(CurrentActiveRequestState) = sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v0, 4, 12);
  if ( (uint8_t)CurrentActiveRequestState != 0 )
  {
    v2 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
    if ( dword_20D2420 == 0 )
    {
      v2 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
      sociallib::ClientSNSInterface::Construct(v2);
      dword_20D2420 = (int)(uintptr_t)(v2);
    }
    CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(v2);
    v3 = CurrentActiveRequestState;
    if ( CurrentActiveRequestState != 0 )
    {
      LOBYTE(CurrentActiveRequestState) = (uint8_t)(uintptr_t)(g4_std_compat::string_assign(
                                            CurrentActiveRequestState + 60,
                                            GLSocialLib_facebookAppId,
                                            strlen(GLSocialLib_facebookAppId)));
      *(uint32_t *)(v3 + 4) = 2;
    }
  }
  return CurrentActiveRequestState;
}

// ----------------------------------------------------------------------------
// Function: appGLSocialLib_OnFBDialogDidComplete  (binary VA: 0x1431560)
// Original: appGLSocialLib_OnFBDialogDidComplete
// ----------------------------------------------------------------------------
uint32_t * appGLSocialLib_OnFBDialogDidComplete()
{
  sociallib::ClientSNSInterface::Self *v0;
  uint32_t *result;
  char *v2;
  int v3;

  v0 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v0 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v0);
    dword_20D2420 = (int)(uintptr_t)(v0);
  }
  result = (uint32_t *)sociallib::ClientSNSInterface::getCurrentActiveRequestState(v0);
  if ( result != nullptr )
  {
    switch ( result[2] )
    {
      case 3:
      case 5:
      case 0x10:
      case 0x18:
      case 0x19:
      case 0x1C:
      case 0x21:
      case 0x29:
      case 0x2A:
      case 0x2B:
      case 0x2C:
      case 0x30:
      case 0x32:
      case 0x34:
      case 0x35:
      case 0x3F:
        v2 = (char *)result[7];
        v3 = result[8];
        if ( ((uint8_t)(uintptr_t)v2 & 1) != 0 )
          v2 = *(char **)&v2[*(uint32_t *)(m_fbWrapper + v3) - 1];
        result = (uint32_t *)((int (*)(int, uint32_t *))v2)((int)(uintptr_t)(m_fbWrapper + v3), result);
        break;
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x15:
        result[1] = 2;
        break;
      default:
        return result;
    }
  }
  return result;
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: appGLSocialLib_OnFBFailWithError  (binary VA: 0x1431640)
// Original: appGLSocialLib_OnFBFailWithError
// ----------------------------------------------------------------------------
uint32_t * appGLSocialLib_OnFBFailWithError(int a1)
{
  sociallib::ClientSNSInterface::Self *v1;
  uint32_t *result;

  v1 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v1 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v1);
    dword_20D2420 = (int)(uintptr_t)(v1);
  }
  result = (uint32_t *)sociallib::ClientSNSInterface::getCurrentActiveRequestState(v1);
  if ( result != nullptr )
    return (uint32_t *)setErrorForRequest(result, a1);
  return result;
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: appGLSocialLib_OnFBDialogDidNotComplete  (binary VA: 0x1431800)
// Original: appGLSocialLib_OnFBDialogDidNotComplete
// ----------------------------------------------------------------------------
int appGLSocialLib_OnFBDialogDidNotComplete()
{
  sociallib::ClientSNSInterface::Self *v0;
  int result;
  uint32_t *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (6u + sizeof(_g4_t_v10)) > _g4_s0 ? (6u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v16)) > _g4_s6 ? (32u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v17)) > _g4_s7 ? (36u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v18)) > _g4_s8 ? (40u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v19)) > _g4_s9 ? (44u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 6u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);

  v0 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v0 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v0);
    dword_20D2420 = (int)(uintptr_t)(v0);
  }
  result = sociallib::ClientSNSInterface::getCurrentActiveRequestState(v0);
  v2 = (uint32_t *)result;
  if ( result != 0 )
  {
    switch ( *(uint32_t *)(result + 8) )
    {
      case 0x11:
        *(uint8_t *)(result + 205) = 1;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Facebook Android SNS ERROR: User canceled the post dialog.\n", (int)(uintptr_t)(&v10) + 1);
        setErrorForRequest(v2, (int)(uintptr_t)(&v14));
        result = v14;
        v9 = (void *)(v14 - 12);
        if ( (uint32_t *)(v14 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
        break;
      case 0x12:
        *(uint8_t *)(result + 205) = 1;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Facebook Android SNS ERROR: User canceled the login dialog.\n", (int)(uintptr_t)(&v10));
        setErrorForRequest(v2, (int)(uintptr_t)(&v13));
        result = v13;
        v8 = (void *)(v13 - 12);
        if ( (uint32_t *)(v13 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v8);
        }
        break;
      case 0x13:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Facebook Android SNS ERROR: User couldn't logout.\n", (int)(uintptr_t)(&v11));
        setErrorForRequest(v2, (int)(uintptr_t)(&v15));
        result = v15;
        v7 = (void *)(v15 - 12);
        if ( (uint32_t *)(v15 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v7);
        }
        break;
      case 0x15:
        *(uint8_t *)(result + 205) = 1;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Facebook Android SNS ERROR: User denied permissions.\n", (int)(uintptr_t)(&v11) + 2);
        setErrorForRequest(v2, (int)(uintptr_t)(&v17));
        result = v17;
        v6 = (void *)(v17 - 12);
        if ( (uint32_t *)(v17 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v6);
        }
        break;
      case 0x2D:
        *(uint8_t *)(result + 205) = 1;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Facebook Android SNS ERROR: User canceled the game request dialog.\n", (int)(uintptr_t)(&v11) + 1);
        setErrorForRequest(v2, (int)(uintptr_t)(&v16));
        result = v16;
        v5 = (void *)(v16 - 12);
        if ( (uint32_t *)(v16 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v5);
        }
        break;
      case 0x3F:
        *(uint8_t *)(result + 205) = 1;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Facebook Android SNS ERROR: User denied permissions.\n", (int)(uintptr_t)(&v11) + 3);
        setErrorForRequest(v2, (int)(uintptr_t)(&v18));
        result = v18;
        v4 = (void *)(v18 - 12);
        if ( (uint32_t *)(v18 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v4);
        }
        break;
      default:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Facebook Android SNS ERROR.\n", (int)(uintptr_t)(&v12));
        setErrorForRequest(v2, (int)(uintptr_t)(&v19));
        result = v19;
        v3 = (void *)(v19 - 12);
        if ( (uint32_t *)(v19 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v3);
        }
        break;
    }
  }
  return result;
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: setFBWrapperAndroid  (binary VA: 0x1431bb0)
// Original: setFBWrapperAndroid
// ----------------------------------------------------------------------------
uint32_t * setFBWrapperAndroid(sociallib::FacebookSNSWrapper::Self *a1)
{
  m_fbWrapper[0] = (uint32_t)(uintptr_t)(a1);
  return m_fbWrapper;
}

// ----------------------------------------------------------------------------
// Function: splitString  (binary VA: 0x1431bd0)
// Original: splitString
// ----------------------------------------------------------------------------
int * splitString(int *a1, uint32_t *a2, char a3)
{
  unsigned int v3;
  int i;
  char *v5;
  int v6;
  int v7;
  void *v8;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v3 = 0;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  for ( i = (int)(uintptr_t)(sub_1937EB0(a2, a3, 0)); i != -1; i = (int)(uintptr_t)(sub_1937EB0(a2, a3, v3)) )
  {
    if ( v3 > *(uint32_t *)(*a2 - 12) )
      sub_1900210("basic_string::substr");
    v10 = i;
    sub_193A6F0(v11, a2, v3, i - v3);
    v5 = (char *)a1[1];
    v6 = v10;
    if ( v5 == (char *)a1[2] )
    {
      g4_std::vector_string_86c307::M_insert_aux(a1, v5, (int)(uintptr_t)(v11));
      v6 = v10;
    }
    else
    {
      v7 = 0;
      if ( v5 != nullptr )
      {
        g4_std::string::construct_copy(v5, v11);
        v7 = a1[1];
        v6 = v10;
      }
      a1[1] = v7 + 4;
    }
    v3 = v6 + 1;
    v8 = (void *)(v11[0] - 12);
    if ( (uint32_t *)(v11[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: appGLSocialLib_OnFBDataLoad  (binary VA: 0x1431cf0)
// Original: appGLSocialLib_OnFBDataLoad
// ----------------------------------------------------------------------------
void appGLSocialLib_OnFBDataLoad(int *a1)
{
  sociallib::ClientSNSInterface::Self *v1;
  int CurrentActiveRequestState;
  int *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  int *v7;
  sociallib::ClientSNSInterface::Self *v8;
  sociallib::ClientSNSInterface::Self *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  char *v13;
  char *v14;
  uint32_t *v15;
  sociallib::ClientSNSInterface::Self *v16;
  int v17;
  sociallib::ClientSNSInterface::Self *v18;
  char *v19;
  int v20;
  sociallib::ClientSNSInterface::Self *v21;
  sociallib::ClientSNSInterface::Self *v22;
  sociallib::ClientSNSInterface::Self *v23;
  bool isCurrentActiveSnsAndRequestTypeMatch;
  char *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint32_t *v32;
  int *v33;
  char *v34;
  char *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  uint32_t *v45;
  int *v46;
  sociallib::ClientSNSInterface::Self *v47;
  char *v48;
  sociallib::ClientSNSInterface::Self *v49;
  sociallib::ClientSNSInterface::Self *v50;
  int v51;
  char *v52;
  sociallib::ClientSNSInterface::Self *v53;
  int *v54;
  uint32_t *v55;
  uint32_t *v56;
  uint32_t *v57;
  sociallib::ClientSNSInterface::Self *v58;
  int v59;
  char *v60;
  char *k;
  Json::Value::Self *v62;
  const Json::Value::Self *v63;
  void *v64;
  int v65;
  uint32_t *v66;
  void *v67;
  Json::Value::Self *v68;
  int v69;
  uint32_t *v70;
  uint32_t *v71;
  char *v72;
  Json::Value::Self *v73;
  Json::Value::Self *v74;
  Json::Value::Self *v75;
  int v76;
  Json::Value::Self *v77;
  uint64_t v78; // rax
  void *v79;
  char *v80;
  char *v81;
  Json::Value::Self *v82;
  int v83;
  void *v84;
  void *v85;
  volatile int32_t *v86;
  int v87;
  void *v88;
  int *v89;
  const Json::Value::Self *v90;
  int *v91;
  const Json::Value::Self *v92;
  const Json::Value::Self *v93;
  Json::Value::Self *v94;
  const Json::Value::Self *v95;
  char *v96;
  char *v97;
  Json::Value::Self *v98;
  int v99;
  Json::Value::Self *v100;
  const Json::Value::Self *v101;
  unsigned int ii;
  const Json::Value::Self *v103;
  int v104;
  int v105;
  Json::Value::Self *v106;
  int v107;
  int v108;
  Json::Value::Self *v109;
  const Json::Value::Self *v110;
  Json::Value::Self *v111;
  int v112;
  Json::Value::Self *v113;
  Json::Value::Self *v114;
  int v115;
  Json::Value::Self *v116;
  Json::Value::Self *v117;
  int v118;
  unsigned int v119;
  char *m;
  const Json::Value::Self *v121;
  Json::Value::Self *v122;
  int v123;
  int v124;
  unsigned int v125;
  Json::Value::Self *v126;
  const Json::Value::Self *v127;
  Json::Value::Self *v128;
  Json::Value::Self *v129;
  Json::Value::Self *v130;
  Json::Value::Self *v131;
  Json::Value::Self *v132;
  Json::Value::Self *v133;
  Json::Value::Self *v134;
  Json::Value::Self *v135;
  Json::Value::Self *v136;
  Json::Value::Self *v137;
  Json::Value::Self *v138;
  Json::Value::Self *v139;
  Json::Value::Self *v140;
  Json::Value::Self *v141;
  Json::Value::Self *v142;
  Json::Value::Self *v143;
  unsigned int v144;
  char *n;
  const Json::Value::Self *v146;
  Json::Value::Self *v147;
  Json::Value::Self *v148;
  Json::Value::Self *v149;
  Json::Value::Self *v150;
  Json::Value::Self *v151;
  Json::Value::Self *v152;
  Json::Value::Self *v153;
  Json::Value::Self *v154;
  Json::Value::Self *v155;
  Json::Value::Self *v156;
  Json::Value::Self *v157;
  Json::Value::Self *v158;
  Json::Value::Self *v159;
  Json::Value::Self *v160;
  Json::Value::Self *v161;
  Json::Value::Self *v162;
  int v163;
  Json::Value::Self *v164;
  int v165;
  Json::Value::Self *v166;
  int v167;
  Json::Value::Self *v168;
  int v169;
  Json::Value::Self *v170;
  int v171;
  unsigned int i;
  const Json::Value::Self *v173;
  Json::Value::Self *v174;
  Json::Value::Self *v175;
  Json::Value::Self *v176;
  Json::Value::Self *v177;
  uint64_t v178; // rax
  int *v179;
  char *v180;
  char *v181;
  Json::Value::Self *v182;
  char *v183;
  char *v184;
  Json::Value::Self *v185;
  char *v186;
  char *v187;
  int *v188;
  char *v189;
  int v190;
  int v191;
  int v192;
  int v193;
  Json::Value::Self *v194;
  Json::Value::Self *v195;
  int v196;
  int v197;
  Json::Value::Self *v198;
  const Json::Value::Self *v199;
  Json::Value::Self *v200;
  const Json::Value::Self *v201;
  unsigned int v202;
  const Json::Value::Self *v203;
  Json::Value::Self *v204;
  Json::Value::Self *v205;
  Json::Value::Self *v206;
  int v207;
  uint64_t v208; // rax
  int v209;
  uint32_t *v210;
  Json::Value::Self *v211;
  int v212;
  uint32_t *v213;
  uint32_t *v214;
  uint32_t *v215;
  Json::Value::Self *v216;
  const Json::Value::Self *v217;
  Json::Value::Self *v218;
  int j;
  char *v220;
  int v221;
  char *v222;
  Json::Value::Self *v223;
  int v224;
  uint32_t *v225;
  Json::Value::Self *v226;
  const Json::Value::Self *v227;
  Json::Value::Self *v228;
  Json::Value::Self *v229;
  Json::Value::Self *v230;
  int v231;
  Json::Value::Self *v232;
  int v233;
  Json::Value::Self *v234;
  int v235;
  Json::Value::Self *v236;
  int v237;
  Json::Value::Self *v238;
  int v239;
  Json::Value::Self *v240;
  int v241;
  Json::Value::Self *v242;
  Json::Value::Self *v243;
  Json::Value::Self *v244;
  Json::Value::Self *v245;
  Json::Value::Self *v246;
  Json::Value::Self *v247;
  Json::Value::Self *v248;
  Json::Value::Self *v249;
  Json::Value::Self *v250;
  int v251;
  Json::Value::Self *v252;
  int v253;
  Json::Value::Self *v254;
  int v255;
  Json::Value::Self *v256;
  Json::Value::Self *v257;
  Json::Value::Self *v258;
  Json::Value::Self *v259;
  Json::Value::Self *v260;
  Json::Value::Self *v261;
  const Json::Value::Self *v262;
  Json::Value::Self *v263;
  Json::Value::Self *v264;
  Json::Value::Self *v265;
  Json::Value::Self *v266;
  Json::Value::Self *v267;
  Json::Value::Self *v268;
  Json::Value::Self *v269;
  Json::Value::Self *v270;
  Json::Value::Self *v271;
  Json::Value::Self *v272;
  Json::Value::Self *v273;
  Json::Value::Self *v274;
  int v275;
  Json::Value::Self *v276;
  int v277;
  Json::Value::Self *v278;
  int v279;
  int v280;
  Json::Value::Self *v281;
  int v282;
  Json::Value::Self *v283;
  int v284;
  int v285;
  int v286;
  int v287;
  int v288;
  Json::Value::Self *v289;
  Json::Value::Self *v290;
  int v291;
  Json::Value::Self *v292;
  const Json::Value::Self *v293;
  Json::Value::Self *v294;
  const Json::Value::Self *v295;
  Json::Value::Self *v296;
  int v297;
  uint32_t *v298;
  Json::Value::Self *v299;
  const Json::Value::Self *v300;
  uint32_t *v301;
  uint32_t *v302;
  Json::Value::Self *v303;
  int v304;
  uint32_t *v305;
  uint32_t *v306;
  typedef char *_g4_t_s;
  typedef int _g4_t_sa;
  typedef Json::Value::Self *_g4_t_sb;
  typedef Json::Value::Self *_g4_t_sc;
  typedef char *_g4_t_s_4;
  typedef char *_g4_t_s_4a;
  typedef int *_g4_t_v313;
  typedef const void **_g4_t_v314;
  typedef sociallib::CMemoryStream::Self *_g4_t_v315;
  typedef std::pair<std::string const, sociallib::SNSUserData::Self> *_g4_t_v316;
  typedef std::pair<std::string const, sociallib::SNSUserData::Self> *_g4_t_v317;
  typedef std::pair<std::string const, sociallib::SNSUserData::Self> *_g4_t_v318;
  typedef std::pair<std::string const, sociallib::SNSUserData::Self> *_g4_t_v319;
  typedef std::pair<std::string const, sociallib::SNSUserData::Self> *_g4_t_v320;
  typedef std::pair<std::string const, sociallib::SNSUserData::Self> *_g4_t_v321;
  typedef std::pair<std::string const, sociallib::SNSUserData::Self> *_g4_t_v322;
  typedef std::pair<std::string const, sociallib::SNSUserData::Self> *_g4_t_v323;
  typedef sociallib::SNSUserData::Self *_g4_t_v324;
  typedef Json::Value::Self *_g4_t_v325;
  typedef Json::Value::Self *_g4_t_v326;
  typedef Json::Value::Self *_g4_t_v327;
  typedef Json::Value::Self *_g4_t_v328;
  typedef Json::Value::Self *_g4_t_v329;
  typedef Json::Value::Self *_g4_t_v330;
  typedef char *_g4_t_v331;
  typedef char *_g4_t_v332;
  typedef char *_g4_t_v333;
  typedef char *_g4_t_v334;
  typedef char *_g4_t_v335;
  typedef char *_g4_t_v336;
  typedef unsigned int _g4_t_v337;
  typedef Json::Value::Self *_g4_t_v338;
  typedef Json::Value::Self *_g4_t_v339;
  typedef Json::Value::Self *_g4_t_v340;
  typedef Json::Value::Self *_g4_t_v341;
  typedef Json::Value::Self *_g4_t_v342;
  typedef Json::Value::Self *_g4_t_v343;
  typedef Json::Value::Self *_g4_t_v344;
  typedef Json::Value::Self *_g4_t_v345;
  typedef Json::Value::Self *_g4_t_v346;
  typedef Json::Value::Self *_g4_t_v347;
  typedef Json::Value::Self *_g4_t_v348;
  typedef Json::Value::Self *_g4_t_v349;
  typedef Json::Value::Self *_g4_t_v350;
  typedef Json::Value::Self *_g4_t_v351;
  typedef Json::Value::Self *_g4_t_v352;
  typedef Json::Value::Self *_g4_t_v353;
  typedef Json::Value::Self *_g4_t_v354;
  typedef Json::Value::Self *_g4_t_v355;
  typedef Json::Value::Self *_g4_t_v356;
  typedef Json::Value::Self *_g4_t_v357;
  typedef Json::Value::Self *_g4_t_v358;
  typedef Json::Value::Self *_g4_t_v359;
  typedef Json::Value::Self *_g4_t_v360;
  typedef Json::Value::Self *_g4_t_v361;
  typedef char *_g4_t_format;
  typedef char *_g4_t_formata;
  typedef char *_g4_t_formatb;
  typedef char *_g4_t_formatc;
  typedef Json::Value::Self *_g4_t_v366;
  typedef Json::Value::Self *_g4_t_v367;
  typedef Json::Value::Self *_g4_t_v368;
  typedef std::pair<std::string const, sociallib::SNSUserData::Self> *_g4_t_v369;
  typedef std::pair<std::string const, sociallib::SNSUserData::Self> *_g4_t_v370;
  typedef std::pair<std::string const, sociallib::SNSUserData::Self> *_g4_t_v371;
  typedef sociallib::CMemoryStream::Self *_g4_t_v372;
  typedef Json::Value::Self *_g4_t_v373;
  typedef Json::Value::Self *_g4_t_v374;
  typedef char _g4_t_v375;
  typedef char _g4_t_v376;
  typedef uint8_t _g4_t_v377[13];
  typedef char _g4_t_v378;
  typedef char _g4_t_v379;
  typedef int _g4_t_v380;
  typedef int _g4_t_v381;
  typedef char _g4_t_v382;
  typedef char _g4_t_v383;
  typedef char _g4_t_v384;
  typedef char _g4_t_v385;
  typedef char _g4_t_v386;
  typedef char _g4_t_v387;
  typedef int _g4_t_v388;
  typedef int _g4_t_v389;
  typedef int _g4_t_v390;
  typedef int _g4_t_v391;
  typedef int _g4_t_v392;
  typedef int _g4_t_v393;
  typedef int _g4_t_v394;
  typedef int _g4_t_v395;
  typedef int _g4_t_v396;
  typedef int _g4_t_v397;
  typedef int _g4_t_v398;
  typedef int _g4_t_v399;
  typedef int _g4_t_v400;
  typedef int _g4_t_v401;
  typedef int _g4_t_v402;
  typedef int _g4_t_v403;
  typedef char _g4_t_v404[4];
  typedef char _g4_t_v405[4];
  typedef int _g4_t_v406;
  typedef char _g4_t_v407[4];
  typedef char _g4_t_v408[4];
  typedef char _g4_t_v409[4];
  typedef char _g4_t_v410[4];
  typedef char _g4_t_v411;
  typedef char _g4_t_v412;
  typedef char _g4_t_v413[4];
  typedef char _g4_t_v414;
  typedef char _g4_t_v415;
  typedef char _g4_t_v416;
  typedef char _g4_t_v417[4];
  typedef char _g4_t_v418;
  typedef char _g4_t_v419[4];
  typedef char _g4_t_v420;
  typedef int _g4_t_v421;
  typedef char _g4_t_v422[4];
  typedef char _g4_t_v423[4];
  typedef char _g4_t_v424[4];
  typedef int _g4_t_v425;
  typedef int _g4_t_v426;
  typedef char _g4_t_v427[4];
  typedef int _g4_t_v428;
  typedef int _g4_t_v429;
  typedef char _g4_t_v430[4];
  typedef char _g4_t_v431[4];
  typedef int _g4_t_v432;
  typedef int _g4_t_v433;
  typedef char _g4_t_v434[4];
  typedef int _g4_t_v435;
  typedef int _g4_t_v436;
  typedef int _g4_t_v437;
  typedef char _g4_t_v438[4];
  typedef int _g4_t_v439;
  typedef char _g4_t_v440[4];
  typedef int _g4_t_v441;
  typedef int _g4_t_v442;
  typedef char _g4_t_v443[4];
  typedef char _g4_t_v444[4];
  typedef int _g4_t_v445;
  typedef int _g4_t_v446;
  typedef int _g4_t_v447;
  typedef int _g4_t_v448;
  typedef char _g4_t_v449[4];
  typedef int _g4_t_v450;
  typedef int _g4_t_v451;
  typedef int _g4_t_v452;
  typedef int _g4_t_v453;
  typedef int _g4_t_v454;
  typedef int _g4_t_v455;
  typedef char *_g4_t_v456;
  typedef int _g4_t_v457;
  typedef char _g4_t_v458[4];
  typedef int _g4_t_v459;
  typedef int _g4_t_v460;
  typedef int _g4_t_v461;
  typedef char _g4_t_v462[4];
  typedef int _g4_t_v463;
  typedef int _g4_t_v464;
  typedef int _g4_t_v465;
  typedef int _g4_t_v466;
  typedef char _g4_t_v467[4];
  typedef int _g4_t_v468;
  typedef char _g4_t_v469[4];
  typedef char _g4_t_v470[4];
  typedef int _g4_t_v471;
  typedef int _g4_t_v472;
  typedef int _g4_t_v473;
  typedef int _g4_t_v474;
  typedef int _g4_t_v475;
  typedef char _g4_t_v476[4];
  typedef int _g4_t_v477;
  typedef char _g4_t_v478[4];
  typedef int _g4_t_v479;
  typedef char _g4_t_v480[4];
  typedef char _g4_t_v481[4];
  typedef char _g4_t_v482[4];
  typedef char _g4_t_v483[4];
  typedef char _g4_t_v484[4];
  typedef char _g4_t_v485[4];
  typedef char _g4_t_v486[4];
  typedef char _g4_t_v487[4];
  typedef char _g4_t_v488[4];
  typedef int _g4_t_v489;
  typedef char _g4_t_v490[4];
  typedef char _g4_t_v491[4];
  typedef char _g4_t_v492[4];
  typedef char _g4_t_v493[4];
  typedef char _g4_t_v494[4];
  typedef char _g4_t_v495[4];
  typedef char _g4_t_v496[4];
  typedef char _g4_t_v497[4];
  typedef char _g4_t_v498[4];
  typedef char _g4_t_v499[4];
  typedef char _g4_t_v500[4];
  typedef int _g4_t_v501;
  typedef char _g4_t_v502[4];
  typedef char _g4_t_v503[4];
  typedef char _g4_t_v504[4];
  typedef char _g4_t_v505[4];
  typedef char _g4_t_v506[4];
  typedef char _g4_t_v507[4];
  typedef char _g4_t_v508[4];
  typedef char _g4_t_v509[4];
  typedef char _g4_t_v510[4];
  typedef char _g4_t_v511[4];
  typedef char _g4_t_v512[4];
  typedef char _g4_t_v513[4];
  typedef char _g4_t_v514[4];
  typedef const void *_g4_t_v515;
  typedef char _g4_t_v516[4];
  typedef char _g4_t_v517[4];
  typedef char _g4_t_v518[4];
  typedef const void *_g4_t_v519;
  typedef char _g4_t_v520[4];
  typedef char _g4_t_v521[4];
  typedef char _g4_t_v522[4];
  typedef volatile int32_t *_g4_t_v523;
  typedef int _g4_t_v524;
  typedef char _g4_t_v525[4];
  typedef char _g4_t_v526[4];
  typedef const void *_g4_t_v527;
  typedef char _g4_t_v528[4];
  typedef uint32_t _g4_t_v529[4];
  typedef int _g4_t_v530;
  typedef int _g4_t_v531;
  typedef const Json::Value::Self *_g4_t_v532[4];
  typedef uint8_t _g4_t_v533[16];
  typedef void *_g4_t_v534;
  typedef char *_g4_t_v535;
  typedef char *_g4_t_v536;
  typedef int _g4_t_v537[4];
  typedef uint8_t _g4_t_v538[20];
  typedef uint8_t _g4_t_v539[20];
  typedef int _g4_t_v540[5];
  typedef uint8_t _g4_t_v541[20];
  typedef uint8_t _g4_t_v542[20];
  typedef uint8_t _g4_t_v543[20];
  typedef int _g4_t_v544;
  typedef int _g4_t_v545;
  typedef void *_g4_t_v546;
  typedef int *_g4_t_v547;
  typedef int *_g4_t_v548;
  typedef int _g4_t_v549;
  typedef int _g4_t_v550[7];
  typedef char _g4_t_v551[20];
  typedef int _g4_t_v552[7];
  typedef char _g4_t_v553[20];
  typedef int _g4_t_v554[7];
  typedef char _g4_t_v555[20];
  typedef uint8_t _g4_t_v556[8];
  typedef void *_g4_t_v557;
  typedef char _g4_t_v558[20];
  typedef char _g4_t_v559[4];
  typedef char _g4_t_v560[48];
  typedef uint8_t _g4_t_v561[52];
  typedef char _g4_t_v562[4];
  typedef char _g4_t_v563[48];
  typedef uint8_t _g4_t_v564[52];
  typedef char _g4_t_v565[4];
  typedef char _g4_t_v566[48];
  typedef uint8_t _g4_t_v567[52];
  typedef char _g4_t_v568[4];
  typedef int _g4_t_v569[7];
  typedef char _g4_t_v570[20];
  typedef char _g4_t_v571[4];
  typedef int _g4_t_v572[7];
  typedef char _g4_t_v573[20];
  typedef char _g4_t_v574[4];
  typedef uint32_t *_g4_t_v575;
  typedef void *_g4_t_v576;
  typedef int _g4_t_v577;
  typedef uint32_t *_g4_t_v578;
  typedef uint32_t *_g4_t_v579;
  typedef uint32_t *_g4_t_v580;
  typedef uint32_t *_g4_t_v581;
  typedef uint32_t *_g4_t_v582;
  typedef uint32_t *_g4_t_v583;
  typedef uint32_t *_g4_t_v584;
  typedef uint32_t *_g4_t_v585;
  typedef uint32_t *_g4_t_v586;
  typedef uint32_t *_g4_t_v587;
  typedef uint32_t _g4_t_v588[3];
  typedef const char *_g4_t_v589[35];
  enum : size_t {
    _g4_s0 = 1840u,
    _g4_s1 = (0u + sizeof(_g4_t_s)) > _g4_s0 ? (0u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_sa)) > _g4_s1 ? (0u + sizeof(_g4_t_sa)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_sb)) > _g4_s2 ? (0u + sizeof(_g4_t_sb)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_sc)) > _g4_s3 ? (0u + sizeof(_g4_t_sc)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_s_4)) > _g4_s4 ? (4u + sizeof(_g4_t_s_4)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_s_4a)) > _g4_s5 ? (4u + sizeof(_g4_t_s_4a)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v313)) > _g4_s6 ? (8u + sizeof(_g4_t_v313)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v314)) > _g4_s7 ? (16u + sizeof(_g4_t_v314)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v315)) > _g4_s8 ? (16u + sizeof(_g4_t_v315)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v316)) > _g4_s9 ? (20u + sizeof(_g4_t_v316)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v317)) > _g4_s10 ? (20u + sizeof(_g4_t_v317)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v318)) > _g4_s11 ? (20u + sizeof(_g4_t_v318)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v319)) > _g4_s12 ? (20u + sizeof(_g4_t_v319)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v320)) > _g4_s13 ? (20u + sizeof(_g4_t_v320)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v321)) > _g4_s14 ? (20u + sizeof(_g4_t_v321)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v322)) > _g4_s15 ? (20u + sizeof(_g4_t_v322)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v323)) > _g4_s16 ? (20u + sizeof(_g4_t_v323)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v324)) > _g4_s17 ? (24u + sizeof(_g4_t_v324)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v325)) > _g4_s18 ? (28u + sizeof(_g4_t_v325)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v326)) > _g4_s19 ? (28u + sizeof(_g4_t_v326)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v327)) > _g4_s20 ? (28u + sizeof(_g4_t_v327)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v328)) > _g4_s21 ? (28u + sizeof(_g4_t_v328)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_v329)) > _g4_s22 ? (28u + sizeof(_g4_t_v329)) : _g4_s22,
    _g4_s24 = (28u + sizeof(_g4_t_v330)) > _g4_s23 ? (28u + sizeof(_g4_t_v330)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v331)) > _g4_s24 ? (32u + sizeof(_g4_t_v331)) : _g4_s24,
    _g4_s26 = (32u + sizeof(_g4_t_v332)) > _g4_s25 ? (32u + sizeof(_g4_t_v332)) : _g4_s25,
    _g4_s27 = (32u + sizeof(_g4_t_v333)) > _g4_s26 ? (32u + sizeof(_g4_t_v333)) : _g4_s26,
    _g4_s28 = (32u + sizeof(_g4_t_v334)) > _g4_s27 ? (32u + sizeof(_g4_t_v334)) : _g4_s27,
    _g4_s29 = (32u + sizeof(_g4_t_v335)) > _g4_s28 ? (32u + sizeof(_g4_t_v335)) : _g4_s28,
    _g4_s30 = (32u + sizeof(_g4_t_v336)) > _g4_s29 ? (32u + sizeof(_g4_t_v336)) : _g4_s29,
    _g4_s31 = (32u + sizeof(_g4_t_v337)) > _g4_s30 ? (32u + sizeof(_g4_t_v337)) : _g4_s30,
    _g4_s32 = (36u + sizeof(_g4_t_v338)) > _g4_s31 ? (36u + sizeof(_g4_t_v338)) : _g4_s31,
    _g4_s33 = (36u + sizeof(_g4_t_v339)) > _g4_s32 ? (36u + sizeof(_g4_t_v339)) : _g4_s32,
    _g4_s34 = (36u + sizeof(_g4_t_v340)) > _g4_s33 ? (36u + sizeof(_g4_t_v340)) : _g4_s33,
    _g4_s35 = (36u + sizeof(_g4_t_v341)) > _g4_s34 ? (36u + sizeof(_g4_t_v341)) : _g4_s34,
    _g4_s36 = (36u + sizeof(_g4_t_v342)) > _g4_s35 ? (36u + sizeof(_g4_t_v342)) : _g4_s35,
    _g4_s37 = (40u + sizeof(_g4_t_v343)) > _g4_s36 ? (40u + sizeof(_g4_t_v343)) : _g4_s36,
    _g4_s38 = (40u + sizeof(_g4_t_v344)) > _g4_s37 ? (40u + sizeof(_g4_t_v344)) : _g4_s37,
    _g4_s39 = (44u + sizeof(_g4_t_v345)) > _g4_s38 ? (44u + sizeof(_g4_t_v345)) : _g4_s38,
    _g4_s40 = (44u + sizeof(_g4_t_v346)) > _g4_s39 ? (44u + sizeof(_g4_t_v346)) : _g4_s39,
    _g4_s41 = (44u + sizeof(_g4_t_v347)) > _g4_s40 ? (44u + sizeof(_g4_t_v347)) : _g4_s40,
    _g4_s42 = (44u + sizeof(_g4_t_v348)) > _g4_s41 ? (44u + sizeof(_g4_t_v348)) : _g4_s41,
    _g4_s43 = (44u + sizeof(_g4_t_v349)) > _g4_s42 ? (44u + sizeof(_g4_t_v349)) : _g4_s42,
    _g4_s44 = (44u + sizeof(_g4_t_v350)) > _g4_s43 ? (44u + sizeof(_g4_t_v350)) : _g4_s43,
    _g4_s45 = (44u + sizeof(_g4_t_v351)) > _g4_s44 ? (44u + sizeof(_g4_t_v351)) : _g4_s44,
    _g4_s46 = (48u + sizeof(_g4_t_v352)) > _g4_s45 ? (48u + sizeof(_g4_t_v352)) : _g4_s45,
    _g4_s47 = (48u + sizeof(_g4_t_v353)) > _g4_s46 ? (48u + sizeof(_g4_t_v353)) : _g4_s46,
    _g4_s48 = (48u + sizeof(_g4_t_v354)) > _g4_s47 ? (48u + sizeof(_g4_t_v354)) : _g4_s47,
    _g4_s49 = (48u + sizeof(_g4_t_v355)) > _g4_s48 ? (48u + sizeof(_g4_t_v355)) : _g4_s48,
    _g4_s50 = (48u + sizeof(_g4_t_v356)) > _g4_s49 ? (48u + sizeof(_g4_t_v356)) : _g4_s49,
    _g4_s51 = (48u + sizeof(_g4_t_v357)) > _g4_s50 ? (48u + sizeof(_g4_t_v357)) : _g4_s50,
    _g4_s52 = (52u + sizeof(_g4_t_v358)) > _g4_s51 ? (52u + sizeof(_g4_t_v358)) : _g4_s51,
    _g4_s53 = (52u + sizeof(_g4_t_v359)) > _g4_s52 ? (52u + sizeof(_g4_t_v359)) : _g4_s52,
    _g4_s54 = (52u + sizeof(_g4_t_v360)) > _g4_s53 ? (52u + sizeof(_g4_t_v360)) : _g4_s53,
    _g4_s55 = (52u + sizeof(_g4_t_v361)) > _g4_s54 ? (52u + sizeof(_g4_t_v361)) : _g4_s54,
    _g4_s56 = (56u + sizeof(_g4_t_format)) > _g4_s55 ? (56u + sizeof(_g4_t_format)) : _g4_s55,
    _g4_s57 = (56u + sizeof(_g4_t_formata)) > _g4_s56 ? (56u + sizeof(_g4_t_formata)) : _g4_s56,
    _g4_s58 = (56u + sizeof(_g4_t_formatb)) > _g4_s57 ? (56u + sizeof(_g4_t_formatb)) : _g4_s57,
    _g4_s59 = (56u + sizeof(_g4_t_formatc)) > _g4_s58 ? (56u + sizeof(_g4_t_formatc)) : _g4_s58,
    _g4_s60 = (60u + sizeof(_g4_t_v366)) > _g4_s59 ? (60u + sizeof(_g4_t_v366)) : _g4_s59,
    _g4_s61 = (60u + sizeof(_g4_t_v367)) > _g4_s60 ? (60u + sizeof(_g4_t_v367)) : _g4_s60,
    _g4_s62 = (60u + sizeof(_g4_t_v368)) > _g4_s61 ? (60u + sizeof(_g4_t_v368)) : _g4_s61,
    _g4_s63 = (64u + sizeof(_g4_t_v369)) > _g4_s62 ? (64u + sizeof(_g4_t_v369)) : _g4_s62,
    _g4_s64 = (64u + sizeof(_g4_t_v370)) > _g4_s63 ? (64u + sizeof(_g4_t_v370)) : _g4_s63,
    _g4_s65 = (64u + sizeof(_g4_t_v371)) > _g4_s64 ? (64u + sizeof(_g4_t_v371)) : _g4_s64,
    _g4_s66 = (68u + sizeof(_g4_t_v372)) > _g4_s65 ? (68u + sizeof(_g4_t_v372)) : _g4_s65,
    _g4_s67 = (72u + sizeof(_g4_t_v373)) > _g4_s66 ? (72u + sizeof(_g4_t_v373)) : _g4_s66,
    _g4_s68 = (72u + sizeof(_g4_t_v374)) > _g4_s67 ? (72u + sizeof(_g4_t_v374)) : _g4_s67,
    _g4_s69 = (76u + sizeof(_g4_t_v375)) > _g4_s68 ? (76u + sizeof(_g4_t_v375)) : _g4_s68,
    _g4_s70 = (80u + sizeof(_g4_t_v376)) > _g4_s69 ? (80u + sizeof(_g4_t_v376)) : _g4_s69,
    _g4_s71 = (104u + sizeof(_g4_t_v377)) > _g4_s70 ? (104u + sizeof(_g4_t_v377)) : _g4_s70,
    _g4_s72 = (117u + sizeof(_g4_t_v378)) > _g4_s71 ? (117u + sizeof(_g4_t_v378)) : _g4_s71,
    _g4_s73 = (118u + sizeof(_g4_t_v379)) > _g4_s72 ? (118u + sizeof(_g4_t_v379)) : _g4_s72,
    _g4_s74 = (119u + sizeof(_g4_t_v380)) > _g4_s73 ? (119u + sizeof(_g4_t_v380)) : _g4_s73,
    _g4_s75 = (120u + sizeof(_g4_t_v381)) > _g4_s74 ? (120u + sizeof(_g4_t_v381)) : _g4_s74,
    _g4_s76 = (124u + sizeof(_g4_t_v382)) > _g4_s75 ? (124u + sizeof(_g4_t_v382)) : _g4_s75,
    _g4_s77 = (125u + sizeof(_g4_t_v383)) > _g4_s76 ? (125u + sizeof(_g4_t_v383)) : _g4_s76,
    _g4_s78 = (126u + sizeof(_g4_t_v384)) > _g4_s77 ? (126u + sizeof(_g4_t_v384)) : _g4_s77,
    _g4_s79 = (127u + sizeof(_g4_t_v385)) > _g4_s78 ? (127u + sizeof(_g4_t_v385)) : _g4_s78,
    _g4_s80 = (128u + sizeof(_g4_t_v386)) > _g4_s79 ? (128u + sizeof(_g4_t_v386)) : _g4_s79,
    _g4_s81 = (129u + sizeof(_g4_t_v387)) > _g4_s80 ? (129u + sizeof(_g4_t_v387)) : _g4_s80,
    _g4_s82 = (130u + sizeof(_g4_t_v388)) > _g4_s81 ? (130u + sizeof(_g4_t_v388)) : _g4_s81,
    _g4_s83 = (132u + sizeof(_g4_t_v389)) > _g4_s82 ? (132u + sizeof(_g4_t_v389)) : _g4_s82,
    _g4_s84 = (136u + sizeof(_g4_t_v390)) > _g4_s83 ? (136u + sizeof(_g4_t_v390)) : _g4_s83,
    _g4_s85 = (140u + sizeof(_g4_t_v391)) > _g4_s84 ? (140u + sizeof(_g4_t_v391)) : _g4_s84,
    _g4_s86 = (144u + sizeof(_g4_t_v392)) > _g4_s85 ? (144u + sizeof(_g4_t_v392)) : _g4_s85,
    _g4_s87 = (148u + sizeof(_g4_t_v393)) > _g4_s86 ? (148u + sizeof(_g4_t_v393)) : _g4_s86,
    _g4_s88 = (152u + sizeof(_g4_t_v394)) > _g4_s87 ? (152u + sizeof(_g4_t_v394)) : _g4_s87,
    _g4_s89 = (156u + sizeof(_g4_t_v395)) > _g4_s88 ? (156u + sizeof(_g4_t_v395)) : _g4_s88,
    _g4_s90 = (160u + sizeof(_g4_t_v396)) > _g4_s89 ? (160u + sizeof(_g4_t_v396)) : _g4_s89,
    _g4_s91 = (164u + sizeof(_g4_t_v397)) > _g4_s90 ? (164u + sizeof(_g4_t_v397)) : _g4_s90,
    _g4_s92 = (168u + sizeof(_g4_t_v398)) > _g4_s91 ? (168u + sizeof(_g4_t_v398)) : _g4_s91,
    _g4_s93 = (172u + sizeof(_g4_t_v399)) > _g4_s92 ? (172u + sizeof(_g4_t_v399)) : _g4_s92,
    _g4_s94 = (176u + sizeof(_g4_t_v400)) > _g4_s93 ? (176u + sizeof(_g4_t_v400)) : _g4_s93,
    _g4_s95 = (180u + sizeof(_g4_t_v401)) > _g4_s94 ? (180u + sizeof(_g4_t_v401)) : _g4_s94,
    _g4_s96 = (184u + sizeof(_g4_t_v402)) > _g4_s95 ? (184u + sizeof(_g4_t_v402)) : _g4_s95,
    _g4_s97 = (188u + sizeof(_g4_t_v403)) > _g4_s96 ? (188u + sizeof(_g4_t_v403)) : _g4_s96,
    _g4_s98 = (216u + sizeof(_g4_t_v404)) > _g4_s97 ? (216u + sizeof(_g4_t_v404)) : _g4_s97,
    _g4_s99 = (220u + sizeof(_g4_t_v405)) > _g4_s98 ? (220u + sizeof(_g4_t_v405)) : _g4_s98,
    _g4_s100 = (224u + sizeof(_g4_t_v406)) > _g4_s99 ? (224u + sizeof(_g4_t_v406)) : _g4_s99,
    _g4_s101 = (228u + sizeof(_g4_t_v407)) > _g4_s100 ? (228u + sizeof(_g4_t_v407)) : _g4_s100,
    _g4_s102 = (232u + sizeof(_g4_t_v408)) > _g4_s101 ? (232u + sizeof(_g4_t_v408)) : _g4_s101,
    _g4_s103 = (236u + sizeof(_g4_t_v409)) > _g4_s102 ? (236u + sizeof(_g4_t_v409)) : _g4_s102,
    _g4_s104 = (240u + sizeof(_g4_t_v410)) > _g4_s103 ? (240u + sizeof(_g4_t_v410)) : _g4_s103,
    _g4_s105 = (244u + sizeof(_g4_t_v411)) > _g4_s104 ? (244u + sizeof(_g4_t_v411)) : _g4_s104,
    _g4_s106 = (248u + sizeof(_g4_t_v412)) > _g4_s105 ? (248u + sizeof(_g4_t_v412)) : _g4_s105,
    _g4_s107 = (252u + sizeof(_g4_t_v413)) > _g4_s106 ? (252u + sizeof(_g4_t_v413)) : _g4_s106,
    _g4_s108 = (256u + sizeof(_g4_t_v414)) > _g4_s107 ? (256u + sizeof(_g4_t_v414)) : _g4_s107,
    _g4_s109 = (260u + sizeof(_g4_t_v415)) > _g4_s108 ? (260u + sizeof(_g4_t_v415)) : _g4_s108,
    _g4_s110 = (264u + sizeof(_g4_t_v416)) > _g4_s109 ? (264u + sizeof(_g4_t_v416)) : _g4_s109,
    _g4_s111 = (268u + sizeof(_g4_t_v417)) > _g4_s110 ? (268u + sizeof(_g4_t_v417)) : _g4_s110,
    _g4_s112 = (272u + sizeof(_g4_t_v418)) > _g4_s111 ? (272u + sizeof(_g4_t_v418)) : _g4_s111,
    _g4_s113 = (276u + sizeof(_g4_t_v419)) > _g4_s112 ? (276u + sizeof(_g4_t_v419)) : _g4_s112,
    _g4_s114 = (280u + sizeof(_g4_t_v420)) > _g4_s113 ? (280u + sizeof(_g4_t_v420)) : _g4_s113,
    _g4_s115 = (284u + sizeof(_g4_t_v421)) > _g4_s114 ? (284u + sizeof(_g4_t_v421)) : _g4_s114,
    _g4_s116 = (288u + sizeof(_g4_t_v422)) > _g4_s115 ? (288u + sizeof(_g4_t_v422)) : _g4_s115,
    _g4_s117 = (292u + sizeof(_g4_t_v423)) > _g4_s116 ? (292u + sizeof(_g4_t_v423)) : _g4_s116,
    _g4_s118 = (296u + sizeof(_g4_t_v424)) > _g4_s117 ? (296u + sizeof(_g4_t_v424)) : _g4_s117,
    _g4_s119 = (300u + sizeof(_g4_t_v425)) > _g4_s118 ? (300u + sizeof(_g4_t_v425)) : _g4_s118,
    _g4_s120 = (304u + sizeof(_g4_t_v426)) > _g4_s119 ? (304u + sizeof(_g4_t_v426)) : _g4_s119,
    _g4_s121 = (308u + sizeof(_g4_t_v427)) > _g4_s120 ? (308u + sizeof(_g4_t_v427)) : _g4_s120,
    _g4_s122 = (312u + sizeof(_g4_t_v428)) > _g4_s121 ? (312u + sizeof(_g4_t_v428)) : _g4_s121,
    _g4_s123 = (316u + sizeof(_g4_t_v429)) > _g4_s122 ? (316u + sizeof(_g4_t_v429)) : _g4_s122,
    _g4_s124 = (320u + sizeof(_g4_t_v430)) > _g4_s123 ? (320u + sizeof(_g4_t_v430)) : _g4_s123,
    _g4_s125 = (324u + sizeof(_g4_t_v431)) > _g4_s124 ? (324u + sizeof(_g4_t_v431)) : _g4_s124,
    _g4_s126 = (328u + sizeof(_g4_t_v432)) > _g4_s125 ? (328u + sizeof(_g4_t_v432)) : _g4_s125,
    _g4_s127 = (332u + sizeof(_g4_t_v433)) > _g4_s126 ? (332u + sizeof(_g4_t_v433)) : _g4_s126,
    _g4_s128 = (336u + sizeof(_g4_t_v434)) > _g4_s127 ? (336u + sizeof(_g4_t_v434)) : _g4_s127,
    _g4_s129 = (340u + sizeof(_g4_t_v435)) > _g4_s128 ? (340u + sizeof(_g4_t_v435)) : _g4_s128,
    _g4_s130 = (344u + sizeof(_g4_t_v436)) > _g4_s129 ? (344u + sizeof(_g4_t_v436)) : _g4_s129,
    _g4_s131 = (348u + sizeof(_g4_t_v437)) > _g4_s130 ? (348u + sizeof(_g4_t_v437)) : _g4_s130,
    _g4_s132 = (352u + sizeof(_g4_t_v438)) > _g4_s131 ? (352u + sizeof(_g4_t_v438)) : _g4_s131,
    _g4_s133 = (356u + sizeof(_g4_t_v439)) > _g4_s132 ? (356u + sizeof(_g4_t_v439)) : _g4_s132,
    _g4_s134 = (360u + sizeof(_g4_t_v440)) > _g4_s133 ? (360u + sizeof(_g4_t_v440)) : _g4_s133,
    _g4_s135 = (364u + sizeof(_g4_t_v441)) > _g4_s134 ? (364u + sizeof(_g4_t_v441)) : _g4_s134,
    _g4_s136 = (368u + sizeof(_g4_t_v442)) > _g4_s135 ? (368u + sizeof(_g4_t_v442)) : _g4_s135,
    _g4_s137 = (372u + sizeof(_g4_t_v443)) > _g4_s136 ? (372u + sizeof(_g4_t_v443)) : _g4_s136,
    _g4_s138 = (376u + sizeof(_g4_t_v444)) > _g4_s137 ? (376u + sizeof(_g4_t_v444)) : _g4_s137,
    _g4_s139 = (380u + sizeof(_g4_t_v445)) > _g4_s138 ? (380u + sizeof(_g4_t_v445)) : _g4_s138,
    _g4_s140 = (384u + sizeof(_g4_t_v446)) > _g4_s139 ? (384u + sizeof(_g4_t_v446)) : _g4_s139,
    _g4_s141 = (388u + sizeof(_g4_t_v447)) > _g4_s140 ? (388u + sizeof(_g4_t_v447)) : _g4_s140,
    _g4_s142 = (392u + sizeof(_g4_t_v448)) > _g4_s141 ? (392u + sizeof(_g4_t_v448)) : _g4_s141,
    _g4_s143 = (396u + sizeof(_g4_t_v449)) > _g4_s142 ? (396u + sizeof(_g4_t_v449)) : _g4_s142,
    _g4_s144 = (400u + sizeof(_g4_t_v450)) > _g4_s143 ? (400u + sizeof(_g4_t_v450)) : _g4_s143,
    _g4_s145 = (404u + sizeof(_g4_t_v451)) > _g4_s144 ? (404u + sizeof(_g4_t_v451)) : _g4_s144,
    _g4_s146 = (408u + sizeof(_g4_t_v452)) > _g4_s145 ? (408u + sizeof(_g4_t_v452)) : _g4_s145,
    _g4_s147 = (412u + sizeof(_g4_t_v453)) > _g4_s146 ? (412u + sizeof(_g4_t_v453)) : _g4_s146,
    _g4_s148 = (416u + sizeof(_g4_t_v454)) > _g4_s147 ? (416u + sizeof(_g4_t_v454)) : _g4_s147,
    _g4_s149 = (420u + sizeof(_g4_t_v455)) > _g4_s148 ? (420u + sizeof(_g4_t_v455)) : _g4_s148,
    _g4_s150 = (424u + sizeof(_g4_t_v456)) > _g4_s149 ? (424u + sizeof(_g4_t_v456)) : _g4_s149,
    _g4_s151 = (428u + sizeof(_g4_t_v457)) > _g4_s150 ? (428u + sizeof(_g4_t_v457)) : _g4_s150,
    _g4_s152 = (432u + sizeof(_g4_t_v458)) > _g4_s151 ? (432u + sizeof(_g4_t_v458)) : _g4_s151,
    _g4_s153 = (436u + sizeof(_g4_t_v459)) > _g4_s152 ? (436u + sizeof(_g4_t_v459)) : _g4_s152,
    _g4_s154 = (440u + sizeof(_g4_t_v460)) > _g4_s153 ? (440u + sizeof(_g4_t_v460)) : _g4_s153,
    _g4_s155 = (444u + sizeof(_g4_t_v461)) > _g4_s154 ? (444u + sizeof(_g4_t_v461)) : _g4_s154,
    _g4_s156 = (448u + sizeof(_g4_t_v462)) > _g4_s155 ? (448u + sizeof(_g4_t_v462)) : _g4_s155,
    _g4_s157 = (452u + sizeof(_g4_t_v463)) > _g4_s156 ? (452u + sizeof(_g4_t_v463)) : _g4_s156,
    _g4_s158 = (456u + sizeof(_g4_t_v464)) > _g4_s157 ? (456u + sizeof(_g4_t_v464)) : _g4_s157,
    _g4_s159 = (460u + sizeof(_g4_t_v465)) > _g4_s158 ? (460u + sizeof(_g4_t_v465)) : _g4_s158,
    _g4_s160 = (464u + sizeof(_g4_t_v466)) > _g4_s159 ? (464u + sizeof(_g4_t_v466)) : _g4_s159,
    _g4_s161 = (468u + sizeof(_g4_t_v467)) > _g4_s160 ? (468u + sizeof(_g4_t_v467)) : _g4_s160,
    _g4_s162 = (472u + sizeof(_g4_t_v468)) > _g4_s161 ? (472u + sizeof(_g4_t_v468)) : _g4_s161,
    _g4_s163 = (476u + sizeof(_g4_t_v469)) > _g4_s162 ? (476u + sizeof(_g4_t_v469)) : _g4_s162,
    _g4_s164 = (480u + sizeof(_g4_t_v470)) > _g4_s163 ? (480u + sizeof(_g4_t_v470)) : _g4_s163,
    _g4_s165 = (484u + sizeof(_g4_t_v471)) > _g4_s164 ? (484u + sizeof(_g4_t_v471)) : _g4_s164,
    _g4_s166 = (488u + sizeof(_g4_t_v472)) > _g4_s165 ? (488u + sizeof(_g4_t_v472)) : _g4_s165,
    _g4_s167 = (492u + sizeof(_g4_t_v473)) > _g4_s166 ? (492u + sizeof(_g4_t_v473)) : _g4_s166,
    _g4_s168 = (496u + sizeof(_g4_t_v474)) > _g4_s167 ? (496u + sizeof(_g4_t_v474)) : _g4_s167,
    _g4_s169 = (500u + sizeof(_g4_t_v475)) > _g4_s168 ? (500u + sizeof(_g4_t_v475)) : _g4_s168,
    _g4_s170 = (504u + sizeof(_g4_t_v476)) > _g4_s169 ? (504u + sizeof(_g4_t_v476)) : _g4_s169,
    _g4_s171 = (508u + sizeof(_g4_t_v477)) > _g4_s170 ? (508u + sizeof(_g4_t_v477)) : _g4_s170,
    _g4_s172 = (512u + sizeof(_g4_t_v478)) > _g4_s171 ? (512u + sizeof(_g4_t_v478)) : _g4_s171,
    _g4_s173 = (516u + sizeof(_g4_t_v479)) > _g4_s172 ? (516u + sizeof(_g4_t_v479)) : _g4_s172,
    _g4_s174 = (520u + sizeof(_g4_t_v480)) > _g4_s173 ? (520u + sizeof(_g4_t_v480)) : _g4_s173,
    _g4_s175 = (524u + sizeof(_g4_t_v481)) > _g4_s174 ? (524u + sizeof(_g4_t_v481)) : _g4_s174,
    _g4_s176 = (528u + sizeof(_g4_t_v482)) > _g4_s175 ? (528u + sizeof(_g4_t_v482)) : _g4_s175,
    _g4_s177 = (532u + sizeof(_g4_t_v483)) > _g4_s176 ? (532u + sizeof(_g4_t_v483)) : _g4_s176,
    _g4_s178 = (536u + sizeof(_g4_t_v484)) > _g4_s177 ? (536u + sizeof(_g4_t_v484)) : _g4_s177,
    _g4_s179 = (540u + sizeof(_g4_t_v485)) > _g4_s178 ? (540u + sizeof(_g4_t_v485)) : _g4_s178,
    _g4_s180 = (544u + sizeof(_g4_t_v486)) > _g4_s179 ? (544u + sizeof(_g4_t_v486)) : _g4_s179,
    _g4_s181 = (548u + sizeof(_g4_t_v487)) > _g4_s180 ? (548u + sizeof(_g4_t_v487)) : _g4_s180,
    _g4_s182 = (552u + sizeof(_g4_t_v488)) > _g4_s181 ? (552u + sizeof(_g4_t_v488)) : _g4_s181,
    _g4_s183 = (556u + sizeof(_g4_t_v489)) > _g4_s182 ? (556u + sizeof(_g4_t_v489)) : _g4_s182,
    _g4_s184 = (560u + sizeof(_g4_t_v490)) > _g4_s183 ? (560u + sizeof(_g4_t_v490)) : _g4_s183,
    _g4_s185 = (564u + sizeof(_g4_t_v491)) > _g4_s184 ? (564u + sizeof(_g4_t_v491)) : _g4_s184,
    _g4_s186 = (568u + sizeof(_g4_t_v492)) > _g4_s185 ? (568u + sizeof(_g4_t_v492)) : _g4_s185,
    _g4_s187 = (572u + sizeof(_g4_t_v493)) > _g4_s186 ? (572u + sizeof(_g4_t_v493)) : _g4_s186,
    _g4_s188 = (576u + sizeof(_g4_t_v494)) > _g4_s187 ? (576u + sizeof(_g4_t_v494)) : _g4_s187,
    _g4_s189 = (580u + sizeof(_g4_t_v495)) > _g4_s188 ? (580u + sizeof(_g4_t_v495)) : _g4_s188,
    _g4_s190 = (584u + sizeof(_g4_t_v496)) > _g4_s189 ? (584u + sizeof(_g4_t_v496)) : _g4_s189,
    _g4_s191 = (588u + sizeof(_g4_t_v497)) > _g4_s190 ? (588u + sizeof(_g4_t_v497)) : _g4_s190,
    _g4_s192 = (592u + sizeof(_g4_t_v498)) > _g4_s191 ? (592u + sizeof(_g4_t_v498)) : _g4_s191,
    _g4_s193 = (596u + sizeof(_g4_t_v499)) > _g4_s192 ? (596u + sizeof(_g4_t_v499)) : _g4_s192,
    _g4_s194 = (600u + sizeof(_g4_t_v500)) > _g4_s193 ? (600u + sizeof(_g4_t_v500)) : _g4_s193,
    _g4_s195 = (604u + sizeof(_g4_t_v501)) > _g4_s194 ? (604u + sizeof(_g4_t_v501)) : _g4_s194,
    _g4_s196 = (608u + sizeof(_g4_t_v502)) > _g4_s195 ? (608u + sizeof(_g4_t_v502)) : _g4_s195,
    _g4_s197 = (612u + sizeof(_g4_t_v503)) > _g4_s196 ? (612u + sizeof(_g4_t_v503)) : _g4_s196,
    _g4_s198 = (616u + sizeof(_g4_t_v504)) > _g4_s197 ? (616u + sizeof(_g4_t_v504)) : _g4_s197,
    _g4_s199 = (620u + sizeof(_g4_t_v505)) > _g4_s198 ? (620u + sizeof(_g4_t_v505)) : _g4_s198,
    _g4_s200 = (624u + sizeof(_g4_t_v506)) > _g4_s199 ? (624u + sizeof(_g4_t_v506)) : _g4_s199,
    _g4_s201 = (628u + sizeof(_g4_t_v507)) > _g4_s200 ? (628u + sizeof(_g4_t_v507)) : _g4_s200,
    _g4_s202 = (632u + sizeof(_g4_t_v508)) > _g4_s201 ? (632u + sizeof(_g4_t_v508)) : _g4_s201,
    _g4_s203 = (636u + sizeof(_g4_t_v509)) > _g4_s202 ? (636u + sizeof(_g4_t_v509)) : _g4_s202,
    _g4_s204 = (640u + sizeof(_g4_t_v510)) > _g4_s203 ? (640u + sizeof(_g4_t_v510)) : _g4_s203,
    _g4_s205 = (644u + sizeof(_g4_t_v511)) > _g4_s204 ? (644u + sizeof(_g4_t_v511)) : _g4_s204,
    _g4_s206 = (648u + sizeof(_g4_t_v512)) > _g4_s205 ? (648u + sizeof(_g4_t_v512)) : _g4_s205,
    _g4_s207 = (652u + sizeof(_g4_t_v513)) > _g4_s206 ? (652u + sizeof(_g4_t_v513)) : _g4_s206,
    _g4_s208 = (656u + sizeof(_g4_t_v514)) > _g4_s207 ? (656u + sizeof(_g4_t_v514)) : _g4_s207,
    _g4_s209 = (660u + sizeof(_g4_t_v515)) > _g4_s208 ? (660u + sizeof(_g4_t_v515)) : _g4_s208,
    _g4_s210 = (664u + sizeof(_g4_t_v516)) > _g4_s209 ? (664u + sizeof(_g4_t_v516)) : _g4_s209,
    _g4_s211 = (668u + sizeof(_g4_t_v517)) > _g4_s210 ? (668u + sizeof(_g4_t_v517)) : _g4_s210,
    _g4_s212 = (672u + sizeof(_g4_t_v518)) > _g4_s211 ? (672u + sizeof(_g4_t_v518)) : _g4_s211,
    _g4_s213 = (676u + sizeof(_g4_t_v519)) > _g4_s212 ? (676u + sizeof(_g4_t_v519)) : _g4_s212,
    _g4_s214 = (680u + sizeof(_g4_t_v520)) > _g4_s213 ? (680u + sizeof(_g4_t_v520)) : _g4_s213,
    _g4_s215 = (684u + sizeof(_g4_t_v521)) > _g4_s214 ? (684u + sizeof(_g4_t_v521)) : _g4_s214,
    _g4_s216 = (688u + sizeof(_g4_t_v522)) > _g4_s215 ? (688u + sizeof(_g4_t_v522)) : _g4_s215,
    _g4_s217 = (692u + sizeof(_g4_t_v523)) > _g4_s216 ? (692u + sizeof(_g4_t_v523)) : _g4_s216,
    _g4_s218 = (696u + sizeof(_g4_t_v524)) > _g4_s217 ? (696u + sizeof(_g4_t_v524)) : _g4_s217,
    _g4_s219 = (700u + sizeof(_g4_t_v525)) > _g4_s218 ? (700u + sizeof(_g4_t_v525)) : _g4_s218,
    _g4_s220 = (704u + sizeof(_g4_t_v526)) > _g4_s219 ? (704u + sizeof(_g4_t_v526)) : _g4_s219,
    _g4_s221 = (708u + sizeof(_g4_t_v527)) > _g4_s220 ? (708u + sizeof(_g4_t_v527)) : _g4_s220,
    _g4_s222 = (712u + sizeof(_g4_t_v528)) > _g4_s221 ? (712u + sizeof(_g4_t_v528)) : _g4_s221,
    _g4_s223 = (716u + sizeof(_g4_t_v529)) > _g4_s222 ? (716u + sizeof(_g4_t_v529)) : _g4_s222,
    _g4_s224 = (732u + sizeof(_g4_t_v530)) > _g4_s223 ? (732u + sizeof(_g4_t_v530)) : _g4_s223,
    _g4_s225 = (736u + sizeof(_g4_t_v531)) > _g4_s224 ? (736u + sizeof(_g4_t_v531)) : _g4_s224,
    _g4_s226 = (748u + sizeof(_g4_t_v532)) > _g4_s225 ? (748u + sizeof(_g4_t_v532)) : _g4_s225,
    _g4_s227 = (764u + sizeof(_g4_t_v533)) > _g4_s226 ? (764u + sizeof(_g4_t_v533)) : _g4_s226,
    _g4_s228 = (780u + sizeof(_g4_t_v534)) > _g4_s227 ? (780u + sizeof(_g4_t_v534)) : _g4_s227,
    _g4_s229 = (784u + sizeof(_g4_t_v535)) > _g4_s228 ? (784u + sizeof(_g4_t_v535)) : _g4_s228,
    _g4_s230 = (788u + sizeof(_g4_t_v536)) > _g4_s229 ? (788u + sizeof(_g4_t_v536)) : _g4_s229,
    _g4_s231 = (796u + sizeof(_g4_t_v537)) > _g4_s230 ? (796u + sizeof(_g4_t_v537)) : _g4_s230,
    _g4_s232 = (812u + sizeof(_g4_t_v538)) > _g4_s231 ? (812u + sizeof(_g4_t_v538)) : _g4_s231,
    _g4_s233 = (832u + sizeof(_g4_t_v539)) > _g4_s232 ? (832u + sizeof(_g4_t_v539)) : _g4_s232,
    _g4_s234 = (852u + sizeof(_g4_t_v540)) > _g4_s233 ? (852u + sizeof(_g4_t_v540)) : _g4_s233,
    _g4_s235 = (872u + sizeof(_g4_t_v541)) > _g4_s234 ? (872u + sizeof(_g4_t_v541)) : _g4_s234,
    _g4_s236 = (892u + sizeof(_g4_t_v542)) > _g4_s235 ? (892u + sizeof(_g4_t_v542)) : _g4_s235,
    _g4_s237 = (912u + sizeof(_g4_t_v543)) > _g4_s236 ? (912u + sizeof(_g4_t_v543)) : _g4_s236,
    _g4_s238 = (932u + sizeof(_g4_t_v544)) > _g4_s237 ? (932u + sizeof(_g4_t_v544)) : _g4_s237,
    _g4_s239 = (936u + sizeof(_g4_t_v545)) > _g4_s238 ? (936u + sizeof(_g4_t_v545)) : _g4_s238,
    _g4_s240 = (940u + sizeof(_g4_t_v546)) > _g4_s239 ? (940u + sizeof(_g4_t_v546)) : _g4_s239,
    _g4_s241 = (944u + sizeof(_g4_t_v547)) > _g4_s240 ? (944u + sizeof(_g4_t_v547)) : _g4_s240,
    _g4_s242 = (948u + sizeof(_g4_t_v548)) > _g4_s241 ? (948u + sizeof(_g4_t_v548)) : _g4_s241,
    _g4_s243 = (952u + sizeof(_g4_t_v549)) > _g4_s242 ? (952u + sizeof(_g4_t_v549)) : _g4_s242,
    _g4_s244 = (956u + sizeof(_g4_t_v550)) > _g4_s243 ? (956u + sizeof(_g4_t_v550)) : _g4_s243,
    _g4_s245 = (984u + sizeof(_g4_t_v551)) > _g4_s244 ? (984u + sizeof(_g4_t_v551)) : _g4_s244,
    _g4_s246 = (1004u + sizeof(_g4_t_v552)) > _g4_s245 ? (1004u + sizeof(_g4_t_v552)) : _g4_s245,
    _g4_s247 = (1032u + sizeof(_g4_t_v553)) > _g4_s246 ? (1032u + sizeof(_g4_t_v553)) : _g4_s246,
    _g4_s248 = (1052u + sizeof(_g4_t_v554)) > _g4_s247 ? (1052u + sizeof(_g4_t_v554)) : _g4_s247,
    _g4_s249 = (1080u + sizeof(_g4_t_v555)) > _g4_s248 ? (1080u + sizeof(_g4_t_v555)) : _g4_s248,
    _g4_s250 = (1100u + sizeof(_g4_t_v556)) > _g4_s249 ? (1100u + sizeof(_g4_t_v556)) : _g4_s249,
    _g4_s251 = (1108u + sizeof(_g4_t_v557)) > _g4_s250 ? (1108u + sizeof(_g4_t_v557)) : _g4_s250,
    _g4_s252 = (1128u + sizeof(_g4_t_v558)) > _g4_s251 ? (1128u + sizeof(_g4_t_v558)) : _g4_s251,
    _g4_s253 = (1148u + sizeof(_g4_t_v559)) > _g4_s252 ? (1148u + sizeof(_g4_t_v559)) : _g4_s252,
    _g4_s254 = (1152u + sizeof(_g4_t_v560)) > _g4_s253 ? (1152u + sizeof(_g4_t_v560)) : _g4_s253,
    _g4_s255 = (1200u + sizeof(_g4_t_v561)) > _g4_s254 ? (1200u + sizeof(_g4_t_v561)) : _g4_s254,
    _g4_s256 = (1252u + sizeof(_g4_t_v562)) > _g4_s255 ? (1252u + sizeof(_g4_t_v562)) : _g4_s255,
    _g4_s257 = (1256u + sizeof(_g4_t_v563)) > _g4_s256 ? (1256u + sizeof(_g4_t_v563)) : _g4_s256,
    _g4_s258 = (1304u + sizeof(_g4_t_v564)) > _g4_s257 ? (1304u + sizeof(_g4_t_v564)) : _g4_s257,
    _g4_s259 = (1356u + sizeof(_g4_t_v565)) > _g4_s258 ? (1356u + sizeof(_g4_t_v565)) : _g4_s258,
    _g4_s260 = (1360u + sizeof(_g4_t_v566)) > _g4_s259 ? (1360u + sizeof(_g4_t_v566)) : _g4_s259,
    _g4_s261 = (1408u + sizeof(_g4_t_v567)) > _g4_s260 ? (1408u + sizeof(_g4_t_v567)) : _g4_s260,
    _g4_s262 = (1460u + sizeof(_g4_t_v568)) > _g4_s261 ? (1460u + sizeof(_g4_t_v568)) : _g4_s261,
    _g4_s263 = (1464u + sizeof(_g4_t_v569)) > _g4_s262 ? (1464u + sizeof(_g4_t_v569)) : _g4_s262,
    _g4_s264 = (1492u + sizeof(_g4_t_v570)) > _g4_s263 ? (1492u + sizeof(_g4_t_v570)) : _g4_s263,
    _g4_s265 = (1512u + sizeof(_g4_t_v571)) > _g4_s264 ? (1512u + sizeof(_g4_t_v571)) : _g4_s264,
    _g4_s266 = (1516u + sizeof(_g4_t_v572)) > _g4_s265 ? (1516u + sizeof(_g4_t_v572)) : _g4_s265,
    _g4_s267 = (1544u + sizeof(_g4_t_v573)) > _g4_s266 ? (1544u + sizeof(_g4_t_v573)) : _g4_s266,
    _g4_s268 = (1564u + sizeof(_g4_t_v574)) > _g4_s267 ? (1564u + sizeof(_g4_t_v574)) : _g4_s267,
    _g4_s269 = (1568u + sizeof(_g4_t_v575)) > _g4_s268 ? (1568u + sizeof(_g4_t_v575)) : _g4_s268,
    _g4_s270 = (1572u + sizeof(_g4_t_v576)) > _g4_s269 ? (1572u + sizeof(_g4_t_v576)) : _g4_s269,
    _g4_s271 = (1576u + sizeof(_g4_t_v577)) > _g4_s270 ? (1576u + sizeof(_g4_t_v577)) : _g4_s270,
    _g4_s272 = (1580u + sizeof(_g4_t_v578)) > _g4_s271 ? (1580u + sizeof(_g4_t_v578)) : _g4_s271,
    _g4_s273 = (1584u + sizeof(_g4_t_v579)) > _g4_s272 ? (1584u + sizeof(_g4_t_v579)) : _g4_s272,
    _g4_s274 = (1588u + sizeof(_g4_t_v580)) > _g4_s273 ? (1588u + sizeof(_g4_t_v580)) : _g4_s273,
    _g4_s275 = (1592u + sizeof(_g4_t_v581)) > _g4_s274 ? (1592u + sizeof(_g4_t_v581)) : _g4_s274,
    _g4_s276 = (1596u + sizeof(_g4_t_v582)) > _g4_s275 ? (1596u + sizeof(_g4_t_v582)) : _g4_s275,
    _g4_s277 = (1600u + sizeof(_g4_t_v583)) > _g4_s276 ? (1600u + sizeof(_g4_t_v583)) : _g4_s276,
    _g4_s278 = (1604u + sizeof(_g4_t_v584)) > _g4_s277 ? (1604u + sizeof(_g4_t_v584)) : _g4_s277,
    _g4_s279 = (1608u + sizeof(_g4_t_v585)) > _g4_s278 ? (1608u + sizeof(_g4_t_v585)) : _g4_s278,
    _g4_s280 = (1612u + sizeof(_g4_t_v586)) > _g4_s279 ? (1612u + sizeof(_g4_t_v586)) : _g4_s279,
    _g4_s281 = (1616u + sizeof(_g4_t_v587)) > _g4_s280 ? (1616u + sizeof(_g4_t_v587)) : _g4_s280,
    _g4_s282 = (1620u + sizeof(_g4_t_v588)) > _g4_s281 ? (1620u + sizeof(_g4_t_v588)) : _g4_s281,
    _g4_s283 = (1632u + sizeof(_g4_t_v589)) > _g4_s282 ? (1632u + sizeof(_g4_t_v589)) : _g4_s282
  };
  alignas(16) uint8_t _g4_sf[_g4_s283];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 0u);
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 0u);
  _g4_t_sc &sc = *reinterpret_cast<_g4_t_sc *>(_g4_sf + 0u);
  _g4_t_s_4 &s_4 = *reinterpret_cast<_g4_t_s_4 *>(_g4_sf + 4u);
  _g4_t_s_4a &s_4a = *reinterpret_cast<_g4_t_s_4a *>(_g4_sf + 4u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 8u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 16u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 16u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 20u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 20u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 20u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 20u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 20u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 20u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 20u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 20u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 24u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 28u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 28u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 28u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 28u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 28u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 28u);
  _g4_t_v331 &v331 = *reinterpret_cast<_g4_t_v331 *>(_g4_sf + 32u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 32u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 32u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 32u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 32u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 32u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 32u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 36u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 36u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 36u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 36u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 36u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 40u);
  _g4_t_v344 &v344 = *reinterpret_cast<_g4_t_v344 *>(_g4_sf + 40u);
  _g4_t_v345 &v345 = *reinterpret_cast<_g4_t_v345 *>(_g4_sf + 44u);
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 44u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 44u);
  _g4_t_v348 &v348 = *reinterpret_cast<_g4_t_v348 *>(_g4_sf + 44u);
  _g4_t_v349 &v349 = *reinterpret_cast<_g4_t_v349 *>(_g4_sf + 44u);
  _g4_t_v350 &v350 = *reinterpret_cast<_g4_t_v350 *>(_g4_sf + 44u);
  _g4_t_v351 &v351 = *reinterpret_cast<_g4_t_v351 *>(_g4_sf + 44u);
  _g4_t_v352 &v352 = *reinterpret_cast<_g4_t_v352 *>(_g4_sf + 48u);
  _g4_t_v353 &v353 = *reinterpret_cast<_g4_t_v353 *>(_g4_sf + 48u);
  _g4_t_v354 &v354 = *reinterpret_cast<_g4_t_v354 *>(_g4_sf + 48u);
  _g4_t_v355 &v355 = *reinterpret_cast<_g4_t_v355 *>(_g4_sf + 48u);
  _g4_t_v356 &v356 = *reinterpret_cast<_g4_t_v356 *>(_g4_sf + 48u);
  _g4_t_v357 &v357 = *reinterpret_cast<_g4_t_v357 *>(_g4_sf + 48u);
  _g4_t_v358 &v358 = *reinterpret_cast<_g4_t_v358 *>(_g4_sf + 52u);
  _g4_t_v359 &v359 = *reinterpret_cast<_g4_t_v359 *>(_g4_sf + 52u);
  _g4_t_v360 &v360 = *reinterpret_cast<_g4_t_v360 *>(_g4_sf + 52u);
  _g4_t_v361 &v361 = *reinterpret_cast<_g4_t_v361 *>(_g4_sf + 52u);
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 56u);
  _g4_t_formata &formata = *reinterpret_cast<_g4_t_formata *>(_g4_sf + 56u);
  _g4_t_formatb &formatb = *reinterpret_cast<_g4_t_formatb *>(_g4_sf + 56u);
  _g4_t_formatc &formatc = *reinterpret_cast<_g4_t_formatc *>(_g4_sf + 56u);
  _g4_t_v366 &v366 = *reinterpret_cast<_g4_t_v366 *>(_g4_sf + 60u);
  _g4_t_v367 &v367 = *reinterpret_cast<_g4_t_v367 *>(_g4_sf + 60u);
  _g4_t_v368 &v368 = *reinterpret_cast<_g4_t_v368 *>(_g4_sf + 60u);
  _g4_t_v369 &v369 = *reinterpret_cast<_g4_t_v369 *>(_g4_sf + 64u);
  _g4_t_v370 &v370 = *reinterpret_cast<_g4_t_v370 *>(_g4_sf + 64u);
  _g4_t_v371 &v371 = *reinterpret_cast<_g4_t_v371 *>(_g4_sf + 64u);
  _g4_t_v372 &v372 = *reinterpret_cast<_g4_t_v372 *>(_g4_sf + 68u);
  _g4_t_v373 &v373 = *reinterpret_cast<_g4_t_v373 *>(_g4_sf + 72u);
  _g4_t_v374 &v374 = *reinterpret_cast<_g4_t_v374 *>(_g4_sf + 72u);
  _g4_t_v375 &v375 = *reinterpret_cast<_g4_t_v375 *>(_g4_sf + 76u);
  _g4_t_v376 &v376 = *reinterpret_cast<_g4_t_v376 *>(_g4_sf + 80u);
  _g4_t_v377 &v377 = *reinterpret_cast<_g4_t_v377 *>(_g4_sf + 104u);
  _g4_t_v378 &v378 = *reinterpret_cast<_g4_t_v378 *>(_g4_sf + 117u);
  _g4_t_v379 &v379 = *reinterpret_cast<_g4_t_v379 *>(_g4_sf + 118u);
  _g4_t_v380 &v380 = *reinterpret_cast<_g4_t_v380 *>(_g4_sf + 119u);
  _g4_t_v381 &v381 = *reinterpret_cast<_g4_t_v381 *>(_g4_sf + 120u);
  _g4_t_v382 &v382 = *reinterpret_cast<_g4_t_v382 *>(_g4_sf + 124u);
  _g4_t_v383 &v383 = *reinterpret_cast<_g4_t_v383 *>(_g4_sf + 125u);
  _g4_t_v384 &v384 = *reinterpret_cast<_g4_t_v384 *>(_g4_sf + 126u);
  _g4_t_v385 &v385 = *reinterpret_cast<_g4_t_v385 *>(_g4_sf + 127u);
  _g4_t_v386 &v386 = *reinterpret_cast<_g4_t_v386 *>(_g4_sf + 128u);
  _g4_t_v387 &v387 = *reinterpret_cast<_g4_t_v387 *>(_g4_sf + 129u);
  _g4_t_v388 &v388 = *reinterpret_cast<_g4_t_v388 *>(_g4_sf + 130u);
  _g4_t_v389 &v389 = *reinterpret_cast<_g4_t_v389 *>(_g4_sf + 132u);
  _g4_t_v390 &v390 = *reinterpret_cast<_g4_t_v390 *>(_g4_sf + 136u);
  _g4_t_v391 &v391 = *reinterpret_cast<_g4_t_v391 *>(_g4_sf + 140u);
  _g4_t_v392 &v392 = *reinterpret_cast<_g4_t_v392 *>(_g4_sf + 144u);
  _g4_t_v393 &v393 = *reinterpret_cast<_g4_t_v393 *>(_g4_sf + 148u);
  _g4_t_v394 &v394 = *reinterpret_cast<_g4_t_v394 *>(_g4_sf + 152u);
  _g4_t_v395 &v395 = *reinterpret_cast<_g4_t_v395 *>(_g4_sf + 156u);
  _g4_t_v396 &v396 = *reinterpret_cast<_g4_t_v396 *>(_g4_sf + 160u);
  _g4_t_v397 &v397 = *reinterpret_cast<_g4_t_v397 *>(_g4_sf + 164u);
  _g4_t_v398 &v398 = *reinterpret_cast<_g4_t_v398 *>(_g4_sf + 168u);
  _g4_t_v399 &v399 = *reinterpret_cast<_g4_t_v399 *>(_g4_sf + 172u);
  _g4_t_v400 &v400 = *reinterpret_cast<_g4_t_v400 *>(_g4_sf + 176u);
  _g4_t_v401 &v401 = *reinterpret_cast<_g4_t_v401 *>(_g4_sf + 180u);
  _g4_t_v402 &v402 = *reinterpret_cast<_g4_t_v402 *>(_g4_sf + 184u);
  _g4_t_v403 &v403 = *reinterpret_cast<_g4_t_v403 *>(_g4_sf + 188u);
  _g4_t_v404 &v404 = *reinterpret_cast<_g4_t_v404 *>(_g4_sf + 216u);
  _g4_t_v405 &v405 = *reinterpret_cast<_g4_t_v405 *>(_g4_sf + 220u);
  _g4_t_v406 &v406 = *reinterpret_cast<_g4_t_v406 *>(_g4_sf + 224u);
  _g4_t_v407 &v407 = *reinterpret_cast<_g4_t_v407 *>(_g4_sf + 228u);
  _g4_t_v408 &v408 = *reinterpret_cast<_g4_t_v408 *>(_g4_sf + 232u);
  _g4_t_v409 &v409 = *reinterpret_cast<_g4_t_v409 *>(_g4_sf + 236u);
  _g4_t_v410 &v410 = *reinterpret_cast<_g4_t_v410 *>(_g4_sf + 240u);
  _g4_t_v411 &v411 = *reinterpret_cast<_g4_t_v411 *>(_g4_sf + 244u);
  _g4_t_v412 &v412 = *reinterpret_cast<_g4_t_v412 *>(_g4_sf + 248u);
  _g4_t_v413 &v413 = *reinterpret_cast<_g4_t_v413 *>(_g4_sf + 252u);
  _g4_t_v414 &v414 = *reinterpret_cast<_g4_t_v414 *>(_g4_sf + 256u);
  _g4_t_v415 &v415 = *reinterpret_cast<_g4_t_v415 *>(_g4_sf + 260u);
  _g4_t_v416 &v416 = *reinterpret_cast<_g4_t_v416 *>(_g4_sf + 264u);
  _g4_t_v417 &v417 = *reinterpret_cast<_g4_t_v417 *>(_g4_sf + 268u);
  _g4_t_v418 &v418 = *reinterpret_cast<_g4_t_v418 *>(_g4_sf + 272u);
  _g4_t_v419 &v419 = *reinterpret_cast<_g4_t_v419 *>(_g4_sf + 276u);
  _g4_t_v420 &v420 = *reinterpret_cast<_g4_t_v420 *>(_g4_sf + 280u);
  _g4_t_v421 &v421 = *reinterpret_cast<_g4_t_v421 *>(_g4_sf + 284u);
  _g4_t_v422 &v422 = *reinterpret_cast<_g4_t_v422 *>(_g4_sf + 288u);
  _g4_t_v423 &v423 = *reinterpret_cast<_g4_t_v423 *>(_g4_sf + 292u);
  _g4_t_v424 &v424 = *reinterpret_cast<_g4_t_v424 *>(_g4_sf + 296u);
  _g4_t_v425 &v425 = *reinterpret_cast<_g4_t_v425 *>(_g4_sf + 300u);
  _g4_t_v426 &v426 = *reinterpret_cast<_g4_t_v426 *>(_g4_sf + 304u);
  _g4_t_v427 &v427 = *reinterpret_cast<_g4_t_v427 *>(_g4_sf + 308u);
  _g4_t_v428 &v428 = *reinterpret_cast<_g4_t_v428 *>(_g4_sf + 312u);
  _g4_t_v429 &v429 = *reinterpret_cast<_g4_t_v429 *>(_g4_sf + 316u);
  _g4_t_v430 &v430 = *reinterpret_cast<_g4_t_v430 *>(_g4_sf + 320u);
  _g4_t_v431 &v431 = *reinterpret_cast<_g4_t_v431 *>(_g4_sf + 324u);
  _g4_t_v432 &v432 = *reinterpret_cast<_g4_t_v432 *>(_g4_sf + 328u);
  _g4_t_v433 &v433 = *reinterpret_cast<_g4_t_v433 *>(_g4_sf + 332u);
  _g4_t_v434 &v434 = *reinterpret_cast<_g4_t_v434 *>(_g4_sf + 336u);
  _g4_t_v435 &v435 = *reinterpret_cast<_g4_t_v435 *>(_g4_sf + 340u);
  _g4_t_v436 &v436 = *reinterpret_cast<_g4_t_v436 *>(_g4_sf + 344u);
  _g4_t_v437 &v437 = *reinterpret_cast<_g4_t_v437 *>(_g4_sf + 348u);
  _g4_t_v438 &v438 = *reinterpret_cast<_g4_t_v438 *>(_g4_sf + 352u);
  _g4_t_v439 &v439 = *reinterpret_cast<_g4_t_v439 *>(_g4_sf + 356u);
  _g4_t_v440 &v440 = *reinterpret_cast<_g4_t_v440 *>(_g4_sf + 360u);
  _g4_t_v441 &v441 = *reinterpret_cast<_g4_t_v441 *>(_g4_sf + 364u);
  _g4_t_v442 &v442 = *reinterpret_cast<_g4_t_v442 *>(_g4_sf + 368u);
  _g4_t_v443 &v443 = *reinterpret_cast<_g4_t_v443 *>(_g4_sf + 372u);
  _g4_t_v444 &v444 = *reinterpret_cast<_g4_t_v444 *>(_g4_sf + 376u);
  _g4_t_v445 &v445 = *reinterpret_cast<_g4_t_v445 *>(_g4_sf + 380u);
  _g4_t_v446 &v446 = *reinterpret_cast<_g4_t_v446 *>(_g4_sf + 384u);
  _g4_t_v447 &v447 = *reinterpret_cast<_g4_t_v447 *>(_g4_sf + 388u);
  _g4_t_v448 &v448 = *reinterpret_cast<_g4_t_v448 *>(_g4_sf + 392u);
  _g4_t_v449 &v449 = *reinterpret_cast<_g4_t_v449 *>(_g4_sf + 396u);
  _g4_t_v450 &v450 = *reinterpret_cast<_g4_t_v450 *>(_g4_sf + 400u);
  _g4_t_v451 &v451 = *reinterpret_cast<_g4_t_v451 *>(_g4_sf + 404u);
  _g4_t_v452 &v452 = *reinterpret_cast<_g4_t_v452 *>(_g4_sf + 408u);
  _g4_t_v453 &v453 = *reinterpret_cast<_g4_t_v453 *>(_g4_sf + 412u);
  _g4_t_v454 &v454 = *reinterpret_cast<_g4_t_v454 *>(_g4_sf + 416u);
  _g4_t_v455 &v455 = *reinterpret_cast<_g4_t_v455 *>(_g4_sf + 420u);
  _g4_t_v456 &v456 = *reinterpret_cast<_g4_t_v456 *>(_g4_sf + 424u);
  _g4_t_v457 &v457 = *reinterpret_cast<_g4_t_v457 *>(_g4_sf + 428u);
  _g4_t_v458 &v458 = *reinterpret_cast<_g4_t_v458 *>(_g4_sf + 432u);
  _g4_t_v459 &v459 = *reinterpret_cast<_g4_t_v459 *>(_g4_sf + 436u);
  _g4_t_v460 &v460 = *reinterpret_cast<_g4_t_v460 *>(_g4_sf + 440u);
  _g4_t_v461 &v461 = *reinterpret_cast<_g4_t_v461 *>(_g4_sf + 444u);
  _g4_t_v462 &v462 = *reinterpret_cast<_g4_t_v462 *>(_g4_sf + 448u);
  _g4_t_v463 &v463 = *reinterpret_cast<_g4_t_v463 *>(_g4_sf + 452u);
  _g4_t_v464 &v464 = *reinterpret_cast<_g4_t_v464 *>(_g4_sf + 456u);
  _g4_t_v465 &v465 = *reinterpret_cast<_g4_t_v465 *>(_g4_sf + 460u);
  _g4_t_v466 &v466 = *reinterpret_cast<_g4_t_v466 *>(_g4_sf + 464u);
  _g4_t_v467 &v467 = *reinterpret_cast<_g4_t_v467 *>(_g4_sf + 468u);
  _g4_t_v468 &v468 = *reinterpret_cast<_g4_t_v468 *>(_g4_sf + 472u);
  _g4_t_v469 &v469 = *reinterpret_cast<_g4_t_v469 *>(_g4_sf + 476u);
  _g4_t_v470 &v470 = *reinterpret_cast<_g4_t_v470 *>(_g4_sf + 480u);
  _g4_t_v471 &v471 = *reinterpret_cast<_g4_t_v471 *>(_g4_sf + 484u);
  _g4_t_v472 &v472 = *reinterpret_cast<_g4_t_v472 *>(_g4_sf + 488u);
  _g4_t_v473 &v473 = *reinterpret_cast<_g4_t_v473 *>(_g4_sf + 492u);
  _g4_t_v474 &v474 = *reinterpret_cast<_g4_t_v474 *>(_g4_sf + 496u);
  _g4_t_v475 &v475 = *reinterpret_cast<_g4_t_v475 *>(_g4_sf + 500u);
  _g4_t_v476 &v476 = *reinterpret_cast<_g4_t_v476 *>(_g4_sf + 504u);
  _g4_t_v477 &v477 = *reinterpret_cast<_g4_t_v477 *>(_g4_sf + 508u);
  _g4_t_v478 &v478 = *reinterpret_cast<_g4_t_v478 *>(_g4_sf + 512u);
  _g4_t_v479 &v479 = *reinterpret_cast<_g4_t_v479 *>(_g4_sf + 516u);
  _g4_t_v480 &v480 = *reinterpret_cast<_g4_t_v480 *>(_g4_sf + 520u);
  _g4_t_v481 &v481 = *reinterpret_cast<_g4_t_v481 *>(_g4_sf + 524u);
  _g4_t_v482 &v482 = *reinterpret_cast<_g4_t_v482 *>(_g4_sf + 528u);
  _g4_t_v483 &v483 = *reinterpret_cast<_g4_t_v483 *>(_g4_sf + 532u);
  _g4_t_v484 &v484 = *reinterpret_cast<_g4_t_v484 *>(_g4_sf + 536u);
  _g4_t_v485 &v485 = *reinterpret_cast<_g4_t_v485 *>(_g4_sf + 540u);
  _g4_t_v486 &v486 = *reinterpret_cast<_g4_t_v486 *>(_g4_sf + 544u);
  _g4_t_v487 &v487 = *reinterpret_cast<_g4_t_v487 *>(_g4_sf + 548u);
  _g4_t_v488 &v488 = *reinterpret_cast<_g4_t_v488 *>(_g4_sf + 552u);
  _g4_t_v489 &v489 = *reinterpret_cast<_g4_t_v489 *>(_g4_sf + 556u);
  _g4_t_v490 &v490 = *reinterpret_cast<_g4_t_v490 *>(_g4_sf + 560u);
  _g4_t_v491 &v491 = *reinterpret_cast<_g4_t_v491 *>(_g4_sf + 564u);
  _g4_t_v492 &v492 = *reinterpret_cast<_g4_t_v492 *>(_g4_sf + 568u);
  _g4_t_v493 &v493 = *reinterpret_cast<_g4_t_v493 *>(_g4_sf + 572u);
  _g4_t_v494 &v494 = *reinterpret_cast<_g4_t_v494 *>(_g4_sf + 576u);
  _g4_t_v495 &v495 = *reinterpret_cast<_g4_t_v495 *>(_g4_sf + 580u);
  _g4_t_v496 &v496 = *reinterpret_cast<_g4_t_v496 *>(_g4_sf + 584u);
  _g4_t_v497 &v497 = *reinterpret_cast<_g4_t_v497 *>(_g4_sf + 588u);
  _g4_t_v498 &v498 = *reinterpret_cast<_g4_t_v498 *>(_g4_sf + 592u);
  _g4_t_v499 &v499 = *reinterpret_cast<_g4_t_v499 *>(_g4_sf + 596u);
  _g4_t_v500 &v500 = *reinterpret_cast<_g4_t_v500 *>(_g4_sf + 600u);
  _g4_t_v501 &v501 = *reinterpret_cast<_g4_t_v501 *>(_g4_sf + 604u);
  _g4_t_v502 &v502 = *reinterpret_cast<_g4_t_v502 *>(_g4_sf + 608u);
  _g4_t_v503 &v503 = *reinterpret_cast<_g4_t_v503 *>(_g4_sf + 612u);
  _g4_t_v504 &v504 = *reinterpret_cast<_g4_t_v504 *>(_g4_sf + 616u);
  _g4_t_v505 &v505 = *reinterpret_cast<_g4_t_v505 *>(_g4_sf + 620u);
  _g4_t_v506 &v506 = *reinterpret_cast<_g4_t_v506 *>(_g4_sf + 624u);
  _g4_t_v507 &v507 = *reinterpret_cast<_g4_t_v507 *>(_g4_sf + 628u);
  _g4_t_v508 &v508 = *reinterpret_cast<_g4_t_v508 *>(_g4_sf + 632u);
  _g4_t_v509 &v509 = *reinterpret_cast<_g4_t_v509 *>(_g4_sf + 636u);
  _g4_t_v510 &v510 = *reinterpret_cast<_g4_t_v510 *>(_g4_sf + 640u);
  _g4_t_v511 &v511 = *reinterpret_cast<_g4_t_v511 *>(_g4_sf + 644u);
  _g4_t_v512 &v512 = *reinterpret_cast<_g4_t_v512 *>(_g4_sf + 648u);
  _g4_t_v513 &v513 = *reinterpret_cast<_g4_t_v513 *>(_g4_sf + 652u);
  _g4_t_v514 &v514 = *reinterpret_cast<_g4_t_v514 *>(_g4_sf + 656u);
  _g4_t_v515 &v515 = *reinterpret_cast<_g4_t_v515 *>(_g4_sf + 660u);
  _g4_t_v516 &v516 = *reinterpret_cast<_g4_t_v516 *>(_g4_sf + 664u);
  _g4_t_v517 &v517 = *reinterpret_cast<_g4_t_v517 *>(_g4_sf + 668u);
  _g4_t_v518 &v518 = *reinterpret_cast<_g4_t_v518 *>(_g4_sf + 672u);
  _g4_t_v519 &v519 = *reinterpret_cast<_g4_t_v519 *>(_g4_sf + 676u);
  _g4_t_v520 &v520 = *reinterpret_cast<_g4_t_v520 *>(_g4_sf + 680u);
  _g4_t_v521 &v521 = *reinterpret_cast<_g4_t_v521 *>(_g4_sf + 684u);
  _g4_t_v522 &v522 = *reinterpret_cast<_g4_t_v522 *>(_g4_sf + 688u);
  _g4_t_v523 &v523 = *reinterpret_cast<_g4_t_v523 *>(_g4_sf + 692u);
  _g4_t_v524 &v524 = *reinterpret_cast<_g4_t_v524 *>(_g4_sf + 696u);
  _g4_t_v525 &v525 = *reinterpret_cast<_g4_t_v525 *>(_g4_sf + 700u);
  _g4_t_v526 &v526 = *reinterpret_cast<_g4_t_v526 *>(_g4_sf + 704u);
  _g4_t_v527 &v527 = *reinterpret_cast<_g4_t_v527 *>(_g4_sf + 708u);
  _g4_t_v528 &v528 = *reinterpret_cast<_g4_t_v528 *>(_g4_sf + 712u);
  _g4_t_v529 &v529 = *reinterpret_cast<_g4_t_v529 *>(_g4_sf + 716u);
  _g4_t_v530 &v530 = *reinterpret_cast<_g4_t_v530 *>(_g4_sf + 732u);
  _g4_t_v531 &v531 = *reinterpret_cast<_g4_t_v531 *>(_g4_sf + 736u);
  _g4_t_v532 &v532 = *reinterpret_cast<_g4_t_v532 *>(_g4_sf + 748u);
  _g4_t_v533 &v533 = *reinterpret_cast<_g4_t_v533 *>(_g4_sf + 764u);
  _g4_t_v534 &v534 = *reinterpret_cast<_g4_t_v534 *>(_g4_sf + 780u);
  _g4_t_v535 &v535 = *reinterpret_cast<_g4_t_v535 *>(_g4_sf + 784u);
  _g4_t_v536 &v536 = *reinterpret_cast<_g4_t_v536 *>(_g4_sf + 788u);
  _g4_t_v537 &v537 = *reinterpret_cast<_g4_t_v537 *>(_g4_sf + 796u);
  _g4_t_v538 &v538 = *reinterpret_cast<_g4_t_v538 *>(_g4_sf + 812u);
  _g4_t_v539 &v539 = *reinterpret_cast<_g4_t_v539 *>(_g4_sf + 832u);
  _g4_t_v540 &v540 = *reinterpret_cast<_g4_t_v540 *>(_g4_sf + 852u);
  _g4_t_v541 &v541 = *reinterpret_cast<_g4_t_v541 *>(_g4_sf + 872u);
  _g4_t_v542 &v542 = *reinterpret_cast<_g4_t_v542 *>(_g4_sf + 892u);
  _g4_t_v543 &v543 = *reinterpret_cast<_g4_t_v543 *>(_g4_sf + 912u);
  _g4_t_v544 &v544 = *reinterpret_cast<_g4_t_v544 *>(_g4_sf + 932u);
  _g4_t_v545 &v545 = *reinterpret_cast<_g4_t_v545 *>(_g4_sf + 936u);
  _g4_t_v546 &v546 = *reinterpret_cast<_g4_t_v546 *>(_g4_sf + 940u);
  _g4_t_v547 &v547 = *reinterpret_cast<_g4_t_v547 *>(_g4_sf + 944u);
  _g4_t_v548 &v548 = *reinterpret_cast<_g4_t_v548 *>(_g4_sf + 948u);
  _g4_t_v549 &v549 = *reinterpret_cast<_g4_t_v549 *>(_g4_sf + 952u);
  _g4_t_v550 &v550 = *reinterpret_cast<_g4_t_v550 *>(_g4_sf + 956u);
  _g4_t_v551 &v551 = *reinterpret_cast<_g4_t_v551 *>(_g4_sf + 984u);
  _g4_t_v552 &v552 = *reinterpret_cast<_g4_t_v552 *>(_g4_sf + 1004u);
  _g4_t_v553 &v553 = *reinterpret_cast<_g4_t_v553 *>(_g4_sf + 1032u);
  _g4_t_v554 &v554 = *reinterpret_cast<_g4_t_v554 *>(_g4_sf + 1052u);
  _g4_t_v555 &v555 = *reinterpret_cast<_g4_t_v555 *>(_g4_sf + 1080u);
  _g4_t_v556 &v556 = *reinterpret_cast<_g4_t_v556 *>(_g4_sf + 1100u);
  _g4_t_v557 &v557 = *reinterpret_cast<_g4_t_v557 *>(_g4_sf + 1108u);
  _g4_t_v558 &v558 = *reinterpret_cast<_g4_t_v558 *>(_g4_sf + 1128u);
  _g4_t_v559 &v559 = *reinterpret_cast<_g4_t_v559 *>(_g4_sf + 1148u);
  _g4_t_v560 &v560 = *reinterpret_cast<_g4_t_v560 *>(_g4_sf + 1152u);
  _g4_t_v561 &v561 = *reinterpret_cast<_g4_t_v561 *>(_g4_sf + 1200u);
  _g4_t_v562 &v562 = *reinterpret_cast<_g4_t_v562 *>(_g4_sf + 1252u);
  _g4_t_v563 &v563 = *reinterpret_cast<_g4_t_v563 *>(_g4_sf + 1256u);
  _g4_t_v564 &v564 = *reinterpret_cast<_g4_t_v564 *>(_g4_sf + 1304u);
  _g4_t_v565 &v565 = *reinterpret_cast<_g4_t_v565 *>(_g4_sf + 1356u);
  _g4_t_v566 &v566 = *reinterpret_cast<_g4_t_v566 *>(_g4_sf + 1360u);
  _g4_t_v567 &v567 = *reinterpret_cast<_g4_t_v567 *>(_g4_sf + 1408u);
  _g4_t_v568 &v568 = *reinterpret_cast<_g4_t_v568 *>(_g4_sf + 1460u);
  _g4_t_v569 &v569 = *reinterpret_cast<_g4_t_v569 *>(_g4_sf + 1464u);
  _g4_t_v570 &v570 = *reinterpret_cast<_g4_t_v570 *>(_g4_sf + 1492u);
  _g4_t_v571 &v571 = *reinterpret_cast<_g4_t_v571 *>(_g4_sf + 1512u);
  _g4_t_v572 &v572 = *reinterpret_cast<_g4_t_v572 *>(_g4_sf + 1516u);
  _g4_t_v573 &v573 = *reinterpret_cast<_g4_t_v573 *>(_g4_sf + 1544u);
  _g4_t_v574 &v574 = *reinterpret_cast<_g4_t_v574 *>(_g4_sf + 1564u);
  _g4_t_v575 &v575 = *reinterpret_cast<_g4_t_v575 *>(_g4_sf + 1568u);
  _g4_t_v576 &v576 = *reinterpret_cast<_g4_t_v576 *>(_g4_sf + 1572u);
  _g4_t_v577 &v577 = *reinterpret_cast<_g4_t_v577 *>(_g4_sf + 1576u);
  _g4_t_v578 &v578 = *reinterpret_cast<_g4_t_v578 *>(_g4_sf + 1580u);
  _g4_t_v579 &v579 = *reinterpret_cast<_g4_t_v579 *>(_g4_sf + 1584u);
  _g4_t_v580 &v580 = *reinterpret_cast<_g4_t_v580 *>(_g4_sf + 1588u);
  _g4_t_v581 &v581 = *reinterpret_cast<_g4_t_v581 *>(_g4_sf + 1592u);
  _g4_t_v582 &v582 = *reinterpret_cast<_g4_t_v582 *>(_g4_sf + 1596u);
  _g4_t_v583 &v583 = *reinterpret_cast<_g4_t_v583 *>(_g4_sf + 1600u);
  _g4_t_v584 &v584 = *reinterpret_cast<_g4_t_v584 *>(_g4_sf + 1604u);
  _g4_t_v585 &v585 = *reinterpret_cast<_g4_t_v585 *>(_g4_sf + 1608u);
  _g4_t_v586 &v586 = *reinterpret_cast<_g4_t_v586 *>(_g4_sf + 1612u);
  _g4_t_v587 &v587 = *reinterpret_cast<_g4_t_v587 *>(_g4_sf + 1616u);
  _g4_t_v588 &v588 = *reinterpret_cast<_g4_t_v588 *>(_g4_sf + 1620u);
  _g4_t_v589 &v589 = *reinterpret_cast<_g4_t_v589 *>(_g4_sf + 1632u);

  v1 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v1 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v1);
    dword_20D2420 = (int)(uintptr_t)(v1);
  }
  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(v1);
  v3 = (int *)CurrentActiveRequestState;
  if ( CurrentActiveRequestState != 0 )
  {
    switch ( *(uint32_t *)(CurrentActiveRequestState + 8) )
    {
      case 2:
        v8 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v8 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v8);
          dword_20D2420 = (int)(uintptr_t)(v8);
        }
        if ( sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v8, 4, 2) )
        {
          if ( *(uint32_t *)(*a1 - 12) == 0 )
          {
            v48 = v413;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v413), "Facebook Android SNS ERROR: The response is null. \n", (int)(uintptr_t)(&v382));
            goto LABEL_113;
          }
          Json::Reader::Construct((Json::Reader::Self *)v589);
          Json::Value::Construct((int)(uintptr_t)(v574), nullptr);
          if ( (uint8_t)Json::Reader::parse(v589, (int)(uintptr_t)(a1), (Json::Value::Self *)v574, 1) == 0 )
          {
            v313 = (int *)&v383;
            v7 = (int *)&v414;
            goto LABEL_18;
          }
          if ( !Json::Value::isMember((Json::Value::Self *)v574, "id")
            || (v116 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v574, "id"), Json::Value::type(v116) != 4) )
          {
            v313 = (int *)&v384;
            v7 = (int *)&v416;
            goto LABEL_18;
          }
          v112 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v574, "id"));
          v113 = (Json::Value::Self *)&v415;
          goto LABEL_279;
        }
        return;
      case 3:
        v9 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v9 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v9);
          dword_20D2420 = (int)(uintptr_t)(v9);
        }
        if ( !sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v9, 4, 3) )
          return;
        v326 = (Json::Value::Self *)v3[16];
        if ( v326 != (Json::Value::Self *)v3[17] )
        {
          v339 = (Json::Value::Self *)v3;
          v10 = (uint32_t *)v3[16];
          v11 = (uint32_t *)v3[17];
          do
          {
            v12 = (uint32_t *)(*v10 - 12);
            if ( v12 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v10 - 4), 0xFFFFFFFF) <= 0 )
              g4_std::string::Rep::M_destroy(v12);
            ++v10;
          }
          while ( v11 != v10 );
          v3 = (int *)v339;
        }
        v3[17] = (int)(uintptr_t)(v326);
        v534 = nullptr;
        v535 = nullptr;
        v536 = nullptr;
        if ( *(uint32_t *)(*a1 - 12) == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v426), "Facebook Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v389) + 1);
          setErrorForRequest(v3, (int)(uintptr_t)(&v426));
          g4_std::string::Destroy(&v426);
LABEL_36:
          v13 = v535;
          v14 = (char *)v534;
          if ( v535 != v534 )
          {
            do
            {
              v15 = (uint32_t *)(*(uint32_t *)v14 - 12);
              if ( v15 != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v14 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v15);
              }
              v14 += 4;
            }
            while ( v13 != v14 );
            v14 = (char *)v534;
          }
          if ( v14 != nullptr )
            opDelete(v14);
          return;
        }
        Json::Reader::Construct((Json::Reader::Self *)v589);
        Json::Value::Construct((int)(uintptr_t)(v537), nullptr);
        if ( (uint8_t)Json::Reader::parse(v589, (int)(uintptr_t)(a1), (Json::Value::Self *)v537, 1) == 0 )
        {
          if ( g4_std_compat::string_find(a1, "User declined", 0, 13) == -1 )
          {
            if ( sub_1937E60((int)(uintptr_t)(a1), "User approved", 0) != -1 )
            {
              g4_std::string::construct_from_cstr((int)(uintptr_t)(v574), "Facebook Android SNS: User doesnt have any ingame friends \n", (int)(uintptr_t)(&v389) + 3);
              g4_std::string::assign_str(v3 + 15, v574);
              v3[1] = 2;
              g4_std::string::Destroy(v574);
              goto LABEL_184;
            }
            v72 = v427;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v427), "Facebook Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v390));
          }
          else
          {
            v72 = v574;
            g4_std::string::construct_from_cstr(
              (int)(uintptr_t)(v574),
              "Facebook Android SNS ERROR: Permission user_friends deleted by user error \n",
              (int)(uintptr_t)(&v389) + 2);
          }
          setErrorForRequest(v3, (int)(uintptr_t)(v72));
          g4_std::string::Destroy(v72);
LABEL_184:
          Json::Value::Destroy((Json::Value::Self *)v537);
          sub_545800((int)(uintptr_t)(v589));
          goto LABEL_36;
        }
        Json::Value::Construct((int)(uintptr_t)(v540), nullptr);
        if ( Json::Value::type((Json::Value::Self *)v537) == 6 )
        {
          Json::Value::opAssign((Json::Value::Self *)v540, (const Json::Value::Self *)v537);
        }
        else
        {
          if ( !Json::Value::isMember((Json::Value::Self *)v537, "data")
            || (v198 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v537, "data"), Json::Value::type(v198) != 6) )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v429), "Facebook Android SNS ERROR: No data JSON array received.\n", (int)(uintptr_t)(&v390) + 2);
            setErrorForRequest(v3, (int)(uintptr_t)(&v429));
            g4_std::string::Destroy(&v429);
LABEL_229:
            Json::Value::Destroy((Json::Value::Self *)v540);
            goto LABEL_184;
          }
          v199 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v537, "data");
          Json::Value::opAssign((Json::Value::Self *)v540, v199);
          if ( Json::Value::size((Json::Value::Self *)v540) == 0 )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v428), "user_friends", (int)(uintptr_t)(&v390) + 1);
            facebookAndroidGLSocialLib_refreshPermissions(&v428);
            g4_std::string::Destroy(&v428);
            goto LABEL_229;
          }
        }
        v336 = (char *)Json::Value::size((Json::Value::Self *)v540);
        if ( v336 != nullptr )
        {
          for ( i = 0; (char *)i != v336; ++i )
          {
            v173 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, i);
            Json::Value::Construct((Json::Value::Self *)&v544, v173);
            if ( Json::Value::type((Json::Value::Self *)&v544) == 7 )
            {
              if ( Json::Value::isMember((Json::Value::Self *)&v544, "id") )
              {
                v195 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "id");
                if ( Json::Value::type(v195) == 4 )
                {
                  v196 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v544, "id"));
                  Json::Value::asString((Json::Value::Self *)v430, v196);
                  g4_std::string::Destroy(v430);
                  v197 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v544, "id"));
                  Json::Value::asString((Json::Value::Self *)v431, v197);
                  v179 = (int *)v431;
                  if ( v535 == v536 )
                  {
                    g4_std::vector_string_86c307::M_insert_aux((int *)&v534, v535, (int)(uintptr_t)(v431));
                    v179 = (int *)v431;
                  }
                  else
                  {
                    if ( v535 != nullptr )
                    {
                      g4_std::string::construct_copy(v535, v431);
                      v179 = (int *)v431;
                    }
                    v535 += 4;
                  }
LABEL_371:
                  g4_std::string::Destroy(v179);
                  goto LABEL_359;
                }
              }
              if ( Json::Value::isMember((Json::Value::Self *)&v544, (char *)&off_1B23754) )
              {
                v174 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, (char *)&off_1B23754);
                Json::Value::type(v174);
                v175 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, (char *)&off_1B23754);
                if ( Json::Value::type(v175) == 1 )
                {
                  v245 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, (char *)&off_1B23754);
                  v178 = Json::Value::asInt(v245);
                  goto LABEL_366;
                }
                v176 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, (char *)&off_1B23754);
                if ( Json::Value::type(v176) == 3 )
                {
                  v177 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, (char *)&off_1B23754);
                  v178 = (uint64_t)(double)Json::Value::asDouble(v177);
LABEL_366:
                  sprintf(v574, "%llu", v178);
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v432), v574, (int)(uintptr_t)(&v390) + 3);
                  if ( v535 == v536 )
                  {
                    g4_std::vector_string_86c307::M_insert_aux((int *)&v534, v535, (int)(uintptr_t)(&v432));
                  }
                  else
                  {
                    if ( v535 != nullptr )
                      g4_std::string::construct_copy(v535, &v432);
                    v535 += 4;
                  }
                  v179 = &v432;
                  goto LABEL_371;
                }
              }
            }
LABEL_359:
            Json::Value::Destroy((Json::Value::Self *)&v544);
          }
        }
        if ( &v534 == (void **)(v3 + 16) )
          goto LABEL_391;
        v180 = v535;
        v181 = (char *)v534;
        v337 = (v535 - (char *)((uint8_t *)v534)) >> 2;
        v354 = (Json::Value::Self *)v3[16];
        v182 = v354;
        if ( v337 > (v3[18] - (int)(uintptr_t)(v354)) >> 2 )
        {
          v355 = nullptr;
          if ( v337 != 0 )
          {
            if ( v337 > 0x3FFFFFFF )
              sub_18FFEE0(v535, v182);
            v324 = (sociallib::SNSUserData::Self *)v535;
            v355 = (Json::Value::Self *)opNew(4 * v337);
            v180 = (char *)v324;
          }
          if ( v181 != v180 )
          {
            v349 = (Json::Value::Self *)v3;
            v183 = v181;
            v184 = v180;
            v185 = v355;
            do
            {
              if ( v185 != nullptr )
                g4_std::string::construct_copy(v185, v183);
              v183 += 4;
              v185 = (Json::Value::Self *)((char *)v185 + 4);
            }
            while ( v184 != v183 );
            v3 = (int *)v349;
          }
          v186 = (char *)v3[16];
          v187 = v186;
          if ( (char *)v3[17] != v186 )
          {
            v188 = v3;
            v189 = (char *)v3[17];
            do
            {
              s = v187;
              v187 += 4;
              g4_std::string::Destroy(s);
            }
            while ( v189 != v187 );
            v3 = v188;
            v186 = (char *)v188[16];
          }
          if ( v186 != nullptr )
            opDelete(v186);
          v3[16] = (int)(uintptr_t)(v355);
          v190 = (int)(uintptr_t)(v355) + 4 * v337;
          v3[18] = v190;
          goto LABEL_390;
        }
        v191 = (v3[17] - (int)(uintptr_t)(v354)) >> 2;
        v350 = (Json::Value::Self *)v3[17];
        if ( v337 > v191 )
        {
          if ( v191 > 0 )
          {
            v356 = (Json::Value::Self *)v3;
            v218 = v182;
            for ( j = v191; j != 0; --j )
            {
              s_4a = v181;
              sc = v218;
              v181 += 4;
              v218 = (Json::Value::Self *)((char *)v218 + 4);
              g4_std::string::assign_str(sc, s_4a);
            }
            v3 = (int *)v356;
            v354 = *((Json::Value::Self **)v356 + 16);
          }
          v220 = (char *)v534 + ((v3[17] - (uint32_t)(uintptr_t)(v354)) & 0xFFFFFFFC);
          if ( v535 == v220 )
          {
            v190 = (int)(uintptr_t)(v354) + 4 * v337;
            goto LABEL_390;
          }
          v357 = (Json::Value::Self *)v3;
          v221 = v3[17];
          v222 = v535;
          do
          {
            if ( v221 != 0 )
              g4_std::string::construct_copy(v221, v220);
            v220 += 4;
            v221 += 4;
          }
          while ( v222 != v220 );
          v3 = (int *)v357;
        }
        else
        {
          if ( (int)v337 > 0 )
          {
            formatc = (char *)v3;
            v192 = v3[16];
            v193 = (v535 - (char *)((uint8_t *)v534)) >> 2;
            do
            {
              s_4 = v181;
              sa = v192;
              v181 += 4;
              v192 += 4;
              g4_std::string::assign_str(sa, s_4);
              --v193;
            }
            while ( v193 != 0 );
            v3 = (int *)formatc;
            v182 = (Json::Value::Self *)((char *)v354 + 4 * v337);
          }
          if ( v182 != v350 )
          {
            v194 = v182;
            do
            {
              sb = v194;
              v194 = (Json::Value::Self *)((char *)v194 + 4);
              g4_std::string::Destroy(sb);
            }
            while ( v350 != v194 );
            v190 = v3[16] + 4 * v337;
            goto LABEL_390;
          }
        }
        v190 = v3[16] + 4 * v337;
LABEL_390:
        v3[17] = v190;
LABEL_391:
        v3[1] = 2;
        Json::Value::Destroy((Json::Value::Self *)v540);
        Json::Value::Destroy((Json::Value::Self *)v537);
        sub_545800((int)(uintptr_t)(v589));
        g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v534);
        return;
      case 5:
        v16 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v16 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v16);
          dword_20D2420 = (int)(uintptr_t)(v16);
        }
        if ( !sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v16, 4, 5) )
          return;
        v369 = (std::pair<std::string const, sociallib::SNSUserData::Self> *)(v3 + 25);
        g4_std::Rb_tree_string_pair_string_const_586eb0::M_erase(
          (int)(uintptr_t)(v3 + 25),
          (void **)v3[27]);
        v3[27] = 0;
        v3[30] = 0;
        v3[28] = (int)(uintptr_t)(v3 + 26);
        v3[29] = (int)(uintptr_t)(v3 + 26);
        v545 = 0;
        v546 = nullptr;
        v17 = *a1;
        v549 = 0;
        v547 = &v545;
        v548 = &v545;
        if ( *(uint32_t *)(v17 - 12) == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v433), "Facebook Android SNS ERROR: The response is null.\n", (int)(uintptr_t)(&v391));
          setErrorForRequest(v3, (int)(uintptr_t)(&v433));
          g4_std::string::Destroy(&v433);
LABEL_47:
          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
            (int)(uintptr_t)(&v544),
            v546);
          return;
        }
        Json::Reader::Construct((Json::Reader::Self *)v589);
        Json::Value::Construct((int)(uintptr_t)(v529), nullptr);
        if ( (uint8_t)Json::Reader::parse(v589, (int)(uintptr_t)(a1), (Json::Value::Self *)v529, 1) == 0 )
        {
          if ( g4_std_compat::string_find(a1, "User declined", 0, 13) == -1 )
          {
            if ( sub_1937E60((int)(uintptr_t)(a1), "User approved", 0) != -1 )
            {
              g4_std::string::construct_from_cstr((int)(uintptr_t)(v540), "Facebook Android SNS: User doesnt have any ingame friends \n", (int)(uintptr_t)(&v391) + 2);
              g4_std::string::assign_str(v3 + 15, v540);
              v3[1] = 2;
              g4_std::string::Destroy(v540);
              goto LABEL_212;
            }
            v89 = (int *)v434;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v434), "Facebook Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v391) + 3);
          }
          else
          {
            v89 = v540;
            g4_std::string::construct_from_cstr(
              (int)(uintptr_t)(v540),
              "Facebook Android SNS ERROR: Permission user_friends deleted by user error \n",
              (int)(uintptr_t)(&v391) + 1);
          }
          setErrorForRequest(v3, (int)(uintptr_t)(v89));
          g4_std::string::Destroy(v89);
LABEL_212:
          Json::Value::Destroy((Json::Value::Self *)v529);
          sub_545800((int)(uintptr_t)(v589));
          goto LABEL_47;
        }
        Json::Value::Construct((int)(uintptr_t)(&v530), nullptr);
        if ( Json::Value::isMember((Json::Value::Self *)v529, "data")
          && (v200 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v529, "data"), Json::Value::type(v200) == 6) )
        {
          v201 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v529, "data");
          Json::Value::opAssign((Json::Value::Self *)&v530, v201);
          v351 = (Json::Value::Self *)Json::Value::size((Json::Value::Self *)&v530);
          if ( v351 != nullptr )
          {
            v375 = *((uint8_t *)v3 + 56);
            v202 = 0;
            while ( 1 )
            {
              v203 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v530, v202);
              Json::Value::Construct((Json::Value::Self *)v532, v203);
              if ( Json::Value::type((Json::Value::Self *)v532) == 7 )
              {
                Json::Value::size((Json::Value::Self *)v532);
                Json::Value::type((Json::Value::Self *)v532);
                if ( Json::Value::isMember((Json::Value::Self *)v532, "id") )
                {
                  v204 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v532, "id");
                  Json::Value::type(v204);
                  v205 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v532, "id");
                  if ( Json::Value::type(v205) == 1 )
                  {
                    v244 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v532, "id");
                    v208 = Json::Value::asInt(v244);
                  }
                  else
                  {
                    v206 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v532, "id");
                    v207 = Json::Value::type(v206);
                    v208 = 0;
                    if ( v207 == 3 )
                    {
                      v256 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v532, "id");
                      v208 = (uint64_t)(double)Json::Value::asDouble(v256);
                    }
                  }
                  sprintf(v574, "%llu", v208);
                  v209 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v532, "id"));
                  Json::Value::asString((Json::Value::Self *)v438, v209);
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v437), "id", (int)(uintptr_t)(&v392) + 2);
                  v210 = g4_std::map_string_string_7c7b5d::opIndex(&v544, (int)(uintptr_t)(&v437));
                  g4_std::string::assign_str(v210, v438);
                  g4_std::string::Destroy(&v437);
                  g4_std::string::Destroy(v438);
                  if ( Json::Value::isMember((Json::Value::Self *)v532, "name") )
                  {
                    v211 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v532, "name");
                    if ( Json::Value::type(v211) == 4 )
                    {
                      v212 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v532, "name"));
                      Json::Value::asString((Json::Value::Self *)v440, v212);
                      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v439), "name", (int)(uintptr_t)(&v392) + 3);
                      v213 = g4_std::map_string_string_7c7b5d::opIndex(&v544, (int)(uintptr_t)(&v439));
                      g4_std::string::assign_str(v213, v440);
                      g4_std::string::Destroy(&v439);
                      g4_std::string::Destroy(v440);
                      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v441), "gender", (int)(uintptr_t)(&v393));
                      v214 = g4_std::map_string_string_7c7b5d::opIndex(&v544, (int)(uintptr_t)(&v441));
                      sub_1938F10((int)(uintptr_t)(v214), (char *)&unk_1B15112);
                      g4_std::string::Destroy(&v441);
                      if ( Json::Value::isMember((Json::Value::Self *)v532, (char *)&off_1B702C6) )
                      {
                        v296 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v532, (char *)&off_1B702C6);
                        if ( Json::Value::type(v296) == 4 )
                        {
                          v297 = Json::Value::opIndex((Json::Value::Self *)v532, (char *)&off_1B702C6);
                          Json::Value::asString((Json::Value::Self *)v443, v297);
                          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v442), "gender", (int)(uintptr_t)(&v393) + 1);
                          v298 = g4_std::map_string_string_7c7b5d::opIndex(&v544, (int)(uintptr_t)(&v442));
                          g4_std::string::assign_str(v298, v443);
                          g4_std::string::Destroy(&v442);
                          g4_std::string::Destroy(v443);
                        }
                      }
                      if ( !Json::Value::isMember((Json::Value::Self *)v532, "pic") )
                        goto LABEL_427;
                      v294 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v532, "pic");
                      if ( Json::Value::type(v294) == 0 )
                        goto LABEL_427;
                      v456 = (char *)&dword_213B814;
                      v295 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v532, "pic");
                      Json::Value::Construct((Json::Value::Self *)&v534, v295);
                      if ( Json::Value::type((Json::Value::Self *)&v534) == 4 )
                      {
                        Json::Value::asString((Json::Value::Self *)v444, (int)(uintptr_t)(&v534));
                        g4_std::string::assign_str(&v456, v444);
                        g4_std::string::Destroy(v444);
                        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v445), "picture", (int)(uintptr_t)(&v393) + 2);
                        v301 = g4_std::map_string_string_7c7b5d::opIndex(&v544, (int)(uintptr_t)(&v445));
                        g4_std::string::assign_str(v301, &v456);
                        g4_std::string::Destroy(&v445);
                        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v446), "id", (int)(uintptr_t)(&v393) + 3);
                        g4_std::map_string_string_7c7b5d::opIndex(&v544, (int)(uintptr_t)(&v446));
                        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v447), "name", (int)(uintptr_t)(&v394));
                        g4_std::map_string_string_7c7b5d::opIndex(&v544, (int)(uintptr_t)(&v447));
                        g4_std::string::Destroy(&v447);
                        g4_std::string::Destroy(&v446);
                        if ( v375 == 0 )
                          goto LABEL_562;
                        sociallib::urlToImageByteBuffer((sociallib::CDynamicMemoryStream::Self *)v540);
                        sociallib::SNSUserData::Construct(
                          (sociallib::SNSUserData::Self *)v550,
                          (const std::map<std::string,std::string> *)&v544,
                          (const sociallib::CDynamicMemoryStream::Self *)v540);
                        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v448), "id", (int)(uintptr_t)(&v394) + 1);
                        v302 = g4_std::map_string_string_7c7b5d::opIndex(&v544, (int)(uintptr_t)(&v448));
                        g4_std::string::construct_copy(v559, v302);
                        sociallib::SNSUserData::Construct(
                          (sociallib::SNSUserData::Self *)v560,
                          (const sociallib::SNSUserData::Self *)v550);
                        g4_pair_SNSUserData_ctor(
                          (std::pair<std::string const, sociallib::SNSUserData::Self> *)v561,
                          (const std::pair<std::string, sociallib::SNSUserData::Self> *)v559);
                        g4_std::map_string_sociallib_SNSUser_c2a660::insert(
                          (std::map<std::string,sociallib::SNSUserData::Self> *)v377,
                          v369);
                        g4_std::pair_string_const_sociallib_S_9a62a1::Destroy((std::pair<std::string const, sociallib::SNSUserData::Self> *)v561);
                        g4_std::pair_string_sociallib_SNSUser_16d92a::Destroy((std::pair<std::string, sociallib::SNSUserData::Self> *)v559);
                        g4_std::string::Destroy(&v448);
                        sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v551);
                        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                          (int)(uintptr_t)(v550),
                          (void *)v550[2]);
                        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                          (int)(uintptr_t)(&v544),
                          v546);
                        v547 = &v545;
                        v546 = nullptr;
                        v548 = &v545;
                        v549 = 0;
                        sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v540);
                      }
                      else
                      {
                        if ( Json::Value::type((Json::Value::Self *)&v534) != 7 )
                          goto LABEL_562;
                        if ( !Json::Value::isMember((Json::Value::Self *)&v534, "data") )
                          goto LABEL_562;
                        v299 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v534, "data");
                        if ( Json::Value::type(v299) != 7 )
                          goto LABEL_562;
                        v300 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v534, "data");
                        Json::Value::Construct((Json::Value::Self *)v537, v300);
                        if ( !Json::Value::isMember((Json::Value::Self *)v537, "url") )
                          goto LABEL_568;
                        v303 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v537, "url");
                        if ( Json::Value::type(v303) != 4 )
                          goto LABEL_568;
                        v304 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v537, "url"));
                        Json::Value::asString((Json::Value::Self *)v449, v304);
                        g4_std::string::assign_str(&v456, v449);
                        g4_std::string::Destroy(v449);
                        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v450), "picture", (int)(uintptr_t)(&v394) + 2);
                        v305 = g4_std::map_string_string_7c7b5d::opIndex(&v544, (int)(uintptr_t)(&v450));
                        g4_std::string::assign_str(v305, &v456);
                        g4_std::string::Destroy(&v450);
                        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v451), "id", (int)(uintptr_t)(&v394) + 3);
                        g4_std::map_string_string_7c7b5d::opIndex(&v544, (int)(uintptr_t)(&v451));
                        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v452), "name", (int)(uintptr_t)(&v395));
                        g4_std::map_string_string_7c7b5d::opIndex(&v544, (int)(uintptr_t)(&v452));
                        g4_std::string::Destroy(&v452);
                        g4_std::string::Destroy(&v451);
                        if ( v375 == 0 )
                        {
LABEL_568:
                          Json::Value::Destroy((Json::Value::Self *)v537);
LABEL_562:
                          Json::Value::Destroy((Json::Value::Self *)&v534);
                          g4_std::string::Destroy(&v456);
LABEL_427:
                          sociallib::SNSUserData::Construct(
                            (sociallib::SNSUserData::Self *)v554,
                            (const std::map<std::string,std::string> *)&v544);
                          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v454), "id", (int)(uintptr_t)(&v395) + 2);
                          v215 = g4_std::map_string_string_7c7b5d::opIndex(&v544, (int)(uintptr_t)(&v454));
                          g4_std::string::construct_copy(v565, v215);
                          sociallib::SNSUserData::Construct(
                            (sociallib::SNSUserData::Self *)v566,
                            (const sociallib::SNSUserData::Self *)v554);
                          g4_pair_SNSUserData_ctor(
                            (std::pair<std::string const, sociallib::SNSUserData::Self> *)v567,
                            (const std::pair<std::string, sociallib::SNSUserData::Self> *)v565);
                          g4_std::map_string_sociallib_SNSUser_c2a660::insert(
                            (std::map<std::string,sociallib::SNSUserData::Self> *)v377,
                            v369);
                          g4_std::pair_string_const_sociallib_S_9a62a1::Destroy((std::pair<std::string const, sociallib::SNSUserData::Self> *)v567);
                          g4_std::pair_string_sociallib_SNSUser_16d92a::Destroy((std::pair<std::string, sociallib::SNSUserData::Self> *)v565);
                          g4_std::string::Destroy(&v454);
                          sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v555);
                          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                            (int)(uintptr_t)(v554),
                            (void *)v554[2]);
                          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                            (int)(uintptr_t)(&v544),
                            v546);
                          v547 = &v545;
                          v546 = nullptr;
                          v548 = &v545;
                          v549 = 0;
                          Json::Value::Destroy((Json::Value::Self *)v532);
                          goto LABEL_417;
                        }
                        sociallib::urlToImageByteBuffer((sociallib::CDynamicMemoryStream::Self *)v540);
                        sociallib::SNSUserData::Construct(
                          (sociallib::SNSUserData::Self *)v552,
                          (const std::map<std::string,std::string> *)&v544,
                          (const sociallib::CDynamicMemoryStream::Self *)v540);
                        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v453), "id", (int)(uintptr_t)(&v395) + 1);
                        v306 = g4_std::map_string_string_7c7b5d::opIndex(&v544, (int)(uintptr_t)(&v453));
                        g4_std::string::construct_copy(v562, v306);
                        sociallib::SNSUserData::Construct(
                          (sociallib::SNSUserData::Self *)v563,
                          (const sociallib::SNSUserData::Self *)v552);
                        g4_pair_SNSUserData_ctor(
                          (std::pair<std::string const, sociallib::SNSUserData::Self> *)v564,
                          (const std::pair<std::string, sociallib::SNSUserData::Self> *)v562);
                        g4_std::map_string_sociallib_SNSUser_c2a660::insert(
                          (std::map<std::string,sociallib::SNSUserData::Self> *)v377,
                          v369);
                        g4_std::pair_string_const_sociallib_S_9a62a1::Destroy((std::pair<std::string const, sociallib::SNSUserData::Self> *)v564);
                        g4_std::pair_string_sociallib_SNSUser_16d92a::Destroy((std::pair<std::string, sociallib::SNSUserData::Self> *)v562);
                        g4_std::string::Destroy(&v453);
                        sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v553);
                        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                          (int)(uintptr_t)(v552),
                          (void *)v552[2]);
                        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                          (int)(uintptr_t)(&v544),
                          v546);
                        v547 = &v545;
                        v546 = nullptr;
                        v548 = &v545;
                        v549 = 0;
                        sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v540);
                        Json::Value::Destroy((Json::Value::Self *)v537);
                      }
                      Json::Value::Destroy((Json::Value::Self *)&v534);
                      g4_std::string::Destroy(&v456);
                    }
                  }
                }
              }
              Json::Value::Destroy((Json::Value::Self *)v532);
LABEL_417:
              if ( (Json::Value::Self *)++v202 == v351 )
              {
                v3[1] = 2;
                Json::Value::Destroy((Json::Value::Self *)&v530);
                Json::Value::Destroy((Json::Value::Self *)v529);
                sub_545800((int)(uintptr_t)(v589));
                std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                  (int)(uintptr_t)(&v544),
                  v546);
                return;
              }
            }
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v436), "user_friends", (int)(uintptr_t)(&v392) + 1);
          facebookAndroidGLSocialLib_refreshPermissions(&v436);
          g4_std::string::Destroy(&v436);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v435), "Facebook Android SNS ERROR: No data JSON array received.\n", (int)(uintptr_t)(&v392));
          setErrorForRequest(v3, (int)(uintptr_t)(&v435));
          g4_std::string::Destroy(&v435);
        }
        Json::Value::Destroy((Json::Value::Self *)&v530);
        goto LABEL_212;
      case 7:
        v18 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v18 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v18);
          dword_20D2420 = (int)(uintptr_t)(v18);
        }
        if ( sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v18, 4, 7) )
        {
          g4_std::Rb_tree_string_pair_string_const_586eb0::M_erase(
            (int)(uintptr_t)(v3 + 25),
            (void **)v3[27]);
          v3[27] = 0;
          v3[30] = 0;
          v3[28] = (int)(uintptr_t)(v3 + 26);
          v3[29] = (int)(uintptr_t)(v3 + 26);
          v577 = (int)(uintptr_t)(&v575);
          v578 = (uint32_t *)(&v575);
          v575 = nullptr;
          v576 = nullptr;
          v579 = nullptr;
          splitString(&v530, a1, 42);
          v331 = nullptr;
          if ( (unsigned int)(v531 - v530) >> 2 != 0 )
          {
            v19 = nullptr;
            do
            {
              std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                (int)(uintptr_t)(v574),
                v576);
              v577 = (int)(uintptr_t)(&v575);
              v578 = (uint32_t *)(&v575);
              v576 = nullptr;
              v579 = nullptr;
              v20 = v530;
              if ( *(uint32_t *)(*(uint32_t *)(v530 + 4 * (uint32_t)(uintptr_t)(v19)) - 12) != 0 )
              {
                Json::Reader::Construct((Json::Reader::Self *)v589);
                Json::Value::Construct((int)(uintptr_t)(&v534), nullptr);
                if ( (uint8_t)Json::Reader::parse(v589, v530 + 4 * (uint32_t)(uintptr_t)(v19), (Json::Value::Self *)&v534, 1) != 0 )
                {
                  formatb = (char *)Json::Value::size((Json::Value::Self *)&v534);
                  Json::Value::type((Json::Value::Self *)&v534);
                  Json::Value::getMemberNames(v59, (Json::Value::Self *)v532, &v534);
                  v456 = (char *)&dword_213B814;
                  v376 = *((uint8_t *)v3 + 56);
                  sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
                    (sociallib::CDynamicMemoryStream::Self *)&v544,
                    nullptr,
                    0);
                  if ( formatb != nullptr )
                  {
                    v60 = nullptr;
                    for ( k = nullptr; k != formatb; v60 = k )
                    {
                      g4_std::string::assign_str(&v456, (char *)v532[0] + 4 * (uint32_t)(uintptr_t)(v60));
                      if ( g4_std_compat::string_find(&v456, "picture", 0, 7) == -1 )
                      {
                        v65 = Json::Value::opIndex((Json::Value::Self *)&v534, &v456);
                        Json::Value::asString((Json::Value::Self *)&v457, v65);
                        v66 = g4_std::map_string_string_7c7b5d::opIndex(v574, (int)(uintptr_t)(&v456));
                        g4_std::string::assign_str(v66, &v457);
                        v67 = (void *)(v457 - 12);
                        if ( (uint32_t *)(v457 - 12) != dword_213B808
                          && __sync_fetch_and_add((volatile int32_t *)(v457 - 4), 0xFFFFFFFF) <= 0 )
                        {
                          g4_std::string::Rep::M_destroy(v67);
                        }
                        v68 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v534, &v456);
                        Json::Value::type(v68);
                        g4_std::map_string_string_7c7b5d::opIndex(v574, (int)(uintptr_t)(&v456));
                      }
                      else if ( g4_std_compat::string_find(&v456, "picture", 0, 7) != -1 )
                      {
                        v62 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v534, "picture");
                        if ( Json::Value::type(v62) != 0 )
                        {
                          v529[0] = (uint32_t)(uintptr_t)(&dword_213B814);
                          v63 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v534, "picture");
                          Json::Value::Construct((Json::Value::Self *)v537, v63);
                          if ( Json::Value::type((Json::Value::Self *)v537) == 4 )
                          {
                            v69 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v534, "picture"));
                            Json::Value::asString((Json::Value::Self *)v458, v69);
                            g4_std::string::assign_str(v529, v458);
                            g4_std::string::Destroy(v458);
                            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v459), "picture", (int)(uintptr_t)(&v396));
                            v70 = g4_std::map_string_string_7c7b5d::opIndex(v574, (int)(uintptr_t)(&v459));
                            g4_std::string::assign_str(v70, v529);
                            g4_std::string::Destroy(&v459);
                            sociallib::urlToImageByteBuffer((sociallib::CDynamicMemoryStream::Self *)v541);
                            sociallib::CMemoryStream::opAssign(
                              (sociallib::CMemoryStream::Self *)(v3 + 45),
                              (const sociallib::CMemoryStream::Self *)v541);
                            sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v541);
                            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v460), "id", (int)(uintptr_t)(&v396) + 1);
                            g4_std::map_string_string_7c7b5d::opIndex(v574, (int)(uintptr_t)(&v460));
                            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v461), "name", (int)(uintptr_t)(&v396) + 2);
                            g4_std::map_string_string_7c7b5d::opIndex(v574, (int)(uintptr_t)(&v461));
                            g4_std::string::Destroy(&v461);
                            g4_std::string::Destroy(&v460);
                            if ( v376 != 0 )
                            {
                              sociallib::urlToImageByteBuffer((sociallib::CDynamicMemoryStream::Self *)v542);
                              sociallib::CMemoryStream::opAssign(
                                (sociallib::CMemoryStream::Self *)&v544,
                                (const sociallib::CMemoryStream::Self *)v542);
                              sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v542);
                            }
                          }
                          else if ( Json::Value::type((Json::Value::Self *)v537) == 7
                                 && Json::Value::isMember((Json::Value::Self *)v537, "data") )
                          {
                            v94 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v537, "data");
                            if ( Json::Value::type(v94) == 7 )
                            {
                              v95 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v537, "data");
                              Json::Value::Construct((Json::Value::Self *)v540, v95);
                              if ( Json::Value::isMember((Json::Value::Self *)v540, "url") )
                              {
                                v223 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "url");
                                if ( Json::Value::type(v223) == 4 )
                                {
                                  v224 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v540, "url"));
                                  Json::Value::asString((Json::Value::Self *)v462, v224);
                                  g4_std::string::assign_str(v529, v462);
                                  g4_std::string::Destroy(v462);
                                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v463), "picture", (int)(uintptr_t)(&v396) + 3);
                                  v225 = g4_std::map_string_string_7c7b5d::opIndex(v574, (int)(uintptr_t)(&v463));
                                  g4_std::string::assign_str(v225, v529);
                                  g4_std::string::Destroy(&v463);
                                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v464), "id", (int)(uintptr_t)(&v397));
                                  g4_std::map_string_string_7c7b5d::opIndex(v574, (int)(uintptr_t)(&v464));
                                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v465), "name", (int)(uintptr_t)(&v397) + 1);
                                  g4_std::map_string_string_7c7b5d::opIndex(v574, (int)(uintptr_t)(&v465));
                                  g4_std::string::Destroy(&v465);
                                  g4_std::string::Destroy(&v464);
                                  if ( v376 != 0 )
                                  {
                                    sociallib::urlToImageByteBuffer((sociallib::CDynamicMemoryStream::Self *)v543);
                                    sociallib::CMemoryStream::opAssign(
                                      (sociallib::CMemoryStream::Self *)&v544,
                                      (const sociallib::CMemoryStream::Self *)v543);
                                    sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v543);
                                  }
                                }
                              }
                              Json::Value::Destroy((Json::Value::Self *)v540);
                            }
                          }
                          g4_std::map_string_string_7c7b5d::opIndex(v574, (int)(uintptr_t)(&v456));
                          Json::Value::Destroy((Json::Value::Self *)v537);
                          v64 = (void *)(v529[0] - 12);
                          if ( (uint32_t *)(v529[0] - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v529[0] - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy(v64);
                          }
                        }
                      }
                      ++k;
                    }
                  }
                  sociallib::SNSUserData::Construct(
                    (sociallib::SNSUserData::Self *)v556,
                    (const std::map<std::string,std::string> *)v574,
                    (const sociallib::CDynamicMemoryStream::Self *)&v544);
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v466), "id", (int)(uintptr_t)(&v397) + 2);
                  v71 = g4_std::map_string_string_7c7b5d::opIndex(v574, (int)(uintptr_t)(&v466));
                  g4_std::string::construct_copy(v568, v71);
                  sociallib::SNSUserData::Construct(
                    (sociallib::SNSUserData::Self *)v569,
                    (const sociallib::SNSUserData::Self *)v556);
                  g4_pair_SNSUserData_ctor(
                    (std::pair<std::string const, sociallib::SNSUserData::Self> *)v571,
                    (const std::pair<std::string, sociallib::SNSUserData::Self> *)v568);
                  g4_std::map_string_sociallib_SNSUser_c2a660::insert(
                    (std::map<std::string,sociallib::SNSUserData::Self> *)v377,
                    (const std::pair<std::string const, sociallib::SNSUserData::Self> *)(v3 + 25));
                  sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v573);
                  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                    (int)(uintptr_t)(v572),
                    (void *)v572[2]);
                  g4_std::string::Destroy(v571);
                  sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v570);
                  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                    (int)(uintptr_t)(v569),
                    (void *)v569[2]);
                  g4_std::string::Destroy(v568);
                  g4_std::string::Destroy(&v466);
                  sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v558);
                  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                    (int)(uintptr_t)(v556),
                    v557);
                  sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)&v544);
                  g4_std::string::Destroy(&v456);
                  g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v532);
                  Json::Value::Destroy((Json::Value::Self *)&v534);
                  sub_545800((int)(uintptr_t)(v589));
                  v20 = v530;
                }
                else
                {
                  Json::Value::Destroy((Json::Value::Self *)&v534);
                  sub_545800((int)(uintptr_t)(v589));
                  v20 = v530;
                }
              }
              v19 = ++v331;
            }
            while ( (unsigned int)(uintptr_t)(v331) < (v531 - v20) >> 2 );
            v3[1] = 2;
          }
          else
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v455), "Facebook Android SNS ERROR: The response is null.\n", (int)(uintptr_t)(&v395) + 3);
            setErrorForRequest(v3, (int)(uintptr_t)(&v455));
            g4_std::string::Destroy(&v455);
          }
          g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)&v530);
          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
            (int)(uintptr_t)(v574),
            v576);
        }
        return;
      case 8:
        v21 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v21 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v21);
          dword_20D2420 = (int)(uintptr_t)(v21);
        }
        if ( !sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v21, 4, 8) )
          return;
        v358 = (Json::Value::Self *)(v3 + 19);
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
          (int)(uintptr_t)(v3 + 19),
          (void *)v3[21]);
        v3[21] = 0;
        v3[22] = (int)(uintptr_t)(v3 + 20);
        v3[23] = (int)(uintptr_t)(v3 + 20);
        v3[24] = 0;
        if ( *(uint32_t *)(*a1 - 12) == 0 )
        {
          v48 = v467;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v467), "Facebook Android SNS ERROR: The response is null.\n", (int)(uintptr_t)(&v397) + 3);
          goto LABEL_113;
        }
        Json::Reader::Construct((Json::Reader::Self *)v589);
        Json::Value::Construct((int)(uintptr_t)(&v544), nullptr);
        if ( (uint8_t)Json::Reader::parse(v589, (int)(uintptr_t)(a1), (Json::Value::Self *)&v544, 1) == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v468), "Facebook Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v398));
          setErrorForRequest(v3, (int)(uintptr_t)(&v468));
          g4_std::string::Destroy(&v468);
          Json::Value::Destroy((Json::Value::Self *)&v544);
          sub_545800((int)(uintptr_t)(v589));
          return;
        }
        v332 = (char *)Json::Value::size((Json::Value::Self *)&v544);
        Json::Value::type((Json::Value::Self *)&v544);
        Json::Value::getMemberNames((int)(uintptr_t)(v540), (Json::Value::Self *)v540, &v544);
        v532[0] = (const Json::Value::Self *)&dword_213B814;
        if ( v332 == nullptr )
          goto LABEL_243;
        v371 = (std::pair<std::string const, sociallib::SNSUserData::Self> *)v3;
        v96 = nullptr;
        v97 = nullptr;
        while ( 1 )
        {
          g4_std::string::assign_str(v532, v540[0] + 4 * (uint32_t)(uintptr_t)(v96));
          Json::Value::Construct((int)(uintptr_t)(v533), nullptr);
          Json::Value::get((Json::Value::Self *)v574, (char *)&v544, v532, (Json::Value::Self *)v533);
          Json::Value::Destroy((Json::Value::Self *)v533);
          if ( Json::Value::type((Json::Value::Self *)v574) != 0 )
          {
            Json::Value::size((Json::Value::Self *)v574);
            Json::Value::type((Json::Value::Self *)v574);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v534), (char *)&unk_1B15112, (int)(uintptr_t)(&v398) + 1);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v537), (char *)&unk_1B15112, (int)(uintptr_t)(&v398) + 2);
            if ( Json::Value::isMember((Json::Value::Self *)v574, "id") )
            {
              v98 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v574, "id");
              if ( Json::Value::type(v98) == 4 )
              {
                v99 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v574, "id"));
                Json::Value::asString((Json::Value::Self *)v469, v99);
                g4_std::string::assign_str(v537, v469);
                g4_std::string::Destroy(v469);
                if ( Json::Value::isMember((Json::Value::Self *)v574, "name") )
                {
                  v117 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v574, "name");
                  if ( Json::Value::type(v117) == 4 )
                  {
                    v118 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v574, "name"));
                    Json::Value::asString((Json::Value::Self *)v470, v118);
                    g4_std::string::assign_str(&v534, v470);
                    g4_std::string::Destroy(v470);
                  }
                }
                g4_std::string::construct_copy(v513, v537);
                g4_std::string::construct_copy(v514, &v534);
                g4_std::string::construct_copy(&v515, v513);
                g4_std::string::construct_copy(v516, v514);
                std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique(
                  (int)(uintptr_t)(v377),
                  v358,
                  &v515);
                g4_std::string::Destroy(v516);
                g4_std::string::Destroy(&v515);
                g4_std::string::Destroy(v514);
                g4_std::string::Destroy(v513);
                g4_std::string::Destroy(v537);
                g4_std::string::Destroy(&v534);
                Json::Value::Destroy((Json::Value::Self *)v574);
                goto LABEL_238;
              }
            }
            g4_std::string::Destroy(v537);
            g4_std::string::Destroy(&v534);
          }
          Json::Value::Destroy((Json::Value::Self *)v574);
LABEL_238:
          v96 = ++v97;
          if ( v97 == v332 )
          {
            v3 = (int *)v371;
LABEL_243:
            v3[1] = 2;
            g4_std::string::Destroy(v532);
            g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v540);
            Json::Value::Destroy((Json::Value::Self *)&v544);
            sub_545800((int)(uintptr_t)(v589));
            return;
          }
        }
      case 9:
        v49 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v49 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v49);
          dword_20D2420 = (int)(uintptr_t)(v49);
        }
        if ( sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v49, 4, 9) )
        {
          Json::Reader::Construct((Json::Reader::Self *)v589);
          Json::Value::Construct((int)(uintptr_t)(v574), nullptr);
          if ( *(uint32_t *)(*a1 - 12) == 0
            || (uint8_t)Json::Reader::parse(v589, (int)(uintptr_t)(a1), (Json::Value::Self *)v574, 1) == 0 )
          {
            v313 = (int *)((char *)&v381 + 3);
            v7 = (int *)&v411;
            goto LABEL_18;
          }
          if ( Json::Value::isMember((Json::Value::Self *)v574, "name")
            && (v111 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v574, "name"), Json::Value::type(v111) == 4) )
          {
            v112 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v574, "name"));
            v113 = (Json::Value::Self *)&v412;
LABEL_279:
            v315 = (sociallib::CMemoryStream::Self *)(v113);
            Json::Value::asString(v113, v112);
            g4_std::string::assign_str(v3 + 15, v315);
            g4_std::string::Destroy(v315);
          }
          else
          {
            g4_std_compat::string_assign((int)(uintptr_t)(v3 + 15), &unk_1B15112, 0);
          }
          goto LABEL_186;
        }
        return;
      case 0xA:
        v53 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v53 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v53);
          dword_20D2420 = (int)(uintptr_t)(v53);
        }
        if ( !sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v53, 4, 10) )
          return;
        v329 = (Json::Value::Self *)(v3 + 45);
        sociallib::CMemoryStream::clear((void **)v3 + 45);
        Json::Reader::Construct((Json::Reader::Self *)v589);
        Json::Value::Construct((int)(uintptr_t)(v540), nullptr);
        if ( *(uint32_t *)(*a1 - 12) == 0
          || (uint8_t)Json::Reader::parse(v589, (int)(uintptr_t)(a1), (Json::Value::Self *)v540, 1) == 0 )
        {
          v54 = &v421;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v421), "Facebook Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v388));
          goto LABEL_135;
        }
        if ( !Json::Value::isMember((Json::Value::Self *)v540, "picture")
          || (v109 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "picture"), Json::Value::type(v109) == 0) )
        {
          v54 = (int *)v422;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v422), "Facebook Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v388) + 1);
          goto LABEL_135;
        }
        v537[0] = (int)(uintptr_t)(&dword_213B814);
        v110 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "picture");
        Json::Value::Construct((Json::Value::Self *)&v544, v110);
        if ( Json::Value::type((Json::Value::Self *)&v544) == 4 )
        {
          Json::Value::asString((Json::Value::Self *)v423, (int)(uintptr_t)(&v544));
          g4_std::string::assign_str(v537, v423);
          g4_std::string::Destroy(v423);
          sociallib::urlToImageByteBuffer((sociallib::CDynamicMemoryStream::Self *)v538);
          sociallib::CMemoryStream::opAssign(v329, (const sociallib::CMemoryStream::Self *)v538);
          sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v538);
          v3[1] = 2;
        }
        else
        {
          if ( Json::Value::type((Json::Value::Self *)&v544) == 7 && Json::Value::isMember((Json::Value::Self *)&v544, "data") )
          {
            v216 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "data");
            if ( Json::Value::type(v216) == 7 )
            {
              v217 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "data");
              Json::Value::Construct((Json::Value::Self *)v574, v217);
              if ( Json::Value::isMember((Json::Value::Self *)v574, "url") )
              {
                v254 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v574, "url");
                if ( Json::Value::type(v254) == 4 )
                {
                  v255 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v574, "url"));
                  Json::Value::asString((Json::Value::Self *)v424, v255);
                  g4_std::string::assign_str(v537, v424);
                  g4_std::string::Destroy(v424);
                  sociallib::urlToImageByteBuffer((sociallib::CDynamicMemoryStream::Self *)v539);
                  sociallib::CMemoryStream::opAssign(v329, (const sociallib::CMemoryStream::Self *)v539);
                  sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v539);
                  v3[1] = 2;
                  Json::Value::Destroy((Json::Value::Self *)v574);
                  goto LABEL_276;
                }
              }
              Json::Value::Destroy((Json::Value::Self *)v574);
            }
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v425), "Facebook Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v389));
          setErrorForRequest(v3, (int)(uintptr_t)(&v425));
          g4_std::string::Destroy(&v425);
        }
LABEL_276:
        Json::Value::Destroy((Json::Value::Self *)&v544);
        g4_std::string::Destroy(v537);
        goto LABEL_136;
      case 0x10:
        v34 = *(char **)(CurrentActiveRequestState + 168);
        v328 = (Json::Value::Self *)v3[42];
        v341 = (Json::Value::Self *)v3[43];
        if ( v34 != (char *)v341 )
        {
          v372 = (sociallib::CMemoryStream::Self *)(v34 + 36);
          v370 = (std::pair<std::string const, sociallib::SNSUserData::Self> *)(v34 + 32);
          v367 = (Json::Value::Self *)(v34 + 28);
          formata = v34 + 24;
          v360 = (Json::Value::Self *)(v34 + 16);
          v346 = (Json::Value::Self *)(v34 + 12);
          v344 = (Json::Value::Self *)(v34 + 8);
          v353 = (Json::Value::Self *)(v34 + 4);
          v373 = (Json::Value::Self *)v3;
          v35 = (char *)v3[42];
          do
          {
            v36 = v35 - (char *)v328;
            v37 = *(uint32_t *)((char *)v372  + ((uintptr_t)(v35) - (uintptr_t)(char *)(v328)));
            if ( (uint32_t *)(v37 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v37 - 12));
            }
            v38 = *(uint32_t *)((char *)v370 + v36);
            if ( (uint32_t *)(v38 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v38 - 12));
            }
            v39 = *(uint32_t *)((char *)v367 + v36);
            if ( (uint32_t *)(v39 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v39 - 12));
            }
            v40 = *(uint32_t *)&formata[v36];
            if ( (uint32_t *)(v40 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v40 - 12));
            }
            v41 = *(uint32_t *)((char *)v360 + v36);
            if ( (uint32_t *)(v41 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v41 - 12));
            }
            v42 = *(uint32_t *)((char *)v346 + v36);
            if ( (uint32_t *)(v42 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v42 - 12));
            }
            v43 = *(uint32_t *)((char *)v344 + v36);
            if ( (uint32_t *)(v43 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v43 - 12));
            }
            v44 = *(uint32_t *)((char *)v353 + v36);
            if ( (uint32_t *)(v44 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v44 - 12));
            }
            v45 = (uint32_t *)(*(uint32_t *)v35 - 12);
            if ( v45 != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v35 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v45);
            }
            v35 += 52;
          }
          while ( v341 != (Json::Value::Self *)v35 );
          v3 = (int *)v373;
        }
        v3[43] = (int)(uintptr_t)(v328);
        if ( *(uint32_t *)(*a1 - 12) == 0 )
        {
          v48 = v500;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v500), "Facebook Android SNS ERROR: The response is null.\n", (int)(uintptr_t)(&v402) + 1);
          goto LABEL_113;
        }
        Json::Reader::Construct((Json::Reader::Self *)v589);
        Json::Value::Construct((int)(uintptr_t)(&v534), nullptr);
        if ( (uint8_t)Json::Reader::parse(v589, (int)(uintptr_t)(a1), (Json::Value::Self *)&v534, 1) == 0 )
        {
          v46 = &v501;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v501), "Facebook Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v402) + 2);
          goto LABEL_105;
        }
        if ( !Json::Value::isMember((Json::Value::Self *)&v534, "data") )
        {
          v46 = (int *)v502;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v502), "Facebook Android SNS ERROR: data field doesn't exist.\n", (int)(uintptr_t)(&v402) + 3);
          goto LABEL_105;
        }
        v92 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v534, "data");
        Json::Value::Construct((Json::Value::Self *)v537, v92);
        if ( Json::Value::type((Json::Value::Self *)v537) != 6 )
        {
          v91 = (int *)v503;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v503), "Facebook Android SNS ERROR: data field isn't an array.\n", (int)(uintptr_t)(&v403));
          goto LABEL_219;
        }
        v334 = (char *)Json::Value::size((Json::Value::Self *)v537);
        Json::Value::type((Json::Value::Self *)v537);
        v532[0] = (const Json::Value::Self *)&dword_213B814;
        Json::Value::Construct((int)(uintptr_t)(v540), nullptr);
        if ( v334 != nullptr )
        {
          v119 = 0;
          for ( m = nullptr; m != v334; v119 = (unsigned int)(uintptr_t)(m) )
          {
            v121 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v537, v119);
            Json::Value::opAssign((Json::Value::Self *)v540, v121);
            if ( Json::Value::type((Json::Value::Self *)v540) == 7 && Json::Value::isMember((Json::Value::Self *)v540, "id") )
            {
              v122 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "id");
              if ( Json::Value::type(v122) == 4 )
              {
                *(uint32_t *)v574 = (uint32_t)(uintptr_t)(&dword_213B814);
                v575 = &dword_213B814;
                v576 = &dword_213B814;
                v577 = (int)(uintptr_t)(&dword_213B814);
                v578 = &dword_213B814;
                v580 = &dword_213B814;
                v581 = &dword_213B814;
                v582 = &dword_213B814;
                v583 = &dword_213B814;
                sub_1939790(&v575);
                v123 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v540, "id"));
                Json::Value::asString((Json::Value::Self *)v504, v123);
                g4_std::string::assign_str(&v575, v504);
                g4_std::string::Destroy(v504);
                sub_1939790(&v576);
                if ( Json::Value::isMember((Json::Value::Self *)v540, "name") )
                {
                  v240 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "name");
                  if ( Json::Value::type(v240) == 4 )
                  {
                    v241 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v540, "name"));
                    Json::Value::asString((Json::Value::Self *)v505, v241);
                    g4_std::string::assign_str(&v576, v505);
                    g4_std::string::Destroy(v505);
                  }
                }
                sub_1939790(v574);
                if ( Json::Value::isMember((Json::Value::Self *)v540, "created_time") )
                {
                  v238 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "created_time");
                  if ( Json::Value::type(v238) == 4 )
                  {
                    v239 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v540, "created_time"));
                    Json::Value::asString((Json::Value::Self *)v506, v239);
                    g4_std::string::assign_str(v574, v506);
                    g4_std::string::Destroy(v506);
                  }
                }
                sub_1939790(&v577);
                if ( Json::Value::isMember((Json::Value::Self *)v540, "link") )
                {
                  v236 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "link");
                  if ( Json::Value::type(v236) == 4 )
                  {
                    v237 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v540, "link"));
                    Json::Value::asString((Json::Value::Self *)v507, v237);
                    g4_std::string::assign_str(&v577, v507);
                    g4_std::string::Destroy(v507);
                  }
                }
                sub_1939790(&v578);
                if ( Json::Value::isMember((Json::Value::Self *)v540, "website") )
                {
                  v234 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "website");
                  if ( Json::Value::type(v234) == 4 )
                  {
                    v235 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v540, "website"));
                    Json::Value::asString((Json::Value::Self *)v508, v235);
                    g4_std::string::assign_str(&v578, v508);
                    g4_std::string::Destroy(v508);
                  }
                }
                sub_1939790(&v581);
                if ( Json::Value::isMember((Json::Value::Self *)v540, "category") )
                {
                  v232 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "category");
                  if ( Json::Value::type(v232) == 4 )
                  {
                    v233 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v540, "category"));
                    Json::Value::asString((Json::Value::Self *)v509, v233);
                    g4_std::string::assign_str(&v581, v509);
                    g4_std::string::Destroy(v509);
                  }
                }
                sub_1939790(&v580);
                if ( Json::Value::isMember((Json::Value::Self *)v540, "description") )
                {
                  v230 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "description");
                  if ( Json::Value::type(v230) == 4 )
                  {
                    v231 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v540, "description"));
                    Json::Value::asString((Json::Value::Self *)v510, v231);
                    g4_std::string::assign_str(&v580, v510);
                    g4_std::string::Destroy(v510);
                  }
                }
                v586 = nullptr;
                if ( Json::Value::isMember((Json::Value::Self *)v540, "talking_about_count") )
                {
                  v228 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "talking_about_count");
                  if ( Json::Value::type(v228) == 1 )
                  {
                    v229 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "talking_about_count");
                    v586 = (uint32_t *)Json::Value::asInt(v229);
                  }
                }
                sub_1939790(&v582);
                sub_1939790(&v583);
                v585 = nullptr;
                v584 = nullptr;
                if ( Json::Value::isMember((Json::Value::Self *)v540, "cover") )
                {
                  v226 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "cover");
                  if ( Json::Value::type(v226) == 7 )
                  {
                    v227 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "cover");
                    Json::Value::Construct((Json::Value::Self *)&v544, v227);
                    if ( Json::Value::isMember((Json::Value::Self *)&v544, "cover_id") )
                    {
                      v252 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "cover_id");
                      if ( Json::Value::type(v252) == 7 )
                      {
                        v253 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v544, "cover_id"));
                        Json::Value::asString((Json::Value::Self *)v511, v253);
                        g4_std::string::assign_str(&v582, v511);
                        g4_std::string::Destroy(v511);
                      }
                    }
                    if ( Json::Value::isMember((Json::Value::Self *)&v544, "source") )
                    {
                      v250 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "source");
                      if ( Json::Value::type(v250) == 7 )
                      {
                        v251 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v544, "source"));
                        Json::Value::asString((Json::Value::Self *)v512, v251);
                        g4_std::string::assign_str(&v583, v512);
                        g4_std::string::Destroy(v512);
                      }
                    }
                    if ( Json::Value::isMember((Json::Value::Self *)&v544, "offset_x") )
                    {
                      v248 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "offset_x");
                      if ( Json::Value::type(v248) == 1 )
                      {
                        v249 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "offset_x");
                        v585 = (uint32_t *)Json::Value::asInt(v249);
                      }
                    }
                    if ( Json::Value::isMember((Json::Value::Self *)&v544, "offset_y") )
                    {
                      v246 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "offset_y");
                      if ( Json::Value::type(v246) == 1 )
                      {
                        v247 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "offset_y");
                        v584 = (uint32_t *)Json::Value::asInt(v247);
                      }
                    }
                    Json::Value::Destroy((Json::Value::Self *)&v544);
                  }
                }
                LOBYTE(v579) = 0;
                if ( Json::Value::isMember((Json::Value::Self *)v540, "can_post") )
                {
                  v242 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "can_post");
                  if ( Json::Value::type(v242) == 5 )
                  {
                    v243 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "can_post");
                    LOBYTE(v579) = Json::Value::asBool(v243);
                  }
                }
                v124 = v3[43];
                if ( v124 == v3[44] )
                {
                  g4_std::vector_sociallib_SNSLikeData_4d2cfa::M_insert_aux(v3 + 42, v3[43], v574);
                }
                else
                {
                  if ( v124 != 0 )
                    sociallib::SNSLikeData::Construct(
                      (sociallib::SNSLikeData::Self *)v3[43],
                      (const sociallib::SNSLikeData::Self *)v574);
                  v3[43] += 52;
                }
                sociallib::SNSLikeData::Destroy((sociallib::SNSLikeData::Self *)v574);
              }
            }
            ++m;
          }
        }
        goto LABEL_306;
      case 0x13:
        v47 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v47 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v47);
          dword_20D2420 = (int)(uintptr_t)(v47);
        }
        isCurrentActiveSnsAndRequestTypeMatch = sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(
                                                  v47,
                                                  4,
                                                  19);
        goto LABEL_72;
      case 0x14:
        g4_std::string::clear(CurrentActiveRequestState + 60, 0, *(uint32_t *)(*(uint32_t *)(CurrentActiveRequestState + 60) - 12), 0);
        if ( *(uint32_t *)(*a1 - 12) == 0 )
        {
          v48 = v404;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v404), "Facebook Android SNS ERROR: Permission data is null.\n", (int)(uintptr_t)(&v378));
          goto LABEL_113;
        }
        if ( g4_std_compat::string_find(a1, "approved", 0, 8) == -1 )
        {
          v108 = g4_std_compat::string_find(a1, "declined", 0, 8);
          *((uint8_t *)v3 + 56) = 0;
          if ( v108 == -1 )
            v3[32] = 2;
          else
            v3[32] = 0;
        }
        else
        {
          *((uint8_t *)v3 + 56) = 1;
          v3[32] = 1;
        }
        goto LABEL_9;
      case 0x18:
        v58 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v58 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v58);
          dword_20D2420 = (int)(uintptr_t)(v58);
        }
        isCurrentActiveSnsAndRequestTypeMatch = sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(
                                                  v58,
                                                  4,
                                                  24);
        goto LABEL_72;
      case 0x19:
      case 0x21:
      case 0x35:
        goto LABEL_9;
      case 0x1A:
        v50 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v50 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v50);
          dword_20D2420 = (int)(uintptr_t)(v50);
        }
        isCurrentActiveSnsAndRequestTypeMatch = sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(
                                                  v50,
                                                  4,
                                                  26);
        goto LABEL_72;
      case 0x1C:
        v23 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v23 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v23);
          dword_20D2420 = (int)(uintptr_t)(v23);
        }
        isCurrentActiveSnsAndRequestTypeMatch = sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(
                                                  v23,
                                                  4,
                                                  28);
LABEL_72:
        if ( isCurrentActiveSnsAndRequestTypeMatch )
          goto LABEL_9;
        return;
      case 0x29:
      case 0x2A:
        v25 = *(char **)(CurrentActiveRequestState + 144);
        v327 = (Json::Value::Self *)v3[36];
        v340 = (Json::Value::Self *)v3[37];
        if ( v25 != (char *)v340 )
        {
          format = v25 + 32;
          v359 = (Json::Value::Self *)(v25 + 28);
          v345 = (Json::Value::Self *)(v25 + 24);
          v343 = (Json::Value::Self *)(v25 + 20);
          v352 = (Json::Value::Self *)(v25 + 4);
          v366 = (Json::Value::Self *)v3;
          do
          {
            v26 = v25 - (char *)v327;
            v27 = *(uint32_t *)&format[v25 - (char *)v327];
            if ( (uint32_t *)(v27 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
            {
              v319 = (std::pair<std::string const, sociallib::SNSUserData::Self> *)v25;
              g4_std::string::Rep::M_destroy((void *)(v27 - 12));
              v25 = (char *)v319;
            }
            v28 = *(uint32_t *)((char *)v359 + v26);
            if ( (uint32_t *)(v28 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
            {
              v321 = (std::pair<std::string const, sociallib::SNSUserData::Self> *)v25;
              g4_std::string::Rep::M_destroy((void *)(v28 - 12));
              v25 = (char *)v321;
            }
            v29 = *(uint32_t *)((char *)v345 + v26);
            if ( (uint32_t *)(v29 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
            {
              v320 = (std::pair<std::string const, sociallib::SNSUserData::Self> *)v25;
              g4_std::string::Rep::M_destroy((void *)(v29 - 12));
              v25 = (char *)v320;
            }
            v30 = *(uint32_t *)((char *)v343 + v26);
            if ( (uint32_t *)(v30 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
            {
              v323 = (std::pair<std::string const, sociallib::SNSUserData::Self> *)v25;
              g4_std::string::Rep::M_destroy((void *)(v30 - 12));
              v25 = (char *)v323;
            }
            v31 = *(uint32_t *)((char *)v352 + v26);
            if ( (uint32_t *)(v31 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
            {
              v322 = (std::pair<std::string const, sociallib::SNSUserData::Self> *)v25;
              g4_std::string::Rep::M_destroy((void *)(v31 - 12));
              v25 = (char *)v322;
            }
            v32 = (uint32_t *)(*(uint32_t *)v25 - 12);
            if ( v32 != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v25 - 4), 0xFFFFFFFF) <= 0 )
            {
              v318 = (std::pair<std::string const, sociallib::SNSUserData::Self> *)v25;
              g4_std::string::Rep::M_destroy(v32);
              v25 = (char *)v318;
            }
            v25 += 36;
          }
          while ( v340 != (Json::Value::Self *)v25 );
          v3 = (int *)v366;
        }
        v3[37] = (int)(uintptr_t)(v327);
        if ( *(uint32_t *)(*a1 - 12) != 0 )
        {
          Json::Reader::Construct((Json::Reader::Self *)v589);
          Json::Value::Construct((int)(uintptr_t)(v537), nullptr);
          if ( (uint8_t)Json::Reader::parse(v589, (int)(uintptr_t)(a1), (Json::Value::Self *)v537, 1) != 0 )
          {
            if ( Json::Value::isMember((Json::Value::Self *)v537, "data") )
            {
              v93 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v537, "data");
              Json::Value::Construct((Json::Value::Self *)v540, v93);
              if ( Json::Value::type((Json::Value::Self *)v540) == 6 )
              {
                v335 = (char *)Json::Value::size((Json::Value::Self *)v540);
                Json::Value::type((Json::Value::Self *)v540);
                v534 = &dword_213B814;
                Json::Value::Construct((int)(uintptr_t)(&v544), nullptr);
                if ( v335 != nullptr )
                {
                  v144 = 0;
                  for ( n = nullptr; n != v335; v144 = (unsigned int)(uintptr_t)(n) )
                  {
                    v146 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, v144);
                    Json::Value::opAssign((Json::Value::Self *)&v544, v146);
                    if ( Json::Value::type((Json::Value::Self *)&v544) == 7
                      && Json::Value::isMember((Json::Value::Self *)&v544, "score") )
                    {
                      v147 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "score");
                      if ( Json::Value::type(v147) == 1 && Json::Value::isMember((Json::Value::Self *)&v544, "user") )
                      {
                        v148 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "user");
                        if ( Json::Value::type(v148) == 7 )
                        {
                          v149 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "user");
                          if ( Json::Value::isMember(v149, "name") )
                          {
                            v150 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "user");
                            v151 = (Json::Value::Self *)Json::Value::opIndex(v150, "name");
                            if ( Json::Value::type(v151) == 4 )
                            {
                              v152 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "user");
                              if ( Json::Value::isMember(v152, "id") )
                              {
                                v153 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "user");
                                v154 = (Json::Value::Self *)Json::Value::opIndex(v153, "id");
                                if ( Json::Value::type(v154) == 4
                                  && Json::Value::isMember((Json::Value::Self *)&v544, "application") )
                                {
                                  v155 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "application");
                                  if ( Json::Value::type(v155) == 7 )
                                  {
                                    v156 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "application");
                                    if ( Json::Value::isMember(v156, "name") )
                                    {
                                      v157 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "application");
                                      v158 = (Json::Value::Self *)Json::Value::opIndex(v157, "name");
                                      if ( Json::Value::type(v158) == 4 )
                                      {
                                        v159 = (Json::Value::Self *)Json::Value::opIndex(
                                                                (Json::Value::Self *)&v544,
                                                                "application");
                                        if ( Json::Value::isMember(v159, "id") )
                                        {
                                          v160 = (Json::Value::Self *)Json::Value::opIndex(
                                                                  (Json::Value::Self *)&v544,
                                                                  "application");
                                          v161 = (Json::Value::Self *)Json::Value::opIndex(v160, "id");
                                          if ( Json::Value::type(v161) == 4 )
                                          {
                                            *(uint32_t *)v574 = (uint32_t)(uintptr_t)(&dword_213B814);
                                            v575 = &dword_213B814;
                                            v579 = &dword_213B814;
                                            v580 = &dword_213B814;
                                            v581 = &dword_213B814;
                                            v582 = &dword_213B814;
                                            v162 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "user");
                                            v163 = (int)(uintptr_t)(Json::Value::opIndex(v162, "id"));
                                            Json::Value::asString((Json::Value::Self *)v480, v163);
                                            g4_std::string::assign_str(v574, v480);
                                            g4_std::string::Destroy(v480);
                                            v164 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "user");
                                            v165 = (int)(uintptr_t)(Json::Value::opIndex(v164, "name"));
                                            Json::Value::asString((Json::Value::Self *)v481, v165);
                                            g4_std::string::assign_str(&v575, v481);
                                            g4_std::string::Destroy(v481);
                                            v166 = (Json::Value::Self *)Json::Value::opIndex(
                                                                    (Json::Value::Self *)&v544,
                                                                    "application");
                                            v167 = (int)(uintptr_t)(Json::Value::opIndex(v166, "id"));
                                            Json::Value::asString((Json::Value::Self *)v482, v167);
                                            g4_std::string::assign_str(&v580, v482);
                                            g4_std::string::Destroy(v482);
                                            v168 = (Json::Value::Self *)Json::Value::opIndex(
                                                                    (Json::Value::Self *)&v544,
                                                                    "application");
                                            v169 = (int)(uintptr_t)(Json::Value::opIndex(v168, "name"));
                                            Json::Value::asString((Json::Value::Self *)v483, v169);
                                            g4_std::string::assign_str(&v581, v483);
                                            g4_std::string::Destroy(v483);
                                            v170 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "score");
                                            v576 = (void *)Json::Value::asInt(v170);
                                            v577 = (int)(uintptr_t)(v576) >> 31;
                                            v171 = v3[37];
                                            if ( v171 == v3[38] )
                                            {
                                              g4_std::vector_sociallib_SNSLeaderboard_8ac9a4::M_insert_aux(
                                                v3 + 36,
                                                v3[37],
                                                v574);
                                            }
                                            else
                                            {
                                              if ( v171 != 0 )
                                                sociallib::SNSLeaderboardRowData::Construct(
                                                  (sociallib::SNSLeaderboardRowData::Self *)v3[37],
                                                  (const sociallib::SNSLeaderboardRowData::Self *)v574);
                                              v3[37] += 36;
                                            }
                                            sociallib::SNSLeaderboardRowData::Destroy((sociallib::SNSLeaderboardRowData::Self *)v574);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    ++n;
                  }
                }
                v3[1] = 2;
                Json::Value::Destroy((Json::Value::Self *)&v544);
                g4_std::string::Destroy(&v534);
              }
              else
              {
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v479), "Facebook Android SNS ERROR: data field isn't an array.\n", (int)(uintptr_t)(&v400) + 2);
                setErrorForRequest(v3, (int)(uintptr_t)(&v479));
                g4_std::string::Destroy(&v479);
              }
              Json::Value::Destroy((Json::Value::Self *)v540);
              goto LABEL_88;
            }
            v33 = (int *)v478;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v478), "Facebook Android SNS ERROR: data field doesn't exist.\n", (int)(uintptr_t)(&v400) + 1);
          }
          else
          {
            v33 = &v477;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v477), "Facebook Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v400));
          }
          setErrorForRequest(v3, (int)(uintptr_t)(v33));
          g4_std::string::Destroy(v33);
LABEL_88:
          Json::Value::Destroy((Json::Value::Self *)v537);
          sub_545800((int)(uintptr_t)(v589));
          return;
        }
        v48 = v476;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v476), "Facebook Android SNS ERROR: The response is null.\n", (int)(uintptr_t)(&v399) + 3);
        goto LABEL_113;
      case 0x2B:
      case 0x2C:
        if ( *(uint32_t *)(*a1 - 12) != 0 )
        {
          if ( g4_std_compat::string_find(a1, ":true", 0, 5) != -1 )
          {
LABEL_9:
            v3[1] = 2;
            return;
          }
          v48 = v485;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v485), "Facebook Android SNS ERROR: The request couldn't be finished.\n", (int)(uintptr_t)(&v401));
        }
        else
        {
          v48 = v484;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v484), "Facebook Android SNS ERROR: The response is null.\n", (int)(uintptr_t)(&v400) + 3);
        }
        goto LABEL_113;
      case 0x2D:
        v330 = *(Json::Value::Self **)(CurrentActiveRequestState + 64);
        if ( v330 != *(Json::Value::Self **)(CurrentActiveRequestState + 68) )
        {
          v342 = (Json::Value::Self *)CurrentActiveRequestState;
          v55 = *(uint32_t **)(CurrentActiveRequestState + 64);
          v56 = *(uint32_t **)(CurrentActiveRequestState + 68);
          do
          {
            v57 = (uint32_t *)(*v55 - 12);
            if ( v57 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v55 - 4), 0xFFFFFFFF) <= 0 )
              g4_std::string::Rep::M_destroy(v57);
            ++v55;
          }
          while ( v56 != v55 );
          v3 = (int *)v342;
        }
        v3[17] = (int)(uintptr_t)(v330);
        if ( *(uint32_t *)(*a1 - 12) != 0 )
        {
          Json::Reader::Construct((Json::Reader::Self *)v589);
          Json::Value::Construct((int)(uintptr_t)(v540), nullptr);
          if ( (uint8_t)Json::Reader::parse(v589, (int)(uintptr_t)(a1), (Json::Value::Self *)v540, 1) != 0 )
          {
            Json::Value::size((Json::Value::Self *)v540);
            Json::Value::type((Json::Value::Self *)v540);
            if ( Json::Value::isMember((Json::Value::Self *)v540, "to") )
            {
              v100 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "to");
              if ( Json::Value::type(v100) == 6 )
              {
                v101 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "to");
                Json::Value::Construct((Json::Value::Self *)&v544, v101);
                v333 = (char *)Json::Value::size((Json::Value::Self *)&v544);
                if ( v333 != nullptr )
                {
                  for ( ii = 0; (char *)ii != v333; ++ii )
                  {
                    v103 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, ii);
                    Json::Value::Construct((Json::Value::Self *)v574, v103);
                    if ( Json::Value::type((Json::Value::Self *)v574) == 4 )
                    {
                      Json::Value::asString((Json::Value::Self *)v410, (int)(uintptr_t)(v574));
                      v104 = v3[17];
                      if ( v104 == v3[18] )
                      {
                        g4_std::vector_string_86c307::M_insert_aux(v3 + 16, (char *)v3[17], (int)(uintptr_t)(v410));
                      }
                      else
                      {
                        v105 = 0;
                        if ( v104 != 0 )
                        {
                          g4_std::string::construct_copy(v3[17], v410);
                          v105 = v3[17];
                        }
                        v3[17] = v105 + 4;
                      }
                      g4_std::string::Destroy(v410);
                    }
                    Json::Value::Destroy((Json::Value::Self *)v574);
                  }
                }
                v3[1] = 2;
                Json::Value::Destroy((Json::Value::Self *)&v544);
                goto LABEL_136;
              }
            }
            v54 = (int *)v409;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v409), "Facebook Android SNS ERROR: Error while parsing key 'to'.\n", (int)(uintptr_t)(&v381) + 2);
          }
          else
          {
            v54 = (int *)v408;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v408), "Facebook Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v381) + 1);
          }
LABEL_135:
          setErrorForRequest(v3, (int)(uintptr_t)(v54));
          g4_std::string::Destroy(v54);
LABEL_136:
          Json::Value::Destroy((Json::Value::Self *)v540);
          sub_545800((int)(uintptr_t)(v589));
          return;
        }
        v48 = v407;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v407), "Facebook Android SNS ERROR: The response is null.\n", (int)(uintptr_t)(&v381));
        goto LABEL_113;
      case 0x2F:
        v347 = (Json::Value::Self *)(CurrentActiveRequestState + 76);
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
          CurrentActiveRequestState + 76,
          *(void **)(CurrentActiveRequestState + 84));
        v3[21] = 0;
        v3[22] = (int)(uintptr_t)(v3 + 20);
        v3[23] = (int)(uintptr_t)(v3 + 20);
        v3[24] = 0;
        v51 = *a1;
        v534 = &dword_213B814;
        if ( *(uint32_t *)(v51 - 12) == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v471), "Facebook Android SNS ERROR: The response is null.\n", (int)(uintptr_t)(&v398) + 3);
          setErrorForRequest(v3, (int)(uintptr_t)(&v471));
          g4_std::string::Destroy(&v471);
          goto LABEL_124;
        }
        Json::Reader::Construct((Json::Reader::Self *)v589);
        Json::Value::Construct((int)(uintptr_t)(&v544), nullptr);
        if ( (uint8_t)Json::Reader::parse(v589, (int)(uintptr_t)(a1), (Json::Value::Self *)&v544, 1) == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v472), "Facebook Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v399));
          setErrorForRequest(v3, (int)(uintptr_t)(&v472));
          g4_std::string::Destroy(&v472);
          goto LABEL_150;
        }
        v361 = (Json::Value::Self *)Json::Value::size((Json::Value::Self *)&v544);
        Json::Value::type((Json::Value::Self *)&v544);
        v537[0] = (int)(uintptr_t)(&dword_213B814);
        Json::Value::getMemberNames((int)(uintptr_t)(v540), (Json::Value::Self *)v540, &v544);
        if ( v361 == nullptr )
          goto LABEL_205;
        v368 = (Json::Value::Self *)v3;
        v73 = nullptr;
        v74 = nullptr;
        while ( 1 )
        {
          g4_std::string::assign_str(v537, v540[0] + 4 * (uint32_t)(uintptr_t)(v73));
          g4_std::string::clear(&v534, 0, *((uint32_t *)v534 - 3), 0);
          v75 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, (char **)v537);
          v76 = Json::Value::type(v75);
          switch ( v76 )
          {
            case 1:
              v82 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, (char **)v537);
              v83 = Json::Value::asInt(v82);
              sprintf(v574, "%llu", (int64_t)v83);
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v474), v574, (int)(uintptr_t)(&v399) + 1);
              g4_std::string::assign_str(&v534, &v474);
              v84 = (void *)(v474 - 12);
              if ( (uint32_t *)(v474 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v474 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v84);
              }
              g4_std::string::construct_copy(v521, v537);
              g4_std::string::construct_copy(v522, &v534);
              g4_std::string::construct_copy(&v523, v521);
              g4_std::string::construct_copy(&v524, v522);
              std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique(
                (int)(uintptr_t)(v377),
                v347,
                (const void **)&v523);
              v85 = (void *)(v524 - 12);
              if ( (uint32_t *)(v524 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v524 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v85);
              }
              v86 = v523 - 3;
              if ( v523 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v523 - 1, 0xFFFFFFFF) <= 0 )
                g4_std::string::Rep::M_destroy((void *)v86);
              g4_std::string::Destroy(v522);
              g4_std::string::Destroy(v521);
              goto LABEL_193;
            case 3:
              v77 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, (char **)v537);
              v78 = (uint64_t)(double)Json::Value::asDouble(v77);
              sprintf(v574, "%llu", v78);
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v475), v574, (int)(uintptr_t)(&v399) + 2);
              g4_std::string::assign_str(&v534, &v475);
              v79 = (void *)(v475 - 12);
              if ( (uint32_t *)(v475 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v475 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v79);
              }
              v80 = v525;
              g4_std::string::construct_copy(v525, v537);
              v317 = (std::pair<std::string const, sociallib::SNSUserData::Self> *)v526;
              g4_std::string::construct_copy(v526, &v534);
              v314 = &v527;
              g4_std::string::construct_copy(&v527, v525);
              g4_std::string::construct_copy(v528, v526);
              std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique(
                (int)(uintptr_t)(v377),
                v347,
                &v527);
              v81 = v528;
              break;
            case 4:
              v87 = Json::Value::opIndex((Json::Value::Self *)&v544, (char **)v537);
              Json::Value::asString((Json::Value::Self *)&v473, v87);
              g4_std::string::assign_str(&v534, &v473);
              v88 = (void *)(v473 - 12);
              if ( (uint32_t *)(v473 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v473 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v88);
              }
              v80 = v517;
              g4_std::string::construct_copy(v517, v537);
              v317 = (std::pair<std::string const, sociallib::SNSUserData::Self> *)v518;
              g4_std::string::construct_copy(v518, &v534);
              v314 = &v519;
              g4_std::string::construct_copy(&v519, v517);
              g4_std::string::construct_copy(v520, v518);
              std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique(
                (int)(uintptr_t)(v377),
                v347,
                &v519);
              v81 = v520;
              break;
            default:
              goto LABEL_193;
          }
          g4_std::string::Destroy(v81);
          g4_std::string::Destroy(v314);
          g4_std::string::Destroy(v317);
          g4_std::string::Destroy(v80);
LABEL_193:
          v74 = (Json::Value::Self *)((char *)v74 + 1);
          v73 = v74;
          if ( v74 == v361 )
          {
            v3 = (int *)v368;
LABEL_205:
            v3[1] = 2;
            g4_std::vector_string_86c307::Destroy((std::vector<std::string> *)v540);
            g4_std::string::Destroy(v537);
LABEL_150:
            Json::Value::Destroy((Json::Value::Self *)&v544);
            sub_545800((int)(uintptr_t)(v589));
LABEL_124:
            v52 = (char *)v534 - 12;
            if ( (char *)v534 - 12 != (char *)dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)v534 - 1, 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v52);
            }
            return;
          }
        }
      case 0x36:
        if ( *(uint32_t *)(*a1 - 12) == 0 )
        {
          v48 = v486;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v486), "Facebook Android SNS ERROR: The response is null.\n", (int)(uintptr_t)(&v401) + 1);
LABEL_113:
          setErrorForRequest(v3, (int)(uintptr_t)(v48));
          g4_std::string::Destroy(v48);
          return;
        }
        Json::Reader::Construct((Json::Reader::Self *)v589);
        Json::Value::Construct((int)(uintptr_t)(&v534), nullptr);
        if ( (uint8_t)Json::Reader::parse(v589, (int)(uintptr_t)(a1), (Json::Value::Self *)&v534, 1) == 0 )
        {
          v46 = (int *)v487;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v487), "Facebook Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v401) + 2);
LABEL_105:
          setErrorForRequest(v3, (int)(uintptr_t)(v46));
          g4_std::string::Destroy(v46);
          goto LABEL_106;
        }
        if ( !Json::Value::isMember((Json::Value::Self *)&v534, "data") )
        {
          v46 = (int *)v488;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v488), "Facebook Android SNS ERROR: data field doesn't exist.\n", (int)(uintptr_t)(&v401) + 3);
          goto LABEL_105;
        }
        v90 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v534, "data");
        Json::Value::Construct((Json::Value::Self *)v537, v90);
        if ( Json::Value::type((Json::Value::Self *)v537) != 6 )
        {
          v91 = &v489;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v489), "Facebook Android SNS ERROR: data field isn't an array.\n", (int)(uintptr_t)(&v402));
LABEL_219:
          setErrorForRequest(v3, (int)(uintptr_t)(v91));
          g4_std::string::Destroy(v91);
          goto LABEL_220;
        }
        v348 = (Json::Value::Self *)Json::Value::size((Json::Value::Self *)v537);
        Json::Value::type((Json::Value::Self *)v537);
        v532[0] = (const Json::Value::Self *)&dword_213B814;
        Json::Value::Construct((int)(uintptr_t)(v540), nullptr);
        if ( v348 == nullptr )
          goto LABEL_306;
        v374 = (Json::Value::Self *)v3;
        v125 = 0;
        v126 = nullptr;
        break;
      case 0x3F:
        v325 = *(Json::Value::Self **)(CurrentActiveRequestState + 64);
        if ( v325 != *(Json::Value::Self **)(CurrentActiveRequestState + 68) )
        {
          v338 = (Json::Value::Self *)CurrentActiveRequestState;
          v4 = *(uint32_t **)(CurrentActiveRequestState + 64);
          v5 = *(uint32_t **)(CurrentActiveRequestState + 68);
          do
          {
            v6 = (uint32_t *)(*v4 - 12);
            if ( v6 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v4 - 4), 0xFFFFFFFF) <= 0 )
              g4_std::string::Rep::M_destroy(v6);
            ++v4;
          }
          while ( v5 != v4 );
          v3 = (int *)v338;
        }
        v3[17] = (int)(uintptr_t)(v325);
        if ( *(uint32_t *)(*a1 - 12) == 0 )
        {
          v48 = v405;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v405), "Facebook Android SNS ERROR: The response is null.\n", (int)(uintptr_t)(&v379));
          goto LABEL_113;
        }
        Json::Reader::Construct((Json::Reader::Self *)v589);
        Json::Value::Construct((int)(uintptr_t)(v574), nullptr);
        if ( (uint8_t)Json::Reader::parse(v589, (int)(uintptr_t)(a1), (Json::Value::Self *)v574, 1) == 0 )
        {
          v313 = &v380;
          v7 = &v406;
          goto LABEL_18;
        }
        if ( Json::Value::isMember((Json::Value::Self *)v574, "id")
          && (v106 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v574, "id"), Json::Value::type(v106) == 4) )
        {
          v107 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v574, "id"));
          Json::Value::asString((Json::Value::Self *)&v544, v107);
          v3[1] = 2;
          g4_std::string::Destroy(&v544);
        }
        else
        {
LABEL_186:
          v3[1] = 2;
        }
        goto LABEL_19;
      case 0x40:
        v22 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v22 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v22);
          dword_20D2420 = (int)(uintptr_t)(v22);
        }
        if ( !sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v22, 4, 64) )
          return;
        if ( *(uint32_t *)(*a1 - 12) == 0 )
        {
          v48 = v417;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v417), "Facebook Android SNS ERROR: The response is null. \n", (int)(uintptr_t)(&v385));
          goto LABEL_113;
        }
        Json::Reader::Construct((Json::Reader::Self *)v589);
        Json::Value::Construct((int)(uintptr_t)(v574), nullptr);
        if ( (uint8_t)Json::Reader::parse(v589, (int)(uintptr_t)(a1), (Json::Value::Self *)v574, 1) != 0 )
        {
          if ( Json::Value::isMember((Json::Value::Self *)v574, "locale") )
          {
            v114 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v574, "locale");
            if ( Json::Value::type(v114) == 4 )
            {
              v115 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v574, "locale"));
              Json::Value::asString((Json::Value::Self *)v419, v115);
              g4_std::string::assign_str(v3 + 15, v419);
              g4_std::string::Destroy(v419);
              v3[1] = 2;
              Json::Value::Destroy((Json::Value::Self *)v574);
              sub_545800((int)(uintptr_t)(v589));
              return;
            }
          }
          v313 = (int *)&v387;
          v7 = (int *)&v420;
        }
        else
        {
          v313 = (int *)&v386;
          v7 = (int *)&v418;
        }
LABEL_18:
        v316 = (std::pair<std::string const, sociallib::SNSUserData::Self> *)v7;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "Facebook Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(v313));
        setErrorForRequest(v3, (int)(uintptr_t)(v316));
        g4_std::string::Destroy(v316);
LABEL_19:
        Json::Value::Destroy((Json::Value::Self *)v574);
        sub_545800((int)(uintptr_t)(v589));
        return;
      default:
        return;
    }
    while ( 1 )
    {
      v127 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v537, v125);
      Json::Value::opAssign((Json::Value::Self *)v540, v127);
      if ( Json::Value::type((Json::Value::Self *)v540) != 7 )
        goto LABEL_309;
      if ( !Json::Value::isMember((Json::Value::Self *)v540, "id") )
        goto LABEL_309;
      v128 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "id");
      if ( Json::Value::type(v128) != 4 )
        goto LABEL_309;
      if ( !Json::Value::isMember((Json::Value::Self *)v540, "from") )
        goto LABEL_309;
      v129 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "from");
      if ( Json::Value::type(v129) != 7 )
        goto LABEL_309;
      v130 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "from");
      if ( !Json::Value::isMember(v130, "id") )
        goto LABEL_309;
      v131 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "from");
      v132 = (Json::Value::Self *)Json::Value::opIndex(v131, "id");
      if ( Json::Value::type(v132) != 4 )
        goto LABEL_309;
      v133 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "from");
      if ( !Json::Value::isMember(v133, "name") )
        goto LABEL_309;
      v134 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "from");
      v135 = (Json::Value::Self *)Json::Value::opIndex(v134, "name");
      if ( Json::Value::type(v135) != 4 )
        goto LABEL_309;
      if ( !Json::Value::isMember((Json::Value::Self *)v540, "publish_time") )
        goto LABEL_309;
      v136 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "publish_time");
      if ( Json::Value::type(v136) != 4 )
        goto LABEL_309;
      if ( !Json::Value::isMember((Json::Value::Self *)v540, "application") )
        goto LABEL_309;
      v137 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "application");
      if ( Json::Value::type(v137) != 7 )
        goto LABEL_309;
      v138 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "application");
      if ( !Json::Value::isMember(v138, "id") )
        goto LABEL_309;
      v139 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "application");
      v140 = (Json::Value::Self *)Json::Value::opIndex(v139, "id");
      if ( Json::Value::type(v140) != 4 )
        goto LABEL_309;
      v141 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "application");
      if ( !Json::Value::isMember(v141, "name") )
        goto LABEL_309;
      v142 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "application");
      v143 = (Json::Value::Self *)Json::Value::opIndex(v142, "name");
      if ( Json::Value::type(v143) != 4 )
        goto LABEL_309;
      Json::Value::Construct((int)(uintptr_t)(&v544), nullptr);
      if ( Json::Value::isMember((Json::Value::Self *)v540, "achievement") )
      {
        v292 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "achievement");
        if ( Json::Value::type(v292) == 7 )
          break;
      }
      if ( Json::Value::isMember((Json::Value::Self *)v540, "data") )
      {
        v257 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "data");
        if ( Json::Value::type(v257) == 7 )
        {
          v258 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "data");
          if ( Json::Value::isMember(v258, "achievement") )
          {
            v259 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "data");
            v260 = (Json::Value::Self *)Json::Value::opIndex(v259, "achievement");
            if ( Json::Value::type(v260) == 7 )
            {
              v261 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "data");
              v262 = (const Json::Value::Self *)Json::Value::opIndex(v261, "achievement");
              Json::Value::opAssign((Json::Value::Self *)&v544, v262);
LABEL_531:
              if ( Json::Value::isMember((Json::Value::Self *)&v544, "id") )
              {
                v263 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "id");
                if ( Json::Value::type(v263) == 4 && Json::Value::isMember((Json::Value::Self *)&v544, "url") )
                {
                  v264 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "url");
                  if ( Json::Value::type(v264) == 4 && Json::Value::isMember((Json::Value::Self *)&v544, "type") )
                  {
                    v265 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "type");
                    if ( Json::Value::type(v265) == 4 && Json::Value::isMember((Json::Value::Self *)&v544, "title") )
                    {
                      v266 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "title");
                      if ( Json::Value::type(v266) == 4 && Json::Value::isMember((Json::Value::Self *)v540, "likes") )
                      {
                        v267 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "likes");
                        if ( Json::Value::type(v267) == 7 )
                        {
                          v268 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "likes");
                          if ( Json::Value::isMember(v268, "count") )
                          {
                            v269 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "likes");
                            v270 = (Json::Value::Self *)Json::Value::opIndex(v269, "count");
                            if ( Json::Value::type(v270) == 1 && Json::Value::isMember((Json::Value::Self *)v540, "comments") )
                            {
                              v271 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "comments");
                              if ( Json::Value::type(v271) == 7 )
                              {
                                v272 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "comments");
                                if ( Json::Value::isMember(v272, "count") )
                                {
                                  v273 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "comments");
                                  v274 = (Json::Value::Self *)Json::Value::opIndex(v273, "count");
                                  if ( Json::Value::type(v274) == 1 )
                                  {
                                    *(uint32_t *)v574 = (uint32_t)(uintptr_t)(&dword_213B814);
                                    v575 = &dword_213B814;
                                    v576 = &dword_213B814;
                                    v579 = &dword_213B814;
                                    v580 = &dword_213B814;
                                    v581 = &dword_213B814;
                                    v582 = &dword_213B814;
                                    v583 = &dword_213B814;
                                    v584 = &dword_213B814;
                                    v585 = &dword_213B814;
                                    v586 = &dword_213B814;
                                    v587 = &dword_213B814;
                                    v588[0] = (uint32_t)(uintptr_t)(&dword_213B814);
                                    v275 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v540, "id"));
                                    Json::Value::asString((Json::Value::Self *)v490, v275);
                                    g4_std::string::assign_str(&v580, v490);
                                    g4_std::string::Destroy(v490);
                                    v276 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "from");
                                    v277 = (int)(uintptr_t)(Json::Value::opIndex(v276, "id"));
                                    Json::Value::asString((Json::Value::Self *)v491, v277);
                                    g4_std::string::assign_str(&v581, v491);
                                    g4_std::string::Destroy(v491);
                                    v278 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "from");
                                    v279 = (int)(uintptr_t)(Json::Value::opIndex(v278, "name"));
                                    Json::Value::asString((Json::Value::Self *)v492, v279);
                                    g4_std::string::assign_str(&v582, v492);
                                    g4_std::string::Destroy(v492);
                                    v280 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v540, "publish_time"));
                                    Json::Value::asString((Json::Value::Self *)v493, v280);
                                    g4_std::string::assign_str(&v583, v493);
                                    g4_std::string::Destroy(v493);
                                    v281 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "application");
                                    v282 = (int)(uintptr_t)(Json::Value::opIndex(v281, "id"));
                                    Json::Value::asString((Json::Value::Self *)v494, v282);
                                    g4_std::string::assign_str(&v584, v494);
                                    g4_std::string::Destroy(v494);
                                    v283 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "application");
                                    v284 = (int)(uintptr_t)(Json::Value::opIndex(v283, "name"));
                                    Json::Value::asString((Json::Value::Self *)v495, v284);
                                    g4_std::string::assign_str(&v585, v495);
                                    g4_std::string::Destroy(v495);
                                    v285 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v544, "id"));
                                    Json::Value::asString((Json::Value::Self *)v496, v285);
                                    g4_std::string::assign_str(&v586, v496);
                                    g4_std::string::Destroy(v496);
                                    v286 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v544, "title"));
                                    Json::Value::asString((Json::Value::Self *)v497, v286);
                                    g4_std::string::assign_str(&v579, v497);
                                    g4_std::string::Destroy(v497);
                                    v287 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v544, "type"));
                                    Json::Value::asString((Json::Value::Self *)v498, v287);
                                    g4_std::string::assign_str(v588, v498);
                                    g4_std::string::Destroy(v498);
                                    v288 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v544, "url"));
                                    Json::Value::asString((Json::Value::Self *)v499, v288);
                                    g4_std::string::assign_str(&v587, v499);
                                    g4_std::string::Destroy(v499);
                                    v289 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "count");
                                    v588[1] = Json::Value::asInt(v289);
                                    v290 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v544, "count");
                                    v588[2] = Json::Value::asInt(v290);
                                    v291 = *((uint32_t *)v374 + 34);
                                    if ( v291 == *((uint32_t *)v374 + 35) )
                                    {
                                      g4_std::vector_sociallib_SNSAchievement_e77c94::M_insert_aux(
                                        (char *)v374 + 132,
                                        *((uint32_t *)v374 + 34),
                                        v574);
                                    }
                                    else
                                    {
                                      if ( v291 != 0 )
                                        sociallib::SNSAchievementData::Construct(
                                          *((sociallib::SNSAchievementData::Self **)v374 + 34),
                                          (const sociallib::SNSAchievementData::Self *)v574);
                                      *((uint32_t *)v374 + 34) += 68;
                                    }
                                    sociallib::SNSAchievementData::Destroy((sociallib::SNSAchievementData::Self *)v574);
                                    Json::Value::Destroy((Json::Value::Self *)&v544);
                                    goto LABEL_309;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      Json::Value::Destroy((Json::Value::Self *)&v544);
LABEL_309:
      v126 = (Json::Value::Self *)((char *)v126 + 1);
      v125 = (unsigned int)(uintptr_t)(v126);
      if ( v126 == v348 )
      {
        v3 = (int *)v374;
LABEL_306:
        v3[1] = 2;
        Json::Value::Destroy((Json::Value::Self *)v540);
        g4_std::string::Destroy(v532);
LABEL_220:
        Json::Value::Destroy((Json::Value::Self *)v537);
LABEL_106:
        Json::Value::Destroy((Json::Value::Self *)&v534);
        sub_545800((int)(uintptr_t)(v589));
        return;
      }
    }
    v293 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v540, "achievement");
    Json::Value::opAssign((Json::Value::Self *)&v544, v293);
    goto LABEL_531;
  }
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: g4_std::pair_string_const_sociallib_S_9a62a1::Destroy  (binary VA: 0x1438770)
// Original: std::pair<std::string const,sociallib::SNSUserData>::~pair
// ----------------------------------------------------------------------------
void g4_std::pair_string_const_sociallib_S_9a62a1::Destroy(void **self)
{
  char *v1;

  sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)(self + 8));
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)(uintptr_t)(self + 1),
    *(self + 3));
  v1 = (char *)*self - 12;
  if ( v1 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)*self - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: g4_std::pair_string_sociallib_SNSUser_16d92a::Destroy  (binary VA: 0x14387f0)
// Original: std::pair<std::string,sociallib::SNSUserData>::~pair
// ----------------------------------------------------------------------------
void g4_std::pair_string_sociallib_SNSUser_16d92a::Destroy(void **self)
{
  char *v1;

  sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)(self + 8));
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)(uintptr_t)(self + 1),
    *(self + 3));
  v1 = (char *)*self - 12;
  if ( v1 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)*self - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_sociallib_SNSLeaderboard_8ac9a4::M_insert_aux  (binary VA: 0x1438920)
// Original: std::vector<sociallib::SNSLeaderboardRowData>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_sociallib_SNSLeaderboard_8ac9a4::M_insert_aux(char **a1, char *a2, uint32_t *a3)
{
  char *v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char *v9;
  char *v10;
  int v11;
  int v12;
  int v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  void *v18;
  int result;
  void *v20;
  char *v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  int v25;
  uint32_t *v26;
  uint32_t *v27;
  int v28;
  char *v29;
  uint32_t *v30;
  int v31;
  char *v32;
  char *v33;
  int v34;
  char *v35;
  char *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  uint32_t *v43;
  typedef int _g4_t_v44;
  typedef char *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef char *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef char *_g4_t_v51;
  typedef char *_g4_t_v52;
  typedef char *_g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef uint32_t _g4_t_v65[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v44)) > _g4_s0 ? (4u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v45)) > _g4_s1 ? (8u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v46)) > _g4_s2 ? (8u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v47)) > _g4_s3 ? (12u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v48)) > _g4_s4 ? (12u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v49)) > _g4_s5 ? (16u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v50)) > _g4_s6 ? (20u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v51)) > _g4_s7 ? (24u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v52)) > _g4_s8 ? (28u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v53)) > _g4_s9 ? (32u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v54)) > _g4_s10 ? (36u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v55)) > _g4_s11 ? (40u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v56)) > _g4_s12 ? (44u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v57)) > _g4_s13 ? (60u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v58)) > _g4_s14 ? (64u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v59)) > _g4_s15 ? (68u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v60)) > _g4_s16 ? (72u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v61)) > _g4_s17 ? (76u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v62)) > _g4_s18 ? (80u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v63)) > _g4_s19 ? (84u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v64)) > _g4_s20 ? (88u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v65)) > _g4_s21 ? (92u + sizeof(_g4_t_v65)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 40u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 60u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 68u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 72u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 76u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 80u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 84u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 88u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 92u);

  v3 = a1[1];
  if ( v3 != a1[2] )
  {
    v4 = nullptr;
    if ( v3 != nullptr )
    {
      g4_std::string::construct_copy(a1[1], v3 - 36);
      g4_std::string::construct_copy(v3 + 4, v3 - 32);
      v5 = *((uint32_t *)v3 - 6);
      *((uint32_t *)v3 + 2) = *((uint32_t *)v3 - 7);
      v6 = *((uint32_t *)v3 - 5);
      *((uint32_t *)v3 + 3) = v5;
      *((uint32_t *)v3 + 4) = v6;
      g4_std::string::construct_copy(v3 + 20, v3 - 16);
      g4_std::string::construct_copy(v3 + 24, v3 - 12);
      g4_std::string::construct_copy(v3 + 28, v3 - 8);
      g4_std::string::construct_copy(v3 + 32, v3 - 4);
      v4 = a1[1];
    }
    a1[1] = v4 + 36;
    g4_std::string::construct_copy(&v57, a3);
    g4_std::string::construct_copy(&v58, a3 + 1);
    v7 = a3[3];
    v59 = a3[2];
    v8 = a3[4];
    v60 = v7;
    v61 = v8;
    g4_std::string::construct_copy(&v62, a3 + 5);
    g4_std::string::construct_copy(&v63, a3 + 6);
    g4_std::string::construct_copy(&v64, a3 + 7);
    g4_std::string::construct_copy(v65, a3 + 8);
    v47 = a1[1];
    v44 = 954437177 * ((v47 - 72 - a2) >> 2);
    if ( v44 > 0 )
    {
      v9 = v47 - 108;
      v10 = v47 - 36;
      v45 = v47 - 72;
      while ( 1 )
      {
        g4_std::string::assign_str(v10 - 36, v10 - 72);
        g4_std::string::assign_str(v10 - 32, v10 - 68);
        v11 = v10 - 36 - v47;
        v12 = *(uint32_t *)&v9[v11 + 84];
        *(uint32_t *)&v45[v11 + 80] = *(uint32_t *)&v9[v11 + 80];
        *(uint32_t *)&v45[v11 + 84] = v12;
        *(uint32_t *)&v45[v11 + 88] = *(uint32_t *)&v9[v11 + 88];
        g4_std::string::assign_str(v10 - 16, v10 - 52);
        g4_std::string::assign_str(v10 - 12, v10 - 48);
        g4_std::string::assign_str(v10 - 8, v10 - 44);
        g4_std::string::assign_str(v10 - 4, v10 - 40);
        if ( --v44 == 0 )
          break;
        v10 -= 36;
      }
    }
    g4_std::string::assign_str(a2, &v57);
    g4_std::string::assign_str(a2 + 4, &v58);
    v13 = v60;
    *((uint32_t *)a2 + 2) = v59;
    *((uint32_t *)a2 + 4) = v61;
    *((uint32_t *)a2 + 3) = v13;
    g4_std::string::assign_str(a2 + 20, &v62);
    g4_std::string::assign_str(a2 + 24, &v63);
    g4_std::string::assign_str(a2 + 28, &v64);
    g4_std::string::assign_str(a2 + 32, v65);
    v14 = (void *)(v65[0] - 12);
    if ( (uint32_t *)(v65[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v65[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    v15 = (void *)(v64 - 12);
    if ( (uint32_t *)(v64 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v64 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = (void *)(v63 - 12);
    if ( (uint32_t *)(v63 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v63 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    v17 = (void *)(v62 - 12);
    if ( (uint32_t *)(v62 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v62 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
    }
    v18 = (void *)(v58 - 12);
    if ( (uint32_t *)(v58 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    result = v57;
    v20 = (void *)(v57 - 12);
    if ( (uint32_t *)(v57 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v20)), (int)0);
    }
    return result;
  }
  v21 = *a1;
  v22 = 954437177 * ((v3 - *a1) >> 2);
  if ( v22 != 0 )
  {
    v23 = 2 * v22;
    if ( v22 > 2 * v22 || v23 > 0x71C71C7 )
    {
      v55 = -1;
      v24 = 954437177 * ((a2 - v21) >> 2);
    }
    else
    {
      v55 = 18 * v22;
      v24 = 954437177 * ((a2 - v21) >> 2);
      if ( v23 == 0 )
      {
        v26 = (uint32_t *)(uintptr_t)(dword_24);
        v54 = nullptr;
        goto LABEL_20;
      }
    }
    v25 = opNew(v55 * 4);
  }
  else
  {
    v55 = 9;
    v24 = 954437177 * ((a2 - v21) >> 2);
    v25 = opNew(0x24u);
  }
  v54 = (uint32_t *)v25;
  v26 = (uint32_t *)(v25 + 36);
LABEL_20:
  v27 = &v54[9 * v24];
  if ( v27 != nullptr )
  {
    g4_std::string::construct_copy(v27, a3);
    g4_std::string::construct_copy(v27 + 1, a3 + 1);
    v28 = a3[3];
    v27[2] = a3[2];
    v27[3] = v28;
    v27[4] = a3[4];
    g4_std::string::construct_copy(v27 + 5, a3 + 5);
    g4_std::string::construct_copy(v27 + 6, a3 + 6);
    g4_std::string::construct_copy(v27 + 7, a3 + 7);
    g4_std::string::construct_copy(v27 + 8, a3 + 8);
  }
  v29 = *a1;
  if ( *a1 != a2 )
  {
    v30 = v54;
    do
    {
      if ( v30 != nullptr )
      {
        g4_std::string::construct_copy(v30, v29);
        g4_std::string::construct_copy(v30 + 1, v29 + 4);
        v31 = *((uint32_t *)v29 + 3);
        v30[2] = *((uint32_t *)v29 + 2);
        v30[3] = v31;
        v30[4] = *((uint32_t *)v29 + 4);
        g4_std::string::construct_copy(v30 + 5, v29 + 20);
        g4_std::string::construct_copy(v30 + 6, v29 + 24);
        g4_std::string::construct_copy(v30 + 7, v29 + 28);
        g4_std::string::construct_copy(v30 + 8, v29 + 32);
      }
      v29 += 36;
      v30 += 9;
    }
    while ( v29 != a2 );
    v26 = v30 + 9;
  }
  v48 = a1[1];
  if ( v48 != a2 )
  {
    v32 = a2;
    v33 = a1[1];
    do
    {
      if ( v26 != nullptr )
      {
        g4_std::string::construct_copy(v26, v32);
        g4_std::string::construct_copy(v26 + 1, v32 + 4);
        v34 = *((uint32_t *)v32 + 3);
        v26[2] = *((uint32_t *)v32 + 2);
        v26[3] = v34;
        v26[4] = *((uint32_t *)v32 + 4);
        g4_std::string::construct_copy(v26 + 5, v32 + 20);
        g4_std::string::construct_copy(v26 + 6, v32 + 24);
        g4_std::string::construct_copy(v26 + 7, v32 + 28);
        g4_std::string::construct_copy(v26 + 8, v32 + 32);
      }
      v32 += 36;
      v26 += 9;
    }
    while ( v33 != v32 );
    v48 = a1[1];
  }
  v35 = *a1;
  v46 = *a1;
  if ( *a1 != v48 )
  {
    v53 = v35 + 32;
    v52 = v35 + 28;
    v50 = v35 + 20;
    v51 = v35 + 24;
    v49 = v35 + 4;
    v36 = *a1;
    v56 = v26;
    do
    {
      v37 = v36 - v46;
      v38 = *(uint32_t *)&v53[v36 - v46];
      if ( (uint32_t *)(v38 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v38 - 12));
      }
      v39 = *(uint32_t *)&v52[v37];
      if ( (uint32_t *)(v39 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v39 - 12));
      }
      v40 = *(uint32_t *)&v51[v37];
      if ( (uint32_t *)(v40 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v40 - 12));
      }
      v41 = *(uint32_t *)&v50[v37];
      if ( (uint32_t *)(v41 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v41 - 12));
      }
      v42 = *(uint32_t *)&v49[v37];
      if ( (uint32_t *)(v42 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v42 - 12));
      }
      v43 = (uint32_t *)(*(uint32_t *)v36 - 12);
      if ( v43 != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v36 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v43);
      }
      v36 += 36;
    }
    while ( v36 != v48 );
    v26 = v56;
    v46 = *a1;
  }
  if ( v46 != nullptr )
    opDelete(v46);
  *a1 = (char *)v54;
  a1[1] = (char *)v26;
  a1[2] = (char *)&v54[v55];
  return (int)(uintptr_t)(&v54[v55]);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_sociallib_SNSAchievement_e77c94::M_insert_aux  (binary VA: 0x1439330)
// Original: std::vector<sociallib::SNSAchievementData>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_sociallib_SNSAchievement_e77c94::M_insert_aux(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  void *v18;
  void *v19;
  void *v20;
  int result;
  void *v22;
  char *v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  char *v30;
  int v31;
  int v32;
  int v33;
  char *v34;
  char *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  uint32_t *v49;
  typedef int _g4_t_v50;
  typedef char *_g4_t_v51;
  typedef char *_g4_t_v52;
  typedef char *_g4_t_v53;
  typedef char *_g4_t_v54;
  typedef char *_g4_t_v55;
  typedef char *_g4_t_v56;
  typedef char *_g4_t_v57;
  typedef char *_g4_t_v58;
  typedef char *_g4_t_v59;
  typedef char *_g4_t_v60;
  typedef char *_g4_t_v61;
  typedef char *_g4_t_v62;
  typedef char *_g4_t_v63;
  typedef char *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef char _g4_t_v72;
  typedef char _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v50)) > _g4_s0 ? (8u + sizeof(_g4_t_v50)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v51)) > _g4_s1 ? (12u + sizeof(_g4_t_v51)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v52)) > _g4_s2 ? (16u + sizeof(_g4_t_v52)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v53)) > _g4_s3 ? (20u + sizeof(_g4_t_v53)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v54)) > _g4_s4 ? (24u + sizeof(_g4_t_v54)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v55)) > _g4_s5 ? (28u + sizeof(_g4_t_v55)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v56)) > _g4_s6 ? (32u + sizeof(_g4_t_v56)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v57)) > _g4_s7 ? (36u + sizeof(_g4_t_v57)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v58)) > _g4_s8 ? (40u + sizeof(_g4_t_v58)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v59)) > _g4_s9 ? (44u + sizeof(_g4_t_v59)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v60)) > _g4_s10 ? (48u + sizeof(_g4_t_v60)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v61)) > _g4_s11 ? (52u + sizeof(_g4_t_v61)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v62)) > _g4_s12 ? (56u + sizeof(_g4_t_v62)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v63)) > _g4_s13 ? (60u + sizeof(_g4_t_v63)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v64)) > _g4_s14 ? (64u + sizeof(_g4_t_v64)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v65)) > _g4_s15 ? (68u + sizeof(_g4_t_v65)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v66)) > _g4_s16 ? (72u + sizeof(_g4_t_v66)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v67)) > _g4_s17 ? (76u + sizeof(_g4_t_v67)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v68)) > _g4_s18 ? (108u + sizeof(_g4_t_v68)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v69)) > _g4_s19 ? (112u + sizeof(_g4_t_v69)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v70)) > _g4_s20 ? (116u + sizeof(_g4_t_v70)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v71)) > _g4_s21 ? (120u + sizeof(_g4_t_v71)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v72)) > _g4_s22 ? (124u + sizeof(_g4_t_v72)) : _g4_s22,
    _g4_s24 = (125u + sizeof(_g4_t_v73)) > _g4_s23 ? (125u + sizeof(_g4_t_v73)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v74)) > _g4_s24 ? (128u + sizeof(_g4_t_v74)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v75)) > _g4_s25 ? (132u + sizeof(_g4_t_v75)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v76)) > _g4_s26 ? (136u + sizeof(_g4_t_v76)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v77)) > _g4_s27 ? (140u + sizeof(_g4_t_v77)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v78)) > _g4_s28 ? (144u + sizeof(_g4_t_v78)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v79)) > _g4_s29 ? (148u + sizeof(_g4_t_v79)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v80)) > _g4_s30 ? (152u + sizeof(_g4_t_v80)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v81)) > _g4_s31 ? (156u + sizeof(_g4_t_v81)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v82)) > _g4_s32 ? (160u + sizeof(_g4_t_v82)) : _g4_s32,
    _g4_s34 = (164u + sizeof(_g4_t_v83)) > _g4_s33 ? (164u + sizeof(_g4_t_v83)) : _g4_s33,
    _g4_s35 = (168u + sizeof(_g4_t_v84)) > _g4_s34 ? (168u + sizeof(_g4_t_v84)) : _g4_s34,
    _g4_s36 = (172u + sizeof(_g4_t_v85)) > _g4_s35 ? (172u + sizeof(_g4_t_v85)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 36u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 44u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 48u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 64u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 108u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 112u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 116u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 120u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 124u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 125u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 128u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 132u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 136u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 140u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 144u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 148u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 152u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 156u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 160u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 164u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 168u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 172u);

  v3 = a1[1];
  if ( v3 != a1[2] )
  {
    v4 = 0;
    if ( v3 != 0 )
    {
      g4_std::string::construct_copy(a1[1], v3 - 68);
      g4_std::string::construct_copy(v3 + 4, v3 - 64);
      g4_std::string::construct_copy(v3 + 8, v3 - 60);
      *(uint32_t *)(v3 + 12) = *(uint32_t *)(v3 - 56);
      *(uint8_t *)(v3 + 16) = *(uint8_t *)(v3 - 52);
      *(uint8_t *)(v3 + 17) = *(uint8_t *)(v3 - 51);
      g4_std::string::construct_copy(v3 + 20, v3 - 48);
      g4_std::string::construct_copy(v3 + 24, v3 - 44);
      g4_std::string::construct_copy(v3 + 28, v3 - 40);
      g4_std::string::construct_copy(v3 + 32, v3 - 36);
      g4_std::string::construct_copy(v3 + 36, v3 - 32);
      g4_std::string::construct_copy(v3 + 40, v3 - 28);
      g4_std::string::construct_copy(v3 + 44, v3 - 24);
      g4_std::string::construct_copy(v3 + 48, v3 - 20);
      g4_std::string::construct_copy(v3 + 52, v3 - 16);
      g4_std::string::construct_copy(v3 + 56, v3 - 12);
      *(uint32_t *)(v3 + 60) = *(uint32_t *)(v3 - 8);
      *(uint32_t *)(v3 + 64) = *(uint32_t *)(v3 - 4);
      v4 = a1[1];
    }
    a1[1] = v4 + 68;
    g4_std::string::construct_copy(&v68, a3);
    g4_std::string::construct_copy(&v69, a3 + 4);
    g4_std::string::construct_copy(&v70, a3 + 8);
    v71 = *(uint32_t *)(a3 + 12);
    v72 = *(uint8_t *)(a3 + 16);
    v73 = *(uint8_t *)(a3 + 17);
    g4_std::string::construct_copy(&v74, a3 + 20);
    g4_std::string::construct_copy(&v75, a3 + 24);
    g4_std::string::construct_copy(&v76, a3 + 28);
    g4_std::string::construct_copy(&v77, a3 + 32);
    g4_std::string::construct_copy(&v78, a3 + 36);
    g4_std::string::construct_copy(&v79, a3 + 40);
    g4_std::string::construct_copy(&v80, a3 + 44);
    g4_std::string::construct_copy(&v81, a3 + 48);
    g4_std::string::construct_copy(&v82, a3 + 52);
    g4_std::string::construct_copy(&v83, a3 + 56);
    v84 = *(uint32_t *)(a3 + 60);
    v85 = *(uint32_t *)(a3 + 64);
    v5 = a1[1];
    v50 = -252645135 * ((v5 - 136 - a2) >> 2);
    if ( v50 > 0 )
    {
      v6 = v5 - 68;
      v7 = v5 - 188;
      v8 = v5 - 120;
      while ( 1 )
      {
        g4_std::string::assign_str(v6 - 68, v6 - 136);
        g4_std::string::assign_str(v6 - 64, v6 - 132);
        g4_std::string::assign_str(v6 - 60, v6 - 128);
        *(uint32_t *)(v8 - 4) = *(uint32_t *)(v7 - 4);
        *(uint8_t *)v8 = *(uint8_t *)v7;
        *(uint8_t *)(v8 + 1) = *(uint8_t *)(v7 + 1);
        g4_std::string::assign_str(v6 - 48, v6 - 116);
        g4_std::string::assign_str(v6 - 44, v6 - 112);
        g4_std::string::assign_str(v6 - 40, v6 - 108);
        g4_std::string::assign_str(v6 - 36, v6 - 104);
        g4_std::string::assign_str(v6 - 32, v6 - 100);
        g4_std::string::assign_str(v6 - 28, v6 - 96);
        g4_std::string::assign_str(v6 - 24, v6 - 92);
        g4_std::string::assign_str(v6 - 20, v6 - 88);
        g4_std::string::assign_str(v6 - 16, v6 - 84);
        g4_std::string::assign_str(v6 - 12, v6 - 80);
        *(uint32_t *)(v8 + 44) = *(uint32_t *)(v7 + 44);
        *(uint32_t *)(v8 + 48) = *(uint32_t *)(v7 + 48);
        v7 -= 68;
        v8 -= 68;
        if ( --v50 == 0 )
          break;
        v6 -= 68;
      }
    }
    g4_std::string::assign_str(a2, &v68);
    g4_std::string::assign_str(a2 + 4, &v69);
    g4_std::string::assign_str(a2 + 8, &v70);
    *(uint32_t *)(a2 + 12) = v71;
    *(uint8_t *)(a2 + 16) = v72;
    *(uint8_t *)(a2 + 17) = v73;
    g4_std::string::assign_str(a2 + 20, &v74);
    g4_std::string::assign_str(a2 + 24, &v75);
    g4_std::string::assign_str(a2 + 28, &v76);
    g4_std::string::assign_str(a2 + 32, &v77);
    g4_std::string::assign_str(a2 + 36, &v78);
    g4_std::string::assign_str(a2 + 40, &v79);
    g4_std::string::assign_str(a2 + 44, &v80);
    g4_std::string::assign_str(a2 + 48, &v81);
    g4_std::string::assign_str(a2 + 52, &v82);
    g4_std::string::assign_str(a2 + 56, &v83);
    *(uint32_t *)(a2 + 60) = v84;
    *(uint32_t *)(a2 + 64) = v85;
    v9 = (void *)(v83 - 12);
    if ( (uint32_t *)(v83 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v83 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    v10 = (void *)(v82 - 12);
    if ( (uint32_t *)(v82 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v82 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = (void *)(v81 - 12);
    if ( (uint32_t *)(v81 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v81 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v80 - 12);
    if ( (uint32_t *)(v80 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v80 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = (void *)(v79 - 12);
    if ( (uint32_t *)(v79 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v79 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    v14 = (void *)(v78 - 12);
    if ( (uint32_t *)(v78 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v78 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    v15 = (void *)(v77 - 12);
    if ( (uint32_t *)(v77 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v77 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = (void *)(v76 - 12);
    if ( (uint32_t *)(v76 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v76 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    v17 = (void *)(v75 - 12);
    if ( (uint32_t *)(v75 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v75 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
    }
    v18 = (void *)(v74 - 12);
    if ( (uint32_t *)(v74 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v74 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    v19 = (void *)(v70 - 12);
    if ( (uint32_t *)(v70 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v70 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
    v20 = (void *)(v69 - 12);
    if ( (uint32_t *)(v69 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v20);
    }
    result = v68;
    v22 = (void *)(v68 - 12);
    if ( (uint32_t *)(v68 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v68 - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v22)), (int)0);
    }
    return result;
  }
  v23 = (char *)*a1;
  v24 = -252645135 * ((v3 - *a1) >> 2);
  if ( v24 != 0 )
  {
    v25 = 2 * v24;
    if ( v24 > 2 * v24 || v25 > 0x3C3C3C3 )
    {
      v66 = -52;
      v26 = -252645135 * ((a2 - (int)(uintptr_t)(v23)) >> 2);
    }
    else
    {
      v66 = 136 * v24;
      v26 = -252645135 * ((a2 - (int)(uintptr_t)(v23)) >> 2);
      if ( v25 == 0 )
      {
        v28 = 68;
        v65 = 0;
        goto LABEL_27;
      }
    }
    v27 = opNew(v66);
  }
  else
  {
    v66 = 68;
    v26 = -252645135 * ((a2 - (int)(uintptr_t)(v23)) >> 2);
    v27 = opNew(0x44u);
  }
  v65 = v27;
  v28 = v27 + 68;
LABEL_27:
  v29 = v65 + 68 * v26;
  if ( v29 != 0 )
  {
    g4_std::string::construct_copy(v29, a3);
    g4_std::string::construct_copy(v29 + 4, a3 + 4);
    g4_std::string::construct_copy(v29 + 8, a3 + 8);
    *(uint32_t *)(v29 + 12) = *(uint32_t *)(a3 + 12);
    *(uint8_t *)(v29 + 16) = *(uint8_t *)(a3 + 16);
    *(uint8_t *)(v29 + 17) = *(uint8_t *)(a3 + 17);
    g4_std::string::construct_copy(v29 + 20, a3 + 20);
    g4_std::string::construct_copy(v29 + 24, a3 + 24);
    g4_std::string::construct_copy(v29 + 28, a3 + 28);
    g4_std::string::construct_copy(v29 + 32, a3 + 32);
    g4_std::string::construct_copy(v29 + 36, a3 + 36);
    g4_std::string::construct_copy(v29 + 40, a3 + 40);
    g4_std::string::construct_copy(v29 + 44, a3 + 44);
    g4_std::string::construct_copy(v29 + 48, a3 + 48);
    g4_std::string::construct_copy(v29 + 52, a3 + 52);
    g4_std::string::construct_copy(v29 + 56, a3 + 56);
    *(uint32_t *)(v29 + 60) = *(uint32_t *)(a3 + 60);
    *(uint32_t *)(v29 + 64) = *(uint32_t *)(a3 + 64);
  }
  v30 = (char *)*a1;
  if ( *a1 != a2 )
  {
    v31 = v65;
    do
    {
      if ( v31 != 0 )
      {
        g4_std::string::construct_copy(v31, v30);
        g4_std::string::construct_copy(v31 + 4, v30 + 4);
        g4_std::string::construct_copy(v31 + 8, v30 + 8);
        *(uint32_t *)(v31 + 12) = *((uint32_t *)v30 + 3);
        *(uint8_t *)(v31 + 16) = v30[16];
        *(uint8_t *)(v31 + 17) = v30[17];
        g4_std::string::construct_copy(v31 + 20, v30 + 20);
        g4_std::string::construct_copy(v31 + 24, v30 + 24);
        g4_std::string::construct_copy(v31 + 28, v30 + 28);
        g4_std::string::construct_copy(v31 + 32, v30 + 32);
        g4_std::string::construct_copy(v31 + 36, v30 + 36);
        g4_std::string::construct_copy(v31 + 40, v30 + 40);
        g4_std::string::construct_copy(v31 + 44, v30 + 44);
        g4_std::string::construct_copy(v31 + 48, v30 + 48);
        g4_std::string::construct_copy(v31 + 52, v30 + 52);
        g4_std::string::construct_copy(v31 + 56, v30 + 56);
        *(uint32_t *)(v31 + 60) = *((uint32_t *)v30 + 15);
        *(uint32_t *)(v31 + 64) = *((uint32_t *)v30 + 16);
      }
      v30 += 68;
      v31 += 68;
    }
    while ( v30 != (char *)a2 );
    v28 = v31 + 68;
  }
  v52 = (char *)a1[1];
  if ( v52 != (char *)a2 )
  {
    v32 = a2;
    v33 = a1[1];
    do
    {
      if ( v28 != 0 )
      {
        g4_std::string::construct_copy(v28, v32);
        g4_std::string::construct_copy(v28 + 4, v32 + 4);
        g4_std::string::construct_copy(v28 + 8, v32 + 8);
        *(uint32_t *)(v28 + 12) = *(uint32_t *)(v32 + 12);
        *(uint8_t *)(v28 + 16) = *(uint8_t *)(v32 + 16);
        *(uint8_t *)(v28 + 17) = *(uint8_t *)(v32 + 17);
        g4_std::string::construct_copy(v28 + 20, v32 + 20);
        g4_std::string::construct_copy(v28 + 24, v32 + 24);
        g4_std::string::construct_copy(v28 + 28, v32 + 28);
        g4_std::string::construct_copy(v28 + 32, v32 + 32);
        g4_std::string::construct_copy(v28 + 36, v32 + 36);
        g4_std::string::construct_copy(v28 + 40, v32 + 40);
        g4_std::string::construct_copy(v28 + 44, v32 + 44);
        g4_std::string::construct_copy(v28 + 48, v32 + 48);
        g4_std::string::construct_copy(v28 + 52, v32 + 52);
        g4_std::string::construct_copy(v28 + 56, v32 + 56);
        *(uint32_t *)(v28 + 60) = *(uint32_t *)(v32 + 60);
        *(uint32_t *)(v28 + 64) = *(uint32_t *)(v32 + 64);
      }
      v32 += 68;
      v28 += 68;
    }
    while ( v33 != v32 );
    v52 = (char *)a1[1];
  }
  v34 = (char *)*a1;
  v51 = (char *)*a1;
  if ( (char *)*a1 != v52 )
  {
    v64 = v34 + 56;
    v63 = v34 + 52;
    v62 = v34 + 48;
    v61 = v34 + 44;
    v60 = v34 + 40;
    v59 = v34 + 36;
    v58 = v34 + 32;
    v57 = v34 + 28;
    v56 = v34 + 24;
    v55 = v34 + 20;
    v54 = v34 + 8;
    v53 = v34 + 4;
    v67 = v28;
    v35 = (char *)*a1;
    do
    {
      v36 = v35 - v51;
      v37 = *(uint32_t *)&v64[v35 - v51];
      if ( (uint32_t *)(v37 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v37 - 12));
      }
      v38 = *(uint32_t *)&v63[v36];
      if ( (uint32_t *)(v38 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v38 - 12));
      }
      v39 = *(uint32_t *)&v62[v36];
      if ( (uint32_t *)(v39 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v39 - 12));
      }
      v40 = *(uint32_t *)&v61[v36];
      if ( (uint32_t *)(v40 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v40 - 12));
      }
      v41 = *(uint32_t *)&v60[v36];
      if ( (uint32_t *)(v41 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v41 - 12));
      }
      v42 = *(uint32_t *)&v59[v36];
      if ( (uint32_t *)(v42 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v42 - 12));
      }
      v43 = *(uint32_t *)&v58[v36];
      if ( (uint32_t *)(v43 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v43 - 12));
      }
      v44 = *(uint32_t *)&v57[v36];
      if ( (uint32_t *)(v44 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v44 - 12));
      }
      v45 = *(uint32_t *)&v56[v36];
      if ( (uint32_t *)(v45 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v45 - 12));
      }
      v46 = *(uint32_t *)&v55[v36];
      if ( (uint32_t *)(v46 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v46 - 12));
      }
      v47 = *(uint32_t *)&v54[v36];
      if ( (uint32_t *)(v47 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v47 - 12));
      }
      v48 = *(uint32_t *)&v53[v36];
      if ( (uint32_t *)(v48 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v48 - 12));
      }
      v49 = (uint32_t *)(*(uint32_t *)v35 - 12);
      if ( v49 != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v35 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v49);
      }
      v35 += 68;
    }
    while ( v35 != v52 );
    v28 = v67;
    v51 = (char *)*a1;
  }
  if ( v51 != nullptr )
    opDelete(v51);
  *a1 = v65;
  a1[1] = v28;
  a1[2] = v66 + v65;
  return v66 + v65;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_sociallib_SNSLikeData_4d2cfa::M_insert_aux  (binary VA: 0x143a4d0)
// Original: std::vector<sociallib::SNSLikeData>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_sociallib_SNSLikeData_4d2cfa::M_insert_aux(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  int result;
  void *v19;
  char *v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  char *v27;
  int v28;
  int v29;
  int v30;
  char *v31;
  char *v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  uint32_t *v42;
  typedef int _g4_t_v43;
  typedef char *_g4_t_v44;
  typedef char *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef char *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef char *_g4_t_v51;
  typedef char *_g4_t_v52;
  typedef char *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef char _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v43)) > _g4_s0 ? (8u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v44)) > _g4_s1 ? (12u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v45)) > _g4_s2 ? (16u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v46)) > _g4_s3 ? (20u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v47)) > _g4_s4 ? (24u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v48)) > _g4_s5 ? (28u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v49)) > _g4_s6 ? (32u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v50)) > _g4_s7 ? (36u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v51)) > _g4_s8 ? (40u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v52)) > _g4_s9 ? (44u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v53)) > _g4_s10 ? (48u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v54)) > _g4_s11 ? (52u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v55)) > _g4_s12 ? (56u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v56)) > _g4_s13 ? (60u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v57)) > _g4_s14 ? (92u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v58)) > _g4_s15 ? (96u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v59)) > _g4_s16 ? (100u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v60)) > _g4_s17 ? (104u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v61)) > _g4_s18 ? (108u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v62)) > _g4_s19 ? (112u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v63)) > _g4_s20 ? (116u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v64)) > _g4_s21 ? (120u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v65)) > _g4_s22 ? (124u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v66)) > _g4_s23 ? (128u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v67)) > _g4_s24 ? (132u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v68)) > _g4_s25 ? (136u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v69)) > _g4_s26 ? (140u + sizeof(_g4_t_v69)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 92u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 96u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 100u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 104u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 108u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 112u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 116u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 120u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 124u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 128u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 132u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 136u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 140u);

  v3 = a1[1];
  if ( v3 != a1[2] )
  {
    v4 = 0;
    if ( v3 != 0 )
    {
      g4_std::string::construct_copy(a1[1], v3 - 52);
      g4_std::string::construct_copy(v3 + 4, v3 - 48);
      g4_std::string::construct_copy(v3 + 8, v3 - 44);
      g4_std::string::construct_copy(v3 + 12, v3 - 40);
      g4_std::string::construct_copy(v3 + 16, v3 - 36);
      *(uint8_t *)(v3 + 20) = *(uint8_t *)(v3 - 32);
      g4_std::string::construct_copy(v3 + 24, v3 - 28);
      g4_std::string::construct_copy(v3 + 28, v3 - 24);
      g4_std::string::construct_copy(v3 + 32, v3 - 20);
      g4_std::string::construct_copy(v3 + 36, v3 - 16);
      *(uint32_t *)(v3 + 40) = *(uint32_t *)(v3 - 12);
      *(uint32_t *)(v3 + 44) = *(uint32_t *)(v3 - 8);
      *(uint32_t *)(v3 + 48) = *(uint32_t *)(v3 - 4);
      v4 = a1[1];
    }
    a1[1] = v4 + 52;
    g4_std::string::construct_copy(&v57, a3);
    g4_std::string::construct_copy(&v58, a3 + 4);
    g4_std::string::construct_copy(&v59, a3 + 8);
    g4_std::string::construct_copy(&v60, a3 + 12);
    g4_std::string::construct_copy(&v61, a3 + 16);
    v62 = *(uint8_t *)(a3 + 20);
    g4_std::string::construct_copy(&v63, a3 + 24);
    g4_std::string::construct_copy(&v64, a3 + 28);
    g4_std::string::construct_copy(&v65, a3 + 32);
    g4_std::string::construct_copy(&v66, a3 + 36);
    v67 = *(uint32_t *)(a3 + 40);
    v68 = *(uint32_t *)(a3 + 44);
    v69 = *(uint32_t *)(a3 + 48);
    v5 = a1[1];
    v6 = v5 - 104;
    v7 = (uint32_t *)(v5 - 116);
    v8 = (v5 - 104 - a2) >> 2;
    v9 = (uint32_t *)(v5 - 64);
    v43 = -991146299 * v8;
    if ( -991146299 * v8 > 0 )
    {
      while ( 1 )
      {
        g4_std::string::assign_str(v6, v6 - 52);
        g4_std::string::assign_str(v6 + 4, v6 - 48);
        g4_std::string::assign_str(v6 + 8, v6 - 44);
        g4_std::string::assign_str(v6 + 12, v6 - 40);
        g4_std::string::assign_str(v6 + 16, v6 - 36);
        *((uint8_t *)v9 - 20) = *((uint8_t *)v7 - 20);
        g4_std::string::assign_str(v6 + 24, v6 - 28);
        g4_std::string::assign_str(v6 + 28, v6 - 24);
        g4_std::string::assign_str(v6 + 32, v6 - 20);
        g4_std::string::assign_str(v6 + 36, v6 - 16);
        *v9 = *v7;
        v9[1] = v7[1];
        v9[2] = v7[2];
        v7 -= 13;
        v9 -= 13;
        if ( --v43 == 0 )
          break;
        v6 -= 52;
      }
    }
    g4_std::string::assign_str(a2, &v57);
    g4_std::string::assign_str(a2 + 4, &v58);
    g4_std::string::assign_str(a2 + 8, &v59);
    g4_std::string::assign_str(a2 + 12, &v60);
    g4_std::string::assign_str(a2 + 16, &v61);
    *(uint8_t *)(a2 + 20) = v62;
    g4_std::string::assign_str(a2 + 24, &v63);
    g4_std::string::assign_str(a2 + 28, &v64);
    g4_std::string::assign_str(a2 + 32, &v65);
    g4_std::string::assign_str(a2 + 36, &v66);
    *(uint32_t *)(a2 + 40) = v67;
    *(uint32_t *)(a2 + 44) = v68;
    *(uint32_t *)(a2 + 48) = v69;
    v10 = (void *)(v66 - 12);
    if ( (uint32_t *)(v66 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v66 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = (void *)(v65 - 12);
    if ( (uint32_t *)(v65 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v65 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v64 - 12);
    if ( (uint32_t *)(v64 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v64 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = (void *)(v63 - 12);
    if ( (uint32_t *)(v63 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v63 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    v14 = (void *)(v61 - 12);
    if ( (uint32_t *)(v61 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    v15 = (void *)(v60 - 12);
    if ( (uint32_t *)(v60 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v60 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = (void *)(v59 - 12);
    if ( (uint32_t *)(v59 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    v17 = (void *)(v58 - 12);
    if ( (uint32_t *)(v58 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
    }
    result = v57;
    v19 = (void *)(v57 - 12);
    if ( (uint32_t *)(v57 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v19)), (int)0);
    }
    return result;
  }
  v20 = (char *)*a1;
  v21 = -991146299 * ((v3 - *a1) >> 2);
  if ( v21 != 0 )
  {
    v22 = 2 * v21;
    if ( v21 > 2 * v21 || v22 > 0x4EC4EC4 )
    {
      v55 = -48;
      v23 = -991146299 * ((a2 - (int)(uintptr_t)(v20)) >> 2);
    }
    else
    {
      v55 = 104 * v21;
      v23 = -991146299 * ((a2 - (int)(uintptr_t)(v20)) >> 2);
      if ( v22 == 0 )
      {
        v25 = 52;
        v54 = 0;
        goto LABEL_23;
      }
    }
    v24 = opNew(v55);
  }
  else
  {
    v55 = 52;
    v23 = -991146299 * ((a2 - (int)(uintptr_t)(v20)) >> 2);
    v24 = opNew(0x34u);
  }
  v54 = v24;
  v25 = v24 + 52;
LABEL_23:
  v26 = v54 + 52 * v23;
  if ( v26 != 0 )
  {
    g4_std::string::construct_copy(v26, a3);
    g4_std::string::construct_copy(v26 + 4, a3 + 4);
    g4_std::string::construct_copy(v26 + 8, a3 + 8);
    g4_std::string::construct_copy(v26 + 12, a3 + 12);
    g4_std::string::construct_copy(v26 + 16, a3 + 16);
    *(uint8_t *)(v26 + 20) = *(uint8_t *)(a3 + 20);
    g4_std::string::construct_copy(v26 + 24, a3 + 24);
    g4_std::string::construct_copy(v26 + 28, a3 + 28);
    g4_std::string::construct_copy(v26 + 32, a3 + 32);
    g4_std::string::construct_copy(v26 + 36, a3 + 36);
    *(uint32_t *)(v26 + 40) = *(uint32_t *)(a3 + 40);
    *(uint32_t *)(v26 + 44) = *(uint32_t *)(a3 + 44);
    *(uint32_t *)(v26 + 48) = *(uint32_t *)(a3 + 48);
  }
  v27 = (char *)*a1;
  if ( *a1 != a2 )
  {
    v28 = v54;
    do
    {
      if ( v28 != 0 )
      {
        g4_std::string::construct_copy(v28, v27);
        g4_std::string::construct_copy(v28 + 4, v27 + 4);
        g4_std::string::construct_copy(v28 + 8, v27 + 8);
        g4_std::string::construct_copy(v28 + 12, v27 + 12);
        g4_std::string::construct_copy(v28 + 16, v27 + 16);
        *(uint8_t *)(v28 + 20) = v27[20];
        g4_std::string::construct_copy(v28 + 24, v27 + 24);
        g4_std::string::construct_copy(v28 + 28, v27 + 28);
        g4_std::string::construct_copy(v28 + 32, v27 + 32);
        g4_std::string::construct_copy(v28 + 36, v27 + 36);
        *(uint32_t *)(v28 + 40) = *((uint32_t *)v27 + 10);
        *(uint32_t *)(v28 + 44) = *((uint32_t *)v27 + 11);
        *(uint32_t *)(v28 + 48) = *((uint32_t *)v27 + 12);
      }
      v27 += 52;
      v28 += 52;
    }
    while ( v27 != (char *)a2 );
    v25 = v28 + 52;
  }
  v45 = (char *)a1[1];
  if ( v45 != (char *)a2 )
  {
    v29 = a2;
    v30 = a1[1];
    do
    {
      if ( v25 != 0 )
      {
        g4_std::string::construct_copy(v25, v29);
        g4_std::string::construct_copy(v25 + 4, v29 + 4);
        g4_std::string::construct_copy(v25 + 8, v29 + 8);
        g4_std::string::construct_copy(v25 + 12, v29 + 12);
        g4_std::string::construct_copy(v25 + 16, v29 + 16);
        *(uint8_t *)(v25 + 20) = *(uint8_t *)(v29 + 20);
        g4_std::string::construct_copy(v25 + 24, v29 + 24);
        g4_std::string::construct_copy(v25 + 28, v29 + 28);
        g4_std::string::construct_copy(v25 + 32, v29 + 32);
        g4_std::string::construct_copy(v25 + 36, v29 + 36);
        *(uint32_t *)(v25 + 40) = *(uint32_t *)(v29 + 40);
        *(uint32_t *)(v25 + 44) = *(uint32_t *)(v29 + 44);
        *(uint32_t *)(v25 + 48) = *(uint32_t *)(v29 + 48);
      }
      v29 += 52;
      v25 += 52;
    }
    while ( v30 != v29 );
    v45 = (char *)a1[1];
  }
  v31 = (char *)*a1;
  v44 = (char *)*a1;
  if ( (char *)*a1 != v45 )
  {
    v53 = v31 + 36;
    v52 = v31 + 32;
    v51 = v31 + 28;
    v50 = v31 + 24;
    v49 = v31 + 16;
    v48 = v31 + 12;
    v47 = v31 + 8;
    v46 = v31 + 4;
    v56 = v25;
    v32 = (char *)*a1;
    do
    {
      v33 = v32 - v44;
      v34 = *(uint32_t *)&v53[v32 - v44];
      if ( (uint32_t *)(v34 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v34 - 12));
      }
      v35 = *(uint32_t *)&v52[v33];
      if ( (uint32_t *)(v35 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v35 - 12));
      }
      v36 = *(uint32_t *)&v51[v33];
      if ( (uint32_t *)(v36 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v36 - 12));
      }
      v37 = *(uint32_t *)&v50[v33];
      if ( (uint32_t *)(v37 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v37 - 12));
      }
      v38 = *(uint32_t *)&v49[v33];
      if ( (uint32_t *)(v38 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v38 - 12));
      }
      v39 = *(uint32_t *)&v48[v33];
      if ( (uint32_t *)(v39 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v39 - 12));
      }
      v40 = *(uint32_t *)&v47[v33];
      if ( (uint32_t *)(v40 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v40 - 12));
      }
      v41 = *(uint32_t *)&v46[v33];
      if ( (uint32_t *)(v41 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v41 - 12));
      }
      v42 = (uint32_t *)(*(uint32_t *)v32 - 12);
      if ( v42 != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v32 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v42);
      }
      v32 += 52;
    }
    while ( v32 != v45 );
    v25 = v56;
    v44 = (char *)*a1;
  }
  if ( v44 != nullptr )
    opDelete(v44);
  *a1 = v54;
  a1[1] = v25;
  a1[2] = v55 + v54;
  return v55 + v54;
}



// ============================================================================
// Address:   0x143b1a0 (size: 171 bytes)
// Symbol:    _ZNSt4pairIKSsN9sociallib11SNSUserDataEEC2ISsS2_EERKS_IT_T0_E
// Demangled: std::pair<std::string const,sociallib::SNSUserData>::pair<std::string,sociallib::SNSUserData>(std::pair<std::string,sociallib::SNSUserData> const&)
// ============================================================================
// Alternative name is '_ZNSt4pairIKSsN9sociallib11SNSUserDataEEC1ISsS2_EERKS_IT_T0_E'
void (**g4_pair_SNSUserData_ctor(
        std::pair<std::string const, sociallib::SNSUserData::Self> *self,
        const std::pair<std::string, sociallib::SNSUserData::Self> *a2))(sociallib::CDynamicMemoryStream::Self * self)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *i;

  g4_std::string::construct_copy(self, a2);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 8);
  v2 = *((uint32_t **)a2 + 3);
  if ( v2 != nullptr )
  {
    v3 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
           (int)(uintptr_t)(self) + 4,
           v2,
           (int)(uintptr_t)(self) + 8);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v3);
    for ( i = v3; i[2] != 0; i = (uint32_t *)i[2] )
      ;
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(i);
    while ( v3[3] != 0 )
      v3 = (uint32_t *)v3[3];
    *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v3);
    *((uint32_t *)self + 6) = *((uint32_t *)a2 + 6);
  }
  *((uint8_t *)self + 28) = *((uint8_t *)a2 + 28);
  return (void (**)(sociallib::CDynamicMemoryStream::Self *))(uintptr_t)(sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
           (std::pair<std::string const, sociallib::SNSUserData::Self> *)((char *)self + 32),
           (const std::pair<std::string, sociallib::SNSUserData::Self> *)((char *)a2 + 32)));
}
// ----------------------------------------------------------------------------
// Function: g4_std::map_string_sociallib_SNSUser_c2a660::insert  (binary VA: 0x143b250)
// Original: std::map<std::string,sociallib::SNSUserData>::insert
// ----------------------------------------------------------------------------
std::map<std::string,sociallib::SNSUserData::Self> * g4_std::map_string_sociallib_SNSUser_c2a660::insert(std::map<std::string,sociallib::SNSUserData::Self> *self, const std::pair<std::string const, sociallib::SNSUserData::Self> *a2, void **a3)
{
  char *v3;
  size_t v4;
  char *v5;
  uint32_t *v6;
  size_t v7;
  size_t n;
  int v9;
  uint32_t *v10;
  char *v11;
  size_t v12;
  uint32_t *v13;
  int v14;
  int v15;
  char *v17;
  typedef char *_g4_t_v18;
  typedef char _g4_t_v19;
  typedef void *_g4_t_s1;
  typedef size_t _g4_t_v21;
  typedef size_t _g4_t_v22;
  typedef int _g4_t_v23[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_s1)) > _g4_s2 ? (20u + sizeof(_g4_t_s1)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v21)) > _g4_s3 ? (24u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v22)) > _g4_s4 ? (24u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);

  if ( *((uint32_t *)a2 + 2) == 0 )
  {
    v11 = (char *)a2 + 4;
    goto LABEL_18;
  }
  v3 = *((char **)a2 + 2);
  s1 = *a3;
  v4 = *((uint32_t *)*a3 - 3);
  while ( 1 )
  {
    v6 = *((uint32_t **)v3 + 4);
    v7 = *(v6 - 3);
    n = v7;
    v18 = v3;
    if ( v4 <= v7 )
      n = v4;
    v21 = n;
    v9 = memcmp(s1, *((const void **)v3 + 4), n);
    if ( v9 == 0 )
      v9 = v4 - v7;
    if ( v9 >= 0 )
      break;
    v5 = *((char **)v18 + 2);
    v19 = 1;
    if ( v5 == nullptr )
      goto LABEL_11;
LABEL_4:
    v3 = v5;
  }
  v5 = *((char **)v18 + 3);
  v19 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_11:
  v10 = v6;
  v11 = v18;
  v12 = v21;
  v13 = v10;
  v22 = (size_t)v18;
  if ( v19 == 0 )
    goto LABEL_12;
LABEL_18:
  if ( *((char **)a2 + 3) == v11 )
  {
    g4_std::Rb_tree_string_pair_string_const_586eb0::M_insert(
      v23,
      (int)(uintptr_t)(a2),
      0,
      (int)(uintptr_t)(v11),
      (int)(uintptr_t)(a3));
    *(uint32_t *)self = v23[0];
    *((uint8_t *)self + 4) = 1;
  }
  else
  {
    v17 = (char *)sub_19048F0(v11);
    v13 = *((uint32_t **)v17 + 4);
    v22 = (size_t)v11;
    v11 = v17;
    v7 = *(v13 - 3);
    s1 = *a3;
    v4 = *((uint32_t *)*a3 - 3);
    v12 = v7;
    if ( v4 <= v7 )
      v12 = *((uint32_t *)s1 - 3);
LABEL_12:
    v14 = memcmp(v13, s1, v12);
    v15 = v7 - v4;
    if ( v14 != 0 )
      v15 = v14;
    if ( v15 < 0 )
    {
      g4_std::Rb_tree_string_pair_string_const_586eb0::M_insert(
        v23,
        (int)(uintptr_t)(a2),
        0,
        v22,
        (int)(uintptr_t)(a3));
      *(uint32_t *)self = v23[0];
      *((uint8_t *)self + 4) = 1;
    }
    else
    {
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v11);
      *((uint8_t *)self + 4) = 0;
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: sub_143B3F0  (binary VA: 0x143b3f0)
// Original: sub_143B3F0
// ----------------------------------------------------------------------------
int sub_143B3F0()
{
  sub_1900D70(&unk_2119A84);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119A84, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_143B440  (binary VA: 0x143b440)
// Original: sub_143B440
// ----------------------------------------------------------------------------
void sub_143B440()
{
  char v0; // di
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  if ( byte_2119A90 == 0 )
  {
    v1 = 0;
    if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v1, 65542) == -2 )
    {
      v0 = 1;
      G4_VCALL<void>(AndroidOS_JavaVM, 16, &v1, 0);
    }
    else
    {
      v0 = 0;
    }
    if ( v1 != 0 )
    {
      dword_2119A8C = G4_VCALL<int>(v1, 452, dword_2119A88, "GetDataFromURL", "(Ljava/lang/String;)[B");
      byte_2119A90 = 1;
    }
    if ( v0 != 0 )
      G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: sub_143BBA0  (binary VA: 0x143bba0)
// Original: sub_143BBA0
// ----------------------------------------------------------------------------
int sub_143BBA0()
{
  sub_1900D70(&unk_2119A91);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119A91, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_143BBF0  (binary VA: 0x143bbf0)
// Original: sub_143BBF0
// ----------------------------------------------------------------------------
void sub_143BBF0()
{
  typedef char _g4_t_v0;
  typedef uint32_t _g4_t_v1[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v0)) > _g4_s0 ? (15u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v1)) > _g4_s1 ? (28u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 15u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 28u);

  if ( byte_2119A98 == 0 )
  {
    v1[0] = 0;
    if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v1, 65542) == -2 )
    {
      G4_VCALL<void>(AndroidOS_JavaVM, 16, v1, 0);
      v0 = 1;
    }
    else
    {
      v0 = 0;
    }
    if ( v1[0] != 0 )
    {
      dword_2119A9C = G4_VCALL<int>(v1[0], 452, dword_2119A94, "InitGameAPI", "(ZZZ)V");
      dword_2119AA0 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "ConnectToService", "()V");
      dword_2119AA4 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "DisconnectFromService", "()V");
      dword_2119AA8 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "GetPlayerName", "()V");
      dword_2119AAC = G4_VCALL<int>(v1[0], 452, dword_2119A94, "GetPlayerID", "()V");
      dword_2119AB0 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "GetAccessToken", "()Ljava/lang/String;");
      dword_2119AB4 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "IsLoggedIn", "()Z");
      dword_2119AB8 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "GetPlayerAvatar", "()V");
      dword_2119ABC = G4_VCALL<int>(v1[0], 452, dword_2119A94, "ShowAchievements", "()V");
      dword_2119AC0 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "ShowLeadearboardWithId", "(Ljava/lang/String;)V");
      dword_2119AC4 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "UnlockAchievement", "(Ljava/lang/String;)V");
      dword_2119AC8 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "IncrementAchievement", "(Ljava/lang/String;I)V");
      dword_2119ACC = G4_VCALL<int>(v1[0], 452, dword_2119A94, "ResetAchievements", "()V");
      dword_2119AD0 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "SubmitScore", "(Ljava/lang/String;I)V");
      dword_2119AD4 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "ShowAllLeadearboards", "()V");
      dword_2119AD8 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "GetFriends", "(Ljava/lang/String;)V");
      dword_2119ADC = G4_VCALL<int>(v1[0], 452, dword_2119A94, "GetUserData", "(Ljava/lang/String;)V");
      dword_2119AE0 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "GetFriendsData", "(ZZII)V");
      dword_2119AE4 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "PostToWall", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
      dword_2119AE8 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "PostToFriendsWall", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
      dword_2119AEC = G4_VCALL<int>(v1[0], 452, dword_2119A94, "PostPhotoToWall", "(Ljava/lang/String;Ljava/lang/String;)V");
      dword_2119AF0 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "sendGameRequestToFriends", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
      dword_2119AF4 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "ShowPlusOneButton", "(Ljava/lang/String;)V");
      dword_2119AF8 = G4_VCALL<int>(v1[0], 452, dword_2119A94, "ShowPlusOneButton", "(Ljava/lang/String;IIII)V");
      dword_2119AFC = G4_VCALL<int>(v1[0], 452, dword_2119A94, "HidePlusOneButton", "()V");
      byte_2119A98 = 1;
    }
    if ( v0 != 0 )
      G4_VCALL<void>(AndroidOS_JavaVM, 20);
  }
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_setErrorForRequest  (binary VA: 0x143c810)
// Original: GameAPIAndroidGLSocialLib_setErrorForRequest
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_setErrorForRequest(uint32_t *a1, int a2)
{
  int result;

  if ( a1 != nullptr )
  {
    g4_std::string::clear(a1 + 15, 0, *(uint32_t *)(a1[15] - 12), 0);
    result = (int)(uintptr_t)(g4_std::string::assign_str(a1 + 15, a2));
    a1[3] = 1;
    a1[1] = 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_init  (binary VA: 0x143c890)
// Original: GameAPIAndroidGLSocialLib_init
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_init()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_143BBF0();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A94, dword_2119A9C, 1, 1, 1);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_GetPlayerAvatar  (binary VA: 0x143c960)
// Original: GameAPIAndroidGLSocialLib_GetPlayerAvatar
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_GetPlayerAvatar()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_143BBF0();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A94, dword_2119AB8);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_login  (binary VA: 0x143ca20)
// Original: GameAPIAndroidGLSocialLib_login
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_login()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_143BBF0();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A94, dword_2119AA0);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_logout  (binary VA: 0x143cae0)
// Original: GameAPIAndroidGLSocialLib_logout
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_logout()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_143BBF0();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A94, dword_2119AA4);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_GetPlayerInfo  (binary VA: 0x143cba0)
// Original: GameAPIAndroidGLSocialLib_GetPlayerInfo
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_GetPlayerInfo()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_143BBF0();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A94, dword_2119AA8);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_GetPlayerID  (binary VA: 0x143cc60)
// Original: GameAPIAndroidGLSocialLib_GetPlayerID
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_GetPlayerID()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_143BBF0();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A94, dword_2119AAC);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_GetAccessToken  (binary VA: 0x143cd20)
// Original: GameAPIAndroidGLSocialLib_GetAccessToken
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_GetAccessToken(int a1)
{
  int v1;
  int v2;
  char *v3;
  char *v4;
  void *v5;
  typedef char *_g4_t_v7;
  typedef char _g4_t_v8;
  typedef uint8_t _g4_t_v9[7];
  typedef int _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v8)) > _g4_s1 ? (31u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (37u + sizeof(_g4_t_v9)) > _g4_s2 ? (37u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v10)) > _g4_s3 ? (44u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 37u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);

  sub_143BBF0();
  *(uint32_t *)&v9[3] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v9[3], 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v9[3], 0);
    v1 = *(uint32_t *)&v9[3];
    v8 = 1;
    if ( *(uint32_t *)&v9[3] != 0 )
      goto LABEL_3;
  }
  else
  {
    v1 = *(uint32_t *)&v9[3];
    v8 = 0;
    if ( *(uint32_t *)&v9[3] != 0 )
    {
LABEL_3:
      v2 = JNIEnv::CallStaticObjectMethod(v1, dword_2119A94, dword_2119AB0);
      v3 = (char *)(*(int (**)(uint32_t, int, uint32_t))(**(uint32_t **)&v9[3] + 676))(*(uint32_t *)&v9[3], v2, 0);
      v4 = v3;
      if ( v3 != nullptr )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), v3, (int)(uintptr_t)(&v9[1]));
        (*(void (**)(uint32_t, int, char *))(**(uint32_t **)&v9[3] + 680))(*(uint32_t *)&v9[3], v2, v4);
        g4_std::string::construct_copy(a1, v10);
        v5 = (void *)(v10[0] - 12);
        if ( (uint32_t *)(v10[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          v7 = (char *)(&v9[2]);
          g4_std::string::Rep::M_destroy(v5);
        }
      }
      else
      {
        g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(v9));
      }
      if ( v8 != 0 )
        G4_VCALL<void>(AndroidOS_JavaVM, 20, v7);
      return a1;
    }
  }
  if ( v8 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_isLoggedIn  (binary VA: 0x143cee0)
// Original: GameAPIAndroidGLSocialLib_isLoggedIn
// ----------------------------------------------------------------------------
bool GameAPIAndroidGLSocialLib_isLoggedIn()
{
  char v0; // bp
  bool v1;
  int v3[4];

  sub_143BBF0();
  v3[0] = 0;
  v0 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v3, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v3, 0);
  }
  v1 = false;
  if ( v3[0] != 0 )
    v1 = (uint8_t)sub_4BFED0(v3[0], dword_2119A94, dword_2119AB4) == 1;
  if ( v0 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_showLeadearBoard  (binary VA: 0x143cfb0)
// Original: GameAPIAndroidGLSocialLib_showLeadearBoard
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_showLeadearBoard(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  sub_143BBF0();
  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  if ( v4[0] != 0 )
  {
    v2 = G4_VCALL<int>(v4[0], 668, *a1);
    sub_4BFF00(v4[0], dword_2119A94, dword_2119AC0, v2);
    G4_VCALL<void>(v4[0], 92, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_showAllLeadearBoards  (binary VA: 0x143d0a0)
// Original: GameAPIAndroidGLSocialLib_showAllLeadearBoards
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_showAllLeadearBoards()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_143BBF0();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A94, dword_2119AD4);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_submitLeaderBoardScore  (binary VA: 0x143d160)
// Original: GameAPIAndroidGLSocialLib_submitLeaderBoardScore
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_submitLeaderBoardScore(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5[4];

  sub_143BBF0();
  v5[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v5, 65542) == -2 )
  {
    v2 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v5, 0);
  }
  else
  {
    v2 = 0;
  }
  if ( v5[0] != 0 )
  {
    v3 = G4_VCALL<int>(v5[0], 668, *a1);
    sub_4BFF00(v5[0], dword_2119A94, dword_2119AD0, v3, a2);
    G4_VCALL<void>(v5[0], 92, v3);
  }
  result = v2;
  if ( (uint8_t)v2 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_showAchievements  (binary VA: 0x143d260)
// Original: GameAPIAndroidGLSocialLib_showAchievements
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_showAchievements()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_143BBF0();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A94, dword_2119ABC);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_resetAchievements  (binary VA: 0x143d320)
// Original: GameAPIAndroidGLSocialLib_resetAchievements
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_resetAchievements()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_143BBF0();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A94, dword_2119ACC);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_unlockAchievement  (binary VA: 0x143d3e0)
// Original: GameAPIAndroidGLSocialLib_unlockAchievement
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_unlockAchievement(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  sub_143BBF0();
  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  if ( v4[0] != 0 )
  {
    v2 = G4_VCALL<int>(v4[0], 668, *a1);
    sub_4BFF00(v4[0], dword_2119A94, dword_2119AC4, v2);
    G4_VCALL<void>(v4[0], 92, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_incrementAchievement  (binary VA: 0x143d4d0)
// Original: GameAPIAndroidGLSocialLib_incrementAchievement
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_incrementAchievement(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  int result;
  int v5[4];

  sub_143BBF0();
  v5[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v5, 65542) == -2 )
  {
    v2 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v5, 0);
  }
  else
  {
    v2 = 0;
  }
  if ( v5[0] != 0 )
  {
    v3 = G4_VCALL<int>(v5[0], 668, *a1);
    sub_4BFF00(v5[0], dword_2119A94, dword_2119AC8, v3, a2);
    G4_VCALL<void>(v5[0], 92, v3);
  }
  result = v2;
  if ( (uint8_t)v2 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_getFriends  (binary VA: 0x143d5d0)
// Original: GameAPIAndroidGLSocialLib_getFriends
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_getFriends(int a1)
{
  int v1;
  sociallib::ClientSNSInterface::Self *v2;
  uint32_t *v3;
  void *v4;
  int result;
  sociallib::ClientSNSInterface::Self *v6;
  uint32_t *CurrentActiveRequestState;
  void *v8;
  typedef char *_g4_t_v9;
  typedef sociallib::ClientSNSInterface::Self *_g4_t_v10;
  typedef sociallib::ClientSNSInterface::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v12)) > _g4_s3 ? (32u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v13)) > _g4_s4 ? (36u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v14)) > _g4_s5 ? (40u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v15)) > _g4_s6 ? (44u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);

  sub_143BBF0();
  v13 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v13, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v13, 0);
  }
  else
  {
    v1 = 0;
  }
  if ( v13 != 0 )
  {
    switch ( a1 )
    {
      case 1:
        v6 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v11 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v11);
          v6 = v11;
          dword_20D2420 = (int)(uintptr_t)(v11);
        }
        CurrentActiveRequestState = (uint32_t *)sociallib::ClientSNSInterface::getCurrentActiveRequestState(v6);
        if ( CurrentActiveRequestState != nullptr )
        {
          g4_std::string::construct_from_cstr(
            (int)(uintptr_t)(v15),
            "GameAPI Android SNS ERROR: get not playing friends function not implemented.\n",
            (int)(uintptr_t)(&v12) + 1);
          GameAPIAndroidGLSocialLib_setErrorForRequest(CurrentActiveRequestState, (int)(uintptr_t)(v15));
          v8 = (void *)(v15[0] - 12);
          if ( (uint32_t *)(v15[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v15[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            v9 = (char *)&v12 + 3;
            g4_std::string::Rep::M_destroy(v8);
          }
        }
        break;
      case 2:
        sub_4BFF00(v13, dword_2119A94, dword_2119AD8, 0);
        break;
      case 0:
        v2 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v10 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v10);
          v2 = v10;
          dword_20D2420 = (int)(uintptr_t)(v10);
        }
        v3 = (uint32_t *)sociallib::ClientSNSInterface::getCurrentActiveRequestState(v2);
        if ( v3 != nullptr )
        {
          g4_std::string::construct_from_cstr(
            (int)(uintptr_t)(&v14),
            "GameAPI Android SNS ERROR: get playing friends function not implemented.\n",
            (int)(uintptr_t)(&v12));
          GameAPIAndroidGLSocialLib_setErrorForRequest(v3, (int)(uintptr_t)(&v14));
          v4 = (void *)(v14 - 12);
          if ( (uint32_t *)(v14 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
          {
            v9 = (char *)&v12 + 2;
            g4_std::string::Rep::M_destroy(v4);
          }
        }
        break;
      default:
        break;
    }
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20, v9);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_getUserData  (binary VA: 0x143d830)
// Original: GameAPIAndroidGLSocialLib_getUserData
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_getUserData(const char *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  sub_143BBF0();
  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  if ( v4[0] != 0 )
  {
    v2 = G4_VCALL<int>(v4[0], 668, a1);
    sub_4BFF00(v4[0], dword_2119A94, dword_2119ADC, v2);
    G4_VCALL<void>(v4[0], 92, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_getFriendsData  (binary VA: 0x143d920)
// Original: GameAPIAndroidGLSocialLib_getFriendsData
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_getFriendsData(int a1, int a2, int a3)
{
  int v3;
  sociallib::ClientSNSInterface::Self *v4;
  uint32_t *v5;
  void *v6;
  int result;
  sociallib::ClientSNSInterface::Self *v8;
  uint32_t *CurrentActiveRequestState;
  void *v10;
  typedef char *_g4_t_v11;
  typedef sociallib::ClientSNSInterface::Self *_g4_t_v12;
  typedef sociallib::ClientSNSInterface::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v12)) > _g4_s1 ? (44u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v13)) > _g4_s2 ? (44u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v14)) > _g4_s3 ? (48u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v15)) > _g4_s4 ? (52u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v16)) > _g4_s5 ? (56u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v17)) > _g4_s6 ? (60u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);

  sub_143BBF0();
  v15 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v15, 65542) == -2 )
  {
    v3 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v15, 0);
  }
  else
  {
    v3 = 0;
  }
  if ( v15 != 0 )
  {
    switch ( a1 )
    {
      case 1:
        v8 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v13 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v13);
          v8 = v13;
          dword_20D2420 = (int)(uintptr_t)(v13);
        }
        CurrentActiveRequestState = (uint32_t *)sociallib::ClientSNSInterface::getCurrentActiveRequestState(v8);
        if ( CurrentActiveRequestState != nullptr )
        {
          g4_std::string::construct_from_cstr(
            (int)(uintptr_t)(v17),
            "GameAPI Android SNS ERROR: get not playing friends data function not implemented.\n",
            (int)(uintptr_t)(&v14) + 1);
          GameAPIAndroidGLSocialLib_setErrorForRequest(CurrentActiveRequestState, (int)(uintptr_t)(v17));
          v10 = (void *)(v17[0] - 12);
          if ( (uint32_t *)(v17[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v17[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            v11 = (char *)&v14 + 3;
            g4_std::string::Rep::M_destroy(v10);
          }
        }
        break;
      case 2:
        sub_4BFF00(v15, dword_2119A94, dword_2119AE0, 1, 1, a2, a3);
        break;
      case 0:
        v4 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v12 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v12);
          v4 = v12;
          dword_20D2420 = (int)(uintptr_t)(v12);
        }
        v5 = (uint32_t *)sociallib::ClientSNSInterface::getCurrentActiveRequestState(v4);
        if ( v5 != nullptr )
        {
          g4_std::string::construct_from_cstr(
            (int)(uintptr_t)(&v16),
            "GameAPI Android SNS ERROR: get playing friends data function not implemented.\n",
            (int)(uintptr_t)(&v14));
          GameAPIAndroidGLSocialLib_setErrorForRequest(v5, (int)(uintptr_t)(&v16));
          v6 = (void *)(v16 - 12);
          if ( (uint32_t *)(v16 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
          {
            v11 = (char *)&v14 + 2;
            g4_std::string::Rep::M_destroy(v6);
          }
        }
        break;
      default:
        break;
    }
  }
  result = v3;
  if ( (uint8_t)v3 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20, v11);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_postToWall  (binary VA: 0x143db90)
// Original: GameAPIAndroidGLSocialLib_postToWall
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_postToWall(const char *a1, const char *a2, const char *a3, const char *a4)
{
  int result;
  int v5;
  int v6;
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

  sub_143BBF0();
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
  result = v10[0];
  if ( v10[0] != 0 )
  {
    v5 = G4_VCALL<int>(v10[0], 668, a1);
    v6 = G4_VCALL<int>(v10[0], 668, a2);
    v8 = G4_VCALL<int>(v10[0], 668, a3);
    v7 = G4_VCALL<int>(v10[0], 668, a4);
    sub_4BFF00(v10[0], dword_2119A94, dword_2119AE4, v5, v6, v8, v7);
    G4_VCALL<void>(v10[0], 92, v5);
    G4_VCALL<void>(v10[0], 92, v6);
    G4_VCALL<void>(v10[0], 92, v8);
    result = G4_VCALL<int>(v10[0], 92, v7);
  }
  if ( v9 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_postToFriendsWall  (binary VA: 0x143dd10)
// Original: GameAPIAndroidGLSocialLib_postToFriendsWall
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_postToFriendsWall(const char *a1, const char *a2, const char *a3, const char *a4, const char *a5, const char *a6)
{
  int result;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef char _g4_t_v13;
  typedef int _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (31u + sizeof(_g4_t_v13)) > _g4_s4 ? (31u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v14)) > _g4_s5 ? (44u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 31u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  sub_143BBF0();
  v14[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v14, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v14, 0);
    v13 = 1;
  }
  else
  {
    v13 = 0;
  }
  result = v14[0];
  if ( v14[0] != 0 )
  {
    v7 = G4_VCALL<int>(v14[0], 668, a1);
    v8 = G4_VCALL<int>(v14[0], 668, a2);
    v10 = G4_VCALL<int>(v14[0], 668, a3);
    v11 = G4_VCALL<int>(v14[0], 668, a4);
    v12 = G4_VCALL<int>(v14[0], 668, a5);
    v9 = G4_VCALL<int>(v14[0], 668, a6);
    sub_4BFF00(v14[0], dword_2119A94, dword_2119AE8, v7, v8, v10, v11, v12, v9);
    G4_VCALL<void>(v14[0], 92, v7);
    G4_VCALL<void>(v14[0], 92, v8);
    G4_VCALL<void>(v14[0], 92, v10);
    G4_VCALL<void>(v14[0], 92, v11);
    G4_VCALL<void>(v14[0], 92, v12);
    result = G4_VCALL<int>(v14[0], 92, v9);
  }
  if ( v13 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_postPhotoToWall  (binary VA: 0x143df10)
// Original: GameAPIAndroidGLSocialLib_postPhotoToWall
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_postPhotoToWall(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int v3;
  int result;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  sub_143BBF0();
  v6[0] = 0;
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v6, 65542) == -2 )
  {
    v2 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v6, 0);
  }
  if ( v6[0] != 0 )
  {
    v3 = G4_VCALL<int>(v6[0], 668, *a1);
    v5 = G4_VCALL<int>(v6[0], 668, *a2);
    sub_4BFF00(v6[0], dword_2119A94, dword_2119AEC, v3, v5);
    G4_VCALL<void>(v6[0], 92, v3);
    G4_VCALL<void>(v6[0], 92, v5);
  }
  result = v2;
  if ( (uint8_t)v2 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_sendGameRequestToFriends  (binary VA: 0x143e030)
// Original: GameAPIAndroidGLSocialLib_sendGameRequestToFriends
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_sendGameRequestToFriends(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  int result;
  int v4;
  int v5;
  typedef int _g4_t_v6;
  typedef char _g4_t_v7;
  typedef int _g4_t_v8[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v7)) > _g4_s1 ? (15u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 15u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  sub_143BBF0();
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
  result = v8[0];
  if ( v8[0] != 0 )
  {
    v4 = G4_VCALL<int>(v8[0], 668, *a1);
    v5 = G4_VCALL<int>(v8[0], 668, *a2);
    v6 = G4_VCALL<int>(v8[0], 668, *a3);
    sub_4BFF00(v8[0], dword_2119A94, dword_2119AF0, v4, v5, v6);
    G4_VCALL<void>(v8[0], 92, v4);
    G4_VCALL<void>(v8[0], 92, v5);
    result = G4_VCALL<int>(v8[0], 92, v6);
  }
  if ( v7 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_showPlusOneButton  (binary VA: 0x143e180)
// Original: GameAPIAndroidGLSocialLib_showPlusOneButton
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_showPlusOneButton(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4[4];

  sub_143BBF0();
  v4[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v4, 65542) == -2 )
  {
    v1 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v4, 0);
  }
  else
  {
    v1 = 0;
  }
  if ( v4[0] != 0 )
  {
    v2 = G4_VCALL<int>(v4[0], 668, *a1);
    sub_4BFF00(v4[0], dword_2119A94, dword_2119AF4, v2);
    G4_VCALL<void>(v4[0], 92, v2);
  }
  result = v1;
  if ( (uint8_t)v1 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_showPlusOneButtonWithParams  (binary VA: 0x143e270)
// Original: GameAPIAndroidGLSocialLib_showPlusOneButtonWithParams
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_showPlusOneButtonWithParams(uint32_t *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int result;
  int v8[4];

  sub_143BBF0();
  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    v5 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
  }
  else
  {
    v5 = 0;
  }
  if ( v8[0] != 0 )
  {
    v6 = G4_VCALL<int>(v8[0], 668, *a1);
    sub_4BFF00(v8[0], dword_2119A94, dword_2119AF8, v6, a2, a3, a4, a5);
    G4_VCALL<void>(v8[0], 92, v6);
  }
  result = v5;
  if ( (uint8_t)v5 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameAPIAndroidGLSocialLib_hidePlusOneButton  (binary VA: 0x143e380)
// Original: GameAPIAndroidGLSocialLib_hidePlusOneButton
// ----------------------------------------------------------------------------
int GameAPIAndroidGLSocialLib_hidePlusOneButton()
{
  int v0;
  int result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_143BBF0();
  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) == -2 )
  {
    v0 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  }
  else
  {
    v0 = 0;
  }
  if ( v2 != 0 )
    sub_4BFF00(v2, dword_2119A94, dword_2119AFC);
  result = v0;
  if ( (uint8_t)v0 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: GLSocialLib_OnGameAPIDataLoad  (binary VA: 0x143e440)
// Original: GLSocialLib_OnGameAPIDataLoad
// ----------------------------------------------------------------------------
int GLSocialLib_OnGameAPIDataLoad(char *a1)
{
  sociallib::ClientSNSInterface::Self *v1;
  int result;
  sociallib::ClientSNSInterface::Self *v3;
  void *v4;
  sociallib::ClientSNSInterface::Self *v5;
  size_t v6;
  sociallib::ClientSNSInterface::Self *v7;
  char v8;
  void *v9;
  const Json::Value::Self *v10;
  void *v11;
  size_t v12;
  size_t v13;
  size_t n;
  int v15;
  int v16;
  size_t v17;
  size_t v18;
  int v19;
  int v20;
  void *v21;
  void *v22;
  uint32_t *v23;
  void *v24;
  uint32_t *v25;
  uint32_t *v26;
  int *kk;
  uint32_t *v28;
  int *mm;
  size_t v30;
  int nn;
  int v32;
  uint32_t *v33;
  size_t v34;
  size_t v35;
  int v36;
  uint32_t *v37;
  size_t v38;
  int v39;
  int v40;
  int v41;
  char *v42;
  void *v43;
  void *v44;
  sociallib::ClientSNSInterface::Self *v45;
  char v46;
  void *v47;
  const Json::Value::Self *v48;
  void *v49;
  void *v50;
  void *v51;
  uint32_t *v52;
  void *v53;
  uint32_t *v54;
  uint32_t *v55;
  int *i;
  uint32_t *v57;
  int *j;
  size_t v59;
  int k;
  int v61;
  uint32_t *v62;
  size_t v63;
  size_t v64;
  int v65;
  uint32_t *v66;
  int v67;
  size_t v68;
  uint32_t *v69;
  int v70;
  int v71;
  char *v72;
  void *v73;
  void *v74;
  sociallib::ClientSNSInterface::Self *v75;
  uint32_t *v76;
  uint32_t *v77;
  uint32_t *v78;
  uint32_t *v79;
  char v80;
  void *v81;
  unsigned int v82;
  int v83;
  const Json::Value::Self *v84;
  Json::Value::Self *v85;
  int v86;
  char *v87;
  void *v88;
  sociallib::ClientSNSInterface::Self *v89;
  void *v90;
  char *v91;
  char *v92;
  uint32_t *v93;
  uint32_t *v94;
  uint32_t *v95;
  int *i1;
  uint32_t *v97;
  int *i2;
  size_t v99;
  int i3;
  int v101;
  uint32_t *v102;
  size_t v103;
  size_t v104;
  int v105;
  uint32_t *v106;
  int v107;
  size_t v108;
  uint32_t *v109;
  int v110;
  int v111;
  char *v112;
  void *v113;
  void *v114;
  uint32_t *v115;
  uint32_t *v116;
  int *m;
  uint32_t *v118;
  int *ii;
  size_t v120;
  int jj;
  int v122;
  uint32_t *v123;
  size_t v124;
  size_t v125;
  int v126;
  uint32_t *v127;
  size_t v128;
  int v129;
  int v130;
  int v131;
  char *v132;
  void *v133;
  void *v134;
  Json::Value::Self *v135;
  int v136;
  uint32_t *v137;
  void *v138;
  void *v139;
  Json::Value::Self *v140;
  int v141;
  uint32_t *v142;
  void *v143;
  void *v144;
  Json::Value::Self *v145;
  int v146;
  uint32_t *v147;
  void *v148;
  void *v149;
  Json::Value::Self *v150;
  int v151;
  uint32_t *v152;
  void *v153;
  void *v154;
  Json::Value::Self *v155;
  int v156;
  uint32_t *v157;
  void *v158;
  void *v159;
  Json::Value::Self *v160;
  int v161;
  uint32_t *v162;
  void *v163;
  void *v164;
  Json::Value::Self *v165;
  int v166;
  uint32_t *v167;
  void *v168;
  void *v169;
  Json::Value::Self *v170;
  int v171;
  uint32_t *v172;
  void *v173;
  void *v174;
  char *v175;
  unsigned int v176;
  char *v177;
  Json::Value::Self *v178;
  uint32_t *v179;
  uint32_t *v180;
  uint32_t *v181;
  int v182;
  char *v183;
  uint32_t *v184;
  void *v185;
  volatile int32_t *v186;
  uint32_t *v187;
  Json::Value::Self *v188;
  Json::Value::Self *v189;
  uint32_t *v190;
  void *v191;
  Json::Value::Self *v192;
  Json::Value::Self *v193;
  uint32_t *v194;
  void *v195;
  char *v196;
  int v197;
  int v198;
  char *v199;
  uint32_t *v200;
  void *v201;
  Json::Value::Self *v202;
  uint32_t *v203;
  Json::Value::Self *v204;
  uint32_t *v205;
  char *v206;
  int v207;
  char *v208;
  char *v209;
  void *v210;
  void *v211;
  void *v212;
  void *v213;
  typedef char *_g4_t_s;
  typedef char *_g4_t_sa;
  typedef char *_g4_t_s2;
  typedef char *_g4_t_s2a;
  typedef size_t _g4_t_v218;
  typedef size_t _g4_t_v219;
  typedef int _g4_t_v220;
  typedef int _g4_t_v221;
  typedef int _g4_t_v222;
  typedef int _g4_t_v223;
  typedef char *_g4_t_v224;
  typedef char _g4_t_v225;
  typedef char _g4_t_v226;
  typedef char _g4_t_v227;
  typedef char *_g4_t_s1;
  typedef char _g4_t_s1a;
  typedef char _g4_t_s1b;
  typedef uint32_t *_g4_t_s1c;
  typedef char _g4_t_s1d;
  typedef char _g4_t_s1e;
  typedef char *_g4_t_s1f;
  typedef char *_g4_t_s1g;
  typedef Json::Value::Self *_g4_t_v236;
  typedef Json::Value::Self *_g4_t_v237;
  typedef Json::Value::Self *_g4_t_v238;
  typedef Json::Value::Self *_g4_t_v239;
  typedef int _g4_t_v240;
  typedef signed int _g4_t_v241;
  typedef Json::Value::Self *_g4_t_v242;
  typedef Json::Value::Self *_g4_t_v243;
  typedef Json::Value::Self *_g4_t_v244;
  typedef Json::Value::Self *_g4_t_v245;
  typedef size_t _g4_t_v246;
  typedef unsigned int _g4_t_v247;
  typedef unsigned int _g4_t_v248;
  typedef size_t _g4_t_v249;
  typedef char _g4_t_v250;
  typedef char _g4_t_v251;
  typedef int _g4_t_v252;
  typedef int _g4_t_v253;
  typedef int _g4_t_v254[4];
  typedef int _g4_t_v255;
  typedef int _g4_t_v256;
  typedef int _g4_t_v257;
  typedef int _g4_t_v258;
  typedef int _g4_t_v259;
  typedef int _g4_t_v260;
  typedef int _g4_t_v261;
  typedef int _g4_t_v262;
  typedef int _g4_t_v263;
  typedef int _g4_t_v264;
  typedef int _g4_t_v265;
  typedef int _g4_t_v266;
  typedef int _g4_t_v267;
  typedef int _g4_t_v268;
  typedef int _g4_t_v269;
  typedef int _g4_t_v270;
  typedef int _g4_t_v271;
  typedef int _g4_t_v272;
  typedef int _g4_t_v273;
  typedef int _g4_t_v274;
  typedef int _g4_t_v275;
  typedef int _g4_t_v276;
  typedef int _g4_t_v277;
  typedef int _g4_t_v278;
  typedef int _g4_t_v279;
  typedef int _g4_t_v280;
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
  typedef int _g4_t_v296;
  typedef int _g4_t_v297;
  typedef int _g4_t_v298;
  typedef int _g4_t_v299;
  typedef int _g4_t_v300;
  typedef int _g4_t_v301;
  typedef int _g4_t_v302;
  typedef int _g4_t_v303;
  typedef int _g4_t_v304;
  typedef int _g4_t_v305;
  typedef int _g4_t_v306;
  typedef uint32_t *_g4_t_v307;
  typedef volatile int32_t *_g4_t_v308;
  typedef int _g4_t_v309;
  typedef uint8_t _g4_t_v310[16];
  typedef void *_g4_t_v311;
  typedef char *_g4_t_v312;
  typedef char *_g4_t_v313;
  typedef uint8_t _g4_t_v314[20];
  typedef uint8_t _g4_t_v315[20];
  typedef int _g4_t_v316;
  typedef int _g4_t_v317;
  typedef void *_g4_t_v318;
  typedef int *_g4_t_v319;
  typedef int *_g4_t_v320;
  typedef int _g4_t_v321;
  typedef int _g4_t_v322[2];
  typedef void *_g4_t_v323;
  typedef int _g4_t_v324;
  typedef char _g4_t_v325;
  typedef uint8_t _g4_t_v326[20];
  typedef int _g4_t_v327[2];
  typedef void *_g4_t_v328;
  typedef int _g4_t_v329;
  typedef char _g4_t_v330;
  typedef uint8_t _g4_t_v331[20];
  typedef int _g4_t_v332[2];
  typedef void *_g4_t_v333;
  typedef int _g4_t_v334;
  typedef char _g4_t_v335;
  typedef uint8_t _g4_t_v336[20];
  typedef int _g4_t_v337[2];
  typedef void *_g4_t_v338;
  typedef int _g4_t_v339;
  typedef char _g4_t_v340;
  typedef uint8_t _g4_t_v341[20];
  typedef int _g4_t_v342;
  typedef int _g4_t_v343;
  typedef int _g4_t_v344;
  typedef void *_g4_t_v345;
  typedef int *_g4_t_v346;
  typedef int *_g4_t_v347;
  typedef int _g4_t_v348;
  typedef char _g4_t_v349;
  typedef uint8_t _g4_t_v350[20];
  typedef Json::Value::Self *_g4_t_v351;
  typedef int _g4_t_v352;
  typedef int _g4_t_v353;
  typedef void *_g4_t_v354;
  typedef int *_g4_t_v355;
  typedef int *_g4_t_v356;
  typedef int _g4_t_v357;
  typedef char _g4_t_v358;
  typedef uint8_t _g4_t_v359[20];
  typedef int _g4_t_v360;
  typedef int _g4_t_v361;
  typedef int _g4_t_v362;
  typedef void *_g4_t_v363;
  typedef int *_g4_t_v364;
  typedef int *_g4_t_v365;
  typedef int _g4_t_v366;
  typedef char _g4_t_v367;
  typedef uint8_t _g4_t_v368[20];
  typedef Json::Value::Self *_g4_t_v369;
  typedef int _g4_t_v370;
  typedef int _g4_t_v371;
  typedef void *_g4_t_v372;
  typedef int *_g4_t_v373;
  typedef int *_g4_t_v374;
  typedef int _g4_t_v375;
  typedef char _g4_t_v376;
  typedef uint8_t _g4_t_v377[20];
  typedef int _g4_t_v378;
  typedef int _g4_t_v379;
  typedef int _g4_t_v380;
  typedef void *_g4_t_v381;
  typedef int *_g4_t_v382;
  typedef int *_g4_t_v383;
  typedef int _g4_t_v384;
  typedef char _g4_t_v385;
  typedef uint8_t _g4_t_v386[20];
  typedef Json::Value::Self *_g4_t_v387;
  typedef int _g4_t_v388;
  typedef int _g4_t_v389;
  typedef void *_g4_t_v390;
  typedef int *_g4_t_v391;
  typedef int *_g4_t_v392;
  typedef int _g4_t_v393;
  typedef char _g4_t_v394;
  typedef uint8_t _g4_t_v395[20];
  typedef int _g4_t_v396;
  typedef int _g4_t_v397;
  typedef int _g4_t_v398;
  typedef void *_g4_t_v399;
  typedef int *_g4_t_v400;
  typedef int *_g4_t_v401;
  typedef int _g4_t_v402;
  typedef char _g4_t_v403;
  typedef uint8_t _g4_t_v404[20];
  typedef Json::Value::Self *_g4_t_v405;
  typedef int _g4_t_v406;
  typedef int _g4_t_v407;
  typedef void *_g4_t_v408;
  typedef int *_g4_t_v409;
  typedef int *_g4_t_v410;
  typedef int _g4_t_v411;
  typedef char _g4_t_v412;
  typedef uint8_t _g4_t_v413[20];
  typedef int _g4_t_v414[35];
  enum : size_t {
    _g4_s0 = 1312u,
    _g4_s1 = (0u + sizeof(_g4_t_s)) > _g4_s0 ? (0u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_sa)) > _g4_s1 ? (0u + sizeof(_g4_t_sa)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_s2)) > _g4_s2 ? (4u + sizeof(_g4_t_s2)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_s2a)) > _g4_s3 ? (4u + sizeof(_g4_t_s2a)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v218)) > _g4_s4 ? (36u + sizeof(_g4_t_v218)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v219)) > _g4_s5 ? (36u + sizeof(_g4_t_v219)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v220)) > _g4_s6 ? (44u + sizeof(_g4_t_v220)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v221)) > _g4_s7 ? (44u + sizeof(_g4_t_v221)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v222)) > _g4_s8 ? (44u + sizeof(_g4_t_v222)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v223)) > _g4_s9 ? (44u + sizeof(_g4_t_v223)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v224)) > _g4_s10 ? (44u + sizeof(_g4_t_v224)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v225)) > _g4_s11 ? (44u + sizeof(_g4_t_v225)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v226)) > _g4_s12 ? (44u + sizeof(_g4_t_v226)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v227)) > _g4_s13 ? (44u + sizeof(_g4_t_v227)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_s1)) > _g4_s14 ? (48u + sizeof(_g4_t_s1)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_s1a)) > _g4_s15 ? (48u + sizeof(_g4_t_s1a)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_s1b)) > _g4_s16 ? (48u + sizeof(_g4_t_s1b)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_s1c)) > _g4_s17 ? (48u + sizeof(_g4_t_s1c)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_s1d)) > _g4_s18 ? (48u + sizeof(_g4_t_s1d)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_s1e)) > _g4_s19 ? (48u + sizeof(_g4_t_s1e)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_s1f)) > _g4_s20 ? (48u + sizeof(_g4_t_s1f)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_s1g)) > _g4_s21 ? (48u + sizeof(_g4_t_s1g)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v236)) > _g4_s22 ? (52u + sizeof(_g4_t_v236)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v237)) > _g4_s23 ? (52u + sizeof(_g4_t_v237)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v238)) > _g4_s24 ? (52u + sizeof(_g4_t_v238)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v239)) > _g4_s25 ? (52u + sizeof(_g4_t_v239)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v240)) > _g4_s26 ? (56u + sizeof(_g4_t_v240)) : _g4_s26,
    _g4_s28 = (60u + sizeof(_g4_t_v241)) > _g4_s27 ? (60u + sizeof(_g4_t_v241)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v242)) > _g4_s28 ? (64u + sizeof(_g4_t_v242)) : _g4_s28,
    _g4_s30 = (64u + sizeof(_g4_t_v243)) > _g4_s29 ? (64u + sizeof(_g4_t_v243)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v244)) > _g4_s30 ? (64u + sizeof(_g4_t_v244)) : _g4_s30,
    _g4_s32 = (64u + sizeof(_g4_t_v245)) > _g4_s31 ? (64u + sizeof(_g4_t_v245)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v246)) > _g4_s32 ? (72u + sizeof(_g4_t_v246)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v247)) > _g4_s33 ? (76u + sizeof(_g4_t_v247)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v248)) > _g4_s34 ? (76u + sizeof(_g4_t_v248)) : _g4_s34,
    _g4_s36 = (84u + sizeof(_g4_t_v249)) > _g4_s35 ? (84u + sizeof(_g4_t_v249)) : _g4_s35,
    _g4_s37 = (95u + sizeof(_g4_t_v250)) > _g4_s36 ? (95u + sizeof(_g4_t_v250)) : _g4_s36,
    _g4_s38 = (95u + sizeof(_g4_t_v251)) > _g4_s37 ? (95u + sizeof(_g4_t_v251)) : _g4_s37,
    _g4_s39 = (104u + sizeof(_g4_t_v252)) > _g4_s38 ? (104u + sizeof(_g4_t_v252)) : _g4_s38,
    _g4_s40 = (104u + sizeof(_g4_t_v253)) > _g4_s39 ? (104u + sizeof(_g4_t_v253)) : _g4_s39,
    _g4_s41 = (108u + sizeof(_g4_t_v254)) > _g4_s40 ? (108u + sizeof(_g4_t_v254)) : _g4_s40,
    _g4_s42 = (127u + sizeof(_g4_t_v255)) > _g4_s41 ? (127u + sizeof(_g4_t_v255)) : _g4_s41,
    _g4_s43 = (128u + sizeof(_g4_t_v256)) > _g4_s42 ? (128u + sizeof(_g4_t_v256)) : _g4_s42,
    _g4_s44 = (132u + sizeof(_g4_t_v257)) > _g4_s43 ? (132u + sizeof(_g4_t_v257)) : _g4_s43,
    _g4_s45 = (136u + sizeof(_g4_t_v258)) > _g4_s44 ? (136u + sizeof(_g4_t_v258)) : _g4_s44,
    _g4_s46 = (140u + sizeof(_g4_t_v259)) > _g4_s45 ? (140u + sizeof(_g4_t_v259)) : _g4_s45,
    _g4_s47 = (144u + sizeof(_g4_t_v260)) > _g4_s46 ? (144u + sizeof(_g4_t_v260)) : _g4_s46,
    _g4_s48 = (148u + sizeof(_g4_t_v261)) > _g4_s47 ? (148u + sizeof(_g4_t_v261)) : _g4_s47,
    _g4_s49 = (152u + sizeof(_g4_t_v262)) > _g4_s48 ? (152u + sizeof(_g4_t_v262)) : _g4_s48,
    _g4_s50 = (156u + sizeof(_g4_t_v263)) > _g4_s49 ? (156u + sizeof(_g4_t_v263)) : _g4_s49,
    _g4_s51 = (160u + sizeof(_g4_t_v264)) > _g4_s50 ? (160u + sizeof(_g4_t_v264)) : _g4_s50,
    _g4_s52 = (220u + sizeof(_g4_t_v265)) > _g4_s51 ? (220u + sizeof(_g4_t_v265)) : _g4_s51,
    _g4_s53 = (224u + sizeof(_g4_t_v266)) > _g4_s52 ? (224u + sizeof(_g4_t_v266)) : _g4_s52,
    _g4_s54 = (228u + sizeof(_g4_t_v267)) > _g4_s53 ? (228u + sizeof(_g4_t_v267)) : _g4_s53,
    _g4_s55 = (232u + sizeof(_g4_t_v268)) > _g4_s54 ? (232u + sizeof(_g4_t_v268)) : _g4_s54,
    _g4_s56 = (236u + sizeof(_g4_t_v269)) > _g4_s55 ? (236u + sizeof(_g4_t_v269)) : _g4_s55,
    _g4_s57 = (240u + sizeof(_g4_t_v270)) > _g4_s56 ? (240u + sizeof(_g4_t_v270)) : _g4_s56,
    _g4_s58 = (244u + sizeof(_g4_t_v271)) > _g4_s57 ? (244u + sizeof(_g4_t_v271)) : _g4_s57,
    _g4_s59 = (248u + sizeof(_g4_t_v272)) > _g4_s58 ? (248u + sizeof(_g4_t_v272)) : _g4_s58,
    _g4_s60 = (252u + sizeof(_g4_t_v273)) > _g4_s59 ? (252u + sizeof(_g4_t_v273)) : _g4_s59,
    _g4_s61 = (256u + sizeof(_g4_t_v274)) > _g4_s60 ? (256u + sizeof(_g4_t_v274)) : _g4_s60,
    _g4_s62 = (260u + sizeof(_g4_t_v275)) > _g4_s61 ? (260u + sizeof(_g4_t_v275)) : _g4_s61,
    _g4_s63 = (264u + sizeof(_g4_t_v276)) > _g4_s62 ? (264u + sizeof(_g4_t_v276)) : _g4_s62,
    _g4_s64 = (268u + sizeof(_g4_t_v277)) > _g4_s63 ? (268u + sizeof(_g4_t_v277)) : _g4_s63,
    _g4_s65 = (272u + sizeof(_g4_t_v278)) > _g4_s64 ? (272u + sizeof(_g4_t_v278)) : _g4_s64,
    _g4_s66 = (276u + sizeof(_g4_t_v279)) > _g4_s65 ? (276u + sizeof(_g4_t_v279)) : _g4_s65,
    _g4_s67 = (280u + sizeof(_g4_t_v280)) > _g4_s66 ? (280u + sizeof(_g4_t_v280)) : _g4_s66,
    _g4_s68 = (284u + sizeof(_g4_t_v281)) > _g4_s67 ? (284u + sizeof(_g4_t_v281)) : _g4_s67,
    _g4_s69 = (288u + sizeof(_g4_t_v282)) > _g4_s68 ? (288u + sizeof(_g4_t_v282)) : _g4_s68,
    _g4_s70 = (292u + sizeof(_g4_t_v283)) > _g4_s69 ? (292u + sizeof(_g4_t_v283)) : _g4_s69,
    _g4_s71 = (296u + sizeof(_g4_t_v284)) > _g4_s70 ? (296u + sizeof(_g4_t_v284)) : _g4_s70,
    _g4_s72 = (300u + sizeof(_g4_t_v285)) > _g4_s71 ? (300u + sizeof(_g4_t_v285)) : _g4_s71,
    _g4_s73 = (304u + sizeof(_g4_t_v286)) > _g4_s72 ? (304u + sizeof(_g4_t_v286)) : _g4_s72,
    _g4_s74 = (308u + sizeof(_g4_t_v287)) > _g4_s73 ? (308u + sizeof(_g4_t_v287)) : _g4_s73,
    _g4_s75 = (312u + sizeof(_g4_t_v288)) > _g4_s74 ? (312u + sizeof(_g4_t_v288)) : _g4_s74,
    _g4_s76 = (316u + sizeof(_g4_t_v289)) > _g4_s75 ? (316u + sizeof(_g4_t_v289)) : _g4_s75,
    _g4_s77 = (320u + sizeof(_g4_t_v290)) > _g4_s76 ? (320u + sizeof(_g4_t_v290)) : _g4_s76,
    _g4_s78 = (324u + sizeof(_g4_t_v291)) > _g4_s77 ? (324u + sizeof(_g4_t_v291)) : _g4_s77,
    _g4_s79 = (328u + sizeof(_g4_t_v292)) > _g4_s78 ? (328u + sizeof(_g4_t_v292)) : _g4_s78,
    _g4_s80 = (332u + sizeof(_g4_t_v293)) > _g4_s79 ? (332u + sizeof(_g4_t_v293)) : _g4_s79,
    _g4_s81 = (336u + sizeof(_g4_t_v294)) > _g4_s80 ? (336u + sizeof(_g4_t_v294)) : _g4_s80,
    _g4_s82 = (340u + sizeof(_g4_t_v295)) > _g4_s81 ? (340u + sizeof(_g4_t_v295)) : _g4_s81,
    _g4_s83 = (344u + sizeof(_g4_t_v296)) > _g4_s82 ? (344u + sizeof(_g4_t_v296)) : _g4_s82,
    _g4_s84 = (348u + sizeof(_g4_t_v297)) > _g4_s83 ? (348u + sizeof(_g4_t_v297)) : _g4_s83,
    _g4_s85 = (352u + sizeof(_g4_t_v298)) > _g4_s84 ? (352u + sizeof(_g4_t_v298)) : _g4_s84,
    _g4_s86 = (356u + sizeof(_g4_t_v299)) > _g4_s85 ? (356u + sizeof(_g4_t_v299)) : _g4_s85,
    _g4_s87 = (360u + sizeof(_g4_t_v300)) > _g4_s86 ? (360u + sizeof(_g4_t_v300)) : _g4_s86,
    _g4_s88 = (364u + sizeof(_g4_t_v301)) > _g4_s87 ? (364u + sizeof(_g4_t_v301)) : _g4_s87,
    _g4_s89 = (368u + sizeof(_g4_t_v302)) > _g4_s88 ? (368u + sizeof(_g4_t_v302)) : _g4_s88,
    _g4_s90 = (372u + sizeof(_g4_t_v303)) > _g4_s89 ? (372u + sizeof(_g4_t_v303)) : _g4_s89,
    _g4_s91 = (376u + sizeof(_g4_t_v304)) > _g4_s90 ? (376u + sizeof(_g4_t_v304)) : _g4_s90,
    _g4_s92 = (380u + sizeof(_g4_t_v305)) > _g4_s91 ? (380u + sizeof(_g4_t_v305)) : _g4_s91,
    _g4_s93 = (384u + sizeof(_g4_t_v306)) > _g4_s92 ? (384u + sizeof(_g4_t_v306)) : _g4_s92,
    _g4_s94 = (388u + sizeof(_g4_t_v307)) > _g4_s93 ? (388u + sizeof(_g4_t_v307)) : _g4_s93,
    _g4_s95 = (392u + sizeof(_g4_t_v308)) > _g4_s94 ? (392u + sizeof(_g4_t_v308)) : _g4_s94,
    _g4_s96 = (396u + sizeof(_g4_t_v309)) > _g4_s95 ? (396u + sizeof(_g4_t_v309)) : _g4_s95,
    _g4_s97 = (400u + sizeof(_g4_t_v310)) > _g4_s96 ? (400u + sizeof(_g4_t_v310)) : _g4_s96,
    _g4_s98 = (416u + sizeof(_g4_t_v311)) > _g4_s97 ? (416u + sizeof(_g4_t_v311)) : _g4_s97,
    _g4_s99 = (420u + sizeof(_g4_t_v312)) > _g4_s98 ? (420u + sizeof(_g4_t_v312)) : _g4_s98,
    _g4_s100 = (424u + sizeof(_g4_t_v313)) > _g4_s99 ? (424u + sizeof(_g4_t_v313)) : _g4_s99,
    _g4_s101 = (432u + sizeof(_g4_t_v314)) > _g4_s100 ? (432u + sizeof(_g4_t_v314)) : _g4_s100,
    _g4_s102 = (452u + sizeof(_g4_t_v315)) > _g4_s101 ? (452u + sizeof(_g4_t_v315)) : _g4_s101,
    _g4_s103 = (472u + sizeof(_g4_t_v316)) > _g4_s102 ? (472u + sizeof(_g4_t_v316)) : _g4_s102,
    _g4_s104 = (476u + sizeof(_g4_t_v317)) > _g4_s103 ? (476u + sizeof(_g4_t_v317)) : _g4_s103,
    _g4_s105 = (480u + sizeof(_g4_t_v318)) > _g4_s104 ? (480u + sizeof(_g4_t_v318)) : _g4_s104,
    _g4_s106 = (484u + sizeof(_g4_t_v319)) > _g4_s105 ? (484u + sizeof(_g4_t_v319)) : _g4_s105,
    _g4_s107 = (488u + sizeof(_g4_t_v320)) > _g4_s106 ? (488u + sizeof(_g4_t_v320)) : _g4_s106,
    _g4_s108 = (492u + sizeof(_g4_t_v321)) > _g4_s107 ? (492u + sizeof(_g4_t_v321)) : _g4_s107,
    _g4_s109 = (496u + sizeof(_g4_t_v322)) > _g4_s108 ? (496u + sizeof(_g4_t_v322)) : _g4_s108,
    _g4_s110 = (504u + sizeof(_g4_t_v323)) > _g4_s109 ? (504u + sizeof(_g4_t_v323)) : _g4_s109,
    _g4_s111 = (516u + sizeof(_g4_t_v324)) > _g4_s110 ? (516u + sizeof(_g4_t_v324)) : _g4_s110,
    _g4_s112 = (520u + sizeof(_g4_t_v325)) > _g4_s111 ? (520u + sizeof(_g4_t_v325)) : _g4_s111,
    _g4_s113 = (524u + sizeof(_g4_t_v326)) > _g4_s112 ? (524u + sizeof(_g4_t_v326)) : _g4_s112,
    _g4_s114 = (544u + sizeof(_g4_t_v327)) > _g4_s113 ? (544u + sizeof(_g4_t_v327)) : _g4_s113,
    _g4_s115 = (552u + sizeof(_g4_t_v328)) > _g4_s114 ? (552u + sizeof(_g4_t_v328)) : _g4_s114,
    _g4_s116 = (564u + sizeof(_g4_t_v329)) > _g4_s115 ? (564u + sizeof(_g4_t_v329)) : _g4_s115,
    _g4_s117 = (568u + sizeof(_g4_t_v330)) > _g4_s116 ? (568u + sizeof(_g4_t_v330)) : _g4_s116,
    _g4_s118 = (572u + sizeof(_g4_t_v331)) > _g4_s117 ? (572u + sizeof(_g4_t_v331)) : _g4_s117,
    _g4_s119 = (592u + sizeof(_g4_t_v332)) > _g4_s118 ? (592u + sizeof(_g4_t_v332)) : _g4_s118,
    _g4_s120 = (600u + sizeof(_g4_t_v333)) > _g4_s119 ? (600u + sizeof(_g4_t_v333)) : _g4_s119,
    _g4_s121 = (612u + sizeof(_g4_t_v334)) > _g4_s120 ? (612u + sizeof(_g4_t_v334)) : _g4_s120,
    _g4_s122 = (616u + sizeof(_g4_t_v335)) > _g4_s121 ? (616u + sizeof(_g4_t_v335)) : _g4_s121,
    _g4_s123 = (620u + sizeof(_g4_t_v336)) > _g4_s122 ? (620u + sizeof(_g4_t_v336)) : _g4_s122,
    _g4_s124 = (640u + sizeof(_g4_t_v337)) > _g4_s123 ? (640u + sizeof(_g4_t_v337)) : _g4_s123,
    _g4_s125 = (648u + sizeof(_g4_t_v338)) > _g4_s124 ? (648u + sizeof(_g4_t_v338)) : _g4_s124,
    _g4_s126 = (660u + sizeof(_g4_t_v339)) > _g4_s125 ? (660u + sizeof(_g4_t_v339)) : _g4_s125,
    _g4_s127 = (664u + sizeof(_g4_t_v340)) > _g4_s126 ? (664u + sizeof(_g4_t_v340)) : _g4_s126,
    _g4_s128 = (668u + sizeof(_g4_t_v341)) > _g4_s127 ? (668u + sizeof(_g4_t_v341)) : _g4_s127,
    _g4_s129 = (688u + sizeof(_g4_t_v342)) > _g4_s128 ? (688u + sizeof(_g4_t_v342)) : _g4_s128,
    _g4_s130 = (692u + sizeof(_g4_t_v343)) > _g4_s129 ? (692u + sizeof(_g4_t_v343)) : _g4_s129,
    _g4_s131 = (696u + sizeof(_g4_t_v344)) > _g4_s130 ? (696u + sizeof(_g4_t_v344)) : _g4_s130,
    _g4_s132 = (700u + sizeof(_g4_t_v345)) > _g4_s131 ? (700u + sizeof(_g4_t_v345)) : _g4_s131,
    _g4_s133 = (704u + sizeof(_g4_t_v346)) > _g4_s132 ? (704u + sizeof(_g4_t_v346)) : _g4_s132,
    _g4_s134 = (708u + sizeof(_g4_t_v347)) > _g4_s133 ? (708u + sizeof(_g4_t_v347)) : _g4_s133,
    _g4_s135 = (712u + sizeof(_g4_t_v348)) > _g4_s134 ? (712u + sizeof(_g4_t_v348)) : _g4_s134,
    _g4_s136 = (716u + sizeof(_g4_t_v349)) > _g4_s135 ? (716u + sizeof(_g4_t_v349)) : _g4_s135,
    _g4_s137 = (720u + sizeof(_g4_t_v350)) > _g4_s136 ? (720u + sizeof(_g4_t_v350)) : _g4_s136,
    _g4_s138 = (740u + sizeof(_g4_t_v351)) > _g4_s137 ? (740u + sizeof(_g4_t_v351)) : _g4_s137,
    _g4_s139 = (744u + sizeof(_g4_t_v352)) > _g4_s138 ? (744u + sizeof(_g4_t_v352)) : _g4_s138,
    _g4_s140 = (748u + sizeof(_g4_t_v353)) > _g4_s139 ? (748u + sizeof(_g4_t_v353)) : _g4_s139,
    _g4_s141 = (752u + sizeof(_g4_t_v354)) > _g4_s140 ? (752u + sizeof(_g4_t_v354)) : _g4_s140,
    _g4_s142 = (756u + sizeof(_g4_t_v355)) > _g4_s141 ? (756u + sizeof(_g4_t_v355)) : _g4_s141,
    _g4_s143 = (760u + sizeof(_g4_t_v356)) > _g4_s142 ? (760u + sizeof(_g4_t_v356)) : _g4_s142,
    _g4_s144 = (764u + sizeof(_g4_t_v357)) > _g4_s143 ? (764u + sizeof(_g4_t_v357)) : _g4_s143,
    _g4_s145 = (768u + sizeof(_g4_t_v358)) > _g4_s144 ? (768u + sizeof(_g4_t_v358)) : _g4_s144,
    _g4_s146 = (772u + sizeof(_g4_t_v359)) > _g4_s145 ? (772u + sizeof(_g4_t_v359)) : _g4_s145,
    _g4_s147 = (792u + sizeof(_g4_t_v360)) > _g4_s146 ? (792u + sizeof(_g4_t_v360)) : _g4_s146,
    _g4_s148 = (796u + sizeof(_g4_t_v361)) > _g4_s147 ? (796u + sizeof(_g4_t_v361)) : _g4_s147,
    _g4_s149 = (800u + sizeof(_g4_t_v362)) > _g4_s148 ? (800u + sizeof(_g4_t_v362)) : _g4_s148,
    _g4_s150 = (804u + sizeof(_g4_t_v363)) > _g4_s149 ? (804u + sizeof(_g4_t_v363)) : _g4_s149,
    _g4_s151 = (808u + sizeof(_g4_t_v364)) > _g4_s150 ? (808u + sizeof(_g4_t_v364)) : _g4_s150,
    _g4_s152 = (812u + sizeof(_g4_t_v365)) > _g4_s151 ? (812u + sizeof(_g4_t_v365)) : _g4_s151,
    _g4_s153 = (816u + sizeof(_g4_t_v366)) > _g4_s152 ? (816u + sizeof(_g4_t_v366)) : _g4_s152,
    _g4_s154 = (820u + sizeof(_g4_t_v367)) > _g4_s153 ? (820u + sizeof(_g4_t_v367)) : _g4_s153,
    _g4_s155 = (824u + sizeof(_g4_t_v368)) > _g4_s154 ? (824u + sizeof(_g4_t_v368)) : _g4_s154,
    _g4_s156 = (844u + sizeof(_g4_t_v369)) > _g4_s155 ? (844u + sizeof(_g4_t_v369)) : _g4_s155,
    _g4_s157 = (848u + sizeof(_g4_t_v370)) > _g4_s156 ? (848u + sizeof(_g4_t_v370)) : _g4_s156,
    _g4_s158 = (852u + sizeof(_g4_t_v371)) > _g4_s157 ? (852u + sizeof(_g4_t_v371)) : _g4_s157,
    _g4_s159 = (856u + sizeof(_g4_t_v372)) > _g4_s158 ? (856u + sizeof(_g4_t_v372)) : _g4_s158,
    _g4_s160 = (860u + sizeof(_g4_t_v373)) > _g4_s159 ? (860u + sizeof(_g4_t_v373)) : _g4_s159,
    _g4_s161 = (864u + sizeof(_g4_t_v374)) > _g4_s160 ? (864u + sizeof(_g4_t_v374)) : _g4_s160,
    _g4_s162 = (868u + sizeof(_g4_t_v375)) > _g4_s161 ? (868u + sizeof(_g4_t_v375)) : _g4_s161,
    _g4_s163 = (872u + sizeof(_g4_t_v376)) > _g4_s162 ? (872u + sizeof(_g4_t_v376)) : _g4_s162,
    _g4_s164 = (876u + sizeof(_g4_t_v377)) > _g4_s163 ? (876u + sizeof(_g4_t_v377)) : _g4_s163,
    _g4_s165 = (896u + sizeof(_g4_t_v378)) > _g4_s164 ? (896u + sizeof(_g4_t_v378)) : _g4_s164,
    _g4_s166 = (900u + sizeof(_g4_t_v379)) > _g4_s165 ? (900u + sizeof(_g4_t_v379)) : _g4_s165,
    _g4_s167 = (904u + sizeof(_g4_t_v380)) > _g4_s166 ? (904u + sizeof(_g4_t_v380)) : _g4_s166,
    _g4_s168 = (908u + sizeof(_g4_t_v381)) > _g4_s167 ? (908u + sizeof(_g4_t_v381)) : _g4_s167,
    _g4_s169 = (912u + sizeof(_g4_t_v382)) > _g4_s168 ? (912u + sizeof(_g4_t_v382)) : _g4_s168,
    _g4_s170 = (916u + sizeof(_g4_t_v383)) > _g4_s169 ? (916u + sizeof(_g4_t_v383)) : _g4_s169,
    _g4_s171 = (920u + sizeof(_g4_t_v384)) > _g4_s170 ? (920u + sizeof(_g4_t_v384)) : _g4_s170,
    _g4_s172 = (924u + sizeof(_g4_t_v385)) > _g4_s171 ? (924u + sizeof(_g4_t_v385)) : _g4_s171,
    _g4_s173 = (928u + sizeof(_g4_t_v386)) > _g4_s172 ? (928u + sizeof(_g4_t_v386)) : _g4_s172,
    _g4_s174 = (948u + sizeof(_g4_t_v387)) > _g4_s173 ? (948u + sizeof(_g4_t_v387)) : _g4_s173,
    _g4_s175 = (952u + sizeof(_g4_t_v388)) > _g4_s174 ? (952u + sizeof(_g4_t_v388)) : _g4_s174,
    _g4_s176 = (956u + sizeof(_g4_t_v389)) > _g4_s175 ? (956u + sizeof(_g4_t_v389)) : _g4_s175,
    _g4_s177 = (960u + sizeof(_g4_t_v390)) > _g4_s176 ? (960u + sizeof(_g4_t_v390)) : _g4_s176,
    _g4_s178 = (964u + sizeof(_g4_t_v391)) > _g4_s177 ? (964u + sizeof(_g4_t_v391)) : _g4_s177,
    _g4_s179 = (968u + sizeof(_g4_t_v392)) > _g4_s178 ? (968u + sizeof(_g4_t_v392)) : _g4_s178,
    _g4_s180 = (972u + sizeof(_g4_t_v393)) > _g4_s179 ? (972u + sizeof(_g4_t_v393)) : _g4_s179,
    _g4_s181 = (976u + sizeof(_g4_t_v394)) > _g4_s180 ? (976u + sizeof(_g4_t_v394)) : _g4_s180,
    _g4_s182 = (980u + sizeof(_g4_t_v395)) > _g4_s181 ? (980u + sizeof(_g4_t_v395)) : _g4_s181,
    _g4_s183 = (1000u + sizeof(_g4_t_v396)) > _g4_s182 ? (1000u + sizeof(_g4_t_v396)) : _g4_s182,
    _g4_s184 = (1004u + sizeof(_g4_t_v397)) > _g4_s183 ? (1004u + sizeof(_g4_t_v397)) : _g4_s183,
    _g4_s185 = (1008u + sizeof(_g4_t_v398)) > _g4_s184 ? (1008u + sizeof(_g4_t_v398)) : _g4_s184,
    _g4_s186 = (1012u + sizeof(_g4_t_v399)) > _g4_s185 ? (1012u + sizeof(_g4_t_v399)) : _g4_s185,
    _g4_s187 = (1016u + sizeof(_g4_t_v400)) > _g4_s186 ? (1016u + sizeof(_g4_t_v400)) : _g4_s186,
    _g4_s188 = (1020u + sizeof(_g4_t_v401)) > _g4_s187 ? (1020u + sizeof(_g4_t_v401)) : _g4_s187,
    _g4_s189 = (1024u + sizeof(_g4_t_v402)) > _g4_s188 ? (1024u + sizeof(_g4_t_v402)) : _g4_s188,
    _g4_s190 = (1028u + sizeof(_g4_t_v403)) > _g4_s189 ? (1028u + sizeof(_g4_t_v403)) : _g4_s189,
    _g4_s191 = (1032u + sizeof(_g4_t_v404)) > _g4_s190 ? (1032u + sizeof(_g4_t_v404)) : _g4_s190,
    _g4_s192 = (1052u + sizeof(_g4_t_v405)) > _g4_s191 ? (1052u + sizeof(_g4_t_v405)) : _g4_s191,
    _g4_s193 = (1056u + sizeof(_g4_t_v406)) > _g4_s192 ? (1056u + sizeof(_g4_t_v406)) : _g4_s192,
    _g4_s194 = (1060u + sizeof(_g4_t_v407)) > _g4_s193 ? (1060u + sizeof(_g4_t_v407)) : _g4_s193,
    _g4_s195 = (1064u + sizeof(_g4_t_v408)) > _g4_s194 ? (1064u + sizeof(_g4_t_v408)) : _g4_s194,
    _g4_s196 = (1068u + sizeof(_g4_t_v409)) > _g4_s195 ? (1068u + sizeof(_g4_t_v409)) : _g4_s195,
    _g4_s197 = (1072u + sizeof(_g4_t_v410)) > _g4_s196 ? (1072u + sizeof(_g4_t_v410)) : _g4_s196,
    _g4_s198 = (1076u + sizeof(_g4_t_v411)) > _g4_s197 ? (1076u + sizeof(_g4_t_v411)) : _g4_s197,
    _g4_s199 = (1080u + sizeof(_g4_t_v412)) > _g4_s198 ? (1080u + sizeof(_g4_t_v412)) : _g4_s198,
    _g4_s200 = (1084u + sizeof(_g4_t_v413)) > _g4_s199 ? (1084u + sizeof(_g4_t_v413)) : _g4_s199,
    _g4_s201 = (1104u + sizeof(_g4_t_v414)) > _g4_s200 ? (1104u + sizeof(_g4_t_v414)) : _g4_s200
  };
  alignas(16) uint8_t _g4_sf[_g4_s201];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 0u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 4u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 4u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 36u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 36u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 44u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 44u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 44u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 44u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 44u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 44u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 44u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 44u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 48u);
  _g4_t_s1a &s1a = *reinterpret_cast<_g4_t_s1a *>(_g4_sf + 48u);
  _g4_t_s1b &s1b = *reinterpret_cast<_g4_t_s1b *>(_g4_sf + 48u);
  _g4_t_s1c &s1c = *reinterpret_cast<_g4_t_s1c *>(_g4_sf + 48u);
  _g4_t_s1d &s1d = *reinterpret_cast<_g4_t_s1d *>(_g4_sf + 48u);
  _g4_t_s1e &s1e = *reinterpret_cast<_g4_t_s1e *>(_g4_sf + 48u);
  _g4_t_s1f &s1f = *reinterpret_cast<_g4_t_s1f *>(_g4_sf + 48u);
  _g4_t_s1g &s1g = *reinterpret_cast<_g4_t_s1g *>(_g4_sf + 48u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 52u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 52u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 52u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 52u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 56u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 60u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 64u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 64u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 64u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 64u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 72u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 76u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 76u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 84u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 95u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 95u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 104u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 104u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 108u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 127u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 128u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 132u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 136u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 140u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 144u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 148u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 152u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 156u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 160u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 220u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 224u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 228u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 232u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 236u);
  _g4_t_v270 &v270 = *reinterpret_cast<_g4_t_v270 *>(_g4_sf + 240u);
  _g4_t_v271 &v271 = *reinterpret_cast<_g4_t_v271 *>(_g4_sf + 244u);
  _g4_t_v272 &v272 = *reinterpret_cast<_g4_t_v272 *>(_g4_sf + 248u);
  _g4_t_v273 &v273 = *reinterpret_cast<_g4_t_v273 *>(_g4_sf + 252u);
  _g4_t_v274 &v274 = *reinterpret_cast<_g4_t_v274 *>(_g4_sf + 256u);
  _g4_t_v275 &v275 = *reinterpret_cast<_g4_t_v275 *>(_g4_sf + 260u);
  _g4_t_v276 &v276 = *reinterpret_cast<_g4_t_v276 *>(_g4_sf + 264u);
  _g4_t_v277 &v277 = *reinterpret_cast<_g4_t_v277 *>(_g4_sf + 268u);
  _g4_t_v278 &v278 = *reinterpret_cast<_g4_t_v278 *>(_g4_sf + 272u);
  _g4_t_v279 &v279 = *reinterpret_cast<_g4_t_v279 *>(_g4_sf + 276u);
  _g4_t_v280 &v280 = *reinterpret_cast<_g4_t_v280 *>(_g4_sf + 280u);
  _g4_t_v281 &v281 = *reinterpret_cast<_g4_t_v281 *>(_g4_sf + 284u);
  _g4_t_v282 &v282 = *reinterpret_cast<_g4_t_v282 *>(_g4_sf + 288u);
  _g4_t_v283 &v283 = *reinterpret_cast<_g4_t_v283 *>(_g4_sf + 292u);
  _g4_t_v284 &v284 = *reinterpret_cast<_g4_t_v284 *>(_g4_sf + 296u);
  _g4_t_v285 &v285 = *reinterpret_cast<_g4_t_v285 *>(_g4_sf + 300u);
  _g4_t_v286 &v286 = *reinterpret_cast<_g4_t_v286 *>(_g4_sf + 304u);
  _g4_t_v287 &v287 = *reinterpret_cast<_g4_t_v287 *>(_g4_sf + 308u);
  _g4_t_v288 &v288 = *reinterpret_cast<_g4_t_v288 *>(_g4_sf + 312u);
  _g4_t_v289 &v289 = *reinterpret_cast<_g4_t_v289 *>(_g4_sf + 316u);
  _g4_t_v290 &v290 = *reinterpret_cast<_g4_t_v290 *>(_g4_sf + 320u);
  _g4_t_v291 &v291 = *reinterpret_cast<_g4_t_v291 *>(_g4_sf + 324u);
  _g4_t_v292 &v292 = *reinterpret_cast<_g4_t_v292 *>(_g4_sf + 328u);
  _g4_t_v293 &v293 = *reinterpret_cast<_g4_t_v293 *>(_g4_sf + 332u);
  _g4_t_v294 &v294 = *reinterpret_cast<_g4_t_v294 *>(_g4_sf + 336u);
  _g4_t_v295 &v295 = *reinterpret_cast<_g4_t_v295 *>(_g4_sf + 340u);
  _g4_t_v296 &v296 = *reinterpret_cast<_g4_t_v296 *>(_g4_sf + 344u);
  _g4_t_v297 &v297 = *reinterpret_cast<_g4_t_v297 *>(_g4_sf + 348u);
  _g4_t_v298 &v298 = *reinterpret_cast<_g4_t_v298 *>(_g4_sf + 352u);
  _g4_t_v299 &v299 = *reinterpret_cast<_g4_t_v299 *>(_g4_sf + 356u);
  _g4_t_v300 &v300 = *reinterpret_cast<_g4_t_v300 *>(_g4_sf + 360u);
  _g4_t_v301 &v301 = *reinterpret_cast<_g4_t_v301 *>(_g4_sf + 364u);
  _g4_t_v302 &v302 = *reinterpret_cast<_g4_t_v302 *>(_g4_sf + 368u);
  _g4_t_v303 &v303 = *reinterpret_cast<_g4_t_v303 *>(_g4_sf + 372u);
  _g4_t_v304 &v304 = *reinterpret_cast<_g4_t_v304 *>(_g4_sf + 376u);
  _g4_t_v305 &v305 = *reinterpret_cast<_g4_t_v305 *>(_g4_sf + 380u);
  _g4_t_v306 &v306 = *reinterpret_cast<_g4_t_v306 *>(_g4_sf + 384u);
  _g4_t_v307 &v307 = *reinterpret_cast<_g4_t_v307 *>(_g4_sf + 388u);
  _g4_t_v308 &v308 = *reinterpret_cast<_g4_t_v308 *>(_g4_sf + 392u);
  _g4_t_v309 &v309 = *reinterpret_cast<_g4_t_v309 *>(_g4_sf + 396u);
  _g4_t_v310 &v310 = *reinterpret_cast<_g4_t_v310 *>(_g4_sf + 400u);
  _g4_t_v311 &v311 = *reinterpret_cast<_g4_t_v311 *>(_g4_sf + 416u);
  _g4_t_v312 &v312 = *reinterpret_cast<_g4_t_v312 *>(_g4_sf + 420u);
  _g4_t_v313 &v313 = *reinterpret_cast<_g4_t_v313 *>(_g4_sf + 424u);
  _g4_t_v314 &v314 = *reinterpret_cast<_g4_t_v314 *>(_g4_sf + 432u);
  _g4_t_v315 &v315 = *reinterpret_cast<_g4_t_v315 *>(_g4_sf + 452u);
  _g4_t_v316 &v316 = *reinterpret_cast<_g4_t_v316 *>(_g4_sf + 472u);
  _g4_t_v317 &v317 = *reinterpret_cast<_g4_t_v317 *>(_g4_sf + 476u);
  _g4_t_v318 &v318 = *reinterpret_cast<_g4_t_v318 *>(_g4_sf + 480u);
  _g4_t_v319 &v319 = *reinterpret_cast<_g4_t_v319 *>(_g4_sf + 484u);
  _g4_t_v320 &v320 = *reinterpret_cast<_g4_t_v320 *>(_g4_sf + 488u);
  _g4_t_v321 &v321 = *reinterpret_cast<_g4_t_v321 *>(_g4_sf + 492u);
  _g4_t_v322 &v322 = *reinterpret_cast<_g4_t_v322 *>(_g4_sf + 496u);
  _g4_t_v323 &v323 = *reinterpret_cast<_g4_t_v323 *>(_g4_sf + 504u);
  _g4_t_v324 &v324 = *reinterpret_cast<_g4_t_v324 *>(_g4_sf + 516u);
  _g4_t_v325 &v325 = *reinterpret_cast<_g4_t_v325 *>(_g4_sf + 520u);
  _g4_t_v326 &v326 = *reinterpret_cast<_g4_t_v326 *>(_g4_sf + 524u);
  _g4_t_v327 &v327 = *reinterpret_cast<_g4_t_v327 *>(_g4_sf + 544u);
  _g4_t_v328 &v328 = *reinterpret_cast<_g4_t_v328 *>(_g4_sf + 552u);
  _g4_t_v329 &v329 = *reinterpret_cast<_g4_t_v329 *>(_g4_sf + 564u);
  _g4_t_v330 &v330 = *reinterpret_cast<_g4_t_v330 *>(_g4_sf + 568u);
  _g4_t_v331 &v331 = *reinterpret_cast<_g4_t_v331 *>(_g4_sf + 572u);
  _g4_t_v332 &v332 = *reinterpret_cast<_g4_t_v332 *>(_g4_sf + 592u);
  _g4_t_v333 &v333 = *reinterpret_cast<_g4_t_v333 *>(_g4_sf + 600u);
  _g4_t_v334 &v334 = *reinterpret_cast<_g4_t_v334 *>(_g4_sf + 612u);
  _g4_t_v335 &v335 = *reinterpret_cast<_g4_t_v335 *>(_g4_sf + 616u);
  _g4_t_v336 &v336 = *reinterpret_cast<_g4_t_v336 *>(_g4_sf + 620u);
  _g4_t_v337 &v337 = *reinterpret_cast<_g4_t_v337 *>(_g4_sf + 640u);
  _g4_t_v338 &v338 = *reinterpret_cast<_g4_t_v338 *>(_g4_sf + 648u);
  _g4_t_v339 &v339 = *reinterpret_cast<_g4_t_v339 *>(_g4_sf + 660u);
  _g4_t_v340 &v340 = *reinterpret_cast<_g4_t_v340 *>(_g4_sf + 664u);
  _g4_t_v341 &v341 = *reinterpret_cast<_g4_t_v341 *>(_g4_sf + 668u);
  _g4_t_v342 &v342 = *reinterpret_cast<_g4_t_v342 *>(_g4_sf + 688u);
  _g4_t_v343 &v343 = *reinterpret_cast<_g4_t_v343 *>(_g4_sf + 692u);
  _g4_t_v344 &v344 = *reinterpret_cast<_g4_t_v344 *>(_g4_sf + 696u);
  _g4_t_v345 &v345 = *reinterpret_cast<_g4_t_v345 *>(_g4_sf + 700u);
  _g4_t_v346 &v346 = *reinterpret_cast<_g4_t_v346 *>(_g4_sf + 704u);
  _g4_t_v347 &v347 = *reinterpret_cast<_g4_t_v347 *>(_g4_sf + 708u);
  _g4_t_v348 &v348 = *reinterpret_cast<_g4_t_v348 *>(_g4_sf + 712u);
  _g4_t_v349 &v349 = *reinterpret_cast<_g4_t_v349 *>(_g4_sf + 716u);
  _g4_t_v350 &v350 = *reinterpret_cast<_g4_t_v350 *>(_g4_sf + 720u);
  _g4_t_v351 &v351 = *reinterpret_cast<_g4_t_v351 *>(_g4_sf + 740u);
  _g4_t_v352 &v352 = *reinterpret_cast<_g4_t_v352 *>(_g4_sf + 744u);
  _g4_t_v353 &v353 = *reinterpret_cast<_g4_t_v353 *>(_g4_sf + 748u);
  _g4_t_v354 &v354 = *reinterpret_cast<_g4_t_v354 *>(_g4_sf + 752u);
  _g4_t_v355 &v355 = *reinterpret_cast<_g4_t_v355 *>(_g4_sf + 756u);
  _g4_t_v356 &v356 = *reinterpret_cast<_g4_t_v356 *>(_g4_sf + 760u);
  _g4_t_v357 &v357 = *reinterpret_cast<_g4_t_v357 *>(_g4_sf + 764u);
  _g4_t_v358 &v358 = *reinterpret_cast<_g4_t_v358 *>(_g4_sf + 768u);
  _g4_t_v359 &v359 = *reinterpret_cast<_g4_t_v359 *>(_g4_sf + 772u);
  _g4_t_v360 &v360 = *reinterpret_cast<_g4_t_v360 *>(_g4_sf + 792u);
  _g4_t_v361 &v361 = *reinterpret_cast<_g4_t_v361 *>(_g4_sf + 796u);
  _g4_t_v362 &v362 = *reinterpret_cast<_g4_t_v362 *>(_g4_sf + 800u);
  _g4_t_v363 &v363 = *reinterpret_cast<_g4_t_v363 *>(_g4_sf + 804u);
  _g4_t_v364 &v364 = *reinterpret_cast<_g4_t_v364 *>(_g4_sf + 808u);
  _g4_t_v365 &v365 = *reinterpret_cast<_g4_t_v365 *>(_g4_sf + 812u);
  _g4_t_v366 &v366 = *reinterpret_cast<_g4_t_v366 *>(_g4_sf + 816u);
  _g4_t_v367 &v367 = *reinterpret_cast<_g4_t_v367 *>(_g4_sf + 820u);
  _g4_t_v368 &v368 = *reinterpret_cast<_g4_t_v368 *>(_g4_sf + 824u);
  _g4_t_v369 &v369 = *reinterpret_cast<_g4_t_v369 *>(_g4_sf + 844u);
  _g4_t_v370 &v370 = *reinterpret_cast<_g4_t_v370 *>(_g4_sf + 848u);
  _g4_t_v371 &v371 = *reinterpret_cast<_g4_t_v371 *>(_g4_sf + 852u);
  _g4_t_v372 &v372 = *reinterpret_cast<_g4_t_v372 *>(_g4_sf + 856u);
  _g4_t_v373 &v373 = *reinterpret_cast<_g4_t_v373 *>(_g4_sf + 860u);
  _g4_t_v374 &v374 = *reinterpret_cast<_g4_t_v374 *>(_g4_sf + 864u);
  _g4_t_v375 &v375 = *reinterpret_cast<_g4_t_v375 *>(_g4_sf + 868u);
  _g4_t_v376 &v376 = *reinterpret_cast<_g4_t_v376 *>(_g4_sf + 872u);
  _g4_t_v377 &v377 = *reinterpret_cast<_g4_t_v377 *>(_g4_sf + 876u);
  _g4_t_v378 &v378 = *reinterpret_cast<_g4_t_v378 *>(_g4_sf + 896u);
  _g4_t_v379 &v379 = *reinterpret_cast<_g4_t_v379 *>(_g4_sf + 900u);
  _g4_t_v380 &v380 = *reinterpret_cast<_g4_t_v380 *>(_g4_sf + 904u);
  _g4_t_v381 &v381 = *reinterpret_cast<_g4_t_v381 *>(_g4_sf + 908u);
  _g4_t_v382 &v382 = *reinterpret_cast<_g4_t_v382 *>(_g4_sf + 912u);
  _g4_t_v383 &v383 = *reinterpret_cast<_g4_t_v383 *>(_g4_sf + 916u);
  _g4_t_v384 &v384 = *reinterpret_cast<_g4_t_v384 *>(_g4_sf + 920u);
  _g4_t_v385 &v385 = *reinterpret_cast<_g4_t_v385 *>(_g4_sf + 924u);
  _g4_t_v386 &v386 = *reinterpret_cast<_g4_t_v386 *>(_g4_sf + 928u);
  _g4_t_v387 &v387 = *reinterpret_cast<_g4_t_v387 *>(_g4_sf + 948u);
  _g4_t_v388 &v388 = *reinterpret_cast<_g4_t_v388 *>(_g4_sf + 952u);
  _g4_t_v389 &v389 = *reinterpret_cast<_g4_t_v389 *>(_g4_sf + 956u);
  _g4_t_v390 &v390 = *reinterpret_cast<_g4_t_v390 *>(_g4_sf + 960u);
  _g4_t_v391 &v391 = *reinterpret_cast<_g4_t_v391 *>(_g4_sf + 964u);
  _g4_t_v392 &v392 = *reinterpret_cast<_g4_t_v392 *>(_g4_sf + 968u);
  _g4_t_v393 &v393 = *reinterpret_cast<_g4_t_v393 *>(_g4_sf + 972u);
  _g4_t_v394 &v394 = *reinterpret_cast<_g4_t_v394 *>(_g4_sf + 976u);
  _g4_t_v395 &v395 = *reinterpret_cast<_g4_t_v395 *>(_g4_sf + 980u);
  _g4_t_v396 &v396 = *reinterpret_cast<_g4_t_v396 *>(_g4_sf + 1000u);
  _g4_t_v397 &v397 = *reinterpret_cast<_g4_t_v397 *>(_g4_sf + 1004u);
  _g4_t_v398 &v398 = *reinterpret_cast<_g4_t_v398 *>(_g4_sf + 1008u);
  _g4_t_v399 &v399 = *reinterpret_cast<_g4_t_v399 *>(_g4_sf + 1012u);
  _g4_t_v400 &v400 = *reinterpret_cast<_g4_t_v400 *>(_g4_sf + 1016u);
  _g4_t_v401 &v401 = *reinterpret_cast<_g4_t_v401 *>(_g4_sf + 1020u);
  _g4_t_v402 &v402 = *reinterpret_cast<_g4_t_v402 *>(_g4_sf + 1024u);
  _g4_t_v403 &v403 = *reinterpret_cast<_g4_t_v403 *>(_g4_sf + 1028u);
  _g4_t_v404 &v404 = *reinterpret_cast<_g4_t_v404 *>(_g4_sf + 1032u);
  _g4_t_v405 &v405 = *reinterpret_cast<_g4_t_v405 *>(_g4_sf + 1052u);
  _g4_t_v406 &v406 = *reinterpret_cast<_g4_t_v406 *>(_g4_sf + 1056u);
  _g4_t_v407 &v407 = *reinterpret_cast<_g4_t_v407 *>(_g4_sf + 1060u);
  _g4_t_v408 &v408 = *reinterpret_cast<_g4_t_v408 *>(_g4_sf + 1064u);
  _g4_t_v409 &v409 = *reinterpret_cast<_g4_t_v409 *>(_g4_sf + 1068u);
  _g4_t_v410 &v410 = *reinterpret_cast<_g4_t_v410 *>(_g4_sf + 1072u);
  _g4_t_v411 &v411 = *reinterpret_cast<_g4_t_v411 *>(_g4_sf + 1076u);
  _g4_t_v412 &v412 = *reinterpret_cast<_g4_t_v412 *>(_g4_sf + 1080u);
  _g4_t_v413 &v413 = *reinterpret_cast<_g4_t_v413 *>(_g4_sf + 1084u);
  _g4_t_v414 &v414 = *reinterpret_cast<_g4_t_v414 *>(_g4_sf + 1104u);

  v1 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v1 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v1);
    dword_20D2420 = (int)(uintptr_t)(v1);
  }
  result = sociallib::ClientSNSInterface::getCurrentActiveRequestState(v1);
  v240 = result;
  if ( result != 0 )
  {
    switch ( *(uint32_t *)(result + 8) )
    {
      case 2:
        v89 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v89 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v89);
          dword_20D2420 = (int)(uintptr_t)(v89);
        }
        if ( sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v89, 13, 2) )
          goto LABEL_19;
        goto LABEL_5;
      case 3:
        v75 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v75 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v75);
          dword_20D2420 = (int)(uintptr_t)(v75);
        }
        if ( !sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v75, 13, 3) )
          goto LABEL_5;
        v76 = *(uint32_t **)(v240 + 64);
        v77 = *(uint32_t **)(v240 + 68);
        if ( v76 != v77 )
        {
          v78 = *(uint32_t **)(v240 + 64);
          s1c = v78;
          do
          {
            v79 = (uint32_t *)(*v78 - 12);
            if ( v79 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v78 - 4), 0xFFFFFFFF) <= 0 )
              g4_std::string::Rep::M_destroy(v79);
            ++v78;
          }
          while ( v77 != v78 );
          v76 = s1c;
        }
        *(uint32_t *)(v240 + 68) = (uint32_t)(uintptr_t)(v76);
        v311 = nullptr;
        v312 = nullptr;
        v313 = nullptr;
        Json::Reader::Construct((Json::Reader::Self *)v414);
        Json::Value::Construct((int)(uintptr_t)(v315), nullptr);
        if ( a1 == nullptr )
          goto LABEL_166;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v266), a1, (int)(uintptr_t)(&v256) + 1);
        v80 = Json::Reader::parse((const char **)v414, (int)(uintptr_t)(&v266), (Json::Value::Self *)v315, 1) ^ 1;
        v81 = (void *)(v266 - 12);
        if ( (uint32_t *)(v266 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v266 - 4), 0xFFFFFFFF) <= 0 )
        {
          v225 = v80;
          g4_std::string::Rep::M_destroy(v81);
          v80 = v225;
        }
        v82 = 0;
        if ( v80 == 0 )
        {
          while ( v82 < Json::Value::size((Json::Value::Self *)v315) )
          {
            v84 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v315, v82);
            Json::Value::Construct((Json::Value::Self *)&v316, v84);
            if ( Json::Value::isMember((Json::Value::Self *)&v316, "id") )
            {
              v85 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v316, "id");
              if ( Json::Value::type(v85) == 4 )
              {
                v86 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v316, "id"));
                Json::Value::asString((Json::Value::Self *)&v268, v86);
                if ( v312 == v313 )
                {
                  g4_std::vector_string_86c307::M_insert_aux((int *)&v311, v312, (int)(uintptr_t)(&v268));
                }
                else
                {
                  v87 = nullptr;
                  if ( v312 != nullptr )
                  {
                    g4_std::string::construct_copy(v312, &v268);
                    v87 = v312;
                  }
                  v312 = v87 + 4;
                }
                v88 = (void *)(v268 - 12);
                if ( (uint32_t *)(v268 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v268 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v88);
                }
              }
            }
            ++v82;
            Json::Value::Destroy((Json::Value::Self *)&v316);
          }
          if ( &v311 != (void **)(v240 + 64) )
          {
            v175 = (char *)v311;
            s1f = v312;
            v176 = (v312 - (char *)((uint8_t *)v311)) >> 2;
            v177 = *(char **)(v240 + 64);
            v241 = v176;
            if ( v176 <= (*(uint32_t *)(v240 + 72) - (int)(uintptr_t)(v177)) >> 2 )
            {
              v196 = *(char **)(v240 + 68);
              v197 = (v196 - v177) >> 2;
              if ( v241 > (unsigned int)v197 )
              {
                v206 = (char *)v311 + 4 * v197;
                if ( v197 > 0 )
                {
                  v207 = (*(uint32_t *)(v240 + 68) - (int)(uintptr_t)(v177)) >> 2;
                  do
                  {
                    s2a = v175;
                    sa = v177;
                    v175 += 4;
                    v177 += 4;
                    g4_std::string::assign_str(sa, s2a);
                    --v207;
                  }
                  while ( v207 != 0 );
                  s1f = v312;
                  v196 = *(char **)(v240 + 68);
                  v177 = *(char **)(v240 + 64);
                  v206 = (char *)v311 + ((v196 - v177) & 0xFFFFFFFC);
                }
                if ( s1f == v206 )
                {
                  v182 = (int)(uintptr_t)(&v177[4 * v241]);
                }
                else
                {
                  v208 = v196;
                  v209 = v206;
                  do
                  {
                    if ( v208 != nullptr )
                      g4_std::string::construct_copy(v208, v209);
                    v209 += 4;
                    v208 += 4;
                  }
                  while ( v209 != s1f );
                  v182 = *(uint32_t *)(v240 + 64) + 4 * v241;
                }
              }
              else
              {
                if ( v241 > 0 )
                {
                  v245 = *(Json::Value::Self **)(v240 + 64);
                  s1g = *(char **)(v240 + 68);
                  v198 = (v312 - (char *)((uint8_t *)v311)) >> 2;
                  v199 = (char *)v245;
                  do
                  {
                    s2 = v175;
                    s = v199;
                    v175 += 4;
                    v199 += 4;
                    g4_std::string::assign_str(s, s2);
                    --v198;
                  }
                  while ( v198 != 0 );
                  v196 = s1g;
                  v177 = (char *)v245 + 4 * v241;
                }
                if ( v196 == v177 )
                {
                  v182 = *(uint32_t *)(v240 + 64) + 4 * v241;
                }
                else
                {
                  do
                  {
                    v200 = (uint32_t *)(*(uint32_t *)v177 - 12);
                    if ( v200 != dword_213B808
                      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v177 - 4), 0xFFFFFFFF) <= 0 )
                    {
                      v224 = v196;
                      g4_std::string::Rep::M_destroy(v200);
                      v196 = v224;
                    }
                    v177 += 4;
                  }
                  while ( v196 != v177 );
                  v182 = *(uint32_t *)(v240 + 64) + 4 * v241;
                }
              }
            }
            else
            {
              v244 = nullptr;
              v239 = nullptr;
              if ( v176 != 0 )
              {
                if ( v176 > 0x3FFFFFFF )
                  sub_18FFEE0(v83, v176);
                v244 = (Json::Value::Self *)(4 * v176);
                v239 = (Json::Value::Self *)opNew(4 * v176);
              }
              if ( v175 != s1f )
              {
                v178 = v239;
                do
                {
                  if ( v178 != nullptr )
                    g4_std::string::construct_copy(v178, v175);
                  v175 += 4;
                  v178 = (Json::Value::Self *)((char *)v178 + 4);
                }
                while ( s1f != v175 );
              }
              v179 = *(uint32_t **)(v240 + 68);
              v180 = *(uint32_t **)(v240 + 64);
              if ( v179 != v180 )
              {
                do
                {
                  v181 = (uint32_t *)(*v180 - 12);
                  if ( v181 != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(*v180 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy(v181);
                  }
                  ++v180;
                }
                while ( v179 != v180 );
                v180 = *(uint32_t **)(v240 + 64);
              }
              if ( v180 != nullptr )
                opDelete(v180);
              *(uint32_t *)(v240 + 64) = (uint32_t)(uintptr_t)(v239);
              v182 = (int)(uintptr_t)(v244) + (uint32_t)(uintptr_t)(v239);
              *(uint32_t *)(v240 + 72) = (uint32_t)(uintptr_t)((char *)v244 + (uint32_t)(uintptr_t)(v239));
            }
            *(uint32_t *)(v240 + 68) = v182;
          }
          *(uint32_t *)(v240 + 4) = 2;
          Json::Value::Destroy((Json::Value::Self *)v315);
          sub_545800((int)(uintptr_t)(v414));
          v183 = v312;
          v92 = (char *)v311;
          if ( v312 != v311 )
          {
            do
            {
              v184 = (uint32_t *)(*(uint32_t *)v92 - 12);
              if ( v184 != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v92 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v184);
              }
              v92 += 4;
            }
            while ( v183 != v92 );
            goto LABEL_170;
          }
        }
        else
        {
LABEL_166:
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v267), "GameAPI Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v256) + 2);
          GameAPIAndroidGLSocialLib_setErrorForRequest((uint32_t *)v240, (int)(uintptr_t)(&v267));
          v90 = (void *)(v267 - 12);
          if ( (uint32_t *)(v267 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v267 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v90);
          }
          Json::Value::Destroy((Json::Value::Self *)v315);
          sub_545800((int)(uintptr_t)(v414));
          v91 = v312;
          v92 = (char *)v311;
          if ( v312 != v311 )
          {
            do
            {
              v93 = (uint32_t *)(*(uint32_t *)v92 - 12);
              if ( v93 != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v92 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v93);
              }
              v92 += 4;
            }
            while ( v91 != v92 );
LABEL_170:
            v92 = (char *)v311;
          }
        }
        if ( v92 != nullptr )
          opDelete(v92);
        goto LABEL_5;
      case 5:
        v45 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v45 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v45);
          dword_20D2420 = (int)(uintptr_t)(v45);
        }
        if ( !sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v45, 13, 5) )
          goto LABEL_5;
        v253 = v240 + 100;
        g4_std::Rb_tree_string_pair_string_const_586eb0::M_erase(
          v240 + 100,
          *(void ***)(v240 + 108));
        *(uint32_t *)(v240 + 112) = v240 + 104;
        *(uint32_t *)(v240 + 116) = v240 + 104;
        *(uint32_t *)(v240 + 108) = 0;
        *(uint32_t *)(v240 + 120) = 0;
        v319 = &v317;
        v320 = &v317;
        v317 = 0;
        v318 = nullptr;
        v321 = 0;
        v251 = *(uint8_t *)(v240 + 56);
        if ( a1 == nullptr )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v269), "GameAPI Android SNS ERROR: The response is null.\n", (int)(uintptr_t)(&v256) + 3);
          GameAPIAndroidGLSocialLib_setErrorForRequest((uint32_t *)v240, (int)(uintptr_t)(&v269));
          v212 = (void *)(v269 - 12);
          if ( (uint32_t *)(v269 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v269 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v212);
          }
          goto LABEL_375;
        }
        Json::Reader::Construct((Json::Reader::Self *)v414);
        Json::Value::Construct((int)(uintptr_t)(v310), nullptr);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v270), a1, (int)(uintptr_t)(&v257));
        v46 = Json::Reader::parse((const char **)v414, (int)(uintptr_t)(&v270), (Json::Value::Self *)v310, 1);
        v47 = (void *)(v270 - 12);
        if ( (uint32_t *)(v270 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v270 - 4), 0xFFFFFFFF) <= 0 )
        {
          v226 = v46;
          g4_std::string::Rep::M_destroy(v47);
          v46 = v226;
        }
        v248 = 0;
        if ( v46 != 0 )
        {
          while ( 1 )
          {
            if ( v248 >= Json::Value::size((Json::Value::Self *)v310) )
              goto LABEL_327;
            v48 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v310, v248);
            Json::Value::Construct((Json::Value::Self *)&v311, v48);
            if ( Json::Value::isMember((Json::Value::Self *)&v311, "id") )
            {
              v170 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v311, "id");
              if ( Json::Value::type(v170) == 4 )
              {
                v171 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v311, "id"));
                Json::Value::asString((Json::Value::Self *)&v273, v171);
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v272), "id", (int)(uintptr_t)(&v257) + 2);
                v172 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v272));
                g4_std::string::assign_str(v172, &v273);
                v173 = (void *)(v272 - 12);
                if ( (uint32_t *)(v272 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v272 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v173);
                }
                v174 = (void *)(v273 - 12);
                if ( (uint32_t *)(v273 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v273 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v174);
                }
              }
            }
            if ( Json::Value::isMember((Json::Value::Self *)&v311, "name") )
            {
              v160 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v311, "name");
              if ( Json::Value::type(v160) == 4 )
              {
                v161 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v311, "name"));
                Json::Value::asString((Json::Value::Self *)&v275, v161);
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v274), "name", (int)(uintptr_t)(&v257) + 3);
                v162 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v274));
                g4_std::string::assign_str(v162, &v275);
                v163 = (void *)(v274 - 12);
                if ( (uint32_t *)(v274 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v274 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v163);
                }
                v164 = (void *)(v275 - 12);
                if ( (uint32_t *)(v275 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v275 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v164);
                }
              }
            }
            if ( Json::Value::isMember((Json::Value::Self *)&v311, "gender")
              && (v165 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v311, "gender"),
                  Json::Value::type(v165) == 4) )
            {
              v166 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v311, "gender"));
              Json::Value::asString((Json::Value::Self *)&v277, v166);
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v276), "gender", (int)(uintptr_t)(&v258));
              v167 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v276));
              g4_std::string::assign_str(v167, &v277);
              v168 = (void *)(v276 - 12);
              if ( (uint32_t *)(v276 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v276 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v168);
              }
              v169 = (void *)(v277 - 12);
              if ( (uint32_t *)(v277 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v277 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v169);
              }
            }
            else if ( Json::Value::isMember((Json::Value::Self *)&v311, "gender") )
            {
              v192 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v311, "gender");
              if ( Json::Value::type(v192) == 1 )
              {
                v193 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v311, "gender");
                if ( Json::Value::asInt(v193) != 0 )
                {
                  v204 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v311, "gender");
                  if ( Json::Value::asInt(v204) == 1 )
                  {
                    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v279), "gender", (int)(uintptr_t)(&v258) + 2);
                    v205 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v279));
                    g4_std_compat::string_assign((int)(uintptr_t)(v205), "female", 6u);
                    v195 = (void *)(v279 - 12);
                    if ( (uint32_t *)(v279 - 12) != dword_213B808
                      && __sync_fetch_and_add((volatile int32_t *)(v279 - 4), 0xFFFFFFFF) <= 0 )
                    {
LABEL_342:
                      g4_std::string::Rep::M_destroy(v195);
                    }
                  }
                }
                else
                {
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v278), "gender", (int)(uintptr_t)(&v258) + 1);
                  v194 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v278));
                  g4_std_compat::string_assign((int)(uintptr_t)(v194), "male", 4u);
                  v195 = (void *)(v278 - 12);
                  if ( (uint32_t *)(v278 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v278 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    goto LABEL_342;
                  }
                }
              }
            }
            if ( Json::Value::isMember((Json::Value::Self *)&v311, "picture") )
            {
              v155 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v311, "picture");
              if ( Json::Value::type(v155) == 4 )
              {
                v156 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v311, "picture"));
                Json::Value::asString((Json::Value::Self *)&v281, v156);
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v280), "picture", (int)(uintptr_t)(&v258) + 3);
                v157 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v280));
                g4_std::string::assign_str(v157, &v281);
                v158 = (void *)(v280 - 12);
                if ( (uint32_t *)(v280 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v280 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v158);
                }
                v159 = (void *)(v281 - 12);
                if ( (uint32_t *)(v281 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v281 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v159);
                }
              }
            }
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v282), "id", (int)(uintptr_t)(&v259));
            g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v282));
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v283), "name", (int)(uintptr_t)(&v259) + 1);
            g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v283));
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v284), "picture", (int)(uintptr_t)(&v259) + 2);
            g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v284));
            v49 = (void *)(v284 - 12);
            if ( (uint32_t *)(v284 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v284 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v49);
            }
            v50 = (void *)(v283 - 12);
            if ( (uint32_t *)(v283 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v283 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v50);
            }
            v51 = (void *)(v282 - 12);
            if ( (uint32_t *)(v282 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v282 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v51);
            }
            if ( v251 != 0 )
            {
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v285), "picture", (int)(uintptr_t)(&v259) + 3);
              v52 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v285));
              sociallib::urlToImageByteBuffer((sociallib::CDynamicMemoryStream::Self *)v315, v52);
              v53 = (void *)(v285 - 12);
              if ( (uint32_t *)(v285 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v285 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v53);
              }
              sociallib::SNSUserData::Construct(
                (sociallib::SNSUserData::Self *)v322,
                (const std::map<std::string,std::string> *)&v316,
                (const sociallib::CDynamicMemoryStream::Self *)v315);
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v286), "id", (int)(uintptr_t)(&v260));
              v54 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v286));
              g4_std::string::construct_copy(&v342, v54);
              v344 = 0;
              v345 = nullptr;
              v348 = 0;
              v346 = &v344;
              v347 = &v344;
              if ( v323 != nullptr )
              {
                v55 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
                        (int)(uintptr_t)(&v343),
                        v323,
                        (int)(uintptr_t)(&v344));
                v345 = v55;
                for ( i = (int *)(v55); i[2] != 0; i = (int *)i[2] )
                  ;
                v346 = i;
                while ( v55[3] != 0 )
                  v55 = (uint32_t *)v55[3];
                v347 = (int *)(v55);
                v348 = v324;
              }
              v349 = v325;
              sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
                (sociallib::CDynamicMemoryStream::Self *)v350,
                (const sociallib::CDynamicMemoryStream::Self *)v326);
              g4_std::string::construct_copy(&v351, &v342);
              v353 = 0;
              v354 = nullptr;
              v357 = 0;
              v355 = &v353;
              v356 = &v353;
              if ( v345 != nullptr )
              {
                v57 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
                        (int)(uintptr_t)(&v352),
                        v345,
                        (int)(uintptr_t)(&v353));
                v354 = v57;
                for ( j = (int *)(v57); j[2] != 0; j = (int *)j[2] )
                  ;
                v355 = j;
                while ( v57[3] != 0 )
                  v57 = (uint32_t *)v57[3];
                v356 = (int *)(v57);
                v357 = v348;
              }
              v358 = v349;
              sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
                (sociallib::CDynamicMemoryStream::Self *)v359,
                (const sociallib::CDynamicMemoryStream::Self *)v350);
              if ( *(uint32_t *)(v240 + 108) != 0 )
              {
                v242 = v351;
                v59 = *((uint32_t *)v351 - 3);
                for ( k = *(uint32_t *)(v240 + 108); ; k = v61 )
                {
                  v62 = *(uint32_t **)(k + 16);
                  v63 = v59;
                  v64 = *(v62 - 3);
                  v221 = k;
                  if ( v64 <= v59 )
                    v63 = *(v62 - 3);
                  v219 = v63;
                  v65 = memcmp(v242, *(const void **)(k + 16), v63);
                  if ( v65 == 0 )
                    v65 = v59 - v64;
                  if ( v65 < 0 )
                  {
                    v61 = *(uint32_t *)(v221 + 8);
                    s1b = 1;
                    if ( v61 == 0 )
                      goto LABEL_130;
                  }
                  else
                  {
                    v61 = *(uint32_t *)(v221 + 12);
                    s1b = 0;
                    if ( v61 == 0 )
                    {
LABEL_130:
                      v66 = v62;
                      v67 = v221;
                      v68 = v219;
                      v69 = v66;
                      if ( s1b == 0 )
                        goto LABEL_131;
                      goto LABEL_291;
                    }
                  }
                }
              }
              v67 = v240 + 104;
LABEL_291:
              if ( *(uint32_t *)(v240 + 112) == v67 )
                goto LABEL_134;
              v69 = *(uint32_t **)(sub_19048F0(v67) + 16);
              v242 = v351;
              v59 = *((uint32_t *)v351 - 3);
              v64 = *(v69 - 3);
              v68 = v64;
              if ( v59 <= v64 )
                v68 = *((uint32_t *)v351 - 3);
LABEL_131:
              v70 = memcmp(v69, v242, v68);
              v71 = v64 - v59;
              if ( v70 == 0 )
                v70 = v71;
              if ( v70 < 0 )
LABEL_134:
                g4_std::Rb_tree_string_pair_string_const_586eb0::M_insert(
                  v254,
                  v253,
                  0,
                  v67,
                  (int)(uintptr_t)(&v351));
              sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v359);
              std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                (int)(uintptr_t)(&v352),
                v354);
              v72 = (char *)v351 - 12;
              if ( (uint32_t *)((char *)v351 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)v351 - 1, 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v72);
              }
              sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v350);
              std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                (int)(uintptr_t)(&v343),
                v345);
              v73 = (void *)(v342 - 12);
              if ( (uint32_t *)(v342 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v342 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v73);
              }
              v74 = (void *)(v286 - 12);
              if ( (uint32_t *)(v286 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v286 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v74);
              }
              sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v326);
              std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                (int)(uintptr_t)(v322),
                v323);
              sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v315);
            }
            else
            {
              sociallib::SNSUserData::Construct(
                (sociallib::SNSUserData::Self *)v327,
                (const std::map<std::string,std::string> *)&v316);
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v287), "id", (int)(uintptr_t)(&v260) + 1);
              v115 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v287));
              g4_std::string::construct_copy(&v360, v115);
              v362 = 0;
              v363 = nullptr;
              v366 = 0;
              v364 = &v362;
              v365 = &v362;
              if ( v328 != nullptr )
              {
                v116 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
                         (int)(uintptr_t)(&v361),
                         v328,
                         (int)(uintptr_t)(&v362));
                v363 = v116;
                for ( m = (int *)(v116); m[2] != 0; m = (int *)m[2] )
                  ;
                v364 = m;
                while ( v116[3] != 0 )
                  v116 = (uint32_t *)v116[3];
                v365 = (int *)(v116);
                v366 = v329;
              }
              v367 = v330;
              sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
                (sociallib::CDynamicMemoryStream::Self *)v368,
                (const sociallib::CDynamicMemoryStream::Self *)v331);
              g4_std::string::construct_copy(&v369, &v360);
              v371 = 0;
              v372 = nullptr;
              v375 = 0;
              v373 = &v371;
              v374 = &v371;
              if ( v363 != nullptr )
              {
                v118 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
                         (int)(uintptr_t)(&v370),
                         v363,
                         (int)(uintptr_t)(&v371));
                v372 = v118;
                for ( ii = (int *)(v118); ii[2] != 0; ii = (int *)ii[2] )
                  ;
                v373 = ii;
                while ( v118[3] != 0 )
                  v118 = (uint32_t *)v118[3];
                v374 = (int *)(v118);
                v375 = v366;
              }
              v376 = v367;
              sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
                (sociallib::CDynamicMemoryStream::Self *)v377,
                (const sociallib::CDynamicMemoryStream::Self *)v368);
              if ( *(uint32_t *)(v240 + 108) != 0 )
              {
                v243 = v369;
                v120 = *((uint32_t *)v369 - 3);
                for ( jj = *(uint32_t *)(v240 + 108); ; jj = v122 )
                {
                  v123 = *(uint32_t **)(jj + 16);
                  v124 = v120;
                  v125 = *(v123 - 3);
                  v223 = jj;
                  if ( v125 <= v120 )
                    v124 = *(v123 - 3);
                  v249 = v124;
                  v126 = memcmp(v243, *(const void **)(jj + 16), v124);
                  if ( v126 == 0 )
                    v126 = v120 - v125;
                  if ( v126 < 0 )
                  {
                    v122 = *(uint32_t *)(v223 + 8);
                    s1e = 1;
                    if ( v122 == 0 )
                      goto LABEL_235;
                  }
                  else
                  {
                    v122 = *(uint32_t *)(v223 + 12);
                    s1e = 0;
                    if ( v122 == 0 )
                    {
LABEL_235:
                      v127 = v123;
                      v128 = v249;
                      v129 = v223;
                      if ( s1e == 0 )
                        goto LABEL_236;
                      goto LABEL_286;
                    }
                  }
                }
              }
              v129 = v240 + 104;
LABEL_286:
              if ( *(uint32_t *)(v240 + 112) == v129 )
                goto LABEL_239;
              v127 = *(uint32_t **)(sub_19048F0(v129) + 16);
              v243 = v369;
              v120 = *((uint32_t *)v369 - 3);
              v125 = *(v127 - 3);
              v128 = v120;
              if ( v125 <= v120 )
                v128 = *(v127 - 3);
LABEL_236:
              v130 = memcmp(v127, v243, v128);
              v131 = v125 - v120;
              if ( v130 == 0 )
                v130 = v131;
              if ( v130 < 0 )
LABEL_239:
                g4_std::Rb_tree_string_pair_string_const_586eb0::M_insert(
                  v254,
                  v253,
                  0,
                  v129,
                  (int)(uintptr_t)(&v369));
              sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v377);
              std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                (int)(uintptr_t)(&v370),
                v372);
              v132 = (char *)v369 - 12;
              if ( (uint32_t *)((char *)v369 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)v369 - 1, 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v132);
              }
              sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v368);
              std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                (int)(uintptr_t)(&v361),
                v363);
              v133 = (void *)(v360 - 12);
              if ( (uint32_t *)(v360 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v360 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v133);
              }
              v134 = (void *)(v287 - 12);
              if ( (uint32_t *)(v287 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v287 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v134);
              }
              sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v331);
              std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                (int)(uintptr_t)(v327),
                v328);
            }
            std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
              (int)(uintptr_t)(&v316),
              v318);
            v319 = &v317;
            v318 = nullptr;
            v320 = &v317;
            v321 = 0;
            Json::Value::Destroy((Json::Value::Self *)&v311);
            ++v248;
          }
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v271), "GameAPI Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v257) + 1);
        GameAPIAndroidGLSocialLib_setErrorForRequest((uint32_t *)v240, (int)(uintptr_t)(&v271));
        v210 = (void *)(v271 - 12);
        if ( (uint32_t *)(v271 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v271 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v210);
        }
        goto LABEL_374;
      case 7:
        v7 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v7 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v7);
          dword_20D2420 = (int)(uintptr_t)(v7);
        }
        if ( !sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v7, 13, 7) )
          goto LABEL_5;
        v252 = v240 + 100;
        g4_std::Rb_tree_string_pair_string_const_586eb0::M_erase(
          v240 + 100,
          *(void ***)(v240 + 108));
        *(uint32_t *)(v240 + 112) = v240 + 104;
        *(uint32_t *)(v240 + 108) = 0;
        *(uint32_t *)(v240 + 116) = v240 + 104;
        *(uint32_t *)(v240 + 120) = 0;
        v317 = 0;
        v318 = nullptr;
        v321 = 0;
        v319 = &v317;
        v320 = &v317;
        v250 = *(uint8_t *)(v240 + 56);
        if ( a1 != nullptr )
        {
          Json::Reader::Construct((Json::Reader::Self *)v414);
          Json::Value::Construct((int)(uintptr_t)(v310), nullptr);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v289), a1, (int)(uintptr_t)(&v260) + 3);
          v8 = Json::Reader::parse((const char **)v414, (int)(uintptr_t)(&v289), (Json::Value::Self *)v310, 1);
          v9 = (void *)(v289 - 12);
          if ( (uint32_t *)(v289 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v289 - 4), 0xFFFFFFFF) <= 0 )
          {
            v227 = v8;
            g4_std::string::Rep::M_destroy(v9);
            v8 = v227;
          }
          v247 = 0;
          if ( v8 != 0 )
          {
            while ( 1 )
            {
              if ( v247 >= Json::Value::size((Json::Value::Self *)v310) )
              {
LABEL_327:
                *(uint32_t *)(v240 + 4) = 2;
                Json::Value::Destroy((Json::Value::Self *)v310);
                sub_545800((int)(uintptr_t)(v414));
                std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                  (int)(uintptr_t)(&v316),
                  v318);
                goto LABEL_5;
              }
              v10 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v310, v247);
              Json::Value::Construct((Json::Value::Self *)&v311, v10);
              if ( Json::Value::isMember((Json::Value::Self *)&v311, "id") )
              {
                v145 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v311, "id");
                if ( Json::Value::type(v145) == 4 )
                {
                  v146 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v311, "id"));
                  Json::Value::asString((Json::Value::Self *)&v292, v146);
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v291), "id", (int)(uintptr_t)(&v261) + 1);
                  v147 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v291));
                  g4_std::string::assign_str(v147, &v292);
                  v148 = (void *)(v291 - 12);
                  if ( (uint32_t *)(v291 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v291 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy(v148);
                  }
                  v149 = (void *)(v292 - 12);
                  if ( (uint32_t *)(v292 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v292 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy(v149);
                  }
                }
              }
              if ( Json::Value::isMember((Json::Value::Self *)&v311, "name") )
              {
                v150 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v311, "name");
                if ( Json::Value::type(v150) == 4 )
                {
                  v151 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v311, "name"));
                  Json::Value::asString((Json::Value::Self *)&v294, v151);
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v293), "name", (int)(uintptr_t)(&v261) + 2);
                  v152 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v293));
                  g4_std::string::assign_str(v152, &v294);
                  v153 = (void *)(v293 - 12);
                  if ( (uint32_t *)(v293 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v293 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy(v153);
                  }
                  v154 = (void *)(v294 - 12);
                  if ( (uint32_t *)(v294 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v294 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy(v154);
                  }
                }
              }
              if ( Json::Value::isMember((Json::Value::Self *)&v311, "gender")
                && (v140 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v311, "gender"),
                    Json::Value::type(v140) == 4) )
              {
                v141 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v311, "gender"));
                Json::Value::asString((Json::Value::Self *)&v296, v141);
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v295), "gender", (int)(uintptr_t)(&v261) + 3);
                v142 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v295));
                g4_std::string::assign_str(v142, &v296);
                v143 = (void *)(v295 - 12);
                if ( (uint32_t *)(v295 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v295 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v143);
                }
                v144 = (void *)(v296 - 12);
                if ( (uint32_t *)(v296 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v296 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v144);
                }
              }
              else if ( Json::Value::isMember((Json::Value::Self *)&v311, "gender") )
              {
                v188 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v311, "gender");
                if ( Json::Value::type(v188) == 1 )
                {
                  v189 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v311, "gender");
                  if ( Json::Value::asInt(v189) != 0 )
                  {
                    v202 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v311, "gender");
                    if ( Json::Value::asInt(v202) == 1 )
                    {
                      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v298), "gender", (int)(uintptr_t)(&v262) + 1);
                      v203 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v298));
                      g4_std_compat::string_assign((int)(uintptr_t)(v203), "female", 6u);
                      v191 = (void *)(v298 - 12);
                      if ( (uint32_t *)(v298 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v298 - 4), 0xFFFFFFFF) <= 0 )
                      {
LABEL_337:
                        g4_std::string::Rep::M_destroy(v191);
                      }
                    }
                  }
                  else
                  {
                    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v297), "gender", (int)(uintptr_t)(&v262));
                    v190 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v297));
                    g4_std_compat::string_assign((int)(uintptr_t)(v190), "male", 4u);
                    v191 = (void *)(v297 - 12);
                    if ( (uint32_t *)(v297 - 12) != dword_213B808
                      && __sync_fetch_and_add((volatile int32_t *)(v297 - 4), 0xFFFFFFFF) <= 0 )
                    {
                      goto LABEL_337;
                    }
                  }
                }
              }
              if ( Json::Value::isMember((Json::Value::Self *)&v311, "picture") )
              {
                v135 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v311, "picture");
                if ( Json::Value::type(v135) == 4 )
                {
                  v136 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)&v311, "picture"));
                  Json::Value::asString((Json::Value::Self *)&v300, v136);
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v299), "picture", (int)(uintptr_t)(&v262) + 2);
                  v137 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v299));
                  g4_std::string::assign_str(v137, &v300);
                  v138 = (void *)(v299 - 12);
                  if ( (uint32_t *)(v299 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v299 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy(v138);
                  }
                  v139 = (void *)(v300 - 12);
                  if ( (uint32_t *)(v300 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v300 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy(v139);
                  }
                }
              }
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v301), "id", (int)(uintptr_t)(&v262) + 3);
              g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v301));
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v302), "name", (int)(uintptr_t)(&v263));
              g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v302));
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v303), "picture", (int)(uintptr_t)(&v263) + 1);
              v11 = v318;
              if ( v318 == nullptr )
              {
                v236 = (Json::Value::Self *)&v317;
LABEL_329:
                v307 = &dword_213B814;
                g4_std::string::construct_copy(&v308, &v303);
                g4_std::string::construct_copy(&v309, &v307);
                g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
                  v254,
                  &v316,
                  (int)(uintptr_t)(v236),
                  (const void **)&v308);
                v185 = (void *)(v309 - 12);
                if ( (uint32_t *)(v309 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v309 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v185);
                }
                v186 = v308 - 3;
                if ( v308 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v308 - 1, 0xFFFFFFFF) <= 0 )
                  g4_std::string::Rep::M_destroy((void *)v186);
                v187 = v307 - 3;
                if ( v307 - 3 == dword_213B808 )
                {
                  s1 = (char *)v303;
                }
                else
                {
                  if ( __sync_fetch_and_add(v307 - 1, 0xFFFFFFFF) <= 0 )
                    g4_std::string::Rep::M_destroy(v187);
                  s1 = (char *)v303;
                }
                goto LABEL_47;
              }
              s1 = (char *)v303;
              v236 = (Json::Value::Self *)&v317;
              v12 = *(uint32_t *)(v303 - 12);
              do
              {
                while ( 1 )
                {
                  v13 = *(uint32_t *)(*((uint32_t *)v11 + 4) - 12);
                  n = v13;
                  if ( v12 <= v13 )
                    n = v12;
                  v15 = v13 - v12;
                  v16 = memcmp(*((const void **)v11 + 4), s1, n);
                  if ( v16 == 0 )
                    v16 = v15;
                  if ( v16 < 0 )
                    break;
                  v236 = (Json::Value::Self *)v11;
                  v11 = *((void **)v11 + 2);
                  if ( v11 == nullptr )
                    goto LABEL_41;
                }
                v11 = *((void **)v11 + 3);
              }
              while ( v11 != nullptr );
LABEL_41:
              if ( v236 == (Json::Value::Self *)&v317 )
                goto LABEL_329;
              v17 = *(uint32_t *)(*((uint32_t *)v236 + 4) - 12);
              v18 = v17;
              if ( v12 <= v17 )
                v18 = v12;
              v19 = v12 - v17;
              v20 = memcmp(s1, *((const void **)v236 + 4), v18);
              if ( v20 == 0 )
                v20 = v19;
              if ( v20 < 0 )
                goto LABEL_329;
LABEL_47:
              if ( s1 - 12 != (char *)dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)s1 - 1, 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(s1 - 12);
              }
              v21 = (void *)(v302 - 12);
              if ( (uint32_t *)(v302 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v302 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v21);
              }
              v22 = (void *)(v301 - 12);
              if ( (uint32_t *)(v301 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v301 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v22);
              }
              if ( v250 != 0 )
              {
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v304), "picture", (int)(uintptr_t)(&v263) + 2);
                v23 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v304));
                sociallib::urlToImageByteBuffer((sociallib::CDynamicMemoryStream::Self *)v315, v23);
                v24 = (void *)(v304 - 12);
                if ( (uint32_t *)(v304 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v304 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v24);
                }
                sociallib::SNSUserData::Construct(
                  (sociallib::SNSUserData::Self *)v332,
                  (const std::map<std::string,std::string> *)&v316,
                  (const sociallib::CDynamicMemoryStream::Self *)v315);
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v305), "id", (int)(uintptr_t)(&v263) + 3);
                v25 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v305));
                g4_std::string::construct_copy(&v378, v25);
                v380 = 0;
                v381 = nullptr;
                v384 = 0;
                v382 = &v380;
                v383 = &v380;
                if ( v333 != nullptr )
                {
                  v26 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
                          (int)(uintptr_t)(&v379),
                          v333,
                          (int)(uintptr_t)(&v380));
                  v381 = v26;
                  for ( kk = (int *)(v26); kk[2] != 0; kk = (int *)kk[2] )
                    ;
                  v382 = kk;
                  while ( v26[3] != 0 )
                    v26 = (uint32_t *)v26[3];
                  v383 = (int *)(v26);
                  v384 = v334;
                }
                v385 = v335;
                sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
                  (sociallib::CDynamicMemoryStream::Self *)v386,
                  (const sociallib::CDynamicMemoryStream::Self *)v336);
                g4_std::string::construct_copy(&v387, &v378);
                v389 = 0;
                v390 = nullptr;
                v393 = 0;
                v391 = &v389;
                v392 = &v389;
                if ( v381 != nullptr )
                {
                  v28 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
                          (int)(uintptr_t)(&v388),
                          v381,
                          (int)(uintptr_t)(&v389));
                  v390 = v28;
                  for ( mm = (int *)(v28); mm[2] != 0; mm = (int *)mm[2] )
                    ;
                  v391 = mm;
                  while ( v28[3] != 0 )
                    v28 = (uint32_t *)v28[3];
                  v392 = (int *)(v28);
                  v393 = v384;
                }
                v394 = v385;
                sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
                  (sociallib::CDynamicMemoryStream::Self *)v395,
                  (const sociallib::CDynamicMemoryStream::Self *)v386);
                if ( *(uint32_t *)(v240 + 108) != 0 )
                {
                  v237 = v387;
                  v30 = *((uint32_t *)v387 - 3);
                  for ( nn = *(uint32_t *)(v240 + 108); ; nn = v32 )
                  {
                    v33 = *(uint32_t **)(nn + 16);
                    v34 = v30;
                    v35 = *(v33 - 3);
                    v220 = nn;
                    if ( v35 <= v30 )
                      v34 = *(v33 - 3);
                    v218 = v34;
                    v36 = memcmp(v237, *(const void **)(nn + 16), v34);
                    if ( v36 == 0 )
                      v36 = v30 - v35;
                    if ( v36 < 0 )
                    {
                      v32 = *(uint32_t *)(v220 + 8);
                      s1a = 1;
                      if ( v32 == 0 )
                        goto LABEL_78;
                    }
                    else
                    {
                      v32 = *(uint32_t *)(v220 + 12);
                      s1a = 0;
                      if ( v32 == 0 )
                      {
LABEL_78:
                        v37 = v33;
                        v38 = v218;
                        v39 = v220;
                        if ( s1a == 0 )
                          goto LABEL_79;
                        goto LABEL_301;
                      }
                    }
                  }
                }
                v39 = v240 + 104;
LABEL_301:
                if ( *(uint32_t *)(v240 + 112) == v39 )
                  goto LABEL_82;
                v37 = *(uint32_t **)(sub_19048F0(v39) + 16);
                v237 = v387;
                v30 = *((uint32_t *)v387 - 3);
                v35 = *(v37 - 3);
                v38 = v30;
                if ( v35 <= v30 )
                  v38 = *(v37 - 3);
LABEL_79:
                v40 = memcmp(v37, v237, v38);
                v41 = v35 - v30;
                if ( v40 == 0 )
                  v40 = v41;
                if ( v40 < 0 )
LABEL_82:
                  g4_std::Rb_tree_string_pair_string_const_586eb0::M_insert(
                    v254,
                    v252,
                    0,
                    v39,
                    (int)(uintptr_t)(&v387));
                sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v395);
                std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                  (int)(uintptr_t)(&v388),
                  v390);
                v42 = (char *)v387 - 12;
                if ( (uint32_t *)((char *)v387 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)v387 - 1, 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v42);
                }
                sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v386);
                std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                  (int)(uintptr_t)(&v379),
                  v381);
                v43 = (void *)(v378 - 12);
                if ( (uint32_t *)(v378 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v378 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v43);
                }
                v44 = (void *)(v305 - 12);
                if ( (uint32_t *)(v305 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v305 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v44);
                }
                sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v336);
                std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                  (int)(uintptr_t)(v332),
                  v333);
                sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v315);
              }
              else
              {
                sociallib::SNSUserData::Construct(
                  (sociallib::SNSUserData::Self *)v337,
                  (const std::map<std::string,std::string> *)&v316);
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v306), "id", (int)(uintptr_t)(&v264));
                v94 = g4_std::map_string_string_7c7b5d::opIndex(&v316, (int)(uintptr_t)(&v306));
                g4_std::string::construct_copy(&v396, v94);
                v398 = 0;
                v399 = nullptr;
                v402 = 0;
                v400 = &v398;
                v401 = &v398;
                if ( v338 != nullptr )
                {
                  v95 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
                          (int)(uintptr_t)(&v397),
                          v338,
                          (int)(uintptr_t)(&v398));
                  v399 = v95;
                  for ( i1 = (int *)(v95); i1[2] != 0; i1 = (int *)i1[2] )
                    ;
                  v400 = i1;
                  while ( v95[3] != 0 )
                    v95 = (uint32_t *)v95[3];
                  v401 = (int *)(v95);
                  v402 = v339;
                }
                v403 = v340;
                sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
                  (sociallib::CDynamicMemoryStream::Self *)v404,
                  (const sociallib::CDynamicMemoryStream::Self *)v341);
                g4_std::string::construct_copy(&v405, &v396);
                v407 = 0;
                v408 = nullptr;
                v411 = 0;
                v409 = &v407;
                v410 = &v407;
                if ( v399 != nullptr )
                {
                  v97 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
                          (int)(uintptr_t)(&v406),
                          v399,
                          (int)(uintptr_t)(&v407));
                  v408 = v97;
                  for ( i2 = (int *)(v97); i2[2] != 0; i2 = (int *)i2[2] )
                    ;
                  v409 = i2;
                  while ( v97[3] != 0 )
                    v97 = (uint32_t *)v97[3];
                  v410 = (int *)(v97);
                  v411 = v402;
                }
                v412 = v403;
                sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
                  (sociallib::CDynamicMemoryStream::Self *)v413,
                  (const sociallib::CDynamicMemoryStream::Self *)v404);
                if ( *(uint32_t *)(v240 + 108) != 0 )
                {
                  v238 = v405;
                  v99 = *((uint32_t *)v405 - 3);
                  for ( i3 = *(uint32_t *)(v240 + 108); ; i3 = v101 )
                  {
                    v102 = *(uint32_t **)(i3 + 16);
                    v103 = v99;
                    v104 = *(v102 - 3);
                    v222 = i3;
                    if ( v104 <= v99 )
                      v103 = *(v102 - 3);
                    v246 = v103;
                    v105 = memcmp(v238, *(const void **)(i3 + 16), v103);
                    if ( v105 == 0 )
                      v105 = v99 - v104;
                    if ( v105 < 0 )
                    {
                      v101 = *(uint32_t *)(v222 + 8);
                      s1d = 1;
                      if ( v101 == 0 )
                        goto LABEL_199;
                    }
                    else
                    {
                      v101 = *(uint32_t *)(v222 + 12);
                      s1d = 0;
                      if ( v101 == 0 )
                      {
LABEL_199:
                        v106 = v102;
                        v107 = v222;
                        v108 = v246;
                        v109 = v106;
                        if ( s1d == 0 )
                          goto LABEL_200;
                        goto LABEL_296;
                      }
                    }
                  }
                }
                v107 = v240 + 104;
LABEL_296:
                if ( *(uint32_t *)(v240 + 112) == v107 )
                  goto LABEL_203;
                v109 = *(uint32_t **)(sub_19048F0(v107) + 16);
                v238 = v405;
                v99 = *((uint32_t *)v405 - 3);
                v104 = *(v109 - 3);
                v108 = v104;
                if ( v99 <= v104 )
                  v108 = *((uint32_t *)v405 - 3);
LABEL_200:
                v110 = memcmp(v109, v238, v108);
                v111 = v104 - v99;
                if ( v110 == 0 )
                  v110 = v111;
                if ( v110 < 0 )
LABEL_203:
                  g4_std::Rb_tree_string_pair_string_const_586eb0::M_insert(
                    v254,
                    v252,
                    0,
                    v107,
                    (int)(uintptr_t)(&v405));
                sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v413);
                std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                  (int)(uintptr_t)(&v406),
                  v408);
                v112 = (char *)v405 - 12;
                if ( (uint32_t *)((char *)v405 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)v405 - 1, 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v112);
                }
                sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v404);
                std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                  (int)(uintptr_t)(&v397),
                  v399);
                v113 = (void *)(v396 - 12);
                if ( (uint32_t *)(v396 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v396 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v113);
                }
                v114 = (void *)(v306 - 12);
                if ( (uint32_t *)(v306 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v306 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v114);
                }
                sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v341);
                std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                  (int)(uintptr_t)(v337),
                  v338);
              }
              std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
                (int)(uintptr_t)(&v316),
                v318);
              v319 = &v317;
              v318 = nullptr;
              v320 = &v317;
              v321 = 0;
              Json::Value::Destroy((Json::Value::Self *)&v311);
              ++v247;
            }
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v290), "GameAPI Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v261));
          GameAPIAndroidGLSocialLib_setErrorForRequest((uint32_t *)v240, (int)(uintptr_t)(&v290));
          v211 = (void *)(v290 - 12);
          if ( (uint32_t *)(v290 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v290 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v211);
          }
LABEL_374:
          Json::Value::Destroy((Json::Value::Self *)v310);
          sub_545800((int)(uintptr_t)(v414));
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v288), "GameAPI Android SNS ERROR: The response is null.\n", (int)(uintptr_t)(&v260) + 2);
          GameAPIAndroidGLSocialLib_setErrorForRequest((uint32_t *)v240, (int)(uintptr_t)(&v288));
          v213 = (void *)(v288 - 12);
          if ( (uint32_t *)(v288 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v288 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v213);
          }
        }
LABEL_375:
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
          (int)(uintptr_t)(&v316),
          v318);
LABEL_5:
        result = v240;
        *(uint32_t *)(v240 + 4) = 2;
        break;
      case 9:
        v5 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v5 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v5);
          dword_20D2420 = (int)(uintptr_t)(v5);
        }
        if ( sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v5, 13, 9) )
        {
LABEL_19:
          v6 = strlen(a1);
          g4_std_compat::string_assign(v240 + 60, a1, v6);
        }
        goto LABEL_5;
      case 0xA:
        v3 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
        if ( dword_20D2420 == 0 )
        {
          v3 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
          sociallib::ClientSNSInterface::Construct(v3);
          dword_20D2420 = (int)(uintptr_t)(v3);
        }
        if ( sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v3, 13, 10) )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v414), a1, (int)(uintptr_t)(&v255));
          if ( *(uint32_t *)(v414[0] - 12) != 0 )
          {
            sociallib::CMemoryStream::clear((void **)(v240 + 180));
            sociallib::urlToImageByteBuffer((sociallib::CDynamicMemoryStream::Self *)v314, v414);
            sociallib::CMemoryStream::opAssign(
              (sociallib::CMemoryStream::Self *)(v240 + 180),
              (const sociallib::CMemoryStream::Self *)v314);
            sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)v314);
            *(uint32_t *)(v240 + 4) = 2;
          }
          else
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v265), "GameAPI Android SNS ERROR: Error while parsing.\n", (int)(uintptr_t)(&v256));
            GameAPIAndroidGLSocialLib_setErrorForRequest((uint32_t *)v240, (int)(uintptr_t)(&v265));
            v201 = (void *)(v265 - 12);
            if ( (uint32_t *)(v265 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v265 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v201);
            }
          }
          v4 = (void *)(v414[0] - 12);
          if ( (uint32_t *)(v414[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v414[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v4);
          }
        }
        goto LABEL_5;
      default:
        goto LABEL_5;
    }
  }
  return result;
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: sub_1441AD0  (binary VA: 0x1441ad0)
// Original: sub_1441AD0
// ----------------------------------------------------------------------------
int sub_1441AD0()
{
  sub_1900D70(&unk_2119B00);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119B00, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_1442780  (binary VA: 0x1442780)
// Original: sub_1442780
// ----------------------------------------------------------------------------
int sub_1442780()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&sociallib::SNSUserData::k_userName), "name", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &sociallib::SNSUserData::k_userName, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&sociallib::SNSUserData::k_userId), "id", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &sociallib::SNSUserData::k_userId, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&sociallib::SNSUserData::k_userPicture), "picture", (int)(uintptr_t)(&v1));
  return __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &sociallib::SNSUserData::k_userPicture, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_14428D0  (binary VA: 0x14428d0)
// Original: sub_14428D0
// ----------------------------------------------------------------------------
int sub_14428D0(Json::Value::Self *a1, int a2)
{
  int v4;
  Json::Value::Self *v6;
  void *v7;
  void *v8;
  uint32_t v9[4];

  g4_std_compat::string_assign(a2, &unk_1B15112, 0);
  v4 = -300;
  if ( Json::Value::type(a1) == 7 && Json::Value::isMember(a1, (char **)&dword_2119B94) )
  {
    v6 = (Json::Value::Self *)Json::Value::opIndex(a1, (const char **)&dword_2119B94);
    if ( Json::Value::type(v6) == 4 )
    {
      v7 = Json::Value::opIndex(a1, (const char **)&dword_2119B94);
      Json::Value::asString((Json::Value::Self *)v9, (int)(uintptr_t)(v7));
      g4_std::string::assign_str(a2, v9);
      v8 = (void *)(v9[0] - 12);
      if ( (uint32_t *)(v9[0] - 12) == dword_213B808 )
      {
        return 0;
      }
      else
      {
        v4 = 0;
        if ( __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v8);
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_1449A90  (binary VA: 0x1449a90)
// Original: sub_1449A90
// ----------------------------------------------------------------------------
int sub_1449A90(int a1, int a2, int a3)
{
  glwebtools::Mutex::Self *v3;
  glwebtools::Mutex::Self *v6;
  uint32_t *v7;
  int v8;
  char *v9;
  void *v10;
  Json::Value::Self *v11;
  void *v12;
  int Instance;
  void *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  gaia::BaseServiceManager::Self **v20;
  typedef int _g4_t_v21;
  typedef glwebtools::Mutex::Self *_g4_t_v22;
  typedef glwebtools::Mutex::Self *_g4_t_v23;
  typedef glwebtools::Mutex::Self *_g4_t_v24;
  typedef glwebtools::Mutex::Self *_g4_t_v25;
  typedef int _g4_t_PandoraUrl;
  typedef int _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef void *_g4_t_src;
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[4];
  typedef uint8_t _g4_t_v36[4];
  typedef uint8_t _g4_t_v37[4];
  typedef uint8_t _g4_t_v38[4];
  typedef uint8_t _g4_t_v39[4];
  typedef uint8_t _g4_t_v40[4];
  typedef int _g4_t_v41;
  typedef glwebtools::Mutex::Self *_g4_t_v42;
  typedef glwebtools::Mutex::Self *_g4_t_v43;
  typedef glwebtools::Mutex::Self *_g4_t_v44;
  typedef glwebtools::Mutex::Self *_g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef uint32_t _g4_t_v51[2];
  typedef glwebtools::Mutex::Self *_g4_t_v52;
  typedef glwebtools::Mutex::Self *_g4_t_dest[39];
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v22)) > _g4_s1 ? (16u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v23)) > _g4_s2 ? (16u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v24)) > _g4_s3 ? (16u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v25)) > _g4_s4 ? (16u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_PandoraUrl)) > _g4_s5 ? (24u + sizeof(_g4_t_PandoraUrl)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v28)) > _g4_s6 ? (44u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v29)) > _g4_s7 ? (56u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v30)) > _g4_s8 ? (60u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v31)) > _g4_s9 ? (64u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v32)) > _g4_s10 ? (68u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_src)) > _g4_s11 ? (72u + sizeof(_g4_t_src)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v34)) > _g4_s12 ? (76u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v35)) > _g4_s13 ? (92u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v36)) > _g4_s14 ? (96u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v37)) > _g4_s15 ? (100u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v38)) > _g4_s16 ? (104u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v39)) > _g4_s17 ? (108u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v40)) > _g4_s18 ? (112u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v41)) > _g4_s19 ? (116u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v42)) > _g4_s20 ? (120u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v43)) > _g4_s21 ? (124u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v44)) > _g4_s22 ? (128u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (132u + sizeof(_g4_t_v45)) > _g4_s23 ? (132u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v46)) > _g4_s24 ? (136u + sizeof(_g4_t_v46)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v47)) > _g4_s25 ? (140u + sizeof(_g4_t_v47)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v48)) > _g4_s26 ? (144u + sizeof(_g4_t_v48)) : _g4_s26,
    _g4_s28 = (148u + sizeof(_g4_t_v49)) > _g4_s27 ? (148u + sizeof(_g4_t_v49)) : _g4_s27,
    _g4_s29 = (152u + sizeof(_g4_t_v50)) > _g4_s28 ? (152u + sizeof(_g4_t_v50)) : _g4_s28,
    _g4_s30 = (156u + sizeof(_g4_t_v51)) > _g4_s29 ? (156u + sizeof(_g4_t_v51)) : _g4_s29,
    _g4_s31 = (164u + sizeof(_g4_t_v52)) > _g4_s30 ? (164u + sizeof(_g4_t_v52)) : _g4_s30,
    _g4_s32 = (224u + sizeof(_g4_t_dest)) > _g4_s31 ? (224u + sizeof(_g4_t_dest)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_PandoraUrl &PandoraUrl = *reinterpret_cast<_g4_t_PandoraUrl *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 92u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 96u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 100u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 104u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 108u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 112u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 116u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 120u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 124u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 128u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 132u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 136u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 140u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 144u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 148u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 152u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 156u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 164u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 224u);

  v3 = (glwebtools::Mutex::Self *)(a1 + 392);
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 392));
  if ( gaia::Gaia::s_IsInitializing != 0 )
  {
    PandoraUrl = -23;
    goto LABEL_3;
  }
  gaia::Gaia::s_IsInitializing = 1;
  PandoraUrl = 0;
  if ( gaia::Gaia::s_IsInitialized != 0 )
  {
LABEL_3:
    glwebtools::Mutex::Unlock(v3);
    return PandoraUrl;
  }
  glwebtools::Mutex::Unlock(v3);
  v41 = *(uint32_t *)(a1 + 244);
  v45 = *(glwebtools::Mutex::Self **)(a1 + 260);
  v42 = *(glwebtools::Mutex::Self **)(a1 + 248);
  v43 = *(glwebtools::Mutex::Self **)(a1 + 252);
  v6 = *(glwebtools::Mutex::Self **)(a1 + 256);
  v46 = &dword_213B814;
  v47 = &dword_213B814;
  v49 = &dword_213B814;
  v50 = &dword_213B814;
  v44 = v6;
  g4_std::string::assign_str(&v47, a1 + 268);
  g4_std::string::assign_str(&v46, a1 + 264);
  g4_std::string::assign_str(&v49, a1 + 276);
  v48 = *(uint32_t *)(a1 + 272);
  g4_std::string::assign_str(&v50, a1 + 280);
  v29 = &dword_213B814;
  memset(dest, 0, 0x80u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&src), (char *)&unk_1B15112, (int)(uintptr_t)(&v28) + 2);
  if ( v48 != 1 )
  {
    if ( v48 == 2 )
    {
      g4_std_compat::string_assign((int)(uintptr_t)(&src), "v2_", 3u);
      if ( *(v46 - 3) != 0 )
      {
        g4_std::string::append_str(&src, &v46);
        g4_std::string::append((int)(uintptr_t)(&src), (char *)&off_1B5AAE7 + 2, 1u);
      }
      if ( *(v49 - 3) != 0 )
      {
        g4_std::string::append_str(&src, &v49);
        g4_std::string::append((int)(uintptr_t)(&src), (char *)&off_1B5AAE7 + 2, 1u);
      }
    }
    else
    {
      g4_std_compat::string_assign((int)(uintptr_t)(&src), &off_1B705E2, 3u);
    }
  }
  v7 = (uint32_t *)(src);
  memcpy(dest, src, *((uint32_t *)src - 3));
  v8 = *(v7 - 3);
  *(glwebtools::Mutex::Self **)((char *)dest + v8) = v42;
  *(glwebtools::Mutex::Self **)((char *)&dest[1] + v8) = v43;
  *(glwebtools::Mutex::Self **)((char *)&dest[2] + v8) = v44;
  *(glwebtools::Mutex::Self **)((char *)&dest[3] + v8) = v45;
  sub_193A970((int)(uintptr_t)(&v30), dest, v8 + 16, (int)(uintptr_t)(&v28) + 1);
  v9 = (char *)src - 12;
  if ( (char *)src - 12 != (char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)src - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  glwebtools::Codec::EncodeBase64(v30, *(uint32_t *)(v30 - 12), &v29, 0);
  *(uint32_t *)(a1 + 348) = 19;
  g4_std::string::assign_str(a1 + 352, &v29);
  g4_std::string::construct_copy(&v32, &v47);
  g4_std::string::assign_str(a1 + 356, &v32);
  v10 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  if ( *(uint8_t *)(a1 + 553) != 0 )
  {
    dest[1] = v3;
    dest[0] = (glwebtools::Mutex::Self *)&off_2049618;
    glwebtools::Mutex::Lock(v3);
    *(uint8_t *)(a1 + 552) = 1;
    v24 = (glwebtools::Mutex::Self *)opNew(0x18u);
    glwebtools::Thread::Construct(
      v24,
      (void (*)(void *, void *))gaia::Gaia::UpdateStatic,
      (void *)a1,
      nullptr,
      "Gaia Thread");
    *(uint32_t *)(a1 + 548) = (uint32_t)(uintptr_t)(v24);
    if ( v24 == nullptr )
    {
      gaia::Gaia::s_IsInitializing = 0;
      sub_59C7C0((int)(uintptr_t)(dest));
      g4_std::string::Destroy(&v30);
      g4_std::string::Destroy(&v29);
      g4_std::string::Destroy(&v50);
      g4_std::string::Destroy(&v49);
      g4_std::string::Destroy(&v47);
      g4_std::string::Destroy(&v46);
      return -14;
    }
    glwebtools::Thread::Start(v24);
    dest[0] = (glwebtools::Mutex::Self *)&off_2049618;
    glwebtools::Mutex::Unlock(dest[1]);
    dest[0] = (glwebtools::Mutex::Self *)&off_2049608;
  }
  glwebtools::Mutex::Lock(v3);
  g4_std::string::assign_str(a1 + 240, a2);
  if ( *(uint32_t *)(a1 + 48) == 0 )
  {
    v25 = (glwebtools::Mutex::Self *)opNew(0xBCu);
    gaia::Pandora::Construct(v25, a1 + 240);
    *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(v25);
  }
  glwebtools::Mutex::Unlock(v3);
  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v51);
  gaia::GaiaRequest::SetOperationCode(v51, 3005);
  Json::Value::Construct((Json::Value::Self *)v34, "pandora");
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "serviceName", (int)(uintptr_t)(&v28));
  v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v51, &v31);
  Json::Value::opAssign(v11, (const Json::Value::Self *)v34);
  v12 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  Json::Value::Destroy((Json::Value::Self *)v34);
  v22 = v52;
  glwebtools::Mutex::Lock(v52);
  *(uint8_t *)(v51[0] + 4) = 1;
  glwebtools::Mutex::Unlock(v22);
  Instance = gaia::Gaia::GetInstance();
  PandoraUrl = gaia::Gaia_Pandora::GetPandoraUrl(*(gaia::Gaia_Pandora::Self **)(Instance + 556), (gaia::GaiaRequest::Self *)v51);
  v23 = v52;
  glwebtools::Mutex::Lock(v52);
  v21 = v51[0];
  glwebtools::Mutex::Unlock(v23);
  g4_std::string::assign_str(a3, v21);
  if ( PandoraUrl != 0 )
  {
    gaia::Gaia::Shutdown((gaia::Gaia_GlobalDeviceID::Self **)a1);
    glwebtools::Mutex::Lock(v3);
    gaia::Gaia::s_IsInitialized = 0;
    gaia::Gaia::s_IsInitializing = 0;
  }
  else
  {
    glwebtools::Mutex::Lock(v3);
    gaia::GameloftID::RetrieveDeviceInfo((gaia::GameloftID::Self *)v35);
    g4_std::string::assign_str(a1 + 324, v35);
    g4_std::string::assign_str(a1 + 328, v36);
    g4_std::string::assign_str(a1 + 332, v37);
    g4_std::string::assign_str(a1 + 336, v38);
    g4_std::string::assign_str(a1 + 340, v39);
    g4_std::string::assign_str(a1 + 344, v40);
    g4_std::string::Destroy(v40);
    g4_std::string::Destroy(v39);
    g4_std::string::Destroy(v38);
    g4_std::string::Destroy(v37);
    g4_std::string::Destroy(v36);
    g4_std::string::Destroy(v35);
    v20 = *(gaia::BaseServiceManager::Self ***)(a1 + 592);
    gaia::Gaia::s_IsInitialized = 1;
    gaia::Gaia::s_IsInitializing = 0;
    gaia::Gaia_GlobalDeviceID::Initialize(v20, a2);
    gid::GlobalDeviceIDManager::Initialize(ISingleton<gid::GlobalDeviceIDManager::Self>::s_instance);
  }
  glwebtools::Mutex::Unlock(v3);
  glwebtools::Mutex::Lock(v3);
  gaia::Gaia::s_IsInitializing = 0;
  glwebtools::Mutex::Unlock(v3);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v51);
  v14 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  v15 = v29 - 3;
  if ( v29 - 3 != dword_213B808 && __sync_fetch_and_add(v29 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v15);
  v16 = v50 - 3;
  if ( v50 - 3 != dword_213B808 && __sync_fetch_and_add(v50 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v16);
  v17 = v49 - 3;
  if ( v49 - 3 != dword_213B808 && __sync_fetch_and_add(v49 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v17);
  v18 = v47 - 3;
  if ( v47 - 3 != dword_213B808 && __sync_fetch_and_add(v47 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v18);
  v19 = v46 - 3;
  if ( v46 - 3 != dword_213B808 && __sync_fetch_and_add(v46 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v19);
  return PandoraUrl;
}


