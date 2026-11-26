#include "Core/Utils/DecompTypes.h"
#include "glf_NotificationBase.h"

// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_NotificationBase.cpp
// Library: glf | Module: glf_NotificationBase
// Binary Address Span: 0xc77000 .. 0xc7b260 (15 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xc77000 (size: 15 bytes)
// Symbol:    _ZN3glf16NotificationBase13ConstIteratorC2Ev
// Demangled: glf::NotificationBase::ConstIterator::ConstIterator(void)
// ============================================================================
// Alternative name is '_ZN3glf16NotificationBase13ConstIteratorC1Ev'
struct glf::NotificationBase::ConstIterator::Self *glf::NotificationBase::ConstIterator::Construct(
        glf::NotificationBase::ConstIterator::Self *self)
{
  *(uint32_t *)self = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glf::NotificationBase::ConstIterator::Construct  (binary VA: 0xc77010)
// Original: glf::NotificationBase::ConstIterator::ConstIterator
// ----------------------------------------------------------------------------
glf::NotificationBase::ConstIterator::Self * glf::NotificationBase::ConstIterator::Construct(glf::NotificationBase::ConstIterator::Self *self, const glf::NotificationBase::Self *a2)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::NotificationBase::ConstIterator::opInc  (binary VA: 0xc77020)
// Original: glf::NotificationBase::ConstIterator::operator++
// ----------------------------------------------------------------------------
glf::NotificationBase::ConstIterator::Self * glf::NotificationBase::ConstIterator::opInc(glf::NotificationBase::ConstIterator::Self *self)
{
  glf::NotificationBase::ConstIterator::Self *result;

  result = self;
  if ( *(uint32_t *)self != 0 )
    *(uint32_t *)self = *(uint32_t *)(*(uint32_t *)self + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::NotificationBase::ConstIterator::opInc  (binary VA: 0xc77030)
// Original: glf::NotificationBase::ConstIterator::operator++
// ----------------------------------------------------------------------------
glf::NotificationBase::ConstIterator::Self * glf::NotificationBase::ConstIterator::opInc(glf::NotificationBase::ConstIterator::Self *self, const glf::NotificationBase::Self **a2)
{
  glf::NotificationBase::ConstIterator::Construct(self, *a2);
  glf::NotificationBase::ConstIterator::opInc((glf::NotificationBase::ConstIterator::Self *)a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::NotificationBase::ConstIterator::opMul  (binary VA: 0xc77080)
// Original: glf::NotificationBase::ConstIterator::operator*
// ----------------------------------------------------------------------------
int glf::NotificationBase::ConstIterator::opMul(glf::NotificationBase::ConstIterator::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: glf::NotificationBase::ConstIterator::opEq  (binary VA: 0xc77090)
// Original: glf::NotificationBase::ConstIterator::operator==
// ----------------------------------------------------------------------------
bool glf::NotificationBase::ConstIterator::opEq(uint32_t *a1, int a2)
{
  return *a1 == a2;
}

// ----------------------------------------------------------------------------
// Function: glf::NotificationBase::ConstIterator::opNe  (binary VA: 0xc770a0)
// Original: glf::NotificationBase::ConstIterator::operator!=
// ----------------------------------------------------------------------------
bool glf::NotificationBase::ConstIterator::opNe(uint32_t *a1, int a2)
{
  return *a1 != a2;
}

// ----------------------------------------------------------------------------
// Function: glf::NotificationBase::getHead  (binary VA: 0xc770b0)
// Original: glf::NotificationBase::getHead
// ----------------------------------------------------------------------------
void * glf::NotificationBase::getHead()
{
  return &unk_20DED48;
}

// ----------------------------------------------------------------------------
// Function: glf::NotificationBase::getSize  (binary VA: 0xc770d0)
// Original: glf::NotificationBase::getSize
// ----------------------------------------------------------------------------
void * glf::NotificationBase::getSize()
{
  return &unk_20DED4C;
}

// ----------------------------------------------------------------------------
// Function: glf::NotificationBase::Construct  (binary VA: 0xc770f0)
// Original: glf::NotificationBase::NotificationBase
// ----------------------------------------------------------------------------
glf::NotificationBase::Self * glf::NotificationBase::Construct(glf::NotificationBase::Self *self)
{
  glf::NotificationBase::Self *result;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206D8C8);
  *((uint32_t *)self + 1) = *(uint32_t *)glf::NotificationBase::getHead();
  *(uint32_t *)glf::NotificationBase::getHead() = (uint32_t)(uintptr_t)(self);
  result = (glf::NotificationBase::Self *)glf::NotificationBase::getSize();
  ++*(uint32_t *)result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::NotificationBase::begin  (binary VA: 0xc77140)
// Original: glf::NotificationBase::begin
// ----------------------------------------------------------------------------
glf::NotificationBase::Self * glf::NotificationBase::begin(glf::NotificationBase::Self *self)
{
  const glf::NotificationBase::Self **Head;

  Head = (const glf::NotificationBase::Self **)glf::NotificationBase::getHead();
  glf::NotificationBase::ConstIterator::Construct(self, *Head);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::NotificationBase::end  (binary VA: 0xc77180)
// Original: glf::NotificationBase::end
// ----------------------------------------------------------------------------
glf::NotificationBase::Self * glf::NotificationBase::end(glf::NotificationBase::Self *self)
{
  glf::NotificationBase::ConstIterator::Construct(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::NotificationBase::size  (binary VA: 0xc771c0)
// Original: glf::NotificationBase::size
// ----------------------------------------------------------------------------
int glf::NotificationBase::size()
{
  return *(uint32_t *)glf::NotificationBase::getSize();
}

// ----------------------------------------------------------------------------
// Function: glf::NotificationBase::Destroy  (binary VA: 0xc7afc0)
// Original: glf::NotificationBase::~NotificationBase
// ----------------------------------------------------------------------------
void glf::NotificationBase::Destroy(glf::NotificationBase::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206D8C8);
}

// ----------------------------------------------------------------------------
// Function: glf::NotificationBase::Destroy_eac7b260  (binary VA: 0xc7b260)
// Original: glf::NotificationBase::~NotificationBase
// ----------------------------------------------------------------------------
void glf::NotificationBase::Destroy_eac7b260(glf::NotificationBase::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_206D8C8);
  opDelete(self);
}


