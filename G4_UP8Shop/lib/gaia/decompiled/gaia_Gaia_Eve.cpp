#include "Core/Utils/DecompTypes.h"
#include "gaia_Gaia_Eve.h"

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Eve::Construct  (binary VA: 0x14429e0)
// Original: gaia::Gaia_Eve::Gaia_Eve
// ----------------------------------------------------------------------------
gaia::Gaia_Eve::Self * gaia::Gaia_Eve::Construct(gaia::Gaia_Eve::Self *self)
{
  gaia::BaseServiceManager::Self *v1;
  void *v2;
  gaia::Gaia_Eve::Self *result;
  void *v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "eve.gameloft.com:20001", (int)(uintptr_t)(&v5));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "Eve doesn't need clientID", (int)(uintptr_t)(&v5) + 1);
  v1 = (gaia::BaseServiceManager::Self *)opNew(0x9Cu);
  gaia::Eve::Construct(v1, (int)(uintptr_t)(&v6), (int)(uintptr_t)(v7));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v1);
  v2 = (void *)(v7[0] - 12);
  if ( (uint32_t *)(v7[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  result = (gaia::Gaia_Eve::Self *)v6;
  v4 = (void *)(v6 - 12);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    return (g4_std::string::Rep::M_destroy(v4), (gaia::Gaia_Eve::Self *)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Eve::Destroy  (binary VA: 0x1442ad0)
// Original: gaia::Gaia_Eve::~Gaia_Eve
// ----------------------------------------------------------------------------
void gaia::Gaia_Eve::Destroy(gaia::Gaia_Eve::Self *self)
{
  if ( *(uint32_t *)self != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)self + 16))(*(uint32_t *)self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Eve::UpdateByTheGame  (binary VA: 0x1442af0)
// Original: gaia::Gaia_Eve::UpdateByTheGame
// ----------------------------------------------------------------------------
int gaia::Gaia_Eve::UpdateByTheGame(gaia::ThreadManager::Self **self)
{
  int Instance;
  gaia::ThreadManager::Self *v3;

  v3 = *self;
  (*(void (**)(void))(*(uint32_t *)*self + 20))();
  Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v3));
  return gaia::ThreadManager::Update(Instance, 17);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Eve::GetBaseService  (binary VA: 0x1442b30)
// Original: gaia::Gaia_Eve::GetBaseService
// ----------------------------------------------------------------------------
int gaia::Gaia_Eve::GetBaseService(gaia::Gaia_Eve::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Eve::ListDataCenters  (binary VA: 0x14451f0)
// Original: gaia::Gaia_Eve::ListDataCenters
// ----------------------------------------------------------------------------
int gaia::Gaia_Eve::ListDataCenters(gaia::Gaia_Eve::Self *self, gaia::GaiaRequest::Self *a2)
{
  int v2;
  Json::Value::Self *v3;
  int BaseService;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  char *v7;
  uint32_t *v8;
  void *v9;
  int v11;
  typedef Json::Value::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_started;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef char _g4_t_v17[4];
  typedef char *_g4_t_v18;
  typedef void *_g4_t_v19;
  typedef Json::Value::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[96];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v13)) > _g4_s1 ? (44u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_started)) > _g4_s2 ? (44u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v15)) > _g4_s3 ? (64u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v16)) > _g4_s4 ? (68u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v17)) > _g4_s5 ? (72u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v18)) > _g4_s6 ? (76u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v19)) > _g4_s7 ? (80u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v20)) > _g4_s8 ? (84u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v21)) > _g4_s9 ? (88u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v22)) > _g4_s10 ? (92u + sizeof(_g4_t_v22)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);

  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B50), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B54), 4);
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 9001);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v22, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v22);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v22);
    return started;
  }
  else
  {
    v2 = gaia::GaiaRequest::opIndex(a2, &unk_2119B50);
    Json::Value::asString((Json::Value::Self *)&v15, v2);
    v16 = &dword_213B814;
    v3 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B54);
    if ( Json::Value::type(v3) == 4 )
    {
      v11 = gaia::GaiaRequest::opIndex(a2, &unk_2119B54);
      Json::Value::asString((Json::Value::Self *)v17, v11);
      g4_std::string::assign_str(&v16, v17);
      g4_std::string::Destroy(v17);
    }
    v18 = (char *)&dword_213B814;
    v19 = nullptr;
    v20 = nullptr;
    v21 = 0;
    BaseService = gaia::Gaia_Eve::GetBaseService(self);
    v13 = gaia::Eve::ListDataCenters(BaseService, &v18, &v15, &v16, a2);
    if ( v13 == 0 )
      v13 = gaia::BaseServiceManager::ParseMessages(v18, *((uint32_t *)v18 - 3), (int)(uintptr_t)(&v19), 27);
    gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v19);
    gaia::GaiaRequest::SetResponseCode(a2, v13);
    v5 = v20;
    v6 = (Json::Value::Self *)v19;
    if ( v20 != v19 )
    {
      do
      {
        v12 = v6;
        v6 = (Json::Value::Self *)((char *)v6 + 20);
        gaia::BaseJSONServiceResponse::Destroy(v12);
      }
      while ( v5 != v6 );
      v6 = (Json::Value::Self *)v19;
    }
    if ( v6 != nullptr )
      opDelete(v6);
    v7 = v18 - 12;
    if ( v18 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v18 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v7);
    v8 = v16 - 3;
    if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v8);
    v9 = (void *)(v15 - 12);
    if ( (uint32_t *)(v15 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    return v13;
  }
}


