#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_GameloftID.h
// Library: gaia | Module: gaia_GameloftID
// Binary Address Span: 0x14d04f0 .. 0x14e0a90 (32 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x14d04f0] (177 bytes) gaia::GameloftID::Android_GetKeynameStore_FirstLanchMarker(void)
// gaia::GameloftID *gaia::GameloftID::Android_GetKeynameStore_FirstLanchMarker(gaia::GameloftID *this);
// [0x14d05b0] (177 bytes) gaia::GameloftID::Android_GetKeynameStore_for_anonymous_GLUID(void)
// gaia::GameloftID *gaia::GameloftID::Android_GetKeynameStore_for_anonymous_GLUID(gaia::GameloftID *this);
// [0x14d0670] (177 bytes) gaia::GameloftID::Android_GetKeynameStore_for_encryption_GLUID(void)
// gaia::GameloftID *gaia::GameloftID::Android_GetKeynameStore_for_encryption_GLUID(gaia::GameloftID *this);
// [0x14d0730] (121 bytes) gaia::GameloftID::Android_IsFirstRun(void)
// int gaia::GameloftID::Android_IsFirstRun();
// [0x14d07b0] (105 bytes) gaia::GameloftID::Android_MarkAsSecondRun(void)
// DataSharing *gaia::GameloftID::Android_MarkAsSecondRun();
// [0x14d0820] (36 bytes) gaia::GameloftID::Android_DeleteSavedGLUID_UnderKeyName(std::string)
// int gaia::GameloftID::Android_DeleteSavedGLUID_UnderKeyName(DataSharing **a1);
// [0x14d0850] (196 bytes) gaia::GameloftID::Android_GetSavedGLUID_UnderKeyName(gaia::GLUID &,std::string)
// unsigned int gaia::GameloftID::Android_GetSavedGLUID_UnderKeyName(int a1, DataSharing **a2);
// [0x14d0920] (768 bytes) gaia::GameloftID::Android_SaveGLUID_UnderKeyName(gaia::GLUID const&,std::string)
// int gaia::GameloftID::Android_SaveGLUID_UnderKeyName(int *a1, DataSharing **a2);
// [0x14d0c20] (555 bytes) gaia::GameloftID::Android_Generate_GLUID_IMEI(void)
// gaia::GameloftID *gaia::GameloftID::Android_Generate_GLUID_IMEI(gaia::GameloftID *this);
// [0x14d0e50] (1024 bytes) gaia::GameloftID::GetLocalDeviceGLUID(void)
// gaia::GameloftID *gaia::GameloftID::GetLocalDeviceGLUID(gaia::GameloftID *this);
// [0x14d1250] (9 bytes) gaia::GameloftID::GLUIDExistsInNewLocations(void)
// int gaia::GameloftID::GLUIDExistsInNewLocations();
// [0x14d1260] (12 bytes) gaia::GameloftID::GLUIDDataExistsInOldLocations(void)
// int gaia::GameloftID::GLUIDDataExistsInOldLocations();
// [0x14d1270] (9 bytes) gaia::GameloftID::LogGLIDUtils(std::string)
// void gaia::GameloftID::LogGLIDUtils();
// [0x14d1280] (121 bytes) gaia::GameloftID::GetGluidFromOldLocations(void)
// int gaia::GameloftID::GetGluidFromOldLocations();
// [0x14d1300] (271 bytes) gaia::GameloftID::DecodeAndDecryptIDData(std::string,unsigned int const*)
// void *gaia::GameloftID::DecodeAndDecryptIDData(int *a1, unsigned int a2);
// [0x14d1410] (925 bytes) gaia::GameloftID::GetGluidFromNewLocations(void)
// uint32_t *gaia::GameloftID::GetGluidFromNewLocations();
// [0x14d17b0] (318 bytes) gaia::GameloftID::EncryptAndEncodeIDData(void const*,unsigned int,unsigned int const*)
// gaia::GameloftID *gaia::GameloftID::EncryptAndEncodeIDData( gaia::GameloftID *this, glwebtools::Codec *a2, glwebtools::Codec *a3, const unsigned int *a4);
// [0x14d18f0] (12 bytes) gaia::GameloftID::EncryptAndSaveGLUIDToNewLocations(gaia::GLUID *)
// int gaia::GameloftID::EncryptAndSaveGLUIDToNewLocations();
// [0x14d1900] (12 bytes) gaia::GameloftID::DeleteGLUIDFromOldLocations(void)
// int gaia::GameloftID::DeleteGLUIDFromOldLocations();
// [0x14d1910] (9 bytes) gaia::GameloftID::CreateNewGLUID(void)
// int gaia::GameloftID::CreateNewGLUID();
// [0x14d1920] (461 bytes) gaia::GameloftID::RetrieveDeviceGLUID(void)
// gaia::GameloftID *gaia::GameloftID::RetrieveDeviceGLUID(gaia::GameloftID *this);
// [0x14d1af0] (70 bytes) gaia::GameloftID::GenerateRandomPassword(void)
// gaia::GameloftID *gaia::GameloftID::GenerateRandomPassword(gaia::GameloftID *this);
// [0x14da390] (267 bytes) gaia::GameloftID::ResetDeviceGLUID(void)
// int gaia::GameloftID::ResetDeviceGLUID();
// [0x14df900] (1436 bytes) gaia::GameloftID::Android_Generate_GLUID_HDIDFV(void)
// gaia::GameloftID *gaia::GameloftID::Android_Generate_GLUID_HDIDFV(gaia::GameloftID *this);
// [0x14dfea0] (56 bytes) gaia::GameloftID::Android_Generate_GLUID(void)
// gaia::GameloftID *gaia::GameloftID::Android_Generate_GLUID(gaia::GameloftID *this);
// [0x14dfee0] (1968 bytes) gaia::GameloftID::Android_RetrieveGLUID_UnderKeyName(std::string)
// int *gaia::GameloftID::Android_RetrieveGLUID_UnderKeyName(int *a1, int a2);
// [0x14e0690] (441 bytes) gaia::GameloftID::Android_Generate_GLUIDs_At_First_Launch(void)
// DataSharing *gaia::GameloftID::Android_Generate_GLUIDs_At_First_Launch();
// [0x14e0850] (181 bytes) gaia::GameloftID::Android_RetrieveEncryptionKeyGLUID(void)
// gaia::GameloftID *gaia::GameloftID::Android_RetrieveEncryptionKeyGLUID(gaia::GameloftID *this);
// [0x14e0910] (86 bytes) gaia::GameloftID::RetrieveEncryptionGLUID(void)
// gaia::GameloftID *gaia::GameloftID::RetrieveEncryptionGLUID(gaia::GameloftID *this);
// [0x14e0970] (181 bytes) gaia::GameloftID::Android_RetrieveAnonymousGLUID(void)
// gaia::GameloftID *gaia::GameloftID::Android_RetrieveAnonymousGLUID(gaia::GameloftID *this);
// [0x14e0a30] (86 bytes) gaia::GameloftID::RetrieveAnonymousGLUID(void)
// gaia::GameloftID *gaia::GameloftID::RetrieveAnonymousGLUID(gaia::GameloftID *this);
// [0x14e0a90] (1668 bytes) gaia::GameloftID::RetrieveDeviceInfo(void)
// gaia::GameloftID *gaia::GameloftID::RetrieveDeviceInfo(gaia::GameloftID *this);
