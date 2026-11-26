#include "Core/Utils/DecompTypes.h"
#include "vox_VoxArchive.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::getZipFileName  (binary VA: 0x1056380)
// Original: vox::VoxArchive::getZipFileName
// ----------------------------------------------------------------------------
void * vox::VoxArchive::getZipFileName(vox::VoxArchive::Self *self)
{
  void *result;

  result = &unk_1B15112;
  if ( *((uint8_t *)self + 4) != 0 )
    return *((void **)self + 9);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::getArchiveLabelName  (binary VA: 0x10563a0)
// Original: vox::VoxArchive::getArchiveLabelName
// ----------------------------------------------------------------------------
void * vox::VoxArchive::getArchiveLabelName(vox::VoxArchive::Self *self)
{
  void *result;

  result = &unk_1B15112;
  if ( *((uint8_t *)self + 4) != 0 )
    return *((void **)self + 10);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::getArchiveVoxpackInfo  (binary VA: 0x10563c0)
// Original: vox::VoxArchive::getArchiveVoxpackInfo
// ----------------------------------------------------------------------------
int vox::VoxArchive::getArchiveVoxpackInfo(vox::VoxArchive::Self *self, vox::FileArchive::VoxpackInfo *a2)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 4) != 0 && *((uint8_t *)self + 44) != 0 )
  {
    *(uint32_t *)a2 = *((uint32_t *)self + 12);
    *((uint32_t *)a2 + 1) = *((uint32_t *)self + 13);
    *((uint8_t *)a2 + 8) = *((uint8_t *)self + 56);
    *((uint32_t *)a2 + 3) = *((uint32_t *)self + 15);
    *((uint8_t *)a2 + 9) = *((uint8_t *)self + 57);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::Destroy  (binary VA: 0x1056400)
// Original: vox::VoxArchive::~VoxArchive
// ----------------------------------------------------------------------------
void vox::VoxArchive::Destroy(vox::VoxArchive::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DC08);
  v1 = *((uint32_t *)self + 12);
  if ( (uint32_t *)(v1 - 12) != (uint32_t *)(g4_empty_string_rep)
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 10);
  if ( (uint32_t *)(v2 - 12) != (uint32_t *)(g4_empty_string_rep)
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 9);
  if ( (uint32_t *)(v3 - 12) != (uint32_t *)(g4_empty_string_rep)
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal((void *)(v3 - 12));
  }
  vox::LinAlloc::Destroy((vox::VoxArchive::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D728);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::Destroy_ea10564c0  (binary VA: 0x10564c0)
// Original: vox::VoxArchive::~VoxArchive
// ----------------------------------------------------------------------------
void vox::VoxArchive::Destroy_ea10564c0(vox::VoxArchive::Self *self)
{
  vox::VoxArchive::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::ReadInt  (binary VA: 0x1056500)
// Original: vox::VoxArchive::ReadInt
// ----------------------------------------------------------------------------
int vox::VoxArchive::ReadInt(vox::VoxArchive::Self *self, uint8_t *a2)
{
  return (a2[2] << 16) + (a2[1] << 8) + *a2 + (a2[3] << 24);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::ReverseInt  (binary VA: 0x1056530)
// Original: vox::VoxArchive::ReverseInt
// ----------------------------------------------------------------------------
unsigned int vox::VoxArchive::ReverseInt(vox::VoxArchive::Self *self, unsigned int *a2)
{
  unsigned int result;

  result = __builtin_rotateright32(((*a2 & 0xFF00FF00) >> 8) + ((*a2 & 0xFF00FF) << 8), 16);
  *a2 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::getFilenameWithoutPath  (binary VA: 0x1056560)
// Original: vox::VoxArchive::getFilenameWithoutPath
// ----------------------------------------------------------------------------
vox::VoxArchive::Self * vox::VoxArchive::getFilenameWithoutPath(vox::VoxArchive::Self *self)
{
  vox::VoxArchive::Self *result;

  result = (vox::VoxArchive::Self *)((char *)self + strlen((const char *)self));
  if ( *(uint8_t *)result == 47 || *(uint8_t *)result == 92 )
  {
LABEL_2:
    if ( result != self )
      return (vox::VoxArchive::Self *)((char *)result + 1);
  }
  else
  {
    while ( self != result )
    {
      result = (vox::VoxArchive::Self *)((char *)result - 1);
      if ( *(uint8_t *)result == 92 || *(uint8_t *)result == 47 )
        goto LABEL_2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::getHashIndex  (binary VA: 0x10565c0)
// Original: vox::VoxArchive::getHashIndex
// ----------------------------------------------------------------------------
int vox::VoxArchive::getHashIndex(vox::VoxArchive::Self *self, vox::VoxArchive::Self *s, int *a3)
{
  signed int v3;
  unsigned int v4;
  vox::VoxArchive::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  unsigned int v20;
  int result;
  unsigned int *v22;
  uint8_t v23;
  int v24;
  uint8_t v25;
  int v26;
  int v27;
  int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  signed int v36;

  if ( *((uint8_t *)self + 5) == 0 )
    s = vox::VoxArchive::getFilenameWithoutPath(s);
  v3 = strlen((const char *)s);
  v36 = v3;
  v4 = *((uint32_t *)self + 19) ^ v3;
  v30 = v3 ^ *((uint32_t *)self + 20);
  if ( v3 > 3 )
  {
    v32 = v3;
    v5 = s;
    do
    {
      v6 = *((uint8_t *)v5 + 1);
      v7 = *((uint8_t *)v5 + 3);
      v8 = v6 + 32;
      v33 = v6 << 8;
      v9 = *((uint8_t *)v5 + 2);
      v10 = v8 << 8;
      v34 = v9 << 16;
      v29 = (v9 + 32) << 16;
      v35 = v7 << 24;
      v11 = (v7 + 32) << 24;
      v12 = *(uint8_t *)v5 + 32;
      if ( (uint8_t)(*(uint8_t *)v5 - 65) > 0x19u )
        v12 = *(uint8_t *)v5;
      if ( (uint8_t)(*((uint8_t *)v5 + 1) - 65) > 0x19u )
        v10 = v33;
      v13 = v12 + v10;
      v14 = v29;
      if ( (uint8_t)(*((uint8_t *)v5 + 2) - 65) > 0x19u )
        v14 = v34;
      v15 = v14 + v13;
      if ( (uint8_t)(*((uint8_t *)v5 + 3) - 65) > 0x19u )
        v11 = v35;
      v32 -= 4;
      v5 = (vox::VoxArchive::Self *)((char *)v5 + 4);
      v16 = 1540483477 * ((1540483477 * (v11 + v15)) ^ ((unsigned int)(1540483477 * (v11 + v15)) >> 24));
      v4 = v16 ^ (1540483477 * v4);
      v30 = v16 ^ (1540483477 * v30);
    }
    while ( v32 > 3 );
    v17 = (unsigned int)(v36 - 4) >> 2;
    s = (vox::VoxArchive::Self *)((char *)s + 4 * v17 + 4);
    v3 = v36 - 4 - 4 * v17;
  }
  if ( v3 != 2 )
  {
    if ( v3 != 3 )
    {
      if ( v3 != 1 )
        goto LABEL_18;
      goto LABEL_31;
    }
    v23 = *((uint8_t *)s + 2);
    if ( (uint8_t)(v23 - 65) <= 0x19u )
      v24 = (v23 + 32) << 16;
    else
      v24 = v23 << 16;
    v4 ^= v24;
    v30 ^= v24;
  }
  v25 = *((uint8_t *)s + 1);
  if ( (uint8_t)(v25 - 65) > 0x19u )
    v26 = v25 << 8;
  else
    v26 = (v25 + 32) << 8;
  v4 ^= v26;
  v30 ^= v26;
LABEL_31:
  v27 = *(uint8_t *)s;
  v28 = (uint8_t)v27 ^ v4;
  if ( (uint8_t)(*(uint8_t *)s - 65) <= 0x19u )
  {
    v27 = (uint8_t)v27 + 32;
    v28 = v27 ^ v4;
  }
  v4 = 1540483477 * v28;
  v30 = 1540483477 * (v30 ^ v27);
LABEL_18:
  v18 = *((uint32_t *)self + 7);
  v19 = 0;
  v20 = (1540483477 * (v4 ^ (v4 >> 13))) ^ ((1540483477 * (v4 ^ (v4 >> 13))) >> 15);
  result = 0;
  v31 = (1540483477 * (v30 ^ (v30 >> 13))) ^ ((1540483477 * (v30 ^ (v30 >> 13))) >> 15);
  if ( v18 == 0 )
  {
LABEL_24:
    *a3 = v19;
    return result;
  }
  do
  {
    v22 = (unsigned int *)(*((uint32_t *)self + 8) + 16 * ((v19 + v18) >> 1));
    if ( *v22 > v20 )
    {
LABEL_34:
      v18 = (v19 + v18) >> 1;
      continue;
    }
    if ( *v22 >= v20 )
    {
      if ( v22[1] > v31 )
        goto LABEL_34;
      if ( v22[1] >= v31 )
      {
        v19 = (v19 + v18) >> 1;
        result = 1;
        goto LABEL_24;
      }
    }
    v19 = ((v19 + v18) >> 1) + 1;
  }
  while ( v19 != v18 );
  *a3 = v19;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::getFileInfo  (binary VA: 0x1056890)
// Original: vox::VoxArchive::getFileInfo
// ----------------------------------------------------------------------------
int vox::VoxArchive::getFileInfo(vox::VoxArchive::Self *self, vox::VoxArchive::Self *a2, int *a3, int *a4)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  typedef int64_t _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v13)) > _g4_s3 ? (24u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  vox::FileArchive::FileRange::FileRange((vox::FileArchive::FileRange::Self *)&v12);
  if ( *((uint8_t *)self + 4) == 0 )
    return 0;
  if ( (uint8_t)vox::VoxArchive::getHashIndex(self, a2, &v11) == 0 )
    return 0;
  v5 = v11;
  if ( *((uint8_t *)self + 6) != 0 )
  {
    v6 = *((uint32_t *)self + 23);
    v5 = v11;
    if ( v6 != 0 && *(uint8_t *)(v6 + v11) != 0 )
      return 0;
  }
  v7 = *((uint32_t *)self + 8) + 16 * v5;
  v8 = *(uint32_t *)(v7 + 12);
  v9 = *(uint32_t *)(v7 + 8);
  v12 = *((uint32_t *)self + 16);
  v13 = *((uint32_t *)self + 17);
  v14 = *((uint32_t *)self + 18);
  HIDWORD(v10) = v8;
  LODWORD(v10) = (uint32_t)(uintptr_t)(&v12);
  vox::FileArchive::FileRange::Subset(v10, v9);
  *a3 = v13;
  *a4 = v14;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::overrideFile  (binary VA: 0x1056970)
// Original: vox::VoxArchive::overrideFile
// ----------------------------------------------------------------------------
int vox::VoxArchive::overrideFile(vox::VoxArchive::Self *self, vox::VoxArchive::Self *a2, bool *a3)
{
  int v3;
  int v5[4];

  v3 = 0;
  if ( *((uint8_t *)self + 4) != 0
    && *((uint8_t *)self + 6) != 0
    && *((uint32_t *)self + 23) != 0
    && (uint8_t)vox::VoxArchive::getHashIndex(self, a2, v5) != 0 )
  {
    v3 = 1;
    *(uint8_t *)(*((uint32_t *)self + 23) + v5[0]) = *a3;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::isVoxArchiveFormat  (binary VA: 0x10569f0)
// Original: vox::VoxArchive::isVoxArchiveFormat
// ----------------------------------------------------------------------------
int vox::VoxArchive::isVoxArchiveFormat(vox::VoxArchive::Self *self)
{
  int v1;
  int v2;
  uint8_t v4[128];

  v1 = G4_VCALL<int>(self, 8, v4, 1, 128);
  v2 = 0;
  if ( v1 == 128
    && v4[0] == 86
    && v4[1] == 111
    && v4[2] == 120
    && v4[3] == 97
    && v4[4] == 114
    && v4[5] == 99
    && v4[6] == 104 )
  {
    LOBYTE(v2) = v4[7] == 49;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::collisionCheckStart  (binary VA: 0x1056a70)
// Original: vox::VoxArchive::collisionCheckStart
// ----------------------------------------------------------------------------
int vox::VoxArchive::collisionCheckStart(vox::VoxArchive::Self *self, unsigned int a2, unsigned int a3)
{
  int result;

  result = 1;
  if ( *((uint8_t *)self + 4) != 0 )
  {
    result = 0;
    if ( *((uint32_t *)self + 19) == a2 && *((uint32_t *)self + 20) == a3 )
    {
      *((uint32_t *)self + 25) = 0;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::collisionCheckCallback  (binary VA: 0x1056ab0)
// Original: vox::VoxArchive::collisionCheckCallback
// ----------------------------------------------------------------------------
bool vox::VoxArchive::collisionCheckCallback(vox::VoxArchive::Self *self, unsigned int a2, unsigned int a3)
{
  bool result;
  int v4;
  uint32_t *v5;
  uint32_t *v6;

  result = false;
  if ( *((uint8_t *)self + 4) != 0 )
  {
    v4 = *((uint32_t *)self + 8);
    v5 = (uint32_t *)(v4 + 16 * *((uint32_t *)self + 25));
    v6 = (uint32_t *)(v4 + 16 * *((uint32_t *)self + 7));
    if ( v5 < v6 && a2 >= *v5 )
    {
      if ( *v5 == a2 )
        goto LABEL_11;
      while ( 1 )
      {
        v5 += 4;
        if ( v5 >= v6 || *v5 > a2 )
          break;
        if ( *v5 == a2 )
        {
LABEL_11:
          if ( v5[1] >= a3 )
            break;
        }
      }
    }
    *((uint32_t *)self + 25) = ((int)(uintptr_t)(v5) - v4) >> 4;
    result = false;
    if ( v5 != v6 && *v5 == a2 )
      return a3 == v5[1];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::collisionCheck  (binary VA: 0x1056b40)
// Original: vox::VoxArchive::collisionCheck
// ----------------------------------------------------------------------------
int vox::VoxArchive::collisionCheck(vox::VoxArchive::Self *self, vox::VoxArchive::Self *a2)
{
  int v2;
  int v4;
  int v5;

  v2 = 0;
  if ( *((uint8_t *)self + 4) != 0
    && (uint8_t)vox::VoxArchive::collisionCheckStart(a2, *((uint32_t *)self + 19), *((uint32_t *)self + 20)) != 0
    && *((int *)self + 7) > 0 )
  {
    v4 = 0;
    do
    {
      LOBYTE(v5) = vox::VoxArchive::collisionCheckCallback(
                     a2,
                     *(uint32_t *)(*((uint32_t *)self + 8) + 16 * v4),
                     *(uint32_t *)(*((uint32_t *)self + 8) + 16 * v4 + 4));
      if ( (uint8_t)v2 == 0 )
        v2 = v5;
      ++v4;
    }
    while ( *((uint32_t *)self + 7) > v4 );
  }
  return v2;
}

static void g4_vox_cow_str_assign(uint32_t *slot, const char *s, size_t n)
{
  uint32_t newData;
  if ( n == 0 || s == nullptr )
  {
    newData = (uint32_t)(uintptr_t)(g4_empty_string_rep + 12);
  }
  else
  {
    uint32_t cap = (uint32_t)n;
    uint32_t rep = (uint32_t)VoxAllocInternal(
      cap + 13u,
      0,
      (int)(uintptr_t)"../../../../../lib/vox/include/vox_memory.h",
      (int)(uintptr_t)"internal_new",
      181);
    *(uint32_t *)(uintptr_t)rep = (uint32_t)n;
    *(uint32_t *)(uintptr_t)(rep + 4) = cap;
    *(uint32_t *)(uintptr_t)(rep + 8) = 0;
    memcpy((void *)(uintptr_t)(rep + 12), s, n);
    *(char *)(uintptr_t)(rep + 12 + n) = 0;
    newData = rep + 12u;
  }
  uint32_t oldData = *slot;
  if ( oldData != 0
    && (uint8_t *)(uintptr_t)(oldData - 12) != g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)(uintptr_t)(oldData - 4), -1) <= 0 )
  {
    VoxFreeInternal((void *)(uintptr_t)(oldData - 12));
  }
  *slot = newData;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::Construct  (binary VA: 0x1056bf0)
// Original: vox::VoxArchive::VoxArchive
// ----------------------------------------------------------------------------
vox::VoxArchive::Self * vox::VoxArchive::Construct(
    vox::VoxArchive::Self *self,
    vox::FileInterface::Self *a2,
    const vox::FileArchive::FileRange::Self *a3,
    bool a4,
    bool a5,
    bool a6,
    const char *a7)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)&off_208DC08;
  vox::LinAlloc::Self *linAlloc = (vox::LinAlloc::Self *)((char *)self + 12);
  vox::LinAlloc::LinAlloc(linAlloc);
  uint32_t emptyRepData = (uint32_t)(uintptr_t)(g4_empty_string_rep + 12);
  *((uint32_t *)self + 9) = emptyRepData;
  *((uint32_t *)self + 10) = emptyRepData;
  *((uint32_t *)self + 12) = emptyRepData;
  vox::FileArchive::FileRange::FileRange((vox::FileArchive::FileRange::Self *)((char *)self + 64));
  *((uint8_t *)self + 4) = 0;
  *((uint8_t *)self + 5) = a4 ? 1 : 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint8_t *)self + 6) = a6 ? 1 : 0;
  *((uint8_t *)self + 7) = a5 ? 1 : 0;
  *((uint8_t *)self + 8) = 0;
  *((uint32_t *)self + 16) = *(const uint32_t *)a3;
  *((uint32_t *)self + 17) = *((const uint32_t *)a3 + 1);
  *((uint32_t *)self + 18) = *((const uint32_t *)a3 + 2);
  *((uint8_t *)self + 44) = 0;
  *((uint32_t *)self + 13) = 0xFFFFFFFFu;
  *((uint8_t *)self + 56) = 0;
  *((uint8_t *)self + 57) = 0;
  *((uint32_t *)self + 15) = 0;

  alignas(16) uint8_t hdr[128] = {};
  int nread = G4_VCALL<int>(a2, 8, hdr, 1, 128);
  if ( nread != 128 || hdr[0] != 'V' || hdr[1] != 'o' || hdr[2] != 'x' )
    return self;

  uint8_t isInfoOnly = 0;
  if ( hdr[3] == 'a' )
  {
    if ( hdr[4] != 'r' || hdr[5] != 'c' || hdr[6] != 'h' || hdr[7] != '2' )
      return self;
    isInfoOnly = 0;
  }
  else
  {
    if ( hdr[3] != 'i' || hdr[4] != 'n' || hdr[5] != 'f' || hdr[6] != 'o' || hdr[7] != '2' )
      return self;
    isInfoOnly = 1;
  }

  if ( (uint8_t)(hdr[12] - 1u) > 1u && a5 )
    *((uint8_t *)self + 7) = 0;

  int fileCount = vox::VoxArchive::ReadInt(self, &hdr[16]);
  *((int *)self + 7) = fileCount;
  vox::LinAlloc::AddSize(linAlloc, 16 * fileCount, 16);

  int nameTableSize = 0;
  if ( *((uint8_t *)self + 7) != 0 )
  {
    vox::LinAlloc::AddSize(linAlloc, 4 * *((int *)self + 7), 8);
    nameTableSize = vox::VoxArchive::ReadInt(self, &hdr[20]);
    vox::LinAlloc::AddSize(linAlloc, nameTableSize, 8);
  }
  if ( *((uint8_t *)self + 6) != 0 )
    vox::LinAlloc::AddSize(linAlloc, *((int *)self + 7), 8);

  if ( !vox::LinAlloc::Allocate(linAlloc) )
    return self;

  *((uint32_t *)self + 8) = (uint32_t)vox::LinAlloc::GetMem(linAlloc, 16 * *((int *)self + 7), 16);
  int tableOffset = (*((uint8_t *)self + 5) == 0)
    ? vox::VoxArchive::ReadInt(self, &hdr[24])
    : vox::VoxArchive::ReadInt(self, &hdr[28]);
  if ( tableOffset == 0 )
    return self;

  G4_VCALL<void>(a2, 12, tableOffset, 0);
  int tableBytes = 16 * *((int *)self + 7);
  if ( G4_VCALL<int>(a2, 8, *((uint32_t *)self + 8), 1, tableBytes) != tableBytes )
    return self;

  *((int *)self + 19) = vox::VoxArchive::ReadInt(self, &hdr[44]);
  *((int *)self + 20) = vox::VoxArchive::ReadInt(self, &hdr[48]);

  if ( *((uint8_t *)self + 7) == 0 )
  {
    *((uint32_t *)self + 21) = 0;
    *((uint32_t *)self + 24) = 0;
    *((uint32_t *)self + 22) = 0;
  }
  else
  {
    *((uint32_t *)self + 21) = (uint32_t)vox::LinAlloc::GetMem(linAlloc, 4 * *((int *)self + 7), 8);
    int nameIdxOffset = (*((uint8_t *)self + 5) == 0)
      ? vox::VoxArchive::ReadInt(self, &hdr[32])
      : vox::VoxArchive::ReadInt(self, &hdr[36]);
    G4_VCALL<void>(a2, 12, nameIdxOffset, 0);
    int nameIdxBytes = 4 * *((int *)self + 7);
    if ( G4_VCALL<int>(a2, 8, *((uint32_t *)self + 21), 1, nameIdxBytes) != nameIdxBytes )
      return self;

    *((uint32_t *)self + 22) = (uint32_t)vox::LinAlloc::GetMem(linAlloc, nameTableSize, 8);
    int nameDataOffset = vox::VoxArchive::ReadInt(self, &hdr[40]);
    G4_VCALL<void>(a2, 12, nameDataOffset, 0);
    if ( G4_VCALL<int>(a2, 8, *((uint32_t *)self + 22), 1, nameTableSize) != nameTableSize )
      return self;
  }

  if ( *((uint8_t *)self + 6) != 0 )
  {
    *((uint32_t *)self + 23) = (uint32_t)vox::LinAlloc::GetMem(linAlloc, *((int *)self + 7), 8);
    for ( int i = 0; i < *((int *)self + 7); ++i )
      *(uint8_t *)(uintptr_t)(*((uint32_t *)self + 23) + (uint32_t)i) = 0;
  }
  else
  {
    *((uint32_t *)self + 23) = 0;
  }

  const char *zipName = (const char *)(uintptr_t)G4_VCALL<uint32_t>(a2, 24);
  if ( zipName != nullptr )
    g4_vox_cow_str_assign((uint32_t *)self + 9, zipName, strlen(zipName));
  if ( a7 != nullptr )
    g4_vox_cow_str_assign((uint32_t *)self + 10, a7, strlen(a7));

  *((uint8_t *)self + 8) = 1;
  if ( isInfoOnly == 0 )
    *((uint8_t *)self + 4) = 1;

  int voxpackInfoOffset = vox::VoxArchive::ReadInt(self, &hdr[60]);
  if ( voxpackInfoOffset != 0 )
  {
    *((uint8_t *)self + 44) = 1;
    G4_VCALL<void>(a2, 12, voxpackInfoOffset, 0);
    std::string packLabel;
    char ch = 0;
    while ( G4_VCALL<int>(a2, 8, &ch, 1, 1) == 1 && ch != 0 )
      packLabel.push_back(ch);
    if ( !packLabel.empty() )
      g4_vox_cow_str_assign((uint32_t *)self + 12, packLabel.data(), packLabel.size());
    *((int *)self + 13) = vox::VoxArchive::ReadInt(self, &hdr[96]);
    *((int *)self + 15) = vox::VoxArchive::ReadInt(self, &hdr[100]);
    int flags = vox::VoxArchive::ReadInt(self, &hdr[104]);
    *((uint8_t *)self + 56) = (uint8_t)(flags & 1);
    *((uint8_t *)self + 57) = (flags & 2) != 0 ? 1 : 0;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::isValid  (binary VA: 0x1057350)
// Original: vox::VoxArchive::isValid
// ----------------------------------------------------------------------------
int vox::VoxArchive::isValid(vox::VoxArchive::Self *self)
{
  return *((uint8_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::getFileCount  (binary VA: 0x1057360)
// Original: vox::VoxArchive::getFileCount
// ----------------------------------------------------------------------------
int vox::VoxArchive::getFileCount(vox::VoxArchive::Self *self)
{
  int result;

  result = 0;
  if ( *((uint8_t *)self + 4) != 0 )
    return *((uint32_t *)self + 7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxArchive::isVoxArchive  (binary VA: 0x1057370)
// Original: vox::VoxArchive::isVoxArchive
// ----------------------------------------------------------------------------
int vox::VoxArchive::isVoxArchive()
{
  return 1;
}


