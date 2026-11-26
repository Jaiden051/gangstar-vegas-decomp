#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_VoxNativeSubDecoderMPC.h
// Library: vox | Module: vox_VoxNativeSubDecoderMPC
// Binary Address Span: 0xffa1b0 .. 0xffbb90 (18 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xffa1b0] (39 bytes) vox::VoxNativeSubDecoderMPC::SetCurrentSegmentInitialPosition(unsigned int)
// int vox::VoxNativeSubDecoderMPC::SetCurrentSegmentInitialPosition( vox::VoxNativeSubDecoderMPC *this, unsigned int a2);
// [0xffa250] (93 bytes) vox::VoxNativeSubDecoderMPC::Reset(void)
// void vox::VoxNativeSubDecoderMPC::Reset(vox::NativePlaylistsManager **this);
// [0xffa2b0] (481 bytes) vox::VoxNativeSubDecoderMPC::EmulateDecodeCurrentSegmentWithOffset(int)
// int vox::VoxNativeSubDecoderMPC::EmulateDecodeCurrentSegmentWithOffset( vox::VoxNativeSubDecoderMPC *this, int a2);
// [0xffa4a0] (426 bytes) vox::VoxNativeSubDecoderMPC::EmulateDecodeSegment(int,vox::SegmentState *)
// int vox::VoxNativeSubDecoderMPC::EmulateDecodeSegment(vox::VoxNativeSubDecoder *a1, int a2, uint32_t *a3);
// [0xffa760] (346 bytes) vox::VoxNativeSubDecoderMPC::VoxNativeSubDecoderMPC(vox::StreamCursorInterface *,vox::NativeChunks *,vox::States *,vox::AudioSegments *,std::vector<std::vector<int,vox::SAllocator<int,(vox::VoxMemHint)0>>,vox::SAllocator<std::vector<int,vox::SAllocator<int,(vox::VoxMemHint)0>>,(vox::VoxMemHint)0>> *,vox::TransitionRules *,std::vector<std::vector<vox::TransitionParams,vox::SAllocator<vox::TransitionParams,(vox::VoxMemHint)0>>,vox::SAllocator<std::vector<vox::TransitionParams,vox::SAllocator<vox::TransitionParams,(vox::VoxMemHint)0>>,(vox::VoxMemHint)0>> *,std::map<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,int,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>> *,vox::NativePlaylistsManager *)
// int vox::VoxNativeSubDecoderMPC::VoxNativeSubDecoderMPC( vox::VoxThread *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
// [0xffa8c0] (1776 bytes) vox::VoxNativeSubDecoderMPC::CreateSegmentDecoder(vox::SegmentState *)
// int vox::VoxNativeSubDecoderMPC::CreateSegmentDecoder(int a1, uint32_t *a2);
// [0xffafb0] (101 bytes) vox::VoxNativeSubDecoderMPC::GetState(vox::NativeSubDecoderMPCState *)
// void vox::VoxNativeSubDecoderMPC::GetState( vox::NativePlaylistsManager **this, vox::NativePlaylistsManager **a2);
// [0xffb020] (101 bytes) vox::VoxNativeSubDecoderMPC::SetState(vox::NativeSubDecoderMPCState *)
// void vox::VoxNativeSubDecoderMPC::SetState( vox::NativePlaylistsManager **this, vox::NativePlaylistsManager **a2);
// [0xffb090] (169 bytes) vox::VoxNativeSubDecoderMPC::GetDecoderCursor(vox::SegmentState *)
// int vox::VoxNativeSubDecoderMPC::GetDecoderCursor(int a1, int a2);
// [0xffb140] (205 bytes) vox::VoxNativeSubDecoderMPC::Seek(int,vox::SegmentState *)
// int vox::VoxNativeSubDecoderMPC::Seek(int a1, int a2, uint32_t *a3);
// [0xffb210] (577 bytes) vox::VoxNativeSubDecoderMPC::DecodeSegment(void *,int,vox::SegmentState *)
// int vox::VoxNativeSubDecoderMPC::DecodeSegment(vox::VoxNativeSubDecoder *a1, int a2, int a3, uint32_t *a4);
// [0xffb460] (627 bytes) vox::VoxNativeSubDecoderMPC::DecodeCurrentSegmentWithOffset(void *,int)
// signed int vox::VoxNativeSubDecoderMPC::DecodeCurrentSegmentWithOffset( vox::VoxNativeSubDecoderMPC *this, char *a2, int a3);
// [0xffb6e0] (1082 bytes) vox::VoxNativeSubDecoderMPC::~VoxNativeSubDecoderMPC()
// void vox::VoxNativeSubDecoderMPC::~VoxNativeSubDecoderMPC(vox::VoxNativeSubDecoderMPC *this);
// [0xffbb20] (56 bytes) vox::VoxNativeSubDecoderMPC::~VoxNativeSubDecoderMPC()
// void vox::VoxNativeSubDecoderMPC::~VoxNativeSubDecoderMPC(vox::VoxNativeSubDecoderMPC *this);
// [0xffbb60] (9 bytes) vox::VoxNativeSubDecoderMPC::Seek(unsigned int)
// int vox::VoxNativeSubDecoderMPC::Seek();
// [0xffbb70] (12 bytes) vox::VoxNativeSubDecoderMPC::GetDecodingBuffer(void)
// int vox::VoxNativeSubDecoderMPC::GetDecodingBuffer();
// [0xffbb80] (9 bytes) vox::VoxNativeSubDecoderMPC::ReleaseDecodingBuffer(int)
// void vox::VoxNativeSubDecoderMPC::ReleaseDecodingBuffer();
// [0xffbb90] (9 bytes) vox::VoxNativeSubDecoderMPC::SetDecodingBufferToSegmentPosition(vox::SegmentState *)
// void vox::VoxNativeSubDecoderMPC::SetDecodingBufferToSegmentPosition();
