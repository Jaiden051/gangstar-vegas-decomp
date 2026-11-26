#pragma once
// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_TaskGroup.h
// Library: glwebtools | Module: glwebtools_TaskGroup
// Binary Address Span: 0x13e9200 .. 0x13e9920 (13 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13e9200] (74 bytes) glwebtools::TaskGroup::TaskGroup(void)
// pthread_mutex_t **glwebtools::TaskGroup::TaskGroup(glwebtools::TaskGroup *this);
// [0x13e9250] (207 bytes) glwebtools::TaskGroup::PushTask(unsigned long *,glwebtools::Job const&,int)
// glwebtools::Task *glwebtools::TaskGroup::PushTask( glwebtools::TaskGroup *this, unsigned int *a2, const glwebtools::Job *a3, int a4);
// [0x13e9320] (115 bytes) glwebtools::TaskGroup::RemoveTask(unsigned long)
// int glwebtools::TaskGroup::RemoveTask(glwebtools::TaskGroup *this, unsigned int a2);
// [0x13e93a0] (112 bytes) glwebtools::TaskGroup::IsScheduled(unsigned long)const
// int glwebtools::TaskGroup::IsScheduled(glwebtools::TaskGroup *this, unsigned int a2);
// [0x13e9410] (127 bytes) glwebtools::TaskGroup::Initialize(glwebtools::ThreadPool::CreationSettings const&)
// glwebtools *glwebtools::TaskGroup::Initialize( glwebtools::TaskGroup *this, const glwebtools::ThreadPool::CreationSettings *a2);
// [0x13e9490] (86 bytes) glwebtools::TaskGroup::Terminate(void)
// int glwebtools::TaskGroup::Terminate(glwebtools::TaskGroup *this);
// [0x13e94f0] (88 bytes) glwebtools::TaskGroup::~TaskGroup()
// void glwebtools::TaskGroup::~TaskGroup(glwebtools::TaskGroup *this);
// [0x13e9550] (87 bytes) glwebtools::TaskGroup::IsInitialized(void)const
// int glwebtools::TaskGroup::IsInitialized(glwebtools::TaskGroup *this);
// [0x13e95b0] (577 bytes) glwebtools::TaskGroup::Update(unsigned long long)
// int glwebtools::TaskGroup::Update(glwebtools::TaskGroup *this, uint64_t a2);
// [0x13e9800] (79 bytes) glwebtools::TaskGroup::Size(void)const
// int glwebtools::TaskGroup::Size(glwebtools::TaskGroup *this);
// [0x13e9850] (84 bytes) glwebtools::TaskGroup::Empty(void)const
// bool glwebtools::TaskGroup::Empty(glwebtools::TaskGroup *this);
// [0x13e98b0] (109 bytes) glwebtools::TaskGroup::Completed(void)const
// int glwebtools::TaskGroup::Completed(glwebtools::TaskGroup *this);
// [0x13e9920] (87 bytes) glwebtools::TaskGroup::SomeThreadStarted(void)const
// int glwebtools::TaskGroup::SomeThreadStarted(glwebtools::TaskGroup *this);
