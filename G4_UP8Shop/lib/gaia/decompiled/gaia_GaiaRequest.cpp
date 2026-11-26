#include "Core/Utils/DecompTypes.h"
#include "gaia_GaiaRequest.h"

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::Construct  (binary VA: 0x14cf6f0)
// Original: gaia::GaiaRequest::GaiaRequest
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::Construct(gaia::GaiaRequest::Self *self, glwebtools::Mutex::Self **a2)
{
  glwebtools::Mutex::Self *v2;

  glwebtools::Mutex::Lock(a2[2]);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(*a2);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2[2]);
  v2 = a2[3];
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v2);
  ++*(uint32_t *)v2;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2[1]);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a2[4]);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(a2[5]);
  *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(a2[16]);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(a2[12]);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a2[6]);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(a2[7]);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(a2[8]);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(a2[9]);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(a2[10]);
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(a2[11]);
  *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(a2[14]);
  *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(a2[15]);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(a2[13]);
  return glwebtools::Mutex::Unlock(a2[2]);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::Grab  (binary VA: 0x14cf790)
// Original: gaia::GaiaRequest::Grab
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::Grab(gaia::GaiaRequest::Self *self)
{
  glwebtools::Mutex::Self *v1;

  v1 = *((glwebtools::Mutex::Self **)self + 2);
  glwebtools::Mutex::Lock(v1);
  ++**((uint32_t **)self + 3);
  return glwebtools::Mutex::Unlock(v1);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::Drop  (binary VA: 0x14cf7e0)
// Original: gaia::GaiaRequest::Drop
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::Drop(gaia::GaiaRequest::Self *self)
{
  glwebtools::Mutex::Self *v1;
  int *v2;

  v1 = *((glwebtools::Mutex::Self **)self + 2);
  glwebtools::Mutex::Lock(v1);
  v2 = *((int **)self + 3);
  if ( *v2 > 0 )
    --*v2;
  return glwebtools::Mutex::Unlock(v1);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetRunAsynchronous  (binary VA: 0x14cf840)
// Original: gaia::GaiaRequest::SetRunAsynchronous
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::SetRunAsynchronous(gaia::GaiaRequest::Self *self, void (*a2)(gaia::GaiaRequest::Self), void *a3)
{
  int result;

  *(uint8_t *)(*((uint32_t *)self + 1) + 60) = 1;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a2);
  result = *((uint32_t *)self + 1);
  *(uint32_t *)(result + 64) = (uint32_t)(uintptr_t)(a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetCaller  (binary VA: 0x14cf860)
// Original: gaia::GaiaRequest::GetCaller
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::GetCaller(gaia::GaiaRequest::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 1) + 64);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetUserData  (binary VA: 0x14cf8d0)
// Original: gaia::GaiaRequest::SetUserData
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::SetUserData(gaia::GaiaRequest::Self *self, void *a2)
{
  int result;

  result = *((uint32_t *)self + 1);
  *(uint32_t *)(result + 68) = (uint32_t)(uintptr_t)(a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetUserData  (binary VA: 0x14cf8e0)
// Original: gaia::GaiaRequest::GetUserData
// ----------------------------------------------------------------------------
void ** gaia::GaiaRequest::GetUserData(gaia::GaiaRequest::Self *self, void **a2)
{
  *a2 = *(void **)(*((uint32_t *)self + 1) + 68);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetAccessToken  (binary VA: 0x14cf900)
// Original: gaia::GaiaRequest::SetAccessToken
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::SetAccessToken(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(*(uint32_t *)(a1 + 4) + 44, a2));
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::opIndex  (binary VA: 0x14cf930)
// Original: gaia::GaiaRequest::operator[]
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::opIndex(int a1, char **a2)
{
  return Json::Value::opIndex(*(Json::Value::Self **)(a1 + 4), a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetKairosCallback  (binary VA: 0x14cf960)
// Original: gaia::GaiaRequest::SetKairosCallback
// ----------------------------------------------------------------------------
gaia::GaiaRequest::Self * gaia::GaiaRequest::SetKairosCallback(gaia::GaiaRequest::Self *self, void *a2)
{
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetResponseType  (binary VA: 0x14cf970)
// Original: gaia::GaiaRequest::GetResponseType
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::GetResponseType(gaia::GaiaRequest::Self *self)
{
  return **((uint32_t **)self + 16);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::isValid  (binary VA: 0x14cf980)
// Original: gaia::GaiaRequest::isValid
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::isValid(gaia::GaiaRequest::Self *self)
{
  return **((uint8_t **)self + 12);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetResponse  (binary VA: 0x14cf990)
// Original: gaia::GaiaRequest::GetResponse
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::GetResponse(gaia::GaiaRequest::Self *self, void **a2, int *a3)
{
  int result;

  result = -300;
  if ( **((uint32_t **)self + 16) == 2 )
  {
    *a3 = *(uint32_t *)(*((uint32_t *)self + 1) + 76);
    *a2 = *(void **)(*((uint32_t *)self + 1) + 72);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetResponse  (binary VA: 0x14cf9c0)
// Original: gaia::GaiaRequest::GetResponse
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::GetResponse(int a1, int a2)
{
  int v2;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);

  v2 = **(uint32_t **)(a1 + 64);
  if ( v2 == 2 )
  {
    sub_193A970((int)(uintptr_t)(&v4) + 1, *(void **)(*(uint32_t *)(a1 + 4) + 72), *(uint32_t *)(*(uint32_t *)(a1 + 4) + 76), (int)(uintptr_t)(&v4));
    g4_std::string::assign_str(a2, (char *)&v4 + 1);
    g4_std::string::Destroy((char *)&v4 + 1);
    return 0;
  }
  else if ( v2 == 3 )
  {
    g4_std::string::assign_str(a2, *(uint32_t *)(a1 + 4) + 84);
    return 0;
  }
  else
  {
    return -300;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetResponse  (binary VA: 0x14cfa60)
// Original: gaia::GaiaRequest::GetResponse
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::GetResponse(gaia::GaiaRequest::Self *self, int *a2)
{
  int result;

  result = -300;
  if ( **((uint32_t **)self + 16) == 4 )
  {
    *a2 = *(uint32_t *)(*((uint32_t *)self + 1) + 80);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetResponseCode  (binary VA: 0x14cfa80)
// Original: gaia::GaiaRequest::GetResponseCode
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::GetResponseCode(gaia::GaiaRequest::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 1) + 40);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetEtag  (binary VA: 0x14cfa90)
// Original: gaia::GaiaRequest::GetEtag
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::GetEtag(gaia::GaiaRequest::Self *self)
{
  return *((uint32_t *)self + 1) + 100;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetEtag  (binary VA: 0x14cfaa0)
// Original: gaia::GaiaRequest::SetEtag
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::SetEtag(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(*(uint32_t *)(a1 + 4) + 100, a2));
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetAsyncOperation  (binary VA: 0x14cfad0)
// Original: gaia::GaiaRequest::SetAsyncOperation
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::SetAsyncOperation(gaia::GaiaRequest::Self *self, bool a2)
{
  int result;

  result = *((uint32_t *)self + 1);
  *(uint8_t *)(result + 60) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetInputValue  (binary VA: 0x14cfae0)
// Original: gaia::GaiaRequest::GetInputValue
// ----------------------------------------------------------------------------
gaia::GaiaRequest::Self * gaia::GaiaRequest::GetInputValue(gaia::GaiaRequest::Self *self, Json::Value::Self **a2, char *a3)
{
  const Json::Value::Self *v3;

  v3 = (const Json::Value::Self *)Json::Value::opIndex(a2[1], a3);
  Json::Value::Construct(self, v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetInputValue  (binary VA: 0x14cfb30)
// Original: gaia::GaiaRequest::GetInputValue
// ----------------------------------------------------------------------------
Json::Value::Self * gaia::GaiaRequest::GetInputValue(Json::Value::Self *a1, int a2, char **a3)
{
  const Json::Value::Self *v3;

  v3 = (const Json::Value::Self *)Json::Value::opIndex(*(Json::Value::Self **)(a2 + 4), a3);
  Json::Value::Construct(a1, v3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetResponseCode  (binary VA: 0x14cfb80)
// Original: gaia::GaiaRequest::SetResponseCode
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::SetResponseCode(gaia::GaiaRequest::Self *self, int a2)
{
  int result;

  result = *((uint32_t *)self + 1);
  *(uint32_t *)(result + 40) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetOperationCode  (binary VA: 0x14cfb90)
// Original: gaia::GaiaRequest::SetOperationCode
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::SetOperationCode(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a1 + 4);
  *(uint32_t *)(result + 56) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetOperationCode  (binary VA: 0x14cfba0)
// Original: gaia::GaiaRequest::GetOperationCode
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::GetOperationCode(gaia::GaiaRequest::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 1) + 56);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetRunAsynchronous  (binary VA: 0x14cfbb0)
// Original: gaia::GaiaRequest::SetRunAsynchronous
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::SetRunAsynchronous(int a1, int a2, int a3)
{
  int result;

  *(uint8_t *)(*(uint32_t *)(a1 + 4) + 60) = 1;
  *(uint32_t *)(a1 + 36) = a2;
  result = *(uint32_t *)(a1 + 4);
  *(uint32_t *)(result + 64) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetAccessToken  (binary VA: 0x14cfbd0)
// Original: gaia::GaiaRequest::GetAccessToken
// ----------------------------------------------------------------------------
gaia::GaiaRequest::Self * gaia::GaiaRequest::GetAccessToken(gaia::GaiaRequest::Self *self, int a2)
{
  g4_std::string::construct_copy(self, *(uint32_t *)(a2 + 4) + 44);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetHermesBaseMessage  (binary VA: 0x14cfc20)
// Original: gaia::GaiaRequest::GetHermesBaseMessage
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::GetHermesBaseMessage(gaia::GaiaRequest::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 1) + 52);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetParamsForOutput  (binary VA: 0x14cfc30)
// Original: gaia::GaiaRequest::SetParamsForOutput
// ----------------------------------------------------------------------------
gaia::GaiaRequest::Self * gaia::GaiaRequest::SetParamsForOutput(gaia::GaiaRequest::Self *self, int *a2)
{
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetParamsForOutput  (binary VA: 0x14cfc40)
// Original: gaia::GaiaRequest::SetParamsForOutput
// ----------------------------------------------------------------------------
gaia::GaiaRequest::Self * gaia::GaiaRequest::SetParamsForOutput(gaia::GaiaRequest::Self *self, void **a2, int *a3)
{
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(a3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetParamsForOutput  (binary VA: 0x14cfc60)
// Original: gaia::GaiaRequest::SetParamsForOutput
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::SetParamsForOutput(int a1, int a2)
{
  *(uint32_t *)(a1 + 56) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetParamsForOutput  (binary VA: 0x14cfc70)
// Original: gaia::GaiaRequest::SetParamsForOutput
// ----------------------------------------------------------------------------
gaia::GaiaRequest::Self * gaia::GaiaRequest::SetParamsForOutput(gaia::GaiaRequest::Self *self, std::vector<gaia::BaseJSONServiceResponse::Self> *a2)
{
  *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::isAsyncOperation  (binary VA: 0x14cfc80)
// Original: gaia::GaiaRequest::isAsyncOperation
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::isAsyncOperation(gaia::GaiaRequest::Self *self)
{
  return *(uint8_t *)(*((uint32_t *)self + 1) + 60);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::ValidateMandatoryParam  (binary VA: 0x14cfc90)
// Original: gaia::GaiaRequest::ValidateMandatoryParam
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::ValidateMandatoryParam(Json::Value::Self **a1, char **a2, int a3)
{
  Json::Value::Self *v3;
  Json::Value::Self *v4;
  int v5;
  int v6;

  v3 = (Json::Value::Self *)Json::Value::opIndex(a1[1], a2);
  if ( Json::Value::isNull(v3)
    || (v4 = (Json::Value::Self *)Json::Value::opIndex(a1[1], a2), v5 = Json::Value::type(v4), v6 = 0, v5 != a3) )
  {
    *(uint8_t *)a1[12] = 0;
    gaia::GaiaRequest::SetResponseCode((gaia::GaiaRequest::Self *)a1, -22);
    return -22;
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::ValidateOptionalParam  (binary VA: 0x14cfd20)
// Original: gaia::GaiaRequest::ValidateOptionalParam
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::ValidateOptionalParam(Json::Value::Self **a1, char **a2, int a3)
{
  int v3;
  Json::Value::Self *v4;
  Json::Value::Self *v6;

  v3 = 0;
  v4 = (Json::Value::Self *)Json::Value::opIndex(a1[1], a2);
  if ( !Json::Value::isNull(v4) )
  {
    v6 = (Json::Value::Self *)Json::Value::opIndex(a1[1], a2);
    if ( Json::Value::type(v6) != a3 )
    {
      v3 = -22;
      *(uint8_t *)a1[12] = 0;
      gaia::GaiaRequest::SetResponseCode((gaia::GaiaRequest::Self *)a1, -22);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetID  (binary VA: 0x14cfdc0)
// Original: gaia::GaiaRequest::GetID
// ----------------------------------------------------------------------------
int64_t gaia::GaiaRequest::GetID(gaia::GaiaRequest::Self *self)
{
  return *(uint64_t *)*((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::Cancel  (binary VA: 0x14cfdd0)
// Original: gaia::GaiaRequest::Cancel
// ----------------------------------------------------------------------------
uint8_t * gaia::GaiaRequest::Cancel(gaia::GaiaRequest::Self *self)
{
  uint8_t *result;

  gaia::GaiaRequest::SetResponseCode(self, 606);
  result = *((uint8_t **)self + 6);
  *result = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::IsCanceled  (binary VA: 0x14cfe10)
// Original: gaia::GaiaRequest::IsCanceled
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::IsCanceled(gaia::GaiaRequest::Self *self)
{
  return **((uint8_t **)self + 6);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::MakeID  (binary VA: 0x14cfe20)
// Original: gaia::GaiaRequest::MakeID
// ----------------------------------------------------------------------------
uint64_t gaia::GaiaRequest::MakeID()
{
  unsigned int v0; // kr00_4
  uint64_t v1; // rax
  uint64_t v2; // kr08_8

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::GaiaRequest::s_IDMutex);
  v0 = gaia::GaiaRequest::s_IDGenerator;
  LODWORD(gaia::GaiaRequest::s_IDGenerator) = gaia::GaiaRequest::s_IDGenerator + 1;
  v1 = __PAIR64__(HIDWORD(gaia::GaiaRequest::s_IDGenerator), v0) + 1;
  HIDWORD(gaia::GaiaRequest::s_IDGenerator) = (__PAIR64__(HIDWORD(gaia::GaiaRequest::s_IDGenerator), v0) + 1) >> 32;
  v2 = v1;
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::GaiaRequest::s_IDMutex);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetPriority  (binary VA: 0x14cfe80)
// Original: gaia::GaiaRequest::GetPriority
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::GetPriority(gaia::GaiaRequest::Self *self)
{
  return **((uint32_t **)self + 8);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetPriority  (binary VA: 0x14cfe90)
// Original: gaia::GaiaRequest::SetPriority
// ----------------------------------------------------------------------------
uint32_t * gaia::GaiaRequest::SetPriority(int a1, int a2)
{
  uint32_t *result;

  result = *(uint32_t **)(a1 + 32);
  *result = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::Construct  (binary VA: 0x14d1f90)
// Original: gaia::GaiaRequest::GaiaRequest
// ----------------------------------------------------------------------------
gaia::GaiaRequest::Self * gaia::GaiaRequest::Construct(gaia::GaiaRequest::Self *self)
{
  int v1;
  glwebtools::Mutex::Self *v2;
  gaia::InputOutputDataContainer::Self *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint8_t *v6;
  uint8_t *v7;
  uint64_t ID; // rax
  int v9;
  int v10;
  uint32_t *v11;
  gaia::GaiaRequest::Self *result;

  v1 = opNew(8u);
  *(uint8_t *)(v1 + 4) = 0;
  *(uint32_t *)v1 = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)self = v1;
  *((uint32_t *)self + 4) = 0;
  v2 = (glwebtools::Mutex::Self *)opNew(8u);
  glwebtools::Mutex::Construct(v2);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v2);
  v3 = (gaia::InputOutputDataContainer::Self *)opNew(0x68u);
  gaia::InputOutputDataContainer::Construct(v3);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v3);
  v4 = (uint32_t *)opNew(4u);
  *v4 = 1;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v4);
  v5 = (uint32_t *)opNew(4u);
  *v5 = 0;
  *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(v5);
  v6 = (uint8_t *)opNew(1u);
  *v6 = 1;
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v6);
  v7 = (uint8_t *)opNew((size_t)&dword_0 + 1);
  *v7 = 0;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v7);
  ID = gaia::GaiaRequest::MakeID();
  v9 = HIDWORD(ID);
  v10 = ID;
  v11 = (uint32_t *)opNew(8u);
  *v11 = v10;
  v11[1] = v9;
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v11);
  result = (gaia::GaiaRequest::Self *)opNew(4u);
  *(uint32_t *)result = 50;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 13) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetResponse  (binary VA: 0x14d21b0)
// Original: gaia::GaiaRequest::SetResponse
// ----------------------------------------------------------------------------
gaia::InputOutputDataContainer::Self * gaia::GaiaRequest::SetResponse(gaia::GaiaRequest::Self *self, int a2)
{
  uint32_t *v2;

  v2 = *((uint32_t **)self + 13);
  if ( v2 != nullptr )
    *v2 = a2;
  **((uint32_t **)self + 16) = 4;
  return gaia::InputOutputDataContainer::SetResponse(*((gaia::InputOutputDataContainer::Self **)self + 1), &a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetResponse  (binary VA: 0x14d2270)
// Original: gaia::GaiaRequest::SetResponse
// ----------------------------------------------------------------------------
void * gaia::GaiaRequest::SetResponse(gaia::GaiaRequest::Self *self, void *src, int *a3)
{
  void **v4;

  if ( *((uint32_t *)self + 10) != 0 )
  {
    v4 = *((void ***)self + 10);
    *v4 = malloc(*a3);
    memcpy(**((void ***)self + 10), src, *a3);
    **((uint32_t **)self + 11) = *a3;
  }
  **((uint32_t **)self + 16) = 2;
  return gaia::InputOutputDataContainer::SetResponse(*((gaia::InputOutputDataContainer::Self **)self + 1), src, a3);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetResponse  (binary VA: 0x14d2340)
// Original: gaia::GaiaRequest::SetResponse
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::SetResponse(int a1, int a2)
{
  int v2;

  v2 = *(uint32_t *)(a1 + 56);
  if ( v2 != 0 )
    g4_std::string::assign_str(v2, a2);
  **(uint32_t **)(a1 + 64) = 3;
  return gaia::InputOutputDataContainer::SetResponse(*(uint32_t *)(a1 + 4), a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::Serialize  (binary VA: 0x14d2bb0)
// Original: gaia::GaiaRequest::Serialize
// ----------------------------------------------------------------------------
gaia::GaiaRequest::Self * gaia::GaiaRequest::Serialize(gaia::GaiaRequest::Self *self, int a2)
{
  Json::Value::Self *v2;
  int *v3;
  const Json::Value::Self *v4;
  Json::Value::Self *v5;
  int *v6;
  const Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  const Json::Value::Self *v10;
  Json::Value::Self *v11;
  const Json::Value::Self *v12;
  Json::Value::Self *v13;
  bool *v14;
  const Json::Value::Self *v15;
  Json::Value::Self *v16;
  const Json::Value::Self *v17;
  Json::Value::Self *v18;
  int *v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  Json::Value::Self *v23;
  gaia::BaseJSONServiceResponse::Self *JSONMessage;
  Json::Value::Self *v25;
  Json::Value::Self *v26;
  int *v27;
  int *v28;
  const Json::Value::Self *v29;
  Json::Value::Self *v30;
  Json::Value::Self *v32;
  Json::Value::Self *v33;
  typedef Json::Value::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef void (**_g4_t_v36)(Json::FastWriter::Self *);
  typedef uint8_t _g4_t_v37[8];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[16];
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[16];
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[16];
  typedef uint8_t _g4_t_v47[16];
  typedef uint8_t _g4_t_v48[16];
  typedef uint8_t _g4_t_v49[16];
  typedef uint8_t _g4_t_v50[16];
  typedef uint8_t _g4_t_v51[16];
  typedef uint8_t _g4_t_v52[16];
  typedef uint8_t _g4_t_v53[16];
  typedef uint8_t _g4_t_v54[16];
  typedef uint8_t _g4_t_v55[44];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (0u + sizeof(_g4_t_v34)) > _g4_s0 ? (0u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v35)) > _g4_s1 ? (16u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v36)) > _g4_s2 ? (20u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v37)) > _g4_s3 ? (24u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v38)) > _g4_s4 ? (32u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v39)) > _g4_s5 ? (48u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v40)) > _g4_s6 ? (64u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v41)) > _g4_s7 ? (80u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v42)) > _g4_s8 ? (96u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v43)) > _g4_s9 ? (112u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v44)) > _g4_s10 ? (128u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v45)) > _g4_s11 ? (144u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v46)) > _g4_s12 ? (160u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (176u + sizeof(_g4_t_v47)) > _g4_s13 ? (176u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (192u + sizeof(_g4_t_v48)) > _g4_s14 ? (192u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (208u + sizeof(_g4_t_v49)) > _g4_s15 ? (208u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (224u + sizeof(_g4_t_v50)) > _g4_s16 ? (224u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (240u + sizeof(_g4_t_v51)) > _g4_s17 ? (240u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (256u + sizeof(_g4_t_v52)) > _g4_s18 ? (256u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (272u + sizeof(_g4_t_v53)) > _g4_s19 ? (272u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (288u + sizeof(_g4_t_v54)) > _g4_s20 ? (288u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (304u + sizeof(_g4_t_v55)) > _g4_s21 ? (304u + sizeof(_g4_t_v55)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 80u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 112u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 128u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 144u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 160u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 176u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 192u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 208u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 224u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 240u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 256u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 272u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 288u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 304u);

  v2 = (Json::Value::Self *)a2;
  Json::FastWriter::Construct((Json::FastWriter::Self *)&v36);
  Json::Value::Construct((int)(uintptr_t)(v38), nullptr);
  v3 = *(int **)(a2 + 12);
  if ( v3 != nullptr )
  {
    v4 = (const Json::Value::Self *)v40;
    Json::Value::Construct((Json::Value::Self *)v40, *v3);
  }
  else
  {
    v4 = (const Json::Value::Self *)v39;
    Json::Value::Construct((int)(uintptr_t)(v39), nullptr);
  }
  v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v38, "m_refCount");
  Json::Value::opAssign(v5, v4);
  Json::Value::Destroy(v4);
  v6 = *(int **)(a2 + 64);
  if ( v6 != nullptr )
  {
    v7 = (const Json::Value::Self *)v42;
    Json::Value::Construct((Json::Value::Self *)v42, *v6);
  }
  else
  {
    v7 = (const Json::Value::Self *)v41;
    Json::Value::Construct((int)(uintptr_t)(v41), nullptr);
  }
  v8 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v38, "m_eResponseType");
  Json::Value::opAssign(v8, v7);
  Json::Value::Destroy(v7);
  if ( *(uint32_t *)(a2 + 4) != 0 )
  {
    gaia::InputOutputDataContainer::Serialize((gaia::InputOutputDataContainer::Self *)&v35, *(Json::Value::Self **)(a2 + 4));
    Json::Value::Construct((int)(uintptr_t)(v44), &v35);
    v9 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v38, "container");
    Json::Value::opAssign(v9, (const Json::Value::Self *)v44);
    Json::Value::Destroy((Json::Value::Self *)v44);
    g4_std::string::Destroy(&v35);
    if ( *(uint32_t *)(a2 + 16) != 0 )
    {
LABEL_7:
      v10 = (const Json::Value::Self *)v46;
      Json::Value::Construct((Json::Value::Self *)v46, true);
      goto LABEL_8;
    }
  }
  else
  {
    Json::Value::Construct((int)(uintptr_t)(v43), nullptr);
    v32 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v38, "container");
    Json::Value::opAssign(v32, (const Json::Value::Self *)v43);
    Json::Value::Destroy((Json::Value::Self *)v43);
    if ( *(uint32_t *)(a2 + 16) != 0 )
      goto LABEL_7;
  }
  v10 = (const Json::Value::Self *)v45;
  Json::Value::Construct((Json::Value::Self *)v45, false);
LABEL_8:
  v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v38, "m_callbackFct");
  Json::Value::opAssign(v11, v10);
  Json::Value::Destroy(v10);
  if ( *(uint32_t *)(a2 + 36) != 0 )
  {
    v12 = (const Json::Value::Self *)v48;
    Json::Value::Construct((Json::Value::Self *)v48, true);
  }
  else
  {
    v12 = (const Json::Value::Self *)v47;
    Json::Value::Construct((Json::Value::Self *)v47, false);
  }
  v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v38, "m_old_callbackFct");
  Json::Value::opAssign(v13, v12);
  Json::Value::Destroy(v12);
  v14 = *(bool **)(a2 + 48);
  if ( v14 != nullptr )
  {
    v15 = (const Json::Value::Self *)v50;
    Json::Value::Construct((Json::Value::Self *)v50, *v14);
  }
  else
  {
    v15 = (const Json::Value::Self *)v49;
    Json::Value::Construct((int)(uintptr_t)(v49), nullptr);
  }
  v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v38, "m_isValid");
  Json::Value::opAssign(v16, v15);
  Json::Value::Destroy(v15);
  if ( *(uint32_t *)(a2 + 56) != 0 )
  {
    v17 = (const Json::Value::Self *)v52;
    Json::Value::Construct((int)(uintptr_t)(v52), *(uint32_t **)(a2 + 56));
  }
  else
  {
    v17 = (const Json::Value::Self *)v51;
    Json::Value::Construct((int)(uintptr_t)(v51), nullptr);
  }
  v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v38, "m_stringOutput");
  Json::Value::opAssign(v18, v17);
  Json::Value::Destroy(v17);
  v19 = *(int **)(a2 + 60);
  if ( v19 != nullptr )
  {
    if ( -858993459 * ((v19[1] - *v19) >> 2) != 0 )
    {
      v20 = 0;
      v21 = *v19;
      v22 = 0;
      v23 = (Json::Value::Self *)a2;
      do
      {
        v34 = v23;
        JSONMessage = gaia::BaseJSONServiceResponse::GetJSONMessage((gaia::BaseJSONServiceResponse::Self *)(v21 + 20 * v20));
        v25 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v38, "m_jsonArrayOutput");
        ++v22;
        v26 = (Json::Value::Self *)Json::Value::opIndex(v25, "values");
        Json::Value::append(v26, JSONMessage);
        v23 = v34;
        v20 = v22;
        v27 = *((int **)v34 + 15);
        v21 = *v27;
      }
      while ( v22 < -858993459 * ((v27[1] - *v27) >> 2) );
      v2 = v34;
    }
  }
  else
  {
    Json::Value::Construct((int)(uintptr_t)(v53), nullptr);
    v33 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v38, "m_jsonArrayOutput");
    Json::Value::opAssign(v33, (const Json::Value::Self *)v53);
    Json::Value::Destroy((Json::Value::Self *)v53);
  }
  v28 = *((int **)v2 + 16);
  if ( v28 != nullptr )
  {
    v29 = (const Json::Value::Self *)v55;
    Json::Value::Construct((Json::Value::Self *)v55, *v28);
  }
  else
  {
    v29 = (const Json::Value::Self *)v54;
    Json::Value::Construct((int)(uintptr_t)(v54), nullptr);
  }
  v30 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v38, "m_eResponseType");
  Json::Value::opAssign(v30, v29);
  Json::Value::Destroy(v29);
  Json::FastWriter::write(self, (const Json::Value::Self *)&v36, (Json::Value::Self *)v38);
  Json::Value::Destroy((Json::Value::Self *)v38);
  v36 = (void (**)(Json::FastWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091B78));
  g4_std::string::Destroy(v37);
  Json::Writer::Destroy((Json::Writer::Self *)&v36);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetResponse  (binary VA: 0x14da140)
// Original: gaia::GaiaRequest::SetResponse
// ----------------------------------------------------------------------------
std::vector<gaia::BaseJSONServiceResponse::Self> * gaia::GaiaRequest::SetResponse(gaia::GaiaRequest::Self *self, const std::vector<gaia::BaseJSONServiceResponse::Self> *a2)
{
  std::vector<gaia::BaseJSONServiceResponse::Self> *v2;

  v2 = *((std::vector<gaia::BaseJSONServiceResponse::Self> **)self + 15);
  if ( v2 != nullptr )
    g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::opAssign(v2, a2);
  **((uint32_t **)self + 16) = 1;
  return gaia::InputOutputDataContainer::SetResponse(*((gaia::InputOutputDataContainer::Self **)self + 1), a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetResponse  (binary VA: 0x14da1a0)
// Original: gaia::GaiaRequest::GetResponse
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::GetResponse(gaia::GaiaRequest::Self *self, std::vector<gaia::BaseJSONServiceResponse::Self> *a2)
{
  int result;

  result = -300;
  if ( **((uint32_t **)self + 16) == 1 )
  {
    g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::opAssign(
      a2,
      (const std::vector<gaia::BaseJSONServiceResponse::Self> *)(*((uint32_t *)self + 1) + 88));
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::DeleteReferences  (binary VA: 0x14daec0)
// Original: gaia::GaiaRequest::DeleteReferences
// ----------------------------------------------------------------------------
void gaia::GaiaRequest::DeleteReferences(gaia::GaiaRequest::Self *self)
{
  void *v1;
  void *v2;
  int v3;

  v1 = *(void **)self;
  if ( *(uint32_t *)self != 0 )
  {
    g4_std::string::Destroy(*(uint32_t *)self);
    opDelete(v1);
    *(uint32_t *)self = 0;
  }
  v2 = *((void **)self + 1);
  if ( v2 != nullptr )
  {
    gaia::InputOutputDataContainer::Destroy(*((void ***)self + 1));
    opDelete(v2);
    *((uint32_t *)self + 1) = 0;
  }
  v3 = *((uint32_t *)self + 2);
  if ( v3 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v3 + 4))(*((uint32_t *)self + 2));
    *((uint32_t *)self + 2) = 0;
  }
  if ( *((uint32_t *)self + 3) != 0 )
  {
    opDelete(*((void **)self + 3));
    *((uint32_t *)self + 3) = 0;
  }
  if ( *((uint32_t *)self + 16) != 0 )
  {
    opDelete(*((void **)self + 16));
    *((uint32_t *)self + 16) = 0;
  }
  if ( *((uint32_t *)self + 12) != 0 )
  {
    opDelete(*((void **)self + 12));
    *((uint32_t *)self + 12) = 0;
  }
  if ( *((uint32_t *)self + 6) != 0 )
  {
    opDelete(*((void **)self + 6));
    *((uint32_t *)self + 6) = 0;
  }
  if ( *((uint32_t *)self + 7) != 0 )
  {
    opDelete(*((void **)self + 7));
    *((uint32_t *)self + 7) = 0;
  }
  if ( *((uint32_t *)self + 8) != 0 )
  {
    opDelete(*((void **)self + 8));
    *((uint32_t *)self + 8) = 0;
  }
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 13) = 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::opAssign  (binary VA: 0x14daff0)
// Original: gaia::GaiaRequest::operator=
// ----------------------------------------------------------------------------
gaia::GaiaRequest::Self * gaia::GaiaRequest::opAssign(gaia::GaiaRequest::Self *self, const gaia::GaiaRequest::Self *a2)
{
  glwebtools::Mutex::Self *v2;
  uint32_t *v3;

  if ( self != a2 )
  {
    gaia::GaiaRequest::Drop(self);
    if ( **((uint32_t **)self + 3) == 0 )
      gaia::GaiaRequest::DeleteReferences(self);
    v2 = *((glwebtools::Mutex::Self **)a2 + 2);
    glwebtools::Mutex::Lock(v2);
    *(uint32_t *)self = *(uint32_t *)a2;
    *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
    *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
    v3 = *((uint32_t **)a2 + 3);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v3);
    *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
    *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
    *((uint32_t *)self + 16) = *((uint32_t *)a2 + 16);
    *((uint32_t *)self + 12) = *((uint32_t *)a2 + 12);
    *((uint32_t *)self + 6) = *((uint32_t *)a2 + 6);
    *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
    *((uint32_t *)self + 8) = *((uint32_t *)a2 + 8);
    *((uint32_t *)self + 9) = *((uint32_t *)a2 + 9);
    *((uint32_t *)self + 10) = *((uint32_t *)a2 + 10);
    *((uint32_t *)self + 11) = *((uint32_t *)a2 + 11);
    *((uint32_t *)self + 14) = *((uint32_t *)a2 + 14);
    *((uint32_t *)self + 15) = *((uint32_t *)a2 + 15);
    *((uint32_t *)self + 13) = *((uint32_t *)a2 + 13);
    ++*v3;
    glwebtools::Mutex::Unlock(v2);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::Destroy  (binary VA: 0x14db0e0)
// Original: gaia::GaiaRequest::~GaiaRequest
// ----------------------------------------------------------------------------
void gaia::GaiaRequest::Destroy(gaia::GaiaRequest::Self *self)
{
  gaia::GaiaRequest::Drop(self);
  if ( **((uint32_t **)self + 3) == 0 )
    gaia::GaiaRequest::DeleteReferences(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::TriggerCallback  (binary VA: 0x14dbb00)
// Original: gaia::GaiaRequest::TriggerCallback
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::TriggerCallback(gaia::GaiaRequest::Self *self)
{
  void (*v1)(uint32_t, char *, int, int);
  int v2;
  void (*v4)(uint8_t *);
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[80];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (23u + sizeof(_g4_t_v7)) > _g4_s2 ? (23u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 23u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v1 = *((void (**)(uint32_t, char *, int, int))self + 9);
  if ( v1 != nullptr )
  {
    v2 = *((uint32_t *)self + 1);
    v5 = *(uint32_t *)(v2 + 40);
    v6 = *(uint32_t *)(v2 + 64);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(&v7));
    v1(*(uint32_t *)(*((uint32_t *)self + 1) + 56), (char *)&v7 + 1, v5, v6);
    g4_std::string::Destroy((char *)&v7 + 1);
    return 0;
  }
  else
  {
    if ( **((uint8_t **)self + 6) != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(self, 606);
      **((uint8_t **)self + 6) = 0;
    }
    v4 = *((void (**)(uint8_t *))self + 4);
    if ( v4 != nullptr )
    {
      gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v8, (glwebtools::Mutex::Self **)self);
      v4(v8);
      gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v8);
      return 0;
    }
    else
    {
      return -301;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetLogRequestID  (binary VA: 0x14df310)
// Original: gaia::GaiaRequest::GetLogRequestID
// ----------------------------------------------------------------------------
gaia::GaiaRequest::Self * gaia::GaiaRequest::GetLogRequestID(gaia::GaiaRequest::Self *self, int a2)
{
  char *v2;
  typedef uint8_t *_g4_t_v4;
  typedef uint8_t *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef char *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef char _g4_t_v10;
  typedef int (**_g4_t_v11)(int);
  typedef int _g4_t_v12;
  typedef int (**_g4_t_v13)(int);
  typedef uint32_t _g4_t_v14[3];
  typedef int _g4_t_v15;
  typedef void *_g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[4];
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t _g4_t_v22[29];
  typedef char _g4_t_v23;
  typedef char _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v7)) > _g4_s3 ? (28u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v8)) > _g4_s4 ? (44u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (74u + sizeof(_g4_t_v9)) > _g4_s5 ? (74u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v10)) > _g4_s6 ? (80u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v11)) > _g4_s7 ? (84u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v12)) > _g4_s8 ? (88u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v13)) > _g4_s9 ? (92u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v14)) > _g4_s10 ? (96u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v15)) > _g4_s11 ? (108u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v16)) > _g4_s12 ? (112u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (116u + sizeof(_g4_t_v17)) > _g4_s13 ? (116u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (120u + sizeof(_g4_t_v18)) > _g4_s14 ? (120u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v19)) > _g4_s15 ? (124u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v20)) > _g4_s16 ? (128u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v21)) > _g4_s17 ? (132u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v22)) > _g4_s18 ? (136u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (252u + sizeof(_g4_t_v23)) > _g4_s19 ? (252u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (253u + sizeof(_g4_t_v24)) > _g4_s20 ? (253u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (256u + sizeof(_g4_t_v25)) > _g4_s21 ? (256u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (260u + sizeof(_g4_t_v26)) > _g4_s22 ? (260u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (264u + sizeof(_g4_t_v27)) > _g4_s23 ? (264u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (268u + sizeof(_g4_t_v28)) > _g4_s24 ? (268u + sizeof(_g4_t_v28)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 44u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 74u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 80u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 84u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 88u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 92u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 96u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 108u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 112u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 116u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 120u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 124u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 128u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 132u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 136u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 252u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 253u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 256u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 260u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 264u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 268u);

  sub_1900810(v22);
  v22[28] = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  v22[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v12 = 0;
  sub_19119D0((char *)&v11 + (uint32_t)(uintptr_t)(*(v11 - 3)), 0);
  v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v14[-1] + (uint32_t)(uintptr_t)(*(v13 - 3)), 0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v14[1] = 0;
  v14[2] = 0;
  v15 = 0;
  v16 = nullptr;
  v17 = 0;
  v18 = 0;
  v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v22[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v19);
  v20 = 24;
  v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v21 = &dword_213B814;
  sub_19119D0(v22, v14);
  v8 = *(uint32_t **)(a2 + 28);
  v6 = (int)(uintptr_t)(sub_192DD40(&v13, *v8, v8[1]));
  g4_std_compat::ostream_write(v6, (char *)&off_1B5AAE7 + 2, 1);
  sub_192E690(v6, v8);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v17 != 0 )
  {
    if ( v17 > v15 )
    {
      v5 = (uint8_t *)v17;
      v4 = (uint8_t *)(v16);
      v2 = &v10;
    }
    else
    {
      v5 = (uint8_t *)v15;
      v4 = (uint8_t *)(v16);
      v2 = (char *)&v9 + 2;
    }
    v7 = v2;
    sub_11A9950(v2, v4, v5);
    g4_std::string::assign_str(self, v7);
    g4_std::string::Destroy(v7);
  }
  else
  {
    g4_std::string::assign_str(self, &v21);
  }
  v11 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v22[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v13 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v14[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  g4_std::string::Destroy(&v21);
  v14[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v19);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v13 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v14[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v22[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v12 = 0;
  sub_1900B90(v22);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetHermesBaseMessage  (binary VA: 0x14e1920)
// Original: gaia::GaiaRequest::SetHermesBaseMessage
// ----------------------------------------------------------------------------
int gaia::GaiaRequest::SetHermesBaseMessage(int a1, int a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  uint32_t *i;
  int result;
  int v7;

  v2 = opNew(0x38u);
  *(uint32_t *)v2 = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(v2 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(v2 + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(v2 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(v2 + 16) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(v2 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(v2 + 24) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(v2 + 28) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(v2 + 36) = 0;
  *(uint32_t *)(v2 + 40) = 0;
  *(uint32_t *)(v2 + 52) = 0;
  v3 = v2 + 36;
  *(uint32_t *)(v2 + 44) = v2 + 36;
  *(uint32_t *)(v2 + 48) = v2 + 36;
  v7 = v2 + 32;
  g4_std::string::assign_str(v2, a2);
  g4_std::string::assign_str(v2 + 4, a2 + 4);
  g4_std::string::assign_str(v2 + 8, a2 + 8);
  g4_std::string::assign_str(v2 + 12, a2 + 12);
  g4_std::string::assign_str(v2 + 16, a2 + 16);
  g4_std::string::assign_str(v2 + 20, a2 + 20);
  g4_std::string::assign_str(v2 + 24, a2 + 24);
  g4_std::string::assign_str(v2 + 28, a2 + 28);
  if ( v2 + 32 != a2 + 32 )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      v7,
      *(void **)(v2 + 40));
    *(uint32_t *)(v2 + 44) = v3;
    *(uint32_t *)(v2 + 40) = 0;
    *(uint32_t *)(v2 + 48) = v3;
    *(uint32_t *)(v2 + 52) = 0;
    if ( *(uint32_t *)(a2 + 40) != 0 )
    {
      v4 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
             v7,
             *(uint32_t **)(a2 + 40),
             v2 + 36);
      *(uint32_t *)(v2 + 40) = (uint32_t)(uintptr_t)(v4);
      for ( i = v4; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      *(uint32_t *)(v2 + 44) = (uint32_t)(uintptr_t)(i);
      while ( v4[3] != 0 )
        v4 = (uint32_t *)v4[3];
      *(uint32_t *)(v2 + 48) = (uint32_t)(uintptr_t)(v4);
      *(uint32_t *)(v2 + 52) = *(uint32_t *)(a2 + 52);
    }
  }
  result = *(uint32_t *)(a1 + 4);
  *(uint32_t *)(result + 52) = v2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::SetCustomParams  (binary VA: 0x14e1aa0)
// Original: gaia::GaiaRequest::SetCustomParams
// ----------------------------------------------------------------------------
gaia::GaiaRequest::Self * gaia::GaiaRequest::SetCustomParams(gaia::GaiaRequest::Self *self, const std::map<std::string,std::string> *a2)
{
  gaia::GaiaRequest::Self *result;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *i;

  result = self;
  v3 = *((uint32_t *)self + 1);
  if ( a2 != (const std::map<std::string,std::string> *)(v3 + 16) )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      v3 + 16,
      *(void **)(v3 + 24));
    result = (gaia::GaiaRequest::Self *)(v3 + 20);
    *(uint32_t *)(v3 + 24) = 0;
    *(uint32_t *)(v3 + 28) = v3 + 20;
    *(uint32_t *)(v3 + 32) = v3 + 20;
    *(uint32_t *)(v3 + 36) = 0;
    v4 = *((uint32_t **)a2 + 2);
    if ( v4 != nullptr )
    {
      v5 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
             v3 + 16,
             v4,
             v3 + 20);
      *(uint32_t *)(v3 + 24) = (uint32_t)(uintptr_t)(v5);
      for ( i = v5; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      *(uint32_t *)(v3 + 28) = (uint32_t)(uintptr_t)(i);
      while ( v5[3] != 0 )
        v5 = (uint32_t *)v5[3];
      *(uint32_t *)(v3 + 32) = (uint32_t)(uintptr_t)(v5);
      result = *((gaia::GaiaRequest::Self **)a2 + 5);
      *(uint32_t *)(v3 + 36) = (uint32_t)(uintptr_t)(result);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GaiaRequest::GetInputValue  (binary VA: 0x14e1b40)
// Original: gaia::GaiaRequest::GetInputValue
// ----------------------------------------------------------------------------
char * gaia::GaiaRequest::GetInputValue(gaia::GaiaRequest::Self *self, std::map<std::string,std::string> *a2)
{
  uint32_t *v2;
  char *result;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *i;

  v2 = *((uint32_t **)self + 1);
  result = (char *)(v2 + 4);
  if ( a2 != (std::map<std::string,std::string> *)(v2 + 4) )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      (int)(uintptr_t)(a2),
      *((void **)a2 + 2));
    result = (char *)a2 + 4;
    *((uint32_t *)a2 + 2) = 0;
    *((uint32_t *)a2 + 3) = (uint32_t)(uintptr_t)((char *)a2 + 4);
    *((uint32_t *)a2 + 4) = (uint32_t)(uintptr_t)((char *)a2 + 4);
    *((uint32_t *)a2 + 5) = 0;
    v4 = (uint32_t *)v2[6];
    if ( v4 != nullptr )
    {
      v5 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
             (int)(uintptr_t)(a2),
             v4,
             (int)(uintptr_t)(a2) + 4);
      *((uint32_t *)a2 + 2) = (uint32_t)(uintptr_t)(v5);
      for ( i = v5; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      *((uint32_t *)a2 + 3) = (uint32_t)(uintptr_t)(i);
      while ( v5[3] != 0 )
        v5 = (uint32_t *)v5[3];
      *((uint32_t *)a2 + 4) = (uint32_t)(uintptr_t)(v5);
      result = (char *)v2[9];
      *((uint32_t *)a2 + 5) = (uint32_t)(uintptr_t)(result);
    }
  }
  return result;
}


