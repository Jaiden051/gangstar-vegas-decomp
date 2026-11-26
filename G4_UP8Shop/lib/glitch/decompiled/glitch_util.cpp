#include "Core/Utils/DecompTypes.h"
#include "glitch_util.h"

// ----------------------------------------------------------------------------
// Function: glitch::util::edgeComp  (binary VA: 0xcd0cb0)
// Original: glitch::util::edgeComp
// ----------------------------------------------------------------------------
bool glitch::util::edgeComp(int a1, int a2)
{
  bool result;
  unsigned int v3;
  unsigned int v4;

  result = *(uint32_t *)a1 < *(uint32_t *)a2;
  if ( *(uint32_t *)a1 == *(uint32_t *)a2 )
  {
    v3 = *(uint32_t *)(a1 + 4);
    v4 = *(uint32_t *)(a2 + 4);
    result = v3 < v4;
    if ( v3 == v4 )
      return *(uint8_t *)(a1 + 12) < *(uint8_t *)(a2 + 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::edgeComp2  (binary VA: 0xcd4ec0)
// Original: glitch::util::edgeComp2
// ----------------------------------------------------------------------------
bool glitch::util::edgeComp2(int a1, int a2)
{
  unsigned int v2;
  unsigned int v3;
  bool result;

  v2 = *(uint32_t *)(a2 + 4);
  v3 = *(uint32_t *)(a1 + 4);
  result = v3 < v2;
  if ( v3 == v2 )
    return *(uint8_t *)(a1 + 12) <= *(uint8_t *)(a2 + 12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::edgeGroup  (binary VA: 0xcd4f10)
// Original: glitch::util::edgeGroup
// ----------------------------------------------------------------------------
bool glitch::util::edgeGroup(uint32_t *a1, uint32_t *a2)
{
  return *a1 == *a2;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::CAreaManager::free  (binary VA: 0xcd4f20)
// Original: glitch::util::CAreaManager::free
// ----------------------------------------------------------------------------
int glitch::util::CAreaManager::free(int a1, int *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  typedef void *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef char _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char _g4_t_v18;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v11)) > _g4_s4 ? (16u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v12)) > _g4_s5 ? (20u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v13)) > _g4_s6 ? (24u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v14)) > _g4_s7 ? (28u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v15)) > _g4_s8 ? (32u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v16)) > _g4_s9 ? (36u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v17)) > _g4_s10 ? (40u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v18)) > _g4_s11 ? (44u + sizeof(_g4_t_v18)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  v14 = 0;
  v18 = 1;
  v2 = a2[1];
  v11 = *a2;
  v3 = a2[2];
  v13 = a2[3];
  v15 = v3;
  v17 = v13;
  v4 = *(uint32_t **)(a1 + 8);
  v12 = v2;
  v16 = v2;
  sub_CD1460(&v10, v4, (uint32_t *)(a1 + 8), (int)(uintptr_t)(&v11));
  v5 = (uint32_t *)v10;
  if ( *(uint32_t *)(v10 + 8) == v11
    && *(uint32_t *)(v10 + 12) == v12
    && *(uint32_t *)(v10 + 16) == v13
    && *(uint8_t *)(v10 + 20) == v14 )
  {
    v9 = *(uint32_t **)v10;
    v7 = (void *)v10;
    sub_1901940(v10);
    opDelete(v7);
    v5 = v9;
  }
  sub_CD1460(&v10, v5, (uint32_t *)(a1 + 8), (int)(uintptr_t)(&v15));
  if ( *(uint32_t *)(v10 + 8) == v15
    && *(uint32_t *)(v10 + 12) == v16
    && *(uint32_t *)(v10 + 16) == v17
    && *(uint8_t *)(v10 + 20) == v18 )
  {
    v8 = (void *)v10;
    sub_1901940(v10);
    opDelete(v8);
  }
  *(uint8_t *)(a1 + 24) = 1;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::CAreaManager::verifyEdgeList  (binary VA: 0xcd5050)
// Original: glitch::util::CAreaManager::verifyEdgeList
// ----------------------------------------------------------------------------
bool glitch::util::CAreaManager::verifyEdgeList(uint32_t **a1)
{
  bool result;
  uint32_t *v2;
  uint32_t *v3;
  unsigned int v4;
  uint32_t *v5;

  result = true;
  v2 = *a1;
  if ( a1 != (uint32_t **)(*a1) )
  {
    v3 = *a1;
    v4 = 0;
    do
    {
      v3 = (uint32_t *)*v3;
      ++v4;
    }
    while ( a1 != (uint32_t **)(v3) );
    result = true;
    if ( v4 > 1 )
    {
      while ( 1 )
      {
        v5 = (uint32_t *)*v2;
        if ( a1 == (uint32_t **)*v2 )
          break;
        result = glitch::util::edgeComp2((int)(uintptr_t)(v2 + 2), (int)(uintptr_t)(v5 + 2));
        if ( !result )
          return result;
        v2 = v5;
      }
      return true;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::CAreaManager::mergeEdges  (binary VA: 0xcd50d0)
// Original: glitch::util::CAreaManager::mergeEdges
// ----------------------------------------------------------------------------
void glitch::util::CAreaManager::mergeEdges(int a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  int v6;
  void **v7;
  bool v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int *v12;
  unsigned int v13;
  void **v14;
  uint32_t *v15;
  uint32_t *v16;
  void **v17;
  void **v18;
  unsigned int v19;
  typedef void **_g4_t_v20;
  typedef void *_g4_t_v21;
  typedef char _g4_t_v22;
  typedef void *_g4_t_v23[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v21)) > _g4_s1 ? (0u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v22)) > _g4_s2 ? (31u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v23)) > _g4_s3 ? (40u + sizeof(_g4_t_v23)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 31u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);

  v3 = (uint32_t *)*a2;
  if ( (uint32_t *)*a2 != a2 )
  {
    *((uint8_t *)v3 + 20) = 1;
    v23[0] = v23;
    v23[1] = v23;
LABEL_3:
    while ( 2 )
    {
      v4 = (uint32_t *)opNew(0x18u);
      if ( v4 != (uint32_t *)-8 )
      {
        v4[2] = v3[2];
        v4[3] = v3[3];
        v4[4] = v3[4];
        v4[5] = v3[5];
      }
      sub_1901920(v4, a3);
      v5 = a3[1];
      v6 = opNew(0xCu);
      if ( v6 != -8 )
        *(uint32_t *)(v6 + 8) = v5 + 8;
      sub_1901920(v6, v23);
      v3 = (uint32_t *)*v3;
      if ( v3 != a2 )
      {
LABEL_8:
        v7 = (void **)v23[0];
        v8 = v23[0] == v23;
        *((uint8_t *)v3 + 20) = 1;
        if ( v8 )
          continue;
        v22 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v12 = (unsigned int *)v7[2];
            v13 = v3[3];
            v11 = v12[2];
            if ( v11 >= v13 )
              break;
LABEL_19:
            v14 = (void **)*v7;
            sub_1901940(v7);
            v20 = v7;
            v7 = v14;
            opDelete(v20);
            if ( v14 == v23 )
            {
LABEL_20:
              if ( v22 == 0 )
                goto LABEL_3;
              v3 = (uint32_t *)*v3;
              if ( v3 == a2 )
                goto LABEL_22;
              goto LABEL_8;
            }
          }
          v9 = v3[2];
          if ( *v12 == v9 )
          {
            if ( v13 > v12[1] )
              v13 = v12[1];
            v12[1] = v13;
            if ( v3[4] >= v11 )
              v11 = v3[4];
            v22 = 1;
            v12[2] = v11;
            v7 = (void **)*v7;
          }
          else
          {
            if ( *v12 >= v9 )
            {
              v8 = v13 == v12[1];
              v19 = v3[4];
              if ( v8 && v11 <= v19 )
              {
                *((uint8_t *)v12 + 12) = -1;
                goto LABEL_19;
              }
              if ( v19 >= v11 )
                v11 = v3[4];
              v12[2] = v11;
            }
            else
            {
              v8 = v13 == v12[1];
              v10 = v3[4];
              if ( v8 && v11 >= v10 )
              {
                v22 = 1;
              }
              else
              {
                if ( v11 < v10 )
                  v11 = v3[4];
                v3[4] = v11;
              }
            }
            v7 = (void **)*v7;
          }
          if ( v7 == v23 )
            goto LABEL_20;
        }
      }
      break;
    }
LABEL_22:
    v15 = (uint32_t *)*a3;
    if ( (uint32_t *)*a3 != a3 )
    {
      do
      {
        while ( *((uint8_t *)v15 + 20) != 0xFF )
        {
          v15 = (uint32_t *)*v15;
          if ( v15 == a3 )
            goto LABEL_27;
        }
        v16 = (uint32_t *)*v15;
        sub_1901940(v15);
        v21 = v15;
        v15 = v16;
        opDelete(v21);
      }
      while ( v16 != a3 );
    }
LABEL_27:
    glitch::util::CAreaManager::verifyEdgeList((uint32_t **)a3);
    v17 = (void **)v23[0];
    if ( v23[0] != v23 )
    {
      while ( 1 )
      {
        v18 = (void **)*v17;
        opDelete(v17);
        if ( v18 == v23 )
          break;
        v17 = v18;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::util::CAreaManager::verifyEdgeListFull  (binary VA: 0xcd52e0)
// Original: glitch::util::CAreaManager::verifyEdgeListFull
// ----------------------------------------------------------------------------
bool glitch::util::CAreaManager::verifyEdgeListFull(uint32_t **a1)
{
  bool result;
  uint32_t *v2;
  uint32_t *v3;
  unsigned int v4;
  uint32_t *v5;

  result = true;
  v2 = *a1;
  if ( a1 != (uint32_t **)(*a1) )
  {
    v3 = *a1;
    v4 = 0;
    do
    {
      v3 = (uint32_t *)*v3;
      ++v4;
    }
    while ( a1 != (uint32_t **)(v3) );
    result = true;
    if ( v4 > 1 )
    {
      while ( 1 )
      {
        v5 = (uint32_t *)*v2;
        if ( a1 == (uint32_t **)*v2 )
          break;
        result = glitch::util::edgeComp((int)(uintptr_t)(v2 + 2), (int)(uintptr_t)(v5 + 2));
        if ( !result )
          return result;
        v2 = v5;
      }
      return true;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::CAreaManager::manageEdges  (binary VA: 0xcd5360)
// Original: glitch::util::CAreaManager::manageEdges
// ----------------------------------------------------------------------------
char glitch::util::CAreaManager::manageEdges(int a1, uint32_t **a2, int *a3, uint32_t **a4)
{
  uint32_t *v4;
  uint32_t *v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int *v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  uint32_t **v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  void *v22;
  int v23;
  int v24;
  char v25;
  uint32_t *v26;
  int v27;

  v4 = (uint32_t *)(a3);
  glitch::util::CAreaManager::verifyEdgeList(a2);
  v5 = *a2;
  if ( *((uint8_t *)a3 + 12) != 0 )
  {
    if ( a2 != (uint32_t **)(v5) && v5[3] <= (unsigned int)a3[1] )
    {
      while ( 1 )
      {
        *((uint8_t *)v5 + 20) = 1;
        v19 = (uint32_t *)opNew(0x18u);
        if ( v19 != (uint32_t *)-8 )
        {
          v19[2] = v5[2];
          v19[3] = v5[3];
          v19[4] = v5[4];
          v19[5] = v5[5];
        }
        sub_1901920(v19, a4);
        v23 = *v5;
        sub_1901940(v5);
        opDelete(v5);
        if ( a2 == (uint32_t **)v23 || *(uint32_t *)(v23 + 12) > (unsigned int)a3[1] )
          break;
        v5 = (uint32_t *)v23;
      }
      v4 = (uint32_t *)(a3);
    }
    v20 = (uint32_t *)opNew(0x18u);
    if ( v20 != (uint32_t *)-8 )
    {
      v20[2] = *v4;
      v20[3] = v4[1];
      v20[4] = v4[2];
      v20[5] = v4[3];
    }
    sub_1901920(v20, a4);
    goto LABEL_8;
  }
LABEL_2:
  if ( a2 == (uint32_t **)(v5) )
  {
LABEL_8:
    glitch::util::CAreaManager::verifyEdgeList(a2);
    LOBYTE(v8) = glitch::util::CAreaManager::verifyEdgeList(a4);
    return v8;
  }
  while ( 1 )
  {
    v6 = v5[3];
    v24 = v5[2];
    v7 = v5[4];
    v25 = *((uint8_t *)v5 + 20);
    v8 = v5[5];
    v27 = v8;
    if ( a3[2] <= v6 )
      return v8;
    if ( a3[1] < v7 )
    {
      v26 = (uint32_t *)*v5;
      sub_1901940(v5);
      opDelete(v5);
      if ( v25 != -1 )
      {
        v11 = *a3;
        if ( *a3 - v24 > 0 && (int)(v7 - v6) > 0 )
        {
          v12 = (uint32_t *)opNew(0x18u);
          if ( v12 != (uint32_t *)-8 )
          {
            v12[3] = v6;
            v12[2] = v24;
            v12[4] = v11;
            v12[5] = v7;
          }
          sub_1901920(v12, a1);
        }
      }
      v13 = a3;
      v14 = a3[1];
      if ( v14 > v6 )
      {
        v18 = opNew(0x18u);
        if ( v18 != -8 )
        {
          *(uint32_t *)(v18 + 12) = v6;
          *(uint32_t *)(v18 + 8) = v24;
          *(uint32_t *)(v18 + 16) = v14;
          *(uint8_t *)(v18 + 20) = 1;
        }
        sub_1901920(v18, a4);
        v13 = a3;
      }
      v15 = v13[2];
      v5 = v26;
      if ( v15 < v7 )
      {
        v16 = opNew(0x18u);
        v17 = (uint32_t **)v16;
        if ( v16 != -8 )
        {
          *(uint32_t *)(v16 + 12) = v15;
          *(uint32_t *)(v16 + 8) = v24;
          *(uint32_t *)(v16 + 16) = v7;
          *(uint8_t *)(v16 + 20) = -1;
        }
        sub_1901920(v16, v26);
        v5 = *v17;
      }
      goto LABEL_2;
    }
    v9 = (uint32_t *)opNew(0x18u);
    if ( v9 != (uint32_t *)-8 )
    {
      v9[3] = v6;
      v9[5] = v27;
      v9[2] = v24;
      v9[4] = v7;
      *((uint8_t *)v9 + 20) = v25;
    }
    sub_1901920(v9, a4);
    v10 = (uint32_t *)*v5;
    sub_1901940(v5);
    v22 = v5;
    v5 = v10;
    opDelete(v22);
    if ( a2 == (uint32_t **)(v10) )
      goto LABEL_8;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::util::CAreaManager::prepareAllocEdges  (binary VA: 0xcd5630)
// Original: glitch::util::CAreaManager::prepareAllocEdges
// ----------------------------------------------------------------------------
void glitch::util::CAreaManager::prepareAllocEdges(int a1, uint32_t *a2, uint32_t *a3, int **a4)
{
  uint32_t *v4;
  int v5;
  int *v6;
  uint32_t *v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  uint32_t *v11;
  unsigned int v12;
  int v13;
  int v14;
  int *v15;
  int v16;
  int *v17;
  void *v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;

  v4 = a2;
  if ( a2 != a3 )
  {
    v5 = 0;
    v6 = nullptr;
    while ( *((uint8_t *)v4 + 20) != 0 )
    {
      if ( v5 != 0 && *(uint32_t *)(v5 + 8) == v4[3] )
      {
        *(uint32_t *)(v5 + 8) = v4[4];
      }
      else
      {
        v11 = (uint32_t *)opNew(0x18u);
        if ( v11 != (uint32_t *)-8 )
        {
          v11[2] = v4[2];
          v11[3] = v4[3];
          v11[4] = v4[4];
          v11[5] = v4[5];
        }
        sub_1901920(v11, a4);
        v5 = (int)(uintptr_t)(a4[1] + 2);
      }
      if ( v6 == nullptr )
        goto LABEL_12;
      if ( (unsigned int)v6[2] <= *(uint32_t *)(v5 + 4) )
      {
        v6 = nullptr;
        goto LABEL_12;
      }
      v12 = *(uint32_t *)(v5 + 8);
      *(uint8_t *)(v5 + 12) = -1;
      v5 = 0;
      if ( v12 <= v6[2] )
      {
LABEL_12:
        v4 = (uint32_t *)*v4;
        if ( v4 == a3 )
          goto LABEL_25;
      }
      else
      {
        v13 = *v6;
        v21 = v6[2];
        v19 = v12;
        v14 = opNew(0x18u);
        if ( v14 != -8 )
        {
          *(uint32_t *)(v14 + 8) = v13;
          *(uint32_t *)(v14 + 12) = v21;
          *(uint32_t *)(v14 + 16) = v19;
          *(uint8_t *)(v14 + 20) = -1;
        }
LABEL_24:
        sub_1901920(v14, a4);
        v4 = (uint32_t *)*v4;
        v5 = (int)(uintptr_t)(a4[1] + 2);
        if ( v4 == a3 )
          goto LABEL_25;
      }
    }
    if ( v6 != nullptr && v6[2] == v4[3] )
    {
      v6[2] = v4[4];
    }
    else
    {
      v7 = (uint32_t *)opNew(0x18u);
      v6 = (int *)(v7 + 2);
      if ( v7 != (uint32_t *)-8 )
      {
        v7[2] = v4[2];
        v7[3] = v4[3];
        v7[4] = v4[4];
        v7[5] = v4[5];
      }
      sub_1901920(v7, a4);
    }
    if ( v5 != 0 )
    {
      v8 = *(uint32_t *)(v5 + 8);
      v9 = v6[1];
      if ( v8 <= v9 )
      {
        v5 = 0;
      }
      else if ( v9 <= *(uint32_t *)(v5 + 4) )
      {
        *(uint8_t *)(v5 + 12) = -1;
        v10 = v6[2];
        v5 = 0;
        if ( v8 > v10 )
        {
LABEL_35:
          v16 = *v6;
          v22 = v8;
          v20 = v10;
          v14 = opNew(0x18u);
          if ( v14 != -8 )
          {
            *(uint32_t *)(v14 + 8) = v16;
            *(uint32_t *)(v14 + 12) = v20;
            *(uint32_t *)(v14 + 16) = v22;
            *(uint8_t *)(v14 + 20) = -1;
          }
          goto LABEL_24;
        }
      }
      else
      {
        *(uint32_t *)(v5 + 8) = v9;
        v10 = v6[2];
        if ( v8 > v10 )
          goto LABEL_35;
      }
    }
    goto LABEL_12;
  }
LABEL_25:
  v15 = *a4;
  while ( a4 != (int **)v15 )
  {
    while ( *((uint8_t *)v15 + 20) != 0xFF )
    {
      v15 = (int *)*v15;
      if ( a4 == (int **)v15 )
        return;
    }
    v17 = (int *)*v15;
    sub_1901940(v15);
    v18 = v15;
    v15 = v17;
    opDelete(v18);
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::util::CAreaManager::sweepCleanZone  (binary VA: 0xcd5890)
// Original: glitch::util::CAreaManager::sweepCleanZone
// ----------------------------------------------------------------------------
void glitch::util::CAreaManager::sweepCleanZone(int a1, int *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  int v5;
  int *v6;
  int *v7;
  bool v8;
  unsigned int v9;
  int **v10;
  char *v11;
  char *v12;
  uint32_t *v13;
  int *v14;
  int *v15;
  int *i;
  uint32_t *j;
  uint32_t *v18;
  uint32_t *k;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t **v23;
  bool v24;
  int *v25;
  int *v26;
  uint32_t **v27;
  uint32_t *v28;
  uint32_t **v29;
  typedef uint32_t _g4_t_v30[6];
  typedef char *_g4_t_v31;
  typedef int *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef int *_g4_t_v39;
  typedef int *_g4_t_v40;
  typedef int **_g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef uint32_t **_g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef uint32_t **_g4_t_v45;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v30)) > _g4_s0 ? (0u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v31)) > _g4_s1 ? (24u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v32)) > _g4_s2 ? (32u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v33)) > _g4_s3 ? (36u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v34)) > _g4_s4 ? (40u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v35)) > _g4_s5 ? (44u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v36)) > _g4_s6 ? (48u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v37)) > _g4_s7 ? (52u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v38)) > _g4_s8 ? (56u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v39)) > _g4_s9 ? (60u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v40)) > _g4_s10 ? (64u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v41)) > _g4_s11 ? (68u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v42)) > _g4_s12 ? (80u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v43)) > _g4_s13 ? (84u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v44)) > _g4_s14 ? (88u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v45)) > _g4_s15 ? (92u + sizeof(_g4_t_v45)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 84u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 92u);

  glitch::util::CAreaManager::verifyEdgeListFull((uint32_t **)a2);
  v2 = *(uint32_t **)a1;
  if ( *(uint32_t *)a1 != a1 )
  {
    while ( 1 )
    {
      v3 = (uint32_t *)*v2;
      opDelete(v2);
      if ( v3 == (uint32_t *)a1 )
        break;
      v2 = v3;
    }
  }
  v38 = (uint32_t *)(&v42);
  v42 = (uint32_t *)(&v42);
  v43 = &v42;
  v44 = (uint32_t *)(&v44);
  v45 = &v44;
  *(uint32_t *)a1 = a1;
  *(uint32_t *)(a1 + 4) = a1;
  v4 = *(uint32_t *)(a1 + 20);
  v5 = opNew(0x18u);
  if ( v5 != -8 )
  {
    *(uint32_t *)(v5 + 8) = 0;
    *(uint32_t *)(v5 + 12) = 0;
    *(uint32_t *)(v5 + 16) = v4;
    *(uint8_t *)(v5 + 20) = 1;
  }
  sub_1901920(v5, &v42);
  v39 = (int *)&v40;
  v40 = (int *)&v40;
  v41 = &v40;
  v6 = (int *)*a2;
  if ( (int *)*a2 == a2 )
  {
    glitch::util::CAreaManager::verifyEdgeListFull((uint32_t **)a2);
    *(uint8_t *)(a1 + 24) = 0;
    goto LABEL_55;
  }
  v35 = 0;
  v34 = nullptr;
  v37 = 0;
  v31 = nullptr;
  do
  {
    while ( 1 )
    {
      v7 = (int *)*v6;
      if ( a2 == (int *)*v6 )
        break;
      v32 = (int *)*v6;
      v8 = glitch::util::edgeGroup((uint32_t *)(v6 + 2), (uint32_t *)(v7 + 2));
      v7 = v32;
      if ( !v8 )
        break;
LABEL_12:
      v6 = (int *)*v6;
      if ( a2 == v6 )
        goto LABEL_30;
    }
    if ( (char *)v37 != v31 )
    {
      if ( v31 != nullptr )
        *(uint32_t *)v31 = (uint32_t)(uintptr_t)(v7);
      v31 += 4;
      goto LABEL_12;
    }
    v37 = 4;
    v35 = (v31 - v34) >> 2;
    if ( v35 != 0 )
    {
      v9 = 2 * ((v31 - v34) >> 2);
      if ( v35 > v9 || v9 > 0x3FFFFFFF )
        v37 = 0xFFFFFFFC;
      else
        v37 = 8 * v35;
    }
    v32 = v7;
    v30[1] = 0;
    v36 = sub_4EBDC0(v37);
    v33 = (char *)(v36 + 4);
    v10 = (int **)(v36 + 4 * v35);
    v35 = (unsigned int)(uintptr_t)(v10);
    if ( v10 != nullptr )
      *v10 = v32;
    if ( v34 == v31 )
    {
      v31 = v33;
    }
    else
    {
      v11 = v31;
      v12 = v34;
      v13 = (uint32_t *)v36;
      v35 = (unsigned int)(uintptr_t)(v6);
      do
      {
        if ( v13 != nullptr )
          *v13 = *(uint32_t *)v12;
        v12 += 4;
        ++v13;
      }
      while ( v12 != v11 );
      v6 = (int *)v35;
      v31 = (char *)(v36 + 4 * ((unsigned int)(v11 - (v34 + 4)) >> 2) + 8);
    }
    if ( v34 != nullptr )
      gll_operator_delete_arr((int)(uintptr_t)(v34));
    v37 += v36;
    v6 = (int *)*v6;
    v34 = (char *)v36;
  }
  while ( a2 != v6 );
LABEL_30:
  v35 = (unsigned int)(uintptr_t)(v31);
  v36 = *a2;
  if ( v31 != v34 )
  {
    v37 = (size_t)v34;
    do
    {
      v14 = v40;
      if ( v40 != v39 )
      {
        while ( 1 )
        {
          v15 = (int *)*v14;
          opDelete(v14);
          if ( v15 == v39 )
            break;
          v14 = v15;
        }
      }
      v40 = (int *)&v40;
      v41 = &v40;
      glitch::util::CAreaManager::prepareAllocEdges(a1, (uint32_t *)v36, *(uint32_t **)v37, &v40);
      v36 = *(uint32_t *)v37;
      glitch::util::CAreaManager::verifyEdgeListFull((uint32_t **)(&v40));
      for ( i = v40; i != v39; i = (int *)*i )
        glitch::util::CAreaManager::manageEdges(a1, &v42, i + 2, &v44);
      for ( j = v42; j != v38; j = (uint32_t *)*j )
      {
        v18 = (uint32_t *)opNew(0x18u);
        if ( v18 != (uint32_t *)-8 )
        {
          v18[2] = j[2];
          v18[3] = j[3];
          v18[4] = j[4];
          v18[5] = j[5];
        }
        sub_1901920(v18, &v44);
      }
      for ( k = v44; k != (uint32_t *)(&v44); k = (uint32_t *)*k )
        *((uint8_t *)k + 20) = 1;
      glitch::util::CAreaManager::verifyEdgeList(&v44);
      v20 = v42;
      if ( v42 != v38 )
      {
        while ( 1 )
        {
          v21 = (uint32_t *)*v20;
          opDelete(v20);
          if ( v21 == v38 )
            break;
          v20 = v21;
        }
      }
      v42 = (uint32_t *)(&v42);
      v43 = &v42;
      glitch::util::CAreaManager::mergeEdges(a1, (uint32_t *)(&v44), (uint32_t *)(&v42));
      v22 = v44;
      if ( v44 != (uint32_t *)(&v44) )
      {
        while ( 1 )
        {
          v23 = (uint32_t **)*v22;
          opDelete(v22);
          if ( v23 == &v44 )
            break;
          v22 = (uint32_t *)(v23);
        }
      }
      v37 += 4;
      v44 = (uint32_t *)(&v44);
      v45 = &v44;
    }
    while ( v35 != v37 );
  }
  glitch::util::CAreaManager::verifyEdgeListFull((uint32_t **)a2);
  v24 = v34 == nullptr;
  *(uint8_t *)(a1 + 24) = 0;
  if ( !v24 )
    gll_operator_delete_arr((int)(uintptr_t)(v34));
LABEL_55:
  v25 = v40;
  if ( v40 != v39 )
  {
    while ( 1 )
    {
      v26 = (int *)*v25;
      opDelete(v25);
      if ( v26 == v39 )
        break;
      v25 = v26;
    }
  }
  v27 = (uint32_t **)&v30[22];
  v28 = *v27;
  if ( v27 != (uint32_t **)(uintptr_t)(*v27) )
    goto LABEL_62;
  while ( v27 != (uint32_t **)(uintptr_t)(v38) )
  {
    v27 -= 2;
    v28 = *v27;
    if ( v27 != (uint32_t **)(uintptr_t)(*v27) )
    {
LABEL_62:
      while ( 1 )
      {
        v29 = (uint32_t **)*v28;
        opDelete(v28);
        if ( v27 == v29 )
          break;
        v28 = (uint32_t *)(v29);
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::util::CAreaManager::Construct  (binary VA: 0xcd5d00)
// Original: glitch::util::CAreaManager::CAreaManager
// ----------------------------------------------------------------------------
void glitch::util::CAreaManager::Construct(int a1, uint32_t *a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;

  v2 = (int *)(a1 + 8);
  *(uint32_t *)a1 = a1;
  *(uint32_t *)(a1 + 4) = a1;
  *(uint32_t *)(a1 + 8) = a1 + 8;
  *(uint32_t *)(a1 + 12) = a1 + 8;
  v3 = a2[1];
  *(uint32_t *)(a1 + 16) = *a2;
  *(uint32_t *)(a1 + 20) = v3;
  *(uint8_t *)(a1 + 24) = 0;
  v4 = *a2;
  v6 = a2[1];
  v5 = opNew(0x18u);
  if ( v5 != -8 )
  {
    *(uint32_t *)(v5 + 8) = v4;
    *(uint32_t *)(v5 + 12) = 0;
    *(uint32_t *)(v5 + 16) = v6;
    *(uint8_t *)(v5 + 20) = 0;
  }
  sub_1901920(v5, v2);
  glitch::util::CAreaManager::sweepCleanZone(a1, v2);
}

// ----------------------------------------------------------------------------
// Function: glitch::util::CAreaManager::sweepAllocate  (binary VA: 0xcd5da0)
// Original: glitch::util::CAreaManager::sweepAllocate
// ----------------------------------------------------------------------------
int glitch::util::CAreaManager::sweepAllocate(int a1, uint32_t *a2, int *a3)
{
  int v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v17)) > _g4_s6 ? (36u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v18)) > _g4_s7 ? (40u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v19)) > _g4_s8 ? (44u + sizeof(_g4_t_v19)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);

  LOBYTE(v15) = 0;
  LOBYTE(v19) = 1;
  v3 = a3[1];
  v12 = *a3;
  v4 = a3[2];
  v14 = a3[3];
  v16 = v4;
  v18 = v14;
  v5 = (uint32_t *)*a2;
  v13 = v3;
  v17 = v3;
  sub_CD1460(&v11, v5, a2, (int)(uintptr_t)(&v12));
  v6 = v11;
  v7 = (uint32_t *)opNew(0x18u);
  if ( v7 != (uint32_t *)-8 )
  {
    v7[2] = v12;
    v7[3] = v13;
    v7[4] = v14;
    v7[5] = v15;
  }
  sub_1901920(v7, v6);
  sub_CD1460(&v11, v6, a2, (int)(uintptr_t)(&v16));
  v8 = v11;
  v9 = (uint32_t *)opNew(0x18u);
  if ( v9 != (uint32_t *)-8 )
  {
    v9[2] = v16;
    v9[3] = v17;
    v9[4] = v18;
    v9[5] = v19;
  }
  sub_1901920(v9, v8);
  glitch::util::CAreaManager::verifyEdgeListFull((uint32_t **)a2);
  *(uint8_t *)(a1 + 24) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::CAreaManager::allocate  (binary VA: 0xcd5eb0)
// Original: glitch::util::CAreaManager::allocate
// ----------------------------------------------------------------------------
int glitch::util::CAreaManager::allocate(int a1, int a2, int *a3)
{
  int result;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v14)) > _g4_s5 ? (28u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  result = a1;
  if ( *(uint8_t *)(a2 + 24) != 0 )
  {
    glitch::util::CAreaManager::sweepCleanZone(a2, (int *)(a2 + 8));
    result = a1;
  }
  *(uint32_t *)result = 0;
  *(uint32_t *)(result + 4) = 0;
  *(uint32_t *)(result + 8) = 0;
  *(uint32_t *)(result + 12) = 0;
  *(uint8_t *)(result + 16) = 0;
  v4 = *(uint32_t **)a2;
  if ( *(uint32_t *)a2 != a2 )
  {
    v9 = result;
    v10 = *a3;
    while ( 1 )
    {
      v5 = v4[2];
      v6 = v4[3];
      v13 = v4[4];
      v7 = v4[5];
      v11 = v5;
      v12 = v6;
      v14 = v7;
      if ( v13 - v5 >= v10 )
      {
        v8 = a3[1];
        if ( v8 <= v7 - v6 )
          break;
      }
      v4 = (uint32_t *)*v4;
      if ( v4 == (uint32_t *)a2 )
        return result;
    }
    v13 = v10 + v5;
    v14 = v8 + v6;
    glitch::util::CAreaManager::sweepAllocate(a2, (uint32_t *)(a2 + 8), &v11);
    result = v9;
    *(uint32_t *)v9 = v11;
    *(uint32_t *)(v9 + 4) = v12;
    *(uint32_t *)(v9 + 8) = v13;
    *(uint32_t *)(v9 + 12) = v14;
    *(uint8_t *)(v9 + 16) = 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::STriangleIterator::initIterator  (binary VA: 0xcd5ff0)
// Original: glitch::util::STriangleIterator::initIterator
// ----------------------------------------------------------------------------
int glitch::util::STriangleIterator::initIterator(glitch::video::IBuffer::Self ***self)
{
  glitch::video::IBuffer::Self *v1;
  glitch::video::IBuffer::Self **v2;
  int result;
  glitch::video::IBuffer::Self **v4;
  glitch::video::IBuffer::Self **v5;

  v1 = (*self)[2];
  v2 = (glitch::video::IBuffer::Self **)((char *)v1 + 20);
  if ( *((uint16_t *)v1 + 15) == 2 )
  {
    if ( *(self + 4) != nullptr )
    {
      glitch::video::IBuffer::unmap(**(self + 3));
      *(self + 4) = nullptr;
    }
    *(self + 3) = v2;
    result = glitch::video::IBuffer::mapInternal(
               *((glitch::video::IBuffer::Self **)v1 + 5),
               0,
               0,
               *(uint32_t *)(*((uint32_t *)v1 + 5) + 20),
               0);
    v5 = nullptr;
    if ( result != 0 )
      v5 = (glitch::video::IBuffer::Self **)(result + *((uint32_t *)v1 + 6));
    *(self + 4) = v5;
  }
  else
  {
    if ( *(self + 2) != nullptr )
    {
      glitch::video::IBuffer::unmap(**(self + 1));
      *(self + 2) = nullptr;
    }
    *(self + 1) = v2;
    result = glitch::video::IBuffer::mapInternal(
               *((glitch::video::IBuffer::Self **)v1 + 5),
               0,
               0,
               *(uint32_t *)(*((uint32_t *)v1 + 5) + 20),
               0);
    v4 = nullptr;
    if ( result != 0 )
      v4 = (glitch::video::IBuffer::Self **)(result + *((uint32_t *)v1 + 6));
    *(self + 2) = v4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::STriangleIterator::opAssign  (binary VA: 0xcd60f0)
// Original: glitch::util::STriangleIterator::operator=
// ----------------------------------------------------------------------------
glitch::util::STriangleIterator::Self * glitch::util::STriangleIterator::opAssign(glitch::util::STriangleIterator::Self *self, const glitch::util::STriangleIterator::Self *a2)
{
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 6) = -1;
  glitch::util::STriangleIterator::initIterator((glitch::video::IBuffer::Self ***)self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::STriangleIterator::Construct  (binary VA: 0xcd6140)
// Original: glitch::util::STriangleIterator::STriangleIterator
// ----------------------------------------------------------------------------
glitch::util::STriangleIterator::Self * glitch::util::STriangleIterator::Construct(glitch::util::STriangleIterator::Self *self, const glitch::util::STriangleIterator::Self *a2)
{
  int v2;
  int v3;

  v2 = *(uint32_t *)a2;
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = v2;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  v3 = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 6) = -1;
  *((uint32_t *)self + 5) = v3;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  return (glitch::util::STriangleIterator::Self *)glitch::util::STriangleIterator::initIterator((glitch::video::IBuffer::Self ***)self);
}

// ----------------------------------------------------------------------------
// Function: glitch::util::STriangleIterator::assignTriangle  (binary VA: 0xcd61b0)
// Original: glitch::util::STriangleIterator::assignTriangle
// ----------------------------------------------------------------------------
glitch::util::STriangleIterator::Self * glitch::util::STriangleIterator::assignTriangle(glitch::util::STriangleIterator::Self *self, unsigned int a2)
{
  glitch::util::STriangleIterator::Self *result;
  unsigned int v3;
  int *v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  float *v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  int v16;
  int16_t *v17;
  float v18; // xmm0_4
  float v19; // xmm2_4
  int16_t *v20;
  float v21; // xmm0_4
  float v22; // xmm2_4
  int16_t *v23;
  float v24; // xmm1_4
  float v25; // xmm0_4
  unsigned int v26;

  result = self;
  v3 = a2;
  v4 = *(int **)self;
  v5 = *(uint32_t *)(*(uint32_t *)self + 4);
  switch ( v5 )
  {
    case 5:
      v7 = a2 + 1;
      v26 = a2 + 2;
      v3 = 0;
LABEL_10:
      v6 = *v4;
      v8 = v4[3];
      if ( *v4 == 1 )
        goto LABEL_5;
      goto LABEL_11;
    case 6:
      v3 = 3 * a2;
      break;
    case 4:
      break;
    default:
      v6 = *v4;
      v7 = 0;
      v3 = 0;
      v26 = 0;
      v8 = v4[3];
      if ( *v4 == 1 )
      {
LABEL_5:
        v3 = *(uint16_t *)(v8 + 2 * v3);
        v7 = *(uint16_t *)(v8 + 2 * v7);
        v26 = *(uint16_t *)(v8 + 2 * v26);
        goto LABEL_6;
      }
LABEL_11:
      if ( v6 == 2 )
      {
        v3 = *(uint32_t *)(v8 + 4 * v3);
        v7 = *(uint32_t *)(v8 + 4 * v7);
        v26 = *(uint32_t *)(v8 + 4 * v26);
      }
      else if ( v6 == 0 )
      {
        v3 = *(uint8_t *)(v8 + v3);
        v7 = *(uint8_t *)(v8 + v7);
        v26 = *(uint8_t *)(v8 + v26);
        v15 = v4[2];
        v10 = *(float **)(v15 + 16);
        if ( *(uint16_t *)(v15 + 30) != 2 )
          goto LABEL_7;
        goto LABEL_14;
      }
LABEL_6:
      v9 = v4[2];
      v10 = *(float **)(v9 + 16);
      if ( *(uint16_t *)(v9 + 30) != 2 )
      {
LABEL_7:
        v11 = *((uint32_t *)self + 1);
        v12 = (uint32_t *)(*((uint32_t *)self + 2) + *(uint16_t *)(v11 + 14) * v3);
        *((uint32_t *)self + 7) = *v12;
        *((uint32_t *)self + 8) = v12[1];
        *((uint32_t *)self + 9) = v12[2];
        v13 = (uint32_t *)(*((uint32_t *)self + 2) + *(uint16_t *)(v11 + 14) * v7);
        *((uint32_t *)self + 10) = *v13;
        *((uint32_t *)self + 11) = v13[1];
        *((uint32_t *)self + 12) = v13[2];
        v14 = (uint32_t *)(*((uint32_t *)self + 2) + *(uint16_t *)(v11 + 14) * v26);
        *((uint32_t *)self + 13) = *v14;
        *((uint32_t *)self + 14) = v14[1];
        *((uint32_t *)self + 15) = v14[2];
        return result;
      }
LABEL_14:
      v16 = *((uint32_t *)self + 3);
      v17 = (int16_t *)(*((uint32_t *)self + 4) + *(uint16_t *)(v16 + 14) * v3);
      v18 = (float)((float)v17[2] * v10[2]) + v10[5];
      v19 = (float)((float)*v17 * *v10) + v10[3];
      *((float *)self + 8) = (float)((float)v17[1] * v10[1]) + v10[4];
      *((float *)self + 9) = v18;
      *((float *)self + 7) = v19;
      v20 = (int16_t *)(*((uint32_t *)self + 4) + *(uint16_t *)(v16 + 14) * v7);
      v21 = (float)((float)v20[2] * v10[2]) + v10[5];
      v22 = (float)((float)*v20 * *v10) + v10[3];
      *((float *)self + 11) = (float)((float)v20[1] * v10[1]) + v10[4];
      *((float *)self + 12) = v21;
      *((float *)self + 10) = v22;
      v23 = (int16_t *)(*((uint32_t *)self + 4) + *(uint16_t *)(v16 + 14) * v26);
      v24 = (float)((float)v23[1] * v10[1]) + v10[4];
      v25 = (float)((float)v23[2] * v10[2]) + v10[5];
      *((float *)self + 13) = (float)((float)*v23 * *v10) + v10[3];
      *((float *)self + 14) = v24;
      *((float *)self + 15) = v25;
      return result;
  }
  v7 = v3 + 1;
  v26 = v3 + 2;
  goto LABEL_10;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::getMinimumAtlasTextureSize  (binary VA: 0xcd6400)
// Original: glitch::util::getMinimumAtlasTextureSize
// ----------------------------------------------------------------------------
glitch::util::Self * glitch::util::getMinimumAtlasTextureSize(glitch::util::Self *self, unsigned int a2)
{
  unsigned int v2;
  unsigned int v3;
  __m128d v4;
  __m128d v5;
  unsigned int v6;
  unsigned int v7;
  char v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v12;

  v2 = 1;
  v3 = 1;
  v4 = g4_to_m128d(0);
  g4_m128_lane_ref<double>(v4, 0) = sqrt((float)((float)((float)HIWORD(a2) * 65536.0) + (float)(uint16_t)a2));
  v5 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v4);
  v6 = _mm_cvtsi128_si32(
         _mm_xor_si128(
           _mm_cvttpd_epi32(_mm_sub_pd(v4, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v5))),
           _mm_slli_epi32(G4_BITCAST<__m128i>(v5), 0x1Fu)));
  if ( v6 > 1 )
  {
    do
      v3 *= 2;
    while ( v6 > v3 );
    v2 = v3 * v3;
  }
  v7 = v3;
  if ( v2 >= a2 )
  {
    v12 = v3;
    v8 = 0;
    v9 = v3;
    while ( 1 )
    {
      v10 = v3 >> 1;
      v9 >>= 1;
      if ( v8 != 0 )
        v9 = v12;
      else
        v10 = v3;
      v8 ^= 1u;
      if ( a2 > v10 * v9 )
        break;
      v12 = v9;
      v3 = v10;
    }
    v7 = v12;
  }
  *(uint32_t *)self = v3;
  *((uint32_t *)self + 1) = v7;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::bumpAtlasSize  (binary VA: 0xcd64e0)
// Original: glitch::util::bumpAtlasSize
// ----------------------------------------------------------------------------
uint32_t * glitch::util::bumpAtlasSize(uint32_t *a1, int *a2)
{
  uint32_t *result;
  int v3;
  int v4;

  result = a1;
  v3 = a2[1];
  v4 = *a2;
  if ( v3 > *a2 )
  {
    a1[1] = v3;
    *a1 = 2 * v4;
  }
  else
  {
    *a1 = v4;
    a1[1] = 2 * v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::fillTexture  (binary VA: 0xcdba70)
// Original: glitch::util::fillTexture
// ----------------------------------------------------------------------------
int glitch::util::fillTexture(glitch::video::ITexture::Self **a1, uint32_t *a2)
{
  glitch::video::ITexture::Self *v2;
  int v3;
  char *v4;
  unsigned int v5;
  unsigned int v6;
  uint8_t v7;
  glitch::video::ITexture::Self *v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  glitch::video::ITexture::Self *v14;
  glitch::video::ITexture::Self *v15;
  char v16; // si
  int v17;
  int v18;
  int v19;
  int v20;
  glitch::video::ITexture::Self *v21;
  int32_t v22;
  int v23;
  int v24;
  int v26;
  int v27;
  int v28;
  glitch::video::ITexture::Self *v29;
  glitch::video::ITexture::Self *v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint8_t _g4_t_v33;
  typedef uint8_t _g4_t_v34;
  typedef unsigned int _g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint8_t _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef uint8_t _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef glitch::video::ITexture::Self *_g4_t_v50;
  typedef glitch::video::ITexture::Self *_g4_t_v51;
  typedef glitch::video::ITexture::Self *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t _g4_t_v54[4];
  typedef glitch::video::ITexture::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint32_t _g4_t_v57[2];
  typedef unsigned int _g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef uint32_t _g4_t_v60[2];
  typedef uint32_t _g4_t_v61[2];
  typedef uint32_t _g4_t_v62[7];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v32)) > _g4_s1 ? (0u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (6u + sizeof(_g4_t_v33)) > _g4_s2 ? (6u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (7u + sizeof(_g4_t_v34)) > _g4_s3 ? (7u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v35)) > _g4_s4 ? (8u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v36)) > _g4_s5 ? (12u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v37)) > _g4_s6 ? (16u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v38)) > _g4_s7 ? (20u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v39)) > _g4_s8 ? (24u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v40)) > _g4_s9 ? (24u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v41)) > _g4_s10 ? (28u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v42)) > _g4_s11 ? (32u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v43)) > _g4_s12 ? (36u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v44)) > _g4_s13 ? (36u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v45)) > _g4_s14 ? (40u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v46)) > _g4_s15 ? (40u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v47)) > _g4_s16 ? (44u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v48)) > _g4_s17 ? (44u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v49)) > _g4_s18 ? (44u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v50)) > _g4_s19 ? (48u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v51)) > _g4_s20 ? (60u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v52)) > _g4_s21 ? (64u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v53)) > _g4_s22 ? (68u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v54)) > _g4_s23 ? (80u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v55)) > _g4_s24 ? (96u + sizeof(_g4_t_v55)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v56)) > _g4_s25 ? (100u + sizeof(_g4_t_v56)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v57)) > _g4_s26 ? (112u + sizeof(_g4_t_v57)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v58)) > _g4_s27 ? (120u + sizeof(_g4_t_v58)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v59)) > _g4_s28 ? (124u + sizeof(_g4_t_v59)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v60)) > _g4_s29 ? (128u + sizeof(_g4_t_v60)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v61)) > _g4_s30 ? (136u + sizeof(_g4_t_v61)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v62)) > _g4_s31 ? (144u + sizeof(_g4_t_v62)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 6u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 7u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 68u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 100u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 112u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 120u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 124u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 128u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 136u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 144u);

  v2 = *a1;
  v3 = *((uint32_t *)*a1 + 4);
  v39 = *a2;
  v42 = (*(uint32_t *)(v3 + 36) >> 6) & 0x3F;
  v47 = *(uint32_t *)(*a2 + 16);
  v41 = (*(uint32_t *)(v47 + 36) >> 6) & 0x3F;
  v4 = (char *)(&glitch::video::pixel_format::detail::PFDTable[40 * v41]);
  v45 = v4[36];
  v43 = v4[37];
  if ( ((glitch::video::pixel_format::detail::PFDTable[40 * v42] & 8) != 0) == ((*v4 & 8) != 0) )
  {
    if ( (glitch::video::pixel_format::detail::PFDTable[40 * v42] & 8) != 0 && v42 != v41 )
    {
      glitch::os::Printer::log("Trying to atlas textures that don't have the same compressed format...", 3);
      return 0;
    }
    v5 = *((uint32_t *)v2 + 6);
    v33 = *(uint8_t *)(v3 + 47);
    v59 = v5;
    v6 = *((uint32_t *)v2 + 5);
    v58 = v6;
    v7 = *(uint8_t *)(v47 + 47);
    v52 = nullptr;
    v34 = v7;
    v48 = *(uint32_t *)(v39 + 20);
    v40 = *(uint32_t *)(v39 + 24);
    v8 = a1[1];
    v53 = 0;
    if ( v7 != 0 )
    {
      v9 = v45;
      v46 = v5;
      v35 = v9;
      v10 = v43;
      v44 = v6;
      v36 = v10;
      v37 = v10 * (uint32_t)(uintptr_t)(a1[2]);
      v11 = v48;
      v38 = v35 * (uint32_t)(uintptr_t)(v8);
      v49 = 0;
      v12 = 0;
      v13 = v5;
      while ( 1 )
      {
        v54[1] = v13;
        v54[0] = v44;
        if ( v33 <= (uint8_t)v49 || (v28 = (int)(uintptr_t)(*a1), (*(uint8_t *)(*((uint32_t *)*a1 + 4) + 44) & 2) != 0) )
        {
          if ( v12 != 0 )
            glitch::video::ITexture::unmap(v52);
          v14 = nullptr;
          v15 = *a1;
          v51 = *a1;
          if ( v51 != nullptr )
          {
            __sync_add_and_fetch((volatile int32_t *)v15 + 1, 1u);
            v14 = v51;
          }
          v51 = v52;
          v52 = v14;
          sub_5ED480((int *)&v51);
          if ( *a1 != nullptr )
            v53 = G4_VCALL<int>(*a1, 52, 2, 0, 0);
          v16 = 1;
        }
        else
        {
          if ( v12 != 0 )
          {
            glitch::video::ITexture::unmap(v52);
            v28 = (int)(uintptr_t)(*a1);
          }
          v29 = nullptr;
          v50 = (glitch::video::ITexture::Self *)v28;
          if ( v28 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v28 + 4), 1u);
            v29 = v50;
          }
          v30 = v52;
          v52 = v29;
          v50 = v30;
          sub_5ED480((int *)&v50);
          v16 = 0;
          if ( *a1 != nullptr )
            v53 = G4_VCALL<int>(*a1, 52, 2, 0, v49);
        }
        v17 = 0;
        v18 = *a2;
        v55 = (glitch::video::ITexture::Self *)*a2;
        if ( v55 != nullptr )
        {
          __sync_add_and_fetch((volatile int32_t *)(v18 + 4), 1u);
          if ( *a2 != 0 )
            v17 = G4_VCALL<int>(*a2, 52, 1, 0, v49);
        }
        v56 = v17;
        v57[0] = v11;
        v57[1] = v40;
        if ( v16 != 0 )
        {
          v62[2] = v58;
          v60[0] = v38;
          v60[1] = v37;
          v62[0] = 0;
          v62[1] = 0;
          v62[3] = v59;
          v19 = glitch::video::pixel_format::computePitch(v41, v11);
          v31 = v56;
          v20 = glitch::video::pixel_format::computePitch(v42, v58);
          glitch::video::pixel_format::copyScaling(v53, v42, v20, &v58, v31, v41, v19, v57, v60, v54, v62, 0);
          if ( v46 <= v36 )
            goto LABEL_36;
        }
        else
        {
          v61[0] = v38;
          v61[1] = v37;
          v26 = glitch::video::pixel_format::computePitch(v41, v11);
          v32 = v56;
          v27 = glitch::video::pixel_format::computePitch(v42, v54[0]);
          glitch::video::pixel_format::copy(v53, v42, v27, v54, v32, v41, v26, v57, v61);
          if ( v46 <= v36 )
          {
LABEL_36:
            if ( v56 != 0 )
              glitch::video::ITexture::unmap(v55);
            sub_5ED480((int *)&v55);
LABEL_39:
            if ( v53 != 0 )
              glitch::video::ITexture::unmap(v52);
            break;
          }
        }
        if ( v44 <= v35 )
          goto LABEL_36;
        if ( v56 != 0 )
          glitch::video::ITexture::unmap(v55);
        v21 = v55;
        if ( v55 != nullptr )
        {
          while ( 1 )
          {
            v22 = *((uint32_t *)v21 + 1);
            _mm_mfence();
            if ( v22 == 2 )
            {
              if ( *((uint16_t *)v21 + 16) == 0xFFFF )
                goto LABEL_24;
              glitch::video::ITexture::removeFromTextureManager(v21);
            }
            else
            {
              if ( v22 == 1 )
              {
                G4_VCALL<void>(v21, 4);
                break;
              }
LABEL_24:
              if ( v22 == __sync_val_compare_and_swap((volatile int32_t *)v21 + 1, v22, v22 - 1) )
                break;
            }
          }
        }
        if ( v34 <= (uint8_t)++v49 )
          goto LABEL_39;
        v23 = 1;
        v24 = v44 >> 1;
        v12 = v53;
        if ( v44 >> 1 == 0 )
          v24 = 1;
        v44 = v24;
        if ( v46 >> 1 != 0 )
          v23 = v46 >> 1;
        v46 = v23;
        v13 = v23;
        v38 >>= 1;
        v37 >>= 1;
        v11 >>= 1;
        v40 >>= 1;
      }
    }
    sub_5ED480((int *)&v52);
    return 1;
  }
  else
  {
    glitch::os::Printer::log("On the fly compression or decompression for atlassing is not yet supported...", 3);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glitch::util::atlasTextures  (binary VA: 0xcdc040)
// Original: glitch::util::atlasTextures
// ----------------------------------------------------------------------------
uint32_t * glitch::util::atlasTextures(uint32_t *a1, glitch::video::ITexture::Self **a2, int a3, int a4)
{
  glitch::video::ITexture::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  size_t v9;
  int32_t v10;
  size_t v11;
  glitch::video::ITexture::Self *i;
  int v13;
  bool v14;
  uint32_t *result;
  typedef int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef uint8_t _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef glitch::video::ITexture::Self **_g4_t_v21;
  typedef void *_g4_t_s;
  typedef int _g4_t_v23[2];
  typedef int _g4_t_v24[3];
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef char _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef uint32_t **_g4_t_v34;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v17)) > _g4_s1 ? (32u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (39u + sizeof(_g4_t_v18)) > _g4_s2 ? (39u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v19)) > _g4_s3 ? (40u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v20)) > _g4_s4 ? (44u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v21)) > _g4_s5 ? (48u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_s)) > _g4_s6 ? (52u + sizeof(_g4_t_s)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v23)) > _g4_s7 ? (56u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v24)) > _g4_s8 ? (64u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v25)) > _g4_s9 ? (76u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v26)) > _g4_s10 ? (80u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v27)) > _g4_s11 ? (84u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v28)) > _g4_s12 ? (88u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v29)) > _g4_s13 ? (92u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v30)) > _g4_s14 ? (96u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v31)) > _g4_s15 ? (100u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (101u + sizeof(_g4_t_v32)) > _g4_s16 ? (101u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (102u + sizeof(_g4_t_v33)) > _g4_s17 ? (102u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v34)) > _g4_s18 ? (112u + sizeof(_g4_t_v34)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 39u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 84u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 88u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 101u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 102u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);

  v34 = &a1;
  v21 = a2;
  v20 = a3;
  v19 = a4;
  v17 = a1;
  v4 = *a2;
  if ( *a2 == (glitch::video::ITexture::Self *)a2 )
  {
    result = a1;
    *a1 = 0;
    return result;
  }
  v28 = 1;
  v29 = 1;
  v31 = 0;
  v30 = 1;
  v32 = 0;
  v33 = 0;
  v26 = 0;
  v27 = 0;
  v5 = *((uint32_t *)v4 + 2);
  v24[2] = 1;
  v6 = *(uint32_t *)(v5 + 16);
  v29 = a4;
  v31 = 1;
  v16 = 0;
  v25 = (*(uint32_t *)(v6 + 36) >> 6) & 0x3F;
  v28 = a3;
  glitch::video::CTextureManager::addTexture(v24);
  v23[0] = v24[0];
  if ( v24[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v24[0] + 4), 1u);
  sub_5ED480(v24);
  v7 = v23[0];
  v18 = *(uint8_t *)(*(uint32_t *)(v23[0] + 16) + 47);
  if ( v18 == 0 )
    goto LABEL_16;
  v8 = 0;
  if ( v23[0] == 0 )
    goto LABEL_14;
LABEL_6:
  __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
  s = (void *)G4_VCALL<int>(v23[0], 52, 1, 0, v8, v16);
  v9 = glitch::video::pixel_format::computeMipmapSizeInBytes(
         v25,
         v20,
         v19,
         1,
         v8,
         ((*(uint32_t *)(*(uint32_t *)(v23[0] + 16) + 36) >> 3) & 7) == 1);
  memset(s, 0, v9);
  if ( s != nullptr )
    glitch::video::ITexture::unmap((glitch::video::ITexture::Self *)v7);
  while ( 1 )
  {
LABEL_9:
    while ( 1 )
    {
      v10 = *(uint32_t *)(v7 + 4);
      _mm_mfence();
      if ( v10 != 2 )
        break;
      if ( *(uint16_t *)(v7 + 32) == 0xFFFF )
        goto LABEL_11;
      glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v7);
    }
    if ( v10 == 1 )
      break;
LABEL_11:
    if ( v10 == __sync_val_compare_and_swap((volatile int32_t *)(v7 + 4), v10, v10 - 1) )
      goto LABEL_12;
  }
  G4_VCALL<void>(v7, 4);
LABEL_12:
  while ( v18 > (uint8_t)++v8 )
  {
    v7 = v23[0];
    if ( v23[0] != 0 )
      goto LABEL_6;
LABEL_14:
    v11 = glitch::video::pixel_format::computeMipmapSizeInBytes(v25, v20, v19, 1, v8, 0);
    memset(nullptr, 0, v11);
    if ( v7 != 0 )
      goto LABEL_9;
  }
LABEL_16:
  for ( i = *v21; v21 != (glitch::video::ITexture::Self **)i; i = *(glitch::video::ITexture::Self **)i )
    glitch::util::fillTexture((glitch::video::ITexture::Self **)i + 2, v23);
  v13 = v23[0];
  v14 = v23[0] == 0;
  *v17 = v23[0];
  if ( !v14 )
    __sync_add_and_fetch((volatile int32_t *)(v13 + 4), 1u);
  sub_5ED480(v23);
  return v17;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::atlasTextureArray  (binary VA: 0xcdc320)
// Original: glitch::util::atlasTextureArray
// ----------------------------------------------------------------------------
uint32_t * glitch::util::atlasTextureArray(uint32_t *a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  char *v7;
  unsigned int v8;
  int v9;
  float v10; // xmm1_4
  float v11; // xmm2_4
  int v12;
  int v13;
  float v14; // xmm4_4
  float *v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;
  int v19;
  float v20; // xmm2_4
  float v21; // xmm1_4
  float *v22;
  int v23;
  int v24;
  unsigned int *v26;
  uint32_t *v27;
  uint32_t *v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  __m128i *v33;
  unsigned int v34;
  unsigned int v35;
  uint32_t *v36;
  int v37;
  uint32_t *v38;
  int32_t v39;
  int v40;
  void ***v41;
  void **v42;
  int32_t v43;
  uint32_t *v44;
  void **v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef unsigned int *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint32_t **_g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef char *_g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef float *_g4_t_v68;
  typedef void **_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef void *_g4_t_v72;
  typedef void **_g4_t_v73;
  typedef uint32_t **_g4_t_v74;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v46)) > _g4_s0 ? (0u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v47)) > _g4_s1 ? (16u + sizeof(_g4_t_v47)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v48)) > _g4_s2 ? (44u + sizeof(_g4_t_v48)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v49)) > _g4_s3 ? (48u + sizeof(_g4_t_v49)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v50)) > _g4_s4 ? (52u + sizeof(_g4_t_v50)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v51)) > _g4_s5 ? (64u + sizeof(_g4_t_v51)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v52)) > _g4_s6 ? (72u + sizeof(_g4_t_v52)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v53)) > _g4_s7 ? (72u + sizeof(_g4_t_v53)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v54)) > _g4_s8 ? (76u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v55)) > _g4_s9 ? (76u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v56)) > _g4_s10 ? (80u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v57)) > _g4_s11 ? (80u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v58)) > _g4_s12 ? (84u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v59)) > _g4_s13 ? (88u + sizeof(_g4_t_v59)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v60)) > _g4_s14 ? (88u + sizeof(_g4_t_v60)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v61)) > _g4_s15 ? (92u + sizeof(_g4_t_v61)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v62)) > _g4_s16 ? (92u + sizeof(_g4_t_v62)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v63)) > _g4_s17 ? (96u + sizeof(_g4_t_v63)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v64)) > _g4_s18 ? (100u + sizeof(_g4_t_v64)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v65)) > _g4_s19 ? (104u + sizeof(_g4_t_v65)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v66)) > _g4_s20 ? (104u + sizeof(_g4_t_v66)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v67)) > _g4_s21 ? (104u + sizeof(_g4_t_v67)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v68)) > _g4_s22 ? (104u + sizeof(_g4_t_v68)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v69)) > _g4_s23 ? (104u + sizeof(_g4_t_v69)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v70)) > _g4_s24 ? (120u + sizeof(_g4_t_v70)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v71)) > _g4_s25 ? (124u + sizeof(_g4_t_v71)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v72)) > _g4_s26 ? (128u + sizeof(_g4_t_v72)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v73)) > _g4_s27 ? (132u + sizeof(_g4_t_v73)) : _g4_s27,
    _g4_s29 = (152u + sizeof(_g4_t_v74)) > _g4_s28 ? (152u + sizeof(_g4_t_v74)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 52u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 64u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 72u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 76u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 76u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 80u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 84u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 88u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 92u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 96u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 100u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 104u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 104u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 104u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 104u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 104u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 120u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 124u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 128u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 132u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 152u);

  v74 = &a1;
  v58 = (uint32_t **)a1;
  v54 = a3;
  v56 = a2;
  v61 = nullptr;
  v3 = (uint32_t *)*a1;
  if ( (uint32_t *)*a1 == a1 )
    return v61;
  v63 = v3[3];
  v64 = (char *)opNewArray(8 * v63);
  v62 = v63 - 1;
  if ( v63 == 0 )
    goto LABEL_9;
  v4 = 2 * (v63 >> 1);
  if ( v63 > 2 && v4 != 0 )
  {
    v5 = 0;
    do
    {
      v6 = v5++;
      v6 *= 16;
      _mm_storel_ps((double *)&v64[v6], g4_m128_from<__m128>(0LL));
      _mm_storel_ps((double *)&v64[v6 + 8], g4_m128_from<__m128>(0LL));
    }
    while ( v63 >> 1 > v5 );
    v7 = &v64[16 * (v63 >> 1)];
    v8 = v62 - v4;
    if ( v63 == v4 )
      goto LABEL_9;
  }
  else
  {
    v8 = v63 - 1;
    v7 = v64;
  }
  do
  {
    --v8;
    *(uint32_t *)v7 = 0;
    *((uint32_t *)v7 + 1) = 0;
    v7 += 8;
  }
  while ( v8 != -1 );
LABEL_9:
  *(uint32_t *)v64 = 1065353216;
  *((uint32_t *)v64 + 1) = 1065353216;
  v9 = v3[2];
  if ( v63 > 1 )
  {
    v10 = (float)*(int *)(*(uint32_t *)v9 + 24);
    v11 = (float)*(int *)(*(uint32_t *)v9 + 20);
    v12 = 1;
    while ( 1 )
    {
      v13 = *(uint32_t *)(v9 + 4 * v12);
      v14 = v10 / (float)*(int *)(v13 + 24);
      v15 = (float *)&v64[8 * v12++];
      *v15 = v11 / (float)*(int *)(v13 + 20);
      v15[1] = v14;
      if ( v12 == v63 )
        break;
      v9 = v3[2];
    }
  }
  v16 = (uint32_t *)**v58;
  if ( v58 != (uint32_t **)(uintptr_t)(v16) )
  {
    v65 = v16[3];
    if ( v65 != v63 )
    {
LABEL_26:
      glitch::os::Printer::log("Trying to atlas texture arrays that don't have the same count", 3);
      v61 = nullptr;
      goto LABEL_22;
    }
    while ( 1 )
    {
      v17 = (uint32_t *)v16[2];
      v18 = *(uint32_t *)(*v17 + 20);
      v52 = *(uint32_t *)(*v17 + 24);
      if ( v65 > 1 )
      {
        v19 = v17[1];
        v20 = (float)v18;
        if ( (float)((float)v18 / (float)*(int *)(v19 + 20)) == *((float *)v64 + 2) )
        {
          v21 = (float)v52 / (float)*(int *)(v19 + 24);
          v22 = (float *)(v64 + 8);
          v23 = 1;
          do
          {
            if ( v21 != v22[1] )
              break;
            if ( ++v23 == v65 )
              goto LABEL_24;
            v24 = v17[v23];
            v21 = (float)v52 / (float)*(int *)(v24 + 24);
            v22 = (float *)&v64[8 * v23];
          }
          while ( (float)(v20 / (float)*(int *)(v24 + 20)) == *v22 );
        }
        glitch::os::Printer::log("Trying to atlas texture arrays that don't have the scale factor", 3);
        v61 = nullptr;
        goto LABEL_22;
      }
LABEL_24:
      v16 = (uint32_t *)*v16;
      if ( v58 == (uint32_t **)(uintptr_t)(v16) )
        break;
      if ( v16[3] != v63 )
        goto LABEL_26;
    }
  }
  v26 = (unsigned int *)opNewArray(4 * v63 + 4);
  v50 = v26;
  *v26 = v63;
  v27 = v26 + 1;
  if ( v63 != 0 )
  {
    v28 = v26 + 1;
    v29 = -((uint8_t)((uint8_t)(uintptr_t)(v27) & 0xF) >> 2) & 3;
    if ( v63 <= v29 )
      v29 = v63;
    if ( v29 == 0 )
      goto LABEL_79;
    v30 = 0;
    v66 = v27;
    do
    {
      *v28 = 0;
      v31 = v63 - 2 - v30++;
      ++v28;
      v62 = v31;
    }
    while ( v29 > v30 );
    v27 = v66;
    if ( v63 != v29 )
    {
LABEL_79:
      v59 = v63 - v29;
      v32 = (v63 - v29) >> 2;
      v67 = 4 * v32;
      if ( 4 * v32 == 0 )
        goto LABEL_38;
      v33 = (__m128i *)&v27[v29];
      v34 = 0;
      do
      {
        ++v34;
        *v33++ = g4_m128_from<__m128i>(0LL);
      }
      while ( v34 < v32 );
      v62 -= v67;
      v28 += 4 * v32;
      if ( v59 != v67 )
      {
LABEL_38:
        v35 = v62;
        do
        {
          --v35;
          *v28++ = 0;
        }
        while ( v35 != -1 );
      }
    }
  }
  v61 = v27;
  v72 = &v72;
  v73 = &v72;
  if ( v63 == 0 )
    goto LABEL_22;
  v49 = (float)v56;
  v51 = 0;
  v48 = (float)v54;
LABEL_42:
  while ( 2 )
  {
    v72 = &v72;
    v73 = &v72;
    v68 = (float *)&v64[8 * v51];
    v36 = *v58;
    if ( *v58 == (uint32_t *)(uintptr_t)(v58) )
      goto LABEL_54;
    do
    {
      while ( 1 )
      {
        v37 = *(uint32_t *)(v36[2] + 4 * v51);
        if ( v37 != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v37 + 4), 1u);
        v60 = v36[4];
        v55 = v36[6];
        v57 = v36[5];
        v53 = v36[7];
        v46 = v68[1];
        v47 = *v68;
        v38 = (uint32_t *)opNew(0x1Cu);
        if ( v38 != (uint32_t *)-8 )
        {
          v38[2] = v37;
          if ( v37 != 0 )
            __sync_add_and_fetch((volatile int32_t *)(v37 + 4), 1u);
          v38[3] = (int)(float)((float)v60 / v47);
          v38[4] = (int)(float)((float)v57 / v46);
          v38[5] = (int)(float)((float)v55 / v47);
          v38[6] = (int)(float)((float)v53 / v46);
        }
        sub_1901920(v38, &v72);
        if ( v37 != 0 )
          break;
LABEL_53:
        v36 = (uint32_t *)*v36;
        if ( v58 == (uint32_t **)(uintptr_t)(v36) )
          goto LABEL_54;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v39 = *(uint32_t *)(v37 + 4);
          _mm_mfence();
          if ( v39 != 2 )
            break;
          if ( *(uint16_t *)(v37 + 32) == 0xFFFF )
            goto LABEL_52;
          glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v37);
        }
        if ( v39 == 1 )
          break;
LABEL_52:
        if ( v39 == __sync_val_compare_and_swap((volatile int32_t *)(v37 + 4), v39, v39 - 1) )
          goto LABEL_53;
      }
      G4_VCALL<void>(v37, 4);
      v36 = (uint32_t *)*v36;
    }
    while ( v58 != (uint32_t **)(uintptr_t)(v36) );
LABEL_54:
    glitch::util::atlasTextures(
      (uint32_t *)(&v70),
      (glitch::video::ITexture::Self **)&v72,
      (int)(float)(v49 / *v68),
      (int)(float)(v48 / v68[1]));
    v40 = 0;
    v71 = v70;
    if ( v70 != 0 )
    {
      __sync_add_and_fetch((volatile int32_t *)(v70 + 4), 1u);
      v40 = v71;
    }
    v71 = v50[v51 + 1];
    v50[v51 + 1] = v40;
    sub_5ED480(&v71);
    sub_5ED480(&v70);
    if ( ++v51 != v63 )
    {
      v41 = (void ***)v72;
      if ( v72 != &v72 )
      {
LABEL_58:
        v42 = v41[2];
        v69 = *v41;
        if ( v42 == nullptr )
          goto LABEL_62;
        while ( 1 )
        {
          v43 = (int32_t)(uintptr_t)(v42[1]);
          _mm_mfence();
          if ( v43 == 2 )
          {
            if ( *((uint16_t *)v42 + 16) != 0xFFFF )
            {
              glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v42);
              continue;
            }
          }
          else if ( v43 == 1 )
          {
            (*((void (**)(void **))*v42 + 1))(v42);
LABEL_62:
            opDelete(v41);
            if ( v69 != &v72 )
            {
              v41 = (void ***)v69;
              goto LABEL_58;
            }
            goto LABEL_42;
          }
          if ( v43 == __sync_val_compare_and_swap((volatile int32_t *)v42 + 1, v43, v43 - 1) )
            goto LABEL_62;
        }
      }
      continue;
    }
    break;
  }
  v44 = (uint32_t *)(v72);
  if ( v72 != &v72 )
  {
    while ( 1 )
    {
      v45 = (void **)*v44;
      sub_5ED480(v44 + 2);
      opDelete(v44);
      if ( v45 == &v72 )
        break;
      v44 = (uint32_t *)(v45);
    }
  }
LABEL_22:
  opDeleteArray(v64);
  return v61;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::SStringPool::resolve  (binary VA: 0xcf93f0)
// Original: glitch::util::SStringPool::resolve
// ----------------------------------------------------------------------------
int glitch::util::SStringPool::resolve(__m128d a1, glitch::util::SStringPool::Self *self, volatile int32_t **a3, bool a4)
{
  unsigned int v4;
  unsigned int v5;
  glitch::util::SStringPool::Self *v6;
  int v7;
  uint32_t *v8;
  int *v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int *v13;
  unsigned int *v14;
  int v15;
  unsigned int **v16;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v17;
  int v18;
  volatile int32_t *v19;
  bool v20;
  glitch::util::SStringPool::Self *v21;
  unsigned int v23;
  unsigned int v24;
  glitch::util::SStringPool::Self *v25;
  int v26;
  int *v27;
  int v28;
  unsigned int v29;
  int v30;
  unsigned int *v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int *v36;

  if ( !a4 )
  {
    if ( *a3 != nullptr )
    {
      v34 = (unsigned int)(uintptr_t)(*a3 + 1);
      v23 = v34 + (v34 >> 3);
      v24 = *((uint32_t *)self + 2);
      v25 = self;
      v26 = v23 % v24;
    }
    else
    {
      v26 = 0;
      v23 = 0;
      v34 = 0;
      v25 = self;
      v24 = *((uint32_t *)self + 2);
    }
    v8 = nullptr;
    if ( *((uint32_t *)v25 + 3) != 0 )
    {
      v27 = *(int **)(*((uint32_t *)v25 + 6) + 4 * v26);
      if ( v27 != nullptr )
      {
        v28 = *v27;
        if ( v28 != 0 )
          v8 = (uint32_t *)(v28 - 8);
      }
    }
    while ( 1 )
    {
      if ( v8 == nullptr )
        return -1;
      v29 = v8[3];
      if ( v29 == v23 )
      {
        if ( v34 == *v8 )
          return v8[1];
        v30 = v8[2];
        if ( v30 == 0 )
          return -1;
      }
      else
      {
        if ( v26 != v29 % v24 )
          return -1;
        v30 = v8[2];
        if ( v30 == 0 )
          return -1;
      }
      v8 = (uint32_t *)(v30 - 8);
    }
  }
  v35 = *(uint32_t *)self;
  if ( *a3 != nullptr )
  {
    v32 = (unsigned int)(uintptr_t)(*a3 + 1);
    v4 = v32 + (v32 >> 3);
    v5 = *((uint32_t *)self + 2);
    v6 = self;
    v7 = v4 % v5;
  }
  else
  {
    v7 = 0;
    v4 = 0;
    v32 = 0;
    v6 = self;
    v5 = *((uint32_t *)self + 2);
  }
  v8 = nullptr;
  if ( *((uint32_t *)v6 + 3) != 0 )
  {
    v9 = *(int **)(*((uint32_t *)v6 + 6) + 4 * v7);
    if ( v9 != nullptr )
    {
      v10 = *v9;
      if ( v10 != 0 )
        v8 = (uint32_t *)(v10 - 8);
    }
  }
  while ( v8 != nullptr )
  {
    v11 = v8[3];
    if ( v11 == v4 )
    {
      if ( v32 == *v8 )
        return v8[1];
    }
    else if ( v11 % v5 != v7 )
    {
      break;
    }
    v12 = v8[2];
    if ( v12 == 0 )
      break;
    v8 = (uint32_t *)(v12 - 8);
  }
  v13 = (unsigned int *)opNew(0x10u);
  v14 = v13;
  if ( v13 != nullptr )
  {
    v13[2] = 0;
    *v13 = v32;
    v13[3] = 0;
    v13[1] = v35;
  }
  boost::unordered::detail::table_unordered_map_allocator_8b88b3::reserve_for_insert(
    a1,
    (glitch::util::SStringPool::Self *)((char *)self + 4),
    (uint32_t *)(*((uint32_t *)self + 3) + 1));
  v14[3] = v4;
  v33 = *((uint32_t *)self + 2);
  v15 = *((uint32_t *)self + 6);
  v16 = (unsigned int **)(v15 + 4 * (v4 % v33));
  if ( *v16 != nullptr )
  {
    v14[2] = **v16;
    **v16 = (unsigned int)(uintptr_t)(v14 + 2);
  }
  else
  {
    v36 = v14 + 2;
    v31 = (unsigned int *)(v15 + 4 * v33);
    if ( *v31 != 0 )
      *(uint32_t *)(v15 + 4 * (*(uint32_t *)(*v31 + 4) % v33)) = (uint32_t)(uintptr_t)(v36);
    *v16 = v31;
    v14[2] = *v31;
    *v31 = (unsigned int)(uintptr_t)(v36);
  }
  ++*((uint32_t *)self + 3);
  v17 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)self + 8);
  if ( v17 == *((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)self + 9) )
  {
    g4_std::vector_SSharedString_9ffb5c::M_insert_aux((int *)self + 7, v17, a3);
    v21 = self;
  }
  else
  {
    v18 = 0;
    if ( v17 != nullptr )
    {
      v19 = *a3;
      v20 = *a3 == nullptr;
      *v17 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)*a3;
      if ( !v20 )
        __sync_add_and_fetch(v19, 1u);
      v18 = *((uint32_t *)self + 8);
    }
    v21 = self;
    *((uint32_t *)self + 8) = v18 + 4;
  }
  return (*(uint32_t *)v21)++;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::SMagicReverseSortPolicy_util_SDimensionArrayId_c651dc::rectangleSort  (binary VA: 0xefa900)
// Original: glitch::util::SMagicReverseSortPolicy<glitch::util::SDimensionArrayId>::rectangleSort
// ----------------------------------------------------------------------------
bool glitch::util::SMagicReverseSortPolicy_util_SDimensionArrayId_c651dc::rectangleSort(uint32_t *a1, uint32_t *a2)
{
  return a1[1] * *a1 > a2[1] * *a2;
}

// ----------------------------------------------------------------------------
// Function: glitch::util::CFastRectanglePacker::findCoords  (binary VA: 0xf11190)
// Original: glitch::util::CFastRectanglePacker::findCoords
// ----------------------------------------------------------------------------
int * glitch::util::CFastRectanglePacker::findCoords(int a1, uint32_t *a2, int a3, int a4)
{
  uint32_t *v5;
  int *result;
  int *i;
  int *v8;
  int *v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  int v23;
  uint32_t *v24;
  uint32_t *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  uint32_t *v35;
  int v36;
  int v37;
  int *v38;

  v5 = a2;
  v37 = a1 + 28;
  while ( 1 )
  {
    result = (int *)v5[4];
    if ( result != nullptr )
      break;
LABEL_60:
    v22 = v5;
    if ( *((uint8_t *)v5 + 24) != 0 )
      return result;
    v36 = *v5;
    if ( *v5 < a3 )
      return result;
    v23 = v5[1];
    if ( v23 < a4 )
      return result;
    if ( v36 == a3 && v23 == a4 )
    {
      *((uint8_t *)v22 + 24) = 1;
      return (int *)(v22);
    }
    v24 = *(uint32_t **)(a1 + 28);
    if ( v24 != nullptr )
    {
      *(uint32_t *)(a1 + 28) = *v24;
    }
    else
    {
      v34 = a4;
      v24 = sub_609270(v37);
      a4 = v34;
    }
    *v24 = *a2;
    v24[1] = a2[1];
    v24[2] = a2[2];
    v24[3] = a2[3];
    v24[4] = a2[4];
    v24[5] = a2[5];
    v24[6] = a2[6];
    v24[4] = 0;
    v24[5] = 0;
    a2[4] = (uint32_t)(uintptr_t)(v24);
    v25 = *(uint32_t **)(a1 + 28);
    if ( v25 != nullptr )
    {
      *(uint32_t *)(a1 + 28) = *v25;
    }
    else
    {
      v33 = a4;
      v25 = sub_609270(v37);
      a4 = v33;
    }
    *v25 = *a2;
    v25[1] = a2[1];
    v25[2] = a2[2];
    v25[3] = a2[3];
    v25[4] = a2[4];
    v25[5] = a2[5];
    v25[6] = a2[6];
    v25[4] = 0;
    v25[5] = 0;
    a2[5] = (uint32_t)(uintptr_t)(v25);
    if ( *a2 - a3 <= a2[1] - a4 )
    {
      *(uint32_t *)(a2[4] + 4) = a4;
      *(uint32_t *)(a2[5] + 12) = a2[3] + a4;
      *(uint32_t *)(a2[5] + 4) = a2[1] - a4;
    }
    else
    {
      *(uint32_t *)a2[4] = a3;
      *(uint32_t *)(a2[5] + 8) = a3 + a2[2];
      *(uint32_t *)a2[5] = *a2 - a3;
    }
    a2 = (uint32_t *)a2[4];
    v5 = a2;
  }
LABEL_3:
  v38 = result;
  for ( i = result; ; v38 = i )
  {
    v8 = (int *)i[4];
    v35 = (uint32_t *)(v8);
    if ( v8 != nullptr )
      break;
LABEL_43:
    if ( *((uint8_t *)v38 + 24) != 0 || a3 > *v38 || (v9 = v38, v19 = v38[1], a4 > v19) )
    {
      v5 = (uint32_t *)a2[5];
      a2 = v5;
      result = (int *)v5[4];
      if ( result != nullptr )
        goto LABEL_3;
      goto LABEL_60;
    }
    if ( a3 == *v38 )
    {
      if ( a4 == v19 )
      {
LABEL_22:
        *((uint8_t *)v9 + 24) = 1;
        return v9;
      }
      v20 = *(uint32_t **)(a1 + 28);
      if ( v20 != nullptr )
      {
LABEL_48:
        *(uint32_t *)(a1 + 28) = *v20;
        goto LABEL_49;
      }
    }
    else
    {
      v20 = *(uint32_t **)(a1 + 28);
      if ( v20 != nullptr )
        goto LABEL_48;
    }
    v31 = a4;
    v20 = sub_609270(v37);
    a4 = v31;
LABEL_49:
    *v20 = *v38;
    v20[1] = v38[1];
    v20[2] = v38[2];
    v20[3] = v38[3];
    v20[4] = v38[4];
    v20[5] = v38[5];
    v20[6] = v38[6];
    v20[4] = 0;
    v20[5] = 0;
    v38[4] = (int)(uintptr_t)(v20);
    v21 = *(uint32_t **)(a1 + 28);
    if ( v21 != nullptr )
    {
      *(uint32_t *)(a1 + 28) = *v21;
    }
    else
    {
      v32 = a4;
      v21 = sub_609270(v37);
      a4 = v32;
    }
    *v21 = *v38;
    v21[1] = v38[1];
    v21[2] = v38[2];
    v21[3] = v38[3];
    v21[4] = v38[4];
    v21[5] = v38[5];
    v21[6] = v38[6];
    v21[4] = 0;
    v21[5] = 0;
    v38[5] = (int)(uintptr_t)(v21);
    if ( *v38 - a3 <= v38[1] - a4 )
    {
      *(uint32_t *)(v38[4] + 4) = a4;
      *(uint32_t *)(v38[5] + 12) = v38[3] + a4;
      *(uint32_t *)(v38[5] + 4) = v38[1] - a4;
    }
    else
    {
      *(uint32_t *)v38[4] = a3;
      *(uint32_t *)(v38[5] + 8) = a3 + v38[2];
      *(uint32_t *)v38[5] = *v38 - a3;
    }
    i = (int *)v38[4];
  }
  while ( 1 )
  {
    v9 = (int *)v8[4];
    if ( v9 != nullptr )
      break;
LABEL_25:
    if ( *((uint8_t *)v8 + 24) == 0 )
    {
      v15 = *v8;
      if ( a3 <= *v8 )
      {
        v9 = v8;
        v16 = v8[1];
        if ( a4 <= v16 )
        {
          if ( a3 == v15 )
          {
            if ( a4 == v16 )
              goto LABEL_22;
            v17 = *(uint32_t **)(a1 + 28);
            if ( v17 == nullptr )
              goto LABEL_41;
LABEL_30:
            *(uint32_t *)(a1 + 28) = *v17;
          }
          else
          {
            v17 = *(uint32_t **)(a1 + 28);
            if ( v17 != nullptr )
              goto LABEL_30;
LABEL_41:
            v29 = a4;
            v17 = sub_609270(v37);
            a4 = v29;
          }
          *v17 = *v35;
          v17[1] = v35[1];
          v17[2] = v35[2];
          v17[3] = v35[3];
          v17[4] = v35[4];
          v17[5] = v35[5];
          v17[6] = v35[6];
          v17[4] = 0;
          v17[5] = 0;
          v35[4] = (uint32_t)(uintptr_t)(v17);
          v18 = *(uint32_t **)(a1 + 28);
          if ( v18 != nullptr )
          {
            *(uint32_t *)(a1 + 28) = *v18;
          }
          else
          {
            v30 = a4;
            v18 = sub_609270(v37);
            a4 = v30;
          }
          *v18 = *v35;
          v18[1] = v35[1];
          v18[2] = v35[2];
          v18[3] = v35[3];
          v18[4] = v35[4];
          v18[5] = v35[5];
          v18[6] = v35[6];
          v18[4] = 0;
          v18[5] = 0;
          v35[5] = (uint32_t)(uintptr_t)(v18);
          if ( *v35 - a3 <= v35[1] - a4 )
          {
            *(uint32_t *)(v35[4] + 4) = a4;
            *(uint32_t *)(v35[5] + 12) = v35[3] + a4;
            *(uint32_t *)(v35[5] + 4) = v35[1] - a4;
          }
          else
          {
            *(uint32_t *)v35[4] = a3;
            *(uint32_t *)(v35[5] + 8) = a3 + v35[2];
            *(uint32_t *)v35[5] = *v35 - a3;
          }
          v8 = (int *)v35[4];
          v35 = (uint32_t *)(v8);
          continue;
        }
      }
    }
    v38 = (int *)v38[5];
    v8 = (int *)v38[4];
    v35 = (uint32_t *)(v8);
    if ( v8 == nullptr )
      goto LABEL_43;
  }
  while ( 1 )
  {
    v10 = v9[4];
    if ( v10 != 0 )
      break;
LABEL_9:
    if ( *((uint8_t *)v9 + 24) != 0 || a3 > *v9 || (v11 = v9[1], a4 > v11) )
    {
      v8 = (int *)v35[5];
      v35 = (uint32_t *)(v8);
      v9 = (int *)v8[4];
      if ( v9 == nullptr )
        goto LABEL_25;
    }
    else
    {
      if ( a3 == *v9 && a4 == v11 )
        goto LABEL_22;
      v12 = *(uint32_t **)(a1 + 28);
      if ( v12 != nullptr )
      {
        *(uint32_t *)(a1 + 28) = *v12;
      }
      else
      {
        v28 = a4;
        v12 = sub_609270(v37);
        a4 = v28;
      }
      *v12 = *v9;
      v12[1] = v9[1];
      v12[2] = v9[2];
      v12[3] = v9[3];
      v12[4] = v9[4];
      v12[5] = v9[5];
      v12[6] = v9[6];
      v12[4] = 0;
      v12[5] = 0;
      v9[4] = (int)(uintptr_t)(v12);
      v13 = *(uint32_t **)(a1 + 28);
      if ( v13 != nullptr )
      {
        *(uint32_t *)(a1 + 28) = *v13;
      }
      else
      {
        v27 = a4;
        v13 = sub_609270(v37);
        a4 = v27;
      }
      *v13 = *v9;
      v13[1] = v9[1];
      v13[2] = v9[2];
      v13[3] = v9[3];
      v13[4] = v9[4];
      v13[5] = v9[5];
      v13[6] = v9[6];
      v13[4] = 0;
      v13[5] = 0;
      v9[5] = (int)(uintptr_t)(v13);
      v14 = (uint32_t *)v9[4];
      if ( *v9 - a3 <= v9[1] - a4 )
      {
        v14[1] = a4;
        *(uint32_t *)(v9[5] + 12) = a4 + v9[3];
        *(uint32_t *)(v9[5] + 4) = v9[1] - a4;
      }
      else
      {
        *v14 = a3;
        *(uint32_t *)(v9[5] + 8) = a3 + v9[2];
        *(uint32_t *)v9[5] = *v9 - a3;
      }
      v9 = (int *)v9[4];
    }
  }
  while ( 1 )
  {
    v26 = a4;
    result = (int *)glitch::util::CFastRectanglePacker::findCoords(a1, (uint32_t *)(uintptr_t)(v10), a3, a4);
    a4 = v26;
    if ( result != nullptr )
      return result;
    v9 = (int *)v9[5];
    v10 = v9[4];
    if ( v10 == 0 )
      goto LABEL_9;
  }
}


