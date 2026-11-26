#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_UserProfile.h
// Library: gaia | Module: gaia_UserProfile
// Binary Address Span: 0x14d4a00 .. 0x14e5430 (28 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x14d4a00] (93 bytes) gaia::UserProfile::GetStandardProfileString(void)
// gaia::UserProfile *gaia::UserProfile::GetStandardProfileString(gaia::UserProfile *this, int a2);
// [0x14d4a60] (81 bytes) gaia::UserProfile::SetStandardProfileString(std::string)
// int gaia::UserProfile::SetStandardProfileString(int a1, int a2);
// [0x14d4ac0] (93 bytes) gaia::UserProfile::GetStandardProfileStringTemplate(void)
// gaia::UserProfile *gaia::UserProfile::GetStandardProfileStringTemplate(gaia::UserProfile *this, int a2);
// [0x14d4b20] (81 bytes) gaia::UserProfile::SetStandardProfileStringTemplate(std::string)
// int gaia::UserProfile::SetStandardProfileStringTemplate(int a1, int a2);
// [0x14d4b80] (83 bytes) gaia::UserProfile::IsInstance(void)
// void *gaia::UserProfile::IsInstance();
// [0x14d4be0] (80 bytes) gaia::UserProfile::UserProfile(void)
// gaia::UserProfile *gaia::UserProfile::UserProfile(gaia::UserProfile *this);
// [0x14d4c30] (114 bytes) gaia::UserProfile::GetInstance(void)
// gaia::UserProfile *gaia::UserProfile::GetInstance();
// [0x14d4cb0] (13 bytes) gaia::UserProfile::isDeleteInProgress(void)
// int gaia::UserProfile::isDeleteInProgress(gaia::UserProfile *this);
// [0x14d4cc0] (76 bytes) gaia::UserProfile::IsConflictedAccount(void)
// int gaia::UserProfile::IsConflictedAccount(gaia::UserProfile *this);
// [0x14d4d10] (79 bytes) gaia::UserProfile::SetAccountConflicting(bool)
// int gaia::UserProfile::SetAccountConflicting(gaia::UserProfile *this, bool a2);
// [0x14d4d60] (401 bytes) gaia::UserProfile::EncodeData(Json::Value const&,std::string &)
// unsigned int gaia::UserProfile::EncodeData(long double a1, int a2, Json::Value *a3, uint32_t *a4);
// [0x14d4f00] (886 bytes) gaia::UserProfile::DecodeData(std::string const&,Json::Value &)
// unsigned int gaia::UserProfile::DecodeData(int a1, int *a2, Json::Value *a3);
// [0x14d5280] (226 bytes) gaia::UserProfile::GetProfileField(std::string const&,Json::Value &)
// unsigned int gaia::UserProfile::GetProfileField(int a1, char **a2, Json::Value *a3);
// [0x14d5370] (153 bytes) gaia::UserProfile::GetProfile(Json::Value &)
// int gaia::UserProfile::GetProfile(gaia::UserProfile *this, Json::Value *a2);
// [0x14d5410] (402 bytes) gaia::UserProfile::RemoveCustomFields(void)
// gaia::UserProfile *gaia::UserProfile::RemoveCustomFields(gaia::UserProfile *this, int a2);
// [0x14d55b0] (740 bytes) gaia::UserProfile::AddNewProfile(Json::Value &,std::string const&)
// unsigned int gaia::UserProfile::AddNewProfile(int a1, Json::Value *a2, char **a3);
// [0x14d58a0] (558 bytes) gaia::UserProfile::ValidateProfile(Json::Value &)
// unsigned int gaia::UserProfile::ValidateProfile(gaia::UserProfile *this, Json::Value *a2);
// [0x14e1be0] (81 bytes) gaia::UserProfile::~UserProfile()
// void gaia::UserProfile::~UserProfile(gaia::UserProfile *this);
// [0x14e1c40] (56 bytes) gaia::UserProfile::~UserProfile()
// void gaia::UserProfile::~UserProfile(gaia::UserProfile *this);
// [0x14e3da0] (2279 bytes) gaia::UserProfile::RefreshProfile(bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// unsigned int gaia::UserProfile::RefreshProfile( long double a1, gaia::UserProfile *a2, char a3, int a4, int a5);
// [0x14e4690] (896 bytes) gaia::UserProfile::SetProfileField(Json::Value const&,gaia::Seshat::dataVisibility,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::UserProfile::SetProfileField( int a1, long double a2, gaia::UserProfile *a3, Json::Value *a4, int a5, char a6, int a7, int a8);
// [0x14e4a10] (661 bytes) gaia::UserProfile::MergeProfile(Json::Value const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *,gaia::Seshat::dataVisibility,std::string const&)
// int gaia::UserProfile::MergeProfile( long double a1, gaia::UserProfile *a2, Json::Value *a3, char a4, int a5, int a6, int a7, uint32_t *a8);
// [0x14e4cb0] (677 bytes) gaia::UserProfile::UpdateProfile(Json::Value const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *,gaia::Seshat::dataVisibility,std::string const&)
// int gaia::UserProfile::UpdateProfile( long double a1, gaia::UserProfile *a2, Json::Value *a3, char a4, int a5, int a6, int a7, char **a8);
// [0x14e4f60] (304 bytes) gaia::UserProfile::DeleteProfile(bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// unsigned int gaia::UserProfile::DeleteProfile( long double a1, gaia::UserProfile *a2, char a3, int a4, int a5);
// [0x14e5090] (595 bytes) gaia::UserProfile::DeleteCustomFields(bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::UserProfile::DeleteCustomFields( long double a1, gaia::UserProfile *a2, char a3, int a4, int a5);
// [0x14e52f0] (81 bytes) gaia::UserProfile::ForceCloseAsyncCalls(void)
// int gaia::UserProfile::ForceCloseAsyncCalls();
// [0x14e5350] (210 bytes) gaia::UserProfile::Release(void)
// int gaia::UserProfile::Release();
// [0x14e5430] (2651 bytes) gaia::UserProfile::Initialize(gaia::BaseServiceManager::Credentials,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::UserProfile::Initialize( long double a1, gaia::UserProfile *a2, int a3, char a4, int a5, int a6);
