#pragma once
// ============================================================================
// G4_UP8Shop/lib/Glotv3/decompiled/glotv3_TrackingManager.h
// Library: Glotv3 | Module: glotv3_TrackingManager
// Binary Address Span: 0x1321f70 .. 0x132b2c0 (38 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1321f70] (114 bytes) glotv3::TrackingManager::GetGameTime(void)
// int glotv3::TrackingManager::GetGameTime(glotv3::TrackingManager *this);
// [0x1321ff0] (37 bytes) glotv3::TrackingManager::GetTimeBetweenSessions(bool)const
// unsigned int glotv3::TrackingManager::GetTimeBetweenSessions(glotv3::TrackingManager *this, bool a2);
// [0x1322020] (15 bytes) glotv3::TrackingManager::GetPreviousTimeSpent(void)const
// int glotv3::TrackingManager::GetPreviousTimeSpent(glotv3::TrackingManager *this);
// [0x1322030] (15 bytes) glotv3::TrackingManager::GetCurrentSessionIdentifier(void)const
// int glotv3::TrackingManager::GetCurrentSessionIdentifier(glotv3::TrackingManager *this);
// [0x1322040] (203 bytes) glotv3::TrackingManager::GetCurrentSessionTime(void)const
// int glotv3::TrackingManager::GetCurrentSessionTime(glotv3::TrackingManager *this);
// [0x1322110] (12 bytes) glotv3::TrackingManager::GetGGID(void)const
// int glotv3::TrackingManager::GetGGID(glotv3::TrackingManager *this);
// [0x1322120] (63 bytes) glotv3::TrackingManager::GetGameVersionString(void)const
// glotv3::TrackingManager *glotv3::TrackingManager::GetGameVersionString(glotv3::TrackingManager *this, int a2);
// [0x1322160] (9 bytes) glotv3::TrackingManager::Update(void)
// void glotv3::TrackingManager::Update();
// [0x1322170] (189 bytes) glotv3::TrackingManager::GetFedAccessToken(void)const
// glotv3::TrackingManager *glotv3::TrackingManager::GetFedAccessToken(glotv3::TrackingManager *this, int a2);
// [0x1322230] (176 bytes) glotv3::TrackingManager::SetFedAccessToken(std::string const&)
// int glotv3::TrackingManager::SetFedAccessToken(int a1, int a2);
// [0x13222e0] (301 bytes) glotv3::TrackingManager::OnPause(void)
// int glotv3::TrackingManager::OnPause(glotv3::TrackingManager *this);
// [0x1322410] (114 bytes) glotv3::TrackingManager::BlockSending(void)
// int glotv3::TrackingManager::BlockSending(glotv3::TrackingManager *this);
// [0x1322490] (122 bytes) glotv3::TrackingManager::TriggerSending(void)
// int glotv3::TrackingManager::TriggerSending(glotv3::TrackingManager *this);
// [0x1322510] (114 bytes) glotv3::TrackingManager::BlockTracking(void)
// int glotv3::TrackingManager::BlockTracking(glotv3::TrackingManager *this);
// [0x1322590] (114 bytes) glotv3::TrackingManager::TriggerTracking(void)
// int glotv3::TrackingManager::TriggerTracking(glotv3::TrackingManager *this);
// [0x1322610] (107 bytes) glotv3::TrackingManager::ResetFlags(void)
// int glotv3::TrackingManager::ResetFlags(glotv3::TrackingManager *this);
// [0x1322680] (60 bytes) glotv3::TrackingManager::ResetTimers(void)
// int glotv3::TrackingManager::ResetTimers(glotv3::TrackingManager *this);
// [0x13226c0] (431 bytes) glotv3::TrackingManager::OutputConfigurationParameters(void)
// int glotv3::TrackingManager::OutputConfigurationParameters(glotv3::TrackingManager *this);
// [0x1322870] (321 bytes) glotv3::TrackingManager::ResetDataDirectoryToOurOwn(void)
// int glotv3::TrackingManager::ResetDataDirectoryToOurOwn(glotv3::TrackingManager *this);
// [0x13229c0] (200 bytes) glotv3::TrackingManager::ViaGlwt2Threads(void *,void *)
// void (*glotv3::TrackingManager::ViaGlwt2Threads( int a1, int a2, glotv3::TrackingManager *this, pthread_mutex_t **a4))();
// [0x1322a90] (16 bytes) glotv3::TrackingManager::IsTrackingSessionStarted(void)const
// int glotv3::TrackingManager::IsTrackingSessionStarted(glotv3::TrackingManager *this);
// [0x1322aa0] (615 bytes) glotv3::TrackingManager::OnExit(void)
// int glotv3::TrackingManager::OnExit(glotv3::TrackingManager *this);
// [0x1322d10] (636 bytes) glotv3::TrackingManager::~TrackingManager()
// void glotv3::TrackingManager::~TrackingManager(volatile int32_t **this);
// [0x1323100] (445 bytes) glotv3::TrackingManager::DelaySending(unsigned int)
// void glotv3::TrackingManager::DelaySending(glotv3::TrackingManager *this, unsigned int a2);
// [0x13232c0] (701 bytes) glotv3::TrackingManager::AddEvent(boost::shared_ptr<glotv3::Event>,bool)
// int glotv3::TrackingManager::AddEvent(int a1, glotv3::Event **a2, char a3);
// [0x1323580] (2923 bytes) glotv3::TrackingManager::OutputDebugInformation(void)
// int glotv3::TrackingManager::OutputDebugInformation(glotv3::TrackingManager *this);
// [0x13244c0] (552 bytes) glotv3::TrackingManager::RequestFederationAccessTokenFromGaia(void)
// int glotv3::TrackingManager::RequestFederationAccessTokenFromGaia(glotv3::TrackingManager *this);
// [0x13246f0] (117 bytes) glotv3::TrackingManager::ViaGaiaActionsManager(void *,bool,gaia::ActionData)
// int glotv3::TrackingManager::ViaGaiaActionsManager(glotv3::TrackingManager *a1);
// [0x1324840] (523 bytes) glotv3::TrackingManager::OnLaunch(unsigned int,std::string const&,std::string const&)
// int glotv3::TrackingManager::OnLaunch(glotv3::TrackingManager *a1, int a2, int a3, int a4);
// [0x1324ef0] (2067 bytes) glotv3::TrackingManager::ViaGaia(gaia::GaiaRequest)
// char glotv3::TrackingManager::ViaGaia(gaia::GaiaRequest *a1);
// [0x1325e20] (4310 bytes) glotv3::TrackingManager::SpawnWorkers(void)
// int glotv3::TrackingManager::SpawnWorkers(glotv3::TrackingManager *this);
// [0x1327160] (758 bytes) glotv3::TrackingManager::ResyncWithGaia(void)
// int glotv3::TrackingManager::ResyncWithGaia(glotv3::TrackingManager *this);
// [0x1327810] (4265 bytes) glotv3::TrackingManager::ActivateSpyIfConfigured(void)
// int glotv3::TrackingManager::ActivateSpyIfConfigured(glotv3::TrackingManager *this);
// [0x13288c0] (1237 bytes) glotv3::TrackingManager::TrackingManager(std::string,std::string)
// char glotv3::TrackingManager::TrackingManager(glotv3::TrackingManager *a1, int a2, int a3);
// [0x1328da0] (563 bytes) glotv3::TrackingManager::getInstance(void)
// glotv3::TrackingManager *glotv3::TrackingManager::getInstance(glotv3::TrackingManager *this);
// [0x1329480] (4444 bytes) glotv3::TrackingManager::OnResume(void)
// void glotv3::TrackingManager::OnResume(glotv3::TrackingManager *this);
// [0x132a5e0] (3285 bytes) glotv3::TrackingManager::AddEvent(boost::shared_ptr<glotv3::EventParams>)
// int glotv3::TrackingManager::AddEvent(int a1, uint32_t *a2);
// [0x132b2c0] (6851 bytes) glotv3::TrackingManager::AddEvent(int,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue,glotv3::EventValue)
// int glotv3::TrackingManager::AddEvent( int a1, int a2, glotv3::EventValue *a3, glotv3::EventValue *a4, glotv3::EventValue *a5, glotv3::EventValue *a6, glotv3::EventValue *a7, glotv3::EventValue *a8, glotv3::EventValue *a9, glotv3::EventValue *a10, glotv3::EventValue *a11, glotv3::EventValue *a12, glotv3::EventValue *a13, glotv3::EventValue *a14, glotv3::EventValue *a15, glotv3::EventValue *a16, glotv3::EventValue *a17, glotv3::EventValue *a18, glotv3::EventValue *a19, glotv3::EventValue *a20, glotv3::EventValue *a21, glotv3::EventValue *a22, glotv3::EventValue *a23, glotv3::EventValue *a24, glotv3::EventValue *a25, glotv3::EventValue *a26, glotv3::EventValue *a27, glotv3::EventValue *a28, glotv3::EventValue *a29, glotv3::EventValue *a30, glotv3::EventValue *a31, glotv3::EventValue *a32, glotv3::EventValue *a33, glotv3::EventValue *a34, glotv3::EventValue *a35, glotv3::EventValue *a36, glotv3::EventValue *a37, glotv3::EventValue *a38, glotv3::EventValue *a39, glotv3::EventValue *a40, glotv3::EventValue *a41, glotv3::EventValue *a42);
