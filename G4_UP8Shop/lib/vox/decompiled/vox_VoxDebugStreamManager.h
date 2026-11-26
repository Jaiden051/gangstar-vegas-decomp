#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_VoxDebugStreamManager.h
// Library: vox | Module: vox_VoxDebugStreamManager
// Binary Address Span: 0x103e8a0 .. 0x103f990 (8 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x103e8a0] (37 bytes) vox::VoxDebugStreamManager::Lock(void)
// pthread_mutex_t *vox::VoxDebugStreamManager::Lock(pthread_mutex_t **this);
// [0x103e8d0] (37 bytes) vox::VoxDebugStreamManager::Unlock(void)
// pthread_mutex_t *vox::VoxDebugStreamManager::Unlock(pthread_mutex_t **this);
// [0x103e900] (263 bytes) vox::VoxDebugStreamManager::CreateDebugStream(void)
// int vox::VoxDebugStreamManager::CreateDebugStream(vox::VoxDebugStreamManager *this);
// [0x103ea10] (99 bytes) vox::VoxDebugStreamManager::GetStream(int)
// char *vox::VoxDebugStreamManager::GetStream(vox::VoxDebugStreamManager *this, int a2);
// [0x103ea80] (58 bytes) vox::VoxDebugStreamManager::DestroyDebugStream(int)
// int vox::VoxDebugStreamManager::DestroyDebugStream(vox::VoxDebugStreamManager *this, int a2);
// [0x103eac0] (12 bytes) vox::VoxDebugStreamManager::GetStreamList(void)
// char *vox::VoxDebugStreamManager::GetStreamList(vox::VoxDebugStreamManager *this);
// [0x103ead0] (612 bytes) vox::VoxDebugStreamManager::PrepareStreamList(void)
// void **vox::VoxDebugStreamManager::PrepareStreamList(vox::VoxDebugStreamManager *this);
// [0x103f990] (462 bytes) vox::VoxDebugStreamManager::~VoxDebugStreamManager()
// void vox::VoxDebugStreamManager::~VoxDebugStreamManager(vox::VoxDebugStreamManager *this);
