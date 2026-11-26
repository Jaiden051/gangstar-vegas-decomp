#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_Mutex.h
// Library: vox | Module: vox_Mutex
// Binary Address Span: 0x10169b0 .. 0x1016ae0 (6 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10169b0] (98 bytes) vox::Mutex::Mutex(void)
// vox::Mutex *vox::Mutex::Mutex(vox::Mutex *this);
// [0x1016a20] (74 bytes) vox::Mutex::~Mutex()
// void vox::Mutex::~Mutex(pthread_mutex_t **this);
// [0x1016a70] (13 bytes) vox::Mutex::Mutex(vox::Mutex const&)
// vox::Mutex *vox::Mutex::Mutex(vox::Mutex *this, const vox::Mutex *a2);
// [0x1016a80] (40 bytes) vox::Mutex::Lock(void)
// pthread_mutex_t *vox::Mutex::Lock(pthread_mutex_t **this);
// [0x1016ab0] (40 bytes) vox::Mutex::Unlock(void)
// pthread_mutex_t *vox::Mutex::Unlock(pthread_mutex_t **this);
// [0x1016ae0] (50 bytes) vox::Mutex::TryLock(void)
// bool vox::Mutex::TryLock(pthread_mutex_t **this);
