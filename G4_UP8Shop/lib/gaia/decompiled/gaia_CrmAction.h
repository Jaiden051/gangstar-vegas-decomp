#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_CrmAction.h
// Library: gaia | Module: gaia_CrmAction
// Binary Address Span: 0x14caa30 .. 0x14e3360 (28 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x14caa30] (82 bytes) gaia::CrmAction::GetUNIXSeconds(void)
// __time_t gaia::CrmAction::GetUNIXSeconds();
// [0x14caa90] (1205 bytes) gaia::CrmAction::Serialize(void)
// gaia::CrmAction *gaia::CrmAction::Serialize(gaia::CrmAction *this, int a2);
// [0x14caf50] (16 bytes) gaia::CrmAction::IsInPendingState(void)const
// int gaia::CrmAction::IsInPendingState(gaia::CrmAction *this);
// [0x14caf60] (1251 bytes) gaia::CrmAction::Deserialize(Json::Value const&)
// int gaia::CrmAction::Deserialize(gaia::CrmAction *this, const Json::Value *a2);
// [0x14cb450] (426 bytes) gaia::CrmAction::ExtractTags(Json::Value const&,std::string &)
// int gaia::CrmAction::ExtractTags(int a1, Json::Value *a2, uint32_t *a3);
// [0x14cb600] (1413 bytes) gaia::CrmAction::Update(unsigned int)
// int gaia::CrmAction::Update(gaia::CrmAction *this);
// [0x14cbb90] (839 bytes) gaia::CrmAction::Evaluate(std::string const&,std::string const&,std::string const&,Json::Value const&)
// bool gaia::CrmAction::Evaluate(int a1, const char **a2, int a3, const char **a4, Json::Value *a5);
// [0x14cbee0] (723 bytes) gaia::CrmAction::CheckMathConditions(Json::Value const&,Json::Value const&)
// int gaia::CrmAction::CheckMathConditions(gaia::CrmAction *this, const Json::Value *a2, const Json::Value *a3);
// [0x14cc1c0] (12 bytes) gaia::CrmAction::GetActionType(void)
// int gaia::CrmAction::GetActionType(gaia::CrmAction *this);
// [0x14cc1d0] (12 bytes) gaia::CrmAction::GetTypeSpecificFields(void)
// char *gaia::CrmAction::GetTypeSpecificFields(gaia::CrmAction *this);
// [0x14cc1e0] (23 bytes) gaia::CrmAction::TrySetCachedTimestamp(unsigned int)
// gaia::CrmAction *gaia::CrmAction::TrySetCachedTimestamp(gaia::CrmAction *this, unsigned int a2);
// [0x14cc200] (44 bytes) gaia::CrmAction::GetCurrentOrCachedTimestamp(void)
// __time_t gaia::CrmAction::GetCurrentOrCachedTimestamp(gaia::CrmAction *this);
// [0x14cc230] (15 bytes) gaia::CrmAction::GetPriority(void)const
// int gaia::CrmAction::GetPriority(gaia::CrmAction *this);
// [0x14cc240] (36 bytes) gaia::CrmAction::GetFatigueGroup(void)
// gaia::CrmAction *gaia::CrmAction::GetFatigueGroup(gaia::CrmAction *this, int a2);
// [0x14cc270] (14 bytes) gaia::CrmAction::GetFatigueGroupName(void)
// char *gaia::CrmAction::GetFatigueGroupName(gaia::CrmAction *this);
// [0x14cdc20] (266 bytes) gaia::CrmAction::SetFatigueGroup(boost::shared_ptr<gaia::CrmFatigueGroup> &)
// int gaia::CrmAction::SetFatigueGroup(uint32_t *a1, int a2);
// [0x14d6f40] (1586 bytes) gaia::CrmAction::ExtractTypeSpecificFields(Json::Value const&)
// int gaia::CrmAction::ExtractTypeSpecificFields(gaia::CrmAction *this, const Json::Value *a2);
// [0x14d7580] (1042 bytes) gaia::CrmAction::CheckTriggerConditions(std::string const&,Json::Value const&)
// int gaia::CrmAction::CheckTriggerConditions(gaia::CrmAction *a1, int a2, Json::Value *a3);
// [0x14d8aa0] (424 bytes) gaia::CrmAction::CheckIfActionIsAvailable(void)
// int gaia::CrmAction::CheckIfActionIsAvailable(gaia::CrmAction *this);
// [0x14dbe30] (447 bytes) gaia::CrmAction::ExtractLimitData(Json::Value const&)
// int gaia::CrmAction::ExtractLimitData(gaia::CrmAction *this, const Json::Value *a2);
// [0x14dbff0] (810 bytes) gaia::CrmAction::ExtractTypeIndependentFields(Json::Value const&)
// int gaia::CrmAction::ExtractTypeIndependentFields(gaia::CrmAction *this, const Json::Value *a2);
// [0x14dc320] (107 bytes) gaia::CrmAction::Initialize(Json::Value const&)
// int gaia::CrmAction::Initialize(gaia::CrmAction *this, const Json::Value *a2);
// [0x14e1c80] (262 bytes) gaia::CrmAction::~CrmAction()
// void gaia::CrmAction::~CrmAction(gaia::CrmAction *this);
// [0x14e1d90] (56 bytes) gaia::CrmAction::~CrmAction()
// void gaia::CrmAction::~CrmAction(gaia::CrmAction *this);
// [0x14e1fe0] (697 bytes) gaia::CrmAction::CrmAction(gaia::CrmManager &)
// gaia::CrmAction *gaia::CrmAction::CrmAction(gaia::CrmAction *this, gaia::CrmManager *a2);
// [0x14e2350] (1109 bytes) gaia::CrmAction::CheckCooldowns(unsigned int)
// int gaia::CrmAction::CheckCooldowns(gaia::CrmAction *this);
// [0x14e3090] (57 bytes) gaia::CrmAction::CheckFatigueGroupConstraints(unsigned int)
// int gaia::CrmAction::CheckFatigueGroupConstraints(unsigned int ***this, unsigned int a2);
// [0x14e3360] (1319 bytes) gaia::CrmAction::Trigger(std::string const&,Json::Value const&,unsigned int)
// int gaia::CrmAction::Trigger(gaia::CrmAction *a1, uint32_t *a2, Json::Value *a3, unsigned int a4);
