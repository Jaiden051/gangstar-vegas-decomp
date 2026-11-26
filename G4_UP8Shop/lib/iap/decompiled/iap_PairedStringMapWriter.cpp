#include "Core/Utils/DecompTypes.h"
#include "iap_PairedStringMapWriter.h"

// ----------------------------------------------------------------------------
// Function: iap::PairedStringMapWriter::Construct  (binary VA: 0x15369d0)
// Original: iap::PairedStringMapWriter::PairedStringMapWriter
// ----------------------------------------------------------------------------
uint32_t * iap::PairedStringMapWriter::Construct(uint32_t *a1, int a2)
{
  *a1 = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: iap::PairedStringMapWriter::write  (binary VA: 0x15369e0)
// Original: iap::PairedStringMapWriter::write
// ----------------------------------------------------------------------------
int iap::PairedStringMapWriter::write(iap::PairedStringMapWriter::Self *self, glwebtools::JsonWriter::Self *a2)
{
  int i;
  glwebtools::Self *v3;
  void *v4;
  void *v5;
  glwebtools::Json::Value::Self *Root;
  glwebtools::Json::Value::Self *v7;
  glwebtools::Json::Value::Self *v8;
  typedef const glwebtools::Json::Value::Self *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[3];
  typedef uint8_t _g4_t_v15[16];
  typedef uint8_t _g4_t_v16[32];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v13)) > _g4_s3 ? (36u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v14)) > _g4_s4 ? (48u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v15)) > _g4_s5 ? (60u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v16)) > _g4_s6 ? (76u + sizeof(_g4_t_v16)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);

  for ( i = *(uint32_t *)(*(uint32_t *)self + 12); i != *(uint32_t *)self + 4; i = sub_19048E0(i) )
  {
    g4_std::string::construct_copy(&v12, i + 16);
    v13 = i + 20;
    g4_std::string::construct_copy(v14, &v12);
    v11 = v13;
    v14[1] = v13;
    if ( (uint8_t)glwebtools::JsonWriter::isObject(a2) == 0 )
    {
      glwebtools::Json::Value::Construct((int)(uintptr_t)(v15), (char *)&loc_6 + 1);
      Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v15);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v15);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v16);
    v3 = (glwebtools::Self *)glwebtools::JsonWriter::write((glwebtools::JsonWriter::Self *)v16, v11);
    if ( glwebtools::IsOperationSuccess(v3) )
    {
      v10 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v16);
      v7 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot(a2);
      v8 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v7, (char **)v14);
      glwebtools::Json::Value::opAssign(v8, v10);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v16);
    v4 = (void *)(v14[0] - 12);
    if ( (uint32_t *)(v14[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v5 = (void *)(v12 - 12);
    if ( (uint32_t *)(v12 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
  }
  return 0;
}


