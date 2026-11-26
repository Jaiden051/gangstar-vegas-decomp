#include "Core/Utils/DecompTypes.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorManager::AddFile  (binary VA: 0x13c94f0)
// Original: grapher::ActorManager::AddFile
// ----------------------------------------------------------------------------
grapher::ActorFile::Self * grapher::ActorManager::AddFile(grapher::ActorFile::Self ***self, char *a2)
{
  grapher::ActorFile::Self *ActorFile;
  void *v3;
  void *v5;
  grapher::ActorFile::Self **v6;
  int v7;
  unsigned int v8;
  size_t v9;
  unsigned int v10;
  grapher::ActorFile::Self **v11;
  grapher::ActorFile::Self **v12;
  grapher::ActorFile::Self **v13;
  grapher::ActorFile::Self **v14;
  grapher::ActorFile::Self **v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef grapher::ActorFile::Self **_g4_t_v18;
  typedef grapher::ActorFile::Self **_g4_t_v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v21)) > _g4_s5 ? (20u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v22)) > _g4_s6 ? (24u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v23)) > _g4_s7 ? (36u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v24)) > _g4_s8 ? (40u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v25)) > _g4_s9 ? (44u + sizeof(_g4_t_v25)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), a2, (int)(uintptr_t)(&v23));
  ActorFile = (grapher::ActorFile::Self *)grapher::ActorManager::GetActorFile(self, &v24);
  v3 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  if ( ActorFile == nullptr )
  {
    v16 = *(self + 8) - *(self + 7);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), a2, (int)(uintptr_t)(&v23) + 2);
    ActorFile = (grapher::ActorFile::Self *)gll_operator_new(
                                        0x3Cu,
                                        (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorManager.cpp"),
                                        520);
    grapher::ActorFile::Construct(ActorFile, self, v16, v25);
    v5 = (void *)(v25[0] - 12);
    if ( (uint32_t *)(v25[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = *(self + 8);
    if ( v6 != *(self + 9) )
    {
      v7 = 0;
      if ( v6 != nullptr )
      {
        *v6 = ActorFile;
        v7 = (int)(uintptr_t)(*(self + 8));
      }
      *(self + 8) = (grapher::ActorFile::Self **)(v7 + 4);
LABEL_9:
      grapher::ActorFile::Load(ActorFile, false);
      return ActorFile;
    }
    v8 = v6 - *(self + 7);
    v9 = 4;
    v10 = 1;
    if ( v8 != 0 )
    {
      v10 = 2 * v8;
      if ( v8 > 2 * v8 || v10 > 0x3FFFFFFF )
      {
        v9 = 0xFFFFFFFC;
        v22 = 0x3FFFFFFF;
        goto LABEL_12;
      }
      v9 = 8 * v8;
    }
    v22 = v10;
LABEL_12:
    v17 = v6 - *(self + 7);
    v20 = gll_operator_new(v9, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    v11 = (grapher::ActorFile::Self **)(v20 + 4 * v17);
    if ( v11 != nullptr )
      *v11 = ActorFile;
    v18 = *(self + 7);
    v12 = (grapher::ActorFile::Self **)v20;
    if ( v6 != v18 )
    {
      v13 = *(self + 7);
      do
      {
        if ( v12 != nullptr )
          *v12 = *v13;
        ++v13;
        ++v12;
      }
      while ( v6 != v13 );
      v12 = (grapher::ActorFile::Self **)(v20 + 4 * ((unsigned int)((char *)v6 - (char *)(v18 + 1)) >> 2) + 4);
    }
    v19 = v12 + 1;
    v21 = (char *)*(self + 8);
    if ( v6 != (grapher::ActorFile::Self **)v21 )
    {
      v14 = v6;
      v15 = v12 + 1;
      do
      {
        if ( v15 != nullptr )
          *v15 = *v14;
        ++v14;
        ++v15;
      }
      while ( v21 != (char *)v14 );
      v19 += ((unsigned int)(v21 - (char *)(v6 + 1)) >> 2) + 1;
    }
    if ( *(self + 7) != nullptr )
      sub_4EB800((int)(uintptr_t)(*(self + 7)));
    *(self + 7) = (grapher::ActorFile::Self **)v20;
    *(self + 8) = v19;
    *(self + 9) = (grapher::ActorFile::Self **)(v20 + 4 * v22);
    goto LABEL_9;
  }
  return ActorFile;
}

