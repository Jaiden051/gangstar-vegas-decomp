#include "Core/Utils/DecompTypes.h"
#include "sociallib_SNSAchievementData.h"

// ----------------------------------------------------------------------------
// Function: sociallib::SNSAchievementData::Destroy  (binary VA: 0x14382e0)
// Original: sociallib::SNSAchievementData::~SNSAchievementData
// ----------------------------------------------------------------------------
void sociallib::SNSAchievementData::Destroy(sociallib::SNSAchievementData::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;

  v1 = *((uint32_t *)self + 14);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 13);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 12);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 11);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  v5 = *((uint32_t *)self + 10);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = *((uint32_t *)self + 9);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  v7 = *((uint32_t *)self + 8);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  v8 = *((uint32_t *)self + 7);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v8 - 12));
  }
  v9 = *((uint32_t *)self + 6);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v9 - 12));
  }
  v10 = *((uint32_t *)self + 5);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v10 - 12));
  }
  v11 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v11 - 12));
  }
  v12 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v12 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v12 - 12));
  }
  v13 = (uint32_t *)(*(uint32_t *)self - 12);
  if ( v13 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v13);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSAchievementData::Construct  (binary VA: 0x1439200)
// Original: sociallib::SNSAchievementData::SNSAchievementData
// ----------------------------------------------------------------------------
sociallib::SNSAchievementData::Self * sociallib::SNSAchievementData::Construct(sociallib::SNSAchievementData::Self *self, const sociallib::SNSAchievementData::Self *a2)
{
  sociallib::SNSAchievementData::Self *result;

  g4_std::string::construct_copy(self, a2);
  g4_std::string::construct_copy((char *)self + 4, (char *)a2 + 4);
  g4_std::string::construct_copy((char *)self + 8, (char *)a2 + 8);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint8_t *)self + 16) = *((uint8_t *)a2 + 16);
  *((uint8_t *)self + 17) = *((uint8_t *)a2 + 17);
  g4_std::string::construct_copy((char *)self + 20, (char *)a2 + 20);
  g4_std::string::construct_copy((char *)self + 24, (char *)a2 + 24);
  g4_std::string::construct_copy((char *)self + 28, (char *)a2 + 28);
  g4_std::string::construct_copy((char *)self + 32, (char *)a2 + 32);
  g4_std::string::construct_copy((char *)self + 36, (char *)a2 + 36);
  g4_std::string::construct_copy((char *)self + 40, (char *)a2 + 40);
  g4_std::string::construct_copy((char *)self + 44, (char *)a2 + 44);
  g4_std::string::construct_copy((char *)self + 48, (char *)a2 + 48);
  g4_std::string::construct_copy((char *)self + 52, (char *)a2 + 52);
  g4_std::string::construct_copy((char *)self + 56, (char *)a2 + 56);
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 15);
  result = *((sociallib::SNSAchievementData::Self **)a2 + 16);
  *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(result);
  return result;
}


