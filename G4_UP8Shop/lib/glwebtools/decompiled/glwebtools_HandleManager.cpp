#include "Core/Utils/DecompTypes.h"
#include "glwebtools_HandleManager.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::HandleManager::Construct  (binary VA: 0x13dd870)
// Original: glwebtools::HandleManager::HandleManager
// ----------------------------------------------------------------------------
glwebtools::HandleManager::Self * glwebtools::HandleManager::Construct(glwebtools::HandleManager::Self *self)
{
  glwebtools::HandleManager::Self *result;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094CC0);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  result = (glwebtools::HandleManager::Self *)(glwebtools::Mutex::Construct((glwebtools::HandleManager::Self *)((char *)self + 16)));
  *((uint32_t *)self + 6) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::HandleManager::GetInstance  (binary VA: 0x13dd8d0)
// Original: glwebtools::HandleManager::GetInstance
// ----------------------------------------------------------------------------
glwebtools::HandleManager::Self * glwebtools::HandleManager::GetInstance()
{
  glwebtools::HandleManager::Self *result;
  glwebtools::HandleManager::Self *v1;

  result = (glwebtools::HandleManager::Self *)glwebtools::HandleManager::s_instance;
  if ( glwebtools::HandleManager::s_instance == 0 )
  {
    v1 = (glwebtools::HandleManager::Self *)sub_4EBE70(0x1Cu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    glwebtools::HandleManager::Construct(v1);
    glwebtools::HandleManager::s_instance = (uintptr_t)(uintptr_t)(v1);
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::HandleManager::UnregisterNode  (binary VA: 0x13dd950)
// Original: glwebtools::HandleManager::UnregisterNode
// ----------------------------------------------------------------------------
int glwebtools::HandleManager::UnregisterNode(glwebtools::HandleManager::Self *self, unsigned int a2)
{
  int v2;
  int v3;
  unsigned int v4;
  int v5;

  v2 = 0;
  glwebtools::Mutex::Lock((glwebtools::HandleManager::Self *)((char *)self + 16));
  v3 = *((uint32_t *)self + 1);
  v4 = (uint16_t)(a2 >> 7);
  if ( v4 < -1431655765 * ((*((uint32_t *)self + 2) - v3) >> 2) )
  {
    v5 = v3 + 12 * v4;
    if ( a2 == *(uint32_t *)v5 )
    {
      *(uint8_t *)(v5 + 4) = 1;
      *(uint32_t *)(*((uint32_t *)self + 1) + 12 * v4) = 0;
      *(uint32_t *)(*((uint32_t *)self + 1) + 12 * v4 + 8) = *((uint32_t *)self + 6);
      *((uint32_t *)self + 6) = v4;
      v2 = 1;
    }
  }
  glwebtools::Mutex::Unlock((glwebtools::HandleManager::Self *)((char *)self + 16));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::HandleManager::GetObjectPointer  (binary VA: 0x13dda10)
// Original: glwebtools::HandleManager::GetObjectPointer
// ----------------------------------------------------------------------------
int glwebtools::HandleManager::GetObjectPointer(glwebtools::HandleManager::Self *self, unsigned int a2, void **a3)
{
  int v3;
  int v4;
  unsigned int v5;
  int v6;

  glwebtools::Mutex::Lock((glwebtools::HandleManager::Self *)((char *)self + 16));
  v3 = *((uint32_t *)self + 1);
  v4 = 0;
  v5 = (uint16_t)(a2 >> 7);
  if ( v5 < -1431655765 * ((*((uint32_t *)self + 2) - v3) >> 2) )
  {
    v6 = v3 + 12 * v5;
    if ( *(uint32_t *)v6 == a2 && *(uint8_t *)(v6 + 4) == 0 )
    {
      v4 = 1;
      *a3 = *(void **)(v6 + 8);
    }
  }
  glwebtools::Mutex::Unlock((glwebtools::HandleManager::Self *)((char *)self + 16));
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::HandleManager::RegisterType  (binary VA: 0x13ddab0)
// Original: glwebtools::HandleManager::RegisterType
// ----------------------------------------------------------------------------
int glwebtools::HandleManager::RegisterType(glwebtools::HandleManager::Self *self)
{
  int result;
  int v2;

  result = 0;
  v2 = glwebtools::HandleManager::s_nextTypeId;
  if ( glwebtools::HandleManager::s_nextTypeId <= 0x80u )
  {
    *(uint32_t *)self = glwebtools::HandleManager::s_nextTypeId;
    glwebtools::HandleManager::s_nextTypeId = v2 + 1;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::HandleManager::GetNextCounterValue  (binary VA: 0x13ddae0)
// Original: glwebtools::HandleManager::GetNextCounterValue
// ----------------------------------------------------------------------------
int glwebtools::HandleManager::GetNextCounterValue()
{
  return ++glwebtools::HandleManager::s_nextCounter;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::HandleManager::RegisterNode  (binary VA: 0x13ddb00)
// Original: glwebtools::HandleManager::RegisterNode
// ----------------------------------------------------------------------------
bool glwebtools::HandleManager::RegisterNode(glwebtools::HandleManager::Self *self, char a2, unsigned int a3, void *a4, unsigned int *a5)
{
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  bool v9;
  int v11;
  uint32_t *v12;
  bool v13;
  int v14;
  int v15;
  int v16;
  typedef bool _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef void *_g4_t_v20;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v18)) > _g4_s1 ? (20u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v19)) > _g4_s2 ? (24u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v20)) > _g4_s3 ? (28u + sizeof(_g4_t_v20)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);

  glwebtools::Mutex::Lock((glwebtools::HandleManager::Self *)((char *)self + 16));
  v5 = *((uint32_t *)self + 1);
  v6 = *((uint32_t *)self + 6);
  v7 = -1431655765 * ((*((uint32_t *)self + 2) - v5) >> 2);
  if ( v6 != -1 && v6 < v7 )
  {
    v8 = 12 * v6;
    if ( *(uint8_t *)(v5 + 12 * v6 + 4) != 0 )
    {
      *a5 = (a3 << 23) + (a2 & 0x7F) + ((uint16_t)*((uint32_t *)self + 6) << 7);
      v16 = *((uint32_t *)self + 1) + v8;
      *((uint32_t *)self + 6) = *(uint32_t *)(v16 + 8);
      *(uint8_t *)(v16 + 4) = 0;
      *(uint32_t *)(*((uint32_t *)self + 1) + v8) = *a5;
      *(uint32_t *)(*((uint32_t *)self + 1) + v8 + 8) = (uint32_t)(uintptr_t)(a4);
      v9 = true;
      goto LABEL_6;
    }
    *((uint32_t *)self + 6) = -1;
  }
  v9 = false;
  if ( v7 <= 0xFFFF )
  {
    *a5 = (a2 & 0x7F) + (a3 << 23) + (v7 << 7);
    *((uint32_t *)self + 6) = -1;
    glwebtools::HandleManagerNode::Construct((glwebtools::HandleManagerNode::Self *)&v18);
    LOBYTE(v19) = 0;
    v11 = *a5;
    v20 = a4;
    v12 = *((uint32_t **)self + 2);
    v13 = v12 == *((uint32_t **)self + 3);
    v18 = v11;
    if ( v13 )
    {
      g4_std::vector_glwebtools_HandleManager_dc99ad::M_insert_aux(
        (char *)self + 4,
        v12,
        &v18);
      v15 = *((uint32_t *)self + 2);
    }
    else
    {
      v14 = 0;
      if ( v12 != nullptr )
      {
        *v12 = v11;
        v12[1] = v19;
        v12[2] = (uint32_t)(uintptr_t)(v20);
        v14 = *((uint32_t *)self + 2);
      }
      v15 = v14 + 12;
      *((uint32_t *)self + 2) = v15;
    }
    v9 = v7 < -1431655765 * ((v15 - *((uint32_t *)self + 1)) >> 2);
  }
LABEL_6:
  v17 = v9;
  glwebtools::Mutex::Unlock((glwebtools::HandleManager::Self *)((char *)self + 16));
  return v17;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::HandleManager::Destroy  (binary VA: 0x13ddca0)
// Original: glwebtools::HandleManager::~HandleManager
// ----------------------------------------------------------------------------
void glwebtools::HandleManager::Destroy(glwebtools::HandleManager::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094CC0);
  glwebtools::Mutex::Destroy((glwebtools::HandleManager::Self *)((char *)self + 16));
  if ( *((uint32_t *)self + 1) != 0 )
    sub_4EBEE0(*((uint32_t *)self + 1));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2049608);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::HandleManager::Destroy_ea13ddd00  (binary VA: 0x13ddd00)
// Original: glwebtools::HandleManager::~HandleManager
// ----------------------------------------------------------------------------
void glwebtools::HandleManager::Destroy_ea13ddd00(glwebtools::HandleManager::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094CC0);
  glwebtools::Mutex::Destroy((glwebtools::HandleManager::Self *)((char *)self + 16));
  if ( *((uint32_t *)self + 1) != 0 )
    sub_4EBEE0(*((uint32_t *)self + 1));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2049608);
  opDelete(self);
}


