#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpEntityC.h"

// ----------------------------------------------------------------------------
// Function: hkpEntityCallbackUtil::fireEntityAdded  (binary VA: 0x1780bf0)
// Original: hkpEntityCallbackUtil::fireEntityAdded
// ----------------------------------------------------------------------------
int hkpEntityCallbackUtil::fireEntityAdded(hkpEntityCallbackUtil::Self *self)
{
  uint64_t v1; // rax
  int v2;
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v11;
  int v12;

  LODWORD(v1) = (uint32_t)(uintptr_t)(self);
  v2 = *((uint32_t *)self + 133);
  if ( v2 != 0 )
  {
    LODWORD(v1) = *(uint16_t *)(v2 + 12) - 1;
    v11 = v1;
    if ( *(uint16_t *)(v2 + 12) != 0 )
    {
      v3 = 4 * v1;
      do
      {
        LODWORD(v1) = *(uint32_t *)(v2 + 8);
        v12 = *(uint32_t *)(v1 + v3);
        if ( v12 != 0 )
        {
          address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
          v5 = *address;
          v6 = v12;
          v7 = *(uint32_t **)(*address + 4);
          if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
          {
            *v7 = (uint32_t)(uintptr_t)("TtentAddCb");
            v8 = __rdtsc();
            v7[1] = v8;
            *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
            v6 = *(uint32_t *)(*(uint32_t *)(v2 + 8) + v3);
          }
          LODWORD(v1) = G4_VCALL<int>(v6, 8, self);
          v9 = *(uint32_t **)(v5 + 4);
          if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
          {
            *v9 = (uint32_t)(uintptr_t)("Et");
            v1 = __rdtsc();
            v9[1] = v1;
            *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
          }
        }
        --v11;
        v3 -= 4;
      }
      while ( v11 != -1 );
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpEntityCallbackUtil::fireEntityRemoved  (binary VA: 0x1780cc0)
// Original: hkpEntityCallbackUtil::fireEntityRemoved
// ----------------------------------------------------------------------------
int hkpEntityCallbackUtil::fireEntityRemoved(hkpEntityCallbackUtil::Self *self)
{
  hkpEntityCallbackUtil::Self *v1;
  int v2;
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  uint64_t v10; // rax
  int *v11;
  int v12;
  uint32_t *v13;
  uint64_t v14; // rax
  uint32_t *v15;
  int *v16;
  int v17;
  uint32_t *v18;
  uint64_t v19; // rax
  uint32_t *v20;
  uint64_t v21; // rax
  int *v22;
  int v23;
  uint32_t *v24;
  uint64_t v25; // rax
  uint32_t *v26;
  uint64_t v27; // rax
  uint64_t v28; // rax
  int v30;
  int v31;

  v1 = self;
  v2 = *((uint32_t *)self + 133);
  if ( v2 != 0 )
  {
    v30 = *(uint16_t *)(v2 + 12) - 1;
    if ( *(uint16_t *)(v2 + 12) != 0 )
    {
      v3 = 4 * (*(uint16_t *)(v2 + 12) - 1);
      do
      {
        v31 = *(uint32_t *)(*(uint32_t *)(v2 + 8) + v3);
        if ( v31 != 0 )
        {
          address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
          v5 = *address;
          v6 = v31;
          v7 = *(uint32_t **)(*address + 4);
          if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
          {
            *v7 = (uint32_t)(uintptr_t)("TtentRemCb");
            v8 = __rdtsc();
            v7[1] = v8;
            *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
            v6 = *(uint32_t *)(*(uint32_t *)(v2 + 8) + v3);
          }
          G4_VCALL<void>(v6, 12, self);
          v9 = *(uint32_t **)(v5 + 4);
          if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
          {
            *v9 = (uint32_t)(uintptr_t)("Et");
            v10 = __rdtsc();
            v9[1] = v10;
            *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
          }
        }
        --v30;
        v3 -= 4;
      }
      while ( v30 != -1 );
      v1 = self;
    }
  }
  while ( *((uint16_t *)v1 + 86) != 0 )
  {
    v11 = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
    v12 = *v11;
    v13 = *(uint32_t **)(*v11 + 4);
    if ( (unsigned int)(uintptr_t)(v13) < *(uint32_t *)(*v11 + 12) )
    {
      *v13 = (uint32_t)(uintptr_t)("TtentRemCb");
      v14 = __rdtsc();
      v13[1] = v14;
      *(uint32_t *)(v12 + 4) = (uint32_t)(uintptr_t)(v13 + 3);
    }
    (*(void (**)(uint32_t, hkpEntityCallbackUtil::Self *))(***((uint32_t ***)v1 + 42) + 24))(**((uint32_t **)v1 + 42), v1);
    v15 = *(uint32_t **)(v12 + 4);
    if ( (unsigned int)(uintptr_t)(v15) < *(uint32_t *)(v12 + 12) )
    {
      *v15 = (uint32_t)(uintptr_t)("Et");
      v27 = __rdtsc();
      v15[1] = v27;
      *(uint32_t *)(v12 + 4) = (uint32_t)(uintptr_t)(v15 + 3);
    }
  }
  hkpEntity::sortConstraintsSlavesDeterministically((int)(uintptr_t)(v1));
  while ( 1 )
  {
    LODWORD(v21) = *((uint32_t *)v1 + 45);
    if ( (uint32_t)v21 == 0 )
      break;
    v16 = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
    v17 = *v16;
    v18 = *(uint32_t **)(*v16 + 4);
    if ( (unsigned int)(uintptr_t)(v18) < *(uint32_t *)(*v16 + 12) )
    {
      *v18 = (uint32_t)(uintptr_t)("TtentRemCb");
      v19 = __rdtsc();
      v18[1] = v19;
      *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v18 + 3);
    }
    (*(void (**)(uint32_t, hkpEntityCallbackUtil::Self *))(***((uint32_t ***)v1 + 44) + 24))(**((uint32_t **)v1 + 44), v1);
    v20 = *(uint32_t **)(v17 + 4);
    if ( (unsigned int)(uintptr_t)(v20) < *(uint32_t *)(v17 + 12) )
    {
      *v20 = (uint32_t)(uintptr_t)("Et");
      v28 = __rdtsc();
      v20[1] = v28;
      *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v20 + 3);
    }
  }
  while ( *((uint16_t *)v1 + 262) != 0 )
  {
    v22 = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
    v23 = *v22;
    v24 = *(uint32_t **)(*v22 + 4);
    if ( (unsigned int)(uintptr_t)(v24) < *(uint32_t *)(*v22 + 12) )
    {
      *v24 = (uint32_t)(uintptr_t)("TtentRemCb");
      v25 = __rdtsc();
      v24[1] = v25;
      *(uint32_t *)(v23 + 4) = (uint32_t)(uintptr_t)(v24 + 3);
    }
    LODWORD(v21) = (*(int (**)(uint32_t, hkpEntityCallbackUtil::Self *))(***((uint32_t ***)v1 + 130) + 32))(
                     **((uint32_t **)v1 + 130),
                     v1);
    v26 = *(uint32_t **)(v23 + 4);
    if ( (unsigned int)(uintptr_t)(v26) < *(uint32_t *)(v23 + 12) )
    {
      *v26 = (uint32_t)(uintptr_t)("Et");
      v21 = __rdtsc();
      v26[1] = v21;
      *(uint32_t *)(v23 + 4) = (uint32_t)(uintptr_t)(v26 + 3);
    }
  }
  return v21;
}

// ----------------------------------------------------------------------------
// Function: hkpEntityCallbackUtil::fireEntityShapeSet  (binary VA: 0x1780f00)
// Original: hkpEntityCallbackUtil::fireEntityShapeSet
// ----------------------------------------------------------------------------
int hkpEntityCallbackUtil::fireEntityShapeSet(hkpEntityCallbackUtil::Self *self)
{
  uint64_t v1; // rax
  int v2;
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v11;
  int v12;

  LODWORD(v1) = (uint32_t)(uintptr_t)(self);
  v2 = *((uint32_t *)self + 133);
  if ( v2 != 0 )
  {
    LODWORD(v1) = *(uint16_t *)(v2 + 12) - 1;
    v11 = v1;
    if ( *(uint16_t *)(v2 + 12) != 0 )
    {
      v3 = 4 * v1;
      do
      {
        LODWORD(v1) = *(uint32_t *)(v2 + 8);
        v12 = *(uint32_t *)(v1 + v3);
        if ( v12 != 0 )
        {
          address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
          v5 = *address;
          v6 = v12;
          v7 = *(uint32_t **)(*address + 4);
          if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
          {
            *v7 = (uint32_t)(uintptr_t)("TtsetShapeCb");
            v8 = __rdtsc();
            v7[1] = v8;
            *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
            v6 = *(uint32_t *)(*(uint32_t *)(v2 + 8) + v3);
          }
          LODWORD(v1) = G4_VCALL<int>(v6, 16, self);
          v9 = *(uint32_t **)(v5 + 4);
          if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
          {
            *v9 = (uint32_t)(uintptr_t)("Et");
            v1 = __rdtsc();
            v9[1] = v1;
            *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
          }
        }
        --v11;
        v3 -= 4;
      }
      while ( v11 != -1 );
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpEntityCallbackUtil::fireEntitySetMotionType  (binary VA: 0x1780fd0)
// Original: hkpEntityCallbackUtil::fireEntitySetMotionType
// ----------------------------------------------------------------------------
int hkpEntityCallbackUtil::fireEntitySetMotionType(hkpEntityCallbackUtil::Self *self)
{
  uint64_t v1; // rax
  int v2;
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v11;
  int v12;

  LODWORD(v1) = (uint32_t)(uintptr_t)(self);
  v2 = *((uint32_t *)self + 133);
  if ( v2 != 0 )
  {
    LODWORD(v1) = *(uint16_t *)(v2 + 12) - 1;
    v11 = v1;
    if ( *(uint16_t *)(v2 + 12) != 0 )
    {
      v3 = 4 * v1;
      do
      {
        LODWORD(v1) = *(uint32_t *)(v2 + 8);
        v12 = *(uint32_t *)(v1 + v3);
        if ( v12 != 0 )
        {
          address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
          v5 = *address;
          v6 = v12;
          v7 = *(uint32_t **)(*address + 4);
          if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
          {
            *v7 = (uint32_t)(uintptr_t)("TtsetMotionTypeCb");
            v8 = __rdtsc();
            v7[1] = v8;
            *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
            v6 = *(uint32_t *)(*(uint32_t *)(v2 + 8) + v3);
          }
          LODWORD(v1) = G4_VCALL<int>(v6, 20, self);
          v9 = *(uint32_t **)(v5 + 4);
          if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
          {
            *v9 = (uint32_t)(uintptr_t)("Et");
            v1 = __rdtsc();
            v9[1] = v1;
            *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
          }
        }
        --v11;
        v3 -= 4;
      }
      while ( v11 != -1 );
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpEntityCallbackUtil::fireEntityDeleted  (binary VA: 0x17810a0)
// Original: hkpEntityCallbackUtil::fireEntityDeleted
// ----------------------------------------------------------------------------
int hkpEntityCallbackUtil::fireEntityDeleted(hkpEntityCallbackUtil::Self *self)
{
  uint64_t v1; // rax
  int v2;
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v11;
  int v12;

  LODWORD(v1) = (uint32_t)(uintptr_t)(self);
  v2 = *((uint32_t *)self + 133);
  if ( v2 != 0 )
  {
    LODWORD(v1) = *(uint16_t *)(v2 + 12) - 1;
    v11 = v1;
    if ( *(uint16_t *)(v2 + 12) != 0 )
    {
      v3 = 4 * v1;
      do
      {
        LODWORD(v1) = *(uint32_t *)(v2 + 8);
        v12 = *(uint32_t *)(v1 + v3);
        if ( v12 != 0 )
        {
          address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
          v5 = *address;
          v6 = v12;
          v7 = *(uint32_t **)(*address + 4);
          if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
          {
            *v7 = (uint32_t)(uintptr_t)("TtentDelCb");
            v8 = __rdtsc();
            v7[1] = v8;
            *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
            v6 = *(uint32_t *)(*(uint32_t *)(v2 + 8) + v3);
          }
          LODWORD(v1) = G4_VCALL<int>(v6, 24, self);
          v9 = *(uint32_t **)(v5 + 4);
          if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(v5 + 12) )
          {
            *v9 = (uint32_t)(uintptr_t)("Et");
            v1 = __rdtsc();
            v9[1] = v1;
            *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
          }
        }
        --v11;
        v3 -= 4;
      }
      while ( v11 != -1 );
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpEntityCallbackUtil::fireContactPointCallbackInternal  (binary VA: 0x1781170)
// Original: hkpEntityCallbackUtil::fireContactPointCallbackInternal
// ----------------------------------------------------------------------------
int hkpEntityCallbackUtil::fireContactPointCallbackInternal(int a1, int a2)
{
  uint64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int (***v6)(uint32_t, int);
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  uint16_t v12;
  int v13;
  int v15;
  int v16;
  int (***v17)(uint32_t, int);

  LODWORD(v2) = *(uint16_t *)(a1 + 516) - 1;
  v15 = v2;
  if ( *(uint16_t *)(a1 + 516) != 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(a1 + 512);
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
          v6 = *(int (****)(uint32_t, int))(*(uint32_t *)(a1 + 512) + v3);
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
    v10 = *(uint16_t *)(a1 + 516) - 1;
    if ( *(uint16_t *)(a1 + 516) != 0 )
    {
      v11 = 4 * v10;
      do
      {
        while ( 1 )
        {
          LODWORD(v2) = *(uint32_t *)(a1 + 512);
          if ( *(uint32_t *)(v2 + v11) == 0 )
          {
            v12 = *(uint16_t *)(a1 + 516) - 1;
            *(uint16_t *)(a1 + 516) = v12;
            if ( v10 < v12 )
              break;
          }
          --v10;
          v11 -= 4;
          if ( v10 == -1 )
            return v2;
        }
        HIDWORD(v2) = v11;
        v13 = v10;
        v16 = v10;
        while ( 1 )
        {
          *(uint32_t *)(v2 + HIDWORD(v2)) = *(uint32_t *)(v2 + HIDWORD(v2) + 4);
          ++v13;
          LODWORD(v2) = *(uint16_t *)(a1 + 516);
          if ( v13 >= (int)v2 )
            break;
          LODWORD(v2) = *(uint32_t *)(a1 + 512);
          HIDWORD(v2) += 4;
        }
        --v10;
        v11 -= 4;
      }
      while ( v16 != 0 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpEntityCallbackUtil::fireContactConstraintAddedCallback  (binary VA: 0x17812e0)
// Original: hkpEntityCallbackUtil::fireContactConstraintAddedCallback
// ----------------------------------------------------------------------------
int hkpEntityCallbackUtil::fireContactConstraintAddedCallback(int a1, int a2)
{
  uint64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  uint16_t v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *(uint16_t *)(a1 + 516) - 1;
  v15 = v2;
  if ( *(uint16_t *)(a1 + 516) != 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(a1 + 512);
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
          v6 = *(uint32_t *)(*(uint32_t *)(a1 + 512) + v3);
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
    v10 = *(uint16_t *)(a1 + 516) - 1;
    if ( *(uint16_t *)(a1 + 516) != 0 )
    {
      v11 = 4 * v10;
      do
      {
        while ( 1 )
        {
          LODWORD(v2) = *(uint32_t *)(a1 + 512);
          if ( *(uint32_t *)(v2 + v11) == 0 )
          {
            v12 = *(uint16_t *)(a1 + 516) - 1;
            *(uint16_t *)(a1 + 516) = v12;
            if ( v10 < v12 )
              break;
          }
          --v10;
          v11 -= 4;
          if ( v10 == -1 )
            return v2;
        }
        HIDWORD(v2) = v11;
        v13 = v10;
        v16 = v10;
        while ( 1 )
        {
          *(uint32_t *)(v2 + HIDWORD(v2)) = *(uint32_t *)(v2 + HIDWORD(v2) + 4);
          ++v13;
          LODWORD(v2) = *(uint16_t *)(a1 + 516);
          if ( v13 >= (int)v2 )
            break;
          LODWORD(v2) = *(uint32_t *)(a1 + 512);
          HIDWORD(v2) += 4;
        }
        --v10;
        v11 -= 4;
      }
      while ( v16 != 0 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpEntityCallbackUtil::fireContactConstraintRemovedCallback  (binary VA: 0x1781450)
// Original: hkpEntityCallbackUtil::fireContactConstraintRemovedCallback
// ----------------------------------------------------------------------------
int hkpEntityCallbackUtil::fireContactConstraintRemovedCallback(int a1, int a2)
{
  uint64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  uint16_t v12;
  int v13;
  int v15;
  int v16;
  int v17;

  LODWORD(v2) = *(uint16_t *)(a1 + 516) - 1;
  v15 = v2;
  if ( *(uint16_t *)(a1 + 516) != 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(a1 + 512);
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
          v6 = *(uint32_t *)(*(uint32_t *)(a1 + 512) + v3);
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
    v10 = *(uint16_t *)(a1 + 516) - 1;
    if ( *(uint16_t *)(a1 + 516) != 0 )
    {
      v11 = 4 * v10;
      do
      {
        while ( 1 )
        {
          LODWORD(v2) = *(uint32_t *)(a1 + 512);
          if ( *(uint32_t *)(v2 + v11) == 0 )
          {
            v12 = *(uint16_t *)(a1 + 516) - 1;
            *(uint16_t *)(a1 + 516) = v12;
            if ( v10 < v12 )
              break;
          }
          --v10;
          v11 -= 4;
          if ( v10 == -1 )
            return v2;
        }
        HIDWORD(v2) = v11;
        v13 = v10;
        v16 = v10;
        while ( 1 )
        {
          *(uint32_t *)(v2 + HIDWORD(v2)) = *(uint32_t *)(v2 + HIDWORD(v2) + 4);
          ++v13;
          LODWORD(v2) = *(uint16_t *)(a1 + 516);
          if ( v13 >= (int)v2 )
            break;
          LODWORD(v2) = *(uint32_t *)(a1 + 512);
          HIDWORD(v2) += 4;
        }
        --v10;
        v11 -= 4;
      }
      while ( v16 != 0 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpEntityCallbackUtil::fireContactPointAddedInternal  (binary VA: 0x17815c0)
// Original: hkpEntityCallbackUtil::fireContactPointAddedInternal
// ----------------------------------------------------------------------------
int hkpEntityCallbackUtil::fireContactPointAddedInternal(int a1, int a2)
{
  uint64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  uint16_t v12;
  int v13;
  int v15;
  int v16;
  int v17;

  *(uint32_t *)(a2 + 12) = a1;
  LODWORD(v2) = *(uint16_t *)(a1 + 516) - 1;
  v15 = v2;
  if ( *(uint16_t *)(a1 + 516) != 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(a1 + 512);
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
          v6 = *(uint32_t *)(*(uint32_t *)(a1 + 512) + v3);
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
    v10 = *(uint16_t *)(a1 + 516) - 1;
    if ( *(uint16_t *)(a1 + 516) != 0 )
    {
      v11 = 4 * v10;
      do
      {
        while ( 1 )
        {
          LODWORD(v2) = *(uint32_t *)(a1 + 512);
          if ( *(uint32_t *)(v2 + v11) == 0 )
          {
            v12 = *(uint16_t *)(a1 + 516) - 1;
            *(uint16_t *)(a1 + 516) = v12;
            if ( v10 < v12 )
              break;
          }
          --v10;
          v11 -= 4;
          if ( v10 == -1 )
            return v2;
        }
        HIDWORD(v2) = v11;
        v13 = v10;
        v16 = v10;
        while ( 1 )
        {
          *(uint32_t *)(v2 + HIDWORD(v2)) = *(uint32_t *)(v2 + HIDWORD(v2) + 4);
          ++v13;
          LODWORD(v2) = *(uint16_t *)(a1 + 516);
          if ( v13 >= (int)v2 )
            break;
          LODWORD(v2) = *(uint32_t *)(a1 + 512);
          HIDWORD(v2) += 4;
        }
        --v10;
        v11 -= 4;
      }
      while ( v16 != 0 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpEntityCallbackUtil::fireContactPointRemovedInternal  (binary VA: 0x1781730)
// Original: hkpEntityCallbackUtil::fireContactPointRemovedInternal
// ----------------------------------------------------------------------------
int hkpEntityCallbackUtil::fireContactPointRemovedInternal(int a1, int a2)
{
  uint64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  uint16_t v12;
  int v13;
  int v15;
  int v16;
  int v17;

  *(uint32_t *)(a2 + 16) = a1;
  LODWORD(v2) = *(uint16_t *)(a1 + 516) - 1;
  v15 = v2;
  if ( *(uint16_t *)(a1 + 516) != 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(a1 + 512);
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
          v6 = *(uint32_t *)(*(uint32_t *)(a1 + 512) + v3);
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
    v10 = *(uint16_t *)(a1 + 516) - 1;
    if ( *(uint16_t *)(a1 + 516) != 0 )
    {
      v11 = 4 * v10;
      do
      {
        while ( 1 )
        {
          LODWORD(v2) = *(uint32_t *)(a1 + 512);
          if ( *(uint32_t *)(v2 + v11) == 0 )
          {
            v12 = *(uint16_t *)(a1 + 516) - 1;
            *(uint16_t *)(a1 + 516) = v12;
            if ( v10 < v12 )
              break;
          }
          --v10;
          v11 -= 4;
          if ( v10 == -1 )
            return v2;
        }
        HIDWORD(v2) = v11;
        v13 = v10;
        v16 = v10;
        while ( 1 )
        {
          *(uint32_t *)(v2 + HIDWORD(v2)) = *(uint32_t *)(v2 + HIDWORD(v2) + 4);
          ++v13;
          LODWORD(v2) = *(uint16_t *)(a1 + 516);
          if ( v13 >= (int)v2 )
            break;
          LODWORD(v2) = *(uint32_t *)(a1 + 512);
          HIDWORD(v2) += 4;
        }
        --v10;
        v11 -= 4;
      }
      while ( v16 != 0 );
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpEntityCallbackUtil::fireContactProcessInternal  (binary VA: 0x17818a0)
// Original: hkpEntityCallbackUtil::fireContactProcessInternal
// ----------------------------------------------------------------------------
int hkpEntityCallbackUtil::fireContactProcessInternal(int a1, int a2)
{
  uint64_t v2; // rax
  int v3;
  int *address;
  int v5;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  uint32_t *v9;
  int v10;
  int v11;
  uint16_t v12;
  int v13;
  int v15;
  int v16;
  int v17;

  *(uint32_t *)(a2 + 8) = a1;
  LODWORD(v2) = *(uint16_t *)(a1 + 516) - 1;
  v15 = v2;
  if ( *(uint16_t *)(a1 + 516) != 0 )
  {
    v3 = 4 * v2;
    do
    {
      LODWORD(v2) = *(uint32_t *)(a1 + 512);
      v17 = *(uint32_t *)(v2 + v3);
      if ( v17 != 0 )
      {
        address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
        v5 = *address;
        v6 = v17;
        v7 = *(uint32_t **)(*address + 4);
        if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
        {
          *v7 = (uint32_t)(uintptr_t)("TtcpProCb");
          v8 = __rdtsc();
          v7[1] = v8;
          *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
          v6 = *(uint32_t *)(*(uint32_t *)(a1 + 512) + v3);
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
    v10 = *(uint16_t *)(a1 + 516) - 1;
    if ( *(uint16_t *)(a1 + 516) != 0 )
    {
      v11 = 4 * v10;
      do
      {
        while ( 1 )
        {
          LODWORD(v2) = *(uint32_t *)(a1 + 512);
          if ( *(uint32_t *)(v2 + v11) == 0 )
          {
            v12 = *(uint16_t *)(a1 + 516) - 1;
            *(uint16_t *)(a1 + 516) = v12;
            if ( v10 < v12 )
              break;
          }
          --v10;
          v11 -= 4;
          if ( v10 == -1 )
            return v2;
        }
        HIDWORD(v2) = v11;
        v13 = v10;
        v16 = v10;
        while ( 1 )
        {
          *(uint32_t *)(v2 + HIDWORD(v2)) = *(uint32_t *)(v2 + HIDWORD(v2) + 4);
          ++v13;
          LODWORD(v2) = *(uint16_t *)(a1 + 516);
          if ( v13 >= (int)v2 )
            break;
          LODWORD(v2) = *(uint32_t *)(a1 + 512);
          HIDWORD(v2) += 4;
        }
        --v10;
        v11 -= 4;
      }
      while ( v16 != 0 );
    }
  }
  return v2;
}


