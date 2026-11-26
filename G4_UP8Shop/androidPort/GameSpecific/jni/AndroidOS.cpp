#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: AndroidOS.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (13 funcs)
// ============================================================================
#include "AndroidOS.h"
#include "../../../sources/Core/Memory/GameAllocator.h"

// ----------------------------------------------------------------------------
// Function: AndroidOS::GetExternalStorageDirectory  (binary VA: 0x0)
// Original: AndroidOS::GetExternalStorageDirectory
// ----------------------------------------------------------------------------
std::string AndroidOS::GetExternalStorageDirectory()
{ const char *p = AndroidOS::GetSaveFolder(); return p ? std::string(p) : std::string(); }

// ----------------------------------------------------------------------------
// Function: AndroidOS::GetFilesDir  (binary VA: 0x0)
// Original: AndroidOS::GetFilesDir
// ----------------------------------------------------------------------------
std::string AndroidOS::GetFilesDir()
{ const char *p = AndroidOS::GetSDFolder(); return p ? std::string(p) : std::string(); }

// ----------------------------------------------------------------------------
// Function: AndroidOS::OpenURL  (binary VA: 0x0)
// Original: AndroidOS::OpenURL
// ----------------------------------------------------------------------------
void AndroidOS::OpenURL(const char* url)
{ __android_log_print(ANDROID_LOG_INFO, "AndroidOS", "%s", url ? url : ""); }

// ----------------------------------------------------------------------------
// Function: AndroidOS_GetEnv  (binary VA: 0x4bf580)
// Original: AndroidOS_GetEnv
// ----------------------------------------------------------------------------
void * AndroidOS_GetEnv()
{
  void *v0;
  typedef void *_g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v2)) > _g4_s0 ? (0u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 0u);

  v2 = nullptr;
  if ( dword_20D0F00 != 0 )
  {
    v0 = pthread_getspecific(dword_20D0F00);
    v2 = v0;
  }
  else
  {
    pthread_key_create((pthread_key_t *)&dword_20D0F00, (void (*)(void *))AndroidReleaseThreadEnv);
    v0 = v2;
  }
  if ( v0 == nullptr
    && G4_VCALL<int>(AndroidOS_JavaVM, 16, &v2, 0) == 0
    && v2 != nullptr )
  {
    pthread_setspecific(dword_20D0F00, v2);
    return v2;
  }
  return v0;
}

// ----------------------------------------------------------------------------
// Function: AndroidOS_GetTime  (binary VA: 0x4bf640)
// Original: AndroidOS_GetTime
// ----------------------------------------------------------------------------
int64_t AndroidOS_GetTime()
{
  typedef struct timeval _g4_t_tv;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_tv)) > _g4_s0 ? (8u + sizeof(_g4_t_tv)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 8u);

  gettimeofday(&tv, nullptr);
  return 1000LL * tv.tv_sec + tv.tv_usec / 1000;
}

// ----------------------------------------------------------------------------
// Function: AndroidOS_hasConnectivity  (binary VA: 0x4bf6b0)
// Original: AndroidOS_hasConnectivity
// ----------------------------------------------------------------------------
int AndroidOS_hasConnectivity()
{
  return GameUtils_hasConnectivity();
}

// ----------------------------------------------------------------------------
// Function: AndroidOS::GetSaveFolder  (binary VA: 0x4bf6d0)
// Original: AndroidOS::GetSaveFolder
// ----------------------------------------------------------------------------
char * AndroidOS::GetSaveFolder()
{
  void *Env;
  int v2;
  const char *src;

  if ( AndroidOS::mSavePath[0] == 0 )
  {
    Env = AndroidOS_GetEnv();
    v2 = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)Env, AndroidOS::cSUtils, AndroidOS::mSUtils_GetSaveFolder);
    src = (const char *)G4_VCALL<int>(Env, 676, v2, 0);
    if ( *src != 0 )
      strcpy(AndroidOS::mSavePath, src);
    else
      strcpy(AndroidOS::mSavePath, "/data/data/com.gameloft.android.GAND.GloftGGSS");
  }
  return (char *)AndroidOS::mSavePath;
}

// ----------------------------------------------------------------------------
// Function: AndroidOS_GetSaveFolder  (binary VA: 0x4bf7d0)
// Original: AndroidOS_GetSaveFolder
// ----------------------------------------------------------------------------
char * AndroidOS_GetSaveFolder()
{
  return AndroidOS::GetSaveFolder();
}

// ----------------------------------------------------------------------------
// Function: AndroidOS::GetUserAgent  (binary VA: 0x4bf7f0)
// Original: AndroidOS::GetUserAgent
// ----------------------------------------------------------------------------
int AndroidOS::GetUserAgent()
{
  void *Env;
  int v1;

  Env = AndroidOS_GetEnv();
  v1 = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)Env, AndroidOS::cDevice, AndroidOS::cDevice_GetUserAgent);
  return G4_VCALL<int>(Env, 676, v1, 0);
}

// ----------------------------------------------------------------------------
// Function: AndroidOS_GetUserAgent  (binary VA: 0x4bf860)
// Original: AndroidOS_GetUserAgent
// ----------------------------------------------------------------------------
int AndroidOS_GetUserAgent()
{
  return AndroidOS::GetUserAgent();
}

// ----------------------------------------------------------------------------
// Function: AndroidOS::charToString  (binary VA: 0x4bf880)
// Original: AndroidOS::charToString
// ----------------------------------------------------------------------------
int AndroidOS::charToString(AndroidOS::Self *self)
{
  void *Env;

  Env = AndroidOS_GetEnv();
  return G4_VCALL<int>(Env, 668, self);
}

// ----------------------------------------------------------------------------
// Function: AndroidOS::GetSDFolder  (binary VA: 0x4bf8b0)
// Original: AndroidOS::GetSDFolder
// ----------------------------------------------------------------------------
char * AndroidOS::GetSDFolder()
{
  void *Env;
  int v2;
  int v3;
  int v4;
  int v5;
  const char *src;

  if ( AndroidOS::mSDPath[0] == 0 )
  {
    Env = AndroidOS_GetEnv();
    v2 = G4_VCALL<int>(Env, 576, AndroidOS::cInstaller, "mPreferencesName", "Ljava/lang/String;");
    v3 = G4_VCALL<int>(Env, 580, AndroidOS::cInstaller, v2);
    v4 = AndroidOS::charToString((AndroidOS::Self *)"SDFolder");
    v5 = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)Env, AndroidOS::cSUtils, AndroidOS::mSUtils_GetPrefs, v4, v3);
    src = (const char *)G4_VCALL<int>(Env, 676, v5, 0);
    if ( *src != 0 )
      strcpy(AndroidOS::mSDPath, src);
    else
      strcpy(AndroidOS::mSDPath, "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files");
  }
  return (char *)AndroidOS::mSDPath;
}

// ----------------------------------------------------------------------------
// Function: AndroidOS_GetSDFolder  (binary VA: 0x4bf9d0)
// Original: AndroidOS_GetSDFolder
// ----------------------------------------------------------------------------
char * AndroidOS_GetSDFolder()
{
  return AndroidOS::GetSDFolder();
}

// ----------------------------------------------------------------------------
// Function: AndroidOS::replaceChars  (binary VA: 0x4bf9f0)
// Original: AndroidOS::replaceChars
// ----------------------------------------------------------------------------
AndroidOS::Self * AndroidOS::replaceChars(AndroidOS::Self *self, char *a2, char a3)
{
  AndroidOS::Self *result;
  char i;

  result = self;
  for ( i = *(uint8_t *)self; *(uint8_t *)result != 0; i = *(uint8_t *)result )
  {
    while ( i != (uint8_t)(uintptr_t)a2 )
    {
      result = (AndroidOS::Self *)((char *)result + 1);
      i = *(uint8_t *)result;
      if ( *(uint8_t *)result == 0 )
        return result;
    }
    *(uint8_t *)result = a3;
    result = (AndroidOS::Self *)((char *)result + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: AndroidOS::Init  (binary VA: 0x4bfa30)
// Original: AndroidOS::Init
// ----------------------------------------------------------------------------
int AndroidOS::Init()
{
  int result;
  void *Env;
  int v2;
  int v3;
  int v4;
  int v5;
  char v6[268];

  result = AndroidOS::cSUtils;
  if ( AndroidOS::cSUtils == 0 )
  {
    Env = AndroidOS_GetEnv();
    memset(AndroidOS::mSDPath, 0, sizeof(AndroidOS::mSDPath));
    memset(AndroidOS::mSavePath, 0, sizeof(AndroidOS::mSavePath));
    memset(v6, 0, 0x100u);
    strcpy(v6, "com.gameloft.android.GAND.GloftGGSS");
    strcat(v6, "/GLUtils/SUtils");
    AndroidOS::replaceChars((AndroidOS::Self *)v6, (char *)(uintptr_t)46, 47);
    v2 = G4_VCALL<int>(Env, 24, v6);
    if ( G4_VCALL<uint8_t>(Env, 60) != 0 )
    {
      G4_VCALL<void>(Env, 68);
      v2 = 0;
    }
    if ( v2 != 0 )
    {
      AndroidOS::cSUtils = G4_VCALL<int>(Env, 84, v2);
      AndroidOS::mSUtils_GetPrefs = G4_VCALL<int>(Env, 452, AndroidOS::cSUtils, "getPreferenceString", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
      AndroidOS::mSUtils_GetPackage = G4_VCALL<int>(Env, 452, AndroidOS::cSUtils, "getPackage", "()Ljava/lang/String;");
      AndroidOS::mSUtils_GetSaveFolder = G4_VCALL<int>(Env, 452, AndroidOS::cSUtils, "getSaveFolder", "()Ljava/lang/String;");
      AndroidOS::mSUtils_GetContext = G4_VCALL<int>(Env, 452, AndroidOS::cSUtils, "getContext", "()Landroid/content/Context;");
    }
    else
    {
      G4_PlatformLog(5, "AndroidOS", "FindClass failed for %s", v6);
    }
    memset(v6, 0, 0x100u);
    strcpy(v6, "com.gameloft.android.GAND.GloftGGSS");
    strcat(v6, "/GLUtils/Device");
    AndroidOS::replaceChars((AndroidOS::Self *)v6, (char *)(uintptr_t)46, 47);
    v3 = G4_VCALL<int>(Env, 24, v6);
    if ( G4_VCALL<uint8_t>(Env, 60) != 0 )
    {
      G4_VCALL<void>(Env, 68);
      v3 = 0;
    }
    if ( v3 != 0 )
    {
      AndroidOS::cDevice = G4_VCALL<int>(Env, 84, v3);
      v4 = G4_VCALL<int>(Env, 452, AndroidOS::cDevice, "getUserAgent", "()Ljava/lang/String;");
      AndroidOS::cDevice_GetUserAgent = v4;
    }
    else
    {
      G4_PlatformLog(5, "AndroidOS", "FindClass failed for %s", v6);
    }
    memset(v6, 0, 0x100u);
    strcpy(v6, "com.gameloft.android.GAND.GloftGGSS");
    strcat(v6, "/installer/GameInstaller");
    AndroidOS::replaceChars((AndroidOS::Self *)v6, (char *)(uintptr_t)46, 47);
    v5 = G4_VCALL<int>(Env, 24, v6);
    if ( G4_VCALL<uint8_t>(Env, 60) != 0 )
    {
      G4_VCALL<void>(Env, 68);
      v5 = 0;
    }
    if ( v5 != 0 )
    {
      result = G4_VCALL<int>(Env, 84, v5);
      AndroidOS::cInstaller = result;
    }
    else
    {
      G4_PlatformLog(5, "AndroidOS", "FindClass failed for %s", v6);
      result = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: AndroidOS_JNIOnload  (binary VA: 0x4bfe70)
// Original: AndroidOS_JNIOnload
// ----------------------------------------------------------------------------
int AndroidOS_JNIOnload(uint32_t *a1)
{
  AndroidOS_JavaVM = (uint32_t)(uintptr_t)a1;
  if ( AndroidOS_GetEnv() == nullptr )
    exit(0);
  AndroidOS::Init();
  SplashScreen_setJavaVM((int)(uintptr_t)a1);
  return GameUtils_setJavaVM((int)(uintptr_t)a1);
}

