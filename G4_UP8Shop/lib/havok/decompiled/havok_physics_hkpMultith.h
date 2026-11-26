#pragma once
// ============================================================================
// G4_UP8Shop/lib/havok/decompiled/havok_physics_hkpMultith.h
// Library: havok | Module: havok_physics_hkpMultith
// Binary Address Span: 0x1733670 .. 0x186ea40 (13 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1733670] (15 bytes) hkpMultithreadConfig::hkpMultithreadConfig(void)
// void hkpMultithreadConfig::hkpMultithreadConfig(hkpMultithreadConfig *this);
// [0x186b970] (22 bytes) hkpMultithreadedVehicleManager::staticClass(void)
// void *hkpMultithreadedVehicleManager::staticClass();
// [0x186e500] (45 bytes) hkpMultithreadedVehicleManager::~hkpMultithreadedVehicleManager()
// void hkpMultithreadedVehicleManager::~hkpMultithreadedVehicleManager(hkpMultithreadedVehicleManager *this);
// [0x186e530] (104 bytes) hkpMultithreadedVehicleManager::~hkpMultithreadedVehicleManager()
// void hkpMultithreadedVehicleManager::~hkpMultithreadedVehicleManager(hkpMultithreadedVehicleManager *this);
// [0x186e5a0] (16 bytes) hkpMultithreadedVehicleManager::getBufferSize(hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &)
// int hkpMultithreadedVehicleManager::getBufferSize(int a1);
// [0x186e5b0] (62 bytes) hkpMultithreadedVehicleManager::updateBeforeCollisionDetection(hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &)
// int hkpMultithreadedVehicleManager::updateBeforeCollisionDetection(uint32_t *a1);
// [0x186e5f0] (101 bytes) hkpMultithreadedVehicleManager::buildVehicleCommand(hkpVehicleWheelCollide *,hkpVehicleInstance const*,hkpVehicleCommand *,hkpVehicleJobResults *)
// uint32_t *hkpMultithreadedVehicleManager::buildVehicleCommand(int a1, int a2, uint32_t *a3, int a4);
// [0x186e660] (26 bytes) hkpMultithreadedVehicleManager::getVehicleBatchFromBuffer(hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &,void *,hkpMultithreadedVehicleManager::VehicleCommandBatch &)
// int hkpMultithreadedVehicleManager::getVehicleBatchFromBuffer(int a1, int a2, uint32_t *a3);
// [0x186e680] (443 bytes) hkpMultithreadedVehicleManager::buildAndAddJobs(hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &,hkpWorld const*,hkStepInfo const&,int,hkJobQueue *,void *)
// int hkpMultithreadedVehicleManager::buildAndAddJobs( int *a1, int a2, int a3, int a4, pthread_mutex_t *a5, int a6);
// [0x186e840] (127 bytes) hkpMultithreadedVehicleManager::stepVehiclesUsingJobResults(hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &,hkStepInfo const&,void *)
// int hkpMultithreadedVehicleManager::stepVehiclesUsingJobResults(uint32_t *a1, int a2, int a3);
// [0x186e8c0] (338 bytes) hkpMultithreadedVehicleManager::stepVehicleArraySynchronously(hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &,hkpWorld *,hkStepInfo const&,hkThreadPool *,hkJobQueue *,int)
// hkLifoAllocator *hkpMultithreadedVehicleManager::stepVehicleArraySynchronously( int *a1, hkpWorld *a2, int a3, int a4, pthread_mutex_t *a5, int a6);
// [0x186ea20] (29 bytes) hkpMultithreadedVehicleManager::getMultithreadSpeedupThreshold(hkArray<hkpVehicleInstance *,hkContainerHeapAllocator> &)
// int hkpMultithreadedVehicleManager::getMultithreadSpeedupThreshold(int a1);
// [0x186ea40] (441 bytes) hkpMultithreadedVehicleManager::stepVehiclesSynchronously(hkpWorld *,hkStepInfo const&,hkThreadPool *,hkJobQueue *,int)
// int hkpMultithreadedVehicleManager::stepVehiclesSynchronously( hkpEntity *a1, hkpWorld *a2, int a3, int a4, pthread_mutex_t *a5, int a6);
