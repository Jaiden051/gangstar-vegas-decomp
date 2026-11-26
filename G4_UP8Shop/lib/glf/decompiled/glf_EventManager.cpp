#include "Core/Utils/DecompTypes.h"
#include "glf_EventManager.h"

extern "C" uintptr_t g4_compat_map_int_typeinfo_index(void *map_ptr, const int *key_ptr);

// ----------------------------------------------------------------------------
// Function: glf::EventManager::PreSendEvent  (binary VA: 0xc72e20)
// Original: glf::EventManager::PreSendEvent
// ----------------------------------------------------------------------------
int glf::EventManager::PreSendEvent(int a1, int16_t *a2)
{
  uint16_t v2;
  int Instance;
  int v5;

  v2 = *a2;
  if ( (uint16_t)*a2 > 0xCDu )
  {
    if ( (uint16_t)(v2 - 208) <= 0xAu )
      return (*(int (**)(uint32_t, int16_t *))(**((uint32_t **)a2 + 1) + 12))(*((uint32_t *)a2 + 1), a2);
  }
  else
  {
    if ( v2 >= 0xC8u )
      return (*(int (**)(uint32_t, int16_t *))(**((uint32_t **)a2 + 1) + 12))(*((uint32_t *)a2 + 1), a2);
    if ( v2 == 100 )
    {
      Instance = glf::App::GetInstance();
      v5 = *((uint32_t *)a2 + 1);
      if ( v5 == 1 )
        return glf::App::SetOrientation(Instance, 2);
      if ( v5 <= 1 )
      {
        if ( v5 == 0 )
          return glf::App::SetOrientation(Instance, 1);
      }
      else
      {
        if ( v5 == 2 )
          return glf::App::SetOrientation(Instance, 4);
        if ( v5 == 3 )
          return glf::App::SetOrientation(Instance, 8);
      }
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::GetEventTypesSize  (binary VA: 0xc75240)
// Original: glf::EventManager::GetEventTypesSize
// ----------------------------------------------------------------------------
int glf::EventManager::GetEventTypesSize(glf::EventManager::Self *self)
{
  return *((uint32_t *)self + 17);
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::GetEventTypesBegin  (binary VA: 0xc75250)
// Original: glf::EventManager::GetEventTypesBegin
// ----------------------------------------------------------------------------
glf::EventManager::Self * glf::EventManager::GetEventTypesBegin(glf::EventManager::Self *self, int a2)
{
  *(uint32_t *)self = *(uint32_t *)(a2 + 60);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::GetEventTypesEnd  (binary VA: 0xc75260)
// Original: glf::EventManager::GetEventTypesEnd
// ----------------------------------------------------------------------------
glf::EventManager::Self * glf::EventManager::GetEventTypesEnd(glf::EventManager::Self *self, int a2)
{
  *(uint32_t *)self = a2 + 52;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::GetEventName  (binary VA: 0xc75270)
// Original: glf::EventManager::GetEventName
// ----------------------------------------------------------------------------
glf::EventManager::Self * glf::EventManager::GetEventName(glf::EventManager::Self *self, uint32_t *a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v6[7];

  glf::SpinLock::Lock((glf::SpinLock::Self *)(a2 + 26));
  v3 = (uint32_t *)a2[20];
  if ( v3 == nullptr )
    goto LABEL_10;
  v4 = a2 + 19;
  do
  {
    while ( v3[4] >= a3 )
    {
      v4 = v3;
      v3 = (uint32_t *)v3[2];
      if ( v3 == nullptr )
        goto LABEL_6;
    }
    v3 = (uint32_t *)v3[3];
  }
  while ( v3 != nullptr );
LABEL_6:
  if ( v4 == a2 + 19 || v4[4] > a3 )
LABEL_10:
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(v6));
  else
    g4_std::string::construct_copy(self, v4 + 5);
  glf::SpinLock::Unlock((glf::SpinLock::Self *)(a2 + 26));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::GetEventSize  (binary VA: 0xc75310)
// Original: glf::EventManager::GetEventSize
// ----------------------------------------------------------------------------
int glf::EventManager::GetEventSize(glf::EventManager::Self *self, int a2)
{
  int v2;
  uint32_t *v3;
  uint32_t *v4;

  v2 = 0;
  glf::SpinLock::Lock((glf::EventManager::Self *)((char *)self + 104));
  v3 = *((uint32_t **)self + 20);
  if ( v3 != nullptr )
  {
    v4 = (uint32_t *)((char *)self + 76);
    do
    {
      while ( v3[4] >= a2 )
      {
        v4 = v3;
        v3 = (uint32_t *)v3[2];
        if ( v3 == nullptr )
          goto LABEL_6;
      }
      v3 = (uint32_t *)v3[3];
    }
    while ( v3 != nullptr );
LABEL_6:
    v2 = 0;
    if ( v4 != (uint32_t *)((char *)self + 76) && v4[4] <= a2 )
      v2 = v4[7];
  }
  glf::SpinLock::Unlock((glf::EventManager::Self *)((char *)self + 104));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::GetEventType  (binary VA: 0xc75390)
// Original: glf::EventManager::GetEventType
// ----------------------------------------------------------------------------
int glf::EventManager::GetEventType(glf::EventManager::Self *self, char *a2)
{
  char *v2;
  size_t v3;
  size_t v4;
  size_t v5;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  int v11;
  int v12;
  typedef size_t _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef char *_g4_t_v17;
  typedef uint16_t _g4_t_v18[15];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v15)) > _g4_s1 ? (20u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v17)) > _g4_s3 ? (28u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (46u + sizeof(_g4_t_v18)) > _g4_s4 ? (46u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 46u);

  glf::SpinLock::Lock((glf::EventManager::Self *)((char *)self + 104));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18[1]), a2, (int)(uintptr_t)(v18));
  v2 = *((char **)self + 14);
  v15 = (char *)self + 52;
  v17 = *(char **)&v18[1];
  if ( v2 == nullptr )
    goto LABEL_20;
  v3 = *(uint32_t *)(*(uint32_t *)&v18[1] - 12);
  v16 = (char *)self + 52;
  do
  {
    while ( 1 )
    {
      v4 = v3;
      v5 = *(uint32_t *)(*((uint32_t *)v2 + 4) - 12);
      v14 = v3;
      if ( v5 <= v3 )
        v4 = *(uint32_t *)(*((uint32_t *)v2 + 4) - 12);
      v6 = memcmp(*((const void **)v2 + 4), v17, v4);
      v3 = v14;
      v7 = v5 - v14;
      if ( v6 != 0 )
        v7 = v6;
      if ( v7 < 0 )
        break;
      v16 = v2;
      v2 = *((char **)v2 + 2);
      if ( v2 == nullptr )
        goto LABEL_10;
    }
    v2 = *((char **)v2 + 3);
  }
  while ( v2 != nullptr );
LABEL_10:
  if ( v15 == v16 )
    goto LABEL_20;
  v8 = v14;
  v9 = *(uint32_t *)(*((uint32_t *)v16 + 4) - 12);
  if ( v9 <= v14 )
    v8 = *(uint32_t *)(*((uint32_t *)v16 + 4) - 12);
  v10 = memcmp(v17, *((const void **)v16 + 4), v8);
  v11 = v14 - v9;
  if ( v10 != 0 )
    v11 = v10;
  if ( v11 < 0 )
LABEL_20:
    v16 = (char *)self + 52;
  if ( v17 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v17 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v17 - 12);
  if ( v15 == v16 )
    v12 = -1;
  else
    v12 = *((uint32_t *)v16 + 5);
  glf::SpinLock::Unlock((glf::EventManager::Self *)((char *)self + 104));
  return v12;
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::HasEventReceiver  (binary VA: 0xc754f0)
// Original: glf::EventManager::HasEventReceiver
// ----------------------------------------------------------------------------
bool glf::EventManager::HasEventReceiver(glf::EventManager::Self *self)
{
  return *((uint32_t *)self + 27) > 0;
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::PostEvent  (binary VA: 0xc75500)
// Original: glf::EventManager::PostEvent
// ----------------------------------------------------------------------------
int glf::EventManager::PostEvent(int a1, uint16_t *src)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  char *p_dest;
  uint16_t *v6;
  int v7;
  unsigned int v8;
  int v9;
  uint16_t *v10;
  char *v11;
  char *v13;
  int v14;
  unsigned int v15;
  uint16_t *v16;
  unsigned int v17;
  int v18;
  uint16_t *v19;
  char *v20;
  int *v21;
  int v22;
  unsigned int v23;
  int v24;
  void *v25;
  int v26;
  uint32_t *v27;
  int v28;
  int v29;
  int v30;
  typedef uint32_t *_g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef void *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t *_g4_t_v37;
  typedef void *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef char _g4_t_dest;
  typedef char _g4_t_v42;
  typedef int16_t _g4_t_v43;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v31)) > _g4_s0 ? (8u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v32)) > _g4_s1 ? (8u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v33)) > _g4_s2 ? (8u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v34)) > _g4_s3 ? (8u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v35)) > _g4_s4 ? (12u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v36)) > _g4_s5 ? (12u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v37)) > _g4_s6 ? (20u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v38)) > _g4_s7 ? (20u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v39)) > _g4_s8 ? (24u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v40)) > _g4_s9 ? (28u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_dest)) > _g4_s10 ? (32u + sizeof(_g4_t_dest)) : _g4_s10,
    _g4_s12 = (33u + sizeof(_g4_t_v42)) > _g4_s11 ? (33u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (34u + sizeof(_g4_t_v43)) > _g4_s12 ? (34u + sizeof(_g4_t_v43)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 33u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 34u);

  glf::SpinLock::Lock((glf::SpinLock::Self *)(a1 + 104));
  v2 = *(uint32_t **)(a1 + 80);
  v3 = (uint32_t *)(a1 + 76);
  v4 = *src;
  if ( v2 != nullptr )
  {
    do
    {
      while ( v4 <= v2[4] )
      {
        v3 = v2;
        v2 = (uint32_t *)v2[2];
        if ( v2 == nullptr )
          goto LABEL_6;
      }
      v2 = (uint32_t *)v2[3];
    }
    while ( v2 != nullptr );
LABEL_6:
    if ( (uint32_t *)(a1 + 76) != v3 && v4 < v3[4] )
      v3 = (uint32_t *)(a1 + 76);
  }
  p_dest = &dest;
  memcpy(&dest, src, v3[7]);
  v6 = *(uint16_t **)(a1 + 32);
  v7 = *(uint32_t *)(a1 + 40) - 128;
  v43 |= 2u;
  if ( v6 != (uint16_t *)v7 )
  {
    v8 = 0;
    if ( v6 == nullptr )
    {
LABEL_18:
      *(uint32_t *)(a1 + 32) = v8 + 128;
      return (int)(uintptr_t)(glf::SpinLock::Unlock((glf::SpinLock::Self *)(a1 + 104)));
    }
    LOBYTE(v8) = 0x80;
    if ( ((uint8_t)(uintptr_t)v6 & 1) != 0 )
    {
      p_dest = &v42;
      *(uint8_t *)v6 = dest;
      v6 = (uint16_t *)((char *)v6 + 1);
      v8 = 127;
    }
    if ( ((uint8_t)(uintptr_t)v6 & 2) != 0 )
    {
      v8 -= 2;
      *v6 = *(uint16_t *)p_dest;
      p_dest += 2;
      ++v6;
    }
    v9 = 0;
    std::memcpy(v6, p_dest, 4 * (v8 >> 2));
    v11 = &p_dest[4 * (v8 >> 2)];
    v10 = &v6[2 * (v8 >> 2)];
    if ( (v8 & 2) != 0 )
    {
      *v10 = *(uint16_t *)v11;
      v9 = 1;
      if ( (v8 & 1) == 0 )
        goto LABEL_17;
    }
    else if ( (v8 & 1) == 0 )
    {
LABEL_17:
      v8 = *(uint32_t *)(a1 + 32);
      goto LABEL_18;
    }
    LOBYTE(v10[v9]) = v11[v9 * 2];
    goto LABEL_17;
  }
  v13 = *(char **)(a1 + 44);
  v14 = *(uint32_t *)(a1 + 8);
  v15 = *(uint32_t *)(a1 + 12);
  if ( v15 - ((int)(uintptr_t)(&v13[-v14]) >> 2) <= 1 )
  {
    v37 = *(uint8_t **)(a1 + 28);
    v40 = ((v13 - (char *)(v37)) >> 2) + 1;
    v39 = ((v13 - (char *)(v37)) >> 2) + 2;
    if ( v15 > 2 * v39 )
    {
      v30 = v13 + 4 - (char *)(v37);
      v27 = (uint32_t *)(v14 + 4 * ((v15 - v39) >> 1));
      if ( v37 <= (uint8_t *)v27 )
      {
        if ( v30 >> 2 != 0 )
        {
          v33 = v27;
          memmove(&v27[v40 - (v30 >> 2)], v37, 4 * (v30 >> 2));
          v27 = v33;
        }
      }
      else if ( v30 >> 2 != 0 )
      {
        v32 = v27;
        memmove(v27, v37, 4 * (v30 >> 2));
        v27 = v32;
      }
    }
    else
    {
      v23 = 3;
      if ( v15 != 0 )
      {
        v23 = 2 * v15 + 2;
        if ( v23 > 0x3FFFFFFF )
          sub_18FFEE0(v14, v15);
      }
      v24 = opNew(4 * v23);
      v25 = (void *)(v24 + 4 * ((v23 - v39) >> 1));
      v38 = *(void **)(a1 + 28);
      v26 = (*(uint32_t *)(a1 + 44) + 4 - (int)(uintptr_t)(v38)) >> 2;
      if ( v26 != 0 )
      {
        v34 = (void *)(v24 + 4 * ((v23 - v39) >> 1));
        v36 = v24;
        memmove(v25, v38, 4 * v26);
        v24 = v36;
        v25 = v34;
      }
      v31 = (uint32_t *)(v25);
      v35 = v24;
      opDelete(*(void **)(a1 + 8));
      *(uint32_t *)(a1 + 12) = v23;
      *(uint32_t *)(a1 + 8) = v35;
      v27 = v31;
    }
    *(uint32_t *)(a1 + 28) = (uint32_t)(uintptr_t)(v27);
    v28 = *v27;
    *(uint32_t *)(a1 + 20) = *v27;
    *(uint32_t *)(a1 + 24) = v28 + 512;
    v13 = (char *)&v27[v40 - 1];
    *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(v13);
    v29 = *(uint32_t *)v13;
    *(uint32_t *)(a1 + 36) = *(uint32_t *)v13;
    *(uint32_t *)(a1 + 40) = v29 + 512;
  }
  *((uint32_t *)v13 + 1) = opNew(0x200u);
  v16 = *(uint16_t **)(a1 + 32);
  if ( v16 != nullptr )
  {
    v17 = 128;
    if ( ((uint8_t)(uintptr_t)v16 & 1) != 0 )
    {
      p_dest = &v42;
      *(uint8_t *)v16 = dest;
      v16 = (uint16_t *)((char *)v16 + 1);
      v17 = 127;
    }
    if ( ((uint8_t)(uintptr_t)v16 & 2) != 0 )
    {
      v17 -= 2;
      *v16 = *(uint16_t *)p_dest;
      p_dest += 2;
      ++v16;
    }
    v18 = 0;
    std::memcpy(v16, p_dest, 4 * (v17 >> 2));
    v20 = &p_dest[4 * (v17 >> 2)];
    v19 = &v16[2 * (v17 >> 2)];
    if ( (v17 & 2) != 0 )
    {
      *v19 = *(uint16_t *)v20;
      v18 = 1;
    }
    if ( (v17 & 1) != 0 )
      LOBYTE(v19[v18]) = v20[v18 * 2];
  }
  v21 = (int *)(*(uint32_t *)(a1 + 44) + 4);
  *(uint32_t *)(a1 + 44) = (uint32_t)(uintptr_t)(v21);
  v22 = *v21;
  *(uint32_t *)(a1 + 36) = *v21;
  *(uint32_t *)(a1 + 32) = v22;
  *(uint32_t *)(a1 + 40) = v22 + 512;
  return (int)(uintptr_t)(glf::SpinLock::Unlock((glf::SpinLock::Self *)(a1 + 104)));
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::RemoveEventReceiver  (binary VA: 0xc75870)
// Original: glf::EventManager::RemoveEventReceiver
// ----------------------------------------------------------------------------
int glf::EventManager::RemoveEventReceiver(glf::EventManager::Self *self, glf::EventReceiver::Self *a2)
{
  int *v2;

  glf::SpinLock::Lock((glf::EventManager::Self *)((char *)self + 104));
  v2 = *((int **)self + 24);
  if ( v2 != (int *)((char *)self + 96) )
  {
    while ( (glf::EventReceiver::Self *)v2[2] != a2 )
    {
      v2 = (int *)*v2;
      if ( (int *)((char *)self + 96) == v2 )
        return (int)(uintptr_t)(glf::SpinLock::Unlock((glf::EventManager::Self *)((char *)self + 104)));
    }
    sub_1901940(v2);
    if ( v2[5] != 0 )
      opDelete((void *)v2[5]);
    opDelete(v2);
    --*((uint32_t *)self + 27);
  }
  return (int)(uintptr_t)(glf::SpinLock::Unlock((glf::EventManager::Self *)((char *)self + 104)));
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::GetEventSerializer  (binary VA: 0xc758f0)
// Original: glf::EventManager::GetEventSerializer
// ----------------------------------------------------------------------------
int glf::EventManager::GetEventSerializer(glf::EventManager::Self *self, int a2)
{
  int v2;
  uint32_t *v3;
  uint32_t *v4;

  v2 = 0;
  glf::SpinLock::Lock((glf::EventManager::Self *)((char *)self + 104));
  v3 = *((uint32_t **)self + 20);
  if ( v3 != nullptr )
  {
    v4 = (uint32_t *)((char *)self + 76);
    do
    {
      while ( v3[4] >= a2 )
      {
        v4 = v3;
        v3 = (uint32_t *)v3[2];
        if ( v3 == nullptr )
          goto LABEL_6;
      }
      v3 = (uint32_t *)v3[3];
    }
    while ( v3 != nullptr );
LABEL_6:
    v2 = 0;
    if ( v4 != (uint32_t *)((char *)self + 76) && v4[4] <= a2 )
      v2 = v4[6];
  }
  glf::SpinLock::Unlock((glf::EventManager::Self *)((char *)self + 104));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::RegisterEventSerializer  (binary VA: 0xc75970)
// Original: glf::EventManager::RegisterEventSerializer
// ----------------------------------------------------------------------------
int glf::EventManager::RegisterEventSerializer(uint32_t *a1, int *a2, int a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v9;

  glf::SpinLock::Lock((glf::SpinLock::Self *)(a1 + 26));
  v3 = *a2;
  v9 = (a2[1] - *a2) >> 2;
  if ( v9 != 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = (uint32_t *)a1[20];
      if ( v5 != nullptr )
      {
        v6 = *(uint32_t *)(v3 + 4 * v4);
        v7 = a1 + 19;
        do
        {
          while ( v5[4] >= v6 )
          {
            v7 = v5;
            v5 = (uint32_t *)v5[2];
            if ( v5 == nullptr )
              goto LABEL_8;
          }
          v5 = (uint32_t *)v5[3];
        }
        while ( v5 != nullptr );
LABEL_8:
        if ( a1 + 19 != v7 && v7[4] <= v6 )
          v7[6] = a3;
      }
      if ( ++v4 == v9 )
        break;
      v3 = *a2;
    }
  }
  return (int)(uintptr_t)(glf::SpinLock::Unlock((glf::SpinLock::Self *)(a1 + 26)));
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::RaiseEvent  (binary VA: 0xc771e0)
// Original: glf::EventManager::RaiseEvent
// ----------------------------------------------------------------------------
int glf::EventManager::RaiseEvent(glf::EventManager::Self *a1, uint16_t *a2)
{
  int v2;
  int v4;
  uint32_t *v5;
  int v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v2 = 0;
  if ( G4_VCALL<uint8_t>(a1, 8, a2) != 0
    && glf::EventManager::HasEventReceiver(a1) )
  {
    v15[0] = *a2;
    v4 = g4_compat_map_int_typeinfo_index((char *)a1 + 72, v15);
    v5 = *((uint32_t **)a1 + 24);
    v6 = *(uint32_t *)(v4 + 12);
    v13 = v6;
    if ( v5 != (uint32_t *)((char *)a1 + 96) )
    {
      v14 = 4 * ((unsigned int)v6 >> 5);
      if ( v6 < 0 )
      {
        while ( 1 )
        {
          v12 = (uint8_t *)v5[2];
          if ( v12[4] != 0
            && v5[7] == v5[5]
            && v5[8] == v5[6]
            && G4_VCALL<uint8_t>(v12, 8, a2) != 0 )
          {
            break;
          }
          v5 = (uint32_t *)*v5;
          if ( (uint32_t *)((char *)a1 + 96) == v5 )
            return 0;
        }
      }
      else
      {
        while ( 1 )
        {
          v7 = (uint8_t *)v5[2];
          if ( v7[4] != 0 )
          {
            if ( (v8 = v5[7], v9 = v5[5], v10 = v5[8], v11 = v5[6], v8 == v9) && v10 == v11
              || v13 < v10 - v11 + 8 * (v8 - v9) && ((1 << v13) & *(uint32_t *)(v9 + v14)) != 0 )
            {
              if ( G4_VCALL<uint8_t>(v7, 8, a2) != 0 )
                break;
            }
          }
          v5 = (uint32_t *)*v5;
          if ( (uint32_t *)((char *)a1 + 96) == v5 )
            return 0;
        }
      }
      return 1;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::SendEvent  (binary VA: 0xc77370)
// Original: glf::EventManager::SendEvent
// ----------------------------------------------------------------------------
int glf::EventManager::SendEvent(glf::EventManager::Self *a1, uint16_t *a2)
{
  return glf::EventManager::RaiseEvent(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::DispatchEvents  (binary VA: 0xc77ae0)
// Original: glf::EventManager::DispatchEvents
// ----------------------------------------------------------------------------
int glf::EventManager::DispatchEvents(glf::EventManager::Self *self)
{
  glf::Macro::Self **v1;
  glf::Macro::Self *v2;
  char *v3;
  int *v5;
  int v6;
  typedef glf::SpinLock::Self *_g4_t_v7;
  typedef uint16_t _g4_t_v8[78];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v1 = *((glf::Macro::Self ***)self + 30);
  v7 = (glf::SpinLock::Self *)((glf::EventManager::Self *)((char *)self + 104));
  if ( v1 != *((glf::Macro::Self ***)self + 31) )
  {
    do
    {
      v2 = *v1++;
      glf::Macro::UpdateFrame(v2);
    }
    while ( v1 != *((glf::Macro::Self ***)self + 31) );
    v7 = (glf::SpinLock::Self *)((glf::EventManager::Self *)((char *)self + 104));
  }
  while ( 1 )
  {
    glf::SpinLock::Lock(v7);
    v3 = *((char **)self + 4);
    if ( *((char **)self + 8) == v3 )
      break;
    std::memcpy(v8, v3, 128);
    if ( v3 == (char *)(*((uint32_t *)self + 6) - 128) )
    {
      opDelete(*((void **)self + 5));
      v5 = (int *)(*((uint32_t *)self + 7) + 4);
      *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v5);
      v6 = *v5;
      *((uint32_t *)self + 5) = *v5;
      *((uint32_t *)self + 4) = v6;
      *((uint32_t *)self + 6) = v6 + 512;
    }
    else
    {
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v3 + 128);
    }
    glf::SpinLock::Unlock(v7);
    glf::EventManager::RaiseEvent(self, v8);
  }
  return (int)(uintptr_t)(glf::SpinLock::Unlock(v7));
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::RegisterFixedEventType  (binary VA: 0xc77bd0)
// Original: glf::EventManager::RegisterFixedEventType
// ----------------------------------------------------------------------------
int glf::EventManager::RegisterFixedEventType(glf::EventManager::Self *self, int a2, unsigned int a3, const char *a4)
{
  const char *v4;
  int v5;
  typedef int _g4_t_v7;
  typedef char _g4_t_v8[268];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v4 = a4;
  glf::SpinLock::Lock((glf::EventManager::Self *)((char *)self + 104));
  if ( v4 == nullptr )
    v4 = "glf::CoreEvent";
  sub_5F5650((glf::Self *)v8, "%s#%d", v4, a2);
  v7 = g4_compat_map_int_typeinfo_index((char *)self + 72, &a2);
  g4_std_compat::string_assign(v7, v8, strlen(v8));
  v5 = g4_compat_map_int_typeinfo_index((char *)self + 72, &a2);
  *(uint32_t *)(v5 + 8) = a3;
  *(uint32_t *)(g4_compat_map_int_typeinfo_index((char *)self + 72, &a2) + 12) = *((uint32_t *)self + 23) - 1;
  return (int)(uintptr_t)(glf::SpinLock::Unlock((glf::EventManager::Self *)((char *)self + 104)));
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::AddEventReceiver  (binary VA: 0xc77d20)
// Original: glf::EventManager::AddEventReceiver
// ----------------------------------------------------------------------------
int glf::EventManager::AddEventReceiver(glf::EventManager::Self *self, glf::EventReceiver::Self *a2, glf::EventReceiver::Self *a3, std::vector<int> *a4)
{
  glf::EventReceiver::Self *v4;
  glf::EventReceiver::Self **v5;
  glf::EventReceiver::Self **v6;
  int v7;
  int v8;
  glf::EventReceiver::Self **v9;
  glf::EventReceiver::Self *v10;
  glf::EventReceiver::Self *v11;
  int v12;
  int *v13;
  char *v14;
  int v15;
  char *v16;
  int v17;
  int v18;
  int v19;
  void *v20;
  volatile int32_t *v21;
  glf::EventReceiver::Self *v22;
  glf::EventReceiver::Self *v23;
  unsigned int v24;
  int v25;
  int v26;
  glf::EventReceiver::Self *v27;
  int v28;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  char *v35;
  int v36;
  signed int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  char *v44;
  char v45; // si
  int v46;
  char v47;
  int v48;
  char *v49;
  char v50; // si
  int v51;
  char v52;
  int v53;
  unsigned int v54;
  bool v55;
  unsigned int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  uint32_t *v61;
  int v62;
  int v63;
  glf::EventReceiver::Self *v64;
  int v65;
  int v66;
  int v67;
  int v68;
  glf::EventReceiver::Self *v69;
  int v70;
  int v71;
  char *v72;
  char *v73;
  char v74; // si
  int v75;
  char v76;
  char *v77;
  char *v78;
  char *v79;
  int v80;
  int v81;
  int v82;
  int v83;
  typedef int _g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef char *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef char *_g4_t_v91;
  typedef uint32_t *_g4_t_v92;
  typedef char *_g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef glf::EventReceiver::Self *_g4_t_v96;
  typedef glf::EventReceiver::Self **_g4_t_v97;
  typedef size_t _g4_t_v98;
  typedef uint32_t *_g4_t_v99;
  typedef std::list<glf::EventManager::EventReceiverData> *_g4_t_v100;
  typedef unsigned int _g4_t_v101;
  typedef glf::EventReceiver::Self *_g4_t_v102;
  typedef char *_g4_t_v103;
  typedef glf::EventReceiver::Self *_g4_t_v104;
  typedef int _g4_t_v105;
  typedef glf::EventReceiver::Self **_g4_t_v106;
  typedef char *_g4_t_v107;
  typedef glf::EventReceiver::Self **_g4_t_v108;
  typedef char *_g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef char *_g4_t_v112;
  typedef char _g4_t_v113;
  typedef int _g4_t_v114;
  typedef char *_g4_t_v115;
  typedef signed int _g4_t_v116;
  typedef char _g4_t_v117;
  typedef glf::EventReceiver::Self **_g4_t_v118;
  typedef char *_g4_t_v119;
  typedef char _g4_t_v120;
  typedef glf::EventReceiver::Self **_g4_t_v121;
  typedef char _g4_t_v122;
  typedef int _g4_t_v123;
  typedef char *_g4_t_v124;
  typedef char _g4_t_v125;
  typedef volatile int32_t *_g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef void *_g4_t_v135[11];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v84)) > _g4_s0 ? (12u + sizeof(_g4_t_v84)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v85)) > _g4_s1 ? (12u + sizeof(_g4_t_v85)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v86)) > _g4_s2 ? (12u + sizeof(_g4_t_v86)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v87)) > _g4_s3 ? (12u + sizeof(_g4_t_v87)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v88)) > _g4_s4 ? (12u + sizeof(_g4_t_v88)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v89)) > _g4_s5 ? (12u + sizeof(_g4_t_v89)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v90)) > _g4_s6 ? (12u + sizeof(_g4_t_v90)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v91)) > _g4_s7 ? (12u + sizeof(_g4_t_v91)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v92)) > _g4_s8 ? (12u + sizeof(_g4_t_v92)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v93)) > _g4_s9 ? (12u + sizeof(_g4_t_v93)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v94)) > _g4_s10 ? (12u + sizeof(_g4_t_v94)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v95)) > _g4_s11 ? (12u + sizeof(_g4_t_v95)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v96)) > _g4_s12 ? (16u + sizeof(_g4_t_v96)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v97)) > _g4_s13 ? (20u + sizeof(_g4_t_v97)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v98)) > _g4_s14 ? (24u + sizeof(_g4_t_v98)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v99)) > _g4_s15 ? (28u + sizeof(_g4_t_v99)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v100)) > _g4_s16 ? (36u + sizeof(_g4_t_v100)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v101)) > _g4_s17 ? (40u + sizeof(_g4_t_v101)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v102)) > _g4_s18 ? (40u + sizeof(_g4_t_v102)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v103)) > _g4_s19 ? (44u + sizeof(_g4_t_v103)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v104)) > _g4_s20 ? (44u + sizeof(_g4_t_v104)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v105)) > _g4_s21 ? (48u + sizeof(_g4_t_v105)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v106)) > _g4_s22 ? (48u + sizeof(_g4_t_v106)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v107)) > _g4_s23 ? (48u + sizeof(_g4_t_v107)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v108)) > _g4_s24 ? (48u + sizeof(_g4_t_v108)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v109)) > _g4_s25 ? (52u + sizeof(_g4_t_v109)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v110)) > _g4_s26 ? (56u + sizeof(_g4_t_v110)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v111)) > _g4_s27 ? (56u + sizeof(_g4_t_v111)) : _g4_s27,
    _g4_s29 = (60u + sizeof(_g4_t_v112)) > _g4_s28 ? (60u + sizeof(_g4_t_v112)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v113)) > _g4_s29 ? (60u + sizeof(_g4_t_v113)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v114)) > _g4_s30 ? (64u + sizeof(_g4_t_v114)) : _g4_s30,
    _g4_s32 = (68u + sizeof(_g4_t_v115)) > _g4_s31 ? (68u + sizeof(_g4_t_v115)) : _g4_s31,
    _g4_s33 = (68u + sizeof(_g4_t_v116)) > _g4_s32 ? (68u + sizeof(_g4_t_v116)) : _g4_s32,
    _g4_s34 = (68u + sizeof(_g4_t_v117)) > _g4_s33 ? (68u + sizeof(_g4_t_v117)) : _g4_s33,
    _g4_s35 = (68u + sizeof(_g4_t_v118)) > _g4_s34 ? (68u + sizeof(_g4_t_v118)) : _g4_s34,
    _g4_s36 = (68u + sizeof(_g4_t_v119)) > _g4_s35 ? (68u + sizeof(_g4_t_v119)) : _g4_s35,
    _g4_s37 = (68u + sizeof(_g4_t_v120)) > _g4_s36 ? (68u + sizeof(_g4_t_v120)) : _g4_s36,
    _g4_s38 = (68u + sizeof(_g4_t_v121)) > _g4_s37 ? (68u + sizeof(_g4_t_v121)) : _g4_s37,
    _g4_s39 = (68u + sizeof(_g4_t_v122)) > _g4_s38 ? (68u + sizeof(_g4_t_v122)) : _g4_s38,
    _g4_s40 = (72u + sizeof(_g4_t_v123)) > _g4_s39 ? (72u + sizeof(_g4_t_v123)) : _g4_s39,
    _g4_s41 = (76u + sizeof(_g4_t_v124)) > _g4_s40 ? (76u + sizeof(_g4_t_v124)) : _g4_s40,
    _g4_s42 = (95u + sizeof(_g4_t_v125)) > _g4_s41 ? (95u + sizeof(_g4_t_v125)) : _g4_s41,
    _g4_s43 = (96u + sizeof(_g4_t_v126)) > _g4_s42 ? (96u + sizeof(_g4_t_v126)) : _g4_s42,
    _g4_s44 = (100u + sizeof(_g4_t_v127)) > _g4_s43 ? (100u + sizeof(_g4_t_v127)) : _g4_s43,
    _g4_s45 = (104u + sizeof(_g4_t_v128)) > _g4_s44 ? (104u + sizeof(_g4_t_v128)) : _g4_s44,
    _g4_s46 = (108u + sizeof(_g4_t_v129)) > _g4_s45 ? (108u + sizeof(_g4_t_v129)) : _g4_s45,
    _g4_s47 = (112u + sizeof(_g4_t_v130)) > _g4_s46 ? (112u + sizeof(_g4_t_v130)) : _g4_s46,
    _g4_s48 = (116u + sizeof(_g4_t_v131)) > _g4_s47 ? (116u + sizeof(_g4_t_v131)) : _g4_s47,
    _g4_s49 = (120u + sizeof(_g4_t_v132)) > _g4_s48 ? (120u + sizeof(_g4_t_v132)) : _g4_s48,
    _g4_s50 = (124u + sizeof(_g4_t_v133)) > _g4_s49 ? (124u + sizeof(_g4_t_v133)) : _g4_s49,
    _g4_s51 = (128u + sizeof(_g4_t_v134)) > _g4_s50 ? (128u + sizeof(_g4_t_v134)) : _g4_s50,
    _g4_s52 = (144u + sizeof(_g4_t_v135)) > _g4_s51 ? (144u + sizeof(_g4_t_v135)) : _g4_s51
  };
  alignas(16) uint8_t _g4_sf[_g4_s52];
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 12u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 12u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 12u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 12u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 12u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 12u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 12u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 12u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 12u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 12u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 12u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 12u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 16u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 20u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 24u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 28u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 36u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 40u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 40u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 44u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 44u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 48u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 48u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 48u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 48u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 52u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 56u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 56u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 60u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 60u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 64u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 68u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 68u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 68u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 68u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 68u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 68u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 68u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 68u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 72u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 76u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 95u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 96u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 100u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 104u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 108u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 112u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 116u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 120u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 124u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 128u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 144u);

  glf::SpinLock::Lock((glf::EventManager::Self *)((char *)self + 104));
  v4 = a2;
  v5 = *((glf::EventReceiver::Self ***)self + 24);
  v100 = (std::list<glf::EventManager::EventReceiverData> *)((glf::EventManager::Self *)((char *)self + 96));
  if ( v5 != (glf::EventReceiver::Self **)((char *)self + 96) )
  {
    v6 = *((glf::EventReceiver::Self ***)self + 24);
    if ( v5[2] == a2 )
    {
LABEL_13:
      v9 = v6 + 2;
      goto LABEL_14;
    }
    while ( 1 )
    {
      v6 = (glf::EventReceiver::Self **)*v6;
      if ( (glf::EventReceiver::Self **)((char *)self + 96) == v6 )
        break;
      if ( v6[2] == a2 )
        goto LABEL_13;
    }
  }
  v7 = 1;
  memset(v135, 0, 0x20u);
  if ( v5 != (glf::EventReceiver::Self **)v100 )
  {
    LOBYTE(v7) = 0;
    do
    {
      v5 = (glf::EventReceiver::Self **)*v5;
      ++v7;
    }
    while ( v100 != (std::list<glf::EventManager::EventReceiverData> *)v5 );
    ++v7;
  }
  g4_std_compat::list_resize(v100, v7, v135);
  v4 = a2;
  if ( v135[3] != nullptr )
  {
    opDelete(v135[3]);
    v4 = a2;
  }
  v8 = *((uint32_t *)self + 25);
  ++*((uint32_t *)self + 27);
  v9 = (glf::EventReceiver::Self **)(v8 + 8);
LABEL_14:
  *v9 = v4;
  v10 = *((glf::EventReceiver::Self **)self + 28);
  v9[2] = v10;
  *((uint32_t *)self + 28) = (uint32_t)(uintptr_t)((char *)v10 + 1);
  v9[1] = a3;
  v11 = v9[4];
  v9[5] = v9[3];
  v9[6] = v11;
  v12 = *(uint32_t *)a4;
  if ( *((uint32_t *)a4 + 1) - *(uint32_t *)a4 > 3 )
  {
    v114 = 0;
    v109 = (char *)self + 76;
    do
    {
      v13 = (int *)(v12 + 4 * v114);
      v14 = *((char **)self + 20);
      if ( v14 != nullptr )
      {
        v15 = *v13;
        v16 = (char *)self + 76;
        do
        {
          while ( v15 <= *((uint32_t *)v14 + 4) )
          {
            v16 = v14;
            v14 = *((char **)v14 + 2);
            if ( v14 == nullptr )
              goto LABEL_21;
          }
          v14 = *((char **)v14 + 3);
        }
        while ( v14 != nullptr );
LABEL_21:
        if ( v16 != v109 && v15 >= *((uint32_t *)v16 + 4) )
          goto LABEL_33;
      }
      else
      {
        v16 = (char *)self + 76;
      }
      v127 = 0;
      v128 = 0;
      v126 = (volatile int32_t *)&dword_213B814;
      v130 = *v13;
      g4_std::string::construct_copy(&v131, &v126);
      v132 = v127;
      v133 = v128;
      v134 = v129;
      if ( v109 == v16 )
      {
        if ( *((uint32_t *)self + 23) != 0 )
        {
          v40 = *((uint32_t *)self + 22);
          if ( *(uint32_t *)(v40 + 16) < v130 )
          {
            v89 = *((uint32_t *)self + 22);
            v117 = v109 == (char *)v40;
            v41 = opNew(0x24u);
            v16 = (char *)v41;
            v42 = v89;
            if ( v41 != -16 )
            {
              *(uint32_t *)(v41 + 16) = v130;
              g4_std::string::construct_copy(v41 + 20, &v131);
              *((uint32_t *)v16 + 6) = v132;
              *((uint32_t *)v16 + 7) = v133;
              *((uint32_t *)v16 + 8) = v134;
              v42 = v89;
            }
            sub_1904970(v117, v16, v42, v109);
            ++*((uint32_t *)self + 23);
            goto LABEL_31;
          }
        }
        v16 = *((char **)self + 20);
        if ( v16 != nullptr )
        {
          v43 = v130;
          v118 = v9;
          while ( 1 )
          {
            v46 = *((uint32_t *)v16 + 4);
            if ( v46 > v130 )
            {
              v44 = *((char **)v16 + 2);
              v45 = 1;
              if ( v44 == nullptr )
                goto LABEL_68;
            }
            else
            {
              v44 = *((char **)v16 + 3);
              v45 = 0;
              if ( v44 == nullptr )
              {
LABEL_68:
                v47 = v45;
                v9 = v118;
                v119 = v16;
                if ( v47 == 0 )
                {
LABEL_69:
                  if ( v46 >= v43 )
                    goto LABEL_31;
                  v113 = 1;
                  if ( v109 != v119 )
                    v113 = *((uint32_t *)v119 + 4) > v43;
                  goto LABEL_72;
                }
LABEL_141:
                if ( *((char **)self + 21) == v16 )
                  goto LABEL_160;
                v78 = (char *)sub_19048F0(v16);
                v46 = *((uint32_t *)v78 + 4);
                v119 = v16;
                v43 = v130;
                v16 = v78;
                goto LABEL_69;
              }
            }
            v16 = v44;
          }
        }
        v16 = (char *)self + 76;
        goto LABEL_141;
      }
      if ( v130 < *((uint32_t *)v16 + 4) )
      {
        v115 = *((char **)self + 21);
        if ( v115 == v16 )
        {
          v81 = opNew(0x24u);
          v16 = (char *)v81;
          if ( v81 != -16 )
          {
            *(uint32_t *)(v81 + 16) = v130;
            g4_std::string::construct_copy(v81 + 20, &v131);
            *((uint32_t *)v16 + 6) = v132;
            *((uint32_t *)v16 + 7) = v133;
            *((uint32_t *)v16 + 8) = v134;
          }
          sub_1904970(1, v16, v115, v109);
          ++*((uint32_t *)self + 23);
          goto LABEL_31;
        }
        v84 = v130;
        v17 = sub_1904940(v16);
        v18 = v84;
        if ( v84 > *(uint32_t *)(v17 + 16) )
        {
          if ( *(uint32_t *)(v17 + 12) != 0 )
          {
            v19 = opNew(0x24u);
            if ( v19 != -16 )
            {
              *(uint32_t *)(v19 + 16) = v130;
              v85 = (uint32_t *)v19;
              g4_std::string::construct_copy(v19 + 20, &v131);
              v19 = (int)(uintptr_t)(v85);
              v85[6] = v132;
              v85[7] = v133;
              v85[8] = v134;
            }
            v86 = (char *)v19;
            sub_1904970(1, v19, v16, v109);
            ++*((uint32_t *)self + 23);
            v16 = v86;
          }
          else
          {
            v91 = (char *)v17;
            v71 = opNew(0x24u);
            v16 = (char *)v71;
            v72 = v91;
            if ( v71 != -16 )
            {
              *(uint32_t *)(v71 + 16) = v130;
              g4_std::string::construct_copy(v71 + 20, &v131);
              *((uint32_t *)v16 + 6) = v132;
              *((uint32_t *)v16 + 7) = v133;
              *((uint32_t *)v16 + 8) = v134;
              v72 = v91;
            }
            sub_1904970(v109 == v72, v16, v72, v109);
            ++*((uint32_t *)self + 23);
          }
          goto LABEL_31;
        }
        v16 = *((char **)self + 20);
        if ( v16 == nullptr )
        {
          v16 = (char *)self + 76;
          goto LABEL_138;
        }
        v106 = v9;
        while ( 1 )
        {
          v51 = *((uint32_t *)v16 + 4);
          if ( v84 < v51 )
          {
            v49 = *((char **)v16 + 2);
            v50 = 1;
            if ( v49 == nullptr )
              goto LABEL_81;
          }
          else
          {
            v49 = *((char **)v16 + 3);
            v50 = 0;
            if ( v49 == nullptr )
            {
LABEL_81:
              v52 = v50;
              v9 = v106;
              v107 = v16;
              if ( v52 == 0 )
                goto LABEL_82;
LABEL_138:
              if ( v115 != v16 )
              {
                v77 = (char *)sub_19048F0(v16);
                v51 = *((uint32_t *)v77 + 4);
                v107 = v16;
                v18 = v84;
                v16 = v77;
LABEL_82:
                if ( v51 < v18 )
                {
                  v120 = 1;
                  if ( v109 != v107 )
                    v120 = v18 < *((uint32_t *)v107 + 4);
                  v53 = opNew(0x24u);
                  v16 = (char *)v53;
                  if ( v53 != -16 )
                  {
                    *(uint32_t *)(v53 + 16) = v130;
                    g4_std::string::construct_copy(v53 + 20, &v131);
                    *((uint32_t *)v16 + 6) = v132;
                    *((uint32_t *)v16 + 7) = v133;
                    *((uint32_t *)v16 + 8) = v134;
                  }
                  sub_1904970(v120, v16, v107, v109);
                  goto LABEL_159;
                }
                goto LABEL_31;
              }
LABEL_160:
              sub_C72F10(0, v16, &v130);
              v16 = v124;
              goto LABEL_31;
            }
          }
          v16 = v49;
        }
      }
      if ( v130 <= *((uint32_t *)v16 + 4) )
        goto LABEL_31;
      if ( *((char **)self + 22) != v16 )
      {
        v87 = v130;
        v30 = sub_19048E0(v16);
        v31 = v87;
        if ( v87 < *(uint32_t *)(v30 + 16) )
        {
          if ( *((uint32_t *)v16 + 3) != 0 )
          {
            v88 = v30;
            v32 = opNew(0x24u);
            v16 = (char *)v32;
            v33 = v88;
            if ( v32 != -16 )
            {
              *(uint32_t *)(v32 + 16) = v130;
              g4_std::string::construct_copy(v32 + 20, &v131);
              *((uint32_t *)v16 + 6) = v132;
              *((uint32_t *)v16 + 7) = v133;
              *((uint32_t *)v16 + 8) = v134;
              v33 = v88;
            }
            sub_1904970(1, v16, v33, v109);
            ++*((uint32_t *)self + 23);
          }
          else
          {
            v80 = opNew(0x24u);
            if ( v80 != -16 )
            {
              *(uint32_t *)(v80 + 16) = v130;
              v92 = (uint32_t *)v80;
              g4_std::string::construct_copy(v80 + 20, &v131);
              v80 = (int)(uintptr_t)(v92);
              v92[6] = v132;
              v92[7] = v133;
              v92[8] = v134;
            }
            v93 = (char *)v80;
            sub_1904970(0, v80, v16, v109);
            ++*((uint32_t *)self + 23);
            v16 = v93;
          }
          goto LABEL_31;
        }
        v16 = *((char **)self + 20);
        if ( v16 == nullptr )
        {
          v16 = (char *)self + 76;
          goto LABEL_144;
        }
        v121 = v9;
        while ( 1 )
        {
          v75 = *((uint32_t *)v16 + 4);
          if ( v87 < v75 )
          {
            v73 = *((char **)v16 + 2);
            v74 = 1;
            if ( v73 == nullptr )
              goto LABEL_133;
          }
          else
          {
            v73 = *((char **)v16 + 3);
            v74 = 0;
            if ( v73 == nullptr )
            {
LABEL_133:
              v76 = v74;
              v9 = v121;
              v119 = v16;
              if ( v76 == 0 )
              {
                if ( v87 <= v75 )
                  goto LABEL_31;
                goto LABEL_135;
              }
LABEL_144:
              if ( *((char **)self + 21) == v16 )
                goto LABEL_160;
              v79 = (char *)sub_19048F0(v16);
              v31 = v87;
              v119 = v16;
              v16 = v79;
              if ( v87 <= *((uint32_t *)v79 + 4) )
                goto LABEL_31;
LABEL_135:
              v113 = 1;
              if ( v109 != v119 )
                v113 = v31 < *((uint32_t *)v119 + 4);
LABEL_72:
              v48 = opNew(0x24u);
              v16 = (char *)v48;
              if ( v48 != -16 )
              {
                *(uint32_t *)(v48 + 16) = v130;
                g4_std::string::construct_copy(v48 + 20, &v131);
                *((uint32_t *)v16 + 6) = v132;
                *((uint32_t *)v16 + 7) = v133;
                *((uint32_t *)v16 + 8) = v134;
              }
              sub_1904970(v113, v16, v119, v109);
              ++*((uint32_t *)self + 23);
              goto LABEL_31;
            }
          }
          v16 = v73;
        }
      }
      v122 = 1;
      if ( v109 != v16 )
        v122 = v130 < *((uint32_t *)v16 + 4);
      v95 = *((uint32_t *)self + 22);
      v82 = opNew(0x24u);
      v16 = (char *)v82;
      v83 = v95;
      if ( v82 != -16 )
      {
        *(uint32_t *)(v82 + 16) = v130;
        g4_std::string::construct_copy(v82 + 20, &v131);
        *((uint32_t *)v16 + 6) = v132;
        *((uint32_t *)v16 + 7) = v133;
        *((uint32_t *)v16 + 8) = v134;
        v83 = v95;
      }
      sub_1904970(v122, v16, v83, v109);
LABEL_159:
      ++*((uint32_t *)self + 23);
LABEL_31:
      v20 = (void *)(v131 - 12);
      if ( (uint32_t *)(v131 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v131 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v20);
      }
      v21 = v126 - 3;
      if ( v126 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v126 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)v21);
LABEL_33:
      v105 = (int)(uintptr_t)(v9[6]);
      v116 = *((uint32_t *)v16 + 8);
      v112 = (char *)v9[5];
      v22 = v9[4];
      v23 = v9[3];
      v24 = v105 - (uint32_t)(uintptr_t)(v22) + 8 * (v112 - (char *)v23);
      if ( v116 >= (int)v24 )
      {
        v25 = v116 + 1;
        if ( v116 + 1 < v24 )
        {
          v26 = (int)(uintptr_t)(v22) + v25;
          v27 = (glf::EventReceiver::Self *)((char *)v23 + 4 * (v26 / 32));
          v28 = v26 % 32;
          if ( v28 < 0 )
          {
            v28 += 32;
            v27 = (glf::EventReceiver::Self *)((char *)v27 - 4);
          }
          v9[5] = v27;
          v9[6] = (glf::EventReceiver::Self *)v28;
          goto LABEL_38;
        }
        v125 = 0;
        v101 = v25 - v24;
        if ( v25 != v24 )
        {
          if ( v101 <= 8 * (v9[7] - v23) - (v105 + 8 * (v112 - (char *)v23)) )
          {
            v34 = v105 + v101 + 31;
            if ( (int)(v105 + v101) >= 0 )
              v34 = v105 + v101;
            v35 = &v112[4 * (v34 >> 5)];
            v36 = (int)(v105 + v101) % 32;
            if ( v36 < 0 )
            {
              v36 += 32;
              v35 -= 4;
            }
            g4_std::fill(v112, v105, v35, v36, &v125);
            v37 = (signed int)(uintptr_t)(v9[6]) + v101;
            v38 = (int)(uintptr_t)(v9[5]) + 4 * (v37 / 32);
            v9[5] = (glf::EventReceiver::Self *)v38;
            v39 = v37 % 32;
            if ( v39 < 0 )
            {
              v39 += 32;
              v9[5] = (glf::EventReceiver::Self *)(v38 - 4);
            }
            v9[6] = (glf::EventReceiver::Self *)v39;
            v23 = v9[3];
            goto LABEL_38;
          }
          if ( v101 > 2147483616 - v24 )
            sub_1900180("vector<bool>::_M_fill_insert");
          v54 = v25 - v24;
          if ( v101 < v24 )
            v54 = v24;
          v98 = 268435452;
          v55 = __CFADD__(v24, v54);
          v56 = v24 + v54;
          if ( !v55 )
          {
            if ( v56 > 0x7FFFFFE0 )
              v56 = 2147483616;
            v98 = 4 * ((v56 + 31) >> 5);
          }
          v23 = (glf::EventReceiver::Self *)opNew(v98);
          v57 = 0;
          v58 = (v112 - (char *)v9[3]) >> 2;
          if ( v58 != 0 )
          {
            v94 = 4 * v58;
            memmove(v23, v9[3], 4 * v58);
            v57 = v94;
          }
          v123 = 0;
          v99 = (uint32_t *)((char *)v23 + v57);
          v110 = v105;
          if ( v105 > 0 )
          {
            v97 = v9;
            v103 = v112;
            v96 = v23;
            v59 = 0;
            v60 = 0;
            v61 = v99;
            while ( 1 )
            {
              while ( 1 )
              {
                v62 = 1 << v60;
                if ( ((1 << v59) & *(uint32_t *)v103) != 0 )
                  break;
                *v61 &= ~v62;
                if ( v59 == 31 )
                  goto LABEL_104;
LABEL_100:
                ++v59;
                if ( v60 != 31 )
                  goto LABEL_101;
LABEL_105:
                ++v61;
                v60 = 0;
                if ( --v110 == 0 )
                {
LABEL_106:
                  v99 = v61;
                  v23 = v96;
                  v123 = v60;
                  v9 = v97;
                  goto LABEL_107;
                }
              }
              *v61 |= v62;
              if ( v59 != 31 )
                goto LABEL_100;
LABEL_104:
              v103 += 4;
              v59 = 0;
              if ( v60 == 31 )
                goto LABEL_105;
LABEL_101:
              ++v60;
              if ( --v110 == 0 )
                goto LABEL_106;
            }
          }
LABEL_107:
          v63 = v101 + v123 + 31;
          if ( (int)(v101 + v123) >= 0 )
            v63 = v101 + v123;
          v64 = (glf::EventReceiver::Self *)&v99[v63 >> 5];
          v104 = v64;
          v65 = (int)(v101 + v123) % 32;
          if ( v65 < 0 )
          {
            v104 = (glf::EventReceiver::Self *)((char *)v64 - 4);
            v90 = v65 + 32;
            g4_std::fill(v99, v123, (char *)v64 - 4, v65 + 32, &v125);
          }
          else
          {
            v90 = (int)(v101 + v123) % 32;
            g4_std::fill(v99, v123, v64, v65, &v125);
          }
          v66 = v90;
          v111 = (int)(uintptr_t)(v9[6]) + 8 * (v9[5] - (glf::EventReceiver::Self *)v112) - v105;
          if ( v111 <= 0 )
          {
LABEL_121:
            v9[6] = (glf::EventReceiver::Self *)v66;
            v9[5] = v104;
            if ( v9[3] != nullptr )
              opDelete(v9[3]);
            v9[3] = v23;
            v9[4] = nullptr;
            v9[7] = (glf::EventReceiver::Self *)((char *)v23 + v98);
            goto LABEL_38;
          }
          v67 = v105;
          v102 = v23;
          v108 = v9;
          v68 = v90;
          v69 = v104;
          while ( 2 )
          {
            while ( 2 )
            {
              v70 = 1 << v68;
              if ( ((1 << v67) & *(uint32_t *)v112) != 0 )
              {
                *(uint32_t *)v69 |= v70;
                if ( v67 == 31 )
                  goto LABEL_118;
LABEL_114:
                ++v67;
                if ( v68 != 31 )
                  goto LABEL_115;
              }
              else
              {
                *(uint32_t *)v69 &= ~v70;
                if ( v67 != 31 )
                  goto LABEL_114;
LABEL_118:
                v112 += 4;
                v67 = 0;
                if ( v68 != 31 )
                {
LABEL_115:
                  ++v68;
                  if ( --v111 == 0 )
                    goto LABEL_120;
                  continue;
                }
              }
              break;
            }
            v69 = (glf::EventReceiver::Self *)((char *)v69 + 4);
            v68 = 0;
            if ( --v111 == 0 )
            {
LABEL_120:
              v104 = v69;
              v23 = v102;
              v9 = v108;
              v66 = v68;
              goto LABEL_121;
            }
            continue;
          }
        }
      }
LABEL_38:
      ++v114;
      *((uint32_t *)v23 + ((unsigned int)v116 >> 5)) |= 1 << v116;
      v12 = *(uint32_t *)a4;
    }
    while ( v114 < (*((uint32_t *)a4 + 1) - *(uint32_t *)a4) >> 2 );
  }
  g4_std_compat::list_sort_any(v100);
  return (int)(uintptr_t)(glf::SpinLock::Unlock((glf::EventManager::Self *)((char *)self + 104)));
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::AddEventReceiver  (binary VA: 0xc78b50)
// Original: glf::EventManager::AddEventReceiver
// ----------------------------------------------------------------------------
void glf::EventManager::AddEventReceiver(glf::EventManager::Self *self, glf::EventReceiver::Self *a2, glf::EventReceiver::Self *a3)
{
  void *v3[6];

  memset(v3, 0, 12);
  glf::EventManager::AddEventReceiver(self, a2, a3, (std::vector<int> *)v3);
  if ( v3[0] != nullptr )
    opDelete(v3[0]);
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::Construct  (binary VA: 0xc793c0)
// Original: glf::EventManager::EventManager
// ----------------------------------------------------------------------------
void glf::EventManager::Construct(glf::EventManager::Self *self)
{
  glf::EventManager::Self *v1;
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  int v36;
  unsigned int v37;
  int v38;
  char *v39;
  typedef uint32_t *_g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int *_g4_t_v43;
  typedef size_t _g4_t_v44;
  typedef void **_g4_t_v45;
  typedef const void *_g4_t_v46;
  typedef int _g4_t_v47[4];
  typedef int _g4_t_v48[4];
  typedef int _g4_t_v49[4];
  typedef int _g4_t_v50[4];
  typedef int _g4_t_v51[4];
  typedef int _g4_t_v52[4];
  typedef int _g4_t_v53[4];
  typedef int _g4_t_v54[4];
  typedef int _g4_t_v55[4];
  typedef int _g4_t_v56[4];
  typedef int _g4_t_v57[4];
  typedef int _g4_t_v58[4];
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef uint32_t *_g4_t_v64;
  typedef void *_g4_t_v65;
  typedef char *_g4_t_v66;
  typedef char *_g4_t_v67;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v40)) > _g4_s0 ? (4u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v41)) > _g4_s1 ? (4u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v42)) > _g4_s2 ? (20u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v43)) > _g4_s3 ? (24u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v44)) > _g4_s4 ? (24u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v45)) > _g4_s5 ? (28u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v46)) > _g4_s6 ? (28u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v47)) > _g4_s7 ? (32u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v48)) > _g4_s8 ? (48u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v49)) > _g4_s9 ? (64u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v50)) > _g4_s10 ? (80u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v51)) > _g4_s11 ? (96u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v52)) > _g4_s12 ? (112u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v53)) > _g4_s13 ? (128u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (144u + sizeof(_g4_t_v54)) > _g4_s14 ? (144u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (160u + sizeof(_g4_t_v55)) > _g4_s15 ? (160u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (176u + sizeof(_g4_t_v56)) > _g4_s16 ? (176u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (192u + sizeof(_g4_t_v57)) > _g4_s17 ? (192u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (208u + sizeof(_g4_t_v58)) > _g4_s18 ? (208u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (224u + sizeof(_g4_t_v59)) > _g4_s19 ? (224u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (232u + sizeof(_g4_t_v60)) > _g4_s20 ? (232u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (236u + sizeof(_g4_t_v61)) > _g4_s21 ? (236u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v62)) > _g4_s22 ? (240u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (244u + sizeof(_g4_t_v63)) > _g4_s23 ? (244u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (248u + sizeof(_g4_t_v64)) > _g4_s24 ? (248u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (256u + sizeof(_g4_t_v65)) > _g4_s25 ? (256u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (260u + sizeof(_g4_t_v66)) > _g4_s26 ? (260u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (264u + sizeof(_g4_t_v67)) > _g4_s27 ? (264u + sizeof(_g4_t_v67)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 80u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 96u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 112u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 128u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 144u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 160u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 176u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 192u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 208u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 224u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 232u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 236u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 240u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 244u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 248u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 256u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 260u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 264u);

  v1 = self;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D5C8);
  v45 = (void **)opNew(0x20u);
  if ( v45 + 3 < v45 + 4 )
    v45[3] = (void *)opNew(0x200u);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 3) = 8;
  v2 = opNew(0x20u);
  v3 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 2) = v2;
  v43 = (int *)(v2 + ((2 * v3 - 2) & 0xFFFFFFFC));
  if ( v43 < v43 + 1 )
  {
    v4 = (int *)(v2 + ((2 * v3 - 2) & 0xFFFFFFFC));
    do
      *v4++ = opNew(0x200u);
    while ( v43 + 1 > v4 );
    v1 = self;
  }
  *((uint32_t *)v1 + 7) = (uint32_t)(uintptr_t)(v43);
  v5 = *v43;
  *((uint32_t *)v1 + 5) = *v43;
  *((uint32_t *)v1 + 6) = v5 + 512;
  *((uint32_t *)v1 + 11) = (uint32_t)(uintptr_t)(v43);
  v6 = *v43;
  *((uint32_t *)v1 + 9) = *v43;
  *((uint32_t *)v1 + 8) = v6;
  *((uint32_t *)v1 + 4) = v5;
  *((uint32_t *)v1 + 10) = v6 + 512;
  if ( v45 != nullptr )
  {
    if ( v45 + 3 < v45 + 4 )
      opDelete(v45[3]);
    opDelete(v45);
  }
  *((uint32_t *)v1 + 13) = 0;
  *((uint32_t *)v1 + 15) = (uint32_t)(uintptr_t)((char *)v1 + 52);
  *((uint32_t *)v1 + 16) = (uint32_t)(uintptr_t)((char *)v1 + 52);
  *((uint32_t *)v1 + 14) = 0;
  *((uint32_t *)v1 + 17) = 0;
  *((uint32_t *)v1 + 21) = (uint32_t)(uintptr_t)((char *)v1 + 76);
  *((uint32_t *)v1 + 22) = (uint32_t)(uintptr_t)((char *)v1 + 76);
  *((uint32_t *)v1 + 19) = 0;
  *((uint32_t *)v1 + 20) = 0;
  *((uint32_t *)v1 + 24) = (uint32_t)(uintptr_t)((char *)v1 + 96);
  *((uint32_t *)v1 + 25) = (uint32_t)(uintptr_t)((char *)v1 + 96);
  *((uint32_t *)v1 + 23) = 0;
  glf::SpinLock::Construct((glf::EventManager::Self *)((char *)v1 + 104));
  *((uint32_t *)v1 + 27) = 0;
  *((uint32_t *)v1 + 28) = 0;
  *((uint32_t *)v1 + 29) = 1000;
  *((uint32_t *)v1 + 30) = 0;
  *((uint32_t *)v1 + 31) = 0;
  *((uint32_t *)v1 + 32) = 0;
  glf::EventManager::RegisterFixedEventType(v1, 100, 8u, "glf::AET_ORIENTATION");
  glf::EventManager::RegisterFixedEventType(v1, 101, 8u, "glf::AET_SYSTEM");
  glf::EventManager::RegisterFixedEventType(v1, 102, 0x48u, "glf::AET_DISPLAY");
  glf::EventManager::RegisterFixedEventType(v1, 300, 0x7Cu, "glf::NOTIFICATION");
  glf::EventManager::RegisterFixedEventType(v1, 200, 0x1Cu, "glf::IET_MOUSE_BTN_DOWN");
  glf::EventManager::RegisterFixedEventType(v1, 201, 0x1Cu, "glf::IET_MOUSE_BTN_UP");
  glf::EventManager::RegisterFixedEventType(v1, 202, 0x1Cu, "glf::IET_MOUSE_MOVED");
  glf::EventManager::RegisterFixedEventType(v1, 203, 0x1Cu, "glf::IET_MOUSE_WHEEL");
  glf::EventManager::RegisterFixedEventType(v1, 204, 0x20u, "glf::IET_KEY_PRESSED");
  glf::EventManager::RegisterFixedEventType(v1, 205, 0x20u, "glf::IET_KEY_RELEASED");
  glf::EventManager::RegisterFixedEventType(v1, 206, 0x18u, "glf::IET_GAMEPAD_CONNECTION");
  glf::EventManager::RegisterFixedEventType(v1, 207, 0x14u, "glf::IET_GAMEPAD_PAUSE_PRESSED");
  glf::EventManager::RegisterFixedEventType(v1, 208, 0x14u, "glf::IET_GAMEPAD_BUTTON_PRESSED");
  glf::EventManager::RegisterFixedEventType(v1, 209, 0x14u, "glf::IET_GAMEPAD_BUTTON_RELEASED");
  glf::EventManager::RegisterFixedEventType(v1, 210, 0x18u, "glf::IET_GAMEPAD_CURSOR_IN");
  glf::EventManager::RegisterFixedEventType(v1, 211, 0x18u, "glf::IET_GAMEPAD_CURSOR_MOVED");
  glf::EventManager::RegisterFixedEventType(v1, 212, 0x18u, "glf::IET_GAMEPAD_CURSOR_OUT");
  glf::EventManager::RegisterFixedEventType(v1, 213, 0x20u, "glf::IET_GAMEPAD_SENSOR_STICK_CHANGED");
  glf::EventManager::RegisterFixedEventType(v1, 214, 0x20u, "glf::IET_GAMEPAD_SENSOR_ACCELEROMETER_CHANGED");
  glf::EventManager::RegisterFixedEventType(v1, 215, 0x20u, "glf::IET_GAMEPAD_SENSOR_GYROSCOPE_CHANGED");
  glf::EventManager::RegisterFixedEventType(v1, 216, 0x20u, "glf::IET_TOUCHPAD_BEGAN");
  glf::EventManager::RegisterFixedEventType(v1, 217, 0x20u, "glf::IET_TOUCHPAD_MOVED");
  glf::EventManager::RegisterFixedEventType(v1, 218, 0x20u, "glf::IET_TOUCHPAD_ENDED");
  glf::EventManager::RegisterFixedEventType(v1, 219, 4u, "glf::IET_HIDE_KEYBOARD");
  v62 = 0;
  v63 = nullptr;
  v64 = nullptr;
  v60 = 100;
  g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), nullptr, (int)(uintptr_t)(&v60));
  v7 = v64;
  v61 = 101;
  if ( v63 == v64 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), v64, (int)(uintptr_t)(&v61));
    v9 = v63;
    v7 = v64;
  }
  else
  {
    v8 = nullptr;
    if ( v63 != nullptr )
    {
      *v63 = 101;
      v8 = v63;
      v7 = v64;
    }
    v9 = v8 + 1;
    v63 = v9;
  }
  v47[0] = 200;
  if ( v9 == v7 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), v7, (int)(uintptr_t)(v47));
    v11 = v63;
    v7 = v64;
  }
  else
  {
    v10 = nullptr;
    if ( v9 != nullptr )
    {
      *v9 = 200;
      v10 = v63;
      v7 = v64;
    }
    v11 = v10 + 1;
    v63 = v11;
  }
  v48[0] = 201;
  if ( v11 == v7 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), v7, (int)(uintptr_t)(v48));
    v13 = v63;
    v7 = v64;
  }
  else
  {
    v12 = nullptr;
    if ( v11 != nullptr )
    {
      *v11 = 201;
      v12 = v63;
      v7 = v64;
    }
    v13 = v12 + 1;
    v63 = v13;
  }
  v49[0] = 202;
  if ( v7 == v13 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), v7, (int)(uintptr_t)(v49));
    v15 = v63;
    v7 = v64;
  }
  else
  {
    v14 = nullptr;
    if ( v13 != nullptr )
    {
      *v13 = 202;
      v14 = v63;
      v7 = v64;
    }
    v15 = v14 + 1;
    v63 = v15;
  }
  v50[0] = 203;
  if ( v7 == v15 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), v7, (int)(uintptr_t)(v50));
    v17 = v63;
    v7 = v64;
  }
  else
  {
    v16 = nullptr;
    if ( v15 != nullptr )
    {
      *v15 = 203;
      v16 = v63;
      v7 = v64;
    }
    v17 = v16 + 1;
    v63 = v17;
  }
  v51[0] = 204;
  if ( v7 == v17 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), v7, (int)(uintptr_t)(v51));
    v19 = v63;
    v7 = v64;
  }
  else
  {
    v18 = nullptr;
    if ( v17 != nullptr )
    {
      *v17 = 204;
      v18 = v63;
      v7 = v64;
    }
    v19 = v18 + 1;
    v63 = v19;
  }
  v52[0] = 205;
  if ( v7 == v19 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), v7, (int)(uintptr_t)(v52));
    v21 = v63;
    v7 = v64;
  }
  else
  {
    v20 = nullptr;
    if ( v19 != nullptr )
    {
      *v19 = 205;
      v20 = v63;
      v7 = v64;
    }
    v21 = v20 + 1;
    v63 = v21;
  }
  v53[0] = 216;
  if ( v7 == v21 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), v7, (int)(uintptr_t)(v53));
    v23 = v63;
    v7 = v64;
  }
  else
  {
    v22 = nullptr;
    if ( v21 != nullptr )
    {
      *v21 = 216;
      v22 = v63;
      v7 = v64;
    }
    v23 = v22 + 1;
    v63 = v23;
  }
  v54[0] = 217;
  if ( v7 == v23 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), v7, (int)(uintptr_t)(v54));
    v25 = v63;
    v7 = v64;
  }
  else
  {
    v24 = nullptr;
    if ( v23 != nullptr )
    {
      *v23 = 217;
      v24 = v63;
      v7 = v64;
    }
    v25 = v24 + 1;
    v63 = v25;
  }
  v55[0] = 218;
  if ( v7 == v25 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), v7, (int)(uintptr_t)(v55));
    v27 = v63;
    v7 = v64;
  }
  else
  {
    v26 = nullptr;
    if ( v25 != nullptr )
    {
      *v25 = 218;
      v26 = v63;
      v7 = v64;
    }
    v27 = v26 + 1;
    v63 = v27;
  }
  v56[0] = 213;
  if ( v27 == v7 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), v7, (int)(uintptr_t)(v56));
    v29 = v63;
    v7 = v64;
  }
  else
  {
    v28 = nullptr;
    if ( v27 != nullptr )
    {
      *v27 = 213;
      v28 = v63;
      v7 = v64;
    }
    v29 = v28 + 1;
    v63 = v29;
  }
  v57[0] = 214;
  if ( v29 == v7 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), v7, (int)(uintptr_t)(v57));
    v31 = v63;
    v7 = v64;
  }
  else
  {
    v30 = nullptr;
    if ( v29 != nullptr )
    {
      *v29 = 214;
      v30 = v63;
      v7 = v64;
    }
    v31 = v30 + 1;
    v63 = v31;
  }
  v58[0] = 215;
  if ( v7 == v31 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), v7, (int)(uintptr_t)(v58));
    v33 = v63;
    v7 = v64;
  }
  else
  {
    v32 = nullptr;
    if ( v31 != nullptr )
    {
      *v31 = 215;
      v32 = v63;
      v7 = v64;
    }
    v33 = v32 + 1;
    v63 = v33;
  }
  v59 = 219;
  if ( v7 == v33 )
  {
    g4_std::vector_int_id_9b8903::M_insert_aux((int)(uintptr_t)(&v62), v7, (int)(uintptr_t)(&v59));
  }
  else
  {
    v34 = nullptr;
    if ( v33 != nullptr )
    {
      *v33 = 219;
      v34 = v63;
    }
    v63 = v34 + 1;
  }
  v35 = (uint32_t *)opNew(4u);
  *v35 = ((uint32_t)(uintptr_t)&off_206D848);
  v46 = (const void *)v62;
  v36 = (int)(uintptr_t)(v63) - v62;
  *((uint32_t *)v1 + 1) = (uint32_t)(uintptr_t)(v35);
  v37 = v36 >> 2;
  v65 = nullptr;
  v38 = v37;
  v66 = nullptr;
  v67 = nullptr;
  if ( v37 != 0 )
  {
    if ( v37 > 0x3FFFFFFF )
      sub_18FFEE0(v37, v35);
    v40 = v35;
    v42 = 4 * v37;
    v39 = (char *)opNew(4 * v37);
    v46 = (const void *)v62;
    v35 = v40;
    v38 = ((int)(uintptr_t)(v63) - v62) >> 2;
    v44 = 4 * v38;
  }
  else
  {
    v44 = 0;
    v42 = 0;
    v39 = nullptr;
  }
  v65 = v39;
  v66 = v39;
  v67 = &v39[v42];
  if ( v38 != 0 )
  {
    v41 = v35;
    memmove(v39, v46, v44);
    v35 = v41;
  }
  v66 = &v39[v44];
  glf::EventManager::RegisterEventSerializer(v1, &v65, v35);
  if ( v65 != nullptr )
    opDelete(v65);
  if ( v62 != 0 )
    opDelete((void *)v62);
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::Destroy  (binary VA: 0xc7a010)
// Original: glf::EventManager::~EventManager
// ----------------------------------------------------------------------------
void glf::EventManager::Destroy(glf::EventManager::Self *self)
{
  int v1;
  glf::EventManager::Self *v2;
  glf::EventManager::Self *v3;
  void *v4;
  void **v5;
  unsigned int v6;
  void *v7;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D5C8);
  v1 = *((uint32_t *)self + 1);
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 4))(*((uint32_t *)self + 1));
  if ( *((uint32_t *)self + 30) != 0 )
    opDelete(*((void **)self + 30));
  glf::SpinLock::Destroy((glf::EventManager::Self *)((char *)self + 104));
  v2 = *((glf::EventManager::Self **)self + 24);
  if ( (glf::EventManager::Self *)((char *)self + 96) != v2 )
  {
    while ( 1 )
    {
      v3 = *(glf::EventManager::Self **)v2;
      if ( *((uint32_t *)v2 + 5) != 0 )
        opDelete(*((void **)v2 + 5));
      opDelete(v2);
      if ( (glf::EventManager::Self *)((char *)self + 96) == v3 )
        break;
      v2 = v3;
    }
  }
  std::_Rb_tree<int,std::pair<int const,glf::EventManager::TypeInfo>,std::_Select1st<std::pair<int const,glf::EventManager::TypeInfo>>,std::less<int>,std::allocator<std::pair<int const,glf::EventManager::TypeInfo>>>::_M_erase(
    (int)(uintptr_t)(self) + 72,
    *((void **)self + 20));
  g4_std::Rb_tree_string_pair_string_const_6e8774::M_erase(
    (int)(uintptr_t)(self) + 48,
    *((uint32_t **)self + 14));
  v4 = *((void **)self + 2);
  if ( v4 != nullptr )
  {
    v5 = *((void ***)self + 7);
    v6 = *((uint32_t *)self + 11) + 4;
    if ( v6 > (unsigned int)(uintptr_t)(v5) )
    {
      do
      {
        v7 = *v5++;
        opDelete(v7);
      }
      while ( v6 > (unsigned int)(uintptr_t)(v5) );
      v4 = *((void **)self + 2);
    }
    opDelete(v4);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::Destroy_eac7a100  (binary VA: 0xc7a100)
// Original: glf::EventManager::~EventManager
// ----------------------------------------------------------------------------
void glf::EventManager::Destroy_eac7a100(glf::EventManager::Self *self)
{
  glf::EventManager::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::EventManager::RegisterUserEventType  (binary VA: 0xc7a140)
// Original: glf::EventManager::RegisterUserEventType
// ----------------------------------------------------------------------------
int glf::EventManager::RegisterUserEventType(glf::EventManager::Self *self, int *a2, char *a3, unsigned int a4)
{
  size_t v5;
  size_t v6;
  size_t v7;
  size_t v8;
  int v9;
  int v10;
  size_t v11;
  size_t v12;
  int v13;
  size_t v14;
  int v15;
  int v16;
  uint32_t *v17;
  size_t v18;
  int v19;
  int v20;
  volatile int32_t *v21;
  int v22;
  uint32_t *v23;
  size_t v24;
  unsigned int v25;
  int v26;
  int v27;
  size_t v28;
  size_t v29;
  size_t v30;
  int v31;
  int v32;
  uint32_t *v33;
  size_t v34;
  unsigned int v35;
  int v36;
  int v37;
  int v38;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_na;
  typedef void *_g4_t_v42;
  typedef const void *_g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef size_t _g4_t_v45;
  typedef char _g4_t_v46;
  typedef char *_g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef char *_g4_t_s;
  typedef int *_g4_t_v50;
  typedef glf::EventManager::Self *_g4_t_v51;
  typedef size_t _g4_t_v52;
  typedef size_t _g4_t_v53;
  typedef char *_g4_t_s2;
  typedef void *_g4_t_s2a;
  typedef char *_g4_t_s2b;
  typedef size_t _g4_t_v57[3];
  typedef size_t _g4_t_v58[4];
  typedef int _g4_t_v59;
  typedef uint32_t _g4_t_v60[4];
  typedef void *_g4_t_s1;
  typedef int _g4_t_v62;
  typedef glf::EventManager::Self **_g4_t_v63;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_n)) > _g4_s0 ? (4u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_nb)) > _g4_s1 ? (4u + sizeof(_g4_t_nb)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_na)) > _g4_s2 ? (4u + sizeof(_g4_t_na)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v42)) > _g4_s3 ? (8u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v43)) > _g4_s4 ? (8u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v44)) > _g4_s5 ? (16u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v45)) > _g4_s6 ? (24u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v46)) > _g4_s7 ? (24u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v47)) > _g4_s8 ? (40u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v48)) > _g4_s9 ? (48u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_s)) > _g4_s10 ? (52u + sizeof(_g4_t_s)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v50)) > _g4_s11 ? (56u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v51)) > _g4_s12 ? (60u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v52)) > _g4_s13 ? (64u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v53)) > _g4_s14 ? (64u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_s2)) > _g4_s15 ? (68u + sizeof(_g4_t_s2)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_s2a)) > _g4_s16 ? (68u + sizeof(_g4_t_s2a)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_s2b)) > _g4_s17 ? (68u + sizeof(_g4_t_s2b)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v57)) > _g4_s18 ? (72u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v58)) > _g4_s19 ? (84u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (101u + sizeof(_g4_t_v59)) > _g4_s20 ? (101u + sizeof(_g4_t_v59)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v60)) > _g4_s21 ? (104u + sizeof(_g4_t_v60)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_s1)) > _g4_s22 ? (120u + sizeof(_g4_t_s1)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v62)) > _g4_s23 ? (124u + sizeof(_g4_t_v62)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v63)) > _g4_s24 ? (144u + sizeof(_g4_t_v63)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 4u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 4u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 4u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 68u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 68u);
  _g4_t_s2b &s2b = *reinterpret_cast<_g4_t_s2b *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 72u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 84u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 101u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 104u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 120u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 124u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 144u);

  v63 = &self;
  v50 = a2;
  v51 = self;
  s = a3;
  v48 = a4;
  if ( *a2 > 999 )
    return *a2;
  glf::SpinLock::Lock((glf::EventManager::Self *)((char *)self + 104));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v60), s, (int)(uintptr_t)(&v59));
  v47 = (char *)v51 + 52;
  v5 = *((uint32_t *)v51 + 14);
  if ( v5 != 0 )
  {
    s2 = (char *)v60[0];
    v52 = (size_t)v51 + 52;
    v6 = *(uint32_t *)(v60[0] - 12);
    do
    {
      while ( 1 )
      {
        v7 = *(uint32_t *)(*(uint32_t *)(v5 + 16) - 12);
        v8 = v7;
        n = v6;
        if ( v6 <= v7 )
          v8 = v6;
        v9 = memcmp(*(const void **)(v5 + 16), s2, v8);
        v6 = n;
        v10 = v7 - n;
        if ( v9 == 0 )
          v9 = v10;
        if ( v9 < 0 )
          break;
        v52 = v5;
        v5 = *(uint32_t *)(v5 + 8);
        if ( v5 == 0 )
          goto LABEL_12;
      }
      v5 = *(uint32_t *)(v5 + 12);
    }
    while ( v5 != 0 );
LABEL_12:
    v45 = v52;
    if ( v47 != (char *)v52 )
    {
      v11 = *(uint32_t *)(*(uint32_t *)(v52 + 16) - 12);
      v12 = v11;
      if ( n <= v11 )
        v12 = n;
      v13 = memcmp(s2, *(const void **)(v52 + 16), v12);
      if ( v13 == 0 )
        v13 = n - v11;
      if ( v13 >= 0 )
        goto LABEL_18;
      g4_std::string::construct_copy(&s1, v60);
      v62 = 0;
      v17 = *(uint32_t **)(v52 + 16);
      s2a = *((void **)s1 - 3);
      v18 = (size_t)s2a;
      if ( *(v17 - 3) <= (unsigned int)(uintptr_t)(s2a) )
        v18 = *(v17 - 3);
      na = *(v17 - 3);
      v42 = s1;
      v19 = memcmp(s1, v17, v18);
      if ( v19 == 0 )
        v19 = (int)(uintptr_t)(s2a) - na;
      if ( v19 < 0 )
      {
        if ( *((uint32_t *)v51 + 15) != v52 )
        {
          v22 = sub_1904940(v52);
          v23 = *(uint32_t **)(v22 + 16);
          v24 = (size_t)s2a;
          v25 = *(v23 - 3);
          if ( v25 <= (unsigned int)(uintptr_t)(s2a) )
            v24 = *(v23 - 3);
          v26 = memcmp(v23, v42, v24);
          v27 = v25 - (uint32_t)(uintptr_t)(s2a);
          if ( v26 == 0 )
            v26 = v27;
          if ( v26 < 0 )
          {
            if ( *(uint32_t *)(v22 + 12) != 0 )
            {
              v52 = opNew(0x18u);
              if ( v52 != -16 )
              {
                g4_std::string::construct_copy(v52 + 16, &s1);
                *(uint32_t *)(v52 + 20) = v62;
              }
              sub_1904970(1, v52, v45, v47);
              goto LABEL_40;
            }
            goto LABEL_59;
          }
          goto LABEL_47;
        }
      }
      else
      {
        v20 = memcmp(v17, v42, v18);
        v21 = (volatile int32_t *)v42;
        if ( v20 == 0 )
          v20 = na - (uint32_t)(uintptr_t)(s2a);
        if ( v20 >= 0 )
          goto LABEL_28;
        if ( *((uint32_t *)v51 + 16) != v52 )
        {
          v32 = sub_19048E0(v52);
          v33 = *(uint32_t **)(v32 + 16);
          v34 = (size_t)s2a;
          v35 = *(v33 - 3);
          if ( v35 <= (unsigned int)(uintptr_t)(s2a) )
            v34 = *(v33 - 3);
          v36 = memcmp(v42, v33, v34);
          if ( v36 == 0 )
            v36 = (int)(uintptr_t)(s2a) - v35;
          if ( v36 < 0 )
          {
            if ( *(uint32_t *)(v52 + 12) != 0 )
            {
              v52 = opNew(0x18u);
              if ( v52 != -16 )
              {
                g4_std::string::construct_copy(v52 + 16, &s1);
                *(uint32_t *)(v52 + 20) = v62;
              }
              sub_1904970(1, v52, v32, v47);
LABEL_40:
              v21 = (volatile int32_t *)s1;
              ++*((uint32_t *)v51 + 17);
              goto LABEL_28;
            }
            goto LABEL_59;
          }
LABEL_47:
          g4_std::Rb_tree_string_pair_string_const_6e8774::M_insert_unique((int)(uintptr_t)(v57), (uint32_t *)((char *)v51 + 48), (int)(uintptr_t)(&s1));
          v52 = v57[0];
          v21 = (volatile int32_t *)s1;
          goto LABEL_28;
        }
      }
LABEL_59:
      g4_std::Rb_tree_string_pair_string_const_6e8774::M_insert_unique((int)(uintptr_t)(v58), (uint32_t *)((char *)v51 + 48), (int)(uintptr_t)(&s1));
      v52 = v58[0];
      v21 = (volatile int32_t *)s1;
LABEL_28:
      if ( v21 - 3 == (volatile int32_t *)(uintptr_t)(dword_213B808) )
      {
        s2 = (char *)v60[0];
      }
      else
      {
        if ( __sync_fetch_and_add(v21 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy((void *)(v21 - 3));
        s2 = (char *)v60[0];
      }
LABEL_18:
      *(uint32_t *)(v52 + 20) = *((uint32_t *)v51 + 29);
      if ( s2 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)s2 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(s2 - 12);
      nb = g4_compat_map_int_typeinfo_index(
             (char *)v51 + 72,
             (const int *)v51 + 29);
      v14 = strlen(s);
      g4_std_compat::string_assign(nb, s, v14);
      *(uint32_t *)(g4_compat_map_int_typeinfo_index(
                    (char *)v51 + 72,
                    (const int *)v51 + 29)
                + 8) = v48;
      *(uint32_t *)(g4_compat_map_int_typeinfo_index(
                    (char *)v51 + 72,
                    (const int *)v51 + 29)
                + 12) = *((uint32_t *)v51 + 23) - 1;
      v15 = *((uint32_t *)v51 + 29);
      *v50 = v15;
      *((uint32_t *)v51 + 29) = v15 + 1;
      v16 = *v50;
      glf::SpinLock::Unlock((glf::EventManager::Self *)((char *)v51 + 104));
      return v16;
    }
  }
  g4_std::string::construct_copy(&s1, v60);
  v62 = 0;
  if ( *((uint32_t *)v51 + 17) != 0 )
  {
    s2b = *((char **)v51 + 16);
    v28 = *((uint32_t *)s1 - 3);
    v44 = *((uint32_t **)s2b + 4);
    v29 = *(v44 - 3);
    v30 = v29;
    v43 = s1;
    if ( v28 <= v29 )
      v30 = *((uint32_t *)s1 - 3);
    v53 = v30;
    v31 = memcmp(v44, s1, v30);
    if ( v31 == 0 )
      v31 = v29 - v28;
    if ( v31 < 0 )
    {
      v46 = 1;
      if ( v47 != s2b )
      {
        v37 = v28 - v29;
        v38 = memcmp(v43, v44, v53);
        if ( v38 == 0 )
          v38 = v37;
        v46 = v38 < 0;
      }
      v52 = opNew(0x18u);
      if ( v52 != -16 )
      {
        g4_std::string::construct_copy(v52 + 16, &s1);
        *(uint32_t *)(v52 + 20) = v62;
      }
      sub_1904970(v46, v52, s2b, v47);
      v21 = (volatile int32_t *)s1;
      ++*((uint32_t *)v51 + 17);
      goto LABEL_28;
    }
  }
  goto LABEL_47;
}


