#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpConstra.h
// Library: havok | Module: havok_physics_hkpConstra
// Binary Address Span: 0x1711d80 .. 0x1af38b0 (204 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1711d80] (29 bytes) hkpConstraintMotor::~hkpConstraintMotor()
// void hkpConstraintMotor::~hkpConstraintMotor(hkpConstraintMotor *this);
// [0x1711e60] (96 bytes) hkpConstraintMotor::~hkpConstraintMotor()
// void hkpConstraintMotor::~hkpConstraintMotor(hkpConstraintMotor *this);
// [0x1713750] (22 bytes) hkpConstraintMotor::staticClass(void)
// void *hkpConstraintMotor::staticClass();
// [0x1713820] (10 bytes) hkpConstraintData::isBuildJacobianCallbackRequired(void)const
// hkpConstraintData *hkpConstraintData::isBuildJacobianCallbackRequired(hkpConstraintData *this);
// [0x1717620] (22 bytes) hkpConstraintData::staticClass(void)
// void *hkpConstraintData::staticClass();
// [0x1719990] (22 bytes) hkpConstraintAtom::staticClass(void)
// void *hkpConstraintAtom::staticClass();
// [0x171b8b0] (29 bytes) hkpConstraintData::~hkpConstraintData()
// void hkpConstraintData::~hkpConstraintData(hkpConstraintData *this);
// [0x171b8d0] (11 bytes) hkpConstraintData::getSolverResults(hkpConstraintRuntime *)const
// int hkpConstraintData::getSolverResults(int a1, int a2);
// [0x171b8e0] (9 bytes) hkpConstraintData::setMaximumLinearImpulse(float)
// void hkpConstraintData::setMaximumLinearImpulse();
// [0x171b8f0] (9 bytes) hkpConstraintData::setMaximumAngularImpulse(float)
// void hkpConstraintData::setMaximumAngularImpulse();
// [0x171b900] (9 bytes) hkpConstraintData::setBreachImpulse(float)
// void hkpConstraintData::setBreachImpulse();
// [0x171b910] (22 bytes) hkpConstraintData::getMaximumLinearImpulse(void)const
// long double hkpConstraintData::getMaximumLinearImpulse();
// [0x171b930] (22 bytes) hkpConstraintData::getMaximumAngularImpulse(void)const
// long double hkpConstraintData::getMaximumAngularImpulse();
// [0x171b950] (22 bytes) hkpConstraintData::getBreachImpulse(void)const
// long double hkpConstraintData::getBreachImpulse();
// [0x171b970] (12 bytes) hkpConstraintData::getNotifiedBodyIndex(void)const
// int hkpConstraintData::getNotifiedBodyIndex();
// [0x171b980] (9 bytes) hkpConstraintData::setBodyToNotify(int)
// void hkpConstraintData::setBodyToNotify();
// [0x171b990] (9 bytes) hkpConstraintData::setSolvingMethod(hkpConstraintAtom::SolvingMethod)
// void hkpConstraintData::setSolvingMethod();
// [0x171b9a0] (13 bytes) hkpConstraintData::setInertiaStabilizationFactor(float)
// hkpConstraintData *hkpConstraintData::setInertiaStabilizationFactor(hkpConstraintData *this, float a2);
// [0x171b9b0] (13 bytes) hkpConstraintData::getInertiaStabilizationFactor(float &)const
// hkpConstraintData *hkpConstraintData::getInertiaStabilizationFactor(hkpConstraintData *this, float *a2);
// [0x171b9c0] (9 bytes) hkpConstraintData::buildJacobian(hkpConstraintQueryIn const&,hkpConstraintQueryOut &)
// void hkpConstraintData::buildJacobian();
// [0x171b9d0] (9 bytes) hkpConstraintData::buildJacobianCallback(hkpConstraintQueryIn const&,hkpConstraintQueryOut const&)
// void hkpConstraintData::buildJacobianCallback();
// [0x171b9e0] (54 bytes) hkpConstraintData::addInstance(hkpConstraintRuntime *,int)const
// hkString *hkpConstraintData::addInstance(int a1, hkString *a2, size_t a3);
// [0x171ba20] (96 bytes) hkpConstraintData::~hkpConstraintData()
// void hkpConstraintData::~hkpConstraintData(hkpConstraintData *this);
// [0x171ba80] (29 bytes) hkpConstraintData::hkpConstraintData(hkFinishLoadedObjectFlag)
// uint32_t *hkpConstraintData::hkpConstraintData(uint32_t *a1);
// [0x171baa0] (579 bytes) hkpConstraintData::getConstraintInfoUtil(hkpConstraintAtom const*,int,hkpConstraintData::ConstraintInfo &)
// uint32_t *hkpConstraintData::getConstraintInfoUtil(unsigned int a1, int a2, uint32_t *a3);
// [0x17307f0] (22 bytes) hkpConstraintChainInstanceAction::staticClass(void)
// void *hkpConstraintChainInstanceAction::staticClass();
// [0x1730b30] (29 bytes) hkpConstraintListener::~hkpConstraintListener()
// void hkpConstraintListener::~hkpConstraintListener(hkpConstraintListener *this);
// [0x1730b50] (9 bytes) hkpConstraintListener::constraintAddedCallback(hkpConstraintInstance *)
// void hkpConstraintListener::constraintAddedCallback();
// [0x1730b60] (9 bytes) hkpConstraintListener::constraintRemovedCallback(hkpConstraintInstance *)
// void hkpConstraintListener::constraintRemovedCallback();
// [0x1730b70] (9 bytes) hkpConstraintListener::constraintDeletedCallback(hkpConstraintInstance *)
// void hkpConstraintListener::constraintDeletedCallback();
// [0x1730b80] (9 bytes) hkpConstraintListener::constraintViolatedCallback(hkpConstraintInstance *)
// void hkpConstraintListener::constraintViolatedCallback();
// [0x1730b90] (9 bytes) hkpConstraintListener::constraintBreakingCallback(hkpConstraintBrokenEvent const&)
// void hkpConstraintListener::constraintBreakingCallback();
// [0x1730ba0] (9 bytes) hkpConstraintListener::constraintRepairedCallback(hkpConstraintRepairedEvent const&)
// void hkpConstraintListener::constraintRepairedCallback();
// [0x1730c30] (78 bytes) hkpConstraintListener::~hkpConstraintListener()
// void hkpConstraintListener::~hkpConstraintListener(hkpConstraintListener *this);
// [0x1730c80] (22 bytes) hkpConstraintCollisionFilter::staticClass(void)
// void *hkpConstraintCollisionFilter::staticClass();
// [0x1747fc0] (22 bytes) hkpConstraintChainData::staticClass(void)
// void *hkpConstraintChainData::staticClass();
// [0x174a6b0] (89 bytes) hkpConstraintCollisionFilter::~hkpConstraintCollisionFilter()
// void hkpConstraintCollisionFilter::~hkpConstraintCollisionFilter(hkpConstraintCollisionFilter *this);
// [0x174a760] (111 bytes) hkpConstraintCollisionFilter::init(hkpWorld *)
// int hkpConstraintCollisionFilter::init(hkpConstraintCollisionFilter *this, hkpWorld *a2);
// [0x174a7d0] (284 bytes) hkpConstraintCollisionFilter::constraintRemovedCallback(hkpConstraintInstance *)
// void hkpConstraintCollisionFilter::constraintRemovedCallback( hkpConstraintCollisionFilter *this, hkpConstraintInstance *a2);
// [0x174a900] (93 bytes) hkpConstraintCollisionFilter::~hkpConstraintCollisionFilter()
// void hkpConstraintCollisionFilter::~hkpConstraintCollisionFilter(hkpConstraintCollisionFilter *this);
// [0x174a9b0] (211 bytes) hkpConstraintCollisionFilter::constraintAddedCallback(hkpConstraintInstance *)
// void hkpConstraintCollisionFilter::constraintAddedCallback( hkpConstraintCollisionFilter *this, hkpConstraintInstance *a2);
// [0x174aaa0] (210 bytes) hkpConstraintCollisionFilter::hkpConstraintCollisionFilter(hkpCollisionFilter const*)
// void hkpConstraintCollisionFilter::hkpConstraintCollisionFilter( hkpConstraintCollisionFilter *this, const hkpCollisionFilter *a2);
// [0x174ab80] (269 bytes) hkpConstraintCollisionFilter::updateFromWorld(hkpWorld *)
// int hkpConstraintCollisionFilter::updateFromWorld(hkpConstraintCollisionFilter *this, hkpWorld *a2);
// [0x174ac90] (49 bytes) hkpConstraintCollisionFilter::_constraintBreakingCallbackImmediate(hkpConstraintInstance *,hkBool)
// int hkpConstraintCollisionFilter::_constraintBreakingCallbackImmediate(int *a1, int a2, char a3);
// [0x174acd0] (106 bytes) hkpConstraintCollisionFilter::constraintBreakingCallback(hkpConstraintBrokenEvent const&)
// int hkpConstraintCollisionFilter::constraintBreakingCallback(int *a1, int *a2);
// [0x174ad50] (106 bytes) hkpConstraintCollisionFilter::constraintRepairedCallback(hkpConstraintRepairedEvent const&)
// int hkpConstraintCollisionFilter::constraintRepairedCallback(int *a1, int *a2);
// [0x17587a0] (22 bytes) hkpConstraintInstance::SmallArraySerializeOverrideType::staticClass(void)
// void *hkpConstraintInstance::SmallArraySerializeOverrideType::staticClass();
// [0x17587c0] (22 bytes) hkpConstraintInstance::staticClass(void)
// void *hkpConstraintInstance::staticClass();
// [0x17589b0] (406 bytes) hkpConstraintSolverSetup::calcBufferOffsetsForSolve(hkpSimulationIsland const&,char *,int,hkpBuildJacobianTaskHeader &)
// int hkpConstraintSolverSetup::calcBufferOffsetsForSolve(uint32_t *a1, int a2, int a3, uint32_t *a4);
// [0x1758b50] (262 bytes) hkpConstraintSolverSetup::calcBufferSize(hkpSimulationIsland &)
// int hkpConstraintSolverSetup::calcBufferSize(hkpConstraintSolverSetup *this);
// [0x1758c60] (262 bytes) hkpConstraintSolverSetup_calcBufferSize(hkpSimulationIsland const&)
// int hkpConstraintSolverSetup_calcBufferSize(const hkpSimulationIsland *a1);
// [0x1758d70] (986 bytes) hkpConstraintSolverSetup::_buildJacobianElements(hkpConstraintQueryIn &,hkpEntity * const*,int,hkpVelocityAccumulator *,hkpJacobianSchema *,hkpJacobianSchema *,hkpJacobianSchema *)
// int hkpConstraintSolverSetup::_buildJacobianElements( uint32_t *a1, unsigned int a2, int a3, int a4, uint8_t *a5, unsigned int a6, uint8_t *a7);
// [0x1759150] (572 bytes) hkpConstraintSolverSetup::oneStepIntegrate(hkpSolverInfo const&,hkStepInfo const&,hkpVelocityAccumulator const*,hkpEntity * const*,int)
// int hkpConstraintSolverSetup::oneStepIntegrate(int a1, int a2, int a3, int a4, int a5);
// [0x1759390] (1626 bytes) hkpConstraintSolverSetup::solve(hkStepInfo const&,hkpSolverInfo const&,hkpConstraintQueryIn &,hkpSimulationIsland &,void *,int,hkpEntity * const*,int)
// int hkpConstraintSolverSetup::solve( int a1, int a2, uint32_t *a3, uint32_t *a4, int a5, int a6, unsigned int a7, int a8);
// [0x17599f0] (463 bytes) hkpConstraintSolverSetup::initializeSolverState(hkStepInfo &,hkpSolverInfo &,hkpConstraintQueryIn &,char *,int,unsigned char const*,float const*,hkpConstraintSolverResources &)
// unsigned int hkpConstraintSolverSetup::initializeSolverState( int a1, int a2, int a3, int a4, int a5, void *a6, float *a7, uint32_t *a8);
// [0x1759bc0] (9 bytes) hkpConstraintSolverSetup::shutdownSolver(hkpConstraintSolverResources &)
// void hkpConstraintSolverSetup::shutdownSolver();
// [0x1759bd0] (2501 bytes) hkpConstraintSolverSetup::internalAddAccumulators(hkpConstraintSolverResources &,hkpEntity * const*,int)
// uint8_t *hkpConstraintSolverSetup::internalAddAccumulators( __m128 a1, uint32_t *a2, int a3, uint8_t *a4);
// [0x175a5a0] (2328 bytes) hkpConstraintSolverSetup::internalAddJacobianSchemas(hkpConstraintSolverResources &,hkpConstraintInstance **,int,hkArray<hkpConstraintSchemaInfo,hkContainerHeapAllocator> &)
// uint32_t *hkpConstraintSolverSetup::internalAddJacobianSchemas(int a1, int *a2, int a3, int *a4);
// [0x175aec0] (45 bytes) hkpConstraintSolverSetup::internalIsMemoryOkForNewAccumulators(hkpConstraintSolverResources &,hkpEntity **,int)
// bool *hkpConstraintSolverSetup::internalIsMemoryOkForNewAccumulators( bool *a1, uint32_t *a2, int a3, int a4);
// [0x175aef0] (171 bytes) hkpConstraintSolverSetup::internalIsMemoryOkForNewJacobianSchemas(hkpConstraintSolverResources &,hkpConstraintInstance **,int)
// bool *hkpConstraintSolverSetup::internalIsMemoryOkForNewJacobianSchemas( bool *a1, uint32_t *a2, int *a3, int a4);
// [0x175afa0] (161 bytes) hkpConstraintSolverSetup::subSolve(hkpConstraintSolverResources &,hkpConstraintSolverSetup::SolverMode)
// int hkpConstraintSolverSetup::subSolve(uint32_t *a1, int a2);
// [0x175f760] (9 bytes) hkpConstraintInstance::getType(void)const
// int hkpConstraintInstance::getType();
// [0x175f770] (9 bytes) hkpConstraintInstance::entityAddedCallback(hkpEntity *)
// void hkpConstraintInstance::entityAddedCallback();
// [0x175f780] (9 bytes) hkpConstraintInstance::entityDeletedCallback(hkpEntity *)
// void hkpConstraintInstance::entityDeletedCallback();
// [0x175f790] (60 bytes) hkpConstraintInstance::entityRemovedCallback(hkpEntity *)
// hkpConstraintInstance *hkpConstraintInstance::entityRemovedCallback( hkpConstraintInstance *this, hkpWorldCallbackUtil **a2);
// [0x175f7d0] (429 bytes) hkpConstraintInstance::~hkpConstraintInstance()
// void hkpConstraintInstance::~hkpConstraintInstance(hkpConstraintInstance *this);
// [0x175f980] (93 bytes) hkpConstraintInstance::~hkpConstraintInstance()
// void hkpConstraintInstance::~hkpConstraintInstance(hkpConstraintInstance *this);
// [0x175f9e0] (313 bytes) hkpConstraintInstance::hkpConstraintInstance(hkpEntity *,hkpEntity *,hkpConstraintData *,hkpConstraintInstance::ConstraintPriority)
// int hkpConstraintInstance::hkpConstraintInstance(int a1, int a2, int a3, int a4, char a5);
// [0x175fb20] (126 bytes) hkpConstraintInstance::hkpConstraintInstance(hkpConstraintInstance::ConstraintPriority)
// void hkpConstraintInstance::hkpConstraintInstance(int a1, char a2);
// [0x175fba0] (22 bytes) hkpConstraintInstance::setPriority(hkpConstraintInstance::ConstraintPriority)
// int hkpConstraintInstance::setPriority(int a1, char a2);
// [0x175fbc0] (39 bytes) hkpConstraintInstance::getSimulationIsland(void)
// int hkpConstraintInstance::getSimulationIsland(hkpConstraintInstance *this);
// [0x175fbf0] (181 bytes) hkpConstraintInstance::addConstraintListener(hkpConstraintListener *)
// hkpConstraintListener *hkpConstraintInstance::addConstraintListener( hkpConstraintInstance *this, hkpConstraintListener *a2);
// [0x175fcb0] (75 bytes) hkpConstraintInstance::removeConstraintListener(hkpConstraintListener *)
// hkpConstraintInstance *hkpConstraintInstance::removeConstraintListener( hkpConstraintListener ***this, hkpConstraintListener *a2);
// [0x175fd00] (113 bytes) hkpConstraintInstance::pointNullsToFixedRigidBody(void)
// void hkpConstraintInstance::pointNullsToFixedRigidBody(hkpConstraintInstance *this);
// [0x175fd80] (50 bytes) hkpConstraintInstance::isConstrainedToWorld(void)const
// hkpConstraintInstance *hkpConstraintInstance::isConstrainedToWorld(hkpConstraintInstance *this, int a2);
// [0x175fdc0] (614 bytes) hkpConstraintInstance::clone(hkpEntity *,hkpEntity *,hkpConstraintInstance::CloningMode)const
// 0x175fdc0 hkpConstraintInstance::clone(hkpEntity *,hkpEntity *,hkpConstraintInstance::CloningMode)const
// [0x1760030] (3930 bytes) hkpConstraintInstance::transform(hkTransformf const&)
// char *hkpConstraintInstance::transform(hkpConstraintInstance *this, const hkTransformf *a2);
// [0x1760f90] (169 bytes) hkpConstraintInstance::getPivotsInWorld(hkVector4f &,hkVector4f &)const
// const hkTransformf *hkpConstraintInstance::getPivotsInWorld( hkpConstraintDataUtils **this, hkVector4f *a2, hkVector4f *a3);
// [0x1761040] (233 bytes) hkpConstraintInstance::setVirtualMassInverse(hkVector4f const&,hkVector4f const&)
// uint16_t *hkpConstraintInstance::setVirtualMassInverse( __m128i a1, hkpConstraintOwner **this, const hkVector4f *a3, const hkVector4f *a4);
// [0x1761130] (41 bytes) hkpConstraintInstance::enable(void)
// int hkpConstraintInstance::enable(hkpConstraintInstance **this);
// [0x1761160] (41 bytes) hkpConstraintInstance::disable(void)
// int hkpConstraintInstance::disable(hkpConstraintInstance **this);
// [0x1761190] (59 bytes) hkpConstraintInstance::setEnabled(hkBool)
// int hkpConstraintInstance::setEnabled(hkpConstraintInstance **a1, char a2);
// [0x17611d0] (57 bytes) hkpConstraintInstance::isEnabled(void)
// hkpConstraintInstance *hkpConstraintInstance::isEnabled(hkpConstraintInstance *this, int a2);
// [0x1761210] (154 bytes) hkpConstraintInstance::replaceEntity(hkpEntity *,hkpEntity *)
// int hkpConstraintInstance::replaceEntity(hkpConstraintInstance *this, hkpEntity *a2, hkpEntity *a3);
// [0x17612b0] (123 bytes) hkpConstraintInstance::setFixedRigidBodyPointersToZero(hkpWorld *)
// int hkpConstraintInstance::setFixedRigidBodyPointersToZero(hkpConstraintInstance *this, hkpWorld *a2);
// [0x17621b0] (9 bytes) hkpConstraintOwner::addConstraintToCriticalLockedIsland(hkpConstraintInstance *)
// void hkpConstraintOwner::addConstraintToCriticalLockedIsland();
// [0x17621c0] (9 bytes) hkpConstraintOwner::removeConstraintFromCriticalLockedIsland(hkpConstraintInstance *)
// void hkpConstraintOwner::removeConstraintFromCriticalLockedIsland();
// [0x17621d0] (9 bytes) hkpConstraintOwner::addCallbackRequest(hkpConstraintInstance *,int)
// void hkpConstraintOwner::addCallbackRequest();
// [0x17621e0] (9 bytes) hkpConstraintOwner::checkAccessRw(void)
// void hkpConstraintOwner::checkAccessRw();
// [0x1762460] (29 bytes) hkpConstraintOwner::~hkpConstraintOwner()
// void hkpConstraintOwner::~hkpConstraintOwner(hkpConstraintOwner *this);
// [0x1762a40] (96 bytes) hkpConstraintOwner::~hkpConstraintOwner()
// void hkpConstraintOwner::~hkpConstraintOwner(hkpConstraintOwner *this);
// [0x1763870] (9 bytes) hkpConstraintChainInstanceAction::applyAction(hkStepInfo const&)
// void hkpConstraintChainInstanceAction::applyAction();
// [0x1763880] (9 bytes) hkpConstraintChainInstanceAction::clone(hkArray<hkpEntity *,hkContainerHeapAllocator> const&,hkArray<hkpPhantom *,hkContainerHeapAllocator> const&)const
// int hkpConstraintChainInstanceAction::clone();
// [0x1763890] (32 bytes) hkpConstraintChainInstanceAction::entityRemovedCallback(hkpEntity *)
// int hkpConstraintChainInstanceAction::entityRemovedCallback( hkpConstraintChainInstanceAction *this, hkpEntity *a2);
// [0x17638b0] (405 bytes) hkpConstraintChainInstanceAction::getEntities(hkArray<hkpEntity *,hkContainerHeapAllocator> &)
// unsigned int hkpConstraintChainInstanceAction::getEntities(int a1, int *a2);
// [0x1763a50] (61 bytes) hkpConstraintChainInstanceAction::~hkpConstraintChainInstanceAction()
// void hkpConstraintChainInstanceAction::~hkpConstraintChainInstanceAction( hkpConstraintChainInstanceAction *this);
// [0x1763a90] (118 bytes) hkpConstraintChainInstanceAction::~hkpConstraintChainInstanceAction()
// void hkpConstraintChainInstanceAction::~hkpConstraintChainInstanceAction( hkpConstraintChainInstanceAction *this);
// [0x176fd00] (329 bytes) hkpConstraintCallbackUtil::fireConstraintAdded(hkpConstraintInstance *)
// int hkpConstraintCallbackUtil::fireConstraintAdded(hkpConstraintCallbackUtil *this);
// [0x176fe50] (329 bytes) hkpConstraintCallbackUtil::fireConstraintRemoved(hkpConstraintInstance *)
// int hkpConstraintCallbackUtil::fireConstraintRemoved(hkpConstraintCallbackUtil *this);
// [0x176ffa0] (329 bytes) hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintInstance *)
// int hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintCallbackUtil *this);
// [0x17700f0] (329 bytes) hkpConstraintCallbackUtil::fireConstraintBroken(hkpConstraintBrokenEvent const&)
// int hkpConstraintCallbackUtil::fireConstraintBroken(int a1);
// [0x1770240] (329 bytes) hkpConstraintCallbackUtil::fireConstraintRepaired(hkpConstraintRepairedEvent const&)
// int hkpConstraintCallbackUtil::fireConstraintRepaired(int a1);
// [0x1770410] (22 bytes) hkpConstraintChainInstance::staticClass(void)
// void *hkpConstraintChainInstance::staticClass();
// [0x17707e0] (29 bytes) hkpConstraintChainData::~hkpConstraintChainData()
// void hkpConstraintChainData::~hkpConstraintChainData(hkpConstraintChainData *this);
// [0x1770970] (96 bytes) hkpConstraintChainData::~hkpConstraintChainData()
// void hkpConstraintChainData::~hkpConstraintChainData(hkpConstraintChainData *this);
// [0x177d0c0] (415 bytes) hkpConstraintDataCloningUtil::deepClone(hkpConstraintData const*)
// hkpMalleableConstraintData *hkpConstraintDataCloningUtil::deepClone(hkpConstraintDataCloningUtil *this);
// [0x1785300] (12 bytes) hkpConstraintChainInstance::getType(void)const
// int hkpConstraintChainInstance::getType();
// [0x1785310] (146 bytes) hkpConstraintChainInstance::entityRemovedCallback(hkpEntity *)
// int hkpConstraintChainInstance::entityRemovedCallback(hkpAction **this, hkpEntity *a2);
// [0x17853b0] (250 bytes) hkpConstraintChainInstance::~hkpConstraintChainInstance()
// void hkpConstraintChainInstance::~hkpConstraintChainInstance(hkpConstraintChainInstance *this);
// [0x17854b0] (93 bytes) hkpConstraintChainInstance::~hkpConstraintChainInstance()
// void hkpConstraintChainInstance::~hkpConstraintChainInstance(hkpConstraintChainInstance *this);
// [0x1785510] (257 bytes) hkpConstraintChainInstance::hkpConstraintChainInstance(hkpConstraintChainData *)
// void hkpConstraintChainInstance::hkpConstraintChainInstance( hkpConstraintChainInstance *this, hkpConstraintChainData *a2);
// [0x1785620] (213 bytes) hkpConstraintChainInstance::addEntity(hkpEntity *)
// int hkpConstraintChainInstance::addEntity(hkpConstraintChainInstance *this, hkpEntity *a2);
// [0x1785700] (101 bytes) hkpConstraintConstructionKit::begin(hkpGenericConstraintData *)
// char *hkpConstraintConstructionKit::begin(hkpConstraintConstructionKit *this, hkpGenericConstraintData *a2);
// [0x1785770] (301 bytes) hkpConstraintConstructionKit::setLinearDofA(hkVector4f const&,int)
// int hkpConstraintConstructionKit::setLinearDofA( hkpConstraintConstructionKit *this, const hkVector4f *a2, int a3);
// [0x17858a0] (301 bytes) hkpConstraintConstructionKit::setLinearDofB(hkVector4f const&,int)
// int hkpConstraintConstructionKit::setLinearDofB( hkpConstraintConstructionKit *this, const hkVector4f *a2, int a3);
// [0x17859d0] (309 bytes) hkpConstraintConstructionKit::setLinearDofWorld(hkVector4f const&,int)
// int hkpConstraintConstructionKit::setLinearDofWorld( hkpConstraintConstructionKit *this, const hkVector4f *a2, int a3);
// [0x1785b10] (186 bytes) hkpConstraintConstructionKit::constrainLinearDof(int)
// uint32_t *hkpConstraintConstructionKit::constrainLinearDof(hkpConstraintConstructionKit *this, int a2);
// [0x1785bd0] (114 bytes) hkpConstraintConstructionKit::constrainAllLinearDof(void)
// uint32_t *hkpConstraintConstructionKit::constrainAllLinearDof(hkpConstraintConstructionKit *this);
// [0x1785c50] (429 bytes) hkpConstraintConstructionKit::setAngularBasisA(hkMatrix3f const&)
// int hkpConstraintConstructionKit::setAngularBasisA(hkpConstraintConstructionKit *this, const hkMatrix3f *a2);
// [0x1785e00] (429 bytes) hkpConstraintConstructionKit::setAngularBasisB(hkMatrix3f const&)
// int hkpConstraintConstructionKit::setAngularBasisB(hkpConstraintConstructionKit *this, const hkMatrix3f *a2);
// [0x1785fb0] (106 bytes) hkpConstraintConstructionKit::setAngularBasisABodyFrame(void)
// int hkpConstraintConstructionKit::setAngularBasisABodyFrame(hkpConstraintConstructionKit *this);
// [0x1786020] (106 bytes) hkpConstraintConstructionKit::setAngularBasisBBodyFrame(void)
// int hkpConstraintConstructionKit::setAngularBasisBBodyFrame(hkpConstraintConstructionKit *this);
// [0x1786090] (186 bytes) hkpConstraintConstructionKit::constrainToAngularDof(int)
// uint32_t *hkpConstraintConstructionKit::constrainToAngularDof(hkpConstraintConstructionKit *this, int a2);
// [0x1786150] (114 bytes) hkpConstraintConstructionKit::constrainAllAngularDof(void)
// uint32_t *hkpConstraintConstructionKit::constrainAllAngularDof(hkpConstraintConstructionKit *this);
// [0x17861d0] (213 bytes) hkpConstraintConstructionKit::setPivotA(hkVector4f const&)
// int hkpConstraintConstructionKit::setPivotA(hkpConstraintConstructionKit *this, const hkVector4f *a2);
// [0x17862b0] (213 bytes) hkpConstraintConstructionKit::setPivotB(hkVector4f const&)
// int hkpConstraintConstructionKit::setPivotB(hkpConstraintConstructionKit *this, const hkVector4f *a2);
// [0x1786390] (450 bytes) hkpConstraintConstructionKit::setPivotsHelper(hkpRigidBody *,hkpRigidBody *,hkVector4f const&)
// int hkpConstraintConstructionKit::setPivotsHelper( hkpConstraintConstructionKit *this, hkpRigidBody *a2, hkpRigidBody *a3, const hkVector4f *a4);
// [0x1786560] (317 bytes) hkpConstraintConstructionKit::setLinearLimit(int,float,float)
// int hkpConstraintConstructionKit::setLinearLimit( hkpConstraintConstructionKit *this, uint8_t a2, float a3, unsigned int a4);
// [0x17866a0] (317 bytes) hkpConstraintConstructionKit::setAngularLimit(int,float,float)
// int hkpConstraintConstructionKit::setAngularLimit( hkpConstraintConstructionKit *this, uint8_t a2, float a3, unsigned int a4);
// [0x17867e0] (345 bytes) hkpConstraintConstructionKit::setConeLimit(int,float)
// int hkpConstraintConstructionKit::setConeLimit(hkpConstraintConstructionKit *this, uint8_t a2, float x);
// [0x1786940] (441 bytes) hkpConstraintConstructionKit::setTwistLimit(int,int,float,float)
// int hkpConstraintConstructionKit::setTwistLimit( hkpConstraintConstructionKit *this, uint8_t a2, uint8_t a3, float a4, float x);
// [0x1786b00] (485 bytes) hkpConstraintConstructionKit::setAngularMotor(int,hkpConstraintMotor *)
// int hkpConstraintConstructionKit::setAngularMotor( hkpConstraintConstructionKit *this, uint8_t a2, hkpConstraintMotor *a3);
// [0x1786cf0] (485 bytes) hkpConstraintConstructionKit::setLinearMotor(int,hkpConstraintMotor *)
// int hkpConstraintConstructionKit::setLinearMotor( hkpConstraintConstructionKit *this, uint8_t a2, hkpConstraintMotor *a3);
// [0x1786ee0] (317 bytes) hkpConstraintConstructionKit::setAngularFriction(int,float)
// int hkpConstraintConstructionKit::setAngularFriction( hkpConstraintConstructionKit *this, uint8_t a2, unsigned int a3);
// [0x1787020] (317 bytes) hkpConstraintConstructionKit::setLinearFriction(int,float)
// int hkpConstraintConstructionKit::setLinearFriction( hkpConstraintConstructionKit *this, uint8_t a2, unsigned int a3);
// [0x1787160] (213 bytes) hkpConstraintConstructionKit::setStrength(float)
// int hkpConstraintConstructionKit::setStrength(hkpConstraintConstructionKit *this, unsigned int a2);
// [0x1787240] (98 bytes) hkpConstraintConstructionKit::restoreStrength(void)
// int hkpConstraintConstructionKit::restoreStrength(hkpConstraintConstructionKit *this);
// [0x17872b0] (245 bytes) hkpConstraintConstructionKit::addConstraintModifierCallback(hkpConstraintModifier *,int)
// int hkpConstraintConstructionKit::addConstraintModifierCallback(int a1, int a2, int a3);
// [0x17873b0] (98 bytes) hkpConstraintConstructionKit::end(void)
// int hkpConstraintConstructionKit::end(hkpConstraintConstructionKit *this);
// [0x1787420] (284 bytes) hkpConstraintConstructionKit::computeConstraintInfo(hkArray<int,hkContainerHeapAllocator> const&,hkpConstraintInfo &)
// uint32_t *hkpConstraintConstructionKit::computeConstraintInfo(int a1, uint32_t *a2);
// [0x182da00] (22 bytes) hkpConstrainedSystemFilter::staticClass(void)
// void *hkpConstrainedSystemFilter::staticClass();
// [0x1833f60] (22 bytes) hkpConstrainedSystemFilter::getClassType(void)const
// void *hkpConstrainedSystemFilter::getClassType();
// [0x1833f80] (106 bytes) hkpConstrainedSystemFilter::isCollisionEnabled(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpShapeContainer const&,unsigned int)const
// bool *hkpConstrainedSystemFilter::isCollisionEnabled(bool *a1, int a2);
// [0x1834000] (122 bytes) hkpConstrainedSystemFilter::isCollisionEnabled(hkpCollisionInput const&,hkpCdBody const&,hkpCdBody const&,hkpShapeContainer const&,hkpShapeContainer const&,unsigned int,unsigned int)const
// bool *hkpConstrainedSystemFilter::isCollisionEnabled(bool *a1, int a2);
// [0x1834090] (90 bytes) hkpConstrainedSystemFilter::isCollisionEnabled(hkpShapeRayCastInput const&,hkpShapeContainer const&,unsigned int)const
// bool *hkpConstrainedSystemFilter::isCollisionEnabled(bool *a1, int a2);
// [0x1834100] (90 bytes) hkpConstrainedSystemFilter::isCollisionEnabled(hkpWorldRayCastInput const&,hkpCollidable const&)const
// bool *hkpConstrainedSystemFilter::isCollisionEnabled(bool *a1, int a2);
// [0x1834170] (9 bytes) hkpConstrainedSystemFilter::constraintRemovedCallback(hkpConstraintInstance *)
// void hkpConstrainedSystemFilter::constraintRemovedCallback();
// [0x1834190] (311 bytes) hkpConstrainedSystemFilter::isCollisionEnabled(hkpCollidable const&,hkpCollidable const&)const
// hkpConstrainedSystemFilter *hkpConstrainedSystemFilter::isCollisionEnabled( hkpConstrainedSystemFilter *this, const hkpCollidable *a2, const hkpCollidable *a3, int a4);
// [0x18342e0] (80 bytes) hkpConstrainedSystemFilter::constraintAddedCallback(hkpConstraintInstance *)
// unsigned int hkpConstrainedSystemFilter::constraintAddedCallback( hkpConstrainedSystemFilter *this, hkpConstraintInstance *a2);
// [0x1834340] (210 bytes) hkpConstrainedSystemFilter::~hkpConstrainedSystemFilter()
// void hkpConstrainedSystemFilter::~hkpConstrainedSystemFilter(hkpConstrainedSystemFilter *this);
// [0x1834470] (93 bytes) hkpConstrainedSystemFilter::~hkpConstrainedSystemFilter()
// void hkpConstrainedSystemFilter::~hkpConstrainedSystemFilter(hkpConstrainedSystemFilter *this);
// [0x1834520] (131 bytes) hkpConstrainedSystemFilter::hkpConstrainedSystemFilter(hkpCollisionFilter const*)
// void hkpConstrainedSystemFilter::hkpConstrainedSystemFilter( hkpConstrainedSystemFilter *this, const hkpCollisionFilter *a2);
// [0x18361d0] (22 bytes) hkpConstraintViewer::getProcessTag(void)
// int hkpConstraintViewer::getProcessTag();
// [0x1836200] (45 bytes) hkpConstraintViewer::worldAddedCallback(hkpWorld *)
// int hkpConstraintViewer::worldAddedCallback(hkpConstraintViewer *this, hkpWorld *a2);
// [0x1836240] (45 bytes) hkpConstraintViewer::worldRemovedCallback(hkpWorld *)
// hkpWorld *hkpConstraintViewer::worldRemovedCallback(hkpConstraintViewer *this, hkpWorld *a2);
// [0x1836280] (194 bytes) hkpConstraintViewer::~hkpConstraintViewer()
// void hkpConstraintViewer::~hkpConstraintViewer(hkpConstraintViewer *this);
// [0x1836380] (93 bytes) hkpConstraintViewer::~hkpConstraintViewer()
// void hkpConstraintViewer::~hkpConstraintViewer(hkpConstraintViewer *this);
// [0x1836b60] (66 bytes) hkpConstraintViewer::registerViewer(void)
// int hkpConstraintViewer::registerViewer();
// [0x1836bb0] (150 bytes) hkpConstraintViewer::hkpConstraintViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// int hkpConstraintViewer::hkpConstraintViewer(uint32_t *a1, int a2);
// [0x1836c50] (92 bytes) hkpConstraintViewer::create(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// uint32_t *hkpConstraintViewer::create(int a1);
// [0x1836cb0] (476 bytes) hkpConstraintViewer::draw(hkpConstraintInstance *,hkpEntity const*,hkDebugDisplayHandler *)
// 0x1836cb0 hkpConstraintViewer::draw(hkpConstraintInstance *,hkpEntity const*,hkDebugDisplayHandler *)
// [0x1836e90] (524 bytes) hkpConstraintViewer::postSimulationCallback(hkpWorld *)
// int hkpConstraintViewer::postSimulationCallback(const hkpEntity **this, hkpWorld *a2);
// [0x184cc50] (1468 bytes) hkpConstraintChainDrawer::drawConstraint(hkpConstraintChainData const*,hkTransformf const&,hkTransformf const&,hkDebugDisplayHandler *,int,int,hkArray<hkpEntity *,hkContainerHeapAllocator> const&)
// int hkpConstraintChainDrawer::drawConstraint( uint32_t *a1, uint32_t *a2, int a3, int a4, hkDebugDisplayHandler *a5, int a6, int a7, uint32_t *a8);
// [0x1857fe0] (220 bytes) hkpConstraintUtils::convertToLimits(hkpConstraintInstance *)
// int hkpConstraintUtils::convertToLimits(hkpConstraintDataUtils **this);
// [0x18580c0] (1404 bytes) hkpConstraintUtils::setHingePivotToOptimalPosition(hkpConstraintInstance *)
// int hkpConstraintUtils::setHingePivotToOptimalPosition( hkpConstraintUtils *this, hkpConstraintInstance *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float a13, float a14, int a15, int a16, float a17, float a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31);
// [0x1858640] (424 bytes) hkpConstraintUtils::collectConstraints(hkArray<hkpEntity *,hkContainerHeapAllocator> const&,hkArray<hkpConstraintInstance *,hkContainerHeapAllocator> &,hkpConstraintUtils::CollectConstraintsFilter *)
// void hkpConstraintUtils::collectConstraints(uint32_t *a1, hkMemoryAllocator *a2, int a3);
// [0x18587f0] (1450 bytes) hkpConstraintUtils::createMatchingHingeConstraintFromCogWheelConstraint(hkpConstraintInstance const*,int,hkpRigidBody *,bool)
// 0x18587f0 hkpConstraintUtils::createMatchingHingeConstraintFromCogWheelConstraint(hkpConstraintInstance const*,int,hkpRigidBody *,bool)
// [0x1858da0] (1280 bytes) hkpConstraintUtils::createMatchingPrismaticConstraintFromRackAndPinionConstraint(hkpConstraintInstance *,hkpRigidBody *)
// 0x1858da0 hkpConstraintUtils::createMatchingPrismaticConstraintFromRackAndPinionConstraint(hkpConstraintInstance *,hkpRigidBody *)
// [0x18592a0] (1419 bytes) hkpConstraintUtils::createMatchingHingeConstraintFromRackAndPinionConstraint(hkpConstraintInstance *,hkpRigidBody *,bool)
// 0x18592a0 hkpConstraintUtils::createMatchingHingeConstraintFromRackAndPinionConstraint(hkpConstraintInstance *,hkpRigidBody *,bool)
// [0x1859830] (2291 bytes) hkpConstraintUtils::convertToPowered(hkpConstraintInstance const*,hkpConstraintMotor *,hkBool)
// int hkpConstraintUtils::convertToPowered(int a1, hkpConstraintMotor *a2, char a3);
// [0x185a130] (1232 bytes) hkpConstraintUtils::checkAndFixConstraint(hkpConstraintInstance const*,float,float)
// hkpConstraintUtils *hkpConstraintUtils::checkAndFixConstraint( hkpConstraintUtils *this, const hkpConstraintData **a2, float a3, float a4);
// [0x185a600] (510 bytes) hkpConstraintChainUtil::addConstraintToBallSocketChain(hkpConstraintChainInstance *,hkpEntity *,hkVector4f const&)
// int hkpConstraintChainUtil::addConstraintToBallSocketChain( hkpConstraintChainUtil *this, hkpConstraintChainInstance *a2, hkpEntity *a3);
// [0x185a800] (838 bytes) hkpConstraintChainUtil::addConstraintToPoweredChain(hkpConstraintChainInstance *,hkpEntity *,hkVector4f const&,hkpConstraintMotor *,hkpConstraintMotor *,hkpConstraintMotor *)
// int hkpConstraintChainUtil::addConstraintToPoweredChain( hkpConstraintChainUtil *this, hkpConstraintChainInstance *a2, hkpEntity *a3, const hkVector4f *a4, hkpConstraintMotor *a5, hkpConstraintMotor *a6);
// [0x185ab50] (294 bytes) hkpConstraintChainUtil::getAdjointEntities(hkArray<hkpConstraintInstance *,hkContainerHeapAllocator> const&,hkpEntity const*,hkArray<hkpEntity*,hkContainerHeapAllocator> &,hkArray<hkpConstraintInstance *,hkContainerHeapAllocator>&)
// void hkpConstraintChainUtil::getAdjointEntities(uint32_t *a1, int a2, hkMemoryAllocator *a3, uint32_t *a4);
// [0x185adb0] (942 bytes) hkpConstraintChainUtil::addConstraintToChain(hkpConstraintInstance *,hkpConstraintChainInstance *,hkpBallSocketChainData *)
// hkpConstraintChainUtil *hkpConstraintChainUtil::addConstraintToChain( hkpConstraintChainUtil *this, const hkpConstraintData **a2, hkpConstraintChainInstance *a3, hkpBallSocketChainData *a4);
// [0x185b160] (2432 bytes) hkpConstraintChainUtil::buildPoweredChain(hkArray<hkpConstraintInstance *,hkContainerHeapAllocator> &,hkBool)
// 0x185b160 hkpConstraintChainUtil::buildPoweredChain(hkArray<hkpConstraintInstance *,hkContainerHeapAllocator> &,hkBool)
// [0x185bae0] (1274 bytes) hkpConstraintChainUtil::buildBallSocketChain(hkArray<hkpConstraintInstance *,hkContainerHeapAllocator> &)
// int hkpConstraintChainUtil::buildBallSocketChain(int *a1);
// [0x185bfe0] (3021 bytes) hkpConstraintChainUtil::findConstraintLinkBetweenEntities(hkArray<hkpConstraintInstance *,hkContainerHeapAllocator> const&,hkpEntity *,hkpEntity *,hkArray<hkpEntity *,hkContainerHeapAllocator> &,hkArray<hkpConstraintInstance *,hkContainerHeapAllocator>&)
// uint32_t *hkpConstraintChainUtil::findConstraintLinkBetweenEntities( uint32_t *a1, uint32_t *a2, unsigned int a3, unsigned int a4, int *a5, int *a6);
// [0x1aedf50] (50 bytes) hkpConstraintDataUtils::getSizeOfRuntime(hkpConstraintData const*)
// int hkpConstraintDataUtils::getSizeOfRuntime(hkpConstraintDataUtils *this);
// [0x1aedf90] (578 bytes) hkpConstraintDataUtils::getLargestLinearImpulse(hkpConstraintData::ConstraintType,hkpConstraintRuntime const*,hkQTransform const&,hkQTransform const&)
// int hkpConstraintDataUtils::getLargestLinearImpulse(int a1, int a2, float *a3, float *a4);
// [0x1aee1e0] (58 bytes) hkpConstraintDataUtils::constraintSupportsPivotGetSet(hkpConstraintData const*)
// hkpConstraintDataUtils *hkpConstraintDataUtils::constraintSupportsPivotGetSet( hkpConstraintDataUtils *this, const hkpConstraintData *a2);
// [0x1aee220] (123 bytes) hkpConstraintDataUtils::getPivot(hkpConstraintData const*,int)
// float *hkpConstraintDataUtils::getPivot(hkpConstraintDataUtils *this, const hkpConstraintData *a2);
// [0x1aee2a0] (107 bytes) hkpConstraintDataUtils::getPivotA(hkpConstraintData const*)
// float *hkpConstraintDataUtils::getPivotA(hkpConstraintDataUtils *this);
// [0x1aee310] (107 bytes) hkpConstraintDataUtils::getPivotB(hkpConstraintData const*)
// float *hkpConstraintDataUtils::getPivotB(hkpConstraintDataUtils *this);
// [0x1aee380] (161 bytes) hkpConstraintDataUtils::setPivot(hkpConstraintData *,hkVector4f const&,int)
// uint32_t *hkpConstraintDataUtils::setPivot( hkpConstraintDataUtils *this, hkpConstraintData *a2, const hkVector4f *a3);
// [0x1aee430] (241 bytes) hkpConstraintDataUtils::setPivotTransform(hkpConstraintData *,hkTransformf const&,int)
// uint32_t *hkpConstraintDataUtils::setPivotTransform( hkpConstraintDataUtils *this, hkpConstraintData *a2, const hkTransformf *a3);
// [0x1aee530] (390 bytes) hkpConstraintDataUtils::getPivotTransform(hkpConstraintData const*,int,hkTransformf &)
// char *hkpConstraintDataUtils::getPivotTransform( hkpConstraintDataUtils *this, const hkpConstraintData *a2, uint32_t *a3);
// [0x1aee6c0] (2426 bytes) hkpConstraintDataUtils::cloneIfCanHaveMotors(hkpConstraintData const*)
// int hkpConstraintDataUtils::cloneIfCanHaveMotors(hkpConstraintDataUtils *this);
// [0x1aef040] (1447 bytes) hkpConstraintDataUtils::deepClone(hkpConstraintData const*)
// int hkpConstraintDataUtils::deepClone(hkpConstraintDataUtils *this);
// [0x1aef5f0] (291 bytes) hkpConstraintDataUtils::convertToPowered(hkpConstraintData *,hkpConstraintMotor *,hkBool)
// void hkpConstraintDataUtils::convertToPowered( hkpLimitedHingeConstraintData *a1, hkpConstraintMotor *a2, char a3);
// [0x1aef720] (1093 bytes) hkpConstraintDataUtils::createLimited(hkpConstraintData const*)
// hkpRagdollLimitsData *hkpConstraintDataUtils::createLimited(hkpConstraintDataUtils *this);
// [0x1aefb70] (394 bytes) hkpConstraintDataUtils::getConstraintPivots(hkpConstraintData const*,hkVector4f &,hkVector4f &)
// hkpConstraintDataUtils *hkpConstraintDataUtils::getConstraintPivots( hkpConstraintDataUtils *this, const hkpConstraintData *a2, hkVector4f *a3, hkVector4f *a4);
// [0x1aefd00] (334 bytes) hkpConstraintDataUtils::getConstraintMotors(hkpConstraintData const*,hkpConstraintMotor *&,hkpConstraintMotor *&,hkpConstraintMotor *&)
// hkpConstraintDataUtils *hkpConstraintDataUtils::getConstraintMotors( hkpConstraintDataUtils *this, const hkpConstraintData *a2, hkpConstraintMotor **a3, hkpConstraintMotor **a4, hkpConstraintMotor **a5);
// [0x1aefe50] (3372 bytes) hkpConstraintDataUtils::loosenConstraintLimits(hkpConstraintData *,hkTransformf const&,hkTransformf const&)
// 0x1aefe50 hkpConstraintDataUtils::loosenConstraintLimits(hkpConstraintData *,hkTransformf const&,hkTransformf const&)
// [0x1af3330] (104 bytes) hkpConstraintDrawer::hkpConstraintDrawer(void)
// void hkpConstraintDrawer::hkpConstraintDrawer(hkpConstraintDrawer *this);
// [0x1af33a0] (171 bytes) hkpConstraintDrawer::drawPivots(int,int)
// int hkpConstraintDrawer::drawPivots(hkpConstraintDrawer *this, int a2, int a3);
// [0x1af3450] (932 bytes) hkpConstraintDrawer::drawBodyFrames(int,int)
// int hkpConstraintDrawer::drawBodyFrames(hkpConstraintDrawer *this, int a2, int a3);
// [0x1af3800] (17 bytes) hkpConstraintDrawer::setLineLength(float)
// hkpConstraintDrawer *hkpConstraintDrawer::setLineLength(hkpConstraintDrawer *this, float a2);
// [0x1af3820] (18 bytes) hkpConstraintDrawer::setArcRadius(float)
// hkpConstraintDrawer *hkpConstraintDrawer::setArcRadius(hkpConstraintDrawer *this, float a2);
// [0x1af3840] (14 bytes) hkpConstraintDrawer::setNumArcSegments(int)
// hkpConstraintDrawer *hkpConstraintDrawer::setNumArcSegments(hkpConstraintDrawer *this, int a2);
// [0x1af3850] (18 bytes) hkpConstraintDrawer::setPivotSize(float)
// hkpConstraintDrawer *hkpConstraintDrawer::setPivotSize(hkpConstraintDrawer *this, float a2);
// [0x1af3870] (18 bytes) hkpConstraintDrawer::setArrowSize(float)
// hkpConstraintDrawer *hkpConstraintDrawer::setArrowSize(hkpConstraintDrawer *this, float a2);
// [0x1af3890] (18 bytes) hkpConstraintDrawer::setScale(float)
// hkpConstraintDrawer *hkpConstraintDrawer::setScale(hkpConstraintDrawer *this, float a2);
// [0x1af38b0] (253 bytes) hkpConstraintDrawer::updateCommonParameters(hkTransformf const&,hkTransformf const&)
// hkpConstraintDrawer *hkpConstraintDrawer::updateCommonParameters( hkpConstraintDrawer *this, const hkTransformf *a2, const hkTransformf *a3);
