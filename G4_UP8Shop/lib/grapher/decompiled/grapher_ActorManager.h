#pragma once
// ============================================================================
// G4_UP8Shop/lib/grapher/decompiled/grapher_ActorManager.h
// Library: grapher | Module: grapher_ActorManager
// Binary Address Span: 0x13c6010 .. 0x13cbe00 (46 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13c6010] (281 bytes) grapher::ActorManager::ActorManager(void)
// grapher::ActorManager *grapher::ActorManager::ActorManager(grapher::ActorManager *this);
// [0x13c6130] (97 bytes) grapher::ActorManager::FlushStringTables(void)
// int *grapher::ActorManager::FlushStringTables(grapher::ActorManager *this);
// [0x13c61a0] (472 bytes) grapher::ActorManager::AddIntoUpdateList(grapher::ActorBase *,grapher::ActorContext *)
// void grapher::ActorManager::AddIntoUpdateList( grapher::ActorManager *this, grapher::ActorBase *a2, grapher::ActorContext *a3);
// [0x13c6380] (472 bytes) grapher::ActorManager::RemoveFromUpdateList(grapher::ActorBase *,grapher::ActorContext *)
// void grapher::ActorManager::RemoveFromUpdateList( grapher::ActorManager *this, grapher::ActorBase *a2, grapher::ActorContext *a3);
// [0x13c6560] (444 bytes) grapher::ActorManager::RemoveFromUpdateList(grapher::ActorContext *)
// void grapher::ActorManager::RemoveFromUpdateList(grapher::ActorManager *this, grapher::ActorContext *a2);
// [0x13c6720] (370 bytes) grapher::ActorManager::GetActorFile(std::string const&)const
// int grapher::ActorManager::GetActorFile(int a1, int a2);
// [0x13c68a0] (58 bytes) grapher::ActorManager::GetActorFileFromUniqueId(int)const
// int grapher::ActorManager::GetActorFileFromUniqueId(grapher::ActorManager *this, int a2);
// [0x13c68e0] (425 bytes) grapher::ActorManager::AddActorVariable(grapher::ActorVariable *)
// int grapher::ActorManager::AddActorVariable(grapher::ActorManager *this, grapher::ActorVariable *a2);
// [0x13c6a90] (76 bytes) grapher::ActorManager::GetVariable(unsigned int)const
// uint32_t *grapher::ActorManager::GetVariable(grapher::ActorManager *this, unsigned int a2);
// [0x13c6ae0] (79 bytes) grapher::ActorManager::DeleteActorVariable(unsigned int)
// void grapher::ActorManager::DeleteActorVariable(grapher::ActorManager *this, unsigned int a2);
// [0x13c6b30] (1668 bytes) grapher::ActorManager::RegisterActorForManualEvent(std::string const&,grapher::ActorBase *,int)
// char *grapher::ActorManager::RegisterActorForManualEvent(uint32_t *a1, char **a2, char *a3, int a4);
// [0x13c71c0] (705 bytes) grapher::ActorManager::DeregisterActorForManualEvent(std::string const&)
// void grapher::ActorManager::DeregisterActorForManualEvent(uint32_t *a1, char **a2);
// [0x13c7490] (705 bytes) grapher::ActorManager::IsActorRegisteredForManualEvent(std::string const&,grapher::ActorBase const*,int)const
// bool grapher::ActorManager::IsActorRegisteredForManualEvent(int a1, char **a2, int a3, int a4);
// [0x13c7760] (91 bytes) grapher::ActorManager::GetActorFileFromEventNameHash(unsigned int)
// grapher::ActorFile *grapher::ActorManager::GetActorFileFromEventNameHash( grapher::ActorManager *this, unsigned int a2);
// [0x13c77c0] (974 bytes) grapher::ActorManager::FireManualEvent(char const*,grapher::ActorContext *)
// grapher::ActorFile *grapher::ActorManager::FireManualEvent( grapher::ActorManager *this, char *a2, grapher::ActorContext *obj);
// [0x13c7b90] (1039 bytes) grapher::ActorManager::Cancel(grapher::ActorBase *,grapher::ActorContext *,bool,int)
// void grapher::ActorManager::Cancel( grapher::ActorManager *this, grapher::ActorBase *a2, grapher::ActorContext *a3, bool a4, int a5);
// [0x13c7fa0] (838 bytes) grapher::ActorManager::ManualCancel(char const*,grapher::ActorContext *,bool,int)
// void grapher::ActorManager::ManualCancel( grapher::ActorManager *this, char *a2, grapher::ActorContext *obj, bool a4, int a5);
// [0x13c82f0] (257 bytes) grapher::ActorManager::QueueEvent(grapher::ActorBase *,int,grapher::ActorContext *)
// grapher::ActorBase **grapher::ActorManager::QueueEvent( grapher::ActorManager *this, grapher::ActorBase *a2, grapher::ActorBase **a3, grapher::ActorContext *a4);
// [0x13c8400] (3287 bytes) grapher::ActorManager::Update(int)
// unsigned int grapher::ActorManager::Update(grapher::ActorManager *this, int a2);
// [0x13c90e0] (842 bytes) grapher::ActorManager::GenerateXMLTemplate(void)
// void grapher::ActorManager::GenerateXMLTemplate(grapher::ActorManager *this);
// [0x13c9430] (177 bytes) grapher::ActorManager::GenerateBinaryFiles(std::string const&)
// int grapher::ActorManager::GenerateBinaryFiles(int a1, const char **a2);
// [0x13c94f0] (673 bytes) grapher::ActorManager::AddFile(char const*)
// grapher::ActorFile *grapher::ActorManager::AddFile(grapher::ActorFile ***this, char *a2);
// [0x13c97a0] (196 bytes) grapher::ActorManager::LoadFile(char const*,bool)
// int grapher::ActorManager::LoadFile(grapher::ActorFile ***this, char *a2, bool a3);
// [0x13c9870] (162 bytes) grapher::ActorManager::UnloadAll(void)
// void grapher::ActorManager::UnloadAll(grapher::ActorManager *this);
// [0x13c9920] (396 bytes) grapher::ActorManager::UnloadActor(grapher::ActorBase *)
// void grapher::ActorManager::UnloadActor(grapher::ActorManager *this, grapher::ActorBase *a2);
// [0x13c9b40] (2831 bytes) grapher::ActorManager::ValidateWithTemplate(std::string const&)
// int grapher::ActorManager::ValidateWithTemplate(int a1, int *a2);
// [0x13ca650] (205 bytes) grapher::ActorManager::Init(void)
// int grapher::ActorManager::Init(grapher::ActorManager *this);
// [0x13ca720] (290 bytes) grapher::ActorManager::NewActor(std::string const&,pugi::xml_node,unsigned int)const
// int grapher::ActorManager::NewActor(int a1, void **a2, int a3, int a4);
// [0x13ca850] (141 bytes) grapher::ActorManager::Unload(char const*,grapher::ActorContext *)
// grapher::ActorFile *grapher::ActorManager::Unload( grapher::ActorManager *this, char *a2, grapher::ActorContext *a3);
// [0x13ca8e0] (436 bytes) grapher::ActorManager::LoadActorsFromFilesList(std::vector<std::string,std::allocator<std::string>> const&,bool,char const*)
// int grapher::ActorManager::LoadActorsFromFilesList(grapher::ActorFile ***this, char ***a2, bool a3, char *s);
// [0x13caaa0] (637 bytes) grapher::ActorManager::LoadActorFiles(char const*,bool,bool,bool)
// int grapher::ActorManager::LoadActorFiles( grapher::ActorManager *this, std::vector<GLFUtils::FileListEntry> *a2, bool a3, char a4, char a5);
// [0x13cad20] (51 bytes) grapher::ActorManager::FindActor(int)const
// int grapher::ActorManager::FindActor(grapher::ActorManager *this, unsigned int a2);
// [0x13cad60] (42 bytes) grapher::ActorManager::GetActor(unsigned int)const
// int grapher::ActorManager::GetActor(grapher::ActorManager *this, unsigned int a2);
// [0x13cad90] (51 bytes) grapher::ActorManager::FindVariable(int)const
// uint32_t *grapher::ActorManager::FindVariable(grapher::ActorManager *this, unsigned int a2);
// [0x13cadd0] (210 bytes) grapher::ActorManager::GetActor(std::string const&,std::string const&)const
// grapher::ActorBase *grapher::ActorManager::GetActor(int a1, const void **a2, const void **a3);
// [0x13caeb0] (97 bytes) grapher::ActorManager::ClearBreakpoints(void)
// int *grapher::ActorManager::ClearBreakpoints(grapher::ActorManager *this);
// [0x13caf20] (97 bytes) grapher::ActorManager::UpdateVariableDisplay(void)
// int *grapher::ActorManager::UpdateVariableDisplay(grapher::ActorManager *this);
// [0x13caf90] (225 bytes) grapher::ActorManager::Serialize(char const*,char const*)
// grapher::ActorFile *grapher::ActorManager::Serialize(grapher::ActorManager *this, char *a2, char *a3);
// [0x13cb080] (432 bytes) grapher::ActorManager::DBG_Print(std::ostream &)const
// unsigned int grapher::ActorManager::DBG_Print(uint32_t *a1, uint32_t *a2);
// [0x13cb230] (522 bytes) grapher::ActorManager::CancelAll(void)
// grapher::ActorManager *grapher::ActorManager::CancelAll(grapher::ActorManager *this);
// [0x13cb440] (944 bytes) grapher::ActorManager::FlushDataTables(void)
// int grapher::ActorManager::FlushDataTables(grapher::ActorManager *this);
// [0x13cb7f0] (63 bytes) grapher::ActorManager::ClearAll(void)
// int grapher::ActorManager::ClearAll(grapher::ActorManager *this);
// [0x13cb830] (247 bytes) grapher::ActorManager::Terminate(void)
// void grapher::ActorManager::Terminate(grapher::ActorManager *this);
// [0x13cb930] (90 bytes) grapher::ActorManager::Reload(void)
// int grapher::ActorManager::Reload(grapher::ActorFile ***this);
// [0x13cb990] (1126 bytes) grapher::ActorManager::~ActorManager()
// void grapher::ActorManager::~ActorManager(grapher::ActorManager *this);
// [0x13cbe00] (56 bytes) grapher::ActorManager::~ActorManager()
// void grapher::ActorManager::~ActorManager(grapher::ActorManager *this);
