#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_CZipReader.h
// Library: vox | Module: vox_CZipReader
// Binary Address Span: 0x10117c0 .. 0x1015d40 (13 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10117c0] (12 bytes) vox::CZipReader::getFileCount(void)
// int vox::CZipReader::getFileCount(vox::CZipReader *this);
// [0x10117d0] (12 bytes) vox::CZipReader::getZipFileName(void)const
// int vox::CZipReader::getZipFileName(vox::CZipReader *this);
// [0x10117e0] (12 bytes) vox::CZipReader::getArchiveLabelName(void)const
// int vox::CZipReader::getArchiveLabelName(vox::CZipReader *this);
// [0x1012c30] (2987 bytes) vox::CZipReader::extractFilename(vox::SZipFileEntry *)
// void vox::CZipReader::extractFilename(int a1, int a2);
// [0x10137e0] (3282 bytes) vox::CZipReader::scanLocalHeader(void)
// 0x10137e0 vox::CZipReader::scanLocalHeader(void)
// [0x10144c0] (687 bytes) vox::CZipReader::deletePathFromFilename(std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> &)
// uint8_t *vox::CZipReader::deletePathFromFilename(vox::CZipReader *this, uint8_t **a2);
// [0x1014770] (1829 bytes) vox::CZipReader::getFileInfo(char const*,int &,int &)
// int vox::CZipReader::getFileInfo(vox::CZipReader *this, char *s, int *a3, int *a4);
// [0x1014ea0] (2702 bytes) vox::CZipReader::ImportHeader(vox::ZipTableSerializer &)
// int vox::CZipReader::ImportHeader(vox::CZipReader *this, vox::ZipTableSerializer *a2);
// [0x1015930] (794 bytes) vox::CZipReader::CZipReader(vox::FileInterface *,vox::FileArchive::FileRange &,bool,bool,char const*)
// void vox::CZipReader::CZipReader( vox::CZipReader *this, vox::FileInterface *a2, vox::FileArchive::FileRange *a3, bool a4, bool a5, char *s);
// [0x1015c50] (158 bytes) vox::CZipReader::~CZipReader()
// void vox::CZipReader::~CZipReader(void **this);
// [0x1015cf0] (56 bytes) vox::CZipReader::~CZipReader()
// void vox::CZipReader::~CZipReader(void **this);
// [0x1015d30] (13 bytes) vox::CZipReader::isValid(void)
// int vox::CZipReader::isValid(vox::CZipReader *this);
// [0x1015d40] (9 bytes) vox::CZipReader::isVoxArchive(void)
// int vox::CZipReader::isVoxArchive();
