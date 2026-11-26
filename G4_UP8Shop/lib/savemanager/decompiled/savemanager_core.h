#pragma once
// ============================================================================
// G4_UP8Shop/lib/savemanager/decompiled/savemanager_core.h
// Library: savemanager | Module: savemanager_core
// Binary Address Span: 0x137d730 .. 0x1387e40 (68 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x137d730] (307 bytes) savemanager::CloudSave::CloudSave(void)
// savemanager::CloudSave *savemanager::CloudSave::CloudSave(savemanager::CloudSave *this);
// [0x137d870] (438 bytes) savemanager::CloudSave::CloudSave(savemanager::CloudSave const&)
// savemanager::CloudSave *savemanager::CloudSave::CloudSave( savemanager::CloudSave *this, const savemanager::CloudSave *a2);
// [0x137da30] (1343 bytes) savemanager::CloudSave::operator=(savemanager::CloudSave const&)
// savemanager::CloudSave *savemanager::CloudSave::operator=(char **this, char **a2);
// [0x137df70] (13 bytes) savemanager::CloudSave::SetTimeStamp(int)
// savemanager::CloudSave *savemanager::CloudSave::SetTimeStamp(savemanager::CloudSave *this, int a2);
// [0x137df80] (116 bytes) savemanager::CloudSave::AddData(savemanager::SaveData const&)
// int savemanager::CloudSave::AddData(int a1, int a2);
// [0x137e000] (606 bytes) savemanager::CloudSave::SetGLUID(gaia::GLUID const&)
// int savemanager::CloudSave::SetGLUID(savemanager::CloudSave *this, const gaia::GLUID *a2);
// [0x137e260] (45 bytes) savemanager::CloudSave::SetSaveVersion(std::string const&)
// int savemanager::CloudSave::SetSaveVersion(int a1, int a2);
// [0x137e290] (12 bytes) savemanager::CloudSave::GetSaveVersion(void)const
// char *savemanager::CloudSave::GetSaveVersion(savemanager::CloudSave *this);
// [0x137e2a0] (11 bytes) savemanager::CloudSave::GetTimeStamp(void)
// int savemanager::CloudSave::GetTimeStamp(savemanager::CloudSave *this);
// [0x137e2b0] (12 bytes) savemanager::CloudSave::GetData(void)
// char *savemanager::CloudSave::GetData(savemanager::CloudSave *this);
// [0x137e2c0] (45 bytes) savemanager::CloudSave::SetDescription(std::string const&)
// int savemanager::CloudSave::SetDescription(int a1, int a2);
// [0x137e2f0] (12 bytes) savemanager::CloudSave::GetDescription(void)const
// char *savemanager::CloudSave::GetDescription(savemanager::CloudSave *this);
// [0x137e300] (45 bytes) savemanager::CloudSave::SetGameSpecificData(Json::Value const&)
// Json::Value *savemanager::CloudSave::SetGameSpecificData(savemanager::CloudSave *this, const Json::Value *a2);
// [0x137e330] (12 bytes) savemanager::CloudSave::GetGameSpecificData(void)const
// char *savemanager::CloudSave::GetGameSpecificData(savemanager::CloudSave *this);
// [0x137e340] (13 bytes) savemanager::CloudSave::GetSeshatFileKey(void)const
// int savemanager::CloudSave::GetSeshatFileKey(savemanager::CloudSave *this);
// [0x137e350] (12 bytes) savemanager::CloudSave::GetAllSeshatFileKeys(void)const
// char *savemanager::CloudSave::GetAllSeshatFileKeys(savemanager::CloudSave *this);
// [0x137e360] (166 bytes) savemanager::CloudSave::GetGLUID(void)const
// savemanager::CloudSave *savemanager::CloudSave::GetGLUID(savemanager::CloudSave *this, uint32_t *a2);
// [0x137e410] (12 bytes) savemanager::CloudSave::GetDataLength(void)const
// int savemanager::CloudSave::GetDataLength(savemanager::CloudSave *this);
// [0x137e420] (474 bytes) savemanager::CloudSave::~CloudSave()
// void savemanager::CloudSave::~CloudSave(void **this);
// [0x137e600] (101 bytes) savemanager::CloudSave::SetSeshatFileKey(std::string const&)
// char *savemanager::CloudSave::SetSeshatFileKey(int *a1, int a2);
// [0x137e850] (138 bytes) savemanager::SaveGameManager::SaveGameManager(void)
// savemanager::SaveGameManager *savemanager::SaveGameManager::SaveGameManager(savemanager::SaveGameManager *this);
// [0x137e8e0] (96 bytes) savemanager::SaveGameManager::Initialize(std::string)
// int savemanager::SaveGameManager::Initialize(int a1);
// [0x137e940] (501 bytes) savemanager::SaveGameManager::Encrypt_MAC_DES(char *,std::string const&)
// int savemanager::SaveGameManager::Encrypt_MAC_DES(int a1, int a2, uint32_t *a3, const void **a4);
// [0x137eb40] (447 bytes) savemanager::SaveGameManager::UploadTableOfContents(Json::Value const&,gaia::BaseServiceManager::Credentials)
// int savemanager::SaveGameManager::UploadTableOfContents(int a1, Json::Value *a2, int a3);
// [0x137ed00] (12 bytes) savemanager::SaveGameManager::GetCredentialTypeUsedForBackup(void)
// int savemanager::SaveGameManager::GetCredentialTypeUsedForBackup(savemanager::SaveGameManager *this);
// [0x137ed10] (14 bytes) savemanager::SaveGameManager::SetCredentialTypeUsedForBackup(gaia::BaseServiceManager::Credentials)
// int savemanager::SaveGameManager::SetCredentialTypeUsedForBackup(int a1, int a2);
// [0x137ed20] (143 bytes) savemanager::SaveGameManager::StringToUnixTimestamp(std::string const&)
// int savemanager::SaveGameManager::StringToUnixTimestamp(int a1, const char **a2);
// [0x137edb0] (1985 bytes) savemanager::SaveGameManager::RetrieveTableOfContents(Json::Value &,gaia::BaseServiceManager::Credentials)
// int savemanager::SaveGameManager::RetrieveTableOfContents(int a1, Json::Value *a2, int a3);
// [0x137f580] (91 bytes) savemanager::SaveGameManager::GetInstance(void)
// savemanager::SaveGameManager *savemanager::SaveGameManager::GetInstance();
// [0x137f5e0] (391 bytes) savemanager::SaveGameManager::AcceptSaveRestore(std::string const&)
// char *savemanager::SaveGameManager::AcceptSaveRestore(int a1, int a2);
// [0x137f770] (141 bytes) savemanager::SaveGameManager::RejectSaveRestore(void)
// int savemanager::SaveGameManager::RejectSaveRestore(savemanager::SaveGameManager *this);
// [0x137f800] (322 bytes) savemanager::SaveGameManager::BeginSave(std::string const&)
// int savemanager::SaveGameManager::BeginSave(int a1, int a2);
// [0x137f950] (991 bytes) savemanager::SaveGameManager::SaveBufferWithGLUID(void const*,int,gaia::GLUID const&)
// int savemanager::SaveGameManager::SaveBufferWithGLUID( savemanager::SaveGameManager *this, uint8_t *a2, int ptr, const gaia::GLUID *a4);
// [0x137fd30] (477 bytes) savemanager::SaveGameManager::SaveBuffer(void const*,int)
// int savemanager::SaveGameManager::SaveBuffer(savemanager::SaveGameManager *this, uint8_t *a2, int ptr);
// [0x137ff10] (1476 bytes) savemanager::SaveGameManager::EndSave(std::string const&,Json::Value const&,bool,void (*)(savemanager::OpCode,std::vector<savemanager::CloudSave *,std::allocator<savemanager::CloudSave *>> &,int,void *),void *)
// int savemanager::SaveGameManager::EndSave(char *a1, int a2, Json::Value *a3, char a4, void *a5, void *a6);
// [0x13804e0] (27 bytes) savemanager::SaveGameManager::GetNumberOfBuffers(int &)
// int savemanager::SaveGameManager::GetNumberOfBuffers(savemanager::SaveGameManager *this, int *a2);
// [0x1380500] (245 bytes) savemanager::SaveGameManager::BeginLoad(std::string const&)
// int savemanager::SaveGameManager::BeginLoad(int a1, int a2);
// [0x1380600] (78 bytes) savemanager::SaveGameManager::EndLoad(void)
// int savemanager::SaveGameManager::EndLoad(FILE **this);
// [0x1380650] (717 bytes) savemanager::SaveGameManager::LoadBufferWithGLUID(void *&,int &,gaia::GLUID const&)
// int savemanager::SaveGameManager::LoadBufferWithGLUID(FILE **this, void **a2, int *a3, const gaia::GLUID *a4);
// [0x1380920] (473 bytes) savemanager::SaveGameManager::LoadBuffer(void *&,int &)
// int savemanager::SaveGameManager::LoadBuffer(savemanager::SaveGameManager *this, void **a2, int *a3);
// [0x1380b00] (2089 bytes) savemanager::SaveGameManager::RestoreCloudSave(std::string const&,std::string const&,gaia::GLUID const&,std::string const&,bool,void (*)(savemanager::OpCode,std::vector<savemanager::CloudSave *,std::allocator<savemanager::CloudSave *>> &,int,void *),void *)
// int savemanager::SaveGameManager::RestoreCloudSave( savemanager::SaveGameManager *a1, int a2, int a3, const gaia::GLUID *a4, int a5);
// [0x1381330] (1231 bytes) savemanager::SaveGameManager::RestoreCloudSave(std::string const&,savemanager::CloudSave *,bool,void (*)(savemanager::OpCode,std::vector<savemanager::CloudSave *,std::allocator<savemanager::CloudSave *>> &,int,void *),void *)
// int savemanager::SaveGameManager::RestoreCloudSave( glwebtools::Thread **a1, uint32_t *a2, char **a3, char a4, void *a5, void *a6);
// [0x1381800] (4108 bytes) savemanager::SaveGameManager::RestoreCustomerCareSave(Json::Value const&,std::string &,bool,void (*)(savemanager::OpCode,std::vector<savemanager::CloudSave *,std::allocator<savemanager::CloudSave *>> &,int,void *),void *)
// savemanager::CloudSave *savemanager::SaveGameManager::RestoreCustomerCareSave( glwebtools::Thread **a1, Json::Value *a2, int a3, char a4, void *a5, void *a6);
// [0x1382810] (2288 bytes) savemanager::SaveGameManager::RestoreCloudSave(std::string const&,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(savemanager::OpCode,std::vector<savemanager::CloudSave *,std::allocator<savemanager::CloudSave *>> &,int,void *),void *)
// int savemanager::SaveGameManager::RestoreCloudSave( glwebtools::Thread **a1, uint32_t *a2, int a3, char **a4, char a5, void *a6, void *a7);
// [0x1383100] (1879 bytes) savemanager::SaveGameManager::GetFreeSpaceAvailableOnSeshat(int &,int &,int &)
// int savemanager::SaveGameManager::GetFreeSpaceAvailableOnSeshat( savemanager::SaveGameManager *this, int *a2, int *a3, int *a4);
// [0x1383860] (285 bytes) savemanager::SaveGameManager::~SaveGameManager()
// void savemanager::SaveGameManager::~SaveGameManager(savemanager::SaveGameManager *this);
// [0x1383980] (78 bytes) savemanager::SaveGameManager::Release(void)
// void savemanager::SaveGameManager::Release();
// [0x13839d0] (72 bytes) savemanager::SaveGameManager::GetSaveFilePath(std::string const&)
// int savemanager::SaveGameManager::GetSaveFilePath(int a1);
// [0x1383a20] (1651 bytes) savemanager::SaveGameManager::ResetCloud(void)
// char *savemanager::SaveGameManager::ResetCloud(savemanager::SaveGameManager *this);
// [0x13840a0] (3943 bytes) savemanager::SaveGameManager::UploadSaveToCloud(savemanager::CloudSave *)
// int savemanager::SaveGameManager::UploadSaveToCloud( savemanager::SaveGameManager *this, savemanager::CloudSave *a2);
// [0x1385010] (2783 bytes) savemanager::SaveGameManager::GetCloudSaves(int &,std::vector<savemanager::CloudSave *,std::allocator<savemanager::CloudSave *>> &,bool,void (*)(savemanager::OpCode,std::vector<savemanager::CloudSave *,std::allocator<savemanager::CloudSave *>> &,int,void *),void *)
// void *savemanager::SaveGameManager::GetCloudSaves( glwebtools::Thread **a1, int *a2, int a3, char a4, void *a5, void *a6);
// [0x1385af0] (1545 bytes) savemanager::SaveGameManager::PerformAsyncAction(void *,void *)
// int savemanager::SaveGameManager::PerformAsyncAction(glwebtools::Thread **this, uint32_t *a2);
// [0x1386100] (3558 bytes) savemanager::SaveGameManager::GenerateCustomerCareLink(std::string const&,std::string const&,std::string const&,bool,savemanager::SaveGameManager::E_BanType,std::string &)
// int savemanager::SaveGameManager::GenerateCustomerCareLink( int a1, int a2, int a3, int a4, char a5, int a6, int a7);
// [0x1387530] (56 bytes) savemanager::SavesStorageWrapper::GetStorageFilePath(void)
// savemanager::SavesStorageWrapper *savemanager::SavesStorageWrapper::GetStorageFilePath( savemanager::SavesStorageWrapper *this);
// [0x13876a0] (9 bytes) savemanager::Console::Console(void)
// void savemanager::Console::Console();
// [0x13876b0] (9 bytes) savemanager::Console::~Console()
// void savemanager::Console::~Console();
// [0x13876c0] (26 bytes) savemanager::Console::SetLogLevel(unsigned int)
// uint32_t *savemanager::Console::SetLogLevel();
// [0x13876e0] (32 bytes) savemanager::Console::IncreaseIndent(void)
// uint32_t *savemanager::Console::IncreaseIndent();
// [0x1387700] (32 bytes) savemanager::Console::DecreaseIndent(void)
// uint32_t *savemanager::Console::DecreaseIndent();
// [0x1387720] (365 bytes) savemanager::Console::Print(unsigned int,char const*,...)
// uint32_t *savemanager::Console::Print(savemanager::Console *this, char *format, const char *__varargs, ...);
// [0x1387890] (34 bytes) savemanager::IStorageWrapper::CloseFile(__sFILE *)
// int savemanager::IStorageWrapper::CloseFile(int a1, FILE *stream);
// [0x13878c0] (47 bytes) savemanager::IStorageWrapper::char2pathString_t(std::string const&,std::string &)
// int savemanager::IStorageWrapper::char2pathString_t(int a1, int a2, int a3);
// [0x13878f0] (492 bytes) savemanager::IStorageWrapper::GetFileWithPath(std::string const&)
// int savemanager::IStorageWrapper::GetFileWithPath(int a1, void (***a2)(int *), int a3);
// [0x1387ae0] (133 bytes) savemanager::IStorageWrapper::Remove(std::string const&)
// int savemanager::IStorageWrapper::Remove(void (***a1)(int *), int a2);
// [0x1387b70] (280 bytes) savemanager::IStorageWrapper::Rename(std::string const&,std::string const&)
// int savemanager::IStorageWrapper::Rename(void (***a1)(int *), int a2, int a3);
// [0x1387c90] (254 bytes) savemanager::IStorageWrapper::OpenFile(std::string const&,std::string const&)
// FILE *savemanager::IStorageWrapper::OpenFile(void (***a1)(int *), int a2, int a3);
// [0x1387d90] (173 bytes) savemanager::IStorageWrapper::GetFileSize(std::string const&,long &)
// int savemanager::IStorageWrapper::GetFileSize(void (***a1)(int *), int a2, __off_t *a3);
// [0x1387e40] (387 bytes) savemanager::IStorageWrapper::char2pathString_t(std::string const&,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>> &)
// int savemanager::IStorageWrapper::char2pathString_t(int a1, const char **a2, int a3);
