#include "Core/Utils/DecompTypes.h"
#include "sociallib_NumberPhonebookSNSWrapper.h"

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::isLoggedIn  (binary VA: 0x1427a50)
// Original: sociallib::NumberPhonebookSNSWrapper::isLoggedIn
// ----------------------------------------------------------------------------
int sociallib::NumberPhonebookSNSWrapper::isLoggedIn()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::logout  (binary VA: 0x1427a60)
// Original: sociallib::NumberPhonebookSNSWrapper::logout
// ----------------------------------------------------------------------------
int sociallib::NumberPhonebookSNSWrapper::logout(sociallib::NumberPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::login  (binary VA: 0x1427a90)
// Original: sociallib::NumberPhonebookSNSWrapper::login
// ----------------------------------------------------------------------------
int sociallib::NumberPhonebookSNSWrapper::login(sociallib::NumberPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::likeApplication  (binary VA: 0x1427ac0)
// Original: sociallib::NumberPhonebookSNSWrapper::likeApplication
// ----------------------------------------------------------------------------
int sociallib::NumberPhonebookSNSWrapper::likeApplication(sociallib::NumberPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::getAppId  (binary VA: 0x1427af0)
// Original: sociallib::NumberPhonebookSNSWrapper::getAppId
// ----------------------------------------------------------------------------
int sociallib::NumberPhonebookSNSWrapper::getAppId(sociallib::NumberPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::getName  (binary VA: 0x1427b20)
// Original: sociallib::NumberPhonebookSNSWrapper::getName
// ----------------------------------------------------------------------------
int sociallib::NumberPhonebookSNSWrapper::getName(sociallib::NumberPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::getFriends  (binary VA: 0x1427b50)
// Original: sociallib::NumberPhonebookSNSWrapper::getFriends
// ----------------------------------------------------------------------------
int sociallib::NumberPhonebookSNSWrapper::getFriends(sociallib::NumberPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::getUid  (binary VA: 0x1427b80)
// Original: sociallib::NumberPhonebookSNSWrapper::getUid
// ----------------------------------------------------------------------------
int sociallib::NumberPhonebookSNSWrapper::getUid(sociallib::NumberPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::init  (binary VA: 0x1427bb0)
// Original: sociallib::NumberPhonebookSNSWrapper::init
// ----------------------------------------------------------------------------
int sociallib::NumberPhonebookSNSWrapper::init(sociallib::NumberPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::postMessageToWallWithoutDialog  (binary VA: 0x1427be0)
// Original: sociallib::NumberPhonebookSNSWrapper::postMessageToWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::NumberPhonebookSNSWrapper::postMessageToWallWithoutDialog(sociallib::NumberPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int result;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v8, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v9, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v10, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v11, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)v12, (int)(uintptr_t)(a2));
  sociallib::SNSWrapperBase::requestNotSupported(self, a2);
  v2 = (void *)(v12[0] - 12);
  if ( (uint32_t *)(v12[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v10 - 12);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  result = v8;
  v7 = (void *)(v8 - 12);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v7); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::postMessageToWall  (binary VA: 0x1427d90)
// Original: sociallib::NumberPhonebookSNSWrapper::postMessageToWall
// ----------------------------------------------------------------------------
int sociallib::NumberPhonebookSNSWrapper::postMessageToWall(sociallib::NumberPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int result;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v8, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v9, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v10, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v11, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)v12, (int)(uintptr_t)(a2));
  sociallib::SNSWrapperBase::requestNotSupported(self, a2);
  v2 = (void *)(v12[0] - 12);
  if ( (uint32_t *)(v12[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v10 - 12);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  result = v8;
  v7 = (void *)(v8 - 12);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v7); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::getUserData  (binary VA: 0x1427f40)
// Original: sociallib::NumberPhonebookSNSWrapper::getUserData
// ----------------------------------------------------------------------------
void sociallib::NumberPhonebookSNSWrapper::getUserData(sociallib::NumberPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);

  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v5, (int)(uintptr_t)(a2));
  sociallib::SNSWrapperBase::requestNotSupported(self, a2);
  v2 = v6;
  v3 = (uint32_t *)(v5);
  if ( v6 != v5 )
  {
    do
    {
      v4 = (uint32_t *)(*v3 - 12);
      if ( v4 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v3 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v4);
      ++v3;
    }
    while ( v2 != v3 );
    v3 = (uint32_t *)(v5);
  }
  if ( v3 != nullptr )
    opDelete(v3);
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::getUserNames  (binary VA: 0x1427ff0)
// Original: sociallib::NumberPhonebookSNSWrapper::getUserNames
// ----------------------------------------------------------------------------
void sociallib::NumberPhonebookSNSWrapper::getUserNames(sociallib::NumberPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);

  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v5, (int)(uintptr_t)(a2));
  sociallib::SNSWrapperBase::requestNotSupported(self, a2);
  v2 = v6;
  v3 = (uint32_t *)(v5);
  if ( v6 != v5 )
  {
    do
    {
      v4 = (uint32_t *)(*v3 - 12);
      if ( v4 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v3 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v4);
      ++v3;
    }
    while ( v2 != v3 );
    v3 = (uint32_t *)(v5);
  }
  if ( v3 != nullptr )
    opDelete(v3);
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::sendMessageTo  (binary VA: 0x14280a0)
// Original: sociallib::NumberPhonebookSNSWrapper::sendMessageTo
// ----------------------------------------------------------------------------
int sociallib::NumberPhonebookSNSWrapper::sendMessageTo(sociallib::NumberPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  char BoolParam; // si
  char *v3;
  unsigned int v4;
  char *v5;
  void *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  int result;
  void *v11;
  void *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  void *v16;
  typedef int _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef void *_g4_t_v23;
  typedef uint8_t *_g4_t_v24;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (19u + sizeof(_g4_t_v18)) > _g4_s1 ? (19u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v19)) > _g4_s2 ? (20u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (21u + sizeof(_g4_t_v20)) > _g4_s3 ? (21u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v21)) > _g4_s4 ? (28u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v22)) > _g4_s5 ? (32u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v23)) > _g4_s6 ? (36u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v24)) > _g4_s7 ? (40u + sizeof(_g4_t_v24)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 19u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 21u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);

  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v21, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v23, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v22, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  BoolParam = sociallib::SNSRequestState::getBoolParam(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getIntParam(a2);
  if ( BoolParam != 0 )
  {
    sociallib::SNSWrapperBase::isHtmlUnsupportedError(self, a2);
    v12 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = (uint32_t *)(v24);
    v14 = (uint32_t *)(v23);
    if ( v24 != v23 )
    {
      do
      {
        v15 = (uint32_t *)(*v14 - 12);
        if ( v15 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v14 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v15);
        ++v14;
      }
      while ( v13 != v14 );
      v14 = (uint32_t *)(v23);
    }
    if ( v14 != nullptr )
      opDelete(v14);
    result = v21;
    v16 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v16)), (int)0);
    }
  }
  else
  {
    v3 = (char *)v23;
    if ( (unsigned int)(v24 - (uint8_t *)v23) >> 2 != 0 )
    {
      v4 = 0;
      do
      {
        v5 = &v3[4 * v4];
        if ( *(int *)(*(uint32_t *)v5 - 4) >= 0 )
          sub_19397C0(&v3[4 * v4]);
        v18 = 32;
        if ( *(int *)(*(uint32_t *)v5 - 4) >= 0 )
        {
          sub_19397C0(v5);
          if ( *(int *)(*(uint32_t *)v5 - 4) >= 0 )
            sub_19397C0(v5);
        }
        g4_std::remove_gnu_cxx_normal_iterator_2782df(&v17);
        sub_1939370(&v17);
        if ( *(int *)(*(uint32_t *)v5 - 4) >= 0 )
          sub_19397C0(v5);
        v19 = 40;
        if ( *(int *)(*(uint32_t *)v5 - 4) >= 0 )
        {
          sub_19397C0(v5);
          if ( *(int *)(*(uint32_t *)v5 - 4) >= 0 )
            sub_19397C0(v5);
        }
        g4_std::remove_gnu_cxx_normal_iterator_2782df(&v17);
        sub_1939370(&v17);
        if ( *(int *)(*(uint32_t *)v5 - 4) >= 0 )
          sub_19397C0(v5);
        v20 = 41;
        if ( *(int *)(*(uint32_t *)v5 - 4) >= 0 )
        {
          sub_19397C0(v5);
          if ( *(int *)(*(uint32_t *)v5 - 4) >= 0 )
            sub_19397C0(v5);
        }
        ++v4;
        g4_std::remove_gnu_cxx_normal_iterator_2782df(&v17);
        sub_1939370(&v17);
        v3 = (char *)v23;
      }
      while ( v4 < (v24 - (uint8_t *)v23) >> 2 );
    }
    sociallib::SNSWrapperBase::requestNotSupported(self, a2);
    v6 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (uint32_t *)(v24);
    v8 = (uint32_t *)(v23);
    if ( v24 != v23 )
    {
      do
      {
        v9 = (uint32_t *)(*v8 - 12);
        if ( v9 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v8 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v9);
        ++v8;
      }
      while ( v7 != v8 );
      v8 = (uint32_t *)(v23);
    }
    if ( v8 != nullptr )
      opDelete(v8);
    result = v21;
    v11 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v11)), (int)0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::Destroy  (binary VA: 0x1428540)
// Original: sociallib::NumberPhonebookSNSWrapper::~NumberPhonebookSNSWrapper
// ----------------------------------------------------------------------------
void sociallib::NumberPhonebookSNSWrapper::Destroy(sociallib::NumberPhonebookSNSWrapper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095588);
  sociallib::SNSWrapperBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::NumberPhonebookSNSWrapper::Destroy_ea1428570  (binary VA: 0x1428570)
// Original: sociallib::NumberPhonebookSNSWrapper::~NumberPhonebookSNSWrapper
// ----------------------------------------------------------------------------
void sociallib::NumberPhonebookSNSWrapper::Destroy_ea1428570(sociallib::NumberPhonebookSNSWrapper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095588);
  sociallib::SNSWrapperBase::Destroy(self);
  opDelete(self);
}


