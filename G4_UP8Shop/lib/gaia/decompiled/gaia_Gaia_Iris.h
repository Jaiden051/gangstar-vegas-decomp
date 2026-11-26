#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_Gaia_Iris.h
// Library: gaia | Module: gaia_Gaia_Iris
// Binary Address Span: 0x1447430 .. 0x1491520 (23 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1447430] (196 bytes) gaia::Gaia_Iris::CancelRequest(gaia::BaseServiceManager::CancelRequestType)
// int gaia::Gaia_Iris::CancelRequest(glwebtools::Mutex *a1, int a2);
// [0x144ea90] (358 bytes) gaia::Gaia_Iris::GetIrisStatus(void)
// int gaia::Gaia_Iris::GetIrisStatus(gaia::Gaia_Iris *this);
// [0x144ec00] (360 bytes) gaia::Gaia_Iris::RedeemCoupon(std::string const&,void **,int *,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Iris::RedeemCoupon(gaia::Gaia *a1, uint32_t *a2, void **a3, int *a4, char a5, int a6, int a7);
// [0x144ed70] (660 bytes) gaia::Gaia_Iris::RedeemCoupon(gaia::GaiaRequest &)
// int gaia::Gaia_Iris::RedeemCoupon(gaia::Gaia_Iris *this, gaia::GaiaRequest *a2);
// [0x144f010] (345 bytes) gaia::Gaia_Iris::GetAssetURL(std::string const&,std::string &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Iris::GetAssetURL(gaia::Gaia *a1, uint32_t *a2, int a3, char a4, int a5, int a6);
// [0x144f170] (705 bytes) gaia::Gaia_Iris::GetAssetURL(gaia::GaiaRequest &)
// int gaia::Gaia_Iris::GetAssetURL(gaia::Gaia_Iris *this, gaia::GaiaRequest *a2);
// [0x144f440] (538 bytes) gaia::Gaia_Iris::GetAssetSize(std::string const&,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Iris::GetAssetSize(gaia::Gaia_Iris *a1, uint32_t *a2, int a3, char a4, int a5, int a6);
// [0x144f660] (554 bytes) gaia::Gaia_Iris::GetAssetHash(std::string const&,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Iris::GetAssetHash(gaia::Gaia_Iris *a1, uint32_t *a2, int a3, char a4, int a5, int a6);
// [0x144f890] (644 bytes) gaia::Gaia_Iris::GetAsset(std::string const&,void **,int *,int,int,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Iris::GetAsset( gaia::Gaia_Iris *a1, uint32_t *a2, void **a3, int *a4, int a5, int a6, char a7, int a8, int a9);
// [0x144fb20] (1696 bytes) gaia::Gaia_Iris::GetAssetCheckEtag(gaia::GaiaRequest &)
// int gaia::Gaia_Iris::GetAssetCheckEtag(gaia::Gaia_Iris *this, gaia::GaiaRequest *a2);
// [0x14501c0] (756 bytes) gaia::Gaia_Iris::GetAssetCheckEtag(std::string const&,std::string const&,void **,int *,int,int,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Iris::GetAssetCheckEtag( gaia::Gaia_Iris *a1, uint32_t *a2, uint32_t *a3, void **a4, int *a5, int a6, int a7, char a8, int a9, int a10);
// [0x14504c0] (729 bytes) gaia::Gaia_Iris::GetAssetETag(gaia::GaiaRequest &)
// int gaia::Gaia_Iris::GetAssetETag(gaia::Gaia_Iris *this, gaia::GaiaRequest *a2);
// [0x14507a0] (371 bytes) gaia::Gaia_Iris::GetAssetETag(std::string const&,std::string &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Iris::GetAssetETag(gaia::Gaia *a1, uint32_t *a2, int a3, char a4, int a5, int a6);
// [0x1450920] (1390 bytes) gaia::Gaia_Iris::GetAsset(gaia::GaiaRequest &)
// int gaia::Gaia_Iris::GetAsset(gaia::Gaia_Iris *this, gaia::GaiaRequest *a2);
// [0x1450e90] (844 bytes) gaia::Gaia_Iris::GetAssetSize(gaia::GaiaRequest &)
// int gaia::Gaia_Iris::GetAssetSize(gaia::Gaia_Iris *this, gaia::GaiaRequest *a2);
// [0x14511e0] (860 bytes) gaia::Gaia_Iris::GetAssetHash(gaia::GaiaRequest &)
// int gaia::Gaia_Iris::GetAssetHash(gaia::Gaia_Iris *this, gaia::GaiaRequest *a2);
// [0x147a160] (151 bytes) gaia::Gaia_Iris::StartAndAuthorizeIris(gaia::GaiaRequest &)
// int gaia::Gaia_Iris::StartAndAuthorizeIris(gaia::Gaia_Iris *this, gaia::GaiaRequest *a2);
// [0x147a200] (721 bytes) gaia::Gaia_Iris::GetAccessToken(gaia::GaiaRequest &,std::string,std::string &)
// int gaia::Gaia_Iris::GetAccessToken(gaia::Gaia *a1, gaia::GaiaRequest *a2, uint32_t *a3, int a4);
// [0x147a4e0] (1385 bytes) gaia::Gaia_Iris::CreateCoupons(gaia::GaiaRequest &)
// int gaia::Gaia_Iris::CreateCoupons(gaia::Gaia_Iris *this, gaia::GaiaRequest *a2);
// [0x147aa50] (1441 bytes) gaia::Gaia_Iris::UploadAsset(gaia::GaiaRequest &)
// int gaia::Gaia_Iris::UploadAsset(gaia::Gaia_Iris *this, gaia::GaiaRequest *a2);
// [0x1491140] (112 bytes) gaia::Gaia_Iris::StartAndAuthorizeIris(gaia::BaseServiceManager::Credentials,std::string const&)
// int gaia::Gaia_Iris::StartAndAuthorizeIris(gaia::Gaia *a1, int a2, uint32_t *a3);
// [0x14911b0] (875 bytes) gaia::Gaia_Iris::CreateCoupons(gaia::BaseServiceManager::Credentials,std::string const&,std::string &,unsigned int,unsigned int,unsigned int,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Iris::CreateCoupons( gaia::Gaia *a1, int a2, uint32_t *a3, int a4, unsigned int a5, unsigned int a6, unsigned int a7, char a8, int a9, int a10);
// [0x1491520] (992 bytes) gaia::Gaia_Iris::UploadAsset(gaia::BaseServiceManager::Credentials,std::string const&,char const*,unsigned int,bool,bool,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Iris::UploadAsset( gaia::Gaia *a1, int a2, uint32_t *a3, void *a4, size_t a5, char a6, char a7, char a8, int a9, int a10);
