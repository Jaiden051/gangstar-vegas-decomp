#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: GameInstaller.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (4 funcs)
// ============================================================================
#include "GameInstaller.h"
#include "../../../sources/Core/Memory/GameAllocator.h"

uint32_t *g4_lockPointer1 = nullptr;
#define lockPointer1 g4_lockPointer1
static inline int drmDebugLog(const char *msg) { (void)msg; ::drmDebugLog(); return 0; }

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_installer_GameInstaller_initNative  (binary VA: 0x4e2f00)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_installer_GameInstaller_initNative
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_installer_GameInstaller_initNative(int a1, int a2)
{
  drmDebugLog("entering native code ");
  mEnv = a1;
  drmDebugLog("getting class ");
  LicenseCheck = G4_VCALL<int>(mEnv, 84, a2);
  drmDebugLog("getting method id ");
  startGame = G4_VCALL<int>(mEnv, 452, LicenseCheck, "startGame", "()V");
  getSDFolder = G4_VCALL<int>(mEnv, 452, LicenseCheck, "getSDFolder", "()Ljava/lang/String;");
  return drmDebugLog("finish ");
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_installer_GameInstaller_getPublicKey  (binary VA: 0x4e2fe0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_installer_GameInstaller_getPublicKey
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_installer_GameInstaller_getPublicKey(int a1)
{
  uint32_t *v1;

  drmDebugLog("getting key");
  v1 = (uint32_t *)malloc(4u);
  *v1 = 1;
  lockPointer1 = v1;
  return G4_VCALL<int>(a1, 668, "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEArjzJYaersEzHcAbdWeui2v4UThDbF59uWcEAxTbRxmL97B/9JXyVl0Ta0b+owRJfg"
           "TnOwoZNe4IOAn+0rrDudGE68f4tQjH18EQKc+3jzxvjXOe0RicWr91bVpfmYfBlE1Fqc+0aevoXAdCqZz6PMNLuScD7P7daVgT+tHXSfrKBLb"
           "jkaPqab1skyIZUK3b2QF+3u8asaAPl+gUKQSHnp9Cc0BX1LpUPcteCyeNZG214ZSRT339WJ/7+dpzQo3G7DJU3N9CXfh+3y/6DLE1S3+1iC1d"
           "OAHAnCm84OQ0F3axlmiv428zvaYW88+SalCDzh2XB0k3+XmE4MRtJkFmL4QIDAQAB");
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_installer_GameInstaller_nativeStart  (binary VA: 0x4e30f0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_installer_GameInstaller_nativeStart
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_installer_GameInstaller_nativeStart()
{
  return nativeStart();
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_installer_GameInstaller_nativeGetDevID  (binary VA: 0x4e31c0)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_installer_GameInstaller_nativeGetDevID
// ----------------------------------------------------------------------------
size_t Java_com_gameloft_android_GAND_GloftGGSS_installer_GameInstaller_nativeGetDevID(int *a1, int a2)
{
  int v3;
  int v4;
  int v5;
  int v6;
  const char *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  const char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  const char *v24;
  FILE *v25;
  FILE *stream;
  void *v27;
  int v29;
  int v30;
  int v31;
  const char *v32;
  int v33;
  int v34;
  int v35;
  const void *v36;
  FILE *v37;
  typedef int _g4_t_whence;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef size_t _g4_t_nd;
  typedef size_t _g4_t_ne;
  typedef size_t _g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef int _g4_t_v47;
  typedef size_t _g4_t_v48;
  typedef int _g4_t_v49;
  typedef char _g4_t_v50[256];
  typedef char _g4_t_s[256];
  typedef char _g4_t_filename[1052];
  enum : size_t {
    _g4_s0 = 1680u,
    _g4_s1 = (8u + sizeof(_g4_t_whence)) > _g4_s0 ? (8u + sizeof(_g4_t_whence)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_n)) > _g4_s1 ? (32u + sizeof(_g4_t_n)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_na)) > _g4_s2 ? (32u + sizeof(_g4_t_na)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_nb)) > _g4_s3 ? (32u + sizeof(_g4_t_nb)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_nc)) > _g4_s4 ? (32u + sizeof(_g4_t_nc)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_nd)) > _g4_s5 ? (32u + sizeof(_g4_t_nd)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_ne)) > _g4_s6 ? (32u + sizeof(_g4_t_ne)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v45)) > _g4_s7 ? (40u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v46)) > _g4_s8 ? (40u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v47)) > _g4_s9 ? (40u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v48)) > _g4_s10 ? (40u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v49)) > _g4_s11 ? (44u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v50)) > _g4_s12 ? (48u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (304u + sizeof(_g4_t_s)) > _g4_s13 ? (304u + sizeof(_g4_t_s)) : _g4_s13,
    _g4_s15 = (560u + sizeof(_g4_t_filename)) > _g4_s14 ? (560u + sizeof(_g4_t_filename)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_whence &whence = *reinterpret_cast<_g4_t_whence *>(_g4_sf + 8u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 32u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 32u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 32u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 32u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 32u);
  _g4_t_ne &ne = *reinterpret_cast<_g4_t_ne *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 304u);
  _g4_t_filename &filename = *reinterpret_cast<_g4_t_filename *>(_g4_sf + 560u);

  drmDebugLog("installer_GameInstaller_nativeGDrmGetDevID");
  memset(v50, 0, sizeof(v50));
  v49 = G4_VCALL<int>(a1, 84, a2);
  drmDebugLog("installer_GameInstaller_nativeGDrmGetDevID, Try to get IMEI");
  v3 = G4_VCALL<int>(a1, 576, v49, "mDeviceInfo", "Landroid/telephony/TelephonyManager;");
  m_TelephonyManager = G4_VCALL<int>(a1, 580, v49, v3);
  if ( m_TelephonyManager != 0 )
  {
    drmDebugLog("installer_GameInstaller_nativeGDrmGetDevID, m_TelephonyManager != 0");
    v4 = G4_VCALL<int>(a1, 24, "android/telephony/TelephonyManager");
    v5 = G4_VCALL<int>(a1, 84, v4);
    v6 = G4_VCALL<int>(a1, 132, v5, "getDeviceId", "()Ljava/lang/String;");
    if ( v6 != 0 )
    {
      n = v6;
      drmDebugLog("installer_GameInstaller_nativeGDrmGetDevID, mTelephonyManager_getDeviceId != 0");
      v45 = G4_VCALL<int>(a1, 136, m_TelephonyManager, n);
      G4_VCALL<void>(a1, 92, v5);
      if ( v45 != 0 )
      {
        v7 = (const char *)G4_VCALL<int>(a1, 676, v45, 0);
        if ( *v7 != 0 && strcmp(v7, "unknown") != 0 )
          return v45;
      }
    }
  }
  v8 = G4_VCALL<int>(a1, 24, "android/os/Build$VERSION");
  v9 = G4_VCALL<int>(a1, 576, v8, "SDK_INT", "I");
  if ( G4_VCALL<int>(a1, 580, v8, v9) > 8 )
  {
    drmDebugLog("installer_GameInstaller_nativeGDrmGetDevID, Try to get Serial, Android 2.3");
    v29 = G4_VCALL<int>(a1, 24, "android/os/Build");
    v30 = G4_VCALL<int>(a1, 576, v29, "SERIAL", "Ljava/lang/String;");
    v31 = G4_VCALL<int>(a1, 580, v29, v30);
    v45 = v31;
    if ( v31 != 0 )
    {
      v32 = (const char *)G4_VCALL<int>(a1, 676, v31, 0);
      if ( *v32 != 0 && strcmp(v32, "unknown") != 0 )
        return v45;
    }
  }
  v10 = G4_VCALL<int>(a1, 24, "android/os/SystemProperties");
  if ( v10 != 0 )
  {
    drmDebugLog("installer_GameInstaller_nativeGDrmGetDevID, Try to get Serial");
    v11 = G4_VCALL<int>(a1, 452, v10, &off_1B159F1, "(Ljava/lang/String;)Ljava/lang/String;");
    if ( v11 != 0 )
    {
      memset(v50, 0, sizeof(v50));
      v12 = *a1;
      na = v11;
      strcpy(v50, "ro.serialno");
      v13 = (*(int (**)(int *, char *))(v12 + 668))(a1, v50);
      v45 = G4_VCALL<int>(a1, 456, v10, na, v13);
      G4_VCALL<void>(a1, 92, v13);
      if ( v45 != 0 )
      {
        v14 = (const char *)G4_VCALL<int>(a1, 676, v45, 0);
        if ( *v14 != 0 && strcmp(v14, "unknown") != 0 )
          return v45;
      }
    }
  }
  drmDebugLog("installer_GameInstaller_nativeGDrmGetDevID, Try to get ANDROID_ID");
  v15 = G4_VCALL<int>(a1, 24, "android/provider/Settings$Secure");
  memset(s, 0, sizeof(s));
  sprintf(s, "L%s/%s;", "com/gameloft/android/GAND/GloftGGSS", "installer/GameInstaller");
  v16 = G4_VCALL<int>(a1, 576, v49, "m_sInstance", s);
  v17 = G4_VCALL<int>(a1, 580, v49, v16);
  v18 = G4_VCALL<int>(a1, 24, "android/content/Context");
  v19 = G4_VCALL<int>(a1, 132, v18, "getContentResolver", "()Landroid/content/ContentResolver;");
  if ( v19 != 0 )
  {
    nb = v19;
    drmDebugLog("installer_GameInstaller_nativeGDrmGetDevID, Try to get oContentReceiver");
    v46 = G4_VCALL<int>(a1, 136, v17, nb);
    v20 = G4_VCALL<int>(a1, 84, v15);
    v21 = G4_VCALL<int>(a1, 452, v20, "getString", "(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;");
    memset(v50, 0, sizeof(v50));
    v22 = *a1;
    nc = v21;
    std::memcpy(v50, "android_id", 10);
    v23 = (*(int (**)(int *, char *))(v22 + 668))(a1, v50);
    drmDebugLog("installer_GameInstaller_nativeGDrmGetDevID, Try to get android_id");
    v45 = G4_VCALL<int>(a1, 456, v20, nc, v46, v23);
    G4_VCALL<void>(a1, 92, v23);
    if ( v45 != 0 )
    {
      v24 = (const char *)G4_VCALL<int>(a1, 676, v45, 0);
      if ( *v24 != 0 && strcmp(v24, "unknown") != 0 )
        return v45;
    }
  }
  drmDebugLog("installer_GameInstaller_nativeGDrmGetDevID, Try to get UUID");
  memset(filename, 0, 0x400u);
  nativeGetSdFolderPathL();
  sprintf(filename, "%s/%s", sd_folder, ".nomedia");
  v25 = fopen(filename, "rb");
  stream = v25;
  if ( v25 != nullptr )
  {
    fseek(v25, 0, 2);
    v47 = ftell(stream);
    rewind(stream);
    if ( v47 > 0 )
    {
      drmDebugLog("installer_GameInstaller_nativeGDrmGetDevID, UUID size = %d");
      v27 = malloc(v47 + 1);
      memset(v27, 0, v47 + 1);
      fread(v27, 1u, v47, stream);
      fclose(stream);
      v45 = G4_VCALL<int>(a1, 668, v27);
      free(v27);
      return v45;
    }
    fclose(stream);
  }
  v33 = G4_VCALL<int>(a1, 24, "java/util/UUID");
  nd = G4_VCALL<int>(a1, 132, v33, "randomUUID", "()Ljava/util/UUID;");
  v34 = G4_VCALL<int>(a1, 132, v33, "toString", "()Ljava/lang/String;");
  whence = nd;
  ne = v34;
  v35 = G4_VCALL<int>(a1, 456, v33, whence);
  v48 = G4_VCALL<int>(a1, 136, v35, ne);
  v36 = (const void *)G4_VCALL<int>(a1, 676, v48, 0);
  v37 = fopen(filename, "wb");
  fwrite(v36, 1u, 4u, v37);
  fclose(v37);
  return v48;
}

