#include "Core/Utils/DecompTypes.h"
#include "glf_CrcChecker.h"

// ----------------------------------------------------------------------------
// Function: glf::CrcChecker::CRC32  (binary VA: 0xccb6d0)
// Original: glf::CrcChecker::CRC32
// ----------------------------------------------------------------------------
int glf::CrcChecker::CRC32(glf::CrcChecker::Self *self, const void *a2, int a3)
{
  return crc32(a3, self, a2);
}

// ----------------------------------------------------------------------------
// Function: glf::CrcChecker::HasFileEntry  (binary VA: 0xccb710)
// Original: glf::CrcChecker::HasFileEntry
// ----------------------------------------------------------------------------
int glf::CrcChecker::HasFileEntry(glf::CrcChecker::Self *self)
{
  int v1;
  size_t v2;
  size_t v3;
  size_t v4;
  int v5;
  int v6;
  size_t v7;
  size_t v8;
  int v9;
  int result;
  typedef size_t _g4_t_v11;
  typedef uint8_t _g4_t_v12;
  typedef void *_g4_t_v13;
  typedef char *_g4_t_v14;
  typedef uint16_t _g4_t_v15[15];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (30u + sizeof(_g4_t_v15)) > _g4_s4 ? (30u + sizeof(_g4_t_v15)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 30u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15[1]), (char *)self, (int)(uintptr_t)(v15));
  v1 = (int)(uintptr_t)((*(uint8_t **)unk_20DF738));
  if ( (*(uint8_t **)unk_20DF738) == 0 )
  {
    v14 = *(char **)&v15[1];
LABEL_19:
    result = 0;
    goto LABEL_16;
  }
  v14 = *(char **)&v15[1];
  v2 = *(uint32_t *)(*(uint32_t *)&v15[1] - 12);
  v13 = &unk_20DF734;
  do
  {
    while ( 1 )
    {
      v3 = *(uint32_t *)(*(uint32_t *)(v1 + 16) - 12);
      v4 = v3;
      v11 = v2;
      if ( v2 <= v3 )
        v4 = v2;
      v5 = memcmp(*(const void **)(v1 + 16), v14, v4);
      v2 = v11;
      v6 = v3 - v11;
      if ( v5 == 0 )
        v5 = v6;
      if ( v5 < 0 )
        break;
      v13 = (void *)v1;
      v1 = *(uint32_t *)(v1 + 8);
      if ( v1 == 0 )
        goto LABEL_10;
    }
    v1 = *(uint32_t *)(v1 + 12);
  }
  while ( v1 != 0 );
LABEL_10:
  if ( v13 == &unk_20DF734 )
    goto LABEL_19;
  v7 = *(uint32_t *)(*((uint32_t *)v13 + 4) - 12);
  v8 = v7;
  if ( v11 <= v7 )
    v8 = v11;
  v9 = memcmp(v14, *((const void **)v13 + 4), v8);
  result = 1;
  if ( v9 == 0 )
    v9 = v11 - v7;
  if ( v9 < 0 )
    goto LABEL_19;
LABEL_16:
  if ( v14 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v14 - 1, 0xFFFFFFFF) <= 0 )
  {
    v12 = result;
    g4_std::string::Rep::M_destroy(v14 - 12);
    return v12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::CrcChecker::DoCrcCheck  (binary VA: 0xccb860)
// Original: glf::CrcChecker::DoCrcCheck
// ----------------------------------------------------------------------------
bool glf::CrcChecker::DoCrcCheck(glf::CrcChecker::Self *self, glf::CrcChecker::Self *a2, void *a3)
{
  int v3;
  size_t v4;
  size_t v5;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  bool result;
  int v13;
  typedef size_t _g4_t_v14;
  typedef void *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef uint16_t _g4_t_v17[15];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v17)) > _g4_s3 ? (30u + sizeof(_g4_t_v17)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 30u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17[1]), (char *)self, (int)(uintptr_t)(v17));
  v3 = (int)(uintptr_t)((*(uint8_t **)unk_20DF738));
  v16 = *(char **)&v17[1];
  if ( (*(uint8_t **)unk_20DF738) == 0 )
    goto LABEL_20;
  v4 = *(uint32_t *)(*(uint32_t *)&v17[1] - 12);
  v15 = &unk_20DF734;
  do
  {
    while ( 1 )
    {
      v5 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
      v6 = v5;
      v14 = v4;
      if ( v4 <= v5 )
        v6 = v4;
      v7 = memcmp(*(const void **)(v3 + 16), v16, v6);
      v4 = v14;
      v8 = v5 - v14;
      if ( v7 == 0 )
        v7 = v8;
      if ( v7 < 0 )
        break;
      v15 = (void *)v3;
      v3 = *(uint32_t *)(v3 + 8);
      if ( v3 == 0 )
        goto LABEL_10;
    }
    v3 = *(uint32_t *)(v3 + 12);
  }
  while ( v3 != 0 );
LABEL_10:
  if ( v15 == &unk_20DF734 )
    goto LABEL_20;
  v9 = *(uint32_t *)(*((uint32_t *)v15 + 4) - 12);
  v10 = v9;
  if ( v14 <= v9 )
    v10 = v14;
  v11 = memcmp(v16, *((const void **)v15 + 4), v10);
  if ( v11 == 0 )
    v11 = v14 - v9;
  if ( v11 < 0 )
LABEL_20:
    v15 = &unk_20DF734;
  if ( v16 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v16 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v16 - 12);
  result = true;
  if ( v15 != &unk_20DF734 )
  {
    v13 = *((uint32_t *)v15 + 5);
    return glf::CrcChecker::CRC32(a2, a3, 0) == v13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::CrcChecker::SetFileEntry  (binary VA: 0xccb9e0)
// Original: glf::CrcChecker::SetFileEntry
// ----------------------------------------------------------------------------
const char * glf::CrcChecker::SetFileEntry(glf::CrcChecker::Self *self, const char *a2, char a3)
{
  int v3;
  size_t v4;
  size_t v5;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  const char *result;
  typedef size_t _g4_t_v13;
  typedef void *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef uint16_t _g4_t_v16[15];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v16)) > _g4_s3 ? (30u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 30u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16[1]), (char *)self, (int)(uintptr_t)(v16));
  v3 = (int)(uintptr_t)((*(uint8_t **)unk_20DF738));
  if ( (*(uint8_t **)unk_20DF738) == 0 )
  {
    v15 = *(char **)&v16[1];
LABEL_21:
    v14 = &unk_20DF734;
    goto LABEL_16;
  }
  v15 = *(char **)&v16[1];
  v4 = *(uint32_t *)(*(uint32_t *)&v16[1] - 12);
  v14 = &unk_20DF734;
  do
  {
    while ( 1 )
    {
      v5 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
      v6 = v5;
      v13 = v4;
      if ( v4 <= v5 )
        v6 = v4;
      v7 = memcmp(*(const void **)(v3 + 16), v15, v6);
      v4 = v13;
      v8 = v5 - v13;
      if ( v7 == 0 )
        v7 = v8;
      if ( v7 < 0 )
        break;
      v14 = (void *)v3;
      v3 = *(uint32_t *)(v3 + 8);
      if ( v3 == 0 )
        goto LABEL_10;
    }
    v3 = *(uint32_t *)(v3 + 12);
  }
  while ( v3 != 0 );
LABEL_10:
  if ( v14 == &unk_20DF734 )
    goto LABEL_21;
  v9 = *(uint32_t *)(*((uint32_t *)v14 + 4) - 12);
  v10 = v9;
  if ( v13 <= v9 )
    v10 = v13;
  v11 = memcmp(v15, *((const void **)v14 + 4), v10);
  if ( v11 == 0 )
    v11 = v13 - v9;
  if ( v11 < 0 )
    goto LABEL_21;
LABEL_16:
  if ( v15 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v15 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v15 - 12);
  result = (const char *)&unk_20DF734;
  if ( v14 != &unk_20DF734 )
  {
    result = a2;
    *((uint32_t *)v14 + 5) = (uint32_t)(uintptr_t)(a2);
    *((uint8_t *)v14 + 24) = a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::CrcChecker::AddFileEntry  (binary VA: 0xccbb50)
// Original: glf::CrcChecker::AddFileEntry
// ----------------------------------------------------------------------------
char * glf::CrcChecker::AddFileEntry(glf::CrcChecker::Self *self, const char *a2, char a3)
{
  char *v3;
  size_t v4;
  size_t v5;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  char *result;
  char *v13;
  size_t v14;
  size_t v15;
  size_t v16;
  int v17;
  int v18;
  size_t v19;
  size_t v20;
  int v21;
  uint32_t *v22;
  size_t v23;
  int v24;
  uint32_t *v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  uint32_t *v29;
  size_t v30;
  int v31;
  int v32;
  int v33;
  uint32_t *v34;
  size_t v35;
  size_t v36;
  int v37;
  int v38;
  int v39;
  int v40;
  uint32_t *v41;
  size_t v42;
  int v43;
  int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  uint32_t *v52;
  size_t v53;
  size_t v54;
  int v55;
  int v56;
  int v57;
  typedef size_t _g4_t_v58;
  typedef size_t _g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef char *_g4_t_v67;
  typedef void *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef char *_g4_t_v70;
  typedef size_t _g4_t_v71;
  typedef size_t _g4_t_v72;
  typedef char *_g4_t_v73;
  typedef char *_g4_t_v74;
  typedef size_t _g4_t_v75;
  typedef size_t _g4_t_v76;
  typedef char *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79[4];
  typedef int _g4_t_v80[2];
  typedef const char *_g4_t_v81;
  typedef char _g4_t_v82;
  typedef uint32_t *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v58)) > _g4_s0 ? (8u + sizeof(_g4_t_v58)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v59)) > _g4_s1 ? (8u + sizeof(_g4_t_v59)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v60)) > _g4_s2 ? (8u + sizeof(_g4_t_v60)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v61)) > _g4_s3 ? (8u + sizeof(_g4_t_v61)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v62)) > _g4_s4 ? (12u + sizeof(_g4_t_v62)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v63)) > _g4_s5 ? (12u + sizeof(_g4_t_v63)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v64)) > _g4_s6 ? (12u + sizeof(_g4_t_v64)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v65)) > _g4_s7 ? (20u + sizeof(_g4_t_v65)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v66)) > _g4_s8 ? (20u + sizeof(_g4_t_v66)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v67)) > _g4_s9 ? (24u + sizeof(_g4_t_v67)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v68)) > _g4_s10 ? (32u + sizeof(_g4_t_v68)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v69)) > _g4_s11 ? (32u + sizeof(_g4_t_v69)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v70)) > _g4_s12 ? (36u + sizeof(_g4_t_v70)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v71)) > _g4_s13 ? (36u + sizeof(_g4_t_v71)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v72)) > _g4_s14 ? (36u + sizeof(_g4_t_v72)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v73)) > _g4_s15 ? (40u + sizeof(_g4_t_v73)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v74)) > _g4_s16 ? (40u + sizeof(_g4_t_v74)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v75)) > _g4_s17 ? (40u + sizeof(_g4_t_v75)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v76)) > _g4_s18 ? (40u + sizeof(_g4_t_v76)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v77)) > _g4_s19 ? (44u + sizeof(_g4_t_v77)) : _g4_s19,
    _g4_s21 = (63u + sizeof(_g4_t_v78)) > _g4_s20 ? (63u + sizeof(_g4_t_v78)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v79)) > _g4_s21 ? (68u + sizeof(_g4_t_v79)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v80)) > _g4_s22 ? (84u + sizeof(_g4_t_v80)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v81)) > _g4_s23 ? (92u + sizeof(_g4_t_v81)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v82)) > _g4_s24 ? (96u + sizeof(_g4_t_v82)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v83)) > _g4_s25 ? (100u + sizeof(_g4_t_v83)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v84)) > _g4_s26 ? (104u + sizeof(_g4_t_v84)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v85)) > _g4_s27 ? (108u + sizeof(_g4_t_v85)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 8u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 12u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 20u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 20u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 24u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 36u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 40u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 40u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 40u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 44u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 63u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 68u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 84u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 92u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 96u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 100u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 104u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 108u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v79), (char *)self, (int)(uintptr_t)(&v78));
  v3 = (char *)(*(uint8_t **)unk_20DF738);
  if ( (*(uint8_t **)unk_20DF738) == 0 )
  {
    v73 = (char *)v79[0];
LABEL_20:
    v70 = (char *)&unk_20DF734;
    goto LABEL_16;
  }
  v73 = (char *)v79[0];
  v70 = (char *)&unk_20DF734;
  v4 = *(uint32_t *)(v79[0] - 12);
  do
  {
    while ( 1 )
    {
      v5 = *(uint32_t *)(*((uint32_t *)v3 + 4) - 12);
      v6 = v5;
      v58 = v4;
      if ( v4 <= v5 )
        v6 = v4;
      v7 = memcmp(*((const void **)v3 + 4), v73, v6);
      v4 = v58;
      v8 = v5 - v58;
      if ( v7 == 0 )
        v7 = v8;
      if ( v7 < 0 )
        break;
      v70 = v3;
      v3 = *((char **)v3 + 2);
      if ( v3 == nullptr )
        goto LABEL_10;
    }
    v3 = *((char **)v3 + 3);
  }
  while ( v3 != nullptr );
LABEL_10:
  if ( v70 == (char *)&unk_20DF734 )
    goto LABEL_20;
  v9 = *(uint32_t *)(*((uint32_t *)v70 + 4) - 12);
  v10 = v9;
  if ( v58 <= v9 )
    v10 = v58;
  v11 = memcmp(v73, *((const void **)v70 + 4), v10);
  if ( v11 == 0 )
    v11 = v58 - v9;
  if ( v11 < 0 )
    goto LABEL_20;
LABEL_16:
  if ( v73 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v73 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v73 - 12);
  result = (char *)&unk_20DF734;
  if ( v70 == (char *)&unk_20DF734 )
  {
    v81 = a2;
    v82 = a3;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v80), (char *)self, (int)(uintptr_t)(&v78) + 1);
    v13 = (char *)(*(uint8_t **)unk_20DF738);
    if ( (*(uint8_t **)unk_20DF738) == 0 )
      goto LABEL_40;
    v74 = (char *)v80[0];
    v14 = *(uint32_t *)(v80[0] - 12);
    do
    {
      v15 = *(uint32_t *)(*((uint32_t *)v13 + 4) - 12);
      v16 = v15;
      v59 = v14;
      if ( v14 <= v15 )
        v16 = v14;
      v17 = memcmp(*((const void **)v13 + 4), v74, v16);
      v14 = v59;
      v18 = v15 - v59;
      if ( v17 == 0 )
        v17 = v18;
      if ( v17 >= 0 )
      {
        v70 = v13;
        v13 = *((char **)v13 + 2);
      }
      else
      {
        v13 = *((char **)v13 + 3);
      }
    }
    while ( v13 != nullptr );
    v67 = v70;
    if ( v70 == (char *)&unk_20DF734 )
    {
LABEL_40:
      g4_std::string::construct_copy(&v83, v80);
      v84 = 0;
      LOBYTE(v85) = 0;
      if ( unk_20DF744 == 0 )
        goto LABEL_46;
      v68 = (void *)(*(uint8_t **)unk_20DF740);
      v22 = *(uint32_t **)((*(uint8_t **)unk_20DF740) + 16);
      v75 = *(v22 - 3);
      v23 = v75;
      if ( *(v83 - 3) <= v75 )
        v23 = *(v83 - 3);
      v71 = v23;
      v60 = v83;
      v62 = *(v83 - 3);
      v24 = memcmp(v22, v83, v23);
      if ( v24 == 0 )
        v24 = v75 - v62;
      if ( v24 >= 0 )
        goto LABEL_46;
      LOBYTE(v26) = 1;
      if ( v68 != &unk_20DF734 )
      {
        v27 = memcmp(v60, v22, v71);
        if ( v27 == 0 )
          v27 = v62 - v75;
        v26 = v27 >> 31;
      }
      v70 = (char *)opNew(0x1Cu);
      if ( v70 != (char *)-16 )
      {
        g4_std::string::construct_copy(v70 + 16, &v83);
        v28 = v85;
        *((uint32_t *)v70 + 5) = v84;
        *((uint32_t *)v70 + 6) = v28;
      }
      sub_1904970(v26, v70, v68, &unk_20DF734);
      ++unk_20DF744;
      v25 = v83;
    }
    else
    {
      v19 = *(uint32_t *)(*((uint32_t *)v70 + 4) - 12);
      v20 = v19;
      if ( v59 <= v19 )
        v20 = v59;
      v21 = memcmp(v74, *((const void **)v70 + 4), v20);
      if ( v21 == 0 )
        v21 = v59 - v19;
      if ( v21 >= 0 )
        goto LABEL_37;
      g4_std::string::construct_copy(&v83, v80);
      v84 = 0;
      LOBYTE(v85) = 0;
      v29 = *((uint32_t **)v70 + 4);
      v76 = *(v83 - 3);
      v30 = v76;
      if ( *(v29 - 3) <= v76 )
        v30 = *(v29 - 3);
      v61 = v83;
      v63 = *(v29 - 3);
      v31 = memcmp(v83, v29, v30);
      v65 = v31;
      if ( v31 == 0 )
        v31 = v76 - v63;
      if ( v31 < 0 )
      {
        v39 = (int)(uintptr_t)((*(uint8_t **)unk_20DF73C));
        if ( (char *)(*(uint8_t **)unk_20DF73C) == v70 )
        {
          v70 = (char *)opNew(0x1Cu);
          if ( v70 != (char *)-16 )
          {
            g4_std::string::construct_copy(v70 + 16, &v83);
            v49 = v85;
            *((uint32_t *)v70 + 5) = v84;
            *((uint32_t *)v70 + 6) = v49;
          }
          sub_1904970(1, v70, v39, &unk_20DF734);
        }
        else
        {
          v40 = sub_1904940(v70);
          v41 = *(uint32_t **)(v40 + 16);
          v66 = v40;
          v42 = v76;
          if ( *(v41 - 3) <= v76 )
            v42 = *(v41 - 3);
          v64 = *(v41 - 3);
          v72 = v42;
          v43 = memcmp(v41, v61, v42);
          if ( v43 == 0 )
            v43 = v64 - v76;
          if ( v43 >= 0 )
            goto LABEL_46;
          if ( *(uint32_t *)(v66 + 12) == 0 )
          {
            LOBYTE(v45) = 1;
            if ( (void *)v66 != &unk_20DF734 )
            {
              v46 = memcmp(v61, v41, v72);
              v47 = v76 - v64;
              if ( v46 != 0 )
                v47 = v46;
              v45 = v47 >> 31;
            }
            v70 = (char *)opNew(0x1Cu);
            if ( v70 != (char *)-16 )
            {
              g4_std::string::construct_copy(v70 + 16, &v83);
              v48 = v85;
              *((uint32_t *)v70 + 5) = v84;
              *((uint32_t *)v70 + 6) = v48;
            }
            sub_1904970(v45, v70, v66, &unk_20DF734);
            ++unk_20DF744;
            v25 = v83;
            goto LABEL_47;
          }
          v70 = (char *)opNew(0x1Cu);
          if ( v70 != (char *)-16 )
          {
            g4_std::string::construct_copy(v70 + 16, &v83);
            v44 = v85;
            *((uint32_t *)v70 + 5) = v84;
            *((uint32_t *)v70 + 6) = v44;
          }
          sub_1904970(1, v70, v67, &unk_20DF734);
        }
        ++unk_20DF744;
        v25 = v83;
        goto LABEL_47;
      }
      v32 = memcmp(v29, v61, v30);
      v25 = v61;
      if ( v32 == 0 )
        v32 = v63 - v76;
      if ( v32 < 0 )
      {
        v69 = (int)(uintptr_t)((*(uint8_t **)unk_20DF740));
        if ( (char *)(*(uint8_t **)unk_20DF740) == v70 )
        {
          v52 = *((uint32_t **)v70 + 4);
          v53 = v76;
          v54 = *(v52 - 3);
          if ( v54 <= v76 )
            v53 = *(v52 - 3);
          v55 = memcmp(v61, v52, v53);
          if ( v55 == 0 )
            v55 = v76 - v54;
          v70 = (char *)opNew(0x1Cu);
          if ( v70 != (char *)-16 )
          {
            g4_std::string::construct_copy(v70 + 16, &v83);
            v56 = v85;
            *((uint32_t *)v70 + 5) = v84;
            *((uint32_t *)v70 + 6) = v56;
          }
          sub_1904970(v55 < 0, v70, v69, &unk_20DF734);
          goto LABEL_100;
        }
        v33 = sub_19048E0(v70);
        v34 = *(uint32_t **)(v33 + 16);
        v35 = v76;
        v36 = *(v34 - 3);
        if ( v36 <= v76 )
          v35 = *(v34 - 3);
        v37 = memcmp(v61, v34, v35);
        if ( v37 == 0 )
          v37 = v76 - v36;
        if ( v37 < 0 )
        {
          if ( *((uint32_t *)v70 + 3) != 0 )
          {
            v70 = (char *)opNew(0x1Cu);
            if ( v70 != (char *)-16 )
            {
              g4_std::string::construct_copy(v70 + 16, &v83);
              v38 = v85;
              *((uint32_t *)v70 + 5) = v84;
              *((uint32_t *)v70 + 6) = v38;
            }
            sub_1904970(1, v70, v33, &unk_20DF734);
            ++unk_20DF744;
            v25 = v83;
            goto LABEL_47;
          }
          v50 = v65;
          if ( v65 == 0 )
            v50 = v76 - v63;
          v70 = (char *)opNew(0x1Cu);
          if ( v70 != (char *)-16 )
          {
            g4_std::string::construct_copy(v70 + 16, &v83);
            v51 = v85;
            *((uint32_t *)v70 + 5) = v84;
            *((uint32_t *)v70 + 6) = v51;
          }
          sub_1904970(v50 < 0, v70, v67, &unk_20DF734);
LABEL_100:
          ++unk_20DF744;
          v25 = v83;
          goto LABEL_47;
        }
LABEL_46:
        sub_CCB450((int)(uintptr_t)(&v77), (int)(uintptr_t)(&v83));
        v25 = v83;
        v70 = v77;
      }
    }
LABEL_47:
    if ( v25 - 3 != dword_213B808 )
    {
      v57 = __sync_fetch_and_add(v25 - 1, 0xFFFFFFFF);
      v74 = (char *)v80[0];
      if ( v57 > 0 )
      {
LABEL_37:
        *((uint32_t *)v70 + 5) = (uint32_t)(uintptr_t)(v81);
        v70[24] = v82;
        result = v74 - 12;
        if ( v74 - 12 != (char *)dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)v74 - 1, 0xFFFFFFFF) <= 0 )
        {
          return (g4_std::string::Rep::M_destroy(result), (char *)0);
        }
        return result;
      }
      g4_std::string::Rep::M_destroy(v25 - 3);
    }
    v74 = (char *)v80[0];
    goto LABEL_37;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::CrcChecker::AddCrcMap  (binary VA: 0xccc3e0)
// Original: glf::CrcChecker::AddCrcMap
// ----------------------------------------------------------------------------
void glf::CrcChecker::AddCrcMap(glf::CrcChecker::Self *self, const char *a2)
{
  unsigned int Size;
  void *v3;
  void *v4;
  char *v5;
  int v6;
  typedef char *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef glf::CrcChecker::Self *_g4_t_v9;
  typedef const char *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[13];
  typedef int (**_g4_t_v13)(int);
  typedef int _g4_t_v14;
  typedef int (**_g4_t_v15)(int);
  typedef uint32_t _g4_t_v16[7];
  typedef uint32_t _g4_t_v17[2];
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[5];
  typedef char _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef char _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v8)) > _g4_s1 ? (31u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v9)) > _g4_s2 ? (36u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v10)) > _g4_s3 ? (40u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v11)) > _g4_s4 ? (44u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v12)) > _g4_s5 ? (48u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (100u + sizeof(_g4_t_v13)) > _g4_s6 ? (100u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (104u + sizeof(_g4_t_v14)) > _g4_s7 ? (104u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v15)) > _g4_s8 ? (108u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v16)) > _g4_s9 ? (112u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (140u + sizeof(_g4_t_v17)) > _g4_s10 ? (140u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (148u + sizeof(_g4_t_v18)) > _g4_s11 ? (148u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (152u + sizeof(_g4_t_v19)) > _g4_s12 ? (152u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (172u + sizeof(_g4_t_v20)) > _g4_s13 ? (172u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (264u + sizeof(_g4_t_v21)) > _g4_s14 ? (264u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (268u + sizeof(_g4_t_v22)) > _g4_s15 ? (268u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (269u + sizeof(_g4_t_v23)) > _g4_s16 ? (269u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (272u + sizeof(_g4_t_v24)) > _g4_s17 ? (272u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (276u + sizeof(_g4_t_v25)) > _g4_s18 ? (276u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (280u + sizeof(_g4_t_v26)) > _g4_s19 ? (280u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (284u + sizeof(_g4_t_v27)) > _g4_s20 ? (284u + sizeof(_g4_t_v27)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 31u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 100u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 104u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 108u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 112u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 140u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 148u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 152u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 172u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 264u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 268u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 269u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 272u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 276u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 280u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 284u);

  glf::FileStreamImpl::Construct((glf::IOStream::Self *)v12, (char *)self, (uint8_t *)&dword_0 + 1);
  v12[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  if ( (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)v12) != 0
    && (uint8_t)glf::FileStreamImpl::CanRead((glf::FileStreamImpl::Self *)v12) != 0 )
  {
    Size = glf::FileStreamImpl::GetSize((glf::FileStreamImpl::Self *)v12);
    v7 = (char *)opNewArray(Size + 1);
    glf::FileStreamImpl::Read((glf::FileStreamImpl::Self *)v12, (int)(uintptr_t)(v7), Size);
    v7[Size] = 0;
    v9 = (glf::CrcChecker::Self *)&dword_213B814;
    v10 = nullptr;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), v7, (int)(uintptr_t)(&v8));
    sub_1900810(v19);
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v19[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v27 = 0;
    v13 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    *(int (***)(int))((char *)&v13 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v14 = 0;
    sub_19119D0((char *)&v13 + (uint32_t)(uintptr_t)(*(v13 - 3)), 0);
    v15 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v16[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    sub_19119D0((char *)&v16[-1] + (uint32_t)(uintptr_t)(*(v15 - 3)), 0);
    v13 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v13 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    memset(&v16[1], 0, 24);
    v13 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v19[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v15 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v16[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v17);
    v17[1] = 0;
    v16[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    sub_193A970((int)(uintptr_t)(&v18), (void *)v11, *(uint32_t *)(v11 - 12), (int)(uintptr_t)(&v8) + 1);
    v17[1] = 24;
    sub_1931CD0(v16, v18, 0, 0);
    sub_19119D0(v19, v16);
    v3 = (void *)(v11 - 12);
    if ( (uint32_t *)(v11 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    if ( (v20 & 2) == 0 )
    {
      if ( (uint8_t)(uintptr_t)(a2) != 0 )
      {
        do
        {
          v6 = sub_19056D0(&v13, &v9);
          sub_1914710(v6, &v10);
          glf::CrcChecker::AddFileEntry(v9, v10, (char)(uintptr_t)(a2));
        }
        while ( (v20 & 2) == 0 );
      }
      else
      {
        do
        {
          sub_19056D0(&v13, &v9);
          glf::CrcChecker::AddFileEntry(v9, v10, 0);
        }
        while ( (v20 & 2) == 0 );
      }
    }
    if ( v7 != nullptr )
      opDeleteArray(v7);
    v13 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v19[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v15 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v16[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v4 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v16[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(v17);
    v13 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v13 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v15 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v16[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    v13 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    *(int (***)(int))((char *)&v13 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v14 = 0;
    v19[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v19);
    v5 = (char *)v9 - 12;
    if ( (uint32_t *)((char *)v9 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v9 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
  }
  v12[0] = ((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v12);
}

// ----------------------------------------------------------------------------
// Function: glf::CrcChecker::SetDynamicMapFileName  (binary VA: 0xccc8d0)
// Original: glf::CrcChecker::SetDynamicMapFileName
// ----------------------------------------------------------------------------
int glf::CrcChecker::SetDynamicMapFileName(glf::CrcChecker::Self *self)
{
  size_t v1;

  v1 = strlen((const char *)self);
  return (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(&glf::CrcChecker::mDynMapFileName), self, v1));
}

// ----------------------------------------------------------------------------
// Function: glf::CrcChecker::WriteDynamicCrcMap  (binary VA: 0xccc920)
// Original: glf::CrcChecker::_WriteDynamicCrcMap
// ----------------------------------------------------------------------------
void glf::CrcChecker::WriteDynamicCrcMap()
{
  int i;
  int v1;
  uint32_t *v2;
  uint8_t *v3;
  size_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint8_t *v7;
  size_t *v8;
  uint32_t *v9;
  char *v10;
  void *v11;
  uint32_t *v12;
  size_t *v13;
  size_t *v14;
  typedef int _g4_t_v15;
  typedef size_t *_g4_t_v16;
  typedef size_t *_g4_t_v17;
  typedef size_t *_g4_t_v18;
  typedef size_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef size_t _g4_t_v25;
  typedef size_t _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef const void *_g4_t_v30[4];
  typedef uint32_t _g4_t_v31[3];
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef uint32_t _g4_t_v36[13];
  typedef int (**_g4_t_v37)(int);
  typedef int _g4_t_v38;
  typedef int (**_g4_t_v39)(int);
  typedef uint32_t _g4_t_v40[3];
  typedef uint8_t *_g4_t_v41;
  typedef uint8_t *_g4_t_v42;
  typedef uint8_t *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t _g4_t_v45[2];
  typedef uint32_t *_g4_t_v46;
  typedef uint32_t _g4_t_v47[29];
  typedef int16_t _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v17)) > _g4_s2 ? (4u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v18)) > _g4_s3 ? (4u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v19)) > _g4_s4 ? (4u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v20)) > _g4_s5 ? (8u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v21)) > _g4_s6 ? (8u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v22)) > _g4_s7 ? (8u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v23)) > _g4_s8 ? (8u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v24)) > _g4_s9 ? (8u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v25)) > _g4_s10 ? (12u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v26)) > _g4_s11 ? (12u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v27)) > _g4_s12 ? (16u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v28)) > _g4_s13 ? (16u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v29)) > _g4_s14 ? (16u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v30)) > _g4_s15 ? (36u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v31)) > _g4_s16 ? (52u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v32)) > _g4_s17 ? (64u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v33)) > _g4_s18 ? (68u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v34)) > _g4_s19 ? (72u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v35)) > _g4_s20 ? (76u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v36)) > _g4_s21 ? (80u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v37)) > _g4_s22 ? (132u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (136u + sizeof(_g4_t_v38)) > _g4_s23 ? (136u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v39)) > _g4_s24 ? (140u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v40)) > _g4_s25 ? (144u + sizeof(_g4_t_v40)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v41)) > _g4_s26 ? (156u + sizeof(_g4_t_v41)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v42)) > _g4_s27 ? (160u + sizeof(_g4_t_v42)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v43)) > _g4_s28 ? (164u + sizeof(_g4_t_v43)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v44)) > _g4_s29 ? (168u + sizeof(_g4_t_v44)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v45)) > _g4_s30 ? (172u + sizeof(_g4_t_v45)) : _g4_s30,
    _g4_s32 = (180u + sizeof(_g4_t_v46)) > _g4_s31 ? (180u + sizeof(_g4_t_v46)) : _g4_s31,
    _g4_s33 = (184u + sizeof(_g4_t_v47)) > _g4_s32 ? (184u + sizeof(_g4_t_v47)) : _g4_s32,
    _g4_s34 = (300u + sizeof(_g4_t_v48)) > _g4_s33 ? (300u + sizeof(_g4_t_v48)) : _g4_s33,
    _g4_s35 = (304u + sizeof(_g4_t_v49)) > _g4_s34 ? (304u + sizeof(_g4_t_v49)) : _g4_s34,
    _g4_s36 = (308u + sizeof(_g4_t_v50)) > _g4_s35 ? (308u + sizeof(_g4_t_v50)) : _g4_s35,
    _g4_s37 = (312u + sizeof(_g4_t_v51)) > _g4_s36 ? (312u + sizeof(_g4_t_v51)) : _g4_s36,
    _g4_s38 = (316u + sizeof(_g4_t_v52)) > _g4_s37 ? (316u + sizeof(_g4_t_v52)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 132u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 136u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 140u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 144u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 156u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 160u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 164u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 168u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 172u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 180u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 184u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 300u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 304u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 308u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 312u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 316u);

  if ( glf::CrcChecker::mDynMapFileName[0] != 0 && *(uint32_t *)(glf::CrcChecker::mDynMapFileName[0] - 12) != 0 )
  {
    glf::FileStreamImpl::Construct((glf::IOStream::Self *)v36, (const char *)glf::CrcChecker::mDynMapFileName[0], &byte_9[1]);
    v36[0] = ((uint32_t)(uintptr_t)&off_2048D28);
    if ( (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)v36) == 0
      || !glf::FileStreamImpl::CanWrite((glf::FileStreamImpl::Self *)v36) )
    {
LABEL_3:
      v36[0] = ((uint32_t)(uintptr_t)&off_2048D28);
      glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v36);
      return;
    }
    sub_1900810(v47);
    v47[28] = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v47[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v52 = 0;
    v37 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    *(int (***)(int))((char *)&v37 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v38 = 0;
    sub_19119D0((char *)&v37 + (uint32_t)(uintptr_t)(*(v37 - 3)), 0);
    v39 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v40[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    sub_19119D0((char *)&v40[-1] + (uint32_t)(uintptr_t)(*(v39 - 3)), 0);
    v37 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v37 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v40[1] = 0;
    v40[2] = 0;
    v41 = nullptr;
    v42 = nullptr;
    v43 = nullptr;
    v44 = 0;
    v37 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v47[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v39 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v40[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v45);
    v45[1] = 24;
    v40[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v46 = &dword_213B814;
    sub_19119D0(v47, v40);
    for ( i = (int)(uintptr_t)((*(uint8_t **)unk_20DF73C)); (void *)i != &unk_20DF734; i = sub_19048E0(i) )
    {
      if ( *(uint8_t *)(i + 24) != 0 )
      {
        v15 = *(uint32_t *)(i + 20);
        v20 = (int)(uintptr_t)(g4_std_compat::ostream_write(&v39, *(uint32_t *)(i + 16), *(uint32_t *)(*(uint32_t *)(i + 16) - 12)));
        g4_std_compat::ostream_write(v20, " ", 1);
        v1 = (int)(uintptr_t)(sub_192D8B0(v20, v15));
        g4_std_compat::ostream_write(v1, &a0[1], 1);
      }
    }
    v2 = &dword_213B814;
    v31[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    if ( v43 == nullptr )
    {
      g4_std::string::assign_str(v31, &v46);
      goto LABEL_19;
    }
    v3 = v42;
    if ( v43 > v41 )
    {
      if ( v43 != v42 )
      {
        if ( v42 == nullptr )
          goto LABEL_50;
        v27 = v43 - v42;
        v4 = (size_t *)sub_1938930(v43 - v42, 0);
        v2 = (uint32_t *)(v4 + 3);
        if ( v27 == 1 )
        {
          *((uint8_t *)v4 + 12) = *v3;
        }
        else
        {
          v21 = (uint32_t *)(v4 + 3);
          v16 = v4;
          memcpy(v2, v3, v27);
          v4 = v16;
          v2 = v21;
        }
        if ( v4 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v4[2] = 0;
          *v4 = v27;
          *((uint8_t *)v4 + v27 + 12) = 0;
        }
      }
      v33 = v2;
      g4_std::string::assign_str(v31, &v33);
      v5 = v33 - 3;
      if ( v33 - 3 != dword_213B808 && __sync_fetch_and_add(v33 - 1, 0xFFFFFFFF) <= 0 )
        goto LABEL_49;
      goto LABEL_19;
    }
    if ( v41 == v42 )
    {
LABEL_47:
      v32 = v2;
      g4_std::string::assign_str(v31, &v32);
      v5 = v32 - 3;
      if ( v32 - 3 != dword_213B808 && __sync_fetch_and_add(v32 - 1, 0xFFFFFFFF) <= 0 )
LABEL_49:
        g4_std::string::Rep::M_destroy(v5);
LABEL_19:
      v6 = &dword_213B814;
      v28 = *(uint32_t *)(v31[0] - 12);
      v30[0] = &dword_213B814;
      if ( v43 == nullptr )
      {
        g4_std::string::assign_str(v30, &v46);
LABEL_28:
        glf::FileStreamImpl::Write((glf::FileStreamImpl::Self *)v36, v30[0], v28);
        v10 = (char *)v30[0] - 12;
        if ( (char *)v30[0] - 12 != (char *)dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)v30[0] - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v10);
        }
        v11 = (void *)(v31[0] - 12);
        if ( (uint32_t *)(v31[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v11);
        }
        v37 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
        v47[0] = (uint32_t)(uintptr_t)(&off_20AB014);
        v39 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
        v40[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
        v12 = v46 - 3;
        if ( v46 - 3 != dword_213B808 && __sync_fetch_and_add(v46 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v12);
        v40[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
        sub_1902180(v45);
        v37 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
        *(int (***)(int))((char *)&v37 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
        v39 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
        *(uint32_t *)((char *)&v40[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
        v37 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
        *(int (***)(int))((char *)&v37 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
        v38 = 0;
        v47[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
        sub_1900B90(v47);
        goto LABEL_3;
      }
      v7 = v42;
      if ( v43 > v41 )
      {
        if ( v43 == v42 )
          goto LABEL_27;
        if ( v42 != nullptr )
        {
          v25 = v43 - v42;
          v8 = (size_t *)sub_1938930(v43 - v42, 0);
          v6 = (uint32_t *)(v8 + 3);
          if ( v25 == 1 )
          {
            *((uint8_t *)v8 + 12) = *v7;
          }
          else
          {
            v22 = (uint32_t *)(v8 + 3);
            v17 = v8;
            memcpy(v6, v7, v25);
            v8 = v17;
            v6 = v22;
          }
          if ( v8 != (size_t *)(uintptr_t)(dword_213B808) )
          {
            v8[2] = 0;
            *v8 = v25;
            *((uint8_t *)v8 + v25 + 12) = 0;
          }
LABEL_27:
          v35 = v6;
          g4_std::string::assign_str(v30, &v35);
          v9 = v35 - 3;
          if ( v35 - 3 == dword_213B808 || __sync_fetch_and_add(v35 - 1, 0xFFFFFFFF) > 0 )
            goto LABEL_28;
          goto LABEL_40;
        }
LABEL_50:
        sub_18FFFD0("basic_string::_S_construct null not valid");
      }
      if ( v41 == v42 )
      {
LABEL_38:
        v34 = v6;
        g4_std::string::assign_str(v30, &v34);
        v9 = v34 - 3;
        if ( v34 - 3 == dword_213B808 || __sync_fetch_and_add(v34 - 1, 0xFFFFFFFF) > 0 )
          goto LABEL_28;
LABEL_40:
        g4_std::string::Rep::M_destroy(v9);
        goto LABEL_28;
      }
      if ( v42 != nullptr )
      {
        v26 = v41 - v42;
        v13 = (size_t *)sub_1938930(v41 - v42, 0);
        v6 = (uint32_t *)(v13 + 3);
        if ( v26 == 1 )
        {
          *((uint8_t *)v13 + 12) = *v7;
LABEL_36:
          if ( v13 != (size_t *)(uintptr_t)(dword_213B808) )
          {
            v13[2] = 0;
            *v13 = v26;
            *((uint8_t *)v6 + v26) = 0;
          }
          goto LABEL_38;
        }
      }
      else
      {
        if ( v41 != nullptr )
          goto LABEL_50;
        v13 = (size_t *)sub_1938930(0, 0);
        v6 = (uint32_t *)(v13 + 3);
        v26 = 0;
      }
      v23 = v6;
      v18 = v13;
      memcpy(v6, v7, v26);
      v13 = v18;
      v6 = v23;
      goto LABEL_36;
    }
    if ( v42 != nullptr )
    {
      v29 = v41 - v42;
      v14 = (size_t *)sub_1938930(v41 - v42, 0);
      v2 = (uint32_t *)(v14 + 3);
      if ( v29 == 1 )
      {
        *((uint8_t *)v14 + 12) = *v3;
LABEL_45:
        if ( v14 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v14[2] = 0;
          *v14 = v29;
          *((uint8_t *)v2 + v29) = 0;
        }
        goto LABEL_47;
      }
    }
    else
    {
      if ( v41 != nullptr )
        goto LABEL_50;
      v14 = (size_t *)sub_1938930(0, 0);
      v2 = (uint32_t *)(v14 + 3);
      v29 = 0;
    }
    v24 = v2;
    v19 = v14;
    memcpy(v2, v3, v29);
    v14 = v19;
    v2 = v24;
    goto LABEL_45;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::CrcChecker::UpdateFileEntry  (binary VA: 0xccd260)
// Original: glf::CrcChecker::UpdateFileEntry
// ----------------------------------------------------------------------------
void glf::CrcChecker::UpdateFileEntry(glf::CrcChecker::Self *self, glf::CrcChecker::Self *a2, void *a3)
{
  int v3;
  size_t v4;
  size_t v5;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  typedef size_t _g4_t_v12;
  typedef void *_g4_t_v13;
  typedef char *_g4_t_v14;
  typedef uint16_t _g4_t_v15[15];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (30u + sizeof(_g4_t_v15)) > _g4_s3 ? (30u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 30u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15[1]), (char *)self, (int)(uintptr_t)(v15));
  v3 = (int)(uintptr_t)((*(uint8_t **)unk_20DF738));
  if ( (*(uint8_t **)unk_20DF738) == 0 )
  {
    v14 = *(char **)&v15[1];
LABEL_22:
    v13 = &unk_20DF734;
    goto LABEL_16;
  }
  v14 = *(char **)&v15[1];
  v13 = &unk_20DF734;
  v4 = *(uint32_t *)(*(uint32_t *)&v15[1] - 12);
  do
  {
    while ( 1 )
    {
      v5 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
      v6 = v5;
      v12 = v4;
      if ( v4 <= v5 )
        v6 = v4;
      v7 = memcmp(*(const void **)(v3 + 16), v14, v6);
      v4 = v12;
      v8 = v5 - v12;
      if ( v7 == 0 )
        v7 = v8;
      if ( v7 < 0 )
        break;
      v13 = (void *)v3;
      v3 = *(uint32_t *)(v3 + 8);
      if ( v3 == 0 )
        goto LABEL_10;
    }
    v3 = *(uint32_t *)(v3 + 12);
  }
  while ( v3 != 0 );
LABEL_10:
  if ( v13 == &unk_20DF734 )
    goto LABEL_22;
  v9 = *(uint32_t *)(*((uint32_t *)v13 + 4) - 12);
  v10 = v9;
  if ( v12 <= v9 )
    v10 = v12;
  v11 = memcmp(v14, *((const void **)v13 + 4), v10);
  if ( v11 == 0 )
    v11 = v12 - v9;
  if ( v11 < 0 )
    goto LABEL_22;
LABEL_16:
  if ( v14 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v14 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v14 - 12);
  if ( v13 != &unk_20DF734 && *((uint8_t *)v13 + 24) != 0 )
  {
    *((uint32_t *)v13 + 5) = glf::CrcChecker::CRC32(a2, a3, *((uint32_t *)v13 + 5));
    glf::CrcChecker::WriteDynamicCrcMap();
  }
}

// ----------------------------------------------------------------------------
// Function: glf::CrcChecker::CypherBuffer  (binary VA: 0xccd3f0)
// Original: glf::CrcChecker::_CypherBuffer
// ----------------------------------------------------------------------------
void glf::CrcChecker::CypherBuffer()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::CrcChecker::DecypherBuffer  (binary VA: 0xccd400)
// Original: glf::CrcChecker::_DecypherBuffer
// ----------------------------------------------------------------------------
void glf::CrcChecker::DecypherBuffer()
{
  ;
}


