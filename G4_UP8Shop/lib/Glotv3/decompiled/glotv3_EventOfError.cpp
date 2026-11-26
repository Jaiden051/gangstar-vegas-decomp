#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventOfError.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfError::Destroy  (binary VA: 0x13471b0)
// Original: glotv3::EventOfError::~EventOfError
// ----------------------------------------------------------------------------
void glotv3::EventOfError::Destroy(glotv3::EventOfError::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093BA0);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfError::Destroy_ea1347210  (binary VA: 0x1347210)
// Original: glotv3::EventOfError::~EventOfError
// ----------------------------------------------------------------------------
void glotv3::EventOfError::Destroy_ea1347210(glotv3::EventOfError::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093BA0);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfError::Construct  (binary VA: 0x1349420)
// Original: glotv3::EventOfError::EventOfError
// ----------------------------------------------------------------------------
int glotv3::EventOfError::Construct(glotv3::Event::Self *a1, void *a2, uint8_t **a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  typedef void *_g4_t_v9[10];
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef void *_g4_t_v12[7];
  typedef uint32_t *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v10)) > _g4_s1 ? (40u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v11)) > _g4_s2 ? (44u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v12)) > _g4_s3 ? (48u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v13)) > _g4_s4 ? (76u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v14)) > _g4_s5 ? (80u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v15)) > _g4_s6 ? (84u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v16)) > _g4_s7 ? (88u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v17)) > _g4_s8 ? (92u + sizeof(_g4_t_v17)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 76u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 80u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 84u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 88u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 92u);

  glotv3::Event::Construct(a1, false);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2093BA0);
  glotv3::Event::setIsAutomatic(a1, true);
  glotv3::Event::setEventType(a1, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_CAA4)->st_size + 1);
  v9[2] = (void *)(uintptr_t)2;
  v9[6] = nullptr;
  v9[9] = nullptr;
  v9[8] = (void *)(uintptr_t)2048;
  v10 = opNew(1u);
  v11 = v10;
  v3 = (uint32_t *)(malloc(0x80Cu));
  *v3 = 2048;
  v3[2] = 0;
  v3[1] = 0;
  v9[7] = v3;
  v9[0] = a2;
  glotv3::Event::addKeyPair(
    (int)(uintptr_t)(a1),
    &glotv3::EventOfError::k_KeyErrorTrackerId,
    (glotv3::EventValue::Self *)v9);
  glotv3::EventValue::Destroy(v9);
  v14 = 2048;
  v12[2] = (void *)(uintptr_t)3;
  v12[6] = nullptr;
  v13 = nullptr;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v4 = opNew(1u);
  v5 = v14;
  v16 = v4;
  v17 = v4;
  v6 = (uint32_t *)(malloc(v14 + 12));
  v7 = v13;
  *v6 = v5;
  v6[2] = (uint32_t)(uintptr_t)(v7);
  v6[1] = 0;
  v13 = v6;
  v12[0] = &stru_354;
  glotv3::Event::addKeyPair(
    (int)(uintptr_t)(a1),
    &glotv3::EventOfError::k_KeyRevision,
    (glotv3::EventValue::Self *)v12);
  glotv3::EventValue::Destroy(v12);
  glotv3::Event::addKeyPair((int)(uintptr_t)(a1), &glotv3::EventOfError::k_KeyReason, a3);
  return glotv3::Glotv3Logger::WriteLog(a3);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfError::s_OfType  (binary VA: 0x1349610)
// Original: glotv3::EventOfError::s_OfType
// ----------------------------------------------------------------------------
glotv3::Event::Self ** glotv3::EventOfError::s_OfType(glotv3::Event::Self **a1, void *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int owner;
  int i;
  int *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned int nusers;
  int v25;
  unsigned int *v26;
  unsigned int v27;
  unsigned int spins;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  int *v32;
  int v33;
  int v34;
  int v35;
  int v36;
  char *untyped_deleter;
  glotv3::Event::Self *v38;
  char *v39;
  uint8_t *v40;
  unsigned int v42;
  unsigned int v43;
  int *v44;
  unsigned int j;
  int *v46;
  uint32_t *v47;
  uint32_t *v48;
  int v49;
  unsigned int v50;
  uint32_t *v51;
  uint32_t *v52;
  uint32_t *v53;
  unsigned int v54;
  uint32_t *v55;
  uint32_t *v56;
  uint32_t *v57;
  unsigned int v58;
  unsigned int v59;
  typedef char *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef unsigned int *_g4_t_p_count;
  typedef int _g4_t_v69;
  typedef unsigned int _g4_t_v70;
  typedef unsigned int _g4_t_v71;
  typedef uint32_t *_g4_t_v72;
  typedef unsigned int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef unsigned int _g4_t_count;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint8_t *_g4_t_v78[4];
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef uint32_t _g4_t_v85[5];
  typedef uint32_t _g4_t_v86[5];
  typedef uint32_t _g4_t_v87[5];
  typedef uint32_t _g4_t_v88[5];
  typedef uint32_t _g4_t_v89[5];
  typedef uint32_t _g4_t_v90[8];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (12u + sizeof(_g4_t_v60)) > _g4_s0 ? (12u + sizeof(_g4_t_v60)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v61)) > _g4_s1 ? (28u + sizeof(_g4_t_v61)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v62)) > _g4_s2 ? (28u + sizeof(_g4_t_v62)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v63)) > _g4_s3 ? (28u + sizeof(_g4_t_v63)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v64)) > _g4_s4 ? (28u + sizeof(_g4_t_v64)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v65)) > _g4_s5 ? (28u + sizeof(_g4_t_v65)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v66)) > _g4_s6 ? (28u + sizeof(_g4_t_v66)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v67)) > _g4_s7 ? (36u + sizeof(_g4_t_v67)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_p_count)) > _g4_s8 ? (40u + sizeof(_g4_t_p_count)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v69)) > _g4_s9 ? (40u + sizeof(_g4_t_v69)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v70)) > _g4_s10 ? (44u + sizeof(_g4_t_v70)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v71)) > _g4_s11 ? (44u + sizeof(_g4_t_v71)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v72)) > _g4_s12 ? (44u + sizeof(_g4_t_v72)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v73)) > _g4_s13 ? (48u + sizeof(_g4_t_v73)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v74)) > _g4_s14 ? (48u + sizeof(_g4_t_v74)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_count)) > _g4_s15 ? (52u + sizeof(_g4_t_count)) : _g4_s15,
    _g4_s17 = (65u + sizeof(_g4_t_v76)) > _g4_s16 ? (65u + sizeof(_g4_t_v76)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v77)) > _g4_s17 ? (68u + sizeof(_g4_t_v77)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v78)) > _g4_s18 ? (72u + sizeof(_g4_t_v78)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v79)) > _g4_s19 ? (88u + sizeof(_g4_t_v79)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v80)) > _g4_s20 ? (92u + sizeof(_g4_t_v80)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v81)) > _g4_s21 ? (96u + sizeof(_g4_t_v81)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v82)) > _g4_s22 ? (100u + sizeof(_g4_t_v82)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v83)) > _g4_s23 ? (104u + sizeof(_g4_t_v83)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v84)) > _g4_s24 ? (108u + sizeof(_g4_t_v84)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v85)) > _g4_s25 ? (112u + sizeof(_g4_t_v85)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v86)) > _g4_s26 ? (132u + sizeof(_g4_t_v86)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v87)) > _g4_s27 ? (152u + sizeof(_g4_t_v87)) : _g4_s27,
    _g4_s29 = (172u + sizeof(_g4_t_v88)) > _g4_s28 ? (172u + sizeof(_g4_t_v88)) : _g4_s28,
    _g4_s30 = (192u + sizeof(_g4_t_v89)) > _g4_s29 ? (192u + sizeof(_g4_t_v89)) : _g4_s29,
    _g4_s31 = (212u + sizeof(_g4_t_v90)) > _g4_s30 ? (212u + sizeof(_g4_t_v90)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_p_count &p_count = *reinterpret_cast<_g4_t_p_count *>(_g4_sf + 40u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 44u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 44u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 48u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 48u);
  _g4_t_count &count = *reinterpret_cast<_g4_t_count *>(_g4_sf + 52u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 65u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 68u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 72u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 88u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 92u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 96u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 100u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 104u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 108u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 112u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 132u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 152u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 172u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 192u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 212u);

  if ( g4_fnstatic_ec81e02332 == 0 )
  {
    g4_fnstatic_ec81e02332 = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v5 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v5 != 0 )
      {
        v63 = (int)(uintptr_t)(sub_18F81E0(v4, v3));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v79), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v76));
        sub_19042E0(v85, &v79);
        g4_std::string::Destroy(&v79);
        v85[2] = v5;
        v85[3] = v63;
        v85[4] = (uint32_t)(uintptr_t)(&dword_213B814);
        v85[0] = ((uint32_t)(uintptr_t)&off_2049568);
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
      *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
    }
  }
  do
    v6 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v6 == 4 );
  v9 = v6;
  if ( v6 != 0 )
  {
    v62 = (int)(uintptr_t)(sub_18F81E0(v8, v7));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v80), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v76) + 1);
    sub_19042E0(v86, &v80);
    g4_std::string::Destroy(&v80);
    v86[2] = v9;
    v86[3] = v62;
    v86[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v86[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  owner = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner;
  for ( i = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind;
        owner != 0;
        owner = *(v12 - 1) )
  {
    v12 = (int *)(owner + i - 4);
    i = *v12;
  }
  do
    v13 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v13 == 4 );
  v16 = v13;
  if ( v13 != 0 )
  {
    v66 = (int)(uintptr_t)(sub_18F81E0(v15, v14));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v81), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v76) + 2);
    sub_19042E0(v87, &v81);
    g4_std::string::Destroy(&v81);
    v87[2] = v16;
    v87[3] = v66;
    v87[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v87[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  if ( g4_fnstatic_ec81e02332 == 0 )
  {
    g4_fnstatic_ec81e02332 = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v19 = pthread_mutex_init(
              &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
              nullptr);
      if ( v19 != 0 )
      {
        v65 = (int)(uintptr_t)(sub_18F81E0(v18, v17));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v82), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v77));
        sub_19042E0(v88, &v82);
        g4_std::string::Destroy(&v82);
        v88[2] = v19;
        v88[3] = v65;
        v88[4] = (uint32_t)(uintptr_t)(&dword_213B814);
        v88[0] = ((uint32_t)(uintptr_t)&off_2049568);
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
      *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
    }
  }
  do
    v20 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v20 == 4 );
  v23 = v20;
  if ( v20 != 0 )
  {
    v64 = (int)(uintptr_t)(sub_18F81E0(v22, v21));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v83), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v77) + 1);
    sub_19042E0(v89, &v83);
    g4_std::string::Destroy(&v83);
    v89[2] = v23;
    v89[3] = v64;
    v89[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v89[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers;
  v73 = nusers;
  if ( nusers <= 3 )
  {
    v73 = 4;
  }
  else if ( (nusers & 3) != 0 )
  {
    v73 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
        + 4
        - (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
         & 3);
    v25 = v73 & 3;
    if ( v73 <= 3 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        353,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s >= min_alloc_size");
      v25 = v73;
    }
    if ( v25 != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        354,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s % min_align == 0");
  }
  v70 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
      / v73
      + (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
       % v73 != 0);
  if ( v70 != 0 )
  {
    count = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count;
    p_count = &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count;
    if ( count != 0 )
    {
      while ( 2 )
      {
        v26 = (unsigned int *)count;
        v27 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
            / v73
            + (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
             % v73 != 0);
        while ( --v27 != 0 )
        {
          if ( (unsigned int *)*v26 != (unsigned int *)((char *)v26 + v73) )
          {
            count = *v26;
            p_count = v26;
            goto LABEL_30;
          }
          v26 = (unsigned int *)*v26;
        }
        if ( v26 != nullptr )
        {
          *p_count = *v26;
          goto LABEL_42;
        }
LABEL_30:
        if ( count != 0 )
          continue;
        break;
      }
    }
  }
  spins = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins;
  if ( v70 >= spins )
    spins = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
          / v73
          + (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
           % v73 != 0);
  boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = spins;
  v69 = v73 * spins + 8;
  count = opNewArray(v69, (const std::nothrow_t *)&std::nothrow);
  if ( count == 0 )
  {
    v58 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins;
    if ( v70 >= v58 )
      goto LABEL_101;
    v59 = v58 >> 1;
    if ( v70 >= v59 )
      v59 = v70;
    boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = v59;
    v69 = v73 * v59 + 8;
    count = opNewArray(v69, (const std::nothrow_t *)&std::nothrow);
    if ( count == 0 )
    {
LABEL_101:
      do
LABEL_42:
        v33 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
      while ( v33 == 4 );
      v36 = v33;
      if ( v33 != 0 )
      {
        v61 = (int)(uintptr_t)(sub_18F81E0(v35, v34));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v84), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v77) + 2);
        sub_19042E0(v90, &v84);
        g4_std::string::Destroy(&v84);
        v90[2] = v36;
        v90[3] = v61;
        v90[4] = (uint32_t)(uintptr_t)(&dword_213B814);
        v90[0] = ((uint32_t)(uintptr_t)&off_20495E0);
        std::terminate();
      }
      if ( count == 0 )
        std::terminate();
      *(uint32_t *)(count + 4) = 1;
      *(uint32_t *)(count + 8) = 1;
      *(uint32_t *)(count + 12) = 0;
      *(uint8_t *)(count + 16) = 0;
      *(uint32_t *)count = ((uint32_t)(uintptr_t)&off_2093BC8);
      untyped_deleter = boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *,boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>,boost::pool_allocator<glotv3::Event::Self,glotv3::event_new_delete,boost::mutex::Self,128u,0u>>::get_untyped_deleter((boost::detail::sp_counted_impl_pda<glotv3::EventOfError::Self *, boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>, boost::pool_allocator<glotv3::Event::Self, glotv3::event_new_delete, boost::mutex::Self, 128u, 0u>> *)count);
      v38 = (glotv3::Event::Self *)(untyped_deleter + 4);
      v39 = untyped_deleter;
      g4_std::string::construct_copy(v78, a3);
      if ( v38 != nullptr )
        glotv3::EventOfError::Construct(v38, a2, v78);
      v40 = v78[0] - 12;
      if ( (uint32_t *)v78[0] - 3 != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v78[0] - 1, 0xFFFFFFFF) <= 0 )
      {
        v60 = (char *)&v77 + 3;
        g4_std::string::Rep::M_destroy(v40);
      }
      *v39 = 1;
      *a1 = v38;
      a1[1] = (glotv3::Event::Self *)count;
      __sync_add_and_fetch((volatile int32_t *)(count + 4), 1);
      if ( __sync_fetch_and_add((volatile int32_t *)(count + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(count, 8, v60);
        if ( __sync_fetch_and_add((volatile int32_t *)(count + 8), 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(count, 12);
      }
      return a1;
    }
  }
  v29 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins;
  if ( v70 < v29 )
  {
    v47 = (uint32_t *)boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count;
    v48 = (uint32_t *)(count + v73 * v70);
    v49 = v69 - v73 * v70 - 8;
    v72 = v48;
    if ( v47 != nullptr && v48 >= v47 )
    {
      do
      {
        v53 = v47;
        v47 = (uint32_t *)*v47;
      }
      while ( v47 != nullptr && v72 >= v47 );
      v67 = v53;
      v54 = v73 * ((v49 - v73) / v73);
      v55 = (uint32_t *)((char *)v72 + v54);
      *(uint32_t *)((char *)v72 + v54) = (uint32_t)(uintptr_t)(v47);
      if ( v72 == (uint32_t *)((char *)v72 + v54) )
      {
        v57 = v72;
      }
      else
      {
        v56 = (uint32_t *)((char *)v55 - v73);
        if ( v72 == (uint32_t *)((char *)v55 - v73) )
        {
          v56 = v55;
        }
        else
        {
          while ( 1 )
          {
            *v56 = (uint32_t)(uintptr_t)(v55);
            if ( v72 == (uint32_t *)((char *)v56 - v73) )
              break;
            v55 = v56;
            v56 = (uint32_t *)((char *)v56 - v73);
          }
        }
        v57 = v72;
        *v72 = (uint32_t)(uintptr_t)(v56);
      }
      *v67 = (uint32_t)(uintptr_t)(v57);
      v30 = (unsigned int)(uintptr_t)((*(uint32_t *)unk_21171FC));
      v29 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins;
      if ( (*(uint32_t *)unk_21171FC) == 0 )
        goto LABEL_36;
      goto LABEL_51;
    }
    v50 = v73 * ((v49 - v73) / v73);
    v51 = (uint32_t *)((char *)v72 + v50);
    *(uint32_t *)((char *)v72 + v50) = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count;
    if ( v72 != (uint32_t *)((char *)v72 + v50) )
    {
      v52 = (uint32_t *)((char *)v51 - v73);
      if ( v72 == (uint32_t *)((char *)v51 - v73) )
      {
        v52 = v51;
      }
      else
      {
        while ( 1 )
        {
          *v52 = (uint32_t)(uintptr_t)(v51);
          if ( v72 == (uint32_t *)((char *)v52 - v73) )
            break;
          v51 = v52;
          v52 = (uint32_t *)((char *)v52 - v73);
        }
      }
      *v72 = (uint32_t)(uintptr_t)(v52);
    }
    v29 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins;
    boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = (unsigned int)(uintptr_t)(v72);
  }
  v30 = (unsigned int)(uintptr_t)((*(uint32_t *)unk_21171FC));
  if ( (*(uint32_t *)unk_21171FC) == 0 )
  {
LABEL_36:
    boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 2 * v29;
LABEL_37:
    v31 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner;
    if ( v31 != 0 && count >= v31 )
    {
      v44 = (int *)(v31
                  + boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind
                  - 4);
      for ( j = *(uint32_t *)(v31
                          + boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind
                          - 8); j != 0 && count >= j; j = *(v44 - 1) )
        v44 = (int *)(j + *v44 - 4);
      v74 = *v44;
      v46 = (int *)(count + v69 - 4);
      *(v46 - 1) = j;
      *v46 = v74;
      *(v44 - 1) = count;
      *v44 = v69;
    }
    else
    {
      v32 = (int *)(count + v69 - 4);
      *(v32 - 1) = v31;
      *v32 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = count;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = v69;
    }
    goto LABEL_42;
  }
LABEL_51:
  v71 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers;
  if ( v30 > v29 * v73 / v71 )
  {
    v42 = 2 * v29;
    v43 = v30 * v71 / v73;
    if ( v42 <= v43 )
      v43 = v42;
    boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = v43;
  }
  goto LABEL_37;
}


