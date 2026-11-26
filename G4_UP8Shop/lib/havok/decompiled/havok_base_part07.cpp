#include "Core/Utils/DecompTypes.h"
#include "havok_base_part07.h"

// ----------------------------------------------------------------------------
// Function: hkProcessFactory::getProcessName  (binary VA: 0x18e42f0)
// Original: hkProcessFactory::getProcessName
// ----------------------------------------------------------------------------
unsigned int hkProcessFactory::getProcessName(hkProcessFactory::Self *self, int a2)
{
  pthread_mutex_t *mutex;
  unsigned int count;
  unsigned int v4;

  mutex = *((pthread_mutex_t **)self + 6);
  count = ((int32_t *)(mutex))[1];
  if ( count != 0 )
  {
    while ( pthread_mutex_trylock(mutex) != 0 )
    {
      if ( --count == 0 )
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
  v4 = *(uint32_t *)(*((uint32_t *)self + 3) + 12 * a2) & 0xFFFFFFFE;
  if ( pthread_mutex_unlock(*((pthread_mutex_t **)self + 6)) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkProcessFactory::getProcessId  (binary VA: 0x18e43e0)
// Original: hkProcessFactory::getProcessId
// ----------------------------------------------------------------------------
int hkProcessFactory::getProcessId(hkProcessFactory::Self *self, char *a2)
{
  pthread_mutex_t *mutex;
  unsigned int count;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;

  mutex = *((pthread_mutex_t **)self + 6);
  count = ((int32_t *)(mutex))[1];
  if ( count != 0 )
  {
    while ( pthread_mutex_trylock(mutex) != 0 )
    {
      if ( --count == 0 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    if ( pthread_mutex_lock(mutex) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  v4 = *((uint32_t *)self + 4);
  if ( v4 <= 0 )
  {
LABEL_12:
    if ( pthread_mutex_unlock(*((pthread_mutex_t **)self + 6)) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
      perror("pthread_mutex_unlock(&m_mutex)");
      __builtin_debugtrap();
    }
    return -1;
  }
  else
  {
    v5 = 0;
    v6 = *((uint32_t *)self + 4);
    if ( a2 != nullptr )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = *((uint32_t *)self + 3);
          if ( (*(uint32_t *)(v7 + 12 * v5) & 0xFFFFFFFE) != 0 )
            break;
          if ( ++v5 >= v6 )
            goto LABEL_12;
        }
        if ( hkString::strCmp((hkString::Self *)(*(uint32_t *)(v7 + 12 * v5) & 0xFFFFFFFE), a2) == 0 )
          break;
        v6 = *((uint32_t *)self + 4);
        if ( ++v5 >= v6 )
          goto LABEL_12;
      }
    }
    else
    {
      while ( (*(uint32_t *)(*((uint32_t *)self + 3) + 12 * v5) & 0xFFFFFFFE) != 0 )
      {
        if ( v4 <= ++v5 )
          goto LABEL_12;
      }
    }
    v9 = pthread_mutex_unlock(*((pthread_mutex_t **)self + 6));
    result = v5;
    if ( v9 != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
      perror("pthread_mutex_unlock(&m_mutex)");
      __builtin_debugtrap();
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkProcessFactory::createProcess  (binary VA: 0x18e45c0)
// Original: hkProcessFactory::createProcess
// ----------------------------------------------------------------------------
int hkProcessFactory::createProcess(int a1, int a2, int a3)
{
  pthread_mutex_t *mutex;
  unsigned int count;
  int v5;

  mutex = *(pthread_mutex_t **)(a1 + 24);
  count = ((int32_t *)(mutex))[1];
  if ( count != 0 )
  {
    while ( pthread_mutex_trylock(mutex) != 0 )
    {
      if ( --count == 0 )
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
  v5 = (*(int (**)(int))(*(uint32_t *)(a1 + 12) + 12 * a2 + 4))(a3);
  if ( pthread_mutex_unlock(mutex) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkProcessFactory::createProcess  (binary VA: 0x18e46c0)
// Original: hkProcessFactory::createProcess
// ----------------------------------------------------------------------------
int hkProcessFactory::createProcess(hkProcessFactory::Self *a1, char *a2, int a3)
{
  pthread_mutex_t *mutex;
  unsigned int count;
  int ProcessId;
  int Process;

  mutex = *((pthread_mutex_t **)a1 + 6);
  count = ((int32_t *)(mutex))[1];
  if ( count != 0 )
  {
    while ( pthread_mutex_trylock(mutex) != 0 )
    {
      if ( --count == 0 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( pthread_mutex_lock(mutex) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  ProcessId = hkProcessFactory::getProcessId(a1, a2);
  if ( ProcessId < 0 )
    Process = 0;
  else
    Process = hkProcessFactory::createProcess((int)(uintptr_t)(a1), ProcessId, a3);
  if ( pthread_mutex_unlock(mutex) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl", 38, "leave");
    perror("pthread_mutex_unlock(&m_mutex)");
    __builtin_debugtrap();
  }
  return Process;
}

// ----------------------------------------------------------------------------
// Function: hkProcessRegisterUtil::registerAllCommonProcesses  (binary VA: 0x18e4830)
// Original: hkProcessRegisterUtil::registerAllCommonProcesses
// ----------------------------------------------------------------------------
int hkProcessRegisterUtil::registerAllCommonProcesses()
{
  hkDebugDisplayProcess::Self *v1;
  hkStatisticsProcess::Self *v2;
  hkInspectProcess::Self *v3;
  hkRemoteObjectProcess::Self *v4;
  hkMemorySnapshotProcess::Self *v5;

  hkDebugDisplayProcess::registerProcess(v1);
  hkStatisticsProcess::registerProcess(v2);
  hkInspectProcess::registerProcess(v3);
  hkRemoteObjectProcess::registerProcess(v4);
  return hkMemorySnapshotProcess::registerProcess(v5);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeIStream::Destroy  (binary VA: 0x18e4860)
// Original: hkDisplaySerializeIStream::~hkDisplaySerializeIStream
// ----------------------------------------------------------------------------
void hkDisplaySerializeIStream::Destroy(hkDisplaySerializeIStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8A10);
  hkIArchive::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeIStream::Destroy_ea18e4890  (binary VA: 0x18e4890)
// Original: hkDisplaySerializeIStream::~hkDisplaySerializeIStream
// ----------------------------------------------------------------------------
void hkDisplaySerializeIStream::Destroy_ea18e4890(hkDisplaySerializeIStream::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8A10);
  hkIArchive::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeIStream::Construct  (binary VA: 0x18e4900)
// Original: hkDisplaySerializeIStream::hkDisplaySerializeIStream
// ----------------------------------------------------------------------------
void hkDisplaySerializeIStream::Construct(hkDisplaySerializeIStream::Self *self, hkStreamReader::Self *a2)
{
  hkIArchive::Construct(self, a2, 0);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8A10);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeIStream::readQuadVector4  (binary VA: 0x18e4940)
// Original: hkDisplaySerializeIStream::readQuadVector4
// ----------------------------------------------------------------------------
int hkDisplaySerializeIStream::readQuadVector4(hkDisplaySerializeIStream::Self *self, hkVector4f::Self *a2)
{
  int result;

  result = (int)(uintptr_t)(hkIArchive::readArrayGeneric(self, a2, 4, 3));
  *((uint32_t *)a2 + 3) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeIStream::readTransform  (binary VA: 0x18e4990)
// Original: hkDisplaySerializeIStream::readTransform
// ----------------------------------------------------------------------------
hkRotationf::Self * hkDisplaySerializeIStream::readTransform(hkDisplaySerializeIStream::Self *self, hkTransformf::Self *a2)
{
  typedef uint32_t _g4_t_v3[3];
  typedef int _g4_t_v4;
  typedef uint8_t _g4_t_v5[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);

  hkIArchive::readArrayGeneric(self, v3, 4, 3);
  v4 = 1065353216;
  hkIArchive::readArrayGeneric(self, v5, 4, 4);
  *((uint32_t *)a2 + 12) = v3[0];
  *((uint32_t *)a2 + 13) = v3[1];
  *((uint32_t *)a2 + 14) = v3[2];
  *((uint32_t *)a2 + 15) = v4;
  return hkRotationf::set(a2, (const hkQuaternionf::Self *)v5);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeIStream::readTriangle  (binary VA: 0x18e4a30)
// Original: hkDisplaySerializeIStream::readTriangle
// ----------------------------------------------------------------------------
int hkDisplaySerializeIStream::readTriangle(hkDisplaySerializeIStream::Self *self, hkGeometry::Triangle::Self *a2)
{
  int result;
  uint32_t v3[8];

  hkIArchive::readArrayGeneric(self, v3, 4, 1);
  *(uint32_t *)a2 = v3[0];
  hkIArchive::readArrayGeneric(self, v3, 4, 1);
  *((uint32_t *)a2 + 1) = v3[0];
  hkIArchive::readArrayGeneric(self, v3, 4, 1);
  result = v3[0];
  *((uint32_t *)a2 + 2) = v3[0];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeIStream::readVectorArray  (binary VA: 0x18e4ac0)
// Original: hkDisplaySerializeIStream::readVectorArray
// ----------------------------------------------------------------------------
int hkDisplaySerializeIStream::readVectorArray(hkDisplaySerializeIStream::Self *self, hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *a2)
{
  int *v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  typedef hkDisplaySerializeIStream::Self *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[16];
  typedef uint32_t _g4_t_v13[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v13[3] = (uint32_t)(uintptr_t)(&self);
  v2 = (int *)a2;
  v10 = self;
  hkIArchive::readArrayGeneric(self, v13, 4, 1);
  result = v13[0];
  v4 = 0;
  v11 = v13[0];
  if ( v13[0] > 0 )
  {
    do
    {
      v5 = v2[1];
      v6 = v2[2] & 0x3FFFFFFF;
      v7 = v5 + 1;
      if ( v5 + 1 > v6 )
      {
        v8 = 2 * v6;
        v9 = v2[1];
        if ( v8 >= v7 )
          v7 = v8;
        hkArrayUtil::reserve((hkArrayUtil::Self *)v12, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v2, v7, 16);
        v7 = v2[1] + 1;
        v5 = v9;
      }
      v2[1] = v7;
      result = hkDisplaySerializeIStream::readQuadVector4(v10, (hkVector4f::Self *)(*v2 + 16 * v5));
      ++v4;
    }
    while ( v4 != v11 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeIStream::readGeometry  (binary VA: 0x18e4ba0)
// Original: hkDisplaySerializeIStream::readGeometry
// ----------------------------------------------------------------------------
int hkDisplaySerializeIStream::readGeometry(hkDisplaySerializeIStream::Self *self, hkGeometry::Self *a2)
{
  int *v2;
  hkIArchive::Self *v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  typedef hkDisplaySerializeIStream::Self *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[16];
  typedef uint32_t _g4_t_v13[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v12)) > _g4_s3 ? (16u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);

  v13[3] = (uint32_t)(uintptr_t)(&self);
  v2 = (int *)a2;
  v3 = (hkIArchive::Self *)(self);
  v9 = self;
  hkDisplaySerializeIStream::readVectorArray(self, (hkGeometry::Self *)((char *)a2 + 8));
  hkIArchive::readArrayGeneric(v3, v13, 4, 1);
  result = v13[0];
  v10 = v13[0];
  v11 = 0;
  if ( v13[0] > 0 )
  {
    do
    {
      v5 = v2[6];
      v6 = v2[7] & 0x3FFFFFFF;
      v7 = v5 + 1;
      if ( v5 + 1 > v6 )
      {
        v8 = 2 * v6;
        if ( v8 >= v7 )
          v7 = v8;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v12,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v2 + 5,
          v7,
          16);
        v7 = v2[6] + 1;
      }
      v2[6] = v7;
      hkDisplaySerializeIStream::readTriangle(v9, (hkGeometry::Triangle::Self *)(v2[5] + 16 * v5));
      ++v11;
      result = v10;
    }
    while ( v11 != v10 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeIStream::readHash  (binary VA: 0x18e4ca0)
// Original: hkDisplaySerializeIStream::readHash
// ----------------------------------------------------------------------------
int hkDisplaySerializeIStream::readHash(hkDisplaySerializeIStream::Self *self, uint64_t *a2)
{
  int result;
  uint64_t v3;

  hkIArchive::readArrayGeneric(self, &v3, 8, 1);
  result = v3;
  *a2 = v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeIStream::readAabb  (binary VA: 0x18e5a90)
// Original: hkDisplaySerializeIStream::readAabb
// ----------------------------------------------------------------------------
int hkDisplaySerializeIStream::readAabb(hkDisplaySerializeIStream::Self *self, hkAabb::Self *a2)
{
  hkDisplaySerializeIStream::readQuadVector4(self, a2);
  return hkDisplaySerializeIStream::readQuadVector4(self, (hkAabb::Self *)((char *)a2 + 16));
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::Destroy  (binary VA: 0x18e5ad0)
// Original: hkDrawUtil::~hkDrawUtil
// ----------------------------------------------------------------------------
void hkDrawUtil::Destroy(hkDrawUtil::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::Destroy_ea18e5af0  (binary VA: 0x18e5af0)
// Original: hkDrawUtil::~hkDrawUtil
// ----------------------------------------------------------------------------
void hkDrawUtil::Destroy_ea18e5af0(hkDrawUtil::Self *self)
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
// Function: hkDrawUtil::Construct  (binary VA: 0x18e5c90)
// Original: hkDrawUtil::hkDrawUtil
// ----------------------------------------------------------------------------
void hkDrawUtil::Construct(hkDrawUtil::Self *self, float a2)
{
  *((float *)self + 2) = a2;
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8A38);
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::displayOrientedPoint  (binary VA: 0x18e5cc0)
// Original: hkDrawUtil::displayOrientedPoint
// ----------------------------------------------------------------------------
int hkDrawUtil::displayOrientedPoint()
{
  hkDebugDisplay::displayLine(hkSingleton<hkDebugDisplay::Self>::s_instance);
  hkDebugDisplay::displayLine(hkSingleton<hkDebugDisplay::Self>::s_instance);
  return ((hkDebugDisplay::displayLine(hkSingleton<hkDebugDisplay::Self>::s_instance)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::displayPoint  (binary VA: 0x18e5fd0)
// Original: hkDrawUtil::displayPoint
// ----------------------------------------------------------------------------
int hkDrawUtil::displayPoint()
{
  hkDebugDisplay::displayLine(hkSingleton<hkDebugDisplay::Self>::s_instance);
  hkDebugDisplay::displayLine(hkSingleton<hkDebugDisplay::Self>::s_instance);
  return ((hkDebugDisplay::displayLine(hkSingleton<hkDebugDisplay::Self>::s_instance)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::displaySegment  (binary VA: 0x18e6160)
// Original: hkDrawUtil::displaySegment
// ----------------------------------------------------------------------------
int hkDrawUtil::displaySegment()
{
  return ((hkDebugDisplay::displayLine(hkSingleton<hkDebugDisplay::Self>::s_instance)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::getScale  (binary VA: 0x18e61c0)
// Original: hkDrawUtil::getScale
// ----------------------------------------------------------------------------
long double hkDrawUtil::getScale(hkDrawUtil::Self *self)
{
  return *((float *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::setScale  (binary VA: 0x18e61e0)
// Original: hkDrawUtil::setScale
// ----------------------------------------------------------------------------
hkDrawUtil::Self * hkDrawUtil::setScale(hkDrawUtil::Self *self, float a2)
{
  *((float *)self + 2) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::displayCone  (binary VA: 0x18e6200)
// Original: hkDrawUtil::displayCone
// ----------------------------------------------------------------------------
hkMemoryAllocator::Self * hkDrawUtil::displayCone(hkDrawUtil::Self *self, float a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5, int a6)
{
  int v6;
  float *v7;
  hkVector4f::Self *v8;
  hkMemoryAllocator::Self *v10;
  int v11;
  typedef int _g4_t_address;
  typedef hkMemoryAllocator::Self *_g4_t_v14;
  typedef const hkVector4f::Self *_g4_t_v15;
  typedef float _g4_t_v16;
  typedef hkVector4f::Self *_g4_t_v17;
  typedef uint8_t _g4_t_v18[16];
  typedef uint8_t _g4_t_v19[16];
  typedef float _g4_t_v20[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_address)) > _g4_s0 ? (8u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v19)) > _g4_s6 ? (48u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v20)) > _g4_s7 ? (64u + sizeof(_g4_t_v20)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v14 = (hkMemoryAllocator::Self *)hkMemoryRouter::alignedAlloc(
                               *(hkMemoryRouter::Self **)(*(uint32_t *)address + 44),
                               (hkMemoryAllocator::Self *)(16 * a6),
                               16);
  v16 = *((float *)self + 2) / a2;
  hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)v18, a5, a2);
  hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)v19, a4, 6.2831855f / (float)a6);
  v6 = 0;
  hkVector4f::setRotatedDir((hkVector4f::Self *)v20, (const hkQuaternionf::Self *)v18, a4);
  v7 = (float *)v14;
  v8 = (hkVector4f::Self *)v20;
  if ( a6 > 0 )
  {
    do
    {
      v15 = a3;
      *v7 = *(float *)a3;
      v7[1] = *((float *)a3 + 1);
      v7[2] = *((float *)a3 + 2);
      v7[3] = *((float *)a3 + 3);
      v17 = v8;
      ++v6;
      v7 += 4;
      *(v7 - 4) = (float)(v20[0] * v16) + *(v7 - 4);
      *(v7 - 3) = (float)(v20[1] * v16) + *(v7 - 3);
      *(v7 - 2) = (float)(v20[2] * v16) + *(v7 - 2);
      *(v7 - 1) = (float)(v16 * v20[3]) + *(v7 - 1);
      hkVector4f::setRotatedDir(v8, (const hkQuaternionf::Self *)v19, v8);
      v8 = v17;
      a3 = v15;
    }
    while ( v6 != a6 );
    v10 = v14;
    v11 = 0;
    do
    {
      ++v11;
      hkDrawUtil::displaySegment();
      v10 = (hkMemoryAllocator::Self *)((char *)v10 + 16);
      hkDrawUtil::displaySegment();
    }
    while ( v11 != a6 );
  }
  return hkMemoryRouter::alignedFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), v14);
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::drawSemiCircle  (binary VA: 0x18e6420)
// Original: hkDrawUtil::drawSemiCircle
// ----------------------------------------------------------------------------
hkVector4f::Self * hkDrawUtil::drawSemiCircle(hkDrawUtil::Self *self, const hkVector4f::Self *a2, hkVector4f::Self *a3, hkVector4f::Self *a4, float a5, float a6, float a7, hkVector4f::Self *a8)
{
  float v8; // xmm6_4
  __m128i v9;
  float v10; // xmm3_4
  float v11; // xmm2_4
  __m128i v12;
  float v13; // xmm5_4
  int v14;
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm6_4
  __m128i v21;
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm6_4
  __m128i v25;
  float v26; // xmm5_4
  int v27;
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float v31; // xmm4_4
  float v32; // xmm3_4
  float v33; // xmm6_4
  hkVector4f::Self *result;
  float v35; // xmm0_4
  float v46;
  typedef hkVector4f::Self *_g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef uint8_t _g4_t_v45[64];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v36)) > _g4_s0 ? (12u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v37)) > _g4_s1 ? (16u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v38)) > _g4_s2 ? (20u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v39)) > _g4_s3 ? (24u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v40)) > _g4_s4 ? (28u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v41)) > _g4_s5 ? (32u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v42)) > _g4_s6 ? (36u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v43)) > _g4_s7 ? (40u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v44)) > _g4_s8 ? (44u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v45)) > _g4_s9 ? (48u + sizeof(_g4_t_v45)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);

  v8 = 0.0;
g4_m128_raw(v9) = *(unsigned int *)a4;
  v10 = *((float *)a4 + 1);
  v11 = *((float *)a4 + 2);
  v12 = v9;
  *(float *)g4_m128_ptr<int32_t>(v12) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)g4_m128_ptr<int32_t>(v9)) + (float)(v10 * v10))
                          + (float)(v11 * v11);
  v46 = (float)(a6 - a5) / (float)(int)(uintptr_t)(a8);
  if ( *(float *)g4_m128_ptr<int32_t>(v12) > 0.0 )
  {
    v13 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v12);
    v14 = ((_mm_cvtsi128_si32(v12) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v12) >> 1));
    v15 = (float)(*(float *)&v14 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12)) * *(float *)&v14)
                * (float)(*(float *)&v14 * *(float *)&v14));
    v16 = (float)(v15 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v12)) * v15) * (float)(v15 * v15));
    v8 = (float)(1.5 * v16) - (float)((float)(v13 * v16) * (float)(v16 * v16));
  }
  v17 = *(float *)g4_m128_ptr<int32_t>(v9) * v8;
  v18 = v10 * v8;
  v19 = v11 * v8;
  v20 = v8 * *((float *)a4 + 3);
  *(float *)a4 = v17;
  *((float *)a4 + 1) = v18;
  *((float *)a4 + 2) = v19;
  *((float *)a4 + 3) = v20;
g4_m128_raw(v21) = *(unsigned int *)a3;
  v22 = *((float *)a3 + 1);
  v25 = v21;
  v23 = *((float *)a3 + 2);
  v24 = 0.0;
  *(float *)g4_m128_ptr<int32_t>(v25) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v21) * *(float *)g4_m128_ptr<int32_t>(v21)) + (float)(v22 * v22))
                          + (float)(v23 * v23);
  if ( *(float *)g4_m128_ptr<int32_t>(v25) > 0.0 )
  {
    v26 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v25);
    v27 = ((_mm_cvtsi128_si32(v25) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v25) >> 1));
    v28 = (float)(*(float *)&v27 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v25)) * *(float *)&v27)
                * (float)(*(float *)&v27 * *(float *)&v27));
    v29 = (float)(v28 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v25)) * v28) * (float)(v28 * v28));
    v24 = (float)(1.5 * v29) - (float)((float)(v26 * v29) * (float)(v29 * v29));
  }
  v30 = v23 * v24;
  v31 = *(float *)g4_m128_ptr<int32_t>(v21) * v24;
  v32 = v22 * v24;
  v33 = v24 * *((float *)a3 + 3);
  *((float *)a3 + 2) = v30;
  *(float *)a3 = v31;
  *((float *)a3 + 1) = v32;
  *((float *)a3 + 3) = v33;
  hkRotationf::setAxisAngle((hkRotationf::Self *)v45, a3, a5);
  v37 = *(float *)a4 * a7;
  v38 = *((float *)a4 + 1) * a7;
  v39 = *((float *)a4 + 2) * a7;
  v40 = *((float *)a4 + 3) * a7;
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v37, (const hkMatrix3f::Self *)v45, (const hkVector4f::Self *)&v37);
  v37 = v37 + *(float *)a2;
  v38 = v38 + *((float *)a2 + 1);
  v39 = v39 + *((float *)a2 + 2);
  v40 = v40 + *((float *)a2 + 3);
  hkRotationf::setAxisAngle((hkRotationf::Self *)v45, a3, v46);
  result = nullptr;
  if ( (int)(uintptr_t)(a8) > 0 )
  {
    do
    {
      v36 = result;
      v41 = v37;
      v42 = v38;
      v35 = v37 - *(float *)a2;
      v43 = v39;
      v44 = v40;
      v41 = v35;
      v42 = v38 - *((float *)a2 + 1);
      v43 = v39 - *((float *)a2 + 2);
      v44 = v40 - *((float *)a2 + 3);
      hkVector4f::setRotatedDir((hkVector4f::Self *)&v41, (const hkMatrix3f::Self *)v45, (const hkVector4f::Self *)&v41);
      v41 = v41 + *(float *)a2;
      v42 = v42 + *((float *)a2 + 1);
      v43 = v43 + *((float *)a2 + 2);
      v44 = v44 + *((float *)a2 + 3);
      hkDrawUtil::displaySegment();
      v37 = v41;
      v38 = v42;
      v39 = v43;
      result = (hkVector4f::Self *)((char *)v36 + 1);
      v40 = v44;
    }
    while ( (hkVector4f::Self *)((char *)v36 + 1) != a8 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::displayArrow  (binary VA: 0x18e6830)
// Original: hkDrawUtil::displayArrow
// ----------------------------------------------------------------------------
int hkDrawUtil::displayArrow(hkDrawUtil::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4)
{
  float v4; // xmm0_4
  float v5;
  typedef float _g4_t_v7;
  typedef float _g4_t_v8;
  typedef float _g4_t_v9;
  typedef float _g4_t_v10;
  typedef float _g4_t_v11;
  typedef uint8_t _g4_t_v12[16];
  typedef uint8_t _g4_t_v13[16];
  typedef float _g4_t_v14;
  typedef float _g4_t_v15;
  typedef float _g4_t_v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v12)) > _g4_s5 ? (32u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v13)) > _g4_s6 ? (48u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v14)) > _g4_s7 ? (64u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v15)) > _g4_s8 ? (68u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v16)) > _g4_s9 ? (72u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v17)) > _g4_s10 ? (76u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v18)) > _g4_s11 ? (80u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v19)) > _g4_s12 ? (84u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v20)) > _g4_s13 ? (88u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v21)) > _g4_s14 ? (92u + sizeof(_g4_t_v21)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 72u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 76u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 80u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 84u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 88u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 92u);

  v4 = *((float *)self + 2);
  v8 = (float)(*(float *)a3 * v4) + *(float *)a2;
  v9 = (float)(*((float *)a3 + 1) * v4) + *((float *)a2 + 1);
  v10 = (float)(*((float *)a3 + 2) * v4) + *((float *)a2 + 2);
  v11 = (float)(v4 * *((float *)a3 + 3)) + *((float *)a2 + 3);
  hkDrawUtil::displaySegment();
  hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)v12, a4, 0.7853982f);
  hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)v13, a4, -1.5707964f);
  v14 = *(float *)a3;
  v15 = *((float *)a3 + 1);
  v5 = *((float *)a3 + 2);
  v17 = *((float *)a3 + 3);
  v16 = v5;
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v14, (const hkQuaternionf::Self *)v12, (const hkVector4f::Self *)&v14);
  v7 = (float)-v4 * 0.33333334f;
  v18 = (float)(v14 * v7) + v8;
  v19 = (float)(v15 * v7) + v9;
  v20 = (float)(v16 * v7) + v10;
  v21 = (float)(v7 * v17) + v11;
  hkDrawUtil::displaySegment();
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v14, (const hkQuaternionf::Self *)v13, (const hkVector4f::Self *)&v14);
  v18 = (float)(v14 * v7) + v8;
  v19 = (float)(v15 * v7) + v9;
  v20 = (float)(v16 * v7) + v10;
  v21 = (float)(v7 * v17) + v11;
  return hkDrawUtil::displaySegment();
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::displayPlane  (binary VA: 0x18e6ad0)
// Original: hkDrawUtil::displayPlane
// ----------------------------------------------------------------------------
int hkDrawUtil::displayPlane(hkDrawUtil::Self *a1, hkVector4f::Self *a2, hkVector4f::Self *a3, float *a4, unsigned int a5, char a6)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  hkVector4f::Self *v9;
  float *v10;
  float v11; // xmm0_4
  float v12; // xmm0_4
  int result;
  __m128i v14;
  int v15;
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  typedef const hkVector4f::Self *_g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[16];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v22)) > _g4_s3 ? (24u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v24)) > _g4_s5 ? (32u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v25)) > _g4_s6 ? (48u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v26)) > _g4_s7 ? (64u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (128u + sizeof(_g4_t_v27)) > _g4_s8 ? (128u + sizeof(_g4_t_v27)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 128u);

  v6 = 0.70711f * *((float *)a1 + 2);
  *(float *)&v20 = *a4 * v6;
  v21 = a4[1] * v6;
  v7 = a4[2] * v6;
  v8 = v6 * a4[3];
  v22 = v7;
  v23 = v8;
  hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)v24, a3, 1.5707964f);
  hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)v25, a3, 0.7853982f);
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v20, (const hkQuaternionf::Self *)v25, (const hkVector4f::Self *)&v20);
  v9 = (hkVector4f::Self *)&v20;
  v10 = (float *)&v26;
  do
  {
    v19 = v9;
    *v10 = *(float *)a2;
    v11 = *v10;
    v10[1] = *((float *)a2 + 1);
    v12 = v11 + *(float *)&v20;
    v10 += 4;
    *(v10 - 2) = *((float *)a2 + 2);
    *(v10 - 1) = *((float *)a2 + 3);
    *(v10 - 4) = v12;
    *(v10 - 3) = *(v10 - 3) + v21;
    *(v10 - 2) = *(v10 - 2) + v22;
    *(v10 - 1) = *(v10 - 1) + v23;
    hkVector4f::setRotatedDir(v9, (const hkQuaternionf::Self *)v24, v9);
    v9 = (hkVector4f::Self *)(v19);
  }
  while ( v10 != (float *)&v27 );
  hkDrawUtil::displaySegment();
  hkDrawUtil::displaySegment();
  hkDrawUtil::displaySegment();
  hkDrawUtil::displaySegment();
  hkDrawUtil::displaySegment();
  result = hkDrawUtil::displaySegment();
  if ( a6 != 0 )
  {
g4_m128_raw(v14) = v20;
    *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14)) + (float)(v21 * v21))
                            + (float)(v22 * v22);
    if ( *(float *)g4_m128_ptr<int32_t>(v14) <= 0.0 )
    {
      v18 = 0.0;
    }
    else
    {
      v15 = ((_mm_cvtsi128_si32(v14) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v14) >> 1));
      v16 = (float)(*(float *)&v15 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * *(float *)&v15)
                  * (float)(*(float *)&v15 * *(float *)&v15));
      v17 = (float)(v16 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * v16) * (float)(v16 * v16));
      v18 = (float)(1.5 * v17) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v14)) * v17) * (float)(v17 * v17));
    }
    *(float *)&v20 = *(float *)&v20 * v18;
    v21 = v21 * v18;
    v22 = v22 * v18;
    v23 = v18 * v23;
    return hkDrawUtil::displayArrow(a1, a2, a3, v19);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::displayAxisAngleWidget  (binary VA: 0x18e6e30)
// Original: hkDrawUtil::displayAxisAngleWidget
// ----------------------------------------------------------------------------
void hkDrawUtil::displayAxisAngleWidget(hkDrawUtil::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5, float a6, float a7, float a8, int a9, unsigned int a10, int a11)
{
  float *v11;
  unsigned int *v12;
  float v13; // xmm0_4
  __m128i v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  unsigned int v19;
  __m128i m128_i128;
  float v21; // xmm5_4
  int v22;
  float v23; // xmm4_4
  float v24; // xmm3_4
  __m128 v25;
  typedef int _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32[4];
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef float _g4_t_v36[4];
  typedef __m128 _g4_t_v37;
  typedef uint32_t _g4_t_v38[46];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v28)) > _g4_s2 ? (8u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v29)) > _g4_s3 ? (12u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v30)) > _g4_s4 ? (16u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v31)) > _g4_s5 ? (20u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v32)) > _g4_s6 ? (28u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v33)) > _g4_s7 ? (32u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v34)) > _g4_s8 ? (36u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v35)) > _g4_s9 ? (40u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v36)) > _g4_s10 ? (48u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v37)) > _g4_s11 ? (64u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v38)) > _g4_s12 ? (80u + sizeof(_g4_t_v38)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);

  v38[42] = (uint32_t)(uintptr_t)(&self);
  v26 = a9;
  v11 = (float *)a2;
  v12 = (unsigned int *)a4;
  v30 = (float *)a3;
  v28 = a6;
  v27 = a7;
  v31 = a11;
  v29 = a8;
  hkDebugDisplay::displayLine(hkSingleton<hkDebugDisplay::Self>::s_instance);
  hkDebugDisplay::displayLine(hkSingleton<hkDebugDisplay::Self>::s_instance);
  v36[0] = *v30 * (float)(0.5 * v29);
  v36[1] = v30[1] * (float)(0.5 * v29);
  v13 = (float)(0.5 * v29) * v30[3];
  v36[2] = v30[2] * (float)(0.5 * v29);
  v36[3] = v13;
  hkDebugDisplay::displayArrow(
    hkSingleton<hkDebugDisplay::Self>::s_instance,
    (const hkVector4f::Self *)v11,
    (const hkVector4f::Self *)v36);
g4_m128_raw(v15) = *v12;
g4_m128_raw(v16) = v12[1];
  v14 = _mm_cvtsi32_si128(v12[3]);
g4_m128_lane<float>(v15, 0) =g4_m128_lane<float>(v15, 0) - *v11;
g4_m128_lane<float>(v16, 0) =g4_m128_lane<float>(v16, 0) - v11[1];
g4_m128_raw(v17) = v12[2];
g4_m128_lane<float>(v17, 0) =g4_m128_lane<float>(v17, 0) - v11[2];
g4_m128_raw(v18) = 0;
  m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v15));
  *(float *)g4_m128_ptr<int32_t>(v14) = *(float *)g4_m128_ptr<int32_t>(v14) - v11[3];
  v19 = _mm_cvtsi128_si32(v14);
  *(float *)g4_m128_ptr<int32_t>(m128_i128) = (float)((float)(g4_m128_lane<float>(v15, 0) *g4_m128_lane<float>(v15, 0))
                                        + (float)(g4_m128_lane<float>(v16, 0) *g4_m128_lane<float>(v16, 0)))
                                + (float)(g4_m128_lane<float>(v17, 0) *g4_m128_lane<float>(v17, 0));
  if ( *(float *)g4_m128_ptr<int32_t>(m128_i128) > 0.0 )
  {
    v21 = 0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128);
    v22 = ((_mm_cvtsi128_si32(m128_i128) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(m128_i128) >> 1));
g4_m128_raw(v18) = 0x3FC00000u;
    v23 = (float)(*(float *)&v22 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * *(float *)&v22)
                * (float)(*(float *)&v22 * *(float *)&v22));
    v24 = (float)(v23 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * v23) * (float)(v23 * v23));
g4_m128_lane<float>(v18, 0) = (float)(1.5 * v24) - (float)((float)(v21 * v24) * (float)(v24 * v24));
  }
g4_m128_lane<uint64_t>(v25, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v15, v16), 0);
g4_m128_lane<uint64_t>(v25, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v17, g4_m128_from<__m128>(_mm_cvtsi32_si128(v19))), 0);
  v37 = _mm_mul_ps(v25, _mm_shuffle_ps(v18, v18, 0));
  hkDisplaySemiCircle::Construct((hkDisplaySemiCircle::Self *)v38);
  hkDisplaySemiCircle::setParameters(
    (hkDisplaySemiCircle::Self *)v38,
    v29,
    v28,
    v27,
    v26,
    (const hkVector4f::Self *)v11,
    (const hkVector4f::Self *)v30,
    (const hkVector4f::Self *)&v37);
  v33 = nullptr;
  v34 = 0;
  v35 = 0x80000000;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v32, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, (int *)&v33, 1, 4);
  v34 = 1;
  *v33 = (uint32_t)(uintptr_t)(v38);
  hkDebugDisplay::displayGeometry((int)(uintptr_t)hkSingleton<hkDebugDisplay::Self>::s_instance);
  v34 = 0;
  if ( v35 >= 0 )
    (*(void (**)(uint32_t *, uint32_t *, int, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v33,
      4 * v35,
      0,
      v31);
  v33 = nullptr;
  v35 = 0x80000000;
  v38[0] = ((uint32_t)(uintptr_t)&off_20A8F28);
  g4_noop_dtor((hkDisplayGeometry *)v38);
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::debugDisplayGeometry  (binary VA: 0x18e71f0)
// Original: hkDrawUtil::debugDisplayGeometry
// ----------------------------------------------------------------------------
int hkDrawUtil::debugDisplayGeometry(uint32_t *a1, int a2)
{
  int result;
  __m128i v3;
  float v4; // xmm2_4
  float v5; // xmm1_4
  __m128i v6;
  int v7;
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  int v11;
  float v12; // xmm5_4
  float v13; // xmm0_4
  int v14;
  int v15;
  float v16; // xmm6_4
  float v17; // xmm1_4
  float *v18;
  float v19; // xmm7_4
  char v20;
  __m128i v21;
  unsigned int v22;
  __m128i v23;
  float v24;
  float v25; // xmm2_4
  float v26; // xmm4_4
  int i;
  float v28; // xmm4_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm4_4
  float v35; // xmm5_4
  float v36; // xmm6_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  __m128i v39;
  float v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm6_4
  __m128i v43;
  float v44; // xmm2_4
  float v45; // xmm1_4
  __m128i v46;
  float v47; // xmm5_4
  int v48;
  float v49; // xmm4_4
  float v50; // xmm0_4
  float v51; // xmm4_4
  float v52; // xmm5_4
  float v53; // xmm2_4
  __m128i v54;
  float v55; // xmm1_4
  float v56; // xmm5_4
  float v57; // xmm3_4
  float v58; // xmm6_4
  float v59; // xmm0_4
  float v60; // xmm6_4
  __m128i v61;
  float v62; // xmm1_4
  float v63; // xmm6_4
  float v64; // xmm0_4
  __m128i v65;
  float v66; // xmm5_4
  int v67;
  float v68; // xmm4_4
  float v69; // xmm3_4
  float v70; // xmm2_4
  float v71; // xmm1_4
  int v72;
  int v73;
  unsigned int v74;
  int v75;
  int v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  unsigned int PaletteColor;
  float v91;
  int v92;
  int v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  int v99;
  int v100;
  float v101[36];

  if ( (*(uint8_t *)(a2 + 16) != 0 || *(uint8_t *)(a2 + 21) != 0) && *(uint8_t *)(a2 + 17) == 0 )
  {
    v92 = a1[3];
    if ( v92 > 0 )
    {
      for ( i = 0; i != v92; ++i )
      {
        v72 = i;
        sub_18E5B50((int)(uintptr_t)(a1), a2, v72);
      }
    }
  }
  result = *(uint32_t *)(a2 + 48);
  v86 = result;
  if ( *(uint8_t *)(a2 + 19) != 0 || *(uint8_t *)(a2 + 18) != 0 || *(uint8_t *)(a2 + 20) != 0 || *(uint8_t *)(a2 + 22) != 0 )
  {
g4_m128_raw(v3) = *(unsigned int *)(a2 + 32);
    v4 = *(float *)(a2 + 36);
    v6 = v3;
    v5 = *(float *)(a2 + 40);
    *(float *)g4_m128_ptr<int32_t>(v6) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v3) * *(float *)g4_m128_ptr<int32_t>(v3)) + (float)(v4 * v4))
                           + (float)(v5 * v5);
    if ( *(float *)g4_m128_ptr<int32_t>(v6) <= 0.0 )
    {
      v10 = 0.0;
    }
    else
    {
      v7 = ((_mm_cvtsi128_si32(v6) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v6) >> 1));
      v8 = (float)(*(float *)&v7 * 1.5)
         - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v6)) * *(float *)&v7)
                 * (float)(*(float *)&v7 * *(float *)&v7));
      v9 = (float)(v8 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v6)) * v8) * (float)(v8 * v8));
      v10 = (float)(1.5 * v9) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v6)) * v9) * (float)(v9 * v9));
    }
    v89 = 0;
    result = a1[6];
    v85 = result;
    v79 = *(float *)g4_m128_ptr<int32_t>(v3) * v10;
    v78 = v4 * v10;
    v77 = v10 * v5;
    if ( result > 0 )
    {
      do
      {
        v12 = *(float *)(a2 + 64);
        v13 = *(float *)(a2 + 80);
        v14 = a1[5] + 16 * v89;
        v15 = a1[2];
        v16 = *(float *)(a2 + 68);
        v17 = *(float *)(a2 + 88);
        v84 = *(float *)(a2 + 84);
        v83 = v17;
        v18 = (float *)(16 * *(uint32_t *)v14 + v15);
        v88 = v15 + 16 * *(uint32_t *)(v14 + 4);
        v87 = v15 + 16 * *(uint32_t *)(v14 + 8);
        v19 = *(float *)(a2 + 72);
        v20 = 4 * (v19 > v17);
        if ( *(float *)(a2 + 76) > *(float *)(a2 + 92) )
          v20 = 4 * (v19 > v17) + 8;
        if ( (v20 & 7 | (uint8_t)((v12 > v13) | (2 * (v16 > v84)))) == 0 )
        {
g4_m128_raw(v21) = *((unsigned int *)v18 + 1);
          *(float *)g4_m128_ptr<int32_t>(v21) = fminf(*(float *)g4_m128_ptr<int32_t>(v21), *(float *)(v88 + 4));
          v22 = _mm_cvtsi128_si32(v21);
g4_m128_lane<int32_t>(v21, 0) = *(uint32_t *)(v88 + 8);
          v23 = _mm_cvtsi32_si128(v22);
          v81 = fminf(v18[2], *(float *)g4_m128_ptr<int32_t>(v21));
          v80 = fmaxf(v18[2], *(float *)g4_m128_ptr<int32_t>(v21));
g4_m128_lane<int32_t>(v21, 0) = *(uint32_t *)(v87 + 4);
          *(float *)g4_m128_ptr<int32_t>(v23) = fminf(*(float *)g4_m128_ptr<int32_t>(v23), *(float *)g4_m128_ptr<int32_t>(v21));
          v91 = fminf(fminf(*v18, *(float *)v88), *(float *)v87);
          v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
g4_m128_lane<int32_t>(v23, 0) = *(uint32_t *)(v87 + 8);
          v82 = fminf(v81, *(float *)g4_m128_ptr<int32_t>(v23));
          v25 = fmaxf(fmaxf(v18[1], *(float *)(v88 + 4)), *(float *)g4_m128_ptr<int32_t>(v21));
          v26 = fmaxf(v80, *(float *)g4_m128_ptr<int32_t>(v23));
          if ( v12 > fmaxf(fmaxf(*v18, *(float *)v88), *(float *)v87)
            || v16 > v25
            || v19 > v26
            || v91 > v13
            || v24 > v84
            || v82 > v83 )
          {
            goto LABEL_17;
          }
        }
        if ( *(uint8_t *)(a2 + 17) != 0 )
        {
          v93 = a1[5] + 16 * v89;
          sub_18E5B50((int)(uintptr_t)(a1), a2, *(uint32_t *)v14);
          sub_18E5B50((int)(uintptr_t)(a1), a2, *(uint32_t *)(v93 + 4));
          sub_18E5B50((int)(uintptr_t)(a1), a2, *(uint32_t *)(v93 + 8));
          v14 = v93;
          if ( *(uint8_t *)(a2 + 23) == 0 )
          {
LABEL_11:
            PaletteColor = *(uint32_t *)a2;
            if ( *(uint8_t *)(a2 + 18) != 0 )
              goto LABEL_40;
            goto LABEL_12;
          }
        }
        else if ( *(uint8_t *)(a2 + 23) == 0 )
        {
          goto LABEL_11;
        }
        PaletteColor = hkColor::getPaletteColor(*(hkColor::Self **)(v14 + 12), 0xFFu);
        if ( *(uint8_t *)(a2 + 18) != 0 )
        {
LABEL_40:
          hkDebugDisplay::displayLine(hkSingleton<hkDebugDisplay::Self>::s_instance);
          hkDebugDisplay::displayLine(hkSingleton<hkDebugDisplay::Self>::s_instance);
          v74 = 0;
          v75 = hkDebugDisplayProcess::m_tag;
          v73 = *(uint32_t *)(a2 + 4);
          hkDebugDisplay::displayLine(hkSingleton<hkDebugDisplay::Self>::s_instance);
          if ( *(uint8_t *)(a2 + 20) == 0 )
            goto LABEL_13;
          goto LABEL_41;
        }
LABEL_12:
        if ( *(uint8_t *)(a2 + 20) == 0 )
          goto LABEL_13;
LABEL_41:
        v94 = *v18 + *(float *)v88;
        v95 = v18[1] + *(float *)(v88 + 4);
        v96 = v18[2] + *(float *)(v88 + 8);
        v97 = v18[3] + *(float *)(v88 + 12);
        v28 = *(float *)(v87 + 12);
        v29 = v96 + *(float *)(v87 + 8);
        v30 = v94 + *(float *)v87;
        v31 = (float)(v95 + *(float *)(v87 + 4)) * 0.33333334f;
        v98 = COERCE_FLOAT(v101);
        v100 = -2147483520;
        v95 = v31;
        v99 = 1;
        v94 = v30 * 0.33333334f;
        LOBYTE(v101[0]) = 0;
        v96 = v29 * 0.33333334f;
        v97 = (float)(v28 + v97) * 0.33333334f;
        hkStringBuf::printf((hkStringBuf::Self *)&v98, "%d", v89, v73, v74, v75, v76);
        v74 = 0;
        v75 = hkDebugDisplayProcess::m_tag;
        v73 = *(uint32_t *)(a2 + 12);
        hkDebugDisplay::display3dText(hkSingleton<hkDebugDisplay::Self>::s_instance);
        *(float *)&v99 = 0.0;
        if ( v100 >= 0 )
        {
          (*(void (**)(uint32_t *, float, int, int, uint32_t, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
            (uint32_t *)(hkContainerTempAllocator::s_alloc),
            COERCE_FLOAT(LODWORD(v98)),
            v100 & 0x3FFFFFFF,
            v73,
            0,
            v75);
          if ( *(uint8_t *)(a2 + 22) == 0 )
            goto LABEL_14;
          goto LABEL_43;
        }
LABEL_13:
        if ( *(uint8_t *)(a2 + 22) == 0 )
          goto LABEL_14;
LABEL_43:
        v94 = *v18 + *(float *)v88;
        v95 = v18[1] + *(float *)(v88 + 4);
        v96 = v18[2] + *(float *)(v88 + 8);
        v97 = v18[3] + *(float *)(v88 + 12);
        v32 = (float)(v96 + *(float *)(v87 + 8)) * 0.33333334f;
        v33 = (float)(v94 + *(float *)v87) * 0.33333334f;
        v34 = (float)(*(float *)(v87 + 12) + v97) * 0.33333334f;
        v95 = (float)(v95 + *(float *)(v87 + 4)) * 0.33333334f;
        v96 = v32;
        v94 = v33;
        v97 = v34;
        v35 = *(float *)v88 - *v18;
        v36 = v18[1];
        v37 = *(float *)v87 - *v18;
        v38 = v18[2];
g4_m128_raw(v39) = *(unsigned int *)(v88 + 4);
        *(float *)g4_m128_ptr<int32_t>(v39) = *(float *)g4_m128_ptr<int32_t>(v39) - v36;
        v40 = *(float *)(v88 + 8) - v38;
        v41 = *(float *)(v87 + 4) - v36;
        v42 = *(float *)(v87 + 8) - v38;
        v43 = v39;
        *(float *)g4_m128_ptr<int32_t>(v43) = (float)(*(float *)g4_m128_ptr<int32_t>(v39) * v42) - (float)(v40 * v41);
        v44 = (float)(v40 * v37) - (float)(v42 * v35);
        v45 = (float)(v41 * v35) - (float)(v37 * *(float *)g4_m128_ptr<int32_t>(v39));
        v46 = v43;
        *(float *)g4_m128_ptr<int32_t>(v46) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v43) * *(float *)g4_m128_ptr<int32_t>(v43)) + (float)(v44 * v44))
                                + (float)(v45 * v45);
        if ( *(float *)g4_m128_ptr<int32_t>(v46) <= 0.0 )
        {
          v52 = 0.0;
          v51 = 0.0;
        }
        else
        {
          v47 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v46);
          v48 = ((_mm_cvtsi128_si32(v46) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v46) >> 1));
          v49 = (float)(*(float *)&v48 * 1.5)
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v46)) * *(float *)&v48)
                      * (float)(*(float *)&v48 * *(float *)&v48));
          v50 = (float)((float)((float)(*(float *)&v48 * 1.5)
                              - (float)((float)(v47 * *(float *)&v48) * (float)(*(float *)&v48 * *(float *)&v48)))
                      * 1.5)
              - (float)((float)(v47 * v49) * (float)(v49 * v49));
          v51 = (float)(1.5 * v50) - (float)((float)(v47 * v50) * (float)(v50 * v50));
          v52 = (float)(0.0 * v51) * 0.1f;
        }
        v101[0] = v52;
        v75 = hkDebugDisplayProcess::m_tag;
        v74 = 0;
        v73 = *(uint32_t *)(a2 + 8);
        v98 = (float)(*(float *)g4_m128_ptr<int32_t>(v43) * v51) * 0.1f;
        *(float *)&v99 = (float)(v44 * v51) * 0.1f;
        *(float *)&v100 = (float)(v45 * v51) * 0.1f;
        hkDebugDisplay::displayArrow(
          hkSingleton<hkDebugDisplay::Self>::s_instance,
          (const hkVector4f::Self *)&v94,
          (const hkVector4f::Self *)&v98);
LABEL_14:
        if ( *(uint8_t *)(a2 + 19) != 0 )
        {
          if ( *(uint8_t *)(a2 + 24) != 0 )
          {
            v53 = v18[2];
g4_m128_raw(v54) = *(unsigned int *)(v88 + 4);
            v55 = *(float *)(v88 + 8) - v53;
            v56 = *(float *)v88 - *v18;
            v57 = *(float *)v87 - *v18;
            v58 = v18[1];
            *(float *)g4_m128_ptr<int32_t>(v54) = *(float *)g4_m128_ptr<int32_t>(v54) - v58;
            v59 = *(float *)(v87 + 4) - v58;
            v60 = *(float *)(v87 + 8) - v53;
            v61 = v54;
            *(float *)g4_m128_ptr<int32_t>(v61) = (float)(*(float *)g4_m128_ptr<int32_t>(v54) * v60) - (float)(v55 * v59);
            v62 = (float)(v55 * v57) - (float)(v60 * v56);
            v63 = 0.0;
            v64 = (float)(v59 * v56) - (float)(v57 * *(float *)g4_m128_ptr<int32_t>(v54));
            v65 = v61;
            *(float *)g4_m128_ptr<int32_t>(v65) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v61) * *(float *)g4_m128_ptr<int32_t>(v61))
                                            + (float)(v62 * v62))
                                    + (float)(v64 * v64);
            if ( *(float *)g4_m128_ptr<int32_t>(v65) > 0.0 )
            {
              v66 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v65);
              v67 = ((_mm_cvtsi128_si32(v65) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v65) >> 1));
              v68 = (float)(*(float *)&v67 * 1.5)
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v65)) * *(float *)&v67)
                          * (float)(*(float *)&v67 * *(float *)&v67));
              v69 = (float)(v68 * 1.5)
                  - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v65)) * v68) * (float)(v68 * v68));
              v63 = (float)(1.5 * v69) - (float)((float)(v66 * v69) * (float)(v69 * v69));
            }
            v70 = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v61) * v63) * v79) + (float)((float)(v62 * v63) * v78))
                + (float)((float)(v63 * v64) * v77);
            if ( v70 < 0.0 )
            {
              v71 = 0.1f;
            }
            else
            {
              v71 = 1.0;
              if ( v70 <= 1.0 )
                v71 = (float)(0.9f * v70) + 0.1f;
            }
            PaletteColor = hkColor::rgbFromFloats(
                             COERCE_UNSIGNED_INT((float)((float)BYTE2(PaletteColor) / 255.0) * v71),
                             COERCE_UNSIGNED_INT((float)((float)BYTE1(PaletteColor) / 255.0) * v71),
                             (float)((float)(uint8_t)PaletteColor / 255.0) * v71,
                             COERCE_UNSIGNED_INT((float)((float)0 + (float)HIBYTE(PaletteColor)) / 255.0));
          }
          v75 = 0;
          v76 = hkDebugDisplayProcess::m_tag;
          v74 = PaletteColor;
          v73 = v87;
          hkDebugDisplay::displayTriangle(hkSingleton<hkDebugDisplay::Self>::s_instance);
        }
LABEL_17:
        v11 = 1;
        if ( v86 > 0 )
          v11 = v86;
        v89 += v11;
        result = v89;
      }
      while ( v85 > v89 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::displayOrientedRectangle  (binary VA: 0x18e7f30)
// Original: hkDrawUtil::displayOrientedRectangle
// ----------------------------------------------------------------------------
int hkDrawUtil::displayOrientedRectangle()
{
  hkDrawUtil::displaySegment();
  hkDrawUtil::displaySegment();
  hkDrawUtil::displaySegment();
  return hkDrawUtil::displaySegment();
}

// ----------------------------------------------------------------------------
// Function: hkDrawUtil::displayMinMaxRectangleWidget  (binary VA: 0x18e81c0)
// Original: hkDrawUtil::displayMinMaxRectangleWidget
// ----------------------------------------------------------------------------
int hkDrawUtil::displayMinMaxRectangleWidget(hkDrawUtil::Self *self, __m128 *a2, __m128 *a3, int64_t a4, unsigned int a5, unsigned int a6, const hkStringPtr::Self *a7)
{
  __m128 v7;
  float v8; // xmm6_4
  __m128i v9;
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  int v13;
  __m128i v14;
  float v15; // xmm3_4
  float v16; // xmm2_4
  __m128i v17;
  int v18; // xmm5_4
  float v19; // xmm4_4
  float v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  __m128i v25;
  float v26; // xmm1_4
  float v27; // xmm0_4
  __m128i v28;
  float v29; // xmm6_4
  int v30; // xmm4_4
  float v31; // xmm3_4
  float v32; // xmm7_4
  float v33; // xmm3_4
  int result;
  float v35;
  __m128 v36;
  __m128 v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  __m128 v46;

  v7 = a2[3];
  v8 =g4_m128_lane<float>(*(a3), 0);
g4_m128_raw(v9) =g4_m128_lane<uint32_t>(*(a3), 2);
  v35 =g4_m128_lane<float>(*(a3), 1);
  v36 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(G4_BITCAST<__m128>(a5), G4_BITCAST<__m128>(a5), 0), *a3), v7);
  v10 = fabs(g4_m128_lane<float>(*(a3), 0));
  v37 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(G4_BITCAST<__m128>(a6), G4_BITCAST<__m128>(a6), 0), *a3), v7);
  v11 = fabs(v35);
  v12 = fabs(*(float *)g4_m128_ptr<int32_t>(v9));
  if ( v11 >= v10 )
  {
    v13 = 2;
  }
  else
  {
    v11 = v10;
    v13 = 1;
  }
  v38 = 0.0;
  if ( v12 >= v11 )
    v13 = 0;
  v39 = 0.0;
  v40 = 0.0;
g4_m128_raw(v14) = LODWORD(v35);
  *(&v38 + v13) = 1.0;
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)(v35 * v40) - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v39);
  v15 = (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v38) - (float)(v40 * v8);
  v17 = v14;
  v16 = (float)(v39 * v8) - (float)(v38 * v35);
  *(float *)g4_m128_ptr<int32_t>(v17) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14)) + (float)(v15 * v15))
                          + (float)(v16 * v16);
  if ( *(float *)g4_m128_ptr<int32_t>(v17) <= 0.0 )
  {
    v21 = 0.0;
    v20 = 0.0;
  }
  else
  {
    v18 = ((_mm_cvtsi128_si32(v17) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v17) >> 1));
    v19 = (float)(1.5 * *(float *)&v18)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * *(float *)&v18)
                * (float)(*(float *)&v18 * *(float *)&v18));
    v20 = (float)(1.5 * v19) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * v19) * (float)(v19 * v19));
    v21 = 0.0 * v20;
  }
  v22 = *(float *)g4_m128_ptr<int32_t>(v14) * v20;
  v23 = v15 * v20;
  v24 = v20 * v16;
  v25 = v9;
  v41 = v21;
  v40 = v24;
  *(float *)g4_m128_ptr<int32_t>(v25) = (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v23) - (float)(v35 * v24);
  v38 = v22;
  v39 = v23;
  v26 = (float)(v24 * v8) - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v22);
  v27 = (float)(v22 * v35) - (float)(v23 * v8);
  v28 = v25;
  *(float *)g4_m128_ptr<int32_t>(v28) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v25) * *(float *)g4_m128_ptr<int32_t>(v25)) + (float)(v26 * v26))
                          + (float)(v27 * v27);
  if ( *(float *)g4_m128_ptr<int32_t>(v28) <= 0.0 )
  {
    v33 = 0.0;
    v32 = 0.0;
  }
  else
  {
    v29 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v28);
    v30 = ((_mm_cvtsi128_si32(v28) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v28) >> 1));
    v31 = (float)(*(float *)&v30 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v28)) * *(float *)&v30)
                * (float)(*(float *)&v30 * *(float *)&v30));
    v32 = (float)(1.5 * v31) - (float)((float)(v29 * v31) * (float)(v31 * v31));
    v33 = 0.0 * v32;
  }
  v45 = v33;
  v42 = *(float *)g4_m128_ptr<int32_t>(v25) * v32;
  v43 = v26 * v32;
  v44 = v32 * v27;
  hkDrawUtil::displayOrientedRectangle();
  hkDrawUtil::displayOrientedRectangle();
  hkDebugDisplay::displayLine(hkSingleton<hkDebugDisplay::Self>::s_instance);
  result = *(uint32_t *)a7 & 0xFFFFFFFE;
  if ( result != 0 )
  {
    result = hkString::strCmp((hkString::Self *)(*(uint32_t *)a7 & 0xFFFFFFFE), (char *)&unk_1B15112);
    if ( result != 0 )
    {
      v46 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v37, v36), G4_BITCAST<__m128>(xmmword_1C7CEC0)), v36);
      return hkDebugDisplay::display3dText(hkSingleton<hkDebugDisplay::Self>::s_instance);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::Destroy  (binary VA: 0x18e8640)
// Original: hkDebugDisplayHandler::~hkDebugDisplayHandler
// ----------------------------------------------------------------------------
void hkDebugDisplayHandler::Destroy(hkDebugDisplayHandler::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8A68);
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::displayAnnotation  (binary VA: 0x18e8660)
// Original: hkDebugDisplayHandler::displayAnnotation
// ----------------------------------------------------------------------------
hkDebugDisplayHandler::Self * hkDebugDisplayHandler::displayAnnotation(hkDebugDisplayHandler::Self *self, const char *a2, int a3, int a4)
{
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::displayBone  (binary VA: 0x18e8670)
// Original: hkDebugDisplayHandler::displayBone
// ----------------------------------------------------------------------------
hkDebugDisplayHandler::Self * hkDebugDisplayHandler::displayBone(hkDebugDisplayHandler::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkQuaternionf::Self *a4, unsigned int a5, int a6)
{
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::doesSupportHashes  (binary VA: 0x18e8680)
// Original: hkDebugDisplayHandler::doesSupportHashes
// ----------------------------------------------------------------------------
hkDebugDisplayHandler::Self * hkDebugDisplayHandler::doesSupportHashes(hkDebugDisplayHandler::Self *self)
{
  *(uint8_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::addGeometryHash  (binary VA: 0x18e8690)
// Original: hkDebugDisplayHandler::addGeometryHash
// ----------------------------------------------------------------------------
hkDebugDisplayHandler::Self * hkDebugDisplayHandler::addGeometryHash(hkDebugDisplayHandler::Self *self, const hkReferencedObject::Self *a2, hkDisplayGeometryBuilder::Self *a3, const uint64_t *a4, const hkAabb::Self *a5, unsigned int a6, const hkTransformf::Self *a7, unsigned int a8, int a9)
{
  *(uint32_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::updateGeometryVerts  (binary VA: 0x18e86a0)
// Original: hkDebugDisplayHandler::updateGeometryVerts
// ----------------------------------------------------------------------------
hkDebugDisplayHandler::Self * hkDebugDisplayHandler::updateGeometryVerts(hkDebugDisplayHandler::Self *self, unsigned int a2, const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *a3, int a4)
{
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::updateGeometries  (binary VA: 0x18e86b0)
// Original: hkDebugDisplayHandler::updateGeometries
// ----------------------------------------------------------------------------
hkDebugDisplayHandler::Self * hkDebugDisplayHandler::updateGeometries(hkDebugDisplayHandler::Self *self, const hkTransformf::Self *a2, const unsigned int *a3, int a4, int a5)
{
  int v5;
  typedef const hkTransformf::Self *_g4_t_v9;
  typedef uint32_t _g4_t_v10[3];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v5 = 0;
  if ( a5 > 0 )
  {
    while ( 1 )
    {
      v9 = a2;
      (*(void (**)(uint32_t *))(*(uint32_t *)a2 + 36))(v10);
      a2 = v9;
      if ( v10[0] == 1 )
        break;
      ++v5;
      a3 += 16;
      if ( v5 == a5 )
        goto LABEL_6;
    }
    *(uint32_t *)self = 1;
    return self;
  }
  else
  {
LABEL_6:
    *(uint32_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::Destroy_ea18e8740  (binary VA: 0x18e8740)
// Original: hkDebugDisplayHandler::~hkDebugDisplayHandler
// ----------------------------------------------------------------------------
void hkDebugDisplayHandler::Destroy_ea18e8740(hkDebugDisplayHandler::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8A68);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::addGeometry  (binary VA: 0x18e8770)
// Original: hkDebugDisplayHandler::addGeometry
// ----------------------------------------------------------------------------
hkDebugDisplayHandler::Self * hkDebugDisplayHandler::addGeometry(hkDebugDisplayHandler::Self *self, hkDisplayGeometry *a2, unsigned int a3, int a4, unsigned int a5, int a6)
{
  hkDebugDisplayHandler::Self *v6;
  int v7;
  typedef int _g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v11)) > _g4_s2 ? (32u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v12)) > _g4_s3 ? (36u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v13)) > _g4_s4 ? (40u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);

  v13[3] = (uint32_t)(uintptr_t)(&self);
  v6 = self;
  v13[0] = a3;
  v10 = v13;
  v7 = *(uint32_t *)a2;
  v12 = -2147483647;
  v11 = 1;
  (*(void (**)(hkDebugDisplayHandler::Self *, hkDisplayGeometry *, uint32_t **, unsigned int, int, unsigned int, int, uint32_t, int, uint32_t **, unsigned int, int))(v7 + 12))(
    self,
    a2,
    &v10,
    a3 + 16,
    a4,
    a5,
    a6,
    0,
    v9,
    &v10,
    a5,
    a4);
  v11 = 0;
  if ( v12 >= 0 )
    (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v10,
      4 * v12);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::updateGeometry  (binary VA: 0x18e8840)
// Original: hkDebugDisplayHandler::updateGeometry
// ----------------------------------------------------------------------------
hkDebugDisplayHandler::Self * hkDebugDisplayHandler::updateGeometry(hkDebugDisplayHandler::Self *self, const hkQsTransformf::Self *a2, const hkQsTransformf::Self *a3, int a4, int a5)
{
  const hkQsTransformf::Self *v5;
  hkDebugDisplayHandler::Self *v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[22];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v10[18] = (uint32_t)(uintptr_t)(&self);
  v5 = a2;
  v6 = self;
  v9 = a4;
  v8 = a5;
  hkMatrix4f::set((hkMatrix4f::Self *)v10, a3);
  (*(void (**)(hkDebugDisplayHandler::Self *, const hkQsTransformf::Self *, uint32_t *, int, int))(*(uint32_t *)v5 + 40))(
    v6,
    v5,
    v10,
    v9,
    v8);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::skinGeometry  (binary VA: 0x18e88c0)
// Original: hkDebugDisplayHandler::skinGeometry
// ----------------------------------------------------------------------------
int hkDebugDisplayHandler::skinGeometry(hkDebugDisplayHandler::Self *self, unsigned int *a2, int a3, const hkQsTransformf::Self *a4, const hkQsTransformf::Self *a5, const hkQsTransformf::Self *a6, hkQsTransformf::Self *a7, int a8)
{
  const hkQsTransformf::Self *v8;
  const hkQsTransformf::Self *v9;
  hkLifoAllocator::Self *v10;
  int v11;
  hkMatrix4f::Self *v12;
  const hkQsTransformf::Self *v13;
  hkLifoAllocator::Self *v14;
  typedef int _g4_t_v16;
  typedef hkQsTransformf::Self *_g4_t_v17;
  typedef const hkQsTransformf::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef unsigned int *_g4_t_v20;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef hkLifoAllocator::Self **_g4_t_v22;
  typedef int _g4_t_v23;
  typedef hkDebugDisplayHandler::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef signed int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef hkMatrix4f::Self *_g4_t_v28;
  typedef char *_g4_t_v29;
  typedef const hkQsTransformf::Self *_g4_t_v30;
  typedef hkMatrix4f::Self *_g4_t_v31;
  typedef uint32_t _g4_t_v32[18];
  typedef hkDebugDisplayHandler::Self **_g4_t_v33;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_address)) > _g4_s5 ? (20u + sizeof(_g4_t_address)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v22)) > _g4_s6 ? (20u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v23)) > _g4_s7 ? (24u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v24)) > _g4_s8 ? (28u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v25)) > _g4_s9 ? (28u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v26)) > _g4_s10 ? (32u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v27)) > _g4_s11 ? (32u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v28)) > _g4_s12 ? (36u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v29)) > _g4_s13 ? (36u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v30)) > _g4_s14 ? (40u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v31)) > _g4_s15 ? (44u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v32)) > _g4_s16 ? (48u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v33)) > _g4_s17 ? (120u + sizeof(_g4_t_v33)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 120u);

  v33 = &self;
  v24 = self;
  v20 = a2;
  v19 = a3;
  v18 = a4;
  v8 = a6;
  v30 = a6;
  v9 = a5;
  v17 = a7;
  v16 = a8;
  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v10 = *address;
  v26 = (((uint32_t)(uintptr_t)(v8) << 6) + 127) & 0xFFFFFF80;
  v28 = *((hkMatrix4f::Self **)*address + 3);
  if ( v26 <= *((uint32_t *)*address + 2) && (unsigned int)(v11 = v26 + *((uint32_t *)*address + 3)) <= *((uint32_t *)v10 + 4) )
  {
    *((uint32_t *)v10 + 3) = v11;
    v12 = v28;
  }
  else
  {
    v28 = (hkMatrix4f::Self *)hkLifoAllocator::allocateFromNewSlab(v10, v26);
    v12 = v28;
  }
  v13 = nullptr;
  if ( (int)(uintptr_t)(v30) > 0 )
  {
    do
    {
      v31 = v12;
      v13 = (const hkQsTransformf::Self *)((char *)v13 + 1);
      hkMatrix4f::set(v12, v9);
      v9 = (const hkQsTransformf::Self *)((char *)v9 + 48);
      v12 = (hkMatrix4f::Self *)((char *)v31 + 64);
    }
    while ( v13 != v30 );
  }
  hkMatrix4f::set((hkMatrix4f::Self *)v32, v17);
  (*(void (**)(hkDebugDisplayHandler::Self *, unsigned int *, int, const hkQsTransformf::Self *, hkMatrix4f::Self *, const hkQsTransformf::Self *, uint32_t *, int, int, hkQsTransformf::Self *, const hkQsTransformf::Self *, int, unsigned int *, hkLifoAllocator::Self **, signed int, hkDebugDisplayHandler::Self *, signed int, hkMatrix4f::Self *, const hkQsTransformf::Self *, uint32_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, hkDebugDisplayHandler::Self **))(*v20 + 48))(
    v24,
    v20,
    v19,
    v18,
    v28,
    v30,
    v32,
    v16,
    v16,
    v17,
    v18,
    v19,
    v20,
    address,
    v26,
    v24,
    v26,
    v28,
    v30,
    v32,
    v32[0],
    v32[1],
    v32[2],
    v32[3],
    v32[4],
    v32[5],
    v32[6],
    v32[7],
    v32[8],
    v32[9],
    v32[10],
    v32[11],
    v32[12],
    v32[13],
    v32[14],
    v32[15],
    v32[16],
    v32[17],
    v33);
  v14 = *v22;
  if ( v27 > *((uint32_t *)*v22 + 2) || *((char **)v14 + 3) != &v29[v23] || v29 == *((char **)v14 + 5) )
    hkLifoAllocator::slowBlockFree(*v22, v29, v23);
  else
    *((uint32_t *)v14 + 3) = (uint32_t)(uintptr_t)(v29);
  return v25;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::displayArrow  (binary VA: 0x18e8a60)
// Original: hkDebugDisplayHandler::displayArrow
// ----------------------------------------------------------------------------
const hkVector4f::Self * hkDebugDisplayHandler::displayArrow(hkDebugDisplayHandler::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
{
  const hkVector4f::Self *result;
  __m128i v4;
  __m128 v5;
  hkDebugDisplayHandler::Self *v6;
  __m128 v7;
  __m128i v8;
  float v9; // xmm6_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  __m128 v12;
  __m128 v13;
  __m128 m128i_i128;
  int v15;
  int v16;
  __m128 v17;
  float v18; // xmm6_4
  __m128i v19;
  float v20; // xmm5_4
  int v21; // xmm3_4
  float v22; // xmm3_4
  float v23; // xmm4_4
  __m128 v24;
  float v25; // xmm6_4
  __m128 v26;
  int v27;
  float v28; // xmm1_4
  float v29; // xmm0_4
  __m128 v30;
  __m128 v31;
  __m128 v32;
  __m128 v33;
  __m128 v34;
  int v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef int32_t _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef char _g4_t_v50[4];
  typedef float _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef __m128 _g4_t_v59;
  typedef __m128 _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef hkDebugDisplayHandler::Self **_g4_t_v69;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v36)) > _g4_s0 ? (8u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v37)) > _g4_s1 ? (12u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v38)) > _g4_s2 ? (16u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v39)) > _g4_s3 ? (24u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v40)) > _g4_s4 ? (28u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v41)) > _g4_s5 ? (32u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v42)) > _g4_s6 ? (36u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v43)) > _g4_s7 ? (36u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v44)) > _g4_s8 ? (40u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v45)) > _g4_s9 ? (44u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v46)) > _g4_s10 ? (48u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v47)) > _g4_s11 ? (56u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v48)) > _g4_s12 ? (60u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v49)) > _g4_s13 ? (64u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v50)) > _g4_s14 ? (76u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v51)) > _g4_s15 ? (80u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v52)) > _g4_s16 ? (84u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v53)) > _g4_s17 ? (88u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v54)) > _g4_s18 ? (92u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v55)) > _g4_s19 ? (96u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v56)) > _g4_s20 ? (100u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v57)) > _g4_s21 ? (104u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v58)) > _g4_s22 ? (108u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v59)) > _g4_s23 ? (112u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v60)) > _g4_s24 ? (128u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v61)) > _g4_s25 ? (144u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v62)) > _g4_s26 ? (148u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v63)) > _g4_s27 ? (152u + sizeof(_g4_t_v63)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v64)) > _g4_s28 ? (156u + sizeof(_g4_t_v64)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v65)) > _g4_s29 ? (160u + sizeof(_g4_t_v65)) : _g4_s29,
    _g4_s31 = (164u + sizeof(_g4_t_v66)) > _g4_s30 ? (164u + sizeof(_g4_t_v66)) : _g4_s30,
    _g4_s32 = (168u + sizeof(_g4_t_v67)) > _g4_s31 ? (168u + sizeof(_g4_t_v67)) : _g4_s31,
    _g4_s33 = (172u + sizeof(_g4_t_v68)) > _g4_s32 ? (172u + sizeof(_g4_t_v68)) : _g4_s32,
    _g4_s34 = (184u + sizeof(_g4_t_v69)) > _g4_s33 ? (184u + sizeof(_g4_t_v69)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 56u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 60u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 80u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 84u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 100u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 104u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 108u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 112u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 128u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 144u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 148u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 152u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 156u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 160u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 164u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 168u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 172u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 184u);

  v69 = &self;
  result = a3;
g4_m128_raw(v4) = *(unsigned int *)a3;
g4_m128_raw(v5) = *((unsigned int *)a3 + 1);
  v8 = v4;
  v6 = self;
g4_m128_raw(v7) = *((unsigned int *)a3 + 2);
  *(float *)g4_m128_ptr<int32_t>(v8) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v4) * *(float *)g4_m128_ptr<int32_t>(v4))
                                 + (float)(g4_m128_lane<float>(v5, 0) *g4_m128_lane<float>(v5, 0)))
                         + (float)(g4_m128_lane<float>(v7, 0) *g4_m128_lane<float>(v7, 0));
  if ( *(float *)g4_m128_ptr<int32_t>(v8) >= 0.00000011920929f )
  {
    v49 = *(float *)a2;
    v41 = *((float *)a2 + 1);
    v46 = *(float *)a2 + *(float *)g4_m128_ptr<int32_t>(v4);
    v51 = v46;
    v9 = *((float *)a2 + 2);
    v45 = v41 +g4_m128_lane<float>(v5, 0);
    v52 = v41 +g4_m128_lane<float>(v5, 0);
    v48 = v9;
    v47 = *((float *)a2 + 3);
    v10 = v47 + *((float *)a3 + 3);
    v40 = v9 +g4_m128_lane<float>(v7, 0);
    v53 = v9 +g4_m128_lane<float>(v7, 0);
    v44 = v10;
    v54 = v10;
    v11 = fabs(*(float *)g4_m128_ptr<int32_t>(v4));
g4_m128_lane<int32_t>(v12, 0) = fabs(g4_m128_lane<float>(v5, 0));
    v13 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v7);
    if ( v11 >g4_m128_lane<float>(v12, 0) )
    {
      m128i_i128 = v5;
      v15 = 0;
      v42 =g4_m128_lane<int32_t>(v4, 0);
      v16 = 1;
    }
    else
    {
      m128i_i128 =g4_m128_raw(G4_BITCAST<__m128>(v4));
g4_m128_lane<float>(v12, 0) = v11;
      v42 =g4_m128_lane<int32_t>(v5, 0);
      v15 = 1;
      v16 = 0;
    }
    v55 = 0.0;
    v17 = _mm_cmplt_ss(v13, v12);
    v56 = 0.0;
    v57 = 0.0;
    v58 = 0.0;
    *((uint32_t *)&v55 + v15) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v17, v7), 0))
                            | _mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_and_ps(m128i_i128, v17)));
    if (g4_m128_lane<float>(v12, 0) <=g4_m128_lane<float>(v13, 0) )
      v16 = 2;
    v18 = 0.0;
    *((uint32_t *)&v55 + v16) = v42 ^ 0x80000000;
g4_m128_raw(v19) = LODWORD(v55);
    *(float *)g4_m128_ptr<int32_t>(v19) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v19) * *(float *)g4_m128_ptr<int32_t>(v19)) + (float)(v56 * v56))
                            + (float)(v57 * v57);
    if ( *(float *)g4_m128_ptr<int32_t>(v19) > 0.0 )
    {
      v20 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v19);
      v21 = ((_mm_cvtsi128_si32(v19) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v19) >> 1));
      v22 = (float)(1.5
                  * (float)((float)(1.5 * *(float *)&v21)
                          - (float)((float)(v20 * *(float *)&v21) * (float)(*(float *)&v21 * *(float *)&v21))))
          - (float)((float)(v20
                          * (float)((float)(1.5 * *(float *)&v21)
                                  - (float)((float)(v20 * *(float *)&v21) * (float)(*(float *)&v21 * *(float *)&v21))))
                  * (float)((float)((float)(1.5 * *(float *)&v21)
                                  - (float)((float)(v20 * *(float *)&v21) * (float)(*(float *)&v21 * *(float *)&v21)))
                          * (float)((float)(1.5 * *(float *)&v21)
                                  - (float)((float)(v20 * *(float *)&v21) * (float)(*(float *)&v21 * *(float *)&v21)))));
      v18 = (float)(1.5 * v22) - (float)((float)(v20 * v22) * (float)(v22 * v22));
    }
    v37 = v56 * v18;
    v23 = v56 * v18;
g4_m128_raw(v24) = LODWORD(v57);
g4_m128_lane<float>(v24, 0) = v57 * v18;
    v43 = v55 * v18;
    v36 = v18 * v58;
    v39 = (float)(g4_m128_lane<float>(v5, 0) * (float)(v57 * v18)) - (float)((float)(v56 * v18) *g4_m128_lane<float>(v7, 0));
    v25 = (float)(g4_m128_lane<float>(v7, 0) * (float)(v55 * v18)) - (float)(*(float *)g4_m128_ptr<int32_t>(v4) * (float)(v57 * v18));
    v38 = (float)(*(float *)g4_m128_ptr<int32_t>(v4) * v23) - (float)(g4_m128_lane<float>(v5, 0) * v43);
g4_m128_raw(v26) = 0;
    if ( *(float *)g4_m128_ptr<int32_t>(v8) > 0.0 )
    {
      v27 = ((_mm_cvtsi128_si32(v8) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v8) >> 1));
g4_m128_raw(v26) = 0x3FC00000u;
      v28 = (float)(*(float *)&v27 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * *(float *)&v27)
                  * (float)(*(float *)&v27 * *(float *)&v27));
      v29 = (float)(v28 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * v28) * (float)(v28 * v28));
g4_m128_lane<float>(v26, 0) = (float)((float)(1.5 * v29)
                              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v8)) * v29) * (float)(v29 * v29)))
                      * *(float *)g4_m128_ptr<int32_t>(v8);
    }
g4_m128_lane<uint64_t>(v30, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v43)), g4_m128_from<__m128>(LODWORD(v37))), 0);
g4_m128_lane<uint64_t>(v30, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v24, g4_m128_from<__m128>(LODWORD(v36))), 0);
    v31 = _mm_mul_ps(v30, _mm_shuffle_ps(v26, v26, 0));
g4_m128_lane<uint64_t>(v32, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v49)), g4_m128_from<__m128>(LODWORD(v41))), 0);
g4_m128_lane<uint64_t>(v32, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v48)), g4_m128_from<__m128>(LODWORD(v47))), 0);
g4_m128_lane<uint64_t>(v33, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v46)), g4_m128_from<__m128>(LODWORD(v45))), 0);
g4_m128_lane<uint64_t>(v33, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v40)), g4_m128_from<__m128>(LODWORD(v44))), 0);
    v34 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v33, v32), G4_BITCAST<__m128>(xmmword_1C7CEA0)), v32);
    v59 = _mm_add_ps(_mm_mul_ps(G4_BITCAST<__m128>(xmmword_1C7CE90), v31), v34);
    v60 = _mm_add_ps(_mm_mul_ps(v31, G4_BITCAST<__m128>(xmmword_1C7CEB0)), v34);
    v61 = (float)((float)((float)(v46 - v49) * 0.85f) + v49) + (float)(v39 * 0.14999998f);
    v62 = (float)((float)((float)(v45 - v41) * 0.85f) + v41) + (float)(v25 * 0.14999998f);
    v63 = (float)((float)((float)(v40 - v48) * 0.85f) + v48) + (float)(0.14999998f * v38);
    v35 = *(uint32_t *)v6;
    v64 = (float)((float)((float)(v44 - v47) * 0.85f) + v47) + 0.0;
    v68 = (float)((float)(v44 - v47) * 0.85f) + v47;
    v65 = (float)((float)((float)(v46 - v49) * 0.85f) + v49) + (float)(v39 * -0.14999998f);
    v66 = (float)((float)((float)(v45 - v41) * 0.85f) + v41) + (float)(v25 * -0.14999998f);
    v67 = (float)((float)((float)(v40 - v48) * 0.85f) + v48) + (float)(-0.14999998f * v38);
    (*(void (**)(char *))(v35 + 72))(v50);
    (*(void (**)(char *))(*(uint32_t *)v6 + 72))(v50);
    (*(void (**)(char *))(*(uint32_t *)v6 + 72))(v50);
    (*(void (**)(char *))(*(uint32_t *)v6 + 72))(v50);
    return (const hkVector4f::Self *)(*(int (**)(char *))(*(uint32_t *)v6 + 72))(v50);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::displayFrame  (binary VA: 0x18e9120)
// Original: hkDebugDisplayHandler::displayFrame
// ----------------------------------------------------------------------------
const hkVector4f::Self * hkDebugDisplayHandler::displayFrame(hkDebugDisplayHandler::Self *self, const hkQsTransformf::Self *a2, unsigned int a3)
{
  typedef float _g4_t_v4;
  typedef float _g4_t_v5;
  typedef float _g4_t_v6;
  typedef float _g4_t_v7;
  typedef float _g4_t_v8[4];
  typedef float _g4_t_v9[4];
  typedef float _g4_t_v10[4];
  typedef g4_int128_t _g4_t_v11;
  typedef float _g4_t_v12[4];
  typedef float _g4_t_v13[4];
  typedef float _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v7)) > _g4_s3 ? (12u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v8)) > _g4_s4 ? (16u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v9)) > _g4_s5 ? (32u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v10)) > _g4_s6 ? (48u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v11)) > _g4_s7 ? (64u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v12)) > _g4_s8 ? (80u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v13)) > _g4_s9 ? (96u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v14)) > _g4_s10 ? (112u + sizeof(_g4_t_v14)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 64u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 80u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 96u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 112u);

  v11 = 0;
  hkVector4f::setTransformedPos((hkVector4f::Self *)&v4, a2, (const hkVector4f::Self *)&v11);
  *(uint64_t *)&v11 = a3;
  *((uint64_t *)&v11 + 1) = 0;
  hkVector4f::setTransformedPos((hkVector4f::Self *)v8, a2, (const hkVector4f::Self *)&v11);
  *(uint64_t *)((char *)&v11 + 4) = a3;
  LODWORD(v11) = 0;
  HIDWORD(v11) = 0;
  hkVector4f::setTransformedPos((hkVector4f::Self *)v9, a2, (const hkVector4f::Self *)&v11);
  *((uint64_t *)&v11 + 1) = a3;
  *(uint64_t *)&v11 = 0;
  hkVector4f::setTransformedPos((hkVector4f::Self *)v10, a2, (const hkVector4f::Self *)&v11);
  v12[0] = v8[0] - v4;
  v12[1] = v8[1] - v5;
  v12[2] = v8[2] - v6;
  v12[3] = v8[3] - v7;
  v13[0] = v9[0] - v4;
  v13[1] = v9[1] - v5;
  v13[2] = v9[2] - v6;
  v13[3] = v9[3] - v7;
  v14[0] = v10[0] - v4;
  v14[1] = v10[1] - v5;
  v14[2] = v10[2] - v6;
  v14[3] = v10[3] - v7;
  hkDebugDisplayHandler::displayArrow(self, (const hkVector4f::Self *)&v4, (const hkVector4f::Self *)v12);
  hkDebugDisplayHandler::displayArrow(self, (const hkVector4f::Self *)&v4, (const hkVector4f::Self *)v13);
  return hkDebugDisplayHandler::displayArrow(self, (const hkVector4f::Self *)&v4, (const hkVector4f::Self *)v14);
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::displayFrame  (binary VA: 0x18e93a0)
// Original: hkDebugDisplayHandler::displayFrame
// ----------------------------------------------------------------------------
const hkVector4f::Self * hkDebugDisplayHandler::displayFrame(hkDebugDisplayHandler::Self *self, const hkTransformf::Self *a2, unsigned int a3)
{
  uint8_t v4[56];

  hkQsTransformf::setFromTransform((hkQsTransformf::Self *)v4, a2);
  return hkDebugDisplayHandler::displayFrame(self, (const hkQsTransformf::Self *)v4, a3);
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::displayStar  (binary VA: 0x18e9400)
// Original: hkDebugDisplayHandler::displayStar
// ----------------------------------------------------------------------------
float * hkDebugDisplayHandler::displayStar(hkDebugDisplayHandler::Self *self, const hkVector4f::Self *a2, float a3)
{
  float *v3;
  float *result;
  hkDebugDisplayHandler::Self *v5;
  float v6; // xmm7_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  int v9;
  float v10; // xmm1_4
  typedef float _g4_t_v11;
  typedef float *_g4_t_v12;
  typedef uint8_t _g4_t_v13[4];
  typedef float _g4_t_v14;
  typedef float _g4_t_v15;
  typedef float _g4_t_v16;
  typedef float _g4_t_v17[15];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v17)) > _g4_s6 ? (36u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);

  v3 = &v14;
  LODWORD(v17[11]) = (uint32_t)(uintptr_t)(&self);
  v11 = a3;
  result = (float *)a2;
  v5 = self;
  do
  {
    v17[0] = 0.0;
    v6 = *result;
    v14 = 0.0;
    v15 = 0.0;
    v16 = 0.0;
    *v3 = v11;
    v12 = result;
    v7 = result[1];
    v8 = result[2];
    v9 = *(uint32_t *)v5;
    ++v3;
    v10 = result[3];
    v17[1] = v6 + v14;
    v17[5] = v6 - v14;
    v17[2] = v7 + v15;
    v17[6] = v7 - v15;
    v17[3] = v8 + v16;
    v17[7] = v8 - v16;
    v17[4] = v17[0] + v10;
    v17[8] = v10 - v17[0];
    (*(void (**)(uint8_t *))(v9 + 72))(v13);
    result = v12;
  }
  while ( v3 != v17 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::displayModelSpacePose  (binary VA: 0x18e9550)
// Original: hkDebugDisplayHandler::displayModelSpacePose
// ----------------------------------------------------------------------------
int hkDebugDisplayHandler::displayModelSpacePose(hkDebugDisplayHandler::Self *self, int a2, const int16_t *a3, const hkQsTransformf::Self *a4, const hkQsTransformf::Self *a5, unsigned int a6, int a7, int a8)
{
  int result;
  float *v9;
  __m128i v10;
  int v11; // xmm2_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm4_4
  float v16; // xmm6_4
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm7_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  int v27;
  int v28;
  int v29;
  int v30;
  typedef const hkQsTransformf::Self *_g4_t_v31;
  typedef float *_g4_t_v32;
  typedef const int16_t *_g4_t_v33;
  typedef float *_g4_t_v34;
  typedef float _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef hkDebugDisplayHandler::Self *_g4_t_v38;
  typedef uint8_t _g4_t_v39[4];
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48[4];
  typedef float _g4_t_v49;
  typedef float _g4_t_v50;
  typedef float _g4_t_v51;
  typedef int _g4_t_v52;
  typedef float _g4_t_v53[6];
  typedef hkDebugDisplayHandler::Self **_g4_t_v54;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v32)) > _g4_s1 ? (4u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v33)) > _g4_s2 ? (12u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v34)) > _g4_s3 ? (20u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v35)) > _g4_s4 ? (32u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v36)) > _g4_s5 ? (40u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v37)) > _g4_s6 ? (44u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v38)) > _g4_s7 ? (52u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v39)) > _g4_s8 ? (56u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v40)) > _g4_s9 ? (60u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v41)) > _g4_s10 ? (64u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v42)) > _g4_s11 ? (68u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v43)) > _g4_s12 ? (72u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v44)) > _g4_s13 ? (76u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v45)) > _g4_s14 ? (80u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v46)) > _g4_s15 ? (84u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v47)) > _g4_s16 ? (88u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v48)) > _g4_s17 ? (92u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v49)) > _g4_s18 ? (108u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v50)) > _g4_s19 ? (112u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v51)) > _g4_s20 ? (116u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v52)) > _g4_s21 ? (120u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v53)) > _g4_s22 ? (124u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (148u + sizeof(_g4_t_v54)) > _g4_s23 ? (148u + sizeof(_g4_t_v54)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 84u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 88u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 92u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 112u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 116u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 120u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 124u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 148u);

  v54 = &self;
  v38 = self;
  result = a2;
  v37 = a7;
  v33 = a3;
  v31 = a4;
  v9 = (float *)a4;
  v36 = a8;
  if ( (int16_t)a2 > 0 )
  {
    v34 = (float *)a5;
    v32 = (float *)((char *)a4 + 48 * (uint16_t)(a2 - 1) + 48);
    hkVector4f::setTransformedPos((hkVector4f::Self *)&v40, a5, a4);
    while ( 1 )
    {
      v30 = *v33;
      if ( (uint16_t)v30 == 0xFFFF )
      {
        *(g4_int128_t *)v53 = 0;
        hkVector4f::setTransformedPos((hkVector4f::Self *)v53, (const hkQsTransformf::Self *)v34, (const hkVector4f::Self *)v53);
        (*(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *))(*(uint32_t *)v38 + 72))(
          v39,
          v38,
          &v40,
          v53);
        v35 = 0.25;
      }
      else
      {
        hkVector4f::setTransformedPos(
          (hkVector4f::Self *)v53,
          (const hkQsTransformf::Self *)v34,
          (const hkQsTransformf::Self *)((char *)v31 + 48 * v30));
        (*(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *))(*(uint32_t *)v38 + 72))(
          v39,
          v38,
          &v40,
          v53);
g4_m128_raw(v10) = LODWORD(v40);
        *(float *)g4_m128_ptr<int32_t>(v10) = (float)((float)((float)(v40 - v53[0]) * (float)(v40 - v53[0]))
                                        + (float)((float)(v41 - v53[1]) * (float)(v41 - v53[1])))
                                + (float)((float)(v42 - v53[2]) * (float)(v42 - v53[2]));
        if ( *(float *)g4_m128_ptr<int32_t>(v10) <= 0.0 )
        {
          v35 = 0.025f;
        }
        else
        {
          v11 = ((_mm_cvtsi128_si32(v10) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v10) >> 1));
          v12 = (float)(*(float *)&v11 * 1.5)
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * *(float *)&v11)
                      * (float)(*(float *)&v11 * *(float *)&v11));
          v13 = (float)(v12 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * v12) * (float)(v12 * v12));
          v14 = (float)((float)(1.5 * v13)
                      - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v10)) * v13) * (float)(v13 * v13)))
              * *(float *)g4_m128_ptr<int32_t>(v10);
          if ( v14 <= 10.0 )
            v35 = v14 >= 0.1f ? v14 * 0.25 : 0.025f;
          else
            v35 = 2.5;
        }
      }
      v47 = v43;
      v15 = v34[5];
      v16 = v34[4];
      v17 = v9[4];
      v18 = v9[5];
      v45 = v41;
      v44 = v40;
      v19 = v34[6];
      v46 = v42;
      v50 = 0.0;
      v20 = v34[7];
      v9 += 12;
      v21 = (float)((float)((float)(*(v9 - 6) * v15) - (float)(v19 * v18)) + (float)(v20 * v17))
          + (float)(*(v9 - 5) * v16);
      v22 = *(v9 - 6) * v16;
      v48[0] = v21;
      v23 = (float)(v34[6] * v17) - v22;
      v49 = v35;
      v48[1] = (float)(v23 + (float)(v20 * v18)) + (float)(*(v9 - 5) * v15);
      v24 = *(v9 - 6) * v20;
      v25 = v20 * *(v9 - 5);
      v26 = (float)((float)(v16 * v17) + (float)(v15 * v18)) + (float)(v34[6] * *(v9 - 6));
      v48[2] = (float)((float)((float)(v18 * v16) - (float)(v17 * v15)) + v24) + (float)(v34[6] * *(v9 - 5));
      v48[3] = v25 - v26;
      v51 = 0.0;
      v52 = 0;
      hkVector4f::setRotatedDir((hkVector4f::Self *)v53, (const hkQuaternionf::Self *)v48, (const hkVector4f::Self *)&v49);
      v27 = *(uint32_t *)v38;
      v31 = (const hkQsTransformf::Self *)v36;
      v53[0] = v53[0] + v40;
      v53[1] = v53[1] + v41;
      v53[2] = v53[2] + v42;
      v53[3] = v53[3] + v43;
      (*(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *, int, int))(v27 + 72))(
        v39,
        v38,
        &v40,
        v53,
        2147418112,
        v37);
      v40 = v44;
      v41 = v45;
      v42 = v46;
      v43 = v47;
      v49 = 0.0;
      v50 = v35;
      v51 = 0.0;
      v52 = 0;
      hkVector4f::setRotatedDir((hkVector4f::Self *)v53, (const hkQuaternionf::Self *)v48, (const hkVector4f::Self *)&v49);
      v28 = *(uint32_t *)v38;
      v53[0] = v53[0] + v40;
      v53[1] = v53[1] + v41;
      v53[2] = v53[2] + v42;
      v53[3] = v53[3] + v43;
      (*(void (**)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *, int, int, int))(v28 + 72))(
        v39,
        v38,
        &v40,
        v53,
        2130771712,
        v37,
        v36);
      v40 = v44;
      v41 = v45;
      v42 = v46;
      v43 = v47;
      v49 = 0.0;
      v51 = v35;
      v50 = 0.0;
      v52 = 0;
      hkVector4f::setRotatedDir((hkVector4f::Self *)v53, (const hkQuaternionf::Self *)v48, (const hkVector4f::Self *)&v49);
      v29 = *(uint32_t *)v38;
      v53[0] = v53[0] + v40;
      v53[1] = v53[1] + v41;
      v53[2] = v53[2] + v42;
      v53[3] = v53[3] + v43;
      result = (*(int (**)(uint8_t *, hkDebugDisplayHandler::Self *, float *, float *, int, int, int))(v29 + 72))(
                 v39,
                 v38,
                 &v40,
                 v53,
                 2130706687,
                 v37,
                 v36);
      ++v33;
      if ( v9 == v32 )
        break;
      hkVector4f::setTransformedPos((hkVector4f::Self *)&v40, (const hkQsTransformf::Self *)v34, (const hkVector4f::Self *)v9);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::displayLocalSpacePose  (binary VA: 0x18e9ba0)
// Original: hkDebugDisplayHandler::displayLocalSpacePose
// ----------------------------------------------------------------------------
hkLifoAllocator::Self * hkDebugDisplayHandler::displayLocalSpacePose(hkDebugDisplayHandler::Self *self, int a2, int16_t *a3, const hkQsTransformf::Self *a4, const hkQsTransformf::Self *a5, unsigned int a6, int a7, int a8)
{
  hkLifoAllocator::Self *v8;
  hkQsTransformf::Self *v9;
  float *v10;
  hkQsTransformf::Self *v11;
  char *v12;
  int v13;
  float v14; // xmm3_4
  float v15; // xmm6_4
  int v16;
  float *v17;
  float v18; // xmm1_4
  float v19; // xmm5_4
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm7_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm6_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm5_4
  float v29; // xmm1_4
  hkLifoAllocator::Self *result;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  char *v37;
  float v38;
  int16_t *v39;
  hkQsTransformf::Self *v40;
  char *v41;
  signed int v42;
  hkLifoAllocator::Self **address;

  address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v8 = *address;
  v9 = *((hkQsTransformf::Self **)*address + 3);
  v40 = v9;
  v42 = (48 * a2 + 127) & 0xFFFFFF80;
  if ( v42 <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(v9) + v42 <= *((uint32_t *)v8 + 4) )
    *((uint32_t *)v8 + 3) = (uint32_t)(uintptr_t)((char *)v9 + v42);
  else
    v40 = (hkQsTransformf::Self *)hkLifoAllocator::allocateFromNewSlab(v8, v42);
  if ( a2 > 0 )
  {
    v39 = a3;
    v10 = (float *)a4;
    v11 = v40;
    v41 = (char *)a4 + 32;
    v12 = (char *)v40 + 32;
    v13 = 0;
    v37 = (char *)v40 + 16;
    do
    {
      v14 = *v10;
      v15 = v10[1];
      v38 = *v10;
      v16 = *v39;
      v17 = (float *)((char *)v40 + 48 * v16);
      v31 = v10[2];
      if ( (uint16_t)v16 == 0xFFFF )
        v17 = (float *)&hkQsTransformf_identityStorage;
      v18 = v17[7];
      v10 += 12;
      v19 = v17[4];
      v11 = (hkQsTransformf::Self *)((char *)v11 + 48);
      v33 = v17[5];
      v20 = (float)(v18 * v18) - 0.5;
      v35 = v17[6];
      v21 = (float)((float)(v14 * v19) + (float)(v15 * v33)) + (float)(v31 * v35);
      v22 = (float)((float)(*(v10 - 9) * v20) + (float)(v18 * v21)) + (float)(0.0 * v18);
      *((float *)v11 - 12) = (float)((float)((float)((float)(v14 * v20) + (float)(v19 * v21))
                                           + (float)((float)((float)(v33 * v31) - (float)(v15 * v35)) * v18))
                                   + (float)((float)((float)(v14 * v20) + (float)(v19 * v21))
                                           + (float)((float)((float)(v33 * v31) - (float)(v15 * v35)) * v18)))
                           + *v17;
      v23 = (float)((float)(v15 * v20) + (float)(v33 * v21))
          + (float)((float)((float)(v38 * v35) - (float)(v19 * v31)) * v18);
      *((float *)v11 - 11) = (float)(v23 + v23) + v17[1];
      v24 = (float)((float)(v20 * v31) + (float)(v35 * v21))
          + (float)((float)((float)(v19 * v15) - (float)(v38 * v33)) * v18);
      *((float *)v11 - 10) = (float)(v24 + v24) + v17[2];
      *((float *)v11 - 9) = (float)(v22 + v22) + v17[3];
      v25 = v17[4];
      v26 = v17[5];
      v27 = *(float *)((char *)a4 + v13 + 16);
      v28 = *(float *)((char *)a4 + v13 + 20);
      v32 = v17[7];
      v34 = *(float *)((char *)a4 + v13 + 24);
      v36 = v17[6];
      v29 = *(float *)((char *)a4 + v13 + 28);
      *(float *)&v37[v13] = (float)((float)((float)(v34 * v26) - (float)(v36 * v28)) + (float)(v32 * v27))
                          + (float)(v25 * v29);
      *(float *)&v37[v13 + 4] = (float)((float)((float)(v36 * v27) - (float)(v34 * v25)) + (float)(v32 * v28))
                              + (float)(v26 * v29);
      *(float *)&v37[v13 + 8] = (float)((float)((float)(v28 * v25) - (float)(v27 * v26)) + (float)(v32 * v34))
                              + (float)(v36 * v29);
      *(float *)&v37[v13 + 12] = (float)(v29 * v32)
                               - (float)((float)((float)(v25 * v27) + (float)(v26 * v28)) + (float)(v36 * v34));
      ++v39;
      *(float *)&v12[v13] = v17[8] * *(float *)&v41[v13];
      *(float *)&v12[v13 + 4] = v17[9] * *(float *)&v41[v13 + 4];
      *(float *)&v12[v13 + 8] = v17[10] * *(float *)&v41[v13 + 8];
      *(float *)&v12[v13 + 12] = v17[11] * *(float *)&v41[v13 + 12];
      v13 += 48;
    }
    while ( v13 != 48 * a2 );
  }
  hkDebugDisplayHandler::displayModelSpacePose(self, a2, a3, v40, a5, a6, a7, a8);
  result = *address;
  if ( v42 > *((uint32_t *)*address + 2)
    || *((hkQsTransformf::Self **)result + 3) != (hkQsTransformf::Self *)((char *)v40 + v42)
    || v40 == *((hkQsTransformf::Self **)result + 5) )
  {
    return hkLifoAllocator::slowBlockFree(*address, (char *)v40, v42);
  }
  *((uint32_t *)result + 3) = (uint32_t)(uintptr_t)(v40);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::addGeometryHash  (binary VA: 0x18ea040)
// Original: hkDebugDisplayHandler::addGeometryHash
// ----------------------------------------------------------------------------
hkDebugDisplayHandler::Self * hkDebugDisplayHandler::addGeometryHash(hkDebugDisplayHandler::Self *self, const hkReferencedObject::Self *a2, hkDisplayGeometryBuilder::Self *a3, const uint64_t *a4, unsigned int a5, int a6, int a7)
{
  hkDebugDisplayHandler::Self *v7;
  int v8;
  float v10[14];

  LODWORD(v10[10]) = (uint32_t)(uintptr_t)(&self);
  v7 = self;
  v10[0] = 3.40282e38f;
  v10[1] = 3.40282e38f;
  v10[4] = -3.40282e38f;
  v10[2] = 3.40282e38f;
  v10[3] = 3.40282e38f;
  v10[5] = -3.40282e38f;
  v10[6] = -3.40282e38f;
  v8 = *(uint32_t *)a2;
  v10[7] = -3.40282e38f;
  (*(void (**)(hkDebugDisplayHandler::Self *, const hkReferencedObject::Self *, hkDisplayGeometryBuilder::Self *, const uint64_t *, unsigned int, float *, uint32_t, g4_int128_t *, int, int))(v8 + 144))(
    self,
    a2,
    a3,
    a4,
    a5,
    v10,
    0,
    (g4_int128_t *)(&xmmword_1D12FD0),
    a6,
    a7);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayHandler::addGeometryLazily  (binary VA: 0x18ea140)
// Original: hkDebugDisplayHandler::addGeometryLazily
// ----------------------------------------------------------------------------
hkDebugDisplayHandler::Self * hkDebugDisplayHandler::addGeometryLazily(hkDebugDisplayHandler::Self *self, const hkReferencedObject::Self *a2, hkDisplayGeometryBuilder::Self *a3, const hkTransformf::Self *a4, int a5, int a6, void *a7, hkDebugDisplayHandler::Self *a8)
{
  int v8;
  hkReferencedObject::Self **v9;
  int v10;
  int v11;
  int v12;
  hkReferencedObject::Self *v13;
  int v14;
  int v15;
  int32_t v16; // kr00_4
  int32_t v17;
  int32_t v18; // ett
  char *v19;
  bool v20;
  int v21;
  int savedregs;
  void *retaddr;
  typedef hkDebugDisplayHandler::Self *_g4_t_v23;
  typedef void *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef const hkReferencedObject::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef hkDebugDisplayHandler::Self *_g4_t_v29;
  typedef uint8_t _g4_t_v30[12];
  typedef hkReferencedObject::Self *_g4_t_v31;
  typedef hkReferencedObject::Self **_g4_t_v32;
  typedef int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef uint32_t _g4_t_v35[133];
  typedef int _g4_t_v36;
  enum : size_t {
    _g4_s0 = 720u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v25)) > _g4_s2 ? (16u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v26)) > _g4_s3 ? (20u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v27)) > _g4_s4 ? (24u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v28)) > _g4_s5 ? (28u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v29)) > _g4_s6 ? (36u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v30)) > _g4_s7 ? (44u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v31)) > _g4_s8 ? (56u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v32)) > _g4_s9 ? (60u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v33)) > _g4_s10 ? (64u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v34)) > _g4_s11 ? (68u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v35)) > _g4_s12 ? (104u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (636u + sizeof(_g4_t_v36)) > _g4_s13 ? (636u + sizeof(_g4_t_v36)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 636u);

  v35[130] = (uint32_t)(uintptr_t)(&self);
  v29 = self;
  v27 = a2;
  v26 = a5;
  v25 = a6;
  v24 = a7;
  v23 = a8;
  v31 = (hkReferencedObject::Self *)&v34;
  v8 = *(uint32_t *)a4;
  v32 = nullptr;
  v33 = -2147483640;
  (*(void (**)(const hkTransformf::Self *, hkDisplayGeometryBuilder::Self *, hkReferencedObject::Self **))(v8 + 20))(a4, a3, &v31);
  v9 = v32;
  v10 = (int)(uintptr_t)(v32) - 1;
  if ( (int)(uintptr_t)(v32) - 1 >= 0 )
  {
    v11 = 4 * v10;
    do
    {
      while ( 1 )
      {
        v12 = *(uint32_t *)((char *)v31 + v11);
        if ( *(uint32_t *)(v12 + 80) == 6 && *(uint32_t *)(v12 + 8) == 0 )
        {
          hkErrStream::Construct((hkErrStream::Self *)v30, (hkString::Self *)v35, 512);
          hkOstream::opShl((int)(uintptr_t)(v30), (hkString::Self *)"Unable to build display geometry from source");
          hkError::messageReport((hkError::Self *)0xFFFFFFFF, (int)(uintptr_t)(v35), "hkDebugDisplayHandler.cpp", dword_E4, savedregs);
          hkErrStream::Destroy((hkErrStream::Self *)v30);
          v13 = v31;
          v14 = *(uint32_t *)((char *)v31 + v11);
          if ( *(uint16_t *)(v14 + 6) != 0 )
          {
            v28 = v10;
            do
            {
              v16 = *(uint32_t *)(v14 + 4);
              HIWORD(v15) = HIWORD(v16);
              LOWORD(v15) = 0;
              v17 = v15 | (uint16_t)(v16 - 1);
              v18 = v16;
            }
            while ( v18 != __sync_val_compare_and_swap((volatile int32_t *)(v14 + 4), v18, v17) );
            v10 = v28;
            if ( (uint16_t)v17 == 0 )
              G4_VCALL<void>(v14, 16);
            v13 = v31;
          }
          v19 = (char *)v32 - 1;
          v20 = v10 == (uint32_t)(uintptr_t)(v32) - 1;
          v32 = (hkReferencedObject::Self **)((char *)v32 - 1);
          if ( !v20 )
            break;
        }
        --v10;
        v11 -= 4;
        if ( v10 == -1 )
          goto LABEL_14;
      }
      --v10;
      *(uint32_t *)((char *)v13 + v11) = *((uint32_t *)v13 + (uint32_t)(uintptr_t)(v19));
      v11 -= 4;
    }
    while ( v10 != -1 );
LABEL_14:
    v9 = v32;
  }
  *(uint32_t *)v29 = 1;
  if ( (int)(uintptr_t)(v9) > 0 )
  {
    v21 = *(uint32_t *)v27;
    self = v23;
    savedregs = v25;
    retaddr = v24;
    a2 = nullptr;
    v36 = v26;
    v35[132] = (uint32_t)(uintptr_t)(&v31);
    v35[131] = (uint32_t)(uintptr_t)(v27);
    (*(void (**)(hkDebugDisplayHandler::Self *))(v21 + 12))(v29);
    v9 = v32;
  }
  hkReferencedObject::removeReferences(v31, v9, 4, v36);
  v32 = nullptr;
  if ( v33 >= 0 )
    (*(void (**)(uint32_t *, hkReferencedObject::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v31,
      4 * v33);
  return v29;
}

// ----------------------------------------------------------------------------
// Function: hkRemoteObjectProcess::getProcessTag  (binary VA: 0x18ea400)
// Original: hkRemoteObjectProcess::getProcessTag
// ----------------------------------------------------------------------------
int hkRemoteObjectProcess::getProcessTag()
{
  return hkRemoteObjectProcess::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkRemoteObjectProcess::init  (binary VA: 0x18ea430)
// Original: hkRemoteObjectProcess::init
// ----------------------------------------------------------------------------
void hkRemoteObjectProcess::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkRemoteObjectProcess::getConsumableCommands  (binary VA: 0x18ea450)
// Original: hkRemoteObjectProcess::getConsumableCommands
// ----------------------------------------------------------------------------
int * hkRemoteObjectProcess::getConsumableCommands(hkRemoteObjectProcess::Self *self, uint8_t **a2, int *a3)
{
  *a2 = (uint8_t *)&unk_20CB448;
  *a3 = 1;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkRemoteObjectProcess::Destroy  (binary VA: 0x18ea490)
// Original: hkRemoteObjectProcess::~hkRemoteObjectProcess
// ----------------------------------------------------------------------------
void hkRemoteObjectProcess::Destroy(hkRemoteObjectProcess::Self *self)
{
  int v1;

  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A8B54);
  v1 = *((uint32_t *)self + 10);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8B28);
  *((uint32_t *)self + 9) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      4 * v1);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3A48);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkRemoteObjectProcess::Destroy_ea18ea520  (binary VA: 0x18ea520)
// Original: hkRemoteObjectProcess::~hkRemoteObjectProcess
// ----------------------------------------------------------------------------
void hkRemoteObjectProcess::Destroy_ea18ea520(hkRemoteObjectProcess::Self *self)
{
  int v1;
  int v2;

  hkRemoteObjectProcess::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 44;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}



// ============================================================================
// Address:   0x18ea590 (size: 29 bytes)
// Symbol:    _ZN32hkRemoteObjectClientSideListener10sendObjectEP18hkReferencedObject
// Demangled: hkRemoteObjectClientSideListener::sendObject(hkReferencedObject *)
// ============================================================================
int (*hkRemoteObjectClientSideListener::sendObject(
        hkRemoteObjectClientSideListener *self,
        hkReferencedObject::Self *a2))(hkReferencedObject::Self *)
{
  int (*result)(hkReferencedObject::Self *);

  result = *((int (**)(hkReferencedObject::Self *))self + 1);
  if ( result != nullptr )
    return (int (*)(hkReferencedObject::Self *))result(a2);
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkRemoteObjectProcess::Construct  (binary VA: 0x18ea5b0)
// Original: hkRemoteObjectProcess::hkRemoteObjectProcess
// ----------------------------------------------------------------------------
void hkRemoteObjectProcess::Construct(hkRemoteObjectProcess::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)self + 12) = 1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8B28);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A8B54);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkRemoteObjectProcess::create  (binary VA: 0x18ea600)
// Original: hkRemoteObjectProcess::create
// ----------------------------------------------------------------------------
char * hkRemoteObjectProcess::create()
{
  int address;
  hkRemoteObjectProcess::Self *v1;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v1 = (hkRemoteObjectProcess::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                  *(uint32_t *)(*(uint32_t *)address + 44),
                                  44);
  hkRemoteObjectProcess::Construct(v1);
  if ( v1 != nullptr )
    return (char *)v1 + 8;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkRemoteObjectProcess::addListener  (binary VA: 0x18ea660)
// Original: hkRemoteObjectProcess::addListener
// ----------------------------------------------------------------------------
int hkRemoteObjectProcess::addListener(uint32_t *a1, int a2)
{
  int v2;
  int result;
  int v4;

  v2 = a1[9];
  if ( v2 == (a1[10] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 8), 4, v4);
    v2 = a1[9];
  }
  result = a1[8];
  *(uint32_t *)(result + 4 * v2) = a2;
  ++a1[9];
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkRemoteObjectProcess::removeListener  (binary VA: 0x18ea6d0)
// Original: hkRemoteObjectProcess::removeListener
// ----------------------------------------------------------------------------
void hkRemoteObjectProcess::removeListener(int a1, int a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;

  v2 = *(uint32_t *)(a1 + 36);
  if ( v2 > 0 )
  {
    v3 = *(uint32_t **)(a1 + 32);
    if ( *v3 == a2 )
    {
      v5 = 0;
      v4 = 0;
LABEL_8:
      v6 = v2 - 1;
      *(uint32_t *)(a1 + 36) = v6;
      if ( v4 != v6 )
        v3[v5] = v3[v6];
    }
    else
    {
      v4 = 0;
      while ( ++v4 != v2 )
      {
        v5 = v4;
        if ( v3[v4] == a2 )
          goto LABEL_8;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkRemoteObjectProcess::sendObject  (binary VA: 0x18ea730)
// Original: hkRemoteObjectProcess::sendObject
// ----------------------------------------------------------------------------
int hkRemoteObjectProcess::sendObject(int a1, int a2, int a3)
{
  int result;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  if ( a1 != 0 && a2 != 0 )
  {
    hkStructureLayout::Construct(&v4, &hkStructureLayout::MsvcWin32LayoutRules);
    return hkObjectSerialize::writeObject(a1, a2, 1, a3 == 0, v4, 0, 2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkRemoteObjectProcess::registerProcess  (binary VA: 0x18ea7c0)
// Original: hkRemoteObjectProcess::registerProcess
// ----------------------------------------------------------------------------
int hkRemoteObjectProcess::registerProcess()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "RemoteObject",
             (int)(uintptr_t)(hkRemoteObjectProcess::create));
  hkRemoteObjectProcess::m_tag = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkRemoteObjectProcess::consumeCommand  (binary VA: 0x18ea9c0)
// Original: hkRemoteObjectProcess::consumeCommand
// ----------------------------------------------------------------------------
void hkRemoteObjectProcess::consumeCommand(hkRemoteObjectProcess::Self *self, char a2)
{
  if ( a2 == 64 )
    sub_18EA810(self);
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::getProcessTag  (binary VA: 0x18ea9f0)
// Original: hkDebugDisplayProcess::getProcessTag
// ----------------------------------------------------------------------------
int hkDebugDisplayProcess::getProcessTag()
{
  return hkDebugDisplayProcess::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::addGeometry  (binary VA: 0x18eaa20)
// Original: hkDebugDisplayProcess::addGeometry
// ----------------------------------------------------------------------------
int hkDebugDisplayProcess::addGeometry(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 24) + 12))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::addGeometryInstance  (binary VA: 0x18eaa90)
// Original: hkDebugDisplayProcess::addGeometryInstance
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::addGeometryInstance(hkDebugDisplayProcess::Self *self, unsigned int a2, const hkTransformf::Self *a3, unsigned int a4, int a5, unsigned int a6)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**(uint32_t **)(a2 + 24) + 16))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::setGeometryPickable  (binary VA: 0x18eaaf0)
// Original: hkDebugDisplayProcess::setGeometryPickable
// ----------------------------------------------------------------------------
int hkDebugDisplayProcess::setGeometryPickable(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 24) + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::displayGeometry  (binary VA: 0x18eab40)
// Original: hkDebugDisplayProcess::displayGeometry
// ----------------------------------------------------------------------------
int hkDebugDisplayProcess::displayGeometry(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 24) + 112))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::displayGeometry_ea18eaba0  (binary VA: 0x18eaba0)
// Original: hkDebugDisplayProcess::displayGeometry
// ----------------------------------------------------------------------------
int hkDebugDisplayProcess::displayGeometry_ea18eaba0(int a1, int a2)
{
  (*(void (**)(int))(**(uint32_t **)(a2 + 24) + 116))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::setGeometryVisibility  (binary VA: 0x18eac00)
// Original: hkDebugDisplayProcess::setGeometryVisibility
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::setGeometryVisibility(hkDebugDisplayProcess::Self *self, int a2, bool a3, unsigned int a4, int a5)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**(uint32_t **)(a2 + 24) + 24))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::setGeometryColor  (binary VA: 0x18eac60)
// Original: hkDebugDisplayProcess::setGeometryColor
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::setGeometryColor(hkDebugDisplayProcess::Self *self, unsigned int a2, unsigned int a3, int a4)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**(uint32_t **)(a2 + 24) + 28))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::setGeometryTransparency  (binary VA: 0x18eacb0)
// Original: hkDebugDisplayProcess::setGeometryTransparency
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::setGeometryTransparency(hkDebugDisplayProcess::Self *self, float a2, int64_t a3)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**(uint32_t **)(LODWORD(a2) + 24) + 32))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::updateGeometry  (binary VA: 0x18ead10)
// Original: hkDebugDisplayProcess::updateGeometry
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::updateGeometry(hkDebugDisplayProcess::Self *self, const hkTransformf::Self *a2, unsigned int a3, int a4)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**((uint32_t **)a2 + 6) + 36))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::updateGeometry  (binary VA: 0x18ead60)
// Original: hkDebugDisplayProcess::updateGeometry
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::updateGeometry(hkDebugDisplayProcess::Self *self, const hkMatrix4f::Self *a2, unsigned int a3, int a4)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**((uint32_t **)a2 + 6) + 40))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::skinGeometry  (binary VA: 0x18eadb0)
// Original: hkDebugDisplayProcess::skinGeometry
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::skinGeometry(hkDebugDisplayProcess::Self *self, unsigned int *a2, int a3, const hkMatrix4f::Self *a4, int a5, const hkMatrix4f::Self *a6, int a7)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(*(uint32_t *)a2[6] + 48))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::removeGeometry  (binary VA: 0x18eae20)
// Original: hkDebugDisplayProcess::removeGeometry
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::removeGeometry(hkDebugDisplayProcess::Self *self, unsigned int a2, int a3, unsigned int a4, int a5)
{
  (*(void (**)(hkDebugDisplayProcess::Self *, uint32_t, int, uint32_t, int))(**(uint32_t **)(a2 + 24) + 60))(
    self,
    *(uint32_t *)(a2 + 24),
    a3,
    hkDebugDisplayProcess::m_tag,
    a5);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::updateCamera  (binary VA: 0x18eae90)
// Original: hkDebugDisplayProcess::updateCamera
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::updateCamera(hkDebugDisplayProcess::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, float a5, int64_t a6, const char *a7)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**((uint32_t **)a2 + 6) + 64))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::displayPoint  (binary VA: 0x18eaf10)
// Original: hkDebugDisplayProcess::displayPoint
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::displayPoint(hkDebugDisplayProcess::Self *self, const hkVector4f::Self *a2, unsigned int a3, int a4, int a5)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**((uint32_t **)a2 + 6) + 68))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::displayLine  (binary VA: 0x18eaf70)
// Original: hkDebugDisplayProcess::displayLine
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::displayLine(hkDebugDisplayProcess::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, unsigned int a4, int a5, int a6)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**((uint32_t **)a2 + 6) + 72))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::displayTriangle  (binary VA: 0x18eafd0)
// Original: hkDebugDisplayProcess::displayTriangle
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::displayTriangle(hkDebugDisplayProcess::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, unsigned int a5, int a6, int a7)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**((uint32_t **)a2 + 6) + 76))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::displayPoint2d  (binary VA: 0x18eb040)
// Original: hkDebugDisplayProcess::displayPoint2d
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::displayPoint2d(hkDebugDisplayProcess::Self *self, const hkVector4f::Self *a2, unsigned int a3, int a4, int a5)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**((uint32_t **)a2 + 6) + 88))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::displayLine2d  (binary VA: 0x18eb0a0)
// Original: hkDebugDisplayProcess::displayLine2d
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::displayLine2d(hkDebugDisplayProcess::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, unsigned int a4, int a5, int a6)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**((uint32_t **)a2 + 6) + 92))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::displayTriangle2d  (binary VA: 0x18eb100)
// Original: hkDebugDisplayProcess::displayTriangle2d
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::displayTriangle2d(hkDebugDisplayProcess::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, unsigned int a5, int a6, int a7)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**((uint32_t **)a2 + 6) + 96))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::displayText2d  (binary VA: 0x18eb170)
// Original: hkDebugDisplayProcess::displayText2d
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::displayText2d(hkDebugDisplayProcess::Self *self, const char *a2, const hkVector4f::Self *a3, float a4, int64_t a5, int a6)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**((uint32_t **)a2 + 6) + 100))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::displayText  (binary VA: 0x18eb1e0)
// Original: hkDebugDisplayProcess::displayText
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::displayText(hkDebugDisplayProcess::Self *self, const char *a2, unsigned int a3, int a4, int a5)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**((uint32_t **)a2 + 6) + 80))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::display3dText  (binary VA: 0x18eb240)
// Original: hkDebugDisplayProcess::display3dText
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::display3dText(hkDebugDisplayProcess::Self *self, const char *a2, const hkVector4f::Self *a3, unsigned int a4, int a5, int a6)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**((uint32_t **)a2 + 6) + 84))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::displayAnnotation  (binary VA: 0x18eb2a0)
// Original: hkDebugDisplayProcess::displayAnnotation
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::displayAnnotation(hkDebugDisplayProcess::Self *self, const char *a2, int a3, int a4)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**((uint32_t **)a2 + 6) + 104))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::sendMemStatsDump  (binary VA: 0x18eb2f0)
// Original: hkDebugDisplayProcess::sendMemStatsDump
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::sendMemStatsDump(hkDebugDisplayProcess::Self *self, const char *a2, int a3)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**((uint32_t **)a2 + 6) + 120))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::holdImmediate  (binary VA: 0x18eb340)
// Original: hkDebugDisplayProcess::holdImmediate
// ----------------------------------------------------------------------------
hkDebugDisplayProcess::Self * hkDebugDisplayProcess::holdImmediate(hkDebugDisplayProcess::Self *self, int a2)
{
  (*(void (**)(hkDebugDisplayProcess::Self *))(**(uint32_t **)(a2 + 24) + 124))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::Destroy  (binary VA: 0x18eb380)
// Original: hkDebugDisplayProcess::~hkDebugDisplayProcess
// ----------------------------------------------------------------------------
void hkDebugDisplayProcess::Destroy(hkDebugDisplayProcess::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8BC8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A8C4C);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A8C78);
  hkDebugDisplay::removeDebugDisplayHandler(
    (hkDebugDisplay::Self *)hkSingleton<hkDebugDisplay::Self>::s_instance,
    (hkDebugDisplayProcess::Self *)((char *)self + 32));
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A8A68);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3A48);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::Destroy_ea18eb420  (binary VA: 0x18eb420)
// Original: hkDebugDisplayProcess::~hkDebugDisplayProcess
// ----------------------------------------------------------------------------
void hkDebugDisplayProcess::Destroy_ea18eb420(hkDebugDisplayProcess::Self *self)
{
  int v1;
  int v2;

  hkDebugDisplayProcess::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 36;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::registerProcess  (binary VA: 0x18eb4a0)
// Original: hkDebugDisplayProcess::registerProcess
// ----------------------------------------------------------------------------
int hkDebugDisplayProcess::registerProcess()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Debug Display",
             (int)(uintptr_t)(hkDebugDisplayProcess::create));
  hkDebugDisplayProcess::m_tag = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::Construct  (binary VA: 0x18eb4f0)
// Original: hkDebugDisplayProcess::hkDebugDisplayProcess
// ----------------------------------------------------------------------------
void hkDebugDisplayProcess::Construct(hkDebugDisplayProcess::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8BC8);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A8C78);
  *((uint8_t *)self + 12) = 1;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A8C4C);
  if ( hkDebugDisplayProcess::m_tag == 0 )
    hkDebugDisplayProcess::registerProcess();
  hkDebugDisplay::addDebugDisplayHandler(
    (hkDebugDisplay::Self *)hkSingleton<hkDebugDisplay::Self>::s_instance,
    (hkDebugDisplayProcess::Self *)((char *)self + 32));
}

// ----------------------------------------------------------------------------
// Function: hkDebugDisplayProcess::create  (binary VA: 0x18eb560)
// Original: hkDebugDisplayProcess::create
// ----------------------------------------------------------------------------
char * hkDebugDisplayProcess::create()
{
  int address;
  hkDebugDisplayProcess::Self *v1;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v1 = (hkDebugDisplayProcess::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                  *(uint32_t *)(*(uint32_t *)address + 44),
                                  36);
  hkDebugDisplayProcess::Construct(v1);
  if ( v1 != nullptr )
    return (char *)v1 + 8;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkReplayStreamReader::isOk  (binary VA: 0x18eb5c0)
// Original: hkReplayStreamReader::isOk
// ----------------------------------------------------------------------------
hkReplayStreamReader::Self * hkReplayStreamReader::isOk(hkReplayStreamReader::Self *self, int a2)
{
  (*(void (**)(hkReplayStreamReader::Self *))(**(uint32_t **)(a2 + 8) + 20))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkReplayStreamReader::read  (binary VA: 0x18eb5f0)
// Original: hkReplayStreamReader::read
// ----------------------------------------------------------------------------
size_t hkReplayStreamReader::read(hkReplayStreamReader::Self *self, hkString::Self *a2, size_t a3)
{
  hkReplayStreamReader::Self *v3;
  size_t v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v14;
  typedef int _g4_t_v15;
  typedef int *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef size_t _g4_t_v18;
  typedef hkString::Self *_g4_t_v19;
  typedef uint32_t _g4_t_v20[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v18)) > _g4_s3 ? (8u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v19)) > _g4_s4 ? (12u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v20)) > _g4_s5 ? (16u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);

  v20[3] = (uint32_t)(uintptr_t)(&self);
  v3 = self;
  v4 = a3;
  v19 = a2;
  v5 = *((uint32_t *)self + 3);
  v6 = *((uint32_t *)self + 5);
  v7 = v5 + a3 - v6;
  if ( v7 > 0 )
  {
    v8 = *((uint32_t *)self + 6) & 0x3FFFFFFF;
    v16 = (int *)((char *)self + 16);
    v9 = v5 + a3;
    if ( v6 + v7 > v8 )
    {
      v10 = 2 * v8;
      v17 = *((uint32_t *)self + 5);
      if ( v9 < v10 )
        v9 = v10;
      v15 = v7;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v20, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v16, v9, 1);
      v7 = v15;
      v9 = v15 + *((uint32_t *)v3 + 5);
      v6 = v17;
    }
    *((uint32_t *)v3 + 5) = v9;
    v4 = (*(int (**)(uint32_t, int, int))(**((uint32_t **)v3 + 2) + 24))(
           *((uint32_t *)v3 + 2),
           *((uint32_t *)v3 + 4) + v6,
           v7)
       + v6
       - *((uint32_t *)v3 + 3);
    v11 = v4 + *((uint32_t *)v3 + 3);
    v12 = *((uint32_t *)v3 + 6) & 0x3FFFFFFF;
    v5 = *((uint32_t *)v3 + 3);
    if ( v11 > v12 )
    {
      v14 = 2 * v12;
      v18 = v4 + *((uint32_t *)v3 + 3);
      if ( v11 >= v14 )
        v14 = v4 + *((uint32_t *)v3 + 3);
      hkArrayUtil::reserve((hkArrayUtil::Self *)v20, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v16, v14, 1);
      v5 = *((uint32_t *)v3 + 3);
      v11 = v18;
    }
    *((uint32_t *)v3 + 5) = v11;
  }
  hkString::memCpy(v19, (void *)(*((uint32_t *)v3 + 4) + v5), v4);
  *((uint32_t *)v3 + 3) += v4;
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkReplayStreamReader::Destroy  (binary VA: 0x18eb730)
// Original: hkReplayStreamReader::~hkReplayStreamReader
// ----------------------------------------------------------------------------
void hkReplayStreamReader::Destroy(hkReplayStreamReader::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;

  v1 = *((uint32_t *)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8D28);
  if ( *(uint16_t *)(v1 + 6) != 0 )
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
  v6 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      v6 & 0x3FFFFFFF);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkReplayStreamReader::Destroy_ea18eb7e0  (binary VA: 0x18eb7e0)
// Original: hkReplayStreamReader::~hkReplayStreamReader
// ----------------------------------------------------------------------------
void hkReplayStreamReader::Destroy_ea18eb7e0(hkReplayStreamReader::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  int v8;

  v1 = *((uint32_t *)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8D28);
  if ( *(uint16_t *)(v1 + 6) != 0 )
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
  v6 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      v6 & 0x3FFFFFFF);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v7 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v8 = 28;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v8 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v7, 12, self, v8);
}

// ----------------------------------------------------------------------------
// Function: hkCommandRouter::registerProcess  (binary VA: 0x18eb8d0)
// Original: hkCommandRouter::registerProcess
// ----------------------------------------------------------------------------
int hkCommandRouter::registerProcess(hkCommandRouter::Self *self, hkProcess::Self *a2, int a3, int a4)
{
  int v4;
  int result;
  unsigned int v6;
  hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *savedregs;
  uint8_t *retaddr;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  v4 = 0;
  v8 = 0;
  v9[0] = 0;
  G4_VCALL<void>(a2, 16, &v8, v9, v7);
  savedregs = (hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *)((hkCommandRouter::Self *)((char *)self + 8));
  result = a4;
  if ( a4 > 0 )
  {
    do
    {
      v9[6] = (uint32_t)(uintptr_t)(a2);
      v6 = retaddr[v4++];
      result = hkMultiMap_unsigned_long_unsigned_l_56398e::insert(
                 savedregs,
                 v6,
                 (unsigned int)(uintptr_t)(a2));
    }
    while ( a4 > v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCommandRouter::unregisterProcess  (binary VA: 0x18eb960)
// Original: hkCommandRouter::unregisterProcess
// ----------------------------------------------------------------------------
int * hkCommandRouter::unregisterProcess(hkCommandRouter::Self *self, hkProcess::Self *a2)
{
  hkProcess::Self *v2;
  hkCommandRouter::Self *v3;
  char *v4;
  int v5;
  int *result;
  unsigned int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *_g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[4];
  typedef uint32_t _g4_t_v15[10];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v12)) > _g4_s4 ? (20u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v13)) > _g4_s5 ? (24u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v14)) > _g4_s6 ? (28u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v15)) > _g4_s7 ? (44u + sizeof(_g4_t_v15)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);

  v15[6] = (uint32_t)(uintptr_t)(&self);
  v2 = a2;
  v3 = self;
  v14[0] = 0;
  v15[0] = 0;
  G4_VCALL<void>(a2, 16, v14, v15, v8, v9, v10, v11, v13);
  v4 = (char *)v3 + 8;
  v5 = 0;
  v12 = (unsigned int)(uintptr_t)(v4);
  for ( result = &v13;
        v15[0] > v5;
        result = (int *)hkMultiMap_unsigned_long_unsigned_l_56398e::remove(
                          (hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *)&v13,
                          v12,
                          v7) )
  {
    v15[9] = (uint32_t)(uintptr_t)(v2);
    v7 = *(uint8_t *)(v14[0] + v5++);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkCommandRouter::consumeCommands  (binary VA: 0x18eba00)
// Original: hkCommandRouter::consumeCommands
// ----------------------------------------------------------------------------
hkCommandRouter::Self * hkCommandRouter::consumeCommands(hkCommandRouter::Self *self, hkDisplaySerializeIStream::Self *a2, hkIArchive::Self *a3)
{
  int address;
  hkStreamReader::Self *v5;
  int v6;
  int32_t v7; // kr00_4
  int Key;
  int v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int32_t v14; // kr04_4
  int32_t v15;
  int32_t v16; // ett
  int v17;
  typedef hkCommandRouter::Self *_g4_t_v18;
  typedef hkStreamReader::Self *_g4_t_StreamReader;
  typedef int _g4_t_v20;
  typedef hkStreamReader::Self *_g4_t_v21;
  typedef hkIArchive::Self *_g4_t_v22;
  typedef hkDisplaySerializeIStream::Self *_g4_t_v23;
  typedef char _g4_t_v24;
  typedef uint8_t _g4_t_i;
  typedef char _g4_t_v26;
  typedef uint8_t _g4_t_v27[16];
  typedef uint32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t _g4_t_v31[39];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_StreamReader)) > _g4_s1 ? (8u + sizeof(_g4_t_StreamReader)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v22)) > _g4_s4 ? (24u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (33u + sizeof(_g4_t_v24)) > _g4_s6 ? (33u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (34u + sizeof(_g4_t_i)) > _g4_s7 ? (34u + sizeof(_g4_t_i)) : _g4_s7,
    _g4_s9 = (35u + sizeof(_g4_t_v26)) > _g4_s8 ? (35u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v27)) > _g4_s9 ? (36u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v28)) > _g4_s10 ? (52u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v29)) > _g4_s11 ? (56u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v30)) > _g4_s12 ? (60u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v31)) > _g4_s13 ? (64u + sizeof(_g4_t_v31)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_StreamReader &StreamReader = *reinterpret_cast<_g4_t_StreamReader *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 33u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 34u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 35u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);

  v31[35] = (uint32_t)(uintptr_t)(&self);
  v18 = self;
  v23 = a2;
  v22 = a3;
  hkIArchive::readArrayGeneric(a3, &v28, 1, 1);
  for ( i = (uint8_t)(uintptr_t)(v28); ; i = (uint8_t)(uintptr_t)(v28) )
  {
    hkIArchive::isOk((hkIArchive::Self *)&v26);
    if ( v26 == 0 || i == 0xF0 )
      break;
    if ( hkMultiMap_unsigned_long_unsigned_l_56398e::findKey(
           (hkDisplaySerializeIStream::Self *)((char *)v23 + 8),
           i) > *((uint32_t *)v23 + 4) )
    {
      if ( i == 0xB0 )
        goto LABEL_32;
      goto LABEL_5;
    }
    StreamReader = (hkStreamReader::Self *)hkIArchive::getStreamReader(v22);
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v5 = (hkStreamReader::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                             *(uint32_t *)(*(uint32_t *)address + 44),
                             28);
    *((uint32_t *)v5 + 1) = -65535;
    v21 = v5;
    *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_20A8D28);
    *((uint32_t *)v5 + 2) = (uint32_t)(uintptr_t)(StreamReader);
    *((uint32_t *)v5 + 3) = 0;
    *((uint32_t *)v5 + 4) = 0;
    *((uint32_t *)v5 + 5) = 0;
    *((uint32_t *)v5 + 6) = 0x80000000;
    if ( *((uint16_t *)StreamReader + 3) != 0 )
    {
      do
      {
        v7 = *((uint32_t *)StreamReader + 1);
        HIWORD(v6) = HIWORD(v7);
        LOWORD(v6) = 0;
      }
      while ( v7 != __sync_val_compare_and_swap(
                      (volatile int32_t *)StreamReader + 1,
                      v7,
                      v6 | (uint16_t)(v7 + 1)) );
    }
    hkIArchive::setStreamReader(v22, v21);
    Key = hkMultiMap_unsigned_long_unsigned_l_56398e::findKey(
            (hkDisplaySerializeIStream::Self *)((char *)v23 + 8),
            i);
    v24 = 0;
    v9 = *((uint32_t *)v23 + 4);
LABEL_15:
    if ( Key <= v9 )
    {
      do
      {
        v10 = *((int **)v23 + 2);
        v11 = v10[2 * Key + 1];
        if ( v11 != 0 )
        {
          v20 = Key;
          G4_VCALL<void>(v11, 20, i);
          v24 = 1;
          *((uint32_t *)v21 + 3) = 0;
          v10 = *((int **)v23 + 2);
          v9 = *((uint32_t *)v23 + 4);
          Key = v20;
        }
        ++Key;
        if ( v9 >= 0 )
        {
          while ( 1 )
          {
            if ( v9 < Key )
            {
              Key = 0;
              v12 = *v10;
              if ( *v10 == -1 )
                goto LABEL_25;
            }
            else
            {
              v12 = v10[2 * Key];
              if ( v12 == -1 )
                goto LABEL_25;
            }
            if ( i == v12 )
              goto LABEL_15;
            ++Key;
          }
        }
        while ( 1 )
        {
          if ( v9 < Key )
          {
            while ( 1 )
              ;
          }
          v17 = v10[2 * Key];
          if ( v17 == -1 )
            break;
          if ( i == v17 )
            goto LABEL_15;
          ++Key;
        }
LABEL_25:
        Key = v9 + 1;
      }
      while ( v9 + 1 <= v9 );
    }
    hkIArchive::setStreamReader(v22, StreamReader);
    if ( *((uint16_t *)v21 + 3) != 0 )
    {
      do
      {
        v14 = *((uint32_t *)v21 + 1);
        HIWORD(v13) = HIWORD(v14);
        LOWORD(v13) = 0;
        v15 = v13 | (uint16_t)(v14 - 1);
        v16 = v14;
      }
      while ( v16 != __sync_val_compare_and_swap((volatile int32_t *)v21 + 1, v16, v15) );
      if ( (uint16_t)v15 == 0 )
        G4_VCALL<void>(v21, 16);
    }
    if ( v24 == 0 )
    {
      if ( i == 0xB0 )
      {
LABEL_32:
        hkDisplaySerializeIStream::readQuadVector4(v22, (hkVector4f::Self *)v27);
        hkIArchive::readArrayGeneric(v22, &v28, 8, 1);
LABEL_7:
        v28 = v31;
        v30 = -2147483520;
        v29 = 1;
        LOBYTE(v31[0]) = 0;
        hkStringBuf::printf(
          (hkStringBuf::Self *)&v28,
          "VDB: Found a command (%x) with no handler. Could corrupt the stream.",
          i);
        v29 = 0;
        if ( v30 >= 0 )
          (*(void (**)(uint32_t *, uint32_t *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
            (uint32_t *)(hkContainerTempAllocator::s_alloc),
            v28,
            v30 & 0x3FFFFFFF);
        goto LABEL_9;
      }
LABEL_5:
      if ( i == 0xB1 )
        hkDisplaySerializeIStream::readQuadVector4(v22, (hkVector4f::Self *)v27);
      goto LABEL_7;
    }
LABEL_9:
    hkIArchive::readArrayGeneric(v22, &v28, 1, 1);
  }
  *(uint8_t *)v18 = 1;
  return v18;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCapsule::Destroy  (binary VA: 0x18ebe40)
// Original: hkDisplayCapsule::~hkDisplayCapsule
// ----------------------------------------------------------------------------
void hkDisplayCapsule::Destroy(hkDisplayCapsule::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8D68);
  g4_noop_dtor(self);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCapsule::Destroy_ea18ebe70  (binary VA: 0x18ebe70)
// Original: hkDisplayCapsule::~hkDisplayCapsule
// ----------------------------------------------------------------------------
void hkDisplayCapsule::Destroy_ea18ebe70(hkDisplayCapsule::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8D68);
  g4_noop_dtor(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 144;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCapsule::buildGeometry  (binary VA: 0x18ebee0)
// Original: hkDisplayCapsule::buildGeometry
// ----------------------------------------------------------------------------
int hkDisplayCapsule::buildGeometry(hkDisplayCapsule::Self *self)
{
  int address;
  const hkTransformf::Self *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (const hkTransformf::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                               *(uint32_t *)(*(uint32_t *)address + 44),
                               32);
  *((uint32_t *)v2 + 1) = -65535;
  *((uint32_t *)v2 + 2) = 0;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_20586B8);
  *((uint32_t *)v2 + 3) = 0;
  *((uint32_t *)v2 + 4) = 0x80000000;
  *((uint32_t *)v2 + 5) = 0;
  *((uint32_t *)v2 + 6) = 0;
  *((uint32_t *)v2 + 7) = 0x80000000;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v2);
  return hkGeometryUtils::createCapsuleGeometry(
           (hkDisplayCapsule::Self *)((char *)self + 96),
           (hkDisplayCapsule::Self *)((char *)self + 112),
           *((const hkVector4f::Self **)self + 32),
           *((uint32_t *)self + 34),
           *((uint32_t *)self + 33),
           (float *)&xmmword_1D12FD0,
           v2);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCapsule::getWireframeGeometry  (binary VA: 0x18ebfb0)
// Original: hkDisplayCapsule::getWireframeGeometry
// ----------------------------------------------------------------------------
int hkDisplayCapsule::getWireframeGeometry(hkDisplayCapsule::Self *self, hkArrayBase<hkVector4f::Self> *a2, hkMemoryAllocator::Self *a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int result;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  hkArrayBase<hkVector4f::Self> *v11;
  int v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;
  typedef const hkVector4f::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[2];
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v20)) > _g4_s4 ? (36u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v21)) > _g4_s5 ? (40u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v22)) > _g4_s6 ? (44u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v23)) > _g4_s7 ? (48u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v24)) > _g4_s8 ? (56u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v25)) > _g4_s9 ? (60u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v26)) > _g4_s10 ? (64u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v27)) > _g4_s11 ? (68u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v28)) > _g4_s12 ? (72u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v29)) > _g4_s13 ? (76u + sizeof(_g4_t_v29)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);

  v23[0] = ((uint32_t)(uintptr_t)&off_20586B8);
  v23[1] = -65535;
  v19 = *((uint32_t *)self + 33);
  v17 = *((uint32_t *)self + 34);
  v16 = *((const hkVector4f::Self **)self + 32);
  v24 = 0;
  v25 = 0;
  v26 = 0x80000000;
  v27 = 0;
  v28 = 0;
  v29 = 0x80000000;
  hkGeometryUtils::createCapsuleGeometry(
    (hkDisplayCapsule::Self *)((char *)self + 96),
    (hkDisplayCapsule::Self *)((char *)self + 112),
    v16,
    v17,
    v19,
    (float *)&xmmword_1D12FD0,
    (const hkTransformf::Self *)v23);
  v21 = 0;
  if ( v28 > 0 )
  {
    v3 = 0;
    do
    {
      v4 = 0;
      v22 = v27 + 16 * v3;
      do
      {
        ++v4;
        v5 = *(uint32_t *)(v22 + 4 * v4 - 4);
        v6 = (uint32_t *)(v22 + 4 * (v4 % 3));
        if ( v5 < *v6 )
        {
          v8 = (uint32_t *)(v24 + 16 * v5);
          v9 = *((uint32_t *)a2 + 1);
          if ( v9 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
          {
            v20 = v8;
            hkArrayUtil::reserveMore(a3, a2, 16, v18);
            v8 = v20;
            v9 = *((uint32_t *)a2 + 1);
          }
          v10 = (uint32_t *)(*(uint32_t *)a2 + 16 * v9);
          *v10 = *v8;
          v10[1] = v8[1];
          v10[2] = v8[2];
          v10[3] = v8[3];
          v11 = a2;
          v12 = *((uint32_t *)a2 + 1) + 1;
          v13 = *((uint32_t *)a2 + 2) & 0x3FFFFFFF;
          *((uint32_t *)a2 + 1) = v12;
          v14 = (uint32_t *)(v24 + 16 * *v6);
          if ( v12 == v13 )
          {
            hkArrayUtil::reserveMore(a3, a2, 16, v18);
            v11 = a2;
            v12 = *((uint32_t *)a2 + 1);
          }
          v15 = (uint32_t *)(*(uint32_t *)v11 + 16 * v12);
          *v15 = *v14;
          v15[1] = v14[1];
          v15[2] = v14[2];
          v15[3] = v14[3];
          ++*((uint32_t *)v11 + 1);
        }
      }
      while ( v4 != 3 );
      v3 = ++v21;
    }
    while ( v28 > v21 );
  }
  v28 = 0;
  v23[0] = ((uint32_t)(uintptr_t)&off_20586B8);
  if ( v29 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v27,
      16 * v29);
  result = v26;
  v27 = 0;
  v29 = 0x80000000;
  v25 = 0;
  if ( v26 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v24,
             16 * v26);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCapsule::Construct  (binary VA: 0x18ec240)
// Original: hkDisplayCapsule::hkDisplayCapsule
// ----------------------------------------------------------------------------
void hkDisplayCapsule::Construct(hkDisplayCapsule::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, float a4, int a5, int a6)
{
  int v6;

  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 20) = 8;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8D68);
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 33) = a5;
  *((uint32_t *)self + 34) = a6;
  *((uint32_t *)self + 24) = *(uint32_t *)a2;
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 28) = *(uint32_t *)a3;
  *((uint32_t *)self + 29) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 30) = *((uint32_t *)a3 + 2);
  v6 = *((uint32_t *)a3 + 3);
  *((float *)self + 32) = a4;
  *((uint32_t *)self + 31) = v6;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayConvex::buildGeometry  (binary VA: 0x18ec360)
// Original: hkDisplayConvex::buildGeometry
// ----------------------------------------------------------------------------
void hkDisplayConvex::buildGeometry()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayConvex::Destroy  (binary VA: 0x18ec370)
// Original: hkDisplayConvex::~hkDisplayConvex
// ----------------------------------------------------------------------------
void hkDisplayConvex::Destroy(hkDisplayConvex::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8DA8);
  g4_noop_dtor(self);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayConvex::Destroy_ea18ec3a0  (binary VA: 0x18ec3a0)
// Original: hkDisplayConvex::~hkDisplayConvex
// ----------------------------------------------------------------------------
void hkDisplayConvex::Destroy_ea18ec3a0(hkDisplayConvex::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8DA8);
  g4_noop_dtor(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 96;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayConvex::getWireframeGeometry  (binary VA: 0x18ec410)
// Original: hkDisplayConvex::getWireframeGeometry
// ----------------------------------------------------------------------------
int hkDisplayConvex::getWireframeGeometry(hkDisplayConvex::Self *self, hkArrayBase<hkVector4f::Self> *a2, hkMemoryAllocator::Self *a3)
{
  int result;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  uint32_t *v32;
  uint32_t *v33;

  result = (int)(uintptr_t)(self);
  v4 = *((uint32_t **)self + 2);
  if ( v4 != nullptr )
  {
    result = v4[6] - 1;
    v26 = result;
    if ( result >= 0 )
    {
      v5 = 16 * result;
      result = *((uint32_t *)a2 + 1);
      v27 = v5;
      while ( 1 )
      {
        v23 = (uint32_t *)(v4[5] + v27);
        v29 = v23[1];
        v31 = v23[2];
        v24 = 16 * *v23;
        v25 = (uint32_t *)(v24 + v4[2]);
        if ( (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) == result )
        {
          v32 = v25;
          hkArrayUtil::reserveMore(a3, a2, 16, v26);
          result = *((uint32_t *)a2 + 1);
          v25 = v32;
        }
        v6 = (uint32_t *)(*(uint32_t *)a2 + 16 * result);
        *v6 = *v25;
        v6[1] = v25[1];
        v6[2] = v25[2];
        v6[3] = v25[3];
        v7 = *((uint32_t *)a2 + 1) + 1;
        *((uint32_t *)a2 + 1) = v7;
        v28 = 16 * v29;
        v8 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 2) + 8) + v28);
        if ( v7 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
        {
          v33 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 2) + 8) + v28);
          hkArrayUtil::reserveMore(a3, a2, 16, v26);
          v7 = *((uint32_t *)a2 + 1);
          v8 = v33;
        }
        v9 = (uint32_t *)(*(uint32_t *)a2 + 16 * v7);
        *v9 = *v8;
        v9[1] = v8[1];
        v9[2] = v8[2];
        v9[3] = v8[3];
        v10 = *((uint32_t *)a2 + 1) + 1;
        *((uint32_t *)a2 + 1) = v10;
        v11 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 2) + 8) + v24);
        if ( v10 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(a3, a2, 16, v26);
          v10 = *((uint32_t *)a2 + 1);
        }
        v12 = (uint32_t *)(*(uint32_t *)a2 + 16 * v10);
        v13 = 16 * v31;
        *v12 = *v11;
        v12[1] = v11[1];
        v12[2] = v11[2];
        v12[3] = v11[3];
        v14 = *((uint32_t *)a2 + 1) + 1;
        *((uint32_t *)a2 + 1) = v14;
        v15 = (uint32_t *)(16 * v31 + *(uint32_t *)(*((uint32_t *)self + 2) + 8));
        if ( v14 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(a3, a2, 16, v26);
          v14 = *((uint32_t *)a2 + 1);
          v13 = 16 * v31;
        }
        v16 = (uint32_t *)(*(uint32_t *)a2 + 16 * v14);
        *v16 = *v15;
        v16[1] = v15[1];
        v16[2] = v15[2];
        v16[3] = v15[3];
        v17 = *((uint32_t *)a2 + 1) + 1;
        *((uint32_t *)a2 + 1) = v17;
        v18 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 2) + 8) + v28);
        if ( v17 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
        {
          v30 = v13;
          hkArrayUtil::reserveMore(a3, a2, 16, v26);
          v17 = *((uint32_t *)a2 + 1);
          v13 = v30;
        }
        v19 = (uint32_t *)(*(uint32_t *)a2 + 16 * v17);
        *v19 = *v18;
        v19[1] = v18[1];
        v19[2] = v18[2];
        v19[3] = v18[3];
        v20 = *((uint32_t *)a2 + 1) + 1;
        *((uint32_t *)a2 + 1) = v20;
        v21 = (uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 2) + 8) + v13);
        if ( v20 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(a3, a2, 16, v26);
          v20 = *((uint32_t *)a2 + 1);
        }
        v22 = (uint32_t *)(*(uint32_t *)a2 + 16 * v20);
        --v26;
        v27 -= 16;
        *v22 = *v21;
        v22[1] = v21[1];
        v22[2] = v21[2];
        v22[3] = v21[3];
        result = *((uint32_t *)a2 + 1) + 1;
        *((uint32_t *)a2 + 1) = result;
        if ( v26 == -1 )
          break;
        v4 = *((uint32_t **)self + 2);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayConvex::Construct  (binary VA: 0x18ec710)
// Original: hkDisplayConvex::hkDisplayConvex
// ----------------------------------------------------------------------------
void hkDisplayConvex::Construct(hkDisplayConvex::Self *self, hkGeometry::Self *a2)
{
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 20) = 6;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8DA8);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
}

// ----------------------------------------------------------------------------
// Function: hkInspectProcess::getProcessTag  (binary VA: 0x18ec7d0)
// Original: hkInspectProcess::getProcessTag
// ----------------------------------------------------------------------------
int hkInspectProcess::getProcessTag()
{
  return hkInspectProcess::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkInspectProcess::getConsumableCommands  (binary VA: 0x18ec800)
// Original: hkInspectProcess::getConsumableCommands
// ----------------------------------------------------------------------------
int * hkInspectProcess::getConsumableCommands(hkInspectProcess::Self *self, uint8_t **a2, int *a3)
{
  *a2 = (uint8_t *)asc_20CB44C;
  *a3 = 5;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkInspectProcess::registerProcess  (binary VA: 0x18ec840)
// Original: hkInspectProcess::registerProcess
// ----------------------------------------------------------------------------
int hkInspectProcess::registerProcess()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "ObjectInspection",
             (int)(uintptr_t)(hkInspectProcess::create));
  hkInspectProcess::m_tag = result;
  return result;
}



// ============================================================================
// Address:   0x18ec890 (size: 233 bytes)
// Symbol:    _ZN16hkInspectProcessC2ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE
// Demangled: hkInspectProcess::hkInspectProcess(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// ============================================================================
// Alternative name is '_ZN16hkInspectProcessC1ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE'
hkPlatformObjectWriter::Cache::Self *hkInspectProcess::Construct(int a1, int *a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int32_t v5; // kr00_4
  int address;
  hkPlatformObjectWriter::Cache::Self *v7;
  struct hkPlatformObjectWriter::Cache::Self *result;

  *(uint32_t *)(a1 + 4) = -65535;
  *(uint8_t *)(a1 + 12) = 1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A8E08);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20A8E38);
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  *(uint32_t *)(a1 + 40) = 0x80000000;
  if ( a2[1] <= 0 )
  {
    *(uint32_t *)(a1 + 44) = 0;
  }
  else
  {
    v2 = *(uint32_t *)(*(uint32_t *)*a2 + 4);
    *(uint32_t *)(a1 + 44) = v2;
    if ( v2 != 0 )
    {
      v3 = (uint32_t *)v2;
      if ( *(uint16_t *)(v2 + 6) != 0 )
      {
        do
        {
          v5 = *(uint32_t *)(v2 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
        }
        while ( v5 != __sync_val_compare_and_swap(
                        (volatile int32_t *)(v2 + 4),
                        v5,
                        v4 | (uint16_t)(v5 + 1)) );
        v3 = *(uint32_t **)(a1 + 44);
      }
      hkVisualDebugger::addTrackedObjectCallback(v3, (int)(uintptr_t)(sub_18ECD60), a1);
    }
  }
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v7 = (hkPlatformObjectWriter::Cache::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                          *(uint32_t *)(*(uint32_t *)address + 44),
                                          44);
  result = hkPlatformObjectWriter::Cache::Construct(v7);
  *(uint32_t *)(a1 + 48) = (uint32_t)(uintptr_t)(v7);
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkInspectProcess::create  (binary VA: 0x18ec980)
// Original: hkInspectProcess::create
// ----------------------------------------------------------------------------
int hkInspectProcess::create(int *a1)
{
  int address;
  int v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         52);
  hkInspectProcess::Construct(v2, a1);
  if ( v2 != 0 )
    return v2 + 8;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkInspectProcess::addTopLevelObject  (binary VA: 0x18ec9e0)
// Original: hkInspectProcess::addTopLevelObject
// ----------------------------------------------------------------------------
int hkInspectProcess::addTopLevelObject(hkOArchive::Self **self, void *a2, const hkClass::Self *a3, unsigned int a4)
{
  const hkClass::Self *v4;
  uint8_t v6[25];

  hkOArchive::write32u(*(self + 5), 25);
  if ( *((uint32_t *)*(self + 11) + 19) == 0
    || (hkClass::hasVtable((hkClass::Self *)v6, a3), v6[0] == 0)
    || (v4 = (const hkClass::Self *)(*(int (**)(uint32_t, void *))(**((uint32_t **)*(self + 11) + 19) + 28))(
                                *((uint32_t *)*(self + 11) + 19),
                                a2)) == nullptr )
  {
    v4 = a3;
  }
  hkOArchive::write8u(*(self + 5), 0x21u);
  hkOArchive::write64u(*(self + 5), (unsigned int)(uintptr_t)(a2));
  hkOArchive::write64u(*(self + 5), (unsigned int)(uintptr_t)(v4));
  hkOArchive::write64u(*(self + 5), a4);
  return 25;
}

// ----------------------------------------------------------------------------
// Function: hkInspectProcess::init  (binary VA: 0x18ecac0)
// Original: hkInspectProcess::init
// ----------------------------------------------------------------------------
uint8_t * hkInspectProcess::init(hkInspectProcess::Self *self)
{
  uint8_t *result;
  void *v2;
  const hkClass::Self **v3;
  const hkClass::Self *v4;
  int v5;
  int v6;
  int v7;
  uint32_t v8[8];

  result = *((uint8_t **)self + 11);
  if ( result != nullptr )
  {
    hkOArchive::write32u(*((hkOArchive::Self **)self + 5), 47);
    hkOArchive::write8u(*((hkOArchive::Self **)self + 5), 0x20u);
    if ( *((uint32_t *)self + 12) != 0 )
    {
      hkStructureLayout::Construct(v8, &hkStructureLayout::MsvcWin32LayoutRules);
      v2 = (void *)hkPlatformObjectWriter::Cache::get(
                     *((hkPlatformObjectWriter::Cache::Self **)self + 12),
                     (const hkClass::Self *)&hkClassClass,
                     (const hkStructureLayout::Self *)v8);
    }
    else
    {
      v2 = &hkClassClass;
    }
    hkOArchive::write64u(*((hkOArchive::Self **)self + 5), (unsigned int)(uintptr_t)(v2));
    hkOArchive::write8u(*((hkOArchive::Self **)self + 5), (uint8_t)hkStructureLayout::HostLayoutRules);
    hkOArchive::write8u(*((hkOArchive::Self **)self + 5), BYTE1(hkStructureLayout::HostLayoutRules));
    hkOArchive::write8u(*((hkOArchive::Self **)self + 5), BYTE2(hkStructureLayout::HostLayoutRules));
    hkOArchive::write8u(*((hkOArchive::Self **)self + 5), HIBYTE(hkStructureLayout::HostLayoutRules));
    hkOArchive::write16u(*((hkOArchive::Self **)self + 5), 4u);
    v3 = (const hkClass::Self **)&hkInspectProcess::s_specialClassClasses;
    do
    {
      v4 = *v3;
      if ( *((uint32_t *)self + 12) != 0 )
      {
        hkStructureLayout::Construct(v8, &hkStructureLayout::MsvcWin32LayoutRules);
        v4 = (const hkClass::Self *)hkPlatformObjectWriter::Cache::get(
                                *((hkPlatformObjectWriter::Cache::Self **)self + 12),
                                *v3,
                                (const hkStructureLayout::Self *)v8);
      }
      ++v3;
      result = hkOArchive::write64u(*((hkOArchive::Self **)self + 5), (unsigned int)(uintptr_t)(v4));
    }
    while ( v3 != (const hkClass::Self **)&hkVersionReporter::m_protocolVersion );
    v5 = *((uint32_t *)self + 11);
    if ( *(int *)(v5 + 44) > 0 )
    {
      v6 = 0;
      do
      {
        v7 = 3 * v6++;
        result = (uint8_t *)hkInspectProcess::addTopLevelObject(
                            (hkOArchive::Self **)self,
                            *(void **)(*(uint32_t *)(v5 + 40) + 4 * v7),
                            *(const hkClass::Self **)(*(uint32_t *)(v5 + 40) + 4 * v7 + 4),
                            *(uint32_t *)(*(uint32_t *)(v5 + 40) + 4 * v7 + 8));
      }
      while ( *(uint32_t *)(v5 + 44) > v6 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkInspectProcess::removeTopLevelObject  (binary VA: 0x18ecc90)
// Original: hkInspectProcess::removeTopLevelObject
// ----------------------------------------------------------------------------
int hkInspectProcess::removeTopLevelObject(hkOArchive::Self **self, void *a2)
{
  int v2;
  void **v3;
  void **v4;
  hkOArchive::Self *v5;
  void **v6;
  hkOArchive::Self *v8;
  void **v9;
  void **v10;

  hkOArchive::write32u(*(self + 5), 9);
  hkOArchive::write8u(*(self + 5), 0x22u);
  hkOArchive::write64u(*(self + 5), (unsigned int)(uintptr_t)(a2));
  v2 = (int)(uintptr_t)(*(self + 9));
  if ( v2 <= 0 )
    return 9;
  v3 = (void **)*(self + 8);
  v10 = v3;
  if ( a2 != *v3 )
  {
    v4 = v3 + 2;
    v5 = nullptr;
    while ( 1 )
    {
      v5 = (hkOArchive::Self *)((char *)v5 + 1);
      if ( v5 == (hkOArchive::Self *)v2 )
        return 9;
      v6 = v4;
      v4 += 2;
      if ( a2 == *(v4 - 2) )
        goto LABEL_8;
    }
  }
  v6 = (void **)*(self + 8);
  v5 = nullptr;
LABEL_8:
  v8 = (hkOArchive::Self *)(v2 - 1);
  *(self + 9) = v8;
  if ( v5 == v8 )
    return 9;
  v9 = &v10[2 * (uint32_t)(uintptr_t)(v8)];
  *v6 = *v9;
  v6[1] = v9[1];
  return 9;
}

// ----------------------------------------------------------------------------
// Function: hkInspectProcess::Destroy  (binary VA: 0x18ecdc0)
// Original: hkInspectProcess::~hkInspectProcess
// ----------------------------------------------------------------------------
void hkInspectProcess::Destroy(hkInspectProcess::Self *self)
{
  uint32_t *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;
  int v10;
  int32_t v11; // kr04_4
  int32_t v12;
  int32_t v13; // ett
  int v14;

  v1 = *((uint32_t **)self + 11);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8E08);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A8E38);
  if ( v1 != nullptr )
  {
    if ( (int)v1[11] > 0 )
    {
      v2 = 0;
      do
      {
        v3 = 3 * v2++;
        hkInspectProcess::removeTopLevelObject((hkOArchive::Self **)self, *(void **)(v1[10] + 4 * v3));
      }
      while ( v1[11] > v2 );
      v1 = *((uint32_t **)self + 11);
    }
    hkVisualDebugger::removeTrackedObjectCallback(v1, (int)(uintptr_t)(sub_18ECD60));
    v4 = *((uint32_t *)self + 11);
    if ( *(uint16_t *)(v4 + 6) != 0 )
    {
      do
      {
        v6 = *(uint32_t *)(v4 + 4);
        HIWORD(v5) = HIWORD(v6);
        LOWORD(v5) = 0;
        v7 = v5 | (uint16_t)(v6 - 1);
        v8 = v6;
      }
      while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)(v4 + 4), v8, v7) );
      if ( (uint16_t)v7 == 0 )
        G4_VCALL<void>(v4, 16);
    }
  }
  v9 = *((uint32_t *)self + 12);
  if ( *(uint16_t *)(v9 + 6) != 0 )
  {
    do
    {
      v11 = *(uint32_t *)(v9 + 4);
      HIWORD(v10) = HIWORD(v11);
      LOWORD(v10) = 0;
      v12 = v10 | (uint16_t)(v11 - 1);
      v13 = v11;
    }
    while ( v13 != __sync_val_compare_and_swap((volatile int32_t *)(v9 + 4), v13, v12) );
    if ( (uint16_t)v12 == 0 )
      G4_VCALL<void>(v9, 16);
  }
  v14 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 9) = 0;
  if ( v14 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      8 * v14);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3A48);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkInspectProcess::Destroy_ea18ecf20  (binary VA: 0x18ecf20)
// Original: hkInspectProcess::~hkInspectProcess
// ----------------------------------------------------------------------------
void hkInspectProcess::Destroy_ea18ecf20(hkInspectProcess::Self *self)
{
  int v1;
  int v2;

  hkInspectProcess::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 52;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkInspectProcess::writeObject  (binary VA: 0x18ecf90)
// Original: hkInspectProcess::writeObject
// ----------------------------------------------------------------------------
int hkInspectProcess::writeObject(uint32_t *a1, int a2, hkClass::Self *a3, char a4, int a5)
{
  hkString::Self *Name;

  Name = (hkString::Self *)hkClass::getName(a3);
  if ( hkString::strCmp(Name, "hkClass") != 0 )
    return hkObjectSerialize::writeObject(a1[5], 36, a2, a3, a5, 1, a4 != 0, 0, *(uint32_t *)(a1[11] + 76), a1[12], 0);
  else
    return hkObjectSerialize::writeObject(
             a1[5],
             36,
             a2,
             &hkClassClass,
             a5,
             1,
             a4 != 0,
             0,
             *(uint32_t *)(a1[11] + 76),
             a1[12],
             2);
}

// ----------------------------------------------------------------------------
// Function: hkInspectProcess::step  (binary VA: 0x18ed080)
// Original: hkInspectProcess::step
// ----------------------------------------------------------------------------
void hkInspectProcess::step(hkInspectProcess::Self *self)
{
  int v1;
  int v2;
  uint32_t v3[7];

  v1 = 0;
  v3[0] = 0;
  v3[1] = 0;
  v3[2] = -1;
  while ( *((uint32_t *)self + 9) > v1 )
  {
    hkMapBase_unsigned_long_unsigned_l_393416::clear((hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v3);
    v2 = *((uint32_t *)self + 8) + 8 * v1++;
    hkInspectProcess::writeObject((uint32_t *)(self), *(uint32_t *)v2, *(hkClass::Self **)(v2 + 4), 0, (int)(uintptr_t)(v3));
  }
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v3,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkInspectProcess::consumeCommand  (binary VA: 0x18ed150)
// Original: hkInspectProcess::consumeCommand
// ----------------------------------------------------------------------------
void hkInspectProcess::consumeCommand(hkIArchive::Self **self, uint8_t a2)
{
  hkInspectProcess::Self *v2;
  int v3;
  uint16_t *v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  bool v11;
  int v12;
  unsigned int v13;
  int v14;
  hkIArchive::Self *v15;
  int Member;
  int v17;
  int v18;
  hkString::Self *v19;
  int v20;
  char v21;
  char v22;
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  int v30;
  int ArrayMemberSize;
  uint32_t *v32;
  uint32_t *v33;
  hkClass::Self *StructClass;
  bool v35;
  bool v36;
  typedef void *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint64_t _g4_t_v39;
  typedef uint64_t _g4_t_v40;
  typedef uint64_t _g4_t_v41;
  typedef uint64_t _g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef size_t _g4_t_v44;
  typedef char _g4_t_v45;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v46;
  typedef hkClass::Self *_g4_t_v47;
  typedef hkClass::Self *_g4_t_v48;
  typedef hkClass::Self *_g4_t_v49;
  typedef hkClass::Self *_g4_t_v50;
  typedef char _g4_t_v51[4];
  typedef unsigned int _g4_t_v52[4];
  typedef uint16_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint64_t _g4_t_v56;
  typedef int _g4_t_v57;
  typedef hkIArchive::Self ***_g4_t_v58;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v37)) > _g4_s0 ? (4u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v38)) > _g4_s1 ? (12u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v39)) > _g4_s2 ? (32u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v40)) > _g4_s3 ? (40u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v41)) > _g4_s4 ? (40u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v42)) > _g4_s5 ? (40u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v43)) > _g4_s6 ? (48u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v44)) > _g4_s7 ? (48u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v45)) > _g4_s8 ? (48u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v46)) > _g4_s9 ? (52u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v47)) > _g4_s10 ? (56u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v48)) > _g4_s11 ? (56u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v49)) > _g4_s12 ? (56u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v50)) > _g4_s13 ? (56u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v51)) > _g4_s14 ? (60u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v52)) > _g4_s15 ? (64u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v53)) > _g4_s16 ? (80u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v54)) > _g4_s17 ? (84u + sizeof(_g4_t_v54)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v55)) > _g4_s18 ? (88u + sizeof(_g4_t_v55)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v56)) > _g4_s19 ? (96u + sizeof(_g4_t_v56)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v57)) > _g4_s20 ? (104u + sizeof(_g4_t_v57)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v58)) > _g4_s21 ? (120u + sizeof(_g4_t_v58)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 4u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 52u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 56u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 80u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 84u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 88u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 96u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 104u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 120u);

  v58 = &self;
  v2 = (hkInspectProcess::Self *)self;
  if ( a2 == 35 )
  {
    hkIArchive::readArrayGeneric(*(self + 4), &v56, 8, 1);
    v41 = v56;
    hkIArchive::readArrayGeneric(*((hkIArchive::Self **)v2 + 4), &v56, 8, 1);
    v20 = HIDWORD(v56);
    v48 = (hkClass::Self *)v56;
    hkIArchive::readArrayGeneric(*((hkIArchive::Self **)v2 + 4), &v56, 1, 1);
    v21 = v56;
    v45 = v56;
    if ( ((unsigned int)(uintptr_t)(v48) | v20) == 0 || v41 == 0 )
      return;
    v56 = 0;
    v57 = -1;
    v22 = v48 == (hkClass::Self *)&hkClassClass || (v21 & 2) != 0;
    hkInspectProcess::writeObject((uint32_t *)(v2), v41, v48, v22, (int)(uintptr_t)(&v56));
    v23 = *((uint32_t *)v2 + 9);
    v24 = v41;
    v42 = __PAIR64__(v41, v23);
    if ( v23 <= 0 )
    {
      v35 = v23 != 0;
      v36 = v35;
      if ( (v45 & 1) == 0 )
      {
        if ( v35 )
        {
          v26 = 0;
          v25 = *((uint32_t **)v2 + 8);
          goto LABEL_49;
        }
        goto LABEL_51;
      }
    }
    else
    {
      v25 = *((uint32_t **)v2 + 8);
      v26 = 0;
      if ( HIDWORD(v42) != *v25 )
      {
        while ( ++v26 != *((uint32_t *)v2 + 9) )
        {
          if ( HIDWORD(v42) == v25[2 * v26] )
            goto LABEL_63;
        }
        if ( (v45 & 1) == 0 )
          goto LABEL_51;
        goto LABEL_38;
      }
LABEL_63:
      v36 = v26 != (uint32_t)v42;
      if ( (v45 & 1) == 0 )
      {
LABEL_49:
        *((uint32_t *)v2 + 9) = v42 - 1;
        if ( v26 != (uint32_t)v42 - 1 )
        {
          v32 = &v25[2 * v42 - 2];
          v33 = &v25[2 * v26];
          *v33 = *v32;
          v33[1] = v32[1];
        }
        goto LABEL_51;
      }
    }
    if ( !v36 )
    {
LABEL_38:
      if ( (uint32_t)v42 == (*((uint32_t *)v2 + 10) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkInspectProcess::Self *)((char *)v2 + 32),
          8,
          v38);
        v24 = HIDWORD(v42);
        LODWORD(v42) = *((uint32_t *)v2 + 9);
      }
      v27 = *((uint32_t *)v2 + 8);
      *((uint32_t *)v2 + 9) = v42 + 1;
      v28 = (uint32_t *)(v27 + 8 * v42);
      v28[1] = (uint32_t)(uintptr_t)(v48);
      *v28 = v24;
    }
LABEL_51:
    hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v56,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
    hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
    return;
  }
  if ( a2 != 37 )
    return;
  hkIArchive::readArrayGeneric(*(self + 4), &v56, 8, 1);
  v40 = __PAIR64__(v56, HIDWORD(v56));
  hkIArchive::readArrayGeneric(*((hkIArchive::Self **)v2 + 4), &v56, 8, 1);
  v39 = __PAIR64__(v56, HIDWORD(v56));
  hkIArchive::readArrayGeneric(*((hkIArchive::Self **)v2 + 4), &v56, 2, 1);
  v3 = (uint16_t)v56;
  v4 = nullptr;
  v53 = nullptr;
  v54 = 0;
  v55 = 0x80000000;
  if ( (uint16_t)v56 != 0
    && (LODWORD(v56) = 2 * (uint16_t)v56,
        v4 = (uint16_t *)(*(int (**)(uint32_t *, uint64_t *))(hkContainerHeapAllocator::s_alloc
                                                                                  + 16))(
                                   (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                                   &v56),
        v6 = (int)v56 / 2,
        (int)v56 / 2 != 0) )
  {
    v5 = v6 & 0x3FFFFFFF;
  }
  else
  {
    v5 = 0;
    v6 = 0x80000000;
  }
  v53 = v4;
  v54 = v3;
  v55 = v6;
  if ( v3 > v5 )
  {
    v29 = 2 * v5;
    if ( v29 < v3 )
      v29 = v3;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v51,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v53,
      v29,
      2);
    v54 = v3;
    goto LABEL_7;
  }
  v54 = v3;
  if ( v3 != 0 )
  {
LABEL_7:
    v7 = 2 * v3;
    v8 = 0;
    v43 = v7;
    do
    {
      v47 = (hkClass::Self *)&v53[v8 / 2];
      v8 += 2;
      hkIArchive::readArrayGeneric(*((hkIArchive::Self **)v2 + 4), &v56, 2, 1);
      *(uint16_t *)v47 = v56;
    }
    while ( v8 != v43 );
  }
  hkIArchive::readArrayGeneric(*((hkIArchive::Self **)v2 + 4), &v56, 4, 1);
  v9 = v56;
  v10 = 0;
  v11 = (uint32_t)v56 == 0;
  v56 = 0;
  v57 = 0x80000000;
  if ( v11
    || (v52[0] = v9,
        v10 = (*(int (**)(uint32_t *, unsigned int *))(hkContainerHeapAllocator::s_alloc + 16))(
                (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                v52),
        v13 = v52[0],
        v52[0] == 0) )
  {
    v12 = 0;
    v13 = 0x80000000;
  }
  else
  {
    v12 = v52[0] & 0x3FFFFFFF;
  }
  v56 = __PAIR64__(v9, v10);
  v57 = v13;
  if ( v9 > v12 )
  {
    v14 = 2 * v12;
    if ( v14 < v9 )
      v14 = v9;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v51,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v56,
      v14,
      1);
    v10 = v56;
  }
  v37 = (void *)v10;
  v15 = *((hkIArchive::Self **)v2 + 4);
  HIDWORD(v56) = v9;
  hkIArchive::readRaw(v15, v37, v9);
  if ( v40 != 0 && v39 != 0 && v54 > 0 && v9 != 0 )
  {
    Member = hkClass::getMember((hkClass::Self *)HIDWORD(v39), *v53);
    v44 = v9;
    v17 = 1;
    v18 = *(uint8_t *)(Member + 12);
    v19 = (hkString::Self *)(HIDWORD(v40) + *(uint16_t *)(Member + 18));
    while ( 1 )
    {
      switch ( v18 )
      {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 24:
        case 30:
        case 31:
        case 32:
          if ( v19 != nullptr )
            hkString::memCpy(v19, (void *)v56, v44);
          goto LABEL_23;
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
          v18 = 12;
          v19 = (hkString::Self *)((char *)v19 + 16 * v53[v17]);
          goto LABEL_45;
        case 22:
        case 26:
          v46 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)Member;
          v30 = v53[v17];
          v49 = *(hkClass::Self **)v19;
          ArrayMemberSize = hkClassMember::getArrayMemberSize((hkClassMember::Self *)Member);
          Member = (int)(uintptr_t)(v46);
          v19 = (hkString::Self *)((hkClass::Self *)((char *)v49 + ArrayMemberSize * v30));
          v18 = *((uint8_t *)v46 + 13);
          goto LABEL_45;
        case 25:
          v50 = (hkClass::Self *)(v19);
          if ( *(uint32_t *)(Member + 4) == 0 )
            goto LABEL_23;
          StructClass = (hkClass::Self *)hkClassMember::getStructClass((hkClassMember::Self *)Member);
          if ( StructClass == nullptr )
            goto LABEL_23;
          Member = hkClass::getMember(StructClass, v53[v17]);
          v18 = *(uint8_t *)(Member + 12);
          v19 = (hkString::Self *)((hkClass::Self *)((char *)v50 + *(uint16_t *)(Member + 18)));
LABEL_45:
          ++v17;
          break;
        default:
          goto LABEL_23;
      }
    }
  }
LABEL_23:
  HIDWORD(v56) = 0;
  if ( v57 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v56,
      v57 & 0x3FFFFFFF);
  LODWORD(v56) = 0;
  v57 = 0x80000000;
  v54 = 0;
  if ( v55 >= 0 )
    (*(void (**)(uint32_t *, uint16_t *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v53,
      2 * (v55 & 0x3FFFFFFF));
}

// ----------------------------------------------------------------------------
// Function: hkObjectSerialize::readObject  (binary VA: 0x18ed7b0)
// Original: hkObjectSerialize::readObject
// ----------------------------------------------------------------------------
int hkObjectSerialize::readObject(int *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int *v5;
  uint32_t *v6;
  int result;
  int v8;
  int v9;
  int v10;
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
  hkMemoryAllocator::Self *v24;
  int v25;
  hkMemoryAllocator::Self *v26;
  unsigned int v27;
  unsigned int i;
  int *v29;
  int savedregs;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef hkMemoryAllocator::Self **_g4_t_v38;
  typedef hkMemoryAllocator::Self **_g4_t_v39;
  typedef int *_g4_t_v40;
  typedef int _g4_t_address;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t _g4_t_v47[4];
  typedef uint32_t _g4_t_v48[4];
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int **_g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef int *_g4_t_v55;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v30)) > _g4_s0 ? (12u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v31)) > _g4_s1 ? (16u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v32)) > _g4_s2 ? (20u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v33)) > _g4_s3 ? (24u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v34)) > _g4_s4 ? (28u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v35)) > _g4_s5 ? (32u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v36)) > _g4_s6 ? (32u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v37)) > _g4_s7 ? (32u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v38)) > _g4_s8 ? (36u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v39)) > _g4_s9 ? (40u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v40)) > _g4_s10 ? (44u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_address)) > _g4_s11 ? (44u + sizeof(_g4_t_address)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v42)) > _g4_s12 ? (48u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v43)) > _g4_s13 ? (48u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v44)) > _g4_s14 ? (52u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v45)) > _g4_s15 ? (56u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v46)) > _g4_s16 ? (60u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v47)) > _g4_s17 ? (64u + sizeof(_g4_t_v47)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v48)) > _g4_s18 ? (80u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v49)) > _g4_s19 ? (96u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v50)) > _g4_s20 ? (112u + sizeof(_g4_t_v50)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v51)) > _g4_s21 ? (116u + sizeof(_g4_t_v51)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v52)) > _g4_s22 ? (120u + sizeof(_g4_t_v52)) : _g4_s22,
    _g4_s24 = (136u + sizeof(_g4_t_v53)) > _g4_s23 ? (136u + sizeof(_g4_t_v53)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v54)) > _g4_s24 ? (140u + sizeof(_g4_t_v54)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v55)) > _g4_s25 ? (144u + sizeof(_g4_t_v55)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 80u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 96u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 112u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 116u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 120u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 136u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 140u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 144u);

  v53 = &a1;
  v5 = a1;
  v6 = a5;
  G4_VCALL<void>(a1, 24, &v49, 8, v30, v31, v32, v33, v34, v35, a2, a3, a4, v42, v44, v45, v46, v47[0], v47[1], v47[2], v47[3], v48[0], v48[1], v48[2], v48[3]);
  (*(void (**)(char *, int *))(*v5 + 20))((char *)&v46 + 3, v5);
  if ( HIBYTE(v46) == 0 )
    return 0;
  v8 = *v5;
  v54 = v6;
  v55 = (int *)((uint32_t *)byte_8);
  (*(void (**)(int *))(v8 + 24))(v5);
  (*(void (**)(char *, int *))(*v5 + 20))((char *)&v46 + 3, v5);
  if ( HIBYTE(v46) == 0 )
    return 0;
  v9 = *v5;
  v55 = (int *)((uint32_t *)&loc_4);
  v54 = v47;
  v50 = 0;
  v51 = 0;
  v52 = 0x80000000;
  (*(void (**)(int *))(v9 + 24))(v5);
  (*(void (**)(char *, int *))(*v5 + 20))((char *)&v46 + 3, v5);
  if ( HIBYTE(v46) != 0 )
  {
    v10 = v47[0];
    v11 = v47[0];
    if ( v47[0] > (v52 & 0x3FFFFFFF) )
    {
      v12 = 2 * (v52 & 0x3FFFFFFF);
      v55 = &v50;
      if ( v12 < v47[0] )
        v12 = v47[0];
      hkArrayUtil::reserve((hkArrayUtil::Self *)&v45, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v55, v12, 8);
      v11 = v47[0];
    }
    v51 = v10;
    v13 = 0;
    if ( v11 != 0 )
    {
      while ( 1 )
      {
        v14 = *v5;
        v36 = (uint32_t *)(v50 + 8 * v13);
        v54 = v36;
        v55 = (int *)((uint32_t *)&loc_4);
        (*(void (**)(int *))(v14 + 24))(v5);
        G4_VCALL<void>(v5, 24, v36 + 1, 4);
        (*(void (**)(char *, int *))(*v5 + 20))((char *)&v46 + 3, v5);
        if ( HIBYTE(v46) == 0 )
          break;
        if ( v47[0] <= (unsigned int)++v13 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      v15 = *v5;
      v55 = (int *)((uint32_t *)&loc_4);
      v54 = v48;
      (*(void (**)(int *))(v15 + 24))(v5);
      (*(void (**)(char *, int *))(*v5 + 20))((char *)&v46 + 3, v5);
      if ( HIBYTE(v46) != 0 )
      {
        v16 = v48[0];
        v17 = v48[0];
        v18 = v40[2] & 0x3FFFFFFF;
        if ( v48[0] > v18 )
        {
          v19 = 2 * v18;
          savedregs = 20;
          v53 = (int **)&v45;
          if ( v19 < v48[0] )
            v19 = v48[0];
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v53,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v40,
            v19,
            savedregs);
          v17 = v48[0];
        }
        v40[1] = v16;
        v20 = 0;
        if ( v17 != 0 )
        {
          while ( 1 )
          {
            v37 = v20;
            v21 = *v5;
            v22 = *v40 + 20 * v20;
            v55 = (int *)((uint32_t *)&loc_4);
            v54 = (uint32_t *)v22;
            (*(void (**)(int *))(v21 + 24))(v5);
            G4_VCALL<void>(v5, 24, v22 + 4, 8);
            G4_VCALL<void>(v5, 24, v22 + 12, 8);
            (*(void (**)(char *, int *))(*v5 + 20))((char *)&v46 + 3, v5);
            if ( HIBYTE(v46) == 0 )
              break;
            v20 = v37 + 1;
            if ( v48[0] <= (unsigned int)(v37 + 1) )
              goto LABEL_24;
          }
        }
        else
        {
LABEL_24:
          v23 = *v5;
          v54 = (uint32_t *)(v39);
          v55 = (int *)((uint32_t *)&loc_4);
          (*(void (**)(int *))(v23 + 24))(v5);
          (*(void (**)(char *, int *))(*v5 + 20))((char *)&v46 + 3, v5);
          if ( HIBYTE(v46) != 0 )
          {
            address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
            v24 = (hkMemoryAllocator::Self *)hkMemoryRouter::easyAlloc(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), *v39);
            v25 = *v5;
            v26 = *v39;
            v54 = (uint32_t *)(v24);
            v55 = (int *)v26;
            (*(void (**)(int *))(v25 + 24))(v5);
            (*(void (**)(char *, int *))(*v5 + 20))((char *)&v46 + 3, v5);
            if ( HIBYTE(v46) != 0 )
            {
              v27 = v47[0];
              for ( i = 0; i < v27; ++i )
              {
                v29 = (int *)(v50 + 8 * i);
                if ( *v29 >= 0 )
                {
                  *(uint32_t *)((char *)v24 + *v29) = (uint32_t)(uintptr_t)((char *)v24 + v29[1]);
                  v27 = v47[0];
                }
              }
              *v38 = v24;
              result = v49;
              goto LABEL_7;
            }
            hkMemoryRouter::easyFree(*(hkMemoryRouter::Self **)(*(uint32_t *)address + 44), v24);
          }
        }
      }
    }
  }
  result = 0;
LABEL_7:
  v51 = 0;
  if ( v52 >= 0 )
  {
    v43 = result;
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v50,
      8 * v52);
    return v43;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkObjectSerialize::writeObject  (binary VA: 0x18edb90)
// Original: hkObjectSerialize::writeObject
// ----------------------------------------------------------------------------
int hkObjectSerialize::writeObject(int a1, int a2, uint64_t a3, hkClass::Self *a4, hkRelocationInfo::Self *a5, int *a6, int a7, int a8)
{
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint32_t *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  hkClass::Self *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int *v26;
  int address;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int64_t _g4_t_v41;
  typedef char _g4_t_v42[4];
  typedef hkRelocationInfo::Self *_g4_t_v43;
  typedef hkPlatformObjectWriter::Self *_g4_t_v44;
  typedef hkClass::Self *_g4_t_v45;
  typedef hkClass::Self *_g4_t_v46;
  typedef hkClass::Self *_g4_t_v47;
  typedef uint64_t _g4_t_v48 __attribute__((aligned(1)));
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef hkRelocationInfo::Self *_g4_t_v55;
  typedef uint64_t _g4_t_v56 __attribute__((aligned(1)));
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint8_t _g4_t_v59[4];
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef hkPlatformObjectWriter::Cache::Self *_g4_t_v63[4];
  typedef uint8_t _g4_t_v64[16];
  typedef uint32_t _g4_t_v65[2];
  typedef int *_g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef char _g4_t_v71[4];
  typedef unsigned int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef char _g4_t_v74[4];
  typedef unsigned int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef unsigned int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int *_g4_t_v83;
  typedef int64_t _g4_t_v84;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (12u + sizeof(_g4_t_v35)) > _g4_s0 ? (12u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v36)) > _g4_s1 ? (16u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v37)) > _g4_s2 ? (20u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v38)) > _g4_s3 ? (24u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v39)) > _g4_s4 ? (28u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v40)) > _g4_s5 ? (32u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v41)) > _g4_s6 ? (32u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v42)) > _g4_s7 ? (36u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v43)) > _g4_s8 ? (40u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v44)) > _g4_s9 ? (44u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v45)) > _g4_s10 ? (48u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v46)) > _g4_s11 ? (48u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v47)) > _g4_s12 ? (48u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v48)) > _g4_s13 ? (52u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v49)) > _g4_s14 ? (52u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v50)) > _g4_s15 ? (60u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v51)) > _g4_s16 ? (60u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v52)) > _g4_s17 ? (64u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v53)) > _g4_s18 ? (64u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v54)) > _g4_s19 ? (64u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v55)) > _g4_s20 ? (68u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v56)) > _g4_s21 ? (68u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v57)) > _g4_s22 ? (68u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v58)) > _g4_s23 ? (76u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v59)) > _g4_s24 ? (80u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v60)) > _g4_s25 ? (84u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v61)) > _g4_s26 ? (88u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v62)) > _g4_s27 ? (92u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v63)) > _g4_s28 ? (100u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v64)) > _g4_s29 ? (116u + sizeof(_g4_t_v64)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v65)) > _g4_s30 ? (132u + sizeof(_g4_t_v65)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v66)) > _g4_s31 ? (140u + sizeof(_g4_t_v66)) : _g4_s31,
    _g4_s33 = (144u + sizeof(_g4_t_v67)) > _g4_s32 ? (144u + sizeof(_g4_t_v67)) : _g4_s32,
    _g4_s34 = (148u + sizeof(_g4_t_v68)) > _g4_s33 ? (148u + sizeof(_g4_t_v68)) : _g4_s33,
    _g4_s35 = (152u + sizeof(_g4_t_v69)) > _g4_s34 ? (152u + sizeof(_g4_t_v69)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v70)) > _g4_s35 ? (164u + sizeof(_g4_t_v70)) : _g4_s35,
    _g4_s37 = (168u + sizeof(_g4_t_v71)) > _g4_s36 ? (168u + sizeof(_g4_t_v71)) : _g4_s36,
    _g4_s38 = (172u + sizeof(_g4_t_v72)) > _g4_s37 ? (172u + sizeof(_g4_t_v72)) : _g4_s37,
    _g4_s39 = (176u + sizeof(_g4_t_v73)) > _g4_s38 ? (176u + sizeof(_g4_t_v73)) : _g4_s38,
    _g4_s40 = (180u + sizeof(_g4_t_v74)) > _g4_s39 ? (180u + sizeof(_g4_t_v74)) : _g4_s39,
    _g4_s41 = (184u + sizeof(_g4_t_v75)) > _g4_s40 ? (184u + sizeof(_g4_t_v75)) : _g4_s40,
    _g4_s42 = (188u + sizeof(_g4_t_v76)) > _g4_s41 ? (188u + sizeof(_g4_t_v76)) : _g4_s41,
    _g4_s43 = (192u + sizeof(_g4_t_v77)) > _g4_s42 ? (192u + sizeof(_g4_t_v77)) : _g4_s42,
    _g4_s44 = (196u + sizeof(_g4_t_v78)) > _g4_s43 ? (196u + sizeof(_g4_t_v78)) : _g4_s43,
    _g4_s45 = (200u + sizeof(_g4_t_v79)) > _g4_s44 ? (200u + sizeof(_g4_t_v79)) : _g4_s44,
    _g4_s46 = (204u + sizeof(_g4_t_v80)) > _g4_s45 ? (204u + sizeof(_g4_t_v80)) : _g4_s45,
    _g4_s47 = (208u + sizeof(_g4_t_v81)) > _g4_s46 ? (208u + sizeof(_g4_t_v81)) : _g4_s46,
    _g4_s48 = (212u + sizeof(_g4_t_v82)) > _g4_s47 ? (212u + sizeof(_g4_t_v82)) : _g4_s47,
    _g4_s49 = (236u + sizeof(_g4_t_v83)) > _g4_s48 ? (236u + sizeof(_g4_t_v83)) : _g4_s48,
    _g4_s50 = (240u + sizeof(_g4_t_v84)) > _g4_s49 ? (240u + sizeof(_g4_t_v84)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 64u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 68u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 80u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 84u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 88u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 92u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 100u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 116u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 132u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 140u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 144u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 148u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 152u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 164u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 168u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 172u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 176u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 180u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 184u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 188u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 192u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 196u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 200u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 204u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 208u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 212u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 236u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 240u);

  v83 = &a1;
  v50 = a1;
  v52 = a2;
  v48 = a3;
  v45 = a4;
  v55 = a5;
  v8 = a6;
  hkPlatformObjectWriter::Construct((hkPlatformObjectWriter::Self *)v63, a2, a7, a8);
  v67 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
  v65[0] = ((uint32_t)(uintptr_t)&off_2097A88);
  v66 = &v60;
  v60 = 0;
  v61 = 0;
  v62 = 0x80000000;
  v65[1] = -65535;
  v68 = 0;
  v69 = 1;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v59, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v60, 1, 1);
  *(uint8_t *)(*v66 + v66[1]) = 0;
  v70 = 0;
  *(uint32_t *)v71 = 0;
  v72 = 0x80000000;
  v73 = 0;
  *(uint32_t *)v74 = 0;
  v75 = 0x80000000;
  v76 = 0;
  v77 = 0;
  v78 = 0x80000000;
  v79 = 0;
  v80 = 0;
  v81 = 0x80000000;
  v82 = 0;
  hkPlatformObjectWriter::writeObject((hkPlatformObjectWriter::Self *)v59, v63, v65, v45, v55, (int)(uintptr_t)(&v70));
  v9 = *(uint32_t *)v74;
  v10 = *(uint32_t *)v74 + v8[1];
  v11 = v8[2] & 0x3FFFFFFF;
  if ( v10 > v11 )
  {
    v12 = 2 * v11;
    if ( v12 < v10 )
      v12 = *(uint32_t *)v74 + v8[1];
    hkArrayUtil::reserve((hkArrayUtil::Self *)v59, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v8, v12, 20);
    v9 = *(uint32_t *)v74;
  }
  v13 = 0;
  if ( v9 > 0 )
  {
    do
    {
      v19 = v8[1];
      if ( v19 == (v8[2] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)v8, 20, v36);
        v19 = v8[1];
      }
      v14 = *v8;
      v8[1] = v19 + 1;
      v15 = (uint32_t *)(v14 + 20 * v19);
      v16 = 16 * v13++;
      *v15 = *(uint32_t *)(v73 + v16);
      v17 = *(uint32_t *)(v73 + v16 + 4);
      v15[2] = 0;
      v15[1] = v17;
      v18 = *(uint32_t *)(v73 + v16 + 8);
      v15[4] = 0;
      v15[3] = v18;
    }
    while ( *(int *)v74 > v13 );
  }
  *(uint32_t *)v42 = v61;
  v40 = v60;
  hkOArchive::Construct((int)(uintptr_t)(v64), v50, *(uint8_t *)(v52 + 1) != BYTE1(hkStructureLayout::HostLayoutRules));
  hkOArchive::write64u((hkOArchive::Self *)v64, v48);
  (*(void (**)(char *, int, int, int, int, int, int, int, char *, int *, hkPlatformObjectWriter::Cache::Self **, hkClass::Self *, char *, uint32_t, int, int, hkRelocationInfo::Self *, uint32_t, int))(*(uint32_t *)v50 + 20))(
    (char *)&v58 + 3,
    v50,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    *(char **)v42,
    &v70,
    v63,
    v45,
    (char *)&v58 + 3,
    HIDWORD(v48),
    v50,
    v52,
    v55,
    0,
    v58);
  if ( HIBYTE(v58) != 0 )
  {
    hkOArchive::write64u((hkOArchive::Self *)v64, v56);
    v20 = *v51;
    LODWORD(v84) = (uint32_t)(uintptr_t)(v51);
    (*(void (**)(int))(v20 + 20))(v49);
    if ( HIBYTE(v58) != 0 )
    {
      v21 = *(hkClass::Self **)v71;
      v46 = *(hkClass::Self **)v71;
      hkOArchive::write32u((hkOArchive::Self *)v64, *(uint32_t *)v71);
      if ( v21 != nullptr )
      {
        v22 = 20;
        v23 = 0;
        while ( 1 )
        {
          v53 = v23;
          hkOArchive::write32((hkOArchive::Self *)v64, *(uint32_t *)(v70 + v22 - 20));
          hkOArchive::write32((hkOArchive::Self *)v64, *(uint32_t *)(v70 + v22 - 20 + 4));
          v24 = *v51;
          LODWORD(v84) = (uint32_t)(uintptr_t)(v51);
          (*(void (**)(int))(v24 + 20))(v49);
          if ( HIBYTE(v58) == 0 )
            break;
          v22 += 8;
          v23 = v53 + 1;
          if ( v46 == (hkClass::Self *)(v53 + 1) )
          {
            v54 = v22 + 4;
            goto LABEL_24;
          }
        }
      }
      else
      {
        v54 = 24;
LABEL_24:
        v29 = *(uint32_t *)v74;
        v47 = *(hkClass::Self **)v74;
        hkOArchive::write32u((hkOArchive::Self *)v64, *(uint32_t *)v74);
        if ( v29 != 0 )
        {
          v30 = 0;
          while ( 1 )
          {
            v31 = 16 * v30;
            v57 = v30;
            hkOArchive::write32((hkOArchive::Self *)v64, *(uint32_t *)(v73 + 16 * v30));
            hkOArchive::write64u((hkOArchive::Self *)v64, *(unsigned int *)(v73 + v31 + 4));
            hkOArchive::write64u((hkOArchive::Self *)v64, *(unsigned int *)(v73 + v31 + 8));
            v32 = *v51;
            LODWORD(v84) = (uint32_t)(uintptr_t)(v51);
            (*(void (**)(int))(v32 + 20))(v49);
            if ( HIBYTE(v58) == 0 )
              break;
            v54 += 20;
            v30 = v57 + 1;
            if ( v47 == (hkClass::Self *)(v57 + 1) )
              goto LABEL_29;
          }
        }
        else
        {
LABEL_29:
          hkOArchive::write32u((hkOArchive::Self *)v64, HIDWORD(v41));
          v33 = *v51;
          LODWORD(v84) = (uint32_t)(uintptr_t)(v51);
          (*(void (**)(int))(v33 + 20))(v49);
          if ( HIBYTE(v58) != 0 )
          {
            v34 = *v51;
            v84 = v41;
            (*(void (**)(int *))(v34 + 24))(v51);
            (*(void (**)(int, int *))(*v51 + 20))(v49, v51);
            if ( HIBYTE(v58) != 0 )
            {
              v25 = HIDWORD(v41) + v54 + 4;
              goto LABEL_17;
            }
          }
        }
      }
    }
  }
  v25 = -1;
LABEL_17:
  hkOArchive::Destroy((hkOArchive::Self *)v64);
  hkRelocationInfo::Destroy(v43);
  v65[0] = ((uint32_t)(uintptr_t)&off_2097A88);
  if ( v69 == 0 )
  {
    v26 = v66;
    if ( v66 != nullptr )
    {
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      (*(void (**)(uint32_t, int *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        v26,
        12);
    }
  }
  v61 = 0;
  v65[0] = ((uint32_t)(uintptr_t)&off_2054CB8);
  if ( v62 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v60,
      v62 & 0x3FFFFFFF);
  v60 = 0;
  v62 = 0x80000000;
  hkPlatformObjectWriter::Destroy(v44);
  return v25;
}

// ----------------------------------------------------------------------------
// Function: hkObjectSerialize::writeObject  (binary VA: 0x18ee1e0)
// Original: hkObjectSerialize::writeObject
// ----------------------------------------------------------------------------
int hkObjectSerialize::writeObject(hkOArchive::Self *a1, uint8_t a2, hkClass::Self *a3, hkClass::Self *a4, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a5, uint8_t a6, char a7, uint8_t a8, int a9, int a10, int a11)
{
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v11;
  int v12;
  int v13;
  int v15;
  hkRelocationInfo::Self *v16;
  int v17;
  void **v18;
  int address;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  typedef char _g4_t_v26;
  typedef uint8_t _g4_t_v27;
  typedef uint8_t _g4_t_v28;
  typedef uint8_t _g4_t_v29;
  typedef uint8_t _g4_t_v30;
  typedef hkOArchive::Self *_g4_t_v31;
  typedef hkClass::Self *_g4_t_v32;
  typedef char _g4_t_v33[4];
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t _g4_t_v36;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef hkRelocationInfo::Self *_g4_t_v39;
  typedef hkClass::Self *_g4_t_v40;
  typedef char _g4_t_v41[7];
  typedef char _g4_t_v42;
  typedef uint32_t _g4_t_v43[4];
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef void *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint32_t _g4_t_v50[2];
  typedef void **_g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef hkOArchive::Self **_g4_t_v55;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (14u + sizeof(_g4_t_v28)) > _g4_s2 ? (14u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (15u + sizeof(_g4_t_v29)) > _g4_s3 ? (15u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v30)) > _g4_s4 ? (16u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v31)) > _g4_s5 ? (20u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v32)) > _g4_s6 ? (24u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v33)) > _g4_s7 ? (24u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v34)) > _g4_s8 ? (28u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v35)) > _g4_s9 ? (32u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v36)) > _g4_s10 ? (36u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v37)) > _g4_s11 ? (36u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v38)) > _g4_s12 ? (40u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v39)) > _g4_s13 ? (44u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v40)) > _g4_s14 ? (48u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v41)) > _g4_s15 ? (52u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (59u + sizeof(_g4_t_v42)) > _g4_s16 ? (59u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v43)) > _g4_s17 ? (60u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v44)) > _g4_s18 ? (76u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v45)) > _g4_s19 ? (80u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v46)) > _g4_s20 ? (84u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v47)) > _g4_s21 ? (92u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v48)) > _g4_s22 ? (96u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v49)) > _g4_s23 ? (100u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v50)) > _g4_s24 ? (108u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v51)) > _g4_s25 ? (116u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v52)) > _g4_s26 ? (120u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v53)) > _g4_s27 ? (124u + sizeof(_g4_t_v53)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v54)) > _g4_s28 ? (128u + sizeof(_g4_t_v54)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v55)) > _g4_s29 ? (148u + sizeof(_g4_t_v55)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 14u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 15u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 59u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 84u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 92u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 96u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 100u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 108u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 116u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 120u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 124u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 128u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 148u);

  v55 = &a1;
  v31 = a1;
  v27 = a2;
  v40 = a3;
  v32 = a4;
  v36 = a6;
  v35 = a10;
  v11 = a5;
  v26 = a7;
  v29 = a6;
  v12 = a9;
  v30 = a8;
  v34 = a11;
  v28 = a8;
  v38 = a9;
  hkStructureLayout::Construct(v43, &hkStructureLayout::MsvcWin32LayoutRules);
  v44 = 0;
  v45 = 0;
  v46 = 0x80000000;
  if ( v12 == 0 )
  {
    v38 = (int)(uintptr_t)(hkSingleton<hkVtableClassRegistry::Self>::s_instance);
    if ( hkSingleton<hkVtableClassRegistry::Self>::s_instance == 0 )
    {
      v39 = (hkRelocationInfo::Self *)(v32);
LABEL_3:
      if ( v30 == 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  hkClass::hasVtable((hkClass::Self *)&v42, v32);
  v39 = (hkRelocationInfo::Self *)(v32);
  if ( v42 == 0 )
    goto LABEL_3;
  v15 = G4_VCALL<int>(v38, 28, v40);
  v16 = (hkRelocationInfo::Self *)(v32);
  if ( v15 != 0 )
    v16 = (hkRelocationInfo::Self *)v15;
  v39 = v16;
  if ( v30 != 0 )
  {
LABEL_11:
    if ( (signed int)hkMapBase_unsigned_long_unsigned_l_393416::findKey(
                       v11,
                       (unsigned int)(uintptr_t)(v39)) > *((uint32_t *)v11 + 2)
      && v40 != (hkClass::Self *)(uintptr_t)(v39) )
    {
      hkObjectSerialize::writeObject(v31, v27, v39, &hkClassClass, v11, v36, 1, 1, v38, v35, v34);
    }
  }
LABEL_4:
  v13 = 0;
  if ( (signed int)hkMapBase_unsigned_long_unsigned_l_393416::findKey(
                     v11,
                     (unsigned int)(uintptr_t)(v40)) > *((uint32_t *)v11 + 2) )
  {
    hkMapBase_unsigned_long_unsigned_l_393416::insert(
      v11,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (unsigned int)(uintptr_t)(v40),
      (unsigned int)(uintptr_t)(v39));
    v52 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
    v50[0] = ((uint32_t)(uintptr_t)&off_2097A88);
    v51 = &v47;
    v47 = nullptr;
    v48 = 0;
    v49 = 0x80000000;
    v50[1] = -65535;
    v53 = 0;
    v54 = 1;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v41,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v47,
      1,
      1);
    *((uint8_t *)v51[1] + (uint32_t)(uintptr_t)(*v51)) = 0;
    v13 = -1;
    v17 = hkObjectSerialize::writeObject((int)(uintptr_t)(v50), (int)(uintptr_t)(v43), (unsigned int)(uintptr_t)(v40), v40, v39, &v44, v35, v34);
    if ( v17 == v48 && v17 > 0 )
    {
      *(uint32_t *)v33 = v17 + 1;
      if ( v36 != 0 )
        hkOArchive::write32u(v31, *(uint32_t *)v33);
      hkOArchive::write8u(v31, v27);
      hkOArchive::writeRaw(v31, v47, v48);
      v13 = *(uint32_t *)v33;
      if ( v26 != 0 )
      {
        v20 = v45;
        if ( v45 > 0 )
        {
          v37 = v11;
          v21 = 0;
          v22 = *(uint32_t *)v33;
          do
          {
            v23 = v44 + 20 * v21;
            v24 = *(uint32_t *)(v23 + 4);
            v25 = *(uint32_t *)(v23 + 12);
            if ( v25 != 0 )
            {
              v22 += hkObjectSerialize::writeObject(v31, v27, v24, v25, v37, v29, 1, v28, v38, v35, v34);
              v20 = v45;
            }
            ++v21;
          }
          while ( v21 < v20 );
          v13 = v22;
        }
      }
    }
    v50[0] = ((uint32_t)(uintptr_t)&off_2097A88);
    if ( v54 == 0 )
    {
      v18 = v51;
      if ( v51 != nullptr )
      {
        address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
        (*(void (**)(uint32_t, void **, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
          *(uint32_t *)(*(uint32_t *)address + 44),
          v18,
          12);
      }
    }
    v48 = 0;
    v50[0] = ((uint32_t)(uintptr_t)&off_2054CB8);
    if ( v49 >= 0 )
      (*(void (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v47,
        v49 & 0x3FFFFFFF);
    v47 = nullptr;
    v49 = 0x80000000;
  }
  v45 = 0;
  if ( v46 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v44,
      20 * v46);
  return v13;
}

// ----------------------------------------------------------------------------
// Function: hkObjectSerialize::writeObject  (binary VA: 0x18ee6a0)
// Original: hkObjectSerialize::writeObject
// ----------------------------------------------------------------------------
int hkObjectSerialize::writeObject(hkOArchive::Self *a1, uint8_t a2, hkClass::Self *a3, hkClass::Self *a4, uint8_t a5, char a6, uint8_t a7, int a8, int a9, int a10)
{
  int v10;
  uint32_t v12[7];

  v12[0] = 0;
  v12[1] = 0;
  v12[2] = -1;
  v10 = hkObjectSerialize::writeObject(
          a1,
          a2,
          a3,
          a4,
          (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v12,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10);
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v12,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  return v10;
}

// ----------------------------------------------------------------------------
// Function: hkObjectSerialize::readObject  (binary VA: 0x18ee750)
// Original: hkObjectSerialize::readObject
// ----------------------------------------------------------------------------
int hkObjectSerialize::readObject(hkIArchive::Self *a1, int a2)
{
  hkIArchive::Self *v2;
  int *address;
  int v4;
  uint32_t *v5;
  uint64_t v6; // rax
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  volatile int32_t *v12;
  int (*v13)(int, int);
  int v14;
  int v15;
  int v16;
  int32_t v17; // kr00_4
  int32_t v18;
  int32_t v19; // ett
  int v20;
  uint32_t *v21;
  uint64_t v22; // rax
  int v24;
  hkClass::Self *v25;
  int Name;
  int v27;
  int v28;
  int32_t v29; // kr04_4
  typedef hkReferencedObject::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef hkString::Self *_g4_t_v34;
  typedef int *_g4_t_v35;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37[4];
  typedef void *_g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41[3];
  typedef int _g4_t_v42[134];
  enum : size_t {
    _g4_s0 = 688u,
    _g4_s1 = (4u + sizeof(_g4_t_v30)) > _g4_s0 ? (4u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v31)) > _g4_s1 ? (20u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v32)) > _g4_s2 ? (32u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v33)) > _g4_s3 ? (32u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v34)) > _g4_s4 ? (36u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v35)) > _g4_s5 ? (40u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (47u + sizeof(_g4_t_v36)) > _g4_s6 ? (47u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v37)) > _g4_s7 ? (48u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v38)) > _g4_s8 ? (52u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v39)) > _g4_s9 ? (56u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v40)) > _g4_s10 ? (60u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v41)) > _g4_s11 ? (72u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v42)) > _g4_s12 ? (84u + sizeof(_g4_t_v42)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 47u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 84u);

  v42[130] = (int)(uintptr_t)(&a1);
  v32 = a2;
  v2 = a1;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v4 = *address;
  v35 = address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("Ttread obj");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v4 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  v38 = nullptr;
  v39 = 0;
  v40 = 0x80000000;
  hkIArchive::readArrayGeneric(v2, v42, 4, 1);
  v7 = v42[0];
  if ( v42[0] > 0 )
  {
    v8 = 2 * (v40 & 0x3FFFFFFF);
    if ( v8 < v42[0] )
      v8 = v42[0];
    hkArrayUtil::reserve((hkArrayUtil::Self *)v37, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v38, v8, 1);
  }
  v39 = v7;
  hkIArchive::readRaw(v2, v38, v7);
  v9 = *v35;
  v10 = *(uint32_t *)(*v35 + 4);
  if ( v10 < *(uint32_t *)(*v35 + 12) )
  {
    v11 = v10 + 8;
    *(float *)(v11 - 4) = (float)v7;
    *(uint32_t *)(v11 - 8) = (uint32_t)(uintptr_t)("Mibytes");
    *(uint32_t *)(v9 + 4) = v11;
  }
  v42[0] = 1;
  v42[1] = 0;
  v42[2] = 0;
  v12 = (volatile int32_t *)hkSerializeUtil::loadOnHeap(v38, v39, v32, 1, 0, 0);
  if ( v12 != nullptr )
  {
    v33 = (*(int (**)(uint32_t *))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 24))(hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance);
    v13 = *(int (**)(int, int))(*(uint32_t *)v33 + 24);
    v14 = G4_VCALL<int>(v12, 36);
    if ( v13(v33, v14) != 0 )
    {
      hkClass::isSuperClass((hkClass::Self *)&v36, (const hkClass::Self *)&hkReferencedObjectClass);
      if ( v36 != 0 )
      {
        v34 = *(hkString::Self **)(*v12 + 32);
        v30 = (hkReferencedObject::Self *)hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance;
        v24 = (*(int (**)(void))(*hkSingleton<hkBuiltinTypeRegistry::Self>::s_instance + 20))();
        v25 = (hkClass::Self *)hkReferencedObject::staticClass(v30);
        Name = hkClass::getName(v25);
        v27 = ((int (*)(volatile int32_t *, int, int))v34)(v12, Name, v24);
        v15 = v27;
        if ( *(uint16_t *)(v27 + 6) != 0 )
        {
          do
          {
            v29 = *(uint32_t *)(v27 + 4);
            HIWORD(v28) = HIWORD(v29);
            LOWORD(v28) = 0;
          }
          while ( v29 != __sync_val_compare_and_swap(
                           (volatile int32_t *)(v27 + 4),
                           v29,
                           v28 | (uint16_t)(v29 + 1)) );
        }
      }
      else
      {
        hkErrStream::Construct((hkErrStream::Self *)v41, (hkString::Self *)v42, 512);
        hkOstream::opShl((int)(uintptr_t)(v41), (hkString::Self *)"Object is not a referenced object.  Ignoring");
        hkError::messageWarning(
          (hkError::Self *)0x4FDA0111,
          (int)(uintptr_t)(v42),
          "Serialize/hkObjectSerialize.cpp",
          (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_164)->st_shndx,
          v31);
        v15 = 0;
        hkErrStream::Destroy((hkErrStream::Self *)v41);
      }
    }
    else
    {
      hkErrStream::Construct((hkErrStream::Self *)v41, (hkString::Self *)v42, 512);
      hkOstream::opShl((int)(uintptr_t)(v41), (hkString::Self *)"Object hkClass not found.  Ignoring.");
      hkError::messageWarning(
        (hkError::Self *)0x4FDA0112,
        (int)(uintptr_t)(v42),
        "Serialize/hkObjectSerialize.cpp",
        (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_174)->st_name + 3,
        v31);
      v15 = 0;
      hkErrStream::Destroy((hkErrStream::Self *)v41);
    }
    if ( *((uint16_t *)v12 + 3) != 0 )
    {
      do
      {
        v17 = *((uint32_t *)v12 + 1);
        HIWORD(v16) = HIWORD(v17);
        LOWORD(v16) = 0;
        v18 = v16 | (uint16_t)(v17 - 1);
        v19 = v17;
      }
      while ( v19 != __sync_val_compare_and_swap(v12 + 1, v19, v18) );
      if ( (uint16_t)v18 == 0 )
        G4_VCALL<void>(v12, 16);
    }
  }
  else
  {
    hkErrStream::Construct((hkErrStream::Self *)v41, (hkString::Self *)v42, 512);
    hkOstream::opShl((int)(uintptr_t)(v41), (hkString::Self *)"Object could not be read from tagfile.");
    v15 = 0;
    hkError::messageWarning(
      (hkError::Self *)0x4FDA0113,
      (int)(uintptr_t)(v42),
      "Serialize/hkObjectSerialize.cpp",
      (const char *)&reinterpret_cast<G4Elf32Sym *>(stru_174)->st_size + 2,
      v31);
    hkErrStream::Destroy((hkErrStream::Self *)v41);
  }
  v20 = *v35;
  v21 = *(uint32_t **)(*v35 + 4);
  if ( (unsigned int)(uintptr_t)(v21) < *(uint32_t *)(*v35 + 12) )
  {
    *v21 = (uint32_t)(uintptr_t)("Et");
    v22 = __rdtsc();
    v21[1] = v22;
    *(uint32_t *)(v20 + 4) = (uint32_t)(uintptr_t)(v21 + 3);
  }
  v39 = 0;
  if ( v40 >= 0 )
    (*(void (**)(uint32_t *, void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v38,
      v40 & 0x3FFFFFFF);
  return v15;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayBox::getWireframeGeometry  (binary VA: 0x18eebb0)
// Original: hkDisplayBox::getWireframeGeometry
// ----------------------------------------------------------------------------
uint32_t * hkDisplayBox::getWireframeGeometry(hkDisplayBox::Self *self, hkArrayBase<hkVector4f::Self> *a2, hkMemoryAllocator::Self *a3)
{
  hkArrayBase<hkVector4f::Self> *v3;
  hkDisplayBox::Self *v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8; // xmm4_4
  float v9; // xmm3_4
  int v10;
  float v11; // xmm5_4
  float v12;
  int v13;
  float *v14;
  float v15; // xmm2_4
  int v16;
  int v17; // xmm1_4
  float v18; // xmm0_4
  uint32_t *result;
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
  hkArrayBase<hkVector4f::Self> *v35;
  int v36;
  char v37[4];
  float v38;
  int v39;
  float v40;
  int v41;
  uint32_t v42[38];

  v42[34] = (uint32_t)(uintptr_t)(&self);
  v3 = a2;
  v4 = self;
  v35 = a2;
  v5 = *((uint32_t *)a2 + 2) & 0x3FFFFFFF;
  if ( v5 <= 0x17 )
  {
    v6 = 2 * v5;
    v7 = 24;
    if ( v6 >= 24 )
      v7 = v6;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v37, a3, (int *)a2, v7, 16);
    v3 = v35;
  }
  *((uint32_t *)v3 + 1) = 24;
  v8 = *((uint32_t *)v4 + 25);
  v38 = *((float *)v4 + 24);
  v9 = *((float *)v4 + 26);
  v10 = *((uint32_t *)v4 + 27);
  v11 = *((float *)v4 + 24);
  v39 = *((uint32_t *)v4 + 25);
  v12 = *((float *)v4 + 26);
  v13 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_xor_ps(g4_to_m128((unsigned int)v8), g4_m128_from<__m128>(0x80000000))));
  v40 = v12;
  v41 = v10;
  v14 = (float *)v42;
  v15 = v11;
  v16 = 0;
  while ( 1 )
  {
    v17 = v8;
    if ( (v16 & 2) != 0 )
      v17 = v13;
    v18 = v9;
    if ( (v16 & 4) != 0 )
      v18 = -v9;
    v38 = v15;
    v39 = v17;
    *v14 = v15;
    ++v16;
    v40 = v18;
    *((uint32_t *)v14 + 1) = v39;
    v14[2] = v40;
    *((uint32_t *)v14 + 3) = v41;
    if ( v16 == 8 )
      break;
    v41 = v10;
    v15 = v11;
    if ( (v16 & 1) != 0 )
      v15 = -v11;
    v14 += 4;
  }
  v36 = 0;
  result = v42;
  v34 = 0;
  do
  {
    if ( (v36 ^ 1) > v36 )
    {
      v20 = 16 * v34;
      v21 = 4 * (v36 ^ 1);
      v34 += 2;
      v22 = *(uint32_t *)v35;
      *(uint32_t *)(v22 + v20) = *result;
      *(uint32_t *)(v22 + v20 + 4) = result[1];
      *(uint32_t *)(v22 + v20 + 8) = result[2];
      *(uint32_t *)(v22 + v20 + 12) = result[3];
      v23 = *(uint32_t *)v35;
      *(uint32_t *)(v23 + v20 + 16) = v42[v21];
      *(uint32_t *)(v23 + v20 + 20) = v42[v21 + 1];
      *(uint32_t *)(v23 + v20 + 24) = v42[v21 + 2];
      *(uint32_t *)(v23 + v20 + 28) = v42[v21 + 3];
    }
    v24 = v36;
    if ( v36 < (v36 ^ 2) )
    {
      v25 = 16 * v34;
      v26 = 4 * (v36 ^ 2);
      v34 += 2;
      v27 = *(uint32_t *)v35;
      *(uint32_t *)(v27 + v25) = *result;
      *(uint32_t *)(v27 + v25 + 4) = result[1];
      *(uint32_t *)(v27 + v25 + 8) = result[2];
      *(uint32_t *)(v27 + v25 + 12) = result[3];
      v28 = *(uint32_t *)v35;
      *(uint32_t *)(v28 + v25 + 16) = v42[v26];
      *(uint32_t *)(v28 + v25 + 20) = v42[v26 + 1];
      *(uint32_t *)(v28 + v25 + 24) = v42[v26 + 2];
      *(uint32_t *)(v28 + v25 + 28) = v42[v26 + 3];
      v24 = v36;
    }
    v29 = v24 ^ 4;
    if ( (v24 ^ 4) > v24 )
    {
      v30 = 16 * v34;
      v31 = 4 * v29;
      v34 += 2;
      v32 = *(uint32_t *)v35;
      *(uint32_t *)(v32 + v30) = *result;
      *(uint32_t *)(v32 + v30 + 4) = result[1];
      *(uint32_t *)(v32 + v30 + 8) = result[2];
      *(uint32_t *)(v32 + v30 + 12) = result[3];
      v33 = *(uint32_t *)v35;
      *(uint32_t *)(v33 + v30 + 16) = v42[v31];
      *(uint32_t *)(v33 + v30 + 20) = v42[v31 + 1];
      *(uint32_t *)(v33 + v30 + 24) = v42[v31 + 2];
      *(uint32_t *)(v33 + v30 + 28) = v42[v31 + 3];
    }
    ++v36;
    result += 4;
  }
  while ( v36 != 8 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayBox::Destroy  (binary VA: 0x18ef360)
// Original: hkDisplayBox::~hkDisplayBox
// ----------------------------------------------------------------------------
void hkDisplayBox::Destroy(hkDisplayBox::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8E88);
  g4_noop_dtor(self);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayBox::Destroy_ea18ef390  (binary VA: 0x18ef390)
// Original: hkDisplayBox::~hkDisplayBox
// ----------------------------------------------------------------------------
void hkDisplayBox::Destroy_ea18ef390(hkDisplayBox::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8E88);
  g4_noop_dtor(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 112;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayBox::buildGeometry  (binary VA: 0x18ef400)
// Original: hkDisplayBox::buildGeometry
// ----------------------------------------------------------------------------
uint32_t * hkDisplayBox::buildGeometry(hkDisplayBox::Self *self)
{
  hkDisplayBox::Self *v1;
  int address;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9; // xmm2_4
  float v10; // xmm1_4
  int v11; // xmm3_4
  int v12; // xmm2_4
  int v13; // xmm3_4
  int v14; // xmm1_4
  int v15; // xmm3_4
  float v16; // xmm1_4
  int v17; // xmm2_4
  float v18; // xmm1_4
  int v19; // xmm3_4
  float v20; // xmm1_4
  int v21; // xmm3_4
  int v22; // xmm3_4
  float v23; // xmm1_4
  int v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  int *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  uint32_t *v35;
  int *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  uint32_t *v41;
  int *v42;
  int v43;
  int v44;
  int v45;
  int v46;
  uint32_t *v47;
  int *v48;
  int v49;
  int v50;
  int v51;
  int v52;
  uint32_t *v53;
  int *v54;
  int v55;
  int v56;
  int v57;
  int v58;
  uint32_t *v59;
  int *v60;
  int v61;
  int v62;
  int v63;
  int v64;
  uint32_t *v65;
  int *v66;
  int v67;
  int v68;
  int v69;
  int v70;
  uint32_t *v71;
  int *v72;
  int v73;
  int v74;
  int v75;
  int v76;
  uint32_t *v77;
  int *v78;
  int v79;
  int v80;
  int v81;
  int v82;
  uint32_t *v83;
  int *v84;
  int v85;
  int v86;
  int v87;
  int v88;
  uint32_t *v89;
  int *v90;
  int v91;
  int v92;
  int v93;
  int v94;
  uint32_t *v95;
  int *v96;
  int v97;
  int v98;
  int v99;
  int v100;
  uint32_t *result;
  int savedregs;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef uint32_t _g4_t_v119[3];
  typedef hkArrayUtil::Self *_g4_t_v120;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v102)) > _g4_s0 ? (0u + sizeof(_g4_t_v102)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v103)) > _g4_s1 ? (4u + sizeof(_g4_t_v103)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v104)) > _g4_s2 ? (8u + sizeof(_g4_t_v104)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v105)) > _g4_s3 ? (12u + sizeof(_g4_t_v105)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v106)) > _g4_s4 ? (16u + sizeof(_g4_t_v106)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v107)) > _g4_s5 ? (16u + sizeof(_g4_t_v107)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v108)) > _g4_s6 ? (16u + sizeof(_g4_t_v108)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v109)) > _g4_s7 ? (16u + sizeof(_g4_t_v109)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v110)) > _g4_s8 ? (16u + sizeof(_g4_t_v110)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v111)) > _g4_s9 ? (16u + sizeof(_g4_t_v111)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v112)) > _g4_s10 ? (16u + sizeof(_g4_t_v112)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v113)) > _g4_s11 ? (16u + sizeof(_g4_t_v113)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v114)) > _g4_s12 ? (16u + sizeof(_g4_t_v114)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v115)) > _g4_s13 ? (16u + sizeof(_g4_t_v115)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v116)) > _g4_s14 ? (16u + sizeof(_g4_t_v116)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v117)) > _g4_s15 ? (16u + sizeof(_g4_t_v117)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v118)) > _g4_s16 ? (16u + sizeof(_g4_t_v118)) : _g4_s16,
    _g4_s18 = (20u + sizeof(_g4_t_v119)) > _g4_s17 ? (20u + sizeof(_g4_t_v119)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v120)) > _g4_s18 ? (32u + sizeof(_g4_t_v120)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 0u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 4u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 8u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 12u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 16u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 16u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 16u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 16u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 16u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 16u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 16u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 16u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 16u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 16u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 16u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 16u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 16u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 20u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 32u);

  v120 = (hkArrayUtil::Self *)&self;
  v1 = self;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (uint32_t *)(*(int (**)(uint32_t, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   32,
                   v102,
                   v103,
                   v104,
                   v105,
                   v106,
                   v119[0],
                   v119[1],
                   v119[2]);
  v3[1] = -65535;
  *v3 = ((uint32_t)(uintptr_t)&off_20586B8);
  v3[3] = 0;
  v3[4] = 0x80000000;
  v3[2] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0x80000000;
  *((uint32_t *)v1 + 2) = (uint32_t)(uintptr_t)(v3);
  v4 = v3[3];
  v5 = v3[4] & 0x3FFFFFFF;
  v6 = v4 + 8;
  if ( v4 + 8 > v5 )
  {
    v7 = 2 * v5;
    v107 = v3[3];
    savedregs = 16;
    v120 = (hkArrayUtil::Self *)v119;
    if ( v7 >= v6 )
      v6 = v7;
    hkArrayUtil::reserve(v120, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v3 + 2, v6, savedregs);
    v6 = v3[3] + 8;
    v4 = v107;
  }
  v8 = v3[2] + 16 * v4;
  v3[3] = v6;
  v9 = *((uint32_t *)v1 + 26);
  v10 = -*((float *)v1 + 24);
  v11 = *((uint32_t *)v1 + 25);
  *(uint32_t *)(v8 + 12) = 0;
  *(float *)v8 = v10;
  *(uint32_t *)(v8 + 4) = v11;
  *(uint32_t *)(v8 + 8) = v9;
  v12 = *((uint32_t *)v1 + 26);
  v13 = *((uint32_t *)v1 + 25);
  v14 = *((uint32_t *)v1 + 24);
  *(uint32_t *)(v8 + 28) = 0;
  *(uint32_t *)(v8 + 16) = v14;
  *(uint32_t *)(v8 + 20) = v13;
  *(uint32_t *)(v8 + 24) = v12;
  v15 = *((uint32_t *)v1 + 26);
  v16 = -*((float *)v1 + 25);
  v17 = *((uint32_t *)v1 + 24);
  *(uint32_t *)(v8 + 44) = 0;
  *(uint32_t *)(v8 + 32) = v17;
  *(float *)(v8 + 36) = v16;
  *(uint32_t *)(v8 + 40) = v15;
  v18 = -*((float *)v1 + 25);
  v19 = *((uint32_t *)v1 + 26);
  *(float *)(v8 + 48) = -*((float *)v1 + 24);
  *(uint32_t *)(v8 + 60) = 0;
  *(float *)(v8 + 52) = v18;
  *(uint32_t *)(v8 + 56) = v19;
  v20 = -*((float *)v1 + 26);
  v21 = *((uint32_t *)v1 + 25);
  *(float *)(v8 + 64) = -*((float *)v1 + 24);
  *(uint32_t *)(v8 + 76) = 0;
  *(uint32_t *)(v8 + 68) = v21;
  *(float *)(v8 + 72) = v20;
  v22 = *((uint32_t *)v1 + 25);
  v23 = -*((float *)v1 + 26);
  v24 = *((uint32_t *)v1 + 24);
  *(uint32_t *)(v8 + 92) = 0;
  *(uint32_t *)(v8 + 80) = v24;
  *(uint32_t *)(v8 + 84) = v22;
  *(float *)(v8 + 88) = v23;
  v25 = -*((float *)v1 + 26);
  v26 = -*((float *)v1 + 25);
  *(uint32_t *)(v8 + 96) = *((uint32_t *)v1 + 24);
  *(uint32_t *)(v8 + 108) = 0;
  *(float *)(v8 + 100) = v26;
  *(float *)(v8 + 104) = v25;
  v27 = -*((float *)v1 + 26);
  v28 = -*((float *)v1 + 25);
  v29 = -*((float *)v1 + 24);
  *(uint32_t *)(v8 + 124) = 0;
  *(float *)(v8 + 112) = v29;
  *(float *)(v8 + 116) = v28;
  *(float *)(v8 + 120) = v27;
  v30 = *((int **)v1 + 2);
  v31 = v30[6];
  v32 = v30[7] & 0x3FFFFFFF;
  v33 = v31 + 1;
  if ( v31 + 1 > v32 )
  {
    v34 = 2 * v32;
    v108 = v30[6];
    savedregs = 16;
    v120 = (hkArrayUtil::Self *)v119;
    if ( v34 >= v33 )
      v33 = v34;
    hkArrayUtil::reserve(v120, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v30 + 5, v33, savedregs);
    v33 = v30[6] + 1;
    v31 = v108;
  }
  v35 = (uint32_t *)(v30[5] + 16 * v31);
  v30[6] = v33;
  *v35 = 3;
  v35[1] = 2;
  v35[2] = 1;
  v35[3] = -1;
  v36 = *((int **)v1 + 2);
  v37 = v36[6];
  v38 = v36[7] & 0x3FFFFFFF;
  v39 = v37 + 1;
  if ( v37 + 1 > v38 )
  {
    v40 = 2 * v38;
    v109 = v36[6];
    savedregs = 16;
    v120 = (hkArrayUtil::Self *)v119;
    if ( v40 >= v39 )
      v39 = v40;
    hkArrayUtil::reserve(v120, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v36 + 5, v39, savedregs);
    v39 = v36[6] + 1;
    v37 = v109;
  }
  v41 = (uint32_t *)(v36[5] + 16 * v37);
  v36[6] = v39;
  *v41 = 3;
  v41[1] = 1;
  v41[2] = 0;
  v41[3] = -1;
  v42 = *((int **)v1 + 2);
  v43 = v42[6];
  v44 = v42[7] & 0x3FFFFFFF;
  v45 = v43 + 1;
  if ( v43 + 1 > v44 )
  {
    v46 = 2 * v44;
    v110 = v42[6];
    savedregs = 16;
    v120 = (hkArrayUtil::Self *)v119;
    if ( v46 >= v45 )
      v45 = v46;
    hkArrayUtil::reserve(v120, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v42 + 5, v45, savedregs);
    v45 = v42[6] + 1;
    v43 = v110;
  }
  v47 = (uint32_t *)(v42[5] + 16 * v43);
  v42[6] = v45;
  *v47 = 6;
  v47[1] = 7;
  v47[2] = 4;
  v47[3] = -1;
  v48 = *((int **)v1 + 2);
  v49 = v48[6];
  v50 = v48[7] & 0x3FFFFFFF;
  v51 = v49 + 1;
  if ( v49 + 1 > v50 )
  {
    v52 = 2 * v50;
    v111 = v48[6];
    savedregs = 16;
    v120 = (hkArrayUtil::Self *)v119;
    if ( v52 >= v51 )
      v51 = v52;
    hkArrayUtil::reserve(v120, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v48 + 5, v51, savedregs);
    v51 = v48[6] + 1;
    v49 = v111;
  }
  v53 = (uint32_t *)(v48[5] + 16 * v49);
  v48[6] = v51;
  *v53 = 6;
  v53[1] = 4;
  v53[2] = 5;
  v53[3] = -1;
  v54 = *((int **)v1 + 2);
  v55 = v54[6];
  v56 = v54[7] & 0x3FFFFFFF;
  v57 = v55 + 1;
  if ( v55 + 1 > v56 )
  {
    v58 = 2 * v56;
    v112 = v54[6];
    savedregs = 16;
    v120 = (hkArrayUtil::Self *)v119;
    if ( v58 >= v57 )
      v57 = v58;
    hkArrayUtil::reserve(v120, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v54 + 5, v57, savedregs);
    v57 = v54[6] + 1;
    v55 = v112;
  }
  v59 = (uint32_t *)(v54[5] + 16 * v55);
  v54[6] = v57;
  *v59 = 4;
  v59[1] = 7;
  v59[2] = 3;
  v59[3] = -1;
  v60 = *((int **)v1 + 2);
  v61 = v60[6];
  v62 = v60[7] & 0x3FFFFFFF;
  v63 = v61 + 1;
  if ( v61 + 1 > v62 )
  {
    v64 = 2 * v62;
    v113 = v60[6];
    savedregs = 16;
    v120 = (hkArrayUtil::Self *)v119;
    if ( v64 >= v63 )
      v63 = v64;
    hkArrayUtil::reserve(v120, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v60 + 5, v63, savedregs);
    v63 = v60[6] + 1;
    v61 = v113;
  }
  v65 = (uint32_t *)(v60[5] + 16 * v61);
  v60[6] = v63;
  *v65 = 4;
  v65[1] = 3;
  v65[2] = 0;
  v65[3] = -1;
  v66 = *((int **)v1 + 2);
  v67 = v66[6];
  v68 = v66[7] & 0x3FFFFFFF;
  v69 = v67 + 1;
  if ( v67 + 1 > v68 )
  {
    v70 = 2 * v68;
    v114 = v66[6];
    savedregs = 16;
    v120 = (hkArrayUtil::Self *)v119;
    if ( v70 >= v69 )
      v69 = v70;
    hkArrayUtil::reserve(v120, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v66 + 5, v69, savedregs);
    v69 = v66[6] + 1;
    v67 = v114;
  }
  v71 = (uint32_t *)(v66[5] + 16 * v67);
  v66[6] = v69;
  *v71 = 2;
  v71[1] = 6;
  v71[2] = 5;
  v71[3] = -1;
  v72 = *((int **)v1 + 2);
  v73 = v72[6];
  v74 = v72[7] & 0x3FFFFFFF;
  v75 = v73 + 1;
  if ( v73 + 1 > v74 )
  {
    v76 = 2 * v74;
    v115 = v72[6];
    savedregs = 16;
    v120 = (hkArrayUtil::Self *)v119;
    if ( v76 >= v75 )
      v75 = v76;
    hkArrayUtil::reserve(v120, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v72 + 5, v75, savedregs);
    v75 = v72[6] + 1;
    v73 = v115;
  }
  v77 = (uint32_t *)(v72[5] + 16 * v73);
  v72[6] = v75;
  *v77 = 2;
  v77[1] = 5;
  v77[2] = 1;
  v77[3] = -1;
  v78 = *((int **)v1 + 2);
  v79 = v78[6];
  v80 = v78[7] & 0x3FFFFFFF;
  v81 = v79 + 1;
  if ( v79 + 1 > v80 )
  {
    v82 = 2 * v80;
    v116 = v78[6];
    savedregs = 16;
    v120 = (hkArrayUtil::Self *)v119;
    if ( v82 >= v81 )
      v81 = v82;
    hkArrayUtil::reserve(v120, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v78 + 5, v81, savedregs);
    v81 = v78[6] + 1;
    v79 = v116;
  }
  v83 = (uint32_t *)(v78[5] + 16 * v79);
  v78[6] = v81;
  *v83 = 7;
  v83[1] = 6;
  v83[2] = 2;
  v83[3] = -1;
  v84 = *((int **)v1 + 2);
  v85 = v84[6];
  v86 = v84[7] & 0x3FFFFFFF;
  v87 = v85 + 1;
  if ( v85 + 1 > v86 )
  {
    v88 = 2 * v86;
    v117 = v84[6];
    savedregs = 16;
    v120 = (hkArrayUtil::Self *)v119;
    if ( v88 >= v87 )
      v87 = v88;
    hkArrayUtil::reserve(v120, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v84 + 5, v87, savedregs);
    v87 = v84[6] + 1;
    v85 = v117;
  }
  v89 = (uint32_t *)(v84[5] + 16 * v85);
  v84[6] = v87;
  *v89 = 7;
  v89[1] = 2;
  v89[2] = 3;
  v89[3] = -1;
  v90 = *((int **)v1 + 2);
  v91 = v90[6];
  v92 = v90[7] & 0x3FFFFFFF;
  v93 = v91 + 1;
  if ( v91 + 1 > v92 )
  {
    v94 = 2 * v92;
    v118 = v90[6];
    savedregs = 16;
    v120 = (hkArrayUtil::Self *)v119;
    if ( v94 >= v93 )
      v93 = v94;
    hkArrayUtil::reserve(v120, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v90 + 5, v93, savedregs);
    v93 = v90[6] + 1;
    v91 = v118;
  }
  v95 = (uint32_t *)(v90[5] + 16 * v91);
  v90[6] = v93;
  *v95 = 1;
  v95[1] = 5;
  v95[2] = 4;
  v95[3] = -1;
  v96 = *((int **)v1 + 2);
  v97 = v96[6];
  v98 = v96[7] & 0x3FFFFFFF;
  v99 = v97 + 1;
  if ( v97 + 1 > v98 )
  {
    v100 = 2 * v98;
    v120 = (hkArrayUtil::Self *)v119;
    savedregs = 16;
    if ( v100 < v99 )
      v100 = v97 + 1;
    hkArrayUtil::reserve(v120, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v96 + 5, v100, savedregs);
    v99 = v96[6] + 1;
  }
  v96[6] = v99;
  result = (uint32_t *)(v96[5] + 16 * v97);
  *result = 1;
  result[1] = 4;
  result[2] = 0;
  result[3] = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayBox::Construct  (binary VA: 0x18efc00)
// Original: hkDisplayBox::hkDisplayBox
// ----------------------------------------------------------------------------
void hkDisplayBox::Construct(hkDisplayBox::Self *self, const hkVector4f::Self *a2)
{
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 20) = 2;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8E88);
  *((uint32_t *)self + 24) = *(uint32_t *)a2;
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 24) = *(uint32_t *)a2;
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 3);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayBox::Construct  (binary VA: 0x18efcf0)
// Original: hkDisplayBox::hkDisplayBox
// ----------------------------------------------------------------------------
void hkDisplayBox::Construct(hkDisplayBox::Self *self)
{
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 20) = 2;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8E88);
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayBox::setParameters  (binary VA: 0x18efdc0)
// Original: hkDisplayBox::setParameters
// ----------------------------------------------------------------------------
hkDisplayBox::Self * hkDisplayBox::setParameters(hkDisplayBox::Self *self, const hkVector4f::Self *a2, const hkTransformf::Self *a3)
{
  *((uint32_t *)self + 24) = *(uint32_t *)a2;
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *(uint32_t *)a3;
  *((uint32_t *)self + 5) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 6) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 7) = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 8) = *((uint32_t *)a3 + 4);
  *((uint32_t *)self + 9) = *((uint32_t *)a3 + 5);
  *((uint32_t *)self + 10) = *((uint32_t *)a3 + 6);
  *((uint32_t *)self + 11) = *((uint32_t *)a3 + 7);
  *((uint32_t *)self + 12) = *((uint32_t *)a3 + 8);
  *((uint32_t *)self + 13) = *((uint32_t *)a3 + 9);
  *((uint32_t *)self + 14) = *((uint32_t *)a3 + 10);
  *((uint32_t *)self + 15) = *((uint32_t *)a3 + 11);
  *((uint32_t *)self + 16) = *((uint32_t *)a3 + 12);
  *((uint32_t *)self + 17) = *((uint32_t *)a3 + 13);
  *((uint32_t *)self + 18) = *((uint32_t *)a3 + 14);
  *((uint32_t *)self + 19) = *((uint32_t *)a3 + 15);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkProcessContext::setOwner  (binary VA: 0x18efe50)
// Original: hkProcessContext::setOwner
// ----------------------------------------------------------------------------
hkProcessContext::Self * hkProcessContext::setOwner(hkProcessContext::Self *self, hkVisualDebugger::Self *a2)
{
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkProcessContext::Destroy  (binary VA: 0x18efe60)
// Original: hkProcessContext::~hkProcessContext
// ----------------------------------------------------------------------------
void hkProcessContext::Destroy(hkProcessContext::Self *self)
{
  hkVisualDebugger::Self *v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8EB8);
  v1 = *((hkVisualDebugger::Self **)self + 1);
  if ( v1 != nullptr )
    hkVisualDebugger::removeContext(v1, self);
  v2 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 12) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      4 * v2);
  v3 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      4 * v3);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkProcessContext::Destroy_ea18eff10  (binary VA: 0x18eff10)
// Original: hkProcessContext::~hkProcessContext
// ----------------------------------------------------------------------------
void hkProcessContext::Destroy_ea18eff10(hkProcessContext::Self *self)
{
  int address;

  hkProcessContext::Destroy(self);
  if ( self != nullptr )
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, hkProcessContext::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      self,
      80);
  }
}

// ----------------------------------------------------------------------------
// Function: hkProcessContext::addThreadPoolTimers  (binary VA: 0x18eff60)
// Original: hkProcessContext::addThreadPoolTimers
// ----------------------------------------------------------------------------
int hkProcessContext::addThreadPoolTimers(uint32_t *a1, int a2, int a3, int a4, int a5, int a6)
{
  int address;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int result;
  int savedregs;
  hkMemoryAllocator::Self *retaddr;
  hkMemoryAllocator::Self *v24;
  int v25;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v21[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v17)) > _g4_s1 ? (16u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v18)) > _g4_s2 ? (20u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v19)) > _g4_s3 ? (24u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v20)) > _g4_s4 ? (28u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);

  v21[0] = 0;
  v21[1] = 0;
  v21[2] = 0x80000000;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  G4_VCALL<void>(a2, 44, v21, *(uint32_t *)(*(uint32_t *)address + 40), v16, v17, v18, v19, v20);
  retaddr = (hkMemoryAllocator::Self *)(a1 + 2);
  v24 = (hkMemoryAllocator::Self *)(a1 + 11);
  v25 = 0;
  if ( a5 > 0 )
  {
    v8 = 0;
    do
    {
      v12 = 8 * v8;
      v13 = a1[3];
      v14 = (uint32_t *)(8 * v8 + a4);
      if ( v13 == (a1[4] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, retaddr, 4, savedregs);
        v13 = a1[3];
        v14 = (uint32_t *)(v12 + a4);
      }
      *(uint32_t *)(a1[2] + 4 * v13) = *v14;
      v9 = a1[12];
      v10 = a1[13] & 0x3FFFFFFF;
      ++a1[3];
      v11 = a4 + v12;
      if ( v9 == v10 )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v24, 4, savedregs);
        v9 = a1[12];
      }
      ++v25;
      *(uint32_t *)(a1[11] + 4 * v9) = *(uint32_t *)(v11 + 4);
      v8 = v25;
      ++a1[12];
    }
    while ( a5 > v25 );
  }
  result = a6;
  if ( a6 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             a4,
             8 * a6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkProcessContext::syncTimers  (binary VA: 0x18f00d0)
// Original: hkProcessContext::syncTimers
// ----------------------------------------------------------------------------
int hkProcessContext::syncTimers(uint32_t *a1, int a2)
{
  int **address;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;
  int v8;
  int v9;
  int v10;
  int v11;

  a1[3] = 0;
  a1[12] = 0;
  address = (int **)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v3 = **address;
  v4 = 0;
  if ( (a1[4] & 0x3FFFFFFF) == 0 )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkMemoryAllocator::Self *)(a1 + 2),
      4,
      (int)(uintptr_t)(address));
    address = (int **)v9;
    v4 = 4 * a1[3];
  }
  *(uint32_t *)(a1[2] + v4) = v3;
  ++a1[3];
  v5 = a1[12];
  v6 = (*address)[1];
  if ( v5 == (a1[13] & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 11), 4, v9);
    v5 = a1[12];
  }
  result = a1[11];
  *(uint32_t *)(result + 4 * v5) = v6;
  ++a1[12];
  if ( a2 != 0 )
    return hkProcessContext::addThreadPoolTimers(a1, a2, v8, v9, v10, v11);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayAABB::getWireframeGeometry  (binary VA: 0x18f01b0)
// Original: hkDisplayAABB::getWireframeGeometry
// ----------------------------------------------------------------------------
uint32_t * hkDisplayAABB::getWireframeGeometry(hkDisplayAABB::Self *self, hkArrayBase<hkVector4f::Self> *a2, hkMemoryAllocator::Self *a3)
{
  unsigned int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7; // xmm1_4
  int v8; // xmm2_4
  uint32_t *v9;
  int v10; // xmm1_4
  int v11; // xmm2_4
  uint32_t *v12;
  int v13; // xmm1_4
  int v14; // xmm2_4
  uint32_t *v15;
  int v16; // xmm1_4
  int v17; // xmm2_4
  uint32_t *v18;
  int v19; // xmm1_4
  int v20; // xmm2_4
  uint32_t *v21;
  int v22; // xmm1_4
  int v23; // xmm2_4
  uint32_t *v24;
  int v25; // xmm1_4
  int v26; // xmm2_4
  uint32_t *v27;
  int v28; // xmm1_4
  int v29; // xmm2_4
  uint32_t *v30;
  int v31; // xmm1_4
  int v32; // xmm2_4
  int v33; // xmm1_4
  uint32_t *v34;
  int v35; // xmm2_4
  uint32_t *v36;
  int v37; // xmm1_4
  int v38; // xmm2_4
  uint32_t *v39;
  int v40; // xmm1_4
  int v41; // xmm2_4
  uint32_t *v42;
  int v43; // xmm1_4
  int v44; // xmm2_4
  uint32_t *v45;
  int v46; // xmm1_4
  int v47; // xmm2_4
  uint32_t *v48;
  int v49; // xmm1_4
  int v50; // xmm2_4
  uint32_t *v51;
  int v52; // xmm1_4
  int v53; // xmm2_4
  uint32_t *v54;
  int v55; // xmm1_4
  int v56; // xmm2_4
  uint32_t *v57;
  int v58; // xmm1_4
  int v59; // xmm2_4
  int v60; // xmm1_4
  uint32_t *v61;
  int v62; // xmm2_4
  uint32_t *v63;
  int v64; // xmm1_4
  int v65; // xmm2_4
  uint32_t *v66;
  int v67; // xmm1_4
  int v68; // xmm2_4
  uint32_t *v69;
  int v70; // xmm1_4
  int v71; // xmm2_4
  uint32_t *v72;
  int v73; // xmm1_4
  int v74; // xmm2_4
  uint32_t *result;
  int v76; // xmm0_4
  int v77; // xmm1_4
  uint8_t v78[28];

  v3 = *((uint32_t *)a2 + 2) & 0x3FFFFFFF;
  if ( v3 <= 0x17 )
  {
    v4 = 2 * v3;
    v5 = 24;
    if ( v4 >= 24 )
      v5 = v4;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v78, a3, (int *)a2, v5, 16);
  }
  v6 = *(uint32_t **)a2;
  *((uint32_t *)a2 + 1) = 24;
  v7 = *((uint32_t *)self + 26);
  v8 = *((uint32_t *)self + 25);
  *v6 = *((uint32_t *)self + 24);
  v6[3] = 0;
  v6[1] = v8;
  v6[2] = v7;
  v9 = *(uint32_t **)a2;
  v10 = *((uint32_t *)self + 26);
  v11 = *((uint32_t *)self + 29);
  v9[4] = *((uint32_t *)self + 24);
  v9[7] = 0;
  v9[5] = v11;
  v9[6] = v10;
  v12 = *(uint32_t **)a2;
  v13 = *((uint32_t *)self + 26);
  v14 = *((uint32_t *)self + 25);
  v12[8] = *((uint32_t *)self + 24);
  v12[11] = 0;
  v12[9] = v14;
  v12[10] = v13;
  v15 = *(uint32_t **)a2;
  v16 = *((uint32_t *)self + 30);
  v17 = *((uint32_t *)self + 25);
  v15[12] = *((uint32_t *)self + 24);
  v15[15] = 0;
  v15[13] = v17;
  v15[14] = v16;
  v18 = *(uint32_t **)a2;
  v19 = *((uint32_t *)self + 26);
  v20 = *((uint32_t *)self + 25);
  v18[16] = *((uint32_t *)self + 24);
  v18[19] = 0;
  v18[17] = v20;
  v18[18] = v19;
  v21 = *(uint32_t **)a2;
  v22 = *((uint32_t *)self + 26);
  v23 = *((uint32_t *)self + 25);
  v21[20] = *((uint32_t *)self + 28);
  v21[23] = 0;
  v21[21] = v23;
  v21[22] = v22;
  v24 = *(uint32_t **)a2;
  v25 = *((uint32_t *)self + 30);
  v26 = *((uint32_t *)self + 29);
  v24[24] = *((uint32_t *)self + 28);
  v24[27] = 0;
  v24[25] = v26;
  v24[26] = v25;
  v27 = *(uint32_t **)a2;
  v28 = *((uint32_t *)self + 26);
  v29 = *((uint32_t *)self + 29);
  v27[28] = *((uint32_t *)self + 28);
  v27[31] = 0;
  v27[29] = v29;
  v27[30] = v28;
  v30 = *(uint32_t **)a2;
  v31 = *((uint32_t *)self + 30);
  v32 = *((uint32_t *)self + 29);
  v30[32] = *((uint32_t *)self + 28);
  v30[33] = v32;
  v30[34] = v31;
  v30[35] = 0;
  v33 = *((uint32_t *)self + 30);
  v34 = *(uint32_t **)a2;
  v35 = *((uint32_t *)self + 29);
  v34[36] = *((uint32_t *)self + 24);
  v34[37] = v35;
  v34[39] = 0;
  v34[38] = v33;
  v36 = *(uint32_t **)a2;
  v37 = *((uint32_t *)self + 30);
  v38 = *((uint32_t *)self + 29);
  v36[40] = *((uint32_t *)self + 28);
  v36[43] = 0;
  v36[41] = v38;
  v36[42] = v37;
  v39 = *(uint32_t **)a2;
  v40 = *((uint32_t *)self + 30);
  v41 = *((uint32_t *)self + 25);
  v39[44] = *((uint32_t *)self + 28);
  v39[47] = 0;
  v39[45] = v41;
  v39[46] = v40;
  v42 = *(uint32_t **)a2;
  v43 = *((uint32_t *)self + 26);
  v44 = *((uint32_t *)self + 29);
  v42[48] = *((uint32_t *)self + 24);
  v42[51] = 0;
  v42[49] = v44;
  v42[50] = v43;
  v45 = *(uint32_t **)a2;
  v46 = *((uint32_t *)self + 26);
  v47 = *((uint32_t *)self + 29);
  v45[52] = *((uint32_t *)self + 28);
  v45[55] = 0;
  v45[53] = v47;
  v45[54] = v46;
  v48 = *(uint32_t **)a2;
  v49 = *((uint32_t *)self + 26);
  v50 = *((uint32_t *)self + 29);
  v48[56] = *((uint32_t *)self + 24);
  v48[59] = 0;
  v48[57] = v50;
  v48[58] = v49;
  v51 = *(uint32_t **)a2;
  v52 = *((uint32_t *)self + 30);
  v53 = *((uint32_t *)self + 29);
  v51[60] = *((uint32_t *)self + 24);
  v51[63] = 0;
  v51[61] = v53;
  v51[62] = v52;
  v54 = *(uint32_t **)a2;
  v55 = *((uint32_t *)self + 26);
  v56 = *((uint32_t *)self + 29);
  v54[64] = *((uint32_t *)self + 28);
  v54[67] = 0;
  v54[65] = v56;
  v54[66] = v55;
  v57 = *(uint32_t **)a2;
  v58 = *((uint32_t *)self + 26);
  v59 = *((uint32_t *)self + 25);
  v57[68] = *((uint32_t *)self + 28);
  v57[69] = v59;
  v57[70] = v58;
  v57[71] = 0;
  v60 = *((uint32_t *)self + 30);
  v61 = *(uint32_t **)a2;
  v62 = *((uint32_t *)self + 29);
  v61[72] = *((uint32_t *)self + 24);
  v61[73] = v62;
  v61[75] = 0;
  v61[74] = v60;
  v63 = *(uint32_t **)a2;
  v64 = *((uint32_t *)self + 30);
  v65 = *((uint32_t *)self + 25);
  v63[76] = *((uint32_t *)self + 24);
  v63[79] = 0;
  v63[77] = v65;
  v63[78] = v64;
  v66 = *(uint32_t **)a2;
  v67 = *((uint32_t *)self + 30);
  v68 = *((uint32_t *)self + 25);
  v66[80] = *((uint32_t *)self + 24);
  v66[83] = 0;
  v66[81] = v68;
  v66[82] = v67;
  v69 = *(uint32_t **)a2;
  v70 = *((uint32_t *)self + 30);
  v71 = *((uint32_t *)self + 25);
  v69[84] = *((uint32_t *)self + 28);
  v69[87] = 0;
  v69[85] = v71;
  v69[86] = v70;
  v72 = *(uint32_t **)a2;
  v73 = *((uint32_t *)self + 30);
  v74 = *((uint32_t *)self + 25);
  v72[88] = *((uint32_t *)self + 28);
  v72[91] = 0;
  v72[89] = v74;
  v72[90] = v73;
  result = *(uint32_t **)a2;
  v76 = *((uint32_t *)self + 26);
  v77 = *((uint32_t *)self + 25);
  result[92] = *((uint32_t *)self + 28);
  result[95] = 0;
  result[93] = v77;
  result[94] = v76;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayAABB::Destroy  (binary VA: 0x18f0680)
// Original: hkDisplayAABB::~hkDisplayAABB
// ----------------------------------------------------------------------------
void hkDisplayAABB::Destroy(hkDisplayAABB::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8EE8);
  g4_noop_dtor(self);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayAABB::Destroy_ea18f06b0  (binary VA: 0x18f06b0)
// Original: hkDisplayAABB::~hkDisplayAABB
// ----------------------------------------------------------------------------
void hkDisplayAABB::Destroy_ea18f06b0(hkDisplayAABB::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8EE8);
  g4_noop_dtor(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 128;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayAABB::Construct  (binary VA: 0x18f0720)
// Original: hkDisplayAABB::hkDisplayAABB
// ----------------------------------------------------------------------------
void hkDisplayAABB::Construct(hkDisplayAABB::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
{
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 20) = 3;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8EE8);
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 24) = *(uint32_t *)a2;
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 28) = *(uint32_t *)a3;
  *((uint32_t *)self + 29) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 30) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 31) = *((uint32_t *)a3 + 3);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayAABB::Construct  (binary VA: 0x18f1370)
// Original: hkDisplayAABB::hkDisplayAABB
// ----------------------------------------------------------------------------
void hkDisplayAABB::Construct(hkDisplayAABB::Self *self)
{
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 20) = 3;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8EE8);
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayAABB::setExtents  (binary VA: 0x18f1460)
// Original: hkDisplayAABB::setExtents
// ----------------------------------------------------------------------------
hkDisplayAABB::Self * hkDisplayAABB::setExtents(hkDisplayAABB::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3)
{
  *((uint32_t *)self + 24) = *(uint32_t *)a2;
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 28) = *(uint32_t *)a3;
  *((uint32_t *)self + 29) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 30) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 31) = *((uint32_t *)a3 + 3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayAABB::getMinExtent  (binary VA: 0x18f14a0)
// Original: hkDisplayAABB::getMinExtent
// ----------------------------------------------------------------------------
char * hkDisplayAABB::getMinExtent(hkDisplayAABB::Self *self)
{
  return (char *)self + 96;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayAABB::getMaxExtent  (binary VA: 0x18f14b0)
// Original: hkDisplayAABB::getMaxExtent
// ----------------------------------------------------------------------------
char * hkDisplayAABB::getMaxExtent(hkDisplayAABB::Self *self)
{
  return (char *)self + 112;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySemiCircle::Destroy  (binary VA: 0x18f14c0)
// Original: hkDisplaySemiCircle::~hkDisplaySemiCircle
// ----------------------------------------------------------------------------
void hkDisplaySemiCircle::Destroy(hkDisplaySemiCircle::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8F28);
  g4_noop_dtor(self);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySemiCircle::Destroy_ea18f14f0  (binary VA: 0x18f14f0)
// Original: hkDisplaySemiCircle::~hkDisplaySemiCircle
// ----------------------------------------------------------------------------
void hkDisplaySemiCircle::Destroy_ea18f14f0(hkDisplaySemiCircle::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8F28);
  g4_noop_dtor(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 160;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySemiCircle::Construct  (binary VA: 0x18f1560)
// Original: hkDisplaySemiCircle::hkDisplaySemiCircle
// ----------------------------------------------------------------------------
void hkDisplaySemiCircle::Construct(hkDisplaySemiCircle::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, const hkVector4f::Self *a4, float a5, float a6, float a7, int a8)
{
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 20) = 5;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8F28);
  *((uint32_t *)self + 24) = *(uint32_t *)a3;
  *((uint32_t *)self + 25) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 28) = *(uint32_t *)a4;
  *((uint32_t *)self + 29) = *((uint32_t *)a4 + 1);
  *((uint32_t *)self + 30) = *((uint32_t *)a4 + 2);
  *((uint32_t *)self + 31) = *((uint32_t *)a4 + 3);
  *((uint32_t *)self + 32) = *(uint32_t *)a2;
  *((uint32_t *)self + 33) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 34) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 35) = *((uint32_t *)a2 + 3);
  *((float *)self + 36) = a5;
  *((uint32_t *)self + 39) = a8;
  *((float *)self + 37) = a6;
  *((float *)self + 38) = a7;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySemiCircle::Construct  (binary VA: 0x18f16c0)
// Original: hkDisplaySemiCircle::hkDisplaySemiCircle
// ----------------------------------------------------------------------------
void hkDisplaySemiCircle::Construct(hkDisplaySemiCircle::Self *self)
{
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 20) = 5;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 39) = 0;
  *((uint32_t *)self + 36) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8F28);
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySemiCircle::generatePoints  (binary VA: 0x18f17f0)
// Original: hkDisplaySemiCircle::generatePoints
// ----------------------------------------------------------------------------
int hkDisplaySemiCircle::generatePoints(hkDisplaySemiCircle::Self *self, hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *a2)
{
  hkDisplaySemiCircle::Self *v2;
  float v3; // xmm1_4
  const hkVector4f::Self *v4;
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  int *v8;
  int v9;
  int v10;
  int v11;
  float *v12;
  int result;
  hkVector4f::Self *v14;
  int v15;
  float v16; // xmm0_4
  float *v17;
  bool v18; // cc
  typedef int *_g4_t_v19;
  typedef float _g4_t_v20;
  typedef hkVector4f::Self *_g4_t_v21;
  typedef uint8_t _g4_t_v22[4];
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef uint32_t _g4_t_v31[18];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v21)) > _g4_s2 ? (8u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v22)) > _g4_s3 ? (12u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v23)) > _g4_s4 ? (16u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v24)) > _g4_s5 ? (20u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v25)) > _g4_s6 ? (24u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v26)) > _g4_s7 ? (28u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v27)) > _g4_s8 ? (32u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v28)) > _g4_s9 ? (36u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v29)) > _g4_s10 ? (40u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v30)) > _g4_s11 ? (44u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v31)) > _g4_s12 ? (48u + sizeof(_g4_t_v31)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);

  v31[14] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = *((float *)self + 36);
  v4 = (const hkVector4f::Self *)((hkDisplaySemiCircle::Self *)((char *)self + 96));
  v19 = (int *)a2;
  v20 = (float)(*((float *)self + 37) - v3) / (float)*((int *)self + 39);
  hkRotationf::setAxisAngle((hkRotationf::Self *)v31, (hkDisplaySemiCircle::Self *)((char *)self + 96), v3);
  v5 = *((float *)v2 + 38);
  v23 = *((float *)v2 + 28) * v5;
  v24 = *((float *)v2 + 29) * v5;
  v6 = *((float *)v2 + 30) * v5;
  v7 = v5 * *((float *)v2 + 31);
  v25 = v6;
  v26 = v7;
  hkVector4f::setRotatedDir((hkVector4f::Self *)&v23, (const hkMatrix3f::Self *)v31, (const hkVector4f::Self *)&v23);
  v23 = v23 + *((float *)v2 + 32);
  v24 = v24 + *((float *)v2 + 33);
  v25 = v25 + *((float *)v2 + 34);
  v26 = v26 + *((float *)v2 + 35);
  hkRotationf::setAxisAngle((hkRotationf::Self *)v31, v4, v20);
  v8 = v19;
  v9 = *((uint32_t *)v2 + 39) + 2;
  v10 = v19[2] & 0x3FFFFFFF;
  if ( v9 > v10 )
  {
    v11 = 2 * v10;
    if ( v11 < v9 )
      v11 = *((uint32_t *)v2 + 39) + 2;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v22, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v19, v11, 16);
    v8 = v19;
  }
  v8[1] = v9;
  v12 = (float *)*v8;
  *v12 = v23;
  v12[1] = v24;
  v12[2] = v25;
  v12[3] = v26;
  result = *((uint32_t *)v2 + 39);
  if ( result >= 0 )
  {
    v14 = (hkVector4f::Self *)&v27;
    v15 = 0;
    do
    {
      v21 = v14;
      v27 = v23;
      v28 = v24;
      v16 = v23 - *((float *)v2 + 32);
      ++v15;
      v29 = v25;
      v30 = v26;
      v27 = v16;
      v28 = v24 - *((float *)v2 + 33);
      v29 = v25 - *((float *)v2 + 34);
      v30 = v26 - *((float *)v2 + 35);
      hkVector4f::setRotatedDir(v14, (const hkMatrix3f::Self *)v31, v14);
      v17 = (float *)(*v19 + 16 * v15);
      v27 = v27 + *((float *)v2 + 32);
      v28 = v28 + *((float *)v2 + 33);
      v29 = v29 + *((float *)v2 + 34);
      v30 = v30 + *((float *)v2 + 35);
      *v17 = v27;
      v17[1] = v28;
      v17[2] = v29;
      v17[3] = v30;
      v23 = v27;
      v24 = v28;
      v25 = v29;
      v18 = *((uint32_t *)v2 + 39) < v15;
      result = LODWORD(v30);
      v14 = v21;
      v26 = v30;
    }
    while ( !v18 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySemiCircle::getWireframeGeometry  (binary VA: 0x18f1ab0)
// Original: hkDisplaySemiCircle::getWireframeGeometry
// ----------------------------------------------------------------------------
int hkDisplaySemiCircle::getWireframeGeometry(hkDisplaySemiCircle::Self *self, hkArrayBase<hkVector4f::Self> *a2, hkMemoryAllocator::Self *a3)
{
  hkDisplaySemiCircle::Self *v3;
  hkMemoryAllocator::Self *v4;
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
  int result;
  typedef hkDisplaySemiCircle::Self *_g4_t_v16;
  typedef int *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[4];
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef hkDisplaySemiCircle::Self **_g4_t_v23;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v21)) > _g4_s5 ? (20u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v22)) > _g4_s6 ? (24u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v23)) > _g4_s7 ? (40u + sizeof(_g4_t_v23)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);

  v23 = &self;
  v3 = self;
  v16 = self;
  v4 = a3;
  v17 = (int *)a2;
  v20 = 0;
  v21 = 0;
  v22 = 0x80000000;
  hkDisplaySemiCircle::generatePoints(self, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v20);
  v5 = *((uint32_t *)v3 + 39);
  v6 = 2 * v5;
  v7 = v17[2] & 0x3FFFFFFF;
  if ( 2 * v5 > v7 )
  {
    v8 = 2 * v7;
    if ( v8 < v6 )
      v8 = 2 * v5;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v19, v4, v17, v8, 16);
  }
  v17[1] = v6;
  if ( *((int *)v16 + 39) > 0 )
  {
    v18 = 0;
    do
    {
      v9 = v18;
      v10 = v20;
      v11 = 16 * v18++;
      v9 *= 32;
      v12 = *v17;
      *(uint32_t *)(v12 + v9) = *(uint32_t *)(v20 + v11);
      *(uint32_t *)(v12 + v9 + 4) = *(uint32_t *)(v10 + v11 + 4);
      *(uint32_t *)(v12 + v9 + 8) = *(uint32_t *)(v10 + v11 + 8);
      *(uint32_t *)(v12 + v9 + 12) = *(uint32_t *)(v10 + v11 + 12);
      v13 = v20;
      v14 = *v17;
      *(uint32_t *)(v14 + v9 + 16) = *(uint32_t *)(v20 + v11 + 16);
      *(uint32_t *)(v14 + v9 + 20) = *(uint32_t *)(v13 + v11 + 20);
      *(uint32_t *)(v14 + v9 + 24) = *(uint32_t *)(v13 + v11 + 24);
      *(uint32_t *)(v14 + v9 + 28) = *(uint32_t *)(v13 + v11 + 28);
    }
    while ( *((uint32_t *)v16 + 39) > v18 );
  }
  result = v22;
  v21 = 0;
  if ( v22 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v20,
             16 * v22);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySemiCircle::setParameters  (binary VA: 0x18f1c20)
// Original: hkDisplaySemiCircle::setParameters
// ----------------------------------------------------------------------------
hkDisplaySemiCircle::Self * hkDisplaySemiCircle::setParameters(hkDisplaySemiCircle::Self *self, float a2, float a3, float a4, int a5, const hkVector4f::Self *a6, const hkVector4f::Self *a7, const hkVector4f::Self *a8)
{
  int v9;

  *((uint32_t *)self + 32) = *(uint32_t *)a6;
  *((uint32_t *)self + 33) = *((uint32_t *)a6 + 1);
  *((uint32_t *)self + 34) = *((uint32_t *)a6 + 2);
  *((uint32_t *)self + 35) = *((uint32_t *)a6 + 3);
  *((uint32_t *)self + 24) = *(uint32_t *)a7;
  *((uint32_t *)self + 25) = *((uint32_t *)a7 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a7 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a7 + 3);
  *((uint32_t *)self + 28) = *(uint32_t *)a8;
  *((uint32_t *)self + 29) = *((uint32_t *)a8 + 1);
  *((uint32_t *)self + 30) = *((uint32_t *)a8 + 2);
  v9 = *((uint32_t *)a8 + 3);
  *((float *)self + 36) = a3;
  *((uint32_t *)self + 31) = v9;
  *((float *)self + 37) = a4;
  *((uint32_t *)self + 39) = a5;
  *((float *)self + 38) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySemiCircle::getNormal  (binary VA: 0x18f1e60)
// Original: hkDisplaySemiCircle::getNormal
// ----------------------------------------------------------------------------
hkDisplaySemiCircle::Self * hkDisplaySemiCircle::getNormal(hkDisplaySemiCircle::Self *self, uint32_t *a2)
{
  int v3;

  *(uint32_t *)self = a2[24];
  *((uint32_t *)self + 1) = a2[25];
  v3 = a2[27];
  *((uint32_t *)self + 2) = a2[26];
  *((uint32_t *)self + 3) = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySemiCircle::getPerp  (binary VA: 0x18f1e90)
// Original: hkDisplaySemiCircle::getPerp
// ----------------------------------------------------------------------------
hkDisplaySemiCircle::Self * hkDisplaySemiCircle::getPerp(hkDisplaySemiCircle::Self *self, uint32_t *a2)
{
  int v3;

  *(uint32_t *)self = a2[28];
  *((uint32_t *)self + 1) = a2[29];
  v3 = a2[31];
  *((uint32_t *)self + 2) = a2[30];
  *((uint32_t *)self + 3) = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySemiCircle::getThetaMin  (binary VA: 0x18f1ec0)
// Original: hkDisplaySemiCircle::getThetaMin
// ----------------------------------------------------------------------------
long double hkDisplaySemiCircle::getThetaMin(hkDisplaySemiCircle::Self *self)
{
  return *((float *)self + 36);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySemiCircle::getThetaMax  (binary VA: 0x18f1ee0)
// Original: hkDisplaySemiCircle::getThetaMax
// ----------------------------------------------------------------------------
long double hkDisplaySemiCircle::getThetaMax(hkDisplaySemiCircle::Self *self)
{
  return *((float *)self + 37);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySemiCircle::getRadius  (binary VA: 0x18f1f00)
// Original: hkDisplaySemiCircle::getRadius
// ----------------------------------------------------------------------------
long double hkDisplaySemiCircle::getRadius(hkDisplaySemiCircle::Self *self)
{
  return *((float *)self + 38);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySemiCircle::getNumSegments  (binary VA: 0x18f1f20)
// Original: hkDisplaySemiCircle::getNumSegments
// ----------------------------------------------------------------------------
int hkDisplaySemiCircle::getNumSegments(hkDisplaySemiCircle::Self *self)
{
  return *((uint32_t *)self + 39);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySemiCircle::getCenter  (binary VA: 0x18f1f30)
// Original: hkDisplaySemiCircle::getCenter
// ----------------------------------------------------------------------------
hkDisplaySemiCircle::Self * hkDisplaySemiCircle::getCenter(hkDisplaySemiCircle::Self *self, uint32_t *a2)
{
  int v3;

  *(uint32_t *)self = a2[32];
  *((uint32_t *)self + 1) = a2[33];
  v3 = a2[35];
  *((uint32_t *)self + 2) = a2[34];
  *((uint32_t *)self + 3) = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCone::Destroy  (binary VA: 0x18f1f60)
// Original: hkDisplayCone::~hkDisplayCone
// ----------------------------------------------------------------------------
void hkDisplayCone::Destroy(hkDisplayCone::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8F68);
  g4_noop_dtor(self);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCone::Destroy_ea18f1f90  (binary VA: 0x18f1f90)
// Original: hkDisplayCone::~hkDisplayCone
// ----------------------------------------------------------------------------
void hkDisplayCone::Destroy_ea18f1f90(hkDisplayCone::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8F68);
  g4_noop_dtor(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 144;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCone::Construct  (binary VA: 0x18f2000)
// Original: hkDisplayCone::hkDisplayCone
// ----------------------------------------------------------------------------
void hkDisplayCone::Construct(hkDisplayCone::Self *self, float a2, float a3, int a4, const hkVector4f::Self *a5, const hkVector4f::Self *a6)
{
  int v6;

  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 20) = 4;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8F68);
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 24) = *(uint32_t *)a6;
  *((uint32_t *)self + 25) = *((uint32_t *)a6 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a6 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a6 + 3);
  *((uint32_t *)self + 28) = *(uint32_t *)a5;
  *((uint32_t *)self + 29) = *((uint32_t *)a5 + 1);
  *((uint32_t *)self + 30) = *((uint32_t *)a5 + 2);
  v6 = *((uint32_t *)a5 + 3);
  *((float *)self + 33) = a2;
  *((uint32_t *)self + 31) = v6;
  *((float *)self + 34) = a3;
  *((uint32_t *)self + 32) = a4;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCone::Construct  (binary VA: 0x18f2120)
// Original: hkDisplayCone::hkDisplayCone
// ----------------------------------------------------------------------------
void hkDisplayCone::Construct(hkDisplayCone::Self *self)
{
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 20) = 4;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8F68);
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCone::setParameters  (binary VA: 0x18f2220)
// Original: hkDisplayCone::setParameters
// ----------------------------------------------------------------------------
hkDisplayCone::Self * hkDisplayCone::setParameters(hkDisplayCone::Self *self, float a2, float a3, int a4, const hkVector4f::Self *a5, const hkVector4f::Self *a6)
{
  int v7;

  *((float *)self + 33) = a2;
  *((uint32_t *)self + 24) = *(uint32_t *)a6;
  *((uint32_t *)self + 25) = *((uint32_t *)a6 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a6 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a6 + 3);
  *((uint32_t *)self + 28) = *(uint32_t *)a5;
  *((uint32_t *)self + 29) = *((uint32_t *)a5 + 1);
  *((uint32_t *)self + 30) = *((uint32_t *)a5 + 2);
  v7 = *((uint32_t *)a5 + 3);
  *((float *)self + 34) = a3;
  *((uint32_t *)self + 31) = v7;
  *((uint32_t *)self + 32) = a4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCone::generateConeVertices  (binary VA: 0x18f2290)
// Original: hkDisplayCone::generateConeVertices
// ----------------------------------------------------------------------------
int hkDisplayCone::generateConeVertices(hkDisplayCone::Self *self, hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *a2)
{
  hkDisplayCone::Self *v2;
  int v3;
  int v4;
  int v5;
  float v6; // xmm5_4
  float v7; // xmm6_4
  __m128 v8;
  __m128 v9;
  __m128 v10;
  int v11; // xmm0_4
  int v12;
  int v13;
  __m128 v14;
  int32_t v15; // xmm6_4
  float v16; // xmm0_4
  __m128i v17;
  int v18;
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  int result;
  hkVector4f::Self *v23;
  int v24;
  int v25;
  float v26; // xmm0_4
  float *v27;
  typedef hkVector4f::Self *_g4_t_v28;
  typedef hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint8_t _g4_t_v31[4];
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef float _g4_t_v38[10];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v28)) > _g4_s0 ? (4u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v29)) > _g4_s1 ? (8u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v30)) > _g4_s2 ? (12u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v31)) > _g4_s3 ? (16u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v32)) > _g4_s4 ? (20u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v33)) > _g4_s5 ? (24u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v34)) > _g4_s6 ? (28u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v35)) > _g4_s7 ? (32u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v36)) > _g4_s8 ? (36u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v37)) > _g4_s9 ? (52u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v38)) > _g4_s10 ? (68u + sizeof(_g4_t_v38)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);

  LODWORD(v38[6]) = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v29 = a2;
  v3 = *((uint32_t *)self + 32);
  v4 = *((uint32_t *)a2 + 2) & 0x3FFFFFFF;
  if ( v3 > v4 )
  {
    v5 = 2 * v4;
    if ( v5 < v3 )
      v5 = *((uint32_t *)self + 32);
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v31,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)a2,
      v5,
      16);
  }
  *((uint32_t *)v29 + 1) = v3;
  v6 = *((float *)v2 + 29);
  v7 = fabs(*((float *)v2 + 28));
g4_m128_raw(v8) = *((unsigned int *)v2 + 30);
g4_m128_lane<int32_t>(v9, 0) = fabs(v6);
  v10 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v8);
  if ( v7 >g4_m128_lane<float>(v9, 0) )
  {
    v11 = *((uint32_t *)v2 + 29);
    v12 = 0;
    v6 = *((float *)v2 + 28);
    v13 = 1;
  }
  else
  {
    v11 = *((uint32_t *)v2 + 28);
g4_m128_lane<float>(v9, 0) = v7;
    v12 = 1;
    v13 = 0;
  }
  v14 = _mm_cmplt_ss(v10, v9);
  v15 = v11 &g4_m128_lane<int32_t>(v14, 0);
  v16 =g4_m128_lane<float>(_mm_andnot_ps(v14, v8), 0);
  if (g4_m128_lane<float>(v9, 0) <=g4_m128_lane<float>(v10, 0) )
    v13 = 2;
  v32 = 0.0;
  v33 = 0.0;
  v34 = 0.0;
  v35 = 0.0;
  *((uint32_t *)&v32 + v12) = LODWORD(v16) | v15;
  *(&v32 + v13) = -v6;
g4_m128_raw(v17) = LODWORD(v32);
  *(float *)g4_m128_ptr<int32_t>(v17) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v17) * *(float *)g4_m128_ptr<int32_t>(v17)) + (float)(v33 * v33))
                          + (float)(v34 * v34);
  if ( *(float *)g4_m128_ptr<int32_t>(v17) <= 0.0 )
  {
    v21 = 0.0;
  }
  else
  {
    v18 = ((_mm_cvtsi128_si32(v17) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v17) >> 1));
    v19 = (float)(*(float *)&v18 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * *(float *)&v18)
                * (float)(*(float *)&v18 * *(float *)&v18));
    v20 = (float)(v19 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * v19) * (float)(v19 * v19));
    v21 = (float)(1.5 * v20) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v17)) * v20) * (float)(v20 * v20));
  }
  v32 = v32 * v21;
  v33 = v33 * v21;
  v34 = v34 * v21;
  v35 = v21 * v35;
  hkQuaternionf::setAxisAngle((hkQuaternionf::Self *)v36, (const hkVector4f::Self *)&v32, *((float *)v2 + 33));
  hkQuaternionf::setAxisAngle(
    (hkQuaternionf::Self *)v37,
    (hkDisplayCone::Self *)((char *)v2 + 112),
    6.2831855f / (float)*((int *)v2 + 32));
  hkVector4f::setRotatedDir((hkVector4f::Self *)v38, (const hkQuaternionf::Self *)v36, (hkDisplayCone::Self *)((char *)v2 + 112));
  result = *((uint32_t *)v2 + 32);
  if ( result > 0 )
  {
    v30 = 0;
    v23 = (hkVector4f::Self *)v38;
    result = 0;
    do
    {
      v24 = 16 * result;
      v28 = v23;
      v25 = *(uint32_t *)v29;
      *(uint32_t *)(v25 + v24) = *((uint32_t *)v2 + 24);
      *(uint32_t *)(v25 + v24 + 4) = *((uint32_t *)v2 + 25);
      *(uint32_t *)(v25 + v24 + 8) = *((uint32_t *)v2 + 26);
      *(uint32_t *)(v25 + v24 + 12) = *((uint32_t *)v2 + 27);
      v26 = *((float *)v2 + 34);
      v27 = (float *)(*(uint32_t *)v29 + v24);
      *v27 = (float)(v38[0] * v26) + *v27;
      v27[1] = (float)(v38[1] * v26) + v27[1];
      v27[2] = (float)(v38[2] * v26) + v27[2];
      v27[3] = (float)(v26 * v38[3]) + v27[3];
      hkVector4f::setRotatedDir(v23, (const hkQuaternionf::Self *)v37, v23);
      result = ++v30;
      v23 = v28;
    }
    while ( *((uint32_t *)v2 + 32) > v30 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCone::getWireframeGeometry  (binary VA: 0x18f25c0)
// Original: hkDisplayCone::getWireframeGeometry
// ----------------------------------------------------------------------------
int hkDisplayCone::getWireframeGeometry(hkDisplayCone::Self *self, hkArrayBase<hkVector4f::Self> *a2, hkMemoryAllocator::Self *a3)
{
  hkDisplayCone::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int result;
  typedef hkMemoryAllocator::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int *_g4_t_v18;
  typedef uint8_t _g4_t_v19[4];
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef hkDisplayCone::Self **_g4_t_v23;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v17)) > _g4_s1 ? (0u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v18)) > _g4_s2 ? (4u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v21)) > _g4_s5 ? (20u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v22)) > _g4_s6 ? (24u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v23)) > _g4_s7 ? (40u + sizeof(_g4_t_v23)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);

  v23 = &self;
  v3 = self;
  v16 = a3;
  v18 = (int *)a2;
  v20 = 0;
  v21 = 0;
  v22 = 0x80000000;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v19, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v20, 256, 16);
  hkDisplayCone::generateConeVertices(v3, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v20);
  v4 = 4 * *((uint32_t *)v3 + 32);
  v5 = v18[2] & 0x3FFFFFFF;
  if ( v4 > v5 )
  {
    v6 = 2 * v5;
    if ( v6 < v4 )
      v6 = 4 * *((uint32_t *)v3 + 32);
    hkArrayUtil::reserve((hkArrayUtil::Self *)v19, v16, v18, v6, 16);
  }
  v7 = 16;
  v17 = 0;
  for ( v18[1] = v4; *((uint32_t *)v3 + 32) > v17; v7 += 64 )
  {
    v8 = (uint32_t *)(*v18 + (v17 << 6));
    *v8 = *((uint32_t *)v3 + 24);
    v8[1] = *((uint32_t *)v3 + 25);
    v8[2] = *((uint32_t *)v3 + 26);
    v8[3] = *((uint32_t *)v3 + 27);
    v9 = v20;
    v10 = *v18;
    *(uint32_t *)(v10 + v7) = *(uint32_t *)(v20 + 16 * v17);
    *(uint32_t *)(v10 + v7 + 4) = *(uint32_t *)(v9 + 16 * v17 + 4);
    *(uint32_t *)(v10 + v7 + 8) = *(uint32_t *)(v9 + 16 * v17 + 8);
    *(uint32_t *)(v10 + v7 + 12) = *(uint32_t *)(v9 + 16 * v17 + 12);
    v11 = v20;
    v12 = *v18;
    *(uint32_t *)(v12 + v7 + 16) = *(uint32_t *)(v20 + 16 * v17);
    *(uint32_t *)(v12 + v7 + 20) = *(uint32_t *)(v11 + 16 * v17 + 4);
    *(uint32_t *)(v12 + v7 + 24) = *(uint32_t *)(v11 + 16 * v17 + 8);
    *(uint32_t *)(v12 + v7 + 28) = *(uint32_t *)(v11 + 16 * v17++ + 12);
    v13 = *v18;
    v14 = (uint32_t *)(v20 + 16 * (v17 % *((uint32_t *)v3 + 32)));
    *(uint32_t *)(v13 + v7 + 32) = *v14;
    *(uint32_t *)(v13 + v7 + 36) = v14[1];
    *(uint32_t *)(v13 + v7 + 40) = v14[2];
    *(uint32_t *)(v13 + v7 + 44) = v14[3];
  }
  result = v22;
  v21 = 0;
  if ( v22 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v20,
             16 * v22);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCone::getPosition  (binary VA: 0x18f27c0)
// Original: hkDisplayCone::getPosition
// ----------------------------------------------------------------------------
hkDisplayCone::Self * hkDisplayCone::getPosition(hkDisplayCone::Self *self, uint32_t *a2)
{
  int v3;

  *(uint32_t *)self = a2[24];
  *((uint32_t *)self + 1) = a2[25];
  v3 = a2[27];
  *((uint32_t *)self + 2) = a2[26];
  *((uint32_t *)self + 3) = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCone::getAxis  (binary VA: 0x18f29c0)
// Original: hkDisplayCone::getAxis
// ----------------------------------------------------------------------------
hkDisplayCone::Self * hkDisplayCone::getAxis(hkDisplayCone::Self *self, uint32_t *a2)
{
  int v3;

  *(uint32_t *)self = a2[28];
  *((uint32_t *)self + 1) = a2[29];
  v3 = a2[31];
  *((uint32_t *)self + 2) = a2[30];
  *((uint32_t *)self + 3) = v3;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCone::getHeight  (binary VA: 0x18f29f0)
// Original: hkDisplayCone::getHeight
// ----------------------------------------------------------------------------
long double hkDisplayCone::getHeight(hkDisplayCone::Self *self)
{
  return *((float *)self + 34);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCone::getAngle  (binary VA: 0x18f2a10)
// Original: hkDisplayCone::getAngle
// ----------------------------------------------------------------------------
long double hkDisplayCone::getAngle(hkDisplayCone::Self *self)
{
  return *((float *)self + 33);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayCone::getNumSegments  (binary VA: 0x18f2a30)
// Original: hkDisplayCone::getNumSegments
// ----------------------------------------------------------------------------
int hkDisplayCone::getNumSegments(hkDisplayCone::Self *self)
{
  return *((uint32_t *)self + 32);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayMesh::buildGeometry  (binary VA: 0x18f2a40)
// Original: hkDisplayMesh::buildGeometry
// ----------------------------------------------------------------------------
void hkDisplayMesh::buildGeometry()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayMesh::getWireframeGeometry  (binary VA: 0x18f2a50)
// Original: hkDisplayMesh::getWireframeGeometry
// ----------------------------------------------------------------------------
void hkDisplayMesh::getWireframeGeometry()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkForwardingDisplayGeometryBuilder::Destroy  (binary VA: 0x18f2a60)
// Original: hkForwardingDisplayGeometryBuilder::~hkForwardingDisplayGeometryBuilder
// ----------------------------------------------------------------------------
void hkForwardingDisplayGeometryBuilder::Destroy(hkForwardingDisplayGeometryBuilder::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayMesh::Destroy  (binary VA: 0x18f2a80)
// Original: hkDisplayMesh::~hkDisplayMesh
// ----------------------------------------------------------------------------
void hkDisplayMesh::Destroy(hkDisplayMesh::Self *self)
{
  int v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8FA8);
  v1 = *((uint32_t *)self + 24);
  *((uint32_t *)self + 23) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 22),
      v1 & 0x3FFFFFFF);
  v2 = *((uint32_t *)self + 21);
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 24) = 0x80000000;
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
  *((uint32_t *)self + 21) = 0;
  g4_noop_dtor(self);
}

// ----------------------------------------------------------------------------
// Function: hkForwardingDisplayGeometryBuilder::Destroy_ea18f2b40  (binary VA: 0x18f2b40)
// Original: hkForwardingDisplayGeometryBuilder::~hkForwardingDisplayGeometryBuilder
// ----------------------------------------------------------------------------
void hkForwardingDisplayGeometryBuilder::Destroy_ea18f2b40(hkForwardingDisplayGeometryBuilder::Self *self)
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
// Function: hkDisplayMesh::Destroy_ea18f2ba0  (binary VA: 0x18f2ba0)
// Original: hkDisplayMesh::~hkDisplayMesh
// ----------------------------------------------------------------------------
void hkDisplayMesh::Destroy_ea18f2ba0(hkDisplayMesh::Self *self)
{
  int v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;
  int v8;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8FA8);
  v1 = *((uint32_t *)self + 24);
  *((uint32_t *)self + 23) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 22),
      v1 & 0x3FFFFFFF);
  v2 = *((uint32_t *)self + 21);
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 24) = 0x80000000;
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
  *((uint32_t *)self + 21) = 0;
  g4_noop_dtor(self);
  v7 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v8 = 112;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v8 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v7, 12, self, v8);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayMesh::getMesh  (binary VA: 0x18f2c90)
// Original: hkDisplayMesh::getMesh
// ----------------------------------------------------------------------------
int hkDisplayMesh::getMesh(hkDisplayMesh::Self *self)
{
  return *((uint32_t *)self + 21);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayMesh::freeSerializedMeshData  (binary VA: 0x18f2ca0)
// Original: hkDisplayMesh::freeSerializedMeshData
// ----------------------------------------------------------------------------
int hkDisplayMesh::freeSerializedMeshData(hkDisplayMesh::Self *self)
{
  int result;

  result = *((uint32_t *)self + 24);
  *((uint32_t *)self + 23) = 0;
  if ( result >= 0 )
    result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               *((uint32_t *)self + 22),
               result & 0x3FFFFFFF);
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 24) = 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayMesh::getSeriaizedMeshDataSize  (binary VA: 0x18f2d00)
// Original: hkDisplayMesh::getSeriaizedMeshDataSize
// ----------------------------------------------------------------------------
int hkDisplayMesh::getSeriaizedMeshDataSize(hkDisplayMesh::Self *self)
{
  return *((uint32_t *)self + 23);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayMesh::getSeriaizedMeshData  (binary VA: 0x18f2d10)
// Original: hkDisplayMesh::getSeriaizedMeshData
// ----------------------------------------------------------------------------
int hkDisplayMesh::getSeriaizedMeshData(hkDisplayMesh::Self *self)
{
  return *((uint32_t *)self + 22);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayMesh::Construct  (binary VA: 0x18f2d20)
// Original: hkDisplayMesh::hkDisplayMesh
// ----------------------------------------------------------------------------
void hkDisplayMesh::Construct(hkDisplayMesh::Self *self, hkMeshBody::Self *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36)
{
  int v36;
  int32_t v37; // kr00_4
  uint8_t v38[380];

  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 20) = 11;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A8FA8);
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v37 = *((uint32_t *)a2 + 1);
      HIWORD(v36) = HIWORD(v37);
      LOWORD(v36) = 0;
    }
    while ( v37 != __sync_val_compare_and_swap(
                     (volatile int32_t *)a2 + 1,
                     v37,
                     v36 | (uint16_t)(v37 + 1)) );
  }
  *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0x80000000;
  G4_VCALL<void>(a2, 24, v38);
  hkMatrixDecompositionImpl_float_id_8c470d::decomposeMatrix((int)(uintptr_t)(v38), &a32);
  hkRotationf::set((hkRotationf::Self *)&a16, (const hkQuaternionf::Self *)&a36);
  *((uint32_t *)self + 4) = a16;
  *((uint32_t *)self + 5) = a17;
  *((uint32_t *)self + 6) = a18;
  *((uint32_t *)self + 7) = a19;
  *((uint32_t *)self + 8) = a20;
  *((uint32_t *)self + 9) = a21;
  *((uint32_t *)self + 10) = a22;
  *((uint32_t *)self + 11) = a23;
  *((uint32_t *)self + 12) = a24;
  *((uint32_t *)self + 13) = a25;
  *((uint32_t *)self + 14) = a26;
  *((uint32_t *)self + 15) = a27;
  *((uint32_t *)self + 16) = a32;
  *((uint32_t *)self + 17) = a33;
  *((uint32_t *)self + 18) = a34;
  *((uint32_t *)self + 19) = a35;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeOStream::Destroy  (binary VA: 0x18f2f00)
// Original: hkDisplaySerializeOStream::~hkDisplaySerializeOStream
// ----------------------------------------------------------------------------
void hkDisplaySerializeOStream::Destroy(hkDisplaySerializeOStream::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A9020);
  hkOArchive::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeOStream::Destroy_ea18f31e0  (binary VA: 0x18f31e0)
// Original: hkDisplaySerializeOStream::~hkDisplaySerializeOStream
// ----------------------------------------------------------------------------
void hkDisplaySerializeOStream::Destroy_ea18f31e0(hkDisplaySerializeOStream::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A9020);
  hkOArchive::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkVersionReporter::sendVersionInformation  (binary VA: 0x18f3250)
// Original: hkVersionReporter::sendVersionInformation
// ----------------------------------------------------------------------------
hkVersionReporter::Self * hkVersionReporter::sendVersionInformation(hkVersionReporter::Self *self, hkStreamWriter::Self *a2)
{
  int v2;
  signed int v3;
  typedef int _g4_t_v5;
  typedef const void *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[4];
  typedef uint32_t _g4_t_v10[4];
  typedef char *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef char _g4_t_v14;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v7)) > _g4_s2 ? (20u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v8)) > _g4_s3 ? (24u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v9)) > _g4_s4 ? (32u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v10)) > _g4_s5 ? (48u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v11)) > _g4_s6 ? (64u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v12)) > _g4_s7 ? (68u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v13)) > _g4_s8 ? (72u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v14)) > _g4_s9 ? (76u + sizeof(_g4_t_v14)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 64u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 68u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 72u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);

  v2 = 0xFFFF;
  v6 = nullptr;
  v7 = 0;
  v8 = 0x80000000;
  hkDisplaySerializeOStream::Construct(v9, &v6);
  hkOArchive::write8u((hkOArchive::Self *)v9, 0x90u);
  hkOArchive::write32((hkOArchive::Self *)v9, hkVersionReporter::m_protocolVersion);
  hkOArchive::write32((hkOArchive::Self *)v9, hkVersionReporter::m_protocolMinimumCompatible);
  v3 = hkString::strLen((hkString::Self *)"ANDROID");
  if ( v3 > 0xFFFF )
    v3 = 0xFFFF;
  v5 = v3;
  hkOArchive::write16u((hkOArchive::Self *)v9, v3);
  hkOArchive::writeRaw((hkOArchive::Self *)v9, "ANDROID", v5);
  v11 = &v14;
  v13 = -2147483520;
  v12 = 1;
  v14 = 0;
  hkStringBuf::printf((hkStringBuf::Self *)&v11, "%s:%i", "GCC", 40800);
  if ( v12 - 1 <= 0xFFFF )
    v2 = v12 - 1;
  hkOArchive::write16u((hkOArchive::Self *)v9, v2);
  hkOArchive::writeRaw((hkOArchive::Self *)v9, v11, v2);
  hkDisplaySerializeOStream::Construct((hkDisplaySerializeOStream::Self *)v10, a2);
  hkOArchive::write32((hkOArchive::Self *)v10, v7);
  hkOArchive::writeRaw((hkOArchive::Self *)v10, v6, v7);
  *(uint32_t *)self = 0;
  v10[0] = ((uint32_t)(uintptr_t)&off_20A9020);
  hkOArchive::Destroy((hkOArchive::Self *)v10);
  v12 = 0;
  if ( v13 >= 0 )
    (*(void (**)(uint32_t *, char *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v11,
      v13 & 0x3FFFFFFF);
  v11 = nullptr;
  v9[0] = ((uint32_t)(uintptr_t)&off_20A9020);
  v13 = 0x80000000;
  hkOArchive::Destroy((hkOArchive::Self *)v9);
  v7 = 0;
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, const void *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v6,
      v8 & 0x3FFFFFFF);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkVersionReporter::sendStructureLayout  (binary VA: 0x18f3480)
// Original: hkVersionReporter::sendStructureLayout
// ----------------------------------------------------------------------------
hkVersionReporter::Self * hkVersionReporter::sendStructureLayout(hkVersionReporter::Self *self, hkStreamWriter::Self *a2)
{
  uint32_t v3[11];

  hkDisplaySerializeOStream::Construct((hkDisplaySerializeOStream::Self *)v3, a2);
  hkOArchive::write32u((hkOArchive::Self *)v3, 5);
  hkOArchive::write8u((hkOArchive::Self *)v3, 0x91u);
  hkOArchive::write8u((hkOArchive::Self *)v3, (uint8_t)hkStructureLayout::HostLayoutRules);
  hkOArchive::write8u((hkOArchive::Self *)v3, BYTE1(hkStructureLayout::HostLayoutRules));
  hkOArchive::write8u((hkOArchive::Self *)v3, BYTE2(hkStructureLayout::HostLayoutRules));
  hkOArchive::write8u((hkOArchive::Self *)v3, HIBYTE(hkStructureLayout::HostLayoutRules));
  *(uint32_t *)self = 0;
  v3[0] = ((uint32_t)(uintptr_t)&off_20A9020);
  hkOArchive::Destroy((hkOArchive::Self *)v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkVersionReporter::receiveVersionInformation  (binary VA: 0x18f3540)
// Original: hkVersionReporter::receiveVersionInformation
// ----------------------------------------------------------------------------
hkVersionReporter::Self * hkVersionReporter::receiveVersionInformation(hkVersionReporter::Self *self, hkDisplaySerializeIStream::Self *a2, int *a3, int *a4, hkStringPtr::Self *a5, hkStringPtr::Self *a6)
{
  hkIArchive::Self *v6;
  int *v7;
  int v8;
  hkString::Self *v9;
  int v10;
  int v11;
  int v13;
  unsigned int v14;
  int v15;
  typedef hkStringPtr::Self *_g4_t_v16;
  typedef hkStringPtr::Self *_g4_t_v17;
  typedef int *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef hkVersionReporter::Self *_g4_t_v20;
  typedef uint8_t _g4_t_v21[18];
  typedef uint16_t _g4_t_v22;
  typedef hkString::Self *_g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[1031];
  enum : size_t {
    _g4_s0 = 4256u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v21)) > _g4_s5 ? (24u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (42u + sizeof(_g4_t_v22)) > _g4_s6 ? (42u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v23)) > _g4_s7 ? (44u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v24)) > _g4_s8 ? (48u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v25)) > _g4_s9 ? (52u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v26)) > _g4_s10 ? (56u + sizeof(_g4_t_v26)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 42u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);

  v26[1027] = (uint32_t)(uintptr_t)(&self);
  v6 = (hkIArchive::Self *)(a2);
  v20 = self;
  v7 = a4;
  v18 = a3;
  v17 = a5;
  v16 = a6;
  hkIArchive::readArrayGeneric(a2, &v23, 4, 1);
  *v18 = (int)(uintptr_t)(v23);
  hkIArchive::readArrayGeneric(v6, &v23, 4, 1);
  *v7 = (int)(uintptr_t)(v23);
  hkIArchive::readArrayGeneric(v6, &v23, 2, 1);
  v8 = (uint16_t)(uintptr_t)(v23);
  v9 = (hkString::Self *)v26;
  v24 = 0;
  v23 = (hkString::Self *)v26;
  v25 = -2147479552;
  v10 = v8 + 1;
  if ( (unsigned int)(v8 + 1) > 0x1000 )
  {
    v11 = 0x2000;
    if ( v10 > 0x1FFF )
      v11 = v8 + 1;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v21,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v23,
      v11,
      1);
    v9 = v23;
    v10 = v8 + 1;
  }
  v24 = v10;
  hkIArchive::readRaw(v6, v9, v8);
  *((uint8_t *)v23 + v8) = 0;
  hkStringPtr::opAssign(v17, v23);
  if ( *v18 > 7000 )
  {
    hkIArchive::readArrayGeneric(v6, &v22, 2, 1);
    v13 = v22;
    v14 = v22 + 1;
    if ( v14 > (v25 & 0x3FFFFFFFu) )
    {
      v15 = 2 * (v25 & 0x3FFFFFFF);
      v19 = v22 + 1;
      if ( (int)v14 >= v15 )
        v15 = v22 + 1;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v21,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)&v23,
        v15,
        1);
      v14 = v19;
    }
    v24 = v14;
    hkIArchive::readRaw(v6, v23, v13);
    *((uint8_t *)v23 + v13) = 0;
    hkStringPtr::opAssign(v16, v23);
  }
  else
  {
    hkStringPtr::opAssign(v16, (hkString::Self *)"UNAVAILABLE");
  }
  v24 = 0;
  *(uint32_t *)v20 = 0;
  if ( v25 >= 0 )
    (*(void (**)(uint32_t *, hkString::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v23,
      v25 & 0x3FFFFFFF);
  return v20;
}

// ----------------------------------------------------------------------------
// Function: hkVersionReporter::receiveVersionInformation  (binary VA: 0x18f3810)
// Original: hkVersionReporter::receiveVersionInformation
// ----------------------------------------------------------------------------
hkVersionReporter::Self * hkVersionReporter::receiveVersionInformation(hkVersionReporter::Self *self, hkStreamReader::Self *a2, int *a3, int *a4, hkStringPtr::Self *a5, hkStringPtr::Self *a6)
{
  uint32_t v7[10];

  hkDisplaySerializeIStream::Construct((hkDisplaySerializeIStream::Self *)v7, a2);
  hkVersionReporter::receiveVersionInformation(self, (hkDisplaySerializeIStream::Self *)v7, a3, a4, a5, a6);
  v7[0] = ((uint32_t)(uintptr_t)&off_20A8A10);
  hkIArchive::Destroy((hkIArchive::Self *)v7);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkStatisticsProcess::getProcessTag  (binary VA: 0x18f3890)
// Original: hkStatisticsProcess::getProcessTag
// ----------------------------------------------------------------------------
int hkStatisticsProcess::getProcessTag()
{
  return hkStatisticsProcess::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkStatisticsProcess::Destroy  (binary VA: 0x18f38c0)
// Original: hkStatisticsProcess::~hkStatisticsProcess
// ----------------------------------------------------------------------------
void hkStatisticsProcess::Destroy(hkStatisticsProcess::Self *self)
{
  int v1;
  int v2;
  int v3;

  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A908C);
  v1 = *((uint32_t *)self + 16);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A9068);
  *((uint32_t *)self + 15) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 14),
      v1 & 0x3FFFFFFF);
  v2 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 16) = 0x80000000;
  *((uint32_t *)self + 12) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      v2 & 0x3FFFFFFF);
  v3 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 9) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      4 * v3);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3A48);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkStatisticsProcess::Destroy_ea18f39d0  (binary VA: 0x18f39d0)
// Original: hkStatisticsProcess::~hkStatisticsProcess
// ----------------------------------------------------------------------------
void hkStatisticsProcess::Destroy_ea18f39d0(hkStatisticsProcess::Self *self)
{
  int v1;
  int v2;

  hkStatisticsProcess::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 68;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkStatisticsProcess::step  (binary VA: 0x18f3a40)
// Original: hkStatisticsProcess::step
// ----------------------------------------------------------------------------
hkStatisticsProcess::Self * hkStatisticsProcess::step(hkStatisticsProcess::Self *self)
{
  hkStatisticsProcess::Self *result;
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  int address;
  int v22;
  hkStringPtr::Self *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  hkStringPtr::Self *v28;
  uint32_t *v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  int v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  int j;
  int i;
  int k;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef hkStatisticsProcess::Self *_g4_t_v57;
  typedef int *_g4_t_v58;
  typedef char _g4_t_v59[4];
  typedef char _g4_t_v60[4];
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v61;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v62;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v63;
  typedef uint32_t _g4_t_v64[4];
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef unsigned int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint32_t *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef uint32_t *_g4_t_v88;
  typedef uint32_t *_g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef hkStatisticsProcess::Self **_g4_t_v95;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v44)) > _g4_s0 ? (12u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v45)) > _g4_s1 ? (12u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v46)) > _g4_s2 ? (16u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v47)) > _g4_s3 ? (20u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v48)) > _g4_s4 ? (24u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v49)) > _g4_s5 ? (28u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v50)) > _g4_s6 ? (32u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v51)) > _g4_s7 ? (36u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v52)) > _g4_s8 ? (40u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v53)) > _g4_s9 ? (44u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v54)) > _g4_s10 ? (48u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v55)) > _g4_s11 ? (48u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v56)) > _g4_s12 ? (56u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v57)) > _g4_s13 ? (60u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v58)) > _g4_s14 ? (68u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v59)) > _g4_s15 ? (68u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v60)) > _g4_s16 ? (68u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v61)) > _g4_s17 ? (72u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v62)) > _g4_s18 ? (72u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v63)) > _g4_s19 ? (72u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v64)) > _g4_s20 ? (76u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v65)) > _g4_s21 ? (92u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v66)) > _g4_s22 ? (96u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v67)) > _g4_s23 ? (100u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v68)) > _g4_s24 ? (104u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v69)) > _g4_s25 ? (108u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v70)) > _g4_s26 ? (112u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v71)) > _g4_s27 ? (116u + sizeof(_g4_t_v71)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v72)) > _g4_s28 ? (120u + sizeof(_g4_t_v72)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v73)) > _g4_s29 ? (124u + sizeof(_g4_t_v73)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v74)) > _g4_s30 ? (128u + sizeof(_g4_t_v74)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v75)) > _g4_s31 ? (132u + sizeof(_g4_t_v75)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v76)) > _g4_s32 ? (136u + sizeof(_g4_t_v76)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v77)) > _g4_s33 ? (140u + sizeof(_g4_t_v77)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v78)) > _g4_s34 ? (144u + sizeof(_g4_t_v78)) : _g4_s34,
    _g4_s36 = (148u + sizeof(_g4_t_v79)) > _g4_s35 ? (148u + sizeof(_g4_t_v79)) : _g4_s35,
    _g4_s37 = (152u + sizeof(_g4_t_v80)) > _g4_s36 ? (152u + sizeof(_g4_t_v80)) : _g4_s36,
    _g4_s38 = (156u + sizeof(_g4_t_v81)) > _g4_s37 ? (156u + sizeof(_g4_t_v81)) : _g4_s37,
    _g4_s39 = (160u + sizeof(_g4_t_v82)) > _g4_s38 ? (160u + sizeof(_g4_t_v82)) : _g4_s38,
    _g4_s40 = (164u + sizeof(_g4_t_v83)) > _g4_s39 ? (164u + sizeof(_g4_t_v83)) : _g4_s39,
    _g4_s41 = (168u + sizeof(_g4_t_v84)) > _g4_s40 ? (168u + sizeof(_g4_t_v84)) : _g4_s40,
    _g4_s42 = (172u + sizeof(_g4_t_v85)) > _g4_s41 ? (172u + sizeof(_g4_t_v85)) : _g4_s41,
    _g4_s43 = (176u + sizeof(_g4_t_v86)) > _g4_s42 ? (176u + sizeof(_g4_t_v86)) : _g4_s42,
    _g4_s44 = (180u + sizeof(_g4_t_v87)) > _g4_s43 ? (180u + sizeof(_g4_t_v87)) : _g4_s43,
    _g4_s45 = (184u + sizeof(_g4_t_v88)) > _g4_s44 ? (184u + sizeof(_g4_t_v88)) : _g4_s44,
    _g4_s46 = (188u + sizeof(_g4_t_v89)) > _g4_s45 ? (188u + sizeof(_g4_t_v89)) : _g4_s45,
    _g4_s47 = (192u + sizeof(_g4_t_v90)) > _g4_s46 ? (192u + sizeof(_g4_t_v90)) : _g4_s46,
    _g4_s48 = (196u + sizeof(_g4_t_v91)) > _g4_s47 ? (196u + sizeof(_g4_t_v91)) : _g4_s47,
    _g4_s49 = (200u + sizeof(_g4_t_v92)) > _g4_s48 ? (200u + sizeof(_g4_t_v92)) : _g4_s48,
    _g4_s50 = (204u + sizeof(_g4_t_v93)) > _g4_s49 ? (204u + sizeof(_g4_t_v93)) : _g4_s49,
    _g4_s51 = (208u + sizeof(_g4_t_v94)) > _g4_s50 ? (208u + sizeof(_g4_t_v94)) : _g4_s50,
    _g4_s52 = (216u + sizeof(_g4_t_v95)) > _g4_s51 ? (216u + sizeof(_g4_t_v95)) : _g4_s51
  };
  alignas(16) uint8_t _g4_sf[_g4_s52];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 20u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 40u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 48u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 60u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 68u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 68u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 68u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 72u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 72u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 72u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 76u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 92u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 96u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 100u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 104u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 108u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 112u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 116u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 120u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 124u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 128u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 132u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 136u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 140u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 144u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 148u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 152u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 156u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 160u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 164u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 168u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 172u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 176u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 180u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 184u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 188u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 192u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 196u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 200u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 204u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 208u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 216u);

  v95 = &self;
  result = self;
  v57 = self;
  if ( *((uint32_t *)self + 5) == 0 )
    return result;
  v2 = *((uint32_t *)self + 9);
  v66 = 0;
  v67 = 0;
  v68 = 0x80000000;
  v70 = 0;
  v71 = 0;
  v72 = 0x80000000;
  v74 = 0;
  v75 = 0;
  v76 = 0x80000000;
  if ( v2 > 0 )
  {
    v3 = *((int **)self + 8);
    v4 = *v3;
    if ( *(int *)(*v3 + 12) > 0 )
    {
      v6 = *(uint32_t *)(*v3 + 12);
      *(uint32_t *)v60 = 0;
LABEL_57:
      v86 = 4 * v6;
      v31 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
              (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
              &v86);
      v32 = *(uint32_t *)(v4 + 12);
      v70 = v31;
      v71 = v32;
      v72 = v86 / 4;
      v63 = *(hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> **)(v4 + 8);
      if ( (int)v32 > 0 )
      {
        if ( (v31 >= *(uint32_t *)(v4 + 8) + 16 || *(uint32_t *)(v4 + 8) >= v31 + 16) && v32 > 0xB )
        {
          v33 = 0;
          v34 = 0;
          v55 = 4 * (v32 >> 2);
          do
          {
            ++v34;
            *(__m128i *)(v31 + v33) = *(__m128i *)((char *)v63 + v33);
            v33 += 16;
          }
          while ( v34 < v32 >> 2 );
          if ( v55 != v32 )
          {
            *(uint32_t *)(v31 + 16 * (v32 >> 2)) = *((uint32_t *)v63 + 4 * (v32 >> 2));
            if ( (int)v32 > v55 + 1 )
            {
              *(uint32_t *)(v31 + 4 * (v55 + 1)) = *((uint32_t *)v63 + v55 + 1);
              if ( (int)v32 > v55 + 2 )
                *(uint32_t *)(v31 + 4 * (v55 + 2)) = *((uint32_t *)v63 + v55 + 2);
            }
          }
        }
        else
        {
          for ( i = 0; i != v32; ++i )
            *(uint32_t *)(v31 + 4 * i) = *((uint32_t *)v63 + i);
        }
      }
      v35 = *(uint32_t *)(*((uint32_t *)v57 + 8) + *(uint32_t *)v60);
      v36 = *(uint32_t *)(v35 + 48);
      if ( (v76 & 0x3FFFFFFF) >= v36 )
      {
        v37 = v74;
      }
      else
      {
        if ( v76 >= 0 )
        {
          (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v74,
            4 * v76);
          v36 = *(uint32_t *)(v35 + 48);
        }
        v86 = 4 * v36;
        v74 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
                (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                &v86);
        v36 = *(uint32_t *)(v35 + 48);
        v76 = v86 / 4;
        v37 = v74;
      }
      v38 = *(uint32_t *)(v35 + 44);
      v75 = v36;
      if ( v36 > 0 )
      {
        if ( (v37 >= v38 + 16 || v38 >= v37 + 16) && (unsigned int)v36 > 0xB )
        {
          v39 = 0;
          v40 = 0;
          v56 = 4 * ((unsigned int)v36 >> 2);
          do
          {
            ++v40;
            *(__m128i *)(v37 + v39) = *(__m128i *)(v38 + v39);
            v39 += 16;
          }
          while ( v40 < (unsigned int)v36 >> 2 );
          if ( v36 != v56 )
          {
            *(uint32_t *)(v37 + 16 * ((unsigned int)v36 >> 2)) = *(uint32_t *)(v38 + 16 * ((unsigned int)v36 >> 2));
            if ( v56 + 1 < v36 )
            {
              *(uint32_t *)(v37 + 4 * (v56 + 1)) = *(uint32_t *)(v38 + 4 * (v56 + 1));
              if ( v56 + 2 < v36 )
                *(uint32_t *)(v37 + 4 * (v56 + 2)) = *(uint32_t *)(v38 + 4 * (v56 + 2));
            }
          }
        }
        else
        {
          for ( j = 0; j != v36; ++j )
            *(uint32_t *)(v37 + 4 * j) = *(uint32_t *)(v38 + 4 * j);
        }
      }
      if ( v71 != 0 )
        goto LABEL_12;
    }
    else
    {
      v5 = 0;
      while ( ++v5 != v2 )
      {
        v4 = v3[v5];
        v6 = *(uint32_t *)(v4 + 12);
        if ( v6 > 0 )
        {
          *(uint32_t *)v60 = 4 * v5;
          goto LABEL_57;
        }
      }
    }
  }
  v7 = *(int **)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v8 = *v7;
  v9 = v7[1];
  v10 = 0;
  if ( (v72 & 0x3FFFFFFF) == 0 )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v70, 4, v44);
    v10 = v71;
  }
  *(uint32_t *)(v70 + 4 * v10) = v8;
  v11 = v75;
  ++v71;
  if ( v75 == (v76 & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)&v74, 4, v44);
    v11 = v75;
  }
  *(uint32_t *)(v74 + 4 * v11) = v9;
  ++v75;
LABEL_12:
  v78 = nullptr;
  v79 = 0;
  v80 = -1;
  v58 = (int *)((char *)v57 + 56);
  *((uint32_t *)v57 + 15) = 0;
  hkMonitorStreamStringMap::Construct((hkMonitorStreamStringMap::Self *)&v82);
  if ( v71 <= 0 )
  {
    v54 = 0;
  }
  else
  {
    v12 = v74;
    v13 = v70;
    v14 = 0;
    v15 = 0;
    do
    {
      hkMonitorStreamAnalyzer::extractStringMap(
        *(unsigned int **)(v13 + 4 * v14),
        *(uint32_t *)(v12 + 4 * v14),
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v78);
      v12 = v74;
      v13 = v70;
      v15 += *(uint32_t *)(v74 + 4 * v14) - *(uint32_t *)(v70 + 4 * v14);
      ++v14;
    }
    while ( v71 > v14 );
    v54 = v15;
  }
  if ( v80 >= 0 )
  {
    v16 = 0;
    if ( *v78 == -1 )
    {
      while ( v80 >= ++v16 )
      {
        if ( v78[2 * v16] != -1 )
          goto LABEL_46;
      }
    }
    else
    {
      for ( k = 0; ; k = v16 )
      {
        v26 = v83;
        if ( v83 == (v84 & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v82,
            16,
            v44);
          v26 = v83;
        }
        ++v16;
        hkMonitorStreamStringMap::StringMap::Construct((hkMonitorStreamStringMap::StringMap::Self *)(v82 + 16 * v26));
        v27 = 16 * v83++;
        v28 = (hkStringPtr::Self *)(v82 + v27 + 8);
        *((uint32_t *)v28 - 2) = v78[2 * k];
        v29 = v78;
        *((uint32_t *)v28 - 1) = 0;
        hkStringPtr::opAssign(v28, (hkString::Self *)v29[2 * k + 1]);
        if ( v80 < v16 )
          break;
        while ( v78[2 * v16] == -1 )
        {
          if ( v80 < ++v16 )
            goto LABEL_21;
        }
LABEL_46:
        ;
      }
    }
  }
LABEL_21:
  v87 = -65535;
  v91 = 1;
  v86 = (int)((uint32_t)(uintptr_t)&off_2097A88);
  v88 = (uint32_t *)((char *)v57 + 56);
  v89 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
  v17 = *((uint32_t *)v57 + 15);
  v18 = *((uint32_t *)v57 + 16) & 0x3FFFFFFF;
  v90 = v17;
  if ( v17 + 1 > v18 )
  {
    v30 = 2 * v18;
    if ( v30 < v17 + 1 )
      v30 = v17 + 1;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v64, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v58, v30, 1);
    v19 = v88;
    v58 = (int *)(v88);
    v17 = v88[1];
  }
  else
  {
    v19 = (uint32_t *)((char *)v57 + 56);
  }
  *(uint8_t *)(*v19 + v17) = 0;
  hkStructureLayout::Construct(&v65, &hkStructureLayout::MsvcWin32LayoutRules);
  hkObjectSerialize::writeObject(
    (int)(uintptr_t)(&v86),
    (int)(uintptr_t)(&v65),
    1u,
    (hkClass::Self *)&v82,
    (hkRelocationInfo::Self *)&hkMonitorStreamStringMapClass,
    &v66,
    0,
    2);
  v86 = (int)((uint32_t)(uintptr_t)&off_2097A88);
  if ( v91 == 0 )
  {
    v20 = v88;
    if ( v88 != nullptr )
    {
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        v20,
        12);
    }
  }
  v86 = (int)((uint32_t)(uintptr_t)&off_2054CB8);
  v22 = v83 - 1;
  v23 = (hkStringPtr::Self *)(v82 + 16 * (v83 - 1) + 8);
  if ( v83 - 1 >= 0 )
  {
    do
    {
      --v22;
      hkStringPtr::Destroy(v23);
      v23 = (hkStringPtr::Self *)((char *)v23 - 16);
    }
    while ( v22 != -1 );
  }
  v83 = 0;
  if ( v84 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v82,
      16 * v84);
  v82 = 0;
  v84 = 0x80000000;
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v78,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  if ( v54 <= 0 )
  {
    v75 = 0;
    if ( v76 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v74,
        4 * v76);
    v74 = 0;
    v76 = 0x80000000;
    v71 = 0;
    if ( v72 >= 0 )
      (*(void (**)(uint32_t *, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v70,
        4 * v72);
    result = (hkStatisticsProcess::Self *)v68;
    v70 = 0;
    v72 = 0x80000000;
    v67 = 0;
    if ( v68 >= 0 )
      return (hkStatisticsProcess::Self *)(*(int (**)(uint32_t *, int, int, int, int, int, int, int, int, int, int, int, int, int *, int *, hkStatisticsProcess::Self *, uint32_t *, int *, uint32_t **, uint32_t, uint32_t, uint32_t, uint32_t, int, int, int, int, int, unsigned int, int, int, int, int, int, int, int, uint32_t *, int, int, int, int, int, int, int, int, int, uint32_t *, uint32_t *, int, int, int, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
                                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                                      v66,
                                      20 * v68,
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
                                      &v86,
                                      &v82,
                                      v57,
                                      (uint32_t *)((uint32_t *)(&hkContainerHeapAllocator::s_alloc)),
                                      v58,
                                      &v78,
                                      v64[0],
                                      v64[1],
                                      v64[2],
                                      v64[3],
                                      v65,
                                      v66,
                                      v67,
                                      v68,
                                      v69,
                                      v70,
                                      v71,
                                      v72,
                                      v73,
                                      v74,
                                      v75,
                                      v76,
                                      v77,
                                      v78,
                                      v79,
                                      v80,
                                      v81,
                                      v82,
                                      v83,
                                      v84,
                                      v85,
                                      v86,
                                      v87,
                                      v88,
                                      v89,
                                      v90,
                                      v91,
                                      v92,
                                      v93,
                                      v94);
  }
  else
  {
    *(uint32_t *)v59 = v71;
    v24 = *((uint32_t *)v57 + 15);
    v61 = *((hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> **)v57 + 12);
    hkOArchive::write32u(*((hkOArchive::Self **)v57 + 5), (char *)v61 + 4 * v71 + v24 + v54 + 17);
    hkOArchive::write8u(*((hkOArchive::Self **)v57 + 5), 0xD4u);
    hkOArchive::write32(*((hkOArchive::Self **)v57 + 5), hkStatisticsProcess::protocolVersion);
    hkOArchive::write32(*((hkOArchive::Self **)v57 + 5), v61);
    if ( (int)(uintptr_t)(v61) > 0 )
      hkOArchive::writeRaw(*((hkOArchive::Self **)v57 + 5), *((const void **)v57 + 11), (int)(uintptr_t)(v61));
    hkOArchive::write32(*((hkOArchive::Self **)v57 + 5), v24);
    if ( v24 > 0 )
      hkOArchive::writeRaw(*((hkOArchive::Self **)v57 + 5), *((const void **)v57 + 14), v24);
    v25 = 0;
    hkOArchive::write32(*((hkOArchive::Self **)v57 + 5), *(uint32_t *)v59);
    if ( *(int *)v59 > 0 )
    {
      do
      {
        v62 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(*(uint32_t *)(v74 + 4 * v25)
                                                                                        - *(uint32_t *)(v70 + 4 * v25));
        hkOArchive::write32(*((hkOArchive::Self **)v57 + 5), v62);
        if ( (int)(uintptr_t)(v62) > 0 )
          hkOArchive::writeRaw(*((hkOArchive::Self **)v57 + 5), *(const void **)(v70 + 4 * v25), (int)(uintptr_t)(v62));
        ++v25;
      }
      while ( v25 != *(uint32_t *)v59 );
    }
    v75 = 0;
    if ( v76 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v74,
        4 * v76);
    v74 = 0;
    v76 = 0x80000000;
    v71 = 0;
    if ( v72 >= 0 )
      (*(void (**)(uint32_t *, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v70,
        4 * v72);
    result = (hkStatisticsProcess::Self *)v68;
    v70 = 0;
    v72 = 0x80000000;
    v67 = 0;
    if ( v68 >= 0 )
      return (hkStatisticsProcess::Self *)(*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
                                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                                      v66,
                                      20 * v68);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStatisticsProcess::registerProcess  (binary VA: 0x18f4490)
// Original: hkStatisticsProcess::registerProcess
// ----------------------------------------------------------------------------
int hkStatisticsProcess::registerProcess()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "Statistics",
             (int)(uintptr_t)(hkStatisticsProcess::create));
  hkStatisticsProcess::m_tag = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkStatisticsProcess::Construct  (binary VA: 0x18f44e0)
// Original: hkStatisticsProcess::hkStatisticsProcess
// ----------------------------------------------------------------------------
void hkStatisticsProcess::Construct(int a1, unsigned int *a2)
{
  int v2;
  unsigned int TicksPerSecond;
  signed int v4;
  long double v5; // fst7
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  int address;
  int v11;
  unsigned int *v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  int i;
  typedef int _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef unsigned int *_g4_t_v22;
  typedef char _g4_t_v23[4];
  typedef float _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t _g4_t_v29[2];
  typedef uint32_t *_g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef char _g4_t_v34[4];
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef float _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int *_g4_t_v40;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v23)) > _g4_s4 ? (28u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v24)) > _g4_s5 ? (32u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v25)) > _g4_s6 ? (48u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v26)) > _g4_s7 ? (52u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v27)) > _g4_s8 ? (56u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v28)) > _g4_s9 ? (60u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v29)) > _g4_s10 ? (68u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v30)) > _g4_s11 ? (76u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v31)) > _g4_s12 ? (80u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v32)) > _g4_s13 ? (84u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v33)) > _g4_s14 ? (88u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v34)) > _g4_s15 ? (96u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v35)) > _g4_s16 ? (100u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v36)) > _g4_s17 ? (104u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v37)) > _g4_s18 ? (108u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v38)) > _g4_s19 ? (112u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v39)) > _g4_s20 ? (116u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v40)) > _g4_s21 ? (140u + sizeof(_g4_t_v40)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 84u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 88u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 104u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 108u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 112u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 116u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 140u);

  v40 = &a1;
  v2 = a1;
  v22 = a2;
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20A908C);
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_20A9068);
  *(uint32_t *)(v2 + 4) = -65535;
  *(uint8_t *)(v2 + 12) = 1;
  *(uint32_t *)(v2 + 32) = 0;
  *(uint32_t *)(v2 + 36) = 0;
  *(uint32_t *)(v2 + 40) = 0x80000000;
  *(uint32_t *)(v2 + 44) = 0;
  *(uint32_t *)(v2 + 48) = 0;
  *(uint32_t *)(v2 + 52) = 0x80000000;
  *(uint32_t *)(v2 + 56) = 0;
  *(uint32_t *)(v2 + 60) = 0;
  *(uint32_t *)(v2 + 64) = 0x80000000;
  hkMonitorStreamFrameInfo::Construct((hkMonitorStreamFrameInfo::Self *)v34);
  hkStringPtr::opAssign((hkStringPtr::Self *)v34, nullptr);
  v37 = 0;
  v35 = 0;
  v36 = 1;
  TicksPerSecond = hkStopwatch::getTicksPerSecond();
  v5 = (long double)g4_m128_lane<int64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(TicksPerSecond), _mm_cvtsi32_si128(v4)), 0);
  if ( v4 < 0 )
    v5 = v5 + 1.8446744e19f;
  v24 = v5;
  v6 = *(uint32_t *)(v2 + 48);
  v29[0] = ((uint32_t)(uintptr_t)&off_2097A88);
  v31 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
  v7 = *(uint32_t *)(v2 + 52) & 0x3FFFFFFF;
  v8 = (uint32_t *)(v2 + 44);
  v39 = 1065353216;
  v26 = 0;
  v27 = 0;
  v28 = 0x80000000;
  v29[1] = -65535;
  v30 = (uint32_t *)(v2 + 44);
  v32 = v6;
  v33 = 1;
  v38 = 1000.0 / v24;
  if ( v6 + 1 > v7 )
  {
    v9 = 2 * v7;
    if ( v9 < v6 + 1 )
      v9 = v6 + 1;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v23,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)(v2 + 44),
      v9,
      1);
    v8 = v30;
    v6 = v30[1];
  }
  *(uint8_t *)(*v8 + v6) = 0;
  hkStructureLayout::Construct(&v25, &hkStructureLayout::MsvcWin32LayoutRules);
  hkObjectSerialize::writeObject(
    (int)(uintptr_t)(v29),
    (int)(uintptr_t)(&v25),
    1u,
    (hkClass::Self *)v34,
    (hkRelocationInfo::Self *)&hkMonitorStreamFrameInfoClass,
    &v26,
    0,
    2);
  v29[0] = ((uint32_t)(uintptr_t)&off_2097A88);
  if ( v33 == 0 )
  {
    v20 = v30;
    if ( v30 != nullptr )
    {
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      (*(void (**)(uint32_t, uint32_t *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
        *(uint32_t *)(*(uint32_t *)address + 44),
        v20,
        12);
    }
  }
  v27 = 0;
  v29[0] = ((uint32_t)(uintptr_t)&off_2054CB8);
  if ( v28 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v26,
      20 * v28);
  v11 = v22[1];
  if ( (*(uint32_t *)(v2 + 40) & 0x3FFFFFFF) < v11 )
  {
    if ( *(int *)(v2 + 40) >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *(uint32_t *)(v2 + 32),
        4 * *(uint32_t *)(v2 + 40));
      v11 = v22[1];
    }
    v29[0] = 4 * v11;
    v16 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v29);
    v17 = v29[0];
    *(uint32_t *)(v2 + 32) = v16;
    v21 = v16;
    v12 = v22;
    *(uint32_t *)(v2 + 40) = v17 / 4;
    v11 = v22[1];
  }
  else
  {
    v21 = *(uint32_t *)(v2 + 32);
    v12 = v22;
  }
  *(uint32_t *)(v2 + 36) = v11;
  v13 = *v12;
  if ( v11 > 0 )
  {
    if ( (v21 >= v13 + 16 || v13 >= v21 + 16) && (unsigned int)v11 > 0xB )
    {
      v14 = 0;
      v15 = 0;
      v19 = 4 * ((unsigned int)v11 >> 2);
      do
      {
        ++v15;
        *(__m128i *)(v21 + v14) = *(__m128i *)(v13 + v14);
        v14 += 16;
      }
      while ( (unsigned int)v11 >> 2 > v15 );
      if ( v11 != v19 )
      {
        *(uint32_t *)(v21 + 16 * ((unsigned int)v11 >> 2)) = *(uint32_t *)(v13 + 16 * ((unsigned int)v11 >> 2));
        if ( v11 > v19 + 1 )
        {
          *(uint32_t *)(v21 + 4 * (v19 + 1)) = *(uint32_t *)(v13 + 4 * (v19 + 1));
          if ( v11 > v19 + 2 )
            *(uint32_t *)(v21 + 4 * (v19 + 2)) = *(uint32_t *)(v13 + 4 * (v19 + 2));
        }
      }
    }
    else
    {
      for ( i = 0; i != v11; ++i )
        *(uint32_t *)(v21 + 4 * i) = *(uint32_t *)(v13 + 4 * i);
    }
  }
  hkStringPtr::Destroy((hkStringPtr::Self *)v34);
}

// ----------------------------------------------------------------------------
// Function: hkStatisticsProcess::create  (binary VA: 0x18f4940)
// Original: hkStatisticsProcess::create
// ----------------------------------------------------------------------------
int hkStatisticsProcess::create(unsigned int *a1)
{
  int address;
  int v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         68);
  hkStatisticsProcess::Construct(v2, a1);
  if ( v2 != 0 )
    return v2 + 8;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeOStream::Construct  (binary VA: 0x18f49a0)
// Original: hkDisplaySerializeOStream::hkDisplaySerializeOStream
// ----------------------------------------------------------------------------
void hkDisplaySerializeOStream::Construct(hkDisplaySerializeOStream::Self *self, hkStreamWriter::Self *a2)
{
  hkStreamWriter::Self *v2;
  hkDisplaySerializeOStream::Self *v3;
  int address;
  volatile int32_t *v5;
  hkBufferedStreamWriter::Self *v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett
  int v11;
  int32_t v12; // kr04_4
  int v13;
  int v14;
  int32_t v15; // kr08_4
  int32_t v16;
  int32_t v17; // ett
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef hkDisplaySerializeOStream::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef hkBufferedStreamWriter::Self *_g4_t_v24;
  typedef uint32_t _g4_t_v25[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v23)) > _g4_s5 ? (20u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v24)) > _g4_s6 ? (20u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v25)) > _g4_s7 ? (24u + sizeof(_g4_t_v25)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);

  v25[3] = (uint32_t)(uintptr_t)(&self);
  v2 = a2;
  v3 = self;
  hkOArchive::Construct((int)(uintptr_t)(self), 0, 0);
  *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_20A9020);
  (*(void (**)(char *, hkStreamWriter::Self *, int, int, int, int, int, uint32_t))(*(uint32_t *)v2 + 44))(
    (char *)v25 + 3,
    v2,
    v18,
    v19,
    v20,
    v21,
    v23,
    v25[0]);
  if ( HIBYTE(v25[0]) != 0 )
  {
    if ( *((uint16_t *)v2 + 3) != 0 )
    {
      do
      {
        v12 = *((uint32_t *)v2 + 1);
        HIWORD(v11) = HIWORD(v12);
        LOWORD(v11) = 0;
      }
      while ( v12 != __sync_val_compare_and_swap(
                       (volatile int32_t *)v2 + 1,
                       v12,
                       v11 | (uint16_t)(v12 + 1)) );
    }
    v13 = *((uint32_t *)v3 + 2);
    if ( v13 != 0 && *(uint16_t *)(v13 + 6) != 0 )
    {
      v22 = v3;
      do
      {
        v15 = *(uint32_t *)(v13 + 4);
        HIWORD(v14) = HIWORD(v15);
        LOWORD(v14) = 0;
        v16 = v14 | (uint16_t)(v15 - 1);
        v17 = v15;
      }
      while ( v17 != __sync_val_compare_and_swap((volatile int32_t *)(v13 + 4), v17, v16) );
      v3 = v22;
      if ( (uint16_t)v16 == 0 )
        G4_VCALL<void>(v13, 16);
    }
    *((uint32_t *)v3 + 2) = (uint32_t)(uintptr_t)(v2);
  }
  else
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    v24 = (hkBufferedStreamWriter::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                      *(uint32_t *)(*(uint32_t *)address + 44),
                                      28);
    hkBufferedStreamWriter::Construct(v24, v2, (hkMemoryAllocator::Self *)&reinterpret_cast<G4Elf32Sym *>(stru_1FF4)->st_info);
    v5 = *((volatile int32_t **)v3 + 2);
    v6 = v24;
    if ( v5 != nullptr && v24 != (hkBufferedStreamWriter::Self *)v5 && *((uint16_t *)v5 + 3) != 0 )
    {
      do
      {
        v8 = *((uint32_t *)v5 + 1);
        HIWORD(v7) = HIWORD(v8);
        LOWORD(v7) = 0;
        v9 = v7 | (uint16_t)(v8 - 1);
        v10 = v8;
      }
      while ( v10 != __sync_val_compare_and_swap(v5 + 1, v10, v9) );
      v6 = v24;
      if ( (uint16_t)v9 == 0 )
      {
        G4_VCALL<void>(v5, 16);
        v6 = v24;
      }
    }
    *((uint32_t *)v3 + 2) = (uint32_t)(uintptr_t)(v6);
  }
}



// ============================================================================
// Address:   0x18f4b30 (size: 64 bytes)
// Symbol:    _ZN25hkDisplaySerializeOStreamC1ER7hkArrayIc24hkContainerHeapAllocatorE
// Demangled: hkDisplaySerializeOStream::hkDisplaySerializeOStream(hkArray<char,hkContainerHeapAllocator> &)
// ============================================================================
// Alternative name is '_ZN25hkDisplaySerializeOStreamC2ER7hkArrayIc24hkContainerHeapAllocatorE'
void (**hkDisplaySerializeOStream::Construct(
        uint32_t *a1,
        int a2))(hkDisplaySerializeOStream::Self * self)
{
  hkOArchive::Construct(a1, a2, 0);
  *a1 = ((uint32_t)(uintptr_t)&off_20A9020);
  return (void (**)(hkDisplaySerializeOStream::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A9020));
}
// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeOStream::writeQuadVector4  (binary VA: 0x18f4b70)
// Original: hkDisplaySerializeOStream::writeQuadVector4
// ----------------------------------------------------------------------------
uint8_t * hkDisplaySerializeOStream::writeQuadVector4(hkDisplaySerializeOStream::Self *self, const hkVector4f::Self *a2)
{
  return hkOArchive::writeArrayFloat32(self, (float *)a2, 3);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeOStream::writeTransform  (binary VA: 0x18f4bb0)
// Original: hkDisplaySerializeOStream::writeTransform
// ----------------------------------------------------------------------------
uint8_t * hkDisplaySerializeOStream::writeTransform(hkDisplaySerializeOStream::Self *self, const hkTransformf::Self *a2)
{
  int v2;
  typedef g4_int128_t _g4_t_v4;
  typedef float _g4_t_v5[4];
  typedef uint32_t _g4_t_v6[15];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v6)) > _g4_s2 ? (32u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);

  v4 = *((g4_int128_t *)a2 + 3);
  v6[0] = *(uint32_t *)a2;
  v6[1] = *((uint32_t *)a2 + 1);
  v6[2] = *((uint32_t *)a2 + 2);
  v6[3] = *((uint32_t *)a2 + 3);
  v6[4] = *((uint32_t *)a2 + 4);
  v6[5] = *((uint32_t *)a2 + 5);
  v6[6] = *((uint32_t *)a2 + 6);
  v6[7] = *((uint32_t *)a2 + 7);
  v6[8] = *((uint32_t *)a2 + 8);
  v6[9] = *((uint32_t *)a2 + 9);
  v2 = *((uint32_t *)a2 + 11);
  v6[10] = *((uint32_t *)a2 + 10);
  v6[11] = v2;
  hkRotationf::renormalize((hkRotationf::Self *)v6);
  hkQuaternionf::set((hkQuaternionf::Self *)v5, (const hkRotationf::Self *)v6);
  hkOArchive::writeArrayFloat32(self, (float *)&v4, 3);
  return hkOArchive::writeArrayFloat32(self, v5, 4);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeOStream::writeTriangle  (binary VA: 0x18f4c90)
// Original: hkDisplaySerializeOStream::writeTriangle
// ----------------------------------------------------------------------------
uint8_t * hkDisplaySerializeOStream::writeTriangle(hkDisplaySerializeOStream::Self *self, const hkGeometry::Triangle::Self *a2)
{
  hkOArchive::write32(self, *(uint32_t *)a2);
  hkOArchive::write32(self, *((uint32_t *)a2 + 1));
  return hkOArchive::write32(self, *((uint32_t *)a2 + 2));
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeOStream::writeVectorArray  (binary VA: 0x18f4ce0)
// Original: hkDisplaySerializeOStream::writeVectorArray
// ----------------------------------------------------------------------------
uint8_t * hkDisplaySerializeOStream::writeVectorArray(hkDisplaySerializeOStream::Self *self, const hkArrayBase<hkVector4f::Self> *a2)
{
  int v2;
  int v3;
  uint8_t *result;
  hkVector4f::Self *v5;

  v2 = 0;
  v3 = *((uint32_t *)a2 + 1);
  result = hkOArchive::write32(self, v3);
  if ( v3 > 0 )
  {
    do
    {
      v5 = (hkVector4f::Self *)(*(uint32_t *)a2 + 16 * v2++);
      result = hkDisplaySerializeOStream::writeQuadVector4(self, v5);
    }
    while ( v2 != v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeOStream::writeGeometry  (binary VA: 0x18f4d40)
// Original: hkDisplaySerializeOStream::writeGeometry
// ----------------------------------------------------------------------------
uint8_t * hkDisplaySerializeOStream::writeGeometry(hkDisplaySerializeOStream::Self *self, const hkGeometry::Self *a2)
{
  int v2;
  uint8_t *result;
  int v4;
  int v5;

  v2 = 0;
  hkDisplaySerializeOStream::writeVectorArray(self, (const hkGeometry::Self *)((char *)a2 + 8));
  v5 = *((uint32_t *)a2 + 6);
  hkOArchive::write32(self, v5);
  result = (uint8_t *)v5;
  if ( v5 > 0 )
  {
    do
    {
      v4 = v2++;
      result = hkDisplaySerializeOStream::writeTriangle(
                 self,
                 (const hkGeometry::Triangle::Self *)(*((uint32_t *)a2 + 5) + 16 * v4));
    }
    while ( v2 != v5 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeOStream::computeBytesRequired  (binary VA: 0x18f4dc0)
// Original: hkDisplaySerializeOStream::computeBytesRequired
// ----------------------------------------------------------------------------
int hkDisplaySerializeOStream::computeBytesRequired(hkDisplaySerializeOStream::Self *self)
{
  return 12 * *((uint32_t *)self + 1) + 4;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeOStream::computeBytesRequired_ea18f4de0  (binary VA: 0x18f4de0)
// Original: hkDisplaySerializeOStream::computeBytesRequired
// ----------------------------------------------------------------------------
int hkDisplaySerializeOStream::computeBytesRequired_ea18f4de0(hkDisplaySerializeOStream::Self *self)
{
  return hkDisplaySerializeOStream::computeBytesRequired((hkDisplaySerializeOStream::Self *)((char *)self + 8))
       + 12 * *((uint32_t *)self + 6)
       + 4;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeOStream::writeDisplayGeometry  (binary VA: 0x18f4e20)
// Original: hkDisplaySerializeOStream::writeDisplayGeometry
// ----------------------------------------------------------------------------
char * hkDisplaySerializeOStream::writeDisplayGeometry(hkDisplaySerializeOStream::Self *self, hkDisplayGeometry *a2)
{
  hkDisplayGeometry *v2;
  hkDisplaySerializeOStream::Self *v3;
  char *result;
  int SeriaizedMeshDataSize;
  const void *SeriaizedMeshData;
  char *MinExtent;
  char *MaxExtent;
  int NumSegments;
  int v10;
  char *Center;
  char *Normal;
  char *PerpToNormal;
  float *Extents;
  typedef hkDisplaySemiCircle::Self *_g4_t_v15;
  typedef hkDisplaySemiCircle::Self *_g4_t_v16;
  typedef float _g4_t_Angle;
  typedef float _g4_t_Height;
  typedef float _g4_t_Radius;
  typedef float _g4_t_ThetaMin;
  typedef float _g4_t_ThetaMax;
  typedef uint32_t _g4_t_v22[3];
  typedef float _g4_t_v23;
  typedef hkDisplaySerializeOStream::Self **_g4_t_v24;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v16)) > _g4_s1 ? (0u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_Angle)) > _g4_s2 ? (0u + sizeof(_g4_t_Angle)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_Height)) > _g4_s3 ? (0u + sizeof(_g4_t_Height)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_Radius)) > _g4_s4 ? (0u + sizeof(_g4_t_Radius)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_ThetaMin)) > _g4_s5 ? (0u + sizeof(_g4_t_ThetaMin)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_ThetaMax)) > _g4_s6 ? (0u + sizeof(_g4_t_ThetaMax)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v22)) > _g4_s7 ? (4u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v23)) > _g4_s8 ? (16u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v24)) > _g4_s9 ? (28u + sizeof(_g4_t_v24)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_Angle &Angle = *reinterpret_cast<_g4_t_Angle *>(_g4_sf + 0u);
  _g4_t_Height &Height = *reinterpret_cast<_g4_t_Height *>(_g4_sf + 0u);
  _g4_t_Radius &Radius = *reinterpret_cast<_g4_t_Radius *>(_g4_sf + 0u);
  _g4_t_ThetaMin &ThetaMin = *reinterpret_cast<_g4_t_ThetaMin *>(_g4_sf + 0u);
  _g4_t_ThetaMax &ThetaMax = *reinterpret_cast<_g4_t_ThetaMax *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);

  v24 = &self;
  v2 = a2;
  v3 = self;
  v15 = *((hkDisplaySemiCircle::Self **)a2 + 20);
  hkOArchive::write8(self, (char)(uintptr_t)(v15));
  result = (char *)dword_20B9FF4 + (uint32_t)jpt_18F4E6B[(uint32_t)(uintptr_t)(v15)];
  switch ( (unsigned int)(uintptr_t)(v15) )
  {
    case 0u:
      return result;
    case 1u:
      hkDisplaySerializeOStream::writeTransform(v3, (const hkTransformf::Self *)((hkDisplayGeometry *)((char *)v2 + 16)));
      v22[0] = *((uint32_t *)v2 + 24);
      v22[1] = *((uint32_t *)v2 + 25);
      v22[2] = *((uint32_t *)v2 + 26);
      v23 = *((float *)v2 + 27);
      hkOArchive::writeFloat32(v3, v23);
      hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)v22);
      hkOArchive::write32(v3, *((uint32_t *)v2 + 28));
      result = (char *)(hkOArchive::write32(v3, 0));
      break;
    case 2u:
      hkDisplaySerializeOStream::writeTransform(v3, (const hkTransformf::Self *)((hkDisplayGeometry *)((char *)v2 + 16)));
      result = (char *)(hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)((hkDisplayGeometry *)((char *)v2 + 96))));
      break;
    case 3u:
      MinExtent = hkDisplayAABB::getMinExtent((hkDisplayAABB::Self *)(v2));
      hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)MinExtent);
      MaxExtent = hkDisplayAABB::getMaxExtent((hkDisplayAABB::Self *)(v2));
      result = (char *)(hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)MaxExtent));
      break;
    case 4u:
      hkDisplayCone::getPosition((hkDisplayCone::Self *)v22, (uint32_t *)(v2));
      hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)v22);
      hkDisplayCone::getAxis((hkDisplayCone::Self *)v22, (uint32_t *)(v2));
      hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)v22);
      Angle = hkDisplayCone::getAngle((hkDisplayCone::Self *)(v2));
      hkOArchive::writeFloat32(v3, Angle);
      Height = hkDisplayCone::getHeight((hkDisplayCone::Self *)(v2));
      hkOArchive::writeFloat32(v3, Height);
      NumSegments = hkDisplayCone::getNumSegments((hkDisplayCone::Self *)(v2));
      result = (char *)(hkOArchive::write32(v3, NumSegments));
      break;
    case 5u:
      hkDisplaySemiCircle::getCenter((hkDisplaySemiCircle::Self *)v22, (uint32_t *)(v2));
      hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)v22);
      hkDisplaySemiCircle::getNormal((hkDisplaySemiCircle::Self *)v22, (uint32_t *)(v2));
      hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)v22);
      hkDisplaySemiCircle::getPerp((hkDisplaySemiCircle::Self *)v22, (uint32_t *)(v2));
      hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)v22);
      Radius = hkDisplaySemiCircle::getRadius((hkDisplaySemiCircle::Self *)(v2));
      hkOArchive::writeFloat32(v3, Radius);
      ThetaMin = hkDisplaySemiCircle::getThetaMin((hkDisplaySemiCircle::Self *)(v2));
      hkOArchive::writeFloat32(v3, ThetaMin);
      ThetaMax = hkDisplaySemiCircle::getThetaMax((hkDisplaySemiCircle::Self *)(v2));
      hkOArchive::writeFloat32(v3, ThetaMax);
      v10 = hkDisplaySemiCircle::getNumSegments((hkDisplaySemiCircle::Self *)(v2));
      result = (char *)(hkOArchive::write32(v3, v10));
      break;
    case 6u:
      hkDisplaySerializeOStream::writeTransform(v3, (const hkTransformf::Self *)((hkDisplayGeometry *)((char *)v2 + 16)));
      result = (char *)(hkDisplaySerializeOStream::writeGeometry(v3, *((const hkGeometry::Self **)v2 + 2)));
      break;
    case 7u:
      Center = hkDisplayPlane::getCenter(v2);
      hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)Center);
      Normal = hkDisplayPlane::getNormal(v2);
      hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)Normal);
      PerpToNormal = hkDisplayPlane::getPerpToNormal(v2);
      hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)PerpToNormal);
      Extents = (float *)hkDisplayPlane::getExtents(v2);
      result = (char *)(hkOArchive::writeFloat32(v3, *Extents));
      break;
    case 8u:
    case 9u:
      hkDisplaySerializeOStream::writeTransform(v3, (const hkTransformf::Self *)((hkDisplayGeometry *)((char *)v2 + 16)));
      hkOArchive::writeFloat32(v3, *((float *)v2 + 32));
      hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)((hkDisplayGeometry *)((char *)v2 + 96)));
      hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)((hkDisplayGeometry *)((char *)v2 + 112)));
      hkOArchive::write32(v3, *((uint32_t *)v2 + 33));
      result = (char *)(hkOArchive::write32(v3, *((uint32_t *)v2 + 34)));
      break;
    case 0xAu:
      hkDisplaySerializeOStream::writeTransform(v3, (const hkTransformf::Self *)((hkDisplayGeometry *)((char *)v2 + 16)));
      hkOArchive::writeFloat32(v3, *((float *)v2 + 33));
      hkOArchive::writeFloat32(v3, *((float *)v2 + 32));
      hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)((hkDisplayGeometry *)((char *)v2 + 96)));
      hkDisplaySerializeOStream::writeQuadVector4(v3, (const hkVector4f::Self *)((hkDisplayGeometry *)((char *)v2 + 112)));
      hkOArchive::write32(v3, *((uint32_t *)v2 + 34));
      result = (char *)(hkOArchive::write32(v3, *((uint32_t *)v2 + 35)));
      break;
    case 0xBu:
      SeriaizedMeshDataSize = hkDisplayMesh::getSeriaizedMeshDataSize((hkDisplayMesh::Self *)(v2));
      hkOArchive::write32(v3, SeriaizedMeshDataSize);
      v16 = (hkDisplaySemiCircle::Self *)hkDisplayMesh::getSeriaizedMeshDataSize((hkDisplayMesh::Self *)(v2));
      SeriaizedMeshData = (const void *)hkDisplayMesh::getSeriaizedMeshData((hkDisplayMesh::Self *)(v2));
      hkOArchive::writeRaw(v3, SeriaizedMeshData, (int)(uintptr_t)(v16));
      result = (char *)hkDisplayMesh::freeSerializedMeshData((hkDisplayMesh::Self *)(v2));
      break;
    case 0xCu:
      hkDisplaySerializeOStream::writeTransform(v3, (const hkTransformf::Self *)((hkDisplayGeometry *)((char *)v2 + 16)));
      result = (char *)(hkDisplaySerializeOStream::writeVectorArray(v3, (hkDisplayGeometry *)((char *)v2 + 84)));
      break;
    default:
      result = (char *)v15;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeOStream::computeBytesRequired  (binary VA: 0x18f52c0)
// Original: hkDisplaySerializeOStream::computeBytesRequired
// ----------------------------------------------------------------------------
int hkDisplaySerializeOStream::computeBytesRequired(hkDisplaySerializeOStream::Self **self)
{
  int result;

  switch ( (unsigned int)(uintptr_t)(*(self + 20)) )
  {
    case 1u:
    case 5u:
      result = 53;
      break;
    case 2u:
    case 7u:
      result = 41;
      break;
    case 3u:
      result = 25;
      break;
    case 4u:
      result = 37;
      break;
    case 6u:
      result = hkDisplaySerializeOStream::computeBytesRequired(*(self + 2)) + 29;
      break;
    case 8u:
    case 9u:
      result = 65;
      break;
    case 0xAu:
      result = 69;
      break;
    case 0xBu:
      hkDisplayMesh::serializeMeshData((hkDisplayMesh::Self *)self);
      result = hkDisplayMesh::getSeriaizedMeshDataSize((hkDisplayMesh::Self *)self) + 5;
      break;
    case 0xCu:
      result = hkDisplaySerializeOStream::computeBytesRequired((hkDisplaySerializeOStream::Self *)(self + 21)) + 29;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeOStream::writeHash  (binary VA: 0x18f5380)
// Original: hkDisplaySerializeOStream::writeHash
// ----------------------------------------------------------------------------
uint8_t * hkDisplaySerializeOStream::writeHash(hkDisplaySerializeOStream::Self *self, uint64_t *a2)
{
  return hkOArchive::write64u(self, *a2);
}

// ----------------------------------------------------------------------------
// Function: hkDisplaySerializeOStream::writeAabb  (binary VA: 0x18f53c0)
// Original: hkDisplaySerializeOStream::writeAabb
// ----------------------------------------------------------------------------
uint8_t * hkDisplaySerializeOStream::writeAabb(hkDisplaySerializeOStream::Self *self, const hkAabb::Self *a2)
{
  hkDisplaySerializeOStream::writeQuadVector4(self, (const hkVector4f::Self *)(a2));
  return hkDisplaySerializeOStream::writeQuadVector4(self, (const hkVector4f::Self *)((const hkAabb::Self *)((char *)a2 + 16)));
}

// ----------------------------------------------------------------------------
// Function: hkDisplayTaperedCapsule::getWireframeGeometry  (binary VA: 0x18f5400)
// Original: hkDisplayTaperedCapsule::getWireframeGeometry
// ----------------------------------------------------------------------------
void hkDisplayTaperedCapsule::getWireframeGeometry()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayTaperedCapsule::Destroy  (binary VA: 0x18f5410)
// Original: hkDisplayTaperedCapsule::~hkDisplayTaperedCapsule
// ----------------------------------------------------------------------------
void hkDisplayTaperedCapsule::Destroy(hkDisplayTaperedCapsule::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A90C8);
  g4_noop_dtor(self);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayTaperedCapsule::Destroy_ea18f5440  (binary VA: 0x18f5440)
// Original: hkDisplayTaperedCapsule::~hkDisplayTaperedCapsule
// ----------------------------------------------------------------------------
void hkDisplayTaperedCapsule::Destroy_ea18f5440(hkDisplayTaperedCapsule::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A90C8);
  g4_noop_dtor(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 144;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayTaperedCapsule::buildGeometry  (binary VA: 0x18f54b0)
// Original: hkDisplayTaperedCapsule::buildGeometry
// ----------------------------------------------------------------------------
int hkDisplayTaperedCapsule::buildGeometry(hkDisplayTaperedCapsule::Self *self)
{
  int address;
  const hkTransformf::Self *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (const hkTransformf::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                               *(uint32_t *)(*(uint32_t *)address + 44),
                               32);
  *((uint32_t *)v2 + 1) = -65535;
  *((uint32_t *)v2 + 2) = 0;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_20586B8);
  *((uint32_t *)v2 + 3) = 0;
  *((uint32_t *)v2 + 4) = 0x80000000;
  *((uint32_t *)v2 + 5) = 0;
  *((uint32_t *)v2 + 6) = 0;
  *((uint32_t *)v2 + 7) = 0x80000000;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v2);
  return hkGeometryUtils::createTaperedCapsuleGeometry(
           (hkDisplayTaperedCapsule::Self *)((char *)self + 96),
           (hkDisplayTaperedCapsule::Self *)((char *)self + 112),
           *((const hkVector4f::Self **)self + 32),
           *((float *)self + 33),
           *((uint32_t *)self + 35),
           *((uint32_t *)self + 34),
           (float *)&xmmword_1D12FD0,
           v2);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayTaperedCapsule::Construct  (binary VA: 0x18f5580)
// Original: hkDisplayTaperedCapsule::hkDisplayTaperedCapsule
// ----------------------------------------------------------------------------
void hkDisplayTaperedCapsule::Construct(hkDisplayTaperedCapsule::Self *self, const hkVector4f::Self *a2, const hkVector4f::Self *a3, float a4, float a5, int a6, int a7)
{
  int v7;

  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 20) = 10;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A90C8);
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 34) = a6;
  *((uint32_t *)self + 35) = a7;
  *((uint32_t *)self + 24) = *(uint32_t *)a2;
  *((uint32_t *)self + 25) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 26) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 27) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 28) = *(uint32_t *)a3;
  *((uint32_t *)self + 29) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 30) = *((uint32_t *)a3 + 2);
  v7 = *((uint32_t *)a3 + 3);
  *((float *)self + 32) = a4;
  *((uint32_t *)self + 31) = v7;
  *((float *)self + 33) = a5;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshotProcess::getProcessTag  (binary VA: 0x18f56b0)
// Original: hkMemorySnapshotProcess::getProcessTag
// ----------------------------------------------------------------------------
int hkMemorySnapshotProcess::getProcessTag()
{
  return hkMemorySnapshotProcess::m_tag;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshotProcess::Destroy  (binary VA: 0x18f56e0)
// Original: hkMemorySnapshotProcess::~hkMemorySnapshotProcess
// ----------------------------------------------------------------------------
void hkMemorySnapshotProcess::Destroy(hkMemorySnapshotProcess::Self *self)
{
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3A48);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshotProcess::Destroy_ea18f5720  (binary VA: 0x18f5720)
// Original: hkMemorySnapshotProcess::~hkMemorySnapshotProcess
// ----------------------------------------------------------------------------
void hkMemorySnapshotProcess::Destroy_ea18f5720(hkMemorySnapshotProcess::Self *self)
{
  int v1;
  int v2;

  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A3A48);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshotProcess::registerProcess  (binary VA: 0x18f57a0)
// Original: hkMemorySnapshotProcess::registerProcess
// ----------------------------------------------------------------------------
int hkMemorySnapshotProcess::registerProcess()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "* Grab Memory Snapshot",
             (int)(uintptr_t)(hkMemorySnapshotProcess::create));
  hkMemorySnapshotProcess::m_tag = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshotProcess::Construct  (binary VA: 0x18f57f0)
// Original: hkMemorySnapshotProcess::hkMemorySnapshotProcess
// ----------------------------------------------------------------------------
int hkMemorySnapshotProcess::Construct(int a1)
{
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint8_t *)(a1 + 12) = 1;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20A9128);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_20A914C);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshotProcess::create  (binary VA: 0x18f5820)
// Original: hkMemorySnapshotProcess::create
// ----------------------------------------------------------------------------
int hkMemorySnapshotProcess::create()
{
  int address;
  int v1;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v1 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         32);
  hkMemorySnapshotProcess::Construct(v1);
  if ( v1 != 0 )
    return v1 + 8;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkMemorySnapshotProcess::step  (binary VA: 0x18f5880)
// Original: hkMemorySnapshotProcess::step
// ----------------------------------------------------------------------------
int hkMemorySnapshotProcess::step(hkOArchive::Self **self)
{
  hkStreamWriter::Self *StreamWriter;
  hkVdbStreamReportUtil::Self *v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int result;
  typedef hkTrackerSnapshotUtil::Self *_g4_t_v8;
  typedef hkOstream::Self *_g4_t_v9;
  typedef hkVdbStreamReportUtil::Self *_g4_t_Snapshot;
  typedef volatile int32_t *_g4_t_v11;
  typedef uint8_t _g4_t_v12[8];
  typedef uint8_t _g4_t_v13[12];
  typedef uint8_t _g4_t_v14[56];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v9)) > _g4_s1 ? (20u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_Snapshot)) > _g4_s2 ? (36u + sizeof(_g4_t_Snapshot)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v11)) > _g4_s3 ? (36u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v12)) > _g4_s4 ? (40u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v13)) > _g4_s5 ? (48u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v14)) > _g4_s6 ? (60u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_Snapshot &Snapshot = *reinterpret_cast<_g4_t_Snapshot *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);

  if ( *(self + 5) != nullptr )
  {
    StreamWriter = (hkStreamWriter::Self *)hkOArchive::getStreamWriter(*(self + 5));
    hkVdbCommandWriter::Construct((hkVdbCommandWriter::Self *)v14, StreamWriter, 0xD1u, 0x800u);
    hkOstream::Construct((hkOstream::Self *)v13, (hkStreamWriter::Self *)v14);
    Snapshot = (hkVdbStreamReportUtil::Self *)hkTrackerSnapshotUtil::createSnapshot(v8);
    hkVdbStreamReportUtil::generateReport(Snapshot, (const hkTrackerScanSnapshot::Self *)v13, v9);
    v2 = Snapshot;
    v11 = (volatile int32_t *)((char *)Snapshot + 4);
    if ( *((uint16_t *)v2 + 3) != 0 )
    {
      do
      {
        v4 = *((uint32_t *)v2 + 1);
        HIWORD(v3) = HIWORD(v4);
        LOWORD(v3) = 0;
        v5 = v3 | (uint16_t)(v4 - 1);
        v6 = v4;
      }
      while ( v6 != __sync_val_compare_and_swap(v11, v6, v5) );
      if ( (uint16_t)v5 == 0 )
        G4_VCALL<void>(v2, 16);
    }
    hkOstream::Destroy((hkOstream::Self *)v13);
    hkVdbCommandWriter::Destroy((hkVdbCommandWriter::Self *)v14);
  }
  result = (int)(uintptr_t)(*(self + 7));
  if ( result != 0 )
    return (*(int (**)(uint8_t *))(*(uint32_t *)result + 36))(v12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayWireframe::buildGeometry  (binary VA: 0x18f5990)
// Original: hkDisplayWireframe::buildGeometry
// ----------------------------------------------------------------------------
void hkDisplayWireframe::buildGeometry()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayWireframe::getWireframeGeometry  (binary VA: 0x18f59a0)
// Original: hkDisplayWireframe::getWireframeGeometry
// ----------------------------------------------------------------------------
hkArrayBase<hkVector4f::Self> * hkDisplayWireframe::getWireframeGeometry(hkDisplayWireframe::Self *self, hkArrayBase<hkVector4f::Self> *a2, hkMemoryAllocator::Self *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[28];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);

  v3 = *((uint32_t *)self + 22);
  v4 = *((uint32_t *)self + 21);
  v5 = *((uint32_t *)a2 + 1);
  v11 = v5 + v3;
  v6 = *((uint32_t *)a2 + 2) & 0x3FFFFFFF;
  if ( v5 + v3 > v6 )
  {
    v10 = 2 * v6;
    if ( v5 + v3 >= v10 )
      v10 = v5 + *((uint32_t *)self + 22);
    hkArrayUtil::reserve((hkArrayUtil::Self *)v12, a3, (int *)a2, v10, 16);
    v5 = *((uint32_t *)a2 + 1);
  }
  v7 = *(uint32_t *)a2 + 16 * v5;
  v8 = 0;
  if ( v3 > 0 )
  {
    do
    {
      *(uint32_t *)(v7 + v8) = *(uint32_t *)(v4 + v8);
      *(uint32_t *)(v7 + v8 + 4) = *(uint32_t *)(v4 + v8 + 4);
      *(uint32_t *)(v7 + v8 + 8) = *(uint32_t *)(v4 + v8 + 8);
      *(uint32_t *)(v7 + v8 + 12) = *(uint32_t *)(v4 + v8 + 12);
      v8 += 16;
    }
    while ( v8 != 16 * v3 );
  }
  *((uint32_t *)a2 + 1) = v11;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkDisplayWireframe::Destroy  (binary VA: 0x18f5a70)
// Original: hkDisplayWireframe::~hkDisplayWireframe
// ----------------------------------------------------------------------------
void hkDisplayWireframe::Destroy(hkDisplayWireframe::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A9188);
  v1 = *((uint32_t *)self + 23);
  *((uint32_t *)self + 22) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 21),
      16 * v1);
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 23) = 0x80000000;
  g4_noop_dtor(self);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayWireframe::Destroy_ea18f5ae0  (binary VA: 0x18f5ae0)
// Original: hkDisplayWireframe::~hkDisplayWireframe
// ----------------------------------------------------------------------------
void hkDisplayWireframe::Destroy_ea18f5ae0(hkDisplayWireframe::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A9188);
  v1 = *((uint32_t *)self + 23);
  *((uint32_t *)self + 22) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 21),
      16 * v1);
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 23) = 0x80000000;
  g4_noop_dtor(self);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 96;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}

// ----------------------------------------------------------------------------
// Function: hkDisplayWireframe::Construct  (binary VA: 0x18f5b80)
// Original: hkDisplayWireframe::hkDisplayWireframe
// ----------------------------------------------------------------------------
void hkDisplayWireframe::Construct(hkDisplayWireframe::Self *self)
{
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 1065353216;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 20) = 12;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 21) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A9188);
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::connect  (binary VA: 0x1a72d50)
// Original: hkClassMemberAccessor::connect
// ----------------------------------------------------------------------------
char * hkClassMemberAccessor::connect(hkClassMemberAccessor::Self *self, char *a2, const hkClassMember::Self *a3)
{
  char *result;

  result = &a2[*((uint16_t *)a3 + 9)];
  *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::connect  (binary VA: 0x1a72d70)
// Original: hkClassMemberAccessor::connect
// ----------------------------------------------------------------------------
hkString::Self ** hkClassMemberAccessor::connect(hkClassMemberAccessor::Self *self, char *a2, const hkClass::Self *a3, char *a4)
{
  hkString::Self **result;

  *(uint32_t *)self = 0;
  result = hkClass::getMemberByName(a3, a4);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
  if ( result != nullptr )
  {
    result = (hkString::Self **)&a2[*((uint16_t *)result + 9)];
    *(uint32_t *)self = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::Construct  (binary VA: 0x1a72dc0)
// Original: hkClassMemberAccessor::hkClassMemberAccessor
// ----------------------------------------------------------------------------
void hkClassMemberAccessor::Construct(hkClassMemberAccessor::Self *self, char *a2, const hkClassMember::Self *a3)
{
  hkClassMemberAccessor::connect(self, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::Construct  (binary VA: 0x1a72e00)
// Original: hkClassMemberAccessor::hkClassMemberAccessor
// ----------------------------------------------------------------------------
hkString::Self ** hkClassMemberAccessor::Construct(hkClassMemberAccessor::Self *a1, int a2, char *a3)
{
  return hkClassMemberAccessor::connect(a1, *(char **)a2, *(const hkClass::Self **)(a2 + 4), a3);
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::Construct  (binary VA: 0x1a72e40)
// Original: hkClassMemberAccessor::hkClassMemberAccessor
// ----------------------------------------------------------------------------
void hkClassMemberAccessor::Construct(hkClassMemberAccessor::Self *self, char *a2, const hkClass::Self *a3, char *a4)
{
  hkClassMemberAccessor::connect(self, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::isOk  (binary VA: 0x1a72e80)
// Original: hkClassMemberAccessor::isOk
// ----------------------------------------------------------------------------
hkClassMemberAccessor::Self * hkClassMemberAccessor::isOk(hkClassMemberAccessor::Self *self, uint32_t *a2)
{
  *(uint8_t *)self = *a2 != 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asRaw  (binary VA: 0x1a72ea0)
// Original: hkClassMemberAccessor::asRaw
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asRaw(hkClassMemberAccessor::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::getAddress  (binary VA: 0x1a72eb0)
// Original: hkClassMemberAccessor::getAddress
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::getAddress(hkClassMemberAccessor::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asPointer  (binary VA: 0x1a72ec0)
// Original: hkClassMemberAccessor::asPointer
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asPointer(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 4 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asCstring  (binary VA: 0x1a72ed0)
// Original: hkClassMemberAccessor::asCstring
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asCstring(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 4 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asStringPtr  (binary VA: 0x1a72ee0)
// Original: hkClassMemberAccessor::asStringPtr
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asStringPtr(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 4 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asBool  (binary VA: 0x1a72ef0)
// Original: hkClassMemberAccessor::asBool
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asBool(hkClassMemberAccessor::Self *self, int a2)
{
  return a2 + *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asReal  (binary VA: 0x1a72f00)
// Original: hkClassMemberAccessor::asReal
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asReal(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 4 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asHalf  (binary VA: 0x1a72f10)
// Original: hkClassMemberAccessor::asHalf
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asHalf(hkClassMemberAccessor::Self *self, int a2)
{
  return a2 + a2 + *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asInt32  (binary VA: 0x1a72f20)
// Original: hkClassMemberAccessor::asInt32
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asInt32(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 4 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asUint32  (binary VA: 0x1a72f30)
// Original: hkClassMemberAccessor::asUint32
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asUint32(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 4 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asInt64  (binary VA: 0x1a72f40)
// Original: hkClassMemberAccessor::asInt64
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asInt64(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 8 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asUint64  (binary VA: 0x1a72f50)
// Original: hkClassMemberAccessor::asUint64
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asUint64(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 8 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asUlong  (binary VA: 0x1a72f60)
// Original: hkClassMemberAccessor::asUlong
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asUlong(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 4 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asInt16  (binary VA: 0x1a72f70)
// Original: hkClassMemberAccessor::asInt16
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asInt16(hkClassMemberAccessor::Self *self, int a2)
{
  return a2 + a2 + *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asUint16  (binary VA: 0x1a72f80)
// Original: hkClassMemberAccessor::asUint16
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asUint16(hkClassMemberAccessor::Self *self, int a2)
{
  return a2 + a2 + *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asInt8  (binary VA: 0x1a72f90)
// Original: hkClassMemberAccessor::asInt8
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asInt8(hkClassMemberAccessor::Self *self, int a2)
{
  return a2 + *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asUint8  (binary VA: 0x1a72fa0)
// Original: hkClassMemberAccessor::asUint8
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asUint8(hkClassMemberAccessor::Self *self, int a2)
{
  return a2 + *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asVector4  (binary VA: 0x1a72fb0)
// Original: hkClassMemberAccessor::asVector4
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asVector4(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 16 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asMatrix3  (binary VA: 0x1a72fc0)
// Original: hkClassMemberAccessor::asMatrix3
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asMatrix3(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 48 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asTransform  (binary VA: 0x1a72fe0)
// Original: hkClassMemberAccessor::asTransform
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asTransform(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + (a2 << 6);
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asRotation  (binary VA: 0x1a72ff0)
// Original: hkClassMemberAccessor::asRotation
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asRotation(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 48 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asSimpleArray  (binary VA: 0x1a73010)
// Original: hkClassMemberAccessor::asSimpleArray
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asSimpleArray(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 8 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asHomogeneousArray  (binary VA: 0x1a73020)
// Original: hkClassMemberAccessor::asHomogeneousArray
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asHomogeneousArray(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 12 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::asVariant  (binary VA: 0x1a73040)
// Original: hkClassMemberAccessor::asVariant
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::asVariant(hkClassMemberAccessor::Self *self, int a2)
{
  return *(uint32_t *)self + 8 * a2;
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::getClassMember  (binary VA: 0x1a73050)
// Original: hkClassMemberAccessor::getClassMember
// ----------------------------------------------------------------------------
int hkClassMemberAccessor::getClassMember(hkClassMemberAccessor::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::member  (binary VA: 0x1a73060)
// Original: hkClassMemberAccessor::member
// ----------------------------------------------------------------------------
hkClassMemberAccessor::Self * hkClassMemberAccessor::member(hkClassMemberAccessor::Self *self, hkClassMember::Self **a2, char *a3)
{
  const hkClass::Self *StructClass;

  StructClass = (const hkClass::Self *)hkClassMember::getStructClass(a2[1]);
  hkClassMemberAccessor::Construct(self, (char *)*a2, StructClass, a3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkClassAccessor::Construct  (binary VA: 0x1a730b0)
// Original: hkClassAccessor::hkClassAccessor
// ----------------------------------------------------------------------------
void hkClassAccessor::Construct(hkClassAccessor::Self *self, void *a2, const hkClass::Self *a3)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a3);
}

// ----------------------------------------------------------------------------
// Function: hkClassMemberAccessor::object  (binary VA: 0x1a730d0)
// Original: hkClassMemberAccessor::object
// ----------------------------------------------------------------------------
hkClassMemberAccessor::Self * hkClassMemberAccessor::object(hkClassMemberAccessor::Self *self, int a2)
{
  const hkClass::Self *StructClass;

  StructClass = (const hkClass::Self *)hkClassMember::getStructClass(*(hkClassMember::Self **)(a2 + 4));
  hkClassAccessor::Construct(self, *(void **)a2, StructClass);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkClassAccessor::Construct  (binary VA: 0x1a73120)
// Original: hkClassAccessor::hkClassAccessor
// ----------------------------------------------------------------------------
int hkClassAccessor::Construct(int *a1, int *a2)
{
  int v2;
  int result;

  v2 = a2[1];
  result = *a2;
  *a1 = *a2;
  a1[1] = v2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkAabb::isValid  (binary VA: 0x1a73140)
// Original: hkAabb::isValid
// ----------------------------------------------------------------------------
bool hkAabb::isValid(hkAabb::Self *self)
{
  __m128i v1;
  __m128i v2;
  __m128i v3;
  __m128i v4;
  __m128i v5;
  __m128i v6;
  bool result;

g4_m128_raw(v1) = *(unsigned int *)self;
  result = (_mm_cvtsi128_si32(v1) & 0x7F800000) != 0x7F800000
        && (g4_m128_raw(v2) = *((unsigned int *)self + 4), (_mm_cvtsi128_si32(v2) & 0x7F800000) != 0x7F800000)
        && *(float *)g4_m128_ptr<int32_t>(v1) <= *(float *)g4_m128_ptr<int32_t>(v2)
        && (g4_m128_raw(v3) = *((unsigned int *)self + 1), (_mm_cvtsi128_si32(v3) & 0x7F800000) != 0x7F800000)
        && (g4_m128_raw(v4) = *((unsigned int *)self + 5), (_mm_cvtsi128_si32(v4) & 0x7F800000) != 0x7F800000)
        && *(float *)g4_m128_ptr<int32_t>(v3) <= *(float *)g4_m128_ptr<int32_t>(v4)
        && (g4_m128_raw(v5) = *((unsigned int *)self + 2), (_mm_cvtsi128_si32(v5) & 0x7F800000) != 0x7F800000)
        && (g4_m128_raw(v6) = *((unsigned int *)self + 6), (_mm_cvtsi128_si32(v6) & 0x7F800000) != 0x7F800000)
        && *(float *)g4_m128_ptr<int32_t>(v5) <= *(float *)g4_m128_ptr<int32_t>(v6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkClass::updateMetadataInplace  (binary VA: 0x1a734e0)
// Original: hkClass::updateMetadataInplace
// ----------------------------------------------------------------------------
void hkClass::updateMetadataInplace(hkClass::Self *a1, hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *a2, int a3)
{
  unsigned int v3;
  hkString::Self *Name;
  int DeclaredMember;

  if ( a3 == 1 )
  {
    sub_1A73210(a1, a2);
    v3 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(a2, (unsigned int)(uintptr_t)(a1), 0);
    if ( (v3 & 4) == 0 )
    {
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        a2,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (unsigned int)(uintptr_t)(a1),
        v3 | 4);
      Name = (hkString::Self *)hkClass::getName(a1);
      if ( hkString::strCmp(Name, "hkpConstraintInstance") == 0 )
      {
        DeclaredMember = hkClass::getDeclaredMember(a1, 2);
        *(uint8_t *)(DeclaredMember + *(uint16_t *)(hkClass::getMember((hkClass::Self *)&hkClassMemberClass, 4) + 18)) = 25;
      }
    }
    goto LABEL_8;
  }
  if ( a3 <= 3 )
  {
LABEL_8:
    sub_1A73350(a1, a2, 2, (void (*)(hkClassMember::Self *))sub_1A731F0);
    goto LABEL_9;
  }
  if ( a3 == 4 )
LABEL_9:
    sub_1A73350(a1, a2, 8, (void (*)(hkClassMember::Self *))sub_1A73420);
}

// ----------------------------------------------------------------------------
// Function: hkClass::updateMetadataInplace  (binary VA: 0x1a735f0)
// Original: hkClass::updateMetadataInplace
// ----------------------------------------------------------------------------
void hkClass::updateMetadataInplace(hkClass::Self *self, hkClass::Self **a2)
{
  hkClass::Self *v2;
  char *i;
  uint32_t v4[7];

  v4[0] = 0;
  v4[1] = 0;
  v4[2] = -1;
  v2 = *(hkClass::Self **)self;
  for ( i = (char *)self + 4; v2 != nullptr; v2 = *((hkClass::Self **)i - 1) )
  {
    i += 4;
    hkClass::updateMetadataInplace(
      v2,
      (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v4,
      (int)(uintptr_t)(a2));
  }
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v4,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkMotionState::initMotionState  (binary VA: 0x1a73670)
// Original: hkMotionState::initMotionState
// ----------------------------------------------------------------------------
hkUFloat8::Self * hkMotionState::initMotionState(hkMotionState::Self *self, const hkVector4f::Self *a2, const hkQuaternionf::Self *a3)
{
  int v3;
  hkUFloat8::Self *result;
  float v5[8];

  hkSweptTransformf::initSweptTransform((hkMotionState::Self *)((char *)self + 64), a2, a3);
  hkRotationf::set(self, a3);
  v3 = *(uint32_t *)a2;
  v5[0] = 0.0;
  *((uint32_t *)self + 12) = v3;
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 40) = 1065353216;
  *((uint32_t *)self + 36) = 0;
  *((uint16_t *)self + 82) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint16_t *)self + 83) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint16_t *)self + 84) = 0;
  *((uint32_t *)self + 39) = 0;
  hkUFloat8::opAssign((hkMotionState::Self *)((char *)self + 170), v5);
  v5[0] = 0.0;
  result = hkUFloat8::opAssign((hkMotionState::Self *)((char *)self + 171), v5);
  *((uint8_t *)self + 172) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::opNew  (binary VA: 0x1a73760)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::opNew()
{
  uint32_t *address;

  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(*(uint32_t *)(*address + 44), 12);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::opDelete  (binary VA: 0x1a737a0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_unsigned_l_56398e::opDelete(void *a1)
{
  uint32_t *address;

  if ( a1 != nullptr )
  {
    address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*address + 44) + 12))(*(uint32_t *)(*address + 44), a1, 12);
  }
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::opNew  (binary VA: 0x1a737f0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_unsigned_l_56398e::opNew(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::opNewArray  (binary VA: 0x1a73800)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_unsigned_l_56398e::opNewArray(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::opDelete  (binary VA: 0x1a73810)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_unsigned_l_56398e::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::opDeleteArray  (binary VA: 0x1a73820)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::operator delete[]
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_unsigned_l_56398e::opDeleteArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::Construct  (binary VA: 0x1a73830)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMultiMap
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_unsigned_l_56398e::Construct(hkMultiMap_Raw *self, uint32_t *a2, unsigned int a3)
{
  uint32_t *v3;
  int v4;

  v3 = a2;
  *((uint32_t *)self + 2) = (a3 >> 3) - 1;
  v4 = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = 0x80000000;
  if ( a3 >> 3 != 0 )
  {
    while ( 1 )
    {
      v3[2 * v4++] = -1;
      if ( a3 >> 3 == v4 )
        break;
      v3 = *(uint32_t **)self;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::Destroy  (binary VA: 0x1a73880)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::~hkMultiMap
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_unsigned_l_56398e::Destroy(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self)
{
  if ( *((int *)self + 1) >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *(uint32_t *)self,
      8 * *((uint32_t *)self + 2) + 8);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::findNumEntries  (binary VA: 0x1a738d0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findNumEntries
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::findNumEntries(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  int v2;
  unsigned int v3;
  int result;
  int i;

  v2 = *((uint32_t *)self + 2);
  v3 = v2 & (-1640531535 * (a2 >> 4));
  result = 0;
  for ( i = *(uint32_t *)(*(uint32_t *)self + 8 * v3); i != -1; i = *(uint32_t *)(*(uint32_t *)self + 8 * v3) )
  {
    if ( a2 == i )
      ++result;
    v3 = v2 & (v3 + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::findNumEntries  (binary VA: 0x1a73920)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findNumEntries
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::findNumEntries(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2, unsigned int a3)
{
  int v3;
  unsigned int v4;
  int v5;
  int result;
  int *v7;
  int i;

  v3 = *((uint32_t *)self + 2);
  v4 = v3 & (-1640531535 * (a2 >> 4));
  v5 = *(uint32_t *)self;
  result = 0;
  v7 = (int *)(*(uint32_t *)self + 8 * v4);
  for ( i = *v7; *v7 != -1; i = *v7 )
  {
    while ( a2 != i )
    {
      v4 = v3 & (v4 + 1);
      v7 = (int *)(v5 + 8 * v4);
      i = *v7;
      if ( *v7 == -1 )
        return result;
    }
    v4 = v3 & (v4 + 1);
    result += v7[1] == a3;
    v7 = (int *)(v5 + 8 * v4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::getIterator  (binary VA: 0x1a73990)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getIterator
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::getIterator(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 2);
  if ( v1 < 0 )
    return 0;
  result = 0;
  if ( **(uint32_t **)self == -1 )
  {
    do
      ++result;
    while ( result <= v1 && *(uint32_t *)(*(uint32_t *)self + 8 * result) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::getKey  (binary VA: 0x1a739d0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getKey
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::getKey(uint32_t *a1, int a2)
{
  return *(uint32_t *)(*a1 + 8 * a2);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::getValue  (binary VA: 0x1a739e0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getValue
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::getValue(uint32_t *a1, int a2)
{
  return *(uint32_t *)(*a1 + 8 * a2 + 4);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::setValue  (binary VA: 0x1a739f0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::setValue
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::setValue(int *a1, int a2, int a3)
{
  int result;

  result = *a1;
  *(uint32_t *)(*a1 + 8 * a2 + 4) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::getNext  (binary VA: 0x1a73a10)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getNext
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::getNext(uint32_t *a1, int a2)
{
  int result;
  int v3;

  result = a2 + 1;
  v3 = a1[2];
  if ( a2 + 1 <= v3 && *(uint32_t *)(*a1 + 8 * result) == -1 )
  {
    do
      ++result;
    while ( result <= v3 && *(uint32_t *)(*a1 + 8 * result) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::getNext  (binary VA: 0x1a73a50)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getNext
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::getNext(uint32_t *a1, int a2, int a3)
{
  int result;
  int v4;
  int v5;

  result = a2 + 1;
  v4 = a1[2];
  while ( 1 )
  {
    while ( result > v4 )
      result = 0;
    v5 = *(uint32_t *)(*a1 + 8 * result);
    if ( v5 == -1 )
      break;
    if ( v5 == a3 )
      return result;
    ++result;
  }
  return v4 + 1;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::isValid  (binary VA: 0x1a73a90)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::isValid
// ----------------------------------------------------------------------------
bool * hkMultiMap_unsigned_long_unsigned_l_56398e::isValid(bool *a1, int a2, int a3)
{
  *a1 = a3 <= *(uint32_t *)(a2 + 8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::findKey  (binary VA: 0x1a73ab0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findKey
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_unsigned_l_56398e::findKey(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  int v2;
  unsigned int result;
  int v4;

  v2 = *((uint32_t *)self + 2);
  result = v2 & (-1640531535 * (a2 >> 4));
  v4 = *(uint32_t *)(*(uint32_t *)self + 8 * result);
  if ( v4 == -1 )
    return v2 + 1;
  while ( a2 != v4 )
  {
    result = v2 & (result + 1);
    v4 = *(uint32_t *)(*(uint32_t *)self + 8 * result);
    if ( v4 == -1 )
      return v2 + 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::findKeyWithValue  (binary VA: 0x1a73b00)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findKeyWithValue
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_unsigned_l_56398e::findKeyWithValue(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2, unsigned int a3)
{
  int v3;
  unsigned int result;
  int *v5;
  int v6;

  v3 = *((uint32_t *)self + 2);
  result = v3 & (-1640531535 * (a2 >> 4));
  v5 = (int *)(*(uint32_t *)self + 8 * result);
  v6 = *v5;
  if ( *v5 == -1 )
    return v3 + 1;
  while ( a2 != v6 || v5[1] != a3 )
  {
    result = v3 & (result + 1);
    v5 = (int *)(*(uint32_t *)self + 8 * result);
    v6 = *v5;
    if ( *v5 == -1 )
      return v3 + 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::hasKey  (binary VA: 0x1a73b60)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::hasKey
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_56398e::hasKey(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *a2, unsigned int a3)
{
  unsigned int Key;
  bool v4;
  bool v5;
  bool v6;

  Key = hkMultiMap_unsigned_long_unsigned_l_56398e::findKey(
          a2,
          a3);
  v6 = __OFSUB__(Key, *((uint32_t *)a2 + 2));
  v4 = Key == *((uint32_t *)a2 + 2);
  v5 = (int)(Key - *((uint32_t *)a2 + 2)) < 0;
  *(uint8_t *)self = v5 ^ v6 | v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::getWithDefault  (binary VA: 0x1a73ba0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getWithDefault
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_unsigned_l_56398e::getWithDefault(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2, unsigned int a3)
{
  int v3;
  unsigned int v4;
  int *v5;
  int v6;

  v3 = *((uint32_t *)self + 2);
  v4 = v3 & (-1640531535 * (a2 >> 4));
  v5 = (int *)(*(uint32_t *)self + 8 * v4);
  v6 = *v5;
  if ( *v5 == -1 )
    return a3;
  while ( a2 != v6 )
  {
    v4 = v3 & (v4 + 1);
    v5 = (int *)(*(uint32_t *)self + 8 * v4);
    v6 = *v5;
    if ( *v5 == -1 )
      return a3;
  }
  return v5[1];
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::get  (binary VA: 0x1a73c00)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::get
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_56398e::get(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *a2, unsigned int *a3, uint32_t *a4)
{
  signed int Key;
  int v5;

  Key = hkMultiMap_unsigned_long_unsigned_l_56398e::findKey(
          a2,
          (unsigned int)(uintptr_t)(a3));
  v5 = 1;
  if ( Key <= *((uint32_t *)a2 + 2) )
  {
    *a4 = *(uint32_t *)(*(uint32_t *)a2 + 8 * Key + 4);
    v5 = 0;
  }
  *(uint32_t *)self = v5;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::remove  (binary VA: 0x1a73c50)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::remove
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_unsigned_l_56398e::remove(int64_t a1)
{
  unsigned int result;
  unsigned int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  void *retaddr;

  result = *(uint32_t *)((char *)&a1 + 3);
  v2 = *(uint32_t *)((char *)&a1 + 3);
  v3 = **(uint32_t **)((char *)&retaddr + 3);
  --(*(uint32_t **)((char *)&retaddr + 3))[1];
  *(uint32_t *)(v3 + 8 * *(uint32_t *)((char *)&a1 + 3)) = -1;
  v4 = (*(uint32_t **)((char *)&retaddr + 3))[2];
  v5 = **(uint32_t **)((char *)&retaddr + 3);
  v6 = v4 & (v4 + *(uint32_t *)((char *)&a1 + 3));
  if ( *(uint32_t *)(**(uint32_t **)((char *)&retaddr + 3) + 8 * v6) != -1 )
  {
    do
      v6 = v4 & (v4 + v6);
    while ( *(uint32_t *)(v5 + 8 * v6) != -1 );
  }
  v9 = v4 & (v6 + 1);
  while ( 1 )
  {
    result = v4 & (result + 1);
    v7 = *(uint32_t *)(v5 + 8 * result);
    if ( v7 == -1 )
      break;
    v8 = v4 & (-1640531535 * (v7 >> 4));
    if ( (v2 >= v8 || result < v9) && (result >= v2 || result < v8 && v2 >= v8) && (v9 <= v8 || v2 >= v8) )
    {
      *(uint32_t *)(v5 + 8 * v2) = v7;
      *(uint32_t *)(**(uint32_t **)((char *)&retaddr + 3) + 8 * v2 + 4) = *(uint32_t *)(**(uint32_t **)((char *)&retaddr + 3)
                                                                                + 8 * result
                                                                                + 4);
      v2 = result;
      *(uint32_t *)(**(uint32_t **)((char *)&retaddr + 3) + 8 * result) = -1;
      v4 = (*(uint32_t **)((char *)&retaddr + 3))[2];
      v5 = **(uint32_t **)((char *)&retaddr + 3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::removeAll  (binary VA: 0x1a73d30)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::removeAll
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::removeAll(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  unsigned int v2;
  int v3;
  int i;
  int v5;
  int v7;

  v7 = 0;
  v2 = *((uint32_t *)self + 2) & (-1640531535 * (a2 >> 4));
  v3 = *(uint32_t *)self;
  for ( i = v2; ; i = v2 )
  {
    v5 = *(uint32_t *)(v3 + 8 * i);
    if ( v5 == -1 )
      break;
    while ( a2 != v5 )
    {
      i = *((uint32_t *)self + 2) & (i + 1);
      v5 = *(uint32_t *)(v3 + 8 * i);
      if ( v5 == -1 )
        return v7;
    }
    hkMultiMap_unsigned_long_unsigned_l_56398e::remove(__SPAIR64__(i, (unsigned int)(uintptr_t)(self)));
    ++v7;
    v3 = *(uint32_t *)self;
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::remove  (binary VA: 0x1a73db0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::remove
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_56398e::remove(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *a2, unsigned int a3)
{
  signed int Key;

  Key = hkMultiMap_unsigned_long_unsigned_l_56398e::findKey(
          a2,
          a3);
  if ( Key <= *((uint32_t *)a2 + 2) )
  {
    hkMultiMap_unsigned_long_unsigned_l_56398e::remove(__SPAIR64__(Key, (unsigned int)(uintptr_t)(a2)));
    *(uint32_t *)self = 0;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::remove  (binary VA: 0x1a73e20)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::remove
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_56398e::remove(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *a2, unsigned int a3, unsigned int a4)
{
  signed int KeyWithValue;

  KeyWithValue = hkMultiMap_unsigned_long_unsigned_l_56398e::findKeyWithValue(
                   a2,
                   a3,
                   a4);
  if ( KeyWithValue <= *((uint32_t *)a2 + 2) )
  {
    hkMultiMap_unsigned_long_unsigned_l_56398e::remove(__SPAIR64__(KeyWithValue, (unsigned int)(uintptr_t)(a2)));
    *(uint32_t *)self = 0;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::getSize  (binary VA: 0x1a73e90)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getSize
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::getSize(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self)
{
  return *((uint32_t *)self + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::getCapacity  (binary VA: 0x1a73ea0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getCapacity
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::getCapacity(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self)
{
  return (*((uint32_t *)self + 2) + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::getMemSize  (binary VA: 0x1a73eb0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getMemSize
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::getMemSize(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self)
{
  return 8 * *((uint32_t *)self + 2) + 8;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::getMemStart  (binary VA: 0x1a73ed0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getMemStart
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::getMemStart(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::isOk  (binary VA: 0x1a73ee0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::isOk
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_56398e::isOk(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int **a2)
{
  int v2;
  unsigned int *v3;
  unsigned int *v4;
  unsigned int v5;
  int i;

  v2 = (int)(uintptr_t)(a2[2]);
  if ( v2 >= 0 )
  {
    v3 = *a2;
    v4 = *a2;
    do
    {
      v5 = *v4;
      if ( *v4 != -1 )
      {
        for ( i = v2 & (-1640531535 * (v5 >> 4)); v5 != v3[2 * i]; i = v2 & (i + 1) )
          ;
      }
      v4 += 2;
    }
    while ( v4 != &(*a2)[2 * v2 + 2] );
  }
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::clear  (binary VA: 0x1a73f40)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::clear
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::clear(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self)
{
  int result;
  int v2;

  result = 0;
  v2 = *((uint32_t *)self + 2) + 1;
  if ( *((int *)self + 2) >= 0 )
  {
    do
      *(uint32_t *)(*(uint32_t *)self + 8 * result++) = -1;
    while ( result != v2 );
  }
  *((uint32_t *)self + 1) &= 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::Construct  (binary VA: 0x1a73f80)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMultiMap
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_unsigned_l_56398e::Construct(hkMultiMap_Raw *self)
{
  int v1;

  v1 = (*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
         (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
         128);
  *(uint32_t *)self = v1;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 15;
  if ( v1 != 0 )
    hkMultiMap_unsigned_long_unsigned_l_56398e::clear((hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *)(self));
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::Construct  (binary VA: 0x1a73fd0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::hkMultiMap
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_unsigned_l_56398e::Construct(hkMultiMap_Raw *self, int a2)
{
  int v2;
  int v3;
  int v4;

  *((uint32_t *)self + 1) = 0;
  if ( 3 * a2 <= 4 )
  {
    v3 = 3;
    v4 = 32;
  }
  else
  {
    v2 = 4;
    do
      v2 *= 2;
    while ( 3 * a2 > v2 );
    v3 = v2 - 1;
    v4 = 8 * v2;
  }
  *(uint32_t *)self = (*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      v4);
  *((uint32_t *)self + 2) = v3;
  hkMultiMap_unsigned_long_unsigned_l_56398e::clear((hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *)(self));
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::swap  (binary VA: 0x1a74060)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::swap
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_56398e::swap(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *a2)
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
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::wasReallocated  (binary VA: 0x1a74090)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::wasReallocated
// ----------------------------------------------------------------------------
int64_t hkMultiMap_unsigned_long_unsigned_l_56398e::wasReallocated(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, int a2)
{
  int64_t result; // rax

  LODWORD(result) = (uint32_t)(uintptr_t)(self);
  HIDWORD(result) = *(uint32_t *)(a2 + 4) >= 0;
  *(uint8_t *)self = BYTE4(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::getSizeInBytesFor  (binary VA: 0x1a740b0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::getSizeInBytesFor
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::getSizeInBytesFor(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self)
{
  int i;

  if ( (int)(uintptr_t)(self) <= 4 )
    return 64;
  for ( i = 4; i < (int)(uintptr_t)(self); i *= 2 )
    ;
  return 16 * i;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::resizeTable  (binary VA: 0x1a740d0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::resizeTable
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_56398e::resizeTable(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *a2, int a3)
{
  int v3;
  int v4;
  unsigned int *v5;
  int i;
  int v8;
  unsigned int *v9;
  int v10;

  v10 = *((uint32_t *)a2 + 1);
  v8 = *((uint32_t *)a2 + 2) + 1;
  v9 = *(unsigned int **)a2;
  v3 = (*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
         (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
         8 * a3);
  if ( v3 != 0 )
  {
    v4 = 0;
    *(uint32_t *)a2 = v3;
    if ( a3 > 0 )
    {
      while ( 1 )
      {
        *(uint32_t *)(v3 + 8 * v4++) = -1;
        if ( v4 == a3 )
          break;
        v3 = *(uint32_t *)a2;
      }
    }
    *((uint32_t *)a2 + 2) = a3 - 1;
    *((uint32_t *)a2 + 1) = 0;
    v5 = v9;
    if ( v8 > 0 )
    {
      for ( i = 0; i != v8; ++i )
      {
        if ( *v5 != -1 )
          hkMultiMap_unsigned_long_unsigned_l_56398e::insert(
            a2,
            *v5,
            v5[1]);
        v5 += 2;
      }
    }
    if ( v10 >= 0 )
      (*(void (**)(uint32_t *, unsigned int *, int))(hkContainerHeapAllocator::s_alloc + 12))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v9,
        8 * v8);
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
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::insert  (binary VA: 0x1a741f0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::insert
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_56398e::insert(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2, unsigned int a3)
{
  hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *v3;
  int v4;
  int v5;
  unsigned int i;
  int v7;
  uint32_t *v8;
  int result;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[28];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);

  v3 = self;
  v10 = *((uint32_t *)self + 1);
  v4 = *((uint32_t *)self + 2);
  if ( 2 * v10 > v4 )
  {
    hkMultiMap_unsigned_long_unsigned_l_56398e::resizeTable(
      (hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *)v11,
      self,
      2 * v4 + 2);
    v3 = self;
    v4 = *((uint32_t *)self + 2);
    v10 = *((uint32_t *)self + 1);
  }
  v5 = *(uint32_t *)v3;
  for ( i = v4 & (-1640531535 * (a2 >> 4)); ; i = v4 & (i + 1) )
  {
    v7 = 8 * i;
    v8 = (uint32_t *)(v5 + 8 * i);
    if ( *v8 == -1 )
      break;
  }
  *((uint32_t *)self + 1) = v10 + 1;
  *v8 = a2;
  result = *(uint32_t *)self;
  *(uint32_t *)(*(uint32_t *)self + v7 + 4) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::tryInsert  (binary VA: 0x1a742a0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::tryInsert
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_56398e::tryInsert(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, uint32_t *a2, unsigned int a3, int a4)
{
  int v4;
  int i;
  unsigned int *v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *_g4_t_v12;
  typedef uint32_t _g4_t_v13[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v12)) > _g4_s4 ? (16u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v13)) > _g4_s5 ? (20u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);

  v13[3] = (uint32_t)(uintptr_t)(&self);
  v12 = self;
  v10 = a3;
  v11 = a2;
  v8 = a4;
  v4 = a2[2];
  v9 = a2[1];
  if ( 2 * v9 > v4 )
  {
    hkMultiMap_unsigned_long_unsigned_l_56398e::resizeTable(
      (hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *)v13,
      (hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *)a2,
      2 * v4 + 2);
    if ( v13[0] != 0 )
    {
      *(uint32_t *)v12 = 1;
      return v12;
    }
    v4 = v11[2];
    v9 = v11[1];
  }
  for ( i = v4 & (-1640531535 * (v10 >> 4)); ; i = v4 & (i + 1) )
  {
    v6 = (unsigned int *)(*v11 + 8 * i);
    if ( *v6 == -1 )
      break;
  }
  v11[1] = v9 + 1;
  *v6 = v10;
  *(uint32_t *)(*v11 + 8 * i + 4) = v8;
  *(uint32_t *)v12 = 0;
  return v12;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::reserve  (binary VA: 0x1a743a0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::reserve
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_56398e::reserve(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, int a2)
{
  int i;
  uint8_t v4[8];

  for ( i = 4; 3 * a2 > i; i *= 2 )
    ;
  return hkMultiMap_unsigned_long_unsigned_l_56398e::resizeTable(
           (hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *)v4,
           self,
           i);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::findOrInsertKey  (binary VA: 0x1a74400)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::findOrInsertKey
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_unsigned_l_56398e::findOrInsertKey(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self, unsigned int a2, unsigned int a3)
{
  int v3;
  unsigned int result;
  uint32_t *v5;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[28];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);

  v3 = *((uint32_t *)self + 2);
  v6 = v3;
  if ( 2 * *((uint32_t *)self + 1) + 1 >= v3 )
  {
    hkMultiMap_unsigned_long_unsigned_l_56398e::resizeTable(
      (hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *)v7,
      self,
      v3 + v3 + 2);
    v6 = *((uint32_t *)self + 2);
  }
  for ( result = v6 & (-1640531535 * (a2 >> 4)); ; result = v6 & (result + 1) )
  {
    v5 = (uint32_t *)(*(uint32_t *)self + 8 * result);
    if ( a2 == *v5 )
      break;
    if ( *v5 == -1 )
    {
      *v5 = a2;
      *(uint32_t *)(*(uint32_t *)self + 8 * result + 4) = a3;
      ++*((uint32_t *)self + 1);
      return result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_56398e::isPower2  (binary VA: 0x1a744c0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapOperations<unsigned long>,hkContainerHeapAllocator>::isPower2
// ----------------------------------------------------------------------------
bool hkMultiMap_unsigned_long_unsigned_l_56398e::isPower2(hkMultiMap<unsigned long, unsigned long, hkMultiMapOperations<unsigned long>, hkContainerHeapAllocator::Self> *self)
{
  return ((unsigned int)(uintptr_t)(self) & ((unsigned int)(uintptr_t)(self) - 1)) == 0;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::opNew  (binary VA: 0x1a744d0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::opNew()
{
  uint32_t *address;

  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(*(uint32_t *)(*address + 44), 12);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::opDelete  (binary VA: 0x1a74510)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_unsigned_l_bb0ce2::opDelete(void *a1)
{
  uint32_t *address;

  if ( a1 != nullptr )
  {
    address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*address + 44) + 12))(*(uint32_t *)(*address + 44), a1, 12);
  }
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::opNew  (binary VA: 0x1a74560)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::opNew(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::opNewArray  (binary VA: 0x1a74570)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::opNewArray(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::opDelete  (binary VA: 0x1a74580)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_unsigned_l_bb0ce2::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::opDeleteArray  (binary VA: 0x1a74590)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::operator delete[]
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_unsigned_l_bb0ce2::opDeleteArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::Construct  (binary VA: 0x1a745a0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::hkMultiMap
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_unsigned_l_bb0ce2::Construct(hkMultiMap_Raw *self, uint32_t *a2, unsigned int a3)
{
  uint32_t *v3;
  int v4;

  v3 = a2;
  *((uint32_t *)self + 2) = (a3 >> 3) - 1;
  v4 = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = 0x80000000;
  if ( a3 >> 3 != 0 )
  {
    while ( 1 )
    {
      v3[2 * v4++] = -1;
      if ( a3 >> 3 == v4 )
        break;
      v3 = *(uint32_t **)self;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::Destroy  (binary VA: 0x1a745f0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::~hkMultiMap
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_unsigned_l_bb0ce2::Destroy(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self)
{
  if ( *((int *)self + 1) >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *(uint32_t *)self,
      8 * *((uint32_t *)self + 2) + 8);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::findNumEntries  (binary VA: 0x1a74640)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findNumEntries
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::findNumEntries(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  int v2;
  unsigned int v3;
  int result;
  int i;

  v2 = *((uint32_t *)self + 2);
  v3 = v2 & (-1640531535 * a2);
  result = 0;
  for ( i = *(uint32_t *)(*(uint32_t *)self + 8 * v3); i != -1; i = *(uint32_t *)(*(uint32_t *)self + 8 * v3) )
  {
    if ( a2 == i )
      ++result;
    v3 = v2 & (v3 + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::findNumEntries  (binary VA: 0x1a74690)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findNumEntries
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::findNumEntries(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, unsigned int a2, unsigned int a3)
{
  int v3;
  unsigned int v4;
  int v5;
  int result;
  int *v7;
  int i;

  v3 = *((uint32_t *)self + 2);
  v4 = v3 & (-1640531535 * a2);
  v5 = *(uint32_t *)self;
  result = 0;
  v7 = (int *)(*(uint32_t *)self + 8 * v4);
  for ( i = *v7; *v7 != -1; i = *v7 )
  {
    while ( a2 != i )
    {
      v4 = v3 & (v4 + 1);
      v7 = (int *)(v5 + 8 * v4);
      i = *v7;
      if ( *v7 == -1 )
        return result;
    }
    v4 = v3 & (v4 + 1);
    result += v7[1] == a3;
    v7 = (int *)(v5 + 8 * v4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getIterator  (binary VA: 0x1a746f0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getIterator
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getIterator(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 2);
  if ( v1 < 0 )
    return 0;
  result = 0;
  if ( **(uint32_t **)self == -1 )
  {
    do
      ++result;
    while ( result <= v1 && *(uint32_t *)(*(uint32_t *)self + 8 * result) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getKey  (binary VA: 0x1a74730)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getKey
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getKey(uint32_t *a1, int a2)
{
  return *(uint32_t *)(*a1 + 8 * a2);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getValue  (binary VA: 0x1a74740)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getValue
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getValue(uint32_t *a1, int a2)
{
  return *(uint32_t *)(*a1 + 8 * a2 + 4);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::setValue  (binary VA: 0x1a74750)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::setValue
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::setValue(int *a1, int a2, int a3)
{
  int result;

  result = *a1;
  *(uint32_t *)(*a1 + 8 * a2 + 4) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getNext  (binary VA: 0x1a74770)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getNext
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getNext(uint32_t *a1, int a2)
{
  int result;
  int v3;

  result = a2 + 1;
  v3 = a1[2];
  if ( a2 + 1 <= v3 && *(uint32_t *)(*a1 + 8 * result) == -1 )
  {
    do
      ++result;
    while ( result <= v3 && *(uint32_t *)(*a1 + 8 * result) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getNext  (binary VA: 0x1a747b0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getNext
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getNext(uint32_t *a1, int a2, int a3)
{
  int result;
  int v4;
  int v5;

  result = a2 + 1;
  v4 = a1[2];
  while ( 1 )
  {
    while ( result > v4 )
      result = 0;
    v5 = *(uint32_t *)(*a1 + 8 * result);
    if ( v5 == -1 )
      break;
    if ( v5 == a3 )
      return result;
    ++result;
  }
  return v4 + 1;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::isValid  (binary VA: 0x1a747f0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::isValid
// ----------------------------------------------------------------------------
bool * hkMultiMap_unsigned_long_unsigned_l_bb0ce2::isValid(bool *a1, int a2, int a3)
{
  *a1 = a3 <= *(uint32_t *)(a2 + 8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::findKey  (binary VA: 0x1a74810)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findKey
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::findKey(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  int v2;
  unsigned int result;
  int v4;

  v2 = *((uint32_t *)self + 2);
  result = v2 & (-1640531535 * a2);
  v4 = *(uint32_t *)(*(uint32_t *)self + 8 * result);
  if ( v4 == -1 )
    return v2 + 1;
  while ( a2 != v4 )
  {
    result = v2 & (result + 1);
    v4 = *(uint32_t *)(*(uint32_t *)self + 8 * result);
    if ( v4 == -1 )
      return v2 + 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::findKeyWithValue  (binary VA: 0x1a74860)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findKeyWithValue
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::findKeyWithValue(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, unsigned int a2, unsigned int a3)
{
  int v3;
  unsigned int result;
  int *v5;
  int v6;

  v3 = *((uint32_t *)self + 2);
  result = v3 & (-1640531535 * a2);
  v5 = (int *)(*(uint32_t *)self + 8 * result);
  v6 = *v5;
  if ( *v5 == -1 )
    return v3 + 1;
  while ( a2 != v6 || v5[1] != a3 )
  {
    result = v3 & (result + 1);
    v5 = (int *)(*(uint32_t *)self + 8 * result);
    v6 = *v5;
    if ( *v5 == -1 )
      return v3 + 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::hasKey  (binary VA: 0x1a748c0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::hasKey
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_bb0ce2::hasKey(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *a2, unsigned int a3)
{
  unsigned int Key;
  bool v4;
  bool v5;
  bool v6;

  Key = hkMultiMap_unsigned_long_unsigned_l_bb0ce2::findKey(a2, a3);
  v6 = __OFSUB__(Key, *((uint32_t *)a2 + 2));
  v4 = Key == *((uint32_t *)a2 + 2);
  v5 = (int)(Key - *((uint32_t *)a2 + 2)) < 0;
  *(uint8_t *)self = v5 ^ v6 | v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getWithDefault  (binary VA: 0x1a74900)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getWithDefault
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getWithDefault(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, unsigned int a2, unsigned int a3)
{
  int v3;
  unsigned int v4;
  int *v5;
  int v6;

  v3 = *((uint32_t *)self + 2);
  v4 = v3 & (-1640531535 * a2);
  v5 = (int *)(*(uint32_t *)self + 8 * v4);
  v6 = *v5;
  if ( *v5 == -1 )
    return a3;
  while ( a2 != v6 )
  {
    v4 = v3 & (v4 + 1);
    v5 = (int *)(*(uint32_t *)self + 8 * v4);
    v6 = *v5;
    if ( *v5 == -1 )
      return a3;
  }
  return v5[1];
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::get  (binary VA: 0x1a74950)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::get
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_bb0ce2::get(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *a2, unsigned int *a3, uint32_t *a4)
{
  signed int Key;
  int v5;

  Key = hkMultiMap_unsigned_long_unsigned_l_bb0ce2::findKey(
          a2,
          (unsigned int)(uintptr_t)(a3));
  v5 = 1;
  if ( Key <= *((uint32_t *)a2 + 2) )
  {
    *a4 = *(uint32_t *)(*(uint32_t *)a2 + 8 * Key + 4);
    v5 = 0;
  }
  *(uint32_t *)self = v5;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::remove  (binary VA: 0x1a749a0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::remove
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::remove(int64_t a1)
{
  unsigned int result;
  unsigned int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  void *retaddr;

  result = *(uint32_t *)((char *)&a1 + 3);
  v2 = *(uint32_t *)((char *)&a1 + 3);
  v3 = **(uint32_t **)((char *)&retaddr + 3);
  --(*(uint32_t **)((char *)&retaddr + 3))[1];
  *(uint32_t *)(v3 + 8 * *(uint32_t *)((char *)&a1 + 3)) = -1;
  v4 = (*(uint32_t **)((char *)&retaddr + 3))[2];
  v5 = **(uint32_t **)((char *)&retaddr + 3);
  v6 = v4 & (v4 + *(uint32_t *)((char *)&a1 + 3));
  if ( *(uint32_t *)(**(uint32_t **)((char *)&retaddr + 3) + 8 * v6) != -1 )
  {
    do
      v6 = v4 & (v4 + v6);
    while ( *(uint32_t *)(v5 + 8 * v6) != -1 );
  }
  v9 = v4 & (v6 + 1);
  while ( 1 )
  {
    result = v4 & (result + 1);
    v7 = *(uint32_t *)(v5 + 8 * result);
    if ( v7 == -1 )
      break;
    v8 = v4 & (-1640531535 * v7);
    if ( (v2 >= v8 || result < v9) && (result >= v2 || result < v8 && v2 >= v8) && (v9 <= v8 || v2 >= v8) )
    {
      *(uint32_t *)(v5 + 8 * v2) = v7;
      *(uint32_t *)(**(uint32_t **)((char *)&retaddr + 3) + 8 * v2 + 4) = *(uint32_t *)(**(uint32_t **)((char *)&retaddr + 3)
                                                                                + 8 * result
                                                                                + 4);
      v2 = result;
      *(uint32_t *)(**(uint32_t **)((char *)&retaddr + 3) + 8 * result) = -1;
      v4 = (*(uint32_t **)((char *)&retaddr + 3))[2];
      v5 = **(uint32_t **)((char *)&retaddr + 3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::removeAll  (binary VA: 0x1a74a70)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::removeAll
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::removeAll(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  unsigned int v2;
  int v3;
  int v4;
  int v5;
  int i;

  v2 = *((uint32_t *)self + 2) & (-1640531535 * a2);
  v3 = *(uint32_t *)self;
  v4 = v2;
  for ( i = 0; ; ++i )
  {
    v5 = *(uint32_t *)(v3 + 8 * v4);
    if ( v5 == -1 )
      break;
    while ( a2 != v5 )
    {
      v4 = *((uint32_t *)self + 2) & (v4 + 1);
      v5 = *(uint32_t *)(v3 + 8 * v4);
      if ( v5 == -1 )
        return i;
    }
    hkMultiMap_unsigned_long_unsigned_l_bb0ce2::remove(__SPAIR64__(v4, (unsigned int)(uintptr_t)(self)));
    v3 = *(uint32_t *)self;
    v4 = v2;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::remove  (binary VA: 0x1a74ae0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::remove
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_bb0ce2::remove(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *a2, unsigned int a3)
{
  signed int Key;

  Key = hkMultiMap_unsigned_long_unsigned_l_bb0ce2::findKey(a2, a3);
  if ( Key <= *((uint32_t *)a2 + 2) )
  {
    hkMultiMap_unsigned_long_unsigned_l_bb0ce2::remove(__SPAIR64__(Key, (unsigned int)(uintptr_t)(a2)));
    *(uint32_t *)self = 0;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::remove  (binary VA: 0x1a74b50)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::remove
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_bb0ce2::remove(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *a2, unsigned int a3, unsigned int a4)
{
  signed int KeyWithValue;

  KeyWithValue = hkMultiMap_unsigned_long_unsigned_l_bb0ce2::findKeyWithValue(
                   a2,
                   a3,
                   a4);
  if ( KeyWithValue <= *((uint32_t *)a2 + 2) )
  {
    hkMultiMap_unsigned_long_unsigned_l_bb0ce2::remove(__SPAIR64__(KeyWithValue, (unsigned int)(uintptr_t)(a2)));
    *(uint32_t *)self = 0;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getSize  (binary VA: 0x1a74bc0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getSize
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getSize(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self)
{
  return *((uint32_t *)self + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getCapacity  (binary VA: 0x1a74bd0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getCapacity
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getCapacity(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self)
{
  return (*((uint32_t *)self + 2) + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getMemSize  (binary VA: 0x1a74be0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getMemSize
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getMemSize(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self)
{
  return 8 * *((uint32_t *)self + 2) + 8;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getMemStart  (binary VA: 0x1a74c00)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getMemStart
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getMemStart(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::isOk  (binary VA: 0x1a74c10)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::isOk
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_bb0ce2::isOk(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, int **a2)
{
  int v2;
  int *v3;
  int *v4;
  int v5;
  int i;

  v2 = (int)(uintptr_t)(a2[2]);
  if ( v2 >= 0 )
  {
    v3 = *a2;
    v4 = *a2;
    do
    {
      v5 = *v4;
      if ( *v4 != -1 )
      {
        for ( i = v2 & (-1640531535 * v5); v5 != v3[2 * i]; i = v2 & (i + 1) )
          ;
      }
      v4 += 2;
    }
    while ( v4 != &(*a2)[2 * v2 + 2] );
  }
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::clear  (binary VA: 0x1a74c70)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::clear
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::clear(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self)
{
  int result;
  int v2;

  result = 0;
  v2 = *((uint32_t *)self + 2) + 1;
  if ( *((int *)self + 2) >= 0 )
  {
    do
      *(uint32_t *)(*(uint32_t *)self + 8 * result++) = -1;
    while ( result != v2 );
  }
  *((uint32_t *)self + 1) &= 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::Construct  (binary VA: 0x1a74cb0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::hkMultiMap
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_unsigned_l_bb0ce2::Construct(hkMultiMap_Raw *self)
{
  int v1;

  v1 = (*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
         (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
         128);
  *(uint32_t *)self = v1;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 15;
  if ( v1 != 0 )
    hkMultiMap_unsigned_long_unsigned_l_bb0ce2::clear((hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *)(self));
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::Construct  (binary VA: 0x1a74d00)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::hkMultiMap
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_unsigned_l_bb0ce2::Construct(hkMultiMap_Raw *self, int a2)
{
  int v2;
  int v3;
  int v4;

  *((uint32_t *)self + 1) = 0;
  if ( 3 * a2 <= 4 )
  {
    v3 = 3;
    v4 = 32;
  }
  else
  {
    v2 = 4;
    do
      v2 *= 2;
    while ( 3 * a2 > v2 );
    v3 = v2 - 1;
    v4 = 8 * v2;
  }
  *(uint32_t *)self = (*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      v4);
  *((uint32_t *)self + 2) = v3;
  hkMultiMap_unsigned_long_unsigned_l_bb0ce2::clear((hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *)(self));
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::swap  (binary VA: 0x1a74d90)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::swap
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_bb0ce2::swap(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *a2)
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
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::wasReallocated  (binary VA: 0x1a74dc0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::wasReallocated
// ----------------------------------------------------------------------------
int64_t hkMultiMap_unsigned_long_unsigned_l_bb0ce2::wasReallocated(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, int a2)
{
  int64_t result; // rax

  LODWORD(result) = (uint32_t)(uintptr_t)(self);
  HIDWORD(result) = *(uint32_t *)(a2 + 4) >= 0;
  *(uint8_t *)self = BYTE4(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getSizeInBytesFor  (binary VA: 0x1a74de0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::getSizeInBytesFor
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::getSizeInBytesFor(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self)
{
  int i;

  if ( (int)(uintptr_t)(self) <= 4 )
    return 64;
  for ( i = 4; i < (int)(uintptr_t)(self); i *= 2 )
    ;
  return 16 * i;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::resizeTable  (binary VA: 0x1a74e00)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::resizeTable
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_bb0ce2::resizeTable(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *a2, int a3)
{
  int v3;
  int v4;
  unsigned int *v5;
  int i;
  int v8;
  unsigned int *v9;
  int v10;

  v10 = *((uint32_t *)a2 + 1);
  v8 = *((uint32_t *)a2 + 2) + 1;
  v9 = *(unsigned int **)a2;
  v3 = (*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
         (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
         8 * a3);
  if ( v3 != 0 )
  {
    v4 = 0;
    *(uint32_t *)a2 = v3;
    if ( a3 > 0 )
    {
      while ( 1 )
      {
        *(uint32_t *)(v3 + 8 * v4++) = -1;
        if ( v4 == a3 )
          break;
        v3 = *(uint32_t *)a2;
      }
    }
    *((uint32_t *)a2 + 2) = a3 - 1;
    *((uint32_t *)a2 + 1) = 0;
    v5 = v9;
    if ( v8 > 0 )
    {
      for ( i = 0; i != v8; ++i )
      {
        if ( *v5 != -1 )
          hkMultiMap_unsigned_long_unsigned_l_bb0ce2::insert(
            a2,
            *v5,
            v5[1]);
        v5 += 2;
      }
    }
    if ( v10 >= 0 )
      (*(void (**)(uint32_t *, unsigned int *, int))(hkContainerHeapAllocator::s_alloc + 12))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v9,
        8 * v8);
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
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::insert  (binary VA: 0x1a74f20)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::insert
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::insert(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, unsigned int a2, unsigned int a3)
{
  hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *v3;
  int v4;
  int v5;
  unsigned int i;
  int v7;
  uint32_t *v8;
  int result;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[28];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);

  v3 = self;
  v10 = *((uint32_t *)self + 1);
  v4 = *((uint32_t *)self + 2);
  if ( 2 * v10 > v4 )
  {
    hkMultiMap_unsigned_long_unsigned_l_bb0ce2::resizeTable(
      (hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *)v11,
      self,
      2 * v4 + 2);
    v3 = self;
    v4 = *((uint32_t *)self + 2);
    v10 = *((uint32_t *)self + 1);
  }
  v5 = *(uint32_t *)v3;
  for ( i = v4 & (-1640531535 * a2); ; i = v4 & (i + 1) )
  {
    v7 = 8 * i;
    v8 = (uint32_t *)(v5 + 8 * i);
    if ( *v8 == -1 )
      break;
  }
  *((uint32_t *)self + 1) = v10 + 1;
  *v8 = a2;
  result = *(uint32_t *)self;
  *(uint32_t *)(*(uint32_t *)self + v7 + 4) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::tryInsert  (binary VA: 0x1a74fc0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::tryInsert
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_bb0ce2::tryInsert(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, uint32_t *a2, unsigned int a3, int a4)
{
  int v4;
  int i;
  unsigned int *v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *_g4_t_v12;
  typedef uint32_t _g4_t_v13[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v12)) > _g4_s4 ? (16u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v13)) > _g4_s5 ? (20u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);

  v13[3] = (uint32_t)(uintptr_t)(&self);
  v12 = self;
  v10 = a3;
  v11 = a2;
  v8 = a4;
  v4 = a2[2];
  v9 = a2[1];
  if ( 2 * v9 > v4 )
  {
    hkMultiMap_unsigned_long_unsigned_l_bb0ce2::resizeTable(
      (hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *)v13,
      (hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *)a2,
      2 * v4 + 2);
    if ( v13[0] != 0 )
    {
      *(uint32_t *)v12 = 1;
      return v12;
    }
    v4 = v11[2];
    v9 = v11[1];
  }
  for ( i = v4 & (-1640531535 * v10); ; i = v4 & (i + 1) )
  {
    v6 = (unsigned int *)(*v11 + 8 * i);
    if ( *v6 == -1 )
      break;
  }
  v11[1] = v9 + 1;
  *v6 = v10;
  *(uint32_t *)(*v11 + 8 * i + 4) = v8;
  *(uint32_t *)v12 = 0;
  return v12;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::findOrInsertKey  (binary VA: 0x1a750b0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::findOrInsertKey
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_unsigned_l_bb0ce2::findOrInsertKey(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, unsigned int a2, unsigned int a3)
{
  int v3;
  unsigned int result;
  uint32_t *v5;
  typedef int _g4_t_v6;
  typedef uint8_t _g4_t_v7[28];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);

  v3 = *((uint32_t *)self + 2);
  v6 = v3;
  if ( 2 * *((uint32_t *)self + 1) + 1 >= v3 )
  {
    hkMultiMap_unsigned_long_unsigned_l_bb0ce2::resizeTable(
      (hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *)v7,
      self,
      v3 + v3 + 2);
    v6 = *((uint32_t *)self + 2);
  }
  for ( result = v6 & (-1640531535 * a2); ; result = v6 & (result + 1) )
  {
    v5 = (uint32_t *)(*(uint32_t *)self + 8 * result);
    if ( a2 == *v5 )
      break;
    if ( *v5 == -1 )
    {
      *v5 = a2;
      *(uint32_t *)(*(uint32_t *)self + 8 * result + 4) = a3;
      ++*((uint32_t *)self + 1);
      return result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::reserve  (binary VA: 0x1a75170)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::reserve
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_unsigned_l_bb0ce2::reserve(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self, int a2)
{
  int i;
  uint8_t v4[8];

  for ( i = 4; 3 * a2 > i; i *= 2 )
    ;
  return hkMultiMap_unsigned_long_unsigned_l_bb0ce2::resizeTable(
           (hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *)v4,
           self,
           i);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_unsigned_l_bb0ce2::isPower2  (binary VA: 0x1a751d0)
// Original: hkMultiMap<unsigned long,unsigned long,hkMultiMapIntegralOperations,hkContainerHeapAllocator>::isPower2
// ----------------------------------------------------------------------------
bool hkMultiMap_unsigned_long_unsigned_l_bb0ce2::isPower2(hkMultiMap<unsigned long, unsigned long, hkMultiMapIntegralOperations, hkContainerHeapAllocator::Self> *self)
{
  return ((unsigned int)(uintptr_t)(self) & ((unsigned int)(uintptr_t)(self) - 1)) == 0;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::opNew  (binary VA: 0x1a751e0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::opNew()
{
  uint32_t *address;

  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(*(uint32_t *)(*address + 44), 12);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::opDelete  (binary VA: 0x1a75220)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_long_unsig_a6ffbc::opDelete(void *a1)
{
  uint32_t *address;

  if ( a1 != nullptr )
  {
    address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    (*(void (**)(uint32_t, void *, int))(**(uint32_t **)(*address + 44) + 12))(*(uint32_t *)(*address + 44), a1, 12);
  }
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::opNew  (binary VA: 0x1a75270)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_long_unsig_a6ffbc::opNew(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::opNewArray  (binary VA: 0x1a75280)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator new[]
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_long_unsig_a6ffbc::opNewArray(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, unsigned int a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::opDelete  (binary VA: 0x1a75290)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_long_unsig_a6ffbc::opDelete()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::opDeleteArray  (binary VA: 0x1a752a0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::operator delete[]
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_long_unsig_a6ffbc::opDeleteArray()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::Construct  (binary VA: 0x1a752b0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMultiMap
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_long_unsig_a6ffbc::Construct(hkMultiMap_Raw *self, char *a2, unsigned int a3)
{
  char *v3;
  int v4;
  int v5;

  v3 = a2;
  *((uint32_t *)self + 2) = (a3 >> 4) - 1;
  v4 = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = 0x80000000;
  if ( a3 >> 4 != 0 )
  {
    while ( 1 )
    {
      v5 = v4++;
      v5 *= 16;
      *(uint32_t *)&v3[v5] = -1;
      *(uint32_t *)&v3[v5 + 4] = -1;
      if ( a3 >> 4 == v4 )
        break;
      v3 = *(char **)self;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::Destroy  (binary VA: 0x1a75300)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::~hkMultiMap
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_long_unsig_a6ffbc::Destroy(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self)
{
  if ( *((int *)self + 1) >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *(uint32_t *)self,
      16 * (*((uint32_t *)self + 2) + 1));
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::findNumEntries  (binary VA: 0x1a75350)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findNumEntries
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::findNumEntries(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2)
{
  unsigned int v2;
  int result;
  int v5;
  int64_t v6; // 0:ecx.4,4:esi.4

  v5 = *((uint32_t *)self + 2);
  v2 = v5 & (-1640531535 * ((unsigned int)a2 >> 4));
  v6 = *(uint64_t *)(16 * v2 + *(uint32_t *)self);
  for ( result = 0; (HIDWORD(v6) & (unsigned int)v6) != 0xFFFFFFFF; v6 = *(uint64_t *)(*(uint32_t *)self + 16 * v2) )
  {
    if ( a2 == v6 )
      ++result;
    v2 = v5 & (v2 + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::findNumEntries  (binary VA: 0x1a753e0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findNumEntries
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::findNumEntries(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2, uint64_t a3)
{
  unsigned int v3;
  int v4;
  int result;
  int64_t v7; // 0:esi.4,4:edi.4

  v3 = *((uint32_t *)self + 2) & (-1640531535 * ((unsigned int)a2 >> 4));
  v4 = 16 * v3 + *(uint32_t *)self;
  v7 = *(uint64_t *)v4;
  for ( result = 0; (*(uint32_t *)(v4 + 4) & *(uint32_t *)v4) != -1; v7 = *(uint64_t *)v4 )
  {
    if ( a2 == v7 )
      result += *(uint64_t *)(v4 + 8) == a3;
    v3 = *((uint32_t *)self + 2) & (v3 + 1);
    v4 = *(uint32_t *)self + 16 * v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::getIterator  (binary VA: 0x1a75490)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getIterator
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::getIterator(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 2);
  if ( v1 < 0 )
    return 0;
  result = 0;
  if ( (*(uint32_t *)(*(uint32_t *)self + 4) & **(uint32_t **)self) == -1 )
  {
    do
      ++result;
    while ( result <= v1
         && (*(uint32_t *)(*(uint32_t *)self + 16 * result + 4) & *(uint32_t *)(*(uint32_t *)self + 16 * result)) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::getKey  (binary VA: 0x1a754e0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getKey
// ----------------------------------------------------------------------------
int64_t hkMultiMap_unsigned_long_long_unsig_a6ffbc::getKey(uint32_t *a1, int a2)
{
  return *(uint64_t *)(*a1 + 16 * a2);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::getValue  (binary VA: 0x1a75500)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getValue
// ----------------------------------------------------------------------------
int64_t hkMultiMap_unsigned_long_long_unsig_a6ffbc::getValue(uint32_t *a1, int a2)
{
  return *(uint64_t *)(*a1 + 16 * a2 + 8);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::setValue  (binary VA: 0x1a75520)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::setValue
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::setValue(uint32_t *a1, int a2, int a3, int a4)
{
  int v4;

  v4 = *a1 + 16 * a2;
  *(uint32_t *)(v4 + 8) = a3;
  *(uint32_t *)(v4 + 12) = a4;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::getNext  (binary VA: 0x1a75540)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getNext
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::getNext(uint32_t *a1, int a2)
{
  int result;
  int v3;
  int v4;

  result = a2 + 1;
  v3 = a1[2];
  if ( a2 + 1 <= v3 && (*(uint32_t *)(16 * result + *a1 + 4) & *(uint32_t *)(16 * result + *a1)) == -1 )
  {
    v4 = *a1 + 16 * (a2 + 2);
    do
    {
      if ( ++result > v3 )
        break;
      v4 += 16;
    }
    while ( (*(uint32_t *)(v4 - 12) & *(uint32_t *)(v4 - 16)) == -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::getNext  (binary VA: 0x1a755a0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getNext
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::getNext(uint32_t *a1, int a2, int64_t a3)
{
  int result;
  int v4;
  int64_t v6; // 0:esi.4,4:ecx.4

  result = a2 + 1;
  v4 = a1[2];
  while ( 1 )
  {
    while ( result > v4 )
      result = 0;
    v6 = *(uint64_t *)(16 * result + *a1);
    if ( (HIDWORD(v6) & (unsigned int)v6) == 0xFFFFFFFF )
      break;
    if ( a3 == v6 )
      return result;
    ++result;
  }
  return v4 + 1;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::isValid  (binary VA: 0x1a75600)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::isValid
// ----------------------------------------------------------------------------
bool * hkMultiMap_unsigned_long_long_unsig_a6ffbc::isValid(bool *a1, int a2, int a3)
{
  *a1 = a3 <= *(uint32_t *)(a2 + 8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::findKey  (binary VA: 0x1a75620)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findKey
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_long_unsig_a6ffbc::findKey(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2)
{
  int v2;
  unsigned int result;
  uint32_t *v4;
  uint32_t *v5;
  uint64_t v7; // 0:edx.4,4:ecx.4

  v2 = *((uint32_t *)self + 2);
  result = v2 & (-1640531535 * ((unsigned int)a2 >> 4));
  v4 = (uint32_t *)(16 * result + *(uint32_t *)self);
  if ( (v4[1] & *v4) == -1 )
    return v2 + 1;
  if ( a2 != *(uint64_t *)v4 )
  {
    while ( 1 )
    {
      result = v2 & (result + 1);
      v5 = (uint32_t *)(*(uint32_t *)self + 16 * result);
      HIDWORD(v7) = *v5;
      LODWORD(v7) = v5[1];
      if ( ((unsigned int)v7 & HIDWORD(v7)) == 0xFFFFFFFF )
        break;
      if ( v7 == __PAIR64__(a2, HIDWORD(a2)) )
        return result;
    }
    return v2 + 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::findKeyWithValue  (binary VA: 0x1a756b0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findKeyWithValue
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_long_unsig_a6ffbc::findKeyWithValue(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2, uint64_t a3)
{
  int v3;
  unsigned int result;
  int i;

  v3 = *((uint32_t *)self + 2);
  result = v3 & (-1640531535 * ((unsigned int)a2 >> 4));
  for ( i = 16 * result + *(uint32_t *)self; (*(uint32_t *)(i + 4) & *(uint32_t *)i) != -1; i = *(uint32_t *)self + 16 * result )
  {
    if ( a2 == *(uint64_t *)i && *(uint64_t *)(i + 8) == a3 )
      return result;
    result = v3 & (result + 1);
  }
  return v3 + 1;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::hasKey  (binary VA: 0x1a75750)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::hasKey
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_long_unsig_a6ffbc::hasKey(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2, unsigned int a3)
{
  unsigned int Key;
  bool v4;
  bool v5;
  bool v6;

  Key = hkMultiMap_unsigned_long_long_unsig_a6ffbc::findKey(
          (hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *)a2,
          __PAIR64__(a3, HIDWORD(a2)));
  v6 = __OFSUB__(Key, *(uint32_t *)(a2 + 8));
  v4 = Key == *(uint32_t *)(a2 + 8);
  v5 = (int)(Key - *(uint32_t *)(a2 + 8)) < 0;
  *(uint8_t *)self = v5 ^ v6 | v4;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::getWithDefault  (binary VA: 0x1a757a0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getWithDefault
// ----------------------------------------------------------------------------
uint64_t hkMultiMap_unsigned_long_long_unsig_a6ffbc::getWithDefault(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2, uint64_t a3)
{
  unsigned int v3;
  int v4;
  int v6;

  v6 = *((uint32_t *)self + 2);
  v3 = v6 & (-1640531535 * ((unsigned int)a2 >> 4));
  v4 = 16 * v3 + *(uint32_t *)self;
  if ( (*(uint32_t *)(v4 + 4) & *(uint32_t *)v4) == -1 )
    return a3;
  if ( *(uint64_t *)v4 != a2 )
  {
    while ( 1 )
    {
      v3 = v6 & (v3 + 1);
      v4 = *(uint32_t *)self + 16 * v3;
      if ( (*(uint32_t *)(v4 + 4) & *(uint32_t *)v4) == -1 )
        break;
      if ( *(uint64_t *)v4 == a2 )
        return *(uint64_t *)(v4 + 8);
    }
    return a3;
  }
  return *(uint64_t *)(v4 + 8);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::get  (binary VA: 0x1a75850)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::get
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_long_unsig_a6ffbc::get(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2, uint64_t *a3, uint32_t *a4)
{
  signed int Key;
  int v5;
  int v6;
  int v7;

  Key = hkMultiMap_unsigned_long_long_unsig_a6ffbc::findKey(
          (hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *)a2,
          __PAIR64__((unsigned int)(uintptr_t)(a3), HIDWORD(a2)));
  v5 = 1;
  if ( Key <= *(uint32_t *)(a2 + 8) )
  {
    v6 = *(uint32_t *)a2 + 16 * Key;
    v7 = *(uint32_t *)(v6 + 12);
    *a4 = *(uint32_t *)(v6 + 8);
    a4[1] = v7;
    v5 = 0;
  }
  *(uint32_t *)self = v5;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::remove  (binary VA: 0x1a758b0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::remove
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_long_unsig_a6ffbc::remove(int *a1, unsigned int a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int i;
  unsigned int result;
  int v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;

  v16 = a2;
  --a1[1];
  v2 = (uint32_t *)(*a1 + 16 * a2);
  *v2 = -1;
  v2[1] = -1;
  v3 = a1[2];
  v4 = *a1;
  for ( i = v3 & (v3 + a2); (*(uint32_t *)(16 * i + v4 + 4) & *(uint32_t *)(16 * i + v4)) != -1; i = v3 & (v3 + i) )
    ;
  v17 = i + 1;
  result = v3 & (a2 + 1);
  v18 = v3 & v17;
  v7 = 16 * result;
  v8 = *(uint32_t *)(v4 + 16 * result);
  if ( (v8 & *(uint32_t *)(v4 + 16 * result + 4)) != 0xFFFFFFFF )
  {
    v15 = a1[2];
    v9 = *(uint32_t *)(v4 + v7 + 4);
    do
    {
      v10 = v15 & (-1640531535 * (v8 >> 4));
      if ( (v16 >= v10 || result < v18) && (result >= v16 || result < v10 && v16 >= v10) && (v18 <= v10 || v16 >= v10) )
      {
        v11 = v16;
        v16 = result;
        v11 *= 16;
        *(uint32_t *)(v4 + v11) = v8;
        *(uint32_t *)(v4 + v11 + 4) = v9;
        v12 = *a1;
        v13 = *(uint32_t *)(*a1 + v7 + 12);
        *(uint32_t *)(v12 + v11 + 8) = *(uint32_t *)(*a1 + v7 + 8);
        *(uint32_t *)(v12 + v11 + 12) = v13;
        v14 = *a1;
        *(uint32_t *)(v14 + v7) = -1;
        *(uint32_t *)(v14 + v7 + 4) = -1;
        v15 = a1[2];
        v4 = *a1;
      }
      result = v15 & (result + 1);
      v7 = 16 * result;
      v8 = *(uint32_t *)(v4 + 16 * result);
      v9 = *(uint32_t *)(v4 + 16 * result + 4);
    }
    while ( (v9 & v8) != 0xFFFFFFFF );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::removeAll  (binary VA: 0x1a759f0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::removeAll
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::removeAll(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2)
{
  int v2;
  unsigned int v3;
  unsigned int v6;
  int v7;
  int64_t v8; // 0:ecx.4,4:edx.4

  v2 = *(uint32_t *)self;
  v7 = 0;
  v6 = *((uint32_t *)self + 2) & (-1640531535 * ((unsigned int)a2 >> 4));
  v3 = v6;
  while ( 1 )
  {
    v8 = *(uint64_t *)(16 * v3 + v2);
    if ( (HIDWORD(v8) & (unsigned int)v8) == 0xFFFFFFFF )
      break;
    if ( a2 == v8 )
    {
      hkMultiMap_unsigned_long_long_unsig_a6ffbc::remove(
        (int *)self,
        v3);
      ++v7;
      v2 = *(uint32_t *)self;
      v3 = v6;
    }
    else
    {
      v3 = *((uint32_t *)self + 2) & (v3 + 1);
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::remove  (binary VA: 0x1a75aa0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::remove
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_long_unsig_a6ffbc::remove(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2, unsigned int a3)
{
  signed int Key;

  Key = hkMultiMap_unsigned_long_long_unsig_a6ffbc::findKey(
          (hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *)a2,
          __PAIR64__(a3, HIDWORD(a2)));
  if ( Key <= *(uint32_t *)(a2 + 8) )
  {
    hkMultiMap_unsigned_long_long_unsig_a6ffbc::remove(
      (int *)a2,
      Key);
    *(uint32_t *)self = 0;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::remove  (binary VA: 0x1a75b10)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::remove
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_long_unsig_a6ffbc::remove(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2, uint64_t a3, unsigned int a4)
{
  signed int KeyWithValue;

  KeyWithValue = hkMultiMap_unsigned_long_long_unsig_a6ffbc::findKeyWithValue(
                   (hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *)a2,
                   __PAIR64__(a3, HIDWORD(a2)),
                   __PAIR64__(a4, HIDWORD(a3)));
  if ( KeyWithValue <= *(uint32_t *)(a2 + 8) )
  {
    hkMultiMap_unsigned_long_long_unsig_a6ffbc::remove(
      (int *)a2,
      KeyWithValue);
    *(uint32_t *)self = 0;
  }
  else
  {
    *(uint32_t *)self = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::getSize  (binary VA: 0x1a75b90)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getSize
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::getSize(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self)
{
  return *((uint32_t *)self + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::getCapacity  (binary VA: 0x1a75ba0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getCapacity
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::getCapacity(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self)
{
  return (*((uint32_t *)self + 2) + 1) & 0x7FFFFFFF;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::getMemSize  (binary VA: 0x1a75bb0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getMemSize
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::getMemSize(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self)
{
  return 16 * (*((uint32_t *)self + 2) + 1);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::getMemStart  (binary VA: 0x1a75bc0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getMemStart
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::getMemStart(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::isOk  (binary VA: 0x1a75bd0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::isOk
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_long_unsig_a6ffbc::isOk(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, int64_t **a2)
{
  int v2;
  unsigned int i;
  int64_t *v6;
  int64_t *v7;
  int64_t v8; // 0:esi.4,4:edi.4

  v2 = (int)(uintptr_t)(a2[2]);
  if ( v2 >= 0 )
  {
    v6 = *a2;
    v7 = *a2;
    do
    {
      v8 = *v7;
      if ( (*((uint32_t *)v7 + 1) & *(uint32_t *)v7) != -1 )
      {
        for ( i = v2 & (-1640531535 * ((unsigned int)v8 >> 4)); v6[2 * i] != v8; i = v2 & (i + 1) )
          ;
      }
      v7 += 2;
    }
    while ( v7 != &(*a2)[2 * v2 + 2] );
  }
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::clear  (binary VA: 0x1a75c90)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::clear
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::clear(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self)
{
  int result;
  int v2;
  int v3;
  uint32_t *v4;

  result = 0;
  v2 = *((uint32_t *)self + 2) + 1;
  if ( *((int *)self + 2) >= 0 )
  {
    do
    {
      v3 = result++;
      v4 = (uint32_t *)(*(uint32_t *)self + 16 * v3);
      *v4 = -1;
      v4[1] = -1;
    }
    while ( result != v2 );
  }
  *((uint32_t *)self + 1) &= 0x80000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::Construct  (binary VA: 0x1a75ce0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMultiMap
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_long_unsig_a6ffbc::Construct(hkMultiMap_Raw *self)
{
  int v1;

  v1 = (*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
         (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
         256);
  *(uint32_t *)self = v1;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 15;
  if ( v1 != 0 )
    hkMultiMap_unsigned_long_long_unsig_a6ffbc::clear((hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *)(self));
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::Construct  (binary VA: 0x1a75d30)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::hkMultiMap
// ----------------------------------------------------------------------------
void hkMultiMap_unsigned_long_long_unsig_a6ffbc::Construct(hkMultiMap_Raw *self, int a2)
{
  int v2;
  int v3;
  int v4;

  *((uint32_t *)self + 1) = 0;
  if ( 3 * a2 <= 4 )
  {
    v3 = 3;
    v4 = 64;
  }
  else
  {
    v2 = 4;
    do
      v2 *= 2;
    while ( 3 * a2 > v2 );
    v3 = v2 - 1;
    v4 = 16 * v2;
  }
  *(uint32_t *)self = (*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
                      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                      v4);
  *((uint32_t *)self + 2) = v3;
  hkMultiMap_unsigned_long_long_unsig_a6ffbc::clear((hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *)(self));
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::swap  (binary VA: 0x1a75dc0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::swap
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_long_unsig_a6ffbc::swap(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *a2)
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
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::wasReallocated  (binary VA: 0x1a75df0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::wasReallocated
// ----------------------------------------------------------------------------
int64_t hkMultiMap_unsigned_long_long_unsig_a6ffbc::wasReallocated(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, int a2)
{
  int64_t result; // rax

  LODWORD(result) = (uint32_t)(uintptr_t)(self);
  HIDWORD(result) = *(uint32_t *)(a2 + 4) >= 0;
  *(uint8_t *)self = BYTE4(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::getSizeInBytesFor  (binary VA: 0x1a75e10)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::getSizeInBytesFor
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::getSizeInBytesFor(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self)
{
  int i;

  if ( (int)(uintptr_t)(self) <= 4 )
    return 128;
  for ( i = 4; i < (int)(uintptr_t)(self); i *= 2 )
    ;
  return 32 * i;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::resizeTable  (binary VA: 0x1a75e30)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::resizeTable
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_long_unsig_a6ffbc::resizeTable(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;
  int v11;

  v11 = *((uint32_t *)a2 + 1);
  v9 = *((uint32_t *)a2 + 2) + 1;
  v10 = *(uint32_t *)a2;
  v3 = (*(int (**)(uint32_t *, int))(hkContainerHeapAllocator::s_alloc + 8))(
         (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
         16 * a3);
  if ( v3 != 0 )
  {
    v4 = 0;
    *(uint32_t *)a2 = v3;
    if ( a3 > 0 )
    {
      while ( 1 )
      {
        v5 = v4++;
        v5 *= 16;
        *(uint32_t *)(v3 + v5) = -1;
        *(uint32_t *)(v3 + v5 + 4) = -1;
        if ( v4 == a3 )
          break;
        v3 = *(uint32_t *)a2;
      }
    }
    v6 = 0;
    *((uint32_t *)a2 + 2) = a3 - 1;
    *((uint32_t *)a2 + 1) = 0;
    v7 = v10;
    if ( v9 > 0 )
    {
      do
      {
        if ( (*(uint32_t *)(v7 + 4) & *(uint32_t *)v7) != -1 )
          hkMultiMap_unsigned_long_long_unsig_a6ffbc::insert(
            a2,
            *(uint64_t *)v7,
            *(uint64_t *)(v7 + 8));
        ++v6;
        v7 += 16;
      }
      while ( v9 != v6 );
    }
    if ( v11 >= 0 )
      (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 12))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        v10,
        16 * v9);
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
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::insert  (binary VA: 0x1a75f70)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::insert
// ----------------------------------------------------------------------------
int hkMultiMap_unsigned_long_long_unsig_a6ffbc::insert(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2, uint64_t a3)
{
  int v3;
  unsigned int i;
  int v5;
  uint32_t *v6;
  int result;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v9)) > _g4_s1 ? (20u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);

  v3 = *((uint32_t *)self + 2);
  v8 = *((uint32_t *)self + 1);
  v9 = v3;
  if ( 2 * v8 > v3 )
  {
    hkMultiMap_unsigned_long_long_unsig_a6ffbc::resizeTable(
      (hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *)v10,
      self,
      2 * v3 + 2);
    v9 = *((uint32_t *)self + 2);
    v8 = *((uint32_t *)self + 1);
  }
  for ( i = v9 & (-1640531535 * ((unsigned int)a2 >> 4)); ; i = v9 & (i + 1) )
  {
    v5 = 16 * i;
    v6 = (uint32_t *)(*(uint32_t *)self + 16 * i);
    if ( (v6[1] & *v6) == -1 )
      break;
  }
  *((uint32_t *)self + 1) = v8 + 1;
  *(uint64_t *)v6 = a2;
  result = *(uint32_t *)self;
  *(uint64_t *)(*(uint32_t *)self + v5 + 8) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::tryInsert  (binary VA: 0x1a76050)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::tryInsert
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_long_unsig_a6ffbc::tryInsert(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2, uint64_t a3, int a4)
{
  int i;
  int v5;
  unsigned int *v6;
  int v7;
  typedef uint64_t _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef int *_g4_t_v13;
  typedef hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v12)) > _g4_s3 ? (16u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v13)) > _g4_s4 ? (20u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v14)) > _g4_s5 ? (24u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v15)) > _g4_s6 ? (28u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v16)) > _g4_s7 ? (32u + sizeof(_g4_t_v16)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);

  v16[3] = (uint32_t)(uintptr_t)(&self);
  v14 = self;
  v12 = HIDWORD(a2);
  v9 = a3;
  v13 = (int *)a2;
  v15 = *(uint32_t *)(a2 + 8);
  v10 = a4;
  v11 = *(uint32_t *)(a2 + 4);
  if ( 2 * v11 > v15 )
  {
    hkMultiMap_unsigned_long_long_unsig_a6ffbc::resizeTable(
      (hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *)v16,
      (hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *)a2,
      v15 + v15 + 2);
    if ( v16[0] != 0 )
    {
      *(uint32_t *)v14 = 1;
      return v14;
    }
    v15 = v13[2];
    v11 = v13[1];
  }
  for ( i = v15 & (-1640531535 * (v12 >> 4)); ; i = v15 & (i + 1) )
  {
    v5 = 16 * i;
    v6 = (unsigned int *)(*v13 + 16 * i);
    if ( (v6[1] & *v6) == 0xFFFFFFFF )
      break;
  }
  v13[1] = v11 + 1;
  *v6 = v12;
  v6[1] = v9;
  v7 = *v13;
  *(uint32_t *)(v7 + v5 + 8) = HIDWORD(v9);
  *(uint32_t *)(v7 + v5 + 12) = v10;
  *(uint32_t *)v14 = 0;
  return v14;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::reserve  (binary VA: 0x1a76170)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::reserve
// ----------------------------------------------------------------------------
hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> * hkMultiMap_unsigned_long_long_unsig_a6ffbc::reserve(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, int a2)
{
  int i;
  uint8_t v4[8];

  for ( i = 4; 3 * a2 > i; i *= 2 )
    ;
  return hkMultiMap_unsigned_long_long_unsig_a6ffbc::resizeTable(
           (hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *)v4,
           self,
           i);
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::findOrInsertKey  (binary VA: 0x1a761d0)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::findOrInsertKey
// ----------------------------------------------------------------------------
unsigned int hkMultiMap_unsigned_long_long_unsig_a6ffbc::findOrInsertKey(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self, uint64_t a2, uint64_t a3)
{
  int v3;
  unsigned int v4;
  uint32_t *v5;
  unsigned int v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef uint8_t _g4_t_v11[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);

  v3 = *((uint32_t *)self + 2);
  v9 = v3;
  if ( 2 * *((uint32_t *)self + 1) + 1 >= v3 )
  {
    hkMultiMap_unsigned_long_long_unsig_a6ffbc::resizeTable(
      (hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *)v11,
      self,
      2 * v3 + 2);
    v9 = *((uint32_t *)self + 2);
  }
  v4 = v9 & (-1640531535 * ((unsigned int)a2 >> 4));
  v8 = 16 * v4;
  v5 = (uint32_t *)(*(uint32_t *)self + 16 * v4);
  v10 = v5[1];
  if ( __PAIR64__(a2, HIDWORD(a2)) == __PAIR64__(*v5, v10) )
    return v4;
  v6 = v9 & (-1640531535 * ((unsigned int)a2 >> 4));
  if ( (*v5 & v10) != 0xFFFFFFFF )
  {
    do
    {
      v6 = v9 & (v6 + 1);
      v8 = 16 * v6;
      v5 = (uint32_t *)(*(uint32_t *)self + 16 * v6);
      if ( *(uint64_t *)v5 == a2 )
        return v6;
    }
    while ( (v5[1] & *v5) != -1 );
    v4 = v6;
  }
  *(uint64_t *)v5 = a2;
  *(uint64_t *)(*(uint32_t *)self + v8 + 8) = a3;
  ++*((uint32_t *)self + 1);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkMultiMap_unsigned_long_long_unsig_a6ffbc::isPower2  (binary VA: 0x1a76310)
// Original: hkMultiMap<unsigned long long,unsigned long long,hkMultiMapOperations<unsigned long long>,hkContainerHeapAllocator>::isPower2
// ----------------------------------------------------------------------------
bool hkMultiMap_unsigned_long_long_unsig_a6ffbc::isPower2(hkMultiMap<unsigned long long, unsigned long long, hkMultiMapOperations<unsigned long long>, hkContainerHeapAllocator::Self> *self)
{
  return ((unsigned int)(uintptr_t)(self) & ((unsigned int)(uintptr_t)(self) - 1)) == 0;
}

// ----------------------------------------------------------------------------
// Function: hkUnionFind::clear  (binary VA: 0x1a76320)
// Original: hkUnionFind::clear
// ----------------------------------------------------------------------------
int hkUnionFind::clear(hkUnionFind::Self *self)
{
  int result;

  for ( result = 0; *((uint32_t *)self + 1) > result; ++result )
    *(uint32_t *)(**(uint32_t **)self + 4 * result) = -1;
  *((uint32_t *)self + 2) = 1;
  *((uint32_t *)self + 3) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkUnionFind::Construct  (binary VA: 0x1a76360)
// Original: hkUnionFind::hkUnionFind
// ----------------------------------------------------------------------------
int hkUnionFind::Construct(hkUnionFind::Self *a1, int a2, int a3)
{
  *(uint32_t *)a1 = a2;
  *((uint32_t *)a1 + 4) = 0;
  *((uint32_t *)a1 + 1) = a3;
  return hkUnionFind::clear(a1);
}

// ----------------------------------------------------------------------------
// Function: hkUnionFind::findRootOfNode  (binary VA: 0x1a763a0)
// Original: hkUnionFind::findRootOfNode
// ----------------------------------------------------------------------------
int hkUnionFind::findRootOfNode(hkUnionFind::Self *self, int a2)
{
  int v2;
  int i;
  int *v4;
  int result;

  v2 = a2;
  for ( i = **(uint32_t **)self; *(int *)(i + 4 * v2) >= 0; v2 = *(uint32_t *)(i + 4 * v2) )
    ;
  v4 = (int *)(i + 4 * a2);
  result = *v4;
  if ( *v4 < 0 )
    return a2;
  while ( 1 )
  {
    *v4 = v2;
    v4 = (int *)(**(uint32_t **)self + 4 * result);
    if ( *v4 < 0 )
      break;
    result = *v4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkUnionFind::unionRoots  (binary VA: 0x1a763f0)
// Original: hkUnionFind::unionRoots
// ----------------------------------------------------------------------------
int hkUnionFind::unionRoots(hkUnionFind::Self *self, int a2, int a3)
{
  int result;
  int v4;
  int *v5;
  int *v6;
  int v7;

  result = a3;
  v4 = **(uint32_t **)self;
  v5 = (int *)(v4 + 4 * a2);
  v6 = (int *)(v4 + 4 * a3);
  v7 = *v5 + *v6;
  if ( a2 < a3 )
  {
    *v5 = v7;
    *(uint32_t *)(**(uint32_t **)self + 4 * a3) = a2;
  }
  else
  {
    *v6 = v7;
    *(uint32_t *)(**(uint32_t **)self + 4 * a2) = a3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkUnionFind::addEdge  (binary VA: 0x1a76440)
// Original: hkUnionFind::addEdge
// ----------------------------------------------------------------------------
int hkUnionFind::addEdge(hkUnionFind::Self *self, int a2, int a3)
{
  int v3;
  int result;
  int v5;
  int *v6;
  int v7;
  hkUnionFind::Self *v8;
  int i;
  int j;
  int *v11;
  int v12;
  int v13;
  int k;
  int v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  hkUnionFind::Self *thisa;

  v3 = a2;
  for ( result = **(uint32_t **)self; *(int *)(result + 4 * v3) >= 0; v3 = *(uint32_t *)(result + 4 * v3) )
    ;
  v5 = 4 * a2;
  v6 = (int *)(result + 4 * a2);
  if ( *v6 < 0 )
  {
    v19 = a2;
    v8 = self;
  }
  else
  {
    v7 = *v6;
    v8 = self;
    for ( i = v3; ; i = v3 )
    {
      *v6 = i;
      v5 = 4 * v7;
      result = **(uint32_t **)self;
      v6 = (int *)(result + 4 * v7);
      if ( *v6 < 0 )
        break;
      v7 = *v6;
    }
    v19 = v7;
  }
  for ( j = a3; *(int *)(result + 4 * j) >= 0; j = *(uint32_t *)(result + 4 * j) )
    ;
  thisa = v8;
  v20 = 4 * a3;
  v11 = (int *)(result + 4 * a3);
  v12 = *v11;
  if ( *v11 < 0 )
  {
    v18 = a3;
    v15 = a3;
  }
  else
  {
    v21 = v5;
    v13 = *v11;
    for ( k = j; ; k = j )
    {
      *v11 = k;
      result = **(uint32_t **)v8;
      v11 = (int *)(result + 4 * v13);
      v12 = *v11;
      if ( *v11 < 0 )
        break;
      v13 = *v11;
    }
    v18 = v13;
    thisa = v8;
    v20 = 4 * v13;
    v5 = v21;
    v15 = v18;
  }
  if ( v19 != v15 )
  {
    v16 = (int *)(result + v5);
    v17 = v12 + *(uint32_t *)(result + v5);
    if ( v19 < v15 )
    {
      *v16 = v17;
      result = **(uint32_t **)thisa;
      *(uint32_t *)(result + v20) = v19;
    }
    else
    {
      *v11 = v17;
      result = **(uint32_t **)thisa;
      *(uint32_t *)(result + v5) = v18;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkUnionFind::merge  (binary VA: 0x1a76590)
// Original: hkUnionFind::merge
// ----------------------------------------------------------------------------
int hkUnionFind::merge(hkUnionFind::Self *self, const hkUnionFind::Self *a2)
{
  int v2;
  int v3;
  int result;

  v2 = 0;
  v3 = *((uint32_t *)self + 1);
  *((uint32_t *)self + 2) = 0;
  if ( v3 > 0 )
  {
    do
    {
      result = *(uint32_t *)(**(uint32_t **)a2 + 4 * v2);
      if ( result >= 0 )
      {
        result = hkUnionFind::addEdge(self, v2, *(uint32_t *)(**(uint32_t **)a2 + 4 * v2));
        v3 = *((uint32_t *)self + 1);
      }
      ++v2;
    }
    while ( v2 < v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkUnionFind::collapseTree  (binary VA: 0x1a765f0)
// Original: hkUnionFind::collapseTree
// ----------------------------------------------------------------------------
int hkUnionFind::collapseTree(hkUnionFind::Self *self)
{
  hkUnionFind::Self *v1;
  uint32_t *v2;
  int v3;
  int *v4;
  int *v5;
  int i;

  v1 = self;
  if ( *((uint32_t *)self + 2) != 0 )
    return *((uint32_t *)self + 3);
  v2 = *(uint32_t **)self;
  v3 = *((uint32_t *)self + 1);
  v4 = **(int ***)self;
  v5 = &v4[v3];
  if ( v5 != v4 )
  {
    do
    {
      if ( *v4 >= 0 )
      {
        --v3;
        for ( i = *(uint32_t *)(*v2 + 4 * *v4); i >= 0; i = *(uint32_t *)(**(uint32_t **)self + 4 * i) )
        {
          *v4 = i;
          v2 = *(uint32_t **)self;
        }
      }
      ++v4;
    }
    while ( v5 != v4 );
    v1 = self;
  }
  *((uint32_t *)v1 + 2) = 1;
  *((uint32_t *)v1 + 3) = v3;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkUnionFind::assignGroups  (binary VA: 0x1a76680)
// Original: hkUnionFind::assignGroups
// ----------------------------------------------------------------------------
hkUnionFind::Self * hkUnionFind::assignGroups(hkUnionFind::Self *self, hkArray<int, hkContainerHeapAllocator::Self> *a2, int *a3)
{
  int v3;
  int v4;
  int v5;
  int v7;
  int v8;
  int *v9;
  int v10;
  typedef int _g4_t_i;
  typedef uint32_t _g4_t_v12[7];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_i)) > _g4_s0 ? (0u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);

  v3 = hkUnionFind::collapseTree((hkUnionFind::Self *)(a2));
  v4 = a3[2] & 0x3FFFFFFF;
  if ( v3 <= v4 )
    goto LABEL_6;
  v5 = 2 * v4;
  if ( v3 < v5 )
    v3 = v5;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v12, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a3, v3, 4);
  if ( v12[0] != 0 )
  {
    *(uint32_t *)self = 1;
    return self;
  }
  else
  {
LABEL_6:
    v7 = 0;
    for ( i = 0; *((uint32_t *)a2 + 1) > v7; ++i )
    {
      while ( 1 )
      {
        v8 = **(uint32_t **)a2;
        v9 = (int *)(v8 + 4 * v7);
        v10 = *v9;
        if ( *v9 < 0 )
          break;
        ++v7;
        *v9 = *(uint32_t *)(v8 + 4 * v10);
        if ( *((uint32_t *)a2 + 1) <= v7 )
          goto LABEL_11;
      }
      *(uint32_t *)(*a3 + 4 * a3[1]++) = -v10;
      *(uint32_t *)(**(uint32_t **)a2 + 4 * v7++) = i;
    }
LABEL_11:
    *(uint32_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkUnionFind::moveBiggestGroupToIndexZero  (binary VA: 0x1a76780)
// Original: hkUnionFind::moveBiggestGroupToIndexZero
// ----------------------------------------------------------------------------
int hkUnionFind::moveBiggestGroupToIndexZero(unsigned int self, hkArray<int, hkContainerHeapAllocator::Self> *a2, signed int a3, int a4)
{
  int *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  unsigned int v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  __m128i *v16;
  __m128i v17;
  unsigned int v18;
  __m128i v19;
  unsigned int v20;
  signed int v21;
  int *v22;
  int v23;
  int i;
  uint32_t *v25;
  void *savedregs;
  int retaddr;
  int v35;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v26)) > _g4_s0 ? (8u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v27)) > _g4_s1 ? (12u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v29)) > _g4_s3 ? (20u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v30)) > _g4_s4 ? (24u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v31)) > _g4_s5 ? (28u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v32)) > _g4_s6 ? (32u + sizeof(_g4_t_v32)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);

  v4 = *(int **)a2;
  v31 = *((uint32_t *)a2 + 1);
  v5 = **(uint32_t **)a2;
  if ( v31 <= 1 )
    return 0;
  v6 = 1;
  v7 = 0;
  while ( 1 )
  {
    v8 = v5;
    if ( v4[v6] > v5 )
    {
      v7 = v6;
      v8 = v4[v6];
    }
    if ( ++v6 == v31 )
      break;
    v5 = v8;
  }
  result = 0;
  if ( v7 != 0 )
  {
    v10 = *((uint32_t *)a2 + 1);
    v32 = 4 * v31;
    v11 = (*(int (**)(uint32_t *, int *, int, int, int, int, int, int))(hkContainerTempAllocator::s_alloc[0] + 16))(
            (uint32_t *)(hkContainerTempAllocator::s_alloc),
            &v32,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
    v12 = a4 / 4;
    if ( a4 / 4 == 0 )
      v12 = 0x80000000;
    v13 = v10;
    v35 = v12;
    v14 = -((uint8_t)(v11 & 0xF) >> 2) & 3;
    if ( v14 > v10 )
      v14 = v10;
    if ( v10 > 7 )
    {
      if ( v14 == 0 )
      {
        v13 = 0;
        v15 = 0;
        goto LABEL_21;
      }
      v13 = v14;
    }
    *(uint32_t *)v11 = 0;
    if ( v13 <= 1 )
    {
      v15 = 1;
    }
    else
    {
      *(uint32_t *)(v11 + 4) = 1;
      if ( v13 <= 2 )
      {
        v15 = 2;
      }
      else
      {
        *(uint32_t *)(v11 + 8) = 2;
        if ( v13 <= 3 )
        {
          v15 = 3;
        }
        else
        {
          *(uint32_t *)(v11 + 12) = 3;
          if ( v13 <= 4 )
          {
            v15 = 4;
          }
          else
          {
            *(uint32_t *)(v11 + 16) = 4;
            if ( v13 <= 5 )
            {
              v15 = 5;
            }
            else
            {
              *(uint32_t *)(v11 + 20) = 5;
              if ( v13 <= 6 )
              {
                v15 = 6;
              }
              else
              {
                *(uint32_t *)(v11 + 24) = 6;
                v15 = 7;
              }
            }
          }
        }
      }
      if ( v13 == a3 )
      {
LABEL_29:
        *(uint32_t *)v11 = v7;
        *(uint32_t *)(v11 + 4 * v7) = 0;
        v22 = (int *)(*(uint32_t *)v35 + 4 * v7);
        v23 = *v22;
        *v22 = **(uint32_t **)v35;
        **(uint32_t **)v35 = v23;
        for ( i = 0; *(uint32_t *)(self + 4) > i; *v25 = *(uint32_t *)(v11 + 4 * *v25) )
          v25 = (uint32_t *)(**(uint32_t **)self + 4 * i++);
        if ( v35 >= 0 )
          (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
            (uint32_t *)(hkContainerTempAllocator::s_alloc),
            v11,
            4 * v35);
        return v7;
      }
    }
LABEL_21:
    savedregs = (void *)(a3 - v13);
    self = (a3 - v13) >> 2;
    retaddr = 4 * self;
    if ( 4 * self == 0 )
      goto LABEL_46;
g4_m128_lane<int64_t>(v17, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(v15 + 1)), 0);
    v16 = (__m128i *)(v11 + 4 * v13);
g4_m128_lane<int64_t>(v17, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v15 + 2), _mm_cvtsi32_si128(v15 + 3)), 0);
    v18 = 0;
    while ( 1 )
    {
      *v16 = v17;
      ++v18;
      ++v16;
      v19 = _mm_add_epi32(v17, G4_BITCAST<__m128i>(xmmword_1C7C400));
      if ( self <= v18 )
        break;
      v17 = v19;
    }
    v15 += retaddr;
    if ( (void *)retaddr != savedregs )
    {
LABEL_46:
      v20 = v15 + 1;
      *(uint32_t *)(v11 + 4 * v15) = v15;
      if ( a3 > (int)(v15 + 1) )
      {
        v21 = v15 + 2;
        *(uint32_t *)(v11 + 4 * v20) = v20;
        if ( a3 > v21 )
          *(uint32_t *)(v11 + 4 * v21) = v21;
      }
    }
    goto LABEL_29;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkUnionFind::reindex  (binary VA: 0x1a76a20)
// Original: hkUnionFind::reindex
// ----------------------------------------------------------------------------
int hkUnionFind::reindex(int a1, uint32_t *a2, int a3, int *a4)
{
  uint32_t **v4;
  uint32_t *v5;
  int *v6;
  int v7;
  uint32_t *v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int result;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef char _g4_t_v22[4];
  typedef uint32_t _g4_t_v23[10];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v19)) > _g4_s3 ? (8u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v20)) > _g4_s4 ? (8u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v21)) > _g4_s5 ? (8u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v22)) > _g4_s6 ? (12u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v23)) > _g4_s7 ? (16u + sizeof(_g4_t_v23)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);

  v23[6] = (uint32_t)(uintptr_t)(&a1);
  v4 = (uint32_t **)a1;
  v5 = a2;
  v17 = a3;
  v6 = a4;
  v7 = 0;
  if ( *(int *)(a1 + 4) > 0 )
  {
    v18 = a1;
    do
    {
      v8 = (uint32_t *)(**v4 + 4 * v7++);
      v4 = (uint32_t **)v18;
      *v8 = *(uint32_t *)(*v5 + 4 * *v8);
    }
    while ( *(uint32_t *)(v18 + 4) > v7 );
  }
  v9 = nullptr;
  if ( v17 == 0
    || (v21 = v5,
        v23[0] = 4 * v17,
        v9 = (char *)(*(int (**)(uint32_t *, uint32_t *))(hkContainerTempAllocator::s_alloc[0] + 16))(
                       (uint32_t *)(hkContainerTempAllocator::s_alloc),
                       v23),
        v5 = v21,
        v16 = v23[0] / 4,
        v23[0] / 4 == 0) )
  {
    v16 = 0x80000000;
  }
  if ( v17 > 0 )
  {
    v19 = v5;
    memset(v9, 0, 4 * v17);
    v5 = v19;
  }
  v10 = 0;
  if ( v6[1] > 0 )
  {
    v20 = v5;
    do
    {
      v11 = *(uint32_t *)(*v6 + 4 * v10);
      v12 = *(uint32_t *)(*v20 + 4 * v10++);
      *(uint32_t *)&v9[4 * v12] += v11;
    }
    while ( v6[1] > v10 );
  }
  v13 = v6[2] & 0x3FFFFFFF;
  if ( v17 > v13 )
  {
    v14 = 2 * v13;
    if ( v14 < v17 )
      v14 = v17;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v22, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v6, v14, 4);
    v6[1] = v17;
    goto LABEL_15;
  }
  result = v17;
  v6[1] = v17;
  if ( v17 > 0 )
  {
LABEL_15:
    result = 0;
    do
    {
      *(uint32_t *)(*v6 + result) = *(uint32_t *)&v9[result];
      result += 4;
    }
    while ( result != 4 * v17 );
  }
  if ( v16 >= 0 )
    return (*(int (**)(uint32_t *, char *, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
             (uint32_t *)(hkContainerTempAllocator::s_alloc),
             v9,
             4 * v16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkUnionFind::sortByGroupId  (binary VA: 0x1a76be0)
// Original: hkUnionFind::sortByGroupId
// ----------------------------------------------------------------------------
hkUnionFind::Self * hkUnionFind::sortByGroupId(hkUnionFind::Self *self, const hkArray<int, hkContainerHeapAllocator::Self> *a2, hkArray<int, hkContainerHeapAllocator::Self> *a3, int *a4)
{
  int *v4;
  hkArray<int, hkContainerHeapAllocator::Self> *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int i;
  uint32_t *v17;
  int v18;
  typedef int _g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef const hkArray<int, hkContainerHeapAllocator::Self> *_g4_t_v25;
  typedef hkUnionFind::Self *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef hkUnionFind::Self **_g4_t_v31;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v22)) > _g4_s3 ? (24u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v23)) > _g4_s4 ? (24u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v24)) > _g4_s5 ? (24u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v25)) > _g4_s6 ? (28u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v26)) > _g4_s7 ? (32u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v27)) > _g4_s8 ? (36u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v28)) > _g4_s9 ? (40u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v29)) > _g4_s10 ? (44u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v30)) > _g4_s11 ? (48u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v31)) > _g4_s12 ? (64u + sizeof(_g4_t_v31)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);

  v31 = &self;
  v4 = a4;
  v26 = self;
  v5 = a3;
  v25 = a2;
  v6 = *((uint32_t *)a2 + 1);
  v7 = a4[2] & 0x3FFFFFFF;
  if ( v6 <= v7 )
    goto LABEL_2;
  v9 = 2 * v7;
  if ( v9 < v6 )
    v9 = *((uint32_t *)a2 + 1);
  v23 = *((uint32_t *)a2 + 1);
  hkArrayUtil::reserve((hkArrayUtil::Self *)&v27, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a4, v9, 4);
  v6 = v23;
  if ( v27 != 0 )
  {
    *(uint32_t *)v26 = 1;
  }
  else
  {
LABEL_2:
    v4[1] = v6;
    if ( *((int *)v5 + 1) <= 0 )
    {
      *(uint32_t *)v26 = 0;
    }
    else
    {
      v19 = *((uint32_t *)v5 + 1);
      v22 = v19;
      v28 = 0;
      v29 = 0;
      v30 = 0x80000000;
      hkArrayUtil::reserve((hkArrayUtil::Self *)&v27, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, &v28, v19, 4);
      v8 = v22;
      if ( v27 != 0 )
      {
        *(uint32_t *)v26 = 1;
      }
      else
      {
        v29 = v22;
        v24 = v28;
        v20 = v4;
        v11 = 4 * v8;
        v12 = 0;
        v13 = 0;
        v14 = v28;
        do
        {
          *(uint32_t *)(v14 + v13) = v12;
          v12 += *(uint32_t *)(*(uint32_t *)v5 + v13);
          v13 += 4;
        }
        while ( v13 != v11 );
        v21 = *v20;
        v15 = **(uint32_t **)v25;
        for ( i = 0; *((uint32_t *)v25 + 1) > i; ++i )
        {
          v17 = (uint32_t *)(v24 + 4 * *(uint32_t *)(v15 + 4 * i));
          v18 = (*v17)++;
          *(uint32_t *)(v21 + 4 * v18) = i;
        }
        *(uint32_t *)v26 = 0;
      }
      v29 = 0;
      if ( v30 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
          (uint32_t *)(hkContainerTempAllocator::s_alloc),
          v28,
          4 * v30);
    }
  }
  return v26;
}

// ----------------------------------------------------------------------------
// Function: hkHardwareInfo::Destroy  (binary VA: 0x1a76dc0)
// Original: hkHardwareInfo::~hkHardwareInfo
// ----------------------------------------------------------------------------
void hkHardwareInfo::Destroy(hkHardwareInfo::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkHardwareInfo::Destroy_ea1a76de0  (binary VA: 0x1a76de0)
// Original: hkHardwareInfo::~hkHardwareInfo
// ----------------------------------------------------------------------------
void hkHardwareInfo::Destroy_ea1a76de0(hkHardwareInfo::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 16;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkHardwareInfo::calcNumHardwareThreads  (binary VA: 0x1a76e40)
// Original: hkHardwareInfo::calcNumHardwareThreads
// ----------------------------------------------------------------------------
int hkHardwareInfo::calcNumHardwareThreads()
{
  int CpuCount;

  CpuCount = hkAndroidGetCpuCount();
  long scCores = sysconf(97);
  G4_PlatformLog(4, "Havok", "Found %d Cpu Cores (sysconf says %d)", CpuCount, (int)scCores);
  return CpuCount;
}

// ----------------------------------------------------------------------------
// Function: hkHardwareInfo::Construct  (binary VA: 0x1a76ea0)
// Original: hkHardwareInfo::hkHardwareInfo
// ----------------------------------------------------------------------------
void hkHardwareInfo::Construct(hkHardwareInfo::Self *self)
{
  *((uint32_t *)self + 1) = -65535;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B0E68);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(sub_800000);
  *((uint32_t *)self + 2) = hkHardwareInfo::calcNumHardwareThreads();
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::lerp2  (binary VA: 0x1a76f80)
// Original: hkSweptTransformUtil::lerp2
// ----------------------------------------------------------------------------
hkRotationf::Self * hkSweptTransformUtil::lerp2(float *a1, float *a2, float *a3)
{
  float v3; // xmm1_4
  float v4; // xmm0_4
  __m128i v5;
  float v6; // xmm6_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  __m128i v12;
  float v13; // xmm7_4
  __m128i v14;
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm6_4
  hkRotationf::Self *result;
  float v19; // xmm4_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm5_4
  float v23; // xmm6_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28;
  float v29; // xmm7_4
  float v30; // xmm5_4
  float v31; // xmm0_4
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v32)) > _g4_s0 ? (0u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v33)) > _g4_s1 ? (4u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v34)) > _g4_s2 ? (8u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v35)) > _g4_s3 ? (12u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v36)) > _g4_s4 ? (16u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v37)) > _g4_s5 ? (20u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v38)) > _g4_s6 ? (24u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v39)) > _g4_s7 ? (28u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v40)) > _g4_s8 ? (32u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v41)) > _g4_s9 ? (40u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v42)) > _g4_s10 ? (44u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v43)) > _g4_s11 ? (48u + sizeof(_g4_t_v43)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 40u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);

  v37 = a1[8];
  v33 = a1[11];
  v39 = a1[15];
  v41 = (float)(*a2 - a1[3]) * a1[7];
  v35 = a1[13];
  v40 = a1[14];
g4_m128_raw(v5) = *((unsigned int *)a1 + 12);
  *(float *)g4_m128_ptr<int32_t>(v5) = *(float *)g4_m128_ptr<int32_t>(v5) + v37;
  v32 = a1[9];
  v34 = a1[10];
  v36 = a1[12];
  v3 = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v5) * *(float *)g4_m128_ptr<int32_t>(v5))
                     + (float)((float)(v32 + v35) * (float)(v32 + v35)))
             + (float)((float)(v34 + v40) * (float)(v34 + v40)))
     + (float)((float)(v33 + v39) * (float)(v33 + v39));
  v4 = (float)((float)(1.0 + 0.5)
             - (float)((float)((float)(v3 * 0.5) * (float)(0.75 - (float)(0.125 * v3)))
                     * (float)(0.75 - (float)(0.125 * v3))))
     * (float)(0.75 - (float)(0.125 * v3));
  *(float *)g4_m128_ptr<int32_t>(v5) = *(float *)g4_m128_ptr<int32_t>(v5) * v4;
  v6 = (float)(v32 + v35) * v4;
  v7 = (float)(v34 + v40) * v4;
  v38 = (float)(v33 + v39) * v4;
  v8 = v41 + v41;
  if ( v41 < 0.5 )
  {
    *(float *)g4_m128_ptr<int32_t>(v5) = *(float *)g4_m128_ptr<int32_t>(v5) - v37;
    v12 = v5;
    *(float *)g4_m128_ptr<int32_t>(v12) = (float)(*(float *)g4_m128_ptr<int32_t>(v5) * v8) + v37;
    v10 = (float)((float)(v6 - v32) * v8) + v32;
    v11 = (float)((float)(v7 - v34) * v8) + v34;
    v42 = (float)(v8 * (float)(v38 - v33)) + v33;
    v13 = v42;
  }
  else
  {
g4_m128_raw(v12) = LODWORD(v36);
    v9 = v8 - 1.0;
    v10 = (float)((float)(v35 - v6) * v9) + v6;
    v11 = (float)((float)(v40 - v7) * v9) + v7;
    *(float *)g4_m128_ptr<int32_t>(v12) = (float)((float)(v36 - *(float *)g4_m128_ptr<int32_t>(v5)) * v9) + *(float *)g4_m128_ptr<int32_t>(v5);
    v13 = v38 + (float)(v9 * (float)(v39 - v38));
    v42 = v13;
  }
  v14 = v12;
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)g4_m128_ptr<int32_t>(v12))
                                          + (float)(v10 * v10))
                                  + (float)(v11 * v11))
                          + (float)(v13 * v13);
  v15 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v14);
g4_m128_lane<int32_t>(v14, 0) = ((_mm_cvtsi128_si32(v14) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v14) >> 1));
  v16 = (float)(*(float *)g4_m128_ptr<int32_t>(v14) * 1.5)
      - (float)((float)(v15 * *(float *)g4_m128_ptr<int32_t>(v14)) * (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14)));
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)(v16 * 1.5) - (float)((float)(v15 * v16) * (float)(v16 * v16));
  v17 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v14))
      - (float)((float)(v15 * *(float *)g4_m128_ptr<int32_t>(v14)) * (float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14)));
  v43[0] = *(float *)g4_m128_ptr<int32_t>(v12) * v17;
  v43[1] = v10 * v17;
  v43[2] = v11 * v17;
  v43[3] = v17 * v42;
  result = hkRotationf::set((hkRotationf::Self *)a3, (const hkQuaternionf::Self *)v43);
  v19 = (float)(a1[5] - a1[1]) * v41;
  v20 = (float)((float)(a1[4] - *a1) * v41) + *a1;
  v21 = (float)(a1[6] - a1[2]) * v41;
  v22 = a3[1];
  v23 = a3[2];
  v24 = (float)(a1[7] - a1[3]) * v41;
  a3[12] = v20;
  v25 = v19 + a1[1];
  a3[13] = v25;
  v26 = v21 + a1[2];
  a3[14] = v26;
  v27 = v24 + a1[3];
  a3[15] = v27;
  v28 = a1[17];
  v29 = a1[16];
  v30 = (float)((float)(v22 * v29) + (float)(v28 * a3[5])) + (float)(a1[18] * a3[9]);
  *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)(v28 * a3[6]) + (float)(v23 * v29)) + (float)(a1[18] * a3[10]);
  v31 = v27 - (float)((float)((float)(a3[3] * v29) + (float)(v28 * a3[7])) + (float)(a1[18] * a3[11]));
  a3[12] = v20 - (float)((float)((float)(v29 * *a3) + (float)(v28 * a3[4])) + (float)(a1[18] * a3[8]));
  a3[13] = v25 - v30;
  a3[15] = v31;
  a3[14] = v26 - *(float *)g4_m128_ptr<int32_t>(v14);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::lerp2  (binary VA: 0x1a773c0)
// Original: hkSweptTransformUtil::lerp2
// ----------------------------------------------------------------------------
hkRotationf::Self * hkSweptTransformUtil::lerp2(hkSweptTransformUtil::Self *self, const hkSweptTransformf::Self *a2, float *a3)
{
  typedef const hkSweptTransformf::Self *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);

  v4 = a2;
  return hkSweptTransformUtil::lerp2((float *)self, (float *)&v4, a3);
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::lerp2Ha  (binary VA: 0x1a77400)
// Original: hkSweptTransformUtil::lerp2Ha
// ----------------------------------------------------------------------------
hkRotationf::Self * hkSweptTransformUtil::lerp2Ha(float *a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm6_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  __m128i v7;
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  __m128i v14;
  float v15; // xmm7_4
  __m128i v16;
  float v17; // xmm5_4
  float v18; // xmm4_4
  float v19; // xmm6_4
  hkRotationf::Self *result;
  float v21; // xmm4_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm0_4
  float v27; // xmm4_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30;
  float v31; // xmm7_4
  float v32; // xmm5_4
  float v33; // xmm0_4
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v34)) > _g4_s0 ? (0u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v35)) > _g4_s1 ? (4u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v36)) > _g4_s2 ? (8u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v37)) > _g4_s3 ? (16u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v38)) > _g4_s4 ? (20u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v39)) > _g4_s5 ? (24u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v40)) > _g4_s6 ? (28u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v41)) > _g4_s7 ? (32u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v42)) > _g4_s8 ? (40u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v43)) > _g4_s9 ? (44u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v44)) > _g4_s10 ? (48u + sizeof(_g4_t_v44)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 24u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 48u);

  v38 = a1[8];
  v35 = a1[11];
  v40 = a1[15];
  v42 = (float)((float)(*a2 - a1[3]) + *a3) * a1[7];
  v34 = a1[9];
  v4 = v34 + a1[13];
  v36 = a1[10];
  v37 = a1[12];
  v41 = a1[14];
g4_m128_raw(v7) = LODWORD(v37);
  v5 = (float)((float)((float)((float)(v37 + v38) * (float)(v37 + v38)) + (float)(v4 * v4))
             + (float)((float)(v36 + v41) * (float)(v36 + v41)))
     + (float)((float)(v35 + v40) * (float)(v35 + v40));
  v6 = (float)((float)(0.5 + 1.0)
             - (float)((float)((float)(v5 * 0.5) * (float)(0.75 - (float)(0.125 * v5)))
                     * (float)(0.75 - (float)(0.125 * v5))))
     * (float)(0.75 - (float)(0.125 * v5));
  *(float *)g4_m128_ptr<int32_t>(v7) = (float)(v37 + v38) * v6;
  v8 = v4 * v6;
  v9 = (float)(v36 + v41) * v6;
  v39 = (float)(v35 + v40) * v6;
  v10 = v42 + v42;
  if ( v42 < 0.5 )
  {
    *(float *)g4_m128_ptr<int32_t>(v7) = *(float *)g4_m128_ptr<int32_t>(v7) - v38;
    v14 = v7;
    *(float *)g4_m128_ptr<int32_t>(v14) = (float)(*(float *)g4_m128_ptr<int32_t>(v7) * v10) + v38;
    v12 = (float)((float)(v8 - v34) * v10) + v34;
    v13 = (float)((float)(v9 - v36) * v10) + v36;
    v43 = (float)(v10 * (float)(v39 - v35)) + v35;
    v15 = v43;
  }
  else
  {
g4_m128_raw(v14) = LODWORD(v37);
    v11 = v10 - 1.0;
    v12 = (float)((float)(a1[13] - v8) * v11) + v8;
    v13 = (float)((float)(v41 - v9) * v11) + v9;
    *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)(v37 - *(float *)g4_m128_ptr<int32_t>(v7)) * v11) + *(float *)g4_m128_ptr<int32_t>(v7);
    v15 = v39 + (float)(v11 * (float)(v40 - v39));
    v43 = v15;
  }
  v16 = v14;
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14))
                                          + (float)(v12 * v12))
                                  + (float)(v13 * v13))
                          + (float)(v15 * v15);
  v17 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v16);
g4_m128_lane<int32_t>(v16, 0) = ((_mm_cvtsi128_si32(v16) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v16) >> 1));
  v18 = (float)(*(float *)g4_m128_ptr<int32_t>(v16) * 1.5)
      - (float)((float)(v17 * *(float *)g4_m128_ptr<int32_t>(v16)) * (float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16)));
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)(v18 * 1.5) - (float)((float)(v17 * v18) * (float)(v18 * v18));
  v19 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v16))
      - (float)((float)(v17 * *(float *)g4_m128_ptr<int32_t>(v16)) * (float)(*(float *)g4_m128_ptr<int32_t>(v16) * *(float *)g4_m128_ptr<int32_t>(v16)));
  v44[0] = *(float *)g4_m128_ptr<int32_t>(v14) * v19;
  v44[1] = v12 * v19;
  v44[2] = v13 * v19;
  v44[3] = v19 * v43;
  result = hkRotationf::set((hkRotationf::Self *)a4, (const hkQuaternionf::Self *)v44);
  v21 = (float)(a1[5] - a1[1]) * v42;
  v22 = (float)((float)(a1[4] - *a1) * v42) + *a1;
  v23 = (float)(a1[6] - a1[2]) * v42;
  v24 = a4[1];
  v25 = a4[2];
  v26 = (float)(a1[7] - a1[3]) * v42;
  a4[12] = v22;
  v27 = v21 + a1[1];
  a4[13] = v27;
  v28 = v23 + a1[2];
  a4[14] = v28;
  v29 = v26 + a1[3];
  a4[15] = v29;
  v30 = a1[17];
  v31 = a1[16];
  v32 = (float)((float)(v24 * v31) + (float)(v30 * a4[5])) + (float)(a1[18] * a4[9]);
  *(float *)g4_m128_ptr<int32_t>(v16) = (float)((float)(v30 * a4[6]) + (float)(v25 * v31)) + (float)(a1[18] * a4[10]);
  v33 = v29 - (float)((float)((float)(a4[3] * v31) + (float)(v30 * a4[7])) + (float)(a1[18] * a4[11]));
  a4[12] = v22 - (float)((float)((float)(v31 * *a4) + (float)(v30 * a4[4])) + (float)(a1[18] * a4[8]));
  a4[13] = v27 - v32;
  a4[15] = v33;
  a4[14] = v28 - *(float *)g4_m128_ptr<int32_t>(v16);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::lerp2Ha  (binary VA: 0x1a77840)
// Original: hkSweptTransformUtil::lerp2Ha
// ----------------------------------------------------------------------------
hkRotationf::Self * hkSweptTransformUtil::lerp2Ha(hkSweptTransformUtil::Self *self, const hkSweptTransformf::Self *a2, float a3, float *a4)
{
  typedef const hkSweptTransformf::Self *_g4_t_v5;
  typedef float _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  v6 = a3;
  v5 = a2;
  return hkSweptTransformUtil::lerp2Ha((float *)self, (float *)&v5, &v6, a4);
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::lerp2Rel  (binary VA: 0x1a778a0)
// Original: hkSweptTransformUtil::lerp2Rel
// ----------------------------------------------------------------------------
float * hkSweptTransformUtil::lerp2Rel(int a1, float *a2, float *a3)
{
  float v3; // xmm5_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  __m128i v6;
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm3_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  __m128i v14;
  __m128i v15;
  float v16; // xmm7_4
  float v17; // xmm4_4
  float v18; // xmm6_4
  float v20; // xmm5_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm6_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm5_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29;
  float v30; // xmm7_4
  float v31; // xmm4_4
  float v32; // xmm0_4
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v33)) > _g4_s0 ? (12u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v34)) > _g4_s1 ? (16u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v35)) > _g4_s2 ? (20u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v36)) > _g4_s3 ? (28u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v37)) > _g4_s4 ? (32u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v38)) > _g4_s5 ? (36u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v39)) > _g4_s6 ? (40u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v40)) > _g4_s7 ? (44u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v41)) > _g4_s8 ? (44u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v42)) > _g4_s9 ? (48u + sizeof(_g4_t_v42)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);

g4_m128_raw(v6) = *(unsigned int *)(a1 + 32);
  v36 = *(float *)g4_m128_ptr<int32_t>(v6);
  v34 = *(float *)(a1 + 40);
  v35 = *(float *)(a1 + 52);
  v38 = *(float *)(a1 + 60);
  v33 = *(float *)(a1 + 44);
  *(float *)g4_m128_ptr<int32_t>(v6) = *(float *)g4_m128_ptr<int32_t>(v6) + *(float *)(a1 + 48);
  v3 = *(float *)(a1 + 36) + v35;
  v39 = *(float *)(a1 + 56);
  v4 = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v6) * *(float *)g4_m128_ptr<int32_t>(v6)) + (float)(v3 * v3))
             + (float)((float)(v34 + v39) * (float)(v34 + v39)))
     + (float)((float)(v38 + v33) * (float)(v38 + v33));
  v5 = (float)((float)(1.0 + 0.5)
             - (float)((float)((float)(v4 * 0.5) * (float)(0.75 - (float)(0.125 * v4)))
                     * (float)(0.75 - (float)(0.125 * v4))))
     * (float)(0.75 - (float)(0.125 * v4));
  *(float *)g4_m128_ptr<int32_t>(v6) = *(float *)g4_m128_ptr<int32_t>(v6) * v5;
  v7 = v3 * v5;
  v8 = (float)(v34 + v39) * v5;
  v9 = (float)(v38 + v33) * v5;
  v10 = *a2 + *a2;
  if ( *a2 < 0.5 )
  {
    *(float *)g4_m128_ptr<int32_t>(v6) = *(float *)g4_m128_ptr<int32_t>(v6) - v36;
    v14 = v6;
    *(float *)g4_m128_ptr<int32_t>(v14) = (float)(*(float *)g4_m128_ptr<int32_t>(v6) * v10) + v36;
    v12 = (float)((float)(v7 - *(float *)(a1 + 36)) * v10) + *(float *)(a1 + 36);
    v13 = (float)((float)(v8 - v34) * v10) + v34;
    v40 = (float)(v10 * (float)(v9 - v33)) + v33;
  }
  else
  {
    v11 = v10 - 1.0;
    *(float *)&v37 = (float)(*(float *)(a1 + 48) - *(float *)g4_m128_ptr<int32_t>(v6)) * v11;
    v12 = (float)((float)(v35 - v7) * v11) + v7;
    v13 = (float)((float)(v39 - v8) * v11) + v8;
g4_m128_raw(v14) = v37;
    *(float *)g4_m128_ptr<int32_t>(v14) = *(float *)&v37 + *(float *)g4_m128_ptr<int32_t>(v6);
    v40 = v9 + (float)(v11 * (float)(v38 - v9));
  }
  v15 = v14;
  *(float *)g4_m128_ptr<int32_t>(v15) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14))
                                          + (float)(v12 * v12))
                                  + (float)(v13 * v13))
                          + (float)(v40 * v40);
  v16 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v15);
g4_m128_lane<int32_t>(v15, 0) = ((_mm_cvtsi128_si32(v15) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v15) >> 1));
  v17 = (float)(*(float *)g4_m128_ptr<int32_t>(v15) * 1.5)
      - (float)((float)(v16 * *(float *)g4_m128_ptr<int32_t>(v15)) * (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)g4_m128_ptr<int32_t>(v15)));
  *(float *)g4_m128_ptr<int32_t>(v15) = (float)(v17 * 1.5) - (float)((float)(v16 * v17) * (float)(v17 * v17));
  v18 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v15))
      - (float)((float)(v16 * *(float *)g4_m128_ptr<int32_t>(v15)) * (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)g4_m128_ptr<int32_t>(v15)));
  v42[0] = *(float *)g4_m128_ptr<int32_t>(v14) * v18;
  v42[1] = v12 * v18;
  v42[2] = v13 * v18;
  v42[3] = v18 * v40;
  hkRotationf::set((hkRotationf::Self *)a3, (const hkQuaternionf::Self *)v42);
  v20 = (float)(*(float *)(a1 + 20) - *(float *)(a1 + 4)) * *a2;
  v21 = (float)((float)(*(float *)(a1 + 16) - *(float *)a1) * *a2) + *(float *)a1;
  v22 = (float)(*(float *)(a1 + 24) - *(float *)(a1 + 8)) * *a2;
  v23 = a3[1];
  v24 = a3[2];
  v25 = (float)(*(float *)(a1 + 28) - *(float *)(a1 + 12)) * *a2;
  a3[12] = v21;
  v26 = v20 + *(float *)(a1 + 4);
  a3[13] = v26;
  v27 = v22 + *(float *)(a1 + 8);
  a3[14] = v27;
  v28 = v25 + *(float *)(a1 + 12);
  a3[15] = v28;
  v29 = *(float *)(a1 + 68);
  v30 = *(float *)(a1 + 64);
  v41 = (float)((float)(v29 * a3[5]) + (float)(v23 * v30)) + (float)(*(float *)(a1 + 72) * a3[9]);
  v31 = (float)((float)(v24 * v30) + (float)(v29 * a3[6])) + (float)(*(float *)(a1 + 72) * a3[10]);
  v32 = v28 - (float)((float)((float)(a3[3] * v30) + (float)(v29 * a3[7])) + (float)(*(float *)(a1 + 72) * a3[11]));
  a3[12] = v21 - (float)((float)((float)(v30 * *a3) + (float)(v29 * a3[4])) + (float)(*(float *)(a1 + 72) * a3[8]));
  a3[14] = v27 - v31;
  a3[15] = v32;
  a3[13] = v26 - v41;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::lerp2Rel  (binary VA: 0x1a77cc0)
// Original: hkSweptTransformUtil::lerp2Rel
// ----------------------------------------------------------------------------
hkRotationf::Self * hkSweptTransformUtil::lerp2Rel(hkSweptTransformUtil::Self *self, const hkSweptTransformf::Self *a2, float *a3)
{
  float v3; // xmm6_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  __m128i v7;
  float v8; // xmm5_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  __m128i v14;
  __m128i v15;
  float v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm6_4
  hkRotationf::Self *result;
  float v20; // xmm4_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm5_4
  float v24; // xmm6_4
  float v25; // xmm0_4
  float v26; // xmm4_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29;
  float v30; // xmm7_4
  float v31; // xmm5_4
  float v32; // xmm0_4
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v33)) > _g4_s0 ? (12u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v34)) > _g4_s1 ? (20u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v35)) > _g4_s2 ? (24u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v36)) > _g4_s3 ? (28u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v37)) > _g4_s4 ? (32u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v38)) > _g4_s5 ? (32u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v39)) > _g4_s6 ? (36u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v40)) > _g4_s7 ? (40u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v41)) > _g4_s8 ? (44u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v42)) > _g4_s9 ? (48u + sizeof(_g4_t_v42)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);

  v36 = *((float *)self + 8);
  v37 = *((float *)self + 9);
  v33 = *((float *)self + 11);
  v35 = *((float *)self + 12);
g4_m128_raw(v7) = LODWORD(v35);
  v34 = *((float *)self + 13);
  v40 = *((float *)self + 14);
  v39 = *((float *)self + 15);
  v3 = v40 + *((float *)self + 10);
  v4 = (float)((float)((float)((float)(v35 + v36) * (float)(v35 + v36))
                     + (float)((float)(v37 + v34) * (float)(v37 + v34)))
             + (float)(v3 * v3))
     + (float)((float)(v39 + v33) * (float)(v39 + v33));
  v5 = (float)((float)(1.0 + 0.5)
             - (float)((float)((float)(v4 * 0.5) * (float)(0.75 - (float)(0.125 * v4)))
                     * (float)(0.75 - (float)(0.125 * v4))))
     * (float)(0.75 - (float)(0.125 * v4));
  v6 = *(float *)&a2 + *(float *)&a2;
  *(float *)g4_m128_ptr<int32_t>(v7) = (float)(v35 + v36) * v5;
  v8 = (float)(v37 + v34) * v5;
  v9 = v3 * v5;
  v10 = (float)(v39 + v33) * v5;
  if ( *(float *)&a2 < 0.5 )
  {
    v14 = v7;
    v12 = (float)((float)(v8 - v37) * v6) + v37;
    v13 = (float)((float)(v9 - *((float *)self + 10)) * v6) + *((float *)self + 10);
    *(float *)g4_m128_ptr<int32_t>(v14) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v7) - v36) * v6) + v36;
    v41 = (float)(v6 * (float)(v10 - v33)) + v33;
  }
  else
  {
    v11 = v6 - 1.0;
    *(float *)&v38 = (float)(v35 - *(float *)g4_m128_ptr<int32_t>(v7)) * v11;
    v12 = (float)((float)(v34 - v8) * v11) + v8;
    v13 = (float)((float)(v40 - v9) * v11) + v9;
g4_m128_raw(v14) = v38;
    *(float *)g4_m128_ptr<int32_t>(v14) = *(float *)&v38 + *(float *)g4_m128_ptr<int32_t>(v7);
    v41 = v10 + (float)(v11 * (float)(v39 - v10));
  }
  v15 = v14;
  *(float *)g4_m128_ptr<int32_t>(v15) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v14) * *(float *)g4_m128_ptr<int32_t>(v14))
                                          + (float)(v12 * v12))
                                  + (float)(v13 * v13))
                          + (float)(v41 * v41);
  v16 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v15);
g4_m128_lane<int32_t>(v15, 0) = ((_mm_cvtsi128_si32(v15) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v15) >> 1));
  v17 = (float)(*(float *)g4_m128_ptr<int32_t>(v15) * 1.5)
      - (float)((float)(v16 * *(float *)g4_m128_ptr<int32_t>(v15)) * (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)g4_m128_ptr<int32_t>(v15)));
  *(float *)g4_m128_ptr<int32_t>(v15) = (float)(v17 * 1.5) - (float)((float)(v16 * v17) * (float)(v17 * v17));
  v18 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v15))
      - (float)((float)(v16 * *(float *)g4_m128_ptr<int32_t>(v15)) * (float)(*(float *)g4_m128_ptr<int32_t>(v15) * *(float *)g4_m128_ptr<int32_t>(v15)));
  v42[0] = *(float *)g4_m128_ptr<int32_t>(v14) * v18;
  v42[1] = v12 * v18;
  v42[2] = v13 * v18;
  v42[3] = v18 * v41;
  result = hkRotationf::set((hkRotationf::Self *)a3, (const hkQuaternionf::Self *)v42);
  v20 = (float)(*((float *)self + 5) - *((float *)self + 1)) * *(float *)&a2;
  v21 = (float)(*((float *)self + 6) - *((float *)self + 2)) * *(float *)&a2;
  v22 = (float)((float)(*((float *)self + 4) - *(float *)self) * *(float *)&a2) + *(float *)self;
  v23 = a3[1];
  v24 = a3[2];
  v25 = (float)(*((float *)self + 7) - *((float *)self + 3)) * *(float *)&a2;
  a3[12] = v22;
  v26 = v20 + *((float *)self + 1);
  a3[13] = v26;
  v27 = v21 + *((float *)self + 2);
  a3[14] = v27;
  v28 = v25 + *((float *)self + 3);
  a3[15] = v28;
  v29 = *((float *)self + 17);
  v30 = *((float *)self + 16);
  v31 = (float)((float)(v23 * v30) + (float)(v29 * a3[5])) + (float)(*((float *)self + 18) * a3[9]);
  *(float *)g4_m128_ptr<int32_t>(v15) = (float)((float)(v29 * a3[6]) + (float)(v24 * v30)) + (float)(*((float *)self + 18) * a3[10]);
  v32 = v28 - (float)((float)((float)(a3[3] * v30) + (float)(v29 * a3[7])) + (float)(*((float *)self + 18) * a3[11]));
  a3[12] = v22 - (float)((float)((float)(v30 * *a3) + (float)(v29 * a3[4])) + (float)(*((float *)self + 18) * a3[8]));
  a3[15] = v32;
  a3[14] = v27 - *(float *)g4_m128_ptr<int32_t>(v15);
  a3[13] = v26 - v31;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::backStepMotionState  (binary VA: 0x1a780e0)
// Original: hkSweptTransformUtil::backStepMotionState
// ----------------------------------------------------------------------------
hkRotationf::Self * hkSweptTransformUtil::backStepMotionState(unsigned int *a1, int a2)
{
  float v2; // xmm5_4
  float v3; // xmm1_4
  float v4; // xmm5_4
  __m128i v5;
  float v6; // xmm1_4
  float v7; // xmm0_4
  __m128 m128i_i128;
  float v9; // xmm1_4
  float v10; // xmm5_4
  __m128 v11;
  __m128 v12;
  float v13; // xmm1_4
  __m128 v14;
  __m128 v15;
  __m128 v16;
  __m128i v17;
  __m128 v18;
  float v19; // xmm0_4
  __m128i v20;
  float v21; // xmm4_4
  int v22; // xmm3_4
  int v23;
  float v24; // xmm3_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm5_4
  int v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm5_4
  float v33; // xmm1_4
  float v34; // xmm3_4
  float v35; // xmm0_4
  float v36; // xmm4_4
  float v37; // xmm0_4
  float v38; // xmm7_4
  hkRotationf::Self *result;
  float v40; // xmm3_4
  float v41; // xmm5_4
  float v42; // xmm4_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm4_4
  float v46; // xmm3_4
  float v47; // xmm1_4
  float v48; // xmm3_4
  __m128i v49;
  typedef float _g4_t_v50;
  typedef int32_t _g4_t_v51;
  typedef float _g4_t_v52;
  typedef float _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef double _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef __m128 _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef float _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v50)) > _g4_s0 ? (0u + sizeof(_g4_t_v50)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v51)) > _g4_s1 ? (0u + sizeof(_g4_t_v51)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v52)) > _g4_s2 ? (4u + sizeof(_g4_t_v52)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v53)) > _g4_s3 ? (4u + sizeof(_g4_t_v53)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v54)) > _g4_s4 ? (8u + sizeof(_g4_t_v54)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v55)) > _g4_s5 ? (12u + sizeof(_g4_t_v55)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v56)) > _g4_s6 ? (16u + sizeof(_g4_t_v56)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v57)) > _g4_s7 ? (24u + sizeof(_g4_t_v57)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v58)) > _g4_s8 ? (28u + sizeof(_g4_t_v58)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v59)) > _g4_s9 ? (32u + sizeof(_g4_t_v59)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v60)) > _g4_s10 ? (48u + sizeof(_g4_t_v60)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v61)) > _g4_s11 ? (52u + sizeof(_g4_t_v61)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v62)) > _g4_s12 ? (56u + sizeof(_g4_t_v62)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v63)) > _g4_s13 ? (60u + sizeof(_g4_t_v63)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 0u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 0u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 48u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 56u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);

  v54 = *(float *)(a2 + 92);
g4_m128_raw(v5) = *a1;
  *(float *)g4_m128_ptr<int32_t>(v5) = *(float *)g4_m128_ptr<int32_t>(v5) - *(float *)(a2 + 76);
  v50 = *(float *)(a2 + 96);
  LODWORD(v56) = *(uint32_t *)(a2 + 100);
g4_m128_raw(v11) = *(unsigned int *)(a2 + 104);
  v52 =g4_m128_lane<float>(v11, 0);
  v2 = *(float *)(a2 + 116);
  v3 = *(float *)(a2 + 108);
  v58 = *(unsigned int *)(a2 + 124);
  v62 = v3;
  v55 = *(float *)(a2 + 112);
  *(float *)&v57 = v2;
  v4 = v2 + *(float *)&v56;
  v60 = *(unsigned int *)(a2 + 120);
g4_m128_lane<float>(v11, 0) =g4_m128_lane<float>(v11, 0) + *(float *)&v60;
g4_m128_lane<int32_t>(v59, 0) = 1065353216;
  *(float *)g4_m128_ptr<int32_t>(v5) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v5) * v54, 0.00000011920929f);
  *(float *)&v63 = v3 + *(float *)&v58;
  v6 = (float)((float)((float)((float)(v55 + v50) * (float)(v55 + v50)) + (float)(v4 * v4))
             + (float)(g4_m128_lane<float>(v11, 0) *g4_m128_lane<float>(v11, 0)))
     + (float)(*(float *)&v63 * *(float *)&v63);
g4_m128_raw(v12) = v63;
  v7 = (float)((float)(1.0 + 0.5)
             - (float)((float)((float)(v6 * 0.5) * (float)(0.75 - (float)(0.125 * v6)))
                     * (float)(0.75 - (float)(0.125 * v6))))
     * (float)(0.75 - (float)(0.125 * v6));
  m128i_i128 =g4_m128_raw(G4_BITCAST<__m128>(v5));
g4_m128_lane<float>(m128i_i128, 0) = *(float *)g4_m128_ptr<int32_t>(v5) + *(float *)g4_m128_ptr<int32_t>(v5);
  v9 = (float)(v55 + v50) * v7;
  v10 = v4 * v7;
g4_m128_lane<float>(v11, 0) =g4_m128_lane<float>(v11, 0) * v7;
g4_m128_lane<float>(v12, 0) = *(float *)&v63 * v7;
  *(float *)&v61 = v9;
  *(float *)(a2 + 112) = v9;
  *(float *)(a2 + 116) = v10;
  *(uint32_t *)(a2 + 120) =g4_m128_lane<int32_t>(v11, 0);
  *(uint32_t *)(a2 + 124) =g4_m128_lane<int32_t>(v12, 0);
  if ( *(float *)g4_m128_ptr<int32_t>(v5) < 0.5 )
  {
    v48 = (float)(v9 - v50) *g4_m128_lane<float>(m128i_i128, 0);
    v19 = (float)((float)(v10 - *(float *)&v56) *g4_m128_lane<float>(m128i_i128, 0)) + *(float *)&v56;
    v13 = (float)((float)(g4_m128_lane<float>(v11, 0) - v52) *g4_m128_lane<float>(m128i_i128, 0)) + v52;
g4_m128_raw(v49) = LODWORD(v50);
    *(float *)g4_m128_ptr<int32_t>(v49) = v50 + v48;
    v62 = (float)(g4_m128_lane<float>(m128i_i128, 0) * (float)(g4_m128_lane<float>(v12, 0) - v62)) + v62;
    *(float *)&v63 = v50 + v48;
    v17 = v49;
  }
  else
  {
    v51 =g4_m128_lane<int32_t>(v5, 0);
    *(float *)&v63 = (float)(v55 - *(float *)&v61) * (float)(g4_m128_lane<float>(m128i_i128, 0) -g4_m128_lane<float>(v59, 0));
    v13 = (float)((float)(*(float *)&v60 -g4_m128_lane<float>(v11, 0)) * (float)(g4_m128_lane<float>(m128i_i128, 0) -g4_m128_lane<float>(v59, 0)))
        +g4_m128_lane<float>(v11, 0);
    v53 = (float)(*(float *)&v57 - v10) * (float)(g4_m128_lane<float>(m128i_i128, 0) -g4_m128_lane<float>(v59, 0));
    v62 = (float)(g4_m128_lane<float>(m128i_i128, 0) -g4_m128_lane<float>(v59, 0)) * (float)(*(float *)&v58 -g4_m128_lane<float>(v12, 0));
    _mm_storel_ps(&v56, _mm_unpacklo_ps(v11, v12));
    v14 = _mm_loadh_ps(&v56);
    v59 = _mm_sub_ps(
            _mm_shuffle_ps(m128i_i128, m128i_i128, 0),
            _mm_shuffle_ps(g4_to_m128(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v59), 0)),g4_to_m128(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v59), 0)), 0));
    v62 =g4_m128_lane<float>(v12, 0) + v62;
g4_m128_raw(v17) = v61;
g4_m128_lane<uint64_t>(v15, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v55)), G4_BITCAST<__m128>(v57)), 0);
g4_m128_lane<uint64_t>(v15, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v60), G4_BITCAST<__m128>(v58)), 0);
    v16 = _mm_sub_ps(v15, v14);
g4_m128_raw(v5) = (unsigned int)v51;
    *(float *)g4_m128_ptr<int32_t>(v17) = *(float *)&v61 + *(float *)&v63;
    *(float *)&v63 = *(float *)&v61 + *(float *)&v63;
    v18 = _mm_add_ps(v14, _mm_mul_ps(v16, v59));
    v19 = v53 + v10;
    *(__m128 *)(a2 + 112) = v18;
  }
  v20 = v17;
  *(float *)g4_m128_ptr<int32_t>(v20) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v17) * *(float *)g4_m128_ptr<int32_t>(v17))
                                          + (float)(v19 * v19))
                                  + (float)(v13 * v13))
                          + (float)(v62 * v62);
  v21 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v20);
  v22 = ((_mm_cvtsi128_si32(v20) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v20) >> 1));
  v23 = _mm_cvtsi128_si32(v5);
  v24 = (float)(*(float *)&v22 * 1.5)
      - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * *(float *)&v22)
              * (float)(*(float *)&v22 * *(float *)&v22));
  *(float *)g4_m128_ptr<int32_t>(v20) = (float)(v24 * 1.5)
                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v20)) * v24) * (float)(v24 * v24));
  v25 = *(float *)(a2 + 68);
  v26 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v20))
      - (float)((float)(v21 * *(float *)g4_m128_ptr<int32_t>(v20)) * (float)(*(float *)g4_m128_ptr<int32_t>(v20) * *(float *)g4_m128_ptr<int32_t>(v20)));
  v27 = v19 * v26;
  v28 = v13 * v26;
  *(float *)g4_m128_ptr<int32_t>(v20) = *(float *)&v63 * v26;
  v29 = v26 * v62;
  *(float *)(a2 + 116) = v27;
  *(float *)(a2 + 120) = v28;
  v30 = (2130706432 - v23) & ((v23 ^ (v23 + 2139095040)) >> 31);
  *(float *)(a2 + 124) = v29;
  *(uint32_t *)(a2 + 112) =g4_m128_lane<int32_t>(v20, 0);
  v31 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v5) * *(float *)&v30)) * *(float *)&v30;
  v32 = *(float *)(a2 + 72);
  v33 = *(float *)(a2 + 84);
  *(float *)(a2 + 80) = (float)((float)(*(float *)(a2 + 80) - *(float *)(a2 + 64)) * *(float *)g4_m128_ptr<int32_t>(v5))
                      + *(float *)(a2 + 64);
  v34 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v5) * v31)) * v31;
  v35 = (float)((float)(*(float *)(a2 + 88) - v32) * *(float *)g4_m128_ptr<int32_t>(v5)) + v32;
  *(float *)(a2 + 84) = (float)((float)(v33 - v25) * *(float *)g4_m128_ptr<int32_t>(v5)) + v25;
  *(float *)(a2 + 88) = v35;
  *(float *)(a2 + 144) = *(float *)(a2 + 144) * *(float *)g4_m128_ptr<int32_t>(v5);
  *(float *)(a2 + 148) = *(float *)(a2 + 148) * *(float *)g4_m128_ptr<int32_t>(v5);
  v36 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v5) * v34)) * v34) * v54;
  v37 = *(float *)(a2 + 152) * *(float *)g4_m128_ptr<int32_t>(v5);
  v38 = *(float *)g4_m128_ptr<int32_t>(v5) * *(float *)(a2 + 156);
  *(float *)(a2 + 92) = v36;
  *(float *)(a2 + 152) = v37;
  *(float *)(a2 + 156) = v38;
  result = hkRotationf::set((hkRotationf::Self *)a2, (const hkQuaternionf::Self *)(a2 + 112));
  v40 = *(float *)(a2 + 128);
  v41 = *(float *)(a2 + 132);
  v42 = *(float *)(a2 + 136);
  *(float *)g4_m128_ptr<int32_t>(v20) = (float)((float)(*(float *)(a2 + 4) * v40) + (float)(*(float *)(a2 + 20) * v41))
                          + (float)(*(float *)(a2 + 36) * v42);
  v43 = (float)((float)(*(float *)(a2 + 8) * v40) + (float)(*(float *)(a2 + 24) * v41))
      + (float)(*(float *)(a2 + 40) * v42);
  v44 = (float)((float)(*(float *)(a2 + 12) * v40) + (float)(*(float *)(a2 + 28) * v41))
      + (float)(*(float *)(a2 + 44) * v42);
  v45 = *(float *)(a2 + 80)
      - (float)((float)((float)(v40 * *(float *)a2) + (float)(v41 * *(float *)(a2 + 16)))
              + (float)(v42 * *(float *)(a2 + 32)));
  v46 = *(float *)(a2 + 84) - *(float *)g4_m128_ptr<int32_t>(v20);
  *(float *)g4_m128_ptr<int32_t>(v20) = *(float *)(a2 + 88) - v43;
  v47 = *(float *)(a2 + 92) - v44;
  *(float *)(a2 + 48) = v45;
  *(float *)(a2 + 52) = v46;
  *(uint32_t *)(a2 + 56) =g4_m128_lane<int32_t>(v20, 0);
  *(float *)(a2 + 60) = v47;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::backStepMotionState  (binary VA: 0x1a78690)
// Original: hkSweptTransformUtil::backStepMotionState
// ----------------------------------------------------------------------------
hkRotationf::Self * hkSweptTransformUtil::backStepMotionState(hkSweptTransformUtil::Self *self, int a2)
{
  typedef hkSweptTransformUtil::Self *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);

  v3 = self;
  return hkSweptTransformUtil::backStepMotionState((unsigned int *)&v3, a2);
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::freezeMotionState  (binary VA: 0x1a786d0)
// Original: hkSweptTransformUtil::freezeMotionState
// ----------------------------------------------------------------------------
hkRotationf::Self * hkSweptTransformUtil::freezeMotionState(unsigned int *a1, int a2)
{
  float v2; // xmm5_4
  __m128i v3;
  unsigned int v4;
  __m128 v5;
  float v6; // xmm1_4
  float v7; // xmm0_4
  __m128 v8;
  float v9; // xmm1_4
  float v10; // xmm6_4
  __m128 v11;
  __m128 v12;
  float v13; // xmm1_4
  __m128 v14;
  float v15; // xmm4_4
  __m128 v16;
  __m128 v17;
  __m128 v18;
  float v19; // xmm0_4
  __m128i v20;
  float v21; // xmm5_4
  __m128i v22;
  __m128i v23;
  float v24; // xmm4_4
  int v25;
  int v26;
  float v27; // xmm6_4
  float v28; // xmm2_4
  float v29; // xmm5_4
  float v30; // xmm4_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm5_4
  float v34; // xmm1_4
  float v35; // xmm5_4
  float v36; // xmm2_4
  float v37; // xmm0_4
  int v38;
  hkRotationf::Self *result;
  float v40; // xmm5_4
  float v41; // xmm4_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm4_4
  float v46; // xmm2_4
  float v47; // xmm1_4
  float v48; // xmm5_4
  __m128i v49;
  typedef float _g4_t_v50;
  typedef int32_t _g4_t_v51;
  typedef double _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef unsigned int _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef __m128 _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v50)) > _g4_s0 ? (12u + sizeof(_g4_t_v50)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v51)) > _g4_s1 ? (12u + sizeof(_g4_t_v51)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v52)) > _g4_s2 ? (16u + sizeof(_g4_t_v52)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v53)) > _g4_s3 ? (24u + sizeof(_g4_t_v53)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v54)) > _g4_s4 ? (28u + sizeof(_g4_t_v54)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v55)) > _g4_s5 ? (32u + sizeof(_g4_t_v55)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v56)) > _g4_s6 ? (36u + sizeof(_g4_t_v56)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v57)) > _g4_s7 ? (40u + sizeof(_g4_t_v57)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v58)) > _g4_s8 ? (44u + sizeof(_g4_t_v58)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v59)) > _g4_s9 ? (48u + sizeof(_g4_t_v59)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v60)) > _g4_s10 ? (64u + sizeof(_g4_t_v60)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v61)) > _g4_s11 ? (68u + sizeof(_g4_t_v61)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v62)) > _g4_s12 ? (72u + sizeof(_g4_t_v62)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v63)) > _g4_s13 ? (76u + sizeof(_g4_t_v63)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 12u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 12u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 24u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 64u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 68u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 72u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 76u);

  v55 = *(float *)(a2 + 76);
  v2 = *(float *)(a2 + 112);
  v3 = _mm_cvtsi32_si128(*a1);
  *(float *)g4_m128_ptr<int32_t>(v3) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v3), v55);
  v54 = *(float *)(a2 + 92);
  *(float *)&v56 = v2;
  v4 = _mm_cvtsi128_si32(v3);
g4_m128_raw(v5) = (g4_int128_t)_mm_cvtsi32_si128(v4);
  v53 = *(unsigned int *)(a2 + 96);
  LODWORD(v52) = *(uint32_t *)(a2 + 100);
  v50 = *(float *)(a2 + 108);
  v60 = *(unsigned int *)(a2 + 116);
g4_m128_lane<float>(v5, 0) = (float)(g4_m128_lane<float>(v5, 0) - v55) * v54;
  v57 = *(unsigned int *)(a2 + 124);
  v62 = *(float *)(a2 + 104);
g4_m128_lane<int32_t>(v59, 0) = 1065353216;
  v58 = *(unsigned int *)(a2 + 120);
g4_m128_raw(v11) = v58;
  v63 = v50 + *(float *)&v57;
  v6 = (float)((float)((float)((float)(v2 + *(float *)&v53) * (float)(v2 + *(float *)&v53))
                     + (float)((float)(*(float *)&v60 + *(float *)&v52) * (float)(*(float *)&v60 + *(float *)&v52)))
             + (float)((float)(*(float *)&v58 + v62) * (float)(*(float *)&v58 + v62)))
     + (float)((float)(v50 + *(float *)&v57) * (float)(v50 + *(float *)&v57));
g4_m128_raw(v12) = COERCE_UNSIGNED_INT(v50 + *(float *)&v57);
  v7 = (float)((float)(1.0 + 0.5)
             - (float)((float)((float)(v6 * 0.5) * (float)(0.75 - (float)(0.125 * v6)))
                     * (float)(0.75 - (float)(0.125 * v6))))
     * (float)(0.75 - (float)(0.125 * v6));
  v8 = v5;
g4_m128_lane<float>(v8, 0) =g4_m128_lane<float>(v5, 0) +g4_m128_lane<float>(v5, 0);
  v9 = (float)(v2 + *(float *)&v53) * v7;
  v10 = (float)(*(float *)&v60 + *(float *)&v52) * v7;
g4_m128_lane<float>(v11, 0) = (float)(*(float *)&v58 + v62) * v7;
g4_m128_lane<float>(v12, 0) =g4_m128_lane<float>(v12, 0) * v7;
  *(float *)&v61 = v9;
  *(float *)(a2 + 112) = v9;
  *(float *)(a2 + 116) = v10;
  *(uint32_t *)(a2 + 120) =g4_m128_lane<int32_t>(v11, 0);
  *(uint32_t *)(a2 + 124) =g4_m128_lane<int32_t>(v12, 0);
  if (g4_m128_lane<float>(v5, 0) < 0.5 )
  {
    v48 = (float)(v9 - *(float *)&v53) *g4_m128_lane<float>(v8, 0);
    v19 = (float)((float)(v10 - *(float *)&v52) *g4_m128_lane<float>(v8, 0)) + *(float *)&v52;
    v13 = (float)((float)(g4_m128_lane<float>(v11, 0) - v62) *g4_m128_lane<float>(v8, 0)) + v62;
g4_m128_raw(v49) = v53;
    *(float *)g4_m128_ptr<int32_t>(v49) = *(float *)&v53 + v48;
    v62 = (float)(g4_m128_lane<float>(v8, 0) * (float)(g4_m128_lane<float>(v12, 0) - v50)) + v50;
    v63 = *(float *)&v53 + v48;
    v22 = v49;
    v21 = v62;
  }
  else
  {
    v51 =g4_m128_lane<int32_t>(v5, 0);
    v63 = (float)(*(float *)&v56 - *(float *)&v61) * (float)(g4_m128_lane<float>(v8, 0) -g4_m128_lane<float>(v59, 0));
    v13 = (float)((float)(*(float *)&v58 -g4_m128_lane<float>(v11, 0)) * (float)(g4_m128_lane<float>(v8, 0) -g4_m128_lane<float>(v59, 0)))
        +g4_m128_lane<float>(v11, 0);
    *(float *)&v53 = (float)(*(float *)&v60 - v10) * (float)(g4_m128_lane<float>(v8, 0) -g4_m128_lane<float>(v59, 0));
    v62 = (float)(g4_m128_lane<float>(v8, 0) -g4_m128_lane<float>(v59, 0)) * (float)(*(float *)&v57 -g4_m128_lane<float>(v12, 0));
    _mm_storel_ps(&v52, _mm_unpacklo_ps(v11, v12));
    v14 = _mm_loadh_ps(&v52);
    v15 =g4_m128_lane<float>(v12, 0) + v62;
    v59 = _mm_sub_ps(_mm_shuffle_ps(v8, v8, 0), _mm_shuffle_ps(g4_to_m128(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v59), 0)),g4_to_m128(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v59), 0)), 0));
    v62 = v15;
g4_m128_lane<uint64_t>(v5, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v56), G4_BITCAST<__m128>(v60)), 0);
g4_m128_lane<uint64_t>(v5, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(G4_BITCAST<__m128>(v58), G4_BITCAST<__m128>(v57)), 0);
    v16 = _mm_sub_ps(v5, v14);
g4_m128_lane<int32_t>(v5, 0) = v51;
    v17 = _mm_mul_ps(v16, v59);
    v18 = v14;
    v19 = *(float *)&v53 + v10;
g4_m128_raw(v20) = v61;
    *(float *)g4_m128_ptr<int32_t>(v20) = *(float *)&v61 + v63;
    *(__m128 *)(a2 + 112) = _mm_add_ps(v18, v17);
    v21 = v15;
    v63 = *(float *)g4_m128_ptr<int32_t>(v20);
    v22 = v20;
  }
  v23 = v22;
  *(uint32_t *)(a2 + 76) = v4;
  *(uint32_t *)(a2 + 92) = 0;
  *(float *)g4_m128_ptr<int32_t>(v23) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v22) * *(float *)g4_m128_ptr<int32_t>(v22))
                                          + (float)(v19 * v19))
                                  + (float)(v13 * v13))
                          + (float)(v21 * v21);
  v24 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v23);
  v25 = _mm_cvtsi128_si32(v23) >> 1;
  v26 = (_mm_cvtsi128_si32(v23) + 2139095040) >> 31;
  *(float *)g4_m128_ptr<int32_t>(v23) = (float)(COERCE_FLOAT(v26 & (1597463174 - v25)) * 1.5)
                          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v23))
                                          * COERCE_FLOAT(v26 & (1597463174 - v25)))
                                  * (float)(COERCE_FLOAT(v26 & (1597463174 - v25))
                                          * COERCE_FLOAT(v26 & (1597463174 - v25))));
  v27 = (float)(v24 * *(float *)g4_m128_ptr<int32_t>(v23)) * (float)(*(float *)g4_m128_ptr<int32_t>(v23) * *(float *)g4_m128_ptr<int32_t>(v23));
g4_m128_lane<int32_t>(v23, 0) = *(uint32_t *)(a2 + 72);
  v28 = (float)((float)((float)(COERCE_FLOAT(v26 & (1597463174 - v25)) * 1.5)
                      - (float)((float)(v24 * COERCE_FLOAT(v26 & (1597463174 - v25)))
                              * (float)(COERCE_FLOAT(v26 & (1597463174 - v25)) * COERCE_FLOAT(v26 & (1597463174 - v25)))))
              * 1.5)
      - v27;
  v29 = (float)(1.5 * v28) - (float)((float)(v24 * v28) * (float)(v28 * v28));
  v30 = *(float *)(a2 + 68);
  v31 = v13 * v29;
  *(float *)(a2 + 112) = v63 * v29;
  v32 = v19 * v29;
  v33 = v29 * v62;
  *(uint32_t *)(a2 + 96) = *(uint32_t *)(a2 + 112);
  *(float *)(a2 + 120) = v31;
  v34 = *(float *)(a2 + 84);
  *(float *)(a2 + 116) = v32;
  *(float *)(a2 + 124) = v33;
  v35 = *(float *)(a2 + 64);
  *(uint32_t *)(a2 + 100) = *(uint32_t *)(a2 + 116);
  v36 = *(float *)(a2 + 80);
  v37 = *(float *)(a2 + 88);
  *(uint32_t *)(a2 + 104) = *(uint32_t *)(a2 + 120);
  *(uint32_t *)(a2 + 108) = *(uint32_t *)(a2 + 124);
  *(float *)(a2 + 84) = (float)((float)(v34 - v30) *g4_m128_lane<float>(v5, 0)) + v30;
  *(float *)(a2 + 80) = (float)((float)(v36 - v35) *g4_m128_lane<float>(v5, 0)) + v35;
  v38 = *(uint32_t *)(a2 + 80);
  *(float *)(a2 + 88) = (float)((float)(v37 - *(float *)g4_m128_ptr<int32_t>(v23)) *g4_m128_lane<float>(v5, 0)) + *(float *)g4_m128_ptr<int32_t>(v23);
  *(uint32_t *)(a2 + 64) = v38;
  *(uint32_t *)(a2 + 68) = *(uint32_t *)(a2 + 84);
  *(uint32_t *)(a2 + 72) = *(uint32_t *)(a2 + 88);
  result = hkRotationf::set((hkRotationf::Self *)a2, (const hkQuaternionf::Self *)(a2 + 112));
g4_m128_lane<int32_t>(v23, 0) = *(uint32_t *)(a2 + 128);
  v40 = *(float *)(a2 + 132);
  v41 = *(float *)(a2 + 136);
  v42 = (float)((float)(*(float *)(a2 + 4) * *(float *)g4_m128_ptr<int32_t>(v23)) + (float)(*(float *)(a2 + 20) * v40))
      + (float)(*(float *)(a2 + 36) * v41);
  v43 = (float)((float)(*(float *)(a2 + 8) * *(float *)g4_m128_ptr<int32_t>(v23)) + (float)(*(float *)(a2 + 24) * v40))
      + (float)(*(float *)(a2 + 40) * v41);
  v44 = (float)((float)(*(float *)(a2 + 12) * *(float *)g4_m128_ptr<int32_t>(v23)) + (float)(*(float *)(a2 + 28) * v40))
      + (float)(*(float *)(a2 + 44) * v41);
  v45 = *(float *)(a2 + 80)
      - (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v23) * *(float *)a2) + (float)(v40 * *(float *)(a2 + 16)))
              + (float)(v41 * *(float *)(a2 + 32)));
  *(float *)g4_m128_ptr<int32_t>(v23) = *(float *)(a2 + 84) - v42;
  v46 = *(float *)(a2 + 88) - v43;
  v47 = *(float *)(a2 + 92) - v44;
  *(float *)(a2 + 48) = v45;
  *(uint32_t *)(a2 + 52) =g4_m128_lane<int32_t>(v23, 0);
  *(float *)(a2 + 56) = v46;
  *(float *)(a2 + 60) = v47;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::freezeMotionState  (binary VA: 0x1a78c30)
// Original: hkSweptTransformUtil::freezeMotionState
// ----------------------------------------------------------------------------
hkRotationf::Self * hkSweptTransformUtil::freezeMotionState(hkSweptTransformUtil::Self *self, int a2)
{
  typedef hkSweptTransformUtil::Self *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);

  v3 = self;
  return hkSweptTransformUtil::freezeMotionState((unsigned int *)&v3, a2);
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::setTimeInformation  (binary VA: 0x1a78c70)
// Original: hkSweptTransformUtil::setTimeInformation
// ----------------------------------------------------------------------------
int hkSweptTransformUtil::setTimeInformation(uint32_t *a1, uint32_t *a2, int a3)
{
  *(uint32_t *)(a3 + 76) = *a1;
  *(uint32_t *)(a3 + 92) = *a2;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::warpTo  (binary VA: 0x1a78c90)
// Original: hkSweptTransformUtil::warpTo
// ----------------------------------------------------------------------------
int hkSweptTransformUtil::warpTo(hkSweptTransformUtil::Self *self, const hkVector4f::Self *a2, const hkQuaternionf::Self *a3)
{
  float v3; // xmm3_4
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm4_4
  float v8; // xmm1_4
  int v9; // xmm6_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  int v13;
  float v14; // xmm1_4
  int result;

  *((g4_int128_t *)a3 + 9) = 0;
  *((uint32_t *)a3 + 24) = *(uint32_t *)a2;
  *((uint32_t *)a3 + 25) = *((uint32_t *)a2 + 1);
  *((uint32_t *)a3 + 26) = *((uint32_t *)a2 + 2);
  *((uint32_t *)a3 + 27) = *((uint32_t *)a2 + 3);
  *((uint32_t *)a3 + 28) = *(uint32_t *)a2;
  *((uint32_t *)a3 + 29) = *((uint32_t *)a2 + 1);
  *((uint32_t *)a3 + 30) = *((uint32_t *)a2 + 2);
  *((uint32_t *)a3 + 31) = *((uint32_t *)a2 + 3);
  hkRotationf::set(a3, a2);
  v3 = *((float *)a3 + 32);
  v4 = *((float *)a3 + 33);
  *((uint32_t *)a3 + 12) = *(uint32_t *)self;
  v5 = *((float *)a3 + 1);
  v6 = *((float *)a3 + 5);
  *((uint32_t *)a3 + 13) = *((uint32_t *)self + 1);
  *((uint32_t *)a3 + 14) = *((uint32_t *)self + 2);
  v7 = *((float *)a3 + 34);
  v8 = *((float *)a3 + 2);
  *((uint32_t *)a3 + 15) = *((uint32_t *)self + 3);
  v9 = *((uint32_t *)a3 + 19);
  v10 = (float)((float)(v5 * v3) + (float)(v6 * v4)) + (float)(*((float *)a3 + 9) * v7);
  v11 = (float)(v8 * v3) + (float)(*((float *)a3 + 6) * v4);
  v12 = *((float *)a3 + 10) * v7;
  *((float *)a3 + 16) = (float)((float)((float)(v3 * *(float *)a3) + (float)(v4 * *((float *)a3 + 4)))
                              + (float)(v7 * *((float *)a3 + 8)))
                      + *(float *)self;
  v13 = *((uint32_t *)a3 + 16);
  *((float *)a3 + 17) = v10 + *((float *)self + 1);
  v14 = (float)(v11 + v12) + *((float *)self + 2);
  *((uint32_t *)a3 + 20) = v13;
  *((uint32_t *)a3 + 21) = *((uint32_t *)a3 + 17);
  *((float *)a3 + 18) = v14;
  result = *((uint32_t *)a3 + 18);
  *((uint32_t *)a3 + 22) = result;
  *((uint32_t *)a3 + 19) = v9;
  *((uint32_t *)a3 + 23) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::warpTo  (binary VA: 0x1a78dd0)
// Original: hkSweptTransformUtil::warpTo
// ----------------------------------------------------------------------------
int hkSweptTransformUtil::warpTo(hkSweptTransformUtil::Self *self, const hkTransformf::Self *a2)
{
  int v3;
  int v4;
  float v5; // xmm3_4
  float v6; // xmm5_4
  float v7; // xmm4_4
  int v8; // xmm6_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  int v12;
  float v13; // xmm1_4
  int v14;
  int result;
  typedef uint32_t _g4_t_v16[2];
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);

  *((g4_int128_t *)a2 + 9) = 0;
  hkQuaternionf::set((hkQuaternionf::Self *)v16, self);
  v3 = v16[0];
  *(uint32_t *)a2 = *(uint32_t *)self;
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 1);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 2);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 3);
  *((uint32_t *)a2 + 4) = *((uint32_t *)self + 4);
  *((uint32_t *)a2 + 5) = *((uint32_t *)self + 5);
  *((uint32_t *)a2 + 6) = *((uint32_t *)self + 6);
  *((uint32_t *)a2 + 7) = *((uint32_t *)self + 7);
  *((uint32_t *)a2 + 8) = *((uint32_t *)self + 8);
  *((uint32_t *)a2 + 9) = *((uint32_t *)self + 9);
  *((uint32_t *)a2 + 10) = *((uint32_t *)self + 10);
  *((uint32_t *)a2 + 11) = *((uint32_t *)self + 11);
  *((uint32_t *)a2 + 12) = *((uint32_t *)self + 12);
  *((uint32_t *)a2 + 13) = *((uint32_t *)self + 13);
  *((uint32_t *)a2 + 14) = *((uint32_t *)self + 14);
  *((uint32_t *)a2 + 15) = *((uint32_t *)self + 15);
  *((uint32_t *)a2 + 24) = v3;
  v4 = v16[1];
  *((uint32_t *)a2 + 26) = v17;
  *((uint32_t *)a2 + 27) = v18;
  *((uint32_t *)a2 + 30) = v17;
  *((uint32_t *)a2 + 31) = v18;
  *((uint32_t *)a2 + 25) = v4;
  *((uint32_t *)a2 + 28) = v3;
  *((uint32_t *)a2 + 29) = v4;
  v5 = *((float *)a2 + 32);
  v6 = *((float *)a2 + 33);
  v7 = *((float *)a2 + 34);
  v8 = *((uint32_t *)a2 + 19);
  v9 = (float)((float)(*((float *)self + 1) * v5) + (float)(*((float *)self + 5) * v6))
     + (float)(*((float *)self + 9) * v7);
  v10 = (float)(*((float *)self + 2) * v5) + (float)(*((float *)self + 6) * v6);
  v11 = *((float *)self + 10) * v7;
  *((float *)a2 + 16) = (float)((float)((float)(v5 * *(float *)self) + (float)(v6 * *((float *)self + 4)))
                              + (float)(v7 * *((float *)self + 8)))
                      + *((float *)self + 12);
  v12 = *((uint32_t *)a2 + 16);
  *((float *)a2 + 17) = v9 + *((float *)self + 13);
  v13 = (float)(v10 + v11) + *((float *)self + 14);
  *((uint32_t *)a2 + 20) = v12;
  v14 = *((uint32_t *)a2 + 17);
  *((float *)a2 + 18) = v13;
  *((uint32_t *)a2 + 21) = v14;
  result = *((uint32_t *)a2 + 18);
  *((uint32_t *)a2 + 23) = 0;
  *((uint32_t *)a2 + 19) = v8;
  *((uint32_t *)a2 + 22) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::warpToPosition  (binary VA: 0x1a78f60)
// Original: hkSweptTransformUtil::warpToPosition
// ----------------------------------------------------------------------------
const hkVector4f::Self * hkSweptTransformUtil::warpToPosition(hkSweptTransformUtil::Self *self, const hkVector4f::Self *a2)
{
  float v3; // xmm3_4
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm4_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  int v11; // xmm6_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  int v15;
  int v16;

  *((g4_int128_t *)a2 + 9) = 0;
  v3 = *((float *)a2 + 32);
  v4 = *((float *)a2 + 33);
  v5 = *((float *)a2 + 1);
  v6 = *((float *)a2 + 5);
  *((uint32_t *)a2 + 12) = *(uint32_t *)self;
  *((uint32_t *)a2 + 13) = *((uint32_t *)self + 1);
  v7 = *((float *)a2 + 34);
  v8 = *((float *)a2 + 2);
  *((uint32_t *)a2 + 14) = *((uint32_t *)self + 2);
  v9 = (float)(v5 * v3) + (float)(v6 * v4);
  v10 = *((float *)a2 + 9) * v7;
  *((uint32_t *)a2 + 15) = *((uint32_t *)self + 3);
  v11 = *((uint32_t *)a2 + 19);
  v12 = v9 + v10;
  v13 = (float)(v8 * v3) + (float)(*((float *)a2 + 6) * v4);
  v14 = *((float *)a2 + 10) * v7;
  *((float *)a2 + 16) = (float)((float)((float)(v3 * *(float *)a2) + (float)(v4 * *((float *)a2 + 4)))
                              + (float)(v7 * *((float *)a2 + 8)))
                      + *(float *)self;
  *((float *)a2 + 17) = v12 + *((float *)self + 1);
  v15 = *((uint32_t *)a2 + 16);
  *((float *)a2 + 18) = (float)(v13 + v14) + *((float *)self + 2);
  *((uint32_t *)a2 + 20) = v15;
  v16 = *((uint32_t *)a2 + 17);
  *((uint32_t *)a2 + 23) = 0;
  *((uint32_t *)a2 + 19) = v11;
  *((uint32_t *)a2 + 21) = v16;
  *((uint32_t *)a2 + 22) = *((uint32_t *)a2 + 18);
  *((uint32_t *)a2 + 24) = *((uint32_t *)a2 + 28);
  *((uint32_t *)a2 + 25) = *((uint32_t *)a2 + 29);
  *((uint32_t *)a2 + 26) = *((uint32_t *)a2 + 30);
  *((uint32_t *)a2 + 27) = *((uint32_t *)a2 + 31);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::warpToRotation  (binary VA: 0x1a79060)
// Original: hkSweptTransformUtil::warpToRotation
// ----------------------------------------------------------------------------
int hkSweptTransformUtil::warpToRotation(hkSweptTransformUtil::Self *self, const hkQuaternionf::Self *a2)
{
  return hkSweptTransformUtil::warpTo((const hkQuaternionf::Self *)((char *)a2 + 48), self, a2);
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::keyframeMotionState  (binary VA: 0x1a790a0)
// Original: hkSweptTransformUtil::keyframeMotionState
// ----------------------------------------------------------------------------
hkRotationf::Self * hkSweptTransformUtil::keyframeMotionState(uint32_t *a1, uint32_t *a2, float *a3, int a4)
{
  int v4;
  float *v5;
  uint32_t *v6;
  uint32_t *v7;
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm7_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm5_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  float v24; // xmm0_4
  __m128i v25;
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm3_4
  hkRotationf::Self *result;
  float v30; // xmm3_4
  float v31; // xmm5_4
  float v32; // xmm4_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm4_4
  float v37; // xmm3_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm5_4
  float v41; // xmm6_4
  int v42;
  int v43;
  float v44; // xmm5_4
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v45)) > _g4_s0 ? (4u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v46)) > _g4_s1 ? (8u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v47)) > _g4_s2 ? (12u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v48)) > _g4_s3 ? (16u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v49)) > _g4_s4 ? (20u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v50)) > _g4_s5 ? (32u + sizeof(_g4_t_v50)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 4u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);

  v50 = (uint32_t *)(&a1);
  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  *(uint32_t *)(a4 + 64) = *(uint32_t *)(a4 + 80);
  *(uint32_t *)(v4 + 68) = *(uint32_t *)(v4 + 84);
  *(uint32_t *)(v4 + 72) = *(uint32_t *)(v4 + 88);
  *(uint32_t *)(v4 + 76) = *(uint32_t *)(v4 + 92);
  *(uint32_t *)(v4 + 96) = *(uint32_t *)(v4 + 112);
  *(uint32_t *)(v4 + 100) = *(uint32_t *)(v4 + 116);
  *(uint32_t *)(v4 + 104) = *(uint32_t *)(v4 + 120);
  *(uint32_t *)(v4 + 108) = *(uint32_t *)(v4 + 124);
  *(uint32_t *)(v4 + 80) = *v6;
  *(uint32_t *)(v4 + 84) = v6[1];
  *(uint32_t *)(v4 + 88) = v6[2];
  v8 = *(float *)(v4 + 96);
  *(uint32_t *)(v4 + 92) = v6[3];
  v9 = *(float *)(v4 + 100);
  v10 = *(float *)(v4 + 104);
  *(float *)(v4 + 112) = *v5;
  *(float *)(v4 + 116) = v5[1];
  *(float *)(v4 + 120) = v5[2];
  *(float *)(v4 + 124) = v5[3];
  v11 = *v5;
  v12 = v5[1];
  v13 = v5[2];
  v14 = v5[3];
  v15 = (float)((float)(v8 * *v5) + (float)(v9 * v12)) + (float)(v13 * v10);
  v16 = (float)((float)((float)(*(float *)(v4 + 100) * v13) - (float)(v12 * v10)) - (float)(*(float *)(v4 + 96) * v14))
      + (float)(*(float *)(v4 + 108) * *v5);
  v17 = *(float *)(v4 + 96) * v13;
  v18 = v13 * *(float *)(v4 + 108);
  v46 = v16;
  v19 = v11 * v10;
  v20 = v11 * *(float *)(v4 + 100);
  v21 = (float)(v19 - v17) - (float)(*(float *)(v4 + 100) * v14);
  v22 = *(float *)(v4 + 108) * v12;
  v23 = v12 * *(float *)(v4 + 96);
  v49 = (float)(v14 * *(float *)(v4 + 108)) + v15;
  v47 = v21 + v22;
  v48 = (float)((float)(v23 - v20) - (float)(v10 * v14)) + v18;
  hkQuaternionf::getAngleSr((hkQuaternionf::Self *)&v45, (int)(uintptr_t)(&v46));
g4_m128_raw(v25) = LODWORD(v46);
  v24 = v45;
  *(float *)g4_m128_ptr<int32_t>(v25) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v25) * *(float *)g4_m128_ptr<int32_t>(v25)) + (float)(v47 * v47))
                          + (float)(v48 * v48);
  if ( *(float *)g4_m128_ptr<int32_t>(v25) > 1.4210855e-14f )
  {
    v40 = 0.0;
    if ( *(float *)g4_m128_ptr<int32_t>(v25) > 0.0 )
    {
      v41 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v25);
      v42 = _mm_cvtsi128_si32(v25) >> 1;
      v43 = (_mm_cvtsi128_si32(v25) + 2139095040) >> 31;
      v44 = (float)(1.5 * COERCE_FLOAT(v43 & (1597463174 - v42)))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v25)) * COERCE_FLOAT(v43 & (1597463174 - v42)))
                  * (float)(COERCE_FLOAT(v43 & (1597463174 - v42)) * COERCE_FLOAT(v43 & (1597463174 - v42))));
      v40 = (float)(1.5 * (float)((float)(1.5 * v44) - (float)((float)(v41 * v44) * (float)(v44 * v44))))
          - (float)((float)(v41 * (float)((float)(1.5 * v44) - (float)((float)(v41 * v44) * (float)(v44 * v44))))
                  * (float)((float)((float)(1.5 * v44) - (float)((float)(v41 * v44) * (float)(v44 * v44)))
                          * (float)((float)(1.5 * v44) - (float)((float)(v41 * v44) * (float)(v44 * v44)))));
    }
    v28 = v46 * v40;
    v27 = v47 * v40;
    v26 = v48 * v40;
    if ( v49 < 0.0 )
    {
      v28 = -v28;
      v27 = -v27;
      v26 = -v26;
    }
  }
  else
  {
    v26 = 0.0;
    v27 = 0.0;
    v28 = 0.0;
  }
  *(float *)(v4 + 156) = v45;
  *(float *)(v4 + 144) = v28 * v24;
  *(float *)(v4 + 148) = v27 * v24;
  *(float *)(v4 + 152) = v26 * v24;
  *(uint32_t *)(v4 + 76) = *v7;
  *(uint32_t *)(v4 + 92) = v7[3];
  result = hkRotationf::set((hkRotationf::Self *)v4, (const hkQuaternionf::Self *)(v4 + 112));
  v30 = *(float *)(v4 + 128);
  v31 = *(float *)(v4 + 132);
  v32 = *(float *)(v4 + 136);
  v33 = (float)((float)(*(float *)(v4 + 4) * v30) + (float)(*(float *)(v4 + 20) * v31))
      + (float)(*(float *)(v4 + 36) * v32);
  v34 = (float)((float)(*(float *)(v4 + 8) * v30) + (float)(*(float *)(v4 + 24) * v31))
      + (float)(*(float *)(v4 + 40) * v32);
  v35 = (float)((float)(*(float *)(v4 + 12) * v30) + (float)(*(float *)(v4 + 28) * v31))
      + (float)(*(float *)(v4 + 44) * v32);
  v36 = *(float *)(v4 + 80)
      - (float)((float)((float)(v30 * *(float *)v4) + (float)(v31 * *(float *)(v4 + 16)))
              + (float)(v32 * *(float *)(v4 + 32)));
  v37 = *(float *)(v4 + 84) - v33;
  v38 = *(float *)(v4 + 88) - v34;
  v39 = *(float *)(v4 + 92) - v35;
  *(float *)(v4 + 48) = v36;
  *(float *)(v4 + 52) = v37;
  *(float *)(v4 + 56) = v38;
  *(float *)(v4 + 60) = v39;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformUtil::setCentreOfRotationLocal  (binary VA: 0x1a79460)
// Original: hkSweptTransformUtil::setCentreOfRotationLocal
// ----------------------------------------------------------------------------
const hkVector4f::Self * hkSweptTransformUtil::setCentreOfRotationLocal(hkSweptTransformUtil::Self *self, const hkVector4f::Self *a2)
{
  const hkVector4f::Self *result;
  float v3; // xmm3_4
  float v4; // xmm0_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm1_4

  result = a2;
  v3 = *((float *)self + 2);
  v4 = *(float *)self - *((float *)a2 + 32);
  v5 = *((float *)self + 1) - *((float *)a2 + 33);
  v6 = *(float *)a2;
  v7 = *((float *)a2 + 4);
  *((uint32_t *)a2 + 32) = *(uint32_t *)self;
  v8 = v3 - *((float *)a2 + 34);
  v9 = v7 * v5;
  *((uint32_t *)a2 + 33) = *((uint32_t *)self + 1);
  v10 = *((float *)a2 + 5) * v5;
  *((uint32_t *)a2 + 34) = *((uint32_t *)self + 2);
  v11 = v5 * *((float *)a2 + 6);
  v12 = (float)(v6 * v4) + v9;
  v13 = *((float *)a2 + 8) * v8;
  *((uint32_t *)a2 + 35) = *((uint32_t *)self + 3);
  v14 = v12 + v13;
  v15 = (float)((float)(*((float *)a2 + 1) * v4) + v10) + (float)(*((float *)a2 + 9) * v8);
  v16 = (float)((float)(v4 * *((float *)result + 2)) + v11) + (float)(v8 * *((float *)result + 10));
  v17 = *((float *)a2 + 16) + v14;
  v18 = v14 + *((float *)a2 + 20);
  *((float *)a2 + 16) = v17;
  v19 = *((float *)a2 + 17) + v15;
  *((float *)a2 + 20) = v18;
  v20 = v15 + *((float *)a2 + 21);
  *((float *)a2 + 17) = v19;
  *((float *)a2 + 18) = *((float *)a2 + 18) + v16;
  *((float *)a2 + 21) = v20;
  *((float *)a2 + 22) = v16 + *((float *)a2 + 22);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkRefVariant::Construct  (binary VA: 0x1a79560)
// Original: hkRefVariant::hkRefVariant
// ----------------------------------------------------------------------------
void hkRefVariant::Construct(hkRefVariant::Self *self, uint32_t *a2)
{
  int v2;
  int32_t v3; // kr00_4

  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v3 = a2[1];
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
    }
    while ( v3 != __sync_val_compare_and_swap(a2 + 1, v3, v2 | (uint16_t)(v3 + 1)) );
    *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  }
}

// ----------------------------------------------------------------------------
// Function: hkRefVariant::Construct  (binary VA: 0x1a795b0)
// Original: hkRefVariant::hkRefVariant
// ----------------------------------------------------------------------------
uint32_t * hkRefVariant::Construct(uint32_t *a1, int *a2)
{
  int v2;
  int v4;
  int32_t v5; // kr00_4

  v2 = *a2;
  if ( *a2 != 0 && *(uint16_t *)(v2 + 6) != 0 )
  {
    do
    {
      v5 = *(uint32_t *)(v2 + 4);
      HIWORD(v4) = HIWORD(v5);
      LOWORD(v4) = 0;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v5, v4 | (uint16_t)(v5 + 1)) );
    *a1 = v2;
    return a1;
  }
  else
  {
    *a1 = v2;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkRefVariant::set  (binary VA: 0x1a79600)
// Original: hkRefVariant::set
// ----------------------------------------------------------------------------
int hkRefVariant::set(hkRefVariant::Self *self, int32_t *a2)
{
  int32_t *v2;
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
      v10 = a2[1];
      HIWORD(v9) = HIWORD(v10);
      LOWORD(v9) = 0;
      result = __sync_val_compare_and_swap(a2 + 1, v10, v9 | (uint16_t)(v10 + 1));
    }
    while ( v10 != result );
  }
  v3 = *(uint32_t *)self;
  if ( *(uint32_t *)self == 0 || *(uint16_t *)(v3 + 6) == 0 )
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
    *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
LABEL_7:
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkRefVariant::getClass  (binary VA: 0x1a796a0)
// Original: hkRefVariant::getClass
// ----------------------------------------------------------------------------
int hkRefVariant::getClass(hkRefVariant::Self *self)
{
  if ( *(uint32_t *)self != 0 )
    return (*(int (**)(uint32_t, uint32_t))(*hkSingleton<hkVtableClassRegistry::Self>::s_instance + 28))(
             (uint32_t)(uintptr_t)(hkSingleton<hkVtableClassRegistry::Self>::s_instance),
             *(uint32_t *)self);
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: hkJobQueueHwSetup::Construct  (binary VA: 0x1a79780)
// Original: hkJobQueueHwSetup::hkJobQueueHwSetup
// ----------------------------------------------------------------------------
void hkJobQueueHwSetup::Construct(hkJobQueueHwSetup::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = 1;
  v1 = (int)(uintptr_t)(hkSingleton<hkHardwareInfo::Self>::s_instance);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  v2 = *(uint32_t *)(v1 + 8);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = v2;
  *((uint8_t *)self + 4) = 1;
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::Destroy  (binary VA: 0x1a797d0)
// Original: hkJobQueue::~hkJobQueue
// ----------------------------------------------------------------------------
void hkJobQueue::Destroy(pthread_mutex_t *self)
{
  pthread_mutex_t *mutex;
  int owner;
  int v3;
  uint32_t *address;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  int lock;
  int spins;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;

  mutex = self;
  owner = ((int32_t *)(self))[2];
  v18 = owner;
  if ( owner != 0 )
  {
    v3 = owner + 452;
    v16 = owner + 52;
    address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    do
    {
      v5 = *(uint32_t *)(v3 - 16);
      if ( v5 != 0 )
        (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(*address + 44) + 12))(
          *(uint32_t *)(*address + 44),
          *(uint32_t *)(v3 - 20),
          v5 << 7);
      v3 -= 20;
    }
    while ( v16 != v3 );
    mutex = self;
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*address + 44) + 12))(*(uint32_t *)(*address + 44), v18, 464);
  }
  v6 = 0;
  if ( G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (4))))[4] != 0 )
  {
    do
    {
      v7 = *(&G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (4)))) + v6);
      if ( v7 != 0 )
      {
        hkSemaphore::Destroy(*((hkSemaphore::Self **)&G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (4)))) + v6));
        v8 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v8 + 44) + 12))(*(uint32_t *)(*v8 + 44), v7, 20);
      }
      ++v6;
    }
    while ( v6 != 5 );
  }
  lock = G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (21))));
  G4_MUTEX_SPINS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (20)))) = 0;
  if ( lock >= 0 )
    (*(void (**)(uint32_t *, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (20)))),
      12 * lock);
  spins = G4_MUTEX_SPINS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (3))));
  G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (20)))) = 0;
  G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (21)))) = 0x80000000;
  v11 = spins - 1;
  if ( spins - 1 >= 0 )
  {
    v12 = G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (3)))) + 12 * spins;
    v13 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
    do
    {
      v14 = *(uint32_t *)(v12 - 4);
      *(uint32_t *)(v12 - 8) = 0;
      if ( v14 >= 0 )
      {
        v17 = v13;
        G4_VCALL<void>(v13, 20, *(uint32_t *)(v12 - 12), 4 * v14);
        v13 = v17;
      }
      --v11;
      *(uint32_t *)(v12 - 12) = 0;
      *(uint32_t *)(v12 - 4) = 0x80000000;
      v12 -= 12;
    }
    while ( v11 != -1 );
  }
  v15 = G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (4))));
  G4_MUTEX_SPINS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (3)))) = 0;
  if ( v15 >= 0 )
    (*(void (**)(uint32_t *, unsigned int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (3)))),
      12 * v15);
  G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (3)))) = 0;
  G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (4)))) = 0x80000000;
  if ( pthread_mutex_destroy(mutex) != 0 )
  {
    printf(
      "%s:%d:%s\n",
      "../../Common/Base/Thread/CriticalSection/Posix/hkPosixCriticalSection.inl",
      28,
      "~hkCriticalSection");
    perror("pthread_mutex_destroy(&m_mutex)");
    __builtin_debugtrap();
  }
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::updateJobQueryRules  (binary VA: 0x1a799f0)
// Original: hkJobQueue::updateJobQueryRules
// ----------------------------------------------------------------------------
void hkJobQueue::updateJobQueryRules(hkJobQueue::Self *self)
{
  int v1;
  hkJobQueue::Self *v2;
  int v3;
  int v4;
  int v5;
  bool v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  hkString::Self *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  uint8_t *v23;
  uint8_t *v24;
  int v25;
  char v26;
  int v27;
  int v28;
  int i;
  char v30;
  int v31;
  int v32;
  char v33;
  int v34;
  int v35;
  uint8_t *v36;
  uint8_t *v37;
  char v38;
  char *v39;
  char v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  uint32_t *v46;
  uint32_t *v47;
  hkSemaphore::Self *v48;
  uint32_t *v49;
  hkSemaphore::Self *v50;
  uint32_t *v51;
  hkSemaphore::Self *v52;
  uint32_t *v53;
  hkSemaphore::Self *v54;
  uint32_t *v55;
  hkSemaphore::Self *v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  uint32_t *address;
  int v64;
  size_t n;
  hkJobQueue::Self *thisa;

  v1 = 1;
  v2 = self;
  v3 = *((uint32_t *)self + 23);
  v4 = *((uint32_t *)self + 5);
  if ( v3 != 0 )
    v1 = *((uint32_t *)self + 23);
  v5 = 0;
  v62 = v1;
  v6 = *((uint8_t *)self + 76) == 0;
  v7 = *((uint32_t *)self + 125);
  *((uint32_t *)self + 14) = v7;
  if ( v6 )
    v5 = v4;
  *((uint32_t *)self + 6) = v5;
  v8 = v5 + v62;
  v9 = v5 + v62 + v7;
  *((uint32_t *)self + 7) = v5 + v62;
  *((uint32_t *)self + 8) = v9;
  *((uint32_t *)self + 9) = v9 + v4;
  if ( v5 >= v5 + v62 )
  {
    v21 = v3;
    v20 = v5;
  }
  else
  {
    v10 = v5;
    do
    {
      v57 = *((uint32_t *)self + 2) + 20 * v10 + 48;
      v11 = (uint32_t *)(*((uint32_t *)self + 2) + 20 * v10 + 52);
      v12 = *(uint32_t *)(*((uint32_t *)self + 2) + 20 * v10 + 56);
      if ( v12 <= 127 )
      {
        v13 = 2 * v12;
        v14 = v12 << 8;
        v60 = v13;
        if ( v13 <= 127 )
        {
          v14 = 0x4000;
          v60 = 128;
        }
        address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v15 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(
                            *(uint32_t *)(*address + 44),
                            v14);
        v16 = *(uint32_t *)(v57 + 4);
        if ( v15 != nullptr && v16 != 0 )
        {
          v17 = v11[4];
          if ( v17 != 0 )
          {
            v64 = v11[3];
            v18 = v11[2];
            if ( v64 > v18 )
            {
              hkString::memCpy(v15, (void *)((v18 << 7) + v16), v17 << 7);
            }
            else
            {
              n = (v11[1] - v18) << 7;
              hkString::memCpy(v15, (void *)((v18 << 7) + v16), n);
              hkString::memCpy((hkString::Self *)((char *)v15 + n), *(void **)(v57 + 4), v64 << 7);
            }
            v17 = v11[4];
            v16 = *(uint32_t *)(v57 + 4);
          }
          v11[2] = 0;
          v11[3] = v17;
        }
        v19 = v11[1];
        if ( v19 != 0 )
          (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*address + 44) + 12))(
            *(uint32_t *)(*address + 44),
            v16,
            v19 << 7);
        *(uint32_t *)(v57 + 4) = (uint32_t)(uintptr_t)(v15);
        v11[1] = v60;
        v8 = *((uint32_t *)self + 7);
      }
      ++v10;
    }
    while ( v10 < v8 );
    v2 = self;
    v20 = *((uint32_t *)self + 6);
    v9 = *((uint32_t *)self + 8);
    v21 = *((uint32_t *)self + 23);
  }
  *((uint32_t *)v2 + 15) = v20;
  *((uint32_t *)v2 + 16) = v9;
  if ( v21 == 0 && *((int *)v2 + 21) > 0 )
    memset((char *)v2 + 238, (char)v20, *((uint32_t *)v2 + 21));
  v22 = 0;
  if ( v62 > 0 )
  {
    while ( 1 )
    {
      v23 = (uint8_t *)((char *)v2 + 22 * v20 + 22 * v22 + 128);
      v24 = v23 + 1;
      *v23 = v22 + v20;
      if ( *((int *)v2 + 5) > 0 )
      {
        v25 = 0;
        do
        {
          ++v24;
          v26 = *((uint8_t *)v2 + 32) + v25++;
          *(v24 - 1) = v26;
          v27 = *((uint32_t *)v2 + 5);
        }
        while ( v27 > v25 );
        if ( *((uint32_t *)v2 + 18) == 0 )
        {
          v28 = 0;
          if ( v27 > 0 )
          {
            do
              *v24++ = v28++;
            while ( *((uint32_t *)v2 + 5) > v28 );
          }
        }
      }
      for ( i = 0; *((uint32_t *)v2 + 14) > i; *(v24 - 1) = v30 )
      {
        ++v24;
        v30 = *((uint8_t *)v2 + 28) + i++;
      }
      ++v22;
      *v24 = -1;
      if ( v22 == v62 )
        break;
      v20 = *((uint32_t *)v2 + 6);
    }
  }
  v58 = 0;
  if ( *((int *)v2 + 14) > 0 )
  {
    thisa = v2;
    v31 = 0;
    do
    {
      v32 = *((uint32_t *)thisa + 124) + 12 * v31;
      *((uint32_t *)v2 + 10) = *(uint32_t *)v32;
      *((uint8_t *)v2 + 44) = *(uint8_t *)(v32 + 4);
      v34 = v31 + *((uint32_t *)thisa + 7);
      v33 = v31 + *((uint8_t *)thisa + 28);
      *((uint8_t *)v2 + 45) = v33;
      v35 = *(uint32_t *)(v32 + 8);
      v61 = *((char *)thisa + v35 + 238);
      *((uint8_t *)thisa + v35 + 238) = v33;
      v36 = (uint8_t *)((char *)thisa + 22 * v34 + 128);
      *v36 = v33;
      v37 = v36 + 1;
      v38 = *((uint8_t *)thisa + 22 * v61 + 128);
      if ( v38 != -1 )
      {
        v39 = (char *)thisa + 22 * v61 + 129;
        do
        {
          if ( v38 != *((uint8_t *)v2 + 45) )
            *v37++ = v38;
          v38 = *v39++;
        }
        while ( v38 != -1 );
      }
      ++v58;
      *v37 = -1;
      v2 = (hkJobQueue::Self *)((char *)v2 + 8);
      v31 = v58;
    }
    while ( *((uint32_t *)thisa + 14) > v58 );
    v2 = thisa;
  }
  v40 = *((uint8_t *)v2 + 238);
  v41 = *((uint32_t *)v2 + 8);
  *((uint32_t *)v2 + 17) = v40;
  v42 = *((uint32_t *)v2 + 21);
  if ( v42 > 1
    && (v40 == *((uint8_t *)v2 + 239)
     || v42 > 2
     && (v40 == *((uint8_t *)v2 + 240)
      || v42 > 3
      && (v40 == *((uint8_t *)v2 + 241)
       || v42 > 4
       && (v40 == *((uint8_t *)v2 + 242)
        || v42 > 5
        && (v40 == *((uint8_t *)v2 + 243)
         || v42 > 6
         && (v40 == *((uint8_t *)v2 + 244)
          || v42 > 7
          && (v40 == *((uint8_t *)v2 + 245)
           || v42 > 8
           && (v40 == *((uint8_t *)v2 + 246)
            || v42 > 9
            && (v40 == *((uint8_t *)v2 + 247)
             || v42 > 10 && (v40 == *((uint8_t *)v2 + 248) || v42 > 11 && v40 == *((uint8_t *)v2 + 249))))))))))) )
  {
    *((uint8_t *)v2 + 238) = v41++;
  }
  if ( *((uint8_t *)v2 + 100) != 0 )
  {
    v43 = *((uint32_t *)v2 + 6);
    v44 = *((uint32_t *)v2 + 31);
    if ( v43 < v44 )
    {
      v59 = v41;
      do
      {
        v45 = *((uint32_t *)v2 + v43 + 26);
        if ( v45 != 0 )
        {
          hkSemaphore::Destroy(*((hkSemaphore::Self **)v2 + v43 + 26));
          v46 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
          (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v46 + 44) + 12))(*(uint32_t *)(*v46 + 44), v45, 20);
          v44 = *((uint32_t *)v2 + 31);
        }
        *((uint32_t *)v2 + v43++ + 26) = 0;
      }
      while ( v43 < v44 );
      v41 = v59;
    }
  }
  *((uint32_t *)v2 + 31) = v41;
  if ( v41 <= 0 )
    goto LABEL_89;
  *(uint16_t *)(*((uint32_t *)v2 + 2) + 42) = 0;
  if ( *((int *)v2 + 6) <= 0 )
  {
    v49 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v50 = (hkSemaphore::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v49 + 44) + 8))(*(uint32_t *)(*v49 + 44), 20);
    hkSemaphore::Construct(v50, 0, 1000, 0);
    *((uint32_t *)v2 + 26) = (uint32_t)(uintptr_t)(v50);
  }
  if ( *((int *)v2 + 31) <= 1 )
    goto LABEL_89;
  *(uint16_t *)(*((uint32_t *)v2 + 2) + 44) = 0;
  if ( *((int *)v2 + 6) <= 1 )
  {
    v47 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v48 = (hkSemaphore::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v47 + 44) + 8))(*(uint32_t *)(*v47 + 44), 20);
    hkSemaphore::Construct(v48, 0, 1000, 0);
    *((uint32_t *)v2 + 27) = (uint32_t)(uintptr_t)(v48);
  }
  if ( *((int *)v2 + 31) <= 2 )
    goto LABEL_89;
  *(uint16_t *)(*((uint32_t *)v2 + 2) + 46) = 0;
  if ( *((int *)v2 + 6) <= 2 )
  {
    v55 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v56 = (hkSemaphore::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v55 + 44) + 8))(*(uint32_t *)(*v55 + 44), 20);
    hkSemaphore::Construct(v56, 0, 1000, 0);
    *((uint32_t *)v2 + 28) = (uint32_t)(uintptr_t)(v56);
  }
  if ( *((int *)v2 + 31) <= 3 )
    goto LABEL_89;
  *(uint16_t *)(*((uint32_t *)v2 + 2) + 48) = 0;
  if ( *((int *)v2 + 6) <= 3 )
  {
    v53 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v54 = (hkSemaphore::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v53 + 44) + 8))(*(uint32_t *)(*v53 + 44), 20);
    hkSemaphore::Construct(v54, 0, 1000, 0);
    *((uint32_t *)v2 + 29) = (uint32_t)(uintptr_t)(v54);
  }
  if ( *((int *)v2 + 31) > 4 && (*(uint16_t *)(*((uint32_t *)v2 + 2) + 50) = 0, *((int *)v2 + 6) <= 4) )
  {
    v51 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v52 = (hkSemaphore::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v51 + 44) + 8))(*(uint32_t *)(*v51 + 44), 20);
    hkSemaphore::Construct(v52, 0, 1000, 0);
    *((uint32_t *)v2 + 30) = (uint32_t)(uintptr_t)(v52);
    *((uint8_t *)v2 + 100) = 1;
  }
  else
  {
LABEL_89:
    *((uint8_t *)v2 + 100) = 1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::registerJobWithCpuThread  (binary VA: 0x1a7a100)
// Original: hkJobQueue::registerJobWithCpuThread
// ----------------------------------------------------------------------------
void hkJobQueue::registerJobWithCpuThread(hkJobQueue::Self *a1, int a2, char a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  v4 = *((uint32_t *)a1 + 125);
  if ( v4 <= 0 )
  {
LABEL_9:
    if ( v4 == (*((uint32_t *)a1 + 126) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkJobQueue::Self *)((char *)a1 + 496),
        12,
        v9);
      v4 = *((uint32_t *)a1 + 125);
    }
    v7 = *((uint32_t *)a1 + 124);
    *((uint32_t *)a1 + 125) = v4 + 1;
    v8 = v7 + 12 * v4;
    *(uint8_t *)(v8 + 4) = a3;
    *(uint32_t *)v8 = a2;
    *(uint32_t *)(v8 + 8) = a4;
    hkJobQueue::updateJobQueryRules(a1);
  }
  else
  {
    v5 = 0;
    v6 = *((uint32_t *)a1 + 124);
    while ( *(uint32_t *)v6 != a2 || *(uint8_t *)(v6 + 4) != a3 || *(uint32_t *)(v6 + 8) != a4 )
    {
      ++v5;
      v6 += 12;
      if ( v5 == *((uint32_t *)a1 + 125) )
      {
        v4 = *((uint32_t *)a1 + 125);
        goto LABEL_9;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::Construct  (binary VA: 0x1a7a1f0)
// Original: hkJobQueue::hkJobQueue
// ----------------------------------------------------------------------------
void hkJobQueue::Construct(pthread_mutex_t *a1, int a2)
{
  uint32_t *address;
  uint8_t *v3;
  uint32_t *v4;
  int v5;
  int spins;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int *nusers;
  unsigned int *v12;
  int v13;
  uint32_t *v14;
  unsigned int *v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  int v23;
  pthread_mutexattr_t v24; // kr00_4
  int i;
  unsigned int *v26;
  int v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int j;
  pthread_mutex_t *v32;
  int v33;
  int v34;
  int savedregs;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef pthread_mutex_t *_g4_t_mutexa;
  typedef pthread_mutexattr_t *_g4_t_mutexattr;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef unsigned int _g4_t_v58;
  typedef unsigned int _g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef unsigned int *_g4_t_v62;
  typedef unsigned int *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef unsigned int *_g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef pthread_mutexattr_t _g4_t_attr;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef pthread_mutex_t **_g4_t_v75;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v35)) > _g4_s0 ? (12u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v36)) > _g4_s1 ? (16u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v37)) > _g4_s2 ? (20u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v38)) > _g4_s3 ? (24u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v39)) > _g4_s4 ? (28u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v40)) > _g4_s5 ? (32u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v41)) > _g4_s6 ? (32u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v42)) > _g4_s7 ? (36u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v43)) > _g4_s8 ? (36u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_mutex)) > _g4_s9 ? (40u + sizeof(_g4_t_mutex)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_mutexa)) > _g4_s10 ? (40u + sizeof(_g4_t_mutexa)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_mutexattr)) > _g4_s11 ? (44u + sizeof(_g4_t_mutexattr)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v47)) > _g4_s12 ? (48u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v48)) > _g4_s13 ? (52u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v49)) > _g4_s14 ? (52u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v50)) > _g4_s15 ? (56u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v51)) > _g4_s16 ? (60u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v52)) > _g4_s17 ? (60u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v53)) > _g4_s18 ? (60u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v54)) > _g4_s19 ? (64u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v55)) > _g4_s20 ? (64u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v56)) > _g4_s21 ? (64u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v57)) > _g4_s22 ? (68u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v58)) > _g4_s23 ? (68u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v59)) > _g4_s24 ? (68u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (68u + sizeof(_g4_t_v60)) > _g4_s25 ? (68u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v61)) > _g4_s26 ? (72u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v62)) > _g4_s27 ? (72u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v63)) > _g4_s28 ? (72u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v64)) > _g4_s29 ? (76u + sizeof(_g4_t_v64)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v65)) > _g4_s30 ? (76u + sizeof(_g4_t_v65)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v66)) > _g4_s31 ? (76u + sizeof(_g4_t_v66)) : _g4_s31,
    _g4_s33 = (76u + sizeof(_g4_t_v67)) > _g4_s32 ? (76u + sizeof(_g4_t_v67)) : _g4_s32,
    _g4_s34 = (80u + sizeof(_g4_t_v68)) > _g4_s33 ? (80u + sizeof(_g4_t_v68)) : _g4_s33,
    _g4_s35 = (84u + sizeof(_g4_t_attr)) > _g4_s34 ? (84u + sizeof(_g4_t_attr)) : _g4_s34,
    _g4_s36 = (88u + sizeof(_g4_t_v70)) > _g4_s35 ? (88u + sizeof(_g4_t_v70)) : _g4_s35,
    _g4_s37 = (92u + sizeof(_g4_t_v71)) > _g4_s36 ? (92u + sizeof(_g4_t_v71)) : _g4_s36,
    _g4_s38 = (96u + sizeof(_g4_t_v72)) > _g4_s37 ? (96u + sizeof(_g4_t_v72)) : _g4_s37,
    _g4_s39 = (100u + sizeof(_g4_t_v73)) > _g4_s38 ? (100u + sizeof(_g4_t_v73)) : _g4_s38,
    _g4_s40 = (104u + sizeof(_g4_t_v74)) > _g4_s39 ? (104u + sizeof(_g4_t_v74)) : _g4_s39,
    _g4_s41 = (108u + sizeof(_g4_t_v75)) > _g4_s40 ? (108u + sizeof(_g4_t_v75)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 40u);
  _g4_t_mutexa &mutexa = *reinterpret_cast<_g4_t_mutexa *>(_g4_sf + 40u);
  _g4_t_mutexattr &mutexattr = *reinterpret_cast<_g4_t_mutexattr *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 60u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 64u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 68u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 68u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 68u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 68u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 72u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 72u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 72u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 76u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 76u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 76u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 80u);
  _g4_t_attr &attr = *reinterpret_cast<_g4_t_attr *>(_g4_sf + 84u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 88u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 92u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 96u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 100u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 104u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 108u);

  v75 = &a1;
  mutex = a1;
  v42 = a2;
  ((int32_t *)(a1))[1] = 0;
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
  if ( pthread_mutex_init(mutex, &attr) != 0 )
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
  G4_MUTEX_SPINS(mutex) = *(uint32_t *)(v42 + 28);
  hkJobQueueHwSetup::Construct((hkJobQueueHwSetup::Self *)reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (3))));
  G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (20)))) = 0;
  G4_MUTEX_SPINS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (20)))) = 0;
  G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (21)))) = 0x80000000;
  G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutex) + (24 * (21)))) = 0;
  *_emutls_get_address(g4_emutls_v_hkThreadNumber) = 0;
  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v3 = (uint8_t *)(*(int (**)(uint32_t, int, int, int, int, int, int, int, int, pthread_mutex_t *, pthread_mutexattr_t *, int, int, int, int, int, int, int, int, int, pthread_mutexattr_t, int, int, int, int, int))(**(uint32_t **)(*address + 44) + 8))(
                  *(uint32_t *)(*address + 44),
                  464,
                  v35,
                  v36,
                  v37,
                  v38,
                  v39,
                  v40,
                  v42,
                  mutex,
                  &attr,
                  v47,
                  v48,
                  v50,
                  v51,
                  v54,
                  v57,
                  v61,
                  v64,
                  v68,
                  attr,
                  v70,
                  v71,
                  v72,
                  v73,
                  v74);
  memset(v3, 0, 0x1D0u);
  v4 = (uint32_t *)(v3 + 52);
  do
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = 0;
    v4[4] = 0;
    v4 += 5;
  }
  while ( v4 != (uint32_t *)(v3 + 452) );
  ((int32_t *)(mutexa))[2] = (int)(uintptr_t)(v3);
  G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (4))))[4] = 0;
  v3[40] = 0;
  *(uint32_t *)(((int32_t *)(mutexa))[2] + 36) = 0;
  G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (3)))) = *(uint32_t *)v43;
  G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (3))))[4] = *(uint8_t *)(v43 + 4);
  G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (3)))) = *(uint32_t *)(v43 + 8);
  G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (3)))) = *(uint32_t *)(v43 + 12);
  v5 = *(uint32_t *)(v43 + 20);
  spins = G4_MUTEX_SPINS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (3))));
  v7 = v5;
  v41 = v5;
  if ( v5 > spins )
    v7 = G4_MUTEX_SPINS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (3))));
  v8 = G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (4)))) & 0x3FFFFFFF;
  v49 = v7;
  if ( v5 > v8 )
  {
    v9 = 2 * v8;
    savedregs = 12;
    v75 = (pthread_mutex_t **)&v68;
    if ( v9 < v5 )
      v9 = v5;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v75,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (3)))),
      v9,
      savedregs);
  }
  v10 = spins - v5;
  nusers = ((unsigned int *)(intptr_t)G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (3)))));
  v12 = &nusers[3 * v5];
  v13 = v10 - 1;
  if ( v10 - 1 >= 0 )
  {
    v14 = (uint32_t *)(&hkContainerHeapAllocator::s_alloc);
    v15 = &v12[3 * v10];
    do
    {
      v16 = *(v15 - 1);
      *(v15 - 2) = 0;
      if ( v16 >= 0 )
      {
        v65 = v14;
        G4_VCALL<void>(v14, 20, *(v15 - 3), 4 * v16);
        v14 = v65;
      }
      --v13;
      *(v15 - 3) = 0;
      *(v15 - 1) = 0x80000000;
      v15 -= 3;
    }
    while ( v13 != -1 );
    nusers = ((unsigned int *)(intptr_t)G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (3)))));
  }
  v17 = *(uint32_t *)(v43 + 16);
  if ( v49 > 0 )
  {
    v62 = *(unsigned int **)(v43 + 16);
    v55 = 0;
    v66 = nusers;
    do
    {
      v23 = v62[1];
      if ( (int)(v66[2] & 0x3FFFFFFF) >= v23 )
      {
        v18 = v62[1];
        v58 = *v66;
        v19 = v66;
      }
      else
      {
        if ( (v66[2] & 0x80000000) == 0 )
        {
          (*(void (**)(uint32_t *, unsigned int, unsigned int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            *v66,
            4 * v66[2]);
          v23 = v62[1];
        }
        (*(long *)&(attr)) = 4 * v23;
        v58 = (*(int (**)(uint32_t *, pthread_mutexattr_t *))(hkContainerHeapAllocator::s_alloc + 16))(
                (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                mutexattr);
        v24 = attr;
        *v66 = v58;
        v19 = v66;
        v66[2] = (*(long *)&(v24)) / 4;
        v18 = v62[1];
      }
      v19[1] = v18;
      v20 = *v62;
      if ( (int)v18 > 0 )
      {
        v21 = v58;
        if ( (v58 >= v20 + 16 || v20 >= v58 + 16) && v18 > 0xB )
        {
          v22 = 0;
          v59 = 0;
          v52 = 4 * (v18 >> 2);
          do
          {
            ++v59;
            *(__m128i *)(v21 + v22) = *(__m128i *)(v20 + v22);
            v22 += 16;
          }
          while ( v18 >> 2 > v59 );
          if ( v18 != v52 )
          {
            *(uint32_t *)(v21 + 16 * (v18 >> 2)) = *(uint32_t *)(v20 + 16 * (v18 >> 2));
            if ( (int)v18 > v52 + 1 )
            {
              *(uint32_t *)(v21 + 4 * (v52 + 1)) = *(uint32_t *)(v20 + 4 * (v52 + 1));
              if ( (int)v18 > v52 + 2 )
                *(uint32_t *)(v21 + 4 * (v52 + 2)) = *(uint32_t *)(v20 + 4 * (v52 + 2));
            }
          }
        }
        else
        {
          for ( i = 0; i != v18; ++i )
            *(uint32_t *)(v58 + 4 * i) = *(uint32_t *)(v20 + 4 * i);
        }
      }
      ++v55;
      v66 += 3;
      v62 += 3;
    }
    while ( v55 != v49 );
    v17 = *(uint32_t *)(v43 + 16);
    nusers = ((unsigned int *)(intptr_t)G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (3)))));
  }
  v56 = 0;
  v63 = (unsigned int *)(v17 + 12 * v49);
  if ( v41 - v49 > 0 )
  {
    v26 = &nusers[3 * v49];
    do
    {
      *v26 = 0;
      v26[1] = 0;
      v26[2] = 0x80000000;
      v29 = v63[1];
      v30 = 0;
      if ( v29 == 0
        || ((*(long *)&(attr)) = 4 * v29,
            v30 = (*(int (**)(uint32_t *, pthread_mutexattr_t *))(hkContainerHeapAllocator::s_alloc + 16))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    mutexattr),
            v27 = (*(long *)&(attr)) / 4,
            (*(long *)&(attr)) / 4 == 0) )
      {
        v27 = 0x80000000;
      }
      v26[2] = v27;
      *v26 = v30;
      v26[1] = v29;
      v67 = *v63;
      if ( (int)v29 > 0 )
      {
        if ( (v30 >= v67 + 16 || v67 >= v30 + 16) && v29 > 0xB )
        {
          v28 = 0;
          v60 = 0;
          v53 = 4 * (v29 >> 2);
          do
          {
            ++v60;
            *(__m128i *)(v30 + v28) = *(__m128i *)(v67 + v28);
            v28 += 16;
          }
          while ( v60 < v29 >> 2 );
          if ( v29 != v53 )
          {
            *(uint32_t *)(v30 + 16 * (v29 >> 2)) = *(uint32_t *)(v67 + 16 * (v29 >> 2));
            if ( (int)v29 > v53 + 1 )
            {
              *(uint32_t *)(v30 + 4 * (v53 + 1)) = *(uint32_t *)(v67 + 4 * (v53 + 1));
              if ( v53 + 2 < (int)v29 )
                *(uint32_t *)(v30 + 4 * (v53 + 2)) = *(uint32_t *)(v67 + 4 * (v53 + 2));
            }
          }
        }
        else
        {
          for ( j = 0; j != v29; ++j )
            *(uint32_t *)(v30 + 4 * j) = *(uint32_t *)(v67 + 4 * j);
        }
      }
      ++v56;
      v26 += 3;
      v63 += 3;
    }
    while ( v56 != v41 - v49 );
  }
  G4_MUTEX_SPINS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (3)))) = v41;
  *(uint32_t *)(((int32_t *)(mutexa))[2] + 32) = 0;
  if ( G4_MUTEX_SPINS(mutexa) > 0 )
  {
    v32 = mutexa;
    v33 = 0;
    do
    {
      G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v32) + (24 * (10)))) = 0;
      G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v32) + (24 * (10)))) = 0;
      G4_MUTEX_SPINS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v32) + (24 * (10)))) = (int)(uintptr_t)(sub_1A79760);
      G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v32) + (24 * (11)))) = (int)(uintptr_t)(sub_1A79770);
      v32 = (pthread_mutex_t *)((char *)v32 + 16);
      *(uint16_t *)(((int32_t *)(mutexa))[2] + 2 * v33) = 0;
      v34 = 1 << v33++;
      *(uint32_t *)(((int32_t *)(mutexa))[2] + 32) |= v34;
    }
    while ( G4_MUTEX_SPINS(mutexa) > v33 );
  }
  ((int32_t *)(mutexa))[3] = (int)(uintptr_t)(defaultPopDispatchFunc);
  ((int32_t *)(mutexa))[4] = (unsigned int)(uintptr_t)(defaultFinishDispatchFunc);
  G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (5)))) = 0;
  G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (20)))) = 0;
  G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (4)))) = 0;
  G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (4)))) = 0;
  G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (4)))) = 0;
  G4_MUTEX_SPINS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (4)))) = 0;
  G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(mutexa) + (24 * (5)))) = 0;
  hkJobQueue::updateJobQueryRules((hkJobQueue::Self *)mutexa);
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::setQueueCapacityForCpuCache  (binary VA: 0x1a7a950)
// Original: hkJobQueue::setQueueCapacityForCpuCache
// ----------------------------------------------------------------------------
void hkJobQueue::setQueueCapacityForCpuCache()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::setExternalProfiler  (binary VA: 0x1a7a960)
// Original: hkJobQueue::setExternalProfiler
// ----------------------------------------------------------------------------
int hkJobQueue::setExternalProfiler(int a1, int a2)
{
  *(uint32_t *)(a1 + 508) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::getQueueIndexForJob  (binary VA: 0x1a7a980)
// Original: hkJobQueue::getQueueIndexForJob
// ----------------------------------------------------------------------------
int hkJobQueue::getQueueIndexForJob(int a1, uint8_t *a2)
{
  uint8_t v2; // di
  int v3;
  int v5;

  v2 = a2[1];
  v3 = *(uint32_t *)(a1 + 56);
  if ( v3 > 0 )
  {
    if ( v2 == *(uint8_t *)(a1 + 40) && *a2 == *(uint8_t *)(a1 + 44) )
    {
      v5 = 0;
      return *(uint8_t *)(a1 + 8 * (v5 + 4) + 13);
    }
    if ( v3 > 1 && v2 == *(uint8_t *)(a1 + 48) && *a2 == *(uint8_t *)(a1 + 52) )
    {
      v5 = 1;
      return *(uint8_t *)(a1 + 8 * (v5 + 4) + 13);
    }
  }
  return *(uint32_t *)(a1 + 32) + v2;
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::lockQueue  (binary VA: 0x1a7a9e0)
// Original: hkJobQueue::lockQueue
// ----------------------------------------------------------------------------
int hkJobQueue::lockQueue(pthread_mutex_t *self)
{
  unsigned int count;

  count = ((int32_t *)(self))[1];
  if ( count != 0 )
  {
    while ( pthread_mutex_trylock(self) != 0 )
    {
      if ( --count == 0 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    if ( pthread_mutex_lock(self) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  return ((int32_t *)(self))[2];
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::unlockQueue  (binary VA: 0x1a7aa70)
// Original: hkJobQueue::unlockQueue
// ----------------------------------------------------------------------------
int hkJobQueue::unlockQueue(pthread_mutex_t *mutex)
{
  int result;

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
// Function: hkJobQueue::setQueueCapacityForJobType  (binary VA: 0x1a7aad0)
// Original: hkJobQueue::setQueueCapacityForJobType
// ----------------------------------------------------------------------------
int hkJobQueue::setQueueCapacityForJobType(pthread_mutex_t *a1, int a2, int a3)
{
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int owner;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int lock;
  signed int count;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  bool v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v32;
  int v33;
  size_t v34;
  size_t v35;
  size_t v36;
  int v37;
  int v38;
  int v39;
  int v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *address;
  hkString::Self *v44;
  int v45;
  hkString::Self *v46;
  int v47;
  hkString::Self *v48;
  int v49;
  int i;
  int v51;

  v39 = hkJobQueue::lockQueue(a1);
  v3 = v39 + 20 * (G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (1)))) + a2) + 48;
  v4 = (uint32_t *)(v39 + 20 * (G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (1)))) + a2) + 52);
  v5 = *(uint32_t *)(v39 + 20 * (G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (1)))) + a2) + 56);
  if ( a3 <= v5 )
    goto LABEL_13;
  v6 = 2 * v5;
  if ( a3 >= v6 )
    v6 = a3;
  v49 = v6;
  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  v46 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(
                      *(uint32_t *)(*address + 44),
                      v49 << 7);
  v7 = *(uint32_t *)(v3 + 4);
  if ( v46 != nullptr && v7 != 0 )
  {
    v8 = v4[4];
    if ( v8 != 0 )
    {
      v40 = v4[3];
      v9 = v4[2];
      if ( v40 > v9 )
      {
        hkString::memCpy(v46, (void *)(v7 + (v9 << 7)), v8 << 7);
        v33 = v4[4];
        v7 = *(uint32_t *)(v3 + 4);
        v4[2] = 0;
        v4[3] = v33;
        goto LABEL_10;
      }
      v36 = (v4[1] - v9) << 7;
      hkString::memCpy(v46, (void *)(v7 + (v9 << 7)), v36);
      hkString::memCpy((hkString::Self *)((char *)v46 + v36), *(void **)(v3 + 4), v40 << 7);
      v8 = v4[4];
      v7 = *(uint32_t *)(v3 + 4);
    }
    v4[2] = 0;
    v4[3] = v8;
  }
LABEL_10:
  v10 = v4[1];
  if ( v10 != 0 )
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*address + 44) + 12))(
      *(uint32_t *)(*address + 44),
      v7,
      v10 << 7);
  *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v46);
  v4[1] = v49;
LABEL_13:
  owner = G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (2))));
  if ( owner > 0 )
  {
    for ( i = 0; i < owner; ++i )
    {
      v12 = v39 + 20 * (*G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (1))))) + 48;
      v13 = (uint32_t *)(v39 + 20 * (*G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (1))))) + 52);
      v14 = *(uint32_t *)(v39 + 20 * (*G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (1))))) + 56);
      if ( a3 > v14 )
      {
        v15 = 2 * v14;
        if ( a3 >= v15 )
          v15 = a3;
        v47 = v15;
        v41 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v44 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v41 + 44) + 8))(
                            *(uint32_t *)(*v41 + 44),
                            v47 << 7);
        v16 = *(uint32_t *)(v12 + 4);
        if ( v44 != nullptr && v16 != 0 )
        {
          v17 = v13[4];
          if ( v17 != 0 )
          {
            v38 = v13[3];
            v32 = v13[2];
            if ( v38 > v32 )
            {
              hkString::memCpy(v44, (void *)(v16 + (v32 << 7)), v17 << 7);
            }
            else
            {
              v35 = (v13[1] - v32) << 7;
              hkString::memCpy(v44, (void *)(v16 + (v32 << 7)), v35);
              hkString::memCpy((hkString::Self *)((char *)v44 + v35), *(void **)(v12 + 4), v38 << 7);
            }
            v17 = v13[4];
            v16 = *(uint32_t *)(v12 + 4);
          }
          v13[2] = 0;
          v13[3] = v17;
        }
        v18 = v13[1];
        if ( v18 != 0 )
          (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v41 + 44) + 12))(*(uint32_t *)(*v41 + 44), v16, v18 << 7);
        *(uint32_t *)(v12 + 4) = (uint32_t)(uintptr_t)(v44);
        v13[1] = v47;
        owner = G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (2))));
      }
    }
  }
  lock = G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (1))));
  count = G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (1))));
  if ( lock < count )
  {
    v51 = G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (1))));
    v21 = v39 + 20 * lock;
    do
    {
      v22 = *(uint32_t *)(v21 + 56);
      if ( a3 > v22 )
      {
        v23 = 2 * v22;
        if ( v23 < a3 )
          v23 = a3;
        v24 = v23;
        v45 = v23;
        v42 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v25 = (*(int (**)(uint32_t, int))(**(uint32_t **)(*v42 + 44) + 8))(*(uint32_t *)(*v42 + 44), v24 << 7);
        v26 = v25 == 0;
        v48 = (hkString::Self *)v25;
        v27 = *(uint32_t *)(v21 + 52);
        if ( !v26 && v27 != 0 )
        {
          v28 = *(uint32_t *)(v21 + 68);
          if ( v28 != 0 )
          {
            v37 = *(uint32_t *)(v21 + 64);
            v29 = *(uint32_t *)(v21 + 60);
            if ( v37 > v29 )
            {
              hkString::memCpy(v48, (void *)(v27 + (v29 << 7)), v28 << 7);
            }
            else
            {
              v34 = (*(uint32_t *)(v21 + 56) - v29) << 7;
              hkString::memCpy(v48, (void *)(v27 + (v29 << 7)), v34);
              hkString::memCpy((hkString::Self *)((char *)v48 + v34), *(void **)(v21 + 52), v37 << 7);
            }
            v28 = *(uint32_t *)(v21 + 68);
            v27 = *(uint32_t *)(v21 + 52);
          }
          *(uint32_t *)(v21 + 60) = 0;
          *(uint32_t *)(v21 + 64) = v28;
        }
        v30 = *(uint32_t *)(v21 + 56);
        if ( v30 != 0 )
          (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v42 + 44) + 12))(*(uint32_t *)(*v42 + 44), v27, v30 << 7);
        *(uint32_t *)(v21 + 52) = (uint32_t)(uintptr_t)(v48);
        *(uint32_t *)(v21 + 56) = v45;
        count = G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (1))));
      }
      ++v51;
      v21 += 20;
    }
    while ( v51 < count );
  }
  return hkJobQueue::unlockQueue(a1);
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::releaseOneWaitingThread  (binary VA: 0x1a7af70)
// Original: hkJobQueue::releaseOneWaitingThread
// ----------------------------------------------------------------------------
int hkJobQueue::releaseOneWaitingThread(uint32_t *a1, int a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *v5;
  int result;
  int16_t v7; // di
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  v2 = a1[15];
  v3 = a1[16];
  if ( v2 >= v3 )
  {
    result = a1[15];
    v4 = 0;
  }
  else
  {
    v4 = 0;
    v5 = (uint32_t *)(a2 + 20 * v2 + 68);
    result = a1[15];
    do
    {
      if ( *v5 != 0 )
      {
        v7 = *(uint16_t *)(a2 + 2 * result + 42);
        if ( v7 != 0 )
          goto LABEL_26;
        v4 = 1;
      }
      ++result;
      v5 += 5;
    }
    while ( result != v3 );
  }
  v8 = a1[9];
  if ( result < v8 )
  {
    if ( *(uint32_t *)(a2 + 20 * result + 68) != 0 )
      goto LABEL_14;
    v9 = result + 1;
    v10 = a2 + 20 * v9 + 68;
    while ( v9 != v8 )
    {
      v10 += 20;
      if ( *(uint32_t *)(v10 - 20) != 0 )
        goto LABEL_14;
      ++v9;
    }
  }
  result = v4;
  if ( (uint8_t)v4 == 0 )
    return result;
LABEL_14:
  result = (int)(uintptr_t)(a1);
  v11 = a1[31];
  if ( v11 <= v2 )
    return result;
  v7 = *(uint16_t *)(a2 + 2 * v2 + 42);
  if ( v7 != 0 )
  {
    result = a1[15];
LABEL_26:
    *(uint16_t *)(a2 + 2 * result + 42) = v7 - 1;
    return hkSemaphore::release((hkSemaphore::Self *)a1[result + 26], (hkSemaphore::Self *)((char *)&dword_0 + 1), v12);
  }
  result = v2 + 1;
  if ( v11 > v2 + 1 )
  {
    v7 = *(uint16_t *)(a2 + 2 * v2 + 44);
    if ( v7 != 0 )
      goto LABEL_26;
    result = v2 + 2;
    if ( v11 > v2 + 2 )
    {
      v7 = *(uint16_t *)(a2 + 2 * v2 + 46);
      if ( v7 != 0 )
        goto LABEL_26;
      result = v2 + 3;
      if ( v2 + 3 < v11 )
      {
        v7 = *(uint16_t *)(a2 + 2 * v2 + 48);
        if ( v7 != 0 )
          goto LABEL_26;
        result = v2 + 4;
        if ( v11 > v2 + 4 )
        {
          v7 = *(uint16_t *)(a2 + 2 * v2 + 50);
          if ( v7 != 0 )
            goto LABEL_26;
          result = v2 + 5;
          if ( v2 + 5 < v11 )
          {
            v7 = *(uint16_t *)(a2 + 2 * v2 + 52);
            if ( v7 != 0 )
              goto LABEL_26;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::checkQueueAndReleaseOneWaitingThread  (binary VA: 0x1a7b0d0)
// Original: hkJobQueue::checkQueueAndReleaseOneWaitingThread
// ----------------------------------------------------------------------------
int hkJobQueue::checkQueueAndReleaseOneWaitingThread(uint32_t *a1, int a2, int a3)
{
  int v3;
  int16_t v4; // di
  int v6;

  if ( a1[31] <= a2 )
    return hkJobQueue::releaseOneWaitingThread(a1, a3);
  v3 = a3 + 2 * a2;
  v4 = *(uint16_t *)(v3 + 42);
  if ( v4 == 0 )
    return hkJobQueue::releaseOneWaitingThread(a1, a3);
  *(uint16_t *)(v3 + 42) = v4 - 1;
  return hkSemaphore::release((hkSemaphore::Self *)a1[a2 + 26], (hkSemaphore::Self *)((char *)&dword_0 + 1), v6);
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::addJobQueueLocked  (binary VA: 0x1a7b140)
// Original: hkJobQueue::addJobQueueLocked
// ----------------------------------------------------------------------------
int hkJobQueue::addJobQueueLocked(uint32_t *a1, int a2, uint8_t *a3, int a4)
{
  int QueueIndexForJob;
  int v5;
  uint32_t *v6;
  int v7;
  hkString::Self *v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  uint16_t *v13;
  unsigned int v14;
  int v15;
  uint16_t *v16;
  uint16_t *v17;
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
  size_t v33;
  size_t v34;
  size_t v35;
  int v36;
  size_t v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  uint32_t *address;
  uint32_t *v44;
  int v45;
  int v46;
  int v47;
  int v48;
  size_t v49;
  int v50;
  size_t v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  uint32_t *v57;
  uint32_t *v58;
  int v59;
  int v60;
  size_t v61;
  size_t v62;
  int v63;
  int v64;
  int v65;
  int v66;

  QueueIndexForJob = hkJobQueue::getQueueIndexForJob((int)(uintptr_t)(a1), a3);
  v5 = a2 + 20 * QueueIndexForJob + 48;
  v6 = (uint32_t *)(a2 + 20 * QueueIndexForJob + 52);
  v7 = *(uint32_t *)(a2 + 20 * QueueIndexForJob + 56);
  if ( a4 != 0 )
  {
    if ( *(uint32_t *)(a2 + 20 * QueueIndexForJob + 68) < v7 )
      goto LABEL_3;
    if ( v7 == 0 )
    {
      v35 = QueueIndexForJob;
      address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v8 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(
                         *(uint32_t *)(*address + 44),
                         1024);
      v27 = *(uint32_t *)(v5 + 4);
      QueueIndexForJob = v35;
      if ( v8 != nullptr && v27 != 0 )
      {
        v28 = v6[4];
        if ( v28 != 0 )
        {
          v63 = v6[3];
          v59 = v6[2];
          if ( v63 > v59 )
          {
            hkString::memCpy(v8, (void *)(v27 + (v59 << 7)), v6[4] << 7);
            v28 = v6[4];
            v27 = *(uint32_t *)(v5 + 4);
            QueueIndexForJob = v35;
          }
          else
          {
            v49 = v35;
            v36 = (v6[1] - v59) << 7;
            hkString::memCpy(v8, (void *)(v27 + (v59 << 7)), v36);
            hkString::memCpy((hkString::Self *)((char *)v8 + v36), *(void **)(v5 + 4), v63 << 7);
            v28 = v6[4];
            v27 = *(uint32_t *)(v5 + 4);
            QueueIndexForJob = v49;
          }
        }
        v6[2] = 0;
        v6[3] = v28;
      }
      v29 = v6[1];
      if ( v29 != 0 )
      {
        v52 = QueueIndexForJob;
        (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*address + 44) + 12))(
          *(uint32_t *)(*address + 44),
          v27,
          v29 << 7);
        QueueIndexForJob = v52;
      }
      *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v8);
      v7 = 8;
      v6[1] = 8;
      goto LABEL_4;
    }
    v33 = 2 * v7;
    if ( v7 >= 2 * v7 )
    {
LABEL_3:
      v8 = *(hkString::Self **)(a2 + 20 * QueueIndexForJob + 52);
    }
    else
    {
      v39 = QueueIndexForJob;
      v45 = *(uint32_t *)(a2 + 20 * QueueIndexForJob + 56);
      v57 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v8 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v57 + 44) + 8))(
                         *(uint32_t *)(*v57 + 44),
                         v45 << 8);
      QueueIndexForJob = v39;
      v40 = *(uint32_t *)(v5 + 4);
      if ( v8 != nullptr && *(uint32_t *)(v5 + 4) != 0 )
      {
        v21 = v6[4];
        if ( v21 != 0 )
        {
          v46 = v6[3];
          v22 = v6[2];
          if ( v46 > v22 )
          {
            v54 = QueueIndexForJob;
            hkString::memCpy(v8, (void *)(v40 + (v22 << 7)), v21 << 7);
            v21 = v6[4];
            v40 = *(uint32_t *)(v5 + 4);
            QueueIndexForJob = v54;
          }
          else
          {
            v65 = QueueIndexForJob;
            v61 = (v6[1] - v22) << 7;
            hkString::memCpy(v8, (void *)(v40 + (v22 << 7)), v61);
            hkString::memCpy((hkString::Self *)((char *)v8 + v61), *(void **)(v5 + 4), v46 << 7);
            v21 = v6[4];
            v40 = *(uint32_t *)(v5 + 4);
            QueueIndexForJob = v65;
          }
        }
        v6[2] = 0;
        v6[3] = v21;
      }
      v23 = v6[1];
      if ( v23 != 0 )
      {
        v50 = QueueIndexForJob;
        (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v57 + 44) + 12))(*(uint32_t *)(*v57 + 44), v40, v23 << 7);
        QueueIndexForJob = v50;
      }
      *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v8);
      v7 = v33;
      v6[1] = v33;
    }
LABEL_4:
    v9 = v6[3];
    if ( v9 == v7 )
    {
      v10 = 0;
      v11 = 1;
    }
    else
    {
      v10 = v9 << 7;
      v11 = v6[3] + 1;
    }
    v6[3] = v11;
    goto LABEL_7;
  }
  if ( *(uint32_t *)(a2 + 20 * QueueIndexForJob + 68) < v7 )
    goto LABEL_15;
  if ( v7 == 0 )
  {
    v37 = QueueIndexForJob;
    v44 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v8 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v44 + 44) + 8))(*(uint32_t *)(*v44 + 44), 1024);
    v30 = *(uint32_t *)(v5 + 4);
    QueueIndexForJob = v37;
    if ( v8 != nullptr && v30 != 0 )
    {
      v31 = v6[4];
      if ( v31 != 0 )
      {
        v64 = v6[3];
        v60 = v6[2];
        if ( v64 > v60 )
        {
          hkString::memCpy(v8, (void *)(v30 + (v60 << 7)), v6[4] << 7);
          v31 = v6[4];
          v30 = *(uint32_t *)(v5 + 4);
          QueueIndexForJob = v37;
        }
        else
        {
          v51 = v37;
          v38 = (v6[1] - v60) << 7;
          hkString::memCpy(v8, (void *)(v30 + (v60 << 7)), v38);
          hkString::memCpy((hkString::Self *)((char *)v8 + v38), *(void **)(v5 + 4), v64 << 7);
          v31 = v6[4];
          v30 = *(uint32_t *)(v5 + 4);
          QueueIndexForJob = v51;
        }
      }
      v6[2] = 0;
      v6[3] = v31;
    }
    v32 = v6[1];
    if ( v32 != 0 )
    {
      v55 = QueueIndexForJob;
      (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v44 + 44) + 12))(*(uint32_t *)(*v44 + 44), v30, v32 << 7);
      QueueIndexForJob = v55;
    }
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v8);
    v7 = 8;
    v6[1] = 8;
    goto LABEL_16;
  }
  v34 = 2 * v7;
  if ( v7 >= 2 * v7 )
  {
LABEL_15:
    v8 = *(hkString::Self **)(a2 + 20 * QueueIndexForJob + 52);
  }
  else
  {
    v41 = QueueIndexForJob;
    v47 = *(uint32_t *)(a2 + 20 * QueueIndexForJob + 56);
    v58 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v8 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v58 + 44) + 8))(*(uint32_t *)(*v58 + 44), v47 << 8);
    QueueIndexForJob = v41;
    v42 = *(uint32_t *)(v5 + 4);
    if ( v8 != nullptr && *(uint32_t *)(v5 + 4) != 0 )
    {
      v24 = v6[4];
      if ( v24 != 0 )
      {
        v48 = v6[3];
        v25 = v6[2];
        if ( v48 > v25 )
        {
          v56 = QueueIndexForJob;
          hkString::memCpy(v8, (void *)(v42 + (v25 << 7)), v24 << 7);
          v24 = v6[4];
          v42 = *(uint32_t *)(v5 + 4);
          QueueIndexForJob = v56;
        }
        else
        {
          v66 = QueueIndexForJob;
          v62 = (v6[1] - v25) << 7;
          hkString::memCpy(v8, (void *)(v42 + (v25 << 7)), v62);
          hkString::memCpy((hkString::Self *)((char *)v8 + v62), *(void **)(v5 + 4), v48 << 7);
          v24 = v6[4];
          v42 = *(uint32_t *)(v5 + 4);
          QueueIndexForJob = v66;
        }
      }
      v6[2] = 0;
      v6[3] = v24;
    }
    v26 = v6[1];
    if ( v26 != 0 )
    {
      v53 = QueueIndexForJob;
      (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v58 + 44) + 12))(*(uint32_t *)(*v58 + 44), v42, v26 << 7);
      QueueIndexForJob = v53;
    }
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v8);
    v7 = v34;
    v6[1] = v34;
  }
LABEL_16:
  v19 = v6[2];
  if ( v19 == 0 )
    v19 = v7;
  v20 = v19 - 1;
  v6[2] = v20;
  v10 = v20 << 7;
LABEL_7:
  v12 = (uint8_t *)((char *)v8 + v10);
  v13 = (uint16_t *)(a3);
  v14 = 120;
  if ( ((uint8_t)(uintptr_t)(v12) & 1) != 0 )
  {
    *v12++ = *a3;
    v13 = (uint16_t *)(a3 + 1);
    v14 = 119;
    if ( ((uint8_t)(uintptr_t)(v12) & 2) == 0 )
      goto LABEL_9;
  }
  else if ( ((uint8_t)(uintptr_t)(v12) & 2) == 0 )
  {
    goto LABEL_9;
  }
  v12 += 2;
  *((uint16_t *)v12 - 1) = *v13++;
  v14 -= 2;
LABEL_9:
  std::memcpy(v12, v13, 4 * (v14 >> 2));
  v17 = &v13[2 * (v14 >> 2)];
  v16 = (uint16_t *)(&v12[4 * (v14 >> 2)]);
  v15 = 0;
  if ( (v14 & 2) != 0 )
  {
    *v16 = *v17;
    v15 = 1;
  }
  if ( (v14 & 1) != 0 )
    LOBYTE(v16[v15]) = v17[v15];
  ++v6[4];
  return hkJobQueue::checkQueueAndReleaseOneWaitingThread(a1, QueueIndexForJob, a2);
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::addJob  (binary VA: 0x1a7b820)
// Original: hkJobQueue::addJob
// ----------------------------------------------------------------------------
int hkJobQueue::addJob(pthread_mutex_t *a1, uint8_t *a2, int a3)
{
  int v3;

  v3 = hkJobQueue::lockQueue(a1);
  hkJobQueue::addJobQueueLocked((uint32_t *)(a1), v3, a2, a3);
  return hkJobQueue::unlockQueue(a1);
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::addJob  (binary VA: 0x1a7b880)
// Original: hkJobQueue::addJob
// ----------------------------------------------------------------------------
int hkJobQueue::addJob(pthread_mutex_t *a1, uint16_t *a2, int a3)
{
  uint8_t v4[136];

  hkString::memCpy((hkString::Self *)v4, a2, a2[2]);
  return hkJobQueue::addJob(a1, v4, a3);
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::addJobBatch  (binary VA: 0x1a7b8e0)
// Original: hkJobQueue::addJobBatch
// ----------------------------------------------------------------------------
int hkJobQueue::addJobBatch(pthread_mutex_t *a1, uint32_t *a2, int a3)
{
  int *address;
  uint32_t *v4;
  uint64_t v5; // rax
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  char *v10;
  int v11;
  uint8_t *v12;
  unsigned int v13;
  uint8_t *v14;
  int v15;
  uint16_t *v16;
  char *v17;
  uint32_t *v18;
  int v19;
  hkString::Self *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  hkString::Self *v27;
  int v28;
  int v29;
  int v30;
  int result;
  uint32_t *v32;
  uint64_t v33; // rax
  uint32_t *v34;
  hkString::Self *v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  void *v41;
  typedef void *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef size_t _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef hkString::Self *_g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef size_t _g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef size_t _g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef hkString::Self *_g4_t_v66;
  typedef size_t _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_QueueIndexForJob;
  typedef int _g4_t_v71;
  typedef char _g4_t_v72;
  typedef uint8_t _g4_t_v73[127];
  enum : size_t {
    _g4_s0 = 736u,
    _g4_s1 = (4u + sizeof(_g4_t_v42)) > _g4_s0 ? (4u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v43)) > _g4_s1 ? (20u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v44)) > _g4_s2 ? (24u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v45)) > _g4_s3 ? (24u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v46)) > _g4_s4 ? (24u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v47)) > _g4_s5 ? (24u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v48)) > _g4_s6 ? (28u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v49)) > _g4_s7 ? (28u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v50)) > _g4_s8 ? (28u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v51)) > _g4_s9 ? (28u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v52)) > _g4_s10 ? (32u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v53)) > _g4_s11 ? (32u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v54)) > _g4_s12 ? (32u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v55)) > _g4_s13 ? (32u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v56)) > _g4_s14 ? (32u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v57)) > _g4_s15 ? (32u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v58)) > _g4_s16 ? (36u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v59)) > _g4_s17 ? (36u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v60)) > _g4_s18 ? (36u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v61)) > _g4_s19 ? (36u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v62)) > _g4_s20 ? (36u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v63)) > _g4_s21 ? (40u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v64)) > _g4_s22 ? (40u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v65)) > _g4_s23 ? (40u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v66)) > _g4_s24 ? (40u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v67)) > _g4_s25 ? (40u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v68)) > _g4_s26 ? (44u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v69)) > _g4_s27 ? (52u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_QueueIndexForJob)) > _g4_s28 ? (56u + sizeof(_g4_t_QueueIndexForJob)) : _g4_s28,
    _g4_s30 = (60u + sizeof(_g4_t_v71)) > _g4_s29 ? (60u + sizeof(_g4_t_v71)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v72)) > _g4_s30 ? (64u + sizeof(_g4_t_v72)) : _g4_s30,
    _g4_s32 = (65u + sizeof(_g4_t_v73)) > _g4_s31 ? (65u + sizeof(_g4_t_v73)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 32u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 36u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 36u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 36u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 36u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 40u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 40u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 40u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 40u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 44u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 52u);
  _g4_t_QueueIndexForJob &QueueIndexForJob = *reinterpret_cast<_g4_t_QueueIndexForJob *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 64u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 65u);

  address = (int *)(_emutls_get_address(g4_emutls_v_hkMonitorStream__m_instance));
  v68 = *address;
  v4 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(*address + 12) )
  {
    *v4 = (uint32_t)(uintptr_t)("TtAddJobBatch");
    v5 = __rdtsc();
    v4[1] = v5;
    *(uint32_t *)(v68 + 4) = (uint32_t)(uintptr_t)(v4 + 3);
  }
  v69 = hkJobQueue::lockQueue(a1);
  v6 = a2;
  v71 = 0;
  if ( (int)a2[1] > 0 )
  {
    while ( 1 )
    {
      hkString::memCpy(
        (hkString::Self *)&v72,
        *(void **)(*v6 + 4 * v71),
        *(uint16_t *)(*(uint32_t *)(*v6 + 4 * v71) + 4));
      QueueIndexForJob = hkJobQueue::getQueueIndexForJob((int)(uintptr_t)(a1), (uint8_t *)(&v72));
      v18 = (uint32_t *)(v69 + 20 * QueueIndexForJob + 52);
      if ( a3 == 0 )
      {
        v7 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 56);
        if ( *(uint32_t *)(v69 + 20 * QueueIndexForJob + 68) >= v7 )
        {
          if ( v7 != 0 )
          {
            v64 = 2 * v7;
            if ( v7 < 2 * v7 )
            {
              v54 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
              v27 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v54 + 44) + 8))(
                                  *(uint32_t *)(*v54 + 44),
                                  v7 << 8);
              v28 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52);
              v18 = (uint32_t *)(v69 + 20 * QueueIndexForJob + 52);
              if ( v27 != nullptr && v28 != 0 )
              {
                v29 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 68);
                if ( v29 != 0 )
                {
                  v43 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 64);
                  v45 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 60);
                  if ( v43 > v45 )
                  {
                    hkString::memCpy(
                      v27,
                      (void *)((v45 << 7) + *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52)),
                      v29 << 7);
                  }
                  else
                  {
                    v59 = (*(uint32_t *)(v69 + 20 * QueueIndexForJob + 56) - v45) << 7;
                    hkString::memCpy(v27, (void *)((v45 << 7) + *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52)), v59);
                    hkString::memCpy(
                      (hkString::Self *)((char *)v27 + v59),
                      *(void **)(v69 + 20 * QueueIndexForJob + 52),
                      v43 << 7);
                  }
                  v18 = (uint32_t *)(v69 + 20 * QueueIndexForJob + 52);
                  v29 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 68);
                }
                v18[2] = 0;
                v18[3] = v29;
                v28 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52);
              }
              v30 = v18[1];
              if ( v30 != 0 )
              {
                v49 = v18;
                (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v54 + 44) + 12))(
                  *(uint32_t *)(*v54 + 44),
                  v28,
                  v30 << 7);
                v18 = v49;
                *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52) = (uint32_t)(uintptr_t)(v27);
                v7 = v64;
                v49[1] = v64;
              }
              else
              {
                *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52) = (uint32_t)(uintptr_t)(v27);
                v18[1] = v64;
                v7 = v64;
              }
            }
          }
          else
          {
            v34 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
            v35 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v34 + 44) + 8))(
                                *(uint32_t *)(*v34 + 44),
                                1024);
            v18 = (uint32_t *)(v69 + 20 * QueueIndexForJob + 52);
            v65 = *v18;
            if ( v35 != nullptr && *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52) != 0 )
            {
              v36 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 68);
              if ( v36 != 0 )
              {
                v46 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 64);
                v50 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 60);
                if ( v46 > v50 )
                {
                  v42 = (void *)(v65 + (v50 << 7));
                  v66 = v35;
                  hkString::memCpy(v35, v42, *(uint32_t *)(v69 + 20 * QueueIndexForJob + 68) << 7);
                }
                else
                {
                  v61 = (*(uint32_t *)(v69 + 20 * QueueIndexForJob + 56) - v50) << 7;
                  v41 = (void *)((v50 << 7) + v65);
                  v66 = v35;
                  hkString::memCpy(v35, v41, v61);
                  hkString::memCpy(
                    (hkString::Self *)((char *)v66 + v61),
                    *(void **)(v69 + 20 * QueueIndexForJob + 52),
                    v46 << 7);
                }
                v18 = (uint32_t *)(v69 + 20 * QueueIndexForJob + 52);
                v35 = v66;
                v36 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 68);
              }
              v18[2] = 0;
              v18[3] = v36;
              v65 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52);
            }
            v37 = v18[1];
            if ( v37 != 0 )
            {
              v56 = v35;
              v62 = v18;
              (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v34 + 44) + 12))(
                *(uint32_t *)(*v34 + 44),
                v65,
                v37 << 7);
              v35 = v56;
              v18 = v62;
            }
            *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52) = (uint32_t)(uintptr_t)(v35);
            v7 = 8;
            v18[1] = 8;
          }
        }
        v8 = v18[2];
        v9 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52);
        v10 = &v72;
        if ( v8 == 0 )
          v8 = v7;
        v11 = v8 - 1;
        v18[2] = v11;
        v12 = (uint8_t *)((v11 << 7) + v9);
        v13 = 120;
        v14 = v12;
        if ( ((uint8_t)(uintptr_t)(v12) & 1) != 0 )
        {
          v14 = v12 + 1;
          *v12 = v72;
          v10 = (char *)(v73);
          v13 = 119;
        }
LABEL_10:
        if ( ((uint8_t)(uintptr_t)(v14) & 2) != 0 )
          goto LABEL_23;
        goto LABEL_11;
      }
      v19 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 56);
      if ( *(uint32_t *)(v69 + 20 * QueueIndexForJob + 68) < v19 )
        break;
      if ( v19 != 0 )
      {
        v63 = 2 * v19;
        if ( v19 >= 2 * v19 )
          break;
        v52 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 56);
        v48 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v20 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v48 + 44) + 8))(
                            *(uint32_t *)(*v48 + 44),
                            v52 << 8);
        v18 = (uint32_t *)(v69 + 20 * QueueIndexForJob + 52);
        v58 = *v18;
        if ( v20 != nullptr && *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52) != 0 )
        {
          v24 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 68);
          if ( v24 != 0 )
          {
            v53 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 64);
            v25 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 60);
            if ( v53 > v25 )
            {
              hkString::memCpy(v20, (void *)(v58 + (v25 << 7)), v24 << 7);
            }
            else
            {
              v44 = (*(uint32_t *)(v69 + 20 * QueueIndexForJob + 56) - v25) << 7;
              hkString::memCpy(v20, (void *)(v58 + (v25 << 7)), v44);
              hkString::memCpy((hkString::Self *)((char *)v20 + v44), *(void **)(v69 + 20 * QueueIndexForJob + 52), v53 << 7);
            }
            v18 = (uint32_t *)(v69 + 20 * QueueIndexForJob + 52);
            v58 = *v18;
            v24 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 68);
          }
          v18[2] = 0;
          v18[3] = v24;
        }
        v26 = v18[1];
        if ( v26 != 0 )
        {
          v55 = v18;
          (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v48 + 44) + 12))(*(uint32_t *)(*v48 + 44), v58, v26 << 7);
          v18 = v55;
          *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52) = (uint32_t)(uintptr_t)(v20);
          v19 = v63;
          v55[1] = v63;
        }
        else
        {
          *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52) = (uint32_t)(uintptr_t)(v20);
          v19 = v63;
          v18[1] = v63;
        }
      }
      else
      {
        v60 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v20 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v60 + 44) + 8))(*(uint32_t *)(*v60 + 44), 1024);
        v38 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52);
        v18 = (uint32_t *)(v69 + 20 * QueueIndexForJob + 52);
        if ( v20 != nullptr && v38 != 0 )
        {
          v39 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 68);
          if ( v39 != 0 )
          {
            v47 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 64);
            v51 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 60);
            if ( v47 > v51 )
            {
              hkString::memCpy(v20, (void *)(v38 + (v51 << 7)), *(uint32_t *)(v69 + 20 * QueueIndexForJob + 68) << 7);
            }
            else
            {
              v67 = (*(uint32_t *)(v69 + 20 * QueueIndexForJob + 56) - v51) << 7;
              hkString::memCpy(v20, (void *)(v38 + (v51 << 7)), v67);
              hkString::memCpy((hkString::Self *)((char *)v20 + v67), *(void **)(v69 + 20 * QueueIndexForJob + 52), v47 << 7);
            }
            v18 = (uint32_t *)(v69 + 20 * QueueIndexForJob + 52);
            v38 = *v18;
            v39 = *(uint32_t *)(v69 + 20 * QueueIndexForJob + 68);
          }
          v18[2] = 0;
          v18[3] = v39;
        }
        v40 = v18[1];
        if ( v40 != 0 )
        {
          v57 = v18;
          (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*v60 + 44) + 12))(*(uint32_t *)(*v60 + 44), v38, v40 << 7);
          v18 = v57;
        }
        *(uint32_t *)(v69 + 20 * QueueIndexForJob + 52) = (uint32_t)(uintptr_t)(v20);
        v19 = 8;
        v18[1] = 8;
      }
LABEL_19:
      v21 = v18[3];
      if ( v21 == v19 )
      {
        v22 = 0;
        v23 = 1;
      }
      else
      {
        v22 = v21 << 7;
        v23 = v18[3] + 1;
      }
      v14 = (uint8_t *)((char *)v20 + v22);
      v18[3] = v23;
      v10 = &v72;
      v13 = 120;
      if ( ((uint8_t)(uintptr_t)(v14) & 1) == 0 )
        goto LABEL_10;
      *v14++ = v72;
      v10 = (char *)(v73);
      v13 = 119;
      if ( ((uint8_t)(uintptr_t)(v14) & 2) != 0 )
      {
LABEL_23:
        v14 += 2;
        *((uint16_t *)v14 - 1) = *(uint16_t *)v10;
        v10 += 2;
        v13 -= 2;
      }
LABEL_11:
      std::memcpy(v14, v10, 4 * (v13 >> 2));
      v17 = &v10[4 * (v13 >> 2)];
      v16 = (uint16_t *)(&v14[4 * (v13 >> 2)]);
      v15 = 0;
      if ( (v13 & 2) != 0 )
      {
        *v16 = *(uint16_t *)v17;
        v15 = 1;
      }
      if ( (v13 & 1) != 0 )
        LOBYTE(v16[v15]) = v17[v15 * 2];
      ++v18[4];
      hkJobQueue::checkQueueAndReleaseOneWaitingThread((uint32_t *)(a1), QueueIndexForJob, v69);
      v6 = a2;
      if ( a2[1] <= ++v71 )
        goto LABEL_47;
    }
    v20 = *(hkString::Self **)(v69 + 20 * QueueIndexForJob + 52);
    goto LABEL_19;
  }
LABEL_47:
  hkJobQueue::unlockQueue(a1);
  result = v68;
  v32 = *(uint32_t **)(v68 + 4);
  if ( (unsigned int)(uintptr_t)(v32) < *(uint32_t *)(v68 + 12) )
  {
    *v32 = (uint32_t)(uintptr_t)("Et");
    v33 = __rdtsc();
    v32[1] = v33;
    result = v68;
    *(uint32_t *)(v68 + 4) = (uint32_t)(uintptr_t)(v32 + 3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::getWaitPolicy  (binary VA: 0x1a7c0f0)
// Original: hkJobQueue::getWaitPolicy
// ----------------------------------------------------------------------------
int hkJobQueue::getWaitPolicy(hkJobQueue::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 2) + 36);
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::getMasterThreadFinishingFlags  (binary VA: 0x1a7c100)
// Original: hkJobQueue::getMasterThreadFinishingFlags
// ----------------------------------------------------------------------------
int hkJobQueue::getMasterThreadFinishingFlags(hkJobQueue::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 2) + 32);
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::setMasterThreadFinishingFlags  (binary VA: 0x1a7c110)
// Original: hkJobQueue::setMasterThreadFinishingFlags
// ----------------------------------------------------------------------------
int hkJobQueue::setMasterThreadFinishingFlags(pthread_mutex_t *self, int a2)
{
  int v2;
  int v3;
  int16_t v4;
  int v6;

  v2 = hkJobQueue::lockQueue(self);
  *(uint32_t *)(((int32_t *)(self))[2] + 32) = a2;
  v3 = v2 + 2 * *((char *)self + 238);
  v4 = *(uint16_t *)(v3 + 42);
  if ( v4 != 0 )
  {
    *(uint16_t *)(v3 + 42) = v4 - 1;
    hkSemaphore::release(
      *((hkSemaphore::Self **)self + *((char *)self + 238) + 26),
      (hkSemaphore::Self *)((char *)&dword_0 + 1),
      v6);
  }
  return hkJobQueue::unlockQueue(self);
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::finishJob  (binary VA: 0x1a7c1a0)
// Original: hkJobQueue::finishJob
// ----------------------------------------------------------------------------
int hkJobQueue::finishJob(pthread_mutex_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, uint32_t *a11, int a12, int a13, int a14, int a15, int16_t a16)
{
  uint32_t *address;
  uint32_t *v17;
  uint64_t v18; // rax
  uint64_t v19; // rax
  uint32_t *v20;
  pthread_mutex_t *v21;
  int v22;
  int kind;
  int v24;
  int v25;
  int16_t *v26;
  char *v27;
  unsigned int v28;
  int v29;
  char *v30;
  int16_t *v31;
  int v32;
  hkString::Self *v33;
  int owner;
  int v35;
  hkString::Self *v36;
  int v37;
  int v38;
  unsigned int count;
  int v40;
  int v41;
  unsigned int v42;
  uint32_t *v43;
  int v44;
  hkString::Self *v45;
  unsigned int v46;
  uint32_t *v47;
  hkString::Self *v48;
  int v49;
  unsigned int v50;
  hkString::Self *v58;
  int v59;
  int v60;
  pthread_mutex_t *v61;
  hkString::Self *v62;
  uint32_t *v63;
  uint32_t *v64;
  int v65;
  hkString::Self *v66;
  hkString::Self *v67;
  size_t v68;
  size_t v69;
  size_t v70;
  hkString::Self *v71;
  size_t v72;
  pthread_mutex_t *v73;
  pthread_mutex_t *v74;
  pthread_mutex_t *v75;
  hkString::Self *v76;
  int v77;
  int v78;
  int v79;
  hkString::Self *v80;
  int lock;
  hkString::Self *v82;
  int QueueIndexForJob;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef hkString::Self *_g4_t_v55;
  typedef void *_g4_t_v56;
  typedef size_t _g4_t_v57;
  enum : size_t {
    _g4_s0 = 720u,
    _g4_s1 = (8u + sizeof(_g4_t_v52)) > _g4_s0 ? (8u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v53)) > _g4_s1 ? (12u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v54)) > _g4_s2 ? (16u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (624u + sizeof(_g4_t_v55)) > _g4_s3 ? (624u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (628u + sizeof(_g4_t_v56)) > _g4_s4 ? (628u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (632u + sizeof(_g4_t_v57)) > _g4_s5 ? (632u + sizeof(_g4_t_v57)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 8u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 624u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 628u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 632u);

  address = _emutls_get_address(g4_emutls_v_hkMonitorStream__m_instance);
  v52 = *address;
  v17 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v17) < *(uint32_t *)(*address + 12) )
  {
    *v17 = (uint32_t)(uintptr_t)("TtfinishJob");
    v18 = __rdtsc();
    v17[1] = v18;
    *(uint32_t *)(v52 + 4) = (uint32_t)(uintptr_t)(v17 + 3);
  }
  v53 = hkJobQueue::lockQueue(a1);
  if ( ((int (*)(pthread_mutex_t *, int, int, int *))((int32_t *)(a1))[4])(a1, v53, a2, &v54) == 0 )
  {
    QueueIndexForJob = hkJobQueue::getQueueIndexForJob((int)(uintptr_t)(a1), (uint8_t *)(&a16));
    if ( a12 != 0 )
    {
      v21 = (pthread_mutex_t *)&a11[5 * QueueIndexForJob + 13];
      v22 = a11[5 * QueueIndexForJob + 14];
      if ( a11[5 * QueueIndexForJob + 17] >= v22 )
      {
        if ( v22 != 0 )
        {
          v77 = 2 * v22;
          if ( v22 < 2 * v22 )
          {
            v63 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
            v36 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v63 + 44) + 8))(
                                *(uint32_t *)(*v63 + 44),
                                v22 << 8);
            v37 = a11[5 * QueueIndexForJob + 13];
            v21 = (pthread_mutex_t *)&a11[5 * QueueIndexForJob + 13];
            if ( v36 != nullptr && v37 != 0 )
            {
              v38 = a11[5 * QueueIndexForJob + 17];
              if ( v38 != 0 )
              {
                a2 = a11[5 * QueueIndexForJob + 16];
                a3 = a11[5 * QueueIndexForJob + 15];
                if ( a2 > a3 )
                {
                  hkString::memCpy(v36, (void *)((a3 << 7) + a11[5 * QueueIndexForJob + 13]), v38 << 7);
                }
                else
                {
                  v68 = (a11[5 * QueueIndexForJob + 14] - a3) << 7;
                  hkString::memCpy(v36, (void *)((a3 << 7) + a11[5 * QueueIndexForJob + 13]), v68);
                  hkString::memCpy((hkString::Self *)((char *)v36 + v68), (void *)a11[5 * QueueIndexForJob + 13], a2 << 7);
                }
                v21 = (pthread_mutex_t *)&a11[5 * QueueIndexForJob + 13];
                v38 = a11[5 * QueueIndexForJob + 17];
              }
              ((int32_t *)(v21))[2] = 0;
              ((int32_t *)(v21))[3] = v38;
              v37 = a11[5 * QueueIndexForJob + 13];
            }
            count = ((int32_t *)(v21))[1];
            if ( count != 0 )
            {
              v61 = v21;
              a3 = v37;
              (*(void (**)(uint32_t, int, unsigned int))(**(uint32_t **)(*v63 + 44) + 12))(
                *(uint32_t *)(*v63 + 44),
                v37,
                count << 7);
              v21 = v61;
            }
            a11[5 * QueueIndexForJob + 13] = (uint32_t)(uintptr_t)(v36);
            ((int32_t *)(v21))[1] = v77;
            v22 = v77;
          }
        }
        else
        {
          v47 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
          v48 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v47 + 44) + 8))(
                              *(uint32_t *)(*v47 + 44),
                              1024);
          v21 = (pthread_mutex_t *)&a11[5 * QueueIndexForJob + 13];
          lock = ((int32_t *)(v21))[0];
          if ( v48 != nullptr && a11[5 * QueueIndexForJob + 13] != 0 )
          {
            v49 = a11[5 * QueueIndexForJob + 17];
            if ( v49 != 0 )
            {
              v65 = a11[5 * QueueIndexForJob + 17];
              a3 = a11[5 * QueueIndexForJob + 16];
              v60 = a11[5 * QueueIndexForJob + 15];
              if ( a3 > v60 )
              {
                v56 = (void *)(lock + (v60 << 7));
                v82 = v48;
                hkString::memCpy(v48, v56, v65 << 7);
              }
              else
              {
                v72 = (a11[5 * QueueIndexForJob + 14] - v60) << 7;
                v56 = (void *)(lock + (v60 << 7));
                v82 = v48;
                hkString::memCpy(v48, v56, v72);
                hkString::memCpy((hkString::Self *)((char *)v82 + v72), (void *)a11[5 * QueueIndexForJob + 13], a3 << 7);
              }
              v21 = (pthread_mutex_t *)&a11[5 * QueueIndexForJob + 13];
              v48 = v82;
              v49 = a11[5 * QueueIndexForJob + 17];
            }
            ((int32_t *)(v21))[2] = 0;
            ((int32_t *)(v21))[3] = v49;
            lock = a11[5 * QueueIndexForJob + 13];
          }
          v50 = ((int32_t *)(v21))[1];
          if ( v50 != 0 )
          {
            v74 = v21;
            v66 = v48;
            (*(void (**)(uint32_t, int, unsigned int))(**(uint32_t **)(*v47 + 44) + 12))(
              *(uint32_t *)(*v47 + 44),
              lock,
              v50 << 7);
            v48 = v66;
            v21 = v74;
          }
          a11[5 * QueueIndexForJob + 13] = (uint32_t)(uintptr_t)(v48);
          v22 = 8;
          ((int32_t *)(v21))[1] = 8;
        }
      }
      kind = ((int32_t *)(v21))[3];
      if ( kind == v22 )
      {
        v24 = 0;
        v25 = 1;
      }
      else
      {
        v24 = kind << 7;
        v25 = ((int32_t *)(v21))[3] + 1;
      }
      v26 = &a16;
      v27 = (char *)(v24 + a11[5 * QueueIndexForJob + 13]);
      ((int32_t *)(v21))[3] = v25;
      v28 = 120;
      if ( ((uint8_t)(uintptr_t)(v27) & 1) == 0 )
        goto LABEL_14;
      goto LABEL_26;
    }
    v21 = (pthread_mutex_t *)&a11[5 * QueueIndexForJob + 13];
    v32 = a11[5 * QueueIndexForJob + 14];
    if ( a11[5 * QueueIndexForJob + 17] < v32 )
      goto LABEL_22;
    if ( v32 != 0 )
    {
      v78 = 2 * v32;
      if ( v32 >= 2 * v32 )
      {
LABEL_22:
        v33 = (hkString::Self *)a11[5 * QueueIndexForJob + 13];
        goto LABEL_23;
      }
      v64 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v33 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v64 + 44) + 8))(
                          *(uint32_t *)(*v64 + 44),
                          v32 << 8);
      v40 = a11[5 * QueueIndexForJob + 13];
      v21 = (pthread_mutex_t *)&a11[5 * QueueIndexForJob + 13];
      if ( v33 != nullptr && v40 != 0 )
      {
        v41 = a11[5 * QueueIndexForJob + 17];
        if ( v41 != 0 )
        {
          v58 = v33;
          a2 = a11[5 * QueueIndexForJob + 16];
          a3 = a11[5 * QueueIndexForJob + 15];
          if ( a2 > a3 )
          {
            v76 = v33;
            hkString::memCpy(v33, (void *)(v40 + (a3 << 7)), v41 << 7);
            v21 = (pthread_mutex_t *)&a11[5 * QueueIndexForJob + 13];
            v40 = ((int32_t *)(v21))[0];
            v33 = v76;
          }
          else
          {
            a1 = (pthread_mutex_t *)&a11[5 * QueueIndexForJob + 13];
            v69 = (a11[5 * QueueIndexForJob + 14] - a3) << 7;
            hkString::memCpy(v33, (void *)(v40 + (a3 << 7)), v69);
            hkString::memCpy((hkString::Self *)((char *)v58 + v69), (void *)((int32_t *)(a1))[0], a2 << 7);
            v21 = a1;
            v40 = ((int32_t *)(a1))[0];
            v33 = v58;
          }
          v41 = a11[5 * QueueIndexForJob + 17];
        }
        ((int32_t *)(v21))[2] = 0;
        ((int32_t *)(v21))[3] = v41;
      }
      v42 = ((int32_t *)(v21))[1];
      if ( v42 != 0 )
      {
        v73 = v21;
        v62 = v33;
        (*(void (**)(uint32_t, int, unsigned int))(**(uint32_t **)(*v64 + 44) + 12))(
          *(uint32_t *)(*v64 + 44),
          v40,
          v42 << 7);
        v33 = v62;
        v21 = v73;
      }
      a11[5 * QueueIndexForJob + 13] = (uint32_t)(uintptr_t)(v33);
      v32 = v78;
      ((int32_t *)(v21))[1] = v78;
    }
    else
    {
      v43 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v33 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v43 + 44) + 8))(*(uint32_t *)(*v43 + 44), 1024);
      v21 = (pthread_mutex_t *)&a11[5 * QueueIndexForJob + 13];
      v79 = ((int32_t *)(v21))[0];
      if ( v33 != nullptr && a11[5 * QueueIndexForJob + 13] != 0 )
      {
        v44 = a11[5 * QueueIndexForJob + 17];
        if ( v44 != 0 )
        {
          a3 = a11[5 * QueueIndexForJob + 16];
          v59 = a11[5 * QueueIndexForJob + 15];
          if ( a3 > v59 )
          {
            v57 = v44 << 7;
            v56 = (void *)(v79 + (v59 << 7));
            v55 = v33;
            v71 = v33;
          }
          else
          {
            v70 = (a11[5 * QueueIndexForJob + 14] - v59) << 7;
            v56 = (void *)(v79 + (v59 << 7));
            v80 = v33;
            hkString::memCpy(v33, v56, v70);
            v57 = a3 << 7;
            v56 = (void *)a11[5 * QueueIndexForJob + 13];
            v45 = (hkString::Self *)((char *)v80 + v70);
            v71 = v80;
            v55 = v45;
          }
          hkString::memCpy(v55, v56, v57);
          v21 = (pthread_mutex_t *)&a11[5 * QueueIndexForJob + 13];
          v79 = ((int32_t *)(v21))[0];
          v33 = v71;
          v44 = a11[5 * QueueIndexForJob + 17];
        }
        ((int32_t *)(v21))[2] = 0;
        ((int32_t *)(v21))[3] = v44;
      }
      v46 = ((int32_t *)(v21))[1];
      if ( v46 != 0 )
      {
        v75 = v21;
        v67 = v33;
        (*(void (**)(uint32_t, int, unsigned int))(**(uint32_t **)(*v43 + 44) + 12))(
          *(uint32_t *)(*v43 + 44),
          v79,
          v46 << 7);
        v33 = v67;
        v21 = v75;
      }
      a11[5 * QueueIndexForJob + 13] = (uint32_t)(uintptr_t)(v33);
      v32 = 8;
      ((int32_t *)(v21))[1] = 8;
    }
LABEL_23:
    owner = ((int32_t *)(v21))[2];
    v28 = 120;
    if ( owner == 0 )
      owner = v32;
    v26 = &a16;
    v35 = owner - 1;
    ((int32_t *)(v21))[2] = v35;
    v27 = (char *)v33 + 128 * v35;
    if ( ((uint8_t)(uintptr_t)(v27) & 1) != 0 )
    {
LABEL_26:
      *v27++ = a16;
      v26 = (int16_t *)((char *)&a16 + 1);
      v28 = 119;
    }
LABEL_14:
    if ( ((uint8_t)(uintptr_t)(v27) & 2) != 0 )
    {
      v27 += 2;
      *((uint16_t *)v27 - 1) = *v26++;
      v28 -= 2;
    }
    std::memcpy(v27, v26, 4 * (v28 >> 2));
    v31 = &v26[2 * (v28 >> 2)];
    v30 = &v27[4 * (v28 >> 2)];
    v29 = 0;
    if ( (v28 & 2) != 0 )
    {
      *(uint16_t *)v30 = *v31;
      v29 = 1;
    }
    if ( (v28 & 1) != 0 )
      v30[v29 * 2] = v31[v29];
    ++((int32_t *)(v21))[4];
    hkJobQueue::checkQueueAndReleaseOneWaitingThread((uint32_t *)(a1), QueueIndexForJob, (int)(uintptr_t)(a11));
  }
  if ( a3 == 0 )
    --*((uint16_t *)a11 + *(uint8_t *)(a2 + 1));
  v56 = a11;
  LODWORD(v19) = hkJobQueue::unlockQueue(a1);
  v20 = *(uint32_t **)(a10 + 4);
  if ( (unsigned int)(uintptr_t)(v20) < *(uint32_t *)(a10 + 12) )
  {
    *v20 = (uint32_t)(uintptr_t)("Et");
    v19 = __rdtsc();
    v20[1] = v19;
    *(uint32_t *)(a10 + 4) = (uint32_t)(uintptr_t)(v20 + 3);
  }
  return v19;
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::registerJobHandler  (binary VA: 0x1a7c9b0)
// Original: hkJobQueue::registerJobHandler
// ----------------------------------------------------------------------------
uint32_t * hkJobQueue::registerJobHandler(int a1, int a2, int a3, int a4, int a5, int a6)
{
  uint32_t *result;

  result = (uint32_t *)(a1 + 16 * (a2 + 15));
  result[3] = a3;
  result[4] = a4;
  result[5] = a5;
  result[6] = a6;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::releaseWaitingThreads  (binary VA: 0x1a7c9e0)
// Original: hkJobQueue::releaseWaitingThreads
// ----------------------------------------------------------------------------
int hkJobQueue::releaseWaitingThreads(int a1, int a2)
{
  int v2;
  int result;
  int v4;
  int v5;

  v2 = 0;
  result = *(uint32_t *)(a1 + 124);
  if ( result > 0 )
  {
    do
    {
      result = a2;
      v4 = *(uint16_t *)(a2 + 2 * v2 + 42);
      for ( *(uint16_t *)(a2 + 2 * v2 + 42) = 0; v4 != 0; --v4 )
        result = hkSemaphore::release(*(hkSemaphore::Self **)(a1 + 4 * v2 + 104), (hkSemaphore::Self *)((char *)&dword_0 + 1), v5);
      ++v2;
    }
    while ( *(uint32_t *)(a1 + 124) > v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::setWaitPolicy  (binary VA: 0x1a7ca50)
// Original: hkJobQueue::setWaitPolicy
// ----------------------------------------------------------------------------
int hkJobQueue::setWaitPolicy(pthread_mutex_t *a1, int a2)
{
  int v2;

  v2 = hkJobQueue::lockQueue(a1);
  *(uint32_t *)(((int32_t *)(a1))[2] + 36) = a2;
  if ( a2 == 0 )
    hkJobQueue::releaseWaitingThreads((int)(uintptr_t)(a1), v2);
  return hkJobQueue::unlockQueue(a1);
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::finishJobAndGetNextJob  (binary VA: 0x1a7cac0)
// Original: hkJobQueue::finishJobAndGetNextJob
// ----------------------------------------------------------------------------
int hkJobQueue::finishJobAndGetNextJob(pthread_mutex_t *a1, uint8_t *a2, int a3, int a4)
{
  uint32_t *address;
  uint32_t *v5;
  uint64_t v6; // rax
  int v7;
  int v8;
  pthread_mutex_t *v9;
  int i;
  char *v11;
  int v12;
  int v13;
  int kind;
  signed int nusers;
  int v16;
  uint32_t *v17;
  int v18;
  uint32_t *v19;
  int v20;
  uint32_t *v21;
  uint64_t v22; // rax
  int v23;
  uint32_t *v24;
  uint64_t v25; // rax
  int v26;
  bool v27;
  int v28;
  int v29;
  int v30;
  uint32_t *v31;
  uint64_t v32; // rax
  int v34;
  int v35;
  int v36;
  int v37;
  bool v38;
  char *v39;
  uint32_t *v40;
  int v41;
  hkString::Self *v42;
  int v43;
  int v44;
  char *v45;
  unsigned int v46;
  int v47;
  char *v48;
  char *v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int16_t v54;
  int v55;
  hkString::Self *v56;
  int v57;
  int v58;
  int v59;
  hkString::Self *v60;
  uint16_t *v61;
  uint8_t *v62;
  unsigned int v63;
  uint16_t *v64;
  int v65;
  uint16_t *v66;
  uint16_t *v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  hkString::Self *v76;
  int v77;
  size_t v78;
  int v79;
  int v80;
  hkString::Self *v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  size_t v90;
  typedef hkSemaphore::Self *_g4_t_v91;
  typedef uint8_t *_g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef uint32_t *_g4_t_v97;
  typedef uint32_t *_g4_t_v98;
  typedef uint32_t *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef uint32_t *_g4_t_v105;
  typedef uint32_t *_g4_t_v106;
  typedef uint32_t *_g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef size_t _g4_t_v118;
  typedef size_t _g4_t_v119;
  typedef uint32_t *_g4_t_v120;
  typedef uint32_t *_g4_t_v121;
  typedef uint32_t *_g4_t_v122;
  typedef uint32_t *_g4_t_v123;
  typedef size_t _g4_t_v124;
  typedef size_t _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int *_g4_t_v132;
  typedef hkString::Self *_g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef hkString::Self *_g4_t_v136;
  typedef hkString::Self *_g4_t_v137;
  typedef int _g4_t_QueueIndexForJob;
  typedef int _g4_t_spins;
  typedef bool _g4_t_v140;
  typedef int _g4_t_v141;
  typedef uint32_t *_g4_t_v142;
  typedef uint8_t _g4_t_v143[128];
  typedef int _g4_t_v144;
  typedef char _g4_t_v145;
  typedef uint8_t _g4_t_v146[3];
  enum : size_t {
    _g4_s0 = 880u,
    _g4_s1 = (4u + sizeof(_g4_t_v91)) > _g4_s0 ? (4u + sizeof(_g4_t_v91)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v92)) > _g4_s1 ? (8u + sizeof(_g4_t_v92)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v93)) > _g4_s2 ? (16u + sizeof(_g4_t_v93)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v94)) > _g4_s3 ? (20u + sizeof(_g4_t_v94)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v95)) > _g4_s4 ? (20u + sizeof(_g4_t_v95)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v96)) > _g4_s5 ? (20u + sizeof(_g4_t_v96)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v97)) > _g4_s6 ? (24u + sizeof(_g4_t_v97)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v98)) > _g4_s7 ? (24u + sizeof(_g4_t_v98)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v99)) > _g4_s8 ? (24u + sizeof(_g4_t_v99)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v100)) > _g4_s9 ? (24u + sizeof(_g4_t_v100)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v101)) > _g4_s10 ? (24u + sizeof(_g4_t_v101)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v102)) > _g4_s11 ? (28u + sizeof(_g4_t_v102)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v103)) > _g4_s12 ? (28u + sizeof(_g4_t_v103)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v104)) > _g4_s13 ? (28u + sizeof(_g4_t_v104)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v105)) > _g4_s14 ? (28u + sizeof(_g4_t_v105)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v106)) > _g4_s15 ? (28u + sizeof(_g4_t_v106)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v107)) > _g4_s16 ? (28u + sizeof(_g4_t_v107)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v108)) > _g4_s17 ? (36u + sizeof(_g4_t_v108)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v109)) > _g4_s18 ? (40u + sizeof(_g4_t_v109)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v110)) > _g4_s19 ? (40u + sizeof(_g4_t_v110)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v111)) > _g4_s20 ? (40u + sizeof(_g4_t_v111)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v112)) > _g4_s21 ? (40u + sizeof(_g4_t_v112)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v113)) > _g4_s22 ? (40u + sizeof(_g4_t_v113)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v114)) > _g4_s23 ? (40u + sizeof(_g4_t_v114)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v115)) > _g4_s24 ? (40u + sizeof(_g4_t_v115)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v116)) > _g4_s25 ? (40u + sizeof(_g4_t_v116)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v117)) > _g4_s26 ? (40u + sizeof(_g4_t_v117)) : _g4_s26,
    _g4_s28 = (44u + sizeof(_g4_t_v118)) > _g4_s27 ? (44u + sizeof(_g4_t_v118)) : _g4_s27,
    _g4_s29 = (44u + sizeof(_g4_t_v119)) > _g4_s28 ? (44u + sizeof(_g4_t_v119)) : _g4_s28,
    _g4_s30 = (44u + sizeof(_g4_t_v120)) > _g4_s29 ? (44u + sizeof(_g4_t_v120)) : _g4_s29,
    _g4_s31 = (44u + sizeof(_g4_t_v121)) > _g4_s30 ? (44u + sizeof(_g4_t_v121)) : _g4_s30,
    _g4_s32 = (44u + sizeof(_g4_t_v122)) > _g4_s31 ? (44u + sizeof(_g4_t_v122)) : _g4_s31,
    _g4_s33 = (44u + sizeof(_g4_t_v123)) > _g4_s32 ? (44u + sizeof(_g4_t_v123)) : _g4_s32,
    _g4_s34 = (44u + sizeof(_g4_t_v124)) > _g4_s33 ? (44u + sizeof(_g4_t_v124)) : _g4_s33,
    _g4_s35 = (44u + sizeof(_g4_t_v125)) > _g4_s34 ? (44u + sizeof(_g4_t_v125)) : _g4_s34,
    _g4_s36 = (48u + sizeof(_g4_t_v126)) > _g4_s35 ? (48u + sizeof(_g4_t_v126)) : _g4_s35,
    _g4_s37 = (48u + sizeof(_g4_t_v127)) > _g4_s36 ? (48u + sizeof(_g4_t_v127)) : _g4_s36,
    _g4_s38 = (48u + sizeof(_g4_t_v128)) > _g4_s37 ? (48u + sizeof(_g4_t_v128)) : _g4_s37,
    _g4_s39 = (48u + sizeof(_g4_t_v129)) > _g4_s38 ? (48u + sizeof(_g4_t_v129)) : _g4_s38,
    _g4_s40 = (48u + sizeof(_g4_t_v130)) > _g4_s39 ? (48u + sizeof(_g4_t_v130)) : _g4_s39,
    _g4_s41 = (48u + sizeof(_g4_t_v131)) > _g4_s40 ? (48u + sizeof(_g4_t_v131)) : _g4_s40,
    _g4_s42 = (52u + sizeof(_g4_t_v132)) > _g4_s41 ? (52u + sizeof(_g4_t_v132)) : _g4_s41,
    _g4_s43 = (52u + sizeof(_g4_t_v133)) > _g4_s42 ? (52u + sizeof(_g4_t_v133)) : _g4_s42,
    _g4_s44 = (52u + sizeof(_g4_t_v134)) > _g4_s43 ? (52u + sizeof(_g4_t_v134)) : _g4_s43,
    _g4_s45 = (52u + sizeof(_g4_t_v135)) > _g4_s44 ? (52u + sizeof(_g4_t_v135)) : _g4_s44,
    _g4_s46 = (52u + sizeof(_g4_t_v136)) > _g4_s45 ? (52u + sizeof(_g4_t_v136)) : _g4_s45,
    _g4_s47 = (52u + sizeof(_g4_t_v137)) > _g4_s46 ? (52u + sizeof(_g4_t_v137)) : _g4_s46,
    _g4_s48 = (56u + sizeof(_g4_t_QueueIndexForJob)) > _g4_s47 ? (56u + sizeof(_g4_t_QueueIndexForJob)) : _g4_s47,
    _g4_s49 = (56u + sizeof(_g4_t_spins)) > _g4_s48 ? (56u + sizeof(_g4_t_spins)) : _g4_s48,
    _g4_s50 = (56u + sizeof(_g4_t_v140)) > _g4_s49 ? (56u + sizeof(_g4_t_v140)) : _g4_s49,
    _g4_s51 = (60u + sizeof(_g4_t_v141)) > _g4_s50 ? (60u + sizeof(_g4_t_v141)) : _g4_s50,
    _g4_s52 = (60u + sizeof(_g4_t_v142)) > _g4_s51 ? (60u + sizeof(_g4_t_v142)) : _g4_s51,
    _g4_s53 = (64u + sizeof(_g4_t_v143)) > _g4_s52 ? (64u + sizeof(_g4_t_v143)) : _g4_s52,
    _g4_s54 = (192u + sizeof(_g4_t_v144)) > _g4_s53 ? (192u + sizeof(_g4_t_v144)) : _g4_s53,
    _g4_s55 = (208u + sizeof(_g4_t_v145)) > _g4_s54 ? (208u + sizeof(_g4_t_v145)) : _g4_s54,
    _g4_s56 = (209u + sizeof(_g4_t_v146)) > _g4_s55 ? (209u + sizeof(_g4_t_v146)) : _g4_s55
  };
  alignas(16) uint8_t _g4_sf[_g4_s56];
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 4u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 8u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 16u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 20u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 20u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 20u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 24u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 24u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 24u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 24u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 24u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 28u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 28u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 28u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 28u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 28u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 28u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 36u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 40u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 40u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 40u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 40u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 40u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 40u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 40u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 40u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 40u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 44u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 44u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 44u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 44u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 44u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 44u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 44u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 44u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 48u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 48u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 48u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 48u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 48u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 48u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 52u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 52u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 52u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 52u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 52u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 52u);
  _g4_t_QueueIndexForJob &QueueIndexForJob = *reinterpret_cast<_g4_t_QueueIndexForJob *>(_g4_sf + 56u);
  _g4_t_spins &spins = *reinterpret_cast<_g4_t_spins *>(_g4_sf + 56u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 56u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 60u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 60u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 64u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 192u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 208u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 209u);

  address = _emutls_get_address(g4_emutls_v_hkMonitorStream__m_instance);
  v108 = *address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtGetNextJob");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v108 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  v7 = hkJobQueue::lockQueue(a1);
  v141 = v7;
  if ( a2 == nullptr )
  {
    QueueIndexForJob = -1;
    goto LABEL_6;
  }
  v92 = a2;
  QueueIndexForJob = -1;
  if ( ((int (*)(pthread_mutex_t *, int))((int32_t *)(a1))[4])(a1, v7) == 0 )
  {
    v39 = &v145;
    QueueIndexForJob = hkJobQueue::getQueueIndexForJob((int)(uintptr_t)(a1), (uint8_t *)(&v145));
    v40 = (uint32_t *)(v141 + 20 * QueueIndexForJob + 52);
    v41 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 56);
    if ( v144 == 0 )
    {
      if ( *(uint32_t *)(v141 + 20 * QueueIndexForJob + 68) < v41 )
      {
LABEL_46:
        v42 = *(hkString::Self **)(v141 + 20 * QueueIndexForJob + 52);
        goto LABEL_47;
      }
      if ( v41 != 0 )
      {
        v103 = 2 * v41;
        if ( v41 >= 2 * v41 )
          goto LABEL_46;
        v135 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 56);
        v98 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v136 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v98 + 44) + 8))(
                             *(uint32_t *)(*v98 + 44),
                             v135 << 8);
        v40 = (uint32_t *)(v141 + 20 * QueueIndexForJob + 52);
        v129 = *v40;
        if ( v136 != nullptr && *(uint32_t *)(v141 + 20 * QueueIndexForJob + 52) != 0 )
        {
          v72 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 68);
          if ( v72 != 0 )
          {
            v111 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 64);
            v73 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 60);
            if ( v111 > v73 )
            {
              hkString::memCpy(v136, (void *)(v129 + (v73 << 7)), v72 << 7);
            }
            else
            {
              v119 = (*(uint32_t *)(v141 + 20 * QueueIndexForJob + 56) - v73) << 7;
              hkString::memCpy(v136, (void *)((v73 << 7) + v129), v119);
              hkString::memCpy(
                (hkString::Self *)((char *)v136 + v119),
                *(void **)(v141 + 20 * QueueIndexForJob + 52),
                v111 << 7);
            }
            v40 = (uint32_t *)(v141 + 20 * QueueIndexForJob + 52);
            v129 = *v40;
            v72 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 68);
          }
          v40[2] = 0;
          v40[3] = v72;
        }
        v74 = v40[1];
        if ( v74 != 0 )
        {
          v122 = v40;
          v92 = (uint8_t *)(v74 << 7);
          (*(void (**)(uint32_t, int))(**(uint32_t **)(*v98 + 44) + 12))(*(uint32_t *)(*v98 + 44), v129);
          v40 = v122;
        }
        *(uint32_t *)(v141 + 20 * QueueIndexForJob + 52) = (uint32_t)(uintptr_t)(v136);
        v40[1] = v103;
        v41 = v103;
        v42 = v136;
      }
      else
      {
        v106 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
        v137 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v106 + 44) + 8))(
                             *(uint32_t *)(*v106 + 44),
                             1024);
        v40 = (uint32_t *)(v141 + 20 * QueueIndexForJob + 52);
        v130 = *v40;
        if ( v137 != nullptr && *(uint32_t *)(v141 + 20 * QueueIndexForJob + 52) != 0 )
        {
          v83 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 68);
          if ( v83 != 0 )
          {
            v116 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 64);
            v88 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 60);
            if ( v116 > v88 )
            {
              hkString::memCpy(v137, (void *)(v130 + (v88 << 7)), v83 << 7);
            }
            else
            {
              v125 = (*(uint32_t *)(v141 + 20 * QueueIndexForJob + 56) - v88) << 7;
              hkString::memCpy(v137, (void *)((v88 << 7) + v130), v125);
              hkString::memCpy(
                (hkString::Self *)((char *)v137 + v125),
                *(void **)(v141 + 20 * QueueIndexForJob + 52),
                v116 << 7);
            }
            v40 = (uint32_t *)(v141 + 20 * QueueIndexForJob + 52);
            v130 = *v40;
            v83 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 68);
          }
          v40[2] = 0;
          v40[3] = v83;
        }
        v84 = v40[1];
        if ( v84 != 0 )
        {
          v120 = v40;
          v92 = (uint8_t *)(v84 << 7);
          (*(void (**)(uint32_t, int))(**(uint32_t **)(*v106 + 44) + 12))(*(uint32_t *)(*v106 + 44), v130);
          v40 = v120;
        }
        v41 = 8;
        *(uint32_t *)(v141 + 20 * QueueIndexForJob + 52) = (uint32_t)(uintptr_t)(v137);
        v40[1] = 8;
        v42 = v137;
      }
LABEL_47:
      v43 = v40[2];
      if ( v43 == 0 )
        v43 = v41;
      v44 = v43 - 1;
      v40[2] = v44;
      v45 = (char *)v42 + 128 * v44;
      v46 = 120;
      if ( ((uint8_t)(uintptr_t)(v45) & 1) == 0 )
      {
LABEL_50:
        if ( ((uint8_t)(uintptr_t)(v45) & 2) == 0 )
        {
LABEL_51:
          std::memcpy(v45, v39, 4 * (v46 >> 2));
          v49 = &v39[4 * (v46 >> 2)];
          v48 = &v45[4 * (v46 >> 2)];
          v47 = 0;
          if ( (v46 & 2) != 0 )
          {
            *(uint16_t *)v48 = *(uint16_t *)v49;
            v47 = 2;
          }
          if ( (v46 & 1) != 0 )
            v48[v47] = v49[v47];
          ++v40[4];
          goto LABEL_5;
        }
LABEL_62:
        v45 += 2;
        *((uint16_t *)v45 - 1) = *(uint16_t *)v39;
        v39 += 2;
        v46 -= 2;
        goto LABEL_51;
      }
LABEL_61:
      *v45++ = v145;
      v39 = (char *)(v146);
      v46 = 119;
      if ( ((uint8_t)(uintptr_t)(v45) & 2) == 0 )
        goto LABEL_51;
      goto LABEL_62;
    }
    if ( *(uint32_t *)(v141 + 20 * QueueIndexForJob + 68) < v41 )
      goto LABEL_57;
    if ( v41 != 0 )
    {
      v102 = 2 * v41;
      if ( v41 >= 2 * v41 )
      {
LABEL_57:
        v133 = *(hkString::Self **)(v141 + 20 * QueueIndexForJob + 52);
        goto LABEL_58;
      }
      v134 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 56);
      v97 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v133 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v97 + 44) + 8))(
                           *(uint32_t *)(*v97 + 44),
                           v134 << 8);
      v40 = (uint32_t *)(v141 + 20 * QueueIndexForJob + 52);
      v128 = *v40;
      if ( v133 != nullptr && *(uint32_t *)(v141 + 20 * QueueIndexForJob + 52) != 0 )
      {
        v69 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 68);
        if ( v69 != 0 )
        {
          v110 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 64);
          v70 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 60);
          if ( v110 > v70 )
          {
            hkString::memCpy(v133, (void *)(v128 + (v70 << 7)), v69 << 7);
          }
          else
          {
            v118 = (*(uint32_t *)(v141 + 20 * QueueIndexForJob + 56) - v70) << 7;
            hkString::memCpy(v133, (void *)((v70 << 7) + v128), v118);
            hkString::memCpy(
              (hkString::Self *)((char *)v133 + v118),
              *(void **)(v141 + 20 * QueueIndexForJob + 52),
              v110 << 7);
          }
          v40 = (uint32_t *)(v141 + 20 * QueueIndexForJob + 52);
          v128 = *v40;
          v69 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 68);
        }
        v40[2] = 0;
        v40[3] = v69;
      }
      v71 = v40[1];
      if ( v71 != 0 )
      {
        v123 = v40;
        v92 = (uint8_t *)(v71 << 7);
        (*(void (**)(uint32_t, int))(**(uint32_t **)(*v97 + 44) + 12))(*(uint32_t *)(*v97 + 44), v128);
        v40 = v123;
      }
      *(uint32_t *)(v141 + 20 * QueueIndexForJob + 52) = (uint32_t)(uintptr_t)(v133);
      v40[1] = v102;
      v41 = v102;
    }
    else
    {
      v107 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v133 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v107 + 44) + 8))(
                           *(uint32_t *)(*v107 + 44),
                           1024);
      v40 = (uint32_t *)(v141 + 20 * QueueIndexForJob + 52);
      v131 = *v40;
      if ( v133 != nullptr && *(uint32_t *)(v141 + 20 * QueueIndexForJob + 52) != 0 )
      {
        v85 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 68);
        if ( v85 != 0 )
        {
          v115 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 64);
          v87 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 60);
          if ( v115 > v87 )
          {
            hkString::memCpy(v133, (void *)(v131 + (v87 << 7)), v85 << 7);
          }
          else
          {
            v124 = (*(uint32_t *)(v141 + 20 * QueueIndexForJob + 56) - v87) << 7;
            hkString::memCpy(v133, (void *)((v87 << 7) + v131), v124);
            hkString::memCpy(
              (hkString::Self *)((char *)v133 + v124),
              *(void **)(v141 + 20 * QueueIndexForJob + 52),
              v115 << 7);
          }
          v40 = (uint32_t *)(v141 + 20 * QueueIndexForJob + 52);
          v131 = *v40;
          v85 = *(uint32_t *)(v141 + 20 * QueueIndexForJob + 68);
        }
        v40[2] = 0;
        v40[3] = v85;
      }
      v86 = v40[1];
      if ( v86 != 0 )
      {
        v121 = v40;
        v92 = (uint8_t *)(v86 << 7);
        (*(void (**)(uint32_t, int))(**(uint32_t **)(*v107 + 44) + 12))(*(uint32_t *)(*v107 + 44), v131);
        v40 = v121;
      }
      v41 = 8;
      *(uint32_t *)(v141 + 20 * QueueIndexForJob + 52) = (uint32_t)(uintptr_t)(v133);
      v40[1] = 8;
    }
LABEL_58:
    v50 = v40[3];
    if ( v50 == v41 )
    {
      v51 = 0;
      v52 = 1;
    }
    else
    {
      v51 = v50 << 7;
      v52 = v40[3] + 1;
    }
    v40[3] = v52;
    v45 = (char *)v133 + v51;
    v46 = 120;
    if ( ((uint8_t)(uintptr_t)(v45) & 1) == 0 )
      goto LABEL_50;
    goto LABEL_61;
  }
LABEL_5:
  --*(uint16_t *)(v141 + 2 * (uint8_t)a2[1]);
LABEL_6:
  v132 = (int *)(_emutls_get_address(g4_emutls_v_hkThreadNumber));
  v8 = *v132;
  if ( *v132 != 0 )
    goto LABEL_23;
LABEL_7:
  v9 = a1;
  for ( i = G4_MUTEX_SPINS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (2)))); ; i = G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (9))))[v8 + 22] )
  {
    v11 = (char *)(&G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v9) + (24 * (5))))[22 * i + 8]);
    do
    {
      v12 = *v11;
      if ( v12 < 0 )
      {
        v13 = -1;
        if ( QueueIndexForJob != -1 )
          goto LABEL_28;
        goto LABEL_12;
      }
      ++v11;
    }
    while ( *(uint32_t *)(v141 + 20 * v12 + 68) == 0 );
    v126 = v141 + 20 * v12 + 52;
    std::memcpy(v143, (const void *)(*(uint32_t *)v126 + (*(uint32_t *)(v141 + 20 * v12 + 60) << 7)), 120);
    v26 = *(uint32_t *)(v141 + 20 * v12 + 60) + 1;
    v27 = v26 == *(uint32_t *)(v141 + 20 * v12 + 56);
    *(uint32_t *)(v141 + 20 * v12 + 60) = v26;
    if ( v27 )
      *(uint32_t *)(v141 + 20 * v12 + 60) = 0;
    v109 = v12;
    --*(uint32_t *)(v141 + 20 * v12 + 68);
    v92 = v143;
    v28 = ((int (*)(pthread_mutex_t *, int))((int32_t *)(a1))[3])(a1, v141);
    v29 = v109;
    if ( v28 == 1 )
    {
      v55 = *(uint32_t *)(v126 + 4);
      if ( *(uint32_t *)(v126 + 16) >= v55 )
      {
        if ( v55 != 0 )
        {
          v104 = 2 * v55;
          if ( v55 >= 2 * v55 )
          {
            v57 = v126;
            v56 = *(hkString::Self **)v126;
          }
          else
          {
            v99 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
            v56 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v99 + 44) + 8))(
                                *(uint32_t *)(*v99 + 44),
                                v55 << 8);
            v29 = v109;
            if ( v56 != nullptr )
            {
              v75 = v126;
              v76 = *(hkString::Self **)v126;
              if ( *(uint32_t *)v126 != 0 )
              {
                v112 = *(uint32_t *)(v126 + 16);
                if ( v112 != 0 )
                {
                  v77 = *(uint32_t *)(v126 + 8);
                  v94 = *(uint32_t *)(v126 + 12);
                  if ( v94 > v77 )
                  {
                    v96 = v29;
                    hkString::memCpy(v56, (char *)v76 + 128 * v77, v112 << 7);
                    v29 = v96;
                  }
                  else
                  {
                    v93 = v29;
                    v78 = (*(uint32_t *)(v126 + 4) - v77) << 7;
                    hkString::memCpy(v56, (char *)v76 + 128 * v77, v78);
                    hkString::memCpy((hkString::Self *)((char *)v56 + v78), *(void **)v126, v94 << 7);
                    v29 = v93;
                  }
                  v76 = *(hkString::Self **)v126;
                  v112 = *(uint32_t *)(v126 + 16);
                }
                v75 = v126;
                *(uint32_t *)(v126 + 8) = 0;
                *(uint32_t *)(v126 + 12) = v112;
              }
            }
            else
            {
              v75 = v126;
              v76 = *(hkString::Self **)v126;
            }
            v79 = *(uint32_t *)(v75 + 4);
            if ( v79 != 0 )
            {
              v113 = v29;
              (*(void (**)(uint32_t, hkString::Self *, int))(**(uint32_t **)(*v99 + 44) + 12))(
                *(uint32_t *)(*v99 + 44),
                v76,
                v79 << 7);
              v29 = v113;
            }
            v55 = v104;
            v57 = v126;
            *(uint32_t *)v126 = (uint32_t)(uintptr_t)(v56);
            *(uint32_t *)(v126 + 4) = v104;
          }
        }
        else
        {
          v105 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
          v56 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v105 + 44) + 8))(
                              *(uint32_t *)(*v105 + 44),
                              1024);
          v29 = v109;
          if ( v56 != nullptr )
          {
            v80 = v126;
            v81 = *(hkString::Self **)v126;
            if ( *(uint32_t *)v126 != 0 )
            {
              v114 = *(uint32_t *)(v126 + 16);
              if ( v114 != 0 )
              {
                v89 = *(uint32_t *)(v126 + 8);
                v100 = *(uint32_t *)(v126 + 12);
                if ( v100 > v89 )
                {
                  v101 = v29;
                  hkString::memCpy(v56, (char *)v81 + 128 * v89, v114 << 7);
                  v29 = v101;
                }
                else
                {
                  v95 = v29;
                  v90 = (*(uint32_t *)(v126 + 4) - v89) << 7;
                  hkString::memCpy(v56, (char *)v81 + 128 * v89, v90);
                  hkString::memCpy((hkString::Self *)((char *)v56 + v90), *(void **)v126, v100 << 7);
                  v29 = v95;
                }
                v81 = *(hkString::Self **)v126;
                v114 = *(uint32_t *)(v126 + 16);
              }
              v80 = v126;
              *(uint32_t *)(v126 + 8) = 0;
              *(uint32_t *)(v126 + 12) = v114;
            }
          }
          else
          {
            v80 = v126;
            v81 = *(hkString::Self **)v126;
          }
          v82 = *(uint32_t *)(v80 + 4);
          if ( v82 != 0 )
          {
            v117 = v29;
            (*(void (**)(uint32_t, hkString::Self *, int))(**(uint32_t **)(*v105 + 44) + 12))(
              *(uint32_t *)(*v105 + 44),
              v81,
              v82 << 7);
            v29 = v117;
          }
          v55 = 8;
          v57 = v126;
          *(uint32_t *)v126 = (uint32_t)(uintptr_t)(v56);
          *(uint32_t *)(v126 + 4) = 8;
        }
      }
      else
      {
        v56 = *(hkString::Self **)v126;
        v57 = v126;
      }
      v58 = *(uint32_t *)(v57 + 8);
      if ( v58 == 0 )
        v58 = v55;
      v59 = v58 - 1;
      *(uint32_t *)(v57 + 8) = v59;
      v60 = v56;
      v61 = (uint16_t *)(v143);
      v62 = (uint8_t *)((char *)v60 + 128 * v59);
      v63 = 120;
      v64 = (uint16_t *)(v62);
      if ( ((uint8_t)(uintptr_t)(v62) & 1) != 0 )
      {
        v64 = (uint16_t *)(v62 + 1);
        *v62 = v143[0];
        v61 = (uint16_t *)(&v143[1]);
        v63 = 119;
      }
      if ( ((uint8_t)(uintptr_t)(v64) & 2) != 0 )
      {
        *v64++ = *v61++;
        v63 -= 2;
      }
      std::memcpy(v64, v61, 4 * (v63 >> 2));
      v67 = &v61[2 * (v63 >> 2)];
      v66 = &v64[2 * (v63 >> 2)];
      v65 = 0;
      if ( (v63 & 2) != 0 )
      {
        *v66 = *v67;
        v65 = 1;
        if ( (v63 & 1) == 0 )
          goto LABEL_78;
      }
      else if ( (v63 & 1) == 0 )
      {
LABEL_78:
        v68 = v126;
        v127 = v29;
        ++*(uint32_t *)(v68 + 16);
        hkJobQueue::checkQueueAndReleaseOneWaitingThread((uint32_t *)(a1), v29, v141);
        v29 = v127;
        goto LABEL_27;
      }
      LOBYTE(v66[v65]) = v67[v65];
      goto LABEL_78;
    }
LABEL_27:
    v13 = v29;
    ++*(uint16_t *)(v141 + 2 * v143[1]);
    if ( QueueIndexForJob != v29 )
    {
LABEL_28:
      if ( QueueIndexForJob != -1 )
      {
        hkJobQueue::checkQueueAndReleaseOneWaitingThread((uint32_t *)(a1), QueueIndexForJob, v141);
        if ( v13 != -1 )
          goto LABEL_30;
        goto LABEL_13;
      }
    }
LABEL_12:
    if ( v13 != -1 )
    {
LABEL_30:
      v30 = 0;
      hkJobQueue::unlockQueue(a1);
      goto LABEL_31;
    }
LABEL_13:
    kind = G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (2))));
    nusers = G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (2))));
    if ( nusers > kind )
    {
      v16 = 0;
      v17 = (uint32_t *)(v141 + 20 * kind + 68);
      do
      {
        ++kind;
        v16 += *v17;
        v17 += 5;
      }
      while ( kind != nusers );
      if ( v16 != 0 )
        goto LABEL_17;
    }
    if ( G4_MUTEX_SPINS(a1) <= 0 )
      break;
    v34 = 0;
    v35 = 0;
    spins = G4_MUTEX_SPINS(a1);
    do
    {
      while ( *(int16_t *)(v141 + 2 * v35) > 0 )
      {
        v36 = 1 << v35++;
        v34 |= v36;
        if ( v35 == spins )
          goto LABEL_39;
      }
      v37 = (*(uint32_t *)(v141 + 20 * (v35 + G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (1))))) + 68) != 0) << v35;
      ++v35;
      v34 |= v37;
    }
    while ( v35 != spins );
LABEL_39:
    v38 = v34 == 0;
    if ( (v34 & *(uint32_t *)(v141 + 32)) == 0 )
      goto LABEL_40;
LABEL_65:
    if ( v38 && *(uint32_t *)(v141 + 36) != 1 )
      goto LABEL_42;
LABEL_17:
    if ( a4 == 1 )
    {
      v30 = 1;
      hkJobQueue::unlockQueue(a1);
      goto LABEL_31;
    }
    v18 = G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (9))))[*v132 + 22];
    ++*(uint16_t *)(v141 + 2 * v18 + 42);
    v91 = (hkSemaphore::Self *)v141;
    hkJobQueue::unlockQueue(a1);
    v19 = _emutls_get_address(g4_emutls_v_hkMonitorStream__m_instance);
    v20 = *v19;
    v142 = v19;
    v21 = *(uint32_t **)(*v19 + 4);
    if ( (unsigned int)(uintptr_t)(v21) < *(uint32_t *)(*v19 + 12) )
    {
      *v21 = (uint32_t)(uintptr_t)("TtNoJobAvailable");
      v22 = __rdtsc();
      v21[1] = v22;
      *(uint32_t *)(v20 + 4) = (uint32_t)(uintptr_t)(v21 + 3);
    }
    hkSemaphore::acquire(*((hkSemaphore::Self **)&G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (4)))) + v18), v91);
    v23 = *v142;
    v24 = *(uint32_t **)(*v142 + 4);
    if ( (unsigned int)(uintptr_t)(v24) < *(uint32_t *)(*v142 + 12) )
    {
      *v24 = (uint32_t)(uintptr_t)("Et");
      v25 = __rdtsc();
      v24[1] = v25;
      *(uint32_t *)(v23 + 4) = (uint32_t)(uintptr_t)(v24 + 3);
    }
    v141 = hkJobQueue::lockQueue(a1);
    QueueIndexForJob = -1;
    v8 = *v132;
    if ( *v132 == 0 )
      goto LABEL_7;
LABEL_23:
    v9 = a1;
  }
  v38 = true;
LABEL_40:
  if ( *v132 != 0 )
  {
    v53 = v141 + 2 * G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (9))))[22];
    v54 = *(uint16_t *)(v53 + 42);
    if ( v54 != 0 )
    {
      v140 = v38;
      *(uint16_t *)(v53 + 42) = v54 - 1;
      hkSemaphore::release(
        *((hkSemaphore::Self **)&G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (4)))) + G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (9))))[22]),
        (hkSemaphore::Self *)((char *)&dword_0 + 1),
        (int)(uintptr_t)(v92));
      v38 = v140;
    }
    goto LABEL_65;
  }
  if ( v38 )
LABEL_42:
    hkJobQueue::releaseWaitingThreads((int)(uintptr_t)(a1), v141);
  v30 = 2;
  hkJobQueue::unlockQueue(a1);
LABEL_31:
  v31 = *(uint32_t **)(v108 + 4);
  if ( (unsigned int)(uintptr_t)(v31) < *(uint32_t *)(v108 + 12) )
  {
    *v31 = (uint32_t)(uintptr_t)("Et");
    v32 = __rdtsc();
    v31[1] = v32;
    *(uint32_t *)(v108 + 4) = (uint32_t)(uintptr_t)(v31 + 3);
  }
  return v30;
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::getNextJob  (binary VA: 0x1a7d9c0)
// Original: hkJobQueue::getNextJob
// ----------------------------------------------------------------------------
int hkJobQueue::getNextJob(pthread_mutex_t *a1, int a2, int a3)
{
  return hkJobQueue::finishJobAndGetNextJob(a1, nullptr, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::processAllJobs  (binary VA: 0x1a7da00)
// Original: hkJobQueue::processAllJobs
// ----------------------------------------------------------------------------
int hkJobQueue::processAllJobs(pthread_mutex_t *self, bool a2)
{
  int NextJob;
  int v3;
  const char *v4;
  int v5;
  const char **v6;
  uint64_t v7; // rax
  int v8;
  int v9;
  uint32_t *v10;
  uint64_t v11; // rax
  typedef int *_g4_t_address;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[140];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_address)) > _g4_s0 ? (12u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v14)) > _g4_s1 ? (20u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v16)) > _g4_s3 ? (32u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);

  NextJob = hkJobQueue::getNextJob(self, (int)(uintptr_t)(v16), 0);
  if ( NextJob == 0 )
  {
    address = (int *)(_emutls_get_address(g4_emutls_v_hkMonitorStream__m_instance));
    do
    {
      v3 = v16[1];
      switch ( v16[1] )
      {
        case 0:
        case 1:
        case 0xD:
          v4 = "TtPhysics 2012";
          break;
        case 2:
          v4 = "TtCollision Query";
          break;
        case 3:
          v4 = "TtRayCast Query";
          break;
        case 4:
          v4 = "TtAnimation Sample and Combine";
          break;
        case 5:
          v4 = "TtAnimation Sample and Blend";
          break;
        case 6:
          v4 = "TtAnimation Mapping";
          break;
        case 7:
          v4 = "TtBehavior";
          break;
        case 8:
          v4 = "TtCloth";
          break;
        case 9:
          v4 = "TtDestruction";
          break;
        case 0xB:
          v4 = "TtCharacter Proxy";
          break;
        case 0xC:
          v4 = "TtVehicle";
          break;
        case 0xE:
          v4 = "TtUserJob";
          break;
        default:
          v4 = "TtOther";
          break;
      }
      v5 = *address;
      v15 = *address;
      if ( a2 )
      {
        v6 = *(const char ***)(v5 + 4);
        if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(v5 + 12) )
        {
          *v6 = v4;
          v7 = __rdtsc();
          v6[1] = (const char *)v7;
          *(uint32_t *)(v15 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
        }
      }
      v8 = *((uint32_t *)self + 127);
      if ( v8 != 0 )
        G4_VCALL<void>(v8, 8, v3, v16[0]);
      NextJob = (*(int (**)(pthread_mutex_t *, uint8_t *))(*((uint32_t *)self + 4 * v3 + 63) + 4 * v16[0]))(
                  self,
                  v16);
      v9 = *((uint32_t *)self + 127);
      if ( v9 != 0 )
      {
        v14 = NextJob;
        G4_VCALL<void>(v9, 12, v3);
        NextJob = v14;
      }
      if ( a2 )
      {
        v10 = *(uint32_t **)(v15 + 4);
        if ( (unsigned int)(uintptr_t)(v10) < *(uint32_t *)(v15 + 12) )
        {
          *v10 = (uint32_t)(uintptr_t)("Et");
          v11 = __rdtsc();
          v10[1] = v11;
          *(uint32_t *)(v15 + 4) = (uint32_t)(uintptr_t)(v10 + 3);
        }
      }
    }
    while ( NextJob == 0 );
  }
  return NextJob;
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::finishAddAndGetNextJob  (binary VA: 0x1a7dc20)
// Original: hkJobQueue::finishAddAndGetNextJob
// ----------------------------------------------------------------------------
int hkJobQueue::finishAddAndGetNextJob(pthread_mutex_t *a1, int a2, int a3, uint8_t *a4, int a5)
{
  uint32_t *address;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  hkString::Self *v13;
  int v14;
  int v15;
  int v16;
  uint8_t *v17;
  uint16_t *v18;
  unsigned int v19;
  int v20;
  uint16_t *v21;
  uint16_t *v22;
  int v23;
  pthread_mutex_t *v24;
  int i;
  char *v26;
  int v27;
  int v28;
  int kind;
  signed int nusers;
  int v31;
  uint32_t *v32;
  int v33;
  uint32_t *v34;
  int v35;
  uint32_t *v36;
  uint64_t v37; // rax
  int v38;
  uint32_t *v39;
  uint64_t v40; // rax
  int v41;
  bool v42;
  int v43;
  int v44;
  int v45;
  uint32_t *v46;
  uint64_t v47; // rax
  int v49;
  int v50;
  int v51;
  int v52;
  bool v53;
  int v54;
  int v55;
  int v56;
  int16_t v57;
  int v58;
  hkString::Self *v59;
  int v60;
  int v61;
  int v62;
  hkString::Self *v63;
  uint16_t *v64;
  uint8_t *v65;
  unsigned int v66;
  uint16_t *v67;
  int v68;
  uint16_t *v69;
  uint16_t *v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  hkString::Self *v79;
  int v80;
  size_t v81;
  int v82;
  int v83;
  hkString::Self *v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  size_t v93;
  typedef hkSemaphore::Self *_g4_t_v94;
  typedef uint8_t *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef uint32_t *_g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef uint32_t *_g4_t_v103;
  typedef uint32_t *_g4_t_v104;
  typedef int _g4_t_v105;
  typedef uint32_t *_g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef uint32_t *_g4_t_v114;
  typedef uint32_t *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef size_t _g4_t_v124;
  typedef int _g4_t_v125;
  typedef size_t _g4_t_v126;
  typedef size_t _g4_t_v127;
  typedef uint32_t *_g4_t_v128;
  typedef size_t _g4_t_v129;
  typedef uint32_t *_g4_t_v130;
  typedef uint32_t *_g4_t_v131;
  typedef uint32_t *_g4_t_v132;
  typedef int *_g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_QueueIndexForJob;
  typedef int _g4_t_spins;
  typedef bool _g4_t_v140;
  typedef int _g4_t_v141;
  typedef uint32_t *_g4_t_v142;
  typedef uint8_t _g4_t_v143[128];
  enum : size_t {
    _g4_s0 = 736u,
    _g4_s1 = (4u + sizeof(_g4_t_v94)) > _g4_s0 ? (4u + sizeof(_g4_t_v94)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v95)) > _g4_s1 ? (8u + sizeof(_g4_t_v95)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v96)) > _g4_s2 ? (16u + sizeof(_g4_t_v96)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v97)) > _g4_s3 ? (20u + sizeof(_g4_t_v97)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v98)) > _g4_s4 ? (20u + sizeof(_g4_t_v98)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v99)) > _g4_s5 ? (20u + sizeof(_g4_t_v99)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v100)) > _g4_s6 ? (24u + sizeof(_g4_t_v100)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v101)) > _g4_s7 ? (24u + sizeof(_g4_t_v101)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v102)) > _g4_s8 ? (24u + sizeof(_g4_t_v102)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v103)) > _g4_s9 ? (28u + sizeof(_g4_t_v103)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v104)) > _g4_s10 ? (28u + sizeof(_g4_t_v104)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v105)) > _g4_s11 ? (28u + sizeof(_g4_t_v105)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v106)) > _g4_s12 ? (28u + sizeof(_g4_t_v106)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v107)) > _g4_s13 ? (36u + sizeof(_g4_t_v107)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v108)) > _g4_s14 ? (40u + sizeof(_g4_t_v108)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v109)) > _g4_s15 ? (40u + sizeof(_g4_t_v109)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v110)) > _g4_s16 ? (40u + sizeof(_g4_t_v110)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v111)) > _g4_s17 ? (40u + sizeof(_g4_t_v111)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v112)) > _g4_s18 ? (40u + sizeof(_g4_t_v112)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v113)) > _g4_s19 ? (40u + sizeof(_g4_t_v113)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v114)) > _g4_s20 ? (40u + sizeof(_g4_t_v114)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v115)) > _g4_s21 ? (40u + sizeof(_g4_t_v115)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v116)) > _g4_s22 ? (40u + sizeof(_g4_t_v116)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_v117)) > _g4_s23 ? (44u + sizeof(_g4_t_v117)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v118)) > _g4_s24 ? (44u + sizeof(_g4_t_v118)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v119)) > _g4_s25 ? (44u + sizeof(_g4_t_v119)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v120)) > _g4_s26 ? (44u + sizeof(_g4_t_v120)) : _g4_s26,
    _g4_s28 = (48u + sizeof(_g4_t_v121)) > _g4_s27 ? (48u + sizeof(_g4_t_v121)) : _g4_s27,
    _g4_s29 = (48u + sizeof(_g4_t_v122)) > _g4_s28 ? (48u + sizeof(_g4_t_v122)) : _g4_s28,
    _g4_s30 = (48u + sizeof(_g4_t_v123)) > _g4_s29 ? (48u + sizeof(_g4_t_v123)) : _g4_s29,
    _g4_s31 = (48u + sizeof(_g4_t_v124)) > _g4_s30 ? (48u + sizeof(_g4_t_v124)) : _g4_s30,
    _g4_s32 = (48u + sizeof(_g4_t_v125)) > _g4_s31 ? (48u + sizeof(_g4_t_v125)) : _g4_s31,
    _g4_s33 = (48u + sizeof(_g4_t_v126)) > _g4_s32 ? (48u + sizeof(_g4_t_v126)) : _g4_s32,
    _g4_s34 = (48u + sizeof(_g4_t_v127)) > _g4_s33 ? (48u + sizeof(_g4_t_v127)) : _g4_s33,
    _g4_s35 = (48u + sizeof(_g4_t_v128)) > _g4_s34 ? (48u + sizeof(_g4_t_v128)) : _g4_s34,
    _g4_s36 = (48u + sizeof(_g4_t_v129)) > _g4_s35 ? (48u + sizeof(_g4_t_v129)) : _g4_s35,
    _g4_s37 = (48u + sizeof(_g4_t_v130)) > _g4_s36 ? (48u + sizeof(_g4_t_v130)) : _g4_s36,
    _g4_s38 = (48u + sizeof(_g4_t_v131)) > _g4_s37 ? (48u + sizeof(_g4_t_v131)) : _g4_s37,
    _g4_s39 = (48u + sizeof(_g4_t_v132)) > _g4_s38 ? (48u + sizeof(_g4_t_v132)) : _g4_s38,
    _g4_s40 = (52u + sizeof(_g4_t_v133)) > _g4_s39 ? (52u + sizeof(_g4_t_v133)) : _g4_s39,
    _g4_s41 = (52u + sizeof(_g4_t_v134)) > _g4_s40 ? (52u + sizeof(_g4_t_v134)) : _g4_s40,
    _g4_s42 = (52u + sizeof(_g4_t_v135)) > _g4_s41 ? (52u + sizeof(_g4_t_v135)) : _g4_s41,
    _g4_s43 = (52u + sizeof(_g4_t_v136)) > _g4_s42 ? (52u + sizeof(_g4_t_v136)) : _g4_s42,
    _g4_s44 = (52u + sizeof(_g4_t_v137)) > _g4_s43 ? (52u + sizeof(_g4_t_v137)) : _g4_s43,
    _g4_s45 = (56u + sizeof(_g4_t_QueueIndexForJob)) > _g4_s44 ? (56u + sizeof(_g4_t_QueueIndexForJob)) : _g4_s44,
    _g4_s46 = (56u + sizeof(_g4_t_spins)) > _g4_s45 ? (56u + sizeof(_g4_t_spins)) : _g4_s45,
    _g4_s47 = (56u + sizeof(_g4_t_v140)) > _g4_s46 ? (56u + sizeof(_g4_t_v140)) : _g4_s46,
    _g4_s48 = (60u + sizeof(_g4_t_v141)) > _g4_s47 ? (60u + sizeof(_g4_t_v141)) : _g4_s47,
    _g4_s49 = (60u + sizeof(_g4_t_v142)) > _g4_s48 ? (60u + sizeof(_g4_t_v142)) : _g4_s48,
    _g4_s50 = (64u + sizeof(_g4_t_v143)) > _g4_s49 ? (64u + sizeof(_g4_t_v143)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 4u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 8u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 16u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 20u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 20u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 20u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 24u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 24u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 24u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 28u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 28u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 28u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 28u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 36u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 40u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 40u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 40u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 40u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 40u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 40u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 40u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 40u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 40u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 44u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 44u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 44u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 44u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 48u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 48u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 48u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 48u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 48u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 48u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 48u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 48u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 48u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 48u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 48u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 48u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 52u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 52u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 52u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 52u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 52u);
  _g4_t_QueueIndexForJob &QueueIndexForJob = *reinterpret_cast<_g4_t_QueueIndexForJob *>(_g4_sf + 56u);
  _g4_t_spins &spins = *reinterpret_cast<_g4_t_spins *>(_g4_sf + 56u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 56u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 60u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 60u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 64u);

  address = _emutls_get_address(g4_emutls_v_hkMonitorStream__m_instance);
  v107 = *address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtGetNextJob");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v107 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  v8 = hkJobQueue::lockQueue(a1);
  --*(uint16_t *)(v8 + 2 * a2);
  v9 = v8;
  v141 = v8;
  QueueIndexForJob = hkJobQueue::getQueueIndexForJob((int)(uintptr_t)(a1), a4);
  v10 = v9 + 20 * QueueIndexForJob + 48;
  v11 = (uint32_t *)(v9 + 20 * QueueIndexForJob + 52);
  v12 = *(uint32_t *)(v9 + 20 * QueueIndexForJob + 56);
  if ( a3 != 0 )
  {
    if ( *(uint32_t *)(v9 + 20 * QueueIndexForJob + 68) < v12 )
      goto LABEL_54;
    if ( v12 == 0 )
    {
      v115 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v13 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v115 + 44) + 8))(*(uint32_t *)(*v115 + 44), 1024);
      v11 = (uint32_t *)(v10 + 4);
      v137 = *(uint32_t *)(v10 + 4);
      if ( v13 != nullptr && *(uint32_t *)(v10 + 4) != 0 )
      {
        v89 = *(uint32_t *)(v10 + 20);
        if ( v89 != 0 )
        {
          v120 = *(uint32_t *)(v10 + 16);
          v90 = *(uint32_t *)(v10 + 12);
          if ( v120 > v90 )
          {
            hkString::memCpy(v13, (void *)(v137 + (v90 << 7)), v89 << 7);
          }
          else
          {
            v129 = (*(uint32_t *)(v10 + 8) - v90) << 7;
            hkString::memCpy(v13, (void *)((v90 << 7) + v137), v129);
            hkString::memCpy((hkString::Self *)((char *)v13 + v129), *(void **)(v10 + 4), v120 << 7);
          }
          v11 = (uint32_t *)(v10 + 4);
          v137 = *(uint32_t *)(v10 + 4);
          v89 = *(uint32_t *)(v10 + 20);
        }
        v11[2] = 0;
        v11[3] = v89;
      }
      v91 = v11[1];
      if ( v91 != 0 )
      {
        v130 = v11;
        v95 = (uint8_t *)(v91 << 7);
        (*(void (**)(uint32_t, int))(**(uint32_t **)(*v115 + 44) + 12))(*(uint32_t *)(*v115 + 44), v137);
        v11 = v130;
      }
      *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v13);
      v12 = 8;
      v11[1] = 8;
      goto LABEL_55;
    }
    v117 = 2 * v12;
    if ( v12 >= 2 * v12 )
    {
LABEL_54:
      v13 = *(hkString::Self **)(v9 + 20 * QueueIndexForJob + 52);
    }
    else
    {
      v123 = *(uint32_t *)(v9 + 20 * QueueIndexForJob + 56);
      v103 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
      v13 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v103 + 44) + 8))(
                          *(uint32_t *)(*v103 + 44),
                          v123 << 8);
      v11 = (uint32_t *)(v10 + 4);
      v134 = *(uint32_t *)(v10 + 4);
      if ( v13 != nullptr && *(uint32_t *)(v10 + 4) != 0 )
      {
        v72 = *(uint32_t *)(v10 + 20);
        if ( v72 != 0 )
        {
          v109 = *(uint32_t *)(v10 + 16);
          v73 = *(uint32_t *)(v10 + 12);
          if ( v109 > v73 )
          {
            hkString::memCpy(v13, (void *)(v134 + (v73 << 7)), v72 << 7);
          }
          else
          {
            v124 = (*(uint32_t *)(v10 + 8) - v73) << 7;
            hkString::memCpy(v13, (void *)((v73 << 7) + v134), v124);
            hkString::memCpy((hkString::Self *)((char *)v13 + v124), *(void **)(v10 + 4), v109 << 7);
          }
          v11 = (uint32_t *)(v10 + 4);
          v134 = *(uint32_t *)(v10 + 4);
          v72 = *(uint32_t *)(v10 + 20);
        }
        v11[2] = 0;
        v11[3] = v72;
      }
      v74 = v11[1];
      if ( v74 != 0 )
      {
        v132 = v11;
        v95 = (uint8_t *)(v74 << 7);
        (*(void (**)(uint32_t, int))(**(uint32_t **)(*v103 + 44) + 12))(*(uint32_t *)(*v103 + 44), v134);
        v11 = v132;
      }
      *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v13);
      v12 = v117;
      v11[1] = v117;
    }
LABEL_55:
    v54 = v11[3];
    if ( v54 == v12 )
    {
      v16 = 0;
      v55 = 1;
    }
    else
    {
      v16 = v54 << 7;
      v55 = v11[3] + 1;
    }
    v11[3] = v55;
    goto LABEL_9;
  }
  if ( *(uint32_t *)(v9 + 20 * QueueIndexForJob + 68) < v12 )
    goto LABEL_5;
  if ( v12 == 0 )
  {
    v114 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v13 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v114 + 44) + 8))(*(uint32_t *)(*v114 + 44), 1024);
    v11 = (uint32_t *)(v10 + 4);
    v136 = *(uint32_t *)(v10 + 4);
    if ( v13 != nullptr && *(uint32_t *)(v10 + 4) != 0 )
    {
      v86 = *(uint32_t *)(v10 + 20);
      if ( v86 != 0 )
      {
        v119 = *(uint32_t *)(v10 + 16);
        v87 = *(uint32_t *)(v10 + 12);
        if ( v119 > v87 )
        {
          hkString::memCpy(v13, (void *)(v136 + (v87 << 7)), v86 << 7);
        }
        else
        {
          v127 = (*(uint32_t *)(v10 + 8) - v87) << 7;
          hkString::memCpy(v13, (void *)((v87 << 7) + v136), v127);
          hkString::memCpy((hkString::Self *)((char *)v13 + v127), *(void **)(v10 + 4), v119 << 7);
        }
        v11 = (uint32_t *)(v10 + 4);
        v136 = *(uint32_t *)(v10 + 4);
        v86 = *(uint32_t *)(v10 + 20);
      }
      v11[2] = 0;
      v11[3] = v86;
    }
    v88 = v11[1];
    if ( v88 != 0 )
    {
      v128 = v11;
      v95 = (uint8_t *)(v88 << 7);
      (*(void (**)(uint32_t, int))(**(uint32_t **)(*v114 + 44) + 12))(*(uint32_t *)(*v114 + 44), v136);
      v11 = v128;
    }
    *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v13);
    v12 = 8;
    v11[1] = 8;
    goto LABEL_6;
  }
  v118 = 2 * v12;
  if ( v12 >= 2 * v12 )
  {
LABEL_5:
    v13 = *(hkString::Self **)(v9 + 20 * QueueIndexForJob + 52);
  }
  else
  {
    v125 = *(uint32_t *)(v9 + 20 * QueueIndexForJob + 56);
    v104 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v13 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v104 + 44) + 8))(
                        *(uint32_t *)(*v104 + 44),
                        v125 << 8);
    v11 = (uint32_t *)(v10 + 4);
    v135 = *(uint32_t *)(v10 + 4);
    if ( v13 != nullptr && *(uint32_t *)(v10 + 4) != 0 )
    {
      v75 = *(uint32_t *)(v10 + 20);
      if ( v75 != 0 )
      {
        v110 = *(uint32_t *)(v10 + 16);
        v76 = *(uint32_t *)(v10 + 12);
        if ( v110 > v76 )
        {
          hkString::memCpy(v13, (void *)(v135 + (v76 << 7)), v75 << 7);
        }
        else
        {
          v126 = (*(uint32_t *)(v10 + 8) - v76) << 7;
          hkString::memCpy(v13, (void *)((v76 << 7) + v135), v126);
          hkString::memCpy((hkString::Self *)((char *)v13 + v126), *(void **)(v10 + 4), v110 << 7);
        }
        v11 = (uint32_t *)(v10 + 4);
        v135 = *(uint32_t *)(v10 + 4);
        v75 = *(uint32_t *)(v10 + 20);
      }
      v11[2] = 0;
      v11[3] = v75;
    }
    v77 = v11[1];
    if ( v77 != 0 )
    {
      v131 = v11;
      v95 = (uint8_t *)(v77 << 7);
      (*(void (**)(uint32_t, int))(**(uint32_t **)(*v104 + 44) + 12))(*(uint32_t *)(*v104 + 44), v135);
      v11 = v131;
    }
    *(uint32_t *)(v10 + 4) = (uint32_t)(uintptr_t)(v13);
    v12 = v118;
    v11[1] = v118;
  }
LABEL_6:
  v14 = v11[2];
  if ( v14 == 0 )
    v14 = v12;
  v15 = v14 - 1;
  v11[2] = v15;
  v16 = v15 << 7;
LABEL_9:
  v17 = (uint8_t *)((char *)v13 + v16);
  v18 = (uint16_t *)(a4);
  v19 = 120;
  if ( ((uint8_t)(uintptr_t)(v17) & 1) != 0 )
  {
    *v17++ = *a4;
    v19 = 119;
    v18 = (uint16_t *)(a4 + 1);
    if ( ((uint8_t)(uintptr_t)(v17) & 2) == 0 )
      goto LABEL_11;
LABEL_104:
    v17 += 2;
    *((uint16_t *)v17 - 1) = *v18++;
    v19 -= 2;
    goto LABEL_11;
  }
  if ( ((uint8_t)(uintptr_t)(v17) & 2) != 0 )
    goto LABEL_104;
LABEL_11:
  std::memcpy(v17, v18, 4 * (v19 >> 2));
  v22 = &v18[2 * (v19 >> 2)];
  v21 = (uint16_t *)(&v17[4 * (v19 >> 2)]);
  v20 = 0;
  if ( (v19 & 2) != 0 )
  {
    *v21 = *v22;
    v20 = 1;
  }
  if ( (v19 & 1) != 0 )
    LOBYTE(v21[v20]) = v22[v20];
  ++v11[4];
  v133 = (int *)(_emutls_get_address(g4_emutls_v_hkThreadNumber));
  v23 = *v133;
  if ( *v133 != 0 )
    goto LABEL_32;
LABEL_16:
  v24 = a1;
  for ( i = G4_MUTEX_SPINS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (2)))); ; i = G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (9))))[v23 + 22] )
  {
    v26 = (char *)(&G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v24) + (24 * (5))))[22 * i + 8]);
    do
    {
      v27 = *v26;
      if ( v27 < 0 )
      {
        v28 = -1;
        if ( QueueIndexForJob != -1 )
          goto LABEL_37;
        goto LABEL_21;
      }
      ++v26;
    }
    while ( *(uint32_t *)(v141 + 20 * v27 + 68) == 0 );
    v121 = v141 + 20 * v27 + 52;
    std::memcpy(v143, (const void *)(*(uint32_t *)v121 + (*(uint32_t *)(v141 + 20 * v27 + 60) << 7)), 120);
    v41 = *(uint32_t *)(v141 + 20 * v27 + 60) + 1;
    v42 = v41 == *(uint32_t *)(v141 + 20 * v27 + 56);
    *(uint32_t *)(v141 + 20 * v27 + 60) = v41;
    if ( v42 )
      *(uint32_t *)(v141 + 20 * v27 + 60) = 0;
    v108 = v27;
    --*(uint32_t *)(v141 + 20 * v27 + 68);
    v95 = v143;
    v43 = ((int (*)(pthread_mutex_t *, int))((int32_t *)(a1))[3])(a1, v141);
    v44 = v108;
    if ( v43 == 1 )
    {
      v58 = *(uint32_t *)(v121 + 4);
      if ( *(uint32_t *)(v121 + 16) >= v58 )
      {
        if ( v58 != 0 )
        {
          v105 = 2 * v58;
          if ( v58 >= 2 * v58 )
          {
            v60 = v121;
            v59 = *(hkString::Self **)v121;
          }
          else
          {
            v100 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
            v59 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v100 + 44) + 8))(
                                *(uint32_t *)(*v100 + 44),
                                v58 << 8);
            v44 = v108;
            if ( v59 != nullptr )
            {
              v78 = v121;
              v79 = *(hkString::Self **)v121;
              if ( *(uint32_t *)v121 != 0 )
              {
                v111 = *(uint32_t *)(v121 + 16);
                if ( v111 != 0 )
                {
                  v80 = *(uint32_t *)(v121 + 8);
                  v97 = *(uint32_t *)(v121 + 12);
                  if ( v97 > v80 )
                  {
                    v99 = v44;
                    hkString::memCpy(v59, (char *)v79 + 128 * v80, v111 << 7);
                    v44 = v99;
                  }
                  else
                  {
                    v96 = v44;
                    v81 = (*(uint32_t *)(v121 + 4) - v80) << 7;
                    hkString::memCpy(v59, (char *)v79 + 128 * v80, v81);
                    hkString::memCpy((hkString::Self *)((char *)v59 + v81), *(void **)v121, v97 << 7);
                    v44 = v96;
                  }
                  v79 = *(hkString::Self **)v121;
                  v111 = *(uint32_t *)(v121 + 16);
                }
                v78 = v121;
                *(uint32_t *)(v121 + 8) = 0;
                *(uint32_t *)(v121 + 12) = v111;
              }
            }
            else
            {
              v78 = v121;
              v79 = *(hkString::Self **)v121;
            }
            v82 = *(uint32_t *)(v78 + 4);
            if ( v82 != 0 )
            {
              v112 = v44;
              (*(void (**)(uint32_t, hkString::Self *, int))(**(uint32_t **)(*v100 + 44) + 12))(
                *(uint32_t *)(*v100 + 44),
                v79,
                v82 << 7);
              v44 = v112;
            }
            v58 = v105;
            v60 = v121;
            *(uint32_t *)v121 = (uint32_t)(uintptr_t)(v59);
            *(uint32_t *)(v121 + 4) = v105;
          }
        }
        else
        {
          v106 = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
          v59 = (hkString::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*v106 + 44) + 8))(
                              *(uint32_t *)(*v106 + 44),
                              1024);
          v44 = v108;
          if ( v59 != nullptr )
          {
            v83 = v121;
            v84 = *(hkString::Self **)v121;
            if ( *(uint32_t *)v121 != 0 )
            {
              v113 = *(uint32_t *)(v121 + 16);
              if ( v113 != 0 )
              {
                v92 = *(uint32_t *)(v121 + 8);
                v101 = *(uint32_t *)(v121 + 12);
                if ( v101 > v92 )
                {
                  v102 = v44;
                  hkString::memCpy(v59, (char *)v84 + 128 * v92, v113 << 7);
                  v44 = v102;
                }
                else
                {
                  v98 = v44;
                  v93 = (*(uint32_t *)(v121 + 4) - v92) << 7;
                  hkString::memCpy(v59, (char *)v84 + 128 * v92, v93);
                  hkString::memCpy((hkString::Self *)((char *)v59 + v93), *(void **)v121, v101 << 7);
                  v44 = v98;
                }
                v84 = *(hkString::Self **)v121;
                v113 = *(uint32_t *)(v121 + 16);
              }
              v83 = v121;
              *(uint32_t *)(v121 + 8) = 0;
              *(uint32_t *)(v121 + 12) = v113;
            }
          }
          else
          {
            v83 = v121;
            v84 = *(hkString::Self **)v121;
          }
          v85 = *(uint32_t *)(v83 + 4);
          if ( v85 != 0 )
          {
            v116 = v44;
            (*(void (**)(uint32_t, hkString::Self *, int))(**(uint32_t **)(*v106 + 44) + 12))(
              *(uint32_t *)(*v106 + 44),
              v84,
              v85 << 7);
            v44 = v116;
          }
          v58 = 8;
          v60 = v121;
          *(uint32_t *)v121 = (uint32_t)(uintptr_t)(v59);
          *(uint32_t *)(v121 + 4) = 8;
        }
      }
      else
      {
        v59 = *(hkString::Self **)v121;
        v60 = v121;
      }
      v61 = *(uint32_t *)(v60 + 8);
      if ( v61 == 0 )
        v61 = v58;
      v62 = v61 - 1;
      *(uint32_t *)(v60 + 8) = v62;
      v63 = v59;
      v64 = (uint16_t *)(v143);
      v65 = (uint8_t *)((char *)v63 + 128 * v62);
      v66 = 120;
      v67 = (uint16_t *)(v65);
      if ( ((uint8_t)(uintptr_t)(v65) & 1) != 0 )
      {
        v67 = (uint16_t *)(v65 + 1);
        *v65 = v143[0];
        v64 = (uint16_t *)(&v143[1]);
        v66 = 119;
      }
      if ( ((uint8_t)(uintptr_t)(v67) & 2) != 0 )
      {
        *v67++ = *v64++;
        v66 -= 2;
      }
      std::memcpy(v67, v64, 4 * (v66 >> 2));
      v70 = &v64[2 * (v66 >> 2)];
      v69 = &v67[2 * (v66 >> 2)];
      v68 = 0;
      if ( (v66 & 2) != 0 )
      {
        *v69 = *v70;
        v68 = 1;
        if ( (v66 & 1) == 0 )
          goto LABEL_73;
      }
      else if ( (v66 & 1) == 0 )
      {
LABEL_73:
        v71 = v121;
        v122 = v44;
        ++*(uint32_t *)(v71 + 16);
        hkJobQueue::checkQueueAndReleaseOneWaitingThread((uint32_t *)(a1), v44, v141);
        v44 = v122;
        goto LABEL_36;
      }
      LOBYTE(v69[v68]) = v70[v68];
      goto LABEL_73;
    }
LABEL_36:
    v28 = v44;
    ++*(uint16_t *)(v141 + 2 * v143[1]);
    if ( QueueIndexForJob != v44 )
    {
LABEL_37:
      if ( QueueIndexForJob != -1 )
      {
        hkJobQueue::checkQueueAndReleaseOneWaitingThread((uint32_t *)(a1), QueueIndexForJob, v141);
        if ( v28 != -1 )
          goto LABEL_39;
        goto LABEL_22;
      }
    }
LABEL_21:
    if ( v28 != -1 )
    {
LABEL_39:
      v45 = 0;
      hkJobQueue::unlockQueue(a1);
      goto LABEL_40;
    }
LABEL_22:
    kind = G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (2))));
    nusers = G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (2))));
    if ( nusers > kind )
    {
      v31 = 0;
      v32 = (uint32_t *)(v141 + 20 * kind + 68);
      do
      {
        ++kind;
        v31 += *v32;
        v32 += 5;
      }
      while ( kind != nusers );
      if ( v31 != 0 )
        goto LABEL_26;
    }
    if ( G4_MUTEX_SPINS(a1) <= 0 )
      break;
    v49 = 0;
    v50 = 0;
    spins = G4_MUTEX_SPINS(a1);
    do
    {
      while ( *(int16_t *)(v141 + 2 * v50) > 0 )
      {
        v51 = 1 << v50++;
        v49 |= v51;
        if ( v50 == spins )
          goto LABEL_48;
      }
      v52 = (*(uint32_t *)(v141 + 20 * (v50 + G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (1))))) + 68) != 0) << v50;
      ++v50;
      v49 |= v52;
    }
    while ( v50 != spins );
LABEL_48:
    v53 = v49 == 0;
    if ( (v49 & *(uint32_t *)(v141 + 32)) == 0 )
      goto LABEL_49;
LABEL_60:
    if ( v53 && *(uint32_t *)(v141 + 36) != 1 )
      goto LABEL_51;
LABEL_26:
    if ( a5 == 1 )
    {
      v45 = 1;
      hkJobQueue::unlockQueue(a1);
      goto LABEL_40;
    }
    v33 = G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (9))))[*v133 + 22];
    ++*(uint16_t *)(v141 + 2 * v33 + 42);
    v94 = (hkSemaphore::Self *)v141;
    hkJobQueue::unlockQueue(a1);
    v34 = _emutls_get_address(g4_emutls_v_hkMonitorStream__m_instance);
    v35 = *v34;
    v142 = v34;
    v36 = *(uint32_t **)(*v34 + 4);
    if ( (unsigned int)(uintptr_t)(v36) < *(uint32_t *)(*v34 + 12) )
    {
      *v36 = (uint32_t)(uintptr_t)("TtNoJobAvailable");
      v37 = __rdtsc();
      v36[1] = v37;
      *(uint32_t *)(v35 + 4) = (uint32_t)(uintptr_t)(v36 + 3);
    }
    hkSemaphore::acquire(*((hkSemaphore::Self **)&G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (4)))) + v33), v94);
    v38 = *v142;
    v39 = *(uint32_t **)(*v142 + 4);
    if ( (unsigned int)(uintptr_t)(v39) < *(uint32_t *)(*v142 + 12) )
    {
      *v39 = (uint32_t)(uintptr_t)("Et");
      v40 = __rdtsc();
      v39[1] = v40;
      *(uint32_t *)(v38 + 4) = (uint32_t)(uintptr_t)(v39 + 3);
    }
    v141 = hkJobQueue::lockQueue(a1);
    QueueIndexForJob = -1;
    v23 = *v133;
    if ( *v133 == 0 )
      goto LABEL_16;
LABEL_32:
    v24 = a1;
  }
  v53 = true;
LABEL_49:
  if ( *v133 != 0 )
  {
    v56 = v141 + 2 * G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (9))))[22];
    v57 = *(uint16_t *)(v56 + 42);
    if ( v57 != 0 )
    {
      v140 = v53;
      *(uint16_t *)(v56 + 42) = v57 - 1;
      hkSemaphore::release(
        *((hkSemaphore::Self **)&G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (4)))) + G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (9))))[22]),
        (hkSemaphore::Self *)((char *)&dword_0 + 1),
        (int)(uintptr_t)(v95));
      v53 = v140;
    }
    goto LABEL_60;
  }
  if ( v53 )
LABEL_51:
    hkJobQueue::releaseWaitingThreads((int)(uintptr_t)(a1), v141);
  v45 = 2;
  hkJobQueue::unlockQueue(a1);
LABEL_40:
  v46 = *(uint32_t **)(v107 + 4);
  if ( (unsigned int)(uintptr_t)(v46) < *(uint32_t *)(v107 + 12) )
  {
    *v46 = (uint32_t)(uintptr_t)("Et");
    v47 = __rdtsc();
    v46[1] = v47;
    *(uint32_t *)(v107 + 4) = (uint32_t)(uintptr_t)(v46 + 3);
  }
  return v45;
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::setNumRunningSpus  (binary VA: 0x1a7ea70)
// Original: hkJobQueue::setNumRunningSpus
// ----------------------------------------------------------------------------
void hkJobQueue::setNumRunningSpus()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkJobQueue::setSpuSchedulingPolicy  (binary VA: 0x1a7ea80)
// Original: hkJobQueue::setSpuSchedulingPolicy
// ----------------------------------------------------------------------------
int hkJobQueue::setSpuSchedulingPolicy(int a1)
{
  return *(uint32_t *)(a1 + 80);
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformf::approxTransformAt  (binary VA: 0x1a7ea90)
// Original: hkSweptTransformf::approxTransformAt
// ----------------------------------------------------------------------------
hkRotationf::Self * hkSweptTransformf::approxTransformAt(int a1, float *a2, int a3)
{
  __m128i v5;
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  __m128i v9;
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm6_4
  hkRotationf::Self *result;
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19;
  float v20; // xmm7_4
  float v21;
  float v22; // xmm2_4
  float v23; // xmm0_4
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v26)) > _g4_s2 ? (16u + sizeof(_g4_t_v26)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);

g4_m128_raw(v5) = *(unsigned int *)(a1 + 48);
  v24 = (float)(*a2 - *(float *)(a1 + 12)) * *(float *)(a1 + 28);
  *(float *)g4_m128_ptr<int32_t>(v5) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v5) - *(float *)(a1 + 32)) * v24) + *(float *)(a1 + 32);
  v6 = (float)((float)(*(float *)(a1 + 52) - *(float *)(a1 + 36)) * v24) + *(float *)(a1 + 36);
  v7 = (float)((float)(*(float *)(a1 + 56) - *(float *)(a1 + 40)) * v24) + *(float *)(a1 + 40);
  v8 = (float)((float)(*(float *)(a1 + 60) - *(float *)(a1 + 44)) * v24) + *(float *)(a1 + 44);
  v9 = v5;
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v5) * *(float *)g4_m128_ptr<int32_t>(v5)) + (float)(v6 * v6))
                                 + (float)(v7 * v7))
                         + (float)(v8 * v8);
  v10 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v9);
g4_m128_lane<int32_t>(v9, 0) = ((_mm_cvtsi128_si32(v9) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v9) >> 1));
  v11 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v9))
      - (float)((float)(v10 * *(float *)g4_m128_ptr<int32_t>(v9)) * (float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)g4_m128_ptr<int32_t>(v9)));
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)(1.5 * v11) - (float)((float)(v10 * v11) * (float)(v11 * v11));
  v12 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v9))
      - (float)((float)(v10 * *(float *)g4_m128_ptr<int32_t>(v9)) * (float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)g4_m128_ptr<int32_t>(v9)));
  v26[0] = *(float *)g4_m128_ptr<int32_t>(v5) * v12;
  v26[1] = v6 * v12;
  v26[2] = v7 * v12;
  v26[3] = v8 * v12;
  result = hkRotationf::set((hkRotationf::Self *)a3, (const hkQuaternionf::Self *)v26);
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)(*(float *)(a1 + 20) - *(float *)(a1 + 4)) * v24;
  v14 = (float)((float)(*(float *)(a1 + 16) - *(float *)a1) * v24) + *(float *)a1;
  v15 = (float)(*(float *)(a1 + 24) - *(float *)(a1 + 8)) * v24;
g4_m128_lane<int32_t>(v5, 0) = *(uint32_t *)(a3 + 4);
  v16 = (float)(*(float *)(a1 + 28) - *(float *)(a1 + 12)) * v24;
  *(float *)(a3 + 48) = v14;
  *(float *)g4_m128_ptr<int32_t>(v9) = *(float *)g4_m128_ptr<int32_t>(v9) + *(float *)(a1 + 4);
  *(uint32_t *)(a3 + 52) =g4_m128_lane<int32_t>(v9, 0);
  v17 = v15 + *(float *)(a1 + 8);
  *(float *)(a3 + 56) = v17;
  v18 = v16 + *(float *)(a1 + 12);
  *(float *)(a3 + 60) = v18;
  v19 = *(float *)(a1 + 68);
  v20 = *(float *)(a1 + 64);
  v21 = *(float *)(a1 + 72);
  v25 = (float)((float)(*(float *)(a1 + 68) * *(float *)(a3 + 20)) + (float)(*(float *)g4_m128_ptr<int32_t>(v5) * v20))
      + (float)(*(float *)(a1 + 72) * *(float *)(a3 + 36));
  v22 = v17
      - (float)((float)((float)(*(float *)(a3 + 8) * v20) + (float)(v19 * *(float *)(a3 + 24)))
              + (float)(v21 * *(float *)(a3 + 40)));
  v23 = v18
      - (float)((float)((float)(*(float *)(a3 + 12) * v20) + (float)(v19 * *(float *)(a3 + 28)))
              + (float)(v21 * *(float *)(a3 + 44)));
  *(float *)(a3 + 48) = v14
                      - (float)((float)((float)(v20 * *(float *)a3) + (float)(v19 * *(float *)(a3 + 16)))
                              + (float)(v21 * *(float *)(a3 + 32)));
  *(float *)(a3 + 52) = *(float *)g4_m128_ptr<int32_t>(v9) - v25;
  *(float *)(a3 + 56) = v22;
  *(float *)(a3 + 60) = v23;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformf::approxTransformAt  (binary VA: 0x1a7ed40)
// Original: hkSweptTransformf::approxTransformAt
// ----------------------------------------------------------------------------
hkRotationf::Self * hkSweptTransformf::approxTransformAt(hkSweptTransformf::Self *self, float a2, hkTransformf::Self *a3)
{
  __m128i v5;
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  __m128i v9;
  float v10; // xmm7_4
  float v11; // xmm6_4
  float v12; // xmm6_4
  hkRotationf::Self *result;
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19;
  float v20; // xmm7_4
  float v21;
  float v22; // xmm2_4
  float v23; // xmm0_4
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v26)) > _g4_s2 ? (16u + sizeof(_g4_t_v26)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);

g4_m128_raw(v5) = *((unsigned int *)self + 12);
  v24 = (float)(a2 - *((float *)self + 3)) * *((float *)self + 7);
  *(float *)g4_m128_ptr<int32_t>(v5) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v5) - *((float *)self + 8)) * v24) + *((float *)self + 8);
  v6 = (float)((float)(*((float *)self + 13) - *((float *)self + 9)) * v24) + *((float *)self + 9);
  v7 = (float)((float)(*((float *)self + 14) - *((float *)self + 10)) * v24) + *((float *)self + 10);
  v8 = (float)((float)(*((float *)self + 15) - *((float *)self + 11)) * v24) + *((float *)self + 11);
  v9 = v5;
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v5) * *(float *)g4_m128_ptr<int32_t>(v5)) + (float)(v6 * v6))
                                 + (float)(v7 * v7))
                         + (float)(v8 * v8);
  v10 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v9);
g4_m128_lane<int32_t>(v9, 0) = ((_mm_cvtsi128_si32(v9) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v9) >> 1));
  v11 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v9))
      - (float)((float)(v10 * *(float *)g4_m128_ptr<int32_t>(v9)) * (float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)g4_m128_ptr<int32_t>(v9)));
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)(1.5 * v11) - (float)((float)(v10 * v11) * (float)(v11 * v11));
  v12 = (float)(1.5 * *(float *)g4_m128_ptr<int32_t>(v9))
      - (float)((float)(v10 * *(float *)g4_m128_ptr<int32_t>(v9)) * (float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)g4_m128_ptr<int32_t>(v9)));
  v26[0] = *(float *)g4_m128_ptr<int32_t>(v5) * v12;
  v26[1] = v6 * v12;
  v26[2] = v7 * v12;
  v26[3] = v8 * v12;
  result = hkRotationf::set(a3, (const hkQuaternionf::Self *)v26);
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)(*((float *)self + 5) - *((float *)self + 1)) * v24;
  v14 = (float)((float)(*((float *)self + 4) - *(float *)self) * v24) + *(float *)self;
  v15 = (float)(*((float *)self + 6) - *((float *)self + 2)) * v24;
g4_m128_lane<int32_t>(v5, 0) = *((uint32_t *)a3 + 1);
  v16 = (float)(*((float *)self + 7) - *((float *)self + 3)) * v24;
  *((float *)a3 + 12) = v14;
  *(float *)g4_m128_ptr<int32_t>(v9) = *(float *)g4_m128_ptr<int32_t>(v9) + *((float *)self + 1);
  *((uint32_t *)a3 + 13) =g4_m128_lane<int32_t>(v9, 0);
  v17 = v15 + *((float *)self + 2);
  *((float *)a3 + 14) = v17;
  v18 = v16 + *((float *)self + 3);
  *((float *)a3 + 15) = v18;
  v19 = *((float *)self + 17);
  v20 = *((float *)self + 16);
  v21 = *((float *)self + 18);
  v25 = (float)((float)(*((float *)self + 17) * *((float *)a3 + 5)) + (float)(*(float *)g4_m128_ptr<int32_t>(v5) * v20))
      + (float)(*((float *)self + 18) * *((float *)a3 + 9));
  v22 = v17
      - (float)((float)((float)(*((float *)a3 + 2) * v20) + (float)(v19 * *((float *)a3 + 6)))
              + (float)(v21 * *((float *)a3 + 10)));
  v23 = v18
      - (float)((float)((float)(*((float *)a3 + 3) * v20) + (float)(v19 * *((float *)a3 + 7)))
              + (float)(v21 * *((float *)a3 + 11)));
  *((float *)a3 + 12) = v14
                      - (float)((float)((float)(v20 * *(float *)a3) + (float)(v19 * *((float *)a3 + 4)))
                              + (float)(v21 * *((float *)a3 + 8)));
  *((float *)a3 + 13) = *(float *)g4_m128_ptr<int32_t>(v9) - v25;
  *((float *)a3 + 14) = v22;
  *((float *)a3 + 15) = v23;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSweptTransformf::initSweptTransform  (binary VA: 0x1a7eff0)
// Original: hkSweptTransformf::initSweptTransform
// ----------------------------------------------------------------------------
hkSweptTransformf::Self * hkSweptTransformf::initSweptTransform(hkSweptTransformf::Self *self, const hkVector4f::Self *a2, const hkQuaternionf::Self *a3)
{
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = *(uint32_t *)a2;
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 1);
  *((uint64_t *)self + 3) = *((unsigned int *)a2 + 2);
  *((uint32_t *)self + 8) = *(uint32_t *)a3;
  *((uint32_t *)self + 9) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 10) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 11) = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 12) = *(uint32_t *)a3;
  *((uint32_t *)self + 13) = *((uint32_t *)a3 + 1);
  *((uint32_t *)self + 14) = *((uint32_t *)a3 + 2);
  *((uint32_t *)self + 15) = *((uint32_t *)a3 + 3);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkSmallArrayUtil::reserve  (binary VA: 0x1a7f090)
// Original: hkSmallArrayUtil::_reserve
// ----------------------------------------------------------------------------
void * hkSmallArrayUtil::reserve(const void **self, void *a2, int a3)
{
  uint32_t *address;
  void *dest;
  void *result;
  int16_t v6;

  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  dest = (void *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(
                   *(uint32_t *)(*address + 44),
                   a3 * (uint32_t)(uintptr_t)(a2));
  result = memcpy(dest, *self, a3 * *((uint16_t *)self + 2));
  v6 = *((uint16_t *)self + 3);
  if ( v6 >= 0 )
  {
    result = (void *)(*(int (**)(uint32_t, const void *, int))(**(uint32_t **)(*address + 44) + 12))(
                       *(uint32_t *)(*address + 44),
                       *self,
                       a3 * (v6 & 0x3FFF));
    v6 = *((uint16_t *)self + 3);
  }
  *self = dest;
  *((uint16_t *)self + 3) = (uint16_t)(uintptr_t)(a2) | v6 & 0x4000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSmallArrayUtil::reserveMore  (binary VA: 0x1a7f140)
// Original: hkSmallArrayUtil::_reserveMore
// ----------------------------------------------------------------------------
void * hkSmallArrayUtil::reserveMore(const void **self, void *a2)
{
  int v2;
  int v3;
  uint32_t *address;
  void *dest;
  void *result;
  int16_t v7;
  int16_t v8;

  v2 = *((uint16_t *)self + 2);
  if ( (uint16_t)v2 != 0 )
  {
    v3 = 2 * v2;
    v8 = v3;
  }
  else
  {
    v8 = 1;
    v3 = 1;
  }
  address = _emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
  dest = (void *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*address + 44) + 8))(
                   *(uint32_t *)(*address + 44),
                   (uint32_t)(uintptr_t)(a2) * v3);
  result = memcpy(dest, *self, (uint32_t)(uintptr_t)(a2) * *((uint16_t *)self + 2));
  v7 = *((uint16_t *)self + 3);
  if ( v7 >= 0 )
  {
    result = (void *)(*(int (**)(uint32_t, const void *, int))(**(uint32_t **)(*address + 44) + 12))(
                       *(uint32_t *)(*address + 44),
                       *self,
                       (uint32_t)(uintptr_t)(a2) * (v7 & 0x3FFF));
    v7 = *((uint16_t *)self + 3);
  }
  *self = dest;
  *((uint16_t *)self + 3) = v8 | v7 & 0x4000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSemaphore::Construct  (binary VA: 0x1a7f210)
// Original: hkSemaphore::hkSemaphore
// ----------------------------------------------------------------------------
void hkSemaphore::Construct(hkSemaphore::Self *self, int a2, int a3, int a4)
{
  typedef pthread_condattr_t _g4_t_attr;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_attr)) > _g4_s0 ? (0u + sizeof(_g4_t_attr)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_attr &attr = *reinterpret_cast<_g4_t_attr *>(_g4_sf + 0u);

  if ( a2 > a3 || a3 <= 0 )
  {
    __builtin_debugtrap();
  }
  else
  {
    if ( pthread_mutex_init((pthread_mutex_t *)((char *)self + 12), nullptr) != 0 )
    {
      printf("%s:%d:%s\n", "Thread/Semaphore/Posix/hkPosixSemaphore.cpp", 35, "hkSemaphore");
      perror("pthread_mutex_init(&m_semaphore.mutex, HK_NULL)");
      __builtin_debugtrap();
    }
    if ( pthread_condattr_init(&attr) != 0 )
    {
      printf("%s:%d:%s\n", "Thread/Semaphore/Posix/hkPosixSemaphore.cpp", 43, "hkSemaphore");
      perror("pthread_condattr_init(&cond_attr)");
      __builtin_debugtrap();
    }
    if ( pthread_cond_init((pthread_cond_t *)((char *)self + 16), &attr) != 0 )
    {
      printf("%s:%d:%s\n", "Thread/Semaphore/Posix/hkPosixSemaphore.cpp", 44, "hkSemaphore");
      perror("pthread_cond_init(&m_semaphore.cond, &cond_attr)");
      __builtin_debugtrap();
    }
    if ( pthread_condattr_destroy(&attr) != 0 )
    {
      printf("%s:%d:%s\n", "Thread/Semaphore/Posix/hkPosixSemaphore.cpp", 45, "hkSemaphore");
      perror("pthread_condattr_destroy(&cond_attr)");
      __builtin_debugtrap();
    }
    *(uint32_t *)self = a2;
    *((uint32_t *)self + 1) = a3;
    *((uint32_t *)self + 2) = a4;
  }
}

// ----------------------------------------------------------------------------
// Function: hkSemaphore::Destroy  (binary VA: 0x1a7f3c0)
// Original: hkSemaphore::~hkSemaphore
// ----------------------------------------------------------------------------
void hkSemaphore::Destroy(hkSemaphore::Self *self)
{
  if ( pthread_cond_destroy((pthread_cond_t *)((char *)self + 16)) != 0 )
  {
    printf("%s:%d:%s\n", "Thread/Semaphore/Posix/hkPosixSemaphore.cpp", 55, "~hkSemaphore");
    perror("pthread_cond_destroy(&m_semaphore.cond)");
    __builtin_debugtrap();
  }
  if ( pthread_mutex_destroy((pthread_mutex_t *)((char *)self + 12)) != 0 )
  {
    printf("%s:%d:%s\n", "Thread/Semaphore/Posix/hkPosixSemaphore.cpp", 56, "~hkSemaphore");
    perror("pthread_mutex_destroy(&m_semaphore.mutex)");
    __builtin_debugtrap();
  }
}

// ----------------------------------------------------------------------------
// Function: hkSemaphore::acquire  (binary VA: 0x1a7f480)
// Original: hkSemaphore::acquire
// ----------------------------------------------------------------------------
int hkSemaphore::acquire(hkSemaphore::Self *self)
{
  pthread_mutex_t *mutex;
  int i;
  int result;

  mutex = (pthread_mutex_t *)((char *)self + 12);
  for ( i = *((uint32_t *)self + 2); i != 0; --i )
  {
    if ( pthread_mutex_trylock(mutex) == 0 )
      goto LABEL_7;
  }
  if ( pthread_mutex_lock(mutex) != 0 )
  {
    printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
    perror("pthread_mutex_lock(&mutex)");
    __builtin_debugtrap();
  }
  do
  {
LABEL_7:
    if ( *(int *)self > 0 )
    {
      --*(uint32_t *)self;
      result = pthread_mutex_unlock(mutex);
      if ( result != 0 )
      {
        printf("%s:%d:%s\n", "Thread/Semaphore/Posix/hkPosixSemaphore.cpp", 80, "acquire");
LABEL_15:
        perror("pthread_mutex_unlock(&m_semaphore.mutex)");
        __builtin_debugtrap();
      }
      return result;
    }
  }
  while ( pthread_cond_wait((pthread_cond_t *)((char *)self + 16), mutex) == 0 );
  perror("pthread_cond_wait failed");
  result = pthread_mutex_unlock(mutex);
  if ( result != 0 )
  {
    printf("%s:%d:%s\n", "Thread/Semaphore/Posix/hkPosixSemaphore.cpp", 71, "acquire");
    goto LABEL_15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSemaphore::release  (binary VA: 0x1a7f5c0)
// Original: hkSemaphore::release
// ----------------------------------------------------------------------------
int hkSemaphore::release(hkSemaphore::Self *self, int a2)
{
  pthread_mutex_t *mutex;
  int v3;
  int v4;
  int v5;
  int v6;
  int result;

  mutex = (pthread_mutex_t *)((char *)self + 12);
  v3 = *((uint32_t *)self + 2);
  if ( v3 != 0 )
  {
    while ( pthread_mutex_trylock(mutex) != 0 )
    {
      if ( --v3 == 0 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    if ( pthread_mutex_lock(mutex) != 0 )
    {
      printf("%s:%d:%s\n", "../../Common/Base/Thread/Thread/Posix/hkPthreadUtil.h", 59, "lockMutexWithSpinCount");
      perror("pthread_mutex_lock(&mutex)");
      __builtin_debugtrap();
    }
  }
  v4 = *((uint32_t *)self + 1);
  if ( *(uint32_t *)self >= v4 )
  {
    result = pthread_mutex_unlock(mutex);
    if ( result == 0 )
      return result;
    printf("%s:%d:%s\n", "Thread/Semaphore/Posix/hkPosixSemaphore.cpp", 98, "release");
LABEL_21:
    perror("pthread_mutex_unlock(&m_semaphore.mutex)");
    __builtin_debugtrap();
  }
  v5 = a2 + *(uint32_t *)self;
  if ( v4 < v5 )
    v5 = *((uint32_t *)self + 1);
  *(uint32_t *)self = v5;
  v6 = 0;
  if ( a2 > 0 )
  {
    do
    {
      if ( pthread_cond_signal((pthread_cond_t *)((char *)self + 16)) != 0 && pthread_mutex_unlock(mutex) != 0 )
      {
        printf("%s:%d:%s\n", "Thread/Semaphore/Posix/hkPosixSemaphore.cpp", 109, "release");
        perror("pthread_mutex_unlock(&m_semaphore.mutex)");
        __builtin_debugtrap();
      }
      ++v6;
    }
    while ( v6 != a2 );
  }
  result = pthread_mutex_unlock(mutex);
  if ( result != 0 )
  {
    printf("%s:%d:%s\n", "Thread/Semaphore/Posix/hkPosixSemaphore.cpp", 112, "release");
    goto LABEL_21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkSemaphore::acquire_ea1a7f780  (binary VA: 0x1a7f780)
// Original: hkSemaphore::acquire
// ----------------------------------------------------------------------------
int hkSemaphore::acquire_ea1a7f780(hkSemaphore::Self *self)
{
  return hkSemaphore::acquire(self);
}

// ----------------------------------------------------------------------------
// Function: hkSemaphore::release  (binary VA: 0x1a7f7b0)
// Original: hkSemaphore::release
// ----------------------------------------------------------------------------
int hkSemaphore::release(hkSemaphore::Self *self, hkSemaphore::Self *a2)
{
  return hkSemaphore::release(self, (int)(uintptr_t)(a2));
}

// ----------------------------------------------------------------------------
// Function: hkVtableClassRegistry::getClassFromVtable  (binary VA: 0x1a7f7e0)
// Original: hkVtableClassRegistry::getClassFromVtable
// ----------------------------------------------------------------------------
unsigned int hkVtableClassRegistry::getClassFromVtable(hkVtableClassRegistry::Self *self, const void *a2)
{
  return hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
           (hkVtableClassRegistry::Self *)((char *)self + 8),
           (unsigned int)(uintptr_t)(a2),
           0);
}

// ----------------------------------------------------------------------------
// Function: hkVtableClassRegistry::getClassFromVirtualInstance  (binary VA: 0x1a7f820)
// Original: hkVtableClassRegistry::getClassFromVirtualInstance
// ----------------------------------------------------------------------------
unsigned int hkVtableClassRegistry::getClassFromVirtualInstance(hkVtableClassRegistry::Self *self, unsigned int *a2)
{
  return hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
           (hkVtableClassRegistry::Self *)((char *)self + 8),
           *a2,
           0);
}

// ----------------------------------------------------------------------------
// Function: hkVtableClassRegistry::getClasses  (binary VA: 0x1a7f860)
// Original: hkVtableClassRegistry::getClasses
// ----------------------------------------------------------------------------
uint32_t * hkVtableClassRegistry::getClasses(int a1, hkMemoryAllocator::Self *a2)
{
  int v2;
  uint32_t *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  v2 = *(uint32_t *)(a1 + 16);
  result = *(uint32_t **)(a1 + 8);
  if ( v2 >= 0 )
  {
    v4 = 0;
    if ( *result == -1 )
    {
      while ( v2 >= ++v4 )
      {
        if ( result[2 * v4] != -1 )
        {
          v7 = v4;
          goto LABEL_8;
        }
      }
    }
    else
    {
      v7 = 0;
LABEL_8:
      v5 = result[2 * v7 + 1];
      v6 = *((uint32_t *)a2 + 1);
      if ( (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) == v6 )
      {
LABEL_14:
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 4, v5);
        v6 = *((uint32_t *)a2 + 1);
        v5 = v8;
      }
LABEL_9:
      *(uint32_t *)(*(uint32_t *)a2 + 4 * v6) = v5;
      v6 = *((uint32_t *)a2 + 1) + 1;
      *((uint32_t *)a2 + 1) = v6;
      result = *(uint32_t **)(a1 + 8);
      while ( *(uint32_t *)(a1 + 16) >= ++v4 )
      {
        if ( result[2 * v4] != -1 )
        {
          v5 = result[2 * v4 + 1];
          if ( (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) != v6 )
            goto LABEL_9;
          goto LABEL_14;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVtableClassRegistry::registerVtable  (binary VA: 0x1a7f940)
// Original: hkVtableClassRegistry::registerVtable
// ----------------------------------------------------------------------------
int hkVtableClassRegistry::registerVtable(hkVtableClassRegistry::Self *self, const void *a2, const hkClass::Self *a3)
{
  return hkMapBase_unsigned_long_unsigned_l_393416::insert(
           (hkVtableClassRegistry::Self *)((char *)self + 8),
           (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
           (unsigned int)(uintptr_t)(a2),
           (unsigned int)(uintptr_t)(a3));
}

// ----------------------------------------------------------------------------
// Function: hkVtableClassRegistry::Destroy  (binary VA: 0x1a7f980)
// Original: hkVtableClassRegistry::~hkVtableClassRegistry
// ----------------------------------------------------------------------------
void hkVtableClassRegistry::Destroy(hkVtableClassRegistry::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B0EC8);
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkVtableClassRegistry::Self *)((char *)self + 8),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkVtableClassRegistry::Destroy_ea1a7fa40  (binary VA: 0x1a7fa40)
// Original: hkVtableClassRegistry::~hkVtableClassRegistry
// ----------------------------------------------------------------------------
void hkVtableClassRegistry::Destroy_ea1a7fa40(hkVtableClassRegistry::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B0EC8);
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkVtableClassRegistry::Self *)((char *)self + 8),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 20;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkVtableClassRegistry::registerList  (binary VA: 0x1a7fad0)
// Original: hkVtableClassRegistry::registerList
// ----------------------------------------------------------------------------
const hkTypeInfo * hkVtableClassRegistry::registerList(hkVtableClassRegistry::Self *self, const hkTypeInfo *const *a2, const hkClass::Self *const *a3)
{
  const hkTypeInfo *const *v3;
  const hkTypeInfo *result;
  int v6;

  v3 = a2;
  for ( result = *a2; *v3 != nullptr; ++a3 )
  {
    if ( *a3 == nullptr )
      break;
    v6 = *((uint32_t *)result + 4);
    if ( v6 != 0 )
      G4_VCALL<void>(self, 20, v6, *a3);
    result = *++v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVtableClassRegistry::merge  (binary VA: 0x1a7fb30)
// Original: hkVtableClassRegistry::merge
// ----------------------------------------------------------------------------
uint32_t * hkVtableClassRegistry::merge(hkVtableClassRegistry::Self *self, const hkVtableClassRegistry::Self *a2)
{
  int v2;
  uint32_t *result;
  int v4;
  int v5;

  v2 = *((uint32_t *)a2 + 4);
  result = *((uint32_t **)a2 + 2);
  if ( v2 >= 0 )
  {
    v4 = 0;
    if ( *result == -1 )
    {
      while ( v2 >= ++v4 )
      {
        if ( result[2 * v4] != -1 )
        {
          v5 = v4;
          goto LABEL_8;
        }
      }
    }
    else
    {
      v5 = 0;
LABEL_8:
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        (hkVtableClassRegistry::Self *)((char *)self + 8),
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        result[2 * v5],
        result[2 * v5 + 1]);
      result = *((uint32_t **)a2 + 2);
      while ( *((uint32_t *)a2 + 4) >= ++v4 )
      {
        if ( result[2 * v4] != -1 )
        {
          v5 = v4;
          goto LABEL_8;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkRadixSort::sort16  (binary VA: 0x1a7fc30)
// Original: hkRadixSort::sort16
// ----------------------------------------------------------------------------
int hkRadixSort::sort16(int a1, int a2, int a3)
{
  __m128i *v3;
  __m128i *v4;
  uint8_t *v5;
  uint8_t *v6;
  int v7;
  uint8_t *v8;
  uint8_t *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int result;
  uint8_t *v17;
  int v18;
  int v19;
  uint32_t *v20;
  int v21;
  uint32_t *v22;
  int v23;
  uint32_t *v24;
  int v25;
  uint32_t *v26;
  int v27;
  int v28;
  uint32_t *v29;
  int v30;
  uint32_t *v31;
  int v32;
  uint32_t *v33;
  int v34;
  uint32_t *v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t _g4_t_v41[256];
  typedef uint32_t _g4_t_v42[512];
  typedef uint32_t _g4_t_v43[258];
  enum : size_t {
    _g4_s0 = 4208u,
    _g4_s1 = (8u + sizeof(_g4_t_v36)) > _g4_s0 ? (8u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v37)) > _g4_s1 ? (12u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v38)) > _g4_s2 ? (16u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v39)) > _g4_s3 ? (20u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v40)) > _g4_s4 ? (28u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v41)) > _g4_s5 ? (32u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (1056u + sizeof(_g4_t_v42)) > _g4_s6 ? (1056u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (3104u + sizeof(_g4_t_v43)) > _g4_s7 ? (3104u + sizeof(_g4_t_v43)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 1056u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 3104u);

  v3 = (__m128i *)v41;
  do
    *v3++ = g4_m128_from<__m128i>(0LL);
  while ( v3 != (__m128i *)v42 );
  v4 = (__m128i *)v42;
  do
    *v4++ = g4_m128_from<__m128i>(0LL);
  while ( v4 != (__m128i *)&v42[256] );
  if ( a2 > 0 )
  {
    v40 = a1;
    v38 = a1 + 4;
    v5 = (uint8_t *)(a1 + 1);
    v37 = a1 + 8;
    v39 = 0;
    v36 = a1 + 12;
    do
    {
      v6 = (uint8_t *)v40;
      v39 += 4;
      v7 = *v5;
      v40 += 16;
      ++v41[*v6];
      ++v42[v7];
      v8 = &v6[-a1];
      v9 = &v5[-a1];
      v5 += 16;
      v10 = v9[v38];
      ++v41[v8[v38]];
      ++v42[v10];
      v11 = v9[v37];
      ++v41[v8[v37]];
      ++v42[v11];
      v12 = v9[v36];
      v13 = v42[v12];
      ++v41[v8[v36]];
      v42[v12] = v13 + 1;
    }
    while ( a2 > v39 );
  }
  v14 = a3;
  v42[256] = a3;
  v43[0] = a1;
  v15 = a1;
  v40 = (int)(uintptr_t)(v43);
  for ( result = 1; result != 256; ++result )
  {
    v14 += 4 * v41[result - 1];
    v42[result + 256] = v14;
    v15 += 4 * v42[result - 1];
    *(uint32_t *)(v40 + 4 * result) = v15;
  }
  if ( a2 > 0 )
  {
    v17 = (uint8_t *)a1;
    v40 = 4 * a2 - 4;
    v40 &= 0xFFFFFFF0;
    v18 = a1 + v40 + 16;
    do
    {
      v19 = *v17;
      v17 += 16;
      v20 = (uint32_t *)v42[v19 + 256];
      v42[v19 + 256] = (uint32_t)(uintptr_t)(v20 + 1);
      *v20 = *((uint32_t *)v17 - 4);
      v21 = *(v17 - 12);
      v22 = (uint32_t *)v42[v21 + 256];
      v42[v21 + 256] = (uint32_t)(uintptr_t)(v22 + 1);
      *v22 = *((uint32_t *)v17 - 3);
      v23 = *(v17 - 8);
      v24 = (uint32_t *)v42[v23 + 256];
      v42[v23 + 256] = (uint32_t)(uintptr_t)(v24 + 1);
      *v24 = *((uint32_t *)v17 - 2);
      v25 = *(v17 - 4);
      v26 = (uint32_t *)v42[v25 + 256];
      v42[v25 + 256] = (uint32_t)(uintptr_t)(v26 + 1);
      *v26 = *((uint32_t *)v17 - 1);
    }
    while ( v17 != (uint8_t *)v18 );
    result = a3;
    v27 = a3 + v40 + 16;
    do
    {
      v28 = *(uint8_t *)(result + 1);
      result += 16;
      v29 = (uint32_t *)v43[v28];
      v43[v28] = (uint32_t)(uintptr_t)(v29 + 1);
      *v29 = *(uint32_t *)(result - 16);
      v30 = *(uint8_t *)(result - 11);
      v31 = (uint32_t *)v43[v30];
      v43[v30] = (uint32_t)(uintptr_t)(v31 + 1);
      *v31 = *(uint32_t *)(result - 12);
      v32 = *(uint8_t *)(result - 7);
      v33 = (uint32_t *)v43[v32];
      v43[v32] = (uint32_t)(uintptr_t)(v33 + 1);
      *v33 = *(uint32_t *)(result - 8);
      v34 = *(uint8_t *)(result - 3);
      v35 = (uint32_t *)v43[v34];
      v43[v34] = (uint32_t)(uintptr_t)(v35 + 1);
      *v35 = *(uint32_t *)(result - 4);
    }
    while ( result != v27 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkRadixSort::sort32  (binary VA: 0x1a7ff20)
// Original: hkRadixSort::sort32
// ----------------------------------------------------------------------------
int hkRadixSort::sort32(uint8_t *a1, int a2, uint8_t *a3)
{
  __m128i *v3;
  __m128i *v4;
  __m128i *v5;
  __m128i *v6;
  uint8_t *v7;
  int v8;
  int v9;
  int v10;
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
  uint8_t *v26;
  uint8_t *v27;
  uint8_t *v28;
  int v29;
  uint8_t *v30;
  uint8_t *v31;
  int result;
  uint8_t *v33;
  int v34;
  int v35;
  uint32_t *v36;
  int v37;
  int v38;
  uint32_t *v39;
  int v40;
  int v41;
  uint32_t *v42;
  int v43;
  int v44;
  uint32_t *v45;
  int v46;
  bool v47;
  uint8_t *v48;
  int v49;
  int v50;
  uint32_t *v51;
  int v52;
  int v53;
  uint32_t *v54;
  int v55;
  int v56;
  uint32_t *v57;
  int v58;
  int v59;
  uint32_t *v60;
  int v61;
  uint8_t *v62;
  int v63;
  int v64;
  uint32_t *v65;
  int v66;
  int v67;
  uint32_t *v68;
  int v69;
  int v70;
  uint32_t *v71;
  int v72;
  int v73;
  uint32_t *v74;
  int v75;
  uint8_t *v76;
  uint8_t *v77;
  int v78;
  uint32_t *v79;
  int v80;
  int v81;
  uint32_t *v82;
  int v83;
  int v84;
  uint32_t *v85;
  int v86;
  int v87;
  int *v88;
  int v89;
  typedef uint8_t *_g4_t_v90;
  typedef uint8_t *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef uint8_t *_g4_t_v93;
  typedef uint8_t *_g4_t_v94;
  typedef uint32_t _g4_t_v95[256];
  typedef uint32_t _g4_t_v96[256];
  typedef uint32_t _g4_t_v97[256];
  typedef uint32_t _g4_t_v98[1282];
  enum : size_t {
    _g4_s0 = 8304u,
    _g4_s1 = (12u + sizeof(_g4_t_v90)) > _g4_s0 ? (12u + sizeof(_g4_t_v90)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v91)) > _g4_s1 ? (16u + sizeof(_g4_t_v91)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v92)) > _g4_s2 ? (32u + sizeof(_g4_t_v92)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v93)) > _g4_s3 ? (32u + sizeof(_g4_t_v93)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v94)) > _g4_s4 ? (36u + sizeof(_g4_t_v94)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v95)) > _g4_s5 ? (40u + sizeof(_g4_t_v95)) : _g4_s5,
    _g4_s7 = (1064u + sizeof(_g4_t_v96)) > _g4_s6 ? (1064u + sizeof(_g4_t_v96)) : _g4_s6,
    _g4_s8 = (2088u + sizeof(_g4_t_v97)) > _g4_s7 ? (2088u + sizeof(_g4_t_v97)) : _g4_s7,
    _g4_s9 = (3112u + sizeof(_g4_t_v98)) > _g4_s8 ? (3112u + sizeof(_g4_t_v98)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 12u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 16u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 32u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 32u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 36u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 40u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 1064u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 2088u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 3112u);

  v3 = (__m128i *)v95;
  do
    *v3++ = g4_m128_from<__m128i>(0LL);
  while ( v3 != (__m128i *)v96 );
  v4 = (__m128i *)v96;
  do
    *v4++ = g4_m128_from<__m128i>(0LL);
  while ( v4 != (__m128i *)v97 );
  v5 = (__m128i *)v97;
  do
    *v5++ = g4_m128_from<__m128i>(0LL);
  while ( v5 != (__m128i *)v98 );
  v6 = (__m128i *)v98;
  do
    *v6++ = g4_m128_from<__m128i>(0LL);
  while ( v6 != (__m128i *)&v98[256] );
  if ( a2 > 0 )
  {
    v92 = 0;
    v90 = a1 + 9;
    v91 = a1 + 18;
    v94 = a1;
    v7 = a1 + 24;
    do
    {
      v7 += 32;
      v8 = v94[1];
      v9 = v94[2];
      v10 = v94[3];
      ++v95[*v94];
      ++v96[v8];
      v11 = v98[v10];
      ++v97[v9];
      v98[v10] = v11 + 1;
      v12 = *v90;
      v13 = v90[1];
      v14 = v90[2];
      ++v95[*(v90 - 1)];
      ++v96[v12];
      v15 = v98[v14];
      ++v97[v13];
      v98[v14] = v15 + 1;
      v16 = *(v91 - 1);
      v17 = *v91;
      v18 = v91[1];
      ++v95[*(v91 - 2)];
      ++v96[v16];
      v19 = v98[v18];
      v92 += 4;
      ++v97[v17];
      v20 = *(v7 - 31);
      v21 = v19 + 1;
      v22 = *(v7 - 32);
      v98[v18] = v21;
      v23 = *(v7 - 30);
      v94 += 32;
      v24 = *(v7 - 29);
      v90 += 32;
      v91 += 32;
      ++v95[v22];
      ++v96[v20];
      v25 = v98[v24];
      ++v97[v23];
      v98[v24] = v25 + 1;
    }
    while ( a2 > v92 );
  }
  v26 = a3;
  v98[256] = (uint32_t)(uintptr_t)(a3);
  v98[512] = (uint32_t)(uintptr_t)(a1);
  v98[768] = (uint32_t)(uintptr_t)(a3);
  v27 = a1;
  v98[1024] = (uint32_t)(uintptr_t)(a1);
  v28 = a3;
  v94 = a1;
  v29 = 1;
  while ( 1 )
  {
    v93 = &v26[8 * v95[v29 - 1]];
    v98[v29 + 256] = (uint32_t)(uintptr_t)(v93);
    v30 = v94;
    v27 += 8 * v96[v29 - 1];
    v98[v29 + 512] = (uint32_t)(uintptr_t)(v27);
    v28 += 8 * v97[v29 - 1];
    v98[v29 + 768] = (uint32_t)(uintptr_t)(v28);
    v31 = &v30[8 * v98[v29 - 1]];
    v98[v29++ + 1024] = (uint32_t)(uintptr_t)(v31);
    if ( v29 == 256 )
      break;
    v94 = v31;
    v26 = v93;
  }
  result = a2;
  if ( a2 > 0 )
  {
    v94 = &a1[((8 * a2 - 8) & 0xFFFFFFE0) + 32];
    v33 = a1;
    do
    {
      v34 = *v33;
      v35 = *(uint32_t *)v33;
      v33 += 32;
      v36 = (uint32_t *)v98[v34 + 256];
      v98[v34 + 256] = (uint32_t)(uintptr_t)(v36 + 2);
      v36[1] = *((uint32_t *)v33 - 7);
      *v36 = v35;
      v37 = *(v33 - 24);
      v38 = *((uint32_t *)v33 - 6);
      v39 = (uint32_t *)v98[v37 + 256];
      v98[v37 + 256] = (uint32_t)(uintptr_t)(v39 + 2);
      v39[1] = *((uint32_t *)v33 - 5);
      *v39 = v38;
      v40 = *(v33 - 16);
      v41 = *((uint32_t *)v33 - 4);
      v42 = (uint32_t *)v98[v40 + 256];
      v98[v40 + 256] = (uint32_t)(uintptr_t)(v42 + 2);
      v42[1] = *((uint32_t *)v33 - 3);
      *v42 = v41;
      v43 = *(v33 - 8);
      v44 = *((uint32_t *)v33 - 2);
      v45 = (uint32_t *)v98[v43 + 256];
      v98[v43 + 256] = (uint32_t)(uintptr_t)(v45 + 2);
      v46 = *((uint32_t *)v33 - 1);
      v47 = v33 == v94;
      *v45 = v44;
      v45[1] = v46;
    }
    while ( !v47 );
    v48 = a3;
    v94 = &a3[((8 * a2 - 8) & 0xFFFFFFE0) + 32];
    do
    {
      v49 = v48[1];
      v50 = *(uint32_t *)v48;
      v48 += 32;
      v51 = (uint32_t *)v98[v49 + 512];
      v98[v49 + 512] = (uint32_t)(uintptr_t)(v51 + 2);
      v51[1] = *((uint32_t *)v48 - 7);
      *v51 = v50;
      v52 = *(v48 - 23);
      v53 = *((uint32_t *)v48 - 6);
      v54 = (uint32_t *)v98[v52 + 512];
      v98[v52 + 512] = (uint32_t)(uintptr_t)(v54 + 2);
      v54[1] = *((uint32_t *)v48 - 5);
      *v54 = v53;
      v55 = *(v48 - 15);
      v56 = *((uint32_t *)v48 - 4);
      v57 = (uint32_t *)v98[v55 + 512];
      v98[v55 + 512] = (uint32_t)(uintptr_t)(v57 + 2);
      v57[1] = *((uint32_t *)v48 - 3);
      *v57 = v56;
      v58 = *(v48 - 7);
      v59 = *((uint32_t *)v48 - 2);
      v60 = (uint32_t *)v98[v58 + 512];
      v98[v58 + 512] = (uint32_t)(uintptr_t)(v60 + 2);
      v61 = *((uint32_t *)v48 - 1);
      v47 = v48 == v94;
      *v60 = v59;
      v60[1] = v61;
    }
    while ( !v47 );
    v62 = a1;
    do
    {
      v63 = v62[2];
      v64 = *(uint32_t *)v62;
      v62 += 32;
      v65 = (uint32_t *)v98[v63 + 768];
      v98[v63 + 768] = (uint32_t)(uintptr_t)(v65 + 2);
      v65[1] = *((uint32_t *)v62 - 7);
      *v65 = v64;
      v66 = *(v62 - 22);
      v67 = *((uint32_t *)v62 - 6);
      v68 = (uint32_t *)v98[v66 + 768];
      v98[v66 + 768] = (uint32_t)(uintptr_t)(v68 + 2);
      v68[1] = *((uint32_t *)v62 - 5);
      *v68 = v67;
      v69 = *(v62 - 14);
      v70 = *((uint32_t *)v62 - 4);
      v71 = (uint32_t *)v98[v69 + 768];
      v98[v69 + 768] = (uint32_t)(uintptr_t)(v71 + 2);
      v71[1] = *((uint32_t *)v62 - 3);
      *v71 = v70;
      v72 = *(v62 - 6);
      v73 = *((uint32_t *)v62 - 2);
      v74 = (uint32_t *)v98[v72 + 768];
      v98[v72 + 768] = (uint32_t)(uintptr_t)(v74 + 2);
      v75 = *((uint32_t *)v62 - 1);
      *v74 = v73;
      v74[1] = v75;
    }
    while ( v62 != &a1[((8 * a2 - 8) & 0xFFFFFFE0) + 32] );
    v76 = v94;
    v77 = a3;
    do
    {
      v78 = v77[3];
      v77 += 32;
      v79 = (uint32_t *)v98[v78 + 1024];
      v98[v78 + 1024] = (uint32_t)(uintptr_t)(v79 + 2);
      v80 = *((uint32_t *)v77 - 7);
      *v79 = *((uint32_t *)v77 - 8);
      v79[1] = v80;
      v81 = *(v77 - 21);
      v82 = (uint32_t *)v98[v81 + 1024];
      v98[v81 + 1024] = (uint32_t)(uintptr_t)(v82 + 2);
      v83 = *((uint32_t *)v77 - 5);
      *v82 = *((uint32_t *)v77 - 6);
      v82[1] = v83;
      v84 = *(v77 - 13);
      v85 = (uint32_t *)v98[v84 + 1024];
      v98[v84 + 1024] = (uint32_t)(uintptr_t)(v85 + 2);
      v86 = *((uint32_t *)v77 - 3);
      *v85 = *((uint32_t *)v77 - 4);
      v85[1] = v86;
      v87 = *(v77 - 5);
      v88 = (int *)v98[v87 + 1024];
      v98[v87 + 1024] = (uint32_t)(uintptr_t)(v88 + 2);
      result = *((uint32_t *)v77 - 2);
      v89 = *((uint32_t *)v77 - 1);
      *v88 = result;
      v88[1] = v89;
    }
    while ( v77 != v76 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkRadixSort::sort64  (binary VA: 0x1a804e0)
// Original: hkRadixSort::sort64
// ----------------------------------------------------------------------------
uint8_t * hkRadixSort::sort64(uint8_t *a1, int a2, uint8_t *a3)
{
  __m128i *v3;
  __m128i *v4;
  __m128i *v5;
  __m128i *v6;
  __m128i *v7;
  __m128i *v8;
  __m128i *v9;
  __m128i *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint8_t *v15;
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
  uint8_t *v26;
  uint8_t *v27;
  uint8_t *v28;
  int v29;
  uint8_t *v30;
  uint8_t *v31;
  uint8_t *result;
  uint8_t *v33;
  int v34;
  uint32_t *v35;
  int v36;
  uint32_t *v37;
  int v38;
  uint32_t *v39;
  int v40;
  uint32_t *v41;
  uint8_t *v42;
  int v43;
  uint32_t *v44;
  int v45;
  uint32_t *v46;
  int v47;
  uint32_t *v48;
  int v49;
  uint32_t *v50;
  uint8_t *v51;
  uint8_t *v52;
  int v53;
  uint32_t *v54;
  int v55;
  uint32_t *v56;
  int v57;
  uint32_t *v58;
  int v59;
  uint32_t *v60;
  uint8_t *v61;
  int v62;
  uint32_t *v63;
  int v64;
  uint32_t *v65;
  int v66;
  uint32_t *v67;
  int v68;
  uint32_t *v69;
  uint8_t *v70;
  uint8_t *v71;
  int v72;
  uint32_t *v73;
  int v74;
  uint32_t *v75;
  int v76;
  uint32_t *v77;
  int v78;
  uint32_t *v79;
  uint8_t *v80;
  int v81;
  uint32_t *v82;
  int v83;
  uint32_t *v84;
  int v85;
  uint32_t *v86;
  int v87;
  uint32_t *v88;
  uint8_t *v89;
  uint8_t *v90;
  int v91;
  uint32_t *v92;
  int v93;
  uint32_t *v94;
  int v95;
  uint32_t *v96;
  int v97;
  uint32_t *v98;
  uint8_t *v99;
  int v100;
  uint32_t *v101;
  int v102;
  uint32_t *v103;
  int v104;
  uint32_t *v105;
  int v106;
  uint32_t *v107;
  typedef uint8_t *_g4_t_v108;
  typedef uint8_t *_g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef uint8_t *_g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef uint8_t *_g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef uint8_t *_g4_t_v140;
  typedef int _g4_t_v141;
  typedef uint8_t *_g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef uint8_t *_g4_t_v145;
  typedef uint8_t *_g4_t_v146;
  typedef int _g4_t_v147;
  typedef uint8_t *_g4_t_v148;
  typedef unsigned int _g4_t_v149;
  typedef uint8_t *_g4_t_v150;
  typedef uint8_t *_g4_t_v151;
  typedef uint32_t _g4_t_v152[256];
  typedef uint32_t _g4_t_v153[256];
  typedef uint32_t _g4_t_v154[256];
  typedef uint32_t _g4_t_v155[256];
  typedef uint32_t _g4_t_v156[256];
  typedef uint32_t _g4_t_v157[256];
  typedef uint32_t _g4_t_v158[256];
  typedef uint32_t _g4_t_v159[2306];
  enum : size_t {
    _g4_s0 = 16560u,
    _g4_s1 = (0u + sizeof(_g4_t_v108)) > _g4_s0 ? (0u + sizeof(_g4_t_v108)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v109)) > _g4_s1 ? (4u + sizeof(_g4_t_v109)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v110)) > _g4_s2 ? (16u + sizeof(_g4_t_v110)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v111)) > _g4_s3 ? (16u + sizeof(_g4_t_v111)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v112)) > _g4_s4 ? (20u + sizeof(_g4_t_v112)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v113)) > _g4_s5 ? (20u + sizeof(_g4_t_v113)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v114)) > _g4_s6 ? (24u + sizeof(_g4_t_v114)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v115)) > _g4_s7 ? (24u + sizeof(_g4_t_v115)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v116)) > _g4_s8 ? (28u + sizeof(_g4_t_v116)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v117)) > _g4_s9 ? (28u + sizeof(_g4_t_v117)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v118)) > _g4_s10 ? (28u + sizeof(_g4_t_v118)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v119)) > _g4_s11 ? (36u + sizeof(_g4_t_v119)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v120)) > _g4_s12 ? (36u + sizeof(_g4_t_v120)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v121)) > _g4_s13 ? (36u + sizeof(_g4_t_v121)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v122)) > _g4_s14 ? (40u + sizeof(_g4_t_v122)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v123)) > _g4_s15 ? (40u + sizeof(_g4_t_v123)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v124)) > _g4_s16 ? (40u + sizeof(_g4_t_v124)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v125)) > _g4_s17 ? (40u + sizeof(_g4_t_v125)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v126)) > _g4_s18 ? (72u + sizeof(_g4_t_v126)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v127)) > _g4_s19 ? (72u + sizeof(_g4_t_v127)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v128)) > _g4_s20 ? (72u + sizeof(_g4_t_v128)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v129)) > _g4_s21 ? (72u + sizeof(_g4_t_v129)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v130)) > _g4_s22 ? (72u + sizeof(_g4_t_v130)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v131)) > _g4_s23 ? (76u + sizeof(_g4_t_v131)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v132)) > _g4_s24 ? (76u + sizeof(_g4_t_v132)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v133)) > _g4_s25 ? (76u + sizeof(_g4_t_v133)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v134)) > _g4_s26 ? (76u + sizeof(_g4_t_v134)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v135)) > _g4_s27 ? (76u + sizeof(_g4_t_v135)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v136)) > _g4_s28 ? (80u + sizeof(_g4_t_v136)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v137)) > _g4_s29 ? (80u + sizeof(_g4_t_v137)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v138)) > _g4_s30 ? (80u + sizeof(_g4_t_v138)) : _g4_s30,
    _g4_s32 = (80u + sizeof(_g4_t_v139)) > _g4_s31 ? (80u + sizeof(_g4_t_v139)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v140)) > _g4_s32 ? (80u + sizeof(_g4_t_v140)) : _g4_s32,
    _g4_s34 = (84u + sizeof(_g4_t_v141)) > _g4_s33 ? (84u + sizeof(_g4_t_v141)) : _g4_s33,
    _g4_s35 = (84u + sizeof(_g4_t_v142)) > _g4_s34 ? (84u + sizeof(_g4_t_v142)) : _g4_s34,
    _g4_s36 = (88u + sizeof(_g4_t_v143)) > _g4_s35 ? (88u + sizeof(_g4_t_v143)) : _g4_s35,
    _g4_s37 = (88u + sizeof(_g4_t_v144)) > _g4_s36 ? (88u + sizeof(_g4_t_v144)) : _g4_s36,
    _g4_s38 = (88u + sizeof(_g4_t_v145)) > _g4_s37 ? (88u + sizeof(_g4_t_v145)) : _g4_s37,
    _g4_s39 = (92u + sizeof(_g4_t_v146)) > _g4_s38 ? (92u + sizeof(_g4_t_v146)) : _g4_s38,
    _g4_s40 = (96u + sizeof(_g4_t_v147)) > _g4_s39 ? (96u + sizeof(_g4_t_v147)) : _g4_s39,
    _g4_s41 = (96u + sizeof(_g4_t_v148)) > _g4_s40 ? (96u + sizeof(_g4_t_v148)) : _g4_s40,
    _g4_s42 = (96u + sizeof(_g4_t_v149)) > _g4_s41 ? (96u + sizeof(_g4_t_v149)) : _g4_s41,
    _g4_s43 = (96u + sizeof(_g4_t_v150)) > _g4_s42 ? (96u + sizeof(_g4_t_v150)) : _g4_s42,
    _g4_s44 = (100u + sizeof(_g4_t_v151)) > _g4_s43 ? (100u + sizeof(_g4_t_v151)) : _g4_s43,
    _g4_s45 = (104u + sizeof(_g4_t_v152)) > _g4_s44 ? (104u + sizeof(_g4_t_v152)) : _g4_s44,
    _g4_s46 = (1128u + sizeof(_g4_t_v153)) > _g4_s45 ? (1128u + sizeof(_g4_t_v153)) : _g4_s45,
    _g4_s47 = (2152u + sizeof(_g4_t_v154)) > _g4_s46 ? (2152u + sizeof(_g4_t_v154)) : _g4_s46,
    _g4_s48 = (3176u + sizeof(_g4_t_v155)) > _g4_s47 ? (3176u + sizeof(_g4_t_v155)) : _g4_s47,
    _g4_s49 = (4200u + sizeof(_g4_t_v156)) > _g4_s48 ? (4200u + sizeof(_g4_t_v156)) : _g4_s48,
    _g4_s50 = (5224u + sizeof(_g4_t_v157)) > _g4_s49 ? (5224u + sizeof(_g4_t_v157)) : _g4_s49,
    _g4_s51 = (6248u + sizeof(_g4_t_v158)) > _g4_s50 ? (6248u + sizeof(_g4_t_v158)) : _g4_s50,
    _g4_s52 = (7272u + sizeof(_g4_t_v159)) > _g4_s51 ? (7272u + sizeof(_g4_t_v159)) : _g4_s51
  };
  alignas(16) uint8_t _g4_sf[_g4_s52];
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 0u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 4u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 16u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 16u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 20u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 20u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 24u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 24u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 28u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 28u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 28u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 36u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 36u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 36u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 40u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 40u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 40u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 40u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 72u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 72u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 72u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 72u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 72u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 76u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 76u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 76u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 76u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 76u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 80u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 80u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 80u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 80u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 80u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 84u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 84u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 88u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 88u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 88u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 92u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 96u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 96u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 96u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 96u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 100u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 104u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 1128u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 2152u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 3176u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 4200u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 5224u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 6248u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 7272u);

  v3 = (__m128i *)v152;
  do
    *v3++ = g4_m128_from<__m128i>(0LL);
  while ( v3 != (__m128i *)v153 );
  v4 = (__m128i *)v153;
  do
    *v4++ = g4_m128_from<__m128i>(0LL);
  while ( v4 != (__m128i *)v154 );
  v5 = (__m128i *)v154;
  do
    *v5++ = g4_m128_from<__m128i>(0LL);
  while ( v5 != (__m128i *)v155 );
  v6 = (__m128i *)v155;
  do
    *v6++ = g4_m128_from<__m128i>(0LL);
  while ( v6 != (__m128i *)v156 );
  v7 = (__m128i *)v156;
  do
    *v7++ = g4_m128_from<__m128i>(0LL);
  while ( v7 != (__m128i *)v157 );
  v8 = (__m128i *)v157;
  do
    *v8++ = g4_m128_from<__m128i>(0LL);
  while ( v8 != (__m128i *)v158 );
  v9 = (__m128i *)v158;
  do
    *v9++ = g4_m128_from<__m128i>(0LL);
  while ( v9 != (__m128i *)v159 );
  v10 = (__m128i *)v159;
  do
    *v10++ = g4_m128_from<__m128i>(0LL);
  while ( v10 != (__m128i *)&v159[256] );
  if ( a2 > 0 )
  {
    v147 = 0;
    v151 = a1;
    v109 = a1 + 32;
    v108 = a1 + 48;
    do
    {
      v143 = v151[3];
      v131 = v151[6];
      v11 = v151[1];
      v136 = v151[5];
      v12 = v151[2];
      v126 = v151[7];
      v122 = v157[v136];
      v119 = v158[v131];
      v13 = v151[4];
      v116 = v159[v126];
      v14 = v153[v11];
      ++v152[*v151];
      v153[v11] = v14 + 1;
      ++v154[v12];
      ++v155[v143];
      ++v156[v13];
      v157[v136] = v122 + 1;
      v158[v131] = v119 + 1;
      v159[v126] = v116 + 1;
      v15 = (uint8_t *)(v151 - a1);
      v132 = v151[20];
      v137 = v151[19];
      v117 = v156[v132];
      v127 = v151[21];
      v123 = v151[22];
      v114 = v157[v127];
      v112 = v158[v123];
      v120 = v151[23];
      v16 = v151[17];
      v110 = v159[v120];
      v17 = v151[18];
      ++v152[v151[16]];
      v18 = v154[v17];
      ++v153[v16];
      v154[v17] = v18 + 1;
      ++v155[v137];
      v156[v132] = v117 + 1;
      v157[v127] = v114 + 1;
      v158[v123] = v112 + 1;
      v159[v120] = v110 + 1;
      v138 = v109[(uint32_t)(uintptr_t)(v15) + 3];
      v133 = v109[(uint32_t)(uintptr_t)(v15) + 4];
      v128 = v109[(uint32_t)(uintptr_t)(v15) + 5];
      v124 = v109[(uint32_t)(uintptr_t)(v15) + 6];
      v121 = v109[(uint32_t)(uintptr_t)(v15) + 7];
      v118 = v156[v133];
      v115 = v157[v128];
      v19 = v109[(uint32_t)(uintptr_t)(v15) + 1];
      v111 = v159[v121];
      v20 = v109[(uint32_t)(uintptr_t)(v15) + 2];
      v113 = v158[v124];
      ++v152[v109[(uint32_t)(uintptr_t)(v15)]];
      v21 = v154[v20];
      ++v153[v19];
      v154[v20] = v21 + 1;
      ++v155[v138];
      v156[v133] = v118 + 1;
      v157[v128] = v115 + 1;
      v158[v124] = v113 + 1;
      v159[v121] = v111 + 1;
      v144 = v108[(uint32_t)(uintptr_t)(v15) + 2];
      v22 = v108[(uint32_t)(uintptr_t)(v15) + 6];
      v141 = v108[(uint32_t)(uintptr_t)(v15) + 3];
      v23 = v108[(uint32_t)(uintptr_t)(v15) + 1];
      v139 = v108[(uint32_t)(uintptr_t)(v15) + 4];
      v24 = v108[(uint32_t)(uintptr_t)(v15) + 5];
      v134 = v157[v24];
      v129 = v158[v22];
      v25 = v108[(uint32_t)(uintptr_t)(v15) + 7];
      v125 = v159[v25];
      ++v152[v108[(uint32_t)(uintptr_t)(v15)]];
      ++v153[v23];
      ++v154[v144];
      ++v155[v141];
      ++v156[v139];
      v157[v24] = v134 + 1;
      v158[v22] = v129 + 1;
      v151 += 64;
      v159[v25] = v125 + 1;
      v147 += 4;
    }
    while ( a2 > v147 );
  }
  v26 = a3;
  v159[256] = (uint32_t)(uintptr_t)(a3);
  v159[512] = (uint32_t)(uintptr_t)(a1);
  v159[768] = (uint32_t)(uintptr_t)(a3);
  v159[1024] = (uint32_t)(uintptr_t)(a1);
  v159[1280] = (uint32_t)(uintptr_t)(a3);
  v159[1536] = (uint32_t)(uintptr_t)(a1);
  v159[1792] = (uint32_t)(uintptr_t)(a3);
  v27 = a1;
  v159[2048] = (uint32_t)(uintptr_t)(a1);
  v142 = a3;
  v28 = a1;
  v145 = a3;
  v151 = a1;
  v146 = a3;
  v148 = a1;
  v29 = 1;
  while ( 1 )
  {
    v140 = &v26[16 * v152[v29 - 1]];
    v159[v29 + 256] = (uint32_t)(uintptr_t)(v140);
    v135 = &v27[16 * v153[v29 - 1]];
    v159[v29 + 512] = (uint32_t)(uintptr_t)(v135);
    v142 += 16 * v154[v29 - 1];
    v159[v29 + 768] = (uint32_t)(uintptr_t)(v142);
    v130 = &v28[16 * v155[v29 - 1]];
    v159[v29 + 1024] = (uint32_t)(uintptr_t)(v130);
    v30 = &v145[16 * v156[v29 - 1]];
    v159[v29 + 1280] = (uint32_t)(uintptr_t)(v30);
    v151 += 16 * v157[v29 - 1];
    v159[v29 + 1536] = (uint32_t)(uintptr_t)(v151);
    v31 = &v146[16 * v158[v29 - 1]];
    v159[v29 + 1792] = (uint32_t)(uintptr_t)(v31);
    result = &v148[16 * v159[v29 - 1]];
    v159[v29++ + 2048] = (uint32_t)(uintptr_t)(result);
    if ( v29 == 256 )
      break;
    v146 = v31;
    v145 = v30;
    v148 = result;
    v28 = v130;
    v27 = v135;
    v26 = v140;
  }
  if ( a2 > 0 )
  {
    v151 = &a1[64 * ((unsigned int)(a2 - 1) >> 2) + 64];
    v33 = a1;
    do
    {
      v34 = *v33;
      v33 += 64;
      v35 = (uint32_t *)v159[v34 + 256];
      v159[v34 + 256] = (uint32_t)(uintptr_t)(v35 + 4);
      *v35 = *((uint32_t *)v33 - 16);
      v35[1] = *((uint32_t *)v33 - 15);
      v35[2] = *((uint32_t *)v33 - 14);
      v35[3] = *((uint32_t *)v33 - 13);
      v36 = *(v33 - 48);
      v37 = (uint32_t *)v159[v36 + 256];
      v159[v36 + 256] = (uint32_t)(uintptr_t)(v37 + 4);
      *v37 = *((uint32_t *)v33 - 12);
      v37[1] = *((uint32_t *)v33 - 11);
      v37[2] = *((uint32_t *)v33 - 10);
      v37[3] = *((uint32_t *)v33 - 9);
      v38 = *(v33 - 32);
      v39 = (uint32_t *)v159[v38 + 256];
      v159[v38 + 256] = (uint32_t)(uintptr_t)(v39 + 4);
      *v39 = *((uint32_t *)v33 - 8);
      v39[1] = *((uint32_t *)v33 - 7);
      v39[2] = *((uint32_t *)v33 - 6);
      v39[3] = *((uint32_t *)v33 - 5);
      v40 = *(v33 - 16);
      v41 = (uint32_t *)v159[v40 + 256];
      v159[v40 + 256] = (uint32_t)(uintptr_t)(v41 + 4);
      *v41 = *((uint32_t *)v33 - 4);
      v41[1] = *((uint32_t *)v33 - 3);
      v41[2] = *((uint32_t *)v33 - 2);
      v41[3] = *((uint32_t *)v33 - 1);
    }
    while ( v33 != &a1[64 * ((unsigned int)(a2 - 1) >> 2) + 64] );
    v42 = a3;
    v149 = (unsigned int)(a2 - 1) >> 2 << 6;
    do
    {
      v43 = v42[1];
      v42 += 64;
      v44 = (uint32_t *)v159[v43 + 512];
      v159[v43 + 512] = (uint32_t)(uintptr_t)(v44 + 4);
      *v44 = *((uint32_t *)v42 - 16);
      v44[1] = *((uint32_t *)v42 - 15);
      v44[2] = *((uint32_t *)v42 - 14);
      v44[3] = *((uint32_t *)v42 - 13);
      v45 = *(v42 - 47);
      v46 = (uint32_t *)v159[v45 + 512];
      v159[v45 + 512] = (uint32_t)(uintptr_t)(v46 + 4);
      *v46 = *((uint32_t *)v42 - 12);
      v46[1] = *((uint32_t *)v42 - 11);
      v46[2] = *((uint32_t *)v42 - 10);
      v46[3] = *((uint32_t *)v42 - 9);
      v47 = *(v42 - 31);
      v48 = (uint32_t *)v159[v47 + 512];
      v159[v47 + 512] = (uint32_t)(uintptr_t)(v48 + 4);
      *v48 = *((uint32_t *)v42 - 8);
      v48[1] = *((uint32_t *)v42 - 7);
      v48[2] = *((uint32_t *)v42 - 6);
      v48[3] = *((uint32_t *)v42 - 5);
      v49 = *(v42 - 15);
      v50 = (uint32_t *)v159[v49 + 512];
      v159[v49 + 512] = (uint32_t)(uintptr_t)(v50 + 4);
      *v50 = *((uint32_t *)v42 - 4);
      v50[1] = *((uint32_t *)v42 - 3);
      v50[2] = *((uint32_t *)v42 - 2);
      v50[3] = *((uint32_t *)v42 - 1);
    }
    while ( v42 != &a3[v149 + 64] );
    v51 = a1;
    v52 = v151;
    v150 = &a3[v149 + 64];
    do
    {
      v53 = v51[2];
      v51 += 64;
      v54 = (uint32_t *)v159[v53 + 768];
      v159[v53 + 768] = (uint32_t)(uintptr_t)(v54 + 4);
      *v54 = *((uint32_t *)v51 - 16);
      v54[1] = *((uint32_t *)v51 - 15);
      v54[2] = *((uint32_t *)v51 - 14);
      v54[3] = *((uint32_t *)v51 - 13);
      v55 = *(v51 - 46);
      v56 = (uint32_t *)v159[v55 + 768];
      v159[v55 + 768] = (uint32_t)(uintptr_t)(v56 + 4);
      *v56 = *((uint32_t *)v51 - 12);
      v56[1] = *((uint32_t *)v51 - 11);
      v56[2] = *((uint32_t *)v51 - 10);
      v56[3] = *((uint32_t *)v51 - 9);
      v57 = *(v51 - 30);
      v58 = (uint32_t *)v159[v57 + 768];
      v159[v57 + 768] = (uint32_t)(uintptr_t)(v58 + 4);
      *v58 = *((uint32_t *)v51 - 8);
      v58[1] = *((uint32_t *)v51 - 7);
      v58[2] = *((uint32_t *)v51 - 6);
      v58[3] = *((uint32_t *)v51 - 5);
      v59 = *(v51 - 14);
      v60 = (uint32_t *)v159[v59 + 768];
      v159[v59 + 768] = (uint32_t)(uintptr_t)(v60 + 4);
      *v60 = *((uint32_t *)v51 - 4);
      v60[1] = *((uint32_t *)v51 - 3);
      v60[2] = *((uint32_t *)v51 - 2);
      v60[3] = *((uint32_t *)v51 - 1);
    }
    while ( v51 != v52 );
    v61 = a3;
    do
    {
      v62 = v61[3];
      v61 += 64;
      v63 = (uint32_t *)v159[v62 + 1024];
      v159[v62 + 1024] = (uint32_t)(uintptr_t)(v63 + 4);
      *v63 = *((uint32_t *)v61 - 16);
      v63[1] = *((uint32_t *)v61 - 15);
      v63[2] = *((uint32_t *)v61 - 14);
      v63[3] = *((uint32_t *)v61 - 13);
      v64 = *(v61 - 45);
      v65 = (uint32_t *)v159[v64 + 1024];
      v159[v64 + 1024] = (uint32_t)(uintptr_t)(v65 + 4);
      *v65 = *((uint32_t *)v61 - 12);
      v65[1] = *((uint32_t *)v61 - 11);
      v65[2] = *((uint32_t *)v61 - 10);
      v65[3] = *((uint32_t *)v61 - 9);
      v66 = *(v61 - 29);
      v67 = (uint32_t *)v159[v66 + 1024];
      v159[v66 + 1024] = (uint32_t)(uintptr_t)(v67 + 4);
      *v67 = *((uint32_t *)v61 - 8);
      v67[1] = *((uint32_t *)v61 - 7);
      v67[2] = *((uint32_t *)v61 - 6);
      v67[3] = *((uint32_t *)v61 - 5);
      v68 = *(v61 - 13);
      v69 = (uint32_t *)v159[v68 + 1024];
      v159[v68 + 1024] = (uint32_t)(uintptr_t)(v69 + 4);
      *v69 = *((uint32_t *)v61 - 4);
      v69[1] = *((uint32_t *)v61 - 3);
      v69[2] = *((uint32_t *)v61 - 2);
      v69[3] = *((uint32_t *)v61 - 1);
    }
    while ( v61 != v150 );
    v70 = a1;
    v71 = v151;
    do
    {
      v72 = v70[4];
      v70 += 64;
      v73 = (uint32_t *)v159[v72 + 1280];
      v159[v72 + 1280] = (uint32_t)(uintptr_t)(v73 + 4);
      *v73 = *((uint32_t *)v70 - 16);
      v73[1] = *((uint32_t *)v70 - 15);
      v73[2] = *((uint32_t *)v70 - 14);
      v73[3] = *((uint32_t *)v70 - 13);
      v74 = *(v70 - 44);
      v75 = (uint32_t *)v159[v74 + 1280];
      v159[v74 + 1280] = (uint32_t)(uintptr_t)(v75 + 4);
      *v75 = *((uint32_t *)v70 - 12);
      v75[1] = *((uint32_t *)v70 - 11);
      v75[2] = *((uint32_t *)v70 - 10);
      v75[3] = *((uint32_t *)v70 - 9);
      v76 = *(v70 - 28);
      v77 = (uint32_t *)v159[v76 + 1280];
      v159[v76 + 1280] = (uint32_t)(uintptr_t)(v77 + 4);
      *v77 = *((uint32_t *)v70 - 8);
      v77[1] = *((uint32_t *)v70 - 7);
      v77[2] = *((uint32_t *)v70 - 6);
      v77[3] = *((uint32_t *)v70 - 5);
      v78 = *(v70 - 12);
      v79 = (uint32_t *)v159[v78 + 1280];
      v159[v78 + 1280] = (uint32_t)(uintptr_t)(v79 + 4);
      *v79 = *((uint32_t *)v70 - 4);
      v79[1] = *((uint32_t *)v70 - 3);
      v79[2] = *((uint32_t *)v70 - 2);
      v79[3] = *((uint32_t *)v70 - 1);
    }
    while ( v70 != v71 );
    v80 = a3;
    do
    {
      v81 = v80[5];
      v80 += 64;
      v82 = (uint32_t *)v159[v81 + 1536];
      v159[v81 + 1536] = (uint32_t)(uintptr_t)(v82 + 4);
      *v82 = *((uint32_t *)v80 - 16);
      v82[1] = *((uint32_t *)v80 - 15);
      v82[2] = *((uint32_t *)v80 - 14);
      v82[3] = *((uint32_t *)v80 - 13);
      v83 = *(v80 - 43);
      v84 = (uint32_t *)v159[v83 + 1536];
      v159[v83 + 1536] = (uint32_t)(uintptr_t)(v84 + 4);
      *v84 = *((uint32_t *)v80 - 12);
      v84[1] = *((uint32_t *)v80 - 11);
      v84[2] = *((uint32_t *)v80 - 10);
      v84[3] = *((uint32_t *)v80 - 9);
      v85 = *(v80 - 27);
      v86 = (uint32_t *)v159[v85 + 1536];
      v159[v85 + 1536] = (uint32_t)(uintptr_t)(v86 + 4);
      *v86 = *((uint32_t *)v80 - 8);
      v86[1] = *((uint32_t *)v80 - 7);
      v86[2] = *((uint32_t *)v80 - 6);
      v86[3] = *((uint32_t *)v80 - 5);
      v87 = *(v80 - 11);
      v88 = (uint32_t *)v159[v87 + 1536];
      v159[v87 + 1536] = (uint32_t)(uintptr_t)(v88 + 4);
      *v88 = *((uint32_t *)v80 - 4);
      v88[1] = *((uint32_t *)v80 - 3);
      v88[2] = *((uint32_t *)v80 - 2);
      v88[3] = *((uint32_t *)v80 - 1);
    }
    while ( v80 != v150 );
    v89 = v151;
    v90 = a1;
    v151 = v150;
    do
    {
      v91 = v90[6];
      v90 += 64;
      v92 = (uint32_t *)v159[v91 + 1792];
      v159[v91 + 1792] = (uint32_t)(uintptr_t)(v92 + 4);
      *v92 = *((uint32_t *)v90 - 16);
      v92[1] = *((uint32_t *)v90 - 15);
      v92[2] = *((uint32_t *)v90 - 14);
      v92[3] = *((uint32_t *)v90 - 13);
      v93 = *(v90 - 42);
      v94 = (uint32_t *)v159[v93 + 1792];
      v159[v93 + 1792] = (uint32_t)(uintptr_t)(v94 + 4);
      *v94 = *((uint32_t *)v90 - 12);
      v94[1] = *((uint32_t *)v90 - 11);
      v94[2] = *((uint32_t *)v90 - 10);
      v94[3] = *((uint32_t *)v90 - 9);
      v95 = *(v90 - 26);
      v96 = (uint32_t *)v159[v95 + 1792];
      v159[v95 + 1792] = (uint32_t)(uintptr_t)(v96 + 4);
      *v96 = *((uint32_t *)v90 - 8);
      v96[1] = *((uint32_t *)v90 - 7);
      v96[2] = *((uint32_t *)v90 - 6);
      v96[3] = *((uint32_t *)v90 - 5);
      v97 = *(v90 - 10);
      v98 = (uint32_t *)v159[v97 + 1792];
      v159[v97 + 1792] = (uint32_t)(uintptr_t)(v98 + 4);
      *v98 = *((uint32_t *)v90 - 4);
      v98[1] = *((uint32_t *)v90 - 3);
      v98[2] = *((uint32_t *)v90 - 2);
      v98[3] = *((uint32_t *)v90 - 1);
    }
    while ( v90 != v89 );
    v99 = v151;
    result = a3;
    do
    {
      v100 = result[7];
      result += 64;
      v101 = (uint32_t *)v159[v100 + 2048];
      v159[v100 + 2048] = (uint32_t)(uintptr_t)(v101 + 4);
      *v101 = *((uint32_t *)result - 16);
      v101[1] = *((uint32_t *)result - 15);
      v101[2] = *((uint32_t *)result - 14);
      v101[3] = *((uint32_t *)result - 13);
      v102 = *(result - 41);
      v103 = (uint32_t *)v159[v102 + 2048];
      v159[v102 + 2048] = (uint32_t)(uintptr_t)(v103 + 4);
      *v103 = *((uint32_t *)result - 12);
      v103[1] = *((uint32_t *)result - 11);
      v103[2] = *((uint32_t *)result - 10);
      v103[3] = *((uint32_t *)result - 9);
      v104 = *(result - 25);
      v105 = (uint32_t *)v159[v104 + 2048];
      v159[v104 + 2048] = (uint32_t)(uintptr_t)(v105 + 4);
      *v105 = *((uint32_t *)result - 8);
      v105[1] = *((uint32_t *)result - 7);
      v105[2] = *((uint32_t *)result - 6);
      v105[3] = *((uint32_t *)result - 5);
      v106 = *(result - 9);
      v107 = (uint32_t *)v159[v106 + 2048];
      v159[v106 + 2048] = (uint32_t)(uintptr_t)(v107 + 4);
      *v107 = *((uint32_t *)result - 4);
      v107[1] = *((uint32_t *)result - 3);
      v107[2] = *((uint32_t *)result - 2);
      v107[3] = *((uint32_t *)result - 1);
    }
    while ( result != v99 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkVdbStreamReportUtil::generateReport  (binary VA: 0x1a813a0)
// Original: hkVdbStreamReportUtil::generateReport
// ----------------------------------------------------------------------------
void hkVdbStreamReportUtil::generateReport(hkVdbStreamReportUtil::Self *self, const hkTrackerScanSnapshot::Self *a2)
{
  hkVdbStreamReportUtil::Self *v2;
  char *SystemTime;
  int v4;
  int v5;
  hkString::Self *MemorySystemStatistics;
  char *v7;
  int v8;
  int v9;
  int v10;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v11;
  int v12;
  int v13;
  char *v14;
  int v15;
  int v16;
  unsigned int **v17;
  unsigned int **v18;
  char *v19;
  hkTrackerScanSnapshot::Self *v20;
  int v21;
  int v22;
  void *v23;
  char *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  unsigned int *v33;
  int v34;
  int v35;
  signed int v36;
  unsigned int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  unsigned int v49;
  int v50;
  typedef hkOstream::Self *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v55;
  typedef hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *_g4_t_v56;
  typedef hkStackTracer::CallTree::Self *_g4_t_v57;
  typedef char *_g4_t_v58;
  typedef char *_g4_t_v59;
  typedef char *_g4_t_v60;
  typedef hkTrackerScanSnapshot::Self *_g4_t_v61;
  typedef char *_g4_t_v62;
  typedef char *_g4_t_v63;
  typedef unsigned int *_g4_t_v64;
  typedef unsigned int **_g4_t_v65;
  typedef char *_g4_t_v66;
  typedef const hkTrackerScanSnapshot::Self *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef char _g4_t_v69[13];
  typedef char _g4_t_v70[4];
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef uint32_t *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef uint32_t _g4_t_v77[4];
  typedef uint32_t _g4_t_v78[4];
  typedef unsigned int *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef unsigned int *_g4_t_v82;
  typedef unsigned int **_g4_t_v83;
  typedef int _g4_t_v84;
  typedef hkVdbStreamReportUtil::Self **_g4_t_v85;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (4u + sizeof(_g4_t_v51)) > _g4_s0 ? (4u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v52)) > _g4_s1 ? (8u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v53)) > _g4_s2 ? (8u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v54)) > _g4_s3 ? (8u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v55)) > _g4_s4 ? (60u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v56)) > _g4_s5 ? (60u + sizeof(_g4_t_v56)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v57)) > _g4_s6 ? (64u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v58)) > _g4_s7 ? (68u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v59)) > _g4_s8 ? (68u + sizeof(_g4_t_v59)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v60)) > _g4_s9 ? (76u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v61)) > _g4_s10 ? (84u + sizeof(_g4_t_v61)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v62)) > _g4_s11 ? (88u + sizeof(_g4_t_v62)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v63)) > _g4_s12 ? (88u + sizeof(_g4_t_v63)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v64)) > _g4_s13 ? (88u + sizeof(_g4_t_v64)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v65)) > _g4_s14 ? (88u + sizeof(_g4_t_v65)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v66)) > _g4_s15 ? (88u + sizeof(_g4_t_v66)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v67)) > _g4_s16 ? (96u + sizeof(_g4_t_v67)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v68)) > _g4_s17 ? (100u + sizeof(_g4_t_v68)) : _g4_s17,
    _g4_s19 = (107u + sizeof(_g4_t_v69)) > _g4_s18 ? (107u + sizeof(_g4_t_v69)) : _g4_s18,
    _g4_s20 = (120u + sizeof(_g4_t_v70)) > _g4_s19 ? (120u + sizeof(_g4_t_v70)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v71)) > _g4_s20 ? (124u + sizeof(_g4_t_v71)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v72)) > _g4_s21 ? (128u + sizeof(_g4_t_v72)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v73)) > _g4_s22 ? (132u + sizeof(_g4_t_v73)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v74)) > _g4_s23 ? (140u + sizeof(_g4_t_v74)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v75)) > _g4_s24 ? (144u + sizeof(_g4_t_v75)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v76)) > _g4_s25 ? (148u + sizeof(_g4_t_v76)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v77)) > _g4_s26 ? (156u + sizeof(_g4_t_v77)) : _g4_s26,
    _g4_s28 = (172u + sizeof(_g4_t_v78)) > _g4_s27 ? (172u + sizeof(_g4_t_v78)) : _g4_s27,
    _g4_s29 = (188u + sizeof(_g4_t_v79)) > _g4_s28 ? (188u + sizeof(_g4_t_v79)) : _g4_s28,
    _g4_s30 = (192u + sizeof(_g4_t_v80)) > _g4_s29 ? (192u + sizeof(_g4_t_v80)) : _g4_s29,
    _g4_s31 = (196u + sizeof(_g4_t_v81)) > _g4_s30 ? (196u + sizeof(_g4_t_v81)) : _g4_s30,
    _g4_s32 = (204u + sizeof(_g4_t_v82)) > _g4_s31 ? (204u + sizeof(_g4_t_v82)) : _g4_s31,
    _g4_s33 = (208u + sizeof(_g4_t_v83)) > _g4_s32 ? (208u + sizeof(_g4_t_v83)) : _g4_s32,
    _g4_s34 = (212u + sizeof(_g4_t_v84)) > _g4_s33 ? (212u + sizeof(_g4_t_v84)) : _g4_s33,
    _g4_s35 = (228u + sizeof(_g4_t_v85)) > _g4_s34 ? (228u + sizeof(_g4_t_v85)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 4u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 8u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 60u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 64u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 68u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 68u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 76u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 84u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 88u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 88u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 88u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 88u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 88u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 96u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 100u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 107u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 120u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 124u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 128u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 132u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 140u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 144u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 148u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 156u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 172u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 188u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 192u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 196u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 204u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 208u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 212u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 228u);

  v85 = &self;
  v2 = self;
  v61 = (hkTrackerScanSnapshot::Self *)(self);
  v71 = 0;
  v67 = a2;
  v72 = 0;
  v73 = -1;
  v74 = nullptr;
  v75 = 0;
  v76 = -1;
  v77[0] = 0;
  v77[1] = 0;
  v77[2] = -1;
  v78[0] = 0;
  v78[1] = 0;
  v78[2] = -1;
  hkStackTracer::Construct((hkStackTracer::Self *)v70);
  v57 = (hkStackTracer::CallTree::Self *)((hkVdbStreamReportUtil::Self *)((char *)v2 + 80));
  if ( *((uint32_t *)v2 + 3) != 0 )
  {
    hkStackTracer::CallTree::isEmpty((hkStackTracer::CallTree::Self *)v69, (int)(uintptr_t)(v2) + 80);
    if ( v69[0] != 0 )
      hkOstream::opShl(
        (int)(uintptr_t)(v67),
        (hkString::Self *)"#NOTE: Could not retrieve stack information. Are you using the hkCheckingMemorySystem?\n#\n");
  }
  hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"#V <integer> - Version number\n");
  hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"#Date(ts=<timestamp>) - Date of capture\n");
  hkOstream::opShl(
    (int)(uintptr_t)(v67),
    (hkString::Self *)"#Module(mod=<platform-dependent module/symbol identifier string>) - Module information\n");
  hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"#Statistics(str=<string>) - Raw memory system Statistics\n");
  hkOstream::opShl(
    (int)(uintptr_t)(v67),
    (hkString::Self *)"#Provider(id=<provider id>, name=<name>, parIds=[<parent>*]) - Hierarchy of providers (allocators)\n");
  hkOstream::opShl(
    (int)(uintptr_t)(v67),
    (hkString::Self *)"#Router(temp=<provider id>, stack=<provider id>, heap=<provider id>, debug=<provider id>, solver=<provid"
                "er id>) - Memory router wiring\n");
  hkOstream::opShl(
    (int)(uintptr_t)(v67),
    (hkString::Self *)"#Allocation(addr=<address>, size=<size>, provId=<provider id>, status=<status>, callstackId=<callstack i"
                "d>) - Allocation report\n");
  hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"#Type(id=<type id>, name=<type name>) - Block type definition\n");
  hkOstream::opShl(
    (int)(uintptr_t)(v67),
    (hkString::Self *)"#Block(id=<block id>, typeId=<type id>, addr=<address>, size=<size>) - Tracker block report\n");
  hkOstream::opShl(
    (int)(uintptr_t)(v67),
    (hkString::Self *)"#References(blockId=<block id>, refIds=[<owned block id>+]) - Blocks referenced by a given block\n");
  hkOstream::opShl(
    (int)(uintptr_t)(v67),
    (hkString::Self *)"#Callstack(id=<callstack id>, locations=[<location>+]) - Callstack declaration for a specific address\n");
  hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"#Location(loc=<location>, str=<string name>) - Program location\n");
  hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"V 1\n");
  SystemTime = (char *)hkGetSystemTime();
  v4 = hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"Date( ts=");
  v5 = hkOstream::opShl(v4, SystemTime);
  hkOstream::opShl(v5, (hkString::Self *)" )\n");
  hkStackTracer::getModuleInfo();
  MemorySystemStatistics = (hkString::Self *)hkTrackerScanSnapshot::getMemorySystemStatistics(v61);
  if ( MemorySystemStatistics != nullptr )
  {
    while ( 1 )
    {
      v7 = hkString::strChr(MemorySystemStatistics, &byte_9[1]);
      if ( v7 == nullptr )
        break;
      hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"Statistics( str='");
      hkOstream::write(v67, (const char *)MemorySystemStatistics, v7 - (char *)MemorySystemStatistics);
      MemorySystemStatistics = (hkString::Self *)(v7 + 1);
      hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"' )\n");
    }
  }
  if ( *((int *)v61 + 13) > 0 )
  {
    v62 = nullptr;
    do
    {
      v8 = *((uint32_t *)v61 + 12) + 44 * (uint32_t)(uintptr_t)(v62);
      hkOstream::printf(v67, "Provider( id=%i, name='%s', parIds=[", v62, v8);
      v9 = 0;
      if ( *(int *)(v8 + 36) > 0 )
      {
        do
        {
          hkOstream::printf(v67, "%i", *(uint32_t *)(*(uint32_t *)(v8 + 32) + 4 * v9));
          v10 = *(uint32_t *)(v8 + 36);
          if ( v9 != v10 - 1 )
          {
            hkOstream::opShl((int)(uintptr_t)(v67), 44);
            v10 = *(uint32_t *)(v8 + 36);
          }
          ++v9;
        }
        while ( v9 < v10 );
      }
      hkOstream::printf(v67, "] )\n");
      ++v62;
    }
    while ( *((uint32_t *)v61 + 13) > (int)(uintptr_t)(v62) );
  }
  v52 = *((uint32_t *)v61 + 16);
  hkOstream::printf(v67, "Router( temp=%i, stack=%i, heap=%i, debug=%i, solver=%i )\n", *((uint32_t *)v61 + 15));
  if ( *((int *)v61 + 10) > 0 )
  {
    v63 = nullptr;
    do
    {
      v11 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(*((uint32_t *)v61 + 9)
                                                                                      + 20 * (uint32_t)(uintptr_t)(v63));
      if ( *((uint32_t *)v11 + 3) != -1
        && hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
             (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v78,
             *((uint32_t *)v11 + 3),
             0) == 0 )
      {
        v82 = nullptr;
        v83 = nullptr;
        v84 = 0x80000000;
        v12 = hkStackTracer::CallTree::getCallStackSize(v57, *((uint32_t *)v11 + 3));
        if ( v12 > (v84 & 0x3FFFFFFF) )
        {
          v13 = 2 * (v84 & 0x3FFFFFFF);
          if ( v12 >= v13 )
            v13 = v12;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)&v68,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            (int *)&v82,
            v13,
            4);
        }
        v83 = (unsigned int **)v12;
        hkStackTracer::CallTree::getCallStack(v57, *((uint32_t *)v11 + 3), v82, v12);
        v14 = *((char **)v11 + 3);
        v15 = hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"Callstack( id=");
        v16 = hkOstream::opShl(v15, v14);
        v17 = nullptr;
        hkOstream::opShl(v16, (hkString::Self *)", locations=[");
        if ( (int)(uintptr_t)(v83) > 0 )
        {
          v55 = v11;
          do
          {
            v18 = (unsigned int **)(4 * (uint32_t)(uintptr_t)(v17));
            hkOstream::opShl((int)(uintptr_t)(v67), (char *)v82[(uint32_t)(uintptr_t)(v17)]);
            if ( v17 != (unsigned int **)((char *)v83 - 1) )
              hkOstream::opShl((int)(uintptr_t)(v67), 44);
            v17 = (unsigned int **)((char *)v17 + 1);
            hkMapBase_unsigned_long_unsigned_l_393416::insert(
              (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v74,
              (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
              *(unsigned int *)((char *)v18 + (uint32_t)(uintptr_t)(v82)),
              0);
          }
          while ( (int)(uintptr_t)(v83) > (int)(uintptr_t)(v17) );
          v11 = v55;
        }
        hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"] )\n");
        hkMapBase_unsigned_long_unsigned_l_393416::insert(
          (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v78,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          *((uint32_t *)v11 + 3),
          1u);
        v83 = nullptr;
        if ( v84 >= 0 )
          (*(void (**)(uint32_t *, unsigned int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v82,
            4 * v84);
      }
      v52 = *((uint32_t *)v11 + 1);
      hkOstream::printf(v67, "Allocation( addr=0x%p, size=%i, provId=%i, status=%i", *(uint32_t *)v11);
      if ( *((uint32_t *)v11 + 3) != -1 )
        hkOstream::printf(v67, ", callstackId=%i", *((uint32_t *)v11 + 3));
      hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)" )\n");
      ++v63;
    }
    while ( *((uint32_t *)v61 + 10) > (int)(uintptr_t)(v63) );
  }
  if ( *((int *)v61 + 3) > 0 )
  {
    v19 = nullptr;
    v20 = v61;
    do
    {
      v65 = *(unsigned int ***)(*((uint32_t *)v20 + 2) + 4 * (uint32_t)(uintptr_t)(v19));
      v33 = *v65;
      hkMapBase_unsigned_long_unsigned_l_393416::get(
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v68,
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v71,
        *v65,
        &v82);
      v23 = v65;
      if ( v68 != 0 )
      {
        v58 = (char *)v65;
        v64 = (unsigned int *)(v72 & 0x7FFFFFFF);
        v21 = hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"Type( id=");
        v22 = hkOstream::opShl(v21, (char *)v64);
        hkOstream::opShl(v22, (hkString::Self *)", name='");
        hkTrackerTypeTreeNode::dumpType(*(hkTrackerTypeTreeNode::Self **)v58, v67, v51);
        hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"' )\n");
        hkMapBase_unsigned_long_unsigned_l_393416::insert(
          (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v71,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (unsigned int)(uintptr_t)(v33),
          (unsigned int)(uintptr_t)(v64));
        v23 = v58;
      }
      else
      {
        v64 = v82;
      }
      v24 = *((char **)v23 + 2);
      v59 = *((char **)v23 + 1);
      v25 = hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"Block( id=");
      v26 = hkOstream::opShl(v25, v19++);
      v27 = hkOstream::opShl(v26, (hkString::Self *)", typeId=");
      v28 = hkOstream::opShl(v27, (char *)v64);
      v29 = hkOstream::opShl(v28, (hkString::Self *)", addr=0x");
      v30 = hkOstream::opShl(v29, v59);
      v31 = hkOstream::opShl(v30, (hkString::Self *)", size=");
      v32 = hkOstream::opShl(v31, v24);
      hkOstream::opShl(v32, (hkString::Self *)" )\n");
      v20 = v61;
    }
    while ( *((uint32_t *)v61 + 3) > (int)(uintptr_t)(v19) );
  }
  v79 = nullptr;
  v80 = 0;
  v81 = 0x80000000;
  if ( (v75 & 0x7FFFFFFF) != 0 )
  {
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)&v68,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v79,
      v75 & 0x7FFFFFFF,
      4);
    v34 = v80;
  }
  else
  {
    v34 = 0;
  }
  if ( v76 >= 0 )
  {
    v35 = 0;
    if ( *v74 == -1 )
    {
      while ( v76 >= ++v35 )
      {
        if ( v74[2 * v35] != -1 )
        {
          v50 = v35;
          goto LABEL_72;
        }
      }
    }
    else
    {
      v50 = 0;
LABEL_72:
      v49 = v74[2 * v50];
      if ( (v81 & 0x3FFFFFFF) == v34 )
        goto LABEL_78;
      while ( 1 )
      {
        ++v35;
        v79[v34] = v49;
        v34 = ++v80;
        if ( v76 < v35 )
          break;
        while ( v74[2 * v35] == -1 )
        {
          if ( v76 < ++v35 )
            goto LABEL_45;
        }
        v49 = v74[2 * v35];
        if ( (v81 & 0x3FFFFFFF) == v34 )
        {
LABEL_78:
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v79,
            4,
            v52);
          v34 = v80;
        }
      }
    }
  }
LABEL_45:
  if ( v34 != 0 )
  {
    v82 = (unsigned int *)v67;
    v83 = &v79;
    v84 = 0;
    hkStackTracer::dumpStackTrace((hkStackTracer::Self *)v70, v79, v34, (void (*)(const char *, void *))sub_1A812F0, &v82);
  }
  v80 = 0;
  if ( v81 >= 0 )
    (*(void (**)(uint32_t *, unsigned int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v79,
      4 * v81);
  v36 = 0;
  v82 = nullptr;
  v83 = nullptr;
  v84 = -1;
  if ( *((int *)v61 + 3) > 0 )
  {
    do
    {
      v53 = v36;
      v37 = *(uint32_t *)(*((uint32_t *)v61 + 2) + 4 * v36++);
      hkMapBase_unsigned_long_unsigned_l_393416::insert(
        (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v82,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        v37,
        v53);
      v38 = *((uint32_t *)v61 + 3);
    }
    while ( v38 > v36 );
    if ( v38 > 0 )
    {
      v60 = nullptr;
      do
      {
        v66 = *(char **)(*((uint32_t *)v61 + 2) + 4 * (uint32_t)(uintptr_t)(v60));
        v39 = *((uint32_t *)v61 + 26);
        v40 = *((uint32_t *)v66 + 4);
        v79 = nullptr;
        v80 = 0;
        v41 = v39 + 4 * v40;
        v81 = 0x80000000;
        if ( *((int *)v66 + 5) > 0 )
        {
          v42 = 0;
          do
          {
            v43 = hkMapBase_unsigned_long_unsigned_l_393416::getWithDefault(
                    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v82,
                    *(uint32_t *)(v41 + 4 * v42),
                    0xFFFFFFFF);
            if ( v43 != -1 )
            {
              v44 = v80;
              if ( v80 == (v81 & 0x3FFFFFFF) )
              {
                v56 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v43;
                hkArrayUtil::reserveMore(
                  (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                  (hkMemoryAllocator::Self *)&v79,
                  4,
                  v54);
                v44 = v80;
                v43 = (unsigned int)(uintptr_t)(v56);
              }
              v79[v44] = v43;
              ++v80;
            }
            ++v42;
          }
          while ( *((uint32_t *)v66 + 5) > v42 );
          if ( v80 != 0 )
          {
            v45 = 0;
            v46 = hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"References( blockId=");
            v47 = hkOstream::opShl(v46, v60);
            hkOstream::opShl(v47, (hkString::Self *)", refIds=[");
            if ( v80 > 0 )
            {
              do
              {
                hkOstream::opShl((int)(uintptr_t)(v67), (char *)v79[v45]);
                v48 = v80;
                if ( v45 != v80 - 1 )
                {
                  hkOstream::opShl((int)(uintptr_t)(v67), 44);
                  v48 = v80;
                }
                ++v45;
              }
              while ( v45 < v48 );
            }
            hkOstream::opShl((int)(uintptr_t)(v67), (hkString::Self *)"] )\n");
          }
        }
        v80 = 0;
        if ( v81 >= 0 )
          (*(void (**)(uint32_t *, unsigned int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            v79,
            4 * v81);
        ++v60;
      }
      while ( *((uint32_t *)v61 + 3) > (int)(uintptr_t)(v60) );
    }
  }
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v82,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  hkStackTracer::Destroy((hkStackTracer::Self *)v70);
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v78,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v77,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v74,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)&v71,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
}

// ----------------------------------------------------------------------------
// Function: hkAndroidGetCpuFamily  (binary VA: 0x1a823a0)
// Original: hkAndroidGetCpuFamily
// ----------------------------------------------------------------------------
int hkAndroidGetCpuFamily()
{
  g4_pthread_once((&dword_2142634), (void (*)(void))sub_1A821C0);
  return dword_2142630;
}

// ----------------------------------------------------------------------------
// Function: hkAndroidGetCpuFeatures  (binary VA: 0x1a823e0)
// Original: hkAndroidGetCpuFeatures
// ----------------------------------------------------------------------------
int64_t hkAndroidGetCpuFeatures()
{
  g4_pthread_once((&dword_2142634), (void (*)(void))sub_1A821C0);
  return qword_2142620;
}

// ----------------------------------------------------------------------------
// Function: hkAndroidGetCpuCount  (binary VA: 0x1a82420)
// Original: hkAndroidGetCpuCount
// ----------------------------------------------------------------------------
int hkAndroidGetCpuCount()
{
  g4_pthread_once((&dword_2142634), (void (*)(void))sub_1A821C0);
  return dword_2142610;
}

// ----------------------------------------------------------------------------
// Function: hk1AxisSweep::collide  (binary VA: 0x1a82800)
// Original: hk1AxisSweep::collide
// ----------------------------------------------------------------------------
int hk1AxisSweep::collide(unsigned int *a1, int a2, unsigned int *a3, int a4, char *a5, int a6, uint32_t *a7)
{
  unsigned int v7;
  unsigned int v8;
  char *v9;
  int v10;
  char *v11;
  char *v12;
  char *v13;
  char *v14;
  char *v15;
  char *v16;
  unsigned int v17;
  unsigned int v18;
  char *v19;
  int v20;
  char *v21;
  char *v22;
  char *v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int *v26;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  char *v34;
  char *v35;
  char *v36;
  unsigned int v37;
  unsigned int v38;
  uint32_t *v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  unsigned int v45;

  v36 = a5;
  v45 = (unsigned int)(uintptr_t)(&a5[8 * a6]);
  *a7 = 0;
  v7 = *a1;
  v8 = *a3;
  while ( 1 )
  {
    while ( v7 > v8 )
    {
      if ( a4 <= 0 )
        return (v36 - a5) >> 3;
      v37 = a3[4];
      if ( v37 >= v7 )
      {
        v34 = (char *)a1;
        v43 = a1 + 8;
        v39 = a1 + 16;
        v41 = a1 + 24;
        do
        {
          v32 = a3[5];
          v10 = v34 - (char *)a1;
          v28 = ((a3[6] - *((uint32_t *)v34 + 2))
               | (*((uint32_t *)v34 + 6) - a3[2])
               | (v32 - *((uint32_t *)v34 + 1))
               | (*((uint32_t *)v34 + 5) - a3[1]))
              & 0x80000000;
          v30 = ((a3[6] - *(uint32_t *)((char *)v39  + ((uintptr_t)(v34) - (uintptr_t)(char *)(a1)) + 8))
               | (*(uint32_t *)((char *)v39  + ((uintptr_t)(v34) - (uintptr_t)(char *)(a1)) + 24) - a3[2])
               | (v32 - *(uint32_t *)((char *)v39  + ((uintptr_t)(v34) - (uintptr_t)(char *)(a1)) + 4))
               | (*(uint32_t *)((char *)v39  + ((uintptr_t)(v34) - (uintptr_t)(char *)(a1)) + 20) - a3[1]))
              & 0x80000000;
          v17 = ((a3[6] - *(uint32_t *)((char *)v43  + ((uintptr_t)(v34) - (uintptr_t)(char *)(a1)) + 8))
               | (*(uint32_t *)((char *)v43  + ((uintptr_t)(v34) - (uintptr_t)(char *)(a1)) + 24) - a3[2])
               | (v32 - *(uint32_t *)((char *)v43  + ((uintptr_t)(v34) - (uintptr_t)(char *)(a1)) + 4))
               | (*(uint32_t *)((char *)v43  + ((uintptr_t)(v34) - (uintptr_t)(char *)(a1)) + 20) - a3[1]))
              & 0x80000000;
          v18 = ((a3[6] - *(uint32_t *)((char *)v41  + ((uintptr_t)(v34) - (uintptr_t)(char *)(a1)) + 8))
               | (*(uint32_t *)((char *)v41  + ((uintptr_t)(v34) - (uintptr_t)(char *)(a1)) + 24) - a3[2])
               | (v32 - *(uint32_t *)((char *)v41  + ((uintptr_t)(v34) - (uintptr_t)(char *)(a1)) + 4))
               | (*(uint32_t *)((char *)v41  + ((uintptr_t)(v34) - (uintptr_t)(char *)(a1)) + 20) - a3[1]))
              & 0x80000000;
          if ( (v18 & v28 & v17 & v30) == 0 )
          {
            if ( v28 == 0 )
            {
              if ( v45 > (unsigned int)(uintptr_t)(v36) )
              {
                v9 = v36;
                v36 += 8;
                *(uint32_t *)v9 = *((uint32_t *)v34 + 3);
                *((uint32_t *)v9 + 1) = a3[3];
                v10 = v34 - (char *)a1;
              }
              else
              {
                ++*a7;
              }
            }
            if ( v17 == 0 && v37 >= *(uint32_t *)((char *)v43 + v10) )
            {
              v11 = v36;
              if ( v45 <= (unsigned int)(uintptr_t)(v36) )
              {
                ++*a7;
              }
              else
              {
                v12 = v36;
                v36 += 8;
                *(uint32_t *)v11 = *((uint32_t *)v34 + 11);
                *((uint32_t *)v12 + 1) = a3[3];
              }
            }
            if ( v30 == 0 && v37 >= *(uint32_t *)((char *)v39 + v10) )
            {
              v13 = v36;
              if ( v45 <= (unsigned int)(uintptr_t)(v36) )
              {
                ++*a7;
              }
              else
              {
                v14 = v36;
                v36 += 8;
                *(uint32_t *)v13 = *((uint32_t *)v34 + 19);
                *((uint32_t *)v14 + 1) = a3[3];
              }
            }
            if ( v18 == 0 && v37 >= *(uint32_t *)((char *)v41 + v10) )
            {
              v15 = v36;
              if ( v45 <= (unsigned int)(uintptr_t)(v36) )
              {
                ++*a7;
              }
              else
              {
                v16 = v36;
                v36 += 8;
                *(uint32_t *)v15 = *((uint32_t *)v34 + 27);
                *((uint32_t *)v16 + 1) = a3[3];
              }
            }
          }
          v34 += 128;
        }
        while ( v37 >= *(uint32_t *)v34 );
        v7 = *a1;
      }
      v26 = a3;
      --a4;
      a3 += 8;
      v8 = v26[8];
    }
    if ( a2 <= 0 )
      break;
    v38 = a1[4];
    if ( v38 >= v8 )
    {
      v35 = (char *)a3;
      v44 = a3 + 8;
      v40 = a3 + 16;
      v42 = a3 + 24;
      do
      {
        v33 = a1[5];
        v20 = v35 - (char *)a3;
        v29 = ((a1[6] - *((uint32_t *)v35 + 2))
             | (*((uint32_t *)v35 + 6) - a1[2])
             | (v33 - *((uint32_t *)v35 + 1))
             | (*((uint32_t *)v35 + 5) - a1[1]))
            & 0x80000000;
        v31 = ((a1[6] - *(uint32_t *)((char *)v40  + ((uintptr_t)(v35) - (uintptr_t)(char *)(a3)) + 8))
             | (*(uint32_t *)((char *)v40  + ((uintptr_t)(v35) - (uintptr_t)(char *)(a3)) + 24) - a1[2])
             | (v33 - *(uint32_t *)((char *)v40  + ((uintptr_t)(v35) - (uintptr_t)(char *)(a3)) + 4))
             | (*(uint32_t *)((char *)v40  + ((uintptr_t)(v35) - (uintptr_t)(char *)(a3)) + 20) - a1[1]))
            & 0x80000000;
        v24 = ((a1[6] - *(uint32_t *)((char *)v44  + ((uintptr_t)(v35) - (uintptr_t)(char *)(a3)) + 8))
             | (*(uint32_t *)((char *)v44  + ((uintptr_t)(v35) - (uintptr_t)(char *)(a3)) + 24) - a1[2])
             | (v33 - *(uint32_t *)((char *)v44  + ((uintptr_t)(v35) - (uintptr_t)(char *)(a3)) + 4))
             | (*(uint32_t *)((char *)v44  + ((uintptr_t)(v35) - (uintptr_t)(char *)(a3)) + 20) - a1[1]))
            & 0x80000000;
        v25 = ((a1[6] - *(uint32_t *)((char *)v42  + ((uintptr_t)(v35) - (uintptr_t)(char *)(a3)) + 8))
             | (*(uint32_t *)((char *)v42  + ((uintptr_t)(v35) - (uintptr_t)(char *)(a3)) + 24) - a1[2])
             | (v33 - *(uint32_t *)((char *)v42  + ((uintptr_t)(v35) - (uintptr_t)(char *)(a3)) + 4))
             | (*(uint32_t *)((char *)v42  + ((uintptr_t)(v35) - (uintptr_t)(char *)(a3)) + 20) - a1[1]))
            & 0x80000000;
        if ( (v25 & v29 & v24 & v31) == 0 )
        {
          if ( v29 == 0 )
          {
            if ( v45 > (unsigned int)(uintptr_t)(v36) )
            {
              v19 = v36;
              v36 += 8;
              *(uint32_t *)v19 = a1[3];
              *((uint32_t *)v19 + 1) = *((uint32_t *)v35 + 3);
              v20 = v35 - (char *)a3;
            }
            else
            {
              ++*a7;
            }
          }
          if ( v24 == 0 && v38 >= *(uint32_t *)((char *)v44 + v20) )
          {
            if ( v45 <= (unsigned int)(uintptr_t)(v36) )
            {
              ++*a7;
            }
            else
            {
              v21 = v36;
              v36 += 8;
              *(uint32_t *)v21 = a1[3];
              *((uint32_t *)v21 + 1) = *((uint32_t *)v35 + 11);
            }
          }
          if ( v31 == 0 && v38 >= *(uint32_t *)((char *)v40 + v20) )
          {
            if ( v45 <= (unsigned int)(uintptr_t)(v36) )
            {
              ++*a7;
            }
            else
            {
              v22 = v36;
              v36 += 8;
              *(uint32_t *)v22 = a1[3];
              *((uint32_t *)v22 + 1) = *((uint32_t *)v35 + 19);
            }
          }
          if ( v25 == 0 && v38 >= *(uint32_t *)((char *)v42 + v20) )
          {
            if ( v45 <= (unsigned int)(uintptr_t)(v36) )
            {
              ++*a7;
            }
            else
            {
              v23 = v36;
              v36 += 8;
              *(uint32_t *)v23 = a1[3];
              *((uint32_t *)v23 + 1) = *((uint32_t *)v35 + 27);
            }
          }
        }
        v35 += 128;
      }
      while ( v38 >= *(uint32_t *)v35 );
      v8 = *a3;
    }
    v7 = a1[8];
    --a2;
    a1 += 8;
  }
  return (v36 - a5) >> 3;
}

// ----------------------------------------------------------------------------
// Function: hk1AxisSweep::collide  (binary VA: 0x1a82df0)
// Original: hk1AxisSweep::collide
// ----------------------------------------------------------------------------
unsigned int hk1AxisSweep::collide(unsigned int *a1, int a2, unsigned int *a3, int a4, hkMemoryAllocator::Self *a5)
{
  unsigned int result;
  unsigned int v6;
  unsigned int *v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  uint32_t *v12;
  unsigned int *v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  uint32_t *v18;
  unsigned int *v19;
  unsigned int *v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  uint32_t *v25;
  int v26;
  uint32_t *v27;
  int v28;
  uint32_t *v29;
  int v30;
  int v31;
  uint32_t *v32;
  int v33;
  uint32_t *v34;
  unsigned int v35;
  unsigned int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  unsigned int *v41;
  unsigned int *v42;
  unsigned int *v43;
  unsigned int *v44;
  unsigned int *v45;
  unsigned int *v46;
  int v47;
  int v48;
  unsigned int *v49;
  unsigned int *v50;
  char *v51;
  char *v52;
  uint32_t *v53;
  uint32_t *v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  uint32_t *v59;
  uint32_t *v60;
  uint32_t *v61;
  uint32_t *v62;

  result = *a1;
  v6 = *a3;
  while ( 1 )
  {
    while ( result > v6 )
    {
      if ( a4 <= 0 )
        return result;
      v57 = a3[4];
      if ( v57 >= result )
      {
        v7 = a3;
        v51 = (char *)a1;
        v59 = a1 + 8;
        v61 = a1 + 16;
        v53 = a1 + 24;
        do
        {
          v8 = v51 - (char *)a1;
          v55 = ((v7[6] - *((uint32_t *)v51 + 2))
               | (*((uint32_t *)v51 + 6) - v7[2])
               | (v7[5] - *((uint32_t *)v51 + 1))
               | (*((uint32_t *)v51 + 5) - v7[1]))
              & 0x80000000;
          v35 = ((v7[6] - *(uint32_t *)((char *)v59  + ((uintptr_t)(v51) - (uintptr_t)(char *)(a1)) + 8))
               | (*(uint32_t *)((char *)v59  + ((uintptr_t)(v51) - (uintptr_t)(char *)(a1)) + 24) - v7[2])
               | (v7[5] - *(uint32_t *)((char *)v59  + ((uintptr_t)(v51) - (uintptr_t)(char *)(a1)) + 4))
               | (*(uint32_t *)((char *)v59  + ((uintptr_t)(v51) - (uintptr_t)(char *)(a1)) + 20) - v7[1]))
              & 0x80000000;
          v9 = ((v7[6] - *(uint32_t *)((char *)v61  + ((uintptr_t)(v51) - (uintptr_t)(char *)(a1)) + 8))
              | (*(uint32_t *)((char *)v61  + ((uintptr_t)(v51) - (uintptr_t)(char *)(a1)) + 24) - v7[2])
              | (v7[5] - *(uint32_t *)((char *)v61  + ((uintptr_t)(v51) - (uintptr_t)(char *)(a1)) + 4))
              | (*(uint32_t *)((char *)v61  + ((uintptr_t)(v51) - (uintptr_t)(char *)(a1)) + 20) - v7[1]))
             & 0x80000000;
          v10 = ((v7[6] - *(uint32_t *)((char *)v53  + ((uintptr_t)(v51) - (uintptr_t)(char *)(a1)) + 8))
               | (*(uint32_t *)((char *)v53  + ((uintptr_t)(v51) - (uintptr_t)(char *)(a1)) + 24) - v7[2])
               | (v7[5] - *(uint32_t *)((char *)v53  + ((uintptr_t)(v51) - (uintptr_t)(char *)(a1)) + 4))
               | (*(uint32_t *)((char *)v53  + ((uintptr_t)(v51) - (uintptr_t)(char *)(a1)) + 20) - v7[1]))
              & 0x80000000;
          if ( (v55 & v10 & v9 & v35) == 0 )
          {
            if ( v55 == 0 )
            {
              v11 = *((uint32_t *)a5 + 1);
              if ( v11 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
              {
                v50 = v7;
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, v35);
                v7 = v50;
                v11 = *((uint32_t *)a5 + 1);
              }
              v47 = *(uint32_t *)a5;
              *((uint32_t *)a5 + 1) = v11 + 1;
              v12 = (uint32_t *)(v47 + 8 * v11);
              *v12 = *((uint32_t *)v51 + 3);
              v12[1] = v7[3];
            }
            if ( v35 == 0 && v57 >= *(uint32_t *)((char *)v59 + v8) )
            {
              v24 = *((uint32_t *)a5 + 1);
              if ( v24 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, (int)(uintptr_t)(v7));
                v7 = v44;
                v24 = *((uint32_t *)a5 + 1);
              }
              v37 = *(uint32_t *)a5;
              *((uint32_t *)a5 + 1) = v24 + 1;
              v25 = (uint32_t *)(v37 + 8 * v24);
              *v25 = *((uint32_t *)v51 + 11);
              v25[1] = v7[3];
            }
            if ( v9 == 0 && v57 >= *(uint32_t *)((char *)v61 + v8) )
            {
              v28 = *((uint32_t *)a5 + 1);
              if ( v28 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, (int)(uintptr_t)(v7));
                v7 = v45;
                v28 = *((uint32_t *)a5 + 1);
              }
              v39 = *(uint32_t *)a5;
              *((uint32_t *)a5 + 1) = v28 + 1;
              v29 = (uint32_t *)(v39 + 8 * v28);
              *v29 = *((uint32_t *)v51 + 19);
              v29[1] = v7[3];
            }
            if ( v10 == 0 && v57 >= *(uint32_t *)((char *)v53 + v8) )
            {
              v21 = *((uint32_t *)a5 + 1);
              if ( v21 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
              {
                hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, (int)(uintptr_t)(v7));
                v7 = v41;
                v21 = *((uint32_t *)a5 + 1);
              }
              v22 = *(uint32_t *)a5;
              *((uint32_t *)a5 + 1) = v21 + 1;
              v23 = (uint32_t *)(v22 + 8 * v21);
              *v23 = *((uint32_t *)v51 + 27);
              v23[1] = v7[3];
            }
          }
          v51 += 128;
        }
        while ( v57 >= *(uint32_t *)v51 );
        result = *a1;
      }
      v20 = a3;
      --a4;
      a3 += 8;
      v6 = v20[8];
    }
    result = a2;
    if ( a2 <= 0 )
      break;
    v58 = a1[4];
    if ( v58 >= v6 )
    {
      v13 = a1;
      v52 = (char *)a3;
      v60 = a3 + 8;
      v62 = a3 + 16;
      v54 = a3 + 24;
      do
      {
        v14 = v52 - (char *)a3;
        v56 = ((v13[6] - *((uint32_t *)v52 + 2))
             | (*((uint32_t *)v52 + 6) - v13[2])
             | (v13[5] - *((uint32_t *)v52 + 1))
             | (*((uint32_t *)v52 + 5) - v13[1]))
            & 0x80000000;
        v36 = ((v13[6] - *(uint32_t *)((char *)v60  + ((uintptr_t)(v52) - (uintptr_t)(char *)(a3)) + 8))
             | (*(uint32_t *)((char *)v60  + ((uintptr_t)(v52) - (uintptr_t)(char *)(a3)) + 24) - v13[2])
             | (v13[5] - *(uint32_t *)((char *)v60  + ((uintptr_t)(v52) - (uintptr_t)(char *)(a3)) + 4))
             | (*(uint32_t *)((char *)v60  + ((uintptr_t)(v52) - (uintptr_t)(char *)(a3)) + 20) - v13[1]))
            & 0x80000000;
        v15 = ((v13[6] - *(uint32_t *)((char *)v62  + ((uintptr_t)(v52) - (uintptr_t)(char *)(a3)) + 8))
             | (*(uint32_t *)((char *)v62  + ((uintptr_t)(v52) - (uintptr_t)(char *)(a3)) + 24) - v13[2])
             | (v13[5] - *(uint32_t *)((char *)v62  + ((uintptr_t)(v52) - (uintptr_t)(char *)(a3)) + 4))
             | (*(uint32_t *)((char *)v62  + ((uintptr_t)(v52) - (uintptr_t)(char *)(a3)) + 20) - v13[1]))
            & 0x80000000;
        v16 = ((v13[6] - *(uint32_t *)((char *)v54  + ((uintptr_t)(v52) - (uintptr_t)(char *)(a3)) + 8))
             | (*(uint32_t *)((char *)v54  + ((uintptr_t)(v52) - (uintptr_t)(char *)(a3)) + 24) - v13[2])
             | (v13[5] - *(uint32_t *)((char *)v54  + ((uintptr_t)(v52) - (uintptr_t)(char *)(a3)) + 4))
             | (*(uint32_t *)((char *)v54  + ((uintptr_t)(v52) - (uintptr_t)(char *)(a3)) + 20) - v13[1]))
            & 0x80000000;
        if ( (v56 & v16 & v15 & v36) == 0 )
        {
          if ( v56 == 0 )
          {
            v17 = *((uint32_t *)a5 + 1);
            if ( v17 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
            {
              v49 = v13;
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, v36);
              v13 = v49;
              v17 = *((uint32_t *)a5 + 1);
            }
            v48 = *(uint32_t *)a5;
            *((uint32_t *)a5 + 1) = v17 + 1;
            v18 = (uint32_t *)(v48 + 8 * v17);
            *v18 = v13[3];
            v18[1] = *((uint32_t *)v52 + 3);
          }
          if ( v36 == 0 && v58 >= *(uint32_t *)((char *)v60 + v14) )
          {
            v33 = *((uint32_t *)a5 + 1);
            if ( v33 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, (int)(uintptr_t)(v13));
              v13 = v46;
              v33 = *((uint32_t *)a5 + 1);
            }
            v40 = *(uint32_t *)a5;
            *((uint32_t *)a5 + 1) = v33 + 1;
            v34 = (uint32_t *)(v40 + 8 * v33);
            *v34 = v13[3];
            v34[1] = *((uint32_t *)v52 + 11);
          }
          if ( v15 == 0 && v58 >= *(uint32_t *)((char *)v62 + v14) )
          {
            v26 = *((uint32_t *)a5 + 1);
            if ( v26 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, (int)(uintptr_t)(v13));
              v13 = v42;
              v26 = *((uint32_t *)a5 + 1);
            }
            v38 = *(uint32_t *)a5;
            *((uint32_t *)a5 + 1) = v26 + 1;
            v27 = (uint32_t *)(v38 + 8 * v26);
            *v27 = v13[3];
            v27[1] = *((uint32_t *)v52 + 19);
          }
          if ( v16 == 0 && v58 >= *(uint32_t *)((char *)v54 + v14) )
          {
            v30 = *((uint32_t *)a5 + 1);
            if ( v30 == (*((uint32_t *)a5 + 2) & 0x3FFFFFFF) )
            {
              hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a5, 8, (int)(uintptr_t)(v13));
              v13 = v43;
              v30 = *((uint32_t *)a5 + 1);
            }
            v31 = *(uint32_t *)a5;
            *((uint32_t *)a5 + 1) = v30 + 1;
            v32 = (uint32_t *)(v31 + 8 * v30);
            *v32 = v13[3];
            v32[1] = *((uint32_t *)v52 + 27);
          }
        }
        v52 += 128;
      }
      while ( v58 >= *(uint32_t *)v52 );
      v6 = *a3;
    }
    v19 = a1;
    --a2;
    a1 += 8;
    result = v19[8];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hk1AxisSweep::collide  (binary VA: 0x1a83620)
// Original: hk1AxisSweep::collide
// ----------------------------------------------------------------------------
int hk1AxisSweep::collide(int a1, int a2, uint32_t *a3, int a4, uint32_t *a5)
{
  int i;
  uint32_t *v6;
  char *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int *v17;
  unsigned int v18;
  int v19;
  int v20;
  uint32_t *v21;
  int v22;
  unsigned int v23;
  int v24;

  v24 = a2 - 1;
  v23 = (unsigned int)(uintptr_t)(&a3[2 * a4]);
  *a5 = 0;
  v22 = -a1;
  v19 = a1 + 128;
  v20 = a1 + 96;
  v21 = a3;
  for ( i = a1 + 64; v24 > 0; v19 += 32 )
  {
    v17 = (unsigned int *)(i - 32);
    v18 = *(uint32_t *)(i - 48);
    if ( v18 >= *(uint32_t *)(i - 32) )
    {
      do
      {
        v16 = *(uint32_t *)(i - 44);
        v14 = ((*(uint32_t *)(i - 40) - v17[2])
             | (v17[6] - *(uint32_t *)(i - 56))
             | (v16 - v17[1])
             | (v17[5] - *(uint32_t *)(i - 60)))
            & 0x80000000;
        v7 = (char *)v17 + v22;
        v15 = ((*(uint32_t *)(i - 40) - *(unsigned int *)((char *)v17 + v22 + v20 - 24))
             | (*(unsigned int *)((char *)v17 + v22 + v20 - 8) - *(uint32_t *)(i - 56))
             | (v16 - *(unsigned int *)((char *)v17 + v22 + v20 - 28))
             | (*(unsigned int *)((char *)v17 + v22 + v20 - 12) - *(uint32_t *)(i - 60)))
            & 0x80000000;
        v11 = ((*(uint32_t *)(i - 40) - *(unsigned int *)((char *)v17 + v22 + i - 24))
             | (*(unsigned int *)((char *)v17 + v22 + i - 8) - *(uint32_t *)(i - 56))
             | (v16 - *(unsigned int *)((char *)v17 + v22 + i - 28))
             | (*(unsigned int *)((char *)v17 + v22 + i - 12) - *(uint32_t *)(i - 60)))
            & 0x80000000;
        v12 = ((*(uint32_t *)(i - 40) - *(unsigned int *)((char *)v17 + v22 + v19 - 24))
             | (*(unsigned int *)((char *)v17 + v22 + v19 - 8) - *(uint32_t *)(i - 56))
             | (v16 - *(unsigned int *)((char *)v17 + v22 + v19 - 28))
             | (*(unsigned int *)((char *)v17 + v22 + v19 - 12) - *(uint32_t *)(i - 60)))
            & 0x80000000;
        if ( (v12 & v14 & v11 & v15) == 0 )
        {
          if ( v14 == 0 )
          {
            if ( v23 > (unsigned int)(uintptr_t)(v21) )
            {
              v6 = v21;
              v21 += 2;
              *v6 = *(uint32_t *)(i - 52);
              v6[1] = v17[3];
              v7 = (char *)v17 + v22;
            }
            else
            {
              ++*a5;
            }
          }
          if ( v11 == 0 && v18 >= *(uint32_t *)&v7[i - 32] )
          {
            if ( v23 <= (unsigned int)(uintptr_t)(v21) )
            {
              ++*a5;
            }
            else
            {
              v8 = v21;
              v21 += 2;
              *v8 = *(uint32_t *)(i - 52);
              v8[1] = v17[11];
            }
          }
          if ( v15 == 0 && v18 >= *(uint32_t *)&v7[v20 - 32] )
          {
            if ( v23 <= (unsigned int)(uintptr_t)(v21) )
            {
              ++*a5;
            }
            else
            {
              v9 = v21;
              v21 += 2;
              *v9 = *(uint32_t *)(i - 52);
              v9[1] = v17[19];
            }
          }
          if ( v12 == 0 && v18 >= *(uint32_t *)&v7[v19 - 32] )
          {
            if ( v23 <= (unsigned int)(uintptr_t)(v21) )
            {
              ++*a5;
            }
            else
            {
              v10 = v21;
              v21 += 2;
              *v10 = *(uint32_t *)(i - 52);
              v10[1] = v17[27];
            }
          }
        }
        v17 += 32;
      }
      while ( v18 >= *v17 );
    }
    --v24;
    v22 -= 32;
    i += 32;
    v20 += 32;
  }
  return ((char *)v21 - (char *)a3) >> 3;
}


