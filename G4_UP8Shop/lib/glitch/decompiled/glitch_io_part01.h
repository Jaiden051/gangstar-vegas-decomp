#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_io_part01.h
// Library: glitch | Module: glitch_io_part01
// Binary Address Span: 0xe86200 .. 0xeefdf0 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xe86200] (59 bytes) glitch::io::CXMLWriter::writeLineBreak(void)
// int glitch::io::CXMLWriter::writeLineBreak(glitch::io::CXMLWriter *this);
// [0xe86240] (151 bytes) glitch::io::CXMLWriter::writeXMLHeader(void)
// int glitch::io::CXMLWriter::writeXMLHeader(glitch::io::CXMLWriter *this);
// [0xe862e0] (260 bytes) glitch::io::CXMLWriter::writeClosingTag(wchar_t const*)
// int glitch::io::CXMLWriter::writeClosingTag(glitch::io::CXMLWriter *this, wchar_t *s);
// [0xe863f0] (130 bytes) glitch::io::CXMLWriter::writeComment(wchar_t const*)
// int glitch::io::CXMLWriter::writeComment(glitch::io::CXMLWriter *this, const wchar_t *a2);
// [0xe86730] (741 bytes) glitch::io::CXMLWriter::writeText(wchar_t const*)
// wchar_t *glitch::io::CXMLWriter::writeText(glitch::io::CXMLWriter *this, const wchar_t *a2);
// [0xe87920] (77 bytes) glitch::io::CXMLWriter::~CXMLWriter()
// void glitch::io::CXMLWriter::~CXMLWriter(volatile int32_t **this);
// [0xe87970] (56 bytes) glitch::io::CXMLWriter::~CXMLWriter()
// void glitch::io::CXMLWriter::~CXMLWriter(volatile int32_t **this);
// [0xe879b0] (64 bytes) glitch::io::CXMLWriter::CXMLWriter(boost::intrusive_ptr<glitch::io::IWriteFile> const&,bool)
// int glitch::io::CXMLWriter::CXMLWriter(int a1, int *a2, uint8_t a3);
// [0xe879f0] (226 bytes) glitch::io::CXMLWriter::writeAttribute(wchar_t const*,wchar_t const*)
// void glitch::io::CXMLWriter::writeAttribute(glitch::io::CXMLWriter *this, wchar_t *s, const wchar_t *a3);
// [0xe87ae0] (378 bytes) glitch::io::CXMLWriter::writeElement(wchar_t const*,bool,wchar_t const*,wchar_t const*,wchar_t const*,wchar_t const*,wchar_t const*,wchar_t const*,wchar_t const*,wchar_t const*,wchar_t const*,wchar_t const*)
// int glitch::io::CXMLWriter::writeElement( glitch::io::CXMLWriter *this, wchar_t *s, bool a3, wchar_t *a4, wchar_t *a5, wchar_t *a6, wchar_t *a7, wchar_t *a8, wchar_t *a9, wchar_t *a10, wchar_t *a11, wchar_t *a12, wchar_t *a13);
// [0xe87c60] (383 bytes) glitch::io::CXMLWriter::writeElement(wchar_t const*,bool,std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>> const&,std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>> const&)
// int glitch::io::CXMLWriter::writeElement(glitch::io::CXMLWriter *a1, wchar_t *s, char a3, int *a4, int *a5);
// [0xe87de0] (20 bytes) glitch::io::CZipReader::getFileCount(void)
// int glitch::io::CZipReader::getFileCount(glitch::io::CZipReader *this);
// [0xe87e00] (18 bytes) glitch::io::CZipReader::getFileInfo(int)const
// int glitch::io::CZipReader::getFileInfo(glitch::io::CZipReader *this, int a2);
// [0xe87e20] (141 bytes) glitch::io::CZipReader::releaseUnusedPoolHandles(void)
// int glitch::io::CZipReader::releaseUnusedPoolHandles(glitch::io::CZipReader *this);
// [0xe87eb0] (106 bytes) glitch::io::CZipReader::isValid(glitch::io::IReadFile *)
// bool glitch::io::CZipReader::isValid(int a1);
// [0xe87f20] (89 bytes) glitch::io::CZipReader::isValid(char const*)
// bool glitch::io::CZipReader::isValid(glitch::io::CZipReader *this);
// [0xe87f80] (9 bytes) glitch::io::CUnZipReader::buildDirectory(void)
// void glitch::io::CUnZipReader::buildDirectory();
// [0xe87f90] (112 bytes) glitch::io::CZipWriter::CZipWriter(boost::intrusive_ptr<glitch::io::IWriteFile> const&)
// int glitch::io::CZipWriter::CZipWriter(int a1, int *a2);
// [0xe88000] (206 bytes) glitch::io::CZipWriter::close(void)
// int glitch::io::CZipWriter::close(glitch::io::CZipWriter *this);
// [0xe880d0] (161 bytes) glitch::io::getVertexStreamsStride(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&)
// unsigned int glitch::io::getVertexStreamsStride(glitch::io *this);
// [0xe88180] (780 bytes) glitch::io::loadPrimitiveStream(boost::intrusive_ptr<glitch::io::IReadFile> const&,bool,glitch::video::IVideoDriver *)
// glitch::io *glitch::io::loadPrimitiveStream( glitch::io *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, bool a3, glitch::video::IVideoDriver *a4);
// [0xe88490] (173 bytes) glitch::io::CMemoryMappedFileReadOnlyWrapper::CMemoryMappedFileReadOnlyWrapper(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// void *glitch::io::CMemoryMappedFileReadOnlyWrapper::CMemoryMappedFileReadOnlyWrapper( glitch::io::CMemoryMappedFileReadOnlyWrapper *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2);
// [0xe88540] (68 bytes) glitch::io::CMemoryMappedFileReadOnlyWrapper::~CMemoryMappedFileReadOnlyWrapper()
// void glitch::io::CMemoryMappedFileReadOnlyWrapper::~CMemoryMappedFileReadOnlyWrapper( glitch::io::CMemoryMappedFileReadOnlyWrapper *this);
// [0xe897f0] (1378 bytes) glitch::io::loadHeadersAndSkipData(boost::intrusive_ptr<glitch::io::IReadFile> const&,glitch::io::SPrimitiveStreamDesc &,bool)
// glitch::video::CVertexStreams **glitch::io::loadHeadersAndSkipData( glitch::video::CVertexStreams **a1, uint32_t *a2, int a3, char a4);
// [0xe89d60] (2635 bytes) glitch::io::loadVertexStreams(boost::intrusive_ptr<glitch::io::IReadFile> const&,bool,glitch::video::IVideoDriver *)
// glitch::video::CVertexStreams **glitch::io::loadVertexStreams( glitch::io *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, bool a3, glitch::video::IVideoDriver *a4);
// [0xe8a7b0] (368 bytes) glitch::io::loadMeshBuffer(boost::intrusive_ptr<glitch::io::IReadFile> const&,bool,glitch::video::IVideoDriver *)
// glitch::io *glitch::io::loadMeshBuffer( glitch::io *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, bool a3, glitch::video::IVideoDriver *a4);
// [0xe8adc0] (2718 bytes) glitch::io::save(glitch::video::CPrimitiveStream const&,glitch::video::CPrimitiveStream const&,boost::intrusive_ptr<glitch::io::IWriteFile> const&,unsigned char,unsigned int,unsigned int)
// int glitch::io::save(int a1, int a2, int *a3, char a4, unsigned int a5, unsigned int a6);
// [0xe8bc70] (137 bytes) glitch::io::CZipWriter::~CZipWriter()
// void glitch::io::CZipWriter::~CZipWriter(glitch::io::CZipWriter *this);
// [0xe8bd00] (56 bytes) glitch::io::CZipWriter::~CZipWriter()
// void glitch::io::CZipWriter::~CZipWriter(glitch::io::CZipWriter *this);
// [0xe8bd40] (183 bytes) glitch::io::CZipReader::~CZipReader()
// void glitch::io::CZipReader::~CZipReader(glitch::io::CZipReader *this);
// [0xe8be00] (56 bytes) glitch::io::CZipReader::~CZipReader()
// void glitch::io::CZipReader::~CZipReader(glitch::io::CZipReader *this);
// [0xe8be40] (331 bytes) glitch::io::fromString(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&,glitch::video::IVideoDriver *)
// glitch::io *glitch::io::fromString(glitch::io *this, const void **a2, char **a3);
// [0xe8c870] (415 bytes) glitch::io::CUnZipReader::findFile(char const*)
// int glitch::io::CUnZipReader::findFile(glitch::io::CUnZipReader *this, char *s);
// [0xe8cfd0] (1567 bytes) glitch::io::CZipReader::openFile(int)
// glitch::io::CZipReader *glitch::io::CZipReader::openFile(glitch::io::CZipReader *this, uint32_t *a2, int a3);
// [0xe8d5f0] (2889 bytes) glitch::io::save(boost::intrusive_ptr<glitch::video::CVertexStreams const> const&,boost::intrusive_ptr<glitch::io::IWriteFile> const&,unsigned char,unsigned int,unsigned int)
// int glitch::io::save(int *a1, uint32_t *a2, char a3, unsigned int a4, unsigned int a5);
// [0xe8e140] (1213 bytes) glitch::io::CZipWriter::addNewFile(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&,void const*,unsigned int)
// int glitch::io::CZipWriter::addNewFile( glitch::io::CZipWriter *this, const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2, char *a3, unsigned int a4);
// [0xe8e600] (167 bytes) glitch::io::CZipWriter::addNewFile(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&,boost::intrusive_ptr<glitch::io::IReadFile> const&)
// void glitch::io::CZipWriter::addNewFile( glitch::io::CZipWriter *this, const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2, const boost::intrusive_ptr<glitch::io::IReadFile> *a3);
// [0xe8e6b0] (196 bytes) glitch::io::CZipWriter::addNewFile(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// void glitch::io::CZipWriter::addNewFile( glitch::io::CZipWriter *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2);
// [0xe91070] (582 bytes) glitch::io::CZipReader::findFile(char const*)const
// int glitch::io::CZipReader::findFile(glitch::io::CZipReader *this, char *s);
// [0xe912c0] (104 bytes) glitch::io::CZipReader::openFile(char const*)
// glitch::io::CZipReader *glitch::io::CZipReader::openFile( glitch::io::CZipReader *this, glitch::io::CZipReader *a2, char *s);
// [0xe91330] (590 bytes) glitch::io::CUnZipReader::openFile(char const*)
// glitch::io::CUnZipReader *glitch::io::CUnZipReader::openFile( glitch::io::CUnZipReader *this, glitch::io::CUnZipReader *a2, char *s);
// [0xe91580] (387 bytes) glitch::io::CZipReader::extractFilename(glitch::io::SZipFileEntry *)
// void glitch::io::CZipReader::extractFilename( int a1, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2);
// [0xe91710] (1209 bytes) glitch::io::CZipReader::scanLocalHeaders(std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> &)
// void glitch::io::CZipReader::scanLocalHeaders( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, char a17, char a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int16_t a27, char a28);
// [0xe91bd0] (183 bytes) glitch::io::CZipReader::scanCDHeaders(std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> &)
// 0xe91bd0 glitch::io::CZipReader::scanCDHeaders(std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> &)
// [0xe91c90] (1752 bytes) glitch::io::CZipReader::scanHeaders(void)
// int glitch::io::CZipReader::scanHeaders(glitch::io::CZipReader *this);
// [0xe92370] (382 bytes) glitch::io::toString(boost::intrusive_ptr<glitch::video::ITexture> const&,glitch::video::IVideoDriver *)
// glitch::io *glitch::io::toString( glitch::io *this, const boost::intrusive_ptr<glitch::video::ITexture> *a2, glitch::video::CTextureManager **a3);
// [0xe92e50] (108 bytes) glitch::io::CZipReader::init(bool,bool,bool,unsigned int)
// void glitch::io::CZipReader::init( glitch::io::CZipReader *this, int a2, int a3, int a4, unsigned int a5, int a6, int a7, unsigned int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, char *a24, char *a25, char *a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int16_t a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, char a54);
// [0xe92ec0] (207 bytes) glitch::io::CZipReader::CZipReader(boost::intrusive_ptr<glitch::io::IReadFile> const&,bool,bool,unsigned int,bool,bool)
// 0xe92ec0 glitch::io::CZipReader::CZipReader(boost::intrusive_ptr<glitch::io::IReadFile> const&,bool,bool,unsigned int,bool,bool)
// [0xe92f90] (359 bytes) glitch::io::CUnZipReader::CUnZipReader(glitch::io::IFileSystem *,char const*,bool,bool,bool)
// glitch::io::CUnZipReader *glitch::io::CUnZipReader::CUnZipReader( glitch::io::CUnZipReader *this, glitch::io::IFileSystem *a2, char *s, bool a4, bool a5, bool a6);
// [0xe93100] (215 bytes) glitch::io::CZipReader::CZipReader(char const*,bool,bool,unsigned int,bool,bool)
// 0xe93100 glitch::io::CZipReader::CZipReader(char const*,bool,bool,unsigned int,bool,bool)
// [0xe931e0] (829 bytes) glitch::io::createIrrXMLReader(glitch::io::IFileReadCallBack *)
// glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *glitch::io::createIrrXMLReader(glitch::io *this);
// [0xe93520] (79 bytes) glitch::io::createIrrXMLReader(glf::FileStream *)
// glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *glitch::io::createIrrXMLReader(int a1);
// [0xe93570] (198 bytes) glitch::io::createIrrXMLReader(char const*)
// glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *glitch::io::createIrrXMLReader(glitch::io *this);
// [0xe93640] (1285 bytes) glitch::io::createIrrXMLReaderUTF16(glitch::io::IFileReadCallBack *)
// int glitch::io::createIrrXMLReaderUTF16(glitch::io *this);
// [0xe93b50] (79 bytes) glitch::io::createIrrXMLReaderUTF16(glf::FileStream *)
// int glitch::io::createIrrXMLReaderUTF16(int a1);
// [0xe93ba0] (198 bytes) glitch::io::createIrrXMLReaderUTF16(char const*)
// int glitch::io::createIrrXMLReaderUTF16(glitch::io *this);
// [0xe93c70] (1285 bytes) glitch::io::createIrrXMLReaderUTF32(glitch::io::IFileReadCallBack *)
// int glitch::io::createIrrXMLReaderUTF32(glitch::io *this);
// [0xe94180] (79 bytes) glitch::io::createIrrXMLReaderUTF32(glf::FileStream *)
// int glitch::io::createIrrXMLReaderUTF32(int a1);
// [0xe941d0] (198 bytes) glitch::io::createIrrXMLReaderUTF32(char const*)
// int glitch::io::createIrrXMLReaderUTF32(glitch::io *this);
// [0xe942a0] (27 bytes) glitch::io::IFileReadCallBack::~IFileReadCallBack()
// void glitch::io::IFileReadCallBack::~IFileReadCallBack(glitch::io::IFileReadCallBack *this);
// [0xe942c0] (27 bytes) glitch::io::IXMLWriter::~IXMLWriter()
// void glitch::io::IXMLWriter::~IXMLWriter(glitch::io::IXMLWriter *this);
// [0xe942e0] (12 bytes) glitch::io::CUnzipReadFile::getFileName(void)const
// int glitch::io::CUnzipReadFile::getFileName(glitch::io::CUnzipReadFile *this);
// [0xe942f0] (98 bytes) glitch::io::CFileReadCallBack::~CFileReadCallBack()
// void glitch::io::CFileReadCallBack::~CFileReadCallBack(glitch::io::CFileReadCallBack *this);
// [0xe94360] (46 bytes) glitch::io::CFileReadCallBack::read(void *,int)
// int glitch::io::CFileReadCallBack::read(glitch::io::CFileReadCallBack *this, void *a2, int a3);
// [0xe94390] (24 bytes) glitch::io::CFileReadCallBack::getSize(void)const
// int glitch::io::CFileReadCallBack::getSize(glitch::io::CFileReadCallBack *this);
// [0xe943b0] (27 bytes) glitch::io::IIrrXMLReader<char,glitch::io::IXMLBase>::~IIrrXMLReader()
// void glitch::io::IIrrXMLReader<char,glitch::io::IXMLBase>::~IIrrXMLReader( glitch::io::IIrrXMLReader<char, glitch::io::IXMLBase> *this);
// [0xe943d0] (27 bytes) glitch::io::IIrrXMLReader<unsigned short,glitch::io::IXMLBase>::~IIrrXMLReader()
// void glitch::io::IIrrXMLReader<unsigned short,glitch::io::IXMLBase>::~IIrrXMLReader( glitch::io::IIrrXMLReader<unsigned short, glitch::io::IXMLBase> *this);
// [0xe943f0] (27 bytes) glitch::io::IIrrXMLReader<unsigned long,glitch::io::IXMLBase>::~IIrrXMLReader()
// void glitch::io::IIrrXMLReader<unsigned long,glitch::io::IXMLBase>::~IIrrXMLReader( glitch::io::IIrrXMLReader<unsigned long, glitch::io::IXMLBase> *this);
// [0xe94410] (59 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::readToNextElement(void)
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::readToNextElement( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this);
// [0xe94450] (12 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getNodeType(void)const
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getNodeType( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this);
// [0xe94460] (14 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeCount(void)const
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeCount( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this);
// [0xe94470] (31 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeName(int)const
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeName( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this, unsigned int a2);
// [0xe94490] (32 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeValue(int)const
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeValue( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this, unsigned int a2);
// [0xe944b0] (39 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeValueAsInt(unsigned long const*)const
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeValueAsInt( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this, const unsigned int *a2);
// [0xe944e0] (39 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeValueAsInt(int)const
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeValueAsInt( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this, int a2);
// [0xe94510] (12 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getNodeName(void)const
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getNodeName( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this);
// [0xe94520] (12 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getNodeData(void)const
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getNodeData( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this);
// [0xe94530] (13 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::isEmptyElement(void)const
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::isEmptyElement( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this);
// [0xe94540] (12 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getSourceFormat(void)const
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getSourceFormat( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this);
// [0xe94550] (12 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getParserFormat(void)const
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getParserFormat( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this);
// [0xe94560] (59 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::readToNextElement(void)
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::readToNextElement( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this);
// [0xe945a0] (12 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getNodeType(void)const
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getNodeType( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this);
// [0xe945b0] (14 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeCount(void)const
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeCount( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this);
// [0xe945c0] (31 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeName(int)const
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeName( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this, unsigned int a2);
// [0xe945e0] (32 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeValue(int)const
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeValue( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this, unsigned int a2);
// [0xe94600] (39 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeValueAsInt(unsigned short const*)const
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeValueAsInt( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this, const uint16_t *a2);
// [0xe94630] (39 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeValueAsInt(int)const
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeValueAsInt( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this, int a2);
// [0xe94660] (12 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getNodeName(void)const
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getNodeName( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this);
// [0xe94670] (12 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getNodeData(void)const
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getNodeData( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this);
// [0xe94680] (13 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::isEmptyElement(void)const
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::isEmptyElement( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this);
// [0xe94690] (12 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getSourceFormat(void)const
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getSourceFormat( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this);
// [0xe946a0] (12 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getParserFormat(void)const
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getParserFormat( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this);
// [0xe946b0] (59 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::readToNextElement(void)
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::readToNextElement( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this);
// [0xe946f0] (12 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getNodeType(void)const
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getNodeType( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this);
// [0xe94700] (14 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeCount(void)const
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeCount( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this);
// [0xe94710] (31 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeName(int)const
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeName( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this, unsigned int a2);
// [0xe94730] (32 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeValue(int)const
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeValue( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this, unsigned int a2);
// [0xe94750] (39 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeValueAsInt(char const*)const
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeValueAsInt( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this, const char *a2);
// [0xe94780] (39 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeValueAsInt(int)const
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeValueAsInt( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this, int a2);
// [0xe947b0] (12 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getNodeName(void)const
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getNodeName( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this);
// [0xe947c0] (12 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getNodeData(void)const
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getNodeData( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this);
// [0xe947d0] (13 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::isEmptyElement(void)const
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::isEmptyElement( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this);
// [0xe947e0] (12 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getSourceFormat(void)const
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getSourceFormat( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this);
// [0xe947f0] (12 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getParserFormat(void)const
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getParserFormat( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this);
// [0xe94800] (45 bytes) glitch::io::IIrrXMLReader<unsigned long,glitch::io::IXMLBase>::~IIrrXMLReader()
// void glitch::io::IIrrXMLReader<unsigned long,glitch::io::IXMLBase>::~IIrrXMLReader( glitch::io::IIrrXMLReader<unsigned long, glitch::io::IXMLBase> *this);
// [0xe94830] (45 bytes) glitch::io::IIrrXMLReader<unsigned short,glitch::io::IXMLBase>::~IIrrXMLReader()
// void glitch::io::IIrrXMLReader<unsigned short,glitch::io::IXMLBase>::~IIrrXMLReader( glitch::io::IIrrXMLReader<unsigned short, glitch::io::IXMLBase> *this);
// [0xe94860] (45 bytes) glitch::io::IIrrXMLReader<char,glitch::io::IXMLBase>::~IIrrXMLReader()
// void glitch::io::IIrrXMLReader<char,glitch::io::IXMLBase>::~IIrrXMLReader( glitch::io::IIrrXMLReader<char, glitch::io::IXMLBase> *this);
// [0xe94890] (45 bytes) glitch::io::IXMLWriter::~IXMLWriter()
// void glitch::io::IXMLWriter::~IXMLWriter(glitch::io::IXMLWriter *this);
// [0xe948c0] (45 bytes) glitch::io::IFileReadCallBack::~IFileReadCallBack()
// void glitch::io::IFileReadCallBack::~IFileReadCallBack(glitch::io::IFileReadCallBack *this);
// [0xe948f0] (106 bytes) glitch::io::CFileReadCallBack::~CFileReadCallBack()
// void glitch::io::CFileReadCallBack::~CFileReadCallBack(glitch::io::CFileReadCallBack *this);
// [0xe94960] (156 bytes) glitch::io::CZipPoolReadFile::~CZipPoolReadFile()
// void glitch::io::CZipPoolReadFile::~CZipPoolReadFile(glitch::io::CZipPoolReadFile *this);
// [0xe94a00] (164 bytes) glitch::io::CZipPoolReadFile::~CZipPoolReadFile()
// void glitch::io::CZipPoolReadFile::~CZipPoolReadFile(glitch::io::CZipPoolReadFile *this);
// [0xe94cf0] (70 bytes) glitch::io::CUnzipReadFile::~CUnzipReadFile()
// void glitch::io::CUnzipReadFile::~CUnzipReadFile(glitch::io::CUnzipReadFile *this);
// [0xe94d40] (105 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeValueAsFloat(int)const
// long double glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeValueAsFloat( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this, int a2);
// [0xe94db0] (648 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeValueAsFloat(int)const
// long double glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeValueAsFloat( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, glitch::core *a14, float a15);
// [0xe95040] (584 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeValueAsFloat(int)const
// long double glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeValueAsFloat( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, glitch::core *a14, float a15);
// [0xe95290] (78 bytes) glitch::io::CUnzipReadFile::~CUnzipReadFile()
// void glitch::io::CUnzipReadFile::~CUnzipReadFile(glitch::io::CUnzipReadFile *this);
// [0xe952e0] (70 bytes) glitch::io::CUnZipReader::~CUnZipReader()
// void glitch::io::CUnZipReader::~CUnZipReader(glitch::io::CUnZipReader *this);
// [0xe95330] (78 bytes) glitch::io::CUnZipReader::~CUnZipReader()
// void glitch::io::CUnZipReader::~CUnZipReader(glitch::io::CUnZipReader *this);
// [0xe95380] (193 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::~CXMLReaderImpl()
// void glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::~CXMLReaderImpl(void **this);
// [0xe95450] (56 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::~CXMLReaderImpl()
// void glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::~CXMLReaderImpl(void **this);
// [0xe97d50] (193 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::~CXMLReaderImpl()
// void glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::~CXMLReaderImpl(void **this);
// [0xe97e20] (56 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::~CXMLReaderImpl()
// void glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::~CXMLReaderImpl(void **this);
// [0xe97ea0] (193 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::~CXMLReaderImpl()
// void glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::~CXMLReaderImpl(void **this);
// [0xe97f70] (56 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::~CXMLReaderImpl()
// void glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::~CXMLReaderImpl(void **this);
// [0xe98280] (210 bytes) void glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::convertTextData<unsigned long>(unsigned long *,char *,int)
// void glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::convertTextData<unsigned long>( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this, unsigned int *a2, char *a3, int a4);
// [0xe98360] (242 bytes) void glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::convertTextData<unsigned short>(unsigned short *,char *,int)
// void glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::convertTextData<unsigned short>( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this, uint16_t *a2, char *a3, int a4);
// [0xe98460] (614 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::readFile(glitch::io::IFileReadCallBack *)
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::readFile( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this, glitch::io::IFileReadCallBack *a2);
// [0xe986d0] (226 bytes) void glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::convertTextData<unsigned long>(unsigned long *,char *,int)
// void glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::convertTextData<unsigned long>( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this, unsigned int *a2, char *a3, int a4);
// [0xe987c0] (127 bytes) void glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::convertTextData<unsigned short>(unsigned short *,char *,int)
// void glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::convertTextData<unsigned short>( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this, uint16_t *a2, char *a3, int a4);
// [0xe98840] (119 bytes) void glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::convertTextData<char>(char *,char *,int)
// void glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::convertTextData<char>( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this, char *a2, char *a3, int a4);
// [0xe988c0] (723 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::readFile(glitch::io::IFileReadCallBack *)
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::readFile( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this, glitch::io::IFileReadCallBack *a2);
// [0xe98ba0] (111 bytes) void glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::convertTextData<unsigned long>(unsigned long *,char *,int)
// void glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::convertTextData<unsigned long>( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this, unsigned int *a2, char *a3, int a4);
// [0xe98c10] (250 bytes) void glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::convertTextData<unsigned short>(unsigned short *,char *,int)
// void glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::convertTextData<unsigned short>( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this, uint16_t *a2, char *a3, int a4);
// [0xe98d10] (117 bytes) void glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::convertTextData<char>(char *,char *,int)
// void glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::convertTextData<char>( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this, char *a2, char *a3, int a4);
// [0xe98d90] (721 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::readFile(glitch::io::IFileReadCallBack *)
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::readFile( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this, glitch::io::IFileReadCallBack *a2);
// [0xe99850] (246 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeByName(unsigned long const*)const
// uint32_t **glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeByName( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this, void **a2);
// [0xe99950] (80 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeValueSafe(unsigned long const*)const
// uint32_t *glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeValueSafe( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this, unsigned int *a2);
// [0xe999a0] (60 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeValue(unsigned long const*)const
// uint32_t *glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeValue( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this, unsigned int *a2);
// [0xe999e0] (675 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeValueAsFloat(unsigned long const*)const
// long double glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::getAttributeValueAsFloat( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this, unsigned int *a2);
// [0xe99c90] (254 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeByName(unsigned short const*)const
// uint16_t **glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeByName( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this, uint16_t *a2);
// [0xe99d90] (80 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeValueSafe(unsigned short const*)const
// uint16_t *glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeValueSafe( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this, uint16_t *a2);
// [0xe99de0] (60 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeValue(unsigned short const*)const
// uint16_t *glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeValue( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this, uint16_t *a2);
// [0xe99e20] (611 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeValueAsFloat(unsigned short const*)const
// long double glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::getAttributeValueAsFloat( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this, uint16_t *a2);
// [0xe9a090] (210 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeByName(char const*)const
// const void **glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeByName( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this, const char *a2);
// [0xe9a170] (125 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeValueAsFloat(char const*)const
// long double glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeValueAsFloat( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this, char *a2);
// [0xe9a1f0] (80 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeValueSafe(char const*)const
// const void *glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeValueSafe( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this, char *a2);
// [0xe9a240] (60 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeValue(char const*)const
// const void *glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::getAttributeValue( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this, char *a2);
// [0xe9a280] (2720 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::parseOpeningXMLElement(void)
// void glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::parseOpeningXMLElement( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this);
// [0xe9ad20] (1178 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::parseCurrentNode(void)
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::parseCurrentNode( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this);
// [0xe9b1c0] (146 bytes) glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::read(void)
// int glitch::io::CXMLReaderImpl<unsigned long,glitch::io::IXMLBase>::read( glitch::io::CXMLReaderImpl<unsigned long, glitch::io::IXMLBase> *this);
// [0xe9b260] (2975 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::parseOpeningXMLElement(void)
// void glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::parseOpeningXMLElement( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this);
// [0xe9be00] (1187 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::parseCurrentNode(void)
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::parseCurrentNode( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this);
// [0xe9c2b0] (146 bytes) glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::read(void)
// int glitch::io::CXMLReaderImpl<unsigned short,glitch::io::IXMLBase>::read( glitch::io::CXMLReaderImpl<unsigned short, glitch::io::IXMLBase> *this);
// [0xe9c350] (2243 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::parseOpeningXMLElement(void)
// void glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::parseOpeningXMLElement( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this);
// [0xe9cc20] (1173 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::parseCurrentNode(void)
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::parseCurrentNode( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this);
// [0xe9d0c0] (146 bytes) glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::read(void)
// int glitch::io::CXMLReaderImpl<char,glitch::io::IXMLBase>::read( glitch::io::CXMLReaderImpl<char, glitch::io::IXMLBase> *this);
// [0xe9dda0] (122 bytes) glitch::io::CAttributes::getString(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getString( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xe9de20] (122 bytes) glitch::io::CAttributes::getStringW(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getStringW( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xe9dea0] (16 bytes) glitch::io::CAttributes::getAttributeCount(void)const
// int glitch::io::CAttributes::getAttributeCount(glitch::io::CAttributes *this);
// [0xe9deb0] (36 bytes) glitch::io::CAttributes::getAttributeName(int)
// int glitch::io::CAttributes::getAttributeName(glitch::io::CAttributes *this, unsigned int a2);
// [0xe9dee0] (84 bytes) glitch::io::CAttributes::getColor(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getColor( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xe9df40] (114 bytes) glitch::io::CAttributes::getVector2d(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getVector2d( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xe9dfc0] (122 bytes) glitch::io::CAttributes::getVector3d(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getVector3d( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xe9e040] (91 bytes) glitch::io::CAttributes::getVector2di(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getVector2di( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xe9e0a0] (99 bytes) glitch::io::CAttributes::getVector3di(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getVector3di( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xe9e110] (111 bytes) glitch::io::CAttributes::getRect(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getRect( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xe9e180] (52 bytes) glitch::io::CAttributes::getEnum(int)
// int glitch::io::CAttributes::getEnum(glitch::io::CAttributes *this, unsigned int a2);
// [0xe9e1c0] (114 bytes) glitch::io::CAttributes::addEnum(char const*,int,char const* const*,bool)
// int glitch::io::CAttributes::addEnum( glitch::io::CAttributes *this, const char *a2, int a3, const char *const *a4, bool a5);
// [0xe9e240] (56 bytes) glitch::io::CAttributes::setAttribute(int,glitch::video::SColor)
// unsigned int glitch::io::CAttributes::setAttribute(int a1, unsigned int a2, int a3);
// [0xe9e280] (151 bytes) glitch::io::CAttributes::getQuaternion(int)
// int glitch::io::CAttributes::getQuaternion(int64_t this, int a2);
// [0xe9e320] (161 bytes) glitch::io::CAttributes::getBox3d(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getBox3d(glitch::io::CAttributes *this, int a2, int a3);
// [0xe9e3d0] (151 bytes) glitch::io::CAttributes::getPlane3d(int)
// int glitch::io::CAttributes::getPlane3d(int64_t this, int a2);
// [0xe9e470] (203 bytes) glitch::io::CAttributes::getTriangle3d(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getTriangle3d( glitch::io::CAttributes *this, int a2, int a3);
// [0xe9e540] (120 bytes) glitch::io::CAttributes::getLine2d(int)
// int glitch::io::CAttributes::getLine2d(int64_t this, int a2);
// [0xe9e5c0] (161 bytes) glitch::io::CAttributes::getLine3d(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getLine3d(glitch::io::CAttributes *this, int a2, int a3);
// [0xe9e670] (56 bytes) glitch::io::CAttributes::getUserPointer(int)
// int glitch::io::CAttributes::getUserPointer(glitch::io::CAttributes *this, int a2);
// [0xe9e6b0] (20 bytes) glitch::io::CAttributes::pop(void)
// glitch::io::CAttributes *glitch::io::CAttributes::pop(glitch::io::CAttributes *this);
// [0xe9e6d0] (17 bytes) glitch::io::CAttributes::getGroupsCount(void)
// int glitch::io::CAttributes::getGroupsCount(glitch::io::CAttributes *this);
// [0xe9e6f0] (27 bytes) glitch::io::CAttributes::setGroup(unsigned int)
// glitch::io::CAttributes *glitch::io::CAttributes::setGroup(glitch::io::CAttributes *this, unsigned int a2);
// [0xe9e710] (13 bytes) glitch::io::CAttributes::getGroupName(void)
// int glitch::io::CAttributes::getGroupName(glitch::io::CAttributes *this);
// [0xe9e720] (14 bytes) glitch::io::CGlfFileList::getFileCount(void)const
// int glitch::io::CGlfFileList::getFileCount(glitch::io::CGlfFileList *this);
// [0xe9e730] (34 bytes) glitch::io::CGlfFileList::getFileName(unsigned int)const
// int glitch::io::CGlfFileList::getFileName(glitch::io::CGlfFileList *this, unsigned int a2);
// [0xe9e760] (36 bytes) glitch::io::CGlfFileList::isDirectory(unsigned int)const
// int glitch::io::CGlfFileList::isDirectory(glitch::io::CGlfFileList *this, unsigned int a2);
// [0xe9e790] (22 bytes) glitch::io::CGlfFileSystem::getWorkingDirectory(void)const
// void *glitch::io::CGlfFileSystem::getWorkingDirectory();
// [0xe9e7b0] (31 bytes) glitch::io::CGlfFileSystem::existFile(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)const
// int glitch::io::CGlfFileSystem::existFile( glitch::io::CGlfFileSystem *this, const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2);
// [0xe9e7d0] (46 bytes) glitch::io::CGlfReadFile::read(void *,unsigned int)
// int glitch::io::CGlfReadFile::read(glitch::io::CGlfReadFile *this, void *a2, unsigned int a3);
// [0xe9e800] (81 bytes) glitch::io::CGlfReadFile::readAsync(void *,unsigned int,void (*)(int,int,glitch::io::IReadFile *,void *),void *)
// int glitch::io::CGlfReadFile::readAsync(int a1, int a2, int a3, int a4, int a5);
// [0xe9e860] (55 bytes) glitch::io::CGlfReadFile::seek(long,bool)
// int glitch::io::CGlfReadFile::seek(glitch::io::CGlfReadFile *this, int a2, bool a3);
// [0xe9e8a0] (24 bytes) glitch::io::CGlfReadFile::getSize(void)const
// int glitch::io::CGlfReadFile::getSize(glitch::io::CGlfReadFile *this);
// [0xe9e8c0] (24 bytes) glitch::io::CGlfReadFile::getPos(void)const
// int glitch::io::CGlfReadFile::getPos(glitch::io::CGlfReadFile *this);
// [0xe9e8e0] (12 bytes) glitch::io::CGlfReadFile::getFileName(void)const
// int glitch::io::CGlfReadFile::getFileName(glitch::io::CGlfReadFile *this);
// [0xe9e8f0] (12 bytes) glitch::io::CGlfReadFile::getFullPath(void)const
// int glitch::io::CGlfReadFile::getFullPath(glitch::io::CGlfReadFile *this);
// [0xe9e900] (9 bytes) glitch::io::CGlfWriteFile::flush(void)
// void glitch::io::CGlfWriteFile::flush();
// [0xe9e910] (12 bytes) glitch::io::CGlfWriteFile::getFileName(void)const
// int glitch::io::CGlfWriteFile::getFileName(glitch::io::CGlfWriteFile *this);
// [0xe9e920] (134 bytes) glitch::io::CLimitReadFile::read(void *,unsigned int)
// int glitch::io::CLimitReadFile::read(glitch::io::CLimitReadFile *this, void *a2, unsigned int a3);
// [0xe9e9b0] (81 bytes) glitch::io::CLimitReadFile::readAsync(void *,unsigned int,void (*)(int,int,glitch::io::IReadFile *,void *),void *)
// int glitch::io::CLimitReadFile::readAsync(int a1, int a2, int a3, int a4, int a5);
// [0xe9ea10] (118 bytes) glitch::io::CLimitReadFile::readAsync(void *,unsigned int,long,void (*)(int,int,glitch::io::IReadFile *,void *),void *)
// int glitch::io::CLimitReadFile::readAsync(int a1, int a2, int a3, int a4, int a5, int a6);
// [0xe9ea90] (135 bytes) glitch::io::CLimitReadFile::seek(long,bool)
// int glitch::io::CLimitReadFile::seek(glitch::io::CLimitReadFile *this, int a2, bool a3);
// [0xe9eb20] (13 bytes) glitch::io::CLimitReadFile::getSize(void)const
// int glitch::io::CLimitReadFile::getSize(glitch::io::CLimitReadFile *this);
// [0xe9eb30] (13 bytes) glitch::io::CLimitReadFile::getPos(void)const
// int glitch::io::CLimitReadFile::getPos(glitch::io::CLimitReadFile *this);
// [0xe9eb40] (12 bytes) glitch::io::CLimitReadFile::getFileName(void)const
// int glitch::io::CLimitReadFile::getFileName(glitch::io::CLimitReadFile *this);
// [0xe9eb50] (12 bytes) glitch::io::CLimitReadFile::getFullPath(void)const
// int glitch::io::CLimitReadFile::getFullPath(glitch::io::CLimitReadFile *this);
// [0xe9eb60] (74 bytes) glitch::io::CMemoryReadFile::readAsync(void *,unsigned int,void (*)(int,int,glitch::io::IReadFile *,void *),void *)
// int glitch::io::CMemoryReadFile::readAsync( int a1, int a2, int a3, void (*a4)(int, bool, int, int), int a5);
// [0xe9ebb0] (98 bytes) glitch::io::CMemoryReadFile::readAsync(void *,unsigned int,long,void (*)(int,int,glitch::io::IReadFile *,void *),void *)
// int glitch::io::CMemoryReadFile::readAsync( int a1, int a2, int a3, int a4, void (*a5)(int, bool, int, int), int a6);
// [0xe9ec20] (12 bytes) glitch::io::CMemoryReadFile::getSize(void)const
// int glitch::io::CMemoryReadFile::getSize(glitch::io::CMemoryReadFile *this);
// [0xe9ec30] (12 bytes) glitch::io::CMemoryReadFile::getPos(void)const
// int glitch::io::CMemoryReadFile::getPos(glitch::io::CMemoryReadFile *this);
// [0xe9ec40] (12 bytes) glitch::io::CMemoryReadFile::getFileName(void)const
// int glitch::io::CMemoryReadFile::getFileName(glitch::io::CMemoryReadFile *this);
// [0xe9ec50] (12 bytes) glitch::io::CMemoryReadFile::getFullPath(void)const
// int glitch::io::CMemoryReadFile::getFullPath(glitch::io::CMemoryReadFile *this);
// [0xe9ec60] (21 bytes) glitch::io::CMemoryReadFile::getBuffer(long *)
// int glitch::io::CMemoryReadFile::getBuffer(glitch::io::CMemoryReadFile *this, int *a2);
// [0xe9ec80] (12 bytes) glitch::io::CMemoryReadFile::isAllInMemory(void)const
// int glitch::io::CMemoryReadFile::isAllInMemory();
// [0xe9ec90] (9 bytes) glitch::io::CMemoryWriteFile::flush(void)
// void glitch::io::CMemoryWriteFile::flush();
// [0xe9eca0] (12 bytes) glitch::io::CMemoryWriteFile::getPos(void)const
// int glitch::io::CMemoryWriteFile::getPos(glitch::io::CMemoryWriteFile *this);
// [0xe9ecb0] (22 bytes) glitch::io::CMemoryWriteFile::getFileName(void)const
// const char *glitch::io::CMemoryWriteFile::getFileName();
// [0xe9ecd0] (22 bytes) glitch::io::CMemoryWriteFile::getFullPath(void)const
// const char *glitch::io::CMemoryWriteFile::getFullPath();
// [0xe9ed60] (152 bytes) glitch::io::CAttributes::getEnum(int,char const* const*)
// int glitch::io::CAttributes::getEnum(glitch::io::CAttributes *this, unsigned int a2, const char **a3);
// [0xe9ee00] (108 bytes) glitch::io::CMemoryReadFile::read(void *,unsigned int)
// signed int glitch::io::CMemoryReadFile::read(glitch::io::CMemoryReadFile *this, void *dest, size_t a3);
// [0xe9ee70] (45 bytes) glitch::io::CGlfWriteFile::getFullPath(void)const
// int glitch::io::CGlfWriteFile::getFullPath(glitch::io::CGlfWriteFile *this);
// [0xe9eea0] (37 bytes) glitch::io::CGlfWriteFile::getPos(void)const
// int glitch::io::CGlfWriteFile::getPos(glitch::io::CGlfWriteFile *this);
// [0xe9eed0] (156 bytes) glitch::io::CGlfReadFile::glfReadAsyncCallback(int,glf::Stream &,void *)
// int glitch::io::CGlfReadFile::glfReadAsyncCallback(glitch::io::CGlfReadFile *this, int a2, glf::Stream *a3);
// [0xe9ef70] (123 bytes) glitch::io::CGlfFileSystem::releaseUnusedPoolHandles(char const*)
// int glitch::io::CGlfFileSystem::releaseUnusedPoolHandles(glitch::io::CGlfFileSystem *this, char *s2);
// [0xe9eff0] (49 bytes) glitch::io::CGlfFileSystem::changeWorkingDirectoryTo(char const*)
// int glitch::io::CGlfFileSystem::changeWorkingDirectoryTo(glitch::io::CGlfFileSystem *this, char *src);
// [0xe9f9a0] (57 bytes) glitch::io::CMemoryReadFile::seek(long,bool)
// int glitch::io::CMemoryReadFile::seek(glitch::io::CMemoryReadFile *this, int a2, bool a3);
// [0xe9f9e0] (70 bytes) glitch::io::CGlfWriteFile::seek(long,bool)
// int glitch::io::CGlfWriteFile::seek(glitch::io::CGlfWriteFile *this, int a2, bool a3);
// [0xe9fa30] (61 bytes) glitch::io::CGlfWriteFile::write(void const*,unsigned int)
// int glitch::io::CGlfWriteFile::write(glitch::io::CGlfWriteFile *this, void *a2, unsigned int a3);
// [0xe9fa70] (117 bytes) glitch::io::CGlfWriteFileCRC::write(void const*,unsigned int)
// int glitch::io::CGlfWriteFileCRC::write(glf::CrcChecker **this, glf::CrcChecker *a2, void *a3);
// [0xe9faf0] (60 bytes) glitch::io::CAttributes::setAttribute(int,void *)
// int glitch::io::CAttributes::setAttribute(glitch::io::CAttributes *this, int a2, void *a3);
// [0xe9fb30] (85 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::quaternion const&)
// int glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, int a2, const glitch::core::quaternion *a3);
// [0xe9fb90] (56 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::CMatrix4<float> const&)
// unsigned int glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, unsigned int a2, const glitch::core::CMatrix4<float> *a3);
// [0xe9fbd0] (56 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::CMatrix3<float> const&)
// unsigned int glitch::io::CAttributes::setAttribute(int a1, unsigned int a2, int a3);
// [0xe9fc10] (56 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::CMatrix2<float> const&)
// unsigned int glitch::io::CAttributes::setAttribute(int a1, unsigned int a2, int a3);
// [0xe9fc50] (56 bytes) glitch::io::CAttributes::setAttribute(int,boost::intrusive_ptr<glitch::video::ITexture>)
// unsigned int glitch::io::CAttributes::setAttribute(int a1, unsigned int a2, int a3);
// [0xe9fc90] (64 bytes) glitch::io::CAttributes::setAttribute(int,char const*,char const* const*)
// unsigned int glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, unsigned int a2, const char *a3, const char *const *a4);
// [0xe9fcd0] (64 bytes) glitch::io::CAttributes::setAttribute(int,void *,int)
// unsigned int glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, unsigned int a2, void *a3, int a4);
// [0xe9fd10] (56 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::vector4d<int> const&)
// unsigned int glitch::io::CAttributes::setAttribute(int a1, unsigned int a2, int a3);
// [0xe9fd50] (56 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::vector3d<int> const&)
// unsigned int glitch::io::CAttributes::setAttribute(int a1, unsigned int a2, int a3);
// [0xe9fd90] (56 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::vector4d<float> const&)
// unsigned int glitch::io::CAttributes::setAttribute(int a1, unsigned int a2, int a3);
// [0xe9fdd0] (56 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::vector3d<float> const&)
// unsigned int glitch::io::CAttributes::setAttribute(int a1, unsigned int a2, int a3);
// [0xe9fe10] (81 bytes) glitch::io::CAttributes::setAttribute(int,glitch::video::SColorf const&)
// unsigned int glitch::io::CAttributes::setAttribute(int a1, unsigned int a2, uint32_t *a3);
// [0xe9fe70] (56 bytes) glitch::io::CAttributes::setAttribute(int,float)
// unsigned int glitch::io::CAttributes::setAttribute(glitch::io::CAttributes *this, unsigned int a2, float a3);
// [0xe9feb0] (56 bytes) glitch::io::CAttributes::setAttribute(int,int)
// unsigned int glitch::io::CAttributes::setAttribute(glitch::io::CAttributes *this, unsigned int a2, int a3);
// [0xe9fef0] (65 bytes) glitch::io::CAttributes::setAttribute(int,bool)
// unsigned int glitch::io::CAttributes::setAttribute(glitch::io::CAttributes *this, unsigned int a2, bool a3);
// [0xe9ff40] (56 bytes) glitch::io::CAttributes::setAttribute(int,wchar_t const*)
// unsigned int glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, unsigned int a2, const wchar_t *a3);
// [0xe9ff80] (56 bytes) glitch::io::CAttributes::setAttribute(int,char const*)
// unsigned int glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, unsigned int a2, const char *a3);
// [0xe9ffc0] (61 bytes) glitch::io::CAttributes::getBinaryData(int,void *,int)
// unsigned int glitch::io::CAttributes::getBinaryData( glitch::io::CAttributes *this, unsigned int a2, void *a3, int a4);
// [0xea0000] (130 bytes) glitch::io::CAttributes::getColorf(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getColorf( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xea0090] (51 bytes) glitch::io::CAttributes::getFloat(int)
// long double glitch::io::CAttributes::getFloat(glitch::io::CAttributes *this, unsigned int a2);
// [0xea00d0] (49 bytes) glitch::io::CAttributes::getInt(int)
// int glitch::io::CAttributes::getInt(glitch::io::CAttributes *this, unsigned int a2);
// [0xea0110] (49 bytes) glitch::io::CAttributes::getBool(int)
// int glitch::io::CAttributes::getBool(glitch::io::CAttributes *this, unsigned int a2);
// [0xea0150] (81 bytes) glitch::io::CAttributes::getAttributeTypeString(int)
// void *glitch::io::CAttributes::getAttributeTypeString(glitch::io::CAttributes *this, unsigned int a2);
// [0xea01b0] (68 bytes) glitch::io::CAttributes::getAttributeType(int)
// int glitch::io::CAttributes::getAttributeType(glitch::io::CAttributes *this, unsigned int a2);
// [0xea02b0] (119 bytes) glitch::io::CAttributes::getVector4d(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getVector4d( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xea0330] (109 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::line3d<float> const&)
// int glitch::io::CAttributes::setAttribute(int a1, int a2, uint32_t *a3);
// [0xea03a0] (130 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::triangle3d<float> const&)
// int glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, int a2, const glitch::core::triangle3d<float> *a3);
// [0xea0430] (95 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::plane3d<float> const&)
// int glitch::io::CAttributes::setAttribute(int a1, int a2, uint32_t *a3);
// [0xea0490] (109 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::aabbox3d<float> const&)
// int glitch::io::CAttributes::setAttribute(int a1, int a2, uint32_t *a3);
// [0xea0500] (122 bytes) glitch::io::CAttributes::getMatrix2(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getMatrix2( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xea0580] (148 bytes) glitch::io::CAttributes::getMatrix3(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getMatrix3( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xea0620] (111 bytes) glitch::io::CAttributes::getVector4di(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getVector4di( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xea0690] (91 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::rect<int> const&)
// unsigned int glitch::io::CAttributes::setAttribute(int a1, unsigned int a2, uint32_t *a3);
// [0xea06f0] (77 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::vector2d<int> const&)
// unsigned int glitch::io::CAttributes::setAttribute(int a1, unsigned int a2, uint32_t *a3);
// [0xea0740] (95 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::line2d<float> const&)
// int glitch::io::CAttributes::setAttribute(int a1, int a2, uint32_t *a3);
// [0xea07a0] (77 bytes) glitch::io::CAttributes::setAttribute(int,glitch::core::vector2d<float> const&)
// unsigned int glitch::io::CAttributes::setAttribute(int a1, unsigned int a2, uint32_t *a3);
// [0xea0d80] (108 bytes) glitch::io::CGlfFileSystem::releaseUnusedPoolHandles(void)
// int glitch::io::CGlfFileSystem::releaseUnusedPoolHandles(glitch::io::CGlfFileSystem *this);
// [0xea2a00] (158 bytes) glitch::io::CAttributes::findAttribute(char const*)
// int glitch::io::CAttributes::findAttribute(glitch::io::CAttributes *this, char *s);
// [0xea3910] (306 bytes) glitch::io::CGlfFileSystem::getFileDir(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)const
// char **glitch::io::CGlfFileSystem::getFileDir( char **this, const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2, uint8_t **a3);
// [0xea4cd0] (13 bytes) glitch::io::CGlfFileSystem::createAndWriteTempFile(void)
// glitch::io::CGlfFileSystem *glitch::io::CGlfFileSystem::createAndWriteTempFile( glitch::io::CGlfFileSystem *this);
// [0xea4ce0] (115 bytes) glitch::io::CGlfFileSystem::createXMLWriter(boost::intrusive_ptr<glitch::io::IWriteFile> const&)
// int *glitch::io::CGlfFileSystem::createXMLWriter(int *a1, int a2, int *a3);
// [0xea4de0] (86 bytes) glitch::io::CAttributes::getLight(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getLight( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xea4ec0] (83 bytes) glitch::io::CAttributes::getTexture(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getTexture( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xea5a70] (144 bytes) glitch::io::CGlfFileSystem::createXMLWriter(char const*)
// glitch::io::CGlfFileSystem *glitch::io::CGlfFileSystem::createXMLWriter( glitch::io::CGlfFileSystem *this, const char *a2);
// [0xea5b00] (77 bytes) glitch::io::CXMLAttributesReader::~CXMLAttributesReader()
// void glitch::io::CXMLAttributesReader::~CXMLAttributesReader(volatile int32_t **this);
// [0xea5b50] (56 bytes) glitch::io::CXMLAttributesReader::~CXMLAttributesReader()
// void glitch::io::CXMLAttributesReader::~CXMLAttributesReader(volatile int32_t **this);
// [0xea5b90] (77 bytes) glitch::io::CXMLAttributesWriter::~CXMLAttributesWriter()
// void glitch::io::CXMLAttributesWriter::~CXMLAttributesWriter(volatile int32_t **this);
// [0xea5be0] (56 bytes) glitch::io::CXMLAttributesWriter::~CXMLAttributesWriter()
// void glitch::io::CXMLAttributesWriter::~CXMLAttributesWriter(volatile int32_t **this);
// [0xea5c90] (646 bytes) glitch::io::CGlfFileSystem::addFolderFileArchive(char const*,bool,bool)
// int glitch::io::CGlfFileSystem::addFolderFileArchive( volatile int32_t ***this, char *a2, bool a3, bool a4);
// [0xea6020] (173 bytes) glitch::io::CGlfFileSystem::clear(void)
// volatile int32_t **glitch::io::CGlfFileSystem::clear(glitch::io::CGlfFileSystem *this);
// [0xea60d0] (208 bytes) glitch::io::CGlfFileSystem::~CGlfFileSystem()
// void glitch::io::CGlfFileSystem::~CGlfFileSystem(volatile int32_t ***this);
// [0xea61a0] (56 bytes) glitch::io::CGlfFileSystem::~CGlfFileSystem()
// void glitch::io::CGlfFileSystem::~CGlfFileSystem(volatile int32_t ***this);
// [0xea61e0] (631 bytes) glitch::io::CGlfFileSystem::removeFileArchive(char const*)
// int glitch::io::CGlfFileSystem::removeFileArchive(glitch::io::CGlfFileSystem *this, char *s1);
// [0xea6460] (192 bytes) glitch::io::CGlfFileSystem::createXMLReader(char const*)
// volatile int32_t **glitch::io::CGlfFileSystem::createXMLReader( volatile int32_t **this, const char *a2);
// [0xea6520] (709 bytes) glitch::io::CGlfFileSystem::addZipFileArchive(char const*,bool,bool,unsigned int)
// int glitch::io::CGlfFileSystem::addZipFileArchive( glitch::io::CGlfFileSystem *this, const char *a2, bool a3, bool a4, unsigned int a5);
// [0xeb2a70] (119 bytes) glitch::io::CAttributes::CContext::CContext(char const*)
// glitch::io::CAttributes::CContext *glitch::io::CAttributes::CContext::CContext( glitch::io::CAttributes::CContext *this, const char *a2);
// [0xeb2af0] (125 bytes) glitch::io::CAttributes::CContext::clear(void)
// volatile int32_t **glitch::io::CAttributes::CContext::clear(glitch::io::CAttributes::CContext *this);
// [0xeb2b70] (68 bytes) glitch::io::CAttributes::clear(void)
// char *glitch::io::CAttributes::clear(glitch::io::CAttributes *this);
// [0xeb2bc0] (157 bytes) glitch::io::CAttributes::CContext::hasContext(char const*)
// int glitch::io::CAttributes::CContext::hasContext(glitch::io::CAttributes::CContext *this, char *s);
// [0xeb2c60] (681 bytes) glitch::io::CAttributes::CContext::getContext(char const*,bool)
// volatile int32_t *glitch::io::CAttributes::CContext::getContext( glitch::io::CAttributes::CContext *this, char *s, bool a3);
// [0xeb2f10] (148 bytes) glitch::io::CAttributes::CAttributes(boost::intrusive_ptr<glitch::video::IVideoDriver> const&,bool)
// uint32_t *glitch::io::CAttributes::CAttributes(uint32_t *a1, uint32_t **a2, uint8_t a3);
// [0xeb2fb0] (166 bytes) glitch::io::CGlfFileSystem::createEmptyAttributes(glitch::video::IVideoDriver *)
// glitch::io::CGlfFileSystem *glitch::io::CGlfFileSystem::createEmptyAttributes( glitch::io::CGlfFileSystem *this, glitch::video::IVideoDriver *a2, uint32_t *a3);
// [0xeb3060] (165 bytes) glitch::io::CAttributes::getAttributeP(char const*)
// int glitch::io::CAttributes::getAttributeP(glitch::io::CAttributes *this, char *s);
// [0xeb3110] (61 bytes) glitch::io::CAttributes::getUserPointer(char const*)
// int glitch::io::CAttributes::getUserPointer(glitch::io::CAttributes *this, char *a2);
// [0xeb3150] (158 bytes) glitch::io::CAttributes::getLine3d(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getLine3d( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb31f0] (200 bytes) glitch::io::CAttributes::getTriangle3d(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getTriangle3d( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb32c0] (130 bytes) glitch::io::CAttributes::getPlane3d(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getPlane3d( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3350] (158 bytes) glitch::io::CAttributes::getBox3d(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getBox3d( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb33f0] (130 bytes) glitch::io::CAttributes::getQuaternion(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getQuaternion( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3480] (145 bytes) glitch::io::CAttributes::getMatrix3(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getMatrix3( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3520] (112 bytes) glitch::io::CAttributes::getMatrix2(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getMatrix2( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3590] (47 bytes) glitch::io::CAttributes::existsAttribute(char const*)
// bool glitch::io::CAttributes::existsAttribute(glitch::io::CAttributes *this, char *a2);
// [0xeb35c0] (65 bytes) glitch::io::CAttributes::getAttributeTypeString(char const*)
// void *glitch::io::CAttributes::getAttributeTypeString(glitch::io::CAttributes *this, char *a2);
// [0xeb3610] (64 bytes) glitch::io::CAttributes::getAttributeType(char const*)
// int glitch::io::CAttributes::getAttributeType(glitch::io::CAttributes *this, char *a2);
// [0xeb3650] (96 bytes) glitch::io::CAttributes::getLight(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getLight( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb36b0] (96 bytes) glitch::io::CAttributes::getTexture(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getTexture( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3710] (144 bytes) glitch::io::CAttributes::getEnum(char const*,char const* const*)
// int glitch::io::CAttributes::getEnum(glitch::io::CAttributes *this, char *a2, const char **a3);
// [0xeb37a0] (61 bytes) glitch::io::CAttributes::getEnum(char const*)
// int glitch::io::CAttributes::getEnum(glitch::io::CAttributes *this, char *a2);
// [0xeb37e0] (70 bytes) glitch::io::CAttributes::getBinaryData(char const*,void *,int)
// int glitch::io::CAttributes::getBinaryData(glitch::io::CAttributes *this, char *a2, void *a3, int a4);
// [0xeb3830] (106 bytes) glitch::io::CAttributes::getVector4di(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getVector4di( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb38a0] (110 bytes) glitch::io::CAttributes::getVector3di(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getVector3di( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3910] (103 bytes) glitch::io::CAttributes::getVector2di(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getVector2di( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3980] (108 bytes) glitch::io::CAttributes::getVector4d(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getVector4d( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb39f0] (110 bytes) glitch::io::CAttributes::getVector3d(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getVector3d( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3a60] (106 bytes) glitch::io::CAttributes::getRect(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getRect( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3ad0] (115 bytes) glitch::io::CAttributes::getColorf(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getColorf( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3b50] (86 bytes) glitch::io::CAttributes::getColor(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getColor( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3bb0] (58 bytes) glitch::io::CAttributes::getFloat(char const*)
// long double glitch::io::CAttributes::getFloat(glitch::io::CAttributes *this, char *a2);
// [0xeb3bf0] (58 bytes) glitch::io::CAttributes::getInt(char const*)
// int glitch::io::CAttributes::getInt(glitch::io::CAttributes *this, char *a2);
// [0xeb3c30] (58 bytes) glitch::io::CAttributes::getBool(char const*)
// int glitch::io::CAttributes::getBool(glitch::io::CAttributes *this, char *a2);
// [0xeb3c70] (101 bytes) glitch::io::CAttributes::getStringW(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getStringW( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3ce0] (101 bytes) glitch::io::CAttributes::getString(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getString( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3d50] (130 bytes) glitch::io::CAttributes::getLine2d(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getLine2d( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3de0] (103 bytes) glitch::io::CAttributes::getVector2d(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getVector2d( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3e50] (110 bytes) glitch::io::CAttributes::getArray(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getArray( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb3ec0] (86 bytes) glitch::io::CBinaryAttributesReader::CBinaryAttributesReader(boost::intrusive_ptr<glitch::io::IReadFile> const&,glitch::video::IVideoDriver *)
// struct glitch::io::CBinaryAttributesReader *glitch::io::CBinaryAttributesReader::CBinaryAttributesReader( glitch::io::CBinaryAttributesReader *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, glitch::video::IVideoDriver *a3);
// [0xeb3f20] (70 bytes) glitch::io::CBinaryAttributesWriter::CBinaryAttributesWriter(glitch::io::IWriteFile *,glitch::video::IVideoDriver *,glitch::os::E_ENDIAN)
// int glitch::io::CBinaryAttributesWriter::CBinaryAttributesWriter(int a1, int a2, int a3, int a4);
// [0xeb3f70] (143 bytes) glitch::io::CGlfFileSystem::CGlfFileSystem(glf::Fs &)
// glitch::io::CGlfFileSystem *glitch::io::CGlfFileSystem::CGlfFileSystem( glitch::io::CGlfFileSystem *this, glf::Fs *a2);
// [0xeb4000] (107 bytes) glitch::io::createFileSystem(glf::Fs &)
// glitch::io *glitch::io::createFileSystem(glitch::io *this, glf::Fs *a2);
// [0xeb4070] (119 bytes) glitch::io::CGlfFileSystem::open(glf::FileStream &,char const*,glf::ios::openflag,bool)
// int glitch::io::CGlfFileSystem::open(int a1, char *a2, char *a3, char a4);
// [0xeb40f0] (95 bytes) glitch::io::CGlfWriteFile::openFile(bool)
// int glitch::io::CGlfWriteFile::openFile(glitch::io::CGlfWriteFile *this, bool a2);
// [0xeb4150] (128 bytes) glitch::io::CGlfWriteFile::CGlfWriteFile(char const*,bool)
// glitch::io::CGlfWriteFile *glitch::io::CGlfWriteFile::CGlfWriteFile( glitch::io::CGlfWriteFile *this, const char *a2, bool a3);
// [0xeb41d0] (128 bytes) glitch::io::CGlfWriteFileCRC::CGlfWriteFileCRC(char const*,bool)
// glitch::io::CGlfWriteFileCRC *glitch::io::CGlfWriteFileCRC::CGlfWriteFileCRC( glitch::io::CGlfWriteFileCRC *this, glf::CrcChecker *a2, bool a3);
// [0xeb4250] (232 bytes) glitch::io::createWriteFile(char const*,bool,bool)
// glitch::io *glitch::io::createWriteFile(glitch::io *this, glf::CrcChecker *a2, bool a3, bool a4);
// [0xeb4340] (82 bytes) glitch::io::CGlfFileSystem::createAndWriteFile(char const*,bool,bool)
// glitch::io::CGlfFileSystem *glitch::io::CGlfFileSystem::createAndWriteFile( glitch::io::CGlfFileSystem *this, const char *a2, char *a3, bool a4, bool a5);
// [0xeb43a0] (13 bytes) glitch::io::CGlfWriteFileCRC::begin(void)
// glitch::io::CGlfWriteFileCRC *glitch::io::CGlfWriteFileCRC::begin(glitch::io::CGlfWriteFileCRC *this);
// [0xeb43b0] (232 bytes) glitch::io::CGlfWriteFileCRC::end(void)
// void glitch::io::CGlfWriteFileCRC::end(glf::CrcChecker **this);
// [0xeb44a0] (82 bytes) glitch::io::CMemoryReadFile::CMemoryReadFile(bool)
// glitch::io::CMemoryReadFile *glitch::io::CMemoryReadFile::CMemoryReadFile( glitch::io::CMemoryReadFile *this, bool a2);
// [0xeb4500] (233 bytes) glitch::io::CMemoryReadFile::CMemoryReadFile(void const*,long,char const*,bool,bool)
// int glitch::io::CMemoryReadFile::CMemoryReadFile( glitch::io::CMemoryReadFile *this, const void *a2, int a3, const char *a4, bool a5, bool a6);
// [0xeb45f0] (176 bytes) glitch::io::CGlfFileSystem::createMemoryReadFile(void *,int,char const*,bool)
// glitch::io::CGlfFileSystem *glitch::io::CGlfFileSystem::createMemoryReadFile( glitch::io::CGlfFileSystem *this, void *a2, void *a3, const char *a4, char *a5, bool a6);
// [0xeb46a0] (22 bytes) glitch::io::CMemoryReadFile::isValid(void)const
// bool glitch::io::CMemoryReadFile::isValid(glitch::io::CMemoryReadFile *this);
// [0xeb46c0] (154 bytes) glitch::io::createMemoryReadFile(void *,long,char const*,bool)
// glitch::io *glitch::io::createMemoryReadFile(glitch::io *this, void *a2, int a3, char *a4, bool a5);
// [0xeb4760] (158 bytes) glitch::io::CMemoryWriteFile::CMemoryWriteFile(unsigned int,bool)
// void (**glitch::io::CMemoryWriteFile::CMemoryWriteFile( glitch::io::CMemoryWriteFile *this, size_t a2, bool a3))(glitch::io::CMemoryWriteFile *__hidden this);
// [0xeb4800] (19 bytes) glitch::io::CMemoryWriteFile::getBuffer(void)const
// int glitch::io::CMemoryWriteFile::getBuffer(glitch::io::CMemoryWriteFile *this);
// [0xeb4820] (19 bytes) glitch::io::CMemoryWriteFile::getBuffer(void)
// int glitch::io::CMemoryWriteFile::getBuffer(glitch::io::CMemoryWriteFile *this);
// [0xeb4840] (13 bytes) glitch::io::CMemoryWriteFile::getBufferSize(void)const
// int glitch::io::CMemoryWriteFile::getBufferSize(glitch::io::CMemoryWriteFile *this);
// [0xeb4850] (20 bytes) glitch::io::CPakReader::getFileCount(void)
// int glitch::io::CPakReader::getFileCount(glitch::io::CPakReader *this);
// [0xeb4870] (18 bytes) glitch::io::CPakReader::getFileInfo(int)const
// int glitch::io::CPakReader::getFileInfo(glitch::io::CPakReader *this, int a2);
// [0xeb4890] (100 bytes) glitch::io::CXMLAttributesReader::CXMLAttributesReader(boost::intrusive_ptr<glitch::io::IIrrXMLReader<wchar_t,glitch::IReferenceCounted>> const&,bool,wchar_t const*)
// int glitch::io::CXMLAttributesReader::CXMLAttributesReader(int a1, int *a2, char a3, int a4);
// [0xeb4900] (100 bytes) glitch::io::CXMLAttributesWriter::CXMLAttributesWriter(boost::intrusive_ptr<glitch::io::IXMLWriter> const&,bool,wchar_t const*)
// int glitch::io::CXMLAttributesWriter::CXMLAttributesWriter(int a1, int *a2, char a3, int a4);
// [0xeb4970] (128 bytes) glitch::io::CAttributes::getStringW(char const*,wchar_t *)
// void glitch::io::CAttributes::getStringW(glitch::io::CAttributes *this, char *a2, wchar_t *dest);
// [0xeb49f0] (325 bytes) glitch::io::CAttributes::setAttribute(int,std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>> const&)
// void glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, int a2, const std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> **a3);
// [0xeb4b40] (135 bytes) glitch::io::CMemoryReadFile::~CMemoryReadFile()
// void glitch::io::CMemoryReadFile::~CMemoryReadFile(glitch::io::CMemoryReadFile *this);
// [0xeb4bd0] (56 bytes) glitch::io::CMemoryReadFile::~CMemoryReadFile()
// void glitch::io::CMemoryReadFile::~CMemoryReadFile(glitch::io::CMemoryReadFile *this);
// [0xeb4c10] (96 bytes) glitch::io::CGlfWriteFile::~CGlfWriteFile()
// void glitch::io::CGlfWriteFile::~CGlfWriteFile(glitch::io::CGlfWriteFile *this);
// [0xeb4c70] (45 bytes) glitch::io::CGlfWriteFileCRC::~CGlfWriteFileCRC()
// void glitch::io::CGlfWriteFileCRC::~CGlfWriteFileCRC(glitch::io::CGlfWriteFileCRC *this);
// [0xeb4ca0] (56 bytes) glitch::io::CGlfWriteFileCRC::~CGlfWriteFileCRC()
// void glitch::io::CGlfWriteFileCRC::~CGlfWriteFileCRC(glitch::io::CGlfWriteFileCRC *this);
// [0xeb4ce0] (56 bytes) glitch::io::CGlfWriteFile::~CGlfWriteFile()
// void glitch::io::CGlfWriteFile::~CGlfWriteFile(glitch::io::CGlfWriteFile *this);
// [0xeb4d20] (109 bytes) glitch::io::CGlfReadFile::~CGlfReadFile()
// void glitch::io::CGlfReadFile::~CGlfReadFile(glitch::io::CGlfReadFile *this);
// [0xeb4d90] (56 bytes) glitch::io::CGlfReadFile::~CGlfReadFile()
// void glitch::io::CGlfReadFile::~CGlfReadFile(glitch::io::CGlfReadFile *this);
// [0xeb4dd0] (99 bytes) glitch::io::CLimitReadFile::~CLimitReadFile()
// void glitch::io::CLimitReadFile::~CLimitReadFile(volatile int32_t **this);
// [0xeb4e40] (56 bytes) glitch::io::CLimitReadFile::~CLimitReadFile()
// void glitch::io::CLimitReadFile::~CLimitReadFile(volatile int32_t **this);
// [0xeb4fd0] (164 bytes) glitch::io::CAttributes::CContext::~CContext()
// void glitch::io::CAttributes::CContext::~CContext(glitch::io::CAttributes::CContext *this);
// [0xeb5080] (56 bytes) glitch::io::CAttributes::CContext::~CContext()
// void glitch::io::CAttributes::CContext::~CContext(glitch::io::CAttributes::CContext *this);
// [0xeb50c0] (125 bytes) glitch::io::CAttributes::getString(char const*,char *)
// void glitch::io::CAttributes::getString(glitch::io::CAttributes *this, char *a2, char *dest);
// [0xeb5140] (282 bytes) glitch::io::CAttributes::push(int)
// void glitch::io::CAttributes::push(glitch::io::CAttributes *this, int a2);
// [0xeb5260] (274 bytes) glitch::io::CAttributes::push(char const*,int)
// void glitch::io::CAttributes::push(glitch::io::CAttributes *this, const char *a2, int a3);
// [0xeb5380] (107 bytes) glitch::io::CAttributes::push(char const*)
// void glitch::io::CAttributes::push(glitch::io::CAttributes::CContext **this, const char *a2);
// [0xeb53f0] (136 bytes) glitch::io::CPakReader::~CPakReader()
// void glitch::io::CPakReader::~CPakReader(glitch::io::CPakReader *this);
// [0xeb5480] (56 bytes) glitch::io::CPakReader::~CPakReader()
// void glitch::io::CPakReader::~CPakReader(glitch::io::CPakReader *this);
// [0xeb54c0] (134 bytes) glitch::io::CAttributes::~CAttributes()
// void glitch::io::CAttributes::~CAttributes(glitch::io::CAttributes *this);
// [0xeb5550] (56 bytes) glitch::io::CAttributes::~CAttributes()
// void glitch::io::CAttributes::~CAttributes(glitch::io::CAttributes *this);
// [0xeb5fc0] (679 bytes) glitch::io::CGlfFileSystem::getFileBasename(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&,bool)const
// glitch::io::CGlfFileSystem *glitch::io::CGlfFileSystem::getFileBasename( glitch::io::CGlfFileSystem *this, const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a3, char a4);
// [0xeb6790] (275 bytes) glitch::io::CMemoryReadFile::clone(bool)const
// glitch::io::CMemoryReadFile *glitch::io::CMemoryReadFile::clone( glitch::io::CMemoryReadFile *this, uint32_t *a2, char a3);
// [0xeb68b0] (435 bytes) glitch::io::CGlfFileList::getFullFileName(unsigned int)
// int glitch::io::CGlfFileList::getFullFileName(glitch::io::CGlfFileList *this, unsigned int a2);
// [0xeb6a70] (116 bytes) glitch::io::CAttributes::getMatrix(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getMatrix( glitch::io::CAttributes *this, int a2, unsigned int a3);
// [0xeb6fe0] (106 bytes) glitch::io::CAttributes::getMatrix(char const*)
// glitch::io::CAttributes *glitch::io::CAttributes::getMatrix( glitch::io::CAttributes *this, glitch::io::CAttributes *a2, char *a3);
// [0xeb9d30] (213 bytes) glitch::io::CAttributes::setAttribute(int,boost::intrusive_ptr<glitch::video::CLight>)
// void glitch::io::CAttributes::setAttribute(int a1, unsigned int a2, volatile int32_t **a3);
// [0xec6e20] (190 bytes) glitch::io::CAttributes::getArray(int)
// glitch::io::CAttributes *glitch::io::CAttributes::getArray(glitch::io::CAttributes *this, int a2, int a3);
// [0xec6ee0] (120 bytes) glitch::io::CAttributes::getAttributeEnumerationLiteralsOfEnumeration(int,std::vector<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>> &)
// unsigned int glitch::io::CAttributes::getAttributeEnumerationLiteralsOfEnumeration( glitch::io::CAttributes *this, unsigned int a2, std::vector<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> *a3);
// [0xec6f60] (112 bytes) glitch::io::CAttributes::getAttributeEnumerationLiteralsOfEnumeration(char const*,std::vector<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>> &)
// int glitch::io::CAttributes::getAttributeEnumerationLiteralsOfEnumeration( glitch::io::CAttributes *this, char *a2, std::vector<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> *a3);
// [0xed1400] (3495 bytes) glitch::io::CBinaryAttributesWriter::writeAttribute(int,glitch::io::IAttributes *)
// void glitch::io::CBinaryAttributesWriter::writeAttribute( glitch::io::CBinaryAttributesWriter *this, int a2, glitch::io::IAttributes *a3);
// [0xed21b0] (281 bytes) glitch::io::CBinaryAttributesWriter::writeGroup(glitch::io::IAttributes *)
// void glitch::io::CBinaryAttributesWriter::writeGroup( glitch::io::CBinaryAttributesWriter *this, glitch::io::IAttributes *a2, int a3, uint32_t a4, int a5, int a6, int a7, uint32_t a8);
// [0xed22d0] (110 bytes) glitch::io::CBinaryAttributesWriter::write(glitch::io::IAttributes *)
// int glitch::io::CBinaryAttributesWriter::write( glitch::io::CBinaryAttributesWriter *this, glitch::io::IAttributes *a2);
// [0xed2340] (2154 bytes) glitch::io::CXMLAttributesReader::readAttributeFromXML(glitch::io::IAttributes *)
// void glitch::io::CXMLAttributesReader::readAttributeFromXML( glitch::io::CXMLAttributesReader *this, glitch::io::IAttributes *a2);
// [0xed2bb0] (2631 bytes) glitch::io::CXMLAttributesWriter::writeGroup(glitch::io::IAttributes *)
// int glitch::io::CXMLAttributesWriter::writeGroup( glitch::io::CXMLAttributesWriter *this, glitch::io::IAttributes *a2, int a3, int a4, int a5, int a6, int a7);
// [0xee1380] (205 bytes) glitch::io::CGlfReadFile::readAsync(void *,unsigned int,long,void (*)(int,int,glitch::io::IReadFile *,void *),void *)
// int glitch::io::CGlfReadFile::readAsync(int a1, int a2, int a3, int a4, int a5, int a6);
// [0xee3f90] (279 bytes) glitch::io::CGlfFileSystem::normalizePath(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>)const
// char **glitch::io::CGlfFileSystem::normalizePath(char **a1, int a2, const void **a3);
// [0xee40b0] (206 bytes) glitch::io::CGlfFileSystem::resolvePath(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)const
// glitch::io::CGlfFileSystem *glitch::io::CGlfFileSystem::resolvePath( glitch::io::CGlfFileSystem *this, const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a3);
// [0xee4180] (102 bytes) glitch::io::CPakReader::deletePathFromFilename(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> &)
// int glitch::io::CPakReader::deletePathFromFilename( glitch::io::CPakReader *this, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2);
// [0xee41f0] (233 bytes) glitch::io::CPakReader::extractFilename(glitch::io::SPakFileEntry *)
// std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *glitch::io::CPakReader::extractFilename(;
// [0xee42e0] (45 bytes) glitch::io::CMemoryReadFile::setFileName(char const*)
// int glitch::io::CMemoryReadFile::setFileName(glitch::io::CMemoryReadFile *this, const char *a2);
// [0xee4310] (66 bytes) glitch::io::CMemoryReadFile::set(void const*,long,char const*)
// int glitch::io::CMemoryReadFile::set(glitch::io::CMemoryReadFile *this, const void *a2, int a3, const char *a4);
// [0xee4360] (45 bytes) glitch::io::CLimitReadFile::setFileName(char const*)
// int glitch::io::CLimitReadFile::setFileName(glitch::io::CLimitReadFile *this, const char *a2);
// [0xee4390] (536 bytes) glitch::io::CLimitReadFile::init(boost::intrusive_ptr<glitch::io::IReadFile> const&,long,char const*,bool)
// volatile int32_t *glitch::io::CLimitReadFile::init( glitch::io::CLimitReadFile *this, volatile int32_t **a2, char *a3, char *a4, bool a5);
// [0xee45b0] (165 bytes) glitch::io::CLimitReadFile::CLimitReadFile(boost::intrusive_ptr<glitch::io::IReadFile> const&,long,char const*,char const*,bool)
// glitch::io::CLimitReadFile *glitch::io::CLimitReadFile::CLimitReadFile( glitch::io::CLimitReadFile *this, volatile int32_t **a2, char *a3, const char *a4, char *a5, bool a6);
// [0xee4660] (202 bytes) glitch::io::CLimitReadFile::clone(bool)const
// glitch::io::CLimitReadFile *glitch::io::CLimitReadFile::clone( glitch::io::CLimitReadFile *this, int a2, char a3);
// [0xee4730] (138 bytes) glitch::io::CLimitReadFile::CLimitReadFile(boost::intrusive_ptr<glitch::io::IReadFile> const&,long,char const*)
// glitch::io::CLimitReadFile *glitch::io::CLimitReadFile::CLimitReadFile( glitch::io::CLimitReadFile *this, volatile int32_t **a2, char *a3, const char *a4);
// [0xee47c0] (123 bytes) glitch::io::createLimitReadFile(char const*,boost::intrusive_ptr<glitch::io::IReadFile> const&,long)
// glitch::io *glitch::io::createLimitReadFile( glitch::io *this, char *a2, volatile int32_t **a3, char *a4);
// [0xee4840] (140 bytes) glitch::io::CPakReader::openFile(int)
// glitch::io::CPakReader *glitch::io::CPakReader::openFile(glitch::io::CPakReader *this, int a2, int a3);
// [0xee48d0] (45 bytes) glitch::io::CGlfReadFile::setFileName(char const*)
// int glitch::io::CGlfReadFile::setFileName(glitch::io::CGlfReadFile *this, const char *a2);
// [0xee4900] (199 bytes) glitch::io::CGlfReadFile::openFile(void)
// int glitch::io::CGlfReadFile::openFile(glitch::io::CGlfReadFile *this);
// [0xee49d0] (97 bytes) glitch::io::CGlfReadFile::CGlfReadFile(char const*)
// glitch::io::CGlfReadFile *glitch::io::CGlfReadFile::CGlfReadFile( glitch::io::CGlfReadFile *this, const char *a2);
// [0xee4a40] (144 bytes) glitch::io::createReadFile(char const*)
// glitch::io *glitch::io::createReadFile(glitch::io *this, char *a2);
// [0xee4ad0] (372 bytes) glitch::io::CGlfFileSystem::createAndOpenFile(char const*)
// glitch::io *glitch::io::CGlfFileSystem::createAndOpenFile( glitch::io::CGlfFileSystem *this, const char *a2, char *a3);
// [0xee4c50] (182 bytes) glitch::io::CGlfReadFile::clone(bool)const
// glitch::io::CGlfReadFile *glitch::io::CGlfReadFile::clone( glitch::io::CGlfReadFile *this, uint32_t *a2, char a3);
// [0xee4d10] (424 bytes) glitch::io::CAttributes::setAttribute(char const*,boost::intrusive_ptr<glitch::video::CLight>)
// void glitch::io::CAttributes::setAttribute(glitch::io::CAttributes *a1, char *a2, volatile int32_t **a3);
// [0xee4ec0] (278 bytes) glitch::io::CAttributes::setAttribute(char const*,boost::intrusive_ptr<glitch::video::ITexture>)
// volatile int32_t *glitch::io::CAttributes::setAttribute(glitch::io::CAttributes *a1, char *a2, int *a3);
// [0xee4fe0] (288 bytes) glitch::io::CAttributes::setAttribute(char const*,void *,int)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, char *a2, void *a3, int a4);
// [0xee5100] (471 bytes) glitch::io::CPakReader::findFile(char const*)
// int glitch::io::CPakReader::findFile(glitch::io::CPakReader *this, const char *a2);
// [0xee52e0] (263 bytes) glitch::io::CGlfFileSystem::existFile(char const*)const
// int glitch::io::CGlfFileSystem::existFile(glitch::io::CGlfFileSystem *this, char *s);
// [0xee53f0] (104 bytes) glitch::io::CPakReader::openFile(char const*)
// glitch::io::CPakReader *glitch::io::CPakReader::openFile( glitch::io::CPakReader *this, glitch::io::CPakReader *a2, char *a3);
// [0xee5460] (740 bytes) glitch::io::CGlfFileSystem::getAbsolutePath(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)const
// glitch::io::CGlfFileSystem *glitch::io::CGlfFileSystem::getAbsolutePath( glitch::io::CGlfFileSystem *this, const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2, const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a3);
// [0xee5750] (584 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::rect<int> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *a1, char *a2, uint32_t *a3);
// [0xee59a0] (544 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::vector4d<int> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute(glitch::io::CAttributes *a1, char *a2, int *a3);
// [0xee5bc0] (455 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::vector3d<int> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *a1, char *a2, uint32_t *a3);
// [0xee5d90] (422 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::vector2d<int> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *a1, char *a2, uint32_t *a3);
// [0xee5f40] (425 bytes) glitch::io::CAttributes::addLine3d(char const*,glitch::core::line3d<float> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addLine3d(int a1, char *a2, float *a3, char a4);
// [0xee60f0] (347 bytes) glitch::io::CAttributes::addLine2d(char const*,glitch::core::line2d<float> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addLine2d(int a1, char *a2, float *a3, char a4);
// [0xee6250] (473 bytes) glitch::io::CAttributes::addStringAsTriangle3d(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsTriangle3d( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xee6430] (347 bytes) glitch::io::CAttributes::addPlane3d(char const*,glitch::core::plane3d<float> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addPlane3d(int a1, char *a2, float *a3, char a4);
// [0xee6590] (401 bytes) glitch::io::CAttributes::addStringAsBox3d(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsBox3d( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xee6730] (367 bytes) glitch::io::CAttributes::addQuaternion(char const*,glitch::core::quaternion const&,bool)
// volatile int32_t *glitch::io::CAttributes::addQuaternion( glitch::io::CAttributes *this, const char *a2, const glitch::core::quaternion *a3, bool a4);
// [0xee68a0] (612 bytes) glitch::io::CAttributes::addStringAsMatrix(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsMatrix( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xee6b10] (365 bytes) glitch::io::CAttributes::addMatrix3(char const*,glitch::core::CMatrix3<float> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addMatrix3(int a1, char *a2, float *a3, char a4);
// [0xee6c80] (290 bytes) glitch::io::CAttributes::addMatrix2(char const*,glitch::core::CMatrix2<float> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addMatrix2(int a1, char *a2, float *a3, char a4);
// [0xee6db0] (408 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::vector4d<float> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *a1, char *a2, float *a3);
// [0xee6f50] (351 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::vector3d<float> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *a1, char *a2, float *a3);
// [0xee70b0] (356 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::vector2d<float> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *a1, char *a2, float *a3);
// [0xee7220] (522 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::video::SColor)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *a1, char *a2, unsigned int a3);
// [0xee7860] (237 bytes) glitch::io::CAttributes::setAttribute(char const*,void *)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, char *a2, void *a3);
// [0xee7950] (221 bytes) glitch::io::CAttributes::addStringAsUserPointer(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsUserPointer( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xee7a30] (185 bytes) glitch::io::CAttributes::addUserPointer(char const*,void *,bool)
// volatile int32_t *glitch::io::CAttributes::addUserPointer( glitch::io::CAttributes *this, const char *a2, void *a3, bool a4);
// [0xee7af0] (208 bytes) glitch::io::CAttributes::addEnum(char const*,char const*,char const* const*,bool)
// volatile int32_t *glitch::io::CAttributes::addEnum( glitch::io::CAttributes *this, const char *a2, const char *a3, const char *const *a4, bool a5);
// [0xee7bc0] (218 bytes) glitch::io::CAttributes::addStringAsBool(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsBool( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xee7ca0] (195 bytes) glitch::io::CAttributes::addBool(char const*,bool,bool)
// volatile int32_t *glitch::io::CAttributes::addBool( glitch::io::CAttributes *this, const char *a2, bool a3, bool a4);
// [0xee7d70] (221 bytes) glitch::io::CAttributes::addStringAsFloat(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsFloat( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xee7e50] (185 bytes) glitch::io::CAttributes::addFloat(char const*,float,bool)
// volatile int32_t *glitch::io::CAttributes::addFloat( glitch::io::CAttributes *this, const char *a2, float a3, bool a4);
// [0xee7f10] (221 bytes) glitch::io::CAttributes::addStringAsInt(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsInt( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xee7ff0] (185 bytes) glitch::io::CAttributes::addInt(char const*,int,bool)
// volatile int32_t *glitch::io::CAttributes::addInt( glitch::io::CAttributes *this, const char *a2, int a3, bool a4);
// [0xee80b0] (282 bytes) glitch::io::CAttributes::setAttribute(char const*,char const*,char const* const*)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, char *a2, const char *a3, const char *const *a4);
// [0xee81d0] (237 bytes) glitch::io::CAttributes::setAttribute(char const*,float)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, char *a2, float a3);
// [0xee82c0] (237 bytes) glitch::io::CAttributes::setAttribute(char const*,int)
// volatile int32_t *glitch::io::CAttributes::setAttribute(glitch::io::CAttributes *this, char *a2, int a3);
// [0xee83b0] (255 bytes) glitch::io::CAttributes::setAttribute(char const*,bool)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, char *a2, bool a3);
// [0xee84b0] (946 bytes) glitch::io::CAttributes::setAttribute(char const*,std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>> const&)
// void glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, char *a2, const std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> **a3);
// [0xee8870] (648 bytes) glitch::io::CAttributes::addArray(char const*,std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>> const&,bool)
// int glitch::io::CAttributes::addArray( glitch::io::CAttributes *this, const char *a2, const std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> *a3, bool a4);
// [0xee8b00] (2055 bytes) glitch::io::CGlfFileList::CGlfFileList(char const*)
// void glitch::io::CGlfFileList::CGlfFileList(glitch::io::CGlfFileList *this, char *a2);
// [0xee9310] (109 bytes) glitch::io::CGlfFileSystem::createFileList(void)const
// glitch::io::CGlfFileSystem *glitch::io::CGlfFileSystem::createFileList(glitch::io::CGlfFileSystem *this);
// [0xee9380] (1437 bytes) glitch::io::CPakReader::scanLocalHeader(void)
// int glitch::io::CPakReader::scanLocalHeader( glitch::io::CPakReader *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, const char *a12, char a13, char a14, int a15, int a16, int a17, int a18, int a19, char a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, char a34);
// [0xee9920] (3215 bytes) glitch::io::CGlfFileSystem::addObfuscationFileMap(char const*,unsigned char,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&)
// int glitch::io::CGlfFileSystem::addObfuscationFileMap( glitch::io::CGlfFileSystem *this, const char *a2, uint8_t a3);
// [0xeea5b0] (270 bytes) glitch::io::CAttributes::addStringAsBinary(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsBinary( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeea6c0] (214 bytes) glitch::io::CAttributes::addBinary(char const*,void *,int,bool)
// volatile int32_t *glitch::io::CAttributes::addBinary( glitch::io::CAttributes *this, const char *a2, void *a3, int a4, bool a5);
// [0xeea7a0] (283 bytes) glitch::io::CAttributes::addStringAsTexture(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsTexture( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeea8c0] (237 bytes) glitch::io::CAttributes::addTexture(char const*,boost::intrusive_ptr<glitch::video::ITexture>,bool)
// volatile int32_t *glitch::io::CAttributes::addTexture(int a1, char *a2, int *a3, char a4);
// [0xeea9b0] (293 bytes) glitch::io::CAttributes::addString(char const*,char const*,bool)
// volatile int32_t *glitch::io::CAttributes::addString( glitch::io::CAttributes *this, const char *a2, char *a3, bool a4);
// [0xeeaae0] (465 bytes) glitch::io::CAttributes::setAttribute(char const*,char const*)
// int glitch::io::CAttributes::setAttribute(glitch::io::CAttributes *this, char *s, char *a3);
// [0xeeacc0] (248 bytes) glitch::io::CAttributes::addStringAsLight(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsLight( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeeadc0] (234 bytes) glitch::io::CAttributes::addLight(char const*,boost::intrusive_ptr<glitch::video::CLight>,bool)
// volatile int32_t *glitch::io::CAttributes::addLight( int a1, char *a2, volatile int32_t **a3, char a4);
// [0xeeaeb0] (305 bytes) glitch::io::CAttributes::addStringAsVector2d(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsVector2d( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeeaff0] (284 bytes) glitch::io::CAttributes::addVector2d(char const*,glitch::core::vector2d<float> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addVector2d(int a1, char *a2, float *a3, char a4);
// [0xeeb110] (392 bytes) glitch::io::CAttributes::addStringAsVector2di(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsVector2di( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeeb2a0] (332 bytes) glitch::io::CAttributes::addVector2di(char const*,glitch::core::vector2d<int> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addVector2di(int a1, char *a2, uint32_t *a3, char a4);
// [0xeeb3f0] (329 bytes) glitch::io::CAttributes::addStringAsVector3d(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsVector3d( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeeb540] (299 bytes) glitch::io::CAttributes::addVector3d(char const*,glitch::core::vector3d<float> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addVector3d(int a1, char *a2, float *a3, char a4);
// [0xeeb670] (456 bytes) glitch::io::CAttributes::addStringAsVector3di(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsVector3di( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeeb840] (391 bytes) glitch::io::CAttributes::addVector3di(char const*,glitch::core::vector3d<int> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addVector3di(int a1, char *a2, uint32_t *a3, char a4);
// [0xeeb9d0] (464 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::quaternion const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, char *a2, const glitch::core::quaternion *a3);
// [0xeebba0] (353 bytes) glitch::io::CAttributes::addStringAsQuaternion(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsQuaternion( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeebd10] (370 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::CMatrix2<float> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *a1, char *a2, float *a3);
// [0xeebe90] (353 bytes) glitch::io::CAttributes::addStringAsMatrix2(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsMatrix2( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeec000] (353 bytes) glitch::io::CAttributes::addStringAsVector4d(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsVector4d( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeec170] (324 bytes) glitch::io::CAttributes::addVector4d(char const*,glitch::core::vector4d<float> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addVector4d(int a1, char *a2, float *a3, char a4);
// [0xeec2c0] (570 bytes) glitch::io::CAttributes::addStringAsVector4di(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsVector4di( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeec500] (538 bytes) glitch::io::CAttributes::addVector4di(char const*,glitch::core::vector4d<int> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addVector4di(int a1, char *a2, int *a3, char a4);
// [0xeec720] (353 bytes) glitch::io::CAttributes::addStringAsPlane3d(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsPlane3d( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeec890] (464 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::plane3d<float> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *a1, char *a2, float *a3);
// [0xeeca60] (465 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::CMatrix3<float> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *a1, char *a2, float *a3);
// [0xeecc40] (473 bytes) glitch::io::CAttributes::addStringAsMatrix3(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsMatrix3( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeece20] (464 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::line2d<float> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *a1, char *a2, float *a3);
// [0xeecff0] (353 bytes) glitch::io::CAttributes::addStringAsLine2d(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsLine2d( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeed160] (520 bytes) glitch::io::CAttributes::addRect(char const*,glitch::core::rect<int> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addRect(int a1, char *a2, int *a3, char a4);
// [0xeed370] (528 bytes) glitch::io::CAttributes::addStringAsRect(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsRect( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeed580] (470 bytes) glitch::io::CAttributes::addMatrix(char const*,glitch::core::CMatrix4<float> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addMatrix( glitch::io::CAttributes *this, const char *a2, const glitch::core::CMatrix4<float> *a3, bool a4);
// [0xeed760] (598 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::CMatrix4<float> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, char *a2, const glitch::core::CMatrix4<float> *a3);
// [0xeed9c0] (353 bytes) glitch::io::CAttributes::addStringAsColorf(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsColorf( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeedb30] (367 bytes) glitch::io::CAttributes::addColorf(char const*,glitch::video::SColorf const&,bool)
// volatile int32_t *glitch::io::CAttributes::addColorf(int a1, char *a2, float *a3, char a4);
// [0xeedca0] (353 bytes) glitch::io::CAttributes::addStringAsColor(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsColor( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeede10] (436 bytes) glitch::io::CAttributes::addColor(char const*,glitch::video::SColor,bool)
// volatile int32_t *glitch::io::CAttributes::addColor(int a1, char *a2, unsigned int a3, char a4);
// [0xeedfd0] (464 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::video::SColorf const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *a1, char *a2, float *a3);
// [0xeee1a0] (425 bytes) glitch::io::CAttributes::addBox3d(char const*,glitch::core::aabbox3d<float> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addBox3d(int a1, char *a2, float *a3, char a4);
// [0xeee350] (590 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::aabbox3d<float> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *a1, char *a2, float *a3);
// [0xeee5a0] (590 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::line3d<float> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *a1, char *a2, float *a3);
// [0xeee7f0] (401 bytes) glitch::io::CAttributes::addStringAsLine3d(char const*,wchar_t const*,bool)
// int glitch::io::CAttributes::addStringAsLine3d( glitch::io::CAttributes *this, const char *a2, const wchar_t *a3, bool a4);
// [0xeee990] (554 bytes) glitch::io::CAttributes::addTriangle3d(char const*,glitch::core::triangle3d<float> const&,bool)
// volatile int32_t *glitch::io::CAttributes::addTriangle3d( glitch::io::CAttributes *this, const char *a2, const glitch::core::triangle3d<float> *a3, bool a4);
// [0xeeebc0] (763 bytes) glitch::io::CAttributes::setAttribute(char const*,glitch::core::triangle3d<float> const&)
// volatile int32_t *glitch::io::CAttributes::setAttribute( glitch::io::CAttributes *this, char *a2, const glitch::core::triangle3d<float> *a3);
// [0xeeeec0] (266 bytes) glitch::io::CMemoryWriteFile::write(void const*,unsigned int)
// size_t glitch::io::CMemoryWriteFile::write(glitch::io::CMemoryWriteFile *this, void *src, size_t n);
// [0xeeefd0] (229 bytes) glitch::io::CMemoryWriteFile::seek(long,bool)
// int glitch::io::CMemoryWriteFile::seek(glitch::io::CMemoryWriteFile *this, int a2, bool a3);
// [0xeef0c0] (616 bytes) glitch::io::CPakReader::CPakReader(boost::intrusive_ptr<glitch::io::IReadFile> const&,bool,bool,bool)
// 0xeef0c0 glitch::io::CPakReader::CPakReader(boost::intrusive_ptr<glitch::io::IReadFile> const&,bool,bool,bool)
// [0xeef330] (677 bytes) glitch::io::CGlfFileSystem::addPakFileArchive(char const*,bool,bool)
// int glitch::io::CGlfFileSystem::addPakFileArchive( glitch::io::CGlfFileSystem *this, const char *a2, bool a3, bool a4);
// [0xeef5e0] (985 bytes) glitch::io::createIXMLReader(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// glitch::io *glitch::io::createIXMLReader( glitch::io *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2);
// [0xeef9c0] (78 bytes) glitch::io::CGlfFileSystem::createXMLReader(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// glitch::io::CGlfFileSystem *glitch::io::CGlfFileSystem::createXMLReader( glitch::io::CGlfFileSystem *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, boost::intrusive_ptr<glitch::io::IReadFile> *a3);
// [0xeefa10] (985 bytes) glitch::io::createIXMLReaderUTF8(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// glitch::io *glitch::io::createIXMLReaderUTF8( glitch::io *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2);
// [0xeefdf0] (78 bytes) glitch::io::CGlfFileSystem::createXMLReaderUTF8(boost::intrusive_ptr<glitch::io::IReadFile> const&)
// glitch::io::CGlfFileSystem *glitch::io::CGlfFileSystem::createXMLReaderUTF8( glitch::io::CGlfFileSystem *this, const boost::intrusive_ptr<glitch::io::IReadFile> *a2, boost::intrusive_ptr<glitch::io::IReadFile> *a3);
