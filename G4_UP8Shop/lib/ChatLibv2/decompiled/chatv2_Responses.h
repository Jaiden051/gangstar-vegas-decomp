#pragma once
// ============================================================================
// G4_UP8Shop/lib/ChatLibv2/decompiled/chatv2_Responses.h
// Library: ChatLibv2 | Module: chatv2_Responses
// Binary Address Span: 0x1237490 .. 0x12734a0 (51 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1237490] (94 bytes) chatv2::Responses::ClientResponse::ClientResponse(chatv2::Responses::ResponseTypeEnum,std::string const&)
// struct chatv2::Core::ArionUser *chatv2::Responses::ClientResponse::ClientResponse(uint32_t *a1, int a2, int a3);
// [0x12374f0] (232 bytes) chatv2::Responses::ClientResponse::~ClientResponse()
// void chatv2::Responses::ClientResponse::~ClientResponse(chatv2::Responses::ClientResponse *this);
// [0x12375e0] (469 bytes) chatv2::Responses::ClientResponse::ToString(void)
// chatv2::Responses::ClientResponse *chatv2::Responses::ClientResponse::ToString( chatv2::Responses::ClientResponse *this, uint32_t *a2);
// [0x12377c0] (11 bytes) chatv2::Responses::ClientResponse::GetType(void)
// int chatv2::Responses::ClientResponse::GetType(chatv2::Responses::ClientResponse *this);
// [0x12377d0] (12 bytes) chatv2::Responses::ClientResponse::GetChannelName(void)
// char *chatv2::Responses::ClientResponse::GetChannelName(chatv2::Responses::ClientResponse *this);
// [0x12377e0] (45 bytes) chatv2::Responses::ClientResponse::SetMessage(std::string const&)
// int chatv2::Responses::ClientResponse::SetMessage(int a1, int a2);
// [0x1237810] (12 bytes) chatv2::Responses::ClientResponse::GetMessageID(void)
// char *chatv2::Responses::ClientResponse::GetMessageID(chatv2::Responses::ClientResponse *this);
// [0x1237820] (45 bytes) chatv2::Responses::ClientResponse::SetMessageID(std::string const&)
// int chatv2::Responses::ClientResponse::SetMessageID(int a1, int a2);
// [0x1237850] (12 bytes) chatv2::Responses::ClientResponse::GetMessageStr(void)
// char *chatv2::Responses::ClientResponse::GetMessageStr(chatv2::Responses::ClientResponse *this);
// [0x1237860] (45 bytes) chatv2::Responses::ClientResponse::SetTime(std::string const&)
// int chatv2::Responses::ClientResponse::SetTime(int a1, int a2);
// [0x1237890] (12 bytes) chatv2::Responses::ClientResponse::GetTime(void)
// char *chatv2::Responses::ClientResponse::GetTime(chatv2::Responses::ClientResponse *this);
// [0x12378a0] (12 bytes) chatv2::Responses::ClientResponse::GetUser(void)
// char *chatv2::Responses::ClientResponse::GetUser(chatv2::Responses::ClientResponse *this);
// [0x124dd30] (27 bytes) chatv2::Responses::ArionResponseFactory::~ArionResponseFactory()
// void chatv2::Responses::ArionResponseFactory::~ArionResponseFactory( chatv2::Responses::ArionResponseFactory *this);
// [0x124dd50] (9 bytes) chatv2::Responses::ArionResponseFactory::IsMessageComplete(char const*,unsigned int)
// int chatv2::Responses::ArionResponseFactory::IsMessageComplete();
// [0x124dd60] (9 bytes) chatv2::Responses::ArionResponseFactory::CreateResponse(std::string)
// void chatv2::Responses::ArionResponseFactory::CreateResponse();
// [0x124dd70] (56 bytes) chatv2::Responses::ArionResponseFactory::~ArionResponseFactory()
// void chatv2::Responses::ArionResponseFactory::~ArionResponseFactory( chatv2::Responses::ArionResponseFactory *this);
// [0x124deb0] (34 bytes) chatv2::Responses::ArionResponseFactory::ArionResponseFactory(void)
// chatv2::Responses::ArionResponseFactory *chatv2::Responses::ArionResponseFactory::ArionResponseFactory( chatv2::Responses::ArionResponseFactory *this);
// [0x124dee0] (14 bytes) chatv2::Responses::ArionResponseFactory::SetArionExecutor(chatv2::Core::ArionExecutor *)
// chatv2::Responses::ArionResponseFactory *chatv2::Responses::ArionResponseFactory::SetArionExecutor( chatv2::Responses::ArionResponseFactory *this, chatv2::Core::ArionExecutor *a2);
// [0x124def0] (609 bytes) chatv2::Responses::ArionResponseFactory::CreateSubscribeResponse(std::string const&,std::string const&,chatv2::Core::ChannelType,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// chatv2::Responses::SubscribeArionResponse **chatv2::Responses::ArionResponseFactory::CreateSubscribeResponse( chatv2::Responses::SubscribeArionResponse **a1, int a2, int a3, int a4, int a5, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a6);
// [0x124e510] (7789 bytes) chatv2::Responses::ArionResponseFactory::CreateResponseFromHTTP(boost::shared_ptr<chatv2::Requests::IArionServerRequest>,boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// void chatv2::Responses::ArionResponseFactory::CreateResponseFromHTTP( int a1, chatv2::Requests::IArionServerRequest **a2, chatv2::Connectivity::HTTPResponse **a3);
// [0x1250380] (27 bytes) chatv2::Responses::IResponseFactory::~IResponseFactory()
// void chatv2::Responses::IResponseFactory::~IResponseFactory(chatv2::Responses::IResponseFactory *this);
// [0x12506e0] (45 bytes) chatv2::Responses::IResponseFactory::~IResponseFactory()
// void chatv2::Responses::IResponseFactory::~IResponseFactory(chatv2::Responses::IResponseFactory *this);
// [0x12540a0] (45 bytes) chatv2::Responses::InviteUserResponse::~InviteUserResponse()
// void chatv2::Responses::InviteUserResponse::~InviteUserResponse(chatv2::Responses::InviteUserResponse *this);
// [0x12540d0] (56 bytes) chatv2::Responses::InviteUserResponse::~InviteUserResponse()
// void chatv2::Responses::InviteUserResponse::~InviteUserResponse(chatv2::Responses::InviteUserResponse *this);
// [0x1254110] (1122 bytes) chatv2::Responses::InviteUserResponse::Execute(void)
// int chatv2::Responses::InviteUserResponse::Execute(chatv2::Responses::InviteUserResponse *this);
// [0x1254580] (169 bytes) chatv2::Responses::InviteUserResponse::InviteUserResponse(chatv2::Core::ArionExecutor *,std::string const&,chatv2::Core::ChannelType)
// int chatv2::Responses::InviteUserResponse::InviteUserResponse(uint32_t *a1, int a2, int a3, int a4);
// [0x1254630] (9 bytes) chatv2::Responses::InviteUserResponse::Parse(rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// void chatv2::Responses::InviteUserResponse::Parse();
// [0x1254ab0] (204 bytes) chatv2::Responses::MessageArionResponse::~MessageArionResponse()
// void chatv2::Responses::MessageArionResponse::~MessageArionResponse( chatv2::Responses::MessageArionResponse *this);
// [0x1254b80] (56 bytes) chatv2::Responses::MessageArionResponse::~MessageArionResponse()
// void chatv2::Responses::MessageArionResponse::~MessageArionResponse( chatv2::Responses::MessageArionResponse *this);
// [0x1254bc0] (1359 bytes) chatv2::Responses::MessageArionResponse::Execute(void)
// int chatv2::Responses::MessageArionResponse::Execute(chatv2::Responses::MessageArionResponse *this);
// [0x1255110] (194 bytes) chatv2::Responses::MessageArionResponse::MessageArionResponse(chatv2::Core::ArionExecutor *,std::string const&,chatv2::Core::ChannelType)
// struct chatv2::Core::ArionUser *chatv2::Responses::MessageArionResponse::MessageArionResponse( uint32_t *a1, int a2, int a3, int a4);
// [0x12551e0] (5140 bytes) chatv2::Responses::MessageArionResponse::Parse(rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// int chatv2::Responses::MessageArionResponse::Parse( chatv2::Responses::MessageArionResponse *this, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2);
// [0x1256a70] (153 bytes) chatv2::Responses::RoomInfoArionResponse::~RoomInfoArionResponse()
// void chatv2::Responses::RoomInfoArionResponse::~RoomInfoArionResponse( chatv2::Responses::RoomInfoArionResponse *this);
// [0x1256b10] (56 bytes) chatv2::Responses::RoomInfoArionResponse::~RoomInfoArionResponse()
// void chatv2::Responses::RoomInfoArionResponse::~RoomInfoArionResponse( chatv2::Responses::RoomInfoArionResponse *this);
// [0x1256b50] (1574 bytes) chatv2::Responses::RoomInfoArionResponse::Execute(void)
// int chatv2::Responses::RoomInfoArionResponse::Execute(chatv2::Responses::RoomInfoArionResponse *this);
// [0x1257180] (201 bytes) chatv2::Responses::RoomInfoArionResponse::RoomInfoArionResponse(chatv2::Core::ArionExecutor *,std::string const&,chatv2::Core::ChannelType)
// uint32_t *chatv2::Responses::RoomInfoArionResponse::RoomInfoArionResponse(uint32_t *a1, int a2, int a3, int a4);
// [0x1257250] (3221 bytes) chatv2::Responses::RoomInfoArionResponse::Parse(rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// int chatv2::Responses::RoomInfoArionResponse::Parse( chatv2::Responses::RoomInfoArionResponse *this, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2);
// [0x1258760] (193 bytes) chatv2::Responses::SubscribeArionResponse::~SubscribeArionResponse()
// void chatv2::Responses::SubscribeArionResponse::~SubscribeArionResponse( chatv2::Responses::SubscribeArionResponse *this);
// [0x1258830] (56 bytes) chatv2::Responses::SubscribeArionResponse::~SubscribeArionResponse()
// void chatv2::Responses::SubscribeArionResponse::~SubscribeArionResponse( chatv2::Responses::SubscribeArionResponse *this);
// [0x1258870] (538 bytes) chatv2::Responses::SubscribeArionResponse::Execute(void)
// int chatv2::Responses::SubscribeArionResponse::Execute(chatv2::Responses::SubscribeArionResponse *this);
// [0x1258a90] (199 bytes) chatv2::Responses::SubscribeArionResponse::SubscribeArionResponse(chatv2::Core::ArionExecutor *,std::string const&,std::string const&,chatv2::Core::ChannelType)
// int chatv2::Responses::SubscribeArionResponse::SubscribeArionResponse( uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x1258b60] (2075 bytes) chatv2::Responses::SubscribeArionResponse::Parse(rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// int chatv2::Responses::SubscribeArionResponse::Parse( chatv2::Responses::SubscribeArionResponse *this, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2);
// [0x126f030] (45 bytes) chatv2::Responses::ReportUserResponse::~ReportUserResponse()
// void chatv2::Responses::ReportUserResponse::~ReportUserResponse(chatv2::Responses::ReportUserResponse *this);
// [0x126f060] (56 bytes) chatv2::Responses::ReportUserResponse::~ReportUserResponse()
// void chatv2::Responses::ReportUserResponse::~ReportUserResponse(chatv2::Responses::ReportUserResponse *this);
// [0x126f0a0] (1122 bytes) chatv2::Responses::ReportUserResponse::Execute(void)
// int chatv2::Responses::ReportUserResponse::Execute(chatv2::Responses::ReportUserResponse *this);
// [0x126f510] (241 bytes) chatv2::Responses::ReportUserResponse::ReportUserResponse(chatv2::Core::ArionExecutor *)
// chatv2::Responses::ReportUserResponse *chatv2::Responses::ReportUserResponse::ReportUserResponse( chatv2::Responses::ReportUserResponse *this, chatv2::Core::ArionExecutor *a2);
// [0x126f610] (9 bytes) chatv2::Responses::ReportUserResponse::Parse(rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// void chatv2::Responses::ReportUserResponse::Parse();
// [0x12733b0] (9 bytes) chatv2::Responses::IServerResponse::Execute(void)
// void chatv2::Responses::IServerResponse::Execute();
// [0x12733c0] (145 bytes) chatv2::Responses::IServerResponse::~IServerResponse()
// void chatv2::Responses::IServerResponse::~IServerResponse(chatv2::Responses::IServerResponse *this);
// [0x1273460] (56 bytes) chatv2::Responses::IServerResponse::~IServerResponse()
// void chatv2::Responses::IServerResponse::~IServerResponse(chatv2::Responses::IServerResponse *this);
// [0x12734a0] (96 bytes) chatv2::Responses::IServerResponse::IServerResponse(std::string const&,chatv2::Core::ChannelType,std::string const&)
// int chatv2::Responses::IServerResponse::IServerResponse(uint32_t *a1, int a2, int a3, int a4);
