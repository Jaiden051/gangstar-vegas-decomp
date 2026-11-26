#include "Core/Utils/DecompTypes.h"
#include "gameswf_BitmapInfoImpl.h"

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::p2  (binary VA: 0x10c4ff0)
// Original: gameswf::BitmapInfoImpl::p2
// ----------------------------------------------------------------------------
int gameswf::BitmapInfoImpl::p2(gameswf::BitmapInfoImpl::Self *self, int a2)
{
  int result;
  float v3; // xmm1_4

  if ( a2 <= 1 )
  {
    v3 = 1.0;
    result = 1;
  }
  else
  {
    for ( result = 1; result < a2; result *= 2 )
      ;
    v3 = (float)result;
  }
  if ( (float)((float)a2 / v3) < 0.6f )
    result >>= 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::layout  (binary VA: 0x10c5610)
// Original: gameswf::BitmapInfoImpl::layout
// ----------------------------------------------------------------------------
int gameswf::BitmapInfoImpl::layout(int a1, int a2, int a3, int a4, gameswf::BitmapInfoImpl::Self *self)
{
  gameswf::BitmapInfoImpl::Self *v5;
  char *v6;
  uint8_t *v7;
  int v8;
  int v9;
  char v10;
  int v11;
  int v12;
  int v13;
  bool v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  volatile int32_t *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int result;
  void *retaddr;
  typedef char *_g4_t_format;
  typedef volatile int32_t *_g4_t_v31;
  typedef gameswf::MemBuf::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37[4];
  typedef int _g4_t_v38[4];
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef char _g4_t_v44;
  typedef int _g4_t_v45[2];
  typedef int _g4_t_v46[2];
  typedef uint32_t _g4_t_s[72];
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (4u + sizeof(_g4_t_format)) > _g4_s0 ? (4u + sizeof(_g4_t_format)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v31)) > _g4_s1 ? (32u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v32)) > _g4_s2 ? (32u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v33)) > _g4_s3 ? (36u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (42u + sizeof(_g4_t_v34)) > _g4_s4 ? (42u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (43u + sizeof(_g4_t_v35)) > _g4_s5 ? (43u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v36)) > _g4_s6 ? (44u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v37)) > _g4_s7 ? (48u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v38)) > _g4_s8 ? (64u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v39)) > _g4_s9 ? (80u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v40)) > _g4_s10 ? (84u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v41)) > _g4_s11 ? (88u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v42)) > _g4_s12 ? (92u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v43)) > _g4_s13 ? (96u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v44)) > _g4_s14 ? (100u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v45)) > _g4_s15 ? (112u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v46)) > _g4_s16 ? (120u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (128u + sizeof(_g4_t_s)) > _g4_s17 ? (128u + sizeof(_g4_t_s)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_format &format = *reinterpret_cast<_g4_t_format *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 42u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 43u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 80u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 88u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 100u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 112u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 120u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 128u);

  result = (int)(uintptr_t)(self);
  if ( *((uint32_t *)self + 17) != 0 )
    return result;
  s[71] = (uint32_t)(uintptr_t)(retaddr);
  s[70] = a2;
  s[69] = a3;
  s[68] = a4;
  v5 = self;
  v6 = (char *)self + 41;
  s[67] = a1;
  s[66] = (uint32_t)(uintptr_t)(&self);
  if ( *((uint8_t *)self + 40) == 0xFF )
    v6 = *((char **)self + 13);
  sprintf((char *)s, "swf_%s_0x%x", v6, self);
  v7 = *((uint8_t **)v5 + 15);
  if ( v7 != nullptr )
  {
    if ( (v7[240] & 1) != 0 )
    {
      (*(void (**)(uint32_t, int, uint32_t))(*(uint32_t *)v7 + 156))(*((uint32_t *)v5 + 15), 1, 0);
      v8 = *((uint32_t *)v5 + 15);
      v33 = 1;
      v34 = 1;
    }
    else
    {
      v8 = *((uint32_t *)v5 + 15);
      v33 = 0;
      v34 = 0;
    }
  }
  else
  {
    v8 = 0;
    v33 = 0;
    v34 = 0;
  }
  v9 = *(uint32_t *)(v8 + 456);
  v35 = 0;
  v36 = v9;
  v10 = *((uint8_t *)v5 + 64);
  if ( v9 == 0 || (v11 = v9, v12 = *(uint32_t *)(v9 + 148), v35 = (v12 & 0x10) != 0, v10 == v35) )
  {
LABEL_11:
    v13 = *((uint32_t *)v5 + 19);
    if ( v13 != 0 )
      goto LABEL_12;
LABEL_40:
    v25 = *((uint32_t *)v5 + 20);
    if ( v25 != 0 )
    {
      glitch::io::createMemoryReadFile((glitch::io::Self *)&v43, *(void **)(v25 + 8), *(uint32_t *)v25, (char *)s, false);
      glitch::video::CTextureManager::getTexture(
        (glitch::video::CTextureManager::Self *)&v39,
        *(const boost::intrusive_ptr<glitch::io::IReadFile> **)(*((uint32_t *)v5 + 15) + 456),
        (const char *)&v43,
        nullptr);
      v26 = 0;
      v42 = v39;
      if ( v39 != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v39 + 4), 1u);
        v26 = v42;
      }
      v27 = *((uint32_t *)v5 + 17);
      *((uint32_t *)v5 + 17) = v26;
      v42 = v27;
      sub_5ED480(&v42);
      sub_5ED480(&v39);
      glitch::video::ITexture::setMinFilter(*((uint32_t *)v5 + 17), dword_1CC450C[*((uint32_t *)v5 + 21)]);
      glitch::video::ITexture::setMagFilter(*((uint32_t *)v5 + 17), dword_1CC450C[*((uint32_t *)v5 + 22)]);
      if ( *((uint32_t *)v5 + 20) != 0 )
      {
        v32 = *((gameswf::MemBuf::Self **)v5 + 20);
        gameswf::MemBuf::Destroy(v32);
        format = nullptr;
        gameswf::free_internal(v32);
      }
      *((uint32_t *)v5 + 20) = 0;
      v28 = v43;
      if ( v43 != 0 && __sync_fetch_and_add((volatile int32_t *)(v43 + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v28, 8, format);
        G4_VCALL<void>(v28, 4);
      }
    }
    goto LABEL_22;
  }
  if ( v10 != 0 )
  {
    *(uint32_t *)(v11 + 148) = v12 | 0x10;
    goto LABEL_11;
  }
  *(uint32_t *)(v36 + 148) = v12 & 0xFFFFFFEF;
  v13 = *((uint32_t *)v5 + 19);
  if ( v13 == 0 )
    goto LABEL_40;
LABEL_12:
  v14 = *((uint8_t *)v5 + 64) == 0;
  v43 = 0;
  v44 = 0;
  v15 = *((uint32_t *)v5 + 15);
  if ( v14
    || (*(uint32_t *)(v15 + 252) & 0xC000) != 0xC000
    || (glitch::video::pixel_format::detail::PFDTable[40 * *(uint32_t *)(v13 + 32)] & 8) != 0
    || *(uint8_t *)(v13 + 40) != 0 )
  {
    glitch::video::CTextureManager::addTexture(v45, *(uint32_t *)(v15 + 456), (char *)s, (uint32_t *)v5 + 19, 0, 0);
    v16 = v45[0];
    v41 = v45[0];
    if ( v45[0] != 0 )
    {
      __sync_add_and_fetch((volatile int32_t *)(v45[0] + 4), 1u);
      v16 = v41;
    }
    v17 = v43;
    v43 = v16;
    v41 = v17;
    sub_5ED480(&v41);
    v44 = v45[1];
    sub_5ED480(v45);
    v18 = 0;
    v38[0] = v43;
    if ( v43 != 0 )
    {
      __sync_add_and_fetch((volatile int32_t *)(v43 + 4), 1u);
      v18 = v38[0];
    }
    v19 = *((uint32_t *)v5 + 17);
    *((uint32_t *)v5 + 17) = v18;
    v38[0] = v19;
    sub_5ED480(v38);
  }
  else
  {
    glitch::video::CTextureManager::addTexture(v46, *(uint32_t *)(v15 + 456), (char *)s, (uint32_t *)v5 + 19, 0, 1);
    v21 = 0;
    v40 = v46[0];
    if ( v46[0] != 0 )
    {
      __sync_add_and_fetch((volatile int32_t *)(v46[0] + 4), 1u);
      v21 = v40;
    }
    v22 = v43;
    v43 = v21;
    v40 = v22;
    sub_5ED480(&v40);
    v44 = v46[1];
    sub_5ED480(v46);
    v23 = 0;
    v37[0] = v43;
    if ( v43 != 0 )
    {
      __sync_add_and_fetch((volatile int32_t *)(v43 + 4), 1u);
      v23 = v37[0];
    }
    v24 = *((uint32_t *)v5 + 17);
    *((uint32_t *)v5 + 17) = v23;
    v37[0] = v24;
    sub_5ED480(v37);
  }
  glitch::video::ITexture::setMinFilter(*((uint32_t *)v5 + 17), dword_1CC450C[*((uint32_t *)v5 + 21)]);
  glitch::video::ITexture::setMagFilter(*((uint32_t *)v5 + 17), dword_1CC450C[*((uint32_t *)v5 + 22)]);
  v20 = *((volatile int32_t **)v5 + 19);
  *((uint32_t *)v5 + 19) = 0;
  if ( v20 != nullptr && __sync_fetch_and_add(v20 + 1, 0xFFFFFFFF) == 1 )
  {
    v31 = v20;
    G4_VCALL<void>(v20, 8);
    G4_VCALL<void>(v31, 4);
  }
  sub_5ED480(&v43);
LABEL_22:
  result = v36;
  if ( v36 != 0 )
  {
    result = *(uint32_t *)(v36 + 148);
    if ( ((result & 0x10) != 0) != v35 )
    {
      if ( v35 != 0 )
        result |= 0x10u;
      else
        result &= ~0x10u;
      *(uint32_t *)(v36 + 148) = result;
    }
  }
  if ( v7 != nullptr )
  {
    result = *((uint32_t *)v7 + 60) & 1;
    if ( v34 != (uint8_t)result )
      return G4_VCALL<int>(v7, 156, 1, v33);
  }
  return result;
}



// ============================================================================
// Address:   0x10c5630 (size: 2849 bytes)
// Symbol:    _ZN7gameswf14BitmapInfoImplC2EPN6glitch5video12IVideoDriverERKNS_10BitmapInfo6ParamsE
// Demangled: gameswf::BitmapInfoImpl::BitmapInfoImpl(glitch::video::IVideoDriver *,gameswf::BitmapInfo::Params const&)
// ============================================================================
// Alternative name is '_ZN7gameswf14BitmapInfoImplC1EPN6glitch5video12IVideoDriverERKNS_10BitmapInfo6ParamsE'
void (**gameswf::BitmapInfoImpl::BitmapInfoImpl(
        gameswf::RefCounted::Self *a1,
        int a2,
        int a3))(gameswf::BitmapInfoImpl::Self * self)
{
  gameswf::RefCounted::Self *v3;
  int v4;
  int v5;
  char v6;
  int v7;
  gameswf::Self *v8;
  char *v9;
  gameswf::Self *v10;
  int v11;
  unsigned int v12;
  int v13;
  void (**result)(gameswf::BitmapInfoImpl::Self *);
  int v15;
  int v16;
  volatile int32_t *v17;
  int v18;
  char v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  volatile int32_t *v25;
  int v26;
  int v27;
  gameswf::Self *v28;
  int v29;
  int v30;
  int v31;
  volatile int32_t *v32;
  int v33;
  uint8_t *v34;
  int v35;
  char v36;
  uint32_t *v37;
  int v38;
  int v39;
  int v40;
  volatile int32_t *v41;
  int v42;
  unsigned int v43;
  void (**v44)(gameswf::BitmapInfoImpl::Self *);
  unsigned int v45;
  int v46;
  unsigned int v47;
  __m128i v48; // xmm4
  __m128i v49; // xmm5
  __m128i v50; // xmm2
  __m128i v51; // xmm3
  __m128i v52; // xmm0
  __m128i v53; // xmm1
  __m128i v54; // xmm0
  __m128i v55; // xmm6
  __m128i v56; // xmm7
  __m128i v57; // xmm4
  __m128i v58; // xmm5
  __m128i v59; // xmm1
  __m128i v60; // xmm2
  __m128i v61; // xmm0
  __m128i v62; // xmm2
  __m128i v63; // xmm4
  __m128i v64; // xmm7
  __m128i v65; // xmm0
  __m128i v66; // xmm3
  __m128i v67; // xmm2
  __m128i v68; // xmm6
  __m128i v69; // xmm3
  __m128i v70; // xmm5
  __m128i v71; // xmm2
  __m128i v72; // xmm1
  __m128i v73; // xmm6
  __m128i v74; // xmm7
  __m128i v75; // xmm2
  __m128i v76; // xmm1
  __m128i v77; // xmm5
  __m128i v78; // xmm0
  __m128i v79; // xmm1
  __m128i v80; // xmm2
  __m128i v81; // xmm5
  __m128i v82; // xmm7
  __m128i v83; // xmm0
  __m128i v84; // xmm3
  __m128i v85; // xmm4
  __m128i v86; // xmm3
  __m128i v87; // xmm0
  __m128i v88; // xmm2
  char v89; // di
  char v90; // si
  int v91;
  int v92;
  char *v93;
  uint8_t *v94;
  int v95;
  char *v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  volatile int32_t *v102;
  int v103;
  typedef int _g4_t_v104;
  typedef volatile int32_t *_g4_t_v105;
  typedef int _g4_t_v106;
  typedef volatile int32_t *_g4_t_v107;
  typedef int _g4_t_v108;
  typedef volatile int32_t *_g4_t_v109;
  typedef int _g4_t_v110;
  typedef volatile int32_t *_g4_t_v111;
  typedef gameswf::RefCounted::Self *_g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef signed int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef char _g4_t_v118;
  typedef void (**_g4_t_src)(gameswf::BitmapInfoImpl::Self *);
  typedef gameswf::ImageBase::Self *_g4_t_srca;
  typedef int _g4_t_srcb;
  typedef char _g4_t_srcd;
  typedef uint32_t *_g4_t_srcc;
  typedef int _g4_t_v124[4];
  typedef int _g4_t_v125[4];
  typedef int _g4_t_v126[4];
  typedef int _g4_t_v127[4];
  typedef int _g4_t_v128[4];
  typedef int _g4_t_v129[4];
  typedef int _g4_t_v130[3];
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef char _g4_t_v133;
  typedef int _g4_t_v134[2];
  typedef int _g4_t_v135;
  typedef char _g4_t_v136;
  typedef char _g4_t_s[4];
  typedef int _g4_t_v138;
  typedef gameswf::RefCounted::Self **_g4_t_v139;
  enum : size_t {
    _g4_s0 = 560u,
    _g4_s1 = (4u + sizeof(_g4_t_v104)) > _g4_s0 ? (4u + sizeof(_g4_t_v104)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v105)) > _g4_s1 ? (36u + sizeof(_g4_t_v105)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v106)) > _g4_s2 ? (36u + sizeof(_g4_t_v106)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v107)) > _g4_s3 ? (36u + sizeof(_g4_t_v107)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v108)) > _g4_s4 ? (36u + sizeof(_g4_t_v108)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v109)) > _g4_s5 ? (36u + sizeof(_g4_t_v109)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v110)) > _g4_s6 ? (36u + sizeof(_g4_t_v110)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v111)) > _g4_s7 ? (36u + sizeof(_g4_t_v111)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v112)) > _g4_s8 ? (44u + sizeof(_g4_t_v112)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v113)) > _g4_s9 ? (44u + sizeof(_g4_t_v113)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v114)) > _g4_s10 ? (48u + sizeof(_g4_t_v114)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v115)) > _g4_s11 ? (48u + sizeof(_g4_t_v115)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v116)) > _g4_s12 ? (52u + sizeof(_g4_t_v116)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v117)) > _g4_s13 ? (52u + sizeof(_g4_t_v117)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v118)) > _g4_s14 ? (52u + sizeof(_g4_t_v118)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_src)) > _g4_s15 ? (56u + sizeof(_g4_t_src)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_srca)) > _g4_s16 ? (56u + sizeof(_g4_t_srca)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_srcb)) > _g4_s17 ? (56u + sizeof(_g4_t_srcb)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_srcd)) > _g4_s18 ? (56u + sizeof(_g4_t_srcd)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_srcc)) > _g4_s19 ? (56u + sizeof(_g4_t_srcc)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v124)) > _g4_s20 ? (60u + sizeof(_g4_t_v124)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v125)) > _g4_s21 ? (76u + sizeof(_g4_t_v125)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v126)) > _g4_s22 ? (92u + sizeof(_g4_t_v126)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v127)) > _g4_s23 ? (108u + sizeof(_g4_t_v127)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v128)) > _g4_s24 ? (124u + sizeof(_g4_t_v128)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v129)) > _g4_s25 ? (140u + sizeof(_g4_t_v129)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v130)) > _g4_s26 ? (156u + sizeof(_g4_t_v130)) : _g4_s26,
    _g4_s28 = (168u + sizeof(_g4_t_v131)) > _g4_s27 ? (168u + sizeof(_g4_t_v131)) : _g4_s27,
    _g4_s29 = (172u + sizeof(_g4_t_v132)) > _g4_s28 ? (172u + sizeof(_g4_t_v132)) : _g4_s28,
    _g4_s30 = (176u + sizeof(_g4_t_v133)) > _g4_s29 ? (176u + sizeof(_g4_t_v133)) : _g4_s29,
    _g4_s31 = (188u + sizeof(_g4_t_v134)) > _g4_s30 ? (188u + sizeof(_g4_t_v134)) : _g4_s30,
    _g4_s32 = (196u + sizeof(_g4_t_v135)) > _g4_s31 ? (196u + sizeof(_g4_t_v135)) : _g4_s31,
    _g4_s33 = (200u + sizeof(_g4_t_v136)) > _g4_s32 ? (200u + sizeof(_g4_t_v136)) : _g4_s32,
    _g4_s34 = (204u + sizeof(_g4_t_s)) > _g4_s33 ? (204u + sizeof(_g4_t_s)) : _g4_s33,
    _g4_s35 = (208u + sizeof(_g4_t_v138)) > _g4_s34 ? (208u + sizeof(_g4_t_v138)) : _g4_s34,
    _g4_s36 = (468u + sizeof(_g4_t_v139)) > _g4_s35 ? (468u + sizeof(_g4_t_v139)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 4u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 36u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 36u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 36u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 36u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 36u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 36u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 36u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 44u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 44u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 48u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 48u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 52u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 52u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 52u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 56u);
  _g4_t_srca &srca = *reinterpret_cast<_g4_t_srca *>(_g4_sf + 56u);
  _g4_t_srcb &srcb = *reinterpret_cast<_g4_t_srcb *>(_g4_sf + 56u);
  _g4_t_srcd &srcd = *reinterpret_cast<_g4_t_srcd *>(_g4_sf + 56u);
  _g4_t_srcc &srcc = *reinterpret_cast<_g4_t_srcc *>(_g4_sf + 56u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 60u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 76u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 92u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 108u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 124u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 140u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 156u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 168u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 172u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 176u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 188u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 196u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 200u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 204u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 208u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 468u);

  v139 = &a1;
  v3 = a1;
  v4 = a3;
  v114 = a2;
  gameswf::RefCounted::RefCounted(a1);
  *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_208EE08);
  *((uint32_t *)v3 + 3) = *(uint32_t *)v4;
  v5 = *(uint32_t *)(v4 + 8);
  *((uint32_t *)v3 + 4) = *(uint32_t *)(v4 + 4);
  *((uint32_t *)v3 + 5) = v5;
  *((uint32_t *)v3 + 6) = 0;
  *((uint32_t *)v3 + 7) = 0;
  *((uint32_t *)v3 + 8) = 1065353216;
  *((uint32_t *)v3 + 9) = 1065353216;
  *((uint8_t *)v3 + 40) = 1;
  *((uint8_t *)v3 + 41) = 0;
  v6 = *(uint8_t *)(v4 + 44);
  if ( v6 == -1 )
    v7 = *(uint32_t *)(v4 + 48) - 1;
  else
    v7 = v6 - 1;
  gameswf::String::resize((gameswf::RefCounted::Self *)((char *)v3 + 40), v7);
  v8 = (gameswf::Self *)(v4 + 45);
  if ( *(uint8_t *)(v4 + 44) == 0xFF )
    v8 = *(gameswf::Self **)(v4 + 56);
  LOBYTE(v9) = *((uint8_t *)v3 + 40);
  if ( (uint8_t)(uintptr_t)v9 == 0xFF )
  {
    v9 = *((char **)v3 + 11);
    v10 = *((gameswf::Self **)v3 + 13);
  }
  else
  {
    v9 = (char *)(char)(uintptr_t)v9;
    v10 = (gameswf::Self *)((gameswf::RefCounted::Self *)((char *)v3 + 41));
  }
  gameswf::Strcpy_s(v10, v9, v8);
  v116 = *(uint32_t *)(v4 + 60);
  if ( (uint8_t *)(v116 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v19 = *(uint8_t *)(v4 + 44);
    if ( v19 == -1 )
    {
      v20 = *(uint32_t *)(v4 + 56);
      v21 = *(uint32_t *)(v4 + 48) - 1;
    }
    else
    {
      v20 = v4 + 45;
      v21 = v19 - 1;
    }
    v11 = 5381;
    if ( v21 > 0 )
    {
      v112 = v3;
      do
      {
        --v21;
        v22 = 33 * v11;
        v23 = *(uint8_t *)(v20 + v21) + 32;
        if ( (uint8_t)(*(uint8_t *)(v20 + v21) - 65) > 0x19u )
          v23 = *(uint8_t *)(v20 + v21);
        v11 = v22 ^ v23;
      }
      while ( v21 != 0 );
      v3 = v112;
      v11 = v11 << 9 >> 9;
    }
    *(uint32_t *)(v4 + 60) = v11 & 0x7FFFFF | v116 & 0xFF800000;
  }
  else
  {
    v11 = v116 << 9 >> 9;
  }
  v12 = *((uint32_t *)v3 + 14) & 0xFF800000;
  *((uint8_t *)v3 + 64) = 0;
  v13 = v11 & 0x7FFFFF | v12;
  *((uint8_t *)v3 + 65) = 0;
  *((uint32_t *)v3 + 14) = v13;
  *((uint32_t *)v3 + 17) = 0;
  *((uint32_t *)v3 + 18) = 0;
  *((uint8_t *)v3 + 58) = BYTE2(v13) & 0x7F;
  *((uint8_t *)v3 + 59) = HIBYTE(v13) | 1;
  *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_208EEC8);
  *((uint32_t *)v3 + 15) = v114;
  *((uint32_t *)v3 + 19) = 0;
  *((uint32_t *)v3 + 20) = 0;
  *((uint32_t *)v3 + 21) = 1;
  *((uint32_t *)v3 + 22) = 1;
  result = (void (**)(gameswf::BitmapInfoImpl::Self *))((char *)dword_20B9FF4
                                                                + (uint32_t)jpt_10C579E[*(uint32_t *)v4]);
  switch ( *(uint32_t *)v4 )
  {
    case 0:
      return result;
    case 1:
      src = *(void (***)(gameswf::BitmapInfoImpl::Self *))(v4 + 20);
      v15 = *(uint32_t *)(v4 + 12);
      v138 = *(uint32_t *)(v4 + 16);
      *(uint32_t *)s = v15;
      glitch::video::CTextureManager::createImage(v124, *(uint32_t *)(v114 + 456), 2, s);
      v16 = v124[0];
      if ( v124[0] != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v124[0] + 4), 1u);
      v17 = *((volatile int32_t **)v3 + 19);
      *((uint32_t *)v3 + 19) = v16;
      if ( v17 != nullptr && __sync_fetch_and_add(v17 + 1, 0xFFFFFFFF) == 1 )
      {
        v105 = v17;
        G4_VCALL<void>(v17, 8);
        G4_VCALL<void>(v105, 4);
      }
      v18 = v124[0];
      if ( v124[0] != 0 && __sync_fetch_and_add((volatile int32_t *)(v124[0] + 4), 0xFFFFFFFF) == 1 )
      {
        v106 = v18;
        G4_VCALL<void>(v18, 8);
        G4_VCALL<void>(v106, 4);
      }
      result = src;
      if ( src != nullptr )
        return (void (**)(gameswf::BitmapInfoImpl::Self *))memcpy(
                                                                       *(void **)(*((uint32_t *)v3 + 19) + 8),
                                                                       src,
                                                                       *(uint32_t *)(v4 + 16) * *(uint32_t *)(v4 + 12));
      return result;
    case 2:
      v28 = *(gameswf::Self **)(v4 + 24);
      v29 = *((uint32_t *)v28 + 4);
      *(uint32_t *)s = *((uint32_t *)v28 + 3);
      v30 = *(uint32_t *)(v114 + 456);
      v138 = v29;
      glitch::video::CTextureManager::createImage(v125, v30, 13, s);
      v31 = v125[0];
      if ( v125[0] != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v125[0] + 4), 1u);
      v32 = *((volatile int32_t **)v3 + 19);
      *((uint32_t *)v3 + 19) = v31;
      if ( v32 != nullptr && __sync_fetch_and_add(v32 + 1, 0xFFFFFFFF) == 1 )
      {
        v107 = v32;
        G4_VCALL<void>(v32, 8);
        G4_VCALL<void>(v107, 4);
      }
      v33 = v125[0];
      if ( v125[0] != 0 && __sync_fetch_and_add((volatile int32_t *)(v125[0] + 4), 0xFFFFFFFF) == 1 )
      {
        v108 = v33;
        G4_VCALL<void>(v33, 8);
        G4_VCALL<void>(v108, 4);
      }
      v34 = *(uint8_t **)(*((uint32_t *)v3 + 19) + 8);
      result = *((void (***)(gameswf::BitmapInfoImpl::Self *))v28 + 4);
      if ( (int)(uintptr_t)(result) > 0 )
      {
        srca = nullptr;
        do
        {
          result = (void (**)(gameswf::BitmapInfoImpl::Self *))gameswf::scanline(v28, srca, v104);
          if ( *((int *)v28 + 3) > 0 )
          {
            v35 = 0;
            do
            {
              *v34 = -1;
              ++v35;
              v34[1] = *(uint8_t *)result;
              v34[2] = *((uint8_t *)result + 1);
              v36 = *((uint8_t *)result + 2);
              result = (void (**)(gameswf::BitmapInfoImpl::Self *))((char *)result + 3);
              v34[3] = v36;
              v34 += 4;
            }
            while ( *((uint32_t *)v28 + 3) > v35 );
          }
          srca = (gameswf::ImageBase::Self *)((char *)srca + 1);
        }
        while ( *((uint32_t *)v28 + 4) > (int)(uintptr_t)(srca) );
      }
      return result;
    case 3:
      v37 = *(uint32_t **)(v4 + 28);
      v38 = v37[4];
      *(uint32_t *)s = v37[3];
      v39 = *(uint32_t *)(v114 + 456);
      v138 = v38;
      glitch::video::CTextureManager::createImage(v126, v39, 13, s);
      v40 = v126[0];
      if ( v126[0] != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v126[0] + 4), 1u);
      v41 = *((volatile int32_t **)v3 + 19);
      *((uint32_t *)v3 + 19) = v40;
      if ( v41 != nullptr && __sync_fetch_and_add(v41 + 1, 0xFFFFFFFF) == 1 )
      {
        v109 = v41;
        G4_VCALL<void>(v41, 8);
        G4_VCALL<void>(v109, 4);
      }
      v42 = v126[0];
      if ( v126[0] != 0 && __sync_fetch_and_add((volatile int32_t *)(v126[0] + 4), 0xFFFFFFFF) == 1 )
      {
        v110 = v42;
        G4_VCALL<void>(v42, 8);
        G4_VCALL<void>(v110, 4);
      }
      v43 = v37[4] * v37[3];
      result = *(void (***)(gameswf::BitmapInfoImpl::Self *))(*((uint32_t *)v3 + 19) + 8);
      v44 = (void (**)(gameswf::BitmapInfoImpl::Self *))v37[2];
      v115 = v43;
      if ( (int)v43 <= 0 )
        return result;
      v45 = v43 >> 4;
      srcb = 16 * (v43 >> 4);
      if ( srcb == 0 || v44 <= result + 16 && result <= v44 + 16 || v43 <= 0xF )
      {
        v117 = 0;
        do
        {
LABEL_71:
          ++v117;
          v89 = *(uint8_t *)v44;
          srcd = *((uint8_t *)v44 + 2);
          v90 = *((uint8_t *)v44 + 1);
          *(uint8_t *)result = *((uint8_t *)v44++ + 3);
          *((uint8_t *)result + 1) = v89;
          *((uint8_t *)result + 2) = v90;
          *((uint8_t *)result++ + 3) = srcd;
        }
        while ( v115 > v117 );
        return result;
      }
      v46 = 0;
      v47 = 0;
      do
      {
        v48 = *(__m128i *)&v44[v46];
        v49 = *(__m128i *)&v44[v46 + 4];
        v50 = _mm_unpackhi_epi8(v48, v49);
        v51 = *(__m128i *)&v44[v46 + 8];
        v52 = _mm_unpacklo_epi8(v48, v49);
        v53 = _mm_unpacklo_epi8(v52, v50);
        v54 = _mm_unpackhi_epi8(v52, v50);
        v55 = *(__m128i *)&v44[v46 + 12];
        v56 = _mm_unpackhi_epi8(v53, v54);
        v57 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v48, v49), v50), v54);
        v58 = _mm_unpackhi_epi8(v51, v55);
        v59 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v53, v54), v56);
        v60 = _mm_unpacklo_epi8(v51, v55);
        v61 = _mm_unpacklo_epi8(v60, v58);
        v62 = _mm_unpackhi_epi8(v60, v58);
        v63 = _mm_unpackhi_epi8(v57, v56);
        v64 = _mm_unpackhi_epi8(v61, v62);
        v65 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v61, v62), v64);
        v66 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v51, v55), v58), v62);
        v67 = _mm_unpacklo_epi8(v59, v65);
        v68 = _mm_unpackhi_epi8(v59, v65);
        v69 = _mm_unpackhi_epi8(v66, v64);
        v70 = _mm_unpackhi_epi8(v67, v68);
        v71 = _mm_unpacklo_epi8(v67, v68);
        v72 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v59, v65), v68);
        v73 = _mm_unpackhi_epi8(v63, v69);
        v74 = _mm_unpackhi_epi8(v71, v70);
        v75 = _mm_unpacklo_epi8(v71, v70);
        v76 = _mm_unpacklo_epi8(v72, v70);
        v77 = _mm_unpacklo_epi8(v63, v69);
        v78 = _mm_unpacklo_epi8(v77, v73);
        v79 = _mm_unpackhi_epi8(v76, v74);
        v80 = _mm_unpacklo_epi8(v75, v74);
        v81 = _mm_unpackhi_epi8(v77, v73);
        v82 = _mm_unpackhi_epi8(v78, v81);
        v83 = _mm_unpacklo_epi8(_mm_unpacklo_epi8(v78, v81), v82);
        v84 = _mm_unpackhi_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(_mm_unpacklo_epi8(v63, v69), v73), v81), v82);
        v85 = _mm_unpackhi_epi8(v84, v83);
        v86 = _mm_unpacklo_epi8(v84, v83);
        v87 = _mm_unpacklo_epi8(v80, v79);
        v88 = _mm_unpackhi_epi8(v80, v79);
        ++v47;
        *(__m128i *)&result[v46] = _mm_unpacklo_epi8(v86, v87);
        *(__m128i *)&result[v46 + 4] = _mm_unpackhi_epi8(v86, v87);
        *(__m128i *)&result[v46 + 8] = _mm_unpacklo_epi8(v85, v88);
        *(__m128i *)&result[v46 + 12] = _mm_unpackhi_epi8(v85, v88);
        v46 += 16;
      }
      while ( v45 > v47 );
      result += srcb;
      v44 += srcb;
      if ( v115 != srcb )
      {
        v117 = srcb;
        goto LABEL_71;
      }
      return result;
    case 4:
      v91 = 0;
      v92 = 0;
      v128[0] = *(uint32_t *)(v4 + 36);
      if ( v128[0] != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v128[0] + 4), 1u);
        v92 = v128[0];
        v91 = *((uint32_t *)v3 + 17);
      }
      *((uint32_t *)v3 + 17) = v92;
      v128[0] = v91;
      return (void (**)(gameswf::BitmapInfoImpl::Self *))sub_5ED480(v128);
    case 5:
      result = *(void (***)(gameswf::BitmapInfoImpl::Self *))(v4 + 40);
      *((uint32_t *)v3 + 20) = (uint32_t)(uintptr_t)(result);
      return result;
    case 6:
      v24 = *(uint32_t *)(v4 + 32);
      if ( v24 != 0 && *(uint32_t *)(v4 + 36) != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v24 + 4), 1u);
        v25 = *((volatile int32_t **)v3 + 18);
        *((uint32_t *)v3 + 18) = v24;
        if ( v25 != nullptr && __sync_fetch_and_add(v25 + 1, 0xFFFFFFFF) == 1 )
        {
          v111 = v25;
          G4_VCALL<void>(v25, 8);
          G4_VCALL<void>(v111, 4);
        }
        v26 = 0;
        v129[0] = *(uint32_t *)(v4 + 36);
        if ( v129[0] != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v129[0] + 4), 1u);
          v26 = v129[0];
        }
        v27 = *((uint32_t *)v3 + 17);
        *((uint32_t *)v3 + 17) = v26;
        v129[0] = v27;
        return (void (**)(gameswf::BitmapInfoImpl::Self *))sub_5ED480(v129);
      }
      else
      {
        v93 = (char *)v3 + 41;
        if ( *((uint8_t *)v3 + 40) == 0xFF )
          v93 = *((char **)v3 + 13);
        sprintf(s, "swf_%s_0x%x", v93, v3);
        v94 = *((uint8_t **)v3 + 15);
        v113 = 0;
        srcc = (uint32_t *)(v94);
        v118 = 0;
        if ( v94 != nullptr && (v94[240] & 1) != 0 )
        {
          G4_VCALL<void>(v94, 156, 1, 0);
          v113 = 1;
          v118 = 1;
        }
        v95 = *(uint32_t *)(v4 + 16);
        v134[0] = *(uint32_t *)(v4 + 12);
        v134[1] = v95;
        v96 = *(char **)(v114 + 456);
        v132 = 0;
        v133 = 0;
        glitch::video::CTextureManager::addTexture(&v135, v96, v134, s, 15, 1);
        v97 = 0;
        v131 = v135;
        if ( v135 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v135 + 4), 1u);
          v97 = v131;
        }
        v98 = v132;
        v132 = v97;
        v131 = v98;
        sub_5ED480(&v131);
        v133 = v136;
        sub_5ED480(&v135);
        v99 = 0;
        v130[0] = v132;
        if ( v132 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v132 + 4), 1u);
          v99 = v130[0];
        }
        v100 = *((uint32_t *)v3 + 17);
        *((uint32_t *)v3 + 17) = v99;
        v130[0] = v100;
        sub_5ED480(v130);
        glitch::video::IVideoDriver::createMultipleRenderTarget((int)(uintptr_t)(v127), v114, 6);
        v101 = v127[0];
        if ( v127[0] != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v127[0] + 4), 1u);
        v102 = *((volatile int32_t **)v3 + 18);
        *((uint32_t *)v3 + 18) = v101;
        if ( v102 != nullptr && __sync_fetch_and_add(v102 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v102, 8);
          G4_VCALL<void>(v102, 4);
        }
        v103 = v127[0];
        if ( v127[0] != 0 && __sync_fetch_and_add((volatile int32_t *)(v127[0] + 4), 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v103, 8);
          G4_VCALL<void>(v103, 4);
        }
        glitch::video::IMultipleRenderTarget::setTargetInternal(*((uint32_t *)v3 + 18), 2, (int *)v3 + 17, 0, 0, 0xFFu);
        result = (void (**)(gameswf::BitmapInfoImpl::Self *))sub_5ED480(&v132);
        if ( srcc != nullptr )
        {
          result = (void (**)(gameswf::BitmapInfoImpl::Self *))(srcc[60] & 1);
          if ( v118 != (uint8_t)(uintptr_t)result )
            return (void (**)(gameswf::BitmapInfoImpl::Self *))G4_VCALL<int>(srcc, 156, 1, v113);
        }
      }
      return result;
    default:
      return (void (**)(gameswf::BitmapInfoImpl::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_208EEC8));
  }
}
// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::activate  (binary VA: 0x10c7a10)
// Original: gameswf::BitmapInfoImpl::activate
// ----------------------------------------------------------------------------
void gameswf::BitmapInfoImpl::activate()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::setWritable  (binary VA: 0x10c7a20)
// Original: gameswf::BitmapInfoImpl::setWritable
// ----------------------------------------------------------------------------
gameswf::BitmapInfoImpl::Self * gameswf::BitmapInfoImpl::setWritable(gameswf::BitmapInfoImpl::Self *self)
{
  *((uint8_t *)self + 64) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::setLocalData  (binary VA: 0x10c7a30)
// Original: gameswf::BitmapInfoImpl::setLocalData
// ----------------------------------------------------------------------------
int gameswf::BitmapInfoImpl::setLocalData(gameswf::BitmapInfoImpl::Self *self, gameswf::BitmapInfo::Self *a2)
{
  int v2;
  int (*v3)(int, int, uint32_t, uint32_t);
  int v4;

  G4_VCALL<void>(self, 8);
  v2 = *((uint32_t *)self + 17);
  v3 = *(int (**)(int, int, uint32_t, uint32_t))(*(uint32_t *)v2 + 8);
  v4 = (*(int (**)(uint32_t))(**((uint32_t **)a2 + 17) + 60))(*((uint32_t *)a2 + 17));
  return v3(v2, v4, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::lock  (binary VA: 0x10c7a90)
// Original: gameswf::BitmapInfoImpl::lock
// ----------------------------------------------------------------------------
int gameswf::BitmapInfoImpl::lock(gameswf::BitmapInfoImpl::Self *self)
{
  G4_VCALL<void>(self, 8);
  return (*(int (**)(uint32_t, int, uint32_t, uint32_t))(**((uint32_t **)self + 17) + 52))(
           *((uint32_t *)self + 17),
           2,
           0,
           0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::isLayout  (binary VA: 0x10c7ad0)
// Original: gameswf::BitmapInfoImpl::isLayout
// ----------------------------------------------------------------------------
bool gameswf::BitmapInfoImpl::isLayout(gameswf::BitmapInfoImpl::Self *self)
{
  return *((uint32_t *)self + 17) != 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::unlock  (binary VA: 0x10c8010)
// Original: gameswf::BitmapInfoImpl::unlock
// ----------------------------------------------------------------------------
uint8_t * gameswf::BitmapInfoImpl::unlock(glitch::video::ITexture::Self **self)
{
  return glitch::video::ITexture::unmap(*(self + 17));
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::setMagFilter  (binary VA: 0x10c8040)
// Original: gameswf::BitmapInfoImpl::setMagFilter
// ----------------------------------------------------------------------------
int gameswf::BitmapInfoImpl::setMagFilter(int a1, int a2)
{
  int result;

  *(uint32_t *)(a1 + 88) = a2;
  result = *(uint32_t *)(a1 + 68);
  if ( result != 0 )
    return glitch::video::ITexture::setMagFilter(result, dword_1CC450C[a2]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::setMinFilter  (binary VA: 0x10c8080)
// Original: gameswf::BitmapInfoImpl::setMinFilter
// ----------------------------------------------------------------------------
int gameswf::BitmapInfoImpl::setMinFilter(int a1, int a2)
{
  int result;

  *(uint32_t *)(a1 + 84) = a2;
  result = *(uint32_t *)(a1 + 68);
  if ( result != 0 )
    return glitch::video::ITexture::setMinFilter(result, dword_1CC450C[a2]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::getInternalHeight  (binary VA: 0x10c80c0)
// Original: gameswf::BitmapInfoImpl::getInternalHeight
// ----------------------------------------------------------------------------
int gameswf::BitmapInfoImpl::getInternalHeight(gameswf::BitmapInfoImpl::Self *self)
{
  int v1;
  int v3;

  v1 = *((uint32_t *)self + 17);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 24);
  v3 = *((uint32_t *)self + 19);
  if ( v3 != 0 )
    return *(uint32_t *)(v3 + 20);
  else
    return *((uint32_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::getInternalWidth  (binary VA: 0x10c80f0)
// Original: gameswf::BitmapInfoImpl::getInternalWidth
// ----------------------------------------------------------------------------
int gameswf::BitmapInfoImpl::getInternalWidth(gameswf::BitmapInfoImpl::Self *self)
{
  int v1;
  int v3;

  v1 = *((uint32_t *)self + 17);
  if ( v1 != 0 )
    return *(uint32_t *)(v1 + 20);
  v3 = *((uint32_t *)self + 19);
  if ( v3 != 0 )
    return *(uint32_t *)(v3 + 16);
  else
    return *((uint32_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::unlayout  (binary VA: 0x10ca2e0)
// Original: gameswf::BitmapInfoImpl::unlayout
// ----------------------------------------------------------------------------
int gameswf::BitmapInfoImpl::unlayout(gameswf::BitmapInfoImpl::Self *self)
{
  int result;
  volatile int32_t *v2;
  gameswf::Self *v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  result = *((uint32_t *)self + 17);
  if ( result != 0 )
  {
    *((uint32_t *)self + 17) = 0;
    v4 = result;
    result = sub_5ED480(&v4);
  }
  v2 = *((volatile int32_t **)self + 19);
  if ( v2 != nullptr )
  {
    *((uint32_t *)self + 19) = 0;
    result = __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      G4_VCALL<void>(v2, 8);
      result = G4_VCALL<int>(v2, 4);
    }
  }
  v3 = *((gameswf::Self **)self + 20);
  if ( v3 != nullptr )
  {
    gameswf::MemBuf::Destroy(*((gameswf::MemBuf::Self **)self + 20));
    result = gameswf::free_internal(v3);
    *((uint32_t *)self + 20) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::Destroy  (binary VA: 0x10ca390)
// Original: gameswf::BitmapInfoImpl::~BitmapInfoImpl
// ----------------------------------------------------------------------------
void gameswf::BitmapInfoImpl::Destroy(gameswf::BitmapInfoImpl::Self *self)
{
  int v1;
  volatile int32_t *v2;
  gameswf::Self *v3;
  volatile int32_t *v4;
  volatile int32_t *v5;
  bool v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EEC8);
  v1 = *((uint32_t *)self + 17);
  if ( v1 != 0 )
  {
    *((uint32_t *)self + 17) = 0;
    v8[0] = v1;
    sub_5ED480(v8);
  }
  v2 = *((volatile int32_t **)self + 19);
  if ( v2 != nullptr )
  {
    *((uint32_t *)self + 19) = 0;
    if ( __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v2, 8);
      G4_VCALL<void>(v2, 4);
    }
  }
  v3 = *((gameswf::Self **)self + 20);
  if ( v3 != nullptr )
  {
    gameswf::MemBuf::Destroy(*((gameswf::MemBuf::Self **)self + 20));
    v7 = nullptr;
    gameswf::free_internal(v3);
    *((uint32_t *)self + 20) = 0;
  }
  v4 = *((volatile int32_t **)self + 19);
  if ( v4 != nullptr && __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v4, 8, v7);
    G4_VCALL<void>(v4, 4);
  }
  v5 = *((volatile int32_t **)self + 18);
  if ( v5 != nullptr && __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v5, 8);
    G4_VCALL<void>(v5, 4);
  }
  sub_5ED480((int *)self + 17);
  v6 = *((uint8_t *)self + 40) == 0xFF;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EE08);
  if ( v6 && (*((uint8_t *)self + 59) & 1) != 0 )
  {
    gameswf::free_internal(*((gameswf::Self **)self + 13));
    gameswf::RefCounted::Destroy(self);
  }
  else
  {
    gameswf::RefCounted::Destroy(self);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::Destroy_ea10ca4e0  (binary VA: 0x10ca4e0)
// Original: gameswf::BitmapInfoImpl::~BitmapInfoImpl
// ----------------------------------------------------------------------------
void gameswf::BitmapInfoImpl::Destroy_ea10ca4e0(gameswf::BitmapInfoImpl::Self *self)
{
  int v1;
  volatile int32_t *v2;
  gameswf::Self *v3;
  volatile int32_t *v4;
  volatile int32_t *v5;
  bool v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EEC8);
  v1 = *((uint32_t *)self + 17);
  if ( v1 != 0 )
  {
    *((uint32_t *)self + 17) = 0;
    v8[0] = v1;
    sub_5ED480(v8);
  }
  v2 = *((volatile int32_t **)self + 19);
  if ( v2 != nullptr )
  {
    *((uint32_t *)self + 19) = 0;
    if ( __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v2, 8);
      G4_VCALL<void>(v2, 4);
    }
  }
  v3 = *((gameswf::Self **)self + 20);
  if ( v3 != nullptr )
  {
    gameswf::MemBuf::Destroy(*((gameswf::MemBuf::Self **)self + 20));
    v7 = nullptr;
    gameswf::free_internal(v3);
    *((uint32_t *)self + 20) = 0;
  }
  v4 = *((volatile int32_t **)self + 19);
  if ( v4 != nullptr && __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v4, 8, v7);
    G4_VCALL<void>(v4, 4);
  }
  v5 = *((volatile int32_t **)self + 18);
  if ( v5 != nullptr && __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v5, 8);
    G4_VCALL<void>(v5, 4);
  }
  sub_5ED480((int *)self + 17);
  v6 = *((uint8_t *)self + 40) == 0xFF;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208EE08);
  if ( v6 && (*((uint8_t *)self + 59) & 1) != 0 )
    gameswf::free_internal(*((gameswf::Self **)self + 13));
  gameswf::RefCounted::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::BitmapInfoImpl::setTexture  (binary VA: 0x10ca630)
// Original: gameswf::BitmapInfoImpl::setTexture
// ----------------------------------------------------------------------------
int gameswf::BitmapInfoImpl::setTexture(gameswf::BitmapInfoImpl::Self *self, const boost::intrusive_ptr<glitch::video::ITexture::Self> *a2)
{
  int v2;
  volatile int32_t *v3;
  gameswf::Self *v4;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v2 = *((uint32_t *)self + 17);
  if ( v2 != 0 )
  {
    *((uint32_t *)self + 17) = 0;
    v10 = v2;
    sub_5ED480(&v10);
  }
  v3 = *((volatile int32_t **)self + 19);
  if ( v3 != nullptr )
  {
    *((uint32_t *)self + 19) = 0;
    if ( __sync_fetch_and_add(v3 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v3, 8);
      G4_VCALL<void>(v3, 4);
    }
  }
  v4 = *((gameswf::Self **)self + 20);
  if ( v4 != nullptr )
  {
    gameswf::MemBuf::Destroy(*((gameswf::MemBuf::Self **)self + 20));
    gameswf::free_internal(v4);
    *((uint32_t *)self + 20) = 0;
  }
  v5 = 0;
  v6 = *(uint32_t *)a2;
  v9 = *(uint32_t *)a2;
  if ( v9 != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
    v5 = v9;
  }
  v7 = *((uint32_t *)self + 17);
  *((uint32_t *)self + 17) = v5;
  v9 = v7;
  return sub_5ED480(&v9);
}


