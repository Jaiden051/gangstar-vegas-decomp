#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: GDRMPolicy.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (7 funcs)
// ============================================================================
#include "GDRMPolicy.h"
#include "../../../sources/Core/Memory/GameAllocator.h"

// 64-bit safe backing storage for GDRM array/locks (GlobalSymbols scalars are 4-byte placeholders)
uint64_t g4_gdrm_dataValues[9] = {0};
extern uint32_t *g4_lockPointer1;
uint32_t *g4_lockPointer2 = nullptr;
uint32_t *g4_lockPointer3 = nullptr;
#define dataValues g4_gdrm_dataValues
#define lockPointer1 g4_lockPointer1
#define lockPointer2 g4_lockPointer2
#define lockPointer3 g4_lockPointer3

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_initNativeAP  (binary VA: 0x4e3b90)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_initNativeAP
// ----------------------------------------------------------------------------
void Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_initNativeAP(int a1, int a2, int a3, int a4, int a5)
{
  drmDebugLog();
  drmDebugLog();
  Policy = G4_VCALL<int>(mEnv, 84, a2);
  drmDebugLog();
  updatePrefsID = G4_VCALL<int>(mEnv, 452, Policy, "UpdatePreferences", "(Ljava/lang/String;Ljava/lang/String;I)V");
  drmDebugLog();
  updatePrefs2ID = G4_VCALL<int>(mEnv, 452, Policy, "UpdatePreferences2", "(Ljava/lang/String;JI)V");
  drmDebugLog();
  memset(&dataValues, 0, 0x48u);
  VALID = a3;
  RETRY = a5;
  INVALID = a4;
  drmDebugLog();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_getConstString  (binary VA: 0x4e3cc0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_getConstString
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_getConstString(int a1, int a2, int a3)
{
  drmDebugLog();
  if ( lockPointer2 == nullptr )
    lockPointer2 = (uint32_t *)malloc(4u);
  drmDebugLog();
  *lockPointer2 = 1 / *(lockPointer1);
  drmDebugLog();
  return getString(a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_setConst  (binary VA: 0x4e3d50)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_setConst
// ----------------------------------------------------------------------------
uint64_t * Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_setConst(int a1, int a2, int a3, int a4)
{
  drmDebugLog();
  *lockPointer2 = 1 / *(lockPointer1);
  drmDebugLog();
  dataValues[a3] = a4;
  return dataValues;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_setLongConst  (binary VA: 0x4e3dd0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_setLongConst
// ----------------------------------------------------------------------------
uint64_t * Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_setLongConst(int a1, int a2, int a3, int a4, int a5)
{
  drmDebugLog();
  *lockPointer2 = 1 / *(lockPointer1);
  drmDebugLog();
  LODWORD(dataValues[a3]) = a4;
  HIDWORD(dataValues[a3]) = a5;
  return dataValues;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_setTime  (binary VA: 0x4e4450)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_setTime
// ----------------------------------------------------------------------------
int64_t * Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_setTime(int a1, int a2, int64_t a3)
{
  mEnv = a1;
  drmDebugLog();
  *lockPointer2 = 1 / *(lockPointer1);
  drmDebugLog();
  updateTime(a3);
  g_nTime = a3;
  return (int64_t *)(void *)&g_nTime;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_processServer  (binary VA: 0x4e44f0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_processServer
// ----------------------------------------------------------------------------
void Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_processServer(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;

  v4 = a3;
  mEnv = a1;
  drmDebugLog();
  serv_responded = 1;
  if ( a3 == 0 )
  {
    *lockPointer2 = 0;
    v4 = INVALID;
  }
  if ( v4 != 1 )
  {
    if ( v4 != 2 )
      goto LABEL_5;
LABEL_9:
    v4 = RETRY;
    if ( RETRY != a4 )
      goto LABEL_6;
    goto LABEL_10;
  }
  v4 = VALID;
  if ( VALID == 2 )
    goto LABEL_9;
LABEL_5:
  if ( v4 != a4 )
  {
LABEL_6:
    ++*lockPointer2;
    return;
  }
LABEL_10:
  drmDebugLog();
  if ( v4 == INVALID )
  {
    drmDebugLog();
    v6 = (int)INVALID >> 31;
    LODWORD(dataValues[1]) = INVALID;
    HIDWORD(dataValues[1]) = v6;
    LODWORD(dataValues[2]) = 0;
    HIDWORD(dataValues[2]) = 0;
    LODWORD(dataValues[3]) = 0;
    HIDWORD(dataValues[3]) = 0;
    LODWORD(dataValues[4]) = 0;
LABEL_15:
    HIDWORD(dataValues[4]) = 0;
    LODWORD(dataValues[5]) = 0;
    HIDWORD(dataValues[5]) = 0;
    updatePrefs(0, 1);
    return;
  }
  if ( v4 == VALID )
  {
    drmDebugLog();
    v7 = (int)VALID >> 31;
    LODWORD(dataValues[1]) = VALID;
    v8 = dataValues[7];
    HIDWORD(dataValues[1]) = v7;
    v9 = HIDWORD(dataValues[7]);
    dataValues[2] = __PAIR64__(v9, v8) + 1209600;
    LODWORD(dataValues[3]) = v8 + 1468800;
    LODWORD(dataValues[4]) = 10;
    HIDWORD(dataValues[3]) = __CFADD__(v8, 1468800) + v9;
    goto LABEL_15;
  }
  if ( v4 == RETRY )
  {
    drmDebugLog();
    v5 = (int)RETRY >> 31;
    LODWORD(dataValues[1]) = RETRY;
    HIDWORD(dataValues[1]) = v5;
    updatePrefs(1, 0);
  }
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_nativeAllow  (binary VA: 0x4e46e0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_nativeAllow
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_installer_GDRMPolicy_nativeAllow(int a1, int a2, int64_t a3)
{
  uint32_t *v4;
  uint32_t *v5;
  uint64_t v7; // 0:^14.4,4:ebp.4

  drmDebugLog();
  updateTime(a3);
  HIDWORD(v7) = HIDWORD(dataValues[1]);
  LODWORD(v7) = dataValues[1];
  if ( VALID == v7 && dataValues[7] <= dataValues[2] )
  {
    drmDebugLog();
    LODWORD(dataValues[6]) = 0;
    HIDWORD(dataValues[6]) = 0;
    updatePrefs(6, 0);
    drmDebugLog();
    *lockPointer2 = 1;
    v5 = (uint32_t *)malloc(4u);
    *v5 = 1;
    lockPointer3 = v5;
    drmDebugLog();
    return 1;
  }
  else if ( (RETRY == v7 || VALID == v7)
         && (drmDebugLog(), dataValues[7] <= dataValues[3])
         && dataValues[5] < dataValues[4] )
  {
    drmDebugLog();
    LODWORD(dataValues[6]) = 0;
    HIDWORD(dataValues[6]) = 0;
    updatePrefs(6, 0);
    drmDebugLog();
    *lockPointer2 = 1;
    v4 = (uint32_t *)malloc(4u);
    *v4 = 1;
    lockPointer3 = v4;
    drmDebugLog();
    ++dataValues[5];
    updatePrefs(5, 0);
    return 1;
  }
  else
  {
    lockPointer3 = nullptr;
    drmDebugLog();
    return 0;
  }
}

