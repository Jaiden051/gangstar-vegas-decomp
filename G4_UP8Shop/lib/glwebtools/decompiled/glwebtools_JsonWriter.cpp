#include "Core/Utils/DecompTypes.h"
#include "glwebtools_JsonWriter.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::Construct  (binary VA: 0x13e2da0)
// Original: glwebtools::JsonWriter::JsonWriter
// ----------------------------------------------------------------------------
glwebtools::JsonWriter::Self * glwebtools::JsonWriter::Construct(glwebtools::JsonWriter::Self *self)
{
  glwebtools::JsonWriter::Self *result;

  result = (glwebtools::JsonWriter::Self *)glwebtools::Json::Value::Construct(self, 0);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::Construct  (binary VA: 0x13e2de0)
// Original: glwebtools::JsonWriter::JsonWriter
// ----------------------------------------------------------------------------
glwebtools::JsonWriter::Self * glwebtools::JsonWriter::Construct(glwebtools::JsonWriter::Self *self, glwebtools::Json::Value::Self *a2)
{
  glwebtools::Json::Value::Construct(self, 0);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(a2);
  return (glwebtools::JsonWriter::Self *)(a2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::GetRoot  (binary VA: 0x13e2e20)
// Original: glwebtools::JsonWriter::GetRoot
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::GetRoot(glwebtools::JsonWriter::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::GetRoot_ea13e2e30  (binary VA: 0x13e2e30)
// Original: glwebtools::JsonWriter::GetRoot
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::GetRoot_ea13e2e30(glwebtools::JsonWriter::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::write  (binary VA: 0x13e2e40)
// Original: glwebtools::JsonWriter::write
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::write(glwebtools::JsonWriter::Self *self, int a2)
{
  glwebtools::Json::Value::Self *Root;
  uint8_t v4[20];

  glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)v4, a2);
  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v4);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::write  (binary VA: 0x13e2ea0)
// Original: glwebtools::JsonWriter::write
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::write(glwebtools::JsonWriter::Self *self, unsigned int a2)
{
  glwebtools::Json::Value::Self *Root;
  uint8_t v4[20];

  glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)v4, a2);
  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v4);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::write  (binary VA: 0x13e2f00)
// Original: glwebtools::JsonWriter::write
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::write(glwebtools::JsonWriter::Self *self, double a2)
{
  glwebtools::Json::Value::Self *Root;
  uint8_t v4[20];

  glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)v4, a2);
  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v4);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::write  (binary VA: 0x13e2f60)
// Original: glwebtools::JsonWriter::write
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::write(glwebtools::JsonWriter::Self *self, float a2)
{
  glwebtools::Json::Value::Self *Root;
  uint8_t v4[20];

  glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)v4, a2);
  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v4);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::write  (binary VA: 0x13e2fc0)
// Original: glwebtools::JsonWriter::write
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::write(glwebtools::JsonWriter::Self *self, bool a2)
{
  glwebtools::Json::Value::Self *Root;
  uint8_t v4[20];

  glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)v4, a2);
  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v4);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::write_ea13e3020  (binary VA: 0x13e3020)
// Original: glwebtools::JsonWriter::write
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::write_ea13e3020(glwebtools::JsonWriter::Self *a1, int a2)
{
  glwebtools::Json::Value::Self *Root;
  uint8_t v4[20];

  glwebtools::Json::Value::Construct(v4, a2);
  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
  glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v4);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::write  (binary VA: 0x13e3080)
// Original: glwebtools::JsonWriter::write
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::write(glwebtools::JsonWriter::Self *self, const char *a2)
{
  glwebtools::Json::Value::Self *Root;
  uint8_t v4[20];

  if ( a2 == nullptr )
    return -2147483646;
  glwebtools::Json::Value::Construct((glwebtools::Json::Value::Self *)v4, a2);
  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v4);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::IsValid  (binary VA: 0x13e30f0)
// Original: glwebtools::JsonWriter::IsValid
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::IsValid(glwebtools::JsonWriter::Self *self)
{
  glwebtools::Json::Value::Self *Root;

  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  return glwebtools::Json::Value::isNull(Root) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::isInt  (binary VA: 0x13e3120)
// Original: glwebtools::JsonWriter::isInt
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::isInt(glwebtools::JsonWriter::Self *self)
{
  glwebtools::Json::Value::Self *Root;

  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  return glwebtools::Json::Value::isInt(Root);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::isUInt  (binary VA: 0x13e3150)
// Original: glwebtools::JsonWriter::isUInt
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::isUInt(glwebtools::JsonWriter::Self *self)
{
  glwebtools::Json::Value::Self *Root;

  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  return glwebtools::Json::Value::isUInt(Root);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::isDouble  (binary VA: 0x13e3180)
// Original: glwebtools::JsonWriter::isDouble
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::isDouble(glwebtools::JsonWriter::Self *self)
{
  glwebtools::Json::Value::Self *Root;

  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  return glwebtools::Json::Value::isDouble(Root);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::isBool  (binary VA: 0x13e31b0)
// Original: glwebtools::JsonWriter::isBool
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::isBool(glwebtools::JsonWriter::Self *self)
{
  glwebtools::Json::Value::Self *Root;

  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  return glwebtools::Json::Value::isBool(Root);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::isString  (binary VA: 0x13e31e0)
// Original: glwebtools::JsonWriter::isString
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::isString(glwebtools::JsonWriter::Self *self)
{
  glwebtools::Json::Value::Self *Root;

  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  return glwebtools::Json::Value::isString(Root);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::isObject  (binary VA: 0x13e3210)
// Original: glwebtools::JsonWriter::isObject
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::isObject(glwebtools::JsonWriter::Self *self)
{
  glwebtools::Json::Value::Self *Root;

  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  return glwebtools::Json::Value::isObject(Root);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::isArray  (binary VA: 0x13e3240)
// Original: glwebtools::JsonWriter::isArray
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::isArray(glwebtools::JsonWriter::Self *self)
{
  glwebtools::Json::Value::Self *Root;

  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  return glwebtools::Json::Value::isArray(Root);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::opIndex  (binary VA: 0x13e3270)
// Original: glwebtools::JsonWriter::operator[]
// ----------------------------------------------------------------------------
glwebtools::JsonWriter::Self * glwebtools::JsonWriter::opIndex(glwebtools::JsonWriter::Self *self, glwebtools::JsonWriter::Self *a2, unsigned int a3)
{
  glwebtools::Json::Value::Self *Root;
  glwebtools::Json::Value::Self *v4;
  glwebtools::Json::Value::Self *v5;
  uint8_t v7[28];

  if ( (uint8_t)glwebtools::JsonWriter::isArray(a2) == 0 )
  {
    glwebtools::Json::Value::Construct(v7, 6);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v7);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v7);
  }
  v4 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
  v5 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v4, a3);
  glwebtools::JsonWriter::Construct(self, v5);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::opIndex  (binary VA: 0x13e3310)
// Original: glwebtools::JsonWriter::operator[]
// ----------------------------------------------------------------------------
glwebtools::JsonWriter::Self * glwebtools::JsonWriter::opIndex(glwebtools::JsonWriter::Self *a1, glwebtools::JsonWriter::Self *a2, int a3)
{
  glwebtools::Json::Value::Self *Root;
  glwebtools::Json::Value::Self *v4;
  glwebtools::Json::Value::Self *v5;
  uint8_t v7[28];

  if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
  {
    glwebtools::Json::Value::Construct(v7, 7);
    Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v7);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v7);
  }
  v4 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
  v5 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v4, a3);
  glwebtools::JsonWriter::Construct(a1, v5);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::opIndex  (binary VA: 0x13e33b0)
// Original: glwebtools::JsonWriter::operator[]
// ----------------------------------------------------------------------------
glwebtools::JsonWriter::Self * glwebtools::JsonWriter::opIndex(glwebtools::JsonWriter::Self *self, glwebtools::JsonWriter::Self *a2, char *a3)
{
  glwebtools::Json::Value::Self *v3;
  glwebtools::Json::Value::Self *v4;
  glwebtools::Json::Value::Self *Root;
  uint8_t v7[28];

  if ( a3 != nullptr )
  {
    if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
    {
      glwebtools::Json::Value::Construct(v7, 7);
      Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v7);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v7);
    }
    v3 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
    v4 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v3, a3);
    glwebtools::JsonWriter::Construct(self, v4);
  }
  else
  {
    glwebtools::JsonWriter::Construct(self);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::ToString  (binary VA: 0x13e3480)
// Original: glwebtools::JsonWriter::ToString
// ----------------------------------------------------------------------------
glwebtools::JsonWriter::Self * glwebtools::JsonWriter::ToString(glwebtools::JsonWriter::Self *self, glwebtools::JsonWriter::Self *a2)
{
  glwebtools::JsonWriter::GetRoot(a2);
  glwebtools::Json::Value::toCompactString(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::ToString  (binary VA: 0x13e34d0)
// Original: glwebtools::JsonWriter::ToString
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::ToString(glwebtools::JsonWriter::Self *a1, int a2)
{
  glwebtools::Json::Value::Self *Root;

  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
  return (int)(uintptr_t)(glwebtools::Json::Value::toCompactString(Root, a2));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::ToPrettyString  (binary VA: 0x13e3510)
// Original: glwebtools::JsonWriter::ToPrettyString
// ----------------------------------------------------------------------------
glwebtools::JsonWriter::Self * glwebtools::JsonWriter::ToPrettyString(glwebtools::JsonWriter::Self *self, glwebtools::JsonWriter::Self *a2)
{
  glwebtools::JsonWriter::GetRoot(a2);
  glwebtools::Json::Value::toStyledString(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::ToPrettyString  (binary VA: 0x13e3560)
// Original: glwebtools::JsonWriter::ToPrettyString
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::ToPrettyString(glwebtools::JsonWriter::Self *a1, int a2)
{
  glwebtools::Json::Value::Self *Root;

  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
  return (int)(uintptr_t)(glwebtools::Json::Value::toStyledString(Root, a2));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::write  (binary VA: 0x13e35a0)
// Original: glwebtools::JsonWriter::write
// ----------------------------------------------------------------------------
int glwebtools::JsonWriter::write(glwebtools::JsonWriter::Self *self, const glwebtools::CustomArgument::Self *a2)
{
  bool IsValid;
  int result;
  bool IsJSON;
  int v5;
  glwebtools::CustomArgument::Self *v6;
  long double v7; // fst7
  unsigned int v8;
  glwebtools::Json::Value::Self *Root;
  glwebtools::CustomArgument::Self *v10;
  void *v11;
  void *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  void *v20;
  void **v21;
  unsigned int v22;
  void *v23;
  void *v24;
  void **v25;
  unsigned int v26;
  void *v27;
  char v28;
  int i;
  int v30;
  typedef uint32_t *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef void *_g4_t_v38[5];
  typedef unsigned int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef void *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef unsigned int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v31)) > _g4_s0 ? (4u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v32)) > _g4_s1 ? (8u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v33)) > _g4_s2 ? (12u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v34)) > _g4_s3 ? (16u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v35)) > _g4_s4 ? (20u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v36)) > _g4_s5 ? (24u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v37)) > _g4_s6 ? (28u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v38)) > _g4_s7 ? (48u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v39)) > _g4_s8 ? (68u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v40)) > _g4_s9 ? (84u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v41)) > _g4_s10 ? (88u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v42)) > _g4_s11 ? (96u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v43)) > _g4_s12 ? (104u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v44)) > _g4_s13 ? (108u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v45)) > _g4_s14 ? (112u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v46)) > _g4_s15 ? (116u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (124u + sizeof(_g4_t_v47)) > _g4_s16 ? (124u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (128u + sizeof(_g4_t_v48)) > _g4_s17 ? (128u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (152u + sizeof(_g4_t_v49)) > _g4_s18 ? (152u + sizeof(_g4_t_v49)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 68u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 88u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 104u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 108u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 112u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 116u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 124u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 128u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 152u);

  IsValid = glwebtools::CustomArgument::IsValid(a2);
  result = -2147483646;
  if ( IsValid )
  {
    if ( glwebtools::CustomArgument::IsString(a2) )
    {
      v6 = glwebtools::CustomArgument::ToString(a2);
      return glwebtools::JsonWriter::write(self, (int)(uintptr_t)(v6));
    }
    else if ( glwebtools::CustomArgument::IsUInt(a2) )
    {
      v5 = glwebtools::CustomArgument::ToInt((void **)a2);
      return glwebtools::JsonWriter::write(self, v5);
    }
    else if ( glwebtools::CustomArgument::IsInt(a2) )
    {
      v8 = glwebtools::CustomArgument::ToUInt((void **)a2);
      return glwebtools::JsonWriter::write(self, v8);
    }
    else if ( glwebtools::CustomArgument::IsDouble(a2) )
    {
      v7 = glwebtools::CustomArgument::ToDouble((void **)a2);
      return glwebtools::JsonWriter::write(self, (double)v7);
    }
    else if ( glwebtools::CustomArgument::IsBool(a2) )
    {
      v28 = glwebtools::CustomArgument::ToBool((void **)a2);
      return glwebtools::JsonWriter::write(self, v28);
    }
    else
    {
      IsJSON = glwebtools::CustomArgument::IsJSON(a2);
      result = 0;
      if ( IsJSON )
      {
        glwebtools::Json::Reader::Construct((glwebtools::Json::Reader::Self *)v38);
        Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
        v10 = glwebtools::CustomArgument::ToString(a2);
        if ( (uint8_t)glwebtools::Json::Reader::parse((glwebtools::Json::Reader::Self *)v38, (int)(uintptr_t)(v10), Root, 1) != 0 )
        {
          v11 = (void *)(v49 - 12);
          if ( (uint32_t *)(v49 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11);
          }
          v12 = (void *)(v48 - 12);
          if ( (uint32_t *)(v48 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v12);
          }
          v35 = v46;
          v34 = v45;
          v32 = v42;
          v33 = v47;
          v37 = v44;
          v36 = v43;
          v31 = (uint32_t *)(v44 + 4);
          if ( v47 > v44 + 4 )
          {
            do
            {
              v13 = 0;
              v14 = *v31 + 12;
              do
              {
                v15 = *(uint32_t *)(v14 + v13);
                if ( (uint32_t *)(v15 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy((void *)(v15 - 12));
                }
                v13 += 20;
              }
              while ( v13 != 500 );
              ++v31;
            }
            while ( v33 > (unsigned int)(uintptr_t)(v31) );
          }
          if ( v33 == v37 )
          {
            for ( i = v32; v34 != i; i += 20 )
            {
              v30 = *(uint32_t *)(i + 12);
              if ( (uint32_t *)(v30 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v30 - 12));
              }
            }
          }
          else
          {
            if ( v32 != v36 )
            {
              v16 = v32;
              do
              {
                v17 = *(uint32_t *)(v16 + 12);
                if ( (uint32_t *)(v17 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy((void *)(v17 - 12));
                }
                v16 += 20;
              }
              while ( v36 != v16 );
            }
            if ( v34 != v35 )
            {
              v18 = v35;
              do
              {
                v19 = *(uint32_t *)(v18 + 12);
                if ( (uint32_t *)(v19 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy((void *)(v19 - 12));
                }
                v18 += 20;
              }
              while ( v34 != v18 );
            }
          }
          v20 = v41;
          if ( v41 != nullptr )
          {
            v21 = (void **)v44;
            v22 = v47 + 4;
            if ( v47 + 4 > v44 )
            {
              do
              {
                v23 = *v21++;
                opDelete(v23);
              }
              while ( v22 > (unsigned int)(uintptr_t)(v21) );
              v20 = v41;
            }
            opDelete(v20);
          }
          v24 = v38[0];
          result = 0;
          if ( v38[0] != nullptr )
          {
            v25 = (void **)v39;
            v26 = v40 + 4;
            if ( v40 + 4 > v39 )
            {
              do
              {
                v27 = *v25++;
                opDelete(v27);
              }
              while ( v26 > (unsigned int)(uintptr_t)(v25) );
              v24 = v38[0];
            }
            opDelete(v24);
            return 0;
          }
        }
        else
        {
          glwebtools::Json::Reader::Destroy((glwebtools::Json::Reader::Self *)v38);
          return -2147483646;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::write  (binary VA: 0x13e39e0)
// Original: glwebtools::JsonWriter::write
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::JsonWriter::write(glwebtools::JsonWriter::Self *self, const glwebtools::CustomAttributeList::Self *a2)
{
  int i;
  glwebtools::Self *v3;
  char *v4;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v6;
  glwebtools::Json::Value::Self *v7;
  glwebtools::Json::Value::Self *v8;
  typedef glwebtools::CustomAttribute::Self *_g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  typedef uint8_t _g4_t_v12[16];
  typedef uint8_t _g4_t_v13[48];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v13)) > _g4_s3 ? (44u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);

  glwebtools::CustomAttributeList::begin((glwebtools::CustomAttributeList::Self *)v11, (int)(uintptr_t)(a2));
  for ( i = v11[0]; ; i = sub_19048E0(i) )
  {
    glwebtools::CustomAttributeList::end((glwebtools::CustomAttributeList::Self *)v11, (int)(uintptr_t)(a2));
    if ( i == v11[0] )
      break;
    v4 = glwebtools::CustomAttribute::value((glwebtools::CustomAttribute::Self *)(i + 16));
    v10 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(i + 16));
    if ( (uint8_t)glwebtools::JsonWriter::isObject(self) == 0 )
    {
      glwebtools::Json::Value::Construct(v12, 7);
      Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
      glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v12);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v13);
    v3 = (glwebtools::Self *)glwebtools::JsonWriter::write(
                         (glwebtools::JsonWriter::Self *)v13,
                         (const glwebtools::CustomArgument::Self *)v4);
    if ( glwebtools::IsOperationSuccess(v3) )
    {
      v6 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v13);
      v7 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
      v8 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v7, (int)(uintptr_t)(v10));
      glwebtools::Json::Value::opAssign(v8, v6);
      v3 = nullptr;
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v13);
    if ( !glwebtools::IsOperationSuccess(v3) )
      return v3;
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::write  (binary VA: 0x13e3b50)
// Original: glwebtools::JsonWriter::write
// ----------------------------------------------------------------------------
unsigned int glwebtools::JsonWriter::write(glwebtools::JsonWriter::Self *self, const glwebtools::JSONValue::Self *a2)
{
  glwebtools::Json::Value::Self *Root;
  void *v3;
  void *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  void *v12;
  void **v13;
  unsigned int v14;
  void *v15;
  void *v16;
  void **v17;
  unsigned int v18;
  void *v19;
  int i;
  int v22;
  typedef uint32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef void *_g4_t_v31[5];
  typedef unsigned int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef void *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef unsigned int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v25)) > _g4_s2 ? (8u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v26)) > _g4_s3 ? (12u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v27)) > _g4_s4 ? (16u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v28)) > _g4_s5 ? (20u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v29)) > _g4_s6 ? (24u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v30)) > _g4_s7 ? (28u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v31)) > _g4_s8 ? (48u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v32)) > _g4_s9 ? (68u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v33)) > _g4_s10 ? (84u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v34)) > _g4_s11 ? (88u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v35)) > _g4_s12 ? (96u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v36)) > _g4_s13 ? (104u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v37)) > _g4_s14 ? (108u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v38)) > _g4_s15 ? (112u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v39)) > _g4_s16 ? (116u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v40)) > _g4_s17 ? (124u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v41)) > _g4_s18 ? (128u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (152u + sizeof(_g4_t_v42)) > _g4_s19 ? (152u + sizeof(_g4_t_v42)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 96u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 104u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 108u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 112u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 116u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 152u);

  glwebtools::Json::Reader::Construct((glwebtools::Json::Reader::Self *)v31);
  Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
  v29 = (uint8_t)glwebtools::Json::Reader::parse((glwebtools::Json::Reader::Self *)v31, (int)(uintptr_t)(a2), Root, 1) == 0
      ? 0x80000002
      : 0;
  v3 = (void *)(v42 - 12);
  if ( (uint32_t *)(v42 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v27 = v39;
  v26 = v38;
  v24 = v35;
  v25 = v40;
  v30 = v37;
  v28 = v36;
  v23 = (uint32_t *)(v37 + 4);
  if ( v40 > v37 + 4 )
  {
    do
    {
      v5 = 0;
      v6 = *v23 + 12;
      do
      {
        v7 = *(uint32_t *)(v6 + v5);
        if ( (uint32_t *)(v7 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v7 - 12));
        }
        v5 += 20;
      }
      while ( v5 != 500 );
      ++v23;
    }
    while ( v25 > (unsigned int)(uintptr_t)(v23) );
  }
  if ( v25 == v30 )
  {
    for ( i = v24; v26 != i; i += 20 )
    {
      v22 = *(uint32_t *)(i + 12);
      if ( (uint32_t *)(v22 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v22 - 12));
      }
    }
  }
  else
  {
    if ( v24 != v28 )
    {
      v8 = v24;
      do
      {
        v9 = *(uint32_t *)(v8 + 12);
        if ( (uint32_t *)(v9 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v9 - 12));
        }
        v8 += 20;
      }
      while ( v28 != v8 );
    }
    if ( v26 != v27 )
    {
      v10 = v27;
      do
      {
        v11 = *(uint32_t *)(v10 + 12);
        if ( (uint32_t *)(v11 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v11 - 12));
        }
        v10 += 20;
      }
      while ( v26 != v10 );
    }
  }
  v12 = v34;
  if ( v34 != nullptr )
  {
    v13 = (void **)v37;
    v14 = v40 + 4;
    if ( v40 + 4 > v37 )
    {
      do
      {
        v15 = *v13++;
        opDelete(v15);
      }
      while ( v14 > (unsigned int)(uintptr_t)(v13) );
      v12 = v34;
    }
    opDelete(v12);
  }
  v16 = v31[0];
  if ( v31[0] != nullptr )
  {
    v17 = (void **)v32;
    v18 = v33 + 4;
    if ( v33 + 4 > v32 )
    {
      do
      {
        v19 = *v17++;
        opDelete(v19);
      }
      while ( v18 > (unsigned int)(uintptr_t)(v17) );
      v16 = v31[0];
    }
    opDelete(v16);
  }
  return v29;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::write  (binary VA: 0x13e3e60)
// Original: glwebtools::JsonWriter::write
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::JsonWriter::write(glwebtools::JsonWriter::Self *self, const glwebtools::JSONObject::Self *a2)
{
  int i;
  glwebtools::Self *v3;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v5;
  glwebtools::Json::Value::Self *v6;
  glwebtools::Json::Value::Self *v7;
  typedef int _g4_t_v9[4];
  typedef uint8_t _g4_t_v10[16];
  typedef uint8_t _g4_t_v11[48];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v11)) > _g4_s2 ? (44u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);

  glwebtools::JSONObject::begin((glwebtools::JSONObject::Self *)v9, a2);
  for ( i = v9[0]; ; i += 8 )
  {
    glwebtools::JSONObject::end((glwebtools::JSONObject::Self *)v9, (int)(uintptr_t)(a2));
    if ( i == v9[0] )
      break;
    if ( (uint8_t)glwebtools::JsonWriter::isObject(self) == 0 )
    {
      glwebtools::Json::Value::Construct(v10, 7);
      Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
      glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v10);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v10);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v11);
    v3 = (glwebtools::Self *)glwebtools::JsonWriter::write(
                         (glwebtools::JsonWriter::Self *)v11,
                         (const glwebtools::JSONValue::Self *)(i + 4));
    if ( glwebtools::IsOperationSuccess(v3) )
    {
      v5 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v11);
      v6 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
      v7 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v6, i);
      glwebtools::Json::Value::opAssign(v7, v5);
      v3 = nullptr;
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
    if ( !glwebtools::IsOperationSuccess(v3) )
      return v3;
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::write  (binary VA: 0x13e3fa0)
// Original: glwebtools::JsonWriter::write
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::JsonWriter::write(glwebtools::JsonWriter::Self *self, const glwebtools::JSONArray::Self *a2)
{
  unsigned int *i;
  glwebtools::Self *v3;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v5;
  glwebtools::Json::Value::Self *v6;
  glwebtools::Json::Value::Self *v7;
  typedef unsigned int _g4_t_v9;
  typedef uint32_t _g4_t_v10[4];
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[48];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v12)) > _g4_s3 ? (44u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);

  glwebtools::JSONArray::begin((glwebtools::JSONArray::Self *)v10, a2);
  for ( i = (unsigned int *)v10[0]; ; i += 2 )
  {
    glwebtools::JSONArray::end((glwebtools::JSONArray::Self *)v10, (int)(uintptr_t)(a2));
    if ( i == (unsigned int *)v10[0] )
      break;
    v9 = *i;
    if ( (uint8_t)glwebtools::JsonWriter::isArray(self) == 0 )
    {
      glwebtools::Json::Value::Construct(v11, 6);
      Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
      glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v11);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v12);
    v3 = (glwebtools::Self *)glwebtools::JsonWriter::write(
                         (glwebtools::JsonWriter::Self *)v12,
                         (const glwebtools::JSONValue::Self *)(i + 1));
    if ( glwebtools::IsOperationSuccess(v3) )
    {
      v5 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
      v6 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
      v7 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v6, v9);
      glwebtools::Json::Value::opAssign(v7, v5);
      v3 = nullptr;
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
    if ( !glwebtools::IsOperationSuccess(v3) )
      return v3;
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::write_ea13e40f0  (binary VA: 0x13e40f0)
// Original: glwebtools::JsonWriter::write
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::JsonWriter::write_ea13e40f0(glwebtools::JsonWriter::Self *a1, int a2)
{
  glwebtools::Self *v2;
  void *v3;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v6;
  glwebtools::Json::Value::Self *v7;
  glwebtools::Json::Value::Self *v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[16];
  typedef uint8_t _g4_t_v11[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  glwebtools::JSONValue::Construct((glwebtools::JSONValue::Self *)&v9);
  v2 = (glwebtools::Self *)glwebtools::JSONObject::Get(*(int **)(a2 + 4), a2, (int)(uintptr_t)(&v9));
  if ( glwebtools::IsOperationSuccess(v2) )
  {
    if ( (uint8_t)glwebtools::JsonWriter::isObject(a1) == 0 )
    {
      glwebtools::Json::Value::Construct(v10, 7);
      Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
      glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v10);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v10);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v11);
    v2 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v11, (const glwebtools::JSONValue::Self *)&v9);
    if ( glwebtools::IsOperationSuccess(v2) )
    {
      v6 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v11);
      v7 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
      v8 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v7, a2);
      glwebtools::Json::Value::opAssign(v8, v6);
      v2 = nullptr;
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
  }
  v3 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::write  (binary VA: 0x13e4250)
// Original: glwebtools::JsonWriter::write
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::JsonWriter::write(glwebtools::JsonWriter::Self *a1, unsigned int a2, glwebtools::JSONArray::Self *a3)
{
  glwebtools::Self *v3;
  void *v4;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v7;
  glwebtools::Json::Value::Self *v8;
  glwebtools::Json::Value::Self *v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  glwebtools::JSONValue::Construct((glwebtools::JSONValue::Self *)&v10);
  v3 = (glwebtools::Self *)glwebtools::JSONArray::Get(a3, a2, (glwebtools::JSONValue::Self *)&v10);
  if ( glwebtools::IsOperationSuccess(v3) )
  {
    if ( (uint8_t)glwebtools::JsonWriter::isArray(a1) == 0 )
    {
      glwebtools::Json::Value::Construct(v11, 6);
      Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
      glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v11);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v12);
    v3 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v12, (const glwebtools::JSONValue::Self *)&v10);
    if ( glwebtools::IsOperationSuccess(v3) )
    {
      v7 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
      v8 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a1);
      v9 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v8, a2);
      glwebtools::Json::Value::opAssign(v9, v7);
      v3 = nullptr;
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
  }
  v4 = (void *)(v10 - 12);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::include  (binary VA: 0x13e43e0)
// Original: glwebtools::JsonWriter::include
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::JsonWriter::include(glwebtools::JsonWriter::Self *self, const char **a2, const char **a3, const glwebtools::CustomAttributeList::Self *a4)
{
  int i;
  glwebtools::CustomAttribute::Self *v5;
  glwebtools::Self *v6;
  char *v7;
  const glwebtools::Json::Value::Self *v9;
  glwebtools::Json::Value::Self *v10;
  glwebtools::Json::Value::Self *v11;
  glwebtools::Json::Value::Self *Root;
  typedef glwebtools::CustomAttribute::Self *_g4_t_v13;
  typedef uint32_t _g4_t_v14[3];
  typedef char _g4_t_v15;
  typedef uint8_t _g4_t_v16[16];
  typedef uint8_t _g4_t_v17[48];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v15)) > _g4_s2 ? (27u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v16)) > _g4_s3 ? (28u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v17)) > _g4_s4 ? (44u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 27u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  glwebtools::CustomAttributeList::begin((glwebtools::CustomAttributeList::Self *)v14, (int)(uintptr_t)(a4));
  for ( i = v14[0]; ; i = sub_19048E0(i) )
  {
    glwebtools::CustomAttributeList::end((glwebtools::CustomAttributeList::Self *)v14, (int)(uintptr_t)(a4));
    if ( i == v14[0] )
      break;
    v15 = 0;
    v5 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(i + 16));
    v6 = (glwebtools::Self *)glwebtools::Find(a2, a3, v5, &v15);
    if ( !glwebtools::IsOperationSuccess(v6) )
      return v6;
    if ( v15 != 0 )
    {
      v7 = glwebtools::CustomAttribute::value((glwebtools::CustomAttribute::Self *)(i + 16));
      v13 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(i + 16));
      if ( (uint8_t)glwebtools::JsonWriter::isObject(self) == 0 )
      {
        glwebtools::Json::Value::Construct(v16, 7);
        Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
        glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v16);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v16);
      }
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v17);
      v6 = (glwebtools::Self *)glwebtools::JsonWriter::write(
                           (glwebtools::JsonWriter::Self *)v17,
                           (const glwebtools::CustomArgument::Self *)v7);
      if ( glwebtools::IsOperationSuccess(v6) )
      {
        v9 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v17);
        v10 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
        v11 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v10, (int)(uintptr_t)(v13));
        glwebtools::Json::Value::opAssign(v11, v9);
        v6 = nullptr;
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v17);
      if ( !glwebtools::IsOperationSuccess(v6) )
        return v6;
    }
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::include  (binary VA: 0x13e4590)
// Original: glwebtools::JsonWriter::include
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::JsonWriter::include(glwebtools::JsonWriter::Self *self, const char **a2, const char **a3, const glwebtools::JSONObject::Self *a4)
{
  int i;
  glwebtools::Self *v5;
  glwebtools::Json::Value::Self *Root;
  glwebtools::Json::Value::Self *v8;
  glwebtools::Json::Value::Self *v9;
  typedef glwebtools::Json::Value::Self *_g4_t_v10;
  typedef glwebtools::Self *_g4_t_v11;
  typedef int _g4_t_v12[3];
  typedef char _g4_t_v13;
  typedef uint8_t _g4_t_v14[16];
  typedef uint8_t _g4_t_v15[48];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (27u + sizeof(_g4_t_v13)) > _g4_s3 ? (27u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v15)) > _g4_s5 ? (44u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 27u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);

  glwebtools::JSONObject::begin((glwebtools::JSONObject::Self *)v12, a4);
  for ( i = v12[0]; ; i += 8 )
  {
    glwebtools::JSONObject::end((glwebtools::JSONObject::Self *)v12, (int)(uintptr_t)(a4));
    if ( i == v12[0] )
      break;
    v13 = 0;
    v5 = (glwebtools::Self *)glwebtools::Find(a2, a3, i, &v13);
    if ( !glwebtools::IsOperationSuccess(v5) )
      return v5;
    if ( v13 != 0 )
    {
      if ( (uint8_t)glwebtools::JsonWriter::isObject(self) == 0 )
      {
        glwebtools::Json::Value::Construct(v14, 7);
        Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
        glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v14);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v14);
      }
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v15);
      v11 = (glwebtools::Self *)glwebtools::JsonWriter::write(
                            (glwebtools::JsonWriter::Self *)v15,
                            (const glwebtools::JSONValue::Self *)(i + 4));
      if ( glwebtools::IsOperationSuccess(v11) )
      {
        v10 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v15);
        v8 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
        v9 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v8, i);
        glwebtools::Json::Value::opAssign(v9, v10);
        v11 = nullptr;
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v15);
      if ( !glwebtools::IsOperationSuccess(v11) )
        return v11;
    }
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::include  (binary VA: 0x13e4730)
// Original: glwebtools::JsonWriter::include
// ----------------------------------------------------------------------------
unsigned int glwebtools::JsonWriter::include(glwebtools::JsonWriter::Self *self, unsigned int *a2, unsigned int *a3, const glwebtools::JSONArray::Self *a4)
{
  unsigned int *i;
  char v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int *v8;
  const glwebtools::Json::Value::Self *v10;
  glwebtools::Json::Value::Self *v11;
  glwebtools::Json::Value::Self *v12;
  glwebtools::Json::Value::Self *Root;
  typedef char _g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef uint32_t _g4_t_v16[4];
  typedef uint8_t _g4_t_v17[16];
  typedef uint8_t _g4_t_v18[48];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v17)) > _g4_s3 ? (28u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v18)) > _g4_s4 ? (44u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  glwebtools::JSONArray::begin((glwebtools::JSONArray::Self *)v16, a4);
  for ( i = (unsigned int *)v16[0]; ; i += 2 )
  {
    glwebtools::JSONArray::end((glwebtools::JSONArray::Self *)v16, (int)(uintptr_t)(a4));
    if ( i == (unsigned int *)v16[0] )
      break;
    v5 = 0;
    v6 = *i;
    v7 = 0x80000002;
    if ( a2 != nullptr && a3 != nullptr )
    {
      v7 = 0;
      if ( a2 != a3 )
      {
        v5 = 1;
        if ( v6 != *a2 )
        {
          v8 = a2;
          do
          {
            if ( a3 == ++v8 )
            {
              v5 = 0;
              v7 = 0;
              goto LABEL_11;
            }
          }
          while ( v6 != *v8 );
          v5 = 1;
          v7 = 0;
        }
      }
    }
LABEL_11:
    v14 = v5;
    if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v7) )
      return v7;
    if ( v14 != 0 )
    {
      v15 = *i;
      if ( (uint8_t)glwebtools::JsonWriter::isArray(self) == 0 )
      {
        glwebtools::Json::Value::Construct(v17, 6);
        Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
        glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v17);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v17);
      }
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v18);
      v7 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v18, (const glwebtools::JSONValue::Self *)(i + 1));
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v7) )
      {
        v10 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v18);
        v11 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
        v12 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v11, v15);
        glwebtools::Json::Value::opAssign(v12, v10);
        v7 = 0;
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v18);
      if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v7) )
        return v7;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::exclude  (binary VA: 0x13e4900)
// Original: glwebtools::JsonWriter::exclude
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::JsonWriter::exclude(glwebtools::JsonWriter::Self *self, const char **a2, const char **a3, const glwebtools::CustomAttributeList::Self *a4)
{
  int i;
  glwebtools::CustomAttribute::Self *v5;
  glwebtools::Self *v6;
  char *v7;
  const glwebtools::Json::Value::Self *v9;
  glwebtools::Json::Value::Self *v10;
  glwebtools::Json::Value::Self *v11;
  glwebtools::Json::Value::Self *Root;
  typedef glwebtools::CustomAttribute::Self *_g4_t_v13;
  typedef uint32_t _g4_t_v14[3];
  typedef char _g4_t_v15;
  typedef uint8_t _g4_t_v16[16];
  typedef uint8_t _g4_t_v17[48];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v15)) > _g4_s2 ? (27u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v16)) > _g4_s3 ? (28u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v17)) > _g4_s4 ? (44u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 27u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  glwebtools::CustomAttributeList::begin((glwebtools::CustomAttributeList::Self *)v14, (int)(uintptr_t)(a4));
  for ( i = v14[0]; ; i = sub_19048E0(i) )
  {
    glwebtools::CustomAttributeList::end((glwebtools::CustomAttributeList::Self *)v14, (int)(uintptr_t)(a4));
    if ( i == v14[0] )
      break;
    v15 = 0;
    v5 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(i + 16));
    v6 = (glwebtools::Self *)glwebtools::Find(a2, a3, v5, &v15);
    if ( !glwebtools::IsOperationSuccess(v6) )
      return v6;
    if ( v15 == 0 )
    {
      v7 = glwebtools::CustomAttribute::value((glwebtools::CustomAttribute::Self *)(i + 16));
      v13 = glwebtools::CustomAttribute::key((glwebtools::CustomAttribute::Self *)(i + 16));
      if ( (uint8_t)glwebtools::JsonWriter::isObject(self) == 0 )
      {
        glwebtools::Json::Value::Construct(v16, 7);
        Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
        glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v16);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v16);
      }
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v17);
      v6 = (glwebtools::Self *)glwebtools::JsonWriter::write(
                           (glwebtools::JsonWriter::Self *)v17,
                           (const glwebtools::CustomArgument::Self *)v7);
      if ( glwebtools::IsOperationSuccess(v6) )
      {
        v9 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v17);
        v10 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
        v11 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v10, (int)(uintptr_t)(v13));
        glwebtools::Json::Value::opAssign(v11, v9);
        v6 = nullptr;
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v17);
      if ( !glwebtools::IsOperationSuccess(v6) )
        return v6;
    }
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::exclude  (binary VA: 0x13e4ab0)
// Original: glwebtools::JsonWriter::exclude
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::JsonWriter::exclude(glwebtools::JsonWriter::Self *self, const char **a2, const char **a3, const glwebtools::JSONObject::Self *a4)
{
  int i;
  glwebtools::Self *v5;
  glwebtools::Json::Value::Self *Root;
  glwebtools::Json::Value::Self *v8;
  glwebtools::Json::Value::Self *v9;
  typedef glwebtools::Json::Value::Self *_g4_t_v10;
  typedef glwebtools::Self *_g4_t_v11;
  typedef int _g4_t_v12[3];
  typedef char _g4_t_v13;
  typedef uint8_t _g4_t_v14[16];
  typedef uint8_t _g4_t_v15[48];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (27u + sizeof(_g4_t_v13)) > _g4_s3 ? (27u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v15)) > _g4_s5 ? (44u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 27u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);

  glwebtools::JSONObject::begin((glwebtools::JSONObject::Self *)v12, a4);
  for ( i = v12[0]; ; i += 8 )
  {
    glwebtools::JSONObject::end((glwebtools::JSONObject::Self *)v12, (int)(uintptr_t)(a4));
    if ( i == v12[0] )
      break;
    v13 = 0;
    v5 = (glwebtools::Self *)glwebtools::Find(a2, a3, i, &v13);
    if ( !glwebtools::IsOperationSuccess(v5) )
      return v5;
    if ( v13 == 0 )
    {
      if ( (uint8_t)glwebtools::JsonWriter::isObject(self) == 0 )
      {
        glwebtools::Json::Value::Construct(v14, 7);
        Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
        glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v14);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v14);
      }
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v15);
      v11 = (glwebtools::Self *)glwebtools::JsonWriter::write(
                            (glwebtools::JsonWriter::Self *)v15,
                            (const glwebtools::JSONValue::Self *)(i + 4));
      if ( glwebtools::IsOperationSuccess(v11) )
      {
        v10 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v15);
        v8 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
        v9 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v8, i);
        glwebtools::Json::Value::opAssign(v9, v10);
        v11 = nullptr;
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v15);
      if ( !glwebtools::IsOperationSuccess(v11) )
        return v11;
    }
  }
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JsonWriter::exclude  (binary VA: 0x13e4c50)
// Original: glwebtools::JsonWriter::exclude
// ----------------------------------------------------------------------------
unsigned int glwebtools::JsonWriter::exclude(glwebtools::JsonWriter::Self *self, unsigned int *a2, unsigned int *a3, const glwebtools::JSONArray::Self *a4)
{
  unsigned int *i;
  char v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int *v8;
  const glwebtools::Json::Value::Self *v10;
  glwebtools::Json::Value::Self *v11;
  glwebtools::Json::Value::Self *v12;
  glwebtools::Json::Value::Self *Root;
  typedef char _g4_t_v14;
  typedef unsigned int _g4_t_v15;
  typedef uint32_t _g4_t_v16[4];
  typedef uint8_t _g4_t_v17[16];
  typedef uint8_t _g4_t_v18[48];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v17)) > _g4_s3 ? (28u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v18)) > _g4_s4 ? (44u + sizeof(_g4_t_v18)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  glwebtools::JSONArray::begin((glwebtools::JSONArray::Self *)v16, a4);
  for ( i = (unsigned int *)v16[0]; ; i += 2 )
  {
    glwebtools::JSONArray::end((glwebtools::JSONArray::Self *)v16, (int)(uintptr_t)(a4));
    if ( i == (unsigned int *)v16[0] )
      break;
    v5 = 0;
    v6 = *i;
    v7 = 0x80000002;
    if ( a2 != nullptr && a3 != nullptr )
    {
      v7 = 0;
      if ( a2 != a3 )
      {
        v5 = 1;
        if ( v6 != *a2 )
        {
          v8 = a2;
          do
          {
            if ( a3 == ++v8 )
            {
              v5 = 0;
              v7 = 0;
              goto LABEL_11;
            }
          }
          while ( v6 != *v8 );
          v5 = 1;
          v7 = 0;
        }
      }
    }
LABEL_11:
    v14 = v5;
    if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v7) )
      return v7;
    if ( v14 == 0 )
    {
      v15 = *i;
      if ( (uint8_t)glwebtools::JsonWriter::isArray(self) == 0 )
      {
        glwebtools::Json::Value::Construct(v17, 6);
        Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
        glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v17);
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v17);
      }
      glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v18);
      v7 = glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v18, (const glwebtools::JSONValue::Self *)(i + 1));
      if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v7) )
      {
        v10 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v18);
        v11 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(self);
        v12 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v11, v15);
        glwebtools::Json::Value::opAssign(v12, v10);
        v7 = 0;
      }
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v18);
      if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v7) )
        return v7;
    }
  }
  return 0;
}


