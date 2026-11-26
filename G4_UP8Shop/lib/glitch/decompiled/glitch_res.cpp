#include "Core/Utils/DecompTypes.h"
#include "glitch_res.h"

// ----------------------------------------------------------------------------
// Function: glitch::res::File::Init  (binary VA: 0xcde560)
// Original: glitch::res::File::Init
// ----------------------------------------------------------------------------
int glitch::res::File::Init(glitch::res::File::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  int result;
  int16_t v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  unsigned int *v13;
  unsigned int v14;
  char *v15;
  size_t v16;
  volatile int32_t *v17;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v18;
  int v19;
  volatile int32_t *v20;
  unsigned int v21;
  unsigned int v22;
  size_t v23;
  volatile int32_t *v24;
  volatile int32_t **v25;
  int v26;
  volatile int32_t *v27;
  typedef void *_g4_t_v28;
  typedef bool _g4_t_v29;
  typedef bool _g4_t_v30;
  typedef unsigned int **_g4_t_v31;
  typedef size_t _g4_t_v32;
  typedef size_t _g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef size_t _g4_t_v35;
  typedef int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef unsigned int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef char _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef char *_g4_t_v49;
  typedef unsigned int *_g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef void *_g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef void *_g4_t_v55;
  typedef volatile int32_t *_g4_t_v56[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v28)) > _g4_s0 ? (4u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v29)) > _g4_s1 ? (8u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v30)) > _g4_s2 ? (8u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v31)) > _g4_s3 ? (24u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v32)) > _g4_s4 ? (32u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v33)) > _g4_s5 ? (32u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v34)) > _g4_s6 ? (32u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v35)) > _g4_s7 ? (32u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v36)) > _g4_s8 ? (40u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v37)) > _g4_s9 ? (44u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v38)) > _g4_s10 ? (48u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v39)) > _g4_s11 ? (52u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v40)) > _g4_s12 ? (56u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v41)) > _g4_s13 ? (56u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v42)) > _g4_s14 ? (60u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v43)) > _g4_s15 ? (64u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v44)) > _g4_s16 ? (64u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v45)) > _g4_s17 ? (64u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v46)) > _g4_s18 ? (68u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v47)) > _g4_s19 ? (72u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v48)) > _g4_s20 ? (72u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v49)) > _g4_s21 ? (72u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v50)) > _g4_s22 ? (72u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v51)) > _g4_s23 ? (72u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v52)) > _g4_s24 ? (76u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v53)) > _g4_s25 ? (76u + sizeof(_g4_t_v53)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v54)) > _g4_s26 ? (76u + sizeof(_g4_t_v54)) : _g4_s26,
    _g4_s28 = (76u + sizeof(_g4_t_v55)) > _g4_s27 ? (76u + sizeof(_g4_t_v55)) : _g4_s27,
    _g4_s29 = (80u + sizeof(_g4_t_v56)) > _g4_s28 ? (80u + sizeof(_g4_t_v56)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 64u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 64u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 68u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 72u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 72u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 72u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 72u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 76u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 76u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 76u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 76u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 80u);

  v1 = 0;
  v2 = *(uint32_t *)self;
  v3 = *((uint32_t *)self + 2);
  v4 = *(uint32_t *)(*(uint32_t *)self + 12);
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 4) = v4;
  if ( v3 != 0 )
  {
    v1 = 4 * *(uint32_t *)(v2 + 16);
    *((uint32_t *)self + 9) = v1;
  }
  if ( *((uint32_t *)self + 3) != 0 && glitch::res::File::ExtractStringTable != 0 )
    *((uint32_t *)self + 9) = *(uint32_t *)(v2 + 32) + v1 - *(uint32_t *)(v2 + 28);
  *((uint32_t *)self + 10) = *(uint32_t *)(v2 + 40);
  *((uint32_t *)self + 8) = v4 - *(uint32_t *)(v2 + 40);
  v52 = *(uint32_t *)(v2 + 20);
  v5 = v52 >> 31;
  result = -1;
  glitch::res::File::ExternalFilePtr[v52 >> 31] = v2;
  if ( *(uint8_t *)v2 == 66 && *(uint8_t *)(v2 + 1) == 82 && *(uint8_t *)(v2 + 2) == 69 && *(uint8_t *)(v2 + 3) == 83 )
  {
    v7 = *(uint16_t *)(v2 + 6);
    result = 0;
    if ( v7 >= 0 )
    {
      *(uint16_t *)(v2 + 6) = v7 | 0x8000;
      v8 = *((uint32_t *)self + 2);
      if ( v8 != 0 )
      {
        v40 = *((uint32_t *)self + 2);
        v46 = *(uint32_t *)(v2 + 16);
        *(uint32_t *)(v2 + 24) = v8;
        v47 = 4 * v46;
        v9 = *(uint32_t *)(v2 + 8);
        if ( glitch::res::File::ExtractStringTable != 0 )
        {
          v43 = *(uint32_t *)(v2 + 32) - *(uint32_t *)(v2 + 28);
          glitch::res::File::SizeOfHeader = *(uint32_t *)(v2 + 8);
          v42 = v9 + v47;
          v37 = v9 + v47 + v43;
          v10 = v9 + v47;
        }
        else
        {
          glitch::res::File::SizeOfHeader = *(uint32_t *)(v2 + 8);
          v10 = v47 + v9;
          v42 = v10;
          v37 = v10;
        }
        v36 = *((uint32_t *)self + 3);
        glitch::res::File::ExternalFileOffsetTableSize[v5] = v10;
        glitch::res::File::ExternalFileStringTableSize[v5] = v37;
        result = 0;
        if ( v46 != 0 )
        {
          v11 = v40;
          v12 = 0;
          while ( 1 )
          {
            v13 = (unsigned int *)(v11 + 4 * v12);
            v39 = v42;
            v14 = *v13;
            v31 = (unsigned int **)v13;
            v15 = (char *)(v14 - v52);
            if ( v14 - v52 > *((uint32_t *)self + 4) )
            {
              v44 = 1;
              v41 = glitch::res::File::ExternalFilePtr[v14 >> 31];
              v52 = v14 & 0x80000000;
              v48 = glitch::res::File::ExternalFileOffsetTableSize[v14 >> 31];
              v38 = glitch::res::File::ExternalFileStringTableSize[v14 >> 31];
              v15 = (char *)v14;
            }
            else
            {
              v41 = v2;
              v38 = v37;
              v48 = v42;
              v44 = 0;
            }
            if ( (unsigned int)(uintptr_t)(v15) < v48 )
            {
              *v31 = (unsigned int *)(v41 - v52 + v14);
            }
            else if ( (unsigned int)(uintptr_t)(v15) < v37 && *((uint32_t *)self + 3) != 0 )
            {
              v49 = &v15[-v48];
              v53 = nullptr;
              v16 = *(uint32_t *)&v49[v36 - 4];
              if ( v16 != -1 )
              {
                v34 = *(uint32_t *)&v49[v36 - 4];
                v53 = (void *)glitch::core::allocProcessBuffer(v34 + 1, (int)(uintptr_t)(v28));
                v16 = v34;
              }
              v32 = v16;
              memcpy(v53, &v49[v36], v16);
              *((uint8_t *)v53 + v32) = 0;
              v17 = (volatile int32_t *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                 (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)v53,
                                                 (const char *)&dword_0 + 1,
                                                 v29);
              v56[0] = v17;
              v18 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)self + 6);
              if ( v18 == *((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)self + 7) )
              {
                g4_std::vector_SSharedString_9ffb5c::M_insert_aux((int *)self + 5, v18, v56);
                v17 = v56[0];
              }
              else
              {
                v19 = 0;
                if ( v18 != nullptr )
                {
                  *v18 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)v17;
                  if ( v17 != nullptr )
                    __sync_add_and_fetch(v17, 1u);
                  v17 = v56[0];
                  v19 = *((uint32_t *)self + 6);
                }
                *((uint32_t *)self + 6) = v19 + 4;
              }
              v20 = nullptr;
              if ( v17 != nullptr )
                v20 = v17 + 1;
              *v31 = (unsigned int *)v20;
              boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy((boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)v56);
              if ( v53 != nullptr )
                glitch::core::releaseProcessBuffer((glitch::core::Self *)v53, v28);
            }
            else
            {
              *v31 = (unsigned int *)(v14 + v41 + glitch::res::File::SizeOfHeader - v38 - v52);
            }
            if ( v44 == 0 && v12 != 0 )
            {
              v54 = *(uint32_t *)(v2 + 20);
              v50 = *v31;
              v21 = **v31;
              v22 = v21 - v54;
              if ( v21 - v54 > *((uint32_t *)self + 4) )
              {
                v45 = glitch::res::File::ExternalFilePtr[v21 >> 31];
                v54 = v21 & 0x80000000;
                v39 = glitch::res::File::ExternalFileOffsetTableSize[v21 >> 31];
                v38 = glitch::res::File::ExternalFileStringTableSize[v21 >> 31];
                v22 = **v31;
                if ( v39 > v21 )
                {
LABEL_60:
                  *v50 = v45 - v54 + v21;
                  goto LABEL_40;
                }
              }
              else
              {
                v45 = v2;
                if ( v42 > v22 )
                  goto LABEL_60;
              }
              if ( v22 >= v37 || v22 == v39 )
              {
                *v50 = v45 + glitch::res::File::SizeOfHeader - v38 - v54 + v21;
              }
              else
              {
                v51 = v22 - v39;
                v55 = nullptr;
                v23 = *(uint32_t *)(v36 + v22 - v39 - 4);
                if ( v23 != -1 )
                {
                  v35 = v23;
                  v55 = (void *)glitch::core::allocProcessBuffer(v23 + 1, (int)(uintptr_t)(v28));
                  v23 = v35;
                }
                v33 = v23;
                memcpy(v55, (const void *)(v51 + v36), v23);
                *((uint8_t *)v55 + v33) = 0;
                v24 = (volatile int32_t *)glitch::core::detail::SSharedStringHeapEntry::SData::get(
                                                   (glitch::core::detail::SSharedStringHeapEntry::SData::Self *)v55,
                                                   (const char *)&dword_0 + 1,
                                                   v30);
                v56[0] = v24;
                v25 = *((volatile int32_t ***)self + 6);
                if ( v25 == *((volatile int32_t ***)self + 7) )
                {
                  g4_std::vector_SSharedString_9ffb5c::M_insert_aux(
                    (int *)self + 5,
                    *((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)self + 6),
                    v56);
                  v24 = v56[0];
                }
                else
                {
                  v26 = 0;
                  if ( v25 != nullptr )
                  {
                    *v25 = v24;
                    if ( v24 != nullptr )
                      __sync_add_and_fetch(v24, 1u);
                    v26 = *((uint32_t *)self + 6);
                    v24 = v56[0];
                  }
                  *((uint32_t *)self + 6) = v26 + 4;
                }
                v27 = v24 + 1;
                if ( v24 == nullptr )
                  v27 = nullptr;
                **v31 = (unsigned int)(uintptr_t)(v27);
                boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy((boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)v56);
                if ( v55 != nullptr )
                  glitch::core::releaseProcessBuffer((glitch::core::Self *)v55, v28);
              }
            }
LABEL_40:
            if ( *(uint32_t *)(v2 + 16) <= (unsigned int)++v12 )
              return 0;
            v52 = *(uint32_t *)(v2 + 20);
            v11 = *(uint32_t *)(v2 + 24);
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::res::File::Init  (binary VA: 0xcdeaf0)
// Original: glitch::res::File::Init
// ----------------------------------------------------------------------------
int glitch::res::File::Init(glitch::res::File::Self *self, glitch::res::FileReader::Self *a2)
{
  glitch::res::FileReader::Self *v2;
  void *v3;
  glitch::collada::CColladaDatabase::Self *v5;
  glitch::collada::CColladaDatabase::Self *v6;
  int v7;
  volatile int32_t **v8;
  volatile int32_t **v9;
  void *v10;
  int v11;
  size_t v12;
  unsigned int v13;
  uint32_t *v14;
  volatile int32_t *v15;
  bool v16;
  boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *v17;
  boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *v18;
  boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *v19;
  glitch::res::File::Self *v20;
  int v21;
  volatile int32_t **v22;
  boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *v23;
  glitch::res::File::Self *v24;
  uint8_t v25;
  unsigned int v26;
  volatile int32_t **v27;
  volatile int32_t *v28;
  volatile int32_t *v29;
  boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *v30;
  int v31;
  volatile int32_t **v32;
  volatile int32_t **v33;
  volatile int32_t *v34;
  volatile int32_t *v35;
  volatile int32_t **v36;
  volatile int32_t **v37;
  volatile int32_t **v38;
  volatile int32_t *v39;
  typedef boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *_g4_t_v40;
  typedef boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *_g4_t_v41;
  typedef boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *_g4_t_v42;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v43;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v44;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v45;
  typedef uint8_t *_g4_t_v46;
  typedef boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef signed int _g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef void *_g4_t_v51;
  typedef void *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef size_t _g4_t_v54;
  typedef size_t _g4_t_v55;
  typedef size_t _g4_t_v56;
  typedef size_t _g4_t_n;
  typedef bool _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef size_t _g4_t_nd;
  typedef glitch::res::File::Self *_g4_t_v62;
  typedef volatile int32_t *_g4_t_v63;
  typedef volatile int32_t *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef volatile int32_t *_g4_t_v66;
  typedef glitch::collada::CColladaDatabase::Self *_g4_t_v67;
  typedef bool _g4_t_v68;
  typedef void *_g4_t_v69;
  typedef size_t _g4_t_v70;
  typedef int _g4_t_v71;
  typedef void *_g4_t_v72;
  typedef volatile int32_t **_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint8_t _g4_t_v78[264];
  typedef glitch::res::File::Self **_g4_t_v79;
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (0u + sizeof(_g4_t_v40)) > _g4_s0 ? (0u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v41)) > _g4_s1 ? (0u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v42)) > _g4_s2 ? (0u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v43)) > _g4_s3 ? (40u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v44)) > _g4_s4 ? (40u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v45)) > _g4_s5 ? (40u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v46)) > _g4_s6 ? (44u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v47)) > _g4_s7 ? (48u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v48)) > _g4_s8 ? (52u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v49)) > _g4_s9 ? (52u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v50)) > _g4_s10 ? (56u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v51)) > _g4_s11 ? (60u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v52)) > _g4_s12 ? (64u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v53)) > _g4_s13 ? (68u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v54)) > _g4_s14 ? (68u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v55)) > _g4_s15 ? (68u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v56)) > _g4_s16 ? (68u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_n)) > _g4_s17 ? (72u + sizeof(_g4_t_n)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_na)) > _g4_s18 ? (72u + sizeof(_g4_t_na)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_nb)) > _g4_s19 ? (72u + sizeof(_g4_t_nb)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_nc)) > _g4_s20 ? (72u + sizeof(_g4_t_nc)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_nd)) > _g4_s21 ? (72u + sizeof(_g4_t_nd)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v62)) > _g4_s22 ? (76u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v63)) > _g4_s23 ? (80u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v64)) > _g4_s24 ? (96u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v65)) > _g4_s25 ? (104u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v66)) > _g4_s26 ? (108u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v67)) > _g4_s27 ? (112u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (116u + sizeof(_g4_t_v68)) > _g4_s28 ? (116u + sizeof(_g4_t_v68)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_v69)) > _g4_s29 ? (120u + sizeof(_g4_t_v69)) : _g4_s29,
    _g4_s31 = (124u + sizeof(_g4_t_v70)) > _g4_s30 ? (124u + sizeof(_g4_t_v70)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v71)) > _g4_s31 ? (128u + sizeof(_g4_t_v71)) : _g4_s31,
    _g4_s33 = (132u + sizeof(_g4_t_v72)) > _g4_s32 ? (132u + sizeof(_g4_t_v72)) : _g4_s32,
    _g4_s34 = (136u + sizeof(_g4_t_v73)) > _g4_s33 ? (136u + sizeof(_g4_t_v73)) : _g4_s33,
    _g4_s35 = (140u + sizeof(_g4_t_v74)) > _g4_s34 ? (140u + sizeof(_g4_t_v74)) : _g4_s34,
    _g4_s36 = (144u + sizeof(_g4_t_v75)) > _g4_s35 ? (144u + sizeof(_g4_t_v75)) : _g4_s35,
    _g4_s37 = (148u + sizeof(_g4_t_v76)) > _g4_s36 ? (148u + sizeof(_g4_t_v76)) : _g4_s36,
    _g4_s38 = (152u + sizeof(_g4_t_v77)) > _g4_s37 ? (152u + sizeof(_g4_t_v77)) : _g4_s37,
    _g4_s39 = (160u + sizeof(_g4_t_v78)) > _g4_s38 ? (160u + sizeof(_g4_t_v78)) : _g4_s38,
    _g4_s40 = (424u + sizeof(_g4_t_v79)) > _g4_s39 ? (424u + sizeof(_g4_t_v79)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 52u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 52u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 56u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 60u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 64u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 68u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 72u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 72u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 72u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 72u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 72u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 76u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 80u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 96u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 104u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 108u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 112u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 116u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 120u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 124u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 128u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 132u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 136u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 140u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 144u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 148u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 152u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 160u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 424u);

  v79 = &self;
  v2 = a2;
  v62 = self;
  *((uint32_t *)v62 + 4) = G4_VCALL<int>(a2, 20);
  v3 = (void *)opNew(0x2Cu);
  G4_VCALL<void>(v2, 12, v3, 44);
  if ( *(uint8_t *)v3 != 66 || *((uint8_t *)v3 + 1) != 82 || *((uint8_t *)v3 + 2) != 69 || *((uint8_t *)v3 + 3) != 83 )
    return *((uint8_t *)v62 + 4) ^ 1;
  v5 = *((glitch::collada::CColladaDatabase::Self **)v3 + 9);
  if ( *((uint32_t *)v3 + 5) == 0 )
  {
    v31 = *(uint32_t *)v2;
    v65 = 0;
    v45 = v5;
    (*(void (**)(glitch::res::FileReader::Self *, glitch::collada::CColladaDatabase::Self *, uint32_t))(v31 + 16))(v2, v5, 0);
    G4_VCALL<void>(v2, 12, &v65, 4);
    if ( v65 > 1 )
    {
      G4_VCALL<void>(v2, 16, (int)(uintptr_t)(v45) + 4, 0);
      G4_VCALL<void>(v2, 12, v78, (v65 + 3) & 0xFFFFFFFC);
      glitch::collada::CResFileManager::get(
        (glitch::collada::CResFileManager::Self *)&v66,
        glitch::collada::CResFileManager::Inst,
        (glitch::collada::CColladaDatabase::Self *)v78,
        false);
      if ( v66 != nullptr )
        sub_5459C0(v66);
    }
  }
  n = *((uint32_t *)v3 + 2);
  G4_VCALL<void>(v2, 16, n, 0);
  v48 = 0;
  v53 = 4 * *((uint32_t *)v3 + 4);
  if ( glitch::res::File::ExtractStringTable != 0 )
    v48 = *((uint32_t *)v3 + 8) - *((uint32_t *)v3 + 7);
  *((uint32_t *)v62 + 8) = *((uint32_t *)v62 + 4) - v53 - v48 - *((uint32_t *)v3 + 10);
  v52 = (void *)opNewArray(v53);
  v51 = nullptr;
  if ( glitch::res::File::ExtractStringTable != 0 )
    v51 = (void *)opNewArray(v48);
  v43 = (glitch::collada::CColladaDatabase::Self *)sub_4EBDC0(*((uint32_t *)v62 + 8));
  memcpy(v43, v3, n);
  G4_VCALL<void>(v2, 12, v52, v53);
  v6 = v43;
  if ( v48 != 0 )
  {
    (*(void (**)(glitch::collada::CColladaDatabase::Self *, glitch::res::FileReader::Self *, void *, int))(*(uint32_t *)v2 + 12))(
      v43,
      v2,
      v51,
      v48);
    v6 = v43;
  }
  v44 = v6;
  G4_VCALL<void>(v2, 12, (size_t)v6 + n, *((uint32_t *)v62 + 8) - n);
  opDelete(v3);
  v69 = v52;
  v67 = v44;
  v68 = false;
  v70 = (size_t)v51;
  v72 = nullptr;
  v73 = nullptr;
  v74 = 0;
  if ( v44 != nullptr )
  {
    v7 = glitch::res::File::Init((glitch::res::File::Self *)&v67);
    v8 = v73;
    v9 = (volatile int32_t **)v72;
    na = v7 == 0;
    v54 = v70;
    v68 = v7 == 0;
    v46 = (uint8_t *)(v72);
    v10 = v69;
    v49 = ((char *)v73 - (char *)((uint8_t *)v72)) >> 2;
    v50 = v49;
  }
  else
  {
    v54 = (size_t)v51;
    v10 = v52;
    v50 = 0;
    v49 = 0;
    v46 = nullptr;
    v8 = nullptr;
    v9 = nullptr;
    na = false;
  }
  *(uint32_t *)v62 = (uint32_t)(uintptr_t)(v67);
  *((uint32_t *)v62 + 2) = (uint32_t)(uintptr_t)(v10);
  *((uint8_t *)v62 + 4) = na;
  v11 = v71;
  *((uint32_t *)v62 + 3) = v54;
  *((uint32_t *)v62 + 4) = v11;
  v12 = *((uint32_t *)v62 + 5);
  v55 = v12;
  v13 = (int)(*((uint32_t *)v62 + 7) - v12) >> 2;
  if ( v13 < v50 )
  {
    v56 = 0;
    nb = 0;
    if ( v50 != 0 )
    {
      if ( v50 > 0x3FFFFFFF )
        sub_18FFEE0(v50, v13);
      v56 = 4 * v50;
      nb = opNew(4 * v50);
    }
    if ( v9 != v8 )
    {
      v14 = (uint32_t *)nb;
      do
      {
        if ( v14 != nullptr )
        {
          v15 = *v9;
          v16 = *v9 == nullptr;
          *v14 = (uint32_t)(uintptr_t)(*v9);
          if ( !v16 )
            __sync_add_and_fetch(v15, 1u);
        }
        ++v9;
        ++v14;
      }
      while ( v9 != v8 );
    }
    v17 = *((boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> **)v62 + 5);
    v18 = *((boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> **)v62 + 6);
    v19 = v17;
    if ( v18 != v17 )
    {
      do
      {
        v40 = v19;
        v19 = (boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)((char *)v19 + 4);
        boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v40);
      }
      while ( v18 != v19 );
      v17 = *((boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> **)v62 + 5);
    }
    if ( v17 != nullptr )
      opDelete(v17);
    v20 = v62;
    *((uint32_t *)v62 + 5) = nb;
    v21 = v56 + nb;
    *((uint32_t *)v62 + 7) = v56 + nb;
    goto LABEL_31;
  }
  v47 = *((boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> **)v62 + 6);
  v26 = (int)((int)(uintptr_t)(v47) - v12) >> 2;
  if ( v26 < v50 )
  {
    if ( ((char *)&v9[v26] - (char *)(v46)) >> 2 > 0 )
    {
      nd = ((char *)&v9[v26] - (char *)(v46)) >> 2;
      v32 = v9;
      v33 = *((volatile int32_t ***)v62 + 5);
      do
      {
        v34 = *v32;
        v35 = nullptr;
        v64 = *v32;
        if ( v64 != nullptr )
        {
          __sync_add_and_fetch(v34, 1u);
          v35 = v64;
        }
        ++v32;
        v64 = *v33;
        *v33++ = v35;
        boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy((boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)&v64);
        --nd;
      }
      while ( nd != 0 );
      v55 = *((uint32_t *)v62 + 5);
    }
    v36 = *((volatile int32_t ***)v62 + 6);
    v37 = v73;
    v38 = (volatile int32_t **)((char *)v72 + (((unsigned int)(uintptr_t)(v36) - v55) & 0xFFFFFFFC));
    if ( v73 == v38 )
    {
      v21 = v55 + 4 * v50;
      v20 = v62;
      goto LABEL_31;
    }
    do
    {
      if ( v36 != nullptr )
      {
        v39 = *v38;
        v16 = *v38 == nullptr;
        *v36 = *v38;
        if ( !v16 )
          __sync_add_and_fetch(v39, 1u);
      }
      ++v38;
      ++v36;
    }
    while ( v37 != v38 );
  }
  else
  {
    if ( v49 > 0 )
    {
      v27 = *((volatile int32_t ***)v62 + 5);
      for ( nc = v49; nc != 0; --nc )
      {
        v28 = *v9;
        v29 = nullptr;
        v63 = *v9;
        if ( v63 != nullptr )
        {
          __sync_add_and_fetch(v28, 1u);
          v29 = v63;
        }
        ++v9;
        v63 = *v27;
        *v27++ = v29;
        boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy((boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)&v63);
      }
      v12 = v55 + 4 * v49;
    }
    if ( (boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)v12 != v47 )
    {
      v30 = (boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)v12;
      do
      {
        v42 = v30;
        v30 = (boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)((char *)v30 + 4);
        boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v42);
      }
      while ( v47 != v30 );
      v20 = v62;
      v21 = *((uint32_t *)v62 + 5) + 4 * v50;
      goto LABEL_31;
    }
  }
  v20 = v62;
  v21 = *((uint32_t *)v62 + 5) + 4 * v50;
LABEL_31:
  *((uint32_t *)v20 + 6) = v21;
  *((uint32_t *)v20 + 8) = v75;
  v22 = v73;
  v23 = (boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)v72;
  *((uint32_t *)v20 + 9) = v76;
  *((uint32_t *)v20 + 10) = v77;
  if ( v22 != (volatile int32_t **)v23 )
  {
    do
    {
      v41 = v23;
      v23 = (boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)((char *)v23 + 4);
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v41);
    }
    while ( v22 != (volatile int32_t **)v23 );
    v23 = (boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)v72;
  }
  if ( v23 != nullptr )
    opDelete(v23);
  if ( v52 != nullptr )
    opDeleteArray(v52);
  v24 = v62;
  *((uint32_t *)v62 + 2) = 0;
  if ( v51 != nullptr )
  {
    opDeleteArray(v51);
    v24 = v62;
  }
  v25 = *((uint8_t *)v24 + 4);
  *((uint32_t *)v24 + 3) = 0;
  return v25 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::res::onDemandReader::Destroy  (binary VA: 0xdcb7e0)
// Original: glitch::res::onDemandReader::~onDemandReader
// ----------------------------------------------------------------------------
void glitch::res::onDemandReader::Destroy(glitch::res::onDemandReader::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207FF78);
}

// ----------------------------------------------------------------------------
// Function: glitch::res::FileReader::Destroy  (binary VA: 0xdcb800)
// Original: glitch::res::FileReader::~FileReader
// ----------------------------------------------------------------------------
void glitch::res::FileReader::Destroy(glitch::res::FileReader::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207BB08);
}

// ----------------------------------------------------------------------------
// Function: glitch::res::FileReader::Destroy_eadce010  (binary VA: 0xdce010)
// Original: glitch::res::FileReader::~FileReader
// ----------------------------------------------------------------------------
void glitch::res::FileReader::Destroy_eadce010(glitch::res::FileReader::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207BB08);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::res::onDemandReader::Destroy_eadce040  (binary VA: 0xdce040)
// Original: glitch::res::onDemandReader::~onDemandReader
// ----------------------------------------------------------------------------
void glitch::res::onDemandReader::Destroy_eadce040(glitch::res::onDemandReader::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_207FF78);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::res::File::Init  (binary VA: 0xde1700)
// Original: glitch::res::File::Init
// ----------------------------------------------------------------------------
int glitch::res::File::Init(glitch::res::File::Self *self, void *a2)
{
  int v2;
  volatile int32_t **v3;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v4;
  int v5;
  int v6;
  char *v7;
  unsigned int v8;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v9;
  volatile int32_t *v10;
  bool v11;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v12;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v13;
  glitch::res::File::Self *v14;
  int v15;
  volatile int32_t **v17;
  unsigned int v18;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v19;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v20;
  int i;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v22;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v23;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v24;
  volatile int32_t **v25;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v26;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v27;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v28;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v29;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v30;
  volatile int32_t **v31;
  volatile int32_t *v32;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self **_g4_t_v33;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self **_g4_t_v34;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self **_g4_t_v35;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self **_g4_t_v36;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self **_g4_t_v37;
  typedef int _g4_t_v38;
  typedef volatile int32_t **_g4_t_v39;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self **_g4_t_v40;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self **_g4_t_v41;
  typedef bool _g4_t_v42;
  typedef int _g4_t_v43;
  typedef volatile int32_t **_g4_t_v44;
  typedef unsigned int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v49;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v50;
  typedef void *_g4_t_v51;
  typedef bool _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self **_g4_t_v56;
  typedef volatile int32_t **_g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v33)) > _g4_s0 ? (0u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v34)) > _g4_s1 ? (0u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v35)) > _g4_s2 ? (0u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v36)) > _g4_s3 ? (24u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v37)) > _g4_s4 ? (24u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v38)) > _g4_s5 ? (28u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v39)) > _g4_s6 ? (28u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v40)) > _g4_s7 ? (32u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v41)) > _g4_s8 ? (32u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v42)) > _g4_s9 ? (36u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v43)) > _g4_s10 ? (36u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v44)) > _g4_s11 ? (36u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v45)) > _g4_s12 ? (40u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v46)) > _g4_s13 ? (44u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v47)) > _g4_s14 ? (44u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v48)) > _g4_s15 ? (44u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v49)) > _g4_s16 ? (48u + sizeof(_g4_t_v49)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v50)) > _g4_s17 ? (64u + sizeof(_g4_t_v50)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v51)) > _g4_s18 ? (80u + sizeof(_g4_t_v51)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v52)) > _g4_s19 ? (84u + sizeof(_g4_t_v52)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v53)) > _g4_s20 ? (88u + sizeof(_g4_t_v53)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v54)) > _g4_s21 ? (92u + sizeof(_g4_t_v54)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v55)) > _g4_s22 ? (96u + sizeof(_g4_t_v55)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v56)) > _g4_s23 ? (100u + sizeof(_g4_t_v56)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v57)) > _g4_s24 ? (104u + sizeof(_g4_t_v57)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v58)) > _g4_s25 ? (108u + sizeof(_g4_t_v58)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v59)) > _g4_s26 ? (112u + sizeof(_g4_t_v59)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v60)) > _g4_s27 ? (116u + sizeof(_g4_t_v60)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v61)) > _g4_s28 ? (120u + sizeof(_g4_t_v61)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 80u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 84u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 100u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 104u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 108u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 112u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 116u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 120u);

  v51 = a2;
  v52 = false;
  v53 = 0;
  v54 = 0;
  v56 = nullptr;
  v57 = nullptr;
  v58 = 0;
  if ( a2 != nullptr )
  {
    v2 = glitch::res::File::Init((glitch::res::File::Self *)&v51);
    v3 = v57;
    v42 = v2 == 0;
    v4 = v56;
    v52 = v2 == 0;
    v5 = v53;
    v38 = v54;
    v40 = v56;
    v46 = ((char *)v57 - (char *)v56) >> 2;
    v45 = v46;
  }
  else
  {
    v45 = 0;
    v46 = 0;
    v40 = nullptr;
    v3 = nullptr;
    v4 = nullptr;
    v38 = 0;
    v5 = 0;
    v42 = false;
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v51);
  *((uint32_t *)self + 2) = v5;
  *((uint8_t *)self + 4) = v42;
  v6 = v55;
  *((uint32_t *)self + 3) = v38;
  *((uint32_t *)self + 4) = v6;
  v7 = *((char **)self + 5);
  v8 = (*((uint32_t *)self + 7) - (int)(uintptr_t)(v7)) >> 2;
  if ( v8 >= v45 )
  {
    v17 = *((volatile int32_t ***)self + 6);
    v18 = ((char *)v17 - v7) >> 2;
    if ( v18 < v45 )
    {
      v44 = (volatile int32_t **)&v4[v18];
      v48 = ((char *)v44 - (char *)v40) >> 2;
      if ( v48 > 0 )
      {
        v26 = v4;
        v27 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)self + 5);
        v28 = v26;
        do
        {
          v29 = *v28;
          v30 = nullptr;
          v50 = *v28;
          if ( v50 != nullptr )
          {
            __sync_add_and_fetch((volatile int32_t *)v29, 1u);
            v30 = v50;
          }
          v50 = *v27;
          *v27 = v30;
          v37 = v28;
          boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v50);
          ++v27;
          v28 = v37 + 1;
          --v48;
        }
        while ( v48 != 0 );
        v4 = v56;
        v3 = v57;
        v17 = *((volatile int32_t ***)self + 6);
        v7 = *((char **)self + 5);
        v44 = (volatile int32_t **)((char *)v56 + (((char *)v17 - v7) & 0xFFFFFFFC));
      }
      v31 = v44;
      if ( v3 == v44 )
      {
        v15 = (int)(uintptr_t)(&v7[4 * v45]);
        v14 = self;
        goto LABEL_19;
      }
      do
      {
        if ( v17 != nullptr )
        {
          v32 = *v31;
          v11 = *v31 == nullptr;
          *v17 = *v31;
          if ( !v11 )
            __sync_add_and_fetch(v32, 1u);
        }
        ++v31;
        ++v17;
      }
      while ( v31 != v3 );
    }
    else
    {
      if ( v46 > 0 )
      {
        v19 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)self + 5);
        v41 = v19;
        v20 = v4;
        v39 = *((volatile int32_t ***)self + 6);
        for ( i = v46; i != 0; --i )
        {
          v22 = *v20;
          v23 = nullptr;
          v49 = *v20;
          if ( v49 != nullptr )
          {
            __sync_add_and_fetch((volatile int32_t *)v22, 1u);
            v23 = v49;
          }
          v49 = *v19;
          *v19 = v23;
          v36 = v20;
          ++v19;
          boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v49);
          v20 = v36 + 1;
        }
        v17 = v39;
        v7 = (char *)&v41[v46];
      }
      v24 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v7;
      v25 = v17;
      if ( v17 == (volatile int32_t **)v7 )
      {
        v14 = self;
        v3 = v57;
        v4 = v56;
        v15 = *((uint32_t *)self + 5) + 4 * v45;
        goto LABEL_19;
      }
      do
      {
        v35 = v24++;
        boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v35);
      }
      while ( v25 != (volatile int32_t **)v24 );
    }
    v3 = v57;
    v4 = v56;
    v14 = self;
    v15 = *((uint32_t *)self + 5) + 4 * v45;
    goto LABEL_19;
  }
  v43 = 0;
  v47 = 0;
  if ( v45 != 0 )
  {
    if ( v45 > 0x3FFFFFFF )
      sub_18FFEE0(v45, v8);
    v43 = 4 * v45;
    v47 = opNew(4 * v45);
  }
  if ( v4 != (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v3 )
  {
    v9 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v47;
    do
    {
      if ( v9 != nullptr )
      {
        v10 = (volatile int32_t *)*v4;
        v11 = *v4 == nullptr;
        *v9 = *v4;
        if ( !v11 )
          __sync_add_and_fetch(v10, 1u);
      }
      ++v4;
      ++v9;
    }
    while ( v4 != (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v3 );
  }
  v12 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)self + 6);
  v13 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)self + 5);
  if ( v12 != v13 )
  {
    do
    {
      v33 = v13++;
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v33);
    }
    while ( v12 != v13 );
    v13 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self ***)self + 5);
  }
  if ( v13 != nullptr )
    opDelete(v13);
  v3 = v57;
  v4 = v56;
  v14 = self;
  *((uint32_t *)self + 5) = v47;
  v15 = v43 + v47;
  *((uint32_t *)self + 7) = v43 + v47;
LABEL_19:
  *((uint32_t *)v14 + 6) = v15;
  *((uint32_t *)v14 + 8) = v59;
  *((uint32_t *)v14 + 9) = v60;
  *((uint32_t *)v14 + 10) = v61;
  if ( v3 != (volatile int32_t **)v4 )
  {
    do
    {
      v34 = v4++;
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v34);
    }
    while ( v4 != (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v3 );
    v4 = v56;
  }
  if ( v4 != nullptr )
    opDelete(v4);
  return *((uint8_t *)self + 4) ^ 1;
}


