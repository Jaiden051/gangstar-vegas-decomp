#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_EventManager.h
// Library: glf | Module: glf_EventManager
// Binary Address Span: 0xc72e20 .. 0xc7a140 (22 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xc72e20] (237 bytes) glf::EventManager::PreSendEvent(glf::CoreEvent &)
// int glf::EventManager::PreSendEvent(int a1, int16_t *a2);
// [0xc75240] (12 bytes) glf::EventManager::GetEventTypesSize(void)const
// int glf::EventManager::GetEventTypesSize(glf::EventManager *this);
// [0xc75250] (16 bytes) glf::EventManager::GetEventTypesBegin(void)const
// glf::EventManager *glf::EventManager::GetEventTypesBegin(glf::EventManager *this, int a2);
// [0xc75260] (16 bytes) glf::EventManager::GetEventTypesEnd(void)const
// glf::EventManager *glf::EventManager::GetEventTypesEnd(glf::EventManager *this, int a2);
// [0xc75270] (160 bytes) glf::EventManager::GetEventName(int)
// glf::EventManager *glf::EventManager::GetEventName(glf::EventManager *this, uint32_t *a2, int a3);
// [0xc75310] (118 bytes) glf::EventManager::GetEventSize(int)
// int glf::EventManager::GetEventSize(glf::EventManager *this, int a2);
// [0xc75390] (349 bytes) glf::EventManager::GetEventType(char const*)
// int glf::EventManager::GetEventType(glf::EventManager *this, char *a2);
// [0xc754f0] (13 bytes) glf::EventManager::HasEventReceiver(void)const
// bool glf::EventManager::HasEventReceiver(glf::EventManager *this);
// [0xc75500] (879 bytes) glf::EventManager::PostEvent(glf::CoreEvent const&)
// int glf::EventManager::PostEvent(int a1, uint16_t *src);
// [0xc75870] (123 bytes) glf::EventManager::RemoveEventReceiver(glf::EventReceiver *)
// int glf::EventManager::RemoveEventReceiver(glf::EventManager *this, glf::EventReceiver *a2);
// [0xc758f0] (118 bytes) glf::EventManager::GetEventSerializer(int)
// int glf::EventManager::GetEventSerializer(glf::EventManager *this, int a2);
// [0xc75970] (155 bytes) glf::EventManager::RegisterEventSerializer(std::vector<int,std::allocator<int>>,glf::EventSerializer *)
// int glf::EventManager::RegisterEventSerializer(uint32_t *a1, int *a2, int a3);
// [0xc771e0] (386 bytes) glf::EventManager::RaiseEvent(glf::CoreEvent &)
// int glf::EventManager::RaiseEvent(glf::EventManager *a1, uint16_t *a2);
// [0xc77370] (42 bytes) glf::EventManager::SendEvent(glf::CoreEvent const&)
// int glf::EventManager::SendEvent(glf::EventManager *a1, uint16_t *a2);
// [0xc77ae0] (232 bytes) glf::EventManager::DispatchEvents(void)
// int glf::EventManager::DispatchEvents(glf::EventManager *this);
// [0xc77bd0] (324 bytes) glf::EventManager::RegisterFixedEventType(int,unsigned int,char const*)
// int glf::EventManager::RegisterFixedEventType(glf::EventManager *this, int a2, unsigned int a3, const char *a4);
// [0xc77d20] (3617 bytes) glf::EventManager::AddEventReceiver(glf::EventReceiver *,int,std::vector<int,std::allocator<int>> &)
// int glf::EventManager::AddEventReceiver( glf::EventManager *this, glf::EventReceiver *a2, glf::EventReceiver *a3, std::vector<int> *a4);
// [0xc78b50] (98 bytes) glf::EventManager::AddEventReceiver(glf::EventReceiver *,int)
// void glf::EventManager::AddEventReceiver( glf::EventManager *this, glf::EventReceiver *a2, glf::EventReceiver *a3);
// [0xc793c0] (3139 bytes) glf::EventManager::EventManager(void)
// void glf::EventManager::EventManager(glf::EventManager *this);
// [0xc7a010] (229 bytes) glf::EventManager::~EventManager()
// void glf::EventManager::~EventManager(glf::EventManager *this);
// [0xc7a100] (56 bytes) glf::EventManager::~EventManager()
// void glf::EventManager::~EventManager(glf::EventManager *this);
// [0xc7a140] (1660 bytes) glf::EventManager::RegisterUserEventType(int &,char const*,unsigned int)
// int glf::EventManager::RegisterUserEventType(glf::EventManager *this, int *a2, char *a3, unsigned int a4);
