#include "Core/Utils/DecompTypes.h"
#include "vox_CZipReader.h"

// ----------------------------------------------------------------------------
// Function: vox::CZipReader::getFileCount  (binary VA: 0x10117c0)
// Original: vox::CZipReader::getFileCount
// ----------------------------------------------------------------------------
int vox::CZipReader::getFileCount(vox::CZipReader::Self *self)
{
  return *((uint32_t *)self + 13);
}

// ----------------------------------------------------------------------------
// Function: vox::CZipReader::getZipFileName  (binary VA: 0x10117d0)
// Original: vox::CZipReader::getZipFileName
// ----------------------------------------------------------------------------
int vox::CZipReader::getZipFileName(vox::CZipReader::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: vox::CZipReader::getArchiveLabelName  (binary VA: 0x10117e0)
// Original: vox::CZipReader::getArchiveLabelName
// ----------------------------------------------------------------------------
int vox::CZipReader::getArchiveLabelName(vox::CZipReader::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: vox::CZipReader::extractFilename  (binary VA: 0x1012c30)
// Original: vox::CZipReader::extractFilename
// ----------------------------------------------------------------------------
void vox::CZipReader::extractFilename(int a1, int a2)
{
  const char *v2;
  const char *v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  void *v10;
  char *v11;
  char v12;
  size_t v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  const char *s;
  unsigned int n;
  char *v19;
  int *v20;
  int v21;
  int v22;
  const char *v23;
  const char *v24;
  const char *v25;
  const char *v26;
  unsigned int v27;
  int v28;
  int v29;
  char *v30;
  const void *src;
  size_t v32;
  char *v33;
  int v34;
  const char *v35;
  uint32_t *v36;
  uint32_t *v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  int v43;
  char *v44;
  const char *v45;
  const char *v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  size_t v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  int v55;
  size_t v56;
  size_t v57;
  size_t v58;
  size_t v59;
  size_t v60;
  size_t v61;
  size_t v62;
  const char *v63;
  size_t v64;
  size_t v65;
  char v66;
  size_t v67;
  size_t v68;
  size_t v69;
  size_t v70;
  size_t v71;
  size_t v72;
  char v73;
  size_t v74;
  size_t v75;
  char v76;
  size_t *v77;
  size_t v78;
  size_t v79;
  void *v80;
  uint32_t *dest;
  uint8_t *desta;
  char *destb;
  int16_t destc;
  char *destd;
  unsigned int deste;
  uint8_t *destf;
  void *v88;
  uint8_t *v89;
  unsigned int v90;
  size_t v91;
  void *v92;
  uint32_t *v93;
  uint32_t *v94;

  v88 = (void *)*(int16_t *)(a2 + 44);
  if ( *(uint16_t *)(a2 + 44) == 0 )
    return;
  v2 = *(const char **)a2;
  if ( *(uint8_t *)(a1 + 28) != 0 && *((uint32_t *)v2 - 3) != 0 )
  {
    v3 = *(const char **)a2;
    v4 = 0;
    v90 = *((uint32_t *)v2 - 3);
    while ( 1 )
    {
      v5 = *((uint32_t *)v2 - 1);
      if ( v5 >= 0
        && v2 - 12 != (const char *)g4_empty_string_rep )
      {
        if ( v5 != 0 )
        {
          v6 = *((uint32_t *)v2 - 2);
          if ( v90 > 0x3FFFFFFC )
            goto LABEL_156;
          v7 = v90;
          if ( v90 > v6 )
          {
            v7 = 2 * v6;
            if ( v90 >= 2 * v6 )
              v7 = v90;
          }
          if ( v7 + 29 > 0x1000 && v6 < v7 )
          {
            v8 = v7 + 4096 - (((uint16_t)v7 + 29) & 0xFFF);
            v7 = 1073741820;
            if ( v8 <= 0x3FFFFFFC )
              v7 = v8;
          }
          v57 = v7;
          v9 = VoxAllocInternal(
                 v7 + 13,
                 0,
                 (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                 (int)(uintptr_t)("internal_new"),
                 181);
          *(uint32_t *)(v9 + 4) = v57;
          *(uint32_t *)(v9 + 8) = 0;
          v10 = (void *)(v9 + 12);
          if ( v90 != 0 )
          {
            v45 = *(const char **)a2;
            if ( v90 == 1 )
            {
              *(uint8_t *)(v9 + 12) = *v45;
            }
            else
            {
              v69 = v9;
              memcpy(v10, v45, v90);
              v9 = v69;
            }
          }
          dest = (uint32_t *)(*(uint32_t *)a2 - 12);
          if ( dest != (uint32_t *)(g4_empty_string_rep)
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)a2 - 4), 0xFFFFFFFF) <= 0 )
          {
            v74 = v9;
            VoxFreeInternal(dest);
            v9 = v74;
          }
          v3 = (const char *)v10;
          *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v10);
          if ( (uint32_t *)v9 != (uint32_t *)(g4_empty_string_rep) )
          {
            *(uint32_t *)(v9 + 8) = 0;
            *(uint32_t *)v9 = v90;
            *(uint8_t *)(v9 + v90 + 12) = 0;
            v3 = *(const char **)a2;
          }
        }
        *((uint32_t *)v3 - 1) = -1;
        v3 = *(const char **)a2;
      }
      v11 = (char *)&v3[v4];
      v12 = v3[v4];
      if ( *((int *)v3 - 1) >= 0
        && v3 - 12 != (const char *)g4_empty_string_rep )
      {
        if ( *((uint32_t *)v3 - 1) != 0 )
        {
          v13 = *((uint32_t *)v3 - 3);
          v91 = *((uint32_t *)v3 - 2);
          if ( v13 > 0x3FFFFFFC )
            goto LABEL_156;
          v14 = *((uint32_t *)v3 - 3);
          if ( v13 > v91 )
          {
            v14 = 2 * v91;
            if ( 2 * v91 < v13 )
              v14 = v13;
          }
          if ( v14 + 29 > 0x1000 && v91 < v14 )
          {
            v15 = v14 + 4096 - (((uint16_t)v14 + 29) & 0xFFF);
            v14 = 1073741820;
            if ( v15 <= 0x3FFFFFFC )
              v14 = v15;
          }
          v58 = v14;
          v66 = v12;
          v16 = VoxAllocInternal(
                  v14 + 13,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
          *(uint32_t *)(v16 + 4) = v58;
          *(uint32_t *)(v16 + 8) = 0;
          desta = (uint8_t *)v16;
          v92 = (void *)(v16 + 12);
          v12 = v66;
          if ( v13 != 0 )
          {
            v46 = *(const char **)a2;
            if ( v13 == 1 )
            {
              desta[12] = *v46;
            }
            else
            {
              memcpy(v92, v46, v13);
              v12 = v66;
            }
          }
          v94 = (uint32_t *)(*(uint32_t *)a2 - 12);
          if ( v94 != (uint32_t *)(g4_empty_string_rep)
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)a2 - 4), 0xFFFFFFFF) <= 0 )
          {
            v73 = v12;
            VoxFreeInternal(v94);
            v12 = v73;
          }
          v3 = (const char *)v92;
          *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v92);
          if ( desta != (uint8_t *)g4_empty_string_rep )
          {
            *((uint32_t *)desta + 2) = 0;
            *(uint32_t *)desta = v13;
            desta[v13 + 12] = 0;
            v3 = *(const char **)a2;
          }
        }
        *((uint32_t *)v3 - 1) = -1;
        v11 = (char *)(v4 + *(uint32_t *)a2);
      }
      if ( (uint8_t)(v12 - 65) <= 0x19u )
        v12 += 32;
      ++v4;
      *v11 = v12;
      v2 = *(const char **)a2;
      v90 = *(uint32_t *)(*(uint32_t *)a2 - 12);
      if ( v4 >= v90 )
        break;
      v3 = *(const char **)a2;
    }
  }
  s = (char *)v88 + (uint32_t)(uintptr_t)(v2);
  if ( *((uint8_t *)v88 + (uint32_t)(uintptr_t)(v2)) == 47 )
  {
LABEL_40:
    v76 = 0;
    if ( v2 != s )
    {
      ++s;
      v76 = 1;
    }
  }
  else
  {
    while ( s != v2 )
    {
      if ( *--s == 47 )
        goto LABEL_40;
    }
    v76 = 0;
  }
  n = strlen(s);
  v19 = *(char **)(a2 + 4);
  if ( n > 0x3FFFFFFC )
    sub_1900180("basic_string::assign");
  if ( s >= v19 && s <= &v19[*((uint32_t *)v19 - 3)] && *((int *)v19 - 1) <= 0 )
  {
    if ( n <= s - v19 )
    {
      if ( n != 1 )
      {
        v62 = n;
        memcpy(v19, s, n);
        v19 = *(char **)(a2 + 4);
        n = v62;
        goto LABEL_51;
      }
    }
    else
    {
      if ( s == v19 )
        goto LABEL_51;
      if ( n != 1 )
      {
        v59 = n;
        memmove(v19, s, n);
        v19 = *(char **)(a2 + 4);
        n = v59;
        goto LABEL_51;
      }
    }
    *v19 = *s;
    v19 = *(char **)(a2 + 4);
LABEL_51:
    if ( v19 - 12 != (char *)g4_empty_string_rep )
    {
      *((uint32_t *)v19 - 1) = 0;
      *((uint32_t *)v19 - 3) = n;
      v19[n] = 0;
    }
    goto LABEL_53;
  }
  v38 = *((uint32_t *)v19 - 2);
  if ( n > v38 )
  {
    v39 = 2 * v38;
    if ( n >= 2 * v38 )
      v39 = n;
    goto LABEL_88;
  }
  v39 = n;
  if ( *((int *)v19 - 1) > 0 )
  {
LABEL_88:
    destc = v39 + 29;
    if ( v39 + 29 > 0x1000 && v38 < v39 )
    {
      v40 = v39 + 4096;
      v39 = 1073741820;
      v41 = v40 - (destc & 0xFFF);
      if ( v41 <= 0x3FFFFFFC )
        v39 = v41;
    }
    v61 = n;
    v42 = VoxAllocInternal(v39 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v42 + 4) = v39;
    *(uint32_t *)(v42 + 8) = 0;
    destd = (char *)v42;
    v43 = *(uint32_t *)(a2 + 4);
    n = v61;
    if ( (uint32_t *)(v43 - 12) != (uint32_t *)(g4_empty_string_rep)
      && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
    {
      VoxFreeInternal((void *)(v43 - 12));
      n = v61;
    }
    v19 = destd + 12;
    *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(destd + 12);
  }
  if ( v19 - 12 != (char *)g4_empty_string_rep )
  {
    *((uint32_t *)v19 - 1) = 0;
    *((uint32_t *)v19 - 3) = n;
    v19[n] = 0;
  }
  if ( n != 0 )
  {
    v44 = *(char **)(a2 + 4);
    if ( n == 1 )
      *v44 = *s;
    else
      memcpy(v44, s, n);
  }
LABEL_53:
  v20 = *(int **)(a2 + 8);
  if ( *(v20 - 1) > 0 )
  {
    v21 = VoxAllocInternal(0xDu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v21 + 4) = 0;
    *(uint32_t *)(v21 + 8) = 0;
    v22 = *(uint32_t *)(a2 + 8);
    if ( (uint32_t *)(v22 - 12) != (uint32_t *)(g4_empty_string_rep)
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      v75 = v21;
      VoxFreeInternal((void *)(v22 - 12));
      v21 = v75;
    }
    v20 = (int *)(v21 + 12);
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(v20);
  }
  if ( v20 - 3 != (int *)(g4_empty_string_rep) )
  {
    *(v20 - 1) = 0;
    *(v20 - 3) = 0;
    *(uint8_t *)v20 = 0;
  }
  if ( v76 == 0 )
    goto LABEL_78;
  v23 = *(const char **)a2;
  v24 = &s[-*(uint32_t *)a2];
  v25 = *(const char **)(*(uint32_t *)a2 - 12);
  if ( v24 <= v25 )
    v25 = v24;
  v26 = &v25[(uint32_t)(uintptr_t)(v23)];
  if ( v23 != v26 )
  {
    v27 = v26 - v23;
    if ( v27 > 0x3FFFFFFC )
      goto LABEL_156;
    if ( v27 + 29 > 0x1000 && v27 != 0 )
    {
      v28 = 1073741820;
      v60 = *(uint32_t *)a2;
      v67 = v27;
      if ( v27 + 4096 - (((uint16_t)v27 + 29) & 0xFFF) <= 0x3FFFFFFC )
        v28 = v27 + 4096 - (((uint16_t)v27 + 29) & 0xFFF);
      v29 = VoxAllocInternal(v28 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v29 + 4) = v28;
      *(uint32_t *)(v29 + 8) = 0;
      v77 = (size_t *)v29;
      v30 = (char *)(v29 + 12);
      src = (const void *)v60;
      v32 = v67;
    }
    else
    {
      v63 = *(const char **)a2;
      v70 = v27;
      v47 = VoxAllocInternal(v27 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      v32 = v70;
      v30 = (char *)(v47 + 12);
      *(uint32_t *)(v47 + 4) = v70;
      *(uint32_t *)(v47 + 8) = 0;
      v77 = (size_t *)v47;
      src = v63;
      if ( v70 == 1 )
      {
        *(uint8_t *)(v47 + 12) = *v63;
LABEL_69:
        if ( v77 != (size_t *)(g4_empty_string_rep) )
        {
          v77[2] = 0;
          *v77 = v32;
          v30[v32] = 0;
        }
        goto LABEL_71;
      }
    }
    v68 = v32;
    memcpy(v30, src, v32);
    v32 = v68;
    goto LABEL_69;
  }
  v30 = (char *)(byte_20E1FB4);
LABEL_71:
  v78 = *(uint32_t *)(a2 + 8);
  v33 = v30 - 12;
  v93 = (uint32_t *)(v78 - 12);
  if ( v30 - 12 != (char *)(v78 - 12) )
  {
    if ( *((int *)v30 - 1) < 0 )
    {
      v48 = *((uint32_t *)v30 - 3);
      deste = *((uint32_t *)v30 - 2);
      if ( v48 > 0x3FFFFFFC )
        goto LABEL_156;
      if ( v48 > deste && v48 < 2 * deste )
        v48 = 2 * deste;
      if ( v48 + 29 > 0x1000 && deste < v48 )
      {
        v49 = v48 + 4096 - (((uint16_t)v48 + 29) & 0xFFF);
        v48 = 1073741820;
        if ( v49 <= 0x3FFFFFFC )
          v48 = v49;
      }
      v71 = v48;
      v50 = VoxAllocInternal(v48 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v50 + 8) = 0;
      *(uint32_t *)(v50 + 4) = v71;
      v51 = *((uint32_t *)v30 - 3);
      v79 = v50;
      v89 = nullptr;
      destb = (char *)(v50 + 12);
      v33 = v30 - 12;
      if ( v51 != 0 )
      {
        if ( v51 == 1 )
        {
          *(uint8_t *)(v50 + 12) = *v30;
        }
        else
        {
          memcpy(destb, v30, v51);
          v33 = v30 - 12;
        }
        v89 = *((uint8_t **)v30 - 3);
      }
      if ( (uint32_t *)v79 != (uint32_t *)(g4_empty_string_rep) )
      {
        *(uint32_t *)(v79 + 8) = 0;
        *(uint32_t *)v79 = (uint32_t)(uintptr_t)(v89);
        v89[v79 + 12] = 0;
      }
      v78 = *(uint32_t *)(a2 + 8);
      v93 = (uint32_t *)(v78 - 12);
    }
    else if ( v33 == (char *)g4_empty_string_rep )
    {
      destb = v30;
    }
    else
    {
      __sync_add_and_fetch((volatile int32_t *)v30 - 1, 1u);
      destb = v30;
      v78 = *(uint32_t *)(a2 + 8);
      v93 = (uint32_t *)(v78 - 12);
    }
    if ( v93 != (uint32_t *)(g4_empty_string_rep)
      && __sync_fetch_and_add((volatile int32_t *)(v78 - 4), 0xFFFFFFFF) <= 0 )
    {
      v65 = (size_t)v33;
      VoxFreeInternal(v93);
      v33 = (char *)v65;
    }
    *(uint32_t *)(a2 + 8) = (uint32_t)(uintptr_t)(destb);
  }
  if ( v33 != (char *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)v30 - 1, 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal(v33);
  }
LABEL_78:
  if ( *(uint8_t *)(a1 + 29) != 0 )
    return;
  v34 = *(uint32_t *)(a2 + 4);
  v35 = *(const char **)a2;
  v36 = (uint32_t *)(v34 - 12);
  v37 = (uint32_t *)(*(uint32_t *)a2 - 12);
  if ( v37 == (uint32_t *)(v34 - 12) )
    return;
  if ( *((int *)v35 - 1) < 0 )
  {
    v52 = *((uint32_t *)v35 - 3);
    v53 = *((uint32_t *)v35 - 2);
    if ( v52 <= 0x3FFFFFFC )
    {
      if ( v52 > v53 && v52 < 2 * v53 )
        v52 = 2 * v53;
      if ( v52 + 29 > 0x1000 && v53 < v52 )
      {
        v54 = v52 + 4096 - (((uint16_t)v52 + 29) & 0xFFF);
        v52 = 1073741820;
        if ( v54 <= 0x3FFFFFFC )
          v52 = v54;
      }
      v64 = v52;
      v55 = VoxAllocInternal(v52 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v55 + 4) = v64;
      *(uint32_t *)(v55 + 8) = 0;
      v56 = *((uint32_t *)v35 - 3);
      destf = nullptr;
      v80 = (void *)(v55 + 12);
      if ( v56 != 0 )
      {
        if ( v56 == 1 )
        {
          *(uint8_t *)(v55 + 12) = *v35;
        }
        else
        {
          v72 = v55;
          memcpy(v80, v35, v56);
          v55 = v72;
        }
        destf = *((uint8_t **)v35 - 3);
      }
      if ( (uint32_t *)v55 != (uint32_t *)(g4_empty_string_rep) )
      {
        *(uint32_t *)(v55 + 8) = 0;
        *(uint32_t *)v55 = (uint32_t)(uintptr_t)(destf);
        destf[v55 + 12] = 0;
      }
      v34 = *(uint32_t *)(a2 + 4);
      v35 = (const char *)v80;
      v36 = (uint32_t *)(v34 - 12);
      goto LABEL_83;
    }
LABEL_156:
    sub_1900180("basic_string::_S_create");
  }
  if ( v37 != (uint32_t *)(g4_empty_string_rep) )
  {
    __sync_add_and_fetch((volatile int32_t *)v35 - 1, 1u);
    v34 = *(uint32_t *)(a2 + 4);
    v36 = (uint32_t *)(v34 - 12);
  }
LABEL_83:
  if ( v36 != (uint32_t *)(g4_empty_string_rep)
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal(v36);
  }
  *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(v35);
}

// ----------------------------------------------------------------------------
// Function: vox::CZipReader::deletePathFromFilename  (binary VA: 0x10137e0)
// Original: vox::CZipReader::deletePathFromFilename
// ----------------------------------------------------------------------------
uint8_t * vox::CZipReader::deletePathFromFilename(vox::CZipReader::Self *self, uint8_t **a2)
{
  uint8_t *v2;
  uint8_t *v3;
  uint8_t *v4;
  uint8_t *result;
  unsigned int n;
  const void *src;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  uint8_t *v12;
  size_t v13;
  size_t v14;
  size_t v15;
  int v16;
  uint8_t *v17;

  v2 = *a2;
  v3 = &(*a2)[*((uint32_t *)*a2 - 3)];
  v4 = v3;
  result = (uint8_t *)*v3;
  if ( (uint8_t)(uintptr_t)(result) != 47 && (uint8_t)(uintptr_t)(result) != 92 )
  {
    if ( v3 == v2 )
      return result;
    while ( 1 )
    {
      result = (uint8_t *)*--v4;
      if ( (uint8_t)(uintptr_t)(result) == 92 || (uint8_t)(uintptr_t)(result) == 47 )
        break;
      if ( v4 == v2 )
        return result;
    }
  }
  if ( v4 == v2 )
    return result;
  v12 = v4 + 1;
  n = strlen((const char *)v4 + 1);
  src = v4 + 1;
  if ( n > 0x3FFFFFFC )
    sub_1900180("basic_string::assign");
  if ( v12 >= v2 && v3 >= v12 && *((int *)v2 - 1) <= 0 )
  {
    if ( n <= v12 - v2 )
    {
      if ( n != 1 )
      {
        v15 = n;
        memcpy(v2, v12, n);
        n = v15;
        v2 = *a2;
        goto LABEL_31;
      }
    }
    else
    {
      if ( v12 == v2 )
        goto LABEL_31;
      if ( n != 1 )
      {
        v14 = n;
        memmove(v2, v12, n);
        n = v14;
        v2 = *a2;
        goto LABEL_31;
      }
    }
    *v2 = v4[1];
    v2 = *a2;
LABEL_31:
    result = v2 - 12;
    if ( v2 - 12 != (uint8_t *)g4_empty_string_rep )
    {
      *((uint32_t *)v2 - 1) = 0;
      *((uint32_t *)v2 - 3) = n;
      v2[n] = 0;
    }
    return result;
  }
  v8 = *((uint32_t *)v2 - 2);
  if ( n > v8 )
  {
    v9 = 2 * v8;
    if ( n >= 2 * v8 )
      v9 = n;
    goto LABEL_7;
  }
  v9 = n;
  if ( *((int *)v2 - 1) > 0 )
  {
LABEL_7:
    if ( v9 + 29 > 0x1000 && v8 < v9 )
    {
      v10 = v9 + 4096 - (((uint16_t)v9 + 29) & 0xFFF);
      v9 = 1073741820;
      if ( v10 <= 0x3FFFFFFC )
        v9 = v10;
    }
    v13 = n;
    v11 = VoxAllocInternal(v9 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v11 + 4) = v9;
    *(uint32_t *)(v11 + 8) = 0;
    v16 = v11;
    src = v4 + 1;
    n = v13;
    v17 = *a2 - 12;
    if ( v17 != (uint8_t *)g4_empty_string_rep
      && __sync_fetch_and_add((volatile int32_t *)*a2 - 1, 0xFFFFFFFF) <= 0 )
    {
      VoxFreeInternal(v17);
      n = v13;
      src = v4 + 1;
    }
    v2 = (uint8_t *)(v16 + 12);
    *a2 = (uint8_t *)(v16 + 12);
  }
  result = v2 - 12;
  if ( v2 - 12 != (uint8_t *)g4_empty_string_rep )
  {
    *((uint32_t *)v2 - 1) = 0;
    *((uint32_t *)v2 - 3) = n;
    v2[n] = 0;
  }
  if ( n != 0 )
  {
    result = *a2;
    if ( n == 1 )
      *result = v4[1];
    else
      return (uint8_t *)memcpy(result, src, n);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::CZipReader::getFileInfo  (binary VA: 0x1014770)
// Original: vox::CZipReader::getFileInfo
// ----------------------------------------------------------------------------
int vox::CZipReader::getFileInfo(vox::CZipReader::Self *self, char *s, int *a3, int *a4)
{
  size_t v4;
  size_t v5;
  int v6;
  int v7;
  int v8;
  char *v9;
  uint8_t *v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  int v18;
  size_t v19;
  uint8_t *v20;
  int v21;
  uint8_t *v22;
  uint8_t v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  size_t v28;
  uint8_t *v29;
  int v30;
  char *v31;
  size_t v32;
  size_t v33;
  size_t v34;
  int v35;
  int v36;
  int v37;
  size_t v38;
  size_t v39;
  int v40;
  int v41;
  int v42;
  typedef int64_t _g4_t_v44 __attribute__((aligned(1)));
  typedef uint8_t *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef size_t _g4_t_v47;
  typedef size_t _g4_t_v48;
  typedef size_t _g4_t_v49;
  typedef uint8_t _g4_t_v50;
  typedef size_t _g4_t_v51;
  typedef size_t _g4_t_v52;
  typedef uint8_t _g4_t_v53;
  typedef int _g4_t_v54;
  typedef char *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef size_t _g4_t_v57;
  typedef uint8_t _g4_t_v58;
  typedef int _g4_t_v59;
  typedef size_t _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef uint8_t *_g4_t_v62;
  typedef size_t _g4_t_v63;
  typedef char *_g4_t_v64;
  typedef uint8_t *_g4_t_v65;
  typedef size_t *_g4_t_v66;
  typedef uint8_t *_g4_t_v67;
  typedef uint8_t *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v44)) > _g4_s0 ? (12u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v45)) > _g4_s1 ? (60u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v46)) > _g4_s2 ? (64u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v47)) > _g4_s3 ? (64u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v48)) > _g4_s4 ? (64u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v49)) > _g4_s5 ? (64u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v50)) > _g4_s6 ? (64u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v51)) > _g4_s7 ? (64u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v52)) > _g4_s8 ? (64u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v53)) > _g4_s9 ? (64u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v54)) > _g4_s10 ? (68u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v55)) > _g4_s11 ? (68u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v56)) > _g4_s12 ? (68u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v57)) > _g4_s13 ? (68u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v58)) > _g4_s14 ? (68u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v59)) > _g4_s15 ? (68u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v60)) > _g4_s16 ? (68u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v61)) > _g4_s17 ? (76u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v62)) > _g4_s18 ? (76u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v63)) > _g4_s19 ? (76u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v64)) > _g4_s20 ? (80u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v65)) > _g4_s21 ? (88u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v66)) > _g4_s22 ? (88u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v67)) > _g4_s23 ? (88u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v68)) > _g4_s24 ? (92u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v69)) > _g4_s25 ? (96u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v70)) > _g4_s26 ? (100u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v71)) > _g4_s27 ? (104u + sizeof(_g4_t_v71)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 60u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 64u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 68u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 68u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 68u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 68u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 76u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 76u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 76u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 80u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 88u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 88u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 88u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 92u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 96u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 100u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 104u);

  if ( s == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v4 = strlen(s);
  if ( s == &s[v4] )
  {
    v9 = (char *)(byte_20E1FB4);
    goto LABEL_12;
  }
  v5 = v4;
  if ( v4 > 0x3FFFFFFC )
LABEL_86:
    sub_1900180("basic_string::_S_create");
  if ( v4 + 29 > 0x1000 && v4 != 0 )
  {
    v6 = ((uint16_t)v4 + 29) & 0xFFF;
    v7 = 1073741820;
    if ( v4 + 4096 - v6 <= 0x3FFFFFFC )
      v7 = v4 + 4096 - v6;
    v54 = v7;
    v8 = VoxAllocInternal(v7 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v8 + 4) = v54;
    *(uint32_t *)(v8 + 8) = 0;
    v9 = (char *)(v8 + 12);
    goto LABEL_9;
  }
  v8 = VoxAllocInternal(v4 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  *(uint32_t *)(v8 + 4) = v5;
  *(uint32_t *)(v8 + 8) = 0;
  v9 = (char *)(v8 + 12);
  if ( v5 != 1 )
  {
LABEL_9:
    v46 = v8;
    v55 = v9;
    memcpy(v9, s, v5);
    v9 = v55;
    v8 = v46;
    goto LABEL_10;
  }
  *(uint8_t *)(v8 + 12) = *s;
LABEL_10:
  if ( (uint32_t *)v8 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
  {
    *(uint32_t *)(v8 + 8) = 0;
    *(uint32_t *)v8 = v5;
    v9[v5] = 0;
  }
LABEL_12:
  v68 = (uint8_t *)v9;
  vox::FileArchive::FileRange::FileRange((vox::FileArchive::FileRange::Self *)&v69);
  if ( *((uint8_t *)self + 29) != 0 )
    vox::CZipReader::deletePathFromFilename(self, &v68);
  v10 = v68;
  if ( *((uint8_t *)self + 28) != 0 )
  {
    v11 = *((uint32_t *)v68 - 3);
    if ( v11 != 0 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = *((uint32_t *)v10 - 1);
        if ( v13 >= 0
          && v10 - 12 != (uint8_t *)g4_empty_string_rep )
        {
          if ( v13 != 0 )
            break;
LABEL_38:
          *((uint32_t *)v10 - 1) = -1;
          v10 = v68;
        }
        v22 = &v10[v12];
        v23 = v10[v12];
        if ( *((int *)v10 - 1) >= 0
          && v10 - 12 != (uint8_t *)g4_empty_string_rep )
        {
          if ( *((uint32_t *)v10 - 1) != 0 )
          {
            v24 = *((uint32_t *)v10 - 3);
            v61 = *((uint32_t *)v10 - 2);
            if ( v24 > 0x3FFFFFFC )
              goto LABEL_86;
            v25 = *((uint32_t *)v10 - 3);
            if ( v24 > v61 )
            {
              v25 = 2 * v61;
              if ( 2 * v61 < v24 )
                v25 = v24;
            }
            if ( v25 + 29 > 0x1000 && v61 < v25 )
            {
              v26 = v25 + 4096 - (((uint16_t)v25 + 29) & 0xFFF);
              v25 = 1073741820;
              if ( v26 <= 0x3FFFFFFC )
                v25 = v26;
            }
            v50 = v23;
            v57 = v24;
            v27 = VoxAllocInternal(
                    v25 + 13,
                    0,
                    (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                    (int)(uintptr_t)("internal_new"),
                    181);
            *(uint32_t *)(v27 + 4) = v25;
            *(uint32_t *)(v27 + 8) = 0;
            v28 = v57;
            v66 = (size_t *)v27;
            v23 = v50;
            if ( v57 != 0 )
            {
              v45 = v68;
              if ( v57 == 1 )
              {
                *(uint8_t *)(v27 + 12) = *v68;
                v62 = (uint8_t *)(v27 + 12);
                v29 = v45;
              }
              else
              {
                v62 = (uint8_t *)(v27 + 12);
                memcpy((void *)(v27 + 12), v68, v57);
                v28 = v57;
                v45 = v68;
                v29 = v68;
                v23 = v50;
              }
            }
            else
            {
              v45 = v68;
              v62 = (uint8_t *)(v27 + 12);
              v29 = v68;
            }
            if ( v29 - 12 != (uint8_t *)g4_empty_string_rep
              && __sync_fetch_and_add((volatile int32_t *)v45 - 1, 0xFFFFFFFF) <= 0 )
            {
              v53 = v23;
              v60 = v28;
              VoxFreeInternal(v29 - 12);
              v28 = v60;
              v23 = v53;
            }
            v10 = v62;
            v68 = v62;
            if ( v66 != (size_t *)(uintptr_t)(g4_empty_string_rep) )
            {
              *v66 = v28;
              v66[2] = 0;
              v62[v28] = 0;
              v10 = v68;
            }
          }
          *((uint32_t *)v10 - 1) = -1;
          v22 = &v68[v12];
        }
        if ( (uint8_t)(v23 - 65) <= 0x19u )
          v23 += 32;
        ++v12;
        *v22 = v23;
        v10 = v68;
        v11 = *((uint32_t *)v68 - 3);
        if ( v12 >= v11 )
          goto LABEL_59;
      }
      v14 = *((uint32_t *)v10 - 2);
      if ( v11 > 0x3FFFFFFC )
        goto LABEL_86;
      if ( v14 >= v11 )
      {
        v49 = v11;
        v21 = VoxAllocInternal(
                v11 + 13,
                0,
                (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                (int)(uintptr_t)("internal_new"),
                181);
        v19 = v49;
        v18 = v21;
        *(uint32_t *)(v21 + 4) = v49;
        *(uint32_t *)(v21 + 8) = 0;
        if ( v49 == 0 )
        {
          v20 = v68;
          v65 = (uint8_t *)(v21 + 12);
LABEL_35:
          if ( v20 - 12 != (uint8_t *)g4_empty_string_rep
            && __sync_fetch_and_add((volatile int32_t *)v20 - 1, 0xFFFFFFFF) <= 0 )
          {
            v52 = v19;
            v59 = v18;
            VoxFreeInternal(v20 - 12);
            v18 = v59;
            v19 = v52;
          }
          v10 = v65;
          v68 = v65;
          if ( (uint32_t *)v18 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
          {
            *(uint32_t *)v18 = v19;
            *(uint32_t *)(v18 + 8) = 0;
            v65[v19] = 0;
            v10 = v68;
          }
          goto LABEL_38;
        }
      }
      else
      {
        v15 = 2 * v14;
        if ( v11 >= 2 * v14 )
          v15 = v11;
        if ( v15 + 29 > 0x1000 && v14 < v15 )
        {
          v16 = v15 + 4096 - (((uint16_t)v15 + 29) & 0xFFF);
          v15 = 1073741820;
          if ( v16 <= 0x3FFFFFFC )
            v15 = v16;
        }
        v47 = v11;
        v17 = VoxAllocInternal(
                v15 + 13,
                0,
                (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                (int)(uintptr_t)("internal_new"),
                181);
        *(uint32_t *)(v17 + 4) = v15;
        *(uint32_t *)(v17 + 8) = 0;
        v18 = v17;
        v19 = v47;
      }
      v20 = v68;
      if ( v19 == 1 )
      {
        *(uint8_t *)(v18 + 12) = *v68;
        v65 = (uint8_t *)(v18 + 12);
      }
      else
      {
        v48 = v19;
        v56 = v18;
        v65 = (uint8_t *)(v18 + 12);
        memcpy((void *)(v18 + 12), v68, v19);
        v20 = v68;
        v18 = v56;
        v19 = v48;
      }
      goto LABEL_35;
    }
  }
LABEL_59:
  v30 = 0;
  v31 = *((char **)self + 10);
  if ( v31 != nullptr )
  {
    v64 = (char *)self + 36;
    v63 = *((uint32_t *)v10 - 3);
    v32 = v63;
    v67 = v10;
    do
    {
      while ( 1 )
      {
        v33 = v32;
        v34 = *(uint32_t *)(*((uint32_t *)v31 + 4) - 12);
        v51 = v32;
        if ( v34 <= v32 )
          v33 = *(uint32_t *)(*((uint32_t *)v31 + 4) - 12);
        v35 = memcmp(*((const void **)v31 + 4), v67, v33);
        v32 = v51;
        v36 = v34 - v51;
        if ( v35 == 0 )
          v35 = v36;
        if ( v35 < 0 )
          break;
        v64 = v31;
        v31 = *((char **)v31 + 2);
        if ( v31 == nullptr )
          goto LABEL_68;
      }
      v31 = *((char **)v31 + 3);
    }
    while ( v31 != nullptr );
LABEL_68:
    v30 = 0;
    v10 = v67;
    if ( (char *)self + 36 != v64 )
    {
      v37 = *((uint32_t *)v64 + 4);
      v38 = v63;
      v39 = *(uint32_t *)(v37 - 12);
      if ( v39 <= v63 )
        v38 = *(uint32_t *)(v37 - 12);
      v40 = memcmp(v67, *((const void **)v64 + 4), v38);
      v30 = 0;
      if ( v40 == 0 )
        v40 = v63 - v39;
      if ( v40 >= 0 && *((uint16_t *)v64 + 22) == 0 )
      {
        v41 = *((uint32_t *)v64 + 8);
        v42 = *((uint32_t *)v64 + 15);
        v69 = *((uint32_t *)self + 4);
        v70 = *((uint32_t *)self + 5);
        v71 = *((uint32_t *)self + 6);
        HIDWORD(v44) = v41;
        LODWORD(v44) = (uint32_t)(uintptr_t)(&v69);
        vox::FileArchive::FileRange::Subset(v44, v42);
        v10 = v68;
        v30 = 1;
        *a3 = v70;
        *a4 = v71;
      }
    }
  }
  if ( v10 - 12 != (uint8_t *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)v10 - 1, 0xFFFFFFFF) <= 0 )
  {
    v58 = v30;
    VoxFreeInternal(v10 - 12);
    return v58;
  }
  return v30;
}

// ----------------------------------------------------------------------------
// Function: vox::CZipReader::ImportHeader  (binary VA: 0x1014ea0)
// Original: vox::CZipReader::ImportHeader
// ----------------------------------------------------------------------------
int vox::CZipReader::ImportHeader(vox::CZipReader::Self *self, vox::ZipTableSerializer::Self *a2)
{
  int v2;
  char *v3;
  char *v4;
  char *v5;
  char *v7; // kr00_4
  char *v8;
  size_t v9;
  size_t v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  char *v14;
  char **v15;
  char *v16;
  char **v17;
  char *v18;
  char *v19;
  bool v20; // cc
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  int v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef char *_g4_t_v40;
  typedef char *_g4_t_v41;
  typedef char *_g4_t_v42;
  typedef char *_g4_t_v43;
  typedef char *_g4_t_v44;
  typedef char *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef char *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef void *_g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef void *_g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef void *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int16_t _g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef char *_g4_t_v58;
  typedef char *_g4_t_v59;
  typedef char *_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef int16_t _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef char *_g4_t_v68;
  typedef char *_g4_t_v69;
  typedef char *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef char *_g4_t_v73;
  typedef char *_g4_t_v74;
  typedef char *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef char *_g4_t_v79;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v33)) > _g4_s0 ? (0u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v34)) > _g4_s1 ? (0u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v35)) > _g4_s2 ? (0u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v36)) > _g4_s3 ? (4u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v37)) > _g4_s4 ? (4u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v38)) > _g4_s5 ? (4u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v39)) > _g4_s6 ? (4u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v40)) > _g4_s7 ? (8u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v41)) > _g4_s8 ? (8u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v42)) > _g4_s9 ? (8u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v43)) > _g4_s10 ? (8u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v44)) > _g4_s11 ? (8u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v45)) > _g4_s12 ? (8u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v46)) > _g4_s13 ? (12u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v47)) > _g4_s14 ? (12u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v48)) > _g4_s15 ? (12u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (12u + sizeof(_g4_t_v49)) > _g4_s16 ? (12u + sizeof(_g4_t_v49)) : _g4_s16,
    _g4_s18 = (12u + sizeof(_g4_t_v50)) > _g4_s17 ? (12u + sizeof(_g4_t_v50)) : _g4_s17,
    _g4_s19 = (12u + sizeof(_g4_t_v51)) > _g4_s18 ? (12u + sizeof(_g4_t_v51)) : _g4_s18,
    _g4_s20 = (12u + sizeof(_g4_t_v52)) > _g4_s19 ? (12u + sizeof(_g4_t_v52)) : _g4_s19,
    _g4_s21 = (12u + sizeof(_g4_t_v53)) > _g4_s20 ? (12u + sizeof(_g4_t_v53)) : _g4_s20,
    _g4_s22 = (12u + sizeof(_g4_t_v54)) > _g4_s21 ? (12u + sizeof(_g4_t_v54)) : _g4_s21,
    _g4_s23 = (16u + sizeof(_g4_t_v55)) > _g4_s22 ? (16u + sizeof(_g4_t_v55)) : _g4_s22,
    _g4_s24 = (24u + sizeof(_g4_t_v56)) > _g4_s23 ? (24u + sizeof(_g4_t_v56)) : _g4_s23,
    _g4_s25 = (24u + sizeof(_g4_t_v57)) > _g4_s24 ? (24u + sizeof(_g4_t_v57)) : _g4_s24,
    _g4_s26 = (24u + sizeof(_g4_t_v58)) > _g4_s25 ? (24u + sizeof(_g4_t_v58)) : _g4_s25,
    _g4_s27 = (24u + sizeof(_g4_t_v59)) > _g4_s26 ? (24u + sizeof(_g4_t_v59)) : _g4_s26,
    _g4_s28 = (24u + sizeof(_g4_t_v60)) > _g4_s27 ? (24u + sizeof(_g4_t_v60)) : _g4_s27,
    _g4_s29 = (24u + sizeof(_g4_t_v61)) > _g4_s28 ? (24u + sizeof(_g4_t_v61)) : _g4_s28,
    _g4_s30 = (24u + sizeof(_g4_t_v62)) > _g4_s29 ? (24u + sizeof(_g4_t_v62)) : _g4_s29,
    _g4_s31 = (24u + sizeof(_g4_t_v63)) > _g4_s30 ? (24u + sizeof(_g4_t_v63)) : _g4_s30,
    _g4_s32 = (30u + sizeof(_g4_t_v64)) > _g4_s31 ? (30u + sizeof(_g4_t_v64)) : _g4_s31,
    _g4_s33 = (32u + sizeof(_g4_t_v65)) > _g4_s32 ? (32u + sizeof(_g4_t_v65)) : _g4_s32,
    _g4_s34 = (36u + sizeof(_g4_t_v66)) > _g4_s33 ? (36u + sizeof(_g4_t_v66)) : _g4_s33,
    _g4_s35 = (40u + sizeof(_g4_t_v67)) > _g4_s34 ? (40u + sizeof(_g4_t_v67)) : _g4_s34,
    _g4_s36 = (44u + sizeof(_g4_t_v68)) > _g4_s35 ? (44u + sizeof(_g4_t_v68)) : _g4_s35,
    _g4_s37 = (48u + sizeof(_g4_t_v69)) > _g4_s36 ? (48u + sizeof(_g4_t_v69)) : _g4_s36,
    _g4_s38 = (52u + sizeof(_g4_t_v70)) > _g4_s37 ? (52u + sizeof(_g4_t_v70)) : _g4_s37,
    _g4_s39 = (56u + sizeof(_g4_t_v71)) > _g4_s38 ? (56u + sizeof(_g4_t_v71)) : _g4_s38,
    _g4_s40 = (60u + sizeof(_g4_t_v72)) > _g4_s39 ? (60u + sizeof(_g4_t_v72)) : _g4_s39,
    _g4_s41 = (64u + sizeof(_g4_t_v73)) > _g4_s40 ? (64u + sizeof(_g4_t_v73)) : _g4_s40,
    _g4_s42 = (68u + sizeof(_g4_t_v74)) > _g4_s41 ? (68u + sizeof(_g4_t_v74)) : _g4_s41,
    _g4_s43 = (72u + sizeof(_g4_t_v75)) > _g4_s42 ? (72u + sizeof(_g4_t_v75)) : _g4_s42,
    _g4_s44 = (76u + sizeof(_g4_t_v76)) > _g4_s43 ? (76u + sizeof(_g4_t_v76)) : _g4_s43,
    _g4_s45 = (80u + sizeof(_g4_t_v77)) > _g4_s44 ? (80u + sizeof(_g4_t_v77)) : _g4_s44,
    _g4_s46 = (84u + sizeof(_g4_t_v78)) > _g4_s45 ? (84u + sizeof(_g4_t_v78)) : _g4_s45,
    _g4_s47 = (88u + sizeof(_g4_t_v79)) > _g4_s46 ? (88u + sizeof(_g4_t_v79)) : _g4_s46
  };
  alignas(16) uint8_t _g4_sf[_g4_s47];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 4u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 24u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 24u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 30u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 36u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 40u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 44u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 48u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 52u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 56u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 60u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 64u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 68u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 72u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 76u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 80u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 84u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 88u);

  v2 = 0;
  v68 = (char *)(byte_20E1FB4);
  v69 = (char *)(byte_20E1FB4);
  v70 = (char *)(byte_20E1FB4);
  if ( vox::ZipTableSerializer::GetStatus(a2) == 0 )
  {
    vox::ZipTableSerializer::ReadInt(a2, &v65);
    if ( v65 <= 0 )
    {
LABEL_44:
      v2 = 1;
      goto LABEL_2;
    }
    v55 = 0;
    while ( 1 )
    {
      vox::ZipTableSerializer::ReadInt(a2, &v66);
      if ( v66 > 1023 )
        goto LABEL_44;
      vox::ZipTableSerializer::Read(a2, byte_20E2080, v66);
      byte_20E2080[v66] = 0;
      v7 = (char *)(&byte_20E2080[strlen(byte_20E2080)]);
      v8 = v68;
      v9 = v7 - (char *)(byte_20E2080);
      if ( (unsigned int)(v7 - (char *)(byte_20E2080)) > 0x3FFFFFFC )
        sub_1900180("basic_string::assign");
      if ( v68 > (char *)(uintptr_t)(byte_20E2080) || &v68[*((uint32_t *)v68 - 3)] < (char *)(uintptr_t)(byte_20E2080) || *((int *)v68 - 1) > 0 )
      {
        v10 = *((uint32_t *)v68 - 2);
        if ( v9 <= v10 )
        {
          v11 = v7 - (char *)(byte_20E2080);
          if ( *((int *)v68 - 1) > 0 )
            goto LABEL_16;
        }
        else
        {
          v11 = 2 * v10;
          if ( v9 >= 2 * v10 )
            v11 = v7 - (char *)(byte_20E2080);
LABEL_16:
          v56 = v11 + 29;
          if ( v11 + 29 > 0x1000 && v10 < v11 )
          {
            v12 = v11 + 4096;
            v11 = 1073741820;
            v13 = v12 - (v56 & 0xFFF);
            if ( v13 <= 0x3FFFFFFC )
              v11 = v13;
          }
          v36 = v11;
          v57 = (uint32_t *)VoxAllocInternal(
                            v11 + 13,
                            0,
                            (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                            (int)(uintptr_t)("internal_new"),
                            181);
          v57[1] = v36;
          v57[2] = 0;
          v14 = v68 - 12;
          if ( v68 - 12 != (char *)g4_empty_string_rep
            && __sync_fetch_and_add((volatile int32_t *)v68 - 1, 0xFFFFFFFF) <= 0 )
          {
            VoxFreeInternal(v14);
          }
          v8 = (char *)(v57 + 3);
          v68 = (char *)(v57 + 3);
        }
        if ( v8 - 12 != (char *)g4_empty_string_rep )
        {
          *((uint32_t *)v8 - 1) = 0;
          *((uint32_t *)v8 - 3) = v9;
          v8[v9] = 0;
        }
        if ( v9 != 0 )
        {
          if ( v9 == 1 )
            *v68 = byte_20E2080[0];
          else
            memcpy(v68, byte_20E2080, v9);
        }
        goto LABEL_25;
      }
      if ( v9 <= byte_20E2080 - (uint8_t *)(v68) )
      {
        if ( v9 != 1 )
        {
          memcpy(v68, byte_20E2080, v9);
          v8 = v68;
          goto LABEL_51;
        }
      }
      else
      {
        if ( byte_20E2080 == (uint8_t *)(uintptr_t)(v68) )
          goto LABEL_51;
        if ( v9 != 1 )
        {
          memmove(v68, byte_20E2080, v9);
          v8 = v68;
          goto LABEL_51;
        }
      }
      *v68 = byte_20E2080[0];
      v8 = v68;
LABEL_51:
      if ( v8 - 12 != (char *)g4_empty_string_rep )
      {
        *((uint32_t *)v8 - 1) = 0;
        *((uint32_t *)v8 - 3) = v9;
        v8[v9] = 0;
      }
LABEL_25:
      vox::ZipTableSerializer::ReadInt(a2, &v71);
      v72 = 84167761;
      LOWORD(v73) = -1;
      vox::ZipTableSerializer::ReadShort(a2, &v64);
      HIWORD(v73) = v64;
      vox::ZipTableSerializer::ReadShort(a2, &v64);
      LOWORD(v74) = v64;
      HIWORD(v74) = -1;
      LOWORD(v75) = -1;
      v76 = -1;
      vox::ZipTableSerializer::ReadInt(a2, &v67);
      v77 = v67;
      vox::ZipTableSerializer::ReadInt(a2, &v67);
      v78 = v67;
      LOWORD(v79) = v66;
      vox::ZipTableSerializer::ReadShort(a2, &v64);
      HIWORD(v79) = v64;
      vox::CZipReader::extractFilename((int)(uintptr_t)(self), (int)(uintptr_t)(&v68));
      v15 = (char **)sub_1011F90((uint32_t *)self + 8, &v69);
      v16 = v68;
      v17 = v15;
      v46 = *v15;
      v58 = *v15 - 12;
      if ( v68 - 12 != v58 )
      {
        if ( *((int *)v68 - 1) < 0 )
        {
          v29 = *((uint32_t *)v68 - 3);
          v53 = *((uint32_t *)v68 - 2);
          if ( v29 > 0x3FFFFFFC )
LABEL_120:
            sub_1900180("basic_string::_S_create");
          if ( v29 > v53 && v29 < 2 * v53 )
            v29 = 2 * v53;
          if ( v29 + 29 > 0x1000 && v53 < v29 )
          {
            v30 = v29 + 4096 - (((uint16_t)v29 + 29) & 0xFFF);
            v29 = 1073741820;
            if ( v30 <= 0x3FFFFFFC )
              v29 = v30;
          }
          v42 = v68;
          v39 = v29;
          v31 = VoxAllocInternal(
                  v29 + 13,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
          *(uint32_t *)(v31 + 8) = 0;
          *(uint32_t *)(v31 + 4) = v39;
          v63 = (uint32_t *)v31;
          v35 = 0;
          v54 = (void *)(v31 + 12);
          v32 = *((uint32_t *)v42 - 3);
          if ( v32 != 0 )
          {
            if ( v32 == 1 )
              *(uint8_t *)(v31 + 12) = *v42;
            else
              memcpy(v54, v42, *((uint32_t *)v42 - 3));
            v35 = *((uint32_t *)v42 - 3);
          }
          if ( v63 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
          {
            v63[2] = 0;
            *v63 = v35;
            *((uint8_t *)v63 + v35 + 12) = 0;
          }
          v16 = (char *)v54;
          v46 = *v17;
          v58 = *v17 - 12;
        }
        else if ( v68 - 12 != (char *)g4_empty_string_rep )
        {
          __sync_add_and_fetch((volatile int32_t *)v68 - 1, 1u);
          v46 = *v15;
          v58 = *v15 - 12;
        }
        if ( v58 != (char *)g4_empty_string_rep
          && __sync_fetch_and_add((volatile int32_t *)v46 - 1, 0xFFFFFFFF) <= 0 )
        {
          v43 = v16;
          VoxFreeInternal(v58);
          v16 = v43;
        }
        *v17 = v16;
      }
      v47 = v17[1];
      v18 = v69;
      v59 = v47 - 12;
      if ( v69 - 12 != v47 - 12 )
      {
        if ( *((int *)v69 - 1) < 0 )
        {
          v21 = *((uint32_t *)v69 - 3);
          v49 = *((uint32_t *)v69 - 2);
          if ( v21 > 0x3FFFFFFC )
            goto LABEL_120;
          if ( v21 > v49 && v21 < 2 * v49 )
            v21 = 2 * v49;
          if ( v21 + 29 > 0x1000 && v49 < v21 )
          {
            v22 = v21 + 4096 - (((uint16_t)v21 + 29) & 0xFFF);
            v21 = 1073741820;
            if ( v22 <= 0x3FFFFFFC )
              v21 = v22;
          }
          v40 = v69;
          v37 = v21;
          v23 = VoxAllocInternal(
                  v21 + 13,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
          *(uint32_t *)(v23 + 8) = 0;
          *(uint32_t *)(v23 + 4) = v37;
          v61 = (uint32_t *)v23;
          v33 = 0;
          v50 = (void *)(v23 + 12);
          v24 = *((uint32_t *)v40 - 3);
          if ( v24 != 0 )
          {
            if ( v24 == 1 )
              *(uint8_t *)(v23 + 12) = *v40;
            else
              memcpy(v50, v40, *((uint32_t *)v40 - 3));
            v33 = *((uint32_t *)v40 - 3);
          }
          if ( v61 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
          {
            v61[2] = 0;
            *v61 = v33;
            *((uint8_t *)v61 + v33 + 12) = 0;
          }
          v18 = (char *)v50;
          v47 = v17[1];
          v59 = v47 - 12;
        }
        else if ( v69 - 12 != (char *)g4_empty_string_rep )
        {
          __sync_add_and_fetch((volatile int32_t *)v69 - 1, 1u);
          v47 = v17[1];
          v59 = v47 - 12;
        }
        if ( v59 != (char *)g4_empty_string_rep
          && __sync_fetch_and_add((volatile int32_t *)v47 - 1, 0xFFFFFFFF) <= 0 )
        {
          v45 = v18;
          VoxFreeInternal(v59);
          v18 = v45;
        }
        v17[1] = v18;
      }
      v48 = v17[2];
      v19 = v70;
      v60 = v48 - 12;
      if ( v70 - 12 != v48 - 12 )
      {
        if ( *((int *)v70 - 1) < 0 )
        {
          v25 = *((uint32_t *)v70 - 3);
          v51 = *((uint32_t *)v70 - 2);
          if ( v25 > 0x3FFFFFFC )
            goto LABEL_120;
          if ( v25 > v51 && v25 < 2 * v51 )
            v25 = 2 * v51;
          if ( v25 + 29 > 0x1000 && v51 < v25 )
          {
            v26 = v25 + 4096 - (((uint16_t)v25 + 29) & 0xFFF);
            v25 = 1073741820;
            if ( v26 <= 0x3FFFFFFC )
              v25 = v26;
          }
          v41 = v70;
          v38 = v25;
          v27 = VoxAllocInternal(
                  v25 + 13,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
          *(uint32_t *)(v27 + 8) = 0;
          *(uint32_t *)(v27 + 4) = v38;
          v62 = (uint32_t *)v27;
          v34 = 0;
          v52 = (void *)(v27 + 12);
          v28 = *((uint32_t *)v41 - 3);
          if ( v28 != 0 )
          {
            if ( v28 == 1 )
              *(uint8_t *)(v27 + 12) = *v41;
            else
              memcpy(v52, v41, *((uint32_t *)v41 - 3));
            v34 = *((uint32_t *)v41 - 3);
          }
          if ( v62 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
          {
            v62[2] = 0;
            *v62 = v34;
            *((uint8_t *)v62 + v34 + 12) = 0;
          }
          v19 = (char *)v52;
          v48 = v17[2];
          v60 = v48 - 12;
        }
        else if ( v70 - 12 != (char *)g4_empty_string_rep )
        {
          __sync_add_and_fetch((volatile int32_t *)v70 - 1, 1u);
          v48 = v17[2];
          v60 = v48 - 12;
        }
        if ( v60 != (char *)g4_empty_string_rep
          && __sync_fetch_and_add((volatile int32_t *)v48 - 1, 0xFFFFFFFF) <= 0 )
        {
          v44 = v19;
          VoxFreeInternal(v60);
          v19 = v44;
        }
        v17[2] = v19;
      }
      ++v55;
      v17[3] = (char *)v71;
      v17[4] = (char *)v72;
      v17[5] = v73;
      v17[6] = v74;
      v17[7] = v75;
      v17[8] = (char *)v76;
      v17[9] = (char *)v77;
      v17[10] = (char *)v78;
      v20 = v65 <= v55;
      v17[11] = v79;
      if ( v20 )
        goto LABEL_44;
    }
  }
LABEL_2:
  v3 = v70 - 12;
  if ( v70 - 12 != (char *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)v70 - 1, 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal(v3);
  }
  v4 = v69 - 12;
  if ( v69 - 12 != (char *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)v69 - 1, 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal(v4);
  }
  v5 = v68 - 12;
  if ( v68 - 12 != (char *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)v68 - 1, 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal(v5);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::CZipReader::scanLocalHeader  (binary VA: 0x10137e0)
// Original: vox::CZipReader::scanLocalHeader
// ----------------------------------------------------------------------------
namespace {
struct G4VoxZipEntry {
  char *zipFileName;
  char *simpleFileName;
  char *path;
  int32_t fileDataPos;
  uint32_t sig;
  uint16_t versionNeeded;
  uint16_t bitFlag;
  uint16_t compressionMethod;
  uint16_t modTime;
  uint16_t modDate;
  uint16_t pad1E;
  uint32_t crc32;
  uint32_t compressedSize;
  uint32_t uncompressedSize;
  int16_t filenameLen;
  int16_t extraLen;
};
static_assert(sizeof(G4VoxZipEntry) == 48, "G4VoxZipEntry must be 48 bytes");

static void g4_vox_str_destroy(char *&s)
{
  char *rep = s - 12;
  if (rep != (char *)g4_empty_string_rep &&
      __sync_fetch_and_add((volatile int32_t *)s - 1, 0xFFFFFFFF) <= 0)
  {
    VoxFreeInternal(rep);
  }
}

static void g4_vox_str_assign_slot(char *&dst, char *src)
{
  if (src - 12 == dst - 12)
    return;
  char *newStr = src;
  if (*((int32_t *)src - 1) < 0)
  {
    uint32_t len = *((uint32_t *)src - 3);
    uint32_t allocPtr = VoxAllocInternal(
      len + 13u,
      0,
      (int)(uintptr_t)"../../../../../lib/vox/include/vox_memory.h",
      (int)(uintptr_t)"internal_new",
      181);
    *(uint32_t *)(uintptr_t)(allocPtr + 4) = len;
    *(uint32_t *)(uintptr_t)(allocPtr + 8) = 0;
    *(uint32_t *)(uintptr_t)allocPtr = len;
    newStr = (char *)(uintptr_t)(allocPtr + 12);
    if (len > 0)
      memcpy(newStr, src, len);
    newStr[len] = '\0';
  }
  else if (src - 12 != (char *)g4_empty_string_rep)
  {
    __sync_add_and_fetch((volatile int32_t *)src - 1, 1u);
  }
  g4_vox_str_destroy(dst);
  dst = newStr;
}

static uint16_t g4_vox_rd16(const uint8_t *p)
{
  return (uint16_t)((uint16_t)p[0] | ((uint16_t)p[1] << 8));
}
static uint32_t g4_vox_rd32(const uint8_t *p)
{
  return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}
} // namespace

bool vox::CZipReader::scanLocalHeader(vox::CZipReader::Self *self)
{
  uint32_t file = *((uint32_t *)self + 1);
  if (file == 0)
    return false;

  G4VoxZipEntry entry;
  memset(&entry, 0, sizeof(entry));
  entry.zipFileName = (char *)byte_20E1FB4;
  entry.simpleFileName = (char *)byte_20E1FB4;
  entry.path = (char *)byte_20E1FB4;

  uint8_t raw[30];
  memset(raw, 0, sizeof(raw));
  (*(int (**)(uint32_t, void *, uint32_t, int))(*(uint32_t *)(uintptr_t)file + 8))(file, raw, 30u, 1);

  entry.sig = g4_vox_rd32(raw + 0);
  entry.versionNeeded = g4_vox_rd16(raw + 4);
  entry.bitFlag = g4_vox_rd16(raw + 6);
  entry.compressionMethod = g4_vox_rd16(raw + 8);
  entry.modTime = g4_vox_rd16(raw + 10);
  entry.modDate = g4_vox_rd16(raw + 12);
  entry.crc32 = g4_vox_rd32(raw + 14);
  entry.compressedSize = g4_vox_rd32(raw + 18);
  entry.uncompressedSize = g4_vox_rd32(raw + 22);
  entry.filenameLen = (int16_t)g4_vox_rd16(raw + 26);
  entry.extraLen = (int16_t)g4_vox_rd16(raw + 28);

  if (entry.sig != 0x05044C51u && entry.sig != 0x04034B50u)
  {
    g4_vox_str_destroy(entry.path);
    g4_vox_str_destroy(entry.simpleFileName);
    g4_vox_str_destroy(entry.zipFileName);
    return false;
  }

  int nameLen = entry.filenameLen;
  if (nameLen < 0)
    nameLen = 0;
  char stackBuf[1024];
  char *nameBuf = stackBuf;
  char *heapBuf = nullptr;
  if (nameLen >= (int)sizeof(stackBuf))
  {
    heapBuf = (char *)malloc((size_t)nameLen + 1u);
    nameBuf = heapBuf;
  }
  if (nameLen > 0)
    (*(int (**)(uint32_t, void *, uint32_t, int))(*(uint32_t *)(uintptr_t)file + 8))(file, nameBuf, (uint32_t)nameLen, 1);
  nameBuf[nameLen] = '\0';

  g4_std::basic_string_char_char_traits_char_vo_fb0ee3::opAssign(
    (vox::CZipReader::Self *)&entry.zipFileName,
    nameBuf);
  if (heapBuf != nullptr)
    free(heapBuf);

  vox::CZipReader::extractFilename((int)(uintptr_t)self, (int)(uintptr_t)&entry);

  if (entry.extraLen != 0)
    (*(int (**)(uint32_t, int, int))(*(uint32_t *)(uintptr_t)file + 12))(file, (int)entry.extraLen, 1);
  if ((entry.bitFlag & 8u) != 0)
  {
    uint8_t desc[12];
    memset(desc, 0, sizeof(desc));
    (*(int (**)(uint32_t, void *, uint32_t, int))(*(uint32_t *)(uintptr_t)file + 8))(file, desc, 12u, 1);
    entry.crc32 = g4_vox_rd32(desc + 0);
    entry.compressedSize = g4_vox_rd32(desc + 4);
    entry.uncompressedSize = g4_vox_rd32(desc + 8);
  }

  entry.fileDataPos = (*(int (**)(uint32_t))(*(uint32_t *)(uintptr_t)file + 16))(file);
  (*(int (**)(uint32_t, uint32_t, int))(*(uint32_t *)(uintptr_t)file + 12))(file, entry.compressedSize, 1);

  char **slot = (char **)(uintptr_t)sub_1011F90((uint32_t *)self + 8, &entry.simpleFileName);
  g4_vox_str_assign_slot(slot[0], entry.zipFileName);
  g4_vox_str_assign_slot(slot[1], entry.simpleFileName);
  g4_vox_str_assign_slot(slot[2], entry.path);
  memcpy(&slot[3], &entry.fileDataPos, 36);

  g4_vox_str_destroy(entry.path);
  g4_vox_str_destroy(entry.simpleFileName);
  g4_vox_str_destroy(entry.zipFileName);
  return true;
}

// ----------------------------------------------------------------------------
// Function: vox::CZipReader::Construct  (binary VA: 0x1015930)
// Original: vox::CZipReader::CZipReader
// ----------------------------------------------------------------------------
void vox::CZipReader::Construct(vox::CZipReader::Self *self, vox::FileInterface::Self *a2, vox::FileArchive::FileRange::Self *a3, bool a4, bool a5, char *s)
{
  size_t v6;
  size_t v7;
  unsigned int v8;
  int v9;
  char *v10;
  size_t n;
  int Status;
  int v13;
  const char *FilePath;
  int v15;
  const char *v16;
  typedef int _g4_t_v17;
  typedef size_t _g4_t_v18;
  typedef size_t _g4_t_v19;
  typedef size_t _g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef uint8_t _g4_t_v23[48];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v18)) > _g4_s1 ? (4u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v19)) > _g4_s2 ? (4u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v20)) > _g4_s3 ? (4u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v21)) > _g4_s4 ? (8u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v22)) > _g4_s5 ? (8u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D828);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(byte_20E1FB4);
  if ( s == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v6 = strlen(s);
  if ( s == &s[v6] )
  {
    v22 = (char *)(byte_20E1FB4);
    goto LABEL_12;
  }
  v7 = v6;
  if ( v6 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v6 + 29 > 0x1000 && v6 != 0 )
  {
    v8 = v6 + 4096 - (((uint16_t)v6 + 29) & 0xFFF);
    if ( v8 > 0x3FFFFFFC )
      v8 = 1073741820;
    v21 = v8;
    v18 = v7;
    v9 = VoxAllocInternal(v8 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v9 + 4) = v21;
    *(uint32_t *)(v9 + 8) = 0;
    v10 = (char *)(v9 + 12);
    n = v18;
    v22 = (char *)(v9 + 12);
    goto LABEL_9;
  }
  v20 = v6;
  v13 = VoxAllocInternal(v6 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  n = v20;
  v9 = v13;
  *(uint32_t *)(v13 + 4) = v20;
  *(uint32_t *)(v13 + 8) = 0;
  v10 = (char *)(v13 + 12);
  v22 = v10;
  if ( v20 != 1 )
  {
LABEL_9:
    v19 = n;
    v17 = v9;
    memcpy(v10, s, n);
    v9 = v17;
    n = v19;
    goto LABEL_10;
  }
  *(uint8_t *)(v9 + 12) = *s;
LABEL_10:
  if ( (uint32_t *)v9 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
  {
    *(uint32_t *)(v9 + 8) = 0;
    *(uint32_t *)v9 = n;
    v22[n] = 0;
  }
LABEL_12:
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v22);
  *((uint32_t *)self + 4) = *(uint32_t *)a3;
  *((uint32_t *)self + 5) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 6) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint8_t *)self + 28) = a4;
  *((uint32_t *)self + 13) = 0;
  *((uint8_t *)self + 56) = 0;
  *((uint8_t *)self + 29) = a5;
  *((uint8_t *)self + 57) = 0;
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)((char *)self + 36);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)((char *)self + 36);
  vox::ZipTableSerializer::Construct((vox::ZipTableSerializer::Self *)v23, *((vox::FileInterface::Self **)self + 1));
  Status = vox::ZipTableSerializer::GetStatus((vox::ZipTableSerializer::Self *)v23);
  if ( Status != 0 )
  {
    if ( Status == 1 )
    {
      (*(void (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 1) + 12))(*((uint32_t *)self + 1), 0, 0);
      v15 = *((uint32_t *)self + 1);
      *((uint8_t *)self + 56) = 1;
      v16 = (const char *)G4_VCALL<int>(v15, 24);
      g4_std::basic_string_char_char_traits_char_vo_fb0ee3::opAssign(
        (vox::CZipReader::Self *)((char *)self + 8),
        v16);
      while ( (uint8_t)vox::CZipReader::scanLocalHeader(self) != 0 )
        ;
    }
  }
  else
  {
    *((uint8_t *)self + 57) = 1;
    if ( (uint8_t)vox::CZipReader::ImportHeader(self, (vox::ZipTableSerializer::Self *)v23) != 0 )
    {
      FilePath = (const char *)vox::ZipTableSerializer::GetFilePath((vox::ZipTableSerializer::Self *)v23);
      g4_std::basic_string_char_char_traits_char_vo_fb0ee3::opAssign(
        (vox::CZipReader::Self *)((char *)self + 8),
        FilePath);
      *((uint8_t *)self + 56) = 1;
    }
    (*(void (**)(uint32_t, uint32_t, uint32_t))(**((uint32_t **)self + 1) + 12))(*((uint32_t *)self + 1), 0, 0);
  }
  vox::ZipTableSerializer::Destroy();
}

// ----------------------------------------------------------------------------
// Function: vox::CZipReader::Destroy  (binary VA: 0x1015c50)
// Original: vox::CZipReader::~CZipReader
// ----------------------------------------------------------------------------
void vox::CZipReader::Destroy(void **self)
{
  int v1;
  int v2;

  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208D828));
  g4_std::Rb_tree_basic_string_char_char_t_31aa61::M_erase(
    (int)(uintptr_t)(self + 8),
    *(self + 10));
  v1 = (int)(uintptr_t)(*(self + 3));
  if ( (uint32_t *)(v1 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal((void *)(v1 - 12));
  }
  v2 = (int)(uintptr_t)(*(self + 2));
  if ( (uint32_t *)(v2 - 12) != (uint32_t *)(uintptr_t)(g4_empty_string_rep
)    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal((void *)(v2 - 12));
  }
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208D728));
}

// ----------------------------------------------------------------------------
// Function: vox::CZipReader::Destroy_ea1015cf0  (binary VA: 0x1015cf0)
// Original: vox::CZipReader::~CZipReader
// ----------------------------------------------------------------------------
void vox::CZipReader::Destroy_ea1015cf0(void **self)
{
  vox::CZipReader::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::CZipReader::isValid  (binary VA: 0x1015d30)
// Original: vox::CZipReader::isValid
// ----------------------------------------------------------------------------
int vox::CZipReader::isValid(vox::CZipReader::Self *self)
{
  return *((uint8_t *)self + 56);
}

// ----------------------------------------------------------------------------
// Function: vox::CZipReader::isVoxArchive  (binary VA: 0x1015d40)
// Original: vox::CZipReader::isVoxArchive
// ----------------------------------------------------------------------------
int vox::CZipReader::isVoxArchive()
{
  return 0;
}


