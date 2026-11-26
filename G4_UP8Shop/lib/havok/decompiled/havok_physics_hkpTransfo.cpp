#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpTransfo.h"

// ----------------------------------------------------------------------------
// Function: hkpTransformShape::staticClass  (binary VA: 0x16b4950)
// Original: hkpTransformShape::staticClass
// ----------------------------------------------------------------------------
void * hkpTransformShape::staticClass()
{
  return &hkpTransformShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::cleanup  (binary VA: 0x16cdb30)
// Original: hkpTransformAgent::cleanup
// ----------------------------------------------------------------------------
int hkpTransformAgent::cleanup(hkpTransformAgent::Self *self, hkpConstraintOwner::Self *a2)
{
  (*(void (**)(uint32_t, hkpConstraintOwner::Self *))(**((uint32_t **)self + 3) + 36))(*((uint32_t *)self + 3), a2);
  return G4_VCALL<int>(self, 4);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::invalidateTim  (binary VA: 0x16cdb60)
// Original: hkpTransformAgent::invalidateTim
// ----------------------------------------------------------------------------
int hkpTransformAgent::invalidateTim(int a1, int a2)
{
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(a1 + 12) + 44))(*(uint32_t *)(a1 + 12), a2);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::warpTime  (binary VA: 0x16cdb80)
// Original: hkpTransformAgent::warpTime
// ----------------------------------------------------------------------------
int hkpTransformAgent::warpTime(int a1, int64_t a2, int a3)
{
  return (*(int (**)(uint32_t, uint32_t, uint32_t, int))(**(uint32_t **)(a1 + 12) + 48))(
           *(uint32_t *)(a1 + 12),
           a2,
           HIDWORD(a2),
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::removePoint  (binary VA: 0x16cdbc0)
// Original: hkpTransformAgent::removePoint
// ----------------------------------------------------------------------------
int hkpTransformAgent::removePoint(hkpTransformAgent::Self *self, uint16_t a2)
{
  return (*(int (**)(uint32_t, uint32_t))(**((uint32_t **)self + 3) + 52))(*((uint32_t *)self + 3), a2);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::commitPotential  (binary VA: 0x16cdbf0)
// Original: hkpTransformAgent::commitPotential
// ----------------------------------------------------------------------------
int hkpTransformAgent::commitPotential(hkpTransformAgent::Self *self, uint16_t a2)
{
  return (*(int (**)(uint32_t, uint32_t))(**((uint32_t **)self + 3) + 56))(*((uint32_t *)self + 3), a2);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::createZombie  (binary VA: 0x16cdc20)
// Original: hkpTransformAgent::createZombie
// ----------------------------------------------------------------------------
int hkpTransformAgent::createZombie(hkpTransformAgent::Self *self, uint16_t a2)
{
  return (*(int (**)(uint32_t, uint32_t))(**((uint32_t **)self + 3) + 60))(*((uint32_t *)self + 3), a2);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::Destroy  (binary VA: 0x16cdc50)
// Original: hkpTransformAgent::~hkpTransformAgent
// ----------------------------------------------------------------------------
void hkpTransformAgent::Destroy(hkpTransformAgent::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::linearCast  (binary VA: 0x16cdcb0)
// Original: hkpTransformAgent::linearCast
// ----------------------------------------------------------------------------
int hkpTransformAgent::linearCast(int a1, const hkTransformf::Self **a2, int a3, int a4, int a5, int a6)
{
  const hkTransformf::Self *v6;
  typedef uint32_t _g4_t_v8[4];
  typedef uint8_t _g4_t_v9[76];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  v6 = *a2;
  hkTransformf::setMul((hkTransformf::Self *)v9, a2[2], (const hkTransformf::Self *)((char *)*a2 + 48));
  v8[2] = (uint32_t)(uintptr_t)(v9);
  v8[0] = *((uint32_t *)v6 + 5);
  v8[3] = (uint32_t)(uintptr_t)(a2);
  v8[1] = 0;
  return (*(int (**)(uint32_t, uint32_t *, int, int, int, int))(**(uint32_t **)(a1 + 12) + 28))(
           *(uint32_t *)(a1 + 12),
           v8,
           a3,
           a4,
           a5,
           a6);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::getClosestPoints  (binary VA: 0x16cdea0)
// Original: hkpTransformAgent::getClosestPoints
// ----------------------------------------------------------------------------
int hkpTransformAgent::getClosestPoints(int a1, const hkTransformf::Self **a2, int a3, int a4, int a5)
{
  const hkTransformf::Self *v5;
  typedef uint32_t _g4_t_v7[4];
  typedef uint8_t _g4_t_v8[76];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v5 = *a2;
  hkTransformf::setMul((hkTransformf::Self *)v8, a2[2], (const hkTransformf::Self *)((char *)*a2 + 48));
  v7[2] = (uint32_t)(uintptr_t)(v8);
  v7[0] = *((uint32_t *)v5 + 5);
  v7[3] = (uint32_t)(uintptr_t)(a2);
  v7[1] = 0;
  return (*(int (**)(uint32_t, uint32_t *, int, int, int))(**(uint32_t **)(a1 + 12) + 24))(
           *(uint32_t *)(a1 + 12),
           v7,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::getPenetrations  (binary VA: 0x16cdf90)
// Original: hkpTransformAgent::getPenetrations
// ----------------------------------------------------------------------------
int hkpTransformAgent::getPenetrations(int a1, const hkTransformf::Self **a2, int a3, int a4, int a5)
{
  const hkTransformf::Self *v5;
  typedef uint32_t _g4_t_v7[4];
  typedef uint8_t _g4_t_v8[76];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v5 = *a2;
  hkTransformf::setMul((hkTransformf::Self *)v8, a2[2], (const hkTransformf::Self *)((char *)*a2 + 48));
  v7[2] = (uint32_t)(uintptr_t)(v8);
  v7[0] = *((uint32_t *)v5 + 5);
  v7[3] = (uint32_t)(uintptr_t)(a2);
  v7[1] = 0;
  return (*(int (**)(uint32_t, uint32_t *, int, int, int))(**(uint32_t **)(a1 + 12) + 20))(
           *(uint32_t *)(a1 + 12),
           v7,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::updateShapeCollectionFilter  (binary VA: 0x16ce080)
// Original: hkpTransformAgent::updateShapeCollectionFilter
// ----------------------------------------------------------------------------
int hkpTransformAgent::updateShapeCollectionFilter(int a1, const hkTransformf::Self **a2, int a3, int a4, int a5)
{
  const hkTransformf::Self *v5;
  typedef uint32_t _g4_t_v7[4];
  typedef uint8_t _g4_t_v8[76];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v5 = *a2;
  hkTransformf::setMul((hkTransformf::Self *)v8, a2[2], (const hkTransformf::Self *)((char *)*a2 + 48));
  v7[2] = (uint32_t)(uintptr_t)(v8);
  v7[0] = *((uint32_t *)v5 + 5);
  v7[3] = (uint32_t)(uintptr_t)(a2);
  v7[1] = 0;
  return (*(int (**)(uint32_t, uint32_t *, int, int, int))(**(uint32_t **)(a1 + 12) + 40))(
           *(uint32_t *)(a1 + 12),
           v7,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::staticLinearCast  (binary VA: 0x16ce160)
// Original: hkpTransformAgent::staticLinearCast
// ----------------------------------------------------------------------------
int hkpTransformAgent::staticLinearCast(const hkTransformf::Self **a1, int *a2, uint32_t *a3, int a4, int a5)
{
  int v5;
  typedef const hkTransformf::Self *_g4_t_v7;
  typedef uint32_t _g4_t_v8[4];
  typedef uint8_t _g4_t_v9[76];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  v7 = *a1;
  hkTransformf::setMul((hkTransformf::Self *)v9, a1[2], (const hkTransformf::Self *)((char *)*a1 + 48));
  v8[2] = (uint32_t)(uintptr_t)(v9);
  v8[3] = (uint32_t)(uintptr_t)(a1);
  v5 = *a2;
  v8[1] = 0;
  return (*(int (**)(uint32_t *, int *, uint32_t *, int, int))(*a3
                                                                 + 20
                                                                 * *(uint8_t *)(*(uint8_t *)(v5 + 8)
                                                                                      + 35
                                                                                      * *(uint8_t *)(*((uint32_t *)v7 + 5) + 8)
                                                                                      + *a3
                                                                                      + 416)
                                                                 + 2880))(
           v8,
           a2,
           a3,
           a4,
           a5);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::staticGetClosestPoints  (binary VA: 0x16ce340)
// Original: hkpTransformAgent::staticGetClosestPoints
// ----------------------------------------------------------------------------
int hkpTransformAgent::staticGetClosestPoints(const hkTransformf::Self **a1, int *a2, uint32_t *a3, int a4)
{
  int v4;
  typedef const hkTransformf::Self *_g4_t_v6;
  typedef uint32_t _g4_t_v7[4];
  typedef uint8_t _g4_t_v8[76];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  v6 = *a1;
  hkTransformf::setMul((hkTransformf::Self *)v8, a1[2], (const hkTransformf::Self *)((char *)*a1 + 48));
  v7[2] = (uint32_t)(uintptr_t)(v8);
  v7[3] = (uint32_t)(uintptr_t)(a1);
  v4 = *a2;
  v7[1] = 0;
  return (*(int (**)(uint32_t *, int *, uint32_t *, int))(*a3
                                                            + 20
                                                            * *(uint8_t *)(*(uint8_t *)(v4 + 8)
                                                                                 + 35
                                                                                 * *(uint8_t *)(*((uint32_t *)v6 + 5) + 8)
                                                                                 + *a3
                                                                                 + 416)
                                                            + 2876))(
           v7,
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::staticGetPenetrations  (binary VA: 0x16ce450)
// Original: hkpTransformAgent::staticGetPenetrations
// ----------------------------------------------------------------------------
int hkpTransformAgent::staticGetPenetrations(const hkTransformf::Self **a1, int *a2, uint32_t *a3, int a4)
{
  int v4;
  typedef const hkTransformf::Self *_g4_t_v6;
  typedef uint32_t _g4_t_v7[4];
  typedef uint8_t _g4_t_v8[76];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  v6 = *a1;
  hkTransformf::setMul((hkTransformf::Self *)v8, a1[2], (const hkTransformf::Self *)((char *)*a1 + 48));
  v7[2] = (uint32_t)(uintptr_t)(v8);
  v7[3] = (uint32_t)(uintptr_t)(a1);
  v4 = *a2;
  v7[1] = 0;
  return (*(int (**)(uint32_t *, int *, uint32_t *, int))(*a3
                                                            + 20
                                                            * *(uint8_t *)(*(uint8_t *)(v4 + 8)
                                                                                 + 35
                                                                                 * *(uint8_t *)(*((uint32_t *)v6 + 5) + 8)
                                                                                 + *a3
                                                                                 + 416)
                                                            + 2872))(
           v7,
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::Destroy_ea16ce620  (binary VA: 0x16ce620)
// Original: hkpTransformAgent::~hkpTransformAgent
// ----------------------------------------------------------------------------
void hkpTransformAgent::Destroy_ea16ce620(hkpTransformAgent::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::createTransformAAgent  (binary VA: 0x16ce680)
// Original: hkpTransformAgent::createTransformAAgent
// ----------------------------------------------------------------------------
uint32_t * hkpTransformAgent::createTransformAAgent(uint32_t *a1, int a2, int a3, ...)
{
  int address;
  uint32_t *v4;
  const hkTransformf::Self *v5;
  const void *v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  uint8_t *v65;
  uint32_t *v66;
  uint8_t *v67;
  va_list va;
  int v69;
  g4_int128_t *v70;
  uint32_t *v71;
  g4_int128_t v72;
  va_list va1;

  va_start(va1, a3);
  va_start(va, a3);
  v67 = va_arg(va1, uint8_t *);
  v69 = va_arg(va1, uint32_t);
  v70 = va_arg(va1, g4_int128_t *);
  v71 = va_arg(va1, uint32_t *);
  v72 = va_arg(va1, g4_int128_t);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v4 = (uint32_t *)(*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   16,
                   v11,
                   v12,
                   v13,
                   v14,
                   v15,
                   v16,
                   v17,
                   v18,
                   v19,
                   v20,
                   v21,
                   v22,
                   v23,
                   v24,
                   v25,
                   v26,
                   v27,
                   v28,
                   v29,
                   v30,
                   v31,
                   v32,
                   v33,
                   v34,
                   v35,
                   v36,
                   v37,
                   v38,
                   v39,
                   v40,
                   v41,
                   v42,
                   v43,
                   v44,
                   v45,
                   v46,
                   v47,
                   v48,
                   v49,
                   v50,
                   v51,
                   v52,
                   v53,
                   v54,
                   v55,
                   v56,
                   v57,
                   v58,
                   v59,
                   v60,
                   v61,
                   v62,
                   v63,
                   v64);
  v4[2] = (uint32_t)(uintptr_t)(v67);
  v4[1] = -65535;
  v66 = v4;
  *v4 = ((uint32_t)(uintptr_t)&off_209AD28);
  v5 = (const hkTransformf::Self *)(*a1 + 48);
  v65 = *(uint8_t **)(*a1 + 20);
  v6 = (const void *)a1[2];
  std::memcpy(&v72, v6, 176);
  hkTransformf::setMul((hkTransformf::Self *)&v72, (const hkTransformf::Self *)v6, v5);
  v70 = &v72;
  v67 = v65;
  v71 = a1;
  v69 = 0;
  v7 = *v66 + 35 * v65[8];
  v8 = *(uint8_t *)(*(uint32_t *)v65 + 8);
  if ( v66[6] != 0 )
    v9 = *(uint8_t *)(v8 + v7 + 1641);
  else
    v9 = *(uint8_t *)(v8 + v7 + 416);
  v66[3] = (*(int (**)(uint8_t **, uint8_t *, uint32_t *, uint8_t *))(*v66 + 20 * v9 + 2868))(
             g4_va_cast<uint8_t **>(va),
             v65,
             v66,
             v67);
  return v66;
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::createTransformBAgent  (binary VA: 0x16ce7a0)
// Original: hkpTransformAgent::createTransformBAgent
// ----------------------------------------------------------------------------
uint32_t * hkpTransformAgent::createTransformBAgent(int a1, uint32_t *a2, int a3, ...)
{
  int address;
  uint32_t *v4;
  const void *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  uint32_t *v65;
  int v66;
  int v67;
  va_list va;
  int v69;
  g4_int128_t *v70;
  const void *v71;
  g4_int128_t v72;
  va_list va1;

  va_start(va1, a3);
  va_start(va, a3);
  v67 = va_arg(va1, uint32_t);
  v69 = va_arg(va1, uint32_t);
  v70 = va_arg(va1, g4_int128_t *);
  v71 = va_arg(va1, const void *);
  v72 = va_arg(va1, g4_int128_t);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v4 = (uint32_t *)(*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   16,
                   v11,
                   v12,
                   v13,
                   v14,
                   v15,
                   v16,
                   v17,
                   v18,
                   v19,
                   v20,
                   v21,
                   v22,
                   v23,
                   v24,
                   v25,
                   v26,
                   v27,
                   v28,
                   v29,
                   v30,
                   v31,
                   v32,
                   v33,
                   v34,
                   v35,
                   v36,
                   v37,
                   v38,
                   v39,
                   v40,
                   v41,
                   v42,
                   v43,
                   v44,
                   v45,
                   v46,
                   v47,
                   v48,
                   v49,
                   v50,
                   v51,
                   v52,
                   v53,
                   v54,
                   v55,
                   v56,
                   v57,
                   v58,
                   v59,
                   v60,
                   v61,
                   v62,
                   v63,
                   v64);
  v4[1] = -65535;
  v65 = v4;
  v4[2] = v67;
  *v4 = ((uint32_t)(uintptr_t)&off_209AD28);
  v5 = (const void *)a2[2];
  v6 = *a2;
  v66 = *(uint32_t *)(*a2 + 20);
  std::memcpy(&v72, v5, 176);
  hkTransformf::setMul((hkTransformf::Self *)&v72, (const hkTransformf::Self *)v5, (const hkTransformf::Self *)(v6 + 48));
  v71 = v5;
  v70 = &v72;
  v67 = v66;
  v69 = 0;
  v7 = *(uint32_t *)v66 + 35 * *(uint8_t *)(v66 + 8);
  v8 = *(uint8_t *)(*v65 + 8);
  if ( *(uint32_t *)(v66 + 24) != 0 )
    v9 = *(uint8_t *)(v8 + v7 + 1641);
  else
    v9 = *(uint8_t *)(v8 + v7 + 416);
  v65[3] = (*(int (**)(int *, uint32_t *, uint32_t *, int))(*(uint32_t *)v66 + 20 * v9 + 2868))(
             g4_va_cast<int *>(va),
             v65,
             v65,
             v67);
  *v65 = ((uint32_t)(uintptr_t)&off_209ACC8);
  return v65;
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::processCollision  (binary VA: 0x16ce8e0)
// Original: hkpTransformAgent::processCollision
// ----------------------------------------------------------------------------
int hkpTransformAgent::processCollision(int a1, const hkTransformf::Self **a2, int a3, int *a4, int a5)
{
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  const hkTransformf::Self *v9;
  float *v10;
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm4_4
  float v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm5_4
  float v18; // xmm6_4
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm5_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm5_4
  float v30; // xmm4_4
  float v31; // xmm0_4
  uint64_t v32; // rax
  int v33;
  uint32_t *v34;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int *_g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef uint32_t _g4_t_v43[4];
  typedef float _g4_t_v44[47];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v36)) > _g4_s0 ? (4u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v37)) > _g4_s1 ? (8u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v38)) > _g4_s2 ? (16u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v39)) > _g4_s3 ? (20u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v40)) > _g4_s4 ? (24u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v41)) > _g4_s5 ? (28u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v42)) > _g4_s6 ? (28u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v43)) > _g4_s7 ? (32u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v44)) > _g4_s8 ? (48u + sizeof(_g4_t_v44)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v38 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtTransform");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = *a2;
  hkTransformf::setMul((hkTransformf::Self *)v44, a2[2], (const hkTransformf::Self *)((char *)*a2 + 48));
  v10 = (float *)a2[2];
  v11 = v10[27];
  v44[16] = v10[16];
  v44[17] = v10[17];
  v44[18] = v10[18];
  v44[19] = v10[19];
  v44[20] = v10[20];
  v44[21] = v10[21];
  v44[22] = v10[22];
  v44[23] = v10[23];
  v12 = v10[24];
  v13 = v10[26];
  v14 = v10[25];
  v15 = *((float *)v9 + 11);
  v16 = *((float *)v9 + 8);
  v17 = *((float *)v9 + 9);
  v41 = *((float *)v9 + 10);
  v44[24] = (float)((float)((float)(v41 * v14) - (float)(v13 * v17)) + (float)(v11 * v16)) + (float)(v15 * v12);
  v44[25] = (float)((float)((float)(v13 * v16) - (float)(v41 * v12)) + (float)(v11 * v17)) + (float)(v15 * v14);
  v44[26] = (float)((float)((float)(v17 * v12) - (float)(v16 * v14)) + (float)(v41 * v11)) + (float)(v13 * v15);
  v44[27] = (float)(v11 * v15) - (float)((float)((float)(v12 * v16) + (float)(v14 * v17)) + (float)(v13 * v41));
  v18 = v10[28];
  v19 = v10[29];
  v20 = *((float *)v9 + 8);
  v21 = *((float *)v9 + 9);
  v42 = *((float *)v9 + 10);
  v40 = *((float *)v9 + 11);
  v39 = v10[30];
  v22 = v10[31];
  v44[28] = (float)((float)((float)(v42 * v19) - (float)(v39 * v21)) + (float)(v22 * v20)) + (float)(v40 * v18);
  v44[29] = (float)((float)((float)(v39 * v20) - (float)(v42 * v18)) + (float)(v22 * v21)) + (float)(v40 * v19);
  v44[30] = (float)((float)((float)(v21 * v18) - (float)(v20 * v19)) + (float)(v42 * v22)) + (float)(v39 * v40);
  v44[31] = (float)(v22 * v40) - (float)((float)((float)(v18 * v20) + (float)(v19 * v21)) + (float)(v39 * v42));
  v23 = v10[32] - *((float *)v9 + 24);
  v24 = v10[33] - *((float *)v9 + 25);
  v25 = v10[34] - *((float *)v9 + 26);
  v26 = (float)(*((float *)v9 + 12) * v23) + (float)(*((float *)v9 + 13) * v24);
  v27 = (float)(*((float *)v9 + 16) * v23) + (float)(*((float *)v9 + 17) * v24);
  v28 = (float)(v23 * *((float *)v9 + 20)) + (float)(v24 * *((float *)v9 + 21));
  v29 = *((float *)v9 + 18) * v25;
  v30 = *((float *)v9 + 22) * v25;
  v44[32] = v26 + (float)(v25 * *((float *)v9 + 14));
  v44[35] = v28 + v30;
  v43[3] = (uint32_t)(uintptr_t)(a2);
  v44[34] = v28 + v30;
  v43[2] = (uint32_t)(uintptr_t)(v44);
  v44[33] = v27 + v29;
  v44[36] = v10[36];
  v44[37] = v10[37];
  v44[38] = v10[38];
  v44[39] = v10[39];
  v31 = v10[40];
  v43[1] = 0;
  v44[40] = v31;
  v43[0] = *((uint32_t *)v9 + 5);
  (*(void (**)(uint32_t, uint32_t *, int, int *, int, int, int, float *, int *, float, float, float))(**(uint32_t **)(a1 + 12) + 32))(
    *(uint32_t *)(a1 + 12),
    v43,
    a3,
    a4,
    a5,
    v36,
    v37,
    v44,
    v38,
    COERCE_FLOAT(LODWORD(v39)),
    COERCE_FLOAT(LODWORD(v40)),
    COERCE_FLOAT(LODWORD(v42)));
  LODWORD(v32) = (uint32_t)(uintptr_t)(a4);
  v33 = *a4;
  v34 = *(uint32_t **)(*a4 + 4);
  if ( (unsigned int)(uintptr_t)(v34) < *(uint32_t *)(*a4 + 12) )
  {
    *v34 = (uint32_t)(uintptr_t)("Et");
    v32 = __rdtsc();
    v34[1] = v32;
    *(uint32_t *)(v33 + 4) = (uint32_t)(uintptr_t)(v34 + 3);
  }
  return v32;
}

// ----------------------------------------------------------------------------
// Function: hkpTransformAgent::registerAgent  (binary VA: 0x16cef00)
// Original: hkpTransformAgent::registerAgent
// ----------------------------------------------------------------------------
int hkpTransformAgent::registerAgent(hkpTransformAgent::Self *self)
{
  uint32_t v2[11];

  v2[0] = (uint32_t)(uintptr_t)(hkpTransformAgent::createTransformBAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::staticGetClosestPoints);
  v2[3] = (uint32_t)(uintptr_t)(hkpSymmetricAgentLinearCast_hkpTransformAgent_52dea0::staticLinearCast);
  LOWORD(v2[4]) = 257;
  hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), -1, 14);
  v2[0] = (uint32_t)(uintptr_t)(hkpTransformAgent::createTransformAAgent);
  v2[1] = (uint32_t)(uintptr_t)(hkpTransformAgent::staticGetPenetrations);
  v2[2] = (uint32_t)(uintptr_t)(hkpTransformAgent::staticGetClosestPoints);
  LOWORD(v2[4]) = 256;
  v2[3] = (uint32_t)(uintptr_t)(((int (*)(const hkTransformf::Self **, int *, uint32_t *, int, int))hkpTransformAgent::staticLinearCast));
  return hkpCollisionDispatcher::registerCollisionAgent((int *)self, (int)(uintptr_t)(v2), 14, -1);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformShape::getMaximumProjection  (binary VA: 0x16de6d0)
// Original: hkpTransformShape::getMaximumProjection
// ----------------------------------------------------------------------------
long double hkpTransformShape::getMaximumProjection(hkpTransformShape::Self *self, const hkVector4f::Self *a2)
{
  float v2; // xmm4_4
  int v3;
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  typedef float _g4_t_v11;
  typedef float _g4_t_v12[6];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  v2 = *((float *)a2 + 1);
  v3 = *((uint32_t *)self + 5);
  v4 = (float)(*((float *)self + 12) * *(float *)a2) + (float)(*((float *)self + 13) * v2);
  v5 = *((float *)a2 + 2);
  v6 = (float)(*((float *)self + 16) * *(float *)a2) + (float)(*((float *)self + 17) * v2);
  v7 = (float)(*(float *)a2 * *((float *)self + 20)) + (float)(v2 * *((float *)self + 21));
  v8 = *((float *)self + 22) * v5;
  v9 = v4 + (float)(v5 * *((float *)self + 14));
  v12[1] = v6 + (float)(*((float *)self + 18) * v5);
  v12[2] = v7 + v8;
  v12[3] = v7 + v8;
  v12[0] = v9;
  v11 = ((long double (*)(int, float *))*(uint32_t *)(*(uint32_t *)v3 + 68))(v3, v12);
  return (float)((float)((float)((float)(*(float *)a2 * *((float *)self + 24))
                               + (float)(*((float *)a2 + 1) * *((float *)self + 25)))
                       + (float)(*((float *)a2 + 2) * *((float *)self + 26)))
               + v11);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformShape::getContainer  (binary VA: 0x16de7c0)
// Original: hkpTransformShape::getContainer
// ----------------------------------------------------------------------------
char * hkpTransformShape::getContainer(hkpTransformShape::Self *self)
{
  return (char *)self + 16;
}

// ----------------------------------------------------------------------------
// Function: hkpTransformShape::calcSizeForSpu  (binary VA: 0x16de7d0)
// Original: hkpTransformShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpTransformShape::calcSizeForSpu(int a1, int a2, int a3)
{
  int v3;

  v3 = (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 20) + 72))(*(uint32_t *)(a1 + 20), a2, a3 - 112);
  if ( v3 < 0 || a3 - 112 < v3 )
    return -1;
  if ( *(uint32_t *)(a1 + 20) == a1 + 112 )
  {
    *(uint32_t *)(a1 + 24) = 0;
    return v3 + 112;
  }
  else
  {
    *(uint32_t *)(a1 + 24) = v3;
    return 112;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpTransformShape::getAabb  (binary VA: 0x16de840)
// Original: hkpTransformShape::getAabb
// ----------------------------------------------------------------------------
int hkpTransformShape::getAabb(hkpTransformShape::Self *self, const hkTransformf::Self *a2, int64_t a3)
{
  uint8_t v4[76];

  hkTransformf::setMul((hkTransformf::Self *)v4, a2, (hkpTransformShape::Self *)((char *)self + 48));
  return (*(int (**)(uint32_t, uint8_t *, uint32_t, uint32_t))(**((uint32_t **)self + 5) + 24))(
           *((uint32_t *)self + 5),
           v4,
           a3,
           HIDWORD(a3));
}

// ----------------------------------------------------------------------------
// Function: hkpTransformShape::Destroy  (binary VA: 0x16de8a0)
// Original: hkpTransformShape::~hkpTransformShape
// ----------------------------------------------------------------------------
void hkpTransformShape::Destroy(hkpTransformShape::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B4C8);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994E8);
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
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformShape::Destroy_ea16de930  (binary VA: 0x16de930)
// Original: hkpTransformShape::~hkpTransformShape
// ----------------------------------------------------------------------------
void hkpTransformShape::Destroy_ea16de930(hkpTransformShape::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B4C8);
  v1 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994E8);
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
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v6 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v7 = 112;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v7 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v6, 12, self, v7);
}

// ----------------------------------------------------------------------------
// Function: hkpTransformShape::castRay  (binary VA: 0x16dea00)
// Original: hkpTransformShape::castRay
// ----------------------------------------------------------------------------
int hkpTransformShape::castRay(uint8_t *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  float v8; // xmm6_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm5_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm1_4
  float v18; // xmm5_4
  float v19; // xmm0_4
  float v20; // xmm4_4
  float v21; // xmm7_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm7_4
  float v28; // xmm3_4
  float v29; // xmm6_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm3_4
  float v34; // xmm1_4
  int v35;
  uint8_t *v36;
  int v37;
  bool v38;
  int v39;
  uint32_t *v40;
  uint64_t v41; // rax
  float v43; // xmm1_4
  float v44; // xmm2_4
  float v45; // xmm0_4
  float v46; // xmm4_4
  float v47; // xmm7_4
  float v48; // xmm6_4
  float v49; // xmm5_4
  float v50; // xmm3_4
  float v51; // xmm2_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int *_g4_t_address;
  typedef int *_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint8_t *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef uint32_t _g4_t_v65[2];
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef float _g4_t_v70;
  typedef float _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef uint32_t *_g4_t_v76;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v54)) > _g4_s0 ? (4u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v55)) > _g4_s1 ? (8u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v56)) > _g4_s2 ? (12u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v57)) > _g4_s3 ? (16u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v58)) > _g4_s4 ? (20u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_address)) > _g4_s5 ? (24u + sizeof(_g4_t_address)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v60)) > _g4_s6 ? (24u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v61)) > _g4_s7 ? (28u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v62)) > _g4_s8 ? (28u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v63)) > _g4_s9 ? (32u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v64)) > _g4_s10 ? (32u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v65)) > _g4_s11 ? (36u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v66)) > _g4_s12 ? (44u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v67)) > _g4_s13 ? (48u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v68)) > _g4_s14 ? (52u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v69)) > _g4_s15 ? (56u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v70)) > _g4_s16 ? (60u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v71)) > _g4_s17 ? (64u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v72)) > _g4_s18 ? (68u + sizeof(_g4_t_v72)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v73)) > _g4_s19 ? (72u + sizeof(_g4_t_v73)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v74)) > _g4_s20 ? (76u + sizeof(_g4_t_v74)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v75)) > _g4_s21 ? (80u + sizeof(_g4_t_v75)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v76)) > _g4_s22 ? (92u + sizeof(_g4_t_v76)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 36u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 44u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 48u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 60u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 64u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 68u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 72u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 76u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 80u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 92u);

  v76 = (uint32_t *)(&a1);
  v63 = a1;
  v4 = a2;
  v5 = a3;
  v58 = a4;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v57 = *address;
  v6 = *(uint32_t **)(*address + 4);
  v61 = v6;
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtrcTransform");
    v7 = __rdtsc();
    v61[1] = v7;
    *(uint32_t *)(v57 + 4) = (uint32_t)(uintptr_t)(v61 + 3);
  }
  v8 = *(float *)(v4 + 96);
  v9 = *(float *)v5;
  v72 = *(uint32_t *)(v5 + 32);
  v10 = v9 - v8;
  v11 = *(float *)(v5 + 4) - *(float *)(v4 + 100);
  v12 = *(float *)(v4 + 48);
  v13 = *(float *)(v4 + 52);
  v73 = *(uint32_t *)(v5 + 36);
  v14 = *(float *)(v4 + 68);
  v74 = *(uint32_t *)(v5 + 40);
  v75 = *(uint32_t *)(v5 + 44);
  v15 = *(float *)(v5 + 8) - *(float *)(v4 + 104);
  v16 = (float)(v12 * v10) + (float)(v13 * v11);
  v17 = (float)(*(float *)(v4 + 64) * v10) + (float)(v14 * v11);
  v18 = *(float *)(v4 + 84);
  v19 = (float)(v10 * *(float *)(v4 + 80)) + (float)(v11 * v18);
  v20 = *(float *)(v4 + 88);
  v21 = *(float *)(v4 + 56) * v15;
  v22 = v15 * *(float *)(v4 + 72);
  v23 = v16 + v21;
  v66 = v19 + (float)((float)(*(float *)(v5 + 8) - *(float *)(v4 + 104)) * v20);
  v24 = v17 + v22;
  v67 = v66;
  v25 = *(float *)(v4 + 48);
  v26 = *(float *)(v4 + 52);
  v27 = *(float *)(v4 + 68);
  *(float *)v65 = v23;
  v28 = *(float *)(v5 + 16) - v8;
  v29 = *(float *)(v5 + 20) - *(float *)(v4 + 100);
  *(float *)&v65[1] = v24;
  v30 = *(float *)(v5 + 24) - *(float *)(v4 + 104);
  v31 = (float)(v25 * v28) + (float)(v26 * v29);
  v32 = *(float *)(v4 + 64) * v28;
  v33 = (float)((float)(v28 * *(float *)(v4 + 80)) + (float)(v18 * v29)) + (float)(v20 * v30);
  v68 = v31 + (float)(*(float *)(v4 + 56) * v30);
  v34 = v30 * *(float *)(v4 + 72);
  ++*(uint32_t *)(v58 + 64);
  v70 = v33;
  v35 = *(uint32_t *)(v4 + 20);
  v71 = v33;
  v69 = (float)(v32 + (float)(v27 * v29)) + v34;
  v36 = v63;
  (*(void (**)(uint8_t *, int, uint32_t *, int, int, int, int, int, int, int *, int, uint8_t *))(*(uint32_t *)v35 + 28))(
    v63,
    v35,
    v65,
    v58,
    v54,
    v55,
    v56,
    v57,
    v58,
    address,
    v58,
    v63);
  v37 = *(uint32_t *)(v62 + 64);
  v38 = *v36 == 0;
  *(uint32_t *)(v62 + 64) = v37 - 1;
  if ( !v38 )
  {
    v43 = *(float *)v62;
    v44 = *(float *)(v4 + 48) * *(float *)v62;
    v45 = *(float *)(v62 + 4);
    v46 = *(float *)(v62 + 8);
    *(float *)v62 = v44;
    v47 = *(float *)(v4 + 52) * v43;
    *(float *)(v62 + 4) = v47;
    v48 = *(float *)(v4 + 56) * v43;
    *(float *)(v62 + 8) = v48;
    v49 = *(float *)(v4 + 60) * v43;
    *(float *)(v62 + 12) = v49;
    v50 = (float)(*(float *)(v4 + 64) * v45) + v44;
    *(float *)v62 = v50;
    v51 = (float)(*(float *)(v4 + 68) * v45) + v47;
    *(float *)(v62 + 4) = v51;
    v52 = (float)(*(float *)(v4 + 72) * v45) + v48;
    *(float *)(v62 + 8) = v52;
    v53 = (float)(v45 * *(float *)(v4 + 76)) + v49;
    *(float *)(v62 + 12) = v53;
    *(float *)v62 = (float)(*(float *)(v4 + 80) * v46) + v50;
    *(float *)(v62 + 4) = (float)(*(float *)(v4 + 84) * v46) + v51;
    *(float *)(v62 + 8) = (float)(*(float *)(v4 + 88) * v46) + v52;
    *(float *)(v62 + 12) = (float)(v46 * *(float *)(v4 + 92)) + v53;
    *(uint32_t *)(v62 + 4 * v37 + 28) = 0;
  }
  v39 = *v60;
  v40 = *(uint32_t **)(*v60 + 4);
  if ( (unsigned int)(uintptr_t)(v40) < *(uint32_t *)(*v60 + 12) )
  {
    *v40 = (uint32_t)(uintptr_t)("Et");
    v41 = __rdtsc();
    v40[1] = v41;
    *(uint32_t *)(v39 + 4) = (uint32_t)(uintptr_t)(v40 + 3);
  }
  return v64;
}

// ----------------------------------------------------------------------------
// Function: hkpTransformShape::castRayWithCollector  (binary VA: 0x16decf0)
// Original: hkpTransformShape::castRayWithCollector
// ----------------------------------------------------------------------------
int hkpTransformShape::castRayWithCollector(int a1, int a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  float v8; // xmm6_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm5_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm1_4
  float v18; // xmm5_4
  float v19; // xmm0_4
  float v20; // xmm4_4
  float v21; // xmm7_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm7_4
  float v28; // xmm3_4
  float v29; // xmm6_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm3_4
  float v34; // xmm1_4
  uint64_t v35; // rax
  float v36;
  uint32_t *v37;
  typedef const hkTransformf::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint32_t _g4_t_v44[4];
  typedef uint32_t _g4_t_v45[2];
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint8_t _g4_t_v56[76];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v39)) > _g4_s0 ? (4u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v40)) > _g4_s1 ? (16u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v41)) > _g4_s2 ? (20u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v42)) > _g4_s3 ? (24u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v43)) > _g4_s4 ? (28u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v44)) > _g4_s5 ? (32u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v45)) > _g4_s6 ? (48u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v46)) > _g4_s7 ? (56u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v47)) > _g4_s8 ? (60u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v48)) > _g4_s9 ? (64u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v49)) > _g4_s10 ? (68u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v50)) > _g4_s11 ? (72u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v51)) > _g4_s12 ? (76u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v52)) > _g4_s13 ? (80u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v53)) > _g4_s14 ? (84u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v54)) > _g4_s15 ? (88u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v55)) > _g4_s16 ? (92u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v56)) > _g4_s17 ? (96u + sizeof(_g4_t_v56)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 84u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 88u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 92u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 96u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v42 = address;
  v6 = *(uint32_t **)(*address + 4);
  v43 = *(uint32_t *)(v5 + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(v5 + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtrcTransform");
    v7 = __rdtsc();
    *(uint32_t *)(v43 + 4) = v7;
    *(uint32_t *)(v5 + 4) = v43 + 12;
  }
  v8 = *(float *)(a1 + 96);
  v9 = *(float *)a2;
  v52 = *(uint32_t *)(a2 + 32);
  v10 = v9 - v8;
  v11 = *(float *)(a2 + 4) - *(float *)(a1 + 100);
  v12 = *(float *)(a1 + 48);
  v13 = *(float *)(a1 + 52);
  v53 = *(uint32_t *)(a2 + 36);
  v14 = *(float *)(a1 + 68);
  v54 = *(uint32_t *)(a2 + 40);
  v55 = *(uint32_t *)(a2 + 44);
  v15 = *(float *)(a2 + 8) - *(float *)(a1 + 104);
  v16 = (float)(v12 * v10) + (float)(v13 * v11);
  v17 = (float)(*(float *)(a1 + 64) * v10) + (float)(v14 * v11);
  v18 = *(float *)(a1 + 84);
  v19 = (float)(v10 * *(float *)(a1 + 80)) + (float)(v11 * v18);
  v20 = *(float *)(a1 + 88);
  v21 = *(float *)(a1 + 56) * v15;
  v22 = v15 * *(float *)(a1 + 72);
  v23 = v16 + v21;
  v46 = v19 + (float)((float)(*(float *)(a2 + 8) - *(float *)(a1 + 104)) * v20);
  v24 = v17 + v22;
  v47 = v46;
  v25 = *(float *)(a1 + 48);
  v26 = *(float *)(a1 + 52);
  v27 = *(float *)(a1 + 68);
  *(float *)v45 = v23;
  v28 = *(float *)(a2 + 16) - v8;
  v29 = *(float *)(a2 + 20) - *(float *)(a1 + 100);
  *(float *)&v45[1] = v24;
  v30 = *(float *)(a2 + 24) - *(float *)(a1 + 104);
  v31 = (float)(v25 * v28) + (float)(v26 * v29);
  v32 = *(float *)(a1 + 64) * v28;
  v33 = (float)((float)(v28 * *(float *)(a1 + 80)) + (float)(v18 * v29)) + (float)(v20 * v30);
  v48 = v31 + (float)(*(float *)(a1 + 56) * v30);
  v34 = v30 * *(float *)(a1 + 72);
  v50 = v33;
  v51 = v33;
  v39 = *(const hkTransformf::Self **)(a3 + 8);
  v49 = (float)(v32 + (float)(v27 * v29)) + v34;
  hkTransformf::setMul((hkTransformf::Self *)v56, v39, (const hkTransformf::Self *)(a1 + 48));
  v44[3] = a3;
  v44[0] = *(uint32_t *)(a1 + 20);
  v44[2] = (uint32_t)(uintptr_t)(v56);
  v44[1] = 0;
  G4_VCALL<void>(v44[0], 32, v45, v44, a4, v40, v41, v42, v43);
  LODWORD(v35) = a2;
  v36 = *(float *)a2;
  v37 = *(uint32_t **)(*(uint32_t *)a2 + 4);
  if ( (unsigned int)(uintptr_t)(v37) < *(uint32_t *)(*(uint32_t *)a2 + 12) )
  {
    *v37 = (uint32_t)(uintptr_t)("Et");
    v35 = __rdtsc();
    v37[1] = v35;
    *(uint32_t *)(LODWORD(v36) + 4) = (uint32_t)(uintptr_t)(v37 + 3);
  }
  return v35;
}



// ============================================================================
// Address:   0x16def10 (size: 71 bytes)
// Symbol:    _ZN17hkpTransformShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpTransformShape::hkpTransformShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN17hkpTransformShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpTransformShape::Construct(int a1, int a2))(hkpSingleShapeContainer::Self * self)
{
  hkpShape::hkpShape(a1, a2);
  *(uint8_t *)(a1 + 8) = 14;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209B4C8);
  *(uint32_t *)(a1 + 16) = ((uint32_t)(uintptr_t)&off_20994E8);
  return (void (**)(hkpSingleShapeContainer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20994E8));
}
// ----------------------------------------------------------------------------
// Function: hkpTransformShape::setTransform  (binary VA: 0x16def60)
// Original: hkpTransformShape::setTransform
// ----------------------------------------------------------------------------
hkQuaternionf::Self * hkpTransformShape::setTransform(hkpTransformShape::Self *self, const hkTransformf::Self *a2)
{
  *((uint32_t *)self + 12) = *(uint32_t *)a2;
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 16) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 17) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 18) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 19) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 20) = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 21) = *((uint32_t *)a2 + 9);
  *((uint32_t *)self + 22) = *((uint32_t *)a2 + 10);
  *((uint32_t *)self + 23) = *((uint32_t *)a2 + 11);
  *((uint32_t *)self + 24) = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 13);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 14);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 15);
  return hkQuaternionf::set((hkpTransformShape::Self *)((char *)self + 32), (hkpTransformShape::Self *)((char *)self + 48));
}

// ----------------------------------------------------------------------------
// Function: hkpTransformShape::Construct  (binary VA: 0x16deff0)
// Original: hkpTransformShape::hkpTransformShape
// ----------------------------------------------------------------------------
void hkpTransformShape::Construct(hkpTransformShape::Self *self, const hkpShape::Self *a2, const hkTransformf::Self *a3)
{
  int v3;
  int32_t v4; // kr00_4

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B4C8);
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)self + 8) = 14;
  *((uint8_t *)self + 9) = 4;
  *((uint8_t *)self + 10) = 0;
  *((uint8_t *)self + 11) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994E8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(a2);
  if ( *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v4 = *((uint32_t *)a2 + 1);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
    }
    while ( v4 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v4, v3 | (uint16_t)(v4 + 1)) );
  }
  hkpTransformShape::setTransform(self, a3);
}


