#include "Core/Utils/DecompTypes.h"
#include "tinyxml_dom.h"

// ----------------------------------------------------------------------------
// Function: TiXmlElement::Accept  (binary VA: 0x105eca0)
// Original: TiXmlElement::Accept
// ----------------------------------------------------------------------------
int TiXmlElement::Accept(TiXmlElement::Self *self, TiXmlVisitor::Self *a2)
{
  TiXmlElement::Self *v2;
  uint32_t *i;

  v2 = *((TiXmlElement::Self **)self + 19);
  if ( v2 == (TiXmlElement::Self *)((char *)self + 44) )
    v2 = nullptr;
  if ( G4_VCALL<uint8_t>(a2, 16, self, v2) != 0 )
  {
    for ( i = *((uint32_t **)self + 6); i != nullptr; i = (uint32_t *)i[10] )
    {
      if ( G4_VCALL<uint8_t>(i, 68, a2) == 0 )
        break;
    }
  }
  return G4_VCALL<int>(a2, 20, self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::Accept  (binary VA: 0x105ed20)
// Original: TiXmlDocument::Accept
// ----------------------------------------------------------------------------
int TiXmlDocument::Accept(TiXmlDocument::Self *self, TiXmlVisitor::Self *a2)
{
  uint32_t *i;

  if ( G4_VCALL<uint8_t>(a2, 8, self) != 0 )
  {
    for ( i = *((uint32_t **)self + 6); i != nullptr; i = (uint32_t *)i[10] )
    {
      if ( G4_VCALL<uint8_t>(i, 68, a2) == 0 )
        break;
    }
  }
  return G4_VCALL<int>(a2, 12, self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlComment::Accept  (binary VA: 0x105ed80)
// Original: TiXmlComment::Accept
// ----------------------------------------------------------------------------
int TiXmlComment::Accept(TiXmlComment::Self *self, TiXmlVisitor::Self *a2)
{
  return G4_VCALL<int>(a2, 32, self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlText::Accept  (binary VA: 0x105eda0)
// Original: TiXmlText::Accept
// ----------------------------------------------------------------------------
int TiXmlText::Accept(TiXmlText::Self *self, TiXmlVisitor::Self *a2)
{
  return G4_VCALL<int>(a2, 28, self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlDeclaration::Accept  (binary VA: 0x105edc0)
// Original: TiXmlDeclaration::Accept
// ----------------------------------------------------------------------------
int TiXmlDeclaration::Accept(TiXmlDeclaration::Self *self, TiXmlVisitor::Self *a2)
{
  return G4_VCALL<int>(a2, 24, self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlUnknown::Accept  (binary VA: 0x105ede0)
// Original: TiXmlUnknown::Accept
// ----------------------------------------------------------------------------
int TiXmlUnknown::Accept(TiXmlUnknown::Self *self, TiXmlVisitor::Self *a2)
{
  return G4_VCALL<int>(a2, 36, self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlPrinter::VisitEnter  (binary VA: 0x105ee00)
// Original: TiXmlPrinter::VisitEnter
// ----------------------------------------------------------------------------
int TiXmlPrinter::VisitEnter()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlPrinter::VisitExit  (binary VA: 0x105ee10)
// Original: TiXmlPrinter::VisitExit
// ----------------------------------------------------------------------------
int TiXmlPrinter::VisitExit()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlUnknown::Print  (binary VA: 0x105ee20)
// Original: TiXmlUnknown::Print
// ----------------------------------------------------------------------------
int TiXmlUnknown::Print(int a1, FILE *stream, int a3)
{
  int i;

  if ( a3 > 0 )
  {
    for ( i = 0; i != a3; ++i )
      fwrite("    ", 1u, 4u, stream);
  }
  return fprintf(stream, "<%s>", *(uint32_t *)(a1 + 32) + 8);
}

// ----------------------------------------------------------------------------
// Function: TiXmlComment::Print  (binary VA: 0x105eea0)
// Original: TiXmlComment::Print
// ----------------------------------------------------------------------------
int TiXmlComment::Print(int a1, FILE *stream, int a3)
{
  int i;

  if ( stream == nullptr )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
      1356,
      "virtual void TiXmlComment::Print(FILE*, int) const",
      "cfile");
  if ( a3 > 0 )
  {
    for ( i = 0; i != a3; ++i )
      fwrite("    ", 1u, 4u, stream);
  }
  return fprintf(stream, "<!--%s-->", *(uint32_t *)(a1 + 32) + 8);
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::Print  (binary VA: 0x105ef50)
// Original: TiXmlDocument::Print
// ----------------------------------------------------------------------------
int TiXmlDocument::Print(int a1, FILE *stream, int a3)
{
  int result;
  uint32_t *i;

  if ( stream == nullptr )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
      1193,
      "virtual void TiXmlDocument::Print(FILE*, int) const",
      "cfile");
  result = a1;
  for ( i = *(uint32_t **)(a1 + 24); i != nullptr; i = (uint32_t *)i[10] )
  {
    G4_VCALL<void>(i, 8, stream, a3);
    result = fputc(10, stream);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::Destroy  (binary VA: 0x105efe0)
// Original: TiXmlNode::~TiXmlNode
// ----------------------------------------------------------------------------
void TiXmlNode::Destroy(TiXmlNode::Self *self)
{
  void *v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DCC8);
  v1 = *((void **)self + 8);
  if ( v1 != &TiXmlString::nullrep_ && v1 != nullptr )
    opDeleteArray(*((void **)self + 8));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DFD8);
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::Destroy_ea105f040  (binary VA: 0x105f040)
// Original: TiXmlNode::~TiXmlNode
// ----------------------------------------------------------------------------
void TiXmlNode::Destroy_ea105f040(TiXmlNode::Self *self)
{
  TiXmlNode::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlPrinter::VisitExit  (binary VA: 0x105f080)
// Original: TiXmlPrinter::VisitExit
// ----------------------------------------------------------------------------
int TiXmlPrinter::VisitExit(TiXmlPrinter::Self *self, const TiXmlElement::Self *a2)
{
  int v2;
  TiXmlString::Self *v3;
  const char *s;
  size_t v5;
  int v7;

  v2 = *((uint32_t *)self + 1) - 1;
  *((uint32_t *)self + 1) = v2;
  if ( *((uint32_t *)a2 + 6) != 0 )
  {
    if ( *((uint8_t *)self + 8) != 0 )
    {
      *((uint8_t *)self + 8) = 0;
      v3 = (TiXmlString::Self *)((TiXmlPrinter::Self *)((char *)self + 12));
    }
    else
    {
      v7 = 0;
      v3 = (TiXmlString::Self *)((TiXmlPrinter::Self *)((char *)self + 12));
      if ( v2 > 0 )
      {
        do
        {
          ++v7;
          TiXmlString::append(
            (TiXmlPrinter::Self *)((char *)self + 12),
            (const char *)(*((uint32_t *)self + 4) + 8),
            **((uint32_t **)self + 4));
        }
        while ( v7 < *((uint32_t *)self + 1) );
      }
    }
    TiXmlString::append(v3, "</", 2u);
    s = (const char *)(*((uint32_t *)a2 + 8) + 8);
    v5 = strlen(s);
    TiXmlString::append(v3, s, v5);
    TiXmlString::append(v3, ">", 1u);
    TiXmlString::append(v3, (const char *)(*((uint32_t *)self + 5) + 8), **((uint32_t **)self + 5));
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDeclaration::Print  (binary VA: 0x105f170)
// Original: TiXmlDeclaration::Print
// ----------------------------------------------------------------------------
size_t * TiXmlDeclaration::Print(size_t **a1, FILE *stream, int a3, TiXmlString::Self *a4)
{
  size_t *v4;
  size_t *v5;
  size_t *result;

  if ( stream != nullptr )
    fwrite("<?xml ", 1u, 6u, stream);
  if ( a4 != nullptr )
    TiXmlString::append(a4, "<?xml ", 6u);
  v4 = a1[11];
  if ( *v4 != 0 )
  {
    if ( stream != nullptr )
      fprintf(stream, "version=\"%s\" ", v4 + 2);
    if ( a4 != nullptr )
    {
      TiXmlString::append(a4, "version=\"", 9u);
      TiXmlString::append(a4, (const char *)a1[11] + 8, *a1[11]);
      TiXmlString::append(a4, "\" ", 2u);
    }
  }
  v5 = a1[12];
  if ( *v5 != 0 )
  {
    if ( stream != nullptr )
      fprintf(stream, "encoding=\"%s\" ", v5 + 2);
    if ( a4 != nullptr )
    {
      TiXmlString::append(a4, "encoding=\"", 0xAu);
      TiXmlString::append(a4, (const char *)a1[12] + 8, *a1[12]);
      TiXmlString::append(a4, "\" ", 2u);
    }
  }
  result = a1[13];
  if ( *result != 0 )
  {
    if ( stream != nullptr )
      result = (size_t *)fprintf(stream, "standalone=\"%s\" ", result + 2);
    if ( a4 != nullptr )
    {
      TiXmlString::append(a4, "standalone=\"", 0xCu);
      TiXmlString::append(a4, (const char *)a1[13] + 8, *a1[13]);
      result = (size_t *)TiXmlString::append(a4, "\" ", 2u);
    }
  }
  if ( stream != nullptr )
    result = (size_t *)fwrite("?>", 1u, 2u, stream);
  if ( a4 != nullptr )
    return (size_t *)TiXmlString::append(a4, "?>", 2u);
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlPrinter::Visit  (binary VA: 0x105f390)
// Original: TiXmlPrinter::Visit
// ----------------------------------------------------------------------------
int TiXmlPrinter::Visit(TiXmlPrinter::Self *self, const TiXmlUnknown::Self *a2)
{
  TiXmlString::Self *v2;
  int v3;
  const char *s;
  size_t v5;

  v2 = (TiXmlString::Self *)((TiXmlPrinter::Self *)((char *)self + 12));
  if ( *((int *)self + 1) > 0 )
  {
    v3 = 0;
    do
    {
      ++v3;
      TiXmlString::append(v2, (const char *)(*((uint32_t *)self + 4) + 8), **((uint32_t **)self + 4));
    }
    while ( v3 < *((uint32_t *)self + 1) );
  }
  TiXmlString::append(v2, "<", 1u);
  s = (const char *)(*((uint32_t *)a2 + 8) + 8);
  v5 = strlen(s);
  TiXmlString::append(v2, s, v5);
  TiXmlString::append(v2, ">", 1u);
  TiXmlString::append(v2, (const char *)(*((uint32_t *)self + 5) + 8), **((uint32_t **)self + 5));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlPrinter::Visit  (binary VA: 0x105f460)
// Original: TiXmlPrinter::Visit
// ----------------------------------------------------------------------------
int TiXmlPrinter::Visit(TiXmlPrinter::Self *self, const TiXmlComment::Self *a2)
{
  TiXmlString::Self *v2;
  int v3;
  const char *s;
  size_t v5;

  v2 = (TiXmlString::Self *)((TiXmlPrinter::Self *)((char *)self + 12));
  if ( *((int *)self + 1) > 0 )
  {
    v3 = 0;
    do
    {
      ++v3;
      TiXmlString::append(v2, (const char *)(*((uint32_t *)self + 4) + 8), **((uint32_t **)self + 4));
    }
    while ( v3 < *((uint32_t *)self + 1) );
  }
  TiXmlString::append(v2, "<!--", 4u);
  s = (const char *)(*((uint32_t *)a2 + 8) + 8);
  v5 = strlen(s);
  TiXmlString::append(v2, s, v5);
  TiXmlString::append(v2, "-->", 3u);
  TiXmlString::append(v2, (const char *)(*((uint32_t *)self + 5) + 8), **((uint32_t **)self + 5));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlPrinter::Visit  (binary VA: 0x105f530)
// Original: TiXmlPrinter::Visit
// ----------------------------------------------------------------------------
int TiXmlPrinter::Visit(TiXmlPrinter::Self *self, const TiXmlDeclaration::Self *a2)
{
  TiXmlString::Self *v2;
  int v3;

  v2 = (TiXmlString::Self *)((TiXmlPrinter::Self *)((char *)self + 12));
  if ( *((int *)self + 1) > 0 )
  {
    v3 = 0;
    do
    {
      ++v3;
      TiXmlString::append(v2, (const char *)(*((uint32_t *)self + 4) + 8), **((uint32_t **)self + 4));
    }
    while ( v3 < *((uint32_t *)self + 1) );
  }
  G4_VCALL<void>(a2, 72, 0, 0, v2);
  TiXmlString::append(v2, (const char *)(*((uint32_t *)self + 5) + 8), **((uint32_t **)self + 5));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlFOpen  (binary VA: 0x105f5c0)
// Original: TiXmlFOpen
// ----------------------------------------------------------------------------
FILE * TiXmlFOpen(char *filename, char *modes)
{
  return fopen(filename, modes);
}

// ----------------------------------------------------------------------------
// Function: TiXmlBase::EncodeString  (binary VA: 0x105f5f0)
// Original: TiXmlBase::EncodeString
// ----------------------------------------------------------------------------
unsigned int * TiXmlBase::EncodeString(unsigned int **self, const TiXmlString::Self *a2, TiXmlString::Self *a3)
{
  int v3;
  unsigned int *result;
  unsigned int v5;
  bool v6;
  uint8_t v7;
  int v8;
  int v9;
  typedef char _g4_t_v10;
  typedef char _g4_t_s[60];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (15u + sizeof(_g4_t_v10)) > _g4_s0 ? (15u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_s)) > _g4_s1 ? (16u + sizeof(_g4_t_s)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 15u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);

  v3 = 0;
  result = *self;
  v5 = **self;
LABEL_2:
  while ( 1 )
  {
    v6 = v3 < v5;
    if ( v3 >= (int)v5 )
      return result;
    while ( 1 )
    {
      if ( !v6 )
      {
        __assert2(
          "F:/G4/G4_UP8Shop/lib/tinyxml/tinystr.h",
          170,
          "char& TiXmlString::operator[](TiXmlString::size_type) const",
          "index < length()");
        result = *self;
      }
      v7 = *((uint8_t *)result + v3 + 8);
      if ( v7 == 38 )
        break;
      switch ( v7 )
      {
        case '<':
          TiXmlString::append(a2, off_20C3D4C, (*(uint32_t *)unk_20C3D50));
          goto LABEL_32;
        case '>':
          TiXmlString::append(a2, off_20C3D58, (*(uint32_t *)unk_20C3D5C));
          goto LABEL_32;
        case '"':
          TiXmlString::append(a2, off_20C3D64, (*(uint32_t *)unk_20C3D68));
LABEL_36:
          result = *self;
          ++v3;
          v5 = **self;
          goto LABEL_2;
        case '\'':
          TiXmlString::append(a2, off_20C3D70, (*(uint32_t *)unk_20C3D74));
          goto LABEL_36;
        default:
          break;
      }
      if ( v7 > 0x1Fu )
      {
        v10 = *((uint8_t *)result + v3 + 8);
        TiXmlString::append(a2, &v10, 1u);
LABEL_32:
        result = *self;
        ++v3;
        v5 = **self;
        goto LABEL_2;
      }
      if ( (uint8_t)(uintptr_t)a3 == 0 )
        goto LABEL_14;
      if ( v7 != 13 )
      {
        if ( v7 == 10 )
        {
          v10 = 10;
          TiXmlString::append(a2, &v10, 1u);
          goto LABEL_32;
        }
LABEL_14:
        ++v3;
        goto LABEL_15;
      }
      if ( v3 >= (int)(*result - 1) )
        goto LABEL_14;
      if ( ++v3 >= *result )
      {
        __assert2(
          "F:/G4/G4_UP8Shop/lib/tinyxml/tinystr.h",
          170,
          "char& TiXmlString::operator[](TiXmlString::size_type) const",
          "index < length()");
        result = *self;
        v7 = 13;
      }
      if ( *((uint8_t *)result + v3 + 8) == 10 )
      {
        v5 = *result;
        goto LABEL_2;
      }
LABEL_15:
      snprintf(s, 0x20u, "&#x%02X;", v7);
      TiXmlString::append(a2, s, strlen(s));
      result = *self;
      v8 = **self;
      v6 = v3 < (unsigned int)v8;
      if ( v3 >= v8 )
        return result;
    }
    if ( v3 >= (int)(*result - 2) )
      goto LABEL_18;
    if ( v3 + 1 >= *result )
    {
      __assert2(
        "F:/G4/G4_UP8Shop/lib/tinyxml/tinystr.h",
        170,
        "char& TiXmlString::operator[](TiXmlString::size_type) const",
        "index < length()");
      result = *self;
    }
    if ( *((uint8_t *)result + v3 + 9) != 35 )
      goto LABEL_18;
    v9 = v3 + 2;
    if ( v3 + 2 >= *result )
    {
      __assert2(
        "F:/G4/G4_UP8Shop/lib/tinyxml/tinystr.h",
        170,
        "char& TiXmlString::operator[](TiXmlString::size_type) const",
        "index < length()");
      result = *self;
      v9 = v3 + 2;
    }
    if ( *((uint8_t *)result + v9 + 8) == 120 )
    {
      v5 = *result;
      do
      {
        if ( v3 >= (int)(v5 - 1) )
          break;
        TiXmlString::append(const_cast<TiXmlString::Self *>(a2), (const char *)result + v3 + 8, 1u);
        result = *self;
        ++v3;
        v5 = **self;
        if ( v3 >= v5 )
        {
          __assert2(
            "F:/G4/G4_UP8Shop/lib/tinyxml/tinystr.h",
            170,
            "char& TiXmlString::operator[](TiXmlString::size_type) const",
            "index < length()");
          result = *self;
          v5 = **self;
        }
      }
      while ( *((uint8_t *)result + v3 + 8) != 59 );
    }
    else
    {
LABEL_18:
      TiXmlString::append(a2, TiXmlBase::entity, (*(uint32_t *)unk_20C3D44));
      result = *self;
      ++v3;
      v5 = **self;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: TiXmlPrinter::Visit  (binary VA: 0x105f990)
// Original: TiXmlPrinter::Visit
// ----------------------------------------------------------------------------
int TiXmlPrinter::Visit(TiXmlPrinter::Self *self, unsigned int **a2)
{
  int i;
  void *v3;
  int v5;
  const char *s;
  size_t v7;
  void *v8[8];

  if ( *((uint8_t *)a2 + 44) == 0 )
  {
    if ( *((uint8_t *)self + 8) != 0 )
    {
      v8[0] = &TiXmlString::nullrep_;
      TiXmlBase::EncodeString(a2 + 8, (const TiXmlString::Self *)v8, nullptr);
      TiXmlString::append((TiXmlPrinter::Self *)((char *)self + 12), (const char *)v8[0] + 8, *(uint32_t *)v8[0]);
      v3 = v8[0];
      if ( v8[0] == &TiXmlString::nullrep_ )
        return 1;
    }
    else
    {
      for ( i = 0; i < *((uint32_t *)self + 1); ++i )
        TiXmlString::append(
          (TiXmlPrinter::Self *)((char *)self + 12),
          (const char *)(*((uint32_t *)self + 4) + 8),
          **((uint32_t **)self + 4));
      v8[0] = &TiXmlString::nullrep_;
      TiXmlBase::EncodeString(a2 + 8, (const TiXmlString::Self *)v8, nullptr);
      TiXmlString::append((TiXmlPrinter::Self *)((char *)self + 12), (const char *)v8[0] + 8, *(uint32_t *)v8[0]);
      TiXmlString::append(
        (TiXmlPrinter::Self *)((char *)self + 12),
        (const char *)(*((uint32_t *)self + 5) + 8),
        **((uint32_t **)self + 5));
      v3 = v8[0];
      if ( v8[0] == &TiXmlString::nullrep_ )
        return 1;
    }
    if ( v3 != nullptr )
      opDeleteArray(v3);
    return 1;
  }
  if ( *((int *)self + 1) > 0 )
  {
    v5 = 0;
    do
    {
      ++v5;
      TiXmlString::append(
        (TiXmlPrinter::Self *)((char *)self + 12),
        (const char *)(*((uint32_t *)self + 4) + 8),
        **((uint32_t **)self + 4));
    }
    while ( v5 < *((uint32_t *)self + 1) );
  }
  TiXmlString::append((TiXmlPrinter::Self *)((char *)self + 12), "<![CDATA[", 9u);
  s = (const char *)(a2[8] + 2);
  v7 = strlen(s);
  TiXmlString::append((TiXmlPrinter::Self *)((char *)self + 12), s, v7);
  TiXmlString::append((TiXmlPrinter::Self *)((char *)self + 12), "]]>", 3u);
  TiXmlString::append(
    (TiXmlPrinter::Self *)((char *)self + 12),
    (const char *)(*((uint32_t *)self + 5) + 8),
    **((uint32_t **)self + 5));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlText::Print  (binary VA: 0x105fb70)
// Original: TiXmlText::Print
// ----------------------------------------------------------------------------
void TiXmlText::Print(int a1, FILE *stream, int a3)
{
  int i;
  typedef size_t _g4_t_n;
  typedef void *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_n)) > _g4_s0 ? (8u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v5)) > _g4_s1 ? (44u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 44u);

  if ( stream == nullptr )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
      1391,
      "virtual void TiXmlText::Print(FILE*, int) const",
      "cfile");
  if ( *(uint8_t *)(a1 + 44) != 0 )
  {
    fputc(10, stream);
    if ( a3 > 0 )
    {
      for ( i = 0; i != a3; ++i )
        fwrite("    ", 1u, 4u, stream);
    }
    fprintf(stream, "<![CDATA[%s]]>\n", *(uint32_t *)(a1 + 32) + 8);
  }
  else
  {
    n = *(uint8_t *)(a1 + 45);
    v5 = &TiXmlString::nullrep_;
    TiXmlBase::EncodeString((unsigned int **)(a1 + 32), (const TiXmlString::Self *)&v5, (TiXmlString::Self *)n);
    fputs((const char *)v5 + 8, stream);
    if ( v5 != &TiXmlString::nullrep_ && v5 != nullptr )
      opDeleteArray(v5);
  }
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::Construct  (binary VA: 0x105fca0)
// Original: TiXmlNode::TiXmlNode
// ----------------------------------------------------------------------------
uint32_t * TiXmlNode::Construct(uint32_t *a1, int a2)
{
  *a1 = ((uint32_t)(uintptr_t)&off_208DCC8);
  a1[8] = (uint32_t)(uintptr_t)(&TiXmlString::nullrep_);
  a1[2] = -1;
  a1[1] = -1;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = a2;
  a1[6] = 0;
  a1[7] = 0;
  a1[9] = 0;
  a1[10] = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::CopyTo  (binary VA: 0x105fd10)
// Original: TiXmlNode::CopyTo
// ----------------------------------------------------------------------------
int TiXmlNode::CopyTo(TiXmlNode::Self *self, TiXmlNode::Self *a2)
{
  const char *s;
  size_t v3;
  int result;

  s = (const char *)(*((uint32_t *)self + 8) + 8);
  v3 = strlen(s);
  TiXmlString::assign((TiXmlNode::Self *)((char *)a2 + 32), s, v3);
  result = *((uint32_t *)self + 3);
  *((uint32_t *)a2 + 3) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::Clear  (binary VA: 0x105fd80)
// Original: TiXmlNode::Clear
// ----------------------------------------------------------------------------
uint32_t * TiXmlNode::Clear(TiXmlNode::Self *self)
{
  uint32_t *result;
  uint32_t *v2;

  result = *((uint32_t **)self + 6);
  if ( result != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)result[10];
      result = (uint32_t *)G4_VCALL<int>(result, 4);
      if ( v2 == nullptr )
        break;
      result = v2;
    }
  }
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDeclaration::Destroy  (binary VA: 0x105fdc0)
// Original: TiXmlDeclaration::~TiXmlDeclaration
// ----------------------------------------------------------------------------
void TiXmlDeclaration::Destroy(TiXmlDeclaration::Self *self)
{
  bool v1;
  void *v2;
  void *v3;
  void *v4;

  v1 = *((uint8_t *)self + 56) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DEA8);
  if ( !v1 )
    TiXmlNode::Clear((TiXmlNode::Self *)(self));
  v2 = *((void **)self + 13);
  if ( v2 != &TiXmlString::nullrep_ && v2 != nullptr )
    opDeleteArray(*((void **)self + 13));
  v3 = *((void **)self + 12);
  if ( v3 != &TiXmlString::nullrep_ && v3 != nullptr )
    opDeleteArray(*((void **)self + 12));
  v4 = *((void **)self + 11);
  if ( v4 != &TiXmlString::nullrep_ && v4 != nullptr )
    opDeleteArray(*((void **)self + 11));
  TiXmlNode::Destroy((TiXmlNode::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: TiXmlDeclaration::Destroy_ea105fe60  (binary VA: 0x105fe60)
// Original: TiXmlDeclaration::~TiXmlDeclaration
// ----------------------------------------------------------------------------
void TiXmlDeclaration::Destroy_ea105fe60(TiXmlDeclaration::Self *self)
{
  TiXmlDeclaration::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlComment::Destroy  (binary VA: 0x105fea0)
// Original: TiXmlComment::~TiXmlComment
// ----------------------------------------------------------------------------
void TiXmlComment::Destroy(TiXmlComment::Self *self)
{
  bool v1;

  v1 = *((uint8_t *)self + 44) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DDE8);
  if ( !v1 )
    TiXmlNode::Clear((TiXmlNode::Self *)(self));
  TiXmlNode::Destroy((TiXmlNode::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: TiXmlComment::Destroy_ea105ff00  (binary VA: 0x105ff00)
// Original: TiXmlComment::~TiXmlComment
// ----------------------------------------------------------------------------
void TiXmlComment::Destroy_ea105ff00(TiXmlComment::Self *self)
{
  TiXmlComment::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::Destroy  (binary VA: 0x105ff40)
// Original: TiXmlDocument::~TiXmlDocument
// ----------------------------------------------------------------------------
void TiXmlDocument::Destroy(TiXmlDocument::Self *self)
{
  bool v1;
  void *v2;

  v1 = *((uint8_t *)self + 69) == 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DD88);
  if ( !v1 )
    TiXmlNode::Clear((TiXmlNode::Self *)(self));
  v2 = *((void **)self + 13);
  if ( v2 != &TiXmlString::nullrep_ && v2 != nullptr )
    opDeleteArray(*((void **)self + 13));
  TiXmlNode::Destroy((TiXmlNode::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::Destroy_ea105ffb0  (binary VA: 0x105ffb0)
// Original: TiXmlDocument::~TiXmlDocument
// ----------------------------------------------------------------------------
void TiXmlDocument::Destroy_ea105ffb0(TiXmlDocument::Self *self)
{
  TiXmlDocument::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::ReplaceChild  (binary VA: 0x105fff0)
// Original: TiXmlNode::ReplaceChild
// ----------------------------------------------------------------------------
int TiXmlNode::ReplaceChild(TiXmlNode::Self *self, TiXmlNode::Self *a2, const TiXmlNode::Self *a3)
{
  int result;
  int v4;
  int v5;
  int v6;

  result = 0;
  if ( *((TiXmlNode::Self **)a2 + 4) == self )
  {
    result = G4_VCALL<int>(a3, 64);
    if ( result != 0 )
    {
      *(uint32_t *)(result + 40) = *((uint32_t *)a2 + 10);
      *(uint32_t *)(result + 36) = *((uint32_t *)a2 + 9);
      v4 = *((uint32_t *)a2 + 10);
      if ( v4 != 0 )
        *(uint32_t *)(v4 + 36) = result;
      else
        *((uint32_t *)self + 7) = result;
      v5 = *((uint32_t *)a2 + 9);
      if ( v5 != 0 )
        *(uint32_t *)(v5 + 40) = result;
      else
        *((uint32_t *)self + 6) = result;
      v6 = result;
      G4_VCALL<void>(a2, 4);
      *(uint32_t *)(v6 + 16) = (uint32_t)(uintptr_t)(self);
      return v6;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::RemoveChild  (binary VA: 0x1060080)
// Original: TiXmlNode::RemoveChild
// ----------------------------------------------------------------------------
int TiXmlNode::RemoveChild(TiXmlNode::Self *self, TiXmlNode::Self *a2)
{
  int v3;
  int v4;

  if ( *((TiXmlNode::Self **)a2 + 4) == self )
  {
    v3 = *((uint32_t *)a2 + 10);
    if ( v3 != 0 )
      *(uint32_t *)(v3 + 36) = *((uint32_t *)a2 + 9);
    else
      *((uint32_t *)self + 7) = *((uint32_t *)a2 + 9);
    v4 = *((uint32_t *)a2 + 9);
    if ( v4 != 0 )
      *(uint32_t *)(v4 + 40) = *((uint32_t *)a2 + 10);
    else
      *((uint32_t *)self + 6) = *((uint32_t *)a2 + 10);
    G4_VCALL<void>(a2, 4);
    return 1;
  }
  else
  {
    __assert2("F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp", 337, "bool TiXmlNode::RemoveChild(TiXmlNode*)", &a0[2]);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::FirstChild  (binary VA: 0x1060130)
// Original: TiXmlNode::FirstChild
// ----------------------------------------------------------------------------
int TiXmlNode::FirstChild(TiXmlNode::Self *self, char *s2)
{
  int i;

  for ( i = *((uint32_t *)self + 6); i != 0; i = *(uint32_t *)(i + 40) )
  {
    if ( strcmp((const char *)(*(uint32_t *)(i + 32) + 8), s2) == 0 )
      break;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::LastChild  (binary VA: 0x1060180)
// Original: TiXmlNode::LastChild
// ----------------------------------------------------------------------------
int TiXmlNode::LastChild(TiXmlNode::Self *self, char *s2)
{
  int i;

  for ( i = *((uint32_t *)self + 7); i != 0; i = *(uint32_t *)(i + 36) )
  {
    if ( strcmp((const char *)(*(uint32_t *)(i + 32) + 8), s2) == 0 )
      break;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::IterateChildren  (binary VA: 0x10601d0)
// Original: TiXmlNode::IterateChildren
// ----------------------------------------------------------------------------
TiXmlNode::Self * TiXmlNode::IterateChildren(TiXmlNode::Self *self, TiXmlNode::Self **a2)
{
  if ( a2 == nullptr )
    return *((TiXmlNode::Self **)self + 6);
  if ( a2[4] != self )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
      387,
      "const TiXmlNode* TiXmlNode::IterateChildren(const TiXmlNode*) const",
      "previous->parent == this");
  return a2[10];
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::NextSibling  (binary VA: 0x1060250)
// Original: TiXmlNode::NextSibling
// ----------------------------------------------------------------------------
int TiXmlNode::NextSibling(TiXmlNode::Self *self, char *s2)
{
  int i;

  for ( i = *((uint32_t *)self + 10); i != 0; i = *(uint32_t *)(i + 40) )
  {
    if ( strcmp((const char *)(*(uint32_t *)(i + 32) + 8), s2) == 0 )
      break;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::IterateChildren  (binary VA: 0x10602a0)
// Original: TiXmlNode::IterateChildren
// ----------------------------------------------------------------------------
int TiXmlNode::IterateChildren(TiXmlNode::Self *self, char *a2, TiXmlNode::Self **a3)
{
  if ( a3 == nullptr )
    return TiXmlNode::FirstChild(self, a2);
  if ( a3[4] != self )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
      401,
      "const TiXmlNode* TiXmlNode::IterateChildren(char const*, const TiXmlNode*) const",
      "previous->parent == this");
  return TiXmlNode::NextSibling((TiXmlNode::Self *)a3, a2);
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::PreviousSibling  (binary VA: 0x1060330)
// Original: TiXmlNode::PreviousSibling
// ----------------------------------------------------------------------------
int TiXmlNode::PreviousSibling(TiXmlNode::Self *self, char *s2)
{
  int i;

  for ( i = *((uint32_t *)self + 9); i != 0; i = *(uint32_t *)(i + 36) )
  {
    if ( strcmp((const char *)(*(uint32_t *)(i + 32) + 8), s2) == 0 )
      break;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::FirstChildElement  (binary VA: 0x1060380)
// Original: TiXmlNode::FirstChildElement
// ----------------------------------------------------------------------------
int TiXmlNode::FirstChildElement(TiXmlNode::Self *self)
{
  uint32_t *v1;
  int result;

  v1 = *((uint32_t **)self + 6);
  result = 0;
  if ( v1 != nullptr )
  {
    do
    {
      if ( G4_VCALL<int>(v1, 20) != 0 )
        return G4_VCALL<int>(v1, 20);
      v1 = (uint32_t *)v1[10];
    }
    while ( v1 != nullptr );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::FirstChildElement  (binary VA: 0x10603d0)
// Original: TiXmlNode::FirstChildElement
// ----------------------------------------------------------------------------
int TiXmlNode::FirstChildElement(TiXmlNode::Self *self, char *a2)
{
  TiXmlNode::Self *Child;
  int result;

  Child = (TiXmlNode::Self *)TiXmlNode::FirstChild(self, a2);
  result = 0;
  if ( Child != nullptr )
  {
    do
    {
      if ( G4_VCALL<int>(Child, 20) != 0 )
        return G4_VCALL<int>(Child, 20);
      Child = (TiXmlNode::Self *)TiXmlNode::NextSibling(Child, a2);
    }
    while ( Child != nullptr );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::NextSiblingElement  (binary VA: 0x1060440)
// Original: TiXmlNode::NextSiblingElement
// ----------------------------------------------------------------------------
int TiXmlNode::NextSiblingElement(TiXmlNode::Self *self)
{
  uint32_t *v1;
  int result;

  v1 = *((uint32_t **)self + 10);
  result = 0;
  if ( v1 != nullptr )
  {
    do
    {
      if ( G4_VCALL<int>(v1, 20) != 0 )
        return G4_VCALL<int>(v1, 20);
      v1 = (uint32_t *)v1[10];
    }
    while ( v1 != nullptr );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::NextSiblingElement  (binary VA: 0x1060490)
// Original: TiXmlNode::NextSiblingElement
// ----------------------------------------------------------------------------
int TiXmlNode::NextSiblingElement(TiXmlNode::Self *self, char *a2)
{
  TiXmlNode::Self *Sibling;
  int result;

  Sibling = (TiXmlNode::Self *)TiXmlNode::NextSibling(self, a2);
  result = 0;
  if ( Sibling != nullptr )
  {
    do
    {
      if ( G4_VCALL<int>(Sibling, 20) != 0 )
        return G4_VCALL<int>(Sibling, 20);
      Sibling = (TiXmlNode::Self *)TiXmlNode::NextSibling(Sibling, a2);
    }
    while ( Sibling != nullptr );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::GetDocument  (binary VA: 0x1060500)
// Original: TiXmlNode::GetDocument
// ----------------------------------------------------------------------------
int TiXmlNode::GetDocument(TiXmlNode::Self *self)
{
  int result;
  TiXmlNode::Self *v2;

  result = 0;
  v2 = self;
  if ( self != nullptr )
  {
    do
    {
      if ( G4_VCALL<int>(v2, 16) != 0 )
        return G4_VCALL<int>(v2, 16);
      v2 = *((TiXmlNode::Self **)v2 + 4);
    }
    while ( v2 != nullptr );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::InsertAfterChild  (binary VA: 0x1060550)
// Original: TiXmlNode::InsertAfterChild
// ----------------------------------------------------------------------------
TiXmlNode::Self * TiXmlNode::InsertAfterChild(TiXmlNode::Self **self, TiXmlNode::Self *a2, const TiXmlNode::Self *a3)
{
  TiXmlNode::Self **v3;
  TiXmlNode::Self *v4;
  TiXmlNode::Self *v5;
  int v6;
  int Document;

  if ( a2 == nullptr )
    return nullptr;
  v3 = *((TiXmlNode::Self ***)a2 + 4);
  v4 = nullptr;
  if ( v3 == self )
  {
    if ( *((uint32_t *)a3 + 5) != 0 )
    {
      v5 = (TiXmlNode::Self *)G4_VCALL<int>(a3, 64);
      v4 = v5;
      if ( v5 != nullptr )
      {
        *((uint32_t *)v5 + 4) = (uint32_t)(uintptr_t)(v3);
        *((uint32_t *)v5 + 9) = (uint32_t)(uintptr_t)(a2);
        *((uint32_t *)v5 + 10) = *((uint32_t *)a2 + 10);
        v6 = *((uint32_t *)a2 + 10);
        if ( v6 != 0 )
        {
          *(uint32_t *)(v6 + 36) = (uint32_t)(uintptr_t)(v4);
        }
        else
        {
          if ( v3[7] != a2 )
            __assert2(
              "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
              297,
              "TiXmlNode* TiXmlNode::InsertAfterChild(TiXmlNode*, const TiXmlNode&)",
              "lastChild == afterThis");
          v3[7] = v4;
        }
        *((uint32_t *)a2 + 10) = (uint32_t)(uintptr_t)(v4);
      }
    }
    else if ( TiXmlNode::GetDocument(*((TiXmlNode::Self **)a2 + 4)) != 0 )
    {
      Document = TiXmlNode::GetDocument((TiXmlNode::Self *)v3);
      TiXmlDocument::SetError(Document, 16, 0, 0, 0);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::InsertBeforeChild  (binary VA: 0x1060650)
// Original: TiXmlNode::InsertBeforeChild
// ----------------------------------------------------------------------------
TiXmlNode::Self * TiXmlNode::InsertBeforeChild(TiXmlNode::Self **self, TiXmlNode::Self *a2, const TiXmlNode::Self *a3)
{
  TiXmlNode::Self **v3;
  TiXmlNode::Self *v4;
  TiXmlNode::Self *v5;
  int v6;
  int Document;

  if ( a2 == nullptr )
    return nullptr;
  v3 = *((TiXmlNode::Self ***)a2 + 4);
  v4 = nullptr;
  if ( v3 == self )
  {
    if ( *((uint32_t *)a3 + 5) != 0 )
    {
      v5 = (TiXmlNode::Self *)G4_VCALL<int>(a3, 64);
      v4 = v5;
      if ( v5 != nullptr )
      {
        *((uint32_t *)v5 + 4) = (uint32_t)(uintptr_t)(v3);
        *((uint32_t *)v5 + 10) = (uint32_t)(uintptr_t)(a2);
        *((uint32_t *)v5 + 9) = *((uint32_t *)a2 + 9);
        v6 = *((uint32_t *)a2 + 9);
        if ( v6 != 0 )
        {
          *(uint32_t *)(v6 + 40) = (uint32_t)(uintptr_t)(v4);
        }
        else
        {
          if ( v3[6] != a2 )
            __assert2(
              "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
              265,
              "TiXmlNode* TiXmlNode::InsertBeforeChild(TiXmlNode*, const TiXmlNode&)",
              "firstChild == beforeThis");
          v3[6] = v4;
        }
        *((uint32_t *)a2 + 9) = (uint32_t)(uintptr_t)(v4);
      }
    }
    else if ( TiXmlNode::GetDocument(*((TiXmlNode::Self **)a2 + 4)) != 0 )
    {
      Document = TiXmlNode::GetDocument((TiXmlNode::Self *)v3);
      TiXmlDocument::SetError(Document, 16, 0, 0, 0);
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::LinkEndChild  (binary VA: 0x1060750)
// Original: TiXmlNode::LinkEndChild
// ----------------------------------------------------------------------------
TiXmlNode::Self * TiXmlNode::LinkEndChild(TiXmlNode::Self *self, TiXmlNode::Self *a2)
{
  TiXmlNode::Self *v2;
  TiXmlNode::Self *v3;
  int Document;
  int v5;
  int v7;

  v2 = a2;
  v3 = *((TiXmlNode::Self **)a2 + 4);
  if ( v3 != nullptr && v3 != self )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
      201,
      "TiXmlNode* TiXmlNode::LinkEndChild(TiXmlNode*)",
      "node->parent == 0 || node->parent == this");
  if ( TiXmlNode::GetDocument(a2) != 0 )
  {
    Document = TiXmlNode::GetDocument(a2);
    if ( Document != TiXmlNode::GetDocument(self) )
      __assert2(
        "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
        202,
        "TiXmlNode* TiXmlNode::LinkEndChild(TiXmlNode*)",
        "node->GetDocument() == 0 || node->GetDocument() == this->GetDocument()");
  }
  if ( *((uint32_t *)a2 + 5) != 0 )
  {
    *((uint32_t *)a2 + 4) = (uint32_t)(uintptr_t)(self);
    *((uint32_t *)a2 + 9) = *((uint32_t *)self + 7);
    *((uint32_t *)a2 + 10) = 0;
    v7 = *((uint32_t *)self + 7);
    if ( v7 != 0 )
      *(uint32_t *)(v7 + 40) = (uint32_t)(uintptr_t)(a2);
    else
      *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(a2);
    *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(a2);
  }
  else
  {
    G4_VCALL<void>(a2, 4);
    v2 = nullptr;
    if ( TiXmlNode::GetDocument(self) != 0 )
    {
      v5 = TiXmlNode::GetDocument(self);
      TiXmlDocument::SetError(v5, 16, 0, 0, 0);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::InsertEndChild  (binary VA: 0x1060890)
// Original: TiXmlNode::InsertEndChild
// ----------------------------------------------------------------------------
TiXmlNode::Self * TiXmlNode::InsertEndChild(TiXmlNode::Self *self, const TiXmlNode::Self *a2)
{
  int v2;
  int Document;
  TiXmlNode::Self *v5;

  if ( *((uint32_t *)a2 + 5) != 0 )
  {
    v5 = (TiXmlNode::Self *)G4_VCALL<int>(a2, 64);
    v2 = 0;
    if ( v5 != nullptr )
      return TiXmlNode::LinkEndChild(self, v5);
  }
  else
  {
    v2 = 0;
    if ( TiXmlNode::GetDocument(self) != 0 )
    {
      Document = TiXmlNode::GetDocument(self);
      TiXmlDocument::SetError(Document, 16, 0, 0, 0);
    }
  }
  return (TiXmlNode::Self *)v2;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::GetText  (binary VA: 0x1060930)
// Original: TiXmlElement::GetText
// ----------------------------------------------------------------------------
int TiXmlElement::GetText(TiXmlElement::Self *self)
{
  int v1;
  int v2;
  int v3;

  v1 = 0;
  v2 = *((uint32_t *)self + 6);
  if ( v2 != 0 )
  {
    v3 = (*(int (**)(uint32_t))(*(uint32_t *)v2 + 32))(*((uint32_t *)self + 6));
    if ( v3 != 0 )
      return *(uint32_t *)(v3 + 32) + 8;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::Construct  (binary VA: 0x1060960)
// Original: TiXmlDocument::TiXmlDocument
// ----------------------------------------------------------------------------
void TiXmlDocument::Construct(TiXmlDocument::Self *self, bool a2)
{
  TiXmlNode::Construct(self, 0);
  *((uint32_t *)self + 16) = -1;
  *((uint32_t *)self + 15) = -1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DD88);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(&TiXmlString::nullrep_);
  *((uint8_t *)self + 69) = a2;
  *((uint32_t *)self + 14) = 4;
  *((uint8_t *)self + 68) = 0;
  *((uint8_t *)self + 44) = 0;
  *((uint32_t *)self + 12) = 0;
  TiXmlString::assign((TiXmlDocument::Self *)((char *)self + 52), (const char *)&unk_1B15112, 0);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 15) = 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::Construct  (binary VA: 0x1060a10)
// Original: TiXmlDocument::TiXmlDocument
// ----------------------------------------------------------------------------
void TiXmlDocument::Construct(TiXmlDocument::Self *self, char *s, bool a3)
{
  size_t v3;

  TiXmlNode::Construct(self, 0);
  *((uint32_t *)self + 16) = -1;
  *((uint32_t *)self + 15) = -1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DD88);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(&TiXmlString::nullrep_);
  *((uint8_t *)self + 69) = a3;
  *((uint32_t *)self + 14) = 4;
  *((uint8_t *)self + 68) = 0;
  v3 = strlen(s);
  TiXmlString::assign((TiXmlDocument::Self *)((char *)self + 32), s, v3);
  *((uint8_t *)self + 44) = 0;
  *((uint32_t *)self + 12) = 0;
  TiXmlString::assign((TiXmlDocument::Self *)((char *)self + 52), (const char *)&unk_1B15112, 0);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 15) = 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::LoadFile  (binary VA: 0x1060af0)
// Original: TiXmlDocument::LoadFile
// ----------------------------------------------------------------------------
bool TiXmlDocument::LoadFile(TiXmlNode::Self *a1, FILE *stream, int a3)
{
  char *v3;
  bool result;
  const char *v5;
  const char *v6;
  char v7;
  typedef int _g4_t_v8;
  typedef bool _g4_t_v9;
  typedef const char *_g4_t_v10;
  typedef const char *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef signed int _g4_t_v13;
  typedef char * _g4_t_v14;
  typedef char _g4_t_v15;
  typedef void *_g4_t_v16[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v9)) > _g4_s1 ? (32u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v10)) > _g4_s2 ? (32u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v12)) > _g4_s4 ? (40u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v13)) > _g4_s5 ? (44u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v14)) > _g4_s6 ? (44u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (63u + sizeof(_g4_t_v15)) > _g4_s7 ? (63u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v16)) > _g4_s8 ? (64u + sizeof(_g4_t_v16)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 63u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);

  if ( stream != nullptr )
  {
    if ( *((uint8_t *)a1 + 69) != 0 )
      TiXmlNode::Clear(a1);
    *((uint32_t *)a1 + 2) = -1;
    *((uint32_t *)a1 + 1) = -1;
    fseek(stream, 0, 2);
    v13 = ftell(stream);
    fseek(stream, 0, 0);
    if ( v13 <= 0 )
    {
      TiXmlDocument::SetError(a1, 13, 0, 0, 0);
      return false;
    }
    else
    {
      v16[0] = &TiXmlString::nullrep_;
      TiXmlString::reserve((TiXmlString::Self *)v16, v13);
      v3 = (char *)opNewArray(v13 + 1);
      *v3 = 0;
      v12 = v3;
      if ( fread(v3, v13, 1u, stream) == 1 )
      {
        v5 = v12;
        v14 = &v12[v13];
        *((char *)v14) = 0;
        v6 = v12;
        v7 = *v12;
LABEL_12:
        while ( v7 != 0 )
        {
          while ( 1 )
          {
            if ( v5 >= v14 )
            {
              v10 = v6;
              __assert2(
                "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
                1080,
                "bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)",
                "p < (buf+length)");
              v7 = *v5;
              v6 = v10;
              if ( *v5 == 10 )
              {
LABEL_21:
                TiXmlString::append((TiXmlString::Self *)v16, v6, v5 - v6 + 1);
                v6 = v5 + 1;
                if ( v14 >= v5 + 1 )
                {
                  v7 = *++v5;
                  goto LABEL_12;
                }
                v8 = 1087;
LABEL_33:
                v11 = v6;
                __assert2(
                  "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
                  v8,
                  "bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)",
                  "p <= (buf+length)");
                v6 = v11;
                v7 = v5[1];
                v5 = v11;
                goto LABEL_12;
              }
            }
            else if ( v7 == 10 )
            {
              goto LABEL_21;
            }
            if ( v7 == 13 )
              break;
            v7 = *++v5;
            if ( v7 == 0 )
              goto LABEL_17;
          }
          if ( v5 - v6 > 0 )
            TiXmlString::append((TiXmlString::Self *)v16, v6, v5 - v6);
          v15 = 10;
          TiXmlString::append((TiXmlString::Self *)v16, &v15, 1u);
          v7 = v5[1];
          if ( v7 != 10 )
          {
            v6 = v5 + 1;
            if ( v14 >= v5 + 1 )
            {
              ++v5;
              continue;
            }
            v8 = 1107;
            goto LABEL_33;
          }
          v6 = v5 + 2;
          if ( v14 < v5 + 2 )
          {
            __assert2(
              "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
              1101,
              "bool TiXmlDocument::LoadFile(FILE*, TiXmlEncoding)",
              "p <= (buf+length)");
            v6 = v5 + 2;
          }
          v7 = v5[2];
          v5 += 2;
        }
LABEL_17:
        if ( v6 != v5 )
          TiXmlString::append((TiXmlString::Self *)v16, v6, v5 - v6);
        opDeleteArray(v12);
        G4_VCALL<void>(a1, 12, (char *)v16[0] + 8, 0, a3);
        result = *((uint8_t *)a1 + 44) == 0;
      }
      else
      {
        opDeleteArray(v12);
        TiXmlDocument::SetError(a1, 2, 0, 0, 0);
        result = false;
      }
      if ( v16[0] != &TiXmlString::nullrep_ && v16[0] != nullptr )
      {
        v9 = result;
        opDeleteArray(v16[0]);
        return v9;
      }
    }
  }
  else
  {
    TiXmlDocument::SetError(a1, 2, 0, 0, 0);
    return false;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::LoadFile  (binary VA: 0x1060ed0)
// Original: TiXmlDocument::LoadFile
// ----------------------------------------------------------------------------
int TiXmlDocument::LoadFile(TiXmlNode::Self *a1, const char *s, int a3)
{
  size_t v3;
  size_t n;
  size_t *v5;
  FILE *v6;
  int v7;
  int v8;
  size_t *v10;

  v3 = strlen(s);
  n = v3;
  if ( v3 != 0 )
  {
    v10 = (size_t *)opNewArray((v3 + 15) & 0xFFFFFFFC);
    *v10 = n;
    v5 = v10;
    *((uint8_t *)v10 + n + 8) = 0;
    v10[1] = n;
  }
  else
  {
    v5 = TiXmlString::nullrep_;
    n = TiXmlString::nullrep_[0];
  }
  memcpy(v5 + 2, s, n);
  TiXmlString::assign((TiXmlNode::Self *)((char *)a1 + 32), (const char *)v5 + 8, *v5);
  v6 = TiXmlFOpen((char *)(*((uint32_t *)a1 + 8) + 8), "rb");
  if ( v6 != nullptr )
  {
    LOBYTE(v7) = TiXmlDocument::LoadFile(a1, v6, a3);
    v8 = v7;
    fclose(v6);
  }
  else
  {
    v8 = 0;
    TiXmlDocument::SetError(a1, 2, 0, 0, 0);
  }
  if ( v5 != TiXmlString::nullrep_ )
    opDeleteArray(v5);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::LoadFile  (binary VA: 0x1061010)
// Original: TiXmlDocument::LoadFile
// ----------------------------------------------------------------------------
int TiXmlDocument::LoadFile(TiXmlNode::Self *a1, int a2)
{
  return TiXmlDocument::LoadFile(a1, (const char *)(*((uint32_t *)a1 + 8) + 8), a2);
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::SaveFile  (binary VA: 0x1061050)
// Original: TiXmlDocument::SaveFile
// ----------------------------------------------------------------------------
bool TiXmlDocument::SaveFile(uint8_t *a1, FILE *stream)
{
  if ( a1[68] != 0 )
  {
    fputc(239, stream);
    fputc(187, stream);
    fputc(191, stream);
  }
  G4_VCALL<void>(a1, 8, stream, 0);
  return ferror(stream) == 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::SaveFile  (binary VA: 0x10610e0)
// Original: TiXmlDocument::SaveFile
// ----------------------------------------------------------------------------
int TiXmlDocument::SaveFile(TiXmlDocument::Self *self, char *a2)
{
  int v2;
  FILE *v3;
  FILE *stream;
  int v5;

  v2 = 0;
  v3 = TiXmlFOpen(a2, "w");
  stream = v3;
  if ( v3 != nullptr )
  {
    LOBYTE(v5) = TiXmlDocument::SaveFile(self, v3);
    v2 = v5;
    fclose(stream);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::SaveFile  (binary VA: 0x1061150)
// Original: TiXmlDocument::SaveFile
// ----------------------------------------------------------------------------
int TiXmlDocument::SaveFile(TiXmlDocument::Self *self)
{
  return TiXmlDocument::SaveFile(self, (char *)(*((uint32_t *)self + 8) + 8));
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::CopyTo  (binary VA: 0x1061180)
// Original: TiXmlDocument::CopyTo
// ----------------------------------------------------------------------------
TiXmlNode::Self * TiXmlDocument::CopyTo(size_t **self, TiXmlDocument::Self *a2)
{
  int v2;
  TiXmlNode::Self *result;
  uint32_t *i;
  TiXmlNode::Self *v5;

  TiXmlNode::CopyTo((TiXmlNode::Self *)self, (TiXmlNode::Self *)(a2));
  *((uint8_t *)a2 + 44) = *((uint8_t *)self + 44);
  *((uint32_t *)a2 + 12) = (uint32_t)(uintptr_t)(*(self + 12));
  TiXmlString::assign((TiXmlDocument::Self *)((char *)a2 + 52), (const char *)*(self + 13) + 8, **(self + 13));
  *((uint32_t *)a2 + 14) = (uint32_t)(uintptr_t)(*(self + 14));
  v2 = (int)(uintptr_t)(*(self + 16));
  *((uint32_t *)a2 + 15) = (uint32_t)(uintptr_t)(*(self + 15));
  *((uint32_t *)a2 + 16) = v2;
  result = (TiXmlNode::Self *)*((uint8_t *)self + 68);
  *((uint8_t *)a2 + 68) = (uint8_t)(uintptr_t)(result);
  for ( i = (uint32_t *)(*(self + 6)); i != nullptr; i = (uint32_t *)i[10] )
  {
    v5 = (TiXmlNode::Self *)G4_VCALL<int>(i, 64);
    result = TiXmlNode::LinkEndChild((TiXmlNode::Self *)(a2), v5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::Clone  (binary VA: 0x1061220)
// Original: TiXmlDocument::Clone
// ----------------------------------------------------------------------------
TiXmlDocument::Self * TiXmlDocument::Clone(size_t **self)
{
  TiXmlDocument::Self *v1;

  v1 = (TiXmlDocument::Self *)opNew(0x48u);
  TiXmlDocument::Construct(v1, true);
  if ( v1 != nullptr )
    TiXmlDocument::CopyTo(self, v1);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::opAssign  (binary VA: 0x1061280)
// Original: TiXmlDocument::operator=
// ----------------------------------------------------------------------------
TiXmlNode::Self * TiXmlDocument::opAssign(TiXmlDocument::Self *self, size_t **a2)
{
  if ( *((uint8_t *)self + 69) != 0 )
    TiXmlNode::Clear((TiXmlNode::Self *)(self));
  return TiXmlDocument::CopyTo(a2, self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::Construct  (binary VA: 0x10612d0)
// Original: TiXmlDocument::TiXmlDocument
// ----------------------------------------------------------------------------
void TiXmlDocument::Construct(TiXmlDocument::Self *self, size_t **a2, bool a3)
{
  TiXmlNode::Construct(self, 0);
  *((uint32_t *)self + 16) = -1;
  *((uint32_t *)self + 15) = -1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DD88);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
  *((uint8_t *)self + 69) = a3;
  TiXmlDocument::CopyTo(a2, self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttribute::Next  (binary VA: 0x1061350)
// Original: TiXmlAttribute::Next
// ----------------------------------------------------------------------------
int TiXmlAttribute::Next(TiXmlAttribute::Self *self)
{
  int result;

  result = *((uint32_t *)self + 8);
  if ( **(uint32_t **)(result + 24) == 0 && **(uint32_t **)(result + 20) == 0 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::Print  (binary VA: 0x1061370)
// Original: TiXmlElement::Print
// ----------------------------------------------------------------------------
size_t TiXmlElement::Print(uint32_t *a1, FILE *stream, int a3)
{
  int i;
  TiXmlAttribute::Self *v4;
  int v5;
  uint32_t *j;
  int k;

  if ( stream == nullptr )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
      795,
      "virtual void TiXmlElement::Print(FILE*, int) const",
      "cfile");
  if ( a3 > 0 )
  {
    for ( i = 0; i != a3; ++i )
      fwrite("    ", 1u, 4u, stream);
  }
  fprintf(stream, (const char *)&off_1B67362, a1[8] + 8);
  v4 = (TiXmlAttribute::Self *)a1[19];
  if ( v4 != (TiXmlAttribute::Self *)(a1 + 11) )
  {
    while ( v4 != nullptr )
    {
      fputc(32, stream);
      G4_VCALL<void>(v4, 8, stream, a3);
      v4 = (TiXmlAttribute::Self *)TiXmlAttribute::Next(v4);
    }
  }
  v5 = a1[6];
  if ( v5 == 0 )
    return fwrite(" />", 1u, 3u, stream);
  if ( v5 == a1[7] && (*(int (**)(uint32_t))(*(uint32_t *)v5 + 56))(a1[6]) != 0 )
  {
    fputc(62, stream);
    G4_VCALL<void>(a1[6], 8, stream, a3 + 1);
  }
  else
  {
    fputc(62, stream);
    for ( j = (uint32_t *)a1[6]; j != nullptr; j = (uint32_t *)j[10] )
    {
      if ( G4_VCALL<int>(j, 56) == 0 )
        fputc(10, stream);
      G4_VCALL<void>(j, 8, stream, a3 + 1);
    }
    fputc(10, stream);
    if ( a3 > 0 )
    {
      for ( k = 0; k != a3; ++k )
        fwrite("    ", 1u, 4u, stream);
    }
  }
  return fprintf(stream, "</%s>", a1[8] + 8);
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttribute::Previous  (binary VA: 0x10615c0)
// Original: TiXmlAttribute::Previous
// ----------------------------------------------------------------------------
int TiXmlAttribute::Previous(TiXmlAttribute::Self *self)
{
  int result;

  result = *((uint32_t *)self + 7);
  if ( **(uint32_t **)(result + 24) == 0 && **(uint32_t **)(result + 20) == 0 )
    return 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttribute::Print  (binary VA: 0x10615e0)
// Original: TiXmlAttribute::Print
// ----------------------------------------------------------------------------
void TiXmlAttribute::Print(int a1, FILE *stream, int a3, TiXmlString::Self *a4)
{
  int v4;
  char v5;
  int v6;
  int v7;
  char v8;
  typedef char *_g4_t_v9;
  typedef char *_g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);

  v9 = (char *)TiXmlString::nullrep_;
  v10 = (char *)TiXmlString::nullrep_;
  TiXmlBase::EncodeString((unsigned int **)(a1 + 20), (const TiXmlString::Self *)&v9, nullptr);
  TiXmlBase::EncodeString((unsigned int **)(a1 + 24), (const TiXmlString::Self *)&v10, nullptr);
  v4 = *(uint32_t *)(a1 + 24);
  if ( *(uint32_t *)v4 != 0 )
  {
    v5 = *(uint8_t *)(v4 + 8);
    if ( v5 != 0 )
    {
      v6 = v4 + 8;
      v7 = v6;
      if ( v5 == 34 )
      {
LABEL_10:
        if ( v7 - v6 != -1 )
        {
          if ( stream != nullptr )
            fprintf(stream, "%s='%s'", v9 + 8, v10 + 8);
          if ( a4 != nullptr )
          {
            TiXmlString::append(a4, v9 + 8, *(uint32_t *)v9);
            TiXmlString::append(a4, "='", 2u);
            TiXmlString::append(a4, v10 + 8, *(uint32_t *)v10);
            TiXmlString::append(a4, (const char *)a0, 1u);
          }
          goto LABEL_15;
        }
      }
      else
      {
        while ( 1 )
        {
          v8 = *(uint8_t *)(v7 + 1);
          if ( v8 == 0 )
            break;
          ++v7;
          if ( v8 == 34 )
            goto LABEL_10;
        }
      }
    }
  }
  if ( stream != nullptr )
    fprintf(stream, "%s=\"%s\"", v9 + 8, v10 + 8);
  if ( a4 != nullptr )
  {
    TiXmlString::append(a4, v9 + 8, *(uint32_t *)v9);
    TiXmlString::append(a4, "=\"", 2u);
    TiXmlString::append(a4, v10 + 8, *(uint32_t *)v10);
    TiXmlString::append(a4, "\"", 1u);
  }
LABEL_15:
  if ( v10 != (char *)TiXmlString::nullrep_ && v10 != nullptr )
    opDeleteArray(v10);
  if ( v9 != (char *)TiXmlString::nullrep_ && v9 != nullptr )
    opDeleteArray(v9);
}

// ----------------------------------------------------------------------------
// Function: TiXmlPrinter::VisitEnter  (binary VA: 0x1061810)
// Original: TiXmlPrinter::VisitEnter
// ----------------------------------------------------------------------------
int TiXmlPrinter::VisitEnter(TiXmlPrinter::Self *self, const TiXmlElement::Self *a2, const TiXmlAttribute::Self *a3)
{
  TiXmlString::Self *v3;
  int v4;
  const char *s;
  size_t v6;
  TiXmlAttribute::Self *i;
  int v8;

  v3 = (TiXmlString::Self *)((TiXmlPrinter::Self *)((char *)self + 12));
  if ( *((int *)self + 1) > 0 )
  {
    v4 = 0;
    do
    {
      ++v4;
      TiXmlString::append(v3, (const char *)(*((uint32_t *)self + 4) + 8), **((uint32_t **)self + 4));
    }
    while ( v4 < *((uint32_t *)self + 1) );
  }
  TiXmlString::append(v3, "<", 1u);
  s = (const char *)(*((uint32_t *)a2 + 8) + 8);
  v6 = strlen(s);
  TiXmlString::append(v3, s, v6);
  if ( a3 != nullptr )
  {
    for ( i = (TiXmlAttribute::Self *)(a3); i != nullptr; i = (TiXmlAttribute::Self *)TiXmlAttribute::Next(i) )
    {
      TiXmlString::append(v3, " ", 1u);
      TiXmlAttribute::Print((int)(uintptr_t)(i), nullptr, 0, v3);
    }
  }
  if ( *((uint32_t *)a2 + 6) != 0 )
  {
    TiXmlString::append(v3, ">", 1u);
    if ( (*(int (**)(uint32_t))(**((uint32_t **)a2 + 6) + 32))(*((uint32_t *)a2 + 6)) != 0 )
    {
      v8 = *((uint32_t *)a2 + 7);
      if ( v8 == *((uint32_t *)a2 + 6)
        && *(uint8_t *)((*(int (**)(uint32_t))(*(uint32_t *)v8 + 32))(*((uint32_t *)a2 + 7)) + 44) == 0 )
      {
        *((uint8_t *)self + 8) = 1;
        goto LABEL_11;
      }
    }
  }
  else
  {
    TiXmlString::append(v3, " />", 3u);
  }
  TiXmlString::append(v3, (const char *)(*((uint32_t *)self + 5) + 8), **((uint32_t **)self + 5));
LABEL_11:
  ++*((uint32_t *)self + 1);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttribute::QueryIntValue  (binary VA: 0x1061990)
// Original: TiXmlAttribute::QueryIntValue
// ----------------------------------------------------------------------------
int TiXmlAttribute::QueryIntValue(TiXmlAttribute::Self *self, int *a2)
{
  return 2 * (sscanf((const char *)(*((uint32_t *)self + 6) + 8), "%d", a2) != 1);
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttribute::QueryDoubleValue  (binary VA: 0x10619e0)
// Original: TiXmlAttribute::QueryDoubleValue
// ----------------------------------------------------------------------------
int TiXmlAttribute::QueryDoubleValue(TiXmlAttribute::Self *self, double *a2)
{
  return 2 * (sscanf((const char *)(*((uint32_t *)self + 6) + 8), (const char *)&off_1B67382, a2) != 1);
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttribute::SetIntValue  (binary VA: 0x1061a30)
// Original: TiXmlAttribute::SetIntValue
// ----------------------------------------------------------------------------
int TiXmlAttribute::SetIntValue(TiXmlAttribute::Self *self, int a2)
{
  char s[76];

  snprintf(s, 0x40u, "%d", a2);
  return (int)(uintptr_t)(TiXmlString::assign((TiXmlAttribute::Self *)((char *)self + 24), s, strlen(s)));
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttribute::SetDoubleValue  (binary VA: 0x1061ac0)
// Original: TiXmlAttribute::SetDoubleValue
// ----------------------------------------------------------------------------
int TiXmlAttribute::SetDoubleValue(TiXmlAttribute::Self *self, double a2)
{
  char s[268];

  snprintf(s, 0x100u, (const char *)&off_1B67382, a2);
  return (int)(uintptr_t)(TiXmlString::assign((TiXmlAttribute::Self *)((char *)self + 24), s, strlen(s)));
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttribute::IntValue  (binary VA: 0x1061b60)
// Original: TiXmlAttribute::IntValue
// ----------------------------------------------------------------------------
int TiXmlAttribute::IntValue(TiXmlAttribute::Self *self)
{
  return atoi((const char *)(*((uint32_t *)self + 6) + 8));
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttribute::DoubleValue  (binary VA: 0x1061b90)
// Original: TiXmlAttribute::DoubleValue
// ----------------------------------------------------------------------------
long double TiXmlAttribute::DoubleValue(TiXmlAttribute::Self *self)
{
  return strtod((const char *)(*((uint32_t *)self + 6) + 8), nullptr);
}

// ----------------------------------------------------------------------------
// Function: TiXmlComment::CopyTo  (binary VA: 0x1061bc0)
// Original: TiXmlComment::CopyTo
// ----------------------------------------------------------------------------
int TiXmlComment::CopyTo(TiXmlComment::Self *self, TiXmlComment::Self *a2)
{
  return TiXmlNode::CopyTo((TiXmlNode::Self *)(self), (TiXmlNode::Self *)(a2));
}

// ----------------------------------------------------------------------------
// Function: TiXmlComment::Clone  (binary VA: 0x1061bf0)
// Original: TiXmlComment::Clone
// ----------------------------------------------------------------------------
int TiXmlComment::Clone(TiXmlComment::Self *self)
{
  int v1;
  char v2; // bp

  v1 = opNew(0x30u);
  v2 = *((uint8_t *)self + 44);
  TiXmlNode::Construct((uint32_t *)v1, 2);
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_208DDE8);
  *(uint8_t *)(v1 + 44) = v2;
  TiXmlComment::CopyTo(self, (TiXmlComment::Self *)v1);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlComment::opAssign  (binary VA: 0x1061c70)
// Original: TiXmlComment::operator=
// ----------------------------------------------------------------------------
int TiXmlComment::opAssign(TiXmlComment::Self *self, const TiXmlComment::Self *a2)
{
  if ( *((uint8_t *)self + 44) != 0 )
    TiXmlNode::Clear((TiXmlNode::Self *)(self));
  return TiXmlComment::CopyTo((TiXmlComment::Self *)(a2), self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlComment::Construct  (binary VA: 0x1061cc0)
// Original: TiXmlComment::TiXmlComment
// ----------------------------------------------------------------------------
void TiXmlComment::Construct(TiXmlComment::Self *self, const TiXmlComment::Self *a2, bool a3)
{
  TiXmlNode::Construct(self, 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DDE8);
  *((uint8_t *)self + 44) = a3;
  TiXmlComment::CopyTo((TiXmlComment::Self *)(a2), self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlText::CopyTo  (binary VA: 0x1061d30)
// Original: TiXmlText::CopyTo
// ----------------------------------------------------------------------------
int TiXmlText::CopyTo(TiXmlText::Self *self, TiXmlText::Self *a2)
{
  int result;

  TiXmlNode::CopyTo((TiXmlNode::Self *)(self), (TiXmlNode::Self *)(a2));
  result = *((uint8_t *)self + 44);
  *((uint8_t *)a2 + 44) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlText::Clone  (binary VA: 0x1061d80)
// Original: TiXmlText::Clone
// ----------------------------------------------------------------------------
int TiXmlText::Clone(TiXmlText::Self *self)
{
  int v1;

  v1 = opNew(0x30u);
  TiXmlNode::Construct((uint32_t *)v1, 4);
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_208DE48);
  TiXmlString::assign((TiXmlString::Self *)(v1 + 32), (const char *)&unk_1B15112, 0);
  *(uint8_t *)(v1 + 44) = 0;
  *(uint8_t *)(v1 + 45) = 0;
  TiXmlText::CopyTo(self, (TiXmlText::Self *)v1);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDeclaration::Construct  (binary VA: 0x1061e00)
// Original: TiXmlDeclaration::TiXmlDeclaration
// ----------------------------------------------------------------------------
void TiXmlDeclaration::Construct(TiXmlDeclaration::Self *self, char *s, char *a3, char *a4, bool a5)
{
  size_t v5;
  size_t v6;
  size_t v7;

  TiXmlNode::Construct(self, 5);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DEA8);
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
  *((uint8_t *)self + 56) = a5;
  v5 = strlen(s);
  TiXmlString::assign((TiXmlDeclaration::Self *)((char *)self + 44), s, v5);
  v6 = strlen(a3);
  TiXmlString::assign((TiXmlDeclaration::Self *)((char *)self + 48), a3, v6);
  v7 = strlen(a4);
  TiXmlString::assign((TiXmlDeclaration::Self *)((char *)self + 52), a4, v7);
}

// ----------------------------------------------------------------------------
// Function: TiXmlDeclaration::CopyTo  (binary VA: 0x1061ee0)
// Original: TiXmlDeclaration::CopyTo
// ----------------------------------------------------------------------------
int TiXmlDeclaration::CopyTo(size_t **self, TiXmlDeclaration::Self *a2)
{
  TiXmlNode::CopyTo((TiXmlNode::Self *)self, (TiXmlNode::Self *)(a2));
  TiXmlString::assign((TiXmlDeclaration::Self *)((char *)a2 + 44), (const char *)*(self + 11) + 8, **(self + 11));
  TiXmlString::assign((TiXmlDeclaration::Self *)((char *)a2 + 48), (const char *)*(self + 12) + 8, **(self + 12));
  return (int)(uintptr_t)(TiXmlString::assign((TiXmlDeclaration::Self *)((char *)a2 + 52), (const char *)*(self + 13) + 8, **(self + 13)));
}

// ----------------------------------------------------------------------------
// Function: TiXmlDeclaration::Clone  (binary VA: 0x1061f80)
// Original: TiXmlDeclaration::Clone
// ----------------------------------------------------------------------------
int TiXmlDeclaration::Clone(size_t **self)
{
  int v1;

  v1 = opNew(0x3Cu);
  TiXmlNode::Construct((uint32_t *)v1, 5);
  *(uint8_t *)(v1 + 56) = 1;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_208DEA8);
  *(uint32_t *)(v1 + 44) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
  *(uint32_t *)(v1 + 48) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
  *(uint32_t *)(v1 + 52) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
  TiXmlDeclaration::CopyTo(self, (TiXmlDeclaration::Self *)v1);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDeclaration::opAssign  (binary VA: 0x1062000)
// Original: TiXmlDeclaration::operator=
// ----------------------------------------------------------------------------
int TiXmlDeclaration::opAssign(TiXmlDeclaration::Self *self, size_t **a2)
{
  if ( *((uint8_t *)self + 56) != 0 )
    TiXmlNode::Clear((TiXmlNode::Self *)(self));
  return TiXmlDeclaration::CopyTo(a2, self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlDeclaration::Construct  (binary VA: 0x1062050)
// Original: TiXmlDeclaration::TiXmlDeclaration
// ----------------------------------------------------------------------------
void TiXmlDeclaration::Construct(TiXmlDeclaration::Self *self, size_t **a2, bool a3)
{
  TiXmlNode::Construct(self, 5);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DEA8);
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
  *((uint8_t *)self + 56) = a3;
  TiXmlDeclaration::CopyTo(a2, self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlUnknown::CopyTo  (binary VA: 0x10620d0)
// Original: TiXmlUnknown::CopyTo
// ----------------------------------------------------------------------------
int TiXmlUnknown::CopyTo(TiXmlUnknown::Self *self, TiXmlUnknown::Self *a2)
{
  return TiXmlNode::CopyTo((TiXmlNode::Self *)(self), (TiXmlNode::Self *)(a2));
}

// ----------------------------------------------------------------------------
// Function: TiXmlUnknown::Clone  (binary VA: 0x1062100)
// Original: TiXmlUnknown::Clone
// ----------------------------------------------------------------------------
TiXmlUnknown::Self * TiXmlUnknown::Clone(TiXmlUnknown::Self *self)
{
  TiXmlUnknown::Self *v1;

  v1 = (TiXmlUnknown::Self *)opNew(0x2Cu);
  TiXmlNode::Construct(v1, 3);
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_208DF08);
  TiXmlUnknown::CopyTo(self, v1);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttributeSet::Construct  (binary VA: 0x1062160)
// Original: TiXmlAttributeSet::TiXmlAttributeSet
// ----------------------------------------------------------------------------
void TiXmlAttributeSet::Construct(TiXmlAttributeSet::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E000);
  *((uint32_t *)self + 2) = -1;
  *((uint32_t *)self + 1) = -1;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::Construct  (binary VA: 0x10621b0)
// Original: TiXmlElement::TiXmlElement
// ----------------------------------------------------------------------------
void TiXmlElement::Construct(TiXmlElement::Self *self, char *s, bool a3)
{
  size_t v3;

  TiXmlNode::Construct(self, 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DD28);
  TiXmlAttributeSet::Construct((TiXmlAttributeSet::Self *)((TiXmlElement::Self *)((char *)self + 44)));
  *((uint32_t *)self + 7) = 0;
  *((uint8_t *)self + 80) = a3;
  *((uint32_t *)self + 6) = 0;
  v3 = strlen(s);
  TiXmlString::assign((TiXmlElement::Self *)((char *)self + 32), s, v3);
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttributeSet::Destroy  (binary VA: 0x1062250)
// Original: TiXmlAttributeSet::~TiXmlAttributeSet
// ----------------------------------------------------------------------------
void TiXmlAttributeSet::Destroy(TiXmlAttributeSet::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;

  if ( *((TiXmlAttributeSet::Self **)self + 8) != self )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
      1581,
      "TiXmlAttributeSet::~TiXmlAttributeSet()",
      "sentinel.next == &sentinel");
  if ( self != *((TiXmlAttributeSet::Self **)self + 7) )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
      1582,
      "TiXmlAttributeSet::~TiXmlAttributeSet()",
      "sentinel.prev == &sentinel");
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E000);
  v1 = *((uint32_t **)self + 6);
  if ( v1 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v1 != nullptr )
    opDeleteArray(*((void **)self + 6));
  v2 = *((uint32_t **)self + 5);
  if ( v2 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v2 != nullptr )
    opDeleteArray(*((void **)self + 5));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DFD8);
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttributeSet::Remove  (binary VA: 0x1062320)
// Original: TiXmlAttributeSet::Remove
// ----------------------------------------------------------------------------
TiXmlAttribute::Self * TiXmlAttributeSet::Remove(TiXmlAttributeSet::Self *self, TiXmlAttribute::Self *a2)
{
  TiXmlAttribute::Self *result;

  result = *((TiXmlAttribute::Self **)self + 8);
  if ( result == (TiXmlAttribute::Self *)(uintptr_t)(self) )
    return (__assert2(
                               "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
                               1616,
                               "void TiXmlAttributeSet::Remove(TiXmlAttribute*)",
                               &a0[2]), (TiXmlAttribute::Self *)0);
  while ( a2 != result )
  {
    result = *((TiXmlAttribute::Self **)result + 8);
    if ( result == (TiXmlAttribute::Self *)(uintptr_t)(self) )
      return (__assert2(
                                 "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
                                 1616,
                                 "void TiXmlAttributeSet::Remove(TiXmlAttribute*)",
                                 &a0[2]), (TiXmlAttribute::Self *)0);
  }
  *(uint32_t *)(*((uint32_t *)result + 7) + 32) = *((uint32_t *)result + 8);
  *(uint32_t *)(*((uint32_t *)result + 8) + 28) = *((uint32_t *)result + 7);
  *((uint32_t *)result + 8) = 0;
  *((uint32_t *)result + 7) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::ClearThis  (binary VA: 0x10623c0)
// Original: TiXmlElement::ClearThis
// ----------------------------------------------------------------------------
uint32_t * TiXmlElement::ClearThis(TiXmlAttribute::Self **self)
{
  TiXmlAttributeSet::Self *v1;
  TiXmlAttributeSet::Self *v2;
  uint32_t *result;

  v1 = (TiXmlAttributeSet::Self *)(self + 11);
  if ( *((uint8_t *)self + 80) != 0 )
    result = TiXmlNode::Clear((TiXmlNode::Self *)self);
  while ( 1 )
  {
    v2 = (TiXmlAttributeSet::Self *)(*(self + 19));
    if ( v2 == v1 || v2 == nullptr )
      break;
    TiXmlAttributeSet::Remove(v1, *(self + 19));
    result = (uint32_t *)G4_VCALL<int>(v2, 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::Destroy  (binary VA: 0x1062420)
// Original: TiXmlElement::~TiXmlElement
// ----------------------------------------------------------------------------
void TiXmlElement::Destroy(TiXmlAttribute::Self **self)
{
  *self = (TiXmlAttribute::Self *)((uint32_t)(uintptr_t)&off_208DD28);
  TiXmlElement::ClearThis(self);
  TiXmlAttributeSet::Destroy((TiXmlAttributeSet::Self *)(self + 11));
  TiXmlNode::Destroy((TiXmlNode::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::Destroy_ea1062470  (binary VA: 0x1062470)
// Original: TiXmlElement::~TiXmlElement
// ----------------------------------------------------------------------------
void TiXmlElement::Destroy_ea1062470(TiXmlAttribute::Self **self)
{
  TiXmlElement::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttributeSet::Find  (binary VA: 0x10624b0)
// Original: TiXmlAttributeSet::Find
// ----------------------------------------------------------------------------
TiXmlAttributeSet::Self * TiXmlAttributeSet::Find(TiXmlAttributeSet::Self *self, char *s2)
{
  TiXmlAttributeSet::Self *v2;

  v2 = *((TiXmlAttributeSet::Self **)self + 8);
  if ( v2 == self )
    return nullptr;
  while ( strcmp((const char *)(*((uint32_t *)v2 + 5) + 8), s2) != 0 )
  {
    v2 = *((TiXmlAttributeSet::Self **)v2 + 8);
    if ( v2 == self )
      return nullptr;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttributeSet::Add  (binary VA: 0x1062510)
// Original: TiXmlAttributeSet::Add
// ----------------------------------------------------------------------------
int TiXmlAttributeSet::Add(TiXmlAttributeSet::Self *self, TiXmlAttribute::Self *a2)
{
  int result;

  if ( TiXmlAttributeSet::Find(self, (char *)(*((uint32_t *)a2 + 5) + 8)) != nullptr )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.cpp",
      1591,
      "void TiXmlAttributeSet::Add(TiXmlAttribute*)",
      "!Find( addMe->Name() )");
  *((uint32_t *)a2 + 8) = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)a2 + 7) = *((uint32_t *)self + 7);
  result = *((uint32_t *)self + 7);
  *(uint32_t *)(result + 32) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::SetAttribute  (binary VA: 0x10625a0)
// Original: TiXmlElement::SetAttribute
// ----------------------------------------------------------------------------
int TiXmlElement::SetAttribute(TiXmlElement::Self *self, char *a2, char *s)
{
  TiXmlAttributeSet::Self *v3;
  TiXmlString::Self *v4;
  size_t v5;
  uint32_t *v7;
  size_t v8;
  size_t v9;

  v3 = TiXmlAttributeSet::Find((TiXmlAttributeSet::Self *)((TiXmlElement::Self *)((char *)self + 44)), a2);
  if ( v3 != nullptr )
  {
    v4 = (TiXmlString::Self *)((TiXmlAttributeSet::Self *)((char *)v3 + 24));
    v5 = strlen(s);
    return (int)(uintptr_t)(TiXmlString::assign(v4, s, v5));
  }
  else
  {
    v7 = (uint32_t *)opNew(0x24u);
    v7[2] = -1;
    v7[1] = -1;
    v7[3] = 0;
    *v7 = ((uint32_t)(uintptr_t)&off_208E000);
    v7[5] = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
    v7[6] = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
    v8 = strlen(a2);
    TiXmlString::assign((TiXmlString::Self *)(v7 + 5), a2, v8);
    v9 = strlen(s);
    TiXmlString::assign((TiXmlString::Self *)(v7 + 6), s, v9);
    v7[4] = 0;
    v7[8] = 0;
    v7[7] = 0;
    return TiXmlAttributeSet::Add((TiXmlAttributeSet::Self *)((TiXmlElement::Self *)((char *)self + 44)), (TiXmlAttribute::Self *)v7);
  }
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::CopyTo  (binary VA: 0x10626c0)
// Original: TiXmlElement::CopyTo
// ----------------------------------------------------------------------------
TiXmlNode::Self * TiXmlElement::CopyTo(TiXmlNode::Self **self, TiXmlElement::Self *a2)
{
  TiXmlNode::Self *v2;
  TiXmlNode::Self *result;
  uint32_t *i;
  TiXmlNode::Self *v5;

  TiXmlNode::CopyTo((TiXmlNode::Self *)self, (TiXmlNode::Self *)(a2));
  v2 = *(self + 19);
  result = (TiXmlNode::Self *)(self + 11);
  if ( v2 != (TiXmlNode::Self *)(self + 11) )
  {
    while ( v2 != nullptr )
    {
      TiXmlElement::SetAttribute(a2, (char *)(*((uint32_t *)v2 + 5) + 8), (char *)(*((uint32_t *)v2 + 6) + 8));
      result = (TiXmlNode::Self *)TiXmlAttribute::Next((TiXmlAttribute::Self *)(v2));
      v2 = result;
    }
  }
  for ( i = (uint32_t *)(*(self + 6)); i != nullptr; i = (uint32_t *)i[10] )
  {
    v5 = (TiXmlNode::Self *)G4_VCALL<int>(i, 64);
    result = TiXmlNode::LinkEndChild((TiXmlNode::Self *)(a2), v5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::Clone  (binary VA: 0x1062760)
// Original: TiXmlElement::Clone
// ----------------------------------------------------------------------------
TiXmlElement::Self * TiXmlElement::Clone(TiXmlElement::Self *self)
{
  int v1;
  TiXmlElement::Self *v2;

  v1 = *((uint32_t *)self + 8);
  v2 = (TiXmlElement::Self *)opNew(0x54u);
  TiXmlElement::Construct(v2, (char *)(v1 + 8), true);
  if ( v2 != nullptr )
    TiXmlElement::CopyTo((TiXmlNode::Self **)self, v2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::opAssign  (binary VA: 0x10627e0)
// Original: TiXmlElement::operator=
// ----------------------------------------------------------------------------
TiXmlNode::Self * TiXmlElement::opAssign(TiXmlAttribute::Self **self, TiXmlNode::Self **a2)
{
  TiXmlElement::ClearThis(self);
  return TiXmlElement::CopyTo(a2, (TiXmlElement::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::Construct  (binary VA: 0x1062820)
// Original: TiXmlElement::TiXmlElement
// ----------------------------------------------------------------------------
void TiXmlElement::Construct(TiXmlElement::Self *self, TiXmlNode::Self **a2, bool a3)
{
  TiXmlNode::Construct(self, 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DD28);
  TiXmlAttributeSet::Construct((TiXmlElement::Self *)((char *)self + 44));
  *((uint32_t *)self + 7) = 0;
  *((uint8_t *)self + 80) = a3;
  *((uint32_t *)self + 6) = 0;
  TiXmlElement::CopyTo(a2, self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::SetDoubleAttribute  (binary VA: 0x10628a0)
// Original: TiXmlElement::SetDoubleAttribute
// ----------------------------------------------------------------------------
int TiXmlElement::SetDoubleAttribute(TiXmlElement::Self *self, char *a2, double a3)
{
  char s[260];

  snprintf(s, 0x100u, "%f", a3);
  return TiXmlElement::SetAttribute(self, a2, s);
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::SetAttribute  (binary VA: 0x1062930)
// Original: TiXmlElement::SetAttribute
// ----------------------------------------------------------------------------
int TiXmlElement::SetAttribute(TiXmlElement::Self *self, char *a2, int a3)
{
  char s[68];

  snprintf(s, 0x40u, "%d", a3);
  return TiXmlElement::SetAttribute(self, a2, s);
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::RemoveAttribute  (binary VA: 0x10629a0)
// Original: TiXmlElement::RemoveAttribute
// ----------------------------------------------------------------------------
TiXmlAttribute::Self * TiXmlElement::RemoveAttribute(TiXmlElement::Self *self, char *a2)
{
  TiXmlAttribute::Self *result;
  TiXmlAttribute::Self *v3;

  result = (TiXmlAttribute::Self *)(TiXmlAttributeSet::Find((TiXmlElement::Self *)((char *)self + 44), a2));
  v3 = result;
  if ( result != nullptr )
  {
    TiXmlAttributeSet::Remove((TiXmlAttributeSet::Self *)((TiXmlElement::Self *)((char *)self + 44)), result);
    return (TiXmlAttribute::Self *)G4_VCALL<int>(v3, 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::QueryDoubleAttribute  (binary VA: 0x1062a00)
// Original: TiXmlElement::QueryDoubleAttribute
// ----------------------------------------------------------------------------
int TiXmlElement::QueryDoubleAttribute(TiXmlElement::Self *self, char *a2, double *a3)
{
  TiXmlAttribute::Self *v3;
  int result;

  v3 = (TiXmlAttribute::Self *)(TiXmlAttributeSet::Find((TiXmlElement::Self *)((char *)self + 44), a2));
  result = 1;
  if ( v3 != nullptr )
    return TiXmlAttribute::QueryDoubleValue(v3, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::QueryIntAttribute  (binary VA: 0x1062a50)
// Original: TiXmlElement::QueryIntAttribute
// ----------------------------------------------------------------------------
int TiXmlElement::QueryIntAttribute(TiXmlElement::Self *self, char *a2, int *a3)
{
  TiXmlAttribute::Self *v3;
  int result;

  v3 = (TiXmlAttribute::Self *)(TiXmlAttributeSet::Find((TiXmlElement::Self *)((char *)self + 44), a2));
  result = 1;
  if ( v3 != nullptr )
    return TiXmlAttribute::QueryIntValue(v3, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::Attribute  (binary VA: 0x1062aa0)
// Original: TiXmlElement::Attribute
// ----------------------------------------------------------------------------
int TiXmlElement::Attribute(TiXmlElement::Self *self, char *a2)
{
  TiXmlAttributeSet::Self *v2;

  v2 = TiXmlAttributeSet::Find((TiXmlElement::Self *)((char *)self + 44), a2);
  if ( v2 != nullptr )
    return *((uint32_t *)v2 + 6) + 8;
  else
    return 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::Attribute  (binary VA: 0x1062ae0)
// Original: TiXmlElement::Attribute
// ----------------------------------------------------------------------------
const char * TiXmlElement::Attribute(TiXmlElement::Self *self, char *a2, double *a3)
{
  const char *result;
  const char *v4;

  result = (const char *)TiXmlElement::Attribute(self, a2);
  if ( a3 != nullptr )
  {
    if ( result != nullptr )
    {
      v4 = result;
      *a3 = strtod(result, nullptr);
      return v4;
    }
    else
    {
      *a3 = 0.0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::Attribute  (binary VA: 0x1062b60)
// Original: TiXmlElement::Attribute
// ----------------------------------------------------------------------------
const char * TiXmlElement::Attribute(TiXmlElement::Self *self, char *a2, int *a3)
{
  const char *nptr;
  const char *v4;

  nptr = (const char *)TiXmlElement::Attribute(self, a2);
  v4 = nptr;
  if ( a3 != nullptr )
  {
    if ( nptr != nullptr )
      *a3 = atoi(nptr);
    else
      *a3 = 0;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: TiXmlHandle::FirstChild  (binary VA: 0x1062bd0)
// Original: TiXmlHandle::FirstChild
// ----------------------------------------------------------------------------
int TiXmlHandle::FirstChild(TiXmlHandle::Self *self, int a2)
{
  int64_t v2; // rax

  v2 = (unsigned int)(uintptr_t)(self);
  if ( *(uint32_t *)a2 != 0 )
    HIDWORD(v2) = *(uint32_t *)(*(uint32_t *)a2 + 24);
  *(uint32_t *)self = HIDWORD(v2);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: TiXmlHandle::FirstChild  (binary VA: 0x1062bf0)
// Original: TiXmlHandle::FirstChild
// ----------------------------------------------------------------------------
TiXmlHandle::Self * TiXmlHandle::FirstChild(TiXmlHandle::Self *self, const char *a2, char *a3)
{
  int Child;

  if ( *(uint32_t *)a2 == 0 || (Child = TiXmlNode::FirstChild(*(TiXmlNode::Self **)a2, a3)) == 0 )
    Child = 0;
  *(uint32_t *)self = Child;
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlHandle::FirstChildElement  (binary VA: 0x1062c50)
// Original: TiXmlHandle::FirstChildElement
// ----------------------------------------------------------------------------
TiXmlHandle::Self * TiXmlHandle::FirstChildElement(TiXmlHandle::Self *self, TiXmlNode::Self **a2)
{
  int ChildElement;

  if ( *a2 == nullptr || (ChildElement = TiXmlNode::FirstChildElement(*a2)) == 0 )
    ChildElement = 0;
  *(uint32_t *)self = ChildElement;
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlHandle::FirstChildElement  (binary VA: 0x1062ca0)
// Original: TiXmlHandle::FirstChildElement
// ----------------------------------------------------------------------------
TiXmlHandle::Self * TiXmlHandle::FirstChildElement(TiXmlHandle::Self *self, const char *a2, char *a3)
{
  int ChildElement;

  if ( *(uint32_t *)a2 == 0 || (ChildElement = TiXmlNode::FirstChildElement(*(TiXmlNode::Self **)a2, a3)) == 0 )
    ChildElement = 0;
  *(uint32_t *)self = ChildElement;
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlHandle::Child  (binary VA: 0x1062d00)
// Original: TiXmlHandle::Child
// ----------------------------------------------------------------------------
int TiXmlHandle::Child(TiXmlHandle::Self *self, int a2, int a3)
{
  int64_t v3; // rax
  int v4;

  v3 = (unsigned int)(uintptr_t)(self);
  if ( *(uint32_t *)a2 != 0 )
  {
    HIDWORD(v3) = *(uint32_t *)(*(uint32_t *)a2 + 24);
    if ( a3 > 0 && HIDWORD(v3) != 0 )
    {
      v4 = 0;
      do
      {
        ++v4;
        HIDWORD(v3) = *(uint32_t *)(HIDWORD(v3) + 40);
      }
      while ( a3 > v4 && HIDWORD(v3) != 0 );
    }
  }
  *(uint32_t *)self = HIDWORD(v3);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: TiXmlHandle::Child  (binary VA: 0x1062d40)
// Original: TiXmlHandle::Child
// ----------------------------------------------------------------------------
TiXmlHandle::Self * TiXmlHandle::Child(TiXmlHandle::Self *self, const char *a2, char *a3, int a4)
{
  TiXmlNode::Self *Child;
  int v5;

  if ( *(uint32_t *)a2 == 0 )
    goto LABEL_9;
  Child = (TiXmlNode::Self *)TiXmlNode::FirstChild(*(TiXmlNode::Self **)a2, a3);
  if ( Child != nullptr && a4 > 0 )
  {
    v5 = 0;
    do
    {
      ++v5;
      Child = (TiXmlNode::Self *)TiXmlNode::NextSibling(Child, a3);
    }
    while ( a4 > v5 && Child != nullptr );
  }
  if ( Child == nullptr )
LABEL_9:
    Child = nullptr;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(Child);
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlHandle::ChildElement  (binary VA: 0x1062dc0)
// Original: TiXmlHandle::ChildElement
// ----------------------------------------------------------------------------
TiXmlHandle::Self * TiXmlHandle::ChildElement(TiXmlHandle::Self *self, TiXmlNode::Self **a2, int a3)
{
  TiXmlNode::Self *ChildElement;
  int v4;

  if ( *a2 == nullptr )
    goto LABEL_9;
  ChildElement = (TiXmlNode::Self *)TiXmlNode::FirstChildElement(*a2);
  if ( ChildElement != nullptr && a3 > 0 )
  {
    v4 = 0;
    do
    {
      ++v4;
      ChildElement = (TiXmlNode::Self *)TiXmlNode::NextSiblingElement(ChildElement);
    }
    while ( a3 > v4 && ChildElement != nullptr );
  }
  if ( ChildElement != nullptr )
  {
    *(uint32_t *)self = (uint32_t)(uintptr_t)(ChildElement);
    return self;
  }
  else
  {
LABEL_9:
    *(uint32_t *)self = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: TiXmlHandle::ChildElement  (binary VA: 0x1062e40)
// Original: TiXmlHandle::ChildElement
// ----------------------------------------------------------------------------
TiXmlHandle::Self * TiXmlHandle::ChildElement(TiXmlHandle::Self *self, const char *a2, char *a3, int a4)
{
  TiXmlNode::Self *ChildElement;
  int v5;

  if ( *(uint32_t *)a2 == 0 )
    goto LABEL_9;
  ChildElement = (TiXmlNode::Self *)TiXmlNode::FirstChildElement(*(TiXmlNode::Self **)a2, a3);
  if ( ChildElement != nullptr && a4 > 0 )
  {
    v5 = 0;
    do
    {
      ++v5;
      ChildElement = (TiXmlNode::Self *)TiXmlNode::NextSiblingElement(ChildElement, a3);
    }
    while ( a4 > v5 && ChildElement != nullptr );
  }
  if ( ChildElement == nullptr )
LABEL_9:
    ChildElement = nullptr;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(ChildElement);
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlVisitor::Destroy  (binary VA: 0x1062ec0)
// Original: TiXmlVisitor::~TiXmlVisitor
// ----------------------------------------------------------------------------
void TiXmlVisitor::Destroy(TiXmlVisitor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DFA8);
}

// ----------------------------------------------------------------------------
// Function: TiXmlVisitor::VisitEnter  (binary VA: 0x1062ee0)
// Original: TiXmlVisitor::VisitEnter
// ----------------------------------------------------------------------------
int TiXmlVisitor::VisitEnter()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlVisitor::VisitExit  (binary VA: 0x1062ef0)
// Original: TiXmlVisitor::VisitExit
// ----------------------------------------------------------------------------
int TiXmlVisitor::VisitExit()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlVisitor::VisitEnter_ea1062f00  (binary VA: 0x1062f00)
// Original: TiXmlVisitor::VisitEnter
// ----------------------------------------------------------------------------
int TiXmlVisitor::VisitEnter_ea1062f00()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlVisitor::VisitExit_ea1062f10  (binary VA: 0x1062f10)
// Original: TiXmlVisitor::VisitExit
// ----------------------------------------------------------------------------
int TiXmlVisitor::VisitExit_ea1062f10()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlVisitor::Visit  (binary VA: 0x1062f20)
// Original: TiXmlVisitor::Visit
// ----------------------------------------------------------------------------
int TiXmlVisitor::Visit()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlVisitor::Visit_ea1062f30  (binary VA: 0x1062f30)
// Original: TiXmlVisitor::Visit
// ----------------------------------------------------------------------------
int TiXmlVisitor::Visit_ea1062f30()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlVisitor::Visit_ea1062f40  (binary VA: 0x1062f40)
// Original: TiXmlVisitor::Visit
// ----------------------------------------------------------------------------
int TiXmlVisitor::Visit_ea1062f40()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlVisitor::Visit_ea1062f50  (binary VA: 0x1062f50)
// Original: TiXmlVisitor::Visit
// ----------------------------------------------------------------------------
int TiXmlVisitor::Visit_ea1062f50()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: TiXmlBase::Destroy  (binary VA: 0x1062f60)
// Original: TiXmlBase::~TiXmlBase
// ----------------------------------------------------------------------------
void TiXmlBase::Destroy(TiXmlBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DFD8);
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::ToDocument  (binary VA: 0x1062f80)
// Original: TiXmlNode::ToDocument
// ----------------------------------------------------------------------------
int TiXmlNode::ToDocument()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::ToElement  (binary VA: 0x1062f90)
// Original: TiXmlNode::ToElement
// ----------------------------------------------------------------------------
int TiXmlNode::ToElement()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::ToComment  (binary VA: 0x1062fa0)
// Original: TiXmlNode::ToComment
// ----------------------------------------------------------------------------
int TiXmlNode::ToComment()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::ToUnknown  (binary VA: 0x1062fb0)
// Original: TiXmlNode::ToUnknown
// ----------------------------------------------------------------------------
int TiXmlNode::ToUnknown()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::ToText  (binary VA: 0x1062fc0)
// Original: TiXmlNode::ToText
// ----------------------------------------------------------------------------
int TiXmlNode::ToText()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::ToDeclaration  (binary VA: 0x1062fd0)
// Original: TiXmlNode::ToDeclaration
// ----------------------------------------------------------------------------
int TiXmlNode::ToDeclaration()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::ToDocument_ea1062fe0  (binary VA: 0x1062fe0)
// Original: TiXmlNode::ToDocument
// ----------------------------------------------------------------------------
int TiXmlNode::ToDocument_ea1062fe0()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::ToElement_ea1062ff0  (binary VA: 0x1062ff0)
// Original: TiXmlNode::ToElement
// ----------------------------------------------------------------------------
int TiXmlNode::ToElement_ea1062ff0()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::ToComment_ea1063000  (binary VA: 0x1063000)
// Original: TiXmlNode::ToComment
// ----------------------------------------------------------------------------
int TiXmlNode::ToComment_ea1063000()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::ToUnknown_ea1063010  (binary VA: 0x1063010)
// Original: TiXmlNode::ToUnknown
// ----------------------------------------------------------------------------
int TiXmlNode::ToUnknown_ea1063010()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::ToText_ea1063020  (binary VA: 0x1063020)
// Original: TiXmlNode::ToText
// ----------------------------------------------------------------------------
int TiXmlNode::ToText_ea1063020()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::ToDeclaration_ea1063030  (binary VA: 0x1063030)
// Original: TiXmlNode::ToDeclaration
// ----------------------------------------------------------------------------
int TiXmlNode::ToDeclaration_ea1063030()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::ToElement  (binary VA: 0x1063040)
// Original: TiXmlElement::ToElement
// ----------------------------------------------------------------------------
TiXmlElement::Self * TiXmlElement::ToElement(TiXmlElement::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::ToElement_ea1063050  (binary VA: 0x1063050)
// Original: TiXmlElement::ToElement
// ----------------------------------------------------------------------------
TiXmlElement::Self * TiXmlElement::ToElement_ea1063050(TiXmlElement::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlComment::ToComment  (binary VA: 0x1063060)
// Original: TiXmlComment::ToComment
// ----------------------------------------------------------------------------
TiXmlComment::Self * TiXmlComment::ToComment(TiXmlComment::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlComment::ToComment_ea1063070  (binary VA: 0x1063070)
// Original: TiXmlComment::ToComment
// ----------------------------------------------------------------------------
TiXmlComment::Self * TiXmlComment::ToComment_ea1063070(TiXmlComment::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlText::ToText  (binary VA: 0x1063080)
// Original: TiXmlText::ToText
// ----------------------------------------------------------------------------
TiXmlText::Self * TiXmlText::ToText(TiXmlText::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlText::ToText_ea1063090  (binary VA: 0x1063090)
// Original: TiXmlText::ToText
// ----------------------------------------------------------------------------
TiXmlText::Self * TiXmlText::ToText_ea1063090(TiXmlText::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDeclaration::Print  (binary VA: 0x10630a0)
// Original: TiXmlDeclaration::Print
// ----------------------------------------------------------------------------
int TiXmlDeclaration::Print(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a1, 72, a2, a3, 0);
}

// ----------------------------------------------------------------------------
// Function: TiXmlDeclaration::ToDeclaration  (binary VA: 0x10630d0)
// Original: TiXmlDeclaration::ToDeclaration
// ----------------------------------------------------------------------------
TiXmlDeclaration::Self * TiXmlDeclaration::ToDeclaration(TiXmlDeclaration::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDeclaration::ToDeclaration_ea10630e0  (binary VA: 0x10630e0)
// Original: TiXmlDeclaration::ToDeclaration
// ----------------------------------------------------------------------------
TiXmlDeclaration::Self * TiXmlDeclaration::ToDeclaration_ea10630e0(TiXmlDeclaration::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlUnknown::ToUnknown  (binary VA: 0x10630f0)
// Original: TiXmlUnknown::ToUnknown
// ----------------------------------------------------------------------------
TiXmlUnknown::Self * TiXmlUnknown::ToUnknown(TiXmlUnknown::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlUnknown::ToUnknown_ea1063100  (binary VA: 0x1063100)
// Original: TiXmlUnknown::ToUnknown
// ----------------------------------------------------------------------------
TiXmlUnknown::Self * TiXmlUnknown::ToUnknown_ea1063100(TiXmlUnknown::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::ToDocument  (binary VA: 0x1063110)
// Original: TiXmlDocument::ToDocument
// ----------------------------------------------------------------------------
TiXmlDocument::Self * TiXmlDocument::ToDocument(TiXmlDocument::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::ToDocument_ea1063120  (binary VA: 0x1063120)
// Original: TiXmlDocument::ToDocument
// ----------------------------------------------------------------------------
TiXmlDocument::Self * TiXmlDocument::ToDocument_ea1063120(TiXmlDocument::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlBase::Destroy_ea1063130  (binary VA: 0x1063130)
// Original: TiXmlBase::~TiXmlBase
// ----------------------------------------------------------------------------
void TiXmlBase::Destroy_ea1063130(TiXmlBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DFD8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlVisitor::Destroy_ea1063160  (binary VA: 0x1063160)
// Original: TiXmlVisitor::~TiXmlVisitor
// ----------------------------------------------------------------------------
void TiXmlVisitor::Destroy_ea1063160(TiXmlVisitor::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DFA8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlPrinter::Destroy  (binary VA: 0x1063190)
// Original: TiXmlPrinter::~TiXmlPrinter
// ----------------------------------------------------------------------------
void TiXmlPrinter::Destroy(TiXmlPrinter::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DF68);
  v1 = *((uint32_t **)self + 5);
  if ( v1 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v1 != nullptr )
    opDeleteArray(*((void **)self + 5));
  v2 = *((uint32_t **)self + 4);
  if ( v2 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v2 != nullptr )
    opDeleteArray(*((void **)self + 4));
  v3 = *((uint32_t **)self + 3);
  if ( v3 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v3 != nullptr )
    opDeleteArray(*((void **)self + 3));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DFA8);
}

// ----------------------------------------------------------------------------
// Function: TiXmlText::Destroy  (binary VA: 0x1063220)
// Original: TiXmlText::~TiXmlText
// ----------------------------------------------------------------------------
void TiXmlText::Destroy(TiXmlText::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DE48);
  TiXmlNode::Destroy((TiXmlNode::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: TiXmlUnknown::Destroy  (binary VA: 0x1063250)
// Original: TiXmlUnknown::~TiXmlUnknown
// ----------------------------------------------------------------------------
void TiXmlUnknown::Destroy(TiXmlUnknown::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DF08);
  TiXmlNode::Destroy((TiXmlNode::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: TiXmlText::Destroy_ea1063280  (binary VA: 0x1063280)
// Original: TiXmlText::~TiXmlText
// ----------------------------------------------------------------------------
void TiXmlText::Destroy_ea1063280(TiXmlText::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DE48);
  TiXmlNode::Destroy((TiXmlNode::Self *)(self));
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlUnknown::Destroy_ea10632d0  (binary VA: 0x10632d0)
// Original: TiXmlUnknown::~TiXmlUnknown
// ----------------------------------------------------------------------------
void TiXmlUnknown::Destroy_ea10632d0(TiXmlUnknown::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DF08);
  TiXmlNode::Destroy((TiXmlNode::Self *)(self));
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlPrinter::Destroy_ea1063320  (binary VA: 0x1063320)
// Original: TiXmlPrinter::~TiXmlPrinter
// ----------------------------------------------------------------------------
void TiXmlPrinter::Destroy_ea1063320(TiXmlPrinter::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DF68);
  v1 = *((uint32_t **)self + 5);
  if ( v1 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v1 != nullptr )
    opDeleteArray(*((void **)self + 5));
  v2 = *((uint32_t **)self + 4);
  if ( v2 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v2 != nullptr )
    opDeleteArray(*((void **)self + 4));
  v3 = *((uint32_t **)self + 3);
  if ( v3 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v3 != nullptr )
    opDeleteArray(*((void **)self + 3));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DFA8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlBase::ConvertUTF32ToUTF8  (binary VA: 0x10633b0)
// Original: TiXmlBase::ConvertUTF32ToUTF8
// ----------------------------------------------------------------------------
char TiXmlBase::ConvertUTF32ToUTF8(unsigned int self, unsigned int a2, char *a3)
{
  unsigned int v3;
  int v4;
  int v5;
  int v6;
  uint32_t v8[10];

  v3 = self;
  v8[0] = 0;
  v8[1] = 0;
  v8[2] = 192;
  v8[3] = 224;
  v8[4] = 240;
  v8[5] = 248;
  v8[6] = 252;
  if ( self > 0x7F )
  {
    if ( self > 0x7FF )
    {
      if ( self <= 0xFFFF )
      {
        *(uint32_t *)a3 = 3;
        v6 = a2 + 3;
      }
      else
      {
        if ( self > 0x1FFFFF )
        {
          *(uint32_t *)a3 = 0;
          return v3;
        }
        *(uint32_t *)a3 = 4;
        v6 = a2 + 3;
        *(uint8_t *)(a2 + 3) = self & 0x3F | 0x80;
        v3 = self >> 6;
      }
      v5 = v6 - 1;
      *(uint8_t *)(v6 - 1) = v3 & 0x3F | 0x80;
      v3 >>= 6;
    }
    else
    {
      *(uint32_t *)a3 = 2;
      v5 = a2 + 2;
    }
    v4 = v5 - 1;
    *(uint8_t *)(v5 - 1) = v3 & 0x3F | 0x80;
    v3 >>= 6;
  }
  else
  {
    *(uint32_t *)a3 = 1;
    v4 = a2 + 1;
  }
  LOBYTE(v3) = LOBYTE(v8[*(uint32_t *)a3]) | v3;
  *(uint8_t *)(v4 - 1) = v3;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: TiXmlBase::IsAlpha  (binary VA: 0x10634c0)
// Original: TiXmlBase::IsAlpha
// ----------------------------------------------------------------------------
int TiXmlBase::IsAlpha(uint8_t a1)
{
  int result;

  result = 1;
  if ( a1 <= 0x7Eu )
    return isalpha(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlBase::IsAlphaNum  (binary VA: 0x10634f0)
// Original: TiXmlBase::IsAlphaNum
// ----------------------------------------------------------------------------
int TiXmlBase::IsAlphaNum(uint8_t a1)
{
  int result;

  result = 1;
  if ( a1 <= 0x7Eu )
    return isalnum(a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlParsingData::Stamp  (binary VA: 0x1063520)
// Original: TiXmlParsingData::Stamp
// ----------------------------------------------------------------------------
int TiXmlParsingData::Stamp(int *a1, unsigned int a2, int a3)
{
  int *v3;
  int result;
  uint8_t *v5;
  int v6;
  uint8_t v7;
  uint8_t v8; // di
  int v9;
  int v10;
  int v11;
  int v12;
  uint8_t v13;

  v3 = a1;
  if ( a2 == 0 )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxmlparser.cpp",
      198,
      "void TiXmlParsingData::Stamp(char const*, TiXmlEncoding)",
      &off_1B673D3);
  result = a1[3];
  if ( result > 0 )
  {
    v5 = (uint8_t *)a1[2];
    v6 = *a1;
    result = a1[1];
    if ( v5 == nullptr )
    {
      v11 = a1[1];
      v12 = *a1;
      __assert2(
        "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxmlparser.cpp",
        210,
        "void TiXmlParsingData::Stamp(char const*, TiXmlEncoding)",
        &unk_1B673D7);
      v6 = v12;
      result = v11;
    }
    if ( a2 > (unsigned int)(uintptr_t)(v5) )
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 == 10 )
        {
          ++v6;
          if ( v5[1] == 13 )
          {
LABEL_33:
            v5 += 2;
            result = 0;
            goto LABEL_13;
          }
          goto LABEL_31;
        }
        if ( v7 > 0xAu )
        {
          if ( v7 == 13 )
          {
            ++v6;
            if ( v5[1] == 10 )
              goto LABEL_33;
LABEL_31:
            ++v5;
            result = 0;
            goto LABEL_13;
          }
          if ( v7 == 0xEF )
          {
            if ( a3 == 1 )
            {
              v8 = v5[1];
              if ( v8 == 0 )
                goto LABEL_13;
              v13 = v5[2];
              if ( v13 == 0 )
                goto LABEL_13;
              if ( v8 != 0xBB )
              {
                if ( v8 != 0xBF )
                {
LABEL_29:
                  v5 += 3;
                  ++result;
                  goto LABEL_13;
                }
                if ( v13 == 0xBE )
                  goto LABEL_40;
              }
              if ( v13 == 0xBF )
              {
LABEL_40:
                v5 += 3;
                goto LABEL_13;
              }
              goto LABEL_29;
            }
            goto LABEL_12;
          }
        }
        else
        {
          if ( v7 == 0 )
            return result;
          if ( v7 == 9 )
          {
            ++v5;
            result = a1[3] * (result / a1[3] + 1);
            goto LABEL_13;
          }
        }
        if ( a3 == 1 )
        {
          v9 = TiXmlBase::utf8ByteTable[v7];
          v10 = 1;
          if ( v9 != 0 )
            v10 = v9;
          ++result;
          v5 += v10;
          goto LABEL_13;
        }
LABEL_12:
        ++v5;
        ++result;
LABEL_13:
        if ( a2 <= (unsigned int)(uintptr_t)(v5) )
        {
          v3 = a1;
          break;
        }
      }
    }
    *v3 = v6;
    v3[1] = result;
    if ( v6 < -1 )
    {
      __assert2(
        "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxmlparser.cpp",
        307,
        "void TiXmlParsingData::Stamp(char const*, TiXmlEncoding)",
        "cursor.row >= -1");
      result = v3[1];
    }
    if ( result < -1 )
      __assert2(
                 "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxmlparser.cpp",
                 308,
                 "void TiXmlParsingData::Stamp(char const*, TiXmlEncoding)",
                 "cursor.col >= -1");
    v3[2] = (int)(uintptr_t)(v5);
    if ( v5 == nullptr )
      return ((__assert2(
               "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxmlparser.cpp",
               310,
               "void TiXmlParsingData::Stamp(char const*, TiXmlEncoding)",
               "stamp")), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlBase::SkipWhiteSpace  (binary VA: 0x10637b0)
// Original: TiXmlBase::SkipWhiteSpace
// ----------------------------------------------------------------------------
uint8_t * TiXmlBase::SkipWhiteSpace(uint8_t *a1, int a2)
{
  uint8_t *v2;
  uint8_t v3;
  int v4;
  uint8_t v6;
  uint8_t v7;
  uint8_t v8;
  uint8_t v9;

  v2 = a1;
  if ( a1 == nullptr )
    return v2;
  v3 = *a1;
  if ( *a1 == 0 )
    return nullptr;
  if ( a2 != 1 )
  {
    do
    {
      v8 = v3;
      v4 = isspace(v3);
      if ( v8 != 10 && v4 == 0 && v8 != 13 )
        break;
      v3 = *++v2;
    }
    while ( *v2 != 0 );
    return v2;
  }
  while ( 1 )
  {
    if ( v3 == 0xEF )
    {
      v6 = v2[1];
      if ( v6 == 0xBB )
      {
        if ( v2[2] == 0xBF )
          goto LABEL_21;
      }
      else if ( v6 == 0xBF )
      {
        v7 = v2[2];
        if ( v7 == 0xBE || v7 == 0xBF )
        {
LABEL_21:
          v2 += 3;
          goto LABEL_9;
        }
      }
    }
    v9 = v3;
    if ( isspace(v3) == 0 && v9 != 10 && v9 != 13 )
      return v2;
    ++v2;
LABEL_9:
    v3 = *v2;
    if ( *v2 == 0 )
      return v2;
  }
}

// ----------------------------------------------------------------------------
// Function: TiXmlBase::ReadName  (binary VA: 0x1063890)
// Original: TiXmlBase::ReadName
// ----------------------------------------------------------------------------
char * TiXmlBase::ReadName(char *a1, TiXmlString::Self *a2)
{
  char *v2;
  bool v4;
  char v5;
  signed int v6;
  char v7;

  TiXmlString::assign(a2, (const char *)&unk_1B15112, 0);
  if ( a1 == nullptr )
  {
    v2 = nullptr;
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxmlparser.cpp",
      407,
      "static char const* TiXmlBase::ReadName(char const*, TiXmlString*, TiXmlEncoding)",
      &unk_1B673D7);
    return v2;
  }
  v2 = nullptr;
  if ( *a1 == 0 )
    return v2;
  v4 = TiXmlBase::IsAlpha(*a1) == 0;
  v5 = *a1;
  if ( v4 )
  {
    if ( v5 != 95 )
      return v2;
  }
  else if ( v5 == 0 )
  {
    return a1;
  }
  v2 = a1;
  while ( 1 )
  {
    if ( TiXmlBase::IsAlphaNum(v5) == 0 )
    {
      v7 = *v2;
      if ( *v2 != 95 && v7 != 45 && v7 != 46 && v7 != 58 )
      {
LABEL_12:
        v6 = v2 - a1;
        goto LABEL_13;
      }
    }
    if ( ++v2 == nullptr )
      break;
    v5 = *v2;
    if ( *v2 == 0 )
      goto LABEL_12;
  }
  v6 = -(int)(uintptr_t)(a1);
LABEL_13:
  if ( v6 <= 0 )
    return v2;
  TiXmlString::assign(a2, a1, v6);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: TiXmlBase::GetEntity  (binary VA: 0x10639c0)
// Original: TiXmlBase::GetEntity
// ----------------------------------------------------------------------------
char * TiXmlBase::GetEntity(char *s2, uint8_t *a2, char *a3, int a4)
{
  size_t v4;
  int v5;
  const char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  char *v11;
  char v13;
  char *v14;
  char v15;
  char *v16;
  int v17;
  unsigned int v18;
  char *v19;
  char v20;
  char *v21;
  int v22;
  char **v23;
  TiXmlBase::Self *v24;
  char *s;
  char *sa;
  char *sb;
  char *sc;
  char *sd;
  int v30;
  int v31;

  *(uint32_t *)a3 = 0;
  if ( s2[1] == 35 )
  {
    v13 = s2[2];
    if ( v13 != 0 )
    {
      if ( v13 == 120 )
      {
        v11 = nullptr;
        if ( s2[3] == 0 )
          return v11;
        v19 = strchr(s2 + 3, 59);
        if ( v19 == nullptr || *v19 == 0 )
          return v11;
        v20 = *(v19 - 1);
        v30 = v19 - s2;
        if ( v20 != 120 )
        {
          v21 = v19 - 1;
          v22 = 1;
          do
          {
            if ( (uint8_t)(v20 - 48) <= 9u )
            {
              v11 += v22 * (v20 - 48);
            }
            else if ( (uint8_t)(v20 - 97) > 5u )
            {
              if ( (uint8_t)(v20 - 65) > 5u )
                return nullptr;
              v11 += v22 * (v20 - 55);
            }
            else
            {
              v11 += v22 * (v20 - 87);
            }
            v20 = *--v21;
            v22 *= 16;
          }
          while ( *v21 != 120 );
          v18 = (unsigned int)(uintptr_t)(v11);
          goto LABEL_19;
        }
      }
      else
      {
        v11 = nullptr;
        v14 = strchr(s2 + 2, 59);
        if ( v14 == nullptr || *v14 == 0 )
          return v11;
        v30 = v14 - s2;
        v15 = *(v14 - 1);
        if ( v15 != 35 )
        {
          if ( (uint8_t)(v15 - 48) <= 9u )
          {
            v16 = v14 - 1;
            v24 = nullptr;
            v17 = 1;
            while ( 1 )
            {
              --v16;
              v24 = (TiXmlBase::Self *)((char *)v24 + v17 * (v15 - 48));
              v15 = *v16;
              v17 *= 10;
              if ( *v16 == 35 )
                break;
              if ( (uint8_t)(v15 - 48) > 9u )
                return nullptr;
            }
            v18 = (unsigned int)(uintptr_t)(v24);
            goto LABEL_19;
          }
          return v11;
        }
      }
      v18 = 0;
LABEL_19:
      if ( a4 == 1 )
      {
        TiXmlBase::ConvertUTF32ToUTF8(v18, (unsigned int)(uintptr_t)(a2), a3);
      }
      else
      {
        *a2 = v18;
        *(uint32_t *)a3 = 1;
      }
      return &s2[v30 + 1];
    }
  }
  v4 = dword_20C3D44[0];
  s = (char *)(uintptr_t)(TiXmlBase::entity);
  v5 = strncmp(TiXmlBase::entity, s2, dword_20C3D44[0]);
  v6 = s;
  if ( v5 != 0 )
  {
    v4 = dword_20C3D50[0];
    sa = (char *)(uintptr_t)(off_20C3D4C);
    v7 = strncmp(off_20C3D4C, s2, dword_20C3D50[0]);
    v6 = sa;
    if ( v7 != 0 )
    {
      v4 = dword_20C3D5C[0];
      sb = (char *)(uintptr_t)(off_20C3D58);
      v8 = strncmp(off_20C3D58, s2, dword_20C3D5C[0]);
      v6 = sb;
      if ( v8 != 0 )
      {
        v4 = dword_20C3D68[0];
        sc = (char *)(uintptr_t)(off_20C3D64);
        v9 = strncmp(off_20C3D64, s2, dword_20C3D68[0]);
        v6 = sc;
        if ( v9 != 0 )
        {
          v4 = dword_20C3D74[0];
          sd = (char *)(uintptr_t)(off_20C3D70);
          v10 = strncmp(off_20C3D70, s2, dword_20C3D74[0]);
          v6 = sd;
          if ( v10 != 0 )
          {
            v11 = s2 + 1;
            *a2 = *s2;
            return v11;
          }
          v31 = 4;
        }
        else
        {
          v31 = 3;
        }
      }
      else
      {
        v31 = 2;
      }
    }
    else
    {
      v31 = 1;
    }
  }
  else
  {
    v31 = 0;
  }
  if ( strlen(v6) != v4 )
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxmlparser.cpp",
      519,
      "static char const* TiXmlBase::GetEntity(char const*, char*, int*, TiXmlEncoding)",
      "strlen( entity[i].str ) == entity[i].strLength");
  v23 = (char **)(&(&TiXmlBase::entity)[3 * v31]);
  *a2 = *((uint8_t *)v23 + 8);
  *(uint32_t *)a3 = 1;
  return &v23[1][(uint32_t)(uintptr_t)(s2)];
}

// ----------------------------------------------------------------------------
// Function: TiXmlBase::StringEqual  (binary VA: 0x1063d20)
// Original: TiXmlBase::StringEqual
// ----------------------------------------------------------------------------
char TiXmlBase::StringEqual(uint8_t *a1, char *a2, char a3, int a4)
{
  uint8_t *v4;
  char *v5;
  char v6;
  char v7;
  char v8;
  char result;
  uint8_t *v10;
  int v11;
  int v12;
  char v13;
  char v14;
  char v15;
  char v16;

  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( a1 == nullptr )
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxmlparser.cpp",
      539,
      "static bool TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)",
      &unk_1B673D7);
    v6 = a3;
  }
  if ( a2 == nullptr )
  {
    v16 = v6;
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxmlparser.cpp",
      540,
      "static bool TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)",
      "tag");
    v6 = v16;
  }
  if ( a1 != nullptr && (v7 = *a1, *a1 != 0) )
  {
    v8 = *a2;
    if ( v6 != 0 )
    {
      result = 1;
      if ( v8 != 0 )
      {
        v10 = a1;
        if ( a4 != 1 )
        {
          while ( 1 )
          {
            v14 = v8;
            v11 = tolower(v7);
            if ( v11 != tolower(v14) )
              break;
            v7 = v10[1];
            ++v5;
            if ( v7 == 0 )
              break;
            v8 = *v5;
            ++v10;
            if ( *v5 == 0 )
              return 1;
          }
          return *v5 == 0;
        }
        while ( 1 )
        {
          v15 = v8;
          v12 = tolower(v7);
          if ( v12 != tolower(v15) )
            break;
          v7 = v10[1];
          ++v5;
          if ( v7 == 0 )
            return *v5 == 0;
          v8 = *v5;
          ++v10;
          if ( *v5 == 0 )
            return 1;
        }
        return *v5 == 0;
      }
    }
    else if ( v8 != 0 )
    {
      result = 0;
      if ( v7 == v8 )
      {
        while ( 1 )
        {
          v13 = v4[1];
          ++v5;
          if ( v13 == 0 )
            break;
          if ( *v5 == 0 )
            return 1;
          ++v4;
          if ( v13 != *v5 )
            return 0;
        }
        return *v5 == 0;
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    __assert2(
      "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxmlparser.cpp",
      543,
      "static bool TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)",
      &a0[2]);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlBase::ReadText  (binary VA: 0x1063f20)
// Original: TiXmlBase::ReadText
// ----------------------------------------------------------------------------
char * TiXmlBase::ReadText(char *a1, TiXmlString::Self *a2, char a3, char *s, char a5, int a6)
{
  char *Entity;
  char j;
  signed int v9;
  char v10;
  int v11;
  int v12;
  char *v13;
  char v14; // di
  char i;
  int v16;
  char *v17;
  uint8_t v18;
  char v19;
  int v20;
  int v21;
  typedef size_t _g4_t_v22;
  typedef char _g4_t_v23;
  typedef char _g4_t_v24[16];
  typedef char _g4_t_v25[28];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (47u + sizeof(_g4_t_v23)) > _g4_s1 ? (47u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v24)) > _g4_s2 ? (48u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v25)) > _g4_s3 ? (64u + sizeof(_g4_t_v25)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 47u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);

  Entity = a1;
  TiXmlString::assign(a2, (const char *)&unk_1B15112, 0);
  if ( a3 != 0 && TiXmlBase::condenseWhiteSpace != 0 )
  {
    v13 = (char *)TiXmlBase::SkipWhiteSpace((uint8_t *)(a1), a6);
    Entity = v13;
    if ( v13 == nullptr )
      return Entity;
    if ( *v13 == 0 )
    {
LABEL_5:
      if ( Entity != nullptr )
        Entity += strlen(s);
      return Entity;
    }
    v14 = 0;
    for ( i = TiXmlBase::StringEqual((uint8_t *)(v13), s, a5, a6); ; i = TiXmlBase::StringEqual((uint8_t *)(Entity), s, a5, a6) )
    {
      if ( i != 0 )
        goto LABEL_5;
      v18 = *Entity;
      if ( *Entity != 10 && v18 != 13 && isspace(v18) == 0 )
        break;
      ++Entity;
      v14 = 1;
LABEL_42:
      if ( Entity == nullptr )
        return Entity;
      if ( *Entity == 0 )
        goto LABEL_5;
    }
    if ( v14 != 0 )
    {
      v23 = 32;
      TiXmlString::append(a2, &v23, 1u);
    }
    v25[0] = 0;
    v25[1] = 0;
    v25[2] = 0;
    v25[3] = 0;
    if ( a6 == 1 )
    {
      *(uint32_t *)v24 = TiXmlBase::utf8ByteTable[(uint8_t)*Entity];
      v16 = *(uint32_t *)v24;
      if ( *(uint32_t *)v24 > 4u )
      {
        __assert2(
          "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.h",
          334,
          "static char const* TiXmlBase::GetChar(char const*, char*, int*, TiXmlEncoding)",
          "*length >= 0 && *length < 5");
        v16 = *(uint32_t *)v24;
      }
      if ( v16 != 1 )
      {
        if ( v16 != 0 )
        {
          v19 = *Entity;
          if ( *Entity != 0 )
          {
            v20 = 0;
            v21 = 0;
            if ( v16 > 0 )
            {
              do
              {
                ++v21;
                v25[v20] = v19;
                v19 = Entity[v21];
                v20 = v21;
              }
              while ( v19 != 0 && v21 != v16 );
            }
          }
          Entity += v16;
          v22 = v16;
          v17 = v25;
          goto LABEL_41;
        }
        Entity = nullptr;
        goto LABEL_51;
      }
    }
    else
    {
      *(uint32_t *)v24 = 1;
    }
    if ( *Entity == 38 )
      Entity = (char *)TiXmlBase::GetEntity(Entity, (uint8_t *)(uintptr_t)((unsigned int)(uintptr_t)(v25)), v24, a6);
    else
      v25[0] = *Entity++;
    v16 = *(uint32_t *)v24;
    if ( *(uint32_t *)v24 == 1 )
    {
      v22 = 1;
      v23 = v25[0];
      v17 = &v23;
LABEL_41:
      v14 = 0;
      TiXmlString::append(a2, v17, v22);
      goto LABEL_42;
    }
LABEL_51:
    v22 = v16;
    v17 = v25;
    goto LABEL_41;
  }
  if ( a1 != nullptr )
  {
    if ( *a1 == 0 )
      goto LABEL_5;
    for ( j = TiXmlBase::StringEqual(a1, s, a5, a6); ; j = TiXmlBase::StringEqual(Entity, s, a5, a6) )
    {
      if ( j != 0 )
        goto LABEL_5;
      v25[0] = 0;
      v25[1] = 0;
      v25[2] = 0;
      v25[3] = 0;
      if ( a6 != 1 )
        break;
      *(uint32_t *)v24 = TiXmlBase::utf8ByteTable[(uint8_t)*Entity];
      v9 = *(uint32_t *)v24;
      if ( *(uint32_t *)v24 > 4u )
      {
        __assert2(
          "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxml.h",
          334,
          "static char const* TiXmlBase::GetChar(char const*, char*, int*, TiXmlEncoding)",
          "*length >= 0 && *length < 5");
        v9 = *(uint32_t *)v24;
      }
      if ( v9 == 1 )
        goto LABEL_14;
      if ( v9 == 0 )
      {
        TiXmlString::append(a2, v25, 0);
        return nullptr;
      }
      v10 = *Entity;
      if ( *Entity != 0 )
      {
        v11 = 0;
        v12 = 0;
        if ( v9 > 0 )
        {
          do
          {
            ++v12;
            v25[v11] = v10;
            v10 = Entity[v12];
            v11 = v12;
          }
          while ( v10 != 0 && v12 != v9 );
        }
      }
      Entity += v9;
LABEL_17:
      TiXmlString::append(a2, v25, v9);
      if ( Entity == nullptr )
        return nullptr;
      if ( *Entity == 0 )
        goto LABEL_5;
    }
    *(uint32_t *)v24 = 1;
LABEL_14:
    if ( *Entity == 38 )
      Entity = (char *)TiXmlBase::GetEntity(Entity, (unsigned int)(uintptr_t)(v25), v24, a6);
    else
      v25[0] = *Entity++;
    v9 = *(uint32_t *)v24;
    goto LABEL_17;
  }
  return Entity;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::SetError  (binary VA: 0x1064300)
// Original: TiXmlDocument::SetError
// ----------------------------------------------------------------------------
void TiXmlDocument::SetError(int a1, int a2, unsigned int a3, int *a4, int a5)
{
  const char *s;
  size_t v6;
  int v7;

  if ( *(uint8_t *)(a1 + 44) == 0 )
  {
    if ( (unsigned int)(a2 - 1) > 0xF )
      __assert2(
        "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxmlparser.cpp",
        804,
        "void TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)",
        "err > 0 && err < TIXML_ERROR_STRING_COUNT");
    *(uint8_t *)(a1 + 44) = 1;
    *(uint32_t *)(a1 + 48) = a2;
    s = (const char *)(uintptr_t)(TiXmlBase::errorString[a2]);
    v6 = strlen(s);
    TiXmlString::assign((TiXmlString::Self *)(a1 + 52), s, v6);
    *(uint32_t *)(a1 + 64) = -1;
    *(uint32_t *)(a1 + 60) = -1;
    if ( a4 != nullptr && a3 != 0 )
    {
      TiXmlParsingData::Stamp(a4, a3, a5);
      v7 = *a4;
      *(uint32_t *)(a1 + 64) = a4[1];
      *(uint32_t *)(a1 + 60) = v7;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttribute::Parse  (binary VA: 0x10643f0)
// Original: TiXmlAttribute::Parse
// ----------------------------------------------------------------------------
char * TiXmlAttribute::Parse(uint32_t *a1, uint8_t *a2, int *a3, int a4)
{
  int *v4;
  uint8_t *v5;
  char *v6;
  int v7;
  uint8_t *Name;
  int v9;
  uint8_t *v11;
  int v12;
  uint8_t *v13;
  uint8_t v14;
  uint8_t v15;
  int v16;
  typedef size_t _g4_t_v18;
  typedef uint8_t _g4_t_v19;
  typedef char _g4_t_v20[13];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v19)) > _g4_s1 ? (40u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (63u + sizeof(_g4_t_v20)) > _g4_s2 ? (63u + sizeof(_g4_t_v20)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 63u);

  v4 = a3;
  v5 = TiXmlBase::SkipWhiteSpace(a2, a4);
  v6 = (char *)v5;
  if ( v5 == nullptr )
    return v6;
  if ( *v5 == 0 )
    return nullptr;
  if ( a3 != nullptr )
  {
    TiXmlParsingData::Stamp(a3, (unsigned int)(uintptr_t)(v5), a4);
    v7 = *a3;
    a1[2] = a3[1];
    a1[1] = v7;
  }
  Name = (uint8_t *)TiXmlBase::ReadName(v6, (TiXmlString::Self *)(a1 + 5));
  if ( Name == nullptr || *Name == 0 )
  {
LABEL_7:
    v9 = a1[4];
    if ( v9 != 0 )
    {
LABEL_8:
      v18 = (size_t)v6;
      v6 = nullptr;
      TiXmlDocument::SetError(v9, 7, v18, v4, a4);
      return v6;
    }
    return nullptr;
  }
  v11 = TiXmlBase::SkipWhiteSpace(Name, a4);
  if ( v11 == nullptr || *v11 != 61 )
  {
    v6 = nullptr;
    v12 = a1[4];
    if ( v12 != 0 )
      TiXmlDocument::SetError(v12, 7, (unsigned int)(uintptr_t)(v11), a3, a4);
    return v6;
  }
  v13 = TiXmlBase::SkipWhiteSpace(v11 + 1, a4);
  v6 = (char *)v13;
  if ( v13 == nullptr )
    goto LABEL_7;
  v14 = *v13;
  switch ( v14 )
  {
    case 0u:
      goto LABEL_7;
    case '\'':
      return TiXmlBase::ReadText(v6 + 1, (TiXmlString::Self *)(a1 + 6), 0, (char *)a0, 0, a4);
    case '"':
      return TiXmlBase::ReadText(v6 + 1, (TiXmlString::Self *)(a1 + 6), 0, "\"", 0, a4);
    default:
      break;
  }
  TiXmlString::assign((TiXmlString::Self *)(a1 + 6), (const char *)&unk_1B15112, 0);
  v15 = *v6;
  if ( *v6 != 0 )
  {
    while ( 1 )
    {
      v19 = v15;
      v16 = isspace(v15);
      if ( v19 == 10 || v16 != 0 || v19 == 13 || v19 == 47 || v19 == 62 )
        break;
      if ( *v6 == 34 || *v6 == 39 )
      {
        v4 = a3;
        v9 = a1[4];
        if ( v9 != 0 )
          goto LABEL_8;
        return nullptr;
      }
      v20[0] = *v6;
      TiXmlString::append((TiXmlString::Self *)(a1 + 6), v20, 1u);
      if ( ++v6 != nullptr )
      {
        v15 = *v6;
        if ( *v6 != 0 )
          continue;
      }
      return v6;
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: TiXmlNode::Identify  (binary VA: 0x1064660)
// Original: TiXmlNode::Identify
// ----------------------------------------------------------------------------
int TiXmlNode::Identify(TiXmlNode::Self *a1, uint8_t *a2, int a3)
{
  uint8_t *v3;
  int v4;
  uint8_t *v5;
  uint8_t *v6;
  uint8_t *v7;
  int Document;

  v3 = TiXmlBase::SkipWhiteSpace(a2, a3);
  v4 = 0;
  v5 = v3;
  if ( v3 != nullptr && *v3 == 60 )
  {
    Document = TiXmlNode::GetDocument(a1);
    v6 = TiXmlBase::SkipWhiteSpace(v5, a3);
    v7 = v6;
    if ( v6 != nullptr && *v6 != 0 )
    {
      if ( TiXmlBase::StringEqual(v6, "<?xml", 1, a3) != 0 )
      {
        v4 = opNew(0x3Cu);
        TiXmlNode::Construct((uint32_t *)v4, 5);
        *(uint8_t *)(v4 + 56) = 1;
        *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_208DEA8);
        *(uint32_t *)(v4 + 44) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
        *(uint32_t *)(v4 + 48) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
        *(uint32_t *)(v4 + 52) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
      }
      else if ( TiXmlBase::StringEqual(v7, "<!--", 0, a3) != 0 )
      {
        v4 = opNew(0x30u);
        TiXmlNode::Construct((uint32_t *)v4, 2);
        *(uint8_t *)(v4 + 44) = 1;
        *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_208DDE8);
      }
      else if ( TiXmlBase::StringEqual(v7, "<![CDATA[", 0, a3) != 0 )
      {
        v4 = opNew(0x30u);
        TiXmlNode::Construct((uint32_t *)v4, 4);
        *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_208DE48);
        TiXmlString::assign((TiXmlString::Self *)(v4 + 32), (const char *)&unk_1B15112, 0);
        *(uint8_t *)(v4 + 45) = 0;
        *(uint8_t *)(v4 + 44) = 1;
      }
      else if ( TiXmlBase::StringEqual(v7, "<!", 0, a3) == 0 && (TiXmlBase::IsAlpha(v7[1]) != 0 || v7[1] == 95) )
      {
        v4 = opNew(0x54u);
        TiXmlElement::Construct((TiXmlElement::Self *)v4, (char *)&unk_1B15112, true);
      }
      else
      {
        v4 = opNew(0x2Cu);
        TiXmlNode::Construct((uint32_t *)v4, 3);
        *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_208DF08);
      }
      if ( v4 != 0 )
      {
        *(uint32_t *)(v4 + 16) = (uint32_t)(uintptr_t)(a1);
      }
      else if ( Document != 0 )
      {
        TiXmlDocument::SetError(Document, 3, 0, nullptr, 0);
      }
    }
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDocument::Parse  (binary VA: 0x1064910)
// Original: TiXmlDocument::Parse
// ----------------------------------------------------------------------------
uint8_t * TiXmlDocument::Parse(int a1, uint8_t *a2, int *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint8_t *v9;
  uint8_t *v10;
  int v11;
  uint8_t *v12;
  int v13;
  TiXmlNode::Self *v14;
  uint8_t *v15;
  uint8_t *v16;
  int v18;
  uint8_t *v19;
  uint32_t v20[11];

  v4 = a1;
  v5 = a4;
  *(uint8_t *)(a1 + 44) = 0;
  *(uint32_t *)(a1 + 48) = 0;
  TiXmlString::assign((TiXmlString::Self *)(a1 + 52), (const char *)&unk_1B15112, 0);
  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 60) = 0;
  if ( a2 != nullptr && *a2 != 0 )
  {
    *(uint32_t *)(a1 + 8) = -1;
    *(uint32_t *)(a1 + 4) = -1;
    if ( a3 != nullptr )
    {
      v6 = *a3;
      *(uint32_t *)(a1 + 4) = *a3;
      v7 = a3[1];
      *(uint32_t *)(a1 + 8) = v7;
    }
    else
    {
      *(uint32_t *)(a1 + 4) = 0;
      *(uint32_t *)(a1 + 8) = 0;
      v6 = 0;
      v7 = 0;
    }
    v8 = *(uint32_t *)(a1 + 56);
    v20[1] = v7;
    v20[3] = v8;
    v20[0] = v6;
    v20[2] = (uint32_t)(uintptr_t)(a2);
    *(uint32_t *)(a1 + 4) = v6;
    *(uint32_t *)(a1 + 8) = v7;
    if ( a4 == 0 && *a2 == 0xEF && a2[1] == 0xBB && a2[2] == 0xBF )
    {
      *(uint8_t *)(a1 + 68) = 1;
      LOWORD(v5) = 1;
    }
    v9 = TiXmlBase::SkipWhiteSpace(a2, v5);
    v10 = v9;
    if ( v9 == nullptr )
    {
      TiXmlDocument::SetError(a1, 13, 0, nullptr, 0);
      return nullptr;
    }
    if ( *v9 != 0 )
    {
      v11 = v5;
      v12 = v9;
      do
      {
        v13 = TiXmlNode::Identify((TiXmlNode::Self *)a1, v12, v11);
        v14 = (TiXmlNode::Self *)v13;
        if ( v13 == 0 )
          break;
        v15 = (uint8_t *)G4_VCALL<int>(v13, 12, v12, v20, v11);
        TiXmlNode::LinkEndChild((TiXmlNode::Self *)a1, v14);
        if ( v11 == 0 && G4_VCALL<int>(v14, 60) != 0 )
        {
          v18 = *(uint32_t *)(G4_VCALL<int>(v14, 60) + 48);
          v19 = (uint8_t *)(v18 + 8);
          if ( v18 == -8 )
          {
            __assert2(
              "F:/G4/G4_UP8Shop/lib/tinyxml/tinyxmlparser.cpp",
              773,
              "virtual char const* TiXmlDocument::Parse(char const*, TiXmlParsingData*, TiXmlEncoding)",
              &off_1B67426);
            v18 = -8;
          }
          v11 = 1;
          if ( *(uint8_t *)(v18 + 8) != 0 && TiXmlBase::StringEqual(v19, "UTF-8", 1, 0) == 0 )
            v11 = 2 - (TiXmlBase::StringEqual(v19, "UTF8", 1, 0) != 0);
        }
        v16 = TiXmlBase::SkipWhiteSpace(v15, v11);
        v12 = v16;
        if ( v16 == nullptr )
          break;
      }
      while ( *v16 != 0 );
      v10 = v12;
      v5 = v11;
      v4 = a1;
    }
    if ( *(uint32_t *)(v4 + 24) != 0 )
      return v10;
    TiXmlDocument::SetError(v4, 13, 0, nullptr, v5);
  }
  else
  {
    TiXmlDocument::SetError(a1, 13, 0, nullptr, 0);
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: TiXmlUnknown::Parse  (binary VA: 0x1064c00)
// Original: TiXmlUnknown::Parse
// ----------------------------------------------------------------------------
char * TiXmlUnknown::Parse(uint32_t *a1, uint8_t *a2, int *a3, int a4)
{
  int Document;
  uint8_t *v5;
  uint8_t *v6;
  int v7;
  char *v8;
  uint8_t v10;
  char *v11;
  char v12[13];

  Document = TiXmlNode::GetDocument((TiXmlNode::Self *)a1);
  v5 = TiXmlBase::SkipWhiteSpace(a2, a4);
  v6 = v5;
  if ( a3 != nullptr )
  {
    TiXmlParsingData::Stamp(a3, (unsigned int)(uintptr_t)(v5), a4);
    v7 = *a3;
    a1[2] = a3[1];
    a1[1] = v7;
  }
  if ( v6 != nullptr && *v6 == 60 )
  {
    TiXmlString::assign((TiXmlString::Self *)(a1 + 8), (const char *)&unk_1B15112, 0);
    v8 = (char *)(v6 + 1);
    if ( v6 != (uint8_t *)-1 )
    {
      v10 = v6[1];
      if ( v10 == 0 )
        return v8;
      if ( v10 == 62 )
        return ++v8;
      v11 = (char *)(v6 + 1);
      while ( 1 )
      {
        v12[0] = *v11;
        TiXmlString::append((TiXmlString::Self *)(a1 + 8), v12, 1u);
        if ( ++v11 == nullptr )
          break;
        if ( *v11 == 0 )
          return v11;
        if ( *v11 == 62 )
        {
          v8 = v11;
          return ++v8;
        }
      }
    }
    if ( Document != 0 )
      TiXmlDocument::SetError(Document, 10, 0, nullptr, a4);
    return nullptr;
  }
  else
  {
    v8 = nullptr;
    if ( Document != 0 )
    {
      TiXmlDocument::SetError(Document, 10, (unsigned int)(uintptr_t)(v6), a3, a4);
      return nullptr;
    }
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: TiXmlComment::Parse  (binary VA: 0x1064da0)
// Original: TiXmlComment::Parse
// ----------------------------------------------------------------------------
char * TiXmlComment::Parse(TiXmlNode::Self *a1, uint8_t *a2, int *a3, int a4)
{
  TiXmlString::Self *v4;
  uint8_t *v5;
  int v6;
  char *v7;
  char *v9;
  int Document;

  v4 = (TiXmlString::Self *)((TiXmlNode::Self *)((char *)a1 + 32));
  Document = TiXmlNode::GetDocument(a1);
  TiXmlString::assign((TiXmlNode::Self *)((char *)a1 + 32), (const char *)&unk_1B15112, 0);
  v5 = TiXmlBase::SkipWhiteSpace(a2, a4);
  if ( a3 != nullptr )
  {
    TiXmlParsingData::Stamp(a3, (unsigned int)(uintptr_t)(v5), a4);
    v6 = a3[1];
    *((uint32_t *)a1 + 1) = *a3;
    *((uint32_t *)a1 + 2) = v6;
  }
  if ( TiXmlBase::StringEqual(v5, "<!--", 0, a4) != 0 )
  {
    TiXmlString::assign(v4, (const char *)&unk_1B15112, 0);
    v7 = (char *)(v5 + 4);
    if ( v5 != (uint8_t *)-4 )
    {
      if ( v5[4] != 0 )
      {
        v9 = (char *)(v5 + 4);
        while ( 1 )
        {
          if ( TiXmlBase::StringEqual(v9, "-->", 0, a4) != 0 )
          {
LABEL_12:
            v7 = v9;
            goto LABEL_6;
          }
          TiXmlString::append(v4, v9++, 1u);
          if ( v9 == nullptr )
            return nullptr;
          if ( *v9 == 0 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_6:
        v7 += 3;
      }
    }
    return v7;
  }
  else
  {
    TiXmlDocument::SetError(Document, 11, (unsigned int)(uintptr_t)(v5), a3, a4);
    return nullptr;
  }
}

// ----------------------------------------------------------------------------
// Function: TiXmlText::Parse  (binary VA: 0x1064f20)
// Original: TiXmlText::Parse
// ----------------------------------------------------------------------------
char * TiXmlText::Parse(TiXmlNode::Self *a1, char *a2, int *a3, int a4)
{
  int v4;
  char *v5;
  char *result;
  char *Text;
  typedef char *_g4_t_v8;
  typedef TiXmlString::Self *_g4_t_v9;
  typedef int _g4_t_Document;
  typedef char _g4_t_v11;
  typedef void *_g4_t_v12;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_Document)) > _g4_s2 ? (12u + sizeof(_g4_t_Document)) : _g4_s2,
    _g4_s4 = (27u + sizeof(_g4_t_v11)) > _g4_s3 ? (27u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_Document &Document = *reinterpret_cast<_g4_t_Document *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 27u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v9 = (TiXmlString::Self *)((TiXmlNode::Self *)((char *)a1 + 32));
  TiXmlString::assign((TiXmlNode::Self *)((char *)a1 + 32), (const char *)&unk_1B15112, 0);
  Document = TiXmlNode::GetDocument(a1);
  if ( a3 != nullptr )
  {
    TiXmlParsingData::Stamp(a3, (unsigned int)(uintptr_t)(a2), a4);
    v4 = *a3;
    *((uint32_t *)a1 + 2) = a3[1];
    *((uint32_t *)a1 + 1) = v4;
  }
  if ( *((uint8_t *)a1 + 44) != 0 || TiXmlBase::StringEqual(a2, "<![CDATA[", 0, a4) != 0 )
  {
    *((uint8_t *)a1 + 44) = 1;
    if ( TiXmlBase::StringEqual(a2, "<![CDATA[", 0, a4) != 0 )
    {
      v5 = a2 + 9;
      if ( a2 != (char *)-9 && a2[9] != 0 )
      {
        do
        {
          if ( TiXmlBase::StringEqual(v5, "]]>", 0, a4) != 0 )
            break;
          v11 = *v5;
          TiXmlString::append(v9, &v11, 1u);
          if ( ++v5 == nullptr )
            break;
        }
        while ( *v5 != 0 );
      }
      v12 = TiXmlString::nullrep_;
      result = TiXmlBase::ReadText(v5, (TiXmlString::Self *)&v12, 0, "]]>", 0, a4);
      if ( v12 != TiXmlString::nullrep_ && v12 != nullptr )
      {
        v8 = result;
        opDeleteArray(v12);
        return v8;
      }
    }
    else
    {
      TiXmlDocument::SetError(Document, 15, (unsigned int)(uintptr_t)(a2), a3, a4);
      return nullptr;
    }
  }
  else
  {
    Text = TiXmlBase::ReadText(a2, v9, 1, "<", 0, a4);
    return &Text[(Text == nullptr) - 1];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlDeclaration::Parse  (binary VA: 0x1065150)
// Original: TiXmlDeclaration::Parse
// ----------------------------------------------------------------------------
uint8_t * TiXmlDeclaration::Parse(TiXmlNode::Self *a1, uint8_t *a2, int *a3, int a4)
{
  int Document;
  int v5;
  uint8_t *v6;
  char v8;
  uint8_t *v9;
  TiXmlNode::Self *v10;
  int v11;
  uint8_t v12;
  char *v13;
  uint8_t v14;
  int v15;
  size_t v16;
  typedef size_t _g4_t_v17;
  typedef size_t _g4_t_v18;
  typedef uint8_t *_g4_t_v19;
  typedef uint8_t *_g4_t_v20;
  typedef uint8_t _g4_t_v21;
  typedef const char *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef const char *_g4_t_v24;
  typedef const char *_g4_t_v25;
  typedef uint32_t _g4_t_v26[5];
  typedef uint32_t *_g4_t_v27;
  typedef const char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v19)) > _g4_s2 ? (40u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v20)) > _g4_s3 ? (40u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v21)) > _g4_s4 ? (40u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v22)) > _g4_s5 ? (40u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v23)) > _g4_s6 ? (44u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v24)) > _g4_s7 ? (44u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v25)) > _g4_s8 ? (44u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v26)) > _g4_s9 ? (80u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v27)) > _g4_s10 ? (100u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v28)) > _g4_s11 ? (104u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_v29)) > _g4_s12 ? (108u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v30)) > _g4_s13 ? (112u + sizeof(_g4_t_v30)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 100u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 104u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 108u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);

  v19 = TiXmlBase::SkipWhiteSpace(a2, a4);
  Document = TiXmlNode::GetDocument(a1);
  v5 = Document;
  if ( v19 == nullptr
    || *v19 == 0
    || (v23 = Document, v8 = TiXmlBase::StringEqual(v19, "<?xml", 1, a4), v9 = v19, v5 = v23, v8 == 0) )
  {
    v6 = nullptr;
    if ( v5 != 0 )
      TiXmlDocument::SetError(v5, 12, 0, nullptr, a4);
    return v6;
  }
  v10 = a1;
  if ( a3 != nullptr )
  {
    TiXmlParsingData::Stamp(a3, (unsigned int)(uintptr_t)(v19), a4);
    v11 = *a3;
    *((uint32_t *)a1 + 2) = a3[1];
    *((uint32_t *)a1 + 1) = v11;
    v10 = a1;
    v9 = v19;
  }
  v6 = v9 + 5;
  v20 = v9;
  TiXmlString::assign((TiXmlNode::Self *)((char *)v10 + 44), (const char *)&unk_1B15112, 0);
  TiXmlString::assign((TiXmlNode::Self *)((char *)a1 + 48), (const char *)&unk_1B15112, 0);
  TiXmlString::assign((TiXmlNode::Self *)((char *)a1 + 52), (const char *)&unk_1B15112, 0);
  if ( v6 == nullptr )
    return v6;
  v12 = v20[5];
  if ( v12 == 0 )
    return nullptr;
  if ( v12 == 62 )
    return v6 + 1;
  while ( 1 )
  {
    v6 = TiXmlBase::SkipWhiteSpace(v6, a4);
    if ( TiXmlBase::StringEqual(v6, "version", 1, a4) != 0 )
    {
      v26[2] = -1;
      v26[0] = ((uint32_t)(uintptr_t)&off_208E000);
      v26[1] = -1;
      v26[3] = 0;
      v27 = (uint32_t *)(TiXmlString::nullrep_);
      v28 = (const char *)TiXmlString::nullrep_;
      v26[4] = 0;
      v30 = 0;
      v29 = 0;
      v6 = (uint8_t *)TiXmlAttribute::Parse(v26, v6, a3, a4);
      v24 = v28 + 8;
      v17 = strlen(v28 + 8);
      TiXmlString::assign((TiXmlNode::Self *)((char *)v10 + 44), v24, v17);
      goto LABEL_14;
    }
    if ( TiXmlBase::StringEqual(v6, "encoding", 1, a4) != 0 )
    {
      v26[2] = -1;
      v26[1] = -1;
      v26[3] = 0;
      v27 = (uint32_t *)(TiXmlString::nullrep_);
      v28 = (const char *)TiXmlString::nullrep_;
      v26[0] = ((uint32_t)(uintptr_t)&off_208E000);
      v26[4] = 0;
      v30 = 0;
      v29 = 0;
      v6 = (uint8_t *)TiXmlAttribute::Parse(v26, v6, a3, a4);
      v25 = v28 + 8;
      v18 = strlen(v28 + 8);
      TiXmlString::assign((TiXmlNode::Self *)((char *)a1 + 48), v25, v18);
LABEL_14:
      v13 = (char *)v28;
      v26[0] = ((uint32_t)(uintptr_t)&off_208E000);
      if ( v28 == (const char *)TiXmlString::nullrep_ )
        goto LABEL_17;
      goto LABEL_15;
    }
    if ( TiXmlBase::StringEqual(v6, "standalone", 1, a4) == 0 )
      break;
    v26[2] = -1;
    v26[1] = -1;
    v26[0] = ((uint32_t)(uintptr_t)&off_208E000);
    v26[3] = 0;
    v27 = (uint32_t *)(TiXmlString::nullrep_);
    v28 = (const char *)TiXmlString::nullrep_;
    v26[4] = 0;
    v30 = 0;
    v29 = 0;
    v6 = (uint8_t *)TiXmlAttribute::Parse(v26, v6, a3, a4);
    v22 = v28 + 8;
    v16 = strlen(v28 + 8);
    TiXmlString::assign((TiXmlNode::Self *)((char *)a1 + 52), v22, v16);
    v13 = (char *)v28;
    v26[0] = ((uint32_t)(uintptr_t)&off_208E000);
    if ( v28 != (const char *)TiXmlString::nullrep_ )
    {
LABEL_15:
      if ( v13 != nullptr )
        opDeleteArray(v13);
    }
LABEL_17:
    if ( v27 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v27 != nullptr )
      opDeleteArray(v27);
    v26[0] = ((uint32_t)(uintptr_t)&off_208DFD8);
LABEL_21:
    if ( v6 == nullptr )
      return v6;
    if ( *v6 == 0 )
      return nullptr;
    if ( *v6 == 62 )
      return v6 + 1;
  }
  if ( v6 == nullptr )
    return v6;
  while ( 1 )
  {
    v14 = *v6;
    if ( *v6 == 0 )
      return nullptr;
    if ( v14 == 62 )
      return v6 + 1;
    v21 = *v6;
    v15 = isspace(v14);
    if ( v21 == 10 || v15 != 0 || v21 == 13 )
      goto LABEL_21;
    if ( ++v6 == nullptr )
      return v6;
  }
}

// ----------------------------------------------------------------------------
// Function: TiXmlText::Blank  (binary VA: 0x1065630)
// Original: TiXmlText::Blank
// ----------------------------------------------------------------------------
int TiXmlText::Blank(TiXmlText::Self *self)
{
  unsigned int *v1;
  int result;
  unsigned int v3;
  unsigned int v4;
  int v5;
  uint8_t v6;

  v1 = *((unsigned int **)self + 8);
  result = 1;
  v3 = *v1;
  if ( *v1 != 0 )
  {
    v4 = 0;
    do
    {
      v6 = *((uint8_t *)v1 + v4 + 8);
      v5 = isspace(v6);
      if ( v6 != 10 && v5 == 0 && v6 != 13 )
        return 0;
      ++v4;
    }
    while ( v4 < v3 );
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::ReadValue  (binary VA: 0x10656b0)
// Original: TiXmlElement::ReadValue
// ----------------------------------------------------------------------------
uint8_t * TiXmlElement::ReadValue(TiXmlNode::Self *a1, uint8_t *a2, int a3, int a4)
{
  uint8_t *v4;
  uint8_t *v5;
  uint8_t v6;
  int v7;
  int v8;
  uint8_t *v9;
  int v11;
  uint8_t *v12;
  int Document;

  Document = TiXmlNode::GetDocument(a1);
  v4 = TiXmlBase::SkipWhiteSpace(a2, a4);
  v5 = v4;
  if ( v4 == nullptr )
  {
LABEL_16:
    v5 = nullptr;
    if ( Document != 0 )
      TiXmlDocument::SetError(Document, 6, 0, nullptr, a4);
    return v5;
  }
  v6 = *v4;
  v12 = a2;
  if ( v6 == 0 )
    return v5;
  while ( v6 != 60 )
  {
    v7 = opNew(0x30u);
    TiXmlNode::Construct((uint32_t *)v7, 4);
    *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_208DE48);
    TiXmlString::assign((TiXmlString::Self *)(v7 + 32), (const char *)&unk_1B15112, 0);
    *(uint8_t *)(v7 + 44) = 0;
    *(uint8_t *)(v7 + 45) = 0;
    v8 = *(uint32_t *)v7;
    if ( TiXmlBase::condenseWhiteSpace != 0 )
      v12 = (uint8_t *)(*(int (**)(int, uint8_t *, int, int))(v8 + 12))(v7, v5, a3, a4);
    else
      v12 = (uint8_t *)(*(int (**)(int, uint8_t *, int, int))(v8 + 12))(v7, v12, a3, a4);
    if ( (uint8_t)TiXmlText::Blank((TiXmlText::Self *)v7) == 0 )
      goto LABEL_14;
    G4_VCALL<void>(v7, 4);
LABEL_8:
    v9 = TiXmlBase::SkipWhiteSpace(v12, a4);
    v5 = v9;
    if ( v9 == nullptr )
      goto LABEL_16;
    v6 = *v9;
    if ( v6 == 0 )
      return v5;
  }
  if ( TiXmlBase::StringEqual(v5, "</", 0, a4) != 0 )
    return v5;
  v11 = TiXmlNode::Identify(a1, v5, a4);
  v7 = v11;
  if ( v11 != 0 )
  {
    v12 = (uint8_t *)G4_VCALL<int>(v11, 12, v5, a3, a4);
LABEL_14:
    TiXmlNode::LinkEndChild(a1, (TiXmlNode::Self *)v7);
    goto LABEL_8;
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: TiXmlElement::Parse  (binary VA: 0x10658b0)
// Original: TiXmlElement::Parse
// ----------------------------------------------------------------------------
uint8_t * TiXmlElement::Parse(TiXmlNode::Self *a1, uint8_t *a2, int *a3, int a4)
{
  uint8_t *v4;
  int Document;
  uint8_t v6;
  int v7;
  uint8_t *v8;
  uint8_t *v10;
  char *Name;
  int v12;
  size_t *v13;
  uint8_t *v14;
  uint8_t *v15;
  uint8_t v16;
  TiXmlAttribute::Self *v17;
  char *v18;
  TiXmlAttributeSet::Self *v19;
  uint32_t *v20;
  uint8_t *Value;
  unsigned int v22;
  uint8_t *v23;
  const char *v24;
  size_t v25;
  typedef unsigned int _g4_t_v26;
  typedef int *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t *_g4_t_v29;
  typedef uint8_t *_g4_t_v30;
  typedef uint8_t *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint8_t *_g4_t_v33;
  typedef TiXmlAttributeSet::Self *_g4_t_v34;
  typedef uint32_t _g4_t_v35[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v26)) > _g4_s0 ? (8u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v27)) > _g4_s1 ? (12u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v29)) > _g4_s3 ? (32u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v30)) > _g4_s4 ? (32u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v31)) > _g4_s5 ? (32u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v32)) > _g4_s6 ? (36u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v33)) > _g4_s7 ? (40u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v34)) > _g4_s8 ? (44u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v35)) > _g4_s9 ? (48u + sizeof(_g4_t_v35)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);

  v4 = TiXmlBase::SkipWhiteSpace(a2, a4);
  Document = TiXmlNode::GetDocument(a1);
  if ( v4 == nullptr || (v6 = *v4, *v4 == 0) )
  {
    v8 = nullptr;
    if ( Document == 0 )
      return v8;
    v27 = nullptr;
    v28 = a4;
    v26 = 0;
    goto LABEL_8;
  }
  if ( a3 != nullptr )
  {
    TiXmlParsingData::Stamp(a3, (unsigned int)(uintptr_t)(v4), a4);
    v7 = a3[1];
    *((uint32_t *)a1 + 1) = *a3;
    *((uint32_t *)a1 + 2) = v7;
    v6 = *v4;
  }
  if ( v6 != 60 )
  {
    v8 = nullptr;
    if ( Document == 0 )
      return v8;
    v26 = (unsigned int)(uintptr_t)(v4);
    v28 = a4;
    v27 = a3;
LABEL_8:
    TiXmlDocument::SetError(Document, 4, v26, v27, v28);
    return nullptr;
  }
  v10 = TiXmlBase::SkipWhiteSpace(v4 + 1, a4);
  Name = TiXmlBase::ReadName((char *)v10, (TiXmlString::Self *)((TiXmlNode::Self *)((char *)a1 + 32)));
  if ( Name == nullptr || *Name == 0 )
  {
    v8 = nullptr;
    if ( Document != 0 )
    {
      TiXmlDocument::SetError(Document, 5, (unsigned int)(uintptr_t)(v10), a3, a4);
      return nullptr;
    }
    return v8;
  }
  v29 = (uint8_t *)Name;
  v12 = opNewArray(0x10u);
  *(uint8_t *)(v12 + 10) = 0;
  v35[0] = v12;
  *(uint32_t *)v12 = 2;
  v13 = (size_t *)v35[0];
  *(uint32_t *)(v35[0] + 4) = 2;
  memcpy(v13 + 2, "</", *v13);
  TiXmlString::append((TiXmlString::Self *)v35, (const char *)(*((uint32_t *)a1 + 8) + 8), **((uint32_t **)a1 + 8));
  TiXmlString::append((TiXmlString::Self *)v35, ">", 1u);
  v8 = v29;
  if ( *v29 == 0 )
  {
LABEL_31:
    v20 = (uint32_t *)v35[0];
    goto LABEL_27;
  }
  v32 = Document;
  v14 = v29;
  while ( 1 )
  {
    v15 = TiXmlBase::SkipWhiteSpace(v14, a4);
    v33 = v15;
    if ( v15 == nullptr || (v16 = *v15) == 0 )
    {
      if ( v32 != 0 )
      {
        TiXmlDocument::SetError(v32, 7, (unsigned int)(uintptr_t)(v14), a3, a4);
        v8 = nullptr;
        v20 = (uint32_t *)v35[0];
        goto LABEL_27;
      }
      goto LABEL_41;
    }
    if ( v16 == 47 )
    {
      if ( v33[1] == 62 )
      {
        v20 = (uint32_t *)v35[0];
        v8 = v33 + 2;
        goto LABEL_27;
      }
      if ( v32 != 0 )
      {
        TiXmlDocument::SetError(v32, 8, (unsigned int)(uintptr_t)(v33 + 1), a3, a4);
        v8 = nullptr;
        v20 = (uint32_t *)v35[0];
        goto LABEL_27;
      }
      goto LABEL_41;
    }
    if ( v16 == 62 )
    {
      Value = TiXmlElement::ReadValue(a1, v33 + 1, (int)(uintptr_t)(a3), a4);
      v22 = (unsigned int)(uintptr_t)(Value);
      if ( Value != nullptr && *Value != 0 )
      {
        if ( TiXmlBase::StringEqual(Value, (char *)(v35[0] + 8), 0, a4) != 0 )
        {
          v20 = (uint32_t *)v35[0];
          v8 = (uint8_t *)(v22 + *(uint32_t *)v35[0]);
          goto LABEL_27;
        }
        if ( v32 == 0 )
        {
          v8 = nullptr;
          goto LABEL_31;
        }
      }
      else if ( v32 == 0 )
      {
LABEL_41:
        v8 = nullptr;
        v20 = (uint32_t *)v35[0];
        goto LABEL_27;
      }
      TiXmlDocument::SetError(v32, 9, v22, a3, a4);
      goto LABEL_41;
    }
    v17 = (TiXmlAttribute::Self *)opNew(0x24u);
    *((uint32_t *)v17 + 2) = -1;
    *((uint32_t *)v17 + 1) = -1;
    *((uint32_t *)v17 + 3) = 0;
    *(uint32_t *)v17 = ((uint32_t)(uintptr_t)&off_208E000);
    *((uint32_t *)v17 + 5) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
    *((uint32_t *)v17 + 6) = (uint32_t)(uintptr_t)(TiXmlString::nullrep_);
    *((uint32_t *)v17 + 4) = v32;
    *((uint32_t *)v17 + 8) = 0;
    *((uint32_t *)v17 + 7) = 0;
    v18 = TiXmlAttribute::Parse((uint32_t *)(v17), v33, a3, a4);
    v14 = (uint8_t *)v18;
    if ( v18 == nullptr || *v18 == 0 )
      break;
    v19 = TiXmlAttributeSet::Find((TiXmlNode::Self *)((char *)a1 + 44), (char *)(*((uint32_t *)v17 + 5) + 8));
    if ( v19 != nullptr )
    {
      v23 = v14;
      v34 = v19;
      if ( v32 != 0 )
      {
        TiXmlDocument::SetError(v32, 4, (unsigned int)(uintptr_t)(v33), a3, a4);
        v23 = v14;
      }
      v31 = v23;
      v24 = (const char *)(*((uint32_t *)v17 + 6) + 8);
      v25 = strlen(v24);
      TiXmlString::assign((TiXmlAttributeSet::Self *)((char *)v34 + 24), v24, v25);
      G4_VCALL<void>(v17, 4);
      v20 = (uint32_t *)v35[0];
      v8 = v31;
      goto LABEL_27;
    }
    TiXmlAttributeSet::Add((TiXmlNode::Self *)((char *)a1 + 44), v17);
    if ( *v14 == 0 )
    {
      v8 = v14;
      v20 = (uint32_t *)v35[0];
      goto LABEL_27;
    }
  }
  if ( v32 != 0 )
    TiXmlDocument::SetError(v32, 4, (unsigned int)(uintptr_t)(v33), a3, a4);
  G4_VCALL<void>(v17, 4);
  v8 = nullptr;
  v20 = (uint32_t *)v35[0];
LABEL_27:
  if ( v20 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v20 != nullptr )
  {
    v30 = v8;
    opDeleteArray(v20);
    return v30;
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttribute::Print  (binary VA: 0x1065dd0)
// Original: TiXmlAttribute::Print
// ----------------------------------------------------------------------------
void TiXmlAttribute::Print(int a1, FILE *stream, int a3)
{
  TiXmlAttribute::Print(a1, stream, a3, nullptr);
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttribute::Destroy  (binary VA: 0x1065e10)
// Original: TiXmlAttribute::~TiXmlAttribute
// ----------------------------------------------------------------------------
void TiXmlAttribute::Destroy(TiXmlAttribute::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E000);
  v1 = *((uint32_t **)self + 6);
  if ( v1 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v1 != nullptr )
    opDeleteArray(*((void **)self + 6));
  v2 = *((uint32_t **)self + 5);
  if ( v2 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v2 != nullptr )
    opDeleteArray(*((void **)self + 5));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DFD8);
}

// ----------------------------------------------------------------------------
// Function: TiXmlAttribute::Destroy_ea1065e90  (binary VA: 0x1065e90)
// Original: TiXmlAttribute::~TiXmlAttribute
// ----------------------------------------------------------------------------
void TiXmlAttribute::Destroy_ea1065e90(TiXmlAttribute::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E000);
  v1 = *((uint32_t **)self + 6);
  if ( v1 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v1 != nullptr )
    opDeleteArray(*((void **)self + 6));
  v2 = *((uint32_t **)self + 5);
  if ( v2 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v2 != nullptr )
    opDeleteArray(*((void **)self + 5));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DFD8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: TiXmlString::reserve  (binary VA: 0x1065f10)
// Original: TiXmlString::reserve
// ----------------------------------------------------------------------------
void TiXmlString::reserve(size_t **self, unsigned int a2)
{
  size_t *v2;
  size_t n;
  size_t *v4;
  size_t *v5;
  size_t v6;

  v2 = *self;
  if ( a2 > (*self)[1] )
  {
    n = *v2;
    if ( a2 != 0 )
    {
      v6 = *v2;
      v4 = (size_t *)opNewArray((a2 + 15) & 0xFFFFFFFC);
      *v4 = v6;
      *((uint8_t *)v4 + v6 + 8) = 0;
      v4[1] = a2;
      v2 = *self;
      n = **self;
    }
    else
    {
      v4 = TiXmlString::nullrep_;
    }
    memcpy(v4 + 2, v2 + 2, n);
    v5 = *self;
    *self = v4;
    if ( v5 != TiXmlString::nullrep_ && v5 != nullptr )
      opDeleteArray(v5);
  }
}

// ----------------------------------------------------------------------------
// Function: TiXmlString::assign  (binary VA: 0x1065fc0)
// Original: TiXmlString::assign
// ----------------------------------------------------------------------------
TiXmlString::Self * TiXmlString::assign(TiXmlString::Self *self, const char *a2, size_t n)
{
  const char *src;
  size_t v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v8;
  uint32_t *v9;

  src = a2;
  v4 = *(uint32_t *)(*(uint32_t *)self + 4);
  if ( n <= v4 && 3 * n + 24 >= v4 )
  {
    memmove((void *)(*(uint32_t *)self + 8), a2, n);
    v9 = *(uint32_t **)self;
    *v9 = n;
    *((uint8_t *)v9 + n + 8) = 0;
  }
  else
  {
    if ( n != 0 )
    {
      v8 = (uint32_t *)opNewArray((n + 15) & 0xFFFFFFFC);
      *v8 = n;
      v5 = v8;
      *((uint8_t *)v8 + n + 8) = 0;
      v8[1] = n;
      src = a2;
    }
    else
    {
      v5 = (uint32_t *)(TiXmlString::nullrep_);
    }
    memcpy(v5 + 2, src, n);
    v6 = *(uint32_t **)self;
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
    if ( v6 != (uint32_t *)(uintptr_t)(TiXmlString::nullrep_) && v6 != nullptr )
      opDeleteArray(v6);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: TiXmlString::append  (binary VA: 0x10660b0)
// Original: TiXmlString::append
// ----------------------------------------------------------------------------
size_t ** TiXmlString::append(size_t **self, const char *src, size_t n)
{
  size_t *v3;
  size_t v4;
  size_t v5;
  size_t v6;
  size_t *v7;

  v3 = *self;
  v4 = **self;
  v5 = (*self)[1];
  v6 = n + v4;
  if ( n + v4 > v5 )
  {
    TiXmlString::reserve(self, v6 + v5);
    v3 = *self;
    v4 = **self;
  }
  memmove((char *)v3 + v4 + 8, src, n);
  v7 = *self;
  *v7 = v6;
  *((uint8_t *)v7 + v6 + 8) = 0;
  return self;
}


