#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_AccessController.h
// Library: vox | Module: vox_AccessController
// Binary Address Span: 0x10575b0 .. 0x10576d0 (4 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10575b0] (94 bytes) vox::AccessController::GetReadAccess(void)
// pthread_mutex_t *vox::AccessController::GetReadAccess(vox::AccessController *this);
// [0x1057610] (70 bytes) vox::AccessController::ReleaseReadAccess(void)
// pthread_mutex_t *vox::AccessController::ReleaseReadAccess(pthread_mutex_t **this);
// [0x1057660] (110 bytes) vox::AccessController::GetWriteAccess(void)
// pthread_mutex_t *vox::AccessController::GetWriteAccess(pthread_mutex_t **this);
// [0x10576d0] (71 bytes) vox::AccessController::ReleaseWriteAccess(void)
// pthread_mutex_t *vox::AccessController::ReleaseWriteAccess(pthread_mutex_t **this);
