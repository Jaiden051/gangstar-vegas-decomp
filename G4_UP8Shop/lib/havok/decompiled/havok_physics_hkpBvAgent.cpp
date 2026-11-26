#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBvAgent.h"

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::Destroy  (binary VA: 0x17053c0)
// Original: hkpBvAgent::~hkpBvAgent
// ----------------------------------------------------------------------------
void hkpBvAgent::Destroy(hkpBvAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::cleanup  (binary VA: 0x17053e0)
// Original: hkpBvAgent::cleanup
// ----------------------------------------------------------------------------
int hkpBvAgent::cleanup(hkpBvAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  int v2;

  (*(void (**)(uint32_t, hkpConstraintOwner::Self *))(**((uint32_t **)self + 3) + 36))(*((uint32_t *)self + 3), a2);
  v2 = *((uint32_t *)self + 4);
  if ( v2 != 0 )
  {
    G4_VCALL<void>(v2, 36, a2);
    *((uint32_t *)self + 4) = 0;
  }
  return G4_VCALL<int>(self, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::invalidateTim  (binary VA: 0x1705430)
// Original: hkpBvAgent::invalidateTim
// ----------------------------------------------------------------------------
int hkpBvAgent::invalidateTim(int a1, int a2)
{
  int result;

  (*(void (**)(uint32_t, int))(**(uint32_t **)(a1 + 12) + 44))(*(uint32_t *)(a1 + 12), a2);
  result = *(uint32_t *)(a1 + 16);
  if ( result != 0 )
    return G4_VCALL<int>(result, 44, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::warpTime  (binary VA: 0x1705470)
// Original: hkpBvAgent::warpTime
// ----------------------------------------------------------------------------
int hkpBvAgent::warpTime(int a1, int64_t a2, int a3)
{
  int result;

  (*(void (**)(uint32_t, uint32_t, uint32_t, int))(**(uint32_t **)(a1 + 12) + 48))(
    *(uint32_t *)(a1 + 12),
    a2,
    HIDWORD(a2),
    a3);
  result = *(uint32_t *)(a1 + 16);
  if ( result != 0 )
    return G4_VCALL<int>(result, 48, a2, HIDWORD(a2), a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::removePoint  (binary VA: 0x17054e0)
// Original: hkpBvAgent::removePoint
// ----------------------------------------------------------------------------
int hkpBvAgent::removePoint(hkpBvAgent::Self *self, uint16_t a2)
{
  int result;

  result = *((uint32_t *)self + 4);
  if ( result != 0 )
    return G4_VCALL<int>(result, 52, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::commitPotential  (binary VA: 0x1705510)
// Original: hkpBvAgent::commitPotential
// ----------------------------------------------------------------------------
int hkpBvAgent::commitPotential(hkpBvAgent::Self *self, uint16_t a2)
{
  int result;

  result = *((uint32_t *)self + 4);
  if ( result != 0 )
    return G4_VCALL<int>(result, 56, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::createZombie  (binary VA: 0x1705540)
// Original: hkpBvAgent::createZombie
// ----------------------------------------------------------------------------
int hkpBvAgent::createZombie(hkpBvAgent::Self *self, uint16_t a2)
{
  int result;

  result = *((uint32_t *)self + 4);
  if ( result != 0 )
    return G4_VCALL<int>(result, 60, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::updateShapeCollectionFilter  (binary VA: 0x1705570)
// Original: hkpBvAgent::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
int hkpBvAgent::updateShapeCollectionFilter(int a1, int *a2, int a3, int a4, int a5)
{
  int v5;
  int result;
  int v7;
  uint32_t v8[6];

  v8[3] = (uint32_t)(uintptr_t)(a2);
  v8[1] = -1;
  v5 = *a2;
  v8[2] = a2[2];
  v8[0] = *(uint32_t *)(v5 + 16);
  (*(void (**)(uint32_t, uint32_t *, int, int, int))(**(uint32_t **)(a1 + 12) + 40))(
    *(uint32_t *)(a1 + 12),
    v8,
    a3,
    a4,
    a5);
  result = *(uint32_t *)(a1 + 16);
  if ( result != 0 )
  {
    v7 = *(uint32_t *)(v5 + 24);
    v8[1] = 0;
    v8[0] = v7;
    return G4_VCALL<int>(result, 40, v8, a3, a4, a5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::staticLinearCast  (binary VA: 0x1705760)
// Original: hkpBvAgent::staticLinearCast
// ----------------------------------------------------------------------------
int hkpBvAgent::staticLinearCast(int *a1, int *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, char a10)
{
  int *address;
  int v11;
  uint32_t *v12;
  uint64_t v13; // rax
  int v14;
  int v15;
  int v16;
  int v17;
  void (*v18)(uint32_t *, int *, int *, uint32_t *, uint32_t *, int, int, int *);
  int v19;
  uint32_t *v20;
  uint64_t v21; // rax
  int v22;
  uint32_t *v23;
  uint64_t v24; // rax
  uint32_t *v31;
  typedef int _g4_t_v26;
  typedef int *_g4_t_v27;
  typedef uint32_t _g4_t_v28[4];
  typedef uint32_t _g4_t_v29[15];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v27)) > _g4_s1 ? (12u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v29)) > _g4_s3 ? (32u + sizeof(_g4_t_v29)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v11 = *address;
  v27 = address;
  v12 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v12) < *(uint32_t *)(*address + 12) )
  {
    *v12 = (uint32_t)(uintptr_t)("LthkpBvAgent");
    v12[3] = (uint32_t)(uintptr_t)("StcheckBvShape");
    v13 = __rdtsc();
    v12[1] = v13;
    *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v12 + 4);
  }
  v14 = *a1;
  v28[2] = a1[2];
  v28[3] = (uint32_t)(uintptr_t)(a1);
  v28[1] = -1;
  v29[1] = 2139095022;
  v15 = *a2;
  v28[0] = *(uint32_t *)(v14 + 16);
  v16 = *(uint8_t *)(v28[0] + 8);
  v17 = *(uint8_t *)(v15 + 8);
  LOBYTE(v29[2]) = 0;
  v18 = *(void (**)(uint32_t *, int *, int *, uint32_t *, uint32_t *, int, int, int *))(*a3
                                                                                          + 20
                                                                                          * *(uint8_t *)(v17 + 35 * v16 + *a3 + 416)
                                                                                          + 2880);
  v29[0] = ((uint32_t)(uintptr_t)&off_209BD10);
  v29[11] = 2139095022;
  v18(v28, a2, a3, v29, v29, v26, v17, v27);
  if ( a10 != 0 )
  {
    v19 = *a3;
    v20 = *(uint32_t **)(*a3 + 4);
    v31 = v20;
    if ( (unsigned int)(uintptr_t)(v20) < *(uint32_t *)(*a3 + 12) )
    {
      *v20 = (uint32_t)(uintptr_t)("Stchild");
      v24 = __rdtsc();
      v31[1] = v24;
      *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v31 + 3);
    }
    (*(void (**)(uint32_t *, int *, int *, uint32_t))(*a3
                                                        + 20
                                                        * *((uint8_t *)a2
                                                          + 35 * *(uint8_t *)(*(uint32_t *)(v14 + 24) + 8)
                                                          + *a3
                                                          + 416)
                                                        + 2880))(
      v28,
      a2,
      a3,
      *(uint32_t *)(v14 + 24));
  }
  LODWORD(v21) = (uint32_t)(uintptr_t)(a3);
  v22 = *a3;
  v23 = *(uint32_t **)(*a3 + 4);
  if ( (unsigned int)(uintptr_t)(v23) < *(uint32_t *)(*a3 + 12) )
  {
    *v23 = (uint32_t)(uintptr_t)("lt");
    v21 = __rdtsc();
    v23[1] = v21;
    *(uint32_t *)(v22 + 4) = (uint32_t)(uintptr_t)(v23 + 3);
  }
  return v21;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::linearCast  (binary VA: 0x1705a30)
// Original: hkpBvAgent::linearCast
// ----------------------------------------------------------------------------
int hkpBvAgent::linearCast(int a1, int *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, char a10)
{
  int *address;
  int v11;
  uint32_t *v12;
  uint64_t v13; // rax
  int v14;
  int v15;
  uint32_t *v16;
  uint64_t v17; // rax
  int v18;
  uint64_t v19; // rax
  int v20;
  uint32_t *v21;
  int v22;
  int v23;
  void *retaddr;
  uint32_t *v30;
  int v31;
  uint32_t *v32;
  typedef int _g4_t_v25;
  typedef int *_g4_t_v26;
  typedef uint32_t _g4_t_v27[4];
  typedef uint32_t _g4_t_v28[15];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v25)) > _g4_s0 ? (8u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v28)) > _g4_s3 ? (32u + sizeof(_g4_t_v28)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v11 = *address;
  v26 = address;
  v12 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v12) < *(uint32_t *)(*address + 12) )
  {
    *v12 = (uint32_t)(uintptr_t)("LthkpBvAgent");
    v12[3] = (uint32_t)(uintptr_t)("StcheckBvShape");
    v13 = __rdtsc();
    v12[1] = v13;
    *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v12 + 4);
  }
  v14 = *a2;
  v27[2] = a2[2];
  v27[3] = (uint32_t)(uintptr_t)(a2);
  v27[1] = -1;
  v28[1] = 2139095022;
  LOBYTE(v28[2]) = 0;
  v27[0] = *(uint32_t *)(v14 + 16);
  v28[0] = ((uint32_t)(uintptr_t)&off_209BD10);
  v28[11] = 2139095022;
  (*(void (**)(uint32_t, uint32_t *, int *, int, uint32_t *, uint32_t *, int, int *))(**(uint32_t **)(a1 + 12) + 28))(
    *(uint32_t *)(a1 + 12),
    v27,
    a3,
    a4,
    v28,
    v28,
    v25,
    v26);
  if ( a10 != 0 )
  {
    v15 = *a3;
    v16 = *(uint32_t **)(*a3 + 4);
    v30 = v16;
    if ( (unsigned int)(uintptr_t)(v16) < *(uint32_t *)(*a3 + 12) )
    {
      *v16 = (uint32_t)(uintptr_t)("Stchild");
      v17 = __rdtsc();
      v30[1] = v17;
      *(uint32_t *)(v15 + 4) = (uint32_t)(uintptr_t)(v30 + 3);
    }
    v32 = *(uint32_t **)(v14 + 24);
    v18 = *(uint32_t *)(a1 + 16);
    if ( v18 == 0 )
    {
      v22 = *v32 + 35 * *(uint8_t *)(*(uint32_t *)(v14 + 24) + 8);
      v31 = *(uint8_t *)(*a3 + 8);
      if ( v32[6] != 0 )
        v23 = *(uint8_t *)(v31 + v22 + 1641);
      else
        v23 = *(uint8_t *)(v31 + v22 + 416);
      v18 = (*(int (**)(uint32_t *, int *, uint32_t *, uint32_t))(*v32 + 20 * v23 + 2868))(
              v27,
              a3,
              v32,
              *(uint32_t *)(a1 + 8));
      *(uint32_t *)(a1 + 16) = v18;
    }
    retaddr = nullptr;
    G4_VCALL<void>(v18, 28, v27, a3, v32);
  }
  LODWORD(v19) = (uint32_t)(uintptr_t)(a3);
  v20 = *a3;
  v21 = *(uint32_t **)(*a3 + 4);
  if ( (unsigned int)(uintptr_t)(v21) < *(uint32_t *)(*a3 + 12) )
  {
    *v21 = (uint32_t)(uintptr_t)("lt");
    v19 = __rdtsc();
    v21[1] = v19;
    *(uint32_t *)(v20 + 4) = (uint32_t)(uintptr_t)(v21 + 3);
  }
  return v19;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::Destroy_ea1705d70  (binary VA: 0x1705d70)
// Original: hkpBvAgent::~hkpBvAgent
// ----------------------------------------------------------------------------
void hkpBvAgent::Destroy_ea1705d70(hkpBvAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::processCollision  (binary VA: 0x1705dd0)
// Original: hkpBvAgent::processCollision
// ----------------------------------------------------------------------------
int hkpBvAgent::processCollision(int a1, int *a2, int *a3, uint32_t *a4, int a5, int a6, char a7)
{
  int *address;
  int v8;
  uint32_t *v9;
  uint64_t v10; // rax
  int v11;
  int v12;
  uint32_t *v13;
  uint64_t v14; // rax
  int v15;
  uint64_t v16; // rax
  int v17;
  uint32_t *v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v31;
  int v32;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[2];
  typedef uint32_t _g4_t_v29[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v24)) > _g4_s1 ? (8u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v27)) > _g4_s4 ? (20u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v28)) > _g4_s5 ? (24u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v29)) > _g4_s6 ? (32u + sizeof(_g4_t_v29)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v8 = *address;
  v25 = address;
  v9 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*address + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("LthkpBvAgent");
    v9[3] = (uint32_t)(uintptr_t)("StcheckBvShape");
    v10 = __rdtsc();
    v9[1] = v10;
    *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 4);
  }
  v11 = *a2;
  v29[2] = a2[2];
  v29[3] = (uint32_t)(uintptr_t)(a2);
  v29[1] = -1;
  LOBYTE(v28[1]) = 0;
  v29[0] = *(uint32_t *)(v11 + 16);
  v28[0] = ((uint32_t)(uintptr_t)&off_209C220);
  (*(void (**)(uint32_t, uint32_t *, int *, uint32_t *, uint32_t *, int, int, int *, int, int))(**(uint32_t **)(a1 + 12)
                                                                                                + 20))(
    *(uint32_t *)(a1 + 12),
    v29,
    a3,
    a4,
    v28,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( a7 != 0 )
  {
    v12 = *a3;
    v13 = *(uint32_t **)(*a3 + 4);
    v31 = v13;
    if ( (unsigned int)(uintptr_t)(v13) < *(uint32_t *)(*a3 + 12) )
    {
      *v13 = (uint32_t)(uintptr_t)("Stchild");
      v14 = __rdtsc();
      v31[1] = v14;
      *(uint32_t *)(v12 + 4) = (uint32_t)(uintptr_t)(v31 + 3);
    }
    v15 = *(uint32_t *)(a1 + 16);
    if ( v15 == 0 )
    {
      v20 = *a4 + 35 * *(uint8_t *)(*(uint32_t *)(v11 + 24) + 8);
      v32 = *(uint8_t *)(*a3 + 8);
      if ( a4[6] != 0 )
        v21 = *(uint8_t *)(v32 + v20 + 1641);
      else
        v21 = *(uint8_t *)(v32 + v20 + 416);
      v15 = (*(int (**)(uint32_t *, int *, uint32_t *, uint32_t))(*a4 + 20 * v21 + 2868))(
              v29,
              a3,
              a4,
              *(uint32_t *)(a1 + 8));
      *(uint32_t *)(a1 + 16) = v15;
    }
    G4_VCALL<void>(v15, 32, v29, a3, a4);
  }
  else
  {
    v19 = *(uint32_t *)(a1 + 16);
    if ( v19 != 0 )
    {
      (*(void (**)(uint32_t, uint32_t))(*(uint32_t *)v19 + 36))(*(uint32_t *)(a1 + 16), *(uint32_t *)(a5 + 4));
      *(uint32_t *)(a1 + 16) = 0;
    }
  }
  LODWORD(v16) = (uint32_t)(uintptr_t)(a3);
  v17 = *a3;
  v18 = *(uint32_t **)(*a3 + 4);
  if ( (unsigned int)(uintptr_t)(v18) < *(uint32_t *)(*a3 + 12) )
  {
    *v18 = (uint32_t)(uintptr_t)("lt");
    v16 = __rdtsc();
    v18[1] = v16;
    *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v18 + 3);
  }
  return v16;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::getClosestPoints  (binary VA: 0x1706190)
// Original: hkpBvAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpBvAgent::getClosestPoints(int a1, int *a2, int *a3, uint32_t *a4, int a5, int a6, char a7)
{
  int *address;
  int v8;
  uint32_t *v9;
  uint64_t v10; // rax
  int v11;
  int v12;
  uint32_t *v13;
  uint64_t v14; // rax
  int v15;
  uint64_t v16; // rax
  int v17;
  uint32_t *v18;
  int v19;
  int v20;
  uint32_t *v30;
  int v31;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[2];
  typedef uint32_t _g4_t_v28[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v26)) > _g4_s4 ? (20u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v27)) > _g4_s5 ? (24u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v28)) > _g4_s6 ? (32u + sizeof(_g4_t_v28)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v8 = *address;
  v24 = address;
  v9 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*address + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("LthkpBvAgent");
    v9[3] = (uint32_t)(uintptr_t)("StcheckBvShape");
    v10 = __rdtsc();
    v9[1] = v10;
    *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 4);
  }
  v11 = *a2;
  v28[2] = a2[2];
  v28[3] = (uint32_t)(uintptr_t)(a2);
  v28[1] = -1;
  LOBYTE(v27[1]) = 0;
  v28[0] = *(uint32_t *)(v11 + 16);
  v27[0] = ((uint32_t)(uintptr_t)&off_209C220);
  (*(void (**)(uint32_t, uint32_t *, int *, uint32_t *, uint32_t *, int, int, int *, int, int))(**(uint32_t **)(a1 + 12)
                                                                                                + 20))(
    *(uint32_t *)(a1 + 12),
    v28,
    a3,
    a4,
    v27,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( a7 != 0 )
  {
    v12 = *a3;
    v13 = *(uint32_t **)(*a3 + 4);
    v30 = v13;
    if ( (unsigned int)(uintptr_t)(v13) < *(uint32_t *)(*a3 + 12) )
    {
      *v13 = (uint32_t)(uintptr_t)("Stchild");
      v14 = __rdtsc();
      v30[1] = v14;
      *(uint32_t *)(v12 + 4) = (uint32_t)(uintptr_t)(v30 + 3);
    }
    v15 = *(uint32_t *)(a1 + 16);
    if ( v15 == 0 )
    {
      v19 = *a4 + 35 * *(uint8_t *)(*(uint32_t *)(v11 + 24) + 8);
      v31 = *(uint8_t *)(*a3 + 8);
      if ( a4[6] != 0 )
        v20 = *(uint8_t *)(v31 + v19 + 1641);
      else
        v20 = *(uint8_t *)(v31 + v19 + 416);
      v15 = (*(int (**)(uint32_t *, int *, uint32_t *, uint32_t))(*a4 + 20 * v20 + 2868))(
              v28,
              a3,
              a4,
              *(uint32_t *)(a1 + 8));
      *(uint32_t *)(a1 + 16) = v15;
    }
    G4_VCALL<void>(v15, 24, v28, a3, a4);
  }
  LODWORD(v16) = (uint32_t)(uintptr_t)(a3);
  v17 = *a3;
  v18 = *(uint32_t **)(*a3 + 4);
  if ( (unsigned int)(uintptr_t)(v18) < *(uint32_t *)(*a3 + 12) )
  {
    *v18 = (uint32_t)(uintptr_t)("lt");
    v16 = __rdtsc();
    v18[1] = v16;
    *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v18 + 3);
  }
  return v16;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::staticGetClosestPoints  (binary VA: 0x17063b0)
// Original: hkpBvAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpBvAgent::staticGetClosestPoints(int *a1, int *a2, int *a3, int a4, int a5, int a6, char a7)
{
  int *address;
  int v8;
  uint32_t *v9;
  uint64_t v10; // rax
  int v11;
  int v12;
  void (*v13)(uint32_t *, int *, int *, uint32_t *, int, int, int, int *, int, int);
  int v14;
  uint32_t *v15;
  uint64_t v16; // rax
  int v17;
  uint32_t *v18;
  uint64_t v19; // rax
  uint32_t *v29;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[2];
  typedef uint32_t _g4_t_v28[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v24)) > _g4_s3 ? (12u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v25)) > _g4_s4 ? (16u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v26)) > _g4_s5 ? (20u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v27)) > _g4_s6 ? (24u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v28)) > _g4_s7 ? (32u + sizeof(_g4_t_v28)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v8 = *address;
  v24 = address;
  v9 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*address + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("LthkpBvAgent");
    v9[3] = (uint32_t)(uintptr_t)("StcheckBvShape");
    v10 = __rdtsc();
    v9[1] = v10;
    *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 4);
  }
  v11 = *a1;
  v28[2] = a1[2];
  v28[3] = (uint32_t)(uintptr_t)(a1);
  v28[1] = -1;
  LOBYTE(v27[1]) = 0;
  v12 = *a2;
  v28[0] = *(uint32_t *)(v11 + 16);
  v23 = *(uint8_t *)(v12 + 8);
  v13 = *(void (**)(uint32_t *, int *, int *, uint32_t *, int, int, int, int *, int, int))(*a3
                                                                                               + 20
                                                                                               * *(uint8_t *)(v23 + 35 * *(uint8_t *)(v28[0] + 8) + *a3 + 416)
                                                                                               + 2872);
  v27[0] = ((uint32_t)(uintptr_t)&off_209C220);
  v13(v28, a2, a3, v27, v21, v22, v23, v24, v25, v26);
  if ( a7 != 0 )
  {
    v14 = *a3;
    v15 = *(uint32_t **)(*a3 + 4);
    v29 = v15;
    if ( (unsigned int)(uintptr_t)(v15) < *(uint32_t *)(*a3 + 12) )
    {
      *v15 = (uint32_t)(uintptr_t)("Stchild");
      v19 = __rdtsc();
      v29[1] = v19;
      *(uint32_t *)(v14 + 4) = (uint32_t)(uintptr_t)(v29 + 3);
    }
    (*(void (**)(uint32_t *, int *, int *, int))(*a3
                                                     + 20
                                                     * *((uint8_t *)a2
                                                       + 35 * *(uint8_t *)(*(uint32_t *)(v11 + 24) + 8)
                                                       + *a3
                                                       + 416)
                                                     + 2876))(
      v28,
      a2,
      a3,
      a4);
  }
  LODWORD(v16) = (uint32_t)(uintptr_t)(a3);
  v17 = *a3;
  v18 = *(uint32_t **)(*a3 + 4);
  if ( (unsigned int)(uintptr_t)(v18) < *(uint32_t *)(*a3 + 12) )
  {
    *v18 = (uint32_t)(uintptr_t)("lt");
    v16 = __rdtsc();
    v18[1] = v16;
    *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v18 + 3);
  }
  return v16;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::getPenetrations  (binary VA: 0x1706590)
// Original: hkpBvAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpBvAgent::getPenetrations(int a1, int *a2, int *a3, uint32_t *a4, int a5, int a6, char a7)
{
  int *address;
  int v8;
  uint32_t *v9;
  uint64_t v10; // rax
  int v11;
  int v12;
  uint32_t *v13;
  uint64_t v14; // rax
  int v15;
  uint64_t v16; // rax
  int v17;
  uint32_t *v18;
  int v19;
  int v20;
  uint32_t *v30;
  int v31;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[2];
  typedef uint32_t _g4_t_v28[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v26)) > _g4_s4 ? (20u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v27)) > _g4_s5 ? (24u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v28)) > _g4_s6 ? (32u + sizeof(_g4_t_v28)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v8 = *address;
  v24 = address;
  v9 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*address + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("LthkpBvAgent");
    v9[3] = (uint32_t)(uintptr_t)("StcheckBvShape");
    v10 = __rdtsc();
    v9[1] = v10;
    *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 4);
  }
  v11 = *a2;
  v28[2] = a2[2];
  v28[3] = (uint32_t)(uintptr_t)(a2);
  v28[1] = -1;
  LOBYTE(v27[1]) = 0;
  v28[0] = *(uint32_t *)(v11 + 16);
  v27[0] = ((uint32_t)(uintptr_t)&off_209C220);
  (*(void (**)(uint32_t, uint32_t *, int *, uint32_t *, uint32_t *, int, int, int *, int, int))(**(uint32_t **)(a1 + 12)
                                                                                                + 20))(
    *(uint32_t *)(a1 + 12),
    v28,
    a3,
    a4,
    v27,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( a7 != 0 )
  {
    v12 = *a3;
    v13 = *(uint32_t **)(*a3 + 4);
    v30 = v13;
    if ( (unsigned int)(uintptr_t)(v13) < *(uint32_t *)(*a3 + 12) )
    {
      *v13 = (uint32_t)(uintptr_t)("Stchild");
      v14 = __rdtsc();
      v30[1] = v14;
      *(uint32_t *)(v12 + 4) = (uint32_t)(uintptr_t)(v30 + 3);
    }
    v15 = *(uint32_t *)(a1 + 16);
    if ( v15 == 0 )
    {
      v19 = *a4 + 35 * *(uint8_t *)(*(uint32_t *)(v11 + 24) + 8);
      v31 = *(uint8_t *)(*a3 + 8);
      if ( a4[6] != 0 )
        v20 = *(uint8_t *)(v31 + v19 + 1641);
      else
        v20 = *(uint8_t *)(v31 + v19 + 416);
      v15 = (*(int (**)(uint32_t *, int *, uint32_t *, uint32_t))(*a4 + 20 * v20 + 2868))(
              v28,
              a3,
              a4,
              *(uint32_t *)(a1 + 8));
      *(uint32_t *)(a1 + 16) = v15;
    }
    G4_VCALL<void>(v15, 20, v28, a3, a4);
  }
  LODWORD(v16) = (uint32_t)(uintptr_t)(a3);
  v17 = *a3;
  v18 = *(uint32_t **)(*a3 + 4);
  if ( (unsigned int)(uintptr_t)(v18) < *(uint32_t *)(*a3 + 12) )
  {
    *v18 = (uint32_t)(uintptr_t)("lt");
    v16 = __rdtsc();
    v18[1] = v16;
    *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v18 + 3);
  }
  return v16;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::staticGetPenetrations  (binary VA: 0x17067b0)
// Original: hkpBvAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpBvAgent::staticGetPenetrations(int *a1, int *a2, int *a3, int a4, int a5, int a6, char a7)
{
  int *address;
  int v8;
  uint32_t *v9;
  uint64_t v10; // rax
  int v11;
  int v12;
  void (*v13)(uint32_t *, int *, int *, uint32_t *, int, int, int, int *, int, int);
  int v14;
  uint32_t *v15;
  uint64_t v16; // rax
  int v17;
  uint32_t *v18;
  uint64_t v19; // rax
  uint32_t *v29;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[2];
  typedef uint32_t _g4_t_v28[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v24)) > _g4_s3 ? (12u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v25)) > _g4_s4 ? (16u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v26)) > _g4_s5 ? (20u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v27)) > _g4_s6 ? (24u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v28)) > _g4_s7 ? (32u + sizeof(_g4_t_v28)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v8 = *address;
  v24 = address;
  v9 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v9) < *(uint32_t *)(*address + 12) )
  {
    *v9 = (uint32_t)(uintptr_t)("LthkpBvAgent");
    v9[3] = (uint32_t)(uintptr_t)("StcheckBvShape");
    v10 = __rdtsc();
    v9[1] = v10;
    *(uint32_t *)(v8 + 4) = (uint32_t)(uintptr_t)(v9 + 4);
  }
  v11 = *a1;
  v28[2] = a1[2];
  v28[3] = (uint32_t)(uintptr_t)(a1);
  v28[1] = -1;
  LOBYTE(v27[1]) = 0;
  v12 = *a2;
  v28[0] = *(uint32_t *)(v11 + 16);
  v23 = *(uint8_t *)(v12 + 8);
  v13 = *(void (**)(uint32_t *, int *, int *, uint32_t *, int, int, int, int *, int, int))(*a3
                                                                                               + 20
                                                                                               * *(uint8_t *)(v23 + 35 * *(uint8_t *)(v28[0] + 8) + *a3 + 416)
                                                                                               + 2872);
  v27[0] = ((uint32_t)(uintptr_t)&off_209C220);
  v13(v28, a2, a3, v27, v21, v22, v23, v24, v25, v26);
  if ( a7 != 0 )
  {
    v14 = *a3;
    v15 = *(uint32_t **)(*a3 + 4);
    v29 = v15;
    if ( (unsigned int)(uintptr_t)(v15) < *(uint32_t *)(*a3 + 12) )
    {
      *v15 = (uint32_t)(uintptr_t)("Stchild");
      v19 = __rdtsc();
      v29[1] = v19;
      *(uint32_t *)(v14 + 4) = (uint32_t)(uintptr_t)(v29 + 3);
    }
    (*(void (**)(uint32_t *, int *, int *, int))(*a3
                                                     + 20
                                                     * *((uint8_t *)a2
                                                       + 35 * *(uint8_t *)(*(uint32_t *)(v11 + 24) + 8)
                                                       + *a3
                                                       + 416)
                                                     + 2872))(
      v28,
      a2,
      a3,
      a4);
  }
  LODWORD(v16) = (uint32_t)(uintptr_t)(a3);
  v17 = *a3;
  v18 = *(uint32_t **)(*a3 + 4);
  if ( (unsigned int)(uintptr_t)(v18) < *(uint32_t *)(*a3 + 12) )
  {
    *v18 = (uint32_t)(uintptr_t)("lt");
    v16 = __rdtsc();
    v18[1] = v16;
    *(uint32_t *)(v17 + 4) = (uint32_t)(uintptr_t)(v18 + 3);
  }
  return v16;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::Construct  (binary VA: 0x1706990)
// Original: hkpBvAgent::hkpBvAgent
// ----------------------------------------------------------------------------
int hkpBvAgent::Construct(uint32_t *a1, int *a2, int a3, int *a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  uint32_t v11[11];

  v11[3] = (uint32_t)(uintptr_t)(a2);
  v11[1] = -1;
  a1[2] = a5;
  a1[1] = -65535;
  *a1 = ((uint32_t)(uintptr_t)&off_209BE28);
  v5 = *a2;
  v11[2] = a2[2];
  v6 = *a4;
  v11[0] = *(uint32_t *)(v5 + 16);
  v7 = *(uint8_t *)(*(uint32_t *)a3 + 8);
  v8 = v6 + 35 * *(uint8_t *)(v11[0] + 8);
  if ( a4[6] != 0 )
    v9 = *(uint8_t *)(v7 + v8 + 1641);
  else
    v9 = *(uint8_t *)(v7 + v8 + 416);
  result = (*(int (**)(uint32_t *, int, int *, int))(v6 + 20 * v9 + 2868))(v11, a3, a4, a5);
  a1[3] = result;
  a1[4] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::createBvShapeAgent  (binary VA: 0x1706a50)
// Original: hkpBvAgent::createBvShapeAgent
// ----------------------------------------------------------------------------
uint32_t * hkpBvAgent::createBvShapeAgent(int *a1, int a2, int *a3, int a4)
{
  int address;
  uint32_t *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   20);
  hkpBvAgent::Construct(v5, a1, a2, a3, a4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::createShapeBvAgent  (binary VA: 0x1706ac0)
// Original: hkpBvAgent::createShapeBvAgent
// ----------------------------------------------------------------------------
uint32_t * hkpBvAgent::createShapeBvAgent(int a1, int *a2, int *a3, int a4)
{
  int address;
  uint32_t *v5;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v5 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   20);
  hkpBvAgent::Construct(v5, a2, a1, a3, a4);
  *v5 = ((uint32_t)(uintptr_t)&off_209BDC8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpBvAgent::registerAgent  (binary VA: 0x1706b40)
// Original: hkpBvAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpBvAgent::registerAgent(hkpBvAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpBvAgent::createShapeBvAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpBvAgent_f657f2::staticLinearCast);
  LOWORD(v2[4]) = 257;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), -1, 30);
  v2[0] = (uint32_t)(uintptr_t)(hkpBvAgent::createBvShapeAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpBvAgent::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpBvAgent::staticGetClosestPoints);
  LOWORD(v2[4]) = 256;
  v2[3] = (uint32_t)(uintptr_t)(hkpBvAgent::staticLinearCast);
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 30, -1);
}


