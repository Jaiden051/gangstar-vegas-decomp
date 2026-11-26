#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpTyremar.h"

// ----------------------------------------------------------------------------
// Function: hkpTyremarksWheel::Destroy  (binary VA: 0x1869270)
// Original: hkpTyremarksWheel::~hkpTyremarksWheel
// ----------------------------------------------------------------------------
void hkpTyremarksWheel::Destroy(hkpTyremarksWheel::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A53C0);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      32 * v1);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarksWheel::Destroy_ea1869320  (binary VA: 0x1869320)
// Original: hkpTyremarksWheel::~hkpTyremarksWheel
// ----------------------------------------------------------------------------
void hkpTyremarksWheel::Destroy_ea1869320(hkpTyremarksWheel::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A53C0);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      32 * v1);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarkPoint::staticClass  (binary VA: 0x1869390)
// Original: hkpTyremarkPoint::staticClass
// ----------------------------------------------------------------------------
void * hkpTyremarkPoint::staticClass()
{
  return &hkpTyremarkPointClass;
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarksInfo::staticClass  (binary VA: 0x18693b0)
// Original: hkpTyremarksInfo::staticClass
// ----------------------------------------------------------------------------
void * hkpTyremarksInfo::staticClass()
{
  return &hkpTyremarksInfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarksWheel::staticClass  (binary VA: 0x18693d0)
// Original: hkpTyremarksWheel::staticClass
// ----------------------------------------------------------------------------
void * hkpTyremarksWheel::staticClass()
{
  return &hkpTyremarksWheelClass;
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarksInfo::Destroy  (binary VA: 0x18696e0)
// Original: hkpTyremarksInfo::~hkpTyremarksInfo
// ----------------------------------------------------------------------------
void hkpTyremarksInfo::Destroy(hkpTyremarksInfo::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett
  int v8;
  int v9;

  v1 = 0;
  v2 = *((uint32_t *)self + 5);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A53E8);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 4) + 4 * v1);
      if ( *(uint16_t *)(v3 + 6) != 0 )
      {
        v9 = v1;
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
        }
        while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6) );
        v1 = v9;
        if ( (uint16_t)v6 == 0 )
          G4_VCALL<void>(v3, 16);
        v2 = *((uint32_t *)self + 5);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  v8 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      4 * v8);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarksInfo::Destroy_ea18697b0  (binary VA: 0x18697b0)
// Original: hkpTyremarksInfo::~hkpTyremarksInfo
// ----------------------------------------------------------------------------
void hkpTyremarksInfo::Destroy_ea18697b0(hkpTyremarksInfo::Self *self)
{
  int v1;
  int v2;

  hkpTyremarksInfo::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarksWheel::Construct  (binary VA: 0x1869810)
// Original: hkpTyremarksWheel::hkpTyremarksWheel
// ----------------------------------------------------------------------------
void hkpTyremarksWheel::Construct(hkpTyremarksWheel::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A53C0);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 2) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarkPoint::Construct  (binary VA: 0x1869860)
// Original: hkpTyremarkPoint::hkpTyremarkPoint
// ----------------------------------------------------------------------------
void hkpTyremarkPoint::Construct(hkpTyremarkPoint::Self *self)
{
  *(g4_int128_t *)self = 0;
  *((g4_int128_t *)self + 1) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarksWheel::setNumPoints  (binary VA: 0x1869880)
// Original: hkpTyremarksWheel::setNumPoints
// ----------------------------------------------------------------------------
void * hkpTyremarksWheel::setNumPoints(hkpTyremarksWheel::Self *self, void *a2)
{
  void *result;
  int v3;
  int v4;
  typedef int _g4_t_v5;
  typedef uint8_t _g4_t_v6[44];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v6)) > _g4_s1 ? (32u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);

  result = a2;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 2) = 0;
  if ( (int)(uintptr_t)(a2) > 0 )
  {
    v3 = 0;
    do
    {
      hkpTyremarkPoint::Construct((hkpTyremarkPoint::Self *)v6);
      v4 = *((uint32_t *)self + 5);
      if ( v4 == (*((uint32_t *)self + 6) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkpTyremarksWheel::Self *)((char *)self + 16),
          32,
          v5);
        v4 = *((uint32_t *)self + 5);
      }
      result = (void *)(*((uint32_t *)self + 4) + 32 * v4);
      ++v3;
      std::memcpy(result, v6, 32);
      ++*((uint32_t *)self + 5);
    }
    while ( *((uint32_t *)self + 3) > v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarksWheel::getTyremarkPoint  (binary VA: 0x1869960)
// Original: hkpTyremarksWheel::getTyremarkPoint
// ----------------------------------------------------------------------------
int hkpTyremarksWheel::getTyremarkPoint(hkpTyremarksWheel::Self *self, int a2)
{
  return *((uint32_t *)self + 4) + 32 * ((a2 + *((uint32_t *)self + 2)) % *((uint32_t *)self + 3));
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarksInfo::getWheelTyremarksStrips  (binary VA: 0x1869980)
// Original: hkpTyremarksInfo::getWheelTyremarksStrips
// ----------------------------------------------------------------------------
int hkpTyremarksInfo::getWheelTyremarksStrips(hkpTyremarksInfo::Self *self, const hkpVehicleInstance::Self *a2, int a3, hkVector4f::Self *a4)
{
  int v4;
  hkpTyremarksWheel::Self *v6;
  int result;
  uint32_t *TyremarkPoint;
  int v9;

  v4 = 0;
  v6 = *(hkpTyremarksWheel::Self **)(*((uint32_t *)self + 4) + 4 * a3);
  result = *((uint32_t *)v6 + 3);
  v9 = result;
  if ( result > 0 )
  {
    do
    {
      TyremarkPoint = (uint32_t *)hkpTyremarksWheel::getTyremarkPoint(v6, v4++);
      *(uint32_t *)a4 = *TyremarkPoint;
      *((uint32_t *)a4 + 1) = TyremarkPoint[1];
      *((uint32_t *)a4 + 2) = TyremarkPoint[2];
      *((uint32_t *)a4 + 3) = TyremarkPoint[3];
      *((uint32_t *)a4 + 4) = TyremarkPoint[4];
      *((uint32_t *)a4 + 5) = TyremarkPoint[5];
      *((uint32_t *)a4 + 6) = TyremarkPoint[6];
      result = TyremarkPoint[7];
      *((uint32_t *)a4 + 7) = result;
      a4 = (hkVector4f::Self *)((char *)a4 + 32);
    }
    while ( v4 != v9 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarkPoint::getTyremarkStrength  (binary VA: 0x1869a10)
// Original: hkpTyremarkPoint::getTyremarkStrength
// ----------------------------------------------------------------------------
long double hkpTyremarkPoint::getTyremarkStrength(hkpTyremarkPoint::Self *self)
{
  return *((float *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarksWheel::addTyremarkPoint  (binary VA: 0x1869a30)
// Original: hkpTyremarksWheel::addTyremarkPoint
// ----------------------------------------------------------------------------
int hkpTyremarksWheel::addTyremarkPoint(hkpTyremarksWheel::Self *self, hkpTyremarkPoint::Self *a2)
{
  int v2;
  int v3;
  int result;
  uint32_t *v5;

  v2 = *((uint32_t *)self + 2);
  v3 = *((uint32_t *)self + 4);
  result = (v2 + *((uint32_t *)self + 3) - 1) / *((uint32_t *)self + 3);
  if ( *((float *)a2 + 7) != 0.0
    || *(float *)(v3 + 32 * ((v2 + *((uint32_t *)self + 3) - 1) % *((uint32_t *)self + 3)) + 28) != 0.0 )
  {
    v5 = (uint32_t *)(v3 + 32 * v2);
    *v5 = *(uint32_t *)a2;
    v5[1] = *((uint32_t *)a2 + 1);
    v5[2] = *((uint32_t *)a2 + 2);
    v5[3] = *((uint32_t *)a2 + 3);
    v5[4] = *((uint32_t *)a2 + 4);
    v5[5] = *((uint32_t *)a2 + 5);
    v5[6] = *((uint32_t *)a2 + 6);
    v5[7] = *((uint32_t *)a2 + 7);
    result = (*((uint32_t *)self + 2) + 1) / *((uint32_t *)self + 3);
    *((uint32_t *)self + 2) = (*((uint32_t *)self + 2) + 1) % *((uint32_t *)self + 3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarksInfo::updateTyremarksInfo  (binary VA: 0x1869ac0)
// Original: hkpTyremarksInfo::updateTyremarksInfo
// ----------------------------------------------------------------------------
int hkpTyremarksInfo::updateTyremarksInfo(hkpTyremarksInfo::Self *self, float a2, const hkpVehicleInstance::Self *a3)
{
  float *v3;
  float v4; // xmm3_4
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  int v13;
  float *v14;
  float v15; // xmm1_4
  float v16; // xmm0_4
  __m128i v17;
  typedef hkpTyremarksWheel::Self *_g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29[4];
  typedef float _g4_t_v30[11];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v19)) > _g4_s1 ? (24u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v20)) > _g4_s2 ? (28u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v21)) > _g4_s3 ? (32u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v22)) > _g4_s4 ? (36u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v24)) > _g4_s6 ? (44u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v25)) > _g4_s7 ? (48u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v26)) > _g4_s8 ? (52u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v27)) > _g4_s9 ? (56u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v28)) > _g4_s10 ? (60u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v29)) > _g4_s11 ? (64u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v30)) > _g4_s12 ? (80u + sizeof(_g4_t_v30)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);

  v3 = *((float **)a3 + 6);
  v4 = v3[108] * a2;
  v3 += 60;
  v28 = v4;
  v27 = v3[49] * a2;
  v26 = a2 * v3[50];
  hkVector4f::setRotatedDir((hkVector4f::Self *)v29, (const hkMatrix3f::Self *)v3, (const hkVector4f::Self *)(*((uint32_t *)a3 + 7) + 80));
  result = (int)(uintptr_t)(a3);
  v6 = *((uint32_t *)a3 + 7);
  if ( *(char *)(v6 + 32) > 0 )
  {
    v7 = 0;
    do
    {
      v14 = (float *)(*((uint32_t *)a3 + 19) + 224 * v7);
      v15 = *((float *)self + 2);
      v16 = v14[51] - v15;
g4_m128_raw(v17) = *((unsigned int *)self + 3);
      if ( v16 > 0.0 )
      {
        *(float *)g4_m128_ptr<int32_t>(v17) = *(float *)g4_m128_ptr<int32_t>(v17) - v15;
        v8 = _mm_cvtsi128_si32(v17);
        v9 = (2130706432 - v8) & ((v8 ^ (v8 + 2139095040)) >> 31);
        v19 = fminf(
                (float)(v16 * 255.0)
              * (float)((float)(2.0
                              - (float)(*(float *)g4_m128_ptr<int32_t>(v17)
                                      * (float)((float)(2.0
                                                      - (float)(*(float *)g4_m128_ptr<int32_t>(v17)
                                                              * (float)((float)(2.0
                                                                              - (float)(*(float *)g4_m128_ptr<int32_t>(v17)
                                                                                      * *(float *)&v9))
                                                                      * *(float *)&v9)))
                                              * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v17) * *(float *)&v9))
                                                      * *(float *)&v9))))
                      * (float)((float)(2.0
                                      - (float)(*(float *)g4_m128_ptr<int32_t>(v17)
                                              * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v17) * *(float *)&v9))
                                                      * *(float *)&v9)))
                              * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v17) * *(float *)&v9)) * *(float *)&v9))),
                255.0);
      }
      else
      {
        v19 = 0.0;
      }
      v10 = *(float *)(*(uint32_t *)(v6 + 140) + 40 * v7 + 8);
      v11 = -0.5 * v10;
      v12 = v10 * 0.5;
      v25 = (float)((float)(0.05f * v14[4]) + *v14) + (float)(v29[0] * v12);
      v20 = (float)((float)(0.05f * v14[5]) + v14[1]) + (float)(v29[1] * v12);
      v21 = (float)((float)(0.05f * v14[6]) + v14[2]) + (float)(v12 * v29[2]);
      v22 = (float)((float)((float)(0.05f * v14[4]) + *v14) + (float)(v29[0] * v11)) + v28;
      v23 = (float)((float)((float)(0.05f * v14[5]) + v14[1]) + (float)(v29[1] * v11)) + v27;
      v24 = (float)((float)((float)(0.05f * v14[6]) + v14[2]) + (float)(v11 * v29[2])) + v26;
      hkpTyremarkPoint::Construct((hkpTyremarkPoint::Self *)v30);
      v30[0] = v22;
      v13 = *((uint32_t *)self + 4);
      v30[1] = v23;
      v30[2] = v24;
      v30[3] = v19;
      v30[4] = v25 + v28;
      v30[5] = v20 + v27;
      v30[6] = v21 + v26;
      v30[7] = v19;
      v18 = *(hkpTyremarksWheel::Self **)(v13 + 4 * v7++);
      hkpTyremarksWheel::addTyremarkPoint(v18, (hkpTyremarkPoint::Self *)v30);
      v6 = *((uint32_t *)a3 + 7);
      result = *(char *)(v6 + 32);
    }
    while ( result > v7 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTyremarksInfo::Construct  (binary VA: 0x1869dd0)
// Original: hkpTyremarksInfo::hkpTyremarksInfo
// ----------------------------------------------------------------------------
void hkpTyremarksInfo::Construct(hkpTyremarksInfo::Self *self, const hkpVehicleData::Self *a2, void *a3)
{
  hkpTyremarksInfo::Self *v3;
  const hkpVehicleData::Self *v4;
  int v5;
  int address;
  int v7;
  hkpTyremarksInfo::Self *v8;
  hkpTyremarksWheel::Self *v9;
  typedef void *_g4_t_v10;
  typedef hkpTyremarksInfo::Self *_g4_t_v11;
  typedef hkpTyremarksInfo::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v13)) > _g4_s3 ? (8u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v14)) > _g4_s4 ? (12u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);

  v14[3] = (uint32_t)(uintptr_t)(&self);
  v3 = self;
  v4 = a2;
  v10 = a3;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_20A53E8);
  *((uint32_t *)v3 + 4) = 0;
  *((uint32_t *)v3 + 5) = 0;
  *((uint32_t *)v3 + 6) = 0x80000000;
  *((uint32_t *)v3 + 2) = 0;
  *((uint32_t *)v3 + 3) = 0;
  v5 = *((char *)v4 + 32);
  if ( v5 <= 0 )
  {
    *((uint32_t *)v3 + 5) = v5;
  }
  else
  {
    v12 = v3;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v14,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v3 + 4,
      v5,
      4);
    *((uint32_t *)v12 + 5) = v5;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v7 = 0;
    v8 = v12;
    do
    {
      v11 = v8;
      v13 = address;
      v9 = (hkpTyremarksWheel::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                  *(uint32_t *)(*(uint32_t *)address + 44),
                                  28);
      hkpTyremarksWheel::Construct(v9);
      hkpTyremarksWheel::setNumPoints(v9, v10);
      v8 = v11;
      address = v13;
      *(uint32_t *)(*((uint32_t *)v11 + 4) + 4 * v7++) = (uint32_t)(uintptr_t)(v9);
    }
    while ( *((uint32_t *)v11 + 5) > v7 );
  }
}


