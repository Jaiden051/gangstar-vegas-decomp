#include "Core/Utils/DecompTypes.h"
#include "glwebtools_ServerSideEventListener_CurlCB.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventListener_CurlCB::Reset  (binary VA: 0x13eff00)
// Original: glwebtools::ServerSideEventListener_CurlCB::Reset
// ----------------------------------------------------------------------------
int glwebtools::ServerSideEventListener_CurlCB::Reset(glwebtools::ServerSideEventListener_CurlCB::Self *self)
{
  glwebtools::ServerSideEventListener_CurlCB::Self *v1;
  int v2;
  void (***v3)(uint32_t);
  glwebtools::ServerSideEventListener_CurlCB::Self **v4;
  glwebtools::ServerSideEventListener_CurlCB::Self *v5;
  glwebtools::ServerSideEventListener_CurlCB::Self *v6;
  uint32_t *i;
  void (***v8)(uint32_t, char *);
  int v9;
  typedef char *_g4_t_v11;
  typedef glwebtools::Mutex::Self *_g4_t_v12;
  typedef char _g4_t_v13;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v12)) > _g4_s1 ? (24u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (47u + sizeof(_g4_t_v13)) > _g4_s2 ? (47u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 47u);

  v1 = self;
  v2 = *((uint32_t *)self + 6);
  if ( v2 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v2 + 12))(*((uint32_t *)self + 6));
    v3 = *((void (****)(uint32_t))self + 6);
    if ( v3 != nullptr )
    {
      (**v3)(*((uint32_t *)self + 6));
      sub_4EBEE0(*((uint32_t *)self + 6));
    }
    *((uint32_t *)self + 6) = 0;
  }
  v4 = *((glwebtools::ServerSideEventListener_CurlCB::Self ***)self + 2);
  v12 = (glwebtools::Mutex::Self *)((glwebtools::ServerSideEventListener_CurlCB::Self *)((char *)self + 8));
  if ( v4 != (glwebtools::ServerSideEventListener_CurlCB::Self **)((char *)self + 8) )
  {
    while ( 1 )
    {
      v5 = v4[2];
      v6 = *v4;
      if ( (uint32_t *)((char *)v5 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v5 - 1, 0xFFFFFFFF) <= 0 )
      {
        v11 = &v13;
        g4_std::string::Rep::M_destroy((char *)v5 - 12);
      }
      sub_4EBEE0((int)(uintptr_t)(v4));
      if ( v6 == (glwebtools::ServerSideEventListener_CurlCB::Self *)((char *)self + 8) )
        break;
      v4 = (glwebtools::ServerSideEventListener_CurlCB::Self **)v6;
    }
    v1 = self;
  }
  *((uint8_t *)v1 + 4) = 0;
  *((uint32_t *)v1 + 2) = (uint32_t)(uintptr_t)(v12);
  *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(v12);
  *((uint32_t *)v1 + 7) = 0;
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 8) = 600000;
  *(uint64_t *)((char *)v1 + 36) = glwebtools::SystemClock::GetMilliseconds();
  glwebtools::Mutex::Lock((glwebtools::ServerSideEventListener_CurlCB::Self *)((char *)v1 + 44));
  for ( i = *((uint32_t **)v1 + 13); i != (uint32_t *)((char *)v1 + 52); i = *((uint32_t **)v1 + 13) )
  {
    v8 = (void (***)(uint32_t, char *))i[2];
    if ( v8 != nullptr )
    {
      (**v8)((uint32_t)(uintptr_t)(v8), v11);
      sub_4EBEE0((int)(uintptr_t)(v8));
    }
    v9 = *((uint32_t *)v1 + 13);
    sub_1901940(v9);
    sub_4EBEE0(v9);
  }
  glwebtools::Mutex::Unlock((glwebtools::ServerSideEventListener_CurlCB::Self *)((char *)v1 + 44));
  g4_std::string::clear((char *)v1 + 60, 0, *(uint32_t *)(*((uint32_t *)v1 + 15) - 12), 0);
  g4_std::string::clear((char *)v1 + 64, 0, *(uint32_t *)(*((uint32_t *)v1 + 16) - 12), 0);
  return glwebtools::ServerSideEventStreamParser::Clear((glwebtools::ServerSideEventListener_CurlCB::Self *)((char *)v1 + 68));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventListener_CurlCB::DataWrite  (binary VA: 0x13f00a0)
// Original: glwebtools::ServerSideEventListener_CurlCB::DataWrite
// ----------------------------------------------------------------------------
size_t glwebtools::ServerSideEventListener_CurlCB::DataWrite(glwebtools::ServerSideEventListener_CurlCB::Self *self, void *a2, size_t a3)
{
  int v3;
  int v4;
  int v5;
  glwebtools::Self *v7;
  bool IsOperationSuccess;
  uint32_t *v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (9u + sizeof(_g4_t_v10)) > _g4_s0 ? (9u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 9u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  v3 = 0;
  if ( *((uint8_t *)self + 4) != 0 )
    return v3;
  v4 = *((uint32_t *)self + 6);
  if ( v4 != 0 )
  {
    v5 = G4_VCALL<int>(v4, 24, a2, a3);
    *((uint32_t *)self + 5) += v5;
    if ( v5 == a3 )
      return v5;
    return v3;
  }
  if ( *((uint32_t *)self + 7) == 0 )
    return v3;
  if ( g4_std::string::compare((int)(uintptr_t)(self) + 60, "text/event-stream") != 0 )
  {
    if ( g4_std::string::compare((int)(uintptr_t)(self) + 64, "chunked") == 0
      || (uint8_t)glwebtools::MutableData::AppendData(*((glwebtools::MutableData::Self **)self + 7), a2, a3) == 0 )
    {
      return v3;
    }
LABEL_10:
    *((uint32_t *)self + 5) += a3;
    return a3;
  }
  sub_193A970((int)(uintptr_t)(v11), a2, a3, (int)(uintptr_t)(&v10));
  v7 = (glwebtools::Self *)glwebtools::ServerSideEventStreamParser::PushStream(
                       (glwebtools::ServerSideEventListener_CurlCB::Self *)((char *)self + 68),
                       (int)(uintptr_t)(v11));
  IsOperationSuccess = glwebtools::IsOperationSuccess(v7);
  v9 = (uint32_t *)(v11[0] - 12);
  if ( IsOperationSuccess )
  {
    if ( v9 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v9);
    goto LABEL_10;
  }
  if ( v9 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v9);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventListener_CurlCB::Destroy  (binary VA: 0x13f05f0)
// Original: glwebtools::ServerSideEventListener_CurlCB::~ServerSideEventListener_CurlCB
// ----------------------------------------------------------------------------
void glwebtools::ServerSideEventListener_CurlCB::Destroy(glwebtools::ServerSideEventListener_CurlCB::Self *self)
{
  char *v1;
  int v2;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v12;
  void *v13;
  void **v14;
  unsigned int v15;
  void *v16;
  int v17;
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  uint32_t *v21;
  int v22;
  int v23;
  int v24;
  void (***v25)(uint32_t);
  char **v26;
  char *v27;
  char *v28;
  char *v29;
  uint32_t *v30;
  void (***v31)(uint32_t);
  int v32;
  char **v33;
  char *v34;
  char **v35;
  char *v36;
  char *v37;
  uint32_t *v38;
  int v39;
  int v40;
  uint32_t *v41;
  typedef char *_g4_t_v42;
  typedef char *_g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef char *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef glwebtools::Mutex::Self *_g4_t_v47;
  typedef glwebtools::Mutex::Self *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef char **_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef char _g4_t_v59;
  typedef char _g4_t_v60;
  typedef char _g4_t_v61;
  typedef char _g4_t_v62;
  typedef char _g4_t_v63;
  typedef char _g4_t_v64;
  typedef char _g4_t_v65;
  typedef char _g4_t_v66;
  typedef char _g4_t_v67;
  typedef char _g4_t_v68;
  typedef char _g4_t_v69;
  typedef char _g4_t_v70;
  typedef char _g4_t_v71;
  typedef char _g4_t_v72;
  typedef char _g4_t_v73;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v42)) > _g4_s0 ? (4u + sizeof(_g4_t_v42)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v43)) > _g4_s1 ? (20u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v44)) > _g4_s2 ? (20u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v45)) > _g4_s3 ? (20u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v46)) > _g4_s4 ? (24u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v47)) > _g4_s5 ? (28u + sizeof(_g4_t_v47)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v48)) > _g4_s6 ? (28u + sizeof(_g4_t_v48)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v49)) > _g4_s7 ? (32u + sizeof(_g4_t_v49)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v50)) > _g4_s8 ? (36u + sizeof(_g4_t_v50)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v51)) > _g4_s9 ? (40u + sizeof(_g4_t_v51)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v52)) > _g4_s10 ? (44u + sizeof(_g4_t_v52)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v53)) > _g4_s11 ? (48u + sizeof(_g4_t_v53)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v54)) > _g4_s12 ? (52u + sizeof(_g4_t_v54)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v55)) > _g4_s13 ? (56u + sizeof(_g4_t_v55)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v56)) > _g4_s14 ? (60u + sizeof(_g4_t_v56)) : _g4_s14,
    _g4_s16 = (77u + sizeof(_g4_t_v57)) > _g4_s15 ? (77u + sizeof(_g4_t_v57)) : _g4_s15,
    _g4_s17 = (78u + sizeof(_g4_t_v58)) > _g4_s16 ? (78u + sizeof(_g4_t_v58)) : _g4_s16,
    _g4_s18 = (79u + sizeof(_g4_t_v59)) > _g4_s17 ? (79u + sizeof(_g4_t_v59)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v60)) > _g4_s18 ? (80u + sizeof(_g4_t_v60)) : _g4_s18,
    _g4_s20 = (81u + sizeof(_g4_t_v61)) > _g4_s19 ? (81u + sizeof(_g4_t_v61)) : _g4_s19,
    _g4_s21 = (82u + sizeof(_g4_t_v62)) > _g4_s20 ? (82u + sizeof(_g4_t_v62)) : _g4_s20,
    _g4_s22 = (83u + sizeof(_g4_t_v63)) > _g4_s21 ? (83u + sizeof(_g4_t_v63)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v64)) > _g4_s22 ? (84u + sizeof(_g4_t_v64)) : _g4_s22,
    _g4_s24 = (85u + sizeof(_g4_t_v65)) > _g4_s23 ? (85u + sizeof(_g4_t_v65)) : _g4_s23,
    _g4_s25 = (86u + sizeof(_g4_t_v66)) > _g4_s24 ? (86u + sizeof(_g4_t_v66)) : _g4_s24,
    _g4_s26 = (87u + sizeof(_g4_t_v67)) > _g4_s25 ? (87u + sizeof(_g4_t_v67)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v68)) > _g4_s26 ? (88u + sizeof(_g4_t_v68)) : _g4_s26,
    _g4_s28 = (89u + sizeof(_g4_t_v69)) > _g4_s27 ? (89u + sizeof(_g4_t_v69)) : _g4_s27,
    _g4_s29 = (90u + sizeof(_g4_t_v70)) > _g4_s28 ? (90u + sizeof(_g4_t_v70)) : _g4_s28,
    _g4_s30 = (91u + sizeof(_g4_t_v71)) > _g4_s29 ? (91u + sizeof(_g4_t_v71)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v72)) > _g4_s30 ? (92u + sizeof(_g4_t_v72)) : _g4_s30,
    _g4_s32 = (93u + sizeof(_g4_t_v73)) > _g4_s31 ? (93u + sizeof(_g4_t_v73)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 4u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 48u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 60u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 77u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 78u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 79u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 80u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 81u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 82u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 83u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 84u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 85u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 86u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 87u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 88u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 89u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 90u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 91u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 92u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 93u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094D60);
  v52 = *((uint32_t *)self + 30);
  v54 = *((uint32_t **)self + 27);
  v53 = *((uint32_t **)self + 28);
  v51 = *((uint32_t **)self + 23);
  v55 = *((uint32_t **)self + 25);
  v56 = *((uint32_t *)self + 26);
  v50 = (char **)(v56 + 4);
  if ( v52 > v56 + 4 )
  {
    do
    {
      v43 = *v50;
      v1 = *v50;
      v46 = (int)(uintptr_t)(*v50 + 512);
      v49 = (int)(uintptr_t)(*v50 + 16);
      v47 = (glwebtools::Mutex::Self *)(*v50 + 8);
      do
      {
        v2 = *(uint32_t *)(v1 - v43 + v49);
        if ( (uint32_t *)(v2 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
        {
          v42 = &v57;
          g4_std::string::Rep::M_destroy((void *)(v2 - 12));
        }
        v3 = *(uint32_t *)((char *)v47  + ((uintptr_t)(v1) - (uintptr_t)(v43)));
        if ( (uint32_t *)(v3 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
        {
          v42 = &v58;
          g4_std::string::Rep::M_destroy((void *)(v3 - 12));
        }
        v4 = (uint32_t *)(*(uint32_t *)v1 - 12);
        if ( v4 != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v1 - 4), 0xFFFFFFFF) <= 0 )
        {
          v42 = &v59;
          g4_std::string::Rep::M_destroy(v4);
        }
        v1 += 32;
      }
      while ( v1 != (char *)v46 );
      ++v50;
    }
    while ( v52 > (unsigned int)(uintptr_t)(v50) );
  }
  if ( v52 == v56 )
  {
    if ( v54 != v51 )
    {
      v38 = v51;
      do
      {
        v39 = v38[4];
        if ( (uint32_t *)(v39 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
        {
          v42 = &v66;
          g4_std::string::Rep::M_destroy((void *)(v39 - 12));
        }
        v40 = v38[2];
        if ( (uint32_t *)(v40 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
        {
          v42 = &v67;
          g4_std::string::Rep::M_destroy((void *)(v40 - 12));
        }
        v41 = (uint32_t *)(*v38 - 12);
        if ( v41 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v38 - 4), 0xFFFFFFFF) <= 0 )
        {
          v42 = &v68;
          g4_std::string::Rep::M_destroy(v41);
        }
        v38 += 8;
      }
      while ( v54 != v38 );
    }
  }
  else
  {
    if ( v51 != v55 )
    {
      v5 = v51;
      do
      {
        v6 = v5[4];
        if ( (uint32_t *)(v6 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
        {
          v42 = &v60;
          g4_std::string::Rep::M_destroy((void *)(v6 - 12));
        }
        v7 = v5[2];
        if ( (uint32_t *)(v7 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
        {
          v42 = &v61;
          g4_std::string::Rep::M_destroy((void *)(v7 - 12));
        }
        v8 = (uint32_t *)(*v5 - 12);
        if ( v8 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v5 - 4), 0xFFFFFFFF) <= 0 )
        {
          v42 = &v62;
          g4_std::string::Rep::M_destroy(v8);
        }
        v5 += 8;
      }
      while ( v55 != v5 );
    }
    if ( v54 != v53 )
    {
      v9 = v53;
      do
      {
        v10 = v9[4];
        if ( (uint32_t *)(v10 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
        {
          v42 = &v63;
          g4_std::string::Rep::M_destroy((void *)(v10 - 12));
        }
        v11 = v9[2];
        if ( (uint32_t *)(v11 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
        {
          v42 = &v64;
          g4_std::string::Rep::M_destroy((void *)(v11 - 12));
        }
        v12 = (uint32_t *)(*v9 - 12);
        if ( v12 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v9 - 4), 0xFFFFFFFF) <= 0 )
        {
          v42 = &v65;
          g4_std::string::Rep::M_destroy(v12);
        }
        v9 += 8;
      }
      while ( v54 != v9 );
    }
  }
  v13 = *((void **)self + 21);
  if ( v13 != nullptr )
  {
    v14 = *((void ***)self + 26);
    v15 = *((uint32_t *)self + 30) + 4;
    if ( v15 > (unsigned int)(uintptr_t)(v14) )
    {
      do
      {
        v16 = *v14++;
        opDelete(v16);
      }
      while ( v15 > (unsigned int)(uintptr_t)(v14) );
      v13 = *((void **)self + 21);
    }
    opDelete(v13);
  }
  v17 = *((uint32_t *)self + 20);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    v42 = &v69;
    g4_std::string::Rep::M_destroy((void *)(v17 - 12));
  }
  v44 = *((uint32_t **)self + 18);
  v18 = *((uint32_t **)self + 17);
  if ( v44 != v18 )
  {
    v19 = *((uint32_t **)self + 17);
    do
    {
      v20 = v19[1];
      if ( (uint32_t *)(v20 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
      {
        v42 = &v70;
        g4_std::string::Rep::M_destroy((void *)(v20 - 12));
      }
      v21 = (uint32_t *)(*v19 - 12);
      if ( v21 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v19 - 4), 0xFFFFFFFF) <= 0 )
      {
        v42 = &v71;
        g4_std::string::Rep::M_destroy(v21);
      }
      v19 += 2;
    }
    while ( v44 != v19 );
    v18 = *((uint32_t **)self + 17);
  }
  if ( v18 != nullptr )
    opDelete(v18);
  v22 = *((uint32_t *)self + 16);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    v42 = &v72;
    g4_std::string::Rep::M_destroy((void *)(v22 - 12));
  }
  v23 = *((uint32_t *)self + 15);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    v42 = &v73;
    g4_std::string::Rep::M_destroy((void *)(v23 - 12));
  }
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094D40);
  v24 = *((uint32_t *)self + 6);
  if ( v24 != 0 )
  {
    (*(void (**)(uint32_t, char *))(*(uint32_t *)v24 + 12))(*((uint32_t *)self + 6), v42);
    v25 = *((void (****)(uint32_t))self + 6);
    if ( v25 != nullptr )
    {
      (**v25)(*((uint32_t *)self + 6));
      sub_4EBEE0(*((uint32_t *)self + 6));
    }
    *((uint32_t *)self + 6) = 0;
  }
  v26 = *((char ***)self + 2);
  v45 = (char *)self + 8;
  if ( v26 != (char **)((char *)self + 8) )
  {
    while ( 1 )
    {
      v27 = v26[2];
      v28 = *v26;
      if ( v27 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v27 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v27 - 12);
      }
      sub_4EBEE0((int)(uintptr_t)(v26));
      if ( v28 == v45 )
        break;
      v26 = (char **)v28;
    }
  }
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v45);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v45);
  *((uint8_t *)self + 4) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 8) = 600000;
  *(uint64_t *)((char *)self + 36) = glwebtools::SystemClock::GetMilliseconds();
  v48 = (glwebtools::Mutex::Self *)((glwebtools::ServerSideEventListener_CurlCB::Self *)((char *)self + 44));
  glwebtools::Mutex::Lock((glwebtools::ServerSideEventListener_CurlCB::Self *)((char *)self + 44));
  v29 = (char *)self + 52;
  v30 = *((uint32_t **)self + 13);
  if ( v30 != (uint32_t *)((char *)self + 52) )
  {
    do
    {
      v31 = (void (***)(uint32_t))v30[2];
      if ( v31 != nullptr )
      {
        (**v31)((uint32_t)(uintptr_t)(v31));
        sub_4EBEE0((int)(uintptr_t)(v31));
      }
      v32 = *((uint32_t *)self + 13);
      sub_1901940(v32);
      sub_4EBEE0(v32);
      v30 = *((uint32_t **)self + 13);
    }
    while ( (uint32_t *)((char *)self + 52) != v30 );
    v29 = (char *)self + 52;
  }
  glwebtools::Mutex::Unlock(v48);
  v33 = *((char ***)self + 13);
  if ( v29 != (char *)v33 )
  {
    while ( 1 )
    {
      v34 = *v33;
      sub_4EBEE0((int)(uintptr_t)(v33));
      if ( v29 == v34 )
        break;
      v33 = (char **)v34;
    }
  }
  glwebtools::Mutex::Destroy(v48);
  v35 = *((char ***)self + 2);
  if ( v35 != (char **)v45 )
  {
    while ( 1 )
    {
      v36 = v35[2];
      v37 = *v35;
      if ( v36 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v36 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v36 - 12);
      }
      sub_4EBEE0((int)(uintptr_t)(v35));
      if ( v37 == v45 )
        break;
      v35 = (char **)v37;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventListener_CurlCB::Destroy_ea13f0da0  (binary VA: 0x13f0da0)
// Original: glwebtools::ServerSideEventListener_CurlCB::~ServerSideEventListener_CurlCB
// ----------------------------------------------------------------------------
void glwebtools::ServerSideEventListener_CurlCB::Destroy_ea13f0da0(glwebtools::ServerSideEventListener_CurlCB::Self *self)
{
  glwebtools::ServerSideEventListener_CurlCB::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::ServerSideEventListener_CurlCB::HeaderWrite  (binary VA: 0x13f0de0)
// Original: glwebtools::ServerSideEventListener_CurlCB::HeaderWrite
// ----------------------------------------------------------------------------
unsigned int glwebtools::ServerSideEventListener_CurlCB::HeaderWrite(glwebtools::ServerSideEventListener_CurlCB::Self *self, uint8_t *a2, unsigned int a3)
{
  uint8_t *v3;
  int v4;
  char v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  int v10;
  char v11;
  char v12;
  char *v13;
  char v14;
  char v15;
  char *v16;
  void *v17;
  int v18;
  uint8_t *v19;
  int v20;
  int v21;
  char v22;
  uint8_t *v23;
  char v24;
  char v25;
  char v26;
  int v27;
  char v28;
  char v29;
  char v30;
  char v31;
  char *v32;
  uint8_t *v33;
  void *v34;
  unsigned int result;
  uint32_t *v36;
  void *v37;
  void *v38;
  char **v39;
  char *v40;
  char *v41;
  char v42;
  char v43;
  char v44;
  char v45;
  int v46;
  char v47;
  char v48;
  char v49;
  char v50;
  char v51;
  typedef unsigned int _g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef char *_g4_t_v54;
  typedef uint8_t *_g4_t_v55;
  typedef uint8_t *_g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef uint8_t *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef uint32_t _g4_t_v64[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v52)) > _g4_s0 ? (8u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v53)) > _g4_s1 ? (8u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v54)) > _g4_s2 ? (12u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v55)) > _g4_s3 ? (12u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v56)) > _g4_s4 ? (20u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v57)) > _g4_s5 ? (24u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v58)) > _g4_s6 ? (28u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (37u + sizeof(_g4_t_v59)) > _g4_s7 ? (37u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v60)) > _g4_s8 ? (44u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v61)) > _g4_s9 ? (48u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v62)) > _g4_s10 ? (52u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v63)) > _g4_s11 ? (56u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v64)) > _g4_s12 ? (60u + sizeof(_g4_t_v64)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 8u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 20u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 28u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 37u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 44u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 48u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 52u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 56u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);

  v3 = a2;
  if ( a3 == 0 || a2 == nullptr || *((uint8_t *)self + 4) != 0 )
    return 0;
  v4 = a3;
  while ( (uint8_t)(*v3 - 32) > 0x5Eu || *v3 == 32 )
  {
    ++v3;
    if ( --v4 == 0 )
      goto LABEL_9;
  }
  do
  {
    v5 = v3[v4 - 1];
    if ( (uint8_t)(v5 - 32) <= 0x5Eu && v5 != 32 )
      break;
    --v4;
  }
  while ( v4 != 0 );
LABEL_9:
  sub_193A970((int)(uintptr_t)(&v60), v3, v4, (int)(uintptr_t)(&v59));
  if ( memcmp((const void *)v60, "HTTP", 4u) == 0 )
  {
    v39 = *((char ***)self + 2);
    v54 = (char *)self + 8;
    if ( v39 != (char **)((char *)self + 8) )
    {
      while ( 1 )
      {
        v40 = v39[2];
        v41 = *v39;
        if ( v40 - 12 != (char *)dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)v40 - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v40 - 12);
        }
        sub_4EBEE0((int)(uintptr_t)(v39));
        if ( v41 == v54 )
          break;
        v39 = (char **)v41;
      }
    }
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v54);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v54);
    g4_std::string::clear((char *)self + 60, 0, *(uint32_t *)(*((uint32_t *)self + 15) - 12), 0);
    g4_std::string::clear((char *)self + 64, 0, *(uint32_t *)(*((uint32_t *)self + 16) - 12), 0);
  }
  else
  {
    v54 = (char *)self + 8;
  }
  v6 = sub_4EBE70(0xCu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  if ( v6 != -8 )
    g4_std::string::construct_copy(v6 + 8, &v60);
  sub_1901920(v6, v54);
  v61 = (int)(uintptr_t)(&dword_213B814);
  v62 = &dword_213B814;
  v7 = (char *)v60;
  v8 = v60 + *(uint32_t *)(v60 - 12);
  v9 = *(uint32_t *)(v60 - 12);
  v10 = v9 >> 2;
  if ( v9 >> 2 > 0 )
  {
    v11 = *(uint8_t *)v60;
    if ( *(uint8_t *)v60 != 32 && v11 != 58 )
    {
      while ( v11 != 92 && v11 != 59 && (uint8_t)(v11 - 32) <= 0x5Eu )
      {
        v12 = v7[1];
        v13 = v7 + 1;
        switch ( v12 )
        {
          case ' ':
          case ':':
          case ';':
          case '\\':
            goto LABEL_38;
          default:
            break;
        }
        if ( (uint8_t)(v12 - 32) > 0x5Eu )
          goto LABEL_38;
        v14 = v7[2];
        v13 = v7 + 2;
        switch ( v14 )
        {
          case ' ':
          case ':':
          case ';':
          case '\\':
            goto LABEL_38;
          default:
            break;
        }
        if ( (uint8_t)(v14 - 32) > 0x5Eu )
          goto LABEL_38;
        v15 = v7[3];
        v13 = v7 + 3;
        if ( v15 == 58 || v15 == 32 || v15 == 92 || v15 == 59 || (uint8_t)(v15 - 32) > 0x5Eu )
          goto LABEL_38;
        v7 += 4;
        if ( --v10 == 0 )
        {
          v9 = v8 - (uint32_t)(uintptr_t)(v7);
          goto LABEL_115;
        }
        v11 = *v7;
        if ( *v7 == 58 || v11 == 32 )
          goto LABEL_37;
      }
    }
    goto LABEL_37;
  }
LABEL_115:
  if ( v9 == 2 )
  {
    v13 = v7;
LABEL_133:
    v44 = *v13;
    if ( *v13 == 58 || v44 == 32 || v44 == 92 || v44 == 59 || (uint8_t)(v44 - 32) > 0x5Eu )
      goto LABEL_38;
    ++v13;
    goto LABEL_119;
  }
  if ( v9 == 3 )
  {
    v43 = *v7;
    if ( *v7 == 58 || v43 == 32 || v43 == 92 || v43 == 59 || (uint8_t)(v43 - 32) > 0x5Eu )
    {
LABEL_37:
      v13 = v7;
      goto LABEL_38;
    }
    v13 = v7 + 1;
    goto LABEL_133;
  }
  if ( v9 != 1 )
    goto LABEL_92;
  v13 = v7;
LABEL_119:
  v42 = *v13;
  if ( *v13 != 58 && v42 != 32 && v42 != 92 && v42 != 59 && (uint8_t)(v42 - 32) <= 0x5Eu )
    goto LABEL_92;
LABEL_38:
  if ( (char *)v8 == v13 )
    goto LABEL_92;
  v16 = &v13[-v60];
  sub_193A6F0(v64, &v60, 0, v16);
  g4_std::string::assign_str(&v61, v64);
  v17 = (void *)(v64[0] - 12);
  if ( (uint32_t *)(v64[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v64[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  v18 = (int)(uintptr_t)(sub_1937EB0(&v60, 58, v16));
  if ( v18 == -1 )
    goto LABEL_92;
  v19 = (uint8_t *)(v60 + v18);
  v57 = *(uint32_t *)(v60 - 12);
  v56 = (uint8_t *)(v57 + v60);
  v20 = v57 + v60 - (uint32_t)(uintptr_t)(v19);
  v21 = v20 >> 2;
  if ( v20 >> 2 > 0 )
  {
    while ( 1 )
    {
      v26 = *v19;
      if ( *v19 != 58 && v26 != 32 && v26 != 92 && v26 != 59 && (uint8_t)(v26 - 32) <= 0x5Eu )
        goto LABEL_64;
      v22 = v19[1];
      v23 = v19 + 1;
      if ( v22 != 58 && v22 != 32 && v22 != 92 && v22 != 59 && (uint8_t)(v22 - 32) <= 0x5Eu
        || (v24 = v19[2], v23 = v19 + 2, v24 != 58)
        && v24 != 32
        && v24 != 92
        && v24 != 59
        && (uint8_t)(v24 - 32) <= 0x5Eu
        || (v25 = v19[3], v23 = v19 + 3, v25 != 58)
        && v25 != 32
        && v25 != 92
        && v25 != 59
        && (uint8_t)(v25 - 32) <= 0x5Eu )
      {
        v19 = v23;
        goto LABEL_64;
      }
      v19 += 4;
      if ( --v21 == 0 )
      {
        v20 = v56 - v19;
        break;
      }
    }
  }
  if ( v20 == 2 )
    goto LABEL_164;
  if ( v20 == 3 )
  {
    v47 = *v19;
    if ( *v19 != 58 && v47 != 32 && v47 != 92 && v47 != 59 && (uint8_t)(v47 - 32) <= 0x5Eu )
      goto LABEL_64;
    ++v19;
LABEL_164:
    v48 = *v19;
    if ( *v19 != 58 && v48 != 32 && v48 != 92 && v48 != 59 && (uint8_t)(v48 - 32) <= 0x5Eu )
      goto LABEL_64;
    ++v19;
    goto LABEL_143;
  }
  if ( v20 != 1 )
    goto LABEL_92;
LABEL_143:
  v45 = *v19;
  if ( *v19 == 58 || v45 == 32 || v45 == 92 || v45 == 59 || (uint8_t)(v45 - 32) > 0x5Eu )
    goto LABEL_92;
LABEL_64:
  if ( v56 != v19 )
  {
    v55 = v19;
    v58 = (uint8_t *)(v56 - v19);
    v27 = (v56 - v19) >> 2;
    if ( v27 > 0 )
    {
      v28 = *v19;
      if ( *v19 == 58 || v28 == 32 )
      {
        v33 = nullptr;
        goto LABEL_90;
      }
      while ( v28 != 92 && v28 != 59 && (uint8_t)(v28 - 32) <= 0x5Eu )
      {
        v29 = v19[1];
        if ( v29 == 58 || v29 == 32 || v29 == 92 || v29 == 59 || (uint8_t)(v29 - 32) > 0x5Eu )
        {
          v33 = (uint8_t *)(v19 + 1 - v55);
          goto LABEL_90;
        }
        v30 = v19[2];
        if ( v30 == 58 || v30 == 32 || v30 == 92 || v30 == 59 || (uint8_t)(v30 - 32) > 0x5Eu )
        {
          v33 = (uint8_t *)(v19 + 2 - v55);
          goto LABEL_90;
        }
        v31 = v19[3];
        if ( v31 == 58 || v31 == 32 || v31 == 92 || v31 == 59 || (uint8_t)(v31 - 32) > 0x5Eu )
        {
          v33 = (uint8_t *)(v19 + 3 - v55);
          goto LABEL_90;
        }
        --v27;
        v32 = (char *)(v19 + 4);
        v19 += 4;
        if ( v27 == 0 )
        {
          v46 = v56 - (uint8_t *)(v32);
          goto LABEL_154;
        }
        v28 = *v32;
        if ( *v32 == 58 || v28 == 32 )
          goto LABEL_89;
      }
      goto LABEL_113;
    }
    v46 = v56 - v19;
    v32 = (char *)(v19);
LABEL_154:
    if ( v46 != 2 )
    {
      if ( v46 != 3 )
      {
        if ( v46 != 1 )
        {
LABEL_157:
          v33 = v58;
          goto LABEL_90;
        }
        goto LABEL_182;
      }
      v49 = *v19;
      if ( *v19 == 58 || v49 == 32 || v49 == 92 || v49 == 59 || (uint8_t)(v49 - 32) > 0x5Eu )
      {
LABEL_113:
        v33 = (uint8_t *)(v19 - v55);
        goto LABEL_90;
      }
      v32 = (char *)(v19 + 1);
    }
    v50 = *v32;
    if ( *v32 != 58 && v50 != 32 && v50 != 92 && v50 != 59 && (uint8_t)(v50 - 32) <= 0x5Eu )
    {
      ++v32;
LABEL_182:
      v51 = *v32;
      if ( *v32 != 58 && v51 != 32 && v51 != 92 && v51 != 59 && (uint8_t)(v51 - 32) <= 0x5Eu )
        goto LABEL_157;
    }
LABEL_89:
    v33 = (uint8_t *)(v32 - (char *)(v55));
LABEL_90:
    if ( v57 < (unsigned int)(uintptr_t)(&v55[-v60]) )
      sub_1900210("basic_string::substr");
    sub_193A6F0(&v63, &v60, &v55[-v60], v33);
    g4_std::string::assign_str(&v62, &v63);
    v34 = (void *)(v63 - 12);
    if ( (uint32_t *)(v63 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v63 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v34);
    }
  }
LABEL_92:
  if ( g4_std::string::compare((int)(uintptr_t)(&v61), "Content-Type") == 0 )
    g4_std::string::assign_str((char *)self + 60, &v62);
  if ( g4_std::string::compare((int)(uintptr_t)(&v61), "Transfer-Encoding") == 0 )
    g4_std::string::assign_str((char *)self + 64, &v62);
  result = a3;
  v36 = v62 - 3;
  if ( v62 - 3 != dword_213B808 && __sync_fetch_and_add(v62 - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v36);
    result = a3;
  }
  v37 = (void *)(v61 - 12);
  if ( (uint32_t *)(v61 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
  {
    v53 = result;
    g4_std::string::Rep::M_destroy(v37);
    result = v53;
  }
  v38 = (void *)(v60 - 12);
  if ( (uint32_t *)(v60 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v60 - 4), 0xFFFFFFFF) <= 0 )
  {
    v52 = result;
    g4_std::string::Rep::M_destroy(v38);
    return v52;
  }
  return result;
}


