#pragma once
// ============================================================================
// G4_UP8Shop/lib/ChatLibv2/decompiled/chatv2_Connectivity.h
// Library: ChatLibv2 | Module: chatv2_Connectivity
// Binary Address Span: 0x1259c60 .. 0x12858a0 (91 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1259c60] (328 bytes) chatv2::Connectivity::HTTPHeaderOptions::HTTPHeaderOptions(void)
// chatv2::Connectivity::HTTPHeaderOptions *chatv2::Connectivity::HTTPHeaderOptions::HTTPHeaderOptions( chatv2::Connectivity::HTTPHeaderOptions *this);
// [0x1259db0] (332 bytes) chatv2::Connectivity::HTTPHeaderOptions::HTTPHeaderOptions(chatv2::Connectivity::HTTPRequestTypeEnum,std::string,chatv2::Connectivity::HTTPConnectionTypeEnum)
// int chatv2::Connectivity::HTTPHeaderOptions::HTTPHeaderOptions(int a1, int a2, int a3, int a4);
// [0x1259f00] (246 bytes) chatv2::Connectivity::HTTPHeaderOptions::~HTTPHeaderOptions()
// void chatv2::Connectivity::HTTPHeaderOptions::~HTTPHeaderOptions(chatv2::Connectivity::HTTPHeaderOptions *this);
// [0x125a000] (15 bytes) chatv2::Connectivity::HTTPHeaderOptions::GetRequestType(void)
// int chatv2::Connectivity::HTTPHeaderOptions::GetRequestType(chatv2::Connectivity::HTTPHeaderOptions *this);
// [0x125a010] (14 bytes) chatv2::Connectivity::HTTPHeaderOptions::GetUserAgent(void)
// char *chatv2::Connectivity::HTTPHeaderOptions::GetUserAgent(chatv2::Connectivity::HTTPHeaderOptions *this);
// [0x125a020] (15 bytes) chatv2::Connectivity::HTTPHeaderOptions::GetConnectionType(void)
// int chatv2::Connectivity::HTTPHeaderOptions::GetConnectionType(chatv2::Connectivity::HTTPHeaderOptions *this);
// [0x125a030] (2702 bytes) chatv2::Connectivity::HTTPHeaderOptions::ToString(std::string const&,std::string const&,std::string const&)
// uint32_t *chatv2::Connectivity::HTTPHeaderOptions::ToString( uint32_t *a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5);
// [0x125aac0] (75 bytes) chatv2::Connectivity::HTTPParameter::HTTPParameter(std::string const&,std::string const&)
// int chatv2::Connectivity::HTTPParameter::HTTPParameter(int a1, int a2, int a3);
// [0x125ab10] (133 bytes) chatv2::Connectivity::HTTPParameter::~HTTPParameter()
// void chatv2::Connectivity::HTTPParameter::~HTTPParameter(chatv2::Connectivity::HTTPParameter *this);
// [0x125aba0] (11 bytes) chatv2::Connectivity::HTTPParameter::GetName(void)
// chatv2::Connectivity::HTTPParameter *chatv2::Connectivity::HTTPParameter::GetName( chatv2::Connectivity::HTTPParameter *this);
// [0x125abb0] (12 bytes) chatv2::Connectivity::HTTPParameter::GetValue(void)
// char *chatv2::Connectivity::HTTPParameter::GetValue(chatv2::Connectivity::HTTPParameter *this);
// [0x125abc0] (379 bytes) chatv2::Connectivity::HTTPRequest::HTTPRequest(std::string const&,boost::shared_ptr<chatv2::Connectivity::HTTPHeaderOptions>)
// int chatv2::Connectivity::HTTPRequest::HTTPRequest(int a1, int a2, uint32_t *a3);
// [0x125ad40] (522 bytes) chatv2::Connectivity::HTTPRequest::~HTTPRequest()
// void chatv2::Connectivity::HTTPRequest::~HTTPRequest(char **this);
// [0x125af50] (343 bytes) chatv2::Connectivity::HTTPRequest::OnHTTPResponseReceivedHandler(boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// int chatv2::Connectivity::HTTPRequest::OnHTTPResponseReceivedHandler(int a1, int *a2);
// [0x125b0b0] (1844 bytes) chatv2::Connectivity::HTTPRequest::FillContent(std::string &)
// int chatv2::Connectivity::HTTPRequest::FillContent(int a1, uint32_t *a2);
// [0x125b7f0] (3284 bytes) chatv2::Connectivity::HTTPRequest::FillFullRequest(std::string &,std::string const&)
// int chatv2::Connectivity::HTTPRequest::FillFullRequest(int a1, uint32_t *a2, uint32_t *a3);
// [0x125c4d0] (127 bytes) chatv2::Connectivity::HTTPRequest::AddHTTPParameter(boost::shared_ptr<chatv2::Connectivity::HTTPParameter>)
// int chatv2::Connectivity::HTTPRequest::AddHTTPParameter(int a1, uint32_t *a2);
// [0x125ca00] (185 bytes) chatv2::Connectivity::HTTPResponse::HTTPStatus::ToStatusEnum(int)
// char chatv2::Connectivity::HTTPResponse::HTTPStatus::ToStatusEnum( chatv2::Connectivity::HTTPResponse::HTTPStatus *this);
// [0x125cac0] (44 bytes) chatv2::Connectivity::HTTPResponse::HTTPResponse(void)
// struct chatv2::Connectivity::HTTPResponse *chatv2::Connectivity::HTTPResponse::HTTPResponse( chatv2::Connectivity::HTTPResponse *this);
// [0x125caf0] (134 bytes) chatv2::Connectivity::HTTPResponse::~HTTPResponse()
// void chatv2::Connectivity::HTTPResponse::~HTTPResponse(chatv2::Connectivity::HTTPResponse *this);
// [0x125cb80] (2774 bytes) chatv2::Connectivity::HTTPResponse::ToString(void)
// chatv2::Connectivity::HTTPResponse *chatv2::Connectivity::HTTPResponse::ToString( chatv2::Connectivity::HTTPResponse *this, uint32_t *a2);
// [0x125d660] (18 bytes) chatv2::Connectivity::HTTPResponse::IsOK(void)
// bool chatv2::Connectivity::HTTPResponse::IsOK(chatv2::Connectivity::HTTPResponse *this);
// [0x125d680] (13 bytes) chatv2::Connectivity::HTTPResponse::SetStatus(chatv2::Connectivity::HTTPStatusCode::HTTPStatusCodeEnum)
// uint32_t *chatv2::Connectivity::HTTPResponse::SetStatus(uint32_t *a1, int a2);
// [0x125d690] (45 bytes) chatv2::Connectivity::HTTPResponse::SetStatusMessage(std::string const&)
// int chatv2::Connectivity::HTTPResponse::SetStatusMessage(int a1, int a2);
// [0x125d6c0] (14 bytes) chatv2::Connectivity::HTTPResponse::SetContentLength(int)
// chatv2::Connectivity::HTTPResponse *chatv2::Connectivity::HTTPResponse::SetContentLength( chatv2::Connectivity::HTTPResponse *this, int a2);
// [0x125d6d0] (45 bytes) chatv2::Connectivity::HTTPResponse::SetContent(std::string const&)
// int chatv2::Connectivity::HTTPResponse::SetContent(int a1, int a2);
// [0x125d700] (11 bytes) chatv2::Connectivity::HTTPResponse::GetStatus(void)
// int chatv2::Connectivity::HTTPResponse::GetStatus(chatv2::Connectivity::HTTPResponse *this);
// [0x125d710] (12 bytes) chatv2::Connectivity::HTTPResponse::GetStatusMessage(void)
// char *chatv2::Connectivity::HTTPResponse::GetStatusMessage(chatv2::Connectivity::HTTPResponse *this);
// [0x125d720] (12 bytes) chatv2::Connectivity::HTTPResponse::GetContentLength(void)
// int chatv2::Connectivity::HTTPResponse::GetContentLength(chatv2::Connectivity::HTTPResponse *this);
// [0x125d730] (12 bytes) chatv2::Connectivity::HTTPResponse::GetContent(void)
// char *chatv2::Connectivity::HTTPResponse::GetContent(chatv2::Connectivity::HTTPResponse *this);
// [0x125d740] (45 bytes) chatv2::Connectivity::HTTPSClient::~HTTPSClient()
// void chatv2::Connectivity::HTTPSClient::~HTTPSClient(chatv2::Connectivity::HTTPSClient *this);
// [0x125d770] (56 bytes) chatv2::Connectivity::HTTPSClient::~HTTPSClient()
// void chatv2::Connectivity::HTTPSClient::~HTTPSClient(chatv2::Connectivity::HTTPSClient *this);
// [0x125d7b0] (92 bytes) chatv2::Connectivity::HTTPSClient::HTTPSClient(std::string const&,boost::asio::io_service &,boost::asio::ssl::context &,bool)
// int (**chatv2::Connectivity::HTTPSClient::HTTPSClient( uint32_t *a1, int a2, int a3, int a4, uint8_t a5))(chatv2::Connectivity::IClient *, int);
// [0x125dc40] (573 bytes) chatv2::Connectivity::IClient::~IClient()
// void chatv2::Connectivity::IClient::~IClient(chatv2::Connectivity::IClient *this);
// [0x125de80] (56 bytes) chatv2::Connectivity::IClient::~IClient()
// void chatv2::Connectivity::IClient::~IClient(chatv2::Connectivity::IClient *this);
// [0x125dec0] (12 bytes) chatv2::Connectivity::IClient::GetAddress(void)
// char *chatv2::Connectivity::IClient::GetAddress(chatv2::Connectivity::IClient *this);
// [0x125ded0] (12 bytes) chatv2::Connectivity::IClient::GetId(void)
// char *chatv2::Connectivity::IClient::GetId(chatv2::Connectivity::IClient *this);
// [0x125dee0] (12 bytes) chatv2::Connectivity::IClient::SetState(chatv2::Connectivity::ClientStateEnum)
// int32_t chatv2::Connectivity::IClient::SetState(int a1, int32_t a2);
// [0x125def0] (85 bytes) chatv2::Connectivity::IClient::OnStartupCompleted(void)
// int chatv2::Connectivity::IClient::OnStartupCompleted(chatv2::Connectivity::IClient *this);
// [0x125df50] (131 bytes) chatv2::Connectivity::IClient::IClient(std::string const&)
// int32_t chatv2::Connectivity::IClient::IClient(uint32_t *a1, int a2);
// [0x125dfe0] (10 bytes) chatv2::Connectivity::IClient::GetState(void)
// int chatv2::Connectivity::IClient::GetState(chatv2::Connectivity::IClient *this);
// [0x125dff0] (14 bytes) chatv2::Connectivity::IClient::IsStarted(void)
// bool chatv2::Connectivity::IClient::IsStarted(chatv2::Connectivity::IClient *this);
// [0x125e330] (1517 bytes) chatv2::Connectivity::TCPClient::Stop(void)
// int chatv2::Connectivity::TCPClient::Stop(chatv2::Connectivity::TCPClient *this);
// [0x125f670] (436 bytes) chatv2::Connectivity::TCPClient::~TCPClient()
// void chatv2::Connectivity::TCPClient::~TCPClient(chatv2::Connectivity::TCPClient *this);
// [0x125f830] (56 bytes) chatv2::Connectivity::TCPClient::~TCPClient()
// void chatv2::Connectivity::TCPClient::~TCPClient(chatv2::Connectivity::TCPClient *this);
// [0x125f870] (128 bytes) chatv2::Connectivity::TCPClient::OnWrite(boost::system::error_code const&,unsigned int)
// int chatv2::Connectivity::TCPClient::OnWrite( chatv2::Connectivity::TCPClient *this, const boost::system::error_code *a2);
// [0x125f8f0] (208 bytes) chatv2::Connectivity::TCPClient::ReadComplete(boost::system::error_code const&,unsigned int)
// bool chatv2::Connectivity::TCPClient::ReadComplete( char **this, const boost::system::error_code *a2, unsigned int a3);
// [0x125f9c0] (1343 bytes) chatv2::Connectivity::TCPClient::OnRead(boost::system::error_code const&,unsigned int)
// const boost::system::error_code *chatv2::Connectivity::TCPClient::OnRead( chatv2::Connectivity::TCPClient *this, const boost::system::error_code *a2, signed int a3);
// [0x125ff00] (485 bytes) chatv2::Connectivity::TCPClient::DoRead(void)
// int (*chatv2::Connectivity::TCPClient::DoRead( chatv2::Connectivity::TCPClient *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, unsigned int a20, int a21))(int *, int *, int);
// [0x12600f0] (714 bytes) chatv2::Connectivity::TCPClient::DoWrite(std::string const&)
// int (*chatv2::Connectivity::TCPClient::DoWrite( chatv2::Connectivity::IClient *a1, char **a2))(uint32_t *, uint32_t *, int);
// [0x12603c0] (1748 bytes) chatv2::Connectivity::TCPClient::OnResolve(boost::system::error_code const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>)
// 0x12603c0 chatv2::Connectivity::TCPClient::OnResolve(boost::system::error_code const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>)
// [0x1260aa0] (1936 bytes) chatv2::Connectivity::TCPClient::OnVerifyConnection(boost::system::error_code const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>)
// void chatv2::Connectivity::TCPClient::OnVerifyConnection(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x1261230] (2514 bytes) chatv2::Connectivity::TCPClient::OnConnect(boost::system::error_code const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>)
// 0x1261230 chatv2::Connectivity::TCPClient::OnConnect(boost::system::error_code const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>)
// [0x1261c10] (1039 bytes) chatv2::Connectivity::TCPClient::TCPClient(std::string const&,boost::asio::io_service &,boost::asio::ssl::context &)
// void chatv2::Connectivity::TCPClient::TCPClient( int a1, int a2, boost::asio::io_service *a3, uint32_t *a4, volatile int32_t *a5, int a6, int a7, int a8, volatile int32_t *a9, int a10, int a11, uint8_t *a12, volatile int32_t *a13);
// [0x1262020] (999 bytes) chatv2::Connectivity::TCPClient::TCPClient(std::string const&,boost::asio::io_service &)
// void chatv2::Connectivity::TCPClient::TCPClient( int a1, int a2, boost::asio::io_service *a3, int a4, volatile int32_t *a5, int a6, int a7, int a8, volatile int32_t *a9, int a10, int a11, chatv2::Connectivity::SimpleSocket *a12, volatile int32_t *a13);
// [0x1262410] (2645 bytes) chatv2::Connectivity::TCPClient::Start(std::string const&)
// void chatv2::Connectivity::TCPClient::Start(chatv2::Connectivity::IClient *a1, uint32_t *a2);
// [0x1273650] (220 bytes) chatv2::Connectivity::HTTPClient::DirectWriteRequest(boost::shared_ptr<chatv2::Connectivity::HTTPRequest>)
// char *chatv2::Connectivity::HTTPClient::DirectWriteRequest(chatv2::Connectivity::IClient *a1, int *a2);
// [0x1273d10] (279 bytes) chatv2::Connectivity::HTTPClient::~HTTPClient()
// void chatv2::Connectivity::HTTPClient::~HTTPClient(chatv2::Connectivity::HTTPClient *this);
// [0x1273e30] (56 bytes) chatv2::Connectivity::HTTPClient::~HTTPClient()
// void chatv2::Connectivity::HTTPClient::~HTTPClient(chatv2::Connectivity::HTTPClient *this);
// [0x1274100] (1916 bytes) chatv2::Connectivity::HTTPClient::DoRead(void)
// int (*chatv2::Connectivity::HTTPClient::DoRead( chatv2::Connectivity::HTTPClient *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, unsigned int a32, int a33))(int *, int *, int);
// [0x1274b00] (117 bytes) chatv2::Connectivity::HTTPClient::HTTPClient(std::string const&,boost::asio::io_service &,boost::asio::ssl::context &,bool)
// 0x1274b00 chatv2::Connectivity::HTTPClient::HTTPClient(std::string const&,boost::asio::io_service &,boost::asio::ssl::context &,bool)
// [0x1274b80] (109 bytes) chatv2::Connectivity::HTTPClient::HTTPClient(std::string const&,boost::asio::io_service &,bool)
// 0x1274b80 chatv2::Connectivity::HTTPClient::HTTPClient(std::string const&,boost::asio::io_service &,bool)
// [0x1274bf0] (1319 bytes) chatv2::Connectivity::HTTPClient::OnReadEnded(boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// void chatv2::Connectivity::HTTPClient::OnReadEnded(int a1, int *a2);
// [0x1275120] (2629 bytes) chatv2::Connectivity::HTTPClient::SetContent(boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// int chatv2::Connectivity::HTTPClient::SetContent(uint32_t *a1, int a2);
// [0x1275b70] (448 bytes) chatv2::Connectivity::HTTPClient::ReadContent(boost::system::error_code const&,unsigned int,boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// void chatv2::Connectivity::HTTPClient::ReadContent(uint32_t *a1, int a2, int a3, int *a4);
// [0x1275d30] (2034 bytes) chatv2::Connectivity::HTTPClient::ReadHeaders(boost::system::error_code const&,unsigned int,boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// 0x1275d30 chatv2::Connectivity::HTTPClient::ReadHeaders(boost::system::error_code const&,unsigned int,boost::shared_ptr<chatv2::Connectivity::HTTPResponse>)
// [0x12771d0] (88 bytes) chatv2::Connectivity::HTTPClient::ReadStatusLine(boost::system::error_code const&,unsigned int)
// void chatv2::Connectivity::HTTPClient::ReadStatusLine( int a1, int a2, int a3, chatv2::Connectivity::HTTPClient *this, const boost::system::error_code *a5);
// [0x1277230] (1076 bytes) chatv2::Connectivity::HTTPClient::ClearRequests(void)
// void chatv2::Connectivity::HTTPClient::ClearRequests(chatv2::Connectivity::HTTPClient *this);
// [0x1277670] (458 bytes) chatv2::Connectivity::HTTPClient::OnStartupCompleted(void)
// int chatv2::Connectivity::HTTPClient::OnStartupCompleted(chatv2::Connectivity::HTTPClient *this);
// [0x1277840] (916 bytes) chatv2::Connectivity::HTTPClient::DoWrite(boost::shared_ptr<chatv2::Connectivity::HTTPRequest>)
// void chatv2::Connectivity::HTTPClient::DoWrite(int **a1, int *a2);
// [0x127ab70] (93 bytes) chatv2::Connectivity::SimpleSocket::VerifyConnection(boost::function<void ()(boost::system::error_code const&)>)
// int chatv2::Connectivity::SimpleSocket::VerifyConnection(int a1, int *a2);
// [0x127abd0] (531 bytes) chatv2::Connectivity::SimpleSocket::Close(void)
// void chatv2::Connectivity::SimpleSocket::Close(chatv2::Connectivity::SimpleSocket *this);
// [0x127adf0] (285 bytes) chatv2::Connectivity::SimpleSocket::SimpleSocket(boost::asio::io_service &)
// chatv2::Connectivity::SimpleSocket *chatv2::Connectivity::SimpleSocket::SimpleSocket( chatv2::Connectivity::SimpleSocket *this, boost::asio::io_service *a2);
// [0x127af10] (403 bytes) chatv2::Connectivity::SimpleSocket::AsyncConnect(boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::function<void ()(boost::system::error_code const&)>)
// int chatv2::Connectivity::SimpleSocket::AsyncConnect(int a1, int a2, int a3);
// [0x127b0b0] (488 bytes) chatv2::Connectivity::SimpleSocket::AsyncWrite(std::vector<char,std::allocator<char>> &,boost::function<void ()(boost::system::error_code const&,unsigned int)>)
// int (*chatv2::Connectivity::SimpleSocket::AsyncWrite( int a1, int *a2, unsigned int *a3))(unsigned int *, unsigned int *, int);
// [0x127b2a0] (461 bytes) chatv2::Connectivity::SimpleSocket::AsyncReadUntil(boost::asio::basic_streambuf<std::allocator<char>> &,std::string const&,boost::function<void ()(boost::system::error_code const&,unsigned int)>)
// int (*chatv2::Connectivity::SimpleSocket::AsyncReadUntil( int a1, int a2, int a3, unsigned int *a4))(unsigned int *, unsigned int *, int);
// [0x127bde0] (1069 bytes) chatv2::Connectivity::SimpleSocket::AsyncRead(boost::asio::basic_streambuf<std::allocator<char>> &,boost::function<unsigned int ()(boost::system::error_code const&,unsigned int)>,boost::function<void ()(boost::system::error_code const&,unsigned int)>)
// 0x127bde0 chatv2::Connectivity::SimpleSocket::AsyncRead(boost::asio::basic_streambuf<std::allocator<char>> &,boost::function<unsigned int ()(boost::system::error_code const&,unsigned int)>,boost::function<void ()(boost::system::error_code const&,unsigned int)>)
// [0x127c230] (27 bytes) chatv2::Connectivity::ISocketBase::~ISocketBase()
// void chatv2::Connectivity::ISocketBase::~ISocketBase(chatv2::Connectivity::ISocketBase *this);
// [0x127c2b0] (45 bytes) chatv2::Connectivity::ISocketBase::~ISocketBase()
// void chatv2::Connectivity::ISocketBase::~ISocketBase(chatv2::Connectivity::ISocketBase *this);
// [0x127e000] (457 bytes) chatv2::Connectivity::SimpleSocket::~SimpleSocket()
// void chatv2::Connectivity::SimpleSocket::~SimpleSocket(chatv2::Connectivity::SimpleSocket *this);
// [0x127e1d0] (457 bytes) chatv2::Connectivity::SimpleSocket::~SimpleSocket()
// void chatv2::Connectivity::SimpleSocket::~SimpleSocket(chatv2::Connectivity::SimpleSocket *this);
// [0x12821b0] (438 bytes) chatv2::Connectivity::SSLSocket::Close(void)
// int chatv2::Connectivity::SSLSocket::Close(chatv2::Connectivity::SSLSocket *this);
// [0x1282370] (262 bytes) chatv2::Connectivity::SSLSocket::VerifyCertificate(bool,boost::asio::ssl::verify_context &)
// int chatv2::Connectivity::SSLSocket::VerifyCertificate(int a1, int a2, uint32_t *a3);
// [0x1282a10] (299 bytes) chatv2::Connectivity::SSLSocket::SSLSocket(boost::asio::io_service &,boost::asio::ssl::context &)
// int chatv2::Connectivity::SSLSocket::SSLSocket(uint32_t *a1, int a2, int a3);
// [0x1282b40] (305 bytes) chatv2::Connectivity::SSLSocket::AsyncConnect(boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::function<void ()(boost::system::error_code const&)>)
// int chatv2::Connectivity::SSLSocket::AsyncConnect(int a1, int a2, uint32_t *a3);
// [0x1282c80] (560 bytes) chatv2::Connectivity::SSLSocket::VerifyConnection(boost::function<void ()(boost::system::error_code const&)>)
// int chatv2::Connectivity::SSLSocket::VerifyConnection(int a1, uint32_t *a2);
// [0x1282eb0] (840 bytes) chatv2::Connectivity::SSLSocket::AsyncRead(boost::asio::basic_streambuf<std::allocator<char>> &,boost::function<unsigned int ()(boost::system::error_code const&,unsigned int)>,boost::function<void ()(boost::system::error_code const&,unsigned int)>)
// int (*chatv2::Connectivity::SSLSocket::AsyncRead( int a1, int a2, unsigned int *a3, boost::function<void ()(boost::system::error_code const&, unsigned int)> *a4))(unsigned int *, unsigned int *, int);
// [0x1283200] (240 bytes) chatv2::Connectivity::SSLSocket::AsyncReadUntil(boost::asio::basic_streambuf<std::allocator<char>> &,std::string const&,boost::function<void ()(boost::system::error_code const&,unsigned int)>)
// void chatv2::Connectivity::SSLSocket::AsyncReadUntil( int a1, int a2, int a3, const boost::function<void ()(boost::system::error_code const&, unsigned int)> *a4);
// [0x1283930] (207 bytes) chatv2::Connectivity::SSLSocket::AsyncWrite(std::vector<char,std::allocator<char>> &,boost::function<void ()(boost::system::error_code const&,unsigned int)>)
// void chatv2::Connectivity::SSLSocket::AsyncWrite( int a1, int *a2, boost::function<void ()(boost::system::error_code const&, unsigned int)> *a3);
// [0x1285650] (584 bytes) chatv2::Connectivity::SSLSocket::~SSLSocket()
// void chatv2::Connectivity::SSLSocket::~SSLSocket(int a1, int a2, void **this);
// [0x12858a0] (56 bytes) chatv2::Connectivity::SSLSocket::~SSLSocket()
// void chatv2::Connectivity::SSLSocket::~SSLSocket(int a1, int a2, void **this);
