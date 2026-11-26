#pragma once
// ============================================================================
// G4_UP8Shop/lib/iap/decompiled/iap_AndroidBilling.h
// Library: iap | Module: iap_AndroidBilling
// Binary Address Span: 0x15157b0 .. 0x151e1b0 (101 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x15157b0] (13 bytes) iap::AndroidBilling::IsInitialized(void)const
// int iap::AndroidBilling::IsInitialized(iap::AndroidBilling *this);
// [0x15157c0] (40 bytes) iap::AndroidBilling::HasEvent(void)const
// int iap::AndroidBilling::HasEvent(iap::AndroidBilling *this);
// [0x15157f0] (9 bytes) iap::AndroidBilling::PushEvent(iap::Event &)
// int iap::AndroidBilling::PushEvent();
// [0x1515800] (14 bytes) iap::AndroidBilling::RequestConfirmProductV1::IsRunning(void)const
// bool iap::AndroidBilling::RequestConfirmProductV1::IsRunning( iap::AndroidBilling::RequestConfirmProductV1 *this);
// [0x1515810] (22 bytes) iap::AndroidBilling::RequestConfirmProductV1::IsResultReady(void)const
// int iap::AndroidBilling::RequestConfirmProductV1::IsResultReady( iap::AndroidBilling::RequestConfirmProductV1 *this);
// [0x1515830] (14 bytes) iap::AndroidBilling::RequestConfirmProductV1::IsCancelled(void)const
// bool iap::AndroidBilling::RequestConfirmProductV1::IsCancelled( iap::AndroidBilling::RequestConfirmProductV1 *this);
// [0x1515840] (16 bytes) iap::AndroidBilling::RequestConfirmProductV1::Cancel(void)
// int iap::AndroidBilling::RequestConfirmProductV1::Cancel(iap::AndroidBilling::RequestConfirmProductV1 *this);
// [0x1515850] (22 bytes) iap::AndroidBilling::RequestConfirmProductV1::GetType(void)const
// const char *iap::AndroidBilling::RequestConfirmProductV1::GetType();
// [0x1515870] (14 bytes) iap::AndroidBilling::RequestRestorePurchase::IsRunning(void)const
// int iap::AndroidBilling::RequestRestorePurchase::IsRunning(iap::AndroidBilling::RequestRestorePurchase *this);
// [0x1515880] (13 bytes) iap::AndroidBilling::RequestRestorePurchase::IsResultReady(void)const
// int iap::AndroidBilling::RequestRestorePurchase::IsResultReady( iap::AndroidBilling::RequestRestorePurchase *this);
// [0x1515890] (9 bytes) iap::AndroidBilling::RequestRestorePurchase::IsCancelled(void)const
// int iap::AndroidBilling::RequestRestorePurchase::IsCancelled();
// [0x15158a0] (12 bytes) iap::AndroidBilling::RequestRestorePurchase::Cancel(void)
// int iap::AndroidBilling::RequestRestorePurchase::Cancel();
// [0x15158b0] (22 bytes) iap::AndroidBilling::RequestRestorePurchase::GetType(void)const
// const char *iap::AndroidBilling::RequestRestorePurchase::GetType();
// [0x15158d0] (9 bytes) iap::AndroidBilling::RequestGetTransaction::IsRunning(void)const
// int iap::AndroidBilling::RequestGetTransaction::IsRunning();
// [0x15158e0] (12 bytes) iap::AndroidBilling::RequestGetTransaction::IsResultReady(void)const
// int iap::AndroidBilling::RequestGetTransaction::IsResultReady();
// [0x15158f0] (9 bytes) iap::AndroidBilling::RequestGetTransaction::IsCancelled(void)const
// int iap::AndroidBilling::RequestGetTransaction::IsCancelled();
// [0x1515900] (9 bytes) iap::AndroidBilling::RequestGetTransaction::Update(void)
// void iap::AndroidBilling::RequestGetTransaction::Update();
// [0x1515910] (12 bytes) iap::AndroidBilling::RequestGetTransaction::Cancel(void)
// int iap::AndroidBilling::RequestGetTransaction::Cancel();
// [0x1515920] (22 bytes) iap::AndroidBilling::RequestGetTransaction::GetType(void)const
// const char *iap::AndroidBilling::RequestGetTransaction::GetType();
// [0x1515940] (14 bytes) iap::AndroidBilling::RequestFinishTransaction::IsRunning(void)const
// int iap::AndroidBilling::RequestFinishTransaction::IsRunning( iap::AndroidBilling::RequestFinishTransaction *this);
// [0x1515950] (13 bytes) iap::AndroidBilling::RequestFinishTransaction::IsResultReady(void)const
// int iap::AndroidBilling::RequestFinishTransaction::IsResultReady( iap::AndroidBilling::RequestFinishTransaction *this);
// [0x1515960] (9 bytes) iap::AndroidBilling::RequestFinishTransaction::IsCancelled(void)const
// int iap::AndroidBilling::RequestFinishTransaction::IsCancelled();
// [0x1515970] (12 bytes) iap::AndroidBilling::RequestFinishTransaction::Cancel(void)
// int iap::AndroidBilling::RequestFinishTransaction::Cancel();
// [0x1515980] (22 bytes) iap::AndroidBilling::RequestFinishTransaction::GetType(void)const
// const char *iap::AndroidBilling::RequestFinishTransaction::GetType();
// [0x15159a0] (14 bytes) iap::AndroidBilling::RequestBuyProduct::IsRunning(void)const
// int iap::AndroidBilling::RequestBuyProduct::IsRunning(iap::AndroidBilling::RequestBuyProduct *this);
// [0x15159b0] (13 bytes) iap::AndroidBilling::RequestBuyProduct::IsResultReady(void)const
// int iap::AndroidBilling::RequestBuyProduct::IsResultReady(iap::AndroidBilling::RequestBuyProduct *this);
// [0x15159c0] (9 bytes) iap::AndroidBilling::RequestBuyProduct::IsCancelled(void)const
// int iap::AndroidBilling::RequestBuyProduct::IsCancelled();
// [0x15159d0] (12 bytes) iap::AndroidBilling::RequestBuyProduct::Cancel(void)
// int iap::AndroidBilling::RequestBuyProduct::Cancel();
// [0x15159e0] (22 bytes) iap::AndroidBilling::RequestBuyProduct::GetType(void)const
// const char *iap::AndroidBilling::RequestBuyProduct::GetType();
// [0x1515a00] (14 bytes) iap::AndroidBilling::RequestReprocessTransaction::IsRunning(void)const
// int iap::AndroidBilling::RequestReprocessTransaction::IsRunning( iap::AndroidBilling::RequestReprocessTransaction *this);
// [0x1515a10] (13 bytes) iap::AndroidBilling::RequestReprocessTransaction::IsResultReady(void)const
// int iap::AndroidBilling::RequestReprocessTransaction::IsResultReady( iap::AndroidBilling::RequestReprocessTransaction *this);
// [0x1515a20] (9 bytes) iap::AndroidBilling::RequestReprocessTransaction::IsCancelled(void)const
// int iap::AndroidBilling::RequestReprocessTransaction::IsCancelled();
// [0x1515a30] (12 bytes) iap::AndroidBilling::RequestReprocessTransaction::Cancel(void)
// int iap::AndroidBilling::RequestReprocessTransaction::Cancel();
// [0x1515a40] (22 bytes) iap::AndroidBilling::RequestReprocessTransaction::GetType(void)const
// const char *iap::AndroidBilling::RequestReprocessTransaction::GetType();
// [0x1515a60] (14 bytes) iap::AndroidBilling::RequestLimitsValidation::IsRunning(void)const
// bool iap::AndroidBilling::RequestLimitsValidation::IsRunning( iap::AndroidBilling::RequestLimitsValidation *this);
// [0x1515a70] (22 bytes) iap::AndroidBilling::RequestLimitsValidation::IsResultReady(void)const
// int iap::AndroidBilling::RequestLimitsValidation::IsResultReady( iap::AndroidBilling::RequestLimitsValidation *this);
// [0x1515a90] (14 bytes) iap::AndroidBilling::RequestLimitsValidation::IsCancelled(void)const
// bool iap::AndroidBilling::RequestLimitsValidation::IsCancelled( iap::AndroidBilling::RequestLimitsValidation *this);
// [0x1515aa0] (12 bytes) iap::AndroidBilling::RequestLimitsValidation::Cancel(void)
// int iap::AndroidBilling::RequestLimitsValidation::Cancel();
// [0x1515ab0] (22 bytes) iap::AndroidBilling::RequestLimitsValidation::GetType(void)const
// const char *iap::AndroidBilling::RequestLimitsValidation::GetType();
// [0x1515b20] (108 bytes) iap::AndroidBilling::PopEvent(iap::Event &)
// int iap::AndroidBilling::PopEvent(iap::AndroidBilling *this, iap::EventData **a2);
// [0x1515b90] (103 bytes) iap::AndroidBilling::RequestRestorePurchase::Update(void)
// void iap::AndroidBilling::RequestRestorePurchase::Update(iap::AndroidBilling::RequestRestorePurchase *this);
// [0x1515c00] (198 bytes) iap::AndroidBilling::RespondToRequest(char const*)const
// int iap::AndroidBilling::RespondToRequest(int a1, iap::AndroidBilling *this, const char *a3);
// [0x1515cd0] (92 bytes) iap::AndroidBilling::RequestReprocessTransaction::Update(void)
// void iap::AndroidBilling::RequestReprocessTransaction::Update( iap::AndroidBilling::RequestReprocessTransaction *this);
// [0x1515d30] (222 bytes) iap::AndroidBilling::CreationSettings::Update(glwebtools::CustomAttribute const&)
// int iap::AndroidBilling::CreationSettings::Update( iap::AndroidBilling::CreationSettings *this, const glwebtools::CustomAttribute *a2);
// [0x1515e10] (78 bytes) iap::AndroidBilling::UpdateSettings(glwebtools::CustomAttribute const&)
// int iap::AndroidBilling::UpdateSettings(iap::AndroidBilling *this, const glwebtools::CustomAttribute *a2);
// [0x1515e60] (233 bytes) iap::AndroidBilling::Shutdown(char const*)
// int iap::AndroidBilling::Shutdown(iap::AndroidBilling *this);
// [0x1515f50] (615 bytes) iap::AndroidBilling::Update(void)
// void iap::AndroidBilling::Update(glwebtools::GlWebToolsCore **this);
// [0x15161c0] (103 bytes) iap::AndroidBilling::ResultABilling::~ResultABilling()
// void iap::AndroidBilling::ResultABilling::~ResultABilling(iap::AndroidBilling::ResultABilling *this);
// [0x1516230] (56 bytes) iap::AndroidBilling::ResultABilling::~ResultABilling()
// void iap::AndroidBilling::ResultABilling::~ResultABilling(iap::AndroidBilling::ResultABilling *this);
// [0x1516270] (294 bytes) iap::AndroidBilling::CreationSettings::Clear(void)
// int iap::AndroidBilling::CreationSettings::Clear(iap::AndroidBilling::CreationSettings *this);
// [0x15163a0] (186 bytes) iap::AndroidBilling::RequestAndroidBillingBase::~RequestAndroidBillingBase()
// void iap::AndroidBilling::RequestAndroidBillingBase::~RequestAndroidBillingBase( glwebtools::GlWebToolsCore **this);
// [0x1516460] (45 bytes) iap::AndroidBilling::RequestLimitsValidation::~RequestLimitsValidation()
// void iap::AndroidBilling::RequestLimitsValidation::~RequestLimitsValidation(glwebtools::GlWebToolsCore **this);
// [0x1516490] (56 bytes) iap::AndroidBilling::RequestLimitsValidation::~RequestLimitsValidation()
// void iap::AndroidBilling::RequestLimitsValidation::~RequestLimitsValidation(glwebtools::GlWebToolsCore **this);
// [0x15164d0] (45 bytes) iap::AndroidBilling::RequestReprocessTransaction::~RequestReprocessTransaction()
// void iap::AndroidBilling::RequestReprocessTransaction::~RequestReprocessTransaction( glwebtools::GlWebToolsCore **this);
// [0x1516500] (56 bytes) iap::AndroidBilling::RequestReprocessTransaction::~RequestReprocessTransaction()
// void iap::AndroidBilling::RequestReprocessTransaction::~RequestReprocessTransaction( glwebtools::GlWebToolsCore **this);
// [0x1516540] (45 bytes) iap::AndroidBilling::RequestBuyProduct::~RequestBuyProduct()
// void iap::AndroidBilling::RequestBuyProduct::~RequestBuyProduct(glwebtools::GlWebToolsCore **this);
// [0x1516570] (56 bytes) iap::AndroidBilling::RequestBuyProduct::~RequestBuyProduct()
// void iap::AndroidBilling::RequestBuyProduct::~RequestBuyProduct(glwebtools::GlWebToolsCore **this);
// [0x15165b0] (45 bytes) iap::AndroidBilling::RequestFinishTransaction::~RequestFinishTransaction()
// void iap::AndroidBilling::RequestFinishTransaction::~RequestFinishTransaction( glwebtools::GlWebToolsCore **this);
// [0x15165e0] (56 bytes) iap::AndroidBilling::RequestFinishTransaction::~RequestFinishTransaction()
// void iap::AndroidBilling::RequestFinishTransaction::~RequestFinishTransaction( glwebtools::GlWebToolsCore **this);
// [0x1516620] (45 bytes) iap::AndroidBilling::RequestGetTransaction::~RequestGetTransaction()
// void iap::AndroidBilling::RequestGetTransaction::~RequestGetTransaction(glwebtools::GlWebToolsCore **this);
// [0x1516650] (56 bytes) iap::AndroidBilling::RequestGetTransaction::~RequestGetTransaction()
// void iap::AndroidBilling::RequestGetTransaction::~RequestGetTransaction(glwebtools::GlWebToolsCore **this);
// [0x1516690] (45 bytes) iap::AndroidBilling::RequestRestorePurchase::~RequestRestorePurchase()
// void iap::AndroidBilling::RequestRestorePurchase::~RequestRestorePurchase(glwebtools::GlWebToolsCore **this);
// [0x15166c0] (56 bytes) iap::AndroidBilling::RequestRestorePurchase::~RequestRestorePurchase()
// void iap::AndroidBilling::RequestRestorePurchase::~RequestRestorePurchase(glwebtools::GlWebToolsCore **this);
// [0x1516700] (45 bytes) iap::AndroidBilling::RequestConfirmProductV1::~RequestConfirmProductV1()
// void iap::AndroidBilling::RequestConfirmProductV1::~RequestConfirmProductV1(glwebtools::GlWebToolsCore **this);
// [0x1516730] (56 bytes) iap::AndroidBilling::RequestConfirmProductV1::~RequestConfirmProductV1()
// void iap::AndroidBilling::RequestConfirmProductV1::~RequestConfirmProductV1(glwebtools::GlWebToolsCore **this);
// [0x1516770] (56 bytes) iap::AndroidBilling::RequestAndroidBillingBase::~RequestAndroidBillingBase()
// void iap::AndroidBilling::RequestAndroidBillingBase::~RequestAndroidBillingBase( glwebtools::GlWebToolsCore **this);
// [0x15167b0] (586 bytes) iap::AndroidBilling::~AndroidBilling()
// void iap::AndroidBilling::~AndroidBilling(glwebtools::GlWebToolsCore **this);
// [0x1516a00] (56 bytes) iap::AndroidBilling::~AndroidBilling()
// void iap::AndroidBilling::~AndroidBilling(glwebtools::GlWebToolsCore **this);
// [0x1516a40] (531 bytes) iap::AndroidBilling::RequestFinishTransaction::Update(void)
// void iap::AndroidBilling::RequestFinishTransaction::Update(iap::AndroidBilling::RequestFinishTransaction *this);
// [0x1516c60] (1039 bytes) iap::AndroidBilling::ResultABilling::write(glwebtools::JsonWriter &)const
// glwebtools *iap::AndroidBilling::ResultABilling::write( iap::AndroidBilling::ResultABilling *this, glwebtools::JsonWriter *a2);
// [0x1517070] (1645 bytes) iap::AndroidBilling::CreationSettings::read(glwebtools::JsonReader const&)
// int iap::AndroidBilling::CreationSettings::read( iap::AndroidBilling::CreationSettings *this, const glwebtools::JsonReader *a2, int a3);
// [0x15176e0] (645 bytes) iap::AndroidBilling::Initialize(char const*,char const*)
// int iap::AndroidBilling::Initialize(iap::AndroidBilling *this, char *s, char *a3);
// [0x1517970] (1035 bytes) iap::AndroidBilling::ResultABilling::read(glwebtools::JsonReader const&)
// glwebtools *iap::AndroidBilling::ResultABilling::read( iap::AndroidBilling::ResultABilling *this, const glwebtools::JsonReader *a2);
// [0x1517eb0] (156 bytes) iap::AndroidBilling::AndroidBilling(void)
// iap::AndroidBilling *iap::AndroidBilling::AndroidBilling(iap::AndroidBilling *this);
// [0x1517fc0] (9 bytes) iap::AndroidBilling::HasDetectableHack(void)const
// int iap::AndroidBilling::HasDetectableHack();
// [0x1517fd0] (74 bytes) iap::AndroidBilling::GetRequest(unsigned int)
// int iap::AndroidBilling::GetRequest(iap::AndroidBilling *this, unsigned int a2);
// [0x1518020] (87 bytes) iap::AndroidBilling::CancelRequest(unsigned int)
// int iap::AndroidBilling::CancelRequest(iap::AndroidBilling *this, unsigned int a2);
// [0x1518080] (74 bytes) iap::AndroidBilling::GetRequest(unsigned int)const
// int iap::AndroidBilling::GetRequest(iap::AndroidBilling *this, unsigned int a2);
// [0x15180d0] (85 bytes) iap::AndroidBilling::IsRunning(unsigned int)const
// int iap::AndroidBilling::IsRunning(iap::AndroidBilling *this, unsigned int a2);
// [0x1518130] (45 bytes) iap::AndroidBilling::RequestConfirmProductV1::StartRequest(void)
// int iap::AndroidBilling::RequestConfirmProductV1::StartRequest();
// [0x1518160] (320 bytes) iap::AndroidBilling::RequestConfirmProductV1::ProcessResponse(void)
// glwebtools *iap::AndroidBilling::RequestConfirmProductV1::ProcessResponse( iap::AndroidBilling::RequestConfirmProductV1 *this);
// [0x15182a0] (292 bytes) iap::AndroidBilling::RequestConfirmProductV1::Update(void)
// glwebtools *iap::AndroidBilling::RequestConfirmProductV1::Update( iap::AndroidBilling::RequestConfirmProductV1 *this);
// [0x15183d0] (79 bytes) iap::AndroidBilling::ResultABilling::ResultABilling(void)
// struct iap::AndroidBilling::ResultABilling *iap::AndroidBilling::ResultABilling::ResultABilling( iap::AndroidBilling::ResultABilling *this);
// [0x1518420] (131 bytes) iap::AndroidBilling::RequestAndroidBillingBase::RequestAndroidBillingBase(unsigned int,unsigned int)
// struct iap::AndroidBilling::RequestAndroidBillingBase *iap::AndroidBilling::RequestAndroidBillingBase::RequestAndroidBillingBase( iap::AndroidBilling::RequestAndroidBillingBase *this, unsigned int a2, unsigned int a3);
// [0x15184b0] (79 bytes) iap::AndroidBilling::RequestReprocessTransaction::RequestReprocessTransaction(unsigned int,unsigned int)
// void (**iap::AndroidBilling::RequestReprocessTransaction::RequestReprocessTransaction( iap::AndroidBilling::RequestReprocessTransaction *this, unsigned int a2, unsigned int a3))(iap::AndroidBilling::RequestReprocessTransaction *__hidden this);
// [0x1518500] (79 bytes) iap::AndroidBilling::RequestBuyProduct::RequestBuyProduct(unsigned int,unsigned int)
// void (**iap::AndroidBilling::RequestBuyProduct::RequestBuyProduct( iap::AndroidBilling::RequestBuyProduct *this, unsigned int a2, unsigned int a3))(iap::AndroidBilling::RequestBuyProduct *__hidden this);
// [0x1518550] (79 bytes) iap::AndroidBilling::RequestFinishTransaction::RequestFinishTransaction(unsigned int,unsigned int)
// void (**iap::AndroidBilling::RequestFinishTransaction::RequestFinishTransaction( iap::AndroidBilling::RequestFinishTransaction *this, unsigned int a2, unsigned int a3))(iap::AndroidBilling::RequestFinishTransaction *__hidden this);
// [0x15185a0] (86 bytes) iap::AndroidBilling::RequestRestorePurchase::RequestRestorePurchase(unsigned int,unsigned int)
// void (**iap::AndroidBilling::RequestRestorePurchase::RequestRestorePurchase( iap::AndroidBilling::RequestRestorePurchase *this, unsigned int a2, unsigned int a3))(iap::AndroidBilling::RequestRestorePurchase *__hidden this);
// [0x1518600] (82 bytes) iap::AndroidBilling::RequestConfirmProductV1::RequestConfirmProductV1(unsigned int,unsigned int)
// void (**iap::AndroidBilling::RequestConfirmProductV1::RequestConfirmProductV1( iap::AndroidBilling::RequestConfirmProductV1 *this, unsigned int a2, unsigned int a3))(iap::AndroidBilling::RequestConfirmProductV1 *__hidden this);
// [0x1518660] (467 bytes) iap::AndroidBilling::RequestGetTransaction::RequestGetTransaction(unsigned int,unsigned int)
// void iap::AndroidBilling::RequestGetTransaction::RequestGetTransaction( iap::AndroidBilling::RequestGetTransaction *this, unsigned int a2, unsigned int a3);
// [0x1518840] (82 bytes) iap::AndroidBilling::RequestLimitsValidation::RequestLimitsValidation(unsigned int,unsigned int)
// void (**iap::AndroidBilling::RequestLimitsValidation::RequestLimitsValidation( iap::AndroidBilling::RequestLimitsValidation *this, unsigned int a2, unsigned int a3))(iap::AndroidBilling::RequestLimitsValidation *__hidden this);
// [0x15188a0] (1061 bytes) iap::AndroidBilling::RunRequest(char const*,char const*,unsigned int,unsigned int &)
// int iap::AndroidBilling::RunRequest( iap::AndroidBilling *this, const char *a2, char *s, unsigned int a4, unsigned int *a5);
// [0x1518cd0] (1088 bytes) iap::AndroidBilling::RequestLimitsValidation::ProcessLimitsReached(std::string &)
// unsigned int iap::AndroidBilling::RequestLimitsValidation::ProcessLimitsReached(int a1, int a2);
// [0x1519110] (967 bytes) iap::AndroidBilling::RequestLimitsValidation::ProcessResponse(void)
// unsigned int iap::AndroidBilling::RequestLimitsValidation::ProcessResponse( iap::AndroidBilling::RequestLimitsValidation *this);
// [0x15194e0] (2539 bytes) iap::AndroidBilling::RequestLimitsValidation::ProcessConnectionError(int,std::string)
// int iap::AndroidBilling::RequestLimitsValidation::ProcessConnectionError(int a1, int a2, int a3);
// [0x1519ed0] (1276 bytes) iap::AndroidBilling::RequestBuyProduct::Update(void)
// void iap::AndroidBilling::RequestBuyProduct::Update(iap::AndroidBilling::RequestBuyProduct *this);
// [0x151b070] (5739 bytes) iap::AndroidBilling::RequestLimitsValidation::PrepareRequest(glwebtools::UrlRequest &)
// unsigned int iap::AndroidBilling::RequestLimitsValidation::PrepareRequest( iap::AndroidBilling::RequestLimitsValidation *this, glwebtools::UrlRequest *a2);
// [0x151c6e0] (1258 bytes) iap::AndroidBilling::RequestLimitsValidation::StartRequest(void)
// unsigned int iap::AndroidBilling::RequestLimitsValidation::StartRequest( iap::AndroidBilling::RequestLimitsValidation *this);
// [0x151cbd0] (321 bytes) iap::AndroidBilling::RequestLimitsValidation::Update(void)
// int iap::AndroidBilling::RequestLimitsValidation::Update(iap::AndroidBilling::RequestLimitsValidation *this);
// [0x151df50] (385 bytes) iap::AndroidBilling::CreationSettings::~CreationSettings()
// void iap::AndroidBilling::CreationSettings::~CreationSettings(iap::AndroidBilling::CreationSettings *this);
// [0x151e1b0] (400 bytes) iap::AndroidBilling::CreationSettings::~CreationSettings()
// void iap::AndroidBilling::CreationSettings::~CreationSettings(iap::AndroidBilling::CreationSettings *this);
