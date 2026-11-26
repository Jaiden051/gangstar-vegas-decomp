#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: PushNotification.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (4 funcs)
// ============================================================================
#include "PushNotification.h"
#include "../../../sources/Core/Memory/GameAllocator.h"

uintptr_t g4_CallbackAppReceiver = 0;

int PushNotification_SendPNData(int a1, int jstr)
{
  char *v7;
  int result;
  volatile int32_t *v9;
  size_t v10;
  uint8_t isCopy = 0;
  uint8_t attached = 0;
  void *envPtr = nullptr;
  volatile int32_t *strRep = (volatile int32_t *)&unk_213B814;

  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &envPtr, 0x10006) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &envPtr, 0);
    attached = 1;
  }
  if ( envPtr == nullptr )
    envPtr = (void *)(uintptr_t)a1;
  v7 = (char *)G4_VCALL<int>(envPtr, 676, jstr, &isCopy);
  if ( isCopy == 1 && v7 != nullptr )
  {
    v10 = strlen(v7);
    g4_std::string::assign((int)(uintptr_t)&strRep, v7, v10);
  }
  SimplifiedPN_ResponsePNCallBack((int)(uintptr_t)&strRep);
  if ( v7 != nullptr )
    G4_VCALL<void>(envPtr, 680, jstr, v7);
  result = (int)(uintptr_t)strRep;
  v9 = strRep - 3;
  if ( strRep - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(strRep - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)v9);
  }
  if ( attached != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

int PushNotification_SendRegistrationData(int a1, int jstr)
{
  const char *v8;
  int result;
  volatile int32_t *v10;
  size_t v11;
  uint8_t isCopy = 0;
  uint8_t attached = 0;
  void *envPtr = nullptr;
  volatile int32_t *strRep = (volatile int32_t *)&unk_213B814;

  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &envPtr, 0x10006) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &envPtr, 0);
    attached = 1;
  }
  if ( envPtr == nullptr )
    envPtr = (void *)(uintptr_t)a1;
  v8 = (const char *)G4_VCALL<int>(envPtr, 676, jstr, &isCopy);
  if ( isCopy == 1 && v8 != nullptr )
  {
    v11 = strlen(v8);
    g4_std::string::assign((int)(uintptr_t)&strRep, (char *)v8, v11);
  }
  if ( g4_CallbackAppReceiver != 0 )
  {
    ((void (*)(volatile int32_t **, uint32_t))g4_CallbackAppReceiver)(&strRep, m_CallbackAppCaller);
  }
  if ( v8 != nullptr )
    G4_VCALL<void>(envPtr, 680, jstr, v8);
  result = (int)(uintptr_t)strRep;
  v10 = strRep - 3;
  if ( strRep - 3 != (volatile int32_t *)&unk_213B808 && __sync_fetch_and_add(strRep - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)v10);
  }
  if ( attached != 0 )
    return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_PushNotification_SimplifiedAndroidUtils_nativeSendPNData  (binary VA: 0x4db8e0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_PushNotification_SimplifiedAndroidUtils_nativeSendPNData
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_PushNotification_SimplifiedAndroidUtils_nativeSendPNData(int a1, int a2, int a3, char a4, int a5, int a6, volatile int32_t *a7)
{
  (void)a2; (void)a4; (void)a5; (void)a6; (void)a7;
  return PushNotification_SendPNData(a1, a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_PushNotification_SimplifiedAndroidUtils_nativeSendRegistrationData  (binary VA: 0x4dba20)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_PushNotification_SimplifiedAndroidUtils_nativeSendRegistrationData
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_PushNotification_SimplifiedAndroidUtils_nativeSendRegistrationData(int a1, int a2, int a3, char a4, int a5, int a6, volatile int32_t *a7)
{
  (void)a2; (void)a4; (void)a5; (void)a6; (void)a7;
  return PushNotification_SendRegistrationData(a1, a3);
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_PushNotification_SimplifiedAndroidUtils_nativeInit  (binary VA: 0x4dbde0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_PushNotification_SimplifiedAndroidUtils_nativeInit
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_PushNotification_SimplifiedAndroidUtils_nativeInit(int a1, int a2)
{
  SimplifiedPN_Init(a2);
  return ABundle_Init();
}

// ----------------------------------------------------------------------------
// Function: PushNotificationRetrieveTokenCB  (binary VA: 0x4deb90)
// Original: PushNotificationRetrieveTokenCB
// ----------------------------------------------------------------------------
int PushNotificationRetrieveTokenCB(int a1)
{
  int *v1;

  if ( byte_20D12B0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D12B0) != 0 )
  {
    sub_78BA10(&dword_20D12C0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D12B0);
    __cxa_atexit((void (*)(void *))sub_77CEB0, &dword_20D12C0, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D12C4 == 0 )
    v1 = (int *)&dword_20D12C0;
  return sub_78BB50((int)(uintptr_t)v1, (uint32_t *)(uintptr_t)a1, 1);
}

