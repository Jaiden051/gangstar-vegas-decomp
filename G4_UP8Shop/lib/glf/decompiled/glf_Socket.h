#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_Socket.h
// Library: glf | Module: glf_Socket
// Binary Address Span: 0xcce110 .. 0xccf170 (27 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xcce110] (9 bytes) glf::Socket::Init(void)
// int glf::Socket::Init();
// [0xcce120] (9 bytes) glf::Socket::Deinit(void)
// int glf::Socket::Deinit();
// [0xcce130] (119 bytes) glf::Socket::GetHostName(void)
// glf::Socket *glf::Socket::GetHostName(glf::Socket *this);
// [0xcce1b0] (68 bytes) glf::Socket::MakeAddr(char const*,int)
// glf::Socket *glf::Socket::MakeAddr(glf::Socket *this, char *cp, int16_t a3);
// [0xcce200] (38 bytes) glf::Socket::GetAddrIP(glf::AddrIp4 const&)
// char *glf::Socket::GetAddrIP(unsigned int *a1);
// [0xcce230] (299 bytes) glf::Socket::Socket(void)
// glf::Socket *glf::Socket::Socket(glf::Socket *this);
// [0xcce360] (120 bytes) glf::Socket::Close(void)
// int glf::Socket::Close(glf::Socket *this);
// [0xcce3e0] (136 bytes) glf::Socket::~Socket()
// void glf::Socket::~Socket(glf ***this);
// [0xcce470] (56 bytes) glf::Socket::~Socket()
// void glf::Socket::~Socket(glf ***this);
// [0xcce4b0] (12 bytes) glf::Socket::GetLastError(void)const
// int glf::Socket::GetLastError(glf::Socket *this);
// [0xcce4c0] (16 bytes) glf::Socket::ClearError(void)
// glf::Socket *glf::Socket::ClearError(glf::Socket *this);
// [0xcce4d0] (13 bytes) glf::Socket::IsOpened(void)const
// int glf::Socket::IsOpened(glf::Socket *this);
// [0xcce4e0] (511 bytes) glf::Socket::OpenTcp(glf::Socket::Option)
// bool glf::Socket::OpenTcp(int **a1, int a2);
// [0xcce6e0] (511 bytes) glf::Socket::OpenUdp(glf::Socket::Option)
// bool glf::Socket::OpenUdp(int **a1, int a2);
// [0xcce8e0] (498 bytes) glf::Socket::Open(glf::Socket::Type,glf::Socket::Proto,glf::Socket::Option)
// bool glf::Socket::Open(int **a1, int *a2, int *a3, int a4);
// [0xcceae0] (102 bytes) glf::Socket::Bind(glf::AddrIp4 const&)
// bool glf::Socket::Bind(int a1, int a2);
// [0xcceb50] (181 bytes) glf::Socket::Connect(glf::AddrIp4 const&)
// int glf::Socket::Connect(int a1, int a2);
// [0xccec10] (25 bytes) glf::Socket::IsConnected(void)const
// bool glf::Socket::IsConnected(glf::Socket *this);
// [0xccec30] (53 bytes) glf::Socket::Listen(int)
// bool glf::Socket::Listen(glf::Socket *this, int n);
// [0xccec70] (160 bytes) glf::Socket::Accept(glf::AddrIp4 &)
// int glf::Socket::Accept(int a1, int a2);
// [0xcced10] (102 bytes) glf::Socket::Reject(int)
// int glf::Socket::Reject(glf::Socket *this, int a2);
// [0xcced80] (157 bytes) glf::Socket::Send(void const*,int,int)
// ssize_t glf::Socket::Send(glf::Socket *this, void *buf, size_t n, int a4);
// [0xccee20] (160 bytes) glf::Socket::SendTo(glf::AddrIp4 const&,void const*,int)
// ssize_t glf::Socket::SendTo(int a1, int a2, void *buf, size_t n);
// [0xcceec0] (260 bytes) glf::Socket::IsReadable(int)const
// int glf::Socket::IsReadable(glf::Socket *this, int a2);
// [0xccefd0] (188 bytes) glf::Socket::Receive(void *,int,int)
// ssize_t glf::Socket::Receive(glf::Socket *this, void *buf, size_t n, int a4);
// [0xccf090] (220 bytes) glf::Socket::ReceiveFrom(glf::AddrIp4 &,void *,int)
// ssize_t glf::Socket::ReceiveFrom(int a1, int a2, void *buf, size_t n);
// [0xccf170] (144 bytes) glf::Socket::GetAddress(glf::AddrIp4 &)
// int glf::Socket::GetAddress(int a1, int a2);
