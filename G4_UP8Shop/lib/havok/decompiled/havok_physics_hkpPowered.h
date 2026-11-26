#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpPowered.h
// Library: havok | Module: havok_physics_hkpPowered
// Binary Address Span: 0x1830fd0 .. 0x1b04cb0 (26 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1830fd0] (22 bytes) hkpPoweredChainMapper::Target::staticClass(void)
// void *hkpPoweredChainMapper::Target::staticClass();
// [0x1830ff0] (22 bytes) hkpPoweredChainMapper::LinkInfo::staticClass(void)
// void *hkpPoweredChainMapper::LinkInfo::staticClass();
// [0x1831010] (22 bytes) hkpPoweredChainMapper::staticClass(void)
// void *hkpPoweredChainMapper::staticClass();
// [0x1849030] (409 bytes) hkpPoweredChainMapper::~hkpPoweredChainMapper()
// void hkpPoweredChainMapper::~hkpPoweredChainMapper(hkpPoweredChainMapper *this);
// [0x18491d0] (93 bytes) hkpPoweredChainMapper::~hkpPoweredChainMapper()
// void hkpPoweredChainMapper::~hkpPoweredChainMapper(hkpPoweredChainMapper *this);
// [0x1849230] (201 bytes) hkpPoweredChainMapper::getMotors(int,int,hkArray<hkpConstraintMotor *,hkContainerHeapAllocator> &)
// int hkpPoweredChainMapper::getMotors(int a1, int a2, int a3, hkMemoryAllocator *a4);
// [0x1849300] (197 bytes) hkpPoweredChainMapper::setForceLimits(int,int,float,float)
// int hkpPoweredChainMapper::setForceLimits(hkpPoweredChainMapper *this, int a2, int a3, float a4, float a5);
// [0x18493d0] (279 bytes) hkpPoweredChainMapper::setMotors(int,int,hkpConstraintMotor *)
// uint32_t *hkpPoweredChainMapper::setMotors(hkpPoweredChainMapper *this, int a2, int a3, hkpConstraintMotor *a4);
// [0x18494f0] (301 bytes) hkpPoweredChainMapper::setTargetOrientation(int,hkQuaternionf const&)
// int hkpPoweredChainMapper::setTargetOrientation(hkpPoweredChainMapper *this, int a2, const hkQuaternionf *a3);
// [0x1849620] (3157 bytes) hkpPoweredChainMapper::buildChainMapper(hkpPoweredChainMapper::Config,hkArray<hkpConstraintInstance *,hkContainerHeapAllocator> const&,hkArray<hkpPoweredChainMapper::ChainEndpoints,hkContainerHeapAllocator> const&,hkArray<hkpConstraintInstance *,hkContainerHeapAllocator>*)
// uint32_t *hkpPoweredChainMapper::buildChainMapper( int16_t a1, hkpConstraintInstance *a2, int *a3, hkMemoryAllocator *a4);
// [0x1b02da0] (22 bytes) hkpPoweredChainData::ConstraintInfo::staticClass(void)
// void *hkpPoweredChainData::ConstraintInfo::staticClass();
// [0x1b02dc0] (22 bytes) hkpPoweredChainData::staticClass(void)
// void *hkpPoweredChainData::staticClass();
// [0x1b03500] (10 bytes) hkpPoweredChainData::isValid(void)const
// hkpPoweredChainData *hkpPoweredChainData::isValid(hkpPoweredChainData *this);
// [0x1b03510] (12 bytes) hkpPoweredChainData::getNumConstraintInfos(void)
// int hkpPoweredChainData::getNumConstraintInfos(hkpPoweredChainData *this);
// [0x1b03520] (11 bytes) hkpPoweredChainData::getSolverResults(hkpConstraintRuntime *)const
// int hkpPoweredChainData::getSolverResults(int a1, int a2);
// [0x1b03530] (12 bytes) hkpPoweredChainData::getType(void)const
// int hkpPoweredChainData::getType();
// [0x1b03540] (91 bytes) hkpPoweredChainData::getConstraintInfo(hkpConstraintData::ConstraintInfo &)const
// uint32_t *hkpPoweredChainData::getConstraintInfo(int a1, uint32_t *a2);
// [0x1b035a0] (47 bytes) hkpPoweredChainData::getRuntimeInfo(hkBool,hkpConstraintData::RuntimeInfo &)const
// int hkpPoweredChainData::getRuntimeInfo(int a1, int a2, uint32_t *a3);
// [0x1b035d0] (283 bytes) hkpPoweredChainData::~hkpPoweredChainData()
// void hkpPoweredChainData::~hkpPoweredChainData(hkpPoweredChainData *this);
// [0x1b036f0] (93 bytes) hkpPoweredChainData::~hkpPoweredChainData()
// void hkpPoweredChainData::~hkpPoweredChainData(hkpPoweredChainData *this);
// [0x1b03750] (4712 bytes) hkpPoweredChainData::buildJacobian(hkpConstraintQueryIn const&,hkpConstraintQueryOut &)
// int hkpPoweredChainData::buildJacobian(int a1, int a2, int *a3);
// [0x1b049c0] (148 bytes) hkpPoweredChainData::hkpPoweredChainData(void)
// void hkpPoweredChainData::hkpPoweredChainData(hkpPoweredChainData *this);
// [0x1b04a60] (102 bytes) hkpPoweredChainData::hkpPoweredChainData(hkFinishLoadedObjectFlag)
// hkpBridgeConstraintAtom *hkpPoweredChainData::hkpPoweredChainData(hkpConstraintData **a1, int a2);
// [0x1b04ad0] (429 bytes) hkpPoweredChainData::addConstraintInfoInBodySpace(hkVector4f const&,hkVector4f const&,hkQuaternionf const&,hkpConstraintMotor *,hkpConstraintMotor *,hkpConstraintMotor *)
// int hkpPoweredChainData::addConstraintInfoInBodySpace( hkpPoweredChainData *this, const hkVector4f *a2, const hkVector4f *a3, const hkQuaternionf *a4, hkpConstraintMotor *a5, hkpConstraintMotor *a6, hkpConstraintMotor *a7);
// [0x1b04c80] (44 bytes) hkpPoweredChainData::enableMotor(hkpConstraintChainInstance *,int,int)
// uint8_t *hkpPoweredChainData::enableMotor(hkpPoweredChainData *this, hkpConstraintChainInstance *a2, char a3);
// [0x1b04cb0] (59 bytes) hkpPoweredChainData::disableMotor(hkpConstraintChainInstance *,int,int)
// uint8_t *hkpPoweredChainData::disableMotor(hkpPoweredChainData *this, hkpConstraintChainInstance *a2, char a3);
