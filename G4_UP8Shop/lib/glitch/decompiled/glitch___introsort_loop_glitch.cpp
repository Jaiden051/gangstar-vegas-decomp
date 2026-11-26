#include "Core/Utils/DecompTypes.h"
#include "glitch___introsort_loop_glitch.h"

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_video_SShaderVertexAttri_f3003f  (binary VA: 0xdee370)
// Original: std::__introsort_loop<glitch::video::SShaderVertexAttributeDef *,int>
// ----------------------------------------------------------------------------
void g4_std::introsort_loop_video_SShaderVertexAttri_f3003f(glitch::video::SShaderVertexAttributeDef::Self *a1, glitch::core::detail::SSharedStringHeapEntry::SData::Self **a2, int a3)
{
  glitch::video::SShaderVertexAttributeDef::Self *v3;
  int v4;
  glitch::video::SShaderVertexAttributeDef::Self *i;
  uint8_t v6;
  char *v7;
  uint8_t v8;
  int v9;
  glitch::video::SShaderVertexAttributeDef::Self *v10;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v11;
  uint8_t v12;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v13;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v14;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v15;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v16;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v17;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v18;
  bool v19; // cc
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v20;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v21;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v22;
  glitch::video::SShaderVertexAttributeDef::Self *v23;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v24;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v25;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v26;
  volatile int32_t *v27;
  volatile int32_t *v28;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v29;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v30;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v31;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v32;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v33;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v34;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v35;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v36;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v37;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v38;
  volatile int32_t *v39;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v40;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v41;
  glitch::video::SShaderVertexAttributeDef::Self *v42;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v43;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v44;
  char *v45;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v46;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v47;
  int16_t v48; // si
  char v49;
  int16_t v50;
  int16_t v51;
  int v52;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self **v53;
  glitch::core::detail::SSharedStringHeapEntry::SData::Self *v54;
  typedef int _g4_t_v55;
  typedef char *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint8_t _g4_t_v58;
  typedef char _g4_t_v59;
  typedef char _g4_t_v60;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v61;
  typedef glitch::video::SShaderVertexAttributeDef::Self *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v64;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v65;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v66;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v67;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v68;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v69;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v70;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v71;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v72;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v73;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v74;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v75[5];
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v76[3];
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v77;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v78;
  typedef glitch::core::detail::SSharedStringHeapEntry::SData::Self *_g4_t_v79;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v55)) > _g4_s0 ? (0u + sizeof(_g4_t_v55)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v56)) > _g4_s1 ? (0u + sizeof(_g4_t_v56)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v57)) > _g4_s2 ? (4u + sizeof(_g4_t_v57)) : _g4_s2,
    _g4_s4 = (15u + sizeof(_g4_t_v58)) > _g4_s3 ? (15u + sizeof(_g4_t_v58)) : _g4_s3,
    _g4_s5 = (15u + sizeof(_g4_t_v59)) > _g4_s4 ? (15u + sizeof(_g4_t_v59)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v60)) > _g4_s5 ? (16u + sizeof(_g4_t_v60)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v61)) > _g4_s6 ? (16u + sizeof(_g4_t_v61)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v62)) > _g4_s7 ? (20u + sizeof(_g4_t_v62)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v63)) > _g4_s8 ? (24u + sizeof(_g4_t_v63)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v64)) > _g4_s9 ? (32u + sizeof(_g4_t_v64)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v65)) > _g4_s10 ? (36u + sizeof(_g4_t_v65)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v66)) > _g4_s11 ? (40u + sizeof(_g4_t_v66)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v67)) > _g4_s12 ? (44u + sizeof(_g4_t_v67)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v68)) > _g4_s13 ? (48u + sizeof(_g4_t_v68)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v69)) > _g4_s14 ? (52u + sizeof(_g4_t_v69)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v70)) > _g4_s15 ? (56u + sizeof(_g4_t_v70)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v71)) > _g4_s16 ? (60u + sizeof(_g4_t_v71)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v72)) > _g4_s17 ? (64u + sizeof(_g4_t_v72)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v73)) > _g4_s18 ? (68u + sizeof(_g4_t_v73)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v74)) > _g4_s19 ? (72u + sizeof(_g4_t_v74)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v75)) > _g4_s20 ? (76u + sizeof(_g4_t_v75)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v76)) > _g4_s21 ? (96u + sizeof(_g4_t_v76)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v77)) > _g4_s22 ? (108u + sizeof(_g4_t_v77)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v78)) > _g4_s23 ? (112u + sizeof(_g4_t_v78)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v79)) > _g4_s24 ? (116u + sizeof(_g4_t_v79)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 0u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 4u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 15u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 15u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 36u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 40u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 44u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 48u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 52u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 56u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 60u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 64u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 68u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 72u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 76u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 96u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 108u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 112u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 116u);

  v3 = a1;
  v4 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 203 )
  {
    if ( a3 != 0 )
    {
      for ( i = a1; ; i = a1 )
      {
        --a3;
        v6 = *((uint8_t *)a2 - 8);
        v58 = v6;
        v7 = (char *)i + 12 * ((-1431655765 * (v4 >> 2)) >> 1);
        v8 = *((uint8_t *)i + 4);
        v9 = (uint8_t)v7[4];
        if ( v8 >= (unsigned int)v9 )
        {
          if ( v8 >= (int)v6 )
          {
            v19 = v9 < v6;
            v20 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a1;
            v77 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a1;
            if ( !v19 )
            {
              if ( v20 != nullptr )
              {
                __sync_add_and_fetch((volatile int32_t *)v20, 1u);
                v8 = *((uint8_t *)a1 + 4);
              }
              LOBYTE(v78) = v8;
              BYTE1(v78) = *((uint8_t *)a1 + 5);
              HIWORD(v78) = *((uint16_t *)a1 + 3);
              v79 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a1 + 2);
              v34 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v7;
              v35 = nullptr;
              v71 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v7;
              if ( v71 != nullptr )
              {
                __sync_add_and_fetch((volatile int32_t *)v34, 1u);
                v35 = v71;
              }
              v36 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a1;
              *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v35);
              v71 = v36;
              boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v71);
              *((uint8_t *)a1 + 4) = v7[4];
              *((uint8_t *)a1 + 5) = v7[5];
              *((uint16_t *)a1 + 3) = *((uint16_t *)v7 + 3);
              *((uint16_t *)a1 + 4) = *((uint16_t *)v7 + 4);
              *((uint16_t *)a1 + 5) = *((uint16_t *)v7 + 5);
              v37 = nullptr;
              v72 = v77;
              if ( v77 != nullptr )
              {
                __sync_add_and_fetch((volatile int32_t *)v77, 1u);
                v37 = v72;
              }
              v38 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v7;
              *(uint32_t *)v7 = (uint32_t)(uintptr_t)(v37);
              v72 = v38;
              v33 = &v72;
              goto LABEL_40;
            }
            if ( v20 != nullptr )
            {
              __sync_add_and_fetch((volatile int32_t *)v20, 1u);
              v8 = *((uint8_t *)a1 + 4);
            }
            LOBYTE(v78) = v8;
            BYTE1(v78) = *((uint8_t *)a1 + 5);
            HIWORD(v78) = *((uint16_t *)a1 + 3);
            v79 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a1 + 2);
            v21 = nullptr;
            v69 = *(a2 - 3);
            if ( v69 != nullptr )
            {
              __sync_add_and_fetch((volatile int32_t *)v69, 1u);
              v21 = v69;
            }
            v22 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a1;
            *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v21);
            v69 = v22;
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v69);
            v23 = (glitch::video::SShaderVertexAttributeDef::Self *)a2;
            *((uint8_t *)a1 + 4) = *((uint8_t *)a2 - 8);
            *((uint8_t *)a1 + 5) = *((uint8_t *)a2 - 7);
            *((uint16_t *)a1 + 3) = *((uint16_t *)a2 - 3);
            *((uint16_t *)a1 + 4) = *((uint16_t *)a2 - 2);
            *((uint16_t *)a1 + 5) = *((uint16_t *)a2 - 1);
            v24 = nullptr;
            v70 = v77;
            if ( v77 != nullptr )
            {
              __sync_add_and_fetch((volatile int32_t *)v77, 1u);
              v24 = v70;
              v23 = (glitch::video::SShaderVertexAttributeDef::Self *)a2;
            }
            v25 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v23 - 3);
            *((uint32_t *)v23 - 3) = (uint32_t)(uintptr_t)(v24);
            v70 = v25;
            v26 = &v70;
            goto LABEL_32;
          }
        }
        else
        {
          if ( v9 < v6 )
          {
            v27 = *(volatile int32_t **)a1;
            v77 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a1;
            if ( v77 != nullptr )
            {
              __sync_add_and_fetch(v27, 1u);
              v8 = *((uint8_t *)a1 + 4);
            }
            LOBYTE(v78) = v8;
            BYTE1(v78) = *((uint8_t *)a1 + 5);
            HIWORD(v78) = *((uint16_t *)a1 + 3);
            v79 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a1 + 2);
            v28 = *(volatile int32_t **)v7;
            v29 = nullptr;
            v65 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v7;
            if ( v65 != nullptr )
            {
              __sync_add_and_fetch(v28, 1u);
              v29 = v65;
            }
            v30 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a1;
            *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v29);
            v65 = v30;
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v65);
            *((uint8_t *)a1 + 4) = v7[4];
            *((uint8_t *)a1 + 5) = v7[5];
            *((uint16_t *)a1 + 3) = *((uint16_t *)v7 + 3);
            *((uint16_t *)a1 + 4) = *((uint16_t *)v7 + 4);
            *((uint16_t *)a1 + 5) = *((uint16_t *)v7 + 5);
            v31 = nullptr;
            v66 = v77;
            if ( v77 != nullptr )
            {
              __sync_add_and_fetch((volatile int32_t *)v77, 1u);
              v31 = v66;
            }
            v32 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v7;
            *(uint32_t *)v7 = (uint32_t)(uintptr_t)(v31);
            v66 = v32;
            v33 = &v66;
LABEL_40:
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v33);
            *((uint32_t *)v7 + 1) = (uint32_t)(uintptr_t)(v78);
            *((uint32_t *)v7 + 2) = (uint32_t)(uintptr_t)(v79);
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v77);
            v58 = *((uint8_t *)a2 - 8);
            v8 = *((uint8_t *)a1 + 4);
            goto LABEL_7;
          }
          if ( v8 < (int)v6 )
          {
            v39 = *(volatile int32_t **)a1;
            v77 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a1;
            if ( v77 != nullptr )
            {
              __sync_add_and_fetch(v39, 1u);
              v8 = *((uint8_t *)a1 + 4);
            }
            LOBYTE(v78) = v8;
            BYTE1(v78) = *((uint8_t *)a1 + 5);
            HIWORD(v78) = *((uint16_t *)a1 + 3);
            v79 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a1 + 2);
            v40 = nullptr;
            v67 = *(a2 - 3);
            if ( v67 != nullptr )
            {
              __sync_add_and_fetch((volatile int32_t *)v67, 1u);
              v40 = v67;
            }
            v41 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)a1;
            *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v40);
            v67 = v41;
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v67);
            v42 = (glitch::video::SShaderVertexAttributeDef::Self *)a2;
            *((uint8_t *)a1 + 4) = *((uint8_t *)a2 - 8);
            *((uint8_t *)a1 + 5) = *((uint8_t *)a2 - 7);
            *((uint16_t *)a1 + 3) = *((uint16_t *)a2 - 3);
            *((uint16_t *)a1 + 4) = *((uint16_t *)a2 - 2);
            *((uint16_t *)a1 + 5) = *((uint16_t *)a2 - 1);
            v43 = nullptr;
            v68 = v77;
            if ( v77 != nullptr )
            {
              __sync_add_and_fetch((volatile int32_t *)v77, 1u);
              v43 = v68;
              v42 = (glitch::video::SShaderVertexAttributeDef::Self *)a2;
            }
            v44 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v42 - 3);
            *((uint32_t *)v42 - 3) = (uint32_t)(uintptr_t)(v43);
            v68 = v44;
            v26 = &v68;
LABEL_32:
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v26);
            *(a2 - 2) = v78;
            *(a2 - 1) = v79;
            boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v77);
            v58 = *((uint8_t *)a2 - 8);
            v8 = *((uint8_t *)a1 + 4);
          }
        }
LABEL_7:
        v10 = (glitch::video::SShaderVertexAttributeDef::Self *)a2;
        v11 = (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)((char *)a1 + 12);
        v12 = v58;
        while ( 1 )
        {
          if ( *((uint8_t *)v11 + 4) < v8 )
          {
            do
              v11 += 3;
            while ( *((uint8_t *)v11 + 4) < (int)v8 );
          }
          v10 = (glitch::video::SShaderVertexAttributeDef::Self *)((char *)v10 - 12);
          if ( v12 > (int)v8 )
          {
            do
              v10 = (glitch::video::SShaderVertexAttributeDef::Self *)((char *)v10 - 12);
            while ( *((uint8_t *)v10 + 4) > (int)v8 );
          }
          if ( v10 <= (glitch::video::SShaderVertexAttributeDef::Self *)v11 )
            break;
          v13 = *v11;
          v77 = *v11;
          if ( v77 != nullptr )
            __sync_add_and_fetch((volatile int32_t *)v13, 1u);
          v14 = nullptr;
          v78 = v11[1];
          v79 = v11[2];
          v15 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v10;
          v73 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v10;
          if ( v73 != nullptr )
          {
            __sync_add_and_fetch((volatile int32_t *)v15, 1u);
            v14 = v73;
          }
          v16 = *v11;
          *v11 = v14;
          v73 = v16;
          boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v73);
          v17 = nullptr;
          *((uint8_t *)v11 + 4) = *((uint8_t *)v10 + 4);
          *((uint8_t *)v11 + 5) = *((uint8_t *)v10 + 5);
          *((uint16_t *)v11 + 3) = *((uint16_t *)v10 + 3);
          *((uint16_t *)v11 + 4) = *((uint16_t *)v10 + 4);
          *((uint16_t *)v11 + 5) = *((uint16_t *)v10 + 5);
          v74 = v77;
          if ( v77 != nullptr )
          {
            __sync_add_and_fetch((volatile int32_t *)v77, 1u);
            v17 = v74;
          }
          v18 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v10;
          *(uint32_t *)v10 = (uint32_t)(uintptr_t)(v17);
          v74 = v18;
          v11 += 3;
          boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v74);
          *((uint32_t *)v10 + 1) = (uint32_t)(uintptr_t)(v78);
          *((uint32_t *)v10 + 2) = (uint32_t)(uintptr_t)(v79);
          boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v77);
          v12 = *((uint8_t *)v10 - 8);
          v8 = *((uint8_t *)a1 + 4);
        }
        g4_std::introsort_loop_video_SShaderVertexAttri_f3003f(
          (glitch::video::SShaderVertexAttributeDef::Self *)v11,
          (glitch::core::detail::SSharedStringHeapEntry::SData::Self **)((glitch::video::SShaderVertexAttributeDef::Self *)a2),
          a3);
        v4 = (char *)v11 - (char *)a1;
        if ( (char *)v11 - (char *)a1 <= 203 )
          return;
        if ( a3 == 0 )
        {
          v3 = a1;
          a2 = v11;
          break;
        }
        a2 = v11;
      }
    }
    v57 = -1431655765 * (v4 >> 2);
    v55 = (int)(uintptr_t)(v3);
    v63 = (v57 - 2) >> 1;
    v45 = (char *)v3 + 12 * v63;
    while ( 1 )
    {
      v46 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v45;
      v47 = nullptr;
      v77 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v45;
      if ( v77 != nullptr )
      {
        __sync_add_and_fetch((volatile int32_t *)v46, 1u);
        v47 = v77;
      }
      v48 = *((uint16_t *)v45 + 3);
      v49 = v45[5];
      v60 = v45[4];
      LOBYTE(v78) = v60;
      v59 = v49;
      BYTE1(v78) = v49;
      v50 = *((uint16_t *)v45 + 5);
      v51 = *((uint16_t *)v45 + 4);
      HIWORD(v78) = v48;
      LOWORD(v79) = v51;
      HIWORD(v79) = v50;
      v75[0] = v47;
      if ( v47 != nullptr )
      {
        __sync_add_and_fetch((volatile int32_t *)v47, 1u);
        v48 = HIWORD(v78);
        v59 = BYTE1(v78);
        v60 = (char)(uintptr_t)v78;
        v51 = (int16_t)(uintptr_t)v79;
        v50 = HIWORD(v79);
      }
      LOWORD(v75[2]) = v51;
      LOBYTE(v75[1]) = v60;
      HIWORD(v75[2]) = v50;
      BYTE1(v75[1]) = v59;
      HIWORD(v75[1]) = v48;
      v45 -= 12;
      sub_DAD560(v55, v63, v57, (int)(uintptr_t)(v75));
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v75);
      if ( v63 == 0 )
        break;
      --v63;
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v77);
    }
    v52 = v55;
    boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v77);
    v62 = (glitch::video::SShaderVertexAttributeDef::Self *)a2;
    v53 = a2 - 2;
    v56 = (char *)(a2 - 2);
    do
    {
      v62 = (glitch::video::SShaderVertexAttributeDef::Self *)((char *)v62 - 12);
      v77 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v56 - 1);
      if ( v77 != nullptr )
        __sync_add_and_fetch((volatile int32_t *)v77, 1u);
      v61 = nullptr;
      v78 = *v53;
      v79 = v53[1];
      v54 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v52;
      v64 = *(glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v52;
      if ( v64 != nullptr )
      {
        __sync_add_and_fetch((volatile int32_t *)v54, 1u);
        v61 = v64;
      }
      v64 = *((glitch::core::detail::SSharedStringHeapEntry::SData::Self **)v56 - 1);
      *((uint32_t *)v56 - 1) = (uint32_t)(uintptr_t)(v61);
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v64);
      *v56 = *(uint8_t *)(v52 + 4);
      v56[1] = *(uint8_t *)(v52 + 5);
      *((uint16_t *)v56 + 1) = *(uint16_t *)(v52 + 6);
      *((uint16_t *)v56 + 2) = *(uint16_t *)(v52 + 8);
      *((uint16_t *)v56 + 3) = *(uint16_t *)(v52 + 10);
      v76[0] = v77;
      if ( v77 != nullptr )
        __sync_add_and_fetch((volatile int32_t *)v77, 1u);
      v76[1] = v78;
      v76[2] = v79;
      v53 -= 3;
      sub_DAD560(v52, 0, -1431655765 * (((int)(uintptr_t)(v62) - v52) >> 2), (int)(uintptr_t)(v76));
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v76);
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(&v77);
      v56 -= 12;
    }
    while ( (int)(uintptr_t)(v62) - v52 > 23 );
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_SEvent_int_48ffad  (binary VA: 0xf812f0)
// Original: std::__introsort_loop<glitch::core::detail::SEvent *,int>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_SEvent_int_48ffad(int a1, float *a2, int a3)
{
  int result;
  float *v4;
  float v5; // xmm0_4
  int v6;
  float v7; // xmm1_4
  bool v8;
  float v9; // xmm2_4
  bool v10;
  bool v11;
  int v12;
  int v13;
  unsigned int v14;
  float *v15;
  float v16; // xmm1_4
  bool v17;
  int v18;
  int v19;
  bool v20;
  bool v21;
  int v22;
  int v23;
  int v24;
  int v25;
  float *v26;
  float v27; // xmm2_4
  int i;
  bool v29;
  int v30;
  int v31;
  int v32;
  int v33;
  bool v34;
  bool v35;
  bool v36; // di
  float v37;
  int v38;
  float v39; // xmm2_4
  int v40;
  int v41;
  int j;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  float v49; // xmm0_4
  bool v50; // di
  float v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  float *v57;
  int v58;
  int v59;
  int v60;
  int v61;
  float *v62;
  float *v63;
  int v64;
  int v65;
  int v66;
  int v67;
  float *v68;
  int *v69;
  int v70;
  int v71;
  int v72;
  int v73;

  result = (int)(uintptr_t)(a2) - a1;
  if ( (int)(uintptr_t)(a2) - a1 <= 135 )
    return result;
  if ( a3 == 0 )
    goto LABEL_42;
  v58 = a3;
  v4 = a2;
  while ( 2 )
  {
    --v58;
    v5 = *(float *)a1;
    v6 = a1 + 8 * (result >> 4);
    v7 = *(float *)v6;
    v8 = *(float *)v6 > *(float *)a1;
    if ( *(float *)a1 == *(float *)v6 )
      v8 = (*(uint32_t *)(a1 + 4) & 3u) < (*(uint32_t *)(v6 + 4) & 3u);
    v9 = *(v4 - 2);
    if ( !v8 )
    {
      v20 = v9 > v5;
      if ( v5 == v9 )
        v20 = (*(uint32_t *)(a1 + 4) & 3u) < (*(uint32_t *)(v4 - 1) & 3u);
      if ( v20 )
        goto LABEL_14;
      v21 = v9 > v7;
      if ( v7 == v9 )
        v21 = (*(uint32_t *)(v6 + 4) & 3u) < (*(uint32_t *)(v4 - 1) & 3u);
      if ( v21 )
        goto LABEL_13;
LABEL_35:
      v22 = *(uint32_t *)(a1 + 4);
      v23 = *(uint32_t *)(v6 + 4);
      *(uint32_t *)a1 = *(uint32_t *)v6;
      *(uint32_t *)(a1 + 4) = v23;
      *(uint32_t *)(v6 + 4) = v22;
      *(float *)v6 = v5;
      v5 = *(float *)a1;
      goto LABEL_14;
    }
    v10 = v9 > v7;
    if ( v7 == v9 )
      v10 = (*(uint32_t *)(v6 + 4) & 3u) < (*(uint32_t *)(v4 - 1) & 3u);
    if ( v10 )
      goto LABEL_35;
    v11 = v9 > v5;
    if ( v5 == v9 )
      v11 = (*(uint32_t *)(a1 + 4) & 3u) < (*(uint32_t *)(v4 - 1) & 3u);
    if ( v11 )
    {
LABEL_13:
      v12 = *(uint32_t *)(a1 + 4);
      v13 = *((uint32_t *)v4 - 1);
      *(float *)a1 = *(v4 - 2);
      *(uint32_t *)(a1 + 4) = v13;
      *((uint32_t *)v4 - 1) = v12;
      *(v4 - 2) = v5;
      v5 = *(float *)a1;
    }
LABEL_14:
    v14 = (unsigned int)(uintptr_t)(v4);
    v15 = (float *)(a1 + 8);
    v57 = v4;
    while ( 1 )
    {
LABEL_16:
      v16 = *v15;
      v17 = v5 > *v15;
      if ( *v15 == v5 )
        v17 = ((uint32_t)v15[1] & 3u) < (*(uint32_t *)(a1 + 4) & 3u);
      if ( !v17 )
        break;
      v15 += 2;
    }
    for ( v14 -= 8; *(float *)v14 != v5; v14 -= 8 )
    {
      if ( *(float *)v14 <= v5 )
        goto LABEL_24;
LABEL_21:
      ;
    }
    if ( (*(uint32_t *)(a1 + 4) & 3u) < (*(uint32_t *)(v14 + 4) & 3u) )
      goto LABEL_21;
LABEL_24:
    if ( v14 > (unsigned int)(uintptr_t)(v15) )
    {
      v18 = *((uint32_t *)v15 + 1);
      v19 = *(uint32_t *)(v14 + 4);
      *v15 = *(float *)v14;
      *((uint32_t *)v15 + 1) = v19;
      *(uint32_t *)(v14 + 4) = v18;
      *(float *)v14 = v16;
      v15 += 2;
      v5 = *(float *)a1;
      goto LABEL_16;
    }
    g4_std::introsort_loop_SEvent_int_48ffad(v15, v57, v58);
    result = (int)(uintptr_t)(v15) - a1;
    if ( (int)(uintptr_t)(v15) - a1 > 135 )
    {
      if ( v58 != 0 )
      {
        v4 = v15;
        continue;
      }
      a2 = v15;
LABEL_42:
      v24 = result >> 3;
      v71 = v24 & 1;
      v25 = (v24 - 2) >> 1;
      v59 = (v24 - 1) >> 1;
      v65 = v25;
      v61 = v25;
      v73 = 2 * v25 + 1;
      v68 = (float *)(a1 + 8 * v25);
      v69 = (int *)(a1 + 8 * v73);
      v63 = v68;
      v26 = v68;
      while ( 1 )
      {
        v66 = *((uint32_t *)v26 + 1);
        v27 = *v26;
        if ( v25 < v59 )
        {
          v54 = v25;
          for ( i = v25; ; i = v25 )
          {
            v31 = i + 1;
            v25 = 2 * v31;
            v32 = a1 + 8 * (2 * v31 - 1);
            v55 = 2 * v31 - 1;
            v26 = (float *)(a1 + 16 * v31);
            if ( *v26 == *(float *)v32 )
              v29 = ((uint32_t)v26[1] & 3u) < (*(uint32_t *)(v32 + 4) & 3u);
            else
              v29 = *(float *)v32 > *v26;
            if ( v29 )
            {
              v25 = v55;
              v26 = (float *)(a1 + 8 * v55);
            }
            v30 = *((uint32_t *)v26 + 1);
            *(float *)(a1 + 8 * v54) = *v26;
            *(uint32_t *)(a1 + 8 * v54 + 4) = v30;
            if ( v25 >= v59 )
              break;
            v54 = v25;
          }
        }
        if ( v71 == 0 && v65 == v25 )
        {
          v53 = *v69;
          *((uint32_t *)v68 + 1) = v69[1];
          *(uint32_t *)v68 = v53;
          v25 = v73;
          v26 = (float *)(a1 + 8 * v73);
        }
        if ( v61 < v25 )
        {
          v33 = (v25 - 1) / 2;
          v56 = v25;
          v26 = (float *)(a1 + 8 * v33);
          v34 = v27 < *v26;
          v35 = v27 == *v26;
          if ( v27 != *v26 )
          {
LABEL_57:
            v36 = !v34 && !v35;
            goto LABEL_58;
          }
          while ( 1 )
          {
            v36 = ((uint32_t)v26[1] & 3) < (v66 & 3);
LABEL_58:
            if ( !v36 )
              break;
            v37 = *v26;
            *(float *)(a1 + 8 * v56 + 4) = v26[1];
            *(float *)(a1 + 8 * v56) = v37;
            v38 = (v33 - 1) / 2;
            if ( v61 >= v33 )
              goto LABEL_60;
            v56 = v33;
            v33 = (v33 - 1) / 2;
            v26 = (float *)(a1 + 8 * v38);
            v34 = v27 < *v26;
            v35 = v27 == *v26;
            if ( v27 != *v26 )
              goto LABEL_57;
          }
          v26 = (float *)(a1 + 8 * v56);
        }
LABEL_60:
        v63 -= 2;
        *v26 = v27;
        *((uint32_t *)v26 + 1) = v66;
        if ( v61 == 0 )
          break;
        --v61;
        v26 = v63;
        v25 = v61;
      }
      v62 = a2;
      while ( 2 )
      {
        v62 -= 2;
        v39 = *v62;
        v40 = *(uint32_t *)(a1 + 4);
        v67 = *((uint32_t *)v62 + 1);
        *v62 = *(float *)a1;
        *((uint32_t *)v62 + 1) = v40;
        v64 = ((int)(uintptr_t)(v62) - a1) >> 3;
        result = a1;
        v41 = 0;
        if ( (v64 - 1) / 2 > 0 )
        {
          v72 = 0;
          for ( j = 0; ; j = v41 )
          {
            v45 = j + 1;
            v41 = 2 * v45;
            v46 = a1 + 8 * (2 * v45 - 1);
            v70 = 2 * v45 - 1;
            result = a1 + 16 * v45;
            if ( *(float *)result == *(float *)v46
               ? (*(uint32_t *)(result + 4) & 3u) < (*(uint32_t *)(v46 + 4) & 3u)
               : *(float *)v46 > *(float *)result )
            {
              v41 = v70;
              result = a1 + 8 * v70;
            }
            v44 = *(uint32_t *)(result + 4);
            *(uint32_t *)(a1 + 8 * v72) = *(uint32_t *)result;
            *(uint32_t *)(a1 + 8 * v72 + 4) = v44;
            if ( (v64 - 1) / 2 <= v41 )
              break;
            v72 = v41;
          }
        }
        if ( (v64 & 1) == 0 && v41 == (v64 - 2) / 2 )
        {
          v41 = 2 * v41 + 1;
          v47 = *(uint32_t *)(a1 + 8 * v41);
          *(uint32_t *)(result + 4) = *(uint32_t *)(a1 + 8 * v41 + 4);
          *(uint32_t *)result = v47;
        }
        else if ( v41 <= 0 )
        {
          goto LABEL_39;
        }
        v60 = v41;
        v48 = (v41 - 1) >> 1;
        result = a1 + 8 * v48;
        v49 = *(float *)result;
        if ( *(float *)result != v39 )
        {
LABEL_77:
          v50 = v39 > v49;
          goto LABEL_78;
        }
        while ( 1 )
        {
          v50 = (*(uint32_t *)(result + 4) & 3) < (v67 & 3);
LABEL_78:
          if ( !v50 )
            break;
          v51 = *(float *)result;
          *(uint32_t *)(a1 + 8 * v60 + 4) = *(uint32_t *)(result + 4);
          *(float *)(a1 + 8 * v60) = v51;
          v52 = (v48 - 1) / 2;
          if ( v48 == 0 )
            goto LABEL_39;
          v60 = v48;
          v48 = (v48 - 1) / 2;
          result = a1 + 8 * v52;
          v49 = *(float *)result;
          if ( *(float *)result != v39 )
            goto LABEL_77;
        }
        result = a1 + 8 * v60;
LABEL_39:
        *(float *)result = v39;
        *(uint32_t *)(result + 4) = v67;
        if ( (int)(uintptr_t)(v62) - a1 <= 15 )
          return result;
        continue;
      }
    }
    return result;
  }
}


