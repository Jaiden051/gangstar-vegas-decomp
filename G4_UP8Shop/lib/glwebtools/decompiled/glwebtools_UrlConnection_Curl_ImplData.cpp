#include "Core/Utils/DecompTypes.h"
#include "glwebtools_UrlConnection_Curl_ImplData.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection_Curl_ImplData::GetServerSideEventParser  (binary VA: 0x13ef640)
// Original: glwebtools::UrlConnection_Curl_ImplData::GetServerSideEventParser
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection_Curl_ImplData::GetServerSideEventParser()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection_Curl_ImplData::Destroy  (binary VA: 0x13ef670)
// Original: glwebtools::UrlConnection_Curl_ImplData::~UrlConnection_Curl_ImplData
// ----------------------------------------------------------------------------
void glwebtools::UrlConnection_Curl_ImplData::Destroy(glwebtools::UrlConnection_Curl_ImplData::Self *self)
{
  void (***v1)(uint32_t);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2094D10);
  if ( *((uint32_t *)self + 1) != 0 )
  {
    curl_easy_cleanup(*((uint32_t *)self + 1));
    *((uint32_t *)self + 1) = 0;
  }
  v1 = *((void (****)(uint32_t))self + 2);
  if ( v1 != nullptr )
  {
    (**v1)(*((uint32_t *)self + 2));
    sub_4EBEE0(*((uint32_t *)self + 2));
    *((uint32_t *)self + 2) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection_Curl_ImplData::Initialize  (binary VA: 0x13ef750)
// Original: glwebtools::UrlConnection_Curl_ImplData::Initialize
// ----------------------------------------------------------------------------
glwebtools::UrlConnection_Curl_ImplData::Self * glwebtools::UrlConnection_Curl_ImplData::Initialize(glwebtools::UrlConnection_Curl_ImplData::Self *self)
{
  int v1;

  v1 = sub_4EBE70((size_t)off_3C, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2094D40);
  *(uint8_t *)(v1 + 4) = 0;
  *(uint8_t *)(v1 + 16) = 0;
  *(uint32_t *)(v1 + 8) = v1 + 8;
  *(uint32_t *)(v1 + 12) = v1 + 8;
  *(uint32_t *)(v1 + 20) = 0;
  *(uint32_t *)(v1 + 24) = 0;
  *(uint32_t *)(v1 + 28) = 0;
  *(uint32_t *)(v1 + 32) = 600000;
  *(uint64_t *)(v1 + 36) = glwebtools::SystemClock::GetMilliseconds();
  glwebtools::Mutex::Construct((glwebtools::Mutex::Self *)(v1 + 44));
  *(uint32_t *)(v1 + 52) = v1 + 52;
  *(uint32_t *)(v1 + 56) = v1 + 52;
  *((uint32_t *)self + 2) = v1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection_Curl_ImplData::Destroy_ea13efad0  (binary VA: 0x13efad0)
// Original: glwebtools::UrlConnection_Curl_ImplData::~UrlConnection_Curl_ImplData
// ----------------------------------------------------------------------------
void glwebtools::UrlConnection_Curl_ImplData::Destroy_ea13efad0(glwebtools::UrlConnection_Curl_ImplData::Self *self)
{
  void (***v1)(uint32_t);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2094D10);
  if ( *((uint32_t *)self + 1) != 0 )
  {
    curl_easy_cleanup(*((uint32_t *)self + 1));
    *((uint32_t *)self + 1) = 0;
  }
  v1 = *((void (****)(uint32_t))self + 2);
  if ( v1 != nullptr )
  {
    (**v1)(*((uint32_t *)self + 2));
    sub_4EBEE0(*((uint32_t *)self + 2));
    *((uint32_t *)self + 2) = 0;
  }
  opDelete(self);
}


