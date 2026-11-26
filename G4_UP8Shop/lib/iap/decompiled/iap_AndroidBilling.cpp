#include "Core/Utils/DecompTypes.h"
#include "iap_AndroidBilling.h"

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::IsInitialized  (binary VA: 0x15157b0)
// Original: iap::AndroidBilling::IsInitialized
// ----------------------------------------------------------------------------
int iap::AndroidBilling::IsInitialized(iap::AndroidBilling::Self *self)
{
  return *((uint8_t *)self + 76);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::HasEvent  (binary VA: 0x15157c0)
// Original: iap::AndroidBilling::HasEvent
// ----------------------------------------------------------------------------
int iap::AndroidBilling::HasEvent(iap::AndroidBilling::Self *self)
{
  char v1;
  int v2;

  v1 = G4_VCALL<int>(self, 16);
  v2 = 0;
  if ( v1 != 0 )
    LOBYTE(v2) = *((uint32_t *)self + 16) != (uint32_t)(uintptr_t)(self) + 64;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::PushEvent  (binary VA: 0x15157f0)
// Original: iap::AndroidBilling::PushEvent
// ----------------------------------------------------------------------------
int iap::AndroidBilling::PushEvent()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestConfirmProductV1::IsRunning  (binary VA: 0x1515800)
// Original: iap::AndroidBilling::RequestConfirmProductV1::IsRunning
// ----------------------------------------------------------------------------
bool iap::AndroidBilling::RequestConfirmProductV1::IsRunning(iap::AndroidBilling::RequestConfirmProductV1::Self *self)
{
  return *((uint32_t *)self + 22) == 1;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestConfirmProductV1::IsResultReady  (binary VA: 0x1515810)
// Original: iap::AndroidBilling::RequestConfirmProductV1::IsResultReady
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestConfirmProductV1::IsResultReady(iap::AndroidBilling::RequestConfirmProductV1::Self *self)
{
  unsigned int v1;
  int v2;

  v1 = (unsigned int)(uintptr_t)(self);
  v2 = *((uint32_t *)self + 22);
  LOBYTE(v1) = v2 == -1;
  LOBYTE(v2) = v2 == 2;
  return v2 | v1;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestConfirmProductV1::IsCancelled  (binary VA: 0x1515830)
// Original: iap::AndroidBilling::RequestConfirmProductV1::IsCancelled
// ----------------------------------------------------------------------------
bool iap::AndroidBilling::RequestConfirmProductV1::IsCancelled(iap::AndroidBilling::RequestConfirmProductV1::Self *self)
{
  return *((uint32_t *)self + 22) == 3;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestConfirmProductV1::Cancel  (binary VA: 0x1515840)
// Original: iap::AndroidBilling::RequestConfirmProductV1::Cancel
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestConfirmProductV1::Cancel(iap::AndroidBilling::RequestConfirmProductV1::Self *self)
{
  *((uint32_t *)self + 22) = 3;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestConfirmProductV1::GetType  (binary VA: 0x1515850)
// Original: iap::AndroidBilling::RequestConfirmProductV1::GetType
// ----------------------------------------------------------------------------
const char * iap::AndroidBilling::RequestConfirmProductV1::GetType()
{
  return "confirm_product_v1";
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestRestorePurchase::IsRunning  (binary VA: 0x1515870)
// Original: iap::AndroidBilling::RequestRestorePurchase::IsRunning
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestRestorePurchase::IsRunning(iap::AndroidBilling::RequestRestorePurchase::Self *self)
{
  return *((uint8_t *)self + 92) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestRestorePurchase::IsResultReady  (binary VA: 0x1515880)
// Original: iap::AndroidBilling::RequestRestorePurchase::IsResultReady
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestRestorePurchase::IsResultReady(iap::AndroidBilling::RequestRestorePurchase::Self *self)
{
  return *((uint8_t *)self + 92);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestRestorePurchase::IsCancelled  (binary VA: 0x1515890)
// Original: iap::AndroidBilling::RequestRestorePurchase::IsCancelled
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestRestorePurchase::IsCancelled()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestRestorePurchase::Cancel  (binary VA: 0x15158a0)
// Original: iap::AndroidBilling::RequestRestorePurchase::Cancel
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestRestorePurchase::Cancel()
{
  return -2147483645;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestRestorePurchase::GetType  (binary VA: 0x15158b0)
// Original: iap::AndroidBilling::RequestRestorePurchase::GetType
// ----------------------------------------------------------------------------
const char * iap::AndroidBilling::RequestRestorePurchase::GetType()
{
  return "restore_purchase";
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestGetTransaction::IsRunning  (binary VA: 0x15158d0)
// Original: iap::AndroidBilling::RequestGetTransaction::IsRunning
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestGetTransaction::IsRunning()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestGetTransaction::IsResultReady  (binary VA: 0x15158e0)
// Original: iap::AndroidBilling::RequestGetTransaction::IsResultReady
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestGetTransaction::IsResultReady()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestGetTransaction::IsCancelled  (binary VA: 0x15158f0)
// Original: iap::AndroidBilling::RequestGetTransaction::IsCancelled
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestGetTransaction::IsCancelled()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestGetTransaction::Update  (binary VA: 0x1515900)
// Original: iap::AndroidBilling::RequestGetTransaction::Update
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestGetTransaction::Update()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestGetTransaction::Cancel  (binary VA: 0x1515910)
// Original: iap::AndroidBilling::RequestGetTransaction::Cancel
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestGetTransaction::Cancel()
{
  return -2147483645;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestGetTransaction::GetType  (binary VA: 0x1515920)
// Original: iap::AndroidBilling::RequestGetTransaction::GetType
// ----------------------------------------------------------------------------
const char * iap::AndroidBilling::RequestGetTransaction::GetType()
{
  return "get_transaction";
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestFinishTransaction::IsRunning  (binary VA: 0x1515940)
// Original: iap::AndroidBilling::RequestFinishTransaction::IsRunning
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestFinishTransaction::IsRunning(iap::AndroidBilling::RequestFinishTransaction::Self *self)
{
  return *((uint8_t *)self + 88) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestFinishTransaction::IsResultReady  (binary VA: 0x1515950)
// Original: iap::AndroidBilling::RequestFinishTransaction::IsResultReady
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestFinishTransaction::IsResultReady(iap::AndroidBilling::RequestFinishTransaction::Self *self)
{
  return *((uint8_t *)self + 88);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestFinishTransaction::IsCancelled  (binary VA: 0x1515960)
// Original: iap::AndroidBilling::RequestFinishTransaction::IsCancelled
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestFinishTransaction::IsCancelled()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestFinishTransaction::Cancel  (binary VA: 0x1515970)
// Original: iap::AndroidBilling::RequestFinishTransaction::Cancel
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestFinishTransaction::Cancel()
{
  return -2147483645;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestFinishTransaction::GetType  (binary VA: 0x1515980)
// Original: iap::AndroidBilling::RequestFinishTransaction::GetType
// ----------------------------------------------------------------------------
const char * iap::AndroidBilling::RequestFinishTransaction::GetType()
{
  return "finish_transaction";
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestBuyProduct::IsRunning  (binary VA: 0x15159a0)
// Original: iap::AndroidBilling::RequestBuyProduct::IsRunning
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestBuyProduct::IsRunning(iap::AndroidBilling::RequestBuyProduct::Self *self)
{
  return *((uint8_t *)self + 88) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestBuyProduct::IsResultReady  (binary VA: 0x15159b0)
// Original: iap::AndroidBilling::RequestBuyProduct::IsResultReady
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestBuyProduct::IsResultReady(iap::AndroidBilling::RequestBuyProduct::Self *self)
{
  return *((uint8_t *)self + 88);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestBuyProduct::IsCancelled  (binary VA: 0x15159c0)
// Original: iap::AndroidBilling::RequestBuyProduct::IsCancelled
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestBuyProduct::IsCancelled()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestBuyProduct::Cancel  (binary VA: 0x15159d0)
// Original: iap::AndroidBilling::RequestBuyProduct::Cancel
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestBuyProduct::Cancel()
{
  return -2147483645;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestBuyProduct::GetType  (binary VA: 0x15159e0)
// Original: iap::AndroidBilling::RequestBuyProduct::GetType
// ----------------------------------------------------------------------------
const char * iap::AndroidBilling::RequestBuyProduct::GetType()
{
  return "buy_product";
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestReprocessTransaction::IsRunning  (binary VA: 0x1515a00)
// Original: iap::AndroidBilling::RequestReprocessTransaction::IsRunning
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestReprocessTransaction::IsRunning(iap::AndroidBilling::RequestReprocessTransaction::Self *self)
{
  return *((uint8_t *)self + 88) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestReprocessTransaction::IsResultReady  (binary VA: 0x1515a10)
// Original: iap::AndroidBilling::RequestReprocessTransaction::IsResultReady
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestReprocessTransaction::IsResultReady(iap::AndroidBilling::RequestReprocessTransaction::Self *self)
{
  return *((uint8_t *)self + 88);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestReprocessTransaction::IsCancelled  (binary VA: 0x1515a20)
// Original: iap::AndroidBilling::RequestReprocessTransaction::IsCancelled
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestReprocessTransaction::IsCancelled()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestReprocessTransaction::Cancel  (binary VA: 0x1515a30)
// Original: iap::AndroidBilling::RequestReprocessTransaction::Cancel
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestReprocessTransaction::Cancel()
{
  return -2147483645;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestReprocessTransaction::GetType  (binary VA: 0x1515a40)
// Original: iap::AndroidBilling::RequestReprocessTransaction::GetType
// ----------------------------------------------------------------------------
const char * iap::AndroidBilling::RequestReprocessTransaction::GetType()
{
  return "reprocess_transaction";
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestLimitsValidation::IsRunning  (binary VA: 0x1515a60)
// Original: iap::AndroidBilling::RequestLimitsValidation::IsRunning
// ----------------------------------------------------------------------------
bool iap::AndroidBilling::RequestLimitsValidation::IsRunning(iap::AndroidBilling::RequestLimitsValidation::Self *self)
{
  return *((uint32_t *)self + 23) == 1;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestLimitsValidation::IsResultReady  (binary VA: 0x1515a70)
// Original: iap::AndroidBilling::RequestLimitsValidation::IsResultReady
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestLimitsValidation::IsResultReady(iap::AndroidBilling::RequestLimitsValidation::Self *self)
{
  unsigned int v1;
  int v2;

  v1 = (unsigned int)(uintptr_t)(self);
  v2 = *((uint32_t *)self + 23);
  LOBYTE(v1) = v2 == -1;
  LOBYTE(v2) = v2 == 2;
  return v2 | v1;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestLimitsValidation::IsCancelled  (binary VA: 0x1515a90)
// Original: iap::AndroidBilling::RequestLimitsValidation::IsCancelled
// ----------------------------------------------------------------------------
bool iap::AndroidBilling::RequestLimitsValidation::IsCancelled(iap::AndroidBilling::RequestLimitsValidation::Self *self)
{
  return *((uint32_t *)self + 23) == 3;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestLimitsValidation::Cancel  (binary VA: 0x1515aa0)
// Original: iap::AndroidBilling::RequestLimitsValidation::Cancel
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestLimitsValidation::Cancel()
{
  return -2147483645;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestLimitsValidation::GetType  (binary VA: 0x1515ab0)
// Original: iap::AndroidBilling::RequestLimitsValidation::GetType
// ----------------------------------------------------------------------------
const char * iap::AndroidBilling::RequestLimitsValidation::GetType()
{
  return "check_plimit";
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::PopEvent  (binary VA: 0x1515b20)
// Original: iap::AndroidBilling::PopEvent
// ----------------------------------------------------------------------------
int iap::AndroidBilling::PopEvent(iap::AndroidBilling::Self *self, iap::EventData::Self **a2)
{
  char v2;
  int v3;
  int v4;
  int v5;

  v2 = G4_VCALL<int>(self, 16);
  v3 = -2147483645;
  if ( v2 != 0 )
  {
    v4 = *((uint32_t *)self + 16);
    if ( (iap::AndroidBilling::Self *)v4 != (iap::AndroidBilling::Self *)((char *)self + 64) )
    {
      iap::Event::opAssign(a2, (const iap::Event::Self *)(v4 + 8));
      v5 = *((uint32_t *)self + 16);
      sub_1901940(v5);
      iap::Event::Destroy((iap::EventData::Self **)(v5 + 8));
      sub_4EBEE0(v5);
      return 0;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestRestorePurchase::Update  (binary VA: 0x1515b90)
// Original: iap::AndroidBilling::RequestRestorePurchase::Update
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestRestorePurchase::Update(iap::AndroidBilling::RequestRestorePurchase::Self *self)
{
  iap::TransactionManager::Self *Instance;
  glwebtools::Self *v2;

  if ( *((uint8_t *)self + 92) == 0 )
  {
    if ( glwebtools::IsOperationSuccess(nullptr) )
    {
      Instance = (iap::TransactionManager::Self *)iap::TransactionManager::GetInstance(v2);
      iap::TransactionManager::RestoreTransactions(Instance);
    }
    *((uint32_t *)self + 5) = 0;
    *((uint8_t *)self + 92) = 1;
  }
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RespondToRequest  (binary VA: 0x1515c00)
// Original: iap::AndroidBilling::RespondToRequest
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RespondToRequest(int a1, iap::AndroidBilling::Self *self, const char *a3)
{
  int v3;

  v3 = 1;
  if ( strcmp(a3, "confirm_product_v1") != 0
    && strcmp(a3, "restore_purchase") != 0
    && strcmp(a3, "get_transaction") != 0
    && strcmp(a3, "finish_transaction") != 0
    && strcmp(a3, "reprocess_transaction") != 0
    && strcmp(a3, "buy_product") != 0 )
  {
    LOBYTE(a1) = strcmp(a3, "check_plimit") == 0;
    return a1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestReprocessTransaction::Update  (binary VA: 0x1515cd0)
// Original: iap::AndroidBilling::RequestReprocessTransaction::Update
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestReprocessTransaction::Update(iap::AndroidBilling::RequestReprocessTransaction::Self *self)
{
  uint8_t v1[16];

  if ( *((uint8_t *)self + 88) == 0 )
  {
    glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v1, (int)(uintptr_t)(self) + 12);
    *((uint32_t *)self + 5) = 0;
    *((uint8_t *)self + 88) = 1;
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v1);
  }
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::CreationSettings::Update  (binary VA: 0x1515d30)
// Original: iap::AndroidBilling::CreationSettings::Update
// ----------------------------------------------------------------------------
int iap::AndroidBilling::CreationSettings::Update(iap::AndroidBilling::CreationSettings::Self *self, const glwebtools::CustomAttribute::Self *a2)
{
  glwebtools::CustomAttribute::Self *v2;
  glwebtools::CustomAttribute::Self *v3;
  glwebtools::CustomAttribute::Self *v4;
  int v5;
  int result;
  char *v7;
  char *v8;
  char *v9;

  v2 = glwebtools::CustomAttribute::key(a2);
  if ( g4_std::string::compare((int)(uintptr_t)(v2), "IGP_shortcode") != 0 )
  {
    v3 = glwebtools::CustomAttribute::key(a2);
    if ( g4_std::string::compare((int)(uintptr_t)(v3), "product_id") != 0 )
    {
      v4 = glwebtools::CustomAttribute::key(a2);
      v5 = g4_std::string::compare((int)(uintptr_t)(v4), "app_version");
      result = -2147483646;
      if ( v5 == 0 )
      {
        v7 = glwebtools::CustomAttribute::value(a2);
        return glwebtools::CustomArgument::opShr((glwebtools::CustomArgument::Self *)v7, (int)(uintptr_t)(self) + 40);
      }
    }
    else
    {
      v8 = glwebtools::CustomAttribute::value(a2);
      return glwebtools::CustomArgument::opShr((glwebtools::CustomArgument::Self *)v8, (int)(uintptr_t)(self) + 8);
    }
  }
  else
  {
    v9 = glwebtools::CustomAttribute::value(a2);
    return glwebtools::CustomArgument::opShr((glwebtools::CustomArgument::Self *)v9, (int)(uintptr_t)(self) + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::UpdateSettings  (binary VA: 0x1515e10)
// Original: iap::AndroidBilling::UpdateSettings
// ----------------------------------------------------------------------------
int iap::AndroidBilling::UpdateSettings(iap::AndroidBilling::Self *self, const glwebtools::CustomAttribute::Self *a2)
{
  iap::TransactionManager::Self *Instance;
  iap::TransactionManager::Self *v4;

  iap::AndroidBilling::CreationSettings::Update((iap::AndroidBilling::CreationSettings::Self *)((iap::AndroidBilling::Self *)((char *)self + 12)), a2);
  Instance = (iap::TransactionManager::Self *)iap::TransactionManager::GetInstance(v4);
  iap::TransactionManager::UpdateSettings(Instance, a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::Shutdown  (binary VA: 0x1515e60)
// Original: iap::AndroidBilling::Shutdown
// ----------------------------------------------------------------------------
int iap::AndroidBilling::Shutdown(iap::AndroidBilling::Self *self)
{
  int *v1;
  int *v2;
  void (***v3)(int);
  iap::EventData::Self **v4;
  char *v5;
  char *v7;
  char *v8;

  if ( G4_VCALL<uint8_t>(self, 16) != 0 )
  {
    v1 = *((int **)self + 14);
    v2 = (int *)((char *)self + 56);
    if ( v1 != (int *)((char *)self + 56) )
    {
      do
      {
        G4_VCALL<void>(v1[2], 32);
        v3 = (void (***)(int))v1[2];
        if ( v3 != nullptr )
        {
          (**v3)(v1[2]);
          sub_4EBEE0(v1[2]);
        }
        v1 = (int *)*v1;
      }
      while ( v1 != v2 );
      v1 = *((int **)self + 14);
    }
    if ( v1 != v2 )
    {
      while ( 1 )
      {
        v7 = (char *)*v1;
        sub_4EBEE0((int)(uintptr_t)(v1));
        if ( v7 == (char *)v2 )
          break;
        v1 = (int *)v7;
      }
    }
    v4 = *((iap::EventData::Self ***)self + 16);
    *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(v2);
    *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(v2);
    v8 = (char *)self + 64;
    if ( v4 != (iap::EventData::Self **)((char *)self + 64) )
    {
      while ( 1 )
      {
        v5 = (char *)*v4;
        iap::Event::Destroy(v4 + 2);
        sub_4EBEE0((int)(uintptr_t)(v4));
        if ( v5 == v8 )
          break;
        v4 = (iap::EventData::Self **)v5;
      }
    }
    *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(v8);
    *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(v8);
    glwebtools::GlWebTools::Shutdown((glwebtools::GlWebToolsCore::Self **)self + 2);
    glwebtools::GlWebTools::Terminate((glwebtools::GlWebToolsCore::Self **)self + 2);
    *((uint8_t *)self + 76) = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::Update  (binary VA: 0x1515f50)
// Original: iap::AndroidBilling::Update
// ----------------------------------------------------------------------------
void iap::AndroidBilling::Update(glwebtools::GlWebToolsCore::Self **self)
{
  char *v1;
  iap::EventRequestResultData::Self *v2;
  glwebtools::Json::Value::Self *Root;
  int v4;
  void (***v5)(uint32_t);
  char *v6;
  void (***v7)(uint32_t);
  char *v8;
  typedef size_t _g4_t_v9;
  typedef size_t _g4_t_v10;
  typedef glwebtools::Json::Value::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef char *_g4_t_v13;
  typedef iap::EventData::Self *_g4_t_v14;
  typedef uint8_t _g4_t_v15[16];
  typedef uint8_t _g4_t_v16[48];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v10)) > _g4_s1 ? (0u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v11)) > _g4_s2 ? (48u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v12)) > _g4_s3 ? (52u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v13)) > _g4_s4 ? (56u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v14)) > _g4_s5 ? (72u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v15)) > _g4_s6 ? (76u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v16)) > _g4_s7 ? (92u + sizeof(_g4_t_v16)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 92u);

  if ( (*((uint8_t (**)(glwebtools::GlWebToolsCore::Self **))*self + 4))(self) != 0 )
  {
    glwebtools::GlWebTools::Update(self + 2);
    v1 = (char *)*(self + 14);
    v13 = (char *)(self + 14);
    while ( v1 != v13 )
    {
      while ( 1 )
      {
        (*(void (**)(uint32_t))(**((uint32_t **)v1 + 2) + 28))(*((uint32_t *)v1 + 2));
        if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)v1 + 2) + 20))(*((uint32_t *)v1 + 2)) == 0 )
          break;
        v2 = iap::EventData::Construct((iap::EventData::Self *)"result");
        *((uint32_t *)v2 + 1) = (*(int (**)(uint32_t))(**((uint32_t **)v1 + 2) + 8))(*((uint32_t *)v1 + 2));
        *((uint32_t *)v2 + 2) = (*(int (**)(uint32_t))(**((uint32_t **)v1 + 2) + 12))(*((uint32_t *)v1 + 2));
        g4_std::string::assign_str((char *)v2 + 20, self + 1);
        sub_1937C90((char *)v2 + 16, *((uint32_t *)v1 + 2) + 72);
        glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v16);
        v12 = *((uint32_t *)v1 + 2) + 16;
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v15), nullptr);
        Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v16);
        glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v15);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v15);
        G4_VCALL<void>(v12, 12, v16);
        glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)v16, (int)(uintptr_t)(v2) + 12);
        iap::Event::Construct((iap::Event::Self *)&v14, v2);
        v4 = sub_4EBE70(0xCu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v4 != -8 )
        {
          v11 = (glwebtools::Json::Value::Self *)v4;
          iap::Event::Construct((iap::Event::Self *)(v4 + 8), (const iap::Event::Self *)&v14);
          v4 = (int)(uintptr_t)(v11);
        }
        sub_1901920(v4, self + 16);
        iap::Event::Destroy(&v14);
        v5 = *((void (****)(uint32_t))v1 + 2);
        if ( v5 != nullptr )
        {
          (**v5)(*((uint32_t *)v1 + 2));
          sub_4EBEE0(*((uint32_t *)v1 + 2));
        }
        v6 = *(char **)v1;
        sub_1901940(v1);
        v9 = (size_t)v1;
        v1 = v6;
        sub_4EBEE0(v9);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v16);
        if ( v6 == v13 )
          return;
      }
      if ( (*(uint8_t (**)(uint32_t))(**((uint32_t **)v1 + 2) + 24))(*((uint32_t *)v1 + 2)) != 0 )
      {
        v7 = *((void (****)(uint32_t))v1 + 2);
        if ( v7 != nullptr )
        {
          (**v7)(*((uint32_t *)v1 + 2));
          sub_4EBEE0(*((uint32_t *)v1 + 2));
        }
        v8 = *(char **)v1;
        sub_1901940(v1);
        v10 = (size_t)v1;
        v1 = v8;
        sub_4EBEE0(v10);
      }
      else
      {
        v1 = *(char **)v1;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::ResultABilling::Destroy  (binary VA: 0x15161c0)
// Original: iap::AndroidBilling::ResultABilling::~ResultABilling
// ----------------------------------------------------------------------------
void iap::AndroidBilling::ResultABilling::Destroy(iap::AndroidBilling::ResultABilling::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096598);
  v1 = *((uint32_t *)self + 10);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  iap::Result::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::ResultABilling::Destroy_ea1516230  (binary VA: 0x1516230)
// Original: iap::AndroidBilling::ResultABilling::~ResultABilling
// ----------------------------------------------------------------------------
void iap::AndroidBilling::ResultABilling::Destroy_ea1516230(iap::AndroidBilling::ResultABilling::Self *self)
{
  iap::AndroidBilling::ResultABilling::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::CreationSettings::Clear  (binary VA: 0x1516270)
// Original: iap::AndroidBilling::CreationSettings::Clear
// ----------------------------------------------------------------------------
int iap::AndroidBilling::CreationSettings::Clear(iap::AndroidBilling::CreationSettings::Self *self)
{
  uint32_t *v2;
  int result;
  uint32_t *v4;
  typedef uint32_t *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  g4_std::string::clear((char *)self + 4, 0, *(uint32_t *)(*((uint32_t *)self + 1) - 12), 0);
  g4_std::string::clear((char *)self + 8, 0, *(uint32_t *)(*((uint32_t *)self + 2) - 12), 0);
  g4_std::string::clear((char *)self + 40, 0, *(uint32_t *)(*((uint32_t *)self + 10) - 12), 0);
  v6 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 16, &v6);
  v2 = v6 - 3;
  if ( v6 - 3 != dword_213B808 && __sync_fetch_and_add(v6 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
  *((uint8_t *)self + 22) = 0;
  v5 = &dword_213B814;
  g4_std::string::assign_str((char *)self + 24, &v5);
  result = (int)(uintptr_t)(v5);
  v4 = v5 - 3;
  if ( v5 - 3 != dword_213B808 && __sync_fetch_and_add(v5 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  *((uint8_t *)self + 30) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestAndroidBillingBase::Destroy  (binary VA: 0x15163a0)
// Original: iap::AndroidBilling::RequestAndroidBillingBase::~RequestAndroidBillingBase
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestAndroidBillingBase::Destroy(glwebtools::GlWebToolsCore::Self **self)
{
  int v1;
  int v2;

  *self = (glwebtools::GlWebToolsCore::Self *)((uint32_t)(uintptr_t)&off_20963E8);
  glwebtools::UrlConnection::Destroy((glwebtools::UrlConnection::Self *)(self + 20));
  glwebtools::GlWebTools::Destroy(self + 19);
  v1 = (int)(uintptr_t)(*(self + 18));
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  iap::AndroidBilling::ResultABilling::Destroy((iap::AndroidBilling::ResultABilling::Self *)(self + 4));
  v2 = (int)(uintptr_t)(*(self + 3));
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  iap::Request::Destroy((iap::Request::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestLimitsValidation::Destroy  (binary VA: 0x1516460)
// Original: iap::AndroidBilling::RequestLimitsValidation::~RequestLimitsValidation
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestLimitsValidation::Destroy(glwebtools::GlWebToolsCore::Self **self)
{
  *self = (glwebtools::GlWebToolsCore::Self *)((uint32_t)(uintptr_t)&off_20965C8);
  iap::AndroidBilling::RequestAndroidBillingBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestLimitsValidation::Destroy_ea1516490  (binary VA: 0x1516490)
// Original: iap::AndroidBilling::RequestLimitsValidation::~RequestLimitsValidation
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestLimitsValidation::Destroy_ea1516490(glwebtools::GlWebToolsCore::Self **self)
{
  iap::AndroidBilling::RequestLimitsValidation::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestReprocessTransaction::Destroy  (binary VA: 0x15164d0)
// Original: iap::AndroidBilling::RequestReprocessTransaction::~RequestReprocessTransaction
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestReprocessTransaction::Destroy(glwebtools::GlWebToolsCore::Self **self)
{
  *self = (glwebtools::GlWebToolsCore::Self *)((uint32_t)(uintptr_t)&off_2096568);
  iap::AndroidBilling::RequestAndroidBillingBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestReprocessTransaction::Destroy_ea1516500  (binary VA: 0x1516500)
// Original: iap::AndroidBilling::RequestReprocessTransaction::~RequestReprocessTransaction
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestReprocessTransaction::Destroy_ea1516500(glwebtools::GlWebToolsCore::Self **self)
{
  iap::AndroidBilling::RequestReprocessTransaction::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestBuyProduct::Destroy  (binary VA: 0x1516540)
// Original: iap::AndroidBilling::RequestBuyProduct::~RequestBuyProduct
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestBuyProduct::Destroy(glwebtools::GlWebToolsCore::Self **self)
{
  *self = (glwebtools::GlWebToolsCore::Self *)((uint32_t)(uintptr_t)&off_2096528);
  iap::AndroidBilling::RequestAndroidBillingBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestBuyProduct::Destroy_ea1516570  (binary VA: 0x1516570)
// Original: iap::AndroidBilling::RequestBuyProduct::~RequestBuyProduct
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestBuyProduct::Destroy_ea1516570(glwebtools::GlWebToolsCore::Self **self)
{
  iap::AndroidBilling::RequestBuyProduct::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestFinishTransaction::Destroy  (binary VA: 0x15165b0)
// Original: iap::AndroidBilling::RequestFinishTransaction::~RequestFinishTransaction
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestFinishTransaction::Destroy(glwebtools::GlWebToolsCore::Self **self)
{
  *self = (glwebtools::GlWebToolsCore::Self *)((uint32_t)(uintptr_t)&off_20964E8);
  iap::AndroidBilling::RequestAndroidBillingBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestFinishTransaction::Destroy_ea15165e0  (binary VA: 0x15165e0)
// Original: iap::AndroidBilling::RequestFinishTransaction::~RequestFinishTransaction
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestFinishTransaction::Destroy_ea15165e0(glwebtools::GlWebToolsCore::Self **self)
{
  iap::AndroidBilling::RequestFinishTransaction::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestGetTransaction::Destroy  (binary VA: 0x1516620)
// Original: iap::AndroidBilling::RequestGetTransaction::~RequestGetTransaction
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestGetTransaction::Destroy(glwebtools::GlWebToolsCore::Self **self)
{
  *self = (glwebtools::GlWebToolsCore::Self *)((uint32_t)(uintptr_t)&off_20964A8);
  iap::AndroidBilling::RequestAndroidBillingBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestGetTransaction::Destroy_ea1516650  (binary VA: 0x1516650)
// Original: iap::AndroidBilling::RequestGetTransaction::~RequestGetTransaction
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestGetTransaction::Destroy_ea1516650(glwebtools::GlWebToolsCore::Self **self)
{
  iap::AndroidBilling::RequestGetTransaction::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestRestorePurchase::Destroy  (binary VA: 0x1516690)
// Original: iap::AndroidBilling::RequestRestorePurchase::~RequestRestorePurchase
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestRestorePurchase::Destroy(glwebtools::GlWebToolsCore::Self **self)
{
  *self = (glwebtools::GlWebToolsCore::Self *)((uint32_t)(uintptr_t)&off_2096468);
  iap::AndroidBilling::RequestAndroidBillingBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestRestorePurchase::Destroy_ea15166c0  (binary VA: 0x15166c0)
// Original: iap::AndroidBilling::RequestRestorePurchase::~RequestRestorePurchase
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestRestorePurchase::Destroy_ea15166c0(glwebtools::GlWebToolsCore::Self **self)
{
  iap::AndroidBilling::RequestRestorePurchase::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestConfirmProductV1::Destroy  (binary VA: 0x1516700)
// Original: iap::AndroidBilling::RequestConfirmProductV1::~RequestConfirmProductV1
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestConfirmProductV1::Destroy(glwebtools::GlWebToolsCore::Self **self)
{
  *self = (glwebtools::GlWebToolsCore::Self *)((uint32_t)(uintptr_t)&off_2096428);
  iap::AndroidBilling::RequestAndroidBillingBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestConfirmProductV1::Destroy_ea1516730  (binary VA: 0x1516730)
// Original: iap::AndroidBilling::RequestConfirmProductV1::~RequestConfirmProductV1
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestConfirmProductV1::Destroy_ea1516730(glwebtools::GlWebToolsCore::Self **self)
{
  iap::AndroidBilling::RequestConfirmProductV1::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestAndroidBillingBase::Destroy_ea1516770  (binary VA: 0x1516770)
// Original: iap::AndroidBilling::RequestAndroidBillingBase::~RequestAndroidBillingBase
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestAndroidBillingBase::Destroy_ea1516770(glwebtools::GlWebToolsCore::Self **self)
{
  iap::AndroidBilling::RequestAndroidBillingBase::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::Destroy  (binary VA: 0x15167b0)
// Original: iap::AndroidBilling::~AndroidBilling
// ----------------------------------------------------------------------------
void iap::AndroidBilling::Destroy(glwebtools::GlWebToolsCore::Self **self)
{
  iap::EventData::Self **v1;
  iap::AndroidBilling::Self *v2;
  iap::AndroidBilling::Self *v3;
  iap::AndroidBilling::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  *self = (glwebtools::GlWebToolsCore::Self *)((uint32_t)(uintptr_t)&off_20963A8);
  iap::AndroidBilling::Shutdown((iap::AndroidBilling::Self *)self);
  v1 = (iap::EventData::Self **)*(self + 16);
  if ( v1 != (iap::EventData::Self **)(self + 16) )
  {
    while ( 1 )
    {
      v2 = (iap::AndroidBilling::Self *)(*v1);
      iap::Event::Destroy(v1 + 2);
      sub_4EBEE0((int)(uintptr_t)(v1));
      if ( v2 == (iap::AndroidBilling::Self *)(self + 16) )
        break;
      v1 = (iap::EventData::Self **)v2;
    }
  }
  v3 = (iap::AndroidBilling::Self *)(*(self + 14));
  if ( v3 != (iap::AndroidBilling::Self *)(self + 14) )
  {
    while ( 1 )
    {
      v4 = *(iap::AndroidBilling::Self **)v3;
      sub_4EBEE0((int)(uintptr_t)(v3));
      if ( v4 == (iap::AndroidBilling::Self *)(self + 14) )
        break;
      v3 = v4;
    }
  }
  *(self + 3) = (glwebtools::GlWebToolsCore::Self *)((uint32_t)(uintptr_t)&off_2096378);
  v5 = (int)(uintptr_t)(*(self + 13));
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = (int)(uintptr_t)(*(self + 11));
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  v7 = (int)(uintptr_t)(*(self + 9));
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  v8 = (int)(uintptr_t)(*(self + 7));
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v8 - 12));
  }
  v9 = (int)(uintptr_t)(*(self + 6));
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v9 - 12));
  }
  v10 = (int)(uintptr_t)(*(self + 5));
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v10 - 12));
  }
  v11 = (int)(uintptr_t)(*(self + 4));
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v11 - 12));
  }
  glwebtools::GlWebTools::Destroy(self + 2);
  *self = (glwebtools::GlWebToolsCore::Self *)((uint32_t)(uintptr_t)&off_2096608);
  v12 = (int)(uintptr_t)(*(self + 1));
  if ( (uint32_t *)(v12 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v12 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::Destroy_ea1516a00  (binary VA: 0x1516a00)
// Original: iap::AndroidBilling::~AndroidBilling
// ----------------------------------------------------------------------------
void iap::AndroidBilling::Destroy_ea1516a00(glwebtools::GlWebToolsCore::Self **self)
{
  iap::AndroidBilling::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestFinishTransaction::Update  (binary VA: 0x1516a40)
// Original: iap::AndroidBilling::RequestFinishTransaction::Update
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestFinishTransaction::Update(iap::AndroidBilling::RequestFinishTransaction::Self *self)
{
  char IsValid;
  int v2;
  int v3;
  int v4;
  iap::TransactionManager::Self *Instance;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef void *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15[16];
  typedef uint32_t _g4_t_v16[27];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v9)) > _g4_s1 ? (0u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v10)) > _g4_s2 ? (0u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v11)) > _g4_s3 ? (8u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v12)) > _g4_s4 ? (16u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v13)) > _g4_s5 ? (20u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v14)) > _g4_s6 ? (24u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v15)) > _g4_s7 ? (28u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v16)) > _g4_s8 ? (44u + sizeof(_g4_t_v16)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v15, (int)(uintptr_t)(self) + 12);
  iap::TransactionInfo::Construct((iap::TransactionInfo::Self *)v16);
  v16[0] = ((uint32_t)(uintptr_t)&off_2096688);
  v16[16] = (uint32_t)(uintptr_t)(&dword_213B814);
  v16[18] = (uint32_t)(uintptr_t)(&dword_213B814);
  v16[19] = (uint32_t)(uintptr_t)(&dword_213B814);
  v16[20] = (uint32_t)(uintptr_t)(&dword_213B814);
  v16[21] = (uint32_t)(uintptr_t)(&dword_213B814);
  v16[22] = (uint32_t)(uintptr_t)(&dword_213B814);
  IsValid = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v15);
  v2 = -2147483645;
  if ( IsValid == 0 || (v2 = (*(int (**)(int))(v16[0] + 8))(-2147483645)) != 0 )
  {
    v8 = v2;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "[finish_transaction] Could not get transaction info from data", (int)(uintptr_t)(&v12) + 1);
    g4_std::string::assign_str((char *)self + 24, &v14);
    v3 = v14;
    *((uint8_t *)self + 30) = 1;
    v4 = v8;
    v11 = (void *)(v3 - 12);
    if ( (uint32_t *)(v3 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
    {
      goto LABEL_11;
    }
  }
  else
  {
    Instance = (iap::TransactionManager::Self *)iap::TransactionManager::GetInstance((iap::TransactionManager::Self *)v16);
    v6 = iap::TransactionManager::CompleteTransaction(Instance, (iap::android_billing::TransactionInfo::Self *)v16);
    if ( v6 == 0 )
    {
      sub_1937C90((char *)self + 72, (char *)self + 12);
      v4 = 0;
      goto LABEL_3;
    }
    v9 = v6;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "[finish_transaction] Could not get transaction from queue", (int)(uintptr_t)(&v12));
    g4_std::string::assign_str((char *)self + 24, &v13);
    v7 = v13;
    *((uint8_t *)self + 30) = 1;
    v4 = v9;
    v11 = (void *)(v7 - 12);
    if ( (uint32_t *)(v7 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
    {
LABEL_11:
      v10 = v4;
      g4_std::string::Rep::M_destroy(v11);
      v4 = v10;
    }
  }
LABEL_3:
  *((uint32_t *)self + 5) = v4;
  *((uint8_t *)self + 88) = 1;
  iap::android_billing::TransactionInfo::Destroy((iap::android_billing::TransactionInfo::Self *)v16);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v15);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::ResultABilling::write  (binary VA: 0x1516c60)
// Original: iap::AndroidBilling::ResultABilling::write
// ----------------------------------------------------------------------------
glwebtools::Self * iap::AndroidBilling::ResultABilling::write(iap::AndroidBilling::ResultABilling::Self *self, glwebtools::JsonWriter::Self *a2)
{
  glwebtools::Self *v2;
  void *v4;
  void *v5;
  char *v6;
  void *v7;
  void *v8;
  char isObject;
  int v10;
  glwebtools::Json::Value::Self *v11;
  glwebtools::Json::Value::Self *v12;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v14;
  glwebtools::Json::Value::Self *v15;
  glwebtools::Json::Value::Self *v16;
  glwebtools::Json::Value::Self *v17;
  typedef char *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef const glwebtools::Json::Value::Self *_g4_t_v20;
  typedef glwebtools::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char *_g4_t_v24;
  typedef int _g4_t_v25[4];
  typedef int _g4_t_v26;
  typedef char *_g4_t_v27;
  typedef int _g4_t_v28[3];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[20];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v20)) > _g4_s2 ? (4u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (30u + sizeof(_g4_t_v22)) > _g4_s4 ? (30u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v23)) > _g4_s5 ? (36u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v24)) > _g4_s6 ? (40u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v25)) > _g4_s7 ? (52u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v26)) > _g4_s8 ? (68u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v27)) > _g4_s9 ? (72u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v28)) > _g4_s10 ? (84u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v29)) > _g4_s11 ? (96u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v30)) > _g4_s12 ? (112u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v31)) > _g4_s13 ? (128u + sizeof(_g4_t_v31)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 30u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 128u);

  v2 = iap::Result::write(self, a2);
  if ( v2 != nullptr )
    return v2;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "ecomm_next_purchase_time", (int)(uintptr_t)(&v22));
  v24 = (char *)self + 40;
  g4_std::string::construct_copy(v25, &v23);
  v21 = nullptr;
  v25[1] = (int)(uintptr_t)(v24);
  if ( v24[6] != 0 )
  {
    v18 = v24;
    isObject = glwebtools::JsonWriter::isObject(a2);
    v10 = (int)(uintptr_t)(v18);
    if ( isObject == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v29), (char *)&loc_6 + 1);
      Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v29);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v29);
      v10 = (int)(uintptr_t)(v18);
    }
    v19 = v10;
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v31);
    v21 = nullptr;
    if ( *(uint8_t *)(v19 + 6) != 0 )
      v21 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v31, v19);
    if ( glwebtools::IsOperationSuccess(v21) )
    {
      v20 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v31);
      v11 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      v12 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v11, (char **)v25);
      glwebtools::Json::Value::opAssign(v12, v20);
      v21 = nullptr;
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v31);
  }
  v4 = (void *)(v25[0] - 12);
  if ( (uint32_t *)(v25[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( v21 == nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "ecomm_time_to_next_purchase", (int)(uintptr_t)(&v22) + 3);
    v27 = (char *)self + 48;
    g4_std::string::construct_copy(v28, &v26);
    v6 = v27;
    v28[1] = (int)(uintptr_t)(v27);
    if ( v27[6] != 0 )
    {
      if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
      {
        glwebtools::Json::Value::Construct((int)(uintptr_t)(v30), (char *)&loc_6 + 1);
        v17 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        glwebtools::Json::Value::opAssign(v17, (const glwebtools::Json::Value::Self *)v30);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v30);
      }
      v2 = nullptr;
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v31);
      if ( v6[6] != 0 )
        v2 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v31, *(uint32_t *)v6);
      if ( glwebtools::IsOperationSuccess(v2) )
      {
        v14 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v31);
        v15 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
        v16 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v15, (char **)v28);
        glwebtools::Json::Value::opAssign(v16, v14);
        v2 = nullptr;
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v31);
    }
    v7 = (void *)(v28[0] - 12);
    if ( (uint32_t *)(v28[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    return v2;
  }
  return v21;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::CreationSettings::read  (binary VA: 0x1517070)
// Original: iap::AndroidBilling::CreationSettings::read
// ----------------------------------------------------------------------------
int iap::AndroidBilling::CreationSettings::read(iap::AndroidBilling::CreationSettings::Self *self, const glwebtools::JsonReader::Self *a2, int a3)
{
  int v3;
  const glwebtools::Json::Value::Self *v4;
  void *v5;
  void *v6;
  const glwebtools::Json::Value::Self *v7;
  void *v8;
  void *v9;
  const glwebtools::Json::Value::Self *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  const glwebtools::Json::Value::Self *v16;
  void *v17;
  typedef char *_g4_t_v18;
  typedef int *_g4_t_v19;
  typedef char *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef char *_g4_t_v27;
  typedef glwebtools::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef char *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef char *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef char *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef char *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef char *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef char *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef char *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef char *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint32_t _g4_t_v73[7];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v19)) > _g4_s1 ? (0u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v20)) > _g4_s2 ? (0u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v21)) > _g4_s3 ? (0u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v22)) > _g4_s4 ? (4u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v23)) > _g4_s5 ? (4u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v24)) > _g4_s6 ? (8u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v25)) > _g4_s7 ? (12u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v26)) > _g4_s8 ? (16u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v27)) > _g4_s9 ? (16u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v28)) > _g4_s10 ? (16u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v29)) > _g4_s11 ? (24u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v30)) > _g4_s12 ? (24u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v31)) > _g4_s13 ? (24u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v32)) > _g4_s14 ? (24u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v33)) > _g4_s15 ? (28u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v34)) > _g4_s16 ? (32u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v35)) > _g4_s17 ? (36u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v36)) > _g4_s18 ? (40u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v37)) > _g4_s19 ? (44u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v38)) > _g4_s20 ? (48u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v39)) > _g4_s21 ? (52u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v40)) > _g4_s22 ? (56u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v41)) > _g4_s23 ? (60u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v42)) > _g4_s24 ? (64u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v43)) > _g4_s25 ? (68u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v44)) > _g4_s26 ? (72u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v45)) > _g4_s27 ? (76u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v46)) > _g4_s28 ? (80u + sizeof(_g4_t_v46)) : _g4_s28,
    _g4_s30 = (84u + sizeof(_g4_t_v47)) > _g4_s29 ? (84u + sizeof(_g4_t_v47)) : _g4_s29,
    _g4_s31 = (88u + sizeof(_g4_t_v48)) > _g4_s30 ? (88u + sizeof(_g4_t_v48)) : _g4_s30,
    _g4_s32 = (92u + sizeof(_g4_t_v49)) > _g4_s31 ? (92u + sizeof(_g4_t_v49)) : _g4_s31,
    _g4_s33 = (96u + sizeof(_g4_t_v50)) > _g4_s32 ? (96u + sizeof(_g4_t_v50)) : _g4_s32,
    _g4_s34 = (100u + sizeof(_g4_t_v51)) > _g4_s33 ? (100u + sizeof(_g4_t_v51)) : _g4_s33,
    _g4_s35 = (104u + sizeof(_g4_t_v52)) > _g4_s34 ? (104u + sizeof(_g4_t_v52)) : _g4_s34,
    _g4_s36 = (108u + sizeof(_g4_t_v53)) > _g4_s35 ? (108u + sizeof(_g4_t_v53)) : _g4_s35,
    _g4_s37 = (112u + sizeof(_g4_t_v54)) > _g4_s36 ? (112u + sizeof(_g4_t_v54)) : _g4_s36,
    _g4_s38 = (116u + sizeof(_g4_t_v55)) > _g4_s37 ? (116u + sizeof(_g4_t_v55)) : _g4_s37,
    _g4_s39 = (120u + sizeof(_g4_t_v56)) > _g4_s38 ? (120u + sizeof(_g4_t_v56)) : _g4_s38,
    _g4_s40 = (124u + sizeof(_g4_t_v57)) > _g4_s39 ? (124u + sizeof(_g4_t_v57)) : _g4_s39,
    _g4_s41 = (128u + sizeof(_g4_t_v58)) > _g4_s40 ? (128u + sizeof(_g4_t_v58)) : _g4_s40,
    _g4_s42 = (132u + sizeof(_g4_t_v59)) > _g4_s41 ? (132u + sizeof(_g4_t_v59)) : _g4_s41,
    _g4_s43 = (136u + sizeof(_g4_t_v60)) > _g4_s42 ? (136u + sizeof(_g4_t_v60)) : _g4_s42,
    _g4_s44 = (140u + sizeof(_g4_t_v61)) > _g4_s43 ? (140u + sizeof(_g4_t_v61)) : _g4_s43,
    _g4_s45 = (144u + sizeof(_g4_t_v62)) > _g4_s44 ? (144u + sizeof(_g4_t_v62)) : _g4_s44,
    _g4_s46 = (148u + sizeof(_g4_t_v63)) > _g4_s45 ? (148u + sizeof(_g4_t_v63)) : _g4_s45,
    _g4_s47 = (152u + sizeof(_g4_t_v64)) > _g4_s46 ? (152u + sizeof(_g4_t_v64)) : _g4_s46,
    _g4_s48 = (156u + sizeof(_g4_t_v65)) > _g4_s47 ? (156u + sizeof(_g4_t_v65)) : _g4_s47,
    _g4_s49 = (160u + sizeof(_g4_t_v66)) > _g4_s48 ? (160u + sizeof(_g4_t_v66)) : _g4_s48,
    _g4_s50 = (164u + sizeof(_g4_t_v67)) > _g4_s49 ? (164u + sizeof(_g4_t_v67)) : _g4_s49,
    _g4_s51 = (168u + sizeof(_g4_t_v68)) > _g4_s50 ? (168u + sizeof(_g4_t_v68)) : _g4_s50,
    _g4_s52 = (172u + sizeof(_g4_t_v69)) > _g4_s51 ? (172u + sizeof(_g4_t_v69)) : _g4_s51,
    _g4_s53 = (176u + sizeof(_g4_t_v70)) > _g4_s52 ? (176u + sizeof(_g4_t_v70)) : _g4_s52,
    _g4_s54 = (180u + sizeof(_g4_t_v71)) > _g4_s53 ? (180u + sizeof(_g4_t_v71)) : _g4_s53,
    _g4_s55 = (184u + sizeof(_g4_t_v72)) > _g4_s54 ? (184u + sizeof(_g4_t_v72)) : _g4_s54,
    _g4_s56 = (188u + sizeof(_g4_t_v73)) > _g4_s55 ? (188u + sizeof(_g4_t_v73)) : _g4_s55
  };
  alignas(16) uint8_t _g4_sf[_g4_s56];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 88u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 92u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 96u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 100u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 104u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 108u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 112u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 116u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 120u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 124u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 128u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 132u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 136u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 140u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 144u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 148u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 152u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 156u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 160u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 164u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 168u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 172u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 176u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 180u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 184u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 188u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "IGP_shortcode", (int)(uintptr_t)(&v33) + 3);
  v42 = (char *)self + 4;
  v3 = -2147483645;
  g4_std::string::construct_copy(&v53, &v41);
  v54 = v42;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0 )
  {
    LOWORD(v3) = 2;
    if ( glwebtools::Json::Value::isMember(a2, (char **)&v53) )
    {
      v4 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v53);
      v26 = v73;
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v73, v4);
      v3 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v73, (int)(uintptr_t)(v54));
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v73);
    }
  }
  v5 = (void *)(v53 - 12);
  if ( (uint32_t *)(v53 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
  {
    v18 = (char *)&v34 + 2;
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    v18 = (char *)&v34 + 3;
    g4_std::string::Rep::M_destroy(v6);
  }
  if ( v3 != 0 )
  {
    G4_VCALL<void>(self, 12, v18, v22, v24, v25, v26, (char *)self + 4, v29, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73[0], v73[1], v73[2], v73[3]);
    return v3;
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "product_id", (int)(uintptr_t)(&v34));
    v46 = (char *)self + 8;
    g4_std::string::construct_copy(&v57, &v45);
    v58 = v46;
    v30 = -2147483645;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0 )
    {
      v30 = -2147483646;
      if ( glwebtools::Json::Value::isMember(a2, (char **)&v57) )
      {
        v7 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v57);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v73, v7);
        v30 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v73, (int)(uintptr_t)(v58));
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v73);
      }
    }
    v8 = (void *)(v57 - 12);
    if ( (uint32_t *)(v57 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
    {
      v19 = &v35;
      g4_std::string::Rep::M_destroy(v8);
    }
    v9 = (void *)(v45 - 12);
    if ( (uint32_t *)(v45 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
    {
      v19 = (int *)((char *)&v35 + 1);
      g4_std::string::Rep::M_destroy(v9);
    }
    if ( v30 != 0 )
    {
      G4_VCALL<void>(self, 12, v19);
      return v30;
    }
    v27 = (char *)self + 40;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "app_version", (int)(uintptr_t)(&v34) + 1);
    v50 = (char *)self + 40;
    g4_std::string::construct_copy(&v61, &v49);
    v62 = v50;
    v31 = -2147483645;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0 )
    {
      v31 = -2147483646;
      if ( glwebtools::Json::Value::isMember(a2, (char **)&v61) )
      {
        v10 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v61);
        v27 = (char *)v73;
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v73, v10);
        v31 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v73, (int)(uintptr_t)(v62));
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v73);
      }
    }
    v11 = (void *)(v61 - 12);
    if ( (uint32_t *)(v61 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
    {
      v20 = (char *)&v35 + 2;
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v49 - 12);
    if ( (uint32_t *)(v49 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
    {
      v20 = (char *)&v35 + 3;
      g4_std::string::Rep::M_destroy(v12);
    }
    if ( v31 == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), "anonymous_credential", (int)(uintptr_t)(&v36));
      v66 = (char *)self + 24;
      g4_std::string::construct_copy(&v69, &v65);
      v70 = v66;
      if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
        && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
        && glwebtools::Json::Value::isMember(a2, (char **)&v69) )
      {
        v16 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v69);
        glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v73, v16);
        v32 = v70;
        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v73) != 0 )
        {
          v37 = (int)(uintptr_t)(&dword_213B814);
          v28 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v73, (int)(uintptr_t)(&v37));
          if ( glwebtools::IsOperationSuccess(v28) )
          {
            g4_std::string::assign_str(v32, &v37);
            v32[6] = 1;
          }
          else
          {
            v3 = (int)(uintptr_t)(v28);
          }
          v17 = (void *)(v37 - 12);
          if ( (uint32_t *)(v37 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
          {
            v21 = (char *)&v36 + 1;
            g4_std::string::Rep::M_destroy(v17);
          }
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v73);
      }
      v13 = (void *)(v69 - 12);
      if ( (uint32_t *)(v69 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
      {
        v21 = (char *)&v36 + 2;
        g4_std::string::Rep::M_destroy(v13);
      }
      v14 = (void *)(v65 - 12);
      if ( (uint32_t *)(v65 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v65 - 4), 0xFFFFFFFF) <= 0 )
      {
        v21 = (char *)&v36 + 3;
        g4_std::string::Rep::M_destroy(v14);
      }
      if ( v3 != 0 )
        G4_VCALL<void>(self, 12, v21);
      return v3;
    }
    G4_VCALL<void>(self, 12, v20, v23, v24, v25, v27, &v49, v31, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73[0], v73[1], v73[2], v73[3]);
    return a3;
  }
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::Initialize  (binary VA: 0x15176e0)
// Original: iap::AndroidBilling::Initialize
// ----------------------------------------------------------------------------
int iap::AndroidBilling::Initialize(iap::AndroidBilling::Self *self, char *s, char *a3)
{
  int result;
  int v4;
  iap::TransactionManager::Self *Instance;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  size_t v12;
  typedef iap::TransactionManager::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef glwebtools::Self *_g4_t_v16;
  typedef uint8_t _g4_t_v17[16];
  typedef uint32_t _g4_t_v18[8];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v15)) > _g4_s2 ? (24u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v16)) > _g4_s3 ? (28u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v17)) > _g4_s4 ? (48u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v18)) > _g4_s5 ? (64u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v19)) > _g4_s6 ? (96u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (100u + sizeof(_g4_t_v20)) > _g4_s7 ? (100u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (104u + sizeof(_g4_t_v21)) > _g4_s8 ? (104u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v22)) > _g4_s9 ? (108u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v23)) > _g4_s10 ? (112u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (116u + sizeof(_g4_t_v24)) > _g4_s11 ? (116u + sizeof(_g4_t_v24)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 96u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 100u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 108u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 112u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 116u);

  if ( a3 == nullptr || s == nullptr )
    return -2147483646;
  result = -2147483645;
  if ( *((uint8_t *)self + 76) == 0 )
  {
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v17);
    v4 = glwebtools::JsonReader::parse((glwebtools::JsonReader::Self *)v17, a3);
    if ( v4 == 0 )
    {
      v4 = iap::AndroidBilling::CreationSettings::read(
             (iap::AndroidBilling::CreationSettings::Self *)((iap::AndroidBilling::Self *)((char *)self + 12)),
             (const glwebtools::JsonReader::Self *)v17,
             v14);
      if ( v4 == 0 )
      {
        Instance = (iap::TransactionManager::Self *)iap::TransactionManager::GetInstance(v13);
        v4 = iap::TransactionManager::Initialize(Instance, a3);
        if ( v4 == 0 )
        {
          glwebtools::GlWebTools::CreationSettings::Construct((glwebtools::GlWebTools::CreationSettings::Self *)v18);
          LOBYTE(v18[0]) = 0;
          v18[4] = 1;
          v18[3] = 0;
          v18[6] = 5000;
          v16 = (glwebtools::Self *)glwebtools::GlWebTools::Initialize(
                                (iap::AndroidBilling::Self *)((char *)self + 8),
                                (const glwebtools::GlWebTools::CreationSettings::Self *)v18);
          if ( glwebtools::IsOperationSuccess(v16) )
          {
            v12 = strlen(s);
            g4_std_compat::string_assign((int)(uintptr_t)(self) + 4, s, v12);
            v16 = nullptr;
            *((uint8_t *)self + 76) = 1;
          }
          v6 = (void *)(v24 - 12);
          if ( (uint32_t *)(v24 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v6);
          }
          v7 = (void *)(v23 - 12);
          if ( (uint32_t *)(v23 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v7);
          }
          v8 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          v9 = (void *)(v21 - 12);
          if ( (uint32_t *)(v21 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
          }
          v10 = (void *)(v20 - 12);
          if ( (uint32_t *)(v20 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v10);
          }
          v11 = (void *)(v19 - 12);
          if ( (uint32_t *)(v19 - 12) == dword_213B808 )
          {
            v4 = (int)(uintptr_t)(v16);
          }
          else
          {
            v4 = (int)(uintptr_t)(v16);
            if ( __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v11);
              v4 = (int)(uintptr_t)(v16);
            }
          }
        }
      }
    }
    v15 = v4;
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v17);
    return v15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::ResultABilling::read  (binary VA: 0x1517970)
// Original: iap::AndroidBilling::ResultABilling::read
// ----------------------------------------------------------------------------
glwebtools::Self * iap::AndroidBilling::ResultABilling::read(iap::AndroidBilling::ResultABilling::Self *self, const glwebtools::JsonReader::Self *a2)
{
  int v2;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  const glwebtools::Json::Value::Self *v8;
  void *v9;
  const glwebtools::Json::Value::Self *v10;
  char *v11;
  int v12;
  typedef glwebtools::Self *_g4_t_v13;
  typedef char *_g4_t_v14;
  typedef glwebtools::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[3];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef char *_g4_t_v27;
  typedef uint8_t _g4_t_v28[16];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (33u + sizeof(_g4_t_v16)) > _g4_s3 ? (33u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (37u + sizeof(_g4_t_v17)) > _g4_s4 ? (37u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v18)) > _g4_s5 ? (40u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v19)) > _g4_s6 ? (52u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v20)) > _g4_s7 ? (56u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v21)) > _g4_s8 ? (60u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v22)) > _g4_s9 ? (72u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v23)) > _g4_s10 ? (76u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v24)) > _g4_s11 ? (88u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v25)) > _g4_s12 ? (92u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v26)) > _g4_s13 ? (104u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v27)) > _g4_s14 ? (108u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (120u + sizeof(_g4_t_v28)) > _g4_s15 ? (120u + sizeof(_g4_t_v28)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 33u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 37u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 88u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 104u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 120u);

  v2 = iap::Result::read(self, a2);
  if ( v2 != 0 )
    return (glwebtools::Self *)v2;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "ecomm_next_purchase_time", (int)(uintptr_t)(&v16));
  v21 = (char *)self + 40;
  g4_std::string::construct_copy(&v22, &v20);
  v23 = v21;
  if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
    && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
    && glwebtools::Json::Value::isMember(a2, (char **)&v22) )
  {
    v8 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v22);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v28, v8);
    v14 = v23;
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v28) != 0 )
    {
      v18[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      v15 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v28, (int)(uintptr_t)(v18));
      if ( glwebtools::IsOperationSuccess(v15) )
      {
        g4_std::string::assign_str(v14, v18);
        v15 = nullptr;
        v14[6] = 1;
      }
      v9 = (void *)(v18[0] - 12);
      if ( (uint32_t *)(v18[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v9);
      }
    }
    else
    {
      v15 = nullptr;
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v28);
  }
  else
  {
    v15 = nullptr;
  }
  v4 = (void *)(v22 - 12);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v20 - 12);
  if ( (uint32_t *)(v20 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( v15 == nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "ecomm_time_to_next_purchase", (int)(uintptr_t)(&v17));
    v25 = (char *)self + 48;
    g4_std::string::construct_copy(&v26, &v24);
    v27 = v25;
    if ( (uint8_t)glwebtools::JsonReader::IsValid(a2) != 0
      && (uint8_t)glwebtools::JsonReader::isObject(a2) != 0
      && glwebtools::Json::Value::isMember(a2, (char **)&v26) )
    {
      v10 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(a2, (const char **)&v26);
      glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v28, v10);
      v11 = v27;
      if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v28) != 0 )
      {
        v13 = (glwebtools::Self *)glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v28, &v19);
        if ( glwebtools::IsOperationSuccess(v13) )
        {
          v12 = v19;
          v11[6] = 1;
          *(uint32_t *)v11 = v12;
        }
        else
        {
          v2 = (int)(uintptr_t)(v13);
        }
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v28);
    }
    v6 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v24 - 12);
    if ( (uint32_t *)(v24 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    return (glwebtools::Self *)v2;
  }
  return v15;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::Construct  (binary VA: 0x1517eb0)
// Original: iap::AndroidBilling::AndroidBilling
// ----------------------------------------------------------------------------
iap::AndroidBilling::Self * iap::AndroidBilling::Construct(iap::AndroidBilling::Self *self)
{
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20963A8);
  glwebtools::GlWebTools::Construct((iap::AndroidBilling::Self *)((char *)self + 8));
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_2096378);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 34) = 0;
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 42) = 0;
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 50) = 0;
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 18) = 1;
  *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)((char *)self + 56);
  *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)((char *)self + 56);
  *((uint8_t *)self + 76) = 0;
  *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)((char *)self + 64);
  *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)((char *)self + 64);
  return (iap::AndroidBilling::Self *)((char *)self + 64);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::HasDetectableHack  (binary VA: 0x1517fc0)
// Original: iap::AndroidBilling::HasDetectableHack
// ----------------------------------------------------------------------------
int iap::AndroidBilling::HasDetectableHack()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::GetRequest  (binary VA: 0x1517fd0)
// Original: iap::AndroidBilling::GetRequest
// ----------------------------------------------------------------------------
int iap::AndroidBilling::GetRequest(iap::AndroidBilling::Self *self, unsigned int a2)
{
  int result;
  uint32_t *v3;

  result = 0;
  v3 = *((uint32_t **)self + 14);
  if ( v3 != (uint32_t *)((char *)self + 56) )
  {
    do
    {
      if ( G4_VCALL<int>(v3[2], 8) == a2 )
        return v3[2];
      v3 = (uint32_t *)*v3;
    }
    while ( v3 != (uint32_t *)((char *)self + 56) );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::CancelRequest  (binary VA: 0x1518020)
// Original: iap::AndroidBilling::CancelRequest
// ----------------------------------------------------------------------------
int iap::AndroidBilling::CancelRequest(iap::AndroidBilling::Self *self, unsigned int a2)
{
  char v2;
  int result;
  int Request;

  v2 = G4_VCALL<int>(self, 16);
  result = -2147483645;
  if ( v2 != 0 )
  {
    Request = iap::AndroidBilling::GetRequest(self, a2);
    if ( Request != 0 )
      return G4_VCALL<int>(Request, 32);
    else
      return -2147483646;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::GetRequest_ea1518080  (binary VA: 0x1518080)
// Original: iap::AndroidBilling::GetRequest
// ----------------------------------------------------------------------------
int iap::AndroidBilling::GetRequest_ea1518080(iap::AndroidBilling::Self *self, unsigned int a2)
{
  int result;
  uint32_t *v3;

  result = 0;
  v3 = *((uint32_t **)self + 14);
  if ( v3 != (uint32_t *)((char *)self + 56) )
  {
    do
    {
      if ( G4_VCALL<int>(v3[2], 8) == a2 )
        return v3[2];
      v3 = (uint32_t *)*v3;
    }
    while ( v3 != (uint32_t *)((char *)self + 56) );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::IsRunning  (binary VA: 0x15180d0)
// Original: iap::AndroidBilling::IsRunning
// ----------------------------------------------------------------------------
int iap::AndroidBilling::IsRunning(iap::AndroidBilling::Self *self, unsigned int a2)
{
  char v2;
  int v3;

  v2 = G4_VCALL<int>(self, 16);
  v3 = 0;
  if ( v2 != 0 && *((iap::AndroidBilling::Self **)self + 14) != (iap::AndroidBilling::Self *)((char *)self + 56) )
    LOBYTE(v3) = iap::AndroidBilling::GetRequest(self, a2) != 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestConfirmProductV1::StartRequest  (binary VA: 0x1518130)
// Original: iap::AndroidBilling::RequestConfirmProductV1::StartRequest
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestConfirmProductV1::StartRequest()
{
  iap::ItemManager::Self *Instance;
  iap::ItemManager::Self *v2;

  Instance = (iap::ItemManager::Self *)iap::ItemManager::getInstance(v2);
  return iap::ItemManager::requestItemList(Instance, (const char *)&unk_1B15112);
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestConfirmProductV1::ProcessResponse  (binary VA: 0x1518160)
// Original: iap::AndroidBilling::RequestConfirmProductV1::ProcessResponse
// ----------------------------------------------------------------------------
glwebtools::Self * iap::AndroidBilling::RequestConfirmProductV1::ProcessResponse(iap::AndroidBilling::RequestConfirmProductV1::Self *self)
{
  int Instance;
  glwebtools::Self *JsonString;
  int v3;
  uint32_t *v4;
  void *v5;
  typedef iap::ItemManager::Self *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[3];
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (49u + sizeof(_g4_t_v8)) > _g4_s1 ? (49u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v9)) > _g4_s2 ? (52u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v10)) > _g4_s3 ? (64u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 49u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 64u);

  v9[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  Instance = (int)(uintptr_t)(iap::ItemManager::getInstance(v7));
  JsonString = (glwebtools::Self *)iap::ItemManager::getJsonString(Instance, v9);
  if ( glwebtools::IsOperationSuccess(JsonString) )
  {
    g4_std::string::clear((char *)self + 72, 0, *(uint32_t *)(*((uint32_t *)self + 18) - 12), 0);
    sub_1937C90((char *)self + 72, v9);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "[confirm_product_v1] Could not get any item from android", (int)(uintptr_t)(&v8));
    g4_std::string::assign_str((char *)self + 24, &v10);
    v3 = v10;
    v4 = (uint32_t *)(v10 - 12);
    *((uint8_t *)self + 30) = 1;
    if ( v4 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v9[0] - 12);
  if ( (uint32_t *)(v9[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  return JsonString;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestConfirmProductV1::Update  (binary VA: 0x15182a0)
// Original: iap::AndroidBilling::RequestConfirmProductV1::Update
// ----------------------------------------------------------------------------
glwebtools::Self * iap::AndroidBilling::RequestConfirmProductV1::Update(iap::AndroidBilling::RequestConfirmProductV1::Self *self)
{
  glwebtools::Self *result;
  iap::ItemManager::Self *Instance;
  typedef iap::ItemManager::Self *_g4_t_v3;
  typedef uint16_t _g4_t_v4[3];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v4)) > _g4_s1 ? (26u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 26u);

  result = *((glwebtools::Self **)self + 22);
  if ( result != nullptr )
  {
    if ( result == (glwebtools::Self *)((char *)&dword_0 + 1) )
    {
      Instance = (iap::ItemManager::Self *)iap::ItemManager::getInstance(v3);
      iap::ItemManager::Update(Instance);
      result = (glwebtools::Self *)iap::ItemManager::getState(Instance);
      if ( result == (glwebtools::Self *)((char *)&dword_0 + 2) )
      {
        result = iap::AndroidBilling::RequestConfirmProductV1::ProcessResponse(self);
        *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(result);
        *((uint32_t *)self + 22) = result == nullptr ? 2 : -1;
      }
      else if ( result == (glwebtools::Self *)-1 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[1]), "[confirm_product v1] Item Manager error", (int)(uintptr_t)(v4));
        g4_std::string::assign_str((char *)self + 24, &v4[1]);
        result = *(glwebtools::Self **)&v4[1];
        *((uint8_t *)self + 30) = 1;
        if ( (uint32_t *)((char *)result - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)result - 1, 0xFFFFFFFF) <= 0 )
        {
          result = (g4_std::string::Rep::M_destroy((char *)result - 12), (glwebtools::Self *)0);
        }
        *((uint32_t *)self + 5) = 0x80000000;
        *((uint32_t *)self + 22) = -1;
      }
    }
  }
  else
  {
    result = (glwebtools::Self *)iap::AndroidBilling::RequestConfirmProductV1::StartRequest();
    if ( result != nullptr )
    {
      *((uint32_t *)self + 22) = -1;
      *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(result);
    }
    else
    {
      *((uint32_t *)self + 22) = 1;
    }
  }
  return result;
}



// ============================================================================
// Address:   0x15183d0 (size: 79 bytes)
// Symbol:    _ZN3iap14AndroidBilling14ResultABillingC2Ev
// Demangled: iap::AndroidBilling::ResultABilling::ResultABilling(void)
// ============================================================================
// Alternative name is '_ZN3iap14AndroidBilling14ResultABillingC1Ev'
iap::AndroidBilling::ResultABilling::Self *iap::AndroidBilling::ResultABilling::Construct(
        iap::AndroidBilling::ResultABilling::Self *self)
{
  iap::Result::Result((iap::Result::Self *)self);
  *((uint8_t *)self + 46) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096598);
  *((uint8_t *)self + 54) = 0;
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&dword_213B814);
  return (struct iap::AndroidBilling::ResultABilling::Self *)&dword_213B814;
}


// ============================================================================
// Address:   0x1518420 (size: 131 bytes)
// Symbol:    _ZN3iap14AndroidBilling25RequestAndroidBillingBaseC2Ejj
// Demangled: iap::AndroidBilling::RequestAndroidBillingBase::RequestAndroidBillingBase(unsigned int,unsigned int)
// ============================================================================
// Alternative name is '_ZN3iap14AndroidBilling25RequestAndroidBillingBaseC1Ejj'
iap::AndroidBilling::RequestAndroidBillingBase::Self *iap::AndroidBilling::RequestAndroidBillingBase::Construct(
        iap::AndroidBilling::RequestAndroidBillingBase::Self *self,
        unsigned int a2,
        unsigned int a3)
{
  iap::Request::Construct(self, a2, a3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20963E8);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
  iap::AndroidBilling::ResultABilling::Construct((iap::AndroidBilling::ResultABilling::Self *)((iap::AndroidBilling::RequestAndroidBillingBase::Self *)((char *)self + 16)));
  *((uint32_t *)self + 18) = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::GlWebTools::Construct((iap::AndroidBilling::RequestAndroidBillingBase::Self *)((char *)self + 76));
  return (iap::AndroidBilling::RequestAndroidBillingBase::Self *)(glwebtools::UrlConnection::Construct((iap::AndroidBilling::RequestAndroidBillingBase::Self *)((char *)self + 80)));
}


// ============================================================================
// Address:   0x15184b0 (size: 79 bytes)
// Symbol:    _ZN3iap14AndroidBilling27RequestReprocessTransactionC2Ejj
// Demangled: iap::AndroidBilling::RequestReprocessTransaction::RequestReprocessTransaction(unsigned int,unsigned int)
// ============================================================================
// Alternative name is '_ZN3iap14AndroidBilling27RequestReprocessTransactionC1Ejj'
void (**iap::AndroidBilling::RequestReprocessTransaction::RequestReprocessTransaction(
        iap::AndroidBilling::RequestReprocessTransaction::Self *self,
        unsigned int a2,
        unsigned int a3))(iap::AndroidBilling::RequestReprocessTransaction::Self * self)
{
  iap::AndroidBilling::RequestAndroidBillingBase::Construct((iap::AndroidBilling::RequestAndroidBillingBase::Self *)(self), a2, a3);
  *((uint8_t *)self + 88) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096568);
  return (void (**)(iap::AndroidBilling::RequestReprocessTransaction::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2096568));
}


// ============================================================================
// Address:   0x1518500 (size: 79 bytes)
// Symbol:    _ZN3iap14AndroidBilling17RequestBuyProductC2Ejj
// Demangled: iap::AndroidBilling::RequestBuyProduct::RequestBuyProduct(unsigned int,unsigned int)
// ============================================================================
// Alternative name is '_ZN3iap14AndroidBilling17RequestBuyProductC1Ejj'
void (**iap::AndroidBilling::RequestBuyProduct::RequestBuyProduct(
        iap::AndroidBilling::RequestBuyProduct::Self *self,
        unsigned int a2,
        unsigned int a3))(iap::AndroidBilling::RequestBuyProduct::Self * self)
{
  iap::AndroidBilling::RequestAndroidBillingBase::Construct((iap::AndroidBilling::RequestAndroidBillingBase::Self *)(self), a2, a3);
  *((uint8_t *)self + 88) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096528);
  return (void (**)(iap::AndroidBilling::RequestBuyProduct::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2096528));
}


// ============================================================================
// Address:   0x1518550 (size: 79 bytes)
// Symbol:    _ZN3iap14AndroidBilling24RequestFinishTransactionC2Ejj
// Demangled: iap::AndroidBilling::RequestFinishTransaction::RequestFinishTransaction(unsigned int,unsigned int)
// ============================================================================
// Alternative name is '_ZN3iap14AndroidBilling24RequestFinishTransactionC1Ejj'
void (**iap::AndroidBilling::RequestFinishTransaction::RequestFinishTransaction(
        iap::AndroidBilling::RequestFinishTransaction::Self *self,
        unsigned int a2,
        unsigned int a3))(iap::AndroidBilling::RequestFinishTransaction::Self * self)
{
  iap::AndroidBilling::RequestAndroidBillingBase::Construct((iap::AndroidBilling::RequestAndroidBillingBase::Self *)(self), a2, a3);
  *((uint8_t *)self + 88) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20964E8);
  return (void (**)(iap::AndroidBilling::RequestFinishTransaction::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20964E8));
}


// ============================================================================
// Address:   0x15185a0 (size: 86 bytes)
// Symbol:    _ZN3iap14AndroidBilling22RequestRestorePurchaseC2Ejj
// Demangled: iap::AndroidBilling::RequestRestorePurchase::RequestRestorePurchase(unsigned int,unsigned int)
// ============================================================================
// Alternative name is '_ZN3iap14AndroidBilling22RequestRestorePurchaseC1Ejj'
void (**iap::AndroidBilling::RequestRestorePurchase::RequestRestorePurchase(
        iap::AndroidBilling::RequestRestorePurchase::Self *self,
        unsigned int a2,
        unsigned int a3))(iap::AndroidBilling::RequestRestorePurchase::Self * self)
{
  iap::AndroidBilling::RequestAndroidBillingBase::Construct((iap::AndroidBilling::RequestAndroidBillingBase::Self *)(self), a2, a3);
  *((uint32_t *)self + 22) = 0;
  *((uint8_t *)self + 92) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096468);
  return (void (**)(iap::AndroidBilling::RequestRestorePurchase::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2096468));
}


// ============================================================================
// Address:   0x1518600 (size: 82 bytes)
// Symbol:    _ZN3iap14AndroidBilling23RequestConfirmProductV1C2Ejj
// Demangled: iap::AndroidBilling::RequestConfirmProductV1::RequestConfirmProductV1(unsigned int,unsigned int)
// ============================================================================
// Alternative name is '_ZN3iap14AndroidBilling23RequestConfirmProductV1C1Ejj'
void (**iap::AndroidBilling::RequestConfirmProductV1::RequestConfirmProductV1(
        iap::AndroidBilling::RequestConfirmProductV1::Self *self,
        unsigned int a2,
        unsigned int a3))(iap::AndroidBilling::RequestConfirmProductV1::Self * self)
{
  iap::AndroidBilling::RequestAndroidBillingBase::Construct((iap::AndroidBilling::RequestAndroidBillingBase::Self *)(self), a2, a3);
  *((uint32_t *)self + 22) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096428);
  return (void (**)(iap::AndroidBilling::RequestConfirmProductV1::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2096428));
}
// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestGetTransaction::Construct  (binary VA: 0x1518660)
// Original: iap::AndroidBilling::RequestGetTransaction::RequestGetTransaction
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestGetTransaction::Construct(iap::AndroidBilling::RequestGetTransaction::Self *self, unsigned int a2, unsigned int a3)
{
  iap::TransactionManager::Self *Instance;
  int v4;
  int v5;
  int v6;
  glwebtools::Json::Value::Self *Root;
  typedef iap::TransactionManager::Self *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint16_t _g4_t_v10[3];
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[20];
  typedef uint32_t _g4_t_v13[27];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (46u + sizeof(_g4_t_v10)) > _g4_s2 ? (46u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v11)) > _g4_s3 ? (52u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v12)) > _g4_s4 ? (68u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (88u + sizeof(_g4_t_v13)) > _g4_s5 ? (88u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 46u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 68u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 88u);

  iap::AndroidBilling::RequestAndroidBillingBase::Construct((iap::AndroidBilling::RequestAndroidBillingBase::Self *)(self), a2, a3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20964A8);
  iap::TransactionInfo::Construct((iap::TransactionInfo::Self *)v13);
  v13[0] = ((uint32_t)(uintptr_t)&off_2096688);
  v13[16] = (uint32_t)(uintptr_t)(&dword_213B814);
  v13[18] = (uint32_t)(uintptr_t)(&dword_213B814);
  v13[19] = (uint32_t)(uintptr_t)(&dword_213B814);
  v13[20] = (uint32_t)(uintptr_t)(&dword_213B814);
  v13[21] = (uint32_t)(uintptr_t)(&dword_213B814);
  v13[22] = (uint32_t)(uintptr_t)(&dword_213B814);
  Instance = (iap::TransactionManager::Self *)iap::TransactionManager::GetInstance(v8);
  v4 = iap::TransactionManager::PopTransaction(Instance, (iap::android_billing::TransactionInfo::Self *)v13);
  if ( v4 != 0 )
  {
    v9 = v4;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10[1]), "[get_transaction] Could not get transaction from queue", (int)(uintptr_t)(v10));
    g4_std::string::assign_str((char *)self + 24, &v10[1]);
    v5 = *(uint32_t *)&v10[1];
    *((uint8_t *)self + 30) = 1;
    v6 = v9;
    if ( (uint32_t *)(v5 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v5 - 12));
      v6 = v9;
    }
  }
  else
  {
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v12);
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v11), nullptr);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v11);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
    (*(void (**)(uint32_t *, uint8_t *))(v13[0] + 12))(v13, v12);
    glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)v12, (int)(uintptr_t)(self) + 72);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
    v6 = 0;
  }
  *((uint32_t *)self + 5) = v6;
  iap::android_billing::TransactionInfo::Destroy((iap::android_billing::TransactionInfo::Self *)v13);
}



// ============================================================================
// Address:   0x1518840 (size: 82 bytes)
// Symbol:    _ZN3iap14AndroidBilling23RequestLimitsValidationC2Ejj
// Demangled: iap::AndroidBilling::RequestLimitsValidation::RequestLimitsValidation(unsigned int,unsigned int)
// ============================================================================
// Alternative name is '_ZN3iap14AndroidBilling23RequestLimitsValidationC1Ejj'
void (**iap::AndroidBilling::RequestLimitsValidation::RequestLimitsValidation(
        iap::AndroidBilling::RequestLimitsValidation::Self *self,
        unsigned int a2,
        unsigned int a3))(iap::AndroidBilling::RequestLimitsValidation::Self * self)
{
  iap::AndroidBilling::RequestAndroidBillingBase::Construct((iap::AndroidBilling::RequestAndroidBillingBase::Self *)(self), a2, a3);
  *((uint32_t *)self + 23) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20965C8);
  return (void (**)(iap::AndroidBilling::RequestLimitsValidation::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20965C8));
}
// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RunRequest  (binary VA: 0x15188a0)
// Original: iap::AndroidBilling::RunRequest
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RunRequest(iap::AndroidBilling::Self *self, const char *a2, char *s, unsigned int a4, unsigned int *a5)
{
  char v5;
  int v6;
  unsigned int v7;
  int v8;
  unsigned int v10;
  size_t v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;

  v5 = G4_VCALL<int>(self, 16);
  v6 = -2147483645;
  if ( v5 == 0 )
    return v6;
  if ( a2 == nullptr )
    return -2147483646;
  if ( strcmp("confirm_product_v1", a2) == 0 )
  {
    v10 = *((uint32_t *)self + 18);
    *((uint32_t *)self + 18) = v10 + 1;
    v19 = v10;
    v8 = sub_4EBE70(0x5Cu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    iap::AndroidBilling::RequestConfirmProductV1::RequestConfirmProductV1(
      (iap::AndroidBilling::RequestConfirmProductV1::Self *)v8,
      v19,
      a4);
    if ( v8 == 0 )
      return -2147483643;
  }
  else if ( strcmp("restore_purchase", a2) == 0 )
  {
    v13 = *((uint32_t *)self + 18);
    *((uint32_t *)self + 18) = v13 + 1;
    v20 = v13;
    v8 = sub_4EBE70(0x60u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    iap::AndroidBilling::RequestRestorePurchase::RequestRestorePurchase(
      (iap::AndroidBilling::RequestRestorePurchase::Self *)v8,
      v20,
      a4);
    if ( v8 == 0 )
      return -2147483643;
  }
  else if ( strcmp("get_transaction", a2) == 0 )
  {
    v15 = *((uint32_t *)self + 18);
    *((uint32_t *)self + 18) = v15 + 1;
    v22 = v15;
    v8 = sub_4EBE70(0x58u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    iap::AndroidBilling::RequestGetTransaction::Construct(
      (iap::AndroidBilling::RequestGetTransaction::Self *)v8,
      v22,
      a4);
    if ( v8 == 0 )
      return -2147483643;
  }
  else if ( strcmp("finish_transaction", a2) == 0 )
  {
    v16 = *((uint32_t *)self + 18);
    *((uint32_t *)self + 18) = v16 + 1;
    v23 = v16;
    v8 = sub_4EBE70(0x5Cu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    iap::AndroidBilling::RequestFinishTransaction::RequestFinishTransaction(
      (iap::AndroidBilling::RequestFinishTransaction::Self *)v8,
      v23,
      a4);
    if ( v8 == 0 )
      return -2147483643;
  }
  else if ( strcmp("buy_product", a2) == 0 )
  {
    v14 = *((uint32_t *)self + 18);
    *((uint32_t *)self + 18) = v14 + 1;
    v21 = v14;
    v8 = sub_4EBE70(0x5Cu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    iap::AndroidBilling::RequestBuyProduct::RequestBuyProduct((iap::AndroidBilling::RequestBuyProduct::Self *)v8, v21, a4);
    if ( v8 == 0 )
      return -2147483643;
  }
  else if ( strcmp("reprocess_transaction", a2) == 0 )
  {
    v17 = *((uint32_t *)self + 18);
    *((uint32_t *)self + 18) = v17 + 1;
    v24 = v17;
    v8 = sub_4EBE70(0x5Cu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    iap::AndroidBilling::RequestReprocessTransaction::RequestReprocessTransaction(
      (iap::AndroidBilling::RequestReprocessTransaction::Self *)v8,
      v24,
      a4);
    if ( v8 == 0 )
      return -2147483643;
  }
  else
  {
    v6 = -2147483646;
    if ( strcmp("check_plimit", a2) != 0 )
      return v6;
    v7 = *((uint32_t *)self + 18);
    *((uint32_t *)self + 18) = v7 + 1;
    v18 = v7;
    v8 = sub_4EBE70(0x60u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    iap::AndroidBilling::RequestLimitsValidation::RequestLimitsValidation(
      (iap::AndroidBilling::RequestLimitsValidation::Self *)v8,
      v18,
      a4);
    glwebtools::GlWebTools::opAssign((glwebtools::GlWebTools::Self *)(v8 + 76), (iap::AndroidBilling::Self *)((char *)self + 8));
    if ( v8 == 0 )
      return -2147483643;
  }
  *a5 = G4_VCALL<int>(v8, 8);
  if ( s != nullptr )
  {
    v11 = strlen(s);
    g4_std_compat::string_assign(v8 + 12, s, v11);
  }
  v12 = sub_4EBE70(0xCu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v12 != -8 )
    *(uint32_t *)(v12 + 8) = v8;
  sub_1901920(v12, (char *)self + 56);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestLimitsValidation::ProcessLimitsReached  (binary VA: 0x1518cd0)
// Original: iap::AndroidBilling::RequestLimitsValidation::ProcessLimitsReached
// ----------------------------------------------------------------------------
unsigned int iap::AndroidBilling::RequestLimitsValidation::ProcessLimitsReached(int a1, int a2)
{
  int v2;
  glwebtools::Json::Value::Self *Root;
  void *v4;
  void *v5;
  void *v6;
  int v8;
  typedef int _g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[4];
  typedef int _g4_t_v13[4];
  typedef int _g4_t_v14[4];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char _g4_t_v18[16];
  typedef uint8_t _g4_t_v19[16];
  typedef uint8_t _g4_t_v20[16];
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[20];
  typedef uint32_t _g4_t_v26[12];
  typedef uint8_t _g4_t_v27[4];
  typedef uint8_t _g4_t_v28[4];
  typedef uint8_t _g4_t_v29[4];
  typedef int _g4_t_v30;
  typedef int *_g4_t_v31;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v11)) > _g4_s2 ? (27u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v12)) > _g4_s3 ? (32u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v13)) > _g4_s4 ? (48u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v14)) > _g4_s5 ? (64u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v15)) > _g4_s6 ? (80u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v16)) > _g4_s7 ? (84u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v17)) > _g4_s8 ? (88u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v18)) > _g4_s9 ? (92u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v19)) > _g4_s10 ? (108u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (124u + sizeof(_g4_t_v20)) > _g4_s11 ? (124u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (140u + sizeof(_g4_t_v21)) > _g4_s12 ? (140u + sizeof(_g4_t_v21)) : _g4_s12,
    _g4_s14 = (156u + sizeof(_g4_t_v22)) > _g4_s13 ? (156u + sizeof(_g4_t_v22)) : _g4_s13,
    _g4_s15 = (172u + sizeof(_g4_t_v23)) > _g4_s14 ? (172u + sizeof(_g4_t_v23)) : _g4_s14,
    _g4_s16 = (188u + sizeof(_g4_t_v24)) > _g4_s15 ? (188u + sizeof(_g4_t_v24)) : _g4_s15,
    _g4_s17 = (204u + sizeof(_g4_t_v25)) > _g4_s16 ? (204u + sizeof(_g4_t_v25)) : _g4_s16,
    _g4_s18 = (224u + sizeof(_g4_t_v26)) > _g4_s17 ? (224u + sizeof(_g4_t_v26)) : _g4_s17,
    _g4_s19 = (272u + sizeof(_g4_t_v27)) > _g4_s18 ? (272u + sizeof(_g4_t_v27)) : _g4_s18,
    _g4_s20 = (276u + sizeof(_g4_t_v28)) > _g4_s19 ? (276u + sizeof(_g4_t_v28)) : _g4_s19,
    _g4_s21 = (280u + sizeof(_g4_t_v29)) > _g4_s20 ? (280u + sizeof(_g4_t_v29)) : _g4_s20,
    _g4_s22 = (284u + sizeof(_g4_t_v30)) > _g4_s21 ? (284u + sizeof(_g4_t_v30)) : _g4_s21,
    _g4_s23 = (296u + sizeof(_g4_t_v31)) > _g4_s22 ? (296u + sizeof(_g4_t_v31)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 27u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 84u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 92u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 108u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 124u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 140u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 156u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 172u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 188u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 204u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 224u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 272u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 276u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 280u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 284u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 296u);

  v31 = &a1;
  v2 = a2;
  v9 = a1;
  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v18);
  v10 = glwebtools::JsonReader::parse((glwebtools::Json::Value::Self *)v18, v2);
  if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v10) )
  {
    v12[0] = (int)(uintptr_t)(&dword_213B814);
    v13[0] = (int)(uintptr_t)(&dword_213B814);
    v14[0] = (int)(uintptr_t)(&dword_213B814);
    glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v19, (glwebtools::Json::Value::Self *)v18, "message");
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v19, (int)(uintptr_t)(v13));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v19);
    glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v20, (glwebtools::Json::Value::Self *)v18, "code_str");
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v20, (int)(uintptr_t)(v12));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v20);
    glwebtools::JsonReader::opIndex(
      (glwebtools::JsonReader::Self *)v21,
      (glwebtools::Json::Value::Self *)v18,
      "next_transaction_time");
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v21, (int)(uintptr_t)(v14));
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v21);
    glwebtools::JsonReader::opIndex(
      (glwebtools::JsonReader::Self *)v22,
      (glwebtools::Json::Value::Self *)v18,
      "seconds_before_next_transaction");
    glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v22, &v16);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v22);
    glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v23, (glwebtools::Json::Value::Self *)v18, "code");
    glwebtools::JsonReader::read((glwebtools::JsonReader::Self *)v23, &v17);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v23);
    *(uint32_t *)(v9 + 20) = v17;
    iap::TransactionInfo::Construct((iap::TransactionInfo::Self *)v26);
    v26[11] = v17;
    g4_std::string::assign_str(v27, v12);
    g4_std::string::assign_str(v28, v13);
    g4_std::string::assign_str(v29, v14);
    v26[2] = -1;
    v30 = v16;
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v25);
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v24), nullptr);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v25);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v24);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v24);
    (*(void (**)(uint32_t *, uint8_t *))(v26[0] + 12))(v26, v25);
    glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)v25, v9 + 72);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v25);
    iap::TransactionInfo::Destroy((iap::TransactionInfo::Self *)v26);
    v4 = (void *)(v14[0] - 12);
    if ( (uint32_t *)(v14[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v5 = (void *)(v13[0] - 12);
    if ( (uint32_t *)(v13[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v12[0] - 12);
    if ( (uint32_t *)(v12[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "[check_plimit] Ecomm response failed to parse", (int)(uintptr_t)(&v11));
    g4_std::string::assign_str(v9 + 24, &v15);
    v8 = v15;
    *(uint8_t *)(v9 + 30) = 1;
    if ( (uint32_t *)(v8 - 12) == dword_213B808 )
    {
      v10 = 0x80001006;
    }
    else
    {
      v10 = 0x80001006;
      if ( __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)(v8 - 12));
    }
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v18);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestLimitsValidation::ProcessResponse  (binary VA: 0x1519110)
// Original: iap::AndroidBilling::RequestLimitsValidation::ProcessResponse
// ----------------------------------------------------------------------------
unsigned int iap::AndroidBilling::RequestLimitsValidation::ProcessResponse(iap::AndroidBilling::RequestLimitsValidation::Self *self)
{
  iap::AndroidBilling::RequestLimitsValidation::Self *v1;
  char *v2;
  size_t v3;
  int v4;
  int v5;
  void *v6;
  int v8;
  void *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef unsigned int _g4_t_LastError;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[4];
  typedef void *_g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t _g4_t_v29[5];
  typedef char *_g4_t_v30;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v14)) > _g4_s4 ? (16u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v15)) > _g4_s5 ? (20u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v16)) > _g4_s6 ? (24u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_LastError)) > _g4_s7 ? (24u + sizeof(_g4_t_LastError)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v18)) > _g4_s8 ? (28u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v19)) > _g4_s9 ? (32u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v20)) > _g4_s10 ? (36u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v21)) > _g4_s11 ? (40u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v22)) > _g4_s12 ? (44u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v23)) > _g4_s13 ? (60u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v24)) > _g4_s14 ? (64u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v25)) > _g4_s15 ? (68u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v26)) > _g4_s16 ? (72u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v27)) > _g4_s17 ? (76u + sizeof(_g4_t_v27)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v28)) > _g4_s18 ? (80u + sizeof(_g4_t_v28)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v29)) > _g4_s19 ? (84u + sizeof(_g4_t_v29)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v30)) > _g4_s20 ? (104u + sizeof(_g4_t_v30)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_LastError &LastError = *reinterpret_cast<_g4_t_LastError *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 104u);

  v29[4] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "[", (int)(uintptr_t)(&v20) + 1);
  v2 = (char *)G4_VCALL<int>(v1, 36, v10, v11, v12, v13, v14, v15, v16, v18, v19, v20, v21, v22[0], v22[1], v22[2], v22[3], v23, v24, v25, v26, v27, v28, v29[0], v29[1], v29[2], v29[3]);
  v3 = strlen(v2);
  g4_std::string::append((int)(uintptr_t)(v22), v2, v3);
  g4_std::string::append((int)(uintptr_t)(v22), "]", 1u);
  if ( (uint8_t)glwebtools::UrlConnection::IsError((iap::AndroidBilling::RequestLimitsValidation::Self *)((char *)v1 + 80)) != 0 )
  {
    g4_std::string::construct_copy(&v28, v22);
    g4_std::string::append((int)(uintptr_t)(&v28), " Connection failed", 0x12u);
    g4_std::string::assign_str((char *)v1 + 24, &v28);
    v5 = v28;
    *((uint8_t *)v1 + 30) = 1;
    if ( (uint32_t *)(v5 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    {
      v30 = (char *)&v21 + 2;
      g4_std::string::Rep::M_destroy((void *)(v5 - 12));
    }
    LastError = glwebtools::UrlConnection::GetLastError((iap::AndroidBilling::RequestLimitsValidation::Self *)((char *)v1 + 80));
    goto LABEL_8;
  }
  glwebtools::UrlConnection::GetUrlResponse((glwebtools::UrlConnection::Self *)v29, (int)(uintptr_t)(v1) + 80);
  if ( (uint8_t)glwebtools::UrlResponse::IsHandleValid((glwebtools::UrlResponse::Self *)v29) == 0 )
  {
    g4_std::string::construct_copy(&v27, v22);
    g4_std::string::append((int)(uintptr_t)(&v27), " Could not get response", 0x17u);
    g4_std::string::assign_str((char *)v1 + 24, &v27);
    v4 = v27;
    *((uint8_t *)v1 + 30) = 1;
    if ( (uint32_t *)(v4 - 12) == dword_213B808 )
    {
      LastError = 0x80000000;
    }
    else
    {
      LastError = 0x80000000;
      if ( __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
      {
        v30 = (char *)&v21 + 1;
        g4_std::string::Rep::M_destroy((void *)(v4 - 12));
      }
    }
    goto LABEL_5;
  }
  if ( glwebtools::UrlResponse::GetResponseCode((glwebtools::UrlResponse::Self *)v29) == 200 )
  {
    sub_1937C90((char *)v1 + 72, (char *)v1 + 12);
    LastError = 0;
LABEL_5:
    glwebtools::UrlResponse::Destroy((glwebtools::UrlResponse::Self *)v29);
LABEL_8:
    glwebtools::UrlConnection::Release((iap::AndroidBilling::RequestLimitsValidation::Self *)((char *)v1 + 80));
    *((uint32_t *)v1 + 5) = LastError;
    goto LABEL_9;
  }
  if ( glwebtools::UrlResponse::GetResponseCode((glwebtools::UrlResponse::Self *)v29) != 429 )
  {
    g4_std::string::construct_copy(&v26, v22);
    g4_std::string::append((int)(uintptr_t)(&v26), "Http request failed ", 0x14u);
    g4_std::string::assign_str((char *)v1 + 24, &v26);
    v8 = v26;
    *((uint8_t *)v1 + 30) = 1;
    if ( (uint32_t *)(v8 - 12) == dword_213B808 )
    {
      LastError = 0x80000006;
    }
    else
    {
      LastError = 0x80000006;
      if ( __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
      {
        v30 = (char *)&v21;
        g4_std::string::Rep::M_destroy((void *)(v8 - 12));
      }
    }
    goto LABEL_5;
  }
  v23 = nullptr;
  v24 = 0;
  glwebtools::UrlResponse::GetData((glwebtools::UrlResponse::Self *)v29, &v23, &v24);
  sub_193A970((int)(uintptr_t)(&v25), v23, v24, (int)(uintptr_t)(&v20) + 2);
  LastError = iap::AndroidBilling::RequestLimitsValidation::ProcessLimitsReached((int)(uintptr_t)(v1), (int)(uintptr_t)(&v25));
  v9 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    v30 = (char *)&v20 + 3;
    g4_std::string::Rep::M_destroy(v9);
  }
  glwebtools::UrlResponse::Destroy((glwebtools::UrlResponse::Self *)v29);
LABEL_9:
  v6 = (void *)(v22[0] - 12);
  if ( (uint32_t *)(v22[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v30 = (char *)&v21 + 3;
    g4_std::string::Rep::M_destroy(v6);
  }
  return LastError;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestLimitsValidation::ProcessConnectionError  (binary VA: 0x15194e0)
// Original: iap::AndroidBilling::RequestLimitsValidation::ProcessConnectionError
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestLimitsValidation::ProcessConnectionError(int a1, int a2, int a3)
{
  const glwebtools::Json::Value::Self *v3;
  void *v4;
  void *v5;
  glwebtools::Self *v6;
  void *v7;
  void *v8;
  glwebtools::Self *v9;
  void *v10;
  void *v11;
  iap::IAPLog::Self *Instance;
  void *v13;
  glwebtools::Json::Value::Self *v14;
  glwebtools::Self *v15;
  void *v16;
  void *v17;
  int v18;
  void *v19;
  void *v20;
  void *v21;
  glwebtools::Json::Value::Self *v23;
  glwebtools::Json::Value::Self *v24;
  glwebtools::Json::Value::Self *v25;
  glwebtools::Json::Value::Self *v26;
  glwebtools::Json::Value::Self *v27;
  glwebtools::Json::Value::Self *v28;
  glwebtools::Json::Value::Self *v29;
  glwebtools::Json::Value::Self *v30;
  glwebtools::Json::Value::Self *Root;
  typedef iap::IAPLog::Self *_g4_t_v32;
  typedef glwebtools::Json::Value::Self *_g4_t_v33;
  typedef glwebtools::Json::Value::Self *_g4_t_v34;
  typedef glwebtools::Json::Value::Self *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  typedef char _g4_t_v45;
  typedef char _g4_t_v46;
  typedef char _g4_t_v47;
  typedef int _g4_t_v48[4];
  typedef uint32_t _g4_t_v49[4];
  typedef int _g4_t_v50[3];
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef int _g4_t_v60[4];
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63[4];
  typedef int _g4_t_v64[2];
  typedef char _g4_t_v65[16];
  typedef uint8_t _g4_t_v66[16];
  typedef uint8_t _g4_t_v67[16];
  typedef uint8_t _g4_t_v68[16];
  typedef uint8_t _g4_t_v69[16];
  typedef uint8_t _g4_t_v70[16];
  typedef uint8_t _g4_t_v71[20];
  typedef uint8_t _g4_t_v72[20];
  typedef uint8_t _g4_t_v73[20];
  typedef uint32_t _g4_t_v74[5];
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef char _g4_t_v77[16];
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int *_g4_t_v81;
  typedef char *_g4_t_v82;
  enum : size_t {
    _g4_s0 = 592u,
    _g4_s1 = (12u + sizeof(_g4_t_v32)) > _g4_s0 ? (12u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v33)) > _g4_s1 ? (32u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v34)) > _g4_s2 ? (32u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v35)) > _g4_s3 ? (32u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v36)) > _g4_s4 ? (44u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v37)) > _g4_s5 ? (48u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v38)) > _g4_s6 ? (56u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v39)) > _g4_s7 ? (56u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v40)) > _g4_s8 ? (56u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (73u + sizeof(_g4_t_v41)) > _g4_s9 ? (73u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v42)) > _g4_s10 ? (76u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (87u + sizeof(_g4_t_v43)) > _g4_s11 ? (87u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v44)) > _g4_s12 ? (88u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (89u + sizeof(_g4_t_v45)) > _g4_s13 ? (89u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (90u + sizeof(_g4_t_v46)) > _g4_s14 ? (90u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (91u + sizeof(_g4_t_v47)) > _g4_s15 ? (91u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v48)) > _g4_s16 ? (92u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v49)) > _g4_s17 ? (108u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v50)) > _g4_s18 ? (124u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v51)) > _g4_s19 ? (136u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v52)) > _g4_s20 ? (140u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (144u + sizeof(_g4_t_v53)) > _g4_s21 ? (144u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (156u + sizeof(_g4_t_v54)) > _g4_s22 ? (156u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (160u + sizeof(_g4_t_v55)) > _g4_s23 ? (160u + sizeof(_g4_t_v55)) : _g4_s23,
    _g4_s25 = (172u + sizeof(_g4_t_v56)) > _g4_s24 ? (172u + sizeof(_g4_t_v56)) : _g4_s24,
    _g4_s26 = (176u + sizeof(_g4_t_v57)) > _g4_s25 ? (176u + sizeof(_g4_t_v57)) : _g4_s25,
    _g4_s27 = (188u + sizeof(_g4_t_v58)) > _g4_s26 ? (188u + sizeof(_g4_t_v58)) : _g4_s26,
    _g4_s28 = (192u + sizeof(_g4_t_v59)) > _g4_s27 ? (192u + sizeof(_g4_t_v59)) : _g4_s27,
    _g4_s29 = (204u + sizeof(_g4_t_v60)) > _g4_s28 ? (204u + sizeof(_g4_t_v60)) : _g4_s28,
    _g4_s30 = (220u + sizeof(_g4_t_v61)) > _g4_s29 ? (220u + sizeof(_g4_t_v61)) : _g4_s29,
    _g4_s31 = (224u + sizeof(_g4_t_v62)) > _g4_s30 ? (224u + sizeof(_g4_t_v62)) : _g4_s30,
    _g4_s32 = (236u + sizeof(_g4_t_v63)) > _g4_s31 ? (236u + sizeof(_g4_t_v63)) : _g4_s31,
    _g4_s33 = (252u + sizeof(_g4_t_v64)) > _g4_s32 ? (252u + sizeof(_g4_t_v64)) : _g4_s32,
    _g4_s34 = (260u + sizeof(_g4_t_v65)) > _g4_s33 ? (260u + sizeof(_g4_t_v65)) : _g4_s33,
    _g4_s35 = (276u + sizeof(_g4_t_v66)) > _g4_s34 ? (276u + sizeof(_g4_t_v66)) : _g4_s34,
    _g4_s36 = (292u + sizeof(_g4_t_v67)) > _g4_s35 ? (292u + sizeof(_g4_t_v67)) : _g4_s35,
    _g4_s37 = (308u + sizeof(_g4_t_v68)) > _g4_s36 ? (308u + sizeof(_g4_t_v68)) : _g4_s36,
    _g4_s38 = (324u + sizeof(_g4_t_v69)) > _g4_s37 ? (324u + sizeof(_g4_t_v69)) : _g4_s37,
    _g4_s39 = (340u + sizeof(_g4_t_v70)) > _g4_s38 ? (340u + sizeof(_g4_t_v70)) : _g4_s38,
    _g4_s40 = (356u + sizeof(_g4_t_v71)) > _g4_s39 ? (356u + sizeof(_g4_t_v71)) : _g4_s39,
    _g4_s41 = (376u + sizeof(_g4_t_v72)) > _g4_s40 ? (376u + sizeof(_g4_t_v72)) : _g4_s40,
    _g4_s42 = (396u + sizeof(_g4_t_v73)) > _g4_s41 ? (396u + sizeof(_g4_t_v73)) : _g4_s41,
    _g4_s43 = (416u + sizeof(_g4_t_v74)) > _g4_s42 ? (416u + sizeof(_g4_t_v74)) : _g4_s42,
    _g4_s44 = (436u + sizeof(_g4_t_v75)) > _g4_s43 ? (436u + sizeof(_g4_t_v75)) : _g4_s43,
    _g4_s45 = (460u + sizeof(_g4_t_v76)) > _g4_s44 ? (460u + sizeof(_g4_t_v76)) : _g4_s44,
    _g4_s46 = (464u + sizeof(_g4_t_v77)) > _g4_s45 ? (464u + sizeof(_g4_t_v77)) : _g4_s45,
    _g4_s47 = (480u + sizeof(_g4_t_v78)) > _g4_s46 ? (480u + sizeof(_g4_t_v78)) : _g4_s46,
    _g4_s48 = (484u + sizeof(_g4_t_v79)) > _g4_s47 ? (484u + sizeof(_g4_t_v79)) : _g4_s47,
    _g4_s49 = (488u + sizeof(_g4_t_v80)) > _g4_s48 ? (488u + sizeof(_g4_t_v80)) : _g4_s48,
    _g4_s50 = (500u + sizeof(_g4_t_v81)) > _g4_s49 ? (500u + sizeof(_g4_t_v81)) : _g4_s49,
    _g4_s51 = (504u + sizeof(_g4_t_v82)) > _g4_s50 ? (504u + sizeof(_g4_t_v82)) : _g4_s50
  };
  alignas(16) uint8_t _g4_sf[_g4_s51];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 73u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 87u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 89u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 90u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 91u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 92u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 124u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 136u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 140u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 144u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 156u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 160u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 172u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 176u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 188u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 192u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 204u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 220u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 224u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 236u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 252u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 260u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 276u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 292u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 308u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 324u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 340u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 356u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 376u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 396u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 416u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 436u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 460u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 464u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 480u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 484u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 488u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 500u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 504u);

  v81 = &a1;
  v37 = a1;
  v36 = a3;
  glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v65, a1 + 12);
  glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v66, (glwebtools::Json::Value::Self *)v65, "item");
  iap::TransactionInfo::Construct((iap::TransactionInfo::Self *)v74);
  v78 = 0;
  v74[0] = ((uint32_t)(uintptr_t)&off_20960C8);
  v79 = 0;
  v80 = 0;
  if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v65) != 0 )
    (*(void (**)(uint32_t *, char *))(v74[0] + 8))(v74, v65);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v48), (char *)&unk_1B15112, (int)(uintptr_t)(&v41));
  v49[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "id", (int)(uintptr_t)(&v42));
  v53 = v49;
  g4_std::string::construct_copy(&v61, &v52);
  v62 = (int)(uintptr_t)(v53);
  if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v66) != 0
    && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v66) != 0
    && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v66, (char **)&v61) )
  {
    v3 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                            (glwebtools::Json::Value::Self *)v66,
                                            (const char **)&v61);
    glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v73, v3);
    glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v73, v62);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v73);
  }
  v4 = (void *)(v61 - 12);
  if ( (uint32_t *)(v61 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v52 - 12);
  if ( (uint32_t *)(v52 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v71);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "error", (int)(uintptr_t)(&v42) + 1);
  v55 = &a2;
  g4_std::string::construct_copy(v60, &v54);
  v38 = v55;
  v60[1] = (int)(uintptr_t)(v55);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v71) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v67), (char *)&loc_6 + 1);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v71);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v67);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v67);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v73);
  v6 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v73, *v38);
  if ( glwebtools::IsOperationSuccess(v6) )
  {
    v35 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v73);
    v29 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v71);
    v30 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v29, (char **)v60);
    glwebtools::Json::Value::opAssign(v30, v35);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v73);
  v7 = (void *)(v60[0] - 12);
  if ( (uint32_t *)(v60[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v60[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v54 - 12);
  if ( (uint32_t *)(v54 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "error_string", (int)(uintptr_t)(&v42) + 2);
  v57 = v36;
  g4_std::string::construct_copy(v63, &v56);
  v39 = v57;
  v63[1] = v57;
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v71) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v69), (char *)&loc_6 + 1);
    v28 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v71);
    glwebtools::Json::Value::opAssign(v28, (const glwebtools::Json::Value::Self *)v69);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v69);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v73);
  v9 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v73, v39);
  if ( glwebtools::IsOperationSuccess(v9) )
  {
    v34 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v73);
    v26 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v71);
    v27 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v26, (char **)v63);
    glwebtools::Json::Value::opAssign(v27, v34);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v73);
  v10 = (void *)(v63[0] - 12);
  if ( (uint32_t *)(v63[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v63[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  v11 = (void *)(v56 - 12);
  if ( (uint32_t *)(v56 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)v71, (int)(uintptr_t)(v48));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v50), (char *)&unk_1B15112, (int)(uintptr_t)(&v41) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "check_plimit", (int)(uintptr_t)(&v41) + 2);
  Instance = (iap::IAPLog::Self *)iap::IAPLog::GetInstance(v32);
  iap::IAPLog::appendLogRsponseData(Instance, (int)(uintptr_t)(v50), (int)(uintptr_t)(v48), (int)(uintptr_t)(&v51));
  v13 = (void *)(v51 - 12);
  if ( (uint32_t *)(v51 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  ++v75;
  v76 = a2;
  g4_std::string::assign_str(v77, v36);
  v74[2] = -3;
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v72);
  glwebtools::Json::Value::Construct((int)(uintptr_t)(v68), nullptr);
  v14 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v72);
  glwebtools::Json::Value::opAssign(v14, (const glwebtools::Json::Value::Self *)v68);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v68);
  (*(void (**)(uint32_t *, uint8_t *))(v74[0] + 12))(v74, v72);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "item_id", (int)(uintptr_t)(&v42) + 3);
  v59 = v49;
  g4_std::string::construct_copy(v64, &v58);
  v40 = (int)(uintptr_t)(v59);
  v64[1] = (int)(uintptr_t)(v59);
  if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v72) == 0 )
  {
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v70), (char *)&loc_6 + 1);
    v25 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v72);
    glwebtools::Json::Value::opAssign(v25, (const glwebtools::Json::Value::Self *)v70);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v70);
  }
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v73);
  v15 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v73, v40);
  if ( glwebtools::IsOperationSuccess(v15) )
  {
    v33 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v73);
    v23 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v72);
    v24 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v23, (char **)v64);
    glwebtools::Json::Value::opAssign(v24, v33);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v73);
  v16 = (void *)(v64[0] - 12);
  if ( (uint32_t *)(v64[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v64[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v82 = &v43;
    g4_std::string::Rep::M_destroy(v16);
  }
  v17 = (void *)(v58 - 12);
  if ( (uint32_t *)(v58 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
  {
    v82 = &v44;
    g4_std::string::Rep::M_destroy(v17);
  }
  glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)v72, v37 + 72);
  v18 = a2;
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v72);
  v19 = (void *)(v50[0] - 12);
  if ( (uint32_t *)(v50[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v50[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v82 = &v45;
    g4_std::string::Rep::M_destroy(v19);
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v71);
  v20 = (void *)(v49[0] - 12);
  if ( (uint32_t *)(v49[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v49[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v82 = &v46;
    g4_std::string::Rep::M_destroy(v20);
  }
  v21 = (void *)(v48[0] - 12);
  if ( (uint32_t *)(v48[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v48[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v82 = &v47;
    g4_std::string::Rep::M_destroy(v21);
  }
  iap::TransactionInfoExtended::Destroy((iap::TransactionInfoExtended::Self *)v74);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v66);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v65);
  return v18;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestBuyProduct::Update  (binary VA: 0x1519ed0)
// Original: iap::AndroidBilling::RequestBuyProduct::Update
// ----------------------------------------------------------------------------
void iap::AndroidBilling::RequestBuyProduct::Update(iap::AndroidBilling::RequestBuyProduct::Self *self)
{
  iap::AndroidBilling::RequestBuyProduct::Self *v1;
  char *v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  char *v12;
  int v13;
  typedef char *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef glwebtools::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char _g4_t_v20[4];
  typedef uint8_t _g4_t_v21[16];
  typedef int (**_g4_t_v22)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *);
  typedef InAppBilling::Self *_g4_t_v23;
  typedef char _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef char _g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef char _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef char _g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef char _g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef char _g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef char _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  typedef glwebtools::Self *_g4_t_v42;
  typedef char *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef void *_g4_t_v47;
  typedef int *_g4_t_v48;
  typedef int *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef iap::AndroidBilling::RequestBuyProduct::Self **_g4_t_v51;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v18)) > _g4_s4 ? (16u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v19)) > _g4_s5 ? (28u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v20)) > _g4_s6 ? (32u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v21)) > _g4_s7 ? (48u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v22)) > _g4_s8 ? (64u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v23)) > _g4_s9 ? (68u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (74u + sizeof(_g4_t_v24)) > _g4_s10 ? (74u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v25)) > _g4_s11 ? (76u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (82u + sizeof(_g4_t_v26)) > _g4_s12 ? (82u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v27)) > _g4_s13 ? (84u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (90u + sizeof(_g4_t_v28)) > _g4_s14 ? (90u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v29)) > _g4_s15 ? (92u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (98u + sizeof(_g4_t_v30)) > _g4_s16 ? (98u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v31)) > _g4_s17 ? (100u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (106u + sizeof(_g4_t_v32)) > _g4_s18 ? (106u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v33)) > _g4_s19 ? (108u + sizeof(_g4_t_v33)) : _g4_s19,
    _g4_s21 = (114u + sizeof(_g4_t_v34)) > _g4_s20 ? (114u + sizeof(_g4_t_v34)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v35)) > _g4_s21 ? (116u + sizeof(_g4_t_v35)) : _g4_s21,
    _g4_s23 = (122u + sizeof(_g4_t_v36)) > _g4_s22 ? (122u + sizeof(_g4_t_v36)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v37)) > _g4_s23 ? (124u + sizeof(_g4_t_v37)) : _g4_s23,
    _g4_s25 = (130u + sizeof(_g4_t_v38)) > _g4_s24 ? (130u + sizeof(_g4_t_v38)) : _g4_s24,
    _g4_s26 = (138u + sizeof(_g4_t_v39)) > _g4_s25 ? (138u + sizeof(_g4_t_v39)) : _g4_s25,
    _g4_s27 = (146u + sizeof(_g4_t_v40)) > _g4_s26 ? (146u + sizeof(_g4_t_v40)) : _g4_s26,
    _g4_s28 = (154u + sizeof(_g4_t_v41)) > _g4_s27 ? (154u + sizeof(_g4_t_v41)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v42)) > _g4_s28 ? (156u + sizeof(_g4_t_v42)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v43)) > _g4_s29 ? (160u + sizeof(_g4_t_v43)) : _g4_s29,
    _g4_s31 = (164u + sizeof(_g4_t_v44)) > _g4_s30 ? (164u + sizeof(_g4_t_v44)) : _g4_s30,
    _g4_s32 = (168u + sizeof(_g4_t_v45)) > _g4_s31 ? (168u + sizeof(_g4_t_v45)) : _g4_s31,
    _g4_s33 = (172u + sizeof(_g4_t_v46)) > _g4_s32 ? (172u + sizeof(_g4_t_v46)) : _g4_s32,
    _g4_s34 = (176u + sizeof(_g4_t_v47)) > _g4_s33 ? (176u + sizeof(_g4_t_v47)) : _g4_s33,
    _g4_s35 = (180u + sizeof(_g4_t_v48)) > _g4_s34 ? (180u + sizeof(_g4_t_v48)) : _g4_s34,
    _g4_s36 = (184u + sizeof(_g4_t_v49)) > _g4_s35 ? (184u + sizeof(_g4_t_v49)) : _g4_s35,
    _g4_s37 = (188u + sizeof(_g4_t_v50)) > _g4_s36 ? (188u + sizeof(_g4_t_v50)) : _g4_s36,
    _g4_s38 = (200u + sizeof(_g4_t_v51)) > _g4_s37 ? (200u + sizeof(_g4_t_v51)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 68u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 74u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 82u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 84u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 90u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 98u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 106u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 108u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 114u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 116u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 122u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 124u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 130u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 138u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 146u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 154u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 156u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 160u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 164u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 168u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 172u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 176u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 180u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 184u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 188u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 200u);

  v51 = &self;
  v1 = self;
  if ( *((uint8_t *)self + 88) == 0 )
  {
    glwebtools::JsonReader::Construct((glwebtools::Json::Value::Self *)v20, (int)(uintptr_t)(self) + 12);
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v22 = (int (**)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096648);
    v38 = 0;
    v23 = (InAppBilling::Self *)&dword_213B814;
    v25 = &dword_213B814;
    v27 = &dword_213B814;
    v29 = &dword_213B814;
    v31 = &dword_213B814;
    v33 = &dword_213B814;
    v35 = &dword_213B814;
    v37 = &dword_213B814;
    v39 = 0;
    v40 = 0;
    v48 = &v46;
    v49 = &v46;
    v41 = 0;
    v42 = nullptr;
    v43 = nullptr;
    v44 = 0;
    v46 = 0;
    v47 = nullptr;
    v50 = 0;
    glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v21, (glwebtools::Json::Value::Self *)v20, "item");
    v16 = -2147483645;
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v21) != 0 )
      v16 = (*v22)((iap::iABAndroidItemV1::Self *)&v22, (const glwebtools::JsonReader::Self *)v21);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v21);
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v16) )
    {
      if ( v24 != 0 && *((uint32_t *)v23 - 3) != 0 )
      {
        InAppBilling_BuyItem(v23);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "[buy_product] Could not get billing info from data", (int)(uintptr_t)(&v18));
        g4_std::string::assign_str((char *)v1 + 24, &v19);
        v13 = v19;
        *((uint8_t *)v1 + 30) = 1;
        if ( (uint32_t *)(v13 - 12) == dword_213B808 )
        {
          v16 = -2147483646;
        }
        else
        {
          v16 = -2147483646;
          if ( __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy((void *)(v13 - 12));
        }
      }
    }
    *((uint32_t *)v1 + 5) = v16;
    *((uint8_t *)v1 + 88) = 1;
    v22 = (int (**)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096648);
    g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
      (int)(uintptr_t)(&v45),
      v47);
    v15 = v43;
    v17 = v42;
    if ( v43 != (char *)v42 )
    {
      v2 = (char *)v42;
      v14 = (char *)v42 + 4;
      do
      {
        v3 = *(uint32_t *)&v14[v2 - (char *)v17];
        if ( (uint32_t *)(v3 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v3 - 12));
        }
        v4 = (uint32_t *)(*(uint32_t *)v2 - 12);
        if ( v4 != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v2 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v4);
        }
        v2 += 8;
      }
      while ( v15 != v2 );
      v17 = v42;
    }
    if ( v17 != nullptr )
      opDelete(v17);
    v5 = v37 - 3;
    if ( v37 - 3 != dword_213B808 && __sync_fetch_and_add(v37 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v5);
    v6 = v35 - 3;
    if ( v35 - 3 != dword_213B808 && __sync_fetch_and_add(v35 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v6);
    v7 = v33 - 3;
    if ( v33 - 3 != dword_213B808 && __sync_fetch_and_add(v33 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v7);
    v8 = v31 - 3;
    if ( v31 - 3 != dword_213B808 && __sync_fetch_and_add(v31 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v8);
    v9 = v29 - 3;
    if ( v29 - 3 != dword_213B808 && __sync_fetch_and_add(v29 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v9);
    v10 = v27 - 3;
    if ( v27 - 3 != dword_213B808 && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v10);
    v11 = v25 - 3;
    if ( v25 - 3 != dword_213B808 && __sync_fetch_and_add(v25 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v11);
    v12 = (char *)v23 - 12;
    if ( (uint32_t *)((char *)v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v23 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v20);
  }
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestLimitsValidation::PrepareRequest  (binary VA: 0x151b070)
// Original: iap::AndroidBilling::RequestLimitsValidation::PrepareRequest
// ----------------------------------------------------------------------------
unsigned int iap::AndroidBilling::RequestLimitsValidation::PrepareRequest(iap::AndroidBilling::RequestLimitsValidation::Self *self, glwebtools::UrlRequest::Self *a2)
{
  int v2;
  char *v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  char *v13;
  void *v14;
  const glwebtools::Json::Value::Self *v16;
  void *v17;
  void *v18;
  const glwebtools::Json::Value::Self *v19;
  void *v20;
  void *v21;
  int v22;
  uint32_t *v23;
  void *v24;
  void *v25;
  void *v26;
  int v27;
  uint32_t *v28;
  void *v29;
  long double Price; // fst7
  size_t v31;
  size_t v32;
  const glwebtools::Json::Value::Self *v33;
  void *v34;
  void *v35;
  void *v36;
  char *v37;
  void *v38;
  const glwebtools::Json::Value::Self *v39;
  void *v40;
  void *v41;
  void *v42;
  char *v43;
  void *v44;
  const glwebtools::Json::Value::Self *v45;
  void *v46;
  void *v47;
  int v48;
  uint32_t *v49;
  void *v50;
  void *v51;
  typedef char *_g4_t_v52;
  typedef glwebtools::JsonReader::Iterator::Self *_g4_t_Currency;
  typedef unsigned int _g4_t_v54;
  typedef char *_g4_t_v55;
  typedef glwebtools::UrlRequest::Self *_g4_t_v56;
  typedef glwebtools::UrlRequest::Self *_g4_t_v57;
  typedef iap::AndroidBilling::RequestLimitsValidation::Self *_g4_t_v58;
  typedef glwebtools::UrlRequest::Self *_g4_t_v59;
  typedef uint8_t _g4_t_v60[31];
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65[4];
  typedef uint32_t _g4_t_v66[4];
  typedef uint32_t _g4_t_v67[4];
  typedef int _g4_t_v68[4];
  typedef int _g4_t_v69[4];
  typedef char *_g4_t_v70[4];
  typedef int _g4_t_v71[4];
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef uint32_t *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef uint32_t *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef char **_g4_t_v85;
  typedef int _g4_t_v86;
  typedef char **_g4_t_v87;
  typedef int _g4_t_v88;
  typedef int *_g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100[2];
  typedef uint8_t _g4_t_v101[8];
  typedef uint8_t _g4_t_v102[8];
  typedef char _g4_t_v103[8];
  typedef char _g4_t_v104[4];
  typedef uint8_t _g4_t_v105[16];
  typedef uint8_t _g4_t_v106[16];
  typedef uint8_t _g4_t_v107[16];
  typedef uint8_t _g4_t_v108[16];
  typedef uint8_t _g4_t_v109[16];
  typedef char _g4_t_v110[16];
  typedef char _g4_t_s[32];
  typedef int (**_g4_t_v112)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *);
  typedef char *_g4_t_v113;
  typedef char _g4_t_v114;
  typedef uint32_t *_g4_t_v115;
  typedef char _g4_t_v116;
  typedef uint32_t *_g4_t_v117;
  typedef char _g4_t_v118;
  typedef uint32_t *_g4_t_v119;
  typedef char _g4_t_v120;
  typedef uint32_t *_g4_t_v121;
  typedef char _g4_t_v122;
  typedef uint32_t *_g4_t_v123;
  typedef char _g4_t_v124;
  typedef uint32_t *_g4_t_v125;
  typedef char _g4_t_v126;
  typedef uint32_t *_g4_t_v127;
  typedef char _g4_t_v128;
  typedef char _g4_t_v129;
  typedef char _g4_t_v130;
  typedef char _g4_t_v131;
  typedef glwebtools::UrlRequest::Self *_g4_t_v132;
  typedef glwebtools::UrlRequest::Self *_g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef void *_g4_t_v137;
  typedef int *_g4_t_v138;
  typedef int *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef uint8_t _g4_t_v141[136];
  typedef uint32_t _g4_t_v142[40];
  enum : size_t {
    _g4_s0 = 1072u,
    _g4_s1 = (0u + sizeof(_g4_t_v52)) > _g4_s0 ? (0u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_Currency)) > _g4_s1 ? (0u + sizeof(_g4_t_Currency)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v54)) > _g4_s2 ? (4u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v55)) > _g4_s3 ? (8u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v56)) > _g4_s4 ? (12u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v57)) > _g4_s5 ? (12u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v58)) > _g4_s6 ? (16u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v59)) > _g4_s7 ? (16u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v60)) > _g4_s8 ? (24u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (55u + sizeof(_g4_t_v61)) > _g4_s9 ? (55u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v62)) > _g4_s10 ? (56u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v63)) > _g4_s11 ? (60u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v64)) > _g4_s12 ? (64u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v65)) > _g4_s13 ? (104u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (120u + sizeof(_g4_t_v66)) > _g4_s14 ? (120u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (136u + sizeof(_g4_t_v67)) > _g4_s15 ? (136u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (152u + sizeof(_g4_t_v68)) > _g4_s16 ? (152u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (168u + sizeof(_g4_t_v69)) > _g4_s17 ? (168u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (184u + sizeof(_g4_t_v70)) > _g4_s18 ? (184u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (200u + sizeof(_g4_t_v71)) > _g4_s19 ? (200u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (216u + sizeof(_g4_t_v72)) > _g4_s20 ? (216u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (220u + sizeof(_g4_t_v73)) > _g4_s21 ? (220u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (224u + sizeof(_g4_t_v74)) > _g4_s22 ? (224u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (228u + sizeof(_g4_t_v75)) > _g4_s23 ? (228u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (232u + sizeof(_g4_t_v76)) > _g4_s24 ? (232u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (236u + sizeof(_g4_t_v77)) > _g4_s25 ? (236u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (240u + sizeof(_g4_t_v78)) > _g4_s26 ? (240u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (244u + sizeof(_g4_t_v79)) > _g4_s27 ? (244u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (248u + sizeof(_g4_t_v80)) > _g4_s28 ? (248u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (252u + sizeof(_g4_t_v81)) > _g4_s29 ? (252u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (264u + sizeof(_g4_t_v82)) > _g4_s30 ? (264u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (268u + sizeof(_g4_t_v83)) > _g4_s31 ? (268u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (280u + sizeof(_g4_t_v84)) > _g4_s32 ? (280u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (284u + sizeof(_g4_t_v85)) > _g4_s33 ? (284u + sizeof(_g4_t_v85)) : _g4_s33,
    _g4_s35 = (296u + sizeof(_g4_t_v86)) > _g4_s34 ? (296u + sizeof(_g4_t_v86)) : _g4_s34,
    _g4_s36 = (300u + sizeof(_g4_t_v87)) > _g4_s35 ? (300u + sizeof(_g4_t_v87)) : _g4_s35,
    _g4_s37 = (312u + sizeof(_g4_t_v88)) > _g4_s36 ? (312u + sizeof(_g4_t_v88)) : _g4_s36,
    _g4_s38 = (316u + sizeof(_g4_t_v89)) > _g4_s37 ? (316u + sizeof(_g4_t_v89)) : _g4_s37,
    _g4_s39 = (328u + sizeof(_g4_t_v90)) > _g4_s38 ? (328u + sizeof(_g4_t_v90)) : _g4_s38,
    _g4_s40 = (332u + sizeof(_g4_t_v91)) > _g4_s39 ? (332u + sizeof(_g4_t_v91)) : _g4_s39,
    _g4_s41 = (344u + sizeof(_g4_t_v92)) > _g4_s40 ? (344u + sizeof(_g4_t_v92)) : _g4_s40,
    _g4_s42 = (348u + sizeof(_g4_t_v93)) > _g4_s41 ? (348u + sizeof(_g4_t_v93)) : _g4_s41,
    _g4_s43 = (360u + sizeof(_g4_t_v94)) > _g4_s42 ? (360u + sizeof(_g4_t_v94)) : _g4_s42,
    _g4_s44 = (364u + sizeof(_g4_t_v95)) > _g4_s43 ? (364u + sizeof(_g4_t_v95)) : _g4_s43,
    _g4_s45 = (376u + sizeof(_g4_t_v96)) > _g4_s44 ? (376u + sizeof(_g4_t_v96)) : _g4_s44,
    _g4_s46 = (380u + sizeof(_g4_t_v97)) > _g4_s45 ? (380u + sizeof(_g4_t_v97)) : _g4_s45,
    _g4_s47 = (392u + sizeof(_g4_t_v98)) > _g4_s46 ? (392u + sizeof(_g4_t_v98)) : _g4_s46,
    _g4_s48 = (396u + sizeof(_g4_t_v99)) > _g4_s47 ? (396u + sizeof(_g4_t_v99)) : _g4_s47,
    _g4_s49 = (408u + sizeof(_g4_t_v100)) > _g4_s48 ? (408u + sizeof(_g4_t_v100)) : _g4_s48,
    _g4_s50 = (416u + sizeof(_g4_t_v101)) > _g4_s49 ? (416u + sizeof(_g4_t_v101)) : _g4_s49,
    _g4_s51 = (424u + sizeof(_g4_t_v102)) > _g4_s50 ? (424u + sizeof(_g4_t_v102)) : _g4_s50,
    _g4_s52 = (432u + sizeof(_g4_t_v103)) > _g4_s51 ? (432u + sizeof(_g4_t_v103)) : _g4_s51,
    _g4_s53 = (440u + sizeof(_g4_t_v104)) > _g4_s52 ? (440u + sizeof(_g4_t_v104)) : _g4_s52,
    _g4_s54 = (456u + sizeof(_g4_t_v105)) > _g4_s53 ? (456u + sizeof(_g4_t_v105)) : _g4_s53,
    _g4_s55 = (472u + sizeof(_g4_t_v106)) > _g4_s54 ? (472u + sizeof(_g4_t_v106)) : _g4_s54,
    _g4_s56 = (488u + sizeof(_g4_t_v107)) > _g4_s55 ? (488u + sizeof(_g4_t_v107)) : _g4_s55,
    _g4_s57 = (504u + sizeof(_g4_t_v108)) > _g4_s56 ? (504u + sizeof(_g4_t_v108)) : _g4_s56,
    _g4_s58 = (520u + sizeof(_g4_t_v109)) > _g4_s57 ? (520u + sizeof(_g4_t_v109)) : _g4_s57,
    _g4_s59 = (536u + sizeof(_g4_t_v110)) > _g4_s58 ? (536u + sizeof(_g4_t_v110)) : _g4_s58,
    _g4_s60 = (552u + sizeof(_g4_t_s)) > _g4_s59 ? (552u + sizeof(_g4_t_s)) : _g4_s59,
    _g4_s61 = (584u + sizeof(_g4_t_v112)) > _g4_s60 ? (584u + sizeof(_g4_t_v112)) : _g4_s60,
    _g4_s62 = (588u + sizeof(_g4_t_v113)) > _g4_s61 ? (588u + sizeof(_g4_t_v113)) : _g4_s61,
    _g4_s63 = (594u + sizeof(_g4_t_v114)) > _g4_s62 ? (594u + sizeof(_g4_t_v114)) : _g4_s62,
    _g4_s64 = (596u + sizeof(_g4_t_v115)) > _g4_s63 ? (596u + sizeof(_g4_t_v115)) : _g4_s63,
    _g4_s65 = (602u + sizeof(_g4_t_v116)) > _g4_s64 ? (602u + sizeof(_g4_t_v116)) : _g4_s64,
    _g4_s66 = (604u + sizeof(_g4_t_v117)) > _g4_s65 ? (604u + sizeof(_g4_t_v117)) : _g4_s65,
    _g4_s67 = (610u + sizeof(_g4_t_v118)) > _g4_s66 ? (610u + sizeof(_g4_t_v118)) : _g4_s66,
    _g4_s68 = (612u + sizeof(_g4_t_v119)) > _g4_s67 ? (612u + sizeof(_g4_t_v119)) : _g4_s67,
    _g4_s69 = (618u + sizeof(_g4_t_v120)) > _g4_s68 ? (618u + sizeof(_g4_t_v120)) : _g4_s68,
    _g4_s70 = (620u + sizeof(_g4_t_v121)) > _g4_s69 ? (620u + sizeof(_g4_t_v121)) : _g4_s69,
    _g4_s71 = (626u + sizeof(_g4_t_v122)) > _g4_s70 ? (626u + sizeof(_g4_t_v122)) : _g4_s70,
    _g4_s72 = (628u + sizeof(_g4_t_v123)) > _g4_s71 ? (628u + sizeof(_g4_t_v123)) : _g4_s71,
    _g4_s73 = (634u + sizeof(_g4_t_v124)) > _g4_s72 ? (634u + sizeof(_g4_t_v124)) : _g4_s72,
    _g4_s74 = (636u + sizeof(_g4_t_v125)) > _g4_s73 ? (636u + sizeof(_g4_t_v125)) : _g4_s73,
    _g4_s75 = (642u + sizeof(_g4_t_v126)) > _g4_s74 ? (642u + sizeof(_g4_t_v126)) : _g4_s74,
    _g4_s76 = (644u + sizeof(_g4_t_v127)) > _g4_s75 ? (644u + sizeof(_g4_t_v127)) : _g4_s75,
    _g4_s77 = (650u + sizeof(_g4_t_v128)) > _g4_s76 ? (650u + sizeof(_g4_t_v128)) : _g4_s76,
    _g4_s78 = (658u + sizeof(_g4_t_v129)) > _g4_s77 ? (658u + sizeof(_g4_t_v129)) : _g4_s77,
    _g4_s79 = (666u + sizeof(_g4_t_v130)) > _g4_s78 ? (666u + sizeof(_g4_t_v130)) : _g4_s78,
    _g4_s80 = (674u + sizeof(_g4_t_v131)) > _g4_s79 ? (674u + sizeof(_g4_t_v131)) : _g4_s79,
    _g4_s81 = (676u + sizeof(_g4_t_v132)) > _g4_s80 ? (676u + sizeof(_g4_t_v132)) : _g4_s80,
    _g4_s82 = (680u + sizeof(_g4_t_v133)) > _g4_s81 ? (680u + sizeof(_g4_t_v133)) : _g4_s81,
    _g4_s83 = (684u + sizeof(_g4_t_v134)) > _g4_s82 ? (684u + sizeof(_g4_t_v134)) : _g4_s82,
    _g4_s84 = (688u + sizeof(_g4_t_v135)) > _g4_s83 ? (688u + sizeof(_g4_t_v135)) : _g4_s83,
    _g4_s85 = (692u + sizeof(_g4_t_v136)) > _g4_s84 ? (692u + sizeof(_g4_t_v136)) : _g4_s84,
    _g4_s86 = (696u + sizeof(_g4_t_v137)) > _g4_s85 ? (696u + sizeof(_g4_t_v137)) : _g4_s85,
    _g4_s87 = (700u + sizeof(_g4_t_v138)) > _g4_s86 ? (700u + sizeof(_g4_t_v138)) : _g4_s86,
    _g4_s88 = (704u + sizeof(_g4_t_v139)) > _g4_s87 ? (704u + sizeof(_g4_t_v139)) : _g4_s87,
    _g4_s89 = (708u + sizeof(_g4_t_v140)) > _g4_s88 ? (708u + sizeof(_g4_t_v140)) : _g4_s88,
    _g4_s90 = (712u + sizeof(_g4_t_v141)) > _g4_s89 ? (712u + sizeof(_g4_t_v141)) : _g4_s89,
    _g4_s91 = (848u + sizeof(_g4_t_v142)) > _g4_s90 ? (848u + sizeof(_g4_t_v142)) : _g4_s90
  };
  alignas(16) uint8_t _g4_sf[_g4_s91];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_Currency &Currency = *reinterpret_cast<_g4_t_Currency *>(_g4_sf + 0u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 16u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 55u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 64u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 104u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 120u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 136u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 152u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 168u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 184u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 200u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 216u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 220u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 224u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 228u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 232u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 236u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 240u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 244u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 248u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 252u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 264u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 268u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 280u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 284u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 296u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 300u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 312u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 316u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 328u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 332u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 344u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 348u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 360u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 364u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 376u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 380u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 392u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 396u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 408u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 416u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 424u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 432u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 440u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 456u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 472u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 488u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 504u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 520u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 536u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 552u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 584u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 588u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 594u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 596u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 602u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 604u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 610u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 612u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 618u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 620u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 626u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 628u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 634u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 636u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 642u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 644u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 650u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 658u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 666u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 674u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 676u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 680u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 684u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 688u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 692u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 696u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 700u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 704u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 708u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 712u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 848u);

  v142[36] = (uint32_t)(uintptr_t)(&self);
  v58 = self;
  v56 = a2;
  InAppBilling_GetHeaders((InAppBilling::Self *)v65);
  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v104);
  v54 = glwebtools::JsonReader::parse((glwebtools::Json::Value::Self *)v104, (int)(uintptr_t)(v58) + 12);
  if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v54) )
  {
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v112 = (int (**)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096648);
    v126 = 0;
    v128 = 0;
    v113 = (char *)&dword_213B814;
    v115 = &dword_213B814;
    v117 = &dword_213B814;
    v119 = &dword_213B814;
    v121 = &dword_213B814;
    v123 = &dword_213B814;
    v125 = &dword_213B814;
    v127 = &dword_213B814;
    v129 = 0;
    v130 = 0;
    v138 = &v136;
    v139 = &v136;
    v131 = 0;
    v132 = nullptr;
    v133 = nullptr;
    v134 = 0;
    v136 = 0;
    v137 = nullptr;
    v140 = 0;
    glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v105, (glwebtools::Json::Value::Self *)v104, "item");
    v54 = 0x80000003;
    if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v105) != 0 )
      v54 = (*v112)((iap::iABAndroidItemV1::Self *)&v112, (const glwebtools::JsonReader::Self *)v105);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v105);
    if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v54) )
    {
      v54 = glwebtools::JsonReader::parse((glwebtools::Json::Value::Self *)v104, (int)(uintptr_t)(v65));
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v54) )
      {
        v66[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v80), "scc", (int)(uintptr_t)(&v64));
        v81 = v66;
        g4_std::string::construct_copy(&v90, &v80);
        v91 = (int)(uintptr_t)(v81);
        v54 = 0x80000003;
        if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v104) != 0
          && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v104) != 0 )
        {
          v54 = 0x80000002;
          if ( glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v104, (char **)&v90) )
          {
            v16 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                     (glwebtools::Json::Value::Self *)v104,
                                                     (const char **)&v90);
            glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v110, v16);
            v54 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v110, v91);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v110);
          }
        }
        v17 = (void *)(v90 - 12);
        if ( (uint32_t *)(v90 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v90 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v17);
        }
        v18 = (void *)(v80 - 12);
        if ( (uint32_t *)(v80 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v80 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v18);
        }
        if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v54) )
        {
          v67[0] = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v82), "lang", (int)(uintptr_t)(&v64) + 1);
          v83 = v67;
          g4_std::string::construct_copy(&v92, &v82);
          v93 = (int)(uintptr_t)(v83);
          v54 = 0x80000003;
          if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v104) != 0
            && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v104) != 0 )
          {
            v54 = 0x80000002;
            if ( glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v104, (char **)&v92) )
            {
              v19 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                       (glwebtools::Json::Value::Self *)v104,
                                                       (const char **)&v92);
              glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v110, v19);
              v54 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v110, v93);
              glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v110);
            }
          }
          v20 = (void *)(v92 - 12);
          if ( (uint32_t *)(v92 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v92 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v20);
          }
          v21 = (void *)(v82 - 12);
          if ( (uint32_t *)(v82 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v82 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v21);
          }
          if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v54) )
          {
            sub_151AB20((iap::BillingMethodAndroid::Self *)v141, (int)(uintptr_t)(&v112));
            Price = iap::BillingMethod::GetPrice((iap::BillingMethod::Self *)v141);
            sprintf(s, "%.2f", (double)Price);
            iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)v141);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v68), "validatelimits", (int)(uintptr_t)(&v63));
            g4_std::string::append((int)(uintptr_t)(v68), "|", 1u);
            v52 = v113;
            v31 = strlen(v113);
            g4_std::string::append((int)(uintptr_t)(v68), v52, v31);
            g4_std::string::append((int)(uintptr_t)(v68), "|", 1u);
            g4_std::string::append((int)(uintptr_t)(v68), s, strlen(s));
            g4_std::string::append((int)(uintptr_t)(v68), "|", 1u);
            sub_151AB20((iap::BillingMethodAndroid::Self *)v142, (int)(uintptr_t)(&v112));
            Currency = (glwebtools::JsonReader::Iterator::Self *)iap::BillingMethod::GetCurrency((iap::BillingMethod::Self *)v142);
            v32 = strlen((const char *)Currency);
            g4_std::string::append((int)(uintptr_t)(v68), Currency, v32);
            iap::BillingMethodAndroid::Destroy((iap::BillingMethodAndroid::Self *)v142);
            g4_std::string::append((int)(uintptr_t)(v68), "|", 1u);
            g4_std::string::append_str(v68, v67);
            g4_std::string::append((int)(uintptr_t)(v68), "|", 1u);
            g4_std::string::append_str(v68, v66);
            glwebtools::UrlRequest::AddData(v56, "b", (const char **)v68);
            glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v106);
            glwebtools::JsonReader::opIndex(
              (glwebtools::JsonReader::Self *)v107,
              (glwebtools::Json::Value::Self *)v104,
              "headers");
            glwebtools::Json::Value::opAssign((glwebtools::Json::Value::Self *)v106, (const glwebtools::Json::Value::Self *)v107);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v107);
            glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v100);
            while ( 1 )
            {
              glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v101);
              if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                                      (glwebtools::JsonReader::Iterator::Self *)v100,
                                      (const glwebtools::JsonReader::Iterator::Self *)v101) == 0 )
                break;
              glwebtools::JsonReader::Iterator::name(
                (glwebtools::JsonReader::Iterator::Self *)v69,
                (glwebtools::Json::ValueIteratorBase::Self *)v100);
              v70[0] = (char *)&dword_213B814;
              g4_std::string::construct_copy(&v84, v69);
              v85 = v70;
              g4_std::string::construct_copy(&v94, &v84);
              v95 = (int)(uintptr_t)(v85);
              if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v106) != 0
                && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v106) != 0
                && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v106, (char **)&v94) )
              {
                v33 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                         (glwebtools::Json::Value::Self *)v106,
                                                         (const char **)&v94);
                glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v110, v33);
                glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v110, v95);
                glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v110);
              }
              v34 = (void *)(v94 - 12);
              if ( (uint32_t *)(v94 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v94 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v34);
              }
              v35 = (void *)(v84 - 12);
              if ( (uint32_t *)(v84 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v84 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v35);
              }
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v77), v70[0], (int)(uintptr_t)(&v63) + 1);
              glwebtools::UrlRequest::AddHeaders(v56, (const char **)v69, (const char **)&v77);
              v36 = (void *)(v77 - 12);
              if ( (uint32_t *)(v77 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v77 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v36);
              }
              v37 = v70[0] - 12;
              if ( (uint32_t *)v70[0] - 3 != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)v70[0] - 1, 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v37);
              }
              v38 = (void *)(v69[0] - 12);
              if ( (uint32_t *)(v69[0] - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v69[0] - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v38);
              }
              glwebtools::JsonReader::Iterator::opInc(
                (glwebtools::JsonReader::Iterator::Self *)v60,
                (glwebtools::JsonReader::Iterator::Self *)v100);
            }
            glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v108);
            glwebtools::JsonReader::opIndex(
              (glwebtools::JsonReader::Self *)v109,
              (glwebtools::Json::Value::Self *)v104,
              "queryData");
            glwebtools::Json::Value::opAssign((glwebtools::Json::Value::Self *)v108, (const glwebtools::Json::Value::Self *)v109);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v109);
            glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v102);
            glwebtools::JsonReader::Iterator::opAssign(
              (glwebtools::JsonReader::Iterator::Self *)v100,
              (const glwebtools::JsonReader::Iterator::Self *)v102);
            while ( 1 )
            {
              glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v103);
              if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                                      (glwebtools::JsonReader::Iterator::Self *)v100,
                                      (const glwebtools::JsonReader::Iterator::Self *)v103) == 0 )
                break;
              glwebtools::JsonReader::Iterator::name(
                (glwebtools::JsonReader::Iterator::Self *)v69,
                (glwebtools::Json::ValueIteratorBase::Self *)v100);
              v70[0] = (char *)&dword_213B814;
              g4_std::string::construct_copy(&v86, v69);
              v87 = v70;
              g4_std::string::construct_copy(&v96, &v86);
              v97 = (int)(uintptr_t)(v87);
              if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v108) != 0
                && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v108) != 0
                && glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v108, (char **)&v96) )
              {
                v39 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                         (glwebtools::Json::Value::Self *)v108,
                                                         (const char **)&v96);
                glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v110, v39);
                glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v110, v97);
                glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v110);
              }
              v40 = (void *)(v96 - 12);
              if ( (uint32_t *)(v96 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v96 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v40);
              }
              v41 = (void *)(v86 - 12);
              if ( (uint32_t *)(v86 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v86 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v41);
              }
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v78), v70[0], (int)(uintptr_t)(&v63) + 2);
              glwebtools::UrlRequest::AddData(v56, (const char **)v69, (const char **)&v78);
              v42 = (void *)(v78 - 12);
              if ( (uint32_t *)(v78 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v78 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v42);
              }
              v43 = v70[0] - 12;
              if ( (uint32_t *)v70[0] - 3 != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)v70[0] - 1, 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v43);
              }
              v44 = (void *)(v69[0] - 12);
              if ( (uint32_t *)(v69[0] - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v69[0] - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v44);
              }
              glwebtools::JsonReader::Iterator::opInc(
                (glwebtools::JsonReader::Iterator::Self *)v60,
                (glwebtools::JsonReader::Iterator::Self *)v100);
            }
            v71[0] = (int)(uintptr_t)(&dword_213B814);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v88), "url", (int)(uintptr_t)(&v64) + 2);
            v89 = v71;
            g4_std::string::construct_copy(&v98, &v88);
            v99 = (int)(uintptr_t)(v89);
            v54 = 0x80000003;
            if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v104) != 0
              && (uint8_t)glwebtools::JsonReader::isObject((glwebtools::JsonReader::Self *)v104) != 0 )
            {
              v54 = 0x80000002;
              if ( glwebtools::Json::Value::isMember((glwebtools::Json::Value::Self *)v104, (char **)&v98) )
              {
                v45 = (const glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(
                                                         (glwebtools::Json::Value::Self *)v104,
                                                         (const char **)&v98);
                glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v110, v45);
                v54 = glwebtools::JsonReader::read((glwebtools::Json::Value::Self *)v110, v99);
                glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v110);
              }
            }
            v46 = (void *)(v98 - 12);
            if ( (uint32_t *)(v98 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v98 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v46);
            }
            v47 = (void *)(v88 - 12);
            if ( (uint32_t *)(v88 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v88 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v47);
            }
            if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v54) )
            {
              glwebtools::UrlRequest::SetUrl(v56, (const char **)v71, 0);
              glwebtools::UrlRequest::SetMethod((int)(uintptr_t)(v56), 1);
              v54 = 0;
            }
            else
            {
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v79), "[RequestLimitsValidation] Could not get url value from input data", (int)(uintptr_t)(&v63) + 3);
              g4_std::string::assign_str((char *)v58 + 24, &v79);
              v48 = v79;
              v49 = (uint32_t *)(v79 - 12);
              *((uint8_t *)v58 + 30) = 1;
              if ( v49 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
                g4_std::string::Rep::M_destroy(v49);
            }
            v50 = (void *)(v71[0] - 12);
            if ( (uint32_t *)(v71[0] - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v71[0] - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v50);
            }
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v108);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v106);
            v51 = (void *)(v68[0] - 12);
            if ( (uint32_t *)(v68[0] - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v68[0] - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v51);
            }
          }
          else
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v76), "[RequestLimitsValidation] Could not get lang value from input data", (int)(uintptr_t)(&v62) + 3);
            g4_std::string::assign_str((char *)v58 + 24, &v76);
            v22 = v76;
            v23 = (uint32_t *)(v76 - 12);
            *((uint8_t *)v58 + 30) = 1;
            if ( v23 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
              g4_std::string::Rep::M_destroy(v23);
          }
          v24 = (void *)(v67[0] - 12);
          if ( (uint32_t *)(v67[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v67[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v24);
          }
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v75), "[RequestLimitsValidation] Could not get header value from input data", (int)(uintptr_t)(&v62) + 2);
          g4_std::string::assign_str((char *)v58 + 24, &v75);
          v27 = v75;
          v28 = (uint32_t *)(v75 - 12);
          *((uint8_t *)v58 + 30) = 1;
          if ( v28 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v28);
        }
        v25 = (void *)(v66[0] - 12);
        if ( (uint32_t *)(v66[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v66[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v25);
        }
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v74), "[RequestLimitsValidation] Could not parse headers input data", (int)(uintptr_t)(&v62) + 1);
        g4_std::string::assign_str((char *)v58 + 24, &v74);
        *((uint8_t *)v58 + 30) = 1;
        v29 = (void *)(v74 - 12);
        if ( (uint32_t *)(v74 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v74 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v29);
        }
      }
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v73), "[RequestLimitsValidation] Could not get item from input data", (int)(uintptr_t)(&v62));
      g4_std::string::assign_str((char *)v58 + 24, &v73);
      v2 = v73;
      *((uint8_t *)v58 + 30) = 1;
      if ( (uint32_t *)(v2 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v2 - 12));
      }
    }
    v112 = (int (**)(iap::iABAndroidItemV1::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096648);
    g4_std::Rb_tree_string_pair_string_const_4216e3::M_erase(
      (int)(uintptr_t)(&v135),
      v137);
    v57 = v133;
    v59 = v132;
    if ( v133 != v132 )
    {
      v3 = (char *)v132;
      v55 = (char *)v132 + 4;
      do
      {
        v4 = *(uint32_t *)&v55[v3 - (char *)v59];
        if ( (uint32_t *)(v4 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v4 - 12));
        }
        v5 = (uint32_t *)(*(uint32_t *)v3 - 12);
        if ( v5 != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v3 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v5);
        }
        v3 += 8;
      }
      while ( v57 != (glwebtools::UrlRequest::Self *)v3 );
      v59 = v132;
    }
    if ( v59 != nullptr )
      opDelete(v59);
    v6 = v127 - 3;
    if ( v127 - 3 != dword_213B808 && __sync_fetch_and_add(v127 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v6);
    v7 = v125 - 3;
    if ( v125 - 3 != dword_213B808 && __sync_fetch_and_add(v125 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v7);
    v8 = v123 - 3;
    if ( v123 - 3 != dword_213B808 && __sync_fetch_and_add(v123 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v8);
    v9 = v121 - 3;
    if ( v121 - 3 != dword_213B808 && __sync_fetch_and_add(v121 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v9);
    v10 = v119 - 3;
    if ( v119 - 3 != dword_213B808 && __sync_fetch_and_add(v119 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v10);
    v11 = v117 - 3;
    if ( v117 - 3 != dword_213B808 && __sync_fetch_and_add(v117 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v11);
    v12 = v115 - 3;
    if ( v115 - 3 != dword_213B808 && __sync_fetch_and_add(v115 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v12);
    v13 = v113 - 12;
    if ( v113 - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v113 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v72), "[RequestLimitsValidation] Could not parse request input data", (int)(uintptr_t)(&v61));
    g4_std::string::assign_str((char *)v58 + 24, &v72);
    *((uint8_t *)v58 + 30) = 1;
    v26 = (void *)(v72 - 12);
    if ( (uint32_t *)(v72 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v72 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v26);
    }
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v104);
  v14 = (void *)(v65[0] - 12);
  if ( (uint32_t *)(v65[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v65[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  return v54;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestLimitsValidation::StartRequest  (binary VA: 0x151c6e0)
// Original: iap::AndroidBilling::RequestLimitsValidation::StartRequest
// ----------------------------------------------------------------------------
unsigned int iap::AndroidBilling::RequestLimitsValidation::StartRequest(iap::AndroidBilling::RequestLimitsValidation::Self *self)
{
  iap::AndroidBilling::RequestLimitsValidation::Self *v1;
  glwebtools::UrlConnection::Self *v2;
  int v3;
  int v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  int v10;
  int v11;
  typedef unsigned int _g4_t_started;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[8];
  typedef int _g4_t_v19[2];
  typedef int _g4_t_v20[4];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef iap::AndroidBilling::RequestLimitsValidation::Self **_g4_t_v25;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_started)) > _g4_s0 ? (0u + sizeof(_g4_t_started)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v18)) > _g4_s6 ? (36u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v19)) > _g4_s7 ? (44u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v20)) > _g4_s8 ? (52u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v21)) > _g4_s9 ? (68u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v22)) > _g4_s10 ? (84u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v23)) > _g4_s11 ? (88u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v24)) > _g4_s12 ? (96u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v25)) > _g4_s13 ? (124u + sizeof(_g4_t_v25)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 84u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 88u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 124u);

  v25 = &self;
  v1 = self;
  v2 = (glwebtools::UrlConnection::Self *)((iap::AndroidBilling::RequestLimitsValidation::Self *)((char *)self + 80));
  glwebtools::UrlConnection::CancelRequest((iap::AndroidBilling::RequestLimitsValidation::Self *)((char *)self + 80));
  glwebtools::UrlConnection::Release(v2);
  glwebtools::UrlConnection::CreationSettings::Construct((glwebtools::UrlConnection::CreationSettings::Self *)v20);
  glwebtools::GlWebTools::CreateUrlConnection(
    (glwebtools::UrlConnection::Self *)v18,
    (glwebtools::GlWebToolsCore::Self **)v1 + 19,
    v20);
  glwebtools::UrlConnection::opAssign(v2, (const glwebtools::UrlConnection::Self *)v18);
  glwebtools::UrlConnection::Destroy((glwebtools::UrlConnection::Self *)v18);
  if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid(v2) != 0 )
  {
    glwebtools::GlWebTools::CreateUrlRequest(
      (glwebtools::GlWebTools::Self *)v19,
      (glwebtools::UrlRequest::CreationSettings **)v1 + 19);
    if ( (uint8_t)(uintptr_t)glwebtools::UrlRequest::IsHandleValid((glwebtools::UrlRequest::Self *)v19) != 0 )
    {
      started = iap::AndroidBilling::RequestLimitsValidation::PrepareRequest(v1, (glwebtools::UrlRequest::Self *)v19);
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)started) )
      {
        started = glwebtools::UrlConnection::StartRequest(v2, (glwebtools::UrlRequest::Self *)v19);
        if ( glwebtools::IsOperationSuccess((glwebtools::Self *)started) )
        {
          glwebtools::UrlRequest::Destroy((glwebtools::UrlRequest::Self *)v19);
          started = 0;
          goto LABEL_9;
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "check_plimit Could not start request", (int)(uintptr_t)(&v13));
        g4_std::string::assign_str((char *)v1 + 24, &v14);
        v11 = v14;
        *((uint8_t *)v1 + 30) = 1;
        if ( (uint32_t *)(v11 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v11 - 12));
        }
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "check_plimit Could not prepare request", (int)(uintptr_t)(&v13) + 1);
        g4_std::string::assign_str((char *)v1 + 24, &v15);
        v10 = v15;
        *((uint8_t *)v1 + 30) = 1;
        if ( (uint32_t *)(v10 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v10 - 12));
        }
      }
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "check_plimit Could not create request", (int)(uintptr_t)(&v13) + 2);
      g4_std::string::assign_str((char *)v1 + 24, &v16);
      v3 = v16;
      *((uint8_t *)v1 + 30) = 1;
      if ( (uint32_t *)(v3 - 12) == dword_213B808 )
      {
        started = 0x80000005;
      }
      else
      {
        started = 0x80000005;
        if ( __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy((void *)(v3 - 12));
      }
    }
    glwebtools::UrlRequest::Destroy((glwebtools::UrlRequest::Self *)v19);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "check_plimit Could not create connection", (int)(uintptr_t)(&v13) + 3);
    g4_std::string::assign_str((char *)v1 + 24, &v17);
    v4 = v17;
    *((uint8_t *)v1 + 30) = 1;
    if ( (uint32_t *)(v4 - 12) == dword_213B808 )
    {
      started = 0x80000005;
    }
    else
    {
      started = 0x80000005;
      if ( __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)(v4 - 12));
    }
  }
  glwebtools::UrlConnection::CancelRequest(v2);
  glwebtools::UrlConnection::Release(v2);
  *((uint32_t *)v1 + 5) = started;
LABEL_9:
  v5 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v22 - 12);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v21 - 12);
  if ( (uint32_t *)(v21 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  return started;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::RequestLimitsValidation::Update  (binary VA: 0x151cbd0)
// Original: iap::AndroidBilling::RequestLimitsValidation::Update
// ----------------------------------------------------------------------------
int iap::AndroidBilling::RequestLimitsValidation::Update(iap::AndroidBilling::RequestLimitsValidation::Self *self)
{
  int result;
  int v2;
  void *v3;
  void *v4;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  result = *((uint32_t *)self + 23);
  if ( result == 0 )
  {
    result = iap::AndroidBilling::RequestLimitsValidation::StartRequest(self);
    v2 = result;
    if ( result == 0 )
    {
      *((uint32_t *)self + 23) = 1;
      return result;
    }
    g4_std::string::construct_copy(&v5, (char *)self + 24);
    iap::AndroidBilling::RequestLimitsValidation::ProcessConnectionError((int)(uintptr_t)(self), v2, (int)(uintptr_t)(&v5));
    result = v5;
    v3 = (void *)(v5 - 12);
    if ( (uint32_t *)(v5 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
LABEL_10:
    *((uint32_t *)self + 23) = -1;
    *((uint32_t *)self + 5) = v2;
    return result;
  }
  if ( result == 1 )
  {
    result = glwebtools::UrlConnection::IsRunning((iap::AndroidBilling::RequestLimitsValidation::Self *)((char *)self + 80));
    if ( (uint8_t)result == 0 )
    {
      result = iap::AndroidBilling::RequestLimitsValidation::ProcessResponse(self);
      v2 = result;
      if ( result == 0 )
      {
        *((uint32_t *)self + 23) = 2;
        return result;
      }
      g4_std::string::construct_copy(v6, (char *)self + 24);
      iap::AndroidBilling::RequestLimitsValidation::ProcessConnectionError((int)(uintptr_t)(self), v2, (int)(uintptr_t)(v6));
      result = v6[0];
      v4 = (void *)(v6[0] - 12);
      if ( (uint32_t *)(v6[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      goto LABEL_10;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::CreationSettings::Destroy  (binary VA: 0x151df50)
// Original: iap::AndroidBilling::CreationSettings::~CreationSettings
// ----------------------------------------------------------------------------
void iap::AndroidBilling::CreationSettings::Destroy(iap::AndroidBilling::CreationSettings::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096378);
  v1 = *((uint32_t *)self + 10);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 8);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 6);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  v5 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  v7 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: iap::AndroidBilling::CreationSettings::Destroy_ea151e1b0  (binary VA: 0x151e1b0)
// Original: iap::AndroidBilling::CreationSettings::~CreationSettings
// ----------------------------------------------------------------------------
void iap::AndroidBilling::CreationSettings::Destroy_ea151e1b0(iap::AndroidBilling::CreationSettings::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096378);
  v1 = *((uint32_t *)self + 10);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 8);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 6);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  v5 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  v7 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  opDelete(self);
}


