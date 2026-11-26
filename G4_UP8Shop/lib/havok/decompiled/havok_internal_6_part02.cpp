#include "Core/Utils/DecompTypes.h"
#include "havok_internal_6_part02.h"

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::getClass  (binary VA: 0x18a6e20)
// Original: VecArrayImplementation::getClass
// ----------------------------------------------------------------------------
int VecArrayImplementation::getClass()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::clear  (binary VA: 0x18a6e30)
// Original: VecArrayImplementation::clear
// ----------------------------------------------------------------------------
VecArrayImplementation::Self * VecArrayImplementation::clear(VecArrayImplementation::Self *self)
{
  *((uint32_t *)self + 4) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::setAll  (binary VA: 0x18a6e40)
// Original: VecArrayImplementation::setAll
// ----------------------------------------------------------------------------
void VecArrayImplementation::setAll()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::setAll_ea18a6e50  (binary VA: 0x18a6e50)
// Original: VecArrayImplementation::setAll
// ----------------------------------------------------------------------------
void VecArrayImplementation::setAll_ea18a6e50()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::setAll_ea18a6e60  (binary VA: 0x18a6e60)
// Original: VecArrayImplementation::setAll
// ----------------------------------------------------------------------------
void VecArrayImplementation::setAll_ea18a6e60()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::setAll_ea18a6e70  (binary VA: 0x18a6e70)
// Original: VecArrayImplementation::setAll
// ----------------------------------------------------------------------------
void VecArrayImplementation::setAll_ea18a6e70()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::setAll_ea18a6e80  (binary VA: 0x18a6e80)
// Original: VecArrayImplementation::setAll
// ----------------------------------------------------------------------------
void VecArrayImplementation::setAll_ea18a6e80()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::setAll_ea18a6e90  (binary VA: 0x18a6e90)
// Original: VecArrayImplementation::setAll
// ----------------------------------------------------------------------------
void VecArrayImplementation::setAll_ea18a6e90()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::setAll_ea18a6ea0  (binary VA: 0x18a6ea0)
// Original: VecArrayImplementation::setAll
// ----------------------------------------------------------------------------
void VecArrayImplementation::setAll_ea18a6ea0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::setAll_ea18a6eb0  (binary VA: 0x18a6eb0)
// Original: VecArrayImplementation::setAll
// ----------------------------------------------------------------------------
void VecArrayImplementation::setAll_ea18a6eb0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::setAll_ea18a6ec0  (binary VA: 0x18a6ec0)
// Original: VecArrayImplementation::setAll
// ----------------------------------------------------------------------------
void VecArrayImplementation::setAll_ea18a6ec0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::setAll_ea18a6ed0  (binary VA: 0x18a6ed0)
// Original: VecArrayImplementation::setAll
// ----------------------------------------------------------------------------
void VecArrayImplementation::setAll_ea18a6ed0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::setAll_ea18a6ee0  (binary VA: 0x18a6ee0)
// Original: VecArrayImplementation::setAll
// ----------------------------------------------------------------------------
void VecArrayImplementation::setAll_ea18a6ee0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: PointerArrayImplementation::asObject  (binary VA: 0x18a6ef0)
// Original: PointerArrayImplementation::asObject
// ----------------------------------------------------------------------------
int PointerArrayImplementation::asObject(PointerArrayImplementation::Self *self, int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 3) + 4 * a2);
}

// ----------------------------------------------------------------------------
// Function: PointerArrayImplementation::asStridedBasicArray  (binary VA: 0x18a6f00)
// Original: PointerArrayImplementation::asStridedBasicArray
// ----------------------------------------------------------------------------
uint32_t * PointerArrayImplementation::asStridedBasicArray(uint32_t *a1)
{
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: CstringArrayImplementation::asString  (binary VA: 0x18a6f10)
// Original: CstringArrayImplementation::asString
// ----------------------------------------------------------------------------
int CstringArrayImplementation::asString(CstringArrayImplementation::Self *self, int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 3) + 4 * a2);
}

// ----------------------------------------------------------------------------
// Function: CstringArrayImplementation::asStridedBasicArray  (binary VA: 0x18a6f20)
// Original: CstringArrayImplementation::asStridedBasicArray
// ----------------------------------------------------------------------------
uint32_t * CstringArrayImplementation::asStridedBasicArray(uint32_t *a1)
{
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ArrayArrayImplementation::asStridedBasicArray  (binary VA: 0x18a6f30)
// Original: ArrayArrayImplementation::asStridedBasicArray
// ----------------------------------------------------------------------------
uint32_t * ArrayArrayImplementation::asStridedBasicArray(uint32_t *a1)
{
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::asStridedBasicArray  (binary VA: 0x18a6f40)
// Original: StructArrayImplementation::asStridedBasicArray
// ----------------------------------------------------------------------------
uint32_t * StructArrayImplementation::asStridedBasicArray(uint32_t *a1)
{
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::getClass  (binary VA: 0x18a6f50)
// Original: StructArrayImplementation::Object::getClass
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::getClass(StructArrayImplementation::Object::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 28))(*((uint32_t *)self + 3));
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::hasMember  (binary VA: 0x18a6f70)
// Original: StructArrayImplementation::Object::hasMember
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::hasMember(StructArrayImplementation::Object::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v4;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  (*(void (**)(int *))(*(uint32_t *)self + 128))(&v6);
  v1 = *((uint32_t *)self + 3);
  v2 = *(uint32_t *)(v1 + 16);
  if ( v2 <= 0 )
    return 0;
  v3 = *(uint32_t **)(v1 + 12);
  if ( v6 != *v3 )
  {
    v4 = 0;
    while ( ++v4 != v2 )
    {
      if ( v6 == v3[2 * v4] )
        return 1;
    }
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::isSet  (binary VA: 0x18a6fe0)
// Original: StructArrayImplementation::Object::isSet
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::isSet(int a1, uint32_t *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int v5;

  v2 = *(uint32_t *)(a1 + 12);
  v3 = *(uint32_t *)(v2 + 16);
  if ( v3 <= 0 )
    return 0;
  v4 = *(uint32_t **)(v2 + 12);
  if ( *a2 != *v4 )
  {
    v5 = 0;
    while ( ++v5 != v3 )
    {
      if ( v4[2 * v5] == *a2 )
        return 1;
    }
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::getHandle  (binary VA: 0x18a7020)
// Original: StructArrayImplementation::Object::getHandle
// ----------------------------------------------------------------------------
StructArrayImplementation::Object::Self * StructArrayImplementation::Object::getHandle(StructArrayImplementation::Object::Self *self, int a2)
{
  *(uint32_t *)self = a2;
  *((uint32_t *)self + 1) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::getMemberIterator  (binary VA: 0x18a7040)
// Original: StructArrayImplementation::Object::getMemberIterator
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::getMemberIterator()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::isValid  (binary VA: 0x18a7050)
// Original: StructArrayImplementation::Object::isValid
// ----------------------------------------------------------------------------
bool StructArrayImplementation::Object::isValid(StructArrayImplementation::Object::Self *self, int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 3) + 16) > a2;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::getNextMember  (binary VA: 0x18a7070)
// Original: StructArrayImplementation::Object::getNextMember
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::getNextMember(StructArrayImplementation::Object::Self *self, int a2)
{
  return a2 + 1;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::getMemberName  (binary VA: 0x18a7080)
// Original: StructArrayImplementation::Object::getMemberName
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::getMemberName(StructArrayImplementation::Object::Self *self, int a2)
{
  return *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 3) + 12) + 8 * a2);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::getMemberValue  (binary VA: 0x18a70a0)
// Original: StructArrayImplementation::Object::getMemberValue
// ----------------------------------------------------------------------------
StructArrayImplementation::Object::Self * StructArrayImplementation::Object::getMemberValue(StructArrayImplementation::Object::Self *self, int a2, int a3)
{
  int v4;

  v4 = *(uint32_t *)(a2 + 12);
  *(uint32_t *)self = a2;
  *((uint32_t *)self + 1) = *(uint32_t *)(*(uint32_t *)(v4 + 12) + 8 * a3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::getAllMemberHandles  (binary VA: 0x18a70c0)
// Original: StructArrayImplementation::Object::getAllMemberHandles
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::getAllMemberHandles(int a1, int *a2)
{
  int result;
  int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __m128i *v8;
  __m128i v9;
  unsigned int v10;
  __m128i v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  int v17;

  v16 = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 24);
  result = *a2;
  v3 = *a2 + 4 * a2[1];
  if ( v16 != 0 )
  {
    result = *(uint32_t *)(*(uint32_t *)(a1 + 12) + 24);
    do
    {
      v4 = *(uint32_t *)(result + 44);
      v5 = *(uint32_t *)(result + 40);
      v3 -= 4 * v4;
      if ( v4 > 0 )
      {
        v6 = v4;
        v7 = -((uint8_t)(v3 & 0xF) >> 2) & 3;
        if ( v4 <= v7 )
          v7 = v4;
        if ( (unsigned int)v4 > 7 )
        {
          if ( v7 == 0 )
          {
            v6 = 0;
            v17 = 0;
LABEL_15:
            v14 = v4 - v6;
            v15 = (v4 - v6) >> 2;
            v13 = 4 * v15;
            if ( 4 * v15 == 0 )
              goto LABEL_20;
g4_m128_lane<int64_t>(v9, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(v5 + 20)), 0);
            v8 = (__m128i *)(v3 + 4 * v6);
g4_m128_lane<int64_t>(v9, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v5 + 40), _mm_cvtsi32_si128(v5 + 60)), 0);
            v10 = 0;
            while ( 1 )
            {
              *v8 = v9;
              ++v10;
              ++v8;
              v11 = _mm_add_epi32(v9, G4_BITCAST<__m128i>(xmmword_1C7CE80));
              if ( v15 <= v10 )
                break;
              v9 = v11;
            }
            v17 += v13;
            v5 += 80 * v15;
            if ( v14 != v13 )
            {
LABEL_20:
              *(uint32_t *)(v3 + 4 * v17) = v5;
              if ( v4 > v17 + 1 )
              {
                *(uint32_t *)(v3 + 4 * (v17 + 1)) = v5 + 20;
                v12 = v5 + 40;
                if ( v4 > v17 + 2 )
                  *(uint32_t *)(v3 + 4 * (v17 + 2)) = v12;
              }
            }
            goto LABEL_23;
          }
          v6 = v7;
        }
        *(uint32_t *)v3 = v5;
        if ( v6 == 1 )
        {
          v5 += 20;
          v17 = 1;
        }
        else
        {
          *(uint32_t *)(v3 + 4) = v5 + 20;
          if ( v6 == 2 )
          {
            v5 += 40;
            v17 = 2;
          }
          else
          {
            *(uint32_t *)(v3 + 8) = v5 + 40;
            if ( v6 == 3 )
            {
              v5 += 60;
              v17 = 3;
            }
            else
            {
              *(uint32_t *)(v3 + 12) = v5 + 60;
              if ( v6 == 4 )
              {
                v5 += 80;
                v17 = 4;
              }
              else
              {
                *(uint32_t *)(v3 + 16) = v5 + 80;
                if ( v6 == 5 )
                {
                  v5 += 100;
                  v17 = 5;
                }
                else
                {
                  *(uint32_t *)(v3 + 20) = v5 + 100;
                  if ( v6 == 7 )
                  {
                    *(uint32_t *)(v3 + 24) = v5 + 120;
                    v5 += 140;
                    v17 = 7;
                  }
                  else
                  {
                    v5 += 120;
                    v17 = 6;
                  }
                }
              }
            }
          }
        }
        if ( v4 != v6 )
          goto LABEL_15;
      }
LABEL_23:
      v16 = *(uint32_t *)(v16 + 24);
      result = v16;
    }
    while ( v16 != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::selfDestruct  (binary VA: 0x18a72f0)
// Original: StructArrayImplementation::Object::selfDestruct
// ----------------------------------------------------------------------------
void StructArrayImplementation::Object::selfDestruct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::destroy  (binary VA: 0x18a7300)
// Original: StructArrayImplementation::Object::destroy
// ----------------------------------------------------------------------------
void StructArrayImplementation::Object::destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::getMemberInfo  (binary VA: 0x18a7310)
// Original: StructArrayImplementation::Object::getMemberInfo
// ----------------------------------------------------------------------------
uint32_t * StructArrayImplementation::Object::getMemberInfo(int a1, int *a2, uint32_t *a3)
{
  int v4;

  v4 = *a2;
  a3[1] = 0;
  *a3 = v4;
  a3[2] = a2[3];
  a3[3] = a2[4];
  return a3;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::createdDuringPatching  (binary VA: 0x18a7330)
// Original: StructArrayImplementation::Object::createdDuringPatching
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::createdDuringPatching()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::destroyMember  (binary VA: 0x18a7340)
// Original: StructArrayImplementation::Object::destroyMember
// ----------------------------------------------------------------------------
void StructArrayImplementation::Object::destroyMember()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::getClass  (binary VA: 0x18a7350)
// Original: StructArrayImplementation::getClass
// ----------------------------------------------------------------------------
int StructArrayImplementation::getClass(StructArrayImplementation::Self *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::getType  (binary VA: 0x18a7360)
// Original: StructArrayImplementation::getType
// ----------------------------------------------------------------------------
int StructArrayImplementation::getType(StructArrayImplementation::Self *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::getWorld  (binary VA: 0x18a7370)
// Original: StructArrayImplementation::getWorld
// ----------------------------------------------------------------------------
int StructArrayImplementation::getWorld(StructArrayImplementation::Self *self)
{
  return *((uint32_t *)self + 9);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::clear  (binary VA: 0x18a7380)
// Original: StructArrayImplementation::clear
// ----------------------------------------------------------------------------
int StructArrayImplementation::clear(StructArrayImplementation::Self *self)
{
  int i;
  int v2;
  int result;

  for ( i = 0; *((uint32_t *)self + 4) > i; result = G4_VCALL<int>(v2, 12) )
    v2 = *(uint32_t *)(*((uint32_t *)self + 3) + 8 * i++ + 4);
  *((uint32_t *)self + 8) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::reserve  (binary VA: 0x18a73d0)
// Original: StructArrayImplementation::reserve
// ----------------------------------------------------------------------------
int StructArrayImplementation::reserve(StructArrayImplementation::Self *self, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = 0;
  result = *((uint32_t *)self + 4);
  if ( result > 0 )
  {
    do
    {
      v4 = *(uint32_t *)(*((uint32_t *)self + 3) + 8 * v2++ + 4);
      result = G4_VCALL<int>(v4, 16, a2);
    }
    while ( *((uint32_t *)self + 4) > v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::setSize  (binary VA: 0x18a7420)
// Original: StructArrayImplementation::setSize
// ----------------------------------------------------------------------------
int StructArrayImplementation::setSize(StructArrayImplementation::Self *self, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = 0;
  result = *((uint32_t *)self + 4);
  *((uint32_t *)self + 8) = a2;
  if ( result > 0 )
  {
    do
    {
      v4 = *(uint32_t *)(*((uint32_t *)self + 3) + 8 * v2++ + 4);
      result = G4_VCALL<int>(v4, 20, a2);
    }
    while ( *((uint32_t *)self + 4) > v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::getSize  (binary VA: 0x18a7470)
// Original: StructArrayImplementation::getSize
// ----------------------------------------------------------------------------
int StructArrayImplementation::getSize(StructArrayImplementation::Self *self)
{
  return *((uint32_t *)self + 8);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_unsigned_char_cf37ee::Destroy  (binary VA: 0x18a7500)
// Original: BasicArrayImplementation<unsigned char>::~BasicArrayImplementation
// ----------------------------------------------------------------------------
void BasicArrayImplementation_unsigned_char_cf37ee::Destroy(BasicArrayImplementation<unsigned char> *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A71E8);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), v2 & 0x3FFFFFFF);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_float_id_a635ab::Destroy  (binary VA: 0x18a7570)
// Original: BasicArrayImplementation<float>::~BasicArrayImplementation
// ----------------------------------------------------------------------------
void BasicArrayImplementation_float_id_a635ab::Destroy(BasicArrayImplementation<float> *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A74E8);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), 4 * v2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataObjectImpl_144f64::Destroy  (binary VA: 0x18a75e0)
// Original: BasicArrayImplementation<hkDataObjectImpl *>::~BasicArrayImplementation
// ----------------------------------------------------------------------------
void BasicArrayImplementation_hkDataObjectImpl_144f64::Destroy(BasicArrayImplementation<hkDataObjectImpl::Self *> *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A77E8);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), 4 * v2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_char_id_1c265f::Destroy  (binary VA: 0x18a7650)
// Original: BasicArrayImplementation<char *>::~BasicArrayImplementation
// ----------------------------------------------------------------------------
void BasicArrayImplementation_char_id_1c265f::Destroy(BasicArrayImplementation<char *> *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7968);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), 4 * v2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataArrayImpl_e308bd::Destroy  (binary VA: 0x18a76c0)
// Original: BasicArrayImplementation<hkDataArrayImpl *>::~BasicArrayImplementation
// ----------------------------------------------------------------------------
void BasicArrayImplementation_hkDataArrayImpl_e308bd::Destroy(BasicArrayImplementation<hkDataArrayImpl::Self *> *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7AE8);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), 4 * v2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::Destroy  (binary VA: 0x18a7730)
// Original: StructArrayImplementation::Object::~Object
// ----------------------------------------------------------------------------
void StructArrayImplementation::Object::Destroy(StructArrayImplementation::Object::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: RealArrayView::Destroy  (binary VA: 0x18a7750)
// Original: RealArrayView::~RealArrayView
// ----------------------------------------------------------------------------
void RealArrayView::Destroy(RealArrayView::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: ArrayOfTuplesImplementation::View::Destroy  (binary VA: 0x18a7770)
// Original: ArrayOfTuplesImplementation::View::~View
// ----------------------------------------------------------------------------
void ArrayOfTuplesImplementation::View::Destroy(ArrayOfTuplesImplementation::View::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: sub_18A7790  (binary VA: 0x18a7790)
// Original: sub_18A7790
// ----------------------------------------------------------------------------
uint32_t * sub_18A7790(uint32_t *a1)
{
  *a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataArrayImpl_e308bd::getType  (binary VA: 0x18a77b0)
// Original: BasicArrayImplementation<hkDataArrayImpl *>::getType
// ----------------------------------------------------------------------------
int BasicArrayImplementation_hkDataArrayImpl_e308bd::getType(BasicArrayImplementation<hkDataArrayImpl::Self *> *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataArrayImpl_e308bd::getSize  (binary VA: 0x18a77c0)
// Original: BasicArrayImplementation<hkDataArrayImpl *>::getSize
// ----------------------------------------------------------------------------
int BasicArrayImplementation_hkDataArrayImpl_e308bd::getSize(BasicArrayImplementation<hkDataArrayImpl::Self *> *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataArrayImpl_e308bd::getClass  (binary VA: 0x18a77d0)
// Original: BasicArrayImplementation<hkDataArrayImpl *>::getClass
// ----------------------------------------------------------------------------
int BasicArrayImplementation_hkDataArrayImpl_e308bd::getClass()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataArrayImpl_e308bd::getWorld  (binary VA: 0x18a77e0)
// Original: BasicArrayImplementation<hkDataArrayImpl *>::getWorld
// ----------------------------------------------------------------------------
int BasicArrayImplementation_hkDataArrayImpl_e308bd::getWorld(BasicArrayImplementation<hkDataArrayImpl::Self *> *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataArrayImpl_e308bd::clear  (binary VA: 0x18a77f0)
// Original: BasicArrayImplementation<hkDataArrayImpl *>::clear
// ----------------------------------------------------------------------------
BasicArrayImplementation<hkDataArrayImpl::Self *> * BasicArrayImplementation_hkDataArrayImpl_e308bd::clear(BasicArrayImplementation<hkDataArrayImpl::Self *> *self)
{
  *((uint32_t *)self + 4) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_char_id_1c265f::getType  (binary VA: 0x18a7800)
// Original: BasicArrayImplementation<char *>::getType
// ----------------------------------------------------------------------------
int BasicArrayImplementation_char_id_1c265f::getType(BasicArrayImplementation<char *> *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_char_id_1c265f::clear  (binary VA: 0x18a7810)
// Original: BasicArrayImplementation<char *>::clear
// ----------------------------------------------------------------------------
BasicArrayImplementation<char *> * BasicArrayImplementation_char_id_1c265f::clear(BasicArrayImplementation<char *> *self)
{
  *((uint32_t *)self + 4) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_char_id_1c265f::getSize  (binary VA: 0x18a7820)
// Original: BasicArrayImplementation<char *>::getSize
// ----------------------------------------------------------------------------
int BasicArrayImplementation_char_id_1c265f::getSize(BasicArrayImplementation<char *> *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_char_id_1c265f::getClass  (binary VA: 0x18a7830)
// Original: BasicArrayImplementation<char *>::getClass
// ----------------------------------------------------------------------------
int BasicArrayImplementation_char_id_1c265f::getClass()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_char_id_1c265f::getWorld  (binary VA: 0x18a7840)
// Original: BasicArrayImplementation<char *>::getWorld
// ----------------------------------------------------------------------------
int BasicArrayImplementation_char_id_1c265f::getWorld(BasicArrayImplementation<char *> *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataObjectImpl_144f64::getType  (binary VA: 0x18a7850)
// Original: BasicArrayImplementation<hkDataObjectImpl *>::getType
// ----------------------------------------------------------------------------
int BasicArrayImplementation_hkDataObjectImpl_144f64::getType(BasicArrayImplementation<hkDataObjectImpl::Self *> *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataObjectImpl_144f64::clear  (binary VA: 0x18a7860)
// Original: BasicArrayImplementation<hkDataObjectImpl *>::clear
// ----------------------------------------------------------------------------
BasicArrayImplementation<hkDataObjectImpl::Self *> * BasicArrayImplementation_hkDataObjectImpl_144f64::clear(BasicArrayImplementation<hkDataObjectImpl::Self *> *self)
{
  *((uint32_t *)self + 4) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataObjectImpl_144f64::getSize  (binary VA: 0x18a7870)
// Original: BasicArrayImplementation<hkDataObjectImpl *>::getSize
// ----------------------------------------------------------------------------
int BasicArrayImplementation_hkDataObjectImpl_144f64::getSize(BasicArrayImplementation<hkDataObjectImpl::Self *> *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataObjectImpl_144f64::getClass  (binary VA: 0x18a7880)
// Original: BasicArrayImplementation<hkDataObjectImpl *>::getClass
// ----------------------------------------------------------------------------
int BasicArrayImplementation_hkDataObjectImpl_144f64::getClass()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataObjectImpl_144f64::getWorld  (binary VA: 0x18a7890)
// Original: BasicArrayImplementation<hkDataObjectImpl *>::getWorld
// ----------------------------------------------------------------------------
int BasicArrayImplementation_hkDataObjectImpl_144f64::getWorld(BasicArrayImplementation<hkDataObjectImpl::Self *> *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_float_id_a635ab::getType  (binary VA: 0x18a78a0)
// Original: BasicArrayImplementation<float>::getType
// ----------------------------------------------------------------------------
int BasicArrayImplementation_float_id_a635ab::getType(BasicArrayImplementation<float> *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_float_id_a635ab::clear  (binary VA: 0x18a78b0)
// Original: BasicArrayImplementation<float>::clear
// ----------------------------------------------------------------------------
BasicArrayImplementation<float> * BasicArrayImplementation_float_id_a635ab::clear(BasicArrayImplementation<float> *self)
{
  *((uint32_t *)self + 4) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_float_id_a635ab::getSize  (binary VA: 0x18a78c0)
// Original: BasicArrayImplementation<float>::getSize
// ----------------------------------------------------------------------------
int BasicArrayImplementation_float_id_a635ab::getSize(BasicArrayImplementation<float> *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_float_id_a635ab::getClass  (binary VA: 0x18a78d0)
// Original: BasicArrayImplementation<float>::getClass
// ----------------------------------------------------------------------------
int BasicArrayImplementation_float_id_a635ab::getClass()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_float_id_a635ab::getWorld  (binary VA: 0x18a78e0)
// Original: BasicArrayImplementation<float>::getWorld
// ----------------------------------------------------------------------------
int BasicArrayImplementation_float_id_a635ab::getWorld(BasicArrayImplementation<float> *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_unsigned_char_cf37ee::getType  (binary VA: 0x18a78f0)
// Original: BasicArrayImplementation<unsigned char>::getType
// ----------------------------------------------------------------------------
int BasicArrayImplementation_unsigned_char_cf37ee::getType(BasicArrayImplementation<unsigned char> *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_unsigned_char_cf37ee::clear  (binary VA: 0x18a7900)
// Original: BasicArrayImplementation<unsigned char>::clear
// ----------------------------------------------------------------------------
BasicArrayImplementation<unsigned char> * BasicArrayImplementation_unsigned_char_cf37ee::clear(BasicArrayImplementation<unsigned char> *self)
{
  *((uint32_t *)self + 4) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_unsigned_char_cf37ee::getSize  (binary VA: 0x18a7910)
// Original: BasicArrayImplementation<unsigned char>::getSize
// ----------------------------------------------------------------------------
int BasicArrayImplementation_unsigned_char_cf37ee::getSize(BasicArrayImplementation<unsigned char> *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_unsigned_char_cf37ee::getClass  (binary VA: 0x18a7920)
// Original: BasicArrayImplementation<unsigned char>::getClass
// ----------------------------------------------------------------------------
int BasicArrayImplementation_unsigned_char_cf37ee::getClass()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_unsigned_char_cf37ee::getWorld  (binary VA: 0x18a7930)
// Original: BasicArrayImplementation<unsigned char>::getWorld
// ----------------------------------------------------------------------------
int BasicArrayImplementation_unsigned_char_cf37ee::getWorld(BasicArrayImplementation<unsigned char> *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: CstringArrayImplementation::setString  (binary VA: 0x18a7990)
// Original: CstringArrayImplementation::setString
// ----------------------------------------------------------------------------
hkString::Self * CstringArrayImplementation::setString(CstringArrayImplementation::Self *self, int a2, hkString::Self *a3)
{
  hkString::Self **v3;
  hkString::Self *result;

  hkString::strFree(*(hkString::Self **)(*((uint32_t *)self + 3) + 4 * a2));
  v3 = (hkString::Self **)(*((uint32_t *)self + 3) + 4 * a2);
  result = nullptr;
  if ( a3 != nullptr )
    result = hkString::strDup(a3);
  *v3 = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ArrayOfTuplesImplementation::View::getSize  (binary VA: 0x18a79e0)
// Original: ArrayOfTuplesImplementation::View::getSize
// ----------------------------------------------------------------------------
int ArrayOfTuplesImplementation::View::getSize(ArrayOfTuplesImplementation::View::Self *self)
{
  hkTypeManager::Type::Self *v1;

  v1 = (hkTypeManager::Type::Self *)(*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 8))(*((uint32_t *)self + 3));
  return hkTypeManager::Type::getTupleSize(v1);
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::asVec  (binary VA: 0x18a7a10)
// Original: VecArrayImplementation::asVec
// ----------------------------------------------------------------------------
int VecArrayImplementation::asVec(VecArrayImplementation::Self *self, int a2)
{
  return *((uint32_t *)self + 3) + 4 * a2 * hkTypeManager::Type::getTupleSize(*((hkTypeManager::Type::Self **)self + 7));
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::setVec  (binary VA: 0x18a7a50)
// Original: VecArrayImplementation::setVec
// ----------------------------------------------------------------------------
int VecArrayImplementation::setVec(hkTypeManager::Type::Self **self, int a2, const float *a3)
{
  int result;
  unsigned int v4;
  int v5;
  const float *v6;

  result = hkTypeManager::Type::getTupleSize(*(self + 7));
  if ( result > 0 )
  {
    v4 = 4 * result * a2;
    v5 = 4 * (result + result * a2);
    v6 = &a3[v4 / 0xFFFFFFFC];
    do
    {
      result = (int)(uintptr_t)(*(self + 3));
      *(float *)(result + v4) = v6[v4 / 4];
      v4 += 4;
    }
    while ( v4 != v5 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::getSize  (binary VA: 0x18a7ab0)
// Original: VecArrayImplementation::getSize
// ----------------------------------------------------------------------------
int VecArrayImplementation::getSize(VecArrayImplementation::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 4);
  return v1 / hkTypeManager::Type::getTupleSize(*((hkTypeManager::Type::Self **)self + 7));
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::asStridedBasicArray  (binary VA: 0x18a7af0)
// Original: VecArrayImplementation::asStridedBasicArray
// ----------------------------------------------------------------------------
uint32_t * VecArrayImplementation::asStridedBasicArray(uint32_t *a1, int a2, uint32_t *a3)
{
  int v3;
  int TupleSize;

  a3[2] = *(uint32_t *)(a2 + 12);
  v3 = *(uint32_t *)(a2 + 16);
  a3[3] = v3 / hkTypeManager::Type::getTupleSize(*(hkTypeManager::Type::Self **)(a2 + 28));
  TupleSize = hkTypeManager::Type::getTupleSize(*(hkTypeManager::Type::Self **)(a2 + 28));
  *a3 = 11;
  a3[4] = 4 * TupleSize;
  a3[1] = hkTypeManager::Type::getTupleSize(*(hkTypeManager::Type::Self **)(a2 + 28));
  *a1 = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: ArrayOfTuplesImplementation::View::getClass  (binary VA: 0x18a7b70)
// Original: ArrayOfTuplesImplementation::View::getClass
// ----------------------------------------------------------------------------
int ArrayOfTuplesImplementation::View::getClass(ArrayOfTuplesImplementation::View::Self *self)
{
  hkTypeManager::Type::Self *v1;
  int result;
  int (*v3)(uint32_t, int);
  int TypeName;

  v1 = (hkTypeManager::Type::Self *)G4_VCALL<int>(self, 8);
  result = 0;
  if ( *(uint32_t *)v1 == 6 )
  {
    v3 = *(int (**)(uint32_t, int))(**(uint32_t **)(*((uint32_t *)self + 3) + 12) + 44);
    TypeName = hkTypeManager::Type::getTypeName(v1);
    return v3(*(uint32_t *)(*((uint32_t *)self + 3) + 12), TypeName);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ArrayOfTuplesImplementation::getClass  (binary VA: 0x18a7bd0)
// Original: ArrayOfTuplesImplementation::getClass
// ----------------------------------------------------------------------------
int ArrayOfTuplesImplementation::getClass(ArrayOfTuplesImplementation::Self *self)
{
  hkTypeManager::Type::Self *v1;
  int result;
  int (*v3)(uint32_t, int);
  int TypeName;

  v1 = (hkTypeManager::Type::Self *)G4_VCALL<int>(self, 8);
  result = 0;
  if ( *(uint32_t *)v1 == 6 )
  {
    v3 = *(int (**)(uint32_t, int))(**((uint32_t **)self + 3) + 44);
    TypeName = hkTypeManager::Type::getTypeName(v1);
    return v3(*((uint32_t *)self + 3), TypeName);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RealArrayView::setAll  (binary VA: 0x18a7c20)
// Original: RealArrayView::setAll
// ----------------------------------------------------------------------------
void * RealArrayView::setAll(hkString::Self **self, float *a2, int a3)
{
  return hkString::memCpy(*(self + 4), a2, 4 * a3);
}

// ----------------------------------------------------------------------------
// Function: VariableIntArrayImplementation::setAll  (binary VA: 0x18a7c60)
// Original: VariableIntArrayImplementation::setAll
// ----------------------------------------------------------------------------
int VariableIntArrayImplementation::setAll(VariableIntArrayImplementation::Self *self, const uint16_t *a2, int a3)
{
  VariableIntArrayImplementation::Self *v3;
  int v4;
  hkMemoryAllocator::Self *v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef const uint16_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);

  v17[3] = (uint32_t)(uintptr_t)(&self);
  v3 = self;
  v15 = a2;
  v16 = a3;
  if ( *((uint32_t *)self + 4) != 0 )
  {
    v4 = *((uint32_t *)self + 3);
    v11 = *((uint32_t *)self + 10);
    *((uint32_t *)self + 4) = 0;
    v12 = *(uint32_t *)(v4 + 12);
    *((uint32_t *)v3 + 9) = 0;
    if ( v11 >= 0 )
    {
      G4_VCALL<void>(v12, 20, *((uint32_t *)v3 + 8), 8 * v11);
      v4 = *((uint32_t *)v3 + 3);
    }
    *((uint32_t *)v3 + 8) = 0;
    *((uint32_t *)v3 + 10) = 0x80000000;
  }
  else
  {
    v4 = *((uint32_t *)self + 3);
  }
  v5 = *(hkMemoryAllocator::Self **)(v4 + 12);
  v6 = *((uint32_t *)v3 + 7) & 0x3FFFFFFF;
  if ( v16 > v6 )
  {
    v7 = 2 * v6;
    if ( v7 < v16 )
      v7 = v16;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v17, v5, (int *)v3 + 5, v7, 4);
  }
  v8 = *((uint32_t *)v3 + 6);
  if ( v16 - v8 > 0 )
    memset((void *)(*((uint32_t *)v3 + 5) + 4 * v8), 0, 4 * (v16 - v8));
  result = v16;
  v10 = 0;
  *((uint32_t *)v3 + 6) = v16;
  if ( v16 > 0 )
  {
    do
    {
      v13 = v10;
      v14 = v15[v10++];
      result = G4_VCALL<int>(v3, 76, v13, v14);
    }
    while ( v10 != v16 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_unsigned_char_cf37ee::setSize  (binary VA: 0x18a7da0)
// Original: BasicArrayImplementation<unsigned char>::setSize
// ----------------------------------------------------------------------------
void * BasicArrayImplementation_unsigned_char_cf37ee::setSize(BasicArrayImplementation<unsigned char> *self, int a2)
{
  BasicArrayImplementation<unsigned char> *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  void *result;
  uint32_t v8[7];

  v8[3] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = a2;
  v4 = *((uint32_t *)self + 5) & 0x3FFFFFFF;
  if ( a2 > v4 )
  {
    v5 = 2 * v4;
    if ( v5 < a2 )
      v5 = a2;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v8,
      *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 6) + 12),
      (int *)self + 3,
      v5,
      1);
  }
  v6 = *((uint32_t *)v2 + 4);
  result = (void *)(v3 - v6);
  if ( v3 - v6 > 0 )
    result = memset((void *)(*((uint32_t *)v2 + 3) + v6), 0, (size_t)result);
  *((uint32_t *)v2 + 4) = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_char_id_1c265f::setSize  (binary VA: 0x18a7e40)
// Original: BasicArrayImplementation<char *>::setSize
// ----------------------------------------------------------------------------
void * BasicArrayImplementation_char_id_1c265f::setSize(BasicArrayImplementation<char *> *self, int a2)
{
  BasicArrayImplementation<char *> *v2;
  int v3;
  int v4;
  int v5;
  void *result;
  uint32_t v7[7];

  v7[3] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = a2;
  v4 = *((uint32_t *)self + 5) & 0x3FFFFFFF;
  if ( a2 > v4 )
  {
    v5 = 2 * v4;
    if ( v5 < a2 )
      v5 = a2;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v7,
      *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 6) + 12),
      (int *)self + 3,
      v5,
      4);
  }
  result = *((void **)v2 + 4);
  if ( v3 - (int)(uintptr_t)(result) > 0 )
    result = memset((void *)(*((uint32_t *)v2 + 3) + 4 * (uint32_t)(uintptr_t)(result)), 0, 4 * (v3 - (uint32_t)(uintptr_t)(result)));
  *((uint32_t *)v2 + 4) = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataObjectImpl_144f64::setSize  (binary VA: 0x18a7ee0)
// Original: BasicArrayImplementation<hkDataObjectImpl *>::setSize
// ----------------------------------------------------------------------------
void * BasicArrayImplementation_hkDataObjectImpl_144f64::setSize(BasicArrayImplementation<hkDataObjectImpl::Self *> *self, int a2)
{
  BasicArrayImplementation<hkDataObjectImpl::Self *> *v2;
  int v3;
  int v4;
  int v5;
  void *result;
  uint32_t v7[7];

  v7[3] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = a2;
  v4 = *((uint32_t *)self + 5) & 0x3FFFFFFF;
  if ( a2 > v4 )
  {
    v5 = 2 * v4;
    if ( v5 < a2 )
      v5 = a2;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v7,
      *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 6) + 12),
      (int *)self + 3,
      v5,
      4);
  }
  result = *((void **)v2 + 4);
  if ( v3 - (int)(uintptr_t)(result) > 0 )
    result = memset((void *)(*((uint32_t *)v2 + 3) + 4 * (uint32_t)(uintptr_t)(result)), 0, 4 * (v3 - (uint32_t)(uintptr_t)(result)));
  *((uint32_t *)v2 + 4) = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ArrayOfTuplesImplementation::getType  (binary VA: 0x18a7f80)
// Original: ArrayOfTuplesImplementation::getType
// ----------------------------------------------------------------------------
uint32_t * ArrayOfTuplesImplementation::getType(ArrayOfTuplesImplementation::Self *self)
{
  hkTypeManager::Type::Self *v1;
  int v2;
  hkTypeManager::Self *v3;

  v1 = (hkTypeManager::Type::Self *)(*(int (**)(uint32_t))(**((uint32_t **)self + 4) + 8))(*((uint32_t *)self + 4));
  v2 = *((uint32_t *)self + 5);
  v3 = (hkTypeManager::Self *)(*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 52))(*((uint32_t *)self + 3));
  return hkTypeManager::makeTuple(v3, v1, v2);
}

// ----------------------------------------------------------------------------
// Function: VariableIntArrayImplementation::asInt  (binary VA: 0x18a8350)
// Original: VariableIntArrayImplementation::asInt
// ----------------------------------------------------------------------------
int VariableIntArrayImplementation::asInt(VariableIntArrayImplementation::Self *self, int a2)
{
  int v2;

  v2 = *((uint32_t *)self + 4);
  if ( v2 == 0 )
    return *(uint32_t *)(*((uint32_t *)self + 5) + 4 * a2);
  if ( v2 == 1 )
    return *(uint32_t *)(*((uint32_t *)self + 8) + 8 * a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: VariableIntArrayImplementation::asInt64  (binary VA: 0x18a8390)
// Original: VariableIntArrayImplementation::asInt64
// ----------------------------------------------------------------------------
int64_t VariableIntArrayImplementation::asInt64(VariableIntArrayImplementation::Self *self, int a2)
{
  int v2;

  v2 = *((uint32_t *)self + 4);
  if ( v2 == 0 )
    return *(int *)(*((uint32_t *)self + 5) + 4 * a2);
  if ( v2 == 1 )
    return *(uint64_t *)(*((uint32_t *)self + 8) + 8 * a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_18A83D0  (binary VA: 0x18a83d0)
// Original: sub_18A83D0
// ----------------------------------------------------------------------------
uint32_t * sub_18A83D0(uint32_t *a1, int a2, hkString::Self *a3)
{
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v4;
  int v5;
  hkString::Self *v7;

  v4 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a2 + 80);
  v5 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
         (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(a2 + 80),
         a3,
         0);
  if ( v5 != 0 )
  {
    *a1 = v5;
  }
  else
  {
    v7 = hkString::strDup(a3);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v4, v7, (unsigned int)(uintptr_t)(v7));
    *a1 = (uint32_t)(uintptr_t)(v7);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_18A8450  (binary VA: 0x18a8450)
// Original: sub_18A8450
// ----------------------------------------------------------------------------
int sub_18A8450(int a1)
{
  int v1;
  int v2;

  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *(uint16_t *)(a1 + 6) != 0xFFFF )
    v2 = *(uint16_t *)(a1 + 6);
  return G4_VCALL<int>(v1, 12, a1, v2);
}

// ----------------------------------------------------------------------------
// Function: ArrayOfTuplesImplementation::View::Destroy_ea18a84b0  (binary VA: 0x18a84b0)
// Original: ArrayOfTuplesImplementation::View::~View
// ----------------------------------------------------------------------------
void ArrayOfTuplesImplementation::View::Destroy_ea18a84b0(ArrayOfTuplesImplementation::View::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: RealArrayView::Destroy_ea18a8510  (binary VA: 0x18a8510)
// Original: RealArrayView::~RealArrayView
// ----------------------------------------------------------------------------
void RealArrayView::Destroy_ea18a8510(RealArrayView::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::Destroy_ea18a8570  (binary VA: 0x18a8570)
// Original: StructArrayImplementation::Object::~Object
// ----------------------------------------------------------------------------
void StructArrayImplementation::Object::Destroy_ea18a8570(StructArrayImplementation::Object::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::asObject  (binary VA: 0x18a85d0)
// Original: StructArrayImplementation::asObject
// ----------------------------------------------------------------------------
uint32_t * StructArrayImplementation::asObject(StructArrayImplementation::Self *self, int a2)
{
  int address;
  uint32_t *result;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                       *(uint32_t *)(*(uint32_t *)address + 44),
                       20);
  result[1] = -65536;
  result[2] = 0;
  *result = ((uint32_t)(uintptr_t)&off_20A7C68);
  result[3] = (uint32_t)(uintptr_t)(self);
  result[4] = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::asArray  (binary VA: 0x18a8630)
// Original: VecArrayImplementation::asArray
// ----------------------------------------------------------------------------
uint32_t * VecArrayImplementation::asArray(hkTypeManager::Type::Self **self, int a2)
{
  int TupleSize;
  int v3;
  int address;
  uint32_t *result;
  int v6;

  TupleSize = hkTypeManager::Type::getTupleSize(*(self + 7));
  v3 = (int)(uintptr_t)(*(self + 3)) + 4 * TupleSize * a2;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                       *(uint32_t *)(*(uint32_t *)address + 44),
                       24);
  v6 = (int)(uintptr_t)(*(self + 6));
  result[1] = -65536;
  result[2] = 0;
  *result = ((uint32_t)(uintptr_t)&off_20A7668);
  result[3] = v6;
  result[4] = v3;
  result[5] = TupleSize;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ArrayOfTuplesImplementation::asArray  (binary VA: 0x18a86c0)
// Original: ArrayOfTuplesImplementation::asArray
// ----------------------------------------------------------------------------
uint32_t * ArrayOfTuplesImplementation::asArray(ArrayOfTuplesImplementation::Self *self, int a2)
{
  int address;
  uint32_t *result;
  int v4;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                       *(uint32_t *)(*(uint32_t *)address + 44),
                       20);
  v4 = *((uint32_t *)self + 5) * a2;
  result[1] = -65536;
  result[2] = 0;
  *result = ((uint32_t)(uintptr_t)&off_20A7368);
  result[3] = (uint32_t)(uintptr_t)(self);
  result[4] = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: ArrayOfTuplesImplementation::View::swizzleObjectMember  (binary VA: 0x18a8730)
// Original: ArrayOfTuplesImplementation::View::swizzleObjectMember
// ----------------------------------------------------------------------------
uint32_t * ArrayOfTuplesImplementation::View::swizzleObjectMember(ArrayOfTuplesImplementation::View::Self *self, const char *a2)
{
  int v2;
  int address;
  uint32_t *result;
  int v5;

  v2 = (*(int (**)(uint32_t, const char *))(**((uint32_t **)self + 3) + 44))(*((uint32_t *)self + 3), a2);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                       *(uint32_t *)(*(uint32_t *)address + 44),
                       20);
  v5 = *((uint32_t *)self + 4);
  result[1] = -65536;
  result[2] = 0;
  *result = ((uint32_t)(uintptr_t)&off_20A7368);
  result[3] = v2;
  result[4] = v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataObjectImpl_144f64::reserve  (binary VA: 0x18a87b0)
// Original: BasicArrayImplementation<hkDataObjectImpl *>::reserve
// ----------------------------------------------------------------------------
int BasicArrayImplementation_hkDataObjectImpl_144f64::reserve(BasicArrayImplementation<hkDataObjectImpl::Self *> *self, int a2)
{
  int result;
  int v3;
  uint32_t v4[7];

  v4[3] = (uint32_t)(uintptr_t)(&self);
  result = *((uint32_t *)self + 5) & 0x3FFFFFFF;
  if ( a2 > result )
  {
    v3 = 2 * result;
    if ( v3 < a2 )
      v3 = a2;
    return (int)(uintptr_t)hkArrayUtil::reserve(
                  (hkArrayUtil::Self *)v4,
                  *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 6) + 12),
                  (int *)self + 3,
                  v3,
                  4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_char_id_1c265f::reserve  (binary VA: 0x18a8820)
// Original: BasicArrayImplementation<char *>::reserve
// ----------------------------------------------------------------------------
int BasicArrayImplementation_char_id_1c265f::reserve(BasicArrayImplementation<char *> *self, int a2)
{
  int result;
  int v3;
  uint32_t v4[7];

  v4[3] = (uint32_t)(uintptr_t)(&self);
  result = *((uint32_t *)self + 5) & 0x3FFFFFFF;
  if ( a2 > result )
  {
    v3 = 2 * result;
    if ( v3 < a2 )
      v3 = a2;
    return (int)(uintptr_t)hkArrayUtil::reserve(
                  (hkArrayUtil::Self *)v4,
                  *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 6) + 12),
                  (int *)self + 3,
                  v3,
                  4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_unsigned_char_cf37ee::reserve  (binary VA: 0x18a8890)
// Original: BasicArrayImplementation<unsigned char>::reserve
// ----------------------------------------------------------------------------
int BasicArrayImplementation_unsigned_char_cf37ee::reserve(BasicArrayImplementation<unsigned char> *self, int a2)
{
  int result;
  int v3;
  uint32_t v4[7];

  v4[3] = (uint32_t)(uintptr_t)(&self);
  result = *((uint32_t *)self + 5) & 0x3FFFFFFF;
  if ( a2 > result )
  {
    v3 = 2 * result;
    if ( v3 < a2 )
      v3 = a2;
    return (int)(uintptr_t)hkArrayUtil::reserve(
                  (hkArrayUtil::Self *)v4,
                  *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 6) + 12),
                  (int *)self + 3,
                  v3,
                  1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataArrayImpl_e308bd::reserve  (binary VA: 0x18a8900)
// Original: BasicArrayImplementation<hkDataArrayImpl *>::reserve
// ----------------------------------------------------------------------------
int BasicArrayImplementation_hkDataArrayImpl_e308bd::reserve(BasicArrayImplementation<hkDataArrayImpl::Self *> *self, int a2)
{
  int result;
  int v3;
  uint32_t v4[7];

  v4[3] = (uint32_t)(uintptr_t)(&self);
  result = *((uint32_t *)self + 5) & 0x3FFFFFFF;
  if ( a2 > result )
  {
    v3 = 2 * result;
    if ( v3 < a2 )
      v3 = a2;
    return (int)(uintptr_t)hkArrayUtil::reserve(
                  (hkArrayUtil::Self *)v4,
                  *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 6) + 12),
                  (int *)self + 3,
                  v3,
                  4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ByteArrayImplementation::setAll  (binary VA: 0x18a8970)
// Original: ByteArrayImplementation::setAll
// ----------------------------------------------------------------------------
void * ByteArrayImplementation::setAll(ByteArrayImplementation::Self *self, uint8_t *a2, int a3)
{
  ByteArrayImplementation::Self *v3;
  size_t v4;
  uint8_t *v5;
  int v6;
  int v7;
  typedef const uint8_t *_g4_t_v9;
  typedef uint32_t _g4_t_v10[7];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);

  v10[3] = (uint32_t)(uintptr_t)(&self);
  v3 = self;
  v4 = a3;
  v5 = a2;
  v6 = *((uint32_t *)self + 5) & 0x3FFFFFFF;
  if ( a3 > v6 )
  {
    v7 = 2 * v6;
    v9 = a2;
    if ( v7 < a3 )
      v7 = a3;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v10,
      *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 6) + 12),
      (int *)self + 3,
      v7,
      1);
    v5 = (uint8_t *)v9;
  }
  *((uint32_t *)v3 + 4) = v4;
  return hkString::memCpy(*((hkString::Self **)v3 + 3), v5, v4);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_float_id_a635ab::reserve  (binary VA: 0x18a8d50)
// Original: BasicArrayImplementation<float>::reserve
// ----------------------------------------------------------------------------
int BasicArrayImplementation_float_id_a635ab::reserve(BasicArrayImplementation<float> *self, int a2)
{
  int result;
  int v3;
  uint32_t v4[7];

  v4[3] = (uint32_t)(uintptr_t)(&self);
  result = *((uint32_t *)self + 5) & 0x3FFFFFFF;
  if ( a2 > result )
  {
    v3 = 2 * result;
    if ( v3 < a2 )
      v3 = a2;
    return (int)(uintptr_t)hkArrayUtil::reserve(
                  (hkArrayUtil::Self *)v4,
                  *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 6) + 12),
                  (int *)self + 3,
                  v3,
                  4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: VariableIntArrayImplementation::reserve  (binary VA: 0x18a8dc0)
// Original: VariableIntArrayImplementation::reserve
// ----------------------------------------------------------------------------
VariableIntArrayImplementation::Self * VariableIntArrayImplementation::reserve(VariableIntArrayImplementation::Self *self, int a2)
{
  VariableIntArrayImplementation::Self *result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t v8[7];

  v8[3] = (uint32_t)(uintptr_t)(&self);
  result = self;
  v3 = *((uint32_t *)self + 4);
  if ( v3 != 0 )
  {
    if ( v3 == 1 )
    {
      v4 = *((uint32_t *)self + 10) & 0x3FFFFFFF;
      if ( a2 > v4 )
      {
        v5 = 2 * v4;
        if ( v5 < a2 )
          v5 = a2;
        return (VariableIntArrayImplementation::Self *)(hkArrayUtil::reserve(
                 (hkArrayUtil::Self *)v8,
                 *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 3) + 12),
                 (int *)self + 8,
                 v5,
                 8));
      }
    }
  }
  else
  {
    v6 = *((uint32_t *)self + 7) & 0x3FFFFFFF;
    if ( a2 > v6 )
    {
      v7 = 2 * v6;
      if ( v7 < a2 )
        v7 = a2;
      return (VariableIntArrayImplementation::Self *)(hkArrayUtil::reserve(
               (hkArrayUtil::Self *)v8,
               *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 3) + 12),
               (int *)self + 5,
               v7,
               4));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::reserve  (binary VA: 0x18a8e70)
// Original: VecArrayImplementation::reserve
// ----------------------------------------------------------------------------
int VecArrayImplementation::reserve(hkTypeManager::Type::Self **self, int a2)
{
  int *v2;
  int v3;
  int result;
  int v5;
  int v6;
  uint32_t v7[7];

  v7[3] = (uint32_t)(uintptr_t)(&self);
  v2 = (int *)self;
  v3 = a2;
  result = v3 * hkTypeManager::Type::getTupleSize(*(self + 7));
  v5 = v2[5] & 0x3FFFFFFF;
  if ( result > v5 )
  {
    v6 = 2 * v5;
    if ( result >= v6 )
      v6 = result;
    return (int)(uintptr_t)(hkArrayUtil::reserve((hkArrayUtil::Self *)v7, *(hkMemoryAllocator::Self **)(v2[6] + 12), v2 + 3, v6, 4));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: RealArrayImplementation::setAll  (binary VA: 0x18a8ef0)
// Original: RealArrayImplementation::setAll
// ----------------------------------------------------------------------------
void * RealArrayImplementation::setAll(RealArrayImplementation::Self *self, float *a2, int a3)
{
  RealArrayImplementation::Self *v3;
  int v4;
  float *v5;
  int v6;
  int v7;
  typedef const float *_g4_t_v9;
  typedef uint32_t _g4_t_v10[7];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);

  v10[3] = (uint32_t)(uintptr_t)(&self);
  v3 = self;
  v4 = a3;
  v5 = a2;
  v6 = *((uint32_t *)self + 5) & 0x3FFFFFFF;
  if ( a3 > v6 )
  {
    v7 = 2 * v6;
    v9 = a2;
    if ( v7 < a3 )
      v7 = a3;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v10,
      *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 6) + 12),
      (int *)self + 3,
      v7,
      4);
    v5 = (float *)v9;
  }
  *((uint32_t *)v3 + 4) = v4;
  return hkString::memCpy(*((hkString::Self **)v3 + 3), v5, 4 * v4);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataArrayImpl_e308bd::setSize  (binary VA: 0x18a8f90)
// Original: BasicArrayImplementation<hkDataArrayImpl *>::setSize
// ----------------------------------------------------------------------------
void * BasicArrayImplementation_hkDataArrayImpl_e308bd::setSize(BasicArrayImplementation<hkDataArrayImpl::Self *> *self, int a2)
{
  BasicArrayImplementation<hkDataArrayImpl::Self *> *v2;
  int v3;
  int v4;
  int v5;
  void *result;
  uint32_t v7[7];

  v7[3] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = a2;
  v4 = *((uint32_t *)self + 5) & 0x3FFFFFFF;
  if ( a2 > v4 )
  {
    v5 = 2 * v4;
    if ( v5 < a2 )
      v5 = a2;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v7,
      *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 6) + 12),
      (int *)self + 3,
      v5,
      4);
  }
  result = *((void **)v2 + 4);
  if ( v3 - (int)(uintptr_t)(result) > 0 )
    result = memset((void *)(*((uint32_t *)v2 + 3) + 4 * (uint32_t)(uintptr_t)(result)), 0, 4 * (v3 - (uint32_t)(uintptr_t)(result)));
  *((uint32_t *)v2 + 4) = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_float_id_a635ab::setSize  (binary VA: 0x18a9030)
// Original: BasicArrayImplementation<float>::setSize
// ----------------------------------------------------------------------------
void * BasicArrayImplementation_float_id_a635ab::setSize(BasicArrayImplementation<float> *self, int a2)
{
  BasicArrayImplementation<float> *v2;
  int v3;
  int v4;
  int v5;
  void *result;
  uint32_t v7[7];

  v7[3] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = a2;
  v4 = *((uint32_t *)self + 5) & 0x3FFFFFFF;
  if ( a2 > v4 )
  {
    v5 = 2 * v4;
    if ( v5 < a2 )
      v5 = a2;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v7,
      *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 6) + 12),
      (int *)self + 3,
      v5,
      4);
  }
  result = *((void **)v2 + 4);
  if ( v3 - (int)(uintptr_t)(result) > 0 )
    result = memset((void *)(*((uint32_t *)v2 + 3) + 4 * (uint32_t)(uintptr_t)(result)), 0, 4 * (v3 - (uint32_t)(uintptr_t)(result)));
  *((uint32_t *)v2 + 4) = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::setSize  (binary VA: 0x18a90d0)
// Original: VecArrayImplementation::setSize
// ----------------------------------------------------------------------------
int VecArrayImplementation::setSize(hkTypeManager::Type::Self **self, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  uint32_t v8[7];

  v8[3] = (uint32_t)(uintptr_t)(&self);
  v2 = (int *)self;
  v3 = a2;
  v4 = hkTypeManager::Type::getTupleSize(*(self + 7)) * v3;
  v5 = v2[5] & 0x3FFFFFFF;
  if ( v4 > v5 )
  {
    v6 = 2 * v5;
    if ( v4 >= v6 )
      v6 = v4;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v8, *(hkMemoryAllocator::Self **)(v2[6] + 12), v2 + 3, v6, 4);
  }
  result = v2[4];
  if ( v4 - result > 0 )
    result = (int)(uintptr_t)(memset((void *)(v2[3] + 4 * result), 0, 4 * (v4 - result)));
  v2[4] = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::setAll  (binary VA: 0x18a9180)
// Original: VecArrayImplementation::setAll
// ----------------------------------------------------------------------------
void * VecArrayImplementation::setAll(hkTypeManager::Type::Self **self, float *a2, int a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  hkString::Self *v9;
  typedef float *_g4_t_v11;
  typedef uint32_t _g4_t_v12[7];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);

  v12[3] = (uint32_t)(uintptr_t)(&self);
  v3 = (int *)self;
  v4 = a3;
  v11 = a2;
  v5 = hkTypeManager::Type::getTupleSize(*(self + 7)) * v4;
  v6 = v3[5] & 0x3FFFFFFF;
  if ( v5 > v6 )
  {
    v7 = 2 * v6;
    if ( v5 >= v7 )
      v7 = v5;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v12, *(hkMemoryAllocator::Self **)(v3[6] + 12), v3 + 3, v7, 4);
  }
  v8 = v3[4];
  v9 = (hkString::Self *)v3[3];
  if ( v5 - v8 > 0 )
  {
    memset((char *)v9 + 4 * v8, 0, 4 * (v5 - v8));
    v9 = (hkString::Self *)v3[3];
  }
  v3[4] = v5;
  return hkString::memCpy(v9, v11, 4 * v5);
}

// ----------------------------------------------------------------------------
// Function: VecArrayImplementation::Destroy_ea18a9250  (binary VA: 0x18a9250)
// Original: VecArrayImplementation::~VecArrayImplementation
// ----------------------------------------------------------------------------
void VecArrayImplementation::Destroy_ea18a9250(VecArrayImplementation::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7728);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), 4 * v2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: ByteArrayImplementation::Destroy  (binary VA: 0x18a9300)
// Original: ByteArrayImplementation::~ByteArrayImplementation
// ----------------------------------------------------------------------------
void ByteArrayImplementation::Destroy(ByteArrayImplementation::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A71E8);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), v2 & 0x3FFFFFFF);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: RealArrayImplementation::Destroy  (binary VA: 0x18a9370)
// Original: RealArrayImplementation::~RealArrayImplementation
// ----------------------------------------------------------------------------
void RealArrayImplementation::Destroy(RealArrayImplementation::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A74E8);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), 4 * v2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataObjectImpl_144f64::Destroy_ea18a93e0  (binary VA: 0x18a93e0)
// Original: BasicArrayImplementation<hkDataObjectImpl *>::~BasicArrayImplementation
// ----------------------------------------------------------------------------
void BasicArrayImplementation_hkDataObjectImpl_144f64::Destroy_ea18a93e0(BasicArrayImplementation<hkDataObjectImpl::Self *> *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A77E8);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), 4 * v2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_char_id_1c265f::Destroy_ea18a9490  (binary VA: 0x18a9490)
// Original: BasicArrayImplementation<char *>::~BasicArrayImplementation
// ----------------------------------------------------------------------------
void BasicArrayImplementation_char_id_1c265f::Destroy_ea18a9490(BasicArrayImplementation<char *> *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7968);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), 4 * v2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_unsigned_char_cf37ee::Destroy_ea18a9540  (binary VA: 0x18a9540)
// Original: BasicArrayImplementation<unsigned char>::~BasicArrayImplementation
// ----------------------------------------------------------------------------
void BasicArrayImplementation_unsigned_char_cf37ee::Destroy_ea18a9540(BasicArrayImplementation<unsigned char> *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A71E8);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), v2 & 0x3FFFFFFF);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: ByteArrayImplementation::Destroy_ea18a95f0  (binary VA: 0x18a95f0)
// Original: ByteArrayImplementation::~ByteArrayImplementation
// ----------------------------------------------------------------------------
void ByteArrayImplementation::Destroy_ea18a95f0(ByteArrayImplementation::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A71E8);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), v2 & 0x3FFFFFFF);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: VariableIntArrayImplementation::setAll  (binary VA: 0x18a96a0)
// Original: VariableIntArrayImplementation::setAll
// ----------------------------------------------------------------------------
void * VariableIntArrayImplementation::setAll(VariableIntArrayImplementation::Self *self, int *a2, int a3)
{
  VariableIntArrayImplementation::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  hkMemoryAllocator::Self *v8;
  int v9;
  int v10;
  int v11;
  hkString::Self *v12;
  typedef int *_g4_t_v14;
  typedef uint32_t _g4_t_v15[7];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);

  v15[3] = (uint32_t)(uintptr_t)(&self);
  v3 = self;
  v4 = a3;
  v14 = a2;
  if ( *((uint32_t *)self + 4) != 0 )
  {
    v5 = *((uint32_t *)self + 3);
    v6 = *((uint32_t *)self + 10);
    *((uint32_t *)self + 4) = 0;
    v7 = *(uint32_t *)(v5 + 12);
    *((uint32_t *)v3 + 9) = 0;
    if ( v6 >= 0 )
    {
      G4_VCALL<void>(v7, 20, *((uint32_t *)v3 + 8), 8 * v6);
      v5 = *((uint32_t *)v3 + 3);
    }
    *((uint32_t *)v3 + 8) = 0;
    *((uint32_t *)v3 + 10) = 0x80000000;
  }
  else
  {
    v5 = *((uint32_t *)self + 3);
  }
  v8 = *(hkMemoryAllocator::Self **)(v5 + 12);
  v9 = *((uint32_t *)v3 + 7) & 0x3FFFFFFF;
  if ( v4 > v9 )
  {
    v10 = 2 * v9;
    if ( v10 < v4 )
      v10 = v4;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v15, v8, (int *)v3 + 5, v10, 4);
  }
  v11 = *((uint32_t *)v3 + 6);
  v12 = *((hkString::Self **)v3 + 5);
  if ( v4 - v11 > 0 )
  {
    memset((char *)v12 + 4 * v11, 0, 4 * (v4 - v11));
    v12 = *((hkString::Self **)v3 + 5);
  }
  *((uint32_t *)v3 + 6) = v4;
  return hkString::memCpy(v12, v14, 4 * v4);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_float_id_a635ab::Destroy_ea18a97b0  (binary VA: 0x18a97b0)
// Original: BasicArrayImplementation<float>::~BasicArrayImplementation
// ----------------------------------------------------------------------------
void BasicArrayImplementation_float_id_a635ab::Destroy_ea18a97b0(BasicArrayImplementation<float> *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A74E8);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), 4 * v2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: BasicArrayImplementation_hkDataArrayImpl_e308bd::Destroy_ea18a9860  (binary VA: 0x18a9860)
// Original: BasicArrayImplementation<hkDataArrayImpl *>::~BasicArrayImplementation
// ----------------------------------------------------------------------------
void BasicArrayImplementation_hkDataArrayImpl_e308bd::Destroy_ea18a9860(BasicArrayImplementation<hkDataArrayImpl::Self *> *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7AE8);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), 4 * v2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: RealArrayImplementation::Destroy_ea18a9910  (binary VA: 0x18a9910)
// Original: RealArrayImplementation::~RealArrayImplementation
// ----------------------------------------------------------------------------
void RealArrayImplementation::Destroy_ea18a9910(RealArrayImplementation::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A74E8);
  v1 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v2 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v2 >= 0 )
    G4_VCALL<void>(v1, 20, *((uint32_t *)self + 3), 4 * v2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: ArrayArrayImplementation::clear  (binary VA: 0x18a99c0)
// Original: ArrayArrayImplementation::clear
// ----------------------------------------------------------------------------
void ArrayArrayImplementation::clear(ArrayArrayImplementation::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;

  v1 = 0;
  v2 = *((uint32_t *)self + 4);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t **)(*((uint32_t *)self + 3) + 4 * v1);
      if ( v3 != nullptr )
      {
        if ( v3[2]-- == 1 )
          G4_VCALL<void>(v3, 4);
        v2 = *((uint32_t *)self + 4);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
}

// ----------------------------------------------------------------------------
// Function: PointerArrayImplementation::setObject  (binary VA: 0x18a9a20)
// Original: PointerArrayImplementation::setObject
// ----------------------------------------------------------------------------
uint32_t * PointerArrayImplementation::setObject(PointerArrayImplementation::Self *self, int a2, hkDataObjectImpl::Self *a3)
{
  uint32_t **v3;
  uint32_t *result;

  if ( a3 != nullptr )
    ++*((uint32_t *)a3 + 2);
  v3 = (uint32_t **)(*((uint32_t *)self + 3) + 4 * a2);
  result = *v3;
  if ( *v3 != nullptr )
  {
    if ( result[2]-- == 1 )
      result = (uint32_t *)G4_VCALL<int>(result, 4);
    v3 = (uint32_t **)(*((uint32_t *)self + 3) + 4 * a2);
  }
  *v3 = (uint32_t *)(a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: ArrayArrayImplementation::setArray  (binary VA: 0x18a9a80)
// Original: ArrayArrayImplementation::setArray
// ----------------------------------------------------------------------------
uint32_t * ArrayArrayImplementation::setArray(ArrayArrayImplementation::Self *self, int a2, hkDataArrayImpl::Self *a3)
{
  uint32_t **v3;
  uint32_t *result;

  if ( a3 != nullptr )
    ++*((uint32_t *)a3 + 2);
  v3 = (uint32_t **)(*((uint32_t *)self + 3) + 4 * a2);
  result = *v3;
  if ( *v3 != nullptr )
  {
    if ( result[2]-- == 1 )
      result = (uint32_t *)G4_VCALL<int>(result, 4);
    v3 = (uint32_t **)(*((uint32_t *)self + 3) + 4 * a2);
  }
  *v3 = (uint32_t *)(a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: VariableIntArrayImplementation::Destroy  (binary VA: 0x18a9ae0)
// Original: VariableIntArrayImplementation::~VariableIntArrayImplementation
// ----------------------------------------------------------------------------
void VariableIntArrayImplementation::Destroy(VariableIntArrayImplementation::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7128);
  v1 = *((uint32_t *)self + 3);
  v2 = *((uint32_t *)self + 7);
  v3 = *(uint32_t *)(v1 + 12);
  *((uint32_t *)self + 6) = 0;
  if ( v2 >= 0 )
  {
    G4_VCALL<void>(v3, 20, *((uint32_t *)self + 5), 4 * v2);
    v1 = *((uint32_t *)self + 3);
  }
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  v4 = *(uint32_t *)(v1 + 12);
  v5 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 9) = 0;
  if ( v5 >= 0 )
    G4_VCALL<void>(v4, 20, *((uint32_t *)self + 8), 8 * v5);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v6 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v7 = 48;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v7 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v6, 12, self, v7);
}

// ----------------------------------------------------------------------------
// Function: ArrayOfTuplesImplementation::Destroy  (binary VA: 0x18a9bc0)
// Original: ArrayOfTuplesImplementation::~ArrayOfTuplesImplementation
// ----------------------------------------------------------------------------
void ArrayOfTuplesImplementation::Destroy(ArrayOfTuplesImplementation::Self *self)
{
  uint32_t *v1;
  bool v2;
  uint32_t *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7428);
  v1 = *((uint32_t **)self + 4);
  if ( v1 != nullptr )
  {
    v2 = v1[2]-- == 1;
    if ( v2 )
      G4_VCALL<void>(v1, 4);
  }
  v3 = *((uint32_t **)self + 6);
  if ( v3 != nullptr )
  {
    v2 = v3[2]-- == 1;
    if ( v2 )
      G4_VCALL<void>(v3, 4);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: VariableIntArrayImplementation::setSize  (binary VA: 0x18a9c30)
// Original: VariableIntArrayImplementation::setSize
// ----------------------------------------------------------------------------
void * VariableIntArrayImplementation::setSize(VariableIntArrayImplementation::Self *self, int a2)
{
  VariableIntArrayImplementation::Self *v2;
  int v3;
  void *result;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t v9[7];

  v9[3] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = a2;
  result = *((void **)self + 4);
  if ( result != nullptr )
  {
    if ( result == (char *)&dword_0 + 1 )
    {
      v5 = *((uint32_t *)self + 10) & 0x3FFFFFFF;
      if ( a2 > v5 )
      {
        v8 = 2 * v5;
        if ( v8 < a2 )
          v8 = a2;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v9,
          *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 3) + 12),
          (int *)self + 8,
          v8,
          8);
      }
      result = *((void **)v2 + 9);
      if ( v3 - (int)(uintptr_t)(result) > 0 )
        result = memset((void *)(*((uint32_t *)v2 + 8) + 8 * (uint32_t)(uintptr_t)(result)), 0, 8 * (v3 - (uint32_t)(uintptr_t)(result)));
      *((uint32_t *)v2 + 9) = v3;
    }
  }
  else
  {
    v6 = *((uint32_t *)self + 7) & 0x3FFFFFFF;
    if ( a2 > v6 )
    {
      v7 = 2 * v6;
      if ( v7 < a2 )
        v7 = a2;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v9,
        *(hkMemoryAllocator::Self **)(*((uint32_t *)self + 3) + 12),
        (int *)self + 5,
        v7,
        4);
    }
    result = *((void **)v2 + 6);
    if ( v3 - (int)(uintptr_t)(result) > 0 )
      result = memset((void *)(*((uint32_t *)v2 + 5) + 4 * (uint32_t)(uintptr_t)(result)), 0, 4 * (v3 - (uint32_t)(uintptr_t)(result)));
    *((uint32_t *)v2 + 6) = v3;
  }
  if ( v3 == 0 )
    *((uint8_t *)v2 + 44) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: PointerArrayImplementation::Destroy  (binary VA: 0x18a9d70)
// Original: PointerArrayImplementation::~PointerArrayImplementation
// ----------------------------------------------------------------------------
void PointerArrayImplementation::Destroy(PointerArrayImplementation::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v5;
  int v6;

  v1 = 0;
  v2 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A78A8);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t **)(*((uint32_t *)self + 3) + 4 * v1);
      if ( v3 != nullptr )
      {
        if ( v3[2]-- == 1 )
          G4_VCALL<void>(v3, 4);
        v2 = *((uint32_t *)self + 4);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A77E8);
  v5 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v6 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v6 >= 0 )
    G4_VCALL<void>(v5, 20, *((uint32_t *)self + 3), 4 * v6);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: ArrayArrayImplementation::setSize  (binary VA: 0x18a9e30)
// Original: ArrayArrayImplementation::setSize
// ----------------------------------------------------------------------------
int ArrayArrayImplementation::setSize(ArrayArrayImplementation::Self *self, int a2)
{
  int *v2;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v8;
  int v9;
  typedef int *_g4_t_v11;
  typedef int *_g4_t_v12;
  typedef int *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v12)) > _g4_s1 ? (0u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v13)) > _g4_s2 ? (0u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v14)) > _g4_s3 ? (4u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v15)) > _g4_s4 ? (8u + sizeof(_g4_t_v15)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);

  v15[3] = (uint32_t)(uintptr_t)(&self);
  v2 = (int *)self;
  v14 = a2;
  v3 = *((uint32_t *)self + 4);
  if ( v3 > a2 )
  {
    v4 = 4 * a2;
    v5 = a2;
    do
    {
      v6 = *(uint32_t **)(v2[3] + v4);
      if ( v6 != nullptr )
      {
        if ( v6[2]-- == 1 )
        {
          v11 = v2;
          G4_VCALL<void>(v6, 4);
          v2 = v11;
        }
        v3 = v2[4];
      }
      ++v5;
      v4 += 4;
    }
    while ( v5 < v3 );
  }
  v8 = v2[5] & 0x3FFFFFFF;
  if ( v14 > v8 )
  {
    v9 = 2 * v8;
    if ( v9 < v14 )
      v9 = v14;
    v12 = v2;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v15, *(hkMemoryAllocator::Self **)(v2[6] + 12), v2 + 3, v9, 4);
    v2 = v12;
    v3 = v12[4];
  }
  if ( v14 - v3 > 0 )
  {
    v13 = v2;
    memset((void *)(v2[3] + 4 * v3), 0, 4 * (v14 - v3));
    v2 = v13;
  }
  v2[4] = v14;
  return v14;
}

// ----------------------------------------------------------------------------
// Function: CstringArrayImplementation::Destroy  (binary VA: 0x18a9f30)
// Original: CstringArrayImplementation::~CstringArrayImplementation
// ----------------------------------------------------------------------------
void CstringArrayImplementation::Destroy(CstringArrayImplementation::Self *self)
{
  int v1;
  hkString::Self *v2;
  int v3;
  int v4;

  v1 = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7A28);
  while ( *((uint32_t *)self + 4) > v1 )
  {
    v2 = *(hkString::Self **)(*((uint32_t *)self + 3) + 4 * v1++);
    hkString::strFree(v2);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7968);
  v3 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v4 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v4 >= 0 )
    G4_VCALL<void>(v3, 20, *((uint32_t *)self + 3), 4 * v4);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: sub_18A9FD0  (binary VA: 0x18a9fd0)
// Original: sub_18A9FD0
// ----------------------------------------------------------------------------
int * sub_18A9FD0(int *a1, int a2, hkString::Self *a3)
{
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v3;
  int v4;
  hkString::Self *v6;

  if ( a3 != nullptr )
  {
    v3 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 12) + 24) + 12)
                                                                                        + 8)
                                                                            + 80);
    v4 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v3, a3, 0);
    if ( v4 == 0 )
    {
      v6 = hkString::strDup(a3);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v3, v6, (unsigned int)(uintptr_t)(v6));
      v4 = (int)(uintptr_t)(v6);
    }
    *a1 = v4;
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: PointerArrayImplementation::Destroy_ea18aa070  (binary VA: 0x18aa070)
// Original: PointerArrayImplementation::~PointerArrayImplementation
// ----------------------------------------------------------------------------
void PointerArrayImplementation::Destroy_ea18aa070(PointerArrayImplementation::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = 0;
  v2 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A78A8);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t **)(*((uint32_t *)self + 3) + 4 * v1);
      if ( v3 != nullptr )
      {
        if ( v3[2]-- == 1 )
          G4_VCALL<void>(v3, 4);
        v2 = *((uint32_t *)self + 4);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A77E8);
  v5 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v6 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v6 >= 0 )
    G4_VCALL<void>(v5, 20, *((uint32_t *)self + 3), 4 * v6);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v7 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v8 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v8 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v7, 12, self, v8);
}

// ----------------------------------------------------------------------------
// Function: CstringArrayImplementation::Destroy_ea18aa160  (binary VA: 0x18aa160)
// Original: CstringArrayImplementation::~CstringArrayImplementation
// ----------------------------------------------------------------------------
void CstringArrayImplementation::Destroy_ea18aa160(CstringArrayImplementation::Self *self)
{
  int v1;
  int v2;
  hkString::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;

  v1 = 0;
  v2 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7A28);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(hkString::Self **)(*((uint32_t *)self + 3) + 4 * v1++);
      hkString::strFree(v3);
    }
    while ( v1 < *((uint32_t *)self + 4) );
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7968);
  v4 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v5 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v5 >= 0 )
    G4_VCALL<void>(v4, 20, *((uint32_t *)self + 3), 4 * v5);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v6 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v7 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v7 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v6, 12, self, v7);
}

// ----------------------------------------------------------------------------
// Function: ArrayOfTuplesImplementation::swizzleObjectMember  (binary VA: 0x18aa240)
// Original: ArrayOfTuplesImplementation::swizzleObjectMember
// ----------------------------------------------------------------------------
int ArrayOfTuplesImplementation::swizzleObjectMember(ArrayOfTuplesImplementation::Self *self, const char *a2)
{
  int v2;
  int v3;
  uint32_t *v4;
  int address;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;

  if ( *((uint32_t *)self + 6) == 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v8 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)address + 44),
                     28);
    v9 = *((uint32_t *)self + 5);
    v10 = *((uint32_t *)self + 3);
    v8[2] = 0;
    v8[1] = -65536;
    *v8 = ((uint32_t)(uintptr_t)&off_20A7428);
    v8[3] = v10;
    v8[4] = 0;
    v8[5] = v9;
    v8[6] = 0;
    *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v8);
    ++v8[2];
  }
  v2 = (*(int (**)(uint32_t, const char *))(**((uint32_t **)self + 4) + 44))(*((uint32_t *)self + 4), a2);
  v3 = *((uint32_t *)self + 6);
  if ( v2 != 0 )
    ++*(uint32_t *)(v2 + 8);
  v4 = *(uint32_t **)(v3 + 16);
  if ( v4 != nullptr && v4[2]-- == 1 )
  {
    v11 = v2;
    G4_VCALL<void>(v4, 4);
    v2 = v11;
  }
  *(uint32_t *)(v3 + 16) = v2;
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: ArrayArrayImplementation::Destroy  (binary VA: 0x18aa310)
// Original: ArrayArrayImplementation::~ArrayArrayImplementation
// ----------------------------------------------------------------------------
void ArrayArrayImplementation::Destroy(ArrayArrayImplementation::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v5;
  int v6;

  v1 = 0;
  v2 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7BA8);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t **)(*((uint32_t *)self + 3) + 4 * v1);
      if ( v3 != nullptr )
      {
        if ( v3[2]-- == 1 )
          G4_VCALL<void>(v3, 4);
        v2 = *((uint32_t *)self + 4);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7AE8);
  v5 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v6 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v6 >= 0 )
    G4_VCALL<void>(v5, 20, *((uint32_t *)self + 3), 4 * v6);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: VariableIntArrayImplementation::setAll  (binary VA: 0x18aa3d0)
// Original: VariableIntArrayImplementation::setAll
// ----------------------------------------------------------------------------
int VariableIntArrayImplementation::setAll(VariableIntArrayImplementation::Self *self, const int16_t *a2, int a3)
{
  VariableIntArrayImplementation::Self *v3;
  int v4;
  hkMemoryAllocator::Self *v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef const int16_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);

  v17[3] = (uint32_t)(uintptr_t)(&self);
  v3 = self;
  v15 = a2;
  v16 = a3;
  if ( *((uint32_t *)self + 4) != 0 )
  {
    v4 = *((uint32_t *)self + 3);
    v11 = *((uint32_t *)self + 10);
    *((uint32_t *)self + 4) = 0;
    v12 = *(uint32_t *)(v4 + 12);
    *((uint32_t *)v3 + 9) = 0;
    if ( v11 >= 0 )
    {
      G4_VCALL<void>(v12, 20, *((uint32_t *)v3 + 8), 8 * v11);
      v4 = *((uint32_t *)v3 + 3);
    }
    *((uint32_t *)v3 + 8) = 0;
    *((uint32_t *)v3 + 10) = 0x80000000;
  }
  else
  {
    v4 = *((uint32_t *)self + 3);
  }
  v5 = *(hkMemoryAllocator::Self **)(v4 + 12);
  v6 = *((uint32_t *)v3 + 7) & 0x3FFFFFFF;
  if ( v16 > v6 )
  {
    v7 = 2 * v6;
    if ( v7 < v16 )
      v7 = v16;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v17, v5, (int *)v3 + 5, v7, 4);
  }
  v8 = *((uint32_t *)v3 + 6);
  if ( v16 - v8 > 0 )
    memset((void *)(*((uint32_t *)v3 + 5) + 4 * v8), 0, 4 * (v16 - v8));
  result = v16;
  v10 = 0;
  *((uint32_t *)v3 + 6) = v16;
  if ( v16 > 0 )
  {
    do
    {
      v13 = v10;
      v14 = v15[v10++];
      result = G4_VCALL<int>(v3, 76, v13, v14);
    }
    while ( v10 != v16 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18AA510  (binary VA: 0x18aa510)
// Original: sub_18AA510
// ----------------------------------------------------------------------------
uint32_t * sub_18AA510(uint32_t *result, hkString::Self *a2, hkMemoryAllocator::Self *a3)
{
  uint32_t *v3;
  unsigned int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  unsigned int v12;
  signed int v13;
  int v14;
  int j;
  int v16;
  int v17;
  unsigned int i;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  uint32_t *v24;

  if ( a2 != nullptr )
  {
    v3 = result;
    result = (uint32_t *)hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                         (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(result + 1),
                         a2,
                         0);
    v22 = (unsigned int)(uintptr_t)(result);
    if ( result != nullptr )
    {
      v4 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
             (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v3 + 16),
             (unsigned int)(uintptr_t)(result),
             0xFFFFFFFF);
      if ( v4 != -1 )
      {
        v5 = v3[13];
        v6 = *((uint32_t *)a3 + 1);
        do
        {
          v7 = v4;
          v8 = *(uint32_t *)(v5 + 8 * v4);
          v9 = 8 * v7;
          if ( (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) == v6 )
          {
            v20 = v8;
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, a3, 4, v19);
            v6 = *((uint32_t *)a3 + 1);
            v8 = v20;
          }
          *(uint32_t *)(*(uint32_t *)a3 + 4 * v6) = v8;
          v6 = *((uint32_t *)a3 + 1) + 1;
          *((uint32_t *)a3 + 1) = v6;
          v5 = v3[13];
          v4 = *(uint32_t *)(v5 + v9 + 4);
        }
        while ( v4 != -1 );
      }
      result = (uint32_t *)hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                           (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v3 + 28),
                           v22,
                           0);
      v24 = result;
      if ( result != nullptr && (result[1] & 0x7FFFFFFF) != 0 )
      {
        v10 = result;
        result = (uint32_t *)*result;
        v11 = v10[2];
        if ( v11 >= 0 )
        {
          v12 = 0;
          if ( *result == -1 )
          {
            while ( v11 >= (int)++v12 )
            {
              if ( result[2 * v12] != -1 )
                goto LABEL_21;
            }
          }
          else
          {
            for ( i = 0; ; i = v12 )
            {
              v14 = result[2 * i];
              v23 = v12;
              for ( j = 0; j < G4_VCALL<int>(v14, 24); ++j )
              {
                v16 = G4_VCALL<int>(v14, 88, j);
                v17 = *((uint32_t *)a3 + 1);
                if ( v17 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
                {
                  v21 = v16;
                  hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, a3, 4, v19);
                  v17 = *((uint32_t *)a3 + 1);
                  v16 = v21;
                }
                *(uint32_t *)(*(uint32_t *)a3 + 4 * v17) = v16;
                ++*((uint32_t *)a3 + 1);
              }
              v13 = v24[2];
              v12 = v23 + 1;
              result = (uint32_t *)*v24;
              if ( v13 < (int)(v23 + 1) )
                break;
              while ( result[2 * v12] == -1 )
              {
                if ( v13 < (int)++v12 )
                  return result;
              }
LABEL_21:
              ;
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: ArrayArrayImplementation::Destroy_ea18aa930  (binary VA: 0x18aa930)
// Original: ArrayArrayImplementation::~ArrayArrayImplementation
// ----------------------------------------------------------------------------
void ArrayArrayImplementation::Destroy_ea18aa930(ArrayArrayImplementation::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  int v5;
  int v6;
  int v7;
  int v8;

  v1 = 0;
  v2 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7BA8);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t **)(*((uint32_t *)self + 3) + 4 * v1);
      if ( v3 != nullptr )
      {
        if ( v3[2]-- == 1 )
          G4_VCALL<void>(v3, 4);
        v2 = *((uint32_t *)self + 4);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7AE8);
  v5 = *(uint32_t *)(*((uint32_t *)self + 6) + 12);
  v6 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v6 >= 0 )
    G4_VCALL<void>(v5, 20, *((uint32_t *)self + 3), 4 * v6);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v7 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v8 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v8 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v7, 12, self, v8);
}

// ----------------------------------------------------------------------------
// Function: ArrayOfTuplesImplementation::Destroy_ea18aaa20  (binary VA: 0x18aaa20)
// Original: ArrayOfTuplesImplementation::~ArrayOfTuplesImplementation
// ----------------------------------------------------------------------------
void ArrayOfTuplesImplementation::Destroy_ea18aaa20(ArrayOfTuplesImplementation::Self *self)
{
  uint32_t *v1;
  bool v2;
  uint32_t *v3;
  int v4;
  int v5;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7428);
  v1 = *((uint32_t **)self + 4);
  if ( v1 != nullptr )
  {
    v2 = v1[2]-- == 1;
    if ( v2 )
      G4_VCALL<void>(v1, 4);
  }
  v3 = *((uint32_t **)self + 6);
  if ( v3 != nullptr )
  {
    v2 = v3[2]-- == 1;
    if ( v2 )
      G4_VCALL<void>(v3, 4);
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v4 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v5 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v5 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v4, 12, self, v5);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Destroy  (binary VA: 0x18aabb0)
// Original: StructArrayImplementation::~StructArrayImplementation
// ----------------------------------------------------------------------------
void StructArrayImplementation::Destroy(StructArrayImplementation::Self *self)
{
  int v1;
  uint32_t *v2;
  bool v3;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t v10[7];

  v1 = 0;
  for ( *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7D08); v1 < *((uint32_t *)self + 4); ++v1 )
  {
    v2 = *(uint32_t **)(*((uint32_t *)self + 3) + 8 * v1 + 4);
    v3 = v2[2]-- == 1;
    if ( v3 )
      G4_VCALL<void>(v2, 4);
  }
  v4 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                                                                                    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(*(uint32_t *)(*((uint32_t *)self + 9) + 8) + 112),
                                                                                    *((uint32_t *)self + 6),
                                                                                    0);
  hkMapBase_unsigned_long_unsigned_l_393416::remove(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v10,
    v4,
    (unsigned int)(uintptr_t)(self));
  v5 = *(uint32_t *)(*((uint32_t *)self + 9) + 12);
  v6 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v6 >= 0 )
    G4_VCALL<void>(v5, 20, *((uint32_t *)self + 3), 8 * v6);
  v7 = *((uint32_t **)self + 6);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  if ( v7 != nullptr )
  {
    v3 = v7[2]-- == 1;
    if ( v3 )
      G4_VCALL<void>(v7, 4);
  }
  *((uint32_t *)self + 6) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
  v8 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v9 = 40;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v9 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v8, 12, self, v9, v10[0], v10[1], v10[2], v10[3]);
}

// ----------------------------------------------------------------------------
// Function: sub_18AACF0  (binary VA: 0x18aacf0)
// Original: sub_18AACF0
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * sub_18AACF0(hkMemoryAllocator::Self **a1, hkString::Self **a2, hkMemoryAllocator::Self *a3)
{
  hkMemoryAllocator::Self *result;
  bool v4;
  hkString::Self *v5;
  hkString::Self **v6;
  hkString::Self **v7;

  result = *a1;
  if ( (unsigned int)(uintptr_t)(result) - 8 <= 1 )
  {
    result = (hkMemoryAllocator::Self *)(*a2);
    if ( *a2 != nullptr )
    {
      v4 = (*((uint32_t *)result + 2))-- == 1;
      if ( v4 )
      {
        v7 = a2;
        result = (hkMemoryAllocator::Self *)G4_VCALL<int>(result, 4);
        a2 = v7;
      }
    }
    *a2 = nullptr;
  }
  else if ( result == (hkMemoryAllocator::Self *)&loc_6 )
  {
    v5 = *a2;
    *a2 = nullptr;
    if ( v5 != nullptr )
    {
      result = a3;
      if ( a3 != nullptr )
        result = (hkMemoryAllocator::Self *)G4_VCALL<int>(v5, 116);
      v4 = (*((uint32_t *)v5 + 2))-- == 1;
      if ( v4 )
        return (hkMemoryAllocator::Self *)G4_VCALL<int>(v5, 4);
    }
  }
  else if ( result == (hkMemoryAllocator::Self *)((char *)&loc_6 + 1) )
  {
    result = (hkMemoryAllocator::Self *)(*a2);
    *a2 = nullptr;
    if ( result != nullptr )
    {
      v4 = (*((uint32_t *)result + 2))-- == 1;
      if ( v4 )
        return (hkMemoryAllocator::Self *)G4_VCALL<int>(result, 4);
    }
  }
  else if ( result == (hkMemoryAllocator::Self *)((char *)&loc_4 + 1) )
  {
    v6 = a2;
    result = hkString::strFree(*a2);
    *v6 = nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::swizzleObjectMember  (binary VA: 0x18aade0)
// Original: StructArrayImplementation::swizzleObjectMember
// ----------------------------------------------------------------------------
int StructArrayImplementation::swizzleObjectMember(StructArrayImplementation::Self *self, hkString::Self *a2)
{
  int v2;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  hkString::Self *v10;

  v2 = 0;
  if ( a2 != nullptr )
  {
    v3 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 6) + 12)
                                                                                        + 8)
                                                                            + 80);
    v2 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v3, a2, 0);
    if ( v2 == 0 )
    {
      v10 = hkString::strDup(a2);
      hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v3, v10, (unsigned int)(uintptr_t)(v10));
      v2 = (int)(uintptr_t)(v10);
    }
  }
  v4 = *((uint32_t *)self + 4);
  v5 = *((uint32_t **)self + 3);
  if ( v4 <= 0 )
  {
LABEL_9:
    v5 -= 2;
    return v5[1];
  }
  if ( *v5 != v2 )
  {
    v6 = 0;
    v7 = v5 + 2;
    while ( ++v6 != v4 )
    {
      v8 = v7;
      v7 += 2;
      if ( *(v7 - 2) == v2 )
        return v8[1];
    }
    goto LABEL_9;
  }
  return v5[1];
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Destroy_ea18ab210  (binary VA: 0x18ab210)
// Original: StructArrayImplementation::~StructArrayImplementation
// ----------------------------------------------------------------------------
void StructArrayImplementation::Destroy_ea18ab210(StructArrayImplementation::Self *self)
{
  int v1;
  int v2;
  uint32_t *v3;
  bool v4;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint8_t v9[28];

  v1 = 0;
  v2 = *((uint32_t *)self + 4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7D08);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *(uint32_t **)(*((uint32_t *)self + 3) + 8 * v1 + 4);
      v4 = v3[2]-- == 1;
      if ( v4 )
        G4_VCALL<void>(v3, 4);
      ++v1;
    }
    while ( *((uint32_t *)self + 4) > v1 );
  }
  v5 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                                                                                    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(*(uint32_t *)(*((uint32_t *)self + 9) + 8) + 112),
                                                                                    *((uint32_t *)self + 6),
                                                                                    0);
  hkMapBase_unsigned_long_unsigned_l_393416::remove(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v9,
    v5,
    (unsigned int)(uintptr_t)(self));
  v6 = *(uint32_t *)(*((uint32_t *)self + 9) + 12);
  v7 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v7 >= 0 )
    G4_VCALL<void>(v6, 20, *((uint32_t *)self + 3), 8 * v7);
  v8 = *((uint32_t **)self + 6);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  if ( v8 != nullptr )
  {
    v4 = v8[2]-- == 1;
    if ( v4 )
      G4_VCALL<void>(v8, 4);
  }
  *((uint32_t *)self + 6) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A6B40);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::setObject  (binary VA: 0x18ab400)
// Original: StructArrayImplementation::setObject
// ----------------------------------------------------------------------------
hkDataObjectImpl::Self * StructArrayImplementation::setObject(StructArrayImplementation::Self *self, int a2, hkDataObjectImpl::Self *a3)
{
  hkDataObjectImpl::Self *result;
  StructArrayImplementation::Self *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  typedef StructArrayImplementation::Self *_g4_t_v10;
  typedef hkDataObjectImpl::Self *_g4_t_v11;
  typedef uint8_t _g4_t_v12[32];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);

  result = a3;
  v4 = self;
  v5 = *((uint32_t *)a3 + 2) + 1;
  *((uint32_t *)a3 + 2) = v5;
  if ( *((int *)self + 4) <= 0 )
  {
    v8 = v5;
  }
  else
  {
    v6 = 0;
    do
    {
      v10 = v4;
      v11 = result;
      v7 = *((uint32_t *)v4 + 3) + 8 * v6++;
      (*(void (**)(uint8_t *))(*(uint32_t *)result + 16))(v12);
      hkDataArrayImpl::set(*(hkDataArrayImpl::Self **)(v7 + 4), a2, (const hkDataObject_Value::Self *)v12);
      v4 = v10;
      result = v11;
    }
    while ( *((uint32_t *)v10 + 4) > v6 );
    v8 = *((uint32_t *)v11 + 2);
  }
  v9 = v8 - 1;
  *((uint32_t *)result + 2) = v9;
  if ( v9 == 0 )
    return (hkDataObjectImpl::Self *)G4_VCALL<int>(result, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::accessByName  (binary VA: 0x18ab4b0)
// Original: StructArrayImplementation::Object::accessByName
// ----------------------------------------------------------------------------
StructArrayImplementation::Object::Self * StructArrayImplementation::Object::accessByName(StructArrayImplementation::Object::Self *self, const char *a2, hkString::Self *a3)
{
  uint32_t *v3;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v4;
  int v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  hkString::Self *v12;

  v3 = *(uint32_t **)(*((uint32_t *)a2 + 3) + 24);
  if ( a3 == nullptr )
  {
    v5 = 0;
    goto LABEL_5;
  }
  v4 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(*(uint32_t *)(v3[3] + 8) + 80);
  v5 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v4, a3, 0);
  if ( v5 == 0 )
  {
    v12 = hkString::strDup(a3);
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(v4, v12, (unsigned int)(uintptr_t)(v12));
    v5 = (int)(uintptr_t)(v12);
  }
  v3 = *(uint32_t **)(*((uint32_t *)a2 + 3) + 24);
  if ( v3 == nullptr )
  {
LABEL_11:
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    return self;
  }
LABEL_5:
  while ( 1 )
  {
    v6 = v3[11];
    if ( v6 > 0 )
      break;
LABEL_10:
    v3 = (uint32_t *)v3[6];
    if ( v3 == nullptr )
      goto LABEL_11;
  }
  v7 = (uint32_t *)v3[10];
  if ( v5 != *v7 )
  {
    v8 = v7 + 5;
    v9 = 0;
    while ( ++v9 != v6 )
    {
      v10 = v8;
      v8 += 5;
      if ( v5 == *(v8 - 5) )
        goto LABEL_13;
    }
    goto LABEL_10;
  }
  v10 = (uint32_t *)v3[10];
LABEL_13:
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(v10);
  return self;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Construct  (binary VA: 0x18ade40)
// Original: StructArrayImplementation::StructArrayImplementation
// ----------------------------------------------------------------------------
void StructArrayImplementation::Construct(StructArrayImplementation::Self *self, hkDataWorldDict::Self *a2, hkTypeManager::Type::Self *a3, const hkDataClassDict::Self *a4, int a5)
{
  int i;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  int v9;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v10;
  unsigned int v11;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v12;
  int address;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v14;
  int v15;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v16;

  *((uint32_t *)self + 1) = -65536;
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A7D08);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  if ( a4 != nullptr )
    ++*((uint32_t *)a4 + 2);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a4);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 8) = a5;
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(a2);
  for ( i = 0; i < (*(int (**)(uint32_t))(**((uint32_t **)self + 6) + 40))(*((uint32_t *)self + 6)); ++i )
  {
    v6 = *((uint32_t **)self + 6);
    v15 = *((uint32_t *)self + 8);
    v7 = i - G4_VCALL<int>(v6, 40);
    v8 = v6;
    while ( 1 )
    {
      v7 += v8[11];
      if ( v7 >= 0 )
        break;
      v8 = (uint32_t *)v8[6];
      if ( v8 == nullptr )
      {
        v9 = v6[10] - 20;
        goto LABEL_8;
      }
    }
    v9 = v8[10] + 20 * v7;
LABEL_8:
    StructArrayImplementation::addMember(self, v9, v15);
  }
  v10 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(*(uint32_t *)(*((uint32_t *)self + 9) + 8)
                                                                                  + 112);
  v11 = G4_VCALL<int>(self, 28);
  v12 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                                                                                     v10,
                                                                                     v11,
                                                                                     0);
  if ( v12 == nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v14 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                                                                       *(uint32_t *)(*(uint32_t *)address
                                                                                                 + 44),
                                                                                       12);
    *(uint32_t *)v14 = 0;
    *((uint32_t *)v14 + 1) = 0;
    *((uint32_t *)v14 + 2) = -1;
    v16 = v14;
    hkMapBase_unsigned_long_unsigned_l_393416::insert(
      v10,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      v11,
      (unsigned int)(uintptr_t)(v14));
    v12 = v16;
  }
  hkMapBase_unsigned_long_unsigned_l_393416::insert(
    v12,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    (unsigned int)(uintptr_t)(self),
    0);
}

// ----------------------------------------------------------------------------
// Function: sub_18ADFE0  (binary VA: 0x18adfe0)
// Original: sub_18ADFE0
// ----------------------------------------------------------------------------
int sub_18ADFE0(hkDataWorldDict::Self *a1, hkTypeManager::Type::Self *a2)
{
  int v4;
  int TupleSize;
  int v6;
  int result;
  int address;
  int v9;
  int v10;
  int v11;
  int (*v12)(hkDataWorldDict::Self *, int);
  int TypeName;
  const hkDataClassDict::Self *v14;
  int v15;
  hkTypeManager::Type::Self *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  StructArrayImplementation::Self *v21;
  int (*v22)(hkDataWorldDict::Self *, int);

  switch ( *(uint32_t *)a2 )
  {
    case 2:
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                 *(uint32_t *)(*(uint32_t *)address + 44),
                 32);
      *(uint32_t *)(result + 4) = -65536;
      *(uint32_t *)(result + 8) = 0;
      *(uint32_t *)(result + 12) = 0;
      *(uint32_t *)(result + 16) = 0;
      *(uint32_t *)(result + 20) = 0x80000000;
      *(uint32_t *)(result + 24) = (uint32_t)(uintptr_t)(a1);
      *(uint32_t *)(result + 28) = (uint32_t)(uintptr_t)(a2);
      *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_20A72A8);
      break;
    case 3:
      v9 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v9 + 44) + 8))(
                 *(uint32_t *)(*(uint32_t *)v9 + 44),
                 32);
      *(uint32_t *)(result + 4) = -65536;
      *(uint32_t *)(result + 8) = 0;
      *(uint32_t *)(result + 12) = 0;
      *(uint32_t *)(result + 16) = 0;
      *(uint32_t *)(result + 20) = 0x80000000;
      *(uint32_t *)(result + 24) = (uint32_t)(uintptr_t)(a1);
      *(uint32_t *)(result + 28) = (uint32_t)(uintptr_t)(a2);
      *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_20A75A8);
      break;
    case 4:
      v10 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v10 + 44) + 8))(
                 *(uint32_t *)(*(uint32_t *)v10 + 44),
                 48);
      *(uint32_t *)(result + 4) = -65536;
      *(uint32_t *)(result + 8) = 0;
      *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_20A7128);
      *(uint32_t *)(result + 12) = (uint32_t)(uintptr_t)(a1);
      *(uint32_t *)(result + 16) = 0;
      *(uint32_t *)(result + 20) = 0;
      *(uint32_t *)(result + 24) = 0;
      *(uint32_t *)(result + 28) = 0x80000000;
      *(uint32_t *)(result + 32) = 0;
      *(uint32_t *)(result + 36) = 0;
      *(uint32_t *)(result + 40) = 0x80000000;
      *(uint8_t *)(result + 44) = 0;
      break;
    case 5:
      v11 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v11 + 44) + 8))(
                 *(uint32_t *)(*(uint32_t *)v11 + 44),
                 32);
      *(uint32_t *)(result + 4) = -65536;
      *(uint32_t *)(result + 8) = 0;
      *(uint32_t *)(result + 12) = 0;
      *(uint32_t *)(result + 16) = 0;
      *(uint32_t *)(result + 20) = 0x80000000;
      *(uint32_t *)(result + 24) = (uint32_t)(uintptr_t)(a1);
      *(uint32_t *)(result + 28) = (uint32_t)(uintptr_t)(a2);
      *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_20A7A28);
      break;
    case 6:
      v12 = *(int (**)(hkDataWorldDict::Self *, int))(*(uint32_t *)a1 + 44);
      TypeName = hkTypeManager::Type::getTypeName(a2);
      v14 = (const hkDataClassDict::Self *)v12(a1, TypeName);
      if ( v14 == nullptr )
        goto LABEL_15;
      v15 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v21 = (StructArrayImplementation::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v15 + 44) + 8))(
                                           *(uint32_t *)(*(uint32_t *)v15 + 44),
                                           40);
      StructArrayImplementation::Construct(v21, a1, a2, v14, 0);
      result = (int)(uintptr_t)(v21);
      break;
    case 7:
      v16 = *((hkTypeManager::Type::Self **)a2 + 1);
      if ( hkTypeManager::Type::getTypeName(v16) != 0 )
      {
        v22 = *(int (**)(hkDataWorldDict::Self *, int))(*(uint32_t *)a1 + 44);
        v17 = hkTypeManager::Type::getTypeName(v16);
        if ( v22(a1, v17) == 0 )
          goto LABEL_15;
      }
      v18 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v18 + 44) + 8))(
                 *(uint32_t *)(*(uint32_t *)v18 + 44),
                 32);
      *(uint32_t *)(result + 4) = -65536;
      *(uint32_t *)(result + 8) = 0;
      *(uint32_t *)(result + 12) = 0;
      *(uint32_t *)(result + 16) = 0;
      *(uint32_t *)(result + 20) = 0x80000000;
      *(uint32_t *)(result + 24) = (uint32_t)(uintptr_t)(a1);
      *(uint32_t *)(result + 28) = (uint32_t)(uintptr_t)(a2);
      *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_20A78A8);
      break;
    case 8:
      v19 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v19 + 44) + 8))(
                 *(uint32_t *)(*(uint32_t *)v19 + 44),
                 32);
      *(uint32_t *)(result + 4) = -65536;
      *(uint32_t *)(result + 8) = 0;
      *(uint32_t *)(result + 12) = 0;
      *(uint32_t *)(result + 20) = 0x80000000;
      *(uint32_t *)(result + 24) = (uint32_t)(uintptr_t)(a1);
      *(uint32_t *)(result + 28) = (uint32_t)(uintptr_t)(a2);
      *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_20A7BA8);
      *(uint32_t *)(result + 16) = 0;
      break;
    case 9:
      if ( **((uint32_t **)a2 + 1) == 3 )
      {
        v20 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v20 + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)v20 + 44),
                   32);
        *(uint32_t *)(result + 4) = -65536;
        *(uint32_t *)(result + 8) = 0;
        *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_20A7728);
        *(uint32_t *)(result + 12) = 0;
        *(uint32_t *)(result + 16) = 0;
        *(uint32_t *)(result + 20) = 0x80000000;
        *(uint32_t *)(result + 24) = (uint32_t)(uintptr_t)(a1);
        *(uint32_t *)(result + 28) = (uint32_t)(uintptr_t)(a2);
      }
      else
      {
        v4 = sub_18ADFE0();
        TupleSize = hkTypeManager::Type::getTupleSize(a2);
        v6 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v6 + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)v6 + 44),
                   28);
        *(uint32_t *)(result + 4) = -65536;
        *(uint32_t *)(result + 8) = 0;
        *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_20A7428);
        *(uint32_t *)(result + 12) = (uint32_t)(uintptr_t)(a1);
        *(uint32_t *)(result + 16) = v4;
        *(uint32_t *)(result + 20) = TupleSize;
        *(uint32_t *)(result + 24) = 0;
        if ( v4 != 0 )
          ++*(uint32_t *)(v4 + 8);
      }
      break;
    default:
LABEL_15:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::addMember  (binary VA: 0x18ae410)
// Original: StructArrayImplementation::_addMember
// ----------------------------------------------------------------------------
int StructArrayImplementation::addMember(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  hkTypeManager::Type::Self *Terminal;
  int v7;
  int i;
  int v9;
  int v11;
  int v12;
  int *v13;
  int v14;
  int v15;
  int v16;
  int16_t v17;
  int v18;
  int v19;
  int v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef hkString::Self *_g4_t_TypeName;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef hkTypeManager::Type::Self *_g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_TypeName)) > _g4_s2 ? (20u + sizeof(_g4_t_TypeName)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v24)) > _g4_s3 ? (20u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v25)) > _g4_s4 ? (24u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v26)) > _g4_s5 ? (28u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v27)) > _g4_s6 ? (32u + sizeof(_g4_t_v27)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_TypeName &TypeName = *reinterpret_cast<_g4_t_TypeName *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);

  if ( **(uint32_t **)(a2 + 12) == 1 )
    return -1;
  v3 = *(uint32_t *)(a1 + 16);
  if ( v3 == (*(uint32_t *)(a1 + 20) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(*(hkArrayUtil::Self **)(*(uint32_t *)(a1 + 36) + 12), (hkMemoryAllocator::Self *)(a1 + 12), 8, v22);
    v3 = *(uint32_t *)(a1 + 16);
  }
  *(uint32_t *)(*(uint32_t *)(a1 + 12) + 8 * v3) = 0;
  v4 = *(uint32_t *)(a1 + 12);
  v5 = *(uint32_t *)(a1 + 16);
  *(uint32_t *)(a1 + 16) = v5 + 1;
  v25 = (uint32_t *)(v4 + 8 * v5);
  *v25 = *(uint32_t *)a2;
  v26 = *(hkTypeManager::Type::Self **)(a2 + 12);
  Terminal = hkTypeManager::Type::findTerminal(v26);
  if ( *(uint32_t *)Terminal == 6 )
    hkTypeManager::Type::getTypeName(Terminal);
  v7 = sub_18ADFE0(*(hkDataWorldDict::Self **)(a1 + 36), v26);
  v25[1] = v7;
  ++*(uint32_t *)(v7 + 8);
  G4_VCALL<void>(v25[1], 20, a3);
  if ( (*(uint32_t *)(a2 + 16) != 0 || *(uint32_t *)v26 == 6) && a3 > 0 )
  {
    for ( i = 0; i != a3; ++i )
    {
      while ( 1 )
      {
        v9 = *(uint32_t *)v26;
        if ( *(uint32_t *)v26 != 4 && v9 != 2 )
          break;
        v21 = i++;
        G4_VCALL<void>(v25[1], 84, v21, **(uint32_t **)(a2 + 16), *(uint32_t *)(*(uint32_t *)(a2 + 16) + 4));
        if ( i == a3 )
          return *(uint32_t *)(a1 + 16) - 1;
      }
      switch ( v9 )
      {
        case 3:
          G4_VCALL<void>(v25[1], 68, i, **(uint32_t **)(a2 + 16));
          break;
        case 9:
          if ( **((uint32_t **)v26 + 1) == 3 )
            G4_VCALL<void>(v25[1], 52, i, *(uint32_t *)(a2 + 16));
          break;
        case 6:
          TypeName = (hkString::Self *)hkTypeManager::Type::getTypeName(v26);
          v11 = *(uint32_t *)((*(int (**)(uint32_t))(**(uint32_t **)(a1 + 24) + 8))(*(uint32_t *)(a1 + 24)) + 8);
          v12 = 0;
          if ( TypeName != nullptr )
            v12 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
                    (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(v11 + 4),
                    TypeName,
                    0);
          v13 = *(int **)(*(uint32_t *)(a1 + 24) + 12);
          v14 = *v13;
          v27 = v12;
          v15 = (*(int (**)(int *, int *, uint32_t))(v14 + 24))(v13, &v27, 0);
          if ( v15 != 0 )
          {
            v16 = *(uint32_t *)(v15 + 4);
            ++*(uint32_t *)(v15 + 8);
            v17 = v16;
            LOWORD(v16) = 0;
            v24 = (uint32_t *)v15;
            *(uint32_t *)(v15 + 4) = v16 | (uint16_t)(v17 + 1);
            G4_VCALL<void>(v25[1], 92, i, v15);
            v18 = v24[1];
            LOWORD(v18) = 0;
            v19 = v18 | (uint16_t)(v24[1] - 1);
            v20 = v24[2];
            v24[1] = v19;
            v24[2] = v20 - 1;
            if ( v20 == 1 )
              G4_VCALL<void>(v24, 4);
          }
          else
          {
            G4_VCALL<void>(v25[1], 92, i, 0);
          }
          break;
        case 5:
          G4_VCALL<void>(v25[1], 60, i, *(uint32_t *)(a2 + 16));
          break;
        default:
          break;
      }
    }
  }
  return *(uint32_t *)(a1 + 16) - 1;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::findOrAdd  (binary VA: 0x18ae740)
// Original: StructArrayImplementation::_findOrAdd
// ----------------------------------------------------------------------------
int StructArrayImplementation::findOrAdd(uint32_t *a1, uint32_t *a2)
{
  int v2;
  uint32_t *v3;
  int result;
  int v5;

  v2 = a1[4];
  if ( v2 <= 0 )
  {
LABEL_6:
    v5 = G4_VCALL<int>(a1, 24);
    return StructArrayImplementation::addMember((int)(uintptr_t)(a1), (int)(uintptr_t)(a2), v5);
  }
  v3 = (uint32_t *)a1[3];
  result = 0;
  if ( *v3 != *a2 )
  {
    while ( ++result != v2 )
    {
      if ( v3[2 * result] == *a2 )
      {
        if ( result == -1 )
          goto LABEL_6;
        return result;
      }
    }
    goto LABEL_6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::asVec  (binary VA: 0x18ae7b0)
// Original: StructArrayImplementation::Object::asVec
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::asVec(int a1, uint32_t *a2)
{
  int v3;

  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v3, 48, *(uint32_t *)(a1 + 16));
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::asString  (binary VA: 0x18ae800)
// Original: StructArrayImplementation::Object::asString
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::asString(int a1, uint32_t *a2)
{
  int v3;

  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v3, 56, *(uint32_t *)(a1 + 16));
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::asArray  (binary VA: 0x18ae850)
// Original: StructArrayImplementation::Object::asArray
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::asArray(int a1, uint32_t *a2)
{
  int v3;

  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v3, 96, *(uint32_t *)(a1 + 16));
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::asInt  (binary VA: 0x18ae8a0)
// Original: StructArrayImplementation::Object::asInt
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::asInt(int a1, uint32_t *a2)
{
  int v3;

  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v3, 80, *(uint32_t *)(a1 + 16));
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::asReal  (binary VA: 0x18ae8f0)
// Original: StructArrayImplementation::Object::asReal
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::asReal(int a1, uint32_t *a2)
{
  int v3;

  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v3, 64, *(uint32_t *)(a1 + 16));
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::asHalf  (binary VA: 0x18ae940)
// Original: StructArrayImplementation::Object::asHalf
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::asHalf(int a1, int a2, uint32_t *a3)
{
  int v3;

  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a2 + 12), a3)
                 + 4);
  (*(void (**)(int, int, uint32_t))(*(uint32_t *)v3 + 104))(a1, v3, *(uint32_t *)(a2 + 16));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::asObject  (binary VA: 0x18ae9a0)
// Original: StructArrayImplementation::Object::asObject
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::asObject(int a1, uint32_t *a2)
{
  int v3;

  v3 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v3, 88, *(uint32_t *)(a1 + 16));
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::assign  (binary VA: 0x18ae9f0)
// Original: StructArrayImplementation::Object::assign
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, hkDataObject_Value::Self *a3)
{
  int v3;

  v3 = StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2);
  return (int)(uintptr_t)(hkDataArrayImpl::set(
           *(hkDataArrayImpl::Self **)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12) + 8 * v3 + 4),
           *(uint32_t *)(a1 + 16),
           a3));
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::assign  (binary VA: 0x18aea40)
// Original: StructArrayImplementation::Object::assign
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, int a3)
{
  int v4;

  v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v4, 92, *(uint32_t *)(a1 + 16), a3);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::assign_ea18aea90  (binary VA: 0x18aea90)
// Original: StructArrayImplementation::Object::assign
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::assign_ea18aea90(int a1, uint32_t *a2, int a3)
{
  int v4;

  v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v4, 100, *(uint32_t *)(a1 + 16), a3);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::assign_ea18aeae0  (binary VA: 0x18aeae0)
// Original: StructArrayImplementation::Object::assign
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::assign_ea18aeae0(int a1, uint32_t *a2, int a3)
{
  int v4;

  v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v4, 60, *(uint32_t *)(a1 + 16), a3);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::assign_ea18aeb30  (binary VA: 0x18aeb30)
// Original: StructArrayImplementation::Object::assign
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::assign_ea18aeb30(int a1, uint32_t *a2, int a3)
{
  int v4;

  v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v4, 68, *(uint32_t *)(a1 + 16), a3);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::assign  (binary VA: 0x18aeb90)
// Original: StructArrayImplementation::Object::assign
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, int16_t a3)
{
  int v4;

  v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v4, 108, *(uint32_t *)(a1 + 16), a3);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::assign_ea18aebf0  (binary VA: 0x18aebf0)
// Original: StructArrayImplementation::Object::assign
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::assign_ea18aebf0(int a1, uint32_t *a2, int a3)
{
  int v4;

  v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v4, 52, *(uint32_t *)(a1 + 16), a3);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::assign  (binary VA: 0x18aec40)
// Original: StructArrayImplementation::Object::assign
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, char a3)
{
  int v4;

  v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v4, 76, *(uint32_t *)(a1 + 16), a3);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::assign_ea18aeca0  (binary VA: 0x18aeca0)
// Original: StructArrayImplementation::Object::assign
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::assign_ea18aeca0(int a1, uint32_t *a2, int16_t a3)
{
  int v4;

  v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v4, 76, *(uint32_t *)(a1 + 16), a3);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::assign_ea18aed00  (binary VA: 0x18aed00)
// Original: StructArrayImplementation::Object::assign
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::assign_ea18aed00(int a1, uint32_t *a2, int a3)
{
  int v4;

  v4 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v4, 76, *(uint32_t *)(a1 + 16), a3);
}

// ----------------------------------------------------------------------------
// Function: StructArrayImplementation::Object::assign  (binary VA: 0x18aed50)
// Original: StructArrayImplementation::Object::assign
// ----------------------------------------------------------------------------
int StructArrayImplementation::Object::assign(int a1, uint32_t *a2, int a3, int a4)
{
  int v5;

  v5 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 12)
                 + 8 * StructArrayImplementation::findOrAdd(*(uint32_t **)(a1 + 12), a2)
                 + 4);
  return G4_VCALL<int>(v5, 84, *(uint32_t *)(a1 + 16), a3, a4);
}

// ----------------------------------------------------------------------------
// Function: ArrayArrayImplementation::asArray  (binary VA: 0x18af800)
// Original: ArrayArrayImplementation::asArray
// ----------------------------------------------------------------------------
int ArrayArrayImplementation::asArray(ArrayArrayImplementation::Self *self, int a2)
{
  int result;

  result = *(uint32_t *)(*((uint32_t *)self + 3) + 4 * a2);
  if ( result == 0 )
  {
    result = sub_18ADFE0(*((hkDataWorldDict::Self **)self + 6), *(hkTypeManager::Type::Self **)(*((uint32_t *)self + 7) + 4));
    ++*(uint32_t *)(result + 8);
    *(uint32_t *)(*((uint32_t *)self + 3) + 4 * a2) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18B0560  (binary VA: 0x18b0560)
// Original: sub_18B0560
// ----------------------------------------------------------------------------
unsigned int sub_18B0560(unsigned int result, hkString::Self *a2, hkMemoryAllocator::Self *a3)
{
  uint32_t *v3;
  unsigned int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  hkString::Self *v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  int v18;
  hkString::Self *v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *v26;

  if ( a2 != nullptr )
  {
    v3 = (uint32_t *)result;
    v26 = (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(result + 4);
    result = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
               (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)(result + 4),
               a2,
               0);
    v23 = result;
    if ( result != 0 )
    {
      v4 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
             (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v3 + 16),
             result,
             0xFFFFFFFF);
      if ( v4 != -1 )
      {
        v5 = v3[13];
        v6 = *((uint32_t *)a3 + 1);
        do
        {
          v7 = *(uint32_t *)(v5 + 8 * v4);
          v8 = 8 * v4;
          if ( v6 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
          {
            v21 = v7;
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, a3, 4, v20);
            v6 = *((uint32_t *)a3 + 1);
            v7 = v21;
          }
          *(uint32_t *)(*(uint32_t *)a3 + 4 * v6) = v7;
          v6 = *((uint32_t *)a3 + 1) + 1;
          *((uint32_t *)a3 + 1) = v6;
          v5 = v3[13];
          v4 = *(uint32_t *)(v5 + v8 + 4);
        }
        while ( v4 != -1 );
      }
      result = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                 (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v3 + 8),
                 v23,
                 0xFFFFFFFF);
      if ( result != -1 )
      {
        v9 = v3[5];
        do
        {
          while ( 1 )
          {
            v25 = 8 * result;
            v10 = (hkString::Self *)(*(int (**)(uint32_t))(**(uint32_t **)(v9 + 8 * result) + 12))(*(uint32_t *)(v9 + 8 * result));
            if ( v10 != nullptr )
            {
              v11 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(v26, v10, 0);
              v22 = v11;
              if ( v11 != 0 )
              {
                v12 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v3 + 16),
                        v11,
                        0xFFFFFFFF);
                if ( v12 != -1 )
                {
                  v13 = v3[13];
                  v14 = *((uint32_t *)a3 + 1);
                  do
                  {
                    v15 = *(uint32_t *)(v13 + 8 * v12);
                    v16 = 8 * v12;
                    if ( v14 == (*((uint32_t *)a3 + 2) & 0x3FFFFFFF) )
                    {
                      v24 = v15;
                      hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, a3, 4, v20);
                      v14 = *((uint32_t *)a3 + 1);
                      v15 = v24;
                    }
                    *(uint32_t *)(*(uint32_t *)a3 + 4 * v14) = v15;
                    v14 = *((uint32_t *)a3 + 1) + 1;
                    *((uint32_t *)a3 + 1) = v14;
                    v13 = v3[13];
                    v12 = *(uint32_t *)(v13 + v16 + 4);
                  }
                  while ( v12 != -1 );
                }
                v17 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v3 + 8),
                        v22,
                        0xFFFFFFFF);
                if ( v17 != -1 )
                  break;
              }
            }
            v9 = v3[5];
            result = *(uint32_t *)(v9 + v25 + 4);
            if ( result == -1 )
              return result;
          }
          v9 = v3[5];
          do
          {
            v18 = 8 * v17;
            v19 = (hkString::Self *)(*(int (**)(uint32_t))(**(uint32_t **)(v9 + 8 * v17) + 12))(*(uint32_t *)(v9 + 8 * v17));
            hkDataWorldDict::ObjectTracker::findTrackedObjectsByBase(v3, v19, 1, 0, a3);
            v9 = v3[5];
            v17 = *(uint32_t *)(v9 + v18 + 4);
          }
          while ( v17 != -1 );
          result = *(uint32_t *)(v9 + v25 + 4);
        }
        while ( result != -1 );
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18B1680  (binary VA: 0x18b1680)
// Original: sub_18B1680
// ----------------------------------------------------------------------------
int sub_18B1680()
{
  int32_t v0; // ett

  *(uint16_t *)(unk_2139D74) = (uint16_t)(uintptr_t)(-65535);
  dword_2139D70 = (int)((uint32_t)(uintptr_t)&off_20A6F30);
  dword_2139D78 = 0;
  do
    v0 = *(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_7FD74)->st_info + (uint32_t)(uintptr_t)(dword_20B9FF4));
  while ( v0 != __sync_val_compare_and_swap((volatile int32_t *)&unk_2139D74, v0, (uint16_t)v0 | 0xC0000) );
  return __cxa_atexit((void (*)(void *))sub_18A7790, &dword_2139D70, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: VariableIntArrayImplementation::reallocateArray  (binary VA: 0x18b1700)
// Original: VariableIntArrayImplementation::_reallocateArray
// ----------------------------------------------------------------------------
int VariableIntArrayImplementation::reallocateArray(VariableIntArrayImplementation::Self *self)
{
  VariableIntArrayImplementation::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[8];
  typedef int _g4_t_v11[3];
  typedef uint32_t _g4_t_v12[134];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v12)) > _g4_s3 ? (40u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);

  v12[130] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  if ( *((uint8_t *)self + 44) != 0 )
  {
    hkErrStream::Construct((hkErrStream::Self *)v11, (hkString::Self *)v12, 512);
    hkOstream::opShl(
      (int)(uintptr_t)(v11),
      (hkString::Self *)"Converting DataObjectArray from 32-bit to 64-bit. If this is intended, always use 64-bit values");
    hkError::messageWarning(
      (hkError::Self *)0x3599E1ED,
      (int)(uintptr_t)(v12),
      "Data/Dict/hkDataObjectDict.cpp",
      (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_5E4)->st_name + 3,
      v9);
    hkErrStream::Destroy((hkErrStream::Self *)v11);
  }
  v2 = *((uint32_t *)v1 + 6);
  v3 = v2;
  v4 = *((uint32_t *)v1 + 10) & 0x3FFFFFFF;
  if ( v2 > v4 )
  {
    v5 = 2 * v4;
    if ( v5 < v2 )
      v5 = *((uint32_t *)v1 + 6);
    hkArrayUtil::reserve((hkArrayUtil::Self *)v10, *(hkMemoryAllocator::Self **)(*((uint32_t *)v1 + 3) + 12), (char *)v1 + 32, v5, 8);
    v3 = *((uint32_t *)v1 + 6);
  }
  v6 = 0;
  *((uint32_t *)v1 + 9) = v2;
  if ( v3 > 0 )
  {
    do
    {
      *(uint64_t *)(*((uint32_t *)v1 + 8) + 8 * v6) = *(int *)(*((uint32_t *)v1 + 5) + 4 * v6);
      ++v6;
    }
    while ( *((uint32_t *)v1 + 6) > v6 );
  }
  v7 = *(uint32_t *)(*((uint32_t *)v1 + 3) + 12);
  result = *((uint32_t *)v1 + 7);
  *((uint32_t *)v1 + 6) = 0;
  if ( result >= 0 )
    result = G4_VCALL<int>(v7, 20, *((uint32_t *)v1 + 5), 4 * result);
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 7) = 0x80000000;
  *((uint32_t *)v1 + 4) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: VariableIntArrayImplementation::setInt64  (binary VA: 0x18b1870)
// Original: VariableIntArrayImplementation::setInt64
// ----------------------------------------------------------------------------
int VariableIntArrayImplementation::setInt64(VariableIntArrayImplementation::Self *self, int a2, int64_t a3)
{
  int result;

  if ( *((uint32_t *)self + 4) != 1 )
    VariableIntArrayImplementation::reallocateArray(self);
  result = *((uint32_t *)self + 8);
  *((uint8_t *)self + 44) = 1;
  *(uint64_t *)(result + 8 * a2) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18B6580  (binary VA: 0x18b4730)
// Original: sub_18B6580
// ----------------------------------------------------------------------------
int sub_18B6580(unsigned int a1, uint32_t *a2, int *a3, int a4, hkMemoryAllocator::Self *a5, int a6)
{
  uint32_t *v7;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v22;

  v7 = (uint32_t *)(*a2 + 4 * a1);
  if ( *v7 != -1 )
    return a4;
  *v7 = -2;
  v9 = *((uint32_t *)a5 + 1);
  if ( v9 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 4, v19);
    v9 = *((uint32_t *)a5 + 1);
  }
  *(uint32_t *)(*(uint32_t *)a5 + 4 * v9) = a1;
  ++*((uint32_t *)a5 + 1);
  v10 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
          (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(a3 + 3),
          a1,
          0xFFFFFFFF);
  if ( v10 == -1 )
  {
    v18 = a4;
  }
  else
  {
    v20 = a4;
    v11 = v10;
    v12 = *a3;
    do
    {
      while ( 1 )
      {
        v14 = 8 * v11;
        v13 = v12 + v14;
        v15 = *(uint32_t *)(v12 + v14);
        v16 = *(uint32_t *)(*a2 + 4 * v15);
        if ( v16 != -2 )
          break;
        v17 = *((uint32_t *)a5 + 1);
        if ( v17 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
        {
          v22 = *(uint32_t *)(v12 + v14);
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 4, v19);
          v17 = *((uint32_t *)a5 + 1);
          v15 = v22;
        }
        *(uint32_t *)(*(uint32_t *)a5 + 4 * v17) = v15;
        v12 = *a3;
        v11 = *(uint32_t *)(*a3 + v14 + 4);
        if ( v11 == -1 )
          goto LABEL_14;
      }
      if ( v16 == -1 )
      {
        v20 = sub_18B6580(a3, v20, a5, a6);
        v12 = *a3;
        v13 = *a3 + v14;
      }
      v11 = *(uint32_t *)(v13 + 4);
    }
    while ( v11 != -1 );
LABEL_14:
    v18 = v20;
  }
  --*((uint32_t *)a5 + 1);
  *(uint32_t *)(*a2 + 4 * a1) = v18;
  return v18 + 1;
}

// ----------------------------------------------------------------------------
// Function: sub_18B6880  (binary VA: 0x18b6880)
// Original: sub_18B6880
// ----------------------------------------------------------------------------
uint32_t * sub_18B6880(uint32_t *a1, int *a2, uint32_t *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;
  int16_t v15;
  int j;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v24;
  int v25;
  int v26;
  int v27;
  int16_t v28;
  uint32_t *v29;
  int v30;
  int v31;
  int v32;
  void (*v33)(uint32_t **);
  int v34;
  int v35;
  int v36;
  int v37;
  int16_t v38;
  uint32_t *v39;
  int v40;
  int v41;
  int v42;
  uint32_t *v43;
  int v44;
  hkTypeManager::Self *v45;
  hkTypeManager::Type::Self *Type;
  int v47;
  typedef uint32_t *_g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef hkString::Self *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v55;
  typedef hkString::Self *_g4_t_i;
  typedef hkString::Self *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef char _g4_t_v59[4];
  typedef uint32_t _g4_t_v60[3];
  typedef int _g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef hkString::Self *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v49)) > _g4_s0 ? (4u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v50)) > _g4_s1 ? (8u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v51)) > _g4_s2 ? (12u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v52)) > _g4_s3 ? (16u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v53)) > _g4_s4 ? (20u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v55)) > _g4_s5 ? (28u + sizeof(_g4_t_v55)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_i)) > _g4_s6 ? (32u + sizeof(_g4_t_i)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v57)) > _g4_s7 ? (32u + sizeof(_g4_t_v57)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v58)) > _g4_s8 ? (36u + sizeof(_g4_t_v58)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v59)) > _g4_s9 ? (40u + sizeof(_g4_t_v59)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v60)) > _g4_s10 ? (44u + sizeof(_g4_t_v60)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v61)) > _g4_s11 ? (56u + sizeof(_g4_t_v61)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v62)) > _g4_s12 ? (60u + sizeof(_g4_t_v62)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v63)) > _g4_s13 ? (64u + sizeof(_g4_t_v63)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v64)) > _g4_s14 ? (68u + sizeof(_g4_t_v64)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v65)) > _g4_s15 ? (76u + sizeof(_g4_t_v65)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v66)) > _g4_s16 ? (80u + sizeof(_g4_t_v66)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v67)) > _g4_s17 ? (84u + sizeof(_g4_t_v67)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v68)) > _g4_s18 ? (88u + sizeof(_g4_t_v68)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v69)) > _g4_s19 ? (92u + sizeof(_g4_t_v69)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v70)) > _g4_s20 ? (96u + sizeof(_g4_t_v70)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v71)) > _g4_s21 ? (116u + sizeof(_g4_t_v71)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 56u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 60u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 64u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 68u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 76u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 80u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 84u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 88u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 92u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 96u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 116u);

  v71 = (uint32_t *)(&a3);
  v3 = a3;
  v49 = a3;
  v51 = 0;
  if ( (int)a3[1] <= 0 )
  {
LABEL_42:
    *a1 = 0;
    return a1;
  }
  while ( 1 )
  {
    v55 = *(uint32_t *)(*v3 + 4 * v51);
    v52 = *(hkString::Self **)v55;
    if ( *(uint32_t *)v55 == 0 )
      v52 = *(hkString::Self **)(v55 + 4);
    if ( *(uint32_t *)(v55 + 8) == -1 )
    {
      v68 = 0;
      v69 = 0;
      v70 = 0x80000000;
      v65 = v52;
      v47 = *(uint32_t *)(v55 + 12);
      v67 = 0;
      v66 = v47;
      if ( G4_VCALL<int>(a2, 44, v52) != 0 )
        break;
      G4_VCALL<void>(a2, 20, &v65);
      v69 = 0;
      if ( v70 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v68,
          12 * v70);
    }
    v61 = G4_VCALL<int>(a2, 44, v52);
    if ( *(uint32_t *)v55 != 0
      && *(uint32_t *)(v55 + 4) != 0
      && hkString::strCmp(*(hkString::Self **)v55, *(char **)(v55 + 4)) != 0 )
    {
      G4_VCALL<void>(a2, 56, &v61, *(uint32_t *)(v55 + 4));
      v52 = *(hkString::Self **)(v55 + 4);
    }
    v4 = v55;
    v58 = 0;
    v5 = *(uint32_t *)(v55 + 20);
    if ( v5 > 0 )
    {
      while ( 2 )
      {
        v6 = (uint32_t *)(*(uint32_t *)(v55 + 16) + 8 * v58);
        switch ( *v6 )
        {
          case 1:
            v43 = (uint32_t *)v6[1];
            v53 = v43[3];
            v44 = v43[1];
            v57 = (hkString::Self *)v43[2];
            v45 = (hkTypeManager::Self *)G4_VCALL<int>(a2, 52);
            Type = hkTypeManager::getType(v45, v44, v57, v53);
            G4_VCALL<void>(a2, 72, &v61, *v43, Type, v43[4]);
            v5 = *(uint32_t *)(v55 + 20);
            goto LABEL_64;
          case 2:
            G4_VCALL<void>(a2, 84, &v61, *(uint32_t *)v6[1]);
            v5 = *(uint32_t *)(v55 + 20);
            goto LABEL_64;
          case 3:
            G4_VCALL<void>(a2, 80, &v61, *(uint32_t *)v6[1], *(uint32_t *)(v6[1] + 4));
            v5 = *(uint32_t *)(v55 + 20);
            goto LABEL_64;
          case 4:
            G4_VCALL<void>(a2, 76, &v61, *(uint32_t *)v6[1], *(uint32_t *)(v6[1] + 4));
            v5 = *(uint32_t *)(v55 + 20);
            goto LABEL_64;
          case 5:
            v33 = *(void (**)(uint32_t **))(v6[1] + 4);
            v34 = *a2;
            v65 = nullptr;
            v66 = 0;
            v67 = 0x80000000;
            v35 = 0;
            (*(void (**)(int *, hkString::Self *, hkString::Self **))(v34 + 88))(a2, v52, &v65);
            if ( v66 > 0 )
            {
              do
              {
                v62 = *((uint32_t **)v65 + v35);
                v36 = (int)(uintptr_t)(v62);
                if ( v62 != nullptr )
                {
                  v37 = v62[1];
                  ++v62[2];
                  v38 = v37;
                  LOWORD(v37) = 0;
                  *(uint32_t *)(v36 + 4) = v37 | (uint16_t)(v38 + 1);
                }
                v33(&v62);
                v39 = v62;
                if ( v62 != nullptr )
                {
                  v40 = v62[1];
                  LOWORD(v40) = 0;
                  v41 = v40 | (uint16_t)(v62[1] - 1);
                  v42 = v62[2];
                  v62[1] = v41;
                  v39[2] = v42 - 1;
                  if ( v42 == 1 )
                    G4_VCALL<void>(v39, 4);
                }
                ++v35;
              }
              while ( v66 > v35 );
            }
            v66 = 0;
            if ( v67 >= 0 )
              goto LABEL_61;
            goto LABEL_62;
          case 6:
            v62 = (uint32_t *)G4_VCALL<int>(a2, 44, *(uint32_t *)v6[1]);
            v24 = *a2;
            v65 = nullptr;
            v66 = 0;
            v67 = 0x80000000;
            v25 = 0;
            (*(void (**)(int *, hkString::Self *, hkString::Self **))(v24 + 92))(a2, v52, &v65);
            if ( v66 > 0 )
            {
              do
              {
                v60[0] = *((uint32_t *)v65 + v25);
                v26 = v60[0];
                if ( v60[0] != 0 )
                {
                  v27 = *(uint32_t *)(v60[0] + 4);
                  ++*(uint32_t *)(v60[0] + 8);
                  v28 = v27;
                  LOWORD(v27) = 0;
                  *(uint32_t *)(v26 + 4) = v27 | (uint16_t)(v28 + 1);
                }
                G4_VCALL<void>(a2, 96, v60, &v62);
                v29 = (uint32_t *)v60[0];
                if ( v60[0] != 0 )
                {
                  v30 = *(uint32_t *)(v60[0] + 4);
                  LOWORD(v30) = 0;
                  v31 = v30 | (uint16_t)(*(uint32_t *)(v60[0] + 4) - 1);
                  v32 = *(uint32_t *)(v60[0] + 8);
                  *(uint32_t *)(v60[0] + 4) = v31;
                  v29[2] = v32 - 1;
                  if ( v32 == 1 )
                    G4_VCALL<void>(v29, 4);
                }
                ++v25;
              }
              while ( v66 > v25 );
            }
            v66 = 0;
            if ( v67 >= 0 )
LABEL_61:
              (*(void (**)(uint32_t *, hkString::Self *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
                (uint32_t *)(hkContainerTempAllocator::s_alloc),
                v65,
                4 * v67);
LABEL_62:
            v5 = *(uint32_t *)(v55 + 20);
            goto LABEL_64;
          case 8:
            v50 = (uint32_t *)v6[1];
            if ( *v50 != 0 )
            {
              v7 = G4_VCALL<int>(a2, 44, *v50);
              v62 = nullptr;
              v63 = 0;
              v64 = 0x80000000;
              v8 = G4_VCALL<int>(v7, 40);
              if ( v8 > (v64 & 0x3FFFFFFF) )
              {
                v9 = 2 * (v64 & 0x3FFFFFFF);
                if ( v8 >= v9 )
                  v9 = v8;
                hkArrayUtil::reserve(
                  (hkArrayUtil::Self *)v59,
                  (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                  (int *)&v62,
                  v9,
                  16);
              }
              v10 = 0;
              v11 = 16 * (v8 - v63);
              v12 = &v62[4 * v63];
              if ( v8 - v63 > 0 )
              {
                do
                {
                  *(__m128i *)&v12[v10 / 4] = g4_m128_from<__m128i>(0LL);
                  v10 += 16;
                }
                while ( v10 != v11 );
              }
              v63 = v8;
              G4_VCALL<void>(v7, 52, &v62);
              v65 = nullptr;
              v66 = 0;
              v67 = 0x80000000;
              G4_VCALL<void>(a2, 88, v52, &v65);
              for ( i = nullptr; v66 > (int)(uintptr_t)(i); i = (hkString::Self *)((char *)i + 1) )
              {
                v60[0] = *((uint32_t *)v65 + (uint32_t)(uintptr_t)(i));
                v13 = (uint32_t *)v60[0];
                if ( v60[0] != 0 )
                {
                  v14 = *(uint32_t *)(v60[0] + 4);
                  ++*(uint32_t *)(v60[0] + 8);
                  v15 = v14;
                  LOWORD(v14) = 0;
                  v13[1] = v14 | (uint16_t)(v15 + 1);
                }
                if ( v63 > 0 )
                {
                  for ( j = 0; j < v63; ++j )
                  {
                    v17 = j;
                    hkDataObject::destroyMember((hkDataObject::Self *)v60, (const char *)v62[4 * v17]);
                  }
                  v13 = (uint32_t *)v60[0];
                }
                if ( v13 != nullptr )
                {
                  v18 = v13[1];
                  v19 = v13[2];
                  LOWORD(v18) = 0;
                  v13[1] = v18 | (uint16_t)(v13[1] - 1);
                  v13[2] = v19 - 1;
                  if ( v19 == 1 )
                    G4_VCALL<void>(v13, 4);
                }
              }
              v66 = 0;
              if ( v67 >= 0 )
                (*(void (**)(uint32_t *, hkString::Self *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
                  (uint32_t *)(hkContainerTempAllocator::s_alloc),
                  v65,
                  4 * v67);
              v65 = nullptr;
              v67 = 0x80000000;
              v63 = 0;
              if ( v64 >= 0 )
                (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
                  (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                  v62,
                  16 * v64);
            }
            v20 = 0;
            if ( v50[1] != 0 )
              v20 = G4_VCALL<int>(a2, 44, v50[1]);
            v65 = (hkString::Self *)v20;
            G4_VCALL<void>(a2, 68, &v61, &v65);
            ++v58;
            v5 = *(uint32_t *)(v55 + 20);
            if ( v58 < v5 )
              continue;
            goto LABEL_36;
          default:
LABEL_64:
            if ( ++v58 < v5 )
              continue;
LABEL_36:
            v4 = v55;
            break;
        }
        break;
      }
    }
    v21 = *(uint32_t *)(v4 + 12);
    if ( v21 == -1 )
    {
      G4_VCALL<void>(a2, 60, &v61);
    }
    else
    {
      v22 = *(uint32_t *)(v55 + 8);
      if ( v22 != -1 && v21 != v22 )
        G4_VCALL<void>(a2, 64, &v61, v21);
    }
    v3 = v49;
    if ( v49[1] <= ++v51 )
      goto LABEL_42;
  }
  v69 = 0;
  *a1 = 1;
  if ( v70 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v68,
      12 * v70);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_18B7040  (binary VA: 0x18b7040)
// Original: sub_18B7040
// ----------------------------------------------------------------------------
int sub_18B7040(int a1, unsigned int a2, int *a3, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a4)
{
  unsigned int v7;
  unsigned int v8;
  int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  int v33;
  int v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;

  if ( (signed int)hkMapBase_unsigned_long_unsigned_l_393416::findKey(a4, a2) <= *((uint32_t *)a4 + 2) )
    return 0;
  hkMapBase_unsigned_long_unsigned_l_393416::insert(
    a4,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    a2,
    0);
  v38 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(a3 + 3);
  v7 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
         (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(a3 + 3),
         a2,
         0xFFFFFFFF);
  if ( v7 == -1 )
    return 0;
  v42 = 8 * v7;
  v8 = *(uint32_t *)(*a3 + 8 * v7);
  if ( a1 == v8 )
    return 1;
  while ( 1 )
  {
    if ( (signed int)hkMapBase_unsigned_long_unsigned_l_393416::findKey(a4, v8) > *((uint32_t *)a4 + 2) )
    {
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        a4,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v8,
        0);
      v11 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(v38, v8, 0xFFFFFFFF);
      if ( v11 != -1 )
        break;
    }
    v9 = *a3;
LABEL_7:
    v10 = *(uint32_t *)(v9 + v42 + 4);
    if ( v10 == -1 )
      return 0;
    v8 = *(uint32_t *)(v9 + 8 * v10);
    v42 = 8 * v10;
    if ( a1 == v8 )
      return 1;
  }
  v43 = 8 * v11;
  v12 = *(uint32_t *)(*a3 + 8 * v11);
  if ( a1 == v12 )
    return 1;
  while ( 1 )
  {
    if ( (signed int)hkMapBase_unsigned_long_unsigned_l_393416::findKey(a4, v12) > *((uint32_t *)a4 + 2) )
    {
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        a4,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v12,
        0);
      v14 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(v38, v12, 0xFFFFFFFF);
      if ( v14 != -1 )
        break;
    }
    v9 = *a3;
LABEL_14:
    v13 = *(uint32_t *)(v9 + v43 + 4);
    if ( v13 == -1 )
      goto LABEL_7;
    v43 = 8 * v13;
    v12 = *(uint32_t *)(v9 + 8 * v13);
    if ( a1 == v12 )
      return 1;
  }
  v44 = 8 * v14;
  v15 = *(uint32_t *)(*a3 + 8 * v14);
  if ( a1 == v15 )
    return 1;
  while ( 1 )
  {
    if ( (signed int)hkMapBase_unsigned_long_unsigned_l_393416::findKey(a4, v15) > *((uint32_t *)a4 + 2) )
    {
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        a4,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v15,
        0);
      v17 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(v38, v15, 0xFFFFFFFF);
      if ( v17 != -1 )
        break;
    }
    v9 = *a3;
LABEL_21:
    v16 = *(uint32_t *)(v9 + v44 + 4);
    if ( v16 == -1 )
      goto LABEL_14;
    v44 = 8 * v16;
    v15 = *(uint32_t *)(v9 + 8 * v16);
    if ( a1 == v15 )
      return 1;
  }
  v45 = 8 * v17;
  v18 = *(uint32_t *)(*a3 + 8 * v17);
  if ( a1 == v18 )
    return 1;
  while ( 1 )
  {
    if ( (signed int)hkMapBase_unsigned_long_unsigned_l_393416::findKey(a4, v18) > *((uint32_t *)a4 + 2) )
    {
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        a4,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v18,
        0);
      v20 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(v38, v18, 0xFFFFFFFF);
      if ( v20 != -1 )
        break;
    }
    v9 = *a3;
LABEL_28:
    v19 = *(uint32_t *)(v9 + v45 + 4);
    if ( v19 == -1 )
      goto LABEL_21;
    v45 = 8 * v19;
    v18 = *(uint32_t *)(v9 + 8 * v19);
    if ( a1 == v18 )
      return 1;
  }
  v41 = 8 * v20;
  v21 = *(uint32_t *)(*a3 + 8 * v20);
  if ( a1 == v21 )
    return 1;
  while ( 1 )
  {
    if ( (signed int)hkMapBase_unsigned_long_unsigned_l_393416::findKey(a4, v21) > *((uint32_t *)a4 + 2) )
    {
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        a4,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v21,
        0);
      v23 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(v38, v21, 0xFFFFFFFF);
      if ( v23 != -1 )
        break;
    }
    v9 = *a3;
LABEL_35:
    v22 = *(uint32_t *)(v9 + v41 + 4);
    if ( v22 == -1 )
      goto LABEL_28;
    v41 = 8 * v22;
    v21 = *(uint32_t *)(v9 + 8 * v22);
    if ( a1 == v21 )
      return 1;
  }
  v40 = 8 * v23;
  v24 = *(uint32_t *)(*a3 + 8 * v23);
  if ( a1 == v24 )
    return 1;
  while ( 1 )
  {
    if ( (signed int)hkMapBase_unsigned_long_unsigned_l_393416::findKey(a4, v24) > *((uint32_t *)a4 + 2) )
    {
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        a4,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v24,
        0);
      v26 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(v38, v24, 0xFFFFFFFF);
      if ( v26 != -1 )
        break;
    }
    v9 = *a3;
LABEL_42:
    v25 = *(uint32_t *)(v9 + v40 + 4);
    if ( v25 == -1 )
      goto LABEL_35;
    v40 = 8 * v25;
    v24 = *(uint32_t *)(v9 + 8 * v25);
    if ( a1 == v24 )
      return 1;
  }
  v39 = 8 * v26;
  if ( a1 == *(uint32_t *)(*a3 + 8 * v26) )
    return 1;
  v27 = *(uint32_t *)(*a3 + 8 * v26);
  while ( 1 )
  {
    v35 = v27;
    if ( (signed int)hkMapBase_unsigned_long_unsigned_l_393416::findKey(a4, v27) > *((uint32_t *)a4 + 2) )
    {
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        a4,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v35,
        0);
      v29 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(v38, v35, 0xFFFFFFFF);
      if ( v29 != -1 )
        break;
    }
    v9 = *a3;
LABEL_49:
    v28 = *(uint32_t *)(v9 + v39 + 4);
    if ( v28 == -1 )
      goto LABEL_42;
    v27 = *(uint32_t *)(v9 + 8 * v28);
    v39 = 8 * v28;
    if ( a1 == v27 )
      return 1;
  }
  v37 = 8 * v29;
  v30 = *(uint32_t *)(*a3 + 8 * v29);
  if ( a1 == v30 )
    return 1;
  while ( 1 )
  {
    v36 = v30;
    if ( (signed int)hkMapBase_unsigned_long_unsigned_l_393416::findKey(a4, v30) > *((uint32_t *)a4 + 2) )
    {
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        a4,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v36,
        0);
      v32 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(v38, v36, 0xFFFFFFFF);
      if ( v32 != -1 )
        break;
    }
    v9 = *a3;
LABEL_56:
    v31 = *(uint32_t *)(v9 + v37 + 4);
    if ( v31 == -1 )
      goto LABEL_49;
    v37 = 8 * v31;
    v30 = *(uint32_t *)(v9 + 8 * v31);
    if ( a1 == v30 )
      return 1;
  }
  v33 = 8 * v32;
  if ( a1 == *(uint32_t *)(*a3 + 8 * v32) )
    return 1;
  while ( sub_18B7040((int)(uintptr_t)(a3), a4) == 0 )
  {
    v9 = *a3;
    v34 = *(uint32_t *)(*a3 + v33 + 4);
    if ( v34 == -1 )
      goto LABEL_56;
    v33 = 8 * v34;
    if ( a1 == *(uint32_t *)(v9 + 8 * v34) )
      return 1;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_18B7CC0  (binary VA: 0x18b7cc0)
// Original: sub_18B7CC0
// ----------------------------------------------------------------------------
hkVersionPatchManager::Self * sub_18B7CC0()
{
  int address;
  hkVersionPatchManager::Self *v1;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v1 = (hkVersionPatchManager::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                  *(uint32_t *)(*(uint32_t *)address + 44),
                                  44);
  hkVersionPatchManager::Construct(v1);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: isValidPatch  (binary VA: 0x18b7f90)
// Original: isValidPatch
// ----------------------------------------------------------------------------
bool isValidPatch(uint32_t *a1)
{
  bool result;

  if ( a1[2] == -1 )
  {
    result = false;
    if ( *a1 == 0 && a1[3] != -1 && a1[1] != 0 )
      return true;
  }
  else if ( a1[3] == -1 )
  {
    result = false;
    if ( *a1 != 0 && a1[1] == 0 )
      return true;
  }
  else
  {
    return *a1 != 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_18B9B70  (binary VA: 0x18b9b70)
// Original: sub_18B9B70
// ----------------------------------------------------------------------------
uint32_t * sub_18B9B70()
{
  dword_2139D90 = (int)(uintptr_t)("hkVersionPatchManager");
  dword_2139D94 = (int)(uintptr_t)(sub_18B7CC0);
  dword_2139D9C = (int)(uintptr_t)(&hkSingleton<hkVersionPatchManager::Self>::s_instance);
  dword_2139D98 = hkSingletonInitList[0];
  hkSingletonInitList[0] = (uint32_t)(uintptr_t)(&dword_2139D90);
  return hkSingletonInitList;
}

// ----------------------------------------------------------------------------
// Function: sub_18BACC0  (binary VA: 0x18bacc0)
// Original: sub_18BACC0
// ----------------------------------------------------------------------------
int * sub_18BACC0()
{
  int v0;
  int32_t v1; // kr00_4

  if ( byte_2139DD0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_2139DD0) != 0 )
  {
    *(uint16_t *)(unk_2139DB4) = (uint16_t)(uintptr_t)(-65535);
    dword_2139DB0 = (int)((uint32_t)(uintptr_t)&off_20A7F08);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_2139DD0);
    __cxa_atexit((void (*)(void *))hkSerializeDeprecated::Destroy, &dword_2139DB0, &unk_20D1280);
  }
  if ( word_2139DB6 != 0 )
  {
    do
    {
      v1 = *(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_7FDB4)->st_info + (uint32_t)(uintptr_t)(dword_20B9FF4));
      HIWORD(v0) = HIWORD(v1);
      LOWORD(v0) = 0;
    }
    while ( v1 != __sync_val_compare_and_swap(
                    (volatile int32_t *)&unk_2139DB4,
                    v1,
                    v0 | (uint16_t)(v1 + 1)) );
  }
  return (int *)(&dword_2139DB0);
}

// ----------------------------------------------------------------------------
// Function: sub_18BAE80  (binary VA: 0x18bae80)
// Original: sub_18BAE80
// ----------------------------------------------------------------------------
uint32_t * sub_18BAE80()
{
  dword_2139DC0 = (int)(uintptr_t)("hkSerializeDeprecated");
  dword_2139DC4 = (int)(uintptr_t)(sub_18BACC0);
  dword_2139DCC = (int)(uintptr_t)(&hkSingleton<hkSerializeDeprecated::Self>::s_instance);
  dword_2139DC8 = hkSingletonInitList[0];
  hkSingletonInitList[0] = (uint32_t)(uintptr_t)(&dword_2139DC0);
  return hkSingletonInitList;
}

// ----------------------------------------------------------------------------
// Function: sub_18BC720  (binary VA: 0x18bc720)
// Original: sub_18BC720
// ----------------------------------------------------------------------------
uint32_t * sub_18BC720(uint32_t *a1, int a2, int a3, hkIArchive::Self *a4)
{
  int v4;
  hkIArchive::Self *v5;
  int v6;
  int v7;
  int v8;
  int16_t v9;
  unsigned int v10;
  unsigned int v11;
  int Key;
  int **address;
  int *v14;
  uint8_t *v15;
  signed int v16;
  signed int v17;
  unsigned int v18;
  int v19;
  int v20;
  uint8_t v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  signed int v27;
  int *v28;
  int v29;
  signed int v30;
  int *v31;
  unsigned int v32;
  signed int v33;
  int *v34;
  int v35;
  int v37;
  signed int v38;
  hkLifoAllocator::Self *v39;
  char *v40;
  char *v41;
  int v42;
  int v43;
  hkLifoAllocator::Self *v44;
  signed int v45;
  char *v46;
  hkErrStream::Self *v47;
  char *v48;
  int v49;
  int v50;
  char *v51;
  hkTypeManager::Type::Self *v52;
  int v53;
  uint32_t *v54;
  int v55;
  int v56;
  int v57;
  int16_t v58;
  int v59;
  uint32_t *v60;
  int v61;
  int v62;
  bool v63;
  uint32_t *v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  char v70;
  hkTypeManager::Type::Self *v71;
  uint32_t *v72;
  int v73;
  int16_t v74;
  int v75;
  char v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int16_t v81;
  signed int v82;
  int v83;
  char v84;
  int v85;
  uint32_t *v86;
  int v87;
  uint32_t *v88;
  int v89;
  int v90;
  char v91;
  void *v92;
  char v93; // si
  uint64_t v94; // rax
  uint64_t v95; // rax
  int v96;
  uint32_t *v97;
  uint32_t *v98;
  int i;
  uint32_t *v100;
  int v101;
  int v102;
  int **v103;
  int v104;
  int v105;
  char v106;
  hkString::Self *v107;
  hkTypeManager::Type::Self *v108;
  int TypeName;
  int v110;
  int v111;
  int v112;
  int v113;
  int TupleSize;
  hkErrStream::Self *v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef hkErrStream::Self *_g4_t_v121;
  typedef hkErrStream::Self *_g4_t_v122;
  typedef hkErrStream::Self *_g4_t_v123;
  typedef char _g4_t_v124;
  typedef char _g4_t_v125;
  typedef char _g4_t_v126;
  typedef int _g4_t_v127;
  typedef hkErrStream::Self *_g4_t_v128;
  typedef hkTypeManager::Self *_g4_t_v129;
  typedef char _g4_t_v130;
  typedef hkErrStream::Self *_g4_t_v131;
  typedef hkErrStream::Self *_g4_t_v132;
  typedef hkErrStream::Self *_g4_t_v133;
  typedef int **_g4_t_v135;
  typedef uint32_t *_g4_t_v136;
  typedef int _g4_t_v137;
  typedef char _g4_t_v138;
  typedef int _g4_t_v139;
  typedef hkIArchive::Self *_g4_t_v141;
  typedef hkIArchive::Self *_g4_t_v142;
  typedef char _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef char *_g4_t_v146;
  typedef hkIArchive::Self *_g4_t_v147;
  typedef int _g4_t_v148;
  typedef int _g4_t_v149;
  typedef char _g4_t_v150;
  typedef uint64_t _g4_t_v151 __attribute__((aligned(1)));
  typedef int (*_g4_t_v152)(uint32_t, int);
  typedef void *_g4_t_v153;
  typedef char _g4_t_v154;
  typedef hkString::Self *_g4_t_v155;
  typedef char _g4_t_v156[4];
  typedef uint32_t *_g4_t_v157;
  typedef hkIArchive::Self *_g4_t_v158;
  typedef uint32_t *_g4_t_v159;
  typedef uint32_t *_g4_t_v160;
  typedef int _g4_t_v161;
  typedef uint8_t *_g4_t_v162;
  typedef unsigned int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef void *_g4_t_v165;
  typedef int _g4_t_v166;
  typedef char *_g4_t_v167;
  typedef int _g4_t_v168;
  typedef signed int _g4_t_v169;
  typedef void *_g4_t_v170;
  typedef int _g4_t_v171;
  typedef int _g4_t_v172;
  typedef int _g4_t_v173;
  typedef int _g4_t_v174;
  typedef void *_g4_t_v175;
  typedef int _g4_t_v176;
  typedef int64_t _g4_t_v177 __attribute__((aligned(1)));
  typedef int _g4_t_Array;
  typedef int _g4_t_v179;
  typedef int *_g4_t_v180;
  enum : size_t {
    _g4_s0 = 832u,
    _g4_s1 = (4u + sizeof(_g4_t_v116)) > _g4_s0 ? (4u + sizeof(_g4_t_v116)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v117)) > _g4_s1 ? (8u + sizeof(_g4_t_v117)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v118)) > _g4_s2 ? (8u + sizeof(_g4_t_v118)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v119)) > _g4_s3 ? (8u + sizeof(_g4_t_v119)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v120)) > _g4_s4 ? (12u + sizeof(_g4_t_v120)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v121)) > _g4_s5 ? (16u + sizeof(_g4_t_v121)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v122)) > _g4_s6 ? (16u + sizeof(_g4_t_v122)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v123)) > _g4_s7 ? (28u + sizeof(_g4_t_v123)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v124)) > _g4_s8 ? (28u + sizeof(_g4_t_v124)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v125)) > _g4_s9 ? (28u + sizeof(_g4_t_v125)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v126)) > _g4_s10 ? (32u + sizeof(_g4_t_v126)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v127)) > _g4_s11 ? (32u + sizeof(_g4_t_v127)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v128)) > _g4_s12 ? (32u + sizeof(_g4_t_v128)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v129)) > _g4_s13 ? (36u + sizeof(_g4_t_v129)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v130)) > _g4_s14 ? (36u + sizeof(_g4_t_v130)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v131)) > _g4_s15 ? (36u + sizeof(_g4_t_v131)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v132)) > _g4_s16 ? (36u + sizeof(_g4_t_v132)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v133)) > _g4_s17 ? (36u + sizeof(_g4_t_v133)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v135)) > _g4_s18 ? (56u + sizeof(_g4_t_v135)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v136)) > _g4_s19 ? (60u + sizeof(_g4_t_v136)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v137)) > _g4_s20 ? (64u + sizeof(_g4_t_v137)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v138)) > _g4_s21 ? (64u + sizeof(_g4_t_v138)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v139)) > _g4_s22 ? (64u + sizeof(_g4_t_v139)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v141)) > _g4_s23 ? (72u + sizeof(_g4_t_v141)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v142)) > _g4_s24 ? (72u + sizeof(_g4_t_v142)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v143)) > _g4_s25 ? (72u + sizeof(_g4_t_v143)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v144)) > _g4_s26 ? (76u + sizeof(_g4_t_v144)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v145)) > _g4_s27 ? (76u + sizeof(_g4_t_v145)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v146)) > _g4_s28 ? (76u + sizeof(_g4_t_v146)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v147)) > _g4_s29 ? (76u + sizeof(_g4_t_v147)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v148)) > _g4_s30 ? (76u + sizeof(_g4_t_v148)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v149)) > _g4_s31 ? (76u + sizeof(_g4_t_v149)) : _g4_s31,
    _g4_s33 = (76u + sizeof(_g4_t_v150)) > _g4_s32 ? (76u + sizeof(_g4_t_v150)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v151)) > _g4_s33 ? (76u + sizeof(_g4_t_v151)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v152)) > _g4_s34 ? (76u + sizeof(_g4_t_v152)) : _g4_s34,
    _g4_s36 = (76u + sizeof(_g4_t_v153)) > _g4_s35 ? (76u + sizeof(_g4_t_v153)) : _g4_s35,
    _g4_s37 = (76u + sizeof(_g4_t_v154)) > _g4_s36 ? (76u + sizeof(_g4_t_v154)) : _g4_s36,
    _g4_s38 = (84u + sizeof(_g4_t_v155)) > _g4_s37 ? (84u + sizeof(_g4_t_v155)) : _g4_s37,
    _g4_s39 = (88u + sizeof(_g4_t_v156)) > _g4_s38 ? (88u + sizeof(_g4_t_v156)) : _g4_s38,
    _g4_s40 = (92u + sizeof(_g4_t_v157)) > _g4_s39 ? (92u + sizeof(_g4_t_v157)) : _g4_s39,
    _g4_s41 = (100u + sizeof(_g4_t_v158)) > _g4_s40 ? (100u + sizeof(_g4_t_v158)) : _g4_s40,
    _g4_s42 = (104u + sizeof(_g4_t_v159)) > _g4_s41 ? (104u + sizeof(_g4_t_v159)) : _g4_s41,
    _g4_s43 = (108u + sizeof(_g4_t_v160)) > _g4_s42 ? (108u + sizeof(_g4_t_v160)) : _g4_s42,
    _g4_s44 = (112u + sizeof(_g4_t_v161)) > _g4_s43 ? (112u + sizeof(_g4_t_v161)) : _g4_s43,
    _g4_s45 = (124u + sizeof(_g4_t_v162)) > _g4_s44 ? (124u + sizeof(_g4_t_v162)) : _g4_s44,
    _g4_s46 = (128u + sizeof(_g4_t_v163)) > _g4_s45 ? (128u + sizeof(_g4_t_v163)) : _g4_s45,
    _g4_s47 = (132u + sizeof(_g4_t_v164)) > _g4_s46 ? (132u + sizeof(_g4_t_v164)) : _g4_s46,
    _g4_s48 = (136u + sizeof(_g4_t_v165)) > _g4_s47 ? (136u + sizeof(_g4_t_v165)) : _g4_s47,
    _g4_s49 = (140u + sizeof(_g4_t_v166)) > _g4_s48 ? (140u + sizeof(_g4_t_v166)) : _g4_s48,
    _g4_s50 = (156u + sizeof(_g4_t_v167)) > _g4_s49 ? (156u + sizeof(_g4_t_v167)) : _g4_s49,
    _g4_s51 = (160u + sizeof(_g4_t_v168)) > _g4_s50 ? (160u + sizeof(_g4_t_v168)) : _g4_s50,
    _g4_s52 = (164u + sizeof(_g4_t_v169)) > _g4_s51 ? (164u + sizeof(_g4_t_v169)) : _g4_s51,
    _g4_s53 = (168u + sizeof(_g4_t_v170)) > _g4_s52 ? (168u + sizeof(_g4_t_v170)) : _g4_s52,
    _g4_s54 = (172u + sizeof(_g4_t_v171)) > _g4_s53 ? (172u + sizeof(_g4_t_v171)) : _g4_s53,
    _g4_s55 = (188u + sizeof(_g4_t_v172)) > _g4_s54 ? (188u + sizeof(_g4_t_v172)) : _g4_s54,
    _g4_s56 = (192u + sizeof(_g4_t_v173)) > _g4_s55 ? (192u + sizeof(_g4_t_v173)) : _g4_s55,
    _g4_s57 = (196u + sizeof(_g4_t_v174)) > _g4_s56 ? (196u + sizeof(_g4_t_v174)) : _g4_s56,
    _g4_s58 = (200u + sizeof(_g4_t_v175)) > _g4_s57 ? (200u + sizeof(_g4_t_v175)) : _g4_s57,
    _g4_s59 = (204u + sizeof(_g4_t_v176)) > _g4_s58 ? (204u + sizeof(_g4_t_v176)) : _g4_s58,
    _g4_s60 = (220u + sizeof(_g4_t_v177)) > _g4_s59 ? (220u + sizeof(_g4_t_v177)) : _g4_s59,
    _g4_s61 = (228u + sizeof(_g4_t_Array)) > _g4_s60 ? (228u + sizeof(_g4_t_Array)) : _g4_s60,
    _g4_s62 = (232u + sizeof(_g4_t_v179)) > _g4_s61 ? (232u + sizeof(_g4_t_v179)) : _g4_s61,
    _g4_s63 = (740u + sizeof(_g4_t_v180)) > _g4_s62 ? (740u + sizeof(_g4_t_v180)) : _g4_s62
  };
  alignas(16) uint8_t _g4_sf[_g4_s63];
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 4u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 8u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 8u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 8u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 12u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 16u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 16u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 28u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 28u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 28u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 32u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 32u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 32u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 36u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 36u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 36u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 36u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 36u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 56u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 60u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 64u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 64u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 64u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 72u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 72u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 72u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 76u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 76u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 76u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 76u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 76u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 76u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 76u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 76u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 76u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 76u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 76u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 84u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 88u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 92u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 100u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 104u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 108u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 112u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 124u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 128u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 132u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 136u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 140u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 156u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 160u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 164u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 168u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 172u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 188u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 192u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 196u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 200u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 204u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 220u);
  _g4_t_Array &Array = *reinterpret_cast<_g4_t_Array *>(_g4_sf + 228u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 232u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 740u);

  v180 = &a3;
  v4 = a3;
  v141 = a4;
  if ( a3 != 0 )
  {
    if ( a3 != 5 )
      goto LABEL_3;
  }
  else
  {
    v147 = (hkIArchive::Self *)(a2 + 4);
    hkIArchive::readArrayGeneric((hkIArchive::Self *)(a2 + 4), &v177, 1, 1);
    v4 = (uint8_t)(v177 & 0x7F) >> 1;
    v138 = v177 & 1;
    if ( (v177 & 0x80u) != 0LL )
    {
      v75 = 6;
      do
      {
        hkIArchive::readArrayGeneric(v147, &v177, 1, 1);
        v76 = v75;
        v75 += 7;
        v4 |= (v177 & 0x7F) << v76;
      }
      while ( (v177 & 0x80u) != 0LL );
    }
    if ( v138 != 0 )
      v4 = -v4;
    if ( v4 != 5 )
    {
LABEL_3:
      if ( v4 == 6 )
      {
        *a1 = 0;
        return a1;
      }
      v5 = v141;
      if ( v141 != nullptr )
      {
        v142 = (hkIArchive::Self *)(a2 + 4);
      }
      else
      {
        v142 = (hkIArchive::Self *)(a2 + 4);
        hkIArchive::readArrayGeneric((hkIArchive::Self *)(a2 + 4), &v177, 1, 1);
        v112 = (uint8_t)(v177 & 0x7F) >> 1;
        v154 = v177 & 1;
        if ( (v177 & 0x80u) != 0LL )
        {
          v113 = 6;
          do
          {
            v139 = v113;
            hkIArchive::readArrayGeneric(v142, &v177, 1, 1);
            v113 = v139 + 7;
            v112 |= (v177 & 0x7F) << v139;
          }
          while ( (v177 & 0x80u) != 0LL );
        }
        if ( v154 != 0 )
          v112 = -v112;
        v5 = *(hkIArchive::Self **)(*(uint32_t *)(a2 + 28) + 4 * v112);
      }
      v158 = v5;
      v137 = G4_VCALL<int>(v5, 40);
      v6 = (*(int (**)(uint32_t, hkIArchive::Self **, uint32_t))(**(uint32_t **)(a2 + 20) + 24))(
             *(uint32_t *)(a2 + 20),
             &v158,
             0);
      v7 = v6;
      v136 = (uint32_t *)v6;
      if ( v6 != 0 )
      {
        v8 = *(uint32_t *)(v6 + 4);
        ++*(uint32_t *)(v6 + 8);
        v9 = v8;
        LOWORD(v8) = 0;
        *(uint32_t *)(v7 + 4) = v8 | (uint16_t)(v9 + 1);
      }
      if ( v4 == 3 )
        goto LABEL_13;
      if ( v4 == 4 )
      {
        v10 = *(uint32_t *)(a2 + 60);
        v11 = v10;
        if ( v10 == (*(uint32_t *)(a2 + 64) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)(a2 + 56),
            &loc_4,
            v117);
          v11 = *(uint32_t *)(a2 + 60);
        }
        *(uint32_t *)(*(uint32_t *)(a2 + 56) + 4 * v11) = (uint32_t)(uintptr_t)(v136);
        ++*(uint32_t *)(a2 + 60);
        Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
                (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(a2 + 68),
                v10);
        v144 = Key;
        if ( Key > *(uint32_t *)(a2 + 76) )
        {
LABEL_13:
          address = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
          v135 = address;
          goto LABEL_14;
        }
        v96 = 0;
        v97 = *(uint32_t **)(*(uint32_t *)(a2 + 68) + 8 * Key + 4);
        if ( (int)v97[1] > 0 )
        {
          do
          {
            v98 = (uint32_t *)(*v97 + 8 * v96++);
            G4_VCALL<void>(*v98, 92, v98[1], v136);
          }
          while ( v96 < v97[1] );
        }
        for ( i = 0; i < v97[4]; ++i )
        {
          v100 = (uint32_t *)(v97[3] + 8 * i);
          G4_VCALL<void>(*v100, 72, v100[1], v136);
        }
        v101 = v97[5];
        v97[4] = 0;
        if ( v101 >= 0 )
          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v97[3],
            8 * v101);
        v102 = v97[2];
        v97[3] = 0;
        v97[5] = 0x80000000;
        v97[1] = 0;
        if ( v102 >= 0 )
          (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            *v97,
            8 * v102);
        *v97 = 0;
        v97[2] = 0x80000000;
        v103 = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        G4_VCALL<void>((*v103)[11], 12, v97, 24);
        hkMapBase_unsigned_long_unsigned_l_393416::remove(a2 + 68, v144);
        v135 = v103;
        address = v103;
      }
      else
      {
        hkErrStream::Construct((hkErrStream::Self *)&v172, (hkString::Self *)&v177, 512);
        hkOstream::opShl((int)(uintptr_t)(&v172), (hkString::Self *)"corrupt file");
        if ( hkError::messageError(
               (hkError::Self *)0x484994D5,
               (int)(uintptr_t)(&v177),
               "Tagfile/Binary/hkBinaryTagfileReader.cpp",
               (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_2C4)->st_size,
               v120) != 0 )
          __builtin_debugtrap();
        hkErrStream::Destroy((hkErrStream::Self *)&v172);
        address = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v135 = address;
      }
LABEL_14:
      v14 = *address;
      v166 = 128;
      v164 = 0x80000000;
      v162 = nullptr;
      v163 = 0;
      v15 = (uint8_t *)v14[3];
      if ( v14[2] > 127 && (unsigned int)(uintptr_t)(v15 + 128) <= v14[4] )
        v14[3] = (int)(uintptr_t)(v15 + 128);
      else
        v15 = (uint8_t *)hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v14, 128);
      v162 = v15;
      v165 = v15;
      v164 = -2147483520;
      v16 = (v137 + 7) & 0xFFFFFFF8;
      v17 = v16 + 7;
      if ( v137 + 7 >= 0 )
        v17 = (v137 + 7) & 0xFFFFFFF8;
      v145 = v17 >> 3;
      if ( v16 > 128 )
      {
        v18 = 256;
        if ( v16 > 255 )
          v18 = (v137 + 7) & 0xFFFFFFF8;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v156,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          &v162,
          v18,
          1);
      }
      v163 = (v137 + 7) & 0xFFFFFFF8;
      hkIArchive::readArrayGeneric(v142, &v177, 1, v145);
      if ( v145 > 0 )
      {
        v19 = 1;
        v20 = 0;
        do
        {
          v21 = *((uint8_t *)&v177 + v20);
          v162[8 * v20++] = v21 & 1;
          v162[v19] = (v21 & 2) != 0;
          v162[v19 + 1] = (v21 & 4) != 0;
          v162[v19 + 2] = (v21 & 8) != 0;
          v162[v19 + 3] = (v21 & 0x10) != 0;
          v162[v19 + 4] = (v21 & 0x20) != 0;
          v162[v19 + 5] = (v21 & 0x40) != 0;
          v162[v19 + 6] = v21 >> 7;
          v19 += 8;
        }
        while ( v20 != v145 );
      }
      if ( v137 > (v164 & 0x3FFFFFFF) )
      {
        v37 = 2 * (v164 & 0x3FFFFFFF);
        if ( v137 >= v37 )
          v37 = v137;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v156,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          &v162,
          v37,
          1);
        v163 = v137;
        v167 = nullptr;
        v168 = 0;
        v169 = 0x80000000;
        v171 = v137;
      }
      else
      {
        v167 = nullptr;
        v163 = v137;
        v168 = 0;
        v169 = 0x80000000;
        v171 = v137;
        if ( v137 == 0 )
        {
          v167 = nullptr;
          v22 = 0x80000000;
          v169 = 0x80000000;
          v170 = nullptr;
          goto LABEL_29;
        }
      }
      v38 = (16 * v137 + 127) & 0xFFFFFF80;
      v39 = (hkLifoAllocator::Self *)*v135;
      v40 = (char *)(*v135)[3];
      if ( v38 <= (*v135)[2] && (unsigned int)(uintptr_t)(&v40[v38]) <= *((uint32_t *)v39 + 4) )
        *((uint32_t *)v39 + 3) = (uint32_t)(uintptr_t)(&v40[v38]);
      else
        v40 = (char *)hkLifoAllocator::allocateFromNewSlab(v39, (16 * v137 + 127) & 0xFFFFFF80);
      v23 = v137;
      v167 = v40;
      v170 = v40;
      v41 = &v40[16 * v168];
      v22 = v137 | 0x80000000;
      v169 = v137 | 0x80000000;
      if ( v137 - v168 > 0 )
      {
        v42 = 16 * (v137 - v168);
        v43 = 0;
        do
        {
          *(__m128i *)&v41[v43] = g4_m128_from<__m128i>(0LL);
          v43 += 16;
        }
        while ( v43 != v42 );
LABEL_29:
        v23 = v137;
      }
      v168 = v23;
      G4_VCALL<void>(v158, 52, &v167);
      v172 = 0;
      v173 = 0;
      v174 = 0x80000000;
      v176 = v23;
      if ( v23 == 0 )
      {
        v174 = v22;
        v175 = nullptr;
        v173 = 0;
        G4_VCALL<void>(v136, 124, &v172);
LABEL_32:
        *a1 = (uint32_t)(uintptr_t)(v136);
        v24 = v136[1];
        LOWORD(v24) = 0;
        v25 = v24 | (uint16_t)(v136[1] + 1);
        v26 = 0;
        v136[1] = v25;
        ++v136[2];
        if ( (void *)v172 != v175 )
          v26 = v173;
        v173 = v26;
        v27 = (4 * v176 + 127) & 0xFFFFFF80;
        v28 = *v135;
        if ( v27 > (*v135)[2] || (void *)v28[3] != (char *)v175 + v27 || v175 == (void *)v28[5] )
          hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)v28, v175, (4 * v176 + 127) & 0xFFFFFF80);
        else
          v28[3] = (int)(uintptr_t)(v175);
        v173 = 0;
        if ( v174 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v172,
            4 * v174);
        v29 = 0;
        if ( v167 != v170 )
          v29 = v168;
        v168 = v29;
        v172 = 0;
        v174 = 0x80000000;
        v30 = (16 * v171 + 127) & 0xFFFFFF80;
        v31 = *v135;
        if ( v30 > (*v135)[2] || (void *)v31[3] != (char *)v170 + v30 || v170 == (void *)v31[5] )
          hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)v31, v170, (16 * v171 + 127) & 0xFFFFFF80);
        else
          v31[3] = (int)(uintptr_t)(v170);
        v168 = 0;
        if ( v169 >= 0 )
          (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v167,
            16 * v169);
        v32 = 0;
        if ( v162 != v165 )
          v32 = v163;
        v169 = 0x80000000;
        v163 = v32;
        v167 = nullptr;
        v33 = (v166 + 127) & 0xFFFFFF80;
        v34 = *v135;
        if ( v33 > (*v135)[2] || (void *)v34[3] != (char *)v165 + v33 || v165 == (void *)v34[5] )
          hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)v34, v165, (v166 + 127) & 0xFFFFFF80);
        else
          v34[3] = (int)(uintptr_t)(v165);
        v163 = 0;
        if ( v164 >= 0 )
          (*(void (**)(uint32_t *, uint8_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v162,
            v164 & 0x3FFFFFFF);
        v162 = nullptr;
        v164 = 0x80000000;
        if ( v136 != nullptr )
        {
          v35 = v136[1];
          LOWORD(v35) = 0;
          v136[1] = v35 | (uint16_t)(v136[1] - 1);
          v155 = (hkString::Self *)v136[2];
          v136[2] = (uint32_t)(uintptr_t)((char *)v155 - 1);
          if ( v155 == (hkString::Self *)((char *)&dword_0 + 1) )
            G4_VCALL<void>(v136, 4);
        }
        return a1;
      }
      v44 = (hkLifoAllocator::Self *)*v135;
      v45 = (4 * v137 + 127) & 0xFFFFFF80;
      v46 = (char *)(*v135)[3];
      if ( v45 <= (*v135)[2] && (unsigned int)(uintptr_t)(&v46[v45]) <= *((uint32_t *)v44 + 4) )
        *((uint32_t *)v44 + 3) = (uint32_t)(uintptr_t)(&v46[v45]);
      else
        v46 = (char *)hkLifoAllocator::allocateFromNewSlab(v44, (4 * v137 + 127) & 0xFFFFFF80);
      v172 = (int)(uintptr_t)(v46);
      v175 = v46;
      v174 = v22;
      v173 = v137;
      G4_VCALL<void>(v136, 124, &v172);
      if ( v137 <= 0 )
        goto LABEL_32;
      v47 = nullptr;
      while ( 1 )
      {
        v48 = v167;
        if ( *((uint8_t *)v47 + (uint32_t)(uintptr_t)(v162)) == 0 )
          goto LABEL_72;
        v49 = *(uint32_t *)(v172 + 4 * (uint32_t)(uintptr_t)(v47));
        v160 = v136;
        v161 = v49;
        v50 = v136[1];
        LOWORD(v50) = 0;
        LOWORD(v49) = v136[1] + 1;
        v157 = v136;
        ++v136[2];
        v136[1] = v50 | (uint16_t)v49;
        v51 = &v48[16 * (uint32_t)(uintptr_t)(v47)];
        v52 = *((hkTypeManager::Type::Self **)v51 + 2);
        v53 = *(uint32_t *)v52;
        if ( *(uint32_t *)v52 != 9 )
          break;
        v54 = *((uint32_t **)v52 + 1);
        if ( *v54 == 3 )
        {
          v55 = *((uint32_t *)v52 + 2);
          if ( (v55 & 0xFFFFFFF7) == 4 || v55 == 8 || v55 == 16 )
          {
LABEL_92:
            if ( *v54 != 3 || ((v67 = *((uint32_t *)v52 + 2)) & 0xFFFFFFF7) != 4 && v67 != 8 && v67 != 16 )
            {
LABEL_96:
              v64 = v136;
LABEL_86:
              v65 = v64[1];
              LOWORD(v65) = 0;
              v66 = v65 | (uint16_t)(v64[1] - 1);
              v63 = v64[2]-- == 1;
              v64[1] = v66;
              if ( v63 )
                G4_VCALL<void>(v64, 4);
              goto LABEL_72;
            }
            TupleSize = hkTypeManager::Type::getTupleSize(v52);
            if ( TupleSize > 0 )
            {
              v115 = nullptr;
              do
              {
                v133 = (hkErrStream::Self *)TupleSize;
                hkIArchive::readArrayGeneric(v142, &v159, 4, 1);
                *((uint32_t *)&v177 + (uint32_t)(uintptr_t)(v115)) = (uint32_t)(uintptr_t)(v159);
                v115 = (hkErrStream::Self *)((char *)v115 + 1);
                TupleSize = (int)(uintptr_t)(v133);
              }
              while ( v115 != v133 );
            }
            G4_VCALL<void>(v160, 92, v161, &v177, TupleSize);
            v64 = v157;
            goto LABEL_85;
          }
        }
        v56 = G4_VCALL<int>(v136, 44, v161);
        LODWORD(v177) = v56;
        if ( v56 != 0 )
        {
          v57 = *(uint32_t *)(v56 + 4);
          ++*(uint32_t *)(v56 + 8);
          v58 = v57;
          LOWORD(v57) = 0;
          *(uint32_t *)(v56 + 4) = v57 | (uint16_t)(v58 + 1);
        }
        v59 = hkTypeManager::Type::getTupleSize(v52);
        sub_18BDF90(v59);
        v60 = (uint32_t *)v177;
        if ( (uint32_t)v177 != 0 )
          goto LABEL_82;
LABEL_84:
        v64 = v157;
LABEL_85:
        if ( v64 != nullptr )
          goto LABEL_86;
LABEL_72:
        v47 = (hkErrStream::Self *)((char *)v47 + 1);
        if ( v47 == (hkErrStream::Self *)v137 )
          goto LABEL_32;
      }
      if ( v53 != 8 )
      {
        switch ( v53 )
        {
          case 2:
            hkIArchive::readArrayGeneric(v142, &v177, 1, 1);
            G4_VCALL<void>(v160, 96, v161, (uint8_t)v177);
            v64 = v157;
            goto LABEL_85;
          case 3:
            hkIArchive::readArrayGeneric(v142, &v177, 4, 1);
            G4_VCALL<void>(v160, 84, v161, v177);
            v64 = v157;
            goto LABEL_85;
          case 4:
            hkIArchive::readArrayGeneric(v142, &v177, 1, 1);
            v151 = (uint64_t)(v177 & 0x7F) >> 1;
            v124 = v177 & 1;
            if ( (v177 & 0x80u) != 0LL )
            {
              v121 = v47;
              v93 = 6;
              do
              {
                hkIArchive::readArrayGeneric(v142, &v177, 1, 1);
                v94 = (uint64_t)(v177 & 0x7F) << v93;
                v93 += 7;
                HIDWORD(v94) |= HIDWORD(v151);
                v151 = (unsigned int)v151 | v94;
              }
              while ( (v177 & 0x80u) != 0LL );
              v47 = v121;
            }
            v95 = v151;
            if ( v124 != 0 )
              v95 = -(int64_t)v151;
            G4_VCALL<void>(v160, 100, v161, v95, HIDWORD(v95));
            v64 = v157;
            goto LABEL_85;
          case 5:
            hkIArchive::readArrayGeneric(v142, &v177, 1, 1);
            v89 = (uint8_t)(v177 & 0x7F) >> 1;
            v150 = v177 & 1;
            if ( (v177 & 0x80u) != 0LL )
            {
              v131 = v47;
              v90 = 6;
              do
              {
                hkIArchive::readArrayGeneric(v142, &v177, 1, 1);
                v91 = v90;
                v90 += 7;
                v89 |= (v177 & 0x7F) << v91;
              }
              while ( (v177 & 0x80u) != 0LL );
              v47 = v131;
            }
            if ( v150 != 0 )
              v89 = -v89;
            if ( v89 > 0 )
            {
              v153 = (void *)hkMemoryRouter::easyAlloc(
                               (hkMemoryRouter::Self *)(*v135)[11],
                               (hkMemoryAllocator::Self *)(v89 + 1),
                               v116);
              hkIArchive::readRaw(v142, v153, v89);
              v92 = v153;
              *((uint8_t *)v153 + v89) = 0;
              v111 = *(uint32_t *)(a2 + 44);
              if ( v111 == (*(uint32_t *)(a2 + 48) & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)(a2 + 40),
                  &loc_4,
                  v119);
                v111 = *(uint32_t *)(a2 + 44);
                v92 = v153;
              }
              *(uint32_t *)(*(uint32_t *)(a2 + 40) + 4 * v111) = (uint32_t)(uintptr_t)(v92);
              ++*(uint32_t *)(a2 + 44);
            }
            else
            {
              v92 = *(void **)(*(uint32_t *)(a2 + 40) - 4 * v89);
            }
            G4_VCALL<void>(v160, 80, v161, v92);
            goto LABEL_84;
          case 6:
            if ( *(int *)a2 > 1 )
            {
              v152 = *(int (**)(uint32_t, int))(**(uint32_t **)(a2 + 20) + 44);
              TypeName = hkTypeManager::Type::getTypeName(v52);
              v110 = v152(*(uint32_t *)(a2 + 20), TypeName);
              sub_18BC720(3, v110);
              G4_VCALL<void>(v160, 72, v161, v177);
              v60 = (uint32_t *)v177;
              if ( (uint32_t)v177 != 0 )
                goto LABEL_82;
            }
            else
            {
              v149 = v161;
LABEL_140:
              sub_18BC720(0, 0);
              G4_VCALL<void>(v136, 72, v149, v177);
              v60 = (uint32_t *)v177;
              if ( (uint32_t)v177 != 0 )
                goto LABEL_82;
            }
            break;
          case 7:
            v149 = v161;
            if ( *(int *)a2 <= 1 )
              goto LABEL_140;
            hkIArchive::readArrayGeneric(v142, &v177, 1, 1);
            v82 = (uint8_t)(v177 & 0x7F) >> 1;
            v130 = v177 & 1;
            if ( (v177 & 0x80u) != 0LL )
            {
              v128 = v47;
              v83 = 6;
              do
              {
                hkIArchive::readArrayGeneric(v142, &v177, 1, 1);
                v84 = v83;
                v83 += 7;
                v82 |= (v177 & 0x7F) << v84;
              }
              while ( (v177 & 0x80u) != 0LL );
              v47 = v128;
            }
            if ( v130 != 0 )
              v82 = -v82;
            if ( *(uint32_t *)(a2 + 60) > v82 )
            {
              G4_VCALL<void>(v136, 72, v149, *(uint32_t *)(*(uint32_t *)(a2 + 56) + 4 * v82));
              v64 = v157;
            }
            else
            {
              v85 = 8
                  * hkMapBase_unsigned_long_unsigned_l_393416::findOrInsertKey(
                      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(a2 + 68),
                      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                      v82,
                      0);
              v86 = *(uint32_t **)(*(uint32_t *)(a2 + 68) + v85 + 4);
              if ( v86 == nullptr )
              {
                v132 = (hkErrStream::Self *)v85;
                v86 = (uint32_t *)G4_VCALL<int>((*v135)[11], 8, 24);
                *v86 = 0;
                v86[1] = 0;
                v86[3] = 0;
                v86[4] = 0;
                v86[2] = 0x80000000;
                v86[5] = 0x80000000;
                *(uint32_t *)((char *)v132 + *(uint32_t *)(a2 + 68) + 4) = (uint32_t)(uintptr_t)(v86);
              }
              v87 = v86[4];
              if ( v87 == (v86[5] & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)(v86 + 3),
                  &byte_8,
                  v118);
                v87 = v86[4];
              }
              v88 = (uint32_t *)(v86[3] + 8 * v87);
              *v88 = (uint32_t)(uintptr_t)(v136);
              v88[1] = v149;
              v64 = v157;
              ++v86[4];
            }
            goto LABEL_85;
          case 9:
            if ( v53 != 9 )
              goto LABEL_96;
            v54 = *((uint32_t **)v52 + 1);
            goto LABEL_92;
          default:
            goto LABEL_96;
        }
        goto LABEL_84;
      }
      v146 = v51;
      v129 = (hkTypeManager::Self *)(*(int (**)(uint32_t))(**(uint32_t **)(a2 + 20) + 52))(*(uint32_t *)(a2 + 20));
      v177 = *(uint64_t *)v146;
      Array = *((uint32_t *)v146 + 2);
      v179 = *((uint32_t *)v146 + 3);
      hkIArchive::readArrayGeneric(v142, &v159, 1, 1);
      v68 = (uint8_t)((uint8_t)(uintptr_t)(v159) & 0x7F) >> 1;
      v126 = (uint8_t)(uintptr_t)(v159) & 1;
      if ( (char)(uintptr_t)(v159) < 0 )
      {
        v123 = v47;
        v69 = 6;
        do
        {
          hkIArchive::readArrayGeneric(v142, &v159, 1, 1);
          v70 = v69;
          v69 += 7;
          v68 |= ((uint8_t)(uintptr_t)(v159) & 0x7F) << v70;
        }
        while ( (char)(uintptr_t)(v159) < 0 );
        v47 = v123;
      }
      if ( v126 != 0 )
        v68 = -v68;
      v127 = v68;
      v71 = *(hkTypeManager::Type::Self **)(hkDataObject_Value::getType((hkDataObject_Value::Self *)&v160) + 4);
      if ( *(uint32_t *)v71 == 6 && hkTypeManager::Type::getTypeName(v71) == 0 )
      {
        hkIArchive::readArrayGeneric(v142, &v159, 1, 1);
        v104 = (uint8_t)((uint8_t)(uintptr_t)(v159) & 0x7F) >> 1;
        v125 = (uint8_t)(uintptr_t)(v159) & 1;
        if ( (char)(uintptr_t)(v159) < 0 )
        {
          v122 = v47;
          v105 = 6;
          do
          {
            hkIArchive::readArrayGeneric(v142, &v159, 1, 1);
            v106 = v105;
            v105 += 7;
            v104 |= ((uint8_t)(uintptr_t)(v159) & 0x7F) << v106;
          }
          while ( (char)(uintptr_t)(v159) < 0 );
          v47 = v122;
        }
        if ( v125 != 0 )
          v104 = -v104;
        v107 = (hkString::Self *)(*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(a2 + 28) + 4 * v104) + 12))(*(uint32_t *)(*(uint32_t *)(a2 + 28) + 4 * v104));
        v108 = (hkTypeManager::Type::Self *)hkTypeManager::addClass(v129, v107);
        Array = (int)(uintptr_t)(hkTypeManager::makeArray(v129, v108));
      }
      v72 = (uint32_t *)(*(int (**)(uint32_t, uint32_t **, int, int64_t *))(**(uint32_t **)(a2 + 20) + 28))(
                        *(uint32_t *)(a2 + 20),
                        &v157,
                        v161,
                        &v177);
      v159 = v72;
      if ( v72 != nullptr )
      {
        v73 = v72[1];
        ++v72[2];
        v74 = v73;
        LOWORD(v73) = 0;
        v72[1] = v73 | (uint16_t)(v74 + 1);
      }
      G4_VCALL<void>(v72, 20, v127);
      sub_18BDF90(v127);
      v60 = v159;
      if ( v159 == nullptr )
        goto LABEL_84;
LABEL_82:
      v61 = v60[1];
      LOWORD(v61) = 0;
      v62 = v61 | (uint16_t)(v60[1] - 1);
      v63 = v60[2]-- == 1;
      v60[1] = v62;
      if ( v63 )
        G4_VCALL<void>(v60, 4);
      goto LABEL_84;
    }
  }
  hkIArchive::readArrayGeneric((hkIArchive::Self *)(a2 + 4), &v177, 1, 1);
  v77 = (uint8_t)(v177 & 0x7F) >> 1;
  v143 = v177 & 1;
  if ( (v177 & 0x80u) != 0LL )
  {
    v78 = 6;
    do
    {
      v148 = v78;
      hkIArchive::readArrayGeneric((hkIArchive::Self *)(a2 + 4), &v177, 1, 1);
      v78 = v148 + 7;
      v77 |= (v177 & 0x7F) << v148;
    }
    while ( (v177 & 0x80u) != 0LL );
  }
  if ( v143 != 0 )
    v77 = -v77;
  v79 = *(uint32_t *)(*(uint32_t *)(a2 + 56) + 4 * v77);
  *a1 = v79;
  if ( v79 != 0 )
  {
    v80 = *(uint32_t *)(v79 + 4);
    ++*(uint32_t *)(v79 + 8);
    v81 = v80;
    LOWORD(v80) = 0;
    *(uint32_t *)(v79 + 4) = v80 | (uint16_t)(v81 + 1);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_18BDF90  (binary VA: 0x18bdf90)
// Original: sub_18BDF90
// ----------------------------------------------------------------------------
int sub_18BDF90(int a1, uint32_t *a2, int a3)
{
  int result;
  void *v4;
  hkIArchive::Self *v5;
  hkLifoAllocator::Self *v6;
  signed int v7;
  unsigned int v8;
  signed int v9;
  int v10;
  hkIArchive::Self *v11;
  int v12;
  int v13;
  int v14;
  void *v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  int v20;
  void *v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  void *v28;
  int v29;
  int v30;
  hkIArchive::Self *v31;
  int v32;
  int v33;
  char *v34;
  char *v35;
  char v36;
  int v37;
  int v38;
  char v39; // si
  int v40;
  int v41;
  int v42;
  char v43;
  hkIArchive::Self *v44;
  int **v45;
  int *v46;
  void *v47;
  signed int v48;
  signed int v49;
  unsigned int v50;
  int v51;
  int v52;
  uint8_t v53;
  int v54;
  int v55;
  uint32_t *v56;
  uint32_t *v57;
  int v58;
  int16_t v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int16_t v65;
  int TupleSize;
  uint32_t *v67;
  int v68;
  int v69;
  bool v70;
  signed int v71;
  int v72;
  char v73;
  uint32_t *v74;
  int v75;
  int16_t v76;
  int v77;
  int v78;
  int v79;
  int v80;
  char v81;
  uint32_t *v82;
  int v83;
  int16_t v84;
  uint32_t *v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int address;
  hkIArchive::Self *v91;
  int v92;
  uint32_t *v93;
  int v94;
  int v95;
  unsigned int v96;
  hkMemoryAllocator::Self *v97;
  int v98;
  hkIArchive::Self **v99;
  int v100;
  signed int v101;
  hkLifoAllocator::Self *v102;
  char *v103;
  char *v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  char v110;
  int v111;
  unsigned int v112;
  uint64_t v113; // rax
  int v114;
  int v115;
  hkIArchive::Self *v116;
  hkIArchive::Self *v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int savedregs;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef char _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef char _g4_t_v135;
  typedef int _g4_t_i;
  typedef hkIArchive::Self **_g4_t_v137;
  typedef int _g4_t_v138;
  typedef char _g4_t_v139;
  typedef hkIArchive::Self *_g4_t_v140;
  typedef hkIArchive::Self *_g4_t_v141;
  typedef char _g4_t_v142;
  typedef hkIArchive::Self *_g4_t_v143;
  typedef hkIArchive::Self *_g4_t_v144;
  typedef char _g4_t_v145;
  typedef hkIArchive::Self *_g4_t_v146;
  typedef hkIArchive::Self *_g4_t_v147;
  typedef hkIArchive::Self *_g4_t_v148;
  typedef int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef int _g4_t_v151;
  typedef int _g4_t_v152;
  typedef hkIArchive::Self *_g4_t_v153;
  typedef int _g4_t_v154;
  typedef char _g4_t_v155;
  typedef int _g4_t_v156;
  typedef int *_g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef char _g4_t_v160;
  typedef char _g4_t_v161;
  typedef hkTypeManager::Type::Self *_g4_t_v162;
  typedef hkTypeManager::Type::Self *_g4_t_v163;
  typedef hkTypeManager::Type::Self *_g4_t_v164;
  typedef hkTypeManager::Type::Self *_g4_t_v165;
  typedef int _g4_t_v166;
  typedef hkTypeManager::Type::Self *_g4_t_v167;
  typedef hkTypeManager::Type::Self *_g4_t_v168;
  typedef char _g4_t_v169;
  typedef int _g4_t_v170;
  typedef hkTypeManager::Type::Self *_g4_t_v171;
  typedef hkTypeManager::Type::Self *_g4_t_v172;
  typedef hkTypeManager::Type::Self *_g4_t_v173;
  typedef hkTypeManager::Type::Self *_g4_t_v174;
  typedef hkTypeManager::Type::Self *_g4_t_v175;
  typedef int _g4_t_v176;
  typedef uint32_t *_g4_t_v177;
  typedef int _g4_t_v178;
  typedef int _g4_t_v179;
  typedef int _g4_t_v180;
  typedef int _g4_t_v181;
  typedef unsigned int _g4_t_v182;
  typedef int _g4_t_v183;
  typedef void *_g4_t_v184;
  typedef int _g4_t_v185;
  typedef int _g4_t_v186;
  typedef int _g4_t_v187;
  typedef int _g4_t_v188;
  typedef int _g4_t_v189;
  typedef hkIArchive::Self *_g4_t_v190;
  typedef int _g4_t_v191;
  typedef void *_g4_t_v192;
  typedef void *_g4_t_v193;
  typedef int _g4_t_v194;
  typedef int _g4_t_v195;
  typedef int _g4_t_v196;
  typedef int _g4_t_v197;
  typedef int _g4_t_v198;
  typedef int _g4_t_v199;
  typedef int _g4_t_v200;
  typedef int _g4_t_v201;
  typedef int _g4_t_v202;
  typedef int _g4_t_v203;
  typedef int _g4_t_v204;
  typedef int _g4_t_v205;
  typedef int _g4_t_v206;
  typedef hkArrayUtil::Self *_g4_t_v207;
  typedef hkIArchive::Self *_g4_t_v208;
  typedef int *_g4_t_v209;
  typedef int _g4_t_v210;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v123)) > _g4_s0 ? (4u + sizeof(_g4_t_v123)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v124)) > _g4_s1 ? (8u + sizeof(_g4_t_v124)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v125)) > _g4_s2 ? (12u + sizeof(_g4_t_v125)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v126)) > _g4_s3 ? (16u + sizeof(_g4_t_v126)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v127)) > _g4_s4 ? (20u + sizeof(_g4_t_v127)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v128)) > _g4_s5 ? (24u + sizeof(_g4_t_v128)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v129)) > _g4_s6 ? (28u + sizeof(_g4_t_v129)) : _g4_s6,
    _g4_s8 = (31u + sizeof(_g4_t_v130)) > _g4_s7 ? (31u + sizeof(_g4_t_v130)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v131)) > _g4_s8 ? (32u + sizeof(_g4_t_v131)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v132)) > _g4_s9 ? (36u + sizeof(_g4_t_v132)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v133)) > _g4_s10 ? (40u + sizeof(_g4_t_v133)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v134)) > _g4_s11 ? (40u + sizeof(_g4_t_v134)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v135)) > _g4_s12 ? (40u + sizeof(_g4_t_v135)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_i)) > _g4_s13 ? (40u + sizeof(_g4_t_i)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v137)) > _g4_s14 ? (44u + sizeof(_g4_t_v137)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v138)) > _g4_s15 ? (48u + sizeof(_g4_t_v138)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v139)) > _g4_s16 ? (48u + sizeof(_g4_t_v139)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v140)) > _g4_s17 ? (52u + sizeof(_g4_t_v140)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v141)) > _g4_s18 ? (52u + sizeof(_g4_t_v141)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v142)) > _g4_s19 ? (52u + sizeof(_g4_t_v142)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v143)) > _g4_s20 ? (52u + sizeof(_g4_t_v143)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v144)) > _g4_s21 ? (52u + sizeof(_g4_t_v144)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v145)) > _g4_s22 ? (52u + sizeof(_g4_t_v145)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v146)) > _g4_s23 ? (52u + sizeof(_g4_t_v146)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v147)) > _g4_s24 ? (52u + sizeof(_g4_t_v147)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v148)) > _g4_s25 ? (52u + sizeof(_g4_t_v148)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v149)) > _g4_s26 ? (56u + sizeof(_g4_t_v149)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v150)) > _g4_s27 ? (56u + sizeof(_g4_t_v150)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v151)) > _g4_s28 ? (56u + sizeof(_g4_t_v151)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v152)) > _g4_s29 ? (56u + sizeof(_g4_t_v152)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v153)) > _g4_s30 ? (56u + sizeof(_g4_t_v153)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v154)) > _g4_s31 ? (56u + sizeof(_g4_t_v154)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v155)) > _g4_s32 ? (56u + sizeof(_g4_t_v155)) : _g4_s32,
    _g4_s34 = (56u + sizeof(_g4_t_v156)) > _g4_s33 ? (56u + sizeof(_g4_t_v156)) : _g4_s33,
    _g4_s35 = (60u + sizeof(_g4_t_v157)) > _g4_s34 ? (60u + sizeof(_g4_t_v157)) : _g4_s34,
    _g4_s36 = (60u + sizeof(_g4_t_v158)) > _g4_s35 ? (60u + sizeof(_g4_t_v158)) : _g4_s35,
    _g4_s37 = (60u + sizeof(_g4_t_v159)) > _g4_s36 ? (60u + sizeof(_g4_t_v159)) : _g4_s36,
    _g4_s38 = (60u + sizeof(_g4_t_v160)) > _g4_s37 ? (60u + sizeof(_g4_t_v160)) : _g4_s37,
    _g4_s39 = (60u + sizeof(_g4_t_v161)) > _g4_s38 ? (60u + sizeof(_g4_t_v161)) : _g4_s38,
    _g4_s40 = (64u + sizeof(_g4_t_v162)) > _g4_s39 ? (64u + sizeof(_g4_t_v162)) : _g4_s39,
    _g4_s41 = (64u + sizeof(_g4_t_v163)) > _g4_s40 ? (64u + sizeof(_g4_t_v163)) : _g4_s40,
    _g4_s42 = (64u + sizeof(_g4_t_v164)) > _g4_s41 ? (64u + sizeof(_g4_t_v164)) : _g4_s41,
    _g4_s43 = (64u + sizeof(_g4_t_v165)) > _g4_s42 ? (64u + sizeof(_g4_t_v165)) : _g4_s42,
    _g4_s44 = (64u + sizeof(_g4_t_v166)) > _g4_s43 ? (64u + sizeof(_g4_t_v166)) : _g4_s43,
    _g4_s45 = (64u + sizeof(_g4_t_v167)) > _g4_s44 ? (64u + sizeof(_g4_t_v167)) : _g4_s44,
    _g4_s46 = (64u + sizeof(_g4_t_v168)) > _g4_s45 ? (64u + sizeof(_g4_t_v168)) : _g4_s45,
    _g4_s47 = (64u + sizeof(_g4_t_v169)) > _g4_s46 ? (64u + sizeof(_g4_t_v169)) : _g4_s46,
    _g4_s48 = (68u + sizeof(_g4_t_v170)) > _g4_s47 ? (68u + sizeof(_g4_t_v170)) : _g4_s47,
    _g4_s49 = (72u + sizeof(_g4_t_v171)) > _g4_s48 ? (72u + sizeof(_g4_t_v171)) : _g4_s48,
    _g4_s50 = (72u + sizeof(_g4_t_v172)) > _g4_s49 ? (72u + sizeof(_g4_t_v172)) : _g4_s49,
    _g4_s51 = (72u + sizeof(_g4_t_v173)) > _g4_s50 ? (72u + sizeof(_g4_t_v173)) : _g4_s50,
    _g4_s52 = (72u + sizeof(_g4_t_v174)) > _g4_s51 ? (72u + sizeof(_g4_t_v174)) : _g4_s51,
    _g4_s53 = (72u + sizeof(_g4_t_v175)) > _g4_s52 ? (72u + sizeof(_g4_t_v175)) : _g4_s52,
    _g4_s54 = (76u + sizeof(_g4_t_v176)) > _g4_s53 ? (76u + sizeof(_g4_t_v176)) : _g4_s53,
    _g4_s55 = (80u + sizeof(_g4_t_v177)) > _g4_s54 ? (80u + sizeof(_g4_t_v177)) : _g4_s54,
    _g4_s56 = (84u + sizeof(_g4_t_v178)) > _g4_s55 ? (84u + sizeof(_g4_t_v178)) : _g4_s55,
    _g4_s57 = (88u + sizeof(_g4_t_v179)) > _g4_s56 ? (88u + sizeof(_g4_t_v179)) : _g4_s56,
    _g4_s58 = (92u + sizeof(_g4_t_v180)) > _g4_s57 ? (92u + sizeof(_g4_t_v180)) : _g4_s57,
    _g4_s59 = (96u + sizeof(_g4_t_v181)) > _g4_s58 ? (96u + sizeof(_g4_t_v181)) : _g4_s58,
    _g4_s60 = (100u + sizeof(_g4_t_v182)) > _g4_s59 ? (100u + sizeof(_g4_t_v182)) : _g4_s59,
    _g4_s61 = (104u + sizeof(_g4_t_v183)) > _g4_s60 ? (104u + sizeof(_g4_t_v183)) : _g4_s60,
    _g4_s62 = (108u + sizeof(_g4_t_v184)) > _g4_s61 ? (108u + sizeof(_g4_t_v184)) : _g4_s61,
    _g4_s63 = (112u + sizeof(_g4_t_v185)) > _g4_s62 ? (112u + sizeof(_g4_t_v185)) : _g4_s62,
    _g4_s64 = (116u + sizeof(_g4_t_v186)) > _g4_s63 ? (116u + sizeof(_g4_t_v186)) : _g4_s63,
    _g4_s65 = (120u + sizeof(_g4_t_v187)) > _g4_s64 ? (120u + sizeof(_g4_t_v187)) : _g4_s64,
    _g4_s66 = (124u + sizeof(_g4_t_v188)) > _g4_s65 ? (124u + sizeof(_g4_t_v188)) : _g4_s65,
    _g4_s67 = (128u + sizeof(_g4_t_v189)) > _g4_s66 ? (128u + sizeof(_g4_t_v189)) : _g4_s66,
    _g4_s68 = (132u + sizeof(_g4_t_v190)) > _g4_s67 ? (132u + sizeof(_g4_t_v190)) : _g4_s67,
    _g4_s69 = (136u + sizeof(_g4_t_v191)) > _g4_s68 ? (136u + sizeof(_g4_t_v191)) : _g4_s68,
    _g4_s70 = (140u + sizeof(_g4_t_v192)) > _g4_s69 ? (140u + sizeof(_g4_t_v192)) : _g4_s69,
    _g4_s71 = (144u + sizeof(_g4_t_v193)) > _g4_s70 ? (144u + sizeof(_g4_t_v193)) : _g4_s70,
    _g4_s72 = (148u + sizeof(_g4_t_v194)) > _g4_s71 ? (148u + sizeof(_g4_t_v194)) : _g4_s71,
    _g4_s73 = (152u + sizeof(_g4_t_v195)) > _g4_s72 ? (152u + sizeof(_g4_t_v195)) : _g4_s72,
    _g4_s74 = (156u + sizeof(_g4_t_v196)) > _g4_s73 ? (156u + sizeof(_g4_t_v196)) : _g4_s73,
    _g4_s75 = (160u + sizeof(_g4_t_v197)) > _g4_s74 ? (160u + sizeof(_g4_t_v197)) : _g4_s74,
    _g4_s76 = (164u + sizeof(_g4_t_v198)) > _g4_s75 ? (164u + sizeof(_g4_t_v198)) : _g4_s75,
    _g4_s77 = (168u + sizeof(_g4_t_v199)) > _g4_s76 ? (168u + sizeof(_g4_t_v199)) : _g4_s76,
    _g4_s78 = (172u + sizeof(_g4_t_v200)) > _g4_s77 ? (172u + sizeof(_g4_t_v200)) : _g4_s77,
    _g4_s79 = (176u + sizeof(_g4_t_v201)) > _g4_s78 ? (176u + sizeof(_g4_t_v201)) : _g4_s78,
    _g4_s80 = (180u + sizeof(_g4_t_v202)) > _g4_s79 ? (180u + sizeof(_g4_t_v202)) : _g4_s79,
    _g4_s81 = (184u + sizeof(_g4_t_v203)) > _g4_s80 ? (184u + sizeof(_g4_t_v203)) : _g4_s80,
    _g4_s82 = (188u + sizeof(_g4_t_v204)) > _g4_s81 ? (188u + sizeof(_g4_t_v204)) : _g4_s81,
    _g4_s83 = (192u + sizeof(_g4_t_v205)) > _g4_s82 ? (192u + sizeof(_g4_t_v205)) : _g4_s82,
    _g4_s84 = (196u + sizeof(_g4_t_v206)) > _g4_s83 ? (196u + sizeof(_g4_t_v206)) : _g4_s83,
    _g4_s85 = (200u + sizeof(_g4_t_v207)) > _g4_s84 ? (200u + sizeof(_g4_t_v207)) : _g4_s84,
    _g4_s86 = (204u + sizeof(_g4_t_v208)) > _g4_s85 ? (204u + sizeof(_g4_t_v208)) : _g4_s85,
    _g4_s87 = (208u + sizeof(_g4_t_v209)) > _g4_s86 ? (208u + sizeof(_g4_t_v209)) : _g4_s86,
    _g4_s88 = (212u + sizeof(_g4_t_v210)) > _g4_s87 ? (212u + sizeof(_g4_t_v210)) : _g4_s87
  };
  alignas(16) uint8_t _g4_sf[_g4_s88];
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 4u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 8u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 12u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 16u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 20u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 24u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 28u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 31u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 32u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 36u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 40u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 40u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 40u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 40u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 44u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 48u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 48u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 52u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 52u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 52u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 52u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 52u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 52u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 52u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 52u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 52u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 56u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 56u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 56u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 56u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 56u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 56u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 56u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 56u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 60u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 60u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 60u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 60u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 60u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 64u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 64u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 64u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 64u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 64u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 64u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 64u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 64u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 68u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 72u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 72u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 72u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 72u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 72u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 76u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 80u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 84u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 88u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 92u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 96u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 100u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 104u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 108u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 112u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 116u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 120u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 124u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 128u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 132u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 136u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 140u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 144u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 148u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 152u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 156u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 160u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 164u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 168u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 172u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 176u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 180u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 184u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 188u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 192u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 196u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 200u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 204u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 208u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 212u);

  v207 = (hkArrayUtil::Self *)&a3;
  result = G4_VCALL<int>(*a2, 8, v123, v124, v125, v126, v127, v128, v129, v131, v132, v133, a2, a3, v140, v149, a1, v162, v170, v171, v176, v177, v178, v179, v180, v181, v182, v183, v184, v185, v186, v187, v188, v189, v190, v191, v192, v193, v194, v195, v196, v197, v198, v199, v200, v201, v202, v203, v204, v205, v206);
  switch ( *(uint32_t *)result )
  {
    case 2:
      v21 = nullptr;
      v189 = 0;
      v190 = nullptr;
      v191 = 0x80000000;
      if ( v138 != 0
        && (v181 = v138,
            v21 = (void *)(*(int (**)(uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                            (uint32_t *)(hkContainerTempAllocator::s_alloc),
                            &v181),
            v23 = v181,
            v181 != 0) )
      {
        v22 = v181 & 0x3FFFFFFF;
      }
      else
      {
        v22 = 0;
        v23 = 0x80000000;
      }
      v24 = v138;
      v189 = (int)(uintptr_t)(v21);
      v190 = (hkIArchive::Self *)v138;
      v191 = v23;
      if ( v138 > v22 )
      {
        v25 = 2 * v22;
        v209 = &v189;
        if ( v25 < v138 )
          v25 = v138;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)&v176,
          (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
          v209,
          v25,
          1);
        v21 = (void *)v189;
        v24 = v138;
      }
      hkIArchive::readArrayGeneric((hkIArchive::Self *)(v157 + 1), v21, 1, v24);
      result = G4_VCALL<int>(*v137, 124, v189, v24);
      v190 = nullptr;
      if ( v191 >= 0 )
      {
        v26 = v191 & 0x3FFFFFFF;
        v27 = hkContainerTempAllocator::s_alloc[0];
        return (*(int (**)(uint32_t *, int, int))(v27 + 20))((uint32_t *)(hkContainerTempAllocator::s_alloc), v189, v26);
      }
      return result;
    case 3:
      v28 = nullptr;
      v189 = 0;
      v190 = nullptr;
      v191 = 0x80000000;
      if ( v138 != 0
        && (v181 = 4 * v138,
            v28 = (void *)(*(int (**)(uint32_t *, int *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                            (uint32_t *)(hkContainerTempAllocator::s_alloc),
                            &v181),
            v30 = v181 / 4,
            v181 / 4 != 0) )
      {
        v29 = (v181 / 4) & 0x3FFFFFFF;
      }
      else
      {
        v29 = 0;
        v30 = 0x80000000;
      }
      v31 = (hkIArchive::Self *)v138;
      v189 = (int)(uintptr_t)(v28);
      v190 = (hkIArchive::Self *)v138;
      v191 = v30;
      if ( v138 > v29 )
      {
        v32 = 2 * v29;
        v207 = (hkArrayUtil::Self *)&v176;
        savedregs = 4;
        if ( v32 < v138 )
          v32 = v138;
        hkArrayUtil::reserve(v207, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, &v189, v32, savedregs);
        v28 = (void *)v189;
        v31 = (hkIArchive::Self *)v138;
      }
      v190 = v31;
      hkIArchive::readArrayGeneric((hkIArchive::Self *)(v157 + 1), v28, 4, (int)(uintptr_t)(v31));
      result = G4_VCALL<int>(*v137, 152, v189, v190);
      v20 = v191;
      v190 = nullptr;
      if ( v191 >= 0 )
        goto LABEL_50;
      return result;
    case 4:
      result = (int)(uintptr_t)(v157);
      if ( *v157 <= 2 )
        goto LABEL_52;
      v147 = (hkIArchive::Self *)(v157 + 1);
      hkIArchive::readArrayGeneric((hkIArchive::Self *)(v157 + 1), &v189, 1, 1);
      v108 = (uint8_t)(v189 & 0x7F) >> 1;
      v155 = v189 & 1;
      if ( (v189 & 0x80u) != 0 )
      {
        v109 = 6;
        do
        {
          hkIArchive::readArrayGeneric(v147, &v189, 1, 1);
          v110 = v109;
          v109 += 7;
          v108 |= (v189 & 0x7F) << v110;
        }
        while ( (v189 & 0x80u) != 0 );
      }
      result = -v108;
      if ( v155 != 0 )
        v108 = -v108;
      if ( v108 == 4 )
      {
LABEL_52:
        if ( v138 > 0 )
        {
          v190 = (hkIArchive::Self *)(v157 + 1);
          v189 = v138;
          v193 = nullptr;
          v195 = 0x80000000;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)&v176,
            (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
            (int *)&v193,
            v138,
            1);
          v191 = (int)(uintptr_t)(v193);
          v192 = v193;
          v194 = 0;
          v181 = 0;
          v182 = 0;
          v183 = 0x80000000;
          v159 = v189;
          if ( v189 <= 0 )
          {
            v182 = v189;
            v107 = 0;
          }
          else
          {
            v33 = v189;
            hkArrayUtil::reserve(
              (hkArrayUtil::Self *)&v176,
              (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
              &v181,
              v189,
              4);
            v182 = v33;
            v150 = 0;
            do
            {
              v34 = (char *)v191;
              v141 = (hkIArchive::Self *)(v181 + 4 * v150);
              v175 = (hkTypeManager::Type::Self *)v192;
              if ( v191 >= (unsigned int)(uintptr_t)(v192) )
              {
                v194 = v189;
                hkIArchive::readArrayGeneric(v190, v193, 1, v189);
                v192 = (char *)v193 + v194;
                v175 = (hkTypeManager::Type::Self *)((char *)v193 + v194);
                v35 = (char *)v193 + 1;
                v191 = (int)(uintptr_t)(v193) + 1;
                v36 = *(uint8_t *)v193;
              }
              else
              {
                v35 = (char *)++v191;
                v36 = *v34;
              }
              v37 = (uint8_t)(v36 & 0x7F) >> 1;
              v139 = v36 & 1;
              if ( v36 < 0 )
              {
                v38 = 6;
                do
                {
                  if ( v35 < (char *)v175 )
                  {
                    v191 = (int)(uintptr_t)(v35 + 1);
                    v39 = *v35++;
                  }
                  else
                  {
                    v194 = v189;
                    v164 = (hkTypeManager::Type::Self *)v38;
                    hkIArchive::readArrayGeneric(v190, v193, 1, v189);
                    v38 = (int)(uintptr_t)(v164);
                    v192 = (char *)v193 + v194;
                    v175 = (hkTypeManager::Type::Self *)((char *)v193 + v194);
                    v35 = (char *)v193 + 1;
                    v191 = (int)(uintptr_t)(v193) + 1;
                    v39 = *(uint8_t *)v193;
                  }
                  v40 = (v39 & 0x7F) << v38;
                  v38 += 7;
                  v37 |= v40;
                }
                while ( v39 < 0 );
              }
              --v189;
              if ( v139 != 0 )
                v37 = -v37;
              ++v150;
              *(uint32_t *)v141 = v37;
            }
            while ( v150 != v159 );
            v107 = v181;
          }
          G4_VCALL<void>(*v137, 136, v107, v159);
          v182 = 0;
          if ( v183 >= 0 )
            (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
              (uint32_t *)(hkContainerTempAllocator::s_alloc),
              v181,
              4 * v183);
          result = v195;
          v194 = 0;
          if ( v195 >= 0 )
            return (*(int (**)(uint32_t *, void *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
                     (uint32_t *)(hkContainerTempAllocator::s_alloc),
                     v193,
                     v195 & 0x3FFFFFFF);
        }
      }
      else if ( v138 > 0 )
      {
        for ( i = 0; i != v138; result = i )
        {
          hkIArchive::readArrayGeneric(v147, &v189, 1, 1);
          v111 = (uint64_t)(v189 & 0x7F) >> 1;
          v112 = 0;
          v130 = v189 & 1;
          if ( (v189 & 0x80u) != 0 )
          {
            v160 = 6;
            do
            {
              hkIArchive::readArrayGeneric(v147, &v189, 1, 1);
              v113 = (uint64_t)(v189 & 0x7F) << v160;
              v160 += 7;
              v111 |= v113;
              v112 |= HIDWORD(v113);
            }
            while ( (v189 & 0x80u) != 0 );
          }
          if ( v130 != 0 )
          {
            v111 = -v111;
            v112 = (uint64_t)-__SPAIR64__(v112, v111) >> 32;
          }
          G4_VCALL<void>(*v137, 84, i++, v111, v112);
        }
      }
      return result;
    case 5:
      v165 = (hkTypeManager::Type::Self *)(v157 + 1);
      v151 = 0;
      result = (int)(uintptr_t)(&v189);
      if ( v138 > 0 )
      {
        do
        {
          hkIArchive::readArrayGeneric(v165, &v189, 1, 1);
          v41 = (uint8_t)(v189 & 0x7F) >> 1;
          v142 = v189 & 1;
          if ( (v189 & 0x80u) != 0 )
          {
            v42 = 6;
            do
            {
              hkIArchive::readArrayGeneric(v165, &v189, 1, 1);
              v43 = v42;
              v42 += 7;
              v41 |= (v189 & 0x7F) << v43;
            }
            while ( (v189 & 0x80u) != 0 );
          }
          if ( v142 != 0 )
            v41 = -v41;
          if ( v41 > 0 )
          {
            address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
            v146 = (hkIArchive::Self *)hkMemoryRouter::easyAlloc(
                                   *(hkMemoryRouter::Self **)(*(uint32_t *)address + 44),
                                   (hkMemoryAllocator::Self *)(v41 + 1));
            hkIArchive::readRaw(v165, v146, v41);
            v91 = v146;
            *((uint8_t *)v146 + v41) = 0;
            v92 = v157[11];
            if ( v92 == (v157[12] & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)(v157 + 10),
                4,
                v210);
              v92 = v157[11];
              v91 = v146;
            }
            *(uint32_t *)(v157[10] + 4 * v92) = (uint32_t)(uintptr_t)(v91);
            v44 = v91;
            ++v157[11];
          }
          else
          {
            v44 = *(hkIArchive::Self **)(v157[10] - 4 * v41);
          }
          G4_VCALL<void>(*v137, 60, v151++, v44);
          result = v151;
        }
        while ( v151 != v138 );
      }
      return result;
    case 6:
      G4_VCALL<void>(*v137, 20, v138);
      v134 = G4_VCALL<int>(*v137, 28);
      v152 = G4_VCALL<int>(v134, 40);
      v181 = 0;
      v182 = 0;
      v183 = 0x80000000;
      v185 = 128;
      v45 = (int **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v46 = *v45;
      v143 = (hkIArchive::Self *)v45;
      v47 = (void *)(*v45)[3];
      if ( v46[2] > 127 && (unsigned int)(uintptr_t)(v47) + 128 <= v46[4] )
        v46[3] = (int)(uintptr_t)(v47) + 128;
      else
        v47 = (void *)hkLifoAllocator::allocateFromNewSlab((hkLifoAllocator::Self *)v46, 128);
      v181 = (int)(uintptr_t)(v47);
      v184 = v47;
      v183 = -2147483520;
      v48 = (v152 + 7) & 0xFFFFFFF8;
      v49 = v48 + 7;
      if ( v152 + 7 >= 0 )
        v49 = (v152 + 7) & 0xFFFFFFF8;
      v166 = v49 >> 3;
      if ( v48 > 128 )
      {
        v50 = 256;
        savedregs = 1;
        if ( v48 > 255 )
          v50 = (v152 + 7) & 0xFFFFFFF8;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)&v176,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          &v181,
          v50,
          savedregs);
      }
      v182 = (v152 + 7) & 0xFFFFFFF8;
      hkIArchive::readArrayGeneric((hkIArchive::Self *)(v157 + 1), &v189, 1, v166);
      if ( v166 > 0 )
      {
        v51 = 1;
        v52 = 0;
        do
        {
          v53 = *((uint8_t *)&v189 + v52);
          *(uint8_t *)(v181 + 8 * v52++) = v53 & 1;
          *(uint8_t *)(v181 + v51) = (v53 & 2) != 0;
          *(uint8_t *)(v181 + v51 + 1) = (v53 & 4) != 0;
          *(uint8_t *)(v181 + v51 + 2) = (v53 & 8) != 0;
          *(uint8_t *)(v181 + v51 + 3) = (v53 & 0x10) != 0;
          *(uint8_t *)(v181 + v51 + 4) = (v53 & 0x20) != 0;
          *(uint8_t *)(v181 + v51 + 5) = (v53 & 0x40) != 0;
          *(uint8_t *)(v181 + v51 + 6) = v53 >> 7;
          v51 += 8;
        }
        while ( v52 != v166 );
      }
      if ( v152 > (v183 & 0x3FFFFFFF) )
      {
        v100 = 2 * (v183 & 0x3FFFFFFF);
        savedregs = 1;
        v207 = (hkArrayUtil::Self *)&v176;
        if ( v152 >= v100 )
          v100 = v152;
        hkArrayUtil::reserve(v207, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v181, v100, savedregs);
        v182 = v152;
        v189 = 0;
        v190 = nullptr;
        v191 = 0x80000000;
        v193 = (void *)v152;
      }
      else
      {
        v189 = 0;
        v182 = v152;
        v190 = nullptr;
        v191 = 0x80000000;
        v193 = (void *)v152;
        if ( v152 == 0 )
        {
          v189 = 0;
          v191 = 0x80000000;
          v192 = nullptr;
          goto LABEL_88;
        }
      }
      v101 = (16 * v152 + 127) & 0xFFFFFF80;
      v102 = *(hkLifoAllocator::Self **)v143;
      v103 = *(char **)(*(uint32_t *)v143 + 12);
      if ( v101 <= *(uint32_t *)(*(uint32_t *)v143 + 8) && (unsigned int)(uintptr_t)(&v103[v101]) <= *((uint32_t *)v102 + 4) )
        *((uint32_t *)v102 + 3) = (uint32_t)(uintptr_t)(&v103[v101]);
      else
        v103 = (char *)hkLifoAllocator::allocateFromNewSlab(v102, (16 * v152 + 127) & 0xFFFFFF80);
      v189 = (int)(uintptr_t)(v103);
      v191 = v152 | 0x80000000;
      v104 = &v103[16 * (uint32_t)(uintptr_t)(v190)];
      v192 = v103;
      if ( v152 - (int)(uintptr_t)(v190) > 0 )
      {
        v105 = 16 * (v152 - (uint32_t)(uintptr_t)(v190));
        v106 = 0;
        do
        {
          *(__m128i *)&v104[v106] = g4_m128_from<__m128i>(0LL);
          v106 += 16;
        }
        while ( v106 != v105 );
      }
LABEL_88:
      v190 = (hkIArchive::Self *)v152;
      v54 = 0;
      G4_VCALL<void>(v134, 52, &v189);
      v55 = v189;
      if ( v152 > 0 )
      {
        while ( 1 )
        {
          v4 = (void *)v55;
          if ( *(uint8_t *)(v181 + v54) != 0 )
          {
            v56 = (uint32_t *)(v55 + 16 * v54);
            v57 = (uint32_t *)G4_VCALL<int>(*v137, 44, *v56);
            v177 = v57;
            if ( v57 != nullptr )
            {
              v58 = v57[1];
              ++v57[2];
              v59 = v58;
              LOWORD(v58) = 0;
              v57[1] = v58 | (uint16_t)(v59 + 1);
            }
            v60 = v56[2];
            v167 = (hkTypeManager::Type::Self *)v60;
            if ( *(uint32_t *)v60 != 9
              || **(uint32_t **)(v60 + 4) == 3
              && (((v61 = *(uint32_t *)(v60 + 8)) & 0xFFFFFFF7) == 4 || v61 == 8 || v61 == 16) )
            {
              sub_18BDF90(v138);
              v57 = v177;
            }
            else
            {
              v62 = 0;
              if ( v138 > 0 )
              {
                while ( 1 )
                {
                  v63 = G4_VCALL<int>(v57, 96, v62);
                  v180 = v63;
                  if ( v63 != 0 )
                  {
                    v64 = *(uint32_t *)(v63 + 4);
                    ++*(uint32_t *)(v63 + 8);
                    v65 = v64;
                    LOWORD(v64) = 0;
                    *(uint32_t *)(v63 + 4) = v64 | (uint16_t)(v65 + 1);
                  }
                  TupleSize = hkTypeManager::Type::getTupleSize(v167);
                  sub_18BDF90(TupleSize);
                  v67 = (uint32_t *)v180;
                  if ( v180 != 0 )
                  {
                    v68 = *(uint32_t *)(v180 + 4);
                    LOWORD(v68) = 0;
                    v69 = v68 | (uint16_t)(*(uint32_t *)(v180 + 4) - 1);
                    v70 = (*(uint32_t *)(v180 + 8))-- == 1;
                    v67[1] = v69;
                    if ( v70 )
                      G4_VCALL<void>(v67, 4);
                  }
                  if ( ++v62 == v138 )
                    break;
                  v57 = v177;
                }
                v57 = v177;
              }
            }
            if ( v57 != nullptr )
            {
              v88 = v57[1];
              v89 = v57[2];
              LOWORD(v88) = 0;
              v57[1] = v88 | (uint16_t)(v57[1] - 1);
              v57[2] = v89 - 1;
              if ( v89 == 1 )
                G4_VCALL<void>(v57, 4);
            }
            v4 = (void *)v189;
          }
          if ( ++v54 == v152 )
            break;
          v55 = (int)(uintptr_t)(v4);
        }
      }
      else
      {
        v4 = (void *)v189;
      }
      v5 = nullptr;
      if ( v192 != v4 )
        v5 = v190;
      v190 = v5;
      v6 = *(hkLifoAllocator::Self **)v143;
      v7 = (16 * (uint32_t)(uintptr_t)(v193) + 127) & 0xFFFFFF80;
      if ( v7 > *(uint32_t *)(*(uint32_t *)v143 + 8)
        || *((void **)v6 + 3) != (char *)v192 + v7
        || v192 == *((void **)v6 + 5) )
      {
        hkLifoAllocator::slowBlockFree(v6, (char *)v192, (16 * (uint32_t)(uintptr_t)(v193) + 127) & 0xFFFFFF80);
      }
      else
      {
        *((uint32_t *)v6 + 3) = (uint32_t)(uintptr_t)(v192);
      }
      v190 = nullptr;
      if ( v191 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v189,
          16 * v191);
      v8 = 0;
      if ( (void *)v181 != v184 )
        v8 = v182;
      v189 = 0;
      v182 = v8;
      v191 = 0x80000000;
      v9 = (v185 + 127) & 0xFFFFFF80;
      result = *(uint32_t *)v143;
      if ( v9 > *(uint32_t *)(*(uint32_t *)v143 + 8)
        || *(void **)(result + 12) != (char *)v184 + v9
        || v184 == *(void **)(result + 20) )
      {
        result = (int)(uintptr_t)(hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)result, (char *)v184, (v185 + 127) & 0xFFFFFF80));
      }
      else
      {
        *(uint32_t *)(result + 12) = (uint32_t)(uintptr_t)(v184);
      }
      v182 = 0;
      if ( v183 >= 0 )
        return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                 v181,
                 v183 & 0x3FFFFFFF);
      return result;
    case 7:
      result = v138;
      v153 = nullptr;
      if ( v138 > 0 )
      {
        do
        {
          v144 = *v137;
          if ( *v157 <= 1 )
          {
            sub_18BC720(&v189, (int)(uintptr_t)(v157), 0, nullptr);
            G4_VCALL<void>(v144, 92, v153, v189);
            v93 = (uint32_t *)v189;
            if ( v189 != 0 )
            {
              v94 = *(uint32_t *)(v189 + 4);
              v95 = *(uint32_t *)(v189 + 8);
              LOWORD(v94) = 0;
              *(uint32_t *)(v189 + 4) = v94 | (uint16_t)(*(uint32_t *)(v189 + 4) - 1);
              v93[2] = v95 - 1;
              if ( v95 == 1 )
                G4_VCALL<void>(v93, 4);
            }
          }
          else
          {
            hkIArchive::readArrayGeneric((hkIArchive::Self *)(v157 + 1), &v189, 1, 1);
            v71 = (uint8_t)(v189 & 0x7F) >> 1;
            v135 = v189 & 1;
            if ( (v189 & 0x80u) != 0 )
            {
              v72 = 6;
              do
              {
                hkIArchive::readArrayGeneric((hkIArchive::Self *)(v157 + 1), &v189, 1, 1);
                v73 = v72;
                v72 += 7;
                v71 |= (v189 & 0x7F) << v73;
              }
              while ( (v189 & 0x80u) != 0 );
            }
            if ( v135 != 0 )
              v71 = -v71;
            if ( v157[15] <= v71 )
            {
              v96 = 8
                  * hkMapBase_unsigned_long_unsigned_l_393416::findOrInsertKey(
                      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v157 + 17),
                      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                      v71,
                      0);
              v97 = *(hkMemoryAllocator::Self **)(v157[17] + v96 + 4);
              if ( v97 == nullptr )
              {
                v114 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
                v97 = (hkMemoryAllocator::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v114 + 44) + 8))(
                                             *(uint32_t *)(*(uint32_t *)v114 + 44),
                                             24);
                *(uint32_t *)v97 = 0;
                *((uint32_t *)v97 + 1) = 0;
                *((uint32_t *)v97 + 3) = 0;
                *((uint32_t *)v97 + 4) = 0;
                *((uint32_t *)v97 + 2) = 0x80000000;
                *((uint32_t *)v97 + 5) = 0x80000000;
                *(uint32_t *)(v157[17] + v96 + 4) = (uint32_t)(uintptr_t)(v97);
              }
              v98 = *((uint32_t *)v97 + 1);
              if ( v98 == (*((uint32_t *)v97 + 2) & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v97, 8, v210);
                v98 = *((uint32_t *)v97 + 1);
              }
              v99 = (hkIArchive::Self **)(*(uint32_t *)v97 + 8 * v98);
              *v99 = v144;
              v99[1] = v153;
              ++*((uint32_t *)v97 + 1);
            }
            else
            {
              v74 = *(uint32_t **)(v157[14] + 4 * v71);
              if ( v74 != nullptr )
              {
                v75 = v74[1];
                ++v74[2];
                v76 = v75;
                LOWORD(v75) = 0;
                v74[1] = v75 | (uint16_t)(v76 + 1);
                G4_VCALL<void>(v144, 92, v153, v74);
                v77 = v74[1];
                LOWORD(v77) = 0;
                v78 = v77 | (uint16_t)(v74[1] - 1);
                v70 = v74[2]-- == 1;
                v74[1] = v78;
                if ( v70 )
                  G4_VCALL<void>(v74, 4);
              }
              else
              {
                G4_VCALL<void>(v144, 92, v153, 0);
              }
            }
          }
          v153 = (hkIArchive::Self *)((char *)v153 + 1);
          result = v138;
        }
        while ( v153 != (hkIArchive::Self *)v138 );
      }
      return result;
    case 8:
      result = G4_VCALL<int>(*v137, 20, v138);
      if ( v138 > 0 )
      {
        v154 = 0;
        v168 = (hkTypeManager::Type::Self *)(v157 + 1);
        do
        {
          hkIArchive::readArrayGeneric(v168, &v189, 1, 1);
          v79 = (uint8_t)(v189 & 0x7F) >> 1;
          v145 = v189 & 1;
          if ( (v189 & 0x80u) != 0 )
          {
            v80 = 6;
            do
            {
              hkIArchive::readArrayGeneric(v168, &v189, 1, 1);
              v81 = v80;
              v80 += 7;
              v79 |= (v189 & 0x7F) << v81;
            }
            while ( (v189 & 0x80u) != 0 );
          }
          if ( v145 != 0 )
            v79 = -v79;
          v82 = (uint32_t *)G4_VCALL<int>(*v137, 96, v154);
          v189 = (int)(uintptr_t)(v82);
          if ( v82 != nullptr )
          {
            v83 = v82[1];
            ++v82[2];
            v84 = v83;
            LOWORD(v83) = 0;
            v82[1] = v83 | (uint16_t)(v84 + 1);
          }
          G4_VCALL<void>(v82, 20, v79);
          sub_18BDF90(v79);
          v85 = (uint32_t *)v189;
          if ( v189 != 0 )
          {
            v86 = *(uint32_t *)(v189 + 4);
            v87 = *(uint32_t *)(v189 + 8);
            LOWORD(v86) = 0;
            *(uint32_t *)(v189 + 4) = v86 | (uint16_t)(*(uint32_t *)(v189 + 4) - 1);
            v85[2] = v87 - 1;
            if ( v87 == 1 )
              G4_VCALL<void>(v85, 4);
          }
          ++v154;
          result = v138;
        }
        while ( v154 != v138 );
      }
      return result;
    case 9:
      if ( *(uint32_t *)result == 9 && **(uint32_t **)(result + 4) == 3 )
      {
        v10 = *(uint32_t *)(result + 8);
        if ( (v10 & 0xFFFFFFF7) == 4 || v10 == 8 || v10 == 16 )
        {
          v172 = (hkTypeManager::Type::Self *)result;
          v11 = *v137;
          v12 = *(uint32_t *)*v137;
          v209 = &v181;
          v208 = v11;
          (*(void (**)(int *))(v12 + 36))(&v176);
          if ( v176 != 0 )
          {
            v115 = hkTypeManager::Type::getTupleSize(v172);
            if ( v115 == 4 )
            {
              v192 = nullptr;
              hkIArchive::readArrayGeneric((hkIArchive::Self *)(v157 + 1), &v180, 1, 1);
              v121 = (uint8_t)(v180 & 0x7F) >> 1;
              v169 = v180 & 1;
              if ( (v180 & 0x80u) != 0 )
              {
                v122 = 6;
                do
                {
                  v156 = v122;
                  hkIArchive::readArrayGeneric((hkIArchive::Self *)(v157 + 1), &v180, 1, 1);
                  v122 = v156 + 7;
                  v121 |= (v180 & 0x7F) << v156;
                }
                while ( (v180 & 0x80u) != 0 );
              }
              if ( v169 != 0 )
                v121 = -v121;
              v115 = v121;
            }
            v116 = nullptr;
            result = v138;
            if ( v138 > 0 )
            {
              do
              {
                hkIArchive::readArrayGeneric((hkIArchive::Self *)(v157 + 1), &v189, 4, v115);
                v117 = *v137;
                v118 = *(uint32_t *)*v137;
                v208 = v116;
                v116 = (hkIArchive::Self *)((char *)v116 + 1);
                result = (*(int (**)(hkIArchive::Self *, hkIArchive::Self *, int *))(v118 + 52))(v117, v208, &v189);
              }
              while ( v116 != (hkIArchive::Self *)v138 );
            }
          }
          else
          {
            v13 = hkTypeManager::Type::getTupleSize(v172);
            v163 = (hkTypeManager::Type::Self *)(v157 + 1);
            if ( v13 == 4 )
            {
              hkIArchive::readArrayGeneric((hkIArchive::Self *)(v157 + 1), &v189, 1, 1);
              v119 = (uint8_t)(v189 & 0x7F) >> 1;
              v161 = v189 & 1;
              if ( (v189 & 0x80u) != 0 )
              {
                v120 = 6;
                do
                {
                  v148 = (hkIArchive::Self *)v120;
                  hkIArchive::readArrayGeneric(v163, &v189, 1, 1);
                  v120 = (int)(uintptr_t)(v148) + 7;
                  v119 |= (v189 & 0x7F) << (char)(uintptr_t)(v148);
                }
                while ( (v189 & 0x80u) != 0 );
              }
              v14 = -v119;
              if ( v161 == 0 )
                v14 = v119;
            }
            else
            {
              v14 = v13;
            }
            v15 = nullptr;
            v189 = 0;
            v190 = nullptr;
            v191 = 0x80000000;
            if ( v13 * v138 > 0 )
            {
              v173 = (hkTypeManager::Type::Self *)v14;
              hkArrayUtil::reserve(
                (hkArrayUtil::Self *)&v176,
                (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc,
                &v189,
                v13 * v138,
                4);
              v15 = (void *)v189;
              v14 = (int)(uintptr_t)(v173);
            }
            v158 = v14;
            v174 = (hkTypeManager::Type::Self *)(v14 * v138);
            v190 = (hkIArchive::Self *)(v13 * v138);
            hkIArchive::readArrayGeneric(v163, v15, 4, v14 * v138);
            v16 = v189;
            if ( v13 != v158 )
            {
              v17 = (uint32_t *)(v189 + 4 * ((uint32_t)(uintptr_t)(v174) - v158));
              v18 = (uint32_t *)(v189 + 4 * (v13 * v138 - v13));
              if ( v138 > 0 )
              {
                v19 = 0;
                do
                {
                  v18[3] = 0;
                  v17 -= 3;
                  ++v19;
                  v18[2] = v17[5];
                  v18 -= 4;
                  v18[5] = v17[4];
                  v18[4] = v17[3];
                }
                while ( v19 != v138 );
                v16 = v189;
              }
            }
            result = G4_VCALL<int>(*v137, 152, v16, v138);
            v20 = v191;
            v190 = nullptr;
            if ( v191 >= 0 )
            {
LABEL_50:
              v26 = 4 * v20;
              v27 = hkContainerTempAllocator::s_alloc[0];
              return (*(int (**)(uint32_t *, int, int))(v27 + 20))((uint32_t *)(hkContainerTempAllocator::s_alloc), v189, v26);
            }
          }
        }
      }
      return result;
    default:
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_18BF760  (binary VA: 0x18bf760)
// Original: sub_18BF760
// ----------------------------------------------------------------------------
uint32_t * sub_18BF760(uint32_t *a1, int a2, int a3)
{
  hkIArchive::Self *v3;
  int v4;
  int v5;
  int v6;
  char v7;
  int v9;
  int v10;
  int16_t v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;
  int v18;
  int v19;
  char v20;
  void *v21;
  int v22;
  int v23;
  char v24;
  int v25;
  int v26;
  int v27;
  char v28;
  char *v29;
  int v30;
  int v31;
  void *v32;
  int v33;
  int v34;
  int v35;
  char v36;
  int v37;
  bool v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  unsigned int v45;
  int i;
  int v47;
  int v48;
  char v49;
  int v50;
  int v51;
  int v52;
  int v53;
  char v54;
  int v55;
  int v56;
  int v57;
  int v58;
  char v59;
  void *v60;
  int v61;
  int v62;
  char v63;
  void *v64;
  hkTypeManager::Self *v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  char v72;
  int v73;
  int v74;
  char v75;
  int v76;
  int v77;
  int v78;
  int v79;
  char v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int j;
  int v86;
  int v87;
  int address;
  int *v89;
  void *v90;
  int v91;
  int v92;
  int v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef char _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef char _g4_t_v109;
  typedef char _g4_t_v110;
  typedef char _g4_t_v111;
  typedef int _g4_t_v112;
  typedef void *_g4_t_v113;
  typedef char _g4_t_v114;
  typedef char _g4_t_v115;
  typedef uint32_t *_g4_t_v116;
  typedef char _g4_t_v117;
  typedef char _g4_t_v118;
  typedef void *_g4_t_v119;
  typedef hkMemoryAllocator::Self *_g4_t_v120;
  typedef int _g4_t_v121;
  typedef char _g4_t_v124;
  typedef char _g4_t_v125;
  typedef char _g4_t_v126;
  typedef char _g4_t_v127;
  typedef int _g4_t_v128;
  typedef void *_g4_t_v129;
  typedef void *_g4_t_v130;
  typedef hkIArchive::Self *_g4_t_v131;
  typedef uint32_t _g4_t_v132[2];
  typedef char _g4_t_v133[12];
  typedef uint32_t _g4_t_v134[3];
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef int *_g4_t_v138;
  enum : size_t {
    _g4_s0 = 688u,
    _g4_s1 = (4u + sizeof(_g4_t_v94)) > _g4_s0 ? (4u + sizeof(_g4_t_v94)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v95)) > _g4_s1 ? (4u + sizeof(_g4_t_v95)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v96)) > _g4_s2 ? (4u + sizeof(_g4_t_v96)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v97)) > _g4_s3 ? (4u + sizeof(_g4_t_v97)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v98)) > _g4_s4 ? (8u + sizeof(_g4_t_v98)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v99)) > _g4_s5 ? (8u + sizeof(_g4_t_v99)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v100)) > _g4_s6 ? (8u + sizeof(_g4_t_v100)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v101)) > _g4_s7 ? (8u + sizeof(_g4_t_v101)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v102)) > _g4_s8 ? (8u + sizeof(_g4_t_v102)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v103)) > _g4_s9 ? (8u + sizeof(_g4_t_v103)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v104)) > _g4_s10 ? (8u + sizeof(_g4_t_v104)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v105)) > _g4_s11 ? (12u + sizeof(_g4_t_v105)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v106)) > _g4_s12 ? (16u + sizeof(_g4_t_v106)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v107)) > _g4_s13 ? (16u + sizeof(_g4_t_v107)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v108)) > _g4_s14 ? (20u + sizeof(_g4_t_v108)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v109)) > _g4_s15 ? (20u + sizeof(_g4_t_v109)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v110)) > _g4_s16 ? (24u + sizeof(_g4_t_v110)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v111)) > _g4_s17 ? (24u + sizeof(_g4_t_v111)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_v112)) > _g4_s18 ? (24u + sizeof(_g4_t_v112)) : _g4_s18,
    _g4_s20 = (24u + sizeof(_g4_t_v113)) > _g4_s19 ? (24u + sizeof(_g4_t_v113)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v114)) > _g4_s20 ? (28u + sizeof(_g4_t_v114)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v115)) > _g4_s21 ? (28u + sizeof(_g4_t_v115)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_v116)) > _g4_s22 ? (28u + sizeof(_g4_t_v116)) : _g4_s22,
    _g4_s24 = (32u + sizeof(_g4_t_v117)) > _g4_s23 ? (32u + sizeof(_g4_t_v117)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v118)) > _g4_s24 ? (32u + sizeof(_g4_t_v118)) : _g4_s24,
    _g4_s26 = (32u + sizeof(_g4_t_v119)) > _g4_s25 ? (32u + sizeof(_g4_t_v119)) : _g4_s25,
    _g4_s27 = (32u + sizeof(_g4_t_v120)) > _g4_s26 ? (32u + sizeof(_g4_t_v120)) : _g4_s26,
    _g4_s28 = (32u + sizeof(_g4_t_v121)) > _g4_s27 ? (32u + sizeof(_g4_t_v121)) : _g4_s27,
    _g4_s29 = (48u + sizeof(_g4_t_v124)) > _g4_s28 ? (48u + sizeof(_g4_t_v124)) : _g4_s28,
    _g4_s30 = (48u + sizeof(_g4_t_v125)) > _g4_s29 ? (48u + sizeof(_g4_t_v125)) : _g4_s29,
    _g4_s31 = (48u + sizeof(_g4_t_v126)) > _g4_s30 ? (48u + sizeof(_g4_t_v126)) : _g4_s30,
    _g4_s32 = (48u + sizeof(_g4_t_v127)) > _g4_s31 ? (48u + sizeof(_g4_t_v127)) : _g4_s31,
    _g4_s33 = (48u + sizeof(_g4_t_v128)) > _g4_s32 ? (48u + sizeof(_g4_t_v128)) : _g4_s32,
    _g4_s34 = (48u + sizeof(_g4_t_v129)) > _g4_s33 ? (48u + sizeof(_g4_t_v129)) : _g4_s33,
    _g4_s35 = (48u + sizeof(_g4_t_v130)) > _g4_s34 ? (48u + sizeof(_g4_t_v130)) : _g4_s34,
    _g4_s36 = (52u + sizeof(_g4_t_v131)) > _g4_s35 ? (52u + sizeof(_g4_t_v131)) : _g4_s35,
    _g4_s37 = (56u + sizeof(_g4_t_v132)) > _g4_s36 ? (56u + sizeof(_g4_t_v132)) : _g4_s36,
    _g4_s38 = (64u + sizeof(_g4_t_v133)) > _g4_s37 ? (64u + sizeof(_g4_t_v133)) : _g4_s37,
    _g4_s39 = (76u + sizeof(_g4_t_v134)) > _g4_s38 ? (76u + sizeof(_g4_t_v134)) : _g4_s38,
    _g4_s40 = (88u + sizeof(_g4_t_v135)) > _g4_s39 ? (88u + sizeof(_g4_t_v135)) : _g4_s39,
    _g4_s41 = (92u + sizeof(_g4_t_v136)) > _g4_s40 ? (92u + sizeof(_g4_t_v136)) : _g4_s40,
    _g4_s42 = (96u + sizeof(_g4_t_v137)) > _g4_s41 ? (96u + sizeof(_g4_t_v137)) : _g4_s41,
    _g4_s43 = (596u + sizeof(_g4_t_v138)) > _g4_s42 ? (596u + sizeof(_g4_t_v138)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 4u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 4u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 4u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 4u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 8u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 8u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 8u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 8u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 8u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 8u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 8u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 12u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 16u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 16u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 20u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 20u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 24u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 24u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 24u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 24u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 28u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 28u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 28u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 32u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 32u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 32u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 32u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 32u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 48u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 48u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 48u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 48u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 48u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 48u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 48u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 52u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 56u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 64u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 76u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 88u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 92u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 96u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 596u);

  v138 = &a3;
  v131 = (hkIArchive::Self *)(a2 + 4);
  v3 = (hkIArchive::Self *)(a2 + 4);
  hkIArchive::readArrayGeneric((hkIArchive::Self *)(a2 + 4), v134, 4, 1);
  v4 = v134[0];
  hkIArchive::readArrayGeneric(v3, v134, 4, 1);
  if ( v134[0] == -804128050 && v4 == -894431970 )
  {
    hkIArchive::readArrayGeneric(v131, v134, 1, 1);
    v5 = (uint8_t)(v134[0] & 0x7F) >> 1;
    v124 = v134[0] & 1;
    if ( SLOBYTE(v134[0]) < 0 )
    {
      v6 = 6;
      do
      {
        hkIArchive::readArrayGeneric(v131, v134, 1, 1);
        v7 = v6;
        v6 += 7;
        v5 |= (v134[0] & 0x7F) << v7;
      }
      while ( SLOBYTE(v134[0]) < 0 );
    }
    while ( 1 )
    {
      if ( v124 != 0 )
        v5 = -v5;
      switch ( v5 )
      {
        case 1:
          hkIArchive::readArrayGeneric(v131, v134, 1, 1);
          v26 = (uint8_t)(v134[0] & 0x7F) >> 1;
          v125 = v134[0] & 1;
          if ( SLOBYTE(v134[0]) < 0 )
          {
            v27 = 6;
            do
            {
              hkIArchive::readArrayGeneric(v131, v134, 1, 1);
              v28 = v27;
              v27 += 7;
              v26 |= (v134[0] & 0x7F) << v28;
            }
            while ( SLOBYTE(v134[0]) < 0 );
          }
          if ( v125 != 0 )
            v26 = -v26;
          *(uint32_t *)a2 = v26;
          if ( v26 == 1 )
          {
            hkIArchive::readArrayGeneric(v131, v134, 1, 1);
            v34 = (uint8_t)(v134[0] & 0x7F) >> 1;
            v126 = v134[0] & 1;
            if ( SLOBYTE(v134[0]) < 0 )
            {
              v35 = 6;
              do
              {
                hkIArchive::readArrayGeneric(v131, v134, 1, 1);
                v36 = v35;
                v35 += 7;
                v34 |= (v134[0] & 0x7F) << v36;
              }
              while ( SLOBYTE(v134[0]) < 0 );
            }
            if ( v126 != 0 )
              v34 = -v34;
            if ( v34 != 1 )
              goto LABEL_12;
            v120 = (hkMemoryAllocator::Self *)(a2 + 40);
            v37 = 0;
            v38 = (*(uint32_t *)(a2 + 48) & 0x3FFFFFFF) == 0;
            *(uint32_t *)(a2 + 44) = 0;
            if ( v38 )
            {
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v120, &loc_4, v100);
              v37 = 4 * *(uint32_t *)(a2 + 44);
            }
            *(uint32_t *)(*(uint32_t *)(a2 + 40) + v37) = (uint32_t)(uintptr_t)(&unk_1B15112);
            v39 = *(uint32_t *)(a2 + 44) + 1;
            v40 = *(uint32_t *)(a2 + 48) & 0x3FFFFFFF;
            *(uint32_t *)(a2 + 44) = v39;
            if ( v39 == v40 )
            {
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v120, &loc_4, v100);
              *(uint32_t *)(*(uint32_t *)(a2 + 40) + 4 * *(uint32_t *)(a2 + 44)) = 0;
              v86 = *(uint32_t *)(a2 + 44);
              v42 = *(uint32_t *)(a2 + 48) & 0x3FFFFFFF;
              v43 = v86 + 1753;
              v44 = v86 + 1;
              *(uint32_t *)(a2 + 44) = v44;
              if ( v43 <= v42 )
              {
LABEL_63:
                v45 = *(uint32_t *)(a2 + 40) + 4 * v44;
                if ( v45 + 16 <= (unsigned int)(uintptr_t)(HK_TAG_STRING_LIST) || v45 >= (unsigned int)off_20C98F0 )
                {
                  for ( i = 0; i != 1752; i += 4 )
                    *(__m128i *)(v45 + i * 4) = *(__m128i *)&HK_TAG_STRING_LIST[i];
                }
                else
                {
                  for ( j = 0; j != 1752; ++j )
                    *(uint32_t *)(v45 + j * 4) = HK_TAG_STRING_LIST[j];
                }
                *(uint32_t *)(a2 + 44) = v43;
                *(uint32_t *)(a2 + 52) = 1754;
                goto LABEL_20;
              }
            }
            else
            {
              *(uint32_t *)(*(uint32_t *)(a2 + 40) + 4 * v39) = 0;
              v41 = *(uint32_t *)(a2 + 44);
              v42 = *(uint32_t *)(a2 + 48) & 0x3FFFFFFF;
              v43 = v41 + 1753;
              v44 = v41 + 1;
              *(uint32_t *)(a2 + 44) = v44;
              if ( v42 >= v43 )
                goto LABEL_63;
            }
            v87 = 2 * v42;
            if ( 2 * v42 < v43 )
              v87 = v43;
            hkArrayUtil::reserve(
              (hkArrayUtil::Self *)v132,
              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
              v120,
              v87,
              4);
            v44 = *(uint32_t *)(a2 + 44);
            goto LABEL_63;
          }
          if ( v26 > 1 )
          {
            if ( v26 > 5 )
            {
LABEL_49:
              hkErrStream::Construct((hkErrStream::Self *)v133, (hkString::Self *)v134, 512);
              v29 = *(char **)a2;
              v30 = hkOstream::opShl((int)(uintptr_t)(v133), (hkString::Self *)"Unrecognised tagfile version ");
              hkOstream::opShl(v30, v29);
              hkError::messageWarning(
                (hkError::Self *)0x2AB6036F,
                (int)(uintptr_t)(v134),
                "Tagfile/Binary/hkBinaryTagfileReader.cpp",
                (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_364)->st_value,
                v105);
              goto LABEL_11;
            }
            v77 = *(uint32_t *)(a2 + 60);
            if ( v77 == (*(uint32_t *)(a2 + 64) & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)(a2 + 56),
                &loc_4,
                v99);
              v77 = *(uint32_t *)(a2 + 60);
            }
            *(uint32_t *)(*(uint32_t *)(a2 + 56) + 4 * v77) = 0;
            ++*(uint32_t *)(a2 + 60);
            if ( *(int *)a2 > 3 )
            {
              hkIArchive::readArrayGeneric(v131, v134, 1, 1);
              v78 = (uint8_t)(v134[0] & 0x7F) >> 1;
              v127 = v134[0] & 1;
              if ( SLOBYTE(v134[0]) < 0 )
              {
                v79 = 6;
                do
                {
                  hkIArchive::readArrayGeneric(v131, v134, 1, 1);
                  v80 = v79;
                  v79 += 7;
                  v78 |= (v134[0] & 0x7F) << v80;
                }
                while ( SLOBYTE(v134[0]) < 0 );
              }
              if ( v127 != 0 )
                v78 = -v78;
              if ( v78 > 0 )
              {
                address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
                v130 = (void *)hkMemoryRouter::easyAlloc(
                                 *(hkMemoryRouter::Self **)(*(uint32_t *)address + 44),
                                 (hkMemoryAllocator::Self *)(v78 + 1),
                                 v97);
                hkIArchive::readRaw(v131, v130, v78);
                v89 = (int *)a2;
                v90 = v130;
                *((uint8_t *)v130 + v78) = 0;
                v91 = *(uint32_t *)(a2 + 44);
                if ( v91 == (*(uint32_t *)(a2 + 48) & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)(a2 + 40),
                    &loc_4,
                    v104);
                  v91 = *(uint32_t *)(a2 + 44);
                  v90 = v130;
                  v89 = (int *)a2;
                }
                *(uint32_t *)(v89[10] + 4 * v91) = (uint32_t)(uintptr_t)(v90);
                ++v89[11];
                v81 = *v89;
              }
              else
              {
                v81 = *(uint32_t *)a2;
              }
              if ( v81 > 4 )
              {
                hkIArchive::readArrayGeneric(v131, v134, 2, 1);
                hkIArchive::readArrayGeneric(v131, v134, 2, 1);
                v128 = LOWORD(v134[0]);
                if ( LOWORD(v134[0]) != 0 )
                {
                  v82 = 0;
                  do
                  {
                    ++v82;
                    hkIArchive::readArrayGeneric(v131, v134, 2, 1);
                  }
                  while ( v82 < v128 );
                }
              }
            }
          }
          else if ( v26 != 0 )
          {
            goto LABEL_49;
          }
          goto LABEL_20;
        case 2:
          v135 = 0;
          v136 = 0;
          v137 = 0x80000000;
          hkIArchive::readArrayGeneric(v131, v133, 1, 1);
          v18 = (uint8_t)(v133[0] & 0x7F) >> 1;
          v117 = v133[0] & 1;
          if ( v133[0] < 0 )
          {
            v19 = 6;
            do
            {
              hkIArchive::readArrayGeneric(v131, v133, 1, 1);
              v20 = v19;
              v19 += 7;
              v18 |= (v133[0] & 0x7F) << v20;
            }
            while ( v133[0] < 0 );
          }
          if ( v117 != 0 )
            v18 = -v18;
          if ( v18 > 0 )
          {
            v31 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
            v119 = (void *)hkMemoryRouter::easyAlloc(
                             *(hkMemoryRouter::Self **)(*(uint32_t *)v31 + 44),
                             (hkMemoryAllocator::Self *)(v18 + 1),
                             v94);
            hkIArchive::readRaw(v131, v119, v18);
            v32 = v119;
            *((uint8_t *)v119 + v18) = 0;
            v33 = *(uint32_t *)(a2 + 44);
            if ( v33 == (*(uint32_t *)(a2 + 48) & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore(
                (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                (hkMemoryAllocator::Self *)(a2 + 40),
                &loc_4,
                v98);
              v33 = *(uint32_t *)(a2 + 44);
              v32 = v119;
            }
            *(uint32_t *)(*(uint32_t *)(a2 + 40) + 4 * v33) = (uint32_t)(uintptr_t)(v32);
            v21 = v32;
            ++*(uint32_t *)(a2 + 44);
          }
          else
          {
            v21 = *(void **)(*(uint32_t *)(a2 + 40) - 4 * v18);
          }
          v134[0] = (uint32_t)(uintptr_t)(v21);
          hkIArchive::readArrayGeneric(v131, v133, 1, 1);
          v22 = (uint8_t)(v133[0] & 0x7F) >> 1;
          v118 = v133[0] & 1;
          if ( v133[0] < 0 )
          {
            v23 = 6;
            do
            {
              hkIArchive::readArrayGeneric(v131, v133, 1, 1);
              v24 = v23;
              v23 += 7;
              v22 |= (v133[0] & 0x7F) << v24;
            }
            while ( v133[0] < 0 );
          }
          if ( v118 != 0 )
            v22 = -v22;
          v134[1] = v22;
          v25 = 1;
          (*(void (**)(uint32_t *))(**(uint32_t **)(a2 + 20) + 32))(v132);
          if ( v132[0] == 0 )
            goto LABEL_37;
          hkIArchive::readArrayGeneric(v131, v133, 1, 1);
          v47 = (uint8_t)(v133[0] & 0x7F) >> 1;
          v114 = v133[0] & 1;
          if ( v133[0] < 0 )
          {
            v48 = 6;
            do
            {
              hkIArchive::readArrayGeneric(v131, v133, 1, 1);
              v49 = v48;
              v48 += 7;
              v47 |= (v133[0] & 0x7F) << v49;
            }
            while ( v133[0] < 0 );
          }
          if ( v114 != 0 )
            v47 = -v47;
          v50 = 0;
          if ( v47 >= 0 )
          {
            v51 = *(uint32_t *)(*(uint32_t *)(a2 + 28) + 4 * v47);
            if ( v51 != 0 )
              v50 = (*(int (**)(uint32_t))(*(uint32_t *)v51 + 12))(*(uint32_t *)(*(uint32_t *)(a2 + 28) + 4 * v47));
          }
          v134[2] = v50;
          hkIArchive::readArrayGeneric(v131, v133, 1, 1);
          v52 = (uint8_t)(v133[0] & 0x7F) >> 1;
          v115 = v133[0] & 1;
          if ( v133[0] < 0 )
          {
            v53 = 6;
            do
            {
              hkIArchive::readArrayGeneric(v131, v133, 1, 1);
              v54 = v53;
              v53 += 7;
              v52 |= (v133[0] & 0x7F) << v54;
            }
            while ( v133[0] < 0 );
          }
          if ( v115 != 0 )
            v52 = -v52;
          if ( v52 <= (v137 & 0x3FFFFFFF) )
          {
            v136 = v52;
            if ( v52 <= 0 )
              goto LABEL_100;
          }
          else
          {
            v55 = 2 * (v137 & 0x3FFFFFFF);
            if ( v52 >= v55 )
              v55 = v52;
            hkArrayUtil::reserve(
              (hkArrayUtil::Self *)v132,
              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
              &v135,
              v55,
              12);
            v136 = v52;
          }
          v121 = 0;
          v56 = 0;
          do
          {
            v116 = (uint32_t *)(v135 + 12 * v56);
            hkIArchive::readArrayGeneric(v131, v133, 1, 1);
            v57 = (uint8_t)(v133[0] & 0x7F) >> 1;
            v110 = v133[0] & 1;
            if ( v133[0] < 0 )
            {
              v58 = 6;
              do
              {
                hkIArchive::readArrayGeneric(v131, v133, 1, 1);
                v59 = v58;
                v58 += 7;
                v57 |= (v133[0] & 0x7F) << v59;
              }
              while ( v133[0] < 0 );
            }
            if ( v110 != 0 )
              v57 = -v57;
            if ( v57 > 0 )
            {
              v68 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
              v113 = (void *)hkMemoryRouter::easyAlloc(
                               *(hkMemoryRouter::Self **)(*(uint32_t *)v68 + 44),
                               (hkMemoryAllocator::Self *)(v57 + 1),
                               v95);
              hkIArchive::readRaw(v131, v113, v57);
              v60 = v113;
              *((uint8_t *)v113 + v57) = 0;
              v69 = *(uint32_t *)(a2 + 44);
              if ( v69 == (*(uint32_t *)(a2 + 48) & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)(a2 + 40),
                  &loc_4,
                  v102);
                v69 = *(uint32_t *)(a2 + 44);
                v60 = v113;
              }
              *(uint32_t *)(*(uint32_t *)(a2 + 40) + 4 * v69) = (uint32_t)(uintptr_t)(v60);
              ++*(uint32_t *)(a2 + 44);
            }
            else
            {
              v60 = *(void **)(*(uint32_t *)(a2 + 40) - 4 * v57);
            }
            *v116 = (uint32_t)(uintptr_t)(v60);
            hkIArchive::readArrayGeneric(v131, v133, 1, 1);
            v61 = (uint8_t)(v133[0] & 0x7F) >> 1;
            v111 = v133[0] & 1;
            if ( v133[0] < 0 )
            {
              v62 = 6;
              do
              {
                hkIArchive::readArrayGeneric(v131, v133, 1, 1);
                v63 = v62;
                v62 += 7;
                v61 |= (v133[0] & 0x7F) << v63;
              }
              while ( v133[0] < 0 );
            }
            v108 = 0;
            if ( v111 != 0 )
              v61 = -v61;
            v112 = v61;
            if ( (v61 & 0x20) != 0 )
            {
              hkIArchive::readArrayGeneric(v131, v133, 1, 1);
              v70 = (uint8_t)(v133[0] & 0x7F) >> 1;
              v109 = v133[0] & 1;
              if ( v133[0] < 0 )
              {
                v71 = 6;
                do
                {
                  hkIArchive::readArrayGeneric(v131, v133, 1, 1);
                  v72 = v71;
                  v71 += 7;
                  v70 |= (v133[0] & 0x7F) << v72;
                }
                while ( v133[0] < 0 );
              }
              if ( v109 != 0 )
                v70 = -v70;
              v108 = v70;
            }
            v64 = nullptr;
            if ( (v112 & 0xFu) - 8 <= 1 )
            {
              hkIArchive::readArrayGeneric(v131, v133, 1, 1);
              v73 = (uint8_t)(v133[0] & 0x7F) >> 1;
              v106 = v133[0] & 1;
              if ( v133[0] < 0 )
              {
                v74 = 6;
                do
                {
                  hkIArchive::readArrayGeneric(v131, v133, 1, 1);
                  v75 = v74;
                  v74 += 7;
                  v73 |= (v133[0] & 0x7F) << v75;
                }
                while ( v133[0] < 0 );
              }
              v76 = -v73;
              if ( v106 == 0 )
                v76 = v73;
              if ( v76 > 0 )
              {
                v107 = v76;
                v83 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
                v64 = (void *)hkMemoryRouter::easyAlloc(
                                *(hkMemoryRouter::Self **)(*(uint32_t *)v83 + 44),
                                (hkMemoryAllocator::Self *)(v107 + 1),
                                v96);
                hkIArchive::readRaw(v131, v64, v107);
                *((uint8_t *)v64 + v107) = 0;
                v84 = *(uint32_t *)(a2 + 44);
                if ( v84 == (*(uint32_t *)(a2 + 48) & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)(a2 + 40),
                    &loc_4,
                    v103);
                  v84 = *(uint32_t *)(a2 + 44);
                }
                *(uint32_t *)(*(uint32_t *)(a2 + 40) + 4 * v84) = (uint32_t)(uintptr_t)(v64);
                ++*(uint32_t *)(a2 + 44);
              }
              else
              {
                v64 = *(void **)(*(uint32_t *)(a2 + 40) - 4 * v76);
              }
              if ( v64 != nullptr )
                (*(void (**)(uint32_t, void *))(**(uint32_t **)(a2 + 20) + 44))(*(uint32_t *)(a2 + 20), v64);
            }
            v65 = (hkTypeManager::Self *)(*(int (**)(uint32_t))(**(uint32_t **)(a2 + 20) + 52))(*(uint32_t *)(a2 + 20));
            ++v121;
            v116[1] = (uint32_t)(uintptr_t)(hkTypeManager::getType(v65, v112, (hkString::Self *)v64, v108));
            v56 = v121;
          }
          while ( v121 < v136 );
LABEL_100:
          v66 = (*(int (**)(uint32_t, uint32_t *))(**(uint32_t **)(a2 + 20) + 20))(*(uint32_t *)(a2 + 20), v134);
          v67 = *(uint32_t *)(a2 + 32);
          if ( v67 == (*(uint32_t *)(a2 + 36) & 0x3FFFFFFF) )
          {
            v129 = (void *)v66;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(a2 + 28),
              &loc_4,
              v101);
            v67 = *(uint32_t *)(a2 + 32);
            v66 = (int)(uintptr_t)(v129);
          }
          v25 = 0;
          *(uint32_t *)(*(uint32_t *)(a2 + 28) + 4 * v67) = v66;
          ++*(uint32_t *)(a2 + 32);
LABEL_37:
          v136 = 0;
          if ( v137 >= 0 )
            (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              v135,
              12 * v137);
          if ( v25 == 1 )
            goto LABEL_12;
          goto LABEL_20;
        case 3:
        case 4:
        case 6:
          sub_18BC720(v134, a2, v5, nullptr);
          v12 = (uint32_t *)v134[0];
          if ( *(int *)a2 <= 1 )
          {
            *a1 = v134[0];
            if ( v12 != nullptr )
            {
              v92 = v12[2];
              HIWORD(v93) = HIWORD(v12[1]);
              LOWORD(v93) = 0;
              v12[1] = v93 | (uint16_t)v12[1];
              if ( v92 == 0 )
                G4_VCALL<void>(v12, 4);
            }
            return a1;
          }
          if ( v134[0] != 0 )
          {
            v13 = *(uint32_t *)(v134[0] + 4);
            LOWORD(v13) = 0;
            v14 = v13 | (uint16_t)(*(uint32_t *)(v134[0] + 4) - 1);
            v15 = *(uint32_t *)(v134[0] + 8);
            *(uint32_t *)(v134[0] + 4) = v14;
            v12[2] = v15 - 1;
            if ( v15 == 1 )
              G4_VCALL<void>(v12, 4);
          }
LABEL_20:
          hkIArchive::readArrayGeneric(v131, v134, 1, 1);
          v5 = (uint8_t)(v134[0] & 0x7F) >> 1;
          v124 = v134[0] & 1;
          if ( SLOBYTE(v134[0]) < 0 )
          {
            v16 = 6;
            do
            {
              hkIArchive::readArrayGeneric(v131, v134, 1, 1);
              v17 = v16;
              v16 += 7;
              v5 |= (v134[0] & 0x7F) << v17;
            }
            while ( SLOBYTE(v134[0]) < 0 );
          }
          break;
        case 7:
          v9 = *(uint32_t *)(*(uint32_t *)(a2 + 56) + 4);
          *a1 = v9;
          if ( v9 != 0 )
          {
            v10 = *(uint32_t *)(v9 + 4);
            ++*(uint32_t *)(v9 + 8);
            v11 = v10;
            LOWORD(v10) = 0;
            *(uint32_t *)(v9 + 4) = v10 | (uint16_t)(v11 + 1);
          }
          return a1;
        case -1:
          goto LABEL_12;
        default:
          goto LABEL_12;
      }
    }
  }
  hkErrStream::Construct((hkErrStream::Self *)v133, (hkString::Self *)v134, 512);
  hkOstream::opShl((int)(uintptr_t)(v133), (hkString::Self *)"This does not look like a binary tagfile (magic number mismatch)");
  hkError::messageWarning(
    (hkError::Self *)0x2AB6036F,
    (int)(uintptr_t)(v134),
    "Tagfile/Binary/hkBinaryTagfileReader.cpp",
    (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_324)->st_name + 2,
    v105);
LABEL_11:
  hkErrStream::Destroy((hkErrStream::Self *)v133);
LABEL_12:
  *a1 = 0;
  return a1;
}


