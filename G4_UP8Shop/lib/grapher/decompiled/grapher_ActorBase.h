#pragma once
// ============================================================================
// G4_UP8Shop/lib/grapher/decompiled/grapher_ActorBase.h
// Library: grapher | Module: grapher_ActorBase
// Binary Address Span: 0x13b4390 .. 0x13be480 (56 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13b4390] (146 bytes) grapher::ActorBase::Cancel(grapher::ActorContext *)
// int grapher::ActorBase::Cancel(grapher::ActorBase *this, grapher::ActorContext *a2);
// [0x13b4430] (146 bytes) grapher::ActorBase::Update(int,grapher::ActorContext *)
// int grapher::ActorBase::Update(grapher::ActorBase *this, int a2, grapher::ActorContext *a3);
// [0x13b50a0] (27 bytes) grapher::ActorBase::SetNewFileId(int)
// int grapher::ActorBase::SetNewFileId(grapher::ActorBase *this);
// [0x13b5380] (362 bytes) grapher::ActorBase::ActorBase(grapher::ActorBase const&)
// grapher::ActorBase *grapher::ActorBase::ActorBase(grapher::ActorBase *this);
// [0x13b54f0] (87 bytes) grapher::ActorBase::Release(void)
// grapher::ActorProperty **grapher::ActorBase::Release(grapher::ActorBase *this);
// [0x13b5550] (19 bytes) grapher::ActorBase::SetPinInLogType(int)
// int grapher::ActorBase::SetPinInLogType(grapher::ActorBase *this, int a2);
// [0x13b5570] (19 bytes) grapher::ActorBase::SetPinOutLogType(int)
// int grapher::ActorBase::SetPinOutLogType(grapher::ActorBase *this, int a2);
// [0x13b5590] (176 bytes) grapher::ActorBase::GetName(void)const
// int grapher::ActorBase::GetName(grapher::ActorBase *this);
// [0x13b5640] (176 bytes) grapher::ActorBase::GetTemplateName(void)const
// int grapher::ActorBase::GetTemplateName(grapher::ActorBase *this);
// [0x13b56f0] (99 bytes) grapher::ActorBase::SetTemplateName(std::string)
// int grapher::ActorBase::SetTemplateName(int a1, int a2);
// [0x13b5760] (99 bytes) grapher::ActorBase::SetDisplayName(std::string)
// int grapher::ActorBase::SetDisplayName(int a1, int a2);
// [0x13b57d0] (99 bytes) grapher::ActorBase::SetCategoryName(std::string)
// void grapher::ActorBase::SetCategoryName(int a1, int a2);
// [0x13b5840] (554 bytes) grapher::ActorBase::ActorBase(unsigned int)
// grapher::ActorBase *grapher::ActorBase::ActorBase(grapher::ActorBase *this, unsigned int a2);
// [0x13b5a70] (71 bytes) grapher::ActorBase::GetActorInputEventList(int)
// uint32_t *grapher::ActorBase::GetActorInputEventList(grapher::ActorBase *this, int a2);
// [0x13b5ac0] (257 bytes) grapher::ActorBase::GetPinIndex(std::string const&,bool)
// int grapher::ActorBase::GetPinIndex(int a1, void **a2, char a3);
// [0x13b5bd0] (104 bytes) grapher::ActorBase::FindPinInfo(int,bool)
// int grapher::ActorBase::FindPinInfo(grapher::ActorBase *this, int a2, bool a3);
// [0x13b5c40] (241 bytes) grapher::ActorBase::GetPropertyIndex(std::string const&)
// int grapher::ActorBase::GetPropertyIndex(int a1, void **a2);
// [0x13b5d40] (14 bytes) grapher::ActorBase::GetNumProperties(void)const
// int grapher::ActorBase::GetNumProperties(grapher::ActorBase *this);
// [0x13b5d50] (35 bytes) grapher::ActorBase::GetProperty(int)
// int grapher::ActorBase::GetProperty(grapher::ActorBase *this, int a2);
// [0x13b5d80] (62 bytes) grapher::ActorBase::AddVariable(int,grapher::ActorVariable *)
// grapher::ActorProperty *grapher::ActorBase::AddVariable( grapher::ActorBase *this, int a2, grapher::ActorVariable *a3);
// [0x13b5dc0] (68 bytes) grapher::ActorBase::GetVariable(int)
// int grapher::ActorBase::GetVariable(grapher::ActorBase *this, int a2);
// [0x13b5e10] (855 bytes) grapher::ActorBase::ParseAttributes(pugi::xml_node)
// void grapher::ActorBase::ParseAttributes(grapher::ActorBase *a1, int a2);
// [0x13b6170] (251 bytes) grapher::ActorBase::GetVariables(int)
// grapher::ActorBase *grapher::ActorBase::GetVariables( grapher::ActorBase *this, grapher::ActorBase *a2, int a3);
// [0x13b6270] (284 bytes) grapher::ActorBase::GetVariables(int,std::vector<grapher::ActorVariable *,std::allocator<grapher::ActorVariable *>> &)
// void grapher::ActorBase::GetVariables(grapher::ActorBase *a1, int a2, int a3);
// [0x13b6390] (143 bytes) grapher::ActorBase::GetPropertyName(int)const
// grapher::ActorBase *grapher::ActorBase::GetPropertyName(grapher::ActorBase *this, int a2, int a3);
// [0x13b6420] (5097 bytes) grapher::ActorBase::GenerateXMLTemplate(void)
// grapher::ActorBase *grapher::ActorBase::GenerateXMLTemplate(grapher::ActorBase *this, uint32_t *a2);
// [0x13b7810] (2534 bytes) grapher::ActorBase::SerializeConnections(std::ostream &)
// int grapher::ActorBase::SerializeConnections(uint32_t *a1, int a2);
// [0x13b8200] (69 bytes) grapher::ActorBase::ClearBreakpoints(void)
// void grapher::ActorBase::ClearBreakpoints(grapher::ActorBase *this);
// [0x13b8250] (102 bytes) grapher::ActorBase::HasBreakpoint(void)const
// int grapher::ActorBase::HasBreakpoint(grapher::ActorBase *this);
// [0x13b82c0] (117 bytes) grapher::ActorBase::HasBreakpoint(int)
// int grapher::ActorBase::HasBreakpoint(grapher::ActorBase *this, int a2);
// [0x13b8340] (92 bytes) grapher::ActorBase::InitProperties(void)
// void grapher::ActorBase::InitProperties(grapher::ActorBase *this);
// [0x13b83a0] (9 bytes) grapher::ActorBase::UpdateDisplay(void)
// void grapher::ActorBase::UpdateDisplay();
// [0x13b83b0] (52 bytes) grapher::ActorBase::SetGraphName(std::string)
// int grapher::ActorBase::SetGraphName(int a1, int a2);
// [0x13b83f0] (150 bytes) grapher::ActorBase::GetGraphName(void)const
// int *grapher::ActorBase::GetGraphName(grapher::ActorBase *this);
// [0x13b8490] (690 bytes) grapher::ActorBase::GetDebugName(void)const
// int grapher::ActorBase::GetDebugName(grapher::ActorBase *this);
// [0x13b8750] (173 bytes) grapher::ActorBase::VerifyPin(grapher::PinInfo const&)const
// int grapher::ActorBase::VerifyPin(grapher::ActorBase *this, const grapher::PinInfo *a2);
// [0x13b8800] (100 bytes) grapher::ActorBase::VerifyPins(std::map<std::string,grapher::PinInfo,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>> &)const
// int grapher::ActorBase::VerifyPins(grapher::ActorBase *a1, int a2);
// [0x13b8870] (154 bytes) grapher::ActorBase::Verify(void)
// int *grapher::ActorBase::Verify(grapher::ActorBase *this);
// [0x13b8910] (76 bytes) grapher::ActorBase::DBG_IncrementPinConnectionCount(int,bool)
// grapher::ActorBase *grapher::ActorBase::DBG_IncrementPinConnectionCount( grapher::ActorBase *this, int a2, bool a3);
// [0x13b89c0] (224 bytes) grapher::ActorBase::GetRawValue(int,grapher::ActorContext *)
// grapher::ActorBase *grapher::ActorBase::GetRawValue( grapher::ActorBase *this, grapher::ActorBase *a2, grapher::ActorContext *a3, grapher::ActorContext *a4);
// [0x13b8aa0] (2036 bytes) grapher::ActorBase::DBG_Print(std::ostream &)
// unsigned int grapher::ActorBase::DBG_Print(grapher::ActorBase *a1, uint32_t *a2);
// [0x13b92a0] (571 bytes) grapher::ActorBase::OnEvent(int)
// int *grapher::ActorBase::OnEvent(grapher::ActorBase *this, int a2);
// [0x13b9540] (112 bytes) grapher::ActorBase::_FireEvent(int,grapher::ActorContext *)
// grapher::ActorBase **grapher::ActorBase::_FireEvent( grapher::ActorBase *this, grapher::ActorBase **a2, grapher::ActorContext *a3);
// [0x13b95b0] (365 bytes) grapher::ActorBase::FireEvent(int,grapher::ActorContext *)
// grapher::ActorBase **grapher::ActorBase::FireEvent( grapher::ActorBase *this, grapher::ActorBase **a2, grapher::ActorContext *a3);
// [0x13b9720] (181 bytes) grapher::ActorBase::FlushStringTables(void)
// uint32_t *grapher::ActorBase::FlushStringTables(grapher::ActorBase *this);
// [0x13b97e0] (660 bytes) grapher::ActorBase::~ActorBase()
// void grapher::ActorBase::~ActorBase(grapher::ActorBase *this);
// [0x13b9a80] (56 bytes) grapher::ActorBase::~ActorBase()
// void grapher::ActorBase::~ActorBase(grapher::ActorBase *this);
// [0x13b9ac0] (999 bytes) grapher::ActorBase::AddOutputPinConnection(int,grapher::ActorBase*,int)
// grapher::ActorBase *grapher::ActorBase::AddOutputPinConnection( grapher::ActorBase *this, int a2, grapher::ActorBase *a3, int a4);
// [0x13b9eb0] (72 bytes) grapher::ActorBase::operator=(grapher::ActorBase const&)
// grapher::ActorBase *grapher::ActorBase::operator=(grapher::ActorBase *this, const grapher::ActorBase *a2);
// [0x13b9f00] (135 bytes) grapher::ActorBase::SetArraySize(int,int)
// unsigned int grapher::ActorBase::SetArraySize(grapher::ActorBase *this, int a2, unsigned int a3);
// [0x13b9f90] (608 bytes) grapher::ActorBase::UnSerializeConnections(glf::FileStream &,grapher::ActorFile *)
// unsigned int grapher::ActorBase::UnSerializeConnections(void **a1, int a2, grapher::ActorFile *a3);
// [0x13ba1f0] (79 bytes) grapher::ActorBase::HasBreakpoint(std::string const&)
// int grapher::ActorBase::HasBreakpoint(grapher::ActorBase *a1, int a2);
// [0x13ba240] (285 bytes) grapher::ActorBase::SwapBreakpoint(std::string const&)
// int grapher::ActorBase::SwapBreakpoint(int a1, int a2);
// [0x13ba360] (426 bytes) grapher::ActorBase::AddPin(int,std::string,bool,int)
// int grapher::ActorBase::AddPin(int a1, int a2, int a3, char a4, int a5);
// [0x13ba510] (671 bytes) grapher::ActorBase::AddProperty(int,std::string,grapher::ActorVariable *,bool,bool,std::string,grapher::PropertyHint)
// void grapher::ActorBase::AddProperty( int a1, int a2, void **a3, grapher::ActorVariable *a4, char a5, char a6, int a7, int a8);
// [0x13be480] (798 bytes) grapher::ActorBase::DebugInfos::operator=(grapher::ActorBase::DebugInfos const&)
// grapher::ActorBase::DebugInfos *grapher::ActorBase::DebugInfos::operator=( grapher::ActorBase::DebugInfos *this, const grapher::ActorBase::DebugInfos *a2);
