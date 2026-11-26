#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_VoxSoundPackXML.h
// Library: vox | Module: vox_VoxSoundPackXML
// Binary Address Span: 0x1019b20 .. 0x1020a20 (37 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1019b20] (100 bytes) vox::VoxSoundPackXML::VoxSoundPackXML(void)
// vox::VoxSoundPackXML *vox::VoxSoundPackXML::VoxSoundPackXML(vox::VoxSoundPackXML *this);
// [0x1019b90] (70 bytes) vox::VoxSoundPackXML::~VoxSoundPackXML()
// void vox::VoxSoundPackXML::~VoxSoundPackXML(void ***this);
// [0x1019be0] (68 bytes) vox::VoxSoundPackXML::GetConfigInfo(vox::ConfigInfoXML &)const
// int vox::VoxSoundPackXML::GetConfigInfo(uint32_t **a1, uint32_t *a2);
// [0x1019c30] (144 bytes) vox::VoxSoundPackXML::GetBankUid(char const*)const
// int vox::VoxSoundPackXML::GetBankUid(vox::VoxSoundPackXML *this, char *a2);
// [0x1019cc0] (158 bytes) vox::VoxSoundPackXML::GetBankInfo(unsigned int,vox::priority_bank::CreationSettings &)const
// int vox::VoxSoundPackXML::GetBankInfo(int *a1, unsigned int a2, int a3);
// [0x1019d60] (84 bytes) vox::VoxSoundPackXML::GetBankInfo(char const*,vox::priority_bank::CreationSettings &)const
// int vox::VoxSoundPackXML::GetBankInfo(vox::VoxSoundPackXML *a1, char *a2, int a3);
// [0x1019dc0] (152 bytes) vox::VoxSoundPackXML::GetGroupUid(char const*)const
// int vox::VoxSoundPackXML::GetGroupUid(vox::VoxSoundPackXML *this, char *a2);
// [0x1019e60] (126 bytes) vox::VoxSoundPackXML::GetGroupInfo(unsigned int,vox::group::CreationSettings &)const
// int vox::VoxSoundPackXML::GetGroupInfo(int *a1, unsigned int a2, int a3);
// [0x1019ee0] (84 bytes) vox::VoxSoundPackXML::GetGroupInfo(char const*,vox::group::CreationSettings &)const
// int vox::VoxSoundPackXML::GetGroupInfo(vox::VoxSoundPackXML *a1, char *a2, int a3);
// [0x1019f40] (63 bytes) vox::VoxSoundPackXML::GetSoundUid(char const*)const
// int vox::VoxSoundPackXML::GetSoundUid(vox::VoxSoundPackXMLInternalData **this, char *a2);
// [0x1019f80] (71 bytes) vox::VoxSoundPackXML::GetSoundLabel(int,char const*&)const
// int vox::VoxSoundPackXML::GetSoundLabel(vox::VoxSoundPackXML *this, int a2, const char **a3);
// [0x1019fd0] (197 bytes) vox::VoxSoundPackXML::GetDataSourceInfo(int,vox::data_source::CreationSettings &)const
// int vox::VoxSoundPackXML::GetDataSourceInfo( vox::VoxSoundPackXML *this, int a2, vox::data_source::CreationSettings *a3);
// [0x101a0a0] (84 bytes) vox::VoxSoundPackXML::GetDataSourceInfo(char const*,vox::data_source::CreationSettings &)const
// int vox::VoxSoundPackXML::GetDataSourceInfo( vox::VoxSoundPackXMLInternalData **this, char *a2, vox::data_source::CreationSettings *a3);
// [0x101a100] (548 bytes) vox::VoxSoundPackXML::GetEmitterInfo(int,vox::emitter::CreationSettings &)const
// int vox::VoxSoundPackXML::GetEmitterInfo( vox::VoxSoundPackXML *this, int a2, vox::emitter::CreationSettings *a3);
// [0x101a330] (84 bytes) vox::VoxSoundPackXML::GetEmitterInfo(char const*,vox::emitter::CreationSettings &)const
// int vox::VoxSoundPackXML::GetEmitterInfo( vox::VoxSoundPackXMLInternalData **this, char *a2, vox::emitter::CreationSettings *a3);
// [0x101a390] (133 bytes) vox::VoxSoundPackXML::GetSoundCustomParam(int,int,char const*&)
// int vox::VoxSoundPackXML::GetSoundCustomParam(vox::VoxSoundPackXML *this, int a2, int a3, const char **a4);
// [0x101a420] (92 bytes) vox::VoxSoundPackXML::GetSoundCustomParam(char const*,int,char const*&)
// int vox::VoxSoundPackXML::GetSoundCustomParam( vox::VoxSoundPackXMLInternalData **this, char *a2, int a3, char **a4);
// [0x101a480] (63 bytes) vox::VoxSoundPackXML::GetEventUid(char const*)const
// int vox::VoxSoundPackXML::GetEventUid(vox::VoxSoundPackXMLInternalData **this, char *a2);
// [0x101a4c0] (249 bytes) vox::VoxSoundPackXML::GetEventInfo(int,vox::EventInfoXML &)const
// int vox::VoxSoundPackXML::GetEventInfo(int a1, int a2, int a3);
// [0x101a5c0] (84 bytes) vox::VoxSoundPackXML::GetEventInfo(char const*,vox::EventInfoXML &)const
// int vox::VoxSoundPackXML::GetEventInfo(vox::VoxSoundPackXMLInternalData **a1, char *a2, int a3);
// [0x101a620] (1229 bytes) vox::VoxSoundPackXML::GetEventSoundUid(int,int &)
// int vox::VoxSoundPackXML::GetEventSoundUid(vox::VoxSoundPackXML *this, int a2, int *a3);
// [0x101aaf0] (84 bytes) vox::VoxSoundPackXML::GetEventSoundUid(char const*,int &)
// int vox::VoxSoundPackXML::GetEventSoundUid(vox::VoxSoundPackXMLInternalData **this, char *a2, int *a3);
// [0x101ab50] (154 bytes) vox::VoxSoundPackXML::GetEmitterInfoFromSoundOrEvent(char const*,vox::emitter::CreationSettings &)
// int vox::VoxSoundPackXML::GetEmitterInfoFromSoundOrEvent( vox::VoxSoundPackXMLInternalData **this, char *a2, vox::emitter::CreationSettings *a3);
// [0x101abf0] (689 bytes) vox::VoxSoundPackXML::ResetEvent(int)
// int vox::VoxSoundPackXML::ResetEvent(vox::VoxSoundPackXML *this, int a2);
// [0x101aeb0] (76 bytes) vox::VoxSoundPackXML::ResetEvent(char const*)
// int vox::VoxSoundPackXML::ResetEvent(vox::VoxSoundPackXMLInternalData **this, char *a2);
// [0x101af00] (61 bytes) vox::VoxSoundPackXML::GetEventSize(int)
// int vox::VoxSoundPackXML::GetEventSize(vox::VoxSoundPackXML *this, int a2);
// [0x101af40] (87 bytes) vox::VoxSoundPackXML::GetEventSize(char const*)
// int vox::VoxSoundPackXML::GetEventSize(vox::VoxSoundPackXMLInternalData **this, char *a2);
// [0x101afa0] (133 bytes) vox::VoxSoundPackXML::GetEventCustomParam(int,int,char const*&)
// int vox::VoxSoundPackXML::GetEventCustomParam(vox::VoxSoundPackXML *this, int a2, int a3, const char **a4);
// [0x101b030] (92 bytes) vox::VoxSoundPackXML::GetEventCustomParam(char const*,int,char const*&)
// int vox::VoxSoundPackXML::GetEventCustomParam( vox::VoxSoundPackXMLInternalData **this, char *a2, int a3, char **a4);
// [0x101b090] (246 bytes) vox::VoxSoundPackXML::AutoSetupGroups(void)
// int vox::VoxSoundPackXML::AutoSetupGroups(vox::VoxSoundPackXML *this);
// [0x101b190] (318 bytes) vox::VoxSoundPackXML::AutoSetupBanks(void)
// int vox::VoxSoundPackXML::AutoSetupBanks(vox::VoxSoundPackXML *this);
// [0x101b2d0] (28 bytes) vox::VoxSoundPackXML::GetSoundCount(void)const
// int vox::VoxSoundPackXML::GetSoundCount(vox::VoxSoundPackXML *this);
// [0x101b2f0] (28 bytes) vox::VoxSoundPackXML::GetBankCount(void)const
// int vox::VoxSoundPackXML::GetBankCount(vox::VoxSoundPackXML *this);
// [0x101b310] (28 bytes) vox::VoxSoundPackXML::GetGroupCount(void)const
// int vox::VoxSoundPackXML::GetGroupCount(vox::VoxSoundPackXML *this);
// [0x101b330] (28 bytes) vox::VoxSoundPackXML::GetEventCount(void)const
// int vox::VoxSoundPackXML::GetEventCount(vox::VoxSoundPackXML *this);
// [0x1020650] (969 bytes) vox::VoxSoundPackXML::LoadXML(char const*)
// int vox::VoxSoundPackXML::LoadXML(vox::VoxSoundPackXMLInternalData **this, const char *a2);
// [0x1020a20] (124 bytes) vox::VoxSoundPackXML::VoxSoundPackXML(char const*)
// vox::VoxSoundPackXML *vox::VoxSoundPackXML::VoxSoundPackXML(vox::VoxSoundPackXMLInternalData **this, char *a2);
