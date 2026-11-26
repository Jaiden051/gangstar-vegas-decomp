#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_VoxNativeSubDecoderPCM.h
// Library: vox | Module: vox_VoxNativeSubDecoderPCM
// Binary Address Span: 0xffd840 .. 0xffe6e0 (16 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xffd840] (27 bytes) vox::VoxNativeSubDecoderPCM::~VoxNativeSubDecoderPCM()
// void vox::VoxNativeSubDecoderPCM::~VoxNativeSubDecoderPCM(vox::VoxNativeSubDecoderPCM *this);
// [0xffd860] (20 bytes) vox::VoxNativeSubDecoderPCM::SetCurrentSegmentInitialPosition(unsigned int)
// vox::VoxNativeSubDecoderPCM *vox::VoxNativeSubDecoderPCM::SetCurrentSegmentInitialPosition( vox::VoxNativeSubDecoderPCM *this, unsigned int a2);
// [0xffd880] (56 bytes) vox::VoxNativeSubDecoderPCM::~VoxNativeSubDecoderPCM()
// void vox::VoxNativeSubDecoderPCM::~VoxNativeSubDecoderPCM(vox::VoxNativeSubDecoderPCM *this);
// [0xffd930] (236 bytes) vox::VoxNativeSubDecoderPCM::Seek(int,vox::SegmentState *)
// int vox::VoxNativeSubDecoderPCM::Seek(int a1, int a2, uint32_t *a3);
// [0xffda20] (705 bytes) vox::VoxNativeSubDecoderPCM::DecodeCurrentSegmentWithOffset(void *,int)
// int vox::VoxNativeSubDecoderPCM::DecodeCurrentSegmentWithOffset( vox::VoxNativeSubDecoderPCM *this, char *a2, int a3);
// [0xffdcf0] (626 bytes) vox::VoxNativeSubDecoderPCM::DecodeSegment(void *,int,vox::SegmentState *)
// int vox::VoxNativeSubDecoderPCM::DecodeSegment(vox::VoxNativeSubDecoder *a1, int a2, int a3, uint32_t *a4);
// [0xffdf70] (673 bytes) vox::VoxNativeSubDecoderPCM::EmulateDecodeCurrentSegmentWithOffset(int)
// int vox::VoxNativeSubDecoderPCM::EmulateDecodeCurrentSegmentWithOffset( vox::VoxNativeSubDecoderPCM *this, int a2);
// [0xffe220] (626 bytes) vox::VoxNativeSubDecoderPCM::EmulateDecodeSegment(int,vox::SegmentState *)
// int vox::VoxNativeSubDecoderPCM::EmulateDecodeSegment(vox::VoxNativeSubDecoder *a1, int a2, uint32_t *a3);
// [0xffe4a0] (93 bytes) vox::VoxNativeSubDecoderPCM::Reset(void)
// void vox::VoxNativeSubDecoderPCM::Reset(vox::NativePlaylistsManager **this);
// [0xffe550] (119 bytes) vox::VoxNativeSubDecoderPCM::VoxNativeSubDecoderPCM(vox::StreamCursorInterface *,vox::NativeChunks *,vox::States *,vox::AudioSegments *,std::vector<std::vector<int,vox::SAllocator<int,(vox::VoxMemHint)0>>,vox::SAllocator<std::vector<int,vox::SAllocator<int,(vox::VoxMemHint)0>>,(vox::VoxMemHint)0>> *,vox::TransitionRules *,std::vector<std::vector<vox::TransitionParams,vox::SAllocator<vox::TransitionParams,(vox::VoxMemHint)0>>,vox::SAllocator<std::vector<vox::TransitionParams,vox::SAllocator<vox::TransitionParams,(vox::VoxMemHint)0>>,(vox::VoxMemHint)0>> *,std::map<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,int,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>> *,vox::NativePlaylistsManager *)
// void (**vox::VoxNativeSubDecoderPCM::VoxNativeSubDecoderPCM( uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10))(vox::VoxNativeSubDecoderPCM *__hidden this);
// [0xffe5d0] (101 bytes) vox::VoxNativeSubDecoderPCM::GetState(vox::NativeSubDecoderPCMState *)
// void vox::VoxNativeSubDecoderPCM::GetState( vox::NativePlaylistsManager **this, vox::NativePlaylistsManager **a2);
// [0xffe640] (101 bytes) vox::VoxNativeSubDecoderPCM::SetState(vox::NativeSubDecoderPCMState *)
// void vox::VoxNativeSubDecoderPCM::SetState( vox::NativePlaylistsManager **this, vox::NativePlaylistsManager **a2);
// [0xffe6b0] (9 bytes) vox::VoxNativeSubDecoderPCM::Seek(unsigned int)
// int vox::VoxNativeSubDecoderPCM::Seek();
// [0xffe6c0] (12 bytes) vox::VoxNativeSubDecoderPCM::GetDecodingBuffer(void)
// int vox::VoxNativeSubDecoderPCM::GetDecodingBuffer();
// [0xffe6d0] (9 bytes) vox::VoxNativeSubDecoderPCM::ReleaseDecodingBuffer(int)
// void vox::VoxNativeSubDecoderPCM::ReleaseDecodingBuffer();
// [0xffe6e0] (9 bytes) vox::VoxNativeSubDecoderPCM::SetDecodingBufferToSegmentPosition(vox::SegmentState *)
// void vox::VoxNativeSubDecoderPCM::SetDecodingBufferToSegmentPosition();
