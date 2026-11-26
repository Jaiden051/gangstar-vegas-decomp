#pragma once
// ============================================================================
// G4_UP8Shop/lib/oi/decompiled/oi_core.h
// Library: oi | Module: oi_core
// Binary Address Span: 0x153b700 .. 0x1543800 (109 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x153b700] (75 bytes) oi::OfflineStore::OfflineStore(void)
// struct oi::OfflineStore *oi::OfflineStore::OfflineStore(oi::OfflineStore *this);
// [0x153b750] (91 bytes) oi::OfflineStore::GetInstance(void)
// oi::OfflineStore *oi::OfflineStore::GetInstance();
// [0x153b7b0] (135 bytes) oi::OfflineStore::ShutDown(void)
// int oi::OfflineStore::ShutDown(oi::OfflineStore *this);
// [0x153b840] (95 bytes) oi::OfflineStore::~OfflineStore()
// void oi::OfflineStore::~OfflineStore(oi::OfflineStore *this);
// [0x153b8a0] (99 bytes) oi::OfflineStore::DestroyInstance(void)
// int oi::OfflineStore::DestroyInstance();
// [0x153b910] (13 bytes) oi::OfflineStore::IsInitialized(void)
// int oi::OfflineStore::IsInitialized(oi::OfflineStore *this);
// [0x153b920] (11 bytes) oi::OfflineStore::GetOfflineItemList(void)
// int oi::OfflineStore::GetOfflineItemList(oi::OfflineStore *this);
// [0x153b930] (12 bytes) oi::OfflineStore::checkMemmory(void)
// int oi::OfflineStore::checkMemmory();
// [0x153b940] (82 bytes) oi::OfflineStore::Update(void)
// void oi::OfflineStore::Update(oi::OfflineStore *this);
// [0x153b9a0] (9 bytes) oi::OfflineStore::makeBackup(void)
// void oi::OfflineStore::makeBackup();
// [0x153b9b0] (146 bytes) oi::OfflineStore::Parse(std::string const&)
// int oi::OfflineStore::Parse(oi::OfflineStore *a1, int a2);
// [0x153ba50] (232 bytes) oi::OfflineStore::Refresh(std::string const&)
// unsigned int oi::OfflineStore::Refresh(oi::OfflineStore *a1, int a2);
// [0x153bb40] (261 bytes) oi::OfflineStore::Initialize(std::string const&)
// int oi::OfflineStore::Initialize(oi::OfflineStore *a1, int a2);
// [0x153bc50] (377 bytes) oi::OfflineStore::DecryptOfflineItems(char const*&,long,void *&,long &,unsigned int *)
// unsigned int oi::OfflineStore::DecryptOfflineItems( oi::OfflineStore *this, const char **a2, size_t a3, void **a4, int *a5, unsigned int *a6);
// [0x153bdd0] (367 bytes) oi::OfflineStore::EncryptOfflineItems(void *,long,void *&,long &,unsigned int *)
// unsigned int oi::OfflineStore::EncryptOfflineItems( oi::OfflineStore *this, void *src, size_t n, void **a4, int *a5, unsigned int *a6);
// [0x153bf40] (43 bytes) oi::OfflineStore::GetPromotionName(void)
// int oi::OfflineStore::GetPromotionName(oi::PromotionOI **this);
// [0x153bf70] (43 bytes) oi::OfflineStore::GetEndDate(void)
// int oi::OfflineStore::GetEndDate(oi::PromotionOI **this);
// [0x153bff0] (87 bytes) oi::ItemPriceArray::~ItemPriceArray()
// void oi::ItemPriceArray::~ItemPriceArray(oi::ItemPriceArray *this);
// [0x153c050] (56 bytes) oi::ItemPriceArray::~ItemPriceArray()
// void oi::ItemPriceArray::~ItemPriceArray(oi::ItemPriceArray *this);
// [0x153c090] (339 bytes) oi::ItemPriceArray::write(glwebtools::JsonWriter &)const
// int oi::ItemPriceArray::write(oi::ItemPriceArray *this, glwebtools::JsonWriter *a2);
// [0x153c1f0] (143 bytes) oi::ItemPriceArray::read(std::string const&)
// glwebtools *oi::ItemPriceArray::read(int a1, int a2);
// [0x153c280] (81 bytes) oi::ItemPrice::~ItemPrice()
// void oi::ItemPrice::~ItemPrice(oi::ItemPrice *this);
// [0x153c2e0] (56 bytes) oi::ItemPrice::~ItemPrice()
// void oi::ItemPrice::~ItemPrice(oi::ItemPrice *this);
// [0x153c320] (140 bytes) oi::ItemPrice::Clear(void)
// int oi::ItemPrice::Clear(oi::ItemPrice *this);
// [0x153c3b0] (163 bytes) oi::ItemPrice::ToJsonString(std::string &)const
// int oi::ItemPrice::ToJsonString(int a1, int a2);
// [0x153c460] (845 bytes) oi::ItemPrice::write(glwebtools::JsonWriter &)const
// int oi::ItemPrice::write(oi::ItemPrice *this, glwebtools::JsonWriter *a2);
// [0x153c7b0] (1241 bytes) oi::ItemPrice::read(glwebtools::JsonReader const&)
// int oi::ItemPrice::read( long double a1, oi::ItemPrice *this, const glwebtools::JsonReader *a3, int a4, int a5, int a6, int a7, int a8);
// [0x153cc90] (44 bytes) oi::ItemPrice::GetPrice(void)const
// long double oi::ItemPrice::GetPrice(oi::ItemPrice *this);
// [0x153ccc0] (29 bytes) oi::ItemPrice::GetCurrency(void)const
// int oi::ItemPrice::GetCurrency(oi::ItemPrice *this);
// [0x153cce0] (600 bytes) oi::ItemPrice::Print(void)const
// void oi::ItemPrice::Print(oi::ItemPrice *this);
// [0x153cf40] (37 bytes) oi::ItemPrice::totalSize(void)
// int oi::ItemPrice::totalSize(oi::ItemPrice *this);
// [0x153cf70] (20 bytes) oi::ItemPriceArray::Size(void)const
// int oi::ItemPriceArray::Size(oi::ItemPriceArray *this);
// [0x153cf90] (62 bytes) oi::ItemPriceArray::Clear(void)
// uint32_t *oi::ItemPriceArray::Clear(oi::ItemPriceArray *this);
// [0x153cfd0] (81 bytes) oi::ItemPriceArray::GetCurrency(unsigned int)const
// int oi::ItemPriceArray::GetCurrency(oi::ItemPriceArray *this, unsigned int a2);
// [0x153d030] (69 bytes) oi::ItemPriceArray::GetPrice(unsigned int)const
// long double oi::ItemPriceArray::GetPrice(oi::ItemPriceArray *this, unsigned int a2);
// [0x153d080] (163 bytes) oi::ItemPriceArray::GetPrice(std::string)const
// long double oi::ItemPriceArray::GetPrice(int a1, char **a2);
// [0x153d130] (18 bytes) oi::ItemPriceArray::GetItemPrice(unsigned int)const
// unsigned int oi::ItemPriceArray::GetItemPrice(oi::ItemPriceArray *this, unsigned int a2);
// [0x153d150] (42 bytes) oi::ItemPriceArray::operator[](unsigned int)const
// unsigned int oi::ItemPriceArray::operator[](oi::ItemPriceArray *this, unsigned int a2);
// [0x153d180] (110 bytes) oi::ItemPriceArray::totalSize(void)
// int oi::ItemPriceArray::totalSize(oi::ItemPriceArray *this);
// [0x153d1f0] (980 bytes) oi::ItemPriceArray::read(glwebtools::JsonReader const&)
// int oi::ItemPriceArray::read( long double a1, oi::ItemPriceArray *this, const glwebtools::JsonReader *a3);
// [0x153dad0] (91 bytes) oi::PromotionOI::read(std::string const&)
// int oi::PromotionOI::read(int (***a1)(uint32_t, uint8_t *), int a2);
// [0x153db30] (145 bytes) oi::PromotionOI::~PromotionOI()
// void oi::PromotionOI::~PromotionOI(oi::PromotionOI *this);
// [0x153dbd0] (56 bytes) oi::PromotionOI::~PromotionOI()
// void oi::PromotionOI::~PromotionOI(oi::PromotionOI *this);
// [0x153dc10] (198 bytes) oi::PromotionOI::Clear(void)
// int oi::PromotionOI::Clear(oi::PromotionOI *this);
// [0x153dce0] (1068 bytes) oi::PromotionOI::read(glwebtools::JsonReader const&)
// int oi::PromotionOI::read(oi::PromotionOI *this, const glwebtools::JsonReader *a2);
// [0x153e110] (29 bytes) oi::PromotionOI::GetEndTime(void)const
// int oi::PromotionOI::GetEndTime(oi::PromotionOI *this);
// [0x153e130] (29 bytes) oi::PromotionOI::GetDescription(void)const
// int oi::PromotionOI::GetDescription(oi::PromotionOI *this);
// [0x153e150] (124 bytes) oi::PromotionOI::Print(void)const
// void oi::PromotionOI::Print(oi::PromotionOI *this);
// [0x153e220] (9 bytes) oi::StoreOfflineItem::write(glwebtools::JsonWriter &)const
// int oi::StoreOfflineItem::write();
// [0x153e230] (20 bytes) oi::StoreOfflineItemArray::GetItemCount(void)const
// int oi::StoreOfflineItemArray::GetItemCount(oi::StoreOfflineItemArray *this);
// [0x153e250] (15 bytes) oi::StoreOfflineItemArray::GetItem(unsigned int)const
// unsigned int oi::StoreOfflineItemArray::GetItem(oi::StoreOfflineItemArray *this, unsigned int a2);
// [0x153e260] (62 bytes) oi::StoreOfflineItemArray::Clear(void)
// uint32_t *oi::StoreOfflineItemArray::Clear(oi::StoreOfflineItemArray *this);
// [0x153e2a0] (29 bytes) oi::StoreOfflineItemArray::operator[](unsigned int)const
// int oi::StoreOfflineItemArray::operator[](oi::StoreOfflineItemArray *this, unsigned int a2);
// [0x153e2c0] (128 bytes) oi::StoreOfflineItemArray::read(std::string const&)
// glwebtools *oi::StoreOfflineItemArray::read(int (***a1)(uint32_t, uint8_t *), int a2);
// [0x153e340] (87 bytes) oi::StoreOfflineItemArray::~StoreOfflineItemArray()
// void oi::StoreOfflineItemArray::~StoreOfflineItemArray(oi::StoreOfflineItemArray *this);
// [0x153e3a0] (56 bytes) oi::StoreOfflineItemArray::~StoreOfflineItemArray()
// void oi::StoreOfflineItemArray::~StoreOfflineItemArray(oi::StoreOfflineItemArray *this);
// [0x153e3e0] (143 bytes) oi::StoreOfflineItemArray::operator[](std::string)const
// int oi::StoreOfflineItemArray::operator[](int a1, int a2);
// [0x153e470] (194 bytes) oi::StoreOfflineItem::~StoreOfflineItem()
// void oi::StoreOfflineItem::~StoreOfflineItem(oi::StoreOfflineItem *this);
// [0x153e540] (56 bytes) oi::StoreOfflineItem::~StoreOfflineItem()
// void oi::StoreOfflineItem::~StoreOfflineItem(oi::StoreOfflineItem *this);
// [0x153e580] (229 bytes) oi::StoreOfflineItem::Clear(void)
// uint32_t *oi::StoreOfflineItem::Clear(oi::StoreOfflineItem *this);
// [0x153e670] (163 bytes) oi::StoreOfflineItem::ToJsonString(std::string &)const
// int oi::StoreOfflineItem::ToJsonString(int a1, int a2);
// [0x153e720] (29 bytes) oi::StoreOfflineItem::GetName(void)const
// int oi::StoreOfflineItem::GetName(oi::StoreOfflineItem *this);
// [0x153e740] (163 bytes) oi::StoreOfflineItemArray::GetItem(std::string)const
// int oi::StoreOfflineItemArray::GetItem(int a1, char **a2);
// [0x153e7f0] (42 bytes) oi::StoreOfflineItem::GetAmount(void)const
// long double oi::StoreOfflineItem::GetAmount(oi::StoreOfflineItem *this);
// [0x153e820] (57 bytes) oi::StoreOfflineItem::GetRegularAmount(void)const
// long double oi::StoreOfflineItem::GetRegularAmount(oi::StoreOfflineItem *this);
// [0x153e860] (27 bytes) oi::StoreOfflineItem::HasAmountPromotion(void)const
// bool oi::StoreOfflineItem::HasAmountPromotion(oi::StoreOfflineItem *this);
// [0x153e880] (128 bytes) oi::StoreOfflineItem::GetAmountReductionPercent(void)const
// long double oi::StoreOfflineItem::GetAmountReductionPercent(oi::StoreOfflineItem *this);
// [0x153e900] (34 bytes) oi::StoreOfflineItem::GetPrices(oi::BillingMethod const*)const
// int oi::StoreOfflineItem::GetPrices(oi::StoreOfflineItem *this, const oi::BillingMethod *a2);
// [0x153e930] (34 bytes) oi::StoreOfflineItem::GetRegularPrices(oi::BillingMethod const*)const
// int oi::StoreOfflineItem::GetRegularPrices(oi::StoreOfflineItem *this, const oi::BillingMethod *a2);
// [0x153e960] (253 bytes) oi::StoreOfflineItem::HasPricePromotion(oi::BillingMethod const*)const
// int oi::StoreOfflineItem::HasPricePromotion(oi::StoreOfflineItem *this, const oi::BillingMethod *a2);
// [0x153ea60] (204 bytes) oi::StoreOfflineItem::GetPriceReductionPercent(oi::BillingMethod const*)const
// long double oi::StoreOfflineItem::GetPriceReductionPercent( oi::StoreOfflineItem *this, const oi::BillingMethod *a2);
// [0x153eb30] (12 bytes) oi::StoreOfflineItem::GetCategoryCount(void)const
// int oi::StoreOfflineItem::GetCategoryCount(oi::StoreOfflineItem *this);
// [0x153eb40] (31 bytes) oi::StoreOfflineItem::GetCategory(unsigned int)const
// int oi::StoreOfflineItem::GetCategory(oi::StoreOfflineItem *this, unsigned int a2);
// [0x153eb60] (37 bytes) oi::StoreOfflineItem::GetBillingMethodCount(void)const
// int oi::StoreOfflineItem::GetBillingMethodCount(oi::StoreOfflineItem *this);
// [0x153eb90] (45 bytes) oi::StoreOfflineItem::GetBillingMethod(unsigned int)const
// int oi::StoreOfflineItem::GetBillingMethod(oi::StoreOfflineItem *this, unsigned int a2);
// [0x153ebc0] (237 bytes) oi::StoreOfflineItemArray::isPromotionSet(void)const
// int oi::StoreOfflineItemArray::isPromotionSet(oi::StoreOfflineItemArray *this);
// [0x153ecb0] (227 bytes) oi::StoreOfflineItem::GetBillingMethod(char const*,char const*)const
// int oi::StoreOfflineItem::GetBillingMethod(oi::StoreOfflineItem *this, char *a2, char *a3);
// [0x153eda0] (827 bytes) oi::StoreOfflineItem::Print(void)const
// unsigned int oi::StoreOfflineItem::Print(oi::StoreOfflineItem *this);
// [0x153f0e0] (56 bytes) oi::StoreOfflineItemArray::Print(void)const
// unsigned int oi::StoreOfflineItemArray::Print(oi::StoreOfflineItemArray *this);
// [0x153f120] (125 bytes) oi::StoreOfflineItem::totalSize(void)
// int oi::StoreOfflineItem::totalSize(oi::StoreOfflineItem *this);
// [0x153f1a0] (48 bytes) oi::StoreOfflineItemArray::StoreOfflineItemArray(void)
// oi::StoreOfflineItemArray *oi::StoreOfflineItemArray::StoreOfflineItemArray(oi::StoreOfflineItemArray *this);
// [0x153f1d0] (110 bytes) oi::StoreOfflineItemArray::totalSize(void)
// int oi::StoreOfflineItemArray::totalSize(oi::StoreOfflineItemArray *this);
// [0x153f240] (3116 bytes) oi::StoreOfflineItem::read(glwebtools::JsonReader const&)
// int oi::StoreOfflineItem::read(oi::StoreOfflineItem *this, const glwebtools::JsonReader *a2);
// [0x153fe70] (1035 bytes) oi::StoreOfflineItemArray::read(glwebtools::JsonReader const&)
// char *oi::StoreOfflineItemArray::read(oi::StoreOfflineItemArray *this, const glwebtools::JsonReader *a2);
// [0x1540510] (1355 bytes) oi::StoreOfflineItem::StoreOfflineItem(oi::StoreOfflineItem const&)
// int oi::StoreOfflineItem::StoreOfflineItem(oi::StoreOfflineItem *this, const oi::StoreOfflineItem *a2);
// [0x1540ea0] (3494 bytes) oi::StoreOfflineItem::operator=(oi::StoreOfflineItem const&)
// oi::StoreOfflineItem *oi::StoreOfflineItem::operator=( oi::StoreOfflineItem *this, const oi::StoreOfflineItem *a2);
// [0x1541ca0] (87 bytes) oi::BillingMethodArray::~BillingMethodArray()
// void oi::BillingMethodArray::~BillingMethodArray(oi::BillingMethodArray *this);
// [0x1541d00] (56 bytes) oi::BillingMethodArray::~BillingMethodArray()
// void oi::BillingMethodArray::~BillingMethodArray(oi::BillingMethodArray *this);
// [0x1541d40] (339 bytes) oi::BillingMethodArray::write(glwebtools::JsonWriter &)const
// int oi::BillingMethodArray::write(oi::BillingMethodArray *this, glwebtools::JsonWriter *a2);
// [0x1541ea0] (143 bytes) oi::BillingMethodArray::read(std::string const&)
// glwebtools *oi::BillingMethodArray::read(int a1, int a2);
// [0x1541f30] (167 bytes) oi::BillingMethod::~BillingMethod()
// void oi::BillingMethod::~BillingMethod(oi::BillingMethod *this);
// [0x1541fe0] (56 bytes) oi::BillingMethod::~BillingMethod()
// void oi::BillingMethod::~BillingMethod(oi::BillingMethod *this);
// [0x1542020] (163 bytes) oi::BillingMethod::ToJsonString(std::string &)const
// int oi::BillingMethod::ToJsonString(int a1, int a2);
// [0x15420d0] (220 bytes) oi::BillingMethod::Clear(void)
// uint32_t *oi::BillingMethod::Clear(oi::BillingMethod *this);
// [0x15421b0] (1817 bytes) oi::BillingMethod::write(glwebtools::JsonWriter &)const
// int oi::BillingMethod::write( oi::BillingMethod *this, glwebtools::JsonWriter *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, char *a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, char *a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59);
// [0x15428d0] (2104 bytes) oi::BillingMethod::read(glwebtools::JsonReader const&)
// int oi::BillingMethod::read( oi::BillingMethod *this, const glwebtools::JsonReader *a2, int a3, int a4, int a5, int a6);
// [0x1543110] (29 bytes) oi::BillingMethod::GetName(void)const
// int oi::BillingMethod::GetName(oi::BillingMethod *this);
// [0x1543130] (29 bytes) oi::BillingMethod::GetType(void)const
// int oi::BillingMethod::GetType(oi::BillingMethod *this);
// [0x1543150] (12 bytes) oi::BillingMethod::GetItemPrices(void)const
// char *oi::BillingMethod::GetItemPrices(oi::BillingMethod *this);
// [0x1543160] (12 bytes) oi::BillingMethod::GetItemRegularPrices(void)const
// char *oi::BillingMethod::GetItemRegularPrices(oi::BillingMethod *this);
// [0x1543170] (1041 bytes) oi::BillingMethod::Print(void)const
// unsigned int oi::BillingMethod::Print(oi::BillingMethod *this);
// [0x1543590] (106 bytes) oi::BillingMethod::totalSize(void)
// int oi::BillingMethod::totalSize(oi::BillingMethod *this);
// [0x1543600] (20 bytes) oi::BillingMethodArray::Size(void)const
// int oi::BillingMethodArray::Size(oi::BillingMethodArray *this);
// [0x1543620] (39 bytes) oi::BillingMethodArray::GetBillingMethod(unsigned int)const
// int oi::BillingMethodArray::GetBillingMethod(oi::BillingMethodArray *this, unsigned int a2);
// [0x1543650] (203 bytes) oi::BillingMethodArray::GetBillingMethod(std::string,std::string const&)const
// int oi::BillingMethodArray::GetBillingMethod(int a1, const char **a2, const char **a3);
// [0x1543720] (62 bytes) oi::BillingMethodArray::Clear(void)
// uint32_t *oi::BillingMethodArray::Clear(oi::BillingMethodArray *this);
// [0x1543760] (42 bytes) oi::BillingMethodArray::operator[](unsigned int)const
// int oi::BillingMethodArray::operator[](oi::BillingMethodArray *this, unsigned int a2);
// [0x1543790] (98 bytes) oi::BillingMethodArray::totalSize(void)
// int oi::BillingMethodArray::totalSize(oi::BillingMethodArray *this);
// [0x1543800] (2864 bytes) oi::BillingMethodArray::read(glwebtools::JsonReader const&)
// int oi::BillingMethodArray::read(oi::BillingMethodArray *this, const glwebtools::JsonReader *a2);
