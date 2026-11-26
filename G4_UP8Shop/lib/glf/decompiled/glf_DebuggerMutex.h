#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_DebuggerMutex.h
// Library: glf | Module: glf_DebuggerMutex
// Binary Address Span: 0xc7fbb0 .. 0xc7fcd0 (5 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xc7fbb0] (130 bytes) glf::DebuggerMutex::DebuggerMutex(glf::MutexType)
// int glf::DebuggerMutex::DebuggerMutex(pthread_mutex_t *mutex, int a2);
// [0xc7fc40] (37 bytes) glf::DebuggerMutex::~DebuggerMutex()
// void glf::DebuggerMutex::~DebuggerMutex(pthread_mutex_t **this);
// [0xc7fc70] (37 bytes) glf::DebuggerMutex::Lock(void)
// int glf::DebuggerMutex::Lock(pthread_mutex_t **this);
// [0xc7fca0] (42 bytes) glf::DebuggerMutex::TryLock(void)
// bool glf::DebuggerMutex::TryLock(pthread_mutex_t **this);
// [0xc7fcd0] (37 bytes) glf::DebuggerMutex::Unlock(void)
// int glf::DebuggerMutex::Unlock(pthread_mutex_t **this);
