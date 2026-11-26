#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_FileStreamImpl.h
// Library: glf | Module: glf_FileStreamImpl
// Binary Address Span: 0xcb72f0 .. 0xcba050 (37 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xcb72f0] (12 bytes) glf::FileStreamImpl::CanSeek(void)const
// int glf::FileStreamImpl::CanSeek();
// [0xcb7300] (13 bytes) glf::FileStreamImpl::CanRead(void)const
// int glf::FileStreamImpl::CanRead(glf::FileStreamImpl *this);
// [0xcb7310] (14 bytes) glf::FileStreamImpl::CanWrite(void)const
// bool glf::FileStreamImpl::CanWrite(glf::FileStreamImpl *this);
// [0xcb7320] (24 bytes) glf::FileStreamImpl::Tell(void)const
// int glf::FileStreamImpl::Tell(glf::FileStreamImpl *this);
// [0xcb7340] (48 bytes) glf::FileStreamImpl::ReadWithOffset(void *,unsigned int,unsigned int)
// int glf::FileStreamImpl::ReadWithOffset(glf::FileStreamImpl *this, void *a2, unsigned int a3, unsigned int a4);
// [0xcb7370] (129 bytes) glf::FileStreamImpl::Peek(void *,unsigned int)
// int glf::FileStreamImpl::Peek(glf::FileStreamImpl *this, void *a2, unsigned int a3);
// [0xcb7400] (129 bytes) glf::FileStreamImpl::Write(void const*,unsigned int)
// int glf::FileStreamImpl::Write(glf::FileStreamImpl *this, const void *a2, unsigned int a3);
// [0xcb7490] (66 bytes) glf::FileStreamImpl::GetSize(void)const
// int glf::FileStreamImpl::GetSize(glf::FileStreamImpl *this);
// [0xcb74e0] (135 bytes) glf::FileStreamImpl::Seek(int,glf::ios::seek)
// int glf::FileStreamImpl::Seek(int a1, int a2, int a3);
// [0xcb7570] (648 bytes) glf::FileStreamImpl::Read(void *,unsigned int)
// int glf::FileStreamImpl::Read(glf::FileStreamImpl *this, int a2, unsigned int a3);
// [0xcb7800] (821 bytes) glf::FileStreamImpl::ReadASync(void *,unsigned int,unsigned int,void (*)(int,glf::Stream &,void *),void *)
// int glf::FileStreamImpl::ReadASync( glf::FileStreamImpl *this, void *a2, unsigned int a3, unsigned int a4, void (*a5)(int, glf::Stream *, void *), void *a6);
// [0xcb7cc0] (9 bytes) glf::FileStreamImpl::DispatchDoneReads(void)
// void glf::FileStreamImpl::DispatchDoneReads();
// [0xcb7cd0] (176 bytes) glf::FileStreamImpl::FileStreamImpl(void)
// glf::FileStreamImpl *glf::FileStreamImpl::FileStreamImpl(glf::FileStreamImpl *this);
// [0xcb7d80] (355 bytes) glf::FileStreamImpl::CheckCrc(char const*)
// int glf::FileStreamImpl::CheckCrc(glf::FileStreamImpl *this, glf::CrcChecker *a2);
// [0xcb7ef0] (825 bytes) glf::FileStreamImpl::_Open(char const*,glf::ios::openflag,bool)
// int glf::FileStreamImpl::_Open(int a1, int a2, char *a3);
// [0xcb8230] (481 bytes) glf::FileStreamImpl::Open(char const*,glf::ios::openflag)
// int glf::FileStreamImpl::Open(int a1, char *a2, char *a3);
// [0xcb8420] (196 bytes) glf::FileStreamImpl::FileStreamImpl(char const*,glf::ios::openflag)
// int glf::FileStreamImpl::FileStreamImpl(glf::IOStream *a1, char *a2, char *a3);
// [0xcb84f0] (74 bytes) glf::FileStreamImpl::IsEof(void)const
// bool glf::FileStreamImpl::IsEof(glf::FileStreamImpl *this);
// [0xcb8540] (13 bytes) glf::FileStreamImpl::IsMemoryCached(void)const
// int glf::FileStreamImpl::IsMemoryCached(glf::FileStreamImpl *this);
// [0xcb8550] (1502 bytes) glf::FileStreamImpl::CancelAsync(void (*)(int,glf::Stream &,void *),void *)
// int glf::FileStreamImpl::CancelAsync( glf::FileStreamImpl *this, void (*a2)(int, glf::Stream *, void *), void *a3);
// [0xcb8b30] (60 bytes) glf::FileStreamImpl::WaitASync(unsigned int)const
// int glf::FileStreamImpl::WaitASync(glf::FileStreamImpl *this, glf::FileStreamImpl *a2);
// [0xcb8b70] (71 bytes) glf::FileStreamImpl::Close(void)
// int glf::FileStreamImpl::Close(glf::FileStreamImpl *this);
// [0xcb8bc0] (125 bytes) glf::FileStreamImpl::~FileStreamImpl()
// void glf::FileStreamImpl::~FileStreamImpl(glf::FileStreamImpl *this);
// [0xcb8c40] (56 bytes) glf::FileStreamImpl::~FileStreamImpl()
// void glf::FileStreamImpl::~FileStreamImpl(glf::FileStreamImpl *this);
// [0xcb8c80] (82 bytes) glf::FileStreamImpl::CopyPath(char *,unsigned int)const
// int glf::FileStreamImpl::CopyPath(char **this, glf *a2, char *a3);
// [0xcb8ce0] (22 bytes) glf::FileStreamImpl::GetPath(glf::ios::openflag &)const
// int glf::FileStreamImpl::GetPath(int a1, int *a2);
// [0xcb8d00] (12 bytes) glf::FileStreamImpl::GetFilename(void)const
// int glf::FileStreamImpl::GetFilename(glf::FileStreamImpl *this);
// [0xcb9420] (137 bytes) glf::FileStreamImpl::Impl::Tell(void)const
// int glf::FileStreamImpl::Impl::Tell(glf::FileStreamImpl::Impl *this);
// [0xcb94b0] (30 bytes) glf::FileStreamImpl::Impl::GetSize(void)const
// int glf::FileStreamImpl::Impl::GetSize(glf::FileStreamImpl::Impl *this);
// [0xcb9550] (139 bytes) glf::FileStreamImpl::Impl::Write(void const*,unsigned int)
// size_t glf::FileStreamImpl::Impl::Write(glf::FileStreamImpl::Impl *this, const void *ptr, size_t n);
// [0xcb95e0] (305 bytes) glf::FileStreamImpl::Impl::Seek(int,glf::ios::seek)
// char glf::FileStreamImpl::Impl::Seek(int a1, int off, int whence);
// [0xcb9720] (160 bytes) glf::FileStreamImpl::Impl::Close(void)
// int glf::FileStreamImpl::Impl::Close(glf::FileStreamImpl::Impl *this);
// [0xcb97c0] (256 bytes) glf::FileStreamImpl::Impl::Read(void *,unsigned int)
// size_t glf::FileStreamImpl::Impl::Read(glf::FileStreamImpl::Impl *this, void *ptr, size_t a3);
// [0xcb98c0] (328 bytes) glf::FileStreamImpl::Impl::ReadWithOffset(void *,unsigned int,unsigned int)
// int glf::FileStreamImpl::Impl::ReadWithOffset( glf::FileStreamImpl::Impl *this, void *a2, unsigned int a3, unsigned int a4);
// [0xcb9a10] (218 bytes) glf::FileStreamImpl::Impl::~Impl()
// void glf::FileStreamImpl::Impl::~Impl(glf::FileStreamImpl **this);
// [0xcb9af0] (1370 bytes) glf::FileStreamImpl::Impl::Open(char const*,glf::ios::openflag)
// int glf::FileStreamImpl::Impl::Open(int a1, char *a2, int16_t a3);
// [0xcba050] (210 bytes) glf::FileStreamImpl::Impl::~Impl()
// void glf::FileStreamImpl::Impl::~Impl(glf::FileStreamImpl **this);
