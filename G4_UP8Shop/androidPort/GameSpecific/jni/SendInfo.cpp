#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: SendInfo.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (1 funcs)
// ============================================================================
#include "SendInfo.h"
#include "../../../sources/Core/Memory/GameAllocator.h"

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_SendInfo_initMethods  (binary VA: 0x4ea230)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_SendInfo_initMethods
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_SendInfo_initMethods(int *a1, int a2)
{
  int v2;
  int v3;

  v2 = G4_VCALL<int>(a1, 84, a2);
  (void)v3;
  dword_20D17B4 = v2;
  dword_20D17B8 = G4_VCALL<int>(
                    a1,
                    452,
                    v2,
                    "getSDFolder",
                    "()Ljava/lang/String;");
  dword_20D17BC = G4_VCALL<int>(a1, 452, dword_20D17B4, "getSaveFolder", "()Ljava/lang/String;");
  dword_20D17C0 = G4_VCALL<int>(a1, 452, dword_20D17B4, "getGLUID", "()[I");
  dword_20D17C4 = G4_VCALL<int>(a1, 452, dword_20D17B4, "getGLDID", "()Ljava/lang/String;");
  dword_20D17C8 = G4_VCALL<int>(a1, 452, dword_20D17B4, "getPhoneCarrier", "()Ljava/lang/String;");
  dword_20D17CC = G4_VCALL<int>(a1, 452, dword_20D17B4, "getLocaleCountry", "()Ljava/lang/String;");
  dword_20D17D0 = G4_VCALL<int>(a1, 452, dword_20D17B4, "getLocaleLanguage", "()Ljava/lang/String;");
  dword_20D17D4 = G4_VCALL<int>(a1, 452, dword_20D17B4, "getManufacturerModel", "()Ljava/lang/String;");
  dword_20D17D8 = G4_VCALL<int>(a1, 452, dword_20D17B4, "getMacAddress", "()Ljava/lang/String;");
  dword_20D17E0 = G4_VCALL<int>(a1, 452, dword_20D17B4, "isAppInstalled", "(Ljava/lang/String;)Z");
  dword_20D17F0 = G4_VCALL<int>(a1, 452, dword_20D17B4, "getCurrentRuntimeValue", "()Ljava/lang/String;");
  javacallSDFolder();
  javacallGetSaveFolderPath();
  javacallGetGLUID();
  javacallGetPhoneCarrier();
  javacallGetLocaleCountry();
  javacallGetLocaleLanguage();
  javacallGetManufacturerModel();
  javacallGetGLDID();
  return javacallGetMacAddress();
}

