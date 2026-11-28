#include "Core/Utils/DecompTypes.h"
#include "gameswf_Character.h"

// ----------------------------------------------------------------------------
// Function: gameswf::Character::enumerate  (binary VA: 0x107baa0)
// Original: gameswf::Character::enumerate
// ----------------------------------------------------------------------------
int gameswf::Character::enumerate(gameswf::Character::Self *self, gameswf::ASEnvironment::Self *a2)
{
  return ((gameswf::ASObject::enumerate(self, a2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getBoundInternal  (binary VA: 0x107bad0)
// Original: gameswf::Character::getBoundInternal
// ----------------------------------------------------------------------------
gameswf::Rect::Self * gameswf::Character::getBoundInternal(gameswf::Matrix::Self **self, gameswf::Rect::Self *a2)
{
  int v2;

  v2 = (*((int (**)(gameswf::Matrix::Self **))*self + 76))(self);
  G4_VCALL<void>(v2, 20, a2);
  return gameswf::Matrix::transform(*(self + 17), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::thisAlive  (binary VA: 0x107bb30)
// Original: gameswf::Character::thisAlive
// ----------------------------------------------------------------------------
uint32_t * gameswf::Character::thisAlive(gameswf::Character::Self *self)
{
  uint32_t *result;

  gameswf::ASEventDispatcher::thisAlive(self);
  result = *((uint32_t **)self + 19);
  if ( result != nullptr )
  {
    result = (uint32_t *)result[36];
    if ( result != nullptr )
      return (uint32_t *)G4_VCALL<int>(result, 76);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::clearRefs  (binary VA: 0x107bb80)
// Original: gameswf::Character::clearRefs
// ----------------------------------------------------------------------------
int gameswf::Character::clearRefs(gameswf::Character::Self *self, int a2)
{
  int result;
  int v3;

  result = (int)(uintptr_t)(gameswf::ASEventDispatcher::clearRefs(self, a2));
  v3 = *((uint32_t *)self + 19);
  if ( v3 != 0 )
  {
    result = *(uint32_t *)(v3 + 144);
    if ( result != 0 && a2 > *(uint32_t *)(result + 20) )
    {
      result = gameswf::RefCounted::dropRef(*(gameswf::RefCounted::Self **)(v3 + 144));
      *(uint32_t *)(v3 + 144) = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::notifyStageChanged  (binary VA: 0x107bbf0)
// Original: gameswf::Character::notifyStageChanged
// ----------------------------------------------------------------------------
int gameswf::Character::notifyStageChanged(gameswf::Character::Self *self, bool a2)
{
  int result;
  int *v3;
  int v4;
  char *v5;
  gameswf::Self *v6;
  int Event;
  int *v8;
  typedef size_t _g4_t_v9;
  typedef void (*_g4_t_v10)(gameswf::Character::Self *, int);
  typedef char _g4_t_v11;
  typedef char _g4_t_v12;
  typedef gameswf::Self *_g4_t_v13;
  typedef int16_t _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (17u + sizeof(_g4_t_v12)) > _g4_s3 ? (17u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v14)) > _g4_s5 ? (32u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (34u + sizeof(_g4_t_v15)) > _g4_s6 ? (34u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (35u + sizeof(_g4_t_v16)) > _g4_s7 ? (35u + sizeof(_g4_t_v16)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 17u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 34u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 35u);

  result = 0;
  if ( *((uint8_t *)self + 152) != a2 )
  {
    if ( (v3 = *((int **)self + 10), *((uint8_t *)self + 152) = a2, v3 != nullptr) && *v3 > 0
      || (v8 = *((int **)self + 11), result = 1, v8 != nullptr) && *v8 > 0 )
    {
      v4 = *(uint32_t *)self;
      v5 = "addedToStage";
      v11 = 1;
      v12 = 0;
      v10 = *(void (**)(gameswf::Character::Self *, int))(v4 + 104);
      if ( !a2 )
        v5 = "removedFromStage";
      v9 = strlen(v5);
      gameswf::String::resize((gameswf::String::Self *)&v11, v9);
      v6 = (gameswf::Self *)&v12;
      if ( v11 == -1 )
        v6 = v13;
      gameswf::Strcpy_s(v6, (char *)(v9 + 1), (gameswf::Self *)v5);
      v14 = -1;
      v15 = 127;
      v16 |= 1u;
      Event = gameswf::AS3Engine::getEvent(
                (gameswf::AS3Engine::Self *)(*((uint32_t *)self + 4) + 236),
                (const gameswf::String::Self *)&v11);
      v10(self, Event);
      result = 1;
      if ( v11 == -1 && (v16 & 1) != 0 )
      {
        gameswf::free_internal(v13);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::Construct  (binary VA: 0x107bd50)
// Original: gameswf::Character::Character
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::Character::Construct(gameswf::Character::Self *self, gameswf::Player::Self *a2, gameswf::Character::Self *a3, int a4, int a5)
{
  gameswf::Self *WeakProxy;
  gameswf::Self *v6;
  char *v8;
  unsigned int v9;
  char *v10;
  gameswf::Self *v12;

  gameswf::ASEventDispatcher::ASEventDispatcher(self, a2);
  *((uint32_t *)self + 13) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E388);
  *((uint32_t *)self + 12) = a4;
  *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(a3);
  if ( a3 != nullptr )
  {
    WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(a3);
    v6 = *((gameswf::Self **)self + 13);
    if ( WeakProxy != v6 )
    {
      if ( v6 != nullptr && (*(uint16_t *)v6)-- == 1 )
      {
        v12 = WeakProxy;
        gameswf::free_internal(v6);
        WeakProxy = v12;
      }
      *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(WeakProxy);
      if ( WeakProxy != nullptr )
        ++*(uint16_t *)WeakProxy;
    }
  }
  *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(&byte_20E2E80);
  v8 = (char *)self + 112;
  *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(gameswf::CxForm::identity);
  *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(gameswf::Matrix::identity);
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 18) = (uint32_t)(uintptr_t)(&gameswf::Effect::identity);
  *((uint32_t *)self + 20) = 1065353216;
  *((uint32_t *)self + 22) = 1065353216;
  *((uint32_t *)self + 24) = 1065353216;
  *((uint32_t *)self + 26) = 1065353216;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 27) = 0;
  v9 = 24;
  if ( (((unsigned int)(uintptr_t)(self) + 112) & 1) != 0 )
  {
    *((uint8_t *)self + 112) = 0;
    v8 = (char *)self + 113;
    LOBYTE(v9) = 23;
  }
  if ( ((uint8_t)(uintptr_t)v8 & 2) != 0 )
  {
    *(uint16_t *)v8 = 0;
    v9 -= 2;
    v8 += 2;
  }
  memset(v8, 0, 4 * (v9 >> 2));
  v10 = &v8[4 * (v9 >> 2)];
  if ( (v9 & 2) != 0 )
  {
    *(uint16_t *)v10 = 0;
    v10 += 2;
  }
  if ( (v9 & 1) != 0 )
    *v10 = 0;
  *((uint32_t *)self + 28) = 1065353216;
  *((uint32_t *)self + 32) = 1065353216;
  *((uint32_t *)self + 34) = 0;
  *((uint16_t *)self + 70) = 0;
  *((uint16_t *)self + 71) = 0;
  *((uint8_t *)self + 144) = a5;
  *((uint8_t *)self + 145) = 1;
  *((uint8_t *)self + 146) = 1;
  *((uint8_t *)self + 147) = 1;
  *((uint8_t *)self + 148) = 1;
  *((uint8_t *)self + 149) = 0;
  *((uint8_t *)self + 150) = 1;
  *((uint8_t *)self + 151) = 0;
  *((uint8_t *)self + 152) = 0;
  *((uint8_t *)self + 153) = 0;
  *((uint8_t *)self + 156) = 0;
  *((uint8_t *)self + 157) = 1;
  *((uint32_t *)self + 40) = 0;
  _mm_storel_ps((double *)((char *)self + 180), g4_m128_from<__m128>(0LL));
  _mm_storel_ps((double *)((char *)self + 188), g4_m128_from<__m128>(0LL));
  _mm_storel_ps((double *)((char *)self + 196), g4_m128_from<__m128>(0LL));
  _mm_storel_ps((double *)((char *)self + 204), g4_m128_from<__m128>(0LL));
  return (gameswf::Character::Self *)a5;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getHandle  (binary VA: 0x107bf70)
// Original: gameswf::Character::getHandle
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::Character::getHandle(gameswf::Character::Self *self, gameswf::Character::Self *a2)
{
  gameswf::CharacterHandle::Construct(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getBound  (binary VA: 0x107bfb0)
// Original: gameswf::Character::getBound
// ----------------------------------------------------------------------------
int gameswf::Character::getBound(gameswf::Character::Self *self, gameswf::Rect::Self *a2, int a3, int a4, int a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, float a32, float a33, float a34, float a35, float a36, float a37, float a38, float a39, float a40, float a41, float a42, float a43, float a44, float a45, float a46, float a47, float a48, float a49, float a50, float a51, float a52, float a53, float a54, float a55)
{
  int v55;
  int result;
  int v57;
  float v58; // xmm0_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm3_4
  float v62; // xmm4_4
  float v63; // xmm5_4
  gameswf::Root::Self *Root;
  float v65; // xmm1_4
  float v66; // xmm2_4
  float v67; // xmm0_4
  float v68; // xmm1_4
  float v69; // xmm2_4
  float v70; // xmm0_4
  gameswf::Root::Self *v71;
  float v72; // xmm1_4
  float v73; // xmm2_4
  float v74; // xmm0_4
  float v75; // xmm1_4
  float v76; // xmm2_4
  float v77; // xmm0_4
  gameswf::Root::Self *v78;
  float v79; // xmm1_4
  float v80; // xmm2_4
  float v81; // xmm0_4
  float v82; // xmm1_4
  float v83; // xmm2_4
  float v84; // xmm0_4
  gameswf::Root::Self *v85;
  float v86; // xmm1_4
  float v87; // xmm2_4
  float v88; // xmm0_4
  float v89; // xmm1_4
  float v90; // xmm2_4
  float v91; // xmm0_4
  gameswf::Root::Self *v92;
  float v93; // xmm1_4
  float v94; // xmm2_4
  float v95; // xmm0_4
  float v96; // xmm1_4
  float v97; // xmm2_4
  float v98; // xmm0_4
  gameswf::Root::Self *v99;
  float v100; // xmm1_4
  float v101; // xmm2_4
  float v102; // xmm0_4
  float v103; // xmm1_4
  float v104; // xmm2_4
  float v105; // xmm0_4
  gameswf::Root::Self *v106;
  float v107; // xmm1_4
  float v108; // xmm2_4
  float v109; // xmm0_4
  float v110; // xmm1_4
  float v111; // xmm2_4
  float v112; // xmm0_4
  gameswf::Root::Self *v113;
  float v114; // xmm0_4
  float v115; // xmm1_4
  float v116; // xmm2_4
  float v117; // xmm0_4
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef uint32_t _g4_t_v136[40];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (8u + sizeof(_g4_t_v118)) > _g4_s0 ? (8u + sizeof(_g4_t_v118)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v119)) > _g4_s1 ? (12u + sizeof(_g4_t_v119)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v120)) > _g4_s2 ? (16u + sizeof(_g4_t_v120)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v121)) > _g4_s3 ? (20u + sizeof(_g4_t_v121)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v122)) > _g4_s4 ? (24u + sizeof(_g4_t_v122)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v123)) > _g4_s5 ? (28u + sizeof(_g4_t_v123)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v124)) > _g4_s6 ? (32u + sizeof(_g4_t_v124)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v125)) > _g4_s7 ? (36u + sizeof(_g4_t_v125)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v126)) > _g4_s8 ? (40u + sizeof(_g4_t_v126)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v127)) > _g4_s9 ? (44u + sizeof(_g4_t_v127)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v128)) > _g4_s10 ? (48u + sizeof(_g4_t_v128)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v129)) > _g4_s11 ? (52u + sizeof(_g4_t_v129)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v130)) > _g4_s12 ? (56u + sizeof(_g4_t_v130)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v131)) > _g4_s13 ? (60u + sizeof(_g4_t_v131)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v132)) > _g4_s14 ? (64u + sizeof(_g4_t_v132)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v133)) > _g4_s15 ? (68u + sizeof(_g4_t_v133)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v134)) > _g4_s16 ? (72u + sizeof(_g4_t_v134)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v135)) > _g4_s17 ? (76u + sizeof(_g4_t_v135)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v136)) > _g4_s18 ? (80u + sizeof(_g4_t_v136)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 8u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 12u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 16u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 20u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 24u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 28u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 32u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 36u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 40u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 44u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 48u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 52u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 56u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 60u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 64u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 68u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 72u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 76u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 80u);

  v55 = *((uint32_t *)self + 19);
  if ( v55 == 0 || *(uint8_t *)(v55 + 96) == 0 )
    return G4_VCALL<int>(self, 296, a2, v118, v119, v120, v121, v122, v123, v124, v125, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135, v136[0], v136[1], v136[2], v136[3], v136[4], v136[5], v136[6], v136[7], v136[8], v136[9], v136[10], v136[11], v136[12], v136[13], v136[14], v136[15], v136[16], v136[17], v136[18], v136[19], v136[20], v136[21], v136[22], v136[23], v136[24], v136[25], v136[26], v136[27], v136[28], v136[29], v136[30], v136[31], v136[32], v136[33], v136[34], v136[35], v136[36], v136[37], v136[38], v136[39]);
  v128 = 2139095039;
  memset(v136, 0, 0x40u);
  v57 = *(uint32_t *)self;
  v136[15] = 1065353216;
  v136[10] = 1065353216;
  v136[5] = 1065353216;
  v136[0] = 1065353216;
  v129 = 2139095039;
  v130 = 2139095039;
  v131 = -8388609;
  v132 = -8388609;
  v133 = -8388609;
  result = (*(int (**)(gameswf::Character::Self *, uint32_t *, int *, int, int, int, gameswf::Character::Self *, uint32_t *, int, int, int, int))(v57 + 300))(
             self,
             v136,
             &v128,
             v119,
             v120,
             v121,
             self,
             v136,
             v124,
             v125,
             v126,
             v127);
  v58 = a11;
  v59 = a8;
  if ( a8 <= a11 )
  {
    v60 = a12;
    v61 = a9;
    if ( a9 <= a12 )
    {
      v62 = a13;
      v63 = a10;
      if ( a10 <= a13 )
      {
        *(uint32_t *)a2 = 2139095039;
        *((uint32_t *)a2 + 1) = -8388609;
        *((uint32_t *)a2 + 2) = 2139095039;
        *((uint32_t *)a2 + 3) = -8388609;
        a33 = v61;
        a34 = v63;
        a36 = v61;
        a6 = 0.0;
        a37 = v62;
        a7 = 0.0;
        a40 = v63;
        a43 = v62;
        a45 = v61;
        a46 = v63;
        a48 = v61;
        a49 = v62;
        a52 = v63;
        a55 = v62;
        a32 = v59;
        a35 = v59;
        a38 = v59;
        a39 = v60;
        a41 = v59;
        a42 = v60;
        a44 = v58;
        a47 = v58;
        a50 = v58;
        a51 = v60;
        a53 = v58;
        a54 = v60;
        Root = (gameswf::Root::Self *)gameswf::ASObject::getRoot(a2);
        gameswf::Root::projectPosition(Root, (const gameswf::vector3df::Self *)&a32, (gameswf::Point::Self *)&a6);
        v65 = a6;
        a6 = 0.0;
        v66 = fminf(*(float *)a2, v65);
        v67 = a7;
        v68 = fmaxf(v65, *((float *)a2 + 1));
        a7 = 0.0;
        *(float *)a2 = v66;
        v69 = fminf(*((float *)a2 + 2), v67);
        *((float *)a2 + 1) = v68;
        v70 = fmaxf(v67, *((float *)a2 + 3));
        *((float *)a2 + 2) = v69;
        *((float *)a2 + 3) = v70;
        v71 = (gameswf::Root::Self *)gameswf::ASObject::getRoot(a2);
        gameswf::Root::projectPosition(v71, (const gameswf::vector3df::Self *)&a35, (gameswf::Point::Self *)&a6);
        v72 = a6;
        a6 = 0.0;
        v73 = fminf(*(float *)a2, v72);
        v74 = a7;
        v75 = fmaxf(v72, *((float *)a2 + 1));
        a7 = 0.0;
        *(float *)a2 = v73;
        v76 = fminf(*((float *)a2 + 2), v74);
        *((float *)a2 + 1) = v75;
        v77 = fmaxf(v74, *((float *)a2 + 3));
        *((float *)a2 + 2) = v76;
        *((float *)a2 + 3) = v77;
        v78 = (gameswf::Root::Self *)gameswf::ASObject::getRoot(a2);
        gameswf::Root::projectPosition(v78, (const gameswf::vector3df::Self *)&a38, (gameswf::Point::Self *)&a6);
        v79 = a6;
        a6 = 0.0;
        v80 = fminf(*(float *)a2, v79);
        v81 = a7;
        v82 = fmaxf(v79, *((float *)a2 + 1));
        a7 = 0.0;
        *(float *)a2 = v80;
        v83 = fminf(*((float *)a2 + 2), v81);
        *((float *)a2 + 1) = v82;
        v84 = fmaxf(v81, *((float *)a2 + 3));
        *((float *)a2 + 2) = v83;
        *((float *)a2 + 3) = v84;
        v85 = (gameswf::Root::Self *)gameswf::ASObject::getRoot(a2);
        gameswf::Root::projectPosition(v85, (const gameswf::vector3df::Self *)&a41, (gameswf::Point::Self *)&a6);
        v86 = a6;
        a6 = 0.0;
        v87 = fminf(*(float *)a2, v86);
        v88 = a7;
        v89 = fmaxf(v86, *((float *)a2 + 1));
        a7 = 0.0;
        *(float *)a2 = v87;
        v90 = fminf(*((float *)a2 + 2), v88);
        *((float *)a2 + 1) = v89;
        v91 = fmaxf(v88, *((float *)a2 + 3));
        *((float *)a2 + 2) = v90;
        *((float *)a2 + 3) = v91;
        v92 = (gameswf::Root::Self *)gameswf::ASObject::getRoot(a2);
        gameswf::Root::projectPosition(v92, (const gameswf::vector3df::Self *)&a44, (gameswf::Point::Self *)&a6);
        v93 = a6;
        a6 = 0.0;
        v94 = fminf(*(float *)a2, v93);
        v95 = a7;
        v96 = fmaxf(v93, *((float *)a2 + 1));
        a7 = 0.0;
        *(float *)a2 = v94;
        v97 = fminf(*((float *)a2 + 2), v95);
        *((float *)a2 + 1) = v96;
        v98 = fmaxf(v95, *((float *)a2 + 3));
        *((float *)a2 + 2) = v97;
        *((float *)a2 + 3) = v98;
        v99 = (gameswf::Root::Self *)gameswf::ASObject::getRoot(a2);
        gameswf::Root::projectPosition(v99, (const gameswf::vector3df::Self *)&a47, (gameswf::Point::Self *)&a6);
        v100 = a6;
        a6 = 0.0;
        v101 = fminf(*(float *)a2, v100);
        v102 = a7;
        v103 = fmaxf(v100, *((float *)a2 + 1));
        a7 = 0.0;
        *(float *)a2 = v101;
        v104 = fminf(*((float *)a2 + 2), v102);
        *((float *)a2 + 1) = v103;
        v105 = fmaxf(v102, *((float *)a2 + 3));
        *((float *)a2 + 2) = v104;
        *((float *)a2 + 3) = v105;
        v106 = (gameswf::Root::Self *)gameswf::ASObject::getRoot(a2);
        gameswf::Root::projectPosition(v106, (const gameswf::vector3df::Self *)&a50, (gameswf::Point::Self *)&a6);
        v107 = a6;
        a6 = 0.0;
        v108 = fminf(*(float *)a2, v107);
        v109 = a7;
        v110 = fmaxf(v107, *((float *)a2 + 1));
        a7 = 0.0;
        *(float *)a2 = v108;
        v111 = fminf(*((float *)a2 + 2), v109);
        *((float *)a2 + 1) = v110;
        v112 = fmaxf(v109, *((float *)a2 + 3));
        *((float *)a2 + 2) = v111;
        *((float *)a2 + 3) = v112;
        v113 = (gameswf::Root::Self *)gameswf::ASObject::getRoot(a2);
        result = (int)(uintptr_t)(gameswf::Root::projectPosition(v113, (const gameswf::vector3df::Self *)&a53, (gameswf::Point::Self *)&a6));
        v114 = a7;
        v115 = fmaxf(a6, *((float *)a2 + 1));
        *(float *)a2 = fminf(*(float *)a2, a6);
        v116 = fminf(*((float *)a2 + 2), v114);
        *((float *)a2 + 1) = v115;
        v117 = fmaxf(v114, *((float *)a2 + 3));
        *((float *)a2 + 2) = v116;
        *((float *)a2 + 3) = v117;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::doDisplayCallback  (binary VA: 0x107c540)
// Original: gameswf::Character::doDisplayCallback
// ----------------------------------------------------------------------------
int gameswf::Character::doDisplayCallback(gameswf::Character::Self *self)
{
  int v1;
  uint32_t v3[18];

  (*(void (**)(uint32_t *))(*gameswf::s_render_handler + 164))((uint32_t *)(gameswf::s_render_handler));
  v3[1] = *((uint32_t *)self + 28);
  v3[2] = *((uint32_t *)self + 29);
  v3[3] = *((uint32_t *)self + 30);
  v3[4] = *((uint32_t *)self + 31);
  v3[5] = *((uint32_t *)self + 32);
  v3[6] = *((uint32_t *)self + 33);
  v3[7] = *((uint32_t *)self + 20);
  v3[8] = *((uint32_t *)self + 21);
  v3[9] = *((uint32_t *)self + 22);
  v3[10] = *((uint32_t *)self + 23);
  v3[11] = *((uint32_t *)self + 24);
  v3[12] = *((uint32_t *)self + 25);
  v3[13] = *((uint32_t *)self + 26);
  v3[14] = *((uint32_t *)self + 27);
  v1 = *((uint32_t *)self + 19);
  v3[0] = (uint32_t)(uintptr_t)(self);
  (*(void (**)(uint32_t *, uint32_t))(v1 + 132))(v3, *(uint32_t *)(v1 + 136));
  return (*(int (**)(uint32_t *))(*gameswf::s_render_handler + 168))((uint32_t *)(gameswf::s_render_handler));
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::attachSceneNode  (binary VA: 0x107ca80)
// Original: gameswf::Character::attachSceneNode
// ----------------------------------------------------------------------------
char * gameswf::Character::attachSceneNode(int a1, char *a2, int a3)
{
  int v3;
  volatile int32_t *v4;
  int v5;
  int v6;
  int v7;
  char *v8;
  char *result;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  uint16_t *v15;
  int v16;
  uint16_t *v17;
  int v18;
  int v19;
  void (*v20)(char *, uint32_t **);
  volatile int32_t *v21;
  typedef int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v22)) > _g4_s0 ? (8u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v23)) > _g4_s1 ? (12u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v24)) > _g4_s2 ? (24u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v25)) > _g4_s3 ? (28u + sizeof(_g4_t_v25)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);

  if ( *(uint32_t *)(a1 + 76) == 0 )
  {
    v14 = opNew(0x94u);
    v15 = (uint16_t *)(v14 + 32);
    v16 = v14;
    *(uint32_t *)v14 = 1065353216;
    *(uint32_t *)(v14 + 8) = 1065353216;
    *(uint32_t *)(v14 + 16) = 1065353216;
    *(uint32_t *)(v14 + 24) = 1065353216;
    *(uint32_t *)(v14 + 4) = 0;
    *(uint32_t *)(v14 + 12) = 0;
    *(uint32_t *)(v14 + 20) = 0;
    *(uint32_t *)(v14 + 28) = 0;
    v23 = 24;
    if ( ((v14 + 32) & 1) != 0 )
    {
      *(uint8_t *)(v14 + 32) = 0;
      v15 = (uint16_t *)(v14 + 33);
      v23 = 23;
    }
    if ( ((uint8_t)(uintptr_t)v15 & 2) != 0 )
    {
      *v15++ = 0;
      v23 -= 2;
    }
    memset(v15, 0, 4 * (v23 >> 2));
    v17 = &v15[2 * (v23 >> 2)];
    if ( (v23 & 2) != 0 )
      *v17++ = 0;
    if ( (v23 & 1) != 0 )
      *(uint8_t *)v17 = 0;
    v18 = *(uint32_t *)(v14 + 92);
    *(uint32_t *)(v16 + 32) = 1065353216;
    v18 |= 0x7FFFFFu;
    *(uint32_t *)(v16 + 48) = 1065353216;
    *(uint32_t *)(v16 + 92) = v18;
    *(uint32_t *)(v16 + 56) = 0;
    *(uint32_t *)(v16 + 60) = 0;
    *(uint32_t *)(v16 + 64) = 0;
    *(uint32_t *)(v16 + 68) = 0;
    *(uint32_t *)(v16 + 72) = 0;
    *(uint8_t *)(v16 + 76) = 1;
    *(uint8_t *)(v16 + 77) = 0;
    *(uint8_t *)(v16 + 94) = BYTE2(v18) & 0x7F;
    *(uint16_t *)(v16 + 95) = HIBYTE(v18) | 1;
    *(uint8_t *)(v16 + 97) = 0;
    *(uint8_t *)(v16 + 98) = 0;
    *(uint32_t *)(v16 + 100) = 0;
    *(uint32_t *)(v16 + 104) = 1065353216;
    *(uint32_t *)(v16 + 108) = 0;
    *(uint32_t *)(v16 + 112) = 1065353216;
    *(uint32_t *)(v16 + 116) = 0;
    *(uint32_t *)(v16 + 120) = 0;
    *(uint32_t *)(v16 + 124) = 0;
    *(uint32_t *)(v16 + 128) = 0;
    *(uint32_t *)(v16 + 132) = 0;
    *(uint32_t *)(v16 + 136) = 0;
    *(uint32_t *)(v16 + 140) = 0;
    *(uint32_t *)(v16 + 144) = 0;
    *(uint32_t *)(a1 + 76) = v16;
  }
  glitch::scene::ISceneNode::getSceneNodeFromName(
    (glitch::scene::ISceneNode::Self *)&v24,
    (glitch::scene::ISceneNode::Self *)a2,
    (int)gameswf::SCENE_NODE_NAME);
  v3 = (int)(uintptr_t)(v24);
  if ( v24 != nullptr )
  {
    v4 = (volatile int32_t *)((uint32_t *)((char *)v24 + *(uint32_t *)(*v24 - 16)));
    if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v4, 8);
      G4_VCALL<void>(v4, 4);
      if ( *(uint8_t *)(a3 + 9) == 0 )
        goto LABEL_5;
    }
    else if ( *(uint8_t *)(a3 + 9) == 0 )
    {
      goto LABEL_5;
    }
    v10 = *(uint32_t *)(v3 + 528);
    if ( v10 < 0 )
    {
      v11 = 4 * v10;
      do
      {
        v12 = (uint32_t *)(*(uint32_t *)(v3 + 524) + v11);
        if ( v12 != nullptr )
          *v12 = 0;
        v11 += 4;
        ++v10;
      }
      while ( v10 != 0 );
    }
    *(uint32_t *)(v3 + 528) = 0;
  }
  else
  {
    v22 = *(uint32_t *)(a1 + 16);
    v3 = opNew(0x248u);
    gameswf::SceneNode::Construct(g4_arg_cast<gameswf::SceneNode::Self *>(v3), g4_arg_cast<gameswf::Player::Self *>(v22), g4_arg_cast<glitch::scene::ISceneNode::Self *>(a2), g4_arg_cast<const gameswf::SceneNodeParameters::Self *>(a3));
    v19 = *(uint32_t *)a2;
    v25 = (uint32_t *)v3;
    v20 = *(void (**)(char *, uint32_t **))(v19 + 104);
    if ( v3 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v3 + *(uint32_t *)(*(uint32_t *)v3 - 16) + 4), 1u);
    v20(a2, &v25);
    if ( v25 != nullptr )
    {
      v21 = (volatile int32_t *)((uint32_t *)((char *)v25 + *(uint32_t *)(*v25 - 16)));
      if ( __sync_fetch_and_add(v21 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v21, 8);
        G4_VCALL<void>(v21, 4);
      }
    }
  }
LABEL_5:
  *(uint32_t *)(*(uint32_t *)(a1 + 76) + 140) = v3;
  v5 = *(uint32_t *)(v3 + 528);
  v6 = *(uint32_t *)(v3 + 532);
  v7 = v5 + 1;
  if ( v5 + 1 <= v6 || *(uint32_t *)(v3 + 536) != 0 )
  {
    v8 = *(char **)(v3 + 524);
  }
  else
  {
    v13 = v7 + (v7 >> 1);
    *(uint32_t *)(v3 + 532) = v13;
    if ( v13 != 0 )
    {
      if ( *(uint32_t *)(v3 + 524) != 0 )
        v8 = (char *)gameswf::realloc_internal(*(gameswf::Self **)(v3 + 524), 4 * v13, 4 * v6);
      else
        v8 = (char *)gameswf::malloc_internal(4 * v13);
      *(uint32_t *)(v3 + 524) = (uint32_t)(uintptr_t)(v8);
      v5 = *(uint32_t *)(v3 + 528);
    }
    else
    {
      if ( *(uint32_t *)(v3 + 524) != 0 )
      {
        gameswf::free_internal(*(gameswf::Self **)(v3 + 524));
        v5 = *(uint32_t *)(v3 + 528);
      }
      *(uint32_t *)(v3 + 524) = 0;
      v8 = nullptr;
    }
  }
  result = &v8[4 * v5];
  if ( result != nullptr )
    *(uint32_t *)result = a1;
  *(uint32_t *)(v3 + 528) = v7;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::detachSceneNode  (binary VA: 0x107ce80)
// Original: gameswf::Character::detachSceneNode
// ----------------------------------------------------------------------------
uint32_t * gameswf::Character::detachSceneNode(gameswf::Character::Self *self)
{
  uint32_t *result;
  int v2;
  gameswf::Character::Self **v3;
  gameswf::Character::Self **v4;
  int v5;
  gameswf::Character::Self **v6;
  gameswf::Character::Self **dest;
  int v8;
  uint32_t *v9;
  gameswf::Character::Self **v10;

  result = *((uint32_t **)self + 19);
  if ( result != nullptr )
  {
    result = (uint32_t *)result[35];
    v9 = result;
    if ( result != nullptr )
    {
      v2 = result[132];
      if ( v2 > 0 )
      {
        v3 = (gameswf::Character::Self **)result[131];
        v10 = v3;
        if ( self == *v3 )
        {
          dest = v3;
          v8 = 0;
          v5 = 0;
LABEL_12:
          if ( v2 == 1 )
          {
            gameswf::array_gameswf_Character_c3efb8::resize((gameswf::array<gameswf::Character::Self *> *)(v9 + 131), 0);
          }
          else
          {
            memmove(dest, &v10[v8 + 1], 4 * (v2 - 1 - v5));
            --v9[132];
          }
          (*(void (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 19) + 140) + 132))(*(uint32_t *)(*((uint32_t *)self + 19) + 140));
          goto LABEL_9;
        }
        v4 = v3;
        v5 = 0;
        v6 = v4 + 1;
        while ( ++v5 != v2 )
        {
          dest = v6++;
          v8 = v5;
          if ( self == *(v6 - 1) )
            goto LABEL_12;
        }
      }
      G4_VCALL<void>(v9, 132);
LABEL_9:
      result = *((uint32_t **)self + 19);
      result[35] = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getTarget  (binary VA: 0x107cf80)
// Original: gameswf::Character::getTarget
// ----------------------------------------------------------------------------
gameswf::String::Self * gameswf::Character::getTarget(gameswf::Character::Self *self, int a2)
{
  gameswf::Self *v2;
  gameswf::Self *v3;
  int v4;
  int v5;
  char *v6;
  gameswf::Self *v7;
  char *v8;
  char v9;
  int v10;
  int v11;
  int v12;
  gameswf::Self *v13;
  char *v14;
  gameswf::Self *v15;
  int v16;
  gameswf::Self *v17;
  char *v18;
  gameswf::Self *v19;
  int v20;
  unsigned int v21;
  gameswf::Self *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  char *v28;
  gameswf::Self *v29;
  gameswf::Self *v30;
  int v31;
  typedef char _g4_t_v32;
  typedef gameswf::String::Self *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef char _g4_t_v35;
  typedef uint8_t _g4_t_v36[3];
  typedef char *_g4_t_v37;
  typedef gameswf::Self *_g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef gameswf::Character::Self **_g4_t_v40;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (7u + sizeof(_g4_t_v32)) > _g4_s0 ? (7u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v33)) > _g4_s1 ? (12u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v34)) > _g4_s2 ? (16u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v35)) > _g4_s3 ? (20u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (21u + sizeof(_g4_t_v36)) > _g4_s4 ? (21u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v37)) > _g4_s5 ? (24u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v38)) > _g4_s6 ? (32u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v39)) > _g4_s7 ? (36u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v40)) > _g4_s8 ? (60u + sizeof(_g4_t_v40)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 7u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 21u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);

  v40 = &self;
  v33 = (gameswf::String::Self *)(self);
  v34 = a2;
  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::weak_ptr<gameswf::Character::Self> *)(a2 + 52));
  if ( *(uint32_t *)(v34 + 56) == 0 )
  {
    *(uint8_t *)v33 = 1;
    *((uint8_t *)v33 + 1) = 0;
    gameswf::String::resize(v33, 1);
    if ( *(uint8_t *)v33 == 0xFF )
      v30 = *((gameswf::Self **)v33 + 3);
    else
      v30 = (gameswf::Self *)((gameswf::String::Self *)((char *)v33 + 1));
    gameswf::Strcpy_s(v30, (char *)&dword_0 + 2, (gameswf::Self *)"/");
    v31 = *((uint32_t *)v33 + 4) | 0x7FFFFF;
    *((uint32_t *)v33 + 4) = v31;
    *((uint8_t *)v33 + 18) = BYTE2(v31) & 0x7F;
    *((uint8_t *)v33 + 19) = HIBYTE(v31) | 1;
    return v33;
  }
  v2 = (gameswf::Self *)v36;
  gameswf::Character::getTarget((gameswf::Character::Self *)&v35);
  if ( v35 == -1 )
    v2 = v38;
  v3 = (gameswf::Self *)"/";
  v4 = 1;
  if ( strcmp((const char *)v2, "/") == 0 )
  {
    LOBYTE(v4) = 0;
    v3 = (gameswf::Self *)&unk_1B15112;
    if ( v35 != -1 )
      goto LABEL_6;
  }
  else if ( v35 != -1 )
  {
LABEL_6:
    v5 = v35 - 1;
    goto LABEL_7;
  }
  v5 = (int)(uintptr_t)(v37 - 1);
LABEL_7:
  gameswf::String::resize((gameswf::String::Self *)&v35, v5 + v4);
  if ( v35 == -1 )
  {
    v6 = v37;
    v7 = v38;
  }
  else
  {
    v6 = (char *)v35;
    v7 = (gameswf::Self *)v36;
  }
  gameswf::Strcpy_s((gameswf::Self *)((char *)v7 + v5), v6, v3);
  v39 |= 0x7FFFFFu;
  v8 = *(char **)(v34 + 60);
  v9 = *v8;
  v10 = *v8 - 1;
  if ( *v8 == -1 )
    v10 = *((uint32_t *)v8 + 1) - 1;
  if ( v10 == 0 )
  {
    if ( v35 == -1 )
      v27 = (int)(uintptr_t)(v37 - 1);
    else
      v27 = v35 - 1;
    gameswf::String::resize((gameswf::String::Self *)&v35, v27 + 6);
    if ( v35 == -1 )
    {
      v28 = v37;
      v29 = v38;
    }
    else
    {
      v28 = (char *)v35;
      v29 = (gameswf::Self *)v36;
    }
    gameswf::Strcpy_s((gameswf::Self *)((char *)v29 + v27), v28, (gameswf::Self *)"noname");
    v39 |= 0x7FFFFFu;
    goto LABEL_19;
  }
  if ( v9 == -1 )
  {
    v11 = *((uint32_t *)v8 + 1) - 1;
    v12 = v35 - 1;
    if ( v35 != -1 )
      goto LABEL_14;
LABEL_50:
    v12 = (int)(uintptr_t)(v37 - 1);
    goto LABEL_14;
  }
  v11 = v9 - 1;
  v12 = v35 - 1;
  if ( v35 == -1 )
    goto LABEL_50;
LABEL_14:
  gameswf::String::resize((gameswf::String::Self *)&v35, v12 + v11);
  if ( *v8 == -1 )
    v13 = *((gameswf::Self **)v8 + 3);
  else
    v13 = (gameswf::Self *)(v8 + 1);
  if ( v35 == -1 )
  {
    v14 = v37;
    v15 = v38;
  }
  else
  {
    v14 = (char *)v35;
    v15 = (gameswf::Self *)v36;
  }
  gameswf::Strcpy_s((gameswf::Self *)((char *)v15 + v12), v14, v13);
  v39 |= 0x7FFFFFu;
LABEL_19:
  *(uint8_t *)v33 = 1;
  *((uint8_t *)v33 + 1) = 0;
  if ( v35 == -1 )
    v16 = (int)(uintptr_t)(v37 - 1);
  else
    v16 = v35 - 1;
  gameswf::String::resize(v33, v16);
  v17 = (gameswf::Self *)v36;
  if ( v35 == -1 )
    v17 = v38;
  LOBYTE(v18) = *(uint8_t *)v33;
  if ( *(uint8_t *)v33 == 0xFF )
  {
    v18 = *((char **)v33 + 1);
    v19 = *((gameswf::Self **)v33 + 3);
  }
  else
  {
    v18 = (char *)(char)(uintptr_t)(v18);
    v19 = (gameswf::Self *)((gameswf::String::Self *)((char *)v33 + 1));
  }
  gameswf::Strcpy_s(v19, v18, v17);
  if ( (uint8_t *)(v39 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    v32 = v35;
    if ( v35 == -1 )
    {
      v23 = v38;
      v24 = (int)(uintptr_t)(v37 - 1);
    }
    else
    {
      v23 = (gameswf::Self *)v36;
      v24 = v35 - 1;
    }
    v20 = 5381;
    if ( v24 > 0 )
    {
      do
      {
        --v24;
        v25 = 33 * v20;
        v26 = *((uint8_t *)v23 + v24) + 32;
        if ( (uint8_t)(*((uint8_t *)v23 + v24) - 65) > 0x19u )
          v26 = *((uint8_t *)v23 + v24);
        v20 = v25 ^ v26;
      }
      while ( v24 != 0 );
      v20 = v20 << 9 >> 9;
    }
    v39 = v20 & 0x7FFFFF | v39 & 0xFF800000;
  }
  else
  {
    v32 = v35;
    v20 = (int)(v39 << 9) >> 9;
  }
  v21 = v20 & 0x7FFFFF | *((uint32_t *)v33 + 4) & 0xFF800000;
  *((uint32_t *)v33 + 4) = v21;
  *((uint8_t *)v33 + 18) = BYTE2(v21) & 0x7F;
  *((uint8_t *)v33 + 19) = HIBYTE(v21) | 1;
  if ( v32 == -1 && (v39 & 0x1000000) != 0 )
    gameswf::free_internal(v38);
  return v33;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::dispatchEvent  (binary VA: 0x107d3e0)
// Original: gameswf::Character::dispatchEvent
// ----------------------------------------------------------------------------
int gameswf::Character::dispatchEvent(gameswf::Character::Self *self, gameswf::ASEvent::Self *a2)
{
  int result;

  gameswf::ASEventDispatcher::dispatchEvent(self, a2);
  result = *((uint32_t *)a2 + 16);
  if ( result != 0 && *((uint8_t *)a2 + 60) != 0 )
  {
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)self + 52));
    result = *((uint32_t *)self + 14);
    if ( result != 0 )
    {
      *((uint32_t *)a2 + 16) = 2;
      gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)self + 52));
      return (*(int (**)(uint32_t, gameswf::ASEvent::Self *))(**((uint32_t **)self + 14) + 104))(
               *((uint32_t *)self + 14),
               a2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getWorldCxFormRootChange  (binary VA: 0x107d470)
// Original: gameswf::Character::getWorldCxFormRootChange
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::Character::getWorldCxFormRootChange(gameswf::Character::Self *self)
{
  gameswf::Character::Self *v1;
  gameswf::Character::Self *i;

  v1 = nullptr;
  for ( i = self; i != nullptr; i = *((gameswf::Character::Self **)i + 14) )
  {
    if ( *((uint8_t *)i + 146) != 0 )
      v1 = i;
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)i + 52));
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getWorldCxForm  (binary VA: 0x107d4c0)
// Original: gameswf::Character::getWorldCxForm
// ----------------------------------------------------------------------------
char * gameswf::Character::getWorldCxForm(gameswf::Character::Self *self)
{
  gameswf::Character::Self *v1;

  v1 = gameswf::Character::getWorldCxFormRootChange(self);
  if ( v1 != nullptr )
    G4_VCALL<void>(v1, 280);
  return (char *)self + 80;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getWorldMatrixRootChange  (binary VA: 0x107d510)
// Original: gameswf::Character::getWorldMatrixRootChange
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::Character::getWorldMatrixRootChange(gameswf::Character::Self *self)
{
  gameswf::Character::Self *v1;
  gameswf::Character::Self *i;

  v1 = nullptr;
  for ( i = self; i != nullptr; i = *((gameswf::Character::Self **)i + 14) )
  {
    if ( *((uint8_t *)i + 145) != 0 )
      v1 = i;
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)i + 52));
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getWorldMatrix  (binary VA: 0x107d560)
// Original: gameswf::Character::getWorldMatrix
// ----------------------------------------------------------------------------
char * gameswf::Character::getWorldMatrix(gameswf::Character::Self *self)
{
  gameswf::Character::Self *v1;

  v1 = gameswf::Character::getWorldMatrixRootChange(self);
  if ( v1 != nullptr )
    G4_VCALL<void>(v1, 276);
  return (char *)self + 112;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::displayBitmapCache  (binary VA: 0x107d5b0)
// Original: gameswf::Character::displayBitmapCache
// ----------------------------------------------------------------------------
float * gameswf::Character::displayBitmapCache(gameswf::Character::Self *self, bool a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38)
{
  __m128 v38;
  int v39;
  float v40; // xmm4_4
  float v41; // xmm0_4
  __m128 v42;
  float v43; // xmm5_4
  float v44; // xmm5_4
  __m128 v45;
  __m128 v46;
  __m128 v47;
  float v48; // xmm2_4
  __m128 v49;
  float v50; // xmm3_4
  __m128 v51;
  __m128 v52;
  __m128 v53;
  __m128 v54;
  uint32_t v55; // xmm3_4
  __m128 v56;
  __m128 v57;
  uint32_t v58; // xmm7_4
  __m128 v59;
  __m128 v60;
  uint32_t v61; // xmm2_4
  __m128 v62;
  __m128 v63;
  uint32_t v64; // xmm2_4
  __m128 v65;
  uint32_t v66; // xmm6_4
  __m128 v67;
  float v68; // xmm4_4
  float v69; // xmm0_4
  float v70; // xmm1_4
  float v71;
  float v72;
  float *result;
  int v74;
  uint32_t *v75;
  int v76;
  gameswf::Character::Self *v77;
  int v78;
  int v79;
  int v80;
  gameswf::Character::Self *retaddr;
  int (*v112)(uint32_t *, int *, uint32_t, int);
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int32_t _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef unsigned int _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef unsigned int _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103[8];
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef uint32_t _g4_t_v110[13];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v81)) > _g4_s0 ? (8u + sizeof(_g4_t_v81)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v82)) > _g4_s1 ? (12u + sizeof(_g4_t_v82)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v83)) > _g4_s2 ? (16u + sizeof(_g4_t_v83)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v84)) > _g4_s3 ? (20u + sizeof(_g4_t_v84)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v85)) > _g4_s4 ? (24u + sizeof(_g4_t_v85)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v86)) > _g4_s5 ? (28u + sizeof(_g4_t_v86)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v87)) > _g4_s6 ? (32u + sizeof(_g4_t_v87)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v88)) > _g4_s7 ? (36u + sizeof(_g4_t_v88)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v89)) > _g4_s8 ? (40u + sizeof(_g4_t_v89)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v90)) > _g4_s9 ? (44u + sizeof(_g4_t_v90)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v91)) > _g4_s10 ? (52u + sizeof(_g4_t_v91)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v92)) > _g4_s11 ? (56u + sizeof(_g4_t_v92)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v93)) > _g4_s12 ? (60u + sizeof(_g4_t_v93)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v94)) > _g4_s13 ? (64u + sizeof(_g4_t_v94)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v95)) > _g4_s14 ? (72u + sizeof(_g4_t_v95)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v96)) > _g4_s15 ? (76u + sizeof(_g4_t_v96)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v97)) > _g4_s16 ? (80u + sizeof(_g4_t_v97)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v98)) > _g4_s17 ? (84u + sizeof(_g4_t_v98)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v99)) > _g4_s18 ? (88u + sizeof(_g4_t_v99)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v100)) > _g4_s19 ? (92u + sizeof(_g4_t_v100)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v101)) > _g4_s20 ? (96u + sizeof(_g4_t_v101)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v102)) > _g4_s21 ? (100u + sizeof(_g4_t_v102)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v103)) > _g4_s22 ? (112u + sizeof(_g4_t_v103)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v104)) > _g4_s23 ? (144u + sizeof(_g4_t_v104)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v105)) > _g4_s24 ? (148u + sizeof(_g4_t_v105)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v106)) > _g4_s25 ? (152u + sizeof(_g4_t_v106)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v107)) > _g4_s26 ? (156u + sizeof(_g4_t_v107)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v108)) > _g4_s27 ? (160u + sizeof(_g4_t_v108)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v109)) > _g4_s28 ? (164u + sizeof(_g4_t_v109)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v110)) > _g4_s29 ? (168u + sizeof(_g4_t_v110)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 8u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 12u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 16u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 20u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 24u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 28u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 32u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 36u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 40u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 44u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 52u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 56u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 60u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 64u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 72u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 76u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 80u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 84u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 88u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 92u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 96u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 100u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 112u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 144u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 148u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 152u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 156u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 160u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 164u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 168u);

g4_m128_raw(v38) = *((unsigned int *)self + 41);
  v39 = *((uint32_t *)self + 40);
  v40 = (float)(*((float *)self + 42) -g4_m128_lane<float>(v38, 0)) / (float)*(int *)(v39 + 16);
  v41 = (float)*(int *)(v39 + 20);
  v97 = *((unsigned int *)self + 28);
  v98 = *((float *)self + 29);
  v99 = *((float *)self + 30);
  v100 = *((unsigned int *)self + 31);
  v101 = *((float *)self + 32);
  v102 = *((float *)self + 33);
g4_m128_raw(v42) = *((unsigned int *)self + 43);
  v43 = *((float *)self + 44) -g4_m128_lane<float>(v42, 0);
  HIBYTE(v94) = a2;
  memset(v103, 0, 0x18u);
  v44 = v43 / v41;
  v103[0] = 1.0;
  v103[4] = 1.0;
  if (g4_m128_lane<float>(v38, 0) < -3.4028235e38f )
  {
g4_m128_raw(v47) = 0;
    v48 = 0.0;
  }
  else
  {
g4_m128_lane<int32_t>(v45, 0) = 2139095039;
    v46 = _mm_cmple_ss(v38, v45);
g4_m128_raw(v47) = 0;
    LODWORD(v48) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v46, g4_m128_from<__m128>(0LL)), 0) |g4_m128_lane<int32_t>(v38, 0) &g4_m128_lane<int32_t>(v46, 0);
  }
  v103[2] = v48;
  if (g4_m128_lane<float>(v42, 0) < -3.4028235e38f )
  {
    v50 =g4_m128_lane<float>(v47, 0);
  }
  else
  {
    v49 = _mm_cmple_ss(v42, *(__m128 *)&dword_1C7B5E0);
    LODWORD(v50) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v49, v47), 0) |g4_m128_lane<int32_t>(v42, 0) &g4_m128_lane<int32_t>(v49, 0);
  }
  v103[5] = v50;
  v87 =g4_m128_lane<int32_t>(v47, 0);
  gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)v103, LODWORD(v40), LODWORD(v44), 0.0);
g4_m128_raw(v51) = LODWORD(v103[3]);
g4_m128_raw(v52) = v97;
g4_m128_raw(v53) = LODWORD(v103[3]);
g4_m128_lane<float>(v53, 0) = (float)(v103[3] * v98) + (float)(v103[0] * *(float *)&v97);
  if (g4_m128_lane<float>(v53, 0) < -3.4028235e38f )
  {
    v55 =g4_m128_lane<uint32_t>(v47, 0);
  }
  else
  {
    v54 = _mm_cmple_ss(v53, *(__m128 *)&dword_1C7B5E0);
    v55 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v54,g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v47), 0)), 0) |g4_m128_lane<int32_t>(v53, 0) &g4_m128_lane<int32_t>(v54, 0);
  }
  v104 = *(float *)&v55;
g4_m128_raw(v56) = v100;
g4_m128_lane<float>(v51, 0) = (float)(v103[3] * v101) + (float)(v103[0] * *(float *)&v100);
  if (g4_m128_lane<float>(v51, 0) < -3.4028235e38f )
  {
    v58 =g4_m128_lane<uint32_t>(v47, 0);
  }
  else
  {
    v57 = _mm_cmple_ss(v51, *(__m128 *)&dword_1C7B5E0);
    v58 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v57,g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v47), 0)), 0) |g4_m128_lane<int32_t>(v51, 0) &g4_m128_lane<int32_t>(v57, 0);
  }
g4_m128_raw(v59) = LODWORD(v103[4]);
  v107 = *(float *)&v58;
g4_m128_lane<float>(v59, 0) = (float)(v103[4] * v98) + (float)(v103[1] * *(float *)&v97);
  if (g4_m128_lane<float>(v59, 0) < -3.4028235e38f )
  {
    v61 =g4_m128_lane<uint32_t>(v47, 0);
  }
  else
  {
    v60 = _mm_cmple_ss(v59, *(__m128 *)&dword_1C7B5E0);
    v61 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v60,g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v47), 0)), 0) |g4_m128_lane<int32_t>(v59, 0) &g4_m128_lane<int32_t>(v60, 0);
  }
  v105 = *(float *)&v61;
g4_m128_raw(v62) = LODWORD(v103[4]);
g4_m128_lane<float>(v62, 0) = (float)(v103[4] * v101) + (float)(v103[1] * *(float *)&v100);
  if (g4_m128_lane<float>(v62, 0) < -3.4028235e38f )
  {
    v64 =g4_m128_lane<uint32_t>(v47, 0);
  }
  else
  {
    v63 = _mm_cmple_ss(v62, *(__m128 *)&dword_1C7B5E0);
    v64 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v63,g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v47), 0)), 0) |g4_m128_lane<int32_t>(v62, 0) &g4_m128_lane<int32_t>(v63, 0);
  }
  v108 = *(float *)&v64;
g4_m128_lane<float>(v52, 0) = (float)((float)(*(float *)&v97 * v103[2]) + (float)(v98 * v103[5])) + v99;
  if (g4_m128_lane<float>(v52, 0) < -3.4028235e38f )
  {
    v66 =g4_m128_lane<uint32_t>(v47, 0);
  }
  else
  {
    v65 = _mm_cmple_ss(v52, *(__m128 *)&dword_1C7B5E0);
    v66 =g4_m128_lane<uint32_t>(_mm_andnot_ps(v65,g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v47), 0)), 0) |g4_m128_lane<int32_t>(v52, 0) &g4_m128_lane<int32_t>(v65, 0);
  }
  v106 = *(float *)&v66;
g4_m128_lane<float>(v56, 0) = (float)((float)(*(float *)&v100 * v103[2]) + (float)(v101 * v103[5])) + v102;
  if (g4_m128_lane<float>(v56, 0) < -3.4028235e38f )
  {
    v68 =g4_m128_lane<float>(v47, 0);
  }
  else
  {
    v67 = _mm_cmple_ss(v56, *(__m128 *)&dword_1C7B5E0);
    LODWORD(v68) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v67,g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v47), 0)), 0) |g4_m128_lane<int32_t>(v56, 0) &g4_m128_lane<int32_t>(v67, 0);
  }
  v96 = v107;
  v69 = *((float *)self + 44) - *((float *)self + 43);
  v70 = *((float *)self + 42) - *((float *)self + 41);
  *(float *)&v100 = v107;
  v109 = v68;
  v71 = v104;
  v72 = v105;
  v95 = v108;
  v101 = v108;
  v102 = v68;
  *(float *)&v97 = v104;
  v98 = v105;
  v110[1] = (uint32_t)(uintptr_t)((char *)self + 180);
  v99 = v106;
  LOWORD(v110[0]) = 0;
  v110[4] = 0;
  v110[9] = 0;
  v110[3] = 393220;
  v110[2] = (uint32_t)(uintptr_t)(&unk_1CC4440);
  v110[5] = 0;
  *(float *)&v110[6] = v70;
  v110[7] = 0;
  *(float *)&v110[8] = v69;
  if ( a2 )
  {
    gameswf::RenderHandler::flush((gameswf::RenderHandler::Self *)gameswf::s_render_handler);
    (*(void (**)(uint32_t *, unsigned int *, int, int, int, int, int, int, int32_t, int, int, int, int, int, int, int, int, float, float, float))(*gameswf::s_render_handler + 64))(
      (uint32_t *)(gameswf::s_render_handler),
      &v97,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90,
      -8388609,
      v91,
      v92,
      v93,
      v94,
      COERCE_FLOAT(LODWORD(v68)),
      COERCE_FLOAT(LODWORD(v95)),
      COERCE_FLOAT(LODWORD(v96)));
    (*(void (**)(uint32_t *, char *))(*gameswf::s_render_handler + 68))(
      (uint32_t *)(gameswf::s_render_handler),
      (char *)self + 80);
    retaddr = (gameswf::Character::Self *)(&dword_0 + 1);
    (*(void (**)(uint32_t *, uint32_t, uint32_t, uint32_t *))(*gameswf::s_render_handler + 76))(
      (uint32_t *)(gameswf::s_render_handler),
      0,
      *((uint32_t *)self + 40),
      (uint32_t *)(gameswf::Matrix::identity));
    v75 = (uint32_t *)(gameswf::s_render_handler);
    v76 = *((uint32_t *)self + 19);
    v112 = *(int (**)(uint32_t *, int *, uint32_t, int))(*gameswf::s_render_handler + 116);
    v77 = nullptr;
    if ( v76 != 0 )
      v77 = *(gameswf::Character::Self **)(v76 + 144);
    gameswf::Character::getWorldMatrix(v77);
    v78 = *((uint32_t *)self + 19);
    v79 = 0;
    v80 = 164;
    if ( v78 != 0 )
    {
      v79 = *(uint32_t *)(v78 + 144);
      v80 = v79 + 164;
    }
    retaddr = (gameswf::Character::Self *)((char *)self + 164);
    return (float *)v112(v75, &a38, *(uint32_t *)(v79 + 160), v80);
  }
  else
  {
    result = (float *)gameswf::s_render_handler;
    if ( gameswf::s_render_handler != nullptr )
    {
      *((float *)gameswf::s_render_handler + 31) = v106;
      result[32] = v96;
      result[33] = v95;
      result[30] = v72;
      result[29] = v71;
      result[34] = v68;
      result[35] = *((float *)self + 20);
      result[36] = *((float *)self + 21);
      result[37] = *((float *)self + 22);
      result[38] = *((float *)self + 23);
      result[39] = *((float *)self + 24);
      result[40] = *((float *)self + 25);
      result[41] = *((float *)self + 26);
      result[42] = *((float *)self + 27);
      result[43] = *((float *)self + 40);
      result[44] = *(float *)gameswf::Matrix::identity;
      result[45] = *(float *)&gameswf::Matrix::identity[1];
      result[46] = *(float *)&gameswf::Matrix::identity[2];
      result[47] = *(float *)&gameswf::Matrix::identity[3];
      v74 = gameswf::Matrix::identity[5];
      result[48] = *(float *)&gameswf::Matrix::identity[4];
      *((uint32_t *)result + 49) = v74;
      *((uint32_t *)result + 52) = 1;
      return (float *)gameswf::RenderHandler::draw((gameswf::RenderHandler::Self *)result, (int)(uintptr_t)(v110));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getProjectedBound  (binary VA: 0x107dc10)
// Original: gameswf::Character::getProjectedBound
// ----------------------------------------------------------------------------
int gameswf::Character::getProjectedBound(gameswf::ASDisplayObjectContainer::Self **self, gameswf::Rect::Self *a2)
{
  gameswf::ASDisplayObjectContainer::Self *v2;
  gameswf::Root::Self *Root;
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  gameswf::Root::Self *v10;
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  gameswf::Root::Self *v17;
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  gameswf::Root::Self *v24;
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  gameswf::Root::Self *v31;
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm2_4
  float v37; // xmm0_4
  gameswf::Root::Self *v38;
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm2_4
  float v44; // xmm0_4
  gameswf::Root::Self *v45;
  float v46; // xmm1_4
  float v47; // xmm2_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm2_4
  float v51; // xmm0_4
  gameswf::Root::Self *v52;
  int result;
  float v54; // xmm0_4
  float v55; // xmm1_4
  float v56; // xmm2_4
  float v57; // xmm0_4
  float v58;
  float v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  uint32_t v66[16];
  uint32_t v67[3];
  uint32_t v68[3];
  uint32_t v69[3];
  uint32_t v70[3];
  uint32_t v71[3];
  uint32_t v72[3];
  uint32_t v73[3];
  uint32_t v74[10];

  memset(v66, 0, sizeof(v66));
  *(uint32_t *)a2 = 2139095039;
  *((uint32_t *)a2 + 1) = -8388609;
  *((uint32_t *)a2 + 2) = 2139095039;
  *((uint32_t *)a2 + 3) = -8388609;
  v66[15] = 1065353216;
  v66[10] = 1065353216;
  v66[5] = 1065353216;
  v66[0] = 1065353216;
  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::weak_ptr<gameswf::Character::Self> *)(self + 13));
  if ( *(self + 14) != nullptr )
  {
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::weak_ptr<gameswf::Character::Self> *)(self + 13));
    gameswf::ASDisplayObjectContainer::getWorldTransform(*(self + 14), (gameswf::Transform::Self *)v66);
  }
  v2 = *self;
  v60 = 2139095039;
  v61 = 2139095039;
  v62 = 2139095039;
  v63 = -8388609;
  v64 = -8388609;
  v65 = -8388609;
  (*((void (**)(gameswf::ASDisplayObjectContainer::Self **, uint32_t *, int *))v2 + 75))(self, v66, &v60);
  v67[0] = v60;
  v68[0] = v60;
  v69[0] = v60;
  v70[0] = v60;
  v67[2] = v62;
  v69[2] = v62;
  v71[2] = v62;
  v73[2] = v62;
  v68[2] = v65;
  v67[1] = v61;
  v70[2] = v65;
  v68[1] = v61;
  v72[2] = v65;
  v71[0] = v63;
  v74[2] = v65;
  v71[1] = v61;
  v72[0] = v63;
  v72[1] = v61;
  v73[0] = v63;
  v74[0] = v63;
  v69[1] = v64;
  v70[1] = v64;
  v73[1] = v64;
  v74[1] = v64;
  v58 = 0.0;
  v59 = 0.0;
  Root = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::ASObject::Self *)self);
  gameswf::Root::projectPosition(Root, (const gameswf::vector3df::Self *)v67, (gameswf::Point::Self *)&v58);
  v4 = v58;
  v58 = 0.0;
  v5 = fminf(*(float *)a2, v4);
  v6 = v59;
  v7 = fmaxf(v4, *((float *)a2 + 1));
  v59 = 0.0;
  *(float *)a2 = v5;
  v8 = fminf(*((float *)a2 + 2), v6);
  *((float *)a2 + 1) = v7;
  v9 = fmaxf(v6, *((float *)a2 + 3));
  *((float *)a2 + 2) = v8;
  *((float *)a2 + 3) = v9;
  v10 = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::ASObject::Self *)self);
  gameswf::Root::projectPosition(v10, (const gameswf::vector3df::Self *)v68, (gameswf::Point::Self *)&v58);
  v11 = v58;
  v58 = 0.0;
  v12 = fminf(*(float *)a2, v11);
  v13 = v59;
  v14 = fmaxf(v11, *((float *)a2 + 1));
  v59 = 0.0;
  *(float *)a2 = v12;
  v15 = fminf(*((float *)a2 + 2), v13);
  *((float *)a2 + 1) = v14;
  v16 = fmaxf(v13, *((float *)a2 + 3));
  *((float *)a2 + 2) = v15;
  *((float *)a2 + 3) = v16;
  v17 = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::ASObject::Self *)self);
  gameswf::Root::projectPosition(v17, (const gameswf::vector3df::Self *)v69, (gameswf::Point::Self *)&v58);
  v18 = v58;
  v58 = 0.0;
  v19 = fminf(*(float *)a2, v18);
  v20 = v59;
  v21 = fmaxf(v18, *((float *)a2 + 1));
  v59 = 0.0;
  *(float *)a2 = v19;
  v22 = fminf(*((float *)a2 + 2), v20);
  *((float *)a2 + 1) = v21;
  v23 = fmaxf(v20, *((float *)a2 + 3));
  *((float *)a2 + 2) = v22;
  *((float *)a2 + 3) = v23;
  v24 = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::ASObject::Self *)self);
  gameswf::Root::projectPosition(v24, (const gameswf::vector3df::Self *)v70, (gameswf::Point::Self *)&v58);
  v25 = v58;
  v58 = 0.0;
  v26 = fminf(*(float *)a2, v25);
  v27 = v59;
  v28 = fmaxf(v25, *((float *)a2 + 1));
  v59 = 0.0;
  *(float *)a2 = v26;
  v29 = fminf(*((float *)a2 + 2), v27);
  *((float *)a2 + 1) = v28;
  v30 = fmaxf(v27, *((float *)a2 + 3));
  *((float *)a2 + 2) = v29;
  *((float *)a2 + 3) = v30;
  v31 = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::ASObject::Self *)self);
  gameswf::Root::projectPosition(v31, (const gameswf::vector3df::Self *)v71, (gameswf::Point::Self *)&v58);
  v32 = v58;
  v58 = 0.0;
  v33 = fminf(*(float *)a2, v32);
  v34 = v59;
  v35 = fmaxf(v32, *((float *)a2 + 1));
  v59 = 0.0;
  *(float *)a2 = v33;
  v36 = fminf(*((float *)a2 + 2), v34);
  *((float *)a2 + 1) = v35;
  v37 = fmaxf(v34, *((float *)a2 + 3));
  *((float *)a2 + 2) = v36;
  *((float *)a2 + 3) = v37;
  v38 = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::ASObject::Self *)self);
  gameswf::Root::projectPosition(v38, (const gameswf::vector3df::Self *)v72, (gameswf::Point::Self *)&v58);
  v39 = v58;
  v58 = 0.0;
  v40 = fminf(*(float *)a2, v39);
  v41 = v59;
  v42 = fmaxf(v39, *((float *)a2 + 1));
  v59 = 0.0;
  *(float *)a2 = v40;
  v43 = fminf(*((float *)a2 + 2), v41);
  *((float *)a2 + 1) = v42;
  v44 = fmaxf(v41, *((float *)a2 + 3));
  *((float *)a2 + 2) = v43;
  *((float *)a2 + 3) = v44;
  v45 = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::ASObject::Self *)self);
  gameswf::Root::projectPosition(v45, (const gameswf::vector3df::Self *)v73, (gameswf::Point::Self *)&v58);
  v46 = v58;
  v58 = 0.0;
  v47 = fminf(*(float *)a2, v46);
  v48 = v59;
  v49 = fmaxf(v46, *((float *)a2 + 1));
  v59 = 0.0;
  *(float *)a2 = v47;
  v50 = fminf(*((float *)a2 + 2), v48);
  *((float *)a2 + 1) = v49;
  v51 = fmaxf(v48, *((float *)a2 + 3));
  *((float *)a2 + 2) = v50;
  *((float *)a2 + 3) = v51;
  v52 = (gameswf::Root::Self *)gameswf::ASObject::getRoot((gameswf::ASObject::Self *)self);
  result = (int)(uintptr_t)(gameswf::Root::projectPosition(v52, (const gameswf::vector3df::Self *)v74, (gameswf::Point::Self *)&v58));
  v54 = v59;
  v55 = fmaxf(v58, *((float *)a2 + 1));
  *(float *)a2 = fminf(*(float *)a2, v58);
  v56 = fminf(*((float *)a2 + 2), v54);
  *((float *)a2 + 1) = v55;
  v57 = fmaxf(v54, *((float *)a2 + 3));
  *((float *)a2 + 2) = v56;
  *((float *)a2 + 3) = v57;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::updateWorldCxForm  (binary VA: 0x107e220)
// Original: gameswf::Character::updateWorldCxForm
// ----------------------------------------------------------------------------
uint32_t * gameswf::Character::updateWorldCxForm(gameswf::Character::Self *self)
{
  uint32_t *v1;
  uint32_t *result;
  int64_t v3;

  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)self + 52));
  if ( *((uint32_t *)self + 14) != 0 )
  {
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)self + 52));
    v1 = (uint32_t *)(*((uint32_t *)self + 14) + 80);
  }
  else
  {
    v1 = (uint32_t *)(gameswf::CxForm::identity);
  }
  *((uint32_t *)self + 20) = *v1;
  *((uint32_t *)self + 21) = v1[1];
  *((uint32_t *)self + 22) = v1[2];
  *((uint32_t *)self + 23) = v1[3];
  *((uint32_t *)self + 24) = v1[4];
  *((uint32_t *)self + 25) = v1[5];
  *((uint32_t *)self + 26) = v1[6];
  *((uint32_t *)self + 27) = v1[7];
  result = *((uint32_t **)self + 16);
  if ( result != (uint32_t *)(uintptr_t)(gameswf::CxForm::identity) )
  {
    HIDWORD(v3) = *((uint32_t *)self + 16);
    LODWORD(v3) = (uint32_t)(uintptr_t)((char *)self + 80);
    result = (uint32_t *)gameswf::CxForm::concatenate(v3);
  }
  *((uint8_t *)self + 146) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::updateWorldMatrix  (binary VA: 0x107e2e0)
// Original: gameswf::Character::updateWorldMatrix
// ----------------------------------------------------------------------------
uint32_t gameswf::Character::updateWorldMatrix(gameswf::Character::Self *self)
{
  uint32_t *v1;
  float v2; // xmm6_4
  __m128 v3;
  __m128 v4;
  float v5; // xmm4_4
  __m128 v6;
  uint32_t v7; // xmm2_4
  __m128 v8;
  float v9; // xmm2_4
  uint32_t v10; // xmm1_4
  __m128 v11;
  __m128 v12;
  uint32_t v13; // xmm1_4
  uint32_t v14; // xmm6_4
  float v15; // xmm1_4
  float v16; // xmm6_4
  uint32_t v17; // xmm5_4
  uint32_t v18; // xmm3_4
  int v19;
  typedef float _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v21)) > _g4_s0 ? (8u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v23)) > _g4_s2 ? (16u + sizeof(_g4_t_v23)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);

  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)self + 52));
  v1 = (uint32_t *)(gameswf::Matrix::identity);
  if ( *((uint32_t *)self + 14) != 0 )
  {
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)self + 52));
    v1 = (uint32_t *)(*((uint32_t *)self + 14) + 112);
  }
  *((uint32_t *)self + 28) = *v1;
  *((uint32_t *)self + 29) = v1[1];
  *((uint32_t *)self + 30) = v1[2];
  *((uint32_t *)self + 31) = v1[3];
  *((uint32_t *)self + 32) = v1[4];
  *((uint32_t *)self + 33) = v1[5];
  v22 = *((uint32_t *)self + 17);
  memset(v23, 0, sizeof(v23));
  v2 = *(float *)v22;
g4_m128_raw(v3) = *(unsigned int *)(v22 + 12);
g4_m128_raw(v4) = *((unsigned int *)self + 28);
  v6 = v3;
  v5 = *((float *)self + 29);
g4_m128_lane<float>(v6, 0) = (float)(g4_m128_lane<float>(v3, 0) * v5) + (float)(*(float *)v22 *g4_m128_lane<float>(v4, 0));
  if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
    v7 = 0;
  else
    v7 =g4_m128_lane<int32_t>(v6, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0), 0);
  v23[0] = v7;
g4_m128_raw(v8) = *((unsigned int *)self + 31);
  v9 = *((float *)self + 32);
g4_m128_lane<float>(v3, 0) = (float)(g4_m128_lane<float>(v3, 0) * v9) + (float)(v2 *g4_m128_lane<float>(v8, 0));
  if (g4_m128_lane<float>(v3, 0) < -3.4028235e38f )
    v10 = 0;
  else
    v10 =g4_m128_lane<int32_t>(v3, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v3, *(__m128 *)&dword_1C7B5E0), 0);
  v23[3] = v10;
  v21 = *(float *)(v22 + 4);
g4_m128_raw(v11) = *(unsigned int *)(v22 + 16);
  v12 = v11;
g4_m128_lane<float>(v12, 0) = (float)(g4_m128_lane<float>(v11, 0) * v5) + (float)(v21 *g4_m128_lane<float>(v4, 0));
  if (g4_m128_lane<float>(v12, 0) < -3.4028235e38f )
    v13 = 0;
  else
    v13 =g4_m128_lane<int32_t>(v12, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v12, *(__m128 *)&dword_1C7B5E0), 0);
  v23[1] = v13;
g4_m128_lane<float>(v11, 0) = (float)(g4_m128_lane<float>(v11, 0) * v9) + (float)(v21 *g4_m128_lane<float>(v8, 0));
  if (g4_m128_lane<float>(v11, 0) < -3.4028235e38f )
    v14 = 0;
  else
    v14 =g4_m128_lane<int32_t>(v11, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v11, *(__m128 *)&dword_1C7B5E0), 0);
  v23[4] = v14;
  v15 = *(float *)(v22 + 20);
  v16 = *(float *)(v22 + 8);
g4_m128_lane<float>(v4, 0) = (float)((float)(g4_m128_lane<float>(v4, 0) * v16) + (float)(v5 * v15)) + *((float *)self + 30);
  if (g4_m128_lane<float>(v4, 0) < -3.4028235e38f )
    v17 = 0;
  else
    v17 =g4_m128_lane<int32_t>(v4, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v4, *(__m128 *)&dword_1C7B5E0), 0);
  v23[2] = v17;
g4_m128_lane<float>(v8, 0) = (float)((float)(g4_m128_lane<float>(v8, 0) * v16) + (float)(v9 * v15)) + *((float *)self + 33);
  if (g4_m128_lane<float>(v8, 0) < -3.4028235e38f )
    v18 = 0;
  else
    v18 =g4_m128_lane<int32_t>(v8, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v8, *(__m128 *)&dword_1C7B5E0), 0);
  v19 = v23[0];
  *((uint8_t *)self + 145) = 0;
  *((uint32_t *)self + 28) = v19;
  *((uint32_t *)self + 29) = v23[1];
  *((uint32_t *)self + 30) = v23[2];
  *((uint32_t *)self + 31) = v23[3];
  *((uint32_t *)self + 32) = v23[4];
  v23[5] = v18;
  *((uint32_t *)self + 33) = v18;
  return v18;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::invalidateBitmapCache  (binary VA: 0x107e540)
// Original: gameswf::Character::invalidateBitmapCache
// ----------------------------------------------------------------------------
int gameswf::Character::invalidateBitmapCache(gameswf::Character::Self *self)
{
  int result;

  *((uint8_t *)self + 157) = 1;
  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)self + 52));
  result = *((uint32_t *)self + 14);
  if ( result != 0 )
  {
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)self + 52));
    result = gameswf::Character::invalidateBitmapCache(*((gameswf::Character::Self **)self + 14));
  }
  *((uint8_t *)self + 147) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::invokeMethod  (binary VA: 0x107e5b0)
// Original: gameswf::Character::invokeMethod
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::Character::invokeMethod(gameswf::Character::Self *self, gameswf::RefCounted::Self *a2, const gameswf::ASValue::Self *a3, gameswf::ASValue::Self *a4, unsigned int a5)
{
  const char *v5;
  unsigned int v6;
  gameswf::RefCounted::Self *v7;
  gameswf::Self *WeakProxy;
  gameswf::Self *v9;
  bool v10;
  gameswf::Self **v11;
  gameswf::Self *v12;
  int v13;
  char *i;
  gameswf::Self **v15;
  int v16;
  int v17;
  char *v18;
  gameswf::ASValue::Self *v19;
  int v20;
  char *v21;
  int v22;
  gameswf::ASValue::Self *v23;
  gameswf::weak_ptr<gameswf::Character::Self> *v25;
  int v26;
  char *v27;
  char *v28;
  int v29;
  int v30;
  char *v31;
  typedef int _g4_t_v32;
  typedef gameswf::Self *_g4_t_v33;
  typedef gameswf::Self *_g4_t_v34;
  typedef gameswf::RefCounted::Self *_g4_t_v35;
  typedef gameswf::ASValue::Self *_g4_t_v36;
  typedef gameswf::ASValue::Self *_g4_t_v37;
  typedef char *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef char *_g4_t_v41;
  typedef gameswf::Self *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef char _g4_t_v46;
  typedef uint8_t _g4_t_v47[12];
  typedef uint8_t _g4_t_v48[12];
  typedef uint8_t _g4_t_v49[12];
  typedef uint8_t _g4_t_v50[12];
  typedef gameswf::Self *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef gameswf::RefCounted::Self *_g4_t_v55;
  typedef uint8_t _g4_t_v56[12];
  typedef gameswf::Self *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef gameswf::Self *_g4_t_v61;
  typedef gameswf::RefCounted::Self *_g4_t_v62;
  typedef gameswf::Character::Self **_g4_t_v63;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (8u + sizeof(_g4_t_v32)) > _g4_s0 ? (8u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v33)) > _g4_s1 ? (48u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v34)) > _g4_s2 ? (52u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v35)) > _g4_s3 ? (56u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v36)) > _g4_s4 ? (60u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v37)) > _g4_s5 ? (60u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v38)) > _g4_s6 ? (64u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v39)) > _g4_s7 ? (64u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v40)) > _g4_s8 ? (64u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v41)) > _g4_s9 ? (64u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v42)) > _g4_s10 ? (68u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v43)) > _g4_s11 ? (72u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v44)) > _g4_s12 ? (76u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v45)) > _g4_s13 ? (80u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v46)) > _g4_s14 ? (84u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (180u + sizeof(_g4_t_v47)) > _g4_s15 ? (180u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (192u + sizeof(_g4_t_v48)) > _g4_s16 ? (192u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (204u + sizeof(_g4_t_v49)) > _g4_s17 ? (204u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (216u + sizeof(_g4_t_v50)) > _g4_s18 ? (216u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (228u + sizeof(_g4_t_v51)) > _g4_s19 ? (228u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (232u + sizeof(_g4_t_v52)) > _g4_s20 ? (232u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (236u + sizeof(_g4_t_v53)) > _g4_s21 ? (236u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v54)) > _g4_s22 ? (240u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (244u + sizeof(_g4_t_v55)) > _g4_s23 ? (244u + sizeof(_g4_t_v55)) : _g4_s23,
    _g4_s25 = (248u + sizeof(_g4_t_v56)) > _g4_s24 ? (248u + sizeof(_g4_t_v56)) : _g4_s24,
    _g4_s26 = (260u + sizeof(_g4_t_v57)) > _g4_s25 ? (260u + sizeof(_g4_t_v57)) : _g4_s25,
    _g4_s27 = (264u + sizeof(_g4_t_v58)) > _g4_s26 ? (264u + sizeof(_g4_t_v58)) : _g4_s26,
    _g4_s28 = (268u + sizeof(_g4_t_v59)) > _g4_s27 ? (268u + sizeof(_g4_t_v59)) : _g4_s27,
    _g4_s29 = (272u + sizeof(_g4_t_v60)) > _g4_s28 ? (272u + sizeof(_g4_t_v60)) : _g4_s28,
    _g4_s30 = (276u + sizeof(_g4_t_v61)) > _g4_s29 ? (276u + sizeof(_g4_t_v61)) : _g4_s29,
    _g4_s31 = (280u + sizeof(_g4_t_v62)) > _g4_s30 ? (280u + sizeof(_g4_t_v62)) : _g4_s30,
    _g4_s32 = (300u + sizeof(_g4_t_v63)) > _g4_s31 ? (300u + sizeof(_g4_t_v63)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 84u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 180u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 192u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 204u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 216u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 228u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 232u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 236u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 240u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 244u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 248u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 260u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 264u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 268u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 272u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 276u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 280u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 300u);

  v63 = &self;
  v35 = a2;
  v5 = (const char *)a2;
  v38 = (char *)a3;
  v34 = (gameswf::Self *)(self);
  v36 = a4;
  v6 = a5;
  if ( a2 != nullptr && G4_VCALL<uint8_t>(a2, 8, 2) != 0
    || (v25 = (gameswf::weak_ptr<gameswf::Character::Self> *)((gameswf::RefCounted::Self *)((char *)v35 + 52)),
        gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::RefCounted::Self *)((char *)v35 + 52)),
        *((uint32_t *)v35 + 14) != 0)
    && (gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(v25),
        (*(uint8_t (**)(uint32_t, int))(**((uint32_t **)v35 + 14) + 8))(*((uint32_t *)v35 + 14), 2) != 0)
    && (gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(v25), (v5 = *((const char **)v35 + 14)) != nullptr) )
  {
    if ( v35 != nullptr )
      gameswf::RefCounted::addRef(v35);
    v7 = *((gameswf::RefCounted::Self **)v5 + 4);
    v42 = nullptr;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    if ( v6 <= 8 )
    {
      v44 = 8;
      v42 = (gameswf::Self *)&v46;
      v45 = 1;
    }
    v47[0] = 0;
    v47[1] = 0;
    v48[0] = 0;
    v48[1] = 0;
    v49[0] = 0;
    v49[1] = 0;
    v50[0] = 0;
    v50[1] = 0;
    v51 = nullptr;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = nullptr;
    v56[0] = 0;
    v56[1] = 0;
    v57 = nullptr;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = nullptr;
    v62 = v7;
    if ( v7 != nullptr )
    {
      WeakProxy = (gameswf::Self *)gameswf::RefCounted::getWeakProxy(v7);
      v9 = v61;
      if ( WeakProxy != v61 )
      {
        if ( v61 != nullptr )
        {
          v10 = (*(uint16_t *)v61)-- == 1;
          if ( v10 )
          {
            v33 = WeakProxy;
            v32 = 0;
            gameswf::free_internal(v9);
            WeakProxy = v33;
          }
        }
        v61 = WeakProxy;
        if ( WeakProxy != nullptr )
          ++*(uint16_t *)WeakProxy;
      }
    }
    v11 = &v42;
    if ( *(uint8_t *)(*((uint32_t *)v5 + 4) + 232) == 0 )
      v11 = (gameswf::Self **)G4_VCALL<int>(v5, 92, v32);
    gameswf::call_method(v34, (gameswf::ASEnvironment::Self *)v11, v35, v38, v36, v6);
    v12 = v61;
    if ( v61 != nullptr )
    {
      v10 = (*(uint16_t *)v61)-- == 1;
      if ( v10 )
        gameswf::free_internal(v12);
    }
    v13 = v58;
    if ( v58 <= 0 )
    {
      if ( v58 < 0 )
      {
        v37 = (gameswf::ASValue::Self *)(32 * v58);
        do
        {
          v28 = (char *)v37 + (uint32_t)(uintptr_t)(v57);
          if ( (gameswf::ASValue::Self *)((char *)v37 + (uint32_t)(uintptr_t)(v57)) != nullptr )
          {
            v29 = *((uint32_t *)v28 + 4);
            *v28 = 1;
            v29 |= 0x7FFFFFu;
            v28[1] = 0;
            *((uint32_t *)v28 + 4) = v29;
            v28[20] = 0;
            v28[18] = BYTE2(v29) & 0x7F;
            v28[19] = HIBYTE(v29) | 1;
            v28[21] = 0;
          }
          v37 = (gameswf::ASValue::Self *)((char *)v37 + 32);
          ++v13;
        }
        while ( v13 != 0 );
      }
    }
    else
    {
      v39 = (char *)v58;
      for ( i = nullptr; i != v39; ++i )
      {
        while ( 1 )
        {
          v15 = (gameswf::Self **)((char *)v57 + 32 * (uint32_t)(uintptr_t)(i));
          gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)(v15 + 5));
          if ( *(uint8_t *)v15 == 0xFF && (*((uint8_t *)v15 + 19) & 1) != 0 )
            break;
          if ( ++i == v39 )
            goto LABEL_25;
        }
        gameswf::free_internal(v15[3]);
      }
    }
LABEL_25:
    v58 = 0;
    if ( v60 == 0 )
    {
      v59 = 0;
      if ( v57 != nullptr )
        gameswf::free_internal(v57);
      v57 = nullptr;
    }
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v56);
    if ( v55 != nullptr )
      gameswf::RefCounted::dropRef(v55);
    v16 = v52;
    if ( v52 <= 0 )
    {
      if ( v52 < 0 )
      {
        v26 = 12 * v52;
        do
        {
          v27 = (char *)v51 + v26;
          if ( (gameswf::Self *)((char *)v51 + v26) != nullptr )
          {
            *v27 = 0;
            v27[1] = 0;
          }
          v26 += 12;
          ++v16;
        }
        while ( v16 != 0 );
      }
    }
    else
    {
      v40 = (char *)v52;
      v17 = 0;
      v18 = nullptr;
      do
      {
        ++v18;
        v19 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v51 + v17));
        v17 += 12;
        gameswf::ASValue::dropRefs(v19);
      }
      while ( v18 != v40 );
    }
    v52 = 0;
    if ( v54 == 0 )
    {
      v53 = 0;
      if ( v51 != nullptr )
        gameswf::free_internal(v51);
      v51 = nullptr;
    }
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v50);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v49);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v48);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v47);
    v20 = v43;
    if ( v43 <= 0 )
    {
      if ( v43 < 0 )
      {
        v30 = 12 * v43;
        do
        {
          v31 = (char *)v42 + v30;
          if ( (gameswf::Self *)((char *)v42 + v30) != nullptr )
          {
            *v31 = 0;
            v31[1] = 0;
          }
          v30 += 12;
          ++v20;
        }
        while ( v20 != 0 );
      }
    }
    else
    {
      v41 = (char *)v43;
      v21 = nullptr;
      v22 = 0;
      do
      {
        ++v21;
        v23 = (gameswf::ASValue::Self *)((gameswf::Self *)((char *)v42 + v22));
        v22 += 12;
        gameswf::ASValue::dropRefs(v23);
      }
      while ( v21 != v41 );
    }
    v43 = 0;
    if ( v45 == 0 )
    {
      v44 = 0;
      if ( v42 != nullptr )
        gameswf::free_internal(v42);
      v42 = nullptr;
    }
    if ( v35 != nullptr )
      gameswf::RefCounted::dropRef(v35);
  }
  else
  {
    *(uint8_t *)v34 = 1;
    *((uint8_t *)v34 + 1) = 0;
    *((uint8_t *)v34 + 4) = 0;
  }
  return v34;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::transformByInverse  (binary VA: 0x107eb70)
// Original: gameswf::Character::transformByInverse
// ----------------------------------------------------------------------------
void gameswf::Character::transformByInverse(gameswf::Character::Self *self, gameswf::Point::Self *a2)
{
  gameswf::Self *v2;
  gameswf::Character::Self *v3;
  int v4;
  gameswf::Character::Self **v5;
  int v6;
  int v7;
  int v8;
  gameswf::Root::Self *Root;
  int MovieHeight;
  gameswf::Root::Self *v11;
  gameswf::Root::Self *v12;
  int v13;
  gameswf::Root::Self *v14;
  int MovieWidth;
  int v16;
  gameswf::Self **v17;
  int v18;
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  int v23;
  int v24;
  float v25; // xmm2_4
  float v26; // xmm1_4
  typedef gameswf::ASDisplayObjectContainer::Self *_g4_t_v27;
  typedef char *_g4_t_WorldMatrix;
  typedef gameswf::Self **_g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef char _g4_t_v36;
  typedef float _g4_t_v37;
  typedef int _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef char _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef uint32_t _g4_t_v47[16];
  typedef uint32_t _g4_t_v48[16];
  typedef float _g4_t_v49[16];
  typedef gameswf::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint8_t _g4_t_v54[140];
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (12u + sizeof(_g4_t_v27)) > _g4_s0 ? (12u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_WorldMatrix)) > _g4_s1 ? (16u + sizeof(_g4_t_WorldMatrix)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v29)) > _g4_s2 ? (28u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v30)) > _g4_s3 ? (32u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v31)) > _g4_s4 ? (36u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v32)) > _g4_s5 ? (40u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v33)) > _g4_s6 ? (44u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v34)) > _g4_s7 ? (48u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v35)) > _g4_s8 ? (52u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v36)) > _g4_s9 ? (56u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v37)) > _g4_s10 ? (56u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v38)) > _g4_s11 ? (60u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v39)) > _g4_s12 ? (60u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v40)) > _g4_s13 ? (60u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v41)) > _g4_s14 ? (64u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v42)) > _g4_s15 ? (64u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v43)) > _g4_s16 ? (64u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v44)) > _g4_s17 ? (80u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v45)) > _g4_s18 ? (84u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v46)) > _g4_s19 ? (88u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v47)) > _g4_s20 ? (92u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (156u + sizeof(_g4_t_v48)) > _g4_s21 ? (156u + sizeof(_g4_t_v48)) : _g4_s21,
    _g4_s23 = (220u + sizeof(_g4_t_v49)) > _g4_s22 ? (220u + sizeof(_g4_t_v49)) : _g4_s22,
    _g4_s24 = (284u + sizeof(_g4_t_v50)) > _g4_s23 ? (284u + sizeof(_g4_t_v50)) : _g4_s23,
    _g4_s25 = (288u + sizeof(_g4_t_v51)) > _g4_s24 ? (288u + sizeof(_g4_t_v51)) : _g4_s24,
    _g4_s26 = (292u + sizeof(_g4_t_v52)) > _g4_s25 ? (292u + sizeof(_g4_t_v52)) : _g4_s25,
    _g4_s27 = (296u + sizeof(_g4_t_v53)) > _g4_s26 ? (296u + sizeof(_g4_t_v53)) : _g4_s26,
    _g4_s28 = (300u + sizeof(_g4_t_v54)) > _g4_s27 ? (300u + sizeof(_g4_t_v54)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_WorldMatrix &WorldMatrix = *reinterpret_cast<_g4_t_WorldMatrix *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 80u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 84u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 88u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 92u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 156u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 220u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 284u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 288u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 292u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 296u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 300u);

  if ( self != nullptr )
  {
    v2 = (gameswf::Self *)v54;
    v51 = 0;
    v50 = (gameswf::Self *)v54;
    v52 = 32;
    v53 = 1;
    v3 = self;
    v38 = 32;
    v4 = 0;
    v41 = 0;
    while ( 1 )
    {
      v6 = *((uint32_t *)v3 + 19);
      v36 = 0;
      if ( v6 != 0 )
        v36 = *(uint8_t *)(v6 + 96);
      v7 = v4 + 1;
      v41 |= v36;
      if ( v4 + 1 > v38 && v53 == 0 )
      {
        v8 = v7 + (v7 >> 1);
        v52 = v8;
        if ( v8 != 0 )
        {
          if ( v2 != nullptr )
            v2 = (gameswf::Self *)gameswf::realloc_internal(v2, 4 * v8, 4 * v38);
          else
            v2 = (gameswf::Self *)gameswf::malloc_internal(4 * v8);
          v50 = v2;
          v4 = v51;
        }
        else
        {
          if ( v2 != nullptr )
          {
            gameswf::free_internal(v2);
            v4 = v51;
          }
          v50 = nullptr;
          v2 = nullptr;
        }
      }
      v5 = (gameswf::Character::Self **)((char *)v2 + 4 * v4);
      if ( v5 != nullptr )
        *v5 = v3;
      v51 = v7;
      gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)v3 + 52));
      v3 = *((gameswf::Character::Self **)v3 + 14);
      if ( v3 == nullptr )
        break;
      v4 = v51;
      v38 = v52;
      v2 = v50;
    }
    if ( v41 != 0 )
    {
      v35 = *(float *)(gameswf::ASObject::getRoot(self) + 60);
      v42 = *((float *)a2 + 1);
      Root = (gameswf::Root::Self *)gameswf::ASObject::getRoot(self);
      MovieHeight = gameswf::Root::getMovieHeight(Root);
      v39 = *(float *)a2;
      v43 = v42 - (float)(MovieHeight / 2);
      v11 = (gameswf::Root::Self *)gameswf::ASObject::getRoot(self);
      memset(v47, 0, sizeof(v47));
      memset(v48, 0, sizeof(v48));
      v47[15] = 1065353216;
      v40 = v39 - (float)(gameswf::Root::getMovieWidth(v11) / 2);
      v47[10] = 1065353216;
      v47[5] = 1065353216;
      v47[0] = 1065353216;
      v48[15] = 1065353216;
      v48[10] = 1065353216;
      v48[5] = 1065353216;
      v48[0] = 1065353216;
      v12 = (gameswf::Root::Self *)gameswf::ASObject::getRoot(self);
      v13 = gameswf::Root::getMovieHeight(v12);
      v14 = (gameswf::Root::Self *)gameswf::ASObject::getRoot(self);
      MovieWidth = gameswf::Root::getMovieWidth(v14);
      gameswf::Transform::postTranslate((gameswf::Transform::Self *)v48, (float)(MovieWidth / -2), (float)(v13 / -2), 0.0);
      v16 = v51 - 1;
      if ( v51 - 1 >= 0 )
      {
        v17 = &v50;
        v18 = 4 * v16;
        do
        {
          --v16;
          v29 = v17;
          v27 = *(gameswf::ASDisplayObjectContainer::Self **)((char *)*v17 + v18);
          v18 -= 4;
          gameswf::ASDisplayObjectContainer::getTransform(v27, (gameswf::Transform::Self *)v47);
          gameswf::Transform::postMultiply((gameswf::Transform::Self *)v48, (const gameswf::Transform::Self *)v47);
          v17 = v29;
        }
        while ( v16 != -1 );
      }
      v44 = *(float *)&v48[2];
      v45 = *(float *)&v48[6];
      v37 = *(float *)&v48[3];
      v46 = *(float *)&v48[10];
      v31 = *(float *)&v48[7];
      v30 = *(float *)&v48[11];
      gameswf::vector3df::normalize((gameswf::vector3df::Self *)&v44);
      v19 = (float)((float)(v40 * v44) + (float)(v43 * v45)) + (float)(v35 * v46);
      if ( v19 != 0.0 )
      {
        v20 = (float)((float)((float)((float)(v44 * v37) + (float)(v46 * v30)) + (float)(v45 * v31)) + (float)(v35 * v46))
            / v19;
        v32 = v43 * v20;
        v33 = v40 * v20;
        v34 = (float)(v20 * v35) - v35;
      }
      std::memcpy(v49, v48, sizeof(v49));
      gameswf::Transform::invert((gameswf::Transform::Self *)v49);
      v21 = (float)(v33 * v49[0]) + (float)(v32 * v49[1]);
      v22 = v34 * v49[2];
      *((float *)a2 + 1) = (float)((float)((float)(v33 * v49[4]) + (float)(v32 * v49[5])) + v49[7])
                         + (float)(v34 * v49[6]);
      *(float *)a2 = (float)(v21 + v49[3]) + v22;
    }
    else
    {
      WorldMatrix = gameswf::Character::getWorldMatrix(self);
      memset(v49, 0, 0x18u);
      v49[0] = 1.0;
      v49[4] = 1.0;
      gameswf::Matrix::setInverse((gameswf::Matrix::Self *)v49, (const gameswf::Matrix::Self *)WorldMatrix);
      v25 = *((float *)a2 + 1);
      v26 = (float)((float)(*(float *)a2 * v49[0]) + (float)(v25 * v49[1])) + v49[2];
      *((float *)a2 + 1) = (float)((float)(v49[3] * *(float *)a2) + (float)(v49[4] * v25)) + v49[5];
      *(float *)a2 = v26;
    }
    v23 = v51;
    if ( v51 < 0 )
    {
      v24 = 4 * v51;
      do
      {
        if ( (gameswf::Self *)((char *)v50 + v24) != nullptr )
          *(uint32_t *)((char *)v50 + v24) = 0;
        v24 += 4;
        ++v23;
      }
      while ( v23 != 0 );
    }
    v51 = 0;
    if ( v53 == 0 )
    {
      v52 = 0;
      if ( v50 != nullptr )
        gameswf::free_internal(v50);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getStandardMember  (binary VA: 0x107f290)
// Original: gameswf::Character::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::Character::getStandardMember(long double a1, gameswf::ASObject::Self *a2, int a3, gameswf::ASValue::Self *a4)
{
  gameswf::ASObject::Self *v4;
  gameswf::ASValue::Self *v5;
  int result;
  gameswf::ASObject::Self *Global;
  gameswf::ASObject::Self *v8;
  gameswf::ASObject::Self *v9;
  int v10;
  gameswf::SceneNode::Self *v11;
  gameswf::ASObject::Self *v12;
  int v13;
  gameswf::SceneNode::Self *v14;
  float v15; // xmm0_4
  int v16;
  gameswf::ASObject::Self *v17;
  gameswf::ASObject::Self *Stage;
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float *v22;
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  typedef float _g4_t_Rotation;
  typedef float _g4_t_v27;
  typedef gameswf::String::Self *_g4_t_v28;
  typedef gameswf::String::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32[4];
  typedef float _g4_t_v33;
  typedef float _g4_t_v34;
  typedef uint8_t _g4_t_v35[8];
  typedef gameswf::Self *_g4_t_v36;
  typedef char _g4_t_v37;
  typedef gameswf::ASObject::Self **_g4_t_v38;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_Rotation)) > _g4_s0 ? (0u + sizeof(_g4_t_Rotation)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v27)) > _g4_s1 ? (0u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v28)) > _g4_s2 ? (4u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v29)) > _g4_s3 ? (4u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v30)) > _g4_s4 ? (28u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v31)) > _g4_s5 ? (32u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v32)) > _g4_s6 ? (36u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v33)) > _g4_s7 ? (40u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v34)) > _g4_s8 ? (44u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v35)) > _g4_s9 ? (48u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v36)) > _g4_s10 ? (60u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (67u + sizeof(_g4_t_v37)) > _g4_s11 ? (67u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v38)) > _g4_s12 ? (88u + sizeof(_g4_t_v38)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_Rotation &Rotation = *reinterpret_cast<_g4_t_Rotation *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 67u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);

  v38 = &a2;
  v4 = a2;
  v5 = a4;
  switch ( a3 )
  {
    case 0:
      gameswf::ASValue::setDouble(a4, *(float *)(*((uint32_t *)a2 + 17) + 8));
      return 1;
    case 1:
      gameswf::ASValue::setDouble(a4, *(float *)(*((uint32_t *)a2 + 17) + 20));
      return 1;
    case 2:
      v22 = *((float **)a2 + 17);
      v23 = v22[1];
      v24 = fsqrt((float)(v23 * v23) + (float)(*v22 * *v22));
      if ( (float)((float)(*v22 * v22[4]) - (float)(v23 * v22[3])) < 0.0 )
        v24 = -v24;
      v25 = 100.0;
      if ( *(uint8_t *)(*((uint32_t *)a2 + 4) + 232) != 0 )
        v25 = 1.0;
      gameswf::ASValue::setDouble(a4, (float)(v24 * v25));
      return 1;
    case 3:
      v20 = 100.0;
      v21 = fsqrt(
              (float)(*(float *)(*((uint32_t *)a2 + 17) + 12) * *(float *)(*((uint32_t *)a2 + 17) + 12))
            + (float)(*(float *)(*((uint32_t *)a2 + 17) + 16) * *(float *)(*((uint32_t *)a2 + 17) + 16)));
      if ( *(uint8_t *)(*((uint32_t *)a2 + 4) + 232) != 0 )
        v20 = 1.0;
      gameswf::ASValue::setDouble(a4, (float)(v20 * v21));
      return 1;
    case 6:
      v19 = 100.0;
      if ( *(uint8_t *)(*((uint32_t *)a2 + 4) + 232) != 0 )
        v19 = 1.0;
      v15 = v19 * *(float *)(*((uint32_t *)a2 + 16) + 24);
      goto LABEL_28;
    case 7:
      gameswf::ASValue::setBool(a4, *((uint8_t *)a2 + 148));
      return 1;
    case 8:
      a1 = ((long double (*)(gameswf::ASObject::Self *))*(uint32_t *)(*(uint32_t *)a2 + 292))(a2);
      goto LABEL_52;
    case 9:
      G4_VCALL<void>(a2, 288);
LABEL_52:
      v27 = a1;
      gameswf::ASValue::setDouble(v5, (double)(int)v27);
      return 1;
    case 10:
      Rotation = gameswf::Matrix::getRotation((gameswf::Matrix::Self *)*((uint32_t *)a2 + 17));
      v15 = Rotation * 57.295776f;
LABEL_28:
      gameswf::ASValue::setDouble(v5, v15);
      return 1;
    case 11:
      gameswf::Character::getTarget((gameswf::Character::Self *)v35, (int)(uintptr_t)(a2));
      gameswf::ASValue::setString(v5, (const gameswf::String::Self *)v35);
      result = 1;
      if ( v35[0] == 0xFF && (v37 & 1) != 0 )
      {
        gameswf::free_internal(v36);
        return 1;
      }
      return result;
    case 13:
      gameswf::ASValue::setString(a4, *((const gameswf::String::Self **)a2 + 15));
      return 1;
    case 14:
      gameswf::ASValue::setString(a4, "/_root");
      return 1;
    case 15:
      gameswf::ASValue::setString(a4, "gameswf");
      return 1;
    case 16:
      gameswf::ASValue::setBool(a4, true);
      return 1;
    case 17:
      gameswf::ASValue::setBool(a4, false);
      return 1;
    case 18:
      gameswf::ASValue::setDouble(a4, 0.0);
      return 1;
    case 19:
      G4_VCALL<void>(a2, 120, &v30, &v31, v32);
      v12 = v4;
      while ( 1 )
      {
        v13 = *((uint32_t *)v12 + 19);
        if ( v13 != 0 )
        {
          v14 = *(gameswf::SceneNode::Self **)(v13 + 140);
          if ( v14 != nullptr )
            break;
        }
        v29 = (gameswf::String::Self *)(v12);
        gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::ASObject::Self *)((char *)v12 + 52));
        v12 = *((gameswf::ASObject::Self **)v29 + 14);
        if ( v12 == nullptr )
          goto LABEL_26;
      }
      gameswf::SceneNode::getWorldMouse(v14, &v30, &v31);
LABEL_26:
      v33 = (float)v30;
      v34 = (float)v31;
      gameswf::Character::transformByInverse((gameswf::Character::Self *)(v4), (gameswf::Point::Self *)&v33);
      gameswf::ASValue::setDouble(v5, v33);
      return 1;
    case 20:
      G4_VCALL<void>(a2, 120, &v30, &v31, v32);
      v9 = v4;
      break;
    case 21:
    case 37:
      gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::ASObject::Self *)((char *)a2 + 52));
      v4 = *((gameswf::ASObject::Self **)v4 + 14);
      if ( v4 != nullptr
        && G4_VCALL<uint8_t>(v4, 8, 0) == 0 )
      {
        v4 = nullptr;
      }
    case 33:
    case 36:
      gameswf::ASValue::setObject(v5, v4);
      return 1;
    case 35:
    case 38:
      v8 = (gameswf::ASObject::Self *)G4_VCALL<int>(a2, 308);
      gameswf::ASValue::setObject(v5, v8);
      return 1;
    case 39:
      Global = (gameswf::ASObject::Self *)gameswf::ASObject::getGlobal(a2);
      gameswf::ASValue::setObject(v5, Global);
      return 1;
    case 40:
      Stage = (gameswf::ASObject::Self *)gameswf::Player::getStage(*((gameswf::Player::Self **)a2 + 4));
      gameswf::ASValue::setObject(v5, Stage);
      return 1;
    case 61:
      gameswf::ASValue::setBool(a4, *((uint8_t *)a2 + 149));
      return 1;
    case 94:
      v16 = *((uint32_t *)a2 + 19);
      v17 = nullptr;
      if ( v16 != 0 )
        v17 = *(gameswf::ASObject::Self **)(v16 + 144);
      gameswf::ASValue::setObject(a4, v17);
      return 1;
    case 95:
      gameswf::ASValue::setBool(a4, *((uint8_t *)a2 + 156));
      return 1;
    default:
      return 0;
  }
  while ( 1 )
  {
    v10 = *((uint32_t *)v9 + 19);
    if ( v10 != 0 )
    {
      v11 = *(gameswf::SceneNode::Self **)(v10 + 140);
      if ( v11 != nullptr )
        break;
    }
    v28 = (gameswf::String::Self *)(v9);
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::ASObject::Self *)((char *)v9 + 52));
    v9 = *((gameswf::ASObject::Self **)v28 + 14);
    if ( v9 == nullptr )
      goto LABEL_21;
  }
  gameswf::SceneNode::getWorldMouse(v11, &v30, &v31);
LABEL_21:
  gameswf::Character::getWorldMatrix(v4);
  v33 = (float)v30;
  v34 = (float)v31;
  gameswf::Character::transformByInverse(v4, (gameswf::Point::Self *)&v33);
  gameswf::ASValue::setDouble(v5, v34);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::setStandardMember  (binary VA: 0x107f890)
// Original: gameswf::Character::setStandardMember
// ----------------------------------------------------------------------------
int gameswf::Character::setStandardMember(long double a1, __m128 a2, gameswf::Character::Self *a3, int a4, char **a5)
{
  gameswf::ASValue::Self *v5;
  int result;
  float v7; // xmm1_4
  int v8;
  float v9; // xmm2_4
  float v10; // xmm0_4
  int v11;
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  int v15;
  float v16; // xmm0_4
  float v17; // xmm1_4
  uint32_t v18; // xmm0_4
  char v19;
  int v20;
  uint32_t v21; // xmm0_4
  float v22; // xmm1_4
  int v23;
  float v24; // xmm5_4
  int v25;
  float v26; // xmm4_4
  float v27; // xmm0_4
  char *v28;
  int v29;
  int v30;
  gameswf::RefCounted::Self *v31;
  int v32;
  int v33;
  uint32_t v34; // xmm0_4
  int v35;
  float v36; // xmm4_4
  gameswf::RefCounted::Self *v37;
  bool v38;
  gameswf::RefCounted::Self *v39;
  int v40;
  gameswf::String::Self *v41;
  int v42;
  gameswf::Self *v43;
  char v44;
  int v45;
  int v46;
  int v47;
  uint16_t *v48;
  uint16_t *v49;
  int v50;
  int v51;
  uint16_t *v52;
  uint16_t *v53;
  int v54;
  int v55;
  uint16_t *v56;
  uint16_t *v57;
  int v58;
  int v59;
  uint16_t *v60;
  uint16_t *v61;
  int v62;
  typedef float _g4_t_Rotation;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef char *_g4_t_v69;
  typedef unsigned int _g4_t_v70;
  typedef unsigned int _g4_t_v71;
  typedef float _g4_t_v72;
  typedef float _g4_t_v73;
  typedef char _g4_t_v74;
  typedef unsigned int _g4_t_v75;
  typedef unsigned int _g4_t_v76;
  typedef unsigned int _g4_t_v77;
  typedef float _g4_t_v78;
  typedef int _g4_t_v79;
  typedef gameswf::RefCounted::Self *_g4_t_v80;
  typedef float _g4_t_v81;
  typedef int _g4_t_v82;
  typedef unsigned int _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef uint32_t _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef uint32_t _g4_t_v89;
  typedef uint32_t _g4_t_v90;
  typedef int _g4_t_v91;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_Rotation)) > _g4_s0 ? (12u + sizeof(_g4_t_Rotation)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v64)) > _g4_s1 ? (12u + sizeof(_g4_t_v64)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v65)) > _g4_s2 ? (24u + sizeof(_g4_t_v65)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v66)) > _g4_s3 ? (24u + sizeof(_g4_t_v66)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v67)) > _g4_s4 ? (28u + sizeof(_g4_t_v67)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v68)) > _g4_s5 ? (28u + sizeof(_g4_t_v68)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v69)) > _g4_s6 ? (28u + sizeof(_g4_t_v69)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v70)) > _g4_s7 ? (32u + sizeof(_g4_t_v70)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v71)) > _g4_s8 ? (32u + sizeof(_g4_t_v71)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v72)) > _g4_s9 ? (48u + sizeof(_g4_t_v72)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v73)) > _g4_s10 ? (48u + sizeof(_g4_t_v73)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v74)) > _g4_s11 ? (64u + sizeof(_g4_t_v74)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v75)) > _g4_s12 ? (80u + sizeof(_g4_t_v75)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v76)) > _g4_s13 ? (80u + sizeof(_g4_t_v76)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v77)) > _g4_s14 ? (80u + sizeof(_g4_t_v77)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v78)) > _g4_s15 ? (88u + sizeof(_g4_t_v78)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v79)) > _g4_s16 ? (88u + sizeof(_g4_t_v79)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v80)) > _g4_s17 ? (88u + sizeof(_g4_t_v80)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v81)) > _g4_s18 ? (88u + sizeof(_g4_t_v81)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v82)) > _g4_s19 ? (88u + sizeof(_g4_t_v82)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v83)) > _g4_s20 ? (88u + sizeof(_g4_t_v83)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v84)) > _g4_s21 ? (96u + sizeof(_g4_t_v84)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v85)) > _g4_s22 ? (100u + sizeof(_g4_t_v85)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v86)) > _g4_s23 ? (104u + sizeof(_g4_t_v86)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v87)) > _g4_s24 ? (108u + sizeof(_g4_t_v87)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v88)) > _g4_s25 ? (112u + sizeof(_g4_t_v88)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v89)) > _g4_s26 ? (116u + sizeof(_g4_t_v89)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v90)) > _g4_s27 ? (120u + sizeof(_g4_t_v90)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v91)) > _g4_s28 ? (124u + sizeof(_g4_t_v91)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_Rotation &Rotation = *reinterpret_cast<_g4_t_Rotation *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 32u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 48u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 48u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 64u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 80u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 80u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 80u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 88u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 88u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 88u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 88u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 88u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 88u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 96u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 100u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 104u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 108u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 112u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 116u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 120u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 124u);

  v5 = (gameswf::ASValue::Self *)a5;
  switch ( a4 )
  {
    case 0:
      v20 = *((uint32_t *)a3 + 17);
      v84 = *(float *)v20;
      v85 = *(float *)(v20 + 4);
      v86 = *(uint32_t *)(v20 + 8);
      v87 = *(float *)(v20 + 12);
      v88 = *(float *)(v20 + 16);
      v89 = *(uint32_t *)(v20 + 20);
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
g4_m128_lane<float>(a2, 0) = a1;
      if (g4_m128_lane<float>(a2, 0) < -3.4028235e38f )
        v21 = 0;
      else
        v21 =g4_m128_lane<int32_t>(a2, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a2, *(__m128 *)&dword_1C7B5E0), 0);
      v86 = v21;
      goto LABEL_28;
    case 1:
      v33 = *((uint32_t *)a3 + 17);
      v84 = *(float *)v33;
      v85 = *(float *)(v33 + 4);
      v86 = *(uint32_t *)(v33 + 8);
      v87 = *(float *)(v33 + 12);
      v88 = *(float *)(v33 + 16);
      v89 = *(uint32_t *)(v33 + 20);
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
g4_m128_lane<float>(a2, 0) = a1;
      if (g4_m128_lane<float>(a2, 0) < -3.4028235e38f )
        v34 = 0;
      else
        v34 =g4_m128_lane<int32_t>(a2, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a2, *(__m128 *)&dword_1C7B5E0), 0);
      v89 = v34;
      goto LABEL_28;
    case 2:
      v8 = *((uint32_t *)a3 + 17);
      v84 = *(float *)v8;
      v85 = *(float *)(v8 + 4);
      v86 = *(uint32_t *)(v8 + 8);
      v87 = *(float *)(v8 + 12);
      v88 = *(float *)(v8 + 16);
      v89 = *(uint32_t *)(v8 + 20);
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
      v10 = 100.0;
      if ( *(uint8_t *)(*((uint32_t *)a3 + 4) + 232) != 0 )
        v10 = 1.0;
      v9 = a1;
      v70 = fsqrt((float)(v87 * v87) + (float)(v88 * v88));
      Rotation = gameswf::Matrix::getRotation((gameswf::Matrix::Self *)&v84);
      gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)&v84, COERCE_UNSIGNED_INT(v9 / v10), v70, Rotation);
      goto LABEL_28;
    case 3:
      v11 = *((uint32_t *)a3 + 17);
      v84 = *(float *)v11;
      v85 = *(float *)(v11 + 4);
      v86 = *(uint32_t *)(v11 + 8);
      v87 = *(float *)(v11 + 12);
      v88 = *(float *)(v11 + 16);
      v89 = *(uint32_t *)(v11 + 20);
      v12 = fsqrt((float)(v85 * v85) + (float)(v84 * v84));
      v78 = v12;
      if ( (float)((float)(v84 * v88) - (float)(v85 * v87)) < 0.0 )
        v78 = -v12;
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
      v14 = 100.0;
      if ( *(uint8_t *)(*((uint32_t *)a3 + 4) + 232) != 0 )
        v14 = 1.0;
      v13 = a1;
      v64 = gameswf::Matrix::getRotation((gameswf::Matrix::Self *)&v84);
      gameswf::Matrix::setScaleRotation((gameswf::Matrix::Self *)&v84, LODWORD(v78), COERCE_UNSIGNED_INT(v13 / v14), v64);
      goto LABEL_28;
    case 6:
      v15 = *((uint32_t *)a3 + 16);
      v84 = *(float *)v15;
      v85 = *(float *)(v15 + 4);
      v86 = *(uint32_t *)(v15 + 8);
      v87 = *(float *)(v15 + 12);
      v88 = *(float *)(v15 + 16);
      v89 = *(uint32_t *)(v15 + 20);
      v90 = *(uint32_t *)(v15 + 24);
      v91 = *(uint32_t *)(v15 + 28);
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
      v17 = 100.0;
      if ( *(uint8_t *)(*((uint32_t *)a3 + 4) + 232) != 0 )
        v17 = 1.0;
      v16 = a1;
g4_m128_lane<float>(a2, 0) = v16 / v17;
      if (g4_m128_lane<float>(a2, 0) < -3.4028235e38f )
        v18 = 0;
      else
        v18 =g4_m128_lane<int32_t>(a2, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(a2, *(__m128 *)&dword_1C7B5E0), 0);
      v90 = v18;
      gameswf::Character::setCxForm(a3, (const gameswf::CxForm::Self *)&v84);
      return 1;
    case 7:
      v19 = gameswf::ASValue::toBool((gameswf::ASValue::Self *)a5);
      if ( v19 != *((uint8_t *)a3 + 148) )
      {
        v74 = v19;
        gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)a3 + 52));
        v19 = v74;
        if ( *((uint32_t *)a3 + 14) != 0 )
        {
          gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)a3 + 52));
          gameswf::Character::invalidateBitmapCache(*((gameswf::Character::Self **)a3 + 14));
          v19 = v74;
        }
      }
      *((uint8_t *)a3 + 148) = v19;
      return 1;
    case 8:
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
      v22 = a1;
      if ( v22 <= 0.0 )
        goto LABEL_6;
      v23 = *((uint32_t *)a3 + 17);
      v84 = *(float *)v23;
      v85 = *(float *)(v23 + 4);
      v86 = *(uint32_t *)(v23 + 8);
      v87 = *(float *)(v23 + 12);
      v88 = *(float *)(v23 + 16);
      v89 = *(uint32_t *)(v23 + 20);
      v24 = fsqrt((float)(v85 * v85) + (float)(v84 * v84));
      if ( (float)((float)(v84 * v88) - (float)(v85 * v87)) < 0.0 )
        v24 = -v24;
      v71 = fsqrt((float)(v87 * v87) + (float)(v88 * v88));
      v72 = gameswf::Matrix::getRotation((gameswf::Matrix::Self *)&v84);
      v65 = ((long double (*)(gameswf::Character::Self *))*(uint32_t *)(*(uint32_t *)a3 + 292))(a3);
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
      gameswf::Matrix::setScaleRotation(
        (gameswf::Matrix::Self *)&v84,
        COERCE_UNSIGNED_INT(v65 * (float)(v24 / v65)),
        v71,
        v72);
      goto LABEL_28;
    case 9:
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
      v7 = a1;
      if ( v7 <= 0.0 )
        goto LABEL_6;
      v35 = *((uint32_t *)a3 + 17);
      v84 = *(float *)v35;
      v85 = *(float *)(v35 + 4);
      v86 = *(uint32_t *)(v35 + 8);
      v87 = *(float *)(v35 + 12);
      v88 = *(float *)(v35 + 16);
      v89 = *(uint32_t *)(v35 + 20);
      v36 = fsqrt((float)(v85 * v85) + (float)(v84 * v84));
      if ( (float)((float)(v84 * v88) - (float)(v85 * v87)) < 0.0 )
        v36 = -v36;
      v81 = fsqrt((float)(v87 * v87) + (float)(v88 * v88));
      v73 = gameswf::Matrix::getRotation((gameswf::Matrix::Self *)&v84);
      v66 = ((long double (*)(gameswf::Character::Self *))*(uint32_t *)(*(uint32_t *)a3 + 288))(a3);
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
      gameswf::Matrix::setScaleRotation(
        (gameswf::Matrix::Self *)&v84,
        LODWORD(v36),
        COERCE_UNSIGNED_INT(v66 * (float)(v81 / v66)),
        v73);
LABEL_28:
      gameswf::Character::setMatrix(a3, (const gameswf::Matrix::Self *)&v84);
      result = 1;
      break;
    case 10:
      v25 = *((uint32_t *)a3 + 17);
      v84 = *(float *)v25;
      v85 = *(float *)(v25 + 4);
      v86 = *(uint32_t *)(v25 + 8);
      v87 = *(float *)(v25 + 12);
      v88 = *(float *)(v25 + 16);
      v89 = *(uint32_t *)(v25 + 20);
      v26 = fsqrt((float)(v85 * v85) + (float)(v84 * v84));
      if ( (float)((float)(v84 * v88) - (float)(v85 * v87)) < 0.0 )
        v26 = -v26;
      gameswf::ASValue::toNumber((gameswf::ASValue::Self *)a5);
      v27 = a1;
      gameswf::Matrix::setScaleRotation(
        (gameswf::Matrix::Self *)&v84,
        LODWORD(v26),
        COERCE_UNSIGNED_INT(fsqrt((float)(v87 * v87) + (float)(v88 * v88))),
        v27 * 0.017453294f);
      goto LABEL_28;
    case 13:
      if ( *(uint8_t *)a5 == 3 || *(uint8_t *)a5 == 4 )
      {
        v28 = a5[1];
      }
      else
      {
        v28 = (char *)(&byte_20D6378);
        if ( byte_20D6370 == 0 )
        {
          v45 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
          v28 = (char *)(&byte_20D6378);
          if ( v45 != 0 )
          {
            byte_20D6378 = 1;
            v46 = dword_20D6388 | 0x7FFFFF;
            byte_20D6379 = 0;
            dword_20D6388 = v46;
            BYTE2(dword_20D6388) = BYTE2(v46) & 0x7F;
            HIBYTE(dword_20D6388) = HIBYTE(v46) | 1;
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
            __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
            v28 = (char *)(&byte_20D6378);
          }
        }
      }
      if ( v28[18] >= 0 )
      {
        v40 = *((uint32_t *)a3 + 19);
        v82 = v40;
        if ( v40 == 0 )
        {
          v69 = v28;
          v59 = opNew(0x94u);
          *(uint32_t *)v59 = 1065353216;
          v60 = (uint16_t *)(v59 + 32);
          *(uint32_t *)(v59 + 8) = 1065353216;
          *(uint32_t *)(v59 + 16) = 1065353216;
          *(uint32_t *)(v59 + 24) = 1065353216;
          *(uint32_t *)(v59 + 4) = 0;
          *(uint32_t *)(v59 + 12) = 0;
          *(uint32_t *)(v59 + 20) = 0;
          *(uint32_t *)(v59 + 28) = 0;
          v82 = v59;
          v77 = 24;
          v28 = v69;
          if ( ((v59 + 32) & 1) != 0 )
          {
            *(uint8_t *)(v59 + 32) = 0;
            v60 = (uint16_t *)(v59 + 33);
            v77 = 23;
          }
          if ( ((uint8_t)(uintptr_t)(v60) & 2) != 0 )
          {
            *v60++ = 0;
            v77 -= 2;
          }
          memset(v60, 0, 4 * (v77 >> 2));
          v61 = &v60[2 * (v77 >> 2)];
          if ( (v77 & 2) != 0 )
            *v61++ = 0;
          if ( (v77 & 1) != 0 )
            *(uint8_t *)v61 = 0;
          *(uint32_t *)(v59 + 32) = 1065353216;
          *(uint32_t *)(v59 + 48) = 1065353216;
          *(uint32_t *)(v59 + 56) = 0;
          *(uint32_t *)(v59 + 60) = 0;
          *(uint32_t *)(v59 + 64) = 0;
          *(uint32_t *)(v59 + 68) = 0;
          *(uint32_t *)(v59 + 72) = 0;
          *(uint8_t *)(v59 + 76) = 1;
          *(uint8_t *)(v59 + 77) = 0;
          v62 = *(uint32_t *)(v59 + 92) | 0x7FFFFF;
          *(uint32_t *)(v82 + 92) = v62;
          *(uint8_t *)(v82 + 94) = BYTE2(v62) & 0x7F;
          *(uint16_t *)(v82 + 95) = HIBYTE(v62) | 1;
          *(uint8_t *)(v82 + 97) = 0;
          *(uint8_t *)(v82 + 98) = 0;
          *(uint32_t *)(v82 + 100) = 0;
          *(uint32_t *)(v82 + 104) = 1065353216;
          *(uint32_t *)(v82 + 108) = 0;
          *(uint32_t *)(v82 + 112) = 1065353216;
          *(uint32_t *)(v82 + 116) = 0;
          *(uint32_t *)(v82 + 120) = 0;
          *(uint32_t *)(v82 + 124) = 0;
          *(uint32_t *)(v82 + 128) = 0;
          *(uint32_t *)(v82 + 132) = 0;
          *(uint32_t *)(v82 + 136) = 0;
          *(uint32_t *)(v82 + 140) = 0;
          *(uint32_t *)(v82 + 144) = 0;
          v40 = v82;
          *((uint32_t *)a3 + 19) = v82;
        }
        v41 = (gameswf::String::Self *)(v40 + 76);
        if ( v28 != (char *)v41 )
        {
          if ( *v28 == -1 )
            v42 = *((uint32_t *)v28 + 1) - 1;
          else
            v42 = *v28 - 1;
          v68 = (uint32_t *)(v28);
          gameswf::String::resize(v41, v42);
          v43 = (gameswf::Self *)((char *)v68 + 1);
          if ( *(uint8_t *)v68 == 0xFF )
            v43 = (gameswf::Self *)v68[3];
          v44 = *(uint8_t *)(v82 + 76);
          if ( v44 == -1 )
            gameswf::Strcpy_s(*(gameswf::Self **)(v82 + 88), *(char **)(v82 + 80), v43);
          else
            gameswf::Strcpy_s((gameswf::Self *)(v82 + 77), (char *)v44, v43);
          *(uint32_t *)(v82 + 92) = gameswf::String::getHash((gameswf::String::Self *)v68) & 0x7FFFFF
                                | *(uint32_t *)(v82 + 92) & 0xFF800000;
          v41 = (gameswf::String::Self *)(*((uint32_t *)a3 + 19) + 76);
        }
        *((uint32_t *)a3 + 15) = (uint32_t)(uintptr_t)(v41);
        return 1;
      }
      else
      {
        *((uint32_t *)a3 + 15) = (uint32_t)(uintptr_t)(v28);
        return 1;
      }
    case 16:
    case 17:
    case 18:
LABEL_6:
      result = 1;
      break;
    case 61:
      *((uint8_t *)a3 + 149) = gameswf::ASValue::toBool((gameswf::ASValue::Self *)a5);
      result = 1;
      break;
    case 94:
      v79 = *((uint32_t *)a3 + 19);
      if ( v79 == 0 )
      {
        v55 = opNew(0x94u);
        *(uint32_t *)v55 = 1065353216;
        v56 = (uint16_t *)(v55 + 32);
        *(uint32_t *)(v55 + 8) = 1065353216;
        *(uint32_t *)(v55 + 16) = 1065353216;
        *(uint32_t *)(v55 + 24) = 1065353216;
        *(uint32_t *)(v55 + 4) = 0;
        *(uint32_t *)(v55 + 12) = 0;
        *(uint32_t *)(v55 + 20) = 0;
        *(uint32_t *)(v55 + 28) = 0;
        v79 = v55;
        v76 = 24;
        v5 = (gameswf::ASValue::Self *)a5;
        if ( ((v55 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v55 + 32) = 0;
          v56 = (uint16_t *)(v55 + 33);
          v76 = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v56) & 2) != 0 )
        {
          *v56++ = 0;
          v76 -= 2;
        }
        memset(v56, 0, 4 * (v76 >> 2));
        v57 = &v56[2 * (v76 >> 2)];
        if ( (v76 & 2) != 0 )
          *v57++ = 0;
        if ( (v76 & 1) != 0 )
          *(uint8_t *)v57 = 0;
        *(uint32_t *)(v55 + 32) = 1065353216;
        *(uint32_t *)(v55 + 48) = 1065353216;
        *(uint32_t *)(v55 + 56) = 0;
        *(uint32_t *)(v55 + 60) = 0;
        *(uint32_t *)(v55 + 64) = 0;
        *(uint32_t *)(v55 + 68) = 0;
        *(uint32_t *)(v55 + 72) = 0;
        *(uint8_t *)(v55 + 76) = 1;
        *(uint8_t *)(v55 + 77) = 0;
        v58 = *(uint32_t *)(v55 + 92) | 0x7FFFFF;
        *(uint32_t *)(v79 + 92) = v58;
        *(uint8_t *)(v79 + 94) = BYTE2(v58) & 0x7F;
        *(uint16_t *)(v79 + 95) = HIBYTE(v58) | 1;
        *(uint8_t *)(v79 + 97) = 0;
        *(uint8_t *)(v79 + 98) = 0;
        *(uint32_t *)(v79 + 100) = 0;
        *(uint32_t *)(v79 + 104) = 1065353216;
        *(uint32_t *)(v79 + 108) = 0;
        *(uint32_t *)(v79 + 112) = 1065353216;
        *(uint32_t *)(v79 + 116) = 0;
        *(uint32_t *)(v79 + 120) = 0;
        *(uint32_t *)(v79 + 124) = 0;
        *(uint32_t *)(v79 + 128) = 0;
        *(uint32_t *)(v79 + 132) = 0;
        *(uint32_t *)(v79 + 136) = 0;
        *(uint32_t *)(v79 + 140) = 0;
        *(uint32_t *)(v79 + 144) = 0;
        *((uint32_t *)a3 + 19) = v79;
      }
      v29 = *(uint32_t *)(v79 + 144);
      if ( v29 != 0 )
        *(uint8_t *)(v29 + 151) = 0;
      v80 = nullptr;
      if ( *(uint8_t *)v5 == 5 )
      {
        v37 = *((gameswf::RefCounted::Self **)v5 + 1);
        v80 = v37;
        if ( v37 != nullptr )
        {
          v38 = G4_VCALL<uint8_t>(v37, 8, 1) == 0;
          v39 = nullptr;
          if ( !v38 )
            v39 = v80;
          v80 = v39;
        }
      }
      v30 = *((uint32_t *)a3 + 19);
      if ( v30 == 0 )
      {
        v47 = opNew(0x94u);
        v48 = (uint16_t *)(v47 + 32);
        v30 = v47;
        *(uint32_t *)v47 = 1065353216;
        *(uint32_t *)(v47 + 8) = 1065353216;
        *(uint32_t *)(v47 + 16) = 1065353216;
        *(uint32_t *)(v47 + 24) = 1065353216;
        *(uint32_t *)(v47 + 4) = 0;
        *(uint32_t *)(v47 + 12) = 0;
        *(uint32_t *)(v47 + 20) = 0;
        *(uint32_t *)(v47 + 28) = 0;
        v75 = 24;
        if ( ((v47 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v47 + 32) = 0;
          v48 = (uint16_t *)(v47 + 33);
          v75 = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v48) & 2) != 0 )
        {
          *v48++ = 0;
          v75 -= 2;
        }
        memset(v48, 0, 4 * (v75 >> 2));
        v49 = &v48[2 * (v75 >> 2)];
        if ( (v75 & 2) != 0 )
          *v49++ = 0;
        if ( (v75 & 1) != 0 )
          *(uint8_t *)v49 = 0;
        v50 = *(uint32_t *)(v47 + 92);
        *(uint32_t *)(v30 + 32) = 1065353216;
        v50 |= 0x7FFFFFu;
        *(uint32_t *)(v30 + 48) = 1065353216;
        *(uint32_t *)(v30 + 92) = v50;
        *(uint32_t *)(v30 + 56) = 0;
        *(uint32_t *)(v30 + 60) = 0;
        *(uint32_t *)(v30 + 64) = 0;
        *(uint32_t *)(v30 + 68) = 0;
        *(uint32_t *)(v30 + 72) = 0;
        *(uint8_t *)(v30 + 76) = 1;
        *(uint8_t *)(v30 + 77) = 0;
        *(uint8_t *)(v30 + 94) = BYTE2(v50) & 0x7F;
        *(uint16_t *)(v30 + 95) = HIBYTE(v50) | 1;
        *(uint8_t *)(v30 + 97) = 0;
        *(uint8_t *)(v30 + 98) = 0;
        *(uint32_t *)(v30 + 100) = 0;
        *(uint32_t *)(v30 + 104) = 1065353216;
        *(uint32_t *)(v30 + 108) = 0;
        *(uint32_t *)(v30 + 112) = 1065353216;
        *(uint32_t *)(v30 + 116) = 0;
        *(uint32_t *)(v30 + 120) = 0;
        *(uint32_t *)(v30 + 124) = 0;
        *(uint32_t *)(v30 + 128) = 0;
        *(uint32_t *)(v30 + 132) = 0;
        *(uint32_t *)(v30 + 136) = 0;
        *(uint32_t *)(v30 + 140) = 0;
        *(uint32_t *)(v30 + 144) = 0;
        *((uint32_t *)a3 + 19) = v30;
      }
      v31 = *(gameswf::RefCounted::Self **)(v30 + 144);
      if ( v80 != v31 )
      {
        if ( v31 != nullptr )
        {
          v67 = v30;
          gameswf::RefCounted::dropRef(v31);
          v30 = v67;
        }
        *(uint32_t *)(v30 + 144) = (uint32_t)(uintptr_t)(v80);
        if ( v80 != nullptr )
          gameswf::RefCounted::addRef(v80);
        v30 = *((uint32_t *)a3 + 19);
      }
      if ( v30 == 0 )
      {
        v51 = opNew(0x94u);
        v52 = (uint16_t *)(v51 + 32);
        v30 = v51;
        *(uint32_t *)v51 = 1065353216;
        *(uint32_t *)(v51 + 8) = 1065353216;
        *(uint32_t *)(v51 + 16) = 1065353216;
        *(uint32_t *)(v51 + 24) = 1065353216;
        *(uint32_t *)(v51 + 4) = 0;
        *(uint32_t *)(v51 + 12) = 0;
        *(uint32_t *)(v51 + 20) = 0;
        *(uint32_t *)(v51 + 28) = 0;
        v83 = 24;
        if ( ((v51 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v51 + 32) = 0;
          v52 = (uint16_t *)(v51 + 33);
          v83 = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v52) & 2) != 0 )
        {
          *v52++ = 0;
          v83 -= 2;
        }
        memset(v52, 0, 4 * (v83 >> 2));
        v53 = &v52[2 * (v83 >> 2)];
        if ( (v83 & 2) != 0 )
          *v53++ = 0;
        if ( (v83 & 1) != 0 )
          *(uint8_t *)v53 = 0;
        v54 = *(uint32_t *)(v51 + 92);
        *(uint32_t *)(v30 + 32) = 1065353216;
        v54 |= 0x7FFFFFu;
        *(uint32_t *)(v30 + 48) = 1065353216;
        *(uint32_t *)(v30 + 92) = v54;
        *(uint32_t *)(v30 + 56) = 0;
        *(uint32_t *)(v30 + 60) = 0;
        *(uint32_t *)(v30 + 64) = 0;
        *(uint32_t *)(v30 + 68) = 0;
        *(uint32_t *)(v30 + 72) = 0;
        *(uint8_t *)(v30 + 76) = 1;
        *(uint8_t *)(v30 + 77) = 0;
        *(uint8_t *)(v30 + 94) = BYTE2(v54) & 0x7F;
        *(uint16_t *)(v30 + 95) = HIBYTE(v54) | 1;
        *(uint8_t *)(v30 + 97) = 0;
        *(uint8_t *)(v30 + 98) = 0;
        *(uint32_t *)(v30 + 100) = 0;
        *(uint32_t *)(v30 + 104) = 1065353216;
        *(uint32_t *)(v30 + 108) = 0;
        *(uint32_t *)(v30 + 112) = 1065353216;
        *(uint32_t *)(v30 + 116) = 0;
        *(uint32_t *)(v30 + 120) = 0;
        *(uint32_t *)(v30 + 124) = 0;
        *(uint32_t *)(v30 + 128) = 0;
        *(uint32_t *)(v30 + 132) = 0;
        *(uint32_t *)(v30 + 136) = 0;
        *(uint32_t *)(v30 + 140) = 0;
        *(uint32_t *)(v30 + 144) = 0;
        *((uint32_t *)a3 + 19) = v30;
      }
      v32 = *(uint32_t *)(v30 + 144);
      result = 1;
      if ( v32 != 0 )
        *(uint8_t *)(v32 + 151) = 1;
      break;
    case 95:
      *((uint8_t *)a3 + 156) = gameswf::ASValue::toBool((gameswf::ASValue::Self *)a5);
      *((uint8_t *)a3 + 145) = 1;
      *((uint8_t *)a3 + 146) = 1;
      gameswf::Character::invalidateBitmapCache(a3);
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::updateBitmapCache  (binary VA: 0x1080950)
// Original: gameswf::Character::updateBitmapCache
// ----------------------------------------------------------------------------
void gameswf::Character::updateBitmapCache(long double a1, gameswf::Character::Self *self, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, gameswf::RenderHandler::Self **a14)
{
  uint32_t *v14;
  bool v15;
  int *v16;
  int *v17;
  int v18;
  int v19;
  gameswf::Self *v20;
  gameswf::Root::Self *Root;
  int v22;
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  int v26;
  float v27; // xmm2_4
  gameswf::BitmapInfo::Self *v28;
  char *v29;
  gameswf::Self *v30;
  gameswf::RefCounted::Self *v31;
  gameswf::RefCounted::Self *v32;
  int v33;
  int32_t v34;
  gameswf::Root::Self *v35;
  int MovieWidth;
  gameswf::Root::Self *v37;
  float MovieHeight; // xmm1_4
  __m128 v39;
  __m128 v40;
  float v41; // xmm3_4
  uint32_t v42; // xmm0_4
  float *WeakProxy;
  gameswf::Self *v44;
  int v45;
  int v46;
  int v47;
  gameswf::RenderHandler::Self *v48;
  uint32_t *v49;
  __m128 v50;
  __m128 v51;
  float v52; // xmm6_4
  __m128 v53;
  float v54; // xmm0_4
  __m128 v55;
  float v56; // xmm5_4
  float v57; // xmm3_4
  __m128 v58;
  __m128 v59;
  float v60; // xmm4_4
  float v61; // xmm3_4
  float v62; // xmm3_4
  float v63; // xmm2_4
  float v64; // xmm0_4
  float v65;
  gameswf::Self *v66;
  int v67;
  uint16_t *v68;
  uint16_t *v69;
  int v70;
  int v71;
  uint16_t *v72;
  uint16_t *v73;
  int v74;
  typedef int64_t _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef float *_g4_t_v91;
  typedef unsigned int _g4_t_v92;
  typedef gameswf::weak_ptr<gameswf::Character::Self> *_g4_t_v93;
  typedef int _g4_t_v94;
  typedef unsigned int _g4_t_v95[6];
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef unsigned int _g4_t_v110[6];
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef char *_g4_t_v117;
  typedef int _g4_t_v118;
  typedef gameswf::Self *_g4_t_v119;
  typedef int _g4_t_v120;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v75)) > _g4_s0 ? (0u + sizeof(_g4_t_v75)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v76)) > _g4_s1 ? (4u + sizeof(_g4_t_v76)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v77)) > _g4_s2 ? (4u + sizeof(_g4_t_v77)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v78)) > _g4_s3 ? (8u + sizeof(_g4_t_v78)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v79)) > _g4_s4 ? (12u + sizeof(_g4_t_v79)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v80)) > _g4_s5 ? (16u + sizeof(_g4_t_v80)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v81)) > _g4_s6 ? (20u + sizeof(_g4_t_v81)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v82)) > _g4_s7 ? (24u + sizeof(_g4_t_v82)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v83)) > _g4_s8 ? (28u + sizeof(_g4_t_v83)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v84)) > _g4_s9 ? (32u + sizeof(_g4_t_v84)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v85)) > _g4_s10 ? (36u + sizeof(_g4_t_v85)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v86)) > _g4_s11 ? (40u + sizeof(_g4_t_v86)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v87)) > _g4_s12 ? (44u + sizeof(_g4_t_v87)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v88)) > _g4_s13 ? (52u + sizeof(_g4_t_v88)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v89)) > _g4_s14 ? (56u + sizeof(_g4_t_v89)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v90)) > _g4_s15 ? (60u + sizeof(_g4_t_v90)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v91)) > _g4_s16 ? (64u + sizeof(_g4_t_v91)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v92)) > _g4_s17 ? (72u + sizeof(_g4_t_v92)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v93)) > _g4_s18 ? (76u + sizeof(_g4_t_v93)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v94)) > _g4_s19 ? (76u + sizeof(_g4_t_v94)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v95)) > _g4_s20 ? (80u + sizeof(_g4_t_v95)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v96)) > _g4_s21 ? (104u + sizeof(_g4_t_v96)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v97)) > _g4_s22 ? (108u + sizeof(_g4_t_v97)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v98)) > _g4_s23 ? (112u + sizeof(_g4_t_v98)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v99)) > _g4_s24 ? (116u + sizeof(_g4_t_v99)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v100)) > _g4_s25 ? (120u + sizeof(_g4_t_v100)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v101)) > _g4_s26 ? (124u + sizeof(_g4_t_v101)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v102)) > _g4_s27 ? (128u + sizeof(_g4_t_v102)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v103)) > _g4_s28 ? (132u + sizeof(_g4_t_v103)) : _g4_s28,
    _g4_s30 = (136u + sizeof(_g4_t_v104)) > _g4_s29 ? (136u + sizeof(_g4_t_v104)) : _g4_s29,
    _g4_s31 = (140u + sizeof(_g4_t_v105)) > _g4_s30 ? (140u + sizeof(_g4_t_v105)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v106)) > _g4_s31 ? (144u + sizeof(_g4_t_v106)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v107)) > _g4_s32 ? (148u + sizeof(_g4_t_v107)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v108)) > _g4_s33 ? (152u + sizeof(_g4_t_v108)) : _g4_s33,
    _g4_s35 = (156u + sizeof(_g4_t_v109)) > _g4_s34 ? (156u + sizeof(_g4_t_v109)) : _g4_s34,
    _g4_s36 = (160u + sizeof(_g4_t_v110)) > _g4_s35 ? (160u + sizeof(_g4_t_v110)) : _g4_s35,
    _g4_s37 = (184u + sizeof(_g4_t_v111)) > _g4_s36 ? (184u + sizeof(_g4_t_v111)) : _g4_s36,
    _g4_s38 = (188u + sizeof(_g4_t_v112)) > _g4_s37 ? (188u + sizeof(_g4_t_v112)) : _g4_s37,
    _g4_s39 = (192u + sizeof(_g4_t_v113)) > _g4_s38 ? (192u + sizeof(_g4_t_v113)) : _g4_s38,
    _g4_s40 = (196u + sizeof(_g4_t_v114)) > _g4_s39 ? (196u + sizeof(_g4_t_v114)) : _g4_s39,
    _g4_s41 = (200u + sizeof(_g4_t_v115)) > _g4_s40 ? (200u + sizeof(_g4_t_v115)) : _g4_s40,
    _g4_s42 = (204u + sizeof(_g4_t_v116)) > _g4_s41 ? (204u + sizeof(_g4_t_v116)) : _g4_s41,
    _g4_s43 = (208u + sizeof(_g4_t_v117)) > _g4_s42 ? (208u + sizeof(_g4_t_v117)) : _g4_s42,
    _g4_s44 = (212u + sizeof(_g4_t_v118)) > _g4_s43 ? (212u + sizeof(_g4_t_v118)) : _g4_s43,
    _g4_s45 = (216u + sizeof(_g4_t_v119)) > _g4_s44 ? (216u + sizeof(_g4_t_v119)) : _g4_s44,
    _g4_s46 = (220u + sizeof(_g4_t_v120)) > _g4_s45 ? (220u + sizeof(_g4_t_v120)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 0u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 4u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 4u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 8u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 12u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 16u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 20u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 24u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 28u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 32u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 36u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 40u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 44u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 52u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 56u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 60u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 64u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 72u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 76u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 76u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 80u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 104u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 108u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 112u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 116u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 120u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 124u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 128u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 132u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 136u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 140u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 144u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 148u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 152u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 156u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 160u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 184u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 188u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 192u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 196u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 200u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 204u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 208u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 212u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 216u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 220u);

  if ( *((uint8_t *)self + 145) != 0 )
  {
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)self + 52));
    v49 = (uint32_t *)(gameswf::Matrix::identity);
    if ( *((uint32_t *)self + 14) != 0 )
    {
      gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)self + 52));
      v49 = (uint32_t *)(*((uint32_t *)self + 14) + 112);
    }
    *((uint32_t *)self + 28) = *v49;
    *((uint32_t *)self + 29) = v49[1];
    *((uint32_t *)self + 30) = v49[2];
    *((uint32_t *)self + 31) = v49[3];
    *((uint32_t *)self + 32) = v49[4];
    v94 = *((uint32_t *)self + 17);
    *((uint32_t *)self + 33) = v49[5];
    memset(v110, 0, sizeof(v110));
    v110[0] = 1065353216;
    v110[4] = 1065353216;
g4_m128_raw(v50) = *(unsigned int *)(v94 + 12);
g4_m128_raw(v51) = *((unsigned int *)self + 28);
    v53 = v50;
    v52 = *((float *)self + 29);
g4_m128_lane<float>(v53, 0) = (float)(g4_m128_lane<float>(v50, 0) * v52) + (float)(*(float *)v94 *g4_m128_lane<float>(v51, 0));
    if (g4_m128_lane<float>(v53, 0) >= -3.4028235e38f )
      LODWORD(v54) =g4_m128_lane<int32_t>(v53, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v53, *(__m128 *)&dword_1C7B5E0), 0);
    else
      v54 = 0.0;
    *(float *)v110 = v54;
g4_m128_raw(v55) = *((unsigned int *)self + 31);
    v56 = *((float *)self + 32);
g4_m128_lane<float>(v50, 0) = (float)(g4_m128_lane<float>(v50, 0) * v56) + (float)(*((float *)self + 31) * *(float *)v94);
    if (g4_m128_lane<float>(v50, 0) < -3.4028235e38f )
      v57 = 0.0;
    else
      LODWORD(v57) =g4_m128_lane<int32_t>(v50, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v50, *(__m128 *)&dword_1C7B5E0), 0);
    *(float *)&v110[3] = v57;
g4_m128_raw(v58) = *(unsigned int *)(v94 + 16);
    v59 = v58;
g4_m128_lane<float>(v59, 0) = (float)(g4_m128_lane<float>(v58, 0) * v52) + (float)(*(float *)(v94 + 4) *g4_m128_lane<float>(v51, 0));
    if (g4_m128_lane<float>(v59, 0) < -3.4028235e38f )
      v60 = 0.0;
    else
      LODWORD(v60) =g4_m128_lane<int32_t>(v59, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v59, *(__m128 *)&dword_1C7B5E0), 0);
    *(float *)&v110[1] = v60;
g4_m128_lane<float>(v58, 0) = (float)(g4_m128_lane<float>(v58, 0) * v56) + (float)(g4_m128_lane<float>(v55, 0) * *(float *)(v94 + 4));
    if (g4_m128_lane<float>(v58, 0) < -3.4028235e38f )
      v61 = 0.0;
    else
      LODWORD(v61) =g4_m128_lane<int32_t>(v58, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v58, *(__m128 *)&dword_1C7B5E0), 0);
    *(float *)&v110[4] = v61;
    v62 = *(float *)(v94 + 20);
g4_m128_lane<float>(v51, 0) = (float)((float)(g4_m128_lane<float>(v51, 0) * *(float *)(v94 + 8)) + (float)(v52 * v62))
                    + *((float *)self + 30);
    if (g4_m128_lane<float>(v51, 0) < -3.4028235e38f )
      v63 = 0.0;
    else
      LODWORD(v63) =g4_m128_lane<int32_t>(v51, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v51, *(__m128 *)&dword_1C7B5E0), 0);
    *(float *)&v110[2] = v63;
g4_m128_lane<float>(v55, 0) = (float)((float)(g4_m128_lane<float>(v55, 0) * *(float *)(v94 + 8)) + (float)(v56 * v62))
                    + *((float *)self + 33);
    if (g4_m128_lane<float>(v55, 0) < -3.4028235e38f )
      v64 = 0.0;
    else
      LODWORD(v64) =g4_m128_lane<int32_t>(v55, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v55, *(__m128 *)&dword_1C7B5E0), 0);
    v65 = *(float *)v110;
    *((uint8_t *)self + 145) = 0;
    *((float *)self + 28) = v65;
    *((uint32_t *)self + 29) = v110[1];
    *((uint32_t *)self + 30) = v110[2];
    *((uint32_t *)self + 31) = v110[3];
    *(float *)&v110[5] = v64;
    *((uint32_t *)self + 32) = v110[4];
    *((uint32_t *)self + 33) = v110[5];
  }
  if ( *((uint8_t *)self + 146) == 0 )
  {
    if ( *((uint8_t *)self + 157) == 0 )
      return;
    goto LABEL_8;
  }
  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)self + 52));
  v14 = (uint32_t *)(gameswf::CxForm::identity);
  if ( *((uint32_t *)self + 14) != 0 )
  {
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)self + 52));
    v14 = (uint32_t *)(*((uint32_t *)self + 14) + 80);
  }
  *((uint32_t *)self + 20) = *v14;
  *((uint32_t *)self + 21) = v14[1];
  *((uint32_t *)self + 22) = v14[2];
  *((uint32_t *)self + 23) = v14[3];
  *((uint32_t *)self + 24) = v14[4];
  *((uint32_t *)self + 25) = v14[5];
  *((uint32_t *)self + 26) = v14[6];
  *((uint32_t *)self + 27) = v14[7];
  HIDWORD(v75) = *((uint32_t *)self + 16);
  LODWORD(v75) = (uint32_t)(uintptr_t)((char *)self + 80);
  gameswf::CxForm::concatenate(v75);
  v15 = *((uint8_t *)self + 157) == 0;
  *((uint8_t *)self + 146) = 0;
  if ( !v15 )
  {
LABEL_8:
    v93 = (gameswf::weak_ptr<gameswf::Character::Self> *)((gameswf::Character::Self *)((char *)self + 52));
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Character::Self *)((char *)self + 52));
    v92 = *((uint32_t *)self + 14);
    v16 = *((int **)self + 17);
    v96 = *v16;
    v97 = v16[1];
    v98 = v16[2];
    v99 = v16[3];
    v100 = v16[4];
    v101 = v16[5];
    v17 = *((int **)self + 16);
    v102 = *v17;
    v103 = v17[1];
    v104 = v17[2];
    v105 = v17[3];
    v106 = v17[4];
    v107 = v17[5];
    v18 = v17[6];
    v19 = v17[7];
    v108 = v18;
    v109 = v19;
    v20 = *((gameswf::Self **)self + 13);
    *((uint32_t *)self + 14) = 0;
    if ( v20 != nullptr )
    {
      v15 = (*(uint16_t *)v20)-- == 1;
      if ( v15 )
        gameswf::free_internal(v20);
      *((uint32_t *)self + 13) = 0;
      v16 = *((int **)self + 17);
    }
    if ( v16 != (int *)(uintptr_t)(gameswf::Matrix::identity) )
    {
      *((uint32_t *)self + 17) = (uint32_t)(uintptr_t)(gameswf::Matrix::identity);
      *((uint8_t *)self + 145) = 1;
      *((uint8_t *)self + 147) = 1;
      gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(v93);
      if ( *((uint32_t *)self + 14) != 0 )
      {
        gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(v93);
        gameswf::Character::invalidateBitmapCache(*((gameswf::Character::Self **)self + 14));
      }
    }
    gameswf::Character::getProjectedBound((gameswf::ASDisplayObjectContainer::Self **)self, (gameswf::Rect::Self *)v95);
    Root = (gameswf::Root::Self *)gameswf::ASObject::getRoot(self);
    gameswf::Root::getPixelScale(Root);
    v83 = a1;
    v22 = 1;
    v23 = 1.0;
    v24 = 1.0;
    v25 = (float)(*(float *)&v95[1] - *(float *)v95) * v83;
    if ( v25 > 1.0 )
    {
      do
      {
        v22 *= 2;
        v24 = (float)v22;
      }
      while ( v25 > (float)v22 );
    }
    v26 = 1;
    v27 = (float)(*(float *)&v95[3] - *(float *)&v95[2]) * v83;
    if ( v27 > 1.0 )
    {
      do
      {
        v26 *= 2;
        v23 = (float)v26;
      }
      while ( v27 > (float)v26 );
    }
    v28 = *((gameswf::BitmapInfo::Self **)self + 40);
    if ( v28 != nullptr && *((uint32_t *)v28 + 4) == v22 && *((uint32_t *)v28 + 5) == v26 )
    {
LABEL_34:
      *((uint32_t *)self + 41) = v95[0];
      *((uint32_t *)self + 42) = v95[1];
      *((uint32_t *)self + 43) = v95[2];
      *((uint32_t *)self + 44) = v95[3];
      *((uint32_t *)self + 45) = 0;
      *((uint32_t *)self + 46) = 0;
      *((float *)self + 47) = v24;
      *((uint32_t *)self + 48) = 0;
      *((uint32_t *)self + 49) = 0;
      *((float *)self + 51) = v24;
      *((float *)self + 50) = v23;
      *((float *)self + 52) = v23;
      gameswf::RenderHandler::setBitmapCache((gameswf::RenderHandler::Self *)gameswf::s_render_handler, v28);
      if ( (float)(*(float *)&v95[1] - *(float *)v95) > 0.0 )
      {
        v35 = (gameswf::Root::Self *)gameswf::ASObject::getRoot(self);
        MovieWidth = gameswf::Root::getMovieWidth(v35);
        v84 = (float)MovieWidth / (float)(*(float *)&v95[1] - *(float *)v95);
        v37 = (gameswf::Root::Self *)gameswf::ASObject::getRoot(self);
        MovieHeight = (float)(int)gameswf::Root::getMovieHeight(v37);
        memset(v110, 0, sizeof(v110));
        v91 = (float *)v110;
        v110[0] = 1065353216;
        v110[4] = 1065353216;
        gameswf::Matrix::setScaleRotation(
          (gameswf::Matrix::Self *)v110,
          LODWORD(v84),
          COERCE_UNSIGNED_INT(MovieHeight / (float)(*(float *)&v95[3] - *(float *)&v95[2])),
          0.0);
        v39 = _mm_xor_ps(G4_BITCAST<__m128>(v95[0]), g4_m128_from<__m128>(0x80000000));
g4_m128_raw(v40) = v110[0];
g4_m128_lane<float>(v40, 0) = (float)((float)(*(float *)v110 *g4_m128_lane<float>(v39, 0))
                                + (float)(*(float *)&v110[1] * (float)-*(float *)&v95[2]))
                        + *(float *)&v110[2];
        if (g4_m128_lane<float>(v40, 0) < -3.4028235e38f )
          v41 = 0.0;
        else
          LODWORD(v41) =g4_m128_lane<int32_t>(v40, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v40, *(__m128 *)&dword_1C7B5E0), 0);
        *(float *)&v110[2] = v41;
g4_m128_lane<float>(v39, 0) = (float)((float)(g4_m128_lane<float>(v39, 0) * *(float *)&v110[3])
                                + (float)((float)-*(float *)&v95[2] * *(float *)&v110[4]))
                        + *(float *)&v110[5];
        if (g4_m128_lane<float>(v39, 0) < -3.4028235e38f )
          v42 = 0;
        else
          v42 =g4_m128_lane<int32_t>(v39, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v39, *(__m128 *)&dword_1C7B5E0), 0);
        v110[5] = v42;
        gameswf::Character::setMatrix(self, (const gameswf::Matrix::Self *)v110);
        if ( *((uint32_t **)self + 16) != (uint32_t *)(uintptr_t)(gameswf::CxForm::identity) )
        {
          *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(gameswf::CxForm::identity);
          *((uint8_t *)self + 146) = 1;
          gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(v93);
          if ( *((uint32_t *)self + 14) != 0 )
          {
            gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(v93);
            gameswf::Character::invalidateBitmapCache(*((gameswf::Character::Self **)self + 14));
          }
        }
        *((uint8_t *)gameswf::s_render_handler + 52) = 1;
        G4_VCALL<void>(self, 284);
        gameswf::RenderHandler::flush((gameswf::RenderHandler::Self *)gameswf::s_render_handler);
      }
      *((uint32_t *)self + 14) = v92;
      if ( v92 != 0 )
      {
        WeakProxy = (float *)gameswf::RefCounted::getWeakProxy((gameswf::RefCounted::Self *)v92);
        v44 = *((gameswf::Self **)self + 13);
        if ( WeakProxy != (float *)v44 )
        {
          if ( v44 != nullptr )
          {
            v15 = (*(uint16_t *)v44)-- == 1;
            if ( v15 )
            {
              v91 = WeakProxy;
              v77 = 0;
              gameswf::free_internal(v44);
              WeakProxy = v91;
            }
          }
          *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(WeakProxy);
          if ( WeakProxy != nullptr )
            ++*(uint16_t *)WeakProxy;
        }
      }
      else
      {
        v66 = *((gameswf::Self **)self + 13);
        if ( v66 != nullptr )
        {
          v15 = (*(uint16_t *)v66)-- == 1;
          if ( v15 )
          {
            v77 = 0;
            gameswf::free_internal(v66);
          }
          *((uint32_t *)self + 13) = 0;
        }
      }
      v45 = *((uint32_t *)self + 19);
      if ( v45 == 0 )
      {
        v77 = 0;
        v71 = opNew(0x94u);
        v72 = (uint16_t *)(v71 + 32);
        v45 = v71;
        *(uint32_t *)v71 = 1065353216;
        *(uint32_t *)(v71 + 8) = 1065353216;
        *(uint32_t *)(v71 + 16) = 1065353216;
        *(uint32_t *)(v71 + 24) = 1065353216;
        *(uint32_t *)(v71 + 4) = 0;
        *(uint32_t *)(v71 + 12) = 0;
        *(uint32_t *)(v71 + 20) = 0;
        *(uint32_t *)(v71 + 28) = 0;
        v92 = 24;
        if ( ((v71 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v71 + 32) = 0;
          v72 = (uint16_t *)(v71 + 33);
          v92 = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v72) & 2) != 0 )
        {
          *v72++ = 0;
          v92 -= 2;
        }
        memset(v72, 0, 4 * (v92 >> 2));
        v73 = &v72[2 * (v92 >> 2)];
        if ( (v92 & 2) != 0 )
          *v73++ = 0;
        if ( (v92 & 1) != 0 )
          *(uint8_t *)v73 = 0;
        v74 = *(uint32_t *)(v71 + 92);
        *(uint32_t *)(v45 + 32) = 1065353216;
        v74 |= 0x7FFFFFu;
        *(uint32_t *)(v45 + 48) = 1065353216;
        *(uint32_t *)(v45 + 92) = v74;
        *(uint32_t *)(v45 + 56) = 0;
        *(uint32_t *)(v45 + 60) = 0;
        *(uint32_t *)(v45 + 64) = 0;
        *(uint32_t *)(v45 + 68) = 0;
        *(uint32_t *)(v45 + 72) = 0;
        *(uint8_t *)(v45 + 76) = 1;
        *(uint8_t *)(v45 + 77) = 0;
        *(uint8_t *)(v45 + 94) = BYTE2(v74) & 0x7F;
        *(uint16_t *)(v45 + 95) = HIBYTE(v74) | 1;
        *(uint8_t *)(v45 + 97) = 0;
        *(uint8_t *)(v45 + 98) = 0;
        *(uint32_t *)(v45 + 100) = 0;
        *(uint32_t *)(v45 + 104) = 1065353216;
        *(uint32_t *)(v45 + 108) = 0;
        *(uint32_t *)(v45 + 112) = 1065353216;
        *(uint32_t *)(v45 + 116) = 0;
        *(uint32_t *)(v45 + 120) = 0;
        *(uint32_t *)(v45 + 124) = 0;
        *(uint32_t *)(v45 + 128) = 0;
        *(uint32_t *)(v45 + 132) = 0;
        *(uint32_t *)(v45 + 136) = 0;
        *(uint32_t *)(v45 + 140) = 0;
        *(uint32_t *)(v45 + 144) = 0;
        *((uint32_t *)self + 19) = v45;
      }
      *(uint32_t *)(v45 + 32) = v96;
      *(uint32_t *)(v45 + 36) = v97;
      *(uint32_t *)(v45 + 40) = v98;
      *(uint32_t *)(v45 + 44) = v99;
      *(uint32_t *)(v45 + 48) = v100;
      *(uint32_t *)(v45 + 52) = v101;
      v46 = *((uint32_t *)self + 19) + 32;
      *((uint8_t *)self + 145) = 1;
      *((uint32_t *)self + 17) = v46;
      *((uint8_t *)self + 147) = 1;
      gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(v93);
      if ( *((uint32_t *)self + 14) != 0 )
      {
        gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(v93);
        gameswf::Character::invalidateBitmapCache(*((gameswf::Character::Self **)self + 14));
      }
      v47 = *((uint32_t *)self + 19);
      if ( v47 == 0 )
      {
        v77 = 0;
        v67 = opNew(0x94u);
        v68 = (uint16_t *)(v67 + 32);
        v47 = v67;
        *(uint32_t *)v67 = 1065353216;
        *(uint32_t *)(v67 + 8) = 1065353216;
        *(uint32_t *)(v67 + 16) = 1065353216;
        *(uint32_t *)(v67 + 24) = 1065353216;
        *(uint32_t *)(v67 + 4) = 0;
        *(uint32_t *)(v67 + 12) = 0;
        *(uint32_t *)(v67 + 20) = 0;
        *(uint32_t *)(v67 + 28) = 0;
        v92 = 24;
        if ( ((v67 + 32) & 1) != 0 )
        {
          *(uint8_t *)(v67 + 32) = 0;
          v68 = (uint16_t *)(v67 + 33);
          v92 = 23;
        }
        if ( ((uint8_t)(uintptr_t)(v68) & 2) != 0 )
        {
          *v68++ = 0;
          v92 -= 2;
        }
        memset(v68, 0, 4 * (v92 >> 2));
        v69 = &v68[2 * (v92 >> 2)];
        if ( (v92 & 2) != 0 )
          *v69++ = 0;
        if ( (v92 & 1) != 0 )
          *(uint8_t *)v69 = 0;
        v70 = *(uint32_t *)(v67 + 92);
        *(uint32_t *)(v47 + 32) = 1065353216;
        v70 |= 0x7FFFFFu;
        *(uint32_t *)(v47 + 48) = 1065353216;
        *(uint32_t *)(v47 + 92) = v70;
        *(uint32_t *)(v47 + 56) = 0;
        *(uint32_t *)(v47 + 60) = 0;
        *(uint32_t *)(v47 + 64) = 0;
        *(uint32_t *)(v47 + 68) = 0;
        *(uint32_t *)(v47 + 72) = 0;
        *(uint8_t *)(v47 + 76) = 1;
        *(uint8_t *)(v47 + 77) = 0;
        *(uint8_t *)(v47 + 94) = BYTE2(v70) & 0x7F;
        *(uint16_t *)(v47 + 95) = HIBYTE(v70) | 1;
        *(uint8_t *)(v47 + 97) = 0;
        *(uint8_t *)(v47 + 98) = 0;
        *(uint32_t *)(v47 + 100) = 0;
        *(uint32_t *)(v47 + 104) = 1065353216;
        *(uint32_t *)(v47 + 108) = 0;
        *(uint32_t *)(v47 + 112) = 1065353216;
        *(uint32_t *)(v47 + 116) = 0;
        *(uint32_t *)(v47 + 120) = 0;
        *(uint32_t *)(v47 + 124) = 0;
        *(uint32_t *)(v47 + 128) = 0;
        *(uint32_t *)(v47 + 132) = 0;
        *(uint32_t *)(v47 + 136) = 0;
        *(uint32_t *)(v47 + 140) = 0;
        *(uint32_t *)(v47 + 144) = 0;
        *((uint32_t *)self + 19) = v47;
      }
      *(uint32_t *)v47 = v102;
      *(uint32_t *)(v47 + 4) = v103;
      *(uint32_t *)(v47 + 8) = v104;
      *(uint32_t *)(v47 + 12) = v105;
      *(uint32_t *)(v47 + 16) = v106;
      *(uint32_t *)(v47 + 20) = v107;
      *(uint32_t *)(v47 + 24) = v108;
      *(uint32_t *)(v47 + 28) = v109;
      *((uint32_t *)self + 16) = *((uint32_t *)self + 19);
      *((uint8_t *)self + 146) = 1;
      gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(v93);
      if ( *((uint32_t *)self + 14) != 0 )
      {
        gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(v93);
        gameswf::Character::invalidateBitmapCache(*((gameswf::Character::Self **)self + 14));
      }
      G4_VCALL<void>(self, 276, v77, v78, v79, v80, v81, v82, COERCE_FLOAT(LODWORD(v83)), COERCE_FLOAT(LODWORD(v84)), v85, v86, v87, 0, v88, v89, v90, v91, &gameswf::s_render_handler, v92, v93, v95[0], v95[1], v95[2], v95[3], v95[4], v95[5], v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107, v108, v109, v110[0], v110[1], v110[2], v110[3], v110[4], v110[5], v111, v112, v113, v114, v115, v116, v117, v118, v119, v120);
      G4_VCALL<void>(self, 280);
      v48 = *a14;
      *((uint8_t *)v48 + 52) = 0;
      *((uint8_t *)self + 157) = 0;
      gameswf::RenderHandler::setBitmapCache(v48, nullptr);
      return;
    }
    v110[1] = v22;
    v110[3] = v22;
    LOWORD(v120) = -1;
    v110[0] = 6;
    BYTE2(v120) = 127;
    v110[2] = v26;
    v110[5] = 0;
    HIBYTE(v120) |= 1u;
    v111 = 0;
    v84 = v24;
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v115 = 0;
    LOWORD(v116) = 1;
    v110[4] = v26;
    gameswf::String::resize((gameswf::String::Self *)&v116, 11);
    if ( (uint8_t)v116 == 0xFF )
    {
      v29 = v117;
      v30 = v119;
    }
    else
    {
      v29 = (char *)(char)v116;
      v30 = (gameswf::Self *)((char *)&v116 + 1);
    }
    gameswf::Strcpy_s(v30, v29, (gameswf::Self *)"BitmapCache");
    v120 |= 0x7FFFFFu;
    v31 = (gameswf::RefCounted::Self *)(*(int (**)(uint32_t *, unsigned int *))(*gameswf::s_render_handler + 8))(
                                   (uint32_t *)(gameswf::s_render_handler),
                                   v110);
    v32 = *((gameswf::RefCounted::Self **)self + 40);
    if ( v31 != v32 )
    {
      if ( v32 != nullptr )
        gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 40));
      *((uint32_t *)self + 40) = (uint32_t)(uintptr_t)(v31);
      if ( v31 != nullptr )
      {
        v84 = v24;
        gameswf::RefCounted::addRef(v31);
      }
    }
    if ( (uint8_t)v116 == 0xFF && (v120 & 0x1000000) != 0 )
    {
      v76 = v118;
      v84 = v24;
      gameswf::free_internal(v119);
    }
    v33 = v114;
    if ( v114 == 0 )
    {
LABEL_33:
      v28 = *((gameswf::BitmapInfo::Self **)self + 40);
      goto LABEL_34;
    }
    while ( 1 )
    {
      v34 = *(uint32_t *)(v33 + 4);
      _mm_mfence();
      if ( v34 == 2 )
      {
        if ( *(uint16_t *)(v33 + 32) == 0xFFFF )
          goto LABEL_32;
        v84 = v24;
        glitch::video::ITexture::removeFromTextureManager((glitch::video::ITexture::Self *)v33);
      }
      else
      {
        if ( v34 == 1 )
        {
          v84 = v24;
          G4_VCALL<void>(v33, 4, v76);
          v28 = *((gameswf::BitmapInfo::Self **)self + 40);
          goto LABEL_34;
        }
LABEL_32:
        if ( v34 == __sync_val_compare_and_swap((volatile int32_t *)(v33 + 4), v34, v34 - 1) )
          goto LABEL_33;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::Destroy  (binary VA: 0x1081860)
// Original: gameswf::Character::~Character
// ----------------------------------------------------------------------------
void gameswf::Character::Destroy(gameswf::Character::Self *self)
{
  gameswf::RefCounted::Self **v1;
  int v2;
  int v3;
  void *v4;
  gameswf::Self *v5;
  int v6;
  gameswf::Self *v7;
  gameswf::Character::Self *v8;
  gameswf::Self *v9;
  gameswf::Character::Self *v11;
  gameswf::Character::Self *v12;
  gameswf::Self *v13;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E388);
  v1 = *((gameswf::RefCounted::Self ***)self + 19);
  v13 = (gameswf::Self *)v1;
  if ( v1 != nullptr )
  {
    if ( v1[36] != nullptr )
      gameswf::RefCounted::dropRef(v1[36]);
    if ( *((uint8_t *)v13 + 76) == 0xFF && (*((uint8_t *)v13 + 95) & 1) != 0 )
      gameswf::free_internal(*((gameswf::Self **)v13 + 22));
    v2 = *((uint32_t *)v13 + 16);
    if ( v2 < 0 )
    {
      v3 = 96 * v2;
      do
      {
        v4 = (void *)(*((uint32_t *)v13 + 15) + v3);
        if ( v4 != nullptr )
          memset(v4, 0, 0x60u);
        v3 += 96;
        ++v2;
      }
      while ( v2 != 0 );
    }
    v5 = v13;
    v6 = *((uint32_t *)v13 + 18);
    *((uint32_t *)v13 + 16) = 0;
    if ( v6 == 0 )
    {
      v7 = *((gameswf::Self **)v13 + 15);
      *((uint32_t *)v13 + 17) = 0;
      if ( v7 != nullptr )
        gameswf::free_internal(v7);
      v5 = v13;
      *((uint32_t *)v13 + 15) = 0;
    }
    gameswf::free_internal(v5);
  }
  v8 = self;
  if ( *((uint32_t *)self + 40) != 0 )
  {
    gameswf::RefCounted::dropRef(*((gameswf::RefCounted::Self **)self + 40));
    v8 = self;
  }
  v9 = *((gameswf::Self **)v8 + 13);
  if ( v9 != nullptr && (*(uint16_t *)v9)-- == 1 )
    gameswf::free_internal(v9);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091248);
  v11 = (gameswf::Character::Self *)((char *)self + 48);
  do
  {
    v12 = (gameswf::Character::Self *)((char *)v11 - 4);
    gameswf::hash_gameswf_String_gameswf_a_5510e3::clear((gameswf::Character::Self *)((char *)v11 - 4));
    v11 = v12;
  }
  while ( (gameswf::Character::Self *)((char *)self + 40) != v12 );
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::Destroy_ea10819f0  (binary VA: 0x10819f0)
// Original: gameswf::Character::~Character
// ----------------------------------------------------------------------------
void gameswf::Character::Destroy_ea10819f0(gameswf::Character::Self *self)
{
  gameswf::Character::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::is  (binary VA: 0x1081a30)
// Original: gameswf::Character::is
// ----------------------------------------------------------------------------
bool gameswf::Character::is(gameswf::Character::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 1 && a2 != 57 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getTopmostMouseEntity  (binary VA: 0x1081a50)
// Original: gameswf::Character::getTopmostMouseEntity
// ----------------------------------------------------------------------------
int gameswf::Character::getTopmostMouseEntity()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getTopmostMouseEntity  (binary VA: 0x1081a60)
// Original: gameswf::Character::getTopmostMouseEntity
// ----------------------------------------------------------------------------
int gameswf::Character::getTopmostMouseEntity(int a1, int a2, int a3)
{
  return G4_VCALL<int>(a1, 108, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::hitTest  (binary VA: 0x1081a90)
// Original: gameswf::Character::hitTest
// ----------------------------------------------------------------------------
int gameswf::Character::hitTest()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::onGotFocus  (binary VA: 0x1081aa0)
// Original: gameswf::Character::onGotFocus
// ----------------------------------------------------------------------------
void gameswf::Character::onGotFocus()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::onLostFocus  (binary VA: 0x1081ab0)
// Original: gameswf::Character::onLostFocus
// ----------------------------------------------------------------------------
void gameswf::Character::onLostFocus()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::isFocusNeedsPress  (binary VA: 0x1081ac0)
// Original: gameswf::Character::isFocusNeedsPress
// ----------------------------------------------------------------------------
int gameswf::Character::isFocusNeedsPress()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getTrackAsMenu  (binary VA: 0x1081ad0)
// Original: gameswf::Character::getTrackAsMenu
// ----------------------------------------------------------------------------
int gameswf::Character::getTrackAsMenu()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getPixelScale  (binary VA: 0x1081ae0)
// Original: gameswf::Character::getPixelScale
// ----------------------------------------------------------------------------
long double gameswf::Character::getPixelScale()
{
  return 1.0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getCharacter  (binary VA: 0x1081af0)
// Original: gameswf::Character::getCharacter
// ----------------------------------------------------------------------------
int gameswf::Character::getCharacter()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::setPlayState  (binary VA: 0x1081b00)
// Original: gameswf::Character::setPlayState
// ----------------------------------------------------------------------------
void gameswf::Character::setPlayState()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getPlayState  (binary VA: 0x1081b10)
// Original: gameswf::Character::getPlayState
// ----------------------------------------------------------------------------
int gameswf::Character::getPlayState()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::gotoLabeledFrame  (binary VA: 0x1081b20)
// Original: gameswf::Character::gotoLabeledFrame
// ----------------------------------------------------------------------------
int gameswf::Character::gotoLabeledFrame()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::findPreviousReplaceOrAddTag  (binary VA: 0x1081b30)
// Original: gameswf::Character::findPreviousReplaceOrAddTag
// ----------------------------------------------------------------------------
int gameswf::Character::findPreviousReplaceOrAddTag()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::clearDisplayObjects  (binary VA: 0x1081b40)
// Original: gameswf::Character::clearDisplayObjects
// ----------------------------------------------------------------------------
void gameswf::Character::clearDisplayObjects()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::removeDisplayObject  (binary VA: 0x1081b50)
// Original: gameswf::Character::removeDisplayObject
// ----------------------------------------------------------------------------
void gameswf::Character::removeDisplayObject()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::replaceMe  (binary VA: 0x1081b60)
// Original: gameswf::Character::replaceMe
// ----------------------------------------------------------------------------
int gameswf::Character::replaceMe()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::replaceMe_ea1081b70  (binary VA: 0x1081b70)
// Original: gameswf::Character::replaceMe
// ----------------------------------------------------------------------------
int gameswf::Character::replaceMe_ea1081b70()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::addDisplayObject  (binary VA: 0x1081b80)
// Original: gameswf::Character::addDisplayObject
// ----------------------------------------------------------------------------
int gameswf::Character::addDisplayObject()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::moveDisplayObject  (binary VA: 0x1081b90)
// Original: gameswf::Character::moveDisplayObject
// ----------------------------------------------------------------------------
void gameswf::Character::moveDisplayObject()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::replaceDisplayObject  (binary VA: 0x1081ba0)
// Original: gameswf::Character::replaceDisplayObject
// ----------------------------------------------------------------------------
void gameswf::Character::replaceDisplayObject()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::replaceDisplayObject_ea1081bb0  (binary VA: 0x1081bb0)
// Original: gameswf::Character::replaceDisplayObject
// ----------------------------------------------------------------------------
void gameswf::Character::replaceDisplayObject_ea1081bb0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::removeDisplayObject_ea1081bc0  (binary VA: 0x1081bc0)
// Original: gameswf::Character::removeDisplayObject
// ----------------------------------------------------------------------------
void gameswf::Character::removeDisplayObject_ea1081bc0()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::executeFrameTags  (binary VA: 0x1081bd0)
// Original: gameswf::Character::executeFrameTags
// ----------------------------------------------------------------------------
void gameswf::Character::executeFrameTags()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::addActionBuffer  (binary VA: 0x1081be0)
// Original: gameswf::Character::addActionBuffer
// ----------------------------------------------------------------------------
void gameswf::Character::addActionBuffer()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::doActions  (binary VA: 0x1081bf0)
// Original: gameswf::Character::doActions
// ----------------------------------------------------------------------------
void gameswf::Character::doActions()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::cloneDisplayObject  (binary VA: 0x1081c00)
// Original: gameswf::Character::cloneDisplayObject
// ----------------------------------------------------------------------------
int gameswf::Character::cloneDisplayObject()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::removeDisplayObject_ea1081c10  (binary VA: 0x1081c10)
// Original: gameswf::Character::removeDisplayObject
// ----------------------------------------------------------------------------
void gameswf::Character::removeDisplayObject_ea1081c10()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::setDragState  (binary VA: 0x1081c20)
// Original: gameswf::Character::setDragState
// ----------------------------------------------------------------------------
void gameswf::Character::setDragState()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::stopDrag  (binary VA: 0x1081c30)
// Original: gameswf::Character::stopDrag
// ----------------------------------------------------------------------------
void gameswf::Character::stopDrag()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::callFrameActions  (binary VA: 0x1081c40)
// Original: gameswf::Character::callFrameActions
// ----------------------------------------------------------------------------
void gameswf::Character::callFrameActions()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::setBackgroundColor  (binary VA: 0x1081c50)
// Original: gameswf::Character::setBackgroundColor
// ----------------------------------------------------------------------------
void gameswf::Character::setBackgroundColor()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::setBackgroundAlpha  (binary VA: 0x1081c60)
// Original: gameswf::Character::setBackgroundAlpha
// ----------------------------------------------------------------------------
void gameswf::Character::setBackgroundAlpha()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getBackgroundAlpha  (binary VA: 0x1081c70)
// Original: gameswf::Character::getBackgroundAlpha
// ----------------------------------------------------------------------------
long double gameswf::Character::getBackgroundAlpha()
{
  return 1.0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::setDisplayViewport  (binary VA: 0x1081c80)
// Original: gameswf::Character::setDisplayViewport
// ----------------------------------------------------------------------------
void gameswf::Character::setDisplayViewport()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::setDisplayBounds  (binary VA: 0x1081c90)
// Original: gameswf::Character::setDisplayBounds
// ----------------------------------------------------------------------------
void gameswf::Character::setDisplayBounds()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getUserdata  (binary VA: 0x1081ca0)
// Original: gameswf::Character::getUserdata
// ----------------------------------------------------------------------------
int gameswf::Character::getUserdata()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::setUserdata  (binary VA: 0x1081cb0)
// Original: gameswf::Character::setUserdata
// ----------------------------------------------------------------------------
void gameswf::Character::setUserdata()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::attachDisplayCallback  (binary VA: 0x1081cc0)
// Original: gameswf::Character::attachDisplayCallback
// ----------------------------------------------------------------------------
void gameswf::Character::attachDisplayCallback()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::display  (binary VA: 0x1081cd0)
// Original: gameswf::Character::display
// ----------------------------------------------------------------------------
void gameswf::Character::display()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getCharacterDef  (binary VA: 0x1081ce0)
// Original: gameswf::Character::getCharacterDef
// ----------------------------------------------------------------------------
int gameswf::Character::getCharacterDef()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getCurrentFrame  (binary VA: 0x1081cf0)
// Original: gameswf::Character::getCurrentFrame
// ----------------------------------------------------------------------------
int gameswf::Character::getCurrentFrame()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getFrameCount  (binary VA: 0x1081d00)
// Original: gameswf::Character::getFrameCount
// ----------------------------------------------------------------------------
int gameswf::Character::getFrameCount()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getLoadingFrame  (binary VA: 0x1081d10)
// Original: gameswf::Character::getLoadingFrame
// ----------------------------------------------------------------------------
int gameswf::Character::getLoadingFrame()
{
  return -1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::hasLooped  (binary VA: 0x1081d20)
// Original: gameswf::Character::hasLooped
// ----------------------------------------------------------------------------
int gameswf::Character::hasLooped()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::advance  (binary VA: 0x1081d30)
// Original: gameswf::Character::advance
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::Character::advance(gameswf::Character::Self *self)
{
  *((uint8_t *)self + 150) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::gotoFrame  (binary VA: 0x1081d40)
// Original: gameswf::Character::gotoFrame
// ----------------------------------------------------------------------------
int gameswf::Character::gotoFrame()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getAcceptAnimMoves  (binary VA: 0x1081d50)
// Original: gameswf::Character::getAcceptAnimMoves
// ----------------------------------------------------------------------------
int gameswf::Character::getAcceptAnimMoves()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::hasKeypressEvent  (binary VA: 0x1081d60)
// Original: gameswf::Character::hasKeypressEvent
// ----------------------------------------------------------------------------
int gameswf::Character::hasKeypressEvent()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::canHandleMouseEvent  (binary VA: 0x1081d70)
// Original: gameswf::Character::canHandleMouseEvent
// ----------------------------------------------------------------------------
int gameswf::Character::canHandleMouseEvent()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getMovieVersion  (binary VA: 0x1081d80)
// Original: gameswf::Character::getMovieVersion
// ----------------------------------------------------------------------------
int gameswf::Character::getMovieVersion()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getMovieWidth  (binary VA: 0x1081d90)
// Original: gameswf::Character::getMovieWidth
// ----------------------------------------------------------------------------
int gameswf::Character::getMovieWidth()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getMovieHeight  (binary VA: 0x1081da0)
// Original: gameswf::Character::getMovieHeight
// ----------------------------------------------------------------------------
int gameswf::Character::getMovieHeight()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getMovieFPS  (binary VA: 0x1081db0)
// Original: gameswf::Character::getMovieFPS
// ----------------------------------------------------------------------------
long double gameswf::Character::getMovieFPS()
{
  return 0.0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::isEnabled  (binary VA: 0x1081dc0)
// Original: gameswf::Character::isEnabled
// ----------------------------------------------------------------------------
int gameswf::Character::isEnabled()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::setDisplayCallback  (binary VA: 0x1081e10)
// Original: gameswf::Character::setDisplayCallback
// ----------------------------------------------------------------------------
int gameswf::Character::setDisplayCallback(int a1, int a2, int a3)
{
  int v3;
  int v4;
  int v6;
  uint16_t *v7;
  unsigned int v8;
  uint16_t *v9;
  int v10;
  int v11;
  uint16_t *v12;
  unsigned int v13;
  uint16_t *v14;
  int v15;

  v3 = *(uint32_t *)(a1 + 76);
  if ( v3 == 0 )
  {
    v6 = opNew(0x94u);
    v7 = (uint16_t *)(v6 + 32);
    v3 = v6;
    *(uint32_t *)v6 = 1065353216;
    *(uint32_t *)(v6 + 8) = 1065353216;
    *(uint32_t *)(v6 + 16) = 1065353216;
    *(uint32_t *)(v6 + 24) = 1065353216;
    *(uint32_t *)(v6 + 4) = 0;
    *(uint32_t *)(v6 + 12) = 0;
    *(uint32_t *)(v6 + 20) = 0;
    *(uint32_t *)(v6 + 28) = 0;
    v8 = 24;
    if ( ((v6 + 32) & 1) != 0 )
    {
      *(uint8_t *)(v6 + 32) = 0;
      v7 = (uint16_t *)(v6 + 33);
      LOWORD(v8) = 23;
    }
    if ( ((uint8_t)(uintptr_t)(v7) & 2) != 0 )
    {
      *v7 = 0;
      v8 -= 2;
      ++v7;
    }
    memset(v7, 0, 4 * (v8 >> 2));
    v9 = &v7[2 * (v8 >> 2)];
    if ( (v8 & 2) != 0 )
      *v9++ = 0;
    if ( (v8 & 1) != 0 )
      *(uint8_t *)v9 = 0;
    v10 = *(uint32_t *)(v6 + 92);
    *(uint32_t *)(v3 + 32) = 1065353216;
    v10 |= 0x7FFFFFu;
    *(uint32_t *)(v3 + 48) = 1065353216;
    *(uint32_t *)(v3 + 92) = v10;
    *(uint32_t *)(v3 + 56) = 0;
    *(uint32_t *)(v3 + 60) = 0;
    *(uint32_t *)(v3 + 64) = 0;
    *(uint32_t *)(v3 + 68) = 0;
    *(uint32_t *)(v3 + 72) = 0;
    *(uint8_t *)(v3 + 76) = 1;
    *(uint8_t *)(v3 + 77) = 0;
    *(uint8_t *)(v3 + 94) = BYTE2(v10) & 0x7F;
    *(uint16_t *)(v3 + 95) = HIBYTE(v10) | 1;
    *(uint8_t *)(v3 + 97) = 0;
    *(uint8_t *)(v3 + 98) = 0;
    *(uint32_t *)(v3 + 100) = 0;
    *(uint32_t *)(v3 + 104) = 1065353216;
    *(uint32_t *)(v3 + 108) = 0;
    *(uint32_t *)(v3 + 112) = 1065353216;
    *(uint32_t *)(v3 + 116) = 0;
    *(uint32_t *)(v3 + 120) = 0;
    *(uint32_t *)(v3 + 124) = 0;
    *(uint32_t *)(v3 + 128) = 0;
    *(uint32_t *)(v3 + 132) = 0;
    *(uint32_t *)(v3 + 136) = 0;
    *(uint32_t *)(v3 + 140) = 0;
    *(uint32_t *)(v3 + 144) = 0;
    *(uint32_t *)(a1 + 76) = v3;
  }
  *(uint32_t *)(v3 + 132) = a2;
  v4 = *(uint32_t *)(a1 + 76);
  if ( v4 == 0 )
  {
    v11 = opNew(0x94u);
    v12 = (uint16_t *)(v11 + 32);
    v4 = v11;
    *(uint32_t *)v11 = 1065353216;
    *(uint32_t *)(v11 + 8) = 1065353216;
    *(uint32_t *)(v11 + 16) = 1065353216;
    *(uint32_t *)(v11 + 24) = 1065353216;
    *(uint32_t *)(v11 + 4) = 0;
    *(uint32_t *)(v11 + 12) = 0;
    *(uint32_t *)(v11 + 20) = 0;
    *(uint32_t *)(v11 + 28) = 0;
    v13 = 24;
    if ( ((v11 + 32) & 1) != 0 )
    {
      *(uint8_t *)(v11 + 32) = 0;
      v12 = (uint16_t *)(v11 + 33);
      LOWORD(v13) = 23;
    }
    if ( ((uint8_t)(uintptr_t)(v12) & 2) != 0 )
    {
      *v12 = 0;
      v13 -= 2;
      ++v12;
    }
    memset(v12, 0, 4 * (v13 >> 2));
    v14 = &v12[2 * (v13 >> 2)];
    if ( (v13 & 2) != 0 )
      *v14++ = 0;
    if ( (v13 & 1) != 0 )
      *(uint8_t *)v14 = 0;
    v15 = *(uint32_t *)(v11 + 92);
    *(uint32_t *)(v4 + 32) = 1065353216;
    v15 |= 0x7FFFFFu;
    *(uint32_t *)(v4 + 48) = 1065353216;
    *(uint32_t *)(v4 + 92) = v15;
    *(uint32_t *)(v4 + 56) = 0;
    *(uint32_t *)(v4 + 60) = 0;
    *(uint32_t *)(v4 + 64) = 0;
    *(uint32_t *)(v4 + 68) = 0;
    *(uint32_t *)(v4 + 72) = 0;
    *(uint8_t *)(v4 + 76) = 1;
    *(uint8_t *)(v4 + 77) = 0;
    *(uint8_t *)(v4 + 94) = BYTE2(v15) & 0x7F;
    *(uint16_t *)(v4 + 95) = HIBYTE(v15) | 1;
    *(uint8_t *)(v4 + 97) = 0;
    *(uint8_t *)(v4 + 98) = 0;
    *(uint32_t *)(v4 + 100) = 0;
    *(uint32_t *)(v4 + 104) = 1065353216;
    *(uint32_t *)(v4 + 108) = 0;
    *(uint32_t *)(v4 + 112) = 1065353216;
    *(uint32_t *)(v4 + 116) = 0;
    *(uint32_t *)(v4 + 120) = 0;
    *(uint32_t *)(v4 + 124) = 0;
    *(uint32_t *)(v4 + 128) = 0;
    *(uint32_t *)(v4 + 132) = 0;
    *(uint32_t *)(v4 + 136) = 0;
    *(uint32_t *)(v4 + 140) = 0;
    *(uint32_t *)(v4 + 144) = 0;
    *(uint32_t *)(a1 + 76) = v4;
  }
  *(uint32_t *)(v4 + 136) = a3;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::findExportedResource  (binary VA: 0x1082380)
// Original: gameswf::Character::findExportedResource
// ----------------------------------------------------------------------------
int gameswf::Character::findExportedResource(gameswf::Self **self, const gameswf::String::Self *a2)
{
  int v2;
  int result;

  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(self + 13);
  v2 = (int)(uintptr_t)(*(self + 14));
  result = 0;
  if ( v2 != 0 )
    return G4_VCALL<int>(v2, 152, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getMovieDefinition  (binary VA: 0x10823d0)
// Original: gameswf::Character::getMovieDefinition
// ----------------------------------------------------------------------------
int gameswf::Character::getMovieDefinition(gameswf::Self **self)
{
  int v1;
  int result;

  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(self + 13);
  v1 = (int)(uintptr_t)(*(self + 14));
  result = 0;
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 148))((uint32_t)(uintptr_t)(*(self + 14)));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getMouseState  (binary VA: 0x1082420)
// Original: gameswf::Character::getMouseState
// ----------------------------------------------------------------------------
int * gameswf::Character::getMouseState(gameswf::Self **self, int *a2, int *a3, int *a4)
{
  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(self + 13);
  if ( *(self + 14) != nullptr )
  {
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(self + 13);
    return (int *)G4_VCALL<int>(*(self + 14), 120, a2, a3, a4);
  }
  else
  {
    *a4 = 0;
    *a3 = 0;
    *a2 = 0;
    return a4;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getRootMovie  (binary VA: 0x10824c0)
// Original: gameswf::Character::getRootMovie
// ----------------------------------------------------------------------------
int gameswf::Character::getRootMovie(gameswf::Self **self)
{
  int result;

  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(self + 13);
  result = 0;
  if ( *(self + 14) != nullptr )
  {
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy(self + 13);
    return G4_VCALL<int>(*(self + 14), 308);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::getDragState  (binary VA: 0x1082520)
// Original: gameswf::Character::getDragState
// ----------------------------------------------------------------------------
int gameswf::Character::getDragState(int a1, int a2)
{
  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Self **)(a1 + 52));
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(a1 + 56) + 228))(*(uint32_t *)(a1 + 56), a2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::setCxForm  (binary VA: 0x1082570)
// Original: gameswf::Character::setCxForm
// ----------------------------------------------------------------------------
void gameswf::Character::setCxForm(gameswf::Character::Self *self, const gameswf::CxForm::Self *a2)
{
  int v2;
  int v3;
  uint16_t *v4;
  uint16_t *v5;
  int v6;
  unsigned int v7;

  v2 = *((uint32_t *)self + 19);
  if ( v2 == 0 )
  {
    v3 = opNew(0x94u);
    v4 = (uint16_t *)(v3 + 32);
    v2 = v3;
    *(uint32_t *)v3 = 1065353216;
    *(uint32_t *)(v3 + 8) = 1065353216;
    *(uint32_t *)(v3 + 16) = 1065353216;
    *(uint32_t *)(v3 + 24) = 1065353216;
    *(uint32_t *)(v3 + 4) = 0;
    *(uint32_t *)(v3 + 12) = 0;
    *(uint32_t *)(v3 + 20) = 0;
    *(uint32_t *)(v3 + 28) = 0;
    v7 = 24;
    if ( ((v3 + 32) & 1) != 0 )
    {
      *(uint8_t *)(v3 + 32) = 0;
      v4 = (uint16_t *)(v3 + 33);
      v7 = 23;
    }
    if ( ((uint8_t)(uintptr_t)(v4) & 2) != 0 )
    {
      *v4++ = 0;
      v7 -= 2;
    }
    memset(v4, 0, 4 * (v7 >> 2));
    v5 = &v4[2 * (v7 >> 2)];
    if ( (v7 & 2) != 0 )
      *v5++ = 0;
    if ( (v7 & 1) != 0 )
      *(uint8_t *)v5 = 0;
    v6 = *(uint32_t *)(v3 + 92);
    *(uint32_t *)(v2 + 32) = 1065353216;
    v6 |= 0x7FFFFFu;
    *(uint32_t *)(v2 + 48) = 1065353216;
    *(uint32_t *)(v2 + 92) = v6;
    *(uint32_t *)(v2 + 56) = 0;
    *(uint32_t *)(v2 + 60) = 0;
    *(uint32_t *)(v2 + 64) = 0;
    *(uint32_t *)(v2 + 68) = 0;
    *(uint32_t *)(v2 + 72) = 0;
    *(uint8_t *)(v2 + 76) = 1;
    *(uint8_t *)(v2 + 77) = 0;
    *(uint8_t *)(v2 + 94) = BYTE2(v6) & 0x7F;
    *(uint16_t *)(v2 + 95) = HIBYTE(v6) | 1;
    *(uint8_t *)(v2 + 97) = 0;
    *(uint8_t *)(v2 + 98) = 0;
    *(uint32_t *)(v2 + 100) = 0;
    *(uint32_t *)(v2 + 104) = 1065353216;
    *(uint32_t *)(v2 + 108) = 0;
    *(uint32_t *)(v2 + 112) = 1065353216;
    *(uint32_t *)(v2 + 116) = 0;
    *(uint32_t *)(v2 + 120) = 0;
    *(uint32_t *)(v2 + 124) = 0;
    *(uint32_t *)(v2 + 128) = 0;
    *(uint32_t *)(v2 + 132) = 0;
    *(uint32_t *)(v2 + 136) = 0;
    *(uint32_t *)(v2 + 140) = 0;
    *(uint32_t *)(v2 + 144) = 0;
    *((uint32_t *)self + 19) = v2;
  }
  *(uint32_t *)v2 = *(uint32_t *)a2;
  *(uint32_t *)(v2 + 4) = *((uint32_t *)a2 + 1);
  *(uint32_t *)(v2 + 8) = *((uint32_t *)a2 + 2);
  *(uint32_t *)(v2 + 12) = *((uint32_t *)a2 + 3);
  *(uint32_t *)(v2 + 16) = *((uint32_t *)a2 + 4);
  *(uint32_t *)(v2 + 20) = *((uint32_t *)a2 + 5);
  *(uint32_t *)(v2 + 24) = *((uint32_t *)a2 + 6);
  *(uint32_t *)(v2 + 28) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 16) = *((uint32_t *)self + 19);
  *((uint8_t *)self + 146) = 1;
  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Self **)self + 13);
  if ( *((uint32_t *)self + 14) != 0 )
  {
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Self **)self + 13);
    gameswf::Character::invalidateBitmapCache(*((gameswf::Character::Self **)self + 14));
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::setMatrix  (binary VA: 0x10827b0)
// Original: gameswf::Character::setMatrix
// ----------------------------------------------------------------------------
int gameswf::Character::setMatrix(gameswf::Character::Self *self, const gameswf::Matrix::Self *a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  uint16_t *v6;
  uint16_t *v7;
  int v8;
  unsigned int v9;

  v2 = *((uint32_t *)self + 19);
  if ( v2 == 0 )
  {
    v5 = opNew(0x94u);
    v6 = (uint16_t *)(v5 + 32);
    v2 = v5;
    *(uint32_t *)v5 = 1065353216;
    *(uint32_t *)(v5 + 8) = 1065353216;
    *(uint32_t *)(v5 + 16) = 1065353216;
    *(uint32_t *)(v5 + 24) = 1065353216;
    *(uint32_t *)(v5 + 4) = 0;
    *(uint32_t *)(v5 + 12) = 0;
    *(uint32_t *)(v5 + 20) = 0;
    *(uint32_t *)(v5 + 28) = 0;
    v9 = 24;
    if ( ((v5 + 32) & 1) != 0 )
    {
      *(uint8_t *)(v5 + 32) = 0;
      v6 = (uint16_t *)(v5 + 33);
      v9 = 23;
    }
    if ( ((uint8_t)(uintptr_t)(v6) & 2) != 0 )
    {
      *v6++ = 0;
      v9 -= 2;
    }
    memset(v6, 0, 4 * (v9 >> 2));
    v7 = &v6[2 * (v9 >> 2)];
    if ( (v9 & 2) != 0 )
      *v7++ = 0;
    if ( (v9 & 1) != 0 )
      *(uint8_t *)v7 = 0;
    v8 = *(uint32_t *)(v5 + 92);
    *(uint32_t *)(v2 + 32) = 1065353216;
    v8 |= 0x7FFFFFu;
    *(uint32_t *)(v2 + 48) = 1065353216;
    *(uint32_t *)(v2 + 92) = v8;
    *(uint32_t *)(v2 + 56) = 0;
    *(uint32_t *)(v2 + 60) = 0;
    *(uint32_t *)(v2 + 64) = 0;
    *(uint32_t *)(v2 + 68) = 0;
    *(uint32_t *)(v2 + 72) = 0;
    *(uint8_t *)(v2 + 76) = 1;
    *(uint8_t *)(v2 + 77) = 0;
    *(uint8_t *)(v2 + 94) = BYTE2(v8) & 0x7F;
    *(uint16_t *)(v2 + 95) = HIBYTE(v8) | 1;
    *(uint8_t *)(v2 + 97) = 0;
    *(uint8_t *)(v2 + 98) = 0;
    *(uint32_t *)(v2 + 100) = 0;
    *(uint32_t *)(v2 + 104) = 1065353216;
    *(uint32_t *)(v2 + 108) = 0;
    *(uint32_t *)(v2 + 112) = 1065353216;
    *(uint32_t *)(v2 + 116) = 0;
    *(uint32_t *)(v2 + 120) = 0;
    *(uint32_t *)(v2 + 124) = 0;
    *(uint32_t *)(v2 + 128) = 0;
    *(uint32_t *)(v2 + 132) = 0;
    *(uint32_t *)(v2 + 136) = 0;
    *(uint32_t *)(v2 + 140) = 0;
    *(uint32_t *)(v2 + 144) = 0;
    *((uint32_t *)self + 19) = v2;
  }
  *(uint32_t *)(v2 + 32) = *(uint32_t *)a2;
  *(uint32_t *)(v2 + 36) = *((uint32_t *)a2 + 1);
  *(uint32_t *)(v2 + 40) = *((uint32_t *)a2 + 2);
  *(uint32_t *)(v2 + 44) = *((uint32_t *)a2 + 3);
  *(uint32_t *)(v2 + 48) = *((uint32_t *)a2 + 4);
  *(uint32_t *)(v2 + 52) = *((uint32_t *)a2 + 5);
  v3 = *((uint32_t *)self + 19) + 32;
  *((uint8_t *)self + 145) = 1;
  *((uint32_t *)self + 17) = v3;
  *((uint8_t *)self + 147) = 1;
  gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Self **)self + 13);
  result = *((uint32_t *)self + 14);
  if ( result != 0 )
  {
    gameswf::weak_ptr_gameswf_Character_5ea15e::check_proxy((gameswf::Self **)self + 13);
    return gameswf::Character::invalidateBitmapCache(*((gameswf::Character::Self **)self + 14));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::setEffect  (binary VA: 0x1087380)
// Original: gameswf::Character::setEffect
// ----------------------------------------------------------------------------
gameswf::Character::Self * gameswf::Character::setEffect(gameswf::Character::Self *self, const gameswf::Effect::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  void *v6;
  int v7;
  int v8;
  void *v9;
  const void *v10;
  gameswf::Character::Self *result;
  gameswf::Self *v12;
  bool v13;
  int v14;
  int v15;
  uint16_t *v16;
  unsigned int v17;
  uint16_t *v18;
  int v19;
  gameswf::Self *v20;
  uint32_t *v21;
  int v22;
  int v23;

  v23 = *((uint32_t *)self + 19);
  if ( v23 == 0 )
  {
    v15 = opNew(0x94u);
    v23 = v15;
    v16 = (uint16_t *)(v15 + 32);
    *(uint32_t *)v15 = 1065353216;
    *(uint32_t *)(v15 + 8) = 1065353216;
    *(uint32_t *)(v15 + 16) = 1065353216;
    *(uint32_t *)(v15 + 24) = 1065353216;
    *(uint32_t *)(v15 + 4) = 0;
    *(uint32_t *)(v15 + 12) = 0;
    *(uint32_t *)(v15 + 20) = 0;
    *(uint32_t *)(v15 + 28) = 0;
    v17 = 24;
    if ( ((v15 + 32) & 1) != 0 )
    {
      *(uint8_t *)(v15 + 32) = 0;
      v16 = (uint16_t *)(v15 + 33);
      LOBYTE(v17) = 23;
    }
    if ( ((uint8_t)(uintptr_t)(v16) & 2) != 0 )
    {
      *v16 = 0;
      v17 -= 2;
      ++v16;
    }
    memset(v16, 0, 4 * (v17 >> 2));
    v18 = &v16[2 * (v17 >> 2)];
    if ( (v17 & 2) != 0 )
      *v18++ = 0;
    if ( (v17 & 1) != 0 )
      *(uint8_t *)v18 = 0;
    *(uint32_t *)(v15 + 32) = 1065353216;
    *(uint32_t *)(v15 + 48) = 1065353216;
    *(uint32_t *)(v15 + 56) = 0;
    *(uint32_t *)(v15 + 60) = 0;
    *(uint32_t *)(v15 + 64) = 0;
    *(uint32_t *)(v15 + 68) = 0;
    *(uint32_t *)(v15 + 72) = 0;
    *(uint8_t *)(v15 + 76) = 1;
    *(uint8_t *)(v15 + 77) = 0;
    v19 = *(uint32_t *)(v15 + 92) | 0x7FFFFF;
    *(uint32_t *)(v23 + 92) = v19;
    *(uint8_t *)(v23 + 94) = BYTE2(v19) & 0x7F;
    *(uint16_t *)(v23 + 95) = HIBYTE(v19) | 1;
    *(uint8_t *)(v23 + 97) = 0;
    *(uint8_t *)(v23 + 98) = 0;
    *(uint32_t *)(v23 + 100) = 0;
    *(uint32_t *)(v23 + 104) = 1065353216;
    *(uint32_t *)(v23 + 108) = 0;
    *(uint32_t *)(v23 + 112) = 1065353216;
    *(uint32_t *)(v23 + 116) = 0;
    *(uint32_t *)(v23 + 120) = 0;
    *(uint32_t *)(v23 + 124) = 0;
    *(uint32_t *)(v23 + 128) = 0;
    *(uint32_t *)(v23 + 132) = 0;
    *(uint32_t *)(v23 + 136) = 0;
    *(uint32_t *)(v23 + 140) = 0;
    *(uint32_t *)(v23 + 144) = 0;
    *((uint32_t *)self + 19) = v23;
  }
  *(uint32_t *)(v23 + 56) = *(uint32_t *)a2;
  v2 = *((uint32_t *)a2 + 2);
  v21 = (uint32_t *)(v23 + 60);
  v22 = v2;
  v3 = *(uint32_t *)(v23 + 64);
  if ( v2 != 0 )
  {
    v4 = *(uint32_t *)(v23 + 68);
    if ( v2 > v4 && *(uint32_t *)(v23 + 72) == 0 )
    {
      v14 = v2 + (v2 >> 1);
      *(uint32_t *)(v23 + 68) = v14;
      if ( v14 != 0 )
      {
        v20 = *(gameswf::Self **)(v23 + 60);
        if ( v20 != nullptr )
          *(uint32_t *)(v23 + 60) = (uint32_t)(uintptr_t)(gameswf::realloc_internal(v20, 96 * v14, 96 * v4));
        else
          *(uint32_t *)(v23 + 60) = gameswf::malloc_internal(96 * v14);
      }
      else
      {
        if ( *(uint32_t *)(v23 + 60) != 0 )
          gameswf::free_internal(*(gameswf::Self **)(v23 + 60));
        *(uint32_t *)(v23 + 60) = 0;
      }
    }
  }
  if ( v2 > v3 )
  {
    v5 = 96 * v3;
    do
    {
      v6 = (void *)(*v21 + v5);
      if ( v6 != nullptr )
        memset(v6, 0, 0x60u);
      ++v3;
      v5 += 96;
    }
    while ( v3 != v22 );
  }
  *(uint32_t *)(v23 + 64) = v22;
  if ( v22 > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      v9 = (void *)(v7 + *v21);
      v10 = (const void *)(*((uint32_t *)a2 + 1) + v7);
      v7 += 96;
      std::memcpy(v9, v10, 96);
    }
    while ( v8 < *(uint32_t *)(v23 + 64) );
  }
  *((uint32_t *)self + 18) = *((uint32_t *)self + 19) + 56;
  result = *((gameswf::Character::Self **)self + 14);
  if ( result != nullptr )
  {
    v12 = *((gameswf::Self **)self + 13);
    if ( *((uint8_t *)v12 + 2) != 0 )
    {
      return (gameswf::Character::Self *)gameswf::Character::invalidateBitmapCache(result);
    }
    else
    {
      result = (gameswf::Character::Self *)(*(uint16_t *)v12 - 1);
      v13 = *(uint16_t *)v12 == 1;
      *(uint16_t *)v12 = (uint16_t)(uintptr_t)(result);
      if ( v13 )
        result = (gameswf::Character::Self *)gameswf::free_internal(v12);
      *((uint32_t *)self + 13) = 0;
      *((uint32_t *)self + 14) = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::doMouseDrag  (binary VA: 0x109f820)
// Original: gameswf::Character::doMouseDrag
// ----------------------------------------------------------------------------
int gameswf::Character::doMouseDrag(gameswf::Self **self, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, float a28, float a29, float a30, float a31, float a32, float a33, int a34, int a35, gameswf::Self **a36, int a37, unsigned int a38, unsigned int a39, float a40, float a41, float a42, float a43)
{
  gameswf::Self *v43;
  int result;
  gameswf::Self **v45;
  gameswf::Self *v46;
  int v47;
  gameswf::Self *v48;
  gameswf::SceneNode::Self *v49;
  gameswf::Self *v50;
  char *WorldMatrix;
  gameswf::Character::Self *v52;
  char *v53;
  __m128 v54;
  __m128 v55;
  float *v56;
  float *v57;
  __m128 v58;
  __m128 v59;
  __m128 v60;
  uint32_t v61; // xmm3_4
  __m128 v62;
  __m128 v63;
  __m128 v64;
  uint32_t v65; // xmm1_4
  int v66;
  float v67; // xmm2_4
  gameswf::Self *v68;
  float retaddr;
  unsigned int v109;
  float v110;
  float v111;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef uint32_t _g4_t_v107[11];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v69)) > _g4_s0 ? (8u + sizeof(_g4_t_v69)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v70)) > _g4_s1 ? (12u + sizeof(_g4_t_v70)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v71)) > _g4_s2 ? (16u + sizeof(_g4_t_v71)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v72)) > _g4_s3 ? (20u + sizeof(_g4_t_v72)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v73)) > _g4_s4 ? (24u + sizeof(_g4_t_v73)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v74)) > _g4_s5 ? (28u + sizeof(_g4_t_v74)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v75)) > _g4_s6 ? (32u + sizeof(_g4_t_v75)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v76)) > _g4_s7 ? (36u + sizeof(_g4_t_v76)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v77)) > _g4_s8 ? (40u + sizeof(_g4_t_v77)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v78)) > _g4_s9 ? (44u + sizeof(_g4_t_v78)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v79)) > _g4_s10 ? (48u + sizeof(_g4_t_v79)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v80)) > _g4_s11 ? (52u + sizeof(_g4_t_v80)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v81)) > _g4_s12 ? (56u + sizeof(_g4_t_v81)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v82)) > _g4_s13 ? (60u + sizeof(_g4_t_v82)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v83)) > _g4_s14 ? (64u + sizeof(_g4_t_v83)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v84)) > _g4_s15 ? (68u + sizeof(_g4_t_v84)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v85)) > _g4_s16 ? (72u + sizeof(_g4_t_v85)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v86)) > _g4_s17 ? (76u + sizeof(_g4_t_v86)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v87)) > _g4_s18 ? (80u + sizeof(_g4_t_v87)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v88)) > _g4_s19 ? (84u + sizeof(_g4_t_v88)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v89)) > _g4_s20 ? (88u + sizeof(_g4_t_v89)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v90)) > _g4_s21 ? (92u + sizeof(_g4_t_v90)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v91)) > _g4_s22 ? (96u + sizeof(_g4_t_v91)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v92)) > _g4_s23 ? (100u + sizeof(_g4_t_v92)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v93)) > _g4_s24 ? (104u + sizeof(_g4_t_v93)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v94)) > _g4_s25 ? (108u + sizeof(_g4_t_v94)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v95)) > _g4_s26 ? (112u + sizeof(_g4_t_v95)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v96)) > _g4_s27 ? (116u + sizeof(_g4_t_v96)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v97)) > _g4_s28 ? (120u + sizeof(_g4_t_v97)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v98)) > _g4_s29 ? (124u + sizeof(_g4_t_v98)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v99)) > _g4_s30 ? (128u + sizeof(_g4_t_v99)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v100)) > _g4_s31 ? (132u + sizeof(_g4_t_v100)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v101)) > _g4_s32 ? (136u + sizeof(_g4_t_v101)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v102)) > _g4_s33 ? (140u + sizeof(_g4_t_v102)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v103)) > _g4_s34 ? (144u + sizeof(_g4_t_v103)) : _g4_s34,
    _g4_s36 = (148u + sizeof(_g4_t_v104)) > _g4_s35 ? (148u + sizeof(_g4_t_v104)) : _g4_s35,
    _g4_s37 = (152u + sizeof(_g4_t_v105)) > _g4_s36 ? (152u + sizeof(_g4_t_v105)) : _g4_s36,
    _g4_s38 = (156u + sizeof(_g4_t_v106)) > _g4_s37 ? (156u + sizeof(_g4_t_v106)) : _g4_s37,
    _g4_s39 = (160u + sizeof(_g4_t_v107)) > _g4_s38 ? (160u + sizeof(_g4_t_v107)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 12u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 16u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 20u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 24u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 28u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 32u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 36u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 40u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 44u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 48u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 52u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 56u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 60u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 64u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 68u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 72u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 76u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 80u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 84u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 88u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 92u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 96u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 100u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 104u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 108u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 112u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 116u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 120u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 124u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 128u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 132u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 136u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 140u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 144u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 148u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 152u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 156u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 160u);

  v107[0] = 0;
  LOWORD(v107[1]) = 0;
  BYTE2(v107[1]) = 0;
  v107[2] = 0;
  v43 = *self;
  v107[3] = 0;
  v107[4] = 1065353216;
  v107[5] = 1065353216;
  v107[6] = 0;
  v107[7] = 0;
  result = (*((int (**)(gameswf::Self **, uint32_t *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))v43
            + 57))(
             self,
             v107,
             v69,
             v70,
             v71,
             v72,
             v73,
             v74,
             v75,
             v76,
             v77,
             v78,
             v79,
             v80,
             v81,
             v82,
             v83,
             v84,
             v85,
             v86,
             v87,
             v88,
             v89,
             v90,
             v91,
             v92,
             v93,
             v94,
             v95,
             v96,
             v97,
             v98,
             v99,
             v100,
             v101,
             v102,
             v103,
             v104,
             v105,
             v106);
  v45 = a36;
  if ( a36 != self )
    return result;
  v46 = *a36;
  *((uint8_t *)a36 + 150) = 1;
  v47 = (*((int (**)(gameswf::Self **))v46 + 77))(v45);
  G4_VCALL<void>(v47, 120, &a13, &a14, &a15);
  v48 = v45[19];
  if ( v48 == nullptr )
    goto LABEL_4;
LABEL_3:
  v49 = *((gameswf::SceneNode::Self **)v48 + 35);
  if ( v49 != nullptr )
  {
    gameswf::SceneNode::getWorldMouse(v49, &a13, &a14);
  }
  else
  {
LABEL_4:
    while ( 1 )
    {
      v50 = v45[14];
      if ( v50 == nullptr )
        break;
      if ( *((uint8_t *)v45[13] + 2) == 0 )
      {
        sub_7E5ED0(v45 + 13, nullptr);
        v45[14] = nullptr;
        break;
      }
      v45 = (gameswf::Self **)v45[14];
      v48 = *((gameswf::Self **)v50 + 19);
      if ( v48 != nullptr )
        goto LABEL_3;
    }
  }
  v111 = (float)a14;
  v110 = (float)a13;
  WorldMatrix = gameswf::Character::getWorldMatrix((gameswf::Character::Self *)self);
  a16 = *(uint32_t *)WorldMatrix;
  a17 = *((uint32_t *)WorldMatrix + 1);
  a18 = *((uint32_t *)WorldMatrix + 2);
  a19 = *((uint32_t *)WorldMatrix + 3);
  a20 = *((uint32_t *)WorldMatrix + 4);
  a21 = *((uint32_t *)WorldMatrix + 5);
  memset(&a28, 0, 0x18u);
  a28 = 1.0;
  a32 = 1.0;
  gameswf::Matrix::setInverse((gameswf::Matrix::Self *)&a28, (const gameswf::Matrix::Self *)&a16);
  memset(&a22, 0, 0x18u);
  v52 = (gameswf::Character::Self *)(*(self + 14));
  a22 = 1065353216;
  a26 = 1065353216;
  if ( v52 != nullptr )
  {
    if ( *((uint8_t *)*(self + 13) + 2) != 0 )
    {
      v53 = gameswf::Character::getWorldMatrix(v52);
      a22 = *(uint32_t *)v53;
      a23 = *((uint32_t *)v53 + 1);
      a24 = *((uint32_t *)v53 + 2);
      a25 = *((uint32_t *)v53 + 3);
      a26 = *((uint32_t *)v53 + 4);
      a27 = *((uint32_t *)v53 + 5);
    }
    else
    {
      sub_7E5ED0(self + 13, nullptr);
      *(self + 14) = nullptr;
    }
  }
  memset(&a28, 0, 0x18u);
  a28 = 1.0;
  a32 = 1.0;
  gameswf::Matrix::setInverse((gameswf::Matrix::Self *)&a28, (const gameswf::Matrix::Self *)&a22);
g4_m128_raw(v54) = LODWORD(v110);
g4_m128_raw(v55) = LODWORD(v110);
g4_m128_lane<float>(v54, 0) = (float)((float)(v110 * a28) + (float)(v111 * a29)) + a30;
g4_m128_lane<float>(v55, 0) = (float)((float)(v110 * a31) + (float)(v111 * a32)) + a33;
  if ( BYTE1(a37) == 0 )
  {
    if ( (uint8_t)a37 == 0 )
    {
      v66 = (int)(uintptr_t)(*(self + 17));
      LOBYTE(a37) = 1;
      a42 =g4_m128_lane<float>(v54, 0) - *(float *)(v66 + 8);
      v67 =g4_m128_lane<float>(v55, 0) - *(float *)(v66 + 20);
      v68 = *self;
      v107[9] = (uint32_t)(uintptr_t)(&a36);
      retaddr = (float)((float)(v110 * a31) + (float)(v111 * a32)) + a33;
      v107[8] = (uint32_t)(uintptr_t)(self);
      *(float *)&v109 = (float)((float)(v110 * a28) + (float)(v111 * a29)) + a30;
      a43 = v67;
      (*((void (**)(gameswf::Self **, gameswf::Self ***))v68 + 58))(self, &a36);
g4_m128_raw(v54) = v109;
g4_m128_raw(v55) = LODWORD(retaddr);
    }
g4_m128_lane<float>(v54, 0) =g4_m128_lane<float>(v54, 0) - a42;
    v57 = (float *)*(self + 17);
    a28 = *v57;
    a29 = v57[1];
    a30 = v57[2];
    a31 = v57[3];
    a32 = v57[4];
    if (g4_m128_lane<float>(v54, 0) >= -3.4028235e38f )
g4_m128_lane<int32_t>(v54, 0) &=g4_m128_lane<uint32_t>(_mm_cmple_ss(v54, *(__m128 *)&dword_1C7B5E0), 0);
    else
g4_m128_lane<int32_t>(v54, 0) = 0;
g4_m128_lane<float>(v55, 0) =g4_m128_lane<float>(v55, 0) - a43;
    a30 =g4_m128_lane<float>(v54, 0);
    if (g4_m128_lane<float>(v55, 0) < -3.4028235e38f )
      goto LABEL_16;
LABEL_22:
g4_m128_lane<int32_t>(v55, 0) &=g4_m128_lane<uint32_t>(_mm_cmple_ss(v55, *(__m128 *)&dword_1C7B5E0), 0);
    goto LABEL_23;
  }
  v56 = (float *)*(self + 17);
  a28 = *v56;
  a29 = v56[1];
  a30 = v56[2];
  a31 = v56[3];
  a32 = v56[4];
  if (g4_m128_lane<float>(v54, 0) >= -3.4028235e38f )
g4_m128_lane<int32_t>(v54, 0) &=g4_m128_lane<uint32_t>(_mm_cmple_ss(v54, *(__m128 *)&dword_1C7B5E0), 0);
  else
g4_m128_lane<int32_t>(v54, 0) = 0;
  a30 =g4_m128_lane<float>(v54, 0);
  if (g4_m128_lane<float>(v55, 0) >= -3.4028235e38f )
    goto LABEL_22;
LABEL_16:
g4_m128_lane<int32_t>(v55, 0) = 0;
LABEL_23:
  a33 =g4_m128_lane<float>(v55, 0);
  if ( BYTE2(a37) != 0 )
  {
g4_m128_raw(v58) = LODWORD(a40);
g4_m128_lane<float>(v58, 0) = fminf(a40,g4_m128_lane<float>(v54, 0));
    v59 = _mm_cmpge_ss(G4_BITCAST<__m128>(a38), v54);
    v60 = _mm_or_ps(_mm_andnot_ps(v59, v58), _mm_and_ps(G4_BITCAST<__m128>(a38), v59));
    if (g4_m128_lane<float>(v60, 0) < -3.4028235e38f )
      *(float *)&v61 = 0.0;
    else
      v61 =g4_m128_lane<int32_t>(v60, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v60, *(__m128 *)&dword_1C7B5E0), 0);
g4_m128_raw(v62) = LODWORD(a41);
g4_m128_lane<float>(v62, 0) = fminf(a41,g4_m128_lane<float>(v55, 0));
    a30 = *(float *)&v61;
    v63 = _mm_cmpge_ss(G4_BITCAST<__m128>(a39), v55);
    v64 = _mm_or_ps(_mm_andnot_ps(v63, v62), _mm_and_ps(G4_BITCAST<__m128>(a39), v63));
    if (g4_m128_lane<float>(v64, 0) < -3.4028235e38f )
      *(float *)&v65 = 0.0;
    else
      v65 =g4_m128_lane<int32_t>(v64, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v64, *(__m128 *)&dword_1C7B5E0), 0);
    a33 = *(float *)&v65;
  }
  return gameswf::Character::setMatrix((gameswf::Character::Self *)self, (const gameswf::Matrix::Self *)&a28);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::updateMatrices  (binary VA: 0x10a4960)
// Original: gameswf::Character::updateMatrices
// ----------------------------------------------------------------------------
void gameswf::Character::updateMatrices(gameswf::Character::Self *self)
{
  int v1;
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  float v5; // xmm6_4
  __m128 v6;
  __m128 v7;
  float v8; // xmm4_4
  __m128 v9;
  uint32_t v10; // xmm2_4
  __m128 v11;
  float v12; // xmm2_4
  uint32_t v13; // xmm1_4
  __m128 v14;
  __m128 v15;
  uint32_t v16; // xmm1_4
  uint32_t v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm6_4
  uint32_t v20; // xmm5_4
  uint32_t v21; // xmm3_4
  int v22;
  typedef int64_t _g4_t_v23;
  typedef float _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[6];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v24)) > _g4_s1 ? (24u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v25)) > _g4_s2 ? (28u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v26)) > _g4_s3 ? (32u + sizeof(_g4_t_v26)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);

  if ( *((uint8_t *)self + 145) == 0 )
    goto LABEL_2;
  v3 = *((uint32_t *)self + 14);
  if ( v3 == 0 )
    goto LABEL_23;
  v4 = (uint32_t *)(v3 + 112);
  if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
    *((uint32_t *)self + 14) = 0;
LABEL_23:
    v4 = (uint32_t *)(gameswf::Matrix::identity);
  }
  *((uint32_t *)self + 28) = *v4;
  *((uint32_t *)self + 29) = v4[1];
  *((uint32_t *)self + 30) = v4[2];
  *((uint32_t *)self + 31) = v4[3];
  *((uint32_t *)self + 32) = v4[4];
  *((uint32_t *)self + 33) = v4[5];
  v25 = *((uint32_t *)self + 17);
  memset(v26, 0, sizeof(v26));
  v5 = *(float *)v25;
g4_m128_raw(v6) = *(unsigned int *)(v25 + 12);
g4_m128_raw(v7) = *((unsigned int *)self + 28);
  v9 = v6;
  v8 = *((float *)self + 29);
g4_m128_lane<float>(v9, 0) = (float)(g4_m128_lane<float>(v6, 0) * v8) + (float)(*(float *)v25 *g4_m128_lane<float>(v7, 0));
  if (g4_m128_lane<float>(v9, 0) >= -3.4028235e38f )
    v10 =g4_m128_lane<int32_t>(v9, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v9, *(__m128 *)&dword_1C7B5E0), 0);
  else
    v10 = 0;
  v26[0] = v10;
g4_m128_raw(v11) = *((unsigned int *)self + 31);
  v12 = *((float *)self + 32);
g4_m128_lane<float>(v6, 0) = (float)(g4_m128_lane<float>(v6, 0) * v12) + (float)(v5 *g4_m128_lane<float>(v11, 0));
  if (g4_m128_lane<float>(v6, 0) < -3.4028235e38f )
    v13 = 0;
  else
    v13 =g4_m128_lane<int32_t>(v6, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v6, *(__m128 *)&dword_1C7B5E0), 0);
  v26[3] = v13;
  v24 = *(float *)(v25 + 4);
g4_m128_raw(v14) = *(unsigned int *)(v25 + 16);
  v15 = v14;
g4_m128_lane<float>(v15, 0) = (float)(g4_m128_lane<float>(v14, 0) * v8) + (float)(v24 *g4_m128_lane<float>(v7, 0));
  if (g4_m128_lane<float>(v15, 0) < -3.4028235e38f )
    v16 = 0;
  else
    v16 =g4_m128_lane<int32_t>(v15, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v15, *(__m128 *)&dword_1C7B5E0), 0);
  v26[1] = v16;
g4_m128_lane<float>(v14, 0) = (float)(g4_m128_lane<float>(v14, 0) * v12) + (float)(v24 *g4_m128_lane<float>(v11, 0));
  if (g4_m128_lane<float>(v14, 0) < -3.4028235e38f )
    v17 = 0;
  else
    v17 =g4_m128_lane<int32_t>(v14, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v14, *(__m128 *)&dword_1C7B5E0), 0);
  v26[4] = v17;
  v18 = *(float *)(v25 + 20);
  v19 = *(float *)(v25 + 8);
g4_m128_lane<float>(v7, 0) = (float)((float)(g4_m128_lane<float>(v7, 0) * v19) + (float)(v8 * v18)) + *((float *)self + 30);
  if (g4_m128_lane<float>(v7, 0) < -3.4028235e38f )
    v20 = 0;
  else
    v20 =g4_m128_lane<int32_t>(v7, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v7, *(__m128 *)&dword_1C7B5E0), 0);
  v26[2] = v20;
g4_m128_lane<float>(v11, 0) = (float)((float)(g4_m128_lane<float>(v11, 0) * v19) + (float)(v12 * v18)) + *((float *)self + 33);
  if (g4_m128_lane<float>(v11, 0) < -3.4028235e38f )
    v21 = 0;
  else
    v21 =g4_m128_lane<int32_t>(v11, 0) &g4_m128_lane<uint32_t>(_mm_cmple_ss(v11, *(__m128 *)&dword_1C7B5E0), 0);
  v22 = v26[0];
  *((uint8_t *)self + 145) = 0;
  *((uint32_t *)self + 28) = v22;
  *((uint32_t *)self + 29) = v26[1];
  *((uint32_t *)self + 30) = v26[2];
  *((uint32_t *)self + 31) = v26[3];
  v26[5] = v21;
  *((uint32_t *)self + 32) = v26[4];
  *((uint32_t *)self + 33) = v26[5];
LABEL_2:
  if ( *((uint8_t *)self + 146) == 0 )
    return;
  v1 = *((uint32_t *)self + 14);
  if ( v1 == 0 )
    goto LABEL_25;
  v2 = (uint32_t *)(v1 + 80);
  if ( *(uint8_t *)(*((uint32_t *)self + 13) + 2) == 0 )
  {
    sub_7E5ED0((gameswf::Self **)self + 13, nullptr);
    *((uint32_t *)self + 14) = 0;
LABEL_25:
    v2 = (uint32_t *)(gameswf::CxForm::identity);
  }
  *((uint32_t *)self + 20) = *v2;
  *((uint32_t *)self + 21) = v2[1];
  *((uint32_t *)self + 22) = v2[2];
  *((uint32_t *)self + 23) = v2[3];
  *((uint32_t *)self + 24) = v2[4];
  *((uint32_t *)self + 25) = v2[5];
  *((uint32_t *)self + 26) = v2[6];
  *((uint32_t *)self + 27) = v2[7];
  HIDWORD(v23) = *((uint32_t *)self + 16);
  LODWORD(v23) = (uint32_t)(uintptr_t)((char *)self + 80);
  gameswf::CxForm::concatenate(v23);
  *((uint8_t *)self + 146) = 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Character::notifyNeedAdvance  (binary VA: 0x10e9b00)
// Original: gameswf::Character::notifyNeedAdvance
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::Character::notifyNeedAdvance(gameswf::Self **self)
{
  gameswf::Character::Self *v1;
  gameswf::Self *result;

  v1 = (gameswf::Character::Self *)self;
  result = *(self + 14);
  *((uint8_t *)self + 150) = 1;
  if ( result != nullptr )
  {
    while ( *(uint8_t *)(*((uint32_t *)v1 + 13) + 2) != 0 )
    {
      v1 = (gameswf::Character::Self *)(result);
      result = *((gameswf::Self **)result + 14);
      *((uint8_t *)v1 + 150) = 1;
      if ( result == nullptr )
        return result;
    }
    result = sub_7E5ED0((gameswf::Self **)v1 + 13, nullptr);
    *((uint32_t *)v1 + 14) = 0;
  }
  return result;
}


