#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_Mutex.h
// Library: glf | Module: glf_Mutex
// Binary Address Span: 0xc7fa40 .. 0xc7fb80 (5 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xc7fa40] (146 bytes) glf::Mutex::Mutex(glf::MutexType)
// pthread_mutex_t **glf::Mutex::Mutex(pthread_mutex_t **a1, int a2);
// [0xc7fae0] (62 bytes) glf::Mutex::~Mutex()
// void glf::Mutex::~Mutex(pthread_mutex_t **this);
// [0xc7fb20] (36 bytes) glf::Mutex::Lock(void)
// int glf::Mutex::Lock(pthread_mutex_t **this);
// [0xc7fb50] (41 bytes) glf::Mutex::TryLock(void)
// bool glf::Mutex::TryLock(pthread_mutex_t **this);
// [0xc7fb80] (36 bytes) glf::Mutex::Unlock(void)
// int glf::Mutex::Unlock(pthread_mutex_t **this);
