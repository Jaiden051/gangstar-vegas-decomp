#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpSaveCon.h
// Library: havok | Module: havok_physics_hkpSaveCon
// Binary Address Span: 0x1850420 .. 0x1853630 (18 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1850420] (29 bytes) hkpSaveContactPointsUtil::EntitySelector::~EntitySelector()
// void hkpSaveContactPointsUtil::EntitySelector::~EntitySelector(hkpSaveContactPointsUtil::EntitySelector *this);
// [0x1850470] (45 bytes) hkpSaveContactPointsUtil::EntitySelector::~EntitySelector()
// void hkpSaveContactPointsUtil::EntitySelector::~EntitySelector(hkpSaveContactPointsUtil::EntitySelector *this);
// [0x18505c0] (363 bytes) hkpSaveContactPointsUtil::deserialize1nTrack(hkpSerializedTrack1nInfo const&,hkpProcessCollisionInput const*,hkArray<hkpAgent1nSector *,hkContainerHeapAllocator> &)
// uint32_t *hkpSaveContactPointsUtil::deserialize1nTrack(uint32_t *a1, uint32_t *a2, int a3, int *a4);
// [0x1850730] (129 bytes) hkpSaveContactPointsUtil::getSerializedAgentType(void * (*)(hkpAgent3ProcessInput const&,hkpAgentEntry *,void *,hkVector4f *,hkpProcessCollisionOutput &))
// char hkpSaveContactPointsUtil::getSerializedAgentType( int (*a1)(int a1, int a2, hkpBoxBoxManifold *a3, int a4, int a5));
// [0x18507c0] (189 bytes) hkpSaveContactPointsUtil::destroyOldEntry(hkpSerializedAgentNnEntry::SerializedAgentType,hkpProcessCollisionInput const*,hkpDynamicsContactMgr *,hkpConstraintOwner *,hkpAgentNnEntry *)
// uint32_t *hkpSaveContactPointsUtil::destroyOldEntry( uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, uint8_t *a6);
// [0x1850880] (435 bytes) hkpSaveContactPointsUtil::serializeEntry(hkpAgentEntry const*,hkBool,hkpProcessCollisionInput const*,int &,hkpSerializedAgentNnEntry::SerializedAgentType &,hkpAgent1nTrack const*&,hkpSerializedTrack1nInfo &)
// uint32_t *hkpSaveContactPointsUtil::serializeEntry( uint32_t *a1, uint8_t *a2, char a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, int *a7);
// [0x1850a40] (813 bytes) hkpSaveContactPointsUtil::serialize1nTrack(hkArray<hkpAgent1nSector *,hkContainerHeapAllocator> const&,hkpProcessCollisionInput const*,hkpSerializedTrack1nInfo &)
// uint32_t *hkpSaveContactPointsUtil::serialize1nTrack(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1850d70] (1033 bytes) hkpSaveContactPointsUtil::serializeCollisionEntry(hkpSaveContactPointsUtil::SavePointsInput const&,hkpAgentNnEntry const*,hkpProcessCollisionInput const*,hkpSerializedAgentNnEntry &)
// 0x1850d70 hkpSaveContactPointsUtil::serializeCollisionEntry(hkpSaveContactPointsUtil::SavePointsInput const&,hkpAgentNnEntry const*,hkpProcessCollisionInput const*,hkpSerializedAgentNnEntry &)
// [0x1851180] (548 bytes) hkpSaveContactPointsUtil::saveContactPoints(hkpSaveContactPointsUtil::SavePointsInput const&,hkpAgentNnEntry const**,int,hkpPhysicsSystemWithContacts *)
// int hkpSaveContactPointsUtil::saveContactPoints(int a1, int a2, int a3, hkpPhysicsSystemWithContacts *a4);
// [0x18513b0] (1431 bytes) hkpSaveContactPointsUtil::saveContactPoints(hkpSaveContactPointsUtil::SavePointsInput const&,hkpWorld const*,hkpPhysicsSystemWithContacts *)
// int hkpSaveContactPointsUtil::saveContactPoints(int a1, uint32_t *a2, hkpPhysicsSystemWithContacts *a3);
// [0x1851950] (871 bytes) hkpSaveContactPointsUtil::saveContactPoints(hkpSaveContactPointsUtil::SavePointsInput const&,hkpEntity const**,int,hkpPhysicsSystemWithContacts *)
// void hkpSaveContactPointsUtil::saveContactPoints(int a1, uint32_t *a2, int a3, hkpPhysicsSystemWithContacts *a4);
// [0x1851cc0] (429 bytes) hkpSaveContactPointsUtil::deserializeEntry(hkpSerializedAgentNnEntry const&,hkpSerializedAgentNnEntry::SerializedAgentType,hkpSerializedTrack1nInfo const&,hkpProcessCollisionInput const*,hkpAgentNnEntry *)
// uint32_t *hkpSaveContactPointsUtil::deserializeEntry( uint32_t *a1, uint8_t *a2, int a3, uint32_t *a4, uint32_t *a5, uint8_t *a6);
// [0x1851e70] (2900 bytes) hkpSaveContactPointsUtil::deserializeCollisionEntry(hkpSaveContactPointsUtil::LoadPointsInput const&,hkpSerializedAgentNnEntry const&,hkpEntity *,hkpEntity *,hkpProcessCollisionInput const*,hkpAgentNnEntry *)
// uint32_t *hkpSaveContactPointsUtil::deserializeCollisionEntry( uint32_t *a1, uint8_t *a2, int a3, int a4, int a5, uint32_t *a6, unsigned int a7);
// [0x18529d0] (829 bytes) hkpSaveContactPointsUtil::loadContactPoints(hkpSaveContactPointsUtil::LoadPointsInput const&,hkpPhysicsSystemWithContacts *,hkpEntity **,int)
// void hkpSaveContactPointsUtil::loadContactPoints(int a1, int a2, int a3, int a4);
// [0x1852d10] (628 bytes) hkpSaveContactPointsUtil::loadContactPoints(hkpSaveContactPointsUtil::LoadPointsInput const&,hkpPhysicsSystemWithContacts *,hkpWorld *)
// int hkpSaveContactPointsUtil::loadContactPoints(int a1, int a2, int a3);
// [0x1852f90] (326 bytes) hkpSaveContactPointsEndianUtil::swapEndianTypeIn1nTrack(hkpProcessCollisionInput const*,hkpSerializedTrack1nInfo &)
// int hkpSaveContactPointsEndianUtil::swapEndianTypeIn1nTrack(int a1, int a2);
// [0x18530e0] (1353 bytes) hkpSaveContactPointsEndianUtil::swapEndianTypeInEntry(hkpProcessCollisionInput const*,hkpAgentEntry *,hkpSerializedTrack1nInfo &,hkBool,int &,bool &)
// void hkpSaveContactPointsEndianUtil::swapEndianTypeInEntry( uint32_t *a1, char *a2, int a3, char a4, uint32_t *a5, uint8_t *a6);
// [0x1853630] (381 bytes) hkpSaveContactPointsEndianUtil::swapEndianTypeInCollisionEntry(hkpProcessCollisionInput const*,hkpSerializedAgentNnEntry &)
// int hkpSaveContactPointsEndianUtil::swapEndianTypeInCollisionEntry(uint32_t *a1, int a2);
