// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd64c0):
//   ../../../../../lib/boost/smart_ptr/shared_ptr.hpp
// Referenced by 73 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x12298c0 .. 0x1229b9d (733 bytes)
// Symbol:               _ZN6chatv27ChatLib10InitializeERKSsS2_
// Demangled:            chatv2::ChatLib::Initialize(std::string const&,std::string const&)
// ============================================================================
/*
int chatv2::ChatLib::Initialize(int *a1, int a2, int a3)
{
  Json::Value::Self *v3;
  void *v4;
  Json::Value::Self *v5;
  void *v6;
  int Instance;
  int v8;
  void *v10;
  void *v11;
  int v12;
  gaia::Gaia *v13;
  int v14;
  int v15;
  int v16[3];
  int v17;
  int v18;
  int v19;
  uint8_t v20[16];
  uint8_t v21[16];
  uint8_t v22[68];
  uint8_t v23[80];

  gaia::GaiaRequest::GaiaRequest((gaia::GaiaRequest::Self *)v22);
  Json::Value::Value((Json::Value::Self *)v20, 19);
  std::string::__construct_from_cstr((int)&v17, "accountType", (int)&v15);
  v3 = (Json::Value::Self *)gaia::GaiaRequest::operator[](v22, &v17);
  Json::Value::operator=(v3, (const Json::Value::Self *)v20);
  v4 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy(v4);
  }
  Json::Value::~Value((Json::Value::Self *)v20);
  Json::Value::Value((Json::Value::Self *)v21, "chat");
  std::string::__construct_from_cstr((int)&v18, "scope", (int)&v15 + 1);
  v5 = (Json::Value::Self *)gaia::GaiaRequest::operator[](v22, &v18);
  Json::Value::operator=(v5, (const Json::Value::Self *)v21);
  v6 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy(v6);
  }
  Json::Value::~Value((Json::Value::Self *)v21);
  gaia::GaiaRequest::GaiaRequest((gaia::GaiaRequest::Self *)v23, (const gaia::GaiaRequest::Self *)v22);
  Instance = gaia::Gaia::GetInstance(v13);
  v14 = gaia::Gaia::Authorize(Instance, (gaia::GaiaRequest::Self *)v23);
  gaia::GaiaRequest::~GaiaRequest((gaia::GaiaRequest::Self *)v23);
  v8 = 0;
  if ( v14 == 0 )
  {
    std::string::__construct_from_cstr((int)v16, " ChatLib initialize\n", (int)&v15 + 3);
    std::string::__construct_from_cstr((int)&v19, "ChatLib", (int)&v15 + 2);
    chatv2::Utils::Log(3, 0, &v19, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/ChatLib.cpp", 30, v16);
    v10 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      std::string::_Rep::_M_destroy(v10);
    }
    v11 = (void *)(v16[0] - 12);
    if ( (uint32_t *)(v16[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      std::string::_Rep::_M_destroy(v11);
    }
    v12 = *a1;
    if ( *a1 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
        "px != 0");
      v12 = *a1;
    }
    v8 = 1;
    chatv2::Core::ChatLibEngine::Initialize(v12, a2, a3);
  }
  gaia::GaiaRequest::~GaiaRequest((gaia::GaiaRequest::Self *)v22);
  return v8;
}

*/

// ============================================================================
// Referencing Function: 0x1229ba0 .. 0x1229db1 (529 bytes)
// Symbol:               _ZN6chatv27ChatLib14ChangeNicknameERKSs
// Demangled:            chatv2::ChatLib::ChangeNickname(std::string const&)
// ============================================================================
/*
int chatv2::ChatLib::ChangeNickname(int *a1, uint32_t *a2)
{
  int result;
  int *v3;
  int v4;
  volatile int32_t *v5;
  int v6;
  volatile int32_t *v7;
  volatile int32_t *v8;
  int v9;
  volatile int32_t *v10;
  int v11;
  volatile int32_t *v12;
  int v13;
  volatile int32_t *v14;
  int **v15;

  result = -14;
  v15 = &a1;
  v3 = a1;
  if ( *(uint32_t *)(*a2 - 12) != 0 )
  {
    if ( *a1 == 0 )
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
        "px != 0");
    chatv2::Core::ChatLibEngine::GetRequestFactory((chatv2::Core::ChatLibEngine::Self *)&v13);
    v4 = v13;
    if ( v13 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Req"
        "uests::IRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IRequestFactory*]",
        "px != 0");
      v4 = v13;
    }
    (*(void (**)(int *))(*(uint32_t *)v4 + 12))(&v9);
    v5 = v14;
    if ( v14 != nullptr && __sync_fetch_and_add(v14 + 1, 0xFFFFFFFF) == 1 )
    {
      (*(void (**)(volatile int32_t *))(*v5 + 8))(v5);
      if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
        (*(void (**)(volatile int32_t *))(*v5 + 12))(v5);
    }
    v11 = v9;
    v12 = v10;
    if ( v10 != nullptr )
      __sync_add_and_fetch(v10 + 1, 1);
    v6 = *v3;
    if ( *v3 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
        "px != 0");
      v6 = *v3;
    }
    chatv2::Core::ChatLibEngine::AddRequest(v6, &v11);
    v7 = v12;
    if ( v12 != nullptr && __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
    {
      (*(void (**)(volatile int32_t *))(*v7 + 8))(v7);
      if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
        (*(void (**)(volatile int32_t *))(*v7 + 12))(v7);
    }
    v8 = v10;
    result = 0;
    if ( v10 != nullptr && __sync_fetch_and_add(v10 + 1, 0xFFFFFFFF) == 1 )
    {
      (*(void (**)(volatile int32_t *))(*v8 + 8))(v8);
      result = 0;
      if ( __sync_fetch_and_add(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(volatile int32_t *))(*v8 + 12))(v8);
        return 0;
      }
    }
  }
  return result;
}

*/

// ============================================================================
// Referencing Function: 0x1229dc0 .. 0x1229e2e (110 bytes)
// Symbol:               _ZN6chatv27ChatLib4MuteERKSs
// Demangled:            chatv2::ChatLib::Mute(std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1229e30 .. 0x1229e96 (102 bytes)
// Symbol:               _ZN6chatv27ChatLib6UnMuteEv
// Demangled:            chatv2::ChatLib::UnMute(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1229ea0 .. 0x1229f1e (126 bytes)
// Symbol:               _ZN6chatv27ChatLib11GetResponseEv
// Demangled:            chatv2::ChatLib::GetResponse(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1229f20 .. 0x122a139 (537 bytes)
// Symbol:               _ZN6chatv27ChatLib13LeaveChatRoomERKSs
// Demangled:            chatv2::ChatLib::LeaveChatRoom(std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x122a140 .. 0x122a359 (537 bytes)
// Symbol:               _ZN6chatv27ChatLib12LeaveChannelERKSs
// Demangled:            chatv2::ChatLib::LeaveChannel(std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x122a360 .. 0x122aa8a (1834 bytes)
// Symbol:               _ZN6chatv27ChatLib14SendInvitationERKSsS2_
// Demangled:            chatv2::ChatLib::SendInvitation(std::string const&,std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x122aa90 .. 0x122ae69 (985 bytes)
// Symbol:               _ZN6chatv27ChatLib12JoinChatRoomERKSs
// Demangled:            chatv2::ChatLib::JoinChatRoom(std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x122ae70 .. 0x122b1ed (893 bytes)
// Symbol:               _ZN6chatv27ChatLib11JoinChannelERKSsS2_
// Demangled:            chatv2::ChatLib::JoinChannel(std::string const&,std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x122b1f0 .. 0x122b943 (1875 bytes)
// Symbol:               _ZN6chatv27ChatLib15SendChatMessageERKSsNS_4Core11ChannelTypeES2_
// Demangled:            chatv2::ChatLib::SendChatMessage(std::string const&,chatv2::Core::ChannelType,std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x122b9d0 .. 0x122c313 (2371 bytes)
// Symbol:               _ZN6chatv27ChatLib10ReportUserERKSsNS_4Core11ChannelTypeERKNS3_9ArionUserENS3_10ReportTypeES2_RKSt6vectorIN5boost10shared_ptrINS_9Responses14ClientResponseEEESaISE_EE
// Demangled:            chatv2::ChatLib::ReportUser(std::string const&,chatv2::Core::ChannelType,chatv2::Core::ArionUser const&,chatv2::Core::ReportType,std::string const&,std::vector<boost::shared_ptr<chatv2::Responses::ClientResponse>,std::allocator<boost::shared_ptr<chatv2::Responses::ClientResponse>>> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x122d730 .. 0x122d9ec (700 bytes)
// Symbol:               _ZN5boost4asio3ssl6detail17openssl_init_base7do_initC2Ev
// Demangled:            boost::asio::ssl::detail::openssl_init_base::do_init::do_init(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x122e070 .. 0x122e407 (919 bytes)
// Symbol:               _ZN5boost4asio3ssl6detail17openssl_init_base7do_init20openssl_locking_funcEiiPKci
// Demangled:            boost::asio::ssl::detail::openssl_init_base::do_init::openssl_locking_func(int,int,char const*,int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x122e410 .. 0x122e79f (911 bytes)
// Symbol:               _ZN5boost4asio3ssl6detail17openssl_init_base7do_init15openssl_id_funcEv
// Demangled:            boost::asio::ssl::detail::openssl_init_base::do_init::openssl_id_func(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1234660 .. 0x1234e35 (2005 bytes)
// Symbol:               _ZN6chatv24Core13ChatLibEngine3RunEv
// Demangled:            chatv2::Core::ChatLibEngine::Run(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1238ba0 .. 0x1238cd9 (313 bytes)
// Symbol:               _ZN6chatv24Core13ArionExecutor5StartEv
// Demangled:            chatv2::Core::ArionExecutor::Start(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1238f40 .. 0x123933e (1022 bytes)
// Symbol:               _ZN6chatv24Core13ArionExecutorC1Ev
// Demangled:            chatv2::Core::ArionExecutor::ArionExecutor(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1239870 .. 0x1239bf1 (897 bytes)
// Symbol:               _ZN6chatv24Core13ArionExecutor22OnHTTPResponseReceivedEN5boost10shared_ptrINS_8Requests19IArionServerRequestEEENS3_INS_12Connectivity12HTTPResponseEEE
// Demangled:            chatv2::Core::ArionExecutor::OnHTTPResponseReceived(boost::shared_ptr<chatv2::Requests::IArionServerRequest>,boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x123aaf0 .. 0x123abb6 (198 bytes)
// Symbol:               _ZN6chatv28Requests19ArionRequestFactory36OnChannelListenClientReadWriteFailedEN5boost10shared_ptrINS_4Core12ArionChannelEEERKNS2_6system10error_codeE
// Demangled:            chatv2::Requests::ArionRequestFactory::OnChannelListenClientReadWriteFailed(boost::shared_ptr<chatv2::Core::ArionChannel>,boost::system::error_code const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x123af90 .. 0x123b14e (446 bytes)
// Symbol:               _ZN6chatv28Requests19ArionRequestFactory37OnChannelCommandClientReadWriteFailedEN5boost10shared_ptrINS_4Core12ArionChannelEEERKNS2_6system10error_codeE
// Demangled:            chatv2::Requests::ArionRequestFactory::OnChannelCommandClientReadWriteFailed(boost::shared_ptr<chatv2::Core::ArionChannel>,boost::system::error_code const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x123b770 .. 0x123ba69 (761 bytes)
// Symbol:               _ZN6chatv28Requests19ArionRequestFactory28OnChannelListenClientStartupEN5boost10shared_ptrINS_4Core12ArionChannelEEERKSsNS4_11ChannelTypeE
// Demangled:            chatv2::Requests::ArionRequestFactory::OnChannelListenClientStartup(boost::shared_ptr<chatv2::Core::ArionChannel>,std::string const&,chatv2::Core::ChannelType)
// ============================================================================

// ============================================================================
// Referencing Function: 0x123ba70 .. 0x123bcd1 (609 bytes)
// Symbol:               _ZN6chatv28Requests19ArionRequestFactory28OnChannelClientStartupFailedEN5boost10shared_ptrINS_4Core12ArionChannelEEERKNS2_6system10error_codeE
// Demangled:            chatv2::Requests::ArionRequestFactory::OnChannelClientStartupFailed(boost::shared_ptr<chatv2::Core::ArionChannel>,boost::system::error_code const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x123bce0 .. 0x123c0c7 (999 bytes)
// Symbol:               _ZN6chatv28Requests19ArionRequestFactory20OnReportClientFailedERKN5boost6system10error_codeE
// Demangled:            chatv2::Requests::ArionRequestFactory::OnReportClientFailed(boost::system::error_code const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x123c0d0 .. 0x123c4b7 (999 bytes)
// Symbol:               _ZN6chatv28Requests19ArionRequestFactory20OnInviteClientFailedERKN5boost6system10error_codeE
// Demangled:            chatv2::Requests::ArionRequestFactory::OnInviteClientFailed(boost::system::error_code const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x123d6b0 .. 0x123da01 (849 bytes)
// Symbol:               _ZN6chatv28Requests19ArionRequestFactory20ChannelClientRestartEN5boost10shared_ptrINS_4Core12ArionChannelEEE
// Demangled:            chatv2::Requests::ArionRequestFactory::ChannelClientRestart(boost::shared_ptr<chatv2::Core::ArionChannel>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x123e050 .. 0x123e2a5 (597 bytes)
// Symbol:               _ZN6chatv28Requests19ArionRequestFactory19CreateReportRequestERKSsNS_4Core11ChannelTypeERKNS4_9ArionUserENS4_10ReportTypeES3_RKSt6vectorIN5boost10shared_ptrINS_9Responses14ClientResponseEEESaISF_EE
// Demangled:            chatv2::Requests::ArionRequestFactory::CreateReportRequest(std::string const&,chatv2::Core::ChannelType,chatv2::Core::ArionUser const&,chatv2::Core::ReportType,std::string const&,std::vector<boost::shared_ptr<chatv2::Responses::ClientResponse>,std::allocator<boost::shared_ptr<chatv2::Responses::ClientResponse>>> const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x123f310 .. 0x123fc48 (2360 bytes)
// Symbol:               _ZN6chatv28Requests19ArionRequestFactory11StopChannelERKSsNS_4Core11ChannelTypeE
// Demangled:            chatv2::Requests::ArionRequestFactory::StopChannel(std::string const&,chatv2::Core::ChannelType)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1240230 .. 0x1241abc (6284 bytes)
// Symbol:               _ZN6chatv28Requests19ArionRequestFactory12StartChannelERKSsS3_NS_4Core11ChannelTypeES3_S3_
// Demangled:            chatv2::Requests::ArionRequestFactory::StartChannel(std::string const&,std::string const&,chatv2::Core::ChannelType,std::string const&,std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1245b60 .. 0x1245ebc (860 bytes)
// Symbol:               _ZN6chatv28Requests19LeaveChannelRequest18SendFailureMessageEv
// Demangled:            chatv2::Requests::LeaveChannelRequest::SendFailureMessage(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1245f20 .. 0x124615f (575 bytes)
// Symbol:               _ZN6chatv28Requests19LeaveChannelRequest12CheckFailureEv
// Demangled:            chatv2::Requests::LeaveChannelRequest::CheckFailure(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1246160 .. 0x12466da (1402 bytes)
// Symbol:               _ZN6chatv28Requests19LeaveChannelRequest7ExecuteEv
// Demangled:            chatv2::Requests::LeaveChannelRequest::Execute(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12479d0 .. 0x1247a9b (203 bytes)
// Symbol:               _ZN6chatv28Requests17SendInviteRequest9GetClientEv
// Demangled:            chatv2::Requests::SendInviteRequest::GetClient(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1247aa0 .. 0x12482dd (2109 bytes)
// Symbol:               _ZN6chatv28Requests17SendInviteRequest13ToHTTPRequestEv
// Demangled:            chatv2::Requests::SendInviteRequest::ToHTTPRequest(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12482e0 .. 0x1248847 (1383 bytes)
// Symbol:               _ZN6chatv28Requests17SendInviteRequest12CheckFailureEv
// Demangled:            chatv2::Requests::SendInviteRequest::CheckFailure(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12490f0 .. 0x124922a (314 bytes)
// Symbol:               _ZN6chatv28Requests23SendMessageArionRequest9GetClientEv
// Demangled:            chatv2::Requests::SendMessageArionRequest::GetClient(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1249230 .. 0x1249382 (338 bytes)
// Symbol:               _ZN6chatv28Requests23SendMessageArionRequest10CanExecuteEv
// Demangled:            chatv2::Requests::SendMessageArionRequest::CanExecute(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1249460 .. 0x124b067 (7175 bytes)
// Symbol:               _ZN6chatv28Requests23SendMessageArionRequest13ToHTTPRequestEv
// Demangled:            chatv2::Requests::SendMessageArionRequest::ToHTTPRequest(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x124c470 .. 0x124c53b (203 bytes)
// Symbol:               _ZN6chatv28Requests21SubscribeArionRequest9GetClientEv
// Demangled:            chatv2::Requests::SubscribeArionRequest::GetClient(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x124c6c0 .. 0x124d825 (4453 bytes)
// Symbol:               _ZN6chatv28Requests21SubscribeArionRequest13ToHTTPRequestEv
// Demangled:            chatv2::Requests::SubscribeArionRequest::ToHTTPRequest(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x124def0 .. 0x124e151 (609 bytes)
// Symbol:               _ZN6chatv29Responses20ArionResponseFactory23CreateSubscribeResponseERKSsS3_NS_4Core11ChannelTypeERN9rapidjson15GenericDocumentINS6_4UTF8IcEENS6_19MemoryPoolAllocatorINS6_12CrtAllocatorEEEEE
// Demangled:            chatv2::Responses::ArionResponseFactory::CreateSubscribeResponse(std::string const&,std::string const&,chatv2::Core::ChannelType,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x124e510 .. 0x125037d (7789 bytes)
// Symbol:               _ZN6chatv29Responses20ArionResponseFactory22CreateResponseFromHTTPEN5boost10shared_ptrINS_8Requests19IArionServerRequestEEENS3_INS_12Connectivity12HTTPResponseEEE
// Demangled:            chatv2::Responses::ArionResponseFactory::CreateResponseFromHTTP(boost::shared_ptr<chatv2::Requests::IArionServerRequest>,boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1254110 .. 0x1254572 (1122 bytes)
// Symbol:               _ZN6chatv29Responses18InviteUserResponse7ExecuteEv
// Demangled:            chatv2::Responses::InviteUserResponse::Execute(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1254bc0 .. 0x125510f (1359 bytes)
// Symbol:               _ZN6chatv29Responses20MessageArionResponse7ExecuteEv
// Demangled:            chatv2::Responses::MessageArionResponse::Execute(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1256b50 .. 0x1257176 (1574 bytes)
// Symbol:               _ZN6chatv29Responses21RoomInfoArionResponse7ExecuteEv
// Demangled:            chatv2::Responses::RoomInfoArionResponse::Execute(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1258870 .. 0x1258a8a (538 bytes)
// Symbol:               _ZN6chatv29Responses22SubscribeArionResponse7ExecuteEv
// Demangled:            chatv2::Responses::SubscribeArionResponse::Execute(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x125b0b0 .. 0x125b7e4 (1844 bytes)
// Symbol:               _ZN6chatv212Connectivity11HTTPRequest11FillContentERSs
// Demangled:            chatv2::Connectivity::HTTPRequest::FillContent(std::string &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x125b7f0 .. 0x125c4c4 (3284 bytes)
// Symbol:               _ZN6chatv212Connectivity11HTTPRequest15FillFullRequestERSsRKSs
// Demangled:            chatv2::Connectivity::HTTPRequest::FillFullRequest(std::string &,std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x125e330 .. 0x125e91d (1517 bytes)
// Symbol:               _ZN6chatv212Connectivity9TCPClient4StopEv
// Demangled:            chatv2::Connectivity::TCPClient::Stop(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x125ff00 .. 0x12600e5 (485 bytes)
// Symbol:               _ZN6chatv212Connectivity9TCPClient6DoReadEv
// Demangled:            chatv2::Connectivity::TCPClient::DoRead(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12600f0 .. 0x12603ba (714 bytes)
// Symbol:               _ZN6chatv212Connectivity9TCPClient7DoWriteERKSs
// Demangled:            chatv2::Connectivity::TCPClient::DoWrite(std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12603c0 .. 0x1260a94 (1748 bytes)
// Symbol:               _ZN6chatv212Connectivity9TCPClient9OnResolveERKN5boost6system10error_codeENS2_4asio2ip23basic_resolver_iteratorINS8_3tcpEEE
// Demangled:            chatv2::Connectivity::TCPClient::OnResolve(boost::system::error_code const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1260aa0 .. 0x1261230 (1936 bytes)
// Symbol:               _ZN6chatv212Connectivity9TCPClient18OnVerifyConnectionERKN5boost6system10error_codeENS2_4asio2ip23basic_resolver_iteratorINS8_3tcpEEE
// Demangled:            chatv2::Connectivity::TCPClient::OnVerifyConnection(boost::system::error_code const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1261230 .. 0x1261c02 (2514 bytes)
// Symbol:               _ZN6chatv212Connectivity9TCPClient9OnConnectERKN5boost6system10error_codeENS2_4asio2ip23basic_resolver_iteratorINS8_3tcpEEE
// Demangled:            chatv2::Connectivity::TCPClient::OnConnect(boost::system::error_code const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1266d40 .. 0x12670c9 (905 bytes)
// Symbol:               _ZN5boost4asio2ip23basic_resolver_iteratorINS1_3tcpEE6createEP8addrinfoRKSsS8_
// Demangled:            boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>::create(addrinfo *,std::string const&,std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x126a2e0 .. 0x126a3ab (203 bytes)
// Symbol:               _ZN6chatv28Requests17ReportUserRequest9GetClientEv
// Demangled:            chatv2::Requests::ReportUserRequest::GetClient(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x126ae80 .. 0x126cbb3 (7475 bytes)
// Symbol:               _ZN6chatv28Requests17ReportUserRequest13ToHTTPRequestEv
// Demangled:            chatv2::Requests::ReportUserRequest::ToHTTPRequest(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x126f0a0 .. 0x126f502 (1122 bytes)
// Symbol:               _ZN6chatv29Responses18ReportUserResponse7ExecuteEv
// Demangled:            chatv2::Responses::ReportUserResponse::Execute(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x126fc80 .. 0x1270401 (1921 bytes)
// Symbol:               _ZN6chatv28Requests21ChangeNicknameRequest7ExecuteEv
// Demangled:            chatv2::Requests::ChangeNicknameRequest::Execute(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1270410 .. 0x1270ca3 (2195 bytes)
// Symbol:               _ZN6chatv28Requests21ChangeNicknameRequest18SendFailureMessageEv
// Demangled:            chatv2::Requests::ChangeNicknameRequest::SendFailureMessage(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1271300 .. 0x12721a1 (3745 bytes)
// Symbol:               _ZN6chatv28Requests19IArionServerRequest18SendFailureMessageEv
// Demangled:            chatv2::Requests::IArionServerRequest::SendFailureMessage(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1272270 .. 0x12726ca (1114 bytes)
// Symbol:               _ZN6chatv28Requests19IArionServerRequest7ExecuteEv
// Demangled:            chatv2::Requests::IArionServerRequest::Execute(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1273650 .. 0x127372c (220 bytes)
// Symbol:               _ZN6chatv212Connectivity10HTTPClient18DirectWriteRequestEN5boost10shared_ptrINS0_11HTTPRequestEEE
// Demangled:            chatv2::Connectivity::HTTPClient::DirectWriteRequest(boost::shared_ptr<chatv2::Connectivity::HTTPRequest>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1274100 .. 0x127487c (1916 bytes)
// Symbol:               _ZN6chatv212Connectivity10HTTPClient6DoReadEv
// Demangled:            chatv2::Connectivity::HTTPClient::DoRead(void)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1274bf0 .. 0x1275117 (1319 bytes)
// Symbol:               _ZN6chatv212Connectivity10HTTPClient11OnReadEndedEN5boost10shared_ptrINS0_12HTTPResponseEEE
// Demangled:            chatv2::Connectivity::HTTPClient::OnReadEnded(boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1275120 .. 0x1275b65 (2629 bytes)
// Symbol:               _ZN6chatv212Connectivity10HTTPClient10SetContentEN5boost10shared_ptrINS0_12HTTPResponseEEE
// Demangled:            chatv2::Connectivity::HTTPClient::SetContent(boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1275d30 .. 0x1276522 (2034 bytes)
// Symbol:               _ZN6chatv212Connectivity10HTTPClient11ReadHeadersERKN5boost6system10error_codeEjNS2_10shared_ptrINS0_12HTTPResponseEEE
// Demangled:            chatv2::Connectivity::HTTPClient::ReadHeaders(boost::system::error_code const&,unsigned int,boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x12771d0 .. 0x1277228 (88 bytes)
// Symbol:               _ZN6chatv212Connectivity10HTTPClient14ReadStatusLineERKN5boost6system10error_codeEj
// Demangled:            chatv2::Connectivity::HTTPClient::ReadStatusLine(boost::system::error_code const&,unsigned int)
// ============================================================================

// ============================================================================
// Referencing Function: 0x127af10 .. 0x127b0a3 (403 bytes)
// Symbol:               _ZN6chatv212Connectivity12SimpleSocket12AsyncConnectEN5boost4asio2ip23basic_resolver_iteratorINS4_3tcpEEENS2_8functionIFvRKNS2_6system10error_codeEEEE
// Demangled:            chatv2::Connectivity::SimpleSocket::AsyncConnect(boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::function<void ()(boost::system::error_code const&)>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1282b40 .. 0x1282c71 (305 bytes)
// Symbol:               _ZN6chatv212Connectivity9SSLSocket12AsyncConnectEN5boost4asio2ip23basic_resolver_iteratorINS4_3tcpEEENS2_8functionIFvRKNS2_6system10error_codeEEEE
// Demangled:            chatv2::Connectivity::SSLSocket::AsyncConnect(boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::function<void ()(boost::system::error_code const&)>)
// ============================================================================

// ============================================================================
// Referencing Function: 0x197ad10 .. 0x197aeb2 (418 bytes)
// Symbol:               sub_197AD10
// Demangled:            sub_197AD10
// ============================================================================

// ============================================================================
// Referencing Function: 0x197aec0 .. 0x197b062 (418 bytes)
// Symbol:               sub_197AEC0
// Demangled:            sub_197AEC0
// ============================================================================

// ============================================================================
// Referencing Function: 0x197b070 .. 0x197b212 (418 bytes)
// Symbol:               sub_197B070
// Demangled:            sub_197B070
// ============================================================================
