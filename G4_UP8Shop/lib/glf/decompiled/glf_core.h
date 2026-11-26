#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_core.h
// Library: glf | Module: glf_core
// Binary Address Span: 0xc6c4a0 .. 0xcce0e0 (201 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xc6c4a0] (59 bytes) glf::Alloc(unsigned int)
// void *glf::Alloc(size_t this);
// [0xc6c4e0] (59 bytes) glf::Free(void *)
// void glf::Free(glf *this);
// [0xc6c520] (36 bytes) glf::SetAllocationFunctions(void * (*)(unsigned int),void (*)(void *))
// void (**glf::SetAllocationFunctions(glf *this, void *(*a2)(unsigned int)))(uint32_t);
// [0xc6c5b0] (73 bytes) glf::BeginProfilerEvent(char const*)
// int glf::BeginProfilerEvent(glf *this);
// [0xc6c600] (65 bytes) glf::EndProfilerEvent(void)
// int glf::EndProfilerEvent();
// [0xc6c650] (32 bytes) glf::GetInputMgr(void)
// int glf::GetInputMgr();
// [0xc6c670] (32 bytes) glf::GetEventMgr(void)
// int glf::GetEventMgr();
// [0xc6c8e0] (45 bytes) glf::AndroidOnExitThread(void *)
// int glf::AndroidOnExitThread();
// [0xc6c910] (128 bytes) glf::AndroidOnStartThread(void *)
// int glf::AndroidOnStartThread();
// [0xc6c990] (45 bytes) glf::hashstring(char const*)
// int glf::hashstring(glf *this);
// [0xc6d490] (22 bytes) glf::AndroidGetJavaVM(void)
// int glf::AndroidGetJavaVM();
// [0xc6d4b0] (55 bytes) glf::AndroidSetupPaths(void)
// int glf::AndroidSetupPaths();
// [0xc6d4f0] (55 bytes) glf::AndroidCreateView(void)
// int glf::AndroidCreateView();
// [0xc6d530] (95 bytes) glf::AndroidSetViewSettings(int,int,int,int,int)
// int glf::AndroidSetViewSettings(glf *this, int a2, int a3, int a4, int a5);
// [0xc6d590] (68 bytes) glf::AndroidSetCurrentContext(int)
// bool glf::AndroidSetCurrentContext(glf *this);
// [0xc6d5e0] (96 bytes) glf::AndroidEnableAccelerometer(bool,float)
// int glf::AndroidEnableAccelerometer(glf *this, float a2);
// [0xc6d9f0] (41 bytes) glf::AndroidInit(void)
// int glf::AndroidInit();
// [0xc6dc80] (86 bytes) glf::AndroidStateChanged(bool)
// int glf::AndroidStateChanged(glf *this);
// [0xc6dd10] (134 bytes) glf::AndroidResizeScreen(int,int)
// int glf::AndroidResizeScreen(glf *this, int a2);
// [0xc6ddd0] (42 bytes) glf::AndroidUpdate(void)
// int glf::AndroidUpdate();
// [0xc6de20] (85 bytes) glf::AndroidOnKeyUp(int)
// int glf::AndroidOnKeyUp(glf *this);
// [0xc6de80] (85 bytes) glf::AndroidOnKeyDown(int)
// int glf::AndroidOnKeyDown(glf *this);
// [0xc6dee0] (146 bytes) glf::AndroidOrientationChanged(int)
// char glf::AndroidOrientationChanged(glf *this);
// [0xc6dfb0] (33 bytes) glf::AndroidSetNumExtraContext(int)
// int glf::AndroidSetNumExtraContext(glf *this);
// [0xc6e670] (348 bytes) glf::AndroidAddTouchEvent(int,int,int,int)
// int glf::AndroidAddTouchEvent(glf *this, int a2, int a3, int a4);
// [0xc6ede0] (288 bytes) glf::UpdateKeyboard(bool)
// uint8_t *glf::UpdateKeyboard(glf *this);
// [0xc6ef10] (298 bytes) glf::AndroidSetPaths(char const*,char const*,char const*)
// void glf::AndroidSetPaths(glf *this, char *a2, char *a3);
// [0xc6f7c0] (22 bytes) glf::GetGlobals(void)
// int glf::GetGlobals();
// [0xc714e0] (233 bytes) glf::InitGlobals(int,char **)
// void glf::InitGlobals(glf *this, int a2);
// [0xc715d0] (42 bytes) glf::init(int,char **)
// void glf::init(glf *this, int a2);
// [0xc71600] (42 bytes) glf::Init(void)
// void glf::Init();
// [0xc71630] (460 bytes) glf::AndroidGetViewSettings(void)
// int glf::AndroidGetViewSettings();
// [0xc718c0] (62 bytes) glf::Deinit(void)
// int glf::Deinit();
// [0xc71900] (67 bytes) glf::AndroidDestroy(void)
// int glf::AndroidDestroy();
// [0xc71970] (9 bytes) glf::ExitProcess(int)
// void glf::ExitProcess();
// [0xc71980] (9 bytes) glf::MyNsLog(char const*)
// void glf::MyNsLog();
// [0xc71990] (312 bytes) glf::AndroidGetResource(char const*,std::vector<char,std::allocator<char>> &)
// int glf::AndroidGetResource(glf *this, const char *a2);
// [0xc72370] (31 bytes) glf::SetAssertLevelBehavior(glf::AssertLevel,int)
// uint32_t *glf::SetAssertLevelBehavior(int a1, int a2);
// [0xc72390] (31 bytes) glf::AddAssertLevelBehavior(glf::AssertLevel,glf::GlobalAssertBehavior)
// uint32_t *glf::AddAssertLevelBehavior(int a1, int a2);
// [0xc723b0] (33 bytes) glf::RemoveAssertLevelBehavior(glf::AssertLevel,glf::GlobalAssertBehavior)
// int glf::RemoveAssertLevelBehavior(int a1, int a2);
// [0xc723e0] (25 bytes) glf::GetAssertLevelBehavior(glf::AssertLevel)
// int glf::GetAssertLevelBehavior(int a1);
// [0xc72400] (67 bytes) glf::EnableAssertLevel(glf::AssertLevel,bool)
// uint32_t *glf::EnableAssertLevel(int a1, char a2);
// [0xc72450] (37 bytes) glf::IsAssertLevelEnabled(glf::AssertLevel)
// int glf::IsAssertLevelEnabled(int a1);
// [0xc72480] (123 bytes) glf::AssertLog(glf::AssertLevel,char const*,...)
// int glf::AssertLog(int a1, char *a2, ...);
// [0xc72500] (9 bytes) glf::GlobalAssertDeprecateMessage(void)
// void glf::GlobalAssertDeprecateMessage();
// [0xc72510] (39 bytes) glf::SetGlobalAssertBehavior(int)
// uint32_t *glf::SetGlobalAssertBehavior(glf *this);
// [0xc72540] (35 bytes) glf::GetGlobalAssertBehavior(void)
// int glf::GetGlobalAssertBehavior();
// [0xc72570] (38 bytes) glf::SetIsAssertEnabled(bool)
// uint32_t *glf::SetIsAssertEnabled();
// [0xc725a0] (30 bytes) glf::IsAssertEnabled(void)
// int glf::IsAssertEnabled();
// [0xc725c0] (472 bytes) glf::VAssert(glf::AssertLevel,char const*,int,char const*,char *)
// int glf::VAssert(int a1, int a2, int a3, char *format, __gnuc_va_list __varargs);
// [0xc727a0] (66 bytes) glf::Assert(glf::AssertLevel,char const*,int,char const*,...)
// int glf::Assert(int a1, int a2, int a3, char *format, ...);
// [0xc727f0] (66 bytes) glf::Assert(char const*,int,char const*,...)
// int glf::Assert(glf *this, const char *a2, char *format, const char *__varargs, ...);
// [0xc73480] (1405 bytes) glf::ReadFileFully(char const*,glf::ios::openflag,std::iostream &)
// int glf::ReadFileFully( char *a1, int a2, int a3, int a4, int a5, int a6, char a7, char a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, void (**a16)(glf::basic_fstream<char, std::char_traits<char>> *__hidden this), int a17, void (**a18)(glf::basic_fstream<char, std::char_traits<char>> *__hidden this), void (**a19)(glf::basic_filebuf<char, std::char_traits<char>> *__hidden this), int a20, int a21, int a22, int a23, int a24, int a25, int a26);
// [0xc73a00] (1229 bytes) glf::WriteFully(char const*,glf::ios::openflag,std::string &)
// int glf::WriteFully(char *a1, int a2, const void **a3);
// [0xc73ed0] (71 bytes) glf::GetFlagName(unsigned short)
// const char *glf::GetFlagName(glf *this);
// [0xc73f20] (290 bytes) glf::GetEventIdFromName(char const*)
// int glf::GetEventIdFromName(glf *this);
// [0xc74050] (97 bytes) glf::GetEventName(int)
// const char *glf::GetEventName(glf *this);
// [0xc7cea0] (9 bytes) glf::GetPhysicalMemoryInfo(unsigned long long &,unsigned long long &)
// void glf::GetPhysicalMemoryInfo();
// [0xc7ceb0] (9 bytes) glf::GetTaskMemoryInfo(unsigned long long &,unsigned long long &)
// void glf::GetTaskMemoryInfo();
// [0xc7ced0] (9 bytes) glf::GetDiskInfo(unsigned long long &,unsigned long long &)
// void glf::GetDiskInfo();
// [0xc7d5b0] (374 bytes) glf::operator<<(std::ostream &,glf::PropertyMap::Value const&)
// int glf::operator<<(int a1, int a2);
// [0xc7d730] (91 bytes) glf::GetRuntimeInfos(glf::RuntimeInfos &)
// void glf::GetRuntimeInfos();
// [0xc7f8c0] (50 bytes) glf::Memset(void *,int,unsigned int)
// void *glf::Memset(glf *this, void *c, size_t n);
// [0xc7f900] (50 bytes) glf::MemCmp(void const*,void const*,unsigned int)
// int glf::MemCmp(glf *this, void *s2, size_t n);
// [0xc7f940] (50 bytes) glf::Memcpy(void *,void const*,unsigned int)
// void *glf::Memcpy(glf *this, void *src, size_t n);
// [0xc7f980] (50 bytes) glf::MemChr(void const*,int,unsigned int)
// void *glf::MemChr(glf *this, const void *c, size_t n);
// [0xc7f9c0] (50 bytes) glf::MemChr(void *,int,unsigned int)
// void *glf::MemChr(glf *this, void *c, size_t n);
// [0xc7fa00] (51 bytes) glf::Memset8(void *,unsigned char,unsigned int)
// void *glf::Memset8(glf *this, void *a2, size_t n);
// [0xc801c0] (42 bytes) glf::Strrchr(char const*,int)
// char *glf::Strrchr(glf *this, const char *c);
// [0xc801f0] (42 bytes) glf::Strrchr(char *,int)
// char *glf::Strrchr(glf *this, char *c);
// [0xc80220] (42 bytes) glf::Strchr(char const*,int)
// char *glf::Strchr(glf *this, const char *c);
// [0xc80250] (42 bytes) glf::Strstr(char const*,char const*)
// char *glf::Strstr(glf *this, char *needle);
// [0xc80280] (42 bytes) glf::Strstr(char *,char *)
// char *glf::Strstr(glf *this, char *needle);
// [0xc802b0] (42 bytes) glf::Strcpy(char *,char const*)
// char *glf::Strcpy(glf *this, char *src);
// [0xc802e0] (42 bytes) glf::Strcmp(char const*,char const*)
// int glf::Strcmp(glf *this, char *s2);
// [0xc80310] (50 bytes) glf::Strncmp(char const*,char const*,unsigned int)
// int glf::Strncmp(glf *this, char *s2, size_t n);
// [0xc80350] (44 bytes) glf::Strcpy_s(char *,unsigned int,char const*)
// int glf::Strcpy_s(glf *this, char *a2, char *src);
// [0xc80380] (52 bytes) glf::Strncpy_s(char *,unsigned int,char const*,unsigned int)
// int glf::Strncpy_s(glf *this, char *a2, char *src, size_t n);
// [0xc803c0] (26 bytes) glf::Strlen(char const*)
// int glf::Strlen(glf *this);
// [0xc803e0] (17 bytes) glf::toupper(int)
// glf *glf::toupper(glf *this);
// [0xc80400] (58 bytes) glf::Vsnprintf(char *,unsigned int,char const*,char *)
// int glf::Vsnprintf(glf *this, size_t maxlen, char *format, __gnuc_va_list __varargs);
// [0xc80440] (58 bytes) glf::Snprintf(char *,unsigned int,char const*,...)
// int glf::Snprintf(glf *this, size_t a2, char *a3, const char *__varargs, ...);
// [0xc80480] (58 bytes) glf::Vsprintf_s(char *,unsigned int,char const*,char *)
// int glf::Vsprintf_s(glf *this, size_t a2, char *a3, __gnuc_va_list __varargs);
// [0xc804c0] (93 bytes) glf::Vsnprintf_s(char *,unsigned int,unsigned int,char const*,char *)
// int glf::Vsnprintf_s(glf *this, char *a2, signed int a3, char *a4, char *a5);
// [0xc80520] (50 bytes) glf::Strnlen_s(char const*,unsigned int)
// const char *glf::Strnlen_s(glf *this, const char *a2);
// [0xc80560] (126 bytes) glf::Stricmp(char const*,char const*)
// int glf::Stricmp(glf *this, const char *a2);
// [0xc805e0] (150 bytes) glf::Strnicmp(char const*,char const*,unsigned int)
// int glf::Strnicmp(glf *this, const char *a2, const char *a3);
// [0xc80680] (97 bytes) glf::Strcat_s(char *,unsigned int,char const*)
// bool glf::Strcat_s(glf *this, char *a2, char *a3);
// [0xc806f0] (126 bytes) glf::Wcsicmp(wchar_t const*,wchar_t const*)
// int glf::Wcsicmp(glf *this, const wchar_t *a2);
// [0xc80770] (37 bytes) glf::ToLower(char)
// int glf::ToLower(glf *this);
// [0xc807a0] (202 bytes) glf::Stristr(char const*,char const*)
// glf *glf::Stristr(glf *this, char *a2);
// [0xc80870] (93 bytes) glf::ToLowerCase(char *,int,int)
// int glf::ToLowerCase(glf *this, char *a2, int a3);
// [0xc808d0] (149 bytes) glf::ToLowerCase(std::string &,int,int)
// int glf::ToLowerCase(int *a1, int a2, int a3);
// [0xc827f0] (96 bytes) glf::GetTicks(void)
// int64_t glf::GetTicks();
// [0xc82850] (12 bytes) glf::GetTicksPerSecond(void)
// int64_t glf::GetTicksPerSecond();
// [0xc82860] (53 bytes) glf::OffsetTimer(long long)
// uint64_t *glf::OffsetTimer(glf *this, int64_t a2);
// [0xc828a0] (152 bytes) glf::GetMilliseconds(void)
// int64_t glf::GetMilliseconds();
// [0xc82940] (152 bytes) glf::GetMicroseconds(void)
// int64_t glf::GetMicroseconds();
// [0xc829e0] (152 bytes) glf::GetNanoseconds(void)
// int64_t glf::GetNanoseconds();
// [0xc82a80] (179 bytes) glf::GetRunningTimeMs(void)
// int64_t glf::GetRunningTimeMs();
// [0xc82b40] (179 bytes) glf::GetRunningTimeUs(void)
// int64_t glf::GetRunningTimeUs();
// [0xc82c00] (179 bytes) glf::GetRunningTimeNs(void)
// int64_t glf::GetRunningTimeNs();
// [0xc82cc0] (114 bytes) glf::GetCalendar(glf::Calendar &)
// int glf::GetCalendar(int *a1);
// [0xc83420] (12 bytes) glf::core::CZipReader::getFileCount(void)
// int glf::core::CZipReader::getFileCount(glf::core::CZipReader *this);
// [0xc83e80] (439 bytes) glf::core::CZipReader::extractFilename(glf::core::SZipFileEntry *)
// int glf::core::CZipReader::extractFilename(int a1, int a2);
// [0xc84040] (1654 bytes) glf::core::CZipReader::scanLocalHeader(void)
// int glf::core::CZipReader::scanLocalHeader( glf::core::CZipReader *this, int a2, int a3, int a4, int a5, int a6, char *a7, int a8, int a9, int a10, int a11, int a12, char *a13, int a14, int a15, int a16, int a17, int a18, int a19, int64_t a20, int a21, int16_t a22, uint32_t *a23, uint32_t *a24, uint32_t *a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int16_t a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int16_t a47, int a48, int a49, int a50, char a51);
// [0xc846c0] (202 bytes) glf::core::CZipReader::CZipReader(glf::IOStream *,char const*,bool,bool,bool)
// 0xc846c0 glf::core::CZipReader::CZipReader(glf::IOStream *,char const*,bool,bool,bool)
// [0xc84790] (106 bytes) glf::core::CZipReader::deletePathFromFilename(std::string &)const
// int glf::core::CZipReader::deletePathFromFilename(int a1, uint8_t **a2);
// [0xc84800] (518 bytes) glf::core::CZipReader::getFileInfo(char const*,int &,int &,bool &,int &)const
// int glf::core::CZipReader::getFileInfo( glf::core::CZipReader *this, char *a2, int *a3, int *a4, bool *a5, int *a6);
// [0xc84a10] (203 bytes) glf::core::CZipReader::ExportHeader(glf::IOStream &)
// glf::core::CZipReader *glf::core::CZipReader::ExportHeader(glf::core::CZipReader *this, glf::IOStream *a2);
// [0xc84ae0] (1603 bytes) glf::core::CZipReader::ImportHeader(glf::IOStream &)
// int glf::core::CZipReader::ImportHeader( glf::core::CZipReader *this, glf::IOStream *a2, int a3, int a4, int a5, int a6, glf::IOStream *a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, char *a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int16_t a27, uint32_t *a28, uint32_t *a29, uint32_t *a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int16_t a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int16_t a52);
// [0xc85130] (35 bytes) glf::core::FromVoxArchive::ReadInt(unsigned char *)
// int glf::core::FromVoxArchive::ReadInt(glf::core::FromVoxArchive *this, uint8_t *a2);
// [0xc85160] (33 bytes) glf::core::FromVoxArchive::ReverseInt(unsigned int &)
// unsigned int glf::core::FromVoxArchive::ReverseInt(glf::core::FromVoxArchive *this, unsigned int *a2);
// [0xc85190] (514 bytes) glf::core::FromVoxArchive::MurmurHash2DualNoCase(char const*,int,unsigned int,unsigned int,unsigned int &,unsigned int &)
// unsigned int glf::core::FromVoxArchive::MurmurHash2DualNoCase( glf::core::FromVoxArchive *this, const char *a2, int a3, unsigned int a4, unsigned int *a5, unsigned int *a6);
// [0xc853a0] (253 bytes) glf::core::FromVoxArchive::MurmurHash2Dual(unsigned int const*,int,unsigned int,unsigned int,unsigned int &,unsigned int &)
// unsigned int glf::core::FromVoxArchive::MurmurHash2Dual( glf::core::FromVoxArchive *this, const unsigned int *a2, int a3, unsigned int a4, unsigned int *a5, unsigned int *a6);
// [0xc854a0] (86 bytes) glf::core::FromVoxArchive::getFilenameWithoutPath(char const*)
// glf::core::FromVoxArchive *glf::core::FromVoxArchive::getFilenameWithoutPath(glf::core::FromVoxArchive *this);
// [0xc85500] (231 bytes) glf::core::FromVoxArchive::getHashIndex(char const*,int &)const
// int glf::core::FromVoxArchive::getHashIndex(glf::core::FromVoxArchive *this, char *s, int *a3);
// [0xc855f0] (195 bytes) glf::core::FromVoxArchive::getFileInfo(char const*,int &,int &,bool &,int &)const
// int glf::core::FromVoxArchive::getFileInfo( glf::core::FromVoxArchive *this, char *s, int *a3, int *a4, bool *a5, int *a6);
// [0xc856c0] (127 bytes) glf::core::FromVoxArchive::overrideFile(char const*,bool &)
// int glf::core::FromVoxArchive::overrideFile(glf::core::FromVoxArchive *this, char *s, bool *a3);
// [0xc85740] (125 bytes) glf::core::FromVoxArchive::isVoxArchiveFormat(glf::FileStream *)
// int glf::core::FromVoxArchive::isVoxArchiveFormat(int a1);
// [0xc857c0] (54 bytes) glf::core::FromVoxArchive::collisionCheckStart(unsigned int,unsigned int)
// int glf::core::FromVoxArchive::collisionCheckStart( glf::core::FromVoxArchive *this, unsigned int a2, unsigned int a3);
// [0xc85800] (142 bytes) glf::core::FromVoxArchive::collisionCheckCallback(unsigned int,unsigned int)
// bool glf::core::FromVoxArchive::collisionCheckCallback( glf::core::FromVoxArchive *this, unsigned int a2, unsigned int a3);
// [0xc85890] (182 bytes) glf::core::FromVoxArchive::collisionCheck(glf::core::FromVoxArchive*)
// int glf::core::FromVoxArchive::collisionCheck(glf::core::FromVoxArchive *this, glf::core::FromVoxArchive *a2);
// [0xc85950] (32 bytes) glf::core::FromVoxLinAlloc::FromVoxLinAlloc(void)
// struct glf::core::FromVoxLinAlloc *glf::core::FromVoxLinAlloc::FromVoxLinAlloc( glf::core::FromVoxLinAlloc *this);
// [0xc85970] (67 bytes) glf::core::FromVoxLinAlloc::~FromVoxLinAlloc()
// void glf::core::FromVoxLinAlloc::~FromVoxLinAlloc(void **this);
// [0xc859c0] (73 bytes) glf::core::FromVoxArchive::~FromVoxArchive()
// void glf::core::FromVoxArchive::~FromVoxArchive(void **this);
// [0xc85a10] (56 bytes) glf::core::FromVoxArchive::~FromVoxArchive()
// void glf::core::FromVoxArchive::~FromVoxArchive(void **this);
// [0xc85a50] (39 bytes) glf::core::FromVoxLinAlloc::AddSize(int,int)
// glf::core::FromVoxLinAlloc *glf::core::FromVoxLinAlloc::AddSize( glf::core::FromVoxLinAlloc *this, int a2, int a3);
// [0xc85a80] (70 bytes) glf::core::FromVoxLinAlloc::Allocate(void)
// bool glf::core::FromVoxLinAlloc::Allocate(glf::core::FromVoxLinAlloc *this);
// [0xc85ad0] (49 bytes) glf::core::FromVoxLinAlloc::GetMem(int,int)
// int glf::core::FromVoxLinAlloc::GetMem(glf::core::FromVoxLinAlloc *this, int a2, int a3);
// [0xc85b10] (1324 bytes) glf::core::FromVoxArchive::FromVoxArchive(glf::FileStream *,char const*,bool,bool,bool)
// char glf::core::FromVoxArchive::FromVoxArchive( glf::core::FromVoxArchive *a1, int a2, char *src, char a4, char a5, char a6);
// [0xc86040] (134 bytes) glf::core::CZipReader::~CZipReader()
// void glf::core::CZipReader::~CZipReader(glf::core::CZipReader *this);
// [0xc860d0] (56 bytes) glf::core::CZipReader::~CZipReader()
// void glf::core::CZipReader::~CZipReader(glf::core::CZipReader *this);
// [0xc86110] (318 bytes) glf::core::CZipReader::GetFilesInDirectory(char const*,std::vector<std::string,std::allocator<std::string>> &)const
// int glf::core::CZipReader::GetFilesInDirectory( glf::core::CZipReader *this, char *s, std::vector<std::string> *a3);
// [0xc86250] (882 bytes) glf::core::FromVoxArchive::GetFilesInDirectory(char const*,std::vector<std::string,std::allocator<std::string>> &)const
// int glf::core::FromVoxArchive::GetFilesInDirectory( glf::core::FromVoxArchive *this, char *s, std::vector<std::string> *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, unsigned int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28);
// [0xc865d0] (27 bytes) glf::core::FileArchive::~FileArchive()
// void glf::core::FileArchive::~FileArchive(glf::core::FileArchive *this);
// [0xc865f0] (12 bytes) glf::core::CZipReader::getZipFileName(void)const
// int glf::core::CZipReader::getZipFileName(glf::core::CZipReader *this);
// [0xc86600] (13 bytes) glf::core::CZipReader::isValid(void)
// bool glf::core::CZipReader::isValid(glf::core::CZipReader *this);
// [0xc86610] (9 bytes) glf::core::CZipReader::isVoxArchive(void)
// int glf::core::CZipReader::isVoxArchive();
// [0xc86620] (31 bytes) glf::core::FromVoxArchive::getZipFileName(void)const
// void *glf::core::FromVoxArchive::getZipFileName(glf::core::FromVoxArchive *this);
// [0xc86640] (13 bytes) glf::core::FromVoxArchive::isValid(void)
// int glf::core::FromVoxArchive::isValid(glf::core::FromVoxArchive *this);
// [0xc86650] (16 bytes) glf::core::FromVoxArchive::getFileCount(void)
// int glf::core::FromVoxArchive::getFileCount(glf::core::FromVoxArchive *this);
// [0xc86660] (12 bytes) glf::core::FromVoxArchive::isVoxArchive(void)
// int glf::core::FromVoxArchive::isVoxArchive();
// [0xc86670] (45 bytes) glf::core::FileArchive::~FileArchive()
// void glf::core::FileArchive::~FileArchive(glf::core::FileArchive *this);
// [0xc870b0] (9 bytes) glf::SetConsoleColor(glf::Console::Color)
// void glf::SetConsoleColor();
// [0xc870c0] (9 bytes) glf::GetConsoleColor(void)
// int glf::GetConsoleColor();
// [0xc870d0] (62 bytes) glf::Print(char const*)
// int glf::Print();
// [0xc873a0] (9 bytes) glf::ClearColorStack(void)
// void glf::ClearColorStack();
// [0xc873b0] (107 bytes) glf::GetColor(char const*,unsigned int)
// int glf::GetColor(glf *this, size_t a2);
// [0xc87480] (69 bytes) glf::MyMoveFile(char const*,char const*)
// bool glf::MyMoveFile(glf *this, char *name);
// [0xc87a40] (92 bytes) glf::MyPrint(char const*)
// int glf::MyPrint(glf *this);
// [0xc92830] (35 bytes) glf::GetStackedTags(void)
// void *glf::GetStackedTags();
// [0xc92860] (35 bytes) glf::PopLogTag(void)
// int glf::PopLogTag();
// [0xc92890] (43 bytes) glf::PushLogTag(char const*)
// int glf::PushLogTag(glf *this);
// [0xc92c70] (186 bytes) glf::VCLog(char const*,glf::LogLevel::E,char const*,char *)
// int glf::VCLog(char *src, __gnuc_va_list __varargs, char *a3, __gnuc_va_list a4);
// [0xc92d30] (58 bytes) glf::CLog(char const*,glf::LogLevel::E,char const*,...)
// int glf::CLog(char *src, __gnuc_va_list __varargs, char *a3, ...);
// [0xc92d70] (67 bytes) glf::VLog(char const*,glf::LogLevel::E,char const*,char *)
// int glf::VLog(char *format, __gnuc_va_list __varargs, char *a3, __gnuc_va_list a4);
// [0xc92dc0] (81 bytes) glf::Log(char const*,glf::LogLevel::E,char const*,...)
// int glf::Log(char *format, __gnuc_va_list a2, char *a3, ...);
// [0xc97f20] (152 bytes) glf::Replace(std::string &,std::string const&,std::string const&)
// int glf::Replace(int a1, const char **a2, char **a3);
// [0xca1470] (86 bytes) glf::intrusive_ptr_release(glf::RefCounted const*)
// int glf::intrusive_ptr_release(glf *this);
// [0xcb4b80] (77 bytes) glf::AndroidAccelerometerEvent(float,float,float)
// int glf::AndroidAccelerometerEvent(glf *this, float a2, float a3);
// [0xcb7b40] (370 bytes) glf::WaitAllDone(glf::FileStreamImpl const*,int)
// int glf::WaitAllDone(glf *this, const glf::FileStreamImpl *a2);
// [0xcba540] (110 bytes) glf::IsValidDir(char const*)
// int glf::IsValidDir(glf *this);
// [0xcbbf50] (61 bytes) glf::StartsWith(char const*,char const*)
// bool glf::StartsWith(glf *this, char *needle);
// [0xcbbf90] (24 bytes) glf::FindFirstDifferentOf(char const*,char)
// glf *glf::FindFirstDifferentOf(glf *this, const char *a2);
// [0xcbbfb0] (36 bytes) glf::StrLenUntil(char const*,char)
// int glf::StrLenUntil(glf *this, const char *a2);
// [0xcbbfe0] (1207 bytes) glf::NormalizePath(char *,unsigned int,char const*)
// int glf::NormalizePath(glf *this, char *a2, char *s);
// [0xcbc4a0] (169 bytes) glf::VJoinPath(char *,unsigned int,unsigned int,char *)
// char *glf::VJoinPath(glf *this, char *a2, char *a3, unsigned int a4);
// [0xcbc550] (58 bytes) glf::VJoinPath(char *,unsigned int,unsigned int,...)
// char *glf::VJoinPath(glf *this, char *a2, char *a3, unsigned int a4, ...);
// [0xcbcd70] (20 bytes) glf::IsDelimiter(char)
// int glf::IsDelimiter(int a1, glf *this);
// [0xcbcd90] (59 bytes) glf::IsLastCharDelimiter(std::string const&)
// int glf::IsLastCharDelimiter(uint32_t *a1);
// [0xcbcdd0] (57 bytes) glf::IsFirstCharDelimiter(std::string const&)
// int glf::IsFirstCharDelimiter(uint32_t *a1);
// [0xcbce10] (291 bytes) glf::AppendPath(std::string &,std::string const&)
// int glf::AppendPath(uint32_t *a1, uint32_t *a2);
// [0xcbcf40] (72 bytes) glf::AppendPath(std::string &,std::string const&,std::string const&)
// int glf::AppendPath(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0xcbcf90] (88 bytes) glf::AppendPath(std::string &,std::string const&,std::string const&,std::string const&)
// int glf::AppendPath(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0xcbcff0] (71 bytes) glf::JoinPath(std::string const&)
// uint32_t *glf::JoinPath(uint32_t *a1, uint32_t *a2);
// [0xcbd040] (79 bytes) glf::JoinPath(std::string const&,std::string const&)
// uint32_t *glf::JoinPath(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0xcbd090] (87 bytes) glf::JoinPath(std::string const&,std::string const&,std::string const&)
// uint32_t *glf::JoinPath(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0xcc0d00] (507 bytes) glf::allocateEphemeralAllocation(unsigned int)
// int *glf::allocateEphemeralAllocation(glf *this);
// [0xcc0f00] (205 bytes) glf::freeEphemeralAllocation(void *)
// int32_t glf::freeEphemeralAllocation(glf *this);
// [0xcc0fd0] (411 bytes) glf::releaseEphemeralFreeMemory(void)
// int glf::releaseEphemeralFreeMemory();
// [0xcc1170] (267 bytes) glf::reserveEphemeralFreeMemory(int)
// void glf::reserveEphemeralFreeMemory(glf *this);
// [0xcc87b0] (50 bytes) glf::Crc32(unsigned int,char const*,unsigned int)
// int glf::Crc32(glf *this, unsigned int a2, const char *a3);
// [0xcc87f0] (1311 bytes) glf::crc32_little_lower(unsigned long,unsigned char const*,unsigned int)
// int glf::crc32_little_lower(glf *this, unsigned int a2, const uint8_t *a3);
// [0xcc8d10] (1368 bytes) glf::crc32_big_lower(unsigned long,unsigned char const*,unsigned int)
// unsigned int glf::crc32_big_lower(glf *this, unsigned int a2, const uint8_t *a3);
// [0xcc9270] (64 bytes) glf::Crc32Lower(unsigned int,char const*,unsigned int)
// int glf::Crc32Lower(glf *this, unsigned int a2, const char *a3);
// [0xcc92b0] (110 bytes) glf::Adler32(void const*,unsigned int,unsigned int)
// int glf::Adler32(glf *this, char *a2, unsigned int a3);
// [0xcc9320] (68 bytes) glf::AdlerString32(char const*)
// int glf::AdlerString32(glf *this);
// [0xcc9370] (237 bytes) glf::adlerString32(char const*,unsigned int,unsigned int,bool)
// int glf::adlerString32(glf *this, const char *a2, unsigned int a3, char a4);
// [0xcc9460] (35 bytes) glf::Breakpoint(void)
// int glf::Breakpoint();
// [0xcc9490] (12 bytes) glf::AssertInner(glf::AssertLevel,char const*,int,char const*)
// int glf::AssertInner();
// [0xccb150] (135 bytes) glf::GetSystemCategory(void)
// int *glf::GetSystemCategory();
// [0xccb1e0] (63 bytes) glf::SystemFromWin32(unsigned long)
// int glf::SystemFromWin32(glf *this);
// [0xccb220] (63 bytes) glf::SystemFromPosix(int)
// int glf::SystemFromPosix(glf *this);
// [0xccb260] (60 bytes) glf::Win32FromSystem(glf::system::error)
// char glf::Win32FromSystem(int a1);
// [0xccb2a0] (60 bytes) glf::Win32FromPosix(int)
// char glf::Win32FromPosix(glf *this);
// [0xccb2e0] (60 bytes) glf::PosixFromSystem(glf::system::error)
// char glf::PosixFromSystem(int a1);
// [0xccb320] (60 bytes) glf::PosixFromWin32(unsigned long)
// char glf::PosixFromWin32(glf *this);
// [0xccb360] (36 bytes) glf::GetErrorMessage(glf::system::error)
// char *glf::GetErrorMessage(unsigned int a1);
// [0xcce0c0] (29 bytes) glf::SocketGetLastError(void)
// int glf::SocketGetLastError();
// [0xcce0e0] (34 bytes) glf::closesocket(int)
// int glf::closesocket(glf *this);
