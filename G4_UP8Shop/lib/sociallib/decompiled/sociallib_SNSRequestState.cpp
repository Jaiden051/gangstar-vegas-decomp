#include "Core/Utils/DecompTypes.h"
#include "sociallib_SNSRequestState.h"

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::Destroy  (binary VA: 0x1413d30)
// Original: sociallib::SNSRequestState::~SNSRequestState
// ----------------------------------------------------------------------------
void sociallib::SNSRequestState::Destroy(sociallib::SNSRequestState::Self *self)
{
  std::vector<sociallib::SNSAchievementData::Self> *v1;
  std::vector<sociallib::SNSAchievementData::Self> *v2;
  std::vector<sociallib::SNSAchievementData::Self> *v3;
  std::vector<sociallib::SNSAchievementData::Self> *v4;
  int v5;
  std::vector<sociallib::SNSAchievementData::Self> *v6;
  std::vector<sociallib::SNSAchievementData::Self> *v7;
  std::vector<sociallib::SNSAchievementData::Self> *v8;
  std::vector<sociallib::SNSAchievementData::Self> *v9;
  std::vector<sociallib::SNSAchievementData::Self> *v10;
  std::vector<sociallib::SNSAchievementData::Self> *v11;
  std::vector<sociallib::SNSAchievementData::Self> *v12;
  std::vector<sociallib::SNSAchievementData::Self> *v13;
  std::vector<sociallib::SNSAchievementData::Self> *v14;

  sociallib::CDynamicMemoryStream::Destroy((sociallib::SNSRequestState::Self *)((char *)self + 180));
  v1 = *((std::vector<sociallib::SNSAchievementData::Self> **)self + 43);
  v2 = *((std::vector<sociallib::SNSAchievementData::Self> **)self + 42);
  if ( v1 != v2 )
  {
    do
    {
      g4_std::string::Destroy((char *)v2 + 36);
      g4_std::string::Destroy((char *)v2 + 32);
      g4_std::string::Destroy((char *)v2 + 28);
      g4_std::string::Destroy((char *)v2 + 24);
      g4_std::string::Destroy((char *)v2 + 16);
      g4_std::string::Destroy((char *)v2 + 12);
      g4_std::string::Destroy((char *)v2 + 8);
      g4_std::string::Destroy((char *)v2 + 4);
      v10 = v2;
      v2 = (std::vector<sociallib::SNSAchievementData::Self> *)((char *)v2 + 52);
      g4_std::string::Destroy(v10);
    }
    while ( v1 != v2 );
    v2 = *((std::vector<sociallib::SNSAchievementData::Self> **)self + 42);
  }
  if ( v2 != nullptr )
    opDelete(v2);
  v3 = *((std::vector<sociallib::SNSAchievementData::Self> **)self + 39);
  v14 = *((std::vector<sociallib::SNSAchievementData::Self> **)self + 40);
  if ( v14 != v3 )
  {
    v4 = *((std::vector<sociallib::SNSAchievementData::Self> **)self + 39);
    do
    {
      v5 = *((uint32_t *)v4 + 2);
      if ( (uint32_t *)(v5 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v5 - 12));
      }
      g4_std::string::Destroy((char *)v4 + 4);
      v11 = v4;
      v4 = (std::vector<sociallib::SNSAchievementData::Self> *)((char *)v4 + 12);
      g4_std::string::Destroy(v11);
    }
    while ( v14 != v4 );
    v3 = *((std::vector<sociallib::SNSAchievementData::Self> **)self + 39);
  }
  if ( v3 != nullptr )
    opDelete(v3);
  v6 = *((std::vector<sociallib::SNSAchievementData::Self> **)self + 37);
  v7 = *((std::vector<sociallib::SNSAchievementData::Self> **)self + 36);
  if ( v6 != v7 )
  {
    do
    {
      g4_std::string::Destroy((char *)v7 + 32);
      g4_std::string::Destroy((char *)v7 + 28);
      g4_std::string::Destroy((char *)v7 + 24);
      g4_std::string::Destroy((char *)v7 + 20);
      g4_std::string::Destroy((char *)v7 + 4);
      v12 = v7;
      v7 = (std::vector<sociallib::SNSAchievementData::Self> *)((char *)v7 + 36);
      g4_std::string::Destroy(v12);
    }
    while ( v6 != v7 );
    v7 = *((std::vector<sociallib::SNSAchievementData::Self> **)self + 36);
  }
  if ( v7 != nullptr )
    opDelete(v7);
  g4_std::vector_sociallib_SNSAchievement_e77c94::Destroy((sociallib::SNSRequestState::Self *)((char *)self + 132));
  g4_std::Rb_tree_string_pair_string_const_586eb0::M_erase(
    (int)(uintptr_t)(self) + 100,
    *((void ***)self + 27));
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)(uintptr_t)(self) + 76,
    *((void **)self + 21));
  v8 = *((std::vector<sociallib::SNSAchievementData::Self> **)self + 17);
  v9 = *((std::vector<sociallib::SNSAchievementData::Self> **)self + 16);
  if ( v8 != v9 )
  {
    do
    {
      v13 = v9;
      v9 = (std::vector<sociallib::SNSAchievementData::Self> *)((char *)v9 + 4);
      g4_std::string::Destroy(v13);
    }
    while ( v8 != v9 );
    v9 = *((std::vector<sociallib::SNSAchievementData::Self> **)self + 16);
  }
  if ( v9 != nullptr )
    opDelete(v9);
  g4_std::string::Destroy((char *)self + 60);
  sociallib::CDynamicMemoryStream::Destroy((sociallib::SNSRequestState::Self *)((char *)self + 36));
  g4_std::string::Destroy((char *)self + 24);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::Construct  (binary VA: 0x14152a0)
// Original: sociallib::SNSRequestState::SNSRequestState
// ----------------------------------------------------------------------------
sociallib::SNSRequestState::Self * sociallib::SNSRequestState::Construct(sociallib::SNSRequestState::Self *self, const sociallib::SNSRequestState::Self *a2)
{
  int v2;
  const sociallib::SNSRequestState::Self *v3;
  sociallib::SNSRequestState::Self *v4;
  int v5;
  unsigned int j;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *i;
  int v16;
  int v17;
  int v18;
  size_t v19;
  int v20;
  uint32_t *v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  sociallib::SNSRequestState::Self *result;
  int v32;
  sociallib::SNSRequestState::Self *v33;
  sociallib::SNSRequestState::Self *v34;
  const sociallib::SNSRequestState::Self *v35;
  const sociallib::SNSRequestState::Self *v36;

  v2 = 0;
  v3 = a2;
  v4 = self;
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint8_t *)self + 20) = *((uint8_t *)a2 + 20);
  g4_std::string::construct_copy((char *)self + 24, (char *)a2 + 24);
  v5 = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 8) = v5;
  sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
    (sociallib::SNSRequestState::Self *)((char *)self + 36),
    (const sociallib::SNSRequestState::Self *)((char *)a2 + 36));
  *((uint8_t *)self + 56) = *((uint8_t *)a2 + 56);
  g4_std::string::construct_copy((char *)self + 60, (char *)a2 + 60);
  v7 = *((uint32_t *)v3 + 17) - *((uint32_t *)v3 + 16);
  v8 = 0;
  *((uint32_t *)self + 16) = 0;
  v9 = v7 >> 2;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  if ( v9 != 0 )
  {
    if ( v9 > 0x3FFFFFFF )
      goto LABEL_49;
    v2 = 4 * v9;
    v8 = opNew(4 * v9);
  }
  *((uint32_t *)self + 16) = v8;
  *((uint32_t *)self + 17) = v8;
  *((uint32_t *)self + 18) = v8 + v2;
  if ( *((uint32_t *)a2 + 17) != *((uint32_t *)a2 + 16) )
  {
    v10 = *((uint32_t *)a2 + 16);
    v11 = *((uint32_t *)a2 + 17);
    v12 = v8;
    do
    {
      if ( v12 != 0 )
        g4_std::string::construct_copy(v12, v10);
      v10 += 4;
      v12 += 4;
    }
    while ( v11 != v10 );
    v8 = v12;
    v4 = self;
    v3 = a2;
  }
  *((uint32_t *)v4 + 17) = v8;
  *((uint32_t *)v4 + 20) = 0;
  *((uint32_t *)v4 + 21) = 0;
  *((uint32_t *)v4 + 24) = 0;
  *((uint32_t *)v4 + 22) = (uint32_t)(uintptr_t)((char *)v4 + 80);
  *((uint32_t *)v4 + 23) = (uint32_t)(uintptr_t)((char *)v4 + 80);
  v13 = *((uint32_t **)v3 + 21);
  if ( v13 != nullptr )
  {
    v14 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
            (int)(uintptr_t)(v4) + 76,
            v13,
            (int)(uintptr_t)(v4) + 80);
    *((uint32_t *)v4 + 21) = (uint32_t)(uintptr_t)(v14);
    for ( i = v14; i[2] != 0; i = (uint32_t *)i[2] )
      ;
    *((uint32_t *)v4 + 22) = (uint32_t)(uintptr_t)(i);
    while ( v14[3] != 0 )
      v14 = (uint32_t *)v14[3];
    *((uint32_t *)v4 + 23) = (uint32_t)(uintptr_t)(v14);
    *((uint32_t *)v4 + 24) = *((uint32_t *)v3 + 24);
  }
  *((uint32_t *)v4 + 26) = 0;
  *((uint32_t *)v4 + 27) = 0;
  *((uint32_t *)v4 + 30) = 0;
  *((uint32_t *)v4 + 28) = (uint32_t)(uintptr_t)((char *)v4 + 104);
  *((uint32_t *)v4 + 29) = (uint32_t)(uintptr_t)((char *)v4 + 104);
  v9 = *((uint32_t *)v3 + 27);
  j = (unsigned int)(uintptr_t)(v4) + 100;
  if ( v9 != 0 )
  {
    v16 = g4_std::Rb_tree_string_pair_string_const_586eb0::M_copy(
            (int)(uintptr_t)(v4) + 100,
            v9,
            (int)(uintptr_t)(v4) + 104);
    *((uint32_t *)v4 + 27) = v16;
    for ( j = v16; *(uint32_t *)(j + 8) != 0; j = *(uint32_t *)(j + 8) )
      ;
    *((uint32_t *)v4 + 28) = j;
    while ( 1 )
    {
      v9 = *(uint32_t *)(v16 + 12);
      if ( v9 == 0 )
        break;
      v16 = *(uint32_t *)(v16 + 12);
    }
    *((uint32_t *)v4 + 29) = v16;
    *((uint32_t *)v4 + 30) = *((uint32_t *)v3 + 30);
  }
  *((uint32_t *)v4 + 31) = *((uint32_t *)v3 + 31);
  *((uint32_t *)v4 + 32) = *((uint32_t *)v3 + 32);
  v17 = *((uint32_t *)v3 + 34) - *((uint32_t *)v3 + 33);
  *((uint32_t *)v4 + 33) = 0;
  v18 = v17 >> 2;
  *((uint32_t *)v4 + 34) = 0;
  *((uint32_t *)v4 + 35) = 0;
  if ( -252645135 * v18 != 0 )
  {
    if ( (unsigned int)(-252645135 * v18) > 0x3C3C3C3 )
      goto LABEL_49;
    v19 = 4 * v18;
    v20 = opNew(v19);
  }
  else
  {
    v19 = 0;
    v20 = 0;
  }
  *((uint32_t *)v4 + 33) = v20;
  *((uint32_t *)v4 + 35) = v20 + v19;
  *((uint32_t *)v4 + 34) = v20;
  v21 = nullptr;
  *((uint32_t *)v4 + 34) = g4_std::uninitialized_copy_false_id_253916::uninit_copy_gnu_cxx_normal_iterator_c1e796(
                           *((uint32_t *)v3 + 33),
                           *((uint32_t *)v3 + 34),
                           v20);
  v9 = 0;
  v22 = (*((uint32_t *)v3 + 37) - *((uint32_t *)v3 + 36)) >> 2;
  *((uint32_t *)v4 + 36) = 0;
  j = 954437177 * v22;
  *((uint32_t *)v4 + 37) = 0;
  *((uint32_t *)v4 + 38) = 0;
  if ( 954437177 * v22 != 0 )
  {
    if ( j > 0x71C71C7 )
      goto LABEL_49;
    v32 = 4 * v22;
    v21 = (uint32_t *)opNew(4 * v22);
    v9 = v32;
  }
  *((uint32_t *)v4 + 36) = (uint32_t)(uintptr_t)(v21);
  *((uint32_t *)v4 + 37) = (uint32_t)(uintptr_t)(v21);
  *((uint32_t *)v4 + 38) = (uint32_t)(uintptr_t)((char *)v21 + v9);
  if ( *((uint32_t *)v3 + 37) != *((uint32_t *)v3 + 36) )
  {
    v33 = v4;
    v35 = v3;
    v23 = *((uint32_t **)v3 + 36);
    v24 = *((uint32_t **)v3 + 37);
    do
    {
      if ( v21 != nullptr )
      {
        g4_std::string::construct_copy(v21, v23);
        g4_std::string::construct_copy(v21 + 1, v23 + 1);
        v25 = v23[3];
        v21[2] = v23[2];
        v21[3] = v25;
        v21[4] = v23[4];
        g4_std::string::construct_copy(v21 + 5, v23 + 5);
        g4_std::string::construct_copy(v21 + 6, v23 + 6);
        g4_std::string::construct_copy(v21 + 7, v23 + 7);
        g4_std::string::construct_copy(v21 + 8, v23 + 8);
      }
      v23 += 9;
      v21 += 9;
    }
    while ( v24 != v23 );
    v4 = v33;
    v3 = v35;
  }
  *((uint32_t *)v4 + 37) = (uint32_t)(uintptr_t)(v21);
  v26 = 0;
  v9 = (*((uint32_t *)v3 + 40) - *((uint32_t *)v3 + 39)) >> 2;
  v27 = 0;
  j = -1431655765 * v9;
  *((uint32_t *)v4 + 39) = 0;
  *((uint32_t *)v4 + 40) = 0;
  *((uint32_t *)v4 + 41) = 0;
  if ( -1431655765 * v9 != 0 )
  {
    if ( j <= 0x15555555 )
    {
      v26 = 4 * v9;
      v27 = opNew(4 * v9);
      goto LABEL_41;
    }
LABEL_49:
    sub_18FFEE0(j, v9);
  }
LABEL_41:
  *((uint32_t *)v4 + 39) = v27;
  *((uint32_t *)v4 + 40) = v27;
  *((uint32_t *)v4 + 41) = v27 + v26;
  v28 = *((uint32_t *)v3 + 39);
  if ( *((uint32_t *)v3 + 40) != v28 )
  {
    v34 = v4;
    v36 = v3;
    v29 = v27;
    v30 = *((uint32_t *)v3 + 40);
    do
    {
      if ( v29 != 0 )
      {
        g4_std::string::construct_copy(v29, v28);
        g4_std::string::construct_copy(v29 + 4, v28 + 4);
        g4_std::string::construct_copy(v29 + 8, v28 + 8);
      }
      v28 += 12;
      v29 += 12;
    }
    while ( v30 != v28 );
    v27 = v29;
    v3 = v36;
    v4 = v34;
  }
  *((uint32_t *)v4 + 40) = v27;
  g4_std::vector_sociallib_SNSLikeData_4d2cfa::Construct(
    (sociallib::SNSRequestState::Self *)((char *)v4 + 168),
    (const sociallib::SNSRequestState::Self *)((char *)v3 + 168));
  sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
    (sociallib::SNSRequestState::Self *)((char *)v4 + 180),
    (const sociallib::SNSRequestState::Self *)((char *)v3 + 180));
  *((uint32_t *)v4 + 50) = *((uint32_t *)v3 + 50);
  *((uint8_t *)v4 + 204) = *((uint8_t *)v3 + 204);
  *((uint8_t *)v4 + 205) = *((uint8_t *)v3 + 205);
  result = *((sociallib::SNSRequestState::Self **)v3 + 52);
  *((uint32_t *)v4 + 52) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::Construct  (binary VA: 0x141b810)
// Original: sociallib::SNSRequestState::SNSRequestState
// ----------------------------------------------------------------------------
int sociallib::SNSRequestState::Construct(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  int result;

  *(uint32_t *)(a1 + 4) = a7;
  *(uint32_t *)(a1 + 8) = a5;
  *(uint32_t *)(a1 + 12) = a6;
  *(uint32_t *)(a1 + 16) = a2;
  *(uint32_t *)(a1 + 32) = a4;
  *(uint8_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 28) = a3;
  sociallib::CDynamicMemoryStream::CDynamicMemoryStream((sociallib::CDynamicMemoryStream::Self *)(a1 + 36), nullptr, 0);
  *(uint32_t *)(a1 + 60) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  *(uint32_t *)(a1 + 72) = 0;
  *(uint32_t *)(a1 + 80) = 0;
  *(uint32_t *)(a1 + 84) = 0;
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 104) = 0;
  *(uint32_t *)(a1 + 108) = 0;
  *(uint32_t *)(a1 + 120) = 0;
  *(uint32_t *)(a1 + 124) = -1;
  *(uint32_t *)(a1 + 128) = -1;
  *(uint32_t *)(a1 + 132) = 0;
  *(uint32_t *)(a1 + 136) = 0;
  *(uint32_t *)(a1 + 140) = 0;
  *(uint32_t *)(a1 + 144) = 0;
  *(uint32_t *)(a1 + 148) = 0;
  *(uint32_t *)(a1 + 152) = 0;
  *(uint32_t *)(a1 + 156) = 0;
  *(uint32_t *)(a1 + 160) = 0;
  *(uint32_t *)(a1 + 164) = 0;
  *(uint32_t *)(a1 + 168) = 0;
  *(uint32_t *)(a1 + 172) = 0;
  *(uint32_t *)(a1 + 176) = 0;
  *(uint32_t *)(a1 + 88) = a1 + 80;
  *(uint32_t *)(a1 + 92) = a1 + 80;
  *(uint32_t *)(a1 + 112) = a1 + 104;
  *(uint32_t *)(a1 + 116) = a1 + 104;
  sociallib::CDynamicMemoryStream::CDynamicMemoryStream((sociallib::CDynamicMemoryStream::Self *)(a1 + 180), nullptr, 0);
  *(uint8_t *)(a1 + 204) = 0;
  *(uint8_t *)(a1 + 205) = 0;
  *(uint32_t *)(a1 + 208) = 0;
  g4_std::string::clear(a1 + 24, 0, *(uint32_t *)(*(uint32_t *)(a1 + 24) - 12), 0);
  v7 = dword_21198AC;
  *(uint32_t *)a1 = dword_21198AC;
  result = v7 + 1;
  dword_21198AC = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::getParamListSize  (binary VA: 0x141b9d0)
// Original: sociallib::SNSRequestState::getParamListSize
// ----------------------------------------------------------------------------
int sociallib::SNSRequestState::getParamListSize(sociallib::SNSRequestState::Self *self)
{
  char v2[8];

  sociallib::CMemoryStream::seek((char *)self + 36, 0, 0);
  sociallib::CMemoryStream::readBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), v2, 4u);
  return *(uint32_t *)v2;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::getParamType  (binary VA: 0x141ba30)
// Original: sociallib::SNSRequestState::getParamType
// ----------------------------------------------------------------------------
int sociallib::SNSRequestState::getParamType(sociallib::SNSRequestState::Self *self)
{
  char v2[16];

  sociallib::CMemoryStream::readBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), v2, 4u);
  return *(uint32_t *)v2;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::getStringParam  (binary VA: 0x141ba70)
// Original: sociallib::SNSRequestState::getStringParam
// ----------------------------------------------------------------------------
sociallib::SNSRequestState::Self * sociallib::SNSRequestState::getStringParam(sociallib::SNSRequestState::Self *self, int a2)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  sociallib::CMemoryStream::readUTF8((sociallib::CMemoryStream::Self *)(a2 + 36), (int)(uintptr_t)(self));
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::getStringArrayParam  (binary VA: 0x141bac0)
// Original: sociallib::SNSRequestState::getStringArrayParam
// ----------------------------------------------------------------------------
sociallib::SNSRequestState::Self * sociallib::SNSRequestState::getStringArrayParam(sociallib::SNSRequestState::Self *self, int a2)
{
  sociallib::SNSRequestState::Self *v2;
  int v3;
  int v4;
  bool v5; // cc
  uint32_t *v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  void *v22;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef sociallib::SNSRequestState::Self *_g4_t_v31;
  typedef sociallib::SNSRequestState::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char _g4_t_v35[4];
  typedef int _g4_t_v36[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v25)) > _g4_s1 ? (8u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v26)) > _g4_s2 ? (8u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v27)) > _g4_s3 ? (16u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v28)) > _g4_s4 ? (20u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v29)) > _g4_s5 ? (20u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v30)) > _g4_s6 ? (20u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v31)) > _g4_s7 ? (24u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v32)) > _g4_s8 ? (24u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v33)) > _g4_s9 ? (24u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v34)) > _g4_s10 ? (28u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v35)) > _g4_s11 ? (40u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v36)) > _g4_s12 ? (44u + sizeof(_g4_t_v36)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);

  v2 = self;
  *(uint32_t *)v35 = 0;
  v36[0] = (int)(uintptr_t)(&dword_213B814);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  sociallib::CMemoryStream::readBytes((sociallib::CMemoryStream::Self *)(a2 + 36), v35, 4u);
  if ( *(int *)v35 > 0 )
  {
    v3 = 0;
    do
    {
      while ( 1 )
      {
        sociallib::CMemoryStream::readUTF8((sociallib::CMemoryStream::Self *)(a2 + 36), (int)(uintptr_t)(v36));
        v6 = *((uint32_t **)v2 + 1);
        if ( v6 != *((uint32_t **)v2 + 2) )
          break;
        v7 = ((int)(uintptr_t)(v6) - *(uint32_t *)v2) >> 2;
        v27 = 4;
        if ( v7 != 0 )
        {
          if ( v7 > 2 * v7 || 2 * v7 > 0x3FFFFFFF )
            v27 = -4;
          else
            v27 = 8 * v7;
        }
        v24 = ((int)(uintptr_t)(v6) - *(uint32_t *)v2) >> 2;
        v8 = opNew(v27);
        v9 = v8 + 4;
        v34 = v8;
        v10 = v8 + 4 * v24;
        if ( v10 != 0 )
        {
          v25 = v8 + 4;
          g4_std::string::construct_copy(v10, v36);
          v9 = v25;
        }
        if ( v6 != *(uint32_t **)v2 )
        {
          v28 = v3;
          v31 = v2;
          v11 = v6;
          v12 = *(uint32_t **)v2;
          v13 = v34;
          do
          {
            if ( v13 != 0 )
              g4_std::string::construct_copy(v13, v12);
            ++v12;
            v13 += 4;
          }
          while ( v11 != v12 );
          v14 = v13;
          v2 = v31;
          v6 = v11;
          v9 = v14 + 4;
          v3 = v28;
        }
        v15 = *((uint32_t **)v2 + 1);
        if ( v6 != v15 )
        {
          v29 = v3;
          v32 = v2;
          v16 = *((uint32_t **)v2 + 1);
          v17 = v6;
          v18 = v9;
          do
          {
            if ( v18 != 0 )
              g4_std::string::construct_copy(v18, v17);
            ++v17;
            v18 += 4;
          }
          while ( v16 != v17 );
          v2 = v32;
          v3 = v29;
          v9 = v18;
          v15 = *((uint32_t **)v32 + 1);
        }
        v19 = *(uint32_t **)v2;
        if ( *(uint32_t **)v2 != v15 )
        {
          v30 = v3;
          v33 = v9;
          v20 = v15;
          do
          {
            v21 = (uint32_t *)(*v19 - 12);
            if ( v21 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v19 - 4), 0xFFFFFFFF) <= 0 )
              g4_std::string::Rep::M_destroy(v21);
            ++v19;
          }
          while ( v19 != v20 );
          v3 = v30;
          v9 = v33;
          v19 = *(uint32_t **)v2;
        }
        if ( v19 != nullptr )
        {
          v26 = v9;
          opDelete(v19);
          v9 = v26;
        }
        ++v3;
        *(uint32_t *)v2 = v34;
        v5 = *(uint32_t *)v35 <= v3;
        *((uint32_t *)v2 + 1) = v9;
        *((uint32_t *)v2 + 2) = v27 + v34;
        if ( v5 )
          goto LABEL_32;
      }
      v4 = 0;
      if ( v6 != nullptr )
      {
        g4_std::string::construct_copy(*((uint32_t *)v2 + 1), v36);
        v4 = *((uint32_t *)v2 + 1);
      }
      v5 = *(uint32_t *)v35 <= ++v3;
      *((uint32_t *)v2 + 1) = v4 + 4;
    }
    while ( !v5 );
  }
LABEL_32:
  v22 = (void *)(v36[0] - 12);
  if ( (uint32_t *)(v36[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v22);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::getIntParam  (binary VA: 0x141bd40)
// Original: sociallib::SNSRequestState::getIntParam
// ----------------------------------------------------------------------------
int sociallib::SNSRequestState::getIntParam(sociallib::SNSRequestState::Self *self)
{
  char v2[16];

  sociallib::CMemoryStream::readBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), v2, 4u);
  return *(uint32_t *)v2;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::getUnsignedIntParam  (binary VA: 0x141bd80)
// Original: sociallib::SNSRequestState::getUnsignedIntParam
// ----------------------------------------------------------------------------
int sociallib::SNSRequestState::getUnsignedIntParam(sociallib::SNSRequestState::Self *self)
{
  char v2[16];

  sociallib::CMemoryStream::readBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), v2, 4u);
  return *(uint32_t *)v2;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::getInt64Param  (binary VA: 0x141bdc0)
// Original: sociallib::SNSRequestState::getInt64Param
// ----------------------------------------------------------------------------
int64_t sociallib::SNSRequestState::getInt64Param(sociallib::SNSRequestState::Self *self)
{
  char v2[20];

  sociallib::CMemoryStream::readBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), v2, 8u);
  return *(uint64_t *)v2;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::getBoolParam  (binary VA: 0x141be00)
// Original: sociallib::SNSRequestState::getBoolParam
// ----------------------------------------------------------------------------
int sociallib::SNSRequestState::getBoolParam(sociallib::SNSRequestState::Self *self)
{
  char v2[13];

  sociallib::CMemoryStream::readBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), v2, 1u);
  return (uint8_t)v2[0];
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::writeParamListSize  (binary VA: 0x141be40)
// Original: sociallib::SNSRequestState::writeParamListSize
// ----------------------------------------------------------------------------
int sociallib::SNSRequestState::writeParamListSize(sociallib::SNSRequestState::Self *self, ...)
{
  va_list va;

  va_start(va, self);
  uint32_t va_val = va_arg(va, uint32_t);
  va_end(va);
  return sociallib::CMemoryStream::writeBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), (const char *)&va_val, 4u);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::writeStringParam  (binary VA: 0x141be80)
// Original: sociallib::SNSRequestState::writeStringParam
// ----------------------------------------------------------------------------
int sociallib::SNSRequestState::writeStringParam(int a1, int a2)
{
  char v3[8];

  *(uint32_t *)v3 = 1;
  sociallib::CMemoryStream::writeBytes((sociallib::CMemoryStream::Self *)(a1 + 36), v3, 4u);
  return sociallib::CMemoryStream::writeUTF8((sociallib::CMemoryStream::Self *)(a1 + 36), a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::writeStringArrayParam  (binary VA: 0x141bee0)
// Original: sociallib::SNSRequestState::writeStringArrayParam
// ----------------------------------------------------------------------------
int sociallib::SNSRequestState::writeStringArrayParam(sociallib::SNSRequestState::Self *self, const std::vector<std::string> *a2)
{
  int result;
  int v3;
  typedef char *_g4_t_v4;
  typedef char _g4_t_v5[4];
  typedef char _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v5)) > _g4_s1 ? (24u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  *(uint32_t *)v5 = 2;
  sociallib::CMemoryStream::writeBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), v5, 4u);
  *(uint32_t *)v6 = (*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 2;
  result = sociallib::CMemoryStream::writeBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), v6, 4u);
  if ( *(int *)v6 > 0 )
  {
    v3 = 0;
    do
    {
      v4 = (char *)(*(uint32_t *)a2 + 4 * v3++);
      result = sociallib::CMemoryStream::writeUTF8((sociallib::SNSRequestState::Self *)((char *)self + 36), (int)(uintptr_t)(v4));
    }
    while ( *(int *)v6 > v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::writeIntParam  (binary VA: 0x141bf80)
// Original: sociallib::SNSRequestState::writeIntParam
// ----------------------------------------------------------------------------
int sociallib::SNSRequestState::writeIntParam(sociallib::SNSRequestState::Self *self, ...)
{
  char v2[8];
  va_list va;

  va_start(va, self);
  *(uint32_t *)v2 = 3;
  sociallib::CMemoryStream::writeBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), v2, 4u);
  return sociallib::CMemoryStream::writeBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), g4_va_cast<const char *>(va), 4u);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::writeUnsignedIntParam  (binary VA: 0x141bff0)
// Original: sociallib::SNSRequestState::writeUnsignedIntParam
// ----------------------------------------------------------------------------
int sociallib::SNSRequestState::writeUnsignedIntParam(sociallib::SNSRequestState::Self *self, ...)
{
  char v2[8];
  va_list va;

  va_start(va, self);
  *(uint32_t *)v2 = 4;
  sociallib::CMemoryStream::writeBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), v2, 4u);
  return sociallib::CMemoryStream::writeBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), g4_va_cast<const char *>(va), 4u);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::writeInt64Param  (binary VA: 0x141c060)
// Original: sociallib::SNSRequestState::writeInt64Param
// ----------------------------------------------------------------------------
int sociallib::SNSRequestState::writeInt64Param(sociallib::SNSRequestState::Self *self, int64_t a2)
{
  typedef int64_t _g4_t_v3;
  typedef char _g4_t_v4[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v4)) > _g4_s1 ? (28u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 28u);

  v3 = a2;
  *(uint32_t *)v4 = 5;
  sociallib::CMemoryStream::writeBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), v4, 4u);
  return sociallib::CMemoryStream::writeBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), (const char *)&v3, 8u);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::writeBoolParam  (binary VA: 0x141c0e0)
// Original: sociallib::SNSRequestState::writeBoolParam
// ----------------------------------------------------------------------------
int sociallib::SNSRequestState::writeBoolParam(sociallib::SNSRequestState::Self *self, char a2)
{
  typedef char _g4_t_v3[16];
  typedef char _g4_t_v4[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v4)) > _g4_s1 ? (28u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 28u);

  v3[0] = a2;
  *(uint32_t *)v4 = 6;
  sociallib::CMemoryStream::writeBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), v4, 4u);
  return sociallib::CMemoryStream::writeBytes((sociallib::SNSRequestState::Self *)((char *)self + 36), v3, 1u);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::static_initSNSRequestTypeNames  (binary VA: 0x141c150)
// Original: sociallib::SNSRequestState::static_initSNSRequestTypeNames
// ----------------------------------------------------------------------------
sociallib::SNSRequestState::Self * sociallib::SNSRequestState::static_initSNSRequestTypeNames(sociallib::SNSRequestState::Self *self)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = &dword_213B814;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  g4_std::vector_string_86c307::M_fill_insert(self, 0, 67, &v3);
  v1 = v3 - 3;
  if ( v3 - 3 != dword_213B808 && __sync_fetch_and_add(v3 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
  g4_std_compat::string_assign(*(uint32_t *)self, "Request Queue Empty", 0x13u);
  g4_std_compat::string_assign(*(uint32_t *)self + 4, "ERROR", 5u);
  g4_std_compat::string_assign(*(uint32_t *)self + 8, "UID", 3u);
  g4_std_compat::string_assign(*(uint32_t *)self + 12, "FRIENDS", 7u);
  g4_std_compat::string_assign(*(uint32_t *)self + 16, "FRIENDS_NOT_PLAYING", 0x13u);
  g4_std_compat::string_assign(*(uint32_t *)self + 20, "FRIENDS DATA", 0xCu);
  g4_std_compat::string_assign(*(uint32_t *)self + 24, "FRIENDS_NOT_PLAYING_DATA", 0x18u);
  g4_std_compat::string_assign(*(uint32_t *)self + 28, "USER_DATA", 9u);
  g4_std_compat::string_assign(*(uint32_t *)self + 32, "USER_NAMES", 0xAu);
  g4_std_compat::string_assign(*(uint32_t *)self + 36, "NAME", 4u);
  g4_std_compat::string_assign(*(uint32_t *)self + 40, "AVATAR", 6u);
  g4_std_compat::string_assign(*(uint32_t *)self + 44, "USER_AVATAR", 0xBu);
  g4_std_compat::string_assign(*(uint32_t *)self + 48, "APP_ID", 6u);
  g4_std_compat::string_assign(*(uint32_t *)self + 52, "ADD_FRIEND", 0xAu);
  g4_std_compat::string_assign(*(uint32_t *)self + 56, "LIKE", 4u);
  g4_std_compat::string_assign(*(uint32_t *)self + 60, "LIKE_OBJECT", 0xBu);
  g4_std_compat::string_assign(*(uint32_t *)self + 68, "POST_TO_WALL", 0xCu);
  g4_std_compat::string_assign(*(uint32_t *)self + 72, "LOGIN", 5u);
  g4_std_compat::string_assign(*(uint32_t *)self + 76, "LOGOUT", 6u);
  g4_std_compat::string_assign(*(uint32_t *)self + 80, "HAS_PERMISSION", 0xEu);
  g4_std_compat::string_assign(*(uint32_t *)self + 84, "REQUEST_PERMISSIONS", 0x13u);
  g4_std_compat::string_assign(*(uint32_t *)self + 88, "RETREIVE_PASSWORD", 0x11u);
  g4_std_compat::string_assign(*(uint32_t *)self + 92, "INIT", 4u);
  g4_std_compat::string_assign(*(uint32_t *)self + 96, "POST_TO_WALL_WITHOUT_DIALOG", 0x1Bu);
  g4_std_compat::string_assign(*(uint32_t *)self + 100, "POST_PHOTO_TO_WALL_WITHOUT_DIALOG", 0x21u);
  g4_std_compat::string_assign(*(uint32_t *)self + 104, "POST_TO_FRIENDS_WALL", 0x14u);
  g4_std_compat::string_assign(*(uint32_t *)self + 108, "POST_TO_FRIENDS_WALL_WITHOUTDIALOG", 0x22u);
  g4_std_compat::string_assign(*(uint32_t *)self + 112, "POST_OPEN_GRAPH_ACTION", 0x16u);
  g4_std_compat::string_assign(*(uint32_t *)self + 116, "SEND_MESSAGE_TO", 0xFu);
  g4_std_compat::string_assign(*(uint32_t *)self + 120, "POST_REVIEW", 0xBu);
  g4_std_compat::string_assign(*(uint32_t *)self + 124, "ISSUE_ACHIEVEMENT_CHALLENGE", 0x1Bu);
  g4_std_compat::string_assign(*(uint32_t *)self + 128, "SELECT_ACHIEVEMENT_CHALLENGEABLE_PLAYERS", 0x28u);
  g4_std_compat::string_assign(*(uint32_t *)self + 132, "GOT_ACHIEVEMENT", 0xFu);
  g4_std_compat::string_assign(*(uint32_t *)self + 200, "INCREMENT_ACHIEVEMENT", 0x15u);
  g4_std_compat::string_assign(*(uint32_t *)self + 208, "RESET_ACHIEVEMENTS", 0x12u);
  g4_std_compat::string_assign(*(uint32_t *)self + 212, "RESET_ACHIEVEMENT", 0x11u);
  g4_std_compat::string_assign(*(uint32_t *)self + 192, "SHOW_ACHIVEMENTS", 0x10u);
  g4_std_compat::string_assign(*(uint32_t *)self + 216, "GET_USER_ACHIEVEMENTS", 0x15u);
  g4_std_compat::string_assign(*(uint32_t *)self + 224, "GET_ALL_ACHIEVEMENTS", 0x14u);
  g4_std_compat::string_assign(*(uint32_t *)self + 136, "ISSUE_LEADERBOARD_CHALLENGE", 0x1Bu);
  g4_std_compat::string_assign(*(uint32_t *)self + 140, "SELECT_LEADERBOARD_CHALLENGEABLE_PLAYERS", 0x28u);
  g4_std_compat::string_assign(*(uint32_t *)self + 144, "GET_LEADERBOARD_ROWS", 0x14u);
  g4_std_compat::string_assign(*(uint32_t *)self + 148, "POST_LEADERBOARD_SCORE", 0x16u);
  g4_std_compat::string_assign(*(uint32_t *)self + 152, "GET_USER_LEADERBOARD_RANK", 0x19u);
  g4_std_compat::string_assign(*(uint32_t *)self + 156, "GET_USER_LEADERBOARD_SCORE", 0x1Au);
  g4_std_compat::string_assign(*(uint32_t *)self + 160, "GET_LEADERBOARDS", 0x10u);
  g4_std_compat::string_assign(*(uint32_t *)self + 196, "SHOW_LEADEARBOARD_BY_ID", 0x17u);
  g4_std_compat::string_assign(*(uint32_t *)self + 164, "USER_SCORE", 0xAu);
  g4_std_compat::string_assign(*(uint32_t *)self + 168, "APP_SCORES", 0xAu);
  g4_std_compat::string_assign(*(uint32_t *)self + 172, "UPDATE_USER_SCORE", 0x11u);
  g4_std_compat::string_assign(*(uint32_t *)self + 176, "DELETE_USER_SCORE", 0x11u);
  g4_std_compat::string_assign(*(uint32_t *)self + 180, "GAME_REQUEST", 0xCu);
  g4_std_compat::string_assign(*(uint32_t *)self + 184, "GET_COUNTRY", 0xBu);
  g4_std_compat::string_assign(*(uint32_t *)self + 188, "APP", 3u);
  g4_std_compat::string_assign(*(uint32_t *)self + 220, "UPLOAD_PHOTO", 0xCu);
  g4_std_compat::string_assign(*(uint32_t *)self + 228, "NUMBER_OF_MATCHES", 0x11u);
  g4_std_compat::string_assign(*(uint32_t *)self + 232, "SAVE_ON_CLOUD", 0xDu);
  g4_std_compat::string_assign(*(uint32_t *)self + 236, "GET_FROM_CLOUD", 0xEu);
  g4_std_compat::string_assign(*(uint32_t *)self + 240, "ON_NEW_CLOUD_DATA", 0x11u);
  g4_std_compat::string_assign(*(uint32_t *)self + 244, "BILATERAL_FRIENDS_DATA", 0x16u);
  g4_std_compat::string_assign(*(uint32_t *)self + 248, "BILATERAL_FRIENDS", 0x11u);
  g4_std_compat::string_assign(*(uint32_t *)self + 252, "UPLOAD_VIDEO", 0xCu);
  g4_std_compat::string_assign(*(uint32_t *)self + 256, "GET_USER_LOCALE", 0xFu);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSRequestState::static_initSNSNames  (binary VA: 0x141c9d0)
// Original: sociallib::SNSRequestState::static_initSNSNames
// ----------------------------------------------------------------------------
sociallib::SNSRequestState::Self * sociallib::SNSRequestState::static_initSNSNames(sociallib::SNSRequestState::Self *self)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = &dword_213B814;
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  g4_std::vector_string_86c307::M_fill_insert(self, 0, 18, &v3);
  v1 = v3 - 3;
  if ( v3 - 3 != dword_213B808 && __sync_fetch_and_add(v3 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
  g4_std_compat::string_assign(*(uint32_t *)self + 16, "CLIENT_SNS_FACEBOOK", 0x13u);
  g4_std_compat::string_assign(*(uint32_t *)self + 52, "CLIENT_SNS_GAME_API", 0x13u);
  g4_std_compat::string_assign(*(uint32_t *)self + 20, "CLIENT_SNS_GAME_CENTER", 0x16u);
  g4_std_compat::string_assign(*(uint32_t *)self + 24, "CLIENT_SNS_GLLIVE", 0x11u);
  g4_std_compat::string_assign(*(uint32_t *)self + 28, "CLIENT_SNS_TWITTER", 0x12u);
  g4_std_compat::string_assign(*(uint32_t *)self + 40, "CLIENT_SNS_SINA_WEIBO", 0x15u);
  g4_std_compat::string_assign(*(uint32_t *)self + 44, "CLIENT_SNS_RENREN", 0x11u);
  g4_std_compat::string_assign(*(uint32_t *)self + 48, "CLIENT_SNS_VK", 0xDu);
  g4_std_compat::string_assign(*(uint32_t *)self + 56, "CLIENT_SNS_XBOXLIVE", 0x13u);
  g4_std_compat::string_assign(*(uint32_t *)self + 64, "CLIENT_SNS_KAKAO", 0x10u);
  g4_std_compat::string_assign(*(uint32_t *)self + 36, "CLIENT_SNS_NUMBER_PHONEBOOK", 0x1Bu);
  return self;
}


