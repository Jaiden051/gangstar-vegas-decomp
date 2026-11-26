#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_engine.h
// Library: vox | Module: vox_engine
// Binary Address Span: 0xfdf570 .. 0x1057730 (35 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xfdf570] (104 bytes) vox::DecoderRawFactory(void *)
// int vox::DecoderRawFactory(vox *this);
// [0xfe0540] (104 bytes) vox::DecoderMPC8Factory(void *)
// int vox::DecoderMPC8Factory(vox *this);
// [0xfe6770] (96 bytes) vox::DecoderMSWavFactory(void *)
// vox::DecoderMSWav *vox::DecoderMSWavFactory();
// [0xfea020] (88 bytes) vox::DecoderStbVorbisFactory(void *)
// uint32_t *vox::DecoderStbVorbisFactory();
// [0xfea620] (96 bytes) vox::DecoderNativeFactory(void *)
// vox::DecoderNative *vox::DecoderNativeFactory();
// [0x1004730] (64 bytes) vox::DistanceModelToString(unsigned int)
// const char *vox::DistanceModelToString(vox *this);
// [0x100b450] (101 bytes) vox::isDir(char const*,bool &)
// int vox::isDir(vox *this, bool *a2);
// [0x1011450] (34 bytes) vox::closeStdIO(void *)
// int vox::closeStdIO(FILE *this);
// [0x1011480] (34 bytes) vox::tellStdIO(void *)
// int vox::tellStdIO(FILE *this);
// [0x10114b0] (68 bytes) vox::seekStdIO(void *,int,vox::VoxFileSeekOrigin)
// int vox::seekStdIO(FILE *stream, int off, int a3);
// [0x1011500] (58 bytes) vox::writeStdIO(void const*,int,int,void *)
// size_t vox::writeStdIO(vox *this, size_t size, size_t n, FILE *s);
// [0x1011540] (58 bytes) vox::readStdIO(void *,int,int,void *)
// size_t vox::readStdIO(vox *this, size_t size, size_t n, FILE *stream);
// [0x1011580] (343 bytes) vox::openStdIO(char const*,vox::VoxFileAccessMode)
// FILE *vox::openStdIO(const char *filename, int a2);
// [0x1011760] (96 bytes) vox::VoxNewFileSystem(void)
// vox::FileSystemStdio *vox::VoxNewFileSystem();
// [0x101b350] (21236 bytes) vox::LoadXML_Tiny(char *,vox::VoxSoundPackXMLInternalData *)
// int vox::LoadXML_Tiny(vox *this, vox::VoxSoundPackXMLInternalData *a2);
// [0x1020aa0] (14 bytes) vox::CompareSoundpackHashes(vox::SoundpackItemHash,vox::SoundpackItemHash)
// bool vox::CompareSoundpackHashes(unsigned int a1, int a2, unsigned int a3);
// [0x1039840] (79 bytes) vox::BehaviourToString(vox::priority_bank::Behaviour)
// const char *vox::BehaviourToString(int a1);
// [0x103bf40] (104 bytes) vox::StreamCFileFactory(void *)
// vox::StreamCFile *vox::StreamCFileFactory(vox *this);
// [0x103cb60] (104 bytes) vox::StreamMemoryBufferFactory(void *)
// int vox::StreamMemoryBufferFactory(vox *this);
// [0x103d240] (1834 bytes) vox::DebugFilterEmitterToMask(char const*)
// int64_t vox::DebugFilterEmitterToMask(vox *this);
// [0x103d970] (312 bytes) vox::DebugFilterDriverToMask(char const*)
// int64_t vox::DebugFilterDriverToMask(vox *this);
// [0x103dab0] (356 bytes) vox::DebugFilterGroupToMask(char const*)
// int64_t vox::DebugFilterGroupToMask(vox *this);
// [0x103dc20] (400 bytes) vox::DebugFilterPriorityBankToMask(char const*)
// int64_t vox::DebugFilterPriorityBankToMask(vox *this);
// [0x103ddb0] (222 bytes) vox::DebugFilterToMask(char const*,char const*)
// int vox::DebugFilterToMask(vox *this, vox *a2);
// [0x103de90] (79 bytes) vox::StateToString(int)
// const char *vox::StateToString(vox *this);
// [0x103dee0] (1818 bytes) vox::GetEmitterInfoFromJson(vox::JsonObject const*,vox::emitter::CreationSettings &)
// int vox::GetEmitterInfoFromJson(vox *this, const vox::JsonObject *a2);
// [0x103ff40] (125 bytes) vox::atoi(char *,char *,int *)
// char *vox::atoi(vox *this, char *a2, char *a3);
// [0x103ffc0] (130 bytes) vox::hatoui(char *,char *,unsigned int *)
// char *vox::hatoui(vox *this, char *a2, char *a3);
// [0x1040050] (519 bytes) vox::atof(char *,char *,float *)
// char *vox::atof(vox *this, char *a2, char *a3);
// [0x1040260] (157 bytes) vox::json_alloc(vox::block_allocator *)
// size_t vox::json_alloc(vox *this);
// [0x1040300] (31 bytes) vox::json_append(vox::JsonValue *,vox::JsonValue *)
// int vox::json_append(int a1, uint32_t *a2);
// [0x1040320] (2805 bytes) vox::json_parse(char *,char **,char **,int *,vox::block_allocator *)
// uint32_t *vox::json_parse(vox *this, char *a2, char **a3, char **a4, vox *a5);
// [0x10562e0] (96 bytes) vox::CreateDriver(void)
// vox::DriverAndroid *vox::CreateDriver();
// [0x1057720] (9 bytes) vox::DetectNeonInstructionsPresent(void)
// int vox::DetectNeonInstructionsPresent();
// [0x1057730] (56 bytes) vox::neonInstructionsPresent(void)
// int vox::neonInstructionsPresent();
