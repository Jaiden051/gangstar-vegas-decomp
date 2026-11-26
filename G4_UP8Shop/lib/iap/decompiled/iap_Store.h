#pragma once
// ============================================================================
// G4_UP8Shop/lib/iap/decompiled/iap_Store.h
// Library: iap | Module: iap_Store
// Binary Address Span: 0x14f45c0 .. 0x14fac40 (45 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x14f45c0] (9 bytes) iap::Store::ProcessCompleteTransactionResponse(iap::Store&,iap::EventCommandResultData const*)
// void iap::Store::ProcessCompleteTransactionResponse();
// [0x14f45d0] (305 bytes) iap::Store::ProcessRestoreResponse(iap::Store&,iap::EventCommandResultData const*)
// int iap::Store::ProcessRestoreResponse(iap::Store *this, iap::Store *a2);
// [0x14f4710] (975 bytes) iap::Store::ProcessDownloadResponse(iap::Store&,iap::EventCommandResultData const*)
// char *iap::Store::ProcessDownloadResponse(iap::Store *this, iap::Store *a2);
// [0x14f4ae0] (723 bytes) iap::Store::ProcessTransactionResponse(iap::Store&,iap::EventCommandResultData const*)
// void iap::Store::ProcessTransactionResponse(iap::Store *this, iap::Store *a2);
// [0x14f4dc0] (542 bytes) iap::Store::ProcessBuyResponse(iap::Store&,iap::EventCommandResultData const*)
// void iap::Store::ProcessBuyResponse(iap::Store *this, iap::Store *a2);
// [0x14f5660] (778 bytes) iap::Store::ProcessItemResponse(iap::Store&,iap::EventCommandResultData const*)
// uint32_t (*iap::Store::ProcessItemResponse( iap::Store *this, iap::Store *a2))(iap::Store *__hidden this, iap::Store *, const iap::EventCommandResultData *);
// [0x14f5970] (978 bytes) iap::Store::ProcessConfirmProducts(iap::Store&,iap::EventCommandResultData const*)
// void iap::Store::ProcessConfirmProducts(iap::Store *this, iap::Store *a2);
// [0x14f5d50] (1527 bytes) iap::Store::ProcessMetadataResponse(iap::Store&,iap::EventCommandResultData const*)
// int iap::Store::ProcessMetadataResponse(iap::Store *this, iap::Store *a2);
// [0x14f6350] (377 bytes) iap::Store::Store(void)
// iap::Store *iap::Store::Store(iap::Store *this);
// [0x14f64d0] (91 bytes) iap::Store::GetInstance(void)
// iap::Store *iap::Store::GetInstance();
// [0x14f6530] (16 bytes) iap::Store::IsInitialized(void)const
// int iap::Store::IsInitialized(iap::Store *this);
// [0x14f6540] (100 bytes) iap::Store::IsRuleSetAvailable(char const*)const
// int iap::Store::IsRuleSetAvailable(iap::Store *this, const char *a2);
// [0x14f65b0] (595 bytes) iap::Store::Update(unsigned int)
// void iap::Store::Update(iap::Store *this, unsigned int a2);
// [0x14f6810] (251 bytes) iap::Store::RefreshStore(void)
// int iap::Store::RefreshStore(iap::Store *this);
// [0x14f6910] (248 bytes) iap::Store::RefreshCRMStore(std::string const&,void (*)(bool))
// int iap::Store::RefreshCRMStore(int a1, const char **a2, int a3);
// [0x14f6a10] (283 bytes) iap::Store::RestoreCompletedTransaction(void)
// int iap::Store::RestoreCompletedTransaction(iap::Store *this);
// [0x14f6b30] (13 bytes) iap::Store::IsStoreRefreshing(void)const
// bool iap::Store::IsStoreRefreshing(iap::Store *this);
// [0x14f6b40] (13 bytes) iap::Store::IsStoreDownloading(void)const
// bool iap::Store::IsStoreDownloading(iap::Store *this);
// [0x14f6b50] (342 bytes) iap::Store::GetStoreRefreshResult(std::string &)const
// int iap::Store::GetStoreRefreshResult(int a1, int a2);
// [0x14f6cb0] (501 bytes) iap::Store::GetStoreDataJsonString(std::string &)const
// int iap::Store::GetStoreDataJsonString(int a1, int a2);
// [0x14f6eb0] (13 bytes) iap::Store::IsStoreRestoring(void)const
// bool iap::Store::IsStoreRestoring(iap::Store *this);
// [0x14f6ec0] (342 bytes) iap::Store::GetStoreRestoringResult(std::string &)const
// int iap::Store::GetStoreRestoringResult(int a1, int a2);
// [0x14f7020] (1733 bytes) iap::Store::Buy(char const*,char const*,char const*)
// glwebtools *iap::Store::Buy(iap::Store *this, char *a2, char *a3, char *a4);
// [0x14f76f0] (604 bytes) iap::Store::Buy(char const*,char const*)
// glwebtools *iap::Store::Buy(iap::Store *this, char *a2, char *a3);
// [0x14f7950] (14 bytes) iap::Store::HasTransactions(void)const
// bool iap::Store::HasTransactions(iap::Store *this);
// [0x14f7960] (26 bytes) iap::Store::GetTransactionCount(void)const
// int iap::Store::GetTransactionCount(iap::Store *this);
// [0x14f7980] (619 bytes) iap::Store::PopTransaction(std::string &)
// int iap::Store::PopTransaction(iap::Store *a1, int a2);
// [0x14f7bf0] (699 bytes) iap::Store::PushBackTransaction(char const*)
// int iap::Store::PushBackTransaction(iap::Store *this, char *a2);
// [0x14f7eb0] (210 bytes) iap::Store::CompleteTransaction(char const*)
// int iap::Store::CompleteTransaction(iap::Store *this, const char *a2);
// [0x14f7f90] (210 bytes) iap::Store::ReprocessTransaction(char const*)
// int iap::Store::ReprocessTransaction(iap::Store *this, const char *a2);
// [0x14f8070] (190 bytes) iap::Store::UpdateSettings(glwebtools::CustomAttribute const&)
// int iap::Store::UpdateSettings(iap::Controller **this, const glwebtools::CustomAttribute *a2);
// [0x14f8130] (878 bytes) iap::Store::ProcessCheckLimitations(iap::Store&,iap::EventCommandResultData const*)
// void iap::Store::ProcessCheckLimitations(iap::Store *this, iap::Store *a2);
// [0x14f84a0] (52 bytes) iap::Store::FileExist(std::string const&)const
// bool iap::Store::FileExist(int a1, const char **a2);
// [0x14f84e0] (496 bytes) iap::Store::checkFileIsUpToDate(std::string const&)
// int iap::Store::checkFileIsUpToDate(int a1, const char **a2);
// [0x14f86d0] (758 bytes) iap::Store::DownloadIcons(std::string const&,void (*)(void))
// int iap::Store::DownloadIcons(int a1, int a2, int a3);
// [0x14f89d0] (16 bytes) iap::Store::CheckIfLimitationsActive(void)
// int iap::Store::CheckIfLimitationsActive(iap::Store *this);
// [0x14f89e0] (502 bytes) iap::Store::setFederationMode(bool)
// int iap::Store::setFederationMode(iap::Controller **this, bool a2);
// [0x14f8be0] (16 bytes) iap::Store::isFederationOffline(void)
// int iap::Store::isFederationOffline(iap::Store *this);
// [0x14f8bf0] (14 bytes) iap::Store::GetEcommerceReceiptID(void)
// char *iap::Store::GetEcommerceReceiptID(iap::Store *this);
// [0x14f8c00] (70 bytes) iap::Store::GetItemByEntryId(std::string const&)
// int iap::Store::GetItemByEntryId(int a1);
// [0x14f8c50] (70 bytes) iap::Store::GetPromoEndDate(void)
// iap::Store *iap::Store::GetPromoEndDate(iap::Store *this);
// [0x14f8ca0] (5124 bytes) iap::Store::Initialize(glwebtools::JsonWriter &)
// int iap::Store::Initialize(iap::Store *this, glwebtools::JsonWriter *a2);
// [0x14fa0b0] (1520 bytes) iap::Store::Shutdown(void)
// int iap::Store::Shutdown(iap::Controller **this);
// [0x14fa6a0] (1431 bytes) iap::Store::~Store()
// void iap::Store::~Store(iap::Store *this);
// [0x14fac40] (78 bytes) iap::Store::DestroyInstance(void)
// void iap::Store::DestroyInstance();
