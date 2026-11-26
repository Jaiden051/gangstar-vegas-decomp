#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: JNI_ExternalBridges.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (46 funcs)
// ============================================================================
#include "JNI_ExternalBridges.h"
#include "../../../sources/Core/Memory/GameAllocator.h"

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_glads_GLAds_nativeCheckGLAdsMethods  (binary VA: 0xb796d0)
// Original: Java_com_gameloft_glads_GLAds_nativeCheckGLAdsMethods
// ----------------------------------------------------------------------------
int Java_com_gameloft_glads_GLAds_nativeCheckGLAdsMethods()
{
  int v0;
  int result;
  typedef char _g4_t_v2;
  typedef uint32_t _g4_t_v3[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v2)) > _g4_s0 ? (15u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v3)) > _g4_s1 ? (28u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 15u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 28u);

  v3[0] = 0;
  byte_20DDE98 = 1;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v3, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v3, 0);
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  G4_PlatformLog(4, "GLAds_cpp", "Caching JNI method IDs...");
  v0 = G4_VCALL<int>(v3[0], 24, "com/gameloft/glads/GLAds");
  dword_20DDE94 = G4_VCALL<int>(v3[0], 84, v0);
  dword_20DDEA0 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "initGLAds", "()V");
  dword_20DDEB0 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "setGameVersion", "(Ljava/lang/String;)V");
  dword_20DDEC0 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "setGameLanguage", "(Ljava/lang/String;)V");
  dword_20DDED0 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "setIgpCode", "(Ljava/lang/String;)V");
  dword_20DDEE0 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "setAnonymousAccount", "(Ljava/lang/String;)V");
  dword_20DDEF0 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "setFacebookID", "(Ljava/lang/String;)V");
  dword_20DDF00 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "setFacebookAccessToken", "(Ljava/lang/String;)V");
  dword_20DDF10 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "setGliveAccount", "(Ljava/lang/String;)V");
  dword_20DDF20 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "setGameCenterUID", "(Ljava/lang/String;)V");
  dword_20DDF30 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "setClientID", "(Ljava/lang/String;)V");
  dword_20DDF40 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "setDataCenter", "(Ljava/lang/String;)V");
  dword_20DDF50 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "setGLAdsBaseURL", "(Ljava/lang/String;)V");
  dword_20DDF60 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "showBanner", "(Ljava/lang/String;III)V");
  dword_20DDF70 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "setBannerPositionAndAnchor", "(III)V");
  dword_20DDF80 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "showBanner", "(Ljava/lang/String;)V");
  dword_20DDF90 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "hideBanner", "()V");
  dword_20DDFA0 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "showFullScreenAd", "(Ljava/lang/String;)V");
  dword_20DDFA4 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "showFullScreenAd", "(Ljava/lang/String;Z)V");
  dword_20DDFB0 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "cancelFullScreenAd", "()V");
  dword_20DDFC0 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "setAllowAdultContent", "(Z)V");
  dword_20DDFD0 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "setUserAge", "(I)V");
  dword_20DDFE0 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "getFullScreenAdState", "()I");
  dword_20DDFF0 = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "getBannerState", "()I");
  result = G4_VCALL<int>(v3[0], 452, dword_20DDE94, "checkAdAvailable", "(Ljava/lang/String;)V");
  dword_20DE000 = result;
  if ( v2 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_glads_GLAds_nativeBannerChangeStateCallback  (binary VA: 0xb79c20)
// Original: Java_com_gameloft_glads_GLAds_nativeBannerChangeStateCallback
// ----------------------------------------------------------------------------
int Java_com_gameloft_glads_GLAds_nativeBannerChangeStateCallback(int a1, int a2, int a3)
{
  int (*v3)(int);
  uint32_t *v5;

  if ( dword_20DDE90 != 0 )
  {
    v3 = *(int (**)(int))(dword_20DDE90 + 4);
    if ( v3 != nullptr )
      return v3(a3);
  }
  else
  {
    v5 = (uint32_t *)opNew(0x28u);
    v5[2] = 0;
    v5[1] = 0;
    *v5 = (uint32_t)(uintptr_t)&off_206A728;
    v5[3] = 0;
    v5[4] = 0;
    v5[5] = 0;
    v5[6] = 0;
    v5[7] = 0;
    v5[8] = 0;
    v5[9] = 0;
    dword_20DDE90 = (int)(uintptr_t)v5;
  }
  { G4_PlatformLog(
           6,
           "GLAds_cpp",
           "Banner change state callback not implemented. Game will not be notified of banner state change"); return 0; }
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_glads_GLAds_nativeFullScreenAdChangeStateCallback  (binary VA: 0xb79cd0)
// Original: Java_com_gameloft_glads_GLAds_nativeFullScreenAdChangeStateCallback
// ----------------------------------------------------------------------------
int Java_com_gameloft_glads_GLAds_nativeFullScreenAdChangeStateCallback(int a1, int a2, int a3)
{
  int (*v3)(int);
  uint32_t *v5;

  if ( dword_20DDE90 != 0 )
  {
    v3 = *(int (**)(int))(dword_20DDE90 + 8);
    if ( v3 != nullptr )
      return v3(a3);
  }
  else
  {
    v5 = (uint32_t *)opNew(0x28u);
    v5[2] = 0;
    v5[1] = 0;
    *v5 = (uint32_t)(uintptr_t)&off_206A728;
    v5[3] = 0;
    v5[4] = 0;
    v5[5] = 0;
    v5[6] = 0;
    v5[7] = 0;
    v5[8] = 0;
    v5[9] = 0;
    dword_20DDE90 = (int)(uintptr_t)v5;
  }
  { G4_PlatformLog(
           6,
           "GLAds_cpp",
           "Fullscreen change state callback not implemented. Game will not be notified of fullscreen state change"); return 0; }
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_glads_GLAds_nativeCheckRewardCallback  (binary VA: 0xb79d80)
// Original: Java_com_gameloft_glads_GLAds_nativeCheckRewardCallback
// ----------------------------------------------------------------------------
int Java_com_gameloft_glads_GLAds_nativeCheckRewardCallback(int a1, int a2, int a3, char a4)
{
  int v4;
  uint32_t *v6;
  uint32_t *v7;

  if ( dword_20DDE90 == 0 )
  {
    v6 = (uint32_t *)opNew(0x28u);
    v6[2] = 0;
    v6[1] = 0;
    *v6 = (uint32_t)(uintptr_t)&off_206A728;
    v6[3] = 0;
    v6[4] = 0;
    v6[5] = 0;
    v6[6] = 0;
    v6[7] = 0;
    v6[8] = 0;
    v6[9] = 0;
    dword_20DDE90 = (int)(uintptr_t)v6;
  }
  else if ( *(uint32_t *)(dword_20DDE90 + 12) != 0 )
  {
    v4 = G4_VCALL<int>(a1, 676, a3, 0);
    if ( dword_20DDE90 != 0 )
    {
      (*(void (**)(int, bool))(dword_20DDE90 + 12))(v4, a4 != 0);
    }
    else
    {
      v7 = (uint32_t *)opNew(0x28u);
      v7[2] = 0;
      v7[1] = 0;
      v7[3] = 0;
      v7[4] = 0;
      v7[5] = 0;
      v7[6] = 0;
      v7[7] = 0;
      v7[8] = 0;
      v7[9] = 0;
      *v7 = (uint32_t)(uintptr_t)&off_206A728;
      dword_20DDE90 = (int)(uintptr_t)v7;
      ((void (*)(int, bool))dword_0)(v4, a4 != 0);
    }
    return G4_VCALL<int>(a1, 680, a3, v4);
  }
  { G4_PlatformLog(
           6,
           "GLAds_cpp",
           "Check reward callback not implemented. Game will not be notified to check for rewards"); return 0; }
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_glads_GLAds_nativeTrackEvent  (binary VA: 0xb79f20)
// Original: Java_com_gameloft_glads_GLAds_nativeTrackEvent
// ----------------------------------------------------------------------------
int Java_com_gameloft_glads_GLAds_nativeTrackEvent(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int v11;
  int v12;
  void (*v13)(int, int, int, int, int, int, int, int, int);
  uint32_t *v15;
  uint32_t *v16;

  if ( dword_20DDE90 == 0 )
  {
    v15 = (uint32_t *)opNew(0x28u);
    v15[2] = 0;
    v15[1] = 0;
    *v15 = (uint32_t)(uintptr_t)&off_206A728;
    v15[3] = 0;
    v15[4] = 0;
    v15[5] = 0;
    v15[6] = 0;
    v15[7] = 0;
    v15[8] = 0;
    v15[9] = 0;
    dword_20DDE90 = (int)(uintptr_t)v15;
  }
  else if ( *(uint32_t *)(dword_20DDE90 + 16) != 0 )
  {
    v11 = G4_VCALL<int>(a1, 676, a10, 0);
    v12 = G4_VCALL<int>(a1, 676, a11, 0);
    if ( dword_20DDE90 != 0 )
    {
      v13 = *(void (**)(int, int, int, int, int, int, int, int, int))(dword_20DDE90 + 16);
    }
    else
    {
      v16 = (uint32_t *)opNew(0x28u);
      v16[2] = 0;
      v16[1] = 0;
      *v16 = (uint32_t)(uintptr_t)&off_206A728;
      v16[3] = 0;
      v16[4] = 0;
      v16[5] = 0;
      v16[6] = 0;
      v16[7] = 0;
      v16[8] = 0;
      v16[9] = 0;
      dword_20DDE90 = (int)(uintptr_t)v16;
      v13 = nullptr;
    }
    v13(a3, a4, a5, a6, a7, a8, a9, v11, v12);
    G4_VCALL<void>(a1, 680, a10, v11);
    return G4_VCALL<int>(a1, 680, a11, v12);
  }
  { G4_PlatformLog(
           6,
           "GLAds_cpp",
           "Notify Glot callback not implemented. Game will not be notified of tracking events"); return 0; }
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_glads_GLAds_nativeIngameRedirectTo  (binary VA: 0xb7a190)
// Original: Java_com_gameloft_glads_GLAds_nativeIngameRedirectTo
// ----------------------------------------------------------------------------
int Java_com_gameloft_glads_GLAds_nativeIngameRedirectTo(int a1, int a2, int a3)
{
  int v3;
  uint32_t *v5;
  uint32_t *v6;

  if ( dword_20DDE90 == 0 )
  {
    v5 = (uint32_t *)opNew(0x28u);
    v5[2] = 0;
    v5[1] = 0;
    *v5 = (uint32_t)(uintptr_t)&off_206A728;
    v5[3] = 0;
    v5[4] = 0;
    v5[5] = 0;
    v5[6] = 0;
    v5[7] = 0;
    v5[8] = 0;
    v5[9] = 0;
    dword_20DDE90 = (int)(uintptr_t)v5;
  }
  else if ( *(uint32_t *)(dword_20DDE90 + 20) != 0 )
  {
    v3 = G4_VCALL<int>(a1, 676, a3, 0);
    if ( dword_20DDE90 != 0 )
    {
      (*(void (**)(int))(dword_20DDE90 + 20))(v3);
    }
    else
    {
      v6 = (uint32_t *)opNew(0x28u);
      v6[2] = 0;
      v6[1] = 0;
      *v6 = (uint32_t)(uintptr_t)&off_206A728;
      v6[3] = 0;
      v6[4] = 0;
      v6[5] = 0;
      v6[6] = 0;
      v6[7] = 0;
      v6[8] = 0;
      v6[9] = 0;
      dword_20DDE90 = (int)(uintptr_t)v6;
      ((void (*)(int))dword_0)(v3);
    }
    return G4_VCALL<int>(a1, 680, a3, v3);
  }
  { G4_PlatformLog(
           6,
           "GLAds_cpp",
           "In game redirect callback not implemented. Game will not be notified of goto: redirects from ads"); return 0; }
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_glads_GLAds_nativeFullScreenAdWillDisplayCallback  (binary VA: 0xb7a310)
// Original: Java_com_gameloft_glads_GLAds_nativeFullScreenAdWillDisplayCallback
// ----------------------------------------------------------------------------
int Java_com_gameloft_glads_GLAds_nativeFullScreenAdWillDisplayCallback()
{
  int (*v0)(void);
  uint32_t *v2;

  if ( dword_20DDE90 != 0 )
  {
    v0 = *(int (**)(void))(dword_20DDE90 + 24);
    if ( v0 != nullptr )
      return v0();
  }
  else
  {
    v2 = (uint32_t *)opNew(0x28u);
    v2[2] = 0;
    v2[1] = 0;
    *v2 = (uint32_t)(uintptr_t)&off_206A728;
    v2[3] = 0;
    v2[4] = 0;
    v2[5] = 0;
    v2[6] = 0;
    v2[7] = 0;
    v2[8] = 0;
    v2[9] = 0;
    dword_20DDE90 = (int)(uintptr_t)v2;
  }
  { G4_PlatformLog(
           6,
           "GLAds_cpp",
           "Fullscreen ad will display callback not implemented. Game will not be notified when a fullscreen ad is displayed on screen"); return 0; }
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_glads_GLAds_nativeFullScreenAdWillNotDisplayCallback  (binary VA: 0xb7a3c0)
// Original: Java_com_gameloft_glads_GLAds_nativeFullScreenAdWillNotDisplayCallback
// ----------------------------------------------------------------------------
int Java_com_gameloft_glads_GLAds_nativeFullScreenAdWillNotDisplayCallback(int a1, int a2, int a3)
{
  int (*v3)(int);
  uint32_t *v5;

  if ( dword_20DDE90 != 0 )
  {
    v3 = *(int (**)(int))(dword_20DDE90 + 28);
    if ( v3 != nullptr )
      return v3(a3);
  }
  else
  {
    v5 = (uint32_t *)opNew(0x28u);
    v5[2] = 0;
    v5[1] = 0;
    *v5 = (uint32_t)(uintptr_t)&off_206A728;
    v5[3] = 0;
    v5[4] = 0;
    v5[5] = 0;
    v5[6] = 0;
    v5[7] = 0;
    v5[8] = 0;
    v5[9] = 0;
    dword_20DDE90 = (int)(uintptr_t)v5;
  }
  { G4_PlatformLog(
           6,
           "GLAds_cpp",
           "Fullscreen ad will not display callback not implemented. Game will not be notified when a fullscreen ad fails to be shown"); return 0; }
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_glads_GLAds_nativeFullScreenAdWillHideCallback  (binary VA: 0xb7a470)
// Original: Java_com_gameloft_glads_GLAds_nativeFullScreenAdWillHideCallback
// ----------------------------------------------------------------------------
int Java_com_gameloft_glads_GLAds_nativeFullScreenAdWillHideCallback(int a1, int a2, char a3)
{
  int (*v3)(bool);
  uint32_t *v5;

  if ( dword_20DDE90 != 0 )
  {
    v3 = *(int (**)(bool))(dword_20DDE90 + 32);
    if ( v3 != nullptr )
      return v3(a3 != 0);
  }
  else
  {
    v5 = (uint32_t *)opNew(0x28u);
    v5[2] = 0;
    v5[1] = 0;
    *v5 = (uint32_t)(uintptr_t)&off_206A728;
    v5[3] = 0;
    v5[4] = 0;
    v5[5] = 0;
    v5[6] = 0;
    v5[7] = 0;
    v5[8] = 0;
    v5[9] = 0;
    dword_20DDE90 = (int)(uintptr_t)v5;
  }
  { G4_PlatformLog(
           6,
           "GLAds_cpp",
           "Fullscreen ad will hide callback not implemented. Game will not be notified when a fullscreen is hidden"); return 0; }
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_glads_GLAds_nativeNotifyAdAvailable  (binary VA: 0xb7a530)
// Original: Java_com_gameloft_glads_GLAds_nativeNotifyAdAvailable
// ----------------------------------------------------------------------------
int Java_com_gameloft_glads_GLAds_nativeNotifyAdAvailable(int a1, int a2, int a3, int a4)
{
  int v4;
  uint32_t *v6;
  uint32_t *v7;

  if ( dword_20DDE90 == 0 )
  {
    v6 = (uint32_t *)opNew(0x28u);
    v6[2] = 0;
    v6[1] = 0;
    *v6 = (uint32_t)(uintptr_t)&off_206A728;
    v6[3] = 0;
    v6[4] = 0;
    v6[5] = 0;
    v6[6] = 0;
    v6[7] = 0;
    v6[8] = 0;
    v6[9] = 0;
    dword_20DDE90 = (int)(uintptr_t)v6;
  }
  else if ( *(uint32_t *)(dword_20DDE90 + 36) != 0 )
  {
    v4 = G4_VCALL<int>(a1, 676, a3, 0);
    if ( dword_20DDE90 != 0 )
    {
      (*(void (**)(int, int))(dword_20DDE90 + 36))(v4, a4);
    }
    else
    {
      v7 = (uint32_t *)opNew(0x28u);
      v7[2] = 0;
      v7[1] = 0;
      *v7 = (uint32_t)(uintptr_t)&off_206A728;
      v7[3] = 0;
      v7[4] = 0;
      v7[5] = 0;
      v7[6] = 0;
      v7[7] = 0;
      v7[8] = 0;
      v7[9] = 0;
      dword_20DDE90 = (int)(uintptr_t)v7;
      ((void (*)(int, int))dword_0)(v4, a4);
    }
    return G4_VCALL<int>(a1, 680, a3, v4);
  }
  { G4_PlatformLog(
           6,
           "GLAds_cpp",
           "Notify ad available callback not implemented. Game will not be notified when an ad is available for a given location"); return 0; }
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_initGL  (binary VA: 0xc6d640)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_initGL
// ----------------------------------------------------------------------------
void Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_initGL()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_setPaths  (binary VA: 0xc6d650)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_setPaths
// ----------------------------------------------------------------------------
void Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_setPaths()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_pause  (binary VA: 0xc6d660)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_pause
// ----------------------------------------------------------------------------
uint32_t * Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_pause()
{
  return appPause();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_resume  (binary VA: 0xc6d680)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_resume
// ----------------------------------------------------------------------------
uint32_t * Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_resume()
{
  return appResume();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_systemTimeChanged  (binary VA: 0xc6d6a0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_systemTimeChanged
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_systemTimeChanged()
{
  return sub_B974C0();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_accelerometerEvent  (binary VA: 0xc6d6c0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_accelerometerEvent
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_accelerometerEvent(int a1, int a2, glf::Self *a3, float a4, float a5)
{
  float v6;

  (void)v6;
  return glf::AndroidAccelerometerEvent(a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_onKeyboardFinish  (binary VA: 0xc6d700)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_onKeyboardFinish
// ----------------------------------------------------------------------------
void * Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_onKeyboardFinish()
{
  glf::isFinishedUsingKB = 1;
  return &glf::isFinishedUsingKB;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_init  (binary VA: 0xc6da20)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_init
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_init(glf::Self *a1, int a2)
{
  int v2;
  int v3;

  G4_VCALL<void>(a1, 876, &dword_20DEC20);
  v2 = G4_VCALL<int>(a1, 84, a2);
  (void)v3;
  dword_20DEC28 = v2;
  dword_20DEC24 = G4_VCALL<int>(
                    a1,
                    452,
                    v2,
                    "getResource",
                    "(Ljava/lang/String;)[B");
  dword_20DEC2C = G4_VCALL<int>(a1, 452, dword_20DEC28, "setupPaths", "()V");
  dword_20DEC30 = G4_VCALL<int>(a1, 452, dword_20DEC28, "createView", "()V");
  dword_20DEC34 = G4_VCALL<int>(a1, 452, dword_20DEC28, "setViewSettings", "(IIIII)V");
  dword_20DEC38 = G4_VCALL<int>(a1, 452, dword_20DEC28, "setCurrentContext", "(I)Z");
  dword_20DEC3C = G4_VCALL<int>(a1, 452, dword_20DEC28, "enableAccelerometer", "(ZF)V");
  dword_20DEC40 = G4_VCALL<int>(a1, 452, dword_20DEC28, "getKeyboardText", "()[B");
  dword_20DEC44 = G4_VCALL<int>(a1, 452, dword_20DEC28, "setKeyboard", "(ILjava/lang/String;IIIII)V");
  dword_20DEC48 = G4_VCALL<int>(a1, 452, dword_20DEC28, "setKeyboardText", "(Ljava/lang/String;)V");
  dword_20DEC4C = G4_VCALL<int>(a1, 452, dword_20DEC28, "isReturnkeyboard", "()I");
  dword_20DEC50 = G4_VCALL<int>(a1, 452, dword_20DEC28, "isKeyboardRequired", "()I");
  glf::isShowingKB[0] = 0;
  glf::isFinishedUsingKB = 1;
  return glf::AndroidInit();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_stateChanged  (binary VA: 0xc6dce0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_stateChanged
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_stateChanged(int a1, int a2, char a3)
{
  bool v4;

  (void)v4;
  return glf::AndroidStateChanged((glf::Self *)(a3 != 0));
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_resize  (binary VA: 0xc6dda0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_resize
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_resize(int a1, int a2, glf::Self *a3, int a4)
{
  int v5;

  (void)v5;
  return glf::AndroidResizeScreen(a3, a4);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_step  (binary VA: 0xc6de00)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_step
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_step()
{
  glf::Self *v1;

  (void)v1;
  return glf::AndroidUpdate();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_orientationChanged  (binary VA: 0xc6df80)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_orientationChanged
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_orientationChanged(int a1, int a2, glf::Self *a3)
{
  int v4;

  (void)v4;
  return glf::AndroidOrientationChanged(a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_setNumExtraContext  (binary VA: 0xc6dfe0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_setNumExtraContext
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_setNumExtraContext(int a1, int a2, glf::Self *a3)
{
  int v4;

  (void)v4;
  return glf::AndroidSetNumExtraContext(a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_touchEvent  (binary VA: 0xc6e7d0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_touchEvent
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_touchEvent(int a1, int a2, glf::Self *a3, int a4, int a5, int a6)
{
  int v7;

  (void)v7;
  return glf::AndroidAddTouchEvent(a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_getNumExtraContext  (binary VA: 0xc6e810)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_getNumExtraContext
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_getNumExtraContext()
{
  glf::App::Self *Instance;
  glf::App::Self *v2;

  Instance = (glf::App::Self *)glf::App::GetInstance(v2);
  return *(uint32_t *)(glf::App::GetCreationSettings(Instance) + 60);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_keyboardKeyPressed  (binary VA: 0xc6ecd0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_keyboardKeyPressed
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_keyboardKeyPressed(int a1, int a2, char a3, int a4)
{
  int Milliseconds;
  int v5;
  glf::App::Self *Instance;
  glf::InputManager::Self *InputMgr;
  int result;
  glf::App::Self *v9;
  glf::InputManager::Self *v10;
  int Keyboard;
  int v12;
  int EventMgr;
  typedef glf::Self *_g4_t_v14;
  typedef glf::App::Self *_g4_t_v15;
  typedef glf::App::Self *_g4_t_v16;
  typedef uint16_t _g4_t_v17[2];
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v15)) > _g4_s1 ? (0u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v16)) > _g4_s2 ? (0u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v18)) > _g4_s4 ? (20u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v19)) > _g4_s5 ? (24u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v20)) > _g4_s6 ? (28u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v21)) > _g4_s7 ? (32u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v22)) > _g4_s8 ? (36u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v23)) > _g4_s9 ? (40u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v24)) > _g4_s10 ? (44u + sizeof(_g4_t_v24)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);

  v17[0] = 204;
  v17[1] = 0;
  Milliseconds = glf::GetMilliseconds(v14);
  v20 = v5;
  v19 = Milliseconds;
  v21 = 0;
  v22 = -1;
  v23 = 0;
  v24 = 0;
  Instance = (glf::App::Self *)glf::App::GetInstance(v15);
  InputMgr = (glf::InputManager::Self *)glf::App::GetInputMgr(Instance);
  result = glf::InputManager::GetKeyboard(InputMgr, 0);
  v18 = result;
  if ( a4 > 0 )
  {
    v21 = a3;
    v9 = (glf::App::Self *)glf::App::GetInstance(v16);
    v10 = (glf::InputManager::Self *)glf::App::GetInputMgr(v9);
    Keyboard = glf::InputManager::GetKeyboard(v10, 0);
    v12 = 0;
    while ( a3 != *(uint32_t *)(Keyboard + 4 * v12 + 492) )
    {
      if ( ++v12 == 103 )
      {
        v12 = -1;
        break;
      }
    }
    v22 = v12;
    goto LABEL_6;
  }
  if ( a4 == 0 )
  {
    v21 = 0;
    v22 = 54;
LABEL_6:
    EventMgr = glf::GetEventMgr(v16);
    return glf::EventManager::PostEvent(EventMgr, v17);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_getViewSettings  (binary VA: 0xc71800)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_getViewSettings
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_getViewSettings()
{
  int v0;
  uint16_t *v1;
  unsigned int v2;
  uint16_t *v3;
  char *SDFolderPathPointer;
  glf::Self *s;

  v0 = opNewArray(0x200u);
  v1 = (uint16_t *)v0;
  v2 = 512;
  m_gAppPath = (uint32_t)(uintptr_t)v0;
  if ( (v0 & 1) != 0 )
  {
    v1 = (uint16_t *)(v0 + 1);
    *(uint8_t *)v0 = 0;
    LOWORD(v2) = 511;
    if ( ((v0 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( (v0 & 2) == 0 )
  {
    goto LABEL_3;
  }
  *v1 = 0;
  v2 -= 2;
  ++v1;
LABEL_3:
  memset(v1, 0, 4 * (v2 >> 2));
  v3 = &v1[2 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
    *v3++ = 0;
  if ( (v2 & 1) != 0 )
    *(uint8_t *)v3 = 0;
  SDFolderPathPointer = GetSDFolderPathPointer();
  sprintf((char *)m_gAppPath, "%s/", SDFolderPathPointer);
  return glf::AndroidGetViewSettings();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_destroy  (binary VA: 0xc71950)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_destroy
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_destroy()
{
  glf::Self *v1;

  (void)v1;
  return glf::AndroidDestroy();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeInit  (binary VA: 0x142f0e0)
// Original: Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeInit
// ----------------------------------------------------------------------------
int Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeInit(int a1, int a2)
{
  int result;

  result = a1;
  if ( a1 != 0 )
  {
    result = G4_VCALL<int>(a1, 84, a2);
    dword_2119A00 = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogSetCancel  (binary VA: 0x142f120)
// Original: Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogSetCancel
// ----------------------------------------------------------------------------
int Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogSetCancel()
{
  sociallib::ClientSNSInterface::Self *v0;
  int result;

  v0 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v0 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v0);
    dword_20D2420 = (int)(uintptr_t)v0;
  }
  result = sociallib::ClientSNSInterface::getCurrentActiveRequestState(v0);
  if ( result != 0 )
    *(uint8_t *)(result + 205) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeTrackDeferredAppLink  (binary VA: 0x142f190)
// Original: Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeTrackDeferredAppLink
// ----------------------------------------------------------------------------
int Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeTrackDeferredAppLink(int a1, int a2, int a3)
{
  int result;
  char *v4;
  int v5;
  void *v6;
  typedef sociallib::ClientSNSInterface::Self *_g4_t_v7;
  typedef char _g4_t_v8;
  typedef uint16_t _g4_t_v9[3];
  typedef int _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v8)) > _g4_s1 ? (15u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (22u + sizeof(_g4_t_v9)) > _g4_s2 ? (22u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 15u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 22u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  *(uint32_t *)&v9[1] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v9[1], 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v9[1], 0);
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  result = *(uint32_t *)&v9[1];
  if ( *(uint32_t *)&v9[1] != 0 )
  {
    v4 = (char *)(*(int (**)(uint32_t, int, uint32_t))(**(uint32_t **)&v9[1] + 676))(*(uint32_t *)&v9[1], a3, 0);
    g4_std::string::construct_from_cstr((int)(uintptr_t)v10, v4, (int)(uintptr_t)v9);
    v5 = dword_20D2420;
    if ( dword_20D2420 == 0 )
    {
      v7 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
      sociallib::ClientSNSInterface::Construct(v7);
      v5 = (int)(uintptr_t)v7;
      dword_20D2420 = (int)(uintptr_t)v7;
    }
    sociallib::ClientSNSInterface::trackDefferedAppLink(v5, (int)(uintptr_t)v10);
    v6 = (void *)(v10[0] - 12);
    if ( (uint32_t *)(v10[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    result = (*(int (**)(uint32_t, int, char *))(**(uint32_t **)&v9[1] + 680))(*(uint32_t *)&v9[1], a3, v4);
  }
  if ( v8 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogDidComplete  (binary VA: 0x1431620)
// Original: Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogDidComplete
// ----------------------------------------------------------------------------
int Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogDidComplete()
{
  return (int)(uintptr_t)appGLSocialLib_OnFBDialogDidComplete();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBFailWithError  (binary VA: 0x14316c0)
// Original: Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBFailWithError
// ----------------------------------------------------------------------------
int Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBFailWithError(int a1, int a2, int a3)
{
  int result;
  char *v4;
  void *v5;
  typedef char _g4_t_v6;
  typedef uint16_t _g4_t_v7[3];
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v6)) > _g4_s0 ? (15u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (22u + sizeof(_g4_t_v7)) > _g4_s1 ? (22u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 22u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  *(uint32_t *)&v7[1] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v7[1], 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v7[1], 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  result = *(uint32_t *)&v7[1];
  if ( *(uint32_t *)&v7[1] != 0 )
  {
    v4 = (char *)(*(int (**)(uint32_t, int, uint32_t))(**(uint32_t **)&v7[1] + 676))(*(uint32_t *)&v7[1], a3, 0);
    g4_std::string::construct_from_cstr((int)(uintptr_t)v8, v4, (int)(uintptr_t)v7);
    appGLSocialLib_OnFBFailWithError((int)(uintptr_t)v8);
    v5 = (void *)(v8[0] - 12);
    if ( (uint32_t *)(v8[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    result = (*(int (**)(uint32_t, int, char *))(**(uint32_t **)&v7[1] + 680))(*(uint32_t *)&v7[1], a3, v4);
  }
  if ( v6 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogDidNotComplete  (binary VA: 0x1431b90)
// Original: Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogDidNotComplete
// ----------------------------------------------------------------------------
int Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogDidNotComplete()
{
  return appGLSocialLib_OnFBDialogDidNotComplete();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDataLoad  (binary VA: 0x1438050)
// Original: Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDataLoad
// ----------------------------------------------------------------------------
int Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDataLoad(int a1, int a2, int a3)
{
  int result;
  char *v4;
  void *v5;
  typedef char _g4_t_v6;
  typedef uint16_t _g4_t_v7[3];
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v6)) > _g4_s0 ? (15u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (22u + sizeof(_g4_t_v7)) > _g4_s1 ? (22u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 22u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  *(uint32_t *)&v7[1] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v7[1], 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v7[1], 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  result = *(uint32_t *)&v7[1];
  if ( *(uint32_t *)&v7[1] != 0 )
  {
    v4 = (char *)(*(int (**)(uint32_t, int, uint32_t))(**(uint32_t **)&v7[1] + 676))(*(uint32_t *)&v7[1], a3, 0);
    g4_std::string::construct_from_cstr((int)(uintptr_t)v8, v4, (int)(uintptr_t)v7);
    appGLSocialLib_OnFBDataLoad(v8);
    v5 = (void *)(v8[0] - 12);
    if ( (uint32_t *)(v8[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    result = (*(int (**)(uint32_t, int, char *))(**(uint32_t **)&v7[1] + 680))(*(uint32_t *)&v7[1], a3, v4);
  }
  if ( v6 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_PlatformAndroid_nativeInit  (binary VA: 0x143b520)
// Original: Java_com_gameloft_GLSocialLib_PlatformAndroid_nativeInit
// ----------------------------------------------------------------------------
int Java_com_gameloft_GLSocialLib_PlatformAndroid_nativeInit(int a1, int a2)
{
  int result;

  result = G4_VCALL<int>(a1, 84, a2);
  dword_2119A88 = result;
  dword_2119A8C = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeInit  (binary VA: 0x143c160)
// Original: Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeInit
// ----------------------------------------------------------------------------
int Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeInit(int a1, int a2)
{
  int result;

  result = G4_VCALL<int>(a1, 84, a2);
  dword_2119A94 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIComplete  (binary VA: 0x143c190)
// Original: Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIComplete
// ----------------------------------------------------------------------------
uint32_t * Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIComplete()
{
  sociallib::ClientSNSInterface::Self *v0;
  uint32_t *result;

  v0 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v0 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v0);
    dword_20D2420 = (int)(uintptr_t)v0;
  }
  result = (uint32_t *)sociallib::ClientSNSInterface::getCurrentActiveRequestState(v0);
  if ( result != nullptr && result[4] == 13 )
  {
    switch ( result[2] )
    {
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x17:
      case 0x19:
      case 0x1A:
      case 0x21:
      case 0x25:
      case 0x2D:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
        result[1] = 2;
        break;
      default:
        return result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIDidNotComplete  (binary VA: 0x143c230)
// Original: Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIDidNotComplete
// ----------------------------------------------------------------------------
int Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIDidNotComplete(int a1, int a2, int a3)
{
  sociallib::ClientSNSInterface::Self *v3;
  uint32_t *CurrentActiveRequestState;
  int result;
  char v6;
  bool v7;
  size_t v8;
  char *v9;
  char v10;
  typedef char _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char *_g4_t_s;
  typedef uint32_t _g4_t_v14[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_s)) > _g4_s2 ? (8u + sizeof(_g4_t_s)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v14)) > _g4_s3 ? (28u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  v3 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v3 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v3);
    dword_20D2420 = (int)(uintptr_t)v3;
  }
  CurrentActiveRequestState = (uint32_t *)sociallib::ClientSNSInterface::getCurrentActiveRequestState(v3);
  v14[0] = 0;
  result = G4_VCALL<int>(AndroidOS_JavaVM, 24, v14, 65542);
  v6 = 0;
  if ( result == -2 )
  {
    result = G4_VCALL<int>(AndroidOS_JavaVM, 16, v14, 0);
    v6 = 1;
  }
  if ( CurrentActiveRequestState != nullptr && v14[0] != 0 && CurrentActiveRequestState[4] == 13 )
  {
    v11 = v6;
    g4_std::string::clear(CurrentActiveRequestState + 15, 0, *(uint32_t *)(CurrentActiveRequestState[15] - 12), 0);
    g4_std::string::append((int)(uintptr_t)(CurrentActiveRequestState + 15), "GameAPI Android SNS ERROR:", 0x1Au);
    s = (char *)G4_VCALL<int>(v14[0], 676, a3, 0);
    v7 = XP_API_STRLEN(s) == 0;
    v8 = 7;
    v9 = "unknown";
    v10 = v11;
    if ( !v7 )
    {
      v8 = strlen(s);
      v9 = s;
      v10 = v11;
    }
    v12 = v10;
    g4_std::string::append((int)(uintptr_t)(CurrentActiveRequestState + 15), v9, v8);
    result = G4_VCALL<int>(v14[0], 680, a3, s);
    CurrentActiveRequestState[3] = 1;
    CurrentActiveRequestState[1] = 4;
    v6 = v12;
  }
  if ( v6 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPISetCanceled  (binary VA: 0x143c400)
// Original: Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPISetCanceled
// ----------------------------------------------------------------------------
int Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPISetCanceled()
{
  sociallib::ClientSNSInterface::Self *v0;
  int result;

  v0 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v0 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v0);
    dword_20D2420 = (int)(uintptr_t)v0;
  }
  result = sociallib::ClientSNSInterface::getCurrentActiveRequestState(v0);
  if ( result != 0 )
    *(uint8_t *)(result + 205) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIDidPlusOneButton  (binary VA: 0x143c470)
// Original: Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIDidPlusOneButton
// ----------------------------------------------------------------------------
int Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIDidPlusOneButton()
{
  sociallib::SNSRequestState::Self *v0;
  int result;
  sociallib::ClientSNSInterface::Self *v2;

  v0 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
  result = sociallib::SNSRequestState::Construct(v0, 13, 77, 0, 14, 0, 0);
  if ( v0 != nullptr )
  {
    *((uint32_t *)v0 + 1) = 2;
    v2 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
    if ( dword_20D2420 == 0 )
    {
      v2 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
      sociallib::ClientSNSInterface::Construct(v2);
      dword_20D2420 = (int)(uintptr_t)v2;
    }
    return sociallib::ClientSNSInterface::insertRequest(v2, v0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPINotifyAuthChanges  (binary VA: 0x143c530)
// Original: Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPINotifyAuthChanges
// ----------------------------------------------------------------------------
int Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPINotifyAuthChanges(int a1, int a2, char a3, int a4)
{
  sociallib::SNSRequestState::Self *v4;
  int result;
  sociallib::ClientSNSInterface::Self *v6;
  sociallib::SNSRequestState::Self *v7;
  char *s;
  sociallib::ClientSNSInterface::Self *v9;
  size_t v10;
  typedef char _g4_t_v11;
  typedef uint32_t _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v11)) > _g4_s0 ? (15u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v12)) > _g4_s1 ? (28u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 15u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  if ( a3 == 1 )
  {
    v7 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    result = sociallib::SNSRequestState::Construct(v7, 13, 129, 0, 18, 0, 0);
    if ( v7 != nullptr )
    {
      sub_143BBF0();
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
      if ( v12[0] != 0 )
      {
        s = (char *)G4_VCALL<int>(v12[0], 676, a4, 0);
        if ( XP_API_STRLEN(s) != 0 )
        {
          g4_std::string::clear((char *)v7 + 60, 0, *(uint32_t *)(*((uint32_t *)v7 + 15) - 12), 0);
          v10 = strlen(s);
          g4_std::string::append((int)(uintptr_t)v7 + 60, s, v10);
          *((uint32_t *)v7 + 3) = 1;
          *((uint32_t *)v7 + 1) = 4;
        }
        else
        {
          *((uint32_t *)v7 + 1) = 2;
        }
        G4_VCALL<void>(v12[0], 680, a4, s);
      }
      else
      {
        g4_std::string::clear((char *)v7 + 60, 0, *(uint32_t *)(*((uint32_t *)v7 + 15) - 12), 0);
        g4_std::string::assign((int)(uintptr_t)v7 + 60, "The library was unabe to retrieve the JNI Env", 0x2Du);
        *((uint32_t *)v7 + 3) = 1;
        *((uint32_t *)v7 + 1) = 4;
      }
      v9 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
      if ( dword_20D2420 == 0 )
      {
        v9 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
        sociallib::ClientSNSInterface::Construct(v9);
        dword_20D2420 = (int)(uintptr_t)v9;
      }
      result = sociallib::ClientSNSInterface::pushSecondRequest(v9, v7);
      if ( v11 != 0 )
        return G4_VCALL<int>(AndroidOS_JavaVM, 20);
    }
  }
  else
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    result = sociallib::SNSRequestState::Construct(v4, 13, 133, 0, 19, 0, 0);
    if ( v4 != nullptr )
    {
      *((uint32_t *)v4 + 1) = 2;
      v6 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
      if ( dword_20D2420 == 0 )
      {
        v6 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
        sociallib::ClientSNSInterface::Construct(v6);
        dword_20D2420 = (int)(uintptr_t)v6;
      }
      return sociallib::ClientSNSInterface::pushSecondRequest(v6, v4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPICompleteWithData  (binary VA: 0x1441960)
// Original: Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPICompleteWithData
// ----------------------------------------------------------------------------
int Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPICompleteWithData(int a1, int a2, int a3, char a4, int a5)
{
  char v5; // di
  int result;
  int v7;
  const char *v8;
  signed int v9;
  typedef signed int _g4_t_v10;
  typedef char *_g4_t_v11;
  typedef uint32_t _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v12[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v12, 65542) == -2 )
  {
    v5 = 1;
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v12, 0);
  }
  else
  {
    v5 = 0;
  }
  result = v12[0];
  if ( v12[0] != 0 )
  {
    v7 = *(uint32_t *)v12[0];
    if ( a4 == 1 )
    {
      v9 = (*(int (**)(uint32_t, int))(v7 + 684))(v12[0], a5);
      if ( v9 > 0 )
      {
        v10 = v9;
        v11 = (char *)opNewArray(v9);
        G4_VCALL<void>(v12[0], 800, a5, 0, v10, v11);
        GLSocialLib_OnGameAPIDataLoad(v11);
      }
      result = G4_VCALL<int>(v12[0], 92, a5);
    }
    else
    {
      v8 = (const char *)(*(int (**)(uint32_t, int, uint32_t))(v7 + 676))(v12[0], a3, 0);
      GLSocialLib_OnGameAPIDataLoad((char *)v8);
      result = G4_VCALL<int>(v12[0], 680, a3, v8);
    }
  }
  if ( v5 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnErrorMessage  (binary VA: 0x19605c0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnErrorMessage
// ----------------------------------------------------------------------------
void Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnErrorMessage()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnViewState  (binary VA: 0x19605d0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnViewState
// ----------------------------------------------------------------------------
void Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnViewState(int a1, int a2, int a3)
{
  glwebtools::Mutex::Self *v3;
  int v4;
  int v5;

  if ( a3 != 2 && dword_2140420 != 0 )
  {
    v3 = *(glwebtools::Mutex::Self **)(dword_2140420 + 104);
    glwebtools::Mutex::Lock(v3);
    g4_std::string::clear(
      *(uint32_t *)(dword_2140420 + 104) + 8,
      0,
      *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(dword_2140420 + 104) + 8) - 12),
      0);
    v4 = *(uint32_t *)(dword_2140420 + 104);
    v5 = *(uint32_t *)(v4 + 148);
    if ( v5 != 0 )
      (*(void (**)(int, uint32_t))((v5 & 0xFFFFFFFE) + 4))(v4 + 152, *(uint8_t *)(v4 + 41));
    glwebtools::Mutex::Unlock(v3);
  }
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnAssetTracking  (binary VA: 0x1967340)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnAssetTracking
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_PopUpsBridgeClass_nativeOnAssetTracking(int a1, int a2, int a3)
{
  int v3;
  int v4;
  bool v5;
  int v6;
  int v7;
  uint32_t *v8;
  int *i;
  char v10; // di
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  void *v16;
  volatile int32_t *v17;
  void *v18;
  volatile int32_t *v19;
  volatile int32_t *v20;
  volatile int32_t *v21;
  void (*v22)(uint32_t *, int *);
  void (*v23)(uint32_t *, uint8_t *);
  void *v24;
  void *v25;
  void *v26;
  int result;
  void *v28;
  unsigned int v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef Json::Value::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int *_g4_t_v36;
  typedef glwebtools::Mutex::Self *_g4_t_v37;
  typedef glwebtools::Mutex::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef char *_g4_t_v40;
  typedef char *_g4_t_v41;
  typedef void *_g4_t_v42;
  typedef void *_g4_t_v43;
  typedef void *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint32_t _g4_t_v49[4];
  typedef uint32_t _g4_t_v50[4];
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint8_t _g4_t_v55[16];
  typedef volatile int32_t *_g4_t_v56;
  typedef volatile int32_t *_g4_t_v57;
  typedef volatile int32_t *_g4_t_v58;
  typedef uint32_t _g4_t_v59[2];
  typedef volatile int32_t *_g4_t_v60;
  typedef uint32_t _g4_t_v61[2];
  typedef char _g4_t_v62;
  typedef char _g4_t_v63;
  typedef char _g4_t_v64;
  typedef int _g4_t_v65;
  typedef char _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef char _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef void *_g4_t_v80;
  typedef int *_g4_t_v81;
  typedef int *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef int *_g4_t_v84;
  typedef int *_g4_t_v85;
  typedef int _g4_t_v86;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (8u + sizeof(_g4_t_v30)) > _g4_s0 ? (8u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v31)) > _g4_s1 ? (12u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v32)) > _g4_s2 ? (16u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v33)) > _g4_s3 ? (20u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (23u + sizeof(_g4_t_v34)) > _g4_s4 ? (23u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v35)) > _g4_s5 ? (24u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v36)) > _g4_s6 ? (24u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v37)) > _g4_s7 ? (28u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v38)) > _g4_s8 ? (28u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v39)) > _g4_s9 ? (32u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v40)) > _g4_s10 ? (36u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v41)) > _g4_s11 ? (36u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v42)) > _g4_s12 ? (40u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v43)) > _g4_s13 ? (40u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v44)) > _g4_s14 ? (40u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v45)) > _g4_s15 ? (44u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v46)) > _g4_s16 ? (48u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v47)) > _g4_s17 ? (52u + sizeof(_g4_t_v47)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v48)) > _g4_s18 ? (56u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v49)) > _g4_s19 ? (60u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v50)) > _g4_s20 ? (76u + sizeof(_g4_t_v50)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v51)) > _g4_s21 ? (92u + sizeof(_g4_t_v51)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v52)) > _g4_s22 ? (96u + sizeof(_g4_t_v52)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v53)) > _g4_s23 ? (100u + sizeof(_g4_t_v53)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v54)) > _g4_s24 ? (104u + sizeof(_g4_t_v54)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v55)) > _g4_s25 ? (108u + sizeof(_g4_t_v55)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v56)) > _g4_s26 ? (124u + sizeof(_g4_t_v56)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v57)) > _g4_s27 ? (128u + sizeof(_g4_t_v57)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v58)) > _g4_s28 ? (132u + sizeof(_g4_t_v58)) : _g4_s28,
    _g4_s30 = (136u + sizeof(_g4_t_v59)) > _g4_s29 ? (136u + sizeof(_g4_t_v59)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v60)) > _g4_s30 ? (144u + sizeof(_g4_t_v60)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v61)) > _g4_s31 ? (148u + sizeof(_g4_t_v61)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v62)) > _g4_s32 ? (156u + sizeof(_g4_t_v62)) : _g4_s32,
    _g4_s34 = (157u + sizeof(_g4_t_v63)) > _g4_s33 ? (157u + sizeof(_g4_t_v63)) : _g4_s33,
    _g4_s35 = (158u + sizeof(_g4_t_v64)) > _g4_s34 ? (158u + sizeof(_g4_t_v64)) : _g4_s34,
    _g4_s36 = (160u + sizeof(_g4_t_v65)) > _g4_s35 ? (160u + sizeof(_g4_t_v65)) : _g4_s35,
    _g4_s37 = (164u + sizeof(_g4_t_v66)) > _g4_s36 ? (164u + sizeof(_g4_t_v66)) : _g4_s36,
    _g4_s38 = (168u + sizeof(_g4_t_v67)) > _g4_s37 ? (168u + sizeof(_g4_t_v67)) : _g4_s37,
    _g4_s39 = (172u + sizeof(_g4_t_v68)) > _g4_s38 ? (172u + sizeof(_g4_t_v68)) : _g4_s38,
    _g4_s40 = (176u + sizeof(_g4_t_v69)) > _g4_s39 ? (176u + sizeof(_g4_t_v69)) : _g4_s39,
    _g4_s41 = (180u + sizeof(_g4_t_v70)) > _g4_s40 ? (180u + sizeof(_g4_t_v70)) : _g4_s40,
    _g4_s42 = (184u + sizeof(_g4_t_v71)) > _g4_s41 ? (184u + sizeof(_g4_t_v71)) : _g4_s41,
    _g4_s43 = (188u + sizeof(_g4_t_v72)) > _g4_s42 ? (188u + sizeof(_g4_t_v72)) : _g4_s42,
    _g4_s44 = (192u + sizeof(_g4_t_v73)) > _g4_s43 ? (192u + sizeof(_g4_t_v73)) : _g4_s43,
    _g4_s45 = (196u + sizeof(_g4_t_v74)) > _g4_s44 ? (196u + sizeof(_g4_t_v74)) : _g4_s44,
    _g4_s46 = (200u + sizeof(_g4_t_v75)) > _g4_s45 ? (200u + sizeof(_g4_t_v75)) : _g4_s45,
    _g4_s47 = (204u + sizeof(_g4_t_v76)) > _g4_s46 ? (204u + sizeof(_g4_t_v76)) : _g4_s46,
    _g4_s48 = (208u + sizeof(_g4_t_v77)) > _g4_s47 ? (208u + sizeof(_g4_t_v77)) : _g4_s47,
    _g4_s49 = (212u + sizeof(_g4_t_v78)) > _g4_s48 ? (212u + sizeof(_g4_t_v78)) : _g4_s48,
    _g4_s50 = (216u + sizeof(_g4_t_v79)) > _g4_s49 ? (216u + sizeof(_g4_t_v79)) : _g4_s49,
    _g4_s51 = (220u + sizeof(_g4_t_v80)) > _g4_s50 ? (220u + sizeof(_g4_t_v80)) : _g4_s50,
    _g4_s52 = (224u + sizeof(_g4_t_v81)) > _g4_s51 ? (224u + sizeof(_g4_t_v81)) : _g4_s51,
    _g4_s53 = (228u + sizeof(_g4_t_v82)) > _g4_s52 ? (228u + sizeof(_g4_t_v82)) : _g4_s52,
    _g4_s54 = (232u + sizeof(_g4_t_v83)) > _g4_s53 ? (232u + sizeof(_g4_t_v83)) : _g4_s53,
    _g4_s55 = (244u + sizeof(_g4_t_v84)) > _g4_s54 ? (244u + sizeof(_g4_t_v84)) : _g4_s54,
    _g4_s56 = (248u + sizeof(_g4_t_v85)) > _g4_s55 ? (248u + sizeof(_g4_t_v85)) : _g4_s55,
    _g4_s57 = (256u + sizeof(_g4_t_v86)) > _g4_s56 ? (256u + sizeof(_g4_t_v86)) : _g4_s56
  };
  alignas(16) uint8_t _g4_sf[_g4_s57];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 23u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 92u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 96u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 100u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 104u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 108u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 124u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 128u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 132u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 136u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 144u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 148u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 156u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 157u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 158u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 160u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 164u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 168u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 172u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 176u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 180u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 184u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 188u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 192u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 196u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 200u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 204u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 208u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 212u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 216u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 220u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 224u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 228u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 232u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 244u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 248u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 256u);

  v84 = &a1;
  v52 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v52, 65542, v30, v31, v32, v33, v35, v37, a3, v40, v42, v45, v46, v47, v48, v49[0], v49[1], v49[2], v49[3], v50[0], v50[1], v50[2], v50[3], v51) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v52, 0);
    v34 = 1;
  }
  else
  {
    v34 = 0;
  }
  v41 = (char *)G4_VCALL<int>(v52, 676, v39, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)&v53, v41, (int)(uintptr_t)&v45 + 3);
  v3 = dword_2140420;
  if ( dword_2140420 == 0 )
    goto LABEL_48;
  v38 = *(glwebtools::Mutex::Self **)(dword_2140420 + 104);
  glwebtools::Mutex::Lock(v38);
  v4 = *(uint32_t *)(v3 + 104);
  v62 = *(uint8_t *)(v4 + 40);
  v63 = *(uint8_t *)(v4 + 41);
  v64 = *(uint8_t *)(v4 + 42);
  g4_std::string::construct_copy(&v65, v4 + 44);
  v5 = *(uint8_t *)(v4 + 48) == 0;
  v66 = 0;
  if ( !v5 )
  {
    v6 = *(uint32_t *)(v4 + 52);
    v66 = 1;
    v67 = v6;
    v68 = *(uint32_t *)(v4 + 56);
    v69 = *(uint32_t *)(v4 + 60);
    v70 = *(uint32_t *)(v4 + 64);
    v71 = *(uint32_t *)(v4 + 68);
    v72 = *(uint32_t *)(v4 + 72);
    v73 = *(uint32_t *)(v4 + 76);
    v74 = *(uint32_t *)(v4 + 80);
    v75 = *(uint32_t *)(v4 + 84);
    v76 = *(uint32_t *)(v4 + 88);
  }
  v5 = *(uint8_t *)(v4 + 92) == 0;
  v77 = 0;
  if ( !v5 )
  {
    v7 = *(uint32_t *)(v4 + 104);
    v79 = 0;
    v80 = nullptr;
    v83 = 0;
    v81 = &v79;
    v82 = &v79;
    if ( v7 != 0 )
    {
      v8 = (uint32_t *)g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
                       &v78,
                       v7,
                       &v79);
      v80 = v8;
      for ( i = (int *)v8; i[2] != 0; i = (int *)i[2] )
        ;
      v81 = i;
      while ( v8[3] != 0 )
        v8 = (uint32_t *)v8[3];
      v82 = (int *)v8;
      v83 = *(uint32_t *)(v4 + 116);
    }
    v77 = 1;
  }
  v10 = *(uint8_t *)(v4 + 164);
  v85 = (int *)(v4 + 40);
  sub_1966C10(v49);
  g4_std::string::construct_copy(v50, &v53);
  if ( g4_std::string::find(v50, dword_2140424, 0, *(uint32_t *)(dword_2140424 - 12)) != 0 || v10 == 0 )
  {
    if ( g4_std::string::find(v50, dword_2140428, 0, *(uint32_t *)(dword_2140428 - 12)) == 0 && v62 != 0 )
    {
      v29 = *(uint32_t *)(dword_2140428 - 12);
      v86 = 0;
      if ( *(uint32_t *)(v50[0] - 12) <= v29 )
        v29 = *(uint32_t *)(v50[0] - 12);
      g4_std::string::clear(v50, 0, v29, v86);
      sub_1963D20(v50, v49);
    }
  }
  else
  {
    v11 = *(uint32_t *)(dword_2140424 - 12);
    v86 = 0;
    if ( *(uint32_t *)(v50[0] - 12) <= v11 )
      v11 = *(uint32_t *)(v50[0] - 12);
    g4_std::string::clear(v50, 0, v11, v86);
  }
  v56 = (volatile int32_t *)&unk_213B814;
  v57 = (volatile int32_t *)&unk_213B814;
  v58 = (volatile int32_t *)&unk_213B814;
  v59[0] = (uint32_t)(uintptr_t)&unk_213B814;
  v60 = (volatile int32_t *)&unk_213B814;
  v61[0] = (uint32_t)(uintptr_t)&unk_213B814;
  v12 = g4_std::string::find(&v53, dword_214042C, 0, *(uint32_t *)(dword_214042C - 12));
  v13 = 52455;
  if ( v12 != 0 )
    v13 = 52454 - (g4_std::string::find(&v53, dword_2140424, 0, *(uint32_t *)(dword_2140424 - 12)) == 0);
  v61[1] = v13;
  g4_std::string::assign_str(v61, v4 + 24);
  g4_std::string::assign_str(&v57, v4 + 20);
  v36 = (int *)(v4 + 12);
  g4_std::string::assign_str(&v58, v4 + 12);
  g4_std::string::assign_str(v59, v4 + 16);
  if ( *(uint8_t *)(v4 + 41) != 0 )
    v14 = *(uint8_t *)(v4 + 40) == 0 ? 176682 : 176684;
  else
    v14 = 176683 - (*(uint8_t *)(v4 + 40) == 0);
  v59[1] = v14;
  g4_std::string::assign_str(&v60, v49);
  g4_std::string::construct_copy(&v51, &v53);
  if ( g4_std::string::find(&v51, dword_2140424, 0, *(uint32_t *)(dword_2140424 - 12)) != 0 )
  {
    if ( g4_std::string::find(&v51, dword_2140428, 0, *(uint32_t *)(dword_2140428 - 12)) != 0 )
      goto LABEL_30;
    v15 = *(uint32_t *)(dword_2140428 - 12);
    v86 = 0;
    if ( *(uint32_t *)(v51 - 12) <= v15 )
      v15 = *(uint32_t *)(v51 - 12);
  }
  else
  {
    v15 = *(uint32_t *)(dword_2140424 - 12);
    v86 = 0;
    if ( *(uint32_t *)(v51 - 12) <= v15 )
      v15 = *(uint32_t *)(v51 - 12);
  }
  g4_std::string::clear(&v51, 0, v15, v86);
LABEL_30:
  g4_std::string::construct_copy(&v54, &v51);
  g4_std::string::assign_str(&v56, &v54);
  v43 = (void *)(v54 - 12);
  if ( (uint32_t *)(v54 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
  {
    v85 = &v46;
    g4_std::string::Rep::M_destroy(v43);
  }
  v44 = (void *)(v51 - 12);
  if ( (uint32_t *)(v51 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
  {
    v85 = (int *)((char *)&v46 + 1);
    g4_std::string::Rep::M_destroy(v44);
  }
  sub_19799D0(&v56);
  v16 = (void *)(v61[0] - 12);
  if ( (uint32_t *)(v61[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v61[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v85 = (int *)((char *)&v46 + 2);
    g4_std::string::Rep::M_destroy(v16);
  }
  v17 = v60 - 3;
  if ( v60 - 3 != (volatile int32_t *)dword_213B808 && __sync_fetch_and_add(v60 - 1, 0xFFFFFFFF) <= 0 )
  {
    v85 = (int *)((char *)&v46 + 3);
    g4_std::string::Rep::M_destroy((void *)v17);
  }
  v18 = (void *)(v59[0] - 12);
  if ( (uint32_t *)(v59[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v59[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v85 = &v47;
    g4_std::string::Rep::M_destroy(v18);
  }
  v19 = v58 - 3;
  if ( v58 - 3 != (volatile int32_t *)dword_213B808 && __sync_fetch_and_add(v58 - 1, 0xFFFFFFFF) <= 0 )
  {
    v85 = (int *)((char *)&v47 + 1);
    g4_std::string::Rep::M_destroy((void *)v19);
  }
  v20 = v57 - 3;
  if ( v57 - 3 != (volatile int32_t *)dword_213B808 && __sync_fetch_and_add(v57 - 1, 0xFFFFFFFF) <= 0 )
  {
    v85 = (int *)((char *)&v47 + 2);
    g4_std::string::Rep::M_destroy((void *)v20);
  }
  v21 = v56 - 3;
  if ( v56 - 3 != (volatile int32_t *)dword_213B808 && __sync_fetch_and_add(v56 - 1, 0xFFFFFFFF) <= 0 )
  {
    v85 = (int *)((char *)&v47 + 3);
    g4_std::string::Rep::M_destroy((void *)v21);
  }
  v22 = *(void (**)(uint32_t *, int *))(v4 + 124);
  v23 = *(void (**)(uint32_t *, uint8_t *))(v4 + 128);
  if ( v23 != nullptr )
  {
    v85 = v36;
    sub_1960EF0((Json::Value::Self *)v55);
    v23(v50, v55);
    Json::Value::Destroy((Json::Value::Self *)v55);
  }
  else if ( v22 != nullptr )
  {
    v22(v50, v36);
  }
  v24 = (void *)(v50[0] - 12);
  if ( (uint32_t *)(v50[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v50[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v85 = &v48;
    g4_std::string::Rep::M_destroy(v24);
  }
  v25 = (void *)(v49[0] - 12);
  if ( (uint32_t *)(v49[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v49[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v85 = (int *)((char *)&v48 + 1);
    g4_std::string::Rep::M_destroy(v25);
  }
  if ( v77 != 0 )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      (int)(uintptr_t)&v78,
      v80);
    v77 = 0;
  }
  if ( v66 != 0 )
    v66 = 0;
  v26 = (void *)(v65 - 12);
  if ( (uint32_t *)(v65 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v65 - 4), 0xFFFFFFFF) <= 0 )
  {
    v85 = (int *)((char *)&v48 + 2);
    g4_std::string::Rep::M_destroy(v26);
  }
  glwebtools::Mutex::Unlock(v38);
LABEL_48:
  G4_VCALL<void>(v52, 680, v39, v41);
  result = v53;
  v28 = (void *)(v53 - 12);
  if ( (uint32_t *)(v53 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
  {
    v85 = (int *)((char *)&v48 + 3);
  {
    g4_std::string::Rep::M_destroy(v28);
    return result;
  }
  }
  if ( v34 != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

#include <stdarg.h>
#include "Core/RecoveredDecompFuncs.inl"
#include "Core/RecoveredGroupCFuncs.inl"
#ifndef G4_SKIP_LINK_BRIDGE
#include "LinkerSymbolBridge.inl"
#endif


