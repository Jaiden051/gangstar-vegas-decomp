#pragma once
// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_GlWebToolsCore.h
// Library: glwebtools | Module: glwebtools_GlWebToolsCore
// Binary Address Span: 0x13d9b60 .. 0x13dc190 (33 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13d9b60] (89 bytes) glwebtools::GlWebToolsCore::Grab(void)
// int glwebtools::GlWebToolsCore::Grab(glwebtools::GlWebToolsCore *this);
// [0x13d9bc0] (118 bytes) glwebtools::GlWebToolsCore::CanDelete(void)const
// int glwebtools::GlWebToolsCore::CanDelete(glwebtools::GlWebToolsCore *this);
// [0x13d9c40] (93 bytes) glwebtools::GlWebToolsCore::Drop(void)
// int glwebtools::GlWebToolsCore::Drop(glwebtools::GlWebToolsCore *this);
// [0x13d9d40] (87 bytes) glwebtools::GlWebToolsCore::DestroyInstance(glwebtools::GlWebToolsCore*)
// int glwebtools::GlWebToolsCore::DestroyInstance(glwebtools::GlWebToolsCore *this);
// [0x13d9da0] (98 bytes) glwebtools::GlWebToolsCore::_HasRunningConnection(void)
// int glwebtools::GlWebToolsCore::_HasRunningConnection(glwebtools::GlWebToolsCore *this);
// [0x13d9e10] (87 bytes) glwebtools::GlWebToolsCore::HasRunningConnection(void)
// int glwebtools::GlWebToolsCore::HasRunningConnection(glwebtools::GlWebToolsCore *this);
// [0x13d9e70] (16 bytes) glwebtools::GlWebToolsCore::IsInitialized(void)const
// int glwebtools::GlWebToolsCore::IsInitialized(glwebtools::GlWebToolsCore *this);
// [0x13d9e80] (16 bytes) glwebtools::GlWebToolsCore::ShutdownInProgress(void)const
// int glwebtools::GlWebToolsCore::ShutdownInProgress(glwebtools::GlWebToolsCore *this);
// [0x13d9e90] (160 bytes) glwebtools::GlWebToolsCore::UpdateTime(void)
// uint64_t glwebtools::GlWebToolsCore::UpdateTime(glwebtools::GlWebToolsCore *this);
// [0x13d9f30] (67 bytes) glwebtools::GlWebToolsCore::_CancelAllConnections(void)
// int glwebtools::GlWebToolsCore::_CancelAllConnections(glwebtools::GlWebToolsCore *this);
// [0x13d9f80] (95 bytes) glwebtools::GlWebToolsCore::CancelAllConnections(void)
// bool glwebtools::GlWebToolsCore::CancelAllConnections(glwebtools::GlWebToolsCore *this);
// [0x13d9fe0] (139 bytes) glwebtools::GlWebToolsCore::Shutdown(void)
// int glwebtools::GlWebToolsCore::Shutdown(glwebtools::GlWebToolsCore *this);
// [0x13da070] (308 bytes) glwebtools::GlWebToolsCore::GlWebToolsCore(void)
// glwebtools::GlWebToolsCore *glwebtools::GlWebToolsCore::GlWebToolsCore(glwebtools::GlWebToolsCore *this);
// [0x13da1b0] (107 bytes) glwebtools::GlWebToolsCore::CreateInstance(glwebtools::GlWebToolsCore*&)
// int glwebtools::GlWebToolsCore::CreateInstance(glwebtools::GlWebToolsCore *this);
// [0x13da220] (208 bytes) glwebtools::GlWebToolsCore::GetTaskGroup(std::string const&)const
// int glwebtools::GlWebToolsCore::GetTaskGroup(int a1, void **a2);
// [0x13da2f0] (202 bytes) glwebtools::GlWebToolsCore::GetTaskGroup(std::string const&)
// int glwebtools::GlWebToolsCore::GetTaskGroup(int a1, void **a2);
// [0x13da3c0] (133 bytes) glwebtools::GlWebToolsCore::UpdateTaskGroups(unsigned long long)
// int glwebtools::GlWebToolsCore::UpdateTaskGroups(glwebtools::GlWebToolsCore *this, uint64_t a2);
// [0x13da450] (1064 bytes) glwebtools::GlWebToolsCore::Update(void)
// int glwebtools::GlWebToolsCore::Update(glwebtools::GlWebToolsCore *this);
// [0x13da880] (70 bytes) glwebtools::GlWebToolsCore::UpdateStatic(void *,void *)
// int glwebtools::GlWebToolsCore::UpdateStatic(glwebtools::Thread **this);
// [0x13da8d0] (155 bytes) glwebtools::GlWebToolsCore::_WaitForCanDelete(unsigned int)
// int glwebtools::GlWebToolsCore::_WaitForCanDelete(glwebtools::GlWebToolsCore *this, unsigned int a2);
// [0x13daae0] (138 bytes) glwebtools::GlWebToolsCore::ClearTaskGroups(void)
// int glwebtools::GlWebToolsCore::ClearTaskGroups(glwebtools::GlWebToolsCore *this);
// [0x13dab70] (492 bytes) glwebtools::GlWebToolsCore::Terminate(void)
// int glwebtools::GlWebToolsCore::Terminate(glwebtools::GlWebToolsCore *this);
// [0x13dad60] (128 bytes) glwebtools::GlWebToolsCore::Terminate(unsigned int)
// int glwebtools::GlWebToolsCore::Terminate(glwebtools::GlWebToolsCore *this, unsigned int a2);
// [0x13db000] (585 bytes) glwebtools::GlWebToolsCore::~GlWebToolsCore()
// void glwebtools::GlWebToolsCore::~GlWebToolsCore(glwebtools::GlWebToolsCore *this);
// [0x13db250] (56 bytes) glwebtools::GlWebToolsCore::~GlWebToolsCore()
// void glwebtools::GlWebToolsCore::~GlWebToolsCore(glwebtools::GlWebToolsCore *this);
// [0x13db290] (1247 bytes) glwebtools::GlWebToolsCore::CreateUrlConnection(glwebtools::UrlConnection::CreationSettings const&)
// glwebtools::UrlConnection *glwebtools::GlWebToolsCore::CreateUrlConnection( glwebtools::UrlConnection *a1, glwebtools::GlWebToolsCore *a2, int *a3);
// [0x13db7e0] (269 bytes) glwebtools::GlWebToolsCore::CreateUrlConnection(void)
// glwebtools::GlWebToolsCore *glwebtools::GlWebToolsCore::CreateUrlConnection( glwebtools::GlWebToolsCore *this, glwebtools::GlWebToolsCore *a2);
// [0x13db960] (516 bytes) glwebtools::GlWebToolsCore::CreateUrlRequest(glwebtools::UrlRequest::CreationSettings &)
// glwebtools::GlWebToolsCore *glwebtools::GlWebToolsCore::CreateUrlRequest( glwebtools::GlWebToolsCore *this, glwebtools::UrlRequest::CreationSettings *a2, glwebtools::UrlRequest::CreationSettings *a3);
// [0x13dbbe0] (133 bytes) glwebtools::GlWebToolsCore::CreateUrlRequest(void)
// glwebtools::GlWebToolsCore *glwebtools::GlWebToolsCore::CreateUrlRequest( glwebtools::GlWebToolsCore *this, glwebtools::UrlRequest::CreationSettings *a2);
// [0x13dbce0] (674 bytes) glwebtools::GlWebToolsCore::AddTaskGroup(std::string const&,glwebtools::ThreadPool::CreationSettings const&)
// int glwebtools::GlWebToolsCore::AddTaskGroup(int a1, void **a2, glwebtools::ThreadPool::CreationSettings *a3);
// [0x13dbff0] (112 bytes) glwebtools::GlWebToolsCore::AddTaskGroup(std::string const&)
// int glwebtools::GlWebToolsCore::AddTaskGroup(int a1, void **a2);
// [0x13dc0b0] (217 bytes) glwebtools::GlWebToolsCore::AddDefaultTaskGroup(void)
// int glwebtools::GlWebToolsCore::AddDefaultTaskGroup(glwebtools::GlWebToolsCore *this);
// [0x13dc190] (2063 bytes) glwebtools::GlWebToolsCore::Initialize(glwebtools::GlWebTools::CreationSettings const&)
// int glwebtools::GlWebToolsCore::Initialize( glwebtools::GlWebToolsCore *this, const glwebtools::GlWebTools::CreationSettings *a2);
