#include "Core/Utils/DecompTypes.h"
#include "vox_HandlableContainer.h"

// ----------------------------------------------------------------------------
// Function: vox::HandlableContainer::Add  (binary VA: 0x10251d0)
// Original: vox::HandlableContainer::Add
// ----------------------------------------------------------------------------
void vox::HandlableContainer::Add(vox::HandlableContainer::Self *self, vox::Handlable::Self *a2)
{
  vox::Handlable::Self *v2;
  int v4;
  char *v5;
  char *v6;
  int v7;
  char *v9;
  char *v10;
  int v11;
  bool v12; // cc
  unsigned int v13;
  char *v14;
  char *v15;
  char v16; // bp
  int v17;
  char *v18;
  char v19;
  int v20;
  char *v21;
  char v22;
  bool v23;
  char *v24;
  char *v25;
  char *v26;
  bool v27;
  char *v28;
  char v29;
  unsigned int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  char *v37;
  char *v38;
  char v39;
  char *v40;
  char v41;
  char *v42;
  char *v43;
  char *v44;
  char v45;
  char *v46;
  char v47;
  char *v48;
  unsigned int v49;
  char *v50;
  unsigned int v51;
  int64_t v52; // 0:kr00_8.8
  int64_t v53; // 0:edx.4,4:esi.4

  v2 = a2;
  if ( a2 != nullptr )
  {
    v53 = *(uint64_t *)((char *)a2 + 4);
    v43 = (char *)self + 4;
    v4 = *((uint32_t *)self + 2);
    if ( v4 != 0 )
    {
      v5 = (char *)self + 4;
      v6 = *((char **)self + 2);
      do
      {
        while ( v53 <= *((uint64_t *)v6 + 2) )
        {
          v5 = v6;
          v6 = *((char **)v6 + 2);
          if ( v6 == nullptr )
            goto LABEL_8;
        }
        v6 = *((char **)v6 + 3);
      }
      while ( v6 != nullptr );
LABEL_8:
      v44 = v5;
      if ( v43 != v5 )
      {
        if ( v53 >= *((uint64_t *)v5 + 2) )
          goto LABEL_16;
        v50 = *((char **)self + 3);
        if ( v50 == v5 )
        {
          v35 = *((uint32_t *)a2 + 1);
          v26 = (char *)VoxAllocInternal(
                          0x1Cu,
                          0,
                          (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                          (int)(uintptr_t)("internal_new"),
                          181);
          v5 = v26;
          if ( v26 != (char *)-16 )
          {
            *((uint32_t *)v26 + 4) = v35;
            *((uint32_t *)v26 + 5) = HIDWORD(v53);
            *((uint32_t *)v26 + 6) = 0;
          }
          sub_1904970(1, v26, v50, v43);
          ++*((uint32_t *)self + 5);
          goto LABEL_16;
        }
        v30 = *((uint32_t *)a2 + 1);
        v37 = *((char **)self + 2);
        v7 = sub_1904940(v5);
        v48 = (char *)v7;
        LODWORD(v53) = v30;
        v9 = v37;
        LODWORD(v52) = v30;
        HIDWORD(v52) = HIDWORD(v53);
        if ( v52 > *(uint64_t *)(v7 + 16) )
        {
          if ( *(uint32_t *)(v7 + 12) != 0 )
          {
            v10 = (char *)VoxAllocInternal(
                            0x1Cu,
                            0,
                            (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                            (int)(uintptr_t)("internal_new"),
                            181);
            v5 = v10;
            if ( v10 != (char *)-16 )
            {
              *((uint32_t *)v10 + 4) = v30;
              *((uint32_t *)v10 + 5) = HIDWORD(v53);
              *((uint32_t *)v10 + 6) = 0;
            }
            sub_1904970(1, v10, v44, v43);
            ++*((uint32_t *)self + 5);
          }
          else
          {
            v24 = (char *)VoxAllocInternal(
                            0x1Cu,
                            0,
                            (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                            (int)(uintptr_t)("internal_new"),
                            181);
            v5 = v24;
            if ( v24 != (char *)-16 )
            {
              *((uint32_t *)v24 + 4) = v30;
              *((uint32_t *)v24 + 5) = HIDWORD(v53);
              *((uint32_t *)v24 + 6) = 0;
            }
            sub_1904970(v43 == v48, v24, v48, v43);
            ++*((uint32_t *)self + 5);
          }
          goto LABEL_16;
        }
        v11 = *((uint32_t *)v37 + 5);
        v12 = SHIDWORD(v53) < v11;
        v13 = *((uint32_t *)v37 + 4);
        if ( SHIDWORD(v53) <= v11 )
          goto LABEL_22;
LABEL_27:
        v14 = *((char **)v9 + 3);
        v45 = 0;
        while ( v14 != nullptr )
        {
          v9 = v14;
          v11 = *((uint32_t *)v14 + 5);
          v13 = *((uint32_t *)v14 + 4);
          v12 = SHIDWORD(v53) < v11;
          if ( SHIDWORD(v53) > v11 )
            goto LABEL_27;
LABEL_22:
          if ( !v12 && v30 >= v13 )
            goto LABEL_27;
          v14 = *((char **)v9 + 2);
          v45 = 1;
        }
        v51 = v13;
        v20 = v11;
        v2 = a2;
        v5 = v9;
        if ( v45 != 0 )
        {
          if ( v50 == v9 )
            goto LABEL_44;
          v40 = v9;
          v5 = (char *)sub_19048F0(v9);
          v51 = *((uint32_t *)v5 + 4);
          v9 = v40;
          LODWORD(v53) = v30;
          v20 = *((uint32_t *)v5 + 5);
        }
        if ( SHIDWORD(v53) < v20 || SHIDWORD(v53) <= v20 && (unsigned int)v53 <= v51 )
          goto LABEL_16;
LABEL_44:
        v47 = 1;
        if ( v43 != v9 )
          v47 = v53 < *((uint64_t *)v9 + 2);
        v32 = v53;
        v38 = v9;
        v21 = (char *)VoxAllocInternal(
                        0x1Cu,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
        v5 = v21;
        if ( v21 != (char *)-16 )
        {
          *((uint32_t *)v21 + 4) = v32;
          *((uint32_t *)v21 + 5) = HIDWORD(v53);
          *((uint32_t *)v21 + 6) = 0;
        }
        sub_1904970(v47, v21, v38, v43);
        ++*((uint32_t *)self + 5);
        goto LABEL_16;
      }
    }
    if ( *((uint32_t *)self + 5) != 0 )
    {
      v46 = *((char **)self + 4);
      if ( v53 > *((uint64_t *)v46 + 2) )
      {
        v31 = *((uint32_t *)a2 + 1);
        v18 = (char *)VoxAllocInternal(
                        0x1Cu,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
        v5 = v18;
        v19 = v43 == v46;
        if ( v18 != (char *)-16 )
        {
          *((uint32_t *)v18 + 4) = v31;
          *((uint32_t *)v18 + 5) = HIDWORD(v53);
          *((uint32_t *)v18 + 6) = 0;
        }
LABEL_40:
        sub_1904970(v19, v18, v46, v43);
        ++*((uint32_t *)self + 5);
LABEL_16:
        *((uint32_t *)v5 + 6) = (uint32_t)(uintptr_t)(v2);
        return;
      }
    }
    v5 = *((char **)self + 2);
    if ( v4 != 0 )
    {
      while ( 1 )
      {
        v17 = *((uint32_t *)v5 + 5);
        if ( v53 >= *((uint64_t *)v5 + 2) )
        {
          v15 = *((char **)v5 + 3);
          v16 = 0;
        }
        else
        {
          v15 = *((char **)v5 + 2);
          v16 = 1;
        }
        if ( v15 == nullptr )
          break;
        v5 = v15;
      }
      v22 = v16;
      v2 = a2;
      v49 = *((uint32_t *)v5 + 4);
      v46 = v5;
      if ( v22 == 0 )
      {
LABEL_50:
        if ( SHIDWORD(v53) < v17 || SHIDWORD(v53) <= v17 && (unsigned int)v53 <= v49 )
          goto LABEL_16;
        v23 = true;
        if ( v43 != v46 )
          v23 = v53 < *((uint64_t *)v46 + 2);
        v33 = v53;
        v39 = v23;
        v18 = (char *)VoxAllocInternal(
                        0x1Cu,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
        v5 = v18;
        v19 = v39;
        if ( v18 != (char *)-16 )
        {
          *((uint32_t *)v18 + 4) = v33;
          *((uint32_t *)v18 + 5) = HIDWORD(v53);
          *((uint32_t *)v18 + 6) = 0;
        }
        goto LABEL_40;
      }
    }
    else
    {
      v5 = (char *)self + 4;
    }
    if ( *((char **)self + 3) == v5 )
    {
      v27 = true;
      if ( v43 != v5 )
        v27 = v53 < *((uint64_t *)v5 + 2);
      v36 = *((uint32_t *)a2 + 1);
      v41 = v27;
      v28 = (char *)VoxAllocInternal(
                      0x1Cu,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
      v29 = v41;
      if ( v28 != (char *)-16 )
      {
        *((uint32_t *)v28 + 4) = v36;
        *((uint32_t *)v28 + 5) = HIDWORD(v53);
        *((uint32_t *)v28 + 6) = 0;
      }
      v42 = v28;
      sub_1904970(v29, v28, v5, v43);
      ++*((uint32_t *)self + 5);
      v5 = v42;
      goto LABEL_16;
    }
    v34 = *((uint32_t *)a2 + 1);
    v25 = (char *)sub_19048F0(v5);
    v46 = v5;
    v49 = *((uint32_t *)v25 + 4);
    v5 = v25;
    v17 = *((uint32_t *)v25 + 5);
    LODWORD(v53) = v34;
    goto LABEL_50;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::HandlableContainer::Find  (binary VA: 0x10257f0)
// Original: vox::HandlableContainer::Find
// ----------------------------------------------------------------------------
int vox::HandlableContainer::Find(vox::HandlableContainer::Self *self, int64_t a2)
{
  int result;
  char *v3;
  char *v4;

  result = 0;
  v3 = *((char **)self + 2);
  if ( v3 != nullptr )
  {
    v4 = (char *)self + 4;
    do
    {
      while ( *((uint64_t *)v3 + 2) >= a2 )
      {
        v4 = v3;
        v3 = *((char **)v3 + 2);
        if ( v3 == nullptr )
          goto LABEL_7;
      }
      v3 = *((char **)v3 + 3);
    }
    while ( v3 != nullptr );
LABEL_7:
    if ( (char *)self + 4 == v4 || *((uint64_t *)v4 + 2) > a2 )
      return 0;
    else
      return *((uint32_t *)v4 + 6);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::HandlableContainer::Erase  (binary VA: 0x1026830)
// Original: vox::HandlableContainer::Erase
// ----------------------------------------------------------------------------
int vox::HandlableContainer::Erase(vox::HandlableContainer::Self *self, int64_t a2)
{
  int result;
  char *v3;
  void (***v4)(uint32_t);
  void *v5;

  result = *((uint32_t *)self + 2);
  if ( result != 0 )
  {
    v3 = (char *)self + 4;
    do
    {
      while ( *(uint64_t *)(result + 16) >= a2 )
      {
        v3 = (char *)result;
        result = *(uint32_t *)(result + 8);
        if ( result == 0 )
          goto LABEL_7;
      }
      result = *(uint32_t *)(result + 12);
    }
    while ( result != 0 );
LABEL_7:
    if ( (char *)self + 4 != v3 && *((uint64_t *)v3 + 2) <= a2 )
    {
      v4 = *((void (****)(uint32_t))v3 + 6);
      if ( v4 != nullptr )
      {
        (**v4)(*((uint32_t *)v3 + 6));
        VoxFreeInternal(*((void **)v3 + 6));
      }
      v5 = (void *)sub_1904AE0(v3, (char *)self + 4);
      result = VoxFreeInternal(v5);
      --*((uint32_t *)self + 5);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::HandlableContainer::Detach  (binary VA: 0x10268d0)
// Original: vox::HandlableContainer::Detach
// ----------------------------------------------------------------------------
int vox::HandlableContainer::Detach(vox::HandlableContainer::Self *self, int64_t a2)
{
  char *v2;
  char *v3;
  void *v5;
  int v6;

  v2 = *((char **)self + 2);
  if ( v2 == nullptr )
    return 0;
  v3 = (char *)self + 4;
  do
  {
    while ( *((uint64_t *)v2 + 2) >= a2 )
    {
      v3 = v2;
      v2 = *((char **)v2 + 2);
      if ( v2 == nullptr )
        goto LABEL_7;
    }
    v2 = *((char **)v2 + 3);
  }
  while ( v2 != nullptr );
LABEL_7:
  if ( (char *)self + 4 == v3 || *((uint64_t *)v3 + 2) > a2 )
    return 0;
  v6 = *((uint32_t *)v3 + 6);
  v5 = (void *)sub_1904AE0(v3, (char *)self + 4);
  VoxFreeInternal(v5);
  --*((uint32_t *)self + 5);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: vox::HandlableContainer::GetFreeHandleId  (binary VA: 0x1026ab0)
// Original: vox::HandlableContainer::GetFreeHandleId
// ----------------------------------------------------------------------------
uint64_t vox::HandlableContainer::GetFreeHandleId(vox::HandlableContainer::Self *self)
{
  unsigned int v1;
  unsigned int v2;

  v1 = *((uint32_t *)self + 6);
  v2 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = v1 + 1;
  *((uint32_t *)self + 7) = __CFADD__(v1, 1) + v2;
  return __PAIR64__(v2, v1);
}

// ----------------------------------------------------------------------------
// Function: vox::HandlableContainer::begin  (binary VA: 0x1027ba0)
// Original: vox::HandlableContainer::begin
// ----------------------------------------------------------------------------
vox::HandlableContainer::Self * vox::HandlableContainer::begin(vox::HandlableContainer::Self *self, int a2)
{
  *(uint32_t *)self = *(uint32_t *)(a2 + 12);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::HandlableContainer::end  (binary VA: 0x1027bb0)
// Original: vox::HandlableContainer::end
// ----------------------------------------------------------------------------
vox::HandlableContainer::Self * vox::HandlableContainer::end(vox::HandlableContainer::Self *self, int a2)
{
  *(uint32_t *)self = a2 + 4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::HandlableContainer::Merge  (binary VA: 0x1028470)
// Original: vox::HandlableContainer::Merge
// ----------------------------------------------------------------------------
vox::HandlableContainer::Self * vox::HandlableContainer::Merge(vox::HandlableContainer::Self *self, vox::HandlableContainer::Self *a2)
{
  vox::HandlableContainer::Self *v2;
  vox::HandlableContainer::Self *result;
  vox::HandlableContainer::Self *v4;
  uint32_t v5[8];

  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v5, (int)(uintptr_t)(a2));
  v2 = (vox::HandlableContainer::Self *)v5[0];
  result = vox::HandlableContainer::end((vox::HandlableContainer::Self *)v5, (int)(uintptr_t)(a2));
  v4 = (vox::HandlableContainer::Self *)v5[0];
  if ( v2 != (vox::HandlableContainer::Self *)v5[0] )
  {
    do
    {
      if ( *((uint32_t *)v2 + 6) != 0 )
        vox::HandlableContainer::Add(self, *((vox::Handlable::Self **)v2 + 6));
      result = (vox::HandlableContainer::Self *)sub_1904890(v2);
      v2 = result;
    }
    while ( result != v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::HandlableContainer::Clear  (binary VA: 0x1037640)
// Original: vox::HandlableContainer::Clear
// ----------------------------------------------------------------------------
char * vox::HandlableContainer::Clear(vox::HandlableContainer::Self *self)
{
  void **v1;
  void (***v2)(void *);
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  void **i;

  v1 = *((void ***)self + 3);
  for ( i = (void **)((char *)self + 4); i != v1; v1 = (void **)sub_1904890(v1) )
  {
    v2 = (void (***)(void *))v1[6];
    if ( v2 != nullptr )
    {
      (**v2)(v1[6]);
      VoxFreeInternal(v1[6]);
    }
  }
  v3 = *((uint32_t **)self + 2);
  v24 = v3;
  if ( v3 != nullptr )
  {
    while ( 1 )
    {
      v4 = (uint32_t *)v3[3];
      v25 = v4;
      if ( v4 != nullptr )
      {
        while ( 1 )
        {
          v5 = (uint32_t *)v4[3];
          v26 = v5;
          if ( v5 != nullptr )
          {
            while ( 1 )
            {
              v6 = (uint32_t *)v5[3];
              v27 = v6;
              if ( v6 != nullptr )
              {
                while ( 1 )
                {
                  v7 = (uint32_t *)v6[3];
                  v28 = v7;
                  if ( v7 != nullptr )
                  {
                    while ( 1 )
                    {
                      v8 = (uint32_t *)v7[3];
                      v29 = v8;
                      if ( v8 != nullptr )
                      {
                        while ( 1 )
                        {
                          v9 = (uint32_t *)v8[3];
                          v23 = v9;
                          if ( v9 != nullptr )
                          {
                            while ( 1 )
                            {
                              v10 = (uint32_t *)v9[3];
                              v22 = v10;
                              if ( v10 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v11 = v10[3];
                                  if ( v11 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_long_long_pair_long_long_00a3e4::M_erase(
                                        (int)(uintptr_t)(self),
                                        *(void **)(v11 + 12));
                                      v12 = *(uint32_t *)(v11 + 8);
                                      VoxFreeInternal((void *)v11);
                                      if ( v12 == 0 )
                                        break;
                                      v11 = v12;
                                    }
                                  }
                                  v13 = (uint32_t *)v22[2];
                                  VoxFreeInternal(v22);
                                  if ( v13 == nullptr )
                                    break;
                                  v22 = v13;
                                  v10 = v13;
                                }
                              }
                              v14 = (uint32_t *)v23[2];
                              VoxFreeInternal(v23);
                              if ( v14 == nullptr )
                                break;
                              v23 = v14;
                              v9 = v14;
                            }
                          }
                          v15 = (uint32_t *)v29[2];
                          VoxFreeInternal(v29);
                          if ( v15 == nullptr )
                            break;
                          v29 = v15;
                          v8 = v15;
                        }
                      }
                      v16 = (uint32_t *)v28[2];
                      VoxFreeInternal(v28);
                      if ( v16 == nullptr )
                        break;
                      v28 = v16;
                      v7 = v16;
                    }
                  }
                  v17 = (uint32_t *)v27[2];
                  VoxFreeInternal(v27);
                  if ( v17 == nullptr )
                    break;
                  v27 = v17;
                  v6 = v17;
                }
              }
              v18 = (uint32_t *)v26[2];
              VoxFreeInternal(v26);
              if ( v18 == nullptr )
                break;
              v26 = v18;
              v5 = v18;
            }
          }
          v19 = (uint32_t *)v25[2];
          VoxFreeInternal(v25);
          if ( v19 == nullptr )
            break;
          v25 = v19;
          v4 = v19;
        }
      }
      v20 = (uint32_t *)v24[2];
      VoxFreeInternal(v24);
      if ( v20 == nullptr )
        break;
      v24 = v20;
      v3 = v20;
    }
  }
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(i);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(i);
  *((uint32_t *)self + 5) = 0;
  return (char *)self + 4;
}

// ----------------------------------------------------------------------------
// Function: vox::HandlableContainer::Destroy  (binary VA: 0x1037840)
// Original: vox::HandlableContainer::~HandlableContainer
// ----------------------------------------------------------------------------
void vox::HandlableContainer::Destroy(vox::HandlableContainer::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
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

  vox::HandlableContainer::Clear(self);
  v1 = *((uint32_t **)self + 2);
  v21 = v1;
  if ( v1 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)v1[3];
      v22 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v23 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v24 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v25 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v26 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v20 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              v19 = v8;
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = v8[3];
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_long_long_pair_long_long_00a3e4::M_erase(
                                        (int)(uintptr_t)(self),
                                        *(void **)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      VoxFreeInternal((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  VoxFreeInternal(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              VoxFreeInternal(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v26[2];
                          VoxFreeInternal(v26);
                          if ( v13 == nullptr )
                            break;
                          v26 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v25[2];
                      VoxFreeInternal(v25);
                      if ( v14 == nullptr )
                        break;
                      v25 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v24[2];
                  VoxFreeInternal(v24);
                  if ( v15 == nullptr )
                    break;
                  v24 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v23[2];
              VoxFreeInternal(v23);
              if ( v16 == nullptr )
                break;
              v23 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v22[2];
          VoxFreeInternal(v22);
          if ( v17 == nullptr )
            break;
          v22 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)v21[2];
      VoxFreeInternal(v21);
      if ( v18 == nullptr )
        break;
      v21 = v18;
      v1 = v18;
    }
  }
}


