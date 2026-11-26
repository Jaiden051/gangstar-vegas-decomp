#include "Core/Utils/DecompTypes.h"
#include "glf_ScopeMsg.h"

// ----------------------------------------------------------------------------
// Function: glf::ScopeMsg::Destroy  (binary VA: 0xc72320)
// Original: glf::ScopeMsg::~ScopeMsg
// ----------------------------------------------------------------------------
void glf::ScopeMsg::Destroy(glf::ScopeMsg::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D558);
  *(uint32_t *)glf::TlsNode::GetValue((glf::TlsNode::Self *)&glf::gScopeMsgs, true) = *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glf::ScopeMsg::Construct  (binary VA: 0xc72840)
// Original: glf::ScopeMsg::ScopeMsg
// ----------------------------------------------------------------------------
glf::ScopeMsg::Self * glf::ScopeMsg::Construct(glf::ScopeMsg::Self *self, const char *a2)
{
  glf::ScopeMsg::Self *result;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D558);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 2) = *(uint32_t *)glf::TlsNode::GetValue((glf::TlsNode::Self *)&glf::gScopeMsgs, true);
  result = (glf::ScopeMsg::Self *)glf::TlsNode::GetValue((glf::TlsNode::Self *)&glf::gScopeMsgs, true);
  *(uint32_t *)result = (uint32_t)(uintptr_t)(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ScopeMsg::EvalAll  (binary VA: 0xc728b0)
// Original: glf::ScopeMsg::EvalAll
// ----------------------------------------------------------------------------
uint32_t ** glf::ScopeMsg::EvalAll(int a1)
{
  uint32_t **result;
  uint32_t *i;

  result = (uint32_t **)glf::TlsNode::GetValue((glf::TlsNode::Self *)&glf::gScopeMsgs, true);
  for ( i = *result; i != nullptr; i = (uint32_t *)i[2] )
    result = (uint32_t **)G4_VCALL<int>(i, 8, a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ScopeMsg::opNew  (binary VA: 0xc72910)
// Original: glf::ScopeMsg::operator new
// ----------------------------------------------------------------------------
int glf::ScopeMsg::opNew(glf::ScopeMsg::Self *self)
{
  uint32_t *Value;
  uint32_t *v2;
  int v3;
  unsigned int v4;
  int result;

  Value = (uint32_t *)glf::TlsNode::GetValue((glf::TlsNode::Self *)&glf::gFrameHeap, true);
  if ( *Value != 0 )
  {
    v2 = (uint32_t *)Value[2];
    v3 = Value[3];
  }
  else
  {
    Value[1] = 2048;
    v2 = (uint32_t *)sub_4EBCD0(0x800u);
    *Value = (uint32_t)(uintptr_t)(v2);
    Value[2] = (uint32_t)(uintptr_t)(v2);
    Value[3] = 0;
    v3 = 0;
  }
  v4 = 0;
  if ( self != nullptr )
    v4 = ((unsigned int)(uintptr_t)(self) + 3) & 0xFFFFFFFC;
  *v2 = v3;
  result = Value[2] + 4;
  Value[3] = result;
  Value[2] = result + v4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::ScopeMsg::opDelete  (binary VA: 0xc729b0)
// Original: glf::ScopeMsg::operator delete
// ----------------------------------------------------------------------------
void glf::ScopeMsg::opDelete(uint32_t *a1)
{
  int Value;

  Value = (int)(uintptr_t)(glf::TlsNode::GetValue((glf::TlsNode::Self *)&glf::gFrameHeap, true));
  if ( a1 == *(uint32_t **)(Value + 12) )
  {
    *(uint32_t *)(Value + 12) = *(a1 - 1);
    *(uint32_t *)(Value + 8) = (uint32_t)(uintptr_t)(a1 - 1);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::ScopeMsg::Destroy_eac72a20  (binary VA: 0xc72a20)
// Original: glf::ScopeMsg::~ScopeMsg
// ----------------------------------------------------------------------------
void glf::ScopeMsg::Destroy_eac72a20(glf::ScopeMsg::Self *self)
{
  glf::ScopeMsg::Destroy(self);
  glf::ScopeMsg::opDelete((uint32_t *)(self));
}

// ----------------------------------------------------------------------------
// Function: glf::ScopeMsg::Eval  (binary VA: 0xc72b50)
// Original: glf::ScopeMsg::Eval
// ----------------------------------------------------------------------------
int glf::ScopeMsg::Eval(int a1, int a2)
{
  char *s;
  size_t v3;

  s = *(char **)(a1 + 4);
  v3 = strlen(s);
  return (int)(uintptr_t)(g4_std_compat::string_assign(a2, s, v3));
}


