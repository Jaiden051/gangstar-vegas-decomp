#pragma once
// ============================================================================
// G4_UP8Shop/lib/Glotv3/decompiled/glotv3_AsyncHTTPClient.h
// Library: Glotv3 | Module: glotv3_AsyncHTTPClient
// Binary Address Span: 0x1368680 .. 0x1375130 (18 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1368680] (294 bytes) glotv3::AsyncHTTPClient::HandleDelaySending(std::string const&)
// int glotv3::AsyncHTTPClient::HandleDelaySending(int a1, uint32_t *a2);
// [0x13687b0] (12 bytes) glotv3::AsyncHTTPClient::GetStatus(void)const
// int glotv3::AsyncHTTPClient::GetStatus(glotv3::AsyncHTTPClient *this);
// [0x13687c0] (1203 bytes) glotv3::AsyncHTTPClient::HandleBackup(std::string const&,std::string const&,std::string const&)
// int glotv3::AsyncHTTPClient::HandleBackup(int *a1, int8_t **a2, int a3, int a4);
// [0x1368c80] (1976 bytes) glotv3::AsyncHTTPClient::HandleRefusedRequest(unsigned int)
// int glotv3::AsyncHTTPClient::HandleRefusedRequest(int8_t **this, unsigned int a2);
// [0x1369750] (241 bytes) glotv3::AsyncHTTPClient::HandleStop(void)
// int glotv3::AsyncHTTPClient::HandleStop(int a1, int a2, glotv3::AsyncHTTPClient *this);
// [0x1369850] (1005 bytes) glotv3::AsyncHTTPClient::HandleCheck(void)
// int glotv3::AsyncHTTPClient::HandleCheck(glotv3::AsyncHTTPClient *this);
// [0x1369fb0] (500 bytes) glotv3::AsyncHTTPClient::AsyncRequest(std::string const&,std::string const&,std::string const&)
// int glotv3::AsyncHTTPClient::AsyncRequest(int a1, int8_t **a2, int a3, int a4);
// [0x136a650] (937 bytes) glotv3::AsyncHTTPClient::AsyncHTTPClient(glotv3::TrackingManager &)
// glotv3::AsyncHTTPClient *glotv3::AsyncHTTPClient::AsyncHTTPClient( glotv3::AsyncHTTPClient *this, glotv3::TrackingManager *a2);
// [0x136d4d0] (2327 bytes) glotv3::AsyncHTTPClient::HandlePushbackOnQueue(void)
// void glotv3::AsyncHTTPClient::HandlePushbackOnQueue(glotv3::AsyncHTTPClient *this);
// [0x136ddf0] (1381 bytes) glotv3::AsyncHTTPClient::HandleResolve(boost::system::error_code const&,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>)
// void glotv3::AsyncHTTPClient::HandleResolve(int a1, int *a2, uint32_t *a3);
// [0x136e360] (509 bytes) glotv3::AsyncHTTPClient::~AsyncHTTPClient()
// void glotv3::AsyncHTTPClient::~AsyncHTTPClient(int a1, int a2, glotv3::AsyncHTTPClient *this);
// [0x136e560] (1099 bytes) glotv3::AsyncHTTPClient::HandleReadContent(boost::system::error_code const&)
// int32_t glotv3::AsyncHTTPClient::HandleReadContent( int a1, int a2, glotv3::AsyncHTTPClient *this, const boost::system::error_code *a4);
// [0x136e9b0] (2820 bytes) glotv3::AsyncHTTPClient::HandleReadStatusLine(boost::system::error_code const&)
// int32_t glotv3::AsyncHTTPClient::HandleReadStatusLine( glotv3::AsyncHTTPClient *this, const boost::system::error_code *a2);
// [0x136f4c0] (939 bytes) glotv3::AsyncHTTPClient::HandleWriteRequest(boost::system::error_code const&)
// int glotv3::AsyncHTTPClient::HandleWriteRequest( glotv3::AsyncHTTPClient *this, const boost::system::error_code *a2);
// [0x1370e30] (164 bytes) glotv3::AsyncHTTPClient::HandleNotificationOfSpy(unsigned int,int)
// void glotv3::AsyncHTTPClient::HandleNotificationOfSpy(glotv3::AsyncHTTPClient *this, unsigned int a2, int a3);
// [0x1370ee0] (2454 bytes) glotv3::AsyncHTTPClient::HandleConnect(boost::system::error_code const&)
// int glotv3::AsyncHTTPClient::HandleConnect( int a1, int a2, glotv3::AsyncHTTPClient *this, const boost::system::error_code *a4);
// [0x1371880] (4295 bytes) glotv3::AsyncHTTPClient::HandleStatusCode(unsigned int)
// int32_t glotv3::AsyncHTTPClient::HandleStatusCode(glotv3::AsyncHTTPClient *this, unsigned int a2);
// [0x1375130] (707 bytes) glotv3::AsyncHTTPClient::HandleReadHeaders(boost::system::error_code const&)
// int glotv3::AsyncHTTPClient::HandleReadHeaders( int a1, glotv3::AsyncHTTPClient *this, const boost::system::error_code *a3);
