#include "Core/Utils/DecompTypes.h"
#include "savemanager_core.h"

unsigned int crc(uint8_t *a1, int a2);

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::Construct  (binary VA: 0x137d730)
// Original: savemanager::CloudSave::CloudSave
// ----------------------------------------------------------------------------
savemanager::CloudSave::Self * savemanager::CloudSave::Construct(savemanager::CloudSave::Self *self)
{
  savemanager::CloudSave::Self *result;
  int v2[3];

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = 2;
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 28, &unk_1B15112, 0);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 24, &unk_1B15112, 0);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 36, &unk_1B15112, 0);
  *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self) + 76, "1", (int)(uintptr_t)(v2));
  result = (savemanager::CloudSave::Self *)Json::Value::Construct((int)(uintptr_t)(self) + 80, nullptr);
  *((uint32_t *)self + 24) = 19;
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::Construct  (binary VA: 0x137d870)
// Original: savemanager::CloudSave::CloudSave
// ----------------------------------------------------------------------------
savemanager::CloudSave::Self * savemanager::CloudSave::Construct(savemanager::CloudSave::Self *self, const savemanager::CloudSave::Self *a2)
{
  int v2;
  int v3;
  unsigned int v4;
  size_t v5;
  int v6;
  int v7;
  void *v8;
  savemanager::CloudSave::Self *result;
  int v10;
  int i;

  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  g4_std::string::assign_str((char *)self + 28, (char *)a2 + 28);
  g4_std::string::assign_str((char *)self + 24, (char *)a2 + 24);
  g4_std::string::assign_str((char *)self + 36, (char *)a2 + 36);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 8);
  g4_std::string::assign_str((char *)self + 40, (char *)a2 + 40);
  v4 = (*((uint32_t *)a2 + 12) - *((uint32_t *)a2 + 11)) >> 2;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  if ( v4 != 0 )
  {
    if ( v4 > 0x3FFFFFFF )
      sub_18FFEE0(v3, v2);
    v5 = 4 * v4;
    v6 = opNew(v5);
  }
  else
  {
    v5 = 0;
    v6 = 0;
  }
  *((uint32_t *)self + 11) = v6;
  *((uint32_t *)self + 12) = v6;
  *((uint32_t *)self + 13) = v6 + v5;
  v7 = *((uint32_t *)a2 + 11);
  for ( i = *((uint32_t *)a2 + 12); i != v7; v7 += 4 )
  {
    if ( v6 != 0 )
    {
      v10 = v6;
      g4_std::string::construct_copy(v6, v7);
      v6 = v10;
    }
    v6 += 4;
  }
  *((uint32_t *)self + 12) = v6;
  g4_std::string::construct_copy((char *)self + 56, (char *)a2 + 56);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = *((uint32_t *)a2 + 16);
  v8 = malloc(*((uint32_t *)a2 + 16));
  *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(v8);
  memcpy(v8, *((const void **)a2 + 15), *((uint32_t *)a2 + 16));
  *((uint32_t *)self + 17) = *((uint32_t *)a2 + 17);
  *((uint32_t *)self + 18) = *((uint32_t *)a2 + 18);
  g4_std::string::construct_copy((char *)self + 76, (char *)a2 + 76);
  Json::Value::Construct((savemanager::CloudSave::Self *)((char *)self + 80), (const savemanager::CloudSave::Self *)((char *)a2 + 80));
  result = *((savemanager::CloudSave::Self **)a2 + 24);
  *((uint32_t *)self + 24) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::opAssign  (binary VA: 0x137da30)
// Original: savemanager::CloudSave::operator=
// ----------------------------------------------------------------------------
savemanager::CloudSave::Self * savemanager::CloudSave::opAssign(char **self, char **a2)
{
  savemanager::CloudSave::Self *v2;
  uint32_t *v3;
  uint32_t *v4;
  void *v5;
  uint32_t *v6;
  char *v7;
  char *v8;
  unsigned int v9;
  char *v10;
  int v11;
  unsigned int v12;
  char *v13;
  uint32_t *v14;
  int v15;
  void *v16;
  unsigned int v18;
  int v19;
  char *v20;
  unsigned int v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  typedef void *_g4_t_ptr;
  typedef char *_g4_t_ptra;
  typedef void *_g4_t_src;
  typedef void *_g4_t_srca;
  typedef char *_g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef char *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef uint32_t _g4_t_v38[2];
  typedef uint32_t *_g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_ptra)) > _g4_s1 ? (0u + sizeof(_g4_t_ptra)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_src)) > _g4_s2 ? (4u + sizeof(_g4_t_src)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_srca)) > _g4_s3 ? (4u + sizeof(_g4_t_srca)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v30)) > _g4_s4 ? (28u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v31)) > _g4_s5 ? (32u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v32)) > _g4_s6 ? (32u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v33)) > _g4_s7 ? (36u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v34)) > _g4_s8 ? (36u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v35)) > _g4_s9 ? (40u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v36)) > _g4_s10 ? (44u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v37)) > _g4_s11 ? (76u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v38)) > _g4_s12 ? (80u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v39)) > _g4_s13 ? (88u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v40)) > _g4_s14 ? (92u + sizeof(_g4_t_v40)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_ptra &ptra = *reinterpret_cast<_g4_t_ptra *>(_g4_sf + 0u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 4u);
  _g4_t_srca &srca = *reinterpret_cast<_g4_t_srca *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 92u);

  v2 = (savemanager::CloudSave::Self *)self;
  if ( a2 == self )
    return v2;
  *self = *a2;
  *(self + 2) = a2[2];
  *(self + 3) = a2[3];
  *(self + 4) = a2[4];
  *(self + 5) = a2[5];
  g4_std::string::assign_str(self + 7, a2 + 7);
  g4_std::string::assign_str(self + 6, a2 + 6);
  g4_std::string::assign_str(self + 9, a2 + 9);
  *(self + 1) = a2[1];
  *(self + 8) = a2[8];
  v37 = &dword_213B814;
  v38[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v39 = &dword_213B814;
  v40 = &dword_213B814;
  g4_std::string::assign_str(v38, self + 7);
  g4_std::string::assign_str(&v37, self + 6);
  g4_std::string::assign_str(&v39, self + 9);
  v38[1] = (uint32_t)(uintptr_t)(*(self + 8));
  g4_std::string::assign_str(&v40, self + 10);
  v3 = v40 - 3;
  if ( v40 - 3 != dword_213B808 && __sync_fetch_and_add(v40 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  v4 = v39 - 3;
  if ( v39 - 3 != dword_213B808 && __sync_fetch_and_add(v39 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v5 = (void *)(v38[0] - 12);
  if ( (uint32_t *)(v38[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = v37 - 3;
  if ( v37 - 3 != dword_213B808 && __sync_fetch_and_add(v37 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v6);
  v7 = *(self + 11);
  v8 = a2[11];
  v33 = a2[12];
  v9 = (v33 - v8) >> 2;
  v31 = v9;
  if ( v9 > (*(self + 13) - v7) >> 2 )
  {
    if ( v9 != 0 )
    {
      if ( v9 > 0x3FFFFFFF )
        sub_18FFEE0(v9, a2);
      v35 = 4 * v9;
      v32 = opNew(4 * v9);
    }
    else
    {
      v35 = 0;
      v32 = 0;
    }
    if ( v8 != v33 )
    {
      v22 = v32;
      do
      {
        if ( v22 != 0 )
          g4_std::string::construct_copy(v22, v8);
        v8 += 4;
        v22 += 4;
      }
      while ( v33 != v8 );
      v2 = (savemanager::CloudSave::Self *)self;
    }
    v23 = *((uint32_t **)v2 + 12);
    v24 = *((uint32_t **)v2 + 11);
    if ( v23 != v24 )
    {
      do
      {
        v25 = (uint32_t *)(*v24 - 12);
        if ( v25 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v24 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v25);
        ++v24;
      }
      while ( v23 != v24 );
      v24 = *((uint32_t **)v2 + 11);
    }
    if ( v24 != nullptr )
      opDelete(v24);
    *((uint32_t *)v2 + 11) = v32;
    v15 = v35 + v32;
    *((uint32_t *)v2 + 13) = v35 + v32;
    goto LABEL_16;
  }
  v10 = *(self + 12);
  v11 = (v10 - v7) >> 2;
  if ( v9 > v11 )
  {
    v18 = (unsigned int)(uintptr_t)(&v8[4 * v11]);
    if ( v11 > 0 )
    {
      v19 = (*(self + 12) - v7) >> 2;
      do
      {
        srca = v8;
        ptra = v7;
        v8 += 4;
        v7 += 4;
        g4_std::string::assign_str(ptra, srca);
        --v19;
      }
      while ( v19 != 0 );
      v2 = (savemanager::CloudSave::Self *)self;
      v10 = *(self + 12);
      v33 = a2[12];
      v7 = *(self + 11);
      v18 = (unsigned int)(uintptr_t)(&a2[11][(v10 - v7) & 0xFFFFFFFC]);
    }
    if ( v33 == (char *)v18 )
    {
      v15 = (int)(uintptr_t)(&v7[4 * v31]);
      goto LABEL_16;
    }
    v20 = v10;
    v21 = v18;
    do
    {
      if ( v20 != nullptr )
        g4_std::string::construct_copy(v20, v21);
      v21 += 4;
      v20 += 4;
    }
    while ( v33 != (char *)v21 );
  }
  else
  {
    if ( (int)v9 <= 0 )
      goto LABEL_14;
    v36 = *(self + 11);
    v34 = *(self + 12);
    v12 = v9;
    v13 = v36;
    do
    {
      src = v8;
      ptr = v13;
      v8 += 4;
      v13 += 4;
      g4_std::string::assign_str(ptr, src);
      --v12;
    }
    while ( v12 != 0 );
    v10 = v34;
    v2 = (savemanager::CloudSave::Self *)self;
    v7 = &v36[4 * v31];
    if ( v34 != v7 )
    {
      do
      {
        v14 = (uint32_t *)(*(uint32_t *)v7 - 12);
        if ( v14 != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v7 - 4), 0xFFFFFFFF) <= 0 )
        {
          v30 = v10;
          g4_std::string::Rep::M_destroy(v14);
          v10 = v30;
        }
        v7 += 4;
LABEL_14:
        ;
      }
      while ( v10 != v7 );
    }
  }
  v15 = *((uint32_t *)v2 + 11) + 4 * v31;
LABEL_16:
  *((uint32_t *)v2 + 12) = v15;
  g4_std::string::assign_str((char *)v2 + 56, a2 + 14);
  Json::Value::opAssign((savemanager::CloudSave::Self *)((char *)v2 + 80), (const Json::Value::Self *)(a2 + 20));
  if ( *((uint32_t *)v2 + 15) != 0 )
    free(*((void **)v2 + 15));
  *((uint32_t *)v2 + 15) = 0;
  *((uint32_t *)v2 + 16) = (uint32_t)(uintptr_t)(a2[16]);
  v16 = malloc((size_t)a2[16]);
  *((uint32_t *)v2 + 15) = (uint32_t)(uintptr_t)(v16);
  memcpy(v16, a2[15], (size_t)a2[16]);
  *((uint32_t *)v2 + 17) = (uint32_t)(uintptr_t)(a2[17]);
  *((uint32_t *)v2 + 18) = (uint32_t)(uintptr_t)(a2[18]);
  *((uint32_t *)v2 + 24) = (uint32_t)(uintptr_t)(a2[24]);
  g4_std::string::assign_str((char *)v2 + 76, a2 + 19);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::SetTimeStamp  (binary VA: 0x137df70)
// Original: savemanager::CloudSave::SetTimeStamp
// ----------------------------------------------------------------------------
savemanager::CloudSave::Self * savemanager::CloudSave::SetTimeStamp(savemanager::CloudSave::Self *self, int a2)
{
  *(uint32_t *)self = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::AddData  (binary VA: 0x137df80)
// Original: savemanager::CloudSave::AddData
// ----------------------------------------------------------------------------
int savemanager::CloudSave::AddData(int a1, int a2)
{
  char *v2;
  int v3;
  int result;

  v2 = (char *)realloc(*(void **)(a1 + 60), *(uint32_t *)(a2 + 4) + *(uint32_t *)(a1 + 68));
  *(uint32_t *)(a1 + 60) = (uint32_t)(uintptr_t)(v2);
  memcpy(&v2[*(uint32_t *)(a1 + 68)], *(const void **)a2, *(uint32_t *)(a2 + 4));
  v3 = *(uint32_t *)(a2 + 4);
  ++*(uint32_t *)(a1 + 72);
  *(uint32_t *)(a1 + 68) += v3;
  result = *(uint32_t *)(a2 + 4);
  *(uint32_t *)(a1 + 64) += result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::SetGLUID  (binary VA: 0x137e000)
// Original: savemanager::CloudSave::SetGLUID
// ----------------------------------------------------------------------------
int savemanager::CloudSave::SetGLUID(savemanager::CloudSave::Self *self, const gaia::GLUID::Self *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  void *v4;
  int result;
  uint32_t *v6;
  typedef uint32_t *_g4_t_v7;
  typedef uint32_t _g4_t_v8[2];
  typedef uint32_t *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  if ( a2 != (const gaia::GLUID::Self *)((savemanager::CloudSave::Self *)((char *)self + 4)) )
  {
    *((uint32_t *)self + 2) = *((uint32_t *)a2 + 1);
    *((uint32_t *)self + 3) = *((uint32_t *)a2 + 2);
    *((uint32_t *)self + 4) = *((uint32_t *)a2 + 3);
    *((uint32_t *)self + 5) = *((uint32_t *)a2 + 4);
    g4_std::string::assign_str((char *)self + 28, (char *)a2 + 24);
    g4_std::string::assign_str((char *)self + 24, (char *)a2 + 20);
    g4_std::string::assign_str((char *)self + 36, (char *)a2 + 32);
    *((uint32_t *)self + 1) = *(uint32_t *)a2;
    *((uint32_t *)self + 8) = *((uint32_t *)a2 + 7);
  }
  v7 = &dword_213B814;
  v8[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = &dword_213B814;
  v10 = &dword_213B814;
  g4_std::string::assign_str(v8, (char *)self + 28);
  g4_std::string::assign_str(&v7, (char *)self + 24);
  g4_std::string::assign_str(&v9, (char *)self + 36);
  v8[1] = *((uint32_t *)self + 8);
  g4_std::string::assign_str(&v10, (char *)self + 40);
  v2 = v10 - 3;
  if ( v10 - 3 != dword_213B808 && __sync_fetch_and_add(v10 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
  v3 = v9 - 3;
  if ( v9 - 3 != dword_213B808 && __sync_fetch_and_add(v9 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  v4 = (void *)(v8[0] - 12);
  if ( (uint32_t *)(v8[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  result = (int)(uintptr_t)(v7);
  v6 = v7 - 3;
  if ( v7 - 3 != dword_213B808 && __sync_fetch_and_add(v7 - 1, 0xFFFFFFFF) <= 0 )
    return ((g4_std::string::Rep::M_destroy(v6)), (int)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::SetSaveVersion  (binary VA: 0x137e260)
// Original: savemanager::CloudSave::SetSaveVersion
// ----------------------------------------------------------------------------
int savemanager::CloudSave::SetSaveVersion(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 76, a2));
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::GetSaveVersion  (binary VA: 0x137e290)
// Original: savemanager::CloudSave::GetSaveVersion
// ----------------------------------------------------------------------------
char * savemanager::CloudSave::GetSaveVersion(savemanager::CloudSave::Self *self)
{
  return (char *)self + 76;
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::GetTimeStamp  (binary VA: 0x137e2a0)
// Original: savemanager::CloudSave::GetTimeStamp
// ----------------------------------------------------------------------------
int savemanager::CloudSave::GetTimeStamp(savemanager::CloudSave::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::GetData  (binary VA: 0x137e2b0)
// Original: savemanager::CloudSave::GetData
// ----------------------------------------------------------------------------
char * savemanager::CloudSave::GetData(savemanager::CloudSave::Self *self)
{
  return (char *)self + 60;
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::SetDescription  (binary VA: 0x137e2c0)
// Original: savemanager::CloudSave::SetDescription
// ----------------------------------------------------------------------------
int savemanager::CloudSave::SetDescription(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 56, a2));
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::GetDescription  (binary VA: 0x137e2f0)
// Original: savemanager::CloudSave::GetDescription
// ----------------------------------------------------------------------------
char * savemanager::CloudSave::GetDescription(savemanager::CloudSave::Self *self)
{
  return (char *)self + 56;
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::SetGameSpecificData  (binary VA: 0x137e300)
// Original: savemanager::CloudSave::SetGameSpecificData
// ----------------------------------------------------------------------------
Json::Value::Self * savemanager::CloudSave::SetGameSpecificData(savemanager::CloudSave::Self *self, const Json::Value::Self *a2)
{
  return Json::Value::opAssign((savemanager::CloudSave::Self *)((char *)self + 80), a2);
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::GetGameSpecificData  (binary VA: 0x137e330)
// Original: savemanager::CloudSave::GetGameSpecificData
// ----------------------------------------------------------------------------
char * savemanager::CloudSave::GetGameSpecificData(savemanager::CloudSave::Self *self)
{
  return (char *)self + 80;
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::GetSeshatFileKey  (binary VA: 0x137e340)
// Original: savemanager::CloudSave::GetSeshatFileKey
// ----------------------------------------------------------------------------
int savemanager::CloudSave::GetSeshatFileKey(savemanager::CloudSave::Self *self)
{
  return *((uint32_t *)self + 12) - 4;
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::GetAllSeshatFileKeys  (binary VA: 0x137e350)
// Original: savemanager::CloudSave::GetAllSeshatFileKeys
// ----------------------------------------------------------------------------
char * savemanager::CloudSave::GetAllSeshatFileKeys(savemanager::CloudSave::Self *self)
{
  return (char *)self + 44;
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::GetGLUID  (binary VA: 0x137e360)
// Original: savemanager::CloudSave::GetGLUID
// ----------------------------------------------------------------------------
savemanager::CloudSave::Self * savemanager::CloudSave::GetGLUID(savemanager::CloudSave::Self *self, uint32_t *a2)
{
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)self = a2[1];
  *((uint32_t *)self + 1) = a2[2];
  *((uint32_t *)self + 2) = a2[3];
  *((uint32_t *)self + 3) = a2[4];
  *((uint32_t *)self + 4) = a2[5];
  g4_std::string::assign_str((char *)self + 24, a2 + 7);
  g4_std::string::assign_str((char *)self + 20, a2 + 6);
  g4_std::string::assign_str((char *)self + 32, a2 + 9);
  *((uint32_t *)self + 7) = a2[8];
  g4_std::string::assign_str((char *)self + 36, a2 + 10);
  return self;
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::GetDataLength  (binary VA: 0x137e410)
// Original: savemanager::CloudSave::GetDataLength
// ----------------------------------------------------------------------------
int savemanager::CloudSave::GetDataLength(savemanager::CloudSave::Self *self)
{
  return *((uint32_t *)self + 16);
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::Destroy  (binary VA: 0x137e420)
// Original: savemanager::CloudSave::~CloudSave
// ----------------------------------------------------------------------------
void savemanager::CloudSave::Destroy(void **self)
{
  savemanager::CloudSave::Self *v1;
  int v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v1 = (savemanager::CloudSave::Self *)self;
  Json::Value::Destroy((Json::Value::Self *)(self + 20));
  v2 = (int)(uintptr_t)(*(self + 19));
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  if ( *(self + 15) != nullptr )
    free(*(self + 15));
  v3 = (int)(uintptr_t)(*(self + 14));
  *(self + 15) = nullptr;
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = (uint32_t *)(*(self + 11));
  if ( *(self + 12) != v4 )
  {
    v5 = (uint32_t *)(*(self + 12));
    do
    {
      v6 = (uint32_t *)(*v4 - 12);
      if ( v6 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v4 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v6);
      ++v4;
    }
    while ( v5 != v4 );
    v1 = (savemanager::CloudSave::Self *)self;
    v4 = (uint32_t *)(*(self + 11));
  }
  if ( v4 != nullptr )
    opDelete(v4);
  v7 = *((uint32_t *)v1 + 10);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  v8 = *((uint32_t *)v1 + 9);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v8 - 12));
  }
  v9 = *((uint32_t *)v1 + 7);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v9 - 12));
  }
  v10 = *((uint32_t *)v1 + 6);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v10 - 12));
  }
}

// ----------------------------------------------------------------------------
// Function: savemanager::CloudSave::SetSeshatFileKey  (binary VA: 0x137e600)
// Original: savemanager::CloudSave::SetSeshatFileKey
// ----------------------------------------------------------------------------
char * savemanager::CloudSave::SetSeshatFileKey(int *a1, int a2)
{
  char *result;
  int v3;

  result = (char *)a1[12];
  if ( result == (char *)a1[13] )
    return (char *)g4_std::vector_string_86c307::M_insert_aux(a1 + 11, result, a2);
  v3 = 0;
  if ( result != nullptr )
  {
    result = (char *)g4_std::string::construct_copy(result, a2);
    v3 = a1[12];
  }
  a1[12] = v3 + 4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::Construct  (binary VA: 0x137e850)
// Original: savemanager::SaveGameManager::SaveGameManager
// ----------------------------------------------------------------------------
savemanager::SaveGameManager::Self * savemanager::SaveGameManager::Construct(savemanager::SaveGameManager::Self *self)
{
  savemanager::SaveGameManager::Self *result;
  gaia::Gaia::Self *v2;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2093F68);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 36) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  glwebtools::Mutex::Construct((savemanager::SaveGameManager::Self *)((char *)self + 60));
  result = (savemanager::SaveGameManager::Self *)gaia::Gaia::GetInstance(v2);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(result);
  ++*((uint32_t *)result + 59);
  *((uint8_t *)self + 46) = 0;
  *((uint8_t *)self + 44) = 0;
  *((uint8_t *)self + 45) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 10) = 19;
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::Initialize  (binary VA: 0x137e8e0)
// Original: savemanager::SaveGameManager::Initialize
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::Initialize(int a1)
{
  void *v2;

  savemanager::Console::SetLogLevel(nullptr, (unsigned int)(uintptr_t)(v2));
  if ( *(uint8_t *)(a1 + 46) == 0 )
  {
    g4_std_compat::string_assign(a1 + 8, "backupSaveFile.dat", 0x12u);
    *(uint8_t *)(a1 + 46) = 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::Encrypt_MAC_DES  (binary VA: 0x137e940)
// Original: savemanager::SaveGameManager::Encrypt_MAC_DES
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::Encrypt_MAC_DES(int a1, int a2, uint32_t *a3, const void **a4)
{
  int v4;
  int v5;
  char *s;
  void *v7;
  int v8;
  int i;
  char *v10;
  void *v11;
  typedef int _g4_t_c;
  typedef size_t _g4_t_v14;
  typedef uint8_t _g4_t_v15[7];
  typedef uint32_t _g4_t_v16[2];
  typedef int _g4_t_v17[39];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_c)) > _g4_s0 ? (4u + sizeof(_g4_t_c)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v14)) > _g4_s1 ? (28u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (33u + sizeof(_g4_t_v15)) > _g4_s2 ? (33u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v16)) > _g4_s3 ? (40u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v17)) > _g4_s4 ? (48u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_c &c = *reinterpret_cast<_g4_t_c *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 33u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);

  v4 = (*((uint32_t *)*a4 - 3) >> 3) + 1;
  if ( (*((uint32_t *)*a4 - 3) & 7) == 0 )
    v4 = *((uint32_t *)*a4 - 3) >> 3;
  v5 = 8 * v4;
  s = (char *)opNewArray(v5 + 1);
  memset(s, 0, v5 + 1);
  memcpy(s, *a4, *((uint32_t *)*a4 - 3));
  v7 = (void *)opNewArray(v5 + 1);
  memset(v7, 0, v5 + 1);
  v8 = a3[1];
  v16[0] = *a3;
  v16[1] = v8;
  DES_set_odd_parity(v16);
  DES_set_key(v16, (int)(uintptr_t)(v17));
  if ( v5 > 0 )
  {
    v14 = (size_t)v7;
    for ( i = 0; i < v5; i += 8 )
    {
      c = i + v14;
      v10 = &s[i];
      DES_ecb_encrypt(v10, c, v17, 1);
    }
    v7 = (void *)v14;
  }
  if ( s != nullptr )
    opDeleteArray(s);
  g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(v15));
  sub_193A970((int)(uintptr_t)(&v15[3]), v7, v5, (int)(uintptr_t)(&v15[1]));
  if ( (uint8_t)glwebtools::Codec::EncodeBase64(*(uint32_t *)&v15[3], *(uint32_t *)(*(uint32_t *)&v15[3] - 12), a1, 0) == 0 )
    g4_std_compat::string_assign(a1, &unk_1B15112, 0);
  if ( v7 != nullptr )
    opDeleteArray(v7);
  v11 = (void *)(*(uint32_t *)&v15[3] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v15[3] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v15[3] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::UploadTableOfContents  (binary VA: 0x137eb40)
// Original: savemanager::SaveGameManager::UploadTableOfContents
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::UploadTableOfContents(int a1, Json::Value::Self *a2, int a3)
{
  int v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  typedef gaia::Gaia::Self *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef void (**_g4_t_v14)(Json::FastWriter::Self *);
  typedef int _g4_t_v15;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (18u + sizeof(_g4_t_v10)) > _g4_s1 ? (18u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v11)) > _g4_s2 ? (24u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v14)) > _g4_s5 ? (36u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v15)) > _g4_s6 ? (40u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 18u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);

  Json::FastWriter::Construct((Json::FastWriter::Self *)&v14);
  Json::FastWriter::write((Json::FastWriter::Self *)&v11, (const Json::Value::Self *)&v14, a2);
  v9 = *(gaia::Gaia::Self **)(*(uint32_t *)(a1 + 16) + 568);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "me", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "$savegamelib.objects.TOC", (int)(uintptr_t)(&v10));
  v3 = gaia::Gaia_Seshat::PutData(v9, (int)(uintptr_t)(&v12), (int)(uintptr_t)(&v11), a3, a3, (int)(uintptr_t)(&v13), 0, 0, 0, 0);
  v4 = (void *)(v12 - 12);
  if ( (uint32_t *)(v12 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v13 - 12);
  if ( (uint32_t *)(v13 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v14 = (void (**)(Json::FastWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091B78));
  v7 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  Json::Writer::Destroy((Json::Writer::Self *)&v14);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::GetCredentialTypeUsedForBackup  (binary VA: 0x137ed00)
// Original: savemanager::SaveGameManager::GetCredentialTypeUsedForBackup
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::GetCredentialTypeUsedForBackup(savemanager::SaveGameManager::Self *self)
{
  return *((uint32_t *)self + 10);
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::SetCredentialTypeUsedForBackup  (binary VA: 0x137ed10)
// Original: savemanager::SaveGameManager::SetCredentialTypeUsedForBackup
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::SetCredentialTypeUsedForBackup(int a1, int a2)
{
  *(uint32_t *)(a1 + 40) = a2;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::StringToUnixTimestamp  (binary VA: 0x137ed20)
// Original: savemanager::SaveGameManager::StringToUnixTimestamp
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::StringToUnixTimestamp(int a1, const char **a2)
{
  unsigned int v2;
  char *v3;
  char *v4;
  char *v5;
  char v6;
  int result;
  typedef char _g4_t_dest[2];
  typedef char _g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (2u + sizeof(_g4_t_dest)) > _g4_s0 ? (2u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 2u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);

  v2 = 30;
  v3 = dest;
  v4 = dest;
  if ( ((unsigned int)(uintptr_t)(dest) & 2) != 0 )
  {
    *(uint16_t *)dest = 0;
    v4 = &v9;
    LOBYTE(v2) = 28;
  }
  memset(v4, 0, 4 * (v2 >> 2));
  v5 = &v4[4 * (v2 >> 2)];
  if ( (v2 & 2) != 0 )
    *(uint16_t *)v5 = 0;
  strcpy(dest, *a2);
  v6 = dest[0];
  result = 0;
  if ( (uint8_t)(dest[0] - 48) <= 9u )
  {
    do
    {
      ++v3;
      result = v6 + 10 * result - 48;
      v6 = *v3;
    }
    while ( (uint8_t)(*v3 - 48) <= 9u );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::RetrieveTableOfContents  (binary VA: 0x137edb0)
// Original: savemanager::SaveGameManager::RetrieveTableOfContents
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::RetrieveTableOfContents(int a1, Json::Value::Self *a2, int a3)
{
  void *v3;
  void *v4;
  size_t n;
  void *v7;
  void *v8;
  void *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  void *v17;
  void **v18;
  unsigned int v19;
  void *v20;
  void *v21;
  void **v22;
  unsigned int v23;
  void *v24;
  void *v25;
  void *v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  void *v34;
  void **v35;
  unsigned int v36;
  void *v37;
  void *v38;
  void **v39;
  unsigned int v40;
  void *v41;
  int j;
  int v43;
  int i;
  int v45;
  typedef gaia::Gaia::Self *_g4_t_ptr;
  typedef char *_g4_t_ptra;
  typedef uint32_t *_g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef unsigned int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_Data;
  typedef unsigned int _g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef char *_g4_t_src;
  typedef size_t _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef void *_g4_t_v68[5];
  typedef unsigned int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef void *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef unsigned int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef unsigned int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_ptr)) > _g4_s0 ? (12u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_ptra)) > _g4_s1 ? (12u + sizeof(_g4_t_ptra)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v48)) > _g4_s2 ? (16u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v49)) > _g4_s3 ? (16u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v50)) > _g4_s4 ? (20u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v51)) > _g4_s5 ? (20u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v52)) > _g4_s6 ? (24u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v53)) > _g4_s7 ? (24u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v54)) > _g4_s8 ? (28u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v55)) > _g4_s9 ? (28u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v56)) > _g4_s10 ? (32u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v57)) > _g4_s11 ? (32u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v58)) > _g4_s12 ? (36u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v59)) > _g4_s13 ? (36u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_Data)) > _g4_s14 ? (40u + sizeof(_g4_t_Data)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v61)) > _g4_s15 ? (40u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v62)) > _g4_s16 ? (44u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v63)) > _g4_s17 ? (48u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_src)) > _g4_s18 ? (64u + sizeof(_g4_t_src)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v65)) > _g4_s19 ? (68u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v66)) > _g4_s20 ? (72u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v67)) > _g4_s21 ? (76u + sizeof(_g4_t_v67)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v68)) > _g4_s22 ? (80u + sizeof(_g4_t_v68)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v69)) > _g4_s23 ? (100u + sizeof(_g4_t_v69)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v70)) > _g4_s24 ? (116u + sizeof(_g4_t_v70)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v71)) > _g4_s25 ? (120u + sizeof(_g4_t_v71)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v72)) > _g4_s26 ? (128u + sizeof(_g4_t_v72)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v73)) > _g4_s27 ? (136u + sizeof(_g4_t_v73)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v74)) > _g4_s28 ? (140u + sizeof(_g4_t_v74)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v75)) > _g4_s29 ? (144u + sizeof(_g4_t_v75)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v76)) > _g4_s30 ? (148u + sizeof(_g4_t_v76)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v77)) > _g4_s31 ? (156u + sizeof(_g4_t_v77)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v78)) > _g4_s32 ? (160u + sizeof(_g4_t_v78)) : _g4_s32,
    _g4_s34 = (184u + sizeof(_g4_t_v79)) > _g4_s33 ? (184u + sizeof(_g4_t_v79)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 12u);
  _g4_t_ptra &ptra = *reinterpret_cast<_g4_t_ptra *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 20u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_Data &Data = *reinterpret_cast<_g4_t_Data *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 64u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 80u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 100u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 116u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 120u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 128u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 136u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 140u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 144u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 148u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 156u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 160u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 184u);

  src = nullptr;
  ptr = *(gaia::Gaia::Self **)(*(uint32_t *)(a1 + 16) + 568);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v67), (char *)&unk_1B15112, (int)(uintptr_t)(&v63) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v66), "$savegamelib.objects.TOC", (int)(uintptr_t)(&v63));
  Data = gaia::Gaia_Seshat::DeprecatedGetData(ptr, (int)(uintptr_t)(&v66), (int)(uintptr_t)(&src), (int)(uintptr_t)(&v65), a3, a3, (int)(uintptr_t)(&v67), 0, 0, 0);
  v3 = (void *)(v66 - 12);
  if ( (uint32_t *)(v66 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v66 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v67 - 12);
  if ( (uint32_t *)(v67 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  if ( Data != 0 )
    return Data;
  n = v65;
  v7 = malloc(v65 + 1);
  ptra = src;
  memcpy(v7, src, n);
  *((uint8_t *)v7 + n) = 0;
  free(ptra);
  src = (char *)v7;
  Json::Reader::Construct((Json::Reader::Self *)v68);
  if ( (uint8_t)Json::Reader::parse((Json::Reader::Self *)v68, src, &src[v65], a2, true) == 0 )
  {
    free(src);
    src = nullptr;
LABEL_34:
    v25 = (void *)(v79 - 12);
    if ( (uint32_t *)(v79 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v79 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v25);
    }
    v26 = (void *)(v78 - 12);
    if ( (uint32_t *)(v78 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v78 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v26);
    }
    v57 = v76;
    v53 = v75;
    v51 = v72;
    v55 = v77;
    v61 = v74;
    v59 = v73;
    v49 = (uint32_t *)(v74 + 4);
    if ( v77 > v74 + 4 )
    {
      do
      {
        v27 = 0;
        v28 = *v49 + 12;
        do
        {
          v29 = *(uint32_t *)(v28 + v27);
          if ( (uint32_t *)(v29 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v29 - 12));
          }
          v27 += 20;
        }
        while ( v27 != 500 );
        ++v49;
      }
      while ( v55 > (unsigned int)(uintptr_t)(v49) );
    }
    if ( v55 == v61 )
    {
      for ( i = v51; v53 != i; i += 20 )
      {
        v45 = *(uint32_t *)(i + 12);
        if ( (uint32_t *)(v45 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v45 - 12));
        }
      }
    }
    else
    {
      if ( v51 != v59 )
      {
        v30 = v51;
        do
        {
          v31 = *(uint32_t *)(v30 + 12);
          if ( (uint32_t *)(v31 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v31 - 12));
          }
          v30 += 20;
        }
        while ( v59 != v30 );
      }
      if ( v53 != v57 )
      {
        v32 = v57;
        do
        {
          v33 = *(uint32_t *)(v32 + 12);
          if ( (uint32_t *)(v33 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v33 - 12));
          }
          v32 += 20;
        }
        while ( v53 != v32 );
      }
    }
    v34 = v71;
    if ( v71 != nullptr )
    {
      v35 = (void **)v74;
      v36 = v77 + 4;
      if ( v77 + 4 > v74 )
      {
        do
        {
          v37 = *v35++;
          opDelete(v37);
        }
        while ( v36 > (unsigned int)(uintptr_t)(v35) );
        v34 = v71;
      }
      opDelete(v34);
    }
    v38 = v68[0];
    Data = -13;
    if ( v68[0] != nullptr )
    {
      v39 = (void **)v69;
      v40 = v70 + 4;
      if ( v70 + 4 > v69 )
      {
        do
        {
          v41 = *v39++;
          opDelete(v41);
        }
        while ( v40 > (unsigned int)(uintptr_t)(v39) );
        v38 = v68[0];
      }
      opDelete(v38);
      return -13;
    }
    return Data;
  }
  free(src);
  src = nullptr;
  if ( !Json::Value::isMember(a2, "TOC") )
    goto LABEL_34;
  v8 = (void *)(v79 - 12);
  if ( (uint32_t *)(v79 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v79 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v78 - 12);
  if ( (uint32_t *)(v78 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v78 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v56 = v76;
  v54 = v75;
  v50 = v72;
  v52 = v77;
  v62 = v74;
  v58 = v73;
  v48 = (uint32_t *)(v74 + 4);
  if ( v77 > v74 + 4 )
  {
    do
    {
      v10 = 0;
      v11 = *v48 + 12;
      do
      {
        v12 = *(uint32_t *)(v11 + v10);
        if ( (uint32_t *)(v12 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v12 - 12));
        }
        v10 += 20;
      }
      while ( v10 != 500 );
      ++v48;
    }
    while ( v52 > (unsigned int)(uintptr_t)(v48) );
  }
  if ( v52 == v62 )
  {
    for ( j = v50; v54 != j; j += 20 )
    {
      v43 = *(uint32_t *)(j + 12);
      if ( (uint32_t *)(v43 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v43 - 12));
      }
    }
  }
  else
  {
    if ( v50 != v58 )
    {
      v13 = v50;
      do
      {
        v14 = *(uint32_t *)(v13 + 12);
        if ( (uint32_t *)(v14 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v14 - 12));
        }
        v13 += 20;
      }
      while ( v58 != v13 );
    }
    if ( v54 != v56 )
    {
      v15 = v56;
      do
      {
        v16 = *(uint32_t *)(v15 + 12);
        if ( (uint32_t *)(v16 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v16 - 12));
        }
        v15 += 20;
      }
      while ( v54 != v15 );
    }
  }
  v17 = v71;
  if ( v71 != nullptr )
  {
    v18 = (void **)v74;
    v19 = v77 + 4;
    if ( v77 + 4 > v74 )
    {
      do
      {
        v20 = *v18++;
        opDelete(v20);
      }
      while ( v19 > (unsigned int)(uintptr_t)(v18) );
      v17 = v71;
    }
    opDelete(v17);
  }
  v21 = v68[0];
  if ( v68[0] == nullptr )
    return Data;
  v22 = (void **)v69;
  v23 = v70 + 4;
  if ( v70 + 4 > v69 )
  {
    do
    {
      v24 = *v22++;
      opDelete(v24);
    }
    while ( v23 > (unsigned int)(uintptr_t)(v22) );
    v21 = v68[0];
  }
  opDelete(v21);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::GetInstance  (binary VA: 0x137f580)
// Original: savemanager::SaveGameManager::GetInstance
// ----------------------------------------------------------------------------
savemanager::SaveGameManager::Self * savemanager::SaveGameManager::GetInstance()
{
  savemanager::SaveGameManager::Self *result;
  savemanager::SaveGameManager::Self *v1;

  result = (savemanager::SaveGameManager::Self *)savemanager::SaveGameManager::s_instance;
  if ( savemanager::SaveGameManager::s_instance == 0 )
  {
    v1 = (savemanager::SaveGameManager::Self *)opNew(0x44u);
    savemanager::SaveGameManager::Construct(v1);
    savemanager::SaveGameManager::s_instance = (uintptr_t)(uintptr_t)(v1);
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::AcceptSaveRestore  (binary VA: 0x137f5e0)
// Original: savemanager::SaveGameManager::AcceptSaveRestore
// ----------------------------------------------------------------------------
char * savemanager::SaveGameManager::AcceptSaveRestore(int a1, int a2)
{
  void *v2;
  char *result;
  void *v4;
  typedef char *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (30u + sizeof(_g4_t_v7)) > _g4_s2 ? (30u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v8)) > _g4_s3 ? (32u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v9)) > _g4_s4 ? (36u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v10)) > _g4_s5 ? (40u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v11)) > _g4_s6 ? (44u + sizeof(_g4_t_v11)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 30u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "backupSaveFile.dat", (int)(uintptr_t)(&v7));
  savemanager::IStorageWrapper::Remove(a1, &v9);
  v6 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "backupSaveFile.dat", (int)(uintptr_t)(&v7) + 1);
  savemanager::IStorageWrapper::Rename(a1, a2, &v10);
  v2 = (void *)(v10 - 12);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "tempCCSave.dat", (int)(uintptr_t)(&v8));
  result = (char *)savemanager::IStorageWrapper::Rename(a1, v11, a2);
  v4 = (void *)(v11[0] - 12);
  if ( (uint32_t *)(v11[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v5 = result;
    g4_std::string::Rep::M_destroy(v4);
    result = v5;
  }
  *(uint8_t *)(a1 + 36) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::RejectSaveRestore  (binary VA: 0x137f770)
// Original: savemanager::SaveGameManager::RejectSaveRestore
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::RejectSaveRestore(savemanager::SaveGameManager::Self *self)
{
  void *v1;
  uint16_t v3[3];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3[1]), "tempCCSave.dat", (int)(uintptr_t)(v3));
  savemanager::IStorageWrapper::Remove(self, &v3[1]);
  v1 = (void *)(*(uint32_t *)&v3[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v3[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v3[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  *((uint8_t *)self + 36) = 0;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::BeginSave  (binary VA: 0x137f800)
// Original: savemanager::SaveGameManager::BeginSave
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::BeginSave(int a1, int a2)
{
  int result;
  void *v3;
  void *v4;
  savemanager::CloudSave::Self *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  result = -125;
  if ( *(uint8_t *)(a1 + 36) == 0 )
  {
    g4_std::string::assign_str(a1 + 4, a2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), "wb", (int)(uintptr_t)(&v6) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "tempSaveFile.dat", (int)(uintptr_t)(&v6));
    *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(savemanager::IStorageWrapper::OpenFile(a1, &v7, v8));
    v3 = (void *)(v7 - 12);
    if ( (uint32_t *)(v7 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v8[0] - 12);
    if ( (uint32_t *)(v8[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    if ( *(uint32_t *)(a1 + 20) != 0 )
    {
      v5 = (savemanager::CloudSave::Self *)opNew(0x64u);
      savemanager::CloudSave::Construct(v5);
      *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v5);
      *(uint8_t *)(a1 + 44) = 1;
      *(uint32_t *)(a1 + 28) = 0;
      return 0;
    }
    else
    {
      return -16;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::SaveBufferWithGLUID  (binary VA: 0x137f950)
// Original: savemanager::SaveGameManager::SaveBufferWithGLUID
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::SaveBufferWithGLUID(savemanager::SaveGameManager::Self *self, uint8_t *a2, int ptr, const gaia::GLUID::Self *a4)
{
  size_t size;
  char *v5;
  unsigned int v6;
  int v7;
  void *EncryptedXXTEADataSize;
  FILE *s;
  FILE *v10;
  FILE *v11;
  size_t n;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  typedef size_t _g4_t_v18;
  typedef size_t _g4_t_v19;
  typedef size_t _g4_t_v20;
  typedef const unsigned int *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef size_t _g4_t_v25;
  typedef int _g4_t_v26;
  typedef size_t _g4_t_v27;
  typedef void *_g4_t_v28[2];
  typedef void *_g4_t_v29[2];
  typedef void *_g4_t_v30[2];
  typedef void *_g4_t_v31[9];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v20)) > _g4_s2 ? (4u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v22)) > _g4_s4 ? (40u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v23)) > _g4_s5 ? (44u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v24)) > _g4_s6 ? (48u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v25)) > _g4_s7 ? (52u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v26)) > _g4_s8 ? (56u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v27)) > _g4_s9 ? (60u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v28)) > _g4_s10 ? (64u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v29)) > _g4_s11 ? (72u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v30)) > _g4_s12 ? (80u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v31)) > _g4_s13 ? (88u + sizeof(_g4_t_v31)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 88u);

  v23 = compressBound(ptr);
  size = (size_t)(uintptr_t)(glwebtools::Codec::GetEncryptedXXTEADataSize((glwebtools::Codec::Self *)(v23 + 4), v18));
  v5 = (char *)malloc(size);
  if ( compress((int)(uintptr_t)(v5), &v23, (int)(uintptr_t)(a2), ptr) != 0 )
  {
    free(v5);
    savemanager::IStorageWrapper::CloseFile((int)(uintptr_t)(self), *((FILE **)self + 5));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "tempSaveFile.dat", (int)(uintptr_t)(&v22));
    savemanager::IStorageWrapper::Remove(self, &v24);
    v14 = (void *)(v24 - 12);
    if ( (uint32_t *)(v24 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    v15 = *((void **)self + 3);
    if ( v15 != nullptr )
    {
      savemanager::CloudSave::Destroy(*((void ***)self + 3));
      opDelete(v15);
    }
    *((uint32_t *)self + 3) = 0;
    *((uint8_t *)self + 44) = 0;
    return -9;
  }
  else
  {
    v6 = crc((uint8_t *)a2, ptr);
    v7 = v23;
    *(uint32_t *)&v5[v23] = v6;
    v25 = v7 + 4;
    EncryptedXXTEADataSize = (void *)glwebtools::Codec::GetEncryptedXXTEADataSize((glwebtools::Codec::Self *)(v7 + 4), v19);
    if ( (uint8_t)glwebtools::Codec::EncryptXXTEA(
                            (glwebtools::Codec::Self *)v5,
                            v25,
                            v5,
                            EncryptedXXTEADataSize,
                            (unsigned int)(uintptr_t)(a4) + 4,
                            v21) != 0 )
    {
      v27 = (size_t)(uintptr_t)(glwebtools::Codec::GetEncryptedXXTEADataSize((glwebtools::Codec::Self *)v25, v20));
      fwrite(&ptr, 4u, 1u, *((FILE **)self + 5));
      v28[1] = &loc_4;
      v28[0] = malloc(4u);
      *(uint32_t *)v28[0] = ptr;
      savemanager::CloudSave::AddData(*((uint32_t *)self + 3), (int)(uintptr_t)(v28));
      if ( v28[0] != nullptr )
        free(v28[0]);
      s = *((FILE **)self + 5);
      v28[0] = nullptr;
      fwrite(&v25, 4u, 1u, s);
      v29[1] = &loc_4;
      v29[0] = malloc(4u);
      *(uint32_t *)v29[0] = v25;
      savemanager::CloudSave::AddData(*((uint32_t *)self + 3), (int)(uintptr_t)(v29));
      if ( v29[0] != nullptr )
        free(v29[0]);
      v10 = *((FILE **)self + 5);
      v29[0] = nullptr;
      fwrite(&v27, 4u, 1u, v10);
      v30[1] = &loc_4;
      v30[0] = malloc(4u);
      *(uint32_t *)v30[0] = v27;
      savemanager::CloudSave::AddData(*((uint32_t *)self + 3), (int)(uintptr_t)(v30));
      if ( v30[0] != nullptr )
        free(v30[0]);
      v11 = *((FILE **)self + 5);
      v30[0] = nullptr;
      fwrite(v5, v27, 1u, v11);
      n = v27;
      v31[1] = (void *)v27;
      v31[0] = malloc(v27);
      memcpy(v31[0], v5, n);
      savemanager::CloudSave::AddData(*((uint32_t *)self + 3), (int)(uintptr_t)(v31));
      if ( v31[0] != nullptr )
        free(v31[0]);
      ++*((uint32_t *)self + 7);
      free(v5);
      return 0;
    }
    else
    {
      free(v5);
      savemanager::IStorageWrapper::CloseFile((int)(uintptr_t)(self), *((FILE **)self + 5));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "tempSaveFile.dat", (int)(uintptr_t)(&v22) + 1);
      savemanager::IStorageWrapper::Remove(self, &v26);
      v16 = (void *)(v26 - 12);
      if ( (uint32_t *)(v26 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v16);
      }
      v17 = *((void **)self + 3);
      if ( v17 != nullptr )
      {
        savemanager::CloudSave::Destroy(*((void ***)self + 3));
        opDelete(v17);
      }
      *((uint32_t *)self + 3) = 0;
      *((uint8_t *)self + 44) = 0;
      return -8;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::SaveBuffer  (binary VA: 0x137fd30)
// Original: savemanager::SaveGameManager::SaveBuffer
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::SaveBuffer(savemanager::SaveGameManager::Self *self, uint8_t *a2, int ptr)
{
  int result;
  uint32_t *Instance;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  void *v10;
  uint32_t *v11;
  typedef savemanager::SaveGameManager::Self *_g4_t_v12;
  typedef gaia::GLUID::Self *_g4_t_v13;
  typedef gaia::GLUID::Self *_g4_t_v14;
  typedef gaia::GLUID::Self *_g4_t_v15;
  typedef gaia::GLUID::Self *_g4_t_v16;
  typedef uint32_t _g4_t_v17[5];
  typedef uint32_t *_g4_t_v18;
  typedef uint32_t _g4_t_v19[2];
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v13)) > _g4_s1 ? (28u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v14)) > _g4_s2 ? (28u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v15)) > _g4_s3 ? (28u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v17)) > _g4_s5 ? (40u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v18)) > _g4_s6 ? (60u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v19)) > _g4_s7 ? (64u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v20)) > _g4_s8 ? (72u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v21)) > _g4_s9 ? (76u + sizeof(_g4_t_v21)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);

  result = -16;
  if ( *((uint8_t *)self + 44) != 0 )
  {
    Instance = (uint32_t *)gaia::Gaia::GetInstance(v12);
    v17[1] = Instance[72];
    v18 = &dword_213B814;
    v5 = Instance[73];
    v19[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    v20 = &dword_213B814;
    v21 = &dword_213B814;
    v6 = Instance[71];
    v17[2] = v5;
    v17[0] = v6;
    v7 = Instance[75];
    v17[3] = Instance[74];
    v17[4] = v7;
    g4_std::string::assign_str(v19, Instance + 77);
    g4_std::string::assign_str(&v18, Instance + 76);
    g4_std::string::assign_str(&v20, Instance + 79);
    v19[1] = Instance[78];
    g4_std::string::assign_str(&v21, Instance + 80);
    result = savemanager::SaveGameManager::SaveBufferWithGLUID(self, a2, ptr, (const gaia::GLUID::Self *)v17);
    v8 = v21 - 3;
    if ( v21 - 3 != dword_213B808 && __sync_fetch_and_add(v21 - 1, 0xFFFFFFFF) <= 0 )
    {
      v13 = (gaia::GLUID::Self *)result;
      g4_std::string::Rep::M_destroy(v8);
      result = (int)(uintptr_t)(v13);
    }
    v9 = v20 - 3;
    if ( v20 - 3 != dword_213B808 && __sync_fetch_and_add(v20 - 1, 0xFFFFFFFF) <= 0 )
    {
      v16 = (gaia::GLUID::Self *)result;
      g4_std::string::Rep::M_destroy(v9);
      result = (int)(uintptr_t)(v16);
    }
    v10 = (void *)(v19[0] - 12);
    if ( (uint32_t *)(v19[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v15 = (gaia::GLUID::Self *)result;
      g4_std::string::Rep::M_destroy(v10);
      result = (int)(uintptr_t)(v15);
    }
    v11 = v18 - 3;
    if ( v18 - 3 != dword_213B808 && __sync_fetch_and_add(v18 - 1, 0xFFFFFFFF) <= 0 )
    {
      v14 = (gaia::GLUID::Self *)result;
      g4_std::string::Rep::M_destroy(v11);
      return (int)(uintptr_t)(v14);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::EndSave  (binary VA: 0x137ff10)
// Original: savemanager::SaveGameManager::EndSave
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::EndSave(char *a1, int a2, Json::Value::Self *a3, char a4, void *a5, void *a6)
{
  int v6;
  uint32_t *Instance;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  void *v13;
  uint32_t *v14;
  void *v15;
  void *v16;
  void *v17;
  void *v18;
  void *v20;
  void *v21;
  void **v22;
  typedef gaia::Gaia::Self *_g4_t_ptr;
  typedef void **_g4_t_ptra;
  typedef void **_g4_t_v25;
  typedef glwebtools::Thread::Self *_g4_t_v26;
  typedef glwebtools::Mutex::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef void *_g4_t_v32[2];
  typedef uint32_t _g4_t_v33[5];
  typedef uint32_t *_g4_t_v34;
  typedef uint32_t _g4_t_v35[2];
  typedef uint32_t *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_ptra)) > _g4_s1 ? (0u + sizeof(_g4_t_ptra)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v26)) > _g4_s3 ? (32u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v27)) > _g4_s4 ? (36u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (59u + sizeof(_g4_t_v28)) > _g4_s5 ? (59u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v29)) > _g4_s6 ? (68u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v30)) > _g4_s7 ? (72u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v31)) > _g4_s8 ? (76u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v32)) > _g4_s9 ? (80u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v33)) > _g4_s10 ? (88u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v34)) > _g4_s11 ? (108u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v35)) > _g4_s12 ? (112u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (120u + sizeof(_g4_t_v36)) > _g4_s13 ? (120u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (124u + sizeof(_g4_t_v37)) > _g4_s14 ? (124u + sizeof(_g4_t_v37)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_ptra &ptra = *reinterpret_cast<_g4_t_ptra *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 59u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 88u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 108u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 120u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 124u);

  v6 = -16;
  if ( a1[44] == 0 )
    return v6;
  savemanager::CloudSave::SetDescription(*((uint32_t *)a1 + 3), a2);
  savemanager::CloudSave::SetGameSpecificData(*((savemanager::CloudSave::Self **)a1 + 3), a3);
  Instance = (uint32_t *)gaia::Gaia::GetInstance(ptr);
  v33[1] = Instance[72];
  v34 = &dword_213B814;
  v8 = Instance[73];
  v35[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v36 = &dword_213B814;
  v37 = &dword_213B814;
  v9 = Instance[71];
  v33[2] = v8;
  v33[0] = v9;
  v10 = Instance[75];
  v33[3] = Instance[74];
  v33[4] = v10;
  g4_std::string::assign_str(v35, Instance + 77);
  g4_std::string::assign_str(&v34, Instance + 76);
  g4_std::string::assign_str(&v36, Instance + 79);
  v35[1] = Instance[78];
  g4_std::string::assign_str(&v37, Instance + 80);
  savemanager::CloudSave::SetGLUID(*((savemanager::CloudSave::Self **)a1 + 3), (const gaia::GLUID::Self *)v33);
  v11 = v37 - 3;
  if ( v37 - 3 != dword_213B808 && __sync_fetch_and_add(v37 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v11);
  v12 = v36 - 3;
  if ( v36 - 3 != dword_213B808 && __sync_fetch_and_add(v36 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v12);
  v13 = (void *)(v35[0] - 12);
  if ( (uint32_t *)(v35[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  v14 = v34 - 3;
  if ( v34 - 3 != dword_213B808 && __sync_fetch_and_add(v34 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v14);
  fwrite(a1 + 28, 4u, 1u, *((FILE **)a1 + 5));
  v32[1] = &loc_4;
  v32[0] = malloc(4u);
  *(uint32_t *)v32[0] = *((uint32_t *)a1 + 7);
  savemanager::CloudSave::AddData(*((uint32_t *)a1 + 3), (int)(uintptr_t)(v32));
  savemanager::IStorageWrapper::CloseFile((int)(uintptr_t)(a1), *((FILE **)a1 + 5));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "backupSaveFile.dat", (int)(uintptr_t)(&v28));
  g4_std::string::construct_copy(&v30, a1 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "tempSaveFile.dat", (int)(uintptr_t)(&v28) + 1);
  savemanager::IStorageWrapper::Remove(a1, &v29);
  savemanager::IStorageWrapper::Rename(a1, &v30, &v29);
  if ( savemanager::IStorageWrapper::Rename(a1, &v31, &v30) != 0 )
  {
    savemanager::IStorageWrapper::Rename(a1, &v29, &v30);
    v20 = *((void **)a1 + 3);
    if ( v20 != nullptr )
    {
      savemanager::CloudSave::Destroy(*((void ***)a1 + 3));
      opDelete(v20);
    }
    *((uint32_t *)a1 + 3) = 0;
    v6 = -17;
    goto LABEL_11;
  }
  a1[44] = 0;
  if ( a4 == 0 )
  {
    v15 = *((void **)a1 + 3);
    if ( v15 != nullptr )
    {
      savemanager::CloudSave::Destroy(*((void ***)a1 + 3));
      opDelete(v15);
    }
    *((uint32_t *)a1 + 3) = 0;
    v6 = 0;
    goto LABEL_11;
  }
  v27 = (glwebtools::Mutex::Self *)(a1 + 60);
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 60));
  if ( *((uint32_t *)a1 + 13) != 0 )
  {
    v6 = -15;
    if ( glwebtools::Thread::GetState(*((glwebtools::Thread::Self **)a1 + 13)) != 1 )
    {
LABEL_22:
      glwebtools::Mutex::Unlock(v27);
      goto LABEL_11;
    }
    v21 = *((void **)a1 + 13);
    if ( v21 != nullptr )
    {
      glwebtools::Thread::Destroy(*((glwebtools::Thread::Self **)a1 + 13));
      opDelete(v21);
    }
    *((uint32_t *)a1 + 13) = 0;
  }
  v22 = (void **)opNew(0x90u);
  Json::Value::Construct((int)(uintptr_t)(v22 + 3), nullptr);
  v22[7] = nullptr;
  v22[8] = nullptr;
  v22[9] = nullptr;
  v22[10] = nullptr;
  savemanager::CloudSave::Construct((savemanager::CloudSave::Self *)(v22 + 11));
  v22[2] = &dword_0 + 2;
  v22[1] = a5;
  *v22 = a6;
  savemanager::CloudSave::opAssign((char **)v22 + 11, *((char ***)a1 + 3));
  if ( *((uint32_t *)a1 + 3) != 0 )
  {
    v25 = *((void ***)a1 + 3);
    savemanager::CloudSave::Destroy(v25);
    opDelete(v25);
  }
  *((uint32_t *)a1 + 3) = 0;
  v26 = (glwebtools::Thread::Self *)opNew(0x18u);
  glwebtools::Thread::Construct(
    v26,
    (void (*)(void *, void *))((int (*)(glwebtools::Thread::Self **, uint32_t *))savemanager::SaveGameManager::PerformAsyncAction),
    a1,
    v22,
    "UploadSaveToCloud Thread");
  *((uint32_t *)a1 + 13) = (uint32_t)(uintptr_t)(v26);
  if ( v26 == nullptr )
  {
    savemanager::CloudSave::Destroy(v22 + 11);
    if ( v22[7] != nullptr )
      opDelete(v22[7]);
    Json::Value::Destroy((Json::Value::Self *)(v22 + 3));
    ptra = v22;
    v6 = -14;
    opDelete(ptra);
    goto LABEL_22;
  }
  glwebtools::Thread::Start(v26);
  v6 = 0;
  glwebtools::Mutex::Unlock(v27);
LABEL_11:
  v16 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  v17 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  v18 = (void *)(v29 - 12);
  if ( (uint32_t *)(v29 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  if ( v32[0] != nullptr )
    free(v32[0]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::GetNumberOfBuffers  (binary VA: 0x13804e0)
// Original: savemanager::SaveGameManager::GetNumberOfBuffers
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::GetNumberOfBuffers(savemanager::SaveGameManager::Self *self, int *a2)
{
  int result;

  result = -16;
  if ( *((uint8_t *)self + 45) != 0 )
  {
    *a2 = *((uint32_t *)self + 7);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::BeginLoad  (binary VA: 0x1380500)
// Original: savemanager::SaveGameManager::BeginLoad
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::BeginLoad(int a1, int a2)
{
  FILE *stream;
  int v3;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (10u + sizeof(_g4_t_v5)) > _g4_s0 ? (10u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 10u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), "rb", (int)(uintptr_t)(&v5));
  stream = (FILE *)savemanager::IStorageWrapper::OpenFile(a1, a2, v6);
  v3 = v6[0];
  *(uint32_t *)(a1 + 24) = (uint32_t)(uintptr_t)(stream);
  if ( (uint32_t *)(v3 - 12) != dword_213B808 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)(v3 - 12));
    stream = *(FILE **)(a1 + 24);
  }
  if ( stream == nullptr )
    return -16;
  *(uint32_t *)(a1 + 32) = 0;
  fseek(stream, -4, 2);
  fread((void *)(a1 + 28), 4u, 1u, *(FILE **)(a1 + 24));
  fseek(*(FILE **)(a1 + 24), 0, 0);
  *(uint8_t *)(a1 + 45) = 1;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::EndLoad  (binary VA: 0x1380600)
// Original: savemanager::SaveGameManager::EndLoad
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::EndLoad(FILE **self)
{
  int result;
  bool v2;

  savemanager::IStorageWrapper::CloseFile((int)(uintptr_t)(self), *(self + 6));
  result = -18;
  v2 = *(self + 8) == *(self + 7);
  *((uint8_t *)self + 45) = 0;
  if ( v2 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::LoadBufferWithGLUID  (binary VA: 0x1380650)
// Original: savemanager::SaveGameManager::LoadBufferWithGLUID
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::LoadBufferWithGLUID(FILE **self, void **a2, int *a3, const gaia::GLUID::Self *a4)
{
  char *v4;
  void *v5;
  void *v6;
  unsigned int v7;
  typedef const unsigned int *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef size_t _g4_t_n;
  typedef glwebtools::Codec::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_ptr;
  typedef size_t _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_n)) > _g4_s2 ? (20u + sizeof(_g4_t_n)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_ptr)) > _g4_s5 ? (44u + sizeof(_g4_t_ptr)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v15)) > _g4_s6 ? (48u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v16)) > _g4_s7 ? (52u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v17)) > _g4_s8 ? (56u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v18)) > _g4_s9 ? (60u + sizeof(_g4_t_v18)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);

  ptr = 0;
  v15 = 0;
  v16 = 0;
  fread(&ptr, 4u, 1u, *(self + 6));
  fread(&v16, 4u, 1u, *(self + 6));
  fread(&v15, 4u, 1u, *(self + 6));
  v13 = -6;
  if ( ptr >= 0 && v16 >= 0 )
  {
    v10 = ptr;
    n = v15;
    v12 = (glwebtools::Codec::Self *)malloc(v15);
    v4 = (char *)malloc(n);
    if ( v12 != nullptr )
    {
      if ( v4 != nullptr )
      {
        v5 = malloc(v10);
        *a2 = v5;
        if ( v5 != nullptr )
        {
          fread(v12, 1u, n, *(self + 6));
          if ( (uint8_t)glwebtools::Codec::DecryptXXTEA(v12, v15, v4, (void *)v15, (unsigned int)(uintptr_t)(a4) + 4, v9) != 0 )
          {
            v17 = *(uint32_t *)&v4[v16 - 4];
            v6 = *a2;
            v18[0] = ptr;
            if ( uncompress((int)(uintptr_t)(v6), v18, (uint8_t *)v4, v16 - 4) != 0 )
            {
              free(v12);
              free(v4);
              free(*a2);
              *a2 = nullptr;
              v13 = -7;
              *a3 = 0;
            }
            else
            {
              v7 = crc((uint8_t *)*a2, ptr);
              *((uint32_t *)*a2 + 1) += v7 - v17;
              *(uint32_t *)*a2 += v17 - v7;
              if ( v7 == v17 )
              {
                *(self + 8) = (FILE *)((char *)*(self + 8) + 1);
                free(v12);
                free(v4);
                v13 = 0;
                *a3 = ptr;
              }
              else
              {
                free(v12);
                free(v4);
                free(*a2);
                *a2 = nullptr;
                v13 = -10;
                *a3 = 0;
              }
            }
          }
          else
          {
            free(v12);
            free(v4);
            free(*a2);
            *a2 = nullptr;
            *a3 = 0;
          }
        }
        else
        {
          free(v12);
          free(v4);
        }
      }
      else
      {
        free(v12);
      }
    }
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::LoadBuffer  (binary VA: 0x1380920)
// Original: savemanager::SaveGameManager::LoadBuffer
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::LoadBuffer(savemanager::SaveGameManager::Self *self, void **a2, int *a3)
{
  int result;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  void *v10;
  uint32_t *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[5];
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t _g4_t_v18[2];
  typedef uint32_t *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v17)) > _g4_s5 ? (44u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v18)) > _g4_s6 ? (48u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v19)) > _g4_s7 ? (56u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v20)) > _g4_s8 ? (60u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  result = -16;
  if ( *((uint8_t *)self + 45) != 0 )
  {
    v4 = *((uint32_t **)self + 4);
    v16[1] = v4[72];
    v17 = &dword_213B814;
    v5 = v4[73];
    v18[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    v19 = &dword_213B814;
    v20 = &dword_213B814;
    v6 = v4[71];
    v16[2] = v5;
    v16[0] = v6;
    v7 = v4[75];
    v16[3] = v4[74];
    v16[4] = v7;
    g4_std::string::assign_str(v18, v4 + 77);
    g4_std::string::assign_str(&v17, v4 + 76);
    g4_std::string::assign_str(&v19, v4 + 79);
    v18[1] = v4[78];
    g4_std::string::assign_str(&v20, v4 + 80);
    result = savemanager::SaveGameManager::LoadBufferWithGLUID((FILE **)self, a2, a3, (const gaia::GLUID::Self *)v16);
    v8 = v20 - 3;
    if ( v20 - 3 != dword_213B808 && __sync_fetch_and_add(v20 - 1, 0xFFFFFFFF) <= 0 )
    {
      v12 = result;
      g4_std::string::Rep::M_destroy(v8);
      result = v12;
    }
    v9 = v19 - 3;
    if ( v19 - 3 != dword_213B808 && __sync_fetch_and_add(v19 - 1, 0xFFFFFFFF) <= 0 )
    {
      v15 = result;
      g4_std::string::Rep::M_destroy(v9);
      result = v15;
    }
    v10 = (void *)(v18[0] - 12);
    if ( (uint32_t *)(v18[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v14 = result;
      g4_std::string::Rep::M_destroy(v10);
      result = v14;
    }
    v11 = v17 - 3;
    if ( v17 - 3 != dword_213B808 && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
    {
      v13 = result;
      g4_std::string::Rep::M_destroy(v11);
      return v13;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::RestoreCloudSave  (binary VA: 0x1380b00)
// Original: savemanager::SaveGameManager::RestoreCloudSave
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::RestoreCloudSave(savemanager::SaveGameManager::Self *a1, int a2, int a3, const gaia::GLUID::Self *a4, int a5)
{
  int Instance;
  int Data;
  size_t n;
  void *v9;
  void *v10;
  size_t v11;
  void *v12;
  void *v13;
  FILE *s;
  void *v15;
  void *v16;
  void *v17;
  uint32_t *v18;
  int v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  void *v23;
  uint32_t *v24;
  int v25;
  void *v26;
  void *v27;
  void *v28;
  typedef gaia::Gaia::Self *_g4_t_size;
  typedef gaia::Gaia::Self *_g4_t_sizea;
  typedef void *_g4_t_sizeb;
  typedef bool _g4_t_v32;
  typedef gaia::GLUID::Self *_g4_t_v33;
  typedef gaia::GLUID::Self *_g4_t_v34;
  typedef gaia::GLUID::Self *_g4_t_v35;
  typedef gaia::GLUID::Self *_g4_t_v36;
  typedef char *_g4_t_v37;
  typedef size_t _g4_t_DecodedBase64DataSize;
  typedef signed int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef void *_g4_t_ptr;
  typedef size_t _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint8_t *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint8_t _g4_t_v54[16];
  typedef uint8_t _g4_t_v55[16];
  typedef uint8_t _g4_t_v56[16];
  typedef uint32_t _g4_t_v57[5];
  typedef uint32_t *_g4_t_v58;
  typedef uint32_t _g4_t_v59[2];
  typedef uint32_t *_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_size)) > _g4_s0 ? (0u + sizeof(_g4_t_size)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_sizea)) > _g4_s1 ? (0u + sizeof(_g4_t_sizea)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_sizeb)) > _g4_s2 ? (0u + sizeof(_g4_t_sizeb)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v32)) > _g4_s3 ? (16u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v33)) > _g4_s4 ? (36u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v34)) > _g4_s5 ? (36u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v35)) > _g4_s6 ? (36u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v36)) > _g4_s7 ? (36u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v37)) > _g4_s8 ? (40u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_DecodedBase64DataSize)) > _g4_s9 ? (44u + sizeof(_g4_t_DecodedBase64DataSize)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v39)) > _g4_s10 ? (44u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (58u + sizeof(_g4_t_v40)) > _g4_s11 ? (58u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v41)) > _g4_s12 ? (60u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v42)) > _g4_s13 ? (64u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_ptr)) > _g4_s14 ? (76u + sizeof(_g4_t_ptr)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v44)) > _g4_s15 ? (80u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v45)) > _g4_s16 ? (84u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v46)) > _g4_s17 ? (88u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v47)) > _g4_s18 ? (92u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v48)) > _g4_s19 ? (96u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v49)) > _g4_s20 ? (100u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v50)) > _g4_s21 ? (104u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v51)) > _g4_s22 ? (108u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v52)) > _g4_s23 ? (112u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v53)) > _g4_s24 ? (116u + sizeof(_g4_t_v53)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v54)) > _g4_s25 ? (120u + sizeof(_g4_t_v54)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v55)) > _g4_s26 ? (136u + sizeof(_g4_t_v55)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v56)) > _g4_s27 ? (152u + sizeof(_g4_t_v56)) : _g4_s27,
    _g4_s29 = (168u + sizeof(_g4_t_v57)) > _g4_s28 ? (168u + sizeof(_g4_t_v57)) : _g4_s28,
    _g4_s30 = (188u + sizeof(_g4_t_v58)) > _g4_s29 ? (188u + sizeof(_g4_t_v58)) : _g4_s29,
    _g4_s31 = (192u + sizeof(_g4_t_v59)) > _g4_s30 ? (192u + sizeof(_g4_t_v59)) : _g4_s30,
    _g4_s32 = (200u + sizeof(_g4_t_v60)) > _g4_s31 ? (200u + sizeof(_g4_t_v60)) : _g4_s31,
    _g4_s33 = (204u + sizeof(_g4_t_v61)) > _g4_s32 ? (204u + sizeof(_g4_t_v61)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_size &size = *reinterpret_cast<_g4_t_size *>(_g4_sf + 0u);
  _g4_t_sizea &sizea = *reinterpret_cast<_g4_t_sizea *>(_g4_sf + 0u);
  _g4_t_sizeb &sizeb = *reinterpret_cast<_g4_t_sizeb *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_DecodedBase64DataSize &DecodedBase64DataSize = *reinterpret_cast<_g4_t_DecodedBase64DataSize *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 58u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 76u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 80u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 84u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 88u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 92u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 96u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 100u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 104u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 108u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 112u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 116u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 120u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 136u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 152u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 168u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 188u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 192u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 200u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 204u);

  ptr = nullptr;
  Instance = gaia::Gaia::GetInstance(size);
  Data = (int)(uintptr_t)(gaia::Gaia_Seshat::GetData(*(gaia::Gaia_Seshat::Self **)(Instance + 568), a5, a3, (int)(uintptr_t)(&ptr), (int)(uintptr_t)(&v44), 0, 0, 0));
  if ( Data != 0 )
    return Data;
  n = v44;
  v9 = malloc(v44 + 1);
  v10 = ptr;
  memcpy(v9, ptr, n);
  *((uint8_t *)v9 + n) = 0;
  free(v10);
  v11 = v44;
  ptr = v9;
  v12 = malloc(v44);
  memset(v12, 0, v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), (char *)v9, (int)(uintptr_t)(&v40));
  DecodedBase64DataSize = glwebtools::Codec::GetDecodedBase64DataSize(&v45, 0);
  v13 = (void *)(v45 - 12);
  if ( (uint32_t *)(v45 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  glwebtools::Codec::DecodeBase64((glwebtools::Codec::Self *)ptr, (const char *)v44, (unsigned int)(uintptr_t)(v12), nullptr, v32);
  free(ptr);
  ptr = nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "wb", (int)(uintptr_t)(&v41));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "tempSaveFile", (int)(uintptr_t)(&v40) + 1);
  s = (FILE *)savemanager::IStorageWrapper::OpenFile(a1, &v46, &v47);
  v15 = (void *)(v46 - 12);
  if ( (uint32_t *)(v46 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  v16 = (void *)(v47 - 12);
  if ( (uint32_t *)(v47 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  if ( s == nullptr )
  {
    sizeb = v12;
    Data = -16;
    free(sizeb);
    return Data;
  }
  fwrite(v12, DecodedBase64DataSize, 1u, s);
  savemanager::IStorageWrapper::CloseFile((int)(uintptr_t)(a1), s);
  free(v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "tempSaveFile", (int)(uintptr_t)(&v41) + 1);
  Data = savemanager::SaveGameManager::BeginLoad((int)(uintptr_t)(a1), (int)(uintptr_t)(&v48));
  if ( Data == 0 )
  {
    v39 = *((uint32_t *)a1 + 7);
    Data = savemanager::SaveGameManager::BeginSave((int)(uintptr_t)(a1), a2);
    if ( Data != 0 )
      goto LABEL_26;
    if ( v39 > 0 )
    {
      v37 = nullptr;
      while ( 1 )
      {
        v25 = savemanager::SaveGameManager::LoadBufferWithGLUID((FILE **)a1, (void **)&v49, &v50, a4);
        if ( v25 != 0 )
        {
          Data = v25;
          savemanager::SaveGameManager::EndLoad((FILE **)a1);
          Json::Value::Construct((int)(uintptr_t)(v54), nullptr);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), (char *)&unk_1B15112, (int)(uintptr_t)(&v41) + 2);
          savemanager::SaveGameManager::EndSave((char *)a1, (int)(uintptr_t)(&v51), (Json::Value::Self *)v54, 0, nullptr, nullptr);
          v26 = (void *)(v51 - 12);
          if ( (uint32_t *)(v51 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v26);
          }
          Json::Value::Destroy((Json::Value::Self *)v54);
          goto LABEL_8;
        }
        v18 = (uint32_t *)gaia::Gaia::GetInstance(sizea);
        v57[0] = v18[71];
        v58 = &dword_213B814;
        v59[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        v60 = &dword_213B814;
        v61 = &dword_213B814;
        v19 = v18[75];
        v57[1] = v18[72];
        v57[2] = v18[73];
        v57[3] = v18[74];
        v57[4] = v19;
        g4_std::string::assign_str(v59, v18 + 77);
        g4_std::string::assign_str(&v58, v18 + 76);
        g4_std::string::assign_str(&v60, v18 + 79);
        v59[1] = v18[78];
        g4_std::string::assign_str(&v61, v18 + 80);
        v20 = savemanager::SaveGameManager::SaveBufferWithGLUID(a1, v49, v50, (const gaia::GLUID::Self *)v57);
        v21 = v61 - 3;
        if ( v61 - 3 != dword_213B808 && __sync_fetch_and_add(v61 - 1, 0xFFFFFFFF) <= 0 )
        {
          v36 = (gaia::GLUID::Self *)v20;
          g4_std::string::Rep::M_destroy(v21);
          v20 = (int)(uintptr_t)(v36);
        }
        v22 = v60 - 3;
        if ( v60 - 3 != dword_213B808 && __sync_fetch_and_add(v60 - 1, 0xFFFFFFFF) <= 0 )
        {
          v35 = (gaia::GLUID::Self *)v20;
          g4_std::string::Rep::M_destroy(v22);
          v20 = (int)(uintptr_t)(v35);
        }
        v23 = (void *)(v59[0] - 12);
        if ( (uint32_t *)(v59[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v59[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          v34 = (gaia::GLUID::Self *)v20;
          g4_std::string::Rep::M_destroy(v23);
          v20 = (int)(uintptr_t)(v34);
        }
        v24 = v58 - 3;
        if ( v58 - 3 != dword_213B808 && __sync_fetch_and_add(v58 - 1, 0xFFFFFFFF) <= 0 )
        {
          v33 = (gaia::GLUID::Self *)v20;
          g4_std::string::Rep::M_destroy(v24);
          v20 = (int)(uintptr_t)(v33);
        }
        if ( v20 != 0 )
          break;
        free(v49);
        ++v37;
        v49 = nullptr;
        if ( v37 == (char *)v39 )
          goto LABEL_24;
      }
      Data = v20;
      savemanager::SaveGameManager::EndLoad((FILE **)a1);
      Json::Value::Construct((int)(uintptr_t)(v55), nullptr);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), (char *)&unk_1B15112, (int)(uintptr_t)(&v41) + 3);
      savemanager::SaveGameManager::EndSave((char *)a1, (int)(uintptr_t)(&v52), (Json::Value::Self *)v55, 0, nullptr, nullptr);
      v28 = (void *)(v52 - 12);
      if ( (uint32_t *)(v52 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v28);
      }
      Json::Value::Destroy((Json::Value::Self *)v55);
      free(v49);
      goto LABEL_8;
    }
LABEL_24:
    Json::Value::Construct((int)(uintptr_t)(v56), nullptr);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), (char *)&unk_1B15112, (int)(uintptr_t)(&v42));
    Data = savemanager::SaveGameManager::EndSave((char *)a1, (int)(uintptr_t)(&v53), (Json::Value::Self *)v56, 0, nullptr, nullptr);
    v27 = (void *)(v53 - 12);
    if ( (uint32_t *)(v53 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v27);
    }
    Json::Value::Destroy((Json::Value::Self *)v56);
    if ( Data != 0 )
LABEL_26:
      savemanager::SaveGameManager::EndLoad((FILE **)a1);
    else
      Data = savemanager::SaveGameManager::EndLoad((FILE **)a1);
  }
LABEL_8:
  v17 = (void *)(v48 - 12);
  if ( (uint32_t *)(v48 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  return Data;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::RestoreCloudSave  (binary VA: 0x1381330)
// Original: savemanager::SaveGameManager::RestoreCloudSave
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::RestoreCloudSave(glwebtools::Thread::Self **a1, uint32_t *a2, char **a3, char a4, void *a5, void *a6)
{
  int v6;
  char *v8;
  int Instance;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  glwebtools::Thread::Self *v17;
  void **v18;
  Json::Value::Self *v19;
  typedef gaia::Gaia::Self *_g4_t_v20;
  typedef gaia::Gaia::Self *_g4_t_v21;
  typedef void **_g4_t_v22;
  typedef void *_g4_t_SeshatFileKey;
  typedef glwebtools::Thread::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[20];
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v21)) > _g4_s1 ? (0u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v22)) > _g4_s2 ? (0u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_SeshatFileKey)) > _g4_s3 ? (36u + sizeof(_g4_t_SeshatFileKey)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v24)) > _g4_s4 ? (36u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (51u + sizeof(_g4_t_v25)) > _g4_s5 ? (51u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v26)) > _g4_s6 ? (60u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v27)) > _g4_s7 ? (64u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v28)) > _g4_s8 ? (68u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v29)) > _g4_s9 ? (72u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v30)) > _g4_s10 ? (88u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v31)) > _g4_s11 ? (108u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v32)) > _g4_s12 ? (112u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (120u + sizeof(_g4_t_v33)) > _g4_s13 ? (120u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (124u + sizeof(_g4_t_v34)) > _g4_s14 ? (124u + sizeof(_g4_t_v34)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_SeshatFileKey &SeshatFileKey = *reinterpret_cast<_g4_t_SeshatFileKey *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 51u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 88u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 108u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 120u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 124u);

  if ( a4 != 0 )
  {
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 15));
    if ( a1[14] != nullptr )
    {
      v6 = -15;
      if ( glwebtools::Thread::GetState(a1[14]) != 1 )
      {
LABEL_4:
        glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 15));
        return v6;
      }
      v17 = a1[14];
      if ( v17 != nullptr )
      {
        glwebtools::Thread::Destroy(a1[14]);
        opDelete(v17);
      }
      a1[14] = nullptr;
    }
    v18 = (void **)opNew(0x90u);
    Json::Value::Construct((int)(uintptr_t)(v18 + 3), nullptr);
    v18[7] = nullptr;
    v18[8] = nullptr;
    v18[9] = nullptr;
    v18[10] = nullptr;
    savemanager::CloudSave::Construct((savemanager::CloudSave::Self *)(v18 + 11));
    v18[2] = &loc_4;
    v18[1] = a5;
    *v18 = a6;
    Json::Value::Construct((int)(uintptr_t)(v29), a2);
    v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "saveFileName");
    Json::Value::opAssign(v19, (const Json::Value::Self *)v29);
    Json::Value::Destroy((Json::Value::Self *)v29);
    savemanager::CloudSave::opAssign((char **)v18 + 11, a3);
    v24 = (glwebtools::Thread::Self *)opNew(0x18u);
    glwebtools::Thread::Construct(
      v24,
      (void (*)(void *, void *))((int (*)(glwebtools::Thread::Self **, uint32_t *))savemanager::SaveGameManager::PerformAsyncAction),
      a1,
      v18,
      "RestoreCloudSave Thread");
    a1[14] = v24;
    if ( v24 != nullptr )
    {
      v6 = 0;
      glwebtools::Thread::Start(v24);
      glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 15));
      return v6;
    }
    savemanager::CloudSave::Destroy(v18 + 11);
    if ( v18[7] != nullptr )
      opDelete(v18[7]);
    Json::Value::Destroy((Json::Value::Self *)(v18 + 3));
    v22 = v18;
    v6 = -14;
    opDelete(v22);
    goto LABEL_4;
  }
  v8 = a3[24];
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "storage", (int)(uintptr_t)(&v25));
  Instance = gaia::Gaia::GetInstance(v20);
  v6 = gaia::Gaia::Authorize(Instance, &v26, v8, 0, 0, 0);
  v10 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  if ( v6 == 0 )
  {
    gaia::Gaia::GetInstance(v21);
    gaia::Gaia::GetJanusToken(&v27);
    SeshatFileKey = (void *)savemanager::CloudSave::GetSeshatFileKey((savemanager::CloudSave::Self *)a3);
    savemanager::CloudSave::GetGLUID((savemanager::CloudSave::Self *)v30, (uint32_t *)(a3));
    v6 = savemanager::SaveGameManager::RestoreCloudSave(
           (savemanager::SaveGameManager::Self *)a1,
           (int)(uintptr_t)(a2),
           (int)(uintptr_t)(&v27),
           (const gaia::GLUID::Self *)v30,
           (int)(uintptr_t)(SeshatFileKey));
    v11 = (void *)(v34 - 12);
    if ( (uint32_t *)(v34 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v33 - 12);
    if ( (uint32_t *)(v33 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = (void *)(v32 - 12);
    if ( (uint32_t *)(v32 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    v14 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "tempSaveFile", (int)(uintptr_t)(&v25) + 1);
    savemanager::IStorageWrapper::Remove(a1, &v28);
    v15 = (void *)(v28 - 12);
    if ( (uint32_t *)(v28 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = (void *)(v27 - 12);
    if ( (uint32_t *)(v27 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::RestoreCustomerCareSave  (binary VA: 0x1381800)
// Original: savemanager::SaveGameManager::RestoreCustomerCareSave
// ----------------------------------------------------------------------------
savemanager::CloudSave::Self * savemanager::SaveGameManager::RestoreCustomerCareSave(glwebtools::Thread::Self **a1, Json::Value::Self *a2, int a3, char a4, void *a5, void *a6)
{
  int v6;
  uint32_t *v7;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  glwebtools::Mutex::Self *v16;
  int v17;
  Json::Value::Self *v18;
  void *v19;
  char *v20;
  int v21;
  Json::Value::Self *v22;
  void *v23;
  void *v24;
  Json::Value::Self *v25;
  void *v26;
  void *v27;
  Json::Value::Self *v28;
  void *v29;
  size_t n;
  Json::Value::Self *v31;
  void *v32;
  void *v33;
  int State;
  glwebtools::Thread::Self *v35;
  void **v36;
  Json::Value::Self *v37;
  glwebtools::Thread::Self *v38;
  Json::Value::Self *v39;
  void *v40;
  void *v41;
  int Instance;
  int refreshed;
  void *v44;
  void *v45;
  char *v46;
  char *v47;
  int v48;
  int v49;
  int v50;
  char *v51;
  int v52;
  char *v53;
  int v54;
  void **v55;
  char *v56;
  void *v57;
  void **v58;
  char *v59;
  void *v60;
  void *v61;
  Json::Value::Self *v62;
  int v63;
  char *v64;
  int v65;
  typedef gaia::Gaia::Self *_g4_t_dest;
  typedef bool _g4_t_v67;
  typedef savemanager::CloudSave::Self *_g4_t_v68;
  typedef savemanager::CloudSave::Self *_g4_t_v69;
  typedef savemanager::CloudSave::Self *_g4_t_v70;
  typedef savemanager::CloudSave::Self *_g4_t_v71;
  typedef savemanager::CloudSave::Self *_g4_t_v72;
  typedef savemanager::CloudSave::Self *_g4_t_v73;
  typedef savemanager::CloudSave::Self *_g4_t_v74;
  typedef savemanager::CloudSave::Self *_g4_t_v75;
  typedef savemanager::CloudSave::Self *_g4_t_v76;
  typedef savemanager::CloudSave::Self *_g4_t_v77;
  typedef char *_g4_t_v78;
  typedef Json::Value::Self *_g4_t_i;
  typedef Json::Value::Self *_g4_t_v80;
  typedef char *_g4_t_v81;
  typedef char *_g4_t_v82;
  typedef char *_g4_t_v83;
  typedef Json::Value::Self *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef char _g4_t_v97[4];
  typedef int _g4_t_v98;
  typedef void *_g4_t_src;
  typedef int _g4_t_v100;
  typedef uint8_t _g4_t_v101[16];
  typedef glwebtools::Codec::Self *_g4_t_v102[4];
  typedef int _g4_t_v103;
  typedef int _g4_t_v104[4];
  typedef int _g4_t_v105;
  typedef int _g4_t_v106[2];
  typedef int _g4_t_v107;
  typedef uint32_t *_g4_t_v108;
  typedef void *_g4_t_v109[39];
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v67)) > _g4_s1 ? (16u + sizeof(_g4_t_v67)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v68)) > _g4_s2 ? (32u + sizeof(_g4_t_v68)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v69)) > _g4_s3 ? (32u + sizeof(_g4_t_v69)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v70)) > _g4_s4 ? (32u + sizeof(_g4_t_v70)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v71)) > _g4_s5 ? (32u + sizeof(_g4_t_v71)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v72)) > _g4_s6 ? (32u + sizeof(_g4_t_v72)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v73)) > _g4_s7 ? (32u + sizeof(_g4_t_v73)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v74)) > _g4_s8 ? (32u + sizeof(_g4_t_v74)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v75)) > _g4_s9 ? (32u + sizeof(_g4_t_v75)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v76)) > _g4_s10 ? (32u + sizeof(_g4_t_v76)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v77)) > _g4_s11 ? (32u + sizeof(_g4_t_v77)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v78)) > _g4_s12 ? (36u + sizeof(_g4_t_v78)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_i)) > _g4_s13 ? (40u + sizeof(_g4_t_i)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v80)) > _g4_s14 ? (44u + sizeof(_g4_t_v80)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v81)) > _g4_s15 ? (48u + sizeof(_g4_t_v81)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v82)) > _g4_s16 ? (52u + sizeof(_g4_t_v82)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v83)) > _g4_s17 ? (56u + sizeof(_g4_t_v83)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v84)) > _g4_s18 ? (60u + sizeof(_g4_t_v84)) : _g4_s18,
    _g4_s20 = (69u + sizeof(_g4_t_v85)) > _g4_s19 ? (69u + sizeof(_g4_t_v85)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v86)) > _g4_s20 ? (72u + sizeof(_g4_t_v86)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v87)) > _g4_s21 ? (96u + sizeof(_g4_t_v87)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v88)) > _g4_s22 ? (100u + sizeof(_g4_t_v88)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v89)) > _g4_s23 ? (104u + sizeof(_g4_t_v89)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v90)) > _g4_s24 ? (108u + sizeof(_g4_t_v90)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v91)) > _g4_s25 ? (112u + sizeof(_g4_t_v91)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v92)) > _g4_s26 ? (116u + sizeof(_g4_t_v92)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v93)) > _g4_s27 ? (120u + sizeof(_g4_t_v93)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v94)) > _g4_s28 ? (124u + sizeof(_g4_t_v94)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v95)) > _g4_s29 ? (128u + sizeof(_g4_t_v95)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v96)) > _g4_s30 ? (132u + sizeof(_g4_t_v96)) : _g4_s30,
    _g4_s32 = (136u + sizeof(_g4_t_v97)) > _g4_s31 ? (136u + sizeof(_g4_t_v97)) : _g4_s31,
    _g4_s33 = (140u + sizeof(_g4_t_v98)) > _g4_s32 ? (140u + sizeof(_g4_t_v98)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_src)) > _g4_s33 ? (144u + sizeof(_g4_t_src)) : _g4_s33,
    _g4_s35 = (148u + sizeof(_g4_t_v100)) > _g4_s34 ? (148u + sizeof(_g4_t_v100)) : _g4_s34,
    _g4_s36 = (152u + sizeof(_g4_t_v101)) > _g4_s35 ? (152u + sizeof(_g4_t_v101)) : _g4_s35,
    _g4_s37 = (168u + sizeof(_g4_t_v102)) > _g4_s36 ? (168u + sizeof(_g4_t_v102)) : _g4_s36,
    _g4_s38 = (184u + sizeof(_g4_t_v103)) > _g4_s37 ? (184u + sizeof(_g4_t_v103)) : _g4_s37,
    _g4_s39 = (188u + sizeof(_g4_t_v104)) > _g4_s38 ? (188u + sizeof(_g4_t_v104)) : _g4_s38,
    _g4_s40 = (204u + sizeof(_g4_t_v105)) > _g4_s39 ? (204u + sizeof(_g4_t_v105)) : _g4_s39,
    _g4_s41 = (208u + sizeof(_g4_t_v106)) > _g4_s40 ? (208u + sizeof(_g4_t_v106)) : _g4_s40,
    _g4_s42 = (216u + sizeof(_g4_t_v107)) > _g4_s41 ? (216u + sizeof(_g4_t_v107)) : _g4_s41,
    _g4_s43 = (220u + sizeof(_g4_t_v108)) > _g4_s42 ? (220u + sizeof(_g4_t_v108)) : _g4_s42,
    _g4_s44 = (224u + sizeof(_g4_t_v109)) > _g4_s43 ? (224u + sizeof(_g4_t_v109)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 16u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 32u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 32u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 32u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 32u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 32u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 32u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 36u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 40u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 44u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 48u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 52u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 56u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 60u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 69u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 72u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 96u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 100u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 104u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 108u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 112u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 116u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 120u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 124u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 128u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 132u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 136u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 140u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 144u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 148u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 152u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 168u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 184u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 188u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 204u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 208u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 216u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 220u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 224u);

  g4_std_compat::string_assign(a3, "tempCCSave.dat", 0xEu);
  if ( a4 == 0 )
  {
    v103 = 2;
    v87 = (int)(uintptr_t)(&dword_213B814);
    v88 = (int)(uintptr_t)(&dword_213B814);
    v89 = (int)(uintptr_t)(&dword_213B814);
    v90 = (int)(uintptr_t)(&dword_213B814);
    v105 = (int)(uintptr_t)(&dword_213B814);
    v106[0] = (int)(uintptr_t)(&dword_213B814);
    v107 = (int)(uintptr_t)(&dword_213B814);
    v108 = &dword_213B814;
    g4_std_compat::string_assign((int)(uintptr_t)(v106), &unk_1B15112, 0);
    g4_std_compat::string_assign((int)(uintptr_t)(&v105), &unk_1B15112, 0);
    g4_std_compat::string_assign((int)(uintptr_t)(&v107), &unk_1B15112, 0);
    memset(v104, 0, sizeof(v104));
    v106[1] = 0;
    if ( !Json::Value::isMember(a2, "type") )
      goto LABEL_3;
    v18 = (Json::Value::Self *)Json::Value::opIndex(a2, "type");
    if ( Json::Value::type(v18) != 4 )
      goto LABEL_3;
    v19 = Json::Value::opIndex(a2, "type");
    Json::Value::asString((Json::Value::Self *)v109, (int)(uintptr_t)(v19));
    if ( g4_std::string::compare((int)(uintptr_t)(v109), "OptionalRestoreSave") != 0 )
      g4_std::string::compare((int)(uintptr_t)(v109), "MandatoryRestoreSave");
    v20 = (char *)v109[0] - 12;
    if ( (char *)v109[0] - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v109[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v20);
    }
    if ( Json::Value::isMember(a2, "version") )
    {
      v31 = (Json::Value::Self *)Json::Value::opIndex(a2, "version");
      if ( Json::Value::type(v31) == 4 )
      {
        v32 = Json::Value::opIndex(a2, "version");
        Json::Value::asString((Json::Value::Self *)&v91, (int)(uintptr_t)(v32));
        g4_std::string::assign_str(&v88, &v91);
        v33 = (void *)(v91 - 12);
        if ( (uint32_t *)(v91 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v91 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v33);
        }
      }
    }
    v21 = g4_std::string::compare((int)(uintptr_t)(&v88), "1");
    v6 = -123;
    if ( v21 != 0 )
      goto LABEL_4;
    if ( !Json::Value::isMember(a2, "token") )
      goto LABEL_3;
    v22 = (Json::Value::Self *)Json::Value::opIndex(a2, "token");
    if ( Json::Value::type(v22) != 4 )
      goto LABEL_3;
    v23 = Json::Value::opIndex(a2, "token");
    Json::Value::asString((Json::Value::Self *)&v92, (int)(uintptr_t)(v23));
    g4_std::string::assign_str(&v87, &v92);
    v24 = (void *)(v92 - 12);
    if ( (uint32_t *)(v92 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v92 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v24);
    }
    if ( Json::Value::isMember(a2, "refresh_token") )
    {
      v39 = (Json::Value::Self *)Json::Value::opIndex(a2, "refresh_token");
      if ( Json::Value::type(v39) == 4 )
      {
        g4_std_compat::string_assign((int)(uintptr_t)(&v87), &unk_1B15112, 0);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v93), (char *)&unk_1B15112, (int)(uintptr_t)(&v85));
        v40 = Json::Value::opIndex(a2, "refresh_token");
        Json::Value::asString((Json::Value::Self *)&v94, (int)(uintptr_t)(v40));
        g4_std::string::assign_str(&v90, &v94);
        v41 = (void *)(v94 - 12);
        if ( (uint32_t *)(v94 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v94 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v41);
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v96), (char *)&unk_1B15112, (int)(uintptr_t)(&v85) + 2);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v95), "refresh_token", (int)(uintptr_t)(&v85) + 1);
        Instance = gaia::Gaia::GetInstance(dest);
        refreshed = gaia::Gaia_Janus::RefreshAccessToken(
                      *(gaia::Gaia_Janus::Self **)(Instance + 560),
                      (int)(uintptr_t)(&v93),
                      (int)(uintptr_t)(&v95),
                      (int)(uintptr_t)(&v90),
                      (int)(uintptr_t)(&v96),
                      0,
                      0,
                      0);
        v44 = (void *)(v95 - 12);
        if ( (uint32_t *)(v95 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v95 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v44);
        }
        v45 = (void *)(v96 - 12);
        if ( (uint32_t *)(v96 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v96 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v45);
        }
        if ( refreshed == 0 )
        {
          Json::Reader::Construct((Json::Reader::Self *)v109);
          Json::Value::Construct((int)(uintptr_t)(v102), nullptr);
          if ( (uint8_t)Json::Reader::parse((const char **)v109, (int)(uintptr_t)(&v93), (Json::Value::Self *)v102, 1) != 0
            && Json::Value::isMember((Json::Value::Self *)v102, "access_token") )
          {
            v62 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v102, "access_token");
            if ( Json::Value::type(v62) == 4 )
            {
              v63 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v102, "access_token"));
              Json::Value::asString((Json::Value::Self *)v97, v63);
              g4_std::string::assign_str(&v87, v97);
              g4_std::string::Destroy(v97);
              Json::Value::Destroy((Json::Value::Self *)v102);
              sub_545800((int)(uintptr_t)(v109));
              g4_std::string::Destroy(&v93);
              goto LABEL_26;
            }
          }
          Json::Value::Destroy((Json::Value::Self *)v102);
          v46 = (char *)v109[26] - 12;
          if ( (char *)v109[26] - 12 != (char *)dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)v109[26] - 1, 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v46);
          }
          v47 = (char *)v109[20] - 12;
          if ( (char *)v109[20] - 12 != (char *)dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)v109[20] - 1, 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v47);
          }
          v82 = (char *)v109[17];
          v81 = (char *)v109[16];
          v78 = (char *)v109[12];
          v80 = (Json::Value::Self *)v109[19];
          v84 = (Json::Value::Self *)v109[15];
          v83 = (char *)v109[14];
          for ( i = (Json::Value::Self *)((char *)v109[15] + 4); v80 > i; i = (Json::Value::Self *)((char *)i + 4) )
          {
            v48 = 0;
            v49 = *(uint32_t *)i + 12;
            do
            {
              v50 = *(uint32_t *)(v49 + v48);
              if ( (uint32_t *)(v50 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v50 - 12));
              }
              v48 += 20;
            }
            while ( v48 != 500 );
          }
          if ( v80 == v84 )
          {
            if ( v81 != v78 )
            {
              v64 = v78;
              do
              {
                v65 = *((uint32_t *)v64 + 3);
                if ( (uint32_t *)(v65 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v65 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy((void *)(v65 - 12));
                }
                v64 += 20;
              }
              while ( v81 != v64 );
            }
          }
          else
          {
            if ( v78 != v83 )
            {
              v51 = v78;
              do
              {
                v52 = *((uint32_t *)v51 + 3);
                if ( (uint32_t *)(v52 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy((void *)(v52 - 12));
                }
                v51 += 20;
              }
              while ( v83 != v51 );
            }
            if ( v81 != v82 )
            {
              v53 = v82;
              do
              {
                v54 = *((uint32_t *)v53 + 3);
                if ( (uint32_t *)(v54 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy((void *)(v54 - 12));
                }
                v53 += 20;
              }
              while ( v81 != v53 );
            }
          }
          if ( v109[10] != nullptr )
          {
            v55 = (void **)v109[15];
            v56 = (char *)v109[19] + 4;
            if ( (char *)v109[19] + 4 > v109[15] )
            {
              do
              {
                v57 = *v55++;
                opDelete(v57);
              }
              while ( v56 > (char *)v55 );
            }
            opDelete(v109[10]);
          }
          if ( v109[0] != nullptr )
          {
            v58 = (void **)v109[5];
            v59 = (char *)v109[9] + 4;
            if ( (char *)v109[9] + 4 > v109[5] )
            {
              do
              {
                v60 = *v58++;
                opDelete(v60);
              }
              while ( v59 > (char *)v58 );
            }
            opDelete(v109[0]);
          }
        }
        v61 = (void *)(v93 - 12);
        if ( (uint32_t *)(v93 - 12) == dword_213B808 )
        {
          v6 = -302;
        }
        else
        {
          v6 = -302;
          if ( __sync_fetch_and_add((volatile int32_t *)(v93 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v61);
            v6 = -302;
          }
        }
        goto LABEL_4;
      }
    }
LABEL_26:
    if ( Json::Value::isMember(a2, "seshatSaveKey") )
    {
      v25 = (Json::Value::Self *)Json::Value::opIndex(a2, "seshatSaveKey");
      if ( Json::Value::type(v25) == 4 )
      {
        v26 = Json::Value::opIndex(a2, "seshatSaveKey");
        Json::Value::asString((Json::Value::Self *)&v98, (int)(uintptr_t)(v26));
        g4_std::string::assign_str(&v89, &v98);
        v27 = (void *)(v98 - 12);
        if ( (uint32_t *)(v98 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v98 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v27);
        }
        if ( Json::Value::isMember(a2, "key") )
        {
          v28 = (Json::Value::Self *)Json::Value::opIndex(a2, "key");
          if ( Json::Value::type(v28) == 4 )
          {
            v29 = Json::Value::opIndex(a2, "key");
            Json::Value::asString((Json::Value::Self *)v102, (int)(uintptr_t)(v29));
            memset(v109, 0, 0x80u);
            glwebtools::Codec::DecodeBase64(v102[0], *((const char **)v102[0] - 3), (unsigned int)(uintptr_t)(v109), nullptr, v67);
            sub_193A970((int)(uintptr_t)(&src), v109, 16, (int)(uintptr_t)(&v86));
            memset(v104, 0, sizeof(v104));
            n = 16;
            if ( *((uint32_t *)src - 3) <= 0x10u )
              n = *((uint32_t *)src - 3);
            memcpy(v104, src, n);
            g4_std::string::Destroy(&src);
            g4_std::string::Destroy(v102);
            v69 = (savemanager::CloudSave::Self *)savemanager::SaveGameManager::RestoreCloudSave(
                                              (savemanager::SaveGameManager::Self *)a1,
                                              a3,
                                              (int)(uintptr_t)(&v87),
                                              (const gaia::GLUID::Self *)&v103,
                                              (int)(uintptr_t)(&v89));
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v100), "tempSaveFile", (int)(uintptr_t)(&v86) + 1);
            savemanager::IStorageWrapper::Remove(a1, &v100);
            g4_std::string::Destroy(&v100);
            v6 = (int)(uintptr_t)(v69);
            if ( v69 == nullptr )
            {
              *((uint8_t *)a1 + 36) = 1;
              gaia::GLUID::Destroy((gaia::GLUID::Self *)&v103);
              g4_std::string::Destroy(&v90);
              g4_std::string::Destroy(&v89);
              g4_std::string::Destroy(&v88);
              g4_std::string::Destroy(&v87);
              return nullptr;
            }
LABEL_4:
            v7 = v108 - 3;
            if ( v108 - 3 != dword_213B808 && __sync_fetch_and_add(v108 - 1, 0xFFFFFFFF) <= 0 )
            {
              v71 = (savemanager::CloudSave::Self *)v6;
              g4_std::string::Rep::M_destroy(v7);
              v6 = (int)(uintptr_t)(v71);
            }
            v8 = (void *)(v107 - 12);
            if ( (uint32_t *)(v107 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v107 - 4), 0xFFFFFFFF) <= 0 )
            {
              v75 = (savemanager::CloudSave::Self *)v6;
              g4_std::string::Rep::M_destroy(v8);
              v6 = (int)(uintptr_t)(v75);
            }
            v9 = (void *)(v106[0] - 12);
            if ( (uint32_t *)(v106[0] - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v106[0] - 4), 0xFFFFFFFF) <= 0 )
            {
              v74 = (savemanager::CloudSave::Self *)v6;
              g4_std::string::Rep::M_destroy(v9);
              v6 = (int)(uintptr_t)(v74);
            }
            v10 = (void *)(v105 - 12);
            if ( (uint32_t *)(v105 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v105 - 4), 0xFFFFFFFF) <= 0 )
            {
              v73 = (savemanager::CloudSave::Self *)v6;
              g4_std::string::Rep::M_destroy(v10);
              v6 = (int)(uintptr_t)(v73);
            }
            v11 = (void *)(v90 - 12);
            if ( (uint32_t *)(v90 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v90 - 4), 0xFFFFFFFF) <= 0 )
            {
              v72 = (savemanager::CloudSave::Self *)v6;
              g4_std::string::Rep::M_destroy(v11);
              v6 = (int)(uintptr_t)(v72);
            }
            v12 = (void *)(v89 - 12);
            if ( (uint32_t *)(v89 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v89 - 4), 0xFFFFFFFF) <= 0 )
            {
              v77 = (savemanager::CloudSave::Self *)v6;
              g4_std::string::Rep::M_destroy(v12);
              v6 = (int)(uintptr_t)(v77);
            }
            v13 = (void *)(v88 - 12);
            if ( (uint32_t *)(v88 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v88 - 4), 0xFFFFFFFF) <= 0 )
            {
              v76 = (savemanager::CloudSave::Self *)v6;
              g4_std::string::Rep::M_destroy(v13);
              v6 = (int)(uintptr_t)(v76);
            }
            v14 = (void *)(v87 - 12);
            if ( (uint32_t *)(v87 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v87 - 4), 0xFFFFFFFF) <= 0 )
            {
              v70 = (savemanager::CloudSave::Self *)v6;
              g4_std::string::Rep::M_destroy(v14);
              return v70;
            }
            return (savemanager::CloudSave::Self *)v6;
          }
        }
      }
    }
LABEL_3:
    v6 = -122;
    goto LABEL_4;
  }
  v16 = (glwebtools::Mutex::Self *)(a1 + 15);
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 15));
  Json::Value::Construct((Json::Value::Self *)v101, 0);
  if ( Json::Value::opEq((const char **)a2, (const Json::Value::Self *)v101) != 0 || Json::Value::type(a2) != 7 )
  {
    Json::Value::Destroy((Json::Value::Self *)v101);
    v17 = -122;
  }
  else
  {
    Json::Value::Destroy((Json::Value::Self *)v101);
    if ( a1[14] != nullptr )
    {
      State = glwebtools::Thread::GetState(a1[14]);
      v17 = -15;
      if ( State != 1 )
        goto LABEL_15;
      v35 = a1[14];
      if ( v35 != nullptr )
      {
        glwebtools::Thread::Destroy(a1[14]);
        opDelete(v35);
      }
      a1[14] = nullptr;
    }
    v36 = (void **)opNew(0x90u);
    Json::Value::Construct((int)(uintptr_t)(v36 + 3), nullptr);
    v36[7] = nullptr;
    v36[8] = nullptr;
    v36[9] = nullptr;
    v36[10] = nullptr;
    savemanager::CloudSave::Construct((savemanager::CloudSave::Self *)(v36 + 11));
    v36[2] = &loc_4 + 1;
    v36[1] = a5;
    *v36 = a6;
    v37 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v36 + 3), "CCMessage");
    Json::Value::opAssign(v37, a2);
    v38 = (glwebtools::Thread::Self *)opNew(0x18u);
    glwebtools::Thread::Construct(
      v38,
      (void (*)(void *, void *))((int (*)(glwebtools::Thread::Self **, uint32_t *))savemanager::SaveGameManager::PerformAsyncAction),
      a1,
      v36,
      "RestoreCloudSave Thread");
    a1[14] = v38;
    if ( v38 != nullptr )
    {
      glwebtools::Thread::Start(v38);
      glwebtools::Mutex::Unlock(v16);
      return nullptr;
    }
    savemanager::CloudSave::Destroy(v36 + 11);
    if ( v36[7] != nullptr )
      opDelete(v36[7]);
    Json::Value::Destroy((Json::Value::Self *)(v36 + 3));
    opDelete(v36);
    v17 = -14;
  }
LABEL_15:
  v68 = (savemanager::CloudSave::Self *)v17;
  glwebtools::Mutex::Unlock(v16);
  return v68;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::RestoreCloudSave  (binary VA: 0x1382810)
// Original: savemanager::SaveGameManager::RestoreCloudSave
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::RestoreCloudSave(glwebtools::Thread::Self **a1, uint32_t *a2, int a3, char **a4, char a5, void *a6, void *a7)
{
  int TableOfContents;
  glwebtools::Thread::Self *v9;
  void **v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  const Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  int v19;
  const char *v20;
  Json::Value::Self *v21;
  int v22;
  char *v23;
  char *v24;
  volatile int32_t *v25;
  size_t n;
  int Instance;
  void *v28;
  uint32_t *v29;
  void *v30;
  void *v31;
  void *v32;
  void *v33;
  void *v34;
  typedef char *_g4_t_sa;
  typedef gaia::Gaia::Self *_g4_t_sb;
  typedef char *_g4_t_s;
  typedef bool _g4_t_v38;
  typedef Json::Value::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef glwebtools::Codec::Self *_g4_t_v42;
  typedef char *_g4_t_v43;
  typedef void *_g4_t_src;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint8_t _g4_t_v48[16];
  typedef uint8_t _g4_t_v49[16];
  typedef uint8_t _g4_t_v50[16];
  typedef uint8_t _g4_t_v51[16];
  typedef uint8_t _g4_t_v52[16];
  typedef int _g4_t_v53;
  typedef int _g4_t_dest;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59[2];
  typedef int _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef unsigned int _g4_t_v62[35];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (0u + sizeof(_g4_t_sa)) > _g4_s0 ? (0u + sizeof(_g4_t_sa)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_sb)) > _g4_s1 ? (0u + sizeof(_g4_t_sb)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_s)) > _g4_s2 ? (0u + sizeof(_g4_t_s)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v38)) > _g4_s3 ? (16u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v39)) > _g4_s4 ? (40u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (51u + sizeof(_g4_t_v40)) > _g4_s5 ? (51u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v41)) > _g4_s6 ? (52u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v42)) > _g4_s7 ? (64u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v43)) > _g4_s8 ? (68u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_src)) > _g4_s9 ? (72u + sizeof(_g4_t_src)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v45)) > _g4_s10 ? (76u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v46)) > _g4_s11 ? (80u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v47)) > _g4_s12 ? (84u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v48)) > _g4_s13 ? (88u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v49)) > _g4_s14 ? (104u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (120u + sizeof(_g4_t_v50)) > _g4_s15 ? (120u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (136u + sizeof(_g4_t_v51)) > _g4_s16 ? (136u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (152u + sizeof(_g4_t_v52)) > _g4_s17 ? (152u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (168u + sizeof(_g4_t_v53)) > _g4_s18 ? (168u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (172u + sizeof(_g4_t_dest)) > _g4_s19 ? (172u + sizeof(_g4_t_dest)) : _g4_s19,
    _g4_s21 = (176u + sizeof(_g4_t_v55)) > _g4_s20 ? (176u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (180u + sizeof(_g4_t_v56)) > _g4_s21 ? (180u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (184u + sizeof(_g4_t_v57)) > _g4_s22 ? (184u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (188u + sizeof(_g4_t_v58)) > _g4_s23 ? (188u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (192u + sizeof(_g4_t_v59)) > _g4_s24 ? (192u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (200u + sizeof(_g4_t_v60)) > _g4_s25 ? (200u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (204u + sizeof(_g4_t_v61)) > _g4_s26 ? (204u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (208u + sizeof(_g4_t_v62)) > _g4_s27 ? (208u + sizeof(_g4_t_v62)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 0u);
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 0u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 51u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 88u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 104u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 120u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 136u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 152u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 168u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 172u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 176u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 180u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 184u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 188u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 192u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 200u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 204u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 208u);

  if ( a5 != 0 )
  {
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 15));
    if ( a1[14] != nullptr )
    {
      TableOfContents = -15;
      if ( glwebtools::Thread::GetState(a1[14]) != 1 )
      {
LABEL_4:
        glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 15));
        return TableOfContents;
      }
      v9 = a1[14];
      if ( v9 != nullptr )
      {
        glwebtools::Thread::Destroy(a1[14]);
        opDelete(v9);
      }
      a1[14] = nullptr;
    }
    v10 = (void **)opNew(0x90u);
    Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
    v10[7] = nullptr;
    v10[8] = nullptr;
    v10[9] = nullptr;
    v10[10] = nullptr;
    savemanager::CloudSave::Construct((savemanager::CloudSave::Self *)(v10 + 11));
    v10[2] = &dword_0 + 3;
    v10[1] = a6;
    *v10 = a7;
    Json::Value::Construct((int)(uintptr_t)(v48), a2);
    v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "saveFileName");
    Json::Value::opAssign(v11, (const Json::Value::Self *)v48);
    Json::Value::Destroy((Json::Value::Self *)v48);
    Json::Value::Construct((Json::Value::Self *)v49, a3);
    v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "credentials");
    Json::Value::opAssign(v12, (const Json::Value::Self *)v49);
    Json::Value::Destroy((Json::Value::Self *)v49);
    Json::Value::Construct((int)(uintptr_t)(v50), a4);
    v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "seshatKeyValue");
    Json::Value::opAssign(v13, (const Json::Value::Self *)v50);
    Json::Value::Destroy((Json::Value::Self *)v50);
    v39 = (Json::Value::Self *)opNew(0x18u);
    glwebtools::Thread::Construct(
      v39,
      (void (*)(void *, void *))((int (*)(glwebtools::Thread::Self **, uint32_t *))savemanager::SaveGameManager::PerformAsyncAction),
      a1,
      v10,
      "RestoreCloudSave Thread");
    a1[14] = (glwebtools::Thread::Self *)(v39);
    if ( v39 != nullptr )
    {
      TableOfContents = 0;
      glwebtools::Thread::Start(v39);
      glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 15));
      return TableOfContents;
    }
    savemanager::CloudSave::Destroy(v10 + 11);
    if ( v10[7] != nullptr )
      opDelete(v10[7]);
    Json::Value::Destroy((Json::Value::Self *)(v10 + 3));
    sa = (char *)v10;
    TableOfContents = -14;
    opDelete(sa);
    goto LABEL_4;
  }
  Json::Value::Construct((int)(uintptr_t)(v51), nullptr);
  TableOfContents = savemanager::SaveGameManager::RetrieveTableOfContents((int)(uintptr_t)(a1), (Json::Value::Self *)v51, a3);
  if ( TableOfContents == 0 )
  {
    v14 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v51, "TOC");
    Json::Value::Construct((Json::Value::Self *)v52, v14);
    if ( Json::Value::isMember((Json::Value::Self *)v52, a4)
      && (v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v52, a4), Json::Value::isMember(v15, "GLUID"))
      && (v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v52, a4),
          v17 = (Json::Value::Self *)Json::Value::opIndex(v16, "GLUID"),
          Json::Value::type(v17) == 4) )
    {
      v53 = 2;
      v58 = (int)(uintptr_t)(&dword_213B814);
      v59[0] = (int)(uintptr_t)(&dword_213B814);
      v60 = (int)(uintptr_t)(&dword_213B814);
      v61 = &dword_213B814;
      g4_std_compat::string_assign((int)(uintptr_t)(v59), &unk_1B15112, 0);
      g4_std_compat::string_assign((int)(uintptr_t)(&v58), &unk_1B15112, 0);
      g4_std_compat::string_assign((int)(uintptr_t)(&v60), &unk_1B15112, 0);
      memset(v62, 0, 0x80u);
      dest = 0;
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v59[1] = 0;
      v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v52, a4);
      v19 = (int)(uintptr_t)(Json::Value::opIndex(v18, "GLUID"));
      Json::Value::asString((Json::Value::Self *)&v43, v19);
      v20 = (const char *)strlen(v43);
      v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v52, a4);
      v22 = (int)(uintptr_t)(Json::Value::opIndex(v21, "GLUID"));
      Json::Value::asString((Json::Value::Self *)&v42, v22);
      glwebtools::Codec::DecodeBase64(v42, v20, (unsigned int)(uintptr_t)(v62), nullptr, v38);
      v23 = (char *)v42 - 12;
      if ( (uint32_t *)((char *)v42 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v42 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v23);
      }
      v24 = v43 - 12;
      if ( v43 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v43 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v24);
      }
      sub_193A970((int)(uintptr_t)(&src), v62, 16, (int)(uintptr_t)(&v40));
      v25 = (volatile int32_t *)src;
      dest = 0;
      v55 = 0;
      v56 = 0;
      v57 = 0;
      n = 16;
      if ( *((uint32_t *)src - 3) <= 0x10u )
        n = *((uint32_t *)src - 3);
      memcpy(&dest, src, n);
      if ( v25 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v25 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)(v25 - 3));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "storage", (int)(uintptr_t)(&v41));
      Instance = gaia::Gaia::GetInstance(sb);
      TableOfContents = gaia::Gaia::Authorize(Instance, &v45, a3, 0, 0, 0);
      v28 = (void *)(v45 - 12);
      if ( (uint32_t *)(v45 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v28);
      }
      if ( TableOfContents == 0 )
      {
        gaia::Gaia::GetInstance((gaia::Gaia::Self *)s);
        gaia::Gaia::GetJanusToken(&v46);
        TableOfContents = savemanager::SaveGameManager::RestoreCloudSave(
                            (savemanager::SaveGameManager::Self *)a1,
                            (int)(uintptr_t)(a2),
                            (int)(uintptr_t)(&v46),
                            (const gaia::GLUID::Self *)&v53,
                            (int)(uintptr_t)(a4));
        v33 = (void *)(v46 - 12);
        if ( (uint32_t *)(v46 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v33);
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "tempSaveFile", (int)(uintptr_t)(&v41) + 1);
        savemanager::IStorageWrapper::Remove(a1, &v47);
        v34 = (void *)(v47 - 12);
        if ( (uint32_t *)(v47 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v34);
        }
      }
      v29 = v61 - 3;
      if ( v61 - 3 != dword_213B808 && __sync_fetch_and_add(v61 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v29);
      v30 = (void *)(v60 - 12);
      if ( (uint32_t *)(v60 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v60 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v30);
      }
      v31 = (void *)(v59[0] - 12);
      if ( (uint32_t *)(v59[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v59[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v31);
      }
      v32 = (void *)(v58 - 12);
      if ( (uint32_t *)(v58 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v32);
      }
    }
    else
    {
      TableOfContents = -13;
    }
    Json::Value::Destroy((Json::Value::Self *)v52);
  }
  Json::Value::Destroy((Json::Value::Self *)v51);
  return TableOfContents;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::GetFreeSpaceAvailableOnSeshat  (binary VA: 0x1383100)
// Original: savemanager::SaveGameManager::GetFreeSpaceAvailableOnSeshat
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::GetFreeSpaceAvailableOnSeshat(savemanager::SaveGameManager::Self *self, int *a2, int *a3, int *a4)
{
  int Profile;
  void *v5;
  void *v6;
  void *v7;
  gaia::BaseJSONServiceResponse::Self *v8;
  gaia::BaseJSONServiceResponse::Self *v9;
  const Json::Value::Self *JSONMessage;
  Json::Value::Self *v12;
  const Json::Value::Self *v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  void *v18;
  void *v19;
  const Json::Value::Self *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  Json::Value::Self *v24;
  Json::Value::Self *v25;
  Json::Value::Self *v26;
  typedef gaia::Gaia::Self *_g4_t_v27;
  typedef Json::Value::Self *_g4_t_v28;
  typedef gaia::Gaia::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v42;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[16];
  typedef uint8_t _g4_t_v47[16];
  typedef uint8_t _g4_t_v48[44];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v28)) > _g4_s1 ? (0u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v29)) > _g4_s2 ? (56u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (78u + sizeof(_g4_t_v30)) > _g4_s3 ? (78u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v31)) > _g4_s4 ? (80u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (84u + sizeof(_g4_t_v32)) > _g4_s5 ? (84u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v33)) > _g4_s6 ? (96u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (100u + sizeof(_g4_t_v34)) > _g4_s7 ? (100u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (104u + sizeof(_g4_t_v35)) > _g4_s8 ? (104u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v36)) > _g4_s9 ? (108u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v37)) > _g4_s10 ? (112u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (116u + sizeof(_g4_t_v38)) > _g4_s11 ? (116u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v39)) > _g4_s12 ? (120u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v40)) > _g4_s13 ? (124u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v41)) > _g4_s14 ? (128u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (132u + sizeof(_g4_t_v42)) > _g4_s15 ? (132u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (136u + sizeof(_g4_t_v43)) > _g4_s16 ? (136u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (140u + sizeof(_g4_t_v44)) > _g4_s17 ? (140u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (144u + sizeof(_g4_t_v45)) > _g4_s18 ? (144u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (160u + sizeof(_g4_t_v46)) > _g4_s19 ? (160u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (176u + sizeof(_g4_t_v47)) > _g4_s20 ? (176u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (192u + sizeof(_g4_t_v48)) > _g4_s21 ? (192u + sizeof(_g4_t_v48)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 78u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 84u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 100u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 132u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 136u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 140u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 144u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 160u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 176u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 192u);

  v42 = nullptr;
  v43 = nullptr;
  v44 = 0;
  *a2 = -1;
  *a3 = -1;
  *a4 = -1;
  Json::Value::Construct((int)(uintptr_t)(v45), (char *)&loc_6 + 1);
  v29 = *(gaia::Gaia::Self **)(gaia::Gaia::GetInstance(v27) + 568);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), (char *)&unk_1B15112, (int)(uintptr_t)(&v31));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), (char *)&unk_1B15112, (int)(uintptr_t)(&v30) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "me", (int)(uintptr_t)(&v30));
  Profile = gaia::Gaia_Seshat::GetProfile(
              v29,
              *((uint32_t *)self + 10),
              (int)(uintptr_t)(&v42),
              (int)(uintptr_t)(&v33),
              (int)(uintptr_t)(&v34),
              (int)(uintptr_t)(&v35),
              0,
              0,
              0);
  v5 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v35 - 12);
  if ( (uint32_t *)(v35 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  if ( Profile == 404 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), (char *)&unk_1B15112, (int)(uintptr_t)(&v31) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), (char *)&unk_1B15112, (int)(uintptr_t)(&v31) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "me", (int)(uintptr_t)(&v31) + 1);
    Profile = gaia::Gaia_Seshat::SetProfile(
                v29,
                *((uint32_t *)self + 10),
                (Json::Value::Self *)v45,
                4,
                (int)(uintptr_t)(&v36),
                (int)(uintptr_t)(&v37),
                (int)(uintptr_t)(&v38),
                0,
                0,
                0);
    v14 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    v15 = (void *)(v37 - 12);
    if ( (uint32_t *)(v37 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = (void *)(v38 - 12);
    if ( (uint32_t *)(v38 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    if ( Profile != 0 )
      goto LABEL_6;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), (char *)&unk_1B15112, (int)(uintptr_t)(&v32) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), (char *)&unk_1B15112, (int)(uintptr_t)(&v32) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "me", (int)(uintptr_t)(&v32));
    Profile = gaia::Gaia_Seshat::GetProfile(
                v29,
                *((uint32_t *)self + 10),
                (int)(uintptr_t)(&v42),
                (int)(uintptr_t)(&v39),
                (int)(uintptr_t)(&v40),
                (int)(uintptr_t)(&v41),
                0,
                0,
                0);
    v17 = (void *)(v39 - 12);
    if ( (uint32_t *)(v39 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
    }
    v18 = (void *)(v40 - 12);
    if ( (uint32_t *)(v40 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    v19 = (void *)(v41 - 12);
    if ( (uint32_t *)(v41 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
  }
  if ( Profile == 0 )
  {
    Profile = 0;
    if ( -858993459 * ((v43 - v42) >> 2) != 0 )
    {
      JSONMessage = (const Json::Value::Self *)gaia::BaseJSONServiceResponse::GetJSONMessage(v42);
      Json::Value::Construct((Json::Value::Self *)v46, JSONMessage);
      if ( !Json::Value::isMember((Json::Value::Self *)v46, "@quota")
        || (v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v46, "@quota"), Json::Value::type(v12) != 7) )
      {
        Profile = 0;
        Json::Value::Destroy((Json::Value::Self *)v46);
        goto LABEL_6;
      }
      v13 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v46, "@quota");
      Json::Value::Construct((Json::Value::Self *)v47, v13);
      if ( !Json::Value::isMember((Json::Value::Self *)v47, "@savegamelib") || Json::Value::type((Json::Value::Self *)v47) != 7 )
        goto LABEL_17;
      v20 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v47, "@savegamelib");
      Json::Value::Construct((Json::Value::Self *)v48, v20);
      if ( Json::Value::isMember((Json::Value::Self *)v48, "max") )
      {
        v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v48, "max");
        if ( Json::Value::type(v21) == 1 )
        {
          v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v48, "max");
          *a2 = Json::Value::asInt(v22);
        }
      }
      if ( Json::Value::isMember((Json::Value::Self *)v48, "remaining") )
      {
        v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v48, "remaining");
        if ( Json::Value::type(v23) == 1 )
        {
          v24 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v48, "remaining");
          *a3 = Json::Value::asInt(v24);
          if ( Json::Value::isMember((Json::Value::Self *)v48, "total") )
          {
            v25 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v48, "total");
            if ( Json::Value::type(v25) == 1 )
            {
              v26 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v48, "total");
              *a4 = Json::Value::asInt(v26);
            }
          }
          Json::Value::Destroy((Json::Value::Self *)v48);
LABEL_17:
          Profile = 0;
          Json::Value::Destroy((Json::Value::Self *)v47);
          Json::Value::Destroy((Json::Value::Self *)v46);
          goto LABEL_6;
        }
      }
      Profile = -126;
      Json::Value::Destroy((Json::Value::Self *)v48);
      Json::Value::Destroy((Json::Value::Self *)v47);
      Json::Value::Destroy((Json::Value::Self *)v46);
    }
  }
LABEL_6:
  Json::Value::Destroy((Json::Value::Self *)v45);
  v8 = v43;
  v9 = v42;
  if ( v43 != v42 )
  {
    do
    {
      v28 = (Json::Value::Self *)(v9);
      v9 = (gaia::BaseJSONServiceResponse::Self *)((char *)v9 + 20);
      gaia::BaseJSONServiceResponse::Destroy(v28);
    }
    while ( v8 != v9 );
    v9 = v42;
  }
  if ( v9 != nullptr )
    opDelete(v9);
  return Profile;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::Destroy  (binary VA: 0x1383860)
// Original: savemanager::SaveGameManager::~SaveGameManager
// ----------------------------------------------------------------------------
void savemanager::SaveGameManager::Destroy(savemanager::SaveGameManager::Self *self)
{
  void *v1;
  glwebtools::Thread::Self *v2;
  glwebtools::Thread::Self *v3;
  glwebtools::Thread::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  glwebtools::Mutex::Self *v9;

  v1 = *((void **)self + 3);
  if ( v1 != nullptr )
  {
    savemanager::CloudSave::Destroy(*((void ***)self + 3));
    opDelete(v1);
  }
  v2 = *((glwebtools::Thread::Self **)self + 12);
  *((uint32_t *)self + 3) = 0;
  if ( v2 != nullptr )
  {
    glwebtools::Thread::Destroy(v2);
    opDelete(v2);
  }
  v3 = *((glwebtools::Thread::Self **)self + 13);
  *((uint32_t *)self + 12) = 0;
  if ( v3 != nullptr )
  {
    glwebtools::Thread::Destroy(v3);
    opDelete(v3);
  }
  v4 = *((glwebtools::Thread::Self **)self + 14);
  *((uint32_t *)self + 13) = 0;
  if ( v4 != nullptr )
  {
    glwebtools::Thread::Destroy(v4);
    opDelete(v4);
  }
  v5 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 14) = 0;
  if ( v5 != 0 )
  {
    v6 = *(uint32_t *)(v5 + 236);
    if ( v6 > 0 )
      *(uint32_t *)(v5 + 236) = v6 - 1;
    gaia::Gaia::DestroyInstance(v9);
    *((uint32_t *)self + 4) = 0;
  }
  glwebtools::Mutex::Destroy((savemanager::SaveGameManager::Self *)((char *)self + 60));
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
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::Release  (binary VA: 0x1383980)
// Original: savemanager::SaveGameManager::Release
// ----------------------------------------------------------------------------
void savemanager::SaveGameManager::Release()
{
  savemanager::SaveGameManager::Self *v0;

  v0 = (savemanager::SaveGameManager::Self *)(uintptr_t)(savemanager::SaveGameManager::s_instance);
  if ( savemanager::SaveGameManager::s_instance != 0 )
  {
    savemanager::SaveGameManager::Destroy((savemanager::SaveGameManager::Self *)(uintptr_t)(savemanager::SaveGameManager::s_instance));
    opDelete(v0);
  }
  savemanager::SaveGameManager::s_instance = (uintptr_t)(uintptr_t)(nullptr);
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::GetSaveFilePath  (binary VA: 0x13839d0)
// Original: savemanager::SaveGameManager::GetSaveFilePath
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::GetSaveFilePath(int a1)
{
  savemanager::IStorageWrapper::GetFileWithPath(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::ResetCloud  (binary VA: 0x1383a20)
// Original: savemanager::SaveGameManager::ResetCloud
// ----------------------------------------------------------------------------
char * savemanager::SaveGameManager::ResetCloud(savemanager::SaveGameManager::Self *self)
{
  Json::Value::Self *v1;
  uint32_t *v2;
  int v3;
  gaia::Gaia::Self *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  int v10;
  void *v11;
  int Instance;
  void *v13;
  void *v14;
  void *v15;
  typedef gaia::Gaia::Self *_g4_t_v17;
  typedef char *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef void *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[44];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (64u + sizeof(_g4_t_v18)) > _g4_s1 ? (64u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (68u + sizeof(_g4_t_v19)) > _g4_s2 ? (68u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v20)) > _g4_s3 ? (68u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v21)) > _g4_s4 ? (72u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (110u + sizeof(_g4_t_v22)) > _g4_s5 ? (110u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v23)) > _g4_s6 ? (112u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (116u + sizeof(_g4_t_v24)) > _g4_s7 ? (116u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (128u + sizeof(_g4_t_v25)) > _g4_s8 ? (128u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (132u + sizeof(_g4_t_v26)) > _g4_s9 ? (132u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (136u + sizeof(_g4_t_v27)) > _g4_s10 ? (136u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (140u + sizeof(_g4_t_v28)) > _g4_s11 ? (140u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v29)) > _g4_s12 ? (144u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (148u + sizeof(_g4_t_v30)) > _g4_s13 ? (148u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (152u + sizeof(_g4_t_v31)) > _g4_s14 ? (152u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (156u + sizeof(_g4_t_v32)) > _g4_s15 ? (156u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (160u + sizeof(_g4_t_v33)) > _g4_s16 ? (160u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (164u + sizeof(_g4_t_v34)) > _g4_s17 ? (164u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (168u + sizeof(_g4_t_v35)) > _g4_s18 ? (168u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (172u + sizeof(_g4_t_v36)) > _g4_s19 ? (172u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (176u + sizeof(_g4_t_v37)) > _g4_s20 ? (176u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (192u + sizeof(_g4_t_v38)) > _g4_s21 ? (192u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (208u + sizeof(_g4_t_v39)) > _g4_s22 ? (208u + sizeof(_g4_t_v39)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 110u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 112u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 116u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 128u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 132u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 136u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 140u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 144u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 148u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 152u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 156u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 160u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 164u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 168u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 172u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 176u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 192u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 208u);

  Json::Value::Construct((int)(uintptr_t)(v37), nullptr);
  Json::Value::Construct((int)(uintptr_t)(v38), nullptr);
  v1 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v37, "TOC");
  Json::Value::opAssign(v1, (const Json::Value::Self *)v38);
  Json::Value::Destroy((Json::Value::Self *)v38);
  v34 = nullptr;
  v35 = 0;
  v36 = 0;
  g4_std_compat::vector_fill_insert((int)(uintptr_t)(&v34), nullptr, (int)(uintptr_t)(self) + 40);
  if ( v35 - (int)(uintptr_t)(v34) <= 3 )
  {
    v21 = nullptr;
  }
  else
  {
    v19 = 0;
    v2 = (uint32_t *)(v34);
    do
    {
      v3 = v2[v19];
      v4 = *(gaia::Gaia::Self **)(*((uint32_t *)self + 4) + 568);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "$savegamelib.objects.TOC", (int)(uintptr_t)(&v22));
      gaia::Gaia_Seshat::DeleteData(v4, (int)(uintptr_t)(&v25), v3, 0, 0, 0);
      v5 = (void *)(v25 - 12);
      if ( (uint32_t *)(v25 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "$savegamelib.objects.key1", (int)(uintptr_t)(&v22) + 1);
      gaia::Gaia_Seshat::DeleteData(v4, (int)(uintptr_t)(&v26), v3, 0, 0, 0);
      v6 = (void *)(v26 - 12);
      if ( (uint32_t *)(v26 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "$savegamelib.objects.key2", (int)(uintptr_t)(&v23));
      gaia::Gaia_Seshat::DeleteData(v4, (int)(uintptr_t)(&v27), v3, 0, 0, 0);
      v7 = (void *)(v27 - 12);
      if ( (uint32_t *)(v27 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v7);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "$savegamelib.objects.key3", (int)(uintptr_t)(&v23) + 1);
      gaia::Gaia_Seshat::DeleteData(v4, (int)(uintptr_t)(&v28), v3, 0, 0, 0);
      v8 = (void *)(v28 - 12);
      if ( (uint32_t *)(v28 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "$savegamelib.objects.key4", (int)(uintptr_t)(&v23) + 2);
      gaia::Gaia_Seshat::DeleteData(v4, (int)(uintptr_t)(&v29), v3, 0, 0, 0);
      v9 = (void *)(v29 - 12);
      if ( (uint32_t *)(v29 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v9);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "$savegamelib.objects.key5", (int)(uintptr_t)(&v23) + 3);
      v10 = gaia::Gaia_Seshat::DeleteData(v4, (int)(uintptr_t)(&v30), v3, 0, 0, 0);
      v11 = (void *)(v30 - 12);
      if ( (uint32_t *)(v30 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
      {
        v18 = (char *)v10;
        g4_std::string::Rep::M_destroy(v11);
        v10 = (int)(uintptr_t)(v18);
      }
      v2 = (uint32_t *)(v34);
      ++v19;
    }
    while ( v19 < (v35 - (int)(uintptr_t)(v34)) >> 2 );
    v21 = (char *)v10;
  }
  Json::Value::Construct((int)(uintptr_t)(v39), (char *)&loc_6 + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), (char *)&unk_1B15112, (int)(uintptr_t)(&v24) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), (char *)&unk_1B15112, (int)(uintptr_t)(&v24) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "me", (int)(uintptr_t)(&v24));
  v20 = *((uint32_t *)self + 10);
  Instance = gaia::Gaia::GetInstance(v17);
  gaia::Gaia_Seshat::SetProfile(
    *(gaia::Gaia::Self **)(Instance + 568),
    v20,
    (Json::Value::Self *)v39,
    4,
    (int)(uintptr_t)(&v31),
    (int)(uintptr_t)(&v32),
    (int)(uintptr_t)(&v33),
    0,
    0,
    0);
  v13 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  v14 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  v15 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  Json::Value::Destroy((Json::Value::Self *)v39);
  if ( v34 != nullptr )
    opDelete(v34);
  Json::Value::Destroy((Json::Value::Self *)v37);
  return v21;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::UploadSaveToCloud  (binary VA: 0x13840a0)
// Original: savemanager::SaveGameManager::UploadSaveToCloud
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::UploadSaveToCloud(savemanager::SaveGameManager::Self *self, savemanager::CloudSave::Self *a2)
{
  uint32_t *v2;
  int TableOfContents;
  int FreeSpaceAvailableOnSeshat;
  Json::Value::Self *v5;
  const Json::Value::Self *v6;
  Json::Value::Self *v7;
  unsigned int v8;
  char **v9;
  Json::Value::Self *v10;
  int v11;
  int v12;
  char **v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  char *v17;
  Json::Value::Self *v18;
  char *v19;
  Json::Value::Self *v20;
  char *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  int v24;
  void *v25;
  uint32_t *v26;
  void *v27;
  void *v28;
  void *v29;
  void *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  void *v34;
  char *Data;
  int DataLength;
  int SeshatFileKey;
  void *v38;
  void *v39;
  char *v40;
  Json::Value::Self *v42;
  Json::Value::Self *v43;
  Json::Value::Self *v44;
  int v45;
  void *v46;
  int v47;
  char *Description;
  Json::Value::Self *v49;
  char *GameSpecificData;
  Json::Value::Self *v51;
  Json::Value::Self *v52;
  int TimeStamp;
  Json::Value::Self *v54;
  Json::Value::Self *v55;
  char *SaveVersion;
  Json::Value::Self *v57;
  char *v58;
  Json::Value::Self *v59;
  Json::Value::Self *v60;
  void *v61;
  void *v62;
  void *v63;
  void *v64;
  uint32_t *v65;
  Json::Value::Self *v66;
  int v67;
  void *v68;
  char *v69;
  void *v70;
  typedef gaia::Gaia::Self *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef unsigned int _g4_t_i;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef char *_g4_t_v80;
  typedef char _g4_t_v81[4];
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef void *_g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef uint8_t _g4_t_v91[16];
  typedef uint8_t _g4_t_v92[16];
  typedef uint8_t _g4_t_v93[16];
  typedef uint8_t _g4_t_v94[16];
  typedef uint8_t _g4_t_v95[16];
  typedef uint8_t _g4_t_v96[16];
  typedef uint8_t _g4_t_v97[16];
  typedef void *_g4_t_v98;
  typedef uint32_t *_g4_t_v99;
  typedef uint8_t _g4_t_v100[16];
  typedef uint8_t _g4_t_v101[16];
  typedef uint8_t _g4_t_v102[16];
  typedef uint8_t _g4_t_v103[16];
  typedef char _g4_t_v104[16];
  typedef char _g4_t_s[20];
  typedef char _g4_t_v106[4];
  typedef uint8_t _g4_t_v107[16];
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  enum : size_t {
    _g4_s0 = 496u,
    _g4_s1 = (12u + sizeof(_g4_t_v71)) > _g4_s0 ? (12u + sizeof(_g4_t_v71)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v72)) > _g4_s1 ? (20u + sizeof(_g4_t_v72)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v73)) > _g4_s2 ? (28u + sizeof(_g4_t_v73)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_i)) > _g4_s3 ? (32u + sizeof(_g4_t_i)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v75)) > _g4_s4 ? (36u + sizeof(_g4_t_v75)) : _g4_s4,
    _g4_s6 = (53u + sizeof(_g4_t_v76)) > _g4_s5 ? (53u + sizeof(_g4_t_v76)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v77)) > _g4_s6 ? (76u + sizeof(_g4_t_v77)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v78)) > _g4_s7 ? (80u + sizeof(_g4_t_v78)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v79)) > _g4_s8 ? (84u + sizeof(_g4_t_v79)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v80)) > _g4_s9 ? (88u + sizeof(_g4_t_v80)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v81)) > _g4_s10 ? (92u + sizeof(_g4_t_v81)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v82)) > _g4_s11 ? (96u + sizeof(_g4_t_v82)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v83)) > _g4_s12 ? (100u + sizeof(_g4_t_v83)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v84)) > _g4_s13 ? (104u + sizeof(_g4_t_v84)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v85)) > _g4_s14 ? (108u + sizeof(_g4_t_v85)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v86)) > _g4_s15 ? (112u + sizeof(_g4_t_v86)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v87)) > _g4_s16 ? (116u + sizeof(_g4_t_v87)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v88)) > _g4_s17 ? (120u + sizeof(_g4_t_v88)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v89)) > _g4_s18 ? (124u + sizeof(_g4_t_v89)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v90)) > _g4_s19 ? (128u + sizeof(_g4_t_v90)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v91)) > _g4_s20 ? (132u + sizeof(_g4_t_v91)) : _g4_s20,
    _g4_s22 = (148u + sizeof(_g4_t_v92)) > _g4_s21 ? (148u + sizeof(_g4_t_v92)) : _g4_s21,
    _g4_s23 = (164u + sizeof(_g4_t_v93)) > _g4_s22 ? (164u + sizeof(_g4_t_v93)) : _g4_s22,
    _g4_s24 = (180u + sizeof(_g4_t_v94)) > _g4_s23 ? (180u + sizeof(_g4_t_v94)) : _g4_s23,
    _g4_s25 = (196u + sizeof(_g4_t_v95)) > _g4_s24 ? (196u + sizeof(_g4_t_v95)) : _g4_s24,
    _g4_s26 = (212u + sizeof(_g4_t_v96)) > _g4_s25 ? (212u + sizeof(_g4_t_v96)) : _g4_s25,
    _g4_s27 = (228u + sizeof(_g4_t_v97)) > _g4_s26 ? (228u + sizeof(_g4_t_v97)) : _g4_s26,
    _g4_s28 = (244u + sizeof(_g4_t_v98)) > _g4_s27 ? (244u + sizeof(_g4_t_v98)) : _g4_s27,
    _g4_s29 = (248u + sizeof(_g4_t_v99)) > _g4_s28 ? (248u + sizeof(_g4_t_v99)) : _g4_s28,
    _g4_s30 = (260u + sizeof(_g4_t_v100)) > _g4_s29 ? (260u + sizeof(_g4_t_v100)) : _g4_s29,
    _g4_s31 = (276u + sizeof(_g4_t_v101)) > _g4_s30 ? (276u + sizeof(_g4_t_v101)) : _g4_s30,
    _g4_s32 = (292u + sizeof(_g4_t_v102)) > _g4_s31 ? (292u + sizeof(_g4_t_v102)) : _g4_s31,
    _g4_s33 = (308u + sizeof(_g4_t_v103)) > _g4_s32 ? (308u + sizeof(_g4_t_v103)) : _g4_s32,
    _g4_s34 = (324u + sizeof(_g4_t_v104)) > _g4_s33 ? (324u + sizeof(_g4_t_v104)) : _g4_s33,
    _g4_s35 = (340u + sizeof(_g4_t_s)) > _g4_s34 ? (340u + sizeof(_g4_t_s)) : _g4_s34,
    _g4_s36 = (360u + sizeof(_g4_t_v106)) > _g4_s35 ? (360u + sizeof(_g4_t_v106)) : _g4_s35,
    _g4_s37 = (364u + sizeof(_g4_t_v107)) > _g4_s36 ? (364u + sizeof(_g4_t_v107)) : _g4_s36,
    _g4_s38 = (380u + sizeof(_g4_t_v108)) > _g4_s37 ? (380u + sizeof(_g4_t_v108)) : _g4_s37,
    _g4_s39 = (384u + sizeof(_g4_t_v109)) > _g4_s38 ? (384u + sizeof(_g4_t_v109)) : _g4_s38,
    _g4_s40 = (392u + sizeof(_g4_t_v110)) > _g4_s39 ? (392u + sizeof(_g4_t_v110)) : _g4_s39,
    _g4_s41 = (396u + sizeof(_g4_t_v111)) > _g4_s40 ? (396u + sizeof(_g4_t_v111)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 12u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 20u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 28u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 32u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 36u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 53u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 76u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 80u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 84u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 88u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 92u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 96u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 100u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 104u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 108u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 112u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 116u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 120u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 124u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 128u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 132u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 148u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 164u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 180u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 196u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 212u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 228u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 244u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 248u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 260u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 276u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 292u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 308u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 324u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 340u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 360u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 364u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 380u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 384u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 392u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 396u);

  v88 = nullptr;
  v89 = 0;
  v90 = 0;
  g4_std_compat::vector_fill_insert((int)(uintptr_t)(&v88), nullptr, (int)(uintptr_t)(self) + 40);
  v2 = (uint32_t *)(v88);
  if ( v89 - (int)(uintptr_t)(v88) <= 3 )
  {
    TableOfContents = 0;
  }
  else
  {
    v75 = 0;
    while ( 1 )
    {
      v73 = v2[v75];
      Json::Value::Construct((int)(uintptr_t)(v91), nullptr);
      TableOfContents = savemanager::SaveGameManager::RetrieveTableOfContents((int)(uintptr_t)(self), (Json::Value::Self *)v91, v73);
      FreeSpaceAvailableOnSeshat = savemanager::SaveGameManager::GetFreeSpaceAvailableOnSeshat(self, &v77, &v79, &v78);
      Json::Value::Construct((int)(uintptr_t)(v92), nullptr);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v80), "$savegamelib.objects.key", (int)(uintptr_t)(&v76));
      if ( TableOfContents != 0 )
      {
        if ( TableOfContents != 404 )
          goto LABEL_51;
        Json::Value::Construct((int)(uintptr_t)(v93), nullptr);
        v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v91, "TOC");
        Json::Value::opAssign(v5, (const Json::Value::Self *)v93);
        Json::Value::Destroy((Json::Value::Self *)v93);
      }
      if ( FreeSpaceAvailableOnSeshat != 0 )
      {
        TableOfContents = FreeSpaceAvailableOnSeshat;
        goto LABEL_51;
      }
      v6 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v91, "TOC");
      Json::Value::opAssign((Json::Value::Self *)v92, v6);
      if ( Json::Value::size((Json::Value::Self *)v92) == 0 && v79 <= 0 )
      {
        TableOfContents = -126;
        goto LABEL_51;
      }
      if ( (unsigned int)Json::Value::size((Json::Value::Self *)v92) <= 4 && v79 != 0 )
      {
        v47 = Json::Value::size((Json::Value::Self *)v92);
        sprintf(v81, "%d", v47 + 1);
        g4_std::string::append((int)(uintptr_t)(&v80), v81, strlen(v81));
        Json::Value::Construct((int)(uintptr_t)(&v98), nullptr);
        Description = savemanager::CloudSave::GetDescription(a2);
        Json::Value::Construct((int)(uintptr_t)(v100), Description);
        v49 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v98, "Description");
        Json::Value::opAssign(v49, (const Json::Value::Self *)v100);
        Json::Value::Destroy((Json::Value::Self *)v100);
        GameSpecificData = savemanager::CloudSave::GetGameSpecificData(a2);
        v51 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v98, "GameSpecificData");
        Json::Value::opAssign(v51, (const Json::Value::Self *)GameSpecificData);
        Json::Value::Construct((int)(uintptr_t)(v101), &v80);
        v52 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v98, "SeshatFileKey");
        Json::Value::opAssign(v52, (const Json::Value::Self *)v101);
        Json::Value::Destroy((Json::Value::Self *)v101);
        savemanager::CloudSave::SetSeshatFileKey((int *)a2, (int)(uintptr_t)(&v80));
        TimeStamp = savemanager::CloudSave::GetTimeStamp(a2);
        sprintf(s, "%ld", TimeStamp);
        Json::Value::Construct((Json::Value::Self *)v102, s);
        v54 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v98, "Date");
        Json::Value::opAssign(v54, (const Json::Value::Self *)v102);
        Json::Value::Destroy((Json::Value::Self *)v102);
        v85 = &dword_213B814;
        savemanager::CloudSave::GetGLUID((savemanager::CloudSave::Self *)v106, (uint32_t *)(a2));
        glwebtools::Codec::EncodeBase64(v107, 16, &v85, 0);
        Json::Value::Construct((int)(uintptr_t)(v103), &v85);
        v55 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v98, "GLUID");
        Json::Value::opAssign(v55, (const Json::Value::Self *)v103);
        Json::Value::Destroy((Json::Value::Self *)v103);
        SaveVersion = savemanager::CloudSave::GetSaveVersion(a2);
        Json::Value::Construct((int)(uintptr_t)(v104), SaveVersion);
        v57 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)&v98, "Version");
        Json::Value::opAssign(v57, (const Json::Value::Self *)v104);
        Json::Value::Destroy((Json::Value::Self *)v104);
        v58 = v80;
        v59 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v91, "TOC");
        v60 = (Json::Value::Self *)Json::Value::opIndex(v59, v58);
        Json::Value::opAssign(v60, (const Json::Value::Self *)&v98);
        v61 = (void *)(v111 - 12);
        if ( (uint32_t *)(v111 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v111 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v61);
        }
        v62 = (void *)(v110 - 12);
        if ( (uint32_t *)(v110 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v110 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v62);
        }
        v63 = (void *)(v109 - 12);
        if ( (uint32_t *)(v109 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v109 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v63);
        }
        v64 = (void *)(v108 - 12);
        if ( (uint32_t *)(v108 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v108 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v64);
        }
        v65 = v85 - 3;
        if ( v85 - 3 != dword_213B808 && __sync_fetch_and_add(v85 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v65);
        Json::Value::Destroy((Json::Value::Self *)&v98);
      }
      else
      {
        *(uint32_t *)v81 = (uint32_t)(uintptr_t)(&dword_213B814);
        Json::Value::getMemberNames((int)(uintptr_t)(&v98), (Json::Value::Self *)&v98, v92);
        v7 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v92, (char **)v98);
        v72 = 0;
        if ( Json::Value::isMember(v7, "Date") )
        {
          v66 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v92, (char **)v98);
          v67 = (int)(uintptr_t)(Json::Value::opIndex(v66, "Date"));
          Json::Value::asString((Json::Value::Self *)&v82, v67);
          g4_std::string::assign_str(v81, &v82);
          v68 = (void *)(v82 - 12);
          if ( (uint32_t *)(v82 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v82 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v68);
          }
          v72 = savemanager::SaveGameManager::StringToUnixTimestamp((int)(uintptr_t)(self), (const char **)v81);
        }
        v8 = 1;
        for ( i = 0; v8 < Json::Value::size((Json::Value::Self *)v92); ++v8 )
        {
          v9 = (char **)((char *)v98 + 4 * v8);
          v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v92, v9);
          if ( Json::Value::isMember(v10, "Date")
            && (v42 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v92, v9),
                v43 = (Json::Value::Self *)Json::Value::opIndex(v42, "Date"),
                Json::Value::type(v43) == 4) )
          {
            v44 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v92, v9);
            v45 = (int)(uintptr_t)(Json::Value::opIndex(v44, "Date"));
            Json::Value::asString((Json::Value::Self *)&v83, v45);
            g4_std::string::assign_str(v81, &v83);
            v46 = (void *)(v83 - 12);
            if ( (uint32_t *)(v83 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v83 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v46);
            }
            v11 = savemanager::SaveGameManager::StringToUnixTimestamp((int)(uintptr_t)(self), (const char **)v81);
          }
          else
          {
            v11 = 0;
          }
          if ( v72 >= v11 )
          {
            i = v8;
            v72 = v11;
          }
        }
        v12 = savemanager::CloudSave::GetTimeStamp(a2);
        sprintf(s, "%ld", v12);
        v13 = (char **)((char *)v98 + 4 * i);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v91, "TOC");
        v15 = (Json::Value::Self *)Json::Value::opIndex(v14, v13);
        Json::Value::Construct((Json::Value::Self *)v94, s);
        v16 = (Json::Value::Self *)Json::Value::opIndex(v15, "Date");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v94);
        Json::Value::Destroy((Json::Value::Self *)v94);
        v17 = savemanager::CloudSave::GetDescription(a2);
        Json::Value::Construct((int)(uintptr_t)(v95), v17);
        v18 = (Json::Value::Self *)Json::Value::opIndex(v15, "Description");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v95);
        Json::Value::Destroy((Json::Value::Self *)v95);
        v19 = savemanager::CloudSave::GetGameSpecificData(a2);
        v20 = (Json::Value::Self *)Json::Value::opIndex(v15, "GameSpecificData");
        Json::Value::opAssign(v20, (const Json::Value::Self *)v19);
        v21 = savemanager::CloudSave::GetSaveVersion(a2);
        Json::Value::Construct((int)(uintptr_t)(v96), v21);
        v22 = (Json::Value::Self *)Json::Value::opIndex(v15, "Version");
        Json::Value::opAssign(v22, (const Json::Value::Self *)v96);
        Json::Value::Destroy((Json::Value::Self *)v96);
        savemanager::CloudSave::GetGLUID((savemanager::CloudSave::Self *)v106, (uint32_t *)(a2));
        v85 = &dword_213B814;
        glwebtools::Codec::EncodeBase64(v107, 16, &v85, 0);
        Json::Value::Construct((int)(uintptr_t)(v97), &v85);
        v23 = (Json::Value::Self *)Json::Value::opIndex(v15, "GLUID");
        Json::Value::opAssign(v23, (const Json::Value::Self *)v97);
        Json::Value::Destroy((Json::Value::Self *)v97);
        v24 = (int)(uintptr_t)(Json::Value::opIndex(v15, "SeshatFileKey"));
        Json::Value::asString((Json::Value::Self *)&v84, v24);
        savemanager::CloudSave::SetSeshatFileKey((int *)a2, (int)(uintptr_t)(&v84));
        v25 = (void *)(v84 - 12);
        if ( (uint32_t *)(v84 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v84 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v25);
        }
        v26 = v85 - 3;
        if ( v85 - 3 != dword_213B808 && __sync_fetch_and_add(v85 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v26);
        v27 = (void *)(v111 - 12);
        if ( (uint32_t *)(v111 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v111 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v27);
        }
        v28 = (void *)(v110 - 12);
        if ( (uint32_t *)(v110 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v110 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v28);
        }
        v29 = (void *)(v109 - 12);
        if ( (uint32_t *)(v109 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v109 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v29);
        }
        v30 = (void *)(v108 - 12);
        if ( (uint32_t *)(v108 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v108 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v30);
        }
        v31 = v99;
        v32 = (uint32_t *)(v98);
        if ( v99 != v98 )
        {
          do
          {
            v33 = (uint32_t *)(*v32 - 12);
            if ( v33 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v32 - 4), 0xFFFFFFFF) <= 0 )
              g4_std::string::Rep::M_destroy(v33);
            ++v32;
          }
          while ( v31 != v32 );
          v32 = (uint32_t *)(v98);
        }
        if ( v32 != nullptr )
          opDelete(v32);
        v34 = (void *)(*(uint32_t *)v81 - 12);
        if ( (uint32_t *)(*(uint32_t *)v81 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v81 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v34);
        }
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v86), (char *)&unk_1B15112, (int)(uintptr_t)(&v76) + 1);
      Data = savemanager::CloudSave::GetData(a2);
      DataLength = savemanager::CloudSave::GetDataLength(a2);
      glwebtools::Codec::EncodeBase64(*(uint32_t *)Data, DataLength, &v86, 0);
      v71 = *(gaia::Gaia::Self **)(*((uint32_t *)self + 4) + 568);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v87), "me", (int)(uintptr_t)(&v76) + 2);
      SeshatFileKey = savemanager::CloudSave::GetSeshatFileKey(a2);
      TableOfContents = gaia::Gaia_Seshat::PutData(v71, SeshatFileKey, (int)(uintptr_t)(&v86), v73, v73, (int)(uintptr_t)(&v87), 0, 0, 0, 0);
      v38 = (void *)(v87 - 12);
      if ( (uint32_t *)(v87 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v87 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v38);
      }
      if ( TableOfContents != 0 )
        break;
      TableOfContents = savemanager::SaveGameManager::UploadTableOfContents((int)(uintptr_t)(self), (Json::Value::Self *)v91, v73);
      v39 = (void *)(v86 - 12);
      if ( (uint32_t *)(v86 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v86 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v39);
      }
      v40 = v80 - 12;
      if ( v80 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v80 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v40);
      }
      Json::Value::Destroy((Json::Value::Self *)v92);
      Json::Value::Destroy((Json::Value::Self *)v91);
      v2 = (uint32_t *)(v88);
      if ( ++v75 >= (v89 - (int)(uintptr_t)(v88)) >> 2 )
        goto LABEL_35;
    }
    v70 = (void *)(v86 - 12);
    if ( (uint32_t *)(v86 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v86 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v70);
    }
LABEL_51:
    v69 = v80 - 12;
    if ( v80 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v80 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v69);
    Json::Value::Destroy((Json::Value::Self *)v92);
    Json::Value::Destroy((Json::Value::Self *)v91);
    v2 = (uint32_t *)(v88);
  }
LABEL_35:
  if ( v2 != nullptr )
    opDelete(v2);
  return TableOfContents;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::GetCloudSaves  (binary VA: 0x1385010)
// Original: savemanager::SaveGameManager::GetCloudSaves
// ----------------------------------------------------------------------------
void * savemanager::SaveGameManager::GetCloudSaves(glwebtools::Thread::Self **a1, int *a2, int a3, char a4, void *a5, void *a6)
{
  glwebtools::Mutex::Self *v6;
  int State;
  int v8;
  void *result;
  void *v10;
  int TableOfContents;
  const Json::Value::Self *v12;
  unsigned int v13;
  int v14;
  savemanager::CloudSave::Self *v15;
  const Json::Value::Self *v16;
  savemanager::CloudSave::Self *v17;
  Json::Value::Self *v18;
  int v19;
  void *v20;
  glwebtools::Thread::Self *v21;
  void **v22;
  int v23;
  int v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  const Json::Value::Self *v28;
  Json::Value::Self *v29;
  int v30;
  void *v31;
  Json::Value::Self *v32;
  int v33;
  const char *v34;
  int v35;
  char *v36;
  char *v37;
  volatile int32_t *v38;
  size_t n;
  uint32_t *v40;
  void *v41;
  void *v42;
  void *v43;
  savemanager::CloudSave::Self **v44;
  int v45;
  Json::Value::Self *v46;
  int v47;
  int v48;
  char *v49;
  typedef bool _g4_t_v50;
  typedef void *_g4_t_destb;
  typedef glwebtools::Thread::Self *_g4_t_dest;
  typedef void *_g4_t_desta;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef savemanager::CloudSave::Self *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef const char *_g4_t_v59;
  typedef glwebtools::Codec::Self *_g4_t_v60;
  typedef char *_g4_t_s;
  typedef void *_g4_t_src;
  typedef void *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef void *_g4_t_v66[3];
  typedef uint8_t _g4_t_v67[16];
  typedef uint8_t _g4_t_v68[16];
  typedef uint8_t _g4_t_v69[16];
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76[2];
  typedef int _g4_t_v77;
  typedef uint32_t *_g4_t_v78;
  typedef unsigned int _g4_t_v79[39];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (0u + sizeof(_g4_t_v50)) > _g4_s0 ? (0u + sizeof(_g4_t_v50)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_destb)) > _g4_s1 ? (28u + sizeof(_g4_t_destb)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_dest)) > _g4_s2 ? (28u + sizeof(_g4_t_dest)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_desta)) > _g4_s3 ? (28u + sizeof(_g4_t_desta)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v54)) > _g4_s4 ? (44u + sizeof(_g4_t_v54)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v55)) > _g4_s5 ? (56u + sizeof(_g4_t_v55)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v56)) > _g4_s6 ? (68u + sizeof(_g4_t_v56)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v57)) > _g4_s7 ? (72u + sizeof(_g4_t_v57)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v58)) > _g4_s8 ? (76u + sizeof(_g4_t_v58)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v59)) > _g4_s9 ? (80u + sizeof(_g4_t_v59)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v60)) > _g4_s10 ? (84u + sizeof(_g4_t_v60)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_s)) > _g4_s11 ? (88u + sizeof(_g4_t_s)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_src)) > _g4_s12 ? (92u + sizeof(_g4_t_src)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v63)) > _g4_s13 ? (96u + sizeof(_g4_t_v63)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v64)) > _g4_s14 ? (100u + sizeof(_g4_t_v64)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v65)) > _g4_s15 ? (104u + sizeof(_g4_t_v65)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v66)) > _g4_s16 ? (108u + sizeof(_g4_t_v66)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v67)) > _g4_s17 ? (120u + sizeof(_g4_t_v67)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v68)) > _g4_s18 ? (136u + sizeof(_g4_t_v68)) : _g4_s18,
    _g4_s20 = (152u + sizeof(_g4_t_v69)) > _g4_s19 ? (152u + sizeof(_g4_t_v69)) : _g4_s19,
    _g4_s21 = (168u + sizeof(_g4_t_v70)) > _g4_s20 ? (168u + sizeof(_g4_t_v70)) : _g4_s20,
    _g4_s22 = (172u + sizeof(_g4_t_v71)) > _g4_s21 ? (172u + sizeof(_g4_t_v71)) : _g4_s21,
    _g4_s23 = (176u + sizeof(_g4_t_v72)) > _g4_s22 ? (176u + sizeof(_g4_t_v72)) : _g4_s22,
    _g4_s24 = (180u + sizeof(_g4_t_v73)) > _g4_s23 ? (180u + sizeof(_g4_t_v73)) : _g4_s23,
    _g4_s25 = (184u + sizeof(_g4_t_v74)) > _g4_s24 ? (184u + sizeof(_g4_t_v74)) : _g4_s24,
    _g4_s26 = (188u + sizeof(_g4_t_v75)) > _g4_s25 ? (188u + sizeof(_g4_t_v75)) : _g4_s25,
    _g4_s27 = (192u + sizeof(_g4_t_v76)) > _g4_s26 ? (192u + sizeof(_g4_t_v76)) : _g4_s26,
    _g4_s28 = (200u + sizeof(_g4_t_v77)) > _g4_s27 ? (200u + sizeof(_g4_t_v77)) : _g4_s27,
    _g4_s29 = (204u + sizeof(_g4_t_v78)) > _g4_s28 ? (204u + sizeof(_g4_t_v78)) : _g4_s28,
    _g4_s30 = (208u + sizeof(_g4_t_v79)) > _g4_s29 ? (208u + sizeof(_g4_t_v79)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 0u);
  _g4_t_destb &destb = *reinterpret_cast<_g4_t_destb *>(_g4_sf + 28u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 28u);
  _g4_t_desta &desta = *reinterpret_cast<_g4_t_desta *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 80u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 84u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 88u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 96u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 100u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 104u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 108u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 120u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 136u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 152u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 168u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 172u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 176u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 180u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 184u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 188u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 192u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 200u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 204u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 208u);

  *a2 = 0;
  if ( a4 != 0 )
  {
    v6 = (glwebtools::Mutex::Self *)(a1 + 15);
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 15));
    if ( a1[12] != nullptr )
    {
      State = glwebtools::Thread::GetState(a1[12]);
      v8 = -15;
      if ( State != 1 )
      {
LABEL_4:
        destb = (void *)v8;
        glwebtools::Mutex::Unlock(v6);
        return destb;
      }
      v21 = a1[12];
      if ( v21 != nullptr )
      {
        glwebtools::Thread::Destroy(a1[12]);
        opDelete(v21);
      }
      a1[12] = nullptr;
    }
    v22 = (void **)opNew(0x90u);
    Json::Value::Construct((int)(uintptr_t)(v22 + 3), nullptr);
    v22[7] = nullptr;
    v22[8] = nullptr;
    v22[9] = nullptr;
    v22[10] = nullptr;
    savemanager::CloudSave::Construct((savemanager::CloudSave::Self *)(v22 + 11));
    v22[2] = &dword_0 + 1;
    v22[1] = a5;
    *v22 = a6;
    dest = (glwebtools::Thread::Self *)opNew(0x18u);
    glwebtools::Thread::Construct(
      dest,
      (void (*)(void *, void *))((int (*)(glwebtools::Thread::Self **, uint32_t *))savemanager::SaveGameManager::PerformAsyncAction),
      a1,
      v22,
      "GetCloudSaves Thread");
    a1[12] = dest;
    if ( dest != nullptr )
    {
      glwebtools::Thread::Start(dest);
      glwebtools::Mutex::Unlock(v6);
      return nullptr;
    }
    savemanager::CloudSave::Destroy(v22 + 11);
    if ( v22[7] != nullptr )
      opDelete(v22[7]);
    Json::Value::Destroy((Json::Value::Self *)(v22 + 3));
    opDelete(v22);
    v8 = -14;
    goto LABEL_4;
  }
  v63 = nullptr;
  v64 = 0;
  v65 = 0;
  g4_std_compat::vector_insert_aux((int)(uintptr_t)(&v63), nullptr, (int)(uintptr_t)(a1 + 10));
  v10 = v63;
  if ( v64 - (int)(uintptr_t)(v63) <= 3 )
  {
LABEL_37:
    result = nullptr;
    if ( v10 != nullptr )
    {
      opDelete(v10);
      return nullptr;
    }
  }
  else
  {
    v54 = 0;
    while ( 1 )
    {
      Json::Value::Construct((int)(uintptr_t)(v67), nullptr);
      TableOfContents = savemanager::SaveGameManager::RetrieveTableOfContents(
                          (int)(uintptr_t)(a1),
                          (Json::Value::Self *)v67,
                          *((uint32_t *)v63 + v54));
      if ( TableOfContents != 0 )
        break;
      v12 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v67, "TOC");
      v13 = 0;
      Json::Value::Construct((Json::Value::Self *)v68, v12);
      Json::Value::getMemberNames(v14, (Json::Value::Self *)v66, v68);
      while ( v13 < Json::Value::size((Json::Value::Self *)v68) )
      {
        v16 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v68, (char **)v66[0] + v13);
        Json::Value::Construct((Json::Value::Self *)v69, v16);
        v17 = (savemanager::CloudSave::Self *)opNew(0x64u);
        savemanager::CloudSave::Construct(v17);
        v56 = v17;
        *((uint32_t *)v17 + 24) = *((uint32_t *)v63 + v54);
        if ( Json::Value::isMember((Json::Value::Self *)v69, "SeshatFileKey") )
        {
          v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v69, "SeshatFileKey");
          if ( Json::Value::type(v18) == 4 )
          {
            v19 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v69, "SeshatFileKey"));
            Json::Value::asString((Json::Value::Self *)&v57, v19);
            savemanager::CloudSave::SetSeshatFileKey((int *)v56, (int)(uintptr_t)(&v57));
            v20 = (void *)(v57 - 12);
            if ( (uint32_t *)(v57 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v20);
            }
          }
        }
        if ( Json::Value::isMember((Json::Value::Self *)v69, "Description") )
        {
          v29 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v69, "Description");
          if ( Json::Value::type(v29) == 4 )
          {
            v30 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v69, "Description"));
            Json::Value::asString((Json::Value::Self *)&v58, v30);
            savemanager::CloudSave::SetDescription((int)(uintptr_t)(v56), (int)(uintptr_t)(&v58));
            v31 = (void *)(v58 - 12);
            if ( (uint32_t *)(v58 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v31);
            }
          }
        }
        if ( Json::Value::isMember((Json::Value::Self *)v69, "GameSpecificData") )
        {
          v28 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v69, "GameSpecificData");
          savemanager::CloudSave::SetGameSpecificData(v56, v28);
        }
        if ( Json::Value::isMember((Json::Value::Self *)v69, "Date") )
        {
          v46 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v69, "Date");
          if ( Json::Value::type(v46) == 4 )
          {
            v47 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v69, "Date"));
            Json::Value::asString((Json::Value::Self *)&v59, v47);
            v48 = savemanager::SaveGameManager::StringToUnixTimestamp((int)(uintptr_t)(a1), &v59);
            savemanager::CloudSave::SetTimeStamp(v56, v48);
            v49 = (char *)(v59 - 12);
            if ( v59 - 12 != (const char *)dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)v59 - 1, 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v49);
            }
          }
        }
        if ( Json::Value::isMember((Json::Value::Self *)v69, "GLUID")
          && (v32 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v69, "GLUID"), Json::Value::type(v32) == 4) )
        {
          v70 = 2;
          v75 = (int)(uintptr_t)(&dword_213B814);
          v76[0] = (int)(uintptr_t)(&dword_213B814);
          v77 = (int)(uintptr_t)(&dword_213B814);
          v78 = &dword_213B814;
          g4_std_compat::string_assign((int)(uintptr_t)(v76), &unk_1B15112, 0);
          g4_std_compat::string_assign((int)(uintptr_t)(&v75), &unk_1B15112, 0);
          g4_std_compat::string_assign((int)(uintptr_t)(&v77), &unk_1B15112, 0);
          memset(v79, 0, 0x80u);
          v71 = 0;
          v72 = 0;
          v73 = 0;
          v74 = 0;
          v76[1] = 0;
          v33 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v69, "GLUID"));
          Json::Value::asString((Json::Value::Self *)&s, v33);
          v34 = (const char *)strlen(s);
          v35 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v69, "GLUID"));
          Json::Value::asString((Json::Value::Self *)&v60, v35);
          glwebtools::Codec::DecodeBase64(v60, v34, (unsigned int)(uintptr_t)(v79), nullptr, v50);
          v36 = (char *)v60 - 12;
          if ( (uint32_t *)((char *)v60 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)v60 - 1, 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v36);
          }
          v37 = s - 12;
          if ( s - 12 != (char *)dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)s - 1, 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v37);
          }
          sub_193A970((int)(uintptr_t)(&src), v79, 16, (int)(uintptr_t)(&v55));
          v38 = (volatile int32_t *)src;
          n = 16;
          v71 = 0;
          v72 = 0;
          v73 = 0;
          v74 = 0;
          if ( *((uint32_t *)src - 3) <= 0x10u )
            n = *((uint32_t *)src - 3);
          memcpy(&v71, src, n);
          if ( v38 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v38 - 1, 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy((void *)(v38 - 3));
          savemanager::CloudSave::SetGLUID(v56, (const gaia::GLUID::Self *)&v70);
          v40 = v78 - 3;
          if ( v78 - 3 != dword_213B808 && __sync_fetch_and_add(v78 - 1, 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v40);
          v41 = (void *)(v77 - 12);
          if ( (uint32_t *)(v77 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v77 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v41);
          }
          v42 = (void *)(v76[0] - 12);
          if ( (uint32_t *)(v76[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v76[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v42);
          }
          v43 = (void *)(v75 - 12);
          if ( (uint32_t *)(v75 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v75 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v43);
          }
          v44 = *(savemanager::CloudSave::Self ***)(a3 + 4);
          if ( v44 == *(savemanager::CloudSave::Self ***)(a3 + 8) )
          {
            g4_std_compat::vector_insert_aux(a3, v44, (int)(uintptr_t)(&v56));
          }
          else
          {
            v45 = 0;
            if ( v44 != nullptr )
            {
              *v44 = v56;
              v45 = *(uint32_t *)(a3 + 4);
            }
            *(uint32_t *)(a3 + 4) = v45 + 4;
          }
        }
        else
        {
          v15 = v56;
          if ( v56 != nullptr )
          {
            savemanager::CloudSave::Destroy((void **)v56);
            opDelete(v15);
          }
          v56 = nullptr;
        }
        ++v13;
        Json::Value::Destroy((Json::Value::Self *)v69);
      }
      v23 = *a2;
      v24 = Json::Value::size((Json::Value::Self *)v68);
      v25 = (uint32_t *)(v66[1]);
      *a2 = v24 + v23;
      v26 = (uint32_t *)(v66[0]);
      if ( v25 != v66[0] )
      {
        do
        {
          v27 = (uint32_t *)(*v26 - 12);
          if ( v27 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v26 - 4), 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy(v27);
          ++v26;
        }
        while ( v25 != v26 );
        v26 = (uint32_t *)(v66[0]);
      }
      if ( v26 != nullptr )
        opDelete(v26);
      Json::Value::Destroy((Json::Value::Self *)v68);
      Json::Value::Destroy((Json::Value::Self *)v67);
      v10 = v63;
      if ( ++v54 >= (v64 - (int)(uintptr_t)(v63)) >> 2 )
        goto LABEL_37;
    }
    desta = (void *)TableOfContents;
    Json::Value::Destroy((Json::Value::Self *)v67);
    result = desta;
    if ( v63 != nullptr )
    {
      opDelete(v63);
      return desta;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::PerformAsyncAction  (binary VA: 0x1385af0)
// Original: savemanager::SaveGameManager::PerformAsyncAction
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::PerformAsyncAction(glwebtools::Thread::Self **self, uint32_t *a2)
{
  int v2;
  char *v3;
  void **v4;
  Json::Value::Self *v5;
  int result;
  void *v7;
  void *v8;
  Json::Value::Self *v9;
  int v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  Json::Value::Self *v14;
  int v15;
  void *v16;
  char *v17;
  int v18;
  void ***v19;
  bool v20;
  int v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  glwebtools::Thread::Self **Instance;
  typedef Json::Value::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef void *_g4_t_CloudSaves;
  typedef int _g4_t_v28;
  typedef void *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef int _g4_t_v37[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v26)) > _g4_s1 ? (44u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_CloudSaves)) > _g4_s2 ? (44u + sizeof(_g4_t_CloudSaves)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v28)) > _g4_s3 ? (52u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v29)) > _g4_s4 ? (60u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (77u + sizeof(_g4_t_v30)) > _g4_s5 ? (77u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v31)) > _g4_s6 ? (84u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v32)) > _g4_s7 ? (88u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v33)) > _g4_s8 ? (92u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v34)) > _g4_s9 ? (96u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v35)) > _g4_s10 ? (100u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v36)) > _g4_s11 ? (104u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_v37)) > _g4_s12 ? (108u + sizeof(_g4_t_v37)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_CloudSaves &CloudSaves = *reinterpret_cast<_g4_t_CloudSaves *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 77u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 92u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 104u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 108u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), (char *)&unk_1B15112, (int)(uintptr_t)(&v30));
  v2 = a2[2];
  switch ( v2 )
  {
    case 1:
      CloudSaves = savemanager::SaveGameManager::GetCloudSaves(self, (int *)(a2 + 10), (int)(uintptr_t)(a2 + 7), 0, nullptr, nullptr);
      v4 = (void **)(a2 + 11);
      v5 = (Json::Value::Self *)(a2 + 3);
      ((void (*)(uint32_t, char *, void *, uint32_t))a2[1])(a2[2], (char *)a2 + 28, CloudSaves, *a2);
      goto LABEL_5;
    case 2:
      v32 = 0;
      if ( gaia::Gaia_Pandora::getServerTimeStamp(*((uint32_t *)*(self + 4) + 139), &v32, 0, 0, 0) != 0 )
      {
        v2 = a2[2];
        v26 = -5000;
        goto LABEL_3;
      }
      v4 = (void **)(a2 + 11);
      savemanager::CloudSave::SetTimeStamp((savemanager::CloudSave::Self *)(a2 + 11), v32);
      v18 = savemanager::SaveGameManager::UploadSaveToCloud(
              (savemanager::SaveGameManager::Self *)self,
              (savemanager::CloudSave::Self *)(a2 + 11));
      v19 = (void ***)a2[8];
      v20 = v19 == (void ***)a2[9];
      v26 = v18;
      v33 = (int)(uintptr_t)(a2 + 11);
      if ( v20 )
      {
        g4_std_compat::vector_insert_aux((int)(uintptr_t)(a2 + 7), v19, (int)(uintptr_t)(&v33));
        v2 = a2[2];
        v5 = (Json::Value::Self *)(a2 + 3);
        v3 = (char *)(a2 + 7);
      }
      else
      {
        v21 = 0;
        if ( v19 != nullptr )
        {
          *v19 = v4;
          v21 = a2[8];
        }
        a2[8] = v21 + 4;
        v3 = (char *)(a2 + 7);
        v2 = a2[2];
        v5 = (Json::Value::Self *)(a2 + 3);
      }
      goto LABEL_4;
    case 3:
      v5 = (Json::Value::Self *)(a2 + 3);
      if ( !Json::Value::isMember((Json::Value::Self *)(a2 + 3), "saveFileName") )
        goto LABEL_18;
      v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a2 + 3), "saveFileName");
      if ( Json::Value::type(v11) != 4 )
        goto LABEL_18;
      if ( !Json::Value::isMember((Json::Value::Self *)(a2 + 3), "seshatKeyValue") )
        goto LABEL_18;
      v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a2 + 3), "seshatKeyValue");
      if ( Json::Value::type(v12) != 4 )
        goto LABEL_18;
      v13 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a2 + 3), "seshatKeyValue"));
      Json::Value::asString((Json::Value::Self *)&v36, v13);
      v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a2 + 3), "credentials");
      v28 = Json::Value::asInt(v14);
      v15 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a2 + 3), "saveFileName"));
      Json::Value::asString((Json::Value::Self *)&v35, v15);
      v26 = savemanager::SaveGameManager::RestoreCloudSave(self, &v35, v28, &v36, 0, nullptr, nullptr);
      v16 = (void *)(v35 - 12);
      if ( (uint32_t *)(v35 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v16);
      }
      v17 = v36 - 12;
      if ( v36 - 12 == (char *)dword_213B808 || __sync_fetch_and_add((volatile int32_t *)v36 - 1, 0xFFFFFFFF) > 0 )
        goto LABEL_13;
      v25 = (Json::Value::Self *)v17;
      v4 = (void **)(a2 + 11);
      g4_std::string::Rep::M_destroy(v25);
      v2 = a2[2];
      v3 = (char *)(a2 + 7);
      goto LABEL_4;
    case 4:
      v5 = (Json::Value::Self *)(a2 + 3);
      if ( Json::Value::isMember((Json::Value::Self *)(a2 + 3), "saveFileName")
        && (v9 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a2 + 3), "saveFileName"),
            Json::Value::type(v9) == 4) )
      {
        v10 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a2 + 3), "saveFileName"));
        Json::Value::asString((Json::Value::Self *)&v34, v10);
        v4 = (void **)(a2 + 11);
        v26 = savemanager::SaveGameManager::RestoreCloudSave(self, &v34, (char **)a2 + 11, 0, nullptr, nullptr);
        v29 = (void *)(v34 - 12);
        if ( (uint32_t *)(v34 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v29);
        }
        v2 = a2[2];
        v3 = (char *)(a2 + 7);
LABEL_4:
        ((void (*)(int, char *, int, uint32_t))a2[1])(v2, v3, v26, *a2);
      }
      else
      {
LABEL_18:
        v4 = (void **)(a2 + 11);
        ((void (*)(uint32_t, char *, int, uint32_t))a2[1])(a2[2], (char *)a2 + 28, -22, *a2);
      }
LABEL_5:
      savemanager::CloudSave::Destroy(v4);
      if ( a2[7] != 0 )
        opDelete((void *)a2[7]);
      Json::Value::Destroy(v5);
      opDelete(a2);
      result = v31;
      v7 = (void *)(v31 - 12);
      if ( (uint32_t *)(v31 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
      {
        return ((g4_std::string::Rep::M_destroy(v7)), (int)0);
      }
      return result;
    case 5:
      v5 = (Json::Value::Self *)(a2 + 3);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v37), (char *)&unk_1B15112, (int)(uintptr_t)(&v30) + 1);
      if ( Json::Value::isMember((Json::Value::Self *)(a2 + 3), "CCMessage")
        && (v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a2 + 3), "CCMessage"),
            Json::Value::type(v22) == 7) )
      {
        v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a2 + 3), "CCMessage");
        Instance = (glwebtools::Thread::Self **)savemanager::SaveGameManager::GetInstance();
        v26 = (int)(uintptr_t)(uintptr_t)(savemanager::SaveGameManager::RestoreCustomerCareSave(Instance, v23, (int)(uintptr_t)(v37), 0, nullptr, nullptr));
      }
      else
      {
        v26 = -22;
      }
      v8 = (void *)(v37[0] - 12);
      if ( (uint32_t *)(v37[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v37[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
LABEL_13:
      v2 = a2[2];
      v3 = (char *)(a2 + 7);
      v4 = (void **)(a2 + 11);
      goto LABEL_4;
    default:
      v26 = 0;
LABEL_3:
      v3 = (char *)(a2 + 7);
      v4 = (void **)(a2 + 11);
      v5 = (Json::Value::Self *)(a2 + 3);
      goto LABEL_4;
  }
}

// ----------------------------------------------------------------------------
// Function: savemanager::SaveGameManager::GenerateCustomerCareLink  (binary VA: 0x1386100)
// Original: savemanager::SaveGameManager::GenerateCustomerCareLink
// ----------------------------------------------------------------------------
int savemanager::SaveGameManager::GenerateCustomerCareLink(int a1, int a2, int a3, int a4, char a5, int a6, int a7)
{
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  int v15;
  void *v16;
  void *v17;
  void *v18;
  void *v19;
  void *v20;
  char *v21;
  void *v22;
  uint32_t *v23;
  void *v24;
  void *v25;
  char *v27;
  uint32_t *v28;
  void *v29;
  void *v30;
  typedef void *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef void *_g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint32_t _g4_t_v59[42];
  typedef char _g4_t_v60;
  typedef char _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (8u + sizeof(_g4_t_v31)) > _g4_s0 ? (8u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v32)) > _g4_s1 ? (20u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v33)) > _g4_s2 ? (24u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v34)) > _g4_s3 ? (28u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (38u + sizeof(_g4_t_v35)) > _g4_s4 ? (38u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v36)) > _g4_s5 ? (56u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v37)) > _g4_s6 ? (60u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v38)) > _g4_s7 ? (64u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v39)) > _g4_s8 ? (68u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v40)) > _g4_s9 ? (72u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v41)) > _g4_s10 ? (76u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v42)) > _g4_s11 ? (80u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v43)) > _g4_s12 ? (84u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v44)) > _g4_s13 ? (88u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v45)) > _g4_s14 ? (92u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v46)) > _g4_s15 ? (96u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v47)) > _g4_s16 ? (100u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v48)) > _g4_s17 ? (104u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v49)) > _g4_s18 ? (108u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v50)) > _g4_s19 ? (112u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v51)) > _g4_s20 ? (116u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v52)) > _g4_s21 ? (120u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v53)) > _g4_s22 ? (124u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v54)) > _g4_s23 ? (128u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v55)) > _g4_s24 ? (132u + sizeof(_g4_t_v55)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v56)) > _g4_s25 ? (136u + sizeof(_g4_t_v56)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v57)) > _g4_s26 ? (140u + sizeof(_g4_t_v57)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v58)) > _g4_s27 ? (144u + sizeof(_g4_t_v58)) : _g4_s27,
    _g4_s29 = (148u + sizeof(_g4_t_v59)) > _g4_s28 ? (148u + sizeof(_g4_t_v59)) : _g4_s28,
    _g4_s30 = (316u + sizeof(_g4_t_v60)) > _g4_s29 ? (316u + sizeof(_g4_t_v60)) : _g4_s29,
    _g4_s31 = (317u + sizeof(_g4_t_v61)) > _g4_s30 ? (317u + sizeof(_g4_t_v61)) : _g4_s30,
    _g4_s32 = (320u + sizeof(_g4_t_v62)) > _g4_s31 ? (320u + sizeof(_g4_t_v62)) : _g4_s31,
    _g4_s33 = (324u + sizeof(_g4_t_v63)) > _g4_s32 ? (324u + sizeof(_g4_t_v63)) : _g4_s32,
    _g4_s34 = (328u + sizeof(_g4_t_v64)) > _g4_s33 ? (328u + sizeof(_g4_t_v64)) : _g4_s33,
    _g4_s35 = (332u + sizeof(_g4_t_v65)) > _g4_s34 ? (332u + sizeof(_g4_t_v65)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 38u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 68u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 84u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 92u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 100u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 104u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 112u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 116u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 120u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 124u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 128u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 132u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 136u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 140u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 144u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 148u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 316u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 317u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 320u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 324u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 328u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 332u);

  g4_std_compat::string_assign(a7, "https://ingameads.gameloft.com/redir/", 0x25u);
  g4_std::string::append(a7, "?", 1u);
  g4_std::string::append(a7, "from=", 5u);
  g4_std::string::append_str(a7, a2);
  g4_std::string::append(a7, "&op=", 4u);
  g4_std::string::append_str(a7, a3);
  if ( a5 != 0 )
    g4_std::string::append(a7, "&ctg=BANNED", 0xBu);
  else
    g4_std::string::append(a7, "&ctg=SUPPORT", 0xCu);
  g4_std::string::append(a7, "&opref=", 7u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), (char *)&unk_1B15112, (int)(uintptr_t)(&v32));
  gaia::GameloftID::RetrieveDeviceInfo((gaia::GameloftID::Self *)&v53);
  g4_std::string::assign_str(&v36, &v57);
  v7 = (void *)(v58 - 12);
  if ( (uint32_t *)(v58 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v57 - 12);
  if ( (uint32_t *)(v57 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v56 - 12);
  if ( (uint32_t *)(v56 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = (void *)(v55 - 12);
  if ( (uint32_t *)(v55 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  v11 = (void *)(v54 - 12);
  if ( (uint32_t *)(v54 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  v12 = (void *)(v53 - 12);
  if ( (uint32_t *)(v53 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  Gaia_GetSerial((int)(uintptr_t)(&v37));
  g4_std::string::assign_str(&v36, &v37);
  g4_std::string::append_str(a7, &v36);
  g4_std::string::append(a7, "&extra_4=", 9u);
  v38 = &dword_213B814;
  gaia::Gaia::GetCredentialDetails(*(gaia::Gaia::Self **)(a1 + 16), *(uint32_t *)(a1 + 40), 2, (gaia::Gaia::Self *)&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), (char *)&unk_1B15112, (int)(uintptr_t)(&v32) + 1);
  glwebtools::Codec::EncodeUrlRFC3986(&v38, &v39);
  g4_std::string::append_str(a7, &v39);
  getMacAddress((int)(uintptr_t)(&v40));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), (char *)&unk_1B15112, (int)(uintptr_t)(&v32) + 2);
  g4_std::string::append(a7, "&Extra_8=", 9u);
  if ( *(v40 - 3) != 0 )
  {
    memset(v59, 0, 0x80u);
    std::memcpy(v59, "G4m3l0ft_s3cr3t0", 16);
    savemanager::SaveGameManager::Encrypt_MAC_DES((int)(uintptr_t)(&v42), a1, v59, (const void **)&v40);
    g4_std::string::assign_str(&v41, &v42);
    v30 = (void *)(v42 - 12);
    if ( (uint32_t *)(v42 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v30);
    }
  }
  g4_std::string::append_str(a7, &v41);
  g4_std::string::append(a7, "&Extra_13=", 0xAu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), (char *)&unk_1B15112, (int)(uintptr_t)(&v32) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), (char *)&unk_1B15112, (int)(uintptr_t)(&v33));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "1.8.2", (int)(uintptr_t)(&v33) + 1);
  glwebtools::Codec::EncodeUrlRFC3986(&v45, &v43);
  v13 = (void *)(v45 - 12);
  if ( (uint32_t *)(v45 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "f", (int)(uintptr_t)(&v33) + 2);
  glwebtools::Codec::EncodeUrlRFC3986(&v46, &v44);
  v14 = (void *)(v46 - 12);
  if ( (uint32_t *)(v46 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  g4_std::string::append_str(a7, &v43);
  g4_std::string::append_str(a7, &v44);
  if ( a5 != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), (char *)&unk_1B15112, (int)(uintptr_t)(&v33) + 3);
    sub_1900810(&v59[13]);
    v59[41] = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v59[13] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v65 = 0;
    v59[0] = (uint32_t)(uintptr_t)(&off_20AAF2C);
    *(uint32_t *)((char *)v59 + (uint32_t)*(&off_20AAF2C - 3)) = (uint32_t)(uintptr_t)(&off_20AAF40);
    v59[1] = 0;
    sub_19119D0((char *)v59 + *(uint32_t *)(v59[0] - 12), 0);
    v59[2] = (uint32_t)(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v59[2] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    sub_19119D0((char *)&v59[2] + *(uint32_t *)(v59[2] - 12), 0);
    v59[0] = (uint32_t)(uintptr_t)(&off_20AAF6C);
    *(uint32_t *)((char *)v59 + (uint32_t)*(&off_20AAF6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAF94);
    memset(&v59[4], 0, 24);
    v59[0] = (uint32_t)(uintptr_t)(&off_20AAFEC);
    v59[13] = (uint32_t)(uintptr_t)(&off_20AB014);
    v59[2] = ((uint32_t)(uintptr_t)&off_20AB000);
    v59[3] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(&v59[10]);
    v59[11] = 0;
    v59[3] = (uint32_t)(uintptr_t)(&off_20AADA8);
    sub_193A970((int)(uintptr_t)(&v59[12]), v47, *((uint32_t *)v47 - 3), (int)(uintptr_t)(&v35));
    v59[11] = 24;
    sub_1931CD0(&v59[3], v59[12], 0, 0);
    sub_19119D0(&v59[13], &v59[3]);
    v27 = (char *)v47 - 12;
    if ( (char *)v47 - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v47 - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v27);
    }
    g4_std::ostream::op_shl_int(&v59[2], a6);
    g4_std::string::append(a7, "&Extra_14=", 0xAu);
    v48 = &dword_213B814;
    if ( v59[8] != 0 )
    {
      if ( v59[8] > v59[6] )
      {
        sub_11A9950(&v52, (uint8_t *)v59[7], (uint8_t *)v59[8]);
        g4_std::string::assign_str(&v48, &v52);
        v31 = (void *)(v52 - 12);
        if ( (uint32_t *)(v52 - 12) == dword_213B808
          || __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) > 0 )
        {
          goto LABEL_31;
        }
      }
      else
      {
        sub_11A9950(&v51, (uint8_t *)v59[7], (uint8_t *)v59[6]);
        g4_std::string::assign_str(&v48, &v51);
        v31 = (void *)(v51 - 12);
        if ( (uint32_t *)(v51 - 12) == dword_213B808
          || __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) > 0 )
        {
          goto LABEL_31;
        }
      }
      g4_std::string::Rep::M_destroy(v31);
    }
    else
    {
      g4_std::string::assign_str(&v48, &v59[12]);
    }
LABEL_31:
    g4_std::string::append_str(a7, &v48);
    v28 = v48 - 3;
    if ( v48 - 3 != dword_213B808 && __sync_fetch_and_add(v48 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v28);
    v59[0] = (uint32_t)(uintptr_t)(&off_20AAFEC);
    v59[13] = (uint32_t)(uintptr_t)(&off_20AB014);
    v59[2] = ((uint32_t)(uintptr_t)&off_20AB000);
    v59[3] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v29 = (void *)(v59[12] - 12);
    if ( (uint32_t *)(v59[12] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v59[12] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v29);
    }
    v59[3] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(&v59[10]);
    v59[0] = (uint32_t)(uintptr_t)(&off_20AAF6C);
    *(uint32_t *)((char *)v59 + (uint32_t)*(&off_20AAF6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAF94);
    v59[2] = (uint32_t)(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v59[2] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    v59[0] = (uint32_t)(uintptr_t)(&off_20AAF2C);
    *(uint32_t *)((char *)v59 + (uint32_t)*(&off_20AAF2C - 3)) = (uint32_t)(uintptr_t)(&off_20AAF40);
    v59[1] = 0;
    v59[13] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(&v59[13]);
  }
  identifiers::GetCurrentHDIDFV((identifiers::Self *)&v49);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), (char *)&unk_1B15112, (int)(uintptr_t)(&v34));
  v15 = *(uint32_t *)(v49 - 12);
  if ( v15 != 0 )
    glwebtools::Codec::EncodeBase64(v49, v15, &v50, 0);
  g4_std::string::append(a7, "&Extra_15=", 0xAu);
  g4_std::string::append_str(a7, &v50);
  v16 = (void *)(v50 - 12);
  if ( (uint32_t *)(v50 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  v17 = (void *)(v49 - 12);
  if ( (uint32_t *)(v49 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  v18 = (void *)(v44 - 12);
  if ( (uint32_t *)(v44 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  v19 = (void *)(v43 - 12);
  if ( (uint32_t *)(v43 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  v20 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v20);
  }
  v21 = (char *)(v40 - 3);
  if ( v40 - 3 != dword_213B808 && __sync_fetch_and_add(v40 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v21);
  v22 = (void *)(v39 - 12);
  if ( (uint32_t *)(v39 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v22);
  }
  v23 = v38 - 3;
  if ( v38 - 3 != dword_213B808 && __sync_fetch_and_add(v38 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v23);
  v24 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v24);
  }
  v25 = (void *)(v36 - 12);
  if ( (uint32_t *)(v36 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v25);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: savemanager::SavesStorageWrapper::GetStorageFilePath  (binary VA: 0x1387530)
// Original: savemanager::SavesStorageWrapper::GetStorageFilePath
// ----------------------------------------------------------------------------
savemanager::SavesStorageWrapper::Self * savemanager::SavesStorageWrapper::GetStorageFilePath(savemanager::SavesStorageWrapper::Self *self)
{
  getSD_path((int)(uintptr_t)(self));
  return self;
}

// ----------------------------------------------------------------------------
// Function: savemanager::Console::Construct  (binary VA: 0x13876a0)
// Original: savemanager::Console::Console
// ----------------------------------------------------------------------------
void savemanager::Console::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: savemanager::Console::Destroy  (binary VA: 0x13876b0)
// Original: savemanager::Console::~Console
// ----------------------------------------------------------------------------
void savemanager::Console::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: savemanager::Console::SetLogLevel  (binary VA: 0x13876c0)
// Original: savemanager::Console::SetLogLevel
// ----------------------------------------------------------------------------
uint32_t * savemanager::Console::SetLogLevel()
{
  savemanager::Console::m_logLevel[0] = 0;
  return (uint32_t *)(savemanager::Console::m_logLevel);
}

// ----------------------------------------------------------------------------
// Function: savemanager::Console::IncreaseIndent  (binary VA: 0x13876e0)
// Original: savemanager::Console::IncreaseIndent
// ----------------------------------------------------------------------------
uint32_t * savemanager::Console::IncreaseIndent()
{
  uint32_t *result;

  result = (uint32_t *)(savemanager::Console::m_logLevel);
  if ( savemanager::Console::m_logLevel[0] > 4u )
  {
    ++savemanager::Console::m_indentLevel;
    return (uint32_t *)(&savemanager::Console::m_indentLevel);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::Console::DecreaseIndent  (binary VA: 0x1387700)
// Original: savemanager::Console::DecreaseIndent
// ----------------------------------------------------------------------------
uint32_t * savemanager::Console::DecreaseIndent()
{
  uint32_t *result;

  result = (uint32_t *)(savemanager::Console::m_logLevel);
  if ( savemanager::Console::m_logLevel[0] > 4u )
  {
    --savemanager::Console::m_indentLevel;
    return (uint32_t *)(&savemanager::Console::m_indentLevel);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::Console::Print  (binary VA: 0x1387720)
// Original: savemanager::Console::Print
// ----------------------------------------------------------------------------
uint32_t * savemanager::Console::Print(savemanager::Console::Self *self, char *format, const char *__varargs, ...)
{
  uint32_t *result;

  result = (uint32_t *)(savemanager::Console::m_logLevel);
  if ( savemanager::Console::m_logLevel[0] >= (unsigned int)(uintptr_t)(self) )
  {
    vsnprintf(((char *)(&byte_2118E00)), 0x400u, format, &__varargs);
    switch ( (unsigned int)(uintptr_t)(self) )
    {
      case 0u:
        result = (G4_PlatformLog(3, "[GLSG]", "%s", (const char *)(&byte_2118E00)), (uint32_t *)0);
        break;
      case 1u:
        result = (G4_PlatformLog(7, "[GLSG]", "%s", (const char *)(&byte_2118E00)), (uint32_t *)0);
        break;
      case 2u:
        result = (G4_PlatformLog(6, "[GLSG]", "%s", (const char *)(&byte_2118E00)), (uint32_t *)0);
        break;
      case 3u:
        result = (G4_PlatformLog(5, "[GLSG]", "%s", (const char *)(&byte_2118E00)), (uint32_t *)0);
        break;
      case 4u:
        result = (G4_PlatformLog(4, "[GLSG]", "%s", (const char *)(&byte_2118E00)), (uint32_t *)0);
        break;
      default:
        result = (G4_PlatformLog(2, "[GLSG]", "%s", (const char *)(&byte_2118E00)), (uint32_t *)0);
        break;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::IStorageWrapper::CloseFile  (binary VA: 0x1387890)
// Original: savemanager::IStorageWrapper::CloseFile
// ----------------------------------------------------------------------------
int savemanager::IStorageWrapper::CloseFile(int a1, FILE *stream)
{
  return fclose(stream);
}

// ----------------------------------------------------------------------------
// Function: savemanager::IStorageWrapper::char2pathString_t  (binary VA: 0x13878c0)
// Original: savemanager::IStorageWrapper::char2pathString_t
// ----------------------------------------------------------------------------
int savemanager::IStorageWrapper::char2pathString_t(int a1, int a2, int a3)
{
  g4_std::string::assign_str(a3, a2);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: savemanager::IStorageWrapper::GetFileWithPath  (binary VA: 0x13878f0)
// Original: savemanager::IStorageWrapper::GetFileWithPath
// ----------------------------------------------------------------------------
int savemanager::IStorageWrapper::GetFileWithPath(int a1, void (***a2)(int *), int a3)
{
  char v3;
  void *v4;
  uint32_t *v5;
  void *v6;
  typedef char _g4_t_v8;
  typedef void *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (29u + sizeof(_g4_t_v10)) > _g4_s2 ? (29u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v11)) > _g4_s3 ? (36u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v12)) > _g4_s4 ? (40u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v13)) > _g4_s5 ? (44u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v14)) > _g4_s6 ? (48u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 29u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);

  (**a2)(&v11);
  v12 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/", (int)(uintptr_t)(&v10));
  v3 = savemanager::IStorageWrapper::char2pathString_t((int)(uintptr_t)(a2), (int)(uintptr_t)(&v13), (int)(uintptr_t)(&v12));
  v9 = (void *)(v13 - 12);
  if ( (uint32_t *)(v13 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
  {
    v8 = v3;
    g4_std::string::Rep::M_destroy(v9);
    v3 = v8;
  }
  if ( v3 != 0 )
  {
    v14[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    if ( (uint8_t)savemanager::IStorageWrapper::char2pathString_t((int)(uintptr_t)(a2), a3, (int)(uintptr_t)(v14)) != 0 )
    {
      g4_std::string::append_str(&v11, &v12);
      g4_std::string::append_str(&v11, v14);
      g4_std::string::construct_copy(a1, &v11);
    }
    else
    {
      g4_std::string::construct_from_cstr(a1, nullptr, (int)(uintptr_t)(&v10) + 2);
    }
    v4 = (void *)(v14[0] - 12);
    if ( (uint32_t *)(v14[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
  }
  else
  {
    g4_std::string::construct_from_cstr(a1, nullptr, (int)(uintptr_t)(&v10) + 1);
  }
  v5 = v12 - 3;
  if ( v12 - 3 != dword_213B808 && __sync_fetch_and_add(v12 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v5);
  v6 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: savemanager::IStorageWrapper::Remove  (binary VA: 0x1387ae0)
// Original: savemanager::IStorageWrapper::Remove
// ----------------------------------------------------------------------------
int savemanager::IStorageWrapper::Remove(void (***a1)(int *), int a2)
{
  int result;
  char *v3;
  typedef int _g4_t_v4;
  typedef char *_g4_t_filename;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_filename)) > _g4_s1 ? (28u + sizeof(_g4_t_filename)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_filename &filename = *reinterpret_cast<_g4_t_filename *>(_g4_sf + 28u);

  savemanager::IStorageWrapper::GetFileWithPath((int)(uintptr_t)(&filename), a1, a2);
  result = -1;
  v3 = filename;
  if ( *((uint32_t *)filename - 3) != 0 )
  {
    result = remove(filename);
    v3 = filename;
  }
  if ( v3 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v3 - 1, 0xFFFFFFFF) <= 0 )
  {
    v4 = result;
    g4_std::string::Rep::M_destroy(v3 - 12);
    return v4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::IStorageWrapper::Rename  (binary VA: 0x1387b70)
// Original: savemanager::IStorageWrapper::Rename
// ----------------------------------------------------------------------------
int savemanager::IStorageWrapper::Rename(void (***a1)(int *), int a2, int a3)
{
  char *v3;
  int result;
  char *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef char *_g4_t_old;
  typedef char *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_old)) > _g4_s2 ? (24u + sizeof(_g4_t_old)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v9)) > _g4_s3 ? (28u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_old &old = *reinterpret_cast<_g4_t_old *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  savemanager::IStorageWrapper::GetFileWithPath((int)(uintptr_t)(&old), a1, a2);
  v3 = old;
  if ( *((uint32_t *)old - 3) != 0 )
  {
    savemanager::IStorageWrapper::GetFileWithPath((int)(uintptr_t)(&v9), a1, a3);
    result = -1;
    v5 = v9;
    if ( *((uint32_t *)v9 - 3) != 0 )
    {
      result = rename(old, v9);
      v5 = v9;
    }
    if ( v5 - 12 == (char *)dword_213B808 || __sync_fetch_and_add((volatile int32_t *)v5 - 1, 0xFFFFFFFF) > 0 )
    {
      v3 = old;
    }
    else
    {
      v6 = result;
      g4_std::string::Rep::M_destroy(v5 - 12);
      v3 = old;
      result = v6;
    }
  }
  else
  {
    result = -1;
  }
  if ( v3 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v3 - 1, 0xFFFFFFFF) <= 0 )
  {
    v7 = result;
    g4_std::string::Rep::M_destroy(v3 - 12);
    return v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::IStorageWrapper::OpenFile  (binary VA: 0x1387c90)
// Original: savemanager::IStorageWrapper::OpenFile
// ----------------------------------------------------------------------------
FILE * savemanager::IStorageWrapper::OpenFile(void (***a1)(int *), int a2, int a3)
{
  char *v3;
  FILE *v4;
  char *v5;
  typedef char *_g4_t_filename;
  typedef char *_g4_t_modes;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_filename)) > _g4_s0 ? (8u + sizeof(_g4_t_filename)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_modes)) > _g4_s1 ? (12u + sizeof(_g4_t_modes)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_filename &filename = *reinterpret_cast<_g4_t_filename *>(_g4_sf + 8u);
  _g4_t_modes &modes = *reinterpret_cast<_g4_t_modes *>(_g4_sf + 12u);

  savemanager::IStorageWrapper::GetFileWithPath((int)(uintptr_t)(&filename), a1, a2);
  v3 = filename;
  if ( *((uint32_t *)filename - 3) != 0 )
  {
    v4 = nullptr;
    modes = (char *)&dword_213B814;
    if ( (uint8_t)savemanager::IStorageWrapper::char2pathString_t((int)(uintptr_t)(a1), a3, (int)(uintptr_t)(&modes)) != 0 )
      v4 = fopen(filename, modes);
    v5 = modes - 12;
    if ( modes - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)modes - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v3 = filename;
  }
  else
  {
    v4 = nullptr;
  }
  if ( v3 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v3 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3 - 12);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: savemanager::IStorageWrapper::GetFileSize  (binary VA: 0x1387d90)
// Original: savemanager::IStorageWrapper::GetFileSize
// ----------------------------------------------------------------------------
int savemanager::IStorageWrapper::GetFileSize(void (***a1)(int *), int a2, __off_t *a3)
{
  int result;
  char *v4;
  struct stat buf;
  typedef int _g4_t_v5;
  typedef char *_g4_t_file;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_file)) > _g4_s1 ? (28u + sizeof(_g4_t_file)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_file &file = *reinterpret_cast<_g4_t_file *>(_g4_sf + 28u);

  savemanager::IStorageWrapper::GetFileWithPath((int)(uintptr_t)(&file), a1, a2);
  result = -1;
  v4 = file;
  if ( *((uint32_t *)file - 3) != 0 )
  {
    result = stat(file, &buf);
    if ( result == 0 )
      *a3 = buf.st_size;
    v4 = file;
  }
  if ( v4 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v4 - 1, 0xFFFFFFFF) <= 0 )
  {
    v5 = result;
    g4_std::string::Rep::M_destroy(v4 - 12);
    return v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: savemanager::IStorageWrapper::char2pathString_t  (binary VA: 0x1387e40)
// Original: savemanager::IStorageWrapper::char2pathString_t
// ----------------------------------------------------------------------------
int savemanager::IStorageWrapper::char2pathString_t(int a1, const char **a2, int a3)
{
  wchar_t *pwcs;
  const char *s;
  size_t n;
  int v6;
  int *v8;
  int *v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v14;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef void *_g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v16)) > _g4_s1 ? (28u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v17)) > _g4_s2 ? (32u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v18)) > _g4_s3 ? (36u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v19)) > _g4_s4 ? (40u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v20)) > _g4_s5 ? (44u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  pwcs = nullptr;
  s = *a2;
  n = *((uint32_t *)*a2 - 3);
  v18 = nullptr;
  v19 = nullptr;
  v20 = 0;
  v17 = 0;
  if ( n != 0 )
  {
    g4_std_compat::vector_fill_insert((int)(uintptr_t)(&v18), nullptr, n, (int)(uintptr_t)(&v17));
    pwcs = (wchar_t *)v18;
    s = *a2;
  }
  v6 = 0;
  if ( mbstowcs(pwcs, s, n) == n )
  {
    v8 = v19;
    v9 = (int *)v18;
    if ( v19 == v18 )
    {
      v10 = (uint32_t *)(&unk_213B8B4);
    }
    else
    {
      v15 = ((char *)v19 - (char *)((uint8_t *)v18)) >> 2;
      v12 = sub_194DEB0(v15, 0);
      v10 = (uint32_t *)(v12 + 12);
      v13 = (uint32_t *)(v12 + 12);
      do
      {
        v14 = *v9++;
        *v13++ = v14;
      }
      while ( v8 != v9 );
      if ( (void *)v12 != &unk_213B8A8 )
      {
        *(uint32_t *)(v12 + 8) = 0;
        *(uint32_t *)v12 = v15;
        v10[v15] = 0;
      }
    }
    v16 = v10;
    sub_194F8F0(a3, &v16);
    v11 = v16 - 3;
    if ( v16 - 3 == (uint32_t *)&unk_213B8A8 )
    {
      v6 = 1;
    }
    else
    {
      v6 = 1;
      if ( __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
        sub_194E070(v11);
    }
  }
  if ( v18 != nullptr )
    opDelete(v18);
  return v6;
}


