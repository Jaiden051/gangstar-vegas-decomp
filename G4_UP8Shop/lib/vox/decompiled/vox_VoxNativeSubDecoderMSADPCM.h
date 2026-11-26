#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_VoxNativeSubDecoderMSADPCM.h
// Library: vox | Module: vox_VoxNativeSubDecoderMSADPCM
// Binary Address Span: 0xffbd50 .. 0xffd830 (20 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xffbd50] (46 bytes) vox::VoxNativeSubDecoderMSADPCM::ReleaseDecodingBuffer(int)
// int vox::VoxNativeSubDecoderMSADPCM::ReleaseDecodingBuffer(vox::VoxNativeSubDecoderMSADPCM *this, int a2);
// [0xffbd80] (38 bytes) vox::VoxNativeSubDecoderMSADPCM::SetCurrentSegmentInitialPosition(unsigned int)
// unsigned int vox::VoxNativeSubDecoderMSADPCM::SetCurrentSegmentInitialPosition( vox::VoxNativeSubDecoderMSADPCM *this, unsigned int a2);
// [0xffbe20] (85 bytes) vox::VoxNativeSubDecoderMSADPCM::GetDecodingBuffer(void)
// int vox::VoxNativeSubDecoderMSADPCM::GetDecodingBuffer(vox::VoxNativeSubDecoderMSADPCM *this);
// [0xffbe80] (191 bytes) vox::VoxNativeSubDecoderMSADPCM::Reset(void)
// void vox::VoxNativeSubDecoderMSADPCM::Reset(vox::VoxNativeSubDecoderMSADPCM *this);
// [0xffbf40] (271 bytes) vox::VoxNativeSubDecoderMSADPCM::~VoxNativeSubDecoderMSADPCM()
// void vox::VoxNativeSubDecoderMSADPCM::~VoxNativeSubDecoderMSADPCM(vox::VoxNativeSubDecoderMSADPCM *this);
// [0xffc050] (56 bytes) vox::VoxNativeSubDecoderMSADPCM::~VoxNativeSubDecoderMSADPCM()
// void vox::VoxNativeSubDecoderMSADPCM::~VoxNativeSubDecoderMSADPCM(vox::VoxNativeSubDecoderMSADPCM *this);
// [0xffc0e0] (671 bytes) vox::VoxNativeSubDecoderMSADPCM::VoxNativeSubDecoderMSADPCM(vox::StreamCursorInterface *,vox::NativeChunks *,vox::States *,vox::AudioSegments *,std::vector<std::vector<int,vox::SAllocator<int,(vox::VoxMemHint)0>>,vox::SAllocator<std::vector<int,vox::SAllocator<int,(vox::VoxMemHint)0>>,(vox::VoxMemHint)0>> *,vox::TransitionRules *,std::vector<std::vector<vox::TransitionParams,vox::SAllocator<vox::TransitionParams,(vox::VoxMemHint)0>>,vox::SAllocator<std::vector<vox::TransitionParams,vox::SAllocator<vox::TransitionParams,(vox::VoxMemHint)0>>,(vox::VoxMemHint)0>> *,std::map<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,int,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>> *,vox::NativePlaylistsManager *,vox::FmtExtendedInfos *)
// int vox::VoxNativeSubDecoderMSADPCM::VoxNativeSubDecoderMSADPCM( vox::VoxThread *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
// [0xffc380] (169 bytes) vox::VoxNativeSubDecoderMSADPCM::DecodeSample(vox::MsAdpcmState *,unsigned int,short const*)
// int vox::VoxNativeSubDecoderMSADPCM::DecodeSample(int a1, uint16_t *a2, int a3, int16_t *a4);
// [0xffc430] (785 bytes) vox::VoxNativeSubDecoderMSADPCM::DecodeBlock(void *,vox::SegmentState *)
// char *vox::VoxNativeSubDecoderMSADPCM::DecodeBlock( int a1, uint16_t *a2, uint32_t *a3, int a4, int16_t a5, int a6, int a7, int16_t *a8, int16_t *a9, int a10, int a11, int16_t a12, int a13, int a14);
// [0xffc750] (241 bytes) vox::VoxNativeSubDecoderMSADPCM::SetDecodingBufferToSegmentPosition(vox::SegmentState *)
// void vox::VoxNativeSubDecoderMSADPCM::SetDecodingBufferToSegmentPosition( int16_t a1, int a2, int a3, int a4, uint32_t *a5);
// [0xffc850] (384 bytes) vox::VoxNativeSubDecoderMSADPCM::Seek(int,vox::SegmentState *)
// int vox::VoxNativeSubDecoderMSADPCM::Seek(int a1, int a2, uint32_t *a3);
// [0xffc9d0] (765 bytes) vox::VoxNativeSubDecoderMSADPCM::DecodeSegment(void *,int,vox::SegmentState *)
// int vox::VoxNativeSubDecoderMSADPCM::DecodeSegment(vox::VoxNativeSubDecoder *a1, int a2, int a3, int a4);
// [0xffccd0] (843 bytes) vox::VoxNativeSubDecoderMSADPCM::DecodeCurrentSegmentWithOffset(void *,int)
// int vox::VoxNativeSubDecoderMSADPCM::DecodeCurrentSegmentWithOffset( vox::VoxNativeSubDecoderMSADPCM *this, char *a2, int a3);
// [0xffd020] (202 bytes) vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeBlock(vox::SegmentState *)
// int vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeBlock(int a1, uint32_t *a2);
// [0xffd0f0] (205 bytes) vox::VoxNativeSubDecoderMSADPCM::EmulateSetDecodingBufferToSegmentPosition(vox::SegmentState *)
// void vox::VoxNativeSubDecoderMSADPCM::EmulateSetDecodingBufferToSegmentPosition(int a1, uint32_t *a2);
// [0xffd1c0] (605 bytes) vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeSegment(int,vox::SegmentState *)
// int vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeSegment(vox::VoxNativeSubDecoder *a1, int a2, int a3);
// [0xffd420] (666 bytes) vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeCurrentSegmentWithOffset(int)
// int vox::VoxNativeSubDecoderMSADPCM::EmulateDecodeCurrentSegmentWithOffset( vox::VoxNativeSubDecoderMSADPCM *this, int a2);
// [0xffd6c0] (151 bytes) vox::VoxNativeSubDecoderMSADPCM::GetState(vox::NativeSubDecoderMSADPCMState *)
// void vox::VoxNativeSubDecoderMSADPCM::GetState( vox::NativePlaylistsManager **this, vox::NativePlaylistsManager **a2);
// [0xffd760] (199 bytes) vox::VoxNativeSubDecoderMSADPCM::SetState(vox::NativeSubDecoderMSADPCMState *)
// void vox::VoxNativeSubDecoderMSADPCM::SetState( vox::NativePlaylistsManager **this, vox::NativePlaylistsManager **a2);
// [0xffd830] (9 bytes) vox::VoxNativeSubDecoderMSADPCM::Seek(unsigned int)
// int vox::VoxNativeSubDecoderMSADPCM::Seek();
