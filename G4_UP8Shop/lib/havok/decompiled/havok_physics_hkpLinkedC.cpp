#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpLinkedC.h"

// ----------------------------------------------------------------------------
// Function: hkpLinkedCollidable::staticClass  (binary VA: 0x169b1c0)
// Original: hkpLinkedCollidable::staticClass
// ----------------------------------------------------------------------------
void * hkpLinkedCollidable::staticClass()
{
  return &hkpLinkedCollidableClass;
}

// ----------------------------------------------------------------------------
// Function: hkpLinkedCollidable::getCollisionEntriesDeterministicUnchecked  (binary VA: 0x16d9d80)
// Original: hkpLinkedCollidable::getCollisionEntriesDeterministicUnchecked
// ----------------------------------------------------------------------------
char * hkpLinkedCollidable::getCollisionEntriesDeterministicUnchecked(hkpLinkedCollidable::Self *self)
{
  return (char *)self + 80;
}

// ----------------------------------------------------------------------------
// Function: hkpLinkedCollidable::getCollisionEntriesDeterministicUnchecked_ea16d9d90  (binary VA: 0x16d9d90)
// Original: hkpLinkedCollidable::getCollisionEntriesDeterministicUnchecked
// ----------------------------------------------------------------------------
char * hkpLinkedCollidable::getCollisionEntriesDeterministicUnchecked_ea16d9d90(hkpLinkedCollidable::Self *self)
{
  return (char *)self + 80;
}

// ----------------------------------------------------------------------------
// Function: hkpLinkedCollidable::getCollisionEntriesSorted  (binary VA: 0x16da160)
// Original: hkpLinkedCollidable::getCollisionEntriesSorted
// ----------------------------------------------------------------------------
int hkpLinkedCollidable::getCollisionEntriesSorted(int a1, int a2, int *a3)
{
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int result;
  typedef int _g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v22)) > _g4_s4 ? (20u + sizeof(_g4_t_v22)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);

  v3 = a3;
  v4 = a3[1];
  v5 = *(uint32_t *)(a2 + 84);
  v18 = v5;
  if ( v5 <= v4 )
    v4 = *(uint32_t *)(a2 + 84);
  v6 = a3[2] & 0x3FFFFFFF;
  if ( v5 > v6 )
  {
    v20 = v4;
    v7 = 2 * v6;
    if ( v7 < v5 )
      v7 = *(uint32_t *)(a2 + 84);
    hkArrayUtil::reserve((hkArrayUtil::Self *)v22, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a3, v7, 8);
    v4 = v20;
  }
  v8 = *(uint32_t *)(a2 + 80);
  v9 = *a3;
  if ( v4 > 0 )
  {
    v10 = 0;
    v11 = *a3;
    do
    {
      v12 = *(uint32_t *)(v8 + 8 * v10);
      *(uint32_t *)(v11 + 8 * v10 + 4) = *(uint32_t *)(v8 + 8 * v10 + 4);
      *(uint32_t *)(v11 + 8 * v10++) = v12;
    }
    while ( v10 != v4 );
    v3 = a3;
    v8 = *(uint32_t *)(a2 + 80);
    v9 = *a3;
  }
  v21 = 8 * v4 + v8;
  v13 = v9 + 8 * v4;
  v14 = 0;
  v15 = v18 - v4;
  if ( v15 > 0 )
  {
    v19 = v3;
    do
    {
      v16 = *(uint32_t *)(v21 + 8 * v14);
      *(uint32_t *)(v13 + 8 * v14 + 4) = *(uint32_t *)(v21 + 8 * v14 + 4);
      *(uint32_t *)(v13 + 8 * v14++) = v16;
    }
    while ( v14 != v15 );
    v3 = v19;
  }
  v3[1] = v18;
  result = *(char *)(a2 + 16);
  if ( *(uint8_t *)(a2 + result + 232) == 5 )
  {
    result = *v3;
    if ( v18 > 1 )
      return sub_16D9EF0(result, v18 - 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpLinkedCollidable::sortEntries  (binary VA: 0x16da2b0)
// Original: hkpLinkedCollidable::sortEntries
// ----------------------------------------------------------------------------
int hkpLinkedCollidable::sortEntries(hkpLinkedCollidable::Self *self)
{
  int v1;
  int result;
  int v3;

  v1 = *((uint32_t *)self + 21);
  if ( v1 > 1 )
  {
    sub_16D9EF0(*((uint32_t *)self + 20), v1 - 1);
    v1 = *((uint32_t *)self + 21);
  }
  result = 0;
  if ( v1 > 0 )
  {
    do
    {
      v3 = *(uint32_t *)(*((uint32_t *)self + 20) + 8 * result);
      *(uint16_t *)(v3 + 2 * (*(uint32_t *)(v3 + 20) == (uint32_t)(uintptr_t)(self)) + 4) = result++;
    }
    while ( *((uint32_t *)self + 21) > result );
  }
  return result;
}


