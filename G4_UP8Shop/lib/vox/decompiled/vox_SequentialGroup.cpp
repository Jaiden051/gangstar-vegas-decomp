#include "Core/Utils/DecompTypes.h"
#include "vox_SequentialGroup.h"

// ----------------------------------------------------------------------------
// Function: vox::SequentialGroup::GetGroupElementPosition  (binary VA: 0xff1230)
// Original: vox::SequentialGroup::GetGroupElementPosition
// ----------------------------------------------------------------------------
int vox::SequentialGroup::GetGroupElementPosition(vox::SequentialGroup::Self *self)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  result = -1;
  v2 = *((uint32_t *)self + 5);
  if ( v2 != 0 )
  {
    v3 = *((uint32_t *)self + 4);
    if ( v3 != 0 )
    {
      v4 = *((uint32_t *)self + 11);
      v6 = *((uint32_t *)self + 8);
      v5 = *((uint32_t *)self + 9) - v6;
      *((uint32_t *)self + 12) = v4;
      *((uint32_t *)self + 11) = v4 + 1;
      if ( v4 + 1 >= v5 >> 2 )
      {
        *((uint32_t *)self + 6) = v3;
        *((uint32_t *)self + 11) = 0;
        *((uint32_t *)self + 4) = v3 - 1;
      }
      *((uint32_t *)self + 7) = v2;
      *((uint32_t *)self + 5) = v2 - 1;
      return *(uint32_t *)(v6 + 4 * v4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::SequentialGroup::GetState  (binary VA: 0xff12b0)
// Original: vox::SequentialGroup::GetState
// ----------------------------------------------------------------------------
uint32_t * vox::SequentialGroup::GetState(uint32_t *a1, uint32_t *a2)
{
  *a2 = a1[4];
  a2[1] = a1[5];
  a2[2] = a1[11];
  a2[3] = a1[6];
  a2[4] = a1[7];
  a2[5] = a1[12];
  return a2;
}

// ----------------------------------------------------------------------------
// Function: vox::SequentialGroup::PeekAtNextGroupElement  (binary VA: 0xff12e0)
// Original: vox::SequentialGroup::PeekAtNextGroupElement
// ----------------------------------------------------------------------------
int vox::SequentialGroup::PeekAtNextGroupElement(int a1, int a2)
{
  int result;

  result = -1;
  if ( *(uint32_t *)(a1 + 20) != 0 )
  {
    if ( a2 == 1 )
    {
      return **(uint32_t **)(a1 + 32);
    }
    else if ( *(uint32_t *)(a1 + 16) != 0 )
    {
      return *(uint32_t *)(*(uint32_t *)(a1 + 32) + 4 * *(uint32_t *)(a1 + 44));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::SequentialGroup::SetState  (binary VA: 0xff1310)
// Original: vox::SequentialGroup::SetState
// ----------------------------------------------------------------------------
int vox::SequentialGroup::SetState(vox::SequentialGroup::Self *self, vox::SequentialGroup::Self *a2)
{
  int result;

  vox::SegmentGroup::SetState(self, a2);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 11);
  result = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 12) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::SequentialGroup::SetState  (binary VA: 0xff1360)
// Original: vox::SequentialGroup::SetState
// ----------------------------------------------------------------------------
uint32_t * vox::SequentialGroup::SetState(uint32_t *a1, uint32_t *a2)
{
  a1[4] = *a2;
  a1[5] = a2[1];
  a1[11] = a2[2];
  a1[6] = a2[3];
  a1[7] = a2[4];
  a1[12] = a2[5];
  return a1;
}

// ----------------------------------------------------------------------------
// Function: vox::SequentialGroup::SetToPreviousState  (binary VA: 0xff1390)
// Original: vox::SequentialGroup::SetToPreviousState
// ----------------------------------------------------------------------------
vox::SequentialGroup::Self * vox::SequentialGroup::SetToPreviousState(vox::SequentialGroup::Self *self)
{
  *((uint32_t *)self + 4) = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = *((uint32_t *)self + 7);
  *((uint32_t *)self + 11) = *((uint32_t *)self + 12);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::SequentialGroup::Destroy  (binary VA: 0xff13b0)
// Original: vox::SequentialGroup::~SequentialGroup
// ----------------------------------------------------------------------------
void vox::SequentialGroup::Destroy(void **self)
{
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208D168));
  if ( *(self + 8) != nullptr )
    VoxFreeInternal(*(self + 8));
  vox::SegmentGroup::Destroy((vox::SegmentGroup::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: vox::SequentialGroup::Destroy_eaff1440  (binary VA: 0xff1440)
// Original: vox::SequentialGroup::~SequentialGroup
// ----------------------------------------------------------------------------
void vox::SequentialGroup::Destroy_eaff1440(void **self)
{
  vox::SequentialGroup::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::SequentialGroup::Reset  (binary VA: 0xff1480)
// Original: vox::SequentialGroup::Reset
// ----------------------------------------------------------------------------
vox::SequentialGroup::Self * vox::SequentialGroup::Reset(vox::SequentialGroup::Self *self, int a2)
{
  vox::SequentialGroup::Self *result;
  int v3;

  result = self;
  v3 = *((uint32_t *)self + 11);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = v3;
  *((uint32_t *)self + 6) = *((uint32_t *)self + 4);
  *((uint32_t *)self + 4) = *((uint32_t *)self + 2);
  if ( a2 == 0 )
  {
    *((uint32_t *)self + 7) = *((uint32_t *)self + 5);
    *((uint32_t *)self + 5) = *((uint32_t *)self + 3);
  }
  return result;
}



// ============================================================================
// Address:   0xff2f40 (size: 102 bytes)
// Symbol:    _ZN3vox15SequentialGroupC2EPNS_10GroupInfosE
// Demangled: vox::SequentialGroup::SequentialGroup(vox::GroupInfos *)
// ============================================================================
// Alternative name is '_ZN3vox15SequentialGroupC1EPNS_10GroupInfosE'
void (**vox::SequentialGroup::Construct(
        uint32_t *a1,
        uint32_t *a2))(vox::SequentialGroup::Self * self)
{
  vox::SegmentGroup::Construct(a1, a2);
  a1[8] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_208D168);
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  a1[12] = 0;
  return (void (**)(vox::SequentialGroup::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208D168));
}
// ----------------------------------------------------------------------------
// Function: vox::SequentialGroup::Construct  (binary VA: 0xff2fb0)
// Original: vox::SequentialGroup::SequentialGroup
// ----------------------------------------------------------------------------
void vox::SequentialGroup::Construct(void **self, vox::SequentialGroup::Self *a2)
{
  uint32_t *v2;
  char *v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  uint32_t *v7;
  char *v8;
  uint32_t *v9;
  char *v10;
  uint32_t *v11;
  vox::VoxThread::Self *v12;
  char *v13;
  unsigned int v14;
  char *v15;
  char *v16;
  int v17;
  unsigned int v18;
  uint32_t *v19;
  int v20;

  vox::SegmentGroup::Construct((vox::SegmentGroup::Self *)self, a2);
  *(self + 8) = nullptr;
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_208D168));
  *(self + 9) = nullptr;
  *(self + 10) = nullptr;
  vox::VoxThread::GetCurThreadId(v12);
  sub_BA06A0();
  *(self + 11) = *((void **)a2 + 11);
  *(self + 12) = *((void **)a2 + 12);
  v2 = *((uint32_t **)a2 + 8);
  if ( v2 != *((uint32_t **)a2 + 9) )
  {
    v3 = (char *)*(self + 9);
    v19 = *((uint32_t **)a2 + 9);
    do
    {
      if ( *(self + 10) == v3 )
      {
        v5 = (v3 - (char *)((uint8_t *)*(self + 8))) >> 2;
        v6 = 1;
        v14 = v5;
        if ( v5 != 0 && ((v6 = 2 * v5, v5 > 2 * v5) || v6 > 0x3FFFFFFF) )
          v20 = -4;
        else
          v20 = 4 * v6;
        v13 = (char *)*(self + 10);
        v17 = VoxAllocInternal(v20, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        v18 = v17 + 4;
        v7 = (uint32_t *)(v17 + 4 * v14);
        if ( v7 != nullptr )
          *v7 = *v2;
        v15 = (char *)*(self + 8);
        if ( v13 != v15 )
        {
          v8 = (char *)*(self + 8);
          v9 = (uint32_t *)v17;
          do
          {
            if ( v9 != nullptr )
              *v9 = *(uint32_t *)v8;
            v8 += 4;
            ++v9;
          }
          while ( v13 != v8 );
          v18 = v17 + 4 * ((unsigned int)(v13 - (v15 + 4)) >> 2) + 8;
        }
        v16 = (char *)*(self + 9);
        if ( v16 == v3 )
        {
          v3 = (char *)v18;
        }
        else
        {
          v10 = v3;
          v11 = (uint32_t *)v18;
          do
          {
            if ( v11 != nullptr )
              *v11 = *(uint32_t *)v10;
            v10 += 4;
            ++v11;
          }
          while ( v16 != v10 );
          v3 = (char *)(v18 + 4 * ((unsigned int)(v16 - (v3 + 4)) >> 2) + 4);
        }
        if ( *(self + 8) != nullptr )
          VoxFreeInternal(*(self + 8));
        *(self + 9) = v3;
        *(self + 8) = (void *)v17;
        *(self + 10) = (void *)(v20 + v17);
      }
      else
      {
        v4 = 0;
        if ( v3 != nullptr )
        {
          *(uint32_t *)v3 = *v2;
          v4 = (int)(uintptr_t)(*(self + 9));
        }
        v3 = (char *)(v4 + 4);
        *(self + 9) = (void *)(v4 + 4);
      }
      ++v2;
    }
    while ( v19 != v2 );
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::SequentialGroup::AddElement  (binary VA: 0xff31e0)
// Original: vox::SequentialGroup::AddElement
// ----------------------------------------------------------------------------
size_t vox::SequentialGroup::AddElement(vox::SequentialGroup::Self *self, int a2)
{
  char *v2;
  int v3;
  size_t result;
  unsigned int v5;
  uint32_t *v6;
  char *v7;
  uint32_t *v8;
  char *v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  int v13;
  int v14;
  size_t v15;
  int v16;
  uint32_t *v17;

  v2 = *((char **)self + 9);
  if ( v2 == *((char **)self + 10) )
  {
    v5 = (int)(uintptr_t)(&v2[-*((uint32_t *)self + 8)]) >> 2;
    v15 = 4;
    if ( v5 != 0 )
    {
      v15 = 0xFFFFFFFC;
      if ( v5 <= 2 * v5 )
      {
        v13 = 8 * v5;
        if ( 2 * v5 > 0x3FFFFFFF )
          v13 = -4;
        v15 = v13;
      }
    }
    v14 = (int)(uintptr_t)(&v2[-*((uint32_t *)self + 8)]) >> 2;
    v16 = VoxAllocInternal(v15, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    v6 = (uint32_t *)(v16 + 4 * v14);
    if ( v6 != nullptr )
      *v6 = a2;
    v7 = *((char **)self + 8);
    v8 = (uint32_t *)v16;
    if ( v2 != v7 )
    {
      v9 = *((char **)self + 8);
      do
      {
        if ( v8 != nullptr )
          *v8 = *(uint32_t *)v9;
        v9 += 4;
        ++v8;
      }
      while ( v2 != v9 );
      v8 = (uint32_t *)(v16 + 4 * ((unsigned int)(v2 - (v7 + 4)) >> 2) + 4);
    }
    v10 = *((char **)self + 9);
    v11 = v8 + 1;
    v17 = v11;
    if ( v2 != v10 )
    {
      v12 = v2;
      do
      {
        if ( v11 != nullptr )
          *v11 = *(uint32_t *)v12;
        v12 += 4;
        ++v11;
      }
      while ( v10 != v12 );
      v17 += ((unsigned int)(v10 - (v2 + 4)) >> 2) + 1;
    }
    if ( *((uint32_t *)self + 8) != 0 )
      VoxFreeInternal(*((void **)self + 8));
    *((uint32_t *)self + 8) = v16;
    *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v17);
    *((uint32_t *)self + 10) = v15 + v16;
    return v15 + v16;
  }
  else
  {
    v3 = 0;
    if ( v2 != nullptr )
    {
      *(uint32_t *)v2 = a2;
      v3 = *((uint32_t *)self + 9);
    }
    result = v3 + 4;
    *((uint32_t *)self + 9) = result;
  }
  return result;
}


