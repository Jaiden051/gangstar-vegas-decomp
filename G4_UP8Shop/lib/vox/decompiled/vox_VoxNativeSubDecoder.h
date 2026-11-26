#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_VoxNativeSubDecoder.h
// Library: vox | Module: vox_VoxNativeSubDecoder
// Binary Address Span: 0xff4d10 .. 0xff8120 (30 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xff4d10] (23 bytes) vox::VoxNativeSubDecoder::HasData(void)
// int vox::VoxNativeSubDecoder::HasData(vox::VoxNativeSubDecoder *this);
// [0xff4dd0] (732 bytes) vox::VoxNativeSubDecoder::Reset(void)
// void vox::VoxNativeSubDecoder::Reset(vox::NativePlaylistsManager **this);
// [0xff5340] (815 bytes) vox::VoxNativeSubDecoder::VoxNativeSubDecoder(vox::StreamCursorInterface *,vox::NativeChunks *,vox::States *,vox::AudioSegments *,std::vector<std::vector<int,vox::SAllocator<int,(vox::VoxMemHint)0>>,vox::SAllocator<std::vector<int,vox::SAllocator<int,(vox::VoxMemHint)0>>,(vox::VoxMemHint)0>> *,vox::TransitionRules *,std::vector<std::vector<vox::TransitionParams,vox::SAllocator<vox::TransitionParams,(vox::VoxMemHint)0>>,vox::SAllocator<std::vector<vox::TransitionParams,vox::SAllocator<vox::TransitionParams,(vox::VoxMemHint)0>>,(vox::VoxMemHint)0>> *,std::map<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,int,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>> *,vox::NativePlaylistsManager *)
// int vox::VoxNativeSubDecoder::VoxNativeSubDecoder( int a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
// [0xff5670] (74 bytes) vox::VoxNativeSubDecoder::Clean(void)
// int *vox::VoxNativeSubDecoder::Clean();
// [0xff56c0] (145 bytes) vox::VoxNativeSubDecoder::CopySegmentState(vox::SegmentState &,vox::SegmentState const&)
// int vox::VoxNativeSubDecoder::CopySegmentState(int a1, int a2, uint8_t *a3);
// [0xff5760] (390 bytes) vox::VoxNativeSubDecoder::EmulateMixSegmentInBuffer(int,vox::SegmentState *)
// void vox::VoxNativeSubDecoder::EmulateMixSegmentInBuffer(int a1, int a2, uint32_t *a3);
// [0xff58f0] (301 bytes) vox::VoxNativeSubDecoder::EmulateMixMultipleSegments(int)
// int vox::VoxNativeSubDecoder::EmulateMixMultipleSegments(vox::VoxNativeSubDecoder *this, int a2);
// [0xff5a20] (12 bytes) vox::VoxNativeSubDecoder::GetCurrentState(void)
// int vox::VoxNativeSubDecoder::GetCurrentState(vox::VoxNativeSubDecoder *this);
// [0xff5a30] (109 bytes) vox::VoxNativeSubDecoder::GetNextDyingSegmentLifeState(void)
// int vox::VoxNativeSubDecoder::GetNextDyingSegmentLifeState(vox::VoxNativeSubDecoder *this);
// [0xff5aa0] (37 bytes) vox::VoxNativeSubDecoder::GetTrackParams(void)
// vox::VoxNativeSubDecoder *vox::VoxNativeSubDecoder::GetTrackParams(vox::VoxNativeSubDecoder *this, int a2);
// [0xff5ad0] (90 bytes) vox::VoxNativeSubDecoder::IsExtraSegmentNeeded(vox::TransitionRule *)
// char vox::VoxNativeSubDecoder::IsExtraSegmentNeeded(uint32_t *a1, int a2);
// [0xff5b30] (16 bytes) vox::VoxNativeSubDecoder::IsInError(void)
// int vox::VoxNativeSubDecoder::IsInError(vox::VoxNativeSubDecoder *this);
// [0xff5b40] (51 bytes) vox::VoxNativeSubDecoder::IsStateChangeValid(int,int)
// bool vox::VoxNativeSubDecoder::IsStateChangeValid(vox::VoxNativeSubDecoder *this, int a2, int a3);
// [0xff5b80] (1096 bytes) vox::VoxNativeSubDecoder::MixSegmentInBuffer(short *,int,vox::SegmentState *)
// void vox::VoxNativeSubDecoder::MixSegmentInBuffer(int a1, unsigned int a2, int a3, uint32_t *a4);
// [0xff5fd0] (649 bytes) vox::VoxNativeSubDecoder::MixMultipleSegments(short *,int)
// int vox::VoxNativeSubDecoder::MixMultipleSegments(vox::VoxNativeSubDecoder *this, int16_t *a2, int a3);
// [0xff6260] (700 bytes) vox::VoxNativeSubDecoder::GetState(vox::NativeSubDecoderState *)
// vox::NativePlaylistsManager **vox::VoxNativeSubDecoder::GetState( vox::NativePlaylistsManager **this, vox::NativePlaylistsManager **a2);
// [0xff6520] (748 bytes) vox::VoxNativeSubDecoder::SetState(vox::NativeSubDecoderState *)
// void vox::VoxNativeSubDecoder::SetState(vox::NativePlaylistsManager **this, vox::NativePlaylistsManager **a2);
// [0xff6810] (220 bytes) vox::VoxNativeSubDecoder::StopSegment(vox::SegmentState *)
// int vox::VoxNativeSubDecoder::StopSegment(int a1, int a2);
// [0xff68f0] (476 bytes) vox::VoxNativeSubDecoder::SwapOldAndCurrentSegments(void)
// unsigned int vox::VoxNativeSubDecoder::SwapOldAndCurrentSegments(vox::VoxNativeSubDecoder *this);
// [0xff6ad0] (455 bytes) vox::VoxNativeSubDecoder::ApplyTransitionRule(vox::TransitionRule *)
// void vox::VoxNativeSubDecoder::ApplyTransitionRule(vox::VoxNativeSubDecoder *a1, int a2);
// [0xff6ca0] (1211 bytes) vox::VoxNativeSubDecoder::UpdateCurrentSegmentState(vox::TransitionRule *,bool)
// void vox::VoxNativeSubDecoder::UpdateCurrentSegmentState(int a1, int a2);
// [0xff7160] (581 bytes) vox::VoxNativeSubDecoder::UpdateDyingSegmentState(vox::TransitionRule *)
// void vox::VoxNativeSubDecoder::UpdateDyingSegmentState(int a1, int a2);
// [0xff73b0] (1173 bytes) vox::VoxNativeSubDecoder::UpdateOldSegmentState(vox::TransitionRule *)
// void vox::VoxNativeSubDecoder::UpdateOldSegmentState(int a1, int a2);
// [0xff7850] (682 bytes) vox::VoxNativeSubDecoder::UpdateSegmentsStates(void)
// void vox::VoxNativeSubDecoder::UpdateSegmentsStates(vox::VoxNativeSubDecoder *this);
// [0xff7b00] (244 bytes) vox::VoxNativeSubDecoder::InterpretTransitionRule(int)
// void vox::VoxNativeSubDecoder::InterpretTransitionRule(vox::VoxNativeSubDecoder *this, int a2);
// [0xff7c00] (282 bytes) vox::VoxNativeSubDecoder::SetState(int)
// int vox::VoxNativeSubDecoder::SetState(vox::VoxNativeSubDecoder *this, int a2);
// [0xff7d20] (551 bytes) vox::VoxNativeSubDecoder::EmulateDecode(int)
// int vox::VoxNativeSubDecoder::EmulateDecode(vox::VoxNativeSubDecoder *this, int a2);
// [0xff7f50] (423 bytes) vox::VoxNativeSubDecoder::Decode(void *,int)
// int vox::VoxNativeSubDecoder::Decode(vox::VoxNativeSubDecoder *this, int16_t *a2, int a3);
// [0xff8100] (27 bytes) vox::VoxNativeSubDecoder::~VoxNativeSubDecoder()
// void vox::VoxNativeSubDecoder::~VoxNativeSubDecoder(vox::VoxNativeSubDecoder *this);
// [0xff8120] (45 bytes) vox::VoxNativeSubDecoder::~VoxNativeSubDecoder()
// void vox::VoxNativeSubDecoder::~VoxNativeSubDecoder(vox::VoxNativeSubDecoder *this);
