#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpDisplay.h"

// ----------------------------------------------------------------------------
// Function: hkpDisplayBindingData::RigidBody::Destroy  (binary VA: 0x1822c80)
// Original: hkpDisplayBindingData::RigidBody::~RigidBody
// ----------------------------------------------------------------------------
void hkpDisplayBindingData::RigidBody::Destroy(hkpDisplayBindingData::RigidBody::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett

  v1 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1658);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
  {
    do
    {
      v3 = *(uint32_t *)(v1 + 4);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
      v4 = v2 | (uint16_t)(v3 - 1);
      v5 = v3;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v5, v4) );
    if ( (uint16_t)v4 == 0 )
      G4_VCALL<void>(v1, 16);
  }
  v6 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 3) = 0;
  if ( v6 != 0 && *(uint16_t *)(v6 + 6) != 0 )
  {
    do
    {
      v8 = *(uint32_t *)(v6 + 4);
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
      v9 = v7 | (uint16_t)(v8 - 1);
      v10 = v8;
    }
    while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9) );
    if ( (uint16_t)v9 == 0 )
      G4_VCALL<void>(v6, 16);
  }
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpDisplayBindingData::Destroy  (binary VA: 0x1822d40)
// Original: hkpDisplayBindingData::~hkpDisplayBindingData
// ----------------------------------------------------------------------------
void hkpDisplayBindingData::Destroy(hkpDisplayBindingData::Self *self)
{
  hkpDisplayBindingData::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int32_t v16; // kr04_4
  int32_t v17;
  int32_t v18; // ett
  int v19;
  int v20;
  int v21;

  v1 = self;
  v2 = *((uint32_t *)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1698);
  v3 = v2 - 1;
  v4 = *((uint32_t *)self + 5);
  if ( v3 >= 0 )
  {
    do
    {
      v5 = *(uint32_t *)(v4 + 4 * v3);
      if ( v5 != 0 && *(uint16_t *)(v5 + 6) != 0 )
      {
        v20 = v3;
        do
        {
          v7 = *(uint32_t *)(v5 + 4);
          HIWORD(v6) = HIWORD(v7);
          LOWORD(v6) = 0;
          v8 = v6 | (uint16_t)(v7 - 1);
          v9 = v7;
        }
        while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v9, v8) );
        v3 = v20;
        if ( (uint16_t)v8 == 0 )
          G4_VCALL<void>(v5, 16);
      }
      *(uint32_t *)(v4 + 4 * v3--) = 0;
    }
    while ( v3 != -1 );
    v1 = self;
  }
  v10 = *((uint32_t *)v1 + 7);
  *((uint32_t *)v1 + 6) = 0;
  if ( v10 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 5),
      4 * v10);
  v11 = *((uint32_t *)v1 + 3);
  *((uint32_t *)v1 + 5) = 0;
  v12 = v11 - 1;
  *((uint32_t *)v1 + 7) = 0x80000000;
  v13 = *((uint32_t *)v1 + 2);
  if ( v12 >= 0 )
  {
    do
    {
      v14 = *(uint32_t *)(v13 + 4 * v12);
      if ( v14 != 0 && *(uint16_t *)(v14 + 6) != 0 )
      {
        v21 = v12;
        do
        {
          v16 = *(uint32_t *)(v14 + 4);
          HIWORD(v15) = HIWORD(v16);
          LOWORD(v15) = 0;
          v17 = v15 | (uint16_t)(v16 - 1);
          v18 = v16;
        }
        while ( v18 != __sync_val_compare_and_swap((volatile int32_t *)(v14 + 4), v18, v17) );
        v12 = v21;
        if ( (uint16_t)v17 == 0 )
          G4_VCALL<void>(v14, 16);
      }
      *(uint32_t *)(v13 + 4 * v12--) = 0;
    }
    while ( v12 != -1 );
  }
  v19 = *((uint32_t *)v1 + 4);
  *((uint32_t *)v1 + 3) = 0;
  if ( v19 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 2),
      4 * v19);
  *((uint32_t *)v1 + 2) = 0;
  *((uint32_t *)v1 + 4) = 0x80000000;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpDisplayBindingData::Destroy_ea1822ec0  (binary VA: 0x1822ec0)
// Original: hkpDisplayBindingData::~hkpDisplayBindingData
// ----------------------------------------------------------------------------
void hkpDisplayBindingData::Destroy_ea1822ec0(hkpDisplayBindingData::Self *self)
{
  hkpDisplayBindingData::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int32_t v16; // kr04_4
  int32_t v17;
  int32_t v18; // ett
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;

  v1 = self;
  v2 = *((uint32_t *)self + 6);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1698);
  v3 = v2 - 1;
  v4 = *((uint32_t *)self + 5);
  if ( v3 >= 0 )
  {
    do
    {
      v5 = *(uint32_t *)(v4 + 4 * v3);
      if ( v5 != 0 && *(uint16_t *)(v5 + 6) != 0 )
      {
        v22 = v3;
        do
        {
          v7 = *(uint32_t *)(v5 + 4);
          HIWORD(v6) = HIWORD(v7);
          LOWORD(v6) = 0;
          v8 = v6 | (uint16_t)(v7 - 1);
          v9 = v7;
        }
        while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v9, v8) );
        v3 = v22;
        if ( (uint16_t)v8 == 0 )
          G4_VCALL<void>(v5, 16);
      }
      *(uint32_t *)(v4 + 4 * v3--) = 0;
    }
    while ( v3 != -1 );
    v1 = self;
  }
  v10 = *((uint32_t *)v1 + 7);
  *((uint32_t *)v1 + 6) = 0;
  if ( v10 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 5),
      4 * v10);
  v11 = *((uint32_t *)v1 + 3);
  *((uint32_t *)v1 + 5) = 0;
  v12 = v11 - 1;
  *((uint32_t *)v1 + 7) = 0x80000000;
  v13 = *((uint32_t *)v1 + 2);
  if ( v12 >= 0 )
  {
    do
    {
      v14 = *(uint32_t *)(v13 + 4 * v12);
      if ( v14 != 0 && *(uint16_t *)(v14 + 6) != 0 )
      {
        v23 = v12;
        do
        {
          v16 = *(uint32_t *)(v14 + 4);
          HIWORD(v15) = HIWORD(v16);
          LOWORD(v15) = 0;
          v17 = v15 | (uint16_t)(v16 - 1);
          v18 = v16;
        }
        while ( v18 != __sync_val_compare_and_swap((volatile int32_t *)(v14 + 4), v18, v17) );
        v12 = v23;
        if ( (uint16_t)v17 == 0 )
          G4_VCALL<void>(v14, 16);
      }
      *(uint32_t *)(v13 + 4 * v12--) = 0;
    }
    while ( v12 != -1 );
  }
  v19 = *((uint32_t *)v1 + 4);
  *((uint32_t *)v1 + 3) = 0;
  if ( v19 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 2),
      4 * v19);
  *((uint32_t *)v1 + 2) = 0;
  *((uint32_t *)v1 + 4) = 0x80000000;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  v20 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v21 = 32;
  if ( *((uint16_t *)v1 + 3) != 0xFFFF )
    v21 = *((uint16_t *)v1 + 3);
  G4_VCALL<void>(v20, 12, v1, v21);
}

// ----------------------------------------------------------------------------
// Function: hkpDisplayBindingData::RigidBody::Destroy_ea1823080  (binary VA: 0x1823080)
// Original: hkpDisplayBindingData::RigidBody::~RigidBody
// ----------------------------------------------------------------------------
void hkpDisplayBindingData::RigidBody::Destroy_ea1823080(hkpDisplayBindingData::RigidBody::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  int32_t v8; // kr04_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  int v12;

  v1 = *((uint32_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1658);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
  {
    do
    {
      v3 = *(uint32_t *)(v1 + 4);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
      v4 = v2 | (uint16_t)(v3 - 1);
      v5 = v3;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v5, v4) );
    if ( (uint16_t)v4 == 0 )
      G4_VCALL<void>(v1, 16);
  }
  v6 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 3) = 0;
  if ( v6 != 0 && *(uint16_t *)(v6 + 6) != 0 )
  {
    do
    {
      v8 = *(uint32_t *)(v6 + 4);
      HIWORD(v7) = HIWORD(v8);
      LOWORD(v7) = 0;
      v9 = v7 | (uint16_t)(v8 - 1);
      v10 = v8;
    }
    while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)(v6 + 4), v10, v9) );
    if ( (uint16_t)v9 == 0 )
      G4_VCALL<void>(v6, 16);
  }
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v11 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v12 = 80;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v12 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v11, 12, self, v12);
}

// ----------------------------------------------------------------------------
// Function: hkpDisplayBindingData::PhysicsSystem::Destroy  (binary VA: 0x1823180)
// Original: hkpDisplayBindingData::PhysicsSystem::~PhysicsSystem
// ----------------------------------------------------------------------------
void hkpDisplayBindingData::PhysicsSystem::Destroy(hkpDisplayBindingData::PhysicsSystem::Self *self)
{
  hkpDisplayBindingData::PhysicsSystem::Self *v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int v16;

  v1 = self;
  v2 = *((uint32_t *)self + 5);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1678);
  if ( v2 != 0 && *(uint16_t *)(v2 + 6) != 0 )
  {
    do
    {
      v4 = *(uint32_t *)(v2 + 4);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      v5 = v3 | (uint16_t)(v4 - 1);
      v6 = v4;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v6, v5) );
    if ( (uint16_t)v5 == 0 )
      G4_VCALL<void>(v2, 16);
  }
  v7 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 5) = 0;
  v8 = v7 - 1;
  v9 = *((uint32_t *)self + 2);
  if ( v8 >= 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v9 + 4 * v8);
      if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
      {
        v16 = v8;
        do
        {
          v12 = *(uint32_t *)(v10 + 4);
          HIWORD(v11) = HIWORD(v12);
          LOWORD(v11) = 0;
          v13 = v11 | (uint16_t)(v12 - 1);
          v14 = v12;
        }
        while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
        v8 = v16;
        if ( (uint16_t)v13 == 0 )
          G4_VCALL<void>(v10, 16);
      }
      *(uint32_t *)(v9 + 4 * v8--) = 0;
    }
    while ( v8 != -1 );
    v1 = self;
  }
  v15 = *((uint32_t *)v1 + 4);
  *((uint32_t *)v1 + 3) = 0;
  if ( v15 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 2),
      4 * v15);
  *((uint32_t *)v1 + 2) = 0;
  *((uint32_t *)v1 + 4) = 0x80000000;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpDisplayBindingData::PhysicsSystem::Destroy_ea18232a0  (binary VA: 0x18232a0)
// Original: hkpDisplayBindingData::PhysicsSystem::~PhysicsSystem
// ----------------------------------------------------------------------------
void hkpDisplayBindingData::PhysicsSystem::Destroy_ea18232a0(hkpDisplayBindingData::PhysicsSystem::Self *self)
{
  hkpDisplayBindingData::PhysicsSystem::Self *v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int v16;
  int v17;
  int v18;

  v1 = self;
  v2 = *((uint32_t *)self + 5);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A1678);
  if ( v2 != 0 && *(uint16_t *)(v2 + 6) != 0 )
  {
    do
    {
      v4 = *(uint32_t *)(v2 + 4);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      v5 = v3 | (uint16_t)(v4 - 1);
      v6 = v4;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v6, v5) );
    if ( (uint16_t)v5 == 0 )
      G4_VCALL<void>(v2, 16);
  }
  v7 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 5) = 0;
  v8 = v7 - 1;
  v9 = *((uint32_t *)self + 2);
  if ( v8 >= 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v9 + 4 * v8);
      if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
      {
        v18 = v8;
        do
        {
          v12 = *(uint32_t *)(v10 + 4);
          HIWORD(v11) = HIWORD(v12);
          LOWORD(v11) = 0;
          v13 = v11 | (uint16_t)(v12 - 1);
          v14 = v12;
        }
        while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
        v8 = v18;
        if ( (uint16_t)v13 == 0 )
          G4_VCALL<void>(v10, 16);
      }
      *(uint32_t *)(v9 + 4 * v8--) = 0;
    }
    while ( v8 != -1 );
    v1 = self;
  }
  v15 = *((uint32_t *)v1 + 4);
  *((uint32_t *)v1 + 3) = 0;
  if ( v15 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 2),
      4 * v15);
  *((uint32_t *)v1 + 2) = 0;
  *((uint32_t *)v1 + 4) = 0x80000000;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  v16 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v17 = 24;
  if ( *((uint16_t *)v1 + 3) != 0xFFFF )
    v17 = *((uint16_t *)v1 + 3);
  G4_VCALL<void>(v16, 12, v1, v17);
}

// ----------------------------------------------------------------------------
// Function: hkpDisplayBindingData::RigidBody::staticClass  (binary VA: 0x1823400)
// Original: hkpDisplayBindingData::RigidBody::staticClass
// ----------------------------------------------------------------------------
void * hkpDisplayBindingData::RigidBody::staticClass()
{
  return &hkpDisplayBindingDataRigidBodyClass;
}

// ----------------------------------------------------------------------------
// Function: hkpDisplayBindingData::PhysicsSystem::staticClass  (binary VA: 0x1823420)
// Original: hkpDisplayBindingData::PhysicsSystem::staticClass
// ----------------------------------------------------------------------------
void * hkpDisplayBindingData::PhysicsSystem::staticClass()
{
  return &hkpDisplayBindingDataPhysicsSystemClass;
}

// ----------------------------------------------------------------------------
// Function: hkpDisplayBindingData::staticClass  (binary VA: 0x1823440)
// Original: hkpDisplayBindingData::staticClass
// ----------------------------------------------------------------------------
void * hkpDisplayBindingData::staticClass()
{
  return &hkpDisplayBindingDataClass;
}


