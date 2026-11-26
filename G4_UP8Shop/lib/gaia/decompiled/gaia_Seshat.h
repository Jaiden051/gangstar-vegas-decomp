#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_Seshat.h
// Library: gaia | Module: gaia_Seshat
// Binary Address Span: 0x14ac800 .. 0x14c5070 (21 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x14ac800] (83 bytes) gaia::Seshat::~Seshat()
// void gaia::Seshat::~Seshat(void **this);
// [0x14ac860] (56 bytes) gaia::Seshat::~Seshat()
// void gaia::Seshat::~Seshat(void **this);
// [0x14ad040] (557 bytes) gaia::Seshat::DeleteMatcher(std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Seshat::DeleteMatcher(gaia::BaseServiceManager *a1, char **a2, char **a3, gaia::GaiaRequest *a4);
// [0x14ad270] (653 bytes) gaia::Seshat::CreateMatcher(std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Seshat::CreateMatcher( gaia::BaseServiceManager *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest *a5);
// [0x14ad500] (675 bytes) gaia::Seshat::SetProfileVisibilitySelector(std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Seshat::SetProfileVisibilitySelector( gaia::BaseServiceManager *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest *a5);
// [0x14ad7b0] (561 bytes) gaia::Seshat::SetProfileVisibility(std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Seshat::SetProfileVisibility( gaia::BaseServiceManager *a1, char **a2, char **a3, gaia::GaiaRequest *a4);
// [0x14ad9f0] (577 bytes) gaia::Seshat::SetProfileVisibilityObject(std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Seshat::SetProfileVisibilityObject( gaia::BaseServiceManager *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest *a5);
// [0x14adc40] (452 bytes) gaia::Seshat::DeleteProfile(std::string const&,gaia::GaiaRequest *)
// int gaia::Seshat::DeleteProfile(gaia::BaseServiceManager *a1, char **a2, gaia::GaiaRequest *a3);
// [0x14ade10] (1070 bytes) gaia::Seshat::SetProfile(std::string const&,std::string const&,gaia::Seshat::dataVisibility const&,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Seshat::SetProfile( gaia::BaseServiceManager *a1, char **a2, char **a3, uint32_t *a4, char **a5, char **a6, char **a7, gaia::GaiaRequest *a8);
// [0x14ae240] (586 bytes) gaia::Seshat::DeleteData(std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Seshat::DeleteData(gaia::BaseServiceManager *a1, char **a2, char **a3, gaia::GaiaRequest *a4);
// [0x14ae490] (917 bytes) gaia::Seshat::PutData(std::string const&,std::string const&,std::string const&,std::string const&,gaia::Seshat::dataVisibility,gaia::GaiaRequest *)
// int gaia::Seshat::PutData( gaia::BaseServiceManager *a1, char **a2, char **a3, char **a4, char **a5, int a6, gaia::GaiaRequest *a7);
// [0x14b7c00] (334 bytes) gaia::Seshat::ListMatchers(std::string const&,void *&,int *,gaia::GaiaRequest *)
// int gaia::Seshat::ListMatchers( gaia::BaseServiceManager *a1, char **a2, void **a3, int *a4, gaia::GaiaRequest *a5);
// [0x14b7d50] (483 bytes) gaia::Seshat::GetBatchProfiles(std::string const&,void *&,int *,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Seshat::GetBatchProfiles( gaia::BaseServiceManager *a1, char **a2, void **a3, int *a4, char **a5, char **a6, gaia::GaiaRequest *a7);
// [0x14b7f40] (327 bytes) gaia::Seshat::GetProfileVisibility(std::string const&,void *&,int *,gaia::GaiaRequest *)
// int gaia::Seshat::GetProfileVisibility( gaia::BaseServiceManager *a1, char **a2, void **a3, int *a4, gaia::GaiaRequest *a5);
// [0x14b8090] (537 bytes) gaia::Seshat::GetProfile(std::string const&,std::string const&,void *&,int *,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Seshat::GetProfile( gaia::BaseServiceManager *a1, char **a2, char **a3, void **a4, int *a5, char **a6, char **a7, gaia::GaiaRequest *a8);
// [0x14b82b0] (433 bytes) gaia::Seshat::GetData(std::string const&,std::string const&,void *&,int *,std::string const&,gaia::GaiaRequest *)
// int gaia::Seshat::GetData( gaia::BaseServiceManager *a1, char **a2, char **a3, void **a4, int *a5, char **a6, gaia::GaiaRequest *a7);
// [0x14bb260] (822 bytes) gaia::Seshat::GetMatches(std::string const&,std::string const&,void *&,int *,unsigned int,std::string const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> *,gaia::GaiaRequest *)
// int gaia::Seshat::GetMatches( gaia::BaseServiceManager *a1, char **a2, char **a3, void **a4, int *a5, int a6, char **a7, int a8, gaia::GaiaRequest *a9);
// [0x14c07d0] (210 bytes) gaia::Seshat::Seshat(std::string const&,std::string const&)
// int gaia::Seshat::Seshat(gaia::BaseServiceManager *a1, int a2, int a3);
// [0x14c3d50] (556 bytes) gaia::Seshat::GetEtagForKey(std::string const&,std::string &)
// int gaia::Seshat::GetEtagForKey(int a1, void **a2, int a3);
// [0x14c4720] (2377 bytes) gaia::Seshat::PutDataCheckEtag(std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,gaia::Seshat::dataVisibility,gaia::GaiaRequest *)
// int gaia::Seshat::PutDataCheckEtag( uint32_t *a1, char **a2, char **a3, uint32_t *a4, char **a5, char **a6, int a7, gaia::GaiaRequest *a8);
// [0x14c5070] (2265 bytes) gaia::Seshat::GetDataCheckEtag(std::string const&,std::string const&,std::string const&,void *&,int *,std::string const&,gaia::GaiaRequest *)
// int gaia::Seshat::GetDataCheckEtag( uint32_t *a1, char **a2, char **a3, uint32_t *a4, uint32_t *a5, size_t *a6, char **a7, gaia::GaiaRequest *a8);
