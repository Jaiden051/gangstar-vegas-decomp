#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpVehicle.h
// Library: havok | Module: havok_physics_hkpVehicle
// Binary Address Span: 0x1728e90 .. 0x186fc70 (264 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1728e90] (29 bytes) hkpVehicleFrictionDescription::~hkpVehicleFrictionDescription()
// void hkpVehicleFrictionDescription::~hkpVehicleFrictionDescription(hkpVehicleFrictionDescription *this);
// [0x1728eb0] (96 bytes) hkpVehicleFrictionDescription::~hkpVehicleFrictionDescription()
// void hkpVehicleFrictionDescription::~hkpVehicleFrictionDescription(hkpVehicleFrictionDescription *this);
// [0x1728f10] (22 bytes) hkpVehicleFrictionDescription::AxisDescription::staticClass(void)
// void *hkpVehicleFrictionDescription::AxisDescription::staticClass();
// [0x1728f30] (22 bytes) hkpVehicleFrictionDescription::staticClass(void)
// void *hkpVehicleFrictionDescription::staticClass();
// [0x1728f50] (22 bytes) hkpVehicleFrictionStatus::AxisStatus::staticClass(void)
// void *hkpVehicleFrictionStatus::AxisStatus::staticClass();
// [0x1728f70] (22 bytes) hkpVehicleFrictionStatus::staticClass(void)
// void *hkpVehicleFrictionStatus::staticClass();
// [0x18471e0] (22 bytes) hkpVehicleViewer::getProcessTag(void)
// int hkpVehicleViewer::getProcessTag();
// [0x1847210] (68 bytes) hkpVehicleViewer::init(void)
// int hkpVehicleViewer::init(hkpVehicleViewer *this);
// [0x1847270] (66 bytes) hkpVehicleViewer::worldRemovedCallback(hkpWorld *)
// hkpWorld *hkpVehicleViewer::worldRemovedCallback(hkpVehicleViewer *this, hkpWorld *a2);
// [0x18472d0] (205 bytes) hkpVehicleViewer::~hkpVehicleViewer()
// void hkpVehicleViewer::~hkpVehicleViewer(hkpVehicleViewer *this);
// [0x18473e0] (261 bytes) hkpVehicleViewer::actionAddedCallback(hkpAction *)
// hkpVehicleViewer *hkpVehicleViewer::actionAddedCallback(hkpVehicleViewer *this, hkpAction *a2);
// [0x1847500] (177 bytes) hkpVehicleViewer::worldAddedCallback(hkpWorld *)
// int hkpVehicleViewer::worldAddedCallback(hkpVehicleViewer *this, hkpWorld *a2);
// [0x18475d0] (93 bytes) hkpVehicleViewer::~hkpVehicleViewer()
// void hkpVehicleViewer::~hkpVehicleViewer(hkpVehicleViewer *this);
// [0x1847670] (3194 bytes) hkpVehicleViewer::postSimulationCallback(hkpWorld *)
// int hkpVehicleViewer::postSimulationCallback(hkpVehicleViewer *this);
// [0x1848300] (151 bytes) hkpVehicleViewer::actionRemovedCallback(hkpAction *)
// void hkpVehicleViewer::actionRemovedCallback(hkpVehicleViewer *this, hkpAction *a2);
// [0x18483b0] (66 bytes) hkpVehicleViewer::registerViewer(void)
// int hkpVehicleViewer::registerViewer();
// [0x1848400] (107 bytes) hkpVehicleViewer::hkpVehicleViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// void (**hkpVehicleViewer::hkpVehicleViewer(uint32_t *a1, uint32_t *a2))(hkpVehicleViewer *__hidden this);
// [0x1848470] (92 bytes) hkpVehicleViewer::create(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// uint32_t *hkpVehicleViewer::create(uint32_t *a1);
// [0x185cbf0] (22 bytes) hkpVehicleLinearCastBatchingManager::staticClass(void)
// void *hkpVehicleLinearCastBatchingManager::staticClass();
// [0x185cce0] (29 bytes) hkpVehicleSteering::~hkpVehicleSteering()
// void hkpVehicleSteering::~hkpVehicleSteering(hkpVehicleSteering *this);
// [0x185cd00] (127 bytes) hkpVehicleDefaultSteering::calcSteering(float,hkpVehicleInstance const*,hkpVehicleDriverInput::FilteredDriverInputOutput const&,hkpVehicleSteering::SteeringAnglesOutput &)
// int hkpVehicleDefaultSteering::calcSteering(uint32_t *a1, int64_t a2, int a3, uint32_t *a4);
// [0x185cd80] (280 bytes) hkpVehicleDefaultSteering::calcMainSteeringAngle(float,hkpVehicleInstance const*,hkpVehicleDriverInput::FilteredDriverInputOutput const&,hkpVehicleSteering::SteeringAnglesOutput &)
// int hkpVehicleDefaultSteering::calcMainSteeringAngle(int a1, int a2, int a3, int a4, float *a5);
// [0x185cea0] (165 bytes) hkpVehicleDefaultSteering::~hkpVehicleDefaultSteering()
// void hkpVehicleDefaultSteering::~hkpVehicleDefaultSteering(hkpVehicleDefaultSteering *this);
// [0x185cf50] (96 bytes) hkpVehicleSteering::~hkpVehicleSteering()
// void hkpVehicleSteering::~hkpVehicleSteering(hkpVehicleSteering *this);
// [0x185cfb0] (108 bytes) hkpVehicleDefaultSteering::~hkpVehicleDefaultSteering()
// void hkpVehicleDefaultSteering::~hkpVehicleDefaultSteering(hkpVehicleDefaultSteering *this);
// [0x185d020] (68 bytes) hkpVehicleDefaultSteering::hkpVehicleDefaultSteering(void)
// void hkpVehicleDefaultSteering::hkpVehicleDefaultSteering(hkpVehicleDefaultSteering *this);
// [0x185d070] (22 bytes) hkpVehicleCastBatchingManager::staticClass(void)
// void *hkpVehicleCastBatchingManager::staticClass();
// [0x185d130] (29 bytes) hkpVehicleEngine::~hkpVehicleEngine()
// void hkpVehicleEngine::~hkpVehicleEngine(hkpVehicleEngine *this);
// [0x185d190] (96 bytes) hkpVehicleEngine::~hkpVehicleEngine()
// void hkpVehicleEngine::~hkpVehicleEngine(hkpVehicleEngine *this);
// [0x185d1f0] (22 bytes) hkpVehicleDefaultEngine::staticClass(void)
// void *hkpVehicleDefaultEngine::staticClass();
// [0x185d2e0] (32 bytes) hkpVehicleInstance::getPhantoms(hkArray<hkpPhantom *,hkContainerHeapAllocator> &)
// int hkpVehicleInstance::getPhantoms(int a1, int a2);
// [0x185d300] (227 bytes) hkpVehicleInstance::handleFixedGroundAccum(hkpRigidBody *,hkpVelocityAccumulator &)
// int hkpVehicleInstance::handleFixedGroundAccum(int a1, int a2, int a3);
// [0x185d3f0] (26 bytes) hkpVehicleInstance::calcRPM(void)const
// long double hkpVehicleInstance::calcRPM(hkpVehicleInstance *this);
// [0x185d410] (87 bytes) hkpVehicleInstance::addToWorld(hkpWorld *)
// int hkpVehicleInstance::addToWorld(hkpEntity **this, hkpWorld *a2);
// [0x185d470] (80 bytes) hkpVehicleInstance::removeFromWorld(void)
// hkpWorld *hkpVehicleInstance::removeFromWorld(hkpVehicleInstance *this);
// [0x185d4c0] (241 bytes) hkpVehicleInstance::calcMPH(void)const
// long double hkpVehicleInstance::calcMPH(hkpVehicleInstance *this);
// [0x185d5c0] (241 bytes) hkpVehicleInstance::calcKMPH(void)const
// long double hkpVehicleInstance::calcKMPH(hkpVehicleInstance *this);
// [0x185d6c0] (1268 bytes) hkpVehicleInstance::calcCurrentPositionAndRotation(hkpRigidBody const*,hkpVehicleSuspension const*,int,hkVector4f &,hkQuaternionf &)
// float *hkpVehicleInstance::calcCurrentPositionAndRotation( hkpVehicleInstance *this, const hkpRigidBody *a2, const hkpVehicleSuspension *a3, int a4, hkVector4f *a5, hkQuaternionf *a6);
// [0x185dbc0] (1101 bytes) hkpVehicleInstance::~hkpVehicleInstance()
// void hkpVehicleInstance::~hkpVehicleInstance(hkpVehicleInstance *this);
// [0x185e010] (93 bytes) hkpVehicleInstance::~hkpVehicleInstance()
// void hkpVehicleInstance::~hkpVehicleInstance(hkpVehicleInstance *this);
// [0x185e070] (226 bytes) hkpVehicleInstance::hkpVehicleInstance(hkpRigidBody *)
// void hkpVehicleInstance::hkpVehicleInstance(hkpVehicleInstance *this, hkpRigidBody *a2);
// [0x185e160] (2390 bytes) hkpVehicleInstance::clone(hkArray<hkpEntity *,hkContainerHeapAllocator> const&,hkArray<hkpPhantom *,hkContainerHeapAllocator> const&)const
// int *hkpVehicleInstance::clone(uint32_t *a1, hkpRigidBody ***a2, int a3);
// [0x185eac0] (42 bytes) hkpVehicleInstance::setChassis(hkpRigidBody *)
// hkpWorld *hkpVehicleInstance::setChassis(hkpWorld **this, hkpRigidBody *a2);
// [0x185eaf0] (369 bytes) hkpVehicleInstance::WheelInfo::init(void)
// hkpVehicleInstance::WheelInfo *hkpVehicleInstance::WheelInfo::init(hkpVehicleInstance::WheelInfo *this);
// [0x185ec70] (960 bytes) hkpVehicleInstance::init(void)
// int hkpVehicleInstance::init(hkpVehicleInstance *this);
// [0x185f030] (399 bytes) hkpVehicleInstance::updateBeforeCollisionDetection(void)
// int hkpVehicleInstance::updateBeforeCollisionDetection(hkpVehicleInstance *this);
// [0x185f1c0] (784 bytes) hkpVehicleInstance::updateWheels(float,hkpVehicleWheelCollide::CollisionDetectionWheelOutput const*)
// int hkpVehicleInstance::updateWheels(uint32_t *a1, int a2, uint32_t *a3);
// [0x185f4d0] (73 bytes) hkpVehicleInstance::updateDriverInput(float,hkpVehicleDriverInput::FilteredDriverInputOutput &)
// int hkpVehicleInstance::updateDriverInput(int a1, int a2, int a3);
// [0x185f520] (432 bytes) hkpVehicleInstance::updateSteering(float,hkpVehicleDriverInput::FilteredDriverInputOutput const&)
// int hkpVehicleInstance::updateSteering(uint32_t *a1, int a2, int a3);
// [0x185f6d0] (148 bytes) hkpVehicleInstance::updateTransmission(float,hkpVehicleTransmission::TransmissionOutput &)
// int hkpVehicleInstance::updateTransmission(int a1, int a2, int a3);
// [0x185f770] (110 bytes) hkpVehicleInstance::updateEngine(float,hkpVehicleDriverInput::FilteredDriverInputOutput const&,hkpVehicleTransmission::TransmissionOutput const&)
// int hkpVehicleInstance::updateEngine(int a1, int a2, int a3, int a4);
// [0x185f7e0] (336 bytes) hkpVehicleInstance::updateBrake(float,hkpVehicleDriverInput::FilteredDriverInputOutput const&,hkpVehicleBrake::WheelBreakingOutput &)
// int hkpVehicleInstance::updateBrake(int a1, int a2, int a3, int *a4);
// [0x185f930] (60 bytes) hkpVehicleInstance::updateSuspension(float,hkpVehicleWheelCollide::CollisionDetectionWheelOutput const*,hkArray<float,hkContainerHeapAllocator> &)
// int hkpVehicleInstance::updateSuspension(int a1, int a2, int a3, uint32_t *a4);
// [0x185f970] (50 bytes) hkpVehicleInstance::updateAerodynamics(float,hkpVehicleAerodynamics::AerodynamicsDragOutput &)
// int hkpVehicleInstance::updateAerodynamics(int a1, int a2, int a3);
// [0x185f9b0] (801 bytes) hkpVehicleInstance::updateComponents(hkStepInfo const&,hkpVehicleWheelCollide::CollisionDetectionWheelOutput const*,hkpVehicleAerodynamics::AerodynamicsDragOutput &,hkArray<float,hkContainerHeapAllocator> &,hkArray<float,hkContainerHeapAllocator> &)
// int hkpVehicleInstance::updateComponents(uint32_t *a1, int a2, uint32_t *a3, int a4, uint32_t *a5, uint32_t *a6);
// [0x185fce0] (170 bytes) hkpVehicleInstance::simulateVehicle(hkStepInfo const&,hkpVehicleAerodynamics::AerodynamicsDragOutput const&,hkArray<float,hkContainerHeapAllocator> const&,hkArray<float,hkContainerHeapAllocator> const&,hkpVehicleJobResults *)
// int hkpVehicleInstance::simulateVehicle(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x185fd90] (398 bytes) hkpVehicleInstance::stepVehicleUsingWheelCollideOutput(hkStepInfo const&,hkpVehicleWheelCollide::CollisionDetectionWheelOutput const*)
// int hkpVehicleInstance::stepVehicleUsingWheelCollideOutput(uint32_t *a1, int a2, uint32_t *a3);
// [0x185ff20] (266 bytes) hkpVehicleInstance::stepVehicle(hkStepInfo const&)
// hkLifoAllocator *hkpVehicleInstance::stepVehicle(hkpVehicleInstance *a1, int a2);
// [0x1860030] (42 bytes) hkpVehicleInstance::applyAction(hkStepInfo const&)
// hkLifoAllocator *hkpVehicleInstance::applyAction(hkpVehicleInstance *a1, int a2);
// [0x1860060] (22 bytes) hkpVehicleSimulation::staticClass(void)
// void *hkpVehicleSimulation::staticClass();
// [0x1860110] (29 bytes) hkpVehicleAerodynamics::~hkpVehicleAerodynamics()
// void hkpVehicleAerodynamics::~hkpVehicleAerodynamics(hkpVehicleAerodynamics *this);
// [0x1860170] (96 bytes) hkpVehicleAerodynamics::~hkpVehicleAerodynamics()
// void hkpVehicleAerodynamics::~hkpVehicleAerodynamics(hkpVehicleAerodynamics *this);
// [0x18601d0] (22 bytes) hkpVehicleDefaultAerodynamics::staticClass(void)
// void *hkpVehicleDefaultAerodynamics::staticClass();
// [0x18602c0] (29 bytes) hkpVehicleVelocityDamper::~hkpVehicleVelocityDamper()
// void hkpVehicleVelocityDamper::~hkpVehicleVelocityDamper(hkpVehicleVelocityDamper *this);
// [0x1860320] (96 bytes) hkpVehicleVelocityDamper::~hkpVehicleVelocityDamper()
// void hkpVehicleVelocityDamper::~hkpVehicleVelocityDamper(hkpVehicleVelocityDamper *this);
// [0x1860380] (22 bytes) hkpVehicleDefaultVelocityDamper::staticClass(void)
// void *hkpVehicleDefaultVelocityDamper::staticClass();
// [0x1860470] (9 bytes) hkpVehicleSimulation::addToWorld(hkpWorld *)
// void hkpVehicleSimulation::addToWorld();
// [0x1860480] (9 bytes) hkpVehicleSimulation::removeFromWorld(void)
// void hkpVehicleSimulation::removeFromWorld();
// [0x1860490] (29 bytes) hkpVehicleSimulation::~hkpVehicleSimulation()
// void hkpVehicleSimulation::~hkpVehicleSimulation(hkpVehicleSimulation *this);
// [0x1860520] (96 bytes) hkpVehicleSimulation::~hkpVehicleSimulation()
// void hkpVehicleSimulation::~hkpVehicleSimulation(hkpVehicleSimulation *this);
// [0x18605f0] (22 bytes) hkpVehiclePerWheelSimulation::WheelData::staticClass(void)
// void *hkpVehiclePerWheelSimulation::WheelData::staticClass();
// [0x1860610] (22 bytes) hkpVehiclePerWheelSimulation::staticClass(void)
// void *hkpVehiclePerWheelSimulation::staticClass();
// [0x18607b0] (1015 bytes) hkpVehicleDefaultSimulation::init(hkpVehicleInstance *)
// int hkpVehicleDefaultSimulation::init(hkpVehicleDefaultSimulation *this, hkpVehicleInstance *a2);
// [0x1860bb0] (122 bytes) hkpVehicleDefaultSimulation::~hkpVehicleDefaultSimulation()
// void hkpVehicleDefaultSimulation::~hkpVehicleDefaultSimulation(hkpVehicleDefaultSimulation *this);
// [0x1860c30] (178 bytes) hkpVehicleDefaultSimulation::~hkpVehicleDefaultSimulation()
// void hkpVehicleDefaultSimulation::~hkpVehicleDefaultSimulation(hkpVehicleDefaultSimulation *this);
// [0x1860cf0] (134 bytes) hkpVehicleDefaultSimulation::hkpVehicleDefaultSimulation(void)
// void hkpVehicleDefaultSimulation::hkpVehicleDefaultSimulation(hkpVehicleDefaultSimulation *this);
// [0x1860d80] (202 bytes) hkpVehicleDefaultSimulation::clone(hkpVehicleInstance *)
// hkpVehicleDefaultSimulation *hkpVehicleDefaultSimulation::clone(hkpVehicleDefaultSimulation *this);
// [0x1860e50] (227 bytes) hkpVehicleDefaultSimulation::handleFixedGroundAccum(hkpRigidBody *,hkpVelocityAccumulator &)
// int hkpVehicleDefaultSimulation::handleFixedGroundAccum(int a1, int a2, int a3);
// [0x1860f40] (963 bytes) hkpVehicleDefaultSimulation::getAxleParamsFromWheel(hkpVehicleInstance const&,int,float,float,float,hkpVehicleFrictionSolverAxleParams &)
// int hkpVehicleDefaultSimulation::getAxleParamsFromWheel( int a1, uint32_t *a2, int a3, float a4, float a5, float a6, int a7);
// [0x1861310] (3112 bytes) hkpVehicleDefaultSimulation::prepareAxleParams(hkpVehicleInstance const&,float,hkArray<float,hkContainerHeapAllocator> const&,hkArray<float,hkContainerHeapAllocator> const&,hkpRigidBody **,hkpVehicleFrictionSolverParams &,hkStepInfo const&,hkpVelocityAccumulator *,hkpVelocityAccumulator *)
// int hkpVehicleDefaultSimulation::prepareAxleParams( int a1, uint32_t *a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, float *a8, int a9, int a10);
// [0x1861f40] (763 bytes) hkpVehicleDefaultSimulation::prepareChassisParams(hkpVehicleInstance const&,hkStepInfo const&,hkpVehicleFrictionSolverParams &)
// hkVector4f *hkpVehicleDefaultSimulation::prepareChassisParams(int a1, int a2, float *a3, int a4);
// [0x1862240] (596 bytes) hkpVehicleDefaultSimulation::applyAerodynamicDrag(hkpVehicleInstance const&,hkpVehicleAerodynamics::AerodynamicsDragOutput const&,hkpVehicleFrictionSolverParams &,float)
// float *hkpVehicleDefaultSimulation::applyAerodynamicDrag(int a1, int a2, float *a3, float *a4, float a5);
// [0x18624a0] (181 bytes) hkpVehicleDefaultSimulation::applyVelocityDamping(float,hkpVehicleFrictionSolverParams &,hkpVehicleVelocityDamper const*)
// unsigned int *hkpVehicleDefaultSimulation::applyVelocityDamping(int a1, float a2, unsigned int *a3, float *a4);
// [0x1862560] (1918 bytes) hkpVehicleDefaultSimulation::applySuspensionForces(hkpVehicleInstance const&,float,hkArray<float,hkContainerHeapAllocator> const&,hkpRigidBody **,hkpVehicleFrictionSolverParams &,hkVector4f *)
// int hkpVehicleDefaultSimulation::applySuspensionForces( int a1, uint32_t *a2, float a3, uint32_t *a4, int a5, float *a6, uint32_t *a7);
// [0x1862ce0] (763 bytes) hkpVehicleDefaultSimulation::applyDampingToAxleAccumulators(hkStepInfo const&,hkpRigidBody **,hkpVehicleFrictionSolverParams &,hkVector4f *,hkVector4f *)
// __m128 *hkpVehicleDefaultSimulation::applyDampingToAxleAccumulators( int a1, int a2, __m128 **a3, int a4, uint32_t *a5, uint32_t *a6);
// [0x1862fe0] (330 bytes) hkpVehicleDefaultSimulation::applyDampingToChassisAccumulator(hkStepInfo const&,hkpVelocityAccumulator &,hkpMotion const*)
// int hkpVehicleDefaultSimulation::applyDampingToChassisAccumulator(int a1, int a2, int a3, int a4);
// [0x1863130] (164 bytes) hkpVehicleDefaultSimulation::getExtraTorqueFactor(hkpVehicleInstance const&,float,hkpVelocityAccumulator &)const
// float *hkpVehicleDefaultSimulation::getExtraTorqueFactor(int a1, int a2, float a3, float *a4);
// [0x18631e0] (88 bytes) hkpVehicleDefaultSimulation::applyFrictionSolver(hkpVehicleInstance const&,hkStepInfo const&,hkpVehicleFrictionSolverParams &,hkpVehicleFrictionStatus &)
// int hkpVehicleDefaultSimulation::applyFrictionSolver(int a1, int a2, int a3, int a4, int a5);
// [0x1863240] (284 bytes) hkpVehicleDefaultSimulation::calcChassisVelocities(hkpVehicleInstance const&,hkpVelocityAccumulator &,hkpVehicleJobResults &)
// int hkpVehicleDefaultSimulation::calcChassisVelocities(int a1, int a2, int a3, int a4);
// [0x1863360] (829 bytes) hkpVehicleDefaultSimulation::calcGroundBodyVelocities(hkpVehicleInstance const&,float,hkpVehicleFrictionSolverAxleParams const*,hkpRigidBody **,hkpVehicleJobResults &,hkVector4f *,hkVector4f *)
// int hkpVehicleDefaultSimulation::calcGroundBodyVelocities( int a1, int a2, float a3, int a4, uint32_t *a5, int a6, float *a7, float *a8);
// [0x18636a0] (1717 bytes) hkpVehicleDefaultSimulation::simulateVehicle(hkpVehicleInstance *,hkStepInfo const&,hkpVehicleSimulation::SimulationInput const&,hkpVehicleJobResults *)
// int hkpVehicleDefaultSimulation::simulateVehicle( int a1, hkpVehicleInstance *a2, float *a3, int a4, hkpVehicleJobResults *a5);
// [0x1863d60] (22 bytes) hkpVehicleTransmission::staticClass(void)
// void *hkpVehicleTransmission::staticClass();
// [0x1863e10] (29 bytes) hkpVehicleTransmission::~hkpVehicleTransmission()
// void hkpVehicleTransmission::~hkpVehicleTransmission(hkpVehicleTransmission *this);
// [0x1863e30] (82 bytes) hkpVehicleDefaultTransmission::getCurrentRatio(hkpVehicleInstance const*,hkpVehicleTransmission::TransmissionOutput &)const
// long double hkpVehicleDefaultTransmission::getCurrentRatio(int a1, int a2, int a3);
// [0x1863e90] (194 bytes) hkpVehicleDefaultTransmission::calcTransmission(float,hkpVehicleInstance const*,hkpVehicleTransmission::TransmissionOutput &)
// int hkpVehicleDefaultTransmission::calcTransmission(uint32_t *a1, int64_t a2, int a3);
// [0x1863f60] (207 bytes) hkpVehicleDefaultTransmission::calcTransmissionRPM(hkpVehicleInstance const*,hkpVehicleTransmission::TransmissionOutput &)const
// long double hkpVehicleDefaultTransmission::calcTransmissionRPM(uint32_t *a1, int a2, int a3);
// [0x1864030] (95 bytes) hkpVehicleDefaultTransmission::calcMainTransmittedTorque(hkpVehicleInstance const*,hkpVehicleTransmission::TransmissionOutput &)const
// long double hkpVehicleDefaultTransmission::calcMainTransmittedTorque(int a1, int a2, int a3);
// [0x1864090] (38 bytes) hkpVehicleDefaultTransmission::calcIsReversing(hkpVehicleInstance const*,hkpVehicleTransmission::TransmissionOutput &)const
// bool *hkpVehicleDefaultTransmission::calcIsReversing(bool *a1, int a2, int a3, int a4);
// [0x18640c0] (158 bytes) hkpVehicleDefaultTransmission::updateCurrentGear(float,hkpVehicleInstance const*,hkpVehicleTransmission::TransmissionOutput &)
// int hkpVehicleDefaultTransmission::updateCurrentGear(int a1, float a2, int a3, int a4);
// [0x1864160] (96 bytes) hkpVehicleTransmission::~hkpVehicleTransmission()
// void hkpVehicleTransmission::~hkpVehicleTransmission(hkpVehicleTransmission *this);
// [0x18641c0] (162 bytes) hkpVehicleDefaultTransmission::~hkpVehicleDefaultTransmission()
// void hkpVehicleDefaultTransmission::~hkpVehicleDefaultTransmission(hkpVehicleDefaultTransmission *this);
// [0x1864270] (219 bytes) hkpVehicleDefaultTransmission::~hkpVehicleDefaultTransmission()
// void hkpVehicleDefaultTransmission::~hkpVehicleDefaultTransmission(hkpVehicleDefaultTransmission *this);
// [0x1864350] (104 bytes) hkpVehicleDefaultTransmission::hkpVehicleDefaultTransmission(void)
// void hkpVehicleDefaultTransmission::hkpVehicleDefaultTransmission(hkpVehicleDefaultTransmission *this);
// [0x18643c0] (88 bytes) hkpVehicleDefaultTransmission::calculatePrimaryTransmissionRatio(float,float,float,float)
// long double hkpVehicleDefaultTransmission::calculatePrimaryTransmissionRatio( hkpVehicleDefaultTransmission *this, float a2, float a3, float a4);
// [0x1864420] (82 bytes) hkpVehicleDefaultTransmission::calculatePrimaryTransmissionRatioKPH(float,float,float,float)
// void hkpVehicleDefaultTransmission::calculatePrimaryTransmissionRatioKPH( hkpVehicleDefaultTransmission *this, int64_t a2, float a3);
// [0x18644c0] (22 bytes) hkpVehicleRayCastBatchingManager::staticClass(void)
// void *hkpVehicleRayCastBatchingManager::staticClass();
// [0x18645f0] (22 bytes) hkpVehicleDefaultSimulation::staticClass(void)
// void *hkpVehicleDefaultSimulation::staticClass();
// [0x18646e0] (9 bytes) hkpVehicleIntegrateJob::setRunsOnSpuOrPpu(void)
// void hkpVehicleIntegrateJob::setRunsOnSpuOrPpu();
// [0x18646f0] (583 bytes) hkpVehicleJobResults::applyForcesFromStep(hkpVehicleInstance const&)
// int hkpVehicleJobResults::applyForcesFromStep(hkpVehicleJobResults *this, const hkpVehicleInstance *a2);
// [0x1864940] (22 bytes) hkpVehicleVelocityDamper::staticClass(void)
// void *hkpVehicleVelocityDamper::staticClass();
// [0x18649f0] (22 bytes) hkpVehicleDriverInput::staticClass(void)
// void *hkpVehicleDriverInput::staticClass();
// [0x1864a10] (22 bytes) hkpVehicleDriverInputStatus::staticClass(void)
// void *hkpVehicleDriverInputStatus::staticClass();
// [0x1864b90] (22 bytes) hkpVehicleData::WheelComponentParams::staticClass(void)
// void *hkpVehicleData::WheelComponentParams::staticClass();
// [0x1864bb0] (22 bytes) hkpVehicleData::staticClass(void)
// void *hkpVehicleData::staticClass();
// [0x1864d50] (197 bytes) hkpVehicleData::~hkpVehicleData()
// void hkpVehicleData::~hkpVehicleData(hkpVehicleData *this);
// [0x1864e20] (536 bytes) hkpVehicleData::init(hkArray<hkpVehicleSuspension::SuspensionWheelParameters,hkContainerHeapAllocator> const&,hkpRigidBody *)
// int hkpVehicleData::init(int a1, int a2, int a3);
// [0x1865040] (254 bytes) hkpVehicleData::~hkpVehicleData()
// void hkpVehicleData::~hkpVehicleData(hkpVehicleData *this);
// [0x1865140] (298 bytes) hkpVehicleData::hkpVehicleData(void)
// void hkpVehicleData::hkpVehicleData(hkpVehicleData *this);
// [0x1865270] (80 bytes) hkpVehicleRayCastBatchingManager::getBufferSize(int,hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &)
// unsigned int hkpVehicleRayCastBatchingManager::getBufferSize(int a1, int a2, int a3);
// [0x18652c0] (45 bytes) hkpVehicleRayCastBatchingManager::~hkpVehicleRayCastBatchingManager()
// void hkpVehicleRayCastBatchingManager::~hkpVehicleRayCastBatchingManager( hkpVehicleRayCastBatchingManager *this);
// [0x18652f0] (104 bytes) hkpVehicleRayCastBatchingManager::~hkpVehicleRayCastBatchingManager()
// void hkpVehicleRayCastBatchingManager::~hkpVehicleRayCastBatchingManager( hkpVehicleRayCastBatchingManager *this);
// [0x1865360] (93 bytes) hkpVehicleRayCastBatchingManager::getRaycastBatchFromBuffer(void *,int,hkpVehicleRayCastBatchingManager::RaycastBatch &,hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &)
// int hkpVehicleRayCastBatchingManager::getRaycastBatchFromBuffer(int a1, int a2, int a3, uint32_t *a4, int a5);
// [0x18653c0] (542 bytes) hkpVehicleRayCastBatchingManager::buildAndAddCastJobs(hkpWorld const*,int,int,hkJobQueue *,hkSemaphore *,void *,hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &)
// int hkpVehicleRayCastBatchingManager::buildAndAddCastJobs( int a1, int a2, int a3, int a4, pthread_mutex_t *a5, int a6, int a7, uint32_t *a8);
// [0x18655e0] (860 bytes) hkpVehicleRayCastBatchingManager::stepVehiclesUsingCastResults(hkStepInfo const&,int,void *,hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &)
// int hkpVehicleRayCastBatchingManager::stepVehiclesUsingCastResults(int a1, int a2, int a3, int a4, uint32_t *a5);
// [0x1865940] (138 bytes) hkpVehicleManager::addVehicle(hkpVehicleInstance *)
// int hkpVehicleManager::addVehicle(hkpVehicleManager *this, hkpVehicleInstance *a2);
// [0x18659d0] (197 bytes) hkpVehicleManager::~hkpVehicleManager()
// void hkpVehicleManager::~hkpVehicleManager(hkpVehicleManager *this);
// [0x1865aa0] (93 bytes) hkpVehicleManager::~hkpVehicleManager()
// void hkpVehicleManager::~hkpVehicleManager(hkpVehicleManager *this);
// [0x1865b00] (158 bytes) hkpVehicleManager::removeVehicle(hkpVehicleInstance *)
// int hkpVehicleManager::removeVehicle(hkpVehicleManager *this, hkpVehicleInstance *a2);
// [0x1865ba0] (1473 bytes) hkpVehicleManager::stepVehicleArray(hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &,hkStepInfo const&)
// int hkpVehicleManager::stepVehicleArray(uint32_t *a1, int a2);
// [0x1866170] (192 bytes) hkpVehicleManager::getActiveVehicles(hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &)const
// hkpEntity *hkpVehicleManager::getActiveVehicles(hkpEntity *a1, hkMemoryAllocator *a2);
// [0x1866230] (361 bytes) hkpVehicleManager::stepVehicles(hkStepInfo const&)
// int hkpVehicleManager::stepVehicles(hkpEntity *a1, int a2);
// [0x18663a0] (69 bytes) hkpVehicleManager::addToWorld(hkpWorld *)
// int hkpVehicleManager::addToWorld(hkpVehicleManager *this, hkpWorld *a2);
// [0x18663f0] (61 bytes) hkpVehicleManager::removeFromWorld(void)
// int hkpVehicleManager::removeFromWorld(hkpVehicleManager *this);
// [0x1866430] (29 bytes) hkpVehicleDriverInputAnalogStatus::~hkpVehicleDriverInputAnalogStatus()
// void hkpVehicleDriverInputAnalogStatus::~hkpVehicleDriverInputAnalogStatus( hkpVehicleDriverInputAnalogStatus *this);
// [0x1866450] (29 bytes) hkpVehicleDriverInput::~hkpVehicleDriverInput()
// void hkpVehicleDriverInput::~hkpVehicleDriverInput(hkpVehicleDriverInput *this);
// [0x1866470] (140 bytes) hkpVehicleDefaultAnalogDriverInput::calcAcceleratorInput(float,hkpVehicleInstance const*,hkpVehicleDriverInputAnalogStatus const*,hkpVehicleDriverInput::FilteredDriverInputOutput &)const
// long double hkpVehicleDefaultAnalogDriverInput::calcAcceleratorInput(int a1, int a2, int a3, int a4);
// [0x1866500] (90 bytes) hkpVehicleDefaultAnalogDriverInput::calcBrakeInput(float,hkpVehicleInstance const*,hkpVehicleDriverInputAnalogStatus const*,hkpVehicleDriverInput::FilteredDriverInputOutput &)const
// long double hkpVehicleDefaultAnalogDriverInput::calcBrakeInput(int a1, int a2, int a3, int a4);
// [0x1866560] (213 bytes) hkpVehicleDefaultAnalogDriverInput::calcSteeringInput(float,hkpVehicleInstance const*,hkpVehicleDriverInputAnalogStatus const*,hkpVehicleDriverInput::FilteredDriverInputOutput &)const
// long double hkpVehicleDefaultAnalogDriverInput::calcSteeringInput(float *a1, int a2, int a3, int a4);
// [0x1866640] (235 bytes) hkpVehicleDefaultAnalogDriverInput::calcDriverInput(float,hkpVehicleInstance const*,hkpVehicleDriverInputStatus const*,hkpVehicleDriverInput::FilteredDriverInputOutput &)
// int hkpVehicleDefaultAnalogDriverInput::calcDriverInput(int a1, int64_t a2, int a3, int a4);
// [0x1866730] (29 bytes) hkpVehicleDefaultAnalogDriverInput::~hkpVehicleDefaultAnalogDriverInput()
// void hkpVehicleDefaultAnalogDriverInput::~hkpVehicleDefaultAnalogDriverInput( hkpVehicleDefaultAnalogDriverInput *this);
// [0x1866750] (96 bytes) hkpVehicleDefaultAnalogDriverInput::~hkpVehicleDefaultAnalogDriverInput()
// void hkpVehicleDefaultAnalogDriverInput::~hkpVehicleDefaultAnalogDriverInput( hkpVehicleDefaultAnalogDriverInput *this);
// [0x18667b0] (115 bytes) hkpVehicleDriverInputAnalogStatus::clone(void)const
// int hkpVehicleDriverInputAnalogStatus::clone(hkpVehicleDriverInputAnalogStatus *this);
// [0x1866830] (96 bytes) hkpVehicleDriverInput::~hkpVehicleDriverInput()
// void hkpVehicleDriverInput::~hkpVehicleDriverInput(hkpVehicleDriverInput *this);
// [0x1866890] (96 bytes) hkpVehicleDriverInputAnalogStatus::~hkpVehicleDriverInputAnalogStatus()
// void hkpVehicleDriverInputAnalogStatus::~hkpVehicleDriverInputAnalogStatus( hkpVehicleDriverInputAnalogStatus *this);
// [0x1866950] (1261 bytes) hkpVehicleDefaultAnalogDriverInput::calcTryingToReverse(float,hkpVehicleInstance const*,hkpVehicleDriverInputAnalogStatus const*,hkpVehicleDriverInput::FilteredDriverInputOutput &)
// bool *hkpVehicleDefaultAnalogDriverInput::calcTryingToReverse( bool *a1, int a2, int a3, int a4, int a5);
// [0x1866e40] (56 bytes) hkpVehicleDefaultAnalogDriverInput::hkpVehicleDefaultAnalogDriverInput(void)
// void hkpVehicleDefaultAnalogDriverInput::hkpVehicleDefaultAnalogDriverInput( hkpVehicleDefaultAnalogDriverInput *this);
// [0x1866e80] (45 bytes) hkpVehicleLinearCastBatchingManager::~hkpVehicleLinearCastBatchingManager()
// void hkpVehicleLinearCastBatchingManager::~hkpVehicleLinearCastBatchingManager( hkpVehicleLinearCastBatchingManager *this);
// [0x1866eb0] (104 bytes) hkpVehicleLinearCastBatchingManager::~hkpVehicleLinearCastBatchingManager()
// void hkpVehicleLinearCastBatchingManager::~hkpVehicleLinearCastBatchingManager( hkpVehicleLinearCastBatchingManager *this);
// [0x1866f20] (105 bytes) hkpVehicleLinearCastBatchingManager::getTotalNumCommands(hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &,int &,int &)const
// int hkpVehicleLinearCastBatchingManager::getTotalNumCommands(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x1866f90] (96 bytes) hkpVehicleLinearCastBatchingManager::getBufferSize(int,hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &)
// int hkpVehicleLinearCastBatchingManager::getBufferSize(int a1, int a2, uint32_t *a3);
// [0x1866ff0] (112 bytes) hkpVehicleLinearCastBatchingManager::getLinearCastBatchFromBuffer(void *,int,hkpVehicleLinearCastBatchingManager::LinearCastBatch &,hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &)
// int hkpVehicleLinearCastBatchingManager::getLinearCastBatchFromBuffer( int a1, int a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x1867060] (562 bytes) hkpVehicleLinearCastBatchingManager::buildAndAddCastJobs(hkpWorld const*,int,int,hkJobQueue *,hkSemaphore *,void *,hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &)
// int hkpVehicleLinearCastBatchingManager::buildAndAddCastJobs( int a1, int a2, int a3, int a4, pthread_mutex_t *a5, int a6, int a7, uint32_t *a8);
// [0x18672a0] (755 bytes) hkpVehicleLinearCastBatchingManager::stepVehiclesUsingCastResults(hkStepInfo const&,int,void *,hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &)
// int hkpVehicleLinearCastBatchingManager::stepVehiclesUsingCastResults( int a1, int a2, int a3, int a4, uint32_t *a5);
// [0x1867650] (22 bytes) hkpVehicleDefaultBrake::WheelBrakingProperties::staticClass(void)
// void *hkpVehicleDefaultBrake::WheelBrakingProperties::staticClass();
// [0x1867670] (22 bytes) hkpVehicleDefaultBrake::staticClass(void)
// void *hkpVehicleDefaultBrake::staticClass();
// [0x1867900] (22 bytes) hkpVehicleLinearCastWheelCollide::WheelState::staticClass(void)
// void *hkpVehicleLinearCastWheelCollide::WheelState::staticClass();
// [0x1867920] (22 bytes) hkpVehicleLinearCastWheelCollide::staticClass(void)
// void *hkpVehicleLinearCastWheelCollide::staticClass();
// [0x1867ac0] (22 bytes) hkpVehicleBrake::staticClass(void)
// void *hkpVehicleBrake::staticClass();
// [0x1867bf0] (22 bytes) hkpVehicleDefaultAnalogDriverInput::staticClass(void)
// void *hkpVehicleDefaultAnalogDriverInput::staticClass();
// [0x1867c10] (22 bytes) hkpVehicleDriverInputAnalogStatus::staticClass(void)
// void *hkpVehicleDriverInputAnalogStatus::staticClass();
// [0x1867e30] (22 bytes) hkpVehicleRayCastWheelCollide::staticClass(void)
// void *hkpVehicleRayCastWheelCollide::staticClass();
// [0x1867f20] (209 bytes) hkpVehicleDefaultSuspension::calcSuspension(float,hkpVehicleInstance const*,hkpVehicleWheelCollide::CollisionDetectionWheelOutput const*,float *)
// int hkpVehicleDefaultSuspension::calcSuspension(int a1, int a2, int a3, unsigned int a4, int a5);
// [0x1868000] (236 bytes) hkpVehicleDefaultSuspension::~hkpVehicleDefaultSuspension()
// void hkpVehicleDefaultSuspension::~hkpVehicleDefaultSuspension(hkpVehicleDefaultSuspension *this);
// [0x18680f0] (179 bytes) hkpVehicleDefaultSuspension::~hkpVehicleDefaultSuspension()
// void hkpVehicleDefaultSuspension::~hkpVehicleDefaultSuspension(hkpVehicleDefaultSuspension *this);
// [0x1868260] (78 bytes) hkpVehicleDefaultAerodynamics::calcAerodynamicDrag(float)const
// long double hkpVehicleDefaultAerodynamics::calcAerodynamicDrag(hkpVehicleDefaultAerodynamics *this, float a2);
// [0x18682b0] (69 bytes) hkpVehicleDefaultAerodynamics::calcAerodynamicLift(float)const
// long double hkpVehicleDefaultAerodynamics::calcAerodynamicLift(hkpVehicleDefaultAerodynamics *this, float a2);
// [0x1868300] (29 bytes) hkpVehicleDefaultAerodynamics::~hkpVehicleDefaultAerodynamics()
// void hkpVehicleDefaultAerodynamics::~hkpVehicleDefaultAerodynamics(hkpVehicleDefaultAerodynamics *this);
// [0x1868320] (96 bytes) hkpVehicleDefaultAerodynamics::~hkpVehicleDefaultAerodynamics()
// void hkpVehicleDefaultAerodynamics::~hkpVehicleDefaultAerodynamics(hkpVehicleDefaultAerodynamics *this);
// [0x1868380] (758 bytes) hkpVehicleDefaultAerodynamics::calcAerodynamics(float,hkpVehicleInstance const*,hkpVehicleAerodynamics::AerodynamicsDragOutput &)
// void hkpVehicleDefaultAerodynamics::calcAerodynamics(float *a1, int a2, int a3, int a4);
// [0x1868680] (77 bytes) hkpVehicleDefaultAerodynamics::hkpVehicleDefaultAerodynamics(void)
// void hkpVehicleDefaultAerodynamics::hkpVehicleDefaultAerodynamics(hkpVehicleDefaultAerodynamics *this);
// [0x18686d0] (446 bytes) hkpVehicleDefaultEngine::calcEngineInfo(float,hkpVehicleInstance const*,hkpVehicleDriverInput::FilteredDriverInputOutput const&,hkpVehicleTransmission::TransmissionOutput const&,hkpVehicleEngine::EngineOutput &)
// float *hkpVehicleDefaultEngine::calcEngineInfo(float *a1, int a2, int a3, float *a4, float *a5, float *a6);
// [0x1868890] (29 bytes) hkpVehicleDefaultEngine::~hkpVehicleDefaultEngine()
// void hkpVehicleDefaultEngine::~hkpVehicleDefaultEngine(hkpVehicleDefaultEngine *this);
// [0x18688b0] (96 bytes) hkpVehicleDefaultEngine::~hkpVehicleDefaultEngine()
// void hkpVehicleDefaultEngine::~hkpVehicleDefaultEngine(hkpVehicleDefaultEngine *this);
// [0x1868910] (105 bytes) hkpVehicleDefaultEngine::hkpVehicleDefaultEngine(void)
// void hkpVehicleDefaultEngine::hkpVehicleDefaultEngine(hkpVehicleDefaultEngine *this);
// [0x1868ac0] (22 bytes) hkpVehicleManager::staticClass(void)
// void *hkpVehicleManager::staticClass();
// [0x1868bf0] (22 bytes) hkpVehicleDefaultSteering::staticClass(void)
// void *hkpVehicleDefaultSteering::staticClass();
// [0x1868ce0] (29 bytes) hkpVehicleDefaultVelocityDamper::~hkpVehicleDefaultVelocityDamper()
// void hkpVehicleDefaultVelocityDamper::~hkpVehicleDefaultVelocityDamper(hkpVehicleDefaultVelocityDamper *this);
// [0x1868d00] (229 bytes) hkpVehicleDefaultVelocityDamper::applyVelocityDamping(float,hkpVehicleInstance &)
// int hkpVehicleDefaultVelocityDamper::applyVelocityDamping( hkpVehicleDefaultVelocityDamper *this, float a2, hkpVehicleInstance *a3);
// [0x1868df0] (96 bytes) hkpVehicleDefaultVelocityDamper::~hkpVehicleDefaultVelocityDamper()
// void hkpVehicleDefaultVelocityDamper::~hkpVehicleDefaultVelocityDamper(hkpVehicleDefaultVelocityDamper *this);
// [0x1868e50] (54 bytes) hkpVehicleDefaultVelocityDamper::hkpVehicleDefaultVelocityDamper(void)
// void hkpVehicleDefaultVelocityDamper::hkpVehicleDefaultVelocityDamper(hkpVehicleDefaultVelocityDamper *this);
// [0x1868f60] (150 bytes) hkpVehicleInstance::hkpVehicleInstance(hkFinishLoadedObjectFlag)
// void (**hkpVehicleInstance::hkpVehicleInstance(uint32_t *a1, int a2))(hkpVehicleInstance *__hidden this);
// [0x1869000] (22 bytes) hkpVehicleInstance::WheelInfo::staticClass(void)
// void *hkpVehicleInstance::WheelInfo::staticClass();
// [0x1869020] (22 bytes) hkpVehicleInstance::staticClass(void)
// void *hkpVehicleInstance::staticClass();
// [0x1869620] (22 bytes) hkpVehicleWheelCollide::staticClass(void)
// void *hkpVehicleWheelCollide::staticClass();
// [0x1869f00] (227 bytes) hkpVehicleLinearCastWheelCollide::collideWheels(float,hkpVehicleInstance const*,hkpVehicleWheelCollide::CollisionDetectionWheelOutput *)
// int hkpVehicleLinearCastWheelCollide::collideWheels(int *a1, int a2, int a3, int a4);
// [0x1869ff0] (75 bytes) hkpVehicleLinearCastWheelCollide::getTotalNumCommands(void)const
// int hkpVehicleLinearCastWheelCollide::getTotalNumCommands(hkpVehicleLinearCastWheelCollide *this);
// [0x186a040] (45 bytes) hkpVehicleLinearCastWheelCollide::getNumCommands(unsigned char)const
// int hkpVehicleLinearCastWheelCollide::getNumCommands( hkpVehicleLinearCastWheelCollide *this, uint8_t a2);
// [0x186a070] (98 bytes) hkpVehicleLinearCastWheelCollide::determineNearestHit(unsigned char,hkpPairLinearCastCommand const*)const
// int hkpVehicleLinearCastWheelCollide::determineNearestHit(int a1, uint8_t a2, int a3);
// [0x186a0e0] (177 bytes) hkpVehicleLinearCastWheelCollide::getCollisionOutputWithoutHit(hkpVehicleInstance const*,unsigned char,hkpVehicleWheelCollide::CollisionDetectionWheelOutput &)const
// int hkpVehicleLinearCastWheelCollide::getCollisionOutputWithoutHit(int a1, int a2, uint8_t a3, int a4);
// [0x186a1a0] (59 bytes) hkpVehicleLinearCastWheelCollide::setCollisionFilterInfo(unsigned int)
// int hkpVehicleLinearCastWheelCollide::setCollisionFilterInfo( hkpVehicleLinearCastWheelCollide *this, unsigned int a2);
// [0x186a1e0] (483 bytes) hkpVehicleLinearCastWheelCollide::buildLinearCastCommands(hkpVehicleInstance const*,hkpCollisionFilter const*,hkpCollidable *,hkpPairLinearCastCommand *,hkpRootCdPoint *)const
// int hkpVehicleLinearCastWheelCollide::buildLinearCastCommands(int a1, int a2, int a3, int a4, char *a5, int a6);
// [0x186a3d0] (502 bytes) hkpVehicleLinearCastWheelCollide::castSingleWheel(hkpVehicleInstance const*,unsigned char,hkpRootCdPoint &)const
// char *hkpVehicleLinearCastWheelCollide::castSingleWheel( char *a1, int a2, int a3, uint8_t a4, uint32_t *a5);
// [0x186a5d0] (153 bytes) hkpVehicleLinearCastWheelCollide::getPhantoms(hkArray<hkpPhantom *,hkContainerHeapAllocator> &)
// int hkpVehicleLinearCastWheelCollide::getPhantoms(int a1, hkMemoryAllocator *a2);
// [0x186a670] (76 bytes) hkpVehicleLinearCastWheelCollide::addToWorld(hkpWorld *)
// hkpPhantom *hkpVehicleLinearCastWheelCollide::addToWorld(hkpVehicleLinearCastWheelCollide *this, hkpWorld *a2);
// [0x186a6c0] (75 bytes) hkpVehicleLinearCastWheelCollide::removeFromWorld(void)
// int hkpVehicleLinearCastWheelCollide::removeFromWorld(hkpVehicleLinearCastWheelCollide *this);
// [0x186a710] (884 bytes) hkpVehicleLinearCastWheelCollide::getCollisionOutputFromCastResult(hkpVehicleInstance const*,unsigned char,hkpRootCdPoint const&,hkpVehicleWheelCollide::CollisionDetectionWheelOutput &)const
// int hkpVehicleLinearCastWheelCollide::getCollisionOutputFromCastResult( int a1, uint32_t *a2, uint8_t a3, float *a4, int a5);
// [0x186aa90] (332 bytes) hkpVehicleLinearCastWheelCollide::~hkpVehicleLinearCastWheelCollide()
// void hkpVehicleLinearCastWheelCollide::~hkpVehicleLinearCastWheelCollide( hkpVehicleLinearCastWheelCollide *this);
// [0x186abe0] (93 bytes) hkpVehicleLinearCastWheelCollide::~hkpVehicleLinearCastWheelCollide()
// void hkpVehicleLinearCastWheelCollide::~hkpVehicleLinearCastWheelCollide( hkpVehicleLinearCastWheelCollide *this);
// [0x186ac40] (121 bytes) hkpVehicleLinearCastWheelCollide::hkpVehicleLinearCastWheelCollide(void)
// void hkpVehicleLinearCastWheelCollide::hkpVehicleLinearCastWheelCollide(hkpVehicleLinearCastWheelCollide *this);
// [0x186acc0] (490 bytes) hkpVehicleLinearCastWheelCollide::clone(hkpRigidBody const&,hkArray<hkpPhantom *,hkContainerHeapAllocator> const&)const
// int hkpVehicleLinearCastWheelCollide::clone(int a1, int a2, int a3);
// [0x186aeb0] (280 bytes) hkpVehicleLinearCastWheelCollide::setWheelShapes(hkpVehicleInstance const*,hkArray<hkpShape *,hkContainerHeapAllocator> const&)
// int hkpVehicleLinearCastWheelCollide::setWheelShapes(int *a1, int a2, uint32_t *a3);
// [0x186afd0] (205 bytes) hkpVehicleLinearCastWheelCollide::createWheelShape(float,float)
// hkpCylinderShape *hkpVehicleLinearCastWheelCollide::createWheelShape( hkpVehicleLinearCastWheelCollide *this, float a2, float a3);
// [0x186b0a0] (454 bytes) hkpVehicleLinearCastWheelCollide::calcAabbOfWheel(hkpVehicleInstance const*,unsigned char,hkAabb &)const
// float *hkpVehicleLinearCastWheelCollide::calcAabbOfWheel( hkpVehicleLinearCastWheelCollide *this, const hkpVehicleInstance *a2, uint8_t a3, hkAabb *a4);
// [0x186b270] (836 bytes) hkpVehicleLinearCastWheelCollide::updateWheelState(hkpVehicleInstance const*,unsigned char)
// int hkpVehicleLinearCastWheelCollide::updateWheelState( hkpVehicleLinearCastWheelCollide *this, const hkpVehicleInstance *a2, uint8_t a3);
// [0x186b5c0] (159 bytes) hkpVehicleLinearCastWheelCollide::updateBeforeCollisionDetection(hkpVehicleInstance const*)
// int hkpVehicleLinearCastWheelCollide::updateBeforeCollisionDetection( hkpVehicleLinearCastWheelCollide *this, const hkpVehicleInstance *a2);
// [0x186b660] (507 bytes) hkpVehicleLinearCastWheelCollide::init(hkpVehicleInstance const*)
// int hkpVehicleLinearCastWheelCollide::init( hkpVehicleLinearCastWheelCollide *this, const hkpVehicleInstance *a2);
// [0x186b860] (139 bytes) hkpVehicleLinearCastWheelCollide::centerWheelContactPoint(hkpVehicleInstance const*,unsigned char,hkpVehicleWheelCollide::CollisionDetectionWheelOutput &)const
// int hkpVehicleLinearCastWheelCollide::centerWheelContactPoint( int a1, int a2, uint8_t a3, hkVector4f *a4);
// [0x186b8f0] (59 bytes) hkpVehicleLinearCastWheelCollide::wheelCollideCallback(hkpVehicleInstance const*,unsigned char,hkpVehicleWheelCollide::CollisionDetectionWheelOutput &)
// int hkpVehicleLinearCastWheelCollide::wheelCollideCallback(int a1, int a2, char a3, hkVector4f *a4);
// [0x186ba60] (62 bytes) hkpVehicleCastBatchingManager::updateBeforeCollisionDetection(hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &)
// int hkpVehicleCastBatchingManager::updateBeforeCollisionDetection(int a1, uint32_t *a2);
// [0x186baa0] (45 bytes) hkpVehicleCastBatchingManager::~hkpVehicleCastBatchingManager()
// void hkpVehicleCastBatchingManager::~hkpVehicleCastBatchingManager(hkpVehicleCastBatchingManager *this);
// [0x186bad0] (104 bytes) hkpVehicleCastBatchingManager::~hkpVehicleCastBatchingManager()
// void hkpVehicleCastBatchingManager::~hkpVehicleCastBatchingManager(hkpVehicleCastBatchingManager *this);
// [0x186bb40] (25 bytes) hkpVehicleCastBatchingManager::getStandardFilterSize(hkpWorld const*)
// int hkpVehicleCastBatchingManager::getStandardFilterSize(hkpVehicleCastBatchingManager *this);
// [0x186bb60] (554 bytes) hkpVehicleCastBatchingManager::stepVehiclesSynchronously(hkpWorld *,hkStepInfo const&,hkThreadPool *,hkJobQueue *,int,hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &)
// hkLifoAllocator *hkpVehicleCastBatchingManager::stepVehiclesSynchronously( int a1, hkpWorld *a2, int a3, int a4, pthread_mutex_t *a5, int a6, int a7);
// [0x186bd90] (57 bytes) hkpVehicleCastBatchingManager::addVehicle(hkpVehicleInstance *)
// int hkpVehicleCastBatchingManager::addVehicle(hkpVehicleCastBatchingManager *this, hkpVehicleInstance *a2);
// [0x186bdd0] (57 bytes) hkpVehicleCastBatchingManager::removeVehicle(hkpVehicleInstance *)
// int hkpVehicleCastBatchingManager::removeVehicle(hkpVehicleCastBatchingManager *this, hkpVehicleInstance *a2);
// [0x186be60] (22 bytes) hkpVehicleDefaultSuspension::WheelSpringSuspensionParameters::staticClass(void)
// void *hkpVehicleDefaultSuspension::WheelSpringSuspensionParameters::staticClass();
// [0x186be80] (22 bytes) hkpVehicleDefaultSuspension::staticClass(void)
// void *hkpVehicleDefaultSuspension::staticClass();
// [0x186c1a0] (22 bytes) hkpVehicleDefaultTransmission::staticClass(void)
// void *hkpVehicleDefaultTransmission::staticClass();
// [0x186c2d0] (22 bytes) hkpVehicleSteeringAckerman::staticClass(void)
// void *hkpVehicleSteeringAckerman::staticClass();
// [0x186c3c0] (48 bytes) hkpVehiclePerWheelSimulation::addToWorld(hkpWorld *)
// int hkpVehiclePerWheelSimulation::addToWorld(hkpVehiclePerWheelSimulation *this, hkpWorld *a2);
// [0x186c3f0] (946 bytes) hkpVehiclePerWheelSimulation::init(hkpVehicleInstance *)
// hkpWheelFrictionConstraintData *hkpVehiclePerWheelSimulation::init( hkpVehiclePerWheelSimulation *this, hkpVehicleInstance *a2);
// [0x186c7b0] (107 bytes) hkpVehiclePerWheelSimulation::hkpVehiclePerWheelSimulation(void)
// void hkpVehiclePerWheelSimulation::hkpVehiclePerWheelSimulation(hkpVehiclePerWheelSimulation *this);
// [0x186c820] (143 bytes) hkpVehiclePerWheelSimulation::clone(hkpVehicleInstance *)
// hkpVehiclePerWheelSimulation *hkpVehiclePerWheelSimulation::clone( hkpVehiclePerWheelSimulation *this, hkpVehicleInstance *a2);
// [0x186c8b0] (255 bytes) hkpVehiclePerWheelSimulation::applySuspensionForces(hkStepInfo const&,hkpVehicleSimulation::SimulationInput const&)
// uint32_t *hkpVehiclePerWheelSimulation::applySuspensionForces(int a1, int a2, int a3);
// [0x186c9b0] (716 bytes) hkpVehiclePerWheelSimulation::applyAerodynamicForces(hkStepInfo const&,hkpVehicleSimulation::SimulationInput const&)
// int hkpVehiclePerWheelSimulation::applyAerodynamicForces(int a1, int a2, float **a3);
// [0x186cc80] (162 bytes) hkpVehiclePerWheelSimulation::removeFrictionConstraint(int)
// int hkpVehiclePerWheelSimulation::removeFrictionConstraint(hkpVehiclePerWheelSimulation *this, int a2);
// [0x186cd30] (117 bytes) hkpVehiclePerWheelSimulation::removeFromWorld(void)
// hkpWorld *hkpVehiclePerWheelSimulation::removeFromWorld(hkpWorld **this);
// [0x186cdb0] (336 bytes) hkpVehiclePerWheelSimulation::~hkpVehiclePerWheelSimulation()
// void hkpVehiclePerWheelSimulation::~hkpVehiclePerWheelSimulation(hkpVehiclePerWheelSimulation *this);
// [0x186cf10] (93 bytes) hkpVehiclePerWheelSimulation::~hkpVehiclePerWheelSimulation()
// void hkpVehiclePerWheelSimulation::~hkpVehiclePerWheelSimulation(hkpVehiclePerWheelSimulation *this);
// [0x186cf80] (1471 bytes) hkpVehiclePerWheelSimulation::setupFriction(hkStepInfo const&,hkpVehicleSimulation::SimulationInput const&)
// hkpVehiclePerWheelSimulation *hkpVehiclePerWheelSimulation::setupFriction( hkpVehiclePerWheelSimulation *a1, int a2, int a3);
// [0x186d540] (88 bytes) hkpVehiclePerWheelSimulation::simulateVehicle(hkpVehicleInstance *,hkStepInfo const&,hkpVehicleSimulation::SimulationInput const&,hkpVehicleJobResults *)
// hkpVehiclePerWheelSimulation *hkpVehiclePerWheelSimulation::simulateVehicle( hkpVehiclePerWheelSimulation *a1, int a2, int a3, float **a4);
// [0x186d5a0] (296 bytes) hkpVehiclePerWheelSimulation::computeAngularChassisAcceleration(hkVector4f const&,hkVector4f const&,hkVector4f&)
// hkVector4f *hkpVehiclePerWheelSimulation::computeAngularChassisAcceleration( hkpVehiclePerWheelSimulation *this, const hkVector4f *a2, const hkVector4f *a3, hkVector4f *a4);
// [0x186d6d0] (1280 bytes) hkpVehiclePerWheelSimulation::postSimulationCallback(hkpWorld *)
// float *hkpVehiclePerWheelSimulation::postSimulationCallback(hkpVehiclePerWheelSimulation *this, hkpWorld *a2);
// [0x186dbf0] (22 bytes) hkpVehicleSuspension::SuspensionWheelParameters::staticClass(void)
// void *hkpVehicleSuspension::SuspensionWheelParameters::staticClass();
// [0x186dc10] (22 bytes) hkpVehicleSuspension::staticClass(void)
// void *hkpVehicleSuspension::staticClass();
// [0x186dd70] (22 bytes) hkpVehicleAerodynamics::staticClass(void)
// void *hkpVehicleAerodynamics::staticClass();
// [0x186de20] (165 bytes) hkpVehicleSteeringAckerman::~hkpVehicleSteeringAckerman()
// void hkpVehicleSteeringAckerman::~hkpVehicleSteeringAckerman(hkpVehicleSteeringAckerman *this);
// [0x186ded0] (108 bytes) hkpVehicleSteeringAckerman::~hkpVehicleSteeringAckerman()
// void hkpVehicleSteeringAckerman::~hkpVehicleSteeringAckerman(hkpVehicleSteeringAckerman *this);
// [0x186df40] (82 bytes) hkpVehicleSteeringAckerman::hkpVehicleSteeringAckerman(void)
// void hkpVehicleSteeringAckerman::hkpVehicleSteeringAckerman(hkpVehicleSteeringAckerman *this);
// [0x186dfa0] (280 bytes) hkpVehicleSteeringAckerman::calcMainSteeringAngle(float,hkpVehicleInstance const*,hkpVehicleDriverInput::FilteredDriverInputOutput const&,hkpVehicleSteering::SteeringAnglesOutput &)
// int hkpVehicleSteeringAckerman::calcMainSteeringAngle(int a1, int a2, int a3, int a4, float *a5);
// [0x186e0c0] (625 bytes) hkpVehicleSteeringAckerman::calcAckermanOuterAngles(hkpVehicleInstance const*,hkpVehicleSteering::SteeringAnglesOutput &)
// int hkpVehicleSteeringAckerman::calcAckermanOuterAngles(int a1, int a2, int a3);
// [0x186e340] (92 bytes) hkpVehicleSteeringAckerman::calcSteering(float,hkpVehicleInstance const*,hkpVehicleDriverInput::FilteredDriverInputOutput const&,hkpVehicleSteering::SteeringAnglesOutput &)
// int hkpVehicleSteeringAckerman::calcSteering(int a1, int64_t a2, int a3, float *a4);
// [0x186e3a0] (22 bytes) hkpVehicleSteering::staticClass(void)
// void *hkpVehicleSteering::staticClass();
// [0x186e450] (22 bytes) hkpVehicleEngine::staticClass(void)
// void *hkpVehicleEngine::staticClass();
// [0x186ec00] (347 bytes) hkpVehicleRayCastWheelCollide::calcWheelsAABB(hkpVehicleInstance const*,hkAabb &)const
// int hkpVehicleRayCastWheelCollide::calcWheelsAABB( hkpVehicleRayCastWheelCollide *this, const hkpVehicleInstance *a2, hkAabb *a3);
// [0x186ed60] (296 bytes) hkpVehicleRayCastWheelCollide::collideWheels(float,hkpVehicleInstance const*,hkpVehicleWheelCollide::CollisionDetectionWheelOutput *)
// int hkpVehicleRayCastWheelCollide::collideWheels(int *a1, int a2, int a3, int a4);
// [0x186ee90] (177 bytes) hkpVehicleRayCastWheelCollide::getCollisionOutputWithoutHit(hkpVehicleInstance const*,unsigned char,hkpVehicleWheelCollide::CollisionDetectionWheelOutput &)const
// int hkpVehicleRayCastWheelCollide::getCollisionOutputWithoutHit(int a1, int a2, uint8_t a3, int a4);
// [0x186ef50] (362 bytes) hkpVehicleRayCastWheelCollide::buildRayCastCommands(hkpVehicleInstance const*,hkpCollisionFilter const*,int,hkpShapeRayCastCommand *,hkpWorldRayCastOutput *)const
// int hkpVehicleRayCastWheelCollide::buildRayCastCommands(int a1, int a2, int a3, int a4, uint32_t *a5, int a6);
// [0x186f0c0] (22 bytes) hkpVehicleRayCastWheelCollide::setCollisionFilterInfo(unsigned int)
// int hkpVehicleRayCastWheelCollide::setCollisionFilterInfo(hkpVehicleRayCastWheelCollide *this, unsigned int a2);
// [0x186f0e0] (95 bytes) hkpVehicleRayCastWheelCollide::getPhantoms(hkArray<hkpPhantom *,hkContainerHeapAllocator> &)
// int hkpVehicleRayCastWheelCollide::getPhantoms(int a1, hkMemoryAllocator *a2);
// [0x186f140] (73 bytes) hkpVehicleRayCastWheelCollide::updateBeforeCollisionDetection(hkpVehicleInstance const*)
// int hkpVehicleRayCastWheelCollide::updateBeforeCollisionDetection( hkpAabbPhantom **this, const hkpVehicleInstance *a2);
// [0x186f190] (135 bytes) hkpVehicleRayCastWheelCollide::castSingleWheel(hkpVehicleInstance::WheelInfo const&,hkpWorldRayCastOutput &)const
// int hkpVehicleRayCastWheelCollide::castSingleWheel(int a1, uint32_t *a2, hkVector4f *a3);
// [0x186f220] (45 bytes) hkpVehicleRayCastWheelCollide::addToWorld(hkpWorld *)
// hkpPhantom *hkpVehicleRayCastWheelCollide::addToWorld(hkpPhantom **this, hkpWorld *a2);
// [0x186f250] (44 bytes) hkpVehicleRayCastWheelCollide::removeFromWorld(void)
// int hkpVehicleRayCastWheelCollide::removeFromWorld(hkpVehicleRayCastWheelCollide *this);
// [0x186f280] (152 bytes) hkpVehicleRayCastWheelCollide::init(hkpVehicleInstance const*)
// int hkpVehicleRayCastWheelCollide::init(hkpVehicleRayCastWheelCollide *this, const hkpVehicleInstance *a2);
// [0x186f320] (1075 bytes) hkpVehicleRayCastWheelCollide::getCollisionOutputFromCastResult(hkpVehicleInstance const*,unsigned char,hkpWorldRayCastOutput const&,hkpVehicleWheelCollide::CollisionDetectionWheelOutput &)const
// int hkpVehicleRayCastWheelCollide::getCollisionOutputFromCastResult( int a1, uint32_t *a2, uint8_t a3, int a4, int a5);
// [0x186f760] (146 bytes) hkpVehicleRayCastWheelCollide::~hkpVehicleRayCastWheelCollide()
// void hkpVehicleRayCastWheelCollide::~hkpVehicleRayCastWheelCollide(hkpVehicleRayCastWheelCollide *this);
// [0x186f800] (93 bytes) hkpVehicleRayCastWheelCollide::~hkpVehicleRayCastWheelCollide()
// void hkpVehicleRayCastWheelCollide::~hkpVehicleRayCastWheelCollide(hkpVehicleRayCastWheelCollide *this);
// [0x186f860] (85 bytes) hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide(void)
// void hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide(hkpVehicleRayCastWheelCollide *this);
// [0x186f8c0] (189 bytes) hkpVehicleRayCastWheelCollide::clone(hkpRigidBody const&,hkArray<hkpPhantom *,hkContainerHeapAllocator> const&)const
// int hkpVehicleRayCastWheelCollide::clone(int a1, int a2, int **a3);
// [0x186f980] (461 bytes) hkpVehicleDefaultBrake::calcBreakingInfo(float,hkpVehicleInstance const*,hkpVehicleDriverInput::FilteredDriverInputOutput const&,hkpVehicleBrake::WheelBreakingOutput &)
// int hkpVehicleDefaultBrake::calcBreakingInfo(int a1, float a2, int a3, int a4, int a5);
// [0x186fb50] (166 bytes) hkpVehicleDefaultBrake::~hkpVehicleDefaultBrake()
// void hkpVehicleDefaultBrake::~hkpVehicleDefaultBrake(hkpVehicleDefaultBrake *this);
// [0x186fc00] (109 bytes) hkpVehicleDefaultBrake::~hkpVehicleDefaultBrake()
// void hkpVehicleDefaultBrake::~hkpVehicleDefaultBrake(hkpVehicleDefaultBrake *this);
// [0x186fc70] (62 bytes) hkpVehicleDefaultBrake::hkpVehicleDefaultBrake(void)
// void hkpVehicleDefaultBrake::hkpVehicleDefaultBrake(hkpVehicleDefaultBrake *this);
