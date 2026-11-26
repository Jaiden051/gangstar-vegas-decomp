#include "Core/Utils/DecompTypes.h"
#include "iap_BillingMethodArray.h"

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodArray::Destroy  (binary VA: 0x14fd0c0)
// Original: iap::BillingMethodArray::~BillingMethodArray
// ----------------------------------------------------------------------------
void iap::BillingMethodArray::Destroy(iap::BillingMethodArray::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  uint32_t *v4;

  v1 = *((uint32_t **)self + 2);
  v2 = *((uint32_t **)self + 1);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2096068);
  if ( v1 != v2 )
  {
    do
    {
      v3 = *v2;
      v4 = v2;
      v2 += 27;
      (*(void (**)(uint32_t *))(v3 + 16))(v4);
    }
    while ( v1 != v2 );
    v2 = *((uint32_t **)self + 1);
  }
  if ( v2 != nullptr )
    sub_4EBEE0((int)(uintptr_t)(v2));
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodArray::Destroy_ea14fd120  (binary VA: 0x14fd120)
// Original: iap::BillingMethodArray::~BillingMethodArray
// ----------------------------------------------------------------------------
void iap::BillingMethodArray::Destroy_ea14fd120(iap::BillingMethodArray::Self *self)
{
  iap::BillingMethodArray::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodArray::write  (binary VA: 0x14fd160)
// Original: iap::BillingMethodArray::write
// ----------------------------------------------------------------------------
int iap::BillingMethodArray::write(iap::BillingMethodArray::Self *self, glwebtools::JsonWriter::Self *a2)
{
  int v2;
  glwebtools::Json::Value::Self *v3;
  glwebtools::Self *v4;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v6;
  glwebtools::Json::Value::Self *v7;
  typedef int _g4_t_i;
  typedef uint8_t _g4_t_v10[16];
  typedef uint8_t _g4_t_v11[16];
  typedef int _g4_t_v12[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v11)) > _g4_s2 ? (44u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v12)) > _g4_s3 ? (60u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);

  v2 = *((uint32_t *)self + 1);
  for ( i = *((uint32_t *)self + 2); i != v2; v2 += 108 )
  {
    if ( (uint8_t)glwebtools::JsonWriter::isArray(a2) == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v11), &loc_6);
      Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v11);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v11);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v12);
    glwebtools::Json::Value::Construct((int)(uintptr_t)(v10), nullptr);
    v3 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
    glwebtools::Json::Value::opAssign(v3, (const glwebtools::Json::Value::Self *)v10);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v10);
    v4 = (glwebtools::Self *)G4_VCALL<int>(v2, 4, v12);
    if ( glwebtools::IsOperationSuccess(v4) )
    {
      v6 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v12);
      v7 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::append(v7, v6);
      v4 = nullptr;
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v12);
    if ( !glwebtools::IsOperationSuccess(v4) )
      break;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodArray::read  (binary VA: 0x14fd2c0)
// Original: iap::BillingMethodArray::read
// ----------------------------------------------------------------------------
glwebtools::Self * iap::BillingMethodArray::read(int a1, int a2)
{
  glwebtools::Self *v2;
  glwebtools::Self *v3;
  int v4;
  glwebtools::Self *v5;
  typedef glwebtools::Self *_g4_t_v7;
  typedef glwebtools::Self *_g4_t_v8;
  typedef uint8_t _g4_t_v9[44];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  v2 = *(glwebtools::Self **)(a1 + 8);
  v8 = *(glwebtools::Self **)(a1 + 4);
  if ( v8 != v2 )
  {
    v3 = *(glwebtools::Self **)(a1 + 4);
    do
    {
      v4 = *(uint32_t *)v3;
      v7 = v3;
      v3 = (glwebtools::Self *)((char *)v3 + 108);
      (*(void (**)(glwebtools::Self *))(v4 + 16))(v7);
    }
    while ( v2 != v3 );
  }
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(v8);
  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v9);
  v5 = (glwebtools::Self *)glwebtools::JsonReader::parse((glwebtools::Json::Value::Self *)v9, a2);
  if ( glwebtools::IsOperationSuccess(v5) )
    v5 = (glwebtools::Self *)(**(int (***)(int, uint8_t *))a1)(a1, v9);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v9);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodArray::Size  (binary VA: 0x14ffc30)
// Original: iap::BillingMethodArray::Size
// ----------------------------------------------------------------------------
int iap::BillingMethodArray::Size(iap::BillingMethodArray::Self *self)
{
  return 1749801491 * ((*((uint32_t *)self + 2) - *((uint32_t *)self + 1)) >> 2);
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodArray::GetBillingMethod  (binary VA: 0x14ffc50)
// Original: iap::BillingMethodArray::GetBillingMethod
// ----------------------------------------------------------------------------
int iap::BillingMethodArray::GetBillingMethod(iap::BillingMethodArray::Self *self, unsigned int a2)
{
  int result;
  int v3;

  result = 0;
  v3 = *((uint32_t *)self + 1);
  if ( a2 < 1749801491 * ((*((uint32_t *)self + 2) - v3) >> 2) )
    return v3 + 108 * a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodArray::GetBillingMethod  (binary VA: 0x14ffc80)
// Original: iap::BillingMethodArray::GetBillingMethod
// ----------------------------------------------------------------------------
int iap::BillingMethodArray::GetBillingMethod(iap::BillingMethodArray::Self *self, char *s2, char *a3)
{
  int v3;
  int result;
  int v5;
  int v6;
  const char *s1;
  const char *Name;

  if ( a3 == nullptr )
    return 0;
  v3 = *((uint32_t *)self + 1);
  result = 0;
  if ( 1749801491 * ((*((uint32_t *)self + 2) - v3) >> 2) != 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = 108 * v5;
      s1 = (const char *)iap::BillingMethod::GetType((iap::BillingMethod::Self *)(108 * v5 + v3));
      if ( strcmp(s1, s2) == 0 )
      {
        Name = (const char *)iap::BillingMethod::GetName((iap::BillingMethod::Self *)(v6 + *((uint32_t *)self + 1)));
        if ( strcmp(Name, a3) == 0 )
          break;
      }
      v3 = *((uint32_t *)self + 1);
      if ( ++v5 >= (unsigned int)(1749801491 * ((*((uint32_t *)self + 2) - v3) >> 2)) )
        return 0;
    }
    return v6 + *((uint32_t *)self + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodArray::opIndex  (binary VA: 0x14ffd40)
// Original: iap::BillingMethodArray::operator[]
// ----------------------------------------------------------------------------
int iap::BillingMethodArray::opIndex(iap::BillingMethodArray::Self *self, unsigned int a2)
{
  return iap::BillingMethodArray::GetBillingMethod(self, a2);
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodArray::Clear  (binary VA: 0x14ffd70)
// Original: iap::BillingMethodArray::Clear
// ----------------------------------------------------------------------------
uint32_t * iap::BillingMethodArray::Clear(iap::BillingMethodArray::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  int v3;
  uint32_t *v5;
  uint32_t *v6;

  v1 = *((uint32_t **)self + 2);
  v6 = *((uint32_t **)self + 1);
  if ( v6 != v1 )
  {
    v2 = *((uint32_t **)self + 1);
    do
    {
      v3 = *v2;
      v5 = v2;
      v2 += 27;
      (*(void (**)(uint32_t *))(v3 + 16))(v5);
    }
    while ( v1 != v2 );
  }
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v6);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: iap::BillingMethodArray::read  (binary VA: 0x14fffb0)
// Original: iap::BillingMethodArray::read
// ----------------------------------------------------------------------------
int iap::BillingMethodArray::read(long double a1, iap::BillingMethodArray::Self *self, const glwebtools::JsonReader::Self *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  unsigned int v6;
  int v7;
  glwebtools::Self *v8;
  int v9;
  int v10;
  char v11;
  char v12;
  char v13;
  char v14;
  char v15;
  int v16;
  bool v17;
  int v18;
  int j;
  int v21;
  int v22;
  int v23;
  int v24;
  int i;
  uint32_t *v26;
  uint32_t *v27;
  int v28;
  typedef uint32_t *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef size_t _g4_t_v44;
  typedef int _g4_t_v45;
  typedef const glwebtools::JsonReader::Self *_g4_t_v46;
  typedef iap::BillingMethodArray::Self *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef char _g4_t_v54[16];
  typedef int _g4_t_v55[2];
  typedef uint8_t _g4_t_v56[8];
  typedef int _g4_t_v57[4];
  typedef uint32_t (**_g4_t_v58)(iap::BillingMethod::Self *, const glwebtools::JsonReader::Self *);
  typedef uint32_t *_g4_t_v59;
  typedef char _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef char _g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef char _g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef char _g4_t_v66;
  typedef int64_t _g4_t_v67;
  typedef char _g4_t_v68;
  typedef uint32_t *_g4_t_v69;
  typedef char _g4_t_v70;
  typedef int64_t _g4_t_v71 __attribute__((aligned(1)));
  typedef char _g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef char _g4_t_v74;
  typedef uint32_t *_g4_t_v75;
  typedef uint32_t *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int *_g4_t_v79;
  typedef int *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef iap::BillingMethodArray::Self **_g4_t_v82;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v29)) > _g4_s0 ? (4u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v30)) > _g4_s1 ? (4u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v31)) > _g4_s2 ? (12u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v32)) > _g4_s3 ? (16u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v33)) > _g4_s4 ? (20u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v34)) > _g4_s5 ? (24u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v35)) > _g4_s6 ? (28u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v36)) > _g4_s7 ? (32u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v37)) > _g4_s8 ? (36u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v38)) > _g4_s9 ? (40u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v39)) > _g4_s10 ? (44u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v40)) > _g4_s11 ? (48u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v41)) > _g4_s12 ? (52u + sizeof(_g4_t_v41)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v42)) > _g4_s13 ? (56u + sizeof(_g4_t_v42)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v43)) > _g4_s14 ? (60u + sizeof(_g4_t_v43)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v44)) > _g4_s15 ? (64u + sizeof(_g4_t_v44)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v45)) > _g4_s16 ? (68u + sizeof(_g4_t_v45)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v46)) > _g4_s17 ? (72u + sizeof(_g4_t_v46)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v47)) > _g4_s18 ? (76u + sizeof(_g4_t_v47)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v48)) > _g4_s19 ? (80u + sizeof(_g4_t_v48)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v49)) > _g4_s20 ? (84u + sizeof(_g4_t_v49)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v50)) > _g4_s21 ? (88u + sizeof(_g4_t_v50)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v51)) > _g4_s22 ? (92u + sizeof(_g4_t_v51)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v52)) > _g4_s23 ? (96u + sizeof(_g4_t_v52)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v53)) > _g4_s24 ? (96u + sizeof(_g4_t_v53)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v54)) > _g4_s25 ? (100u + sizeof(_g4_t_v54)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v55)) > _g4_s26 ? (116u + sizeof(_g4_t_v55)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v56)) > _g4_s27 ? (124u + sizeof(_g4_t_v56)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v57)) > _g4_s28 ? (132u + sizeof(_g4_t_v57)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v58)) > _g4_s29 ? (148u + sizeof(_g4_t_v58)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v59)) > _g4_s30 ? (152u + sizeof(_g4_t_v59)) : _g4_s30,
    _g4_s32 = (158u + sizeof(_g4_t_v60)) > _g4_s31 ? (158u + sizeof(_g4_t_v60)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v61)) > _g4_s32 ? (160u + sizeof(_g4_t_v61)) : _g4_s32,
    _g4_s34 = (166u + sizeof(_g4_t_v62)) > _g4_s33 ? (166u + sizeof(_g4_t_v62)) : _g4_s33,
    _g4_s35 = (168u + sizeof(_g4_t_v63)) > _g4_s34 ? (168u + sizeof(_g4_t_v63)) : _g4_s34,
    _g4_s36 = (174u + sizeof(_g4_t_v64)) > _g4_s35 ? (174u + sizeof(_g4_t_v64)) : _g4_s35,
    _g4_s37 = (176u + sizeof(_g4_t_v65)) > _g4_s36 ? (176u + sizeof(_g4_t_v65)) : _g4_s36,
    _g4_s38 = (182u + sizeof(_g4_t_v66)) > _g4_s37 ? (182u + sizeof(_g4_t_v66)) : _g4_s37,
    _g4_s39 = (184u + sizeof(_g4_t_v67)) > _g4_s38 ? (184u + sizeof(_g4_t_v67)) : _g4_s38,
    _g4_s40 = (194u + sizeof(_g4_t_v68)) > _g4_s39 ? (194u + sizeof(_g4_t_v68)) : _g4_s39,
    _g4_s41 = (196u + sizeof(_g4_t_v69)) > _g4_s40 ? (196u + sizeof(_g4_t_v69)) : _g4_s40,
    _g4_s42 = (202u + sizeof(_g4_t_v70)) > _g4_s41 ? (202u + sizeof(_g4_t_v70)) : _g4_s41,
    _g4_s43 = (204u + sizeof(_g4_t_v71)) > _g4_s42 ? (204u + sizeof(_g4_t_v71)) : _g4_s42,
    _g4_s44 = (214u + sizeof(_g4_t_v72)) > _g4_s43 ? (214u + sizeof(_g4_t_v72)) : _g4_s43,
    _g4_s45 = (216u + sizeof(_g4_t_v73)) > _g4_s44 ? (216u + sizeof(_g4_t_v73)) : _g4_s44,
    _g4_s46 = (222u + sizeof(_g4_t_v74)) > _g4_s45 ? (222u + sizeof(_g4_t_v74)) : _g4_s45,
    _g4_s47 = (224u + sizeof(_g4_t_v75)) > _g4_s46 ? (224u + sizeof(_g4_t_v75)) : _g4_s46,
    _g4_s48 = (228u + sizeof(_g4_t_v76)) > _g4_s47 ? (228u + sizeof(_g4_t_v76)) : _g4_s47,
    _g4_s49 = (236u + sizeof(_g4_t_v77)) > _g4_s48 ? (236u + sizeof(_g4_t_v77)) : _g4_s48,
    _g4_s50 = (240u + sizeof(_g4_t_v78)) > _g4_s49 ? (240u + sizeof(_g4_t_v78)) : _g4_s49,
    _g4_s51 = (244u + sizeof(_g4_t_v79)) > _g4_s50 ? (244u + sizeof(_g4_t_v79)) : _g4_s50,
    _g4_s52 = (248u + sizeof(_g4_t_v80)) > _g4_s51 ? (248u + sizeof(_g4_t_v80)) : _g4_s51,
    _g4_s53 = (252u + sizeof(_g4_t_v81)) > _g4_s52 ? (252u + sizeof(_g4_t_v81)) : _g4_s52,
    _g4_s54 = (268u + sizeof(_g4_t_v82)) > _g4_s53 ? (268u + sizeof(_g4_t_v82)) : _g4_s53
  };
  alignas(16) uint8_t _g4_sf[_g4_s54];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 24u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 64u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 68u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 72u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 76u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 80u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 84u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 88u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 92u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 96u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 96u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 100u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 116u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 124u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 132u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 148u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 152u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 158u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 160u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 166u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 168u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 174u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 176u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 182u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 184u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 194u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 196u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 202u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 204u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 214u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 216u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 222u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 224u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 228u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 236u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 240u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 244u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 248u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 252u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 268u);

  v82 = &self;
  v47 = self;
  v46 = a3;
  v3 = *((uint32_t **)self + 2);
  v52 = *((uint32_t **)self + 1);
  if ( v52 != v3 )
  {
    v4 = *((uint32_t **)self + 1);
    do
    {
      v5 = *v4;
      v29 = v4;
      v4 += 27;
      (*(void (**)(uint32_t *))(v5 + 16))(v29);
    }
    while ( v3 != v4 );
  }
  *((uint32_t *)v47 + 2) = (uint32_t)(uintptr_t)(v52);
  if ( (uint8_t)glwebtools::JsonReader::isArray(v46) == 0 )
    return -2147483646;
  v6 = glwebtools::JsonReader::size(v46);
  if ( v6 > 0x25ED097 )
    sub_1900180("vector::reserve");
  v7 = *((uint32_t *)v47 + 1);
  if ( v6 > 1749801491 * ((*((uint32_t *)v47 + 3) - v7) >> 2) )
  {
    v44 = 0;
    v45 = *((uint32_t *)v47 + 2);
    v49 = 0;
    v43 = 1749801491 * ((v45 - v7) >> 2);
    if ( v6 != 0 )
    {
      v44 = 108 * v6;
      v49 = sub_4EBE70(108 * v6, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    }
    if ( v7 != v45 )
    {
      v53 = v7;
      v21 = v49;
      do
      {
        if ( v21 != 0 )
        {
          v51 = v21 - v49;
          *(uint32_t *)v21 = ((uint32_t)(uintptr_t)&off_2096048);
          *(uint32_t *)(v21 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v21 + 4, v53 + 4);
          v48 = v53 - v7;
          *(uint8_t *)(v51 + v49 + 4 + 6) = *(uint8_t *)(v53 + 10);
          *(uint32_t *)(v21 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v21 + 12, v53 + 12);
          *(uint8_t *)(v51 + v49 + 12 + 6) = *(uint8_t *)(v53 + 18);
          *(uint32_t *)(v21 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v21 + 20, v53 + 20);
          *(uint8_t *)(v51 + v49 + 20 + 6) = *(uint8_t *)(v53 + 26);
          *(uint32_t *)(v21 + 28) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v21 + 28, v53 + 28);
          *(uint8_t *)(v51 + v49 + 28 + 6) = *(uint8_t *)(v53 + 34);
          *(uint64_t *)(v21 + 36) = *(uint64_t *)(v53 + 36);
          *(uint8_t *)(v49 + v51 + 46) = *(uint8_t *)(v53 + 46);
          *(uint32_t *)(v21 + 48) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v21 + 48, v53 + 48);
          *(uint8_t *)(v51 + v49 + 48 + 6) = *(uint8_t *)(v53 + 54);
          *(uint64_t *)(v21 + 56) = *(uint64_t *)(v53 + 56);
          *(uint8_t *)(v49 + v51 + 66) = *(uint8_t *)(v53 + 66);
          *(uint32_t *)(v21 + 68) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v21 + 68, v53 + 68);
          *(uint8_t *)(v51 + v49 + 68 + 6) = *(uint8_t *)(v53 + 74);
          g4_std::string::construct_copy(v21 + 76, v53 + 76);
          g4_std::string::construct_copy(v21 + 80, v53 + 80);
          v40 = v21 + 84;
          v50 = v49 + 84;
          v22 = v49 + 84;
          *(uint32_t *)(v51 + v50 + 4) = 0;
          *(uint32_t *)(v51 + v50 + 8) = 0;
          *(uint32_t *)(v51 + v50 + 20) = 0;
          *(uint32_t *)(v51 + v22 + 12) = v21 + 88;
          *(uint32_t *)(v51 + v22 + 16) = v21 + 88;
          v23 = *(uint32_t *)(v53 + 92);
          if ( v23 != 0 )
          {
            v24 = (int)(uintptr_t)(g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                    v40,
                    v23,
                    v21 + 88));
            *(uint32_t *)(v21 + 92) = v24;
            for ( i = v24; *(uint32_t *)(i + 8) != 0; i = *(uint32_t *)(i + 8) )
              ;
            *(uint32_t *)(v21 + 96) = i;
            while ( *(uint32_t *)(v24 + 12) != 0 )
              v24 = *(uint32_t *)(v24 + 12);
            *(uint32_t *)(v21 + 100) = v24;
            *(uint32_t *)(v51 + v50 + 20) = *(uint32_t *)(v53 + 104);
          }
        }
        v53 += 108;
        v21 += 108;
      }
      while ( v45 != v53 );
    }
    v26 = *((uint32_t **)v47 + 2);
    v27 = *((uint32_t **)v47 + 1);
    if ( v26 != v27 )
    {
      do
      {
        v28 = *v27;
        v30 = v27;
        v27 += 27;
        (*(void (**)(uint32_t *))(v28 + 16))(v30);
      }
      while ( v26 != v27 );
      v27 = *((uint32_t **)v47 + 1);
    }
    if ( v27 != nullptr )
      sub_4EBEE0((int)(uintptr_t)(v27));
    *((uint32_t *)v47 + 1) = v49;
    *((uint32_t *)v47 + 2) = v49 + 108 * v43;
    *((uint32_t *)v47 + 3) = v44 + v49;
  }
  glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v55);
  while ( 1 )
  {
    glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v56);
    if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                            (glwebtools::JsonReader::Iterator::Self *)v55,
                            (const glwebtools::JsonReader::Iterator::Self *)v56) == 0 )
      break;
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v58 = (uint32_t (**)(iap::BillingMethod::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2096048));
    v79 = &v77;
    v80 = &v77;
    v59 = &dword_213B814;
    v61 = &dword_213B814;
    v63 = &dword_213B814;
    v65 = &dword_213B814;
    v69 = &dword_213B814;
    v70 = 0;
    v72 = 0;
    v73 = &dword_213B814;
    v74 = 0;
    v75 = &dword_213B814;
    v76 = &dword_213B814;
    v77 = 0;
    v78 = 0;
    v81 = 0;
    glwebtools::JsonReader::Iterator::opMul(
      (glwebtools::JsonReader::Iterator::Self *)v57,
      (glwebtools::Json::ValueIteratorBase::Self *)v55);
    v8 = (glwebtools::Self *)iap::BillingMethod::read(
                         a1,
                         (iap::BillingMethod::Self *)&v58,
                         (const glwebtools::JsonReader::Self *)v57,
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
                         (int)((uint32_t)(uintptr_t)&off_2096048),
                         v42,
                         v43,
                         v44,
                         v45,
                         (int)(uintptr_t)(v46),
                         (int)(uintptr_t)(v47),
                         v48,
                         v49);
    LOBYTE(v42) = glwebtools::IsOperationSuccess(v8);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v57);
    if ( (uint8_t)v42 != 0 )
    {
      v9 = *((uint32_t *)v47 + 2);
      if ( v9 == *((uint32_t *)v47 + 3) )
      {
        g4_std::vector_iap_BillingMethod_glwebt_16743f::M_insert_aux(
          (char *)v47 + 4,
          *((uint32_t *)v47 + 2),
          &v58);
      }
      else
      {
        v10 = 0;
        if ( v9 != 0 )
        {
          *(uint32_t *)v9 = v41;
          *(uint32_t *)(v9 + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
          g4_std::string::assign_str(v9 + 4, &v59);
          v11 = v60;
          *(uint32_t *)(v9 + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
          *(uint8_t *)(v9 + 10) = v11;
          g4_std::string::assign_str(v9 + 12, &v61);
          v12 = v62;
          *(uint32_t *)(v9 + 20) = (uint32_t)(uintptr_t)(&dword_213B814);
          *(uint8_t *)(v9 + 18) = v12;
          g4_std::string::assign_str(v9 + 20, &v63);
          v13 = v64;
          *(uint32_t *)(v9 + 28) = (uint32_t)(uintptr_t)(&dword_213B814);
          *(uint8_t *)(v9 + 26) = v13;
          g4_std::string::assign_str(v9 + 28, &v65);
          v14 = v66;
          *(uint32_t *)(v9 + 48) = (uint32_t)(uintptr_t)(&dword_213B814);
          *(uint8_t *)(v9 + 34) = v14;
          *(uint64_t *)(v9 + 36) = v67;
          *(uint8_t *)(v9 + 46) = v68;
          g4_std::string::assign_str(v9 + 48, &v69);
          v15 = v70;
          *(uint32_t *)(v9 + 68) = (uint32_t)(uintptr_t)(&dword_213B814);
          *(uint8_t *)(v9 + 54) = v15;
          *(uint64_t *)(v9 + 56) = v71;
          *(uint8_t *)(v9 + 66) = v72;
          g4_std::string::assign_str(v9 + 68, &v73);
          *(uint8_t *)(v9 + 74) = v74;
          g4_std::string::construct_copy(v9 + 76, &v75);
          g4_std::string::construct_copy(v9 + 80, &v76);
          *(uint32_t *)(v9 + 88) = 0;
          *(uint32_t *)(v9 + 92) = 0;
          v16 = v78;
          v17 = v78 == 0;
          *(uint32_t *)(v9 + 104) = 0;
          *(uint32_t *)(v9 + 96) = v9 + 88;
          *(uint32_t *)(v9 + 100) = v9 + 88;
          if ( v17 )
          {
            v10 = *((uint32_t *)v47 + 2);
          }
          else
          {
            v18 = (int)(uintptr_t)(g4_std::Rb_tree_glwebtools_CustomAttribu_b8c94c::M_copy(
                    v9 + 84,
                    v16,
                    v9 + 88));
            *(uint32_t *)(v9 + 92) = v18;
            for ( j = v18; *(uint32_t *)(j + 8) != 0; j = *(uint32_t *)(j + 8) )
              ;
            *(uint32_t *)(v9 + 96) = j;
            while ( *(uint32_t *)(v18 + 12) != 0 )
              v18 = *(uint32_t *)(v18 + 12);
            *(uint32_t *)(v9 + 100) = v18;
            *(uint32_t *)(v9 + 104) = v81;
            v10 = *((uint32_t *)v47 + 2);
          }
        }
        *((uint32_t *)v47 + 2) = v10 + 108;
      }
    }
    iap::BillingMethod::Destroy((iap::BillingMethod::Self *)&v58);
    v31 = 0;
    glwebtools::JsonReader::Iterator::opInc(
      (glwebtools::JsonReader::Iterator::Self *)v54,
      (glwebtools::JsonReader::Iterator::Self *)v55);
  }
  return 0;
}


