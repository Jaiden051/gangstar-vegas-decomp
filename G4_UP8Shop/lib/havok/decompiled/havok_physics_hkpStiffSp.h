#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpStiffSp.h
// Library: havok | Module: havok_physics_hkpStiffSp
// Binary Address Span: 0x1712a70 .. 0x1aed5d0 (24 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1712a70] (22 bytes) hkpStiffSpringConstraintData::Atoms::staticClass(void)
// void *hkpStiffSpringConstraintData::Atoms::staticClass();
// [0x1712a90] (22 bytes) hkpStiffSpringConstraintData::staticClass(void)
// void *hkpStiffSpringConstraintData::staticClass();
// [0x1715fa0] (33 bytes) hkpStiffSpringConstraintData::getRuntimeInfo(hkBool,hkpConstraintData::RuntimeInfo &)const
// int64_t hkpStiffSpringConstraintData::getRuntimeInfo(int a1, char a2, uint64_t *a3);
// [0x1715fd0] (63 bytes) hkpStiffSpringConstraintData::isValid(void)const
// hkpStiffSpringConstraintData *hkpStiffSpringConstraintData::isValid( hkpStiffSpringConstraintData *this, int a2);
// [0x1716010] (12 bytes) hkpStiffSpringConstraintData::getType(void)const
// int hkpStiffSpringConstraintData::getType();
// [0x1716020] (29 bytes) hkpStiffSpringConstraintData::~hkpStiffSpringConstraintData()
// void hkpStiffSpringConstraintData::~hkpStiffSpringConstraintData(hkpStiffSpringConstraintData *this);
// [0x1716040] (53 bytes) hkpStiffSpringConstraintData::getConstraintInfo(hkpConstraintData::ConstraintInfo &)const
// int hkpStiffSpringConstraintData::getConstraintInfo(int a1, int a2);
// [0x1716080] (96 bytes) hkpStiffSpringConstraintData::~hkpStiffSpringConstraintData()
// void hkpStiffSpringConstraintData::~hkpStiffSpringConstraintData(hkpStiffSpringConstraintData *this);
// [0x17160e0] (141 bytes) hkpStiffSpringConstraintData::hkpStiffSpringConstraintData(void)
// void hkpStiffSpringConstraintData::hkpStiffSpringConstraintData(hkpStiffSpringConstraintData *this);
// [0x1719b90] (22 bytes) hkpStiffSpringConstraintAtom::staticClass(void)
// void *hkpStiffSpringConstraintAtom::staticClass();
// [0x1751fe0] (22 bytes) hkpStiffSpringChainData::ConstraintInfo::staticClass(void)
// void *hkpStiffSpringChainData::ConstraintInfo::staticClass();
// [0x1752000] (22 bytes) hkpStiffSpringChainData::staticClass(void)
// void *hkpStiffSpringChainData::staticClass();
// [0x1773e10] (10 bytes) hkpStiffSpringChainData::isValid(void)const
// hkpStiffSpringChainData *hkpStiffSpringChainData::isValid(hkpStiffSpringChainData *this);
// [0x1773e20] (12 bytes) hkpStiffSpringChainData::getNumConstraintInfos(void)
// int hkpStiffSpringChainData::getNumConstraintInfos(hkpStiffSpringChainData *this);
// [0x1773e30] (12 bytes) hkpStiffSpringChainData::getType(void)const
// int hkpStiffSpringChainData::getType();
// [0x1773e40] (83 bytes) hkpStiffSpringChainData::getConstraintInfo(hkpConstraintData::ConstraintInfo &)const
// uint32_t *hkpStiffSpringChainData::getConstraintInfo(int a1, uint32_t *a2);
// [0x1773ea0] (33 bytes) hkpStiffSpringChainData::getRuntimeInfo(hkBool,hkpConstraintData::RuntimeInfo &)const
// int hkpStiffSpringChainData::getRuntimeInfo(int a1, char a2, int *a3);
// [0x1773ed0] (109 bytes) hkpStiffSpringChainData::~hkpStiffSpringChainData()
// void hkpStiffSpringChainData::~hkpStiffSpringChainData(hkpStiffSpringChainData *this);
// [0x1773f40] (93 bytes) hkpStiffSpringChainData::~hkpStiffSpringChainData()
// void hkpStiffSpringChainData::~hkpStiffSpringChainData(hkpStiffSpringChainData *this);
// [0x1773fa0] (1590 bytes) hkpStiffSpringChainData::buildJacobian(hkpConstraintQueryIn const&,hkpConstraintQueryOut &)
// 0x1773fa0 hkpStiffSpringChainData::buildJacobian(hkpConstraintQueryIn const&,hkpConstraintQueryOut &)
// [0x17745e0] (114 bytes) hkpStiffSpringChainData::hkpStiffSpringChainData(void)
// void hkpStiffSpringChainData::hkpStiffSpringChainData(hkpStiffSpringChainData *this);
// [0x1774660] (102 bytes) hkpStiffSpringChainData::hkpStiffSpringChainData(hkFinishLoadedObjectFlag)
// hkpBridgeConstraintAtom *hkpStiffSpringChainData::hkpStiffSpringChainData(hkpConstraintData **a1, int a2);
// [0x17746d0] (170 bytes) hkpStiffSpringChainData::addConstraintInfoInBodySpace(hkVector4f const&,hkVector4f const&,float)
// int hkpStiffSpringChainData::addConstraintInfoInBodySpace( hkpStiffSpringChainData *this, const hkVector4f *a2, const hkVector4f *a3, float a4);
// [0x1aed5d0] (963 bytes) hkpStiffSpringDrawer::drawConstraint(hkpStiffSpringConstraintData const*,hkTransformf const&,hkTransformf const&,hkDebugDisplayHandler *,int,int)
// int hkpStiffSpringDrawer::drawConstraint( hkpStiffSpringDrawer *this, const hkpStiffSpringConstraintData *a2, const hkTransformf *a3, const hkTransformf *a4, hkDebugDisplayHandler *a5, int a6, int a7);
