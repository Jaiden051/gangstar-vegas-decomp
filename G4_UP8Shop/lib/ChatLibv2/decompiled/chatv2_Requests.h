#pragma once
// ============================================================================
// G4_UP8Shop/lib/ChatLibv2/decompiled/chatv2_Requests.h
// Library: ChatLibv2 | Module: chatv2_Requests
// Binary Address Span: 0x123a500 .. 0x1272270 (97 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x123a500] (32 bytes) chatv2::Requests::IRequest::CheckFailure(void)
// bool chatv2::Requests::IRequest::CheckFailure(chatv2::Requests::IRequest *this);
// [0x123a520] (27 bytes) chatv2::Requests::IRequest::~IRequest()
// void chatv2::Requests::IRequest::~IRequest(chatv2::Requests::IRequest *this);
// [0x123a540] (56 bytes) chatv2::Requests::IRequest::~IRequest()
// void chatv2::Requests::IRequest::~IRequest(chatv2::Requests::IRequest *this);
// [0x123a580] (176 bytes) chatv2::Requests::IRequest::CanExecute(void)
// bool chatv2::Requests::IRequest::CanExecute(chatv2::Requests::IRequest *this);
// [0x123a630] (48 bytes) chatv2::Requests::IRequest::IRequest(void)
// chatv2::Requests::IRequest *chatv2::Requests::IRequest::IRequest(chatv2::Requests::IRequest *this);
// [0x123a660] (235 bytes) chatv2::Requests::IRequest::SetNextExecutionTime(void)
// int chatv2::Requests::IRequest::SetNextExecutionTime(chatv2::Requests::IRequest *this);
// [0x123a810] (70 bytes) chatv2::Requests::ArionRequestFactory::GetChatServiceName(void)
// chatv2::Requests::ArionRequestFactory *chatv2::Requests::ArionRequestFactory::GetChatServiceName( chatv2::Requests::ArionRequestFactory *this);
// [0x123aaf0] (198 bytes) chatv2::Requests::ArionRequestFactory::OnChannelListenClientReadWriteFailed(boost::shared_ptr<chatv2::Core::ArionChannel>,boost::system::error_code const&)
// void chatv2::Requests::ArionRequestFactory::OnChannelListenClientReadWriteFailed( int a1, chatv2::Core::ArionChannel **a2, uint32_t *a3);
// [0x123af90] (446 bytes) chatv2::Requests::ArionRequestFactory::OnChannelCommandClientReadWriteFailed(boost::shared_ptr<chatv2::Core::ArionChannel>,boost::system::error_code const&)
// void chatv2::Requests::ArionRequestFactory::OnChannelCommandClientReadWriteFailed( int a1, chatv2::Core::ArionChannel **a2, uint32_t *a3);
// [0x123b280] (223 bytes) chatv2::Requests::ArionRequestFactory::CreateChangeNicknameRequest(std::string const&)
// chatv2::Requests::IRequest **chatv2::Requests::ArionRequestFactory::CreateChangeNicknameRequest( chatv2::Requests::IRequest **a1, int a2, int a3, int a4, volatile int32_t *a5, int a6, int a7, int a8, volatile int32_t *a9);
// [0x123b360] (230 bytes) chatv2::Requests::ArionRequestFactory::CreateLeaveChannelRequest(std::string const&,chatv2::Core::ChannelType)
// int *chatv2::Requests::ArionRequestFactory::CreateLeaveChannelRequest( int *a1, int a2, int a3, int a4, volatile int32_t *a5, int a6, int a7, int a8, volatile int32_t *a9);
// [0x123b450] (394 bytes) chatv2::Requests::ArionRequestFactory::CreateSubscribeRequest(std::string const&,std::string const&,std::string const&,chatv2::Core::ChannelType)
// 0x123b450 chatv2::Requests::ArionRequestFactory::CreateSubscribeRequest(std::string const&,std::string const&,std::string const&,chatv2::Core::ChannelType)
// [0x123b5e0] (386 bytes) chatv2::Requests::ArionRequestFactory::CreateSendMessageRequest(std::string const&,chatv2::Core::ChannelType,std::string const&)
// 0x123b5e0 chatv2::Requests::ArionRequestFactory::CreateSendMessageRequest(std::string const&,chatv2::Core::ChannelType,std::string const&)
// [0x123b770] (761 bytes) chatv2::Requests::ArionRequestFactory::OnChannelListenClientStartup(boost::shared_ptr<chatv2::Core::ArionChannel>,std::string const&,chatv2::Core::ChannelType)
// 0x123b770 chatv2::Requests::ArionRequestFactory::OnChannelListenClientStartup(boost::shared_ptr<chatv2::Core::ArionChannel>,std::string const&,chatv2::Core::ChannelType)
// [0x123ba70] (609 bytes) chatv2::Requests::ArionRequestFactory::OnChannelClientStartupFailed(boost::shared_ptr<chatv2::Core::ArionChannel>,boost::system::error_code const&)
// void chatv2::Requests::ArionRequestFactory::OnChannelClientStartupFailed( uint32_t *a1, chatv2::Core::ArionChannel **a2, uint32_t *a3);
// [0x123bce0] (999 bytes) chatv2::Requests::ArionRequestFactory::OnReportClientFailed(boost::system::error_code const&)
// 0x123bce0 chatv2::Requests::ArionRequestFactory::OnReportClientFailed(boost::system::error_code const&)
// [0x123c0d0] (999 bytes) chatv2::Requests::ArionRequestFactory::OnInviteClientFailed(boost::system::error_code const&)
// 0x123c0d0 chatv2::Requests::ArionRequestFactory::OnInviteClientFailed(boost::system::error_code const&)
// [0x123c4c0] (1330 bytes) chatv2::Requests::ArionRequestFactory::~ArionRequestFactory()
// void chatv2::Requests::ArionRequestFactory::~ArionRequestFactory(chatv2::Requests::ArionRequestFactory *this);
// [0x123ca00] (56 bytes) chatv2::Requests::ArionRequestFactory::~ArionRequestFactory()
// void chatv2::Requests::ArionRequestFactory::~ArionRequestFactory(chatv2::Requests::ArionRequestFactory *this);
// [0x123ccf0] (1260 bytes) chatv2::Requests::ArionRequestFactory::StartSubscribeClient(void)
// int chatv2::Requests::ArionRequestFactory::StartSubscribeClient(chatv2::Requests::ArionRequestFactory *this);
// [0x123d1e0] (1217 bytes) chatv2::Requests::ArionRequestFactory::OnSubscribeClientFailed(boost::system::error_code const&)
// 0x123d1e0 chatv2::Requests::ArionRequestFactory::OnSubscribeClientFailed(boost::system::error_code const&)
// [0x123d6b0] (849 bytes) chatv2::Requests::ArionRequestFactory::ChannelClientRestart(boost::shared_ptr<chatv2::Core::ArionChannel>)
// void chatv2::Requests::ArionRequestFactory::ChannelClientRestart(uint32_t *a1, chatv2::Core::ArionChannel **a2);
// [0x123da10] (12 bytes) chatv2::Requests::ArionRequestFactory::GetSubscribeClient(void)
// char *chatv2::Requests::ArionRequestFactory::GetSubscribeClient(chatv2::Requests::ArionRequestFactory *this);
// [0x123da20] (14 bytes) chatv2::Requests::ArionRequestFactory::GetReportClient(void)
// char *chatv2::Requests::ArionRequestFactory::GetReportClient(chatv2::Requests::ArionRequestFactory *this);
// [0x123da30] (14 bytes) chatv2::Requests::ArionRequestFactory::GetInviteClient(void)
// char *chatv2::Requests::ArionRequestFactory::GetInviteClient(chatv2::Requests::ArionRequestFactory *this);
// [0x123da40] (14 bytes) chatv2::Requests::ArionRequestFactory::SetArionExecutor(chatv2::Core::ArionExecutor *)
// chatv2::Requests::ArionRequestFactory *chatv2::Requests::ArionRequestFactory::SetArionExecutor( chatv2::Requests::ArionRequestFactory *this, chatv2::Core::ArionExecutor *a2);
// [0x123da50] (309 bytes) chatv2::Requests::ArionRequestFactory::GetChannel(std::string const&,chatv2::Core::ChannelType)
// uint32_t *chatv2::Requests::ArionRequestFactory::GetChannel( uint32_t *a1, int a2, const void **a3, int a4);
// [0x123db90] (283 bytes) chatv2::Requests::ArionRequestFactory::StartInviteClient(std::string const&)
// int chatv2::Requests::ArionRequestFactory::StartInviteClient(int a1, int a2);
// [0x123dcb0] (566 bytes) chatv2::Requests::ArionRequestFactory::CreateSendInviteRequest(std::string const&,chatv2::Core::ChannelType,std::string const&)
// int chatv2::Requests::ArionRequestFactory::CreateSendInviteRequest( int a1, int a2, const void **a3, int a4, int a5);
// [0x123def0] (347 bytes) chatv2::Requests::ArionRequestFactory::StartReportClient(void)
// int chatv2::Requests::ArionRequestFactory::StartReportClient(chatv2::Requests::ArionRequestFactory *this);
// [0x123e050] (597 bytes) chatv2::Requests::ArionRequestFactory::CreateReportRequest(std::string const&,chatv2::Core::ChannelType,chatv2::Core::ArionUser const&,chatv2::Core::ReportType,std::string const&,std::vector<boost::shared_ptr<chatv2::Responses::ClientResponse>,std::allocator<boost::shared_ptr<chatv2::Responses::ClientResponse>>> const&)
// 0x123e050 chatv2::Requests::ArionRequestFactory::CreateReportRequest(std::string const&,chatv2::Core::ChannelType,chatv2::Core::ArionUser const&,chatv2::Core::ReportType,std::string const&,std::vector<boost::shared_ptr<chatv2::Responses::ClientResponse>,std::allocator<boost::shared_ptr<chatv2::Responses::ClientResponse>>> const&)
// [0x123e2b0] (2501 bytes) chatv2::Requests::ArionRequestFactory::SetHandlers(void)
// int (*chatv2::Requests::ArionRequestFactory::SetHandlers( chatv2::Requests::ArionRequestFactory **this))(uint32_t *, uint32_t *, int);
// [0x123ec80] (1674 bytes) chatv2::Requests::ArionRequestFactory::Start(void)
// void chatv2::Requests::ArionRequestFactory::Start(chatv2::Requests::ArionRequestFactory *this);
// [0x123f310] (2360 bytes) chatv2::Requests::ArionRequestFactory::StopChannel(std::string const&,chatv2::Core::ChannelType)
// void chatv2::Requests::ArionRequestFactory::StopChannel(int a1, const void **a2, int a3);
// [0x123fc50] (1489 bytes) chatv2::Requests::ArionRequestFactory::ArionRequestFactory(void)
// chatv2::Requests::ArionRequestFactory *chatv2::Requests::ArionRequestFactory::ArionRequestFactory( chatv2::Requests::ArionRequestFactory *this);
// [0x1240230] (6284 bytes) chatv2::Requests::ArionRequestFactory::StartChannel(std::string const&,std::string const&,chatv2::Core::ChannelType,std::string const&,std::string const&)
// chatv2::Core::ArionChannel **chatv2::Requests::ArionRequestFactory::StartChannel( chatv2::Core::ArionChannel **a1, uint32_t *a2, const void **a3, int a4, int a5, uint32_t *a6, boost::detail::shared_count *a7);
// [0x1241ac0] (27 bytes) chatv2::Requests::IRequestFactory::~IRequestFactory()
// void chatv2::Requests::IRequestFactory::~IRequestFactory(chatv2::Requests::IRequestFactory *this);
// [0x1242110] (45 bytes) chatv2::Requests::IRequestFactory::~IRequestFactory()
// void chatv2::Requests::IRequestFactory::~IRequestFactory(chatv2::Requests::IRequestFactory *this);
// [0x1245ab0] (103 bytes) chatv2::Requests::LeaveChannelRequest::~LeaveChannelRequest()
// void chatv2::Requests::LeaveChannelRequest::~LeaveChannelRequest(chatv2::Requests::LeaveChannelRequest *this);
// [0x1245b20] (56 bytes) chatv2::Requests::LeaveChannelRequest::~LeaveChannelRequest()
// void chatv2::Requests::LeaveChannelRequest::~LeaveChannelRequest(chatv2::Requests::LeaveChannelRequest *this);
// [0x1245b60] (860 bytes) chatv2::Requests::LeaveChannelRequest::SendFailureMessage(void)
// void chatv2::Requests::LeaveChannelRequest::SendFailureMessage(chatv2::Requests::LeaveChannelRequest *this);
// [0x1245ec0] (92 bytes) chatv2::Requests::LeaveChannelRequest::LeaveChannelRequest(chatv2::Core::ArionExecutor *,std::string const&,chatv2::Core::ChannelType)
// int chatv2::Requests::LeaveChannelRequest::LeaveChannelRequest( chatv2::Requests::IRequest *a1, int a2, int a3, int a4);
// [0x1245f20] (575 bytes) chatv2::Requests::LeaveChannelRequest::CheckFailure(void)
// int chatv2::Requests::LeaveChannelRequest::CheckFailure(chatv2::Requests::LeaveChannelRequest *this);
// [0x1246160] (1402 bytes) chatv2::Requests::LeaveChannelRequest::Execute(void)
// int chatv2::Requests::LeaveChannelRequest::Execute(chatv2::Requests::LeaveChannelRequest *this);
// [0x1246f80] (12 bytes) chatv2::Requests::ListenArionRequest::GetClient(void)
// int chatv2::Requests::ListenArionRequest::GetClient(chatv2::Requests::ListenArionRequest *this);
// [0x1246f90] (34 bytes) chatv2::Requests::ListenArionRequest::CheckFailure(void)
// int chatv2::Requests::ListenArionRequest::CheckFailure(chatv2::Requests::ListenArionRequest *this);
// [0x1246fc0] (74 bytes) chatv2::Requests::ListenArionRequest::CanExecute(void)
// int chatv2::Requests::ListenArionRequest::CanExecute(chatv2::Requests::ListenArionRequest *this);
// [0x1247010] (103 bytes) chatv2::Requests::ListenArionRequest::~ListenArionRequest()
// void chatv2::Requests::ListenArionRequest::~ListenArionRequest(chatv2::Requests::ListenArionRequest *this);
// [0x1247080] (56 bytes) chatv2::Requests::ListenArionRequest::~ListenArionRequest()
// void chatv2::Requests::ListenArionRequest::~ListenArionRequest(chatv2::Requests::ListenArionRequest *this);
// [0x12470c0] (324 bytes) chatv2::Requests::ListenArionRequest::ToHTTPRequest(void)
// chatv2::Requests::ListenArionRequest *chatv2::Requests::ListenArionRequest::ToHTTPRequest( chatv2::Requests::ListenArionRequest *this, int a2);
// [0x1247210] (204 bytes) chatv2::Requests::ListenArionRequest::ListenArionRequest(chatv2::Core::ArionExecutor *,std::string const&,chatv2::Core::ChannelType,chatv2::Connectivity::HTTPClient *,std::string const&)
// int chatv2::Requests::ListenArionRequest::ListenArionRequest( chatv2::Requests::IRequest *a1, int a2, int a3, int a4, int a5, int a6);
// [0x1247870] (74 bytes) chatv2::Requests::SendInviteRequest::CanExecute(void)
// int chatv2::Requests::SendInviteRequest::CanExecute(chatv2::Requests::SendInviteRequest *this);
// [0x12478c0] (193 bytes) chatv2::Requests::SendInviteRequest::~SendInviteRequest()
// void chatv2::Requests::SendInviteRequest::~SendInviteRequest(chatv2::Requests::SendInviteRequest *this);
// [0x1247990] (56 bytes) chatv2::Requests::SendInviteRequest::~SendInviteRequest()
// void chatv2::Requests::SendInviteRequest::~SendInviteRequest(chatv2::Requests::SendInviteRequest *this);
// [0x12479d0] (203 bytes) chatv2::Requests::SendInviteRequest::GetClient(void)
// char *chatv2::Requests::SendInviteRequest::GetClient(chatv2::Requests::SendInviteRequest *this);
// [0x1247aa0] (2109 bytes) chatv2::Requests::SendInviteRequest::ToHTTPRequest(void)
// chatv2::Requests::SendInviteRequest *chatv2::Requests::SendInviteRequest::ToHTTPRequest( chatv2::Requests::SendInviteRequest *this, int a2);
// [0x12482e0] (1383 bytes) chatv2::Requests::SendInviteRequest::CheckFailure(void)
// int chatv2::Requests::SendInviteRequest::CheckFailure(chatv2::Requests::SendInviteRequest *this);
// [0x1248850] (250 bytes) chatv2::Requests::SendInviteRequest::SendInviteRequest(chatv2::Core::ArionExecutor *,std::string const&,chatv2::Core::ChannelType,std::string const&)
// uint32_t *chatv2::Requests::SendInviteRequest::SendInviteRequest( chatv2::Requests::IRequest *a1, int a2, int a3, int a4, int a5);
// [0x1248950] (45 bytes) chatv2::Requests::SendInviteRequest::SetCommandPath(std::string const&)
// int chatv2::Requests::SendInviteRequest::SetCommandPath(int a1, int a2);
// [0x1248fd0] (108 bytes) chatv2::Requests::SendMessageArionRequest::CheckFailure(void)
// int chatv2::Requests::SendMessageArionRequest::CheckFailure(chatv2::Core::ArionExecutor **this);
// [0x1249040] (103 bytes) chatv2::Requests::SendMessageArionRequest::~SendMessageArionRequest()
// void chatv2::Requests::SendMessageArionRequest::~SendMessageArionRequest( chatv2::Requests::SendMessageArionRequest *this);
// [0x12490b0] (56 bytes) chatv2::Requests::SendMessageArionRequest::~SendMessageArionRequest()
// void chatv2::Requests::SendMessageArionRequest::~SendMessageArionRequest( chatv2::Requests::SendMessageArionRequest *this);
// [0x12490f0] (314 bytes) chatv2::Requests::SendMessageArionRequest::GetClient(void)
// int chatv2::Requests::SendMessageArionRequest::GetClient(chatv2::Requests::SendMessageArionRequest *this);
// [0x1249230] (338 bytes) chatv2::Requests::SendMessageArionRequest::CanExecute(void)
// int chatv2::Requests::SendMessageArionRequest::CanExecute(chatv2::Requests::SendMessageArionRequest *this);
// [0x1249390] (197 bytes) chatv2::Requests::SendMessageArionRequest::SendMessageArionRequest(chatv2::Core::ArionExecutor *,std::string const&,chatv2::Core::ChannelType,std::string const&)
// int chatv2::Requests::SendMessageArionRequest::SendMessageArionRequest( chatv2::Requests::IRequest *a1, int a2, int a3, int a4, int a5);
// [0x1249460] (7175 bytes) chatv2::Requests::SendMessageArionRequest::ToHTTPRequest(void)
// chatv2::Requests::SendMessageArionRequest *chatv2::Requests::SendMessageArionRequest::ToHTTPRequest( chatv2::Requests::SendMessageArionRequest *this, int a2);
// [0x124c3f0] (34 bytes) chatv2::Requests::SubscribeArionRequest::CheckFailure(void)
// int chatv2::Requests::SubscribeArionRequest::CheckFailure(chatv2::Requests::SubscribeArionRequest *this);
// [0x124c420] (74 bytes) chatv2::Requests::SubscribeArionRequest::CanExecute(void)
// int chatv2::Requests::SubscribeArionRequest::CanExecute(chatv2::Requests::SubscribeArionRequest *this);
// [0x124c470] (203 bytes) chatv2::Requests::SubscribeArionRequest::GetClient(void)
// char *chatv2::Requests::SubscribeArionRequest::GetClient(chatv2::Requests::SubscribeArionRequest *this);
// [0x124c540] (153 bytes) chatv2::Requests::SubscribeArionRequest::~SubscribeArionRequest()
// void chatv2::Requests::SubscribeArionRequest::~SubscribeArionRequest( chatv2::Requests::SubscribeArionRequest *this);
// [0x124c5e0] (56 bytes) chatv2::Requests::SubscribeArionRequest::~SubscribeArionRequest()
// void chatv2::Requests::SubscribeArionRequest::~SubscribeArionRequest( chatv2::Requests::SubscribeArionRequest *this);
// [0x124c620] (152 bytes) chatv2::Requests::SubscribeArionRequest::SubscribeArionRequest(chatv2::Core::ArionExecutor *,std::string const&,chatv2::Core::ChannelType,std::string const&,std::string const&)
// int chatv2::Requests::SubscribeArionRequest::SubscribeArionRequest( chatv2::Requests::IRequest *a1, int a2, int a3, int a4, int a5, int a6);
// [0x124c6c0] (4453 bytes) chatv2::Requests::SubscribeArionRequest::ToHTTPRequest(void)
// chatv2::Requests::SubscribeArionRequest *chatv2::Requests::SubscribeArionRequest::ToHTTPRequest( chatv2::Requests::SubscribeArionRequest *this, uint32_t *a2);
// [0x126a0a0] (78 bytes) chatv2::Requests::ReportUserRequest::CanExecute(void)
// int chatv2::Requests::ReportUserRequest::CanExecute(chatv2::Requests::ReportUserRequest *this);
// [0x126a1a0] (244 bytes) chatv2::Requests::ReportUserRequest::~ReportUserRequest()
// void chatv2::Requests::ReportUserRequest::~ReportUserRequest(chatv2::Requests::ReportUserRequest *this);
// [0x126a2a0] (56 bytes) chatv2::Requests::ReportUserRequest::~ReportUserRequest()
// void chatv2::Requests::ReportUserRequest::~ReportUserRequest(chatv2::Requests::ReportUserRequest *this);
// [0x126a2e0] (203 bytes) chatv2::Requests::ReportUserRequest::GetClient(void)
// char *chatv2::Requests::ReportUserRequest::GetClient(chatv2::Requests::ReportUserRequest *this);
// [0x126a9e0] (281 bytes) chatv2::Requests::ReportUserRequest::ReportUserRequest(chatv2::Core::ArionExecutor *,std::string const&,chatv2::Core::ChannelType,chatv2::Core::ArionUser const&,std::string const&)
// uint32_t *chatv2::Requests::ReportUserRequest::ReportUserRequest( chatv2::Requests::IRequest *a1, int a2, int a3, int a4, chatv2::Core::ArionUser *a5, int a6);
// [0x126ab00] (14 bytes) chatv2::Requests::ReportUserRequest::SetReportType(chatv2::Core::ReportType)
// int chatv2::Requests::ReportUserRequest::SetReportType(int a1, int a2);
// [0x126ae80] (7475 bytes) chatv2::Requests::ReportUserRequest::ToHTTPRequest(void)
// chatv2::Requests::ReportUserRequest *chatv2::Requests::ReportUserRequest::ToHTTPRequest( chatv2::Requests::ReportUserRequest *this, int a2);
// [0x126cbc0] (2505 bytes) chatv2::Requests::ReportUserRequest::CreateChatHistory(std::vector<boost::shared_ptr<chatv2::Responses::ClientResponse>,std::allocator<boost::shared_ptr<chatv2::Responses::ClientResponse>>> const&)
// void chatv2::Requests::ReportUserRequest::CreateChatHistory(int a1, int a2);
// [0x126fa90] (103 bytes) chatv2::Requests::ChangeNicknameRequest::~ChangeNicknameRequest()
// void chatv2::Requests::ChangeNicknameRequest::~ChangeNicknameRequest( chatv2::Requests::ChangeNicknameRequest *this);
// [0x126fb00] (56 bytes) chatv2::Requests::ChangeNicknameRequest::~ChangeNicknameRequest()
// void chatv2::Requests::ChangeNicknameRequest::~ChangeNicknameRequest( chatv2::Requests::ChangeNicknameRequest *this);
// [0x126fb40] (317 bytes) chatv2::Requests::ChangeNicknameRequest::CheckFailure(void)
// int chatv2::Requests::ChangeNicknameRequest::CheckFailure(chatv2::Requests::ChangeNicknameRequest *this);
// [0x126fc80] (1921 bytes) chatv2::Requests::ChangeNicknameRequest::Execute(void)
// int chatv2::Requests::ChangeNicknameRequest::Execute(chatv2::Core::ArionExecutor **this);
// [0x1270410] (2195 bytes) chatv2::Requests::ChangeNicknameRequest::SendFailureMessage(void)
// void chatv2::Requests::ChangeNicknameRequest::SendFailureMessage(chatv2::Requests::ChangeNicknameRequest *this);
// [0x1270cb0] (85 bytes) chatv2::Requests::ChangeNicknameRequest::ChangeNicknameRequest(chatv2::Core::ArionExecutor *,std::string const&)
// int chatv2::Requests::ChangeNicknameRequest::ChangeNicknameRequest( chatv2::Requests::IRequest *a1, int a2, int a3);
// [0x12711a0] (94 bytes) chatv2::Requests::IArionServerRequest::CheckFailure(void)
// int chatv2::Requests::IArionServerRequest::CheckFailure(chatv2::Requests::IArionServerRequest *this);
// [0x1271200] (190 bytes) chatv2::Requests::IArionServerRequest::~IArionServerRequest()
// void chatv2::Requests::IArionServerRequest::~IArionServerRequest(chatv2::Requests::IArionServerRequest *this);
// [0x12712c0] (56 bytes) chatv2::Requests::IArionServerRequest::~IArionServerRequest()
// void chatv2::Requests::IArionServerRequest::~IArionServerRequest(chatv2::Requests::IArionServerRequest *this);
// [0x1271300] (3745 bytes) chatv2::Requests::IArionServerRequest::SendFailureMessage(void)
// char *chatv2::Requests::IArionServerRequest::SendFailureMessage(chatv2::Requests::IArionServerRequest *this);
// [0x12721b0] (120 bytes) chatv2::Requests::IArionServerRequest::IArionServerRequest(chatv2::Core::ArionExecutor *,std::string const&,std::string const&,chatv2::Core::ChannelType,chatv2::Requests::RequestTypeEnum)
// int chatv2::Requests::IArionServerRequest::IArionServerRequest( chatv2::Requests::IRequest *a1, int a2, int a3, int a4, int a5, int a6);
// [0x1272230] (12 bytes) chatv2::Requests::IArionServerRequest::GetChannelName(void)
// char *chatv2::Requests::IArionServerRequest::GetChannelName(chatv2::Requests::IArionServerRequest *this);
// [0x1272240] (12 bytes) chatv2::Requests::IArionServerRequest::GetChannelLanguage(void)
// char *chatv2::Requests::IArionServerRequest::GetChannelLanguage(chatv2::Requests::IArionServerRequest *this);
// [0x1272250] (12 bytes) chatv2::Requests::IArionServerRequest::GetChannelType(void)
// int chatv2::Requests::IArionServerRequest::GetChannelType(chatv2::Requests::IArionServerRequest *this);
// [0x1272260] (12 bytes) chatv2::Requests::IArionServerRequest::GetType(void)
// int chatv2::Requests::IArionServerRequest::GetType(chatv2::Requests::IArionServerRequest *this);
// [0x1272270] (1114 bytes) chatv2::Requests::IArionServerRequest::Execute(void)
// int chatv2::Requests::IArionServerRequest::Execute(chatv2::Requests::IArionServerRequest *this);
