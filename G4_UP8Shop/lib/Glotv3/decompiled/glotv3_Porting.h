#pragma once
// ============================================================================
// G4_UP8Shop/lib/Glotv3/decompiled/glotv3_Porting.h
// Library: Glotv3 | Module: glotv3_Porting
// Binary Address Span: 0x131bd20 .. 0x131e810 (43 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x131bd20] (654 bytes) glotv3::Porting::Encrypt(std::string const&)
// int glotv3::Porting::Encrypt(int a1, int a2);
// [0x131bfb0] (465 bytes) glotv3::Porting::Decrypt(std::string &)
// int glotv3::Porting::Decrypt(int a1, int a2);
// [0x131c190] (642 bytes) glotv3::Porting::EncryptXXTEAEncodeBase64(std::string const&,std::string &)
// int glotv3::Porting::EncryptXXTEAEncodeBase64(glwebtools::Codec **a1, uint32_t *a2);
// [0x131c420] (571 bytes) glotv3::Porting::DecodeBase64DecryptXXTEA(std::string const&,std::string &)
// int glotv3::Porting::DecodeBase64DecryptXXTEA(uint32_t *a1, void **a2);
// [0x131c660] (1559 bytes) glotv3::Porting::GetDeviceAnonymousId(void)
// glotv3::Porting *glotv3::Porting::GetDeviceAnonymousId(glotv3::Porting *this);
// [0x131cc80] (158 bytes) glotv3::Porting::GetFederationAccessToken(void)
// glotv3::Porting *glotv3::Porting::GetFederationAccessToken(glotv3::Porting *this);
// [0x131cd20] (142 bytes) glotv3::Porting::GetGameloftDeviceIdentifier(void)
// glotv3::Porting *glotv3::Porting::GetGameloftDeviceIdentifier(glotv3::Porting *this);
// [0x131cdb0] (12 bytes) glotv3::Porting::GetMinimumRequiredConcurrency(void)
// int glotv3::Porting::GetMinimumRequiredConcurrency();
// [0x131cdc0] (12 bytes) glotv3::Porting::GetMaximumRequiredConcurrency(void)
// int glotv3::Porting::GetMaximumRequiredConcurrency();
// [0x131cdd0] (56 bytes) glotv3::Porting::GetDeviceHDIDFV(void)
// glotv3::Porting *glotv3::Porting::GetDeviceHDIDFV(glotv3::Porting *this);
// [0x131ce10] (82 bytes) glotv3::Porting::GetIGPCode(void)
// glotv3::Porting *glotv3::Porting::GetIGPCode(glotv3::Porting *this);
// [0x131ce70] (82 bytes) glotv3::Porting::GetInjectedIGPCode(void)
// glotv3::Porting *glotv3::Porting::GetInjectedIGPCode(glotv3::Porting *this);
// [0x131ced0] (82 bytes) glotv3::Porting::GetDownloadCode(void)
// glotv3::Porting *glotv3::Porting::GetDownloadCode(glotv3::Porting *this);
// [0x131cf30] (129 bytes) glotv3::Porting::SetThreadPriority(boost::thread &)
// bool glotv3::Porting::SetThreadPriority(glotv3::Porting *this);
// [0x131cfc0] (12 bytes) glotv3::Porting::GetPlatform(void)
// int glotv3::Porting::GetPlatform();
// [0x131cfd0] (255 bytes) glotv3::Porting::GetPlatformString(void)
// glotv3::Porting *glotv3::Porting::GetPlatformString(glotv3::Porting *this);
// [0x131d0d0] (56 bytes) glotv3::Porting::GetDataDirectory(void)
// glotv3::Porting *glotv3::Porting::GetDataDirectory(glotv3::Porting *this);
// [0x131d110] (56 bytes) glotv3::Porting::GetResourceDirectory(void)
// glotv3::Porting *glotv3::Porting::GetResourceDirectory(glotv3::Porting *this);
// [0x131d150] (171 bytes) glotv3::Porting::GetDeviceCarrierName(void)
// glotv3::Porting *glotv3::Porting::GetDeviceCarrierName(glotv3::Porting *this);
// [0x131d200] (171 bytes) glotv3::Porting::GetDeviceCountry(void)
// glotv3::Porting *glotv3::Porting::GetDeviceCountry(glotv3::Porting *this);
// [0x131d2b0] (171 bytes) glotv3::Porting::GetDeviceLanguage(void)
// glotv3::Porting *glotv3::Porting::GetDeviceLanguage(glotv3::Porting *this);
// [0x131d360] (171 bytes) glotv3::Porting::GetDeviceName(void)
// glotv3::Porting *glotv3::Porting::GetDeviceName(glotv3::Porting *this);
// [0x131d410] (171 bytes) glotv3::Porting::GetDeviceFirmware(void)
// glotv3::Porting *glotv3::Porting::GetDeviceFirmware(glotv3::Porting *this);
// [0x131d4c0] (62 bytes) glotv3::Porting::GetDeviceIdentifierForVendor(void)
// glotv3::Porting *glotv3::Porting::GetDeviceIdentifierForVendor(glotv3::Porting *this);
// [0x131d500] (491 bytes) glotv3::Porting::GetDeviceIdentifier(void)
// glotv3::Porting *glotv3::Porting::GetDeviceIdentifier(glotv3::Porting *this);
// [0x131d6f0] (171 bytes) glotv3::Porting::GetDeviceMACAddress(void)
// glotv3::Porting *glotv3::Porting::GetDeviceMACAddress(glotv3::Porting *this);
// [0x131d7a0] (27 bytes) glotv3::Porting::GetDeviceIsJbOrRt(void)
// bool glotv3::Porting::GetDeviceIsJbOrRt();
// [0x131d7c0] (27 bytes) glotv3::Porting::GetApplicationIsEncrypted(void)
// int glotv3::Porting::GetApplicationIsEncrypted();
// [0x131d7e0] (46 bytes) glotv3::Porting::GetConnectivityType(void)
// int glotv3::Porting::GetConnectivityType();
// [0x131d810] (62 bytes) glotv3::Porting::GetPublisherHostId(void)
// glotv3::Porting *glotv3::Porting::GetPublisherHostId(glotv3::Porting *this);
// [0x131d850] (62 bytes) glotv3::Porting::GetDeviceIdentifierForAdvertising(void)
// glotv3::Porting *glotv3::Porting::GetDeviceIdentifierForAdvertising(glotv3::Porting *this);
// [0x131d890] (62 bytes) glotv3::Porting::GetIdentifierPersistentAtUnistall(std::string const&)
// int glotv3::Porting::GetIdentifierPersistentAtUnistall(int a1);
// [0x131d8d0] (9 bytes) glotv3::Porting::SetIdentifierPersistentAtUninstall(std::string const&,std::string const&)
// int glotv3::Porting::SetIdentifierPersistentAtUninstall();
// [0x131d8e0] (9 bytes) glotv3::Porting::GetApplicationHasUninstallPersistentKey(void)
// int glotv3::Porting::GetApplicationHasUninstallPersistentKey();
// [0x131d8f0] (9 bytes) glotv3::Porting::SetApplicationUninstallPersistentKey(void)
// int glotv3::Porting::SetApplicationUninstallPersistentKey();
// [0x131d900] (170 bytes) glotv3::Porting::GetChannelID(void)
// int glotv3::Porting::GetChannelID(glotv3::Porting *this);
// [0x131d9b0] (171 bytes) glotv3::Porting::GetIMEI(void)
// glotv3::Porting *glotv3::Porting::GetIMEI(glotv3::Porting *this);
// [0x131da60] (171 bytes) glotv3::Porting::GetAndroidID(void)
// glotv3::Porting *glotv3::Porting::GetAndroidID(glotv3::Porting *this);
// [0x131db10] (171 bytes) glotv3::Porting::GetSerialNumber(void)
// glotv3::Porting *glotv3::Porting::GetSerialNumber(glotv3::Porting *this);
// [0x131dbc0] (2901 bytes) glotv3::Porting::TryGetInstallReferral(std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> &)
// int glotv3::Porting::TryGetInstallReferral(glotv3::Porting *this);
// [0x131e720] (171 bytes) glotv3::Porting::GetGoogleAdvertisingID(void)
// glotv3::Porting *glotv3::Porting::GetGoogleAdvertisingID(glotv3::Porting *this);
// [0x131e7d0] (62 bytes) glotv3::Porting::GetWindowsAdvertisingID(void)
// glotv3::Porting *glotv3::Porting::GetWindowsAdvertisingID(glotv3::Porting *this);
// [0x131e810] (80 bytes) glotv3::Porting::EraseIdentifiersCache(void)
// uint32_t *glotv3::Porting::EraseIdentifiersCache();
