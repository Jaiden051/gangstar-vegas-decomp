#include "Core/Utils/DecompTypes.h"
#include "vox_RandomGroup.h"

// ----------------------------------------------------------------------------
// Function: vox::RandomGroup::GetState  (binary VA: 0xff11e0)
// Original: vox::RandomGroup::GetState
// ----------------------------------------------------------------------------
uint32_t * vox::RandomGroup::GetState(uint32_t *a1, uint32_t *a2)
{
  *a2 = a1[4];
  a2[1] = a1[5];
  a2[2] = a1[19];
  a2[3] = a1[20];
  a2[4] = a1[22];
  a2[9] = (uint32_t)(uintptr_t)(a1 + 8);
  a2[10] = (uint32_t)(uintptr_t)(a1 + 11);
  a2[5] = a1[6];
  a2[6] = a1[7];
  a2[7] = a1[23];
  a2[8] = a1[24];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: vox::RandomGroup::PeekAtNextGroupElement  (binary VA: 0xff14c0)
// Original: vox::RandomGroup::PeekAtNextGroupElement
// ----------------------------------------------------------------------------
int vox::RandomGroup::PeekAtNextGroupElement(uint32_t *a1, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  result = -1;
  if ( a1[5] != 0 )
  {
    if ( a2 == 1 )
    {
      v4 = a1[13];
      v5 = (a1[14] - v4) >> 3;
      if ( v5 > 0 )
      {
        v6 = a1[25] % a1[21];
        v7 = *(uint32_t *)(v4 + 4);
        v8 = 0;
        if ( v6 >= v7 )
        {
          while ( ++v8 != v5 )
          {
            v9 = (uint32_t *)(v4 + 8 * v8);
            v7 += v9[1];
            if ( v6 < v7 )
              return *v9;
          }
          return -1;
        }
        else
        {
          v9 = (uint32_t *)a1[13];
          return *v9;
        }
      }
    }
    else if ( a1[4] != 0 )
    {
      v3 = a1[19];
      if ( v3 >= 0 )
        return *(uint32_t *)(a1[8] + 8 * v3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::RandomGroup::Destroy  (binary VA: 0xff1580)
// Original: vox::RandomGroup::~RandomGroup
// ----------------------------------------------------------------------------
void vox::RandomGroup::Destroy(vox::RandomGroup::Self *self)
{
  char *v1;
  char *v2;
  char *v3;
  char *v4;
  char *v5;
  vox::SegmentGroup::Self *v6;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D128);
  v1 = (char *)self + 44;
  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v2 = *((char **)self + 11);
  *((uint32_t *)self + 9) = *((uint32_t *)self + 8);
  if ( v2 != (char *)self + 44 )
  {
    while ( 1 )
    {
      v3 = *(char **)v2;
      VoxFreeInternal(v2);
      if ( v3 == v1 )
        break;
      v2 = v3;
    }
  }
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(v1);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v1);
  sub_BA06B0();
  if ( *((uint32_t *)self + 13) != 0 )
    VoxFreeInternal(*((void **)self + 13));
  v4 = *((char **)self + 11);
  if ( v4 != v1 )
  {
    while ( 1 )
    {
      v5 = *(char **)v4;
      VoxFreeInternal(v4);
      if ( v5 == v1 )
        break;
      v4 = v5;
    }
  }
  if ( *((uint32_t *)self + 8) != 0 )
    VoxFreeInternal(*((void **)self + 8));
  vox::SegmentGroup::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: vox::RandomGroup::Destroy_eaff1650  (binary VA: 0xff1650)
// Original: vox::RandomGroup::~RandomGroup
// ----------------------------------------------------------------------------
void vox::RandomGroup::Destroy_eaff1650(vox::RandomGroup::Self *self)
{
  vox::RandomGroup::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::RandomGroup::SetState  (binary VA: 0xff1690)
// Original: vox::RandomGroup::SetState
// ----------------------------------------------------------------------------
void vox::RandomGroup::SetState(void **self, vox::RandomGroup::Self *a2)
{
  void **v2;
  vox::RandomGroup::Self **v3;
  vox::RandomGroup::Self *v4;
  uint32_t *v5;
  char *v6;
  int v7;
  uint32_t *v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  uint32_t *v12;
  char *v13;
  uint32_t *v14;
  char *v15;
  uint32_t *v16;
  vox::VoxThread::Self *v17;
  char *v18;
  int v19;
  char *v20;
  unsigned int v21;
  char *v22;
  char *v23;
  unsigned int v24;
  uint32_t *v25;
  int v26;

  v2 = self;
  vox::VoxThread::GetCurThreadId(v17);
  sub_BA06A0();
  vox::SegmentGroup::SetState((vox::SegmentGroup::Self *)self, a2);
  *(self + 9) = *(self + 8);
  v3 = (vox::RandomGroup::Self **)*(self + 11);
  v20 = (char *)(self + 11);
  if ( v3 != (vox::RandomGroup::Self **)(self + 11) )
  {
    while ( 1 )
    {
      v4 = *v3;
      VoxFreeInternal(v3);
      if ( v4 == (vox::RandomGroup::Self *)(self + 11) )
        break;
      v3 = (vox::RandomGroup::Self **)v4;
    }
  }
  *(self + 11) = v20;
  *(self + 12) = v20;
  v5 = *((uint32_t **)a2 + 8);
  if ( v5 != *((uint32_t **)a2 + 9) )
  {
    v6 = (char *)*(self + 9);
    v25 = *((uint32_t **)a2 + 9);
    do
    {
      if ( *(self + 10) == v6 )
      {
        v10 = (v6 - (char *)((uint8_t *)*(self + 8))) >> 3;
        v11 = 1;
        v21 = v10;
        if ( v10 != 0 && ((v11 = 2 * v10, v10 > 2 * v10) || v11 > 0x1FFFFFFF) )
          v26 = -8;
        else
          v26 = 8 * v11;
        v18 = (char *)*(self + 10);
        v19 = VoxAllocInternal(v26, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        v24 = v19 + 8;
        v12 = (uint32_t *)(v19 + 8 * v21);
        if ( v12 != nullptr )
        {
          *v12 = *v5;
          v12[1] = v5[1];
        }
        v22 = (char *)*(self + 8);
        if ( v18 != v22 )
        {
          v13 = (char *)*(self + 8);
          v14 = (uint32_t *)v19;
          do
          {
            if ( v14 != nullptr )
            {
              *v14 = *(uint32_t *)v13;
              v14[1] = *((uint32_t *)v13 + 1);
            }
            v13 += 8;
            v14 += 2;
          }
          while ( v18 != v13 );
          v24 = v19 + 8 * ((unsigned int)(v18 - (v22 + 8)) >> 3) + 16;
        }
        v23 = (char *)*(self + 9);
        if ( v23 == v6 )
        {
          v6 = (char *)v24;
        }
        else
        {
          v15 = v6;
          v16 = (uint32_t *)v24;
          do
          {
            if ( v16 != nullptr )
            {
              *v16 = *(uint32_t *)v15;
              v16[1] = *((uint32_t *)v15 + 1);
            }
            v15 += 8;
            v16 += 2;
          }
          while ( v23 != v15 );
          v6 = (char *)(v24 + 8 * ((unsigned int)(v23 - (v6 + 8)) >> 3) + 8);
        }
        if ( *(self + 8) != nullptr )
          VoxFreeInternal(*(self + 8));
        *(self + 9) = v6;
        *(self + 8) = (void *)v19;
        *(self + 10) = (void *)(v26 + v19);
      }
      else
      {
        v7 = 0;
        if ( v6 != nullptr )
        {
          *(uint32_t *)v6 = *v5;
          *((uint32_t *)v6 + 1) = v5[1];
          v7 = (int)(uintptr_t)(*(self + 9));
        }
        v6 = (char *)(v7 + 8);
        *(self + 9) = (void *)(v7 + 8);
      }
      v5 += 2;
    }
    while ( v25 != v5 );
  }
  v8 = *((uint32_t **)a2 + 11);
  if ( v8 != (uint32_t *)((char *)a2 + 44) )
  {
    do
    {
      v9 = VoxAllocInternal(0x10u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      if ( v9 != -8 )
      {
        *(uint32_t *)(v9 + 8) = v8[2];
        *(uint32_t *)(v9 + 12) = v8[3];
      }
      sub_1901920(v9, v20);
      v8 = (uint32_t *)*v8;
    }
    while ( (uint32_t *)((char *)a2 + 44) != v8 );
    v2 = self;
  }
  v2[18] = *((void **)a2 + 18);
  v2[17] = *((void **)a2 + 17);
  v2[20] = *((void **)a2 + 20);
  v2[22] = *((void **)a2 + 22);
  v2[24] = *((void **)a2 + 24);
  v2[19] = *((void **)a2 + 19);
  v2[23] = *((void **)a2 + 23);
  v2[26] = *((void **)a2 + 26);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::RandomGroup::SetState  (binary VA: 0xff19b0)
// Original: vox::RandomGroup::SetState
// ----------------------------------------------------------------------------
void vox::RandomGroup::SetState(uint32_t *a1, uint32_t *a2)
{
  char *v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  unsigned int v12;
  uint32_t *v13;
  uint32_t *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  void *v18;
  vox::VoxThread::Self *v19;
  uint32_t *v20;
  int v21;
  uint32_t *v22;
  int v23;
  char *v24;
  char *v25;
  unsigned int v26;
  uint32_t *v27;

  vox::VoxThread::GetCurThreadId(v19);
  sub_BA06A0();
  v2 = (char *)a1[8];
  a1[4] = *a2;
  a1[5] = a2[1];
  a1[19] = a2[2];
  a1[20] = a2[3];
  a1[22] = a2[4];
  a1[6] = a2[5];
  a1[7] = a2[6];
  a1[23] = a2[7];
  a1[24] = a2[8];
  a1[9] = (uint32_t)(uintptr_t)(v2);
  v3 = a2[9];
  v4 = *(uint32_t **)v3;
  v5 = *(uint32_t **)(v3 + 4);
  if ( *(uint32_t **)v3 != v5 )
  {
    do
    {
      if ( (char *)a1[10] == v2 )
      {
        v12 = (int)(uintptr_t)(&v2[-a1[8]]) >> 3;
        v23 = 2;
        if ( v12 != 0 )
        {
          if ( v12 > 2 * v12 || 2 * v12 > 0x1FFFFFFF )
            v23 = -2;
          else
            v23 = 4 * v12;
        }
        v20 = v5;
        v21 = (int)(uintptr_t)(&v2[-a1[8]]) >> 3;
        v13 = (uint32_t *)VoxAllocInternal(
                          v23 * 4,
                          0,
                          (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                          (int)(uintptr_t)("internal_new"),
                          181);
        v27 = v13;
        v26 = (unsigned int)(uintptr_t)(v13 + 2);
        v5 = v20;
        v14 = &v13[2 * v21];
        if ( v14 != nullptr )
        {
          *v14 = *v4;
          v13[2 * v21 + 1] = v4[1];
        }
        v15 = (char *)a1[8];
        v24 = v15;
        if ( v15 != v2 )
        {
          do
          {
            if ( v13 != nullptr )
            {
              *v13 = *(uint32_t *)v15;
              v13[1] = *((uint32_t *)v15 + 1);
            }
            v15 += 8;
            v13 += 2;
          }
          while ( v15 != v2 );
          v26 = (unsigned int)(uintptr_t)(&v27[2 * ((unsigned int)(v2 - (v24 + 8)) >> 3) + 4]);
        }
        v25 = (char *)a1[9];
        if ( v25 == v2 )
        {
          v2 = (char *)v26;
        }
        else
        {
          v16 = v2;
          v17 = (uint32_t *)v26;
          do
          {
            if ( v17 != nullptr )
            {
              *v17 = *(uint32_t *)v16;
              v17[1] = *((uint32_t *)v16 + 1);
            }
            v16 += 8;
            v17 += 2;
          }
          while ( v25 != v16 );
          v2 = (char *)(v26 + 8 * ((unsigned int)(v25 - (v2 + 8)) >> 3) + 8);
        }
        v18 = (void *)a1[8];
        if ( v18 != nullptr )
        {
          VoxFreeInternal(v18);
          v5 = v20;
        }
        a1[9] = (uint32_t)(uintptr_t)(v2);
        a1[8] = (uint32_t)(uintptr_t)(v27);
        a1[10] = (uint32_t)(uintptr_t)(&v27[v23]);
      }
      else
      {
        v6 = 0;
        if ( v2 != nullptr )
        {
          *(uint32_t *)v2 = *v4;
          *((uint32_t *)v2 + 1) = v4[1];
          v6 = a1[9];
        }
        v2 = (char *)(v6 + 8);
        a1[9] = v6 + 8;
      }
      v4 += 2;
    }
    while ( v5 != v4 );
  }
  v7 = (uint32_t *)a1[11];
  v8 = a1 + 11;
  if ( a1 + 11 != v7 )
  {
    while ( 1 )
    {
      v9 = (uint32_t *)*v7;
      VoxFreeInternal(v7);
      if ( v8 == v9 )
        break;
      v7 = v9;
    }
  }
  a1[11] = (uint32_t)(uintptr_t)(v8);
  a1[12] = (uint32_t)(uintptr_t)(v8);
  v22 = (uint32_t *)a2[10];
  v10 = (uint32_t *)*v22;
  if ( (uint32_t *)*v22 != v22 )
  {
    do
    {
      v11 = VoxAllocInternal(0x10u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      if ( v11 != -8 )
      {
        *(uint32_t *)(v11 + 8) = v10[2];
        *(uint32_t *)(v11 + 12) = v10[3];
      }
      sub_1901920(v11, a1 + 11);
      v10 = (uint32_t *)*v10;
    }
    while ( v22 != v10 );
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::RandomGroup::SetToPreviousState  (binary VA: 0xff1ca0)
// Original: vox::RandomGroup::SetToPreviousState
// ----------------------------------------------------------------------------
void vox::RandomGroup::SetToPreviousState(vox::RandomGroup::Self *self)
{
  char *v1;
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  char *v9;
  unsigned int v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  uint32_t *v15;
  char *v16;
  int v17;
  vox::VoxThread::Self *v18;
  int v19;
  int v20;
  int v21;
  size_t v22;
  int v23;
  uint32_t *v24;

  vox::VoxThread::GetCurThreadId(v18);
  sub_BA06A0();
  *((uint32_t *)self + 4) = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = *((uint32_t *)self + 7);
  *((uint32_t *)self + 19) = *((uint32_t *)self + 23);
  *((uint32_t *)self + 22) = *((uint32_t *)self + 24);
  if ( *((int *)self + 17) > 0 )
  {
    v1 = *((char **)self + 9);
    if ( *((uint32_t *)self + 26) != 0 )
    {
      v5 = *((uint32_t *)v1 - 2);
      v6 = *((uint32_t *)v1 - 1);
      v1 -= 8;
      v21 = v5;
      v20 = v6;
      *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v1);
      *((uint32_t *)self + 20) -= v6;
    }
    v2 = *((uint32_t **)self + 12);
    if ( *((char **)self + 10) == v1 )
    {
      v22 = 8;
      v7 = (int)(uintptr_t)(&v1[-*((uint32_t *)self + 8)]) >> 3;
      if ( v7 != 0 )
      {
        v22 = 0xFFFFFFF8;
        if ( v7 <= 2 * v7 )
        {
          v17 = 16 * v7;
          if ( 2 * v7 > 0x1FFFFFFF )
            v17 = -8;
          v22 = v17;
        }
      }
      v19 = (int)(uintptr_t)(&v1[-*((uint32_t *)self + 8)]) >> 3;
      v23 = VoxAllocInternal(v22, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      v8 = (uint32_t *)(v23 + 8 * v19);
      if ( v8 != nullptr )
      {
        *v8 = v2[2];
        v8[1] = v2[3];
      }
      v9 = *((char **)self + 8);
      v10 = v23;
      if ( v9 != v1 )
      {
        v11 = (uint32_t *)v23;
        v12 = *((char **)self + 8);
        do
        {
          if ( v11 != nullptr )
          {
            *v11 = *(uint32_t *)v12;
            v11[1] = *((uint32_t *)v12 + 1);
          }
          v12 += 8;
          v11 += 2;
        }
        while ( v12 != v1 );
        v10 = v23 + 8 * ((unsigned int)(v1 - (v9 + 8)) >> 3) + 8;
      }
      v13 = *((char **)self + 9);
      v14 = (uint32_t *)(v10 + 8);
      v24 = v14;
      if ( v13 != v1 )
      {
        v15 = v14;
        v16 = v1;
        do
        {
          if ( v15 != nullptr )
          {
            *v15 = *(uint32_t *)v16;
            v15[1] = *((uint32_t *)v16 + 1);
          }
          v16 += 8;
          v15 += 2;
        }
        while ( v13 != v16 );
        v24 += 2 * ((unsigned int)(v13 - (v1 + 8)) >> 3) + 2;
      }
      if ( *((uint32_t *)self + 8) != 0 )
        VoxFreeInternal(*((void **)self + 8));
      *((uint32_t *)self + 8) = v23;
      *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v24);
      *((uint32_t *)self + 10) = v22 + v23;
      v2 = *((uint32_t **)self + 12);
    }
    else
    {
      v3 = 0;
      if ( v1 != nullptr )
      {
        *(uint32_t *)v1 = v2[2];
        *((uint32_t *)v1 + 1) = v2[3];
        v3 = *((uint32_t *)self + 9);
        v2 = *((uint32_t **)self + 12);
      }
      *((uint32_t *)self + 9) = v3 + 8;
    }
    *((uint32_t *)self + 20) += v2[3];
    sub_1901940(v2);
    VoxFreeInternal(v2);
    if ( *((uint32_t *)self + 26) != 0 )
    {
      v4 = VoxAllocInternal(0x10u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      if ( v4 != -8 )
      {
        *(uint32_t *)(v4 + 8) = v21;
        *(uint32_t *)(v4 + 12) = v20;
      }
      sub_1901920(v4, (char *)self + 44);
    }
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::RandomGroup::Construct  (binary VA: 0xff2060)
// Original: vox::RandomGroup::RandomGroup
// ----------------------------------------------------------------------------
int vox::RandomGroup::Construct(uint32_t *a1, uint32_t *a2)
{
  int result;

  vox::SegmentGroup::Construct(a1, a2);
  a1[8] = 0;
  a1[9] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_208D128);
  a1[10] = 0;
  a1[13] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[16] = 0;
  a1[11] = (uint32_t)(uintptr_t)(a1 + 11);
  a1[12] = (uint32_t)(uintptr_t)(a1 + 11);
  result = a2[3];
  a1[18] = result;
  a1[17] = result;
  a1[20] = 0;
  a1[21] = 0;
  a1[26] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::RandomGroup::AddElement  (binary VA: 0xff2110)
// Original: vox::RandomGroup::AddElement
// ----------------------------------------------------------------------------
int vox::RandomGroup::AddElement(int a1, uint32_t *a2)
{
  char *v2;
  int v3;
  char *v4;
  int v5;
  bool v6;
  int v7;
  int result;
  int v9;
  unsigned int v10;
  uint32_t *v11;
  uint32_t *v12;
  char *v13;
  char *v14;
  uint32_t *v15;
  unsigned int v16;
  uint32_t *v17;
  char *v18;
  uint32_t *v19;
  char *v20;
  char *v21;
  uint32_t *v22;
  char *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  size_t v28;
  size_t v29;
  char *v30;
  uint32_t *v31;
  uint32_t *v32;
  int v33;
  int v34;
  char *v35;

  v2 = *(char **)(a1 + 36);
  if ( v2 == *(char **)(a1 + 40) )
  {
    v10 = (int)(uintptr_t)(&v2[-*(uint32_t *)(a1 + 32)]) >> 3;
    v28 = 8;
    if ( v10 != 0 )
    {
      v28 = 0xFFFFFFF8;
      if ( v10 <= 2 * v10 )
      {
        v24 = 16 * v10;
        if ( 2 * v10 > 0x1FFFFFFF )
          v24 = -8;
        v28 = v24;
      }
    }
    v26 = (int)(uintptr_t)(&v2[-*(uint32_t *)(a1 + 32)]) >> 3;
    v33 = VoxAllocInternal(v28, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    v11 = (uint32_t *)(v33 + 8 * v26);
    if ( v11 != nullptr )
    {
      *v11 = *a2;
      v11[1] = a2[1];
    }
    v30 = *(char **)(a1 + 32);
    v12 = (uint32_t *)v33;
    if ( v2 != v30 )
    {
      v13 = *(char **)(a1 + 32);
      do
      {
        if ( v12 != nullptr )
        {
          *v12 = *(uint32_t *)v13;
          v12[1] = *((uint32_t *)v13 + 1);
        }
        v13 += 8;
        v12 += 2;
      }
      while ( v2 != v13 );
      v12 = (uint32_t *)(v33 + 8 * ((unsigned int)(v2 - (v30 + 8)) >> 3) + 8);
    }
    v31 = v12 + 2;
    v35 = *(char **)(a1 + 36);
    if ( v2 != v35 )
    {
      v14 = v2;
      v15 = v12 + 2;
      do
      {
        if ( v15 != nullptr )
        {
          *v15 = *(uint32_t *)v14;
          v15[1] = *((uint32_t *)v14 + 1);
        }
        v14 += 8;
        v15 += 2;
      }
      while ( v35 != v14 );
      v31 += 2 * ((unsigned int)(v35 - (v2 + 8)) >> 3) + 2;
    }
    if ( *(uint32_t *)(a1 + 32) != 0 )
      VoxFreeInternal(*(void **)(a1 + 32));
    *(uint32_t *)(a1 + 32) = v33;
    *(uint32_t *)(a1 + 36) = (uint32_t)(uintptr_t)(v31);
    *(uint32_t *)(a1 + 40) = v28 + v33;
  }
  else
  {
    v3 = 0;
    if ( v2 != nullptr )
    {
      *(uint32_t *)v2 = *a2;
      *((uint32_t *)v2 + 1) = a2[1];
      v3 = *(uint32_t *)(a1 + 36);
    }
    *(uint32_t *)(a1 + 36) = v3 + 8;
  }
  v4 = *(char **)(a1 + 56);
  v5 = a2[1] + *(uint32_t *)(a1 + 80);
  ++*(uint32_t *)(a1 + 64);
  v6 = v4 == *(char **)(a1 + 60);
  *(uint32_t *)(a1 + 80) = v5;
  *(uint32_t *)(a1 + 84) = v5;
  if ( v6 )
  {
    v16 = (int)(uintptr_t)(&v4[-*(uint32_t *)(a1 + 52)]) >> 3;
    v29 = 8;
    if ( v16 != 0 )
    {
      v29 = 0xFFFFFFF8;
      if ( v16 <= 2 * v16 )
      {
        v25 = 16 * v16;
        if ( 2 * v16 > 0x1FFFFFFF )
          v25 = -8;
        v29 = v25;
      }
    }
    v27 = (int)(uintptr_t)(&v4[-*(uint32_t *)(a1 + 52)]) >> 3;
    v34 = VoxAllocInternal(v29, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    v17 = (uint32_t *)(v34 + 8 * v27);
    if ( v17 != nullptr )
    {
      *v17 = *a2;
      v17[1] = a2[1];
    }
    v18 = *(char **)(a1 + 52);
    v19 = (uint32_t *)v34;
    if ( v4 != v18 )
    {
      v20 = *(char **)(a1 + 52);
      do
      {
        if ( v19 != nullptr )
        {
          *v19 = *(uint32_t *)v20;
          v19[1] = *((uint32_t *)v20 + 1);
        }
        v20 += 8;
        v19 += 2;
      }
      while ( v4 != v20 );
      v19 = (uint32_t *)(v34 + 8 * ((unsigned int)(v4 - (v18 + 8)) >> 3) + 8);
    }
    v21 = *(char **)(a1 + 56);
    v22 = v19 + 2;
    v32 = v22;
    if ( v4 != v21 )
    {
      v23 = v4;
      do
      {
        if ( v22 != nullptr )
        {
          *v22 = *(uint32_t *)v23;
          v22[1] = *((uint32_t *)v23 + 1);
        }
        v23 += 8;
        v22 += 2;
      }
      while ( v21 != v23 );
      v32 += 2 * ((unsigned int)(v21 - (v4 + 8)) >> 3) + 2;
    }
    if ( *(uint32_t *)(a1 + 52) != 0 )
      VoxFreeInternal(*(void **)(a1 + 52));
    *(uint32_t *)(a1 + 52) = v34;
    *(uint32_t *)(a1 + 56) = (uint32_t)(uintptr_t)(v32);
    *(uint32_t *)(a1 + 60) = v29 + v34;
  }
  else
  {
    v7 = 0;
    if ( v4 != nullptr )
    {
      *(uint32_t *)v4 = *a2;
      *((uint32_t *)v4 + 1) = a2[1];
      v7 = *(uint32_t *)(a1 + 56);
    }
    *(uint32_t *)(a1 + 56) = v7 + 8;
  }
  result = *(uint32_t *)(a1 + 72);
  if ( result == -1 )
  {
    ++*(uint32_t *)(a1 + 68);
  }
  else
  {
    v9 = *(uint32_t *)(a1 + 64);
    if ( result >= v9 )
      *(uint32_t *)(a1 + 68) = v9 - 1;
    else
      *(uint32_t *)(a1 + 68) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::RandomGroup::GetActiveElementIndex  (binary VA: 0xff2460)
// Original: vox::RandomGroup::GetActiveElementIndex
// ----------------------------------------------------------------------------
int vox::RandomGroup::GetActiveElementIndex(vox::RandomGroup::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  vox::VoxThread::Self *v6;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v1 = *((uint32_t *)self + 8);
  v2 = (*((uint32_t *)self + 9) - v1) >> 3;
  if ( v2 <= 0 )
  {
    v3 = -1;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v4 += *(uint32_t *)(v1 + 8 * v3 + 4);
      if ( *((uint32_t *)self + 25) % *((uint32_t *)self + 20) < v4 )
        break;
      ++v3;
    }
    while ( v3 != v2 );
    *((uint32_t *)self + 25) = lrand48();
  }
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::RandomGroup::Reset  (binary VA: 0xff2500)
// Original: vox::RandomGroup::Reset
// ----------------------------------------------------------------------------
void vox::RandomGroup::Reset(vox::RandomGroup::Self *self, int a2)
{
  char *v2;
  char *v3;
  char *v4;
  uint32_t *v5;
  uint32_t *v6;
  char *v7;
  int v8;
  unsigned int v9;
  uint32_t *v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  void *v15;
  vox::VoxThread::Self *v16;
  uint32_t *v17;
  int v18;
  int v19;
  char *v20;
  char *v21;
  unsigned int v22;
  uint32_t *v23;

  vox::VoxThread::GetCurThreadId(v16);
  v2 = (char *)self + 44;
  sub_BA06A0();
  v3 = *((char **)self + 11);
  if ( v3 != (char *)self + 44 )
  {
    while ( 1 )
    {
      v4 = *(char **)v3;
      VoxFreeInternal(v3);
      if ( v4 == v2 )
        break;
      v3 = v4;
    }
  }
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(v2);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v2);
  v5 = *((uint32_t **)self + 14);
  v6 = *((uint32_t **)self + 13);
  v7 = *((char **)self + 8);
  for ( *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v7); v5 != v6; v6 += 2 )
  {
    if ( *((char **)self + 10) == v7 )
    {
      v9 = (int)(uintptr_t)(&v7[-*((uint32_t *)self + 8)]) >> 3;
      v19 = 2;
      if ( v9 != 0 )
      {
        if ( v9 > 2 * v9 || 2 * v9 > 0x1FFFFFFF )
          v19 = -2;
        else
          v19 = 4 * v9;
      }
      v17 = v5;
      v18 = (int)(uintptr_t)(&v7[-*((uint32_t *)self + 8)]) >> 3;
      v10 = (uint32_t *)VoxAllocInternal(
                        v19 * 4,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
      v23 = v10;
      v22 = (unsigned int)(uintptr_t)(v10 + 2);
      v5 = v17;
      v11 = &v10[2 * v18];
      if ( v11 != nullptr )
      {
        *v11 = *v6;
        v10[2 * v18 + 1] = v6[1];
      }
      v12 = *((char **)self + 8);
      v20 = v12;
      if ( v12 != v7 )
      {
        do
        {
          if ( v10 != nullptr )
          {
            *v10 = *(uint32_t *)v12;
            v10[1] = *((uint32_t *)v12 + 1);
          }
          v12 += 8;
          v10 += 2;
        }
        while ( v12 != v7 );
        v22 = (unsigned int)(uintptr_t)(&v23[2 * ((unsigned int)(v7 - (v20 + 8)) >> 3) + 4]);
      }
      v21 = *((char **)self + 9);
      if ( v21 == v7 )
      {
        v7 = (char *)v22;
      }
      else
      {
        v13 = v7;
        v14 = (uint32_t *)v22;
        do
        {
          if ( v14 != nullptr )
          {
            *v14 = *(uint32_t *)v13;
            v14[1] = *((uint32_t *)v13 + 1);
          }
          v13 += 8;
          v14 += 2;
        }
        while ( v21 != v13 );
        v7 = (char *)(v22 + 8 * ((unsigned int)(v21 - (v7 + 8)) >> 3) + 8);
      }
      v15 = *((void **)self + 8);
      if ( v15 != nullptr )
      {
        VoxFreeInternal(v15);
        v5 = v17;
      }
      *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v7);
      *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v23);
      *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&v23[v19]);
    }
    else
    {
      v8 = 0;
      if ( v7 != nullptr )
      {
        *(uint32_t *)v7 = *v6;
        *((uint32_t *)v7 + 1) = v6[1];
        v8 = *((uint32_t *)self + 9);
      }
      v7 = (char *)(v8 + 8);
      *((uint32_t *)self + 9) = v8 + 8;
    }
  }
  *((uint32_t *)self + 20) = *((uint32_t *)self + 21);
  *((uint32_t *)self + 6) = *((uint32_t *)self + 4);
  *((uint32_t *)self + 4) = *((uint32_t *)self + 2);
  *((uint32_t *)self + 24) = *((uint32_t *)self + 22);
  *((uint32_t *)self + 22) = *((uint32_t *)self + 16);
  *((uint32_t *)self + 23) = *((uint32_t *)self + 19);
  *((uint32_t *)self + 19) = vox::RandomGroup::GetActiveElementIndex(self);
  if ( a2 == 0 )
  {
    *((uint32_t *)self + 7) = *((uint32_t *)self + 5);
    *((uint32_t *)self + 5) = *((uint32_t *)self + 3);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::RandomGroup::Construct  (binary VA: 0xff2780)
// Original: vox::RandomGroup::RandomGroup
// ----------------------------------------------------------------------------
void vox::RandomGroup::Construct(char **self, vox::RandomGroup::Self *a2)
{
  vox::RandomGroup::Self *v2;
  uint32_t *v3;
  uint32_t *v4;
  char *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  char *v9;
  int v10;
  char *v11;
  unsigned int v12;
  char *v13;
  char *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  void *v18;
  unsigned int v19;
  char *v20;
  char *v21;
  char *v22;
  char *v23;
  uint32_t *v24;
  void *v25;
  vox::VoxThread::Self *v26;
  vox::RandomGroup::Self *v27;
  int v28;
  int v29;
  uint32_t *v30;
  uint32_t *v31;
  vox::RandomGroup::Self *v32;
  int v33;
  int v34;
  char *v35;
  char *v36;
  char *v37;
  char *v38;
  unsigned int v39;
  unsigned int v40;
  char *v41;
  char *v42;

  vox::SegmentGroup::Construct((vox::SegmentGroup::Self *)self, a2);
  *(self + 8) = nullptr;
  *(self + 9) = nullptr;
  *self = (char *)((uint32_t)(uintptr_t)&off_208D128);
  *(self + 10) = nullptr;
  *(self + 13) = nullptr;
  *(self + 11) = (char *)(self + 11);
  *(self + 12) = (char *)(self + 11);
  *(self + 14) = nullptr;
  *(self + 15) = nullptr;
  *(self + 16) = nullptr;
  vox::VoxThread::GetCurThreadId(v26);
  sub_BA06A0();
  v2 = a2;
  v3 = *((uint32_t **)a2 + 8);
  v4 = *((uint32_t **)a2 + 9);
  if ( v3 != v4 )
  {
    v5 = *(self + 9);
    do
    {
      if ( *(self + 10) == v5 )
      {
        v12 = (v5 - *(self + 8)) >> 3;
        v33 = 8;
        if ( v12 != 0 )
        {
          if ( v12 > 2 * v12 || 2 * v12 > 0x1FFFFFFF )
            v33 = -8;
          else
            v33 = 16 * v12;
        }
        v28 = (v5 - *(self + 8)) >> 3;
        v30 = v4;
        v13 = (char *)VoxAllocInternal(
                        v33,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
        v41 = v13;
        v39 = (unsigned int)(uintptr_t)(v13 + 8);
        v4 = v30;
        v14 = &v13[8 * v28];
        if ( v14 != nullptr )
        {
          *(uint32_t *)v14 = *v3;
          *(uint32_t *)&v13[8 * v28 + 4] = v3[1];
        }
        v15 = *(self + 8);
        v35 = v15;
        if ( v5 != v15 )
        {
          do
          {
            if ( v13 != nullptr )
            {
              *(uint32_t *)v13 = *(uint32_t *)v15;
              *((uint32_t *)v13 + 1) = *((uint32_t *)v15 + 1);
            }
            v15 += 8;
            v13 += 8;
          }
          while ( v5 != v15 );
          v39 = (unsigned int)(uintptr_t)(&v41[8 * ((unsigned int)(v5 - (v35 + 8)) >> 3) + 16]);
        }
        v36 = *(self + 9);
        if ( v5 == v36 )
        {
          v5 = (char *)v39;
        }
        else
        {
          v16 = v5;
          v17 = (uint32_t *)v39;
          do
          {
            if ( v17 != nullptr )
            {
              *v17 = *(uint32_t *)v16;
              v17[1] = *((uint32_t *)v16 + 1);
            }
            v16 += 8;
            v17 += 2;
          }
          while ( v36 != v16 );
          v5 = (char *)(v39 + 8 * ((unsigned int)(v36 - (v5 + 8)) >> 3) + 8);
        }
        v18 = *(self + 8);
        if ( v18 != nullptr )
        {
          VoxFreeInternal(v18);
          v4 = v30;
        }
        *(self + 9) = v5;
        *(self + 8) = v41;
        *(self + 10) = &v41[v33];
      }
      else
      {
        v6 = 0;
        if ( v5 != nullptr )
        {
          *(uint32_t *)v5 = *v3;
          *((uint32_t *)v5 + 1) = v3[1];
          v6 = (int)(uintptr_t)(*(self + 9));
        }
        v5 = (char *)(v6 + 8);
        *(self + 9) = (char *)(v6 + 8);
      }
      v3 += 2;
      ++*(self + 16);
    }
    while ( v4 != v3 );
    v2 = a2;
  }
  v7 = *((uint32_t **)v2 + 13);
  v8 = *((uint32_t **)v2 + 14);
  if ( v7 != v8 )
  {
    v9 = *(self + 14);
    v32 = v2;
    do
    {
      if ( v9 == *(self + 15) )
      {
        v19 = (v9 - *(self + 13)) >> 3;
        v34 = 8;
        if ( v19 != 0 )
        {
          if ( v19 > 2 * v19 || 2 * v19 > 0x1FFFFFFF )
            v34 = -8;
          else
            v34 = 16 * v19;
        }
        v29 = (v9 - *(self + 13)) >> 3;
        v31 = v8;
        v20 = (char *)VoxAllocInternal(
                        v34,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
        v42 = v20;
        v40 = (unsigned int)(uintptr_t)(v20 + 8);
        v8 = v31;
        v21 = &v20[8 * v29];
        if ( v21 != nullptr )
        {
          *(uint32_t *)v21 = *v7;
          *(uint32_t *)&v20[8 * v29 + 4] = v7[1];
        }
        v22 = *(self + 13);
        v37 = v22;
        if ( v9 != v22 )
        {
          do
          {
            if ( v20 != nullptr )
            {
              *(uint32_t *)v20 = *(uint32_t *)v22;
              *((uint32_t *)v20 + 1) = *((uint32_t *)v22 + 1);
            }
            v22 += 8;
            v20 += 8;
          }
          while ( v9 != v22 );
          v40 = (unsigned int)(uintptr_t)(&v42[8 * ((unsigned int)(v9 - (v37 + 8)) >> 3) + 16]);
        }
        v38 = *(self + 14);
        if ( v9 == v38 )
        {
          v9 = (char *)v40;
        }
        else
        {
          v23 = v9;
          v24 = (uint32_t *)v40;
          do
          {
            if ( v24 != nullptr )
            {
              *v24 = *(uint32_t *)v23;
              v24[1] = *((uint32_t *)v23 + 1);
            }
            v23 += 8;
            v24 += 2;
          }
          while ( v38 != v23 );
          v9 = (char *)(v40 + 8 * ((unsigned int)(v38 - (v9 + 8)) >> 3) + 8);
        }
        v25 = *(self + 13);
        if ( v25 != nullptr )
        {
          VoxFreeInternal(v25);
          v8 = v31;
        }
        *(self + 14) = v9;
        *(self + 13) = v42;
        *(self + 15) = &v42[v34];
      }
      else
      {
        v10 = 0;
        if ( v9 != nullptr )
        {
          *(uint32_t *)v9 = *v7;
          *((uint32_t *)v9 + 1) = v7[1];
          v10 = (int)(uintptr_t)(*(self + 14));
        }
        v9 = (char *)(v10 + 8);
        *(self + 14) = (char *)(v10 + 8);
      }
      v7 += 2;
    }
    while ( v8 != v7 );
    v2 = v32;
  }
  *(self + 18) = *((char **)v2 + 18);
  *(self + 17) = *((char **)v2 + 17);
  *(self + 20) = *((char **)v2 + 20);
  *(self + 21) = *((char **)v2 + 21);
  v11 = *(self + 16);
  *(self + 22) = v11;
  *(self + 24) = v11;
  v27 = v2;
  *(self + 19) = (char *)vox::RandomGroup::GetActiveElementIndex((vox::RandomGroup::Self *)self);
  *(self + 23) = (char *)-1;
  *(self + 26) = *((char **)v27 + 26);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::RandomGroup::GetGroupElementPosition  (binary VA: 0xff2c20)
// Original: vox::RandomGroup::GetGroupElementPosition
// ----------------------------------------------------------------------------
int vox::RandomGroup::GetGroupElementPosition(vox::RandomGroup::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  char *v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  uint32_t *v22;
  char *v23;
  uint32_t *v24;
  char *v25;
  uint32_t *v26;
  int v27;
  bool v28; // cc
  int v29;
  vox::VoxThread::Self *v30;
  size_t v31;
  int v32;
  void *v33;
  int v34;
  int v35;
  int v36;
  char *v37;
  uint32_t *v38;
  unsigned int v39;
  char *v40;

  v1 = -1;
  vox::VoxThread::GetCurThreadId(v30);
  sub_BA06A0();
  v2 = *((uint32_t *)self + 5);
  if ( v2 != 0 && *((uint32_t *)self + 4) != 0 )
  {
    v3 = *((uint32_t *)self + 19);
    if ( v3 >= 0 )
    {
      v4 = *((uint32_t *)self + 8);
      v5 = (int *)(v4 + 8 * v3);
      v1 = *v5;
      if ( *((int *)self + 17) > 0 )
      {
        v6 = v5[1];
        v7 = *((uint32_t *)self + 9) - v4;
        *((uint32_t *)self + 20) -= v6;
        v35 = v6;
        v8 = (v7 >> 3) - 1;
        *v5 = *(uint32_t *)(v4 + 8 * v8);
        v5[1] = *(uint32_t *)(v4 + 8 * v8 + 4);
        *((uint32_t *)self + 9) -= 8;
        v9 = VoxAllocInternal(0x10u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        v10 = (char *)self + 44;
        if ( v9 != -8 )
        {
          *(uint32_t *)(v9 + 8) = v1;
          *(uint32_t *)(v9 + 12) = v35;
        }
        sub_1901920(v9, (char *)self + 44);
        v11 = *((uint32_t *)self + 11);
        v12 = 0;
        if ( v10 != (char *)v11 )
        {
          v13 = *((char **)self + 11);
          do
          {
            v13 = *(char **)v13;
            ++v12;
          }
          while ( v10 != v13 );
        }
        if ( *((uint32_t *)self + 17) < v12 )
        {
          v36 = *(uint32_t *)(v11 + 8);
          v32 = *(uint32_t *)(v11 + 12);
          v33 = *((void **)self + 11);
          sub_1901940(v11);
          VoxFreeInternal(v33);
          v17 = *((char **)self + 9);
          *((uint32_t *)self + 20) += v32;
          if ( v17 == *((char **)self + 10) )
          {
            v19 = (int)(uintptr_t)(&v17[-*((uint32_t *)self + 8)]) >> 3;
            v31 = 8;
            v39 = v19;
            if ( v19 != 0 )
            {
              v20 = 2 * v19;
              if ( v19 <= 2 * v19 )
              {
                v27 = 16 * v19;
                v28 = v20 <= 0x1FFFFFFF;
                v29 = -8;
                if ( v28 )
                  v29 = v27;
                v31 = v29;
              }
              else
              {
                v31 = 0xFFFFFFF8;
              }
            }
            v21 = VoxAllocInternal(v31, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
            v34 = v21;
            v22 = (uint32_t *)(v21 + 8 * v39);
            if ( v22 != nullptr )
            {
              v22[1] = v32;
              *v22 = v36;
            }
            v37 = *((char **)self + 8);
            if ( v17 != v37 )
            {
              v23 = *((char **)self + 8);
              v24 = (uint32_t *)v34;
              do
              {
                if ( v24 != nullptr )
                {
                  *v24 = *(uint32_t *)v23;
                  v24[1] = *((uint32_t *)v23 + 1);
                }
                v23 += 8;
                v24 += 2;
              }
              while ( v17 != v23 );
              v21 = v34 + 8 * ((unsigned int)(v17 - (v37 + 8)) >> 3) + 8;
            }
            v38 = (uint32_t *)(v21 + 8);
            v40 = *((char **)self + 9);
            if ( v17 != v40 )
            {
              v25 = v17;
              v26 = v38;
              do
              {
                if ( v26 != nullptr )
                {
                  *v26 = *(uint32_t *)v25;
                  v26[1] = *((uint32_t *)v25 + 1);
                }
                v25 += 8;
                v26 += 2;
              }
              while ( v40 != v25 );
              v38 += 2 * ((unsigned int)(v40 - (v17 + 8)) >> 3) + 2;
            }
            if ( *((uint32_t *)self + 8) != 0 )
              VoxFreeInternal(*((void **)self + 8));
            *((uint32_t *)self + 8) = v34;
            *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v38);
            *((uint32_t *)self + 10) = v34 + v31;
          }
          else
          {
            v18 = 0;
            if ( v17 != nullptr )
            {
              *((uint32_t *)v17 + 1) = v32;
              *(uint32_t *)v17 = v36;
              v18 = *((uint32_t *)self + 9);
            }
            *((uint32_t *)self + 9) = v18 + 8;
          }
          *((uint32_t *)self + 26) = 1;
          v2 = *((uint32_t *)self + 5);
          v3 = *((uint32_t *)self + 19);
        }
        else
        {
          *((uint32_t *)self + 26) = 0;
          v2 = *((uint32_t *)self + 5);
          v3 = *((uint32_t *)self + 19);
        }
      }
      *((uint32_t *)self + 7) = v2;
      *((uint32_t *)self + 5) = v2 - 1;
      v14 = *((uint32_t *)self + 22);
      *((uint32_t *)self + 24) = v14--;
      *((uint32_t *)self + 22) = v14;
      if ( v14 == 0 )
      {
        v15 = *((uint32_t *)self + 4);
        *((uint32_t *)self + 6) = v15--;
        *((uint32_t *)self + 4) = v15;
        if ( v15 != 0 )
          *((uint32_t *)self + 22) = *((uint32_t *)self + 16);
      }
      *((uint32_t *)self + 23) = v3;
      *((uint32_t *)self + 19) = vox::RandomGroup::GetActiveElementIndex(self);
    }
  }
  sub_BA06B0();
  return v1;
}


