#include "Core/Utils/DecompTypes.h"
#include "vox_VoxDebugStream.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxDebugStream::UpdateComponents  (binary VA: 0x103ed40)
// Original: vox::VoxDebugStream::UpdateComponents
// ----------------------------------------------------------------------------
vox::JsonArray::Self * vox::VoxDebugStream::UpdateComponents(void **self, vox::JsonArray::Self *a2)
{
  vox::JsonArray::Self *result;
  vox::JsonObject::Self *v3;
  int v4;
  int v5;
  vox::MultiJsonValue::Self *v6;
  unsigned int i;
  int v8;
  vox::Self *v9;
  int v10;
  char *v11;
  size_t v12;
  size_t v13;
  size_t v14;
  int v15;
  int v16;
  size_t v17;
  size_t v18;
  int v19;
  uint32_t *v20;
  size_t v21;
  int v22;
  int v23;
  uint32_t *v24;
  char *v25;
  int v26;
  uint32_t *v27;
  size_t v28;
  size_t v29;
  int v30;
  int v31;
  size_t v32;
  size_t v33;
  size_t v34;
  int v35;
  char *v36;
  int v37;
  uint32_t *v38;
  size_t v39;
  size_t v40;
  int v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  unsigned int v51;
  uint32_t *v52;
  size_t v53;
  size_t v54;
  int v55;
  unsigned int v56;
  int v57;
  typedef size_t _g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef size_t _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef char *_g4_t_v66;
  typedef unsigned int _g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef char *_g4_t_v69;
  typedef vox::JsonArray::Self *_g4_t_v70;
  typedef unsigned int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef char *_g4_t_v75;
  typedef size_t _g4_t_v76;
  typedef vox::JsonArray::Self *_g4_t_v77;
  typedef char *_g4_t_v78;
  typedef size_t _g4_t_v79;
  typedef int _g4_t_v80;
  typedef char *_g4_t_v81;
  typedef uint8_t _g4_t_v82[7];
  typedef uint32_t *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v58)) > _g4_s0 ? (4u + sizeof(_g4_t_v58)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v59)) > _g4_s1 ? (4u + sizeof(_g4_t_v59)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v60)) > _g4_s2 ? (4u + sizeof(_g4_t_v60)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v61)) > _g4_s3 ? (8u + sizeof(_g4_t_v61)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v62)) > _g4_s4 ? (12u + sizeof(_g4_t_v62)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v63)) > _g4_s5 ? (24u + sizeof(_g4_t_v63)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v64)) > _g4_s6 ? (24u + sizeof(_g4_t_v64)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v65)) > _g4_s7 ? (24u + sizeof(_g4_t_v65)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v66)) > _g4_s8 ? (28u + sizeof(_g4_t_v66)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v67)) > _g4_s9 ? (28u + sizeof(_g4_t_v67)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v68)) > _g4_s10 ? (28u + sizeof(_g4_t_v68)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v69)) > _g4_s11 ? (32u + sizeof(_g4_t_v69)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v70)) > _g4_s12 ? (36u + sizeof(_g4_t_v70)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v71)) > _g4_s13 ? (40u + sizeof(_g4_t_v71)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v72)) > _g4_s14 ? (44u + sizeof(_g4_t_v72)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v73)) > _g4_s15 ? (48u + sizeof(_g4_t_v73)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v74)) > _g4_s16 ? (52u + sizeof(_g4_t_v74)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v75)) > _g4_s17 ? (52u + sizeof(_g4_t_v75)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v76)) > _g4_s18 ? (52u + sizeof(_g4_t_v76)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v77)) > _g4_s19 ? (56u + sizeof(_g4_t_v77)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v78)) > _g4_s20 ? (56u + sizeof(_g4_t_v78)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v79)) > _g4_s21 ? (56u + sizeof(_g4_t_v79)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v80)) > _g4_s22 ? (56u + sizeof(_g4_t_v80)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v81)) > _g4_s23 ? (60u + sizeof(_g4_t_v81)) : _g4_s23,
    _g4_s25 = (81u + sizeof(_g4_t_v82)) > _g4_s24 ? (81u + sizeof(_g4_t_v82)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v83)) > _g4_s25 ? (88u + sizeof(_g4_t_v83)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v84)) > _g4_s26 ? (92u + sizeof(_g4_t_v84)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v85)) > _g4_s27 ? (96u + sizeof(_g4_t_v85)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 4u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 4u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 4u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 12u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 24u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 36u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 40u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 44u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 48u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 52u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 52u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 52u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 56u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 56u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 56u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 56u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 60u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 81u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 88u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 92u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 96u);

  result = a2;
  if ( a2 != nullptr )
  {
    g4_std::Rb_tree_string_pair_string_const_73770e::M_erase(
      (int)(uintptr_t)(self + 4),
      *(self + 6));
    v69 = (char *)(self + 5);
    *(self + 7) = self + 5;
    *(self + 8) = self + 5;
    *(self + 6) = nullptr;
    *(self + 9) = nullptr;
    result = (vox::JsonArray::Self *)vox::MultiJsonValue::Size(a2);
    v70 = result;
    if ( result != nullptr )
    {
      v71 = 0;
      while ( 1 )
      {
        v3 = (vox::JsonObject::Self *)vox::JsonArray::opIndex(a2, v71);
        if ( v3 != nullptr )
        {
          v4 = vox::JsonObject::opIndex(v3, "name");
          v5 = v4;
          if ( v4 != 0 && *(uint32_t *)(v4 + 20) != 0 )
            break;
        }
LABEL_30:
        ++v71;
        result = v70;
        if ( (vox::JsonArray::Self *)v71 == v70 )
          return result;
      }
      v6 = (vox::MultiJsonValue::Self *)vox::JsonObject::opIndex(v3, "filter");
      v77 = (vox::JsonArray::Self *)(v6);
      v72 = -1;
      v73 = -1;
      if ( v6 != nullptr )
      {
        v74 = vox::MultiJsonValue::Size(v6);
        v72 = 0;
        v73 = 0;
        if ( v74 != 0 )
        {
          for ( i = 0; i != v74; ++i )
          {
            v8 = vox::JsonArray::opIndex(v77, i);
            if ( v8 != 0 )
            {
              v9 = *(vox::Self **)(v8 + 20);
              if ( v9 != nullptr )
              {
                v72 |= vox::DebugFilterToMask(*(vox::Self **)(v5 + 20), v9);
                v73 |= v10;
              }
            }
          }
        }
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v82[3]), *(char **)(v5 + 20), (int)(uintptr_t)(v82));
      v11 = (char *)*(self + 6);
      if ( v11 == nullptr )
        goto LABEL_52;
      v78 = *(char **)&v82[3];
      v75 = (char *)(self + 5);
      v12 = *(uint32_t *)(*(uint32_t *)&v82[3] - 12);
      do
      {
        while ( 1 )
        {
          v13 = *(uint32_t *)(*((uint32_t *)v11 + 4) - 12);
          v14 = v13;
          v58 = v12;
          if ( v12 <= v13 )
            v14 = v12;
          v15 = memcmp(*((const void **)v11 + 4), v78, v14);
          v12 = v58;
          v16 = v13 - v58;
          if ( v15 == 0 )
            v15 = v16;
          if ( v15 < 0 )
            break;
          v75 = v11;
          v11 = *((char **)v11 + 2);
          if ( v11 == nullptr )
            goto LABEL_23;
        }
        v11 = *((char **)v11 + 3);
      }
      while ( v11 != nullptr );
LABEL_23:
      v66 = v75;
      if ( v69 == v75 )
      {
LABEL_52:
        g4_std::string::construct_copy(&v83, &v82[3]);
        v84 = 0;
        v85 = 0;
        if ( *(self + 9) == nullptr )
          goto LABEL_58;
        v80 = (int)(uintptr_t)(*(self + 8));
        v65 = *(uint32_t **)(v80 + 16);
        v32 = *(v65 - 3);
        v33 = v32;
        v34 = *(v83 - 3);
        v60 = v83;
        if ( v34 <= v32 )
          v33 = *(v83 - 3);
        v76 = v33;
        v35 = memcmp(v65, v83, v33);
        if ( v35 == 0 )
          v35 = v32 - v34;
        if ( v35 >= 0 )
          goto LABEL_58;
        LOBYTE(v67) = 1;
        if ( v69 != (char *)v80 )
        {
          v43 = v34 - v32;
          v44 = memcmp(v60, v65, v76);
          if ( v44 == 0 )
            v44 = v43;
          v67 = v44 >> 31;
        }
        v75 = (char *)VoxAllocInternal(
                        0x1Cu,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
        if ( v75 != (char *)-16 )
        {
          g4_std::string::construct_copy(v75 + 16, &v83);
          v45 = v85;
          *((uint32_t *)v75 + 5) = v84;
          *((uint32_t *)v75 + 6) = v45;
        }
        sub_1904970(v67, v75, v80, v69);
      }
      else
      {
        v17 = *(uint32_t *)(*((uint32_t *)v75 + 4) - 12);
        v18 = v17;
        if ( v58 <= v17 )
          v18 = v58;
        v19 = memcmp(v78, *((const void **)v75 + 4), v18);
        if ( v19 == 0 )
          v19 = v58 - v17;
        if ( v19 >= 0 )
          goto LABEL_29;
        g4_std::string::construct_copy(&v83, &v82[3]);
        v84 = 0;
        v85 = 0;
        v20 = *((uint32_t **)v75 + 4);
        v79 = *(v83 - 3);
        v21 = v79;
        if ( *(v20 - 3) <= v79 )
          v21 = *(v20 - 3);
        v61 = *(v20 - 3);
        v59 = v83;
        v22 = memcmp(v83, v20, v21);
        v63 = v22;
        if ( v22 == 0 )
          v22 = v79 - v61;
        if ( v22 >= 0 )
        {
          v23 = memcmp(v20, v59, v21);
          v24 = v59;
          if ( v23 == 0 )
            v23 = v61 - v79;
          if ( v23 >= 0 )
          {
LABEL_40:
            if ( v24 - 3 != dword_213B808 )
            {
              if ( __sync_fetch_and_add(v24 - 1, 0xFFFFFFFF) > 0 )
              {
                v78 = *(char **)&v82[3];
LABEL_29:
                *((uint32_t *)v75 + 5) = v72;
                *((uint32_t *)v75 + 6) = v73;
                if ( v78 - 12 != (char *)dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)v78 - 1, 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v78 - 12);
                }
                goto LABEL_30;
              }
              g4_std::string::Rep::M_destroy(v24 - 3);
            }
            v78 = *(char **)&v82[3];
            goto LABEL_29;
          }
          v36 = (char *)*(self + 8);
          if ( v36 == v75 )
          {
            LOBYTE(v51) = 1;
            if ( v69 != v75 )
            {
              v52 = *((uint32_t **)v75 + 4);
              v53 = v79;
              v54 = *(v52 - 3);
              if ( v54 <= v79 )
                v53 = *(v52 - 3);
              v55 = memcmp(v59, v52, v53);
              v56 = v79 - v54;
              if ( v55 != 0 )
                v56 = v55;
              v51 = v56 >> 31;
            }
            v75 = (char *)VoxAllocInternal(
                            0x1Cu,
                            0,
                            (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                            (int)(uintptr_t)("internal_new"),
                            181);
            if ( v75 != (char *)-16 )
            {
              g4_std::string::construct_copy(v75 + 16, &v83);
              v57 = v85;
              *((uint32_t *)v75 + 5) = v84;
              *((uint32_t *)v75 + 6) = v57;
            }
            sub_1904970(v51, v75, v36, v69);
            *(self + 9) = (char *)*(self + 9) + 1;
            v24 = v83;
            goto LABEL_40;
          }
          v37 = sub_19048E0(v75);
          v38 = *(uint32_t **)(v37 + 16);
          v39 = v79;
          v40 = *(v38 - 3);
          if ( v40 <= v79 )
            v39 = *(v38 - 3);
          v41 = memcmp(v59, v38, v39);
          if ( v41 == 0 )
            v41 = v79 - v40;
          if ( v41 < 0 )
          {
            if ( *((uint32_t *)v75 + 3) == 0 )
            {
              v48 = v63;
              if ( v63 == 0 )
                v48 = v79 - v61;
              v75 = (char *)VoxAllocInternal(
                              0x1Cu,
                              0,
                              (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                              (int)(uintptr_t)("internal_new"),
                              181);
              if ( v75 != (char *)-16 )
              {
                g4_std::string::construct_copy(v75 + 16, &v83);
                v49 = v85;
                *((uint32_t *)v75 + 5) = v84;
                *((uint32_t *)v75 + 6) = v49;
              }
              sub_1904970(v48 < 0, v75, v66, v69);
              *(self + 9) = (char *)*(self + 9) + 1;
              v24 = v83;
              goto LABEL_40;
            }
            v75 = (char *)VoxAllocInternal(
                            0x1Cu,
                            0,
                            (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                            (int)(uintptr_t)("internal_new"),
                            181);
            if ( v75 != (char *)-16 )
            {
              g4_std::string::construct_copy(v75 + 16, &v83);
              v42 = v85;
              *((uint32_t *)v75 + 5) = v84;
              *((uint32_t *)v75 + 6) = v42;
            }
            sub_1904970(1, v75, v37, v69);
LABEL_69:
            *(self + 9) = (char *)*(self + 9) + 1;
            v24 = v83;
            goto LABEL_40;
          }
LABEL_58:
          sub_103E600((int)(uintptr_t)(&v81), self + 4, (int)(uintptr_t)(&v83));
          v24 = v83;
          v75 = v81;
          goto LABEL_40;
        }
        v25 = (char *)*(self + 7);
        if ( v25 == v75 )
        {
          v75 = (char *)VoxAllocInternal(
                          0x1Cu,
                          0,
                          (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                          (int)(uintptr_t)("internal_new"),
                          181);
          if ( v75 != (char *)-16 )
          {
            g4_std::string::construct_copy(v75 + 16, &v83);
            v50 = v85;
            *((uint32_t *)v75 + 5) = v84;
            *((uint32_t *)v75 + 6) = v50;
          }
          sub_1904970(1, v75, v25, v69);
          goto LABEL_69;
        }
        v26 = sub_1904940(v75);
        v27 = *(uint32_t **)(v26 + 16);
        v28 = v79;
        v64 = v26;
        v29 = *(v27 - 3);
        if ( v29 <= v79 )
          v28 = *(v27 - 3);
        v62 = v28;
        v30 = memcmp(v27, v59, v28);
        if ( v30 == 0 )
          v30 = v29 - v79;
        if ( v30 >= 0 )
          goto LABEL_58;
        if ( *(uint32_t *)(v64 + 12) != 0 )
        {
          v75 = (char *)VoxAllocInternal(
                          0x1Cu,
                          0,
                          (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                          (int)(uintptr_t)("internal_new"),
                          181);
          if ( v75 != (char *)-16 )
          {
            g4_std::string::construct_copy(v75 + 16, &v83);
            v31 = v85;
            *((uint32_t *)v75 + 5) = v84;
            *((uint32_t *)v75 + 6) = v31;
          }
          sub_1904970(1, v75, v66, v69);
          goto LABEL_69;
        }
        LOBYTE(v68) = 1;
        if ( v69 != (char *)v64 )
        {
          v46 = memcmp(v59, v27, v62);
          if ( v46 == 0 )
            v46 = v79 - v29;
          v68 = v46 >> 31;
        }
        v75 = (char *)VoxAllocInternal(
                        0x1Cu,
                        0,
                        (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                        (int)(uintptr_t)("internal_new"),
                        181);
        if ( v75 != (char *)-16 )
        {
          g4_std::string::construct_copy(v75 + 16, &v83);
          v47 = v85;
          *((uint32_t *)v75 + 5) = v84;
          *((uint32_t *)v75 + 6) = v47;
        }
        sub_1904970(v68, v75, v64, v69);
      }
      *(self + 9) = (char *)*(self + 9) + 1;
      v24 = v83;
      goto LABEL_40;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxDebugStream::ProcessCommand  (binary VA: 0x103f6a0)
// Original: vox::VoxDebugStream::ProcessCommand
// ----------------------------------------------------------------------------
vox::VoxDebugStream::Self * vox::VoxDebugStream::ProcessCommand(vox::VoxDebugStream::Self *self)
{
  vox::VoxDebugStream::Self *result;
  vox::VoxDebugStream::Self *v2;
  int v3;
  int v4;
  vox::Self *v5;
  vox::JsonObject::Self *v6;
  int v7;
  vox::JsonObject::Self *v8;
  vox::JsonArray::Self *v9;
  vox::JsonObject::Self *v10;
  vox::JsonArray::Self *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  typedef vox::block_allocator::Self *_g4_t_v16;
  typedef vox::JsonObject::Self *_g4_t_v17;
  typedef uint32_t _g4_t_v18[3];
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef uint8_t _g4_t_v22[20];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v17)) > _g4_s1 ? (32u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v18)) > _g4_s2 ? (52u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v19)) > _g4_s3 ? (64u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v20)) > _g4_s4 ? (68u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v21)) > _g4_s5 ? (72u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v22)) > _g4_s6 ? (76u + sizeof(_g4_t_v22)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);

  while ( 1 )
  {
    result = *(vox::VoxDebugStream::Self **)self;
    if ( *(vox::VoxDebugStream::Self **)self == self )
      break;
    v18[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    sub_1937C90(v18, (char *)result + 8);
    v2 = *(vox::VoxDebugStream::Self **)self;
    sub_1901940(*(uint32_t *)self);
    v3 = *((uint32_t *)v2 + 2);
    if ( (uint32_t *)(v3 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v3 - 12));
    }
    VoxFreeInternal(v2);
    v4 = v18[0];
    if ( *(uint32_t *)(v18[0] - 12) != 0 )
    {
      v19 = 0;
      v20 = nullptr;
      v21 = nullptr;
      vox::block_allocator::block_allocator((vox::block_allocator::Self *)v22, 0x400u);
      v5 = (vox::Self *)v18[0];
      if ( *(int *)(v18[0] - 4) >= 0 )
      {
        sub_19397C0(v18);
        v5 = (vox::Self *)v18[0];
      }
      v6 = (vox::JsonObject::Self *)vox::json_parse(v5, (char *)&v19, &v20, &v21, (vox::Self *)v22, v16);
      if ( v6 != nullptr && *((uint32_t *)v6 + 6) == 1 )
      {
        v17 = v6;
        v7 = vox::JsonObject::opIndex(v6, "name");
        if ( v7 != 0 )
        {
          if ( strcmp(*(const char **)(v7 + 20), "start") == 0 )
          {
            v10 = (vox::JsonObject::Self *)vox::JsonObject::opIndex(v17, "params");
            if ( v10 != nullptr )
            {
              v11 = (vox::JsonArray::Self *)vox::JsonObject::opIndex(v10, "components");
              if ( v11 != nullptr )
              {
                vox::VoxDebugStream::UpdateComponents((void **)self, v11);
                *((uint32_t *)self + 11) = 0;
                *((uint8_t *)self + 52) = 1;
              }
              v12 = vox::JsonObject::opIndex(v10, "update_rate");
              if ( v12 != 0 && *(uint32_t *)(v12 + 24) == 4 && (v14 = *(uint32_t *)(v12 + 20)) > 0 )
                *((uint32_t *)self + 10) = v14;
              else
                *((uint32_t *)self + 10) = 1;
              v13 = vox::JsonObject::opIndex(v10, "message_limit");
              if ( v13 != 0 && *(uint32_t *)(v13 + 24) == 4 && (v15 = *(uint32_t *)(v13 + 20)) > 0 )
                *((uint32_t *)self + 12) = v15;
              else
                *((uint32_t *)self + 12) = -1;
            }
          }
          else if ( strcmp(*(const char **)(v7 + 20), "update") == 0 )
          {
            v8 = (vox::JsonObject::Self *)vox::JsonObject::opIndex(v17, "params");
            if ( v8 != nullptr )
            {
              v9 = (vox::JsonArray::Self *)vox::JsonObject::opIndex(v8, "components");
              if ( v9 != nullptr )
                vox::VoxDebugStream::UpdateComponents((void **)self, v9);
            }
          }
          else if ( strcmp(*(const char **)(v7 + 20), "stop") == 0 )
          {
            *((uint8_t *)self + 52) = 0;
          }
        }
      }
      vox::block_allocator::Destroy((vox::block_allocator::Self *)v22);
      v4 = v18[0];
    }
    if ( (uint32_t *)(v4 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v4 - 12));
    }
  }
  return result;
}


