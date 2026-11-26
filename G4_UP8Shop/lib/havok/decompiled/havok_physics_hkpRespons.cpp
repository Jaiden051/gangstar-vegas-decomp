#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpRespons.h"

// ----------------------------------------------------------------------------
// Function: hkpResponseModifier::setInvMassScalingForContact  (binary VA: 0x1784710)
// Original: hkpResponseModifier::setInvMassScalingForContact
// ----------------------------------------------------------------------------
int hkpResponseModifier::setInvMassScalingForContact(__m128i a1, hkpResponseModifier::Self *self, hkpDynamicsContactMgr::Self *a3, hkpRigidBody::Self *a4, hkpRigidBody::Self *a5, hkpConstraintOwner::Self *a6, const hkVector4f::Self *a7)
{
  uint64_t v7; // rax
  hkpConstraintOwner::Self **v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  uint64_t v12; // rax
  int v13;
  hkpConstraintOwner::Self *v14;
  hkpModifierConstraintAtom::Self *v16;
  int v17;
  hkpConstraintOwner::Self *v18;
  int address;
  int v20;
  hkpConstraintOwner::Self *v21;

  LODWORD(v7) = G4_VCALL<int>(self, 72);
  v8 = (hkpConstraintOwner::Self **)v7;
  if ( (uint32_t)v7 != 0 )
  {
    G4_VCALL<void>(a5, 32);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance));
    v20 = *(uint32_t *)address;
    v9 = *(uint32_t **)(*(uint32_t *)address + 4);
    if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*(uint32_t *)address + 12) )
    {
      *v9 = (uint32_t)(uintptr_t)("TtSetMassChang");
      v12 = __rdtsc();
      v9[1] = v12;
      *(uint32_t *)(v20 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
    }
    LODWORD(v7) = (uint32_t)(uintptr_t)(hkpWorldConstraintUtil::findModifier((int)(uintptr_t)(v8), 31));
    if ( (uint32_t)v7 == 0 )
    {
      v13 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v14 = (hkpConstraintOwner::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v13 + 44) + 8))(
                                    *(uint32_t *)(*(uint32_t *)v13 + 44),
                                    64);
      *(uint16_t *)v14 = 31;
      *((uint16_t *)v14 + 8) = 64;
      v21 = v14;
      hkpWorldConstraintUtil::addModifier(v8, a5, v14, v16, a1, v17, v18, address);
      LODWORD(v7) = (uint32_t)(uintptr_t)(v21);
    }
    if ( v8[5] == (hkpConstraintOwner::Self *)(a3) )
    {
      *(uint32_t *)(v7 + 32) = *(uint32_t *)a6;
      *(uint32_t *)(v7 + 36) = *((uint32_t *)a6 + 1);
      *(uint32_t *)(v7 + 40) = *((uint32_t *)a6 + 2);
      *(uint32_t *)(v7 + 44) = *((uint32_t *)a6 + 3);
      *(uint32_t *)(v7 + 48) = *(uint32_t *)a7;
      *(uint32_t *)(v7 + 52) = *((uint32_t *)a7 + 1);
      *(uint32_t *)(v7 + 56) = *((uint32_t *)a7 + 2);
      HIDWORD(v7) = *((uint32_t *)a7 + 3);
    }
    else
    {
      *(uint32_t *)(v7 + 32) = *(uint32_t *)a7;
      *(uint32_t *)(v7 + 36) = *((uint32_t *)a7 + 1);
      *(uint32_t *)(v7 + 40) = *((uint32_t *)a7 + 2);
      *(uint32_t *)(v7 + 44) = *((uint32_t *)a7 + 3);
      *(uint32_t *)(v7 + 48) = *(uint32_t *)a6;
      *(uint32_t *)(v7 + 52) = *((uint32_t *)a6 + 1);
      *(uint32_t *)(v7 + 56) = *((uint32_t *)a6 + 2);
      HIDWORD(v7) = *((uint32_t *)a6 + 3);
    }
    *(uint32_t *)(v7 + 60) = HIDWORD(v7);
    LODWORD(v7) = address;
    v10 = *(uint32_t *)address;
    v11 = *(uint32_t **)(*(uint32_t *)address + 4);
    if ( (unsigned int)(uintptr_t)(v11) < *(uint32_t *)(*(uint32_t *)address + 12) )
    {
      *v11 = (uint32_t)(uintptr_t)("Et");
      v7 = __rdtsc();
      v11[1] = v7;
      *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v11 + 3);
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkpResponseModifier::setInvMassScalingForContact  (binary VA: 0x1784890)
// Original: hkpResponseModifier::setInvMassScalingForContact
// ----------------------------------------------------------------------------
int hkpResponseModifier::setInvMassScalingForContact(__m128i a1, hkpResponseModifier::Self *self, hkpDynamicsContactMgr::Self *a3, hkpRigidBody::Self *a4, hkpConstraintOwner::Self *a5)
{
  uint64_t v5; // rax
  hkpConstraintOwner::Self **v6;
  hkpModifierConstraintAtom::Self *address;
  int v8;
  uint32_t *v9;
  uint16_t *Modifier;
  int v11;
  int v12;
  uint32_t *v13;
  uint64_t v14; // rax
  int v15;
  uint16_t *v16;
  uint32_t *v17;
  int v18;
  hkpModifierConstraintAtom::Self *v20;
  int v21;
  hkpConstraintOwner::Self *v22;
  int v23;

  LODWORD(v5) = G4_VCALL<int>(self, 72);
  v6 = (hkpConstraintOwner::Self **)v5;
  if ( (uint32_t)v5 != 0 )
  {
    G4_VCALL<void>(a4, 32);
    address = (hkpModifierConstraintAtom::Self *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
    v8 = *(uint32_t *)address;
    v20 = address;
    v9 = *(uint32_t **)(*(uint32_t *)address + 4);
    if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*(uint32_t *)address + 12) )
    {
      *v9 = (uint32_t)(uintptr_t)("TtSetMassChang");
      v14 = __rdtsc();
      v9[1] = v14;
      *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
    }
    Modifier = hkpWorldConstraintUtil::findModifier((int)(uintptr_t)(v6), 31);
    if ( Modifier != nullptr )
    {
      v11 = *(uint32_t *)a5;
      if ( a3 == (hkpDynamicsContactMgr::Self *)(v6[5]) )
      {
        *((uint32_t *)Modifier + 8) = v11;
        *((uint32_t *)Modifier + 9) = *((uint32_t *)a5 + 1);
        *((uint32_t *)Modifier + 10) = *((uint32_t *)a5 + 2);
        *((uint32_t *)Modifier + 11) = *((uint32_t *)a5 + 3);
      }
      else
      {
        *((uint32_t *)Modifier + 12) = v11;
        *((uint32_t *)Modifier + 13) = *((uint32_t *)a5 + 1);
        *((uint32_t *)Modifier + 14) = *((uint32_t *)a5 + 2);
        *((uint32_t *)Modifier + 15) = *((uint32_t *)a5 + 3);
      }
      if ( *((float *)Modifier + 11) == 0.0 && *((float *)Modifier + 15) == 0.0 )
      {
        *((uint32_t *)Modifier + 11) = 1065353216;
        *((uint32_t *)Modifier + 15) = 1065353216;
        LODWORD(v5) = (uint32_t)(uintptr_t)(v20);
        v12 = *(uint32_t *)v20;
        v13 = *(uint32_t **)(*(uint32_t *)v20 + 4);
        if ( (unsigned int)(uintptr_t)(v13) >= *(uint32_t *)(*(uint32_t *)v20 + 12) )
          return v5;
        goto LABEL_9;
      }
    }
    else
    {
      v15 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v16 = (uint16_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v15 + 44) + 8))(
                       *(uint32_t *)(*(uint32_t *)v15 + 44),
                       64);
      *v16 = 31;
      v16[8] = 64;
      v17 = (uint32_t *)(v16);
      hkpWorldConstraintUtil::addModifier(v6, a4, (hkpConstraintOwner::Self *)v16, v20, a1, v21, v22, v23);
      if ( v6[5] == (hkpConstraintOwner::Self *)(a3) )
      {
        v17[8] = *(uint32_t *)a5;
        v17[9] = *((uint32_t *)a5 + 1);
        v17[10] = *((uint32_t *)a5 + 2);
        v17[11] = *((uint32_t *)a5 + 3);
        v17[12] = 1065353216;
        v17[13] = 1065353216;
        v18 = 1065353216;
        v17[14] = 1065353216;
      }
      else
      {
        v17[8] = 1065353216;
        v17[9] = 1065353216;
        v17[10] = 1065353216;
        v17[11] = 1065353216;
        v17[12] = *(uint32_t *)a5;
        v17[13] = *((uint32_t *)a5 + 1);
        v17[14] = *((uint32_t *)a5 + 2);
        v18 = *((uint32_t *)a5 + 3);
      }
      v17[15] = v18;
    }
    LODWORD(v5) = (uint32_t)(uintptr_t)(v20);
    v12 = *(uint32_t *)v20;
    v13 = *(uint32_t **)(*(uint32_t *)v20 + 4);
    if ( (unsigned int)(uintptr_t)(v13) < *(uint32_t *)(*(uint32_t *)v20 + 12) )
    {
LABEL_9:
      *v13 = (uint32_t)(uintptr_t)("Et");
      v5 = __rdtsc();
      v13[1] = v5;
      *(uint32_t *)(v12 + 4) = (uint32_t)(uintptr_t)(v13 + 3);
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpResponseModifier::setCenterOfMassDisplacementForContact  (binary VA: 0x1784a90)
// Original: hkpResponseModifier::setCenterOfMassDisplacementForContact
// ----------------------------------------------------------------------------
int hkpResponseModifier::setCenterOfMassDisplacementForContact(__m128i a1, hkpResponseModifier::Self *self, hkpDynamicsContactMgr::Self *a3, hkpRigidBody::Self *a4, hkpRigidBody::Self *a5, hkpConstraintOwner::Self *a6, const hkVector4f::Self *a7)
{
  uint64_t v7; // rax
  hkpConstraintOwner::Self **v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  uint64_t v12; // rax
  int v13;
  hkpConstraintOwner::Self *v14;
  hkpModifierConstraintAtom::Self *v16;
  int v17;
  hkpConstraintOwner::Self *v18;
  int address;
  int v20;
  hkpConstraintOwner::Self *v21;

  LODWORD(v7) = G4_VCALL<int>(self, 72);
  v8 = (hkpConstraintOwner::Self **)v7;
  if ( (uint32_t)v7 != 0 )
  {
    G4_VCALL<void>(a5, 32);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance));
    v20 = *(uint32_t *)address;
    v9 = *(uint32_t **)(*(uint32_t *)address + 4);
    if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*(uint32_t *)address + 12) )
    {
      *v9 = (uint32_t)(uintptr_t)("TtSetMassChang");
      v12 = __rdtsc();
      v9[1] = v12;
      *(uint32_t *)(v20 + 4) = (uint32_t)(uintptr_t)(v9 + 3);
    }
    LODWORD(v7) = (uint32_t)(uintptr_t)(hkpWorldConstraintUtil::findModifier((int)(uintptr_t)(v8), 35));
    if ( (uint32_t)v7 == 0 )
    {
      v13 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v14 = (hkpConstraintOwner::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v13 + 44) + 8))(
                                    *(uint32_t *)(*(uint32_t *)v13 + 44),
                                    64);
      *(uint16_t *)v14 = 35;
      *((uint16_t *)v14 + 8) = 64;
      v21 = v14;
      hkpWorldConstraintUtil::addModifier(v8, a5, v14, v16, a1, v17, v18, address);
      LODWORD(v7) = (uint32_t)(uintptr_t)(v21);
    }
    if ( v8[5] == (hkpConstraintOwner::Self *)(uintptr_t)(a3) )
    {
      *(uint32_t *)(v7 + 32) = *(uint32_t *)a6;
      *(uint32_t *)(v7 + 36) = *((uint32_t *)a6 + 1);
      *(uint32_t *)(v7 + 40) = *((uint32_t *)a6 + 2);
      *(uint32_t *)(v7 + 44) = *((uint32_t *)a6 + 3);
      *(uint32_t *)(v7 + 48) = *(uint32_t *)a7;
      *(uint32_t *)(v7 + 52) = *((uint32_t *)a7 + 1);
      *(uint32_t *)(v7 + 56) = *((uint32_t *)a7 + 2);
      HIDWORD(v7) = *((uint32_t *)a7 + 3);
    }
    else
    {
      *(uint32_t *)(v7 + 32) = *(uint32_t *)a7;
      *(uint32_t *)(v7 + 36) = *((uint32_t *)a7 + 1);
      *(uint32_t *)(v7 + 40) = *((uint32_t *)a7 + 2);
      *(uint32_t *)(v7 + 44) = *((uint32_t *)a7 + 3);
      *(uint32_t *)(v7 + 48) = *(uint32_t *)a6;
      *(uint32_t *)(v7 + 52) = *((uint32_t *)a6 + 1);
      *(uint32_t *)(v7 + 56) = *((uint32_t *)a6 + 2);
      HIDWORD(v7) = *((uint32_t *)a6 + 3);
    }
    *(uint32_t *)(v7 + 60) = HIDWORD(v7);
    LODWORD(v7) = address;
    v10 = *(uint32_t *)address;
    v11 = *(uint32_t **)(*(uint32_t *)address + 4);
    if ( (unsigned int)(uintptr_t)(v11) < *(uint32_t *)(*(uint32_t *)address + 12) )
    {
      *v11 = (uint32_t)(uintptr_t)("Et");
      v7 = __rdtsc();
      v11[1] = v7;
      *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v11 + 3);
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkpResponseModifier::setImpulseScalingForContact  (binary VA: 0x1784c10)
// Original: hkpResponseModifier::setImpulseScalingForContact
// ----------------------------------------------------------------------------
int hkpResponseModifier::setImpulseScalingForContact(__m128i a1, hkpResponseModifier::Self *self, hkpDynamicsContactMgr::Self *a3, hkpRigidBody::Self *a4, hkpRigidBody::Self *a5, hkpConstraintOwner::Self *a6, float a7)
{
  uint64_t v7; // rax
  hkpConstraintOwner::Self **v8;
  int *address;
  int v10;
  int *v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  uint64_t v15; // rax
  int v16;
  int v17;
  hkpModifierConstraintAtom::Self *v19;
  int v20;
  hkpConstraintOwner::Self *v21;
  int v22;

  LODWORD(v7) = G4_VCALL<int>(self, 72);
  v8 = (hkpConstraintOwner::Self **)v7;
  if ( (uint32_t)v7 != 0 )
  {
    G4_VCALL<void>(a5, 32);
    address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
    v10 = *address;
    v11 = address;
    v12 = *(uint32_t **)(*address + 4);
    if ( (unsigned int)(uintptr_t)(v12) < *(uint32_t *)(*address + 12) )
    {
      *v12 = (uint32_t)(uintptr_t)("TtSetSoftContact");
      v15 = __rdtsc();
      v12[1] = v15;
      *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v12 + 3);
    }
    LODWORD(v7) = (uint32_t)(uintptr_t)(hkpWorldConstraintUtil::findModifier((int)(uintptr_t)(v8), 30));
    if ( (uint32_t)v7 != 0 )
    {
      *(uint32_t *)(v7 + 32) = (uint32_t)(uintptr_t)(a6);
      *(float *)(v7 + 36) = a7;
    }
    else
    {
      v16 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v17 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v16 + 44) + 8))(
              *(uint32_t *)(*(uint32_t *)v16 + 44),
              48);
      *(uint16_t *)v17 = 30;
      *(uint16_t *)(v17 + 16) = 48;
      *(uint32_t *)(v17 + 32) = (uint32_t)(uintptr_t)(a6);
      *(float *)(v17 + 36) = a7;
      LODWORD(v7) = (uint32_t)(uintptr_t)(hkpWorldConstraintUtil::addModifier(v8, a5, (hkpConstraintOwner::Self *)v17, v19, a1, v20, v21, v22));
    }
    v13 = *v11;
    v14 = *(uint32_t **)(*v11 + 4);
    if ( (unsigned int)(uintptr_t)(v14) < *(uint32_t *)(*v11 + 12) )
    {
      *v14 = (uint32_t)(uintptr_t)("Et");
      v7 = __rdtsc();
      v14[1] = v7;
      *(uint32_t *)(v13 + 4) = (uint32_t)(uintptr_t)(v14 + 3);
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkpResponseModifier::clearSurfaceVelocity  (binary VA: 0x1784d30)
// Original: hkpResponseModifier::clearSurfaceVelocity
// ----------------------------------------------------------------------------
int hkpResponseModifier::clearSurfaceVelocity(__m128i a1, hkpResponseModifier::Self *self, hkpDynamicsContactMgr::Self *a3)
{
  uint64_t v3; // rax
  uint32_t *v4;
  int *address;
  int v6;
  int *v7;
  uint32_t *v8;
  uint64_t v9; // rax
  int v10;
  uint32_t *v11;
  char v13;

  LODWORD(v3) = G4_VCALL<int>(self, 72);
  v4 = (uint32_t *)v3;
  if ( (uint32_t)v3 != 0 )
  {
    G4_VCALL<void>(a3, 32);
    address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
    v6 = *address;
    v7 = address;
    v8 = *(uint32_t **)(*address + 4);
    if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
    {
      *v8 = (uint32_t)(uintptr_t)("TtClrSurfVel");
      v9 = __rdtsc();
      v8[1] = v9;
      *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
    }
    LODWORD(v3) = hkpWorldConstraintUtil::removeAndDeleteModifier(v4, a3, 33, v13, a1);
    v10 = *v7;
    v11 = *(uint32_t **)(*v7 + 4);
    if ( (unsigned int)(uintptr_t)(v11) < *(uint32_t *)(*v7 + 12) )
    {
      *v11 = (uint32_t)(uintptr_t)("Et");
      v3 = __rdtsc();
      v11[1] = v3;
      *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v11 + 3);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkpResponseModifier::setLowSurfaceViscosity  (binary VA: 0x1784fb0)
// Original: hkpResponseModifier::setLowSurfaceViscosity
// ----------------------------------------------------------------------------
int hkpResponseModifier::setLowSurfaceViscosity(__m128i a1, hkpResponseModifier::Self *self, hkpDynamicsContactMgr::Self *a3)
{
  uint64_t v3; // rax
  hkpConstraintOwner::Self **v4;
  int *address;
  int v6;
  int *v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  uint64_t v11; // rax
  int v12;
  hkpConstraintOwner::Self *v13;
  hkpModifierConstraintAtom::Self *v15;
  int v16;
  hkpConstraintOwner::Self *v17;
  int v18;

  LODWORD(v3) = G4_VCALL<int>(self, 72);
  v4 = (hkpConstraintOwner::Self **)v3;
  if ( (uint32_t)v3 != 0 )
  {
    G4_VCALL<void>(a3, 32);
    address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
    v6 = *address;
    v7 = address;
    v8 = *(uint32_t **)(*address + 4);
    if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(*address + 12) )
    {
      *v8 = (uint32_t)(uintptr_t)("TtSetSurfVisc");
      v11 = __rdtsc();
      v8[1] = v11;
      *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
    }
    LODWORD(v3) = (uint32_t)(uintptr_t)(hkpWorldConstraintUtil::findModifier((int)(uintptr_t)(v4), 32));
    if ( (uint32_t)v3 == 0 )
    {
      v12 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v13 = (hkpConstraintOwner::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v12 + 44) + 8))(
                                    *(uint32_t *)(*(uint32_t *)v12 + 44),
                                    32);
      *(uint16_t *)v13 = 32;
      *((uint16_t *)v13 + 8) = 32;
      LODWORD(v3) = (uint32_t)(uintptr_t)(hkpWorldConstraintUtil::addModifier(v4, a3, v13, v15, a1, v16, v17, v18));
    }
    v9 = *v7;
    v10 = *(uint32_t **)(*v7 + 4);
    if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*v7 + 12) )
    {
      *v10 = (uint32_t)(uintptr_t)("Et");
      v3 = __rdtsc();
      v10[1] = v3;
      *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkpResponseModifier::disableConstraint  (binary VA: 0x17850a0)
// Original: hkpResponseModifier::disableConstraint
// ----------------------------------------------------------------------------
int hkpResponseModifier::disableConstraint(__m128i a1, hkpConstraintOwner::Self **self, hkpConstraintInstance::Self *a3)
{
  int *address;
  int v4;
  int *v5;
  uint32_t *v6;
  uint64_t v7; // rax
  uint64_t v8; // rax
  int v9;
  uint32_t *v10;
  int v11;
  hkpConstraintOwner::Self *v12;
  hkpModifierConstraintAtom::Self *v14;
  int v15;
  hkpConstraintOwner::Self *v16;
  int v17;

  G4_VCALL<void>(a3, 32);
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v5 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtDsblConstr");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  LODWORD(v8) = (uint32_t)(uintptr_t)(hkpWorldConstraintUtil::findModifier((int)(uintptr_t)(self), 34));
  if ( (uint32_t)v8 == 0 )
  {
    v11 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v12 = (hkpConstraintOwner::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v11 + 44) + 8))(
                                  *(uint32_t *)(*(uint32_t *)v11 + 44),
                                  32);
    *(uint16_t *)v12 = 34;
    *((uint16_t *)v12 + 8) = 32;
    LODWORD(v8) = (uint32_t)(uintptr_t)(hkpWorldConstraintUtil::addModifier(self, a3, v12, v14, a1, v15, v16, v17));
  }
  v9 = *v5;
  v10 = *(uint32_t **)(*v5 + 4);
  if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(*v5 + 12) )
  {
    *v10 = (uint32_t)(uintptr_t)("Et");
    v8 = __rdtsc();
    v10[1] = v8;
    *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hkpResponseModifier::enableConstraint  (binary VA: 0x1785180)
// Original: hkpResponseModifier::enableConstraint
// ----------------------------------------------------------------------------
int hkpResponseModifier::enableConstraint(__m128i a1, hkpResponseModifier::Self *self, hkpConstraintInstance::Self *a3)
{
  int *address;
  int v4;
  uint32_t *v5;
  uint64_t v6; // rax
  int v7;
  int i;
  uint64_t v9; // rax
  int v10;
  uint32_t *v11;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int *savedregs;
  int *savedregsa;
  void *retaddr;

  G4_VCALL<void>(a3, 32, v13, v14, v15, v16, v17, v18, v19);
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  savedregs = address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtEnblConstr");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  hkpWorldConstraintUtil::removeAndDeleteModifier(self, a3, 34, (char)(uintptr_t)(savedregs), a1);
  v7 = *(uint32_t *)(*((uint32_t *)self + 12) + 28);
  if ( v7 != 0 )
  {
    LOBYTE(v20) = 1;
    (*(void (**)(uint32_t, int, void **))(**((uint32_t **)self + 3) + 76))(*((uint32_t *)self + 3), v20, &retaddr);
    for ( i = 0; (int)(uintptr_t)(self) > i; ++i )
    {
      *(uint32_t *)(v7 + 8 * i) = 0;
      *(uint32_t *)(v7 + 8 * i + 4) = 0;
    }
  }
  LODWORD(v9) = (uint32_t)(uintptr_t)(savedregsa);
  v10 = *savedregsa;
  v11 = *(uint32_t **)(*savedregsa + 4);
  if ( (unsigned int)(uintptr_t)(v11) < *(uint32_t *)(*savedregsa + 12) )
  {
    *v11 = (uint32_t)(uintptr_t)("Et");
    v9 = __rdtsc();
    v11[1] = v9;
    *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v11 + 3);
  }
  return v9;
}


