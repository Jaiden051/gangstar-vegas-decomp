#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_ThreadMgr.h
// Library: glf | Module: glf_ThreadMgr
// Binary Address Span: 0xc809b0 .. 0xc81d30 (15 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xc809b0] (22 bytes) glf::ThreadMgr::GetPtrRef(void)
// void *glf::ThreadMgr::GetPtrRef();
// [0xc809d0] (195 bytes) glf::ThreadMgr::Add(glf::Thread *)
// uint32_t *glf::ThreadMgr::Add(glf::ThreadMgr *this, glf::Thread *a2);
// [0xc80aa0] (171 bytes) glf::ThreadMgr::Remove(glf::Thread *)
// uint32_t *glf::ThreadMgr::Remove(glf::ThreadMgr *this, glf::Thread *a2);
// [0xc80b50] (119 bytes) glf::ThreadMgr::AddStartExitHandlers(void (*)(void *),void (*)(void *),void *)
// int glf::ThreadMgr::AddStartExitHandlers( volatile int32_t **this, void (*a2)(void *), void (*a3)(void *), volatile int32_t *a4);
// [0xc80bd0] (118 bytes) glf::ThreadMgr::RemoveStartExitHandlers(unsigned int)
// int glf::ThreadMgr::RemoveStartExitHandlers(volatile int32_t **this, unsigned int a2);
// [0xc80c50] (55 bytes) glf::ThreadMgr::OnStartThread(void)
// int (*glf::ThreadMgr::OnStartThread(glf::ThreadMgr *this))(uint32_t);
// [0xc80c90] (108 bytes) glf::ThreadMgr::Init(void)
// int (*glf::ThreadMgr::Init(glf::ThreadMgr *this))(uint32_t);
// [0xc810d0] (150 bytes) glf::ThreadMgr::ThreadMgr(void)
// glf::ThreadMgr *glf::ThreadMgr::ThreadMgr(glf::ThreadMgr *this);
// [0xc81170] (99 bytes) glf::ThreadMgr::Get(void)
// glf::ThreadMgr *glf::ThreadMgr::Get();
// [0xc815a0] (270 bytes) glf::ThreadMgr::~ThreadMgr()
// void glf::ThreadMgr::~ThreadMgr(glf::ThreadMgr *this);
// [0xc816b0] (97 bytes) glf::ThreadMgr::Destroy(void)
// glf::ThreadMgr **glf::ThreadMgr::Destroy();
// [0xc81870] (224 bytes) glf::ThreadMgr::OnExitThread(void)
// int glf::ThreadMgr::OnExitThread(glf::ThreadMgr *this);
// [0xc81950] (60 bytes) glf::ThreadMgr::DeInit(void)
// int glf::ThreadMgr::DeInit(glf::ThreadMgr *this);
// [0xc81bf0] (314 bytes) glf::ThreadMgr::AddMirrorThreads(glf::Thread *)
// glf::Thread *glf::ThreadMgr::AddMirrorThreads(glf::ThreadMgr *this, glf::Thread *a2);
// [0xc81d30] (143 bytes) glf::ThreadMgr::GetCurrent(void)
// glf::Thread *glf::ThreadMgr::GetCurrent(glf::ThreadMgr *this);
