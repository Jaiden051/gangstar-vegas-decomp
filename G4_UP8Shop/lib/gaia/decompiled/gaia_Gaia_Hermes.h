#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_Gaia_Hermes.h
// Library: gaia | Module: gaia_Gaia_Hermes
// Binary Address Span: 0x1442da0 .. 0x1495890 (32 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1442da0] (12 bytes) gaia::Gaia_Hermes::CheckActiveNotification(void)
// int gaia::Gaia_Hermes::CheckActiveNotification();
// [0x1445850] (196 bytes) gaia::Gaia_Hermes::CancelRequest(gaia::BaseServiceManager::CancelRequestType)
// int gaia::Gaia_Hermes::CancelRequest(glwebtools::Mutex *a1, int a2);
// [0x1451690] (358 bytes) gaia::Gaia_Hermes::GetHermesStatus(void)
// int gaia::Gaia_Hermes::GetHermesStatus(gaia::Gaia_Hermes *this);
// [0x147b000] (167 bytes) gaia::Gaia_Hermes::StartAndAuthorizeHermes(gaia::GaiaRequest &)
// int gaia::Gaia_Hermes::StartAndAuthorizeHermes(gaia::Gaia_Hermes *this, gaia::GaiaRequest *a2);
// [0x147b0b0] (721 bytes) gaia::Gaia_Hermes::GetAccessToken(gaia::GaiaRequest &,std::string,std::string &)
// int gaia::Gaia_Hermes::GetAccessToken(gaia::Gaia *a1, gaia::GaiaRequest *a2, uint32_t *a3, int a4);
// [0x147b390] (852 bytes) gaia::Gaia_Hermes::ListRegisteredDevices(gaia::GaiaRequest &)
// int gaia::Gaia_Hermes::ListRegisteredDevices(gaia::Gaia_Hermes *this, gaia::GaiaRequest *a2);
// [0x147b6f0] (653 bytes) gaia::Gaia_Hermes::ShowSubscriptions(gaia::GaiaRequest &)
// int gaia::Gaia_Hermes::ShowSubscriptions(gaia::Gaia_Hermes *this, gaia::GaiaRequest *a2);
// [0x147b980] (1121 bytes) gaia::Gaia_Hermes::UpdateListSubscription(gaia::GaiaRequest &)
// int gaia::Gaia_Hermes::UpdateListSubscription(gaia::Gaia_Hermes *this, gaia::GaiaRequest *a2);
// [0x147bdf0] (245 bytes) gaia::Gaia_Hermes::UnSubscribeFromList(gaia::GaiaRequest &)
// int gaia::Gaia_Hermes::UnSubscribeFromList(gaia::Gaia_Hermes *this, gaia::GaiaRequest *a2);
// [0x147bef0] (245 bytes) gaia::Gaia_Hermes::SubscribeToList(gaia::GaiaRequest &)
// int gaia::Gaia_Hermes::SubscribeToList(gaia::Gaia_Hermes *this, gaia::GaiaRequest *a2);
// [0x147bff0] (947 bytes) gaia::Gaia_Hermes::DeleteAllMessages(gaia::GaiaRequest &)
// int gaia::Gaia_Hermes::DeleteAllMessages(gaia::Gaia_Hermes *this, gaia::GaiaRequest *a2);
// [0x147c3b0] (1007 bytes) gaia::Gaia_Hermes::DeleteMessage(gaia::GaiaRequest &)
// int gaia::Gaia_Hermes::DeleteMessage(gaia::Gaia_Hermes *this, gaia::GaiaRequest *a2);
// [0x147c7a0] (1147 bytes) gaia::Gaia_Hermes::RetrieveMessage(gaia::GaiaRequest &)
// int gaia::Gaia_Hermes::RetrieveMessage(gaia::Gaia_Hermes *this, gaia::GaiaRequest *a2);
// [0x147cc20] (1151 bytes) gaia::Gaia_Hermes::RetrieveMessages(gaia::GaiaRequest &)
// int gaia::Gaia_Hermes::RetrieveMessages(gaia::Gaia_Hermes *this, gaia::GaiaRequest *a2);
// [0x147d0a0] (2205 bytes) gaia::Gaia_Hermes::SendMessageToMultipleUsers(gaia::GaiaRequest &)
// int gaia::Gaia_Hermes::SendMessageToMultipleUsers( long double a1, gaia::Gaia_Hermes *this, gaia::GaiaRequest *a3);
// [0x147d940] (2614 bytes) gaia::Gaia_Hermes::SendMessageToUser(gaia::GaiaRequest &)
// int gaia::Gaia_Hermes::SendMessageToUser(gaia::Gaia_Hermes *this, gaia::GaiaRequest *a2);
// [0x147e380] (712 bytes) gaia::Gaia_Hermes::UnregisterDevices(gaia::GaiaRequest &)
// int gaia::Gaia_Hermes::UnregisterDevices(gaia::Gaia_Hermes *this, gaia::GaiaRequest *a2);
// [0x147e650] (1036 bytes) gaia::Gaia_Hermes::RegisterEndpoint(gaia::GaiaRequest &)
// int gaia::Gaia_Hermes::RegisterEndpoint(gaia::Gaia_Hermes *this, gaia::GaiaRequest *a2);
// [0x14933c0] (112 bytes) gaia::Gaia_Hermes::StartAndAuthorizeHermes(gaia::BaseServiceManager::Credentials,std::string const&)
// int gaia::Gaia_Hermes::StartAndAuthorizeHermes(gaia::Gaia *a1, int a2, uint32_t *a3);
// [0x1493430] (734 bytes) gaia::Gaia_Hermes::ListRegisteredDevices(gaia::BaseServiceManager::Credentials,gaia::Hermes::TransportTypes,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hermes::ListRegisteredDevices(gaia::Gaia *a1, int a2, int a3, int a4, char a5, int a6, int a7);
// [0x1493710] (631 bytes) gaia::Gaia_Hermes::ShowSubscriptions(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hermes::ShowSubscriptions(gaia::Gaia *a1, int a2, int a3, char a4, int a5, int a6);
// [0x1493990] (728 bytes) gaia::Gaia_Hermes::UpdateListSubscription(gaia::BaseServiceManager::Credentials,std::string const&,bool,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// char gaia::Gaia_Hermes::UpdateListSubscription( gaia::Gaia *a1, int a2, uint32_t *a3, char a4, char a5, int a6, int a7);
// [0x1493c70] (112 bytes) gaia::Gaia_Hermes::UnSubscribeFromList(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// char gaia::Gaia_Hermes::UnSubscribeFromList(gaia::Gaia *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x1493ce0] (112 bytes) gaia::Gaia_Hermes::SubscribeToList(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// char gaia::Gaia_Hermes::SubscribeToList(gaia::Gaia *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x1493d50] (731 bytes) gaia::Gaia_Hermes::DeleteAllMessages(gaia::BaseServiceManager::Credentials,gaia::Hermes::TransportTypes,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hermes::DeleteAllMessages(gaia::Gaia *a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7);
// [0x1494030] (714 bytes) gaia::Gaia_Hermes::DeleteMessage(gaia::BaseServiceManager::Credentials,gaia::Hermes::TransportTypes,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// char gaia::Gaia_Hermes::DeleteMessage(gaia::Gaia *a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7);
// [0x1494300] (918 bytes) gaia::Gaia_Hermes::RetrieveMessage(gaia::BaseServiceManager::Credentials,gaia::Hermes::TransportTypes,std::string const&,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hermes::RetrieveMessage( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, int a5, char a6, char a7, int a8, int a9);
// [0x14946a0] (830 bytes) gaia::Gaia_Hermes::RetrieveMessages(gaia::BaseServiceManager::Credentials,gaia::Hermes::TransportTypes,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hermes::RetrieveMessages( gaia::Gaia *a1, int a2, int a3, int a4, char a5, char a6, int a7, int a8);
// [0x14949e0] (1904 bytes) gaia::Gaia_Hermes::SendMessageToMultipleUsers(gaia::BaseServiceManager::Credentials,Json::Value const&,gaia::HermesBaseMessage *,void *,int,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hermes::SendMessageToMultipleUsers( long double a1, gaia::Gaia *a2, int a3, Json::Value *a4, int a5, void *a6, int a7, char a8, int a9, int a10);
// [0x1495150] (1257 bytes) gaia::Gaia_Hermes::SendMessageToUser(gaia::BaseServiceManager::Credentials,gaia::Hermes::TransportTypes,std::string const&,gaia::BaseServiceManager::Credentials,std::string const&,int,gaia::HermesBaseMessage *,void *,int,bool,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hermes::SendMessageToUser( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, int a5, uint32_t *a6, int a7, int a8, void *a9, int a10, char a11, char a12, int a13, int a14);
// [0x1495640] (583 bytes) gaia::Gaia_Hermes::UnregisterDevices(gaia::BaseServiceManager::Credentials,gaia::Hermes::TransportTypes,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hermes::UnregisterDevices(gaia::Gaia *a1, int a2, int a3, char a4, int a5, int a6);
// [0x1495890] (809 bytes) gaia::Gaia_Hermes::RegisterEndpoint(gaia::BaseServiceManager::Credentials,std::string const&,gaia::Hermes::TransportTypes,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hermes::RegisterEndpoint(gaia::Gaia *a1, int a2, uint32_t *a3, int a4, char a5, int a6, int a7);
