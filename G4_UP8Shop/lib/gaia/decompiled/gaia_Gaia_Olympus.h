#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_Gaia_Olympus.h
// Library: gaia | Module: gaia_Gaia_Olympus
// Binary Address Span: 0x1447fa0 .. 0x1490db0 (21 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1447fa0] (196 bytes) gaia::Gaia_Olympus::CancelRequest(gaia::BaseServiceManager::CancelRequestType)
// int gaia::Gaia_Olympus::CancelRequest(glwebtools::Mutex *a1, int a2);
// [0x144aed0] (358 bytes) gaia::Gaia_Olympus::GetOlympusStatus(void)
// int gaia::Gaia_Olympus::GetOlympusStatus(gaia::Gaia_Olympus *this);
// [0x1475fe0] (151 bytes) gaia::Gaia_Olympus::StartAndAuthorizeOlympus(gaia::GaiaRequest &)
// int gaia::Gaia_Olympus::StartAndAuthorizeOlympus(gaia::Gaia_Olympus *this, gaia::GaiaRequest *a2);
// [0x1476080] (721 bytes) gaia::Gaia_Olympus::GetAccessToken(gaia::GaiaRequest &,std::string,std::string &)
// int gaia::Gaia_Olympus::GetAccessToken(gaia::Gaia *a1, gaia::GaiaRequest *a2, uint32_t *a3, int a4);
// [0x1476360] (2124 bytes) gaia::Gaia_Olympus::RetriveTopOfLeaderboard(gaia::GaiaRequest &)
// int gaia::Gaia_Olympus::RetriveTopOfLeaderboard(gaia::Gaia_Olympus *this, gaia::GaiaRequest *a2);
// [0x1476bb0] (740 bytes) gaia::Gaia_Olympus::ClearLeaderboard(gaia::GaiaRequest &)
// int gaia::Gaia_Olympus::ClearLeaderboard(gaia::Gaia_Olympus *this, gaia::GaiaRequest *a2);
// [0x1476ea0] (1722 bytes) gaia::Gaia_Olympus::RetrieveLeaderboardAroundArbitraryEntry(gaia::GaiaRequest &)
// int gaia::Gaia_Olympus::RetrieveLeaderboardAroundArbitraryEntry( gaia::Gaia_Olympus *this, gaia::GaiaRequest *a2);
// [0x1477560] (3458 bytes) gaia::Gaia_Olympus::PostArbitraryEntry(gaia::GaiaRequest &)
// int gaia::Gaia_Olympus::PostArbitraryEntry(gaia::Gaia_Olympus *this, gaia::GaiaRequest *a2);
// [0x14782f0] (3104 bytes) gaia::Gaia_Olympus::PostEntry(gaia::GaiaRequest &)
// int gaia::Gaia_Olympus::PostEntry(gaia::Gaia_Olympus *this, gaia::GaiaRequest *a2);
// [0x1478f10] (1654 bytes) gaia::Gaia_Olympus::RetrieveFriendLeaderboard(gaia::GaiaRequest &)
// int gaia::Gaia_Olympus::RetrieveFriendLeaderboard(gaia::Gaia_Olympus *this, gaia::GaiaRequest *a2);
// [0x1479590] (1325 bytes) gaia::Gaia_Olympus::RetrieveLeaderboardAroundCurrentUser(gaia::GaiaRequest &)
// int gaia::Gaia_Olympus::RetrieveLeaderboardAroundCurrentUser(gaia::Gaia_Olympus *this, gaia::GaiaRequest *a2);
// [0x1479ac0] (1127 bytes) gaia::Gaia_Olympus::DeleteEntry(gaia::GaiaRequest &)
// int gaia::Gaia_Olympus::DeleteEntry(gaia::Gaia_Olympus *this, gaia::GaiaRequest *a2);
// [0x1479f30] (558 bytes) gaia::Gaia_Olympus::DeleteEntry(gaia::BaseServiceManager::Credentials,std::string,bool,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Olympus::DeleteEntry( gaia::Gaia_Olympus *a1, int a2, uint32_t *a3, char a4, char a5, int a6, int a7);
// [0x148f5c0] (112 bytes) gaia::Gaia_Olympus::StartAndAuthorizeOlympus(gaia::BaseServiceManager::Credentials,std::string const&)
// int gaia::Gaia_Olympus::StartAndAuthorizeOlympus(gaia::Gaia *a1, int a2, uint32_t *a3);
// [0x148f630] (990 bytes) gaia::Gaia_Olympus::RetriveTopOfLeaderboard(gaia::BaseServiceManager::Credentials,std::string const&,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,int,int,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Olympus::RetriveTopOfLeaderboard( gaia::Gaia *a1, int a2, uint32_t *a3, int a4, char a5, int a6, int a7, uint32_t *a8, char a9, int a10, int a11);
// [0x148fa10] (583 bytes) gaia::Gaia_Olympus::ClearLeaderboard(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Olympus::ClearLeaderboard(gaia::Gaia *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x148fc60] (998 bytes) gaia::Gaia_Olympus::RetrieveLeaderboardAroundArbitraryEntry(gaia::BaseServiceManager::Credentials,std::string const&,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,bool,int,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Olympus::RetrieveLeaderboardAroundArbitraryEntry( gaia::Gaia *a1, int a2, uint32_t *a3, int a4, uint32_t *a5, char a6, int a7, char a8, int a9, int a10);
// [0x1490050] (1293 bytes) gaia::Gaia_Olympus::PostArbitraryEntry(gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::string const&,std::string const&,int,bool,std::string const&,std::string const&,std::string const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> *,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Olympus::PostArbitraryEntry( gaia::Gaia *a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, int a7, char a8, uint32_t *a9, uint32_t *a10, uint32_t *a11, int a12, char a13, int a14, int a15);
// [0x1490560] (1080 bytes) gaia::Gaia_Olympus::PostEntry(gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,int,bool,std::string const&,std::string const&,std::string const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> *,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Olympus::PostEntry( gaia::Gaia *a1, int a2, uint32_t *a3, uint32_t *a4, int a5, char a6, uint32_t *a7, uint32_t *a8, uint32_t *a9, int a10, char a11, int a12, int a13);
// [0x14909a0] (1030 bytes) gaia::Gaia_Olympus::RetrieveFriendLeaderboard(gaia::BaseServiceManager::Credentials,std::string const&,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,int,int,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Olympus::RetrieveFriendLeaderboard( gaia::Gaia *a1, int a2, uint32_t *a3, int a4, char a5, int a6, int a7, char a8, int a9, int a10);
// [0x1490db0] (902 bytes) gaia::Gaia_Olympus::RetrieveLeaderboardAroundCurrentUser(gaia::BaseServiceManager::Credentials,std::string const&,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,int,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Olympus::RetrieveLeaderboardAroundCurrentUser( gaia::Gaia *a1, int a2, uint32_t *a3, int a4, char a5, int a6, char a7, int a8, int a9);
