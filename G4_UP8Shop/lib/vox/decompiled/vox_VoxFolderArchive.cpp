#include "Core/Utils/DecompTypes.h"
#include "vox_VoxFolderArchive.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxFolderArchive::getFileInfo  (binary VA: 0x100d650)
// Original: vox::VoxFolderArchive::getFileInfo
// ----------------------------------------------------------------------------
int vox::VoxFolderArchive::getFileInfo()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxFolderArchive::getZipFileName  (binary VA: 0x100d660)
// Original: vox::VoxFolderArchive::getZipFileName
// ----------------------------------------------------------------------------
int vox::VoxFolderArchive::getZipFileName(vox::VoxFolderArchive::Self *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxFolderArchive::getArchiveLabelName  (binary VA: 0x100d670)
// Original: vox::VoxFolderArchive::getArchiveLabelName
// ----------------------------------------------------------------------------
int vox::VoxFolderArchive::getArchiveLabelName(vox::VoxFolderArchive::Self *self)
{
  return *((uint32_t *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxFolderArchive::isValid  (binary VA: 0x100d680)
// Original: vox::VoxFolderArchive::isValid
// ----------------------------------------------------------------------------
int vox::VoxFolderArchive::isValid()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxFolderArchive::getFileCount  (binary VA: 0x100d690)
// Original: vox::VoxFolderArchive::getFileCount
// ----------------------------------------------------------------------------
int vox::VoxFolderArchive::getFileCount(vox::VoxFolderArchive::Self *self)
{
  return -1431655765 * ((*((uint32_t *)self + 5) - *((uint32_t *)self + 4)) >> 2);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxFolderArchive::isVoxArchive  (binary VA: 0x100d6b0)
// Original: vox::VoxFolderArchive::isVoxArchive
// ----------------------------------------------------------------------------
int vox::VoxFolderArchive::isVoxArchive()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxFolderArchive::Destroy  (binary VA: 0x100d6c0)
// Original: vox::VoxFolderArchive::~VoxFolderArchive
// ----------------------------------------------------------------------------
void vox::VoxFolderArchive::Destroy(vox::VoxFolderArchive::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D768);
  v1 = *((uint32_t *)self + 8);
  if ( (void *)(v1 - 12) != (void *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 7);
  if ( (void *)(v2 - 12) != (void *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal((void *)(v2 - 12));
  }
  if ( *((uint32_t *)self + 4) != 0 )
    VoxFreeInternal(*((void **)self + 4));
  if ( *((uint32_t *)self + 1) != 0 )
    VoxFreeInternal(*((void **)self + 1));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D728);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxFolderArchive::Destroy_ea100d770  (binary VA: 0x100d770)
// Original: vox::VoxFolderArchive::~VoxFolderArchive
// ----------------------------------------------------------------------------
void vox::VoxFolderArchive::Destroy_ea100d770(vox::VoxFolderArchive::Self *self)
{
  vox::VoxFolderArchive::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxFolderArchive::getFilenameWithoutPath  (binary VA: 0x100d7b0)
// Original: vox::VoxFolderArchive::getFilenameWithoutPath
// ----------------------------------------------------------------------------
vox::VoxFolderArchive::Self * vox::VoxFolderArchive::getFilenameWithoutPath(vox::VoxFolderArchive::Self *self)
{
  vox::VoxFolderArchive::Self *result;

  result = (vox::VoxFolderArchive::Self *)((char *)self + strlen((const char *)self));
  if ( *(uint8_t *)result == 47 || *(uint8_t *)result == 92 )
  {
LABEL_2:
    if ( result != self )
      return (vox::VoxFolderArchive::Self *)((char *)result + 1);
  }
  else
  {
    while ( self != result )
    {
      result = (vox::VoxFolderArchive::Self *)((char *)result - 1);
      if ( *(uint8_t *)result == 92 || *(uint8_t *)result == 47 )
        goto LABEL_2;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxFolderArchive::getFileInfo  (binary VA: 0x100d810)
// Original: vox::VoxFolderArchive::getFileInfo
// ----------------------------------------------------------------------------
int vox::VoxFolderArchive::getFileInfo(vox::VoxFolderArchive::Self *self, vox::VoxFolderArchive::Self *s, const char **a3, vox::FileArchive::FileRange::Self *a4)
{
  signed int v4;
  unsigned int v5;
  vox::VoxFolderArchive::Self *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  int v22;
  int result;
  int v24;
  int v25;
  unsigned int *v26;
  int v27;
  uint8_t v28;
  int v29;
  uint8_t v30;
  int v31;
  int v32;
  int v33;
  typedef int _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef signed int _g4_t_v40;
  typedef uint32_t _g4_t_v41[10];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v34)) > _g4_s0 ? (12u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v35)) > _g4_s1 ? (16u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v36)) > _g4_s2 ? (16u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v37)) > _g4_s3 ? (24u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v38)) > _g4_s4 ? (32u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v39)) > _g4_s5 ? (36u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v40)) > _g4_s6 ? (44u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v41)) > _g4_s7 ? (52u + sizeof(_g4_t_v41)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);

  if ( *((uint8_t *)self + 36) == 0 )
    s = vox::VoxFolderArchive::getFilenameWithoutPath(s);
  v4 = strlen((const char *)s);
  v5 = v4 ^ 0x1A7DAF1C;
  v40 = v4;
  v35 = v4 ^ 0x12B9B0A1;
  if ( v4 > 3 )
  {
    v37 = v4;
    v6 = s;
    do
    {
      v7 = *((uint8_t *)v6 + 1);
      v8 = *((uint8_t *)v6 + 3);
      v9 = v7 + 32;
      v38 = v7 << 8;
      v10 = *((uint8_t *)v6 + 2);
      v11 = v9 << 8;
      v39 = v10 << 16;
      v34 = (v10 + 32) << 16;
      v12 = (v8 + 32) << 24;
      v13 = *(uint8_t *)v6 + 32;
      if ( (uint8_t)(*(uint8_t *)v6 - 65) > 0x19u )
        v13 = *(uint8_t *)v6;
      if ( (uint8_t)(*((uint8_t *)v6 + 1) - 65) > 0x19u )
        v11 = v38;
      v14 = v13 + v11;
      v15 = v34;
      if ( (uint8_t)(*((uint8_t *)v6 + 2) - 65) > 0x19u )
        v15 = v39;
      v16 = v15 + v14;
      v17 = *((uint8_t *)v6 + 3);
      v6 = (vox::VoxFolderArchive::Self *)((char *)v6 + 4);
      if ( (uint8_t)(v17 - 65) > 0x19u )
        v12 = v8 << 24;
      v37 -= 4;
      v18 = 1540483477 * ((1540483477 * (v12 + v16)) ^ ((unsigned int)(1540483477 * (v12 + v16)) >> 24));
      v5 = v18 ^ (1540483477 * v5);
      v35 = v18 ^ (1540483477 * v35);
    }
    while ( v37 > 3 );
    v19 = (unsigned int)(v40 - 4) >> 2;
    s = (vox::VoxFolderArchive::Self *)((char *)s + 4 * v19 + 4);
    v4 = v40 - 4 - 4 * v19;
  }
  switch ( v4 )
  {
    case 1:
      goto LABEL_33;
    case 2:
      goto LABEL_30;
    case 3:
      v28 = *((uint8_t *)s + 2);
      if ( (uint8_t)(v28 - 65) <= 0x19u )
        v29 = (v28 + 32) << 16;
      else
        v29 = v28 << 16;
      v5 ^= v29;
      v35 ^= v29;
LABEL_30:
      v30 = *((uint8_t *)s + 1);
      if ( (uint8_t)(v30 - 65) > 0x19u )
        v31 = v30 << 8;
      else
        v31 = (v30 + 32) << 8;
      v5 ^= v31;
      v35 ^= v31;
LABEL_33:
      v32 = *(uint8_t *)s;
      v33 = (uint8_t)v32 ^ v5;
      if ( (uint8_t)(*(uint8_t *)s - 65) <= 0x19u )
      {
        v32 = (uint8_t)v32 + 32;
        v33 = v32 ^ v5;
      }
      v5 = 1540483477 * v33;
      v35 = 1540483477 * (v35 ^ v32);
    default:
      v20 = *((uint32_t *)self + 4);
      v21 = (1540483477 * (v5 ^ (v5 >> 13))) ^ ((1540483477 * (v5 ^ (v5 >> 13))) >> 15);
      v22 = -1431655765 * ((*((uint32_t *)self + 5) - v20) >> 2);
      result = 0;
      v36 = (1540483477 * (v35 ^ (v35 >> 13))) ^ ((1540483477 * (v35 ^ (v35 >> 13))) >> 15);
      if ( v22 == 0 )
        return result;
      v24 = 0;
      while ( 1 )
      {
        v25 = (v24 + v22) >> 1;
        v26 = (unsigned int *)(v20 + 12 * v25);
        if ( *v26 <= v21 )
        {
          if ( *v26 < v21 )
            goto LABEL_39;
          if ( v26[1] <= v36 )
            break;
        }
        v22 = (v24 + v22) >> 1;
LABEL_37:
        if ( v22 == v24 )
          return 0;
      }
      if ( v26[1] < v36 )
      {
LABEL_39:
        v24 = v25 + 1;
        goto LABEL_37;
      }
      result = 0;
      v27 = *((uint32_t *)self + 1);
      if ( v27 != *((uint32_t *)self + 2) )
      {
        *a3 = (const char *)(v26[2] + v27);
        vox::FileArchive::FileRange::FileRange((vox::FileArchive::FileRange::Self *)v41);
        *(uint32_t *)a4 = v41[0];
        *((uint32_t *)a4 + 1) = v41[1];
        *((uint32_t *)a4 + 2) = v41[2];
        return 1;
      }
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxFolderArchive::Construct  (binary VA: 0x100db10)
// Original: vox::VoxFolderArchive::VoxFolderArchive
// ----------------------------------------------------------------------------
vox::VoxFolderArchive::Self * vox::VoxFolderArchive::Construct(vox::VoxFolderArchive::Self *self, char *s, unsigned int a3, const char **a4, bool a5, char *a6)
{
  char *v6;
  unsigned int n;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  char *v13;
  char *v14;
  unsigned int v15;
  vox::VoxFolderArchive::Self *result;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *i;
  vox::VoxFolderArchive::Self *v27;
  void *v28;
  size_t v29;
  size_t v30;
  unsigned int v31;
  int v32;
  int v33;
  char *v34;
  size_t v35;
  size_t v36;
  unsigned int v37;
  size_t v38;
  int v39;
  int v40;
  size_t v41;
  size_t v42;
  int v43;
  size_t v44;
  uint8_t *v45;
  size_t v46;
  char *v47;
  int v48;
  size_t v49;
  size_t v50;
  unsigned int v51;
  unsigned int v52;
  int v53;
  int v54;
  uint8_t *v55;
  int v56;
  size_t v57;
  size_t v58;
  unsigned int v59;
  vox::VoxFolderArchive::Self *v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  uint8_t v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int *v74;
  unsigned int v75;
  unsigned int v76;
  int v77;
  size_t v78;
  unsigned int *v79;
  int v80;
  unsigned int *v81;
  void *v82;
  unsigned int *v83;
  int v84;
  unsigned int v85;
  unsigned int *v86;
  unsigned int *ii;
  unsigned int *v88;
  bool v89;
  unsigned int *v90;
  unsigned int v91;
  unsigned int *jj;
  unsigned int *v93;
  uint8_t v94;
  int v95;
  uint8_t v96;
  int v97;
  int v98;
  int v99;
  unsigned int v100;
  int v101;
  uint8_t *v102;
  vox::VoxFolderArchive::Self *v103;
  uint8_t *v104;
  uint8_t *v105;
  uint8_t *v106;
  uint8_t *v107;
  uint8_t *v108;
  uint8_t *v109;
  int v110;
  unsigned int v111;
  unsigned int *v112;
  vox::VoxFolderArchive::Self *v113;
  unsigned int *v114;
  unsigned int *v115;
  uint32_t *v116;
  unsigned int *v117;
  unsigned int *v118;
  uint32_t *v119;
  unsigned int *v120;
  void *v121;
  unsigned int *v122;
  int v123;
  unsigned int v124;
  unsigned int *v125;
  unsigned int *m;
  unsigned int *v127;
  int v128;
  size_t v129;
  unsigned int v130;
  unsigned int v131;
  int v132;
  int v133;
  char *v134;
  char *v135;
  volatile int32_t *v136;
  char *v137;
  char v138;
  uint8_t *v139;
  uint8_t *v140;
  uint8_t *j;
  vox::VoxFolderArchive::Self *v142;
  void *v143;
  unsigned int v144;
  size_t v145;
  unsigned int v146;
  void *v147;
  void *v148;
  void *v149;
  void *v150;
  uint32_t *v151;
  unsigned int v152;
  uint8_t *v153;
  int v154;
  int v155;
  int v156;
  int v157;
  size_t v158;
  size_t v159;
  unsigned int *src;
  size_t v161;
  size_t v162;
  int v163;
  size_t v164;
  void *v165;
  size_t v166;
  size_t v167;
  size_t v168;
  size_t v169;
  size_t v170;
  signed int v171;
  size_t v172;
  size_t v173;
  size_t v174;
  int v175;
  unsigned int *v176;
  unsigned int v177;
  unsigned int v178;
  int v179;
  int v180;
  int v181;
  int k;
  char *dest;
  vox::VoxFolderArchive::Self *FilenameWithoutPath;
  int v185;
  int v186;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D768);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  v6 = (char *)(byte_20E1FB4);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(byte_20E1FB4);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(byte_20E1FB4);
  n = strlen(s);
  if ( n > 0x3FFFFFFC )
LABEL_309:
    sub_1900180("basic_string::assign");
  if ( s >= (char *)(byte_20E1FB4)
    && s <= (char *)(&byte_20E1FB4[g4_empty_string_rep[0]])
    && *(int32_t *)&g4_empty_string_rep[8] <= 0 )
  {
    if ( n <= s - (char *)(byte_20E1FB4) )
    {
      if ( n != 1 )
      {
        memcpy(byte_20E1FB4, s, n);
        v6 = *((char **)self + 7);
        goto LABEL_22;
      }
    }
    else
    {
      if ( s == (char *)(byte_20E1FB4) )
        goto LABEL_22;
      if ( n != 1 )
      {
        memmove(byte_20E1FB4, s, n);
        v6 = *((char **)self + 7);
        goto LABEL_22;
      }
    }
    byte_20E1FB4[0] = *s;
LABEL_22:
    if ( v6 - 12 != (char *)g4_empty_string_rep )
    {
      *((uint32_t *)v6 - 1) = 0;
      *((uint32_t *)v6 - 3) = n;
      v6[n] = 0;
    }
    goto LABEL_24;
  }
  if ( n > g4_empty_string_rep[1] )
  {
    v8 = 2
       * g4_empty_string_rep[1];
    if ( n >= 2
            * g4_empty_string_rep[1] )
      v8 = n;
    goto LABEL_6;
  }
  v8 = n;
  if ( g4_empty_string_rep[2] > 0 )
  {
LABEL_6:
    if ( v8 + 29 > 0x1000
      &(void *)g4_empty_string_rep[1] < (void *)(intptr_t)(v8) )
    {
      v9 = v8 + 4096 - (((uint16_t)v8 + 29) & 0xFFF);
      v8 = 1073741820;
      if ( v9 <= 0x3FFFFFFC )
        v8 = v9;
    }
    v10 = VoxAllocInternal(v8 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v10 + 4) = v8;
    v11 = v10;
    *(uint32_t *)(v10 + 8) = 0;
    v12 = *((uint32_t *)self + 7);
    if ( (uint32_t *)(v12 - 12) != (uint32_t *)(g4_empty_string_rep)
      && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
    {
      v156 = v11;
      VoxFreeInternal((void *)(v12 - 12));
      v11 = v156;
    }
    v13 = (char *)(v11 + 12);
    *((uint32_t *)self + 7) = v11 + 12;
    goto LABEL_12;
  }
  v13 = (char *)(byte_20E1FB4);
LABEL_12:
  if ( v13 - 12 != (char *)g4_empty_string_rep )
  {
    *((uint32_t *)v13 - 1) = 0;
    *((uint32_t *)v13 - 3) = n;
    v13[n] = 0;
  }
  if ( n != 0 )
  {
    v14 = *((char **)self + 7);
    if ( n == 1 )
      *v14 = *s;
    else
      memcpy(v14, s, n);
  }
LABEL_24:
  v15 = strlen(a6);
  result = *((vox::VoxFolderArchive::Self **)self + 8);
  if ( v15 > 0x3FFFFFFC )
    goto LABEL_309;
  if ( a6 < (char *)result || a6 > (char *)result + *((uint32_t *)result - 3) || *((int *)result - 1) > 0 )
  {
    v17 = *((uint32_t *)result - 2);
    if ( v15 <= v17 )
    {
      v18 = v15;
      if ( *((int *)result - 1) <= 0 )
      {
LABEL_37:
        if ( (uint32_t *)((char *)result - 12) != (uint32_t *)(g4_empty_string_rep) )
        {
          *((uint32_t *)result - 1) = 0;
          *((uint32_t *)result - 3) = v15;
          *((uint8_t *)result + v15) = 0;
        }
        if ( v15 != 0 )
        {
          result = *((vox::VoxFolderArchive::Self **)self + 8);
          if ( v15 == 1 )
            *(uint8_t *)result = *a6;
          else
            result = (vox::VoxFolderArchive::Self *)memcpy(result, a6, v15);
        }
        goto LABEL_40;
      }
    }
    else
    {
      v18 = 2 * v17;
      if ( v15 >= 2 * v17 )
        v18 = v15;
    }
    if ( v18 + 29 > 0x1000 && v17 < v18 )
    {
      v19 = v18 + 4096 - (((uint16_t)v18 + 29) & 0xFFF);
      v18 = 1073741820;
      if ( v19 <= 0x3FFFFFFC )
        v18 = v19;
    }
    v20 = VoxAllocInternal(v18 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v20 + 4) = v18;
    v21 = v20;
    *(uint32_t *)(v20 + 8) = 0;
    v22 = *((uint32_t *)self + 8);
    if ( (uint32_t *)(v22 - 12) != (uint32_t *)(g4_empty_string_rep)
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      v155 = v21;
      VoxFreeInternal((void *)(v22 - 12));
      v21 = v155;
    }
    result = (vox::VoxFolderArchive::Self *)(v21 + 12);
    *((uint32_t *)self + 8) = v21 + 12;
    goto LABEL_37;
  }
  if ( v15 <= a6 - (char *)result )
  {
    if ( v15 != 1 )
    {
      memcpy(result, a6, v15);
      result = *((vox::VoxFolderArchive::Self **)self + 8);
      goto LABEL_259;
    }
  }
  else
  {
    if ( a6 == (char *)result )
      goto LABEL_259;
    if ( v15 != 1 )
    {
      memmove(result, a6, v15);
      result = *((vox::VoxFolderArchive::Self **)self + 8);
      goto LABEL_259;
    }
  }
  *(uint8_t *)result = *a6;
  result = *((vox::VoxFolderArchive::Self **)self + 8);
LABEL_259:
  if ( (uint32_t *)((char *)result - 12) != (uint32_t *)(g4_empty_string_rep) )
  {
    *((uint32_t *)result - 1) = 0;
    *((uint32_t *)result - 3) = v15;
    *((uint8_t *)result + v15) = 0;
  }
LABEL_40:
  *((uint8_t *)self + 36) = a5;
  if ( a4 == nullptr || a3 == 0 || s == nullptr )
    return result;
  if ( a3 > 0x15555555 )
    sub_1900180("vector::reserve");
  v23 = *((uint32_t **)self + 4);
  if ( a3 > -1431655765 * ((*((uint32_t *)self + 6) - (int)(uintptr_t)(v23)) >> 2) )
  {
    v24 = *((uint32_t **)self + 5);
    v158 = -1431655765 * (v24 - v23);
    v25 = (uint32_t *)VoxAllocInternal(
                      12 * a3,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
    for ( i = v25; v24 != v23; v25 += 3 )
    {
      if ( v25 != nullptr )
      {
        *v25 = *v23;
        v25[1] = v23[1];
        v25[2] = v23[2];
      }
      v23 += 3;
    }
    v27 = self;
    v28 = *((void **)self + 4);
    if ( v28 != nullptr )
    {
      v151 = i;
      VoxFreeInternal(v28);
      i = v151;
      v27 = self;
    }
    *((uint32_t *)v27 + 4) = (uint32_t)(uintptr_t)(i);
    *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&i[3 * v158]);
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&i[3 * a3]);
  }
  v29 = strlen(s);
  if ( s == &s[v29] )
  {
    dest = (char *)(byte_20E1FB4);
    goto LABEL_62;
  }
  v30 = v29;
  if ( v29 > 0x3FFFFFFC )
    goto LABEL_301;
  if ( v29 + 29 > 0x1000 && v29 != 0 )
  {
    v31 = v29 + 4096 - (((uint16_t)v29 + 29) & 0xFFF);
    v32 = 1073741820;
    if ( v31 <= 0x3FFFFFFC )
      v32 = v31;
    v147 = (void *)v32;
    v33 = VoxAllocInternal(v32 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    *(uint32_t *)(v33 + 4) = (uint32_t)(uintptr_t)(v147);
    *(uint32_t *)(v33 + 8) = 0;
    dest = (char *)(v33 + 12);
    goto LABEL_59;
  }
  v33 = VoxAllocInternal(v29 + 13, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  *(uint32_t *)(v33 + 4) = v30;
  *(uint32_t *)(v33 + 8) = 0;
  dest = (char *)(v33 + 12);
  if ( v30 != 1 )
  {
LABEL_59:
    memcpy(dest, s, v30);
    goto LABEL_60;
  }
  *(uint8_t *)(v33 + 12) = *s;
LABEL_60:
  if ( (uint32_t *)v33 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
  {
    *(uint32_t *)(v33 + 8) = 0;
    *(uint32_t *)v33 = v30;
    dest[v30] = 0;
  }
LABEL_62:
  v34 = dest;
  v35 = *((uint32_t *)dest - 3);
  if ( v35 == 0 )
    goto LABEL_63;
  v128 = *((uint32_t *)dest - 1);
  if ( v128 < 0
    || dest - 12 == (char *)g4_empty_string_rep )
  {
    v42 = *((uint32_t *)dest - 3);
    v137 = dest;
  }
  else
  {
    if ( v128 != 0 )
    {
      v129 = *((uint32_t *)dest - 2);
      if ( v35 > 0x3FFFFFFC )
        goto LABEL_301;
      v130 = *((uint32_t *)dest - 3);
      if ( v35 > v129 )
      {
        v130 = 2 * v129;
        if ( 2 * v129 < v35 )
          v130 = *((uint32_t *)dest - 3);
      }
      if ( v130 + 29 > 0x1000 && v129 < v130 )
      {
        v131 = v130 + 4096 - (((uint16_t)v130 + 29) & 0xFFF);
        v130 = 1073741820;
        if ( v131 <= 0x3FFFFFFC )
          v130 = v131;
      }
      v132 = VoxAllocInternal(
               v130 + 13,
               0,
               (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
               (int)(uintptr_t)("internal_new"),
               181);
      *(uint32_t *)(v132 + 4) = v130;
      *(uint32_t *)(v132 + 8) = 0;
      v133 = v132;
      v134 = (char *)(v132 + 12);
      v135 = dest - 12;
      if ( v35 == 1 )
      {
        v136 = (volatile int32_t *)dest;
        *(uint8_t *)(v132 + 12) = *dest;
      }
      else
      {
        memcpy((void *)(v132 + 12), dest, v35);
        v135 = dest - 12;
        v136 = (volatile int32_t *)dest;
      }
      if ( __sync_fetch_and_add(v136 - 1, 0xFFFFFFFF) <= 0 )
        VoxFreeInternal(v135);
      if ( (uint32_t *)v133 == (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
      {
        dest = v134;
      }
      else
      {
        *(uint32_t *)(v133 + 8) = 0;
        *(uint32_t *)v133 = v35;
        dest = v134;
        *(uint8_t *)(v133 + v35 + 12) = 0;
      }
    }
    v137 = dest;
    *((uint32_t *)dest - 1) = -1;
    v42 = *((uint32_t *)dest - 3);
  }
  v138 = v137[v35 - 1];
  if ( v138 != 92 && v138 != 47 )
  {
    v35 = v42;
    v34 = dest;
LABEL_63:
    v36 = v35 + 1;
    v37 = *((uint32_t *)v34 - 2);
    if ( v35 + 1 <= v37 && *((int *)v34 - 1) <= 0 )
    {
LABEL_73:
      dest[v35] = 47;
      if ( dest - 12 != (char *)g4_empty_string_rep )
      {
        *((uint32_t *)dest - 3) = v36;
        *((uint32_t *)dest - 1) = 0;
        dest[v36] = 0;
      }
      v42 = *((uint32_t *)dest - 3);
      goto LABEL_76;
    }
    if ( v36 >= v35 )
      ++v35;
    if ( v35 <= 0x3FFFFFFC )
    {
      v38 = v35 + 13;
      if ( v37 < v35 )
      {
        if ( v35 < 2 * v37 )
          v35 = 2 * v37;
        if ( v35 + 29 > 0x1000 && v37 < v35 )
        {
          v144 = v35 + 4096 - (((uint16_t)v35 + 29) & 0xFFF);
          v35 = 1073741820;
          if ( v144 <= 0x3FFFFFFC )
            v35 = v144;
        }
        v38 = v35 + 13;
      }
      v39 = VoxAllocInternal(v38, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      *(uint32_t *)(v39 + 4) = v35;
      *(uint32_t *)(v39 + 8) = 0;
      v40 = 0;
      v41 = *((uint32_t *)dest - 3);
      if ( v41 != 0 )
      {
        if ( v41 == 1 )
          *(uint8_t *)(v39 + 12) = *dest;
        else
          memcpy((void *)(v39 + 12), dest, v41);
        v40 = *((uint32_t *)dest - 3);
      }
      if ( (uint32_t *)v39 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
      {
        *(uint32_t *)(v39 + 8) = 0;
        *(uint32_t *)v39 = v40;
        *(uint8_t *)(v39 + v40 + 12) = 0;
      }
      if ( dest - 12 != (char *)g4_empty_string_rep
        && __sync_fetch_and_add((volatile int32_t *)dest - 1, 0xFFFFFFFF) <= 0 )
      {
        VoxFreeInternal(dest - 12);
      }
      v35 = *(uint32_t *)v39;
      dest = (char *)(v39 + 12);
      goto LABEL_73;
    }
LABEL_301:
    sub_1900180("basic_string::_S_create");
  }
LABEL_76:
  v43 = 0;
  v44 = a3 * (v42 + 1);
  do
  {
    if ( a4[v43] != nullptr )
      v44 += strlen(a4[v43]);
    ++v43;
  }
  while ( (int)a3 > v43 );
  v45 = *((uint8_t **)self + 1);
  if ( v44 > *((uint32_t *)self + 3) - (int)(uintptr_t)(v45) )
  {
    v139 = *((uint8_t **)self + 2);
    v164 = v139 - v45;
    v140 = (uint8_t *)VoxAllocInternal(
                      v44,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
    for ( j = v140; v45 != v139; ++v140 )
    {
      if ( v140 != nullptr )
        *v140 = *v45;
      ++v45;
    }
    v142 = self;
    v143 = *((void **)self + 1);
    if ( v143 != nullptr )
    {
      v153 = j;
      VoxFreeInternal(v143);
      j = v153;
      v142 = self;
    }
    *((uint32_t *)v142 + 1) = (uint32_t)(uintptr_t)(j);
    *((uint32_t *)v142 + 2) = (uint32_t)(uintptr_t)(&j[v164]);
    *((uint32_t *)v142 + 3) = (uint32_t)(uintptr_t)(&j[v44]);
  }
  for ( k = 0; k < (int)a3; ++k )
  {
    if ( a4[k] == nullptr )
      continue;
    v46 = strlen(a4[k]);
    v185 = *((uint32_t *)self + 1);
    v47 = dest;
    v186 = *((uint32_t *)self + 2);
    v48 = *((uint32_t *)dest - 1);
    if ( v48 >= 0 )
    {
      if ( dest - 12 == (char *)g4_empty_string_rep )
      {
        v47 = dest;
      }
      else
      {
        if ( v48 != 0 )
        {
          v49 = *((uint32_t *)dest - 3);
          v50 = *((uint32_t *)dest - 2);
          if ( v49 > 0x3FFFFFFC )
            goto LABEL_301;
          v51 = *((uint32_t *)dest - 3);
          if ( v49 > v50 )
          {
            v51 = 2 * v50;
            if ( 2 * v50 < v49 )
              v51 = *((uint32_t *)dest - 3);
          }
          if ( v51 + 29 > 0x1000 && v50 < v51 )
          {
            v52 = v51 + 4096 - (((uint16_t)v51 + 29) & 0xFFF);
            v51 = 1073741820;
            if ( v52 <= 0x3FFFFFFC )
              v51 = v52;
          }
          v148 = (void *)v51;
          v53 = VoxAllocInternal(
                  v51 + 13,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
          *(uint32_t *)(v53 + 4) = (uint32_t)(uintptr_t)(v148);
          v54 = v53;
          *(uint32_t *)(v53 + 8) = 0;
          v165 = (void *)(v53 + 12);
          if ( v49 != 0 )
          {
            if ( v49 == 1 )
            {
              *(uint8_t *)(v53 + 12) = *dest;
            }
            else
            {
              v154 = v53;
              memcpy(v165, dest, v49);
              v54 = v154;
            }
          }
          if ( __sync_fetch_and_add((volatile int32_t *)dest - 1, 0xFFFFFFFF) <= 0 )
          {
            v157 = v54;
            VoxFreeInternal(dest - 12);
            v54 = v157;
          }
          dest = (char *)v165;
          if ( (uint32_t *)v54 != (uint32_t *)(uintptr_t)(g4_empty_string_rep) )
          {
            *(uint32_t *)(v54 + 8) = 0;
            *(uint32_t *)v54 = v49;
            *(uint8_t *)(v54 + v49 + 12) = 0;
          }
        }
        v47 = dest;
        *((uint32_t *)dest - 1) = -1;
      }
    }
    g4_std_compat::vector_insert(
      (int)(uintptr_t)(self) + 4,
      *((void **)self + 2),
      dest,
      (int)(uintptr_t)(&v47[*((uint32_t *)v47 - 3)]));
    g4_std::vector_char_vox_SAllocator_char_95e632::M_range_insert_char_const_552bf1(
      (int)(uintptr_t)(self) + 4,
      *((void **)self + 2),
      (void *)a4[k],
      (int)(uintptr_t)(&a4[k][v46]));
    v55 = *((uint8_t **)self + 2);
    if ( v55 == *((uint8_t **)self + 3) )
    {
      v100 = (unsigned int)(uintptr_t)(&v55[-*((uint32_t *)self + 1)]);
      if ( v100 == -1 )
        sub_1900180("vector::_M_insert_aux");
      v173 = 1;
      if ( v100 != 0 )
      {
        v145 = 2 * v100;
        if ( v100 > 2 * v100 )
          v145 = 0xFFFFFFFF;
        v173 = v145;
        v101 = VoxAllocInternal(v145, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      }
      else
      {
        v101 = VoxAllocInternal(1u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      }
      v162 = v101;
      v168 = v101 + 1;
      v102 = (uint8_t *)(v100 + v101);
      if ( v102 != nullptr )
        *v102 = 0;
      v103 = self;
      v104 = *((uint8_t **)self + 1);
      if ( v55 != v104 )
      {
        v105 = *((uint8_t **)self + 1);
        v106 = (uint8_t *)v162;
        do
        {
          if ( v106 != nullptr )
            *v106 = *v105;
          ++v105;
          ++v106;
        }
        while ( v105 != v55 );
        v103 = self;
        v168 = v162 + v55 - v104 + 1;
      }
      v107 = *((uint8_t **)v103 + 2);
      if ( v55 != v107 )
      {
        v108 = v55;
        v109 = (uint8_t *)v168;
        do
        {
          if ( v109 != nullptr )
            *v109 = *v108;
          ++v108;
          ++v109;
        }
        while ( v108 != v107 );
        v168 += v108 - v55;
      }
      if ( *((uint32_t *)self + 1) != 0 )
        VoxFreeInternal(*((void **)self + 1));
      *((uint32_t *)self + 1) = v162;
      *((uint32_t *)self + 2) = v168;
      *((uint32_t *)self + 3) = v173 + v162;
    }
    else
    {
      v56 = 0;
      if ( v55 != nullptr )
      {
        *v55 = 0;
        v56 = *((uint32_t *)self + 2);
      }
      *((uint32_t *)self + 2) = v56 + 1;
    }
    FilenameWithoutPath = (vox::VoxFolderArchive::Self *)a4[k];
    if ( *((uint8_t *)self + 36) != 0 )
    {
      v181 = v46;
      v57 = v46;
      v58 = v46;
    }
    else
    {
      FilenameWithoutPath = vox::VoxFolderArchive::getFilenameWithoutPath((vox::VoxFolderArchive::Self *)a4[k]);
      v58 = strlen((const char *)FilenameWithoutPath);
      v181 = v58;
      v57 = v58;
    }
    v59 = v57 ^ 0x1A7DAF1C;
    v159 = v58 ^ 0x12B9B0A1;
    if ( v181 > 3 )
    {
      v171 = v181;
      v60 = FilenameWithoutPath;
      do
      {
        v61 = *((uint8_t *)v60 + 1);
        v62 = *((uint8_t *)v60 + 3);
        v63 = v61 + 32;
        v179 = v61 << 8;
        v64 = *((uint8_t *)v60 + 2);
        v65 = v63 << 8;
        v180 = v64 << 16;
        v175 = (v64 + 32) << 16;
        v66 = (v62 + 32) << 24;
        v67 = *(uint8_t *)v60 + 32;
        if ( (uint8_t)(*(uint8_t *)v60 - 65) > 0x19u )
          v67 = *(uint8_t *)v60;
        if ( (uint8_t)(*((uint8_t *)v60 + 1) - 65) > 0x19u )
          v65 = v179;
        v68 = v67 + v65;
        v69 = v175;
        if ( (uint8_t)(*((uint8_t *)v60 + 2) - 65) > 0x19u )
          v69 = v180;
        v70 = v69 + v68;
        v71 = *((uint8_t *)v60 + 3);
        v60 = (vox::VoxFolderArchive::Self *)((char *)v60 + 4);
        if ( (uint8_t)(v71 - 65) > 0x19u )
          v66 = v62 << 24;
        v171 -= 4;
        v72 = 1540483477 * ((1540483477 * (v66 + v70)) ^ ((unsigned int)(1540483477 * (v66 + v70)) >> 24));
        v59 = v72 ^ (1540483477 * v59);
        v159 = v72 ^ (1540483477 * v159);
      }
      while ( v171 > 3 );
      v73 = (unsigned int)(v181 - 4) >> 2;
      FilenameWithoutPath = (vox::VoxFolderArchive::Self *)((char *)FilenameWithoutPath + 4 * v73 + 4);
      v181 = v181 - 4 - 4 * v73;
    }
    switch ( v181 )
    {
      case 2:
        goto LABEL_152;
      case 3:
        v94 = *((uint8_t *)FilenameWithoutPath + 2);
        if ( (uint8_t)(v94 - 65) > 0x19u )
          v95 = v94 << 16;
        else
          v95 = (v94 + 32) << 16;
        v59 ^= v95;
        v159 ^= v95;
LABEL_152:
        v96 = *((uint8_t *)FilenameWithoutPath + 1);
        if ( (uint8_t)(v96 - 65) > 0x19u )
          v97 = v96 << 8;
        else
          v97 = (v96 + 32) << 8;
        v59 ^= v97;
        v159 ^= v97;
LABEL_155:
        v98 = *(uint8_t *)FilenameWithoutPath;
        v99 = (uint8_t)v98 ^ v59;
        if ( (uint8_t)(*(uint8_t *)FilenameWithoutPath - 65) <= 0x19u )
        {
          v98 = (uint8_t)v98 + 32;
          v99 = v98 ^ v59;
        }
        v59 = 1540483477 * v99;
        v159 = 1540483477 * (v159 ^ v98);
        break;
      case 1:
        goto LABEL_155;
      default:
        break;
    }
    v74 = *((unsigned int **)self + 5);
    v75 = (1540483477 * (v59 ^ (v59 >> 13))) ^ ((1540483477 * (v59 ^ (v59 >> 13))) >> 15);
    v76 = (1540483477 * (v159 ^ (v159 >> 13))) ^ ((1540483477 * (v159 ^ (v159 >> 13))) >> 15);
    if ( v74 == *((unsigned int **)self + 6) )
    {
      v110 = ((int)(uintptr_t)(v74) - *((uint32_t *)self + 4)) >> 2;
      v163 = 12;
      v111 = -1431655765 * v110;
      if ( -1431655765 * v110 != 0 )
      {
        v146 = 1431655766 * v110;
        if ( v111 > 2 * v111 || v146 > 0x15555555 )
          v163 = -4;
        else
          v163 = 24 * v111;
      }
      v152 = v111;
      v169 = VoxAllocInternal(v163, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      v174 = v169 + 12;
      v112 = (unsigned int *)(v169 + 12 * v152);
      if ( v112 != nullptr )
      {
        *v112 = v75;
        v112[1] = v76;
        v112[2] = v186 - v185;
      }
      v113 = self;
      v114 = *((unsigned int **)self + 4);
      if ( v74 != v114 )
      {
        v115 = *((unsigned int **)self + 4);
        v116 = (uint32_t *)v169;
        do
        {
          if ( v116 != nullptr )
          {
            *v116 = *v115;
            v116[1] = v115[1];
            v116[2] = v115[2];
          }
          v115 += 3;
          v116 += 3;
        }
        while ( v74 != v115 );
        v113 = self;
        v174 = v169 + 4 * ((unsigned int)((char *)v74 - (char *)(v114 + 3)) >> 2) + 24;
      }
      v117 = *((unsigned int **)v113 + 5);
      if ( v74 != v117 )
      {
        v118 = v74;
        v119 = (uint32_t *)v174;
        do
        {
          if ( v119 != nullptr )
          {
            *v119 = *v118;
            v119[1] = v118[1];
            v119[2] = v118[2];
          }
          v118 += 3;
          v119 += 3;
        }
        while ( v117 != v118 );
        v113 = self;
        v174 += 4 * ((unsigned int)((char *)v117 - (char *)(v74 + 3)) >> 2) + 12;
      }
      if ( *((uint32_t *)v113 + 4) != 0 )
        VoxFreeInternal(*((void **)v113 + 4));
      *((uint32_t *)self + 4) = v169;
      *((uint32_t *)self + 5) = v174;
      *((uint32_t *)self + 6) = v163 + v169;
    }
    else
    {
      v77 = 0;
      if ( v74 != nullptr )
      {
        *v74 = v75;
        v74[1] = v76;
        v74[2] = v186 - v185;
        v77 = *((uint32_t *)self + 5);
      }
      *((uint32_t *)self + 5) = v77 + 12;
    }
  }
  v78 = *((uint32_t *)self + 5);
  v79 = *((unsigned int **)self + 4);
  v172 = v78;
  src = v79;
  if ( (unsigned int *)v78 == v79 )
    goto LABEL_159;
  v80 = v78 - (uint32_t)(uintptr_t)(v79);
  {
    uint32_t v78_bsr = 0;
    _BitScanReverse(&v78_bsr, -1431655765 * ((int)(v78 - (uint32_t)(uintptr_t)(v79)) >> 2));
    v78 = v78_bsr;
  }
  g4_std::introsort_loop_gnu_cxx_normal_iterator_4ed53e(
    v79,
    v172,
    2 * (31 - (v78 ^ 0x1F)));
  if ( v80 <= 203 )
  {
    v120 = src + 3;
    if ( (unsigned int *)v172 == src + 3 )
      goto LABEL_159;
    while ( 1 )
    {
      v124 = *v120;
      v125 = v120;
      if ( *v120 < *src )
        break;
      v170 = v120[1];
      if ( *v120 <= *src && src[1] > v120[1] )
        goto LABEL_210;
      v177 = v120[2];
      for ( m = v120 - 3; ; m -= 3 )
      {
        v127 = m;
        if ( v124 >= *m && (v124 > *m || v170 >= m[1]) )
          break;
        *v125 = *m;
        v125[1] = m[1];
        v125[2] = m[2];
        v125 = v127;
      }
      *v125 = v124;
      v125[1] = v170;
      v125[2] = v177;
      v122 = v120 + 3;
LABEL_213:
      v120 = v122;
      if ( (unsigned int *)v172 == v122 )
        goto LABEL_159;
    }
    v170 = v120[1];
LABEL_210:
    v121 = (void *)v120[2];
    v122 = v120 + 3;
    v123 = v120 - src;
    if ( -1431655765 * v123 != 0 )
    {
      v150 = v121;
      memmove(&v122[-v123], src, 4 * v123);
      v121 = v150;
    }
    *src = v124;
    src[1] = v170;
    src[2] = (unsigned int)(uintptr_t)(v121);
    goto LABEL_213;
  }
  v81 = src + 3;
  v176 = src + 48;
  do
  {
    while ( 1 )
    {
      v85 = *v81;
      v86 = v81;
      if ( *v81 < *src )
      {
        v166 = v81[1];
        break;
      }
      v166 = v81[1];
      if ( *v81 <= *src && src[1] > v81[1] )
        break;
      v178 = v81[2];
      for ( ii = v81 - 3; ; ii -= 3 )
      {
        v88 = ii;
        if ( v85 >= *ii && (v85 > *ii || v166 >= ii[1]) )
          break;
        *v86 = *ii;
        v86[1] = ii[1];
        v86[2] = ii[2];
        v86 = v88;
      }
      v83 = v81 + 3;
      v89 = v81 + 3 == v176;
      *v86 = v85;
      v86[1] = v166;
      v86[2] = v178;
      v81 += 3;
      if ( v89 )
        goto LABEL_140;
    }
    v82 = (void *)v81[2];
    v83 = v81 + 3;
    v84 = v81 - src;
    if ( -1431655765 * v84 != 0 )
    {
      v149 = v82;
      memmove(&v83[-v84], src, 4 * v84);
      v82 = v149;
    }
    v81 = v83;
    *src = v85;
    src[1] = v166;
    src[2] = (unsigned int)(uintptr_t)(v82);
  }
  while ( v83 != v176 );
LABEL_140:
  if ( (unsigned int *)v172 != v83 )
  {
    do
    {
      v167 = v81[2];
      v90 = v81;
      v91 = *v81;
      v161 = v81[1];
      for ( jj = v81 - 3; ; jj -= 3 )
      {
        v93 = jj;
        if ( v91 >= *jj && (v91 > *jj || v161 >= jj[1]) )
          break;
        *v90 = *jj;
        v90[1] = jj[1];
        v90[2] = jj[2];
        v90 = v93;
      }
      v81 += 3;
      *v90 = v91;
      v90[1] = v161;
      v90[2] = v167;
    }
    while ( (unsigned int *)v172 != v81 );
  }
LABEL_159:
  result = (vox::VoxFolderArchive::Self *)(dest - 12);
  if ( dest - 12 != (char *)g4_empty_string_rep
    && __sync_fetch_and_add((volatile int32_t *)dest - 1, 0xFFFFFFFF) <= 0 )
  {
    return (vox::VoxFolderArchive::Self *)VoxFreeInternal(result);
  }
  return result;
}


