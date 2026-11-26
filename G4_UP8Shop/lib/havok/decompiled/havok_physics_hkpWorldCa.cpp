#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpWorldCa.h"

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireActionAdded  (binary VA: 0x1769670)
// Original: hkpWorldCallbackUtil::fireActionAdded
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireActionAdded(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *((uint32_t *)self + 73) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *((uint32_t *)self + 72);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtactAddCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 72) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 8, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *((uint32_t *)self + 73) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *((uint32_t *)self + 72);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *((uint32_t *)self + 73) - 1;
          *((uint32_t *)self + 73) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireActionRemoved  (binary VA: 0x17697d0)
// Original: hkpWorldCallbackUtil::fireActionRemoved
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireActionRemoved(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *((uint32_t *)self + 73) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *((uint32_t *)self + 72);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtactRemCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 72) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 12, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *((uint32_t *)self + 73) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *((uint32_t *)self + 72);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *((uint32_t *)self + 73) - 1;
          *((uint32_t *)self + 73) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireEntityAdded  (binary VA: 0x1769930)
// Original: hkpWorldCallbackUtil::fireEntityAdded
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireEntityAdded(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *((uint32_t *)self + 76) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *((uint32_t *)self + 75);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtentAddCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 75) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 8, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *((uint32_t *)self + 76) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *((uint32_t *)self + 75);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *((uint32_t *)self + 76) - 1;
          *((uint32_t *)self + 76) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireEntityRemoved  (binary VA: 0x1769a90)
// Original: hkpWorldCallbackUtil::fireEntityRemoved
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireEntityRemoved(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *((uint32_t *)self + 76) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *((uint32_t *)self + 75);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtentRemCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 75) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 12, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *((uint32_t *)self + 76) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *((uint32_t *)self + 75);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *((uint32_t *)self + 76) - 1;
          *((uint32_t *)self + 76) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireEntityShapeSet  (binary VA: 0x1769bf0)
// Original: hkpWorldCallbackUtil::fireEntityShapeSet
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireEntityShapeSet(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *((uint32_t *)self + 76) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *((uint32_t *)self + 75);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtsetShapeCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 75) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 16, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *((uint32_t *)self + 76) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *((uint32_t *)self + 75);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *((uint32_t *)self + 76) - 1;
          *((uint32_t *)self + 76) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireEntitySetMotionType  (binary VA: 0x1769d50)
// Original: hkpWorldCallbackUtil::fireEntitySetMotionType
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireEntitySetMotionType(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *((uint32_t *)self + 76) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *((uint32_t *)self + 75);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtsetMotionTypeCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 75) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 20, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *((uint32_t *)self + 76) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *((uint32_t *)self + 75);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *((uint32_t *)self + 76) - 1;
          *((uint32_t *)self + 76) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::firePhantomAdded  (binary VA: 0x1769eb0)
// Original: hkpWorldCallbackUtil::firePhantomAdded
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::firePhantomAdded(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *((uint32_t *)self + 79) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *((uint32_t *)self + 78);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtphntAddCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 78) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 8, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *((uint32_t *)self + 79) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *((uint32_t *)self + 78);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *((uint32_t *)self + 79) - 1;
          *((uint32_t *)self + 79) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::firePhantomRemoved  (binary VA: 0x176a010)
// Original: hkpWorldCallbackUtil::firePhantomRemoved
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::firePhantomRemoved(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *((uint32_t *)self + 79) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *((uint32_t *)self + 78);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtphntRemCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 78) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 12, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *((uint32_t *)self + 79) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *((uint32_t *)self + 78);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *((uint32_t *)self + 79) - 1;
          *((uint32_t *)self + 79) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::firePhantomShapeSet  (binary VA: 0x176a170)
// Original: hkpWorldCallbackUtil::firePhantomShapeSet
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::firePhantomShapeSet(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *((uint32_t *)self + 79) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *((uint32_t *)self + 78);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtsetShapeCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 78) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 16, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *((uint32_t *)self + 79) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *((uint32_t *)self + 78);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *((uint32_t *)self + 79) - 1;
          *((uint32_t *)self + 79) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireConstraintAdded  (binary VA: 0x176a2d0)
// Original: hkpWorldCallbackUtil::fireConstraintAdded
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireConstraintAdded(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *((uint32_t *)self + 82) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *((uint32_t *)self + 81);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtconAddCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 81) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 8, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *((uint32_t *)self + 82) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *((uint32_t *)self + 81);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *((uint32_t *)self + 82) - 1;
          *((uint32_t *)self + 82) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireConstraintRemoved  (binary VA: 0x176a430)
// Original: hkpWorldCallbackUtil::fireConstraintRemoved
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireConstraintRemoved(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *((uint32_t *)self + 82) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *((uint32_t *)self + 81);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtconRemCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 81) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 12, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *((uint32_t *)self + 82) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *((uint32_t *)self + 81);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *((uint32_t *)self + 82) - 1;
          *((uint32_t *)self + 82) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireConstraintViolated  (binary VA: 0x176a590)
// Original: hkpWorldCallbackUtil::fireConstraintViolated
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireConstraintViolated(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *((uint32_t *)self + 82) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *((uint32_t *)self + 81);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtconVioCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 81) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 20, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *((uint32_t *)self + 82) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *((uint32_t *)self + 81);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *((uint32_t *)self + 82) - 1;
          *((uint32_t *)self + 82) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireConstraintBroken  (binary VA: 0x176a6f0)
// Original: hkpWorldCallbackUtil::fireConstraintBroken
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireConstraintBroken(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  uint64_t v10; // rax
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  result = *(uint32_t *)(a1 + 328) - 1;
  v16 = result;
  if ( result >= 0 )
  {
    v3 = 4 * result;
    do
    {
      v4 = *(uint32_t *)(*(uint32_t *)(a1 + 324) + v3);
      if ( v4 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v6 = *address;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtconBrokenCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
        }
        G4_VCALL<void>(v4, 24, a2);
        v9 = *(uint32_t **)(v6 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v6 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v10 = __rdtsc();
          v9[1] = v10;
          *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v16;
      v3 -= 4;
    }
    while ( v16 != -1 );
    result = *(uint32_t *)(a1 + 328);
    v11 = result - 1;
    if ( result - 1 >= 0 )
    {
      v12 = 4 * v11;
      do
      {
        result = *(uint32_t *)(a1 + 324);
        v13 = result + v12;
        if ( *(uint32_t *)(result + v12) == 0 )
        {
          v14 = *(uint32_t *)(a1 + 328) - 1;
          *(uint32_t *)(a1 + 328) = v14;
          v17 = 4 * (v14 - v11);
          v15 = result + v12 + 4;
          result = v17;
          if ( v17 > 0 )
          {
            for ( result = 0; result < v17; result += 4 )
              *(uint32_t *)(v13 + result) = *(uint32_t *)(v15 + result);
          }
        }
        --v11;
        v12 -= 4;
      }
      while ( v11 != -1 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireConstraintRepaired  (binary VA: 0x176a850)
// Original: hkpWorldCallbackUtil::fireConstraintRepaired
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireConstraintRepaired(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  uint64_t v10; // rax
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;

  result = *(uint32_t *)(a1 + 328) - 1;
  v16 = result;
  if ( result >= 0 )
  {
    v3 = 4 * result;
    do
    {
      v4 = *(uint32_t *)(*(uint32_t *)(a1 + 324) + v3);
      if ( v4 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v6 = *address;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtconRepairedCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
        }
        G4_VCALL<void>(v4, 28, a2);
        v9 = *(uint32_t **)(v6 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v6 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v10 = __rdtsc();
          v9[1] = v10;
          *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v16;
      v3 -= 4;
    }
    while ( v16 != -1 );
    result = *(uint32_t *)(a1 + 328);
    v11 = result - 1;
    if ( result - 1 >= 0 )
    {
      v12 = 4 * v11;
      do
      {
        result = *(uint32_t *)(a1 + 324);
        v13 = result + v12;
        if ( *(uint32_t *)(result + v12) == 0 )
        {
          v14 = *(uint32_t *)(a1 + 328) - 1;
          *(uint32_t *)(a1 + 328) = v14;
          v17 = 4 * (v14 - v11);
          v15 = result + v12 + 4;
          result = v17;
          if ( v17 > 0 )
          {
            for ( result = 0; result < v17; result += 4 )
              *(uint32_t *)(v13 + result) = *(uint32_t *)(v15 + result);
          }
        }
        --v11;
        v12 -= 4;
      }
      while ( v11 != -1 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireContactPointCallback  (binary VA: 0x176a9b0)
// Original: hkpWorldCallbackUtil::fireContactPointCallback
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireContactPointCallback(int a1, int a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int (***v6)(uint32_t, int);
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int (***v17)(uint32_t, int);

  LODWORD(v2) = *(uint32_t *)(a1 + 424) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(a1 + 420);
      v17 = *(int (****)(uint32_t, int))(v2 + v3);
      if ( v17 != nullptr )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtcpCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(int (****)(uint32_t, int))(*(uint32_t *)(a1 + 420) + v3);
        }
        LODWORD(v2) = (**v6)((uint32_t)(uintptr_t)(v6), a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *(uint32_t *)(a1 + 424) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *(uint32_t *)(a1 + 420);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *(uint32_t *)(a1 + 424) - 1;
          *(uint32_t *)(a1 + 424) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireContactConstraintAddedCallback  (binary VA: 0x176ab10)
// Original: hkpWorldCallbackUtil::fireContactConstraintAddedCallback
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireContactConstraintAddedCallback(int a1, int a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *(uint32_t *)(a1 + 424) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(a1 + 420);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtNewCollCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*(uint32_t *)(a1 + 420) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 4, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *(uint32_t *)(a1 + 424) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *(uint32_t *)(a1 + 420);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *(uint32_t *)(a1 + 424) - 1;
          *(uint32_t *)(a1 + 424) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireContactConstraintRemovedCallback  (binary VA: 0x176ac70)
// Original: hkpWorldCallbackUtil::fireContactConstraintRemovedCallback
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireContactConstraintRemovedCallback(int a1, int a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *(uint32_t *)(a1 + 424) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(a1 + 420);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtFinCollCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*(uint32_t *)(a1 + 420) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 8, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *(uint32_t *)(a1 + 424) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *(uint32_t *)(a1 + 420);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *(uint32_t *)(a1 + 424) - 1;
          *(uint32_t *)(a1 + 424) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireWorldDeleted  (binary VA: 0x176add0)
// Original: hkpWorldCallbackUtil::fireWorldDeleted
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireWorldDeleted(hkpWorldCallbackUtil::Self *self)
{
  int64_t v1; // rax
  int v2;
  int *address;
  int v4;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  int v15;
  int v16;

  LODWORD(v1) = *((uint32_t *)self + 85) - 1;
  v14 = v1;
  if ( (int)v1 >= 0 )
  {
    v2 = 4 * v1;
    do
    {
      LODWORD(v1) = *((uint32_t *)self + 84);
      v16 = *(uint32_t *)(v1 + v2);
      if ( v16 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v4 = *address;
        v5 = v16;
        v6 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
        {
          *v6 = (uint32_t)(uintptr_t)("TtworldDelCb");
          v7 = __rdtsc();
          v6[1] = v7;
          *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
          v5 = *(uint32_t *)(*((uint32_t *)self + 84) + v2);
        }
        LODWORD(v1) = G4_VCALL<int>(v5, 8, self);
        v8 = *(uint32_t **)(v4 + 4);
        if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v4 + 12) )
        {
          *v8 = (uint32_t)(uintptr_t)("Et");
          v1 = __rdtsc();
          v8[1] = v1;
          *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
        }
      }
      --v14;
      v2 -= 4;
    }
    while ( v14 != -1 );
    HIDWORD(v1) = *((uint32_t *)self + 85) - 1;
    if ( v1 >= 0 )
    {
      v9 = 4 * HIDWORD(v1);
      do
      {
        LODWORD(v1) = *((uint32_t *)self + 84);
        v10 = v1 + v9;
        if ( *(uint32_t *)(v1 + v9) == 0 )
        {
          v11 = *((uint32_t *)self + 85) - 1;
          *((uint32_t *)self + 85) = v11;
          v15 = 4 * (v11 - HIDWORD(v1));
          v12 = v1 + v9 + 4;
          LODWORD(v1) = v15;
          if ( v15 > 0 )
          {
            LODWORD(v1) = 0;
            do
            {
              *(uint32_t *)(v10 + v1) = *(uint32_t *)(v12 + v1);
              LODWORD(v1) = v1 + 4;
            }
            while ( (int)v1 < v15 );
          }
        }
        --HIDWORD(v1);
        v9 -= 4;
      }
      while ( HIDWORD(v1) != -1 );
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireWorldRemoveAll  (binary VA: 0x176af20)
// Original: hkpWorldCallbackUtil::fireWorldRemoveAll
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireWorldRemoveAll(hkpWorldCallbackUtil::Self *self)
{
  int64_t v1; // rax
  int v2;
  int *address;
  int v4;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  int v15;
  int v16;

  LODWORD(v1) = *((uint32_t *)self + 85) - 1;
  v14 = v1;
  if ( (int)v1 >= 0 )
  {
    v2 = 4 * v1;
    do
    {
      LODWORD(v1) = *((uint32_t *)self + 84);
      v16 = *(uint32_t *)(v1 + v2);
      if ( v16 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v4 = *address;
        v5 = v16;
        v6 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
        {
          *v6 = (uint32_t)(uintptr_t)("TtworldDelCb");
          v7 = __rdtsc();
          v6[1] = v7;
          *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
          v5 = *(uint32_t *)(*((uint32_t *)self + 84) + v2);
        }
        LODWORD(v1) = G4_VCALL<int>(v5, 12, self);
        v8 = *(uint32_t **)(v4 + 4);
        if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v4 + 12) )
        {
          *v8 = (uint32_t)(uintptr_t)("Et");
          v1 = __rdtsc();
          v8[1] = v1;
          *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
        }
      }
      --v14;
      v2 -= 4;
    }
    while ( v14 != -1 );
    HIDWORD(v1) = *((uint32_t *)self + 85) - 1;
    if ( v1 >= 0 )
    {
      v9 = 4 * HIDWORD(v1);
      do
      {
        LODWORD(v1) = *((uint32_t *)self + 84);
        v10 = v1 + v9;
        if ( *(uint32_t *)(v1 + v9) == 0 )
        {
          v11 = *((uint32_t *)self + 85) - 1;
          *((uint32_t *)self + 85) = v11;
          v15 = 4 * (v11 - HIDWORD(v1));
          v12 = v1 + v9 + 4;
          LODWORD(v1) = v15;
          if ( v15 > 0 )
          {
            LODWORD(v1) = 0;
            do
            {
              *(uint32_t *)(v10 + v1) = *(uint32_t *)(v12 + v1);
              LODWORD(v1) = v1 + 4;
            }
            while ( (int)v1 < v15 );
          }
        }
        --HIDWORD(v1);
        v9 -= 4;
      }
      while ( HIDWORD(v1) != -1 );
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireIslandActivated  (binary VA: 0x176b070)
// Original: hkpWorldCallbackUtil::fireIslandActivated
// ----------------------------------------------------------------------------
hkpWorldCallbackUtil::Self * hkpWorldCallbackUtil::fireIslandActivated(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int v2;
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  uint64_t v10; // rax
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  uint32_t *v21;
  uint64_t v22; // rax
  uint32_t *v23;
  uint64_t v24; // rax
  int v25;
  int v26;
  int v27;
  uint16_t v28;
  int v29;
  int v30;
  hkpWorldCallbackUtil::Self *result;
  int v32;
  int v33;
  int i;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;

  ++*((uint32_t *)self + 35);
  v2 = *((uint32_t *)self + 88);
  if ( v2 - 1 >= 0 )
  {
    v35 = v2 - 1;
    v3 = 4 * (v2 - 1);
    do
    {
      v40 = *(uint32_t *)(*((uint32_t *)self + 87) + v3);
      if ( v40 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v40;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtislActCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 87) + v3);
        }
        G4_VCALL<void>(v6, 8, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v10 = __rdtsc();
          v9[1] = v10;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v35;
      v3 -= 4;
    }
    while ( v35 != -1 );
    v11 = *((uint32_t *)self + 88) - 1;
    if ( v11 >= 0 )
    {
      v12 = 4 * v11;
      do
      {
        v13 = *((uint32_t *)self + 87);
        v14 = v13 + v12;
        if ( *(uint32_t *)(v13 + v12) == 0 )
        {
          v32 = *((uint32_t *)self + 88) - 1;
          *((uint32_t *)self + 88) = v32;
          v39 = 4 * (v32 - v11);
          v33 = v13 + v12 + 4;
          if ( v39 > 0 )
          {
            for ( i = 0; i < v39; i += 4 )
              *(uint32_t *)(v14 + i) = *(uint32_t *)(v33 + i);
          }
        }
        --v11;
        v12 -= 4;
      }
      while ( v11 != -1 );
    }
  }
  v42 = 0;
  v15 = *((uint32_t *)a2 + 20);
  if ( v15 > 0 )
  {
    do
    {
      v16 = *(int **)(*(uint32_t *)(*((uint32_t *)a2 + 19) + 4 * v42) + 532);
      if ( v16 != nullptr )
      {
        v36 = *((uint16_t *)v16 + 2) - 1;
        if ( *((uint16_t *)v16 + 2) != 0 )
        {
          v17 = 4 * (*((uint16_t *)v16 + 2) - 1);
          do
          {
            v41 = *(uint32_t *)(*v16 + v17);
            if ( v41 != 0 )
            {
              v18 = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
              v19 = *v18;
              v20 = v41;
              v21 = *(uint32_t **)(*v18 + 4);
              if ( (unsigned int)(uintptr_t)(v21) < *(uint32_t *)(*v18 + 12) )
              {
                *v21 = (uint32_t)(uintptr_t)("TtentActCb");
                v22 = __rdtsc();
                v21[1] = v22;
                *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v21 + 3);
                v20 = *(uint32_t *)(*v16 + v17);
              }
              G4_VCALL<void>(v20, 12, *(uint32_t *)(*((uint32_t *)a2 + 19) + 4 * v42));
              v23 = *(uint32_t **)(v19 + 4);
              if ( (unsigned int)(uintptr_t)(v23) < *(uint32_t *)(v19 + 12) )
              {
                *v23 = (uint32_t)(uintptr_t)("Et");
                v24 = __rdtsc();
                v23[1] = v24;
                *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v23 + 3);
              }
            }
            --v36;
            v17 -= 4;
          }
          while ( v36 != -1 );
          v25 = *((uint16_t *)v16 + 2) - 1;
          if ( *((uint16_t *)v16 + 2) != 0 )
          {
            v26 = 4 * v25;
            do
            {
              while ( 1 )
              {
                v27 = *v16;
                if ( *(uint32_t *)(*v16 + v26) == 0 )
                {
                  v28 = *((uint16_t *)v16 + 2) - 1;
                  *((uint16_t *)v16 + 2) = v28;
                  if ( v25 < v28 )
                    break;
                }
                --v25;
                v26 -= 4;
                if ( v25 == -1 )
                  goto LABEL_32;
              }
              v29 = v26;
              v30 = v25;
              v37 = v25;
              while ( 1 )
              {
                *(uint32_t *)(v27 + v29) = *(uint32_t *)(v27 + v29 + 4);
                if ( ++v30 >= *((uint16_t *)v16 + 2) )
                  break;
                v27 = *v16;
                v29 += 4;
              }
              --v25;
              v26 -= 4;
            }
            while ( v37 != 0 );
          }
LABEL_32:
          v15 = *((uint32_t *)a2 + 20);
        }
      }
      ++v42;
    }
    while ( v42 < v15 );
  }
  v38 = *((uint32_t *)self + 35);
  result = (hkpWorldCallbackUtil::Self *)(v38 - 1);
  *((uint32_t *)self + 35) = v38 - 1;
  if ( v38 == 1 )
  {
    result = self;
    if ( *((uint8_t *)self + 148) == 0 )
    {
      if ( *((uint32_t *)self + 33) != 0 )
      {
        hkpWorld::internal_executePendingOperations(self);
        result = self;
      }
      if ( *((uint32_t *)result + 39) == 1 && *((uint32_t *)result + 34) != 0 )
        return (hkpWorldCallbackUtil::Self *)hkpWorld::internal_executePendingBodyOperations(result);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireIslandDeactivated  (binary VA: 0x176b3f0)
// Original: hkpWorldCallbackUtil::fireIslandDeactivated
// ----------------------------------------------------------------------------
hkpWorldCallbackUtil::Self * hkpWorldCallbackUtil::fireIslandDeactivated(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int v2;
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  uint64_t v10; // rax
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  uint32_t *v21;
  uint64_t v22; // rax
  uint32_t *v23;
  uint64_t v24; // rax
  int v25;
  int v26;
  int v27;
  uint16_t v28;
  int v29;
  int v30;
  hkpWorldCallbackUtil::Self *result;
  int v32;
  int v33;
  int i;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;

  ++*((uint32_t *)self + 35);
  v2 = *((uint32_t *)self + 88);
  if ( v2 - 1 >= 0 )
  {
    v35 = v2 - 1;
    v3 = 4 * (v2 - 1);
    do
    {
      v40 = *(uint32_t *)(*((uint32_t *)self + 87) + v3);
      if ( v40 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v40;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtislDeacCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 87) + v3);
        }
        G4_VCALL<void>(v6, 12, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v10 = __rdtsc();
          v9[1] = v10;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v35;
      v3 -= 4;
    }
    while ( v35 != -1 );
    v11 = *((uint32_t *)self + 88) - 1;
    if ( v11 >= 0 )
    {
      v12 = 4 * v11;
      do
      {
        v13 = *((uint32_t *)self + 87);
        v14 = v13 + v12;
        if ( *(uint32_t *)(v13 + v12) == 0 )
        {
          v32 = *((uint32_t *)self + 88) - 1;
          *((uint32_t *)self + 88) = v32;
          v39 = 4 * (v32 - v11);
          v33 = v13 + v12 + 4;
          if ( v39 > 0 )
          {
            for ( i = 0; i < v39; i += 4 )
              *(uint32_t *)(v14 + i) = *(uint32_t *)(v33 + i);
          }
        }
        --v11;
        v12 -= 4;
      }
      while ( v11 != -1 );
    }
  }
  v42 = 0;
  v15 = *((uint32_t *)a2 + 20);
  if ( v15 > 0 )
  {
    do
    {
      v16 = *(int **)(*(uint32_t *)(*((uint32_t *)a2 + 19) + 4 * v42) + 532);
      if ( v16 != nullptr )
      {
        v36 = *((uint16_t *)v16 + 2) - 1;
        if ( *((uint16_t *)v16 + 2) != 0 )
        {
          v17 = 4 * (*((uint16_t *)v16 + 2) - 1);
          do
          {
            v41 = *(uint32_t *)(*v16 + v17);
            if ( v41 != 0 )
            {
              v18 = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
              v19 = *v18;
              v20 = v41;
              v21 = *(uint32_t **)(*v18 + 4);
              if ( (unsigned int)(uintptr_t)(v21) < *(uint32_t *)(*v18 + 12) )
              {
                *v21 = (uint32_t)(uintptr_t)("TtentDeacCb");
                v22 = __rdtsc();
                v21[1] = v22;
                *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v21 + 3);
                v20 = *(uint32_t *)(*v16 + v17);
              }
              G4_VCALL<void>(v20, 8, *(uint32_t *)(*((uint32_t *)a2 + 19) + 4 * v42));
              v23 = *(uint32_t **)(v19 + 4);
              if ( (unsigned int)(uintptr_t)(v23) < *(uint32_t *)(v19 + 12) )
              {
                *v23 = (uint32_t)(uintptr_t)("Et");
                v24 = __rdtsc();
                v23[1] = v24;
                *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v23 + 3);
              }
            }
            --v36;
            v17 -= 4;
          }
          while ( v36 != -1 );
          v25 = *((uint16_t *)v16 + 2) - 1;
          if ( *((uint16_t *)v16 + 2) != 0 )
          {
            v26 = 4 * v25;
            do
            {
              while ( 1 )
              {
                v27 = *v16;
                if ( *(uint32_t *)(*v16 + v26) == 0 )
                {
                  v28 = *((uint16_t *)v16 + 2) - 1;
                  *((uint16_t *)v16 + 2) = v28;
                  if ( v25 < v28 )
                    break;
                }
                --v25;
                v26 -= 4;
                if ( v25 == -1 )
                  goto LABEL_32;
              }
              v29 = v26;
              v30 = v25;
              v37 = v25;
              while ( 1 )
              {
                *(uint32_t *)(v27 + v29) = *(uint32_t *)(v27 + v29 + 4);
                if ( ++v30 >= *((uint16_t *)v16 + 2) )
                  break;
                v27 = *v16;
                v29 += 4;
              }
              --v25;
              v26 -= 4;
            }
            while ( v37 != 0 );
          }
LABEL_32:
          v15 = *((uint32_t *)a2 + 20);
        }
      }
      ++v42;
    }
    while ( v42 < v15 );
  }
  v38 = *((uint32_t *)self + 35);
  result = (hkpWorldCallbackUtil::Self *)(v38 - 1);
  *((uint32_t *)self + 35) = v38 - 1;
  if ( v38 == 1 )
  {
    result = self;
    if ( *((uint8_t *)self + 148) == 0 )
    {
      if ( *((uint32_t *)self + 33) != 0 )
      {
        hkpWorld::internal_executePendingOperations(self);
        result = self;
      }
      if ( *((uint32_t *)result + 39) == 1 && *((uint32_t *)result + 34) != 0 )
        return (hkpWorldCallbackUtil::Self *)hkpWorld::internal_executePendingBodyOperations(result);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::firePostSimulationCallback  (binary VA: 0x176b770)
// Original: hkpWorldCallbackUtil::firePostSimulationCallback
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::firePostSimulationCallback(hkpWorldCallbackUtil::Self *self)
{
  int result;
  int v2;
  int *address;
  int v4;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  uint32_t *v8;
  uint64_t v9; // rax
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v18 = *((uint32_t *)self + 91);
  result = v18;
  v2 = v18 - 1;
  if ( v18 - 1 >= 0 )
  {
    while ( 1 )
    {
      v16 = *(uint32_t *)(*((uint32_t *)self + 90) + 4 * v2);
      if ( v16 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v4 = *address;
        v5 = v16;
        v6 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
        {
          *v6 = (uint32_t)(uintptr_t)("TtpostSimCb");
          v7 = __rdtsc();
          v6[1] = v7;
          *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
          v5 = *(uint32_t *)(*((uint32_t *)self + 90) + 4 * v2);
        }
        G4_VCALL<void>(v5, 8, self);
        v8 = *(uint32_t **)(v4 + 4);
        if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v4 + 12) )
        {
          *v8 = (uint32_t)(uintptr_t)("Et");
          v9 = __rdtsc();
          v8[1] = v9;
          *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
        }
        result = *((uint32_t *)self + 91);
      }
      if ( --v2 < 0 )
        break;
      if ( v18 > result )
      {
        v10 = v18 - result;
        v18 = result;
        v2 -= v10;
      }
    }
    v11 = --result;
    if ( result >= 0 )
    {
      v12 = 4 * result;
      do
      {
        result = *((uint32_t *)self + 90);
        v13 = result + v12;
        if ( *(uint32_t *)(result + v12) == 0 )
        {
          v14 = *((uint32_t *)self + 91) - 1;
          *((uint32_t *)self + 91) = v14;
          v17 = 4 * (v14 - v11);
          v15 = result + v12 + 4;
          result = v17;
          if ( v17 > 0 )
          {
            for ( result = 0; result < v17; result += 4 )
              *(uint32_t *)(v13 + result) = *(uint32_t *)(v15 + result);
          }
        }
        --v11;
        v12 -= 4;
      }
      while ( v11 != -1 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::firePostIntegrateCallback  (binary VA: 0x176b8e0)
// Original: hkpWorldCallbackUtil::firePostIntegrateCallback
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::firePostIntegrateCallback(int a1, int a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *(uint32_t *)(a1 + 376) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(a1 + 372);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtpostIntCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*(uint32_t *)(a1 + 372) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 8, a1, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *(uint32_t *)(a1 + 376) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *(uint32_t *)(a1 + 372);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *(uint32_t *)(a1 + 376) - 1;
          *(uint32_t *)(a1 + 376) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::firePostCollideCallback  (binary VA: 0x176ba40)
// Original: hkpWorldCallbackUtil::firePostCollideCallback
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::firePostCollideCallback(int a1, int a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *(uint32_t *)(a1 + 388) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(a1 + 384);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtpostCollCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*(uint32_t *)(a1 + 384) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 8, a1, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *(uint32_t *)(a1 + 388) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *(uint32_t *)(a1 + 384);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *(uint32_t *)(a1 + 388) - 1;
          *(uint32_t *)(a1 + 388) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireIslandPostIntegrateCallback  (binary VA: 0x176bba0)
// Original: hkpWorldCallbackUtil::fireIslandPostIntegrateCallback
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireIslandPostIntegrateCallback(int a1, int a2, int a3)
{
  int64_t v3; // rax
  int v4;
  int *address;
  int v6;
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  int v17;
  int v18;

  LODWORD(v3) = *(uint32_t *)(a1 + 400) - 1;
  v16 = v3;
  if ( (int)v3 >= 0 )
  {
    v4 = 4 * v3;
    do
    {
      LODWORD(v3) = *(uint32_t *)(a1 + 396);
      v18 = *(uint32_t *)(v3 + v4);
      if ( v18 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v6 = *address;
        v7 = v18;
        v8 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
        {
          *v8 = (uint32_t)(uintptr_t)("TtpostIntCb");
          v9 = __rdtsc();
          v8[1] = v9;
          *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
          v7 = *(uint32_t *)(*(uint32_t *)(a1 + 396) + v4);
        }
        LODWORD(v3) = G4_VCALL<int>(v7, 8, a2, a3);
        v10 = *(uint32_t **)(v6 + 4);
        if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(v6 + 12) )
        {
          *v10 = (uint32_t)(uintptr_t)("Et");
          v3 = __rdtsc();
          v10[1] = v3;
          *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
        }
      }
      --v16;
      v4 -= 4;
    }
    while ( v16 != -1 );
    HIDWORD(v3) = *(uint32_t *)(a1 + 400) - 1;
    if ( v3 >= 0 )
    {
      v11 = 4 * HIDWORD(v3);
      do
      {
        LODWORD(v3) = *(uint32_t *)(a1 + 396);
        v12 = v3 + v11;
        if ( *(uint32_t *)(v3 + v11) == 0 )
        {
          v13 = *(uint32_t *)(a1 + 400) - 1;
          *(uint32_t *)(a1 + 400) = v13;
          v17 = 4 * (v13 - HIDWORD(v3));
          v14 = v3 + v11 + 4;
          LODWORD(v3) = v17;
          if ( v17 > 0 )
          {
            LODWORD(v3) = 0;
            do
            {
              *(uint32_t *)(v12 + v3) = *(uint32_t *)(v14 + v3);
              LODWORD(v3) = v3 + 4;
            }
            while ( (int)v3 < v17 );
          }
        }
        --HIDWORD(v3);
        v11 -= 4;
      }
      while ( HIDWORD(v3) != -1 );
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireIslandPostCollideCallback  (binary VA: 0x176bd00)
// Original: hkpWorldCallbackUtil::fireIslandPostCollideCallback
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireIslandPostCollideCallback(int a1, int a2, int a3)
{
  int64_t v3; // rax
  int v4;
  int *address;
  int v6;
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  int v17;
  int v18;

  LODWORD(v3) = *(uint32_t *)(a1 + 412) - 1;
  v16 = v3;
  if ( (int)v3 >= 0 )
  {
    v4 = 4 * v3;
    do
    {
      LODWORD(v3) = *(uint32_t *)(a1 + 408);
      v18 = *(uint32_t *)(v3 + v4);
      if ( v18 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v6 = *address;
        v7 = v18;
        v8 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
        {
          *v8 = (uint32_t)(uintptr_t)("TtpostCollCb");
          v9 = __rdtsc();
          v8[1] = v9;
          *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
          v7 = *(uint32_t *)(*(uint32_t *)(a1 + 408) + v4);
        }
        LODWORD(v3) = G4_VCALL<int>(v7, 8, a2, a3);
        v10 = *(uint32_t **)(v6 + 4);
        if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(v6 + 12) )
        {
          *v10 = (uint32_t)(uintptr_t)("Et");
          v3 = __rdtsc();
          v10[1] = v3;
          *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
        }
      }
      --v16;
      v4 -= 4;
    }
    while ( v16 != -1 );
    HIDWORD(v3) = *(uint32_t *)(a1 + 412) - 1;
    if ( v3 >= 0 )
    {
      v11 = 4 * HIDWORD(v3);
      do
      {
        LODWORD(v3) = *(uint32_t *)(a1 + 408);
        v12 = v3 + v11;
        if ( *(uint32_t *)(v3 + v11) == 0 )
        {
          v13 = *(uint32_t *)(a1 + 412) - 1;
          *(uint32_t *)(a1 + 412) = v13;
          v17 = 4 * (v13 - HIDWORD(v3));
          v14 = v3 + v11 + 4;
          LODWORD(v3) = v17;
          if ( v17 > 0 )
          {
            LODWORD(v3) = 0;
            do
            {
              *(uint32_t *)(v12 + v3) = *(uint32_t *)(v14 + v3);
              LODWORD(v3) = v3 + 4;
            }
            while ( (int)v3 < v17 );
          }
        }
        --HIDWORD(v3);
        v11 -= 4;
      }
      while ( HIDWORD(v3) != -1 );
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireContactImpulseLimitBreached  (binary VA: 0x176be60)
// Original: hkpWorldCallbackUtil::fireContactImpulseLimitBreached
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireContactImpulseLimitBreached(int a1, int a2, int a3)
{
  int64_t v3; // rax
  int v4;
  int *address;
  int v6;
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  int v17;
  int v18;

  LODWORD(v3) = *(uint32_t *)(a1 + 436) - 1;
  v16 = v3;
  if ( (int)v3 >= 0 )
  {
    v4 = 4 * v3;
    do
    {
      LODWORD(v3) = *(uint32_t *)(a1 + 432);
      v18 = *(uint32_t *)(v3 + v4);
      if ( v18 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v6 = *address;
        v7 = v18;
        v8 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
        {
          *v8 = (uint32_t)(uintptr_t)("TtimpLimitCb");
          v9 = __rdtsc();
          v8[1] = v9;
          *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
          v7 = *(uint32_t *)(*(uint32_t *)(a1 + 432) + v4);
        }
        LODWORD(v3) = G4_VCALL<int>(v7, 8, a2, a3);
        v10 = *(uint32_t **)(v6 + 4);
        if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(v6 + 12) )
        {
          *v10 = (uint32_t)(uintptr_t)("Et");
          v3 = __rdtsc();
          v10[1] = v3;
          *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
        }
      }
      --v16;
      v4 -= 4;
    }
    while ( v16 != -1 );
    HIDWORD(v3) = *(uint32_t *)(a1 + 436) - 1;
    if ( v3 >= 0 )
    {
      v11 = 4 * HIDWORD(v3);
      do
      {
        LODWORD(v3) = *(uint32_t *)(a1 + 432);
        v12 = v3 + v11;
        if ( *(uint32_t *)(v3 + v11) == 0 )
        {
          v13 = *(uint32_t *)(a1 + 436) - 1;
          *(uint32_t *)(a1 + 436) = v13;
          v17 = 4 * (v13 - HIDWORD(v3));
          v14 = v3 + v11 + 4;
          LODWORD(v3) = v17;
          if ( v17 > 0 )
          {
            LODWORD(v3) = 0;
            do
            {
              *(uint32_t *)(v12 + v3) = *(uint32_t *)(v14 + v3);
              LODWORD(v3) = v3 + 4;
            }
            while ( (int)v3 < v17 );
          }
        }
        --HIDWORD(v3);
        v11 -= 4;
      }
      while ( HIDWORD(v3) != -1 );
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireInactiveEntityMoved  (binary VA: 0x176bfc0)
// Original: hkpWorldCallbackUtil::fireInactiveEntityMoved
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireInactiveEntityMoved(hkpWorldCallbackUtil::Self *self, hkpWorld::Self *a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *((uint32_t *)self + 91) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *((uint32_t *)self + 90);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtentMvdCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*((uint32_t *)self + 90) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 12, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *((uint32_t *)self + 91) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *((uint32_t *)self + 90);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *((uint32_t *)self + 91) - 1;
          *((uint32_t *)self + 91) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireContactPointAdded  (binary VA: 0x176c120)
// Original: hkpWorldCallbackUtil::fireContactPointAdded
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireContactPointAdded(int a1, int a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  *(uint32_t *)(a2 + 12) = 0;
  LODWORD(v2) = *(uint32_t *)(a1 + 424) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(a1 + 420);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtcpAddCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*(uint32_t *)(a1 + 420) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 20, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *(uint32_t *)(a1 + 424) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *(uint32_t *)(a1 + 420);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *(uint32_t *)(a1 + 424) - 1;
          *(uint32_t *)(a1 + 424) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireContactPointRemoved  (binary VA: 0x176c280)
// Original: hkpWorldCallbackUtil::fireContactPointRemoved
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireContactPointRemoved(int a1, int a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  *(uint32_t *)(a2 + 16) = 0;
  LODWORD(v2) = *(uint32_t *)(a1 + 424) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(a1 + 420);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtcpRemCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*(uint32_t *)(a1 + 420) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 24, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *(uint32_t *)(a1 + 424) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *(uint32_t *)(a1 + 420);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *(uint32_t *)(a1 + 424) - 1;
          *(uint32_t *)(a1 + 424) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpWorldCallbackUtil::fireContactProcess  (binary VA: 0x176c3e0)
// Original: hkpWorldCallbackUtil::fireContactProcess
// ----------------------------------------------------------------------------
int hkpWorldCallbackUtil::fireContactProcess(int a1, int a2)
{
  int64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v15;
  int v16;
  int v17;

  *(uint32_t *)(a2 + 8) = 0;
  LODWORD(v2) = *(uint32_t *)(a1 + 424) - 1;
  v15 = v2;
  if ( (int)v2 >= 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(a1 + 420);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtcpProcCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*(uint32_t *)(a1 + 420) + v3);
        }
        LODWORD(v2) = G4_VCALL<int>(v6, 28, a2);
        v9 = *(uint32_t **)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
        {
          *v9 = (uint32_t)(uintptr_t)("Et");
          v2 = __rdtsc();
          v9[1] = v2;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
        }
      }
      --v15;
      v3 -= 4;
    }
    while ( v15 != -1 );
    HIDWORD(v2) = *(uint32_t *)(a1 + 424) - 1;
    if ( v2 >= 0 )
    {
      v10 = 4 * HIDWORD(v2);
      do
      {
        LODWORD(v2) = *(uint32_t *)(a1 + 420);
        v11 = v2 + v10;
        if ( *(uint32_t *)(v2 + v10) == 0 )
        {
          v12 = *(uint32_t *)(a1 + 424) - 1;
          *(uint32_t *)(a1 + 424) = v12;
          v16 = 4 * (v12 - HIDWORD(v2));
          v13 = v2 + v10 + 4;
          LODWORD(v2) = v16;
          if ( v16 > 0 )
          {
            LODWORD(v2) = 0;
            do
            {
              *(uint32_t *)(v11 + v2) = *(uint32_t *)(v13 + v2);
              LODWORD(v2) = v2 + 4;
            }
            while ( (int)v2 < v16 );
          }
        }
        --HIDWORD(v2);
        v10 -= 4;
      }
      while ( HIDWORD(v2) != -1 );
    }
  }
  return v2;
}


