#include "Core/Utils/DecompTypes.h"
#include "sociallib_EmailPhonebookSNSWrapper.h"

// ----------------------------------------------------------------------------
// Function: sociallib::EmailPhonebookSNSWrapper::isLoggedIn  (binary VA: 0x1420360)
// Original: sociallib::EmailPhonebookSNSWrapper::isLoggedIn
// ----------------------------------------------------------------------------
int sociallib::EmailPhonebookSNSWrapper::isLoggedIn()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sociallib::EmailPhonebookSNSWrapper::logout  (binary VA: 0x1420370)
// Original: sociallib::EmailPhonebookSNSWrapper::logout
// ----------------------------------------------------------------------------
int sociallib::EmailPhonebookSNSWrapper::logout(sociallib::EmailPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::EmailPhonebookSNSWrapper::login  (binary VA: 0x14203a0)
// Original: sociallib::EmailPhonebookSNSWrapper::login
// ----------------------------------------------------------------------------
int sociallib::EmailPhonebookSNSWrapper::login(sociallib::EmailPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::EmailPhonebookSNSWrapper::likeApplication  (binary VA: 0x14203d0)
// Original: sociallib::EmailPhonebookSNSWrapper::likeApplication
// ----------------------------------------------------------------------------
int sociallib::EmailPhonebookSNSWrapper::likeApplication(sociallib::EmailPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::EmailPhonebookSNSWrapper::getAppId  (binary VA: 0x1420400)
// Original: sociallib::EmailPhonebookSNSWrapper::getAppId
// ----------------------------------------------------------------------------
int sociallib::EmailPhonebookSNSWrapper::getAppId(sociallib::EmailPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::EmailPhonebookSNSWrapper::getName  (binary VA: 0x1420430)
// Original: sociallib::EmailPhonebookSNSWrapper::getName
// ----------------------------------------------------------------------------
int sociallib::EmailPhonebookSNSWrapper::getName(sociallib::EmailPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::EmailPhonebookSNSWrapper::getFriends  (binary VA: 0x1420460)
// Original: sociallib::EmailPhonebookSNSWrapper::getFriends
// ----------------------------------------------------------------------------
int sociallib::EmailPhonebookSNSWrapper::getFriends(sociallib::EmailPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::EmailPhonebookSNSWrapper::getUid  (binary VA: 0x1420490)
// Original: sociallib::EmailPhonebookSNSWrapper::getUid
// ----------------------------------------------------------------------------
int sociallib::EmailPhonebookSNSWrapper::getUid(sociallib::EmailPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::EmailPhonebookSNSWrapper::init  (binary VA: 0x14204c0)
// Original: sociallib::EmailPhonebookSNSWrapper::init
// ----------------------------------------------------------------------------
int sociallib::EmailPhonebookSNSWrapper::init(sociallib::EmailPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::EmailPhonebookSNSWrapper::postMessageToWallWithoutDialog  (binary VA: 0x14204f0)
// Original: sociallib::EmailPhonebookSNSWrapper::postMessageToWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::EmailPhonebookSNSWrapper::postMessageToWallWithoutDialog(sociallib::EmailPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
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
// Function: sociallib::EmailPhonebookSNSWrapper::postMessageToWall  (binary VA: 0x14206a0)
// Original: sociallib::EmailPhonebookSNSWrapper::postMessageToWall
// ----------------------------------------------------------------------------
int sociallib::EmailPhonebookSNSWrapper::postMessageToWall(sociallib::EmailPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
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
// Function: sociallib::EmailPhonebookSNSWrapper::getUserData  (binary VA: 0x1420850)
// Original: sociallib::EmailPhonebookSNSWrapper::getUserData
// ----------------------------------------------------------------------------
void sociallib::EmailPhonebookSNSWrapper::getUserData(sociallib::EmailPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  char *v2;
  unsigned int v3;
  unsigned int v4;
  void *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  typedef uint8_t _g4_t_v9[7];
  typedef void *_g4_t_v10;
  typedef uint8_t *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (13u + sizeof(_g4_t_v9)) > _g4_s0 ? (13u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v11)) > _g4_s2 ? (24u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 13u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);

  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v10, (int)(uintptr_t)(a2));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9[3]), (char *)&unk_1B15112, (int)(uintptr_t)(v9));
  v2 = (char *)v10;
  if ( (unsigned int)(v11 - (uint8_t *)v10) >> 2 != 0 )
  {
    v3 = 0;
    do
    {
      g4_std::string::append_str(&v9[3], &v2[4 * v3]);
      v2 = (char *)v10;
      v4 = (v11 - (uint8_t *)v10) >> 2;
      if ( v3 != v4 - 1 )
      {
        g4_std::string::append((int)(uintptr_t)(&v9[3]), ",", 1u);
        v2 = (char *)v10;
        v4 = (v11 - (uint8_t *)v10) >> 2;
      }
      ++v3;
    }
    while ( v3 < v4 );
  }
  sociallib::SNSWrapperBase::requestNotSupported(self, a2);
  v5 = (void *)(*(uint32_t *)&v9[3] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v9[3] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v9[3] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (uint32_t *)(v11);
  v7 = (uint32_t *)(v10);
  if ( v11 != v10 )
  {
    do
    {
      v8 = (uint32_t *)(*v7 - 12);
      if ( v8 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v7 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v8);
      ++v7;
    }
    while ( v6 != v7 );
    v7 = (uint32_t *)(v10);
  }
  if ( v7 != nullptr )
    opDelete(v7);
}

// ----------------------------------------------------------------------------
// Function: sociallib::EmailPhonebookSNSWrapper::getUserNames  (binary VA: 0x14209c0)
// Original: sociallib::EmailPhonebookSNSWrapper::getUserNames
// ----------------------------------------------------------------------------
void sociallib::EmailPhonebookSNSWrapper::getUserNames(sociallib::EmailPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  char *v2;
  unsigned int v3;
  unsigned int v4;
  void *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  typedef uint8_t _g4_t_v9[7];
  typedef void *_g4_t_v10;
  typedef uint8_t *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (13u + sizeof(_g4_t_v9)) > _g4_s0 ? (13u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v11)) > _g4_s2 ? (24u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 13u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);

  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v10, (int)(uintptr_t)(a2));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9[3]), (char *)&unk_1B15112, (int)(uintptr_t)(v9));
  v2 = (char *)v10;
  if ( (unsigned int)(v11 - (uint8_t *)v10) >> 2 != 0 )
  {
    v3 = 0;
    do
    {
      g4_std::string::append_str(&v9[3], &v2[4 * v3]);
      v2 = (char *)v10;
      v4 = (v11 - (uint8_t *)v10) >> 2;
      if ( v3 != v4 - 1 )
      {
        g4_std::string::append((int)(uintptr_t)(&v9[3]), ",", 1u);
        v2 = (char *)v10;
        v4 = (v11 - (uint8_t *)v10) >> 2;
      }
      ++v3;
    }
    while ( v3 < v4 );
  }
  sociallib::SNSWrapperBase::requestNotSupported(self, a2);
  v5 = (void *)(*(uint32_t *)&v9[3] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v9[3] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v9[3] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (uint32_t *)(v11);
  v7 = (uint32_t *)(v10);
  if ( v11 != v10 )
  {
    do
    {
      v8 = (uint32_t *)(*v7 - 12);
      if ( v8 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v7 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v8);
      ++v7;
    }
    while ( v6 != v7 );
    v7 = (uint32_t *)(v10);
  }
  if ( v7 != nullptr )
    opDelete(v7);
}

// ----------------------------------------------------------------------------
// Function: sociallib::EmailPhonebookSNSWrapper::sendMessageTo  (binary VA: 0x1420b30)
// Original: sociallib::EmailPhonebookSNSWrapper::sendMessageTo
// ----------------------------------------------------------------------------
int sociallib::EmailPhonebookSNSWrapper::sendMessageTo(sociallib::EmailPhonebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  void *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  int result;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef void *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);

  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v8, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v10, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v9, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getBoolParam(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getIntParam(a2);
  sociallib::SNSWrapperBase::requestNotSupported(self, a2);
  v2 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = v11;
  v4 = (uint32_t *)(v10);
  if ( v11 != v10 )
  {
    do
    {
      v5 = (uint32_t *)(*v4 - 12);
      if ( v5 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v4 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v5);
      ++v4;
    }
    while ( v3 != v4 );
    v4 = (uint32_t *)(v10);
  }
  if ( v4 != nullptr )
    opDelete(v4);
  result = v8;
  v7 = (void *)(v8 - 12);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v7)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::EmailPhonebookSNSWrapper::Destroy  (binary VA: 0x1420c90)
// Original: sociallib::EmailPhonebookSNSWrapper::~EmailPhonebookSNSWrapper
// ----------------------------------------------------------------------------
void sociallib::EmailPhonebookSNSWrapper::Destroy(sociallib::EmailPhonebookSNSWrapper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20951A8);
  sociallib::SNSWrapperBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::EmailPhonebookSNSWrapper::Destroy_ea1420cc0  (binary VA: 0x1420cc0)
// Original: sociallib::EmailPhonebookSNSWrapper::~EmailPhonebookSNSWrapper
// ----------------------------------------------------------------------------
void sociallib::EmailPhonebookSNSWrapper::Destroy_ea1420cc0(sociallib::EmailPhonebookSNSWrapper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20951A8);
  sociallib::SNSWrapperBase::Destroy(self);
  opDelete(self);
}


