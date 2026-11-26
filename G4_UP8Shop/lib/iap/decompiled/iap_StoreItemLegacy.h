#pragma once
// ============================================================================
// G4_UP8Shop/lib/iap/decompiled/iap_StoreItemLegacy.h
// Library: iap | Module: iap_StoreItemLegacy
// Binary Address Span: 0x150a180 .. 0x150f2c0 (34 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x150a180] (6369 bytes) iap::StoreItemLegacy::write(glwebtools::JsonWriter &)const
// int iap::StoreItemLegacy::write( iap::StoreItemLegacy *this, glwebtools::JsonWriter *a2, void *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63, int a64);
// [0x150ba70] (751 bytes) iap::StoreItemLegacy::Clear(void)
// int iap::StoreItemLegacy::Clear(iap::StoreItemLegacy *this);
// [0x150bd60] (7362 bytes) iap::StoreItemLegacy::read(glwebtools::JsonReader const&)
// int iap::StoreItemLegacy::read( long double a1, iap::StoreItemLegacy *this, const glwebtools::JsonReader *a3);
// [0x150da30] (167 bytes) iap::StoreItemLegacy::operator==(char const*)const
// int iap::StoreItemLegacy::operator==(iap::StoreItemLegacy *this, char *a2);
// [0x150dae0] (148 bytes) iap::StoreItemLegacy::Print(void)const
// unsigned int iap::StoreItemLegacy::Print(iap::StoreItemLegacy *this);
// [0x150db80] (163 bytes) iap::StoreItemLegacy::ToJsonString(std::string &)const
// int iap::StoreItemLegacy::ToJsonString(int a1, int a2);
// [0x150dc30] (29 bytes) iap::StoreItemLegacy::GetName(void)const
// int iap::StoreItemLegacy::GetName(iap::StoreItemLegacy *this);
// [0x150dc50] (29 bytes) iap::StoreItemLegacy::GetUid(void)const
// int iap::StoreItemLegacy::GetUid(iap::StoreItemLegacy *this);
// [0x150dc70] (29 bytes) iap::StoreItemLegacy::GetDescription(void)const
// int iap::StoreItemLegacy::GetDescription(iap::StoreItemLegacy *this);
// [0x150dc90] (30 bytes) iap::StoreItemLegacy::GetPreviewPath(void)const
// int iap::StoreItemLegacy::GetPreviewPath(iap::StoreItemLegacy *this);
// [0x150dcb0] (29 bytes) iap::StoreItemLegacy::GetTrackingUID(void)const
// int iap::StoreItemLegacy::GetTrackingUID(iap::StoreItemLegacy *this);
// [0x150dcd0] (21 bytes) iap::StoreItemLegacy::GetOfflineItemsBonus(void)const
// int iap::StoreItemLegacy::GetOfflineItemsBonus(iap::StoreItemLegacy *this);
// [0x150dcf0] (53 bytes) iap::StoreItemLegacy::GetPrice(void)const
// int iap::StoreItemLegacy::GetPrice(iap::StoreItemLegacy *this);
// [0x150dd30] (53 bytes) iap::StoreItemLegacy::GetRegularPrice(void)const
// int iap::StoreItemLegacy::GetRegularPrice(iap::StoreItemLegacy *this);
// [0x150dd70] (53 bytes) iap::StoreItemLegacy::HasPricePromotion(void)const
// bool iap::StoreItemLegacy::HasPricePromotion(iap::StoreItemLegacy *this);
// [0x150ddb0] (53 bytes) iap::StoreItemLegacy::GetReductionPercent(void)const
// void iap::StoreItemLegacy::GetReductionPercent(iap::StoreItemLegacy *this);
// [0x150ddf0] (21 bytes) iap::StoreItemLegacy::GetAmount(void)const
// int iap::StoreItemLegacy::GetAmount(iap::StoreItemLegacy *this);
// [0x150de10] (27 bytes) iap::StoreItemLegacy::HasAmountPromotion(void)const
// bool iap::StoreItemLegacy::HasAmountPromotion(iap::StoreItemLegacy *this);
// [0x150de30] (94 bytes) iap::StoreItemLegacy::GetBonusAmountPercent(void)const
// long double iap::StoreItemLegacy::GetBonusAmountPercent(iap::StoreItemLegacy *this);
// [0x150de90] (62 bytes) iap::StoreItemLegacy::GetBonusAmount(void)const
// int iap::StoreItemLegacy::GetBonusAmount(iap::StoreItemLegacy *this);
// [0x150ded0] (29 bytes) iap::StoreItemLegacy::GetType(void)const
// int iap::StoreItemLegacy::GetType(iap::StoreItemLegacy *this);
// [0x150def0] (30 bytes) iap::StoreItemLegacy::GetSubType(void)const
// int iap::StoreItemLegacy::GetSubType(iap::StoreItemLegacy *this);
// [0x150df10] (30 bytes) iap::StoreItemLegacy::GetLocale(void)const
// int iap::StoreItemLegacy::GetLocale(iap::StoreItemLegacy *this);
// [0x150df30] (37 bytes) iap::StoreItemLegacy::GetBillingMethodCount(void)const
// int iap::StoreItemLegacy::GetBillingMethodCount(iap::StoreItemLegacy *this);
// [0x150df60] (45 bytes) iap::StoreItemLegacy::GetBillingMethod(unsigned int)const
// int iap::StoreItemLegacy::GetBillingMethod(iap::StoreItemLegacy *this, unsigned int a2);
// [0x150df90] (53 bytes) iap::StoreItemLegacy::GetBillingMethod(char const*,char const*)const
// int iap::StoreItemLegacy::GetBillingMethod(iap::StoreItemLegacy *this, char *a2, char *a3);
// [0x150dfd0] (229 bytes) iap::StoreItemLegacy::operator<(iap::StoreItemLegacy const&)const
// char iap::StoreItemLegacy::operator<(iap::StoreItemLegacy *this, const iap::StoreItemLegacy *a2);
// [0x150e0f0] (176 bytes) iap::StoreItemLegacy::GetExtendedField(char const*)const
// iap::StoreItemLegacy *iap::StoreItemLegacy::GetExtendedField( iap::StoreItemLegacy *this, const char *a2, char *a3);
// [0x150e1a0] (47 bytes) iap::StoreItemLegacy::setIconSavePath(std::string const&)
// int iap::StoreItemLegacy::setIconSavePath(int a1, int a2);
// [0x150e1d0] (15 bytes) iap::StoreItemLegacy::getIconSavePath(void)const
// int iap::StoreItemLegacy::getIconSavePath(iap::StoreItemLegacy *this);
// [0x150e450] (512 bytes) iap::StoreItemLegacy::~StoreItemLegacy()
// void iap::StoreItemLegacy::~StoreItemLegacy(iap::StoreItemLegacy *this);
// [0x150e650] (56 bytes) iap::StoreItemLegacy::~StoreItemLegacy()
// void iap::StoreItemLegacy::~StoreItemLegacy(iap::StoreItemLegacy *this);
// [0x150ed20] (1440 bytes) iap::StoreItemLegacy::StoreItemLegacy(iap::StoreItemLegacy const&)
// iap::StoreItemLegacy *iap::StoreItemLegacy::StoreItemLegacy( iap::StoreItemLegacy *this, const iap::StoreItemLegacy *a2);
// [0x150f2c0] (3885 bytes) iap::StoreItemLegacy::operator=(iap::StoreItemLegacy const&)
// iap::StoreItemLegacy *iap::StoreItemLegacy::operator=( iap::StoreItemLegacy *this, const iap::StoreItemLegacy *a2);
