#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: SplashScreenActivity.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (2 funcs)
// ============================================================================
#include "SplashScreenActivity.h"
#include "../../../sources/Core/Memory/GameAllocator.h"

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_SplashScreenActivity_nativeInit  (binary VA: 0x4dd390)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_SplashScreenActivity_nativeInit
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_SplashScreenActivity_nativeInit(int a1, int a2)
{
  int result;

  result = G4_VCALL<int>(a1, 84, a2);
  dword_20D11F4 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_SplashScreenActivity_splashScreenFuncGLOT  (binary VA: 0x4dd9b0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_SplashScreenActivity_splashScreenFuncGLOT
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_SplashScreenActivity_splashScreenFuncGLOT(int a1, int a2, int a3)
{
  const char *v3;

  v3 = (const char *)G4_VCALL<int>(a1, 676, a3, 0);
  splashScreenFuncGlot((char *)v3);
  return G4_VCALL<int>(a1, 680, a3, v3);
}

