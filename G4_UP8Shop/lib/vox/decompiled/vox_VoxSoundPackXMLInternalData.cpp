#include "Core/Utils/DecompTypes.h"
#include "vox_VoxSoundPackXMLInternalData.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXMLInternalData::Construct  (binary VA: 0x1018c50)
// Original: vox::VoxSoundPackXMLInternalData::VoxSoundPackXMLInternalData
// ----------------------------------------------------------------------------
vox::VoxSoundPackXMLInternalData::Self * vox::VoxSoundPackXMLInternalData::Construct(vox::VoxSoundPackXMLInternalData::Self *self)
{
  vox::VoxSoundPackXMLInternalData::Self *result;

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 25) = 64;
  result = (vox::VoxSoundPackXMLInternalData::Self *)VoxAllocInternal(
                                                 0x40u,
                                                 0,
                                                 (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
                                                 (int)(uintptr_t)("VoxSoundPackXMLInternalData"),
                                                 131);
  *((uint32_t *)self + 24) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXMLInternalData::Destroy  (binary VA: 0x1018d50)
// Original: vox::VoxSoundPackXMLInternalData::~VoxSoundPackXMLInternalData
// ----------------------------------------------------------------------------
void vox::VoxSoundPackXMLInternalData::Destroy(void **self)
{
  void **v1;
  char *v2;
  char *v3;
  void **v4;
  char *v5;
  char *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  void **v16;
  char *v17;
  uint32_t *v18;
  char *v19;
  char *v20;

  v1 = self;
  if ( *(self + 24) != nullptr )
  {
    VoxFreeInternal(*(self + 24));
    v1 = self;
    *(self + 24) = nullptr;
    *(self + 25) = nullptr;
  }
  if ( v1[21] != nullptr )
  {
    VoxFreeInternal(v1[21]);
    v1 = self;
  }
  if ( v1[18] != nullptr )
  {
    VoxFreeInternal(v1[18]);
    v1 = self;
  }
  v2 = (char *)v1[15];
  v17 = v2;
  v19 = (char *)*(self + 16);
  if ( v19 != v2 )
  {
    v3 = v2;
    v20 = v2 + 4;
    do
    {
      if ( *(uint32_t *)v3 != 0 )
        VoxFreeInternal(*(void **)v3);
      v4 = *((void ***)v3 + 13);
      if ( v4 != nullptr )
      {
        if ( *v4 != nullptr )
        {
          VoxFreeInternal(*v4);
          v4 = *((void ***)v3 + 13);
        }
        VoxFreeInternal(v4);
      }
      if ( *((uint32_t *)v3 + 3) != 0 )
        VoxFreeInternal(*((void **)v3 + 3));
      v5 = *(char **)&v20[v3 - v17];
      if ( v5 != v3 + 4 )
      {
        while ( 1 )
        {
          v6 = *(char **)v5;
          VoxFreeInternal(v5);
          if ( v6 == v3 + 4 )
            break;
          v5 = v6;
        }
      }
      v3 += 56;
    }
    while ( v19 != v3 );
    v17 = (char *)*(self + 15);
  }
  if ( v17 != nullptr )
    VoxFreeInternal(v17);
  v7 = (uint32_t *)(*(self + 13));
  v8 = (uint32_t *)(*(self + 12));
  if ( v7 != v8 )
  {
    do
    {
      v9 = (uint32_t *)(*v8 - 12);
      if ( v9 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v8 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v9);
      v8 += 7;
    }
    while ( v7 != v8 );
    v8 = (uint32_t *)(*(self + 12));
  }
  if ( v8 != nullptr )
    VoxFreeInternal(v8);
  v10 = (uint32_t *)(*(self + 9));
  v18 = (uint32_t *)(*(self + 10));
  if ( v18 != v10 )
  {
    v11 = (uint32_t *)(*(self + 9));
    do
    {
      v12 = v11[1];
      if ( (uint32_t *)(v12 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v12 - 12));
      }
      v13 = (uint32_t *)(*v11 - 12);
      if ( v13 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v11 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v13);
      v11 += 20;
    }
    while ( v18 != v11 );
    v10 = (uint32_t *)(*(self + 9));
  }
  if ( v10 != nullptr )
    VoxFreeInternal(v10);
  v14 = (int)(uintptr_t)(*(self + 7));
  v15 = (int)(uintptr_t)(*(self + 6));
  if ( v14 != v15 )
  {
    do
    {
      if ( *(uint32_t *)(v15 + 4) != 0 )
        VoxFreeInternal(*(void **)(v15 + 4));
      if ( *(uint32_t *)(v15 + 8) != 0 )
        VoxFreeInternal(*(void **)(v15 + 8));
      if ( *(uint32_t *)(v15 + 20) != 0 )
        VoxFreeInternal(*(void **)(v15 + 20));
      v16 = *(void ***)(v15 + 92);
      if ( v16 != nullptr )
      {
        if ( *v16 != nullptr )
        {
          VoxFreeInternal(*v16);
          v16 = *(void ***)(v15 + 92);
        }
        VoxFreeInternal(v16);
      }
      v15 += 96;
    }
    while ( v14 != v15 );
    v15 = (int)(uintptr_t)(*(self + 6));
  }
  if ( v15 != 0 )
    VoxFreeInternal((void *)v15);
  VoxFreeInternal(*(self + 3));
  *(self + 3) = nullptr;
  VoxFreeInternal(*(self + 4));
  *(self + 4) = nullptr;
  VoxFreeInternal(*(self + 5));
  *(self + 5) = nullptr;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXMLInternalData::HashTableBinarySearch  (binary VA: 0x1019050)
// Original: vox::VoxSoundPackXMLInternalData::HashTableBinarySearch
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXMLInternalData::HashTableBinarySearch(int a1, uint32_t *a2, unsigned int *a3)
{
  int result;
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  unsigned int *v8;

  result = 0;
  v4 = ((a2[1] - *a2) >> 3) - 1;
  if ( v4 >= 0 )
  {
    v5 = *a3;
    v6 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v6 + ((v4 - v6) >> 1);
        v8 = (unsigned int *)(*a2 + 8 * v7);
        if ( *v8 >= v5 )
          break;
        v6 = v7 + 1;
        if ( v4 < v7 + 1 )
          return 0;
      }
      if ( *v8 <= v5 )
        break;
      v4 = v7 - 1;
      if ( v7 - 1 < v6 )
        return 0;
    }
    a3[1] = v8[1];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXMLInternalData::GetLowerCaseHashLabel  (binary VA: 0x10190c0)
// Original: vox::VoxSoundPackXMLInternalData::GetLowerCaseHashLabel
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXMLInternalData::GetLowerCaseHashLabel(vox::VoxSoundPackXMLInternalData::Self *self, char *s)
{
  int v2;
  int v3;
  int v4;
  int i;
  char v6;
  signed int v8;

  v8 = strlen(s);
  v2 = *((uint32_t *)self + 24);
  if ( v8 + 2 > *((uint32_t *)self + 25) )
  {
    if ( v2 != 0 )
      VoxFreeInternal(*((void **)self + 24));
    v2 = VoxAllocInternal(
           v8 + 2,
           0,
           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_soundpack_xml.cpp"),
           (int)(uintptr_t)("GetLowerCaseHashLabel"),
           195);
    v3 = 0;
    *((uint32_t *)self + 24) = v2;
    if ( v2 != 0 )
      v3 = v8 + 2;
    *((uint32_t *)self + 25) = v3;
  }
  if ( v8 > 0 )
  {
    v4 = 0;
    for ( i = v2; ; i = *((uint32_t *)self + 24) )
    {
      v6 = s[v4];
      if ( (uint8_t)(v6 - 65) <= 0x19u )
        v6 += 32;
      *(uint8_t *)(i + v4++) = v6;
      if ( v8 == v4 )
        break;
    }
    v2 = *((uint32_t *)self + 24);
  }
  *(uint8_t *)(v2 + v8) = 0;
  return *((uint32_t *)self + 24);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXMLInternalData::Hash  (binary VA: 0x1019190)
// Original: vox::VoxSoundPackXMLInternalData::Hash
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXMLInternalData::Hash(vox::VoxSoundPackXMLInternalData::Self *self, char *s)
{
  size_t v2;

  v2 = strlen(s);
  return crc32mpc(s, v2);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXMLInternalData::GetUniqueHash  (binary VA: 0x10191d0)
// Original: vox::VoxSoundPackXMLInternalData::GetUniqueHash
// ----------------------------------------------------------------------------
unsigned int vox::VoxSoundPackXMLInternalData::GetUniqueHash(vox::VoxSoundPackXMLInternalData::Self *a1, uint32_t *a2, int a3, char *a4)
{
  unsigned int v4;
  char *LowerCaseHashLabel;
  typedef unsigned int _g4_t_v7;
  typedef size_t _g4_t_v8;
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  typedef unsigned int _g4_t_v11[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (30u + sizeof(_g4_t_v9)) > _g4_s2 ? (30u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v10)) > _g4_s3 ? (31u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v11)) > _g4_s4 ? (32u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 30u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 31u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);

  vox::HashSaltGenerator::HashSaltGenerator((vox::HashSaltGenerator::Self *)&v9);
  v4 = *(uint32_t *)(*a2 + 8 * a3 + 4);
  v11[0] = *(uint32_t *)(*a2 + 8 * a3);
  v11[1] = v4;
  v7 = v11[0];
  LowerCaseHashLabel = (char *)vox::VoxSoundPackXMLInternalData::GetLowerCaseHashLabel(a1, a4);
  v8 = strlen(LowerCaseHashLabel);
  while ( vox::HashSaltGenerator::GetNextValue((vox::HashSaltGenerator::Self *)&v9, &v10) )
  {
    *(uint16_t *)&LowerCaseHashLabel[v8] = (uint8_t)v10;
    v11[0] = vox::VoxSoundPackXMLInternalData::Hash(a1, LowerCaseHashLabel);
    if ( (uint8_t)vox::VoxSoundPackXMLInternalData::HashTableBinarySearch((int)(uintptr_t)(a1), a2, v11) == 0 )
      return v11[0];
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXMLInternalData::GetSaltedHashItem  (binary VA: 0x10192a0)
// Original: vox::VoxSoundPackXMLInternalData::GetSaltedHashItem
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXMLInternalData::GetSaltedHashItem(vox::VoxSoundPackXMLInternalData::Self *a1, int a2, char *s, unsigned int *a4)
{
  unsigned int v4;
  uint32_t *v5;
  int i;
  int v7;
  unsigned int *v8;
  typedef size_t _g4_t_v10;
  typedef char _g4_t_v11;
  typedef char _g4_t_v12[29];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v11)) > _g4_s1 ? (30u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v12)) > _g4_s2 ? (31u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 30u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 31u);

  vox::HashSaltGenerator::HashSaltGenerator((vox::HashSaltGenerator::Self *)&v11);
  v10 = strlen(s);
  while ( vox::HashSaltGenerator::GetNextValue((vox::HashSaltGenerator::Self *)&v11, v12) )
  {
    *(uint16_t *)&s[v10] = (uint8_t)v12[0];
    v4 = vox::VoxSoundPackXMLInternalData::Hash(a1, s);
    *a4 = v4;
    v5 = *(uint32_t **)a2;
    for ( i = (*(uint32_t *)(a2 + 4) - *(uint32_t *)a2) >> 3; i > 0; i = i - v7 - 1 )
    {
      v7 = i;
      while ( 1 )
      {
        v7 >>= 1;
        v8 = &v5[2 * v7];
        if ( v4 > *v8 )
          break;
        i = v7;
        if ( v7 == 0 )
          goto LABEL_9;
      }
      v5 = v8 + 2;
    }
LABEL_9:
    if ( v4 == *v5 )
    {
      *a4 = v4;
      a4[1] = v5[1];
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXMLInternalData::GetUid  (binary VA: 0x1019370)
// Original: vox::VoxSoundPackXMLInternalData::GetUid
// ----------------------------------------------------------------------------
int vox::VoxSoundPackXMLInternalData::GetUid(vox::VoxSoundPackXMLInternalData::Self *a1, char *a2, int a3)
{
  int v3;
  char *v4;
  const char *v5;
  typedef char *_g4_t_LowerCaseHashLabel;
  typedef uint32_t *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_LowerCaseHashLabel)) > _g4_s0 ? (8u + sizeof(_g4_t_LowerCaseHashLabel)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v10)) > _g4_s3 ? (20u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_LowerCaseHashLabel &LowerCaseHashLabel = *reinterpret_cast<_g4_t_LowerCaseHashLabel *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);

  v9 = 0;
  v10 = -1;
  v3 = -1;
  v4 = (char *)a1 + 84;
  if ( a3 == 0 )
    v4 = (char *)a1 + 72;
  v8 = (uint32_t *)(v4);
  LowerCaseHashLabel = (char *)vox::VoxSoundPackXMLInternalData::GetLowerCaseHashLabel(a1, a2);
  v9 = vox::VoxSoundPackXMLInternalData::Hash(a1, LowerCaseHashLabel);
  if ( (uint8_t)vox::VoxSoundPackXMLInternalData::HashTableBinarySearch((int)(uintptr_t)(a1), v8, (unsigned int *)&v9) != 0 )
  {
    v3 = v10;
    if ( a3 != 0 )
      v5 = *(const char **)(*((uint32_t *)a1 + 6) + 96 * v10 + 4);
    else
      v5 = *(const char **)(*((uint32_t *)a1 + 15) + 56 * v10);
    if ( strcasecmp(LowerCaseHashLabel, v5) != 0 )
    {
      vox::VoxSoundPackXMLInternalData::GetSaltedHashItem(a1, (int)(uintptr_t)(v8), LowerCaseHashLabel, (unsigned int *)&v9);
      return v10;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxSoundPackXMLInternalData::OrganizeHashTable  (binary VA: 0x1019460)
// Original: vox::VoxSoundPackXMLInternalData::OrganizeHashTable
// ----------------------------------------------------------------------------
void vox::VoxSoundPackXMLInternalData::OrganizeHashTable(vox::VoxSoundPackXMLInternalData::Self *a1, unsigned int **a2, int a3)
{
  int v3;
  unsigned int v4;
  unsigned int *v5;
  unsigned int *v6;
  unsigned int *v7;
  int v8;
  char *v9;
  char *v10;
  unsigned int *v11;
  unsigned int *v12;
  unsigned int v13;
  unsigned int *v14;
  unsigned int *v15;
  unsigned int v16;
  int v17;
  unsigned int *v18;
  int i;
  char *v20;
  unsigned int UniqueHash;
  unsigned int *v22;
  unsigned int *v23;
  unsigned int *v24;
  unsigned int *v25;
  unsigned int *v26;
  int v27;
  char *v28;
  char *v29;
  unsigned int *v30;
  char v31;
  unsigned int v32;
  unsigned int *v33;
  unsigned int *v34;
  unsigned int *v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int *v38;
  unsigned int *v39;
  unsigned int *v40;
  unsigned int v41;
  unsigned int *v42;
  int v43;
  unsigned int *v44;
  unsigned int *v45;
  unsigned int *v46;
  int v47;
  char *v48;
  char *v49;
  unsigned int *v50;
  unsigned int *v51;
  unsigned int *v52;
  int v53;
  char *v54;
  char *v55;
  unsigned int *v56;
  unsigned int *v57;
  unsigned int *v58;
  unsigned int v59;
  unsigned int *v60;
  unsigned int *v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int *v64;
  unsigned int *v65;
  unsigned int *v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int *v69;
  unsigned int *v70;
  unsigned int *v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int *v80;
  int v81;
  unsigned int *v82;
  unsigned int *v83;
  unsigned int v84;
  unsigned int *v85;
  unsigned int v86;
  char v87;
  unsigned int *v88;
  unsigned int *v89;
  unsigned int *v90;
  int v91;
  unsigned int v92;
  unsigned int *v93;
  unsigned int *v94;
  unsigned int v95;
  unsigned int *v96;
  unsigned int *v97;
  signed int v98;
  unsigned int *v99;
  unsigned int v100;
  unsigned int v101;
  unsigned int *v102;
  unsigned int *v103;
  unsigned int *v104;
  unsigned int *v105;

  v90 = a2[1];
  v3 = (char *)v90 - (char *)*a2;
  v80 = *a2;
  v98 = v3 >> 3;
  if ( *a2 != v90 )
  {
    _BitScanReverse(&v4, v98);
    sub_1016F20(*a2, v90, 2 * (31 - (v4 ^ 0x1F)));
    if ( v3 <= 135 )
    {
      v24 = v80 + 2;
      v25 = v80;
      if ( v90 != v80 + 2 )
      {
        do
        {
          v95 = v24[1];
          v26 = v24;
          v76 = *v24;
          if ( *v80 <= *v24 )
          {
            v37 = *(v24 - 2);
            v38 = v24;
            if ( v37 > v76 )
            {
              v39 = v25;
              v105 = v25;
              v40 = v25 - 2;
              while ( 1 )
              {
                *v26 = v37;
                v38 = v39;
                v41 = v39[1];
                v39 -= 2;
                v26[1] = v41;
                v37 = *(unsigned int *)((char *)v40  + ((uintptr_t)((char *)v39) - (uintptr_t)(char *)(v24)) + 16);
                if ( v37 <= v76 )
                  break;
                v26 = v38;
              }
              v25 = v105;
            }
            *v38 = v76;
            v38[1] = v95;
            v30 = v25 + 4;
          }
          else
          {
            v27 = ((char *)v24 - (char *)v80) >> 3;
            if ( v27 > 0 )
            {
              v28 = (char *)(v24 - 2);
              do
              {
                v29 = (char *)(v28 - (char *)v25);
                --v27;
                *(unsigned int *)((char *)v24 + (uint32_t)(uintptr_t)(v29)) = *(uint32_t *)v28;
                *(unsigned int *)((char *)v24 + (uint32_t)(uintptr_t)(v29) + 4) = *((uint32_t *)v28 + 1);
                v28 -= 8;
              }
              while ( v27 != 0 );
            }
            *v80 = v76;
            v80[1] = v95;
            v30 = v25 + 4;
          }
          v25 += 2;
          v24 += 2;
        }
        while ( v90 != v30 );
      }
    }
    else
    {
      v5 = v80 + 2;
      v6 = v80;
      do
      {
        v7 = v5;
        v73 = *v5;
        v92 = v5[1];
        if ( *v5 >= *v80 )
        {
          v32 = *(v5 - 2);
          v33 = v5;
          if ( v32 > v73 )
          {
            v34 = v6;
            v104 = v6;
            v35 = v6 - 2;
            while ( 1 )
            {
              *v7 = v32;
              v33 = v34;
              v36 = v34[1];
              v34 -= 2;
              v7[1] = v36;
              v32 = *(unsigned int *)((char *)v35  + ((uintptr_t)((char *)v34) - (uintptr_t)(char *)(v5)) + 16);
              if ( v32 <= v73 )
                break;
              v7 = v33;
            }
            v6 = v104;
          }
          *v33 = v73;
          v33[1] = v92;
          v85 = v6 + 4;
        }
        else
        {
          v8 = ((char *)v5 - (char *)v80) >> 3;
          v85 = v6 + 4;
          if ( v8 > 0 )
          {
            v9 = (char *)(v5 - 2);
            do
            {
              v10 = (char *)(v9 - (char *)v6);
              --v8;
              *(unsigned int *)((char *)v5 + (uint32_t)(uintptr_t)(v10)) = *(uint32_t *)v9;
              *(unsigned int *)((char *)v5 + (uint32_t)(uintptr_t)(v10) + 4) = *((uint32_t *)v9 + 1);
              v9 -= 8;
            }
            while ( v8 != 0 );
          }
          *v80 = v73;
          v80[1] = v92;
        }
        v6 += 2;
        v5 += 2;
      }
      while ( v85 != v80 + 32 );
      if ( v90 != v85 )
      {
        v11 = v85;
        v93 = v85 - 2;
        do
        {
          v74 = *v11;
          v86 = v11[1];
          v12 = v11;
          v13 = *(unsigned int *)((char *)v93  + ((uintptr_t)((char *)v11) - (uintptr_t)(char *)(v80)) - 128);
          v14 = v11;
          v15 = v11 - 2;
          if ( *v11 < v13 )
          {
            while ( 1 )
            {
              *v12 = v13;
              v14 = v15;
              v16 = v15[1];
              v15 -= 2;
              v12[1] = v16;
              v13 = *v15;
              if ( v74 >= *v15 )
                break;
              v12 = v14;
            }
          }
          v11 += 2;
          *v14 = v74;
          v14[1] = v86;
        }
        while ( v90 != v11 );
      }
    }
  }
  if ( v98 > 1 )
  {
    v17 = 2;
    v75 = -1;
    v87 = 0;
    v18 = *a2;
    for ( i = 0; ; i += 2 )
    {
      v94 = &v18[i + 2];
      v81 = v17 - 2;
      if ( *v94 != v18[i] )
      {
        if ( v75 == -1 )
          goto LABEL_22;
        if ( *v94 != v18[2 * v75] )
        {
          v75 = -1;
          goto LABEL_22;
        }
        v81 = v75;
      }
      if ( a3 != 0 )
      {
        v20 = *(char **)(*((uint32_t *)a1 + 6) + 96 * v94[1] + 4);
        if ( v20 == nullptr )
        {
LABEL_33:
          v75 = v81;
          goto LABEL_22;
        }
      }
      else
      {
        v20 = *(char **)(*((uint32_t *)a1 + 15) + 56 * v94[1]);
        if ( v20 == nullptr )
          goto LABEL_33;
      }
      UniqueHash = vox::VoxSoundPackXMLInternalData::GetUniqueHash(a1, (uint32_t *)(a2), v17 - 1, v20);
      v18 = *a2;
      v22 = &(*a2)[i + 2];
      if ( UniqueHash == *v22 )
        break;
      *v22 = UniqueHash;
      v18 = *a2;
      if ( UniqueHash < (*a2)[i] )
      {
        v87 = 1;
        v75 = v81;
        goto LABEL_22;
      }
      if ( v17 >= v98 )
      {
LABEL_30:
        v23 = v18;
        if ( v87 != 0 )
        {
          v42 = a2[1];
          v99 = v42;
          if ( v42 != v18 )
          {
            v43 = (char *)v42 - (char *)v18;
            _BitScanReverse((unsigned int *)&v18, ((char *)v42 - (char *)v18) >> 3);
            sub_1016F20(v23, v42, 2 * (31 - ((unsigned int)(uintptr_t)(v18) ^ 0x1F)));
            if ( v43 > 135 )
            {
              v103 = v23 + 2;
              v89 = v23 + 32;
              v50 = v23 + 2;
              v51 = v23;
              v83 = v23;
              do
              {
                v52 = v50;
                v78 = *v50;
                v101 = v50[1];
                if ( *v83 <= *v50 )
                {
                  v63 = *(unsigned int *)((char *)v103  + ((uintptr_t)((char *)v50) - (uintptr_t)(char *)(v83)) - 16);
                  v64 = v50;
                  if ( v63 > v78 )
                  {
                    v65 = v51;
                    v96 = v51;
                    v66 = v51 - 2;
                    while ( 1 )
                    {
                      *v52 = v63;
                      v64 = v65;
                      v67 = v65[1];
                      v65 -= 2;
                      v52[1] = v67;
                      v63 = *(unsigned int *)((char *)v66  + ((uintptr_t)((char *)v65) - (uintptr_t)(char *)(v50)) + 16);
                      if ( v78 >= v63 )
                        break;
                      v52 = v64;
                    }
                    v51 = v96;
                  }
                  *v64 = v78;
                  v64[1] = v101;
                  v56 = v51 + 4;
                }
                else
                {
                  v53 = ((char *)v50 - (char *)v83) >> 3;
                  if ( v53 > 0 )
                  {
                    v54 = (char *)(v50 - 2);
                    do
                    {
                      v55 = (char *)(v54 - (char *)v51);
                      --v53;
                      *(unsigned int *)((char *)v50 + (uint32_t)(uintptr_t)(v55)) = *(uint32_t *)v54;
                      *(unsigned int *)((char *)v50 + (uint32_t)(uintptr_t)(v55) + 4) = *((uint32_t *)v54 + 1);
                      v54 -= 8;
                    }
                    while ( v53 != 0 );
                  }
                  *v83 = v78;
                  v83[1] = v101;
                  v56 = v51 + 4;
                }
                v51 += 2;
                v50 += 2;
              }
              while ( v89 != v56 );
              if ( v99 != v89 )
              {
                v57 = v89;
                v102 = v83;
                do
                {
                  v79 = *v57;
                  v84 = v57[1];
                  v58 = v57;
                  v59 = *(unsigned int *)((char *)v89  + ((uintptr_t)((char *)v57) - (uintptr_t)(char *)(v102)) - 136);
                  v60 = v57;
                  v61 = v57 - 2;
                  if ( *v57 < v59 )
                  {
                    while ( 1 )
                    {
                      *v58 = v59;
                      v60 = v61;
                      v62 = v61[1];
                      v61 -= 2;
                      v58[1] = v62;
                      v59 = *v61;
                      if ( *v61 <= v79 )
                        break;
                      v58 = v60;
                    }
                  }
                  v57 += 2;
                  *v60 = v79;
                  v60[1] = v84;
                }
                while ( v99 != v57 );
              }
            }
            else
            {
              v44 = v23 + 2;
              v88 = v23 + 2;
              if ( v42 != v23 + 2 )
              {
                v45 = v23;
                v82 = v23;
                do
                {
                  v46 = v44;
                  v77 = *v44;
                  v100 = v44[1];
                  if ( *v44 >= *v82 )
                  {
                    v68 = *(unsigned int *)((char *)v88  + ((uintptr_t)((char *)v44) - (uintptr_t)(char *)(v82)) - 16);
                    v69 = v44;
                    if ( v77 < v68 )
                    {
                      v70 = v45;
                      v97 = v45;
                      v71 = v45 - 2;
                      while ( 1 )
                      {
                        *v46 = v68;
                        v69 = v70;
                        v72 = v70[1];
                        v70 -= 2;
                        v46[1] = v72;
                        v68 = *(unsigned int *)((char *)v71  + ((uintptr_t)((char *)v70) - (uintptr_t)(char *)(v44)) + 16);
                        if ( v68 <= v77 )
                          break;
                        v46 = v69;
                      }
                      v45 = v97;
                    }
                    *v69 = v77;
                    v69[1] = v100;
                    v91 = (int)(uintptr_t)(v45 + 4);
                  }
                  else
                  {
                    v91 = (int)(uintptr_t)(v45 + 4);
                    v47 = ((char *)v44 - (char *)v82) >> 3;
                    if ( v47 > 0 )
                    {
                      v48 = (char *)(v44 - 2);
                      do
                      {
                        v49 = (char *)(v48 - (char *)v45);
                        --v47;
                        *(unsigned int *)((char *)v44 + (uint32_t)(uintptr_t)(v49)) = *(uint32_t *)v48;
                        *(unsigned int *)((char *)v44 + (uint32_t)(uintptr_t)(v49) + 4) = *((uint32_t *)v48 + 1);
                        v48 -= 8;
                      }
                      while ( v47 != 0 );
                    }
                    *v82 = v77;
                    v82[1] = v100;
                  }
                  v45 += 2;
                  v44 += 2;
                }
                while ( (unsigned int *)v91 != v99 );
              }
            }
          }
        }
        return;
      }
      v31 = v87;
      if ( UniqueHash > v18[2 * v17] )
        v31 = 1;
      v75 = v81;
      v87 = v31;
LABEL_23:
      ++v17;
    }
    v75 = v81;
LABEL_22:
    if ( v17 >= v98 )
      goto LABEL_30;
    goto LABEL_23;
  }
}


