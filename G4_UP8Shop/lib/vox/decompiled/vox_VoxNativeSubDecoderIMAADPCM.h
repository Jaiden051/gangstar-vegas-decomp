#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_VoxNativeSubDecoderIMAADPCM.h
// Library: vox | Module: vox_VoxNativeSubDecoderIMAADPCM
// Binary Address Span: 0xff8150 .. 0xffa1a0 (19 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xff8150] (46 bytes) vox::VoxNativeSubDecoderIMAADPCM::ReleaseDecodingBuffer(int)
// int vox::VoxNativeSubDecoderIMAADPCM::ReleaseDecodingBuffer(vox::VoxNativeSubDecoderIMAADPCM *this, int a2);
// [0xff8180] (30 bytes) vox::VoxNativeSubDecoderIMAADPCM::SetCurrentSegmentInitialPosition(unsigned int)
// unsigned int vox::VoxNativeSubDecoderIMAADPCM::SetCurrentSegmentInitialPosition( vox::VoxNativeSubDecoderIMAADPCM *this, unsigned int a2);
// [0xff8210] (85 bytes) vox::VoxNativeSubDecoderIMAADPCM::GetDecodingBuffer(void)
// int vox::VoxNativeSubDecoderIMAADPCM::GetDecodingBuffer(vox::VoxNativeSubDecoderIMAADPCM *this);
// [0xff8270] (191 bytes) vox::VoxNativeSubDecoderIMAADPCM::Reset(void)
// void vox::VoxNativeSubDecoderIMAADPCM::Reset(vox::VoxNativeSubDecoderIMAADPCM *this);
// [0xff8330] (275 bytes) vox::VoxNativeSubDecoderIMAADPCM::~VoxNativeSubDecoderIMAADPCM()
// void vox::VoxNativeSubDecoderIMAADPCM::~VoxNativeSubDecoderIMAADPCM(vox::VoxNativeSubDecoderIMAADPCM *this);
// [0xff8450] (56 bytes) vox::VoxNativeSubDecoderIMAADPCM::~VoxNativeSubDecoderIMAADPCM()
// void vox::VoxNativeSubDecoderIMAADPCM::~VoxNativeSubDecoderIMAADPCM(vox::VoxNativeSubDecoderIMAADPCM *this);
// [0xff84e0] (820 bytes) vox::VoxNativeSubDecoderIMAADPCM::VoxNativeSubDecoderIMAADPCM(vox::StreamCursorInterface *,vox::NativeChunks *,vox::States *,vox::AudioSegments *,std::vector<std::vector<int,vox::SAllocator<int,(vox::VoxMemHint)0>>,vox::SAllocator<std::vector<int,vox::SAllocator<int,(vox::VoxMemHint)0>>,(vox::VoxMemHint)0>> *,vox::TransitionRules *,std::vector<std::vector<vox::TransitionParams,vox::SAllocator<vox::TransitionParams,(vox::VoxMemHint)0>>,vox::SAllocator<std::vector<vox::TransitionParams,vox::SAllocator<vox::TransitionParams,(vox::VoxMemHint)0>>,(vox::VoxMemHint)0>> *,std::map<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,int,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>> *,vox::NativePlaylistsManager *)
// int vox::VoxNativeSubDecoderIMAADPCM::VoxNativeSubDecoderIMAADPCM( int a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
// [0xff8820] (2240 bytes) vox::VoxNativeSubDecoderIMAADPCM::DecodeBlock(void *,vox::SegmentState *)
// int vox::VoxNativeSubDecoderIMAADPCM::DecodeBlock( int a1, int a2, uint32_t *a3, unsigned int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, uint16_t *a15, int a16, int a17, int a18, int a19, int a20, int16_t a21, uint16_t *a22, int a23, int a24, int a25, int a26, int a27, int a28);
// [0xff90e0] (225 bytes) vox::VoxNativeSubDecoderIMAADPCM::SetDecodingBufferToSegmentPosition(vox::SegmentState *)
// 0xff90e0 vox::VoxNativeSubDecoderIMAADPCM::SetDecodingBufferToSegmentPosition(vox::SegmentState *)
// [0xff91d0] (356 bytes) vox::VoxNativeSubDecoderIMAADPCM::Seek(int,vox::SegmentState *)
// 0xff91d0 vox::VoxNativeSubDecoderIMAADPCM::Seek(int,vox::SegmentState *)
// [0xff9340] (765 bytes) vox::VoxNativeSubDecoderIMAADPCM::DecodeSegment(void *,int,vox::SegmentState *)
// 0xff9340 vox::VoxNativeSubDecoderIMAADPCM::DecodeSegment(void *,int,vox::SegmentState *)
// [0xff9640] (843 bytes) vox::VoxNativeSubDecoderIMAADPCM::DecodeCurrentSegmentWithOffset(void *,int)
// 0xff9640 vox::VoxNativeSubDecoderIMAADPCM::DecodeCurrentSegmentWithOffset(void *,int)
// [0xff9990] (215 bytes) vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeBlock(vox::SegmentState *)
// int vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeBlock(int a1, uint32_t *a2);
// [0xff9a70] (179 bytes) vox::VoxNativeSubDecoderIMAADPCM::EmulateSetDecodingBufferToSegmentPosition(vox::SegmentState *)
// void vox::VoxNativeSubDecoderIMAADPCM::EmulateSetDecodingBufferToSegmentPosition(int a1, uint32_t *a2);
// [0xff9b30] (605 bytes) vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeSegment(int,vox::SegmentState *)
// int vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeSegment(vox::VoxNativeSubDecoder *a1, int a2, int a3);
// [0xff9d90] (666 bytes) vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeCurrentSegmentWithOffset(int)
// int vox::VoxNativeSubDecoderIMAADPCM::EmulateDecodeCurrentSegmentWithOffset( vox::VoxNativeSubDecoderIMAADPCM *this, int a2);
// [0xffa030] (151 bytes) vox::VoxNativeSubDecoderIMAADPCM::GetState(vox::NativeSubDecoderIMAADPCMState *)
// void vox::VoxNativeSubDecoderIMAADPCM::GetState( vox::NativePlaylistsManager **this, vox::NativePlaylistsManager **a2);
// [0xffa0d0] (199 bytes) vox::VoxNativeSubDecoderIMAADPCM::SetState(vox::NativeSubDecoderIMAADPCMState *)
// void vox::VoxNativeSubDecoderIMAADPCM::SetState( vox::NativePlaylistsManager **this, vox::NativePlaylistsManager **a2);
// [0xffa1a0] (9 bytes) vox::VoxNativeSubDecoderIMAADPCM::Seek(unsigned int)
// int vox::VoxNativeSubDecoderIMAADPCM::Seek();
