#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_Gaia_Osiris.h
// Library: gaia | Module: gaia_Gaia_Osiris
// Binary Address Span: 0x1448070 .. 0x148f190 (103 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1448070] (196 bytes) gaia::Gaia_Osiris::CancelRequest(gaia::BaseServiceManager::CancelRequestType)
// int gaia::Gaia_Osiris::CancelRequest(glwebtools::Mutex *a1, int a2);
// [0x144a970] (358 bytes) gaia::Gaia_Osiris::GetOsirisStatus(void)
// int gaia::Gaia_Osiris::GetOsirisStatus(gaia::Gaia_Osiris *this);
// [0x144aae0] (368 bytes) gaia::Gaia_Osiris::GetPictureFromUrl(std::string const&,void **,int *,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::GetPictureFromUrl( gaia::Gaia *a1, uint32_t *a2, void **a3, int *a4, char a5, int a6, int a7);
// [0x144ac50] (628 bytes) gaia::Gaia_Osiris::GetPictureFromUrl(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::GetPictureFromUrl(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1461fb0] (151 bytes) gaia::Gaia_Osiris::StartAndAuthorizeOsiris(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::StartAndAuthorizeOsiris(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1462050] (721 bytes) gaia::Gaia_Osiris::GetAccessToken(gaia::GaiaRequest &,std::string,std::string &)
// int gaia::Gaia_Osiris::GetAccessToken(gaia::Gaia *a1, gaia::GaiaRequest *a2, uint32_t *a3, int a4);
// [0x1462330] (1420 bytes) gaia::Gaia_Osiris::ListAchievements(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::ListAchievements(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x14628c0] (966 bytes) gaia::Gaia_Osiris::RecordAchievement(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::RecordAchievement(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1462c90] (2410 bytes) gaia::Gaia_Osiris::ViewFeed(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::ViewFeed(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1463600] (2264 bytes) gaia::Gaia_Osiris::ViewWall(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::ViewWall(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1463ee0] (1886 bytes) gaia::Gaia_Osiris::UpvoteWallPost(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::UpvoteWallPost(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1464640] (1793 bytes) gaia::Gaia_Osiris::PostOnWall(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::PostOnWall(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1464d50] (1345 bytes) gaia::Gaia_Osiris::MemberUpdateCustomFields(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::MemberUpdateCustomFields(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x14652a0] (1436 bytes) gaia::Gaia_Osiris::DeliverParticipantAwards(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::DeliverParticipantAwards(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1465840] (958 bytes) gaia::Gaia_Osiris::DeliverAwards(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::DeliverAwards(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1465c00] (1067 bytes) gaia::Gaia_Osiris::DeleteEventAward(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::DeleteEventAward(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1466030] (1714 bytes) gaia::Gaia_Osiris::AddEventAward(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::AddEventAward(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x14666f0] (1229 bytes) gaia::Gaia_Osiris::ParticipateEvent(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::ParticipateEvent(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1466bc0] (902 bytes) gaia::Gaia_Osiris::DeleteEvent(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::DeleteEvent(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1466f50] (3381 bytes) gaia::Gaia_Osiris::UpdateEvent(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::UpdateEvent(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1467c90] (2623 bytes) gaia::Gaia_Osiris::SearchEvents(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::SearchEvents(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x14686d0] (1094 bytes) gaia::Gaia_Osiris::GetEvents(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::GetEvents(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1468b20] (1069 bytes) gaia::Gaia_Osiris::ShowEvent(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::ShowEvent(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1468f50] (1815 bytes) gaia::Gaia_Osiris::SetTournamentInfo(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::SetTournamentInfo(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1469670] (3028 bytes) gaia::Gaia_Osiris::CreateEvent(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::CreateEvent(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x146a250] (1229 bytes) gaia::Gaia_Osiris::DeleteMemberFromGroup(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::DeleteMemberFromGroup(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x146a720] (966 bytes) gaia::Gaia_Osiris::LeaveGroup(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::LeaveGroup(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x146aaf0] (1420 bytes) gaia::Gaia_Osiris::MembershipCheck(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::MembershipCheck(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x146b080] (910 bytes) gaia::Gaia_Osiris::DeleteGroup(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::DeleteGroup(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x146b410] (4027 bytes) gaia::Gaia_Osiris::UpdateGroup(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::UpdateGroup(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x146c3d0] (1599 bytes) gaia::Gaia_Osiris::SetGroupField(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::SetGroupField(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x146ca10] (1177 bytes) gaia::Gaia_Osiris::GetGroupField(gaia::GaiaRequest)
// int gaia::Gaia_Osiris::GetGroupField(gaia::Gaia *a1, gaia::GaiaRequest *a2);
// [0x146ceb0] (1849 bytes) gaia::Gaia_Osiris::IncrementDecrementGroupField(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::IncrementDecrementGroupField(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x146d5f0] (2160 bytes) gaia::Gaia_Osiris::ListGroupMembers(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::ListGroupMembers(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x146de60] (966 bytes) gaia::Gaia_Osiris::JoinGroup(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::JoinGroup(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x146e230] (1229 bytes) gaia::Gaia_Osiris::AddMemberToGroup(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::AddMemberToGroup(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x146e700] (2402 bytes) gaia::Gaia_Osiris::SearchClansByRecommendationScore(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::SearchClansByRecommendationScore(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x146f070] (2534 bytes) gaia::Gaia_Osiris::SearchGroups(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::SearchGroups(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x146fa60] (1069 bytes) gaia::Gaia_Osiris::ShowGroup(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::ShowGroup(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x146fe90] (3540 bytes) gaia::Gaia_Osiris::CreateGroup(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::CreateGroup(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1470c70] (1069 bytes) gaia::Gaia_Osiris::GetProfile(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::GetProfile(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x14710a0] (866 bytes) gaia::Gaia_Osiris::UpdateStatusLine(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::UpdateStatusLine(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1471410] (1815 bytes) gaia::Gaia_Osiris::UpdateProfile(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::UpdateProfile(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1471b30] (910 bytes) gaia::Gaia_Osiris::IgnoreRequest(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::IgnoreRequest(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1471ec0] (866 bytes) gaia::Gaia_Osiris::RejectRequest(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::RejectRequest(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1472230] (910 bytes) gaia::Gaia_Osiris::AcceptRequest(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::AcceptRequest(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x14725c0] (910 bytes) gaia::Gaia_Osiris::CancelSentRequest(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::CancelSentRequest(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1472950] (1697 bytes) gaia::Gaia_Osiris::ListSentRequests(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::ListSentRequests(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1473000] (2253 bytes) gaia::Gaia_Osiris::ListRequests(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::ListRequests(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x14738d0] (1795 bytes) gaia::Gaia_Osiris::Import(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::Import(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1473fe0] (1609 bytes) gaia::Gaia_Osiris::ImportFriends(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::ImportFriends(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1474630] (1022 bytes) gaia::Gaia_Osiris::ConnectionExists(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::ConnectionExists(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1474a30] (1035 bytes) gaia::Gaia_Osiris::DeleteConnection(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::DeleteConnection(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1474e40] (2522 bytes) gaia::Gaia_Osiris::ListConnections(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::ListConnections(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1475820] (1977 bytes) gaia::Gaia_Osiris::AddConnection(gaia::GaiaRequest &)
// int gaia::Gaia_Osiris::AddConnection(gaia::Gaia_Osiris *this, gaia::GaiaRequest *a2);
// [0x1484c20] (112 bytes) gaia::Gaia_Osiris::StartAndAuthorizeOsiris(gaia::BaseServiceManager::Credentials,std::string const&)
// int gaia::Gaia_Osiris::StartAndAuthorizeOsiris(gaia::Gaia *a1, int a2, uint32_t *a3);
// [0x1484c90] (1062 bytes) gaia::Gaia_Osiris::ListAchievements(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::ListAchievements( gaia::Gaia *a1, int a2, int a3, int a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9);
// [0x14850c0] (641 bytes) gaia::Gaia_Osiris::RecordAchievement(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::RecordAchievement(gaia::Gaia *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x1485350] (1225 bytes) gaia::Gaia_Osiris::ViewFeed(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,gaia::Osiris::OsirisConnectionType,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::ViewFeed( gaia::Gaia *a1, int a2, int a3, int a4, int a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, char a9, int a10, int a11);
// [0x1485820] (974 bytes) gaia::Gaia_Osiris::ViewWall(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,gaia::Osiris::OsirisWallPostObjectType,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::ViewWall( gaia::Gaia *a1, int a2, int a3, int a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, char a8, int a9, int a10);
// [0x1485bf0] (856 bytes) gaia::Gaia_Osiris::UpvoteWallPost(gaia::BaseServiceManager::Credentials,gaia::Osiris::OsirisWallPostObjectType,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::UpvoteWallPost( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9);
// [0x1485f50] (856 bytes) gaia::Gaia_Osiris::PostOnWall(gaia::BaseServiceManager::Credentials,gaia::Osiris::OsirisWallPostObjectType,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::PostOnWall( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9);
// [0x14862b0] (989 bytes) gaia::Gaia_Osiris::MemberUpdateCustomFields(std::string const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> *,gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// unsigned int gaia::Gaia_Osiris::MemberUpdateCustomFields( gaia::Gaia *a1, uint32_t *a2, int a3, int a4, int a5, uint32_t *a6, char a7, int a8, int a9);
// [0x1486690] (754 bytes) gaia::Gaia_Osiris::DeliverParticipantAwards(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::DeliverParticipantAwards( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8);
// [0x1486990] (655 bytes) gaia::Gaia_Osiris::DeliverAwards(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::DeliverAwards(gaia::Gaia *a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7);
// [0x1486c20] (698 bytes) gaia::Gaia_Osiris::DeleteEventAward(gaia::BaseServiceManager::Credentials,std::string const&,unsigned int,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::DeleteEventAward( gaia::Gaia *a1, int a2, uint32_t *a3, unsigned int a4, char a5, int a6, int a7);
// [0x1486ee0] (922 bytes) gaia::Gaia_Osiris::AddEventAward(gaia::BaseServiceManager::Credentials,std::string const&,unsigned int,unsigned int,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::AddEventAward( gaia::Gaia *a1, int a2, uint32_t *a3, unsigned int a4, unsigned int a5, uint32_t *a6, uint32_t *a7, char a8, int a9, int a10);
// [0x1487280] (583 bytes) gaia::Gaia_Osiris::DeleteEvent(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::DeleteEvent(gaia::Gaia *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x14874d0] (1218 bytes) gaia::Gaia_Osiris::UpdateEvent(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> *,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::UpdateEvent( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, uint32_t *a9, uint32_t *a10, uint32_t *a11, int a12, char a13, int a14, int a15);
// [0x14879a0] (1022 bytes) gaia::Gaia_Osiris::SearchEvents(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,std::string const&,std::string const&,unsigned int,unsigned int,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::SearchEvents( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, unsigned int a7, unsigned int a8, char a9, int a10, int a11);
// [0x1487da0] (1025 bytes) gaia::Gaia_Osiris::ShowEvent(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::ShowEvent(gaia::Gaia *a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7);
// [0x14881b0] (930 bytes) gaia::Gaia_Osiris::SetTournamentInfo(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,std::string const&,std::string const&,gaia::Osiris::OsirisTournamentDeliveryType,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::SetTournamentInfo( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, int a7, char a8, int a9, int a10);
// [0x1488560] (1146 bytes) gaia::Gaia_Osiris::CreateEvent(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> *,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::CreateEvent( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, uint32_t *a9, uint32_t *a10, int a11, char a12, int a13, int a14);
// [0x14889e0] (970 bytes) gaia::Gaia_Osiris::DeleteMemberFromGroup(gaia::BaseServiceManager::Credentials,std::string const&,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// unsigned int gaia::Gaia_Osiris::DeleteMemberFromGroup( gaia::Gaia *a1, int a2, uint32_t *a3, int a4, uint32_t *a5, char a6, int a7, int a8);
// [0x1488db0] (653 bytes) gaia::Gaia_Osiris::LeaveGroup(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::LeaveGroup(gaia::Gaia *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x1489040] (1346 bytes) gaia::Gaia_Osiris::MembershipCheck(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::MembershipCheck( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, int a5, uint32_t *a6, char a7, int a8, int a9);
// [0x1489590] (583 bytes) gaia::Gaia_Osiris::DeleteGroup(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::DeleteGroup(gaia::Gaia *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x14897e0] (1520 bytes) gaia::Gaia_Osiris::UpdateGroup(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,std::string const&,std::string const&,unsigned int,std::string const&,gaia::Osiris::OsirisGroupMembership,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> *,Json::Value const&,Json::Value const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::UpdateGroup( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, unsigned int a7, uint32_t *a8, int a9, int a10, Json::Value *a11, Json::Value *a12, char a13, int a14, int a15);
// [0x1489dd0] (842 bytes) gaia::Gaia_Osiris::SetGroupField(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::SetGroupField( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9);
// [0x148a120] (725 bytes) gaia::Gaia_Osiris::GetGroupField(gaia::BaseServiceManager::Credentials,std::string &,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::GetGroupField( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8);
// [0x148a400] (930 bytes) gaia::Gaia_Osiris::IncrementDecrementGroupField(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,gaia::Osiris::OsirisGroupModifyFieldType,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::IncrementDecrementGroupField( gaia::Gaia *a1, int a2, int a3, int a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, char a8, int a9, int a10);
// [0x148a7b0] (982 bytes) gaia::Gaia_Osiris::ListGroupMembers(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,unsigned int,unsigned int,bool,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::ListGroupMembers( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, unsigned int a5, unsigned int a6, char a7, char a8, int a9, int a10);
// [0x148ab90] (653 bytes) gaia::Gaia_Osiris::JoinGroup(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::JoinGroup(gaia::Gaia *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x148ae20] (970 bytes) gaia::Gaia_Osiris::AddMemberToGroup(gaia::BaseServiceManager::Credentials,std::string const&,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// unsigned int gaia::Gaia_Osiris::AddMemberToGroup( gaia::Gaia *a1, int a2, uint32_t *a3, int a4, uint32_t *a5, char a6, int a7, int a8);
// [0x148b1f0] (974 bytes) gaia::Gaia_Osiris::SearchClansByRecommendationScore(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,unsigned int,std::string const&,int,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::SearchClansByRecommendationScore( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, unsigned int a5, uint32_t *a6, int a7, char a8, int a9, int a10);
// [0x148b5c0] (886 bytes) gaia::Gaia_Osiris::SearchGroups(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,unsigned int,unsigned int,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::SearchGroups( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, unsigned int a5, unsigned int a6, char a7, int a8, int a9);
// [0x148b940] (1025 bytes) gaia::Gaia_Osiris::ShowGroup(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::ShowGroup(gaia::Gaia *a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7);
// [0x148bd50] (1166 bytes) gaia::Gaia_Osiris::CreateGroup(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,gaia::Osiris::OsirisGroupType,std::string const&,std::string const&,std::string const&,unsigned int,std::string const&,gaia::Osiris::OsirisGroupMembership,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> *,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::CreateGroup( gaia::Gaia *a1, int a2, int a3, int a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, unsigned int a8, uint32_t *a9, int a10, int a11, char a12, int a13, int a14);
// [0x148c1e0] (1274 bytes) gaia::Gaia_Osiris::GetProfile(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::GetProfile(gaia::Gaia *a1, int a2, int a3, int a4, uint32_t *a5, char a6, int a7, int a8);
// [0x148c6e0] (583 bytes) gaia::Gaia_Osiris::UpdateStatusLine(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::UpdateStatusLine(gaia::Gaia *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x148c930] (773 bytes) gaia::Gaia_Osiris::UpdateProfile(gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::UpdateProfile( gaia::Gaia *a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8);
// [0x148cc40] (583 bytes) gaia::Gaia_Osiris::IgnoreRequest(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::IgnoreRequest(gaia::Gaia *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x148ce90] (583 bytes) gaia::Gaia_Osiris::RejectRequest(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::RejectRequest(gaia::Gaia *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x148d0e0] (583 bytes) gaia::Gaia_Osiris::AcceptRequest(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::AcceptRequest(gaia::Gaia *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x148d330] (583 bytes) gaia::Gaia_Osiris::CancelSentRequest(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::CancelSentRequest(gaia::Gaia *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x148d580] (886 bytes) gaia::Gaia_Osiris::ListSentRequests(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,gaia::Osiris::OsirisRequestType,unsigned int,unsigned int,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::ListSentRequests( gaia::Gaia *a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6, char a7, int a8, int a9);
// [0x148d900] (974 bytes) gaia::Gaia_Osiris::ListRequests(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,gaia::Osiris::OsirisRequestType,unsigned int,unsigned int,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::ListRequests( gaia::Gaia *a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6, uint32_t *a7, char a8, int a9, int a10);
// [0x148dcd0] (1134 bytes) gaia::Gaia_Osiris::Import(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::Import( gaia::Gaia *a1, int a2, int a3, int a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, char a8, int a9, int a10);
// [0x148e140] (1134 bytes) gaia::Gaia_Osiris::ImportFriends(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,gaia::Osiris::OsirisConnectionType,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::ImportFriends( gaia::Gaia *a1, int a2, int a3, int a4, int a5, uint32_t *a6, uint32_t *a7, char a8, int a9, int a10);
// [0x148e5b0] (970 bytes) gaia::Gaia_Osiris::ConnectionExists(gaia::BaseServiceManager::Credentials,gaia::Osiris::OsirisConnectionType,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// unsigned int gaia::Gaia_Osiris::ConnectionExists( gaia::Gaia *a1, int a2, int a3, int a4, uint32_t *a5, char a6, int a7, int a8);
// [0x148e980] (970 bytes) gaia::Gaia_Osiris::DeleteConnection(gaia::BaseServiceManager::Credentials,gaia::Osiris::OsirisConnectionType,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// unsigned int gaia::Gaia_Osiris::DeleteConnection( gaia::Gaia *a1, int a2, int a3, int a4, uint32_t *a5, char a6, int a7, int a8);
// [0x148ed50] (1078 bytes) gaia::Gaia_Osiris::ListConnections(gaia::BaseServiceManager::Credentials,gaia::Osiris::OsirisConnectionType,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,unsigned int,unsigned int,std::string const&,bool,unsigned int,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Osiris::ListConnections( gaia::Gaia *a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6, uint32_t *a7, char a8, unsigned int a9, char a10, int a11, int a12);
// [0x148f190] (1067 bytes) gaia::Gaia_Osiris::AddConnection(gaia::BaseServiceManager::Credentials,gaia::Osiris::OsirisConnectionType,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// unsigned int gaia::Gaia_Osiris::AddConnection( gaia::Gaia *a1, int a2, int a3, int a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, char a8, int a9, int a10);
