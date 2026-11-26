#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_Osiris.h
// Library: gaia | Module: gaia_Osiris
// Binary Address Span: 0x14aa7e0 .. 0x14c09b0 (52 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x14aa7e0] (45 bytes) gaia::Osiris::~Osiris()
// void gaia::Osiris::~Osiris(gaia::Osiris *this);
// [0x14aa810] (56 bytes) gaia::Osiris::~Osiris()
// void gaia::Osiris::~Osiris(gaia::Osiris *this);
// [0x14ae9d0] (700 bytes) gaia::Osiris::RecordAchievement(std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::RecordAchievement( gaia::BaseServiceManager *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest *a5);
// [0x14aec90] (977 bytes) gaia::Osiris::UpvoteWallPost(gaia::Osiris::OsirisWallPostObjectType,std::string const&,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::UpvoteWallPost( gaia::BaseServiceManager *a1, int a2, char **a3, char **a4, char **a5, char **a6, gaia::GaiaRequest *a7);
// [0x14af070] (632 bytes) gaia::Osiris::PostOnWall(gaia::Osiris::OsirisWallPostObjectType,std::string const&,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::PostOnWall( gaia::BaseServiceManager *a1, int a2, char **a3, char **a4, char **a5, char **a6, gaia::GaiaRequest *a7);
// [0x14af2f0] (424 bytes) gaia::Osiris::ParticipateEvent(std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::ParticipateEvent( gaia::BaseServiceManager *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest *a5);
// [0x14af4a0] (397 bytes) gaia::Osiris::DeleteEvent(std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::DeleteEvent(gaia::BaseServiceManager *a1, char **a2, char **a3, gaia::GaiaRequest *a4);
// [0x14af630] (475 bytes) gaia::Osiris::JoinGroupAddMember(std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::JoinGroupAddMember( gaia::BaseServiceManager *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest *a5);
// [0x14af810] (641 bytes) gaia::Osiris::MemberUpdateCustomFields(std::string const&,std::string const&,std::string const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> *,gaia::GaiaRequest *)
// int gaia::Osiris::MemberUpdateCustomFields( gaia::BaseServiceManager *a1, char **a2, char **a3, char **a4, int a5, gaia::GaiaRequest *a6);
// [0x14afaa0] (463 bytes) gaia::Osiris::LeaveGroupDeleteMember(std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::LeaveGroupDeleteMember( gaia::BaseServiceManager *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest *a5);
// [0x14afc70] (397 bytes) gaia::Osiris::DeleteGroup(std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::DeleteGroup(gaia::BaseServiceManager *a1, char **a2, char **a3, gaia::GaiaRequest *a4);
// [0x14afe00] (383 bytes) gaia::Osiris::UpdateStatusLine(std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::UpdateStatusLine(gaia::BaseServiceManager *a1, char **a2, char **a3, gaia::GaiaRequest *a4);
// [0x14aff80] (535 bytes) gaia::Osiris::UpdateProfile(std::string const&,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::UpdateProfile( gaia::BaseServiceManager *a1, char **a2, char **a3, char **a4, char **a5, gaia::GaiaRequest *a6);
// [0x14b01a0] (397 bytes) gaia::Osiris::IgnoreRequest(std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::IgnoreRequest(gaia::BaseServiceManager *a1, char **a2, char **a3, gaia::GaiaRequest *a4);
// [0x14b0330] (397 bytes) gaia::Osiris::RejectRequest(std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::RejectRequest(gaia::BaseServiceManager *a1, char **a2, char **a3, gaia::GaiaRequest *a4);
// [0x14b04c0] (397 bytes) gaia::Osiris::AcceptRequest(std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::AcceptRequest(gaia::BaseServiceManager *a1, char **a2, char **a3, gaia::GaiaRequest *a4);
// [0x14b0650] (397 bytes) gaia::Osiris::CancelSentRequest(std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::CancelSentRequest(gaia::BaseServiceManager *a1, char **a2, char **a3, gaia::GaiaRequest *a4);
// [0x14b07e0] (451 bytes) gaia::Osiris::ConnectionExists(std::string const&,gaia::Osiris::OsirisConnectionType,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::ConnectionExists( gaia::BaseServiceManager *a1, char **a2, int a3, char **a4, gaia::GaiaRequest *a5);
// [0x14b09b0] (484 bytes) gaia::Osiris::DeleteConnection(std::string const&,gaia::Osiris::OsirisConnectionType,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::DeleteConnection( gaia::BaseServiceManager *a1, char **a2, int a3, char **a4, gaia::GaiaRequest *a5);
// [0x14b0ba0] (625 bytes) gaia::Osiris::AddConnection(std::string const&,gaia::Osiris::OsirisConnectionType,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::AddConnection( gaia::BaseServiceManager *a1, char **a2, int a3, char **a4, char **a5, char **a6, gaia::GaiaRequest *a7);
// [0x14b47e0] (458 bytes) gaia::Osiris::DeliverParticipantAwards(std::string &,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::DeliverParticipantAwards( int a1, int a2, char **a3, char **a4, char **a5, gaia::GaiaRequest *a6);
// [0x14b49b0] (382 bytes) gaia::Osiris::DeliverAwards(std::string &,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::DeliverAwards(int a1, int a2, char **a3, char **a4, gaia::GaiaRequest *a5);
// [0x14b4b30] (1098 bytes) gaia::Osiris::UpdateEvent(std::string &,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> *,gaia::GaiaRequest *)
// int gaia::Osiris::UpdateEvent( int a1, int a2, char **a3, char **a4, char **a5, char **a6, char **a7, char **a8, char **a9, char **a10, char **a11, int a12, gaia::GaiaRequest *a13);
// [0x14b4f80] (384 bytes) gaia::Osiris::GetEvents(std::string &,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::GetEvents(int a1, int a2, char **a3, char **a4, gaia::GaiaRequest *a5);
// [0x14b5100] (666 bytes) gaia::Osiris::SetTournamentInfo(std::string &,std::string const&,std::string const&,std::string const&,std::string const&,gaia::Osiris::OsirisTournamentDeliveryType,gaia::GaiaRequest *)
// int gaia::Osiris::SetTournamentInfo( int a1, int a2, char **a3, char **a4, char **a5, char **a6, int a7, gaia::GaiaRequest *a8);
// [0x14b53a0] (1018 bytes) gaia::Osiris::CreateEvent(std::string &,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> *,gaia::GaiaRequest *)
// int gaia::Osiris::CreateEvent( int a1, int a2, char **a3, char **a4, char **a5, char **a6, char **a7, char **a8, char **a9, char **a10, int a11, gaia::GaiaRequest *a12);
// [0x14b57a0] (442 bytes) gaia::Osiris::GetGroupField(std::string &,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::GetGroupField(int a1, int a2, char **a3, char **a4, char **a5, gaia::GaiaRequest *a6);
// [0x14b5960] (597 bytes) gaia::Osiris::IncrementDecrementGroupField(std::string &,std::string const&,std::string const&,std::string const&,std::string const&,gaia::Osiris::OsirisGroupModifyFieldType,gaia::GaiaRequest *)
// int gaia::Osiris::IncrementDecrementGroupField( int a1, int a2, char **a3, char **a4, char **a5, char **a6, int a7, gaia::GaiaRequest *a8);
// [0x14b5bc0] (516 bytes) gaia::Osiris::SetGroupField(std::string &,std::string const&,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::SetGroupField( int a1, int a2, char **a3, char **a4, char **a5, char **a6, gaia::GaiaRequest *a7);
// [0x14b8470] (484 bytes) gaia::Osiris::ListAchievements(void *&,int *,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::ListAchievements( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, char **a5, char **a6, gaia::GaiaRequest *a7);
// [0x14b8660] (647 bytes) gaia::Osiris::ViewWall(void *&,int *,gaia::Osiris::OsirisWallPostObjectType,std::string const&,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::ViewWall( gaia::BaseServiceManager *a1, void **a2, int *a3, int a4, char **a5, char **a6, char **a7, char **a8, gaia::GaiaRequest *a9);
// [0x14b88f0] (380 bytes) gaia::Osiris::ShowEvent(void *&,int *,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::ShowEvent( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, char **a5, gaia::GaiaRequest *a6);
// [0x14b8a70] (380 bytes) gaia::Osiris::ShowGroup(void *&,int *,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::ShowGroup( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, char **a5, gaia::GaiaRequest *a6);
// [0x14b8bf0] (446 bytes) gaia::Osiris::MembershipCheck(void *&,int *,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::MembershipCheck( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, char **a5, char **a6, gaia::GaiaRequest *a7);
// [0x14b8db0] (380 bytes) gaia::Osiris::GetProfile(void *&,int *,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::GetProfile( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, char **a5, gaia::GaiaRequest *a6);
// [0x14b8f30] (575 bytes) gaia::Osiris::Import(void *&,int *,std::string const&,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::Import( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, char **a5, char **a6, char **a7, gaia::GaiaRequest *a8);
// [0x14b9170] (588 bytes) gaia::Osiris::ImportFriends(void *&,int *,std::string const&,gaia::Osiris::OsirisConnectionType,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::ImportFriends( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, int a5, char **a6, char **a7, gaia::GaiaRequest *a8);
// [0x14b93c0] (156 bytes) gaia::Osiris::GetPictureFromUrl(std::string const&,void *&,int &,gaia::GaiaRequest *)
// int gaia::Osiris::GetPictureFromUrl( gaia::BaseServiceManager *a1, int a2, void **a3, int *a4, gaia::GaiaRequest *a5);
// [0x14baaa0] (511 bytes) gaia::Osiris::DeleteAward(std::string const&,std::string const&,unsigned int,gaia::GaiaRequest *)
// int gaia::Osiris::DeleteAward( gaia::BaseServiceManager *a1, char **a2, char **a3, int a4, gaia::GaiaRequest *a5);
// [0x14baca0] (728 bytes) gaia::Osiris::AddEventAward(std::string const&,std::string const&,unsigned int,unsigned int,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::AddEventAward( gaia::BaseServiceManager *a1, char **a2, char **a3, int a4, int a5, char **a6, char **a7, gaia::GaiaRequest *a8);
// [0x14bb5a0] (738 bytes) gaia::Osiris::SearchEvents(void *&,int *,std::string const&,std::string const&,std::string const&,std::string const&,unsigned int,unsigned int,gaia::GaiaRequest *)
// int gaia::Osiris::SearchEvents( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, char **a5, char **a6, char **a7, int a8, int a9, gaia::GaiaRequest *a10);
// [0x14bb890] (750 bytes) gaia::Osiris::ListGroupMembers(void *&,int *,std::string const&,std::string const&,unsigned int,unsigned int,bool,gaia::GaiaRequest *)
// int gaia::Osiris::ListGroupMembers( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, char **a5, int a6, int a7, char a8, gaia::GaiaRequest *a9);
// [0x14bbb80] (679 bytes) gaia::Osiris::SearchClansByRecommendedScore(void *&,int *,std::string const&,std::string const&,std::string const&,unsigned int,unsigned int,gaia::GaiaRequest *)
// int gaia::Osiris::SearchClansByRecommendedScore( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, char **a5, char **a6, int a7, int a8, gaia::GaiaRequest *a9);
// [0x14bbe30] (679 bytes) gaia::Osiris::SearchGroupsByKeywords(void *&,int *,std::string const&,std::string const&,std::string const&,unsigned int,unsigned int,gaia::GaiaRequest *)
// int gaia::Osiris::SearchGroupsByKeywords( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, char **a5, char **a6, int a7, int a8, gaia::GaiaRequest *a9);
// [0x14bc0e0] (572 bytes) gaia::Osiris::SearchGroups(void *&,int *,std::string const&,std::string const&,unsigned int,unsigned int,gaia::GaiaRequest *)
// int gaia::Osiris::SearchGroups( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, char **a5, int a6, int a7, gaia::GaiaRequest *a8);
// [0x14bc320] (1312 bytes) gaia::Osiris::UpdateGroup(void *&,int *,std::string const&,std::string const&,std::string const&,std::string const&,unsigned int,std::string const&,gaia::Osiris::OsirisGroupMembership,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> *,Json::Value const&,Json::Value const&,gaia::GaiaRequest *)
// int gaia::Osiris::UpdateGroup( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, char **a5, char **a6, char **a7, int a8, char **a9, int a10, int a11, Json::Value *a12, Json::Value *a13, gaia::GaiaRequest *a14);
// [0x14bc840] (1072 bytes) gaia::Osiris::CreateGroup(void *&,int *,std::string const&,gaia::Osiris::OsirisGroupType,std::string const&,std::string const&,std::string const&,unsigned int,std::string const&,gaia::Osiris::OsirisGroupMembership,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> *,gaia::GaiaRequest *)
// int gaia::Osiris::CreateGroup( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, int a5, char **a6, char **a7, char **a8, int a9, char **a10, int a11, int a12, gaia::GaiaRequest *a13);
// [0x14bcc70] (597 bytes) gaia::Osiris::ListSentRequests(void *&,int *,std::string const&,gaia::Osiris::OsirisRequestType,unsigned int,unsigned int,gaia::GaiaRequest *)
// int gaia::Osiris::ListSentRequests( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, int a5, int a6, int a7, gaia::GaiaRequest *a8);
// [0x14bced0] (690 bytes) gaia::Osiris::ListRequests(void *&,int *,std::string const&,gaia::Osiris::OsirisRequestType,unsigned int,unsigned int,std::string const&,gaia::GaiaRequest *)
// int gaia::Osiris::ListRequests( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, int a5, int a6, int a7, char **a8, gaia::GaiaRequest *a9);
// [0x14bd190] (800 bytes) gaia::Osiris::ListConnections(void *&,int *,std::string const&,gaia::Osiris::OsirisConnectionType,unsigned int,unsigned int,std::string const&,bool,unsigned int,gaia::GaiaRequest *)
// int gaia::Osiris::ListConnections( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, int a5, int a6, int a7, char **a8, char a9, int a10, gaia::GaiaRequest *a11);
// [0x14bea30] (662 bytes) gaia::Osiris::ViewFeed(void *&,int *,std::string const&,std::string const&,std::string const&,std::string const&,gaia::Osiris::OsirisConnectionType,gaia::GaiaRequest *)
// int gaia::Osiris::ViewFeed( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, char **a5, char **a6, char **a7, int a8, gaia::GaiaRequest *a9);
// [0x14c09b0] (162 bytes) gaia::Osiris::Osiris(std::string const&,std::string const&)
// int gaia::Osiris::Osiris(gaia::BaseServiceManager *a1, int a2, int a3);
