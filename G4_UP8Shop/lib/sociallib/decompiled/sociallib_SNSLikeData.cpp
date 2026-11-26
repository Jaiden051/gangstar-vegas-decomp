#include "Core/Utils/DecompTypes.h"
#include "sociallib_SNSLikeData.h"

// ----------------------------------------------------------------------------
// Function: sociallib::SNSLikeData::Destroy  (binary VA: 0x1438580)
// Original: sociallib::SNSLikeData::~SNSLikeData
// ----------------------------------------------------------------------------
void sociallib::SNSLikeData::Destroy(sociallib::SNSLikeData::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  v1 = *((uint32_t *)self + 9);
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
  v3 = *((uint32_t *)self + 7);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 6);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  v5 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  v7 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  v8 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v8 - 12));
  }
  v9 = (uint32_t *)(*(uint32_t *)self - 12);
  if ( v9 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v9);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSLikeData::Construct  (binary VA: 0x143a3f0)
// Original: sociallib::SNSLikeData::SNSLikeData
// ----------------------------------------------------------------------------
sociallib::SNSLikeData::Self * sociallib::SNSLikeData::Construct(sociallib::SNSLikeData::Self *self, const sociallib::SNSLikeData::Self *a2)
{
  sociallib::SNSLikeData::Self *result;

  g4_std::string::construct_copy(self, a2);
  g4_std::string::construct_copy((char *)self + 4, (char *)a2 + 4);
  g4_std::string::construct_copy((char *)self + 8, (char *)a2 + 8);
  g4_std::string::construct_copy((char *)self + 12, (char *)a2 + 12);
  g4_std::string::construct_copy((char *)self + 16, (char *)a2 + 16);
  *((uint8_t *)self + 20) = *((uint8_t *)a2 + 20);
  g4_std::string::construct_copy((char *)self + 24, (char *)a2 + 24);
  g4_std::string::construct_copy((char *)self + 28, (char *)a2 + 28);
  g4_std::string::construct_copy((char *)self + 32, (char *)a2 + 32);
  g4_std::string::construct_copy((char *)self + 36, (char *)a2 + 36);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 10);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 11);
  result = *((sociallib::SNSLikeData::Self **)a2 + 12);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(result);
  return result;
}


