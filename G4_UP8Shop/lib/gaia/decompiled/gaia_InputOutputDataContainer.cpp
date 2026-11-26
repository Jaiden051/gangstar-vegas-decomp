#include "Core/Utils/DecompTypes.h"
#include "gaia_InputOutputDataContainer.h"

// ----------------------------------------------------------------------------
// Function: gaia::InputOutputDataContainer::Construct  (binary VA: 0x14d1e90)
// Original: gaia::InputOutputDataContainer::InputOutputDataContainer
// ----------------------------------------------------------------------------
gaia::InputOutputDataContainer::Self * gaia::InputOutputDataContainer::Construct(gaia::InputOutputDataContainer::Self *self)
{
  gaia::InputOutputDataContainer::Self *result;

  Json::Value::Construct((int)(uintptr_t)(self), nullptr);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)((char *)self + 20);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)((char *)self + 20);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 25) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 10) = -1000;
  *((uint8_t *)self + 60) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 44, &unk_1B15112, 0);
  result = (gaia::InputOutputDataContainer::Self *)g4_std_compat::string_assign((int)(uintptr_t)(self) + 48, &unk_1B15112, 0);
  *((uint32_t *)self + 13) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::InputOutputDataContainer::SetResponse  (binary VA: 0x14d21a0)
// Original: gaia::InputOutputDataContainer::SetResponse
// ----------------------------------------------------------------------------
gaia::InputOutputDataContainer::Self * gaia::InputOutputDataContainer::SetResponse(gaia::InputOutputDataContainer::Self *self, int *a2)
{
  *((uint32_t *)self + 20) = *a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::InputOutputDataContainer::SetResponse  (binary VA: 0x14d2200)
// Original: gaia::InputOutputDataContainer::SetResponse
// ----------------------------------------------------------------------------
void * gaia::InputOutputDataContainer::SetResponse(gaia::InputOutputDataContainer::Self *self, void *src, int *a3)
{
  size_t n;
  void *ptr;
  void *v5;

  n = *a3;
  ptr = *((void **)self + 18);
  *((uint32_t *)self + 19) = *a3;
  if ( ptr != nullptr )
  {
    free(ptr);
    n = *((uint32_t *)self + 19);
  }
  v5 = malloc(n);
  *((uint32_t *)self + 18) = (uint32_t)(uintptr_t)(v5);
  return memcpy(v5, src, n);
}

// ----------------------------------------------------------------------------
// Function: gaia::InputOutputDataContainer::SetResponse  (binary VA: 0x14d2310)
// Original: gaia::InputOutputDataContainer::SetResponse
// ----------------------------------------------------------------------------
int gaia::InputOutputDataContainer::SetResponse(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 84, a2));
}

// ----------------------------------------------------------------------------
// Function: gaia::InputOutputDataContainer::Serialize  (binary VA: 0x14d23a0)
// Original: gaia::InputOutputDataContainer::Serialize
// ----------------------------------------------------------------------------
gaia::InputOutputDataContainer::Self * gaia::InputOutputDataContainer::Serialize(gaia::InputOutputDataContainer::Self *self, Json::Value::Self *a2)
{
  Json::Value::Self *v2;
  Json::Value::Self *v3;
  int i;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  Json::Value::Self *v24;
  Json::Value::Self *v25;
  int v26;
  int v27;
  Json::Value::Self *v28;
  Json::Value::Self *v29;
  Json::Value::Self *v30;
  Json::Value::Self *v31;
  int v32;
  Json::Value::Self *v33;
  Json::Value::Self *v34;
  const Json::Value::Self *v35;
  Json::Value::Self *v36;
  const Json::Value::Self *v37;
  Json::Value::Self *v38;
  Json::Value::Self *v39;
  Json::Value::Self *v40;
  Json::Value::Self *v41;
  Json::Value::Self *v42;
  Json::Value::Self *v43;
  gaia::BaseJSONServiceResponse::Self *JSONMessage;
  Json::Value::Self *v45;
  Json::Value::Self *v47;
  typedef Json::Value::Self *_g4_t_v48;
  typedef Json::Value::Self *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef uint8_t _g4_t_v51[5];
  typedef void (**_g4_t_v52)(Json::FastWriter::Self *);
  typedef uint8_t _g4_t_v53[8];
  typedef uint8_t _g4_t_v54[16];
  typedef uint8_t _g4_t_v55[16];
  typedef uint8_t _g4_t_v56[16];
  typedef uint8_t _g4_t_v57[16];
  typedef uint8_t _g4_t_v58[16];
  typedef uint8_t _g4_t_v59[16];
  typedef uint8_t _g4_t_v60[16];
  typedef uint8_t _g4_t_v61[16];
  typedef uint8_t _g4_t_v62[16];
  typedef uint8_t _g4_t_v63[16];
  typedef uint8_t _g4_t_v64[16];
  typedef uint8_t _g4_t_v65[16];
  typedef uint8_t _g4_t_v66[16];
  typedef uint8_t _g4_t_v67[16];
  typedef uint8_t _g4_t_v68[16];
  typedef uint8_t _g4_t_v69[16];
  typedef uint8_t _g4_t_v70[16];
  typedef uint8_t _g4_t_v71[16];
  typedef uint8_t _g4_t_v72[16];
  typedef uint8_t _g4_t_v73[16];
  typedef uint8_t _g4_t_v74[16];
  typedef uint8_t _g4_t_v75[16];
  typedef uint8_t _g4_t_v76[16];
  typedef uint8_t _g4_t_v77[16];
  typedef uint8_t _g4_t_v78[44];
  enum : size_t {
    _g4_s0 = 560u,
    _g4_s1 = (0u + sizeof(_g4_t_v48)) > _g4_s0 ? (0u + sizeof(_g4_t_v48)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v49)) > _g4_s1 ? (16u + sizeof(_g4_t_v49)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v50)) > _g4_s2 ? (24u + sizeof(_g4_t_v50)) : _g4_s2,
    _g4_s4 = (47u + sizeof(_g4_t_v51)) > _g4_s3 ? (47u + sizeof(_g4_t_v51)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v52)) > _g4_s4 ? (52u + sizeof(_g4_t_v52)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v53)) > _g4_s5 ? (56u + sizeof(_g4_t_v53)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v54)) > _g4_s6 ? (64u + sizeof(_g4_t_v54)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v55)) > _g4_s7 ? (80u + sizeof(_g4_t_v55)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v56)) > _g4_s8 ? (96u + sizeof(_g4_t_v56)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v57)) > _g4_s9 ? (112u + sizeof(_g4_t_v57)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v58)) > _g4_s10 ? (128u + sizeof(_g4_t_v58)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v59)) > _g4_s11 ? (144u + sizeof(_g4_t_v59)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v60)) > _g4_s12 ? (160u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (176u + sizeof(_g4_t_v61)) > _g4_s13 ? (176u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (192u + sizeof(_g4_t_v62)) > _g4_s14 ? (192u + sizeof(_g4_t_v62)) : _g4_s14,
    _g4_s16 = (208u + sizeof(_g4_t_v63)) > _g4_s15 ? (208u + sizeof(_g4_t_v63)) : _g4_s15,
    _g4_s17 = (224u + sizeof(_g4_t_v64)) > _g4_s16 ? (224u + sizeof(_g4_t_v64)) : _g4_s16,
    _g4_s18 = (240u + sizeof(_g4_t_v65)) > _g4_s17 ? (240u + sizeof(_g4_t_v65)) : _g4_s17,
    _g4_s19 = (256u + sizeof(_g4_t_v66)) > _g4_s18 ? (256u + sizeof(_g4_t_v66)) : _g4_s18,
    _g4_s20 = (272u + sizeof(_g4_t_v67)) > _g4_s19 ? (272u + sizeof(_g4_t_v67)) : _g4_s19,
    _g4_s21 = (288u + sizeof(_g4_t_v68)) > _g4_s20 ? (288u + sizeof(_g4_t_v68)) : _g4_s20,
    _g4_s22 = (304u + sizeof(_g4_t_v69)) > _g4_s21 ? (304u + sizeof(_g4_t_v69)) : _g4_s21,
    _g4_s23 = (320u + sizeof(_g4_t_v70)) > _g4_s22 ? (320u + sizeof(_g4_t_v70)) : _g4_s22,
    _g4_s24 = (336u + sizeof(_g4_t_v71)) > _g4_s23 ? (336u + sizeof(_g4_t_v71)) : _g4_s23,
    _g4_s25 = (352u + sizeof(_g4_t_v72)) > _g4_s24 ? (352u + sizeof(_g4_t_v72)) : _g4_s24,
    _g4_s26 = (368u + sizeof(_g4_t_v73)) > _g4_s25 ? (368u + sizeof(_g4_t_v73)) : _g4_s25,
    _g4_s27 = (384u + sizeof(_g4_t_v74)) > _g4_s26 ? (384u + sizeof(_g4_t_v74)) : _g4_s26,
    _g4_s28 = (400u + sizeof(_g4_t_v75)) > _g4_s27 ? (400u + sizeof(_g4_t_v75)) : _g4_s27,
    _g4_s29 = (416u + sizeof(_g4_t_v76)) > _g4_s28 ? (416u + sizeof(_g4_t_v76)) : _g4_s28,
    _g4_s30 = (432u + sizeof(_g4_t_v77)) > _g4_s29 ? (432u + sizeof(_g4_t_v77)) : _g4_s29,
    _g4_s31 = (448u + sizeof(_g4_t_v78)) > _g4_s30 ? (448u + sizeof(_g4_t_v78)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 0u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 47u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 80u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 96u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 112u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 128u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 144u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 160u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 176u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 192u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 208u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 224u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 240u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 256u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 272u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 288u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 304u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 320u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 336u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 352u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 368u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 384u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 400u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 416u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 432u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 448u);

  v2 = a2;
  Json::FastWriter::Construct((Json::FastWriter::Self *)&v52);
  Json::Value::Construct((int)(uintptr_t)(v54), nullptr);
  v3 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_params");
  Json::Value::opAssign(v3, a2);
  for ( i = *((uint32_t *)a2 + 7); (Json::Value::Self *)i != (Json::Value::Self *)((char *)a2 + 20); i = sub_1904890(i) )
  {
    Json::Value::Construct((int)(uintptr_t)(v55), (uint32_t *)(i + 20));
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_CustomParams");
    v6 = (Json::Value::Self *)Json::Value::opIndex(v5, (char **)(i + 16));
    Json::Value::opAssign(v6, (const Json::Value::Self *)v55);
    Json::Value::Destroy((Json::Value::Self *)v55);
  }
  Json::Value::Construct((Json::Value::Self *)v56, *((uint32_t *)a2 + 10));
  v7 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_statusCode");
  Json::Value::opAssign(v7, (const Json::Value::Self *)v56);
  Json::Value::Destroy((Json::Value::Self *)v56);
  Json::Value::Construct((int)(uintptr_t)(v57), (uint32_t *)a2 + 11);
  v8 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_AccessToken");
  Json::Value::opAssign(v8, (const Json::Value::Self *)v57);
  Json::Value::Destroy((Json::Value::Self *)v57);
  Json::Value::Construct((int)(uintptr_t)(v58), (uint32_t *)a2 + 12);
  v9 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_ServiceScope");
  Json::Value::opAssign(v9, (const Json::Value::Self *)v58);
  Json::Value::Destroy((Json::Value::Self *)v58);
  if ( *((uint32_t *)a2 + 13) != 0 )
  {
    Json::Value::Construct((int)(uintptr_t)(v60), *((uint32_t **)a2 + 13));
    v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_BaseMessage");
    v11 = (Json::Value::Self *)Json::Value::opIndex(v10, "m_from");
    Json::Value::opAssign(v11, (const Json::Value::Self *)v60);
    Json::Value::Destroy((Json::Value::Self *)v60);
    Json::Value::Construct((int)(uintptr_t)(v61), *((uint32_t **)a2 + 13));
    v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_BaseMessage");
    v13 = (Json::Value::Self *)Json::Value::opIndex(v12, "m_body");
    Json::Value::opAssign(v13, (const Json::Value::Self *)v61);
    Json::Value::Destroy((Json::Value::Self *)v61);
    Json::Value::Construct((int)(uintptr_t)(v62), *((uint32_t **)a2 + 13));
    v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_BaseMessage");
    v15 = (Json::Value::Self *)Json::Value::opIndex(v14, "m_reply_to");
    Json::Value::opAssign(v15, (const Json::Value::Self *)v62);
    Json::Value::Destroy((Json::Value::Self *)v62);
    Json::Value::Construct((int)(uintptr_t)(v63), (uint32_t *)(*((uint32_t *)a2 + 13) + 12));
    v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_BaseMessage");
    v17 = (Json::Value::Self *)Json::Value::opIndex(v16, "m_attachment");
    Json::Value::opAssign(v17, (const Json::Value::Self *)v63);
    Json::Value::Destroy((Json::Value::Self *)v63);
    Json::Value::Construct((int)(uintptr_t)(v64), (uint32_t *)(*((uint32_t *)a2 + 13) + 16));
    v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_BaseMessage");
    v19 = (Json::Value::Self *)Json::Value::opIndex(v18, "m_sound");
    Json::Value::opAssign(v19, (const Json::Value::Self *)v64);
    Json::Value::Destroy((Json::Value::Self *)v64);
    Json::Value::Construct((int)(uintptr_t)(v65), (uint32_t *)(*((uint32_t *)a2 + 13) + 20));
    v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_BaseMessage");
    v21 = (Json::Value::Self *)Json::Value::opIndex(v20, "m_launch_button");
    Json::Value::opAssign(v21, (const Json::Value::Self *)v65);
    Json::Value::Destroy((Json::Value::Self *)v65);
    Json::Value::Construct((int)(uintptr_t)(v66), (uint32_t *)(*((uint32_t *)a2 + 13) + 24));
    v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_BaseMessage");
    v23 = (Json::Value::Self *)Json::Value::opIndex(v22, "m_template");
    Json::Value::opAssign(v23, (const Json::Value::Self *)v66);
    Json::Value::Destroy((Json::Value::Self *)v66);
    Json::Value::Construct((int)(uintptr_t)(v67), (uint32_t *)(*((uint32_t *)a2 + 13) + 28));
    v24 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_BaseMessage");
    v25 = (Json::Value::Self *)Json::Value::opIndex(v24, "m_template_args");
    Json::Value::opAssign(v25, (const Json::Value::Self *)v67);
    Json::Value::Destroy((Json::Value::Self *)v67);
    v26 = *((uint32_t *)a2 + 13);
    v27 = *(uint32_t *)(v26 + 44);
    if ( v27 != v26 + 36 )
    {
      v28 = a2;
      do
      {
        v49 = v28;
        Json::Value::Construct((int)(uintptr_t)(v68), (uint32_t *)(v27 + 20));
        v29 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_BaseMessage");
        v30 = (Json::Value::Self *)Json::Value::opIndex(v29, "m_custom_attributes");
        v31 = (Json::Value::Self *)Json::Value::opIndex(v30, (char **)(v27 + 16));
        Json::Value::opAssign(v31, (const Json::Value::Self *)v68);
        Json::Value::Destroy((Json::Value::Self *)v68);
        v32 = sub_1904890(v27);
        v28 = v49;
        v27 = v32;
      }
      while ( v32 != *((uint32_t *)v49 + 13) + 36 );
      v2 = v49;
    }
  }
  else
  {
    Json::Value::Construct((int)(uintptr_t)(v59), nullptr);
    v47 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_BaseMessage");
    Json::Value::opAssign(v47, (const Json::Value::Self *)v59);
    Json::Value::Destroy((Json::Value::Self *)v59);
  }
  Json::Value::Construct((Json::Value::Self *)v69, *((uint32_t *)v2 + 14));
  v33 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_eOperationCode");
  Json::Value::opAssign(v33, (const Json::Value::Self *)v69);
  Json::Value::Destroy((Json::Value::Self *)v69);
  Json::Value::Construct((Json::Value::Self *)v70, *((uint8_t *)v2 + 60));
  v34 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_isAsync");
  Json::Value::opAssign(v34, (const Json::Value::Self *)v70);
  Json::Value::Destroy((Json::Value::Self *)v70);
  if ( *((uint32_t *)v2 + 16) != 0 )
  {
    v35 = (const Json::Value::Self *)v72;
    Json::Value::Construct((Json::Value::Self *)v72, true);
  }
  else
  {
    v35 = (const Json::Value::Self *)v71;
    Json::Value::Construct((Json::Value::Self *)v71, false);
  }
  v36 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "caller");
  Json::Value::opAssign(v36, v35);
  Json::Value::Destroy(v35);
  if ( *((uint32_t *)v2 + 17) != 0 )
  {
    v37 = (const Json::Value::Self *)v74;
    Json::Value::Construct((Json::Value::Self *)v74, true);
  }
  else
  {
    v37 = (const Json::Value::Self *)v73;
    Json::Value::Construct((Json::Value::Self *)v73, false);
  }
  v38 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_pUserDataPtr");
  Json::Value::opAssign(v38, v37);
  Json::Value::Destroy(v37);
  Json::Value::Construct((Json::Value::Self *)v75, *((uint32_t *)v2 + 19));
  v39 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_pDataSize");
  Json::Value::opAssign(v39, (const Json::Value::Self *)v75);
  Json::Value::Destroy((Json::Value::Self *)v75);
  Json::Value::Construct((Json::Value::Self *)v76, *((uint32_t *)v2 + 20));
  v40 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_timeStamp");
  Json::Value::opAssign(v40, (const Json::Value::Self *)v76);
  Json::Value::Destroy((Json::Value::Self *)v76);
  sub_193A970((int)(uintptr_t)(&v51[1]), *((void **)v2 + 18), *((uint32_t *)v2 + 19), (int)(uintptr_t)(v51));
  Json::Value::Construct((int)(uintptr_t)(v77), &v51[1]);
  v41 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_pData");
  Json::Value::opAssign(v41, (const Json::Value::Self *)v77);
  Json::Value::Destroy((Json::Value::Self *)v77);
  g4_std::string::Destroy(&v51[1]);
  Json::Value::Construct((int)(uintptr_t)(v78), (uint32_t *)v2 + 21);
  v42 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_DataString");
  Json::Value::opAssign(v42, (const Json::Value::Self *)v78);
  Json::Value::Destroy((Json::Value::Self *)v78);
  v43 = *((Json::Value::Self **)v2 + 22);
  if ( v43 != *((Json::Value::Self **)v2 + 23) )
  {
    v50 = (char *)v2;
    do
    {
      v48 = v43;
      v43 = (Json::Value::Self *)((char *)v43 + 20);
      JSONMessage = gaia::BaseJSONServiceResponse::GetJSONMessage(v48);
      v45 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, "m_jsonArray");
      Json::Value::append(v45, JSONMessage);
    }
    while ( v43 != *((Json::Value::Self **)v50 + 23) );
  }
  Json::FastWriter::write(self, (const Json::Value::Self *)&v52, (Json::Value::Self *)v54);
  Json::Value::Destroy((Json::Value::Self *)v54);
  v52 = (void (**)(Json::FastWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091B78));
  g4_std::string::Destroy(v53);
  Json::Writer::Destroy((Json::Writer::Self *)&v52);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::InputOutputDataContainer::SetResponse  (binary VA: 0x14da110)
// Original: gaia::InputOutputDataContainer::SetResponse
// ----------------------------------------------------------------------------
std::vector<gaia::BaseJSONServiceResponse::Self> * gaia::InputOutputDataContainer::SetResponse(gaia::InputOutputDataContainer::Self *self, const std::vector<gaia::BaseJSONServiceResponse::Self> *a2)
{
  return g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::opAssign(
           (gaia::InputOutputDataContainer::Self *)((char *)self + 88),
           a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::InputOutputDataContainer::Destroy  (binary VA: 0x14dad70)
// Original: gaia::InputOutputDataContainer::~InputOutputDataContainer
// ----------------------------------------------------------------------------
void gaia::InputOutputDataContainer::Destroy(void **self)
{
  void **v1;
  gaia::BaseJSONServiceResponse::Self *v2;
  gaia::BaseJSONServiceResponse::Self *v3;
  gaia::BaseJSONServiceResponse::Self *v4;
  gaia::BaseJSONServiceResponse::Self *v5;
  gaia::BaseJSONServiceResponse::Self *ptr;
  gaia::BaseJSONServiceResponse::Self *ptra;
  gaia::BaseJSONServiceResponse::Self *v8;

  if ( *(self + 18) != nullptr )
    free(*(self + 18));
  v1 = (void **)*(self + 13);
  if ( v1 != nullptr )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      (int)(uintptr_t)(v1 + 8),
      v1[10]);
    g4_std::string::Destroy(v1 + 7);
    g4_std::string::Destroy(v1 + 6);
    g4_std::string::Destroy(v1 + 5);
    g4_std::string::Destroy(v1 + 4);
    g4_std::string::Destroy(v1 + 3);
    g4_std::string::Destroy(v1 + 2);
    g4_std::string::Destroy(v1 + 1);
    g4_std::string::Destroy(v1);
    opDelete(v1);
  }
  v2 = (gaia::BaseJSONServiceResponse::Self *)*(self + 23);
  v8 = (gaia::BaseJSONServiceResponse::Self *)*(self + 22);
  if ( v8 != v2 )
  {
    v3 = (gaia::BaseJSONServiceResponse::Self *)*(self + 22);
    do
    {
      ptr = v3;
      v3 = (gaia::BaseJSONServiceResponse::Self *)((char *)v3 + 20);
      gaia::BaseJSONServiceResponse::Destroy(ptr);
    }
    while ( v2 != v3 );
  }
  *(self + 23) = v8;
  g4_std::string::Destroy(self + 25);
  v4 = (gaia::BaseJSONServiceResponse::Self *)*(self + 23);
  v5 = (gaia::BaseJSONServiceResponse::Self *)*(self + 22);
  if ( v4 != v5 )
  {
    do
    {
      ptra = v5;
      v5 = (gaia::BaseJSONServiceResponse::Self *)((char *)v5 + 20);
      gaia::BaseJSONServiceResponse::Destroy(ptra);
    }
    while ( v4 != v5 );
    v5 = (gaia::BaseJSONServiceResponse::Self *)*(self + 22);
  }
  if ( v5 != nullptr )
    opDelete(v5);
  g4_std::string::Destroy(self + 21);
  g4_std::string::Destroy(self + 12);
  g4_std::string::Destroy(self + 11);
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)(uintptr_t)(self + 4),
    *(self + 6));
  Json::Value::Destroy((Json::Value::Self *)self);
}


