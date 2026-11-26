#include "Core/Utils/DecompTypes.h"
#include "iap_StoreItemLegacyArray.h"

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::KeepItem  (binary VA: 0x1509fc0)
// Original: iap::StoreItemLegacyArray::KeepItem
// ----------------------------------------------------------------------------
int iap::StoreItemLegacyArray::KeepItem()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::Comparator::Destroy  (binary VA: 0x1509fd0)
// Original: iap::StoreItemLegacyArray::Comparator::~Comparator
// ----------------------------------------------------------------------------
void iap::StoreItemLegacyArray::Comparator::Destroy(iap::StoreItemLegacyArray::Comparator::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2096180);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::Comparator::Destroy_ea1509ff0  (binary VA: 0x1509ff0)
// Original: iap::StoreItemLegacyArray::Comparator::~Comparator
// ----------------------------------------------------------------------------
void iap::StoreItemLegacyArray::Comparator::Destroy_ea1509ff0(iap::StoreItemLegacyArray::Comparator::Self *self)
{
  iap::StoreItemLegacyArray::Comparator::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::read  (binary VA: 0x150a030)
// Original: iap::StoreItemLegacyArray::read
// ----------------------------------------------------------------------------
glwebtools::Self * iap::StoreItemLegacyArray::read(int (***a1)(uint32_t, uint8_t *), int a2)
{
  glwebtools::Self *v2;
  uint8_t v4[28];

  glwebtools::JsonReader::Construct((glwebtools::JsonReader::Self *)v4);
  v2 = (glwebtools::Self *)glwebtools::JsonReader::parse((glwebtools::Json::Value::Self *)v4, a2);
  if ( glwebtools::IsOperationSuccess(v2) )
    v2 = (glwebtools::Self *)(**a1)((uint32_t)(uintptr_t)(a1), v4);
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v4);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::Destroy  (binary VA: 0x150a0b0)
// Original: iap::StoreItemLegacyArray::~StoreItemLegacyArray
// ----------------------------------------------------------------------------
void iap::StoreItemLegacyArray::Destroy(iap::StoreItemLegacyArray::Self *self)
{
  int v1;
  int *v2;
  int *v3;
  int v4;
  typedef int *_g4_t_v5;
  typedef char *_g4_t_v6;
  typedef char _g4_t_v7;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v7)) > _g4_s2 ? (31u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 31u);

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2096160);
  v1 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    v6 = &v7;
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((int **)self + 2);
  v3 = *((int **)self + 1);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *v3;
      v5 = v3;
      v3 += 36;
      (*(void (**)(int *, char *))(v4 + 8))(v5, v6);
    }
    while ( v2 != v3 );
    v3 = *((int **)self + 1);
  }
  if ( v3 != nullptr )
    sub_4EBEE0((int)(uintptr_t)(v3));
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::Destroy_ea150a140  (binary VA: 0x150a140)
// Original: iap::StoreItemLegacyArray::~StoreItemLegacyArray
// ----------------------------------------------------------------------------
void iap::StoreItemLegacyArray::Destroy_ea150a140(iap::StoreItemLegacyArray::Self *self)
{
  iap::StoreItemLegacyArray::Destroy(self);
  opDelete(self);
}



// ============================================================================
// Address:   0x150e0c0 (size: 42 bytes)
// Symbol:    _ZNK3iap20StoreItemLegacyArray10ComparatorclERKNS_15StoreItemLegacyES4_
// Demangled: iap::StoreItemLegacyArray::Comparator::operator()(iap::StoreItemLegacy const&,iap::StoreItemLegacy const&)const
// ============================================================================
char iap::StoreItemLegacyArray::Comparator::opCall(
        int a1,
        iap::StoreItemLegacy::Self *a2,
        iap::StoreItemLegacy::Self *a3)
{
  return iap::StoreItemLegacy::opLt(a2, a3);
}
// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::Construct  (binary VA: 0x150e1e0)
// Original: iap::StoreItemLegacyArray::StoreItemLegacyArray
// ----------------------------------------------------------------------------
iap::StoreItemLegacyArray::Self * iap::StoreItemLegacyArray::Construct(iap::StoreItemLegacyArray::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2096160);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  return self;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::GetItemCount  (binary VA: 0x150e220)
// Original: iap::StoreItemLegacyArray::GetItemCount
// ----------------------------------------------------------------------------
int iap::StoreItemLegacyArray::GetItemCount(iap::StoreItemLegacyArray::Self *self)
{
  return 954437177 * ((*((uint32_t *)self + 2) - *((uint32_t *)self + 1)) >> 4);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::GetItem  (binary VA: 0x150e240)
// Original: iap::StoreItemLegacyArray::GetItem
// ----------------------------------------------------------------------------
int iap::StoreItemLegacyArray::GetItem(iap::StoreItemLegacyArray::Self *self, unsigned int a2)
{
  int v2;
  int result;

  v2 = *((uint32_t *)self + 1);
  result = 0;
  if ( a2 < 954437177 * ((*((uint32_t *)self + 2) - v2) >> 4) )
    return v2 + 144 * a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::GetItem  (binary VA: 0x150e270)
// Original: iap::StoreItemLegacyArray::GetItem
// ----------------------------------------------------------------------------
int iap::StoreItemLegacyArray::GetItem(iap::StoreItemLegacyArray::Self *self, char *s2)
{
  int v2;
  int result;
  int v4;
  unsigned int v5;
  const char *s1;

  if ( s2 == nullptr )
    return 0;
  v2 = *((uint32_t *)self + 1);
  result = 0;
  if ( 954437177 * ((*((uint32_t *)self + 2) - v2) >> 4) != 0 )
  {
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      s1 = (const char *)iap::StoreItemLegacy::GetUid((iap::StoreItemLegacy::Self *)(v4 + v2));
      if ( strcmp(s1, s2) == 0 )
        break;
      v2 = *((uint32_t *)self + 1);
      ++v5;
      v4 += 144;
      if ( v5 >= 954437177 * ((*((uint32_t *)self + 2) - v2) >> 4) )
        return 0;
    }
    return v4 + *((uint32_t *)self + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::opIndex  (binary VA: 0x150e310)
// Original: iap::StoreItemLegacyArray::operator[]
// ----------------------------------------------------------------------------
int iap::StoreItemLegacyArray::opIndex(iap::StoreItemLegacyArray::Self *self, unsigned int a2)
{
  return iap::StoreItemLegacyArray::GetItem(self, a2);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::opIndex  (binary VA: 0x150e340)
// Original: iap::StoreItemLegacyArray::operator[]
// ----------------------------------------------------------------------------
int iap::StoreItemLegacyArray::opIndex(iap::StoreItemLegacyArray::Self *self, char *a2)
{
  return iap::StoreItemLegacyArray::GetItem(self, a2);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::Clear  (binary VA: 0x150e370)
// Original: iap::StoreItemLegacyArray::Clear
// ----------------------------------------------------------------------------
uint32_t * iap::StoreItemLegacyArray::Clear(iap::StoreItemLegacyArray::Self *self)
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
      v2 += 36;
      (*(void (**)(uint32_t *))(v3 + 8))(v5);
    }
    while ( v1 != v2 );
  }
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v6);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::Print  (binary VA: 0x150e3d0)
// Original: iap::StoreItemLegacyArray::Print
// ----------------------------------------------------------------------------
unsigned int iap::StoreItemLegacyArray::Print(iap::StoreItemLegacyArray::Self *self)
{
  iap::StoreItemLegacy::Self *i;
  unsigned int result;
  iap::StoreItemLegacy::Self *v3;

  for ( i = *((iap::StoreItemLegacy::Self **)self + 1);
        *((iap::StoreItemLegacy::Self **)self + 2) != i;
        result = iap::StoreItemLegacy::Print(v3) )
  {
    v3 = i;
    i = (iap::StoreItemLegacy::Self *)((char *)i + 144);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::setIconSavePath  (binary VA: 0x150e410)
// Original: iap::StoreItemLegacyArray::setIconSavePath
// ----------------------------------------------------------------------------
int iap::StoreItemLegacyArray::setIconSavePath(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 16, a2));
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::getIconSavePath  (binary VA: 0x150e440)
// Original: iap::StoreItemLegacyArray::getIconSavePath
// ----------------------------------------------------------------------------
int iap::StoreItemLegacyArray::getIconSavePath(iap::StoreItemLegacyArray::Self *self)
{
  return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::read  (binary VA: 0x150e690)
// Original: iap::StoreItemLegacyArray::read
// ----------------------------------------------------------------------------
unsigned int iap::StoreItemLegacyArray::read(iap::StoreItemLegacyArray::Self *self, const glwebtools::JsonReader::Self *a2)
{
  unsigned int v2;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  iap::StoreItemLegacyArray::Self *v6;
  char IsValid;
  int v8;
  iap::StoreItemLegacy::Self *v9;
  int v10;
  unsigned int v12;
  iap::StoreItemLegacy::Self *v13;
  iap::StoreItemLegacy::Self *v14;
  iap::StoreItemLegacy::Self *v15;
  const iap::StoreItemLegacy::Self *v16;
  iap::StoreItemLegacy::Self *v17;
  const iap::StoreItemLegacy::Self *v18;
  int v19;
  const iap::StoreItemLegacy::Self *v20;
  int v21;
  typedef uint32_t *_g4_t_v22;
  typedef const iap::StoreItemLegacy::Self *_g4_t_v23;
  typedef iap::StoreItemLegacy::Self *_g4_t_v24;
  typedef iap::StoreItemLegacy::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef iap::StoreItemLegacy::Self *_g4_t_v27;
  typedef iap::StoreItemLegacy::Self *_g4_t_v28;
  typedef iap::StoreItemLegacyArray::Self *_g4_t_v29;
  typedef iap::StoreItemLegacyArray::Self *_g4_t_v30;
  typedef iap::StoreItemLegacy::Self *_g4_t_v31;
  typedef iap::StoreItemLegacy::Self *_g4_t_v32;
  typedef iap::StoreItemLegacy::Self *_g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef int _g4_t_v35;
  typedef iap::StoreItemLegacyArray::Self *_g4_t_v36;
  typedef const iap::StoreItemLegacy::Self *_g4_t_v37;
  typedef const iap::StoreItemLegacy::Self *_g4_t_v38;
  typedef uint8_t _g4_t_v39[8];
  typedef uint8_t _g4_t_v40[8];
  typedef uint8_t _g4_t_v41[16];
  typedef uint8_t _g4_t_v42[16];
  typedef uint32_t _g4_t_v43[2];
  typedef char _g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef char _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef char _g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef char _g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef char _g4_t_v52;
  typedef char _g4_t_v53;
  typedef char _g4_t_v54;
  typedef char _g4_t_v55;
  typedef char _g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef char _g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef char _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef char _g4_t_v62;
  typedef uint32_t (**_g4_t_v63)(iap::BillingMethodArray::Self *, const glwebtools::JsonReader::Self *);
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint32_t _g4_t_v67[12];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v24)) > _g4_s2 ? (48u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v25)) > _g4_s3 ? (48u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v26)) > _g4_s4 ? (52u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v27)) > _g4_s5 ? (52u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v28)) > _g4_s6 ? (52u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v29)) > _g4_s7 ? (56u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v30)) > _g4_s8 ? (56u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v31)) > _g4_s9 ? (60u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v32)) > _g4_s10 ? (60u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v33)) > _g4_s11 ? (64u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v34)) > _g4_s12 ? (68u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v35)) > _g4_s13 ? (68u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v36)) > _g4_s14 ? (72u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v37)) > _g4_s15 ? (72u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v38)) > _g4_s16 ? (72u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v39)) > _g4_s17 ? (76u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v40)) > _g4_s18 ? (84u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v41)) > _g4_s19 ? (92u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v42)) > _g4_s20 ? (108u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v43)) > _g4_s21 ? (124u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (134u + sizeof(_g4_t_v44)) > _g4_s22 ? (134u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (136u + sizeof(_g4_t_v45)) > _g4_s23 ? (136u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (142u + sizeof(_g4_t_v46)) > _g4_s24 ? (142u + sizeof(_g4_t_v46)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v47)) > _g4_s25 ? (144u + sizeof(_g4_t_v47)) : _g4_s25,
    _g4_s27 = (150u + sizeof(_g4_t_v48)) > _g4_s26 ? (150u + sizeof(_g4_t_v48)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v49)) > _g4_s27 ? (152u + sizeof(_g4_t_v49)) : _g4_s27,
    _g4_s29 = (158u + sizeof(_g4_t_v50)) > _g4_s28 ? (158u + sizeof(_g4_t_v50)) : _g4_s28,
    _g4_s30 = (160u + sizeof(_g4_t_v51)) > _g4_s29 ? (160u + sizeof(_g4_t_v51)) : _g4_s29,
    _g4_s31 = (166u + sizeof(_g4_t_v52)) > _g4_s30 ? (166u + sizeof(_g4_t_v52)) : _g4_s30,
    _g4_s32 = (174u + sizeof(_g4_t_v53)) > _g4_s31 ? (174u + sizeof(_g4_t_v53)) : _g4_s31,
    _g4_s33 = (182u + sizeof(_g4_t_v54)) > _g4_s32 ? (182u + sizeof(_g4_t_v54)) : _g4_s32,
    _g4_s34 = (190u + sizeof(_g4_t_v55)) > _g4_s33 ? (190u + sizeof(_g4_t_v55)) : _g4_s33,
    _g4_s35 = (198u + sizeof(_g4_t_v56)) > _g4_s34 ? (198u + sizeof(_g4_t_v56)) : _g4_s34,
    _g4_s36 = (200u + sizeof(_g4_t_v57)) > _g4_s35 ? (200u + sizeof(_g4_t_v57)) : _g4_s35,
    _g4_s37 = (206u + sizeof(_g4_t_v58)) > _g4_s36 ? (206u + sizeof(_g4_t_v58)) : _g4_s36,
    _g4_s38 = (208u + sizeof(_g4_t_v59)) > _g4_s37 ? (208u + sizeof(_g4_t_v59)) : _g4_s37,
    _g4_s39 = (214u + sizeof(_g4_t_v60)) > _g4_s38 ? (214u + sizeof(_g4_t_v60)) : _g4_s38,
    _g4_s40 = (216u + sizeof(_g4_t_v61)) > _g4_s39 ? (216u + sizeof(_g4_t_v61)) : _g4_s39,
    _g4_s41 = (222u + sizeof(_g4_t_v62)) > _g4_s40 ? (222u + sizeof(_g4_t_v62)) : _g4_s40,
    _g4_s42 = (224u + sizeof(_g4_t_v63)) > _g4_s41 ? (224u + sizeof(_g4_t_v63)) : _g4_s41,
    _g4_s43 = (228u + sizeof(_g4_t_v64)) > _g4_s42 ? (228u + sizeof(_g4_t_v64)) : _g4_s42,
    _g4_s44 = (232u + sizeof(_g4_t_v65)) > _g4_s43 ? (232u + sizeof(_g4_t_v65)) : _g4_s43,
    _g4_s45 = (236u + sizeof(_g4_t_v66)) > _g4_s44 ? (236u + sizeof(_g4_t_v66)) : _g4_s44,
    _g4_s46 = (244u + sizeof(_g4_t_v67)) > _g4_s45 ? (244u + sizeof(_g4_t_v67)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 108u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 124u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 134u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 136u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 142u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 144u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 150u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 152u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 158u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 160u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 166u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 174u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 182u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 190u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 198u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 200u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 206u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 208u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 214u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 216u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 222u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 224u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 228u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 232u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 236u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 244u);

  v2 = 0x80000000;
  v67[8] = (uint32_t)(uintptr_t)(&self);
  v36 = self;
  glwebtools::JsonReader::opIndex((glwebtools::JsonReader::Self *)v41, a2, "items");
  if ( (uint8_t)glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v41) != 0 )
  {
    v34 = *((uint32_t *)v36 + 1);
    v3 = *((uint32_t **)v36 + 2);
    if ( (uint32_t *)v34 != v3 )
    {
      v4 = *((uint32_t **)v36 + 1);
      do
      {
        v5 = *v4;
        v22 = v4;
        v4 += 36;
        (*(void (**)(uint32_t *))(v5 + 8))(v22);
      }
      while ( v3 != v4 );
    }
    *((uint32_t *)v36 + 2) = v34;
    glwebtools::JsonReader::begin((glwebtools::JsonReader::Self *)v39);
    v6 = v36;
    while ( 1 )
    {
      glwebtools::JsonReader::end((glwebtools::JsonReader::Self *)v40);
      if ( (uint8_t)glwebtools::JsonReader::Iterator::opNe(
                              (glwebtools::JsonReader::Iterator::Self *)v39,
                              (const glwebtools::JsonReader::Iterator::Self *)v40) == 0 )
        break;
      v44 = 0;
      v46 = 0;
      v48 = 0;
      v50 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v43[0] = ((uint32_t)(uintptr_t)&off_2096148);
      v43[1] = (uint32_t)(uintptr_t)(&dword_213B814);
      v45 = &dword_213B814;
      v47 = &dword_213B814;
      v49 = &dword_213B814;
      v51 = &dword_213B814;
      v57 = &dword_213B814;
      v59 = &dword_213B814;
      v61 = &dword_213B814;
      v63 = (uint32_t (**)(iap::BillingMethodArray::Self *, const glwebtools::JsonReader::Self *))(uintptr_t)(&off_2096068);
      v55 = 0;
      v56 = 0;
      v67[2] = (uint32_t)(uintptr_t)(v67);
      v67[3] = (uint32_t)(uintptr_t)(v67);
      v58 = 0;
      v60 = 0;
      v62 = 0;
      v64 = 0;
      v65 = 0;
      v66 = 0;
      v67[0] = 0;
      v67[1] = 0;
      v67[4] = 0;
      v67[5] = (uint32_t)(uintptr_t)(&dword_213B814);
      glwebtools::JsonReader::Iterator::opMul(
        (glwebtools::JsonReader::Iterator::Self *)v42,
        (glwebtools::Json::ValueIteratorBase::Self *)v39);
      IsValid = glwebtools::JsonReader::IsValid((glwebtools::JsonReader::Self *)v42);
      v8 = -2147483645;
      if ( IsValid != 0 )
        v8 = (*(int (**)(uint32_t *, uint8_t *))v43[0])(v43, v42);
      v24 = (iap::StoreItemLegacy::Self *)v8;
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v42);
      iap::StoreItemLegacy::setIconSavePath((int)(uintptr_t)(v43), (int)(uintptr_t)(v6) + 16);
      if ( v24 == nullptr
        && G4_VCALL<uint8_t>(v6, 16, v43) != 0 )
      {
        v9 = *((iap::StoreItemLegacy::Self **)v6 + 2);
        if ( v9 == *((iap::StoreItemLegacy::Self **)v6 + 3) )
        {
          v35 = 144;
          v12 = 954437177 * (((int)(uintptr_t)(v9) - *((uint32_t *)v6 + 1)) >> 4);
          if ( v12 != 0 )
          {
            if ( v12 > 2 * v12 || 1908874354 * (((int)(uintptr_t)(v9) - *((uint32_t *)v6 + 1)) >> 4) > (unsigned int)(uintptr_t)(&unk_1C71C71) )
              v35 = -112;
            else
              v35 = 32 * (((int)(uintptr_t)(v9) - *((uint32_t *)v6 + 1)) >> 4);
          }
          v25 = *((iap::StoreItemLegacy::Self **)v6 + 2);
          v26 = 954437177 * (((int)(uintptr_t)(v9) - *((uint32_t *)v6 + 1)) >> 4);
          v33 = (iap::StoreItemLegacy::Self *)sub_4EBE70(v35, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
          v13 = v25;
          v31 = (iap::StoreItemLegacy::Self *)((char *)v33 + 144);
          v14 = (iap::StoreItemLegacy::Self *)((char *)v33 + 144 * v26);
          if ( v14 != nullptr )
          {
            iap::StoreItemLegacy::Construct(v14, (const iap::StoreItemLegacy::Self *)v43);
            v13 = v25;
          }
          if ( v13 != *((iap::StoreItemLegacy::Self **)v6 + 1) )
          {
            v32 = (iap::StoreItemLegacy::Self *)(v6);
            v15 = v33;
            v37 = v13;
            v16 = *((const iap::StoreItemLegacy::Self **)v6 + 1);
            do
            {
              if ( v15 != nullptr )
              {
                v27 = v15;
                iap::StoreItemLegacy::Construct(v15, v16);
                v15 = v27;
              }
              v16 = (const iap::StoreItemLegacy::Self *)((char *)v16 + 144);
              v15 = (iap::StoreItemLegacy::Self *)((char *)v15 + 144);
            }
            while ( v37 != v16 );
            v6 = (iap::StoreItemLegacyArray::Self *)(v32);
            v13 = (iap::StoreItemLegacy::Self *)(v37);
            v31 = (iap::StoreItemLegacy::Self *)((char *)v15 + 144);
          }
          v38 = *((const iap::StoreItemLegacy::Self **)v6 + 2);
          if ( v13 != v38 )
          {
            v29 = v6;
            v17 = v31;
            v18 = v13;
            do
            {
              if ( v17 != nullptr )
              {
                v28 = v17;
                iap::StoreItemLegacy::Construct(v17, v18);
                v17 = v28;
              }
              v18 = (const iap::StoreItemLegacy::Self *)((char *)v18 + 144);
              v17 = (iap::StoreItemLegacy::Self *)((char *)v17 + 144);
            }
            while ( v38 != v18 );
            v6 = v29;
            v31 = v17;
            v38 = *((const iap::StoreItemLegacy::Self **)v29 + 2);
          }
          v19 = *((uint32_t *)v6 + 1);
          if ( v38 != (const iap::StoreItemLegacy::Self *)v19 )
          {
            v30 = v6;
            v20 = *((const iap::StoreItemLegacy::Self **)v6 + 1);
            do
            {
              v21 = *(uint32_t *)v20;
              v23 = v20;
              v20 = (const iap::StoreItemLegacy::Self *)((char *)v20 + 144);
              (*(void (**)(const iap::StoreItemLegacy::Self *))(v21 + 8))(v23);
            }
            while ( v38 != v20 );
            v6 = v30;
            v19 = *((uint32_t *)v30 + 1);
          }
          if ( v19 != 0 )
            sub_4EBEE0(v19);
          *((uint32_t *)v6 + 1) = (uint32_t)(uintptr_t)(v33);
          *((uint32_t *)v6 + 2) = (uint32_t)(uintptr_t)(v31);
          *((uint32_t *)v6 + 3) = (uint32_t)(uintptr_t)((char *)v33 + v35);
        }
        else
        {
          v10 = 0;
          if ( v9 != nullptr )
          {
            iap::StoreItemLegacy::Construct(v9, (const iap::StoreItemLegacy::Self *)v43);
            v10 = *((uint32_t *)v6 + 2);
          }
          *((uint32_t *)v6 + 2) = v10 + 144;
        }
      }
      iap::StoreItemLegacy::Destroy((iap::StoreItemLegacy::Self *)v43);
      glwebtools::JsonReader::Iterator::opInc((glwebtools::JsonReader::Iterator::Self *)v39);
    }
    v2 = 0;
  }
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v41);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::Sort  (binary VA: 0x150eb70)
// Original: iap::StoreItemLegacyArray::Sort
// ----------------------------------------------------------------------------
void iap::StoreItemLegacyArray::Sort(iap::StoreItemLegacyArray::Self *self, const iap::StoreItemLegacyArray::Comparator::Self *a2)
{
  int v2;
  iap::StoreItemLegacy::Self *v3;
  int v4;
  const iap::StoreItemLegacy::Self *v5;
  const iap::StoreItemLegacy::Self *v6;
  const iap::StoreItemLegacy::Self *v7;
  char v8;
  typedef iap::StoreItemLegacy::Self *_g4_t_v9;
  typedef const iap::StoreItemLegacy::Self *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[172];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v12)) > _g4_s3 ? (16u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  v2 = *((uint32_t *)self + 2);
  v3 = *((iap::StoreItemLegacy::Self **)self + 1);
  v11 = v2;
  if ( (iap::StoreItemLegacy::Self *)v2 != v3 )
  {
    v4 = v2 - (uint32_t)(uintptr_t)(v3);
    _BitScanReverse((unsigned int *)&v2, 954437177 * ((v2 - (int)(uintptr_t)(v3)) >> 4));
    g4_std::introsort_loop_gnu_cxx_normal_iterator_f50785(
      v3,
      v11,
      2 * (31 - (v2 ^ 0x1F)),
      a2);
    if ( v4 <= 2447 )
    {
      g4_std::insertion_sort_gnu_cxx_normal_iterator_3b841c(
        v3,
        v11,
        (int)(uintptr_t)(a2));
    }
    else
    {
      g4_std::insertion_sort_gnu_cxx_normal_iterator_3b841c(
        v3,
        (int)(uintptr_t)(v3) + 2304,
        (int)(uintptr_t)(a2));
      if ( (iap::StoreItemLegacy::Self *)v11 != (iap::StoreItemLegacy::Self *)((char *)v3 + 2304) )
      {
        v10 = (iap::StoreItemLegacy::Self *)((char *)v3 + 2304);
        v5 = (iap::StoreItemLegacy::Self *)((char *)v3 + 2304);
        do
        {
          v9 = (iap::StoreItemLegacy::Self *)(v5);
          iap::StoreItemLegacy::Construct((iap::StoreItemLegacy::Self *)v12, v5);
          v6 = (const iap::StoreItemLegacy::Self *)((char *)v10 - 144);
          while ( 1 )
          {
            v7 = v6;
            v8 = G4_VCALL<int>(a2, 8, v12, v6);
            v6 = (const iap::StoreItemLegacy::Self *)((char *)v6 - 144);
            if ( v8 == 0 )
              break;
            iap::StoreItemLegacy::opAssign(v9, v7);
            v9 = (iap::StoreItemLegacy::Self *)(v7);
          }
          iap::StoreItemLegacy::opAssign(v9, (const iap::StoreItemLegacy::Self *)v12);
          iap::StoreItemLegacy::Destroy((iap::StoreItemLegacy::Self *)v12);
          v10 = (const iap::StoreItemLegacy::Self *)((char *)v10 + 144);
          v5 = v10;
        }
        while ( (const iap::StoreItemLegacy::Self *)v11 != v10 );
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: iap::StoreItemLegacyArray::Sort  (binary VA: 0x150ecd0)
// Original: iap::StoreItemLegacyArray::Sort
// ----------------------------------------------------------------------------
void iap::StoreItemLegacyArray::Sort(iap::StoreItemLegacyArray::Self *self)
{
  uint32_t v1[2];

  v1[0] = ((uint32_t)(uintptr_t)&off_2096180);
  iap::StoreItemLegacyArray::Sort(self, (const iap::StoreItemLegacyArray::Comparator::Self *)v1);
  iap::StoreItemLegacyArray::Comparator::Destroy((iap::StoreItemLegacyArray::Comparator::Self *)v1);
}


