#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Bridge: AndroidOS.h
// Reconstructed from lib/x86/libGangstar4.so (13 functions)
// ============================================================================
#pragma once
#include <string>

namespace AndroidOS {
    std::string GetExternalStorageDirectory();
    std::string GetFilesDir();
    void        OpenURL(const char* url);
} // namespace AndroidOS

// Original Binary Symbol Table in lib/x86/libGangstar4.so:
//   [0x4bf580] AndroidOS_GetEnv (180 bytes)
//   [0x4bf640] AndroidOS_GetTime (109 bytes)
//   [0x4bf6b0] AndroidOS_hasConnectivity (27 bytes)
//   [0x4bf6d0] AndroidOS::GetSaveFolder(void) (241 bytes)
//   [0x4bf7d0] AndroidOS_GetSaveFolder (27 bytes)
//   [0x4bf7f0] AndroidOS::GetUserAgent(void) (98 bytes)
//   [0x4bf860] AndroidOS_GetUserAgent (27 bytes)
//   [0x4bf880] AndroidOS::charToString(char const*) (46 bytes)
//   [0x4bf8b0] AndroidOS::GetSDFolder(void) (281 bytes)
//   [0x4bf9d0] AndroidOS_GetSDFolder (27 bytes)
//   [0x4bf9f0] AndroidOS::replaceChars(char *,char,char) (54 bytes)
//   [0x4bfa30] AndroidOS::Init(void) (1083 bytes)
//   [0x4bfe70] AndroidOS_JNIOnload (90 bytes)
