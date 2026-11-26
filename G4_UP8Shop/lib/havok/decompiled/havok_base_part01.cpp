#include "Core/Utils/DecompTypes.h"
#include "havok_base_part01.h"

// ----------------------------------------------------------------------------
// Function: hkCheckFlushDenormals  (binary VA: 0x1545750)
// Original: hkCheckFlushDenormals
// ----------------------------------------------------------------------------
void hkCheckFlushDenormals()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamColorTable::Destroy  (binary VA: 0x15459a0)
// Original: hkMonitorStreamColorTable::~hkMonitorStreamColorTable
// ----------------------------------------------------------------------------
void hkMonitorStreamColorTable::Destroy(hkMonitorStreamColorTable::Self *self)
{
  int v1;
  hkStringPtr::Self *v2;
  int v3;
  int v4;
  int v5;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20968B0);
  v1 = *((uint32_t *)self + 3) - 1;
  v2 = (hkStringPtr::Self *)(*((uint32_t *)self + 2) + 8 * v1);
  if ( v1 >= 0 )
  {
    do
    {
      --v1;
      hkStringPtr::Destroy(v2);
      v2 = (hkStringPtr::Self *)((char *)v2 - 8);
    }
    while ( v1 != -1 );
  }
  v3 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      8 * v3);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v4 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v5 = 24;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v5 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v4, 12, self, v5);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamColorTable::Destroy_ea1545a80  (binary VA: 0x1545a80)
// Original: hkMonitorStreamColorTable::~hkMonitorStreamColorTable
// ----------------------------------------------------------------------------
void hkMonitorStreamColorTable::Destroy_ea1545a80(hkMonitorStreamColorTable::Self *self)
{
  int v1;
  hkStringPtr::Self *v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20968B0);
  v1 = *((uint32_t *)self + 3) - 1;
  v2 = (hkStringPtr::Self *)(*((uint32_t *)self + 2) + 8 * v1);
  if ( v1 >= 0 )
  {
    do
    {
      --v1;
      hkStringPtr::Destroy(v2);
      v2 = (hkStringPtr::Self *)((char *)v2 - 8);
    }
    while ( v1 != -1 );
  }
  v3 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 3) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      8 * v3);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamColorTable::ColorPair::staticClass  (binary VA: 0x1545b20)
// Original: hkMonitorStreamColorTable::ColorPair::staticClass
// ----------------------------------------------------------------------------
void * hkMonitorStreamColorTable::ColorPair::staticClass()
{
  return &hkMonitorStreamColorTableColorPairClass;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamColorTable::staticClass  (binary VA: 0x1545b40)
// Original: hkMonitorStreamColorTable::staticClass
// ----------------------------------------------------------------------------
void * hkMonitorStreamColorTable::staticClass()
{
  return &hkMonitorStreamColorTableClass;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamFrameInfo::staticClass  (binary VA: 0x1545b60)
// Original: hkMonitorStreamFrameInfo::staticClass
// ----------------------------------------------------------------------------
void * hkMonitorStreamFrameInfo::staticClass()
{
  return &hkMonitorStreamFrameInfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamStringMap::StringMap::staticClass  (binary VA: 0x1545b80)
// Original: hkMonitorStreamStringMap::StringMap::staticClass
// ----------------------------------------------------------------------------
void * hkMonitorStreamStringMap::StringMap::staticClass()
{
  return &hkMonitorStreamStringMapStringMapClass;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamStringMap::staticClass  (binary VA: 0x1545ba0)
// Original: hkMonitorStreamStringMap::staticClass
// ----------------------------------------------------------------------------
void * hkMonitorStreamStringMap::staticClass()
{
  return &hkMonitorStreamStringMapClass;
}

// ----------------------------------------------------------------------------
// Function: hkArrayUtil::reserve  (binary VA: 0x1545f50)
// Original: hkArrayUtil::_reserve
// ----------------------------------------------------------------------------
hkArrayUtil::Self * hkArrayUtil::reserve(hkArrayUtil::Self *self, hkMemoryAllocator::Self *a2, int *a3, int a4, int a5)
{
  int v6;
  int v7;
  int v8;
  void *v10;
  int v18;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);

  v17[0] = a5 * a4;
  v6 = a3[2];
  if ( v6 < 0 )
  {
    v10 = (void *)G4_VCALL<int>(a2, 16, v17, v11, v12, v13, v14, v15, v16);
    if ( v10 == nullptr )
    {
      *a3 = 0;
      v8 = 1;
      v7 = 0;
      goto LABEL_4;
    }
    v18 = (int)(uintptr_t)(v10);
    memcpy(v10, (const void *)*a3, a3[1] * a5);
    *a3 = v18;
    goto LABEL_3;
  }
  v7 = G4_VCALL<int>(a2, 24, *a3, a5 * (v6 & 0x3FFFFFFF), v17, v13, v14, v15, v16);
  *a3 = v7;
  v8 = 1;
  if ( v7 != 0 )
  {
LABEL_3:
    v7 = a4 / a5;
    v8 = 0;
  }
LABEL_4:
  a3[2] = v7;
  *(uint32_t *)self = v8;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkArrayUtil::reserveMore  (binary VA: 0x1546030)
// Original: hkArrayUtil::_reserveMore
// ----------------------------------------------------------------------------
int hkArrayUtil::reserveMore(hkArrayUtil::Self *self, hkMemoryAllocator::Self *a2, int a3, int a4)
{
  int v4;
  int v6;
  int v7;
  void *v16;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v14)) > _g4_s5 ? (28u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v15)) > _g4_s6 ? (32u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);

  v4 = 1;
  v6 = *((uint32_t *)a2 + 1);
  if ( v6 != 0 )
    v4 = 2 * v6;
  v15[0] = a3 * v4;
  v7 = *((uint32_t *)a2 + 2);
  if ( v7 < 0 )
  {
    v16 = (void *)G4_VCALL<int>(self, 16, v15, v9, v10, v11, v12, v13, v14);
    memcpy(v16, *(const void **)a2, a3 * *((uint32_t *)a2 + 1));
    *(uint32_t *)a2 = (uint32_t)(uintptr_t)(v16);
  }
  else
  {
    *(uint32_t *)a2 = G4_VCALL<int>(self, 24, *(uint32_t *)a2, a3 * (v7 & 0x3FFFFFFF), v15, v11, v12, v13, v14);
  }
  *((uint32_t *)a2 + 2) = a4 / a3;
  return a4 / a3;
}

// ----------------------------------------------------------------------------
// Function: hkArrayUtil::reduce  (binary VA: 0x15460f0)
// Original: hkArrayUtil::_reduce
// ----------------------------------------------------------------------------
int hkArrayUtil::reduce(int *a1, int *a2, int a3, int dest, int a5)
{
  int v5;
  int v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v13)) > _g4_s5 ? (32u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);

  if ( dest != 0 && (v5 = a2[1]) < a5 )
  {
    memcpy((void *)dest, (const void *)*a2, a3 * v5);
    G4_VCALL<void>(a1, 20, *a2, (a2[2] & 0x3FFFFFFF) * a3, v8, v9, v10, v11, a1, v13[0], v13[1], v13[2], v13[3]);
    *a2 = dest;
    a2[2] = a5 | 0x80000000;
    return dest;
  }
  else
  {
    v6 = *a1;
    v13[0] = a3 * a5;
    *a2 = (*(int (**)(int *, int, int, uint32_t *, int, int, int, int))(v6 + 24))(
            a1,
            *a2,
            a3 * a2[2],
            v13,
            v9,
            v10,
            v11,
            v12);
    a2[2] = dest / a3;
    return dest / a3;
  }
}

// ----------------------------------------------------------------------------
// Function: hkFloat16Transform::staticClass  (binary VA: 0x15461d0)
// Original: hkFloat16Transform::staticClass
// ----------------------------------------------------------------------------
void * hkFloat16Transform::staticClass()
{
  return &hkFloat16TransformClass;
}

// ----------------------------------------------------------------------------
// Function: hkAndroidAssetManagerFileSystem::openWriter  (binary VA: 0x15462f0)
// Original: hkAndroidAssetManagerFileSystem::openWriter
// ----------------------------------------------------------------------------
uint32_t * hkAndroidAssetManagerFileSystem::openWriter(uint32_t *a1)
{
  *a1 = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkFileSystem::Iterator::Impl::Destroy  (binary VA: 0x1546300)
// Original: hkFileSystem::Iterator::Impl::~Impl
// ----------------------------------------------------------------------------
void hkFileSystem::Iterator::Impl::Destroy(hkFileSystem::Iterator::Impl::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkAndroidAssetManagerFileSystem::Destroy  (binary VA: 0x1546320)
// Original: hkAndroidAssetManagerFileSystem::~hkAndroidAssetManagerFileSystem
// ----------------------------------------------------------------------------
void hkAndroidAssetManagerFileSystem::Destroy(hkAndroidAssetManagerFileSystem::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkAndroidAssetManagerFileSystem::Destroy_ea15466d0  (binary VA: 0x15466d0)
// Original: hkAndroidAssetManagerFileSystem::~hkAndroidAssetManagerFileSystem
// ----------------------------------------------------------------------------
void hkAndroidAssetManagerFileSystem::Destroy_ea15466d0(hkAndroidAssetManagerFileSystem::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkAndroidAssetManagerFileSystem::createIterator  (binary VA: 0x1546790)
// Original: hkAndroidAssetManagerFileSystem::createIterator
// ----------------------------------------------------------------------------
hkAndroidAssetManagerFileSystem::Self * hkAndroidAssetManagerFileSystem::createIterator(hkAndroidAssetManagerFileSystem::Self *self, const char *a2, hkString::Self *a3, hkString::Self *a4)
{
  int v4;
  int address;
  uint32_t *v6;

  v4 = (int)(uintptr_t)(AAssetManager_openDir((AAssetManager *)(uintptr_t)hkAndroidAssetManagerFileSystem::s_manager, (const char *)a3));
  if ( v4 != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)address + 44),
                     24);
    v6[1] = -65535;
    *v6 = ((uint32_t)(uintptr_t)&off_2096968);
    v6[2] = (uint32_t)(uintptr_t)(a2);
    hkStringPtr::Construct((hkStringPtr::Self *)(v6 + 3), a3);
    hkStringPtr::Construct((hkStringPtr::Self *)(v6 + 4), a4);
    v6[5] = v4;
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v6);
  }
  else
  {
    *(uint32_t *)self = 0;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkFileSystem::Iterator::Impl::Destroy_ea1546850  (binary VA: 0x1546850)
// Original: hkFileSystem::Iterator::Impl::~Impl
// ----------------------------------------------------------------------------
void hkFileSystem::Iterator::Impl::Destroy_ea1546850(hkFileSystem::Iterator::Impl::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkAndroidAssetManagerFileSystem::openReader  (binary VA: 0x1546910)
// Original: hkAndroidAssetManagerFileSystem::openReader
// ----------------------------------------------------------------------------
uint32_t * hkAndroidAssetManagerFileSystem::openReader(uint32_t *a1, int a2, int a3, char a4)
{
  int v4;
  int address;
  int v6;

  v4 = (int)(uintptr_t)(AAssetManager_open(hkAndroidAssetManagerFileSystem::s_manager, a3, 0));
  if ( v4 != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           16);
    *(uint32_t *)(v6 + 4) = -65535;
    *(uint32_t *)(v6 + 8) = v4;
    *(uint32_t *)v6 = ((uint32_t)(uintptr_t)&off_2096928);
    *(uint8_t *)(v6 + 12) = 1;
  }
  else
  {
    v6 = 0;
  }
  *a1 = (uint32_t)(uintptr_t)(hkFileSystem::handleFlags(a2, (hkStreamReader::Self *)v6, a4));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkAndroidAssetManagerFileSystem::stat  (binary VA: 0x1546ae0)
// Original: hkAndroidAssetManagerFileSystem::stat
// ----------------------------------------------------------------------------
int hkAndroidAssetManagerFileSystem::stat(hkAndroidAssetManagerFileSystem::Self *self, hkString::Self *a2, hkFileSystem::Entry::Self *a3)
{
  int v3;
  int result;
  int Length;

  v3 = (int)(uintptr_t)(AAssetManager_open(hkAndroidAssetManagerFileSystem::s_manager, a2, 0));
  result = 1;
  if ( v3 != 0 )
  {
    Length = AAsset_getLength(v3);
    hkFileSystem::Entry::setAll((int)(uintptr_t)(a3), (int)(uintptr_t)(self), a2, 1, 0, 0, Length, Length >> 31);
    AAsset_close(v3);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkErrStream::Destroy  (binary VA: 0x1546b80)
// Original: hkErrStream::~hkErrStream
// ----------------------------------------------------------------------------
void hkErrStream::Destroy(hkErrStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096A48);
  *((uint32_t *)self + 2) = 0;
  hkOstream::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkErrStream::Destroy_ea1546bc0  (binary VA: 0x1546bc0)
// Original: hkErrStream::~hkErrStream
// ----------------------------------------------------------------------------
void hkErrStream::Destroy_ea1546bc0(hkErrStream::Self *self)
{
  int v1;
  int v2;

  hkErrStream::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkErrStream::Construct  (binary VA: 0x1546c20)
// Original: hkErrStream::hkErrStream
// ----------------------------------------------------------------------------
void hkErrStream::Construct(hkErrStream::Self *self, hkString::Self *a2, int a3)
{
  hkErrStream::Self *v3;
  char *v4;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett

  v3 = self;
  hkOstream::Construct(self, nullptr);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096A48);
  v4 = (char *)a2 + a3 - 32;
  hkBufferedStreamWriter::Construct((int)(uintptr_t)(v4), a2, a3 - 32, 1);
  v5 = *((uint32_t *)self + 2);
  if ( v5 == 0 || v4 == (char *)v5 || *(uint16_t *)(v5 + 6) == 0 )
    goto LABEL_6;
  do
  {
    v7 = *(uint32_t *)(v5 + 4);
    HIWORD(v6) = HIWORD(v7);
    LOWORD(v6) = 0;
    v8 = v6 | (uint16_t)(v7 - 1);
    v9 = v7;
  }
  while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v9, v8) );
  v3 = self;
  if ( (uint16_t)v8 == 0 )
  {
    G4_VCALL<void>(v5, 16);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v4);
  }
  else
  {
LABEL_6:
    *((uint32_t *)v3 + 2) = (uint32_t)(uintptr_t)(v4);
  }
}

// ----------------------------------------------------------------------------
// Function: hkError::messageReport  (binary VA: 0x1546ce0)
// Original: hkError::messageReport
// ----------------------------------------------------------------------------
int hkError::messageReport(hkError::Self *self, int a2, const char *a3, const char *a4)
{
  return (*(int (**)(uint32_t, uint32_t, hkError::Self *, int, const char *, const char *))(*hkSingleton<hkError::Self>::s_instance
                                                                                        + 20))(
           (uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance),
           0,
           self,
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: hkError::messageWarning  (binary VA: 0x1546d30)
// Original: hkError::messageWarning
// ----------------------------------------------------------------------------
int hkError::messageWarning(hkError::Self *self, int a2, const char *a3, const char *a4)
{
  return (*(int (**)(uint32_t, int, hkError::Self *, int, const char *, const char *))(*hkSingleton<hkError::Self>::s_instance
                                                                                     + 20))(
           (uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance),
           1,
           self,
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: hkError::messageAssert  (binary VA: 0x1546d80)
// Original: hkError::messageAssert
// ----------------------------------------------------------------------------
int hkError::messageAssert(hkError::Self *self, int a2, const char *a3, const char *a4)
{
  return (*(int (**)(uint32_t, int, hkError::Self *, int, const char *, const char *))(*hkSingleton<hkError::Self>::s_instance
                                                                                     + 20))(
           (uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance),
           2,
           self,
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: hkError::messageError  (binary VA: 0x1546dd0)
// Original: hkError::messageError
// ----------------------------------------------------------------------------
int hkError::messageError(hkError::Self *self, int a2, const char *a3, const char *a4)
{
  return (*(int (**)(uint32_t, int, hkError::Self *, int, const char *, const char *))(*hkSingleton<hkError::Self>::s_instance
                                                                                     + 20))(
           (uint32_t)(uintptr_t)(hkSingleton<hkError::Self>::s_instance),
           3,
           self,
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: hkReferenceCountError  (binary VA: 0x1546e20)
// Original: hkReferenceCountError
// ----------------------------------------------------------------------------
void hkReferenceCountError(const hkReferencedObject::Self *a1, hkString::Self *a2)
{
  char *v2;
  int v3;
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
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[3];
  typedef int _g4_t_v16[135];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);

  hkErrStream::Construct((hkErrStream::Self *)v15, (hkString::Self *)v16, 512);
  v2 = (char *)*((uint16_t *)a1 + 2);
  v3 = hkOstream::opShl((int)(uintptr_t)(v15), (hkString::Self *)"Reference count error on object ");
  v4 = hkOstream::opShl(v3, (char *)a1);
  v5 = hkOstream::opShl(v4, (hkString::Self *)" with ref count of ");
  v6 = hkOstream::opShl(v5, v2);
  v7 = hkOstream::opShl(v6, (hkString::Self *)" in ");
  v8 = hkOstream::opShl(v7, a2);
  v9 = hkOstream::opShl(v8, (hkString::Self *)".\n");
  v10 = hkOstream::opShl(v9, (hkString::Self *)" * Are you calling delete instead of removeReference?\n");
  v11 = hkOstream::opShl(v10, (hkString::Self *)" * Have you called removeReference too many times?\n");
  v12 = hkOstream::opShl(
          v11,
          (hkString::Self *)" * In a multithreaded environment, what is the hkReferencedObject lock mode you use (see setLockMode())?\n");
  v13 = hkOstream::opShl(v12, (hkString::Self *)" * Is this a valid object?\n");
  hkOstream::opShl(v13, (hkString::Self *)" * Do you have more than 32768 references? (unlikely)\n");
  if ( hkError::messageError(
         (hkError::Self *)0x2C66F2D8,
         (int)(uintptr_t)(v16),
         "System/Error/hkError.cpp",
         (const char *)&dword_24 + 2,
         v14) != 0 )
    __builtin_debugtrap();
  hkErrStream::Destroy((hkErrStream::Self *)v15);
}

// ----------------------------------------------------------------------------
// Function: hkErrorMessage  (binary VA: 0x1546f70)
// Original: hkErrorMessage
// ----------------------------------------------------------------------------
void hkErrorMessage(hkString::Self *a1)
{
  typedef int _g4_t_v1;
  typedef int _g4_t_v2[3];
  typedef int _g4_t_v3[131];
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (0u + sizeof(_g4_t_v1)) > _g4_s0 ? (0u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v2)) > _g4_s1 ? (4u + sizeof(_g4_t_v2)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v3)) > _g4_s2 ? (16u + sizeof(_g4_t_v3)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 0u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 4u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 16u);

  hkErrStream::Construct((hkErrStream::Self *)v2, (hkString::Self *)v3, 512);
  hkOstream::opShl((int)(uintptr_t)(v2), a1);
  if ( hkError::messageError((hkError::Self *)0x2636FE25, (int)(uintptr_t)(v3), "System/Error/hkError.cpp", (const char *)&word_2C + 1, v1) != 0 )
    __builtin_debugtrap();
  hkErrStream::Destroy((hkErrStream::Self *)v2);
}

// ----------------------------------------------------------------------------
// Function: hkSphere::staticClass  (binary VA: 0x1547050)
// Original: hkSphere::staticClass
// ----------------------------------------------------------------------------
void * hkSphere::staticClass()
{
  return &hkSphereClass;
}

// ----------------------------------------------------------------------------
// Function: hkUFloat8::getEncodedFloat  (binary VA: 0x1547140)
// Original: hkUFloat8::getEncodedFloat
// ----------------------------------------------------------------------------
int hkUFloat8::getEncodedFloat(hkUFloat8::Self *self)
{
  return (uint16_t)word_1D132B0[(uint8_t)(uintptr_t)(self)];
}

// ----------------------------------------------------------------------------
// Function: hkMemoryInitUtil::initFreeListLargeBlock  (binary VA: 0x15471b0)
// Original: hkMemoryInitUtil::initFreeListLargeBlock
// ----------------------------------------------------------------------------
int hkMemoryInitUtil::initFreeListLargeBlock(hkMemorySystem::Self *a1, int a2, hkFreeListAllocator::Cinfo::Self *a3, int a4)
{
  hkMemorySystem::Self *v5;

  hkLargeBlockAllocator::Construct((hkLargeBlockAllocator::Self *)&unk_211A720, a1);
  hkFreeListAllocator::Construct(
    (hkFreeListAllocator::Self *)&unk_211A800,
    (hkMemoryAllocator::Self *)&unk_211A720,
    (hkMemoryAllocator::ExtendedInterface::Self *)&unk_211A724,
    a3);
  hkFreeListMemorySystem::Construct((int)(uintptr_t)(dword_211B2B0), a1, (int)(uintptr_t)(&unk_211A800), (int)(uintptr_t)(&unk_211A804), a4);
  dword_211A710 = (int)(uintptr_t)(&unk_211A720);
  dword_211A700 = (int)(uintptr_t)(&unk_211A800);
  hkMemoryInitUtil::s_system = (uintptr_t)(uintptr_t)(dword_211B2B0);
  hkMemorySystem::replaceInstance((hkMemorySystem::Self *)dword_211B2B0, v5);
  *(uintptr_t *)(hkMemoryInitUtil::s_onQuitFunc) = (uintptr_t)(sub_1547160);
  return (*(int (**)(int *, int, int))(dword_211B2B0[0] + 8))((int *)(dword_211B2B0), a2, 3);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryInitUtil::initFreeList  (binary VA: 0x1547280)
// Original: hkMemoryInitUtil::initFreeList
// ----------------------------------------------------------------------------
int hkMemoryInitUtil::initFreeList(hkMemorySystem::Self *a1, hkMemoryAllocator::ExtendedInterface::Self *a2, int a3, hkFreeListAllocator::Cinfo::Self *a4, int a5)
{
  hkMemorySystem::Self *v6;

  hkFreeListAllocator::Construct((hkFreeListAllocator::Self *)&unk_211A800, a1, a2, a4);
  hkFreeListMemorySystem::Construct((int)(uintptr_t)(dword_211B2B0), a1, (int)(uintptr_t)(&unk_211A800), (int)(uintptr_t)(&unk_211A804), a5);
  dword_211A700 = (int)(uintptr_t)(&unk_211A800);
  hkMemoryInitUtil::s_system = (uintptr_t)(uintptr_t)(dword_211B2B0);
  hkMemorySystem::replaceInstance((hkMemorySystem::Self *)dword_211B2B0, v6);
  *(uintptr_t *)(hkMemoryInitUtil::s_onQuitFunc) = (uintptr_t)(sub_1547160);
  return (*(int (**)(int *, int, int))(dword_211B2B0[0] + 8))((int *)(dword_211B2B0), a3, 3);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryInitUtil::initHeapAllocator  (binary VA: 0x1547330)
// Original: hkMemoryInitUtil::initHeapAllocator
// ----------------------------------------------------------------------------
int hkMemoryInitUtil::initHeapAllocator(hkMemoryInitUtil::Self *self, hkMemoryAllocator::Self *a2, hkMemoryAllocator::Self *a3, hkMemoryAllocator::ExtendedInterface::Self *a4)
{
  hkMemorySystem::Self *v5;

  hkFreeListMemorySystem::Construct((int)(uintptr_t)(dword_211B2B0), self, (int)(uintptr_t)(a2), (int)(uintptr_t)(a3), 5);
  hkMemoryInitUtil::s_system = (uintptr_t)(uintptr_t)(dword_211B2B0);
  hkMemorySystem::replaceInstance((hkMemorySystem::Self *)dword_211B2B0, v5);
  return (*(int (**)(int *, hkMemoryAllocator::ExtendedInterface::Self *, int))(dword_211B2B0[0] + 8))(
           (int *)(dword_211B2B0),
           a4,
           3);
}

// ----------------------------------------------------------------------------
// Function: hkSimpleProperty::staticClass  (binary VA: 0x15473e0)
// Original: hkSimpleProperty::staticClass
// ----------------------------------------------------------------------------
void * hkSimpleProperty::staticClass()
{
  return &hkSimplePropertyClass;
}

// ----------------------------------------------------------------------------
// Function: hkSimplePropertyValue::staticClass  (binary VA: 0x1547400)
// Original: hkSimplePropertyValue::staticClass
// ----------------------------------------------------------------------------
void * hkSimplePropertyValue::staticClass()
{
  return &hkSimplePropertyValueClass;
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::staticClass  (binary VA: 0x15475a0)
// Original: hkMultiThreadCheck::staticClass
// ----------------------------------------------------------------------------
void * hkMultiThreadCheck::staticClass()
{
  return &hkMultiThreadCheckClass;
}

// ----------------------------------------------------------------------------
// Function: hkUFloat8::staticClass  (binary VA: 0x15476a0)
// Original: hkUFloat8::staticClass
// ----------------------------------------------------------------------------
void * hkUFloat8::staticClass()
{
  return &hkUFloat8Class;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryAllocator::ExtendedInterface::Destroy  (binary VA: 0x1547790)
// Original: hkMemoryAllocator::ExtendedInterface::~ExtendedInterface
// ----------------------------------------------------------------------------
void hkMemoryAllocator::ExtendedInterface::Destroy(hkMemoryAllocator::ExtendedInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096AE8);
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::getExtendedInterface  (binary VA: 0x15477b0)
// Original: hkFreeListAllocator::getExtendedInterface
// ----------------------------------------------------------------------------
char * hkFreeListAllocator::getExtendedInterface(hkFreeListAllocator::Self *self)
{
  return (char *)self + 4;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::getApproxTotalAllocated  (binary VA: 0x15477c0)
// Original: hkFreeListAllocator::getApproxTotalAllocated
// ----------------------------------------------------------------------------
int hkFreeListAllocator::getApproxTotalAllocated(hkFreeListAllocator::Self *self)
{
  int result;
  int v2;
  int v3;

  result = 0;
  v2 = *((uint32_t *)self + 7);
  if ( v2 != 0 )
  {
    v3 = *((uint32_t *)self + 4);
    return (*(int (**)(uint32_t))(*(uint32_t *)v2 + 32))(*((uint32_t *)self + 7)) - v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::resetPeakMemoryStatistics  (binary VA: 0x1547800)
// Original: hkFreeListAllocator::resetPeakMemoryStatistics
// ----------------------------------------------------------------------------
int hkFreeListAllocator::resetPeakMemoryStatistics(hkFreeListAllocator::Self *self)
{
  int v1;
  int result;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v5)) > _g4_s2 ? (8u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v6)) > _g4_s3 ? (12u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v7)) > _g4_s4 ? (16u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v8)) > _g4_s5 ? (20u + sizeof(_g4_t_v8)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);

  v3 = -1;
  v4 = -1;
  v5 = -1;
  v6 = -1;
  v7 = -1;
  v1 = *(uint32_t *)self;
  v8 = -1;
  (*(void (**)(hkFreeListAllocator::Self *, int *))(v1 + 36))(self, &v3);
  result = v4;
  *((uint32_t *)self + 5) = v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::blockAlloc  (binary VA: 0x1547860)
// Original: hkFreeListAllocator::blockAlloc
// ----------------------------------------------------------------------------
int hkFreeListAllocator::blockAlloc(hkFreeListAllocator::Self *self, ...)
{
  va_list va;

  va_start(va, self);
  return G4_VCALL<int>(self, 16, g4_va_cast<char *>(va));
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::getMemorySoftLimit  (binary VA: 0x1547880)
// Original: hkFreeListAllocator::getMemorySoftLimit
// ----------------------------------------------------------------------------
int hkFreeListAllocator::getMemorySoftLimit(hkFreeListAllocator::Self *self)
{
  return *((uint32_t *)self + 682);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryAllocator::ExtendedInterface::Destroy_ea15478a0  (binary VA: 0x15478a0)
// Original: hkMemoryAllocator::ExtendedInterface::~ExtendedInterface
// ----------------------------------------------------------------------------
void hkMemoryAllocator::ExtendedInterface::Destroy_ea15478a0(hkMemoryAllocator::ExtendedInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096AE8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::garbageCollect  (binary VA: 0x15478d0)
// Original: hkFreeListAllocator::garbageCollect
// ----------------------------------------------------------------------------
int hkFreeListAllocator::garbageCollect(hkFreeListAllocator::Self *self)
{
  pthread_mutex_t *mutex;
  int v2;
  int v3;
  hkFreeListAllocator::Self *v4;
  int v5;
  char i; // bp
  hkFreeList::Self *v7;
  bool v8;
  char v9;
  int v10;
  int result;
  char v12;
  int v13;
  hkFreeListAllocator::Self *v14;

  mutex = (pthread_mutex_t *)((char *)self + 8);
  v2 = *((uint32_t *)self + 3);
  if ( v2 != 0 )
  {
    while ( pthread_mutex_trylock((pthread_mutex_t *)((char *)self + 8)) != 0 )
    {
      if ( --v2 == 0 )
      {
        mutex = (pthread_mutex_t *)((char *)self + 8);
        goto LABEL_21;
      }
    }
  }
  else
  {
LABEL_21:
    if ( pthread_mutex_lock(mutex) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  v3 = *((uint32_t *)self + 105);
  v4 = self;
  v12 = 0;
  v5 = 0;
  for ( i = 0; ; i = 0 )
  {
    while ( v5 < v3 )
    {
      v7 = *((hkFreeList::Self **)v4 + v5 + 64);
      v14 = v4;
      v13 = *((uint32_t *)v7 + 13);
      v8 = (int)hkFreeList::findGarbage(v7) < 0;
      v9 = v12;
      if ( v8 )
        v9 = 1;
      v12 = v9;
      if ( *((uint32_t *)v7 + 4) != 0 )
        i = 1;
      ++v5;
      hkFreeList::freeAllFreeBlocks(v7);
      v4 = v14;
      *((uint32_t *)v14 + 4) += *((uint32_t *)v7 + 1) * (*((uint32_t *)v7 + 13) - v13);
      v3 = *((uint32_t *)v14 + 105);
    }
    if ( i == 0 || v12 == 0 )
      break;
    v12 = 1;
    v5 = 0;
  }
  v10 = *((uint32_t *)v4 + 7);
  if ( v10 != 0 )
    G4_VCALL<void>(v10, 8);
  result = pthread_mutex_unlock((pthread_mutex_t *)((char *)self + 8));
  if ( result != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::getAllocatedSize  (binary VA: 0x1547a70)
// Original: hkFreeListAllocator::getAllocatedSize
// ----------------------------------------------------------------------------
int hkFreeListAllocator::getAllocatedSize(hkFreeListAllocator::Self *self, const void *a2, int a3)
{
  int result;
  int v4;

  if ( a3 <= 640 )
  {
    result = 0;
    if ( a3 == 0 )
      return result;
    v4 = *((uint32_t *)self + ((a3 + 15) >> 4) + 23);
    if ( v4 != 0 )
      return *(uint32_t *)(v4 + 4);
  }
  return (*(int (**)(uint32_t, const void *, int))(**((uint32_t **)self + 6) + 40))(*((uint32_t *)self + 6), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::canAllocTotal  (binary VA: 0x1547b70)
// Original: hkFreeListAllocator::canAllocTotal
// ----------------------------------------------------------------------------
bool hkFreeListAllocator::canAllocTotal(hkFreeListAllocator::Self *self, int a2)
{
  bool result;
  int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;

  result = true;
  v3 = *((uint32_t *)self + 7);
  if ( v3 != 0 )
  {
    v4 = (*(int (**)(uint32_t))(*(uint32_t *)v3 + 32))(*((uint32_t *)self + 7));
    v5 = *((uint32_t *)self + 5);
    v6 = v4 - *((uint32_t *)self + 4);
    if ( v6 >= v5 )
      v5 = v6;
    *((uint32_t *)self + 5) = v5;
    return v6 < *((uint32_t *)self + 682) - a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::setScrubValues  (binary VA: 0x1547bc0)
// Original: hkFreeListAllocator::setScrubValues
// ----------------------------------------------------------------------------
int hkFreeListAllocator::setScrubValues(hkFreeListAllocator::Self *self, unsigned int a2)
{
  pthread_mutex_t *mutex;
  int v3;
  int result;

  mutex = (pthread_mutex_t *)((char *)self + 8);
  v3 = *((uint32_t *)self + 3);
  if ( v3 != 0 )
  {
    while ( pthread_mutex_trylock(mutex) != 0 )
    {
      if ( --v3 == 0 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( pthread_mutex_lock(mutex) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  hkFreeListAllocator::s_fillReturnedToUser = a2;
  result = pthread_mutex_unlock(mutex);
  if ( result != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::setMemorySoftLimit  (binary VA: 0x1547cc0)
// Original: hkFreeListAllocator::setMemorySoftLimit
// ----------------------------------------------------------------------------
hkFreeListAllocator::Self * hkFreeListAllocator::setMemorySoftLimit(hkFreeListAllocator::Self *self, unsigned int a2, int a3)
{
  pthread_mutex_t *mutex;
  int v4;

  mutex = (pthread_mutex_t *)(a2 + 8);
  v4 = *(uint32_t *)(a2 + 12);
  if ( v4 != 0 )
  {
    while ( pthread_mutex_trylock(mutex) != 0 )
    {
      if ( --v4 == 0 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( pthread_mutex_lock(mutex) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  *(uint32_t *)(a2 + 2728) = a3;
  *(uint32_t *)self = 0;
  if ( pthread_mutex_unlock(mutex) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::blockFree  (binary VA: 0x1547dd0)
// Original: hkFreeListAllocator::blockFree
// ----------------------------------------------------------------------------
void hkFreeListAllocator::blockFree(hkFreeListAllocator::Self *self, uint32_t *a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  int v6;

  if ( a2 != nullptr )
  {
    v3 = *((uint32_t *)self + 3);
    if ( v3 != 0 )
    {
      while ( pthread_mutex_trylock((pthread_mutex_t *)((char *)self + 8)) != 0 )
      {
        if ( --v3 == 0 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( pthread_mutex_lock((pthread_mutex_t *)((char *)self + 8)) != 0 )
      {
        printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
        perror("pthread_mutex_lock(&mutex)");
        __builtin_debugtrap();
      }
    }
    if ( a3 > 640 )
    {
      (*(void (**)(uint32_t, uint32_t *, int))(**((uint32_t **)self + 6) + 12))(*((uint32_t *)self + 6), a2, a3);
    }
    else
    {
      v4 = *((uint32_t **)self + ((a3 + 15) >> 4) + 23);
      v5 = v4[13];
      v4[13] = v5 + 1;
      *a2 = *v4;
      v6 = v4[13] - v5;
      *v4 = (uint32_t)(uintptr_t)(a2);
      *((uint32_t *)self + 4) += v4[1] * v6;
    }
    if ( pthread_mutex_unlock((pthread_mutex_t *)((char *)self + 8)) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
      perror("pthread_mutex_unlock(&m_mutex)");
      __builtin_debugtrap();
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::bufAlloc  (binary VA: 0x1547f30)
// Original: hkFreeListAllocator::bufAlloc
// ----------------------------------------------------------------------------
uint32_t * hkFreeListAllocator::bufAlloc(hkFreeListAllocator::Self *self, int *a2)
{
  pthread_mutex_t *mutex;
  int v3;
  hkFreeList::Self *v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v10;
  unsigned int v11;
  unsigned int v12;
  bool v13;
  uint32_t *v14;
  int v15;
  hkFreeList::Self *v16;

  mutex = (pthread_mutex_t *)((char *)self + 8);
  v3 = *((uint32_t *)self + 3);
  if ( v3 != 0 )
  {
    while ( pthread_mutex_trylock(mutex) != 0 )
    {
      if ( --v3 == 0 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( pthread_mutex_lock(mutex) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  if ( *a2 > 640 )
  {
    v5 = (uint32_t *)(*(int (**)(uint32_t, uint32_t))(**((uint32_t **)self + 6) + 8))(*((uint32_t *)self + 6), *a2);
    v8 = *((uint32_t *)self + 7);
    if ( v8 == 0 )
      goto LABEL_9;
  }
  else
  {
    v4 = *((hkFreeList::Self **)self + ((*a2 + 15) >> 4) + 23);
    v5 = *(uint32_t **)v4;
    v15 = *((uint32_t *)v4 + 13);
    if ( *(uint32_t *)v4 != 0 )
    {
      v6 = *((uint32_t *)v4 + 13) - 1;
      *((uint32_t *)v4 + 13) = v6;
      *(uint32_t *)v4 = *v5;
      v7 = *((uint32_t *)v4 + 1);
    }
    else
    {
      v5 = *((uint32_t **)v4 + 8);
      if ( (unsigned int)(uintptr_t)(v5) >= *((uint32_t *)v4 + 9) )
      {
        v16 = *((hkFreeList::Self **)self + ((*a2 + 15) >> 4) + 23);
        v14 = (uint32_t *)hkFreeList::addSpace(v4);
        v4 = v16;
        v5 = v14;
        v7 = *((uint32_t *)v16 + 1);
        v6 = *((uint32_t *)v16 + 13);
      }
      else
      {
        v6 = v15 - 1;
        *((uint32_t *)v4 + 8) = (uint32_t)(uintptr_t)((char *)v5 + *((uint32_t *)v4 + 1));
        *((uint32_t *)v4 + 13) = v15 - 1;
        v7 = *((uint32_t *)v4 + 1);
      }
    }
    *((uint32_t *)self + 4) += v7 * (v6 - v15);
    *a2 = *((uint32_t *)v4 + 1);
    v8 = *((uint32_t *)self + 7);
    if ( v8 == 0 )
      goto LABEL_9;
  }
  v10 = G4_VCALL<int>(v8, 32);
  v11 = *((uint32_t *)self + 5);
  v12 = v10 - *((uint32_t *)self + 4);
  if ( v12 >= v11 )
    v11 = v12;
  v13 = v12 < *((uint32_t *)self + 682);
  *((uint32_t *)self + 5) = v11;
  if ( !v13 )
    hkSetOutOfMemoryState(1);
LABEL_9:
  if ( pthread_mutex_unlock(mutex) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::blockFreeBatch  (binary VA: 0x1548110)
// Original: hkFreeListAllocator::blockFreeBatch
// ----------------------------------------------------------------------------
int hkFreeListAllocator::blockFreeBatch(hkFreeListAllocator::Self *self, void **a2, int a3, int a4)
{
  void **v4;
  pthread_mutex_t *mutex;
  int v6;
  int v7;
  void *v8;
  int result;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  bool v14;
  int v15;

  v4 = a2;
  mutex = (pthread_mutex_t *)((char *)self + 8);
  v6 = *((uint32_t *)self + 3);
  if ( v6 != 0 )
  {
    while ( pthread_mutex_trylock(mutex) != 0 )
    {
      if ( --v6 == 0 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    if ( pthread_mutex_lock(mutex) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  if ( a4 <= 640 )
  {
    v10 = *((uint32_t **)self + ((a4 + 15) >> 4) + 23);
    v11 = v10[13];
    v12 = (uint32_t *)*v10;
    for ( v10[13] = v11 + a3; --a3 >= 0; --v10[13] )
    {
      while ( 1 )
      {
        v13 = (uint32_t *)(*v4++);
        if ( v13 == nullptr )
          break;
        v14 = --a3 < 0;
        *v13 = (uint32_t)(uintptr_t)(v12);
        v12 = v13;
        if ( v14 )
          goto LABEL_19;
      }
    }
LABEL_19:
    v15 = v10[13];
    *v10 = (uint32_t)(uintptr_t)(v12);
    *((uint32_t *)self + 4) += v10[1] * (v15 - v11);
  }
  else
  {
    v7 = 0;
    if ( a3 > 0 )
    {
      do
      {
        v8 = a2[v7];
        if ( v8 != nullptr )
          (*(void (**)(uint32_t, void *, int))(**((uint32_t **)self + 6) + 12))(*((uint32_t *)self + 6), v8, a4);
        ++v7;
      }
      while ( v7 != a3 );
    }
  }
  result = pthread_mutex_unlock(mutex);
  if ( result != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::isOk  (binary VA: 0x15482c0)
// Original: hkFreeListAllocator::isOk
// ----------------------------------------------------------------------------
hkFreeListAllocator::Self * hkFreeListAllocator::isOk(hkFreeListAllocator::Self *self, int a2)
{
  pthread_mutex_t *v2;
  int v3;
  int v4;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef uint8_t _g4_t_v7[25];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_mutex)) > _g4_s0 ? (4u + sizeof(_g4_t_mutex)) : _g4_s0,
    _g4_s2 = (11u + sizeof(_g4_t_v7)) > _g4_s1 ? (11u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 11u);

  v2 = (pthread_mutex_t *)(a2 + 8);
  mutex = (pthread_mutex_t *)(a2 + 8);
  v3 = *(uint32_t *)(a2 + 12);
  if ( v3 != 0 )
  {
    while ( pthread_mutex_trylock(mutex) != 0 )
    {
      if ( --v3 == 0 )
      {
        v2 = (pthread_mutex_t *)(a2 + 8);
        goto LABEL_14;
      }
    }
  }
  else
  {
LABEL_14:
    if ( pthread_mutex_lock(v2) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  v4 = 0;
  *(uint8_t *)self = 1;
  if ( *(int *)(a2 + 420) > 0 )
  {
    while ( 1 )
    {
      hkFreeList::checkFreeBlocks((hkFreeList::Self *)v7);
      if ( v7[0] == 0 )
        break;
      if ( *(uint32_t *)(a2 + 420) <= ++v4 )
        goto LABEL_10;
    }
    *(uint8_t *)self = 0;
  }
LABEL_10:
  if ( pthread_mutex_unlock(mutex) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::getMemoryStatistics  (binary VA: 0x1548410)
// Original: hkFreeListAllocator::getMemoryStatistics
// ----------------------------------------------------------------------------
int hkFreeListAllocator::getMemoryStatistics(int a1, pthread_mutex_t *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
  int v13;
  pthread_mutex_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  uint32_t *v21;
  unsigned int v22;
  int result;
  int v24;
  int v25;
  int v26;
  int v27;
  pthread_mutex_t *v28;
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

  v13 = a1;
  v14 = (pthread_mutex_t *)(a1 + 8);
  v28 = (pthread_mutex_t *)(a1 + 8);
  v15 = *(uint32_t *)(a1 + 12);
  if ( v15 != 0 )
  {
    do
    {
      if ( pthread_mutex_trylock(v28) == 0 )
      {
        v13 = a1;
        goto LABEL_6;
      }
      --v15;
    }
    while ( v15 != 0 );
    v13 = a1;
    v14 = (pthread_mutex_t *)(a1 + 8);
  }
  if ( pthread_mutex_lock(v14) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
    perror("pthread_mutex_lock(&mutex)");
    __builtin_debugtrap();
  }
LABEL_6:
  (*(void (**)(uint32_t, pthread_mutex_t *, int, int, int, int, pthread_mutex_t *, int, int, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(v13 + 24) + 36))(
    *(uint32_t *)(v13 + 24),
    a2,
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
    v41);
  v16 = 0;
  v17 = 0;
  v44 = 0;
  if ( *(int *)(v13 + 420) >= 0 )
  {
    v42 = v13;
    v18 = *(uint32_t *)(v13 + 420);
    v43 = 0;
    v19 = 0;
    v20 = v42;
    do
    {
      a8 = -1;
      a9 = -1;
      a10 = -1;
      a11 = -1;
      a12 = -1;
      a13 = -1;
      if ( v19 == v18 )
        v21 = (uint32_t *)(v20 + 36);
      else
        v21 = *(uint32_t **)(v20 + 4 * v19 + 256);
      v45 = v20;
      v46 = v16;
      hkFreeList::getMemoryStatistics(v21, &a8);
      v20 = v45;
      if ( *v21 != 0 || v21[8] < v21[9] )
      {
        v22 = v21[1];
        if ( v22 > G4_MUTEX_SPINS(a2) )
          G4_MUTEX_SPINS(a2) = v22;
      }
      ++v19;
      v44 += a8;
      v18 = *(uint32_t *)(v45 + 420);
      v16 = a9 + v46;
      v43 += a11;
    }
    while ( v18 >= v19 );
    v17 = v43;
    v13 = v45;
  }
  ((int32_t *)(a2))[3] += v17;
  ((int32_t *)(a2))[1] += v16 - v44;
  ((int32_t *)(a2))[2] = *(uint32_t *)(v13 + 20);
  result = pthread_mutex_unlock(a2);
  if ( result != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::blockAllocBatch  (binary VA: 0x1548640)
// Original: hkFreeListAllocator::blockAllocBatch
// ----------------------------------------------------------------------------
int hkFreeListAllocator::blockAllocBatch(hkFreeListAllocator::Self *self, void **a2, int a3, int a4)
{
  hkFreeListAllocator::Self *v4;
  pthread_mutex_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  bool v12;
  int result;
  hkFreeList::Self *v14;
  void **v15;
  uint32_t *v16;
  void **v17;
  int v18;
  int v19;
  void **v20;
  unsigned int v21;
  void **v22;
  int v23;
  int v24;
  int v25;
  void **v26;
  pthread_mutex_t *mutex;
  int v28;
  int v29;
  hkFreeListAllocator::Self *thisa;

  v4 = self;
  v5 = (pthread_mutex_t *)((char *)self + 8);
  mutex = (pthread_mutex_t *)((char *)self + 8);
  v6 = *((uint32_t *)self + 3);
  if ( v6 != 0 )
  {
    do
    {
      if ( pthread_mutex_trylock(mutex) == 0 )
      {
        v4 = self;
        goto LABEL_6;
      }
      --v6;
    }
    while ( v6 != 0 );
    v4 = self;
    v5 = (pthread_mutex_t *)((char *)self + 8);
  }
  if ( pthread_mutex_lock(v5) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
    perror("pthread_mutex_lock(&mutex)");
    __builtin_debugtrap();
  }
LABEL_6:
  if ( a4 <= 640 )
  {
    v14 = *((hkFreeList::Self **)v4 + ((a4 + 15) >> 4) + 23);
    v29 = *((uint32_t *)v14 + 13);
    v15 = &a2[a3];
    v16 = *(uint32_t **)v14;
    if ( a2 < v15 && v16 != nullptr )
    {
      v17 = a2;
      do
      {
        *v17++ = v16;
        v16 = (uint32_t *)*v16;
      }
      while ( v15 > v17 && v16 != nullptr );
      v28 = *((uint32_t *)v14 + 13);
      v18 = -(v17 - a2);
    }
    else
    {
      v17 = a2;
      v28 = *((uint32_t *)v14 + 13);
      v18 = 0;
    }
    v19 = v28 + v18;
    *(uint32_t *)v14 = (uint32_t)(uintptr_t)(v16);
    *((uint32_t *)v14 + 13) = v19;
    if ( v17 >= v15 )
    {
      v25 = v19;
    }
    else
    {
      thisa = v4;
      v20 = &a2[a3];
      do
      {
        v21 = *((uint32_t *)v14 + 8);
        if ( v21 >= *((uint32_t *)v14 + 9) )
        {
          v26 = v17 + 1;
          *v17 = (void *)hkFreeList::addSpace(v14);
          v17 = v26;
        }
        else
        {
          if ( v20 <= v17 )
          {
            v24 = 0;
          }
          else
          {
            v22 = v17;
            do
            {
              *v22++ = (void *)v21;
              v21 = *((uint32_t *)v14 + 1) + *((uint32_t *)v14 + 8);
              v12 = v21 < *((uint32_t *)v14 + 9);
              *((uint32_t *)v14 + 8) = v21;
            }
            while ( v12 && v20 > v22 );
            v23 = (char *)v22 - (char *)v17;
            v17 = v22;
            v24 = -(v23 >> 2);
          }
          *((uint32_t *)v14 + 13) += v24;
        }
      }
      while ( v20 > v17 );
      v4 = thisa;
      v25 = *((uint32_t *)v14 + 13);
    }
    *((uint32_t *)v4 + 4) += *((uint32_t *)v14 + 1) * (v25 - v29);
  }
  else
  {
    v7 = 0;
    if ( a3 > 0 )
    {
      do
        a2[v7++] = (void *)(*(int (**)(uint32_t, int))(**((uint32_t **)v4 + 6) + 8))(*((uint32_t *)v4 + 6), a4);
      while ( v7 != a3 );
    }
  }
  v8 = *((uint32_t *)v4 + 7);
  if ( v8 != 0 )
  {
    v9 = (*(int (**)(uint32_t))(*(uint32_t *)v8 + 32))(*((uint32_t *)v4 + 7));
    v10 = *((uint32_t *)v4 + 5);
    v11 = v9 - *((uint32_t *)v4 + 4);
    if ( v11 >= v10 )
      v10 = v11;
    v12 = v11 < *((uint32_t *)v4 + 682);
    *((uint32_t *)v4 + 5) = v10;
    if ( !v12 )
      hkSetOutOfMemoryState(1);
  }
  result = pthread_mutex_unlock(mutex);
  if ( result != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::incrementalGarbageCollect  (binary VA: 0x15488f0)
// Original: hkFreeListAllocator::incrementalGarbageCollect
// ----------------------------------------------------------------------------
int hkFreeListAllocator::incrementalGarbageCollect(hkFreeListAllocator::Self *self, int *a2)
{
  pthread_mutex_t *v2;
  int v3;
  int *v4;
  int v5;
  int *v6;
  hkFreeList::Self *v7;
  int v8;
  int v9;
  int result;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15[13];
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (27u + sizeof(_g4_t_v15)) > _g4_s4 ? (27u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v16)) > _g4_s5 ? (40u + sizeof(_g4_t_v16)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 27u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);

  v2 = (pthread_mutex_t *)((char *)self + 8);
  v3 = *((uint32_t *)self + 3);
  if ( v3 != 0 )
  {
    while ( pthread_mutex_trylock((pthread_mutex_t *)((char *)self + 8)) != 0 )
    {
      if ( --v3 == 0 )
      {
        v2 = (pthread_mutex_t *)((char *)self + 8);
        goto LABEL_19;
      }
    }
  }
  else
  {
LABEL_19:
    if ( pthread_mutex_lock(v2) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  v4 = (int *)(&dword_0 + 1);
  if ( (int)(uintptr_t)(a2) > 0 )
    v4 = a2;
  v11 = *((uint32_t *)self + 683);
  v5 = v11;
  v6 = v4;
  do
  {
    v12 = v5;
    v7 = *((hkFreeList::Self **)self + v5 + 64);
    v14 = *((uint32_t *)v7 + 13);
    hkFreeList::incrementalFindGarbage((hkFreeList::Self *)v15, (int)(uintptr_t)(v7), v6);
    v8 = v12;
    if ( v15[0] != 0 )
    {
      v8 = v12 + 1;
      if ( v12 + 1 >= *((uint32_t *)self + 105) )
        v8 = 0;
    }
    v13 = v8;
    hkFreeList::freeAllFreeBlocks(v7);
    v6 = (int *)((char *)v6 - v16);
    v5 = v13;
    *((uint32_t *)self + 4) += *((uint32_t *)v7 + 1) * (*((uint32_t *)v7 + 13) - v14);
  }
  while ( v13 != v11 && (int)(uintptr_t)(v6) > 0 );
  *((uint32_t *)self + 683) = v13;
  v9 = *((uint32_t *)self + 7);
  if ( v9 != 0 )
    G4_VCALL<void>(v9, 12, a2);
  result = pthread_mutex_unlock((pthread_mutex_t *)((char *)self + 8));
  if ( result != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::addToSnapshot  (binary VA: 0x1548ac0)
// Original: hkFreeListAllocator::addToSnapshot
// ----------------------------------------------------------------------------
int hkFreeListAllocator::addToSnapshot(hkFreeListAllocator::Self *self, hkMemorySnapshot::Self *a2, int a3)
{
  pthread_mutex_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  hkFreeList::Self *v10;
  pthread_mutex_t *v11;
  int v12;

  v3 = (pthread_mutex_t *)((char *)self + 8);
  v11 = (pthread_mutex_t *)((char *)self + 8);
  v4 = *((uint32_t *)self + 3);
  if ( v4 != 0 )
  {
    while ( pthread_mutex_trylock(v11) != 0 )
    {
      if ( --v4 == 0 )
      {
        v3 = (pthread_mutex_t *)((char *)self + 8);
        goto LABEL_14;
      }
    }
  }
  else
  {
LABEL_14:
    if ( pthread_mutex_lock(v3) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  v5 = *((uint32_t *)self + 7);
  if ( v5 == 0 || (v6 = G4_VCALL<int>(v5, 40, a2, a3)) == -1 )
  {
    v8 = -1;
  }
  else
  {
    v7 = 0;
    v12 = hkMemorySnapshot::addProvider(a2, "hkFreeListAllocator", v6);
    while ( *((uint32_t *)self + 105) > v7 )
    {
      v10 = *((hkFreeList::Self **)self + v7++ + 64);
      hkFreeList::addToSnapshot(v10, (int)(uintptr_t)(a2), 1, v12);
    }
    v8 = v12;
    hkFreeList::addToSnapshot((hkFreeListAllocator::Self *)((char *)self + 36), (int)(uintptr_t)(a2), 0, v12);
  }
  if ( pthread_mutex_unlock(v11) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::Construct  (binary VA: 0x1548c70)
// Original: hkFreeListAllocator::hkFreeListAllocator
// ----------------------------------------------------------------------------
void hkFreeListAllocator::Construct(hkFreeListAllocator::Self *self)
{
  hkFreeListAllocator::Self *v1;
  typedef pthread_mutexattr_t *_g4_t_attr;
  typedef pthread_mutexattr_t _g4_t_mutexattr;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_attr)) > _g4_s0 ? (0u + sizeof(_g4_t_attr)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_mutexattr)) > _g4_s1 ? (28u + sizeof(_g4_t_mutexattr)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_attr &attr = *reinterpret_cast<_g4_t_attr *>(_g4_sf + 0u);
  _g4_t_mutexattr &mutexattr = *reinterpret_cast<_g4_t_mutexattr *>(_g4_sf + 28u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096B28);
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_2096B8C);
  *((uint32_t *)self + 3) = 4000;
  if ( pthread_mutexattr_init(&mutexattr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      16,
      "hkCriticalSection");
    perror("pthread_mutexattr_init(&attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_settype(&mutexattr, 1) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      17,
      "hkCriticalSection");
    perror("pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE)");
    __builtin_debugtrap();
  }
  if ( pthread_mutex_init((pthread_mutex_t *)((char *)self + 8), &mutexattr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      18,
      "hkCriticalSection");
    perror("pthread_mutex_init(&m_mutex, &attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_destroy(&mutexattr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      19,
      "hkCriticalSection");
    perror("pthread_mutexattr_destroy(&attr)");
    __builtin_debugtrap();
  }
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20976A8);
  v1 = (hkFreeListAllocator::Self *)((char *)self + 432);
  hkFreeList::Construct((hkFreeListAllocator::Self *)((char *)self + 36));
  *((uint32_t *)self + 105) = 0;
  do
  {
    attr = (pthread_mutexattr_t *)v1;
    v1 = (hkFreeListAllocator::Self *)((char *)v1 + 56);
    hkFreeList::Construct((hkFreeList::Self *)attr);
  }
  while ( v1 != (hkFreeListAllocator::Self *)((char *)self + 2728) );
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::Cinfo::findInfoIndex  (binary VA: 0x1548e50)
// Original: hkFreeListAllocator::Cinfo::findInfoIndex
// ----------------------------------------------------------------------------
int hkFreeListAllocator::Cinfo::findInfoIndex(hkFreeListAllocator::Cinfo::Self *self, unsigned int a2)
{
  hkFreeListAllocator::Cinfo::Self *v2;
  int v3;
  int result;

  v2 = self;
  v3 = *((uint32_t *)self + 1);
  if ( v3 <= 0 )
    return -1;
  result = 0;
  if ( *((uint32_t *)self + 2) != a2 )
  {
    while ( ++result != v3 )
    {
      v2 = (hkFreeListAllocator::Cinfo::Self *)((char *)v2 + 12);
      if ( *((uint32_t *)v2 + 2) == a2 )
        return result;
    }
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::Cinfo::add  (binary VA: 0x1548e90)
// Original: hkFreeListAllocator::Cinfo::add
// ----------------------------------------------------------------------------
uint32_t * hkFreeListAllocator::Cinfo::add(hkFreeListAllocator::Cinfo::Self *self, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int InfoIndex;
  uint32_t *v5;

  InfoIndex = hkFreeListAllocator::Cinfo::findInfoIndex(self, a2);
  if ( InfoIndex < 0 )
  {
    InfoIndex = *((uint32_t *)self + 1);
    *((uint32_t *)self + 1) = InfoIndex + 1;
  }
  v5 = (uint32_t *)((char *)self + 12 * InfoIndex);
  v5[2] = a2;
  v5[3] = a3;
  v5[4] = a4;
  return v5 + 2;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::Cinfo::removeAt  (binary VA: 0x1548ef0)
// Original: hkFreeListAllocator::Cinfo::removeAt
// ----------------------------------------------------------------------------
hkFreeListAllocator::Cinfo::Self * hkFreeListAllocator::Cinfo::removeAt(hkFreeListAllocator::Cinfo::Self *self, int a2)
{
  hkFreeListAllocator::Cinfo::Self *result;
  int v3;
  uint32_t *v4;
  uint32_t *v5;

  result = self;
  v3 = *((uint32_t *)self + 1) - 1;
  if ( v3 != a2 )
  {
    v4 = (uint32_t *)((char *)self + 12 * v3);
    v5 = (uint32_t *)((char *)self + 12 * a2);
    v5[2] = v4[2];
    v5[3] = v4[3];
    v5[4] = v4[4];
  }
  *((uint32_t *)self + 1) = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::setFixedSizeCinfo  (binary VA: 0x1548f30)
// Original: hkFreeListAllocator::setFixedSizeCinfo
// ----------------------------------------------------------------------------
uint32_t * hkFreeListAllocator::setFixedSizeCinfo(hkFreeListAllocator::Self *self, hkFreeListAllocator::Cinfo::Self *a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  uint32_t *result;

  v2 = 512;
  *(uint32_t *)a2 = (uint32_t)(uintptr_t)(self);
  hkFreeListAllocator::Cinfo::add(a2, 0x200u, 0x80u, (unsigned int)(uintptr_t)(self));
  hkFreeListAllocator::Cinfo::add(a2, 0x100u, 0x20u, (unsigned int)(uintptr_t)(self));
  hkFreeListAllocator::Cinfo::add(a2, 0, 4u, (unsigned int)(uintptr_t)(self));
  hkFreeListAllocator::Cinfo::add(a2, 0x280u, 0x80u, (unsigned int)(uintptr_t)(self));
  do
  {
    while ( 1 )
    {
      v3 = v2;
      if ( v2 > 0xFF )
      {
        v3 = v2 & 0xFFFFFFC0;
LABEL_5:
        v4 = v3 < 0x40 ? -16 : -32;
        v5 = v3 < 0x40 ? 16 : 32;
        goto LABEL_6;
      }
      if ( v2 <= 0x80 )
        goto LABEL_5;
      v4 = -32;
      v3 = v2 & 0xFFFFFFE0;
      v5 = 32;
LABEL_6:
      v6 = v4 & (v5 + v3 - 1);
      result = (uint32_t *)hkFreeListAllocator::Cinfo::findInfoIndex(a2, v6);
      if ( (int)(uintptr_t)(result) < 0 )
        break;
      v2 -= 16;
      if ( v2 == 0 )
        return result;
    }
    result = hkFreeListAllocator::Cinfo::add(a2, v6, v5, (unsigned int)(uintptr_t)(self));
    v2 -= 16;
  }
  while ( v2 != 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::setDefaultCinfo  (binary VA: 0x1549070)
// Original: hkFreeListAllocator::setDefaultCinfo
// ----------------------------------------------------------------------------
uint32_t * hkFreeListAllocator::setDefaultCinfo(hkFreeListAllocator::Self *self)
{
  unsigned int v1;
  int v2;
  unsigned int v3;
  unsigned int v4;
  uint32_t *result;
  unsigned int v6;
  int v7;
  int v8;

  v1 = 512;
  hkFreeListAllocator::Cinfo::add((hkFreeListAllocator::Cinfo::Self *)(self), 0x200u, 0x80u, 0x4000u);
  hkFreeListAllocator::Cinfo::add((hkFreeListAllocator::Cinfo::Self *)(self), 0x100u, 0x20u, 0x4000u);
  hkFreeListAllocator::Cinfo::add((hkFreeListAllocator::Cinfo::Self *)(self), 0, 4u, 0x100u);
  hkFreeListAllocator::Cinfo::add((hkFreeListAllocator::Cinfo::Self *)(self), 0x280u, 0x80u, 0x4000u);
  do
  {
    while ( 1 )
    {
      v6 = v1;
      if ( v1 > 0xFF )
      {
        v6 = v1 & 0xFFFFFFC0;
        if ( (v1 & 0xFFFFFFC0) == 0 )
        {
          v8 = 4096;
LABEL_2:
          v2 = -16;
          v3 = 16;
          goto LABEL_3;
        }
      }
      else if ( v1 > 0x80 )
      {
        v6 = v1 & 0xE0;
      }
      v7 = 4096;
      if ( 16 * v1 > 0xFFF )
        v7 = 16 * v1;
      v8 = v7;
      if ( v6 <= 0x3F )
        goto LABEL_2;
      v2 = -32;
      v3 = 32;
LABEL_3:
      v4 = v2 & (v6 + v3 - 1);
      result = (uint32_t *)hkFreeListAllocator::Cinfo::findInfoIndex((hkFreeListAllocator::Cinfo::Self *)(self), v4);
      if ( (int)(uintptr_t)(result) < 0 )
        break;
      v1 -= 16;
      if ( v1 == 0 )
        return result;
    }
    result = hkFreeListAllocator::Cinfo::add((hkFreeListAllocator::Cinfo::Self *)(self), v4, v3, v8);
    v1 -= 16;
  }
  while ( v1 != 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::deleteFreeList  (binary VA: 0x15491d0)
// Original: hkFreeListAllocator::_deleteFreeList
// ----------------------------------------------------------------------------
char * hkFreeListAllocator::deleteFreeList(hkFreeListAllocator::Self *self, hkFreeList::Self *a2)
{
  char *result;

  hkFreeList::freeAllMemory(a2);
  result = (char *)a2 + 56;
  if ( *((hkFreeList::Self **)self + 106) == (hkFreeList::Self *)((char *)a2 + 56) )
    *((uint32_t *)self + 106) = (uint32_t)(uintptr_t)(a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::Destroy  (binary VA: 0x1549220)
// Original: hkFreeListAllocator::~hkFreeListAllocator
// ----------------------------------------------------------------------------
void hkFreeListAllocator::Destroy(hkFreeListAllocator::Self *self)
{
  int v1;
  int v2;
  hkFreeList::Self *v3;
  int v4;
  int v5;
  hkFreeList::Self *v6;

  v1 = 1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096B28);
  v2 = *((uint32_t *)self + 105);
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_2096B8C);
  if ( v2 > 0 )
  {
    while ( 1 )
    {
      v3 = *((hkFreeList::Self **)self + v1 + 63);
      if ( v3 != nullptr )
        break;
LABEL_9:
      v5 = v1++;
      if ( v5 >= v2 )
        goto LABEL_10;
    }
    while ( 1 )
    {
      hkFreeListAllocator::deleteFreeList(self, v3);
      v2 = *((uint32_t *)self + 105);
      v4 = v1;
      if ( v1 >= v2 )
        break;
      do
      {
        while ( *((hkFreeList::Self **)self + v4 + 64) != v3 )
        {
          if ( ++v4 == v2 )
            goto LABEL_8;
        }
        *((uint32_t *)self + v4++ + 64) = 0;
      }
      while ( v4 != v2 );
LABEL_8:
      v3 = *((hkFreeList::Self **)self + ++v1 + 63);
      if ( v3 == nullptr )
        goto LABEL_9;
    }
  }
LABEL_10:
  hkFreeList::freeAllMemory((hkFreeListAllocator::Self *)((char *)self + 36));
  v6 = (hkFreeList::Self *)((hkFreeListAllocator::Self *)((char *)self + 2728));
  do
  {
    v6 = (hkFreeList::Self *)((char *)v6 - 56);
    hkFreeList::freeAllMemory(v6);
  }
  while ( (hkFreeListAllocator::Self *)((char *)self + 432) != (hkFreeListAllocator::Self *)(uintptr_t)(v6) );
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20976A8);
  hkFreeList::freeAllMemory((hkFreeListAllocator::Self *)((char *)self + 36));
  hkMemoryAllocator::Destroy((hkFreeListAllocator::Self *)((char *)self + 32));
  if ( pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 8)) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      28,
      "~hkCriticalSection");
    perror("pthread_mutex_destroy(&m_mutex)");
    __builtin_debugtrap();
  }
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_2096AE8);
  hkMemoryAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::Destroy_ea1549390  (binary VA: 0x1549390)
// Original: hkFreeListAllocator::~hkFreeListAllocator
// ----------------------------------------------------------------------------
void hkFreeListAllocator::Destroy_ea1549390(hkFreeListAllocator::Self *self)
{
  hkFreeListAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::newFreeList  (binary VA: 0x15493d0)
// Original: hkFreeListAllocator::_newFreeList
// ----------------------------------------------------------------------------
hkFreeList::Self * hkFreeListAllocator::newFreeList(hkFreeListAllocator::Self *self, unsigned int a2, unsigned int a3, unsigned int a4)
{
  hkFreeList::Self *v4;
  int v5;
  hkFreeList::Self *result;
  int v7;
  int v8;
  hkFreeList::Self *v9;

  v4 = *((hkFreeList::Self **)self + 106);
  if ( (unsigned int)(uintptr_t)(v4) >= *((uint32_t *)self + 107) )
    __builtin_debugtrap();
  v9 = v4;
  *((uint32_t *)self + 106) = (uint32_t)(uintptr_t)((char *)v4 + 56);
  hkFreeList::Construct(v4, a2, a3, a4, *((hkMemoryAllocator::Self **)self + 6), (hkFreeListAllocator::Self *)((char *)self + 32));
  v5 = *((uint32_t *)self + 105);
  result = v9;
  if ( v5 <= 0 )
  {
LABEL_8:
    *((uint32_t *)self + 105) = v5 + 1;
    *((uint32_t *)self + v5 + 64) = (uint32_t)(uintptr_t)(v9);
    return result;
  }
  v7 = *((uint32_t *)v9 + 1);
  v8 = 0;
  if ( *(uint32_t *)(*((uint32_t *)self + 64) + 4) != v7 )
  {
    while ( ++v8 != v5 )
    {
      if ( *(uint32_t *)(*((uint32_t *)self + v8 + 64) + 4) == v7 )
        goto LABEL_9;
    }
    goto LABEL_8;
  }
  v8 = 0;
LABEL_9:
  hkFreeListAllocator::deleteFreeList(self, v9);
  return *((hkFreeList::Self **)self + v8 + 64);
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::Construct  (binary VA: 0x15494b0)
// Original: hkFreeListAllocator::hkFreeListAllocator
// ----------------------------------------------------------------------------
void hkFreeListAllocator::Construct(hkFreeListAllocator::Self *self, hkMemoryAllocator::Self *a2, hkMemoryAllocator::ExtendedInterface::Self *a3, const hkFreeListAllocator::Cinfo::Self *a4)
{
  hkFreeListAllocator::Self *v4;
  pthread_mutexattr_t *attr;
  pthread_mutexattr_t mutexattr;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096B28);
  *((uint32_t *)self + 1) = ((uint32_t)(uintptr_t)&off_2096B8C);
  *((uint32_t *)self + 3) = 4000;
  if ( pthread_mutexattr_init(&mutexattr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      16,
      "hkCriticalSection");
    perror("pthread_mutexattr_init(&attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_settype(&mutexattr, 1) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      17,
      "hkCriticalSection");
    perror("pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE)");
    __builtin_debugtrap();
  }
  if ( pthread_mutex_init((pthread_mutex_t *)((char *)self + 8), &mutexattr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      18,
      "hkCriticalSection");
    perror("pthread_mutex_init(&m_mutex, &attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_destroy(&mutexattr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      19,
      "hkCriticalSection");
    perror("pthread_mutexattr_destroy(&attr)");
    __builtin_debugtrap();
  }
  v4 = (hkFreeListAllocator::Self *)((char *)self + 432);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20976A8);
  hkFreeList::Construct((hkFreeListAllocator::Self *)((char *)self + 36));
  *((uint32_t *)self + 105) = 0;
  do
  {
    attr = (pthread_mutexattr_t *)v4;
    v4 = (hkFreeListAllocator::Self *)((char *)v4 + 56);
    hkFreeList::Construct((hkFreeList::Self *)attr);
  }
  while ( v4 != (hkFreeListAllocator::Self *)((char *)self + 2728) );
  hkFreeListAllocator::_construct(self, a4);
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::init  (binary VA: 0x1549870)
// Original: hkFreeListAllocator::init
// ----------------------------------------------------------------------------
int hkFreeListAllocator::init(hkFreeListAllocator::Self *self, hkMemoryAllocator::Self *a2, hkMemoryAllocator::ExtendedInterface::Self *a3, const hkFreeListAllocator::Cinfo::Self *a4)
{
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(a3);
  return hkFreeListAllocator::_construct(self, a4);
}

// ----------------------------------------------------------------------------
// Function: hkFreeListAllocator::walkMemory  (binary VA: 0x1549ff0)
// Original: hkFreeListAllocator::walkMemory
// ----------------------------------------------------------------------------
hkFreeListAllocator::Self * hkFreeListAllocator::walkMemory(hkFreeListAllocator::Self *self, void (*a2)(void *, unsigned int, bool, int, void *), void (*a3)(void *, unsigned int, bool, int, void *), void *a4)
{
  void (*v4)(void *, unsigned int, bool, int, void *);
  int v5;
  pthread_mutex_t *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *i;
  uint32_t *v15;
  int v16;
  int v18;
  void (*v19)(void *, unsigned int, bool, int, void *);
  int v20;
  void (*v21)(void *, unsigned int, bool, int, void *);
  hkFreeList::Self *v22;
  typedef int _g4_t_v23;
  typedef hkFreeList::Self *_g4_t_v24;
  typedef void (*_g4_t_v25)(void *, unsigned int, bool, int, void *);
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef hkFreeListAllocator::Self *_g4_t_v29;
  typedef void (*_g4_t_v30)(void *, unsigned int, bool, int, void *);
  typedef void *_g4_t_v31;
  typedef void (*_g4_t_v32)(void *, unsigned int, bool, int, void *);
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef void (*_g4_t_v37)(void *, unsigned int, bool, int, void *);
  typedef void *_g4_t_v38;
  typedef uint32_t _g4_t_v39[48];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v25)) > _g4_s2 ? (20u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v26)) > _g4_s3 ? (24u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v27)) > _g4_s4 ? (28u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_mutex)) > _g4_s5 ? (32u + sizeof(_g4_t_mutex)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v29)) > _g4_s6 ? (36u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v30)) > _g4_s7 ? (44u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v31)) > _g4_s8 ? (48u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v32)) > _g4_s9 ? (52u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v33)) > _g4_s10 ? (56u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v34)) > _g4_s11 ? (60u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v35)) > _g4_s12 ? (64u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v36)) > _g4_s13 ? (68u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v37)) > _g4_s14 ? (72u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v38)) > _g4_s15 ? (76u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v39)) > _g4_s16 ? (84u + sizeof(_g4_t_v39)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);

  v39[44] = (uint32_t)(uintptr_t)(&self);
  v4 = a2;
  v29 = self;
  v32 = a3;
  v31 = a4;
  if ( *((uint32_t *)a2 + 7) == 0 )
  {
    *(uint32_t *)self = 1;
    return v29;
  }
  v5 = *((uint32_t *)a2 + 3);
  v6 = (pthread_mutex_t *)((char *)a2 + 8);
  mutex = (pthread_mutex_t *)((char *)a2 + 8);
  if ( v5 != 0 )
  {
    v30 = a2;
    do
    {
      if ( pthread_mutex_trylock(mutex) == 0 )
      {
        v4 = v30;
        goto LABEL_7;
      }
      --v5;
    }
    while ( v5 != 0 );
    v4 = v30;
    v6 = mutex;
  }
  if ( pthread_mutex_lock(v6) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
    perror("pthread_mutex_lock(&mutex)");
    __builtin_debugtrap();
  }
LABEL_7:
  hkString::memCpy((hkString::Self *)v39, (char *)v4 + 256, 4 * *((uint32_t *)v4 + 105), v23);
  v26 = *((uint32_t *)v4 + 105);
  v24 = (hkFreeList::Self *)((char *)v4 + 36);
  v35 = 0;
  v36 = 0;
  v39[v26] = (uint32_t)(uintptr_t)((char *)v4 + 36);
  v27 = hkMallocAllocator::m_defaultMallocAllocator[0];
  v34 = hkMallocAllocator::m_defaultMallocAllocator[0];
  v37 = v32;
  v38 = v31;
  if ( v26 + 1 <= 0 )
  {
    v35 = G4_VCALL<int>(hkMallocAllocator::m_defaultMallocAllocator[0], 8);
    v16 = v35;
    if ( v35 != 0 )
    {
LABEL_22:
      if ( v36 > 1 )
        hkAlgorithm::quickSortRecursive_71a3c9(v16, 0, v36 - 1);
    }
  }
  else
  {
    v25 = v4;
    v7 = 0;
    do
    {
      v8 = v39[v7++];
      v36 += hkFreeList::calcNumBlocks(*(uint32_t *)(v8 + 12));
      v36 += hkFreeList::calcNumBlocks(*(uint32_t *)(v8 + 16));
    }
    while ( v26 + 1 != v7 );
    v4 = v25;
    v9 = G4_VCALL<int>(v27, 8);
    v35 = v9;
    v10 = v39;
    if ( v9 != 0 )
    {
      do
      {
        v11 = *v10;
        v12 = *(uint32_t **)(*v10 + 12);
        if ( v12 != nullptr )
        {
          do
          {
            v13 = (uint32_t *)v12[1];
            v9 += 4;
            if ( v13 == nullptr )
              v13 = v12;
            *(uint32_t *)(v9 - 4) = (uint32_t)(uintptr_t)(v13);
            v12 = (uint32_t *)*v12;
          }
          while ( v12 != nullptr );
          v11 = *v10;
        }
        for ( i = *(uint32_t **)(v11 + 16); i != nullptr; i = (uint32_t *)*i )
        {
          v15 = (uint32_t *)i[1];
          v9 += 4;
          if ( v15 == nullptr )
            v15 = i;
          *(uint32_t *)(v9 - 4) = (uint32_t)(uintptr_t)(v15);
        }
        ++v10;
      }
      while ( v10 != &v39[v26 + 1] );
      v4 = v25;
      v16 = v35;
      goto LABEL_22;
    }
  }
  (*(void (**)(int *, uint32_t, int (*)(WalkInfo *, void *, uint8_t, bool, int), int *))(**((uint32_t **)v4 + 7) + 28))(
    &v33,
    *((uint32_t *)v4 + 7),
    ((int (*)(WalkInfo *, void *, uint8_t, bool, int))nullptr),
    &v34);
  if ( v33 != 0 )
  {
    *(uint32_t *)v29 = v33;
    if ( v35 != 0 )
      G4_VCALL<void>(v34, 12, v35, 4 * v36);
  }
  else
  {
    if ( v35 != 0 )
      G4_VCALL<void>(v34, 12, v35, 4 * v36);
    v18 = *((uint32_t *)v4 + 105);
    if ( v18 > 0 )
    {
      v19 = v4;
      v20 = 0;
      v21 = v19;
      do
      {
        v22 = *((hkFreeList::Self **)v21 + v20++ + 64);
        hkFreeList::walkMemory(v22, v32, v20, v31);
        v18 = *((uint32_t *)v21 + 105);
      }
      while ( v18 > v20 );
    }
    hkFreeList::walkMemory(v24, v32, v18 + 1, v31);
    *(uint32_t *)v29 = 0;
  }
  if ( pthread_mutex_unlock(mutex) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return v29;
}

// ----------------------------------------------------------------------------
// Function: hkStreamReader::isSeekTellSupported  (binary VA: 0x154a460)
// Original: hkStreamReader::isSeekTellSupported
// ----------------------------------------------------------------------------
int hkStreamReader::isSeekTellSupported()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkStreamReader::skip  (binary VA: 0x154a470)
// Original: hkStreamReader::skip
// ----------------------------------------------------------------------------
int hkStreamReader::skip(hkStreamReader::Self *self, int a2)
{
  int v2;
  int v3;
  int v4;
  int v6;

  v2 = a2;
  if ( a2 != 0 )
  {
    while ( 1 )
    {
      v3 = 512;
      if ( v2 <= 512 )
        v3 = v2;
      v4 = G4_VCALL<int>(self, 24, &v6, v3);
      if ( v4 == 0 )
        break;
      v2 -= v4;
      if ( v2 == 0 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v2 = 0;
  }
  return a2 - v2;
}

// ----------------------------------------------------------------------------
// Function: hkStreamReader::peek  (binary VA: 0x154a4e0)
// Original: hkStreamReader::peek
// ----------------------------------------------------------------------------
int hkStreamReader::peek()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkStreamReader::Destroy  (binary VA: 0x154a4f0)
// Original: hkStreamReader::~hkStreamReader
// ----------------------------------------------------------------------------
void hkStreamReader::Destroy(hkStreamReader::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkStreamReader::Destroy_ea154a510  (binary VA: 0x154a510)
// Original: hkStreamReader::~hkStreamReader
// ----------------------------------------------------------------------------
void hkStreamReader::Destroy_ea154a510(hkStreamReader::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkClass::staticClass  (binary VA: 0x154a580)
// Original: hkClass::staticClass
// ----------------------------------------------------------------------------
void * hkClass::staticClass()
{
  return &hkClassClass;
}

// ----------------------------------------------------------------------------
// Function: hkUuid::staticClass  (binary VA: 0x154a6c0)
// Original: hkUuid::staticClass
// ----------------------------------------------------------------------------
void * hkUuid::staticClass()
{
  return &hkUuidClass;
}

// ----------------------------------------------------------------------------
// Function: hkStreamWriter::flush  (binary VA: 0x154a7b0)
// Original: hkStreamWriter::flush
// ----------------------------------------------------------------------------
void hkStreamWriter::flush()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkCrcStreamWriter_unsigned_int_3988292384u_79541a::Destroy  (binary VA: 0x154a7c0)
// Original: hkCrcStreamWriter<unsigned int,3988292384u>::~hkCrcStreamWriter
// ----------------------------------------------------------------------------
void hkCrcStreamWriter_unsigned_int_3988292384u_79541a::Destroy(hkCrcStreamWriter<unsigned int, 3988292384u> *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkCrc32StreamWriter::Destroy  (binary VA: 0x154a7e0)
// Original: hkCrc32StreamWriter::~hkCrc32StreamWriter
// ----------------------------------------------------------------------------
void hkCrc32StreamWriter::Destroy(hkCrc32StreamWriter::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkCrcStreamWriter_unsigned_int_3988292384u_79541a::isOk  (binary VA: 0x154a800)
// Original: hkCrcStreamWriter<unsigned int,3988292384u>::isOk
// ----------------------------------------------------------------------------
hkCrcStreamWriter<unsigned int, 3988292384u> * hkCrcStreamWriter_unsigned_int_3988292384u_79541a::isOk(hkCrcStreamWriter<unsigned int, 3988292384u> *self)
{
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkCrcStreamWriter_unsigned_int_3988292384u_79541a::write  (binary VA: 0x154a810)
// Original: hkCrcStreamWriter<unsigned int,3988292384u>::write
// ----------------------------------------------------------------------------
int hkCrcStreamWriter_unsigned_int_3988292384u_79541a::write(hkCrcStreamWriter<unsigned int, 3988292384u> *self, char *a2, int a3)
{
  unsigned int v3;
  char *v4;
  char v5; // di
  uint8_t v6; // di
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;

  v3 = *((uint32_t *)self + 2);
  if ( a3 > 0 )
  {
    v4 = a2;
    do
    {
      v5 = *v4++;
      v6 = v3 ^ v5;
      v7 = (v6 >> 1) ^ 0xEDB88320;
      if ( (v6 & 1) == 0 )
        v7 = v6 >> 1;
      v8 = (v7 >> 1) ^ 0xEDB88320;
      if ( (v7 & 1) == 0 )
        v8 = v7 >> 1;
      v9 = (v8 >> 1) ^ 0xEDB88320;
      if ( (v8 & 1) == 0 )
        v9 = v8 >> 1;
      v10 = (v9 >> 1) ^ 0xEDB88320;
      if ( (v9 & 1) == 0 )
        v10 = v9 >> 1;
      v11 = (v10 >> 1) ^ 0xEDB88320;
      if ( (v10 & 1) == 0 )
        v11 = v10 >> 1;
      v12 = (v11 >> 1) ^ 0xEDB88320;
      if ( (v11 & 1) == 0 )
        v12 = v11 >> 1;
      v13 = (v12 >> 1) ^ 0xEDB88320;
      if ( (v12 & 1) == 0 )
        v13 = v12 >> 1;
      v14 = v3 >> 8;
      v15 = (v13 >> 1) ^ 0xEDB88320;
      if ( (v13 & 1) == 0 )
        v15 = v13 >> 1;
      v3 = v14 ^ v15;
    }
    while ( v4 != &a2[a3] );
  }
  *((uint32_t *)self + 2) = v3;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkCrc32StreamWriter::Destroy_ea154a900  (binary VA: 0x154a900)
// Original: hkCrc32StreamWriter::~hkCrc32StreamWriter
// ----------------------------------------------------------------------------
void hkCrc32StreamWriter::Destroy_ea154a900(hkCrc32StreamWriter::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkCrcStreamWriter_unsigned_int_3988292384u_79541a::Destroy_ea154a960  (binary VA: 0x154a960)
// Original: hkCrcStreamWriter<unsigned int,3988292384u>::~hkCrcStreamWriter
// ----------------------------------------------------------------------------
void hkCrcStreamWriter_unsigned_int_3988292384u_79541a::Destroy_ea154a960(hkCrcStreamWriter<unsigned int, 3988292384u> *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkClass::Construct  (binary VA: 0x154a9c0)
// Original: hkClass::hkClass
// ----------------------------------------------------------------------------
void hkClass::Construct(hkClass::Self *self, const char *a2, const hkClass::Self *a3, int a4, const hkClass::Self **a5, int a6, const hkClassEnum::Self *a7, int a8, const hkClassMember::Self *a9, int a10, const void *a11, const hkCustomAttributes::Self *a12, unsigned int a13, unsigned int a14)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 2) = a4;
  *((uint32_t *)self + 3) = a6;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a7);
  *((uint32_t *)self + 5) = a8;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a9);
  *((uint32_t *)self + 7) = a10;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(a11);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(a12);
  *((uint32_t *)self + 10) = a13;
  *((uint32_t *)self + 11) = a14;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getName  (binary VA: 0x154aa20)
// Original: hkClass::getName
// ----------------------------------------------------------------------------
int hkClass::getName(hkClass::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkClass::equals  (binary VA: 0x154aa30)
// Original: hkClass::equals
// ----------------------------------------------------------------------------
bool hkClass::equals(hkClass::Self *self, const hkClass::Self *a2)
{
  bool result;
  const char *Name;
  hkString::Self *v4;
  const char *v5;

  if ( a2 == nullptr )
    return false;
  result = true;
  if ( self != a2 )
  {
    Name = (const char *)hkClass::getName((hkClass::Self *)(a2));
    v4 = (hkString::Self *)hkClass::getName(self);
    return hkString::strCmp(v4, Name, v5) == 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getParent  (binary VA: 0x154aaa0)
// Original: hkClass::getParent
// ----------------------------------------------------------------------------
int hkClass::getParent(hkClass::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: hkClass::getParent_ea154aab0  (binary VA: 0x154aab0)
// Original: hkClass::getParent
// ----------------------------------------------------------------------------
int hkClass::getParent_ea154aab0(hkClass::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: hkClass::getInheritanceDepth  (binary VA: 0x154aac0)
// Original: hkClass::getInheritanceDepth
// ----------------------------------------------------------------------------
int hkClass::getInheritanceDepth(hkClass::Self *self)
{
  hkClass::Self *v1;
  int result;

  v1 = self;
  for ( result = 0; v1 != nullptr; ++result )
    v1 = *((hkClass::Self **)v1 + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkClass::isSuperClass  (binary VA: 0x154aae0)
// Original: hkClass::isSuperClass
// ----------------------------------------------------------------------------
hkClass::Self * hkClass::isSuperClass(hkClass::Self *self, const hkClass::Self *a2, hkClass::Self *a3)
{
  hkClass::Self *Parent;
  const char *Name;
  hkString::Self *v5;
  const char *v7;

  Parent = a3;
  if ( a3 != nullptr )
  {
    while ( 1 )
    {
      Name = (const char *)hkClass::getName((hkClass::Self *)(a2));
      v5 = (hkString::Self *)hkClass::getName(Parent);
      if ( hkString::strCmp(v5, Name, v7) == 0 )
        break;
      Parent = (hkClass::Self *)hkClass::getParent(Parent);
      if ( Parent == nullptr )
        goto LABEL_6;
    }
    *(uint8_t *)self = 1;
    return self;
  }
  else
  {
LABEL_6:
    *(uint8_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkClass::getNumInterfaces  (binary VA: 0x154ab70)
// Original: hkClass::getNumInterfaces
// ----------------------------------------------------------------------------
int hkClass::getNumInterfaces(hkClass::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 1);
  for ( result = *((uint32_t *)self + 3); v1 != 0; v1 = *(uint32_t *)(v1 + 4) )
    result += *(uint32_t *)(v1 + 12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getInterface  (binary VA: 0x154ab90)
// Original: hkClass::getInterface
// ----------------------------------------------------------------------------
int hkClass::getInterface()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getDeclaredInterface  (binary VA: 0x154aba0)
// Original: hkClass::getDeclaredInterface
// ----------------------------------------------------------------------------
int hkClass::getDeclaredInterface()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getNumDeclaredInterfaces  (binary VA: 0x154abb0)
// Original: hkClass::getNumDeclaredInterfaces
// ----------------------------------------------------------------------------
int hkClass::getNumDeclaredInterfaces(hkClass::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: hkClass::getNumEnums  (binary VA: 0x154abc0)
// Original: hkClass::getNumEnums
// ----------------------------------------------------------------------------
int hkClass::getNumEnums(hkClass::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 1);
  for ( result = *((uint32_t *)self + 5); v1 != 0; v1 = *(uint32_t *)(v1 + 4) )
    result += *(uint32_t *)(v1 + 20);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getEnum  (binary VA: 0x154abe0)
// Original: hkClass::getEnum
// ----------------------------------------------------------------------------
int hkClass::getEnum(hkClass::Self *self, int a2)
{
  int v2;
  int v3;
  hkClass::Self *v4;

  v2 = a2 - hkClass::getNumEnums(self);
  if ( self == nullptr )
    return *((uint32_t *)self + 4);
  v3 = *((uint32_t *)self + 5) + v2;
  if ( v3 < 0 )
  {
    v4 = self;
    while ( 1 )
    {
      v4 = *((hkClass::Self **)v4 + 1);
      if ( v4 == nullptr )
        break;
      v3 += *((uint32_t *)v4 + 5);
      if ( v3 >= 0 )
        return *((uint32_t *)v4 + 4) + 20 * v3;
    }
    return *((uint32_t *)self + 4);
  }
  v4 = self;
  return *((uint32_t *)v4 + 4) + 20 * v3;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getEnumByName  (binary VA: 0x154ac40)
// Original: hkClass::getEnumByName
// ----------------------------------------------------------------------------
hkString::Self ** hkClass::getEnumByName(hkClass::Self *self, char *a2)
{
  int i;
  hkString::Self **Enum;
  const char *v5;

  for ( i = 0; ; ++i )
  {
    if ( i >= hkClass::getNumEnums(self) )
      return nullptr;
    Enum = (hkString::Self **)hkClass::getEnum(self, i);
    if ( hkString::strCmp(*Enum, a2, v5) == 0 )
      break;
  }
  return Enum;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getDeclaredEnum  (binary VA: 0x154acb0)
// Original: hkClass::getDeclaredEnum
// ----------------------------------------------------------------------------
int hkClass::getDeclaredEnum(hkClass::Self *self, int a2)
{
  return *((uint32_t *)self + 4) + 20 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getNumDeclaredEnums  (binary VA: 0x154acd0)
// Original: hkClass::getNumDeclaredEnums
// ----------------------------------------------------------------------------
int hkClass::getNumDeclaredEnums(hkClass::Self *self)
{
  return *((uint32_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: hkClass::getDeclaredEnumByName  (binary VA: 0x154ace0)
// Original: hkClass::getDeclaredEnumByName
// ----------------------------------------------------------------------------
hkString::Self ** hkClass::getDeclaredEnumByName(hkClass::Self *self, char *a2)
{
  int i;
  hkString::Self **DeclaredEnum;
  const char *v5;

  for ( i = 0; ; ++i )
  {
    if ( i >= hkClass::getNumDeclaredEnums(self) )
      return nullptr;
    DeclaredEnum = (hkString::Self **)hkClass::getDeclaredEnum(self, i);
    if ( hkString::strCmp(*DeclaredEnum, a2, v5) == 0 )
      break;
  }
  return DeclaredEnum;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getNumMembers  (binary VA: 0x154ad50)
// Original: hkClass::getNumMembers
// ----------------------------------------------------------------------------
int hkClass::getNumMembers(hkClass::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 1);
  for ( result = *((uint32_t *)self + 7); v1 != 0; v1 = *(uint32_t *)(v1 + 4) )
    result += *(uint32_t *)(v1 + 28);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getMember  (binary VA: 0x154ad70)
// Original: hkClass::getMember
// ----------------------------------------------------------------------------
int hkClass::getMember(hkClass::Self *self, int a2)
{
  int v2;
  int v3;
  hkClass::Self *v4;

  v2 = a2 - hkClass::getNumMembers(self);
  if ( self == nullptr )
    return *((uint32_t *)self + 6);
  v3 = *((uint32_t *)self + 7) + v2;
  if ( v3 < 0 )
  {
    v4 = self;
    while ( 1 )
    {
      v4 = *((hkClass::Self **)v4 + 1);
      if ( v4 == nullptr )
        break;
      v3 += *((uint32_t *)v4 + 7);
      if ( v3 >= 0 )
        return *((uint32_t *)v4 + 6) + 24 * v3;
    }
    return *((uint32_t *)self + 6);
  }
  v4 = self;
  return *((uint32_t *)v4 + 6) + 24 * v3;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getMember_ea154add0  (binary VA: 0x154add0)
// Original: hkClass::getMember
// ----------------------------------------------------------------------------
int hkClass::getMember_ea154add0(hkClass::Self *self, int a2)
{
  return hkClass::getMember(self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkClass::getNumDeclaredMembers  (binary VA: 0x154ae00)
// Original: hkClass::getNumDeclaredMembers
// ----------------------------------------------------------------------------
int hkClass::getNumDeclaredMembers(hkClass::Self *self)
{
  return *((uint32_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: hkClass::getDeclaredMember  (binary VA: 0x154ae10)
// Original: hkClass::getDeclaredMember
// ----------------------------------------------------------------------------
int hkClass::getDeclaredMember(hkClass::Self *self, int a2)
{
  return *((uint32_t *)self + 6) + 24 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getDeclaredMemberByName  (binary VA: 0x154ae30)
// Original: hkClass::getDeclaredMemberByName
// ----------------------------------------------------------------------------
hkString::Self ** hkClass::getDeclaredMemberByName(hkClass::Self *self, char *a2)
{
  int i;
  hkString::Self **DeclaredMember;
  const char *v5;

  for ( i = 0; ; ++i )
  {
    if ( i >= hkClass::getNumDeclaredMembers(self) )
      return nullptr;
    DeclaredMember = (hkString::Self **)hkClass::getDeclaredMember(self, i);
    if ( hkString::strCmp(*DeclaredMember, a2, v5) == 0 )
      break;
  }
  return DeclaredMember;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getMemberByName  (binary VA: 0x154aea0)
// Original: hkClass::getMemberByName
// ----------------------------------------------------------------------------
hkString::Self ** hkClass::getMemberByName(hkClass::Self *self, char *a2)
{
  int i;
  hkString::Self **Member;
  const char *v5;

  for ( i = 0; ; ++i )
  {
    if ( i >= hkClass::getNumMembers(self) )
      return nullptr;
    Member = (hkString::Self **)hkClass::getMember(self, i);
    if ( hkString::strCmp(*Member, a2, v5) == 0 )
      break;
  }
  return Member;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getMemberIndexByName  (binary VA: 0x154af10)
// Original: hkClass::getMemberIndexByName
// ----------------------------------------------------------------------------
int hkClass::getMemberIndexByName(hkClass::Self *self, char *a2)
{
  int i;
  hkString::Self **Member;
  const char *v5;

  for ( i = 0; ; ++i )
  {
    if ( i >= hkClass::getNumMembers(self) )
      return -1;
    Member = (hkString::Self **)hkClass::getMember(self, i);
    if ( hkString::strCmp(*Member, a2, v5) == 0 )
      break;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getMemberIndexByNameCaseInsensitive  (binary VA: 0x154af80)
// Original: hkClass::getMemberIndexByNameCaseInsensitive
// ----------------------------------------------------------------------------
int hkClass::getMemberIndexByNameCaseInsensitive(hkClass::Self *self, char *a2)
{
  int i;
  hkString::Self **Member;
  const char *v5;

  for ( i = 0; ; ++i )
  {
    if ( i >= hkClass::getNumMembers(self) )
      return -1;
    Member = (hkString::Self **)hkClass::getMember(self, i);
    if ( hkString::strCasecmp(*Member, a2, v5) == 0 )
      break;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getDeclaredMemberIndexByName  (binary VA: 0x154aff0)
// Original: hkClass::getDeclaredMemberIndexByName
// ----------------------------------------------------------------------------
int hkClass::getDeclaredMemberIndexByName(hkClass::Self *self, char *a2)
{
  int i;
  hkString::Self **DeclaredMember;
  const char *v5;

  for ( i = 0; ; ++i )
  {
    if ( i >= hkClass::getNumDeclaredMembers(self) )
      return -1;
    DeclaredMember = (hkString::Self **)hkClass::getDeclaredMember(self, i);
    if ( hkString::strCmp(*DeclaredMember, a2, v5) == 0 )
      break;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getObjectSize  (binary VA: 0x154b060)
// Original: hkClass::getObjectSize
// ----------------------------------------------------------------------------
int hkClass::getObjectSize(hkClass::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: hkClass::setObjectSize  (binary VA: 0x154b070)
// Original: hkClass::setObjectSize
// ----------------------------------------------------------------------------
hkClass::Self * hkClass::setObjectSize(hkClass::Self *self, int a2)
{
  *((uint32_t *)self + 2) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkClass::hasVtable  (binary VA: 0x154b080)
// Original: hkClass::hasVtable
// ----------------------------------------------------------------------------
hkClass::Self * hkClass::hasVtable(hkClass::Self *self, hkClass::Self *Parent)
{
  while ( hkClass::getParent(Parent) != 0 )
    Parent = (hkClass::Self *)hkClass::getParent(Parent);
  *(uint8_t *)self = *((uint32_t *)Parent + 3) != 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getDescribedVersion  (binary VA: 0x154b0d0)
// Original: hkClass::getDescribedVersion
// ----------------------------------------------------------------------------
int hkClass::getDescribedVersion(hkClass::Self *self)
{
  return *((uint32_t *)self + 11);
}

// ----------------------------------------------------------------------------
// Function: hkClass::retrieveMember  (binary VA: 0x154b0e0)
// Original: hkClass::retrieveMember
// ----------------------------------------------------------------------------
hkClass::Self * hkClass::retrieveMember(hkClass::Self *self, hkClass::Self *a2, const void **a3, const hkClassMember::Self **a4, uint32_t *a5)
{
  char *v5;
  int v6;
  hkClass::Self *v7;
  int v9;
  int v10;
  const hkClassMember::Self *v11;
  int v12;

  v5 = (char *)a3 - hkClass::getNumMembers(a2);
  if ( a2 == nullptr )
  {
LABEL_6:
    *(uint32_t *)self = 1;
    return self;
  }
  v6 = (int)(uintptr_t)(&v5[*((uint32_t *)a2 + 7)]);
  if ( v6 < 0 )
  {
    v7 = a2;
    while ( 1 )
    {
      v7 = *((hkClass::Self **)v7 + 1);
      if ( v7 == nullptr )
        goto LABEL_6;
      v6 += *((uint32_t *)v7 + 7);
      if ( v6 >= 0 )
        goto LABEL_8;
    }
  }
  v7 = a2;
LABEL_8:
  v9 = *((uint32_t *)v7 + 8);
  if ( v9 == 0 )
    goto LABEL_6;
  v10 = *(uint32_t *)(v9 + 4 * v6);
  if ( v10 != -2 && v10 < 0 )
    goto LABEL_6;
  v11 = (const hkClassMember::Self *)(v10 + v9);
  v12 = 3 * v6;
  if ( v10 == -2 )
    v11 = (const hkClassMember::Self *)&unk_1D13560;
  *(uint32_t *)self = 0;
  *a4 = v11;
  *a5 = *((uint32_t *)v7 + 6) + 8 * v12;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkClass::hasDefault  (binary VA: 0x154b190)
// Original: hkClass::hasDefault
// ----------------------------------------------------------------------------
bool hkClass::hasDefault(hkClass::Self *self, const void **a2)
{
  typedef uint32_t _g4_t_v3[3];
  typedef const hkClassMember::Self *_g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);

  hkClass::retrieveMember((hkClass::Self *)v3, self, a2, &v4, (uint32_t *)(&v5));
  return v3[0] == 0;
}

// ----------------------------------------------------------------------------
// Function: hkClass::hasDeclaredDefault  (binary VA: 0x154b1e0)
// Original: hkClass::hasDeclaredDefault
// ----------------------------------------------------------------------------
bool hkClass::hasDeclaredDefault(hkClass::Self *self, int a2)
{
  int v2;

  v2 = *((uint32_t *)self + 8);
  return v2 != 0 && (*(uint32_t *)(v2 + 4 * a2) >= 0 || *(uint32_t *)(v2 + 4 * a2) == -2);
}

// ----------------------------------------------------------------------------
// Function: hkClass::getDefault  (binary VA: 0x154b210)
// Original: hkClass::getDefault
// ----------------------------------------------------------------------------
const hkClassMember::Self * hkClass::getDefault(hkClass::Self *self, const void **a2)
{
  const hkClassMember::Self *result;
  typedef int _g4_t_v3;
  typedef const hkClassMember::Self *_g4_t_v4;
  typedef uint32_t _g4_t_v5[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v4)) > _g4_s1 ? (4u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v5)) > _g4_s2 ? (20u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);

  v5[7] = (uint32_t)(uintptr_t)(&self);
  v4 = nullptr;
  v5[0] = 0;
  hkClass::retrieveMember((hkClass::Self *)&v3, self, a2, &v4, v5);
  result = nullptr;
  if ( v3 == 0 )
    return v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getDefault  (binary VA: 0x154b280)
// Original: hkClass::getDefault
// ----------------------------------------------------------------------------
hkClass::Self * hkClass::getDefault(hkClass::Self *self, hkClass::Self *a2, const void **a3, int a4)
{
  hkClass::Self *v4;
  int v5;
  int SizeInBytes;
  typedef void (*_g4_t_v8)(int, const hkClassMember::Self *, int);
  typedef const hkClassMember::Self *_g4_t_v9;
  typedef hkClassMember::Self *_g4_t_v10[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);

  v10[6] = (hkClassMember::Self *)&self;
  v4 = self;
  v5 = a4;
  v9 = nullptr;
  v10[0] = nullptr;
  hkClass::retrieveMember(self, a2, a3, &v9, (uint32_t *)(v10));
  if ( *(uint32_t *)v4 == 0 )
  {
    v8 = *(void (**)(int, const hkClassMember::Self *, int))(*(uint32_t *)v5 + 24);
    SizeInBytes = hkClassMember::getSizeInBytes(v10[0]);
    v8(v5, v9, SizeInBytes);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getDeclaredDefault  (binary VA: 0x154b320)
// Original: hkClass::getDeclaredDefault
// ----------------------------------------------------------------------------
hkClass::Self * hkClass::getDeclaredDefault(hkClass::Self *self, int a2, hkStreamWriter::Self *a3, int a4)
{
  int v4;
  int v5;
  void *v6;
  void (*v7)(int, void *, int);
  int SizeInBytes;

  v4 = *(uint32_t *)(a2 + 32);
  if ( v4 != 0 && ((v5 = *(uint32_t *)(v4 + 4 * (uint32_t)(uintptr_t)(a3))) == -2 || v5 >= 0) )
  {
    v6 = (void *)(v5 + v4);
    if ( v5 == -2 )
      v6 = &unk_1D13560;
    v7 = *(void (**)(int, void *, int))(*(uint32_t *)a4 + 24);
    SizeInBytes = hkClassMember::getSizeInBytes((hkClassMember::Self *)(*(uint32_t *)(a2 + 24) + 24 * (uint32_t)(uintptr_t)(a3)));
    v7(a4, v6, SizeInBytes);
    *(uint32_t *)self = 0;
    return self;
  }
  else
  {
    *(uint32_t *)self = 1;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkClass::getDefault  (binary VA: 0x154b3c0)
// Original: hkClass::getDefault
// ----------------------------------------------------------------------------
hkClass::Self * hkClass::getDefault(hkClass::Self *a1, hkClass::Self *a2, const void **a3, uint32_t *a4)
{
  hkClass::Self *v4;
  uint32_t *v5;
  int v6;
  int ClassMemberTypeProperties;
  int Class;
  void *v10;
  typedef int _g4_t_v11;
  typedef void *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_EnumClass;
  typedef void *_g4_t_v15;
  typedef hkClassMember::Self *_g4_t_v16[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_EnumClass)) > _g4_s3 ? (20u + sizeof(_g4_t_EnumClass)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v16)) > _g4_s5 ? (40u + sizeof(_g4_t_v16)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_EnumClass &EnumClass = *reinterpret_cast<_g4_t_EnumClass *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);

  v16[6] = (hkClassMember::Self *)&a1;
  v4 = a1;
  v5 = a4;
  v15 = nullptr;
  v16[0] = nullptr;
  hkClass::retrieveMember(a1, a2, a3, (const hkClassMember::Self **)&v15, (uint32_t *)(v16));
  if ( *(uint32_t *)v4 != 0 )
    return v4;
  v6 = *((uint8_t *)v16[0] + 12);
  if ( v6 == 20 )
  {
    Class = hkClassMember::getClass(v16[0]);
    v10 = v15;
    *v5 = 20;
    v5[4] = (uint32_t)(uintptr_t)(v10);
    v5[5] = Class;
    return v4;
  }
  if ( v6 != 24 )
  {
    v13 = *((uint8_t *)v16[0] + 12);
    v12 = v15;
    ClassMemberTypeProperties = (int)(uintptr_t)(hkClassMember::getClassMemberTypeProperties(v13));
    if ( (unsigned int)*(int16_t *)(ClassMemberTypeProperties + 8) <= 0x40 )
    {
      *v5 = v13;
      hkString::memCpy((hkString::Self *)(v5 + 4), v12, *(int16_t *)(ClassMemberTypeProperties + 8), v11);
      *(uint32_t *)v4 = 0;
    }
    else
    {
      *(uint32_t *)v4 = 1;
    }
    return v4;
  }
  EnumClass = hkClassMember::getEnumClass(v16[0]);
  v5[4] = hkClassMember::getEnumValue(v16[0], v15);
  *v5 = 24;
  v5[5] = EnumClass;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getDeclaredDefault  (binary VA: 0x154b500)
// Original: hkClass::getDeclaredDefault
// ----------------------------------------------------------------------------
char * hkClass::getDeclaredDefault(hkClass::Self *self, int a2)
{
  char *result;
  int v3;

  result = *((char **)self + 8);
  if ( result != nullptr )
  {
    v3 = *(uint32_t *)&result[4 * a2];
    if ( v3 == -2 || v3 >= 0 )
    {
      result += v3;
      if ( v3 == -2 )
        return (char *)&unk_1D13560;
    }
    else
    {
      return nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getDeclaredDefault  (binary VA: 0x154b550)
// Original: hkClass::getDeclaredDefault
// ----------------------------------------------------------------------------
uint32_t * hkClass::getDeclaredDefault(uint32_t *a1, int a2, int a3, uint32_t *a4)
{
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  int ClassMemberTypeProperties;
  int EnumClass;
  int Class;
  int v14;
  hkClassMember::Self *v15;
  hkClassMember::Self *v16;

  v4 = *(uint32_t *)(a2 + 32);
  if ( v4 != 0 && ((v5 = *(uint32_t *)(v4 + 4 * a3)) == -2 || v5 >= 0) )
  {
    v6 = (int *)(v5 + v4);
    if ( v5 == -2 )
      v6 = (int *)&unk_1D13560;
    v7 = *(uint32_t *)(a2 + 24);
    v8 = v7 + 24 * a3;
    v9 = *(uint8_t *)(v8 + 12);
    if ( v9 == 20 )
    {
      Class = hkClassMember::getClass((hkClassMember::Self *)(v7 + 24 * a3));
      v14 = *v6;
      a4[5] = Class;
      *a4 = 20;
      a4[4] = v14;
      *a1 = 0;
    }
    else if ( v9 == 24 || v9 == 31 )
    {
      v16 = (hkClassMember::Self *)(v7 + 24 * a3);
      EnumClass = hkClassMember::getEnumClass(v16);
      a4[4] = hkClassMember::getEnumValue(v16, v6);
      *a4 = 24;
      a4[5] = EnumClass;
      *a1 = 0;
    }
    else
    {
      ClassMemberTypeProperties = (int)(uintptr_t)(hkClassMember::getClassMemberTypeProperties(*(uint8_t *)(v8 + 12)));
      if ( (unsigned int)*(int16_t *)(ClassMemberTypeProperties + 8) <= 0x40 )
      {
        *a4 = v9;
        hkString::memCpy((hkString::Self *)(a4 + 4), v6, *(int16_t *)(ClassMemberTypeProperties + 8), (int)(uintptr_t)(v15));
        *a1 = 0;
      }
      else
      {
        *a1 = 1;
      }
    }
    return a1;
  }
  else
  {
    *a1 = 1;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkClass::getAttribute  (binary VA: 0x154b680)
// Original: hkClass::getAttribute
// ----------------------------------------------------------------------------
int hkClass::getAttribute(hkClass::Self *self, char *a2)
{
  uint32_t *v2;
  int v3;
  const char *v5;

  v2 = *((uint32_t **)self + 9);
  if ( v2 == nullptr )
    return 0;
  v3 = 0;
  if ( (int)v2[1] <= 0 )
    return 0;
  while ( hkString::strCmp(*(hkString::Self **)(*v2 + 12 * v3), a2, v5) != 0 )
  {
    if ( ++v3 >= v2[1] )
      return 0;
  }
  return 12 * v3 + *v2 + 4;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getFlags  (binary VA: 0x154b700)
// Original: hkClass::getFlags
// ----------------------------------------------------------------------------
char * hkClass::getFlags(hkClass::Self *self)
{
  return (char *)self + 40;
}

// ----------------------------------------------------------------------------
// Function: hkClass::getFlags_ea154b710  (binary VA: 0x154b710)
// Original: hkClass::getFlags
// ----------------------------------------------------------------------------
char * hkClass::getFlags_ea154b710(hkClass::Self *self)
{
  return (char *)self + 40;
}

// ----------------------------------------------------------------------------
// Function: hkClass::writeSignature  (binary VA: 0x154b720)
// Original: hkClass::writeSignature
// ----------------------------------------------------------------------------
void hkClass::writeSignature(hkClass::Self *self, hkStreamWriter::Self *a2)
{
  int v2;
  int i;
  int v4;
  hkOArchive::Self *v5;
  int v6;
  int v7;
  uint8_t v8;
  int16_t v9;
  hkClass::Self *Class;
  hkClass::Self *k;
  hkClassEnum::Self *EnumClass;
  int v13;
  typedef const char *_g4_t_v14;
  typedef hkOArchive::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int16_t _g4_t_v17;
  typedef int _g4_t_v18;
  typedef hkString::Self *_g4_t_v19;
  typedef int16_t _g4_t_v20;
  typedef int16_t _g4_t_v21;
  typedef int _g4_t_j;
  typedef uint8_t _g4_t_v23;
  typedef int16_t _g4_t_v24;
  typedef uint8_t _g4_t_v25[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v19)) > _g4_s5 ? (32u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v20)) > _g4_s6 ? (36u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (38u + sizeof(_g4_t_v21)) > _g4_s7 ? (38u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_j)) > _g4_s8 ? (40u + sizeof(_g4_t_j)) : _g4_s8,
    _g4_s10 = (45u + sizeof(_g4_t_v23)) > _g4_s9 ? (45u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (46u + sizeof(_g4_t_v24)) > _g4_s10 ? (46u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v25)) > _g4_s11 ? (48u + sizeof(_g4_t_v25)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 38u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 45u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 46u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);

  hkOArchive::Construct(v25, a2, 0);
  hkOArchive::write32((hkOArchive::Self *)v25, *((uint32_t *)self + 3));
  v2 = *((uint32_t *)self + 5);
  if ( v2 > 0 )
  {
    for ( i = 0; i < v2; ++i )
    {
      v4 = 5 * i;
      hkClassEnum::writeSignature((hkClassEnum::Self *)(*((uint32_t *)self + 4) + 4 * v4), a2);
      v2 = *((uint32_t *)self + 5);
    }
  }
  v5 = (hkOArchive::Self *)v25;
  hkOArchive::write32((hkOArchive::Self *)v25, v2);
  v6 = *((uint32_t *)self + 7);
  if ( v6 > 0 )
  {
    for ( j = 0; j < v6; ++j )
    {
      v7 = *((uint32_t *)self + 6) + 24 * j;
      v19 = *(hkString::Self **)v7;
      v18 = *(uint32_t *)(v7 + 4);
      v16 = *(uint32_t *)(v7 + 8);
      v20 = *(uint16_t *)(v7 + 14);
      v8 = *(uint8_t *)(v7 + 12);
      v23 = v8;
      v24 = *(uint16_t *)(v7 + 16);
      v9 = *(uint8_t *)(v7 + 13);
      if ( v8 == 31 || v8 == 24 )
      {
        v24 ^= 8 * *(uint16_t *)(hkClassMember::getClassMemberTypeProperties(*(uint8_t *)(v7 + 13)) + 8);
        v9 = 0;
      }
      if ( (v24 & 0x400) != 0 )
      {
        v24 ^= 0x400u;
        if ( (uint8_t)v9 != 0 )
        {
          v21 = v9;
          v17 = 19;
        }
        else
        {
          v17 = 19;
          v21 = 0;
        }
      }
      else
      {
        v21 = 0;
        v17 = v23;
        v23 = v9;
      }
      if ( v18 != 0 && *(uint8_t *)(v7 + 12) != 20 && *(uint8_t *)(v7 + 13) != 20 )
      {
        Class = (hkClass::Self *)hkClassMember::getClass((hkClassMember::Self *)v7);
        if ( Class != nullptr )
        {
          v15 = v5;
          for ( k = Class; k != nullptr; k = (hkClass::Self *)hkClass::getParent(k) )
            hkClass::writeSignature(k, a2);
          v5 = v15;
        }
      }
      if ( v16 != 0 )
      {
        EnumClass = (hkClassEnum::Self *)hkClassMember::getEnumClass((hkClassMember::Self *)v7);
        hkClassEnum::writeSignature(EnumClass, a2);
      }
      v13 = hkString::strLen(v19, v14);
      hkOArchive::writeRaw(v5, v19, v13);
      hkOArchive::write16(v5, v17);
      hkOArchive::write16(v5, v23);
      if ( v21 != 0 )
        hkOArchive::write16(v5, v21);
      hkOArchive::write16(v5, v20);
      hkOArchive::write16(v5, v24);
      v6 = *((uint32_t *)self + 7);
    }
  }
  hkOArchive::write32((hkOArchive::Self *)v25, v6);
  hkOArchive::Destroy((hkOArchive::Self *)v25);
}

// ----------------------------------------------------------------------------
// Function: hkClass::getSignature  (binary VA: 0x154b9d0)
// Original: hkClass::getSignature
// ----------------------------------------------------------------------------
int hkClass::getSignature(hkClass::Self *self, char a2)
{
  hkClass::Self *Parent;
  typedef uint32_t _g4_t_v4[2];
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);

  Parent = self;
  v4[1] = -65535;
  v5 = -1;
  v4[0] = ((uint32_t)(uintptr_t)&off_2096C88);
  if ( (a2 & 1) == 0 )
  {
    while ( Parent != nullptr )
    {
      hkClass::writeSignature(Parent, (hkStreamWriter::Self *)v4);
      Parent = (hkClass::Self *)hkClass::getParent(Parent);
    }
  }
  else if ( self != nullptr )
  {
    hkClass::writeSignature(self, (hkStreamWriter::Self *)v4);
    return ~v5;
  }
  return ~v5;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryAllocator::getExtendedInterface  (binary VA: 0x154ba70)
// Original: hkMemoryAllocator::getExtendedInterface
// ----------------------------------------------------------------------------
int hkMemoryAllocator::getExtendedInterface()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkMallocAllocator::getMemoryStatistics  (binary VA: 0x154ba80)
// Original: hkMallocAllocator::getMemoryStatistics
// ----------------------------------------------------------------------------
uint32_t * hkMallocAllocator::getMemoryStatistics(int a1, uint32_t *a2)
{
  *a2 = *(uint32_t *)(a1 + 8);
  a2[2] = *(uint32_t *)(a1 + 12);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMallocAllocator::resetPeakMemoryStatistics  (binary VA: 0x154baa0)
// Original: hkMallocAllocator::resetPeakMemoryStatistics
// ----------------------------------------------------------------------------
hkMallocAllocator::Self * hkMallocAllocator::resetPeakMemoryStatistics(hkMallocAllocator::Self *self)
{
  *((uint32_t *)self + 3) = *((uint32_t *)self + 2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMallocAllocator::getAllocatedSize  (binary VA: 0x154bab0)
// Original: hkMallocAllocator::getAllocatedSize
// ----------------------------------------------------------------------------
int hkMallocAllocator::getAllocatedSize(hkMallocAllocator::Self *self, const void *a2, int a3)
{
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkMallocAllocator::blockAlloc  (binary VA: 0x154bac0)
// Original: hkMallocAllocator::blockAlloc
// ----------------------------------------------------------------------------
void * hkMallocAllocator::blockAlloc(hkMallocAllocator::Self *self, size_t size)
{
  if ( size + __sync_fetch_and_add((volatile int32_t *)self + 2, size) > *((uint32_t *)self + 3) )
    *((uint32_t *)self + 3) = *((uint32_t *)self + 2);
  return memalign(*((uint32_t *)self + 1), size);
}

// ----------------------------------------------------------------------------
// Function: hkMallocAllocator::blockFree  (binary VA: 0x154bb10)
// Original: hkMallocAllocator::blockFree
// ----------------------------------------------------------------------------
void hkMallocAllocator::blockFree(hkMallocAllocator::Self *self, void *ptr, int a3)
{
  __sync_add_and_fetch((volatile int32_t *)self + 2, -a3);
  free(ptr);
}

// ----------------------------------------------------------------------------
// Function: hkSetOutOfMemoryState  (binary VA: 0x154bbe0)
// Original: hkSetOutOfMemoryState
// ----------------------------------------------------------------------------
uint32_t * hkSetOutOfMemoryState(int a1)
{
  hkOutOfMemoryState[0] = a1;
  return hkOutOfMemoryState;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryExceptionTestingUtil::Construct  (binary VA: 0x154bc00)
// Original: hkMemoryExceptionTestingUtil::hkMemoryExceptionTestingUtil
// ----------------------------------------------------------------------------
void hkMemoryExceptionTestingUtil::Construct(hkMemoryExceptionTestingUtil::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *(uint8_t *)self = 0;
  *((uint8_t *)self + 8) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryExceptionTestingUtil::Destroy  (binary VA: 0x154bc20)
// Original: hkMemoryExceptionTestingUtil::~hkMemoryExceptionTestingUtil
// ----------------------------------------------------------------------------
void hkMemoryExceptionTestingUtil::Destroy()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryExceptionTestingUtil::create  (binary VA: 0x154bc30)
// Original: hkMemoryExceptionTestingUtil::create
// ----------------------------------------------------------------------------
void hkMemoryExceptionTestingUtil::create()
{
  int v0;
  int address;
  int v2;
  hkMemoryExceptionTestingUtil::Self *v3;

  v0 = hkMemoryExceptionTestingUtil::s_instance;
  if ( hkMemoryExceptionTestingUtil::s_instance != 0 )
  {
    hkMemoryExceptionTestingUtil::Destroy();
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v0,
      60);
    v2 = address;
  }
  else
  {
    v2 = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  }
  v3 = (hkMemoryExceptionTestingUtil::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)v2 + 44) + 8))(
                                         *(uint32_t *)(*(uint32_t *)v2 + 44),
                                         60);
  hkMemoryExceptionTestingUtil::Construct(v3);
  hkMemoryExceptionTestingUtil::s_instance = (uintptr_t)(uintptr_t)(v3);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryExceptionTestingUtil::destroy  (binary VA: 0x154bcc0)
// Original: hkMemoryExceptionTestingUtil::destroy
// ----------------------------------------------------------------------------
void hkMemoryExceptionTestingUtil::destroy()
{
  int v0;
  int address;

  v0 = hkMemoryExceptionTestingUtil::s_instance;
  if ( hkMemoryExceptionTestingUtil::s_instance != 0 )
  {
    hkMemoryExceptionTestingUtil::Destroy();
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v0,
      60);
  }
  hkMemoryExceptionTestingUtil::s_instance = 0;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryExceptionTestingUtil::getInstance  (binary VA: 0x154bd20)
// Original: hkMemoryExceptionTestingUtil::getInstance
// ----------------------------------------------------------------------------
int hkMemoryExceptionTestingUtil::getInstance()
{
  return hkMemoryExceptionTestingUtil::s_instance;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryExceptionTestingUtil::startNewDemoImpl  (binary VA: 0x154bd40)
// Original: hkMemoryExceptionTestingUtil::startNewDemoImpl
// ----------------------------------------------------------------------------
int hkMemoryExceptionTestingUtil::startNewDemoImpl(hkMemoryExceptionTestingUtil::Self *self)
{
  unsigned int v1;
  char *v2;
  int result;
  char *v4;

  v1 = 50;
  v2 = (char *)self + 9;
  *((uint32_t *)self + 1) = 0;
  if ( (((unsigned int)(uintptr_t)(self) + 9) & 1) != 0 )
  {
    v2 = (char *)self + 10;
    *((uint8_t *)self + 9) = 0;
    LOBYTE(v1) = 49;
    if ( (((unsigned int)(uintptr_t)(self) + 10) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)(v2) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v2 = 0;
  v1 -= 2;
  v2 += 2;
LABEL_3:
  result = 0;
  memset(v2, 0, 4 * (v1 >> 2));
  v4 = &v2[4 * (v1 >> 2)];
  if ( (v1 & 2) != 0 )
  {
    *(uint16_t *)v4 = 0;
    v4 += 2;
  }
  if ( (v1 & 1) != 0 )
    *v4 = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryExceptionTestingUtil::startFrameImpl  (binary VA: 0x154bdb0)
// Original: hkMemoryExceptionTestingUtil::startFrameImpl
// ----------------------------------------------------------------------------
hkMemoryExceptionTestingUtil::Self * hkMemoryExceptionTestingUtil::startFrameImpl(hkMemoryExceptionTestingUtil::Self *self)
{
  *(uint8_t *)self = 0;
  ++*((uint32_t *)self + 1);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryExceptionTestingUtil::endFrameImpl  (binary VA: 0x154bdc0)
// Original: hkMemoryExceptionTestingUtil::endFrameImpl
// ----------------------------------------------------------------------------
void hkMemoryExceptionTestingUtil::endFrameImpl()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryExceptionTestingUtil::allowMemoryExceptionsImpl  (binary VA: 0x154bdd0)
// Original: hkMemoryExceptionTestingUtil::allowMemoryExceptionsImpl
// ----------------------------------------------------------------------------
int hkMemoryExceptionTestingUtil::allowMemoryExceptionsImpl(hkMemoryExceptionTestingUtil::Self *self, int a2)
{
  *((uint8_t *)self + 8) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryExceptionTestingUtil::isMemoryAvailableImpl  (binary VA: 0x154bde0)
// Original: hkMemoryExceptionTestingUtil::isMemoryAvailableImpl
// ----------------------------------------------------------------------------
int hkMemoryExceptionTestingUtil::isMemoryAvailableImpl(hkMemoryExceptionTestingUtil::Self *self, int a2)
{
  int v2;
  int v3;

  if ( *(uint8_t *)self == 0 || (v2 = 0, *((uint8_t *)self + 8) == 0) )
  {
    v3 = *((uint32_t *)self + 1);
    v2 = 1;
    if ( v3 > 50 && v3 == 3 * (v3 / 3) && *((uint8_t *)self + 8) != 0 )
    {
      v2 = *((uint8_t *)self + a2 + 9);
      if ( *((uint8_t *)self + a2 + 9) == 0 )
      {
        *((uint8_t *)self + a2 + 9) = 1;
        *(uint8_t *)self = 1;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::Destroy  (binary VA: 0x154be50)
// Original: hkReferencedObject::~hkReferencedObject
// ----------------------------------------------------------------------------
void hkReferencedObject::Destroy(hkReferencedObject::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::getClassType  (binary VA: 0x154be90)
// Original: hkReferencedObject::getClassType
// ----------------------------------------------------------------------------
int hkReferencedObject::getClassType()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::deleteThisReferencedObject  (binary VA: 0x154bea0)
// Original: hkReferencedObject::deleteThisReferencedObject
// ----------------------------------------------------------------------------
hkReferencedObject::Self * hkReferencedObject::deleteThisReferencedObject(hkReferencedObject::Self *self)
{
  hkReferencedObject::Self *result;

  result = self;
  if ( self != nullptr )
    return (hkReferencedObject::Self *)G4_VCALL<int>(self, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::Destroy_ea154bec0  (binary VA: 0x154bec0)
// Original: hkReferencedObject::~hkReferencedObject
// ----------------------------------------------------------------------------
void hkReferencedObject::Destroy_ea154bec0(hkReferencedObject::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObjectLock::Destroy  (binary VA: 0x154bf20)
// Original: hkReferencedObjectLock::~hkReferencedObjectLock
// ----------------------------------------------------------------------------
void hkReferencedObjectLock::Destroy(hkReferencedObjectLock::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096D88);
  if ( pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 28)) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      28,
      "~hkCriticalSection");
    perror("pthread_mutex_destroy(&m_mutex)");
    __builtin_debugtrap();
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObjectLock::Destroy_ea154bfa0  (binary VA: 0x154bfa0)
// Original: hkReferencedObjectLock::~hkReferencedObjectLock
// ----------------------------------------------------------------------------
void hkReferencedObjectLock::Destroy_ea154bfa0(hkReferencedObjectLock::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096D88);
  if ( pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 28)) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      28,
      "~hkCriticalSection");
    perror("pthread_mutex_destroy(&m_mutex)");
    __builtin_debugtrap();
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 36;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::initializeLock  (binary VA: 0x154c060)
// Original: hkReferencedObject::initializeLock
// ----------------------------------------------------------------------------
int hkReferencedObject::initializeLock()
{
  int address;
  int v1;
  int result;
  volatile int32_t *v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett
  int v19;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef pthread_mutexattr_t _g4_t_attr;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v13)) > _g4_s5 ? (28u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_attr)) > _g4_s6 ? (32u + sizeof(_g4_t_attr)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v15)) > _g4_s7 ? (36u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v16)) > _g4_s8 ? (40u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v17)) > _g4_s9 ? (44u + sizeof(_g4_t_v17)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_attr &attr = *reinterpret_cast<_g4_t_attr *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v1 = (*(int (**)(uint32_t, int, int, int, int, int, int, int, pthread_mutexattr_t, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         36,
         v8,
         v9,
         v10,
         v11,
         v12,
         v13,
         attr,
         v15,
         v16,
         v17);
  *(uint32_t *)(v1 + 4) = -65535;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2096D88);
  *(uint32_t *)(v1 + 16) = -15;
  *(uint16_t *)(v1 + 24) = 0x8000;
  *(uint32_t *)(v1 + 32) = 4000;
  if ( pthread_mutexattr_init(&attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      16,
      "hkCriticalSection");
    perror("pthread_mutexattr_init(&attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_settype(&attr, 1) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      17,
      "hkCriticalSection");
    perror("pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE)");
    __builtin_debugtrap();
  }
  if ( pthread_mutex_init((pthread_mutex_t *)(v1 + 28), &attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      18,
      "hkCriticalSection");
    perror("pthread_mutex_init(&m_mutex, &attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_destroy(&attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      19,
      "hkCriticalSection");
    perror("pthread_mutexattr_destroy(&attr)");
    __builtin_debugtrap();
  }
  *(uint32_t *)(v1 + 8) = 1;
  result = (int)(uintptr_t)(hkMultiThreadCheck::enableChecks((hkMultiThreadCheck::Self *)(v1 + 16)));
  *(uint32_t *)(v1 + 12) = 0;
  v3 = (volatile int32_t *)hkSingleton<hkReferencedObjectLock::Self>::s_instance;
  if ( hkSingleton<hkReferencedObjectLock::Self>::s_instance == 0 )
    goto LABEL_11;
  if ( *(uint16_t *)(hkSingleton<hkReferencedObjectLock::Self>::s_instance + 6) == 0 )
    goto LABEL_11;
  v19 = v1;
  do
  {
    v5 = *((uint32_t *)v3 + 1);
    HIWORD(v4) = HIWORD(v5);
    LOWORD(v4) = 0;
    v6 = v4 | (uint16_t)(v5 - 1);
    v7 = v5;
    result = __sync_val_compare_and_swap(v3 + 1, v7, v6);
  }
  while ( v7 != result );
  v1 = v19;
  if ( (uint16_t)v6 == 0 )
  {
    result = G4_VCALL<int>(v3, 16);
    hkSingleton<hkReferencedObjectLock::Self>::s_instance = (uint32_t *)(uintptr_t)(v19);
  }
  else
  {
LABEL_11:
    hkSingleton<hkReferencedObjectLock::Self>::s_instance = (uint32_t *)(uintptr_t)(v1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::deinitializeLock  (binary VA: 0x154c290)
// Original: hkReferencedObject::deinitializeLock
// ----------------------------------------------------------------------------
int hkReferencedObject::deinitializeLock()
{
  volatile int32_t *v0;
  int v1;
  int32_t v2; // kr00_4
  int32_t v3;
  int result;
  int32_t v5; // ett

  v0 = (volatile int32_t *)hkSingleton<hkReferencedObjectLock::Self>::s_instance;
  if ( hkSingleton<hkReferencedObjectLock::Self>::s_instance == 0
    || *(uint16_t *)(hkSingleton<hkReferencedObjectLock::Self>::s_instance + 6) == 0 )
  {
    goto LABEL_5;
  }
  do
  {
    v2 = *((uint32_t *)v0 + 1);
    HIWORD(v1) = HIWORD(v2);
    LOWORD(v1) = 0;
    v3 = v1 | (uint16_t)(v2 - 1);
    v5 = v2;
    result = __sync_val_compare_and_swap(v0 + 1, v5, v3);
  }
  while ( v5 != result );
  if ( (uint16_t)v3 == 0 )
  {
    result = G4_VCALL<int>(v0, 16);
    hkSingleton<hkReferencedObjectLock::Self>::s_instance = 0;
  }
  else
  {
LABEL_5:
    hkSingleton<hkReferencedObjectLock::Self>::s_instance = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::setLockMode  (binary VA: 0x154c300)
// Original: hkReferencedObject::setLockMode
// ----------------------------------------------------------------------------
int hkReferencedObject::setLockMode(int a1)
{
  int result;

  result = (int)(uintptr_t)(hkSingleton<hkReferencedObjectLock::Self>::s_instance);
  *(uint32_t *)(hkSingleton<hkReferencedObjectLock::Self>::s_instance + 8) = a1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::lockInit  (binary VA: 0x154c320)
// Original: hkReferencedObject::lockInit
// ----------------------------------------------------------------------------
uint32_t * hkReferencedObject::lockInit(int a1)
{
  uint32_t *result;
  int address;
  int v3;
  volatile int32_t *v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  typedef int _g4_t_v9;
  typedef pthread_mutexattr_t _g4_t_attr;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_attr)) > _g4_s1 ? (16u + sizeof(_g4_t_attr)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_attr &attr = *reinterpret_cast<_g4_t_attr *>(_g4_sf + 16u);

  result = (uint32_t *)hkSingleton<hkReferencedObjectLock::Self>::s_instance[0];
  if ( hkSingleton<hkReferencedObjectLock::Self>::s_instance[0] != 0 )
  {
    *(uint32_t *)(hkSingleton<hkReferencedObjectLock::Self>::s_instance[0] + 8) = a1;
  }
  else
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v3 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           36);
    *(uint32_t *)(v3 + 4) = -65535;
    *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_2096D88);
    *(uint32_t *)(v3 + 16) = -15;
    *(uint16_t *)(v3 + 24) = 0x8000;
    *(uint32_t *)(v3 + 32) = 4000;
    if ( pthread_mutexattr_init(&attr) != 0 )
    {
      printf(
        "%s:%d:%s\n",
        "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
        16,
        "hkCriticalSection");
      perror("pthread_mutexattr_init(&attr)");
      __builtin_debugtrap();
    }
    if ( pthread_mutexattr_settype(&attr, 1) != 0 )
    {
      printf(
        "%s:%d:%s\n",
        "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
        17,
        "hkCriticalSection");
      perror("pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE)");
      __builtin_debugtrap();
    }
    if ( pthread_mutex_init((pthread_mutex_t *)(v3 + 28), &attr) != 0 )
    {
      printf(
        "%s:%d:%s\n",
        "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
        18,
        "hkCriticalSection");
      perror("pthread_mutex_init(&m_mutex, &attr)");
      __builtin_debugtrap();
    }
    if ( pthread_mutexattr_destroy(&attr) != 0 )
    {
      printf(
        "%s:%d:%s\n",
        "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
        19,
        "hkCriticalSection");
      perror("pthread_mutexattr_destroy(&attr)");
      __builtin_debugtrap();
    }
    *(uint32_t *)(v3 + 8) = 1;
    hkMultiThreadCheck::enableChecks((hkMultiThreadCheck::Self *)(v3 + 16));
    *(uint32_t *)(v3 + 12) = 0;
    *(uint32_t *)(v3 + 8) = a1;
    v4 = (volatile int32_t *)hkSingleton<hkReferencedObjectLock::Self>::s_instance[0];
    if ( hkSingleton<hkReferencedObjectLock::Self>::s_instance[0] != 0
      && *(uint16_t *)(hkSingleton<hkReferencedObjectLock::Self>::s_instance[0] + 6) != 0 )
    {
      v9 = v3;
      do
      {
        v6 = *((uint32_t *)v4 + 1);
        HIWORD(v5) = HIWORD(v6);
        LOWORD(v5) = 0;
        v7 = v5 | (uint16_t)(v6 - 1);
        v8 = v6;
      }
      while ( v8 != __sync_val_compare_and_swap(v4 + 1, v8, v7) );
      v3 = v9;
      if ( (uint16_t)v7 == 0 )
        G4_VCALL<void>(v4, 16);
    }
    hkSingleton<hkReferencedObjectLock::Self>::s_instance[0] = v3;
    return hkSingleton<hkReferencedObjectLock::Self>::s_instance;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::getLockMode  (binary VA: 0x154c570)
// Original: hkReferencedObject::getLockMode
// ----------------------------------------------------------------------------
int hkReferencedObject::getLockMode()
{
  return *(uint32_t *)(hkSingleton<hkReferencedObjectLock::Self>::s_instance[0] + 8);
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::lockAll  (binary VA: 0x154c590)
// Original: hkReferencedObject::lockAll
// ----------------------------------------------------------------------------
int hkReferencedObject::lockAll()
{
  int v0;
  int result;
  int v2;
  int v3;

  v0 = hkSingleton<hkReferencedObjectLock::Self>::s_instance[0];
  result = *(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v3 = result;
  if ( *(uint32_t *)(result + 60) == 601834836 )
  {
    ++*(uint32_t *)(v0 + 12);
  }
  else
  {
    v2 = *(uint32_t *)(v0 + 32);
    if ( v2 != 0 )
    {
      while ( pthread_mutex_trylock((pthread_mutex_t *)(v0 + 28)) != 0 )
      {
        if ( --v2 == 0 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( pthread_mutex_lock((pthread_mutex_t *)(v0 + 28)) != 0 )
      {
        printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
        perror("pthread_mutex_lock(&mutex)");
        __builtin_debugtrap();
      }
    }
    *(uint32_t *)(v0 + 12) = 1;
    *(uint32_t *)(v3 + 60) = 601834836;
    return v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::unlockAll  (binary VA: 0x154c660)
// Original: hkReferencedObject::unlockAll
// ----------------------------------------------------------------------------
int hkReferencedObject::unlockAll()
{
  int v0;
  int v1;
  int result;
  bool v3;

  v0 = hkSingleton<hkReferencedObjectLock::Self>::s_instance[0];
  v1 = *(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  result = *(uint32_t *)(v0 + 12) - 1;
  v3 = *(uint32_t *)(v0 + 12) == 1;
  *(uint32_t *)(v0 + 12) = result;
  if ( result < 0 || v3 )
  {
    *(uint32_t *)(v1 + 60) = 0;
    result = pthread_mutex_unlock((pthread_mutex_t *)(v0 + 28));
    if ( result != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
      perror("pthread_mutex_unlock(&m_mutex)");
      __builtin_debugtrap();
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::addReferences  (binary VA: 0x154c700)
// Original: hkReferencedObject::addReferences
// ----------------------------------------------------------------------------
const hkReferencedObject::Self *const * hkReferencedObject::addReferences(hkReferencedObject::Self *self, const hkReferencedObject::Self *const *a2, int a3)
{
  const hkReferencedObject::Self *const *v3;
  const hkReferencedObject::Self *const *result;
  volatile int32_t *v6;
  int v7;
  int v8;
  int32_t v9; // kr00_4
  hkReferencedObject::Self *thisa;

  v3 = nullptr;
  result = a2;
  if ( (int)(uintptr_t)(a2) > 0 )
  {
    do
    {
      v6 = (volatile int32_t *)(*(uint32_t *)self + 4);
      if ( *(uint16_t *)(*(uint32_t *)self + 6) != 0 )
      {
        v7 = *(uint32_t *)self;
        thisa = self;
        do
        {
          v9 = *(uint32_t *)(v7 + 4);
          HIWORD(v8) = HIWORD(v9);
          LOWORD(v8) = 0;
          result = (const hkReferencedObject::Self *const *)__sync_val_compare_and_swap(
                                                        v6,
                                                        v9,
                                                        v8 | (uint16_t)(v9 + 1));
        }
        while ( (const hkReferencedObject::Self *const *)v9 != result );
        self = thisa;
      }
      self = (hkReferencedObject::Self *)((char *)self + a3);
      v3 = (const hkReferencedObject::Self *const *)((char *)v3 + 1);
    }
    while ( v3 != a2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::removeReferences  (binary VA: 0x154c770)
// Original: hkReferencedObject::removeReferences
// ----------------------------------------------------------------------------
int hkReferencedObject::removeReferences(hkReferencedObject::Self *self, const hkReferencedObject::Self *const *a2, int a3)
{
  const hkReferencedObject::Self *const *v3;
  uint32_t *v5;
  volatile int32_t *v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int result;
  int32_t v11; // ett
  hkReferencedObject::Self *thisa;

  v3 = nullptr;
  if ( (int)(uintptr_t)(a2) > 0 )
  {
    do
    {
      v5 = *(uint32_t **)self;
      v6 = (volatile int32_t *)(*(uint32_t *)self + 4);
      if ( *(uint16_t *)(*(uint32_t *)self + 6) != 0 )
      {
        thisa = self;
        do
        {
          v8 = v5[1];
          HIWORD(v7) = HIWORD(v8);
          LOWORD(v7) = 0;
          v9 = v7 | (uint16_t)(v8 - 1);
          v11 = v8;
          result = __sync_val_compare_and_swap(v6, v11, v9);
        }
        while ( v11 != result );
        self = thisa;
        if ( (uint16_t)v9 == 0 )
          result = G4_VCALL<int>(v5, 16);
      }
      self = (hkReferencedObject::Self *)((char *)self + a3);
      v3 = (const hkReferencedObject::Self *const *)((char *)v3 + 1);
    }
    while ( v3 != a2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkReferencedObject::getLockCriticalSection  (binary VA: 0x154c7e0)
// Original: hkReferencedObject::getLockCriticalSection
// ----------------------------------------------------------------------------
int hkReferencedObject::getLockCriticalSection()
{
  return hkSingleton<hkReferencedObjectLock::Self>::s_instance[0] + 28;
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::staticInit  (binary VA: 0x154c880)
// Original: hkMultiThreadCheck::staticInit
// ----------------------------------------------------------------------------
hkMultiThreadCheck::Self * hkMultiThreadCheck::staticInit(hkMultiThreadCheck::Self *self)
{
  int address;
  int v2;
  pthread_mutex_t *v3;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef pthread_mutexattr_t _g4_t_attr;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_attr)) > _g4_s2 ? (16u + sizeof(_g4_t_attr)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_attr &attr = *reinterpret_cast<_g4_t_attr *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (*(int (**)(uint32_t, int, int, int, pthread_mutexattr_t, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44)
                                                                                       + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         8,
         v5,
         v6,
         attr,
         v8,
         v9,
         v10);
  *(uint32_t *)(v2 + 4) = 1000;
  v3 = (pthread_mutex_t *)v2;
  if ( pthread_mutexattr_init(&attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      16,
      "hkCriticalSection");
    perror("pthread_mutexattr_init(&attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_settype(&attr, 1) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      17,
      "hkCriticalSection");
    perror("pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE)");
    __builtin_debugtrap();
  }
  if ( pthread_mutex_init(v3, &attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      18,
      "hkCriticalSection");
    perror("pthread_mutex_init(&m_mutex, &attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_destroy(&attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      19,
      "hkCriticalSection");
    perror("pthread_mutexattr_destroy(&attr)");
    __builtin_debugtrap();
  }
  dword_2120440 = 0;
  dword_2120444 = 0;
  dword_2120448 = 0x80000000;
  dword_2120450 = -1;
  dword_2120454 = -1;
  hkMultiThreadCheck::m_criticalSection = (uintptr_t)(uintptr_t)(v3);
  hkMultiThreadCheck::s_stackTree = (uintptr_t)(uintptr_t)(&dword_2120440);
  dword_212044C = (int)(uintptr_t)(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::staticQuit  (binary VA: 0x154ca70)
// Original: hkMultiThreadCheck::staticQuit
// ----------------------------------------------------------------------------
void hkMultiThreadCheck::staticQuit()
{
  int v0;
  int address;

  if ( hkMultiThreadCheck::s_stackTree != 0 )
  {
    hkStackTracer::CallTree::quit(hkMultiThreadCheck::s_stackTree);
    hkStackTracer::CallTree::Destroy(hkMultiThreadCheck::s_stackTree);
  }
  v0 = hkMultiThreadCheck::m_criticalSection;
  if ( hkMultiThreadCheck::m_criticalSection != 0 )
  {
    if ( pthread_mutex_destroy((pthread_mutex_t *)(uintptr_t)hkMultiThreadCheck::m_criticalSection) != 0 )
    {
      printf(
        "%s:%d:%s\n",
        "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
        28,
        "~hkCriticalSection");
      perror("pthread_mutex_destroy(&m_mutex)");
      __builtin_debugtrap();
    }
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v0,
      8);
    hkMultiThreadCheck::m_criticalSection = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::markForReadImpl  (binary VA: 0x154cc10)
// Original: hkMultiThreadCheck::markForReadImpl
// ----------------------------------------------------------------------------
void hkMultiThreadCheck::markForReadImpl(int *a1, int a2)
{
  pthread_mutex_t *mutex;
  int v3;
  int v4;
  int v5;

  if ( *((int16_t *)a1 + 4) >= 0 )
  {
    mutex = (pthread_mutex_t *)hkMultiThreadCheck::m_criticalSection;
    if ( hkMultiThreadCheck::m_criticalSection != 0 )
    {
      v3 = *(uint32_t *)(hkMultiThreadCheck::m_criticalSection + 4);
      if ( v3 != 0 )
      {
        while ( pthread_mutex_trylock(mutex) != 0 )
        {
          if ( --v3 == 0 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        if ( pthread_mutex_lock(mutex) != 0 )
        {
          printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
          perror("pthread_mutex_lock(&mutex)");
          __builtin_debugtrap();
        }
      }
      v4 = *a1;
      if ( *a1 == -31 || v4 == -15 || v4 == -63 )
      {
        v5 = -31;
        if ( a2 != 1 )
          v5 = -63;
        *a1 = v5;
      }
      *((uint16_t *)a1 + 5) *= 2;
      ++*((uint16_t *)a1 + 4);
      if ( pthread_mutex_unlock(mutex) != 0 )
      {
        printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
        perror("pthread_mutex_unlock(&m_mutex)");
        __builtin_debugtrap();
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::markForWriteImpl  (binary VA: 0x154cd50)
// Original: hkMultiThreadCheck::markForWriteImpl
// ----------------------------------------------------------------------------
void hkMultiThreadCheck::markForWriteImpl(hkMultiThreadCheck::Self *self)
{
  pthread_mutex_t *v1;
  int v2;
  int MyThreadId;
  int16_t v4;
  bool v5;
  hkThread::Self *mutex;

  if ( *((int16_t *)self + 4) >= 0 )
  {
    v1 = (pthread_mutex_t *)hkMultiThreadCheck::m_criticalSection;
    if ( hkMultiThreadCheck::m_criticalSection != 0 )
    {
      v2 = *(uint32_t *)(hkMultiThreadCheck::m_criticalSection + 4);
      if ( v2 != 0 )
      {
        while ( pthread_mutex_trylock(v1) != 0 )
        {
          if ( --v2 == 0 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        if ( pthread_mutex_lock(v1) != 0 )
        {
          printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
          perror("pthread_mutex_lock(&mutex)");
          __builtin_debugtrap();
        }
      }
      MyThreadId = hkThread::getMyThreadId(mutex);
      v4 = *((uint16_t *)self + 5);
      ++*((uint16_t *)self + 4);
      v5 = *(uint32_t *)self == -15;
      *((uint16_t *)self + 5) = 2 * v4 + 1;
      if ( v5 )
        *(uint32_t *)self = MyThreadId;
      if ( pthread_mutex_unlock(v1) != 0 )
      {
        printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
        perror("pthread_mutex_unlock(&m_mutex)");
        __builtin_debugtrap();
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::isMarkedForWriteImpl  (binary VA: 0x154ce70)
// Original: hkMultiThreadCheck::isMarkedForWriteImpl
// ----------------------------------------------------------------------------
int hkMultiThreadCheck::isMarkedForWriteImpl(hkMultiThreadCheck::Self *self)
{
  int v1;
  pthread_mutex_t *v2;
  int v3;
  int MyThreadId;
  hkThread::Self *mutex;

  v1 = 1;
  if ( *((int16_t *)self + 4) >= 0 )
  {
    v2 = (pthread_mutex_t *)hkMultiThreadCheck::m_criticalSection;
    if ( hkMultiThreadCheck::m_criticalSection != 0 )
    {
      v3 = *(uint32_t *)(hkMultiThreadCheck::m_criticalSection + 4);
      if ( v3 != 0 )
      {
        while ( pthread_mutex_trylock(v2) != 0 )
        {
          if ( --v3 == 0 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        if ( pthread_mutex_lock(v2) != 0 )
        {
          printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
          perror("pthread_mutex_lock(&mutex)");
          __builtin_debugtrap();
        }
      }
      MyThreadId = hkThread::getMyThreadId(mutex);
      LOBYTE(MyThreadId) = *(uint32_t *)self == MyThreadId;
      v1 = MyThreadId;
      if ( pthread_mutex_unlock(v2) != 0 )
      {
        printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
        perror("pthread_mutex_unlock(&m_mutex)");
        __builtin_debugtrap();
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::unmarkForReadImpl  (binary VA: 0x154cf70)
// Original: hkMultiThreadCheck::unmarkForReadImpl
// ----------------------------------------------------------------------------
void hkMultiThreadCheck::unmarkForReadImpl(hkMultiThreadCheck::Self *self)
{
  pthread_mutex_t *mutex;
  int v2;
  int v3;
  bool v4;

  if ( *((int16_t *)self + 4) >= 0 )
  {
    mutex = (pthread_mutex_t *)hkMultiThreadCheck::m_criticalSection;
    if ( hkMultiThreadCheck::m_criticalSection != 0 )
    {
      v2 = *(uint32_t *)(hkMultiThreadCheck::m_criticalSection + 4);
      if ( v2 != 0 )
      {
        while ( pthread_mutex_trylock(mutex) != 0 )
        {
          if ( --v2 == 0 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        if ( pthread_mutex_lock(mutex) != 0 )
        {
          printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
          perror("pthread_mutex_lock(&mutex)");
          __builtin_debugtrap();
        }
      }
      v3 = (int)*((uint16_t *)self + 5) >> 1;
      v4 = (*((uint16_t *)self + 4))-- == 1;
      *((uint16_t *)self + 5) = v3;
      if ( v4 )
        *(uint32_t *)self = -15;
      if ( pthread_mutex_unlock(mutex) != 0 )
      {
        printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
        perror("pthread_mutex_unlock(&m_mutex)");
        __builtin_debugtrap();
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::unmarkForWriteImpl  (binary VA: 0x154d090)
// Original: hkMultiThreadCheck::unmarkForWriteImpl
// ----------------------------------------------------------------------------
void hkMultiThreadCheck::unmarkForWriteImpl(hkMultiThreadCheck::Self *self)
{
  pthread_mutex_t *mutex;
  int v2;
  int v3;
  bool v4;

  if ( *((int16_t *)self + 4) >= 0 )
  {
    mutex = (pthread_mutex_t *)hkMultiThreadCheck::m_criticalSection;
    if ( hkMultiThreadCheck::m_criticalSection != 0 )
    {
      v2 = *(uint32_t *)(hkMultiThreadCheck::m_criticalSection + 4);
      if ( v2 != 0 )
      {
        while ( pthread_mutex_trylock(mutex) != 0 )
        {
          if ( --v2 == 0 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        if ( pthread_mutex_lock(mutex) != 0 )
        {
          printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
          perror("pthread_mutex_lock(&mutex)");
          __builtin_debugtrap();
        }
      }
      v3 = (int)*((uint16_t *)self + 5) >> 1;
      v4 = (*((uint16_t *)self + 4))-- == 1;
      *((uint16_t *)self + 5) = v3;
      if ( v4 )
        *(uint32_t *)self = -15;
      if ( pthread_mutex_unlock(mutex) != 0 )
      {
        printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
        perror("pthread_mutex_unlock(&m_mutex)");
        __builtin_debugtrap();
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::accessCheck  (binary VA: 0x154d1b0)
// Original: hkMultiThreadCheck::accessCheck
// ----------------------------------------------------------------------------
void hkMultiThreadCheck::accessCheck()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::accessCheckWithParent  (binary VA: 0x154d1c0)
// Original: hkMultiThreadCheck::accessCheckWithParent
// ----------------------------------------------------------------------------
void hkMultiThreadCheck::accessCheckWithParent(int16_t *a1, int a2, int a3, int a4)
{
  int v4;

  if ( a1 != nullptr )
  {
    v4 = *(uint32_t *)a1;
    if ( a1[4] >= 0 && hkMultiThreadCheck::m_criticalSection != 0 )
    {
      if ( v4 == -63 || (hkMultiThreadCheck::accessCheck(), a2 < a4) )
      {
        if ( a4 == 0
          || a1[4] < 0
          || hkMultiThreadCheck::m_criticalSection == 0
          || v4 == -15
          || v4 == -63
          || v4 == -31 && a4 != 1 )
        {
          hkMultiThreadCheck::accessCheck();
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::disableChecks  (binary VA: 0x154d280)
// Original: hkMultiThreadCheck::disableChecks
// ----------------------------------------------------------------------------
hkMultiThreadCheck::Self * hkMultiThreadCheck::disableChecks(hkMultiThreadCheck::Self *self)
{
  *((uint16_t *)self + 4) |= 0x8000u;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::enableChecks  (binary VA: 0x154d290)
// Original: hkMultiThreadCheck::enableChecks
// ----------------------------------------------------------------------------
hkMultiThreadCheck::Self * hkMultiThreadCheck::enableChecks(hkMultiThreadCheck::Self *self)
{
  hkMultiThreadCheck::Self *result;

  result = self;
  if ( *((int16_t *)self + 4) < 0 || hkMultiThreadCheck::m_criticalSection == 0 )
  {
    *(uint32_t *)self = -15;
    *((uint16_t *)self + 4) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::reenableChecks  (binary VA: 0x154d2d0)
// Original: hkMultiThreadCheck::reenableChecks
// ----------------------------------------------------------------------------
hkMultiThreadCheck::Self * hkMultiThreadCheck::reenableChecks(hkMultiThreadCheck::Self *self)
{
  *((uint16_t *)self + 4) &= ~0x8000u;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::globalCriticalSectionLock  (binary VA: 0x154d2e0)
// Original: hkMultiThreadCheck::globalCriticalSectionLock
// ----------------------------------------------------------------------------
void hkMultiThreadCheck::globalCriticalSectionLock()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMultiThreadCheck::globalCriticalSectionUnlock  (binary VA: 0x154d2f0)
// Original: hkMultiThreadCheck::globalCriticalSectionUnlock
// ----------------------------------------------------------------------------
void hkMultiThreadCheck::globalCriticalSectionUnlock()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMemUtil::memCpy  (binary VA: 0x154d350)
// Original: hkMemUtil::memCpy
// ----------------------------------------------------------------------------
void * hkMemUtil::memCpy(hkMemUtil::Self *self, void *src, size_t n)
{
  return memcpy(self, src, n);
}

// ----------------------------------------------------------------------------
// Function: hkMemUtil::memSet  (binary VA: 0x154d390)
// Original: hkMemUtil::memSet
// ----------------------------------------------------------------------------
void * hkMemUtil::memSet(hkMemUtil::Self *self, void *c, size_t n)
{
  return memset(self, (int)(uintptr_t)(c), n);
}

// ----------------------------------------------------------------------------
// Function: hkMemUtil::memCpyBackwards  (binary VA: 0x154d3d0)
// Original: hkMemUtil::memCpyBackwards
// ----------------------------------------------------------------------------
unsigned int hkMemUtil::memCpyBackwards(hkMemUtil::Self *self, char *a2, unsigned int a3)
{
  unsigned int result;
  bool v4;
  unsigned int v5;
  unsigned int v6;
  char *v7;
  char *v8;

  result = a3;
  if ( (a3 & 0xFFFFFFF8) == 0 || (a3 & 7) != 0 || (((uint8_t)(uintptr_t)(a2) | (uint8_t)(uintptr_t)(self)) & 7) != 0 )
  {
    if ( (a3 & 0xFFFFFFFC) == 0 || (a3 & 3) != 0 || (((uint8_t)(uintptr_t)(a2) | (uint8_t)(uintptr_t)(self)) & 3) != 0 )
    {
      if ( (a3 & 0xFFFFFFFE) == 0 || (a3 & 1) != 0 || (((uint8_t)(uintptr_t)(a2) | (uint8_t)(uintptr_t)(self)) & 1) != 0 )
      {
        if ( a3 != 0 )
        {
          do
          {
            *((uint8_t *)self + result - 1) = a2[result - 1];
            --result;
          }
          while ( result != 0 );
        }
      }
      else
      {
        do
        {
          *(uint16_t *)((char *)self + (a3 & 0xFFFFFFFE) - a3 + result - 2) = *(uint16_t *)&a2[(a3 & 0xFFFFFFFE)
                                                                                       - a3
                                                                                       - 2
                                                                                       + result];
          v4 = result == 2;
          result -= 2;
        }
        while ( !v4 && result != 1 );
      }
    }
    else
    {
      do
      {
        *(uint32_t *)((char *)self + (a3 & 0xFFFFFFFC) - a3 + result - 4) = *(uint32_t *)&a2[(a3 & 0xFFFFFFFC)
                                                                                       - a3
                                                                                       - 4
                                                                                       + result];
        result -= 4;
      }
      while ( result > 3 );
    }
  }
  else
  {
    v5 = a3;
    v6 = (a3 & 0xFFFFFFF8) - a3;
    v7 = &a2[v6];
    v8 = (char *)self + v6;
    do
    {
      result = *(uint32_t *)&v7[v5 - 8];
      *(uint32_t *)&v8[v5 - 4] = *(uint32_t *)&v7[v5 - 4];
      *(uint32_t *)&v8[v5 - 8] = result;
      v5 -= 8;
    }
    while ( v5 > 7 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemUtil::memMove  (binary VA: 0x154d4d0)
// Original: hkMemUtil::memMove
// ----------------------------------------------------------------------------
hkMemUtil::Self * hkMemUtil::memMove(hkMemUtil::Self *self, char *src, size_t n)
{
  hkMemUtil::Self *result;

  result = self;
  if ( self > (hkMemUtil::Self *)src )
    return (hkMemUtil::Self *)hkMemUtil::memCpyBackwards(self, src, n);
  if ( self < (hkMemUtil::Self *)src )
    return (hkMemUtil::Self *)memmove(self, src, n);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::opNew  (binary VA: 0x154d540)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::opNew()
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           16);
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::opDelete  (binary VA: 0x154d580)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkCachedHashMap_hkStringMapOperations_hk_b9db0c::opDelete(void *a1)
{
  int address;

  if ( a1 != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      a1,
      16);
  }
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::opNew  (binary VA: 0x154d5d0)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
unsigned int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::opNew(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::opNewArray  (binary VA: 0x154d5e0)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::opNewArray(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::opDelete  (binary VA: 0x154d5f0)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkCachedHashMap_hkStringMapOperations_hk_b9db0c::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::opDeleteArray  (binary VA: 0x154d600)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator delete[]
// ----------------------------------------------------------------------------
void hkCachedHashMap_hkStringMapOperations_hk_b9db0c::opDeleteArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct  (binary VA: 0x154d610)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::hkCachedHashMap
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct(hkString::Self **a1)
{
  hkString::Self *v1;
  int result;
  int v3;

  v1 = (hkString::Self *)(*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
                     (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                     192);
  *a1 = v1;
  result = (int)(uintptr_t)(hkString::memSet(v1, (char *)off_FC + 3, 0xC0u, v3));
  a1[1] = nullptr;
  a1[2] = (hkString::Self *)(byte_9 + 6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy  (binary VA: 0x154d670)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::~hkCachedHashMap
// ----------------------------------------------------------------------------
void hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self)
{
  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 12))(
    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
    *(uint32_t *)self,
    4 * (3 * *((uint32_t *)self + 2) + 3));
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator  (binary VA: 0x154d6b0)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getIterator
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getIterator(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self)
{
  int v1;
  uint32_t *v2;
  int result;

  v1 = *((uint32_t *)self + 2);
  if ( v1 < 0 )
    return 0;
  v2 = *(uint32_t **)self;
  for ( result = 0; *v2 == -1; v2 += 3 )
  {
    if ( ++result > v1 )
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getKey  (binary VA: 0x154d6f0)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getKey
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getKey(uint32_t *a1, int a2)
{
  return *(uint32_t *)(*a1 + 12 * a2 + 4);
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue  (binary VA: 0x154d710)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getValue
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(uint32_t *a1, int a2)
{
  return *(uint32_t *)(*a1 + 12 * a2 + 8);
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::setValue  (binary VA: 0x154d730)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::setValue
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::setValue(uint32_t *a1, int a2, int a3)
{
  int result;

  result = *a1 + 12 * a2;
  *(uint32_t *)(result + 8) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext  (binary VA: 0x154d750)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getNext
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getNext(uint32_t *a1, int a2)
{
  int result;
  int v3;
  int v4;

  result = a2 + 1;
  v3 = a1[2];
  if ( a2 + 1 <= v3 && *(uint32_t *)(*a1 + 12 * result) == -1 )
  {
    v4 = *a1 + 12 * a2;
    do
    {
      if ( ++result > v3 )
        break;
      v4 += 12;
    }
    while ( *(uint32_t *)(v4 + 12) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid  (binary VA: 0x154d7a0)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::isValid
// ----------------------------------------------------------------------------
bool * hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(bool *a1, int a2, int a3)
{
  *a1 = a3 <= *(uint32_t *)(a2 + 8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey  (binary VA: 0x154d7c0)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::findKey
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, hkString::Self *a2)
{
  int v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  const char *v14;

  v2 = *(char *)a2;
  if ( (uint8_t)v2 != 0 )
  {
    v3 = (char *)a2 + 1;
    v4 = 0;
    do
    {
      ++v3;
      v5 = 31 * v4;
      v6 = v2;
      v2 = *(v3 - 1);
      v4 = v5 + v6;
    }
    while ( (uint8_t)v2 != 0 );
    v7 = v4 & 0x7FFFFFFF;
  }
  else
  {
    v7 = 0;
  }
  v8 = *((uint32_t *)self + 2);
  v9 = *(uint32_t *)self;
  v10 = v8 & v7;
  v11 = *(uint32_t *)self + 12 * (v8 & v7);
  v12 = *(uint32_t *)v11;
  if ( *(uint32_t *)v11 == -1 )
    return v8 + 1;
  while ( v12 != v7 )
  {
LABEL_7:
    v10 = v8 & (v10 + 1);
    v11 = v9 + 12 * v10;
    v12 = *(uint32_t *)v11;
    if ( *(uint32_t *)v11 == -1 )
      return v8 + 1;
  }
  if ( hkString::strCmp(a2, *(const char **)(v11 + 4), v14) != 0 )
  {
    v9 = *(uint32_t *)self;
    v8 = *((uint32_t *)self + 2);
    goto LABEL_7;
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::hasKey  (binary VA: 0x154d8a0)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::hasKey
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> * hkCachedHashMap_hkStringMapOperations_hk_b9db0c::hasKey(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *a2, hkString::Self *a3)
{
  int Key;

  Key = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey(a2, a3);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid((bool *)self, (int)(uintptr_t)(a2), Key);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::get  (binary VA: 0x154d8f0)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::get
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> * hkCachedHashMap_hkStringMapOperations_hk_b9db0c::get(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *a2, hkString::Self *a3, int *a4)
{
  int Key;
  int Value;
  typedef bool _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);

  Key = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey(a2, a3);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v7, (int)(uintptr_t)(a2), Key);
  if ( v7 )
  {
    Value = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(a2, Key);
    *(uint32_t *)self = 0;
    *a4 = Value;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault  (binary VA: 0x154d980)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getWithDefault
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, hkString::Self *a2, int a3)
{
  typedef uint8_t _g4_t_v4[4];
  typedef int _g4_t_v5[10];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);

  v5[7] = (int)(uintptr_t)(&self);
  v5[0] = a3;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::get(
    (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v4,
    self,
    a2,
    v5);
  return v5[0];
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::remove  (binary VA: 0x154d9e0)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::remove
// ----------------------------------------------------------------------------
unsigned int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::remove(int *a1, unsigned int a2)
{
  unsigned int v2;
  int v3;
  int v4;
  unsigned int result;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int v12;

  --a1[1];
  *(uint32_t *)(*a1 + 12 * a2) = -1;
  v2 = a1[2];
  v3 = *a1;
  v4 = v2 & (v2 + a2);
  if ( *(uint32_t *)(*a1 + 12 * v4) != -1 )
  {
    do
      v4 = v2 & (v2 + v4);
    while ( *(uint32_t *)(v3 + 12 * v4) != -1 );
  }
  result = v2 & (a2 + 1);
  v12 = v2 & (v4 + 1);
  v6 = 12 * result;
  v7 = *(uint32_t *)(v3 + 12 * result);
  if ( v7 != -1 )
  {
    v8 = a2;
    v11 = *a1;
    do
    {
      v9 = v7 & v2;
      if ( ((v7 & v2) <= v8 || result < v12)
        && (result >= v8 || v9 > result && (v7 & v2) <= v8)
        && (v9 >= v12 || (v7 & v2) <= v8) )
      {
        v10 = 12 * v8;
        *(uint32_t *)(v11 + v10) = v7;
        *(uint32_t *)(*a1 + v10 + 4) = *(uint32_t *)(*a1 + v6 + 4);
        *(uint32_t *)(*a1 + v10 + 8) = *(uint32_t *)(*a1 + v6 + 8);
        *(uint32_t *)(*a1 + v6) = -1;
        v2 = a1[2];
        v11 = *a1;
        v8 = result;
      }
      result = v2 & (result + 1);
      v6 = 12 * result;
      v7 = *(uint32_t *)(v11 + 12 * result);
    }
    while ( v7 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::remove  (binary VA: 0x154daf0)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::remove
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> * hkCachedHashMap_hkStringMapOperations_hk_b9db0c::remove(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *a2, hkString::Self *a3)
{
  int Key;
  typedef bool _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);

  Key = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey(a2, a3);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v5, (int)(uintptr_t)(a2), Key);
  if ( v5 )
  {
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::remove((int *)a2, Key);
    *(uint32_t *)self = 0;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getSize  (binary VA: 0x154db80)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getSize
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getSize(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isOk  (binary VA: 0x154db90)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::isOk
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> * hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isOk(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, int *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  int v8;
  int v9;
  hkString::Self *v11;

  v2 = 0;
  v3 = a2[2];
  if ( v3 < 0 )
    goto LABEL_11;
  while ( 2 )
  {
    v4 = v3;
    v5 = *a2;
    v6 = (int *)(*a2 + 12 * v2);
    v7 = *v6;
    if ( *v6 != -1 )
    {
      v8 = v7 & v3;
      v11 = (hkString::Self *)v6[1];
      while ( 1 )
      {
        v9 = v5 + 12 * v8;
        if ( v7 == *(uint32_t *)v9 )
        {
          if ( hkString::strCmp(v11, *(const char **)(v9 + 4), (const char *)v11) == 0 )
            break;
          v5 = *a2;
          v3 = a2[2];
        }
        v8 = v3 & (v8 + 1);
      }
      v4 = a2[2];
    }
    if ( ++v2 <= v4 )
    {
      v3 = v4;
      continue;
    }
    break;
  }
LABEL_11:
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::opAssign  (binary VA: 0x154dc40)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::operator=
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> * hkCachedHashMap_hkStringMapOperations_hk_b9db0c::opAssign(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, const hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *a2)
{
  int v2;
  hkString::Self *v3;
  int v4;
  int v6;

  (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 12))(
    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
    *(uint32_t *)self,
    4 * (3 * *((uint32_t *)self + 2) + 3));
  v2 = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 2) = v2;
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  v3 = (hkString::Self *)(*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
                     (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                     4 * (3 * v2 + 3));
  v4 = *((uint32_t *)self + 2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
  hkString::memCpy(v3, *(void **)a2, 4 * (3 * v4 + 3), v6);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::clear  (binary VA: 0x154dcd0)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::clear
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::clear(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self)
{
  int64_t i; // rax

  for ( i = 0; *((uint32_t *)self + 2) >= (int)i; HIDWORD(i) += 12 )
  {
    LODWORD(i) = i + 1;
    *(uint32_t *)(*(uint32_t *)self + HIDWORD(i)) = -1;
  }
  *((uint32_t *)self + 1) = 0;
  return i;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::swap  (binary VA: 0x154dd00)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::swap
// ----------------------------------------------------------------------------
hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> * hkCachedHashMap_hkStringMapOperations_hk_b9db0c::swap(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *a2)
{
  int v3;
  int v4;
  int v5;

  v3 = *(uint32_t *)self;
  *(uint32_t *)self = *(uint32_t *)a2;
  v4 = *((uint32_t *)self + 1);
  v5 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *(uint32_t *)a2 = v3;
  *((uint32_t *)a2 + 1) = v4;
  *((uint32_t *)a2 + 2) = v5;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getCapacity  (binary VA: 0x154dd30)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getCapacity
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getCapacity(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self)
{
  return *((uint32_t *)self + 2) + 1;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::resizeTable  (binary VA: 0x154dd40)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::resizeTable
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::resizeTable(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, int a2)
{
  int v2;
  hkString::Self *v3;
  int v4;
  int v5;
  int v7;
  int v8;

  v2 = *((uint32_t *)self + 2) + 1;
  v7 = *(uint32_t *)self;
  v3 = (hkString::Self *)(*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
                     (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                     12 * a2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
  hkString::memSet(v3, (char *)off_FC + 3, 12 * a2, v7);
  v4 = 0;
  v5 = v8;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = a2 - 1;
  if ( v2 > 0 )
  {
    do
    {
      if ( *(uint32_t *)v5 != -1 )
        hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
          self,
          *(hkString::Self **)(v5 + 4),
          *(uint32_t *)(v5 + 8));
      ++v4;
      v5 += 12;
    }
    while ( v2 != v4 );
  }
  return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 12))(
           (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
           v8,
           12 * v2);
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert  (binary VA: 0x154de20)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::insert
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, hkString::Self *a2, unsigned int a3)
{
  int v3;
  char *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int i;
  int v12;
  int v13;
  int v14;
  int result;
  int v16;

  v3 = *(char *)a2;
  if ( (uint8_t)v3 != 0 )
  {
    v4 = (char *)a2 + 1;
    v5 = 0;
    do
    {
      ++v4;
      v6 = 31 * v5;
      v7 = v3;
      v3 = *(v4 - 1);
      v5 = v6 + v7;
    }
    while ( (uint8_t)v3 != 0 );
    v16 = v5 & 0x7FFFFFFF;
  }
  else
  {
    v16 = 0;
  }
  v8 = *((uint32_t *)self + 2);
  if ( 2 * *((uint32_t *)self + 1) > v8 )
  {
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::resizeTable(self, 2 * v8 + 2);
    v8 = *((uint32_t *)self + 2);
  }
  v9 = v8 & v16;
  v10 = *(uint32_t *)self;
  for ( i = 3 * (v8 & v16); ; i = 3 * v9 )
  {
    v12 = 4 * i;
    v13 = v10 + v12;
    v14 = *(uint32_t *)(v10 + v12);
    if ( v14 == -1 )
    {
      ++*((uint32_t *)self + 1);
      goto LABEL_14;
    }
    if ( v14 == v16 )
      break;
LABEL_8:
    v9 = v8 & (v9 + 1);
  }
  if ( hkString::strCmp(a2, *(const char **)(v13 + 4), (const char *)v16) != 0 )
  {
    v10 = *(uint32_t *)self;
    v8 = *((uint32_t *)self + 2);
    goto LABEL_8;
  }
  v13 = v12 + *(uint32_t *)self;
LABEL_14:
  *(uint32_t *)v13 = v16;
  *(uint32_t *)(*(uint32_t *)self + v12 + 4) = (uint32_t)(uintptr_t)(a2);
  result = *(uint32_t *)self;
  *(uint32_t *)(*(uint32_t *)self + v12 + 8) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getOrInsert  (binary VA: 0x154df60)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::getOrInsert
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getOrInsert(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, hkString::Self *a2, unsigned int a3)
{
  int Key;
  typedef bool _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);

  Key = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findKey(self, a2);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::isValid(&v5, (int)(uintptr_t)(self), Key);
  if ( v5 )
    return hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getValue(self, Key);
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(self, a2, a3);
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::merge  (binary VA: 0x154dfe0)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::merge
// ----------------------------------------------------------------------------
void hkCachedHashMap_hkStringMapOperations_hk_b9db0c::merge(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, const hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *a2)
{
  int v2;
  int v3;
  int v4;

  v2 = 0;
  v3 = *((uint32_t *)a2 + 2);
  if ( v3 >= 0 )
  {
    do
    {
      v4 = *(uint32_t *)a2 + 12 * v2;
      if ( *(uint32_t *)v4 != -1 )
        hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
          self,
          *(hkString::Self **)(v4 + 4),
          *(uint32_t *)(v4 + 8));
      ++v2;
    }
    while ( v3 >= v2 );
  }
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findOrInsertKey  (binary VA: 0x154e040)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::findOrInsertKey
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::findOrInsertKey(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, hkString::Self *a2, unsigned int a3)
{
  int v3;
  int v4;
  char *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  const char *v14;
  int v15;

  v3 = *((uint32_t *)self + 2);
  if ( 2 * *((uint32_t *)self + 1) > v3 )
  {
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::resizeTable(self, 2 * v3 + 2);
    v3 = *((uint32_t *)self + 2);
  }
  v4 = *(char *)a2;
  if ( (uint8_t)v4 != 0 )
  {
    v5 = (char *)a2 + 1;
    v6 = 0;
    do
    {
      ++v5;
      v7 = 31 * v6;
      v8 = v4;
      v4 = *(v5 - 1);
      v6 = v7 + v8;
    }
    while ( (uint8_t)v4 != 0 );
    v15 = v6 & 0x7FFFFFFF;
    v9 = v6 & 0x7FFFFFFF & v3;
  }
  else
  {
    v9 = 0;
    v15 = 0;
  }
  v10 = *(uint32_t *)self;
  while ( 1 )
  {
    v11 = 12 * v9;
    v12 = v10 + 12 * v9;
    if ( *(uint32_t *)v12 == v15 )
      break;
    if ( *(uint32_t *)v12 == -1 )
      goto LABEL_13;
LABEL_9:
    v9 = *((uint32_t *)self + 2) & (v9 + 1);
  }
  if ( hkString::strCmp(a2, *(const char **)(v12 + 4), v14) == 0 )
    return v9;
  v10 = *(uint32_t *)self;
  v12 = *(uint32_t *)self + v11;
  if ( *(uint32_t *)v12 != -1 )
    goto LABEL_9;
LABEL_13:
  *(uint32_t *)v12 = v15;
  *(uint32_t *)(*(uint32_t *)self + v11 + 4) = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)(*(uint32_t *)self + v11 + 8) = a3;
  ++*((uint32_t *)self + 1);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: hkCachedHashMap_hkStringMapOperations_hk_b9db0c::reserve  (binary VA: 0x154e150)
// Original: hkCachedHashMap<hkStringMapOperations,hkContainerHeapAllocator>::reserve
// ----------------------------------------------------------------------------
int hkCachedHashMap_hkStringMapOperations_hk_b9db0c::reserve(hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *self, int a2)
{
  int result;

  for ( result = 8; 2 * a2 > result; result *= 2 )
    ;
  if ( *((uint32_t *)self + 2) + 1 < result )
    return hkCachedHashMap_hkStringMapOperations_hk_b9db0c::resizeTable(self, result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::advanceFrame  (binary VA: 0x154e1b0)
// Original: hkMemorySystem::advanceFrame
// ----------------------------------------------------------------------------
void hkMemorySystem::advanceFrame()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::getDebugInterface  (binary VA: 0x154e1c0)
// Original: hkMemorySystem::getDebugInterface
// ----------------------------------------------------------------------------
int hkMemorySystem::getDebugInterface()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::getMemorySnapshot  (binary VA: 0x154e1d0)
// Original: hkMemorySystem::getMemorySnapshot
// ----------------------------------------------------------------------------
hkMemorySystem::Self * hkMemorySystem::getMemorySnapshot(hkMemorySystem::Self *self, hkMemorySnapshot::Self *a2)
{
  *(uint32_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::getAllocationCallStack  (binary VA: 0x154e1e0)
// Original: hkMemorySystem::getAllocationCallStack
// ----------------------------------------------------------------------------
hkMemorySystem::Self * hkMemorySystem::getAllocationCallStack(hkMemorySystem::Self *self, const void *a2, unsigned int *a3, int *a4, unsigned int *a5)
{
  *(uint32_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::setHeapScrubValues  (binary VA: 0x154e1f0)
// Original: hkMemorySystem::setHeapScrubValues
// ----------------------------------------------------------------------------
void hkMemorySystem::setHeapScrubValues()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::isOk  (binary VA: 0x154e200)
// Original: hkMemorySystem::isOk
// ----------------------------------------------------------------------------
int hkMemorySystem::isOk()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::Destroy  (binary VA: 0x154e210)
// Original: hkMemorySystem::~hkMemorySystem
// ----------------------------------------------------------------------------
void hkMemorySystem::Destroy(hkMemorySystem::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096DC8);
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::Destroy_ea154e230  (binary VA: 0x154e230)
// Original: hkMemorySystem::~hkMemorySystem
// ----------------------------------------------------------------------------
void hkMemorySystem::Destroy_ea154e230(hkMemorySystem::Self *self)
{
  hkMemorySystem::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::garbageCollectThread  (binary VA: 0x154e260)
// Original: hkMemorySystem::garbageCollectThread
// ----------------------------------------------------------------------------
void hkMemorySystem::garbageCollectThread()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::garbageCollectShared  (binary VA: 0x154e270)
// Original: hkMemorySystem::garbageCollectShared
// ----------------------------------------------------------------------------
void hkMemorySystem::garbageCollectShared()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::setHeapSoftLimit  (binary VA: 0x154e280)
// Original: hkMemorySystem::setHeapSoftLimit
// ----------------------------------------------------------------------------
hkMemorySystem::Self * hkMemorySystem::setHeapSoftLimit(hkMemorySystem::Self *self, int a2)
{
  *(uint32_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::getHeapSoftLimit  (binary VA: 0x154e290)
// Original: hkMemorySystem::getHeapSoftLimit
// ----------------------------------------------------------------------------
int hkMemorySystem::getHeapSoftLimit()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::solverCanAllocSingleBlock  (binary VA: 0x154e2a0)
// Original: hkMemorySystem::solverCanAllocSingleBlock
// ----------------------------------------------------------------------------
int hkMemorySystem::solverCanAllocSingleBlock()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::heapCanAllocTotal  (binary VA: 0x154e2b0)
// Original: hkMemorySystem::heapCanAllocTotal
// ----------------------------------------------------------------------------
int hkMemorySystem::heapCanAllocTotal()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::garbageCollect  (binary VA: 0x154e2c0)
// Original: hkMemorySystem::garbageCollect
// ----------------------------------------------------------------------------
int hkMemorySystem::garbageCollect(hkMemorySystem::Self *self)
{
  uint32_t *address;

  address = (uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  G4_VCALL<void>(self, 52, *address);
  return G4_VCALL<int>(self, 56);
}



// ============================================================================
// Address:   0x154e300 (size: 13 bytes)
// Symbol:    _ZN14hkMemorySystem9FrameInfoC1Ei
// Demangled: hkMemorySystem::FrameInfo::FrameInfo(int)
// ============================================================================
// Alternative name is '_ZN14hkMemorySystem9FrameInfoC2Ei'
hkMemorySystem::FrameInfo::Self *hkMemorySystem::FrameInfo::Construct(hkMemorySystem::FrameInfo::Self *self, int a2)
{
  *(uint32_t *)self = a2;
  return self;
}
// ----------------------------------------------------------------------------
// Function: hkMemorySystem::replaceInstance  (binary VA: 0x154e310)
// Original: hkMemorySystem::replaceInstance
// ----------------------------------------------------------------------------
uint32_t * hkMemorySystem::replaceInstance(hkMemorySystem::Self *self)
{
  hkMemorySystem::s_instance[0] = (uintptr_t)(uintptr_t)(self);
  return (uint32_t *)(hkMemorySystem::s_instance);
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::getInstance  (binary VA: 0x154e330)
// Original: hkMemorySystem::getInstance
// ----------------------------------------------------------------------------
int hkMemorySystem::getInstance()
{
  return hkMemorySystem::s_instance[0];
}

// ----------------------------------------------------------------------------
// Function: hkMemorySystem::getInstancePtr  (binary VA: 0x154e350)
// Original: hkMemorySystem::getInstancePtr
// ----------------------------------------------------------------------------
int hkMemorySystem::getInstancePtr()
{
  return hkMemorySystem::s_instance[0];
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::staticClass  (binary VA: 0x154e380)
// Original: hkClassMember::staticClass
// ----------------------------------------------------------------------------
void * hkClassMember::staticClass()
{
  return &hkClassMemberClass;
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getClassMemberTypeProperties  (binary VA: 0x154e480)
// Original: hkClassMember::getClassMemberTypeProperties
// ----------------------------------------------------------------------------
char * hkClassMember::getClassMemberTypeProperties(int a1)
{
  return (char *)(&byte_2120520[12 * a1]);
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::isNotOwner  (binary VA: 0x154e4a0)
// Original: hkClassMember::isNotOwner
// ----------------------------------------------------------------------------
hkClassMember::Self * hkClassMember::isNotOwner(hkClassMember::Self *self, int a2)
{
  *(uint8_t *)self = (*(uint8_t *)(a2 + 17) & 2) != 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getAlignment  (binary VA: 0x154e4c0)
// Original: hkClassMember::getAlignment
// ----------------------------------------------------------------------------
int hkClassMember::getAlignment(hkClass::Self **self)
{
  int v1;
  int v2;
  int Alignment;
  int16_t v4;
  int v5;
  hkClassMember::Self *v7;
  hkClassMember::Self *Member;

  v1 = *((uint8_t *)self + 12);
  if ( v1 == 31 || v1 == 24 )
    v1 = *((uint8_t *)self + 13);
  v2 = 0;
  Alignment = 1;
  if ( v1 == 25 )
  {
    while ( v2 < hkClass::getNumMembers(*(self + 1)) )
    {
      Member = (hkClassMember::Self *)hkClass::getMember(*(self + 1), v2);
      if ( Alignment < hkClassMember::getAlignment((hkClass::Self **)(Member)) )
      {
        v7 = (hkClassMember::Self *)hkClass::getMember(*(self + 1), v2);
        Alignment = hkClassMember::getAlignment((hkClass::Self **)(v7));
      }
      ++v2;
    }
  }
  else
  {
    Alignment = word_212052A[6 * v1];
  }
  v4 = *((uint16_t *)self + 8);
  if ( (v4 & 0x980) != 0 )
  {
    v5 = 32;
    if ( (v4 & 0x800) == 0 )
      v5 = (v4 & 0x100) == 0 ? 8 : 16;
    if ( Alignment < v5 )
      return v5;
  }
  return Alignment;
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getArrayType  (binary VA: 0x154e5a0)
// Original: hkClassMember::getArrayType
// ----------------------------------------------------------------------------
int hkClassMember::getArrayType(hkClassMember::Self *self)
{
  return *((uint8_t *)self + 13);
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getTypeName  (binary VA: 0x154e5b0)
// Original: hkClassMember::getTypeName
// ----------------------------------------------------------------------------
int hkClassMember::getTypeName(hkClassMember::Self *self, hkString::Self *a2, size_t a3)
{
  const char *Name;
  const char **v4;
  int v5;
  char *v6;
  int result;
  int ArrayType;
  int v9;
  const char *v10;
  char *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef const char *_g4_t_v14;
  typedef const char *_g4_t_v15;
  typedef uint8_t _g4_t_v16;
  typedef bool _g4_t_v17;
  typedef int _g4_t_v18;
  typedef const char *_g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char _g4_t_v23[144];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v14)) > _g4_s2 ? (24u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v16)) > _g4_s4 ? (32u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v18)) > _g4_s6 ? (32u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v19)) > _g4_s7 ? (32u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v20)) > _g4_s8 ? (36u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v21)) > _g4_s9 ? (40u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v22)) > _g4_s10 ? (44u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v23)) > _g4_s11 ? (48u + sizeof(_g4_t_v23)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);

  Name = "unknown";
  v16 = *((uint8_t *)self + 12);
  if ( *((uint32_t *)self + 1) != 0 )
    Name = (const char *)hkClass::getName(*((hkClass::Self **)self + 1));
  v4 = *((const char ***)self + 2);
  if ( v4 != nullptr )
    v14 = *v4;
  else
    v14 = "unknown";
  v5 = v16;
  v6 = v23;
  v20 = v23;
  v22 = -2147483520;
  v21 = 1;
  v23[0] = 0;
  if ( v16 <= 0x13u || (unsigned int)v16 - 32 <= 1 || (uint8_t)(v16 - 27) <= 3u )
  {
    if ( *((uint16_t *)self + 7) != 0 )
    {
      v13 = *((int16_t *)self + 7);
      hkStringBuf::printf((hkStringBuf::Self *)&v20, "%s[%i]", dword_2120524[3 * v16]);
LABEL_20:
      v6 = v20;
      goto LABEL_15;
    }
    v11 = (char *)dword_2120524[3 * v16];
  }
  else
  {
    if ( v16 != 20 )
    {
      v17 = v16 == 26;
      if ( v5 != 26 && v5 != 22 )
      {
        if ( v5 != 34 )
        {
          switch ( v5 )
          {
            case 24:
              hkStringBuf::printf((hkStringBuf::Self *)&v20, "enum %s", v14);
              break;
            case 25:
              if ( *((uint16_t *)self + 7) != 0 )
              {
                v13 = *((int16_t *)self + 7);
                hkStringBuf::printf((hkStringBuf::Self *)&v20, "struct %s[%i]", Name);
                goto LABEL_20;
              }
              hkStringBuf::printf((hkStringBuf::Self *)&v20, "struct %s", Name);
              break;
            case 31:
              hkStringBuf::printf((hkStringBuf::Self *)&v20, "flags %s", v14);
              break;
            default:
              goto LABEL_15;
          }
          goto LABEL_33;
        }
        v19 = Name;
        ArrayType = hkClassMember::getArrayType(self);
        v9 = (int)(uintptr_t)(v19);
        goto LABEL_23;
      }
      v15 = Name;
      ArrayType = hkClassMember::getArrayType(self);
      v9 = (int)(uintptr_t)(v15);
      if ( v5 == 22 )
      {
        v10 = "hkArray";
      }
      else
      {
        if ( !v17 )
        {
LABEL_23:
          v10 = "hkRelArray";
          goto LABEL_24;
        }
        v10 = "hkSimpleArray";
      }
LABEL_24:
      if ( ArrayType >= 0 )
      {
        if ( ArrayType <= 19 || (unsigned int)(ArrayType - 28) <= 2 || (unsigned int)(ArrayType - 32) <= 1 )
        {
          v13 = dword_2120524[3 * ArrayType];
          hkStringBuf::printf((hkStringBuf::Self *)&v20, "%s&lt;%s&gt;", v10);
          goto LABEL_20;
        }
        if ( ArrayType == 20 )
        {
          if ( *((uint32_t *)self + 1) != 0 )
          {
            v13 = v9;
            hkStringBuf::printf((hkStringBuf::Self *)&v20, "%s&lt;%s*&gt;", v10);
            goto LABEL_20;
          }
          hkStringBuf::printf((hkStringBuf::Self *)&v20, "%s&lt;void*&gt;", v10);
LABEL_33:
          v6 = v20;
          goto LABEL_15;
        }
      }
      if ( ArrayType == 25 )
      {
        v13 = v9;
        hkStringBuf::printf((hkStringBuf::Self *)&v20, "%s&lt;struct %s&gt;", v10);
      }
      goto LABEL_20;
    }
    if ( *((uint32_t *)self + 1) != 0 )
    {
      v12 = hkClass::getName(*((hkClass::Self **)self + 1));
      hkStringBuf::printf((hkStringBuf::Self *)&v20, "struct %s*", v12);
      goto LABEL_33;
    }
    v11 = "void*";
    if ( *((uint8_t *)self + 13) == 2 )
      v11 = "char*";
  }
  hkStringBuf::opAssign((hkStringBuf::Self *)&v20, (hkString::Self *)v11);
  v6 = v20;
LABEL_15:
  hkString::strNcpy(a2, v6, a3, v13);
  result = v21 - 1;
  v21 = 0;
  if ( v22 >= 0 )
  {
    v18 = result;
    (*(void (**)(uint32_t *, char *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v20,
      v22 & 0x3FFFFFFF);
    return v18;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getStructClass  (binary VA: 0x154e930)
// Original: hkClassMember::getStructClass
// ----------------------------------------------------------------------------
int hkClassMember::getStructClass(hkClassMember::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getArrayMemberSize  (binary VA: 0x154e940)
// Original: hkClassMember::getArrayMemberSize
// ----------------------------------------------------------------------------
int hkClassMember::getArrayMemberSize(hkClassMember::Self *self)
{
  hkClass::Self *StructClass;

  if ( hkClassMember::getArrayType(self) == 24 || hkClassMember::getArrayType(self) == 31 )
    return -1;
  if ( hkClassMember::getArrayType(self) != 25 )
    return word_2120528[6 * hkClassMember::getArrayType(self)];
  StructClass = (hkClass::Self *)hkClassMember::getStructClass(self);
  return hkClass::getObjectSize(StructClass);
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getClass  (binary VA: 0x154e9c0)
// Original: hkClassMember::getClass
// ----------------------------------------------------------------------------
int hkClassMember::getClass(hkClassMember::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getEnumClass  (binary VA: 0x154e9d0)
// Original: hkClassMember::getEnumClass
// ----------------------------------------------------------------------------
int hkClassMember::getEnumClass(hkClassMember::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getCstyleArraySize  (binary VA: 0x154e9e0)
// Original: hkClassMember::getCstyleArraySize
// ----------------------------------------------------------------------------
int hkClassMember::getCstyleArraySize(hkClassMember::Self *self)
{
  return *((int16_t *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getSizeInBytes  (binary VA: 0x154e9f0)
// Original: hkClassMember::getSizeInBytes
// ----------------------------------------------------------------------------
int hkClassMember::getSizeInBytes(hkClassMember::Self *self)
{
  uint8_t v1;
  int v2;
  int v3;
  hkClass::Self *StructClass;
  int result;
  int v6;
  int v7;
  int CstyleArraySize;
  int v9;

  v1 = *((uint8_t *)self + 12);
  v2 = v1;
  switch ( v1 )
  {
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
    case 0x20u:
    case 0x21u:
    case 0x22u:
      CstyleArraySize = hkClassMember::getCstyleArraySize(self);
      v9 = 1;
      if ( CstyleArraySize != 0 )
        v9 = hkClassMember::getCstyleArraySize(self);
      result = v9 * word_2120528[6 * v2];
      break;
    case 0x18u:
    case 0x1Fu:
      v6 = hkClassMember::getCstyleArraySize(self);
      v7 = 1;
      if ( v6 != 0 )
        v7 = hkClassMember::getCstyleArraySize(self);
      result = v7 * word_2120528[6 * *((uint8_t *)self + 13)];
      break;
    case 0x19u:
      v3 = 1;
      if ( hkClassMember::getCstyleArraySize(self) != 0 )
        v3 = hkClassMember::getCstyleArraySize(self);
      StructClass = (hkClass::Self *)hkClassMember::getStructClass(self);
      result = v3 * hkClass::getObjectSize(StructClass);
      break;
    default:
      result = -1;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getEnumType  (binary VA: 0x154eaf0)
// Original: hkClassMember::getEnumType
// ----------------------------------------------------------------------------
int hkClassMember::getEnumType(hkClassMember::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getEnumValue  (binary VA: 0x154eb00)
// Original: hkClassMember::getEnumValue
// ----------------------------------------------------------------------------
int hkClassMember::getEnumValue(hkClassMember::Self *self, const void *a2)
{
  return hkVariantDataUtil::getInt(*((uint8_t *)self + 12), *((uint8_t *)self + 13), a2);
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::setEnumValue  (binary VA: 0x154eb40)
// Original: hkClassMember::setEnumValue
// ----------------------------------------------------------------------------
int hkClassMember::setEnumValue(hkClassMember::Self *self, void *a2, int a3)
{
  return (int)(uintptr_t)(hkVariantDataUtil::setInt(*((uint8_t *)self + 12), *((uint8_t *)self + 13), a2, a3, a3 >> 31));
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getAttribute  (binary VA: 0x154eb90)
// Original: hkClassMember::getAttribute
// ----------------------------------------------------------------------------
int hkClassMember::getAttribute(hkClassMember::Self *self, char *a2)
{
  uint32_t *v2;
  int v3;
  const char *v5;

  v2 = *((uint32_t **)self + 5);
  if ( v2 == nullptr )
    return 0;
  v3 = 0;
  if ( (int)v2[1] <= 0 )
    return 0;
  while ( hkString::strCmp(*(hkString::Self **)(*v2 + 12 * v3), a2, v5) != 0 )
  {
    if ( ++v3 >= v2[1] )
      return 0;
  }
  return 12 * v3 + *v2 + 4;
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getTypeOf  (binary VA: 0x154ec10)
// Original: hkClassMember::getTypeOf
// ----------------------------------------------------------------------------
int hkClassMember::getTypeOf(hkClassMember::Self *self)
{
  int v1;
  int v3;
  int v4;
  int v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[2];
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v9)) > _g4_s3 ? (12u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v10)) > _g4_s4 ? (12u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v11)) > _g4_s5 ? (12u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v12)) > _g4_s6 ? (12u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v13)) > _g4_s7 ? (12u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v14)) > _g4_s8 ? (12u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v15)) > _g4_s9 ? (16u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v16)) > _g4_s10 ? (24u + sizeof(_g4_t_v16)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);

  v1 = 24;
  if ( hkString::strNcmp(self, "enum ", 5u, v8) != 0 )
  {
    LOWORD(v1) = 31;
    if ( hkString::strNcmp(self, "flags ", 6u, v9) != 0 )
    {
      LOWORD(v1) = 22;
      if ( hkString::strNcmp(self, "hkArray<", 8u, v10) != 0 )
      {
        LOWORD(v1) = 34;
        if ( hkString::strNcmp(self, "hkRelArray<", 0xBu, v11) != 0 )
        {
          LOWORD(v1) = 26;
          if ( hkString::strNcmp(self, "hkSimpleArray<", 0xEu, v12) != 0 )
          {
            LOWORD(v1) = 29;
            if ( hkString::strNcmp(self, "char*", 5u, v13) != 0 )
            {
              LOWORD(v1) = 33;
              if ( hkString::strNcmp(self, "hkStringPtr", 0xBu, v14) != 0 )
              {
                v3 = (int)(uintptr_t)(hkString::strRchr(self, word_2A, v6));
                if ( v3 == 0 || (LOWORD(v1) = 20, *(uint8_t *)(v3 + 1) != 0) )
                {
                  hkStringBuf::Construct((hkStringBuf::Self *)v15, self);
                  v4 = (int)(uintptr_t)(hkString::strChr(self, (const char *)&dword_58 + 3, v7));
                  if ( v4 != 0 )
                    hkStringBuf::slice((hkStringBuf::Self *)v15, 0, v4 - (uint32_t)(uintptr_t)(self));
                  v5 = 0;
                  while ( hkStringBuf::opEq((hkStringBuf::Self *)v15, (const char *)dword_2120524[3 * v5]) == 0 )
                  {
                    if ( ++v5 == 35 )
                    {
                      v1 = 0;
                      goto LABEL_18;
                    }
                  }
                  v1 = v5;
LABEL_18:
                  v15[1] = 0;
                  if ( v16 >= 0 )
                    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
                      (uint32_t *)(hkContainerTempAllocator::s_alloc),
                      v15[0],
                      v16 & 0x3FFFFFFF);
                }
              }
            }
          }
        }
      }
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkClassMember::getSubtypeOf  (binary VA: 0x154ee00)
// Original: hkClassMember::getSubtypeOf
// ----------------------------------------------------------------------------
int hkClassMember::getSubtypeOf(hkClassMember::Self *self)
{
  int v1;
  int v2;
  int TypeOf;
  hkString::Self *v4;
  int v5;
  typedef const char *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef hkClassMember::Self *_g4_t_v15[2];
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v10)) > _g4_s3 ? (8u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v11)) > _g4_s4 ? (12u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v12)) > _g4_s5 ? (12u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v13)) > _g4_s6 ? (12u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v14)) > _g4_s7 ? (12u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v15)) > _g4_s8 ? (16u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v16)) > _g4_s9 ? (24u + sizeof(_g4_t_v16)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);

  if ( hkString::strNcmp(self, "hkArray<", 8u, v11) == 0 )
  {
    v4 = (hkString::Self *)((hkClassMember::Self *)((char *)self + 8));
    goto LABEL_7;
  }
  if ( hkString::strNcmp(self, "hkRelArray<", 0xBu, v12) == 0 )
  {
    v4 = (hkString::Self *)((hkClassMember::Self *)((char *)self + 11));
LABEL_7:
    v5 = hkString::strLen(v4, v7);
    hkStringBuf::Construct((hkStringBuf::Self *)v15, (const char *)v4, v5 - 1);
    TypeOf = hkClassMember::getTypeOf(v15[0]);
    goto LABEL_8;
  }
  if ( hkString::strNcmp(self, "hkSimpleArray<", 0xEu, v13) == 0 )
  {
    v4 = (hkString::Self *)((hkClassMember::Self *)((char *)self + 14));
    goto LABEL_7;
  }
  v1 = 0;
  v14 = (int)(uintptr_t)(hkString::strChr(self, (const char *)&dword_58 + 3, v8));
  if ( v14 == 0 )
    return v1;
  v2 = (int)(uintptr_t)(hkString::strChr(self, (const char *)&dword_5C + 1, v9));
  hkStringBuf::Construct((hkStringBuf::Self *)v15, (const char *)(v14 + 1), v2 - v14 - 1);
  TypeOf = hkString::atoi(v15[0], nullptr, v10);
LABEL_8:
  v1 = TypeOf;
  v15[1] = nullptr;
  if ( v16 >= 0 )
    (*(void (**)(uint32_t *, hkClassMember::Self *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v15[0],
      v16 & 0x3FFFFFFF);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkContactPointMaterial::staticClass  (binary VA: 0x154f4c0)
// Original: hkContactPointMaterial::staticClass
// ----------------------------------------------------------------------------
void * hkContactPointMaterial::staticClass()
{
  return &hkContactPointMaterialClass;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::getClassType  (binary VA: 0x154f5b0)
// Original: hkOstream::getClassType
// ----------------------------------------------------------------------------
void * hkOstream::getClassType()
{
  return &unk_2120740;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::Destroy  (binary VA: 0x154f5d0)
// Original: hkOstream::~hkOstream
// ----------------------------------------------------------------------------
void hkOstream::Destroy(hkOstream::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  v1 = *((uint32_t *)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096EB0);
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
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkOstream::Destroy_ea154f650  (binary VA: 0x154f650)
// Original: hkOstream::~hkOstream
// ----------------------------------------------------------------------------
void hkOstream::Destroy_ea154f650(hkOstream::Self *self)
{
  int v1;
  int v2;

  hkOstream::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkOstream::Construct  (binary VA: 0x154f6b0)
// Original: hkOstream::hkOstream
// ----------------------------------------------------------------------------
void hkOstream::Construct(hkOstream::Self *self, hkStreamWriter::Self *a2)
{
  int v2;
  int32_t v3; // kr00_4

  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096EB0);
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v3 = *((uint32_t *)a2 + 1);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
    }
    while ( v3 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v3, v2 | (uint16_t)(v3 + 1)) );
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  }
}

// ----------------------------------------------------------------------------
// Function: hkOstream::Construct  (binary VA: 0x154f720)
// Original: hkOstream::hkOstream
// ----------------------------------------------------------------------------
void hkOstream::Construct(hkOstream::Self *self, const char *a2)
{
  hkOstream::Self *v2;
  int v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);

  v2 = self;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096EB0);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  (*(void (**)(uint32_t *, uint32_t, const char *, int, int, int, int))(*hkSingleton<hkFileSystem::Self>::s_instance + 24))(
    v12,
    (uint32_t)(uintptr_t)(hkSingleton<hkFileSystem::Self>::s_instance),
    a2,
    3,
    v9,
    v10,
    v11);
  v3 = *((uint32_t *)self + 2);
  v4 = v12[0];
  if ( v3 == 0 || *(uint16_t *)(v3 + 6) == 0 )
    goto LABEL_5;
  do
  {
    v6 = *(uint32_t *)(v3 + 4);
    HIWORD(v5) = HIWORD(v6);
    LOWORD(v5) = 0;
    v7 = v5 | (uint16_t)(v6 - 1);
    v8 = v6;
  }
  while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v8, v7) );
  v2 = self;
  if ( (uint16_t)v7 == 0 )
  {
    G4_VCALL<void>(v3, 16);
    *((uint32_t *)self + 2) = v4;
  }
  else
  {
LABEL_5:
    *((uint32_t *)v2 + 2) = v4;
  }
}

// ----------------------------------------------------------------------------
// Function: hkOstream::Construct  (binary VA: 0x154f7e0)
// Original: hkOstream::hkOstream
// ----------------------------------------------------------------------------
int hkOstream::Construct(uint32_t *a1, hkString::Self *a2, size_t a3, char a4)
{
  uint32_t *v4;
  int address;
  int v6;
  int result;
  int v8;
  int v9;
  int32_t v10; // kr00_4
  int32_t v11;
  int32_t v12; // ett

  v4 = a1;
  *a1 = ((uint32_t)(uintptr_t)&off_2096EB0);
  a1[1] = -65535;
  a1[2] = 0;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v6 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         28);
  result = hkBufferedStreamWriter::Construct(v6, a2, a3, a4);
  v8 = a1[2];
  if ( v8 == 0 || v6 == v8 || *(uint16_t *)(v8 + 6) == 0 )
    goto LABEL_6;
  do
  {
    v10 = *(uint32_t *)(v8 + 4);
    HIWORD(v9) = HIWORD(v10);
    LOWORD(v9) = 0;
    v11 = v9 | (uint16_t)(v10 - 1);
    v12 = v10;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v8 + 4), v12, v11);
  }
  while ( v12 != result );
  v4 = a1;
  if ( (uint16_t)v11 == 0 )
  {
    result = G4_VCALL<int>(v8, 16);
    a1[2] = v6;
  }
  else
  {
LABEL_6:
    v4[2] = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::Construct  (binary VA: 0x154f8c0)
// Original: hkOstream::hkOstream
// ----------------------------------------------------------------------------
void hkOstream::Construct(hkOstream::Self *self, hkMemoryTrack::Self *a2)
{
  int address;
  uint32_t *v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  uint32_t *v9;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096EB0);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   16);
  v3[1] = -65535;
  *v3 = ((uint32_t)(uintptr_t)&off_2097A48);
  v3[2] = (uint32_t)(uintptr_t)(a2);
  v3[3] = 1;
  v4 = *((uint32_t *)self + 2);
  if ( v4 == 0 )
    goto LABEL_7;
  if ( v3 == (uint32_t *)v4 )
    goto LABEL_7;
  if ( *(uint16_t *)(v4 + 6) == 0 )
    goto LABEL_7;
  v9 = v3;
  do
  {
    v6 = *(uint32_t *)(v4 + 4);
    HIWORD(v5) = HIWORD(v6);
    LOWORD(v5) = 0;
    v7 = v5 | (uint16_t)(v6 - 1);
    v8 = v6;
  }
  while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
  v3 = v9;
  if ( (uint16_t)v7 == 0 )
  {
    G4_VCALL<void>(v4, 16);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v9);
  }
  else
  {
LABEL_7:
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v3);
  }
}

// ----------------------------------------------------------------------------
// Function: hkOstream::isOk  (binary VA: 0x154fae0)
// Original: hkOstream::isOk
// ----------------------------------------------------------------------------
hkOstream::Self * hkOstream::isOk(hkOstream::Self *self, int a2)
{
  hkOstream::Self *result;
  int v3;
  uint8_t v4[5];

  result = self;
  v3 = *(uint32_t *)(a2 + 8);
  if ( v3 != 0 )
  {
    (*(void (**)(uint8_t *))(*(uint32_t *)v3 + 20))(v4);
    *(uint8_t *)self = v4[0] != 0;
    return self;
  }
  else
  {
    *(uint8_t *)self = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl  (binary VA: 0x154fb30)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl(int a1, char *a2)
{
  int v2;
  void (*v3)(int, uint8_t *, int);
  int v4;
  typedef const char *_g4_t_v6;
  typedef uint8_t _g4_t_v7[10052];
  enum : size_t {
    _g4_s0 = 10144u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  hkString::snprintf((hkString::Self *)v7, 0x2728u, "%p", a2);
  v2 = *(uint32_t *)(a1 + 8);
  v3 = *(void (**)(int, uint8_t *, int))(*(uint32_t *)v2 + 24);
  v4 = hkString::strLen((hkString::Self *)v7, v6);
  v3(v2, v7, v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl  (binary VA: 0x154fbb0)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl(int a1, char a2)
{
  char *v2;
  int v3;
  void (*v4)(int, char *, int);
  int v5;
  const char *v7;

  v2 = "true";
  if ( a2 == 0 )
    v2 = "false";
  v3 = *(uint32_t *)(a1 + 8);
  v4 = *(void (**)(int, char *, int))(*(uint32_t *)v3 + 24);
  v5 = hkString::strLen((hkString::Self *)v2, v7);
  v4(v3, v2, v5);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl_ea154fc10  (binary VA: 0x154fc10)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl_ea154fc10(int a1, char a2)
{
  uint8_t v3[16];

  v3[0] = a2;
  (*(void (**)(uint32_t, uint8_t *, int))(**(uint32_t **)(a1 + 8) + 24))(*(uint32_t *)(a1 + 8), v3, 1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl  (binary VA: 0x154fc50)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl(int a1, hkString::Self *a2)
{
  int *v2;
  int v3;
  void (*v4)(int *, hkString::Self *, int);
  int v5;
  const char *v7;

  v2 = *(int **)(a1 + 8);
  v3 = *v2;
  if ( a2 != nullptr )
  {
    v4 = *(void (**)(int *, hkString::Self *, int))(v3 + 24);
    v5 = hkString::strLen(a2, v7);
    v4(v2, a2, v5);
  }
  else
  {
    (*(void (**)(int *, const char *, int))(v3 + 24))(v2, "(null)", 6);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl  (binary VA: 0x154fcd0)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl(int a1, int16_t a2)
{
  int v2;
  void (*v3)(int, uint8_t *, int);
  int v4;
  typedef const char *_g4_t_v6;
  typedef uint8_t _g4_t_v7[10052];
  enum : size_t {
    _g4_s0 = 10144u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  hkString::snprintf((hkString::Self *)v7, 0x2728u, "%i", (const char *)a2);
  v2 = *(uint32_t *)(a1 + 8);
  v3 = *(void (**)(int, uint8_t *, int))(*(uint32_t *)v2 + 24);
  v4 = hkString::strLen((hkString::Self *)v7, v6);
  v3(v2, v7, v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl  (binary VA: 0x154fd50)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl(int a1, uint16_t a2)
{
  int v2;
  void (*v3)(int, uint8_t *, int);
  int v4;
  typedef const char *_g4_t_v6;
  typedef uint8_t _g4_t_v7[10052];
  enum : size_t {
    _g4_s0 = 10144u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  hkString::snprintf((hkString::Self *)v7, 0x2728u, "%u", (const char *)a2);
  v2 = *(uint32_t *)(a1 + 8);
  v3 = *(void (**)(int, uint8_t *, int))(*(uint32_t *)v2 + 24);
  v4 = hkString::strLen((hkString::Self *)v7, v6);
  v3(v2, v7, v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl_ea154fdd0  (binary VA: 0x154fdd0)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl_ea154fdd0(int a1, char *a2)
{
  int v2;
  void (*v3)(int, uint8_t *, int);
  int v4;
  typedef const char *_g4_t_v6;
  typedef uint8_t _g4_t_v7[10052];
  enum : size_t {
    _g4_s0 = 10144u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  hkString::snprintf((hkString::Self *)v7, 0x2728u, "%i", a2);
  v2 = *(uint32_t *)(a1 + 8);
  v3 = *(void (**)(int, uint8_t *, int))(*(uint32_t *)v2 + 24);
  v4 = hkString::strLen((hkString::Self *)v7, v6);
  v3(v2, v7, v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl_ea154fe50  (binary VA: 0x154fe50)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl_ea154fe50(int a1, char *a2)
{
  int v2;
  void (*v3)(int, uint8_t *, int);
  int v4;
  typedef const char *_g4_t_v6;
  typedef uint8_t _g4_t_v7[10052];
  enum : size_t {
    _g4_s0 = 10144u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  hkString::snprintf((hkString::Self *)v7, 0x2728u, "%u", a2);
  v2 = *(uint32_t *)(a1 + 8);
  v3 = *(void (**)(int, uint8_t *, int))(*(uint32_t *)v2 + 24);
  v4 = hkString::strLen((hkString::Self *)v7, v6);
  v3(v2, v7, v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl  (binary VA: 0x154fed0)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl(int a1, float *a2)
{
  int v2;
  void (*v3)(int, uint8_t *, int);
  int v4;
  typedef const char *_g4_t_v6;
  typedef uint8_t _g4_t_v7[10052];
  enum : size_t {
    _g4_s0 = 10160u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v7)) > _g4_s1 ? (40u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);

  hkString::snprintf((hkString::Self *)v7, 0x2728u, "%f", (const char *)COERCE_UNSIGNED_INT64(*a2));
  v2 = *(uint32_t *)(a1 + 8);
  v3 = *(void (**)(int, uint8_t *, int))(*(uint32_t *)v2 + 24);
  v4 = hkString::strLen((hkString::Self *)v7, v6);
  v3(v2, v7, v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl  (binary VA: 0x154ff50)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl(int a1, const char **a2)
{
  int v2;
  void (*v3)(int, uint8_t *, int);
  int v4;
  typedef const char *_g4_t_v6;
  typedef uint8_t _g4_t_v7[10052];
  enum : size_t {
    _g4_s0 = 10160u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v7)) > _g4_s1 ? (40u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);

  hkString::snprintf((hkString::Self *)v7, 0x2728u, "%f", *a2);
  v2 = *(uint32_t *)(a1 + 8);
  v3 = *(void (**)(int, uint8_t *, int))(*(uint32_t *)v2 + 24);
  v4 = hkString::strLen((hkString::Self *)v7, v6);
  v3(v2, v7, v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl  (binary VA: 0x154ffd0)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl(int a1, float a2)
{
  int v2;
  void (*v3)(int, uint8_t *, int);
  int v4;
  typedef const char *_g4_t_v6;
  typedef uint8_t _g4_t_v7[10052];
  enum : size_t {
    _g4_s0 = 10160u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v7)) > _g4_s1 ? (40u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);

  hkString::snprintf((hkString::Self *)v7, 0x2728u, "%f", (const char *)COERCE_UNSIGNED_INT64(a2));
  v2 = *(uint32_t *)(a1 + 8);
  v3 = *(void (**)(int, uint8_t *, int))(*(uint32_t *)v2 + 24);
  v4 = hkString::strLen((hkString::Self *)v7, v6);
  v3(v2, v7, v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl_ea1550050  (binary VA: 0x1550050)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl_ea1550050(int a1, char *a2)
{
  int v2;
  void (*v3)(int, uint8_t *, int);
  int v4;
  typedef const char *_g4_t_v6;
  typedef uint8_t _g4_t_v7[10052];
  enum : size_t {
    _g4_s0 = 10160u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v7)) > _g4_s1 ? (40u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);

  hkString::snprintf((hkString::Self *)v7, 0x2728u, "%lli", a2);
  v2 = *(uint32_t *)(a1 + 8);
  v3 = *(void (**)(int, uint8_t *, int))(*(uint32_t *)v2 + 24);
  v4 = hkString::strLen((hkString::Self *)v7, v6);
  v3(v2, v7, v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl_ea15500e0  (binary VA: 0x15500e0)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl_ea15500e0(int a1, char *a2)
{
  int v2;
  void (*v3)(int, uint8_t *, int);
  int v4;
  typedef const char *_g4_t_v6;
  typedef uint8_t _g4_t_v7[10052];
  enum : size_t {
    _g4_s0 = 10160u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v7)) > _g4_s1 ? (40u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);

  hkString::snprintf((hkString::Self *)v7, 0x2728u, "%llu", a2);
  v2 = *(uint32_t *)(a1 + 8);
  v3 = *(void (**)(int, uint8_t *, int))(*(uint32_t *)v2 + 24);
  v4 = hkString::strLen((hkString::Self *)v7, v6);
  v3(v2, v7, v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::printf  (binary VA: 0x1550170)
// Original: hkOstream::printf
// ----------------------------------------------------------------------------
int hkOstream::printf(hkOstream::Self *self, char *a2, ...)
{
  int v2;
  int (*v3)(int, uint8_t *, int);
  int v4;
  va_list va;
  typedef const char *_g4_t_v6;
  typedef char *_g4_t_v7;
  typedef uint8_t _g4_t_v8[10052];
  enum : size_t {
    _g4_s0 = 10144u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  va_start(va, a2);
  hkString::vsnprintf((hkString::Self *)v8, 0x2728u, a2, va, v7);
  v2 = *((uint32_t *)self + 2);
  v3 = *(int (**)(int, uint8_t *, int))(*(uint32_t *)v2 + 24);
  v4 = hkString::strLen((hkString::Self *)v8, v6);
  return v3(v2, v8, v4);
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl  (binary VA: 0x15501e0)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
hkOstream::Self * hkOstream::opShl(hkOstream::Self *a1, float *a2)
{
  hkOstream::printf(a1, "[%g,%g,%g,%g]", *a2, a2[1], a2[2], a2[3]);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl  (binary VA: 0x1550240)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
hkOstream::Self * hkOstream::opShl(hkOstream::Self *a1, double *a2)
{
  hkOstream::printf(a1, "[%g,%g,%g,%g]", *a2, a2[1], a2[2], a2[3]);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl_ea15502a0  (binary VA: 0x15502a0)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
hkOstream::Self * hkOstream::opShl_ea15502a0(hkOstream::Self *a1, float *a2)
{
  hkOstream::printf(a1, "[%f,%f,%f,(%f)]", *a2, a2[1], a2[2], a2[3]);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl_ea1550300  (binary VA: 0x1550300)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
hkOstream::Self * hkOstream::opShl_ea1550300(hkOstream::Self *a1, double *a2)
{
  hkOstream::printf(a1, "[%f,%f,%f,(%f)]", *a2, a2[1], a2[2], a2[3]);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl  (binary VA: 0x1550360)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
hkOstream::Self * hkOstream::opShl(hkOstream::Self *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  double v6;

  v2 = 0;
  v3 = a2;
  do
  {
    v4 = v3 - a2;
    ++v2;
    v6 = *(float *)(v3 + 32);
    v3 += 4;
    hkOstream::printf(a1, "|%f,%f,%f|\n", *(float *)(v3 - 4), *(float *)(v4 + a2 + 16), v6);
  }
  while ( v2 != 3 );
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl_ea15503f0  (binary VA: 0x15503f0)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
hkOstream::Self * hkOstream::opShl_ea15503f0(hkOstream::Self *a1, int a2)
{
  hkOstream::Self *v2;

  v2 = hkOstream::opShl(a1, a2);
  return hkOstream::opShl(v2, (float *)(a2 + 48));
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl_ea1550430  (binary VA: 0x1550430)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
hkOstream::Self * hkOstream::opShl_ea1550430(hkOstream::Self *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int64_t v6;
  int64_t v7;
  int v8;

  v2 = 0;
  v3 = a2;
  v4 = a2 + 64;
  do
  {
    ++v2;
    v7 = *(uint64_t *)(v3 - a2 + v4);
    v8 = v4;
    v6 = *(uint64_t *)(v3 + 32);
    v3 += 8;
    hkOstream::printf(a1, "|%f,%f,%f|\n", *(uint32_t *)(v3 - 8), *(uint32_t *)(v3 - 4), v6, v7);
    v4 = v8;
  }
  while ( v2 != 3 );
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl_ea15504c0  (binary VA: 0x15504c0)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
hkOstream::Self * hkOstream::opShl_ea15504c0(hkOstream::Self *a1, int a2)
{
  hkOstream::Self *v2;

  v2 = hkOstream::opShl(a1, a2);
  return hkOstream::opShl(v2, (double *)(a2 + 96));
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl  (binary VA: 0x1550500)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl(int a1, hkStringPtr::Self *a2)
{
  int v2;
  void (*v3)(int, unsigned int, int);
  int Length;

  if ( (*(uint32_t *)a2 & 0xFFFFFFFE) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 8);
    v3 = *(void (**)(int, unsigned int, int))(*(uint32_t *)v2 + 24);
    Length = hkStringPtr::getLength(a2);
    v3(v2, *(uint32_t *)a2 & 0xFFFFFFFE, Length);
  }
  else
  {
    (*(void (**)(uint32_t, const char *, int))(**(uint32_t **)(a1 + 8) + 24))(*(uint32_t *)(a1 + 8), "(null)", 6);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::opShl  (binary VA: 0x1550590)
// Original: hkOstream::operator<<
// ----------------------------------------------------------------------------
int hkOstream::opShl(int a1, uint32_t *a2)
{
  if ( *a2 != 0 )
    (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(a1 + 8) + 24))(*(uint32_t *)(a1 + 8), *a2, a2[1] - 1);
  else
    (*(void (**)(uint32_t, const char *, int))(**(uint32_t **)(a1 + 8) + 24))(*(uint32_t *)(a1 + 8), "(null)", 6);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkOstream::flush  (binary VA: 0x1550600)
// Original: hkOstream::flush
// ----------------------------------------------------------------------------
int hkOstream::flush(hkOstream::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 2) + 28))(*((uint32_t *)self + 2));
}

// ----------------------------------------------------------------------------
// Function: hkOstream::write  (binary VA: 0x1550620)
// Original: hkOstream::write
// ----------------------------------------------------------------------------
int hkOstream::write(hkOstream::Self *self, const char *a2, int a3)
{
  return (*(int (**)(uint32_t, const char *, int))(**((uint32_t **)self + 2) + 24))(*((uint32_t *)self + 2), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkOstream::setStreamWriter  (binary VA: 0x1550650)
// Original: hkOstream::setStreamWriter
// ----------------------------------------------------------------------------
int hkOstream::setStreamWriter(hkOstream::Self *self, hkStreamWriter::Self *a2)
{
  hkStreamWriter::Self *v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int result;
  int32_t v8; // ett
  int v9;
  int32_t v10; // kr04_4

  v2 = a2;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v10 = *((uint32_t *)a2 + 1);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v10, v9 | (uint16_t)(v10 + 1));
    }
    while ( v10 != result );
  }
  v3 = *((uint32_t *)self + 2);
  if ( v3 == 0 || *(uint16_t *)(v3 + 6) == 0 )
    goto LABEL_7;
  do
  {
    v5 = *(uint32_t *)(v3 + 4);
    HIWORD(v4) = HIWORD(v5);
    LOWORD(v4) = 0;
    v6 = v4 | (uint16_t)(v5 - 1);
    v8 = v5;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v8, v6);
  }
  while ( v8 != result );
  v2 = a2;
  if ( (uint16_t)v6 == 0 )
  {
    result = G4_VCALL<int>(v3, 16);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
LABEL_7:
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCustomAttributes::Attribute::staticClass  (binary VA: 0x15507a0)
// Original: hkCustomAttributes::Attribute::staticClass
// ----------------------------------------------------------------------------
void * hkCustomAttributes::Attribute::staticClass()
{
  return &hkCustomAttributesAttributeClass;
}

// ----------------------------------------------------------------------------
// Function: hkCustomAttributes::staticClass  (binary VA: 0x15507c0)
// Original: hkCustomAttributes::staticClass
// ----------------------------------------------------------------------------
void * hkCustomAttributes::staticClass()
{
  return &hkCustomAttributesClass;
}

// ----------------------------------------------------------------------------
// Function: hkQTransformf::staticClass  (binary VA: 0x1550970)
// Original: hkQTransformf::staticClass
// ----------------------------------------------------------------------------
void * hkQTransformf::staticClass()
{
  return &hkQTransformfClass;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryAllocator::resetPeakMemoryStatistics  (binary VA: 0x1550a60)
// Original: hkMemoryAllocator::resetPeakMemoryStatistics
// ----------------------------------------------------------------------------
void hkMemoryAllocator::resetPeakMemoryStatistics()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryAllocator::Destroy  (binary VA: 0x1550a70)
// Original: hkMemoryAllocator::~hkMemoryAllocator
// ----------------------------------------------------------------------------
void hkMemoryAllocator::Destroy(hkMemoryAllocator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096F08);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryAllocator::Destroy_ea1550a90  (binary VA: 0x1550a90)
// Original: hkMemoryAllocator::~hkMemoryAllocator
// ----------------------------------------------------------------------------
void hkMemoryAllocator::Destroy_ea1550a90(hkMemoryAllocator::Self *self)
{
  hkMemoryAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryAllocator::bufAlloc  (binary VA: 0x1550ac0)
// Original: hkMemoryAllocator::bufAlloc
// ----------------------------------------------------------------------------
int hkMemoryAllocator::bufAlloc(hkMemoryAllocator::Self *self, int *a2)
{
  return G4_VCALL<int>(self, 8, *a2);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryAllocator::bufFree  (binary VA: 0x1550ae0)
// Original: hkMemoryAllocator::bufFree
// ----------------------------------------------------------------------------
int hkMemoryAllocator::bufFree(hkMemoryAllocator::Self *self, void *a2, int a3)
{
  return G4_VCALL<int>(self, 12, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryAllocator::blockAllocBatch  (binary VA: 0x1550b10)
// Original: hkMemoryAllocator::blockAllocBatch
// ----------------------------------------------------------------------------
void * hkMemoryAllocator::blockAllocBatch(hkMemoryAllocator::Self *self, void **a2, void *a3, int a4)
{
  void *v4;
  void *result;

  v4 = nullptr;
  result = a3;
  if ( (int)(uintptr_t)(a3) > 0 )
  {
    do
    {
      result = (void *)G4_VCALL<int>(self, 8, a4);
      a2[(uint32_t)(uintptr_t)(v4)] = result;
      v4 = (char *)v4 + 1;
    }
    while ( v4 != a3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryAllocator::blockFreeBatch  (binary VA: 0x1550b60)
// Original: hkMemoryAllocator::blockFreeBatch
// ----------------------------------------------------------------------------
void hkMemoryAllocator::blockFreeBatch(hkMemoryAllocator::Self *self, void **a2, int a3, int a4)
{
  int v4;
  void *v5;

  v4 = 0;
  if ( a3 > 0 )
  {
    do
    {
      v5 = a2[v4];
      if ( v5 != nullptr )
        G4_VCALL<void>(self, 12, v5, a4);
      ++v4;
    }
    while ( v4 != a3 );
  }
}

// ----------------------------------------------------------------------------
// Function: hkMemoryAllocator::bufRealloc  (binary VA: 0x1550bb0)
// Original: hkMemoryAllocator::bufRealloc
// ----------------------------------------------------------------------------
hkMemUtil::Self * hkMemoryAllocator::bufRealloc(hkMemoryAllocator::Self *self, void *a2, signed int a3, int *a4)
{
  hkMemUtil::Self *v4;
  size_t v5;

  v4 = (hkMemUtil::Self *)G4_VCALL<int>(self, 16, a4);
  if ( v4 != nullptr )
  {
    v5 = *a4;
    if ( *a4 > a3 )
      v5 = a3;
    hkMemUtil::memCpy(v4, a2, v5);
  }
  G4_VCALL<void>(self, 20, a2, a3);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkBufferedStreamWriter::getClassType  (binary VA: 0x1550c30)
// Original: hkBufferedStreamWriter::getClassType
// ----------------------------------------------------------------------------
void * hkBufferedStreamWriter::getClassType()
{
  return &hkBufferedStreamWriterClass;
}

// ----------------------------------------------------------------------------
// Function: hkBufferedStreamWriter::seekTellSupported  (binary VA: 0x1550c50)
// Original: hkBufferedStreamWriter::seekTellSupported
// ----------------------------------------------------------------------------
hkBufferedStreamWriter::Self * hkBufferedStreamWriter::seekTellSupported(hkBufferedStreamWriter::Self *self, int a2)
{
  hkBufferedStreamWriter::Self *result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  result = self;
  v3 = *(uint32_t *)(a2 + 8);
  if ( v3 != 0 )
  {
    (*(void (**)(hkBufferedStreamWriter::Self *, int, int, hkBufferedStreamWriter::Self *, int, int, int))(*(uint32_t *)v3 + 32))(
      self,
      v3,
      v4,
      self,
      v6,
      v7,
      v8);
    return (hkBufferedStreamWriter::Self *)v5;
  }
  else
  {
    *(uint8_t *)self = 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkBufferedStreamWriter::tell  (binary VA: 0x1550c90)
// Original: hkBufferedStreamWriter::tell
// ----------------------------------------------------------------------------
int hkBufferedStreamWriter::tell(hkBufferedStreamWriter::Self *self)
{
  int v1;
  int v2;

  v1 = *((uint32_t *)self + 2);
  if ( v1 == 0 )
  {
    v2 = 0;
    return *((uint32_t *)self + 4) + v2;
  }
  v2 = (*(int (**)(uint32_t))(*(uint32_t *)v1 + 40))(*((uint32_t *)self + 2));
  if ( v2 >= 0 )
    return *((uint32_t *)self + 4) + v2;
  return -1;
}

// ----------------------------------------------------------------------------
// Function: hkBufferedStreamWriter::isBuffered  (binary VA: 0x1550cd0)
// Original: hkBufferedStreamWriter::isBuffered
// ----------------------------------------------------------------------------
hkBufferedStreamWriter::Self * hkBufferedStreamWriter::isBuffered(hkBufferedStreamWriter::Self *self)
{
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkBufferedStreamWriter::isOk  (binary VA: 0x1550ce0)
// Original: hkBufferedStreamWriter::isOk
// ----------------------------------------------------------------------------
hkBufferedStreamWriter::Self * hkBufferedStreamWriter::isOk(hkBufferedStreamWriter::Self *self, uint32_t *a2)
{
  hkBufferedStreamWriter::Self *result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  result = self;
  v3 = a2[2];
  if ( v3 != 0 )
  {
    (*(void (**)(hkBufferedStreamWriter::Self *, int, int, hkBufferedStreamWriter::Self *, int, int, int))(*(uint32_t *)v3 + 20))(
      self,
      v3,
      v4,
      self,
      v6,
      v7,
      v8);
    return (hkBufferedStreamWriter::Self *)v5;
  }
  else
  {
    *(uint8_t *)self = a2[4] != a2[5];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkBufferedStreamWriter::Construct  (binary VA: 0x1550d20)
// Original: hkBufferedStreamWriter::hkBufferedStreamWriter
// ----------------------------------------------------------------------------
void hkBufferedStreamWriter::Construct(hkBufferedStreamWriter::Self *self, hkStreamWriter::Self *a2, hkMemoryAllocator::Self *a3)
{
  hkBufferedStreamWriter::Self *v3;
  int v4;
  int32_t v5; // kr00_4
  int address;
  int v7;

  v3 = self;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096F68);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  *((uint8_t *)self + 24) = 1;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v5 = *((uint32_t *)a2 + 1);
      HIWORD(v4) = HIWORD(v5);
      LOWORD(v4) = 0;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v5, v4 | (uint16_t)(v5 + 1)) );
    v3 = self;
  }
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  *((uint32_t *)v3 + 3) = hkMemoryRouter::alignedAlloc(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), a3, 64, v7);
  *((uint32_t *)v3 + 4) = 0;
  *((uint32_t *)v3 + 5) = (uint32_t)(uintptr_t)(a3);
}

// ----------------------------------------------------------------------------
// Function: hkBufferedStreamWriter::Construct  (binary VA: 0x1550dd0)
// Original: hkBufferedStreamWriter::hkBufferedStreamWriter
// ----------------------------------------------------------------------------
int hkBufferedStreamWriter::Construct(int a1, hkString::Self *a2, size_t a3, char a4)
{
  int result;
  int v5;

  result = a1;
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2096F68);
  *(uint32_t *)(a1 + 8) = 0;
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)(a1 + 16) = 0;
  if ( a4 != 0 )
  {
    *(uint8_t *)(a1 + 24) = 0;
    *(uint32_t *)(a1 + 20) = a3 - 1;
    return (int)(uintptr_t)(hkString::memSet(a2, nullptr, a3, v5));
  }
  else
  {
    *(uint32_t *)(a1 + 20) = a3;
    *(uint8_t *)(a1 + 24) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkBufferedStreamWriter::flushBuffer  (binary VA: 0x1550e50)
// Original: hkBufferedStreamWriter::flushBuffer
// ----------------------------------------------------------------------------
int hkBufferedStreamWriter::flushBuffer(hkBufferedStreamWriter::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  v1 = *((uint32_t *)self + 2);
  if ( v1 == 0 )
    return 0;
  v2 = *((uint32_t *)self + 4);
  v3 = 0;
  if ( v2 > 0 )
  {
    while ( 1 )
    {
      v4 = G4_VCALL<int>(v1, 24, v3 + *((uint32_t *)self + 3), v2 - v3);
      v3 += v4;
      if ( v4 == 0 )
        return v3;
      if ( v2 <= v3 )
        goto LABEL_8;
      v1 = *((uint32_t *)self + 2);
    }
  }
  else
  {
LABEL_8:
    *((uint32_t *)self + 4) = 0;
    return v3;
  }
}

// ----------------------------------------------------------------------------
// Function: hkBufferedStreamWriter::write  (binary VA: 0x1550ed0)
// Original: hkBufferedStreamWriter::write
// ----------------------------------------------------------------------------
signed int hkBufferedStreamWriter::write(hkBufferedStreamWriter::Self *self, char *a2, signed int a3)
{
  signed int v4;
  int v5;
  signed int v6;
  int v7;
  int v8;
  int v10;
  int v11;

  v4 = a3;
  v5 = *((uint32_t *)self + 4);
  v6 = *((uint32_t *)self + 5) - v5;
  if ( a3 > v6 )
  {
    while ( 1 )
    {
      hkString::memCpy((hkString::Self *)(*((uint32_t *)self + 3) + v5), a2, v6, v6);
      v7 = v11;
      v8 = v11 + *((uint32_t *)self + 4);
      a2 += v11;
      *((uint32_t *)self + 4) = v8;
      v10 = v8;
      v4 -= v7;
      if ( v8 != hkBufferedStreamWriter::flushBuffer(self) )
        return a3 - v4;
      v5 = *((uint32_t *)self + 4);
      v6 = *((uint32_t *)self + 5) - v5;
      if ( v4 <= v6 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    hkString::memCpy((hkString::Self *)(*((uint32_t *)self + 3) + v5), a2, v4, v10);
    *((uint32_t *)self + 4) += v4;
    return a3;
  }
}

// ----------------------------------------------------------------------------
// Function: hkBufferedStreamWriter::flush  (binary VA: 0x1550f80)
// Original: hkBufferedStreamWriter::flush
// ----------------------------------------------------------------------------
int hkBufferedStreamWriter::flush(hkBufferedStreamWriter::Self *self)
{
  int result;

  hkBufferedStreamWriter::flushBuffer(self);
  result = *((uint32_t *)self + 2);
  if ( result != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)result + 28))(*((uint32_t *)self + 2));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkBufferedStreamWriter::Destroy  (binary VA: 0x1550fc0)
// Original: hkBufferedStreamWriter::~hkBufferedStreamWriter
// ----------------------------------------------------------------------------
void hkBufferedStreamWriter::Destroy(hkMemoryAllocator::Self **self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int address;
  void *v7;

  *self = (hkMemoryAllocator::Self *)((uint32_t)(uintptr_t)&off_2096F68);
  hkBufferedStreamWriter::flush((hkBufferedStreamWriter::Self *)self);
  v1 = (int)(uintptr_t)(*(self + 2));
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
  if ( *((uint8_t *)self + 24) != 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    hkMemoryRouter::alignedFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), *(self + 3), v7);
  }
  *self = (hkMemoryAllocator::Self *)((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkBufferedStreamWriter::Destroy_ea1551070  (binary VA: 0x1551070)
// Original: hkBufferedStreamWriter::~hkBufferedStreamWriter
// ----------------------------------------------------------------------------
void hkBufferedStreamWriter::Destroy_ea1551070(hkMemoryAllocator::Self **self)
{
  int v1;
  int v2;

  hkBufferedStreamWriter::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkBufferedStreamWriter::seek  (binary VA: 0x15510d0)
// Original: hkBufferedStreamWriter::seek
// ----------------------------------------------------------------------------
int * hkBufferedStreamWriter::seek(int *a1, hkBufferedStreamWriter::Self *a2, int a3, int a4)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  if ( *((uint32_t *)a2 + 2) != 0 )
  {
    hkBufferedStreamWriter::flushBuffer(a2);
    (*(void (**)(int *, uint32_t, int, int, int, int, int, int))(**((uint32_t **)a2 + 2) + 36))(
      a1,
      *((uint32_t *)a2 + 2),
      a3,
      a4,
      v7,
      v8,
      v9,
      v10);
    return a1;
  }
  switch ( a4 )
  {
    case 1:
      a3 += *((uint32_t *)a2 + 4);
      break;
    case 2:
      a3 = *((uint32_t *)a2 + 4) - a3;
      break;
    case 0:
      break;
    default:
LABEL_6:
      v5 = 0;
      goto LABEL_7;
  }
  if ( a3 < 0 )
    goto LABEL_6;
  v5 = *((uint32_t *)a2 + 5);
  v6 = 1;
  if ( a3 <= v5 )
  {
    LOBYTE(v6) = 0;
    *((uint32_t *)a2 + 4) = a3;
    *a1 = v6;
    return a1;
  }
LABEL_7:
  *((uint32_t *)a2 + 4) = v5;
  *a1 = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkTraceStream::Title::staticClass  (binary VA: 0x1551230)
// Original: hkTraceStream::Title::staticClass
// ----------------------------------------------------------------------------
void * hkTraceStream::Title::staticClass()
{
  return &hkTraceStreamTitleClass;
}

// ----------------------------------------------------------------------------
// Function: hkSingletonInitNode::populate  (binary VA: 0x1551320)
// Original: hkSingletonInitNode::populate
// ----------------------------------------------------------------------------
void hkSingletonInitNode::populate(hkSingletonInitNode::Self *self, hkSingletonInitNode::Self *a2)
{
  hkSingletonInitNode::Self *v2;
  hkSingletonInitNode::Self *v3;
  int v4;
  int *v5;
  int v6;
  volatile int32_t *v7;
  int i;
  int32_t v9;
  int v10;
  typedef int _g4_t_v11;
  typedef hkString::Self *_g4_t_v12[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  v2 = a2;
  v3 = self;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct(v12);
  if ( a2 == nullptr )
    goto LABEL_10;
  do
  {
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
      (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v12,
      *(hkString::Self **)v2,
      (unsigned int)(uintptr_t)(v2));
    v2 = *((hkSingletonInitNode::Self **)v2 + 2);
  }
  while ( v2 != nullptr );
  if ( self != nullptr )
  {
    do
    {
      v4 = hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
             (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v12,
             *(hkString::Self **)v3,
             0);
      if ( v4 != 0 )
      {
        **((uint32_t **)v3 + 3) = **(uint32_t **)(v4 + 12);
        v5 = *((int **)v3 + 3);
        v6 = *v5;
        if ( *v5 != 0 && *(uint16_t *)(v6 + 6) != 0 )
        {
          v7 = (volatile int32_t *)(v6 + 4);
          v11 = *v5;
          for ( i = *v5; ; i = v11 )
          {
            v9 = *(uint32_t *)(i + 4);
            HIWORD(v10) = HIWORD(v9);
            LOWORD(v10) = 0;
            if ( v9 == __sync_val_compare_and_swap(v7, v9, v10 | (uint16_t)(v9 + 1)) )
              break;
          }
        }
      }
      v3 = *((hkSingletonInitNode::Self **)v3 + 2);
LABEL_10:
      ;
    }
    while ( v3 != nullptr );
  }
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v12);
}

// ----------------------------------------------------------------------------
// Function: hkSingletonInitNode::depopulate  (binary VA: 0x15513f0)
// Original: hkSingletonInitNode::depopulate
// ----------------------------------------------------------------------------
void hkSingletonInitNode::depopulate(hkSingletonInitNode::Self *self, hkSingletonInitNode::Self *a2)
{
  hkSingletonInitNode::Self *v2;
  hkSingletonInitNode::Self *v3;
  int *v4;
  int v5;
  int v6;
  int32_t v7; // kr00_4
  int32_t v8;
  int32_t v9; // ett
  hkString::Self *v10[11];
  hkSingletonInitNode::Self *thisa;

  v2 = a2;
  v3 = self;
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Construct(v10);
  if ( a2 == nullptr )
    goto LABEL_14;
  do
  {
    hkCachedHashMap_hkStringMapOperations_hk_b9db0c::insert(
      (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v10,
      *(hkString::Self **)v2,
      (unsigned int)(uintptr_t)(v2));
    v2 = *((hkSingletonInitNode::Self **)v2 + 2);
  }
  while ( v2 != nullptr );
  if ( self != nullptr )
  {
    do
    {
      if ( hkCachedHashMap_hkStringMapOperations_hk_b9db0c::getWithDefault(
             (hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v10,
             *(hkString::Self **)v3,
             0) != 0 )
      {
        v4 = *((int **)v3 + 3);
        v5 = *v4;
        if ( *v4 != 0 && *(uint16_t *)(v5 + 6) != 0 )
        {
          thisa = v3;
          do
          {
            v7 = *(uint32_t *)(v5 + 4);
            HIWORD(v6) = HIWORD(v7);
            LOWORD(v6) = 0;
            v8 = v6 | (uint16_t)(v7 - 1);
            v9 = v7;
          }
          while ( v9 != __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v9, v8) );
          v3 = thisa;
          if ( (uint16_t)v8 == 0 )
            G4_VCALL<void>(v5, 16);
          v4 = *((int **)thisa + 3);
        }
        *v4 = 0;
      }
      v3 = *((hkSingletonInitNode::Self **)v3 + 2);
LABEL_14:
      ;
    }
    while ( v3 != nullptr );
  }
  hkCachedHashMap_hkStringMapOperations_hk_b9db0c::Destroy((hkCachedHashMap<hkStringMapOperations, hkContainerHeapAllocator::Self> *)v10);
}

// ----------------------------------------------------------------------------
// Function: hkSingletonInitNode::findByName  (binary VA: 0x15514d0)
// Original: hkSingletonInitNode::findByName
// ----------------------------------------------------------------------------
hkSingletonInitNode::Self * hkSingletonInitNode::findByName(hkSingletonInitNode::Self *self, hkString::Self *a2)
{
  hkSingletonInitNode::Self *result;
  const char *v4;

  while ( *(uint32_t *)self == 0 || hkString::strCmp(a2, *(const char **)self, v4) != 0 )
  {
    result = *((hkSingletonInitNode::Self **)self + 2);
    if ( result == nullptr )
      return result;
    self = *((hkSingletonInitNode::Self **)self + 2);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDummySingleton::forceLinkage  (binary VA: 0x1551520)
// Original: hkDummySingleton::forceLinkage
// ----------------------------------------------------------------------------
void hkDummySingleton::forceLinkage()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDummySingleton::Destroy  (binary VA: 0x1551530)
// Original: hkDummySingleton::~hkDummySingleton
// ----------------------------------------------------------------------------
void hkDummySingleton::Destroy(hkDummySingleton::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkDummySingleton::Destroy_ea1551550  (binary VA: 0x1551550)
// Original: hkDummySingleton::~hkDummySingleton
// ----------------------------------------------------------------------------
void hkDummySingleton::Destroy_ea1551550(hkDummySingleton::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkBaseSystem::initSingletons  (binary VA: 0x1551600)
// Original: hkBaseSystem::initSingletons
// ----------------------------------------------------------------------------
int hkBaseSystem::initSingletons()
{
  int v0;
  uint32_t *v1;
  int (*v2)(void);
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int result;
  int v13;
  typedef int _g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v15)) > _g4_s1 ? (24u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v16)) > _g4_s2 ? (28u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v17)) > _g4_s3 ? (32u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v18)) > _g4_s4 ? (36u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v19)) > _g4_s5 ? (40u + sizeof(_g4_t_v19)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);

  v17 = 0;
  v18 = 0;
  v19 = 0x80000000;
  v0 = hkSingletonInitList[0];
  if ( hkSingletonInitList[0] != 0 )
  {
    v15 = hkSingletonInitList;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( **(uint32_t **)(v0 + 12) == 0 )
        {
          v2 = *(int (**)(void))(v0 + 4);
          if ( v2 != nullptr )
            break;
        }
        v1 = (uint32_t *)(v0 + 8);
        v0 = *(uint32_t *)(v0 + 8);
        v15 = v1;
LABEL_4:
        if ( v0 == 0 )
          goto LABEL_9;
      }
      v3 = v2();
      if ( v3 == 0 )
      {
        v13 = v18;
        if ( v18 == (v19 & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerTempAllocator::s_alloc, (hkMemoryAllocator::Self *)&v17, 4, v14);
          v13 = v18;
        }
        *(uint32_t *)(v17 + 4 * v13) = v0;
        ++v18;
        v0 = *(uint32_t *)(v0 + 8);
        *(uint32_t *)(*v15 + 8) = 0;
        *v15 = v0;
        goto LABEL_4;
      }
      **(uint32_t **)(v0 + 12) = v3;
      v4 = (uint32_t *)(v0 + 8);
      v0 = *(uint32_t *)(v0 + 8);
      v15 = v4;
      if ( v0 == 0 )
        goto LABEL_9;
    }
  }
  v5 = 0;
  v15 = hkSingletonInitList;
  while ( v5 != 0 )
  {
    v6 = v5 - 1;
    if ( v5 - 1 >= 0 )
    {
      v7 = 4 * v6;
      do
      {
        v16 = v7;
        v8 = *(uint32_t *)(v17 + v7);
        v9 = (*(int (**)(void))(v8 + 4))();
        if ( v9 != 0 )
        {
          **(uint32_t **)(v8 + 12) = v9;
          *v15 = v8;
          v15 = (uint32_t *)(v8 + 8);
          v10 = v18 - 1;
          if ( v6 != --v18 )
            *(uint32_t *)(v17 + v16) = *(uint32_t *)(v17 + 4 * v10);
        }
        --v6;
        v7 = v16 - 4;
      }
      while ( v6 != -1 );
LABEL_9:
      v5 = v18;
      continue;
    }
  }
  result = v19;
  v18 = 0;
  if ( v19 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             v17,
             4 * v19);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkBaseSystem::quitSingletons  (binary VA: 0x15517a0)
// Original: hkBaseSystem::quitSingletons
// ----------------------------------------------------------------------------
int hkBaseSystem::quitSingletons()
{
  int v0;
  int i;
  int v2;
  int v3;
  int v4;
  volatile int32_t **v5;
  volatile int32_t *v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett
  int result;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v13)) > _g4_s1 ? (24u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v15)) > _g4_s3 ? (36u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v16)) > _g4_s4 ? (40u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v17)) > _g4_s5 ? (44u + sizeof(_g4_t_v17)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  v14 = &v17;
  v15 = 0;
  v16 = -2147483520;
  v0 = hkSingletonInitList[0];
  if ( hkSingletonInitList[0] != 0 )
  {
    for ( i = 0; ; i = v2 )
    {
      v2 = i;
      if ( **(uint32_t **)(v0 + 12) != 0 && *(uint32_t *)(v0 + 4) != 0 )
      {
        if ( (v16 & 0x3FFFFFFF) == i )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v14,
            4,
            v12);
          i = v15;
        }
        v14[i] = v0;
        v2 = ++v15;
      }
      v0 = *(uint32_t *)(v0 + 8);
      if ( v0 == 0 )
        break;
    }
    v3 = v2 - 1;
    if ( v2 - 1 >= 0 )
    {
      v4 = 4 * v3;
      do
      {
        v5 = *(volatile int32_t ***)(*(int *)((char *)v14 + v4) + 12);
        v6 = *v5;
        if ( *((uint16_t *)*v5 + 3) != 0 )
        {
          v13 = v4;
          do
          {
            v8 = *((uint32_t *)v6 + 1);
            HIWORD(v7) = HIWORD(v8);
            LOWORD(v7) = 0;
            v9 = v7 | (uint16_t)(v8 - 1);
            v10 = v8;
          }
          while ( v10 != __sync_val_compare_and_swap(v6 + 1, v10, v9) );
          v4 = v13;
          if ( (uint16_t)v9 == 0 )
            G4_VCALL<void>(v6, 16);
          v5 = *(volatile int32_t ***)(*(int *)((char *)v14 + v13) + 12);
        }
        --v3;
        *v5 = nullptr;
        v4 -= 4;
      }
      while ( v3 != -1 );
    }
  }
  result = v16;
  v15 = 0;
  if ( v16 >= 0 )
    return (*(int (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v14,
             4 * v16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkBaseSystem::initThread  (binary VA: 0x1551910)
// Original: hkBaseSystem::initThread
// ----------------------------------------------------------------------------
hkBaseSystem::Self * hkBaseSystem::initThread(hkBaseSystem::Self *self, hkMemoryRouter::Self *a2)
{
  hkMonitorStream::Self *v3;
  hkMemoryRouter::Self *v4;

  hkMemoryRouter::replaceInstance(a2, v4);
  hkMonitorStream::init(v3);
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkBaseSystem::init  (binary VA: 0x1551950)
// Original: hkBaseSystem::init
// ----------------------------------------------------------------------------
hkBaseSystem::Self * hkBaseSystem::init(hkBaseSystem::Self *self, hkMemoryRouter::Self *a2, void (*a3)(const char *, void *), void *a4)
{
  int address;
  uint32_t *v6;
  volatile int32_t *v7;
  int v8;
  int32_t v9; // kr00_4
  int32_t v10;
  int32_t v11; // ett
  hkDefaultError::Self *v12;
  volatile int32_t *v13;
  int v14;
  int32_t v15; // kr04_4
  int32_t v16;
  int32_t v17; // ett
  typedef uint32_t *_g4_t_v18;
  typedef hkDefaultError::Self *_g4_t_v19;
  typedef uint8_t _g4_t_v20[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v19)) > _g4_s1 ? (0u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);

  if ( hkBaseSystemIsInitialized == 0 )
  {
    hkBaseSystem::initThread((hkBaseSystem::Self *)v20, a2);
    hkReferencedObject::initializeLock();
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v6 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                     *(uint32_t *)(*(uint32_t *)address + 44),
                     8);
    v6[1] = -65535;
    *v6 = ((uint32_t)(uintptr_t)&off_2096A08);
    v7 = (volatile int32_t *)hkSingleton<hkFileSystem::Self>::s_instance;
    if ( hkSingleton<hkFileSystem::Self>::s_instance != 0 && *(uint16_t *)(hkSingleton<hkFileSystem::Self>::s_instance + 6) != 0 )
    {
      v18 = v6;
      do
      {
        v9 = *((uint32_t *)v7 + 1);
        HIWORD(v8) = HIWORD(v9);
        LOWORD(v8) = 0;
        v10 = v8 | (uint16_t)(v9 - 1);
        v11 = v9;
      }
      while ( v11 != __sync_val_compare_and_swap(v7 + 1, v11, v10) );
      v6 = v18;
      if ( (uint16_t)v10 == 0 )
        G4_VCALL<void>(v7, 16);
    }
    hkSingleton<hkFileSystem::Self>::s_instance = v6;
    v12 = (hkDefaultError::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                              *(uint32_t *)(*(uint32_t *)address + 44),
                              44);
    hkDefaultError::Construct(v12, a3, a4);
    v13 = (volatile int32_t *)hkSingleton<hkError::Self>::s_instance;
    if ( hkSingleton<hkError::Self>::s_instance != 0 && *(uint16_t *)(hkSingleton<hkError::Self>::s_instance + 6) != 0 )
    {
      v19 = v12;
      do
      {
        v15 = *((uint32_t *)v13 + 1);
        HIWORD(v14) = HIWORD(v15);
        LOWORD(v14) = 0;
        v16 = v14 | (uint16_t)(v15 - 1);
        v17 = v15;
      }
      while ( v17 != __sync_val_compare_and_swap(v13 + 1, v17, v16) );
      v12 = v19;
      if ( (uint16_t)v16 == 0 )
        G4_VCALL<void>(v13, 16);
    }
    hkSingleton<hkError::Self>::s_instance = (uint32_t *)(v12);
    hkBaseSystem::initSingletons();
    (*(void (**)(uint32_t *))(*hkSingleton<hkDummySingleton::Self>::s_instance + 20))(hkSingleton<hkDummySingleton::Self>::s_instance);
    sub_69B360();
    hkBaseSystemIsInitialized = 1;
  }
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkBaseSystem::quitThread  (binary VA: 0x1551ae0)
// Original: hkBaseSystem::quitThread
// ----------------------------------------------------------------------------
hkBaseSystem::Self * hkBaseSystem::quitThread(hkBaseSystem::Self *self)
{
  hkMonitorStream::Self *v1;
  hkMemoryRouter::Self *v3;

  v1 = *(hkMonitorStream::Self **)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  if ( v1 != nullptr )
    hkMonitorStream::quit(v1);
  if ( *(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) != 0 )
    hkMemoryRouter::replaceInstance(nullptr, v3);
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkBaseSystem::quit  (binary VA: 0x1551b50)
// Original: hkBaseSystem::quit
// ----------------------------------------------------------------------------
hkBaseSystem::Self * hkBaseSystem::quit(hkBaseSystem::Self *self)
{
  hkBaseSystem::Self *v1;
  bool v2;
  volatile int32_t *v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  volatile int32_t *v9;
  int v10;
  int32_t v11; // kr04_4
  int32_t v12;
  int32_t v13; // ett
  uint8_t v14[28];
  hkBaseSystem::Self *thisa;

  v1 = self;
  v2 = hkBaseSystemIsInitialized == 0;
  *(uint32_t *)self = 0;
  if ( v2 )
    return self;
  hkReferencedObject::setLockMode(0);
  hkBaseSystem::quitSingletons();
  if ( (uint8_t)hkSocket::s_platformNetInitialized[0] != 0 && hkSocket::s_platformNetQuit != 0 )
  {
    G4_MEM_CALL((uintptr_t)(hkSocket::s_platformNetQuit));
    *(uint8_t *)(hkSocket::s_platformNetInitialized) = 0;
  }
  v4 = (volatile int32_t *)hkSingleton<hkError::Self>::s_instance;
  if ( hkSingleton<hkError::Self>::s_instance != 0 && *(uint16_t *)(hkSingleton<hkError::Self>::s_instance + 6) != 0 )
  {
    do
    {
      v6 = *((uint32_t *)v4 + 1);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
      v7 = v5 | (uint16_t)(v6 - 1);
      v8 = v6;
    }
    while ( v8 != __sync_val_compare_and_swap(v4 + 1, v8, v7) );
    v1 = self;
    if ( (uint16_t)v7 == 0 )
      G4_VCALL<void>(v4, 16);
  }
  hkSingleton<hkError::Self>::s_instance = 0;
  v9 = (volatile int32_t *)hkSingleton<hkFileSystem::Self>::s_instance;
  if ( hkSingleton<hkFileSystem::Self>::s_instance != 0 && *(uint16_t *)(hkSingleton<hkFileSystem::Self>::s_instance + 6) != 0 )
  {
    thisa = v1;
    do
    {
      v11 = *((uint32_t *)v9 + 1);
      HIWORD(v10) = HIWORD(v11);
      LOWORD(v10) = 0;
      v12 = v10 | (uint16_t)(v11 - 1);
      v13 = v11;
    }
    while ( v13 != __sync_val_compare_and_swap(v9 + 1, v13, v12) );
    v1 = thisa;
    if ( (uint16_t)v12 == 0 )
      G4_VCALL<void>(v9, 16);
  }
  hkSingleton<hkFileSystem::Self>::s_instance = 0;
  hkReferencedObject::deinitializeLock();
  hkBaseSystem::quitThread((hkBaseSystem::Self *)v14);
  hkBaseSystemIsInitialized = 0;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkBaseSystem::isInitialized  (binary VA: 0x1551c80)
// Original: hkBaseSystem::isInitialized
// ----------------------------------------------------------------------------
hkBaseSystem::Self * hkBaseSystem::isInitialized(hkBaseSystem::Self *self)
{
  *(uint8_t *)self = hkBaseSystemIsInitialized;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkBitField::staticClass  (binary VA: 0x1551f90)
// Original: hkBitField::staticClass
// ----------------------------------------------------------------------------
void * hkBitField::staticClass()
{
  return &hkBitFieldClass;
}

// ----------------------------------------------------------------------------
// Function: hkOffsetBitField::staticClass  (binary VA: 0x1551fb0)
// Original: hkOffsetBitField::staticClass
// ----------------------------------------------------------------------------
void * hkOffsetBitField::staticClass()
{
  return &hkOffsetBitFieldClass;
}

// ----------------------------------------------------------------------------
// Function: hkColor::staticClass  (binary VA: 0x15523f0)
// Original: hkColor::staticClass
// ----------------------------------------------------------------------------
void * hkColor::staticClass()
{
  return &hkColorClass;
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::Destroy  (binary VA: 0x15524d0)
// Original: hkOArchive::~hkOArchive
// ----------------------------------------------------------------------------
void hkOArchive::Destroy(hkOArchive::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  v1 = *((uint32_t *)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097028);
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
  *((uint32_t *)self + 2) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::Destroy_ea1552550  (binary VA: 0x1552550)
// Original: hkOArchive::~hkOArchive
// ----------------------------------------------------------------------------
void hkOArchive::Destroy_ea1552550(hkOArchive::Self *self)
{
  int v1;
  int v2;

  hkOArchive::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::Construct  (binary VA: 0x15525b0)
// Original: hkOArchive::hkOArchive
// ----------------------------------------------------------------------------
int hkOArchive::Construct(int a1, int a2, uint8_t a3)
{
  int v4;
  int32_t v5; // kr00_4

  *(uint32_t *)(a1 + 4) = -65535;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2097028);
  if ( a2 != 0 && *(uint16_t *)(a2 + 6) != 0 )
  {
    do
    {
      v5 = *(uint32_t *)(a2 + 4);
      HIWORD(v4) = HIWORD(v5);
      LOWORD(v4) = 0;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(a2 + 4), v5, v4 | (uint16_t)(v5 + 1)) );
    *(uint32_t *)(a1 + 8) = a2;
    *(uint8_t *)(a1 + 12) = a3;
    return a3;
  }
  else
  {
    *(uint32_t *)(a1 + 8) = a2;
    *(uint8_t *)(a1 + 12) = a3;
    return a3;
  }
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::Construct  (binary VA: 0x1552630)
// Original: hkOArchive::hkOArchive
// ----------------------------------------------------------------------------
int hkOArchive::Construct(int a1, int a2, char a3)
{
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);

  v3 = a1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2097028);
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint8_t *)(a1 + 12) = a3;
  result = (*(int (**)(uint32_t *, uint32_t, int, int, int, int, int))(*hkSingleton<hkFileSystem::Self>::s_instance + 24))(
             v14,
             (uint32_t)(uintptr_t)(hkSingleton<hkFileSystem::Self>::s_instance),
             a2,
             3,
             v11,
             v12,
             v13);
  v5 = *(uint32_t *)(a1 + 8);
  v6 = v14[0];
  if ( v5 == 0 || *(uint16_t *)(v5 + 6) == 0 )
    goto LABEL_5;
  do
  {
    v8 = *(uint32_t *)(v5 + 4);
    HIWORD(v7) = HIWORD(v8);
    LOWORD(v7) = 0;
    v9 = v7 | (uint16_t)(v8 - 1);
    v10 = v8;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v5 + 4), v10, v9);
  }
  while ( v10 != result );
  v3 = a1;
  if ( (uint16_t)v9 == 0 )
  {
    result = G4_VCALL<int>(v5, 16);
    *(uint32_t *)(a1 + 8) = v6;
  }
  else
  {
LABEL_5:
    *(uint32_t *)(v3 + 8) = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::Construct  (binary VA: 0x1552700)
// Original: hkOArchive::hkOArchive
// ----------------------------------------------------------------------------
int hkOArchive::Construct(int a1, hkString::Self *a2, size_t a3, char a4)
{
  int v4;
  int address;
  int v6;
  int result;
  int v8;
  int v9;
  int32_t v10; // kr00_4
  int32_t v11;
  int32_t v12; // ett
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;

  v4 = a1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2097028);
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint32_t *)(a1 + 8) = 0;
  *(uint8_t *)(a1 + 12) = a4;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v6 = (*(int (**)(uint32_t, int, int, int, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         28,
         v13,
         v14,
         v15,
         v16,
         v17,
         v18);
  result = hkBufferedStreamWriter::Construct(v6, a2, a3, 0);
  v8 = *(uint32_t *)(a1 + 8);
  if ( v8 == 0 || v6 == v8 || *(uint16_t *)(v8 + 6) == 0 )
    goto LABEL_6;
  do
  {
    v10 = *(uint32_t *)(v8 + 4);
    HIWORD(v9) = HIWORD(v10);
    LOWORD(v9) = 0;
    v11 = v9 | (uint16_t)(v10 - 1);
    v12 = v10;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v8 + 4), v12, v11);
  }
  while ( v12 != result );
  v4 = a1;
  if ( (uint16_t)v11 == 0 )
  {
    result = G4_VCALL<int>(v8, 16);
    *(uint32_t *)(a1 + 8) = v6;
  }
  else
  {
LABEL_6:
    *(uint32_t *)(v4 + 8) = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::write8  (binary VA: 0x15527e0)
// Original: hkOArchive::write8
// ----------------------------------------------------------------------------
int hkOArchive::write8(hkOArchive::Self *self, char a2)
{
  char v3[16];

  v3[0] = a2;
  return (*(int (**)(uint32_t, char *, int))(**((uint32_t **)self + 2) + 24))(*((uint32_t *)self + 2), v3, 1);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::write8u  (binary VA: 0x1552950)
// Original: hkOArchive::write8u
// ----------------------------------------------------------------------------
int hkOArchive::write8u(hkOArchive::Self *self, uint8_t a2)
{
  uint8_t v3[16];

  v3[0] = a2;
  return (*(int (**)(uint32_t, uint8_t *, int))(**((uint32_t **)self + 2) + 24))(
           *((uint32_t *)self + 2),
           v3,
           1);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeArrayGeneric  (binary VA: 0x1552980)
// Original: hkOArchive::writeArrayGeneric
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::writeArrayGeneric(hkOArchive::Self *self, char *a2, int a3, int a4)
{
  int v4;
  signed int v5;
  uint8_t *result;
  __m128i *v7;
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i v38;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  __m128i v42;
  __m128i v43;
  __m128i v44;
  __m128i v45;
  __m128i v46;
  __m128i v47;
  __m128i v48;
  __m128i v49;
  char *v50;
  __m128i *v51;
  __m128i v52;
  __m128i v53;
  __m128i v54;
  __m128i v55;
  __m128i v56;
  __m128i v57;
  __m128i v58;
  __m128i v59;
  char *v60;
  __m128i *v61;
  __m128i v62;
  __m128i v63;
  __m128i v64;
  __m128i v65;
  __m128i v66;
  __m128i v67;
  __m128i v68;
  __m128i v69;
  __m128i v70;
  __m128i v71;
  __m128i v72;
  __m128i v73;
  __m128i v74;
  __m128i v75;
  __m128i v76;
  __m128i v77;
  __m128i v78;
  __m128i v79;
  __m128i v80;
  __m128i v81;
  __m128i v82;
  __m128i v83;
  __m128i v84;
  __m128i v85;
  __m128i v86;
  __m128i v87;
  __m128i v88;
  __m128i v89;
  __m128i v90;
  __m128i v91;
  __m128i v92;
  __m128i v93;
  __m128i v94;
  __m128i v95;
  __m128i v96;
  __m128i v97;
  __m128i v98;
  __m128i v99;
  __m128i v100;
  __m128i v101;
  __m128i v102;
  __m128i v103;
  __m128i v104;
  __m128i v105;
  __m128i v106;
  __m128i v107;
  __m128i v108;
  __m128i v109;
  __m128i v110;
  __m128i v111;
  __m128i v112;
  __m128i v113;
  __m128i v114;
  __m128i v115;
  __m128i v116;
  __m128i v117;
  __m128i v118;
  __m128i v119;
  __m128i v120;
  __m128i v121;
  __m128i v122;
  __m128i v123;
  __m128i v124;
  __m128i v125;
  __m128i v126;
  __m128i v127;
  __m128i v128;
  __m128i v129;
  __m128i v130;
  __m128i v131;
  __m128i v132;
  __m128i v133;
  __m128i v134;
  __m128i v135;
  __m128i v136;
  __m128i v137;
  __m128i v138;
  __m128i v139;
  __m128i v140;
  __m128i v141;
  __m128i v142;
  __m128i v143;
  __m128i v144;
  __m128i v145;
  __m128i v146;
  __m128i v147;
  __m128i v148;
  __m128i v149;
  __m128i v150;
  __m128i v151;
  __m128i v152;
  __m128i v153;
  __m128i v154;
  __m128i v155;
  __m128i v156;
  __m128i v157;
  __m128i v158;
  __m128i v159;
  __m128i v160;
  __m128i v161;
  __m128i v162;
  __m128i v163;
  __m128i v164;
  __m128i v165;
  __m128i v166;
  __m128i v167;
  __m128i v168;
  __m128i v169;
  uint8_t *v170;
  char v171;
  char v172;
  char v173;
  char v174;
  char v175;
  char v176;
  char v177;
  char v178;
  char v179;
  char v180;
  char v181;
  char v182;
  char v183;
  char v184;
  char v185;
  char v186;
  char v187;
  char v188;
  char v189;
  char v190;
  char v191;
  char v192;
  char v193;
  char v194;
  char v195;
  typedef int _g4_t_v196;
  typedef __m128i _g4_t_v197;
  typedef __m128i _g4_t_v198;
  typedef __m128i _g4_t_v199;
  typedef __m128i _g4_t_v200;
  typedef __m128i _g4_t_v201;
  typedef __m128i _g4_t_v202;
  typedef __m128i _g4_t_v203;
  typedef unsigned int _g4_t_v204;
  typedef __m128i _g4_t_v205;
  typedef __m128i _g4_t_v206;
  typedef __m128i _g4_t_v207;
  typedef int _g4_t_v208;
  typedef unsigned int _g4_t_v209;
  typedef int _g4_t_v210;
  typedef unsigned int _g4_t_v211;
  typedef int _g4_t_v212;
  typedef __m128i _g4_t_v213;
  typedef __m128i _g4_t_v214;
  typedef __m128i _g4_t_v215;
  typedef int _g4_t_v216;
  typedef uint8_t _g4_t_v217[524];
  enum : size_t {
    _g4_s0 = 736u,
    _g4_s1 = (12u + sizeof(_g4_t_v196)) > _g4_s0 ? (12u + sizeof(_g4_t_v196)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v197)) > _g4_s1 ? (16u + sizeof(_g4_t_v197)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v198)) > _g4_s2 ? (32u + sizeof(_g4_t_v198)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v199)) > _g4_s3 ? (32u + sizeof(_g4_t_v199)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v200)) > _g4_s4 ? (48u + sizeof(_g4_t_v200)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v201)) > _g4_s5 ? (48u + sizeof(_g4_t_v201)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v202)) > _g4_s6 ? (64u + sizeof(_g4_t_v202)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v203)) > _g4_s7 ? (64u + sizeof(_g4_t_v203)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v204)) > _g4_s8 ? (92u + sizeof(_g4_t_v204)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v205)) > _g4_s9 ? (96u + sizeof(_g4_t_v205)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v206)) > _g4_s10 ? (96u + sizeof(_g4_t_v206)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v207)) > _g4_s11 ? (96u + sizeof(_g4_t_v207)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v208)) > _g4_s12 ? (120u + sizeof(_g4_t_v208)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v209)) > _g4_s13 ? (128u + sizeof(_g4_t_v209)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v210)) > _g4_s14 ? (128u + sizeof(_g4_t_v210)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v211)) > _g4_s15 ? (128u + sizeof(_g4_t_v211)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v212)) > _g4_s16 ? (128u + sizeof(_g4_t_v212)) : _g4_s16,
    _g4_s18 = (128u + sizeof(_g4_t_v213)) > _g4_s17 ? (128u + sizeof(_g4_t_v213)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v214)) > _g4_s18 ? (128u + sizeof(_g4_t_v214)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v215)) > _g4_s19 ? (128u + sizeof(_g4_t_v215)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v216)) > _g4_s20 ? (128u + sizeof(_g4_t_v216)) : _g4_s20,
    _g4_s22 = (144u + sizeof(_g4_t_v217)) > _g4_s21 ? (144u + sizeof(_g4_t_v217)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 12u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 16u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 32u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 32u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 48u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 48u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 64u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 64u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 92u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 96u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 96u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 96u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 120u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 128u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 128u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 128u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 128u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 128u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 128u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 128u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 128u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 144u);

  if ( *((uint8_t *)self + 12) != 0 )
  {
    v208 = a4 * a3;
    v4 = 512 / a3;
    v5 = 512;
    result = v217;
    if ( a4 * a3 <= 0 )
      return result;
    while ( 1 )
    {
      if ( v208 <= 511 )
      {
        v5 = a4 * a3 % 512;
        v4 = v5 / a3;
      }
      hkString::memCpy((hkString::Self *)v217, a2, v5, v196);
      if ( a3 == 4 )
      {
        if ( v4 > 0 )
        {
          if ( 16 * ((unsigned int)v4 >> 4) != 0 && (unsigned int)v4 > 0xF )
          {
            v7 = (__m128i *)v217;
            v209 = 0;
            do
            {
              ++v209;
              v8 = v7[1];
              v9 = _mm_unpackhi_epi8(*v7, v8);
              v10 = _mm_unpacklo_epi8(*v7, v8);
              v11 = _mm_unpacklo_epi8(v10, v9);
              v12 = v7[2];
              v13 = _mm_unpackhi_epi8(v10, v9);
              v14 = v7[3];
              v15 = _mm_unpackhi_epi8(v11, v13);
              v16 = _mm_unpacklo_epi8(v11, v13);
              v17 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v10, v9), v13);
              v18 = _mm_unpackhi_epi8(v12, v14);
              v19 = _mm_unpacklo_epi8(v12, v14);
              v20 = _mm_unpacklo_epi8(v19, v18);
              v21 = _mm_unpackhi_epi8(v19, v18);
              v22 = _mm_unpacklo_epi8(v16, v15);
              v23 = _mm_unpackhi_epi8(v17, v15);
              v24 = _mm_unpackhi_epi8(v20, v21);
              v25 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v20, v21), v24);
              v26 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v12, v14), v18), v21);
              v27 = _mm_unpacklo_epi8(v22, v25);
              v28 = _mm_unpackhi_epi8(v22, v25);
              v29 = _mm_unpackhi_epi8(v26, v24);
              v30 = _mm_unpackhi_epi8(v27, v28);
              v31 = _mm_unpacklo_epi8(v27, v28);
              v32 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v22, v25), v28);
              v33 = _mm_unpackhi_epi8(v23, v29);
              v34 = _mm_unpacklo_epi8(v32, v30);
              v35 = _mm_unpackhi_epi8(v31, v30);
              v36 = _mm_unpacklo_epi8(v31, v30);
              v37 = _mm_unpacklo_epi8(v23, v29);
              v38 = _mm_unpacklo_epi8(v37, v33);
              v39 = _mm_unpacklo_epi8(v36, v35);
              v40 = _mm_unpackhi_epi8(v34, v35);
              v41 = _mm_unpackhi_epi8(v37, v33);
              v42 = _mm_unpackhi_epi8(v38, v41);
              v43 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v23, v29), v33), v41), v42);
              v44 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v38, v41), v42);
              v45 = _mm_unpacklo_epi8(v43, v44);
              v46 = _mm_unpackhi_epi8(v43, v44);
              v47 = v40;
              v48 = _mm_unpackhi_epi8(v40, v39);
              v49 = _mm_unpacklo_epi8(v47, v39);
              *v7 = _mm_unpacklo_epi8(v45, v49);
              v7 += 4;
              v7[-3] = _mm_unpackhi_epi8(v45, v49);
              v7[-2] = _mm_unpacklo_epi8(v46, v48);
              v7[-1] = _mm_unpackhi_epi8(v46, v48);
            }
            while ( v209 < (unsigned int)v4 >> 4 );
            v50 = (char *)(&v217[64 * ((unsigned int)v4 >> 4)]);
            if ( v4 == 16 * ((unsigned int)v4 >> 4) )
              goto LABEL_6;
            v210 = 16 * ((unsigned int)v4 >> 4);
          }
          else
          {
            v50 = (char *)(v217);
            v210 = 0;
          }
          do
          {
            v178 = *v50;
            ++v210;
            *v50 = v50[3];
            v50[3] = v178;
            v179 = v50[2];
            v50 += 4;
            v180 = *(v50 - 3);
            *(v50 - 3) = v179;
            *(v50 - 2) = v180;
          }
          while ( v4 > v210 );
        }
      }
      else if ( a3 == 8 )
      {
        if ( v4 > 0 )
        {
          if ( 16 * ((unsigned int)v4 >> 4) != 0 && (unsigned int)v4 > 0xF )
          {
            v61 = (__m128i *)v217;
            v204 = 0;
            do
            {
              v62 = *v61;
              v61 += 8;
              v63 = v61[-7];
              v64 = _mm_unpackhi_epi8(v62, v63);
              v65 = _mm_unpacklo_epi8(v62, v63);
              v66 = _mm_unpacklo_epi8(v65, v64);
              v67 = _mm_unpackhi_epi8(v65, v64);
              v68 = _mm_unpackhi_epi8(v66, v67);
              v69 = _mm_unpacklo_epi8(v66, v67);
              v202 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v62, v63), v64), v67), v68);
              v70 = _mm_unpackhi_epi8(v61[-6], v61[-5]);
              v71 = _mm_unpacklo_epi8(v61[-6], v61[-5]);
              v72 = _mm_unpacklo_epi8(v71, v70);
              v73 = _mm_unpackhi_epi8(v71, v70);
              v74 = _mm_unpackhi_epi8(v72, v73);
              v75 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v72, v73), v74);
              v76 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v72, v73), v74);
              v77 = _mm_unpackhi_epi8(v61[-4], v61[-3]);
              v78 = _mm_unpacklo_epi8(v61[-4], v61[-3]);
              v79 = _mm_unpacklo_epi8(v78, v77);
              v213 = v76;
              v80 = _mm_unpackhi_epi8(v78, v77);
              v81 = _mm_unpackhi_epi8(v79, v80);
              v200 = _mm_unpackhi_epi8(
                       _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v61[-4], v61[-3]), v77), v80),
                       v81);
              v82 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v79, v80), v81);
              v83 = _mm_unpacklo_epi8(v69, v68);
              v84 = _mm_unpackhi_epi8(v61[-2], v61[-1]);
              v85 = _mm_unpacklo_epi8(v61[-2], v61[-1]);
              v86 = _mm_unpacklo_epi8(v85, v84);
              v87 = _mm_unpackhi_epi8(v85, v84);
              v88 = _mm_unpackhi_epi8(v86, v87);
              v89 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v86, v87), v88);
              v90 = _mm_unpackhi_epi8(
                      _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v61[-2], v61[-1]), v84), v87),
                      v88);
              v91 = _mm_unpackhi_epi8(v83, v75);
              v92 = _mm_unpacklo_epi8(v83, v75);
              v93 = _mm_unpackhi_epi8(v92, v91);
              v94 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v92, v91), v93);
              v95 = _mm_unpacklo_epi8(v92, v91);
              v96 = _mm_unpackhi_epi8(v95, v93);
              v205 = _mm_unpackhi_epi8(v94, v96);
              v97 = _mm_unpacklo_epi8(v82, v89);
              v198 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v95, v93), v96);
              v98 = _mm_unpackhi_epi8(v82, v89);
              v99 = _mm_unpackhi_epi8(v97, v98);
              v100 = _mm_unpacklo_epi8(v97, v98);
              v101 = v99;
              v102 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v82, v89), v98), v99);
              v103 = _mm_unpackhi_epi8(v100, v99);
              v197 = _mm_unpackhi_epi8(v102, v103);
              v104 = _mm_unpacklo_epi8(v202, v213);
              v105 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v100, v101), v103);
              v106 = _mm_unpackhi_epi8(v202, v213);
              v107 = _mm_unpackhi_epi8(v104, v106);
              v108 = _mm_unpacklo_epi8(v104, v106);
              v109 = v107;
              v110 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v202, v213), v106), v107);
              v111 = _mm_unpackhi_epi8(v108, v107);
              v112 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v108, v109), v111);
              v203 = _mm_unpackhi_epi8(v110, v111);
              v113 = _mm_unpacklo_epi8(v200, v90);
              v114 = _mm_unpackhi_epi8(v200, v90);
              v115 = _mm_unpackhi_epi8(v113, v114);
              v116 = _mm_unpacklo_epi8(v113, v114);
              v117 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v200, v90), v114), v115);
              v118 = _mm_unpackhi_epi8(v116, v115);
              v119 = _mm_unpacklo_epi8(v198, v105);
              v120 = _mm_unpacklo_epi8(v116, v115);
              v121 = v117;
              v122 = _mm_unpacklo_epi8(v120, v118);
              v123 = _mm_unpackhi_epi8(v198, v105);
              v124 = _mm_unpackhi_epi8(v121, v118);
              v125 = _mm_unpackhi_epi8(v119, v123);
              v126 = _mm_unpacklo_epi8(v119, v123);
              v214 = v124;
              v127 = v125;
              v128 = _mm_unpackhi_epi8(v126, v125);
              v129 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v126, v127), v128);
              v130 = _mm_unpackhi_epi8(
                       _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v198, v105), v123), v127),
                       v128);
              v131 = _mm_unpacklo_epi8(v112, v122);
              v132 = _mm_unpackhi_epi8(v112, v122);
              v133 = _mm_unpacklo_epi8(v131, v132);
              v134 = _mm_unpackhi_epi8(v131, v132);
              v201 = v130;
              v135 = v133;
              v136 = _mm_unpackhi_epi8(v133, v134);
              v137 = _mm_unpackhi_epi8(
                       _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v112, v122), v132), v134),
                       v136);
              v199 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v135, v134), v136);
              v138 = _mm_unpackhi_epi8(v205, v197);
              v139 = _mm_unpacklo_epi8(v205, v197);
              v140 = _mm_unpackhi_epi8(v139, v138);
              v141 = _mm_unpacklo_epi8(v139, v138);
              v142 = _mm_unpacklo_epi8(v141, v140);
              v143 = _mm_unpackhi_epi8(v141, v140);
              v144 = _mm_unpacklo_epi8(v142, v143);
              v145 = _mm_unpackhi_epi8(
                       _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v205, v197), v138), v140),
                       v143);
              v146 = _mm_unpacklo_epi8(v203, v214);
              v206 = _mm_unpackhi_epi8(v203, v214);
              v147 = _mm_unpackhi_epi8(v146, v206);
              v148 = _mm_unpacklo_epi8(v146, v206);
              v149 = v147;
              v150 = _mm_unpackhi_epi8(v148, v147);
              v151 = _mm_unpackhi_epi8(
                       _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v203, v214), v206), v149),
                       v150);
              v152 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v148, v149), v150);
              v153 = _mm_unpacklo_epi8(v151, v152);
              v154 = _mm_unpackhi_epi8(v151, v152);
              v155 = v145;
              v156 = _mm_unpackhi_epi8(v145, v144);
              ++v204;
              v215 = v153;
              v157 = _mm_unpacklo_epi8(v155, v144);
              v158 = _mm_unpacklo_epi8(v137, v199);
              v159 = _mm_unpackhi_epi8(v137, v199);
              v160 = _mm_unpacklo_epi8(v201, v129);
              v161 = _mm_unpackhi_epi8(v201, v129);
              v207 = _mm_unpacklo_epi8(v215, v158);
              v162 = _mm_unpackhi_epi8(v215, v158);
              v163 = _mm_unpacklo_epi8(v154, v159);
              v164 = _mm_unpackhi_epi8(v154, v159);
              v165 = v157;
              v166 = _mm_unpackhi_epi8(v157, v160);
              v167 = _mm_unpacklo_epi8(v165, v160);
              v168 = _mm_unpacklo_epi8(v156, v161);
              v169 = _mm_unpackhi_epi8(v156, v161);
              v61[-8] = _mm_unpacklo_epi8(v207, v167);
              v61[-7] = _mm_unpackhi_epi8(v207, v167);
              v61[-6] = _mm_unpacklo_epi8(v162, v166);
              v61[-5] = _mm_unpackhi_epi8(v162, v166);
              v61[-4] = _mm_unpacklo_epi8(v163, v168);
              v61[-3] = _mm_unpackhi_epi8(v163, v168);
              v61[-2] = _mm_unpacklo_epi8(v164, v169);
              v61[-1] = _mm_unpackhi_epi8(v164, v169);
            }
            while ( (unsigned int)v4 >> 4 > v204 );
            v170 = &v217[128 * ((unsigned int)v4 >> 4)];
            if ( 16 * ((unsigned int)v4 >> 4) == v4 )
              goto LABEL_6;
            v216 = 16 * ((unsigned int)v4 >> 4);
          }
          else
          {
            v170 = v217;
            v216 = 0;
          }
          do
          {
            ++v216;
            v171 = v170[7];
            v170[7] = *v170;
            *v170 = v171;
            v172 = v170[1];
            v170 += 8;
            v173 = *(v170 - 2);
            *(v170 - 2) = v172;
            v174 = *(v170 - 6);
            *(v170 - 7) = v173;
            v175 = *(v170 - 3);
            *(v170 - 3) = v174;
            v176 = *(v170 - 5);
            *(v170 - 6) = v175;
            v177 = *(v170 - 4);
            *(v170 - 4) = v176;
            *(v170 - 5) = v177;
          }
          while ( v4 > v216 );
        }
      }
      else if ( a3 == 2 && v4 > 0 )
      {
        if ( 16 * ((unsigned int)v4 >> 4) == 0 || (unsigned int)v4 <= 0xF )
        {
          v212 = 0;
          v60 = (char *)(v217);
LABEL_40:
          v181 = *v60;
          *v60 = v60[1];
          v60[1] = v181;
          if ( v4 > v212 + 1 )
          {
            v182 = v60[2];
            v60[2] = v60[3];
            v60[3] = v182;
            if ( v4 > v212 + 2 )
            {
              v183 = v60[4];
              v60[4] = v60[5];
              v60[5] = v183;
              if ( v4 > v212 + 3 )
              {
                v184 = v60[6];
                v60[6] = v60[7];
                v60[7] = v184;
                if ( v4 > v212 + 4 )
                {
                  v185 = v60[8];
                  v60[8] = v60[9];
                  v60[9] = v185;
                  if ( v4 > v212 + 5 )
                  {
                    v186 = v60[10];
                    v60[10] = v60[11];
                    v60[11] = v186;
                    if ( v4 > v212 + 6 )
                    {
                      v187 = v60[12];
                      v60[12] = v60[13];
                      v60[13] = v187;
                      if ( v4 > v212 + 7 )
                      {
                        v188 = v60[14];
                        v60[14] = v60[15];
                        v60[15] = v188;
                        if ( v4 > v212 + 8 )
                        {
                          v189 = v60[16];
                          v60[16] = v60[17];
                          v60[17] = v189;
                          if ( v4 > v212 + 9 )
                          {
                            v190 = v60[18];
                            v60[18] = v60[19];
                            v60[19] = v190;
                            if ( v4 > v212 + 10 )
                            {
                              v191 = v60[20];
                              v60[20] = v60[21];
                              v60[21] = v191;
                              if ( v4 > v212 + 11 )
                              {
                                v192 = v60[22];
                                v60[22] = v60[23];
                                v60[23] = v192;
                                if ( v4 > v212 + 12 )
                                {
                                  v193 = v60[24];
                                  v60[24] = v60[25];
                                  v60[25] = v193;
                                  if ( v4 > v212 + 13 )
                                  {
                                    v194 = v60[26];
                                    v60[26] = v60[27];
                                    v60[27] = v194;
                                    if ( v4 > v212 + 14 )
                                    {
                                      v195 = v60[29];
                                      v60[29] = v60[28];
                                      v60[28] = v195;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_6;
        }
        v51 = (__m128i *)v217;
        v211 = 0;
        do
        {
          ++v211;
          v52 = v51[1];
          v53 = _mm_unpackhi_epi8(*v51, v52);
          v54 = _mm_unpacklo_epi8(*v51, v52);
          v55 = _mm_unpacklo_epi8(v54, v53);
          v56 = _mm_unpackhi_epi8(v54, v53);
          v57 = _mm_unpackhi_epi8(v55, v56);
          v58 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(v55, v56), v57);
          v59 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v55, v56), v57);
          *v51 = _mm_unpacklo_epi8(v58, v59);
          v51 += 2;
          v51[-1] = _mm_unpackhi_epi8(v58, v59);
        }
        while ( (unsigned int)v4 >> 4 > v211 );
        v212 = 16 * ((unsigned int)v4 >> 4);
        v60 = (char *)(&v217[32 * ((unsigned int)v4 >> 4)]);
        if ( v4 != v212 )
          goto LABEL_40;
      }
LABEL_6:
      (*(void (**)(uint32_t, uint8_t *, signed int))(**((uint32_t **)self + 2) + 24))(*((uint32_t *)self + 2), v217, v5);
      v208 -= v5;
      result = (uint8_t *)v208;
      a2 += v5;
      if ( v208 <= 0 )
        return result;
    }
  }
  return (uint8_t *)(*(int (**)(uint32_t, char *, int))(**((uint32_t **)self + 2) + 24))(
                    *((uint32_t *)self + 2),
                    a2,
                    a3 * a4);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::write16  (binary VA: 0x15534e0)
// Original: hkOArchive::write16
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::write16(hkOArchive::Self *self, int16_t a2)
{
  int16_t v3[8];

  v3[0] = a2;
  return hkOArchive::writeArrayGeneric(self, (char *)v3, 2, 1);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::write16u  (binary VA: 0x1553530)
// Original: hkOArchive::write16u
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::write16u(hkOArchive::Self *self, uint16_t a2)
{
  uint16_t v3[8];

  v3[0] = a2;
  return hkOArchive::writeArrayGeneric(self, (char *)v3, 2, 1);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::write32  (binary VA: 0x1553580)
// Original: hkOArchive::write32
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::write32(hkOArchive::Self *self, ...)
{
  va_list va;

  va_start(va, self);
  return hkOArchive::writeArrayGeneric(self, g4_va_cast<char *>(va), 4, 1);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::write32u  (binary VA: 0x15535c0)
// Original: hkOArchive::write32u
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::write32u(hkOArchive::Self *self, ...)
{
  va_list va;

  va_start(va, self);
  return hkOArchive::writeArrayGeneric(self, g4_va_cast<char *>(va), 4, 1);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::write64  (binary VA: 0x1553600)
// Original: hkOArchive::write64
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::write64(hkOArchive::Self *self, int64_t a2)
{
  typedef int64_t _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);

  v3 = a2;
  return hkOArchive::writeArrayGeneric(self, (char *)&v3, 8, 1);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::write64u  (binary VA: 0x1553650)
// Original: hkOArchive::write64u
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::write64u(hkOArchive::Self *self, uint64_t a2)
{
  typedef uint64_t _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);

  v3 = a2;
  return hkOArchive::writeArrayGeneric(self, (char *)&v3, 8, 1);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeFloat32  (binary VA: 0x15536a0)
// Original: hkOArchive::writeFloat32
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::writeFloat32(hkOArchive::Self *self, float a2)
{
  return hkOArchive::writeArrayGeneric(self, (char *)&a2, 4, 1);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeArrayFloat32  (binary VA: 0x15536e0)
// Original: hkOArchive::writeArrayFloat32
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::writeArrayFloat32(hkOArchive::Self *self, const double *a2, uint8_t *a3)
{
  uint8_t *v3;
  uint8_t *result;
  float v5; // xmm0_4

  v3 = nullptr;
  result = a3;
  if ( (int)(uintptr_t)(a3) > 0 )
  {
    do
    {
      v5 = a2[(uint32_t)(uintptr_t)(v3++)];
      result = hkOArchive::writeFloat32(self, v5);
    }
    while ( v3 != a3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeDouble64  (binary VA: 0x1553740)
// Original: hkOArchive::writeDouble64
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::writeDouble64(hkOArchive::Self *self, double a2)
{
  double v3[2];

  v3[0] = a2;
  return hkOArchive::writeArrayGeneric(self, (char *)v3, 8, 1);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeArray8  (binary VA: 0x1553790)
// Original: hkOArchive::writeArray8
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::writeArray8(hkOArchive::Self *self, char *a2, int a3)
{
  return hkOArchive::writeArrayGeneric(self, a2, 1, a3);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeArray8u  (binary VA: 0x15537d0)
// Original: hkOArchive::writeArray8u
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::writeArray8u(hkOArchive::Self *self, char *a2, int a3)
{
  return hkOArchive::writeArrayGeneric(self, a2, 1, a3);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeArray16  (binary VA: 0x1553810)
// Original: hkOArchive::writeArray16
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::writeArray16(hkOArchive::Self *self, char *a2, int a3)
{
  return hkOArchive::writeArrayGeneric(self, a2, 2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeArray16u  (binary VA: 0x1553850)
// Original: hkOArchive::writeArray16u
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::writeArray16u(hkOArchive::Self *self, char *a2, int a3)
{
  return hkOArchive::writeArrayGeneric(self, a2, 2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeArray32  (binary VA: 0x1553890)
// Original: hkOArchive::writeArray32
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::writeArray32(hkOArchive::Self *self, char *a2, int a3)
{
  return hkOArchive::writeArrayGeneric(self, a2, 4, a3);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeArray32u  (binary VA: 0x15538d0)
// Original: hkOArchive::writeArray32u
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::writeArray32u(hkOArchive::Self *self, char *a2, int a3)
{
  return hkOArchive::writeArrayGeneric(self, a2, 4, a3);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeArray64  (binary VA: 0x1553910)
// Original: hkOArchive::writeArray64
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::writeArray64(hkOArchive::Self *self, char *a2, int a3)
{
  return hkOArchive::writeArrayGeneric(self, a2, 8, a3);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeArray64u  (binary VA: 0x1553950)
// Original: hkOArchive::writeArray64u
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::writeArray64u(hkOArchive::Self *self, char *a2, int a3)
{
  return hkOArchive::writeArrayGeneric(self, a2, 8, a3);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeArrayFloat32  (binary VA: 0x1553990)
// Original: hkOArchive::writeArrayFloat32
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::writeArrayFloat32(hkOArchive::Self *self, float *a2, int a3)
{
  return hkOArchive::writeArrayGeneric(self, (char *)a2, 4, a3);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeArrayDouble64  (binary VA: 0x15539d0)
// Original: hkOArchive::writeArrayDouble64
// ----------------------------------------------------------------------------
uint8_t * hkOArchive::writeArrayDouble64(hkOArchive::Self *self, double *a2, int a3)
{
  return hkOArchive::writeArrayGeneric(self, (char *)a2, 8, a3);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::writeRaw  (binary VA: 0x1553a10)
// Original: hkOArchive::writeRaw
// ----------------------------------------------------------------------------
int hkOArchive::writeRaw(hkOArchive::Self *self, const void *a2, int a3)
{
  return (*(int (**)(uint32_t, const void *, int))(**((uint32_t **)self + 2) + 24))(*((uint32_t *)self + 2), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::setByteSwap  (binary VA: 0x1553a40)
// Original: hkOArchive::setByteSwap
// ----------------------------------------------------------------------------
int hkOArchive::setByteSwap(int a1, uint8_t a2)
{
  *(uint8_t *)(a1 + 12) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::getByteSwap  (binary VA: 0x1553a50)
// Original: hkOArchive::getByteSwap
// ----------------------------------------------------------------------------
hkOArchive::Self * hkOArchive::getByteSwap(hkOArchive::Self *self, int a2)
{
  *(uint8_t *)self = *(uint8_t *)(a2 + 12);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::isOk  (binary VA: 0x1553a70)
// Original: hkOArchive::isOk
// ----------------------------------------------------------------------------
hkOArchive::Self * hkOArchive::isOk(hkOArchive::Self *self, int a2)
{
  (*(void (**)(hkOArchive::Self *))(**(uint32_t **)(a2 + 8) + 20))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::getStreamWriter  (binary VA: 0x1553aa0)
// Original: hkOArchive::getStreamWriter
// ----------------------------------------------------------------------------
int hkOArchive::getStreamWriter(hkOArchive::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: hkOArchive::setStreamWriter  (binary VA: 0x1553ab0)
// Original: hkOArchive::setStreamWriter
// ----------------------------------------------------------------------------
int hkOArchive::setStreamWriter(hkOArchive::Self *self, hkStreamWriter::Self *a2)
{
  hkStreamWriter::Self *v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int result;
  int32_t v8; // ett
  int v9;
  int32_t v10; // kr04_4

  v2 = a2;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v10 = *((uint32_t *)a2 + 1);
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      result = __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v10, v9 | (uint16_t)(v10 + 1));
    }
    while ( v10 != result );
  }
  v3 = *((uint32_t *)self + 2);
  if ( v3 == 0 || *(uint16_t *)(v3 + 6) == 0 )
    goto LABEL_7;
  do
  {
    v5 = *(uint32_t *)(v3 + 4);
    HIWORD(v4) = HIWORD(v5);
    LOWORD(v4) = 0;
    v6 = v4 | (uint16_t)(v5 - 1);
    v8 = v5;
    result = __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v8, v6);
  }
  while ( v8 != result );
  v2 = a2;
  if ( (uint16_t)v6 == 0 )
  {
    result = G4_VCALL<int>(v3, 16);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
LABEL_7:
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkContainerTempAllocator::Allocator::Destroy  (binary VA: 0x1553b50)
// Original: hkContainerTempAllocator::Allocator::~Allocator
// ----------------------------------------------------------------------------
void hkContainerTempAllocator::Allocator::Destroy(hkContainerTempAllocator::Allocator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097068);
  hkMemoryAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkContainerHeapAllocator::Allocator::Destroy  (binary VA: 0x1553b80)
// Original: hkContainerHeapAllocator::Allocator::~Allocator
// ----------------------------------------------------------------------------
void hkContainerHeapAllocator::Allocator::Destroy(hkContainerHeapAllocator::Allocator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20970E8);
  hkMemoryAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkContainerDebugAllocator::Allocator::Destroy  (binary VA: 0x1553bb0)
// Original: hkContainerDebugAllocator::Allocator::~Allocator
// ----------------------------------------------------------------------------
void hkContainerDebugAllocator::Allocator::Destroy(hkContainerDebugAllocator::Allocator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20970A8);
  hkMemoryAllocator::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkContainerTempAllocator::Allocator::Destroy_ea1553be0  (binary VA: 0x1553be0)
// Original: hkContainerTempAllocator::Allocator::~Allocator
// ----------------------------------------------------------------------------
void hkContainerTempAllocator::Allocator::Destroy_ea1553be0(hkContainerTempAllocator::Allocator::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097068);
  hkMemoryAllocator::Destroy(self);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkContainerTempAllocator::Allocator::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    4);
}

// ----------------------------------------------------------------------------
// Function: hkContainerDebugAllocator::Allocator::Destroy_ea1553c40  (binary VA: 0x1553c40)
// Original: hkContainerDebugAllocator::Allocator::~Allocator
// ----------------------------------------------------------------------------
void hkContainerDebugAllocator::Allocator::Destroy_ea1553c40(hkContainerDebugAllocator::Allocator::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20970A8);
  hkMemoryAllocator::Destroy(self);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkContainerDebugAllocator::Allocator::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    4);
}

// ----------------------------------------------------------------------------
// Function: hkContainerHeapAllocator::Allocator::Destroy_ea1553ca0  (binary VA: 0x1553ca0)
// Original: hkContainerHeapAllocator::Allocator::~Allocator
// ----------------------------------------------------------------------------
void hkContainerHeapAllocator::Allocator::Destroy_ea1553ca0(hkContainerHeapAllocator::Allocator::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20970E8);
  hkMemoryAllocator::Destroy(self);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkContainerHeapAllocator::Allocator::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    4);
}

// ----------------------------------------------------------------------------
// Function: hkContainerHeapAllocator::Allocator::getAllocatedSize  (binary VA: 0x1553d00)
// Original: hkContainerHeapAllocator::Allocator::getAllocatedSize
// ----------------------------------------------------------------------------
int hkContainerHeapAllocator::Allocator::getAllocatedSize(hkContainerHeapAllocator::Allocator::Self *self, const void *a2, int a3)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, const void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 40))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkContainerHeapAllocator::Allocator::getMemoryStatistics  (binary VA: 0x1553d50)
// Original: hkContainerHeapAllocator::Allocator::getMemoryStatistics
// ----------------------------------------------------------------------------
int hkContainerHeapAllocator::Allocator::getMemoryStatistics(int a1, int a2)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 36))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkContainerHeapAllocator::Allocator::bufRealloc  (binary VA: 0x1553d90)
// Original: hkContainerHeapAllocator::Allocator::bufRealloc
// ----------------------------------------------------------------------------
int hkContainerHeapAllocator::Allocator::bufRealloc(hkContainerHeapAllocator::Allocator::Self *self, void *a2, int a3, int *a4)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, void *, int, int *))(**(uint32_t **)(*(uint32_t *)address + 44) + 24))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: hkContainerHeapAllocator::Allocator::bufFree  (binary VA: 0x1553de0)
// Original: hkContainerHeapAllocator::Allocator::bufFree
// ----------------------------------------------------------------------------
int hkContainerHeapAllocator::Allocator::bufFree(hkContainerHeapAllocator::Allocator::Self *self, void *a2, int a3)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 20))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkContainerHeapAllocator::Allocator::bufAlloc  (binary VA: 0x1553e30)
// Original: hkContainerHeapAllocator::Allocator::bufAlloc
// ----------------------------------------------------------------------------
int hkContainerHeapAllocator::Allocator::bufAlloc(hkContainerHeapAllocator::Allocator::Self *self, int *a2)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int *))(**(uint32_t **)(*(uint32_t *)address + 44) + 16))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkContainerHeapAllocator::Allocator::blockFree  (binary VA: 0x1553e70)
// Original: hkContainerHeapAllocator::Allocator::blockFree
// ----------------------------------------------------------------------------
int hkContainerHeapAllocator::Allocator::blockFree(hkContainerHeapAllocator::Allocator::Self *self, void *a2, int a3)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkContainerHeapAllocator::Allocator::blockAlloc  (binary VA: 0x1553ec0)
// Original: hkContainerHeapAllocator::Allocator::blockAlloc
// ----------------------------------------------------------------------------
int hkContainerHeapAllocator::Allocator::blockAlloc(hkContainerHeapAllocator::Allocator::Self *self, int a2)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 44),
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkContainerDebugAllocator::Allocator::getAllocatedSize  (binary VA: 0x1553f00)
// Original: hkContainerDebugAllocator::Allocator::getAllocatedSize
// ----------------------------------------------------------------------------
int hkContainerDebugAllocator::Allocator::getAllocatedSize(hkContainerDebugAllocator::Allocator::Self *self, const void *a2, int a3)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, const void *, int))(**(uint32_t **)(*(uint32_t *)address + 48) + 40))(
           *(uint32_t *)(*(uint32_t *)address + 48),
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkContainerDebugAllocator::Allocator::getMemoryStatistics  (binary VA: 0x1553f50)
// Original: hkContainerDebugAllocator::Allocator::getMemoryStatistics
// ----------------------------------------------------------------------------
int hkContainerDebugAllocator::Allocator::getMemoryStatistics(int a1, int a2)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 48) + 36))(
           *(uint32_t *)(*(uint32_t *)address + 48),
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkContainerDebugAllocator::Allocator::bufRealloc  (binary VA: 0x1553f90)
// Original: hkContainerDebugAllocator::Allocator::bufRealloc
// ----------------------------------------------------------------------------
int hkContainerDebugAllocator::Allocator::bufRealloc(hkContainerDebugAllocator::Allocator::Self *self, void *a2, int a3, int *a4)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, void *, int, int *))(**(uint32_t **)(*(uint32_t *)address + 48) + 24))(
           *(uint32_t *)(*(uint32_t *)address + 48),
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: hkContainerDebugAllocator::Allocator::bufFree  (binary VA: 0x1553fe0)
// Original: hkContainerDebugAllocator::Allocator::bufFree
// ----------------------------------------------------------------------------
int hkContainerDebugAllocator::Allocator::bufFree(hkContainerDebugAllocator::Allocator::Self *self, void *a2, int a3)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 48) + 20))(
           *(uint32_t *)(*(uint32_t *)address + 48),
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkContainerDebugAllocator::Allocator::bufAlloc  (binary VA: 0x1554030)
// Original: hkContainerDebugAllocator::Allocator::bufAlloc
// ----------------------------------------------------------------------------
int hkContainerDebugAllocator::Allocator::bufAlloc(hkContainerDebugAllocator::Allocator::Self *self, int *a2)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int *))(**(uint32_t **)(*(uint32_t *)address + 48) + 16))(
           *(uint32_t *)(*(uint32_t *)address + 48),
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkContainerDebugAllocator::Allocator::blockFree  (binary VA: 0x1554070)
// Original: hkContainerDebugAllocator::Allocator::blockFree
// ----------------------------------------------------------------------------
int hkContainerDebugAllocator::Allocator::blockFree(hkContainerDebugAllocator::Allocator::Self *self, void *a2, int a3)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 48) + 12))(
           *(uint32_t *)(*(uint32_t *)address + 48),
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkContainerDebugAllocator::Allocator::blockAlloc  (binary VA: 0x15540c0)
// Original: hkContainerDebugAllocator::Allocator::blockAlloc
// ----------------------------------------------------------------------------
int hkContainerDebugAllocator::Allocator::blockAlloc(hkContainerDebugAllocator::Allocator::Self *self, int a2)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 48) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 48),
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkContainerTempAllocator::Allocator::getAllocatedSize  (binary VA: 0x1554100)
// Original: hkContainerTempAllocator::Allocator::getAllocatedSize
// ----------------------------------------------------------------------------
int hkContainerTempAllocator::Allocator::getAllocatedSize(hkContainerTempAllocator::Allocator::Self *self, const void *a2, int a3)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, const void *, int))(**(uint32_t **)(*(uint32_t *)address + 40) + 40))(
           *(uint32_t *)(*(uint32_t *)address + 40),
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkContainerTempAllocator::Allocator::getMemoryStatistics  (binary VA: 0x1554150)
// Original: hkContainerTempAllocator::Allocator::getMemoryStatistics
// ----------------------------------------------------------------------------
int hkContainerTempAllocator::Allocator::getMemoryStatistics(int a1, int a2)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 40) + 36))(
           *(uint32_t *)(*(uint32_t *)address + 40),
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkContainerTempAllocator::Allocator::bufRealloc  (binary VA: 0x1554190)
// Original: hkContainerTempAllocator::Allocator::bufRealloc
// ----------------------------------------------------------------------------
int hkContainerTempAllocator::Allocator::bufRealloc(hkContainerTempAllocator::Allocator::Self *self, void *a2, int a3, int *a4)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, void *, int, int *))(**(uint32_t **)(*(uint32_t *)address + 40) + 24))(
           *(uint32_t *)(*(uint32_t *)address + 40),
           a2,
           a3,
           a4);
}

// ----------------------------------------------------------------------------
// Function: hkContainerTempAllocator::Allocator::bufFree  (binary VA: 0x15541e0)
// Original: hkContainerTempAllocator::Allocator::bufFree
// ----------------------------------------------------------------------------
int hkContainerTempAllocator::Allocator::bufFree(hkContainerTempAllocator::Allocator::Self *self, void *a2, int a3)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 40) + 20))(
           *(uint32_t *)(*(uint32_t *)address + 40),
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkContainerTempAllocator::Allocator::bufAlloc  (binary VA: 0x1554230)
// Original: hkContainerTempAllocator::Allocator::bufAlloc
// ----------------------------------------------------------------------------
int hkContainerTempAllocator::Allocator::bufAlloc(hkContainerTempAllocator::Allocator::Self *self, int *a2)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int *))(**(uint32_t **)(*(uint32_t *)address + 40) + 16))(
           *(uint32_t *)(*(uint32_t *)address + 40),
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkContainerTempAllocator::Allocator::blockFree  (binary VA: 0x1554270)
// Original: hkContainerTempAllocator::Allocator::blockFree
// ----------------------------------------------------------------------------
int hkContainerTempAllocator::Allocator::blockFree(hkContainerTempAllocator::Allocator::Self *self, void *a2, int a3)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, void *, int))(**(uint32_t **)(*(uint32_t *)address + 40) + 12))(
           *(uint32_t *)(*(uint32_t *)address + 40),
           a2,
           a3);
}

// ----------------------------------------------------------------------------
// Function: hkContainerTempAllocator::Allocator::blockAlloc  (binary VA: 0x15542c0)
// Original: hkContainerTempAllocator::Allocator::blockAlloc
// ----------------------------------------------------------------------------
int hkContainerTempAllocator::Allocator::blockAlloc(hkContainerTempAllocator::Allocator::Self *self, int a2)
{
  int address;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 40) + 8))(
           *(uint32_t *)(*(uint32_t *)address + 40),
           a2);
}

// ----------------------------------------------------------------------------
// Function: hkContainerDefaultMallocAllocator::get  (binary VA: 0x1554300)
// Original: hkContainerDefaultMallocAllocator::get
// ----------------------------------------------------------------------------
int hkContainerDefaultMallocAllocator::get()
{
  return hkMallocAllocator::m_defaultMallocAllocator[0];
}

// ----------------------------------------------------------------------------
// Function: hkError::setMinimumMessageLevel  (binary VA: 0x15543c0)
// Original: hkError::setMinimumMessageLevel
// ----------------------------------------------------------------------------
void hkError::setMinimumMessageLevel()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkError::getMinimumMessageLevel  (binary VA: 0x15543d0)
// Original: hkError::getMinimumMessageLevel
// ----------------------------------------------------------------------------
int hkError::getMinimumMessageLevel()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkError::sectionBegin  (binary VA: 0x15543e0)
// Original: hkError::sectionBegin
// ----------------------------------------------------------------------------
void hkError::sectionBegin()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkError::sectionEnd  (binary VA: 0x15543f0)
// Original: hkError::sectionEnd
// ----------------------------------------------------------------------------
void hkError::sectionEnd()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkError::Destroy  (binary VA: 0x1554400)
// Original: hkError::~hkError
// ----------------------------------------------------------------------------
void hkError::Destroy(hkError::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkDefaultError::setMinimumMessageLevel  (binary VA: 0x1554420)
// Original: hkDefaultError::setMinimumMessageLevel
// ----------------------------------------------------------------------------
int hkDefaultError::setMinimumMessageLevel(int a1, int a2)
{
  *(uint32_t *)(a1 + 40) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkDefaultError::getMinimumMessageLevel  (binary VA: 0x1554430)
// Original: hkDefaultError::getMinimumMessageLevel
// ----------------------------------------------------------------------------
int hkDefaultError::getMinimumMessageLevel(hkDefaultError::Self *self)
{
  return *((uint32_t *)self + 10);
}

// ----------------------------------------------------------------------------
// Function: hkDefaultError::message  (binary VA: 0x1554440)
// Original: hkDefaultError::message
// ----------------------------------------------------------------------------
bool hkDefaultError::message(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6;
  int *v7;
  int v8;
  int v10;
  char v11;
  const char *v12;
  int v13;
  int v14;
  void *retaddr;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef void *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t _g4_t_v25[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v18)) > _g4_s3 ? (20u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v19)) > _g4_s4 ? (24u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v20)) > _g4_s5 ? (28u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v21)) > _g4_s6 ? (32u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v22)) > _g4_s7 ? (36u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v23)) > _g4_s8 ? (40u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v24)) > _g4_s9 ? (44u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v25)) > _g4_s10 ? (48u + sizeof(_g4_t_v25)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);

  v25[3] = (uint32_t)(uintptr_t)(&a1);
  v6 = a3;
  v7 = a1;
  if ( a3 == -1 )
  {
    v14 = a1[6];
    if ( v14 != 0 )
      v6 = *(uint32_t *)(a1[5] + 4 * v14 - 4);
  }
  v8 = G4_VCALL<int>(a1, 36, v15, v16, v17, v18, v19, v20, a6, a5, a4, a2, v25[0], v25[1], v25[2]);
  if ( v24 < v8 )
    return false;
  v10 = *v7;
  v25[5] = v6;
  v25[4] = (uint32_t)(uintptr_t)(v7);
  (*(void (**)(char *))(v10 + 28))((char *)v25 + 3);
  if ( HIBYTE(v25[0]) == 0 )
    return false;
  v11 = 0;
  if ( v24 == 1 )
  {
    v12 = "Warning";
    goto LABEL_10;
  }
  if ( v24 <= 1 )
  {
    v12 = "Report";
    if ( v24 == 0 )
      goto LABEL_10;
LABEL_14:
    v12 = (const char *)&unk_1B15112;
    goto LABEL_10;
  }
  if ( v24 == 2 )
  {
    v11 = 1;
    v12 = "Assert";
    goto LABEL_10;
  }
  if ( v24 != 3 )
    goto LABEL_14;
  v11 = 1;
  v12 = "Error";
LABEL_10:
  v13 = *v7;
  LOBYTE(a1) = v11;
  retaddr = v21;
  (*(void (**)(int *, const char *, int, int, int))(v13 + 52))(v7, v12, v6, v23, v22);
  return (unsigned int)(v24 - 2) <= 1;
}

// ----------------------------------------------------------------------------
// Function: hkDefaultError::sectionEnd  (binary VA: 0x1554590)
// Original: hkDefaultError::sectionEnd
// ----------------------------------------------------------------------------
hkDefaultError::Self * hkDefaultError::sectionEnd(hkDefaultError::Self *self)
{
  --*((uint32_t *)self + 6);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDefaultError::isEnabled  (binary VA: 0x15545a0)
// Original: hkDefaultError::isEnabled
// ----------------------------------------------------------------------------
hkDefaultError::Self * hkDefaultError::isEnabled(hkDefaultError::Self *self, int a2, unsigned int a3)
{
  bool v3;

  v3 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
         (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(a2 + 8),
         a3,
         0) == 0;
  *(uint8_t *)self = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDefaultError::enableAll  (binary VA: 0x15545f0)
// Original: hkDefaultError::enableAll
// ----------------------------------------------------------------------------
int hkDefaultError::enableAll(hkDefaultError::Self *self)
{
  *((uint32_t *)self + 10) = 0;
  return hkMapBase_unsigned_long_unsigned_l_393416::clear((hkDefaultError::Self *)((char *)self + 8));
}

// ----------------------------------------------------------------------------
// Function: hkDefaultError::sectionBegin  (binary VA: 0x1554620)
// Original: hkDefaultError::sectionBegin
// ----------------------------------------------------------------------------
int hkDefaultError::sectionBegin(hkDefaultError::Self *self, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = *((uint32_t *)self + 6);
  if ( v2 == (*((uint32_t *)self + 7) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkDefaultError::Self *)((char *)self + 20),
      4,
      v4);
    v2 = *((uint32_t *)self + 6);
  }
  result = *((uint32_t *)self + 5);
  *(uint32_t *)(result + 4 * v2) = a2;
  ++*((uint32_t *)self + 6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDefaultError::Destroy  (binary VA: 0x1554690)
// Original: hkDefaultError::~hkDefaultError
// ----------------------------------------------------------------------------
void hkDefaultError::Destroy(hkDefaultError::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20971C8);
  v1 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v1);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkDefaultError::Self *)((char *)self + 8),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy((hkDefaultError::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkDefaultError::setEnabled  (binary VA: 0x1554720)
// Original: hkDefaultError::setEnabled
// ----------------------------------------------------------------------------
int hkDefaultError::setEnabled(int a1, unsigned int a2, char a3)
{
  uint8_t v4[8];

  if ( a3 != 0 )
    return (int)(uintptr_t)(hkMapBase_unsigned_long_unsigned_l_393416::remove(
             (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v4,
             a1 + 8));
  else
    return hkMapBase_unsigned_long_unsigned_l_393416::insert(
             (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(a1 + 8),
             (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
             a2,
             1u);
}

// ----------------------------------------------------------------------------
// Function: hkError::Destroy_ea1554790  (binary VA: 0x1554790)
// Original: hkError::~hkError
// ----------------------------------------------------------------------------
void hkError::Destroy_ea1554790(hkError::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 8;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDefaultError::Destroy_ea15547f0  (binary VA: 0x15547f0)
// Original: hkDefaultError::~hkDefaultError
// ----------------------------------------------------------------------------
void hkDefaultError::Destroy_ea15547f0(hkDefaultError::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20971C8);
  v1 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v1);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkDefaultError::Self *)((char *)self + 8),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy((hkDefaultError::Self *)((char *)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkDefaultError::Construct  (binary VA: 0x15548b0)
// Original: hkDefaultError::hkDefaultError
// ----------------------------------------------------------------------------
void hkDefaultError::Construct(hkDefaultError::Self *self, void (*a2)(const char *, void *), void *a3)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20971C8);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = -1;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 10) = 0;
  hkDefaultError::setEnabled((int)(uintptr_t)(self), 0x64211C2Fu, 0);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryRouter::replaceInstance  (binary VA: 0x1554930)
// Original: hkMemoryRouter::replaceInstance
// ----------------------------------------------------------------------------
uint32_t * hkMemoryRouter::replaceInstance(hkMemoryRouter::Self *self)
{
  uint32_t *result;

  result = (uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  *result = (uint32_t)(uintptr_t)(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryRouter::Construct  (binary VA: 0x1554b10)
// Original: hkMemoryRouter::hkMemoryRouter
// ----------------------------------------------------------------------------
void hkMemoryRouter::Construct(hkMemoryRouter::Self *self)
{
  hkLifoAllocator::Construct(self, 0x8000);
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 15) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryRouter::alignedAlloc  (binary VA: 0x1554b60)
// Original: hkMemoryRouter::alignedAlloc
// ----------------------------------------------------------------------------
int hkMemoryRouter::alignedAlloc(hkMemoryRouter::Self *self, hkMemoryAllocator::Self *a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = G4_VCALL<int>(self, 8, (char *)a2 + a3 + 16);
  v4 = -a3 & (v3 + a3 + 15);
  v5 = v4 - v3;
  *(uint32_t *)(v4 - 16) = (uint32_t)(uintptr_t)(self);
  *(uint32_t *)(v4 - 12) = (uint32_t)(uintptr_t)((char *)a2 + a3);
  *(uint32_t *)(v4 - 8) = v5;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryRouter::alignedFree  (binary VA: 0x1554bb0)
// Original: hkMemoryRouter::alignedFree
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * hkMemoryRouter::alignedFree(hkMemoryRouter::Self *self, hkMemoryAllocator::Self *a2)
{
  hkMemoryAllocator::Self *result;
  int v3;

  result = a2;
  if ( a2 != nullptr )
  {
    v3 = *((uint32_t *)a2 - 3);
    *((uint32_t *)a2 - 4) = 0;
    return (hkMemoryAllocator::Self *)G4_VCALL<int>(self, 12, (char *)a2 - *((uint32_t *)a2 - 2), v3 + 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryRouter::easyAlloc  (binary VA: 0x1554bf0)
// Original: hkMemoryRouter::easyAlloc
// ----------------------------------------------------------------------------
uint32_t * hkMemoryRouter::easyAlloc(hkMemoryRouter::Self *self, hkMemoryAllocator::Self *a2)
{
  uint32_t *v2;

  v2 = (uint32_t *)G4_VCALL<int>(self, 8, (char *)a2 + 16);
  *v2 = (uint32_t)(uintptr_t)(self);
  v2[1] = (uint32_t)(uintptr_t)(a2);
  return v2 + 4;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryRouter::getEasyAllocSize  (binary VA: 0x1554c20)
// Original: hkMemoryRouter::getEasyAllocSize
// ----------------------------------------------------------------------------
int hkMemoryRouter::getEasyAllocSize(hkMemoryRouter::Self *self, hkMemoryAllocator::Self *a2)
{
  return *((uint32_t *)a2 - 3);
}

// ----------------------------------------------------------------------------
// Function: hkMemoryRouter::getEasyAllocStartAddress  (binary VA: 0x1554c30)
// Original: hkMemoryRouter::getEasyAllocStartAddress
// ----------------------------------------------------------------------------
char * hkMemoryRouter::getEasyAllocStartAddress(hkMemoryRouter::Self *self, hkMemoryAllocator::Self *a2)
{
  return (char *)a2 - 16;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryRouter::easyFree  (binary VA: 0x1554c40)
// Original: hkMemoryRouter::easyFree
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * hkMemoryRouter::easyFree(hkMemoryRouter::Self *self, hkMemoryAllocator::Self *a2)
{
  hkMemoryAllocator::Self *result;
  int v3;

  result = a2;
  if ( a2 != nullptr )
  {
    v3 = *((uint32_t *)a2 - 3);
    *((uint32_t *)a2 - 4) = 0;
    return (hkMemoryAllocator::Self *)G4_VCALL<int>(self, 12, (char *)a2 - 16, v3 + 16);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemoryRouter::resetPeakMemoryStatistics  (binary VA: 0x1554c80)
// Original: hkMemoryRouter::resetPeakMemoryStatistics
// ----------------------------------------------------------------------------
int hkMemoryRouter::resetPeakMemoryStatistics(hkMemoryRouter::Self *self)
{
  (*(void (**)(uint32_t))(**((uint32_t **)self + 12) + 44))(*((uint32_t *)self + 12));
  (*(void (**)(uint32_t))(**((uint32_t **)self + 11) + 44))(*((uint32_t *)self + 11));
  (*(void (**)(uint32_t))(**((uint32_t **)self + 13) + 44))(*((uint32_t *)self + 13));
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 10) + 44))(*((uint32_t *)self + 10));
}

// ----------------------------------------------------------------------------
// Function: hkRotationf::set  (binary VA: 0x1554cc0)
// Original: hkRotationf::set
// ----------------------------------------------------------------------------
hkRotationf::Self * hkRotationf::set(hkRotationf::Self *self, const hkQuaternionf::Self *a2)
{
  float v3; // xmm7_4
  float v4; // xmm4_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14;
  float v15;

  v3 = *(float *)a2 + *(float *)a2;
  v4 = *((float *)a2 + 2);
  v5 = *((float *)a2 + 1);
  v6 = v4 + v4;
  v7 = v5 + v5;
  v8 = *((float *)a2 + 3);
  v9 = v4 * (float)(v4 + v4);
  v15 = *(float *)a2 * v3;
  v10 = *(float *)a2 * (float)(v5 + v5);
  v14 = *(float *)a2 * v6;
  v11 = v5 * (float)(v5 + v5);
  v12 = v5 * v6;
  v13 = v7 * v8;
  *(float *)self = 1.0 - (float)(v11 + v9);
  *((float *)self + 1) = (float)(v6 * v8) + v10;
  *((float *)self + 4) = v10 - (float)(v6 * v8);
  *((float *)self + 2) = v14 - v13;
  *((uint32_t *)self + 3) = 0;
  *((float *)self + 5) = 1.0 - (float)(v9 + v15);
  *((uint32_t *)self + 7) = 0;
  *((float *)self + 8) = v13 + v14;
  *((float *)self + 10) = 1.0 - (float)(v15 + v11);
  *((uint32_t *)self + 11) = 0;
  *((float *)self + 6) = (float)(v3 * v8) + v12;
  *((float *)self + 9) = v12 - (float)(v3 * v8);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkRotationf::setAxisAngle  (binary VA: 0x1554df0)
// Original: hkRotationf::setAxisAngle
// ----------------------------------------------------------------------------
hkRotationf::Self * hkRotationf::setAxisAngle(hkRotationf::Self *self, const hkVector4f::Self *a2, float a3)
{
  uint8_t v4[24];

  hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)v4, a2, a3);
  return hkRotationf::set(self, (const hkQuaternionf::Self *)v4);
}

// ----------------------------------------------------------------------------
// Function: hkRotationf::setAxisAngle  (binary VA: 0x1554e40)
// Original: hkRotationf::setAxisAngle
// ----------------------------------------------------------------------------
hkRotationf::Self * hkRotationf::setAxisAngle(hkRotationf::Self *a1, int a2, int a3)
{
  uint8_t v4[24];

  hkQuaternionf::setAxisAngle(v4, a2, a3);
  return hkRotationf::set(a1, (const hkQuaternionf::Self *)v4);
}

// ----------------------------------------------------------------------------
// Function: hkRotationf::isOrthonormal  (binary VA: 0x1554e90)
// Original: hkRotationf::isOrthonormal
// ----------------------------------------------------------------------------
bool hkRotationf::isOrthonormal(hkRotationf::Self *self, float a2)
{
  float v2; // xmm0_4
  float v3; // xmm2_4
  bool result;
  float v5; // xmm1_4
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm7_4
  int v9;
  float v10;
  float v11;
  float v12;
  float v13;

  v2 = *(float *)self;
  v3 = *((float *)self + 1);
  result = false;
  v5 = *((float *)self + 2);
  if ( (float)((float)((float)((float)(v2 * v2) + (float)(v3 * v3)) + (float)(v5 * v5)) - 1.0) <= a2 )
  {
    v6 = *((float *)self + 5);
    v13 = *((float *)self + 4);
    v12 = *((float *)self + 6);
    if ( (float)((float)((float)((float)(v13 * v13) + (float)(v6 * v6)) + (float)(v12 * v12)) - 1.0) <= a2 )
    {
      v11 = *((float *)self + 8);
      v10 = *((float *)self + 9);
      v7 = *((float *)self + 10);
      if ( (float)((float)((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v7 * v7)) - 1.0) <= a2 )
      {
        v8 = fabs((float)((float)(v2 * v6) - (float)(v13 * v3)) - v7);
        LOBYTE(v9) = a2 >= v8 ? 4 : 0;
        if ( a2 >= fabs(0.0 - *((float *)self + 11)) )
          v9 = a2 < v8 ? 8 : 12;
        return (v9 & 7
              | (a2 >= fabs((float)((float)(v3 * v12) - (float)(v6 * v5)) - v11))
              | (a2 >= fabs((float)((float)(v5 * v13) - (float)(v2 * v12)) - v10) ? 2 : 0)) == 7;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkRotationf::isOk  (binary VA: 0x1555020)
// Original: hkRotationf::isOk
// ----------------------------------------------------------------------------
int hkRotationf::isOk(hkRotationf::Self *self)
{
  bool isOrthonormal;
  int v2;

  isOrthonormal = hkRotationf::isOrthonormal(self, 0.00001f);
  v2 = 0;
  if ( isOrthonormal )
    return hkMatrix3f::isOk(self);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkRotationf::renormalize  (binary VA: 0x1555060)
// Original: hkRotationf::renormalize
// ----------------------------------------------------------------------------
hkRotationf::Self * hkRotationf::renormalize(hkRotationf::Self *self)
{
  float v1; // xmm2_4
  float v2; // xmm3_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  int v5;
  int v6;
  int v7;
  int v8;
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  __m128i v12;
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm6_4
  __m128i v16;
  float v17; // xmm5_4
  float v18; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  typedef int _g4_t_v23;
  typedef float _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef float _g4_t_v30;
  typedef uint32_t _g4_t_v31[4];
  typedef unsigned int _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v24)) > _g4_s1 ? (8u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v27)) > _g4_s4 ? (20u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v28)) > _g4_s5 ? (24u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v29)) > _g4_s6 ? (28u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v30)) > _g4_s7 ? (28u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v31)) > _g4_s8 ? (32u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v32)) > _g4_s9 ? (48u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v33)) > _g4_s10 ? (52u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v34)) > _g4_s11 ? (56u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v35)) > _g4_s12 ? (60u + sizeof(_g4_t_v35)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);

  v1 = *(float *)self;
  v2 = *((float *)self + 5);
  v3 = *((float *)self + 10);
  v4 = (float)(*(float *)self + v2) + v3;
  if ( v4 > 0.0 )
  {
    v20 = v4 + 1.0;
    v21 = fsqrt(v20);
    if ( __builtin_isnan(v21) )
    {
      v30 = sqrtf(v20);
      v21 = v30;
    }
g4_m128_raw(v12) = *((unsigned int *)self + 6);
    v22 = 0.5 / v21;
    v15 = v21 * 0.5;
    v14 = (float)(*((float *)self + 1) - *((float *)self + 4)) * v22;
    v13 = (float)(*((float *)self + 8) - *((float *)self + 2)) * v22;
    *(float *)g4_m128_ptr<int32_t>(v12) = (float)(*(float *)g4_m128_ptr<int32_t>(v12) - *((float *)self + 9)) * v22;
  }
  else
  {
    v31[0] = 1;
    v5 = v2 > v1;
    v31[1] = 2;
    v31[2] = 0;
    v6 = 16 * v5;
    if ( v3 > *((float *)self + 4 * v5 + v5) )
    {
      v7 = 16;
      v8 = 0;
      v6 = 32;
      v27 = 1;
      v28 = 0;
      v5 = 2;
    }
    else
    {
      v28 = v31[v5];
      v27 = v31[v28];
      v7 = 16 * v27;
      v8 = 16 * v28;
    }
    v29 = (char *)self + v6;
    v26 = (char *)self + v8;
    v25 = (char *)self + v7;
    v9 = (float)(*(float *)((char *)self + 4 * v5 + v6)
               - (float)(*(float *)((char *)self + 4 * v28 + v8) + *(float *)((char *)self + 4 * v27 + v7)))
       + 1.0;
    v10 = fsqrt(v9);
    if ( __builtin_isnan(v10) )
    {
      v23 = v5;
      v24 = sqrtf(v9);
      v5 = v23;
      v10 = v24;
    }
    v11 = *(float *)&v26[4 * v27] - *(float *)&v25[4 * v28];
    *((float *)&v32 + v5) = v10 * 0.5;
    v35 = v11 * (float)(0.5 / v10);
    *((float *)&v32 + v28) = (float)(*(float *)&v29[4 * v28] + *(float *)&v26[4 * v5]) * (float)(0.5 / v10);
    *((float *)&v32 + v27) = (float)(*(float *)&v29[4 * v27] + *(float *)&v25[4 * v5]) * (float)(0.5 / v10);
g4_m128_raw(v12) = v32;
    v13 = v33;
    v14 = v34;
    v15 = v35;
  }
  v16 = v12;
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)g4_m128_ptr<int32_t>(v12))
                                          + (float)(v13 * v13))
                                  + (float)(v14 * v14))
                          + (float)(v15 * v15);
  v17 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v16);
g4_m128_lane<int32_t>(v16, 0) = ((_mm_cvtsi128_si32(v16) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v16) >> 1));
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)(1.5
                                  * (float)((float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v16))
                                          - (float)((float)(v17 * *(float *)g4_m128_ptr<int32_t>(v16))
                                                  * (float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16)))))
                          - (float)((float)(v17
                                          * (float)((float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v16))
                                                  - (float)((float)(v17 * *(float *)g4_m128_ptr<int32_t>(v16))
                                                          * (float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16)))))
                                  * (float)((float)((float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v16))
                                                  - (float)((float)(v17 * *(float *)g4_m128_ptr<int32_t>(v16))
                                                          * (float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16))))
                                          * (float)((float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v16))
                                                  - (float)((float)(v17 * *(float *)g4_m128_ptr<int32_t>(v16))
                                                          * (float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16))))));
  v18 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v16))
      - (float)((float)(v17 * *(float *)g4_m128_ptr<int32_t>(v16)) * (float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16)));
  *(float *)&v32 = *(float *)g4_m128_ptr<int32_t>(v12) * v18;
  v33 = v13 * v18;
  v34 = v14 * v18;
  v35 = v15 * v18;
  return hkRotationf::set(self, (const hkQuaternionf::Self *)&v32);
}

// ----------------------------------------------------------------------------
// Function: hkFourTransposedPointsf::staticClass  (binary VA: 0x1555370)
// Original: hkFourTransposedPointsf::staticClass
// ----------------------------------------------------------------------------
void * hkFourTransposedPointsf::staticClass()
{
  return &hkFourTransposedPointsfClass;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::garbageCollectShared  (binary VA: 0x1555460)
// Original: hkFreeListMemorySystem::garbageCollectShared
// ----------------------------------------------------------------------------
int hkFreeListMemorySystem::garbageCollectShared(hkFreeListMemorySystem::Self *self)
{
  int result;

  result = *((uint32_t *)self + 4);
  if ( result != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)result + 8))(*((uint32_t *)self + 4));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::setHeapSoftLimit  (binary VA: 0x1555480)
// Original: hkFreeListMemorySystem::setHeapSoftLimit
// ----------------------------------------------------------------------------
hkFreeListMemorySystem::Self * hkFreeListMemorySystem::setHeapSoftLimit(hkFreeListMemorySystem::Self *self, int a2)
{
  hkFreeListMemorySystem::Self *result;
  int v3;

  result = self;
  v3 = *(uint32_t *)(a2 + 16);
  if ( v3 != 0 )
  {
    (*(void (**)(hkFreeListMemorySystem::Self *))(*(uint32_t *)v3 + 16))(self);
    return self;
  }
  else
  {
    *(uint32_t *)self = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::getHeapSoftLimit  (binary VA: 0x15554d0)
// Original: hkFreeListMemorySystem::getHeapSoftLimit
// ----------------------------------------------------------------------------
int hkFreeListMemorySystem::getHeapSoftLimit(hkFreeListMemorySystem::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 4);
  result = 0;
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 20))(*((uint32_t *)self + 4));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::heapCanAllocTotal  (binary VA: 0x15554f0)
// Original: hkFreeListMemorySystem::heapCanAllocTotal
// ----------------------------------------------------------------------------
int hkFreeListMemorySystem::heapCanAllocTotal(hkFreeListMemorySystem::Self *self, int a2)
{
  int v2;
  int result;

  v2 = *((uint32_t *)self + 4);
  result = 1;
  if ( v2 != 0 )
    return G4_VCALL<int>(v2, 24, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::getUncachedLockedHeapAllocator  (binary VA: 0x1555520)
// Original: hkFreeListMemorySystem::getUncachedLockedHeapAllocator
// ----------------------------------------------------------------------------
int hkFreeListMemorySystem::getUncachedLockedHeapAllocator(hkFreeListMemorySystem::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::setHeapScrubValues  (binary VA: 0x1555530)
// Original: hkFreeListMemorySystem::setHeapScrubValues
// ----------------------------------------------------------------------------
int hkFreeListMemorySystem::setHeapScrubValues(hkFreeListMemorySystem::Self *self, unsigned int a2, unsigned int a3)
{
  int result;

  result = *((uint32_t *)self + 4);
  if ( result != 0 )
    return G4_VCALL<int>(result, 36, a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::mainInit  (binary VA: 0x1555560)
// Original: hkFreeListMemorySystem::mainInit
// ----------------------------------------------------------------------------
int hkFreeListMemorySystem::mainInit(int a1, int *a2, int a3)
{
  int v3;
  void *v5;
  int v6;

  v3 = a1 + 64;
  *(uint32_t *)(a1 + 8) = *a2;
  if ( (a3 & 1) != 0 )
  {
    G4_VCALL<void>(a1, 16, v3, "main", a3);
    v3 = a1 + 64;
  }
  if ( (a3 & 2) == 0 || *a2 == 0 )
    return v3;
  v6 = v3;
  v5 = (void *)(*(int (**)(uint32_t, int))(**(uint32_t **)(a1 + 4) + 8))(*(uint32_t *)(a1 + 4), *a2);
  hkSolverAllocator::setBuffer((hkSolverAllocator::Self *)(a1 + 128), v5, *a2);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::mainQuit  (binary VA: 0x1555610)
// Original: hkFreeListMemorySystem::mainQuit
// ----------------------------------------------------------------------------
uint32_t * hkFreeListMemorySystem::mainQuit(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  int v6;

  if ( (a3 & 2) != 0 )
  {
    v3 = *(uint32_t *)(a2 + 136);
    v4 = *(uint32_t *)(a2 + 132);
    if ( v3 != v4 )
      (*(void (**)(uint32_t, int, int))(**(uint32_t **)(a2 + 4) + 12))(*(uint32_t *)(a2 + 4), v4, v3 - v4);
  }
  if ( (a3 & 1) != 0 )
  {
    G4_VCALL<void>(a2, 20, a2 + 64, a3);
    hkSolverAllocator::setBuffer((hkSolverAllocator::Self *)(a2 + 128), nullptr, 0);
    v6 = *(uint32_t *)(a2 + 16);
    if ( v6 != 0 )
      (*(void (**)(uint32_t))(*(uint32_t *)v6 + 8))(*(uint32_t *)(a2 + 16));
  }
  *(uint32_t *)(a2 + 4) = 0;
  *a1 = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::threadQuit  (binary VA: 0x15556d0)
// Original: hkFreeListMemorySystem::threadQuit
// ----------------------------------------------------------------------------
char * hkFreeListMemorySystem::threadQuit(int a1, hkMemUtil::Self *a2, char a3)
{
  char *result;
  hkThreadMemory::Self *v4;

  result = (char *)(a1 + 304 * *((uint32_t *)a2 + 14));
  v4 = (hkThreadMemory::Self *)(result + 684);
  if ( (a3 & 2) != 0 )
  {
    hkLifoAllocator::quit(a2, nullptr);
    result = (char *)hkThreadMemory::releaseCachedMemory(v4);
    *((uint32_t *)a2 + 10) = 0;
    *((uint32_t *)a2 + 13) = 0;
  }
  if ( (a3 & 1) != 0 )
  {
    hkThreadMemory::releaseCachedMemory(v4);
    *((uint32_t *)v4 + 74) = 0;
    *((uint8_t *)v4 + 300) = 0;
    return (char *)hkMemUtil::memSet(a2, nullptr, 0x40u);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::solverCanAllocSingleBlock  (binary VA: 0x1555770)
// Original: hkFreeListMemorySystem::solverCanAllocSingleBlock
// ----------------------------------------------------------------------------
int hkFreeListMemorySystem::solverCanAllocSingleBlock(hkFreeListMemorySystem::Self *self, int a2)
{
  return hkSolverAllocator::canAllocSingleBlock((hkFreeListMemorySystem::Self *)((char *)self + 128), a2);
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::garbageCollectThread  (binary VA: 0x15557a0)
// Original: hkFreeListMemorySystem::garbageCollectThread
// ----------------------------------------------------------------------------
hkFreeListMemorySystem::Self * hkFreeListMemorySystem::garbageCollectThread(hkFreeListMemorySystem::Self *self, hkMemoryRouter::Self *a2)
{
  hkFreeListMemorySystem::Self *result;

  result = self;
  if ( (*((uint8_t *)self + 20148) & 4) != 0 )
    return (hkFreeListMemorySystem::Self *)(*(int (**)(uint32_t))(**((uint32_t **)a2 + 11) + 52))(*((uint32_t *)a2 + 11));
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::printStatistics  (binary VA: 0x15557d0)
// Original: hkFreeListMemorySystem::printStatistics
// ----------------------------------------------------------------------------
int hkFreeListMemorySystem::printStatistics(hkFreeListMemorySystem::Self *self, int64_t a2, pthread_mutex_t *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34)
{
  pthread_mutex_t *v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  char *v40;
  int64_t v41; // rax
  int v42;
  int64_t v43; // rax
  int64_t v44; // rax
  int v45;
  int64_t v46; // rax
  int64_t v47; // rax
  int result;
  int v76;
  int v77;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef uint8_t _g4_t_v74[48];
  typedef g4_int128_t _g4_t_varC;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v49)) > _g4_s0 ? (8u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v50)) > _g4_s1 ? (12u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v51)) > _g4_s2 ? (16u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v52)) > _g4_s3 ? (20u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v53)) > _g4_s4 ? (24u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v54)) > _g4_s5 ? (28u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v55)) > _g4_s6 ? (36u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v56)) > _g4_s7 ? (40u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v57)) > _g4_s8 ? (44u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v58)) > _g4_s9 ? (48u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v59)) > _g4_s10 ? (52u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v60)) > _g4_s11 ? (56u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v61)) > _g4_s12 ? (60u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v62)) > _g4_s13 ? (64u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v63)) > _g4_s14 ? (68u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v64)) > _g4_s15 ? (72u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v65)) > _g4_s16 ? (76u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v66)) > _g4_s17 ? (80u + sizeof(_g4_t_v66)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v67)) > _g4_s18 ? (84u + sizeof(_g4_t_v67)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v68)) > _g4_s19 ? (88u + sizeof(_g4_t_v68)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v69)) > _g4_s20 ? (92u + sizeof(_g4_t_v69)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v70)) > _g4_s21 ? (96u + sizeof(_g4_t_v70)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v71)) > _g4_s22 ? (100u + sizeof(_g4_t_v71)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v72)) > _g4_s23 ? (104u + sizeof(_g4_t_v72)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v73)) > _g4_s24 ? (108u + sizeof(_g4_t_v73)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v74)) > _g4_s25 ? (112u + sizeof(_g4_t_v74)) : _g4_s25,
    _g4_s27 = (160u + sizeof(_g4_t_varC)) > _g4_s26 ? (160u + sizeof(_g4_t_varC)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 36u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 40u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 44u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 48u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 52u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 56u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 68u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 72u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 76u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 80u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 84u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 88u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 92u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 96u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 100u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 104u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 108u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 112u);
  _g4_t_varC &varC = *reinterpret_cast<_g4_t_varC *>(_g4_sf + 160u);

  v34 = (pthread_mutex_t *)((char *)self + 20140);
  v35 = *((uint32_t *)self + 5036);
  if ( v35 != 0 )
  {
    while ( pthread_mutex_trylock((pthread_mutex_t *)((char *)self + 20140)) != 0 )
    {
      if ( --v35 == 0 )
      {
        v34 = (pthread_mutex_t *)((char *)self + 20140);
        goto LABEL_29;
      }
    }
  }
  else
  {
LABEL_29:
    if ( pthread_mutex_lock(v34) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  hkOstream::printf(
    (hkOstream::Self *)a2,
    "hkFreeListMemorySystem memory overview:\n=======================================\n");
  memset(v74, 255, 24);
  (*(void (**)(uint32_t, uint8_t *, int, int, int, int, int, int, char *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(**((uint32_t **)self + 1) + 36))(
    *((uint32_t *)self + 1),
    v74,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    (char *)self + 20140,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  a7 = -1;
  a8 = -1;
  a9 = -1;
  a10 = -1;
  a11 = -1;
  a12 = -1;
  (*(void (**)(uint32_t, int *))(**((uint32_t **)self + 3) + 36))(*((uint32_t *)self + 3), &a7);
  a29 = -1;
  a30 = -1;
  a31 = -1;
  a32 = -1;
  a33 = -1;
  a34 = -1;
  hkRecallAllocator::getMemoryStatistics((char *)self + 20, &a29);
  hkOstream::printf((hkOstream::Self *)a2, "\n    Allocation totals:\n\n");
  v76 = a7;
  hkOstream::printf((hkOstream::Self *)a2, "%20i allocated by heap\n", a7);
  v36 = a29;
  hkOstream::printf((hkOstream::Self *)a2, "%20i allocated by debug\n", a29);
  v37 = *((uint32_t *)self + 34) - *((uint32_t *)self + 33);
  hkOstream::printf((hkOstream::Self *)a2, "%20i allocated by solver\n", v37);
  hkOstream::printf((hkOstream::Self *)"-------", "%20s\n", "-------");
  hkOstream::printf((hkOstream::Self *)"-------", "%20i computed total\n", v36 + v76 + v37);
  v38 = 0;
  hkOstream::printf((hkOstream::Self *)"-------", "%20i reported total\n", a23);
  hkOstream::printf((hkOstream::Self *)"-------", "\n    Heap usage:\n\n");
  if ( (aTypeSetLocalTr_0 /* "TYPE_SET_LOCAL_TRANSLATIONS" */[1] & 4) != 0 )
  {
    v39 = 64;
    v40 = "xport";
    do
    {
      while ( v40[300] == 0 )
      {
        --v39;
        v40 += 304;
        if ( v39 == 0 )
          goto LABEL_10;
      }
      v77 = v39;
      a15 = -1;
      a16 = -1;
      a17 = -1;
      a18 = -1;
      a19 = -1;
      a20 = -1;
      hkThreadMemory::getMemoryStatistics(v40, &a15);
      v38 += a18;
      v39 = v77 - 1;
      v40 += 304;
    }
    while ( v77 != 1 );
LABEL_10:
    LODWORD(v41) = 0;
    if ( a7 != 0 )
    {
      LOBYTE(v41) = 100;
      DWORD2(varC) = a7;
      *(uint64_t *)&varC = v38 * (int64_t)(int)v41;
      HIDWORD(varC) = a7 >> 31;
      v41 = (int64_t)varC / *((uint64_t *)&varC + 1);
    }
    hkOstream::printf((hkOstream::Self *)"-------", "%20i (%2i%%) unused in thread local freelists\n", v38, (uint32_t)v41);
  }
  v42 = a10;
  LODWORD(v43) = 0;
  if ( a10 == -1 )
    v42 = 0;
  if ( a7 != 0 )
  {
    LOBYTE(v43) = 100;
    DWORD2(varC) = a7;
    HIDWORD(varC) = a7 >> 31;
    *(uint64_t *)&varC = v42 * (int64_t)(int)v43;
    v43 = (int64_t)varC / *((uint64_t *)&varC + 1);
  }
  hkOstream::printf((hkOstream::Self *)"-------", "%20i (%2i%%) unused in main heap\n", v42, (uint32_t)v43);
  LODWORD(v44) = 0;
  v45 = a7 - v42 - v38;
  if ( a7 != 0 )
  {
    LOBYTE(v44) = 100;
    DWORD2(varC) = a7;
    *(uint64_t *)&varC = v45 * (int64_t)(int)v44;
    HIDWORD(varC) = a7 >> 31;
    v44 = (int64_t)varC / *((uint64_t *)&varC + 1);
  }
  hkOstream::printf((hkOstream::Self *)"-------", "%20i (%2i%%) used in main heap\n", v45, (uint32_t)v44);
  hkOstream::printf((hkOstream::Self *)"-------", "%20s\n", "-------");
  hkOstream::printf((hkOstream::Self *)"-------", "%20i allocated by heap\n", a7);
  hkOstream::printf((hkOstream::Self *)"-------", "\n    Peak usage:\n\n");
  if ( a9 != -1 )
  {
    LODWORD(v46) = 0;
    if ( a9 != 0 )
    {
      LOBYTE(v46) = 100;
      DWORD2(varC) = a9;
      *(uint64_t *)&varC = v45 * (int64_t)(int)v46;
      HIDWORD(varC) = a9 >> 31;
      v46 = (int64_t)varC / *((uint64_t *)&varC + 1);
    }
    hkOstream::printf((hkOstream::Self *)"-------", "%20i (%2i%%) peak heap used (versus current)\n", a9, (uint32_t)v46);
  }
  LODWORD(v47) = 0;
  if ( *(uint32_t *)"or(Debug)" != *(uint32_t *)"ocator(Debug)" )
  {
    LOBYTE(v47) = 100;
    DWORD2(varC) = *(uint32_t *)"or(Debug)" - *(uint32_t *)"ocator(Debug)";
    *(uint64_t *)&varC = *(int *)"o many threads" * (int64_t)(int)v47;
    HIDWORD(varC) = (*(uint32_t *)"or(Debug)" - *(uint32_t *)"ocator(Debug)") >> 31;
    v47 = (int64_t)varC / *((uint64_t *)&varC + 1);
  }
  hkOstream::printf(
    (hkOstream::Self *)"-------",
    "%20i (%2i%%) peak solver used (versus available)\n",
    *(uint32_t *)"o many threads",
    (uint32_t)v47);
  result = pthread_mutex_unlock(a3);
  if ( result != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::getMemorySnapshot  (binary VA: 0x1555d40)
// Original: hkFreeListMemorySystem::getMemorySnapshot
// ----------------------------------------------------------------------------
hkFreeListMemorySystem::Self * hkFreeListMemorySystem::getMemorySnapshot(hkFreeListMemorySystem::Self *self, hkMemorySnapshot::Self *a2, hkMemorySnapshot::Self *a3)
{
  uint32_t *i;
  int v5;
  int v6;
  int v7;
  int v8;

  if ( *((uint32_t *)a2 + 4) == 0
    || (v7 = hkMemorySnapshot::addProvider(a3, "<System>", -1),
        v6 = hkMemorySnapshot::addProvider(a3, "hkSolverAllocator(Solver)", v7),
        hkMemorySnapshot::addItem(a3, v7, 1, *((uint32_t *)a2 + 33), *((uint32_t *)a2 + 34) - *((uint32_t *)a2 + 33)),
        hkMemorySnapshot::addItem(a3, v6, 1, *((uint32_t *)a2 + 33), *((uint32_t *)a2 + 34) - *((uint32_t *)a2 + 33)),
        (v5 = (*(int (**)(uint32_t, hkMemorySnapshot::Self *, int))(**((uint32_t **)a2 + 4) + 40))(
                *((uint32_t *)a2 + 4),
                a3,
                v7)) == -1) )
  {
    *(uint32_t *)self = 1;
    return self;
  }
  else
  {
    v8 = hkMemorySnapshot::addProvider(a3, "hkRecallAllocator(Debug)", v7);
    for ( i = *((uint32_t **)a2 + 15); i != nullptr; i = (uint32_t *)*i )
    {
      hkMemorySnapshot::addItem(a3, v7, 1, i, i[1]);
      hkMemorySnapshot::addItem(a3, v8, 0, i, 16);
      hkMemorySnapshot::addItem(a3, v8, 1, i + 4, i[2]);
      if ( (char *)i + i[2] + 16 != (char *)i + i[1] )
        hkMemorySnapshot::addItem(a3, v8, 0, (char *)i + i[2] + 16, i[1] - (i[2] + 16));
    }
    hkMemorySnapshot::setRouterWiring(a3, v5, v5, v5, v8, v6);
    *(uint32_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::Construct  (binary VA: 0x1555f50)
// Original: hkFreeListMemorySystem::hkFreeListMemorySystem
// ----------------------------------------------------------------------------
int hkFreeListMemorySystem::Construct(uint32_t *a1, hkMemoryAllocator::Self *a2, int a3, int a4, int a5)
{
  hkThreadMemory::Self *v5;
  int v6;
  typedef pthread_mutex_t *_g4_t_v8;
  typedef pthread_mutexattr_t _g4_t_attr;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_attr)) > _g4_s1 ? (16u + sizeof(_g4_t_attr)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_attr &attr = *reinterpret_cast<_g4_t_attr *>(_g4_sf + 16u);

  *a1 = ((uint32_t)(uintptr_t)&off_2097228);
  a1[1] = (uint32_t)(uintptr_t)(a2);
  hkMemorySystem::FrameInfo::Construct((hkMemorySystem::FrameInfo::Self *)(a1 + 2), 0);
  a1[3] = a3;
  a1[4] = a4;
  hkRecallAllocator::Construct((hkRecallAllocator::Self *)(a1 + 5), a2);
  hkMemoryRouter::Construct((hkMemoryRouter::Self *)(a1 + 16));
  hkSolverAllocator::Construct((hkSolverAllocator::Self *)(a1 + 32));
  v5 = (hkThreadMemory::Self *)(a1 + 171);
  v8 = (pthread_mutex_t *)(a1 + 5035);
  do
  {
    hkThreadMemory::Construct(v5);
    v6 = v5 - (hkThreadMemory::Self *)(a1 + 171);
    *((uint32_t *)v5 + 74) = 0;
    v5 = (hkThreadMemory::Self *)((char *)v5 + 304);
    *((uint8_t *)a1 + v6 + 984) = 0;
  }
  while ( v5 != (hkThreadMemory::Self *)v8 );
  a1[5036] = 0;
  if ( pthread_mutexattr_init(&attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      16,
      "hkCriticalSection");
    perror("pthread_mutexattr_init(&attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_settype(&attr, 1) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      17,
      "hkCriticalSection");
    perror("pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE)");
    __builtin_debugtrap();
  }
  if ( pthread_mutex_init(v8, &attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      18,
      "hkCriticalSection");
    perror("pthread_mutex_init(&m_mutex, &attr)");
    __builtin_debugtrap();
  }
  if ( pthread_mutexattr_destroy(&attr) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      19,
      "hkCriticalSection");
    perror("pthread_mutexattr_destroy(&attr)");
    __builtin_debugtrap();
  }
  a1[5037] = a5;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::Destroy  (binary VA: 0x1556190)
// Original: hkFreeListMemorySystem::~hkFreeListMemorySystem
// ----------------------------------------------------------------------------
void hkFreeListMemorySystem::Destroy(hkFreeListMemorySystem::Self *self)
{
  hkThreadMemory::Self *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2097228);
  if ( pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 20140)) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      28,
      "~hkCriticalSection");
    perror("pthread_mutex_destroy(&m_mutex)");
    __builtin_debugtrap();
  }
  v1 = (hkThreadMemory::Self *)((hkFreeListMemorySystem::Self *)((char *)self + 20140));
  do
  {
    v1 = (hkThreadMemory::Self *)((char *)v1 - 304);
    *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_20975E8);
    hkThreadMemory::releaseCachedMemory(v1);
    hkMemoryAllocator::Destroy(v1);
  }
  while ( (hkFreeListMemorySystem::Self *)((char *)self + 684) != (hkFreeListMemorySystem::Self *)(uintptr_t)(v1) );
  hkSolverAllocator::Destroy((hkFreeListMemorySystem::Self *)((char *)self + 128));
  *((uint32_t *)self + 16) = ((uint32_t)(uintptr_t)&off_2097368);
  hkMemoryAllocator::Destroy((hkFreeListMemorySystem::Self *)((char *)self + 64));
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_2097988);
  if ( pthread_mutex_destroy(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(self) + (24 * (1)))) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      28,
      "~hkCriticalSection");
    perror("pthread_mutex_destroy(&m_mutex)");
    __builtin_debugtrap();
  }
  hkMemoryAllocator::Destroy((hkFreeListMemorySystem::Self *)((char *)self + 20));
  hkMemorySystem::Destroy((hkMemorySystem::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::Destroy_ea15562e0  (binary VA: 0x15562e0)
// Original: hkFreeListMemorySystem::~hkFreeListMemorySystem
// ----------------------------------------------------------------------------
void hkFreeListMemorySystem::Destroy_ea15562e0(hkFreeListMemorySystem::Self *self)
{
  hkFreeListMemorySystem::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::threadInit  (binary VA: 0x1556310)
// Original: hkFreeListMemorySystem::threadInit
// ----------------------------------------------------------------------------
void hkFreeListMemorySystem::threadInit(int a1, hkLifoAllocator::Self *a2, int a3, char a4)
{
  hkMemoryAllocator::Self *v4;
  int v5;
  int v6;
  hkMemoryAllocator::Self *v7;
  int v8;
  int v9;
  uint8_t *v10;
  hkThreadMemory::Self *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[3];
  typedef uint8_t _g4_t_v17[540];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);

  if ( (a4 & 1) != 0 )
  {
    v8 = *(uint32_t *)(a1 + 20144);
    if ( v8 != 0 )
    {
      while ( pthread_mutex_trylock((pthread_mutex_t *)(a1 + 20140)) != 0 )
      {
        if ( --v8 == 0 )
          goto LABEL_26;
      }
    }
    else
    {
LABEL_26:
      if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 20140)) != 0 )
      {
        printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
        perror("pthread_mutex_lock(&mutex)");
        __builtin_debugtrap();
      }
    }
    v9 = 0;
    v10 = (uint8_t *)(a1 + 984);
    do
    {
      if ( *v10 == 0 )
      {
        *v10 = 1;
        v14 = v9;
        v13 = a1 + 304 * v9 + 684;
        v11 = (hkThreadMemory::Self *)v13;
        goto LABEL_20;
      }
      ++v9;
      v10 += 304;
    }
    while ( v9 != 64 );
    v11 = (hkThreadMemory::Self *)(a1 + 20140);
    v13 = a1 + 20140;
    v14 = 64;
LABEL_20:
    v15 = v9;
    if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 20140)) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
      perror("pthread_mutex_unlock(&m_mutex)");
      __builtin_debugtrap();
    }
    if ( v15 == 64 )
    {
      hkErrStream::Construct((hkErrStream::Self *)v16, (hkString::Self *)v17, 512);
      hkOstream::opShl((int)(uintptr_t)(v16), (hkString::Self *)"Too many threads");
      if ( hkError::messageError(
             (hkError::Self *)0xF03454FE,
             (int)(uintptr_t)(v17),
             "Memory/System/FreeList/hkFreeListMemorySystem.cpp",
             (const char *)&dword_64,
             v12) != 0 )
        __builtin_debugtrap();
      hkErrStream::Destroy((hkErrStream::Self *)v16);
    }
    *(uint32_t *)(v13 + 296) = a3;
    hkThreadMemory::setMemory(v11, *(hkMemoryAllocator::Self **)(a1 + 12), 8);
    *((uint32_t *)a2 + 10) = 0;
    if ( (*(uint8_t *)(a1 + 20148) & 4) == 0 )
      v11 = *(hkThreadMemory::Self **)(a1 + 12);
    *((uint32_t *)a2 + 11) = (uint32_t)(uintptr_t)(v11);
    *((uint32_t *)a2 + 12) = a1 + 20;
    *((uint32_t *)a2 + 13) = 0;
    *((uint32_t *)a2 + 14) = v14;
  }
  if ( (a4 & 2) != 0 )
  {
    v4 = *(hkMemoryAllocator::Self **)(a1 + 12);
    v5 = *(uint32_t *)(a1 + 20148);
    if ( (v5 & 4) != 0 )
      v4 = (hkMemoryAllocator::Self *)(304 * *((uint32_t *)a2 + 14) + a1 + 684);
    if ( (v5 & 2) != 0 )
    {
      v7 = (hkMemoryAllocator::Self *)(a1 + 128);
      v6 = a1 + 128;
    }
    else
    {
      v6 = a1 + 128;
      v7 = v4;
    }
    hkLifoAllocator::init(a2, v7, v4, v4);
    if ( (*(uint8_t *)(a1 + 20148) & 1) != 0 )
      v4 = (hkMemoryAllocator::Self *)(a2);
    *((uint32_t *)a2 + 10) = (uint32_t)(uintptr_t)(v4);
    *((uint32_t *)a2 + 13) = v6;
  }
}

// ----------------------------------------------------------------------------
// Function: hkFreeListMemorySystem::getMemoryStatistics  (binary VA: 0x15565e0)
// Original: hkFreeListMemorySystem::getMemoryStatistics
// ----------------------------------------------------------------------------
int hkFreeListMemorySystem::getMemoryStatistics(int a1, hkMemoryAllocator::Self *a2)
{
  int v2;
  hkStringPtr::Self *v3;
  bool v4;
  int v5;
  hkStringPtr::Self *v6;
  int v7;
  hkStringPtr::Self *v8;
  int v9;
  hkStringPtr::Self *v10;
  int v11;
  hkStringPtr::Self *v12;
  int v13;
  hkStringPtr::Self *v14;
  int v15;
  hkStringPtr::Self *v16;
  int v17;
  hkStringPtr::Self *v18;
  int v19;
  hkStringPtr::Self *v20;
  int v22;

  v2 = *((uint32_t *)a2 + 1) - 1;
  if ( v2 >= 0 )
  {
    v3 = (hkStringPtr::Self *)(28 * v2 + *(uint32_t *)a2);
    do
    {
      --v2;
      hkStringPtr::Destroy(v3);
      v3 = (hkStringPtr::Self *)((char *)v3 - 28);
    }
    while ( v2 != -1 );
  }
  v4 = (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) == 0;
  *((uint32_t *)a2 + 1) = 0;
  if ( v4 )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 28, v22);
    v5 = 28 * *((uint32_t *)a2 + 1);
  }
  else
  {
    v5 = 0;
  }
  v6 = (hkStringPtr::Self *)(*(uint32_t *)a2 + v5);
  hkStringPtr::Construct(v6);
  *((uint32_t *)v6 + 1) = -1;
  *((uint32_t *)v6 + 2) = -1;
  *((uint32_t *)v6 + 3) = -1;
  *((uint32_t *)v6 + 4) = -1;
  *((uint32_t *)v6 + 5) = -1;
  *((uint32_t *)v6 + 6) = -1;
  v7 = *((uint32_t *)a2 + 1);
  v8 = (hkStringPtr::Self *)(*(uint32_t *)a2 + 28 * v7);
  *((uint32_t *)a2 + 1) = v7 + 1;
  hkStringPtr::opAssign(v8, (hkString::Self *)"System");
  (*(void (**)(uint32_t, int))(**(uint32_t **)(a1 + 4) + 36))(*(uint32_t *)(a1 + 4), (int)(uintptr_t)(v8) + 4);
  v9 = *((uint32_t *)a2 + 1);
  if ( v9 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 28, v22);
    v9 = *((uint32_t *)a2 + 1);
  }
  v10 = (hkStringPtr::Self *)(*(uint32_t *)a2 + 28 * v9);
  hkStringPtr::Construct(v10);
  *((uint32_t *)v10 + 1) = -1;
  *((uint32_t *)v10 + 2) = -1;
  *((uint32_t *)v10 + 3) = -1;
  *((uint32_t *)v10 + 4) = -1;
  *((uint32_t *)v10 + 5) = -1;
  *((uint32_t *)v10 + 6) = -1;
  v11 = *((uint32_t *)a2 + 1);
  v12 = (hkStringPtr::Self *)(*(uint32_t *)a2 + 28 * v11);
  *((uint32_t *)a2 + 1) = v11 + 1;
  hkStringPtr::opAssign(v12, (hkString::Self *)"Heap");
  (*(void (**)(uint32_t, int))(**(uint32_t **)(a1 + 12) + 36))(*(uint32_t *)(a1 + 12), (int)(uintptr_t)(v12) + 4);
  v13 = *((uint32_t *)a2 + 1);
  if ( v13 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 28, v22);
    v13 = *((uint32_t *)a2 + 1);
  }
  v14 = (hkStringPtr::Self *)(*(uint32_t *)a2 + 28 * v13);
  hkStringPtr::Construct(v14);
  *((uint32_t *)v14 + 1) = -1;
  *((uint32_t *)v14 + 2) = -1;
  *((uint32_t *)v14 + 3) = -1;
  *((uint32_t *)v14 + 4) = -1;
  *((uint32_t *)v14 + 5) = -1;
  *((uint32_t *)v14 + 6) = -1;
  v15 = *((uint32_t *)a2 + 1);
  v16 = (hkStringPtr::Self *)(*(uint32_t *)a2 + 28 * v15);
  *((uint32_t *)a2 + 1) = v15 + 1;
  hkStringPtr::opAssign(v16, (hkString::Self *)"Debug");
  hkRecallAllocator::getMemoryStatistics(a1 + 20, (char *)v16 + 4);
  v17 = *((uint32_t *)a2 + 1);
  if ( v17 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 28, v22);
    v17 = *((uint32_t *)a2 + 1);
  }
  v18 = (hkStringPtr::Self *)(*(uint32_t *)a2 + 28 * v17);
  hkStringPtr::Construct(v18);
  *((uint32_t *)v18 + 1) = -1;
  *((uint32_t *)v18 + 2) = -1;
  *((uint32_t *)v18 + 3) = -1;
  *((uint32_t *)v18 + 4) = -1;
  *((uint32_t *)v18 + 5) = -1;
  *((uint32_t *)v18 + 6) = -1;
  v19 = *((uint32_t *)a2 + 1);
  v20 = (hkStringPtr::Self *)(28 * v19 + *(uint32_t *)a2);
  *((uint32_t *)a2 + 1) = v19 + 1;
  hkStringPtr::opAssign(v20, (hkString::Self *)"Solver");
  return hkSolverAllocator::getMemoryStatistics(a1 + 128, (char *)v20 + 4);
}

// ----------------------------------------------------------------------------
// Function: hkRefCountedProperties::Entry::staticClass  (binary VA: 0x15569b0)
// Original: hkRefCountedProperties::Entry::staticClass
// ----------------------------------------------------------------------------
void * hkRefCountedProperties::Entry::staticClass()
{
  return &hkRefCountedPropertiesEntryClass;
}

// ----------------------------------------------------------------------------
// Function: hkRefCountedProperties::staticClass  (binary VA: 0x15569d0)
// Original: hkRefCountedProperties::staticClass
// ----------------------------------------------------------------------------
void * hkRefCountedProperties::staticClass()
{
  return &hkRefCountedPropertiesClass;
}

// ----------------------------------------------------------------------------
// Function: hkCompareInfosBySize  (binary VA: 0x1556b60)
// Original: hkCompareInfosBySize
// ----------------------------------------------------------------------------
bool hkCompareInfosBySize(int a1, int a2)
{
  return *(float *)(a2 + 4) > *(float *)(a1 + 4);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamStringMap::Construct  (binary VA: 0x1557b90)
// Original: hkMonitorStreamStringMap::hkMonitorStreamStringMap
// ----------------------------------------------------------------------------
void hkMonitorStreamStringMap::Construct(hkMonitorStreamStringMap::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamStringMap::Construct  (binary VA: 0x1557bb0)
// Original: hkMonitorStreamStringMap::hkMonitorStreamStringMap
// ----------------------------------------------------------------------------
void hkMonitorStreamStringMap::Construct()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamStringMap::StringMap::Construct  (binary VA: 0x1557bc0)
// Original: hkMonitorStreamStringMap::StringMap::StringMap
// ----------------------------------------------------------------------------
hkMonitorStreamStringMap::StringMap::Self * hkMonitorStreamStringMap::StringMap::Construct(hkMonitorStreamStringMap::StringMap::Self *self)
{
  return ((hkStringPtr::Construct((hkMonitorStreamStringMap::StringMap::Self *)((char *)self + 8))), (hkMonitorStreamStringMap::StringMap::Self *)0);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamStringMap::StringMap::Construct  (binary VA: 0x1557bf0)
// Original: hkMonitorStreamStringMap::StringMap::StringMap
// ----------------------------------------------------------------------------
int hkMonitorStreamStringMap::StringMap::Construct(int a1, int a2)
{
  return ((hkStringPtr::Construct(a1 + 8, a2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::Node::Construct  (binary VA: 0x1557c20)
// Original: hkMonitorStreamAnalyzer::Node::Node
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::Node::Construct(int a1, uint32_t *a2, int a3, int16_t a4)
{
  int v4;
  uint16_t *v5;
  unsigned int v6;
  uint16_t *v7;
  uint16_t *v8;
  unsigned int v9;
  int result;
  uint16_t *v11;
  int v12;

  *(uint32_t *)(a1 + 120) = a3;
  *(uint32_t *)(a1 + 96) = 0;
  *(uint32_t *)(a1 + 100) = 0;
  *(uint32_t *)(a1 + 104) = 0x80000000;
  *(uint32_t *)(a1 + 116) = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)(a1 + 124) = 0;
  *(uint16_t *)(a1 + 132) = a4;
  if ( a2 != nullptr )
  {
    v4 = a2[25];
    if ( v4 == (a2[26] & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkMemoryAllocator::Self *)(a2 + 24),
        4,
        v12);
      v4 = a2[25];
    }
    *(uint32_t *)(a2[24] + 4 * v4) = a1;
    ++a2[25];
  }
  v5 = (uint16_t *)a1;
  v6 = 48;
  if ( (a1 & 1) != 0 )
  {
    v5 = (uint16_t *)(a1 + 1);
    *(uint8_t *)a1 = 0;
    LOBYTE(v6) = 47;
    if ( ((a1 + 1) & 2) == 0 )
      goto LABEL_7;
  }
  else if ( (a1 & 2) == 0 )
  {
    goto LABEL_7;
  }
  *v5 = 0;
  v6 -= 2;
  ++v5;
LABEL_7:
  memset(v5, 0, 4 * (v6 >> 2));
  v7 = &v5[2 * (v6 >> 2)];
  if ( (v6 & 2) != 0 )
    *v7++ = 0;
  if ( (v6 & 1) != 0 )
    *(uint8_t *)v7 = 0;
  v8 = (uint16_t *)(a1 + 48);
  v9 = 48;
  if ( ((a1 + 48) & 1) != 0 )
  {
    v8 = (uint16_t *)(a1 + 49);
    *(uint8_t *)(a1 + 48) = 0;
    LOBYTE(v9) = 47;
    if ( ((a1 + 49) & 2) == 0 )
      goto LABEL_13;
  }
  else if ( ((uint8_t)(uintptr_t)(v8) & 2) == 0 )
  {
    goto LABEL_13;
  }
  *v8 = 0;
  v9 -= 2;
  ++v8;
LABEL_13:
  result = 0;
  memset(v8, 0, 4 * (v9 >> 2));
  v11 = &v8[2 * (v9 >> 2)];
  if ( (v9 & 2) != 0 )
    *v11++ = 0;
  if ( (v9 & 1) != 0 )
    *(uint8_t *)v11 = 0;
  *(uint16_t *)(a1 + 134) = 0;
  *(uint64_t *)(a1 + 108) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::Node::Destroy  (binary VA: 0x1558bc0)
// Original: hkMonitorStreamAnalyzer::Node::~Node
// ----------------------------------------------------------------------------
void hkMonitorStreamAnalyzer::Node::Destroy(hkMonitorStreamAnalyzer::Node::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int address;
  int v6;

  v1 = 0;
  v2 = *((uint32_t *)self + 25);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *((uint32_t *)self + 24);
      v4 = *(uint32_t *)(v3 + 4 * v1);
      if ( v4 != 0 )
      {
        hkMonitorStreamAnalyzer::Node::Destroy(*(hkMonitorStreamAnalyzer::Node::Self **)(v3 + 4 * v1));
        address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
          *(uint32_t *)(*(uint32_t *)address + 44),
          v4,
          136);
        v2 = *((uint32_t *)self + 25);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  v6 = *((uint32_t *)self + 26);
  *((uint32_t *)self + 25) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 24),
      4 * v6);
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 26) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::getStreamBegin  (binary VA: 0x1558c70)
// Original: hkMonitorStreamAnalyzer::getStreamBegin
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::getStreamBegin(hkMonitorStreamAnalyzer::Self *self)
{
  if ( *((uint32_t *)self + 4) != 0 )
    return *((uint32_t *)self + 3);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::reset  (binary VA: 0x1558c90)
// Original: hkMonitorStreamAnalyzer::reset
// ----------------------------------------------------------------------------
hkMonitorStreamAnalyzer::Self * hkMonitorStreamAnalyzer::reset(hkMonitorStreamAnalyzer::Self *self)
{
  hkMonitorStreamAnalyzer::Self *result;
  int v2;
  uint32_t *v3;
  int v4;
  hkStringPtr::Self *v5;
  int v6;
  int v7;

  result = self;
  v7 = 0;
  v6 = 0;
  v2 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 4) = 0;
  if ( v2 > 0 )
  {
    do
    {
      v3 = (uint32_t *)(*(uint32_t *)result + v7);
      v4 = v3[1] - 1;
      if ( v4 >= 0 )
      {
        v5 = (hkStringPtr::Self *)(*v3 + 36 * v4);
        do
        {
          --v4;
          hkStringPtr::Destroy(v5);
          v5 = (hkStringPtr::Self *)((char *)v5 - 36);
        }
        while ( v4 != -1 );
        result = self;
      }
      ++v6;
      v3[1] = 0;
      v7 += 12;
    }
    while ( *((uint32_t *)result + 1) > v6 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::resetNumThreads  (binary VA: 0x1558d30)
// Original: hkMonitorStreamAnalyzer::resetNumThreads
// ----------------------------------------------------------------------------
hkMonitorStreamAnalyzer::Self * hkMonitorStreamAnalyzer::resetNumThreads(hkMonitorStreamAnalyzer::Self *self, int a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  hkStringPtr::Self *v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef hkMonitorStreamAnalyzer::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v21[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v19)) > _g4_s4 ? (20u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v20)) > _g4_s5 ? (24u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v21)) > _g4_s6 ? (28u + sizeof(_g4_t_v21)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);

  v21[3] = (uint32_t)(uintptr_t)(&self);
  v17 = self;
  v16 = a2;
  v15 = a3;
  v18 = a3 + a2;
  v3 = *((uint32_t *)self + 2) & 0x3FFFFFFF;
  if ( a3 + a2 > v3 )
  {
    v4 = 2 * v3;
    if ( v4 < a3 + a2 )
      v4 = a3 + a2;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v21,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)self,
      v4,
      12);
  }
  v5 = *((uint32_t *)v17 + 1);
  v6 = *(uint32_t *)v17;
  v19 = v5 - v18 - 1;
  if ( v19 >= 0 )
  {
    v20 = *(uint32_t *)v17 + 12 * v18 + 12 * (*((uint32_t *)v17 + 1) - v18);
    do
    {
      v7 = *(uint32_t *)(v20 - 8) - 1;
      if ( v7 >= 0 )
      {
        v8 = (hkStringPtr::Self *)(*(uint32_t *)(v20 - 12) + 36 * v7);
        do
        {
          --v7;
          hkStringPtr::Destroy(v8);
          v8 = (hkStringPtr::Self *)((char *)v8 - 36);
        }
        while ( v7 != -1 );
      }
      *(uint32_t *)(v20 - 8) = 0;
      v9 = *(uint32_t *)(v20 - 4);
      if ( v9 >= 0 )
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(uint32_t *)(v20 - 12),
          36 * v9);
      v10 = v20;
      --v19;
      v20 -= 12;
      *(uint32_t *)(v10 - 12) = 0;
      *(uint32_t *)(v10 - 4) = 0x80000000;
    }
    while ( v19 != -1 );
    v5 = *((uint32_t *)v17 + 1);
    v6 = *(uint32_t *)v17;
  }
  v11 = v18 - v5;
  v12 = (uint32_t *)(v6 + 12 * v5);
  if ( v11 > 0 )
  {
    v13 = &v12[3 * v11];
    do
    {
      *v12 = 0;
      v12[1] = 0;
      v12[2] = 0x80000000;
      v12 += 3;
    }
    while ( v12 != v13 );
  }
  *((uint32_t *)v17 + 1) = v18;
  *((uint32_t *)v17 + 7) = v15;
  *((uint32_t *)v17 + 6) = v16;
  return hkMonitorStreamAnalyzer::reset(v17);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::Construct  (binary VA: 0x1558ef0)
// Original: hkMonitorStreamAnalyzer::hkMonitorStreamAnalyzer
// ----------------------------------------------------------------------------
void hkMonitorStreamAnalyzer::Construct(hkMonitorStreamAnalyzer::Self *self, int a2, int a3, int a4)
{
  hkMonitorStreamAnalyzer::Self *v4;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[7];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);

  v9[3] = (uint32_t)(uintptr_t)(&self);
  v4 = self;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  *(uint32_t *)self = 0;
  *((uint32_t *)v4 + 1) = 0;
  *((uint32_t *)v4 + 2) = 0x80000000;
  *((uint32_t *)v4 + 3) = 0;
  *((uint32_t *)v4 + 4) = 0;
  *((uint32_t *)v4 + 5) = 0x80000000;
  *(uint32_t *)(hkMonitorStreamAnalyzer::g_lastFrameTime) = 1182938419u;
  if ( v5 > 0 )
  {
    v8 = v7;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v9,
      (hkMemoryAllocator::Self *)hkContainerDebugAllocator::s_alloc,
      (int *)v4 + 3,
      v5,
      1);
    v7 = v8;
  }
  *((uint32_t *)v4 + 8) = (uint32_t)(uintptr_t)("Physics 2012");
  hkMonitorStreamAnalyzer::resetNumThreads(v4, v6, v7);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamFrameInfo::Construct  (binary VA: 0x1558fb0)
// Original: hkMonitorStreamFrameInfo::hkMonitorStreamFrameInfo
// ----------------------------------------------------------------------------
void hkMonitorStreamFrameInfo::Construct(hkMonitorStreamFrameInfo::Self *self)
{
  hkStringPtr::Construct(self, (hkString::Self *)"Unknown Heading");
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 1;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 5) = 1065353216;
  *((uint32_t *)self + 8) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::applyStringMap  (binary VA: 0x1559020)
// Original: hkMonitorStreamAnalyzer::applyStringMap
// ----------------------------------------------------------------------------
unsigned int * hkMonitorStreamAnalyzer::applyStringMap(unsigned int a1, unsigned int a2, unsigned int a3, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a4, char a5)
{
  unsigned int v5;
  unsigned int *result;
  uint16_t v7;
  unsigned int *v8;
  int v9; // kr04_4
  unsigned int v10;
  uint16_t v11;
  int v12;
  int v13;
  uint16_t v14;
  int v15;
  uint16_t v16;
  int v17;
  uint16_t v18;
  int v19;
  uint16_t v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef char _g4_t_v28;
  typedef unsigned int *_g4_t_v29;
  typedef unsigned int *_g4_t_v30;
  typedef unsigned int *_g4_t_v31;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v23)) > _g4_s2 ? (44u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v24)) > _g4_s3 ? (48u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v25)) > _g4_s4 ? (52u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v26)) > _g4_s5 ? (52u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v27)) > _g4_s6 ? (56u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (63u + sizeof(_g4_t_v28)) > _g4_s7 ? (63u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v29)) > _g4_s8 ? (64u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v30)) > _g4_s9 ? (68u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v31)) > _g4_s10 ? (92u + sizeof(_g4_t_v31)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 63u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 92u);

  v31 = &a2;
  v5 = a2;
  v27 = a3;
  v23 = a4;
  v28 = a5;
  result = (unsigned int *)"Unknown object name";
  if ( a2 >= a3 )
    return result;
  while ( v28 != 0 )
  {
    result = *(unsigned int **)v5;
    LOBYTE(v7) = HIBYTE(*(uint32_t *)v5);
    HIBYTE(v7) = BYTE2(*(uint32_t *)v5);
    a1 = (*(uint32_t *)v5 << 24) | ((uint8_t)BYTE1(*(uint32_t *)v5) << 16) | v7;
    if ( a1 > 0xFF )
      goto LABEL_9;
    *(uint32_t *)v5 = a1;
    v5 += 4;
LABEL_5:
    if ( v27 <= v5 )
      return result;
  }
  if ( *(uint32_t *)v5 <= 0xFFu )
  {
LABEL_11:
    v5 += 4;
    goto LABEL_5;
  }
  result = *(unsigned int **)v5;
LABEL_9:
  v24 = a1;
  hkMapBase_unsigned_long_unsigned_l_393416::get(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v29,
    (unsigned int)(uintptr_t)(v23),
    result);
  result = v29;
  a1 = v24;
  if ( v29 == nullptr )
  {
    v8 = v30;
    *(uint32_t *)v5 = (uint32_t)(uintptr_t)(v30);
    v9 = *(uint8_t *)v8 - 69;
    result = (unsigned int *)((char *)dword_20B9FF4 + (uint32_t)jpt_1559113[(uint8_t)v9]);
    switch ( (char)v9 )
    {
      case 0:
      case 13:
      case 14:
      case 15:
      case 39:
        v10 = v5 + 12;
        if ( v28 == 0 )
          goto LABEL_27;
        LOBYTE(v18) = HIBYTE(*(uint32_t *)(v5 + 4));
        HIBYTE(v18) = BYTE2(*(uint32_t *)(v5 + 4));
        v19 = *(uint32_t *)(v5 + 8);
        *(uint32_t *)(v5 + 4) = (*(uint32_t *)(v5 + 4) << 24) | ((uint8_t)BYTE1(*(uint32_t *)(v5 + 4)) << 16) | v18;
        LOBYTE(v18) = HIBYTE(v19);
        HIBYTE(v18) = BYTE2(v19);
        result = (unsigned int *)((v19 << 24) | (BYTE1(v19) << 16) | v18);
        *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(result);
        v5 += 12;
        goto LABEL_5;
      case 1:
      case 9:
      case 11:
      case 20:
      case 43:
        goto LABEL_11;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 12:
      case 16:
      case 17:
      case 19:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
      case 32:
      case 33:
      case 34:
      case 35:
      case 36:
      case 37:
      case 38:
      case 40:
      case 41:
      case 42:
        return result;
      case 7:
        hkMapBase_unsigned_long_unsigned_l_393416::get(
          (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v29,
          (unsigned int)(uintptr_t)(v23),
          *(unsigned int **)(v5 + 12));
        result = v29;
        a1 = v24;
        if ( v29 == nullptr )
        {
          result = v30;
          *(uint32_t *)(v5 + 12) = (uint32_t)(uintptr_t)(v30);
        }
        if ( v28 != 0 )
        {
          LOBYTE(v16) = HIBYTE(*(uint32_t *)(v5 + 4));
          HIBYTE(v16) = BYTE2(*(uint32_t *)(v5 + 4));
          v17 = *(uint32_t *)(v5 + 8);
          *(uint32_t *)(v5 + 4) = (*(uint32_t *)(v5 + 4) << 24) | ((uint8_t)BYTE1(*(uint32_t *)(v5 + 4)) << 16) | v16;
          LOBYTE(v16) = HIBYTE(v17);
          HIBYTE(v16) = BYTE2(v17);
          result = (unsigned int *)((v17 << 24) | (BYTE1(v17) << 16) | v16);
          *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(result);
        }
        v5 += 16;
        goto LABEL_5;
      case 8:
        v10 = v5 + 8;
        if ( v28 == 0 )
          goto LABEL_27;
        v26 = _mm_cvtsi128_si32(g4_to_m128i(*(unsigned int *)(v5 + 4)));
        LOBYTE(v20) = HIBYTE(v26);
        HIBYTE(v20) = BYTE2(v26);
        v21 = (BYTE1(v26) << 16) | v20;
        result = (unsigned int *)(v26 << 24);
        *(uint32_t *)(v5 + 4) = (v26 << 24) | v21;
        v5 += 8;
        goto LABEL_5;
      case 10:
        v10 = v5 + 16;
        result = (unsigned int *)hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                                   v23,
                                   *(uint32_t *)(v5 + 12),
                                   (unsigned int)(uintptr_t)("Unknown object name"));
        *(uint32_t *)(v5 + 12) = (uint32_t)(uintptr_t)(result);
        a1 = v24;
        if ( v28 == 0 )
          goto LABEL_27;
        LOBYTE(v14) = HIBYTE(*(uint32_t *)(v5 + 4));
        HIBYTE(v14) = BYTE2(*(uint32_t *)(v5 + 4));
        v15 = *(uint32_t *)(v5 + 8);
        *(uint32_t *)(v5 + 4) = (*(uint32_t *)(v5 + 4) << 24) | ((uint8_t)BYTE1(*(uint32_t *)(v5 + 4)) << 16) | v14;
        LOBYTE(v14) = HIBYTE(v15);
        HIBYTE(v14) = BYTE2(v15);
        result = (unsigned int *)((v15 << 24) | (BYTE1(v15) << 16) | v14);
        *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(result);
        v5 += 16;
        goto LABEL_5;
      case 18:
        v10 = v5 + 16;
        if ( v28 != 0 )
        {
          LOBYTE(v11) = HIBYTE(*(uint32_t *)(v5 + 12));
          HIBYTE(v11) = BYTE2(*(uint32_t *)(v5 + 12));
          v12 = *(uint32_t *)(v5 + 4);
          *(uint32_t *)(v5 + 12) = (*(uint32_t *)(v5 + 12) << 24)
                               | ((uint8_t)BYTE1(*(uint32_t *)(v5 + 12)) << 16)
                               | v11;
          v25 = v12;
          LOBYTE(v11) = HIBYTE(v12);
          HIBYTE(v11) = BYTE2(v12);
          v22 = (BYTE1(v12) << 16) | v11;
          v13 = *(uint32_t *)(v5 + 8);
          *(uint32_t *)(v5 + 4) = (v25 << 24) | v22;
          LOBYTE(v11) = HIBYTE(v13);
          HIBYTE(v11) = BYTE2(v13);
          result = (unsigned int *)((v13 << 24) | (BYTE1(v13) << 16) | v11);
          *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(result);
          v5 += 16;
        }
        else
        {
LABEL_27:
          v5 = v10;
        }
        goto LABEL_5;
      default:
        return (unsigned int *)v9;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::extractStringMap  (binary VA: 0x1559420)
// Original: hkMonitorStreamAnalyzer::extractStringMap
// ----------------------------------------------------------------------------
void hkMonitorStreamAnalyzer::extractStringMap(unsigned int *a1, unsigned int a2, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a3)
{
  unsigned int *v3;
  unsigned int v4;

  v3 = a1;
  if ( (unsigned int)(uintptr_t)(a1) < a2 )
  {
    while ( 2 )
    {
      while ( *v3 <= 0xFF )
      {
LABEL_3:
        ++v3;
LABEL_4:
        if ( a2 <= (unsigned int)(uintptr_t)(v3) )
          return;
      }
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        a3,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        *v3,
        *v3);
      switch ( *(uint8_t *)*v3 )
      {
        case 'E':
        case 'R':
        case 'S':
        case 'T':
        case 'l':
          v3 += 3;
          goto LABEL_4;
        case 'L':
        case 'O':
          v4 = v3[3];
          v3 += 4;
          hkMapBase_unsigned_long_unsigned_l_393416::insert(
            a3,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v4,
            v4);
          if ( a2 > (unsigned int)(uintptr_t)(v3) )
            continue;
          break;
        case 'M':
          v3 += 2;
          goto LABEL_4;
        case 'N':
        case 'P':
        case 'Y':
        case 'p':
          goto LABEL_3;
        case 'W':
          v3 += 4;
          goto LABEL_4;
        default:
          return;
      }
      break;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::captureFrameDetails  (binary VA: 0x15594f0)
// Original: hkMonitorStreamAnalyzer::captureFrameDetails
// ----------------------------------------------------------------------------
hkMonitorStreamAnalyzer::Self * hkMonitorStreamAnalyzer::captureFrameDetails(hkMonitorStreamAnalyzer::Self *self, const char *a2, hkMonitorStreamFrameInfo::Self *a3, hkMonitorStreamFrameInfo::Self *a4, hkStringPtr::Self *a5)
{
  hkMemoryAllocator::Self *v6;
  int v7;
  int v8;
  int v9;
  hkStringPtr::Self *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v15 = a4 - a3;
  if ( v15 <= (*((uint32_t *)a2 + 5) & 0x3FFFFFFF) - *((uint32_t *)a2 + 4) )
  {
    v6 = (hkMemoryAllocator::Self *)(*(uint32_t *)a2 + 12 * *((uint32_t *)a5 + 6));
    v7 = *((uint32_t *)v6 + 1);
    if ( v7 == (*((uint32_t *)v6 + 2) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v6, 36, v14);
      v7 = *((uint32_t *)v6 + 1);
    }
    hkMonitorStreamFrameInfo::Construct((hkMonitorStreamFrameInfo::Self *)(*(uint32_t *)v6 + 36 * v7));
    v8 = *((uint32_t *)v6 + 1);
    v9 = *(uint32_t *)v6;
    *((uint32_t *)v6 + 1) = v8 + 1;
    v10 = (hkStringPtr::Self *)(v9 + 36 * v8);
    hkStringPtr::opAssign(v10, a5);
    *((uint32_t *)v10 + 1) = *((uint32_t *)a5 + 1);
    *((uint32_t *)v10 + 2) = *((uint32_t *)a5 + 2);
    *((uint32_t *)v10 + 3) = *((uint32_t *)a5 + 3);
    *((uint32_t *)v10 + 4) = *((uint32_t *)a5 + 4);
    *((uint32_t *)v10 + 5) = *((uint32_t *)a5 + 5);
    *((uint32_t *)v10 + 6) = *((uint32_t *)a5 + 6);
    *((uint32_t *)v10 + 7) = *((uint32_t *)a5 + 7);
    *((uint32_t *)v10 + 8) = *((uint32_t *)a5 + 8);
    v11 = *((uint32_t *)a2 + 4);
    *((uint32_t *)v10 + 7) = v11;
    *((uint32_t *)v10 + 8) = v15 + v11;
    v12 = *((uint32_t *)a2 + 4);
    v13 = *((uint32_t *)a2 + 3);
    *((uint32_t *)a2 + 4) = v12 + v15;
    hkString::memCpy((hkString::Self *)(v13 + v12), a3, v15, v14);
    *(uint8_t *)self = 1;
    return self;
  }
  else
  {
    *(uint8_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::Node::setTimers  (binary VA: 0x1559640)
// Original: hkMonitorStreamAnalyzer::Node::setTimers
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::Node::setTimers(int a1, int a2, int a3, int a4)
{
  int result;
  unsigned int v5;
  int v6;
  unsigned int v7;
  float v8; // xmm0_4
  unsigned int v9;
  int v10;
  unsigned int v11;
  float v12; // xmm0_4
  int v13;
  double v14; // xmm0_8
  int v15;

  result = a2;
  v5 = *(uint32_t *)(a2 + 4);
  if ( v5 <= 0xB )
  {
    v6 = a1 + 4 * v5;
    v7 = *(uint32_t *)(a4 + 4) - *(uint32_t *)(a3 + 4);
    v8 = (float)((float)((float)HIWORD(v7) * 65536.0) + (float)(uint16_t)v7) * *(float *)(a2 + 16);
    ++*(uint32_t *)(v6 + 48);
    *(float *)v6 = v8 + *(float *)v6;
  }
  v9 = *(uint32_t *)(a2 + 8);
  if ( v9 <= 0xB )
  {
    v10 = a1 + 4 * v9;
    v11 = *(uint32_t *)(a4 + 8) - *(uint32_t *)(a3 + 8);
    v12 = (float)((float)((float)HIWORD(v11) * 65536.0) + (float)(uint16_t)v11) * *(float *)(a2 + 20);
    ++*(uint32_t *)(v10 + 48);
    *(float *)v10 = v12 + *(float *)v10;
  }
  v13 = *(uint32_t *)(a2 + 12);
  if ( v13 != 0 )
  {
    if ( v13 != 1 )
      return result;
    v14 = *(float *)(a2 + 20);
    v15 = *(uint32_t *)(a3 + 8);
  }
  else
  {
    v14 = *(float *)(a2 + 16);
    v15 = *(uint32_t *)(a3 + 4);
  }
  result = v15 + 0x80000000;
  *(double *)(a1 + 108) = v14 * ((double)result + 2147483648.0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::Node::setTimers  (binary VA: 0x1559730)
// Original: hkMonitorStreamAnalyzer::Node::setTimers
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::Node::setTimers(int a1, int a2, uint32_t *a3)
{
  int result;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;

  result = a2;
  v4 = *(uint32_t *)(a2 + 4);
  if ( v4 <= 0xB )
  {
    v5 = a1 + 4 * v4;
    *(float *)v5 = (float)((float)((float)((float)HIWORD(a3[1]) * 65536.0) + (float)(uint16_t)a3[1])
                         * *(float *)(a2 + 16))
                 + *(float *)v5;
    *(uint32_t *)(v5 + 48) += a3[3];
  }
  v6 = *(uint32_t *)(a2 + 8);
  if ( v6 <= 0xB )
  {
    v7 = a1 + 4 * v6;
    *(float *)v7 = (float)((float)((float)((float)HIWORD(a3[2]) * 65536.0) + (float)(uint16_t)a3[2])
                         * *(float *)(a2 + 20))
                 + *(float *)v7;
    result = a3[3];
    *(uint32_t *)(v7 + 48) += result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::Node::createSelfTimer  (binary VA: 0x15597d0)
// Original: hkMonitorStreamAnalyzer::Node::createSelfTimer
// ----------------------------------------------------------------------------
const hkMonitorStreamFrameInfo::Self * hkMonitorStreamAnalyzer::Node::createSelfTimer(hkMonitorStreamAnalyzer::Node::Self *self, const hkMonitorStreamFrameInfo::Self *a2)
{
  const hkMonitorStreamFrameInfo::Self *result;
  unsigned int v3;
  int v4;
  int v5;
  float v6; // xmm0_4
  int v7;
  int *v8;
  int *v9;
  int v10;
  float v11; // xmm1_4
  int address;
  int v13;
  int v14;
  int v15;
  int v16;
  typedef const char *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v18)) > _g4_s1 ? (32u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v19)) > _g4_s2 ? (36u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v20)) > _g4_s3 ? (40u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v21)) > _g4_s4 ? (44u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v22)) > _g4_s5 ? (48u + sizeof(_g4_t_v22)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);

  result = a2;
  v3 = *((uint32_t *)a2 + 1);
  if ( v3 > 0xB )
    return result;
  v4 = 0;
  if ( *((uint32_t *)self + 25) != 0 )
  {
    if ( hkString::strCmp(*(hkString::Self **)(**((uint32_t **)self + 24) + 120), "self", v17) == 0 )
    {
      v4 = *((uint32_t *)self + 25);
      v21 = **((uint32_t **)self + 24);
      v5 = 1;
      goto LABEL_4;
    }
    v4 = *((uint32_t *)self + 25);
  }
  v21 = 0;
  v5 = 0;
LABEL_4:
  v6 = 0.0;
  if ( v5 < v4 )
  {
    v7 = *((uint32_t *)self + 24);
    v6 = 0.0;
    v8 = (int *)(v7 + 4 * v5);
    v9 = (int *)(v7 + 4 * v4);
    do
    {
      v10 = *v8++;
      v6 = v6 + *(float *)(v10 + 4 * v3);
    }
    while ( v8 != v9 );
  }
  v11 = *((float *)self + v3) - v6;
  if ( v21 == 0 )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v21 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
            *(uint32_t *)(*(uint32_t *)address + 44),
            136);
    hkMonitorStreamAnalyzer::Node::Construct(v21, nullptr, (int)(uintptr_t)("self"), 0);
    *(uint32_t *)(v21 + 116) = (uint32_t)(uintptr_t)(self);
    v13 = *((uint32_t *)self + 25);
    v14 = v13 + 1;
    v15 = *((uint32_t *)self + 26) & 0x3FFFFFFF;
    if ( v13 + 1 > v15 )
    {
      v16 = 2 * v15;
      v18 = *((uint32_t *)self + 25);
      if ( v16 < v14 )
        v16 = *((uint32_t *)self + 25) + 1;
      v20 = *((uint32_t *)self + 25) + 1;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v22,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)self + 24,
        v16,
        4);
      v13 = v18;
      v14 = v20;
    }
    v19 = v14;
    hkMemUtil::memMove((hkMemUtil::Self *)(*((uint32_t *)self + 24) + 4), *((char **)self + 24), 4 * v13);
    **((uint32_t **)self + 24) = v21;
    *((uint32_t *)self + 25) = v19;
  }
  result = (const hkMonitorStreamFrameInfo::Self *)(v21 + 4 * v3);
  *(float *)result = v11;
  ++*((uint32_t *)result + 12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::mergeTreesForCombinedThreadSummary  (binary VA: 0x1559990)
// Original: hkMonitorStreamAnalyzer::mergeTreesForCombinedThreadSummary
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::mergeTreesForCombinedThreadSummary(hkMonitorStreamAnalyzer::Self *self, hkMonitorStreamAnalyzer::Node::Self *a2, hkMonitorStreamAnalyzer::Node::Self *a3, int a4, int a5)
{
  sub_1556FA0((int)(uintptr_t)(self), (int)(uintptr_t)(a3), *(float *)&a5);
  return sub_1557E90(self, (int)(uintptr_t)(a2), *(float *)&a5, (int)(uintptr_t)(a3), a4);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::navigateMonitors  (binary VA: 0x15599f0)
// Original: hkMonitorStreamAnalyzer::navigateMonitors
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::navigateMonitors(uint8_t *a1, int a2)
{
  int v2;
  uint8_t *v3;
  uint32_t *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int result;
  int v16;

  v2 = a2;
  if ( a2 == 0 )
    return 0;
  v3 = a1;
  if ( *a1 != 0 )
  {
    v4 = *(uint32_t **)(a2 + 116);
    v5 = (int *)v4[24];
    if ( a2 == *v5 )
    {
      if ( v4[29] != 0 )
        v2 = *(uint32_t *)(a2 + 116);
      v3 = a1;
    }
    else
    {
      v6 = v4[25];
      v7 = 0;
      if ( v6 > 0 )
      {
        while ( v7 + 1 != v6 )
        {
          if ( a2 == v5[v7 + 1] )
          {
            v2 = v5[v7];
            goto LABEL_11;
          }
          ++v7;
        }
      }
      v2 = *v5;
LABEL_11:
      while ( 1 )
      {
        v8 = *(uint32_t *)(v2 + 100);
        if ( v8 <= 0 || (*(uint8_t *)(v2 + 124) & 1) == 0 )
          break;
        v2 = *(uint32_t *)(*(uint32_t *)(v2 + 96) + 4 * v8 - 4);
      }
      v3 = a1;
    }
  }
  if ( v3[1] != 0 )
  {
    if ( *(int *)(v2 + 100) > 0 && (*(uint8_t *)(v2 + 124) & 1) != 0 )
    {
      v2 = **(uint32_t **)(v2 + 96);
      if ( a1[2] == 0 )
        goto LABEL_27;
      goto LABEL_25;
    }
    v9 = *(uint32_t **)(v2 + 116);
    v10 = (uint32_t *)v2;
    while ( 1 )
    {
      v11 = v9[25];
      if ( v11 > 0 )
        break;
LABEL_32:
      if ( v9[29] == 0 )
      {
        v3 = a1;
        goto LABEL_24;
      }
      v10 = v9;
      v9 = (uint32_t *)v9[29];
    }
    v12 = v9[24];
    v13 = 0;
    while ( *(uint32_t **)(v12 + 4 * v13) != v10 || v13 >= v11 - 1 )
    {
      if ( ++v13 == v11 )
        goto LABEL_32;
    }
    v2 = *(uint32_t *)(v12 + 4 * v13 + 4);
    v3 = a1;
  }
LABEL_24:
  if ( v3[2] == 0 )
    goto LABEL_27;
LABEL_25:
  v14 = *(uint32_t *)(v2 + 124);
  if ( (v14 & 1) != 0 )
  {
    *(uint32_t *)(v2 + 124) = v14 & 0xFFFFFFFE;
  }
  else
  {
    result = *(uint32_t *)(v2 + 116);
    if ( *(uint32_t *)(result + 116) != 0 )
    {
      *(uint32_t *)(result + 124) &= ~1u;
      v2 = result;
      if ( a1[3] == 0 )
        return result;
      goto LABEL_28;
    }
  }
LABEL_27:
  result = v2;
  if ( a1[3] == 0 )
    return result;
LABEL_28:
  v16 = *(uint32_t *)(v2 + 124);
  if ( (v16 & 1) == 0 )
    v16 |= 1u;
  *(uint32_t *)(v2 + 124) = v16 | 1;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::findMaxTimerNameIndent  (binary VA: 0x1559b50)
// Original: hkMonitorStreamAnalyzer::findMaxTimerNameIndent
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::findMaxTimerNameIndent(hkString::Self **self, hkMonitorStreamAnalyzer::Node::Self *a2, int a3, uint8_t a4)
{
  int v4;
  int i;
  int MaxTimerNameIndent;
  hkMonitorStreamAnalyzer::Node::Self *v8;
  bool v9;

  v4 = (uint32_t)(uintptr_t)(a2) * a3 + hkString::strLen(*(self + 30), (const char *)v8) + 8;
  if ( a4 == 0 || (*(uint8_t *)(self + 31) & 1) != 0 )
  {
    for ( i = 0; (int)(uintptr_t)(*(self + 25)) > i; ++i )
    {
      MaxTimerNameIndent = hkMonitorStreamAnalyzer::findMaxTimerNameIndent(
                             (hkString::Self **)*((hkMonitorStreamAnalyzer::Self **)*(self + 24) + i),
                             (hkMonitorStreamAnalyzer::Node::Self *)((char *)a2 + 1),
                             a3,
                             a4);
      if ( v4 < MaxTimerNameIndent )
        v4 = MaxTimerNameIndent;
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::makeStatisticsTreeForSingleFrame  (binary VA: 0x1559bf0)
// Original: hkMonitorStreamAnalyzer::makeStatisticsTreeForSingleFrame
// ----------------------------------------------------------------------------
hkMonitorStreamAnalyzer::Node::Self * hkMonitorStreamAnalyzer::makeStatisticsTreeForSingleFrame(hkMonitorStreamAnalyzer::Self *self, const char *a2, hkMonitorStreamFrameInfo::Self *a3, const hkMonitorStreamFrameInfo::Self *a4, const char *a5)
{
  const char *v5;
  hkMonitorStreamAnalyzer::Self *v6;
  int address;
  int v8;
  hkMonitorStreamAnalyzer::Node::Self *v9;
  hkMonitorStreamAnalyzer::Node::Self *v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char *v20;
  int v21;
  char *v22;
  int v23;
  int v25;
  char *v26;
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
  char *v37;
  int v38;
  int v39;
  int v40;
  char *v41;
  int v42;
  int v43;
  float v44; // xmm0_4
  int v45;
  int v46;
  char *v47;
  int v48;
  char *v49;
  int v50;
  int savedregs;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v56;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v57;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v58;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v59;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v60;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v61;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v62;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v63;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v64;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v65;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v66;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v67;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v68;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v69;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v70;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v71;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v72;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v73;
  typedef hkMonitorStreamFrameInfo::Self *_g4_t_v74;
  typedef uint8_t _g4_t_v75;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v76;
  typedef const char *_g4_t_v77;
  typedef char _g4_t_v78;
  typedef char *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef char _g4_t_v82;
  typedef char *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef char _g4_t_v86;
  typedef char *_g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef char _g4_t_v90;
  typedef char *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef char *_g4_t_v93;
  typedef hkMonitorStreamAnalyzer::Self *_g4_t_v94;
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (0u + sizeof(_g4_t_v51)) > _g4_s0 ? (0u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v52)) > _g4_s1 ? (0u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v53)) > _g4_s2 ? (4u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v54)) > _g4_s3 ? (8u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v55)) > _g4_s4 ? (8u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v56)) > _g4_s5 ? (12u + sizeof(_g4_t_v56)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v57)) > _g4_s6 ? (12u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v58)) > _g4_s7 ? (12u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v59)) > _g4_s8 ? (12u + sizeof(_g4_t_v59)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v60)) > _g4_s9 ? (12u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v61)) > _g4_s10 ? (12u + sizeof(_g4_t_v61)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v62)) > _g4_s11 ? (12u + sizeof(_g4_t_v62)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v63)) > _g4_s12 ? (12u + sizeof(_g4_t_v63)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v64)) > _g4_s13 ? (12u + sizeof(_g4_t_v64)) : _g4_s13,
    _g4_s15 = (12u + sizeof(_g4_t_v65)) > _g4_s14 ? (12u + sizeof(_g4_t_v65)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v66)) > _g4_s15 ? (12u + sizeof(_g4_t_v66)) : _g4_s15,
    _g4_s17 = (12u + sizeof(_g4_t_v67)) > _g4_s16 ? (12u + sizeof(_g4_t_v67)) : _g4_s16,
    _g4_s18 = (12u + sizeof(_g4_t_v68)) > _g4_s17 ? (12u + sizeof(_g4_t_v68)) : _g4_s17,
    _g4_s19 = (12u + sizeof(_g4_t_v69)) > _g4_s18 ? (12u + sizeof(_g4_t_v69)) : _g4_s18,
    _g4_s20 = (12u + sizeof(_g4_t_v70)) > _g4_s19 ? (12u + sizeof(_g4_t_v70)) : _g4_s19,
    _g4_s21 = (12u + sizeof(_g4_t_v71)) > _g4_s20 ? (12u + sizeof(_g4_t_v71)) : _g4_s20,
    _g4_s22 = (12u + sizeof(_g4_t_v72)) > _g4_s21 ? (12u + sizeof(_g4_t_v72)) : _g4_s21,
    _g4_s23 = (12u + sizeof(_g4_t_v73)) > _g4_s22 ? (12u + sizeof(_g4_t_v73)) : _g4_s22,
    _g4_s24 = (16u + sizeof(_g4_t_v74)) > _g4_s23 ? (16u + sizeof(_g4_t_v74)) : _g4_s23,
    _g4_s25 = (23u + sizeof(_g4_t_v75)) > _g4_s24 ? (23u + sizeof(_g4_t_v75)) : _g4_s24,
    _g4_s26 = (24u + sizeof(_g4_t_v76)) > _g4_s25 ? (24u + sizeof(_g4_t_v76)) : _g4_s25,
    _g4_s27 = (28u + sizeof(_g4_t_v77)) > _g4_s26 ? (28u + sizeof(_g4_t_v77)) : _g4_s26,
    _g4_s28 = (32u + sizeof(_g4_t_v78)) > _g4_s27 ? (32u + sizeof(_g4_t_v78)) : _g4_s27,
    _g4_s29 = (36u + sizeof(_g4_t_v79)) > _g4_s28 ? (36u + sizeof(_g4_t_v79)) : _g4_s28,
    _g4_s30 = (40u + sizeof(_g4_t_v80)) > _g4_s29 ? (40u + sizeof(_g4_t_v80)) : _g4_s29,
    _g4_s31 = (44u + sizeof(_g4_t_v81)) > _g4_s30 ? (44u + sizeof(_g4_t_v81)) : _g4_s30,
    _g4_s32 = (48u + sizeof(_g4_t_v82)) > _g4_s31 ? (48u + sizeof(_g4_t_v82)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v83)) > _g4_s32 ? (116u + sizeof(_g4_t_v83)) : _g4_s32,
    _g4_s34 = (120u + sizeof(_g4_t_v84)) > _g4_s33 ? (120u + sizeof(_g4_t_v84)) : _g4_s33,
    _g4_s35 = (124u + sizeof(_g4_t_v85)) > _g4_s34 ? (124u + sizeof(_g4_t_v85)) : _g4_s34,
    _g4_s36 = (128u + sizeof(_g4_t_v86)) > _g4_s35 ? (128u + sizeof(_g4_t_v86)) : _g4_s35,
    _g4_s37 = (324u + sizeof(_g4_t_v87)) > _g4_s36 ? (324u + sizeof(_g4_t_v87)) : _g4_s36,
    _g4_s38 = (328u + sizeof(_g4_t_v88)) > _g4_s37 ? (328u + sizeof(_g4_t_v88)) : _g4_s37,
    _g4_s39 = (332u + sizeof(_g4_t_v89)) > _g4_s38 ? (332u + sizeof(_g4_t_v89)) : _g4_s38,
    _g4_s40 = (336u + sizeof(_g4_t_v90)) > _g4_s39 ? (336u + sizeof(_g4_t_v90)) : _g4_s39,
    _g4_s41 = (540u + sizeof(_g4_t_v91)) > _g4_s40 ? (540u + sizeof(_g4_t_v91)) : _g4_s40,
    _g4_s42 = (544u + sizeof(_g4_t_v92)) > _g4_s41 ? (544u + sizeof(_g4_t_v92)) : _g4_s41,
    _g4_s43 = (548u + sizeof(_g4_t_v93)) > _g4_s42 ? (548u + sizeof(_g4_t_v93)) : _g4_s42,
    _g4_s44 = (552u + sizeof(_g4_t_v94)) > _g4_s43 ? (552u + sizeof(_g4_t_v94)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 0u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 8u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 12u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 12u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 12u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 12u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 12u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 12u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 12u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 12u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 12u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 12u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 16u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 23u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 24u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 28u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 32u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 36u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 40u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 44u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 48u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 116u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 120u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 124u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 128u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 324u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 328u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 332u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 336u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 540u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 544u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 548u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 552u);

  v91 = (char *)&self;
  v77 = a2;
  v5 = (const char *)a4;
  v75 = (uint8_t)(uintptr_t)(a5);
  v6 = self;
  v74 = a3;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v8 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         136);
  v93 = (char *)v5;
  v76 = (hkMonitorStreamAnalyzer::Node::Self *)v8;
  v9 = (hkMonitorStreamAnalyzer::Node::Self *)v8;
  hkMonitorStreamAnalyzer::Node::Construct(v8, nullptr, (int)(uintptr_t)(v93), 1);
  v84 = 0;
  v83 = &v86;
  v85 = -2147483632;
  v80 = 0;
  v79 = &v82;
  v81 = -2147483632;
  v88 = 0;
  v87 = &v90;
  v89 = -2147483632;
  if ( v6 >= (hkMonitorStreamAnalyzer::Self *)v77 )
  {
    v88 = 0;
    goto LABEL_21;
  }
  v10 = v9;
  while ( 2 )
  {
    while ( 1 )
    {
      v11 = *(uint32_t *)v6;
      if ( *(uint32_t *)v6 > 0xFFu )
        break;
LABEL_28:
      v6 = (hkMonitorStreamAnalyzer::Self *)((char *)v6 + 4);
      if ( v77 <= (const char *)v6 )
        goto LABEL_19;
    }
    switch ( *(uint8_t *)v11 )
    {
      case 'E':
        if ( v84 != 0 )
        {
          v25 = (int)(uintptr_t)(&v83[12 * v84 - 12]);
          if ( *(uint8_t *)(v11 + 2) == 0
            || (v55 = (int)(uintptr_t)(v10),
                v92 = v11 + 2,
                v62 = (hkMonitorStreamAnalyzer::Node::Self *)&v83[12 * v84 - 12],
                v50 = hkString::strCmp((hkString::Self *)(*(uint32_t *)v25 + 2), (const char *)(v11 + 2), v93),
                v25 = (int)(uintptr_t)(v62),
                v10 = (hkMonitorStreamAnalyzer::Node::Self *)v55,
                v50 == 0) )
          {
            v57 = v10;
            hkMonitorStreamAnalyzer::Node::setTimers((int)(uintptr_t)(v10), (int)(uintptr_t)(v74), v25, (int)(uintptr_t)(v6));
            if ( (*((uint8_t *)v57 + 134) & 1) != 0 )
            {
              v93 = (char *)v76;
              hkMonitorStreamAnalyzer::Node::createSelfTimer(v57, v74);
            }
            v6 = (hkMonitorStreamAnalyzer::Self *)((char *)v6 + 12);
            v10 = *(hkMonitorStreamAnalyzer::Node::Self **)&v79[4 * v80 - 4];
            --v84;
            --v88;
            --v80;
            if ( v77 > (const char *)v6 )
              continue;
          }
        }
        goto LABEL_19;
      case 'F':
        goto LABEL_18;
      case 'L':
        v12 = v84;
        if ( v84 == (v85 & 0x3FFFFFFF) )
        {
          v69 = v10;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v83,
            12,
            (int)(uintptr_t)(v94));
          v12 = v84;
          v10 = v69;
        }
        v13 = &v83[12 * v12];
        *(uint32_t *)v13 = *(uint32_t *)v6;
        *((uint32_t *)v13 + 1) = *((uint32_t *)v6 + 1);
        *((uint32_t *)v13 + 2) = *((uint32_t *)v6 + 2);
        v14 = v88;
        ++v84;
        if ( v88 == (v89 & 0x3FFFFFFF) )
        {
          v70 = v10;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v87,
            12,
            (int)(uintptr_t)(v94));
          v14 = v88;
          v10 = v70;
        }
        v15 = &v87[12 * v14];
        *(uint32_t *)v15 = *(uint32_t *)v6;
        *((uint32_t *)v15 + 1) = *((uint32_t *)v6 + 1);
        *((uint32_t *)v15 + 2) = *((uint32_t *)v6 + 2);
        v16 = v80;
        ++v88;
        if ( v80 == (v81 & 0x3FFFFFFF) )
        {
          v71 = v10;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v79,
            4,
            (int)(uintptr_t)(v94));
          v16 = v80;
          v10 = v71;
        }
        *(uint32_t *)&v79[4 * v16] = (uint32_t)(uintptr_t)(v10);
        ++v80;
        v53 = (uint32_t *)sub_1557DB0(v76, v10, (char *)(v11 + 2), 0, v75);
        v56 = *((hkMonitorStreamAnalyzer::Node::Self **)v6 + 2);
        v17 = v84;
        v18 = *((uint32_t *)v6 + 1);
        v19 = *((uint32_t *)v6 + 3);
        if ( v84 == (v85 & 0x3FFFFFFF) )
        {
          v51 = *((uint32_t *)v6 + 1);
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v83,
            12,
            (int)(uintptr_t)(v94));
          v17 = v84;
          v18 = v51;
        }
        v20 = &v83[12 * v17];
        *(uint32_t *)v20 = v19;
        *((uint32_t *)v20 + 1) = v18;
        *((uint32_t *)v20 + 2) = (uint32_t)(uintptr_t)(v56);
        v21 = v88;
        ++v84;
        if ( v88 == (v89 & 0x3FFFFFFF) )
        {
          v52 = v18;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v87,
            12,
            (int)(uintptr_t)(v94));
          v21 = v88;
          v18 = v52;
        }
        v22 = &v87[12 * v21];
        *(uint32_t *)v22 = v19;
        *((uint32_t *)v22 + 1) = v18;
        *((uint32_t *)v22 + 2) = (uint32_t)(uintptr_t)(v56);
        v23 = v80;
        ++v88;
        if ( v80 == (v81 & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v79,
            4,
            (int)(uintptr_t)(v94));
          v23 = v80;
        }
        v6 = (hkMonitorStreamAnalyzer::Self *)((char *)v6 + 16);
        *(uint32_t *)&v79[4 * v23] = (uint32_t)(uintptr_t)(v53);
        ++v80;
        v10 = (hkMonitorStreamAnalyzer::Node::Self *)sub_1557DB0(v76, v53, (char *)(v19 + 2), 0, v75);
        goto LABEL_18;
      case 'M':
        v60 = v10;
        v43 = sub_1557DB0(v76, v10, (char *)(v11 + 2), 2, v75);
        v6 = (hkMonitorStreamAnalyzer::Self *)((char *)v6 + 8);
        v44 = *(float *)v43 + *((float *)v6 - 1);
        ++*(uint32_t *)(v43 + 48);
        v10 = v60;
        *(float *)v43 = v44;
        if ( v77 > (const char *)v6 )
          continue;
        goto LABEL_19;
      case 'N':
        goto LABEL_28;
      case 'O':
        v36 = v84;
        if ( v84 == (v85 & 0x3FFFFFFF) )
        {
          v66 = v10;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v83,
            12,
            (int)(uintptr_t)(v94));
          v36 = v84;
          v10 = v66;
        }
        v37 = &v83[12 * v36];
        *(uint32_t *)v37 = *(uint32_t *)v6;
        *((uint32_t *)v37 + 1) = *((uint32_t *)v6 + 1);
        *((uint32_t *)v37 + 2) = *((uint32_t *)v6 + 2);
        v38 = v80;
        ++v84;
        if ( v80 == (v81 & 0x3FFFFFFF) )
        {
          v67 = v10;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v79,
            4,
            (int)(uintptr_t)(v94));
          v38 = v80;
          v10 = v67;
        }
        *(uint32_t *)&v79[4 * v38] = (uint32_t)(uintptr_t)(v10);
        v92 = 0;
        v93 = (char *)v75;
        v91 = *((char **)v6 + 3);
        ++v80;
        v10 = (hkMonitorStreamAnalyzer::Node::Self *)sub_1557DB0(v76, v10, v91, 0, v75);
        v39 = v88;
        if ( v88 == (v89 & 0x3FFFFFFF) )
        {
          v68 = v10;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v87,
            12,
            (int)(uintptr_t)(v94));
          v39 = v88;
          v10 = v68;
        }
        v40 = *(uint32_t *)v6;
        v6 = (hkMonitorStreamAnalyzer::Self *)((char *)v6 + 16);
        v41 = &v87[12 * v39];
        *(uint32_t *)v41 = v40;
        *((uint32_t *)v41 + 1) = *((uint32_t *)v6 - 3);
        v42 = *((uint32_t *)v6 - 2);
        ++v88;
        *((uint32_t *)v41 + 2) = v42;
        if ( v77 > (const char *)v6 )
          continue;
        goto LABEL_19;
      case 'P':
        v35 = v80;
        if ( v80 == (v81 & 0x3FFFFFFF) )
        {
          v65 = v10;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v79,
            4,
            (int)(uintptr_t)(v94));
          v35 = v80;
          v10 = v65;
        }
        v6 = (hkMonitorStreamAnalyzer::Self *)((char *)v6 + 4);
        *(uint32_t *)&v79[4 * v35] = (uint32_t)(uintptr_t)(v10);
        ++v80;
        v10 = (hkMonitorStreamAnalyzer::Node::Self *)sub_1557DB0(v76, v10, (char *)(v11 + 2), 1, v75);
        if ( v77 > (const char *)v6 )
          continue;
        goto LABEL_19;
      case 'R':
      case 'T':
        v45 = v80;
        if ( v80 == (v81 & 0x3FFFFFFF) )
        {
          v72 = v10;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v79,
            4,
            (int)(uintptr_t)(v94));
          v45 = v80;
          v10 = v72;
        }
        *(uint32_t *)&v79[4 * v45] = (uint32_t)(uintptr_t)(v10);
        ++v80;
        v10 = (hkMonitorStreamAnalyzer::Node::Self *)sub_1557DB0(v76, v10, (char *)(v11 + 2), 0, v75);
        v46 = v84;
        if ( v84 == (v85 & 0x3FFFFFFF) )
        {
          v73 = v10;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v83,
            12,
            (int)(uintptr_t)(v94));
          v46 = v84;
          v10 = v73;
        }
        v47 = &v83[12 * v46];
        *(uint32_t *)v47 = *(uint32_t *)v6;
        *((uint32_t *)v47 + 1) = *((uint32_t *)v6 + 1);
        *((uint32_t *)v47 + 2) = *((uint32_t *)v6 + 2);
        v48 = v88;
        ++v84;
        if ( v88 == (v89 & 0x3FFFFFFF) )
        {
          v63 = v10;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v87,
            12,
            (int)(uintptr_t)(v94));
          v48 = v88;
          v10 = v63;
        }
        v6 = (hkMonitorStreamAnalyzer::Self *)((char *)v6 + 12);
        v49 = &v87[12 * v48];
        *(uint32_t *)v49 = *((uint32_t *)v6 - 3);
        *((uint32_t *)v49 + 1) = *((uint32_t *)v6 - 2);
        *((uint32_t *)v49 + 2) = *((uint32_t *)v6 - 1);
        ++v88;
        if ( *(uint8_t *)v11 != 82 )
        {
LABEL_18:
          if ( v77 <= (const char *)v6 )
            goto LABEL_19;
          continue;
        }
        *((uint16_t *)v10 + 67) |= 1u;
        if ( v77 > (const char *)v6 )
          continue;
LABEL_19:
        v88 = 0;
        if ( v89 >= 0 )
          (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v87,
            12 * v89);
LABEL_21:
        v87 = nullptr;
        v89 = 0x80000000;
        v80 = 0;
        if ( v81 >= 0 )
          (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v79,
            4 * v81);
        v79 = nullptr;
        v81 = 0x80000000;
        v84 = 0;
        if ( v85 >= 0 )
          (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v83,
            12 * v85);
        return v76;
      case 'S':
        if ( v84 != 0 )
        {
          v94 = v6;
          v54 = (int)(uintptr_t)(v10);
          v6 = (hkMonitorStreamAnalyzer::Self *)((char *)v6 + 12);
          v93 = &v83[12 * v84 - 12];
          v61 = (hkMonitorStreamAnalyzer::Node::Self *)v93;
          hkMonitorStreamAnalyzer::Node::setTimers((int)(uintptr_t)(v10), (int)(uintptr_t)(v74), (int)(uintptr_t)(v93), (int)(uintptr_t)(v94));
          v10 = (hkMonitorStreamAnalyzer::Node::Self *)sub_1557DB0(v76, *(uint32_t **)(v54 + 116), (char *)(v11 + 2), 0, v75);
          *(uint32_t *)v61 = *((uint32_t *)v6 - 3);
          *((uint32_t *)v61 + 1) = *((uint32_t *)v6 - 2);
          *((uint32_t *)v61 + 2) = *((uint32_t *)v6 - 1);
          if ( v77 > (const char *)v6 )
            continue;
        }
        goto LABEL_19;
      case 'W':
        hkMonitorStreamAnalyzer::Node::setTimers((int)(uintptr_t)(v10), (int)(uintptr_t)(v74), v6);
        v6 = (hkMonitorStreamAnalyzer::Self *)((char *)v6 + 16);
        v10 = *(hkMonitorStreamAnalyzer::Node::Self **)&v79[4 * v80-- - 4];
        if ( v77 > (const char *)v6 )
          continue;
        goto LABEL_19;
      case 'Y':
        v33 = v80;
        if ( v80 == (v81 & 0x3FFFFFFF) )
        {
          v64 = v10;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v79,
            4,
            (int)(uintptr_t)(v94));
          v33 = v80;
          v10 = v64;
        }
        v6 = (hkMonitorStreamAnalyzer::Self *)((char *)v6 + 4);
        *(uint32_t *)&v79[4 * v33] = (uint32_t)(uintptr_t)(v10);
        ++v80;
        v34 = sub_1557DB0(v76, v10, (char *)(v11 + 2), 0, v75);
        *(uint16_t *)(v34 + 134) |= 2u;
        v10 = (hkMonitorStreamAnalyzer::Node::Self *)v34;
        if ( v77 > (const char *)v6 )
          continue;
        goto LABEL_19;
      case 'l':
        if ( v84 > 1 )
        {
          v26 = &v83[12 * v84 - 12];
          if ( **(uint8_t **)v26 == 83 )
          {
            hkMonitorStreamAnalyzer::Node::setTimers((int)(uintptr_t)(v10), (int)(uintptr_t)(v74), (int)(uintptr_t)(v26), (int)(uintptr_t)(v6));
            v27 = *(uint32_t *)&v79[4 * v80-- - 4];
            v28 = v88 - 1;
            v29 = --v84;
            if ( v88 - 1 > (v89 & 0x3FFFFFFF) )
            {
              v30 = 2 * (v89 & 0x3FFFFFFF);
              v91 = &v78;
              savedregs = 12;
              v58 = (hkMonitorStreamAnalyzer::Node::Self *)v27;
              if ( v30 < v28 )
                v30 = v88 - 1;
              hkArrayUtil::reserve(
                (hkArrayUtil::Self *)v91,
                (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                (int *)&v87,
                v30,
                savedregs);
              v29 = v84;
              v27 = (int)(uintptr_t)(v58);
            }
            v88 = v28;
            hkMonitorStreamAnalyzer::Node::setTimers(v27, (int)(uintptr_t)(v74), (int)(uintptr_t)(&v83[12 * v29 - 12]), (int)(uintptr_t)(v6));
            v10 = *(hkMonitorStreamAnalyzer::Node::Self **)&v79[4 * v80-- - 4];
            v31 = v88 - 1;
            --v84;
            if ( v88 - 1 > (v89 & 0x3FFFFFFF) )
            {
              v32 = 2 * (v89 & 0x3FFFFFFF);
              savedregs = 12;
              v91 = &v78;
              v59 = v10;
              if ( v32 < v31 )
                v32 = v88 - 1;
              hkArrayUtil::reserve(
                (hkArrayUtil::Self *)v91,
                (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                (int *)&v87,
                v32,
                savedregs);
              v10 = v59;
            }
            v6 = (hkMonitorStreamAnalyzer::Self *)((char *)v6 + 12);
            v88 = v31;
            if ( v77 > (const char *)v6 )
              continue;
          }
        }
        goto LABEL_19;
      case 'm':
        v6 = (hkMonitorStreamAnalyzer::Self *)((char *)v6 + 12);
        if ( v77 > (const char *)v6 )
          continue;
        goto LABEL_19;
      case 'p':
        if ( v80 == 0 )
          goto LABEL_19;
        v10 = *(hkMonitorStreamAnalyzer::Node::Self **)&v79[4 * v80-- - 4];
        goto LABEL_28;
      default:
        goto LABEL_19;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::traverseCompleteTreeToFindTotalCallCounts  (binary VA: 0x155a9c0)
// Original: hkMonitorStreamAnalyzer::traverseCompleteTreeToFindTotalCallCounts
// ----------------------------------------------------------------------------
void hkMonitorStreamAnalyzer::traverseCompleteTreeToFindTotalCallCounts(hkMonitorStreamAnalyzer::Self *self, hkMonitorStreamAnalyzer::Node::Self *a2)
{
  bool v2;
  bool v3; // cc
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;

  v2 = *((uint32_t *)self + 25) == 0;
  v3 = *((uint32_t *)self + 25) <= 0;
  *((uint32_t *)self + 32) = 0;
  if ( v2 )
  {
    if ( a2 != nullptr )
    {
      v4 = *((uint32_t *)self + 12);
      if ( (unsigned int)(uintptr_t)(a2) > 1 )
      {
        v4 += *((uint32_t *)self + 13);
        if ( (unsigned int)(uintptr_t)(a2) > 2 )
        {
          v4 += *((uint32_t *)self + 14);
          if ( (unsigned int)(uintptr_t)(a2) > 3 )
          {
            v4 += *((uint32_t *)self + 15);
            if ( (unsigned int)(uintptr_t)(a2) > 4 )
            {
              v4 += *((uint32_t *)self + 16);
              if ( (unsigned int)(uintptr_t)(a2) > 5 )
              {
                v4 += *((uint32_t *)self + 17);
                if ( (unsigned int)(uintptr_t)(a2) > 6 )
                {
                  v4 += *((uint32_t *)self + 18);
                  if ( (unsigned int)(uintptr_t)(a2) > 7 )
                  {
                    v4 += *((uint32_t *)self + 19);
                    if ( (unsigned int)(uintptr_t)(a2) > 8 )
                    {
                      v4 += *((uint32_t *)self + 20);
                      if ( (unsigned int)(uintptr_t)(a2) > 9 )
                      {
                        v4 += *((uint32_t *)self + 21);
                        if ( (unsigned int)(uintptr_t)(a2) > 0xA )
                        {
                          v4 += *((uint32_t *)self + 22);
                          if ( (unsigned int)(uintptr_t)(a2) > 0xB )
                            v4 += *((uint32_t *)self + 23);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *((uint32_t *)self + 32) = v4;
    }
  }
  else if ( !v3 )
  {
    v5 = *((uint32_t *)self + 24);
    v6 = 0;
    do
    {
      hkMonitorStreamAnalyzer::traverseCompleteTreeToFindTotalCallCounts(
        *(hkMonitorStreamAnalyzer::Self **)(v5 + 4 * v6),
        a2);
      v5 = *((uint32_t *)self + 24);
      v7 = *(uint32_t *)(v5 + 4 * v6++);
      *((uint32_t *)self + 32) += *(uint32_t *)(v7 + 128);
    }
    while ( *((uint32_t *)self + 25) > v6 );
  }
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamColorTable::findColor  (binary VA: 0x155afb0)
// Original: hkMonitorStreamColorTable::findColor
// ----------------------------------------------------------------------------
int hkMonitorStreamColorTable::findColor(hkMonitorStreamColorTable::Self *self, char *a2)
{
  int v2;
  const char *v4;

  v2 = 0;
  if ( *((int *)self + 3) <= 0 )
    return *((uint32_t *)self + 5);
  while ( hkString::strCasecmp((hkString::Self *)(*(uint32_t *)(*((uint32_t *)self + 2) + 8 * v2) & 0xFFFFFFFE), a2, v4) != 0 )
  {
    if ( *((uint32_t *)self + 3) <= ++v2 )
      return *((uint32_t *)self + 5);
  }
  return *(uint32_t *)(*((uint32_t *)self + 2) + 8 * v2 + 4);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamColorTable::addColor  (binary VA: 0x155b030)
// Original: hkMonitorStreamColorTable::addColor
// ----------------------------------------------------------------------------
void hkMonitorStreamColorTable::addColor(hkMonitorStreamColorTable::Self *self, hkString::Self *a2, unsigned int a3)
{
  int v3;
  hkStringPtr::Self *v4;
  typedef int _g4_t_v5;
  typedef uint8_t _g4_t_v6[4];
  typedef unsigned int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  hkStringPtr::Construct((hkStringPtr::Self *)v6, a2);
  v3 = *((uint32_t *)self + 3);
  v7 = a3;
  if ( v3 == (*((uint32_t *)self + 4) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMonitorStreamColorTable::Self *)((char *)self + 8),
      8,
      v5);
    v3 = *((uint32_t *)self + 3);
  }
  v4 = (hkStringPtr::Self *)(*((uint32_t *)self + 2) + 8 * v3);
  hkStringPtr::Construct(v4, (const hkStringPtr::Self *)v6);
  *((uint32_t *)v4 + 1) = v7;
  ++*((uint32_t *)self + 3);
  hkStringPtr::Destroy((hkStringPtr::Self *)v6);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamColorTable::setupDefaultColorTable  (binary VA: 0x155b0d0)
// Original: hkMonitorStreamColorTable::setupDefaultColorTable
// ----------------------------------------------------------------------------
void hkMonitorStreamColorTable::setupDefaultColorTable(hkMonitorStreamColorTable::Self *self)
{
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Physics 2012", 0xFF404040);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"NarrowPhase", 0xFF6495ED);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Broadphase", 0xFF0000FF);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"3AxisSweep", 0xFF191970);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"WaitForExport", 0xFF483D8B);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"SplitIsle", 0xFFA52A2A);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"PostCollide", 0xFFF5F5DC);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Maintenance", 0xFFFFFF00);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"InterIsland", 0xFFFFFF00);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"PendingOps", 0xFFFFFF00);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"ConstraintCallbacks", 0xFFFFFF00);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"SingleObj", 0xFFD2B48C);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"TOIs", 0xFFFFD700);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"PostSimCB", 0xFFF5DEB3);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Integrate", 0xFF008000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Actions", 0xFF00FF7F);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"SetupJobs", 0xFF32CD32);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"BuildJacTask", 0xFF2E8B57);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"BuildAccumulators", 0xFF808000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"BuildJacobians", 0xFF228B22);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Solver", 0xFF98FB98);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Solve", 0xFF98FB98);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"IntegrateMotions", 0xFF90EE90);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"SolverExport", 0xFF8FBC8F);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"GetNextJob", 0xFF8B0000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"GetNextTask", 0xFF8B0000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"FinishJob", 0xFF8B0000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"FinishTask", 0xFF8B0000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"FinishJobAndGetNext", 0xFF8B0000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"FinishTaskAndGetNext", 0xFF8B0000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"WaitForSignal", 0xFF800000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"WaitForTasks", 0xFF800000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"LockQueue", 0xFFFF0000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"CriticalLock", 0xFFDC143C);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"hkSpuMoppRaycastQuery", 0xFF9370DB);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"VehicleManager", 0xFFEEE8AA);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Vehicle", 0xFFF5DEB3);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"VehicleJob", 0xFFBDB76B);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"ApplyVehicleForces", 0xFFF0E68C);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Physics", 0xFFFFB300);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"PreCollide", 0xFFF5F5DC);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"DispatchCommands", 0xFFFFD700);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"PostCollideEvent", 0xFFF5DEB3);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"BroadPhase", 0xFF0000FF);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"NarrowPhase", 0xFF6495ED);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"2ndRoundNarrowPhase", 0xFF6495ED);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"PrepareConstraints", 0xFF32CD32);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"BuildConstraintJacobians", 0xFF32CD32);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"PreSolve", 0xFF808000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Solve", 0xFF98FB98);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"SolveConstraints", 0xFF90EE90);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"SubIntegrate", 0xFF32CD32);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"UpdateBodies", 0xFF8FBC8F);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"PostSolve", 0xFF808000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"PostSimulateEvent", 0xFFF5DEB3);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"WaitForMainThread", 0xFF8B0000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"WaitForWorkerThreads", 0xFF8B0000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"WaitForOtherTasks", 0xFF8B0000);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"ReleaseSemaphore", 0xFF9370DB);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"ReleaseSemaphore_1", 0xFF9370DB);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"ReleaseSemaphore_2", 0xFF9370DB);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"ReleaseSemaphore_3", 0xFF9370DB);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"ReleaseSemaphore_4", 0xFF9370DB);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"ReleaseSemaphore_5+", 0xFF9370DB);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"hkaQuantizedSampleAndCombineJob", 0xFFDA70D6);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"SampleAndBlend", 0xFF9370DB);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"hkaCpuSampleAnimationJob", 0xFFFFFF00);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"hkaCpuSampleAndCombineJob", 0xFF98FB98);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"SpuAnim", 0xFFADD8E6);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Cloth", 0xFF9370DB);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Simulate", 0xFF90EE90);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Accumulate Actions", 0xFF00FF7F);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Collide", 0xFF006400);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Collide And Solve", 0xFF006400);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Input Conversion", 0xFFFFC0CB);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Output Conversion", 0xFFFFC0CB);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Mesh Mesh Deform", 0xFFADD8E6);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Mesh Bone Deform", 0xFFADD8E6);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Skin", 0xFF0000FF);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Gather All Vertices", 0xFFFFFF00);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Gather Some Vertices", 0xFFFFFF00);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Copy Vertices", 0xFFFFFF00);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Recalculate Some Normals", 0xFFFFA500);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Recalculate All Normals", 0xFFFFA500);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Update Some Vertex Frames (N)", 0xFFFFA500);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Update Some Vertex Frames (T)", 0xFFFF8C00);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Update Some Vertex Frames (TB)", 0xFFFF8C00);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Update All Vertex Frames (N)", 0xFFFFA500);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Update All Vertex Frames (T)", 0xFFFF8C00);
  hkMonitorStreamColorTable::addColor(self, (hkString::Self *)"Update All Vertex Frames (TB)", 0xFFFF8C00);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::checkAllThreadsCapturedSameNumFrames  (binary VA: 0x155bae0)
// Original: hkMonitorStreamAnalyzer::checkAllThreadsCapturedSameNumFrames
// ----------------------------------------------------------------------------
void hkMonitorStreamAnalyzer::checkAllThreadsCapturedSameNumFrames()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::writeRawStatistics  (binary VA: 0x155baf0)
// Original: hkMonitorStreamAnalyzer::writeRawStatistics
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::writeRawStatistics(hkMonitorStreamAnalyzer::Self *self, hkOstream::Self *a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  uint8_t *v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  const char *v14;
  int v15;
  int v16;
  char *v17;
  typedef uint8_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_i;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef hkMonitorStreamAnalyzer::Self *_g4_t_v24;
  typedef hkOstream::Self *_g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef uint8_t _g4_t_v27[4];
  typedef uint8_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef hkMonitorStreamAnalyzer::Self **_g4_t_v31;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_i)) > _g4_s3 ? (40u + sizeof(_g4_t_i)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v22)) > _g4_s4 ? (48u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v23)) > _g4_s5 ? (52u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v24)) > _g4_s6 ? (60u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v25)) > _g4_s7 ? (64u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v26)) > _g4_s8 ? (68u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v27)) > _g4_s9 ? (72u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v28)) > _g4_s10 ? (76u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v29)) > _g4_s11 ? (80u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v30)) > _g4_s12 ? (84u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v31)) > _g4_s13 ? (100u + sizeof(_g4_t_v31)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 84u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);

  v31 = &self;
  v24 = self;
  v25 = a2;
  hkMonitorStreamAnalyzer::checkAllThreadsCapturedSameNumFrames();
  v28 = nullptr;
  v29 = 0;
  v30 = 0x80000000;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v27, (hkMemoryAllocator::Self *)hkContainerDebugAllocator::s_alloc, (int *)&v28, 64, 1);
  v2 = v29;
  if ( v29 == (v30 & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)hkContainerDebugAllocator::s_alloc, (hkMemoryAllocator::Self *)&v28, 1, v19);
    v2 = v29;
  }
  v28[v2] = 0;
  v3 = *(uint32_t *)v24;
  ++v29;
  hkOstream::printf(
    v25,
    "StatisticsDumpInfo(num_threads=%i, num_spus=%i, num_frames=%i)\n",
    *((uint32_t *)v24 + 6),
    *((uint32_t *)v24 + 7),
    *(uint32_t *)(v3 + 4));
  v4 = *((uint32_t *)v24 + 1);
  for ( i = 0; i < v4; ++i )
  {
    v22 = (uint32_t *)(*(uint32_t *)v24 + 12 * i);
    if ( (int)v22[1] > 0 )
    {
      v23 = 0;
      do
      {
        v5 = (uint32_t *)(*v22 + 36 * v23);
        v20 = v23;
        hkOstream::printf(v25, "FrameInfo(heading='%s', frame=%i, thread_id=%i, time_counter=%i)\n", *v5 & 0xFFFFFFFE);
        v6 = *((uint32_t *)v24 + 3);
        v7 = (uint32_t *)(v6 + v5[7]);
        v26 = v5[8] + v6;
        if ( (v30 & 0x3FFFFFFF) == 0 )
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v27,
            (hkMemoryAllocator::Self *)hkContainerDebugAllocator::s_alloc,
            (int *)&v28,
            1,
            1);
        v29 = 1;
        *v28 = 0;
LABEL_9:
        if ( v26 > (unsigned int)(uintptr_t)(v7) )
        {
LABEL_10:
          v8 = (uint8_t *)*v7;
          while ( 2 )
          {
            switch ( *(uint8_t *)*v7 )
            {
              case 'E':
                v29 -= 2;
                v28[v29 - 1] = 0;
                v20 = *v7 + 2;
                v18 = v28;
                v17 = "%sTimerEnd('%s',%u,%u)\n";
                goto LABEL_41;
              case 'F':
              case 'O':
              case 'P':
              case 'p':
                continue;
              case 'L':
                hkOstream::printf(v25, "%sTimerBegin('%s', %u, %u)\n", v28, v8 + 2, v7[1], v7[2]);
                v20 = v7[3] + 2;
                hkOstream::printf(v25, "%sTimerSplit('%s', %u, %u)\n", v28);
                v28[v29 - 1] = 32;
                v15 = v29;
                if ( v29 == (v30 & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)hkContainerDebugAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)&v28,
                    1,
                    v20);
                  v15 = v29;
                }
                v28[v15] = 32;
                v16 = v29 + 1;
                v29 = v16;
                if ( v16 == (v30 & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)hkContainerDebugAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)&v28,
                    1,
                    v20);
                  v16 = v29;
                }
                v7 += 4;
                v28[v16] = 0;
                ++v29;
                goto LABEL_9;
              case 'M':
                v20 = (int)(uintptr_t)(v8 + 1);
                v7 += 2;
                hkOstream::printf(v25, "%sAddValue(%s,%f)\n", v28);
                goto LABEL_9;
              case 'N':
                ++v7;
                goto LABEL_9;
              case 'R':
              case 'T':
                v20 = (int)(uintptr_t)(v8 + 2);
                hkOstream::printf(v25, "%sTimerBegin('%s',%u,%u)\n", v28);
                goto LABEL_24;
              case 'S':
                v29 -= 2;
                v28[v29 - 1] = 0;
                v20 = *v7 + 2;
                hkOstream::printf(v25, "%sTimerSplit('%s', %u, %u)\n", v28);
LABEL_24:
                v28[v29 - 1] = 32;
                v12 = v29;
                if ( v29 == (v30 & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)hkContainerDebugAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)&v28,
                    1,
                    v20);
                  v12 = v29;
                }
                v28[v12] = 32;
                v13 = v29 + 1;
                v29 = v13;
                if ( v13 == (v30 & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)hkContainerDebugAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)&v28,
                    1,
                    v20);
                  v13 = v29;
                }
                v7 += 3;
                v28[v13] = 0;
                ++v29;
                goto LABEL_9;
              case 'W':
                v7 += 4;
                v29 -= 2;
                v28[v29 - 1] = 0;
                v20 = *(v7 - 4) + 2;
                hkOstream::printf(v25, "%sMultiTimerEnd('%s',%u,%u,%u)\n", v28);
                goto LABEL_9;
              case 'Y':
                v28[v29 - 1] = 32;
                v9 = v29;
                if ( v29 == (v30 & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)hkContainerDebugAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)&v28,
                    1,
                    v20);
                  v9 = v29;
                }
                v28[v9] = 32;
                v10 = v29 + 1;
                v29 = v10;
                if ( v10 == (v30 & 0x3FFFFFFF) )
                {
                  hkArrayUtil::reserveMore(
                    (hkArrayUtil::Self *)hkContainerDebugAllocator::s_alloc,
                    (hkMemoryAllocator::Self *)&v28,
                    1,
                    v20);
                  v10 = v29;
                }
                ++v7;
                v28[v10] = 0;
                ++v29;
                v20 = *(v7 - 1) + 2;
                hkOstream::printf(v25, "%sMultiTimerBegin('%s')\n", v28);
                if ( v26 <= (unsigned int)(uintptr_t)(v7) )
                  goto LABEL_17;
                goto LABEL_10;
              case 'l':
                v29 -= 2;
                v28[v29 - 1] = 0;
                v20 = *v7 + 2;
                v18 = v28;
                v17 = "%sTimerEnd('%s', %u, %u)\n";
LABEL_41:
                v7 += 3;
                hkOstream::printf(v25, v17, v18);
                goto LABEL_9;
              case 'm':
                v14 = "Alloc";
                if ( (int)v7[2] < 0 )
                  v14 = "Free";
                v20 = (int)(uintptr_t)(v14);
                hkOstream::printf(v25, "%s%s%s(ptr=0x%p, nbytes=%i)\n", v28);
                v7 += 3;
                goto LABEL_9;
              default:
                result = v30;
                v29 = 0;
                if ( v30 >= 0 )
                  return (*(int (**)(uint32_t *, uint8_t *, int))(hkContainerDebugAllocator::s_alloc[0] + 20))(
                           (uint32_t *)(hkContainerDebugAllocator::s_alloc),
                           v28,
                           v30 & 0x3FFFFFFF);
                return result;
            }
          }
        }
LABEL_17:
        ++v23;
      }
      while ( v22[1] > v23 );
      v4 = *((uint32_t *)v24 + 1);
    }
  }
  result = v30;
  v29 = 0;
  if ( v30 >= 0 )
    return (*(int (**)(uint32_t *, uint8_t *, int))(hkContainerDebugAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerDebugAllocator::s_alloc),
             v28,
             v30 & 0x3FFFFFFF);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::ThreadDrawInput::computePerThreadHeightToFit  (binary VA: 0x155c1f0)
// Original: hkMonitorStreamAnalyzer::ThreadDrawInput::computePerThreadHeightToFit
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::ThreadDrawInput::computePerThreadHeightToFit(hkMonitorStreamAnalyzer::ThreadDrawInput::Self *self, int a2, int a3, int a4, int a5)
{
  return ((int)(uintptr_t)(self) / a2 - a4) / a3 - a5;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::getTimerLimits  (binary VA: 0x155c210)
// Original: hkMonitorStreamAnalyzer::getTimerLimits
// ----------------------------------------------------------------------------
float * hkMonitorStreamAnalyzer::getTimerLimits(uint32_t *a1, float *a2, uint32_t **a3, float *a4, int *a5)
{
  int v5;
  int v6;
  float *result;
  int v8;
  int v9;
  int v10;
  int v11;
  float v12; // xmm0_4
  double v13; // xmm4_8
  int v14;
  char i;
  int j;
  int v17;
  uint32_t *v18;
  int k;
  int v20;
  int v21;
  int v22;
  int v23;
  double *v24;
  float v25; // xmm0_4
  int v26;
  int v27;
  int v28;
  int v29;
  float v30; // xmm0_4
  float v31; // xmm0_4
  int v32;
  int n;
  int v34;
  float v35; // xmm0_4
  int v36;
  unsigned int v37;
  float v38; // xmm0_4
  typedef int _g4_t_v39;
  typedef uint32_t **_g4_t_v40;
  typedef int _g4_t_v41;
  typedef float *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef int _g4_t_m;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef float *_g4_t_v53;
  typedef double _g4_t_v54 __attribute__((aligned(1)));
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef char _g4_t_v57[4];
  typedef double _g4_t_v58[3];
  typedef uint32_t **_g4_t_v59;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v39)) > _g4_s0 ? (0u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v40)) > _g4_s1 ? (4u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v41)) > _g4_s2 ? (8u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v42)) > _g4_s3 ? (12u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v43)) > _g4_s4 ? (16u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v44)) > _g4_s5 ? (20u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v45)) > _g4_s6 ? (24u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v46)) > _g4_s7 ? (28u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v47)) > _g4_s8 ? (32u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v48)) > _g4_s9 ? (36u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v49)) > _g4_s10 ? (40u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_m)) > _g4_s11 ? (44u + sizeof(_g4_t_m)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v51)) > _g4_s12 ? (52u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v52)) > _g4_s13 ? (56u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v53)) > _g4_s14 ? (60u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v54)) > _g4_s15 ? (68u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v55)) > _g4_s16 ? (68u + sizeof(_g4_t_v55)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v56)) > _g4_s17 ? (76u + sizeof(_g4_t_v56)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v57)) > _g4_s18 ? (80u + sizeof(_g4_t_v57)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v58)) > _g4_s19 ? (84u + sizeof(_g4_t_v58)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v59)) > _g4_s20 ? (108u + sizeof(_g4_t_v59)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 40u);
  _g4_t_m &m = *reinterpret_cast<_g4_t_m *>(_g4_sf + 44u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 56u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 76u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 80u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 84u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 108u);

  v59 = &a1;
  v49 = a1;
  v40 = a3;
  v53 = a4;
  v47 = a5;
  v42 = a2;
  v52 = a1[1];
  v5 = *((uint32_t *)a2 + 1);
  v39 = v5;
  v46 = v5 + *(uint32_t *)a2;
  v6 = *(uint32_t *)(*(uint32_t *)*a1 + 100);
  if ( v46 > v6 )
  {
    v46 = *(uint32_t *)(*(uint32_t *)*a1 + 100);
    v39 = v6 - *(uint32_t *)a2;
  }
  result = (float *)v39;
  if ( v39 > 0 )
  {
    v8 = a5[2] & 0x3FFFFFFF;
    if ( v5 > v8 )
    {
      v36 = 2 * v8;
      if ( v36 < v5 )
        v36 = *((uint32_t *)a2 + 1);
      hkArrayUtil::reserve((hkArrayUtil::Self *)v57, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a5, v36, 4);
    }
    v9 = v47[1];
    if ( v5 - v9 > 0 )
      memset((void *)(*v47 + 4 * v9), 0, 4 * (v5 - v9));
    v47[1] = v5;
    *v53 = 0.0;
    v10 = *(uint32_t *)v42;
    v48 = *(uint32_t *)v42;
    if ( v46 > *(uint32_t *)v42 )
    {
      v41 = 8 * v52;
      v44 = 36 * v10;
      v51 = 4 * v10;
      while ( 1 )
      {
        v45 = v48 - v10;
        v11 = **v40 + v44;
        v12 = *(float *)(v11 + 20);
        v56 = *(uint32_t *)(v11 + 8);
        if ( *(uint32_t *)(v11 + 12) == 0 )
        {
          v56 = *(uint32_t *)(v11 + 4);
          v12 = *(float *)(v11 + 16);
        }
        v13 = 4294967295.0 * v12;
        v58[0] = 0.0;
        v54 = 0.5 * v13;
        if ( v52 <= 0 )
        {
          if ( v52 == 0 )
          {
            v55 = 0;
            goto LABEL_42;
          }
        }
        else
        {
          v14 = 0;
          for ( i = sub_15576D0((uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)*v49 + 96) + v51) + 96), v58, v54);
                i == 0;
                i = sub_15576D0(
                      (uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*v49 + 4 * v14) + 96) + v51) + 96),
                      v58,
                      v54) )
          {
            if ( ++v14 == v52 )
              goto LABEL_18;
          }
          for ( j = 0; j != v52; ++j )
          {
            v17 = *(uint32_t *)(*v49 + 4 * j);
            sub_15572B0((uint32_t *)(*(uint32_t *)(*(uint32_t *)(v17 + 96) + v51) + 96), v54, v13);
          }
        }
LABEL_18:
        LODWORD(v58[0]) = 8 * v52;
        v55 = (*(int (**)(uint32_t *, double *))(hkContainerHeapAllocator::s_alloc + 16))(
                (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                v58);
        v43 = SLODWORD(v58[0]) / 8;
        if ( SLODWORD(v58[0]) / 8 != 0 )
        {
          if ( v52 <= 0 )
            goto LABEL_43;
          goto LABEL_20;
        }
LABEL_42:
        v43 = 0x80000000;
        if ( v52 <= 0 )
        {
LABEL_43:
          *(uint32_t *)(*v47 + 4 * v45) = 2139095022;
          goto LABEL_36;
        }
LABEL_20:
        v18 = (uint32_t *)v55;
        do
        {
          *v18 = -1073741824;
          v18[1] = 1206910973;
          v18 += 2;
        }
        while ( v18 != (uint32_t *)(v55 + v41) );
        for ( k = 0; k != v52; ++k )
        {
          v20 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*v49 + 4 * k) + 96) + v51);
          v21 = 0;
          v22 = *(uint32_t *)(v20 + 100);
          if ( v22 > 0 )
          {
            do
            {
              v23 = *(uint32_t *)(*(uint32_t *)(v20 + 96) + 4 * v21);
              if ( *(uint16_t *)(v23 + 132) != 2 )
              {
                *(double *)(v55 + 8 * k) = fmin(*(double *)(v23 + 108), *(double *)(v55 + 8 * k));
                v22 = *(uint32_t *)(v20 + 100);
              }
              ++v21;
            }
            while ( v21 < v22 );
          }
        }
        *(uint32_t *)(*v47 + 4 * v45) = 2139095022;
        v24 = (double *)v55;
        do
        {
          v25 = *v24++;
          *(float *)(4 * v45 + *v47) = fminf(v25, *(float *)(4 * v45 + *v47));
        }
        while ( v24 != (double *)(v55 + v41) );
        for ( m = 0; m != v52; ++m )
        {
          v26 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*v49 + 4 * m) + 96) + v51);
          v27 = 0;
          v28 = *(uint32_t *)(v26 + 100);
          if ( v28 > 0 )
          {
            do
            {
              v29 = *(uint32_t *)(*(uint32_t *)(v26 + 96) + 4 * v27);
              if ( *(uint16_t *)(v29 + 132) != 2 )
              {
                v30 = *(float *)(v29 + 4 * v56) + *(double *)(v29 + 108) - *(float *)(*v47 + 4 * v45);
                *v53 = fmaxf(v30, *v53);
                v28 = *(uint32_t *)(v26 + 100);
              }
              ++v27;
            }
            while ( v27 < v28 );
          }
        }
LABEL_36:
        if ( v43 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v55,
            8 * v43);
        ++v48;
        v44 += 36;
        v51 += 4;
        if ( v48 == v46 )
          break;
        v10 = *(uint32_t *)v42;
      }
    }
    v31 = v42[7];
    if ( v31 > 0.0 )
    {
      v32 = *(uint32_t *)v42;
      if ( v46 > *(uint32_t *)v42 )
      {
        for ( n = *(uint32_t *)v42; ; n = *(uint32_t *)v42 )
        {
          v34 = v32++;
          *(float *)(*v47 + 4 * (v34 - n)) = v31 + *(float *)(*v47 + 4 * (v34 - n));
          if ( v32 == v46 )
            break;
          v31 = v42[7];
        }
      }
    }
    result = v42;
    v35 = v42[6];
    if ( v35 <= 0.0 )
    {
      if ( v39 == 1 )
      {
        v37 = (int)(float)(*v53 / 1000.0)
            | ((unsigned int)(int)(float)(*v53 / 1000.0) >> 1)
            | (((int)(float)(*v53 / 1000.0) | ((unsigned int)(int)(float)(*v53 / 1000.0) >> 1)) >> 2)
            | (((int)(float)(*v53 / 1000.0)
              | ((unsigned int)(int)(float)(*v53 / 1000.0) >> 1)
              | (((int)(float)(*v53 / 1000.0) | ((unsigned int)(int)(float)(*v53 / 1000.0) >> 1)) >> 2)) >> 4)
            | (((int)(float)(*v53 / 1000.0)
              | ((unsigned int)(int)(float)(*v53 / 1000.0) >> 1)
              | (((int)(float)(*v53 / 1000.0) | ((unsigned int)(int)(float)(*v53 / 1000.0) >> 1)) >> 2)
              | (((int)(float)(*v53 / 1000.0)
                | ((unsigned int)(int)(float)(*v53 / 1000.0) >> 1)
                | (((int)(float)(*v53 / 1000.0) | ((unsigned int)(int)(float)(*v53 / 1000.0) >> 1)) >> 2)) >> 4)) >> 8);
        v38 = fmaxf(
                16666.0,
                (float)(fminf(
                          0.25 * hkMonitorStreamAnalyzer::g_lastFrameTime[0],
                          (float)((float)((float)((float)(((v37 | HIWORD(v37)) + 1) >> 16) * 65536.0)
                                        + (float)(uint16_t)((v37 | HIWORD(v37)) + 1))
                                * 1000.0)
                        - hkMonitorStreamAnalyzer::g_lastFrameTime[0])
                      * 0.05f)
              + hkMonitorStreamAnalyzer::g_lastFrameTime[0]);
        *v53 = v38;
        hkMonitorStreamAnalyzer::g_lastFrameTime[0] = v38;
        return (float *)(hkMonitorStreamAnalyzer::g_lastFrameTime);
      }
    }
    else
    {
      result = v53;
      *v53 = v35;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::writeStatisticsDetailsToTexture  (binary VA: 0x155c740)
// Original: hkMonitorStreamAnalyzer::writeStatisticsDetailsToTexture
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::writeStatisticsDetailsToTexture(uint32_t *a1, float *a2, uint32_t **a3, hkString::Self **a4, char *a5, float *a6)
{
  float *v6;
  float *v7;
  int result;
  float *v9;
  int v10;
  float *v11;
  int v12;
  int v13;
  int v14;
  float *v15;
  bool v16; // cc
  int v17;
  int v18;
  int v19;
  int v20;
  int address;
  hkMemoryAllocator::Self *v22;
  int v23;
  int v24;
  int v25;
  uint32_t *v26;
  uint32_t *v27;
  int i;
  hkString::Self *v29;
  float v30; // xmm0_4
  int v31;
  uint32_t *v32;
  int v33;
  float v34; // xmm1_4
  bool v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int *v44;
  int j;
  float v46; // xmm0_4
  int v47; // xmm0_4
  float v48; // xmm1_4
  int v49;
  int v50;
  int v51;
  int k;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  typedef const char *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint32_t **_g4_t_v68;
  typedef int _g4_t_v69;
  typedef hkString::Self **_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef float *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef unsigned int *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef char *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v88;
  typedef unsigned int _g4_t_v89;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v90;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef char *_g4_t_v96;
  typedef char *_g4_t_v97;
  typedef char *_g4_t_v98;
  typedef unsigned int *_g4_t_v99;
  typedef char *_g4_t_v100;
  typedef int _g4_t_v101;
  typedef float _g4_t_v102[4];
  typedef uint32_t _g4_t_v103[4];
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef uint32_t _g4_t_v107[2];
  typedef int _g4_t_v108;
  typedef uint32_t _g4_t_v109[4];
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef uint32_t **_g4_t_v113;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (12u + sizeof(_g4_t_v59)) > _g4_s0 ? (12u + sizeof(_g4_t_v59)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v60)) > _g4_s1 ? (16u + sizeof(_g4_t_v60)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v61)) > _g4_s2 ? (16u + sizeof(_g4_t_v61)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v62)) > _g4_s3 ? (36u + sizeof(_g4_t_v62)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v63)) > _g4_s4 ? (40u + sizeof(_g4_t_v63)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v64)) > _g4_s5 ? (44u + sizeof(_g4_t_v64)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v65)) > _g4_s6 ? (48u + sizeof(_g4_t_v65)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v66)) > _g4_s7 ? (52u + sizeof(_g4_t_v66)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v67)) > _g4_s8 ? (56u + sizeof(_g4_t_v67)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v68)) > _g4_s9 ? (60u + sizeof(_g4_t_v68)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v69)) > _g4_s10 ? (64u + sizeof(_g4_t_v69)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v70)) > _g4_s11 ? (68u + sizeof(_g4_t_v70)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v71)) > _g4_s12 ? (72u + sizeof(_g4_t_v71)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v72)) > _g4_s13 ? (76u + sizeof(_g4_t_v72)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v73)) > _g4_s14 ? (80u + sizeof(_g4_t_v73)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v74)) > _g4_s15 ? (84u + sizeof(_g4_t_v74)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v75)) > _g4_s16 ? (92u + sizeof(_g4_t_v75)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v76)) > _g4_s17 ? (96u + sizeof(_g4_t_v76)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v77)) > _g4_s18 ? (100u + sizeof(_g4_t_v77)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v78)) > _g4_s19 ? (104u + sizeof(_g4_t_v78)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v79)) > _g4_s20 ? (112u + sizeof(_g4_t_v79)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v80)) > _g4_s21 ? (116u + sizeof(_g4_t_v80)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v81)) > _g4_s22 ? (120u + sizeof(_g4_t_v81)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v82)) > _g4_s23 ? (124u + sizeof(_g4_t_v82)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v83)) > _g4_s24 ? (124u + sizeof(_g4_t_v83)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v84)) > _g4_s25 ? (128u + sizeof(_g4_t_v84)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v85)) > _g4_s26 ? (128u + sizeof(_g4_t_v85)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v86)) > _g4_s27 ? (136u + sizeof(_g4_t_v86)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v87)) > _g4_s28 ? (136u + sizeof(_g4_t_v87)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v88)) > _g4_s29 ? (140u + sizeof(_g4_t_v88)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v89)) > _g4_s30 ? (144u + sizeof(_g4_t_v89)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v90)) > _g4_s31 ? (148u + sizeof(_g4_t_v90)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v91)) > _g4_s32 ? (148u + sizeof(_g4_t_v91)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v92)) > _g4_s33 ? (152u + sizeof(_g4_t_v92)) : _g4_s33,
    _g4_s35 = (152u + sizeof(_g4_t_v93)) > _g4_s34 ? (152u + sizeof(_g4_t_v93)) : _g4_s34,
    _g4_s36 = (152u + sizeof(_g4_t_v94)) > _g4_s35 ? (152u + sizeof(_g4_t_v94)) : _g4_s35,
    _g4_s37 = (152u + sizeof(_g4_t_v95)) > _g4_s36 ? (152u + sizeof(_g4_t_v95)) : _g4_s36,
    _g4_s38 = (156u + sizeof(_g4_t_v96)) > _g4_s37 ? (156u + sizeof(_g4_t_v96)) : _g4_s37,
    _g4_s39 = (156u + sizeof(_g4_t_v97)) > _g4_s38 ? (156u + sizeof(_g4_t_v97)) : _g4_s38,
    _g4_s40 = (156u + sizeof(_g4_t_v98)) > _g4_s39 ? (156u + sizeof(_g4_t_v98)) : _g4_s39,
    _g4_s41 = (156u + sizeof(_g4_t_v99)) > _g4_s40 ? (156u + sizeof(_g4_t_v99)) : _g4_s40,
    _g4_s42 = (156u + sizeof(_g4_t_v100)) > _g4_s41 ? (156u + sizeof(_g4_t_v100)) : _g4_s41,
    _g4_s43 = (160u + sizeof(_g4_t_v101)) > _g4_s42 ? (160u + sizeof(_g4_t_v101)) : _g4_s42,
    _g4_s44 = (164u + sizeof(_g4_t_v102)) > _g4_s43 ? (164u + sizeof(_g4_t_v102)) : _g4_s43,
    _g4_s45 = (180u + sizeof(_g4_t_v103)) > _g4_s44 ? (180u + sizeof(_g4_t_v103)) : _g4_s44,
    _g4_s46 = (196u + sizeof(_g4_t_v104)) > _g4_s45 ? (196u + sizeof(_g4_t_v104)) : _g4_s45,
    _g4_s47 = (200u + sizeof(_g4_t_v105)) > _g4_s46 ? (200u + sizeof(_g4_t_v105)) : _g4_s46,
    _g4_s48 = (204u + sizeof(_g4_t_v106)) > _g4_s47 ? (204u + sizeof(_g4_t_v106)) : _g4_s47,
    _g4_s49 = (212u + sizeof(_g4_t_v107)) > _g4_s48 ? (212u + sizeof(_g4_t_v107)) : _g4_s48,
    _g4_s50 = (220u + sizeof(_g4_t_v108)) > _g4_s49 ? (220u + sizeof(_g4_t_v108)) : _g4_s49,
    _g4_s51 = (228u + sizeof(_g4_t_v109)) > _g4_s50 ? (228u + sizeof(_g4_t_v109)) : _g4_s50,
    _g4_s52 = (244u + sizeof(_g4_t_v110)) > _g4_s51 ? (244u + sizeof(_g4_t_v110)) : _g4_s51,
    _g4_s53 = (248u + sizeof(_g4_t_v111)) > _g4_s52 ? (248u + sizeof(_g4_t_v111)) : _g4_s52,
    _g4_s54 = (252u + sizeof(_g4_t_v112)) > _g4_s53 ? (252u + sizeof(_g4_t_v112)) : _g4_s53,
    _g4_s55 = (268u + sizeof(_g4_t_v113)) > _g4_s54 ? (268u + sizeof(_g4_t_v113)) : _g4_s54
  };
  alignas(16) uint8_t _g4_sf[_g4_s55];
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 36u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 56u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 60u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 64u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 68u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 72u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 76u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 80u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 84u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 92u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 96u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 100u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 104u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 112u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 116u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 120u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 124u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 124u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 128u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 128u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 136u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 136u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 140u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 144u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 148u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 148u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 152u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 152u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 152u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 152u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 156u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 156u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 156u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 156u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 156u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 160u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 164u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 180u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 196u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 200u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 204u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 212u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 220u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 228u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 244u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 248u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 252u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 268u);

  v113 = &a1;
  v68 = a3;
  v66 = a1;
  v70 = a4;
  v6 = a6;
  v7 = a2;
  v77 = a2;
  v96 = a5;
  result = a1[1];
  v71 = result;
  if ( result <= 0 )
    return result;
  v102[0] = -1.0;
  v104 = 0;
  v105 = 0;
  v106 = 0x80000000;
  hkMonitorStreamAnalyzer::getTimerLimits(a1, a2, a3, v102, &v104);
  v9 = v7;
  v10 = *(uint32_t *)v7;
  v11 = v9;
  v12 = *((uint32_t *)v9 + 1);
  if ( (*v68)[1] - v10 <= v12 )
    v12 = (*v68)[1] - v10;
  v13 = v12 + v10;
  v14 = v12;
  v62 = v12;
  v15 = v11;
  v63 = v13;
  v72 = *((uint32_t *)v11 + 3) + *((uint32_t *)v11 + 2);
  v16 = v14 < 2;
  v67 = v14 * (*((uint32_t *)v11 + 4) + v72 * v71);
  v17 = 0;
  if ( !v16 )
    v17 = 32;
  v18 = v17;
  v65 = v17;
  v19 = *((uint32_t *)v15 + 5);
  v20 = v19 + 1;
  v80 = v19 - v18;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v22 = (hkMemoryAllocator::Self *)(4 * v67 * v20);
  *v70 = (hkString::Self *)hkMemoryRouter::easyAlloc(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), v22);
  *(uint32_t *)v96 = v67;
  hkString::memSet(*v70, nullptr, (size_t)v22, v60);
  if ( v6 != nullptr )
    *v6 = v102[0];
  v107[0] = 0;
  v107[1] = 0;
  v108 = -1;
  v74 = *(uint32_t *)v77;
  if ( v63 <= *(uint32_t *)v77 )
    goto LABEL_69;
  v69 = 4 * *(uint32_t *)v77;
  v23 = v67;
  do
  {
    v24 = v23 - *((uint32_t *)v77 + 4);
    v64 = v24;
    if ( v62 > 1 )
    {
      v25 = *((uint32_t *)v77 + 5);
      v82 = (int)(uintptr_t)(*v70) + 4 * v25 * (v24 - v72);
      v84 = 0;
      v86 = 1000;
      do
      {
        v26 = (uint32_t *)(v84 + v82);
        v27 = (uint32_t *)(uintptr_t)(*(&off_2038380 + v74 / v86 % 10));
        for ( i = 0; i != 32; i += 4 )
        {
          if ( ((v27[6] << i) & 0xF0000000) != 0 )
            *v26 = -16777216;
          if ( ((v27[5] << i) & 0xF0000000) != 0 )
            v26[v25] = -16777216;
          if ( ((v27[4] << i) & 0xF0000000) != 0 )
            v26[2 * v25] = -16777216;
          if ( ((v27[3] << i) & 0xF0000000) != 0 )
            v26[3 * v25] = -16777216;
          if ( ((v27[2] << i) & 0xF0000000) != 0 )
            v26[4 * v25] = -16777216;
          if ( ((v27[1] << i) & 0xF0000000) != 0 )
            v26[5 * v25] = -16777216;
          if ( ((*v27 << i) & 0xF0000000) != 0 )
            v26[6 * v25] = -16777216;
          ++v26;
        }
        v84 += 28;
        v86 /= 10;
      }
      while ( v84 != 112 );
      v24 = v64;
    }
    v73 = v24;
    v78 = 0;
    while ( 2 )
    {
      v73 -= v72;
      v29 = *v70;
      v30 = *(float *)(v104 + 4 * (v74 - *(uint32_t *)v77));
      v97 = *((char **)v77 + 5);
      v31 = *((uint32_t *)v77 + 9);
      v76 = *((uint32_t *)v77 + 2);
      v32 = (uint32_t *)(*v68)[3 * v78];
      v33 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*v66 + 4 * v78) + 96) + v69);
      if ( *(uint32_t *)(v33 + 100) == 0 )
        goto LABEL_31;
      v109[0] = 0;
      v109[1] = 0;
      v109[2] = -1;
      v110 = 0;
      v34 = v102[0] / (float)v80;
      v111 = 0;
      v112 = 0x80000000;
      if ( v80 > 0 )
      {
        v88 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v33;
        v91 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v29);
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)&v101,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          &v110,
          v80,
          4);
        v33 = (int)(uintptr_t)(v88);
        v29 = (hkString::Self *)(v91);
      }
      v90 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(v29);
      v35 = v32[3] == 0;
      v36 = v32[2];
      v37 = v32[1];
      if ( v35 )
        v36 = v37;
      sub_155ACB0(v33, v80, v30, v34, (hkMemoryAllocator::Self *)&v110, v36);
      v79 = v111;
      if ( v80 <= 0 || v111 <= 0 )
        goto LABEL_59;
      v87 = 0;
      v81 = (unsigned int *)((char *)v90 + 4 * v65 + 4 * (uint32_t)(uintptr_t)(v97) * v73);
      v75 = 4 * (uint32_t)(uintptr_t)(v97);
      v89 = 0xFFFFFFFF;
      v98 = nullptr;
      do
      {
        v38 = *(uint32_t *)(v110 + 4 * v87);
        v83 = (char *)v38;
        if ( v38 == 0 || *(uint16_t *)(v38 + 132) != 0 )
          goto LABEL_57;
        if ( (char *)v38 == v98 )
        {
          v43 = v89;
          goto LABEL_54;
        }
        v39 = *(uint32_t *)(v110 + 4 * v87);
        v89 = 0xFFFFFFFF;
        do
        {
          while ( (*(uint8_t *)(v39 + 134) & 2) != 0 )
          {
LABEL_44:
            v39 = *(uint32_t *)(v39 + 116);
            if ( v39 == 0 )
              goto LABEL_66;
          }
          v99 = *(unsigned int **)(v39 + 120);
          v61 = v103;
          v92 = v39;
          hkMapBase_unsigned_long_unsigned_l_393416::get(
            (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v101,
            (unsigned int)(uintptr_t)(v109),
            v99);
          if ( v101 == 0 )
          {
            v42 = v103[0];
            v89 = v103[0];
            goto LABEL_53;
          }
          v61 = v103;
          hkMapBase_unsigned_long_unsigned_l_393416::get(
            (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v101,
            (unsigned int)(uintptr_t)(v107),
            v99);
          v39 = v92;
          if ( v101 == 0 )
          {
            v89 = v103[0];
            goto LABEL_44;
          }
          if ( *(int *)(v31 + 12) > 0 )
          {
            v85 = v92;
            v40 = v31;
            v41 = 0;
            do
            {
              v93 = 8 * v41;
              if ( hkString::strCasecmp(
                     (hkString::Self *)(*(uint32_t *)(*(uint32_t *)(v40 + 8) + 8 * v41) & 0xFFFFFFFE),
                     (const char *)v99,
                     v59) == 0 )
              {
                v31 = v40;
                v89 = *(uint32_t *)(*(uint32_t *)(v40 + 8) + v93 + 4);
                hkMapBase_unsigned_long_unsigned_l_393416::insert(
                  (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v109,
                  (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
                  (unsigned int)(uintptr_t)(v99),
                  v89);
                v42 = v89;
                goto LABEL_53;
              }
              ++v41;
            }
            while ( v41 < *(uint32_t *)(v40 + 12) );
            v31 = v40;
            v39 = v85;
          }
          v94 = v39;
          hkMapBase_unsigned_long_unsigned_l_393416::insert(
            (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v107,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            (unsigned int)(uintptr_t)(v99),
            v89);
          v39 = *(uint32_t *)(v94 + 116);
        }
        while ( v39 != 0 );
LABEL_66:
        v42 = v89;
LABEL_53:
        v43 = v42 & 0xFF000000 | ((v42 & 0xFEFEFE) >> 1);
        v98 = v83;
LABEL_54:
        if ( v76 > 0 )
        {
          v44 = v81;
          for ( j = 0; j != v76; ++j )
          {
            *v44 = v43;
            v44 = (unsigned int *)((char *)v44 + v75);
          }
        }
LABEL_57:
        ++v87;
        ++v81;
      }
      while ( v80 > v87 && v79 > v87 );
LABEL_59:
      v111 = 0;
      if ( v112 >= 0 )
        (*(void (**)(uint32_t *, int, int, uint32_t *))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v110,
          4 * v112,
          v61);
      v110 = 0;
      v112 = 0x80000000;
      hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v109,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
      hkMapBase_unsigned_long_unsigned_l_393416::Destroy((hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v109);
LABEL_31:
      if ( ++v78 != v71 )
        continue;
      break;
    }
    ++v74;
    v69 += 4;
    v23 = v72 * (1 - v71) + v64 - v72;
  }
  while ( v74 != v63 );
LABEL_69:
  v46 = (float)(1000 * v80) / v102[0];
  v100 = (char *)(int)(float)((float)((float)((int)v77[7] % 1000) * 0.001f) * v46);
  if ( v46 <= 5.0 || (v55 = *((uint32_t *)v77 + 5), v65 - (int)(uintptr_t)(v100) >= v55) )
  {
    v47 = SLODWORD(v102[0]);
  }
  else
  {
    v56 = v65 - (uint32_t)(uintptr_t)(v100);
    v95 = 0;
    do
    {
      if ( v56 >= 0 && v67 > 0 )
      {
        v57 = 0;
        while ( 1 )
        {
          v58 = v57 * v55;
          ++v57;
          *((uint32_t *)*v70 + v56 + v58) = -16776961;
          if ( v57 == v67 )
            break;
          v55 = *((uint32_t *)v77 + 5);
        }
        v55 = *((uint32_t *)v77 + 5);
      }
      v56 = v65 - (uint32_t)(uintptr_t)(v100) + (int)(float)((float)++v95 * v46);
    }
    while ( v56 < v55 );
    v47 = SLODWORD(v102[0]);
  }
  v48 = (float)(16666 * v80) / *(float *)&v47;
  if ( (int)v48 > 0 )
  {
    v49 = v65 - (uint32_t)(uintptr_t)(v100);
    v50 = *((uint32_t *)v77 + 5);
    if ( v65 - (int)(uintptr_t)(v100) < v50 )
    {
      do
      {
        if ( v49 >= 0 && v67 > 0 )
        {
          v51 = 0;
          for ( k = v50; ; k = *((uint32_t *)v77 + 5) )
          {
            *((uint32_t *)*v70 + v49 + v51 * k) = -16711936;
            v53 = v51 * *((uint32_t *)v77 + 5);
            ++v51;
            *((uint32_t *)*v70 + v49 + v53 + 1) = -16711936;
            if ( v51 == v67 )
              break;
          }
          v50 = *((uint32_t *)v77 + 5);
        }
        v49 += (int)v48;
      }
      while ( v49 < v50 );
    }
  }
  if ( *((uint8_t *)v77 + 32) != 0 && v108 >= 0 )
  {
    v54 = 0;
    if ( *(uint32_t *)v107[0] == -1 )
    {
      while ( v108 >= ++v54 )
      {
        if ( *(uint32_t *)(v107[0] + 8 * v54) != -1 )
          goto LABEL_90;
      }
    }
    else
    {
LABEL_90:
      while ( v108 >= ++v54 )
      {
        while ( *(uint32_t *)(v107[0] + 8 * v54) == -1 )
        {
          if ( v108 < ++v54 )
            goto LABEL_86;
        }
      }
    }
  }
LABEL_86:
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v107,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy((hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v107);
  result = v106;
  v105 = 0;
  if ( v106 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v104,
             4 * v106);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::writeStatisticsDetailsToTga  (binary VA: 0x155d280)
// Original: hkMonitorStreamAnalyzer::writeStatisticsDetailsToTga
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * hkMonitorStreamAnalyzer::writeStatisticsDetailsToTga(uint32_t *a1, int a2, uint32_t **a3, hkOstream::Self *a4, float *a5)
{
  hkMemoryAllocator::Self *result;
  int address;
  typedef hkString::Self *_g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v7 = nullptr;
  v8 = 0;
  hkMonitorStreamAnalyzer::writeStatisticsDetailsToTexture(a1, (float *)a2, a3, &v7, (char *)&v8, a5);
  result = (hkMemoryAllocator::Self *)(v7);
  if ( v7 != nullptr )
  {
    saveToTGA((char *)v7, a4, *(uint32_t *)(a2 + 20), v8);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    return hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), v7);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::drawThreadsToTga  (binary VA: 0x155d330)
// Original: hkMonitorStreamAnalyzer::drawThreadsToTga
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::drawThreadsToTga(hkMonitorStreamAnalyzer::Self *self, const hkMonitorStreamAnalyzer::ThreadDrawInput::Self *a2, hkOstream::Self *a3)
{
  hkMonitorStreamAnalyzer::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int StatisticsTreeForMultipleFrames;
  int v10;
  int address;
  int result;
  typedef hkOstream::Self *_g4_t_v13;
  typedef const hkMonitorStreamAnalyzer::ThreadDrawInput::Self *_g4_t_v14;
  typedef hkMonitorStreamAnalyzer::Self *_g4_t_v15;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[4];
  typedef uint32_t *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[15];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v18)) > _g4_s5 ? (20u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v19)) > _g4_s6 ? (24u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v20)) > _g4_s7 ? (28u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v21)) > _g4_s8 ? (32u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v22)) > _g4_s9 ? (36u + sizeof(_g4_t_v22)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);

  v22[11] = (uint32_t)(uintptr_t)(&self);
  v3 = self;
  v15 = self;
  v14 = a2;
  v13 = a3;
  hkMonitorStreamAnalyzer::checkAllThreadsCapturedSameNumFrames();
  v19 = v22;
  v4 = *((uint32_t *)v3 + 1);
  v20 = 0;
  v21 = -2147483642;
  v17 = v4;
  if ( v4 <= 6 )
  {
    v20 = v4;
    if ( v4 <= 0 )
    {
      hkMonitorStreamAnalyzer::writeStatisticsDetailsToTga((uint32_t *)(&v19), (int)(uintptr_t)(v14), (uint32_t **)v15, v13, nullptr);
      goto LABEL_11;
    }
  }
  else
  {
    v5 = v4;
    v6 = 12;
    if ( v5 > 11 )
      v6 = v5;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v18,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v19,
      v6,
      4);
    v20 = v5;
  }
  v7 = 0;
  do
  {
    v8 = &v19[v7];
    StatisticsTreeForMultipleFrames = hkMonitorStreamAnalyzer::makeStatisticsTreeForMultipleFrames(v15, v7++, 0);
    *v8 = StatisticsTreeForMultipleFrames;
  }
  while ( v7 != v17 );
  v10 = 0;
  hkMonitorStreamAnalyzer::writeStatisticsDetailsToTga((uint32_t *)(&v19), (int)(uintptr_t)(v14), (uint32_t **)v15, v13, nullptr);
  do
  {
    if ( v19[v10] != 0 )
    {
      v16 = (hkMonitorStreamAnalyzer::Node::Self *)v19[v10];
      hkMonitorStreamAnalyzer::Node::Destroy(v16);
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      (*(void (**)(uint32_t, hkMonitorStreamAnalyzer::Node::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        v16,
        136);
    }
    ++v10;
  }
  while ( v10 != v17 );
LABEL_11:
  result = v21;
  v20 = 0;
  if ( v21 >= 0 )
    return (*(int (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v19,
             4 * v21);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::reverseLookupNodeAtTgaSample  (binary VA: 0x155d4f0)
// Original: hkMonitorStreamAnalyzer::reverseLookupNodeAtTgaSample
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::reverseLookupNodeAtTgaSample(int a1, int a2, uint32_t *a3, float *a4, uint32_t **a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float v13; // xmm0_4
  float v14; // xmm1_4
  int v15;
  uint32_t *v16;
  int *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef float _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef char _g4_t_v31[4];
  typedef float _g4_t_v32[4];
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int *_g4_t_v39;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v25)) > _g4_s2 ? (8u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v26)) > _g4_s3 ? (12u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v27)) > _g4_s4 ? (12u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v28)) > _g4_s5 ? (16u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v29)) > _g4_s6 ? (16u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v30)) > _g4_s7 ? (20u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v31)) > _g4_s8 ? (24u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v32)) > _g4_s9 ? (28u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v33)) > _g4_s10 ? (44u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v34)) > _g4_s11 ? (48u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v35)) > _g4_s12 ? (52u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v36)) > _g4_s13 ? (60u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v37)) > _g4_s14 ? (64u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v38)) > _g4_s15 ? (68u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v39)) > _g4_s16 ? (84u + sizeof(_g4_t_v39)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);

  v39 = &a1;
  v26 = a3;
  v25 = (uint32_t *)(a5);
  v5 = a3[1];
  if ( v5 <= 0 )
    return 0;
  v6 = 32;
  v28 = *((uint32_t *)a4 + 1);
  if ( v28 < 2 )
    v6 = 0;
  if ( v6 > a1 )
    return 0;
  v7 = *((uint32_t *)a4 + 5);
  if ( a1 >= v7 )
    return 0;
  v8 = a1 - v6;
  v24 = v7 - v6;
  v9 = *((uint32_t *)a4 + 3) + *((uint32_t *)a4 + 2);
  v10 = *((uint32_t *)a4 + 4) + v9 * v5;
  v11 = v10 * v28;
  v23 = v8;
  if ( a2 >= v10 * v28 || a2 < 0 )
    return 0;
  v32[0] = -1.0;
  v33 = 0;
  v34 = 0;
  v35 = 0x80000000;
  v12 = 4 * ((v11 - 1 - a2) / v10);
  v30 = (v11 - 1 - a2) % v10 / v9;
  hkMonitorStreamAnalyzer::getTimerLimits(a3, a4, a5, v32, &v33);
  v13 = *(float *)(v33 + v12);
  v14 = v32[0] / (float)v24;
  v15 = *(uint32_t *)(*v26 + 4 * v30);
  v16 = *(uint32_t **)(*v25 + 12 * v30);
  v36 = 0;
  v37 = 0;
  v38 = 0x80000000;
  if ( v24 > 0 )
  {
    v29 = v16;
    v27 = v32[0] / (float)v24;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v31, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v36, v24, 4);
    v16 = v29;
    v14 = v27;
  }
  v17 = (int *)(*(uint32_t *)(v15 + 96) + v12);
  if ( *(int *)(*v17 + 100) <= 0 )
    goto LABEL_21;
  v18 = v16[3];
  v19 = v16[2];
  v37 = 0;
  v20 = v16[1];
  if ( v18 == 0 )
    v19 = v20;
  sub_155ACB0(*v17, v24, v13, v14, (hkMemoryAllocator::Self *)&v36, v19);
  if ( v23 >= v37 )
LABEL_21:
    v21 = 0;
  else
    v21 = *(uint32_t *)(v36 + 4 * v23);
  v37 = 0;
  if ( v38 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v36,
      4 * v38);
  v34 = 0;
  if ( v35 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v33,
      4 * v35);
  return v21;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::gatherRawStreamTimerValues  (binary VA: 0x155d760)
// Original: hkMonitorStreamAnalyzer::gatherRawStreamTimerValues
// ----------------------------------------------------------------------------
void hkMonitorStreamAnalyzer::gatherRawStreamTimerValues(hkMonitorStreamAnalyzer::Self *self, hkMonitorStreamAnalyzer::Self *a2, const char *a3, const hkMonitorStreamFrameInfo::Self *a4, const char **a5, int a6)
{
  uint32_t *v6;
  int v7;
  const char **v8;
  uint32_t *v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18; // kr00_4
  int v19;
  uint32_t *v20;
  char *v21;
  hkMonitorStreamAnalyzer::Node::Self *v22;
  int i;
  hkMonitorStreamAnalyzer::Self *v24;
  uint8_t *v25;
  uint32_t *v26;
  const char **v27;
  hkMonitorStreamAnalyzer::Self *v28;
  int v29;
  const char **v30;
  const char **v31;
  int v32;
  int v33;
  int v34;
  const char **v35;
  const char **v36;
  int v37;
  uint32_t *v38;
  const char **v39;
  hkMonitorStreamAnalyzer::Self *v40;
  int v41;
  const char **v42;
  const char **v43;
  int v44;
  int v45;
  const char **j;
  const char **v47;
  uint32_t *v48;
  hkMonitorStreamAnalyzer::Self *v49;
  uint32_t *v50;
  const char **v51;
  const char **v52;
  int v53;
  int v54;
  int v55;
  int v56;
  hkMonitorStreamAnalyzer::Self *thisa;
  hkMonitorStreamAnalyzer::Self *thisb;
  hkMonitorStreamAnalyzer::Self *thisc;
  typedef int _g4_t_v57;
  typedef const char *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef signed int _g4_t_v62;
  typedef hkString::Self *_g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef const char **_g4_t_v65;
  typedef hkMonitorStreamAnalyzer::Self *_g4_t_v66;
  typedef const char **_g4_t_v67;
  typedef hkMonitorStreamAnalyzer::Self *_g4_t_v68;
  typedef unsigned int *_g4_t_v69;
  typedef const char **_g4_t_v70;
  typedef hkMonitorStreamAnalyzer::Self *_g4_t_v71;
  typedef const char **_g4_t_v72;
  typedef unsigned int _g4_t_v73;
  typedef hkString::Self *_g4_t_v74;
  typedef const char **_g4_t_v75;
  typedef const char **_g4_t_v76;
  typedef hkString::Self *_g4_t_v77;
  typedef const char **_g4_t_v78;
  typedef hkString::Self *_g4_t_v79;
  typedef hkString::Self *_g4_t_v80;
  typedef hkString::Self *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef uint32_t _g4_t_v83[24];
  typedef unsigned int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int64_t _g4_t_v86 __attribute__((aligned(1)));
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int16_t _g4_t_v91;
  typedef int16_t _g4_t_v92;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v57)) > _g4_s0 ? (0u + sizeof(_g4_t_v57)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v58)) > _g4_s1 ? (4u + sizeof(_g4_t_v58)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v59)) > _g4_s2 ? (12u + sizeof(_g4_t_v59)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v60)) > _g4_s3 ? (20u + sizeof(_g4_t_v60)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v61)) > _g4_s4 ? (24u + sizeof(_g4_t_v61)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v62)) > _g4_s5 ? (28u + sizeof(_g4_t_v62)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v63)) > _g4_s6 ? (36u + sizeof(_g4_t_v63)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v64)) > _g4_s7 ? (48u + sizeof(_g4_t_v64)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v65)) > _g4_s8 ? (52u + sizeof(_g4_t_v65)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v66)) > _g4_s9 ? (52u + sizeof(_g4_t_v66)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v67)) > _g4_s10 ? (52u + sizeof(_g4_t_v67)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v68)) > _g4_s11 ? (52u + sizeof(_g4_t_v68)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v69)) > _g4_s12 ? (56u + sizeof(_g4_t_v69)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v70)) > _g4_s13 ? (56u + sizeof(_g4_t_v70)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v71)) > _g4_s14 ? (56u + sizeof(_g4_t_v71)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v72)) > _g4_s15 ? (56u + sizeof(_g4_t_v72)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v73)) > _g4_s16 ? (60u + sizeof(_g4_t_v73)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v74)) > _g4_s17 ? (60u + sizeof(_g4_t_v74)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v75)) > _g4_s18 ? (60u + sizeof(_g4_t_v75)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v76)) > _g4_s19 ? (60u + sizeof(_g4_t_v76)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v77)) > _g4_s20 ? (60u + sizeof(_g4_t_v77)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v78)) > _g4_s21 ? (60u + sizeof(_g4_t_v78)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v79)) > _g4_s22 ? (60u + sizeof(_g4_t_v79)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v80)) > _g4_s23 ? (60u + sizeof(_g4_t_v80)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v81)) > _g4_s24 ? (60u + sizeof(_g4_t_v81)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v82)) > _g4_s25 ? (64u + sizeof(_g4_t_v82)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v83)) > _g4_s26 ? (80u + sizeof(_g4_t_v83)) : _g4_s26,
    _g4_s28 = (176u + sizeof(_g4_t_v84)) > _g4_s27 ? (176u + sizeof(_g4_t_v84)) : _g4_s27,
    _g4_s29 = (180u + sizeof(_g4_t_v85)) > _g4_s28 ? (180u + sizeof(_g4_t_v85)) : _g4_s28,
    _g4_s30 = (188u + sizeof(_g4_t_v86)) > _g4_s29 ? (188u + sizeof(_g4_t_v86)) : _g4_s29,
    _g4_s31 = (196u + sizeof(_g4_t_v87)) > _g4_s30 ? (196u + sizeof(_g4_t_v87)) : _g4_s30,
    _g4_s32 = (200u + sizeof(_g4_t_v88)) > _g4_s31 ? (200u + sizeof(_g4_t_v88)) : _g4_s31,
    _g4_s33 = (204u + sizeof(_g4_t_v89)) > _g4_s32 ? (204u + sizeof(_g4_t_v89)) : _g4_s32,
    _g4_s34 = (208u + sizeof(_g4_t_v90)) > _g4_s33 ? (208u + sizeof(_g4_t_v90)) : _g4_s33,
    _g4_s35 = (212u + sizeof(_g4_t_v91)) > _g4_s34 ? (212u + sizeof(_g4_t_v91)) : _g4_s34,
    _g4_s36 = (214u + sizeof(_g4_t_v92)) > _g4_s35 ? (214u + sizeof(_g4_t_v92)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 0u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 4u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 36u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 52u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 56u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 56u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 56u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 60u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 60u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 60u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 60u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 60u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 60u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 60u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 60u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 64u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 80u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 176u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 180u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 188u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 196u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 200u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 204u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 208u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 212u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 214u);

  if ( (int)(uintptr_t)(a5) <= 0 )
    return;
  v83[0] = 148 * (uint32_t)(uintptr_t)(a5);
  v6 = (uint32_t *)(*(int (**)(uint32_t *, uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                   (uint32_t *)(hkContainerTempAllocator::s_alloc),
                   v83);
  v61 = v6;
  v7 = 0x80000000;
  if ( v83[0] / 148 != 0 )
    v7 = v83[0] / 148;
  v8 = nullptr;
  v60 = v7;
  v9 = v6 + 24;
  do
  {
    v8 = (const char **)((char *)v8 + 1);
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0x80000000;
    v9 += 37;
  }
  while ( v8 != a5 );
  v65 = nullptr;
  v69 = v6 + 25;
  do
  {
    v63 = *((hkString::Self **)a4 + (uint32_t)(uintptr_t)(v65));
    hkMonitorStreamAnalyzer::Node::Construct((int)(uintptr_t)(v83), nullptr, (int)(uintptr_t)(v63), 0);
    *v6 = v83[0];
    v6[1] = v83[1];
    v6[2] = v83[2];
    v6[3] = v83[3];
    v6[4] = v83[4];
    v6[5] = v83[5];
    v6[6] = v83[6];
    v6[7] = v83[7];
    v6[8] = v83[8];
    v6[9] = v83[9];
    v6[10] = v83[10];
    v6[11] = v83[11];
    v6[12] = v83[12];
    v6[13] = v83[13];
    v6[14] = v83[14];
    v6[15] = v83[15];
    v6[16] = v83[16];
    v6[17] = v83[17];
    v6[18] = v83[18];
    v6[19] = v83[19];
    v6[20] = v83[20];
    v6[21] = v83[21];
    v16 = v6[26];
    v6[22] = v83[22];
    v6[23] = v83[23];
    v17 = v85;
    if ( (v16 & 0x3FFFFFFF) >= v85 )
    {
      v10 = v85;
      v11 = *(v69 - 1);
    }
    else
    {
      if ( v16 >= 0 )
      {
        (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          *(v69 - 1),
          4 * v16);
        v17 = v85;
      }
      v82 = 4 * v17;
      v58 = (const char *)&v82;
      v11 = (*(int (**)(uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))((uint32_t *)(&hkContainerHeapAllocator::s_alloc));
      v18 = v82;
      *(v69 - 1) = v11;
      v69[1] = v18 / 4;
      v10 = v85;
    }
    *v69 = v10;
    v73 = v84;
    if ( (int)v10 > 0 )
    {
      if ( (v11 >= v84 + 16 || v84 >= v11 + 16) && v10 > 0xB )
      {
        v62 = v10;
        v12 = 0;
        v64 = 0;
        v13 = 4 * (v10 >> 2);
        v14 = v10 >> 2;
        do
        {
          ++v64;
          *(__m128i *)(v11 + v12) = *(__m128i *)(v73 + v12);
          v12 += 16;
        }
        while ( v64 < v14 );
        if ( v62 != v13 )
        {
          *(uint32_t *)(v11 + 4 * v13) = *(uint32_t *)(v73 + 4 * v13);
          if ( v62 > v13 + 1 )
          {
            *(uint32_t *)(v11 + 4 * (v13 + 1)) = *(uint32_t *)(v73 + 4 * (v13 + 1));
            if ( v13 + 2 < v62 )
              *(uint32_t *)(v11 + 4 * (v13 + 2)) = *(uint32_t *)(v73 + 4 * (v13 + 2));
          }
        }
      }
      else
      {
        for ( i = 0; i != v10; ++i )
          *(uint32_t *)(v11 + 4 * i) = *(uint32_t *)(v73 + 4 * i);
      }
    }
    v6 += 37;
    *((uint64_t *)v6 - 5) = v86;
    *(v6 - 8) = v87;
    *(v6 - 7) = v88;
    *(v6 - 6) = v89;
    *(v6 - 5) = v90;
    *((uint16_t *)v6 - 8) = v91;
    *((uint16_t *)v6 - 7) = v92;
    hkMonitorStreamAnalyzer::Node::Destroy((hkMonitorStreamAnalyzer::Node::Self *)v83);
    v15 = hkString::strLen(v63, v58);
    *(v6 - 2) = 0;
    *(v6 - 3) = v15 + 1;
    *(v6 - 1) = 0;
    v65 = (const char **)((char *)v65 + 1);
    v69 += 37;
  }
  while ( v65 != a5 );
  if ( self >= a2 )
    goto LABEL_23;
  v24 = self;
  v25 = *(uint8_t **)self;
  if ( *(uint32_t *)self <= 0xFFu )
    goto LABEL_42;
LABEL_34:
  switch ( *v25 )
  {
    case 'E':
      thisa = v24;
      v29 = (int)(uintptr_t)(v61);
      v30 = nullptr;
      v31 = a5;
      do
      {
LABEL_48:
        v32 = *(uint32_t *)(v29 + 140);
        if ( v32 == 0 )
          goto LABEL_47;
        v33 = *(uint32_t *)(v29 + 144);
        if ( v33 != 0 )
        {
          *(uint32_t *)(v29 + 144) = v33 - 1;
LABEL_47:
          v30 = (const char **)((char *)v30 + 1);
          v29 += 148;
          if ( v30 == v31 )
            break;
          goto LABEL_48;
        }
        v75 = v31;
        v30 = (const char **)((char *)v30 + 1);
        hkMonitorStreamAnalyzer::Node::setTimers(v29, (int)(uintptr_t)(a3), v32, (int)(uintptr_t)(thisa));
        v31 = v75;
        *(uint32_t *)(v29 + 140) = 0;
        v29 += 148;
      }
      while ( v30 != v75 );
LABEL_51:
      v24 = (hkMonitorStreamAnalyzer::Self *)((char *)thisa + 12);
      if ( a2 > (hkMonitorStreamAnalyzer::Self *)((char *)thisa + 12) )
        goto LABEL_41;
      goto LABEL_23;
    case 'L':
      v49 = v24;
      v50 = v61;
      v51 = nullptr;
      v81 = (hkString::Self *)(v25 + 2);
      v52 = a5;
      do
      {
        if ( v50[35] != 0 )
        {
          v50[36] += 2;
        }
        else
        {
          v67 = v52;
          v71 = v49;
          v54 = hkString::memCmp(v81, (const void *)v50[30], v50[34], v59);
          v49 = v71;
          v52 = v67;
          if ( v54 != 0 )
          {
            v56 = hkString::memCmp((hkString::Self *)(*((uint32_t *)v71 + 3) + 2), (const void *)v50[30], v50[34], v59);
            v49 = v71;
            v52 = v67;
            if ( v56 == 0 )
            {
              v50[35] = (uint32_t)(uintptr_t)(v71);
              v50[36] = 0;
            }
          }
          else
          {
            v50[35] = (uint32_t)(uintptr_t)(v71);
            v50[36] = 1;
          }
        }
        v51 = (const char **)((char *)v51 + 1);
        v50 += 37;
      }
      while ( v51 != v52 );
      v24 = (hkMonitorStreamAnalyzer::Self *)((char *)v49 + 16);
      if ( a2 > (hkMonitorStreamAnalyzer::Self *)((char *)v49 + 16) )
        goto LABEL_41;
      goto LABEL_23;
    case 'M':
      thisc = v24;
      v80 = (hkString::Self *)(v25 + 2);
      v47 = nullptr;
      v48 = v61;
      do
      {
        if ( hkString::memCmp(v80, (const void *)v48[30], v48[34], v59) == 0 )
        {
          *((uint16_t *)v48 + 66) = 2;
          v48[*((uint32_t *)a3 + 1)] = *((uint32_t *)thisc + 1);
          ++v48[*((uint32_t *)a3 + 1) + 12];
        }
        v47 = (const char **)((char *)v47 + 1);
        v48 += 37;
      }
      while ( v47 != a5 );
      v24 = (hkMonitorStreamAnalyzer::Self *)((char *)thisc + 8);
      if ( a2 > (hkMonitorStreamAnalyzer::Self *)((char *)thisc + 8) )
        goto LABEL_41;
      goto LABEL_23;
    case 'N':
    case 'P':
    case 'p':
      goto LABEL_42;
    case 'O':
      v24 = (hkMonitorStreamAnalyzer::Self *)((char *)v24 + 16);
      if ( a2 > v24 )
        goto LABEL_41;
      goto LABEL_23;
    case 'R':
    case 'T':
      v26 = v61;
      v74 = (hkString::Self *)(v25 + 2);
      v27 = nullptr;
      v28 = v24;
      do
      {
        if ( v26[35] != 0 )
        {
          ++v26[36];
        }
        else
        {
          v68 = v28;
          v72 = v27;
          v55 = hkString::memCmp(v74, (const void *)v26[30], v26[34], v59);
          v27 = v72;
          v28 = v68;
          if ( v55 == 0 )
          {
            v26[35] = (uint32_t)(uintptr_t)(v68);
            v26[36] = 0;
          }
        }
        v27 = (const char **)((char *)v27 + 1);
        v26 += 37;
      }
      while ( v27 != a5 );
      v24 = (hkMonitorStreamAnalyzer::Self *)((char *)v28 + 12);
      goto LABEL_40;
    case 'S':
      thisa = v24;
      v45 = (int)(uintptr_t)(v61);
      v79 = (hkString::Self *)(v25 + 2);
      for ( j = nullptr; j != a5; j = (const char **)((char *)j + 1) )
      {
        if ( *(uint32_t *)(v45 + 140) != 0 )
        {
          if ( *(uint32_t *)(v45 + 144) == 0 )
          {
            hkMonitorStreamAnalyzer::Node::setTimers(v45, (int)(uintptr_t)(a3), *(uint32_t *)(v45 + 140), (int)(uintptr_t)(thisa));
            *(uint32_t *)(v45 + 140) = 0;
          }
        }
        else if ( hkString::memCmp(v79, *(const void **)(v45 + 120), *(uint32_t *)(v45 + 136), v59) == 0 )
        {
          *(uint32_t *)(v45 + 144) = 0;
          *(uint32_t *)(v45 + 140) = (uint32_t)(uintptr_t)(thisa);
        }
        v45 += 148;
      }
      goto LABEL_51;
    case 'W':
      thisb = v24;
      v41 = (int)(uintptr_t)(v61);
      v42 = nullptr;
      v43 = a5;
      break;
    case 'Y':
      v38 = v61;
      v77 = (hkString::Self *)(v25 + 2);
      v39 = nullptr;
      v40 = v24;
      do
      {
        if ( v38[35] != 0 )
        {
          ++v38[36];
        }
        else
        {
          v66 = v40;
          v70 = v39;
          v53 = hkString::memCmp(v77, (const void *)v38[30], v38[34], v59);
          v39 = v70;
          v40 = v66;
          if ( v53 == 0 )
          {
            v38[35] = (uint32_t)(uintptr_t)(v66);
            v38[36] = 0;
          }
        }
        v39 = (const char **)((char *)v39 + 1);
        v38 += 37;
      }
      while ( v39 != a5 );
      v24 = (hkMonitorStreamAnalyzer::Self *)((char *)v40 + 4);
      goto LABEL_43;
    case 'l':
      thisa = v24;
      v34 = (int)(uintptr_t)(v61);
      v35 = nullptr;
      v36 = a5;
      do
      {
        if ( *(uint32_t *)(v34 + 140) != 0 )
        {
          v37 = *(uint32_t *)(v34 + 144);
          if ( v37 <= 1 )
          {
            v76 = v36;
            hkMonitorStreamAnalyzer::Node::setTimers(v34, (int)(uintptr_t)(a3), *(uint32_t *)(v34 + 140), (int)(uintptr_t)(thisa));
            *(uint32_t *)(v34 + 140) = 0;
            v37 = *(uint32_t *)(v34 + 144);
            v36 = v76;
          }
          *(uint32_t *)(v34 + 144) = v37 - 2;
        }
        v35 = (const char **)((char *)v35 + 1);
        v34 += 148;
      }
      while ( v35 != v36 );
      goto LABEL_51;
    case 'm':
      v24 = (hkMonitorStreamAnalyzer::Self *)((char *)v24 + 12);
      if ( a2 > v24 )
        goto LABEL_41;
      goto LABEL_23;
    default:
LABEL_40:
      if ( a2 > v24 )
        goto LABEL_41;
      goto LABEL_23;
  }
  do
  {
    while ( 1 )
    {
      if ( *(uint32_t *)(v41 + 140) != 0 )
      {
        v44 = *(uint32_t *)(v41 + 144);
        if ( v44 == 0 )
          break;
        *(uint32_t *)(v41 + 144) = v44 - 1;
      }
      v42 = (const char **)((char *)v42 + 1);
      v41 += 148;
      if ( v42 == v43 )
        goto LABEL_70;
    }
    v57 = v41;
    v78 = v43;
    v42 = (const char **)((char *)v42 + 1);
    v41 += 148;
    hkMonitorStreamAnalyzer::Node::setTimers(v57, (int)(uintptr_t)(a3), thisb);
    v43 = v78;
    *(uint32_t *)(v41 - 8) = 0;
  }
  while ( v42 != v78 );
LABEL_70:
  v24 = (hkMonitorStreamAnalyzer::Self *)((char *)thisb + 16);
  if ( a2 > (hkMonitorStreamAnalyzer::Self *)((char *)thisb + 16) )
  {
LABEL_41:
    do
    {
      v25 = *(uint8_t **)v24;
      if ( *(uint32_t *)v24 > 0xFFu )
        goto LABEL_34;
LABEL_42:
      v24 = (hkMonitorStreamAnalyzer::Self *)((char *)v24 + 4);
LABEL_43:
      ;
    }
    while ( a2 > v24 );
  }
LABEL_23:
  v19 = a6;
  v20 = v61;
  do
  {
    v19 += 4;
    *(uint32_t *)(v19 - 4) = *v20;
    v20 += 37;
  }
  while ( v19 != a6 + 4 * (uint32_t)(uintptr_t)(a5) );
  v21 = (char *)a5 - 1;
  v22 = (hkMonitorStreamAnalyzer::Node::Self *)&v61[37 * ((uint32_t)(uintptr_t)(a5) - 1)];
  do
  {
    --v21;
    hkMonitorStreamAnalyzer::Node::Destroy(v22);
    v22 = (hkMonitorStreamAnalyzer::Node::Self *)((char *)v22 - 148);
  }
  while ( v21 != (char *)-1 );
  if ( v60 >= 0 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v61,
      148 * v60);
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::showCombinedThreadSummaryRec  (binary VA: 0x155f480)
// Original: hkMonitorStreamAnalyzer::showCombinedThreadSummaryRec
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::showCombinedThreadSummaryRec(int a1, int a2, int a3, int a4, int a5, int a6)
{
  char v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int result;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef hkString::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[24];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v16)) > _g4_s1 ? (44u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v17)) > _g4_s2 ? (52u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v18)) > _g4_s3 ? (56u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v19)) > _g4_s4 ? (60u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v20)) > _g4_s5 ? (64u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v21)) > _g4_s6 ? (68u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v22)) > _g4_s7 ? (72u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v23)) > _g4_s8 ? (84u + sizeof(_g4_t_v23)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 84u);

  v20 = nullptr;
  v21 = 0;
  v22 = 0x80000000;
  hkOstream::Construct(v23, &v20);
  if ( a3 != 0 )
  {
    if ( *(uint8_t *)(a6 + 16) != 0 )
    {
      v6 = 32;
      if ( *(uint32_t *)(a6 + 20) == a2 )
        v6 = *(uint8_t *)(a6 + 24);
      hkOstream::opShl((int)(uintptr_t)(v23), v6);
    }
    v7 = 0;
    v8 = (a3 - 1) * *(uint32_t *)(a6 + 8);
    if ( v8 > 0 )
    {
      do
      {
        ++v7;
        hkOstream::opShl((int)(uintptr_t)(v23), 32);
      }
      while ( v7 != v8 );
    }
    if ( *(uint8_t *)(a6 + 16) != 0 )
    {
      if ( *(int *)(a2 + 100) <= 0 )
      {
        hkOstream::opShl((int)(uintptr_t)(v23), 32);
      }
      else
      {
        if ( (*(uint8_t *)(a2 + 124) & 1) != 0 )
          v9 = *(uint8_t *)(a6 + 25);
        else
          v9 = *(uint8_t *)(a6 + 24);
        hkOstream::opShl((int)(uintptr_t)(v23), v9);
      }
    }
    v10 = a5 + a4;
    v16 = a5 + a4;
    if ( a5 + a4 <= 0 )
    {
      v11 = 0;
    }
    else
    {
      v11 = *(uint32_t *)(a2 + 48);
      if ( v10 > 1 )
      {
        v11 += *(uint32_t *)(a2 + 52);
        if ( v10 > 2 )
        {
          v11 += *(uint32_t *)(a2 + 56);
          if ( v10 > 3 )
          {
            v11 += *(uint32_t *)(a2 + 60);
            if ( v10 > 4 )
            {
              v11 += *(uint32_t *)(a2 + 64);
              if ( v10 > 5 )
              {
                v11 += *(uint32_t *)(a2 + 68);
                if ( v10 > 6 )
                {
                  v11 += *(uint32_t *)(a2 + 72);
                  if ( v10 > 7 )
                  {
                    v11 += *(uint32_t *)(a2 + 76);
                    if ( v10 > 8 )
                    {
                      v11 += *(uint32_t *)(a2 + 80);
                      if ( v10 > 9 )
                      {
                        v11 += *(uint32_t *)(a2 + 84);
                        if ( v10 > 10 )
                        {
                          v11 += *(uint32_t *)(a2 + 88);
                          if ( v10 > 11 )
                            v11 += *(uint32_t *)(a2 + 92);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    hkOstream::printf((hkOstream::Self *)v23, "%s (%i) ", *(uint32_t *)(a2 + 120), v11);
    if ( v16 > 0 )
    {
      v18 = 0;
      v17 = a2;
      do
      {
        if ( *(uint8_t *)(a6 + 26) != 0 )
        {
          hkOstream::opShl((int)(uintptr_t)(v23), 9);
        }
        else
        {
          v12 = 0;
          v19 = *(uint32_t *)(a6 + 12) * (a3 - 1) + *(uint32_t *)a6 + *(uint32_t *)(a6 + 4) * v18 - v21;
          if ( v19 > 0 )
          {
            do
            {
              hkOstream::opShl((int)(uintptr_t)(v23), 32);
              ++v12;
            }
            while ( v12 != v19 );
          }
        }
        hkOstream::printf((hkOstream::Self *)v23, "%-6.3f (%i)", *(float *)v17, *(uint32_t *)(v17 + 48));
        ++v18;
        v17 += 4;
      }
      while ( v18 != v16 );
    }
    hkOstream::opShl(a1, v20);
    hkOstream::opShl(a1, 10);
  }
  if ( (*(uint8_t *)(a6 + 16) == 0 || (*(uint8_t *)(a2 + 124) & 1) != 0) && *(int *)(a2 + 100) > 0 )
  {
    v13 = 0;
    do
    {
      v15 = *(uint32_t *)(*(uint32_t *)(a2 + 96) + 4 * v13++);
      hkMonitorStreamAnalyzer::showCombinedThreadSummaryRec(a1, v15, a3 + 1, a4, a5, a6);
    }
    while ( *(uint32_t *)(a2 + 100) > v13 );
  }
  hkOstream::Destroy((hkOstream::Self *)v23);
  result = v22;
  v21 = 0;
  if ( v22 >= 0 )
    return (*(int (**)(uint32_t *, hkString::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v20,
             v22 & 0x3FFFFFFF);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::showCombinedThreadSummaryForSingleFrame  (binary VA: 0x155f800)
// Original: hkMonitorStreamAnalyzer::showCombinedThreadSummaryForSingleFrame
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::showCombinedThreadSummaryForSingleFrame(hkString::Self **a1, int a2, int a3, hkOstream::Self *a4, int a5)
{
  int MaxTimerNameIndent;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  typedef int _g4_t_v11;
  typedef int _g4_t_i;
  typedef hkString::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[24];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_i)) > _g4_s1 ? (4u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v15)) > _g4_s4 ? (20u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);

  MaxTimerNameIndent = hkMonitorStreamAnalyzer::findMaxTimerNameIndent(
                         a1,
                         nullptr,
                         *(uint32_t *)(a5 + 8),
                         *(uint8_t *)(a5 + 16));
  v13 = nullptr;
  v14 = 0;
  v15 = 0x80000000;
  *(uint32_t *)a5 = MaxTimerNameIndent;
  hkOstream::Construct(v16, &v13);
  hkOstream::printf((hkOstream::Self *)v16, "Timer Name");
  if ( a2 > 1 || a3 > 0 )
  {
    v11 = 0;
    if ( a2 > 0 )
    {
      do
      {
        if ( *(uint8_t *)(a5 + 26) != 0 )
        {
          hkOstream::opShl((int)(uintptr_t)(v16), 9);
        }
        else
        {
          v6 = 0;
          v7 = *(uint32_t *)a5 + *(uint32_t *)(a5 + 4) * v11 - v14;
          if ( v7 > 0 )
          {
            do
            {
              ++v6;
              hkOstream::opShl((int)(uintptr_t)(v16), 32);
            }
            while ( v6 != v7 );
          }
        }
        hkOstream::printf((hkOstream::Self *)v16, "Thread %d", v11++);
      }
      while ( v11 != a2 );
    }
    for ( i = 0; a3 > i; ++i )
    {
      if ( *(uint8_t *)(a5 + 26) != 0 )
      {
        hkOstream::opShl((int)(uintptr_t)(v16), 9);
      }
      else
      {
        v8 = *(uint32_t *)a5 + *(uint32_t *)(a5 + 4) * (a2 + i) - v14;
        v9 = 0;
        if ( v8 > 0 )
        {
          do
          {
            ++v9;
            hkOstream::opShl((int)(uintptr_t)(v16), 32);
          }
          while ( v9 != v8 );
        }
      }
      hkOstream::printf((hkOstream::Self *)v16, "Spu %d", i);
    }
  }
  hkOstream::opShl((int)(uintptr_t)(a4), v13);
  hkOstream::printf(a4, "\n\n");
  hkMonitorStreamAnalyzer::showCombinedThreadSummaryRec((int)(uintptr_t)(a4), (int)(uintptr_t)(a1), 0, a2, a3, a5);
  hkOstream::Destroy((hkOstream::Self *)v16);
  result = v15;
  v14 = 0;
  if ( v15 >= 0 )
    return (*(int (**)(uint32_t *, hkString::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v13,
             v15 & 0x3FFFFFFF);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::writeStatisticsDetails  (binary VA: 0x155fac0)
// Original: hkMonitorStreamAnalyzer::writeStatisticsDetails
// ----------------------------------------------------------------------------
void hkMonitorStreamAnalyzer::writeStatisticsDetails(hkOstream::Self *a1, char ***a2, int a3, char *a4, char a5, hkString::Self *a6, char a7)
{
  int v7;
  char ***v8;
  int v9;
  int v10;
  float **v11;
  float *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  char *v20;
  hkString::Self *v21;
  hkString::Self *v22;
  hkString::Self *v23;
  hkString::Self *v24;
  hkString::Self *v25;
  hkString::Self *v26;
  hkString::Self *v27;
  hkString::Self *v28;
  hkString::Self *v29;
  hkString::Self *v30;
  hkString::Self *v31;
  int v32;
  char *v33;
  int v34;
  unsigned int v35;
  float v36; // xmm1_4
  int ii;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  char *v44;
  char *v45;
  hkString::Self *v46;
  hkString::Self *v47;
  hkString::Self *v48;
  hkString::Self *v49;
  hkString::Self *v50;
  hkString::Self *v51;
  hkString::Self *v52;
  hkString::Self *v53;
  hkString::Self *v54;
  hkString::Self *v55;
  hkString::Self *v56;
  int v57;
  char *v58;
  int v59;
  unsigned int v60;
  float v61; // xmm1_4
  int jj;
  int v63;
  hkString::Self *v64;
  char *v65;
  int v66;
  int v67;
  hkMonitorStreamAnalyzer::Node::Self *v68;
  int v69;
  hkMonitorStreamAnalyzer::Self **v70;
  int v71;
  hkMonitorStreamAnalyzer::Self *v72;
  int v73;
  signed int v74;
  hkLifoAllocator::Self *v75;
  hkLifoAllocator::Self *v76;
  hkMonitorStreamAnalyzer::Self **v77;
  char *v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  hkMonitorStreamAnalyzer::Self *v85;
  float *v86;
  unsigned int v87;
  unsigned int v88;
  unsigned int v89;
  unsigned int v90;
  unsigned int v91;
  unsigned int v92;
  unsigned int v93;
  unsigned int v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  unsigned int v98;
  int i;
  hkString::Self *v100;
  int v101;
  unsigned int v102;
  float v103; // xmm1_4
  int j;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  float **v112;
  int v113;
  float *v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  float **v120;
  int v121;
  int k;
  float v123; // xmm0_4
  int v124;
  int v125;
  __m128i *v126;
  int v127;
  int v128;
  int8_t *v129;
  int v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int8_t *_g4_t_v133;
  typedef double _g4_t_v134;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v135;
  typedef const char *_g4_t_v136;
  typedef hkString::Self *_g4_t_v137;
  typedef char _g4_t_v138;
  typedef int _g4_t_v139;
  typedef hkString::Self *_g4_t_v140;
  typedef char _g4_t_v141;
  typedef hkMonitorStreamAnalyzer::Node::Self *_g4_t_v142;
  typedef char *_g4_t_v143;
  typedef char *_g4_t_m;
  typedef char *_g4_t_v145;
  typedef char *_g4_t_v146;
  typedef char *_g4_t_v147;
  typedef char *_g4_t_v148;
  typedef char *_g4_t_v149;
  typedef char *_g4_t_v150;
  typedef char *_g4_t_v151;
  typedef hkString::Self *_g4_t_n;
  typedef hkString::Self *_g4_t_v153;
  typedef unsigned int _g4_t_v154;
  typedef float _g4_t_v155;
  typedef char *_g4_t_v156;
  typedef char *_g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef float _g4_t_v162;
  typedef float _g4_t_v163;
  typedef int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef int _g4_t_v167;
  typedef int _g4_t_v168;
  typedef int _g4_t_v169;
  typedef int8_t *_g4_t_v170;
  typedef int8_t *_g4_t_v171;
  typedef hkString::Self *_g4_t_v172;
  typedef hkString::Self *_g4_t_v173;
  typedef hkString::Self *_g4_t_v174;
  typedef hkString::Self *_g4_t_v175;
  typedef hkString::Self *_g4_t_v176;
  typedef hkString::Self *_g4_t_v177;
  typedef hkString::Self *_g4_t_v178;
  typedef hkOstream::Self *_g4_t_v179;
  typedef char _g4_t_v180[4];
  typedef hkMonitorStreamAnalyzer::Self **_g4_t_v181;
  typedef int _g4_t_v182;
  typedef signed int _g4_t_v183;
  typedef void *_g4_t_v184;
  typedef char *_g4_t_v185;
  typedef float **_g4_t_v186;
  typedef int _g4_t_v187;
  typedef __m128i _g4_t_v188;
  typedef char _g4_t_v189;
  typedef int _g4_t_v190;
  typedef char _g4_t_v191[240];
  typedef hkOstream::Self **_g4_t_v192;
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (0u + sizeof(_g4_t_v131)) > _g4_s0 ? (0u + sizeof(_g4_t_v131)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v132)) > _g4_s1 ? (0u + sizeof(_g4_t_v132)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v133)) > _g4_s2 ? (0u + sizeof(_g4_t_v133)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v134)) > _g4_s3 ? (8u + sizeof(_g4_t_v134)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v135)) > _g4_s4 ? (8u + sizeof(_g4_t_v135)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v136)) > _g4_s5 ? (8u + sizeof(_g4_t_v136)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v137)) > _g4_s6 ? (28u + sizeof(_g4_t_v137)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v138)) > _g4_s7 ? (44u + sizeof(_g4_t_v138)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v139)) > _g4_s8 ? (48u + sizeof(_g4_t_v139)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v140)) > _g4_s9 ? (52u + sizeof(_g4_t_v140)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v141)) > _g4_s10 ? (56u + sizeof(_g4_t_v141)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v142)) > _g4_s11 ? (60u + sizeof(_g4_t_v142)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v143)) > _g4_s12 ? (64u + sizeof(_g4_t_v143)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_m)) > _g4_s13 ? (64u + sizeof(_g4_t_m)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v145)) > _g4_s14 ? (68u + sizeof(_g4_t_v145)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v146)) > _g4_s15 ? (72u + sizeof(_g4_t_v146)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v147)) > _g4_s16 ? (72u + sizeof(_g4_t_v147)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v148)) > _g4_s17 ? (72u + sizeof(_g4_t_v148)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v149)) > _g4_s18 ? (76u + sizeof(_g4_t_v149)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v150)) > _g4_s19 ? (76u + sizeof(_g4_t_v150)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v151)) > _g4_s20 ? (76u + sizeof(_g4_t_v151)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_n)) > _g4_s21 ? (80u + sizeof(_g4_t_n)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v153)) > _g4_s22 ? (80u + sizeof(_g4_t_v153)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v154)) > _g4_s23 ? (80u + sizeof(_g4_t_v154)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v155)) > _g4_s24 ? (88u + sizeof(_g4_t_v155)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v156)) > _g4_s25 ? (88u + sizeof(_g4_t_v156)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v157)) > _g4_s26 ? (88u + sizeof(_g4_t_v157)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v158)) > _g4_s27 ? (92u + sizeof(_g4_t_v158)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v159)) > _g4_s28 ? (92u + sizeof(_g4_t_v159)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v160)) > _g4_s29 ? (92u + sizeof(_g4_t_v160)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v161)) > _g4_s30 ? (92u + sizeof(_g4_t_v161)) : _g4_s30,
    _g4_s32 = (92u + sizeof(_g4_t_v162)) > _g4_s31 ? (92u + sizeof(_g4_t_v162)) : _g4_s31,
    _g4_s33 = (96u + sizeof(_g4_t_v163)) > _g4_s32 ? (96u + sizeof(_g4_t_v163)) : _g4_s32,
    _g4_s34 = (96u + sizeof(_g4_t_v164)) > _g4_s33 ? (96u + sizeof(_g4_t_v164)) : _g4_s33,
    _g4_s35 = (96u + sizeof(_g4_t_v165)) > _g4_s34 ? (96u + sizeof(_g4_t_v165)) : _g4_s34,
    _g4_s36 = (96u + sizeof(_g4_t_address)) > _g4_s35 ? (96u + sizeof(_g4_t_address)) : _g4_s35,
    _g4_s37 = (96u + sizeof(_g4_t_v167)) > _g4_s36 ? (96u + sizeof(_g4_t_v167)) : _g4_s36,
    _g4_s38 = (96u + sizeof(_g4_t_v168)) > _g4_s37 ? (96u + sizeof(_g4_t_v168)) : _g4_s37,
    _g4_s39 = (96u + sizeof(_g4_t_v169)) > _g4_s38 ? (96u + sizeof(_g4_t_v169)) : _g4_s38,
    _g4_s40 = (96u + sizeof(_g4_t_v170)) > _g4_s39 ? (96u + sizeof(_g4_t_v170)) : _g4_s39,
    _g4_s41 = (96u + sizeof(_g4_t_v171)) > _g4_s40 ? (96u + sizeof(_g4_t_v171)) : _g4_s40,
    _g4_s42 = (100u + sizeof(_g4_t_v172)) > _g4_s41 ? (100u + sizeof(_g4_t_v172)) : _g4_s41,
    _g4_s43 = (100u + sizeof(_g4_t_v173)) > _g4_s42 ? (100u + sizeof(_g4_t_v173)) : _g4_s42,
    _g4_s44 = (100u + sizeof(_g4_t_v174)) > _g4_s43 ? (100u + sizeof(_g4_t_v174)) : _g4_s43,
    _g4_s45 = (100u + sizeof(_g4_t_v175)) > _g4_s44 ? (100u + sizeof(_g4_t_v175)) : _g4_s44,
    _g4_s46 = (100u + sizeof(_g4_t_v176)) > _g4_s45 ? (100u + sizeof(_g4_t_v176)) : _g4_s45,
    _g4_s47 = (100u + sizeof(_g4_t_v177)) > _g4_s46 ? (100u + sizeof(_g4_t_v177)) : _g4_s46,
    _g4_s48 = (100u + sizeof(_g4_t_v178)) > _g4_s47 ? (100u + sizeof(_g4_t_v178)) : _g4_s47,
    _g4_s49 = (104u + sizeof(_g4_t_v179)) > _g4_s48 ? (104u + sizeof(_g4_t_v179)) : _g4_s48,
    _g4_s50 = (108u + sizeof(_g4_t_v180)) > _g4_s49 ? (108u + sizeof(_g4_t_v180)) : _g4_s49,
    _g4_s51 = (112u + sizeof(_g4_t_v181)) > _g4_s50 ? (112u + sizeof(_g4_t_v181)) : _g4_s50,
    _g4_s52 = (116u + sizeof(_g4_t_v182)) > _g4_s51 ? (116u + sizeof(_g4_t_v182)) : _g4_s51,
    _g4_s53 = (120u + sizeof(_g4_t_v183)) > _g4_s52 ? (120u + sizeof(_g4_t_v183)) : _g4_s52,
    _g4_s54 = (124u + sizeof(_g4_t_v184)) > _g4_s53 ? (124u + sizeof(_g4_t_v184)) : _g4_s53,
    _g4_s55 = (128u + sizeof(_g4_t_v185)) > _g4_s54 ? (128u + sizeof(_g4_t_v185)) : _g4_s54,
    _g4_s56 = (208u + sizeof(_g4_t_v186)) > _g4_s55 ? (208u + sizeof(_g4_t_v186)) : _g4_s55,
    _g4_s57 = (212u + sizeof(_g4_t_v187)) > _g4_s56 ? (212u + sizeof(_g4_t_v187)) : _g4_s56,
    _g4_s58 = (256u + sizeof(_g4_t_v188)) > _g4_s57 ? (256u + sizeof(_g4_t_v188)) : _g4_s57,
    _g4_s59 = (272u + sizeof(_g4_t_v189)) > _g4_s58 ? (272u + sizeof(_g4_t_v189)) : _g4_s58,
    _g4_s60 = (276u + sizeof(_g4_t_v190)) > _g4_s59 ? (276u + sizeof(_g4_t_v190)) : _g4_s59,
    _g4_s61 = (280u + sizeof(_g4_t_v191)) > _g4_s60 ? (280u + sizeof(_g4_t_v191)) : _g4_s60,
    _g4_s62 = (520u + sizeof(_g4_t_v192)) > _g4_s61 ? (520u + sizeof(_g4_t_v192)) : _g4_s61
  };
  alignas(16) uint8_t _g4_sf[_g4_s62];
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 0u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 0u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 0u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 8u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 8u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 8u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 28u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 44u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 48u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 52u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 56u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 60u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 64u);
  _g4_t_m &m = *reinterpret_cast<_g4_t_m *>(_g4_sf + 64u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 68u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 72u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 72u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 72u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 76u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 76u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 76u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 80u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 80u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 80u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 88u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 88u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 88u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 92u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 92u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 92u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 92u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 92u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 96u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 96u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 96u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 96u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 96u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 96u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 96u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 96u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 96u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 100u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 100u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 100u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 100u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 100u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 100u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 100u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 104u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 108u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 112u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 116u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 120u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 124u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 128u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 208u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 212u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 256u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 272u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 276u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 280u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 520u);

  v7 = 0;
  v192 = &a1;
  v179 = a1;
  v8 = a2;
  v140 = (hkString::Self *)a2;
  v139 = a3;
  v143 = a4;
  v138 = a5;
  v172 = a6;
  v141 = a7;
  hkOstream::printf(a1, "Havok version: %s\n", "hk_2014.1.0-r1");
  v149 = **v8;
  hkMonitorStreamAnalyzer::Node::Construct((int)(uintptr_t)(&v181), nullptr, (int)(uintptr_t)("Sum"), 1);
  v9 = *((uint32_t *)v149 + 25);
  v163 = 1.0 / (float)v9;
  if ( v9 > 0 )
  {
    do
      sub_1558070(&v181, *(uint32_t *)(*((uint32_t *)v149 + 24) + 4 * v7++));
    while ( *((uint32_t *)v149 + 25) > v7 );
  }
  v10 = 0;
  if ( v187 <= 0 )
    goto LABEL_221;
  do
  {
    if ( hkString::strCmp(v172, *((const char **)v186[v10] + 30), (const char *)LODWORD(v134)) == 0 )
    {
      v11 = v186;
      v12 = v186[v10];
      if ( v12 == nullptr )
        goto LABEL_221;
      goto LABEL_8;
    }
    ++v10;
  }
  while ( v10 < v187 );
  if ( v187 <= 0 )
    goto LABEL_221;
  v11 = v186;
  v12 = *v186;
  if ( *v186 == nullptr )
    goto LABEL_221;
LABEL_8:
  v155 = 0.0;
  do
  {
    v155 = (float)(v163 * *v12) + v155;
    if ( v187 <= 0 )
      break;
    if ( v12 == *v11 )
    {
      v14 = 1;
    }
    else
    {
      v13 = 0;
      do
      {
        if ( ++v13 == v187 )
        {
          v14 = v187 + 1;
          goto LABEL_15;
        }
      }
      while ( v12 != v11[v13] );
      v14 = v13 + 1;
    }
LABEL_15:
    if ( v187 <= v14 )
      break;
    v15 = v14;
    while ( hkString::strCmp(v172, *((const char **)v11[v15] + 30), (const char *)LODWORD(v134)) != 0 )
    {
      ++v14;
      ++v15;
      if ( v14 >= v187 )
        goto LABEL_21;
      v11 = v186;
    }
    v11 = v186;
    v12 = v186[v15];
  }
  while ( v12 != nullptr );
LABEL_21:
  if ( v155 <= 0.0 )
  {
LABEL_221:
    v155 = 1000.0;
    if ( (v138 & 1) == 0 )
      goto LABEL_23;
    goto LABEL_222;
  }
  if ( (v138 & 1) != 0 )
  {
LABEL_222:
    hkOstream::printf(v179, "\n\n");
    hkOstream::printf(v179, "*********************************\n");
    hkOstream::printf(v179, "********** Total Times    *******\n");
    hkOstream::printf(v179, "*********************************\n");
    hkOstream::printf(v179, "Timers are added together\n");
    if ( v187 <= 0 )
      goto LABEL_23;
    v147 = nullptr;
    while ( 1 )
    {
      v86 = v186[(uint32_t)(uintptr_t)(v147)];
      v87 = *((uint32_t *)v86 + 12);
      v161 = v87 != 0;
      v88 = *((uint32_t *)v86 + 13);
      if ( v88 != 0 )
      {
        ++v161;
        if ( v87 < v88 )
          v87 = *((uint32_t *)v86 + 13);
      }
      v89 = *((uint32_t *)v86 + 14);
      if ( v89 != 0 )
      {
        ++v161;
        if ( v87 < v89 )
          v87 = *((uint32_t *)v86 + 14);
      }
      v90 = *((uint32_t *)v86 + 15);
      if ( v90 != 0 )
      {
        ++v161;
        if ( v87 < v90 )
          v87 = *((uint32_t *)v86 + 15);
      }
      v91 = *((uint32_t *)v86 + 16);
      if ( v91 != 0 )
      {
        ++v161;
        if ( v87 < v91 )
          v87 = *((uint32_t *)v86 + 16);
      }
      v92 = *((uint32_t *)v86 + 17);
      if ( v92 != 0 )
      {
        ++v161;
        if ( v87 < v92 )
          v87 = *((uint32_t *)v86 + 17);
      }
      v93 = *((uint32_t *)v86 + 18);
      if ( v93 != 0 )
      {
        ++v161;
        if ( v87 < v93 )
          v87 = *((uint32_t *)v86 + 18);
      }
      v94 = *((uint32_t *)v86 + 19);
      if ( v94 != 0 )
      {
        ++v161;
        if ( v87 < v94 )
          v87 = *((uint32_t *)v86 + 19);
      }
      v95 = *((uint32_t *)v86 + 20);
      if ( v95 != 0 )
      {
        ++v161;
        if ( v87 < v95 )
          v87 = *((uint32_t *)v86 + 20);
      }
      v96 = *((uint32_t *)v86 + 21);
      if ( v96 != 0 )
      {
        ++v161;
        if ( v87 < v96 )
          v87 = *((uint32_t *)v86 + 21);
      }
      v97 = *((uint32_t *)v86 + 22);
      if ( v97 != 0 )
      {
        ++v161;
        if ( v87 < v97 )
          v87 = *((uint32_t *)v86 + 22);
      }
      v98 = *((uint32_t *)v86 + 23);
      if ( v98 != 0 )
      {
        ++v161;
        if ( v87 < v98 )
          v87 = *((uint32_t *)v86 + 23);
      }
      hkString::snprintf((hkString::Self *)&v188, 0xC8u, "%s(%i)", *((const char **)v86 + 30), v87);
      if ( v87 <= 1 )
      {
        hkString::snprintf((hkString::Self *)&v188, 0xC8u, "%s", *((const char **)v86 + 30));
      }
      else if ( v163 == 1.0 )
      {
        hkString::snprintf((hkString::Self *)&v188, 0xC8u, "%s (%i)", *((const char **)v86 + 30));
      }
      else
      {
        hkString::snprintf((hkString::Self *)&v188, 0xC8u, "%s (%4.1f)", *((const char **)v86 + 30));
      }
      hkOstream::printf(v179, "%-32s", &v188);
      v153 = (hkString::Self *)v86;
      for ( i = 3; i != 0; --i )
        hkOstream::printf(v179, "\t");
      v100 = v153;
      if ( v161 != 0 )
        break;
      HIDWORD(v134) = 0;
      hkOstream::printf(v179, "% 12.3f\n", 0);
LABEL_272:
      for ( j = 0; j < *((uint32_t *)v100 + 25); ++j )
      {
        v105 = *(uint32_t *)(*((uint32_t *)v100 + 24) + 4 * j);
        sub_1556B80(v179, v105, v163, 2);
      }
      if ( (int)(uintptr_t)(++v147) >= v187 )
        goto LABEL_23;
    }
    v154 = v87;
    v137 = v100;
    v101 = 0;
    while ( 1 )
    {
      v102 = *((uint32_t *)v100 + 12);
      if ( v102 == 0 )
        goto LABEL_265;
      v103 = v163 * *(float *)v100;
      if ( v102 < v154 )
        v103 = v103
             * (float)((float)((float)((float)HIWORD(v154) * 65536.0) + (float)(uint16_t)v154)
                     / (float)((float)((float)HIWORD(v102) * 65536.0) + (float)(uint16_t)v102));
      if ( --v161 != 0 )
      {
        v134 = v103;
        hkOstream::printf(v179, "% 12.3f: ", (unsigned int)COERCE_UNSIGNED_INT64(v103));
LABEL_265:
        ++v101;
        v100 = (hkString::Self *)((char *)v100 + 4);
        if ( v101 == 12 )
          goto LABEL_271;
      }
      else
      {
        ++v101;
        v134 = v103;
        hkOstream::printf(v179, "% 12.3f\n", (unsigned int)COERCE_UNSIGNED_INT64(v103));
        v100 = (hkString::Self *)((char *)v100 + 4);
        if ( v101 == 12 )
        {
LABEL_271:
          v100 = v137;
          goto LABEL_272;
        }
      }
    }
  }
LABEL_23:
  hkMonitorStreamAnalyzer::Node::Destroy((hkMonitorStreamAnalyzer::Node::Self *)&v181);
  if ( (v138 & 2) != 0 )
  {
    hkOstream::printf(v179, "\n\n");
    hkOstream::printf(v179, "*********************************\n");
    hkOstream::printf(v179, "********** Per Frame Time *******\n");
    hkOstream::printf(v179, "*********************************\n");
    hkOstream::printf(v179, "Ascii Art all frames overview\n");
    hkString::memSet((hkString::Self *)&v188, &dword_20, 0x28u, SHIDWORD(v134));
    v191[16] = 0;
    v148 = nullptr;
    v106 = *((uint32_t *)v149 + 25);
    if ( v106 > 0 )
    {
      while ( 1 )
      {
        v107 = *((uint32_t *)v149 + 24);
        v108 = *(uint32_t *)(v107 + 4 * (uint32_t)(uintptr_t)(v148));
        if ( *(uint32_t *)(v108 + 100) != 0 )
          break;
LABEL_282:
        if ( (int)(uintptr_t)(++v148) >= v106 )
          goto LABEL_24;
      }
      if ( *(int *)(v108 + 100) > 0 )
      {
        v109 = *(uint32_t *)(v107 + 4 * (uint32_t)(uintptr_t)(v148));
        v110 = 0;
        while ( 1 )
        {
          v167 = v110;
          if ( hkString::strCmp(v172, *(const char **)(*(uint32_t *)(*(uint32_t *)(v109 + 96) + 4 * v110) + 120), v136) == 0 )
            break;
          ++v110;
          v111 = *(uint32_t *)(v109 + 100);
          if ( v110 >= v111 )
          {
            v113 = v109;
            if ( v111 <= 0 )
              goto LABEL_323;
            v112 = *(float ***)(v109 + 96);
            v114 = *v112;
            if ( *v112 == nullptr )
              goto LABEL_321;
LABEL_289:
            v115 = v113;
            v162 = 0.0;
            do
            {
              v116 = *(uint32_t *)(v115 + 100);
              v162 = v162 + *v114;
              if ( v116 <= 0 )
                break;
              if ( v114 == *v112 )
              {
                v118 = 1;
              }
              else
              {
                v117 = 0;
                do
                {
                  if ( ++v117 == v116 )
                  {
                    v118 = v116 + 1;
                    goto LABEL_296;
                  }
                }
                while ( v114 != v112[v117] );
                v118 = v117 + 1;
              }
LABEL_296:
              if ( v116 <= v118 )
                break;
              v119 = v118;
              v120 = v112;
              v121 = v118;
              for ( k = v115; ; v120 = *(float ***)(k + 96) )
              {
                v168 = v121;
                if ( hkString::strCmp(v172, *((const char **)v120[v119] + 30), v136) == 0 )
                  break;
                v121 = v168 + 1;
                ++v119;
                if ( v168 + 1 >= *(uint32_t *)(k + 100) )
                  goto LABEL_302;
              }
              v112 = *(float ***)(k + 96);
              v115 = k;
              v114 = v112[v119];
            }
            while ( v114 != nullptr );
LABEL_302:
            v123 = v162 * 20.0;
            goto LABEL_303;
          }
        }
        v112 = *(float ***)(v109 + 96);
        v113 = v109;
        v114 = v112[v167];
        if ( v114 != nullptr )
          goto LABEL_289;
LABEL_321:
        v124 = (int)(float)(0.0 / v155);
        if ( v124 >= 0 )
          goto LABEL_304;
        goto LABEL_322;
      }
LABEL_323:
      v123 = 0.0;
LABEL_303:
      v124 = (int)(float)(v123 / v155);
      if ( v124 < 0 )
      {
LABEL_322:
        v127 = 4;
        v128 = 1;
        v126 = &v188;
LABEL_312:
g4_m128_lane<int8_t>(*(v126), 0) = 35;
        v129 = &g4_m128_lane<int8_t>(*(v126), 1);
        if ( v127 > v128 )
        {
          v133 = &g4_m128_lane<int8_t>(*(v126), 1);
          v130 = v127 - v128;
          v170 = v129;
          memset(v133, 32, v127 - v128);
          v129 = &v170[v130];
        }
        if ( v127 <= 39 )
        {
          v171 = v129;
          memset(v129, 9, ((unsigned int)(39 - v127) >> 2) + 1);
          v129 = &v171[((unsigned int)(39 - v127) >> 2) + 1];
        }
        *v129 = 0;
        hkOstream::printf(v179,(char *)(g4_m128_ptr<int8_t>(v188)));
        v136 = v148;
        hkOstream::printf(v179, "%i %-12s %f\n");
        v106 = *((uint32_t *)v149 + 25);
        goto LABEL_282;
      }
LABEL_304:
      if ( v124 <= 39 )
      {
        if ( v124 <= 4 )
        {
          v128 = 1;
          v127 = 4;
          v125 = 0;
          v126 = &v188;
          goto LABEL_310;
        }
      }
      else
      {
        v124 = 39;
      }
      v125 = 4;
      v126 = &v188;
      while ( 1 )
      {
        v127 = v125 + 4;
        v126 = (__m128i *)((char *)v126 + 1);
g4_m128_lane<int8_t>(v126[-1], 15) = 9;
        if ( v125 + 4 >= v124 )
          break;
        v125 += 4;
      }
      v128 = v125 + 1;
LABEL_310:
      if ( v124 > v125 )
      {
        v145 = (char *)v124;
        v169 = v124 - v125;
        memset(v126, 32, v124 - v125);
        v126 = (__m128i *)((char *)v126 + v169);
        v128 = (int)(uintptr_t)(v145 + 1);
      }
      goto LABEL_312;
    }
  }
LABEL_24:
  if ( (v138 & 4) == 0 )
    goto LABEL_101;
  v16 = *((uint32_t *)v140 + 1);
  if ( v16 != 1 && v141 != 0 )
  {
    if ( *(int *)(**(uint32_t **)v140 + 100) <= 0 )
      goto LABEL_101;
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v160 = 0;
    v64 = v140;
    while ( 1 )
    {
      hkOstream::printf(v179, (char *)&a0[1]);
      hkOstream::printf(v179, "****************************************\n");
      hkOstream::printf(v179, "****** Summary Frame:%i ******\n", v160);
      hkOstream::printf(v179, "****************************************\n");
      v65 = *((char **)v64 + 1);
      v181 = nullptr;
      v182 = 0;
      v183 = 0x80000000;
      v185 = v65;
      if ( v65 != nullptr )
      {
        v76 = *address;
        v176 = (hkString::Self *)((4 * (uint32_t)(uintptr_t)(v65) + 127) & 0xFFFFFF80);
        v77 = *((hkMonitorStreamAnalyzer::Self ***)*address + 3);
        if ( (int)(uintptr_t)(v176) <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(v176) + (unsigned int)(uintptr_t)(v77) <= *((uint32_t *)v76 + 4) )
        {
          *((uint32_t *)v76 + 3) = (uint32_t)(uintptr_t)((char *)v176 + (uint32_t)(uintptr_t)(v77));
        }
        else
        {
          v157 = v65;
          v77 = (hkMonitorStreamAnalyzer::Self **)hkLifoAllocator::allocateFromNewSlab(v76, (int)(uintptr_t)(v176));
          v65 = v157;
        }
        v78 = v65;
        v66 = *((uint32_t *)v64 + 1);
        v79 = (unsigned int)(uintptr_t)(v65) & 0x3FFFFFFF;
        v183 = (unsigned int)(uintptr_t)(v78) | 0x80000000;
        v181 = v77;
        v184 = v77;
        if ( v79 >= v66 )
        {
          v81 = v66;
        }
        else
        {
          v80 = 2 * v79;
          v177 = (hkString::Self *)v66;
          if ( 2 * v79 < v66 )
            v80 = v66;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v180,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            (int *)&v181,
            v80,
            4);
          v81 = *((uint32_t *)v64 + 1);
          v66 = (int)(uintptr_t)(v177);
        }
        v182 = v66;
        if ( v81 > 0 )
        {
          v82 = 0;
          do
          {
            while ( 1 )
            {
              v178 = (hkString::Self *)(*(int (**)(uint32_t, int))(**((uint32_t **)*address + 11) + 8))(
                                   *((uint32_t *)*address + 11),
                                   136);
              hkMonitorStreamAnalyzer::Node::Construct((int)(uintptr_t)(v178), nullptr, (int)(uintptr_t)(&unk_1B15112), 1);
              v181[v82] = (hkMonitorStreamAnalyzer::Self *)(v178);
              v83 = *(uint32_t *)(*(uint32_t *)v64 + 4 * v82);
              if ( *(uint32_t *)(v83 + 100) > v160 )
                break;
              if ( *((uint32_t *)v64 + 1) <= ++v82 )
                goto LABEL_218;
            }
            v84 = *(uint32_t *)(*(uint32_t *)(v83 + 96) + 4 * v160);
            v85 = v181[v82++];
            sub_1558070(v85, v84);
          }
          while ( *((uint32_t *)v64 + 1) > v82 );
LABEL_218:
          v66 = v182;
        }
      }
      else
      {
        v181 = nullptr;
        v183 = 0x80000000;
        v184 = nullptr;
        v182 = 0;
        v66 = 0;
      }
      v188 = G4_BITCAST<__m128i>(xmmword_1C7CC10);
      v189 = 0;
      v190 = 0;
      strcpy(v191, ">_");
      v191[3] = 0;
      v67 = 1;
      if ( v66 > 1 )
      {
        do
        {
          v135 = (hkMonitorStreamAnalyzer::Node::Self *)v67;
          v68 = (hkMonitorStreamAnalyzer::Node::Self *)(v181[v67++]);
          hkMonitorStreamAnalyzer::mergeTreesForCombinedThreadSummary(*v181, v68, v135, 0, 0);
        }
        while ( v182 > v67 );
      }
      hkMonitorStreamAnalyzer::showCombinedThreadSummaryForSingleFrame(
        (hkString::Self **)*v181,
        v139,
        (int)(uintptr_t)(v143),
        v179,
        (int)(uintptr_t)(&v188));
      if ( (v138 & 8) != 0 )
        sub_155E270(v179, (unsigned int)(uintptr_t)(*v181), v132);
      v69 = *((uint32_t *)v64 + 1);
      v70 = v181;
      if ( v69 > 0 )
      {
        v71 = 0;
        v175 = v64;
        do
        {
          v72 = v70[v71];
          if ( v72 != nullptr )
          {
            hkMonitorStreamAnalyzer::Node::Destroy((hkMonitorStreamAnalyzer::Node::Self *)(v70[v71]));
            (*(void (**)(uint32_t, hkMonitorStreamAnalyzer::Self *, int))(**((uint32_t **)*address + 11) + 12))(
              *((uint32_t *)*address + 11),
              v72,
              136);
            v70 = v181;
            v69 = *((uint32_t *)v175 + 1);
          }
          ++v71;
        }
        while ( v71 < v69 );
        v64 = v175;
      }
      v73 = 0;
      if ( v184 != v70 )
        v73 = v182;
      v182 = v73;
      v74 = (4 * (uint32_t)(uintptr_t)(v185) + 127) & 0xFFFFFF80;
      v75 = *address;
      if ( v74 > *((uint32_t *)*address + 2) || *((void **)v75 + 3) != (char *)v184 + v74 || v184 == *((void **)v75 + 5) )
        hkLifoAllocator::slowBlockFree(v75, v184, (4 * (uint32_t)(uintptr_t)(v185) + 127) & 0xFFFFFF80);
      else
        *((uint32_t *)v75 + 3) = (uint32_t)(uintptr_t)(v184);
      v182 = 0;
      if ( v183 >= 0 )
        (*(void (**)(uint32_t *, hkMonitorStreamAnalyzer::Self **, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v181,
          4 * v183);
      if ( *(uint32_t *)(**(uint32_t **)v64 + 100) <= ++v160 )
        goto LABEL_101;
    }
  }
  v17 = *(uint32_t *)v140;
  v18 = *(uint32_t *)(**(uint32_t **)v140 + 100);
  if ( v18 <= 0 )
    goto LABEL_101;
  for ( m = nullptr; (int)(uintptr_t)(m) < v18; ++m )
  {
    if ( v16 <= 0 )
      continue;
    for ( n = nullptr; (int)(uintptr_t)(n) < v16; n = (hkString::Self *)((char *)n + 1) )
    {
      while ( 1 )
      {
        v19 = *(uint32_t *)(v17 + 4 * (uint32_t)(uintptr_t)(n));
        if ( *(uint32_t *)(v19 + 100) > (int)(uintptr_t)(m) )
          break;
        n = (hkString::Self *)((char *)n + 1);
        if ( (int)(uintptr_t)(n) >= v16 )
          goto LABEL_99;
      }
      hkMonitorStreamAnalyzer::Node::Construct((int)(uintptr_t)(&v181), nullptr, (int)(uintptr_t)("Sum"), 1);
      sub_1558070(&v181, *(uint32_t *)(*(uint32_t *)(v19 + 96) + 4 * (uint32_t)(uintptr_t)(m)));
      hkOstream::printf(v179, (char *)&a0[1]);
      hkOstream::printf(v179, "****************************************\n");
      hkOstream::printf(v179, "****** Summary Frame:%i Thread:%i ******\n", m, n);
      hkOstream::printf(v179, "****************************************\n");
      hkOstream::printf(v179, "%s\n", *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v19 + 96) + 4 * (uint32_t)(uintptr_t)(m)) + 120));
      if ( v187 > 0 )
      {
        v158 = 0;
        while ( 1 )
        {
          v20 = (char *)v186[v158];
          v173 = *((hkString::Self **)v20 + 12);
          v164 = v173 != nullptr;
          v21 = *((hkString::Self **)v20 + 13);
          if ( v21 != nullptr )
          {
            ++v164;
            if ( v173 >= v21 )
              v21 = *((hkString::Self **)v20 + 12);
            v173 = v21;
          }
          v22 = *((hkString::Self **)v20 + 14);
          if ( v22 != nullptr )
          {
            ++v164;
            if ( v173 >= v22 )
              v22 = v173;
            v173 = v22;
          }
          v23 = *((hkString::Self **)v20 + 15);
          if ( v23 != nullptr )
          {
            ++v164;
            if ( v173 >= v23 )
              v23 = v173;
            v173 = v23;
          }
          v24 = *((hkString::Self **)v20 + 16);
          if ( v24 != nullptr )
          {
            ++v164;
            if ( v173 >= v24 )
              v24 = v173;
            v173 = v24;
          }
          v25 = *((hkString::Self **)v20 + 17);
          if ( v25 != nullptr )
          {
            ++v164;
            if ( v173 >= v25 )
              v25 = v173;
            v173 = v25;
          }
          v26 = *((hkString::Self **)v20 + 18);
          if ( v26 != nullptr )
          {
            ++v164;
            if ( v173 >= v26 )
              v26 = v173;
            v173 = v26;
          }
          v27 = *((hkString::Self **)v20 + 19);
          if ( v27 != nullptr )
          {
            ++v164;
            if ( v173 >= v27 )
              v27 = v173;
            v173 = v27;
          }
          v28 = *((hkString::Self **)v20 + 20);
          if ( v28 != nullptr )
          {
            ++v164;
            if ( v173 >= v28 )
              v28 = v173;
            v173 = v28;
          }
          v29 = *((hkString::Self **)v20 + 21);
          if ( v29 != nullptr )
          {
            ++v164;
            if ( v173 >= v29 )
              v29 = v173;
            v173 = v29;
          }
          v30 = *((hkString::Self **)v20 + 22);
          if ( v30 != nullptr )
          {
            ++v164;
            if ( v173 >= v30 )
              v30 = v173;
            v173 = v30;
          }
          v31 = *((hkString::Self **)v20 + 23);
          if ( v31 != nullptr )
          {
            ++v164;
            if ( v173 >= v31 )
              v31 = v173;
            v173 = v31;
          }
          hkString::snprintf((hkString::Self *)&v188, 0xC8u, "%s(%i)", *((const char **)v20 + 30), v173);
          if ( (unsigned int)(uintptr_t)(v173) <= 1 )
            hkString::snprintf((hkString::Self *)&v188, 0xC8u, "%s", *((const char **)v20 + 30));
          else
            hkString::snprintf((hkString::Self *)&v188, 0xC8u, "%s (%i)", *((const char **)v20 + 30), v173);
          v32 = 3;
          hkOstream::printf(v179, "%-32s", &v188);
          do
          {
            hkOstream::printf(v179, "\t");
            --v32;
          }
          while ( v32 != 0 );
          if ( v164 != 0 )
            break;
          hkOstream::printf(v179, "% 12.3f\n", 0, 0);
LABEL_93:
          for ( ii = 0; ii < *((uint32_t *)v20 + 25); ++ii )
          {
            v38 = *(uint32_t *)(*((uint32_t *)v20 + 24) + 4 * ii);
            sub_1556B80(v179, v38, 1.0, 2);
          }
          if ( ++v158 >= v187 )
            goto LABEL_96;
        }
        v33 = v20;
        v150 = v20;
        v34 = 0;
        while ( 1 )
        {
          v35 = *((uint32_t *)v33 + 12);
          if ( v35 == 0 )
            goto LABEL_86;
          v36 = *(float *)v33;
          if ( v35 < (unsigned int)(uintptr_t)(v173) )
            v36 = v36
                * (float)((float)((float)((float)((unsigned int)(uintptr_t)(v173) >> 16) * 65536.0) + (float)(uint16_t)(uintptr_t)(v173))
                        / (float)((float)((float)HIWORD(v35) * 65536.0) + (float)(uint16_t)v35));
          if ( --v164 != 0 )
          {
            hkOstream::printf(v179, "% 12.3f: ", v36);
LABEL_86:
            ++v34;
            v33 += 4;
            if ( v34 == 12 )
              goto LABEL_92;
          }
          else
          {
            ++v34;
            hkOstream::printf(v179, "% 12.3f\n", v36);
            v33 += 4;
            if ( v34 == 12 )
            {
LABEL_92:
              v20 = v150;
              goto LABEL_93;
            }
          }
        }
      }
LABEL_96:
      if ( (v138 & 8) != 0 )
        sub_155E270(v179, (unsigned int)(uintptr_t)(&v181), v131);
      hkMonitorStreamAnalyzer::Node::Destroy((hkMonitorStreamAnalyzer::Node::Self *)&v181);
      v16 = *((uint32_t *)v140 + 1);
      v17 = *(uint32_t *)v140;
    }
LABEL_99:
    v18 = *(uint32_t *)(*(uint32_t *)v17 + 100);
  }
LABEL_101:
  if ( (v138 & 0x10) == 0 )
    return;
  v39 = *(uint32_t *)v140;
  v40 = *(uint32_t *)(**(uint32_t **)v140 + 100);
  if ( v40 <= 0 )
    return;
  v41 = *((uint32_t *)v140 + 1);
  v142 = nullptr;
  while ( 2 )
  {
    if ( v41 <= 0 )
      goto LABEL_175;
    v151 = nullptr;
    while ( 2 )
    {
      while ( 1 )
      {
        v42 = *(uint32_t *)(v39 + 4 * (uint32_t)(uintptr_t)(v151));
        if ( *(uint32_t *)(v42 + 100) > (int)(uintptr_t)(v142) )
          break;
        if ( (int)(uintptr_t)(++v151) >= v41 )
          goto LABEL_174;
      }
      hkOstream::printf(v179, "\n\n");
      hkOstream::printf(v179, "***************************************\n");
      if ( v139 <= (int)(uintptr_t)(v151) )
        hkOstream::printf(v179, "***** Details Frame-%i Spu:%i ******\n", v142, &v151[-v139]);
      else
        hkOstream::printf(v179, "***** Details Frame-%i Thread:%i ******\n", v142, v151);
      hkOstream::printf(v179, "***************************************\n");
      hkOstream::printf(v179, "%s\n", *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(v42 + 96) + 4 * (uint32_t)(uintptr_t)(v142)) + 120));
      v156 = *(char **)(*(uint32_t *)(v42 + 96) + 4 * (uint32_t)(uintptr_t)(v142));
      if ( *((int *)v156 + 25) > 0 )
      {
        v159 = 0;
        v43 = 0;
        v44 = *(char **)(*(uint32_t *)(v42 + 96) + 4 * (uint32_t)(uintptr_t)(v142));
        while ( 1 )
        {
          v45 = *(char **)(*((uint32_t *)v44 + 24) + 4 * v43);
          v174 = *((hkString::Self **)v45 + 12);
          v165 = v174 != nullptr;
          v46 = *((hkString::Self **)v45 + 13);
          if ( v46 != nullptr )
          {
            ++v165;
            if ( v174 >= v46 )
              v46 = *((hkString::Self **)v45 + 12);
            v174 = v46;
          }
          v47 = *((hkString::Self **)v45 + 14);
          if ( v47 != nullptr )
          {
            ++v165;
            if ( v174 >= v47 )
              v47 = v174;
            v174 = v47;
          }
          v48 = *((hkString::Self **)v45 + 15);
          if ( v48 != nullptr )
          {
            ++v165;
            if ( v174 >= v48 )
              v48 = v174;
            v174 = v48;
          }
          v49 = *((hkString::Self **)v45 + 16);
          if ( v49 != nullptr )
          {
            ++v165;
            if ( v174 >= v49 )
              v49 = v174;
            v174 = v49;
          }
          v50 = *((hkString::Self **)v45 + 17);
          if ( v50 != nullptr )
          {
            ++v165;
            if ( v174 >= v50 )
              v50 = v174;
            v174 = v50;
          }
          v51 = *((hkString::Self **)v45 + 18);
          if ( v51 != nullptr )
          {
            ++v165;
            if ( v174 >= v51 )
              v51 = v174;
            v174 = v51;
          }
          v52 = *((hkString::Self **)v45 + 19);
          if ( v52 != nullptr )
          {
            ++v165;
            if ( v174 >= v52 )
              v52 = v174;
            v174 = v52;
          }
          v53 = *((hkString::Self **)v45 + 20);
          if ( v53 != nullptr )
          {
            ++v165;
            if ( v174 >= v53 )
              v53 = v174;
            v174 = v53;
          }
          v54 = *((hkString::Self **)v45 + 21);
          if ( v54 != nullptr )
          {
            ++v165;
            if ( v174 >= v54 )
              v54 = v174;
            v174 = v54;
          }
          v55 = *((hkString::Self **)v45 + 22);
          if ( v55 != nullptr )
          {
            ++v165;
            if ( v174 >= v55 )
              v55 = v174;
            v174 = v55;
          }
          v56 = *((hkString::Self **)v45 + 23);
          if ( v56 != nullptr )
          {
            ++v165;
            if ( v174 >= v56 )
              v56 = v174;
            v174 = v56;
          }
          hkString::snprintf((hkString::Self *)&v188, 0xC8u, "%s(%i)", *((const char **)v45 + 30), v174);
          if ( (unsigned int)(uintptr_t)(v174) <= 1 )
            hkString::snprintf((hkString::Self *)&v188, 0xC8u, "%s", *((const char **)v45 + 30));
          else
            hkString::snprintf((hkString::Self *)&v188, 0xC8u, "%s (%i)", *((const char **)v45 + 30), v174);
          v57 = 3;
          hkOstream::printf(v179, "%-32s", &v188);
          do
          {
            hkOstream::printf(v179, "\t");
            --v57;
          }
          while ( v57 != 0 );
          if ( v165 != 0 )
            break;
          hkOstream::printf(v179, "% 12.3f\n", 0, 0);
LABEL_170:
          for ( jj = 0; jj < *((uint32_t *)v45 + 25); ++jj )
          {
            v63 = *(uint32_t *)(*((uint32_t *)v45 + 24) + 4 * jj);
            sub_1556B80(v179, v63, 1.0, 2);
          }
          v44 = v156;
          v43 = ++v159;
          if ( v159 >= *((uint32_t *)v156 + 25) )
            goto LABEL_173;
        }
        v58 = v45;
        v146 = v45;
        v59 = 0;
        while ( 1 )
        {
LABEL_164:
          v60 = *((uint32_t *)v58 + 12);
          if ( v60 == 0 )
            goto LABEL_163;
          v61 = *(float *)v58;
          if ( v60 < (unsigned int)(uintptr_t)(v174) )
            v61 = v61
                * (float)((float)((float)((float)((unsigned int)(uintptr_t)(v174) >> 16) * 65536.0) + (float)(uint16_t)(uintptr_t)(v174))
                        / (float)((float)((float)HIWORD(v60) * 65536.0) + (float)(uint16_t)v60));
          if ( --v165 != 0 )
            break;
          ++v59;
          hkOstream::printf(v179, "% 12.3f\n", v61);
          v58 += 4;
          if ( v59 == 12 )
          {
LABEL_169:
            v45 = v146;
            goto LABEL_170;
          }
        }
        hkOstream::printf(v179, "% 12.3f: ", v61);
LABEL_163:
        ++v59;
        v58 += 4;
        if ( v59 == 12 )
          goto LABEL_169;
        goto LABEL_164;
      }
LABEL_173:
      ++v151;
      v39 = *(uint32_t *)v140;
      v41 = *((uint32_t *)v140 + 1);
      if ( (int)(uintptr_t)(v151) < v41 )
        continue;
      break;
    }
LABEL_174:
    v40 = *(uint32_t *)(*(uint32_t *)v39 + 100);
LABEL_175:
    v142 = (hkMonitorStreamAnalyzer::Node::Self *)((char *)v142 + 1);
    if ( (int)(uintptr_t)(v142) < v40 )
      continue;
    break;
  }
}

// ----------------------------------------------------------------------------
// Function: hkMonitorStreamAnalyzer::writeStatistics  (binary VA: 0x15615e0)
// Original: hkMonitorStreamAnalyzer::writeStatistics
// ----------------------------------------------------------------------------
int hkMonitorStreamAnalyzer::writeStatistics(hkMonitorStreamAnalyzer::Self *self, hkOstream::Self *a2, char a3)
{
  int v3;
  int v4;
  char *StatisticsTreeForMultipleFrames;
  int v6;
  int v7;
  int v8;
  char *v9;
  int address;
  int result;
  typedef int _g4_t_v12;
  typedef char *_g4_t_v13;
  typedef char **_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v13)) > _g4_s1 ? (40u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v14)) > _g4_s2 ? (48u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v15)) > _g4_s3 ? (52u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v16)) > _g4_s4 ? (56u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);

  v3 = 0;
  hkMonitorStreamAnalyzer::checkAllThreadsCapturedSameNumFrames();
  v4 = *((uint32_t *)self + 1);
  v14 = nullptr;
  v15 = 0;
  v16 = 0x80000000;
  if ( v4 > 0 )
  {
    do
    {
      StatisticsTreeForMultipleFrames = (char *)hkMonitorStreamAnalyzer::makeStatisticsTreeForMultipleFrames(
                                                  self,
                                                  v3,
                                                  0);
      v6 = v15;
      if ( v15 == (v16 & 0x3FFFFFFF) )
      {
        v13 = StatisticsTreeForMultipleFrames;
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v14, 4, v12);
        v6 = v15;
        StatisticsTreeForMultipleFrames = v13;
      }
      ++v3;
      v14[v6] = StatisticsTreeForMultipleFrames;
      ++v15;
    }
    while ( *((uint32_t *)self + 1) > v3 );
  }
  v7 = 0;
  hkMonitorStreamAnalyzer::writeStatisticsDetails(
    a2,
    &v14,
    *((uint32_t *)self + 6),
    *((char **)self + 7),
    a3,
    *((hkString::Self **)self + 8),
    1);
  v8 = v15;
  if ( v15 > 0 )
  {
    do
    {
      v9 = v14[v7];
      if ( v9 != nullptr )
      {
        hkMonitorStreamAnalyzer::Node::Destroy((hkMonitorStreamAnalyzer::Node::Self *)v14[v7]);
        address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        (*(void (**)(uint32_t, char *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
          *(uint32_t *)(*(uint32_t *)address + 44),
          v9,
          136);
        v8 = v15;
      }
      ++v7;
    }
    while ( v7 < v8 );
  }
  result = v16;
  v15 = 0;
  if ( v16 >= 0 )
    return (*(int (**)(uint32_t *, char **, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v14,
             4 * v16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::Destroy  (binary VA: 0x1561760)
// Original: hkStackTracer::~hkStackTracer
// ----------------------------------------------------------------------------
void hkStackTracer::Destroy(hkStackTracer::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20972F0);
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::Destroy_ea15617b0  (binary VA: 0x15617b0)
// Original: hkStackTracer::~hkStackTracer
// ----------------------------------------------------------------------------
void hkStackTracer::Destroy_ea15617b0(hkStackTracer::Self *self)
{
  int address;

  hkStackTracer::Destroy(self);
  if ( self != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, hkStackTracer::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      self,
      4);
  }
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::quit  (binary VA: 0x1561800)
// Original: hkStackTracer::CallTree::quit
// ----------------------------------------------------------------------------
int hkStackTracer::CallTree::quit(hkStackTracer::CallTree::Self *self)
{
  int result;
  int v2;

  result = *((uint32_t *)self + 3);
  if ( result != 0 )
  {
    v2 = *((uint32_t *)self + 2);
    *((uint32_t *)self + 1) = 0;
    if ( v2 >= 0 )
      result = G4_VCALL<int>(result, 20, *(uint32_t *)self, 20 * v2);
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 2) = 0x80000000;
    *((uint32_t *)self + 3) = 0;
    *((uint32_t *)self + 4) = -1;
    *((uint32_t *)self + 5) = -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::Destroy  (binary VA: 0x1561860)
// Original: hkStackTracer::CallTree::~CallTree
// ----------------------------------------------------------------------------
void hkStackTracer::CallTree::Destroy(hkStackTracer::CallTree::Self *self)
{
  hkStackTracer::CallTree::quit(self);
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::getTraces  (binary VA: 0x1561890)
// Original: hkStackTracer::CallTree::getTraces
// ----------------------------------------------------------------------------
int hkStackTracer::CallTree::getTraces(hkStackTracer::CallTree::Self *self, hkArray<unsigned long, hkContainerHeapAllocator::Self> *a2, hkArray<int, hkContainerHeapAllocator::Self> *a3)
{
  hkArray<unsigned long, hkContainerHeapAllocator::Self> *v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  uint32_t *v11;
  typedef hkStackTracer::CallTree::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  v14[3] = (uint32_t)(uintptr_t)(&self);
  v3 = a2;
  v12 = self;
  v4 = (int *)a3;
  v5 = *((uint32_t *)self + 1);
  v13 = v5;
  v6 = *((uint32_t *)a2 + 2) & 0x3FFFFFFF;
  if ( v5 > v6 )
  {
    v7 = 2 * v6;
    if ( v7 < v5 )
      v7 = *((uint32_t *)self + 1);
    hkArrayUtil::reserve((hkArrayUtil::Self *)v14, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, (int *)a2, v7, 4);
    v5 = v13;
  }
  *((uint32_t *)v3 + 1) = v5;
  result = v4[2] & 0x3FFFFFFF;
  if ( v5 <= result )
  {
    v4[1] = v5;
    if ( v5 == 0 )
      return result;
  }
  else
  {
    v9 = 2 * result;
    if ( v5 >= v9 )
      v9 = v5;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v14, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v4, v9, 4);
    v4[1] = v13;
  }
  **(uint32_t **)v3 = 0;
  result = *v4;
  *(uint32_t *)*v4 = -1;
  if ( v13 > 1 )
  {
    v10 = 20;
    for ( result = 1; result != v13; ++result )
    {
      v11 = (uint32_t *)(v10 + *(uint32_t *)v12);
      v10 += 20;
      *(uint32_t *)(*(uint32_t *)v3 + 4 * result) = *v11;
      *(uint32_t *)(*v4 + 4 * result) = v11[1];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::swap  (binary VA: 0x15619c0)
// Original: hkStackTracer::CallTree::swap
// ----------------------------------------------------------------------------
hkStackTracer::CallTree::Self * hkStackTracer::CallTree::swap(hkStackTracer::CallTree::Self *self, hkStackTracer::CallTree::Self *a2)
{
  hkStackTracer::CallTree::Self *result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  result = a2;
  v10 = *((uint32_t *)self + 1);
  v12 = *((uint32_t *)self + 2);
  v3 = 0x80000000;
  v4 = *((uint32_t *)a2 + 2) & 0x3FFFFFFF;
  if ( v4 == 0 )
    v4 = 0x80000000;
  v11 = *((uint32_t *)a2 + 1);
  v5 = *(uint32_t *)a2;
  *((uint32_t *)self + 2) = v4;
  v6 = *(uint32_t *)self;
  *(uint32_t *)self = v5;
  *((uint32_t *)self + 1) = v11;
  if ( (v12 & 0x3FFFFFFF) != 0 )
    v3 = v12 & 0x3FFFFFFF;
  *(uint32_t *)a2 = v6;
  *((uint32_t *)a2 + 1) = v10;
  *((uint32_t *)a2 + 2) = v3;
  v7 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)a2 + 4) = v7;
  v8 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  *((uint32_t *)a2 + 5) = v8;
  v9 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)a2 + 3) = v9;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::Construct  (binary VA: 0x1561a50)
// Original: hkStackTracer::CallTree::CallTree
// ----------------------------------------------------------------------------
hkStackTracer::CallTree::Self * hkStackTracer::CallTree::Construct(hkStackTracer::CallTree::Self *self, const hkStackTracer::CallTree::Self *a2)
{
  hkMemoryAllocator::Self *v2;
  int v3;
  int v4;
  hkStackTracer::CallTree::Self *v5;
  hkStackTracer::CallTree::Self *result;
  int v7;
  int v8;
  int v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0x80000000;
  v2 = *((hkMemoryAllocator::Self **)a2 + 3);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v2);
  v3 = *((uint32_t *)a2 + 1);
  v10 = v3;
  v4 = *(uint32_t *)a2;
  if ( v3 > 0 )
  {
    hkArrayUtil::reserve((hkArrayUtil::Self *)v11, v2, (int *)self, v3, 20);
    v7 = 20 * v3;
    hkMemUtil::memMove((hkMemUtil::Self *)(v7 + *(uint32_t *)self), *(char **)self, 0);
    v8 = 0;
    v9 = *(uint32_t *)self;
    do
    {
      *(uint32_t *)(v9 + v8) = *(uint32_t *)(v4 + v8);
      *(uint32_t *)(v9 + v8 + 4) = *(uint32_t *)(v4 + v8 + 4);
      *(uint32_t *)(v9 + v8 + 8) = *(uint32_t *)(v4 + v8 + 8);
      *(uint32_t *)(v9 + v8 + 12) = *(uint32_t *)(v4 + v8 + 12);
      *(uint32_t *)(v9 + v8 + 16) = *(uint32_t *)(v4 + v8 + 16);
      v8 += 20;
    }
    while ( v7 != v8 );
    v5 = self;
  }
  else
  {
    hkMemUtil::memMove((hkMemUtil::Self *)(20 * v3), nullptr, 0);
    v5 = self;
  }
  *((uint32_t *)v5 + 1) = v10;
  *((uint32_t *)v5 + 4) = *((uint32_t *)a2 + 4);
  result = *((hkStackTracer::CallTree::Self **)a2 + 5);
  *((uint32_t *)v5 + 5) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::opAssign  (binary VA: 0x1561b70)
// Original: hkStackTracer::CallTree::operator=
// ----------------------------------------------------------------------------
int hkStackTracer::CallTree::opAssign(hkStackTracer::CallTree::Self *self, const hkStackTracer::CallTree::Self *a2)
{
  int v2;
  int v3;
  int v4;
  hkMemoryAllocator::Self *v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  int result;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);

  v2 = *((uint32_t *)self + 2);
  v3 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 1) = 0;
  if ( v2 < 0 )
  {
    v12 = 0;
    v4 = 0;
  }
  else
  {
    G4_VCALL<void>(v3, 20, *(uint32_t *)self, 20 * v2);
    v4 = *((uint32_t *)self + 1);
    v12 = 20 * v4;
  }
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 2) = 0x80000000;
  v5 = *((hkMemoryAllocator::Self **)a2 + 3);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v5);
  v14 = *((uint32_t *)a2 + 1);
  v6 = v14 + v4;
  v13 = v6;
  v7 = nullptr;
  v8 = *(uint32_t *)a2;
  if ( v6 > 0 )
  {
    hkArrayUtil::reserve((hkArrayUtil::Self *)v15, v5, (int *)self, v6, 20);
    v7 = *(char **)self;
  }
  hkMemUtil::memMove((hkMemUtil::Self *)&v7[20 * v14], v7, v12);
  v9 = 0;
  v10 = *(uint32_t *)self;
  if ( v14 > 0 )
  {
    do
    {
      *(uint32_t *)(v10 + v9) = *(uint32_t *)(v8 + v9);
      *(uint32_t *)(v10 + v9 + 4) = *(uint32_t *)(v8 + v9 + 4);
      *(uint32_t *)(v10 + v9 + 8) = *(uint32_t *)(v8 + v9 + 8);
      *(uint32_t *)(v10 + v9 + 12) = *(uint32_t *)(v8 + v9 + 12);
      *(uint32_t *)(v10 + v9 + 16) = *(uint32_t *)(v8 + v9 + 16);
      v9 += 20;
    }
    while ( v9 != 20 * v14 );
  }
  *((uint32_t *)self + 1) = v13;
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  result = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 5) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::getCallStack  (binary VA: 0x1561cc0)
// Original: hkStackTracer::CallTree::getCallStack
// ----------------------------------------------------------------------------
int hkStackTracer::CallTree::getCallStack(hkStackTracer::CallTree::Self *self, int a2, unsigned int *a3, int a4)
{
  int v4;
  int v5;
  int result;
  int v7;

  v4 = a2;
  if ( a2 <= 0 || a4 <= 0 )
    return 0;
  v5 = *(uint32_t *)self;
  result = 0;
  do
  {
    ++result;
    v7 = 5 * v4;
    a3[result - 1] = *(uint32_t *)(v5 + 4 * v7);
    v5 = *(uint32_t *)self;
    v4 = *(uint32_t *)(*(uint32_t *)self + 4 * v7 + 4);
  }
  while ( a4 > result && v4 > 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::getCallStackSize  (binary VA: 0x1561d10)
// Original: hkStackTracer::CallTree::getCallStackSize
// ----------------------------------------------------------------------------
int hkStackTracer::CallTree::getCallStackSize(hkStackTracer::CallTree::Self *self, int a2)
{
  int v2;
  int result;

  v2 = a2;
  if ( a2 <= 0 )
    return 0;
  result = 0;
  do
  {
    ++result;
    v2 = *(uint32_t *)(*(uint32_t *)self + 20 * v2 + 4);
  }
  while ( v2 > 0 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::removeNodeIfUnused  (binary VA: 0x1561d40)
// Original: hkStackTracer::CallTree::removeNodeIfUnused
// ----------------------------------------------------------------------------
int hkStackTracer::CallTree::removeNodeIfUnused(hkStackTracer::CallTree::Self *self, int a2)
{
  int v2;
  int *v3;
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;

  v2 = *(uint32_t *)self;
  v3 = (int *)(*(uint32_t *)self + 20 * a2);
  result = v3[4];
  if ( result == 0 && v3[2] == -1 )
  {
    v5 = v3[1];
    if ( v5 == -1 )
    {
      *((uint32_t *)self + 4) = -1;
    }
    else
    {
      v6 = v2 + 20 * v5;
      v7 = *(uint32_t *)(v6 + 8);
      v8 = (uint32_t *)(v6 + 8);
      if ( v7 != a2 )
      {
        do
        {
          v9 = v2 + 20 * v7;
          v7 = *(uint32_t *)(v9 + 12);
        }
        while ( v7 != a2 );
        v8 = (uint32_t *)(v9 + 12);
      }
      *v8 = v3[3];
      hkStackTracer::CallTree::removeNodeIfUnused(self, v3[1]);
    }
    result = *((uint32_t *)self + 5);
    v3[3] = result;
    *((uint32_t *)self + 5) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::releaseCallStack  (binary VA: 0x1561df0)
// Original: hkStackTracer::CallTree::releaseCallStack
// ----------------------------------------------------------------------------
int hkStackTracer::CallTree::releaseCallStack(hkStackTracer::CallTree::Self *self, int a2)
{
  int result;

  result = a2;
  if ( a2 >= 0 )
  {
    --*(uint32_t *)(*(uint32_t *)self + 20 * a2 + 16);
    return hkStackTracer::CallTree::removeNodeIfUnused(self, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::getFreeNode  (binary VA: 0x1561e30)
// Original: hkStackTracer::CallTree::getFreeNode
// ----------------------------------------------------------------------------
int hkStackTracer::CallTree::getFreeNode(hkStackTracer::CallTree::Self *self)
{
  int result;
  int v2;
  uint32_t *v3;
  int v4;
  int v5;

  result = *((uint32_t *)self + 5);
  if ( result == -1 )
  {
    result = *((uint32_t *)self + 1);
    v4 = result;
    if ( result == (*((uint32_t *)self + 2) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(*((hkArrayUtil::Self **)self + 3), self, 20, result);
      v4 = *((uint32_t *)self + 1);
      result = v5;
    }
    *((uint32_t *)self + 1) = v4 + 1;
    v2 = 20 * result;
    *(uint32_t *)(*(uint32_t *)self + 20 * result) = 0;
  }
  else
  {
    v2 = 20 * result;
    v3 = (uint32_t *)(*(uint32_t *)self + 20 * result);
    *((uint32_t *)self + 5) = v3[3];
    *v3 = 0;
  }
  *(uint32_t *)(*(uint32_t *)self + v2 + 4) = -1;
  *(uint32_t *)(*(uint32_t *)self + v2 + 8) = -1;
  *(uint32_t *)(*(uint32_t *)self + v2 + 12) = -1;
  *(uint32_t *)(*(uint32_t *)self + v2 + 16) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::insertCallStack  (binary VA: 0x1561ef0)
// Original: hkStackTracer::CallTree::insertCallStack
// ----------------------------------------------------------------------------
int hkStackTracer::CallTree::insertCallStack(hkStackTracer::CallTree::Self *self, const unsigned int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  uint32_t *v8;
  int v10;
  unsigned int *v11;
  int FreeNode;
  int v13;

  v3 = *((uint32_t *)self + 4);
  if ( v3 != -1 )
  {
    v13 = a3 - 1;
    if ( a3 - 1 >= 0 )
      goto LABEL_3;
LABEL_13:
    ++*(uint32_t *)(*(uint32_t *)self + 20 * v3 + 16);
    return v3;
  }
  FreeNode = hkStackTracer::CallTree::getFreeNode(self);
  *((uint32_t *)self + 4) = FreeNode;
  v3 = FreeNode;
  v13 = a3 - 1;
  if ( a3 - 1 < 0 )
    goto LABEL_13;
LABEL_3:
  v4 = *(uint32_t *)self;
  do
  {
    while ( 1 )
    {
      v5 = 20 * v3;
      v6 = a2[v13];
      v7 = *(uint32_t *)(v4 + 20 * v3 + 8);
      if ( v7 > 0 )
        break;
LABEL_10:
      v10 = hkStackTracer::CallTree::getFreeNode(self);
      --v13;
      v11 = (unsigned int *)(*(uint32_t *)self + 20 * v10);
      v11[1] = v3;
      *v11 = v6;
      v11[2] = 0xFFFFFFFF;
      v3 = v10;
      v11[3] = *(uint32_t *)(*(uint32_t *)self + v5 + 8);
      *(uint32_t *)(*(uint32_t *)self + v5 + 8) = v10;
      v4 = *(uint32_t *)self;
      v8 = (uint32_t *)(*(uint32_t *)self + 20 * v10);
      if ( v13 == -1 )
        goto LABEL_9;
    }
    while ( 1 )
    {
      v8 = (uint32_t *)(v4 + 20 * v7);
      if ( v6 == *v8 )
        break;
      v7 = v8[3];
      if ( v7 <= 0 )
        goto LABEL_10;
    }
    --v13;
    v3 = v7;
  }
  while ( v13 != -1 );
LABEL_9:
  ++v8[4];
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkStackTracer::CallTree::isEmpty  (binary VA: 0x1562020)
// Original: hkStackTracer::CallTree::isEmpty
// ----------------------------------------------------------------------------
hkStackTracer::CallTree::Self * hkStackTracer::CallTree::isEmpty(hkStackTracer::CallTree::Self *self, int a2)
{
  *(uint8_t *)self = *(uint32_t *)(a2 + 16) == -1;
  return self;
}


