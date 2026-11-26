#include "Core/Utils/DecompTypes.h"
#include "glf_ReadWriteSpinLock.h"

// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_ReadWriteSpinLock.cpp
// Library: glf | Module: glf_ReadWriteSpinLock
// Binary Address Span: 0xc7fd00 .. 0xc800e0 (8 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xc7fd00 (size: 101 bytes)
// Symbol:    _ZN3glf17ReadWriteSpinLockC1Ev
// Demangled: glf::ReadWriteSpinLock::ReadWriteSpinLock(void)
// ============================================================================
// Alternative name is '_ZN3glf17ReadWriteSpinLockC2Ev'
struct glf::ReadWriteSpinLock::Self *glf::ReadWriteSpinLock::ReadWriteSpinLock(glf::ReadWriteSpinLock::Self *self)
{
  glf::ReadWriteSpinLock::Self *v1;
  unsigned int v2;
  struct glf::ReadWriteSpinLock::Self *result;
  uint16_t *v4;

  v1 = self;
  v2 = 32;
  *((uint32_t *)self + 16) = 0;
  *((uint8_t *)self + 68) = 0;
  if ( ((uint8_t)(uintptr_t)self & 1) != 0 )
  {
    *(uint8_t *)self = 0;
    v1 = (glf::ReadWriteSpinLock::Self *)((char *)self + 1);
    LOBYTE(v2) = 31;
    if ( (((unsigned int)(uintptr_t)(self) + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((uint8_t)(uintptr_t)self & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)v1 = 0;
  v2 -= 2;
  v1 = (glf::ReadWriteSpinLock::Self *)((char *)v1 + 2);
LABEL_3:
  result = nullptr;
  memset(v1, 0, 4 * (v2 >> 2));
  v4 = (uint16_t *)((char *)v1 + 4 * (v2 >> 2));
  if ( (v2 & 2) != 0 )
    *v4++ = 0;
  if ( (v2 & 1) != 0 )
    *(uint8_t *)v4 = 0;
  return result;
}
// ----------------------------------------------------------------------------
// Function: glf::ReadWriteSpinLock::hasReadLock  (binary VA: 0xc7fd70)
// Original: glf::ReadWriteSpinLock::hasReadLock
// ----------------------------------------------------------------------------
int glf::ReadWriteSpinLock::hasReadLock(glf::ReadWriteSpinLock::Self *self)
{
  int SequentialThreadId;
  int v2;
  glf::Thread::Self *v4;

  SequentialThreadId = glf::Thread::GetSequentialThreadId(v4);
  v2 = 1;
  if ( *((uint8_t *)self + SequentialThreadId) == 0 )
  {
    v2 = *((uint32_t *)self + 16);
    LOBYTE(v2) = v2 == SequentialThreadId;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::ReadWriteSpinLock::hasWriteLock  (binary VA: 0xc7fdc0)
// Original: glf::ReadWriteSpinLock::hasWriteLock
// ----------------------------------------------------------------------------
bool glf::ReadWriteSpinLock::hasWriteLock(glf::ReadWriteSpinLock::Self *self)
{
  glf::Thread::Self *v2;

  return *((uint32_t *)self + 16) == glf::Thread::GetSequentialThreadId(v2);
}

// ----------------------------------------------------------------------------
// Function: glf::ReadWriteSpinLock::readLockImpl  (binary VA: 0xc7fdf0)
// Original: glf::ReadWriteSpinLock::readLockImpl
// ----------------------------------------------------------------------------
int glf::ReadWriteSpinLock::readLockImpl(glf::ReadWriteSpinLock::Self *self, unsigned int a2)
{
  char v2;
  int64_t v4; // rdi
  int64_t v5; // rax
  int64_t v6; // rax
  int64_t v7; // rax
  int64_t v8; // rax
  int v9;
  int v10;
  glf::Thread::Self *v11;
  glf::Thread::Self *v12;
  glf::Self *v13;
  int SequentialThreadId;

  SequentialThreadId = glf::Thread::GetSequentialThreadId(v11);
  v2 = *((uint8_t *)self + SequentialThreadId);
  if ( v2 != 0 || (v4 = 0, *((uint32_t *)self + 16) == SequentialThreadId) )
  {
    *((uint8_t *)self + SequentialThreadId) = v2 + 1;
    return 1;
  }
  else
  {
    while ( 1 )
    {
      while ( *((uint32_t *)self + 16) != 0 )
      {
        glf::Thread::Yield(v12);
        if ( v4 == 0 )
        {
          HIDWORD(v4) = glf::GetMilliseconds(v13);
          LODWORD(v4) = v9;
        }
        LODWORD(v5) = glf::GetMilliseconds(v13);
        v6 = v5 - __PAIR64__(v4, HIDWORD(v4));
        if ( SHIDWORD(v6) > 0 )
          return 0;
        if ( v6 > a2 )
          return 0;
      }
      __sync_add_and_fetch((volatile int8_t *)self + SequentialThreadId, 1u);
      if ( *((uint32_t *)self + 16) == 0 )
        break;
      --*((uint8_t *)self + SequentialThreadId);
      if ( v4 == 0 )
      {
        HIDWORD(v4) = glf::GetMilliseconds(v12);
        LODWORD(v4) = v10;
      }
      LODWORD(v7) = glf::GetMilliseconds(v12);
      v8 = v7 - __PAIR64__(v4, HIDWORD(v4));
      if ( v8 >= 0 )
      {
        if ( SHIDWORD(v8) > 0 )
          return 0;
        if ( (unsigned int)v8 > a2 )
          return 0;
      }
    }
    return 1;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::ReadWriteSpinLock::readUnlock  (binary VA: 0xc7ff10)
// Original: glf::ReadWriteSpinLock::readUnlock
// ----------------------------------------------------------------------------
int glf::ReadWriteSpinLock::readUnlock(glf::ReadWriteSpinLock::Self *self)
{
  int SequentialThreadId;
  glf::Thread::Self *v3;

  SequentialThreadId = glf::Thread::GetSequentialThreadId(v3);
  --*((uint8_t *)self + SequentialThreadId);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::ReadWriteSpinLock::writeUnlock  (binary VA: 0xc7ff50)
// Original: glf::ReadWriteSpinLock::writeUnlock
// ----------------------------------------------------------------------------
int glf::ReadWriteSpinLock::writeUnlock(glf::ReadWriteSpinLock::Self *self)
{
  int SequentialThreadId;
  glf::Thread::Self *v4;

  if ( (*((uint8_t *)self + 68))-- == 1 )
  {
    SequentialThreadId = glf::Thread::GetSequentialThreadId(v4);
    *((uint8_t *)self + SequentialThreadId) = *((uint8_t *)self + SequentialThreadId + 32);
    *((uint32_t *)self + 16) = 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::ReadWriteSpinLock::writeLockImpl  (binary VA: 0xc7ffa0)
// Original: glf::ReadWriteSpinLock::writeLockImpl
// ----------------------------------------------------------------------------
int glf::ReadWriteSpinLock::writeLockImpl(glf::ReadWriteSpinLock::Self *self, unsigned int a2)
{
  int32_t SequentialThreadId;
  int32_t v3;
  int64_t v4; // rdi
  int64_t v5; // rax
  int v7;
  int i;
  int64_t v9; // rax
  int v10;
  glf::ReadWriteSpinLock::Self *v11;
  glf::ReadWriteSpinLock::Self *v12;
  glf::Self *v13;
  glf::Self *v14;

  SequentialThreadId = glf::Thread::GetSequentialThreadId(v11);
  v3 = SequentialThreadId;
  if ( *((uint32_t *)self + 16) == SequentialThreadId )
  {
    ++*((uint8_t *)self + 68);
    return 1;
  }
  else
  {
    *((uint8_t *)self + SequentialThreadId + 32) = *((uint8_t *)self + SequentialThreadId);
    *((uint8_t *)self + SequentialThreadId) = 0;
    v4 = 0;
    while ( __sync_val_compare_and_swap((volatile int32_t *)self + 16, 0, v3) != 0 )
    {
      glf::Thread::Yield(v12);
      if ( v4 == 0 )
      {
        HIDWORD(v4) = glf::GetMilliseconds(v13);
        LODWORD(v4) = v7;
      }
      LODWORD(v5) = glf::GetMilliseconds(v13);
      if ( (int64_t)(v5 - __PAIR64__(v4, HIDWORD(v4))) > a2 )
      {
        *((uint8_t *)self + v3) = *((uint8_t *)self + v3 + 32);
        return 0;
      }
    }
    ++*((uint8_t *)self + 68);
    for ( i = 0; ; i = 0 )
    {
      while ( *(uint32_t *)((char *)self + i) == 0 )
      {
        i += 4;
        if ( i > 31 )
          return 1;
      }
      glf::Thread::Yield(v12);
      if ( v4 == 0 )
      {
        HIDWORD(v4) = glf::GetMilliseconds(v14);
        LODWORD(v4) = v10;
      }
      LODWORD(v9) = glf::GetMilliseconds(v14);
      if ( (int64_t)(v9 - __PAIR64__(v4, HIDWORD(v4))) > a2 )
        break;
    }
    glf::ReadWriteSpinLock::writeUnlock(self);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::ReadWriteSpinLock::getOwner  (binary VA: 0xc800e0)
// Original: glf::ReadWriteSpinLock::getOwner
// ----------------------------------------------------------------------------
int glf::ReadWriteSpinLock::getOwner(glf::ReadWriteSpinLock::Self *self)
{
  return *((uint32_t *)self + 16);
}


