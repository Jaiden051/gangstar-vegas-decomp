#pragma once
// ============================================================================
// G4_UP8Shop/lib/ChatLibv2/decompiled/chatv2_Core.h
// Library: ChatLibv2 | Module: chatv2_Core
// Binary Address Span: 0x1231970 .. 0x1269850 (71 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1231970] (37 bytes) chatv2::Core::ArionUser::ArionUser(void)
// struct chatv2::Core::ArionUser *chatv2::Core::ArionUser::ArionUser(chatv2::Core::ArionUser *this);
// [0x12319a0] (173 bytes) chatv2::Core::ArionUser::~ArionUser()
// void chatv2::Core::ArionUser::~ArionUser(chatv2::Core::ArionUser *this);
// [0x1231a50] (42 bytes) chatv2::Core::ArionUser::SetCredential(std::string const&)
// int chatv2::Core::ArionUser::SetCredential(int a1, int a2);
// [0x1231a80] (11 bytes) chatv2::Core::ArionUser::GetCredential(void)const
// chatv2::Core::ArionUser *chatv2::Core::ArionUser::GetCredential(chatv2::Core::ArionUser *this);
// [0x1231a90] (45 bytes) chatv2::Core::ArionUser::SetNickname(std::string const&)
// int chatv2::Core::ArionUser::SetNickname(int a1, int a2);
// [0x1231ac0] (12 bytes) chatv2::Core::ArionUser::GetNickname(void)const
// char *chatv2::Core::ArionUser::GetNickname(chatv2::Core::ArionUser *this);
// [0x1231ad0] (45 bytes) chatv2::Core::ArionUser::SetAvatarLink(std::string const&)
// int chatv2::Core::ArionUser::SetAvatarLink(int a1, int a2);
// [0x1231b00] (12 bytes) chatv2::Core::ArionUser::GetAvatarLink(void)
// char *chatv2::Core::ArionUser::GetAvatarLink(chatv2::Core::ArionUser *this);
// [0x1231b10] (13 bytes) chatv2::Core::ArionUser::IsModerator(void)
// int chatv2::Core::ArionUser::IsModerator(chatv2::Core::ArionUser *this);
// [0x1231b20] (27 bytes) chatv2::Core::ArionUser::IsSet(void)const
// bool chatv2::Core::ArionUser::IsSet(chatv2::Core::ArionUser *this);
// [0x1231b40] (1473 bytes) chatv2::Core::ArionUser::ToJsonStr(void)
// chatv2::Core::ArionUser *chatv2::Core::ArionUser::ToJsonStr(chatv2::Core::ArionUser *this, int a2);
// [0x1232110] (2751 bytes) chatv2::Core::ChatLibEngine::Initialize(std::string const&,std::string const&)
// int chatv2::Core::ChatLibEngine::Initialize(uint32_t *a1, int a2, uint32_t *a3);
// [0x1232bd0] (1488 bytes) chatv2::Core::ChatLibEngine::SetHandlers(void)
// int (*chatv2::Core::ChatLibEngine::SetHandlers( chatv2::Core::ChatLibEngine *this))(uint32_t *, uint32_t *, int);
// [0x12331a0] (504 bytes) chatv2::Core::ChatLibEngine::GetResponse(void)
// chatv2::Core::ChatLibEngine *chatv2::Core::ChatLibEngine::GetResponse( chatv2::Core::ChatLibEngine *this, int a2);
// [0x12333a0] (170 bytes) chatv2::Core::ChatLibEngine::GetRequestFactory(void)
// chatv2::Core::ChatLibEngine *chatv2::Core::ChatLibEngine::GetRequestFactory( chatv2::Core::ChatLibEngine *this, int a2);
// [0x1233450] (1135 bytes) chatv2::Core::ChatLibEngine::Mute(std::string const&)
// int chatv2::Core::ChatLibEngine::Mute(int a1, uint32_t *a2);
// [0x12338c0] (255 bytes) chatv2::Core::ChatLibEngine::UnMute(void)
// int chatv2::Core::ChatLibEngine::UnMute(chatv2::Core::ChatLibEngine *this);
// [0x12339c0] (481 bytes) chatv2::Core::ChatLibEngine::~ChatLibEngine()
// void chatv2::Core::ChatLibEngine::~ChatLibEngine(chatv2::Core::ChatLibEngine *this);
// [0x1233bb0] (2197 bytes) chatv2::Core::ChatLibEngine::ChatLibEngine(void)
// chatv2::Core::ChatLibEngine *chatv2::Core::ChatLibEngine::ChatLibEngine(chatv2::Core::ChatLibEngine *this);
// [0x1234450] (518 bytes) chatv2::Core::ChatLibEngine::AddRequest(boost::shared_ptr<chatv2::Requests::IRequest>)
// void chatv2::Core::ChatLibEngine::AddRequest(int a1, int *a2);
// [0x1234660] (2005 bytes) chatv2::Core::ChatLibEngine::Run(void)
// void chatv2::Core::ChatLibEngine::Run(chatv2::Core::ChatLibEngine *this);
// [0x1234e40] (268 bytes) chatv2::Core::ChatLibEngine::Start(void)
// void chatv2::Core::ChatLibEngine::Start(chatv2::Core::ChatLibEngine *this);
// [0x1234f50] (518 bytes) chatv2::Core::ChatLibEngine::AddServerResponse(boost::shared_ptr<chatv2::Responses::IServerResponse>)
// void chatv2::Core::ChatLibEngine::AddServerResponse(int a1, int *a2);
// [0x1235160] (1431 bytes) chatv2::Core::ChatLibEngine::AddClientResponse(boost::shared_ptr<chatv2::Responses::ClientResponse>)
// int chatv2::Core::ChatLibEngine::AddClientResponse(int a1, int *a2);
// [0x1238ba0] (313 bytes) chatv2::Core::ArionExecutor::Start(void)
// void chatv2::Core::ArionExecutor::Start(chatv2::Core::ArionExecutor *this);
// [0x1238ce0] (537 bytes) chatv2::Core::ArionExecutor::~ArionExecutor()
// void chatv2::Core::ArionExecutor::~ArionExecutor(chatv2::Core::ArionExecutor *this);
// [0x1238f00] (56 bytes) chatv2::Core::ArionExecutor::~ArionExecutor()
// void chatv2::Core::ArionExecutor::~ArionExecutor(chatv2::Core::ArionExecutor *this);
// [0x1238f40] (1022 bytes) chatv2::Core::ArionExecutor::ArionExecutor(void)
// chatv2::Core::ArionExecutor *chatv2::Core::ArionExecutor::ArionExecutor(chatv2::Core::ArionExecutor *this);
// [0x1239340] (308 bytes) chatv2::Core::ArionExecutor::Mute(std::string const&)
// int chatv2::Core::ArionExecutor::Mute(int a1, int a2);
// [0x1239480] (284 bytes) chatv2::Core::ArionExecutor::UnMute(void)
// int chatv2::Core::ArionExecutor::UnMute(chatv2::Core::ArionExecutor *this);
// [0x12395a0] (286 bytes) chatv2::Core::ArionExecutor::IsMuted(void)
// int chatv2::Core::ArionExecutor::IsMuted(chatv2::Core::ArionExecutor *this);
// [0x12396c0] (287 bytes) chatv2::Core::ArionExecutor::GetMuteMessage(void)
// char *chatv2::Core::ArionExecutor::GetMuteMessage(chatv2::Core::ArionExecutor *this);
// [0x12397e0] (45 bytes) chatv2::Core::ArionExecutor::SetClientID(std::string const&)
// int chatv2::Core::ArionExecutor::SetClientID(int a1, int a2);
// [0x1239810] (12 bytes) chatv2::Core::ArionExecutor::GetClientID(void)
// char *chatv2::Core::ArionExecutor::GetClientID(chatv2::Core::ArionExecutor *this);
// [0x1239820] (30 bytes) chatv2::Core::ArionExecutor::GetRequestFactory(void)
// chatv2::Core::ArionExecutor *chatv2::Core::ArionExecutor::GetRequestFactory( chatv2::Core::ArionExecutor *this, int a2);
// [0x1239840] (30 bytes) chatv2::Core::ArionExecutor::GetResponseFactory(void)
// chatv2::Core::ArionExecutor *chatv2::Core::ArionExecutor::GetResponseFactory( chatv2::Core::ArionExecutor *this, int a2);
// [0x1239860] (12 bytes) chatv2::Core::ArionExecutor::GetUser(void)
// char *chatv2::Core::ArionExecutor::GetUser(chatv2::Core::ArionExecutor *this);
// [0x1239870] (897 bytes) chatv2::Core::ArionExecutor::OnHTTPResponseReceived(boost::shared_ptr<chatv2::Requests::IArionServerRequest>,boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// void chatv2::Core::ArionExecutor::OnHTTPResponseReceived(int a1, int a2, int a3);
// [0x1239c00] (194 bytes) chatv2::Core::IExecutor::~IExecutor()
// void chatv2::Core::IExecutor::~IExecutor(chatv2::Core::IExecutor *this);
// [0x123a020] (206 bytes) chatv2::Core::IExecutor::~IExecutor()
// void chatv2::Core::IExecutor::~IExecutor(chatv2::Core::IExecutor *this);
// [0x1267cb0] (962 bytes) chatv2::Core::ArionChannel::ArionChannel(boost::asio::io_service &,boost::asio::ssl::context &,std::string const&)
// void chatv2::Core::ArionChannel::ArionChannel(int a1, int a2, int a3, int a4);
// [0x1268080] (1159 bytes) chatv2::Core::ArionChannel::StartCommandClient(void)
// int chatv2::Core::ArionChannel::StartCommandClient(chatv2::Core::ArionChannel *this);
// [0x1268510] (1167 bytes) chatv2::Core::ArionChannel::StartListenClient(void)
// int chatv2::Core::ArionChannel::StartListenClient(chatv2::Core::ArionChannel *this);
// [0x12689a0] (56 bytes) chatv2::Core::ArionChannel::Start(void)
// int chatv2::Core::ArionChannel::Start(chatv2::Core::ArionChannel *this);
// [0x12689e0] (1151 bytes) chatv2::Core::ArionChannel::StopCommandClient(void)
// int chatv2::Core::ArionChannel::StopCommandClient(chatv2::Core::ArionChannel *this);
// [0x1268e60] (1167 bytes) chatv2::Core::ArionChannel::StopListenClient(void)
// int chatv2::Core::ArionChannel::StopListenClient(chatv2::Core::ArionChannel *this);
// [0x12692f0] (14 bytes) chatv2::Core::ArionChannel::GetListenClient(void)
// char *chatv2::Core::ArionChannel::GetListenClient(chatv2::Core::ArionChannel *this);
// [0x1269300] (11 bytes) chatv2::Core::ArionChannel::GetCommandClient(void)
// chatv2::Core::ArionChannel *chatv2::Core::ArionChannel::GetCommandClient(chatv2::Core::ArionChannel *this);
// [0x1269310] (268 bytes) chatv2::Core::ArionChannel::Disconnect(void)
// int chatv2::Core::ArionChannel::Disconnect(chatv2::Core::ArionChannel *this);
// [0x1269420] (487 bytes) chatv2::Core::ArionChannel::~ArionChannel()
// void chatv2::Core::ArionChannel::~ArionChannel(void ***this);
// [0x1269610] (14 bytes) chatv2::Core::ArionChannel::GetName(void)
// char *chatv2::Core::ArionChannel::GetName(chatv2::Core::ArionChannel *this);
// [0x1269620] (47 bytes) chatv2::Core::ArionChannel::SetReconnectKey(std::string const&)
// int chatv2::Core::ArionChannel::SetReconnectKey(int a1, int a2);
// [0x1269650] (14 bytes) chatv2::Core::ArionChannel::GetReconnectKey(void)
// char *chatv2::Core::ArionChannel::GetReconnectKey(chatv2::Core::ArionChannel *this);
// [0x1269660] (47 bytes) chatv2::Core::ArionChannel::SetLanguage(std::string const&)
// int chatv2::Core::ArionChannel::SetLanguage(int a1, int a2);
// [0x1269690] (14 bytes) chatv2::Core::ArionChannel::GetLanguage(void)
// char *chatv2::Core::ArionChannel::GetLanguage(chatv2::Core::ArionChannel *this);
// [0x12696a0] (17 bytes) chatv2::Core::ArionChannel::SetType(chatv2::Core::ChannelType)
// int chatv2::Core::ArionChannel::SetType(int a1, int a2);
// [0x12696c0] (15 bytes) chatv2::Core::ArionChannel::GetType(void)
// int chatv2::Core::ArionChannel::GetType(chatv2::Core::ArionChannel *this);
// [0x12696d0] (17 bytes) chatv2::Core::ArionChannel::SetSendQuota(unsigned int)
// chatv2::Core::ArionChannel *chatv2::Core::ArionChannel::SetSendQuota( chatv2::Core::ArionChannel *this, unsigned int a2);
// [0x12696f0] (15 bytes) chatv2::Core::ArionChannel::GetSendQuota(void)
// int chatv2::Core::ArionChannel::GetSendQuota(chatv2::Core::ArionChannel *this);
// [0x1269700] (17 bytes) chatv2::Core::ArionChannel::SetQuotaPeriod(unsigned int)
// chatv2::Core::ArionChannel *chatv2::Core::ArionChannel::SetQuotaPeriod( chatv2::Core::ArionChannel *this, unsigned int a2);
// [0x1269720] (15 bytes) chatv2::Core::ArionChannel::GetQuotaPeriod(void)
// int chatv2::Core::ArionChannel::GetQuotaPeriod(chatv2::Core::ArionChannel *this);
// [0x1269730] (47 bytes) chatv2::Core::ArionChannel::SetCommandHost(std::string const&)
// int chatv2::Core::ArionChannel::SetCommandHost(int a1, int a2);
// [0x1269760] (14 bytes) chatv2::Core::ArionChannel::GetCommandHost(void)
// char *chatv2::Core::ArionChannel::GetCommandHost(chatv2::Core::ArionChannel *this);
// [0x1269770] (47 bytes) chatv2::Core::ArionChannel::SetListenHost(std::string const&)
// int chatv2::Core::ArionChannel::SetListenHost(int a1, int a2);
// [0x12697a0] (47 bytes) chatv2::Core::ArionChannel::SetCommandPath(std::string const&)
// int chatv2::Core::ArionChannel::SetCommandPath(int a1, int a2);
// [0x12697d0] (14 bytes) chatv2::Core::ArionChannel::GetCommandPath(void)
// char *chatv2::Core::ArionChannel::GetCommandPath(chatv2::Core::ArionChannel *this);
// [0x12697e0] (47 bytes) chatv2::Core::ArionChannel::SetListenPath(std::string const&)
// int chatv2::Core::ArionChannel::SetListenPath(int a1, int a2);
// [0x1269810] (14 bytes) chatv2::Core::ArionChannel::GetListenPath(void)
// char *chatv2::Core::ArionChannel::GetListenPath(chatv2::Core::ArionChannel *this);
// [0x1269820] (17 bytes) chatv2::Core::ArionChannel::SetReceivingMessages(bool)
// chatv2::Core::ArionChannel *chatv2::Core::ArionChannel::SetReceivingMessages( chatv2::Core::ArionChannel *this, bool a2);
// [0x1269840] (16 bytes) chatv2::Core::ArionChannel::GetReceivingMessages(void)
// int chatv2::Core::ArionChannel::GetReceivingMessages(chatv2::Core::ArionChannel *this);
// [0x1269850] (455 bytes) chatv2::Core::ArionChannel::CalculateIfMessageCanBeSent(void)
// int chatv2::Core::ArionChannel::CalculateIfMessageCanBeSent(chatv2::Core::ArionChannel *this);
