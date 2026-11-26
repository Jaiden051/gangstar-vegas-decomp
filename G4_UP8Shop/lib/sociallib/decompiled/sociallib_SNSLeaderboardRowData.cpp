#include "Core/Utils/DecompTypes.h"
#include "sociallib_SNSLeaderboardRowData.h"

// ----------------------------------------------------------------------------
// Function: sociallib::SNSLeaderboardRowData::Destroy  (binary VA: 0x1438190)
// Original: sociallib::SNSLeaderboardRowData::~SNSLeaderboardRowData
// ----------------------------------------------------------------------------
void sociallib::SNSLeaderboardRowData::Destroy(sociallib::SNSLeaderboardRowData::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;

  v1 = *((uint32_t *)self + 8);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 7);
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
  v4 = *((uint32_t *)self + 5);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  v5 = *((uint32_t *)self + 1);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = (uint32_t *)(*(uint32_t *)self - 12);
  if ( v6 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v6);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSLeaderboardRowData::Construct  (binary VA: 0x1438870)
// Original: sociallib::SNSLeaderboardRowData::SNSLeaderboardRowData
// ----------------------------------------------------------------------------
sociallib::SNSLeaderboardRowData::Self * sociallib::SNSLeaderboardRowData::Construct(sociallib::SNSLeaderboardRowData::Self *self, const sociallib::SNSLeaderboardRowData::Self *a2)
{
  int v2;

  g4_std::string::construct_copy(self, a2);
  g4_std::string::construct_copy((char *)self + 4, (char *)a2 + 4);
  v2 = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = v2;
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  g4_std::string::construct_copy((char *)self + 20, (char *)a2 + 20);
  g4_std::string::construct_copy((char *)self + 24, (char *)a2 + 24);
  g4_std::string::construct_copy((char *)self + 28, (char *)a2 + 28);
  return (sociallib::SNSLeaderboardRowData::Self *)g4_std::string::construct_copy((char *)self + 32, (char *)a2 + 32);
}


