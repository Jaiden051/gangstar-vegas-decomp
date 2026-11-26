#pragma once
// ============================================================================
// G4_UP8Shop/lib/oi/decompiled/oi_internal.h
// Library: oi | Module: oi_internal
// Binary Address Span: 0x151e340 .. 0x1534e60 (28 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x151e340] (900 bytes) std::vector<std::pair<std::string,glwebtools::JSONValue>,std::allocator<std::pair<std::string,glwebtools::JSONValue>>>::operator=(std::vector<std::pair<std::string,glwebtools::JSONValue>,std::allocator<std::pair<std::string,glwebtools::JSONValue>>> const&)
// std::vector<std::pair<std::string, glwebtools::JSONValue>> *std::vector<std::pair<std::string,glwebtools::JSONValue>>::operator=( std::vector<std::pair<std::string, glwebtools::JSONValue>> *this, const std::vector<std::pair<std::string, glwebtools::JSONValue>> *a2);
// [0x151e6d0] (1133 bytes) std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,iap::BillingMethodAndroid>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_erase( int a1, uint32_t *a2);
// [0x151fd40] (66 bytes) sub_151FD40
// int sub_151FD40();
// [0x151fd90] (359 bytes) sub_151FD90
// glwebtools *sub_151FD90(glwebtools::Json::Value *a1, int a2);
// [0x1526260] (51 bytes) InAppBilling_GetItemListCB
// int InAppBilling_GetItemListCB(char *a1, int a2);
// [0x1527130] (323 bytes) int glwebtools::operator>><glwebtools::OptionalArgument<int,iap::AmountValidator,glwebtools::AttributeFormatter>>(glwebtools::JsonReader const&,glwebtools::NameValuePair<glwebtools::OptionalArgument<int,iap::AmountValidator,glwebtools::AttributeFormatter>>)
// glwebtools *glwebtools::operator>><glwebtools::OptionalArgument<int,iap::AmountValidator,glwebtools::AttributeFormatter>>( glwebtools::Json::Value *a1, int a2);
// [0x1527480] (9135 bytes) std::_Rb_tree<std::string,std::pair<std::string const,iap::iABAndroidItemV1>,std::_Select1st<std::pair<std::string const,iap::iABAndroidItemV1>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::iABAndroidItemV1>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,iap::iABAndroidItemV1>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,iap::iABAndroidItemV1>,std::_Select1st<std::pair<std::string const,iap::iABAndroidItemV1>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::iABAndroidItemV1>>>::_M_erase( int a1, uint32_t *a2);
// [0x1529830] (1968 bytes) std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,iap::BillingMethodAndroid>> const*,std::_Rb_tree_node<std::pair<std::string const,iap::BillingMethodAndroid>>*)
// uint32_t *std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_copy( int a1, uint32_t *a2, int a3);
// [0x152a220] (271 bytes) std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,iap::BillingMethodAndroid> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_insert_( int *a1, int a2, int a3, int a4, const void **a5);
// [0x152a330] (527 bytes) std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_insert_unique(std::pair<std::string const,iap::BillingMethodAndroid> const&)
// int std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_insert_unique( int a1, uint32_t *a2, const void **a3);
// [0x152a540] (1129 bytes) std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,iap::BillingMethodAndroid>>,std::pair<std::string const,iap::BillingMethodAndroid> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,iap::BillingMethodAndroid>,std::_Select1st<std::pair<std::string const,iap::BillingMethodAndroid>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, const void **a4);
// [0x152a9b0] (556 bytes) std::map<std::string,iap::BillingMethodAndroid,std::less<std::string>,std::allocator<std::pair<std::string const,iap::BillingMethodAndroid>>>::operator[](std::string const&)
// int std::map<std::string,iap::BillingMethodAndroid>::operator[](uint32_t *a1, void **a2);
// [0x152abe0] (746 bytes) IAB_STORE_ITEM::getProperty(char const*)
// IAB_STORE_ITEM *IAB_STORE_ITEM::getProperty(IAB_STORE_ITEM *this, const char *a2, char *a3);
// [0x152aed0] (271 bytes) std::_Rb_tree<std::string,std::pair<std::string const,iap::iABAndroidItemV1>,std::_Select1st<std::pair<std::string const,iap::iABAndroidItemV1>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::iABAndroidItemV1>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,iap::iABAndroidItemV1> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,iap::iABAndroidItemV1>,std::_Select1st<std::pair<std::string const,iap::iABAndroidItemV1>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::iABAndroidItemV1>>>::_M_insert_( int *a1, int a2, int a3, int a4, const void **a5);
// [0x152afe0] (527 bytes) std::_Rb_tree<std::string,std::pair<std::string const,iap::iABAndroidItemV1>,std::_Select1st<std::pair<std::string const,iap::iABAndroidItemV1>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::iABAndroidItemV1>>>::_M_insert_unique(std::pair<std::string const,iap::iABAndroidItemV1> const&)
// int std::_Rb_tree<std::string,std::pair<std::string const,iap::iABAndroidItemV1>,std::_Select1st<std::pair<std::string const,iap::iABAndroidItemV1>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::iABAndroidItemV1>>>::_M_insert_unique( int a1, uint32_t *a2, const void **a3);
// [0x152b1f0] (1129 bytes) std::_Rb_tree<std::string,std::pair<std::string const,iap::iABAndroidItemV1>,std::_Select1st<std::pair<std::string const,iap::iABAndroidItemV1>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::iABAndroidItemV1>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,iap::iABAndroidItemV1>>,std::pair<std::string const,iap::iABAndroidItemV1> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,iap::iABAndroidItemV1>,std::_Select1st<std::pair<std::string const,iap::iABAndroidItemV1>>,std::less<std::string>,std::allocator<std::pair<std::string const,iap::iABAndroidItemV1>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, const void **a4);
// [0x152b660] (914 bytes) std::map<std::string,iap::iABAndroidItemV1,std::less<std::string>,std::allocator<std::pair<std::string const,iap::iABAndroidItemV1>>>::operator[](std::string const&)
// int std::map<std::string,iap::iABAndroidItemV1>::operator[](uint32_t *a1, void **a2);
// [0x152ba00] (66 bytes) sub_152BA00
// int sub_152BA00();
// [0x152c7b0] (3439 bytes) sub_152C7B0
// void sub_152C7B0(int a1, glwebtools::JsonWriter *a2, int a3);
// [0x152d580] (66 bytes) sub_152D580
// int sub_152D580();
// [0x152ec40] (283 bytes) InAppBilling_RestoreTransactionCB
// int InAppBilling_RestoreTransactionCB(char *a1);
// [0x152ed60] (341 bytes) InAppBilling_BuyItemCB
// int InAppBilling_BuyItemCB(char *a1, int a2, char *a3, char *a4);
// [0x152f580] (597 bytes) sub_152F580
// int sub_152F580(int a1, uint32_t *a2, const void **a3);
// [0x1530fc0] (66 bytes) sub_1530FC0
// int sub_1530FC0();
// [0x1532bc0] (2064 bytes) std::_Rb_tree<iap::Rule,iap::Rule,std::_Identity<iap::Rule>,std::less<iap::Rule>,glwebtools::SAllocator<iap::Rule,(glwebtools::MemHint)4>>::_M_copy(std::_Rb_tree_node<iap::Rule> const*,std::_Rb_tree_node<iap::Rule>*)
// uint32_t *std::_Rb_tree<iap::Rule,iap::Rule,std::_Identity<iap::Rule>,std::less<iap::Rule>,glwebtools::SAllocator<iap::Rule,(glwebtools::MemHint)4>>::_M_copy(;
// [0x15333d0] (66 bytes) sub_15333D0
// int sub_15333D0();
// [0x1534a90] (974 bytes) std::vector<iap::Rule::Action,glwebtools::SAllocator<iap::Rule::Action,(glwebtools::MemHint)4>>::_M_insert_aux(__gnu_cxx::__normal_iterator<iap::Rule::Action*,std::vector<iap::Rule::Action,glwebtools::SAllocator<iap::Rule::Action,(glwebtools::MemHint)4>>>,iap::Rule::Action const&)
// int std::vector<iap::Rule::Action,glwebtools::SAllocator<iap::Rule::Action,(glwebtools::MemHint)4>>::_M_insert_aux(;
// [0x1534e60] (66 bytes) sub_1534E60
// int sub_1534E60();
