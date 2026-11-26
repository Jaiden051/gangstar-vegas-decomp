#include "Core/Utils/DecompTypes.h"
#include "vox_FileSystemInterface.h"

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::CloseArchiveFile  (binary VA: 0x10086a0)
// Original: vox::FileSystemInterface::_CloseArchiveFile
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::CloseArchiveFile(vox::FileSystemInterface::Self *self, vox::FileInterface::Self *a2)
{
  return G4_VCALL<int>(self, 68, a2);
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::GetArchiveCount  (binary VA: 0x10086c0)
// Original: vox::FileSystemInterface::GetArchiveCount
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::GetArchiveCount(vox::FileSystemInterface::Self *self)
{
  return (*(uint32_t *)(*((uint32_t *)self + 2) + 12) - *(uint32_t *)(*((uint32_t *)self + 2) + 8)) >> 2;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::CloseFile  (binary VA: 0x10087a0)
// Original: vox::FileSystemInterface::_CloseFile
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::CloseFile(vox::FileSystemInterface::Self *self, vox::FileInterface::Self *a2)
{
  int v2;

  if ( a2 == nullptr )
    return -1;
  v2 = G4_VCALL<int>(a2, 28);
  if ( v2 != 0 )
    G4_MEM_CALL((uintptr_t)((*(uintptr_t *)unk_20E2074)), v2);
  (**(void (***)(vox::FileInterface::Self *))a2)(a2);
  VoxFreeInternal(a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::RemoveArchive  (binary VA: 0x10088b0)
// Original: vox::FileSystemInterface::_RemoveArchive
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::RemoveArchive(vox::FileSystemInterface::Self *self, char *s1)
{
  int v2;
  int v3;
  unsigned int v4;
  int result;
  unsigned int v6;
  int v7;
  int v8;
  const char *s2;
  uint32_t *v10;
  int v11;
  char *v12;
  const void *v13;
  char *dest;
  int v15;
  int v16;

  v2 = *((uint32_t *)self + 2);
  v3 = *(uint32_t *)(v2 + 8);
  v4 = *(uint32_t *)(v2 + 12) - v3;
  result = -1;
  if ( v4 >> 2 != 0 )
  {
    v6 = 0;
    v16 = 0;
    do
    {
      v8 = 4 * v6;
      s2 = (const char *)(*(int (**)(uint32_t))(**(uint32_t **)(v3 + 4 * v6) + 20))(*(uint32_t *)(v3 + 4 * v6));
      if ( strcasecmp(s1, s2) == 0 )
      {
        v10 = (uint32_t *)(v8 + *(uint32_t *)(*((uint32_t *)self + 2) + 8));
        if ( *v10 != 0 )
        {
          (**(void (***)(uint32_t))*v10)(*v10);
          VoxFreeInternal(*(void **)(*(uint32_t *)(*((uint32_t *)self + 2) + 8) + 4 * v6));
          v10 = (uint32_t *)(v8 + *(uint32_t *)(*((uint32_t *)self + 2) + 8));
        }
        *v10 = 0;
        v11 = *((uint32_t *)self + 2);
        v12 = *(char **)(v11 + 12);
        dest = (char *)(*(uint32_t *)(v11 + 8) + v8);
        v13 = dest + 4;
        if ( v12 != dest + 4 && (v12 - (char *)((uint8_t *)v13)) >> 2 != 0 )
        {
          v15 = *((uint32_t *)self + 2);
          memmove(dest, v13, 4 * ((v12 - (char *)((uint8_t *)v13)) >> 2));
          v11 = v15;
          v12 = *(char **)(v15 + 12);
        }
        ++v16;
        *(uint32_t *)(v11 + 12) = (uint32_t)(uintptr_t)(v12 - 4);
        --v6;
      }
      v7 = *((uint32_t *)self + 2);
      ++v6;
      v3 = *(uint32_t *)(v7 + 8);
    }
    while ( v6 < (*(uint32_t *)(v7 + 12) - v3) >> 2 );
    return -(v16 == 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::Destroy  (binary VA: 0x10089e0)
// Original: vox::FileSystemInterface::~FileSystemInterface
// ----------------------------------------------------------------------------
void vox::FileSystemInterface::Destroy(vox::FileSystemInterface::Self *self)
{
  vox::FileSystemInterface::Self *v1;
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  unsigned int v5;
  void (***v6)(uint32_t);
  uint32_t *v7;
  int v8;
  uint32_t *v9;

  v1 = self;
  v2 = *((uint32_t **)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D648);
  v3 = (uint32_t *)v2[2];
  if ( (unsigned int)(v2[3] - (uint32_t)(uintptr_t)(v3)) >> 2 != 0 )
  {
    v4 = v2[2];
    v5 = 0;
    while ( 1 )
    {
      v6 = (void (***)(uint32_t))v3[v5];
      if ( v6 != nullptr )
      {
        (**v6)((uint32_t)(uintptr_t)(v6));
        VoxFreeInternal(*(void **)(*(uint32_t *)(*((uint32_t *)self + 2) + 8) + 4 * v5));
        v4 = *(uint32_t *)(*((uint32_t *)self + 2) + 8);
      }
      *(uint32_t *)(v4 + 4 * v5) = 0;
      v2 = *((uint32_t **)self + 2);
      ++v5;
      v3 = (uint32_t *)v2[2];
      if ( v5 >= (v2[3] - (int)(uintptr_t)(v3)) >> 2 )
        break;
      v4 = v2[2];
    }
  }
  if ( v3 != nullptr )
    VoxFreeInternal(v3);
  v7 = (uint32_t *)*v2;
  if ( v2 != (uint32_t *)*v2 )
  {
    while ( 1 )
    {
      v8 = v7[2];
      v9 = (uint32_t *)*v7;
      if ( (void *)(v8 - 12) != (void *)g4_empty_string_rep
        && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
      {
        VoxFreeInternal((void *)(v8 - 12));
      }
      VoxFreeInternal(v7);
      if ( v2 == v9 )
        break;
      v7 = v9;
    }
    v1 = self;
  }
  VoxFreeInternal(*((void **)v1 + 2));
  *((uint32_t *)v1 + 2) = 0;
  vox::Mutex::Destroy((vox::FileSystemInterface::Self *)((char *)v1 + 12));
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::Destroy_ea1008af0  (binary VA: 0x1008af0)
// Original: vox::FileSystemInterface::~FileSystemInterface
// ----------------------------------------------------------------------------
void vox::FileSystemInterface::Destroy_ea1008af0(vox::FileSystemInterface::Self *self)
{
  vox::FileSystemInterface::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::AddFolderArchive  (binary VA: 0x1009050)
// Original: vox::FileSystemInterface::AddFolderArchive
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::AddFolderArchive(vox::FileSystemInterface::Self *self, const char *a2, int a3, const char **a4, bool a5, bool a6)
{
  int v7;
  vox::Mutex::Self *v9;

  vox::VoxThread::GetCurThreadId(v9);
  sub_BA06A0();
  vox::Mutex::Lock((vox::FileSystemInterface::Self *)((char *)self + 12));
  G4_VCALL<void>(self, 76, a2);
  v7 = G4_VCALL<int>(self, 84, a2, a3, a4, a5, a6, a2);
  vox::Mutex::Unlock((vox::FileSystemInterface::Self *)((char *)self + 12));
  sub_BA06B0();
  return v7;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::RemoveArchive  (binary VA: 0x1009130)
// Original: vox::FileSystemInterface::RemoveArchive
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::RemoveArchive(vox::FileSystemInterface::Self *self, const char *a2)
{
  int v2;
  vox::Mutex::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  vox::Mutex::Lock((vox::FileSystemInterface::Self *)((char *)self + 12));
  if ( a2 != nullptr )
    v2 = G4_VCALL<int>(self, 76, a2);
  else
    v2 = -1;
  vox::Mutex::Unlock((vox::FileSystemInterface::Self *)((char *)self + 12));
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::CloseFile_ea10091d0  (binary VA: 0x10091d0)
// Original: vox::FileSystemInterface::CloseFile
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::CloseFile_ea10091d0(vox::FileSystemInterface::Self *self, vox::FileInterface::Self *a2)
{
  int v2;
  vox::Mutex::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  vox::Mutex::Lock((vox::FileSystemInterface::Self *)((char *)self + 12));
  v2 = G4_VCALL<int>(self, 68, a2);
  vox::Mutex::Unlock((vox::FileSystemInterface::Self *)((char *)self + 12));
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::OpenFile  (binary VA: 0x1009260)
// Original: vox::FileSystemInterface::OpenFile
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::OpenFile(int a1, int a2, int a3)
{
  int v3;
  vox::Mutex::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  vox::Mutex::Lock((vox::Mutex::Self *)(a1 + 12));
  v3 = G4_VCALL<int>(a1, 60, a2, a3);
  vox::Mutex::Unlock((vox::Mutex::Self *)(a1 + 12));
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::GetArchiveVoxpackInfo  (binary VA: 0x1009300)
// Original: vox::FileSystemInterface::GetArchiveVoxpackInfo
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::GetArchiveVoxpackInfo(vox::FileSystemInterface::Self *self, int a2, vox::FileArchive::VoxpackInfo *a3)
{
  int CurThreadId;
  int v4;
  vox::Mutex::Self *v6;

  CurThreadId = vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  vox::Mutex::Lock((vox::FileSystemInterface::Self *)((char *)self + 12));
  if ( a2 >= 0 && a2 < G4_VCALL<int>(self, 44, CurThreadId) )
    v4 = (*(int (**)(uint32_t, vox::FileArchive::VoxpackInfo *))(**(uint32_t **)(*(uint32_t *)(*((uint32_t *)self + 2)
                                                                                               + 8)
                                                                                   + 4 * a2)
                                                                     + 36))(
           *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 2) + 8) + 4 * a2),
           a3);
  else
    v4 = 0;
  vox::Mutex::Unlock((vox::FileSystemInterface::Self *)((char *)self + 12));
  sub_BA06B0();
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::GetArchiveVoxpackInfo  (binary VA: 0x10093c0)
// Original: vox::FileSystemInterface::GetArchiveVoxpackInfo
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::GetArchiveVoxpackInfo(vox::FileSystemInterface::Self *self, char *a2, vox::FileArchive::VoxpackInfo *a3)
{
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  vox::FileSystemInterface::Self *v7;
  int v8;
  const char *v9;
  int v10;
  char *s1;
  char *s2;
  vox::FileSystemInterface::Self *v14;

  v3 = 0;
  s2 = (char *)vox::VoxThread::GetCurThreadId((vox::VoxThread::Self *)s1);
  sub_BA06A0();
  vox::Mutex::Lock((vox::FileSystemInterface::Self *)((char *)self + 12));
  if ( a2 != nullptr )
  {
    v4 = *((uint32_t *)self + 2);
    v5 = *(uint32_t *)(v4 + 8);
    if ( (unsigned int)(*(uint32_t *)(v4 + 12) - v5) >> 2 != 0 )
    {
      v6 = 0;
      v7 = self;
      do
      {
        v14 = v7;
        v9 = (const char *)(*(int (**)(uint32_t, char *))(**(uint32_t **)(v5 + 4 * v6) + 20))(
                             *(uint32_t *)(v5 + 4 * v6),
                             s2);
        v10 = strcasecmp(a2, v9);
        v7 = v14;
        if ( v10 == 0 )
        {
          v3 = (*(int (**)(uint32_t, vox::FileArchive::VoxpackInfo *))(**(uint32_t **)(*(uint32_t *)(*((uint32_t *)v14 + 2) + 8)
                                                                                         + 4 * v6)
                                                                           + 36))(
                 *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v14 + 2) + 8) + 4 * v6),
                 a3);
          goto LABEL_7;
        }
        v8 = *((uint32_t *)v14 + 2);
        ++v6;
        v5 = *(uint32_t *)(v8 + 8);
      }
      while ( v6 < (*(uint32_t *)(v8 + 12) - v5) >> 2 );
      v3 = 0;
    }
  }
LABEL_7:
  vox::Mutex::Unlock((vox::FileSystemInterface::Self *)((char *)self + 12));
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::PopDirectory  (binary VA: 0x10094c0)
// Original: vox::FileSystemInterface::PopDirectory
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::PopDirectory(vox::FileSystemInterface::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  vox::Mutex::Self *v4;
  int v5;
  uint32_t **v6;
  uint32_t *i;
  vox::Mutex::Self *v9;
  vox::Mutex::Self *v10;

  vox::VoxThread::GetCurThreadId(v9);
  sub_BA06A0();
  vox::Mutex::Lock((vox::FileSystemInterface::Self *)((char *)self + 12));
  v1 = *((uint32_t **)self + 2);
  if ( v1 != nullptr )
  {
    v2 = (uint32_t *)*v1;
    v3 = -1;
    if ( v1 != (uint32_t *)*v1 )
    {
      do
        v2 = (uint32_t *)*v2;
      while ( v1 != v2 );
      v4 = (vox::Mutex::Self *)v1[1];
      sub_1901940(v4);
      v5 = *((uint32_t *)v4 + 2);
      if ( (void *)(v5 - 12) != (void *)g4_empty_string_rep
        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
      {
        VoxFreeInternal((void *)(v5 - 12));
      }
      v10 = v4;
      v3 = 0;
      VoxFreeInternal(v10);
      v6 = *((uint32_t ***)self + 2);
      for ( i = *v6; v6 != (uint32_t **)(uintptr_t)(i); ++v3 )
        i = (uint32_t *)*i;
    }
  }
  else
  {
    v3 = -1;
  }
  vox::Mutex::Unlock((vox::FileSystemInterface::Self *)((char *)self + 12));
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::AddArchive  (binary VA: 0x10095a0)
// Original: vox::FileSystemInterface::_AddArchive
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::AddArchive(int a1, vox::FileInterface::Self *a2, char a3, char a4, char a5, char a6, int a7, int a8, char *a9)
{
  const char *v9;
  vox::VoxArchive::Self *v10;
  vox::FileInterface::Self *v11;
  int v12;
  vox::CZipReader::Self **v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char v18;
  int v19;
  unsigned int v21;
  unsigned int v22;
  uint32_t *v23;
  char *v24;
  vox::CZipReader::Self **v25;
  char *v26;
  vox::CZipReader::Self *v27;
  uint32_t *v28;
  unsigned int v29;
  unsigned int v30;
  uint32_t *v31;
  vox::CZipReader::Self **v32;
  char *v33;
  vox::CZipReader::Self *v34;
  uint32_t *v35;
  int v36;
  void (***v37)(uint32_t);
  int v38;
  bool v39; // cc
  int v40;
  int v41;
  int v42;
  char isVoxArchiveFormat;
  char *v44;
  char *v45;
  size_t v46;
  unsigned int v47;
  char *v48;
  uint32_t *v49;
  unsigned int v50;
  char *v51;
  uint32_t *v52;
  vox::CZipReader::Self *v53;
  vox::CZipReader::Self *v54;
  vox::FileInterface::Self *v55;
  int v56;

  v9 = a9;
  if ( a9 == nullptr )
    return -1;
  if ( a2 == nullptr )
    return -1;
  v10 = (vox::VoxArchive::Self *)G4_VCALL<int>(a1, 64);
  v11 = (vox::FileInterface::Self *)(v10);
  if ( v10 == nullptr )
    return -1;
  isVoxArchiveFormat = vox::VoxArchive::isVoxArchiveFormat(v10, a2);
  G4_VCALL<void>(v11, 12, 0, 0);
  if ( isVoxArchiveFormat != 0 )
  {
    v53 = (vox::CZipReader::Self *)VoxAllocInternal(
                               0x68u,
                               0,
                               (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_filesystem.cpp"),
                               (int)(uintptr_t)("_AddArchive"),
                               515);
    vox::VoxArchive::Construct(v53, v11, (vox::FileArchive::FileRange::Self *)&a6, a4 != 1, false, false, v9);
    v12 = *(uint32_t *)(a1 + 8);
    v13 = *(vox::CZipReader::Self ***)(v12 + 12);
    if ( v13 != *(vox::CZipReader::Self ***)(v12 + 16) )
      goto LABEL_6;
    v21 = ((int)(uintptr_t)(v13) - *(uint32_t *)(v12 + 8)) >> 2;
    v46 = 4;
    v47 = v21;
    if ( v21 != 0 )
    {
      v22 = 2 * v21;
      if ( v21 <= 2 * v21 )
      {
        v38 = 8 * v21;
        v39 = v22 <= 0x3FFFFFFF;
        v40 = -4;
        if ( v39 )
          v40 = v38;
        v46 = v40;
      }
      else
      {
        v46 = 0xFFFFFFFC;
      }
    }
    v44 = *(char **)(v12 + 12);
    v23 = (uint32_t *)VoxAllocInternal(
                      v46,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
    v52 = v23;
    v24 = v44;
    v25 = (vox::CZipReader::Self **)&v23[v47];
    if ( v25 != nullptr )
      *v25 = v53;
    v26 = *(char **)(v12 + 8);
    v48 = v26;
    if ( v44 != v26 )
    {
      do
      {
        if ( v23 != nullptr )
          *v23 = *(uint32_t *)v26;
        v26 += 4;
        ++v23;
      }
      while ( v44 != v26 );
      v23 = &v52[((unsigned int)(v44 - (v48 + 4)) >> 2) + 1];
    }
    v49 = v23 + 1;
    v54 = *(vox::CZipReader::Self **)(v12 + 12);
    if ( v44 == (char *)v54 )
    {
LABEL_29:
      if ( *(uint32_t *)(v12 + 8) != 0 )
        VoxFreeInternal(*(void **)(v12 + 8));
      *(uint32_t *)(v12 + 8) = (uint32_t)(uintptr_t)(v52);
      *(uint32_t *)(v12 + 12) = (uint32_t)(uintptr_t)(v49);
      *(uint32_t *)(v12 + 16) = (uint32_t)(uintptr_t)((char *)v52 + v46);
      goto LABEL_9;
    }
    v56 = v12;
    v27 = (vox::CZipReader::Self *)v44;
    v28 = v23 + 1;
    v55 = v11;
    do
    {
      if ( v28 != nullptr )
        *v28 = *(uint32_t *)v27;
      v27 = (vox::CZipReader::Self *)((char *)v27 + 4);
      ++v28;
    }
    while ( v54 != v27 );
LABEL_28:
    v11 = v55;
    v12 = v56;
    v49 += ((unsigned int)(v54 - (vox::CZipReader::Self *)(v24 + 4)) >> 2) + 1;
    goto LABEL_29;
  }
  v53 = (vox::CZipReader::Self *)VoxAllocInternal(
                             0x3Cu,
                             0,
                             (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_filesystem.cpp"),
                             (int)(uintptr_t)("_AddArchive"),
                             518);
  vox::CZipReader::Construct(v53, v11, (vox::FileArchive::FileRange::Self *)&a6, a3, a4, v9);
  v12 = *(uint32_t *)(a1 + 8);
  v13 = *(vox::CZipReader::Self ***)(v12 + 12);
  if ( v13 == *(vox::CZipReader::Self ***)(v12 + 16) )
  {
    v29 = ((int)(uintptr_t)(v13) - *(uint32_t *)(v12 + 8)) >> 2;
    v46 = 4;
    v50 = v29;
    if ( v29 != 0 )
    {
      v30 = 2 * v29;
      if ( v29 <= 2 * v29 )
      {
        v41 = 8 * v29;
        v39 = v30 <= 0x3FFFFFFF;
        v42 = -4;
        if ( v39 )
          v42 = v41;
        v46 = v42;
      }
      else
      {
        v46 = 0xFFFFFFFC;
      }
    }
    v45 = *(char **)(v12 + 12);
    v31 = (uint32_t *)VoxAllocInternal(
                      v46,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
    v52 = v31;
    v24 = v45;
    v32 = (vox::CZipReader::Self **)&v31[v50];
    if ( v32 != nullptr )
      *v32 = v53;
    v33 = *(char **)(v12 + 8);
    v51 = v33;
    if ( v45 != v33 )
    {
      do
      {
        if ( v31 != nullptr )
          *v31 = *(uint32_t *)v33;
        v33 += 4;
        ++v31;
      }
      while ( v45 != v33 );
      v31 = &v52[((unsigned int)(v45 - (v51 + 4)) >> 2) + 1];
    }
    v49 = v31 + 1;
    v54 = *(vox::CZipReader::Self **)(v12 + 12);
    if ( v45 == (char *)v54 )
      goto LABEL_29;
    v56 = v12;
    v34 = (vox::CZipReader::Self *)v45;
    v35 = v31 + 1;
    v55 = v11;
    do
    {
      if ( v35 != nullptr )
        *v35 = *(uint32_t *)v34;
      v34 = (vox::CZipReader::Self *)((char *)v34 + 4);
      ++v35;
    }
    while ( v54 != v34 );
    goto LABEL_28;
  }
LABEL_6:
  v14 = 0;
  if ( v13 != nullptr )
  {
    *v13 = v53;
    v14 = *(uint32_t *)(v12 + 12);
  }
  *(uint32_t *)(v12 + 12) = v14 + 4;
LABEL_9:
  G4_VCALL<void>(a1, 72, v11);
  v15 = *(uint32_t *)(a1 + 8);
  *(uint8_t *)(a1 + 4) = a5;
  v16 = *(uint32_t *)(v15 + 12);
  v17 = *(uint32_t *)(v16 - 4);
  if ( v17 != 0 )
  {
    v18 = (*(int (**)(uint32_t))(*(uint32_t *)v17 + 24))(*(uint32_t *)(v16 - 4));
    v19 = 0;
    if ( v18 == 0 )
    {
      v36 = *(uint32_t *)(*(uint32_t *)(a1 + 8) + 12);
      v37 = *(void (****)(uint32_t))(v36 - 4);
      if ( v37 != nullptr )
      {
        (**v37)((uint32_t)(uintptr_t)(v37));
        VoxFreeInternal(*(void **)(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 12) - 4));
        v36 = *(uint32_t *)(*(uint32_t *)(a1 + 8) + 12);
      }
      *(uint32_t *)(v36 - 4) = 0;
      v19 = -1;
      *(uint32_t *)(*(uint32_t *)(a1 + 8) + 12) -= 4;
    }
  }
  else
  {
    *(uint32_t *)(v15 + 12) = v16 - 4;
    return -1;
  }
  return v19;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::PushDirectory  (binary VA: 0x1009a90)
// Original: vox::FileSystemInterface::PushDirectory
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::PushDirectory(vox::FileSystemInterface::Self *self, char *src)
{
  size_t v2;
  size_t n;
  int v4;
  int v5;
  int v6;
  int v7;
  uint8_t *v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  char v14;
  size_t v15;
  unsigned int v16;
  unsigned int v17;
  size_t v18;
  unsigned int v19;
  int v20;
  size_t v21;
  size_t v22;
  uint8_t *v23;
  int v24;
  uint8_t *v25;
  int v26;
  unsigned int v28;
  unsigned int v29;
  int v30;
  size_t v31;
  int v32;
  int v33;
  int v34;
  char *s;
  int v36;
  int v37;
  int v38;
  size_t v39;
  size_t v40;
  size_t v41;
  size_t v42;
  size_t v43;
  size_t v44;
  int v45;
  int v46;
  void *dest;
  void *desta;
  char destb;
  void *destc;
  size_t v51;
  size_t v52;
  size_t v53;
  size_t v54;
  void *v55;

  vox::VoxThread::GetCurThreadId((vox::VoxThread::Self *)s);
  sub_BA06A0();
  vox::Mutex::Lock((vox::FileSystemInterface::Self *)((char *)self + 12));
  if ( src == nullptr || *((uint32_t *)self + 2) == 0 )
  {
    v26 = -1;
    goto LABEL_61;
  }
  v2 = strlen(src);
  if ( src == &src[v2] )
  {
    v8 = (uint8_t *)(&unk_20E1FB4);
    goto LABEL_13;
  }
  n = v2;
  if ( v2 > 0x3FFFFFFC )
    goto LABEL_96;
  if ( v2 + 29 > 0x1000 && v2 != 0 )
  {
    v4 = ((uint16_t)v2 + 29) & 0xFFF;
    v5 = 1073741820;
    if ( v2 + 4096 - v4 <= 0x3FFFFFFC )
      v5 = v2 + 4096 - v4;
    v6 = VoxAllocInternal(v5 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v6 + 4) = v5;
    v7 = v6;
    *(uint32_t *)(v6 + 8) = 0;
    v8 = (uint8_t *)(v6 + 12);
    goto LABEL_10;
  }
  v7 = VoxAllocInternal(v2 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  *(uint32_t *)(v7 + 4) = n;
  *(uint32_t *)(v7 + 8) = 0;
  v8 = (uint8_t *)(v7 + 12);
  if ( n != 1 )
  {
LABEL_10:
    v39 = v7;
    memcpy(v8, src, n);
    v7 = v39;
    goto LABEL_11;
  }
  *(uint8_t *)(v7 + 12) = *src;
LABEL_11:
  if ( (void *)v7 != (void *)g4_empty_string_rep )
  {
    *(uint32_t *)(v7 + 8) = 0;
    *(uint32_t *)v7 = n;
    v8[n] = 0;
  }
LABEL_13:
  v9 = *((uint32_t *)v8 - 3);
  if ( v9 == 0 )
    sub_1900210("basic_string::at");
  v10 = *((uint32_t *)v8 - 1);
  if ( v10 >= 0
    && v8 - 12 != (uint8_t *)(void *)g4_empty_string_rep )
  {
    if ( v10 != 0 )
    {
      v11 = *((uint32_t *)v8 - 2);
      if ( v9 > 0x3FFFFFFC )
        goto LABEL_96;
      dest = *((void **)v8 - 3);
      if ( v9 > v11 )
      {
        v33 = 2 * v11;
        if ( 2 * v11 < v9 )
          v33 = *((uint32_t *)v8 - 3);
        dest = (void *)v33;
      }
      if ( (unsigned int)(uintptr_t)(dest) + 29 <= 0x1000 || v11 >= (unsigned int)(uintptr_t)(dest) )
      {
        v51 = (size_t)dest + 13;
      }
      else
      {
        v12 = (unsigned int)(uintptr_t)(dest) - (((uint16_t)(uintptr_t)(dest) + 29) & 0xFFF) + 4096;
        if ( v12 > 0x3FFFFFFC )
          v12 = 1073741820;
        dest = (void *)v12;
        v51 = v12 + 13;
      }
      v40 = *((uint32_t *)v8 - 3);
      v13 = VoxAllocInternal(v51, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v13 + 4) = (uint32_t)(uintptr_t)(dest);
      *(uint32_t *)(v13 + 8) = 0;
      v9 = v40;
      desta = (void *)(v13 + 12);
      if ( v40 == 1 )
      {
        *(uint8_t *)(v13 + 12) = *v8;
      }
      else
      {
        v37 = v13;
        memcpy(desta, v8, v40);
        v13 = v37;
        v9 = v40;
      }
      if ( __sync_fetch_and_add((volatile int32_t *)v8 - 1, 0xFFFFFFFF) <= 0 )
      {
        v43 = v9;
        v38 = v13;
        VoxFreeInternal(v8 - 12);
        v13 = v38;
        v9 = v43;
      }
      v8 = (uint8_t *)(desta);
      if ( (void *)v13 != (void *)g4_empty_string_rep )
      {
        *(uint32_t *)(v13 + 8) = 0;
        *(uint32_t *)v13 = v9;
        *(uint8_t *)(v13 + v9 + 12) = 0;
      }
    }
    *((uint32_t *)v8 - 1) = -1;
    v10 = -1;
  }
  v14 = v8[v9 - 1];
  if ( v14 != 92 && v14 != 47 )
  {
    destb = vox::FileSystemInterface::s_pathSeparator;
    if ( v14 != vox::FileSystemInterface::s_pathSeparator )
    {
      v15 = *((uint32_t *)v8 - 3);
      if ( v15 == 1073741820 )
        sub_1900180("basic_string::append");
      v52 = v15 + 1;
      v16 = *((uint32_t *)v8 - 2);
      if ( v15 + 1 > v16 || v10 > 0 )
      {
        v17 = v15 + 1;
        if ( v52 < v15 )
          v17 = *((uint32_t *)v8 - 3);
        if ( v17 > 0x3FFFFFFC )
          goto LABEL_96;
        v18 = v17 + 13;
        if ( v16 < v17 )
        {
          if ( v17 < 2 * v16 )
            v17 = 2 * v16;
          if ( v17 + 29 > 0x1000 && v16 < v17 )
          {
            v19 = v17 + 4096 - (((uint16_t)v17 + 29) & 0xFFF);
            v17 = 1073741820;
            if ( v19 <= 0x3FFFFFFC )
              v17 = v19;
          }
          v18 = v17 + 13;
        }
        v20 = VoxAllocInternal(v18, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        *(uint32_t *)(v20 + 4) = v17;
        *(uint32_t *)(v20 + 8) = 0;
        v21 = *((uint32_t *)v8 - 3);
        v22 = v20;
        v45 = 0;
        v55 = (void *)(v20 + 12);
        if ( v21 != 0 )
        {
          if ( v21 == 1 )
          {
            *(uint8_t *)(v20 + 12) = *v8;
            v45 = *((uint32_t *)v8 - 3);
          }
          else
          {
            v42 = v20;
            memcpy(v55, v8, v21);
            v45 = *((uint32_t *)v8 - 3);
            v22 = v42;
          }
        }
        if ( (void *)v22 != (void *)g4_empty_string_rep )
        {
          *(uint32_t *)(v22 + 8) = 0;
          *(uint32_t *)v22 = v45;
          *(uint8_t *)(v22 + v45 + 12) = 0;
        }
        if ( v8 - 12 != (uint8_t *)(void *)g4_empty_string_rep
          && __sync_fetch_and_add((volatile int32_t *)v8 - 1, 0xFFFFFFFF) <= 0 )
        {
          v44 = v22;
          VoxFreeInternal(v8 - 12);
          v22 = v44;
        }
        v15 = *(uint32_t *)v22;
        v8 = (uint8_t *)(v55);
      }
      v8[v15] = destb;
      if ( v8 - 12 != (uint8_t *)(void *)g4_empty_string_rep )
      {
        *((uint32_t *)v8 - 1) = 0;
        *((uint32_t *)v8 - 3) = v52;
        v8[v52] = 0;
      }
    }
  }
  v23 = v8 - 12;
  v46 = *((uint32_t *)self + 2);
  v24 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  if ( v24 == -8 )
    goto LABEL_59;
  if ( *((int *)v8 - 1) < 0 )
  {
    v28 = *((uint32_t *)v8 - 3);
    v53 = *((uint32_t *)v8 - 2);
    if ( v28 <= 0x3FFFFFFC )
    {
      if ( v28 > v53 && v28 < 2 * v53 )
        v28 = 2 * v53;
      if ( v28 + 29 > 0x1000 && v53 < v28 )
      {
        v29 = v28 + 4096 - (((uint16_t)v28 + 29) & 0xFFF);
        v28 = 1073741820;
        if ( v29 <= 0x3FFFFFFC )
          v28 = v29;
      }
      v41 = v24;
      v30 = VoxAllocInternal(v28 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v30 + 4) = v28;
      *(uint32_t *)(v30 + 8) = 0;
      v31 = *((uint32_t *)v8 - 3);
      v32 = v30;
      v54 = 0;
      destc = (void *)(v30 + 12);
      v24 = v41;
      if ( v31 != 0 )
      {
        if ( v31 == 1 )
        {
          *(uint8_t *)(v30 + 12) = *v8;
          v54 = *((uint32_t *)v8 - 3);
        }
        else
        {
          v36 = v30;
          memcpy(destc, v8, v31);
          v32 = v36;
          v54 = *((uint32_t *)v8 - 3);
          v24 = v41;
        }
      }
      if ( (void *)v32 != (void *)g4_empty_string_rep )
      {
        *(uint32_t *)(v32 + 8) = 0;
        *(uint32_t *)v32 = v54;
        *(uint8_t *)(v32 + v54 + 12) = 0;
      }
      v25 = (uint8_t *)(destc);
      v23 = v8 - 12;
      goto LABEL_58;
    }
LABEL_96:
    sub_1900180("basic_string::_S_create");
  }
  v23 = v8 - 12;
  if ( v8 - 12 != (uint8_t *)(void *)g4_empty_string_rep )
    __sync_add_and_fetch((volatile int32_t *)v8 - 1, 1u);
  v25 = v8;
LABEL_58:
  *(uint32_t *)(v24 + 8) = (uint32_t)(uintptr_t)(v25);
LABEL_59:
  sub_1901920(v24, v46);
  if ( v23 == (uint8_t *)(void *)g4_empty_string_rep )
  {
    v26 = 0;
  }
  else
  {
    v34 = __sync_fetch_and_add((volatile int32_t *)v8 - 1, 0xFFFFFFFF);
    v26 = 0;
    if ( v34 <= 0 )
      VoxFreeInternal(v23);
  }
LABEL_61:
  vox::Mutex::Unlock((vox::FileSystemInterface::Self *)((char *)self + 12));
  sub_BA06B0();
  return v26;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::AddFolderArchive  (binary VA: 0x100a200)
// Original: vox::FileSystemInterface::_AddFolderArchive
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::AddFolderArchive(vox::FileSystemInterface::Self *self, char *s, int a3, const char **a4, bool a5, bool a6, const char *a7)
{
  char *src;
  uint32_t *v8;
  uint32_t *v9;
  unsigned int v10;
  unsigned int n;
  unsigned int v12;
  size_t v13;
  int v14;
  const char *v15;
  int v16;
  vox::VoxFolderArchive::Self **v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  void (***v24)(uint32_t);
  size_t v26;
  int v27;
  unsigned int v28;
  vox::VoxFolderArchive::Self **v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  size_t v42;
  int v43;
  unsigned int v44;
  int v45;
  bool v46; // cc
  int v47;
  size_t v48;
  size_t v49;
  size_t v50;
  size_t v51;
  size_t v52;
  size_t v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  char *dest;
  void *desta;
  char *destb;
  void *destc;
  void *destd;
  char *deste;
  void *destf;
  size_t v66;
  size_t v67;
  size_t v68;
  size_t v69;
  size_t v70;
  unsigned int v71;
  int v72;
  uint32_t *v73;
  unsigned int v74;
  int v75;
  size_t v76;
  size_t v77;
  char *v78;
  size_t v79;
  vox::VoxFolderArchive::Self *v80;

  src = s;
  if ( a7 == nullptr || s == nullptr )
    return -1;
  v8 = *((uint32_t **)self + 2);
  if ( v8 != nullptr )
  {
    v9 = (uint32_t *)*v8;
    if ( v8 == (uint32_t *)*v8 )
    {
      v10 = (unsigned int)(uintptr_t)(&unk_20E1FB4);
    }
    else
    {
      do
        v9 = (uint32_t *)*v9;
      while ( v8 != v9 );
      v10 = *(uint32_t *)(v8[1] + 8);
      if ( (void *)(v10 - 12) != (void *)g4_empty_string_rep )
      {
        if ( *(int *)(v10 - 4) < 0 )
        {
          v38 = *(uint32_t *)(v10 - 12);
          v39 = *(uint32_t *)(v10 - 8);
          if ( v38 > 0x3FFFFFFC )
            goto LABEL_126;
          if ( v38 > v39 && v38 < 2 * v39 )
            v38 = 2 * v39;
          if ( v38 + 29 > 0x1000 && v39 < v38 )
          {
            v40 = v38 + 4096 - (((uint16_t)v38 + 29) & 0xFFF);
            v38 = 1073741820;
            if ( v40 <= 0x3FFFFFFC )
              v38 = v40;
          }
          v51 = v38;
          v41 = VoxAllocInternal(
                  v38 + 13,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
          *(uint32_t *)(v41 + 8) = 0;
          *(uint32_t *)(v41 + 4) = v51;
          v42 = *(uint32_t *)(v10 - 12);
          v43 = v41;
          v70 = 0;
          destf = (void *)(v41 + 12);
          if ( v42 != 0 )
          {
            if ( v42 == 1 )
            {
              *(uint8_t *)(v41 + 12) = *(uint8_t *)v10;
            }
            else
            {
              v56 = v41;
              memcpy(destf, (const void *)v10, v42);
              v43 = v56;
            }
            v70 = *(uint32_t *)(v10 - 12);
          }
          if ( (void *)v43 != (void *)g4_empty_string_rep )
          {
            *(uint32_t *)(v43 + 8) = 0;
            *(uint32_t *)v43 = v70;
            *(uint8_t *)(v43 + v70 + 12) = 0;
          }
          v10 = (unsigned int)(uintptr_t)(destf);
        }
        else
        {
          __sync_add_and_fetch((volatile int32_t *)(v10 - 4), 1u);
        }
      }
    }
  }
  else
  {
    v10 = (unsigned int)(uintptr_t)(&unk_20E1FB4);
  }
  n = strlen(s);
  if ( n != 0 )
  {
    v12 = *(uint32_t *)(v10 - 12);
    if ( n > 1073741820 - v12 )
      sub_1900180("basic_string::append");
    v74 = n + v12;
    v66 = *(uint32_t *)(v10 - 8);
    if ( n + v12 > v66 || *(int *)(v10 - 4) > 0 )
    {
      if ( (unsigned int)(uintptr_t)(s) >= v10 )
      {
        dest = (char *)(v10 + v12);
        if ( (unsigned int)(uintptr_t)(s) <= v10 + v12 )
        {
          if ( v74 == v66 && *(int *)(v10 - 4) <= 0 )
          {
            v77 = v10;
LABEL_25:
            v15 = &s[-v10];
            v10 = v77;
            src = (char *)&v15[v77];
            goto LABEL_26;
          }
          if ( v74 >= v12 )
            v12 += n;
          desta = (void *)v12;
          if ( v12 <= 0x3FFFFFFC )
          {
            v13 = v12 + 13;
            if ( v66 < v12 )
            {
              v34 = 2 * v66;
              if ( (unsigned int)(uintptr_t)(desta) >= 2 * v66 )
                v34 = (unsigned int)(uintptr_t)(desta);
              desta = (void *)v34;
              if ( v34 + 29 <= 0x1000 || v66 >= v34 )
              {
                v13 = v34 + 13;
              }
              else
              {
                v35 = v34 + 4096 - (((uint16_t)v34 + 29) & 0xFFF);
                if ( v35 > 0x3FFFFFFC )
                  v35 = 1073741820;
                desta = (void *)v35;
                v13 = v35 + 13;
              }
            }
            v48 = n;
            v14 = VoxAllocInternal(v13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
            v67 = 0;
            *(uint32_t *)(v14 + 4) = (uint32_t)(uintptr_t)(desta);
            *(uint32_t *)(v14 + 8) = 0;
            n = v48;
            v76 = *(uint32_t *)(v10 - 12);
            destb = (char *)(v14 + 12);
            if ( v76 != 0 )
            {
              if ( v76 == 1 )
              {
                *(uint8_t *)(v14 + 12) = *(uint8_t *)v10;
                v67 = *(uint32_t *)(v10 - 12);
              }
              else
              {
                v54 = v14;
                memcpy(destb, (const void *)v10, v76);
                v14 = v54;
                v67 = *(uint32_t *)(v10 - 12);
                n = v48;
              }
            }
            if ( (void *)v14 != (void *)g4_empty_string_rep )
            {
              *(uint32_t *)(v14 + 8) = 0;
              *(uint32_t *)v14 = v67;
              *(uint8_t *)(v14 + v67 + 12) = 0;
            }
            v77 = (size_t)destb;
            if ( (void *)(v10 - 12) != (void *)g4_empty_string_rep
              && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
            {
              v52 = n;
              v57 = v14;
              VoxFreeInternal((void *)(v10 - 12));
              v14 = v57;
              n = v52;
            }
            dest = &destb[*(uint32_t *)v14];
            goto LABEL_25;
          }
LABEL_126:
          sub_1900180("basic_string::_S_create");
        }
      }
      if ( v74 != v66 || *(int *)(v10 - 4) > 0 )
      {
        if ( v74 >= v12 )
          v12 += n;
        destd = (void *)v12;
        if ( v12 <= 0x3FFFFFFC )
        {
          v26 = v12 + 13;
          if ( v66 < v12 )
          {
            v36 = 2 * v66;
            if ( (unsigned int)(uintptr_t)(destd) >= 2 * v66 )
              v36 = (unsigned int)(uintptr_t)(destd);
            destd = (void *)v36;
            if ( v36 + 29 <= 0x1000 || v36 <= v66 )
            {
              v26 = v36 + 13;
            }
            else
            {
              v37 = v36 + 4096 - (((uint16_t)v36 + 29) & 0xFFF);
              if ( v37 > 0x3FFFFFFC )
                v37 = 1073741820;
              destd = (void *)v37;
              v26 = v37 + 13;
            }
          }
          v49 = n;
          v27 = VoxAllocInternal(v26, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
          v68 = 0;
          *(uint32_t *)(v27 + 4) = (uint32_t)(uintptr_t)(destd);
          *(uint32_t *)(v27 + 8) = 0;
          n = v49;
          deste = *(char **)(v10 - 12);
          v78 = (char *)(v27 + 12);
          if ( deste != nullptr )
          {
            if ( deste == (char *)(uintptr_t)(uint8_t *)&dword_0 + 1 )
            {
              *(uint8_t *)(v27 + 12) = *(uint8_t *)v10;
              v68 = *(uint32_t *)(v10 - 12);
            }
            else
            {
              v55 = v27;
              memcpy(v78, (const void *)v10, (size_t)deste);
              v27 = v55;
              v68 = *(uint32_t *)(v10 - 12);
              n = v49;
            }
          }
          if ( (void *)v27 != (void *)g4_empty_string_rep )
          {
            *(uint32_t *)(v27 + 8) = 0;
            *(uint32_t *)v27 = v68;
            *(uint8_t *)(v27 + v68 + 12) = 0;
          }
          if ( (void *)(v10 - 12) != (void *)g4_empty_string_rep
            && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
          {
            v53 = n;
            v58 = v27;
            VoxFreeInternal((void *)(v10 - 12));
            v27 = v58;
            n = v53;
          }
          dest = &v78[*(uint32_t *)v27];
          v10 = (unsigned int)(uintptr_t)(v78);
          goto LABEL_26;
        }
        goto LABEL_126;
      }
    }
    dest = (char *)(v10 + v12);
LABEL_26:
    if ( n == 1 )
      *dest = *src;
    else
      memcpy(dest, src, n);
    destc = (void *)(v10 - 12);
    if ( (void *)(v10 - 12) != (void *)g4_empty_string_rep )
    {
      *(uint32_t *)(v10 - 4) = 0;
      *(uint32_t *)(v10 - 12) = v74;
      *(uint8_t *)(v10 + v74) = 0;
    }
    goto LABEL_31;
  }
  destc = (void *)(v10 - 12);
LABEL_31:
  v80 = (vox::VoxFolderArchive::Self *)VoxAllocInternal(
                                   0x28u,
                                   0,
                                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_filesystem.cpp"),
                                   (int)(uintptr_t)("_AddFolderArchive"),
                                   572);
  vox::VoxFolderArchive::Construct(v80, (const char *)v10, a3, a4, !a5, a7);
  v16 = *((uint32_t *)self + 2);
  v17 = *(vox::VoxFolderArchive::Self ***)(v16 + 12);
  if ( v17 == *(vox::VoxFolderArchive::Self ***)(v16 + 16) )
  {
    v28 = ((int)(uintptr_t)(v17) - *(uint32_t *)(v16 + 8)) >> 2;
    v69 = 4;
    v71 = v28;
    if ( v28 != 0 )
    {
      v44 = 2 * v28;
      if ( v28 <= 2 * v28 )
      {
        v45 = 8 * v28;
        v46 = v44 <= 0x3FFFFFFF;
        v47 = -4;
        if ( v46 )
          v47 = v45;
        v69 = v47;
      }
      else
      {
        v69 = 0xFFFFFFFC;
      }
    }
    v50 = *(uint32_t *)(v16 + 12);
    v75 = VoxAllocInternal(v69, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    v79 = v75 + 4;
    v29 = (vox::VoxFolderArchive::Self **)(v75 + 4 * v71);
    if ( v29 != nullptr )
      *v29 = v80;
    v72 = *(uint32_t *)(v16 + 8);
    if ( v50 != v72 )
    {
      v30 = *(uint32_t **)(v16 + 8);
      v31 = (uint32_t *)v75;
      do
      {
        if ( v31 != nullptr )
          *v31 = *v30;
        ++v30;
        ++v31;
      }
      while ( (uint32_t *)v50 != v30 );
      v79 = v75 + 4 * ((v50 - (v72 + 4)) >> 2) + 8;
    }
    v73 = *(uint32_t **)(v16 + 12);
    if ( (uint32_t *)v50 != v73 )
    {
      v32 = (uint32_t *)v50;
      v33 = (uint32_t *)v79;
      do
      {
        if ( v33 != nullptr )
          *v33 = *v32;
        ++v32;
        ++v33;
      }
      while ( v73 != v32 );
      v79 += 4 * (((unsigned int)(uintptr_t)(v73) - v50 - 4) >> 2) + 4;
    }
    if ( *(uint32_t *)(v16 + 8) != 0 )
      VoxFreeInternal(*(void **)(v16 + 8));
    *(uint32_t *)(v16 + 8) = v75;
    *(uint32_t *)(v16 + 12) = v79;
    *(uint32_t *)(v16 + 16) = v69 + v75;
  }
  else
  {
    v18 = 0;
    if ( v17 != nullptr )
    {
      *v17 = v80;
      v18 = *(uint32_t *)(v16 + 12);
    }
    *(uint32_t *)(v16 + 12) = v18 + 4;
  }
  v19 = *((uint32_t *)self + 2);
  *((uint8_t *)self + 4) = a6;
  v20 = *(uint32_t *)(v19 + 12);
  v21 = *(uint32_t *)(v20 - 4);
  if ( v21 != 0 )
  {
    v22 = 0;
    if ( (*(uint8_t (**)(uint32_t))(*(uint32_t *)v21 + 24))(*(uint32_t *)(v20 - 4)) == 0 )
    {
      v23 = *(uint32_t *)(*((uint32_t *)self + 2) + 12);
      v24 = *(void (****)(uint32_t))(v23 - 4);
      if ( v24 != nullptr )
      {
        (**v24)((uint32_t)(uintptr_t)(v24));
        VoxFreeInternal(*(void **)(*(uint32_t *)(*((uint32_t *)self + 2) + 12) - 4));
        v23 = *(uint32_t *)(*((uint32_t *)self + 2) + 12);
      }
      *(uint32_t *)(v23 - 4) = 0;
      v22 = -1;
      *(uint32_t *)(*((uint32_t *)self + 2) + 12) -= 4;
    }
  }
  else
  {
    v22 = -1;
    *(uint32_t *)(v19 + 12) = v20 - 4;
  }
  if ( destc != (void *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal(destc);
  }
  return v22;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::IsDirectory  (binary VA: 0x100ab40)
// Original: vox::FileSystemInterface::IsDirectory
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::IsDirectory(vox::FileSystemInterface::Self *self, char *s, bool *a3)
{
  const char *src;
  uint32_t *v4;
  uint32_t *v5;
  char *v6;
  unsigned int n;
  unsigned int v8;
  unsigned int v9;
  char *v10;
  unsigned int v11;
  int v12;
  size_t v13;
  int v14;
  char *v15;
  char *v16;
  int result;
  unsigned int v18;
  int v19;
  size_t v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  size_t v30;
  int v31;
  char *v32;
  char *v33;
  int v34;
  char *v35;
  char *v36;
  char *v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  unsigned int v45;
  size_t v46;
  size_t v47;
  size_t v48;
  size_t v49;
  int16_t v50;
  int16_t v51;
  uint8_t *v52;
  uint8_t *v53;

  src = s;
  if ( dword_20E2078[0] == 0 )
  {
    *a3 = false;
    return -1;
  }
  v4 = *((uint32_t **)self + 2);
  if ( v4 != nullptr )
  {
    v5 = (uint32_t *)*v4;
    if ( v4 == (uint32_t *)*v4 )
    {
      v6 = (char *)&unk_20E1FB4;
    }
    else
    {
      do
        v5 = (uint32_t *)*v5;
      while ( v4 != v5 );
      v6 = *(char **)(v4[1] + 8);
      if ( v6 - 12 != (char *)(void *)g4_empty_string_rep )
      {
        if ( *((int *)v6 - 1) < 0 )
        {
          v26 = *((uint32_t *)v6 - 3);
          v27 = *((uint32_t *)v6 - 2);
          if ( v26 > 0x3FFFFFFC )
            goto LABEL_91;
          if ( v26 > v27 && v26 < 2 * v27 )
            v26 = 2 * v27;
          if ( v26 + 29 > 0x1000 && v27 < v26 )
          {
            v28 = v26 + 4096 - (((uint16_t)v26 + 29) & 0xFFF);
            v26 = 1073741820;
            if ( v28 <= 0x3FFFFFFC )
              v26 = v28;
          }
          v29 = VoxAllocInternal(
                  v26 + 13,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
          *(uint32_t *)(v29 + 4) = v26;
          *(uint32_t *)(v29 + 8) = 0;
          v30 = *((uint32_t *)v6 - 3);
          v31 = 0;
          v32 = (char *)(v29 + 12);
          if ( v30 != 0 )
          {
            if ( v30 == 1 )
            {
              *(uint8_t *)(v29 + 12) = *v6;
              v31 = *((uint32_t *)v6 - 3);
            }
            else
            {
              v34 = v29;
              memcpy((void *)(v29 + 12), v6, v30);
              v31 = *((uint32_t *)v6 - 3);
              v29 = v34;
            }
          }
          if ( (void *)v29 == (void *)g4_empty_string_rep )
          {
            v6 = v32;
          }
          else
          {
            *(uint32_t *)(v29 + 8) = 0;
            *(uint32_t *)v29 = v31;
            v6 = v32;
            *(uint8_t *)(v29 + v31 + 12) = 0;
          }
        }
        else
        {
          __sync_add_and_fetch((volatile int32_t *)v6 - 1, 1u);
        }
      }
    }
  }
  else
  {
    v6 = (char *)&unk_20E1FB4;
  }
  n = strlen(s);
  if ( n == 0 )
  {
    v16 = v6 - 12;
    result = ((int (*)(char *, bool *))dword_20E2078[0])(v6, a3);
    if ( v6 - 12 == (char *)(void *)g4_empty_string_rep )
      return result;
    goto LABEL_94;
  }
  v8 = *((uint32_t *)v6 - 3);
  if ( n > 1073741820 - v8 )
    sub_1900180("basic_string::append");
  v45 = n + v8;
  v9 = *((uint32_t *)v6 - 2);
  if ( n + v8 <= v9 && *((int *)v6 - 1) <= 0 )
    goto LABEL_26;
  if ( s < v6 || (v10 = &v6[v8], s > &v6[v8]) )
  {
    if ( v45 == v9 && *((int *)v6 - 1) <= 0 )
    {
LABEL_26:
      v10 = &v6[v8];
      v15 = v6;
      goto LABEL_27;
    }
    v18 = n + v8;
    if ( v45 < v8 )
      v18 = *((uint32_t *)v6 - 3);
    if ( v18 <= 0x3FFFFFFC )
    {
      v48 = v18 + 13;
      if ( v9 < v18 )
      {
        if ( v18 < 2 * v9 )
          v18 = 2 * v9;
        v50 = v18 + 29;
        if ( v18 + 29 <= 0x1000 || v9 >= v18 )
        {
          v48 = v18 + 13;
        }
        else
        {
          v22 = v18 + 4096;
          v18 = 1073741820;
          v23 = v22 - (v50 & 0xFFF);
          if ( v23 <= 0x3FFFFFFC )
            v18 = v23;
          v48 = v18 + 13;
        }
      }
      v39 = v18;
      v19 = VoxAllocInternal(v48, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v19 + 8) = 0;
      *(uint32_t *)(v19 + 4) = v39;
      v20 = *((uint32_t *)v6 - 3);
      v49 = v19;
      v53 = nullptr;
      v21 = v19 + 12;
      if ( v20 != 0 )
      {
        if ( v20 == 1 )
        {
          *(uint8_t *)(v19 + 12) = *v6;
        }
        else
        {
          v41 = v19 + 12;
          memcpy((void *)(v19 + 12), v6, v20);
          v21 = v41;
        }
        v53 = *((uint8_t **)v6 - 3);
      }
      if ( (void *)v49 != (void *)g4_empty_string_rep )
      {
        *(uint32_t *)(v49 + 8) = 0;
        *(uint32_t *)v49 = (uint32_t)(uintptr_t)(v53);
        v53[v49 + 12] = 0;
      }
      v15 = (char *)v21;
      if ( v6 - 12 != (char *)(void *)g4_empty_string_rep
        && __sync_fetch_and_add((volatile int32_t *)v6 - 1, 0xFFFFFFFF) <= 0 )
      {
        v36 = (char *)v21;
        v43 = v21;
        VoxFreeInternal(v6 - 12);
        v21 = v43;
        v15 = v36;
      }
      v10 = (char *)(*(uint32_t *)v49 + v21);
LABEL_27:
      if ( n != 1 )
        goto LABEL_28;
      goto LABEL_24;
    }
    goto LABEL_91;
  }
  if ( v45 == v9 && *((int *)v6 - 1) <= 0 )
  {
    v15 = v6;
    goto LABEL_23;
  }
  v11 = n + v8;
  if ( v45 < v8 )
    v11 = *((uint32_t *)v6 - 3);
  if ( v11 > 0x3FFFFFFC )
LABEL_91:
    sub_1900180("basic_string::_S_create");
  v46 = v11 + 13;
  if ( v9 < v11 )
  {
    if ( v11 < 2 * v9 )
      v11 = 2 * v9;
    v51 = v11 + 29;
    if ( v11 + 29 <= 0x1000 || v9 >= v11 )
    {
      v46 = v11 + 13;
    }
    else
    {
      v24 = v11 + 4096;
      v11 = 1073741820;
      v25 = v24 - (v51 & 0xFFF);
      if ( v25 <= 0x3FFFFFFC )
        v11 = v25;
      v46 = v11 + 13;
    }
  }
  v38 = v11;
  v12 = VoxAllocInternal(v46, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  *(uint32_t *)(v12 + 8) = 0;
  *(uint32_t *)(v12 + 4) = v38;
  v13 = *((uint32_t *)v6 - 3);
  v47 = v12;
  v52 = nullptr;
  v14 = v12 + 12;
  if ( v13 != 0 )
  {
    if ( v13 == 1 )
    {
      *(uint8_t *)(v12 + 12) = *v6;
    }
    else
    {
      v40 = v12 + 12;
      memcpy((void *)(v12 + 12), v6, v13);
      v14 = v40;
    }
    v52 = *((uint8_t **)v6 - 3);
  }
  if ( (void *)v47 != (void *)g4_empty_string_rep )
  {
    *(uint32_t *)(v47 + 8) = 0;
    *(uint32_t *)v47 = (uint32_t)(uintptr_t)(v52);
    v52[v47 + 12] = 0;
  }
  v15 = (char *)v14;
  if ( v6 - 12 != (char *)(void *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)v6 - 1, 0xFFFFFFFF) <= 0 )
  {
    v35 = (char *)v14;
    v42 = v14;
    VoxFreeInternal(v6 - 12);
    v14 = v42;
    v15 = v35;
  }
  v10 = (char *)(*(uint32_t *)v47 + v14);
LABEL_23:
  src = &v15[s - v6];
  if ( n != 1 )
  {
LABEL_28:
    v33 = v15;
    memcpy(v10, src, n);
    v15 = v33;
    goto LABEL_29;
  }
LABEL_24:
  *v10 = *src;
LABEL_29:
  v16 = v15 - 12;
  if ( v15 - 12 == (char *)(void *)g4_empty_string_rep )
    return ((int (*)(char *, bool *))dword_20E2078[0])(v15, a3);
  *((uint32_t *)v15 - 1) = 0;
  *((uint32_t *)v15 - 3) = v45;
  v15[v45] = 0;
  v37 = v15;
  result = ((int (*)(char *, bool *))dword_20E2078[0])(v15, a3);
  v6 = v37;
LABEL_94:
  if ( __sync_fetch_and_add((volatile int32_t *)v6 - 1, 0xFFFFFFFF) <= 0 )
  {
    v44 = result;
    VoxFreeInternal(v16);
    return v44;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::Construct  (binary VA: 0x100b1a0)
// Original: vox::FileSystemInterface::FileSystemInterface
// ----------------------------------------------------------------------------
vox::FileSystemInterface::Self * vox::FileSystemInterface::Construct(vox::FileSystemInterface::Self *self)
{
  vox::FileSystemInterface::Self *result;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D648);
  *((uint8_t *)self + 4) = 0;
  vox::Mutex::Construct((vox::FileSystemInterface::Self *)((char *)self + 12));
  result = (vox::FileSystemInterface::Self *)VoxAllocInternal(
                                         0x14u,
                                         0,
                                         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_filesystem.cpp"),
                                         (int)(uintptr_t)("FileSystemInterface"),
                                         86);
  *(uint32_t *)result = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)result + 1) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)result + 2) = 0;
  *((uint32_t *)result + 3) = 0;
  *((uint32_t *)result + 4) = 0;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::GetInstance  (binary VA: 0x100b230)
// Original: vox::FileSystemInterface::GetInstance
// ----------------------------------------------------------------------------
vox::FileSystemStdio::Self * vox::FileSystemInterface::GetInstance()
{
  vox::FileSystemStdio::Self *result;

  result = (vox::FileSystemStdio::Self *)vox::FileSystemInterface::m_instance;
  if ( vox::FileSystemInterface::m_instance == 0 )
  {
    result = vox::VoxNewFileSystem();
    vox::FileSystemInterface::m_instance = (uintptr_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::DestroyInstance  (binary VA: 0x100b280)
// Original: vox::FileSystemInterface::DestroyInstance
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::DestroyInstance()
{
  int result;

  result = vox::FileSystemInterface::m_instance;
  if ( vox::FileSystemInterface::m_instance != 0 )
  {
    (*(void (**)(uint32_t))*(uintptr_t *)(vox::FileSystemInterface::m_instance))(vox::FileSystemInterface::m_instance);
    result = VoxFreeInternal(vox::FileSystemInterface::m_instance);
  }
  vox::FileSystemInterface::m_instance = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::GetDirectory  (binary VA: 0x100b2d0)
// Original: vox::FileSystemInterface::GetDirectory
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::GetDirectory(vox::FileSystemInterface::Self *self, char *a2, char *a3)
{
  char *v3;
  char *v4;
  int v5;
  int v6;
  char *s;
  int v9;

  vox::VoxThread::GetCurThreadId((vox::VoxThread::Self *)s);
  sub_BA06A0();
  if ( a3 != nullptr && self != nullptr )
  {
    v3 = strrchr(a3, 47);
    if ( v3 != nullptr
      || (v3 = strrchr(a3, 92)) != nullptr
      || (v3 = strrchr(a3, vox::FileSystemInterface::s_pathSeparator)) != nullptr )
    {
      v4 = v3;
      v5 = -1;
      v6 = v4 - a3;
      if ( v6 + 1 < (int)(uintptr_t)(a2) )
      {
        memcpy(self, a3, v6 + 1);
        *((uint8_t *)self + v6 + 1) = 0;
        v5 = 0;
      }
    }
    else
    {
      *(uint8_t *)self = 0;
      v5 = -1;
    }
  }
  else
  {
    v5 = -1;
  }
  v9 = v5;
  sub_BA06B0();
  return v9;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::SetPathSeparator  (binary VA: 0x100b3e0)
// Original: vox::FileSystemInterface::SetPathSeparator
// ----------------------------------------------------------------------------
void vox::FileSystemInterface::SetPathSeparator(vox::FileSystemInterface::Self *self)
{
  vox::VoxThread::Self *v1;

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  vox::FileSystemInterface::s_pathSeparator = (uint8_t)(uintptr_t)(self);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::OpenArchiveFile  (binary VA: 0x100b900)
// Original: vox::FileSystemInterface::_OpenArchiveFile
// ----------------------------------------------------------------------------
vox::FileLimited::Self * vox::FileSystemInterface::OpenArchiveFile(int a1, char *s, int a3, int a4)
{
  char *src;
  uint32_t *v5;
  uint32_t *v6;
  unsigned int v7;
  unsigned int n;
  unsigned int v9;
  unsigned int v10;
  char *v11;
  unsigned int v12;
  int v13;
  size_t v14;
  int v15;
  char *v16;
  void *v17;
  vox::FileLimited::Self *v18;
  unsigned int v20;
  int v21;
  size_t v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  size_t v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  uint8_t *v42;
  void *v43;
  size_t v44;
  size_t v45;
  size_t v46;
  size_t v47;
  char *v48;
  int16_t v49;
  int16_t v50;
  char *dest;
  uint8_t *desta;

  src = s;
  v5 = *(uint32_t **)(a1 + 8);
  if ( v5 == nullptr || (v6 = (uint32_t *)*v5, v5 == (uint32_t *)*v5) )
  {
    v7 = (unsigned int)(uintptr_t)(&unk_20E1FB4);
  }
  else
  {
    do
      v6 = (uint32_t *)*v6;
    while ( v5 != v6 );
    v7 = *(uint32_t *)(v5[1] + 8);
    if ( (void *)(v7 - 12) != (void *)g4_empty_string_rep )
    {
      if ( *(int *)(v7 - 4) < 0 )
      {
        v28 = *(uint32_t *)(v7 - 12);
        v29 = *(uint32_t *)(v7 - 8);
        if ( v28 > 0x3FFFFFFC )
          goto LABEL_98;
        if ( v28 > v29 && v28 < 2 * v29 )
          v28 = 2 * v29;
        if ( v28 + 29 > 0x1000 && v29 < v28 )
        {
          v30 = v28 + 4096 - (((uint16_t)v28 + 29) & 0xFFF);
          v28 = 1073741820;
          if ( v30 <= 0x3FFFFFFC )
            v28 = v30;
        }
        v31 = VoxAllocInternal(
                v28 + 13,
                0,
                (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                (int)(uintptr_t)("internal_new"),
                181);
        *(uint32_t *)(v31 + 4) = v28;
        *(uint32_t *)(v31 + 8) = 0;
        v32 = *(uint32_t *)(v7 - 12);
        v33 = 0;
        v34 = v31 + 12;
        if ( v32 != 0 )
        {
          if ( v32 == 1 )
          {
            *(uint8_t *)(v31 + 12) = *(uint8_t *)v7;
            v33 = *(uint32_t *)(v7 - 12);
          }
          else
          {
            v39 = v31;
            memcpy((void *)(v31 + 12), (const void *)v7, v32);
            v33 = *(uint32_t *)(v7 - 12);
            v31 = v39;
          }
        }
        if ( (void *)v31 == (void *)g4_empty_string_rep )
        {
          v7 = v34;
        }
        else
        {
          *(uint32_t *)(v31 + 8) = 0;
          *(uint32_t *)v31 = v33;
          v7 = v34;
          *(uint8_t *)(v31 + v33 + 12) = 0;
        }
      }
      else
      {
        __sync_add_and_fetch((volatile int32_t *)(v7 - 4), 1u);
      }
    }
  }
  n = strlen(s);
  if ( n == 0 )
  {
    v17 = (void *)(v7 - 12);
    goto LABEL_29;
  }
  v9 = *(uint32_t *)(v7 - 12);
  if ( n > 1073741820 - v9 )
    sub_1900180("basic_string::append");
  v42 = (uint8_t *)(n + v9);
  v10 = *(uint32_t *)(v7 - 8);
  if ( n + v9 > v10 || *(int *)(v7 - 4) > 0 )
  {
    if ( (unsigned int)(uintptr_t)(s) >= v7 )
    {
      v11 = (char *)(v7 + v9);
      if ( (unsigned int)(uintptr_t)(s) <= v7 + v9 )
      {
        if ( v42 == (uint8_t *)v10 && *(int *)(v7 - 4) <= 0 )
        {
          v46 = v7;
LABEL_23:
          v16 = &s[-v7];
          v7 = v46;
          src = &v16[v46];
          goto LABEL_24;
        }
        v12 = n + v9;
        if ( (unsigned int)(uintptr_t)(v42) < v9 )
          v12 = *(uint32_t *)(v7 - 12);
        if ( v12 <= 0x3FFFFFFC )
        {
          v44 = v12 + 13;
          if ( v10 < v12 )
          {
            if ( v12 < 2 * v10 )
              v12 = 2 * v10;
            v49 = v12 + 29;
            if ( v12 + 29 <= 0x1000 || v12 <= v10 )
            {
              v44 = v12 + 13;
            }
            else
            {
              v24 = v12 + 4096;
              v12 = 1073741820;
              v25 = v24 - (v49 & 0xFFF);
              if ( v25 <= 0x3FFFFFFC )
                v12 = v25;
              v44 = v12 + 13;
            }
          }
          v35 = v12;
          v13 = VoxAllocInternal(v44, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
          *(uint32_t *)(v13 + 8) = 0;
          *(uint32_t *)(v13 + 4) = v35;
          v14 = *(uint32_t *)(v7 - 12);
          v15 = v13;
          v45 = 0;
          dest = (char *)(v13 + 12);
          if ( v14 != 0 )
          {
            if ( v14 == 1 )
            {
              *(uint8_t *)(v13 + 12) = *(uint8_t *)v7;
            }
            else
            {
              v37 = v13;
              memcpy(dest, (const void *)v7, v14);
              v15 = v37;
            }
            v45 = *(uint32_t *)(v7 - 12);
          }
          if ( (void *)v15 != (void *)g4_empty_string_rep )
          {
            *(uint32_t *)(v15 + 8) = 0;
            *(uint32_t *)v15 = v45;
            *(uint8_t *)(v15 + v45 + 12) = 0;
          }
          v46 = (size_t)dest;
          if ( (void *)(v7 - 12) != (void *)g4_empty_string_rep
            && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
          {
            v40 = v15;
            VoxFreeInternal((void *)(v7 - 12));
            v15 = v40;
          }
          v11 = &dest[*(uint32_t *)v15];
          goto LABEL_23;
        }
LABEL_98:
        sub_1900180("basic_string::_S_create");
      }
    }
    if ( v42 != (uint8_t *)v10 || *(int *)(v7 - 4) > 0 )
    {
      v20 = n + v9;
      if ( (unsigned int)(uintptr_t)(v42) < v9 )
        v20 = *(uint32_t *)(v7 - 12);
      if ( v20 <= 0x3FFFFFFC )
      {
        v47 = v20 + 13;
        if ( v10 < v20 )
        {
          if ( v20 < 2 * v10 )
            v20 = 2 * v10;
          v50 = v20 + 29;
          if ( v20 + 29 <= 0x1000 || v10 >= v20 )
          {
            v47 = v20 + 13;
          }
          else
          {
            v26 = v20 + 4096;
            v20 = 1073741820;
            v27 = v26 - (v50 & 0xFFF);
            if ( v27 <= 0x3FFFFFFC )
              v20 = v27;
            v47 = v20 + 13;
          }
        }
        v36 = v20;
        v21 = VoxAllocInternal(v47, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        *(uint32_t *)(v21 + 8) = 0;
        *(uint32_t *)(v21 + 4) = v36;
        v22 = *(uint32_t *)(v7 - 12);
        v23 = v21;
        desta = nullptr;
        v48 = (char *)(v21 + 12);
        if ( v22 != 0 )
        {
          if ( v22 == 1 )
          {
            *(uint8_t *)(v21 + 12) = *(uint8_t *)v7;
          }
          else
          {
            v38 = v21;
            memcpy(v48, (const void *)v7, v22);
            v23 = v38;
          }
          desta = *(uint8_t **)(v7 - 12);
        }
        if ( (void *)v23 != (void *)g4_empty_string_rep )
        {
          *(uint32_t *)(v23 + 8) = 0;
          *(uint32_t *)v23 = (uint32_t)(uintptr_t)(desta);
          desta[v23 + 12] = 0;
        }
        if ( (void *)(v7 - 12) != (void *)g4_empty_string_rep
          && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
        {
          v41 = v23;
          VoxFreeInternal((void *)(v7 - 12));
          v23 = v41;
        }
        v7 = (unsigned int)(uintptr_t)(v48);
        v11 = &v48[*(uint32_t *)v23];
        goto LABEL_24;
      }
      goto LABEL_98;
    }
  }
  v11 = (char *)(v7 + v9);
LABEL_24:
  if ( n == 1 )
    *v11 = *src;
  else
    memcpy(v11, src, n);
  v17 = (void *)(v7 - 12);
  if ( (void *)(v7 - 12) != (void *)g4_empty_string_rep )
  {
    *(uint32_t *)(v7 - 4) = 0;
    *(uint32_t *)(v7 - 12) = (uint32_t)(uintptr_t)(v42);
    v42[v7] = 0;
  }
LABEL_29:
  v43 = (void *)G4_MEM_CALL((uintptr_t)((*(uintptr_t *)unk_20E2070)), v7, a4);
  if ( v43 != nullptr )
  {
    if ( *(uint8_t *)a3 != 0 )
    {
      v18 = (vox::FileLimited::Self *)VoxAllocInternal(
                                  0x14u,
                                  0,
                                  (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_filesystem.cpp"),
                                  (int)(uintptr_t)("_OpenArchiveFile"),
                                  159);
      vox::FileLimited::Construct(v18, v43, (char *)v7, *(uint32_t *)(a3 + 4), *(uint32_t *)(a3 + 8));
    }
    else
    {
      v18 = (vox::FileLimited::Self *)VoxAllocInternal(
                                  8u,
                                  0,
                                  (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_filesystem.cpp"),
                                  (int)(uintptr_t)("_OpenArchiveFile"),
                                  161);
      vox::FileInterface::Construct(v18, v43, (char *)v7);
    }
    if ( v18 == nullptr )
      G4_MEM_CALL((uintptr_t)((*(uintptr_t *)unk_20E2074)), v43);
  }
  else
  {
    v18 = nullptr;
  }
  if ( v17 != (void *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal(v17);
  }
  return v18;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::AddFileSegmentArchive  (binary VA: 0x100c580)
// Original: vox::FileSystemInterface::AddFileSegmentArchive
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::AddFileSegmentArchive(vox::FileSystemInterface::Self *self, const char *a2, int a3, int a4, bool a5, bool a6, bool a7, const char *a8)
{
  int v8;
  int v9;
  typedef vox::FileArchive::FileRange::Self *_g4_t_v11;
  typedef uint32_t _g4_t_v12[6];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (68u + sizeof(_g4_t_v12)) > _g4_s1 ? (68u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 68u);

  vox::VoxThread::GetCurThreadId(v11);
  sub_BA06A0();
  vox::Mutex::Lock((vox::FileSystemInterface::Self *)((char *)self + 12));
  if ( a8 != nullptr && a2 != nullptr )
  {
    G4_VCALL<void>(self, 76, a8);
    vox::FileArchive::FileRange::FileRange((vox::FileArchive::FileRange::Self *)v12);
    v8 = *(uint32_t *)self;
    v12[1] = a3;
    v12[2] = a4;
    LOBYTE(v12[0]) = 1;
    v9 = (*(int (**)(vox::FileSystemInterface::Self *, const char *, bool, bool, bool, uint32_t, int, int, const char *))(v8 + 80))(
           self,
           a2,
           a5,
           a6,
           a7,
           v12[0],
           a3,
           a4,
           a8);
  }
  else
  {
    v9 = -1;
  }
  vox::Mutex::Unlock((vox::FileSystemInterface::Self *)((char *)self + 12));
  sub_BA06B0();
  return v9;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::AddArchive  (binary VA: 0x100c6d0)
// Original: vox::FileSystemInterface::AddArchive
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::AddArchive(vox::FileSystemInterface::Self *self, const char *a2, bool a3, bool a4, bool a5)
{
  int v5;
  typedef vox::FileArchive::FileRange::Self *_g4_t_v7;
  typedef uint32_t _g4_t_v8[6];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (68u + sizeof(_g4_t_v8)) > _g4_s1 ? (68u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 68u);

  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  vox::Mutex::Lock((vox::FileSystemInterface::Self *)((char *)self + 12));
  if ( a2 != nullptr )
  {
    G4_VCALL<void>(self, 76, a2);
    vox::FileArchive::FileRange::FileRange((vox::FileArchive::FileRange::Self *)v8);
    v5 = G4_VCALL<int>(self, 80, a2, a3, a4, a5, v8[0], v8[1], v8[2], a2);
  }
  else
  {
    v5 = -1;
  }
  vox::Mutex::Unlock((vox::FileSystemInterface::Self *)((char *)self + 12));
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::SetArchive  (binary VA: 0x100c7f0)
// Original: vox::FileSystemInterface::SetArchive
// ----------------------------------------------------------------------------
int vox::FileSystemInterface::SetArchive(vox::FileSystemInterface::Self *self, const char *a2, bool a3, bool a4, bool a5)
{
  int v5;
  int v6;
  unsigned int v7;
  void (***v8)(uint32_t, int);
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  typedef vox::FileArchive::FileRange::Self *_g4_t_v14;
  typedef int _g4_t_CurThreadId;
  typedef uint32_t _g4_t_v16[10];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_CurThreadId)) > _g4_s1 ? (4u + sizeof(_g4_t_CurThreadId)) : _g4_s1,
    _g4_s3 = (84u + sizeof(_g4_t_v16)) > _g4_s2 ? (84u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_CurThreadId &CurThreadId = *reinterpret_cast<_g4_t_CurThreadId *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 84u);

  CurThreadId = vox::VoxThread::GetCurThreadId(v14);
  sub_BA06A0();
  vox::Mutex::Lock((vox::FileSystemInterface::Self *)((char *)self + 12));
  if ( a2 != nullptr )
  {
    v5 = *((uint32_t *)self + 2);
    v6 = *(uint32_t *)(v5 + 8);
    if ( (unsigned int)(*(uint32_t *)(v5 + 12) - v6) >> 2 != 0 )
    {
      v7 = 0;
      do
      {
        v8 = *(void (****)(uint32_t, int))(v6 + 4 * v7);
        v9 = 4 * v7;
        if ( v8 != nullptr )
        {
          (**v8)((uint32_t)(uintptr_t)(v8), CurThreadId);
          VoxFreeInternal(*(void **)(*(uint32_t *)(*((uint32_t *)self + 2) + 8) + 4 * v7));
          v9 = 4 * v7;
          v6 = *(uint32_t *)(*((uint32_t *)self + 2) + 8);
        }
        *(uint32_t *)(v6 + v9) = 0;
        v10 = *((uint32_t *)self + 2);
        ++v7;
        v6 = *(uint32_t *)(v10 + 8);
        v11 = (*(uint32_t *)(v10 + 12) - v6) >> 2;
      }
      while ( v7 < v11 );
      if ( v11 != 0 )
        *(uint32_t *)(v10 + 12) = v6;
    }
    vox::FileArchive::FileRange::FileRange((vox::FileArchive::FileRange::Self *)v16);
    v12 = G4_VCALL<int>(self, 80, a2, a3, a4, a5, v16[0], v16[1], v16[2], a2);
  }
  else
  {
    v12 = -1;
  }
  vox::Mutex::Unlock((vox::FileSystemInterface::Self *)((char *)self + 12));
  sub_BA06B0();
  return v12;
}

// ----------------------------------------------------------------------------
// Function: vox::FileSystemInterface::OpenFile  (binary VA: 0x100c960)
// Original: vox::FileSystemInterface::_OpenFile
// ----------------------------------------------------------------------------
vox::FileLimited::Self * vox::FileSystemInterface::OpenFile(int a1, char *s, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint8_t *src;
  unsigned int n;
  unsigned int v7;
  unsigned int v8;
  size_t v9;
  int v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  uint32_t *v22;
  int v24;
  int v25;
  size_t v26;
  int v27;
  uint32_t *v28;
  int v29;
  uint32_t *v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  size_t v39;
  int v40;
  uint8_t *v41;
  uint32_t *v42;
  int v43;
  int v44;
  int v45;
  void *v46;
  int v47;
  int v48;
  typedef void *_g4_t_v49;
  typedef void *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef void *_g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef char *_g4_t_dest;
  typedef void *_g4_t_desta;
  typedef char *_g4_t_destb;
  typedef void *_g4_t_destc;
  typedef char *_g4_t_destd;
  typedef size_t _g4_t_v70;
  typedef size_t _g4_t_v71;
  typedef vox::FileLimited::Self *_g4_t_v72;
  typedef char *_g4_t_v73;
  typedef uint8_t *_g4_t_v74;
  typedef char *_g4_t_v75;
  typedef char _g4_t_v76[4];
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v49)) > _g4_s0 ? (4u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v50)) > _g4_s1 ? (4u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v51)) > _g4_s2 ? (4u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v52)) > _g4_s3 ? (4u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v53)) > _g4_s4 ? (4u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v54)) > _g4_s5 ? (4u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v55)) > _g4_s6 ? (4u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v56)) > _g4_s7 ? (8u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v57)) > _g4_s8 ? (8u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v58)) > _g4_s9 ? (8u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v59)) > _g4_s10 ? (8u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v60)) > _g4_s11 ? (8u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v61)) > _g4_s12 ? (12u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v62)) > _g4_s13 ? (12u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v63)) > _g4_s14 ? (12u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v64)) > _g4_s15 ? (12u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_dest)) > _g4_s16 ? (16u + sizeof(_g4_t_dest)) : _g4_s16,
    _g4_s18 = (16u + sizeof(_g4_t_desta)) > _g4_s17 ? (16u + sizeof(_g4_t_desta)) : _g4_s17,
    _g4_s19 = (16u + sizeof(_g4_t_destb)) > _g4_s18 ? (16u + sizeof(_g4_t_destb)) : _g4_s18,
    _g4_s20 = (16u + sizeof(_g4_t_destc)) > _g4_s19 ? (16u + sizeof(_g4_t_destc)) : _g4_s19,
    _g4_s21 = (16u + sizeof(_g4_t_destd)) > _g4_s20 ? (16u + sizeof(_g4_t_destd)) : _g4_s20,
    _g4_s22 = (20u + sizeof(_g4_t_v70)) > _g4_s21 ? (20u + sizeof(_g4_t_v70)) : _g4_s21,
    _g4_s23 = (20u + sizeof(_g4_t_v71)) > _g4_s22 ? (20u + sizeof(_g4_t_v71)) : _g4_s22,
    _g4_s24 = (20u + sizeof(_g4_t_v72)) > _g4_s23 ? (20u + sizeof(_g4_t_v72)) : _g4_s23,
    _g4_s25 = (20u + sizeof(_g4_t_v73)) > _g4_s24 ? (20u + sizeof(_g4_t_v73)) : _g4_s24,
    _g4_s26 = (24u + sizeof(_g4_t_v74)) > _g4_s25 ? (24u + sizeof(_g4_t_v74)) : _g4_s25,
    _g4_s27 = (32u + sizeof(_g4_t_v75)) > _g4_s26 ? (32u + sizeof(_g4_t_v75)) : _g4_s26,
    _g4_s28 = (36u + sizeof(_g4_t_v76)) > _g4_s27 ? (36u + sizeof(_g4_t_v76)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v77)) > _g4_s28 ? (40u + sizeof(_g4_t_v77)) : _g4_s28,
    _g4_s30 = (44u + sizeof(_g4_t_v78)) > _g4_s29 ? (44u + sizeof(_g4_t_v78)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 4u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 8u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 12u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 16u);
  _g4_t_desta &desta = *reinterpret_cast<_g4_t_desta *>(_g4_sf + 16u);
  _g4_t_destb &destb = *reinterpret_cast<_g4_t_destb *>(_g4_sf + 16u);
  _g4_t_destc &destc = *reinterpret_cast<_g4_t_destc *>(_g4_sf + 16u);
  _g4_t_destd &destd = *reinterpret_cast<_g4_t_destd *>(_g4_sf + 16u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 20u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 20u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 20u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 20u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 24u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 32u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 36u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 40u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 44u);

  v3 = *(uint32_t **)(a1 + 8);
  if ( v3 != nullptr )
  {
    v4 = (uint32_t *)*v3;
    if ( v3 == (uint32_t *)*v3 )
    {
      src = (uint8_t *)(&unk_20E1FB4);
    }
    else
    {
      do
        v4 = (uint32_t *)*v4;
      while ( v3 != v4 );
      src = *(uint8_t **)(v3[1] + 8);
      if ( src - 12 != (uint8_t *)(void *)g4_empty_string_rep )
      {
        if ( *((int *)src - 1) < 0 )
        {
          v35 = *((uint32_t *)src - 3);
          v36 = *((uint32_t *)src - 2);
          if ( v35 > 0x3FFFFFFC )
            goto LABEL_127;
          if ( v35 > v36 && v35 < 2 * v36 )
            v35 = 2 * v36;
          if ( v35 + 29 > 0x1000 && v36 < v35 )
          {
            v37 = v35 + 4096 - (((uint16_t)v35 + 29) & 0xFFF);
            v35 = 1073741820;
            if ( v37 <= 0x3FFFFFFC )
              v35 = v37;
          }
          v38 = VoxAllocInternal(
                  v35 + 13,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
          *(uint32_t *)(v38 + 4) = v35;
          *(uint32_t *)(v38 + 8) = 0;
          v39 = *((uint32_t *)src - 3);
          v40 = 0;
          v41 = (uint8_t *)(v38 + 12);
          if ( v39 != 0 )
          {
            if ( v39 == 1 )
            {
              *(uint8_t *)(v38 + 12) = *src;
              v40 = *((uint32_t *)src - 3);
            }
            else
            {
              v53 = (void *)v38;
              memcpy((void *)(v38 + 12), src, v39);
              v40 = *((uint32_t *)src - 3);
              v38 = (int)(uintptr_t)(v53);
            }
          }
          if ( (void *)v38 == (void *)g4_empty_string_rep )
          {
            src = v41;
          }
          else
          {
            *(uint32_t *)(v38 + 8) = 0;
            *(uint32_t *)v38 = v40;
            src = v41;
            *(uint8_t *)(v38 + v40 + 12) = 0;
          }
        }
        else
        {
          __sync_add_and_fetch((volatile int32_t *)src - 1, 1u);
        }
      }
    }
  }
  else
  {
    src = (uint8_t *)(&unk_20E1FB4);
  }
  n = strlen(s);
  if ( n != 0 )
  {
    v7 = *((uint32_t *)src - 3);
    if ( n > 1073741820 - v7 )
      sub_1900180("basic_string::append");
    v8 = n + v7;
    v61 = *((uint32_t *)src - 2);
    if ( n + v7 <= v61 && *((int *)src - 1) <= 0 )
      goto LABEL_70;
    if ( s >= (char *)(uintptr_t)(src) )
    {
      dest = (char *)(&src[v7]);
      if ( s <= (char *)(uintptr_t)(&src[v7]) )
      {
        if ( v8 == v61 && *((int *)src - 1) <= 0 )
        {
          v71 = (size_t)src;
          goto LABEL_23;
        }
        if ( v8 >= v7 )
          v7 += n;
        desta = (void *)v7;
        if ( v7 <= 0x3FFFFFFC )
        {
          v9 = v7 + 13;
          if ( v61 < v7 )
          {
            v31 = 2 * v61;
            if ( (unsigned int)(uintptr_t)(desta) >= 2 * v61 )
              v31 = (unsigned int)(uintptr_t)(desta);
            desta = (void *)v31;
            if ( v31 + 29 <= 0x1000 || v61 >= v31 )
            {
              v9 = v31 + 13;
            }
            else
            {
              v32 = v31 + 4096 - (((uint16_t)v31 + 29) & 0xFFF);
              if ( v32 > 0x3FFFFFFC )
                v32 = 1073741820;
              desta = (void *)v32;
              v9 = v32 + 13;
            }
          }
          v56 = v8;
          v10 = VoxAllocInternal(v9, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
          v11 = (uint32_t *)v10;
          v62 = 0;
          *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(desta);
          *(uint32_t *)(v10 + 8) = 0;
          v70 = *((uint32_t *)src - 3);
          v8 = v56;
          destb = (char *)(v10 + 12);
          if ( v70 != 0 )
          {
            if ( v70 == 1 )
            {
              *(uint8_t *)(v10 + 12) = *src;
              v62 = *((uint32_t *)src - 3);
            }
            else
            {
              v52 = (uint32_t *)v10;
              memcpy(destb, src, v70);
              v8 = v56;
              v62 = *((uint32_t *)src - 3);
              v11 = v52;
            }
          }
          if ( v11 != (uint32_t *)(void *)g4_empty_string_rep )
          {
            v11[2] = 0;
            *v11 = v62;
            *((uint8_t *)v11 + v62 + 12) = 0;
          }
          v71 = (size_t)destb;
          if ( src - 12 != (uint8_t *)(void *)g4_empty_string_rep
            && __sync_fetch_and_add((volatile int32_t *)src - 1, 0xFFFFFFFF) <= 0 )
          {
            v54 = v11;
            v59 = v8;
            VoxFreeInternal(src - 12);
            v8 = v59;
            v11 = v54;
          }
          dest = &destb[*v11];
LABEL_23:
          s = (char *)(v71 + s - (char *)(src));
          src = (uint8_t *)v71;
          if ( n == 1 )
          {
LABEL_24:
            *dest = *s;
            goto LABEL_65;
          }
LABEL_64:
          v58 = v8;
          memcpy(dest, s, n);
          v8 = v58;
LABEL_65:
          v74 = src - 12;
          if ( src - 12 != (uint8_t *)(void *)g4_empty_string_rep )
          {
            *((uint32_t *)src - 1) = 0;
            *((uint32_t *)src - 3) = v8;
            src[v8] = 0;
          }
          goto LABEL_26;
        }
LABEL_127:
        sub_1900180("basic_string::_S_create");
      }
    }
    if ( v8 == v61 && *((int *)src - 1) <= 0 )
    {
LABEL_70:
      dest = (char *)(&src[v7]);
    }
    else
    {
      if ( v8 >= v7 )
        v7 += n;
      destc = (void *)v7;
      if ( v7 > 0x3FFFFFFC )
        goto LABEL_127;
      v26 = v7 + 13;
      if ( v7 > v61 )
      {
        v33 = 2 * v61;
        if ( (unsigned int)(uintptr_t)(destc) >= 2 * v61 )
          v33 = (unsigned int)(uintptr_t)(destc);
        destc = (void *)v33;
        if ( v33 + 29 <= 0x1000 || v33 <= v61 )
        {
          v26 = v33 + 13;
        }
        else
        {
          v34 = v33 + 4096 - (((uint16_t)v33 + 29) & 0xFFF);
          if ( v34 > 0x3FFFFFFC )
            v34 = 1073741820;
          destc = (void *)v34;
          v26 = v34 + 13;
        }
      }
      v57 = v8;
      v27 = VoxAllocInternal(v26, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      v28 = (uint32_t *)v27;
      v64 = 0;
      *(uint32_t *)(v27 + 4) = (uint32_t)(uintptr_t)(destc);
      *(uint32_t *)(v27 + 8) = 0;
      destd = *((char **)src - 3);
      v8 = v57;
      v73 = (char *)(v27 + 12);
      if ( destd != nullptr )
      {
        if ( destd == (char *)(uintptr_t)(uint8_t *)&dword_0 + 1 )
        {
          *(uint8_t *)(v27 + 12) = *src;
          v64 = *((uint32_t *)src - 3);
        }
        else
        {
          v51 = (uint32_t *)v27;
          memcpy(v73, src, (size_t)destd);
          v8 = v57;
          v64 = *((uint32_t *)src - 3);
          v28 = v51;
        }
      }
      if ( v28 != (uint32_t *)(void *)g4_empty_string_rep )
      {
        v28[2] = 0;
        *v28 = v64;
        *((uint8_t *)v28 + v64 + 12) = 0;
      }
      if ( src - 12 != (uint8_t *)(void *)g4_empty_string_rep
        && __sync_fetch_and_add((volatile int32_t *)src - 1, 0xFFFFFFFF) <= 0 )
      {
        v55 = v28;
        v60 = v8;
        VoxFreeInternal(src - 12);
        v8 = v60;
        v28 = v55;
      }
      dest = &v73[*v28];
      src = (uint8_t *)(v73);
    }
    if ( n == 1 )
      goto LABEL_24;
    goto LABEL_64;
  }
  v74 = src - 12;
LABEL_26:
  v12 = *(uint32_t *)(a1 + 8);
  v72 = nullptr;
  v13 = *(uint32_t **)(v12 + 8);
  v14 = *(uint32_t *)(v12 + 12);
  if ( (unsigned int)(v14 - (uint32_t)(uintptr_t)(v13)) >> 2 == 0 || *(uint8_t *)(a1 + 4) == 0 )
    goto LABEL_27;
  v20 = 0;
  v63 = v13;
  if ( *v13 == 0 )
    goto LABEL_52;
LABEL_32:
  vox::FileArchive::FileRange::FileRange((vox::FileArchive::FileRange::Self *)v76);
  if ( (*(uint8_t (**)(uint32_t, uint8_t *, char **, char *))(**(uint32_t **)(*(uint32_t *)(*(uint32_t *)(a1 + 8)
                                                                                                  + 8)
                                                                                      + 4 * v20)
                                                                        + 12))(
         *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 8) + 4 * v20),
         src,
         &v75,
         v76) != 0 )
  {
    v24 = G4_MEM_CALL((uintptr_t)((*(uintptr_t *)unk_20E2070)), v75, a3);
    v16 = v24;
    if ( v24 != 0 )
    {
      v50 = (void *)v24;
      if ( v76[0] != 0 )
      {
        v72 = (vox::FileLimited::Self *)VoxAllocInternal(
                                    0x14u,
                                    0,
                                    (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_filesystem.cpp"),
                                    (int)(uintptr_t)("_OpenFile"),
                                    203);
        vox::FileLimited::Construct(v72, v50, src, v77, v78);
      }
      else
      {
        v72 = (vox::FileLimited::Self *)VoxAllocInternal(
                                    8u,
                                    0,
                                    (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_filesystem.cpp"),
                                    (int)(uintptr_t)("_OpenFile"),
                                    205);
        vox::FileInterface::Construct(v72, v50, src);
      }
      v25 = *(uint32_t *)(a1 + 8);
      v16 = (int)(uintptr_t)(v50);
      v63 = *(uint32_t **)(v25 + 8);
      v14 = *(uint32_t *)(v25 + 12);
    }
    else
    {
      v29 = *(uint32_t *)(a1 + 8);
      v30 = *(uint32_t **)(v29 + 8);
      v14 = *(uint32_t *)(v29 + 12);
      v63 = v30;
    }
  }
  else
  {
    v21 = *(uint32_t *)(a1 + 8);
    v22 = *(uint32_t **)(v21 + 8);
    v14 = *(uint32_t *)(v21 + 12);
    v63 = v22;
    v16 = 0;
  }
  while ( 1 )
  {
    ++v20;
    v19 = (v14 - (int)(uintptr_t)(v63)) >> 2;
    if ( v20 >= v19 )
      break;
    if ( v16 != 0 )
      goto LABEL_36;
    if ( v63[v20] != 0 )
      goto LABEL_32;
LABEL_52:
    v16 = 0;
  }
  if ( v16 == 0 )
  {
LABEL_27:
    v15 = G4_MEM_CALL((uintptr_t)((*(uintptr_t *)unk_20E2070)), src, a3);
    v16 = v15;
    if ( v15 != 0 )
    {
      v49 = (void *)v15;
      v72 = (vox::FileLimited::Self *)VoxAllocInternal(
                                  8u,
                                  0,
                                  (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_filesystem.cpp"),
                                  (int)(uintptr_t)("_OpenFile"),
                                  221);
      vox::FileInterface::Construct(v72, v49, src);
      v17 = *(uint32_t *)(a1 + 8);
      v16 = (int)(uintptr_t)(v49);
    }
    else
    {
      v17 = *(uint32_t *)(a1 + 8);
    }
    v18 = *(uint32_t **)(v17 + 8);
    v14 = *(uint32_t *)(v17 + 12);
    v63 = v18;
    v19 = (v14 - (int)(uintptr_t)(v18)) >> 2;
  }
LABEL_36:
  if ( v19 != 0 && *(uint8_t *)(a1 + 4) == 0 && v16 == 0 )
  {
    v42 = v63;
    v43 = 0;
    v44 = v14;
    if ( *v63 == 0 )
      goto LABEL_112;
LABEL_101:
    vox::FileArchive::FileRange::FileRange((vox::FileArchive::FileRange::Self *)v76);
    if ( (*(uint8_t (**)(uint32_t, uint8_t *, char **, char *))(**(uint32_t **)(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 8)
                                                                                        + 4 * v43)
                                                                          + 12))(
           *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 8) + 8) + 4 * v43),
           src,
           &v75,
           v76) != 0 )
    {
      v46 = (void *)G4_MEM_CALL((uintptr_t)((*(uintptr_t *)unk_20E2070)), v75, a3);
      if ( v46 != nullptr )
      {
        if ( v76[0] != 0 )
        {
          v72 = (vox::FileLimited::Self *)VoxAllocInternal(
                                      0x14u,
                                      0,
                                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_filesystem.cpp"),
                                      (int)(uintptr_t)("_OpenFile"),
                                      243);
          vox::FileLimited::Construct(v72, v46, src, v77, v78);
          v47 = *(uint32_t *)(a1 + 8);
          v42 = *(uint32_t **)(v47 + 8);
          v44 = *(uint32_t *)(v47 + 12);
          goto LABEL_103;
        }
        v72 = (vox::FileLimited::Self *)VoxAllocInternal(
                                    8u,
                                    0,
                                    (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_filesystem.cpp"),
                                    (int)(uintptr_t)("_OpenFile"),
                                    245);
        vox::FileInterface::Construct(v72, v46, v75);
      }
      v48 = *(uint32_t *)(a1 + 8);
      v42 = *(uint32_t **)(v48 + 8);
      v44 = *(uint32_t *)(v48 + 12);
      goto LABEL_103;
    }
    v45 = *(uint32_t *)(a1 + 8);
    v46 = nullptr;
    v42 = *(uint32_t **)(v45 + 8);
    v44 = *(uint32_t *)(v45 + 12);
LABEL_103:
    while ( ++v43 < (unsigned int)((v44 - (int)(uintptr_t)(v42)) >> 2) && v46 == nullptr )
    {
      if ( v42[v43] != 0 )
        goto LABEL_101;
LABEL_112:
      v46 = nullptr;
    }
    v16 = (int)(uintptr_t)(v46);
  }
  if ( v16 != 0 && v72 == nullptr )
  {
    G4_MEM_CALL((uintptr_t)((*(uintptr_t *)unk_20E2074)), v16);
    v72 = nullptr;
  }
  if ( v74 != (uint8_t *)(void *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)src - 1, 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal(v74);
  }
  return v72;
}


