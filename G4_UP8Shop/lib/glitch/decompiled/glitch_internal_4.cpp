#include "Core/Utils/DecompTypes.h"
#include "glitch_internal_4.h"
extern "C" int g4_noop_ret0();

// ----------------------------------------------------------------------------
// Function: sub_EE33A0  (binary VA: 0xee33a0)
// Original: sub_EE33A0
// ----------------------------------------------------------------------------
std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> * sub_EE33A0(std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a1, int a2, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a3)
{
  char *v4;
  unsigned int v5;
  int v6;
  const void **v7;
  uint32_t *v8;
  int v9;
  char v10;
  char *v11;
  int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  char *v16;
  char *v17;
  int v18;
  size_t v19;
  uint32_t *v20;
  char *v21;
  size_t v22;
  int v23;
  size_t v24;
  char *v25;
  volatile int32_t *v26;
  const void **v27;
  uint8_t *v28;
  int v29;
  char *v30;
  size_t v31;
  char *v32;
  volatile int32_t *v33;
  char *v34;
  char *v35;
  char *v36;
  int v37;
  char *v38;
  size_t v39;
  char *v40;
  volatile int32_t *v41;
  char v42;
  unsigned int v43;
  unsigned int v44;
  char *v45;
  char *v46;
  int v47;
  char *v48;
  size_t v49;
  int v50;
  size_t v51;
  char *v52;
  volatile int32_t *v53;
  typedef size_t _g4_t_v54;
  typedef size_t _g4_t_v55;
  typedef size_t _g4_t_v56;
  typedef size_t _g4_t_v57;
  typedef size_t _g4_t_v58;
  typedef char *_g4_t_v59;
  typedef size_t _g4_t_v60;
  typedef size_t _g4_t_v61;
  typedef int *_g4_t_v62;
  typedef char *_g4_t_v64;
  typedef char *_g4_t_v65;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef char *_g4_t_v72;
  typedef unsigned int _g4_t_v73;
  typedef size_t _g4_t_v74;
  typedef unsigned int _g4_t_v75;
  typedef size_t _g4_t_v76;
  typedef int16_t _g4_t_v77;
  typedef volatile int32_t *_g4_t_v78[4];
  typedef char *_g4_t_v79;
  typedef char *_g4_t_v80;
  typedef char *_g4_t_v81;
  typedef char *_g4_t_v82;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v54)) > _g4_s0 ? (0u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v55)) > _g4_s1 ? (0u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v56)) > _g4_s2 ? (0u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v57)) > _g4_s3 ? (0u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v58)) > _g4_s4 ? (0u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v59)) > _g4_s5 ? (0u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v60)) > _g4_s6 ? (0u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v61)) > _g4_s7 ? (0u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v62)) > _g4_s8 ? (4u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v64)) > _g4_s9 ? (12u + sizeof(_g4_t_v64)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v65)) > _g4_s10 ? (16u + sizeof(_g4_t_v65)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v67)) > _g4_s11 ? (32u + sizeof(_g4_t_v67)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v68)) > _g4_s12 ? (36u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v69)) > _g4_s13 ? (40u + sizeof(_g4_t_v69)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v70)) > _g4_s14 ? (40u + sizeof(_g4_t_v70)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v71)) > _g4_s15 ? (40u + sizeof(_g4_t_v71)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v72)) > _g4_s16 ? (44u + sizeof(_g4_t_v72)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v73)) > _g4_s17 ? (44u + sizeof(_g4_t_v73)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v74)) > _g4_s18 ? (44u + sizeof(_g4_t_v74)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v75)) > _g4_s19 ? (44u + sizeof(_g4_t_v75)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v76)) > _g4_s20 ? (44u + sizeof(_g4_t_v76)) : _g4_s20,
    _g4_s22 = (62u + sizeof(_g4_t_v77)) > _g4_s21 ? (62u + sizeof(_g4_t_v77)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v78)) > _g4_s22 ? (64u + sizeof(_g4_t_v78)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v79)) > _g4_s23 ? (80u + sizeof(_g4_t_v79)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v80)) > _g4_s24 ? (84u + sizeof(_g4_t_v80)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v81)) > _g4_s25 ? (88u + sizeof(_g4_t_v81)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v82)) > _g4_s26 ? (92u + sizeof(_g4_t_v82)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 0u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 0u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 0u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 0u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 0u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 0u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 4u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 36u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 40u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 40u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 44u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 44u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 44u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 44u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 44u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 62u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 64u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 84u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 88u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 92u);

  v67 = *(uint32_t *)a3;
  if ( *(uint32_t *)(*(uint32_t *)a3 - 12) == 0
    || (v4 = (char *)memchr(*(const void **)a3, 38, *(uint32_t *)(*(uint32_t *)a3 - 12))) == nullptr
    || (v64 = &v4[-v67], &v4[-v67] == (char *)-1) )
  {
    g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
      a1,
      a3);
    return a1;
  }
  v65 = nullptr;
  v78[0] = (volatile int32_t *)byte_20D3E78;
  v5 = *(uint32_t *)(v67 - 12);
LABEL_6:
  if ( (int)(v5 - 2) > (int)(uintptr_t)(v64) )
  {
    v6 = *(uint32_t *)(a2 + 48);
    if ( *(uint32_t *)(a2 + 52) - v6 <= 3 )
      goto LABEL_66;
    v68 = 0;
    while ( 1 )
    {
      v72 = &v64[v67 + 1];
      v7 = (const void **)(v6 + 4 * v68);
      v8 = (uint32_t *)(*v7);
      v69 = *((uint32_t *)*v7 - 3) - 1;
      v9 = *((uint32_t *)*v7 - 1);
      if ( v9 >= 0 && v8 - 3 != &dword_20D3E6C )
      {
        if ( v9 != 0 )
        {
          g4_std::basic_string_char_char_traits_char_SA_77cf59::M_mutate(
            v7,
            0,
            0,
            0);
          v8 = (uint32_t *)(*v7);
        }
        *(v8 - 1) = -1;
        v8 = (uint32_t *)(*v7);
        v67 = *(uint32_t *)a3;
      }
      v10 = *((uint8_t *)v8 + 1);
      v11 = (char *)v8 + 1;
      v12 = 0;
      v13 = 0;
      if ( v10 != 0 )
      {
        if ( *v72 != 0 && v69 > 0 )
        {
          if ( v10 != *v72 )
            goto LABEL_64;
          while ( 1 )
          {
            v12 = ++v13;
            v10 = v11[v13];
            if ( v10 == 0 )
              break;
            v42 = v72[v13];
            if ( v42 == 0 || v69 <= v13 )
              break;
            if ( v10 != v42 )
              goto LABEL_64;
          }
        }
        else
        {
          v12 = 0;
          v13 = 0;
        }
      }
      if ( v69 == v13 || v10 == 0 && v72[v12] == 0 )
      {
        v14 = *(uint32_t *)(v67 - 12);
        if ( (unsigned int)(uintptr_t)(v65) > v14 )
          goto LABEL_108;
        v15 = v14 - (uint32_t)(uintptr_t)(v65);
        if ( v15 > v64 - v65 )
          v15 = v64 - v65;
        v16 = &v65[v67];
        v17 = &v65[v15 + v67];
        if ( v17 == &v65[v67] )
        {
          v21 = (char *)(uintptr_t)(byte_20D3E78);
          goto LABEL_30;
        }
        if ( v16 != nullptr )
        {
          v54 = v17 - v16;
          v18 = sub_EA0970(v17 - v16, 0);
          v19 = v54;
          v20 = (uint32_t *)v18;
          v21 = (char *)(v18 + 12);
          if ( v54 != 1 )
            goto LABEL_29;
          *(uint8_t *)(v18 + 12) = *v16;
          if ( (int *)v18 != (int *)(&dword_20D3E6C) )
            goto LABEL_88;
          goto LABEL_30;
        }
        if ( v17 != nullptr )
LABEL_95:
          sub_18FFFD0("basic_string::_S_construct null not valid");
        v20 = (uint32_t *)sub_EA0970(0, 0);
        v21 = (char *)(v20 + 3);
        v19 = 0;
LABEL_29:
        v62 = (int *)(v20);
        v55 = v19;
        memcpy(v21, v16, v19);
        v20 = (uint32_t *)(v62);
        v19 = v55;
        if ( v62 != (int *)(&dword_20D3E6C) )
        {
LABEL_88:
          v20[2] = 0;
          *v20 = v19;
          v21[v19] = 0;
        }
LABEL_30:
        v82 = v21;
        v22 = *((uint32_t *)v21 - 3);
        if ( v22 == 0 )
          goto LABEL_34;
        v23 = *((uint32_t *)v78[0] - 3);
        v24 = v23 + v22;
        if ( v23 + v22 > *((uint32_t *)v78[0] - 2) || *((int *)v78[0] - 1) > 0 )
        {
          v56 = v23 + v22;
          sub_EA1BB0(v78, v23 + v22);
          v21 = v82;
          v24 = v56;
          v25 = (char *)v78[0] + *((uint32_t *)v78[0] - 3);
          if ( v22 == 1 )
            goto LABEL_81;
LABEL_33:
          v57 = v24;
          memcpy(v25, v21, v22);
          v26 = v78[0];
          v24 = v57;
          if ( v78[0] - 3 != (volatile int32_t *)(&dword_20D3E6C) )
            goto LABEL_82;
          goto LABEL_34;
        }
        v25 = (char *)v78[0] + v23;
        if ( v22 != 1 )
          goto LABEL_33;
LABEL_81:
        *v25 = *v21;
        v26 = v78[0];
        if ( v78[0] - 3 != (volatile int32_t *)(&dword_20D3E6C) )
        {
LABEL_82:
          *((uint32_t *)v26 - 1) = 0;
          *((uint32_t *)v26 - 3) = v24;
          *((uint8_t *)v26 + v24) = 0;
        }
LABEL_34:
        g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v82);
        v77 = 0;
        v27 = (const void **)(*(uint32_t *)(a2 + 48) + 4 * v68);
        v28 = (uint8_t *)(*v27);
        v29 = *((uint32_t *)*v27 - 1);
        if ( v29 >= 0 && v28 - 12 != (uint8_t *)&dword_20D3E6C )
        {
          if ( v29 != 0 )
          {
            g4_std::basic_string_char_char_traits_char_SA_77cf59::M_mutate(
              v27,
              0,
              0,
              0);
            v28 = (uint8_t *)(*v27);
          }
          *((uint32_t *)v28 - 1) = -1;
          v28 = (uint8_t *)(*v27);
        }
        LOBYTE(v77) = *v28;
        sub_EA19F0(&v79, (const char *)&v77);
        v30 = v79;
        v31 = *((uint32_t *)v79 - 3);
        if ( v31 == 0 )
          goto LABEL_43;
        v70 = *((uint32_t *)v78[0] - 3);
        v73 = v31 + v70;
        if ( v31 + v70 > *((uint32_t *)v78[0] - 2) || *((int *)v78[0] - 1) > 0 )
        {
          sub_EA1BB0(v78, v73);
          v30 = v79;
          v32 = (char *)v78[0] + *((uint32_t *)v78[0] - 3);
          if ( v31 == 1 )
            goto LABEL_85;
LABEL_42:
          memcpy(v32, v30, v31);
          v33 = v78[0];
          if ( v78[0] - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
            goto LABEL_86;
          goto LABEL_43;
        }
        v32 = (char *)v78[0] + v70;
        if ( v31 != 1 )
          goto LABEL_42;
LABEL_85:
        *v32 = *v30;
        v33 = v78[0];
        if ( v78[0] - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
        {
LABEL_86:
          *((uint32_t *)v33 - 1) = 0;
          *((uint32_t *)v33 - 3) = v73;
          *((uint8_t *)v33 + v73) = 0;
        }
LABEL_43:
        v65 = &v64[*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 48) + 4 * v68) - 12)];
        g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v79);
LABEL_44:
        v67 = *(uint32_t *)a3;
        v5 = *(uint32_t *)(*(uint32_t *)a3 - 12);
        if ( (unsigned int)(uintptr_t)(v65) >= v5 )
          break;
        v34 = (char *)memchr(&v65[*(uint32_t *)a3], 38, v5 - (uint32_t)(uintptr_t)(v65));
        if ( v34 == nullptr )
          break;
        v64 = &v34[-v67];
        if ( &v34[-v67] == (char *)-1 )
        {
          if ( (int)(v5 - 1) <= (int)(uintptr_t)(v65) )
            goto LABEL_8;
LABEL_48:
          if ( v5 >= (unsigned int)(uintptr_t)(v65) )
          {
            v35 = (char *)(v67 + v5);
            v36 = &v65[v67];
            if ( v35 == &v65[v67] )
            {
              v38 = (char *)(uintptr_t)(byte_20D3E78);
            }
            else if ( v36 != nullptr )
            {
              v74 = v35 - v36;
              v37 = sub_EA0970(v35 - v36, 0);
              v38 = (char *)(v37 + 12);
              if ( v74 != 1 )
              {
                memcpy(v38, &v65[v67], v74);
                goto LABEL_53;
              }
              *(uint8_t *)(v37 + 12) = v65[v67];
              if ( (int *)v37 != (int *)(uintptr_t)(&dword_20D3E6C) )
              {
LABEL_102:
                *(uint32_t *)(v37 + 8) = 0;
                *(uint32_t *)v37 = v74;
                v38[v74] = 0;
              }
            }
            else
            {
              if ( v35 != nullptr )
                goto LABEL_95;
              v37 = sub_EA0970(0, 0);
              v38 = (char *)(v37 + 12);
              v74 = 0;
              memcpy((void *)(v37 + 12), &v65[v67], 0);
LABEL_53:
              if ( (int *)v37 != (int *)(uintptr_t)(&dword_20D3E6C) )
                goto LABEL_102;
            }
            v80 = v38;
            v39 = *((uint32_t *)v38 - 3);
            if ( v39 == 0 )
              goto LABEL_58;
            v71 = *((uint32_t *)v78[0] - 3);
            v75 = v39 + v71;
            if ( v39 + v71 > *((uint32_t *)v78[0] - 2) || *((int *)v78[0] - 1) > 0 )
            {
              v58 = *((uint32_t *)v38 - 3);
              sub_EA1BB0(v78, v75);
              v39 = v58;
              v38 = v80;
              v40 = (char *)v78[0] + *((uint32_t *)v78[0] - 3);
              if ( v58 == 1 )
                goto LABEL_106;
            }
            else
            {
              v40 = (char *)v78[0] + v71;
              if ( v39 == 1 )
              {
LABEL_106:
                *v40 = *v38;
                v41 = v78[0];
                if ( v78[0] - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
                {
LABEL_107:
                  *((uint32_t *)v41 - 1) = 0;
                  *((uint32_t *)v41 - 3) = v75;
                  *((uint8_t *)v41 + v75) = 0;
                  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v80);
                  goto LABEL_8;
                }
LABEL_58:
                g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v80);
                goto LABEL_8;
              }
            }
            memcpy(v40, v38, v39);
            v41 = v78[0];
            if ( v78[0] - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
              goto LABEL_107;
            goto LABEL_58;
          }
LABEL_108:
          sub_1900210("basic_string::substr");
        }
        goto LABEL_6;
      }
LABEL_64:
      ++v68;
      v6 = *(uint32_t *)(a2 + 48);
      if ( v68 >= (*(uint32_t *)(a2 + 52) - v6) >> 2 )
      {
        v5 = *(uint32_t *)(v67 - 12);
LABEL_66:
        if ( (unsigned int)(uintptr_t)(v65) > v5 )
          goto LABEL_108;
        v43 = v64 - v65 + 1;
        v44 = v5 - (uint32_t)(uintptr_t)(v65);
        if ( v44 <= v43 )
          v43 = v44;
        v45 = &v65[v67];
        v46 = &v65[v43 + v67];
        if ( v46 == &v65[v67] )
        {
          v48 = (char *)(uintptr_t)(byte_20D3E78);
        }
        else if ( v45 != nullptr )
        {
          v59 = &v65[v67];
          v76 = v46 - v45;
          v47 = sub_EA0970(v46 - v45, 0);
          v48 = (char *)(v47 + 12);
          if ( v76 != 1 )
          {
            memcpy(v48, v59, v76);
            goto LABEL_73;
          }
          *(uint8_t *)(v47 + 12) = *v59;
          if ( (int *)v47 != (int *)(uintptr_t)(&dword_20D3E6C) )
          {
LABEL_97:
            *(uint32_t *)(v47 + 8) = 0;
            *(uint32_t *)v47 = v76;
            v48[v76] = 0;
          }
        }
        else
        {
          if ( v46 != nullptr )
            goto LABEL_95;
          v47 = sub_EA0970(0, 0);
          v48 = (char *)(v47 + 12);
          v76 = 0;
          memcpy((void *)(v47 + 12), nullptr, 0);
LABEL_73:
          if ( (int *)v47 != (int *)(uintptr_t)(&dword_20D3E6C) )
            goto LABEL_97;
        }
        v81 = v48;
        v49 = *((uint32_t *)v48 - 3);
        if ( v49 == 0 )
          goto LABEL_78;
        v50 = *((uint32_t *)v78[0] - 3);
        v51 = v50 + v49;
        if ( v50 + v49 > *((uint32_t *)v78[0] - 2) || *((int *)v78[0] - 1) > 0 )
        {
          v60 = v50 + v49;
          sub_EA1BB0(v78, v50 + v49);
          v48 = v81;
          v51 = v60;
          v52 = (char *)v78[0] + *((uint32_t *)v78[0] - 3);
          if ( v49 == 1 )
            goto LABEL_92;
        }
        else
        {
          v52 = (char *)v78[0] + v50;
          if ( v49 == 1 )
          {
LABEL_92:
            *v52 = *v48;
            v53 = v78[0];
            if ( v78[0] - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
            {
LABEL_93:
              *((uint32_t *)v53 - 1) = 0;
              *((uint32_t *)v53 - 3) = v51;
              *((uint8_t *)v53 + v51) = 0;
            }
LABEL_78:
            g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v81);
            v65 = v64 + 1;
            goto LABEL_44;
          }
        }
        v61 = v51;
        memcpy(v52, v48, v49);
        v53 = v78[0];
        v51 = v61;
        if ( v78[0] - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
          goto LABEL_93;
        goto LABEL_78;
      }
    }
  }
  if ( (int)(v5 - 1) > (int)(uintptr_t)(v65) )
    goto LABEL_48;
LABEL_8:
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
    a1,
    (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v78);
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v78);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_EE3C80  (binary VA: 0xee3c80)
// Original: sub_EE3C80
// ----------------------------------------------------------------------------
int sub_EE3C80(int a1, volatile int32_t **a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, unsigned int a10)
{
  volatile int32_t *v12;
  unsigned int v13;
  int v14;
  int result;
  int i;
  volatile int32_t *v17;
  uint8_t *v18;
  volatile int32_t *v19;
  int v20;
  uint8_t *v21;
  int v32;
  uint8_t *v33;
  int (*v34)(int, volatile int32_t *, unsigned int);
  size_t v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v23)) > _g4_s1 ? (16u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v24)) > _g4_s2 ? (20u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v25)) > _g4_s3 ? (24u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v26)) > _g4_s4 ? (28u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v27)) > _g4_s5 ? (32u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v28)) > _g4_s6 ? (36u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v29)) > _g4_s7 ? (40u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v30)) > _g4_s8 ? (44u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v31)) > _g4_s9 ? (48u + sizeof(_g4_t_v31)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);

  (*(void (**)(uint32_t, int *, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(a1 + 4) + 12))(
    *(uint32_t *)(a1 + 4),
    &v31,
    4,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( *(uint8_t *)(a1 + 12) != 0 )
  {
    v36 = __builtin_bswap32(a10);
    a10 = v36;
  }
  else
  {
    v36 = a10;
  }
  v12 = *a2;
  v13 = *((uint32_t *)*a2 - 3);
  if ( v36 > 0x3FFFFFFC )
    sub_1900180("basic_string::resize");
  if ( v13 < v36 )
  {
    v35 = v36 - v13;
    if ( v36 == v13 )
    {
      v37 = v36;
    }
    else
    {
      if ( v35 > 1073741820 - v13 )
        sub_1900180("basic_string::append");
      if ( v36 > *((uint32_t *)v12 - 2) || *((int *)v12 - 1) > 0 )
      {
        sub_EA1BB0(a2, v36);
        v12 = *a2;
        v13 = *((uint32_t *)*a2 - 3);
      }
      v21 = (uint8_t *)((char *)v12 + v13);
      if ( v35 == 1 )
        *v21 = 0;
      else
        memset(v21, 0, v35);
      v12 = *a2;
      if ( *a2 - 3 == (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
      {
        v37 = a10;
      }
      else
      {
        *((uint32_t *)v12 - 1) = 0;
        *((uint32_t *)v12 - 3) = v36;
        *((uint8_t *)v12 + v36) = 0;
        v37 = a10;
        v12 = *a2;
      }
    }
  }
  else
  {
    v37 = v36;
    if ( v13 > v36 )
    {
      g4_std::basic_string_char_char_traits_char_SA_77cf59::M_mutate(
        (const void **)a2,
        v36,
        v13 - v36,
        0);
      v37 = a10;
      v12 = *a2;
    }
  }
  v14 = *(uint32_t *)(a1 + 4);
  v34 = *(int (**)(int, volatile int32_t *, unsigned int))(*(uint32_t *)v14 + 12);
  if ( *((int *)v12 - 1) >= 0 && v12 - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
  {
    if ( *((uint32_t *)v12 - 1) != 0 )
    {
      v32 = *(uint32_t *)(a1 + 4);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::M_mutate(
        (const void **)a2,
        0,
        0,
        0);
      v12 = *a2;
      v14 = v32;
    }
    *((uint32_t *)v12 - 1) = -1;
    v12 = *a2;
  }
  result = v34(v14, v12, v37);
  if ( *(uint8_t *)(a1 + 12) != 0 && v36 != 0 )
  {
    for ( i = 0; i != v36; ++i )
    {
      v17 = *a2;
      v38 = *((uint32_t *)*a2 - 1);
      v18 = (uint8_t *)*a2 + i;
      v33 = v18;
      if ( v38 >= 0 && v17 - 3 != (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
      {
        if ( v38 != 0 )
        {
          g4_std::basic_string_char_char_traits_char_SA_77cf59::M_mutate(
            (const void **)a2,
            0,
            0,
            0);
          v17 = *a2;
        }
        *((uint32_t *)v17 - 1) = -1;
        v19 = *a2;
        v33 = (uint8_t *)((char *)*a2 + i);
        v20 = *((uint32_t *)*a2 - 1);
        if ( v20 < 0 || v19 - 3 == (volatile int32_t *)(uintptr_t)(&dword_20D3E6C) )
        {
          v18 = (uint8_t *)*a2 + i;
        }
        else
        {
          if ( v20 != 0 )
          {
            g4_std::basic_string_char_char_traits_char_SA_77cf59::M_mutate(
              (const void **)a2,
              0,
              0,
              0);
            v19 = *a2;
          }
          *((uint32_t *)v19 - 1) = -1;
          v18 = (uint8_t *)*a2 + i;
        }
      }
      result = *v18;
      *v33 = result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_EF02F0  (binary VA: 0xef02f0)
// Original: sub_EF02F0
// ----------------------------------------------------------------------------
void sub_EF02F0(int a1, int a2, int a3, const glitch::scene::STextureAtlasArray::Self *a4)
{
  int v4;
  int v5;
  int v6;
  uint16_t v7; // bp
  unsigned int v8;
  int v9;
  int v10;
  int i;
  uint16_t v12;
  unsigned int v13;
  unsigned int v14;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef bool _g4_t_v17;
  typedef bool _g4_t_v18;
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v22[6];
  typedef uint16_t _g4_t_v23;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v16)) > _g4_s1 ? (20u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v17)) > _g4_s2 ? (24u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v18)) > _g4_s3 ? (24u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v20)) > _g4_s4 ? (36u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v22)) > _g4_s5 ? (52u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (78u + sizeof(_g4_t_v23)) > _g4_s6 ? (78u + sizeof(_g4_t_v23)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 78u);

  v4 = a2;
  v20 = (a3 - 1) / 2;
  if ( v20 > a2 )
  {
    while ( 1 )
    {
      v5 = 2 * v4 + 2;
      v9 = 2 * v4 + 1;
      v10 = a1 + 44 * v9;
      v6 = a1 + 44 * v5;
      v7 = *(uint16_t *)(v10 + 26);
      v17 = *(uint16_t *)(v6 + 26) < v7;
      if ( *(uint16_t *)(v6 + 26) == v7 )
      {
        v16 = (*(uint32_t *)(v6 + 4) - *(uint32_t *)v6) >> 3;
        v8 = (*(uint32_t *)(v10 + 4) - *(uint32_t *)v10) >> 3;
        v17 = v16 > v8;
        if ( v16 == v8 )
          v17 = ((*(uint32_t *)(*(uint32_t *)(**(uint32_t **)v6 + 16) + 36) >> 6) & 0x3Fu) < ((*(uint32_t *)(*(uint32_t *)(**(uint32_t **)v10 + 16) + 36) >> 6)
                                                                                      & 0x3Fu);
      }
      if ( !v17 )
      {
        v10 = a1 + 44 * v5;
        v9 = 2 * v4 + 2;
      }
      glitch::scene::STextureAtlasArray::opAssign(
        (glitch::scene::STextureAtlasArray::Self *)(a1 + 44 * v4),
        (const glitch::scene::STextureAtlasArray::Self *)v10);
      if ( v20 <= v9 )
        break;
      v4 = v9;
    }
  }
  else
  {
    v9 = a2;
    v10 = a1 + 44 * a2;
  }
  if ( (a3 & 1) == 0 && v9 == (a3 - 2) / 2 )
  {
    v9 = 2 * v9 + 1;
    v15 = (glitch::scene::STextureAtlasArray::Self *)v10;
    v10 = a1 + 44 * v9;
    glitch::scene::STextureAtlasArray::opAssign(v15, (const glitch::scene::STextureAtlasArray::Self *)v10);
  }
  glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v22, a4);
  if ( v9 > a2 )
  {
    for ( i = (v9 - 1) / 2; ; i = (i - 1) / 2 )
    {
      v10 = a1 + 44 * i;
      v12 = *(uint16_t *)(v10 + 26);
      v18 = v12 < v23;
      if ( v12 == v23 )
      {
        v13 = (*(uint32_t *)(v10 + 4) - *(uint32_t *)v10) >> 3;
        v14 = (v22[1] - v22[0]) >> 3;
        v18 = v13 > v14;
        if ( v13 == v14 )
          v18 = ((*(uint32_t *)(*(uint32_t *)(**(uint32_t **)v10 + 16) + 36) >> 6) & 0x3Fu) < ((*(uint32_t *)(*(uint32_t *)(*(uint32_t *)v22[0] + 16) + 36) >> 6)
                                                                                       & 0x3Fu);
      }
      if ( !v18 )
        break;
      glitch::scene::STextureAtlasArray::opAssign(
        (glitch::scene::STextureAtlasArray::Self *)(a1 + 44 * v9),
        (const glitch::scene::STextureAtlasArray::Self *)(a1 + 44 * i));
      if ( i <= a2 )
        goto LABEL_18;
      v9 = i;
    }
    v10 = a1 + 44 * v9;
  }
LABEL_18:
  glitch::scene::STextureAtlasArray::opAssign(
    (glitch::scene::STextureAtlasArray::Self *)v10,
    (const glitch::scene::STextureAtlasArray::Self *)v22);
  glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v22);
}

// ----------------------------------------------------------------------------
// Function: sub_EF0560  (binary VA: 0xef0560)
// Original: sub_EF0560
// ----------------------------------------------------------------------------
void sub_EF0560(int a1, int a2, int a3, const glitch::scene::STextureAtlasArray::Self *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  char v7; // si
  unsigned int v8;
  unsigned int v9;
  int *v10;
  unsigned int *v11;
  unsigned int *v12;
  unsigned int v13;
  unsigned int v14;
  char v15; // si
  int v16;
  unsigned int v17;
  int v18;
  unsigned int *v19;
  typedef unsigned int *_g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef int *_g4_t_v22;
  typedef int *_g4_t_v23;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v29;
  typedef uint32_t _g4_t_v31[18];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v23)) > _g4_s3 ? (12u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v24)) > _g4_s4 ? (16u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v25)) > _g4_s5 ? (20u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v26)) > _g4_s6 ? (24u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v27)) > _g4_s7 ? (24u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v29)) > _g4_s8 ? (36u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v31)) > _g4_s9 ? (52u + sizeof(_g4_t_v31)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);

  v29 = a2;
  if ( a2 < (a3 - 1) / 2 )
  {
    while ( 1 )
    {
      v26 = 2 * v29 + 2;
      v24 = (glitch::scene::STextureAtlasArray::Self *)(a1 + 44 * (2 * v29 + 1));
      v4 = *(unsigned int **)v24;
      v25 = 2 * v29 + 1;
      v20 = *(unsigned int **)(a1 + 44 * v26);
      v22 = *(int **)(a1 + 44 * v26 + 4);
      v5 = ((char *)v22 - (char *)v20) >> 3;
      v6 = (*((uint32_t *)v24 + 1) - *(uint32_t *)v24) >> 3;
      v7 = v5 > v6;
      if ( v5 != v6 )
        goto LABEL_3;
      if ( v20 != (unsigned int *)v22 )
      {
        v8 = *v4;
        v9 = *v20;
        if ( *v20 != *v4 )
        {
LABEL_16:
          v7 = v9 < v8;
LABEL_3:
          if ( v7 != 0 )
            goto LABEL_5;
          goto LABEL_4;
        }
        v7 = *((uint8_t *)v20 + 4);
        if ( v7 != *((uint8_t *)v4 + 4) )
          goto LABEL_3;
        v10 = (int *)(v4 + 3);
        v11 = *(unsigned int **)(a1 + 44 * v26);
        while ( 1 )
        {
          v11 += 2;
          if ( v22 == (int *)v11 )
            break;
          v8 = *(v10 - 1);
          if ( *v11 != v8 )
          {
            v9 = *v11;
            goto LABEL_16;
          }
          v7 = *((uint8_t *)v11 + 4);
          v10 += 2;
          if ( v7 != *((uint8_t *)v10 - 8) )
            goto LABEL_3;
        }
      }
LABEL_4:
      v24 = (glitch::scene::STextureAtlasArray::Self *)(a1 + 44 * v26);
      v25 = 2 * v29 + 2;
LABEL_5:
      glitch::scene::STextureAtlasArray::opAssign((glitch::scene::STextureAtlasArray::Self *)(a1 + 44 * v29), v24);
      if ( v25 >= (a3 - 1) / 2 )
        goto LABEL_17;
      v29 = v25;
    }
  }
  v24 = (glitch::scene::STextureAtlasArray::Self *)(a1 + 44 * a2);
  v25 = a2;
LABEL_17:
  if ( (a3 & 1) == 0 && v25 == (a3 - 2) / 2 )
  {
    v25 = 2 * v25 + 1;
    glitch::scene::STextureAtlasArray::opAssign(v24, (const glitch::scene::STextureAtlasArray::Self *)(a1 + 44 * v25));
    v24 = (glitch::scene::STextureAtlasArray::Self *)(a1 + 44 * v25);
  }
  glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v31, a4);
  if ( v25 <= a2 )
  {
LABEL_21:
    glitch::scene::STextureAtlasArray::opAssign(v24, (const glitch::scene::STextureAtlasArray::Self *)v31);
    goto LABEL_22;
  }
  v27 = (v25 - 1) / 2;
  while ( 1 )
  {
    v24 = (glitch::scene::STextureAtlasArray::Self *)(a1 + 44 * v27);
    v12 = *(unsigned int **)v24;
    v13 = (*((uint32_t *)v24 + 1) - *(uint32_t *)v24) >> 3;
    v23 = *((int **)v24 + 1);
    v14 = (v31[1] - v31[0]) >> 3;
    v15 = v13 > v14;
    if ( v13 == v14 )
    {
      if ( v12 == (unsigned int *)v23 )
        goto LABEL_26;
      v17 = *v12;
      v21 = *(uint32_t *)v31[0];
      if ( *v12 == *(uint32_t *)v31[0] )
        break;
LABEL_37:
      v15 = v17 < v21;
    }
LABEL_25:
    if ( v15 == 0 )
      goto LABEL_26;
    glitch::scene::STextureAtlasArray::opAssign((glitch::scene::STextureAtlasArray::Self *)(a1 + 44 * v25), v24);
    if ( a2 >= v27 )
      goto LABEL_21;
    v16 = v27;
    v27 = (v27 - 1) / 2;
    v25 = v16;
  }
  v15 = *((uint8_t *)v12 + 4);
  if ( v15 != *(uint8_t *)(v31[0] + 4) )
    goto LABEL_25;
  v18 = v31[0] + 12;
  v19 = *(unsigned int **)v24;
  while ( 1 )
  {
    v19 += 2;
    if ( v23 == (int *)v19 )
      break;
    v21 = *(uint32_t *)(v18 - 4);
    if ( *v19 != v21 )
    {
      v17 = *v19;
      goto LABEL_37;
    }
    v15 = *((uint8_t *)v19 + 4);
    v18 += 8;
    if ( v15 != *(uint8_t *)(v18 - 8) )
      goto LABEL_25;
  }
LABEL_26:
  glitch::scene::STextureAtlasArray::opAssign(
    (glitch::scene::STextureAtlasArray::Self *)(a1 + 44 * v25),
    (const glitch::scene::STextureAtlasArray::Self *)v31);
LABEL_22:
  glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v31);
}

// ----------------------------------------------------------------------------
// Function: sub_EF08B0  (binary VA: 0xef08b0)
// Original: sub_EF08B0
// ----------------------------------------------------------------------------
void sub_EF08B0(const glitch::scene::STextureAtlasArray::Self **a1, const glitch::scene::STextureAtlasArray::Self *a2, unsigned int a3, const glitch::scene::STextureAtlasArray::Self *a4)
{
  const glitch::scene::STextureAtlasArray::Self *v4;
  glitch::scene::STextureAtlasArray::Self *v5;
  const glitch::scene::STextureAtlasArray::Self *v6;
  const glitch::scene::STextureAtlasArray::Self *v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  bool v11;
  unsigned int v12;
  size_t v13;
  glitch::scene::STextureAtlasArray::Self *v14;
  unsigned int i;
  const glitch::scene::STextureAtlasArray::Self *v16;
  glitch::scene::STextureAtlasArray::Self *v17;
  const glitch::scene::STextureAtlasArray::Self *v18;
  int *v19;
  glitch::scene::STextureAtlasArray::Self *v20;
  const glitch::scene::STextureAtlasArray::Self *v21;
  const glitch::scene::STextureAtlasArray::Self *v22;
  int v23;
  const glitch::scene::STextureAtlasArray::Self *v24;
  glitch::scene::STextureAtlasArray::Self *v25;
  const glitch::scene::STextureAtlasArray::Self *v26;
  unsigned int v27;
  glitch::scene::STextureAtlasArray::Self *v28;
  const glitch::scene::STextureAtlasArray::Self *v29;
  glitch::scene::STextureAtlasArray::Self *v30;
  glitch::scene::STextureAtlasArray::Self *v31;
  const glitch::scene::STextureAtlasArray::Self *v32;
  glitch::scene::STextureAtlasArray::Self *v33;
  glitch::scene::STextureAtlasArray::Self *v34;
  const glitch::scene::STextureAtlasArray::Self *v35;
  int v36;
  const glitch::scene::STextureAtlasArray::Self *v37;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v38;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v39;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v40;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v41;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v42;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v48;
  typedef const glitch::scene::STextureAtlasArray::Self *_g4_t_v49;
  typedef const glitch::scene::STextureAtlasArray::Self *_g4_t_v50;
  typedef size_t _g4_t_v51;
  typedef size_t _g4_t_v52;
  typedef const glitch::scene::STextureAtlasArray::Self *_g4_t_v53;
  typedef uint8_t _g4_t_v54[72];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v38)) > _g4_s0 ? (0u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v39)) > _g4_s1 ? (0u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v40)) > _g4_s2 ? (0u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v41)) > _g4_s3 ? (20u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v42)) > _g4_s4 ? (20u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v44)) > _g4_s5 ? (24u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v45)) > _g4_s6 ? (28u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v46)) > _g4_s7 ? (28u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v47)) > _g4_s8 ? (28u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v48)) > _g4_s9 ? (32u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v49)) > _g4_s10 ? (32u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v50)) > _g4_s11 ? (32u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v51)) > _g4_s12 ? (36u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v52)) > _g4_s13 ? (36u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v53)) > _g4_s14 ? (40u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v54)) > _g4_s15 ? (52u + sizeof(_g4_t_v54)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 40u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 52u);

  v4 = a2;
  v5 = (glitch::scene::STextureAtlasArray::Self *)(a2);
  if ( a3 == 0 )
    return;
  v6 = a1[1];
  if ( a3 > -1171354717 * ((a1[2] - v6) >> 2) )
  {
    v7 = *a1;
    v8 = -1171354717 * ((v6 - *a1) >> 2);
    if ( a3 > 97612893 - v8 )
      sub_1900180("vector::_M_fill_insert");
    v9 = a3;
    if ( v8 >= a3 )
      v9 = v8;
    v10 = -1171354717 * ((v4 - v7) >> 2);
    v11 = __CFADD__(v9, v8);
    v12 = v9 + v8;
    if ( v11 || v12 > 0x5D1745D )
    {
      v51 = 0xFFFFFFFC;
      v13 = 0xFFFFFFFC;
    }
    else
    {
      if ( v12 == 0 )
      {
        v51 = 0;
        v45 = 0;
LABEL_9:
        v53 = v5;
        v14 = (glitch::scene::STextureAtlasArray::Self *)(v45 + 44 * v10);
        for ( i = a3; i != 0; --i )
        {
          if ( v14 != nullptr )
            glitch::scene::STextureAtlasArray::Construct(v14, a4);
          v14 = (glitch::scene::STextureAtlasArray::Self *)((char *)v14 + 44);
        }
        v16 = v53;
        v17 = (glitch::scene::STextureAtlasArray::Self *)v45;
        if ( v4 != *a1 )
        {
          v18 = *a1;
          do
          {
            if ( v17 != nullptr )
              glitch::scene::STextureAtlasArray::Construct(v17, v18);
            v18 = (const glitch::scene::STextureAtlasArray::Self *)((char *)v18 + 44);
            v17 = (glitch::scene::STextureAtlasArray::Self *)((char *)v17 + 44);
          }
          while ( v4 != v18 );
          v16 = v53;
        }
        v19 = (int *)a1;
        v20 = (glitch::scene::STextureAtlasArray::Self *)((char *)v17 + 44 * a3);
        v21 = a1[1];
        if ( v4 != v21 )
        {
          v22 = a1[1];
          do
          {
            if ( v20 != nullptr )
              glitch::scene::STextureAtlasArray::Construct(v20, v16);
            v16 = (const glitch::scene::STextureAtlasArray::Self *)((char *)v16 + 44);
            v20 = (glitch::scene::STextureAtlasArray::Self *)((char *)v20 + 44);
          }
          while ( v22 != v16 );
          v19 = (int *)a1;
          v21 = a1[1];
        }
        v23 = *v19;
        if ( (const glitch::scene::STextureAtlasArray::Self *)*v19 != v21 )
        {
          v24 = v21;
          do
          {
            v38 = (glitch::scene::STextureAtlasArray::Self *)v23;
            v23 += 44;
            glitch::scene::STextureAtlasArray::Destroy(v38);
          }
          while ( (const glitch::scene::STextureAtlasArray::Self *)v23 != v24 );
          v23 = (int)(uintptr_t)(*a1);
        }
        if ( v23 != 0 )
          gll_operator_delete_arr(v23);
        *a1 = (const glitch::scene::STextureAtlasArray::Self *)v45;
        a1[1] = v20;
        a1[2] = (const glitch::scene::STextureAtlasArray::Self *)(v45 + v51);
        return;
      }
      v51 = 44 * v12;
      v13 = 44 * v12;
    }
    v45 = sub_4EBDC0(v13);
    goto LABEL_9;
  }
  glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v54, a4);
  v25 = (glitch::scene::STextureAtlasArray::Self *)(a1[1]);
  v46 = -1171354717 * ((v25 - v4) >> 2);
  if ( a3 < v46 )
  {
    v47 = 44 * a3;
    v42 = (glitch::scene::STextureAtlasArray::Self *)((char *)v25 - 44 * a3);
    v32 = a1[1];
    if ( v25 != v42 )
    {
      v49 = v4;
      v33 = (glitch::scene::STextureAtlasArray::Self *)(a1[1]);
      v52 = (size_t)v4;
      v34 = v33;
      v35 = (glitch::scene::STextureAtlasArray::Self *)((char *)v25 - 44 * a3);
      do
      {
        if ( v33 != nullptr )
          glitch::scene::STextureAtlasArray::Construct(v33, v35);
        v35 = (const glitch::scene::STextureAtlasArray::Self *)((char *)v35 + 44);
        v33 = (glitch::scene::STextureAtlasArray::Self *)((char *)v33 + 44);
      }
      while ( v34 != v35 );
      v25 = v34;
      v5 = (glitch::scene::STextureAtlasArray::Self *)(v49);
      v4 = (const glitch::scene::STextureAtlasArray::Self *)v52;
      v32 = a1[1];
    }
    a1[1] = (const glitch::scene::STextureAtlasArray::Self *)((char *)v32 + v47);
    if ( -1171354717 * ((v42 - v4) >> 2) > 0 )
    {
      v44 = v5;
      v50 = v4;
      v36 = -1171354717 * ((v42 - v4) >> 2);
      v37 = v42;
      do
      {
        v37 = (const glitch::scene::STextureAtlasArray::Self *)((char *)v37 - 44);
        v25 = (glitch::scene::STextureAtlasArray::Self *)((char *)v25 - 44);
        glitch::scene::STextureAtlasArray::opAssign(v25, v37);
        --v36;
      }
      while ( v36 != 0 );
      v5 = v44;
      v4 = v50;
    }
    if ( v4 != (const glitch::scene::STextureAtlasArray::Self *)((char *)v4 + v47) )
    {
      do
      {
        v40 = v5;
        v5 = (glitch::scene::STextureAtlasArray::Self *)((char *)v5 + 44);
        glitch::scene::STextureAtlasArray::opAssign(v40, (const glitch::scene::STextureAtlasArray::Self *)v54);
      }
      while ( (const glitch::scene::STextureAtlasArray::Self *)((char *)v4 + v47) != v5 );
    }
  }
  else
  {
    v26 = a1[1];
    if ( a3 != v46 )
    {
      v48 = (glitch::scene::STextureAtlasArray::Self *)(a1[1]);
      v27 = a3 - v46;
      v28 = v48;
      do
      {
        if ( v28 != nullptr )
          glitch::scene::STextureAtlasArray::Construct(v28, (const glitch::scene::STextureAtlasArray::Self *)v54);
        v28 = (glitch::scene::STextureAtlasArray::Self *)((char *)v28 + 44);
        --v27;
      }
      while ( v27 != 0 );
      v5 = (glitch::scene::STextureAtlasArray::Self *)(v4);
      v25 = v48;
      v26 = a1[1];
    }
    v29 = (const glitch::scene::STextureAtlasArray::Self *)((char *)v26 + 44 * (a3 - v46));
    a1[1] = v29;
    if ( v4 == v25 )
    {
      a1[1] = (const glitch::scene::STextureAtlasArray::Self *)((char *)v29 + 44 * v46);
    }
    else
    {
      v41 = v5;
      v30 = (glitch::scene::STextureAtlasArray::Self *)((const glitch::scene::STextureAtlasArray::Self *)((char *)v26 + 44 * (a3 - v46)));
      do
      {
        if ( v30 != nullptr )
          glitch::scene::STextureAtlasArray::Construct(v30, v4);
        v4 = (const glitch::scene::STextureAtlasArray::Self *)((char *)v4 + 44);
        v30 = (glitch::scene::STextureAtlasArray::Self *)((char *)v30 + 44);
      }
      while ( v25 != v4 );
      v31 = v41;
      a1[1] = (const glitch::scene::STextureAtlasArray::Self *)((char *)a1[1] + 44 * v46);
      do
      {
        v39 = v31;
        v31 = (glitch::scene::STextureAtlasArray::Self *)((char *)v31 + 44);
        glitch::scene::STextureAtlasArray::opAssign(v39, (const glitch::scene::STextureAtlasArray::Self *)v54);
      }
      while ( v25 != v31 );
    }
  }
  glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v54);
}

// ----------------------------------------------------------------------------
// Function: sub_EF58E0  (binary VA: 0xef58e0)
// Original: sub_EF58E0
// ----------------------------------------------------------------------------
std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> * sub_EF58E0(std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *a1, int a2, const wchar_t **a3)
{
  const wchar_t *v3;
  wchar_t *v5;
  const wchar_t *v6;
  unsigned int v7;
  unsigned int v8;
  wchar_t *v9;
  int v10;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  const wchar_t *v20;
  const wchar_t *v21;
  unsigned int v22;
  size_t v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  wchar_t *v28;
  wchar_t *v29;
  wchar_t *v30;
  size_t v31;
  int v32;
  wchar_t v33;
  wchar_t *v34;
  wchar_t *v35;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v36;
  wchar_t *v37;
  int v38;
  const wchar_t *v39;
  size_t v40;
  wchar_t *v41;
  wchar_t *v42;
  wchar_t v43;
  unsigned int v44;
  unsigned int v45;
  const wchar_t *v46;
  const wchar_t *v47;
  unsigned int v48;
  size_t v49;
  unsigned int v50;
  unsigned int v51;
  int v52;
  unsigned int v53;
  wchar_t *v54;
  wchar_t *v55;
  wchar_t *v56;
  size_t v57;
  int v58;
  wchar_t v59;
  wchar_t *v60;
  wchar_t *v61;
  const wchar_t *v62;
  const wchar_t *v63;
  unsigned int v64;
  size_t v65;
  unsigned int v66;
  int v67;
  int v68;
  wchar_t *v69;
  wchar_t *v70;
  wchar_t *v71;
  size_t v72;
  int v73;
  wchar_t v74;
  wchar_t *v75;
  wchar_t *v76;
  wchar_t *v77;
  wchar_t *v78;
  const wchar_t *v79;
  size_t v80;
  wchar_t *v81;
  wchar_t *v82;
  typedef const wchar_t *_g4_t_v83;
  typedef wchar_t _g4_t_v84;
  typedef wchar_t _g4_t_v85;
  typedef unsigned int _g4_t_v86;
  typedef wchar_t _g4_t_v87;
  typedef wchar_t _g4_t_v88;
  typedef const wchar_t *_g4_t_v89;
  typedef wchar_t _g4_t_v90;
  typedef wchar_t _g4_t_v91;
  typedef const wchar_t *_g4_t_v92;
  typedef unsigned int _g4_t_v93;
  typedef const wchar_t *_g4_t_v94;
  typedef unsigned int _g4_t_v95;
  typedef int _g4_t_v97;
  typedef unsigned int _g4_t_v98;
  typedef const wchar_t *_g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef const wchar_t *_g4_t_v104;
  typedef size_t _g4_t_v105;
  typedef unsigned int _g4_t_v106;
  typedef size_t _g4_t_v107;
  typedef size_t _g4_t_v108;
  typedef wchar_t *_g4_t_v109[2];
  typedef const wchar_t *_g4_t_v110;
  typedef wchar_t *_g4_t_v111;
  typedef wchar_t *_g4_t_v112;
  typedef wchar_t *_g4_t_v113;
  typedef wchar_t _g4_t_v114[5];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v83)) > _g4_s0 ? (8u + sizeof(_g4_t_v83)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v84)) > _g4_s1 ? (8u + sizeof(_g4_t_v84)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v85)) > _g4_s2 ? (8u + sizeof(_g4_t_v85)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v86)) > _g4_s3 ? (8u + sizeof(_g4_t_v86)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v87)) > _g4_s4 ? (8u + sizeof(_g4_t_v87)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v88)) > _g4_s5 ? (8u + sizeof(_g4_t_v88)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v89)) > _g4_s6 ? (8u + sizeof(_g4_t_v89)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v90)) > _g4_s7 ? (8u + sizeof(_g4_t_v90)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v91)) > _g4_s8 ? (8u + sizeof(_g4_t_v91)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v92)) > _g4_s9 ? (8u + sizeof(_g4_t_v92)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v93)) > _g4_s10 ? (12u + sizeof(_g4_t_v93)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v94)) > _g4_s11 ? (12u + sizeof(_g4_t_v94)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v95)) > _g4_s12 ? (12u + sizeof(_g4_t_v95)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v97)) > _g4_s13 ? (20u + sizeof(_g4_t_v97)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v98)) > _g4_s14 ? (24u + sizeof(_g4_t_v98)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v100)) > _g4_s15 ? (40u + sizeof(_g4_t_v100)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v101)) > _g4_s16 ? (44u + sizeof(_g4_t_v101)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v102)) > _g4_s17 ? (48u + sizeof(_g4_t_v102)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v103)) > _g4_s18 ? (48u + sizeof(_g4_t_v103)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v104)) > _g4_s19 ? (52u + sizeof(_g4_t_v104)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v105)) > _g4_s20 ? (52u + sizeof(_g4_t_v105)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v106)) > _g4_s21 ? (52u + sizeof(_g4_t_v106)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v107)) > _g4_s22 ? (52u + sizeof(_g4_t_v107)) : _g4_s22,
    _g4_s24 = (52u + sizeof(_g4_t_v108)) > _g4_s23 ? (52u + sizeof(_g4_t_v108)) : _g4_s23,
    _g4_s25 = (56u + sizeof(_g4_t_v109)) > _g4_s24 ? (56u + sizeof(_g4_t_v109)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v110)) > _g4_s25 ? (64u + sizeof(_g4_t_v110)) : _g4_s25,
    _g4_s27 = (68u + sizeof(_g4_t_v111)) > _g4_s26 ? (68u + sizeof(_g4_t_v111)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v112)) > _g4_s27 ? (72u + sizeof(_g4_t_v112)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v113)) > _g4_s28 ? (76u + sizeof(_g4_t_v113)) : _g4_s28,
    _g4_s30 = (80u + sizeof(_g4_t_v114)) > _g4_s29 ? (80u + sizeof(_g4_t_v114)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 8u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 8u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 8u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 8u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 8u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 8u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 8u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 8u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 8u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 8u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 12u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 12u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 12u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 20u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 24u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 40u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 44u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 48u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 48u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 52u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 52u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 52u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 52u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 52u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 56u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 64u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 68u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 72u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 76u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 80u);

  v3 = *a3;
  if ( *(*a3 - 3) == 0 )
    goto LABEL_2;
  v5 = (wchar_t *)(wmemchr(v3, 38, *(*a3 - 3)));
  if ( v5 == nullptr )
  {
    v79 = *a3;
    v80 = *(*a3 - 3);
LABEL_131:
    if ( v80 == 0 || (v81 = (wchar_t *)(wmemchr(v79, 38, v80))) == nullptr || (v97 = v81 - v79) == -1 )
    {
LABEL_2:
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
        a1,
        (const std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)a3);
      return a1;
    }
    goto LABEL_5;
  }
  v97 = v5 - v3;
  if ( v97 == -1 )
  {
    v79 = *a3;
    v80 = *(*a3 - 3);
    goto LABEL_131;
  }
LABEL_5:
  v98 = 0;
  v6 = *a3;
  v109[0] = (wchar_t *)&unk_20DF960;
  v100 = v6;
  v7 = *(v6 - 3);
  v8 = 0;
  if ( v97 >= (int)(v7 - 2) )
    goto LABEL_6;
  while ( 2 )
  {
    v10 = *(uint32_t *)(a2 + 48);
    if ( *(uint32_t *)(a2 + 52) - v10 <= 3 )
      goto LABEL_61;
    v101 = 0;
    while ( 1 )
    {
      v104 = &v100[v97 + 1];
      v11 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v10 + 4 * v101);
      v12 = *(uint32_t *)v11;
      v102 = *(uint32_t *)(*(uint32_t *)v11 - 12) - 1;
      v13 = *(uint32_t *)(*(uint32_t *)v11 - 4);
      if ( v13 >= 0
        && (wchar_t *)(v12 - 12) != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
      {
        if ( v13 != 0 )
        {
          g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::M_mutate(
            v11,
            0,
            0,
            0);
          v12 = *(uint32_t *)v11;
        }
        *(uint32_t *)(v12 - 4) = -1;
        v12 = *(uint32_t *)v11;
        v100 = *a3;
      }
      v14 = *(uint32_t *)(v12 + 4);
      v15 = v12 + 4;
      v16 = 0;
      v17 = 0;
      if ( v14 == 0 )
        break;
      if ( *v104 == 0 || v102 <= 0 )
      {
        v16 = 0;
        v17 = 0;
        break;
      }
      if ( *v104 == v14 )
      {
        do
        {
          v16 = ++v17;
          v14 = *(uint32_t *)(v15 + 4 * v17);
          if ( v14 == 0 )
            goto LABEL_23;
          v43 = v104[v17];
          if ( v43 == 0 || v102 <= v17 )
            goto LABEL_23;
        }
        while ( v14 == v43 );
      }
LABEL_59:
      ++v101;
      v10 = *(uint32_t *)(a2 + 48);
      if ( v101 >= (*(uint32_t *)(a2 + 52) - v10) >> 2 )
      {
        v7 = *(v100 - 3);
LABEL_61:
        if ( v98 > v7 )
          goto LABEL_141;
        v44 = v7 - v98;
        v45 = v97 - v98 + 1;
        if ( v44 <= v45 )
          v45 = v44;
        v46 = &v100[v98];
        v47 = &v100[v98 + v45];
        if ( v47 == v46 )
        {
          v56 = (wchar_t *)&unk_20DF960;
LABEL_75:
          v112 = v56;
          v57 = *(v56 - 3);
          if ( v57 == 0 )
            goto LABEL_79;
          v58 = *(v109[0] - 3);
          v59 = v58 + v57;
          if ( v58 + v57 > *(v109[0] - 2) || *(v109[0] - 1) > 0 )
          {
            v87 = v58 + v57;
            sub_EA3030(v109, v58 + v57);
            v56 = v112;
            v59 = v87;
            v60 = &v109[0][*(v109[0] - 3)];
            if ( v57 == 1 )
              goto LABEL_95;
          }
          else
          {
            v60 = &v109[0][v58];
            if ( v57 == 1 )
            {
LABEL_95:
              *v60 = *v56;
              v61 = v109[0];
              if ( v109[0] - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
                goto LABEL_96;
              goto LABEL_79;
            }
          }
          v88 = v59;
          wmemcpy(v60, v56, v57);
          v61 = v109[0];
          v59 = v88;
          if ( v109[0] - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
          {
LABEL_96:
            *(v61 - 1) = 0;
            *(v61 - 3) = v59;
            v61[v59] = 0;
          }
LABEL_79:
          g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v112);
          v8 = v97 + 1;
          v98 = v97 + 1;
          goto LABEL_54;
        }
        if ( v46 != nullptr )
        {
          v48 = v47 - v46;
          v107 = v48;
          if ( v48 > 0xFFFFFFE )
            goto LABEL_140;
          v49 = 4 * v48 + 16;
          v50 = 4 * v48 + 32;
          if ( v50 > 0x1000 && v48 != 0 )
          {
            v51 = 4096 - (v50 & 0xFFF);
            v52 = 268435454;
            v53 = v48 + (v51 >> 2);
            if ( v53 <= 0xFFFFFFE )
              v52 = v53;
            v49 = 4 * v52 + 16;
          }
          else
          {
            v52 = v48;
          }
          v94 = &v100[v98];
          v86 = v48;
          v54 = (wchar_t *)sub_4EBDC0(v49);
          v54[1] = v52;
          v54[2] = 0;
          v55 = v54;
          v56 = v54 + 3;
          if ( v86 == 1 )
          {
            v54[3] = *v94;
            if ( v54 == (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
              goto LABEL_75;
            goto LABEL_100;
          }
          wmemcpy(v56, v94, v107);
        }
        else
        {
          if ( v47 != nullptr )
            goto LABEL_98;
          v77 = (wchar_t *)sub_4EBDC0(0x10u);
          v77[1] = 0;
          v77[2] = 0;
          v55 = v77;
          v56 = v77 + 3;
          v107 = 0;
          wmemcpy(v77 + 3, &v100[v98], 0);
        }
        if ( v55 == (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
          goto LABEL_75;
LABEL_100:
        v55[2] = 0;
        *v55 = v107;
        v56[v107] = 0;
        goto LABEL_75;
      }
    }
LABEL_23:
    if ( v102 != v17 && (v14 != 0 || v104[v16] != 0) )
      goto LABEL_59;
    v18 = *(v100 - 3);
    if ( v98 > v18 )
      goto LABEL_141;
    v19 = v18 - v98;
    if ( v19 > v97 - v98 )
      v19 = v97 - v98;
    v20 = &v100[v98 + v19];
    v21 = &v100[v98];
    if ( v20 == v21 )
    {
      v30 = (wchar_t *)&unk_20DF960;
      goto LABEL_40;
    }
    if ( v21 == nullptr )
    {
      if ( v20 == nullptr )
      {
        v78 = (wchar_t *)sub_4EBDC0(0x10u);
        v78[1] = 0;
        v78[2] = 0;
        v29 = v78;
        v30 = v78 + 3;
        v105 = 0;
        wmemcpy(v78 + 3, &v100[v98], 0);
LABEL_39:
        if ( v29 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
          goto LABEL_91;
        goto LABEL_40;
      }
      goto LABEL_98;
    }
    v22 = v20 - v21;
    v105 = v22;
    if ( v22 > 0xFFFFFFE )
      goto LABEL_140;
    v23 = 4 * v22 + 16;
    v24 = 4 * v22 + 32;
    if ( v24 > 0x1000 && v22 != 0 )
    {
      v25 = 4096 - (v24 & 0xFFF);
      v26 = 268435454;
      v27 = v22 + (v25 >> 2);
      if ( v27 <= 0xFFFFFFE )
        v26 = v27;
      v23 = 4 * v26 + 16;
    }
    else
    {
      v26 = v22;
    }
    v93 = v22;
    v83 = &v100[v98];
    v28 = (wchar_t *)sub_4EBDC0(v23);
    v28[1] = v26;
    v28[2] = 0;
    v29 = v28;
    v30 = v28 + 3;
    if ( v93 != 1 )
    {
      wmemcpy(v30, v83, v105);
      goto LABEL_39;
    }
    v28[3] = *v83;
    if ( v28 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
    {
LABEL_91:
      v29[2] = 0;
      *v29 = v105;
      v30[v105] = 0;
    }
LABEL_40:
    v113 = v30;
    v31 = *(v30 - 3);
    if ( v31 == 0 )
      goto LABEL_44;
    v32 = *(v109[0] - 3);
    v33 = v32 + v31;
    if ( v32 + v31 > *(v109[0] - 2) || *(v109[0] - 1) > 0 )
    {
      v84 = v32 + v31;
      sub_EA3030(v109, v32 + v31);
      v30 = v113;
      v33 = v84;
      v34 = &v109[0][*(v109[0] - 3)];
      if ( v31 == 1 )
        goto LABEL_87;
LABEL_43:
      v85 = v33;
      wmemcpy(v34, v30, v31);
      v35 = v109[0];
      v33 = v85;
      if ( v109[0] - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
        goto LABEL_88;
      goto LABEL_44;
    }
    v34 = &v109[0][v32];
    if ( v31 != 1 )
      goto LABEL_43;
LABEL_87:
    *v34 = *v30;
    v35 = v109[0];
    if ( v109[0] - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
    {
LABEL_88:
      *(v35 - 1) = 0;
      *(v35 - 3) = v33;
      v35[v33] = 0;
    }
LABEL_44:
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v113);
    v114[0] = 0;
    v114[1] = 0;
    v36 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(*(uint32_t *)(a2 + 48) + 4 * v101);
    v37 = *(wchar_t **)v36;
    v38 = *(uint32_t *)(*(uint32_t *)v36 - 4);
    if ( v38 >= 0
      && v37 - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
    {
      if ( v38 != 0 )
      {
        g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::M_mutate(
          v36,
          0,
          0,
          0);
        v37 = *(wchar_t **)v36;
      }
      *(v37 - 1) = -1;
      v37 = *(wchar_t **)v36;
    }
    v114[0] = *v37;
    sub_EA31B0(&v110, v114);
    v39 = v110;
    v40 = *(v110 - 3);
    if ( v40 == 0 )
      goto LABEL_53;
    v103 = *(v109[0] - 3);
    v106 = v40 + v103;
    if ( v40 + v103 > *(v109[0] - 2) || *(v109[0] - 1) > 0 )
    {
      sub_EA3030(v109, v106);
      v39 = v110;
      v41 = &v109[0][*(v109[0] - 3)];
      if ( v40 == 1 )
        goto LABEL_83;
LABEL_52:
      wmemcpy(v41, v39, v40);
      v42 = v109[0];
      if ( v109[0] - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
        goto LABEL_84;
      goto LABEL_53;
    }
    v41 = &v109[0][v103];
    if ( v40 != 1 )
      goto LABEL_52;
LABEL_83:
    *v41 = *v39;
    v42 = v109[0];
    if ( v109[0] - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
    {
LABEL_84:
      *(v42 - 1) = 0;
      *(v42 - 3) = v106;
      v42[v106] = 0;
    }
LABEL_53:
    v98 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a2 + 48) + 4 * v101) - 12) + v97;
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v110);
    v8 = v98;
LABEL_54:
    v100 = *a3;
    v7 = *(*a3 - 3);
    if ( v8 >= v7 )
      break;
    v9 = (wchar_t *)(wmemchr(&(*a3)[v8], 38, v7 - v8));
    if ( v9 != nullptr )
    {
      v97 = v9 - v100;
      if ( v97 != -1 )
      {
        v100 = *a3;
        v7 = *(*a3 - 3);
        if ( (int)(v7 - 2) <= v97 )
          break;
        continue;
      }
      v100 = *a3;
      v7 = *(*a3 - 3);
    }
    else
    {
      v100 = *a3;
      v7 = *(*a3 - 3);
    }
    break;
  }
LABEL_6:
  if ( (int)(v7 - 1) > (int)v98 )
  {
    if ( v8 <= v7 )
    {
      v62 = &v100[v7];
      v63 = &v100[v8];
      if ( v62 == v63 )
      {
        v71 = (wchar_t *)&unk_20DF960;
LABEL_116:
        v111 = v71;
        v72 = *(v71 - 3);
        if ( v72 == 0 )
          goto LABEL_120;
        v73 = *(v109[0] - 3);
        v74 = v73 + v72;
        if ( v73 + v72 > *(v109[0] - 2) || *(v109[0] - 1) > 0 )
        {
          v90 = v73 + v72;
          sub_EA3030(v109, v73 + v72);
          v71 = v111;
          v74 = v90;
          v75 = &v109[0][*(v109[0] - 3)];
          if ( v72 == 1 )
            goto LABEL_128;
        }
        else
        {
          v75 = &v109[0][v73];
          if ( v72 == 1 )
          {
LABEL_128:
            *v75 = *v71;
            v76 = v109[0];
            if ( v109[0] - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
              goto LABEL_129;
            goto LABEL_120;
          }
        }
        v91 = v74;
        wmemcpy(v75, v71, v72);
        v76 = v109[0];
        v74 = v91;
        if ( v109[0] - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
        {
LABEL_129:
          *(v76 - 3) = v74;
          *(v76 - 1) = 0;
          v76[v74] = 0;
          g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v111);
          goto LABEL_7;
        }
LABEL_120:
        g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&v111);
        goto LABEL_7;
      }
      if ( v63 != nullptr )
      {
        v64 = v62 - v63;
        v108 = v64;
        if ( v64 <= 0xFFFFFFE )
        {
          v65 = 4 * v64 + 16;
          v66 = 4 * v64 + 32;
          if ( v66 > 0x1000 && v64 != 0 )
          {
            v67 = v66 & 0xFFF;
            v68 = 268435454;
            if ( v64 + ((unsigned int)(4096 - v67) >> 2) <= 0xFFFFFFE )
              v68 = v64 + ((unsigned int)(4096 - v67) >> 2);
            v65 = 4 * v68 + 16;
          }
          else
          {
            v68 = v64;
          }
          v95 = v64;
          v89 = v63;
          v69 = (wchar_t *)sub_4EBDC0(v65);
          v69[1] = v68;
          v69[2] = 0;
          v70 = v69;
          v71 = v69 + 3;
          if ( v95 == 1 )
          {
            v69[3] = *v89;
            if ( v69 == (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
              goto LABEL_116;
            goto LABEL_125;
          }
          wmemcpy(v71, v89, v108);
LABEL_115:
          if ( v70 == (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
            goto LABEL_116;
LABEL_125:
          v70[2] = 0;
          *v70 = v108;
          v71[v108] = 0;
          goto LABEL_116;
        }
LABEL_140:
        sub_1900180("basic_string::_S_create");
      }
      if ( v62 == nullptr )
      {
        v92 = &v100[v8];
        v82 = (wchar_t *)sub_4EBDC0(0x10u);
        v82[1] = 0;
        v82[2] = 0;
        v70 = v82;
        v71 = v82 + 3;
        v108 = 0;
        wmemcpy(v82 + 3, v92, 0);
        goto LABEL_115;
      }
LABEL_98:
      sub_18FFFD0("basic_string::_S_construct null not valid");
    }
LABEL_141:
    sub_1900210("basic_string::substr");
  }
LABEL_7:
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
    a1,
    (const std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v109);
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v109);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy  (binary VA: 0xf00190)
// Original: std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>::~basic_string
// ----------------------------------------------------------------------------
void g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy(std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *self)
{
  wchar_t *v1;

  v1 = (wchar_t *)(*(uint32_t *)self - 12);
  if ( v1 != (wchar_t *)(uintptr_t)(g4_empty_string_rep
)    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr((int)(uintptr_t)(v1));
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct  (binary VA: 0xf006f0)
// Original: std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>::basic_string
// ----------------------------------------------------------------------------
std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> * g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *self, const wchar_t **a2)
{
  const wchar_t *s2;
  unsigned int v4;
  unsigned int v5;
  size_t v6;
  unsigned int v7;
  unsigned int v8;
  wchar_t *v9;
  size_t n;
  wchar_t v11;

  s2 = *a2;
  if ( *(*a2 - 1) < 0 )
  {
    v4 = *(s2 - 3);
    v5 = *(s2 - 2);
    if ( v4 > 0xFFFFFFE )
      sub_1900180("basic_string::_S_create");
    if ( v4 > v5 && v4 < 2 * v5 )
      v4 = 2 * v5;
    v6 = 4 * v4 + 16;
    v7 = 4 * v4 + 32;
    if ( v7 > 0x1000 && v5 < v4 )
    {
      v8 = v4 + ((4096 - (v7 & 0xFFF)) >> 2);
      v4 = 268435454;
      if ( v8 <= 0xFFFFFFE )
        v4 = v8;
      v6 = 4 * v4 + 16;
    }
    v9 = (wchar_t *)sub_4EBDC0(v6);
    v9[1] = v4;
    v9[2] = 0;
    n = *(s2 - 3);
    v11 = 0;
    if ( n != 0 )
    {
      if ( n == 1 )
        v9[3] = *s2;
      else
        wmemcpy(v9 + 3, s2, n);
      v11 = *(s2 - 3);
    }
    if ( v9 == (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
    {
      s2 = v9 + 3;
    }
    else
    {
      v9[2] = 0;
      *v9 = v11;
      s2 = v9 + 3;
      v9[v11 + 3] = 0;
    }
  }
  else if ( s2 - 3 != (const wchar_t *)(uintptr_t)(g4_empty_string_rep) )
  {
    __sync_add_and_fetch((volatile int32_t *)s2 - 1, 1u);
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(s2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_basic_string_wchar_t_cha_acf405::Destroy  (binary VA: 0xf06500)
// Original: std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>>::~vector
// ----------------------------------------------------------------------------
void g4_std::vector_basic_string_wchar_t_cha_acf405::Destroy(std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> *self)
{
  int v1;
  int v2;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v3;

  v1 = *((uint32_t *)self + 1);
  v2 = *(uint32_t *)self;
  if ( v1 != *(uint32_t *)self )
  {
    do
    {
      v3 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v2;
      v2 += 4;
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy(v3);
    }
    while ( v1 != v2 );
    v2 = *(uint32_t *)self;
  }
  if ( v2 != 0 )
    gll_operator_delete_arr(v2);
}

// ----------------------------------------------------------------------------
// Function: g4_std::find_if_gnu_cxx_normal_iterator_f7309d  (binary VA: 0xf06e70)
// Original: std::find_if<__gnu_cxx::__normal_iterator<glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem *,std::vector<glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem>>,glitch::scene::CTextureAtlasCompilePass::SFactorChoiceTreeItem::SFindPredicate>
// ----------------------------------------------------------------------------
uint32_t * g4_std::find_if_gnu_cxx_normal_iterator_f7309d(uint32_t *a1, int a2, int a3, float a4, float a5, int a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;

  v6 = a2;
  v7 = -1227133513 * ((a3 - a2) >> 2);
  v8 = v7 >> 2;
  if ( v7 >> 2 > 0 )
  {
    v9 = a2 + 88;
    v10 = a2 + 60;
    v11 = a2 + 32;
    do
    {
      if ( a4 == *(float *)v6 && a5 == *(float *)(v6 + 4) && *(uint32_t *)(v6 + 8) == a6 )
      {
        *a1 = v6;
        return a1;
      }
      v13 = v6 + 28;
      if ( a4 == *(float *)(v11 - 4) && a5 == *(float *)v11 && *(uint32_t *)(v11 + 4) == a6
        || (v13 = v6 + 56, a4 == *(float *)(v10 - 4)) && a5 == *(float *)v10 && *(uint32_t *)(v10 + 4) == a6
        || (v13 = v6 + 84, a4 == *(float *)(v9 - 4)) && a5 == *(float *)v9 && *(uint32_t *)(v9 + 4) == a6 )
      {
        *a1 = v13;
        return a1;
      }
      v6 += 112;
      v9 += 112;
      v10 += 112;
      v11 += 112;
      --v8;
    }
    while ( v8 != 0 );
    v7 = -1227133513 * ((a3 - v6) >> 2);
  }
  if ( v7 != 2 )
  {
    if ( v7 != 3 )
    {
      if ( v7 != 1 )
      {
LABEL_22:
        *a1 = a3;
        return a1;
      }
      goto LABEL_32;
    }
    if ( a4 == *(float *)v6 && a5 == *(float *)(v6 + 4) && *(uint32_t *)(v6 + 8) == a6 )
      goto LABEL_30;
    v6 += 28;
  }
  if ( a4 != *(float *)v6 || a5 != *(float *)(v6 + 4) || *(uint32_t *)(v6 + 8) != a6 )
  {
    v6 += 28;
LABEL_32:
    if ( a4 != *(float *)v6 || a5 != *(float *)(v6 + 4) || *(uint32_t *)(v6 + 8) != a6 )
      goto LABEL_22;
  }
LABEL_30:
  *a1 = v6;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign  (binary VA: 0xf08400)
// Original: std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>::operator=
// ----------------------------------------------------------------------------
std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> * g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *self, const wchar_t **a2)
{
  const wchar_t *s2;
  int v3;
  wchar_t *v4;
  wchar_t *v5;
  unsigned int v7;
  unsigned int v8;
  size_t v9;
  unsigned int v10;
  unsigned int v11;
  wchar_t *v12;
  size_t n;
  wchar_t v14;
  const wchar_t *v15;
  wchar_t *v16;

  s2 = *a2;
  v3 = *(uint32_t *)self;
  v4 = (wchar_t *)(*a2 - 3);
  v5 = (wchar_t *)(*(uint32_t *)self - 12);
  if ( v4 != v5 )
  {
    if ( *(s2 - 1) < 0 )
    {
      v7 = *(s2 - 3);
      v8 = *(s2 - 2);
      if ( v7 > 0xFFFFFFE )
        sub_1900180("basic_string::_S_create");
      if ( v7 > v8 && v7 < 2 * v8 )
        v7 = 2 * v8;
      v9 = 4 * v7 + 16;
      v10 = 4 * v7 + 32;
      if ( v10 > 0x1000 && v8 < v7 )
      {
        v11 = v7 + ((4096 - (v10 & 0xFFF)) >> 2);
        v7 = 268435454;
        if ( v11 <= 0xFFFFFFE )
          v7 = v11;
        v9 = 4 * v7 + 16;
      }
      v12 = (wchar_t *)sub_4EBDC0(v9);
      v12[1] = v7;
      v12[2] = 0;
      n = *(s2 - 3);
      v14 = 0;
      v15 = v12 + 3;
      if ( n != 0 )
      {
        if ( n == 1 )
        {
          v12[3] = *s2;
          v14 = *(s2 - 3);
        }
        else
        {
          v16 = v12;
          wmemcpy(v12 + 3, s2, n);
          v14 = *(s2 - 3);
          v12 = v16;
        }
      }
      if ( v12 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
      {
        v12[2] = 0;
        *v12 = v14;
        v12[v14 + 3] = 0;
      }
      s2 = v15;
      v3 = *(uint32_t *)self;
      v5 = (wchar_t *)(*(uint32_t *)self - 12);
    }
    else if ( v4 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
    {
      __sync_add_and_fetch((volatile int32_t *)s2 - 1, 1u);
      v3 = *(uint32_t *)self;
      v5 = (wchar_t *)(*(uint32_t *)self - 12);
    }
    if ( v5 != (wchar_t *)(uintptr_t)(g4_empty_string_rep
)      && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr((int)(uintptr_t)(v5));
    }
    *(uint32_t *)self = (uint32_t)(uintptr_t)(s2);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_basic_string_wchar_t_cha_acf405::opAssign  (binary VA: 0xf08ee0)
// Original: std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>>::operator=
// ----------------------------------------------------------------------------
std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> * g4_std::vector_basic_string_wchar_t_cha_acf405::opAssign(std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> *self, const std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> *a2)
{
  std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> *result;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v3;
  const wchar_t **v4;
  const wchar_t **v5;
  int v6;
  int v7;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v8;
  const wchar_t **v9;
  int v10;
  int v11;
  int v12;
  int v13;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  const wchar_t **v19;
  const wchar_t **v20;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v21;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v22;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v23;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v24;
  const wchar_t **v25;
  const wchar_t **v26;
  const wchar_t **v27;
  int v28;
  int v29;
  int v30;
  int v31;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v32;
  int v33;

  result = self;
  if ( a2 != self )
  {
    v3 = *(std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> **)self;
    v4 = *((const wchar_t ***)a2 + 1);
    v5 = *(const wchar_t ***)a2;
    v28 = ((int)(uintptr_t)(v4) - *(uint32_t *)a2) >> 2;
    if ( v28 <= (unsigned int)((*((uint32_t *)self + 2) - *(uint32_t *)self) >> 2) )
    {
      v14 = *((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> **)self
            + 1);
      v15 = (v14 - v3) >> 2;
      if ( v28 > (unsigned int)v15 )
      {
        v17 = (unsigned int)(uintptr_t)(&v5[v15]);
        if ( v15 > 0 )
        {
          v18 = (*((uint32_t *)self + 1) - (int)(uintptr_t)(v3)) >> 2;
          do
          {
            v26 = v5;
            v24 = v3;
            ++v5;
            v3 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v3 + 4);
            g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
              v24,
              v26);
            --v18;
          }
          while ( v18 != 0 );
          v14 = *((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> **)self
                + 1);
          v3 = *(std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> **)self;
          v4 = *((const wchar_t ***)a2 + 1);
          v17 = *(uint32_t *)a2 + (((unsigned int)(uintptr_t)(v14) - *(uint32_t *)self) & 0xFFFFFFFC);
        }
        if ( v4 == (const wchar_t **)v17 )
        {
          result = self;
          v13 = (int)(uintptr_t)(v3) + 4 * v28;
        }
        else
        {
          v19 = (const wchar_t **)v17;
          v20 = v4;
          do
          {
            if ( v14 != nullptr )
              g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
                v14,
                v19);
            ++v19;
            v14 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v14 + 4);
          }
          while ( v19 != v20 );
          result = self;
          v13 = *(uint32_t *)self + 4 * v28;
        }
      }
      else
      {
        if ( v28 <= 0 )
          goto LABEL_26;
        v32 = *((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> **)self
              + 1);
        v16 = (*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 2;
        v33 = *(uint32_t *)self;
        do
        {
          v25 = v5;
          v22 = v3;
          ++v5;
          v3 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v3 + 4);
          g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
            v22,
            v25);
          --v16;
        }
        while ( v16 != 0 );
        v14 = v32;
        v3 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v33 + 4 * v28);
        if ( v32 != v3 )
        {
          do
          {
            v23 = v3;
            v3 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v3 + 4);
            g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy(v23);
LABEL_26:
            ;
          }
          while ( v14 != v3 );
        }
        result = self;
        v13 = *(uint32_t *)self + 4 * v28;
      }
    }
    else
    {
      v6 = 0;
      v7 = 0;
      if ( v28 != 0 )
      {
        v27 = *((const wchar_t ***)a2 + 1);
        v6 = 4 * v28;
        v7 = sub_4EBDC0(4 * v28);
        v4 = v27;
      }
      if ( v5 != v4 )
      {
        v29 = v6;
        v31 = v7;
        v8 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v7;
        v9 = v4;
        do
        {
          if ( v8 != nullptr )
            g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
              v8,
              v5);
          ++v5;
          v8 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v8 + 4);
        }
        while ( v9 != v5 );
        v6 = v29;
        v7 = v31;
      }
      v10 = *(uint32_t *)self;
      if ( *((uint32_t *)self + 1) != *(uint32_t *)self )
      {
        v30 = v7;
        v11 = v6;
        v12 = *((uint32_t *)self + 1);
        do
        {
          v21 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v10;
          v10 += 4;
          g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy(v21);
        }
        while ( v12 != v10 );
        v6 = v11;
        v7 = v30;
        v10 = *(uint32_t *)self;
      }
      if ( v10 != 0 )
        gll_operator_delete_arr(v10);
      result = self;
      v13 = v7 + v6;
      *(uint32_t *)self = v7;
      *((uint32_t *)self + 2) = v13;
    }
    *((uint32_t *)result + 1) = v13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_basic_string_char_char_t_524841::opAssign  (binary VA: 0xf091d0)
// Original: std::vector<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>>::operator=
// ----------------------------------------------------------------------------
std::vector<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> * g4_std::vector_basic_string_char_char_t_524841::opAssign(std::vector<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> *self, const std::vector<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> *a2)
{
  std::vector<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> *result;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v3;
  const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v4;
  const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v5;
  int v6;
  int v7;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v8;
  const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v19;
  const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v20;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v21;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v22;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v23;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v24;
  const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v25;
  const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v26;
  const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *v32;
  int v33;

  result = self;
  if ( a2 != self )
  {
    v3 = *(std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)self;
    v4 = *((const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)a2
         + 1);
    v5 = *(const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)a2;
    v28 = ((int)(uintptr_t)(v4) - *(uint32_t *)a2) >> 2;
    if ( v28 <= (unsigned int)((*((uint32_t *)self + 2) - *(uint32_t *)self) >> 2) )
    {
      v14 = *((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)self
            + 1);
      v15 = (v14 - v3) >> 2;
      if ( v28 > (unsigned int)v15 )
      {
        v17 = (unsigned int)(uintptr_t)(v5) + 4 * v15;
        if ( v15 > 0 )
        {
          v18 = (*((uint32_t *)self + 1) - (int)(uintptr_t)(v3)) >> 2;
          do
          {
            v26 = v5;
            v24 = v3;
            v5 = (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v5 + 4);
            v3 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v3 + 4);
            g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
              v24,
              v26);
            --v18;
          }
          while ( v18 != 0 );
          v14 = *((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)self
                + 1);
          v3 = *(std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)self;
          v4 = *((const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)a2
               + 1);
          v17 = *(uint32_t *)a2 + (((unsigned int)(uintptr_t)(v14) - *(uint32_t *)self) & 0xFFFFFFFC);
        }
        if ( v4 == (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v17 )
        {
          result = self;
          v13 = (int)(uintptr_t)(v3) + 4 * v28;
        }
        else
        {
          v19 = (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v17;
          v20 = v4;
          do
          {
            if ( v14 != nullptr )
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
                v14,
                v19);
            v19 = (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v19 + 4);
            v14 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v14 + 4);
          }
          while ( v19 != v20 );
          result = self;
          v13 = *(uint32_t *)self + 4 * v28;
        }
      }
      else
      {
        if ( v28 <= 0 )
          goto LABEL_26;
        v32 = *((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)self
              + 1);
        v16 = (*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 2;
        v33 = *(uint32_t *)self;
        do
        {
          v25 = v5;
          v22 = v3;
          v5 = (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v5 + 4);
          v3 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v3 + 4);
          g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(
            v22,
            v25);
          --v16;
        }
        while ( v16 != 0 );
        v14 = v32;
        v3 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v33 + 4 * v28);
        if ( v32 != v3 )
        {
          do
          {
            v23 = v3;
            v3 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v3 + 4);
            g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy(v23);
LABEL_26:
            ;
          }
          while ( v14 != v3 );
        }
        result = self;
        v13 = *(uint32_t *)self + 4 * v28;
      }
    }
    else
    {
      v6 = 0;
      v7 = 0;
      if ( v28 != 0 )
      {
        v27 = *((const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> **)a2
              + 1);
        v6 = 4 * v28;
        v7 = sub_4EBDC0(4 * v28);
        v4 = v27;
      }
      if ( v5 != v4 )
      {
        v29 = v6;
        v31 = v7;
        v8 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v7;
        v9 = v4;
        do
        {
          if ( v8 != nullptr )
            g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
              v8,
              v5);
          v5 = (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v5 + 4);
          v8 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v8 + 4);
        }
        while ( v9 != v5 );
        v6 = v29;
        v7 = v31;
      }
      v10 = *(uint32_t *)self;
      if ( *((uint32_t *)self + 1) != *(uint32_t *)self )
      {
        v30 = v7;
        v11 = v6;
        v12 = *((uint32_t *)self + 1);
        do
        {
          v21 = (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v10;
          v10 += 4;
          g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy(v21);
        }
        while ( v12 != v10 );
        v6 = v11;
        v7 = v30;
        v10 = *(uint32_t *)self;
      }
      if ( v10 != 0 )
        gll_operator_delete_arr(v10);
      result = self;
      v13 = v7 + v6;
      *(uint32_t *)self = v7;
      *((uint32_t *)self + 2) = v13;
    }
    *((uint32_t *)result + 1) = v13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::basic_string_char_char_traits_char_SA_77cf59::compare  (binary VA: 0xf095b0)
// Original: std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::compare
// ----------------------------------------------------------------------------
int g4_std::basic_string_char_char_traits_char_SA_77cf59::compare(const void **self, const void **a2)
{
  size_t v2;
  size_t v3;
  size_t n;
  size_t v5;
  int result;

  v2 = *((uint32_t *)*self - 3);
  v3 = *((uint32_t *)*a2 - 3);
  n = v2;
  if ( v3 <= v2 )
    n = *((uint32_t *)*a2 - 3);
  v5 = v2 - v3;
  result = memcmp(*self, *a2, n);
  if ( result == 0 )
    return v5;
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_basic_string_char_char_t_0887a3::opIndex  (binary VA: 0xf09610)
// Original: std::map<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,int>::operator[]
// ----------------------------------------------------------------------------
char * g4_std::map_basic_string_char_char_t_0887a3::opIndex(std::map<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>,int> *self, const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2)
{
  char *v2;
  size_t v3;
  size_t v4;
  size_t v5;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  uint32_t *v11;
  size_t v12;
  int v13;
  int v14;
  uint32_t *v15;
  size_t v16;
  size_t v17;
  int v18;
  int v19;
  int v21;
  int v22;
  uint32_t *v23;
  size_t v24;
  size_t v25;
  int v26;
  size_t v27;
  size_t v28;
  size_t v29;
  int v30;
  int v31;
  typedef size_t _g4_t_v32;
  typedef size_t _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef char *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef char *_g4_t_v37;
  typedef const void *_g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t _g4_t_v41[3];
  typedef char *_g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef int _g4_t_v44;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v32)) > _g4_s0 ? (0u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v33)) > _g4_s1 ? (0u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v34)) > _g4_s2 ? (4u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v35)) > _g4_s3 ? (12u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v36)) > _g4_s4 ? (16u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v37)) > _g4_s5 ? (24u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v38)) > _g4_s6 ? (28u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v39)) > _g4_s7 ? (28u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v40)) > _g4_s8 ? (28u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v41)) > _g4_s9 ? (32u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v42)) > _g4_s10 ? (44u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v43)) > _g4_s11 ? (48u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v44)) > _g4_s12 ? (52u + sizeof(_g4_t_v44)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 44u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);

  v2 = *((char **)self + 2);
  if ( v2 != nullptr )
  {
    v36 = (char *)self + 4;
    v37 = (char *)self + 4;
    v38 = *(const void **)a2;
    v3 = *(uint32_t *)(*(uint32_t *)a2 - 12);
    do
    {
      while ( 1 )
      {
        v4 = *(uint32_t *)(*((uint32_t *)v2 + 4) - 12);
        v5 = v4;
        v32 = v3;
        if ( v3 <= v4 )
          v5 = v3;
        v6 = memcmp(*((const void **)v2 + 4), v38, v5);
        v3 = v32;
        v7 = v4 - v32;
        if ( v6 == 0 )
          v6 = v7;
        if ( v6 < 0 )
          break;
        v37 = v2;
        v2 = *((char **)v2 + 2);
        if ( v2 == nullptr )
          goto LABEL_10;
      }
      v2 = *((char **)v2 + 3);
    }
    while ( v2 != nullptr );
LABEL_10:
    v35 = v37;
    if ( v36 != v37 )
    {
      v8 = *(uint32_t *)(*((uint32_t *)v37 + 4) - 12);
      v9 = v8;
      if ( v32 <= v8 )
        v9 = v32;
      v10 = memcmp(v38, *((const void **)v37 + 4), v9);
      if ( v10 == 0 )
        v10 = v32 - v8;
      if ( v10 < 0 )
      {
        g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
          (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v43,
          a2);
        v44 = 0;
        v11 = *((uint32_t **)v37 + 4);
        v12 = *(v43 - 3);
        v39 = v12;
        v33 = *(v11 - 3);
        v34 = v43;
        if ( v33 <= v12 )
          v12 = *(v11 - 3);
        v13 = memcmp(v43, *((const void **)v37 + 4), v12);
        if ( v13 == 0 )
          v13 = v39 - v33;
        if ( v13 >= 0 )
        {
          v21 = memcmp(v11, v34, v12);
          if ( v21 == 0 )
            v21 = v33 - v39;
          if ( v21 >= 0 )
            goto LABEL_32;
          if ( *((char **)self + 4) == v37 )
          {
            sub_EB63B0((int *)&v42, (int)(uintptr_t)(self), 0, (int)(uintptr_t)(v37), (const void **)&v43);
            v37 = v42;
            goto LABEL_32;
          }
          v22 = sub_19048E0(v37);
          v23 = *(uint32_t **)(v22 + 16);
          v24 = v39;
          v25 = *(v23 - 3);
          if ( v25 <= v39 )
            v24 = *(v23 - 3);
          v26 = memcmp(v34, v23, v24);
          if ( v26 == 0 )
            v26 = v39 - v25;
          if ( v26 < 0 )
          {
            if ( *((uint32_t *)v37 + 3) != 0 )
            {
              v37 = (char *)opNew(0x18u);
              if ( v37 != (char *)-16 )
              {
                g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
                  (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v37 + 16),
                  (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v43);
                *((uint32_t *)v37 + 5) = v44;
              }
              sub_1904970(1, v37, v22, v36);
              goto LABEL_31;
            }
            sub_EB63B0((int *)&v42, (int)(uintptr_t)(self), 0, (int)(uintptr_t)(v37), (const void **)&v43);
LABEL_54:
            v37 = v42;
            goto LABEL_32;
          }
        }
        else
        {
          if ( *((char **)self + 3) == v37 )
          {
            sub_EB63B0((int *)&v42, (int)(uintptr_t)(self), (int)(uintptr_t)(v37), (int)(uintptr_t)(v37), (const void **)&v43);
            v37 = v42;
            goto LABEL_32;
          }
          v14 = sub_1904940(v37);
          v15 = *(uint32_t **)(v14 + 16);
          v16 = v39;
          v17 = *(v15 - 3);
          if ( v17 <= v39 )
            v16 = *(v15 - 3);
          v18 = memcmp(v15, v34, v16);
          v19 = v17 - v39;
          if ( v18 == 0 )
            v18 = v19;
          if ( v18 < 0 )
          {
            if ( *(uint32_t *)(v14 + 12) != 0 )
            {
              v37 = (char *)opNew(0x18u);
              if ( v37 != (char *)-16 )
              {
                g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
                  (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v37 + 16),
                  (const std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v43);
                *((uint32_t *)v37 + 5) = v44;
              }
              sub_1904970(1, v37, v35, v36);
LABEL_31:
              ++*((uint32_t *)self + 5);
LABEL_32:
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v43);
              return v37 + 20;
            }
            sub_EB63B0((int *)&v42, (int)(uintptr_t)(self), 0, v14, (const void **)&v43);
            goto LABEL_54;
          }
        }
        sub_EC6FD0((int)(uintptr_t)(v41), self, (const void **)&v43);
LABEL_56:
        v37 = (char *)v41[0];
        goto LABEL_32;
      }
      return v37 + 20;
    }
  }
  g4_std::basic_string_char_char_traits_char_SA_77cf59::Construct(
    (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)&v43,
    a2);
  v44 = 0;
  if ( *((uint32_t *)self + 5) != 0 )
  {
    v40 = *((uint32_t *)self + 4);
    v27 = *(uint32_t *)(*(uint32_t *)(v40 + 16) - 12);
    v28 = *(v43 - 3);
    v29 = v27;
    if ( v28 <= v27 )
      v29 = *(v43 - 3);
    v30 = v27 - v28;
    v31 = memcmp(*(const void **)(v40 + 16), v43, v29);
    if ( v31 == 0 )
      v31 = v30;
    if ( v31 < 0 )
    {
      sub_EB63B0((int *)&v42, (int)(uintptr_t)(self), 0, v40, (const void **)&v43);
      goto LABEL_54;
    }
  }
  sub_EC6FD0((int)(uintptr_t)(v41), self, (const void **)&v43);
  goto LABEL_56;
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_084f17  (binary VA: 0xf0b610)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::scene::STextureAtlasArray::SItem *,std::vector<glitch::scene::STextureAtlasArray::SItem,glitch::core::SAllocator<glitch::scene::STextureAtlasArray::SItem,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::scene::STextureAtlasArray::STextureSizeSortCompFunctor>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_gnu_cxx_normal_iterator_084f17(int *a1, unsigned int a2, int a3)
{
  int result;
  int *v4;
  int v5;
  int v6;
  unsigned int v7;
  bool v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int *v15;
  unsigned int v16;
  bool v17;
  int v18;
  int v19;
  uint8_t *v20;
  uint8_t *v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  bool v31;
  bool v32;
  int *v33;
  int v34;
  int v35;
  uint8_t *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  uint8_t *v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  unsigned int v55;
  char *v56;
  int v57;
  int v58;
  int v59;
  int i;
  char v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef char *_g4_t_v64;
  typedef char *_g4_t_v65;
  typedef uint8_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef unsigned int _g4_t_v72;
  typedef int *_g4_t_v73;
  typedef unsigned int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef uint8_t *_g4_t_v77;
  typedef int _g4_t_v78;
  typedef unsigned int _g4_t_v79;
  typedef int *_g4_t_v80;
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
  typedef int _g4_t_v93[2];
  typedef int _g4_t_v94[2];
  typedef int _g4_t_v95;
  typedef char _g4_t_v96;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v62)) > _g4_s0 ? (4u + sizeof(_g4_t_v62)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v63)) > _g4_s1 ? (8u + sizeof(_g4_t_v63)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v64)) > _g4_s2 ? (12u + sizeof(_g4_t_v64)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v65)) > _g4_s3 ? (12u + sizeof(_g4_t_v65)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v66)) > _g4_s4 ? (20u + sizeof(_g4_t_v66)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v67)) > _g4_s5 ? (24u + sizeof(_g4_t_v67)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v68)) > _g4_s6 ? (24u + sizeof(_g4_t_v68)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v69)) > _g4_s7 ? (28u + sizeof(_g4_t_v69)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v70)) > _g4_s8 ? (28u + sizeof(_g4_t_v70)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v71)) > _g4_s9 ? (28u + sizeof(_g4_t_v71)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v72)) > _g4_s10 ? (32u + sizeof(_g4_t_v72)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v73)) > _g4_s11 ? (32u + sizeof(_g4_t_v73)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v74)) > _g4_s12 ? (32u + sizeof(_g4_t_v74)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v75)) > _g4_s13 ? (36u + sizeof(_g4_t_v75)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v76)) > _g4_s14 ? (40u + sizeof(_g4_t_v76)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v77)) > _g4_s15 ? (40u + sizeof(_g4_t_v77)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v78)) > _g4_s16 ? (44u + sizeof(_g4_t_v78)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v79)) > _g4_s17 ? (44u + sizeof(_g4_t_v79)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v80)) > _g4_s18 ? (44u + sizeof(_g4_t_v80)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v81)) > _g4_s19 ? (44u + sizeof(_g4_t_v81)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v82)) > _g4_s20 ? (48u + sizeof(_g4_t_v82)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v83)) > _g4_s21 ? (56u + sizeof(_g4_t_v83)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v84)) > _g4_s22 ? (60u + sizeof(_g4_t_v84)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v85)) > _g4_s23 ? (64u + sizeof(_g4_t_v85)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v86)) > _g4_s24 ? (68u + sizeof(_g4_t_v86)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v87)) > _g4_s25 ? (72u + sizeof(_g4_t_v87)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v88)) > _g4_s26 ? (76u + sizeof(_g4_t_v88)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v89)) > _g4_s27 ? (80u + sizeof(_g4_t_v89)) : _g4_s27,
    _g4_s29 = (84u + sizeof(_g4_t_v90)) > _g4_s28 ? (84u + sizeof(_g4_t_v90)) : _g4_s28,
    _g4_s30 = (88u + sizeof(_g4_t_v91)) > _g4_s29 ? (88u + sizeof(_g4_t_v91)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v92)) > _g4_s30 ? (92u + sizeof(_g4_t_v92)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v93)) > _g4_s31 ? (96u + sizeof(_g4_t_v93)) : _g4_s31,
    _g4_s33 = (104u + sizeof(_g4_t_v94)) > _g4_s32 ? (104u + sizeof(_g4_t_v94)) : _g4_s32,
    _g4_s34 = (112u + sizeof(_g4_t_v95)) > _g4_s33 ? (112u + sizeof(_g4_t_v95)) : _g4_s33,
    _g4_s35 = (116u + sizeof(_g4_t_v96)) > _g4_s34 ? (116u + sizeof(_g4_t_v96)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 4u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 8u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 20u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 24u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 28u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 28u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 32u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 32u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 32u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 36u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 40u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 40u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 44u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 44u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 44u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 44u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 48u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 56u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 60u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 64u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 68u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 72u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 76u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 80u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 84u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 88u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 92u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 96u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 104u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 112u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 116u);

  result = a2 - (uint32_t)(uintptr_t)(a1);
  if ( (int)(a2 - (uint32_t)(uintptr_t)(a1)) <= 135 )
    return result;
  if ( a3 == 0 )
  {
    v74 = a2;
    goto LABEL_72;
  }
  v66 = (uint8_t *)a2;
  while ( 2 )
  {
    --a3;
    v4 = &a1[2 * (result >> 4)];
    v5 = *v4;
    v75 = *a1;
    v76 = v5;
    v6 = *(uint32_t *)(*a1 + 24);
    v78 = *(uint32_t *)(*a1 + 20);
    v63 = v6;
    v72 = v6 * v78;
    v7 = *(uint32_t *)(v5 + 24) * *(uint32_t *)(v5 + 20);
    if ( v6 * v78 == v7 )
      v8 = *(uint16_t *)(v75 + 32) < *(uint16_t *)(v5 + 32);
    else
      v8 = v6 * v78 > v7;
    if ( !v8 )
    {
      v30 = *((uint32_t *)v66 - 2);
      v71 = v30;
      v9 = *(uint32_t *)(v30 + 24);
      v62 = *(uint32_t *)(v30 + 20);
      v68 = v9 * v62;
      if ( v72 == v9 * v62 )
        v31 = *(uint16_t *)(v75 + 32) < *(uint16_t *)(v30 + 32);
      else
        v31 = v72 > v9 * v62;
      if ( !v31 )
      {
        if ( v7 == v68 )
          v32 = *(uint16_t *)(v76 + 32) < *(uint16_t *)(v71 + 32);
        else
          v32 = v7 > v68;
        if ( v32 )
        {
          v95 = *a1;
          sub_8B1B00((volatile int32_t *)(v75 + 4));
          v33 = a1;
          v34 = 0;
          v96 = *((uint8_t *)a1 + 4);
          v87 = *((uint32_t *)v66 - 2);
          if ( v87 != 0 )
          {
            sub_8B1B00((volatile int32_t *)(v87 + 4));
            v34 = v87;
            v33 = a1;
          }
          v35 = *v33;
          *v33 = v34;
          v87 = v35;
          sub_5ED480(&v87);
          v36 = v66;
          v37 = 0;
          *((uint8_t *)a1 + 4) = *(v66 - 4);
          v88 = v95;
          if ( v95 != 0 )
          {
            sub_8B1B00((volatile int32_t *)(v95 + 4));
            v37 = v88;
            v36 = v66;
          }
          v38 = *((uint32_t *)v36 - 2);
          *((uint32_t *)v36 - 2) = v37;
          v88 = v38;
          sub_5ED480(&v88);
          *(v36 - 4) = v96;
        }
        else
        {
          v95 = *a1;
          sub_8B1B00((volatile int32_t *)(v75 + 4));
          v50 = 0;
          v96 = *((uint8_t *)a1 + 4);
          v51 = *v4;
          v89 = *v4;
          if ( v89 != 0 )
          {
            sub_8B1B00((volatile int32_t *)(v51 + 4));
            v50 = v89;
          }
          v52 = *a1;
          *a1 = v50;
          v89 = v52;
          sub_5ED480(&v89);
          v53 = 0;
          *((uint8_t *)a1 + 4) = *((uint8_t *)v4 + 4);
          v90 = v95;
          if ( v95 != 0 )
          {
            sub_8B1B00((volatile int32_t *)(v95 + 4));
            v53 = v90;
          }
          v54 = *v4;
          *v4 = v53;
          v90 = v54;
          sub_5ED480(&v90);
          *((uint8_t *)v4 + 4) = v96;
        }
        goto LABEL_41;
      }
      goto LABEL_11;
    }
    v69 = *((uint32_t *)v66 - 2);
    v9 = *(uint32_t *)(v69 + 24);
    v62 = *(uint32_t *)(v69 + 20);
    v10 = v9 * v62;
    if ( v7 == v9 * v62 )
    {
      if ( *(uint16_t *)(v76 + 32) >= *(uint16_t *)(v69 + 32) )
        goto LABEL_9;
LABEL_44:
      v95 = *a1;
      sub_8B1B00((volatile int32_t *)(v75 + 4));
      v40 = 0;
      v96 = *((uint8_t *)a1 + 4);
      v41 = *v4;
      v83 = *v4;
      if ( v83 != 0 )
      {
        sub_8B1B00((volatile int32_t *)(v41 + 4));
        v40 = v83;
      }
      v42 = *a1;
      *a1 = v40;
      v83 = v42;
      sub_5ED480(&v83);
      v43 = 0;
      *((uint8_t *)a1 + 4) = *((uint8_t *)v4 + 4);
      v84 = v95;
      if ( v95 != 0 )
      {
        sub_8B1B00((volatile int32_t *)(v95 + 4));
        v43 = v84;
      }
      v44 = *v4;
      *v4 = v43;
      v84 = v44;
      sub_5ED480(&v84);
      *((uint8_t *)v4 + 4) = v96;
      goto LABEL_41;
    }
    if ( v7 > v9 * v62 )
      goto LABEL_44;
LABEL_9:
    if ( v72 != v10 )
    {
      if ( v72 <= v10 )
        goto LABEL_11;
    }
    else if ( *(uint16_t *)(v75 + 32) >= *(uint16_t *)(v69 + 32) )
    {
LABEL_11:
      v77 = v66;
      v73 = a1 + 2;
      v11 = v63;
      v12 = v62;
      while ( 2 )
      {
        v70 = v12;
        v79 = v78 * v11;
        v67 = v9;
        v13 = v73;
        do
        {
          v14 = *v13;
          v15 = v13;
          v16 = *(uint32_t *)(*v13 + 24) * *(uint32_t *)(*v13 + 20);
          v17 = v79 < v16;
          if ( v79 == v16 )
            v17 = *(uint16_t *)(v14 + 32) < *(uint16_t *)(v75 + 32);
          v13 += 2;
        }
        while ( v17 );
        v74 = (unsigned int)(uintptr_t)(v15);
        v18 = v70;
        v19 = v67;
        v20 = v77 - 8;
        while ( 1 )
        {
          v23 = v19 * v18;
          if ( v79 == v23 )
            break;
          if ( v79 <= v23 )
            goto LABEL_21;
LABEL_18:
          v21 = (uint8_t *)(v20 - v77);
          v20 -= 8;
          v22 = *(uint32_t *)&v21[(uint32_t)(uintptr_t)(v77 - 8)];
          v18 = *(uint32_t *)(v22 + 20);
          v19 = *(uint32_t *)(v22 + 24);
        }
        if ( *(uint16_t *)(v75 + 32) < *(uint16_t *)(*(uint32_t *)v20 + 32) )
          goto LABEL_18;
LABEL_21:
        if ( (unsigned int)(uintptr_t)(v20) > v74 )
        {
          v95 = v14;
          sub_8B1B00((volatile int32_t *)(v14 + 4));
          v24 = 0;
          v96 = *(uint8_t *)(v74 + 4);
          v25 = *(uint32_t *)v20;
          v91 = *(uint32_t *)v20;
          if ( v91 != 0 )
          {
            sub_8B1B00((volatile int32_t *)(v25 + 4));
            v24 = v91;
          }
          v26 = *(uint32_t *)v74;
          *(uint32_t *)v74 = v24;
          v91 = v26;
          sub_5ED480(&v91);
          v27 = 0;
          *(uint8_t *)(v74 + 4) = v20[4];
          v92 = v95;
          if ( v95 != 0 )
          {
            sub_8B1B00((volatile int32_t *)(v95 + 4));
            v27 = v92;
          }
          v28 = *(uint32_t *)v20;
          *(uint32_t *)v20 = v27;
          v92 = v28;
          sub_5ED480(&v92);
          v20[4] = v96;
          sub_5ED480(&v95);
          v29 = *((uint32_t *)v20 - 2);
          v77 = v20;
          v73 = (int *)(v74 + 8);
          v75 = *a1;
          v11 = *(uint32_t *)(*a1 + 24);
          v78 = *(uint32_t *)(*a1 + 20);
          v12 = *(uint32_t *)(v29 + 20);
          v9 = *(uint32_t *)(v29 + 24);
          continue;
        }
        break;
      }
      g4_std::introsort_loop_gnu_cxx_normal_iterator_084f17(
        (int *)(uintptr_t)(v74),
        (unsigned int)(uintptr_t)(v66),
        a3);
      result = v74 - (uint32_t)(uintptr_t)(a1);
      if ( (int)(v74 - (uint32_t)(uintptr_t)(a1)) > 135 )
      {
        if ( a3 != 0 )
        {
          v66 = (uint8_t *)v74;
          continue;
        }
LABEL_72:
        v81 = result >> 3;
        for ( i = ((result >> 3) - 2) >> 1; ; --i )
        {
          v95 = a1[2 * i];
          if ( v95 != 0 )
          {
            sub_8B1B00((volatile int32_t *)(v95 + 4));
            v93[0] = v95;
            v61 = a1[2 * i + 1];
            v96 = v61;
            if ( v95 != 0 )
            {
              sub_8B1B00((volatile int32_t *)(v95 + 4));
              v61 = v96;
            }
          }
          else
          {
            v61 = a1[2 * i + 1];
            v93[0] = 0;
            v96 = v61;
          }
          LOBYTE(v93[1]) = v61;
          sub_EA50E0((int)(uintptr_t)(a1), i, v81, (int)(uintptr_t)(v93));
          sub_5ED480(v93);
          if ( i == 0 )
            break;
          sub_5ED480(&v95);
        }
        sub_5ED480(&v95);
        v80 = (int *)v74;
        v55 = v74 - 8;
        do
        {
          v80 -= 2;
          v56 = (char *)v80 - v74;
          v95 = *v80;
          if ( v95 != 0 )
          {
            sub_8B1B00((volatile int32_t *)(v95 + 4));
            v56 = (char *)v80 - v74;
          }
          v57 = 0;
          v96 = v56[v55 + 12];
          v58 = *a1;
          v82 = *a1;
          if ( v82 != 0 )
          {
            v64 = v56;
            sub_8B1B00((volatile int32_t *)(v58 + 4));
            v57 = v82;
            v56 = v64;
          }
          v59 = *(uint32_t *)&v56[v74];
          *(uint32_t *)&v56[v74] = v57;
          v82 = v59;
          v65 = v56;
          sub_5ED480(&v82);
          v65[v55 + 12] = *((uint8_t *)a1 + 4);
          v94[0] = v95;
          if ( v95 != 0 )
            sub_8B1B00((volatile int32_t *)(v95 + 4));
          LOBYTE(v94[1]) = v96;
          sub_EA50E0((int)(uintptr_t)(a1), 0, ((char *)v80 - (char *)a1) >> 3, (int)(uintptr_t)(v94));
          sub_5ED480(v94);
          result = sub_5ED480(&v95);
        }
        while ( (char *)v80 - (char *)a1 > 15 );
      }
      return result;
    }
    break;
  }
  v95 = *a1;
  sub_8B1B00((volatile int32_t *)(v75 + 4));
  v96 = *((uint8_t *)a1 + 4);
  v45 = 0;
  v85 = *((uint32_t *)v66 - 2);
  if ( v85 != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v85 + 4));
    v45 = v85;
  }
  v46 = *a1;
  *a1 = v45;
  v85 = v46;
  sub_5ED480(&v85);
  v47 = v66;
  v48 = 0;
  *((uint8_t *)a1 + 4) = *(v66 - 4);
  v86 = v95;
  if ( v95 != 0 )
  {
    sub_8B1B00((volatile int32_t *)(v95 + 4));
    v48 = v86;
    v47 = v66;
  }
  v49 = *((uint32_t *)v47 - 2);
  *((uint32_t *)v47 - 2) = v48;
  v86 = v49;
  sub_5ED480(&v86);
  *(v47 - 4) = v96;
LABEL_41:
  sub_5ED480(&v95);
  v75 = *a1;
  v78 = *(uint32_t *)(*a1 + 20);
  v63 = *(uint32_t *)(*a1 + 24);
  v39 = *((uint32_t *)v66 - 2);
  v62 = *(uint32_t *)(v39 + 20);
  v9 = *(uint32_t *)(v39 + 24);
  goto LABEL_11;
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_9f92ca  (binary VA: 0xf0be50)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::scene::SParameterAtlasInfo *,std::vector<glitch::scene::SParameterAtlasInfo,glitch::core::SAllocator<glitch::scene::SParameterAtlasInfo,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::scene::SParameterAtlasInfo::SSortFunctor>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_gnu_cxx_normal_iterator_9f92ca(glitch::scene::SParameterAtlasInfo *a1, volatile int32_t **a2, int a3)
{
  volatile int32_t **v3;
  int result;
  int v5;
  unsigned int v6;
  glitch::video::CMaterial::Self **v7;
  char *v8;
  glitch::video::CMaterial::Self *v9;
  bool v10; // bp
  bool v11;
  unsigned int v12;
  bool v13; // bp
  bool v14;
  glitch::video::CMaterial::Self **v15;
  volatile int32_t **v16;
  uint8_t v17;
  uint8_t v18;
  glitch::video::CMaterial::Self **v19;
  uint8_t v20;
  uint8_t v21;
  bool v22; // bp
  bool v23;
  glitch::scene::SParameterAtlasInfo *v24;
  int v25;
  volatile int32_t **v26;
  volatile int32_t **v27;
  uint8_t v28;
  uint8_t v29;
  uint8_t v30;
  uint8_t v31;
  uint8_t v32;
  uint8_t v33;
  uint8_t v34;
  uint8_t v35;
  typedef uint8_t _g4_t_v36;
  typedef uint8_t _g4_t_v37;
  typedef uint8_t _g4_t_v38;
  typedef uint8_t _g4_t_v39;
  typedef uint8_t _g4_t_v40;
  typedef uint8_t _g4_t_v41;
  typedef uint8_t _g4_t_v42;
  typedef uint8_t _g4_t_v43;
  typedef uint8_t _g4_t_v44;
  typedef uint8_t _g4_t_v45;
  typedef uint8_t _g4_t_v46;
  typedef uint8_t _g4_t_v47;
  typedef unsigned int _g4_t_v48;
  typedef bool _g4_t_v49;
  typedef bool _g4_t_v50;
  typedef bool _g4_t_v51;
  typedef bool _g4_t_v52;
  typedef int _g4_t_v53;
  typedef volatile int32_t **_g4_t_v54;
  typedef int _g4_t_v55;
  typedef glitch::video::CMaterial::Self *_g4_t_v56[5];
  typedef glitch::video::CMaterial::Self *_g4_t_v57[5];
  typedef glitch::video::CMaterial::Self *_g4_t_v58[12];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (2u + sizeof(_g4_t_v36)) > _g4_s0 ? (2u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (3u + sizeof(_g4_t_v37)) > _g4_s1 ? (3u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (6u + sizeof(_g4_t_v38)) > _g4_s2 ? (6u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (7u + sizeof(_g4_t_v39)) > _g4_s3 ? (7u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v40)) > _g4_s4 ? (8u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (9u + sizeof(_g4_t_v41)) > _g4_s5 ? (9u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (10u + sizeof(_g4_t_v42)) > _g4_s6 ? (10u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (11u + sizeof(_g4_t_v43)) > _g4_s7 ? (11u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v44)) > _g4_s8 ? (12u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (13u + sizeof(_g4_t_v45)) > _g4_s9 ? (13u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (14u + sizeof(_g4_t_v46)) > _g4_s10 ? (14u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (15u + sizeof(_g4_t_v47)) > _g4_s11 ? (15u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v48)) > _g4_s12 ? (16u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v49)) > _g4_s13 ? (16u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v50)) > _g4_s14 ? (16u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v51)) > _g4_s15 ? (16u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v52)) > _g4_s16 ? (16u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (16u + sizeof(_g4_t_v53)) > _g4_s17 ? (16u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (20u + sizeof(_g4_t_v54)) > _g4_s18 ? (20u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (24u + sizeof(_g4_t_v55)) > _g4_s19 ? (24u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v56)) > _g4_s20 ? (36u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v57)) > _g4_s21 ? (56u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v58)) > _g4_s22 ? (76u + sizeof(_g4_t_v58)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 2u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 3u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 6u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 7u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 9u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 10u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 11u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 13u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 14u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 15u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 76u);

  v3 = a2;
  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 339 )
    return result;
  if ( a3 == 0 )
    goto LABEL_38;
  v55 = (int)(uintptr_t)(a2);
  v5 = (int)(uintptr_t)(a2);
  while ( 2 )
  {
    v6 = *(uint32_t *)a1;
    --a3;
    v7 = (glitch::video::CMaterial::Self **)(v5 - 20);
    v8 = (char *)a1 + 20 * ((-858993459 * (result >> 2)) >> 1);
    v9 = *(glitch::video::CMaterial::Self **)v8;
    v10 = *(uint32_t *)a1 < *(uint32_t *)v8;
    if ( *(uint32_t *)a1 == *(uint32_t *)v8 )
    {
      v47 = *((uint8_t *)a1 + 15);
      v10 = v47 < (uint8_t)v8[15];
      if ( v47 == v8[15] )
      {
        v46 = *((uint8_t *)a1 + 16);
        v10 = v46 < (uint8_t)v8[16];
        if ( v46 == v8[16] )
          v10 = *((uint32_t *)a1 + 1) < *((uint32_t *)v8 + 1);
      }
    }
    v11 = v10;
    v12 = *(uint32_t *)(v55 - 20);
    v48 = v12;
    if ( v11 )
    {
      v13 = (unsigned int)(uintptr_t)(v9) < v12;
      if ( v9 == (glitch::video::CMaterial::Self *)v48 )
      {
        v28 = v8[15];
        v45 = *(uint8_t *)(v55 - 5);
        v13 = v28 < v45;
        if ( v28 == v45 )
        {
          v29 = v8[16];
          v44 = *(uint8_t *)(v55 - 4);
          v13 = v29 < v44;
          if ( v29 == v44 )
            v13 = *((uint32_t *)v8 + 1) < *(uint32_t *)(v55 - 16);
        }
      }
      if ( !v13 )
      {
        v14 = v6 < v48;
        if ( v6 == v48 )
        {
          v30 = *((uint8_t *)a1 + 15);
          v43 = *(uint8_t *)(v55 - 5);
          v14 = v30 < v43;
          if ( v30 == v43 )
          {
            v31 = *((uint8_t *)a1 + 16);
            v42 = *(uint8_t *)(v55 - 4);
            v14 = v31 < v42;
            if ( v31 == v42 )
              v14 = *((uint32_t *)a1 + 1) < *(uint32_t *)(v55 - 16);
          }
        }
        if ( !v14 )
          goto LABEL_10;
        v24 = a1;
        glitch::scene::SParameterAtlasInfo::Construct(
          (glitch::scene::SParameterAtlasInfo *)v58,
          (volatile int32_t **)a1);
        glitch::scene::SParameterAtlasInfo::opAssign((glitch::video::CMaterial::Self **)a1, v7);
        glitch::scene::SParameterAtlasInfo::opAssign(v7, v58);
        goto LABEL_33;
      }
LABEL_32:
      v24 = a1;
      glitch::scene::SParameterAtlasInfo::Construct(
        (glitch::scene::SParameterAtlasInfo *)v58,
        (volatile int32_t **)a1);
      glitch::scene::SParameterAtlasInfo::opAssign((glitch::video::CMaterial::Self **)a1, (glitch::video::CMaterial::Self **)v8);
      glitch::scene::SParameterAtlasInfo::opAssign((glitch::video::CMaterial::Self **)v8, v58);
LABEL_33:
      sub_5ED4F0(v58);
      v6 = *(uint32_t *)v24;
      goto LABEL_10;
    }
    v22 = v6 < v12;
    if ( v6 == v48 )
    {
      v41 = *((uint8_t *)a1 + 15);
      v40 = *(uint8_t *)(v55 - 5);
      v22 = v41 < v40;
      if ( v41 == v40 )
      {
        v39 = *((uint8_t *)a1 + 16);
        v38 = *(uint8_t *)(v55 - 4);
        v22 = v39 < v38;
        if ( v39 == v38 )
          v22 = *((uint32_t *)a1 + 1) < *(uint32_t *)(v55 - 16);
      }
    }
    if ( !v22 )
    {
      v23 = (unsigned int)(uintptr_t)(v9) < v48;
      if ( v9 == (glitch::video::CMaterial::Self *)v48 )
      {
        v32 = v8[15];
        v33 = *(uint8_t *)(v55 - 5);
        v23 = v32 < v33;
        if ( v32 == v33 )
        {
          v34 = v8[16];
          v35 = *(uint8_t *)(v55 - 4);
          v23 = v34 < v35;
          if ( v34 == v35 )
            v23 = *((uint32_t *)v8 + 1) < *(uint32_t *)(v55 - 16);
        }
      }
      if ( !v23 )
        goto LABEL_32;
      glitch::scene::SParameterAtlasInfo::Construct(
        (glitch::scene::SParameterAtlasInfo *)v58,
        (volatile int32_t **)a1);
      glitch::scene::SParameterAtlasInfo::opAssign((glitch::video::CMaterial::Self **)a1, v7);
      glitch::scene::SParameterAtlasInfo::opAssign(v7, v58);
      sub_5ED4F0(v58);
      v6 = *(uint32_t *)a1;
    }
LABEL_10:
    v15 = (glitch::video::CMaterial::Self **)v55;
    v16 = (volatile int32_t **)((char *)a1 + 20);
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v3 = v16;
          v49 = v6 > (unsigned int)(uintptr_t)(*v16);
          if ( (volatile int32_t *)v6 != *v16 )
            break;
          v17 = *((uint8_t *)a1 + 15);
          v49 = *((uint8_t *)v16 + 15) < v17;
          if ( *((uint8_t *)v16 + 15) != v17 )
            break;
          v18 = *((uint8_t *)a1 + 16);
          v49 = *((uint8_t *)v16 + 16) < v18;
          if ( *((uint8_t *)v16 + 16) != v18 )
            break;
          v50 = (int)(uintptr_t)(v16[1]) < *((uint32_t *)a1 + 1);
          v16 += 5;
          if ( !v50 )
            goto LABEL_16;
        }
        v16 += 5;
      }
      while ( v49 );
LABEL_16:
      v19 = v15 - 5;
      do
      {
        while ( 1 )
        {
          v15 = v19;
          v51 = v6 < (unsigned int)(uintptr_t)(*v19);
          if ( (glitch::video::CMaterial::Self *)v6 == *v19 )
          {
            v37 = *((uint8_t *)a1 + 15);
            v20 = *((uint8_t *)v19 + 15);
            v51 = v37 < v20;
            if ( v37 == v20 )
            {
              v36 = *((uint8_t *)a1 + 16);
              v21 = *((uint8_t *)v19 + 16);
              v51 = v36 < v21;
              if ( v36 == v21 )
                break;
            }
          }
          v19 -= 5;
          if ( !v51 )
            goto LABEL_22;
        }
        v52 = *((uint32_t *)a1 + 1) < (int)(uintptr_t)(v19[1]);
        v19 -= 5;
      }
      while ( v52 );
LABEL_22:
      if ( v15 <= (glitch::video::CMaterial::Self **)v3 )
        break;
      glitch::scene::SParameterAtlasInfo::Construct((glitch::scene::SParameterAtlasInfo *)v58, v3);
      glitch::scene::SParameterAtlasInfo::opAssign((glitch::video::CMaterial::Self **)v3, v15);
      glitch::scene::SParameterAtlasInfo::opAssign(v15, v58);
      sub_5ED4F0(v58);
      v16 = v3 + 5;
      v6 = *(uint32_t *)a1;
    }
    g4_std::introsort_loop_gnu_cxx_normal_iterator_9f92ca(
      (glitch::scene::SParameterAtlasInfo *)v3,
      (volatile int32_t **)(uintptr_t)(v55),
      a3);
    result = (char *)v3 - (char *)a1;
    if ( (char *)v3 - (char *)a1 > 339 )
    {
      if ( a3 != 0 )
      {
        v55 = (int)(uintptr_t)(v3);
        v5 = (int)(uintptr_t)(v3);
        continue;
      }
LABEL_38:
      v54 = v3;
      v53 = -858993459 * (result >> 2);
      v25 = (v53 - 2) >> 1;
      v26 = (volatile int32_t **)((char *)a1 + 20 * v25);
      while ( 1 )
      {
        glitch::scene::SParameterAtlasInfo::Construct((glitch::scene::SParameterAtlasInfo *)v58, v26);
        v26 -= 5;
        glitch::scene::SParameterAtlasInfo::Construct(
          (glitch::scene::SParameterAtlasInfo *)v56,
          (volatile int32_t **)v58);
        sub_ECCDF0((int)(uintptr_t)(a1), v25, v53, (glitch::scene::SParameterAtlasInfo *)v56);
        sub_5ED4F0(v56);
        if ( v25 == 0 )
          break;
        --v25;
        sub_5ED4F0(v58);
      }
      v27 = v54;
      sub_5ED4F0(v58);
      do
      {
        v27 -= 5;
        glitch::scene::SParameterAtlasInfo::Construct((glitch::scene::SParameterAtlasInfo *)v58, v27);
        glitch::scene::SParameterAtlasInfo::opAssign((glitch::video::CMaterial::Self **)v27, (glitch::video::CMaterial::Self **)a1);
        glitch::scene::SParameterAtlasInfo::Construct(
          (glitch::scene::SParameterAtlasInfo *)v57,
          (volatile int32_t **)v58);
        sub_ECCDF0(
          (int)(uintptr_t)(a1),
          0,
          -858993459 * (((char *)v27 - (char *)a1) >> 2),
          (glitch::scene::SParameterAtlasInfo *)v57);
        sub_5ED4F0(v57);
        result = sub_5ED4F0(v58);
      }
      while ( (char *)v27 - (char *)a1 > 39 );
    }
    return result;
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_cf43e6  (binary VA: 0xf0dc70)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::scene::STextureAtlasArray::SItem *,std::vector<glitch::scene::STextureAtlasArray::SItem,glitch::core::SAllocator<glitch::scene::STextureAtlasArray::SItem,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::scene::STextureAtlasArray::STextureNameCompFunctor>
// ----------------------------------------------------------------------------
int g4_std::introsort_loop_gnu_cxx_normal_iterator_cf43e6(int *a1, int *a2, int a3)
{
  int *v3;
  int result;
  int *v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int v10;
  int v11;
  unsigned int v12;
  int j;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int *v26;
  int *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int *v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int *v44;
  char *v45;
  int v46;
  int v47;
  int v48;
  int k;
  char v50;
  typedef volatile int32_t *_g4_t_v51;
  typedef const char *_g4_t_v52;
  typedef const char *_g4_t_v53;
  typedef char *_g4_t_v54;
  typedef char *_g4_t_v55;
  typedef int *_g4_t_i;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int *_g4_t_v59;
  typedef const char *_g4_t_v60;
  typedef const char *_g4_t_v61;
  typedef int *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75[2];
  typedef int _g4_t_v76[2];
  typedef int _g4_t_v77;
  typedef char _g4_t_v78;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v51)) > _g4_s0 ? (0u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v52)) > _g4_s1 ? (28u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v53)) > _g4_s2 ? (28u + sizeof(_g4_t_v53)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v54)) > _g4_s3 ? (28u + sizeof(_g4_t_v54)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v55)) > _g4_s4 ? (28u + sizeof(_g4_t_v55)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_i)) > _g4_s5 ? (36u + sizeof(_g4_t_i)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v57)) > _g4_s6 ? (40u + sizeof(_g4_t_v57)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v58)) > _g4_s7 ? (48u + sizeof(_g4_t_v58)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v59)) > _g4_s8 ? (52u + sizeof(_g4_t_v59)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v60)) > _g4_s9 ? (56u + sizeof(_g4_t_v60)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v61)) > _g4_s10 ? (60u + sizeof(_g4_t_v61)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v62)) > _g4_s11 ? (60u + sizeof(_g4_t_v62)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v63)) > _g4_s12 ? (60u + sizeof(_g4_t_v63)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v64)) > _g4_s13 ? (64u + sizeof(_g4_t_v64)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v65)) > _g4_s14 ? (72u + sizeof(_g4_t_v65)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v66)) > _g4_s15 ? (76u + sizeof(_g4_t_v66)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v67)) > _g4_s16 ? (80u + sizeof(_g4_t_v67)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v68)) > _g4_s17 ? (84u + sizeof(_g4_t_v68)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v69)) > _g4_s18 ? (88u + sizeof(_g4_t_v69)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v70)) > _g4_s19 ? (92u + sizeof(_g4_t_v70)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v71)) > _g4_s20 ? (96u + sizeof(_g4_t_v71)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v72)) > _g4_s21 ? (100u + sizeof(_g4_t_v72)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v73)) > _g4_s22 ? (104u + sizeof(_g4_t_v73)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v74)) > _g4_s23 ? (108u + sizeof(_g4_t_v74)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v75)) > _g4_s24 ? (112u + sizeof(_g4_t_v75)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v76)) > _g4_s25 ? (120u + sizeof(_g4_t_v76)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v77)) > _g4_s26 ? (128u + sizeof(_g4_t_v77)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v78)) > _g4_s27 ? (132u + sizeof(_g4_t_v78)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 0u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 48u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 52u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 56u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 60u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 60u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 64u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 72u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 76u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 80u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 84u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 88u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 92u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 96u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 100u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 104u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 108u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 112u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 120u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 128u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 132u);

  v3 = a2;
  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 135 )
  {
    if ( a3 != 0 )
    {
      for ( i = a2; ; i = v3 )
      {
        --a3;
        v5 = &a1[2 * (result >> 4)];
        v6 = *a1;
        v61 = *(const char **)(*a1 + 12);
        v60 = *(const char **)(*v5 + 12);
        if ( strcmp(v61, v60) >= 0 )
        {
          v53 = *(const char **)(*(i - 2) + 12);
          v7 = strcmp(v61, v53);
          if ( v7 >= 0 )
          {
            v20 = strcmp(v60, v53);
            v77 = v6;
            v51 = (volatile int32_t *)(v6 + 4);
            if ( v20 >= 0 )
            {
              sub_8B1B00(v51);
              v33 = a1;
              v34 = 0;
              v78 = *((uint8_t *)a1 + 4);
              v35 = *v5;
              v71 = *v5;
              if ( v71 != 0 )
              {
                sub_8B1B00((volatile int32_t *)(v35 + 4));
                v34 = v71;
                v33 = a1;
              }
              v36 = *v33;
              *v33 = v34;
              v71 = v36;
              sub_5ED480(&v71);
              v37 = 0;
              *((uint8_t *)a1 + 4) = *((uint8_t *)v5 + 4);
              v72 = v77;
              if ( v77 != 0 )
              {
                sub_8B1B00((volatile int32_t *)(v77 + 4));
                v37 = v72;
              }
              v38 = *v5;
              *v5 = v37;
              v72 = v38;
              sub_5ED480(&v72);
              *((uint8_t *)v5 + 4) = v78;
            }
            else
            {
              sub_8B1B00(v51);
              v21 = a1;
              v78 = *((uint8_t *)a1 + 4);
              v22 = 0;
              v69 = *(i - 2);
              if ( v69 != 0 )
              {
                sub_8B1B00((volatile int32_t *)(v69 + 4));
                v22 = v69;
                v21 = a1;
              }
              v23 = *v21;
              *v21 = v22;
              v69 = v23;
              sub_5ED480(&v69);
              v24 = 0;
              *((uint8_t *)a1 + 4) = *((uint8_t *)i - 4);
              v70 = v77;
              if ( v77 != 0 )
              {
                sub_8B1B00((volatile int32_t *)(v77 + 4));
                v24 = v70;
              }
              v25 = *(i - 2);
              *(i - 2) = v24;
              v70 = v25;
              v26 = &v70;
LABEL_29:
              sub_5ED480(v26);
              *((uint8_t *)i - 4) = v78;
            }
LABEL_30:
            sub_5ED480(&v77);
            v61 = *(const char **)(*a1 + 12);
            v7 = strcmp(v61, *(const char **)(*(i - 2) + 12));
          }
        }
        else
        {
          v52 = *(const char **)(*(i - 2) + 12);
          if ( strcmp(v60, v52) < 0 )
          {
            v77 = v6;
            sub_8B1B00((volatile int32_t *)(v6 + 4));
            v27 = a1;
            v28 = 0;
            v78 = *((uint8_t *)a1 + 4);
            v29 = *v5;
            v65 = *v5;
            if ( v65 != 0 )
            {
              sub_8B1B00((volatile int32_t *)(v29 + 4));
              v28 = v65;
              v27 = a1;
            }
            v30 = *v27;
            *v27 = v28;
            v65 = v30;
            sub_5ED480(&v65);
            v31 = 0;
            *((uint8_t *)a1 + 4) = *((uint8_t *)v5 + 4);
            v66 = v77;
            if ( v77 != 0 )
            {
              sub_8B1B00((volatile int32_t *)(v77 + 4));
              v31 = v66;
            }
            v32 = *v5;
            *v5 = v31;
            v66 = v32;
            sub_5ED480(&v66);
            *((uint8_t *)v5 + 4) = v78;
            goto LABEL_30;
          }
          v7 = strcmp(v61, v52);
          if ( v7 < 0 )
          {
            v77 = v6;
            sub_8B1B00((volatile int32_t *)(v6 + 4));
            v39 = a1;
            v78 = *((uint8_t *)a1 + 4);
            v40 = 0;
            v67 = *(i - 2);
            if ( v67 != 0 )
            {
              sub_8B1B00((volatile int32_t *)(v67 + 4));
              v40 = v67;
              v39 = a1;
            }
            v41 = *v39;
            *v39 = v40;
            v67 = v41;
            sub_5ED480(&v67);
            v42 = 0;
            *((uint8_t *)a1 + 4) = *((uint8_t *)i - 4);
            v68 = v77;
            if ( v77 != 0 )
            {
              sub_8B1B00((volatile int32_t *)(v77 + 4));
              v42 = v68;
            }
            v43 = *(i - 2);
            *(i - 2) = v42;
            v68 = v43;
            v26 = &v68;
            goto LABEL_29;
          }
        }
        v8 = a1 + 2;
        v59 = i;
        v57 = v7;
        while ( 1 )
        {
          v9 = v8;
          do
          {
            v10 = *v9;
            v3 = v9;
            v11 = strcmp(*(const char **)(*v9 + 12), v61);
            v9 = v3 + 2;
          }
          while ( v11 < 0 );
          v58 = v10;
          v12 = (unsigned int)(uintptr_t)(v59 - 2);
          for ( j = v57; j < 0; j = strcmp(v61, *(const char **)(*(int *)((char *)v59 + v14 - 8) + 12)) )
          {
            v14 = v12 - (uint32_t)(uintptr_t)(v59);
            v12 -= 8;
          }
          if ( (unsigned int)(uintptr_t)(v3) >= v12 )
            break;
          v77 = v58;
          sub_8B1B00((volatile int32_t *)(v58 + 4));
          v15 = 0;
          v78 = *((uint8_t *)v3 + 4);
          v16 = *(uint32_t *)v12;
          v73 = *(uint32_t *)v12;
          if ( v73 != 0 )
          {
            sub_8B1B00((volatile int32_t *)(v16 + 4));
            v15 = v73;
          }
          v17 = *v3;
          *v3 = v15;
          v73 = v17;
          sub_5ED480(&v73);
          v18 = 0;
          *((uint8_t *)v3 + 4) = *(uint8_t *)(v12 + 4);
          v74 = v77;
          if ( v77 != 0 )
          {
            sub_8B1B00((volatile int32_t *)(v77 + 4));
            v18 = v74;
          }
          v19 = *(uint32_t *)v12;
          *(uint32_t *)v12 = v18;
          v74 = v19;
          v8 = v3 + 2;
          sub_5ED480(&v74);
          *(uint8_t *)(v12 + 4) = v78;
          sub_5ED480(&v77);
          v61 = *(const char **)(*a1 + 12);
          v57 = strcmp(v61, *(const char **)(*(uint32_t *)(v12 - 8) + 12));
          v59 = (int *)v12;
        }
        g4_std::introsort_loop_gnu_cxx_normal_iterator_cf43e6(
          v3,
          i,
          a3);
        result = (char *)v3 - (char *)a1;
        if ( (char *)v3 - (char *)a1 <= 135 )
          return result;
        if ( a3 == 0 )
          break;
      }
    }
    v63 = result >> 3;
    for ( k = ((result >> 3) - 2) >> 1; ; --k )
    {
      v77 = a1[2 * k];
      if ( v77 != 0 )
      {
        sub_8B1B00((volatile int32_t *)(v77 + 4));
        v75[0] = v77;
        v50 = a1[2 * k + 1];
        v78 = v50;
        if ( v77 != 0 )
        {
          sub_8B1B00((volatile int32_t *)(v77 + 4));
          v50 = v78;
        }
      }
      else
      {
        v50 = a1[2 * k + 1];
        v75[0] = 0;
        v78 = v50;
      }
      LOBYTE(v75[1]) = v50;
      sub_EA53C0((int)(uintptr_t)(a1), k, v63, v75);
      sub_5ED480(v75);
      if ( k == 0 )
        break;
      sub_5ED480(&v77);
    }
    v44 = v3 - 2;
    sub_5ED480(&v77);
    v62 = v3;
    do
    {
      v62 -= 2;
      v45 = (char *)((char *)v62 - (char *)v3);
      v77 = *v62;
      if ( v77 != 0 )
      {
        sub_8B1B00((volatile int32_t *)(v77 + 4));
        v45 = (char *)((char *)v62 - (char *)v3);
      }
      v46 = 0;
      v78 = *((uint8_t *)v44 + (uint32_t)(uintptr_t)(v45) + 12);
      v47 = *a1;
      v64 = *a1;
      if ( v64 != 0 )
      {
        v54 = v45;
        sub_8B1B00((volatile int32_t *)(v47 + 4));
        v46 = v64;
        v45 = v54;
      }
      v48 = *(int *)((char *)v3 + (uint32_t)(uintptr_t)(v45));
      *(int *)((char *)v3 + (uint32_t)(uintptr_t)(v45)) = v46;
      v64 = v48;
      v55 = v45;
      sub_5ED480(&v64);
      *((uint8_t *)v44 + (uint32_t)(uintptr_t)(v55) + 12) = *((uint8_t *)a1 + 4);
      v76[0] = v77;
      if ( v77 != 0 )
        sub_8B1B00((volatile int32_t *)(v77 + 4));
      LOBYTE(v76[1]) = v78;
      sub_EA53C0((int)(uintptr_t)(a1), 0, ((char *)v62 - (char *)a1) >> 3, v76);
      sub_5ED480(v76);
      result = sub_5ED480(&v77);
    }
    while ( (char *)v62 - (char *)a1 > 15 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_pair_float_float_98e243::M_insert_aux  (binary VA: 0xf0e3b0)
// Original: std::vector<std::pair<float,float>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_pair_float_float_98e243::M_insert_aux(void **a1, char *a2, int *a3)
{
  void **v3;
  char *v4;
  char *v5;
  int v6;
  char *v7;
  int v8;
  int result;
  char *v10;
  char *v11;
  int v12;
  char *v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  char *v20;
  uint32_t *v21;
  int v22;
  char *v23;
  char *v24;
  uint32_t *v25;
  void **v26;
  int v27;
  int v28;
  uint32_t *v29;
  unsigned int v30;
  uint8_t *v31;
  int v32;

  v3 = a1;
  v4 = (char *)a1[1];
  if ( v4 != a1[2] )
  {
    v5 = nullptr;
    if ( v4 != nullptr )
    {
      v6 = *((uint32_t *)v4 - 1);
      *(uint32_t *)v4 = *((uint32_t *)v4 - 2);
      *((uint32_t *)v4 + 1) = v6;
      v5 = (char *)a1[1];
    }
    a1[1] = v5 + 8;
    v7 = v5 - 8;
    v8 = a3[1];
    result = (v5 - 8 - a2) >> 3;
    v28 = *a3;
    if ( result > 0 )
    {
      v10 = &v5[-8 * result];
      v11 = &v7[-8 * result];
      do
      {
        v12 = *(uint32_t *)&v11[8 * result - 8];
        *(uint32_t *)&v10[8 * result - 4] = *(uint32_t *)&v11[8 * result - 4];
        *(uint32_t *)&v10[8 * result-- - 8] = v12;
      }
      while ( result != 0 );
    }
    *(uint32_t *)a2 = v28;
    *((uint32_t *)a2 + 1) = v8;
    return result;
  }
  v13 = (char *)*a1;
  v14 = (v4 - (char *)((uint8_t *)*a1)) >> 3;
  if ( v14 != 0 )
  {
    v15 = 2 * v14;
    if ( v14 > 2 * v14 || v15 > 0x1FFFFFFF )
    {
      v32 = -2;
      v16 = (a2 - v13) >> 3;
    }
    else
    {
      v16 = (a2 - v13) >> 3;
      v32 = 4 * v14;
      if ( v15 == 0 )
      {
        v30 = 8;
        v29 = nullptr;
        goto LABEL_13;
      }
    }
    v17 = opNew(v32 * 4);
  }
  else
  {
    v32 = 2;
    v16 = (a2 - v13) >> 3;
    v17 = opNew(8u);
  }
  v29 = (uint32_t *)v17;
  v30 = v17 + 8;
LABEL_13:
  v18 = &v29[2 * v16];
  if ( v18 != nullptr )
  {
    v19 = *a3;
    v18[1] = a3[1];
    *v18 = v19;
  }
  if ( *a1 != a2 )
  {
    v20 = (char *)*a1;
    v31 = (uint8_t *)(*a1);
    v21 = v29;
    do
    {
      if ( v21 != nullptr )
      {
        v22 = *(uint32_t *)v20;
        v21[1] = *((uint32_t *)v20 + 1);
        *v21 = v22;
      }
      v20 += 8;
      v21 += 2;
    }
    while ( v20 != a2 );
    v3 = a1;
    v30 = (unsigned int)(uintptr_t)(&v29[2 * ((unsigned int)(a2 - (char *)((v31 + 8))) >> 3) + 4]);
  }
  v23 = (char *)v3[1];
  if ( v23 != a2 )
  {
    v24 = a2;
    v25 = (uint32_t *)v30;
    v26 = v3;
    do
    {
      if ( v25 != nullptr )
      {
        v27 = *(uint32_t *)v24;
        v25[1] = *((uint32_t *)v24 + 1);
        *v25 = v27;
      }
      v24 += 8;
      v25 += 2;
    }
    while ( v23 != v24 );
    v3 = v26;
    v30 += 8 * ((unsigned int)(v23 - (a2 + 8)) >> 3) + 8;
  }
  if ( *v3 != nullptr )
    opDelete(*v3);
  *v3 = v29;
  v3[1] = (void *)v30;
  v3[2] = &v29[v32];
  return (int)(uintptr_t)(&v29[v32]);
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_basic_string_char_char_t_48b875::M_erase  (binary VA: 0xf0ee50)
// Original: std::_Rb_tree<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,int>>,std::less<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,int>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_basic_string_char_char_t_48b875::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)a2[3];
      v21 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v22 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v23 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v24 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v25 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v20 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              v19 = v8;
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = v8[3];
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_basic_string_char_char_t_48b875::M_erase(
                                        a1,
                                        (uint32_t *)(*(void **)(v9 + 12)));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v9 + 16));
                                      opDelete((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v19 + 4));
                                  opDelete(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v20 + 4));
                              opDelete(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v25[2];
                          g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v25 + 4));
                          opDelete(v25);
                          if ( v13 == nullptr )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v24[2];
                      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v24 + 4));
                      opDelete(v24);
                      if ( v14 == nullptr )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v23[2];
                  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v23 + 4));
                  opDelete(v23);
                  if ( v15 == nullptr )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v22[2];
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v22 + 4));
              opDelete(v22);
              if ( v16 == nullptr )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v21[2];
          g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v21 + 4));
          opDelete(v21);
          if ( v17 == nullptr )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)a2[2];
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(a2 + 4));
      opDelete(a2);
      if ( v18 == nullptr )
        break;
      a2 = v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_basic_string_char_char_t_d57fea::M_erase  (binary VA: 0xf0f090)
// Original: std::_Rb_tree<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,std::vector<char,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,std::vector<char,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>>,std::less<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::core::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,std::vector<char,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,(glitch::memory::E_MEMORY_HINT)0>>::_M_erase
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_basic_string_char_char_t_d57fea::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  int result;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v15 = (uint32_t *)a2[3];
      if ( v15 != nullptr )
      {
        while ( 1 )
        {
          v16 = (uint32_t *)v15[3];
          if ( v16 != nullptr )
          {
            while ( 1 )
            {
              v17 = (uint32_t *)v16[3];
              if ( v17 != nullptr )
              {
                while ( 1 )
                {
                  v18 = (uint32_t *)v17[3];
                  if ( v18 != nullptr )
                  {
                    while ( 1 )
                    {
                      v19 = (uint32_t *)v18[3];
                      if ( v19 != nullptr )
                      {
                        while ( 1 )
                        {
                          v14 = (uint32_t *)v19[3];
                          if ( v14 != nullptr )
                          {
                            while ( 1 )
                            {
                              v13 = (uint32_t *)v14[3];
                              if ( v13 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v2 = (uint32_t *)v13[3];
                                  if ( v2 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_basic_string_char_char_t_d57fea::M_erase(
                                        a1,
                                        (uint32_t *)(uintptr_t)(v2[3]));
                                      v3 = (uint32_t *)v2[2];
                                      if ( v2[5] != 0 )
                                        gll_operator_delete_arr(v2[5]);
                                      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v2 + 4));
                                      gll_operator_delete_arr((int)(uintptr_t)(v2));
                                      if ( v3 == nullptr )
                                        break;
                                      v2 = v3;
                                    }
                                  }
                                  v4 = (uint32_t *)v13[2];
                                  if ( v13[5] != 0 )
                                    gll_operator_delete_arr(v13[5]);
                                  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v13 + 4));
                                  gll_operator_delete_arr((int)(uintptr_t)(v13));
                                  if ( v4 == nullptr )
                                    break;
                                  v13 = v4;
                                }
                              }
                              v5 = (uint32_t *)v14[2];
                              if ( v14[5] != 0 )
                                gll_operator_delete_arr(v14[5]);
                              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v14 + 4));
                              gll_operator_delete_arr((int)(uintptr_t)(v14));
                              if ( v5 == nullptr )
                                break;
                              v14 = v5;
                            }
                          }
                          v6 = (uint32_t *)v19[2];
                          if ( v19[5] != 0 )
                            gll_operator_delete_arr(v19[5]);
                          g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v19 + 4));
                          gll_operator_delete_arr((int)(uintptr_t)(v19));
                          if ( v6 == nullptr )
                            break;
                          v19 = v6;
                        }
                      }
                      v7 = (uint32_t *)v18[2];
                      if ( v18[5] != 0 )
                        gll_operator_delete_arr(v18[5]);
                      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v18 + 4));
                      gll_operator_delete_arr((int)(uintptr_t)(v18));
                      if ( v7 == nullptr )
                        break;
                      v18 = v7;
                    }
                  }
                  v8 = (uint32_t *)v17[2];
                  if ( v17[5] != 0 )
                    gll_operator_delete_arr(v17[5]);
                  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v17 + 4));
                  gll_operator_delete_arr((int)(uintptr_t)(v17));
                  if ( v8 == nullptr )
                    break;
                  v17 = v8;
                }
              }
              v9 = (uint32_t *)v16[2];
              if ( v16[5] != 0 )
                gll_operator_delete_arr(v16[5]);
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v16 + 4));
              gll_operator_delete_arr((int)(uintptr_t)(v16));
              if ( v9 == nullptr )
                break;
              v16 = v9;
            }
          }
          v10 = (uint32_t *)v15[2];
          if ( v15[5] != 0 )
            gll_operator_delete_arr(v15[5]);
          g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v15 + 4));
          gll_operator_delete_arr((int)(uintptr_t)(v15));
          if ( v10 == nullptr )
            break;
          v15 = v10;
        }
      }
      v11 = (uint32_t *)a2[2];
      if ( a2[5] != 0 )
        gll_operator_delete_arr(a2[5]);
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(a2 + 4));
      result = gll_operator_delete_arr((int)(uintptr_t)(a2));
      if ( v11 == nullptr )
        break;
      a2 = v11;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_basic_string_wchar_t_cha_acf405::M_insert_aux  (binary VA: 0xf0f8a0)
// Original: std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux
// ----------------------------------------------------------------------------
void g4_std::vector_basic_string_wchar_t_cha_acf405::M_insert_aux(int a1, std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *a2, const wchar_t **a3)
{
  int *v3;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v9;
  int i;
  const wchar_t **v11;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  const wchar_t **v16;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v17;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v18;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v19;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v20;
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v21;
  int v22;
  typedef std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int *_g4_t_v28;
  typedef const wchar_t *_g4_t_v29[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v24)) > _g4_s1 ? (28u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v26)) > _g4_s3 ? (36u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v27)) > _g4_s4 ? (40u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v28)) > _g4_s5 ? (44u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v29)) > _g4_s6 ? (60u + sizeof(_g4_t_v29)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);

  v3 = (int *)a1;
  v4 = a2;
  v5 = *(uint32_t *)(a1 + 4);
  if ( v5 != *(uint32_t *)(a1 + 8) )
  {
    v6 = 0;
    if ( v5 != 0 )
    {
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
        *(std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> **)(a1 + 4),
        (const wchar_t **)(v5 - 4));
      v6 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v6 + 4;
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
      (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v29,
      a3);
    v7 = *(uint32_t *)(a1 + 4);
    v8 = (v7 - 8 - (int)(uintptr_t)(a2)) >> 2;
    if ( v8 > 0 )
    {
      v9 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v7 - 4);
      for ( i = v8; i != 0; --i )
      {
        v11 = (const wchar_t **)((char *)v9 - 8);
        v9 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v9 - 4);
        g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
          v9,
          v11);
      }
      v4 = a2;
    }
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(
      v4,
      v29);
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v29);
    return;
  }
  v12 = *(std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> **)a1;
  v13 = (v5 - *(uint32_t *)a1) >> 2;
  if ( v13 != 0 )
  {
    v14 = 2 * v13;
    if ( v13 > 2 * v13 || v14 > 0x3FFFFFFF )
    {
      v27 = -4;
      v15 = (a2 - v12) >> 2;
    }
    else
    {
      v27 = 8 * v13;
      v15 = (a2 - v12) >> 2;
      if ( v14 == 0 )
      {
        v26 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)&loc_4;
        v25 = 0;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v27 = 4;
    v15 = (a2 - v12) >> 2;
  }
  v24 = v15;
  v25 = sub_4EBDC0(v27);
  v26 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v25 + 4);
  v15 = v24;
LABEL_13:
  if ( v25 + 4 * v15 != 0 )
    g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
      (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)(v25 + 4 * v15),
      a3);
  v16 = *(const wchar_t ***)a1;
  if ( *(std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> **)a1 != a2 )
  {
    v17 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v25;
    do
    {
      if ( v17 != nullptr )
        g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
          v17,
          v16);
      ++v16;
      v17 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v17 + 4);
    }
    while ( v16 != (const wchar_t **)a2 );
    v18 = v17;
    v3 = (int *)a1;
    v26 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v18 + 4);
  }
  v19 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v3[1];
  if ( v19 != a2 )
  {
    v28 = v3;
    v20 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v3[1];
    v21 = v26;
    do
    {
      if ( v21 != nullptr )
        g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
          v21,
          (const wchar_t **)v4);
      v4 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v4 + 4);
      v21 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)((char *)v21 + 4);
    }
    while ( v20 != v4 );
    v3 = v28;
    v26 = v21;
    v19 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v28[1];
  }
  v22 = *v3;
  if ( (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)*v3 != v19 )
  {
    do
    {
      v23 = (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v22;
      v22 += 4;
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Destroy(v23);
    }
    while ( v19 != (std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *)v22 );
    v22 = *v3;
  }
  if ( v22 != 0 )
    gll_operator_delete_arr(v22);
  *v3 = v25;
  v3[1] = (int)(uintptr_t)(v26);
  v3[2] = v27 + v25;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_basic_string_wchar_t_cha_acf405::push_back  (binary VA: 0xf0fac0)
// Original: std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,glitch::core::SAllocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>,(glitch::memory::E_MEMORY_HINT)0>>::push_back
// ----------------------------------------------------------------------------
void g4_std::vector_basic_string_wchar_t_cha_acf405::push_back(std::vector<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, glitch::core::SAllocator<std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>>, (glitch::memory::E_MEMORY_HINT)0>> *self, const wchar_t **a2)
{
  std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> *v2;
  int v3;

  v2 = *((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> **)self
       + 1);
  if ( v2 == *((std::basic_string<wchar_t, std::char_traits<wchar_t>, glitch::core::SAllocator<wchar_t, (glitch::memory::E_MEMORY_HINT)0>> **)self
             + 2) )
  {
    g4_std::vector_basic_string_wchar_t_cha_acf405::M_insert_aux(
      (int)(uintptr_t)(self),
      v2,
      a2);
  }
  else
  {
    v3 = 0;
    if ( v2 != nullptr )
    {
      g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::Construct(
        v2,
        a2);
      v3 = *((uint32_t *)self + 1);
    }
    *((uint32_t *)self + 1) = v3 + 4;
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gnu_cxx_normal_iterator_1619b9  (binary VA: 0xf11820)
// Original: std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::scene::STextureAtlasArray::SItem *,std::vector<glitch::scene::STextureAtlasArray::SItem,glitch::core::SAllocator<glitch::scene::STextureAtlasArray::SItem,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::scene::STextureAtlasArray::STextureSizeSortCompFunctor>
// ----------------------------------------------------------------------------
uint8_t * g4_std::insertion_sort_gnu_cxx_normal_iterator_1619b9(uint8_t *a1, uint8_t *a2)
{
  uint8_t *result;
  uint8_t *v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  uint8_t *v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  bool v14;
  int v15;
  int v16;
  uint8_t *v17;
  int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  int v22;
  typedef volatile int32_t *_g4_t_v23;
  typedef uint8_t *_g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef uint8_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef char _g4_t_v33;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v24)) > _g4_s1 ? (32u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v25)) > _g4_s2 ? (36u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v26)) > _g4_s3 ? (40u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v27)) > _g4_s4 ? (44u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v28)) > _g4_s5 ? (48u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v29)) > _g4_s6 ? (64u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v30)) > _g4_s7 ? (72u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v31)) > _g4_s8 ? (76u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v32)) > _g4_s9 ? (80u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v33)) > _g4_s10 ? (84u + sizeof(_g4_t_v33)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 84u);

  result = a1;
  if ( a2 != a1 )
  {
    result = a1 + 8;
    if ( a1 + 8 != a2 )
    {
      v26 = a1 + 8;
      v25 = a1;
      v24 = a1 + 16;
      do
      {
        v3 = v26;
        v4 = *(uint32_t *)v26;
        v5 = *(uint32_t *)(*(uint32_t *)a1 + 24) * *(uint32_t *)(*(uint32_t *)a1 + 20);
        v6 = *(uint32_t *)(*(uint32_t *)v26 + 24) * *(uint32_t *)(*(uint32_t *)v26 + 20);
        if ( v6 == v5 )
          v7 = *(uint16_t *)(v4 + 32) < *(uint16_t *)(*(uint32_t *)a1 + 32);
        else
          v7 = v6 > v5;
        v32 = *(uint32_t *)v26;
        v23 = (volatile int32_t *)(v4 + 4);
        if ( !v7 )
        {
          sub_8B1B00(v23);
          v17 = v25;
          v33 = v26[4];
          while ( 1 )
          {
            v19 = *(uint32_t *)(v32 + 24) * *(uint32_t *)(v32 + 20);
            v20 = *(uint32_t *)v17;
            v21 = *(uint32_t *)(*(uint32_t *)v17 + 24) * *(uint32_t *)(*(uint32_t *)v17 + 20);
            if ( v19 == v21 )
            {
              if ( *(uint16_t *)(v32 + 32) >= *(uint16_t *)(v20 + 32) )
              {
LABEL_22:
                v31 = v32;
                sub_8B1B00((volatile int32_t *)(v32 + 4));
                v22 = *(uint32_t *)v3;
                *(uint32_t *)v3 = v31;
                v31 = v22;
                sub_5ED480(&v31);
                v3[4] = v33;
                sub_5ED480(&v32);
                result = v24;
                goto LABEL_15;
              }
            }
            else if ( v19 <= v21 )
            {
              goto LABEL_22;
            }
            v30 = *(uint32_t *)v17;
            sub_8B1B00((volatile int32_t *)(v20 + 4));
            v18 = *(uint32_t *)v3;
            *(uint32_t *)v3 = v30;
            v30 = v18;
            sub_5ED480(&v30);
            v3[4] = v17[4];
            v3 = v17;
            v17 -= 8;
          }
        }
        sub_8B1B00(v23);
        v33 = v26[4];
        v27 = (v26 - a1) >> 3;
        if ( v27 > 0 )
        {
          v8 = v25;
          v9 = (int *)(v24 - 8);
          do
          {
            v10 = (char *)v9 - (char *)(v26);
            v11 = *(uint32_t *)&v8[(char *)v9 - (char *)(v26)];
            v12 = 0;
            v28 = v11;
            if ( v11 != 0 )
            {
              sub_8B1B00((volatile int32_t *)(v11 + 4));
              v12 = v28;
            }
            v13 = *v9;
            *v9 = v12;
            v28 = v13;
            v9 -= 2;
            sub_5ED480(&v28);
            v8 = v25;
            v14 = v27-- == 1;
            v26[v10 + 4] = v25[v10 + 4];
          }
          while ( !v14 );
        }
        v15 = 0;
        v29 = v32;
        if ( v32 != 0 )
        {
          sub_8B1B00((volatile int32_t *)(v32 + 4));
          v15 = v29;
        }
        v16 = *(uint32_t *)a1;
        *(uint32_t *)a1 = v15;
        v29 = v16;
        sub_5ED480(&v29);
        a1[4] = v33;
        sub_5ED480(&v32);
        result = v24;
LABEL_15:
        v25 += 8;
        v24 += 8;
        v26 += 8;
      }
      while ( a2 != result );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gnu_cxx_normal_iterator_5cb861  (binary VA: 0xf11b10)
// Original: std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::scene::SParameterAtlasInfo *,std::vector<glitch::scene::SParameterAtlasInfo,glitch::core::SAllocator<glitch::scene::SParameterAtlasInfo,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::scene::SParameterAtlasInfo::SSortFunctor>
// ----------------------------------------------------------------------------
void g4_std::insertion_sort_gnu_cxx_normal_iterator_5cb861(glitch::scene::SParameterAtlasInfo *a1, glitch::scene::SParameterAtlasInfo *a2)
{
  bool v2; // si
  glitch::scene::SParameterAtlasInfo *v3;
  int v4;
  glitch::video::CMaterial::Self **v5;
  glitch::video::CMaterial::Self **v6;
  glitch::video::CMaterial::Self **v7;
  char *v8;
  glitch::video::CMaterial::Self **v9;
  uint8_t v10;
  uint8_t v11;
  int v12;
  uint8_t v13;
  uint8_t v14;
  typedef uint8_t _g4_t_v15;
  typedef uint8_t _g4_t_v16;
  typedef glitch::scene::SParameterAtlasInfo *_g4_t_v17;
  typedef bool _g4_t_v18;
  typedef glitch::video::CMaterial::Self *_g4_t_v19[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (2u + sizeof(_g4_t_v15)) > _g4_s0 ? (2u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (3u + sizeof(_g4_t_v16)) > _g4_s1 ? (3u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v19)) > _g4_s4 ? (16u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 2u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 3u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);

  if ( a2 != a1 && (glitch::scene::SParameterAtlasInfo *)((char *)a1 + 20) != a2 )
  {
    v17 = (glitch::scene::SParameterAtlasInfo *)((char *)a1 + 20);
    do
    {
      v2 = *(uint32_t *)v17 < *(uint32_t *)a1;
      if ( *(uint32_t *)v17 == *(uint32_t *)a1 )
      {
        v16 = *((uint8_t *)v17 + 15);
        v13 = *((uint8_t *)a1 + 15);
        v2 = v16 < v13;
        if ( v16 == v13 )
        {
          v15 = *((uint8_t *)v17 + 16);
          v14 = *((uint8_t *)a1 + 16);
          v2 = v15 < v14;
          if ( v15 == v14 )
            v2 = *((uint32_t *)v17 + 1) < *((uint32_t *)a1 + 1);
        }
      }
      if ( !v2 )
      {
        glitch::scene::SParameterAtlasInfo::Construct(
          (glitch::scene::SParameterAtlasInfo *)v19,
          (volatile int32_t **)v17);
        v7 = (glitch::video::CMaterial::Self **)v17;
        v8 = (char *)v17 - 20;
        while ( 1 )
        {
          v9 = (glitch::video::CMaterial::Self **)v8;
          v18 = v19[0] < (glitch::video::CMaterial::Self *)*(uint32_t *)v8;
          if ( v19[0] == *(glitch::video::CMaterial::Self **)v8
            && (v10 = v8[15], v18 = HIBYTE(v19[3]) < v10, HIBYTE(v19[3]) == v10)
            && (v11 = v8[16], v18 = LOBYTE(v19[4]) < v11, LOBYTE(v19[4]) == v11) )
          {
            v12 = *((uint32_t *)v8 + 1);
            v8 -= 20;
            if ( (int)(uintptr_t)(v19[1]) >= v12 )
            {
LABEL_20:
              glitch::scene::SParameterAtlasInfo::opAssign(v7, v19);
              sub_5ED4F0(v19);
              v3 = (glitch::scene::SParameterAtlasInfo *)((char *)v17 + 20);
              goto LABEL_11;
            }
          }
          else
          {
            v8 -= 20;
            if ( !v18 )
              goto LABEL_20;
          }
          glitch::scene::SParameterAtlasInfo::opAssign(v7, v9);
          v7 = v9;
        }
      }
      v3 = (glitch::scene::SParameterAtlasInfo *)((char *)v17 + 20);
      glitch::scene::SParameterAtlasInfo::Construct(
        (glitch::scene::SParameterAtlasInfo *)v19,
        (volatile int32_t **)v17);
      v4 = -858993459 * ((v17 - a1) >> 2);
      if ( v4 > 0 )
      {
        v5 = (glitch::video::CMaterial::Self **)v17;
        do
        {
          v6 = v5 - 5;
          glitch::scene::SParameterAtlasInfo::opAssign(v5, v5 - 5);
          --v4;
          v5 = v6;
        }
        while ( v4 != 0 );
        v3 = (glitch::scene::SParameterAtlasInfo *)((char *)v17 + 20);
      }
      glitch::scene::SParameterAtlasInfo::opAssign((glitch::video::CMaterial::Self **)a1, v19);
      sub_5ED4F0(v19);
LABEL_11:
      v17 = v3;
    }
    while ( a2 != v3 );
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gnu_cxx_normal_iterator_91bf80  (binary VA: 0xf11d10)
// Original: std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::scene::STextureAtlasArray::SItem *,std::vector<glitch::scene::STextureAtlasArray::SItem,glitch::core::SAllocator<glitch::scene::STextureAtlasArray::SItem,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::scene::STextureAtlasArray::STextureNameCompFunctor>
// ----------------------------------------------------------------------------
void g4_std::insertion_sort_gnu_cxx_normal_iterator_91bf80(uint8_t *a1, uint8_t *a2)
{
  int v2;
  int v3;
  int *v4;
  int v5;
  int v6;
  int v7;
  bool v8;
  int v9;
  int v10;
  uint8_t *v11;
  uint8_t *v12;
  int v13;
  uint8_t *v14;
  char v15;
  int v16;
  int v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t *_g4_t_v20;
  typedef uint8_t *_g4_t_v21;
  typedef uint8_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef char _g4_t_v30;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v19)) > _g4_s1 ? (24u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v20)) > _g4_s2 ? (32u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v21)) > _g4_s3 ? (36u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v22)) > _g4_s4 ? (40u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v23)) > _g4_s5 ? (44u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v24)) > _g4_s6 ? (44u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v25)) > _g4_s7 ? (48u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v26)) > _g4_s8 ? (64u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v27)) > _g4_s9 ? (72u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v28)) > _g4_s10 ? (76u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v29)) > _g4_s11 ? (80u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v30)) > _g4_s12 ? (84u + sizeof(_g4_t_v30)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 84u);

  if ( a2 != a1 && a1 + 8 != a2 )
  {
    v21 = a1;
    v22 = a1 + 8;
    v20 = a1 + 16;
    do
    {
      v2 = *(uint32_t *)v22;
      v3 = strcmp(*(const char **)(*(uint32_t *)v22 + 12), *(const char **)(*(uint32_t *)a1 + 12));
      v29 = v2;
      v18 = (volatile int32_t *)(v2 + 4);
      if ( v3 >= 0 )
      {
        sub_8B1B00(v18);
        v12 = v21;
        v24 = v22;
        v30 = v22[4];
        while ( 1 )
        {
          v16 = *(uint32_t *)v12;
          v19 = v29;
          if ( strcmp(*(const char **)(v29 + 12), *(const char **)(*(uint32_t *)v12 + 12)) >= 0 )
            break;
          v27 = v16;
          sub_8B1B00((volatile int32_t *)(v16 + 4));
          v13 = *(uint32_t *)v24;
          *(uint32_t *)v24 = v27;
          v27 = v13;
          sub_5ED480(&v27);
          v14 = v24;
          v24 = v12;
          v15 = v12[4];
          v12 -= 8;
          v14[4] = v15;
        }
        v28 = v19;
        sub_8B1B00((volatile int32_t *)(v19 + 4));
        v17 = *(uint32_t *)v24;
        *(uint32_t *)v24 = v28;
        v28 = v17;
        sub_5ED480(&v28);
        v24[4] = v30;
        sub_5ED480(&v29);
        v11 = v20;
      }
      else
      {
        sub_8B1B00(v18);
        v30 = v22[4];
        v23 = (v22 - a1) >> 3;
        if ( v23 > 0 )
        {
          v4 = (int *)(v20 - 8);
          do
          {
            v5 = (char *)v4 - (char *)(v22);
            v6 = 0;
            v25 = *(uint32_t *)&v21[(char *)v4 - (char *)(v22)];
            if ( v25 != 0 )
            {
              sub_8B1B00((volatile int32_t *)(v25 + 4));
              v6 = v25;
            }
            v7 = *v4;
            *v4 = v6;
            v25 = v7;
            v4 -= 2;
            sub_5ED480(&v25);
            v8 = v23-- == 1;
            v22[v5 + 4] = v21[v5 + 4];
          }
          while ( !v8 );
        }
        v9 = 0;
        v26 = v29;
        if ( v29 != 0 )
        {
          sub_8B1B00((volatile int32_t *)(v29 + 4));
          v9 = v26;
        }
        v10 = *(uint32_t *)a1;
        *(uint32_t *)a1 = v9;
        v26 = v10;
        sub_5ED480(&v26);
        a1[4] = v30;
        sub_5ED480(&v29);
        v11 = v20;
      }
      v21 += 8;
      v20 += 8;
      v22 += 8;
    }
    while ( a2 != v11 );
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_int_id_9b8903::M_fill_insert  (binary VA: 0xf12db0)
// Original: std::vector<int>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_int_id_9b8903::M_fill_insert(int a1, unsigned int *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int j;
  __m128i v11;
  __m128i *v12;
  unsigned int v13;
  unsigned int *v14;
  int v15;
  int v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int k;
  unsigned int v21;
  __m128i v22;
  unsigned int v23;
  __m128i *v24;
  unsigned int v25;
  int v26;
  int v27;
  bool v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int *v33;
  unsigned int v34;
  unsigned int i;
  __m128i v36;
  __m128i *v37;
  unsigned int v38;
  int v39;
  int v40;
  int v41;
  char *v42;
  int v43;
  int v44;
  char *v45;
  size_t v46;
  int v47;
  int v48;
  unsigned int *v49;
  int v50;
  char *v51;
  unsigned int v52;
  unsigned int *v53;
  unsigned int m;
  __m128i v55;
  unsigned int v56;
  __m128i *v57;
  unsigned int *v58;
  int v59;
  unsigned int v60;
  unsigned int v61;
  int v62;
  int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int *v67;
  __m128i *v68;
  __m128i *v69;
  unsigned int *v70;
  char *v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;

  if ( a3 == 0 )
    return;
  v4 = *(unsigned int **)(a1 + 4);
  v70 = v4;
  if ( a3 > (*(uint32_t *)(a1 + 8) - (int)(uintptr_t)(v4)) >> 2 )
  {
    v25 = ((int)(uintptr_t)(v4) - *(uint32_t *)a1) >> 2;
    if ( a3 > 0x3FFFFFFF - v25 )
      sub_1900180("vector::_M_fill_insert");
    v26 = a3;
    if ( v25 >= a3 )
      v26 = ((int)(uintptr_t)(v4) - *(uint32_t *)a1) >> 2;
    v27 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    v28 = __CFADD__(v26, v25);
    v29 = v26 + v25;
    if ( v28 || v29 > 0x3FFFFFFF )
    {
      v59 = -4;
      v46 = 0xFFFFFFFC;
    }
    else
    {
      if ( v29 == 0 )
      {
        v71 = nullptr;
        v59 = 0;
        v30 = 0;
LABEL_39:
        v31 = *a4;
        v32 = a3;
        v33 = (unsigned int *)(v30 + 4 * v27);
        v67 = v33;
        v34 = -((uint8_t)((uint8_t)(uintptr_t)(v33) & 0xF) >> 2) & 3;
        if ( v34 > a3 )
          v34 = a3;
        if ( v34 == 0 )
          goto LABEL_83;
        for ( i = 0; i < v34; ++i )
        {
          --v32;
          *v33++ = v31;
        }
        if ( a3 != v34 )
        {
LABEL_83:
          v61 = a3 - v34;
          v65 = (a3 - v34) >> 2;
          v63 = 4 * v65;
          if ( 4 * v65 == 0 )
            goto LABEL_84;
          v36 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v31), 0);
          v37 = (__m128i *)&v67[v34];
          v38 = 0;
          do
          {
            ++v38;
            *v37++ = v36;
          }
          while ( v38 < v65 );
          v32 -= v63;
          v33 += 4 * v65;
          if ( v61 != v63 )
          {
LABEL_84:
            do
            {
              --v32;
              *v33++ = v31;
            }
            while ( v32 != 0 );
          }
        }
        v39 = a1;
        v40 = 0;
        v41 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
        if ( v41 != 0 )
        {
          v40 = 4 * v41;
          memmove(v71, *(const void **)a1, 4 * v41);
          v39 = a1;
        }
        v42 = &v71[4 * a3 + v40];
        v43 = 0;
        v44 = (*(uint32_t *)(v39 + 4) - (int)(uintptr_t)(src)) >> 2;
        if ( v44 != 0 )
        {
          v43 = 4 * v44;
          memmove(v42, src, 4 * v44);
          v39 = a1;
        }
        v45 = &v42[v43];
        if ( *(uint32_t *)v39 != 0 )
          opDelete(*(void **)v39);
        *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v71);
        *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v45);
        *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&v71[v59]);
        return;
      }
      v59 = 4 * v29;
      v46 = 4 * v29;
    }
    v30 = opNew(v46);
    v71 = (char *)v30;
    goto LABEL_39;
  }
  v5 = *a4;
  v66 = v4 - src;
  if ( a3 >= v66 )
  {
    v6 = a3 - v66;
    v7 = *(unsigned int **)(a1 + 4);
    v72 = a3 - v66;
    if ( a3 == v66 )
      goto LABEL_17;
    v8 = -((uint8_t)((uint8_t)(uintptr_t)(v4) & 0xF) >> 2) & 3;
    if ( v8 > v6 )
      v8 = a3 - v66;
    if ( v8 != 0 )
    {
      v9 = a3 - v66;
      for ( j = 0; j < v8; ++j )
      {
        --v9;
        *v7++ = v5;
      }
      if ( v72 == v8 )
      {
LABEL_16:
        v6 = a3 - v66;
        v7 = *(unsigned int **)(a1 + 4);
LABEL_17:
        v14 = &v7[v6];
        *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v14);
        if ( v66 != 0 )
        {
          v15 = v66;
          memmove(v14, src, 4 * v66);
          v16 = a1;
          v14 = *(unsigned int **)(a1 + 4);
        }
        else
        {
          v15 = 0;
          v16 = a1;
        }
        *(uint32_t *)(v16 + 4) = (uint32_t)(uintptr_t)(&v14[v15]);
        if ( v70 != src )
        {
          v17 = src;
          v18 = ((unsigned int)((char *)v70 - (char *)(src + 1)) >> 2) + 1;
          v19 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
          if ( v19 > v18 )
            v19 = ((unsigned int)((char *)v70 - (char *)(src + 1)) >> 2) + 1;
          if ( v19 == 0 )
            goto LABEL_26;
          for ( k = 0; k < v19; ++k )
            *v17++ = v5;
          if ( v18 != v19 )
          {
LABEL_26:
            v73 = v18 - v19;
            v21 = (v18 - v19) >> 2;
            if ( 4 * v21 == 0 )
              goto LABEL_85;
            v22 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
            v69 = (__m128i *)&src[v19];
            v23 = 0;
            v24 = v69;
            do
            {
              ++v23;
              *v24++ = v22;
            }
            while ( v23 < v21 );
            v17 += 4 * v21;
            if ( v73 != 4 * v21 )
            {
LABEL_85:
              do
                *v17++ = v5;
              while ( v70 != v17 );
            }
          }
        }
        return;
      }
    }
    else
    {
      v9 = a3 - v66;
      v7 = *(unsigned int **)(a1 + 4);
    }
    v60 = v72 - v8;
    v64 = (v72 - v8) >> 2;
    v62 = 4 * v64;
    if ( 4 * v64 == 0 )
      goto LABEL_86;
    v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
    v12 = (__m128i *)&v70[v8];
    v13 = 0;
    do
    {
      ++v13;
      *v12++ = v11;
    }
    while ( v13 < v64 );
    v9 -= v62;
    v7 += 4 * v64;
    if ( v60 != v62 )
    {
LABEL_86:
      do
      {
        --v9;
        *v7++ = v5;
      }
      while ( v9 != 0 );
    }
    goto LABEL_16;
  }
  v47 = a3;
  v48 = *(uint32_t *)(a1 + 4);
  v49 = &v4[-a3];
  if ( (int)(4 * a3) >> 2 != 0 )
  {
    memmove(v70, &v70[-a3], 4 * ((int)(4 * a3) >> 2));
    v49 = &v70[-a3];
    v48 = *(uint32_t *)(a1 + 4);
  }
  v50 = v49 - src;
  *(uint32_t *)(a1 + 4) = v47 * 4 + v48;
  if ( v50 != 0 )
    memmove(&v70[-v50], src, 4 * v50);
  v51 = (char *)&src[v47];
  if ( v51 != (char *)src )
  {
    v52 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
    v74 = ((unsigned int)(v51 - (char *)(src + 1)) >> 2) + 1;
    if ( v74 <= v52 )
      v52 = ((unsigned int)(v51 - (char *)(src + 1)) >> 2) + 1;
    v53 = src;
    if ( v52 == 0 )
      goto LABEL_87;
    for ( m = 0; m < v52; ++m )
      *v53++ = v5;
    if ( v74 != v52 )
    {
LABEL_87:
      v75 = v74 - v52;
      if ( 4 * (v75 >> 2) == 0 )
        goto LABEL_88;
      v55 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
      v68 = (__m128i *)&src[v52];
      v56 = 0;
      v57 = v68;
      do
      {
        ++v56;
        *v57++ = v55;
      }
      while ( v56 < v75 >> 2 );
      v53 += 4 * (v75 >> 2);
      if ( v75 != 4 * (v75 >> 2) )
      {
LABEL_88:
        do
        {
          *v53 = v5;
          v58 = v53 + 1;
          if ( v51 == (char *)v58 )
            break;
          *v58 = v5;
          v53 = v58 + 1;
        }
        while ( v51 != (char *)v53 );
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_basic_string_char_char_t_09c05c::M_erase  (binary VA: 0xf13a00)
// Original: std::_Rb_tree<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>>,std::less<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::core::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,(glitch::memory::E_MEMORY_HINT)0>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_basic_string_char_char_t_09c05c::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)a2[3];
      v21 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v22 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v23 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v24 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v25 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v20 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              v19 = v8;
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = (uint32_t *)v8[3];
                                  if ( v9 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_basic_string_char_char_t_09c05c::M_erase(
                                        a1,
                                        (uint32_t *)(uintptr_t)(v9[3]));
                                      v10 = (uint32_t *)v9[2];
                                      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v9 + 5));
                                      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v9 + 4));
                                      gll_operator_delete_arr((int)(uintptr_t)(v9));
                                      if ( v10 == nullptr )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v19 + 5));
                                  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v19 + 4));
                                  gll_operator_delete_arr((int)(uintptr_t)(v19));
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v20 + 5));
                              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v20 + 4));
                              gll_operator_delete_arr((int)(uintptr_t)(v20));
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v25[2];
                          g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v25 + 5));
                          g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v25 + 4));
                          gll_operator_delete_arr((int)(uintptr_t)(v25));
                          if ( v13 == nullptr )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v24[2];
                      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v24 + 5));
                      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v24 + 4));
                      gll_operator_delete_arr((int)(uintptr_t)(v24));
                      if ( v14 == nullptr )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v23[2];
                  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v23 + 5));
                  g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v23 + 4));
                  gll_operator_delete_arr((int)(uintptr_t)(v23));
                  if ( v15 == nullptr )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v22[2];
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v22 + 5));
              g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v22 + 4));
              gll_operator_delete_arr((int)(uintptr_t)(v22));
              if ( v16 == nullptr )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v21[2];
          g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v21 + 5));
          g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(v21 + 4));
          gll_operator_delete_arr((int)(uintptr_t)(v21));
          if ( v17 == nullptr )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)a2[2];
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(a2 + 5));
      g4_std::basic_string_char_char_traits_char_SA_77cf59::Destroy((std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)(a2 + 4));
      gll_operator_delete_arr((int)(uintptr_t)(a2));
      if ( v18 == nullptr )
        break;
      a2 = v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_basic_string_char_char_t_0e7f8a::Destroy  (binary VA: 0xf13cc0)
// Original: std::map<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,std::less<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::core::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,(glitch::memory::E_MEMORY_HINT)0>>::~map
// ----------------------------------------------------------------------------
void g4_std::map_basic_string_char_char_t_0e7f8a::Destroy(std::map<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>, std::less<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>>, glitch::core::SAllocator<std::pair<std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> const, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>>>, (glitch::memory::E_MEMORY_HINT)0>> *self)
{
  g4_std::Rb_tree_basic_string_char_char_t_09c05c::M_erase(
    (int)(uintptr_t)(self),
    *((uint32_t **)self + 2));
}



// ============================================================================
// Address:   0xf13cf0 (size: 675 bytes)
// Symbol:    _ZStrsIcSt11char_traitsIcEN6glitch4core10SAllocatorIcLNS2_6memory13E_MEMORY_HINTE0EEEERSt13basic_istreamIT_T0_ESC_RSbIS9_SA_T1_E
// Demangled: std::basic_istream<char,std::char_traits<char>> & std::operator>><char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>(std::basic_istream<char,std::char_traits<char>> &,std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> &)
// ============================================================================
int *g4_std_compat::glitch_istream_op_shr(
        int *a1,
        const void **a2)
{
  int v2;
  char *v4;
  int v5;
  int v6;
  uint32_t *v7;
  uint8_t *v8;
  size_t v9;
  unsigned int v10;
  int v11;
  uint32_t *v12;
  unsigned int v13;
  unsigned int v14;
  uint8_t *v15;
  int v16;
  int v17;
  int v18;
  typedef char _g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26[4];
  typedef uint8_t _g4_t_v27[156];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v20)) > _g4_s1 ? (0u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v21)) > _g4_s2 ? (4u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v22)) > _g4_s3 ? (8u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v23)) > _g4_s4 ? (12u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v24)) > _g4_s5 ? (12u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (27u + sizeof(_g4_t_v25)) > _g4_s6 ? (27u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v26)) > _g4_s7 ? (28u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v27)) > _g4_s8 ? (32u + sizeof(_g4_t_v27)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 27u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);

  sub_1913480(&v25, a1, 0);
  v2 = 4;
  if ( v25 == 0 )
    goto LABEL_2;
  g4_std::basic_string_char_char_traits_char_SA_77cf59::M_mutate(
    a2,
    0,
    *((uint32_t *)*a2 - 3),
    0);
  v4 = (char *)a1 + *(uint32_t *)(*a1 - 12);
  v5 = *((uint32_t *)v4 + 2);
  if ( v5 <= 0 )
    v5 = 1073741820;
  v21 = v5;
  sub_1901AC0(v26, v4 + 108);
  v22 = (int)(uintptr_t)(sub_191CFA0(v26));
  sub_1902180(v26);
  v6 = *a1;
  v7 = *(uint32_t **)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120);
  v8 = (uint8_t *)v7[2];
  if ( (unsigned int)(uintptr_t)(v8) >= v7[3] )
  {
    v23 = (*(int (**)(uint32_t))(*v7 + 36))(*(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 120));
    v6 = *a1;
    if ( v23 == -1 )
    {
      v2 = 6;
      *(int *)((char *)a1 + *(uint32_t *)(v6 - 12) + 8) = 0;
LABEL_2:
      sub_1911530((char *)a1 + *(uint32_t *)(*a1 - 12), *(int *)((char *)a1 + *(uint32_t *)(*a1 - 12) + 20) | v2);
      return a1;
    }
  }
  else
  {
    LOBYTE(v23) = *v8;
  }
  v9 = 0;
  v10 = 0;
  if ( (*(uint8_t *)(*(uint32_t *)(v22 + 24) + (uint8_t)v23) & 8) != 0 )
    goto LABEL_23;
  LOBYTE(v11) = v23;
  while ( 1 )
  {
    v27[v9++] = v11;
    ++v10;
    v12 = *(uint32_t **)((char *)a1 + *(uint32_t *)(v6 - 12) + 120);
    v13 = v12[2];
    v14 = v12[3];
    if ( v13 >= v14 )
    {
      v20 = v12;
      v18 = G4_VCALL<int>(v12, 40);
      v12 = v20;
      if ( v18 == -1 )
      {
        v11 = -1;
        goto LABEL_14;
      }
      v15 = (uint8_t *)v20[2];
      v14 = v20[3];
    }
    else
    {
      v15 = (uint8_t *)(v13 + 1);
      v12[2] = (uint32_t)(uintptr_t)(v15);
    }
    v11 = (unsigned int)(uintptr_t)(v15) >= v14 ? G4_VCALL<int>(v12, 36) : *v15;
LABEL_14:
    if ( v21 <= v10 || v11 == -1 || (*(uint8_t *)(*(uint32_t *)(v22 + 24) + (uint8_t)v11) & 8) != 0 )
      break;
    if ( v9 == 128 )
    {
      if ( (unsigned int)(1073741820 - *((uint32_t *)*a2 - 3)) <= 0x7F )
        goto LABEL_35;
      v19 = v11;
      v9 = 0;
      sub_EA1F80((volatile int32_t **)a2, v27, 0x80u);
      LOBYTE(v11) = v19;
      v6 = *a1;
    }
    else
    {
      v6 = *a1;
    }
  }
  v24 = v11;
  if ( v9 != 0 )
  {
    if ( 1073741820 - *((uint32_t *)*a2 - 3) < v9 )
LABEL_35:
      sub_1900180("basic_string::append");
    sub_EA1F80((volatile int32_t **)a2, v27, v9);
  }
  v6 = *a1;
  if ( v24 == -1 )
  {
    v2 = 6;
    v16 = 2;
    v17 = 2;
  }
  else
  {
LABEL_23:
    v2 = 4;
    v16 = 0;
    v17 = 0;
  }
  *(int *)((char *)a1 + *(uint32_t *)(v6 - 12) + 8) = 0;
  if ( v10 == 0 )
    goto LABEL_2;
  if ( v17 != 0 )
  {
    v2 = v16;
    goto LABEL_2;
  }
  return a1;
}
// ----------------------------------------------------------------------------
// Function: g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign  (binary VA: 0xf13fa0)
// Original: std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::operator=
// ----------------------------------------------------------------------------
const void ** g4_std::basic_string_char_char_traits_char_SA_77cf59::opAssign(const void **self, char *s)
{
  unsigned int n;
  unsigned int v3;
  unsigned int v4;
  uint8_t *v6;

  n = strlen(s);
  v3 = (unsigned int)(uintptr_t)(*self);
  v4 = *((uint32_t *)*self - 3);
  if ( n > 0x3FFFFFFC )
    sub_1900180("basic_string::assign");
  if ( (unsigned int)(uintptr_t)(s) >= v3 && (unsigned int)(uintptr_t)(s) <= v3 + v4 && *(int *)(v3 - 4) <= 0 )
  {
    if ( n <= (unsigned int)(uintptr_t)(&s[-v3]) )
    {
      if ( n != 1 )
      {
        memcpy((void *)v3, s, n);
        v3 = (unsigned int)(uintptr_t)(*self);
        goto LABEL_11;
      }
    }
    else
    {
      if ( s == (char *)v3 )
        goto LABEL_11;
      if ( n != 1 )
      {
        memmove((void *)v3, s, n);
        v3 = (unsigned int)(uintptr_t)(*self);
        goto LABEL_11;
      }
    }
    *(uint8_t *)v3 = *s;
    v3 = (unsigned int)(uintptr_t)(*self);
LABEL_11:
    if ( (int *)(v3 - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
    {
      *(uint32_t *)(v3 - 4) = 0;
      *(uint32_t *)(v3 - 12) = n;
      *(uint8_t *)(v3 + n) = 0;
    }
    return self;
  }
  g4_std::basic_string_char_char_traits_char_SA_77cf59::M_mutate(
    self,
    0,
    v4,
    n);
  if ( n != 0 )
  {
    v6 = (uint8_t *)(*self);
    if ( n == 1 )
      *v6 = *s;
    else
      memcpy(v6, s, n);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: g4_std::remove_if_gnu_cxx_normal_iterator_cb5a89  (binary VA: 0xf15ec0)
// Original: std::remove_if<__gnu_cxx::__normal_iterator<glitch::scene::STextureAtlasArray *,std::vector<glitch::scene::STextureAtlasArray,glitch::core::SAllocator<glitch::scene::STextureAtlasArray,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::scene::CTextureAtlasCompilePass::SAtlasArrayRemoveFunc>
// ----------------------------------------------------------------------------
glitch::scene::STextureAtlasArray::Self ** g4_std::remove_if_gnu_cxx_normal_iterator_cb5a89(glitch::scene::STextureAtlasArray::Self **a1, glitch::scene::STextureAtlasArray::Self *a2, char *a3)
{
  glitch::scene::STextureAtlasArray::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  glitch::scene::STextureAtlasArray::Self *v8;
  glitch::scene::STextureAtlasArray::Self *i;
  int v10;
  int v11;
  int v13;
  int v14;
  glitch::scene::STextureAtlasArray::Self *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  glitch::scene::STextureAtlasArray::Self *v26;
  glitch::scene::STextureAtlasArray::Self *v27;

  v3 = a2;
  v4 = -1171354717 * ((a3 - (char *)a2) >> 2);
  v5 = v4 >> 2;
  if ( v4 >> 2 > 0 )
  {
    while ( 1 )
    {
      v6 = *(uint32_t *)v3;
      v7 = *((uint32_t *)v3 + 1);
      if ( *(uint32_t *)v3 != v7 )
        break;
LABEL_14:
      v13 = *((uint32_t *)v3 + 11);
      v14 = *((uint32_t *)v3 + 12);
      v15 = (glitch::scene::STextureAtlasArray::Self *)((char *)v3 + 44);
      if ( v13 != v14 )
      {
        while ( *(uint8_t *)(v13 + 4) != 0 )
        {
          v13 += 8;
          if ( v14 == v13 )
            goto LABEL_19;
        }
        goto LABEL_18;
      }
LABEL_19:
      v16 = *((uint32_t *)v3 + 22);
      v17 = *((uint32_t *)v3 + 23);
      v15 = (glitch::scene::STextureAtlasArray::Self *)((char *)v3 + 88);
      if ( v16 != v17 )
      {
        while ( *(uint8_t *)(v16 + 4) != 0 )
        {
          v16 += 8;
          if ( v17 == v16 )
            goto LABEL_24;
        }
        goto LABEL_18;
      }
LABEL_24:
      v18 = *((uint32_t *)v3 + 33);
      v19 = *((uint32_t *)v3 + 34);
      v15 = (glitch::scene::STextureAtlasArray::Self *)((char *)v3 + 132);
      if ( v18 != v19 )
      {
        while ( *(uint8_t *)(v18 + 4) != 0 )
        {
          v18 += 8;
          if ( v19 == v18 )
            goto LABEL_29;
        }
LABEL_18:
        v3 = v15;
        goto LABEL_6;
      }
LABEL_29:
      v3 = (glitch::scene::STextureAtlasArray::Self *)((char *)v3 + 176);
      if ( --v5 == 0 )
      {
        v4 = -1171354717 * ((a3 - (char *)v3) >> 2);
        goto LABEL_31;
      }
    }
    while ( *(uint8_t *)(v6 + 4) != 0 )
    {
      v6 += 8;
      if ( v7 == v6 )
        goto LABEL_14;
    }
    goto LABEL_6;
  }
LABEL_31:
  if ( v4 == 2 )
    goto LABEL_38;
  if ( v4 == 3 )
  {
    v24 = *(uint32_t *)v3;
    v25 = *((uint32_t *)v3 + 1);
    if ( *(uint32_t *)v3 != v25 )
    {
      while ( *(uint8_t *)(v24 + 4) != 0 )
      {
        v24 += 8;
        if ( v25 == v24 )
          goto LABEL_37;
      }
      goto LABEL_6;
    }
LABEL_37:
    v3 = (glitch::scene::STextureAtlasArray::Self *)((char *)v3 + 44);
LABEL_38:
    v20 = *(uint32_t *)v3;
    v21 = *((uint32_t *)v3 + 1);
    if ( *(uint32_t *)v3 != v21 )
    {
      while ( *(uint8_t *)(v20 + 4) != 0 )
      {
        v20 += 8;
        if ( v21 == v20 )
          goto LABEL_44;
      }
      goto LABEL_6;
    }
LABEL_44:
    v3 = (glitch::scene::STextureAtlasArray::Self *)((char *)v3 + 44);
    goto LABEL_45;
  }
  if ( v4 != 1 )
  {
    v3 = (glitch::scene::STextureAtlasArray::Self *)a3;
    goto LABEL_6;
  }
LABEL_45:
  v22 = *(uint32_t *)v3;
  v23 = *((uint32_t *)v3 + 1);
  if ( *(uint32_t *)v3 == v23 )
    goto LABEL_43;
  while ( *(uint8_t *)(v22 + 4) != 0 )
  {
    v22 += 8;
    if ( v23 == v22 )
      goto LABEL_43;
  }
LABEL_6:
  if ( a3 == (char *)v3 )
  {
LABEL_43:
    *a1 = (glitch::scene::STextureAtlasArray::Self *)a3;
    return a1;
  }
  v8 = (glitch::scene::STextureAtlasArray::Self *)((char *)v3 + 44);
  for ( i = v3; a3 != (char *)v8; v8 = (glitch::scene::STextureAtlasArray::Self *)((char *)v8 + 44) )
  {
    while ( 1 )
    {
      v10 = *(uint32_t *)v8;
      v11 = *((uint32_t *)v8 + 1);
      if ( *(uint32_t *)v8 != v11 )
        break;
LABEL_35:
      v27 = v8;
      v8 = (glitch::scene::STextureAtlasArray::Self *)((char *)v8 + 44);
      v26 = i;
      i = (glitch::scene::STextureAtlasArray::Self *)((char *)i + 44);
      glitch::scene::STextureAtlasArray::opAssign(v26, v27);
      if ( a3 == (char *)v8 )
        goto LABEL_13;
    }
    while ( *(uint8_t *)(v10 + 4) != 0 )
    {
      v10 += 8;
      if ( v11 == v10 )
        goto LABEL_35;
    }
  }
LABEL_13:
  *a1 = i;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gnu_cxx_normal_iterator_edbca1  (binary VA: 0xf160b0)
// Original: std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::scene::STextureAtlasArray *,std::vector<glitch::scene::STextureAtlasArray,glitch::core::SAllocator<glitch::scene::STextureAtlasArray,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::scene::STextureAtlasArray::SAtlasIdSort>
// ----------------------------------------------------------------------------
void g4_std::insertion_sort_gnu_cxx_normal_iterator_edbca1(glitch::scene::STextureAtlasArray::Self *a1, glitch::scene::STextureAtlasArray::Self *a2)
{
  uint16_t v2;
  uint16_t v3; // si
  bool v4; // di
  const glitch::scene::STextureAtlasArray::Self *v5;
  int v6;
  glitch::scene::STextureAtlasArray::Self *v7;
  glitch::scene::STextureAtlasArray::Self *v8;
  glitch::scene::STextureAtlasArray::Self *v9;
  char *v10;
  uint16_t v11;
  const glitch::scene::STextureAtlasArray::Self *v12;
  unsigned int v13;
  unsigned int v14;
  typedef int _g4_t_v15;
  typedef const glitch::scene::STextureAtlasArray::Self *_g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef bool _g4_t_v19;
  typedef uint32_t _g4_t_v20[15];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v18)) > _g4_s3 ? (8u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v19)) > _g4_s4 ? (12u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v20)) > _g4_s5 ? (16u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);

  if ( a2 != a1 && (glitch::scene::STextureAtlasArray::Self *)((char *)a1 + 44) != a2 )
  {
    v16 = (glitch::scene::STextureAtlasArray::Self *)((char *)a1 + 44);
    do
    {
      v2 = *((uint16_t *)v16 + 13);
      v3 = *((uint16_t *)a1 + 13);
      v4 = v2 < v3;
      if ( v2 == v3 )
      {
        v14 = (*((uint32_t *)v16 + 1) - *(uint32_t *)v16) >> 3;
        v18 = (*((uint32_t *)a1 + 1) - *(uint32_t *)a1) >> 3;
        v4 = v14 > v18;
        if ( v14 == v18 )
          v4 = ((*(uint32_t *)(*(uint32_t *)(**(uint32_t **)v16 + 16) + 36) >> 6) & 0x3Fu) < ((*(uint32_t *)(*(uint32_t *)(**(uint32_t **)a1 + 16) + 36) >> 6)
                                                                                      & 0x3Fu);
      }
      if ( !v4 )
      {
        glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v20, v16);
        v9 = (glitch::scene::STextureAtlasArray::Self *)(v16);
        v10 = (char *)v16 - 44;
        while ( 1 )
        {
          v11 = *((uint16_t *)v10 + 13);
          v12 = (const glitch::scene::STextureAtlasArray::Self *)v10;
          v19 = HIWORD(v20[6]) < v11;
          if ( HIWORD(v20[6]) == v11
            && (v15 = *(uint32_t *)v10,
                v13 = (v20[1] - v20[0]) >> 3,
                v17 = (*((uint32_t *)v10 + 1) - *(uint32_t *)v10) >> 3,
                v19 = v13 > v17,
                v13 == v17) )
          {
            v10 -= 44;
            if ( ((*(uint32_t *)(*(uint32_t *)(*(uint32_t *)v20[0] + 16) + 36) >> 6) & 0x3Fu) >= ((*(uint32_t *)(*(uint32_t *)(*(uint32_t *)v15 + 16) + 36) >> 6)
                                                                                          & 0x3Fu) )
            {
LABEL_19:
              glitch::scene::STextureAtlasArray::opAssign(v9, (const glitch::scene::STextureAtlasArray::Self *)v20);
              glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v20);
              v5 = (const glitch::scene::STextureAtlasArray::Self *)((char *)v16 + 44);
              goto LABEL_11;
            }
          }
          else
          {
            v10 -= 44;
            if ( !v19 )
              goto LABEL_19;
          }
          glitch::scene::STextureAtlasArray::opAssign(v9, v12);
          v9 = (glitch::scene::STextureAtlasArray::Self *)(v12);
        }
      }
      glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v20, v16);
      v5 = (const glitch::scene::STextureAtlasArray::Self *)((char *)v16 + 44);
      v6 = -1171354717 * ((v16 - a1) >> 2);
      if ( v6 > 0 )
      {
        v7 = (glitch::scene::STextureAtlasArray::Self *)(v16);
        do
        {
          v8 = (glitch::scene::STextureAtlasArray::Self *)((char *)v7 - 44);
          glitch::scene::STextureAtlasArray::opAssign(v7, (glitch::scene::STextureAtlasArray::Self *)((char *)v7 - 44));
          --v6;
          v7 = v8;
        }
        while ( v6 != 0 );
        v5 = (const glitch::scene::STextureAtlasArray::Self *)((char *)v16 + 44);
      }
      glitch::scene::STextureAtlasArray::opAssign(a1, (const glitch::scene::STextureAtlasArray::Self *)v20);
      glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v20);
LABEL_11:
      v16 = v5;
    }
    while ( a2 != v5 );
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::insertion_sort_gnu_cxx_normal_iterator_892901  (binary VA: 0xf162f0)
// Original: std::__insertion_sort<__gnu_cxx::__normal_iterator<glitch::scene::STextureAtlasArray *,std::vector<glitch::scene::STextureAtlasArray,glitch::core::SAllocator<glitch::scene::STextureAtlasArray,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::scene::STextureAtlasArray::SSortFunctor>
// ----------------------------------------------------------------------------
void g4_std::insertion_sort_gnu_cxx_normal_iterator_892901(glitch::scene::STextureAtlasArray::Self *a1, glitch::scene::STextureAtlasArray::Self *a2)
{
  unsigned int v2;
  unsigned int *v3;
  unsigned int v4;
  char v5; // si
  int v6;
  glitch::scene::STextureAtlasArray::Self *v7;
  glitch::scene::STextureAtlasArray::Self *v8;
  glitch::scene::STextureAtlasArray::Self *v9;
  unsigned int *v10;
  int *v11;
  const glitch::scene::STextureAtlasArray::Self *v12;
  unsigned int *v13;
  unsigned int v14;
  unsigned int v15;
  char v16; // si
  unsigned int *v17;
  int *v18;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v19;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v20;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v21;
  typedef unsigned int *_g4_t_v22;
  typedef const glitch::scene::STextureAtlasArray::Self *_g4_t_i;
  typedef int *_g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef uint32_t _g4_t_v29[15];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v19)) > _g4_s0 ? (4u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_i)) > _g4_s4 ? (16u + sizeof(_g4_t_i)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v24)) > _g4_s5 ? (20u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v25)) > _g4_s6 ? (24u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v26)) > _g4_s7 ? (24u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v27)) > _g4_s8 ? (28u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v28)) > _g4_s9 ? (28u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v29)) > _g4_s10 ? (32u + sizeof(_g4_t_v29)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);

  if ( a2 == a1 || (glitch::scene::STextureAtlasArray::Self *)((char *)a1 + 44) == a2 )
    return;
  v19 = (glitch::scene::STextureAtlasArray::Self *)((char *)a1 + 44);
  do
  {
    v20 = v19;
    v22 = *(unsigned int **)v19;
    v2 = (*((uint32_t *)v19 + 1) - *(uint32_t *)v19) >> 3;
    v24 = *((int **)v19 + 1);
    v3 = *(unsigned int **)a1;
    v4 = (*((uint32_t *)a1 + 1) - *(uint32_t *)a1) >> 3;
    v5 = v2 > v4;
    if ( v2 != v4 )
      goto LABEL_5;
    if ( v22 != (unsigned int *)v24 )
    {
      v25 = *v3;
      v27 = *v22;
      if ( *v22 == *v3 )
      {
        v10 = *(unsigned int **)v19;
        v11 = (int *)(v3 + 3);
        v5 = *((uint8_t *)v22 + 4);
        if ( v5 == *((uint8_t *)v3 + 4) )
        {
          do
          {
            v10 += 2;
            if ( v24 == (int *)v10 )
              goto LABEL_20;
            v27 = *v10;
            v25 = *(v11 - 1);
            if ( *v10 != v25 )
              goto LABEL_33;
            v5 = *((uint8_t *)v10 + 4);
            v11 += 2;
          }
          while ( v5 == *((uint8_t *)v11 - 8) );
        }
      }
      else
      {
LABEL_33:
        v5 = v25 > v27;
      }
LABEL_5:
      if ( v5 != 0 )
      {
        glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v29, v19);
        v6 = -1171354717 * ((v19 - a1) >> 2);
        v7 = (glitch::scene::STextureAtlasArray::Self *)((char *)v19 + 44);
        if ( v6 > 0 )
        {
          v8 = v19;
          do
          {
            v9 = (glitch::scene::STextureAtlasArray::Self *)((char *)v8 - 44);
            glitch::scene::STextureAtlasArray::opAssign(v8, (glitch::scene::STextureAtlasArray::Self *)((char *)v8 - 44));
            --v6;
            v8 = v9;
          }
          while ( v6 != 0 );
          v7 = (glitch::scene::STextureAtlasArray::Self *)((char *)v19 + 44);
        }
        glitch::scene::STextureAtlasArray::opAssign(a1, (const glitch::scene::STextureAtlasArray::Self *)v29);
        glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v29);
        goto LABEL_11;
      }
    }
LABEL_20:
    glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v29, v19);
    v12 = (glitch::scene::STextureAtlasArray::Self *)((char *)v19 - 44);
    for ( i = (glitch::scene::STextureAtlasArray::Self *)((char *)v19 - 44); ; v12 = i )
    {
      v13 = *(unsigned int **)v12;
      v14 = (v29[1] - v29[0]) >> 3;
      v21 = (glitch::scene::STextureAtlasArray::Self *)(v12);
      v15 = (*((uint32_t *)v12 + 1) - *(uint32_t *)v12) >> 3;
      v16 = v14 > v15;
      if ( v14 == v15 )
      {
        v16 = 0;
        if ( v29[0] != v29[1] )
        {
          v26 = *v13;
          v28 = *(uint32_t *)v29[0];
          if ( *(uint32_t *)v29[0] != *v13 )
          {
LABEL_32:
            v16 = v28 < v26;
            goto LABEL_21;
          }
          v17 = (unsigned int *)v29[0];
          v18 = (int *)(v13 + 3);
          v16 = *(uint8_t *)(v29[0] + 4);
          if ( v16 == *((uint8_t *)v13 + 4) )
            break;
        }
      }
LABEL_21:
      i = (const glitch::scene::STextureAtlasArray::Self *)((char *)i - 44);
      if ( v16 == 0 )
        goto LABEL_31;
      glitch::scene::STextureAtlasArray::opAssign(v20, v12);
      v20 = v21;
    }
    while ( 1 )
    {
      v17 += 2;
      if ( (unsigned int *)v29[1] == v17 )
        break;
      v28 = *v17;
      v26 = *(v18 - 1);
      if ( *v17 != v26 )
        goto LABEL_32;
      v16 = *((uint8_t *)v17 + 4);
      v18 += 2;
      if ( v16 != *((uint8_t *)v18 - 8) )
        goto LABEL_21;
    }
LABEL_31:
    glitch::scene::STextureAtlasArray::opAssign(v20, (const glitch::scene::STextureAtlasArray::Self *)v29);
    glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v29);
    v7 = (glitch::scene::STextureAtlasArray::Self *)((char *)v19 + 44);
LABEL_11:
    v19 = v7;
  }
  while ( a2 != v7 );
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_bd415a  (binary VA: 0xf165f0)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::scene::STextureAtlasArray *,std::vector<glitch::scene::STextureAtlasArray,glitch::core::SAllocator<glitch::scene::STextureAtlasArray,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::scene::STextureAtlasArray::SAtlasIdSort>
// ----------------------------------------------------------------------------
void g4_std::introsort_loop_gnu_cxx_normal_iterator_bd415a(glitch::scene::STextureAtlasArray::Self *a1, glitch::scene::STextureAtlasArray::Self *a2, int a3)
{
  int v3;
  int v4;
  uint16_t v5;
  uint32_t *v6;
  uint16_t v7;
  bool v8;
  bool v9; // di
  bool v10; // di
  char *v11;
  uint16_t v12; // si
  bool v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  char *v17;
  uint16_t v18; // si
  bool v19;
  unsigned int v20;
  unsigned int v21;
  bool v22; // bp
  bool v23; // di
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  int v28;
  const glitch::scene::STextureAtlasArray::Self *i;
  const glitch::scene::STextureAtlasArray::Self *v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  typedef uint16_t _g4_t_v34;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v35;
  typedef unsigned int _g4_t_v36;
  typedef unsigned int _g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v40;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v41;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef unsigned int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint16_t _g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint8_t _g4_t_v49[44];
  typedef uint8_t _g4_t_v50[44];
  typedef uint8_t _g4_t_v51[72];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (2u + sizeof(_g4_t_v34)) > _g4_s0 ? (2u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v35)) > _g4_s1 ? (8u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v36)) > _g4_s2 ? (8u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v37)) > _g4_s3 ? (8u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v38)) > _g4_s4 ? (8u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v39)) > _g4_s5 ? (8u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v40)) > _g4_s6 ? (12u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v41)) > _g4_s7 ? (12u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v42)) > _g4_s8 ? (12u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v43)) > _g4_s9 ? (16u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v44)) > _g4_s10 ? (16u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v45)) > _g4_s11 ? (16u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v46)) > _g4_s12 ? (20u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v47)) > _g4_s13 ? (28u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v48)) > _g4_s14 ? (28u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v49)) > _g4_s15 ? (44u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v50)) > _g4_s16 ? (88u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v51)) > _g4_s17 ? (132u + sizeof(_g4_t_v51)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 2u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 20u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 88u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 132u);

  v3 = a2 - a1;
  if ( a2 - a1 <= 747 )
    return;
  if ( a3 == 0 )
  {
    v35 = a2;
    goto LABEL_41;
  }
  v46 = (int)(uintptr_t)(a2);
  v4 = (int)(uintptr_t)(a2);
  while ( 2 )
  {
    v5 = *((uint16_t *)a1 + 13);
    v6 = (uint32_t *)((char *)a1 + 44 * ((-1171354717 * (v3 >> 2)) >> 1));
    --a3;
    v40 = (glitch::scene::STextureAtlasArray::Self *)(v4 - 44);
    v7 = *((uint16_t *)v6 + 13);
    v8 = v5 < v7;
    if ( v5 == v7 )
    {
      v24 = (*((uint32_t *)a1 + 1) - *(uint32_t *)a1) >> 3;
      v36 = (v6[1] - *v6) >> 3;
      v8 = v24 > v36;
      if ( v24 == v36 )
        v8 = ((*(uint32_t *)(*(uint32_t *)(**(uint32_t **)a1 + 16) + 36) >> 6) & 0x3Fu) < ((*(uint32_t *)(*(uint32_t *)(*(uint32_t *)*v6 + 16)
                                                                                                + 36) >> 6)
                                                                                   & 0x3Fu);
    }
    if ( v8 )
    {
      v47 = *(uint16_t *)(v46 - 18);
      v9 = v7 < v47;
      if ( v7 == v47 )
      {
        v25 = (v6[1] - *v6) >> 3;
        v37 = (*(uint32_t *)(v46 - 40) - *(uint32_t *)(v46 - 44)) >> 3;
        v9 = v25 > v37;
        if ( v25 == v37 )
          v9 = ((*(uint32_t *)(*(uint32_t *)(*(uint32_t *)*v6 + 16) + 36) >> 6) & 0x3Fu) < ((*(uint32_t *)(*(uint32_t *)(**(uint32_t **)(v46 - 44) + 16)
                                                                                                 + 36) >> 6)
                                                                                    & 0x3Fu);
      }
      if ( !v9 )
      {
        v10 = v5 < v47;
        if ( v5 == v47 )
        {
          v39 = (*((uint32_t *)a1 + 1) - *(uint32_t *)a1) >> 3;
          v26 = *(uint32_t *)(v46 - 44);
          v27 = (*(uint32_t *)(v46 - 40) - v26) >> 3;
          v10 = v39 > v27;
          if ( v39 == v27 )
            v10 = ((*(uint32_t *)(*(uint32_t *)(**(uint32_t **)a1 + 16) + 36) >> 6) & 0x3Fu) < ((*(uint32_t *)(*(uint32_t *)(*(uint32_t *)v26 + 16) + 36) >> 6)
                                                                                        & 0x3Fu);
        }
        if ( !v10 )
          goto LABEL_10;
        goto LABEL_29;
      }
LABEL_32:
      glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v51, a1);
      glitch::scene::STextureAtlasArray::opAssign(a1, (const glitch::scene::STextureAtlasArray::Self *)v6);
      glitch::scene::STextureAtlasArray::opAssign(
        (glitch::scene::STextureAtlasArray::Self *)v6,
        (const glitch::scene::STextureAtlasArray::Self *)v51);
      glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v51);
      v5 = *((uint16_t *)a1 + 13);
      goto LABEL_10;
    }
    v34 = *(uint16_t *)(v46 - 18);
    v22 = v5 < v34;
    if ( v5 == v34 )
    {
      v38 = (*((uint32_t *)a1 + 1) - *(uint32_t *)a1) >> 3;
      v48 = *(uint32_t *)(v46 - 44);
      v44 = (*(uint32_t *)(v46 - 40) - v48) >> 3;
      v22 = v38 > v44;
      if ( v38 == v44 )
        v22 = ((*(uint32_t *)(*(uint32_t *)(**(uint32_t **)a1 + 16) + 36) >> 6) & 0x3Fu) < ((*(uint32_t *)(*(uint32_t *)(*(uint32_t *)v48 + 16)
                                                                                                 + 36) >> 6)
                                                                                    & 0x3Fu);
    }
    if ( !v22 )
    {
      v23 = v7 < v34;
      if ( v7 == v34 )
      {
        v31 = (v6[1] - *v6) >> 3;
        v32 = *(uint32_t *)(v46 - 44);
        v33 = (*(uint32_t *)(v46 - 40) - v32) >> 3;
        v23 = v31 > v33;
        if ( v31 == v33 )
          v23 = ((*(uint32_t *)(*(uint32_t *)(*(uint32_t *)*v6 + 16) + 36) >> 6) & 0x3Fu) < ((*(uint32_t *)(*(uint32_t *)(*(uint32_t *)v32 + 16)
                                                                                                  + 36) >> 6)
                                                                                     & 0x3Fu);
      }
      if ( !v23 )
        goto LABEL_32;
LABEL_29:
      glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v51, a1);
      glitch::scene::STextureAtlasArray::opAssign(a1, v40);
      glitch::scene::STextureAtlasArray::opAssign(v40, (const glitch::scene::STextureAtlasArray::Self *)v51);
      glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v51);
      v5 = *((uint16_t *)a1 + 13);
    }
LABEL_10:
    v11 = (char *)a1 + 44;
    v41 = (glitch::scene::STextureAtlasArray::Self *)v46;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v12 = *((uint16_t *)v11 + 13);
          v35 = (glitch::scene::STextureAtlasArray::Self *)v11;
          v13 = v5 > v12;
          if ( v5 != v12 )
            break;
          v14 = *(uint32_t *)v11;
          v15 = (*((uint32_t *)v11 + 1) - *(uint32_t *)v11) >> 3;
          v16 = (*((uint32_t *)a1 + 1) - *(uint32_t *)a1) >> 3;
          v13 = v15 > v16;
          if ( v15 != v16 )
            break;
          v11 += 44;
          if ( ((*(uint32_t *)(*(uint32_t *)(*(uint32_t *)v14 + 16) + 36) >> 6) & 0x3Fu) >= ((*(uint32_t *)(*(uint32_t *)(**(uint32_t **)a1 + 16)
                                                                                                  + 36) >> 6)
                                                                                     & 0x3Fu) )
            goto LABEL_15;
        }
        v11 += 44;
      }
      while ( v13 );
LABEL_15:
      v17 = (char *)v41 - 44;
      do
      {
        while ( 1 )
        {
          v18 = *((uint16_t *)v17 + 13);
          v41 = (glitch::scene::STextureAtlasArray::Self *)v17;
          v19 = v5 < v18;
          if ( v5 == v18 )
          {
            v43 = *(uint32_t *)v17;
            v20 = (*((uint32_t *)a1 + 1) - *(uint32_t *)a1) >> 3;
            v21 = (*((uint32_t *)v17 + 1) - *(uint32_t *)v17) >> 3;
            v19 = v20 > v21;
            if ( v20 == v21 )
              break;
          }
          v17 -= 44;
          if ( !v19 )
            goto LABEL_20;
        }
        v17 -= 44;
      }
      while ( ((*(uint32_t *)(*(uint32_t *)(**(uint32_t **)a1 + 16) + 36) >> 6) & 0x3Fu) < ((*(uint32_t *)(*(uint32_t *)(*(uint32_t *)v43 + 16)
                                                                                                 + 36) >> 6)
                                                                                    & 0x3Fu) );
LABEL_20:
      if ( v41 <= v35 )
        break;
      glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v51, v35);
      glitch::scene::STextureAtlasArray::opAssign(v35, v41);
      glitch::scene::STextureAtlasArray::opAssign(v41, (const glitch::scene::STextureAtlasArray::Self *)v51);
      glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v51);
      v11 = (char *)v35 + 44;
      v5 = *((uint16_t *)a1 + 13);
    }
    g4_std::introsort_loop_gnu_cxx_normal_iterator_bd415a(
      v35,
      v46,
      a3);
    v3 = v35 - a1;
    if ( v35 - a1 > 747 )
    {
      if ( a3 != 0 )
      {
        v46 = (int)(uintptr_t)(v35);
        v4 = (int)(uintptr_t)(v35);
        continue;
      }
LABEL_41:
      v45 = -1171354717 * (v3 >> 2);
      v28 = (v45 - 2) >> 1;
      v42 = (glitch::scene::STextureAtlasArray::Self *)((char *)a1 + 44 * v28);
      for ( i = v42; ; i = v42 )
      {
        glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v51, i);
        glitch::scene::STextureAtlasArray::Construct(
          (glitch::scene::STextureAtlasArray::Self *)v49,
          (const glitch::scene::STextureAtlasArray::Self *)v51);
        sub_EF02F0((int)(uintptr_t)(a1), v28, v45, (const glitch::scene::STextureAtlasArray::Self *)v49);
        glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v49);
        v42 = (glitch::scene::STextureAtlasArray::Self *)((char *)v42 - 44);
        if ( v28 == 0 )
          break;
        --v28;
        glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v51);
      }
      glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v51);
      v30 = v35;
      do
      {
        v30 = (const glitch::scene::STextureAtlasArray::Self *)((char *)v30 - 44);
        glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v51, v30);
        glitch::scene::STextureAtlasArray::opAssign(v30, a1);
        glitch::scene::STextureAtlasArray::Construct(
          (glitch::scene::STextureAtlasArray::Self *)v50,
          (const glitch::scene::STextureAtlasArray::Self *)v51);
        sub_EF02F0((int)(uintptr_t)(a1), 0, -1171354717 * ((v30 - a1) >> 2), (const glitch::scene::STextureAtlasArray::Self *)v50);
        glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v50);
        glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v51);
      }
      while ( v30 - a1 > 87 );
    }
    break;
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::introsort_loop_gnu_cxx_normal_iterator_8c9132  (binary VA: 0xf16cf0)
// Original: std::__introsort_loop<__gnu_cxx::__normal_iterator<glitch::scene::STextureAtlasArray *,std::vector<glitch::scene::STextureAtlasArray,glitch::core::SAllocator<glitch::scene::STextureAtlasArray,(glitch::memory::E_MEMORY_HINT)0>>>,int,glitch::scene::STextureAtlasArray::SSortFunctor>
// ----------------------------------------------------------------------------
void g4_std::introsort_loop_gnu_cxx_normal_iterator_8c9132(glitch::scene::STextureAtlasArray::Self *a1, glitch::scene::STextureAtlasArray::Self *a2, int a3)
{
  int v3;
  int v4;
  char v5;
  unsigned int *v6;
  unsigned int v7;
  char v8;
  glitch::scene::STextureAtlasArray::Self *v9;
  int *v10;
  unsigned int *v11;
  unsigned int v12;
  char v13; // si
  unsigned int v14;
  int *v15;
  unsigned int *v16;
  unsigned int *v17;
  unsigned int v18;
  char v19;
  unsigned int v20;
  int *v21;
  unsigned int *v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int *v25;
  uint8_t *v26;
  unsigned int v27;
  char v28;
  char v29;
  unsigned int v30;
  unsigned int v31;
  glitch::scene::STextureAtlasArray::Self *v32;
  int *v33;
  char v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int *v37;
  int *v38;
  int v39;
  const glitch::scene::STextureAtlasArray::Self *i;
  unsigned int v41;
  unsigned int v42;
  unsigned int *v43;
  int *v44;
  unsigned int v45;
  unsigned int v46;
  glitch::scene::STextureAtlasArray::Self *v47;
  int *v48;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v49;
  typedef unsigned int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef const glitch::scene::STextureAtlasArray::Self *_g4_t_v52;
  typedef unsigned int _g4_t_v53;
  typedef int *_g4_t_v54;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef unsigned int _g4_t_v57;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v58;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v59;
  typedef unsigned int _g4_t_v60;
  typedef int *_g4_t_v61;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v62;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v63;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v64;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v65;
  typedef unsigned int *_g4_t_v66;
  typedef unsigned int *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef glitch::scene::STextureAtlasArray::Self *_g4_t_v69;
  typedef uint8_t _g4_t_v70[44];
  typedef uint8_t _g4_t_v71[44];
  typedef uint8_t _g4_t_v72[72];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v49)) > _g4_s0 ? (0u + sizeof(_g4_t_v49)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v50)) > _g4_s1 ? (0u + sizeof(_g4_t_v50)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v51)) > _g4_s2 ? (0u + sizeof(_g4_t_v51)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v52)) > _g4_s3 ? (0u + sizeof(_g4_t_v52)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v53)) > _g4_s4 ? (4u + sizeof(_g4_t_v53)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v54)) > _g4_s5 ? (4u + sizeof(_g4_t_v54)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v55)) > _g4_s6 ? (4u + sizeof(_g4_t_v55)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v56)) > _g4_s7 ? (4u + sizeof(_g4_t_v56)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v57)) > _g4_s8 ? (8u + sizeof(_g4_t_v57)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v58)) > _g4_s9 ? (8u + sizeof(_g4_t_v58)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v59)) > _g4_s10 ? (12u + sizeof(_g4_t_v59)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v60)) > _g4_s11 ? (12u + sizeof(_g4_t_v60)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v61)) > _g4_s12 ? (16u + sizeof(_g4_t_v61)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v62)) > _g4_s13 ? (20u + sizeof(_g4_t_v62)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v63)) > _g4_s14 ? (20u + sizeof(_g4_t_v63)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v64)) > _g4_s15 ? (24u + sizeof(_g4_t_v64)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v65)) > _g4_s16 ? (24u + sizeof(_g4_t_v65)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v66)) > _g4_s17 ? (28u + sizeof(_g4_t_v66)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v67)) > _g4_s18 ? (32u + sizeof(_g4_t_v67)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v68)) > _g4_s19 ? (36u + sizeof(_g4_t_v68)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v69)) > _g4_s20 ? (40u + sizeof(_g4_t_v69)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v70)) > _g4_s21 ? (60u + sizeof(_g4_t_v70)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v71)) > _g4_s22 ? (104u + sizeof(_g4_t_v71)) : _g4_s22,
    _g4_s24 = (148u + sizeof(_g4_t_v72)) > _g4_s23 ? (148u + sizeof(_g4_t_v72)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 0u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 0u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 0u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 4u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 36u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 60u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 104u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 148u);

  v3 = (int)(uintptr_t)(a2);
  v4 = a2 - a1;
  if ( a2 - a1 <= 747 )
    return;
  if ( a3 == 0 )
  {
    v65 = a2;
    goto LABEL_71;
  }
  v68 = (int)(uintptr_t)(a2);
  while ( 2 )
  {
    v69 = (glitch::scene::STextureAtlasArray::Self *)(v3 - 44);
    v59 = (glitch::scene::STextureAtlasArray::Self *)((char *)a1 + 44 * ((-1171354717 * (v4 >> 2)) >> 1));
    --a3;
    v66 = *(unsigned int **)a1;
    v49 = *(glitch::scene::STextureAtlasArray::Self **)v59;
    v61 = *((int **)a1 + 1);
    v64 = *((glitch::scene::STextureAtlasArray::Self **)v59 + 1);
    v53 = ((int)(uintptr_t)(v61) - *(uint32_t *)a1) >> 3;
    v57 = ((int)(uintptr_t)(v64) - *(uint32_t *)v59) >> 3;
    v5 = v53 > v57;
    if ( v53 == v57 )
    {
      if ( v66 != (unsigned int *)v61 )
      {
        v23 = *v66;
        v24 = *(uint32_t *)v49;
        if ( *v66 != *(uint32_t *)v49 )
        {
LABEL_93:
          v5 = v23 < v24;
          goto LABEL_5;
        }
        v5 = *((uint8_t *)v66 + 4);
        if ( v5 != *((uint8_t *)v49 + 4) )
          goto LABEL_5;
        v25 = *(unsigned int **)a1;
        v26 = (uint8_t *)((char *)v49 + 12);
        while ( 1 )
        {
          v25 += 2;
          if ( v61 == (int *)v25 )
            break;
          v24 = *((uint32_t *)v26 - 1);
          v23 = *v25;
          if ( *v25 != v24 )
            goto LABEL_93;
          v26 += 8;
          v5 = *((uint8_t *)v25 + 4);
          if ( v5 != *(v26 - 8) )
            goto LABEL_5;
        }
      }
LABEL_47:
      v67 = *(unsigned int **)(v68 - 44);
      v27 = (*(uint32_t *)(v68 - 40) - (int)(uintptr_t)(v67)) >> 3;
      v28 = v53 > v27;
      if ( v53 == v27 )
      {
        if ( v66 == (unsigned int *)v61 )
          goto LABEL_49;
        v35 = *v66;
        v36 = *v67;
        if ( *v66 == *v67 )
        {
          v28 = *((uint8_t *)v66 + 4);
          if ( v28 == *((uint8_t *)v67 + 4) )
          {
            v37 = *(unsigned int **)a1;
            v38 = (int *)(v67 + 3);
            do
            {
              v37 += 2;
              if ( v61 == (int *)v37 )
                goto LABEL_49;
              v36 = *(v38 - 1);
              v35 = *v37;
              if ( *v37 != v36 )
                goto LABEL_94;
              v38 += 2;
              v28 = *((uint8_t *)v37 + 4);
            }
            while ( v28 == *((uint8_t *)v38 - 8) );
          }
        }
        else
        {
LABEL_94:
          v28 = v35 < v36;
        }
      }
      if ( v28 != 0 )
        goto LABEL_10;
LABEL_49:
      v29 = v57 > v27;
      if ( v57 == v27 )
      {
        if ( v49 == v64 )
          goto LABEL_8;
        v45 = *(uint32_t *)v49;
        v46 = *v67;
        if ( *(uint32_t *)v49 == *v67 )
        {
          v29 = *((uint8_t *)v49 + 4);
          if ( v29 == *((uint8_t *)v67 + 4) )
          {
            v47 = *(glitch::scene::STextureAtlasArray::Self **)v59;
            v48 = (int *)(v67 + 3);
            do
            {
              v47 = (glitch::scene::STextureAtlasArray::Self *)((char *)v47 + 8);
              if ( v64 == v47 )
                goto LABEL_8;
              v46 = *(v48 - 1);
              v45 = *(uint32_t *)v47;
              if ( *(uint32_t *)v47 != v46 )
                goto LABEL_96;
              v48 += 2;
              v29 = *((uint8_t *)v47 + 4);
            }
            while ( v29 == *((uint8_t *)v48 - 8) );
          }
        }
        else
        {
LABEL_96:
          v29 = v45 < v46;
        }
      }
      if ( v29 == 0 )
      {
LABEL_8:
        glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v72, a1);
        glitch::scene::STextureAtlasArray::opAssign(a1, v59);
        glitch::scene::STextureAtlasArray::opAssign(v59, (const glitch::scene::STextureAtlasArray::Self *)v72);
LABEL_9:
        glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v72);
        v66 = *(unsigned int **)a1;
        v61 = *((int **)a1 + 1);
        goto LABEL_10;
      }
LABEL_51:
      glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v72, a1);
      glitch::scene::STextureAtlasArray::opAssign(a1, v69);
      glitch::scene::STextureAtlasArray::opAssign(v69, (const glitch::scene::STextureAtlasArray::Self *)v72);
      goto LABEL_9;
    }
LABEL_5:
    if ( v5 == 0 )
      goto LABEL_47;
    v6 = *(unsigned int **)(v68 - 44);
    v7 = (*(uint32_t *)(v68 - 40) - (int)(uintptr_t)(v6)) >> 3;
    v8 = v57 > v7;
    v62 = (glitch::scene::STextureAtlasArray::Self *)v7;
    if ( v57 == v7 )
    {
      if ( v49 == v64 )
        goto LABEL_59;
      v30 = *v6;
      v31 = *(uint32_t *)v49;
      if ( *(uint32_t *)v49 == *v6 )
      {
        v8 = *((uint8_t *)v49 + 4);
        if ( v8 == *((uint8_t *)v6 + 4) )
        {
          v32 = *(glitch::scene::STextureAtlasArray::Self **)v59;
          v33 = (int *)(v6 + 3);
          do
          {
            v32 = (glitch::scene::STextureAtlasArray::Self *)((char *)v32 + 8);
            if ( v64 == v32 )
              goto LABEL_59;
            v30 = *(v33 - 1);
            v31 = *(uint32_t *)v32;
            if ( *(uint32_t *)v32 != v30 )
              goto LABEL_95;
            v33 += 2;
            v8 = *((uint8_t *)v32 + 4);
          }
          while ( v8 == *((uint8_t *)v33 - 8) );
        }
      }
      else
      {
LABEL_95:
        v8 = v30 > v31;
      }
    }
    if ( v8 != 0 )
      goto LABEL_8;
LABEL_59:
    v34 = v53 > (unsigned int)(uintptr_t)(v62);
    if ( (glitch::scene::STextureAtlasArray::Self *)v53 == v62 )
    {
      if ( v66 == (unsigned int *)v61 )
        goto LABEL_10;
      v41 = *v66;
      v42 = *v6;
      if ( *v66 == *v6 )
      {
        v34 = *((uint8_t *)v66 + 4);
        if ( v34 == *((uint8_t *)v6 + 4) )
        {
          v43 = *(unsigned int **)a1;
          v44 = (int *)(v6 + 3);
          do
          {
            v43 += 2;
            if ( v61 == (int *)v43 )
              goto LABEL_10;
            v42 = *(v44 - 1);
            v41 = *v43;
            if ( *v43 != v42 )
              goto LABEL_84;
            v44 += 2;
            v34 = *((uint8_t *)v43 + 4);
          }
          while ( v34 == *((uint8_t *)v44 - 8) );
        }
      }
      else
      {
LABEL_84:
        v34 = v41 < v42;
      }
    }
    if ( v34 != 0 )
      goto LABEL_51;
LABEL_10:
    v9 = (glitch::scene::STextureAtlasArray::Self *)((char *)a1 + 44);
    v63 = (glitch::scene::STextureAtlasArray::Self *)v68;
    v10 = v61;
    while ( 2 )
    {
      v58 = v9;
      v60 = ((char *)v10 - (char *)v66) >> 3;
      while ( 1 )
      {
        v65 = v58;
        v11 = *(unsigned int **)v58;
        v54 = *((int **)v58 + 1);
        v12 = ((int)(uintptr_t)(v54) - *(uint32_t *)v58) >> 3;
        v13 = v12 > v60;
        if ( v12 == v60 )
        {
          v13 = 0;
          if ( v11 == (unsigned int *)v54 )
            goto LABEL_12;
          v14 = *v11;
          v50 = *v66;
          if ( *v11 != *v66 )
          {
LABEL_34:
            v13 = v14 < v50;
            goto LABEL_12;
          }
          v13 = *((uint8_t *)v11 + 4);
          if ( v13 == *((uint8_t *)v66 + 4) )
            break;
        }
LABEL_12:
        v58 = (glitch::scene::STextureAtlasArray::Self *)((char *)v58 + 44);
        if ( v13 == 0 )
          goto LABEL_21;
      }
      v15 = (int *)(v66 + 3);
      v16 = *(unsigned int **)v58;
      while ( 1 )
      {
        v16 += 2;
        if ( v54 == (int *)v16 )
          break;
        v50 = *(v15 - 1);
        if ( *v16 != v50 )
        {
          v14 = *v16;
          goto LABEL_34;
        }
        v13 = *((uint8_t *)v16 + 4);
        v15 += 2;
        if ( v13 != *((uint8_t *)v15 - 8) )
          goto LABEL_12;
      }
LABEL_21:
      v55 = (glitch::scene::STextureAtlasArray::Self *)((char *)v63 - 44);
      while ( 2 )
      {
        v63 = v55;
        v17 = *(unsigned int **)v55;
        v18 = (*((uint32_t *)v55 + 1) - *(uint32_t *)v55) >> 3;
        v19 = v60 > v18;
        if ( v18 != v60 || (v19 = 0, v66 == (unsigned int *)v61) )
        {
LABEL_22:
          v55 = (glitch::scene::STextureAtlasArray::Self *)((char *)v55 - 44);
          if ( v19 == 0 )
            goto LABEL_31;
          continue;
        }
        break;
      }
      v20 = *v66;
      v51 = *v17;
      if ( *v66 != *v17 )
      {
LABEL_36:
        v19 = v20 < v51;
        goto LABEL_22;
      }
      v19 = *((uint8_t *)v66 + 4);
      if ( v19 != *((uint8_t *)v17 + 4) )
        goto LABEL_22;
      v21 = (int *)(v17 + 3);
      v22 = v66;
      while ( 1 )
      {
        v22 += 2;
        if ( v61 == (int *)v22 )
          break;
        v51 = *(v21 - 1);
        if ( *v22 != v51 )
        {
          v20 = *v22;
          goto LABEL_36;
        }
        v21 += 2;
        v19 = *((uint8_t *)v22 + 4);
        if ( v19 != *((uint8_t *)v21 - 8) )
          goto LABEL_22;
      }
LABEL_31:
      if ( v63 > v65 )
      {
        glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v72, v65);
        glitch::scene::STextureAtlasArray::opAssign(v65, v63);
        glitch::scene::STextureAtlasArray::opAssign(v63, (const glitch::scene::STextureAtlasArray::Self *)v72);
        glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v72);
        v9 = (glitch::scene::STextureAtlasArray::Self *)((char *)v65 + 44);
        v10 = *((int **)a1 + 1);
        v66 = *(unsigned int **)a1;
        v61 = v10;
        continue;
      }
      break;
    }
    g4_std::introsort_loop_gnu_cxx_normal_iterator_8c9132(
      v65,
      v68,
      a3);
    v4 = v65 - a1;
    if ( v65 - a1 > 747 )
    {
      if ( a3 != 0 )
      {
        v68 = (int)(uintptr_t)(v65);
        v3 = (int)(uintptr_t)(v65);
        continue;
      }
LABEL_71:
      v56 = -1171354717 * (v4 >> 2);
      v39 = (v56 - 2) >> 1;
      v52 = (glitch::scene::STextureAtlasArray::Self *)((char *)a1 + 44 * v39);
      for ( i = v52; ; i = v52 )
      {
        glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v72, i);
        glitch::scene::STextureAtlasArray::Construct(
          (glitch::scene::STextureAtlasArray::Self *)v70,
          (const glitch::scene::STextureAtlasArray::Self *)v72);
        sub_EF0560((int)(uintptr_t)(a1), v39, v56, (const glitch::scene::STextureAtlasArray::Self *)v70);
        glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v70);
        v52 = (const glitch::scene::STextureAtlasArray::Self *)((char *)v52 - 44);
        if ( v39 == 0 )
          break;
        --v39;
        glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v72);
      }
      glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v72);
      do
      {
        v65 = (glitch::scene::STextureAtlasArray::Self *)((char *)v65 - 44);
        glitch::scene::STextureAtlasArray::Construct((glitch::scene::STextureAtlasArray::Self *)v72, v65);
        glitch::scene::STextureAtlasArray::opAssign(v65, a1);
        glitch::scene::STextureAtlasArray::Construct(
          (glitch::scene::STextureAtlasArray::Self *)v71,
          (const glitch::scene::STextureAtlasArray::Self *)v72);
        sub_EF0560((int)(uintptr_t)(a1), 0, -1171354717 * ((v65 - a1) >> 2), (const glitch::scene::STextureAtlasArray::Self *)v71);
        glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v71);
        glitch::scene::STextureAtlasArray::Destroy((glitch::scene::STextureAtlasArray::Self *)v72);
      }
      while ( v65 - a1 > 87 );
    }
    break;
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::M_mutate  (binary VA: 0xf17a90)
// Original: std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>::_M_mutate
// ----------------------------------------------------------------------------
const wchar_t * g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::M_mutate(const wchar_t **self, size_t a2, unsigned int a3, unsigned int a4)
{
  wchar_t * v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  size_t n;
  int v9;
  unsigned int v10;
  unsigned int v11;
  uint32_t *v12;
  const wchar_t **v13;
  const wchar_t *v14;
  const wchar_t *result;
  const wchar_t *s2;
  wchar_t *s1;
  const wchar_t *v18;
  int v19;
  const wchar_t **v20;
  const wchar_t **v21;
  unsigned int v22;
  wchar_t *v23;

  v4 = (wchar_t *)(*self);
  v5 = *(*self - 3);
  v6 = *(*self - 2);
  v7 = v5 + a4 - a3;
  n = v5 - a2 - a3;
  if ( v7 > v6 || *(v4 - 1) > 0 )
  {
    if ( v7 > 0xFFFFFFE )
      sub_1900180("basic_string::_S_create");
    v22 = v7;
    if ( v7 > v6 )
    {
      v9 = 2 * v6;
      if ( v7 >= 2 * v6 )
        v9 = v7;
      v22 = v9;
    }
    v19 = 4 * v22 + 16;
    v10 = 4 * v22 + 32;
    if ( v10 > 0x1000 && v6 < v22 )
    {
      v11 = v22 + ((4096 - (v10 & 0xFFF)) >> 2);
      if ( v11 > 0xFFFFFFE )
        v11 = 268435454;
      v22 = v11;
      v19 = 4 * v11 + 16;
    }
    v12 = (uint32_t *)sub_4EBDC0(v19);
    v12[1] = v22;
    v12[2] = 0;
    v13 = self;
    v23 = (wchar_t *)(v12 + 3);
    if ( a2 != 0 )
    {
      if ( a2 == 1 )
      {
        v12[3] = **self;
      }
      else
      {
        wmemcpy(v23, *self, a2);
        v13 = self;
      }
    }
    if ( n != 0 )
    {
      v18 = &(*v13)[a2 + a3];
      if ( n == 1 )
      {
        v23[a2 + a4] = *v18;
      }
      else
      {
        v20 = v13;
        wmemcpy(&v23[a2 + a4], v18, n);
        v13 = v20;
      }
    }
    v14 = *v13;
    if ( *v13 - 3 != (const wchar_t *)(uintptr_t)(g4_empty_string_rep
)      && __sync_fetch_and_add((volatile int32_t *)v14 - 1, 0xFFFFFFFF) <= 0 )
    {
      v21 = v13;
      gll_operator_delete_arr((int)(uintptr_t)(v14 - 3));
      v13 = v21;
    }
    v4 = v23;
    *v13 = v23;
  }
  else if ( a3 != a4 && n != 0 )
  {
    s2 = &v4[a2 + a3];
    s1 = (wchar_t *)&v4[a2 + a4];
    if ( n == 1 )
      *s1 = *s2;
    else
      wmemmove(s1, s2, n);
    v4 = (wchar_t *)(*self);
  }
  result = v4 - 3;
  if ( v4 - 3 != (const wchar_t *)(uintptr_t)(g4_empty_string_rep) )
  {
    *((uint32_t *)v4 - 1) = 0;
    *((uint32_t *)v4 - 3) = v7;
    v4[v7] = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign  (binary VA: 0xf17d20)
// Original: std::basic_string<wchar_t,std::char_traits<wchar_t>,glitch::core::SAllocator<wchar_t,(glitch::memory::E_MEMORY_HINT)0>>::operator=
// ----------------------------------------------------------------------------
const wchar_t ** g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::opAssign(const wchar_t **self, wchar_t *s)
{
  size_t n;
  wchar_t *v3;
  unsigned int v4;
  unsigned int v6;
  wchar_t *v7;

  n = wcslen(s);
  v3 = (wchar_t *)*self;
  v4 = *(*self - 3);
  if ( n > 0xFFFFFFE )
    sub_1900180("basic_string::assign");
  if ( s >= v3 && s <= &v3[v4] && *(v3 - 1) <= 0 )
  {
    v6 = s - v3;
    if ( n <= v6 )
    {
      if ( n != 1 )
      {
        wmemcpy(v3, s, n);
        v3 = (wchar_t *)*self;
        goto LABEL_11;
      }
    }
    else
    {
      if ( v6 == 0 )
        goto LABEL_11;
      if ( n != 1 )
      {
        wmemmove(v3, s, n);
        v3 = (wchar_t *)*self;
        goto LABEL_11;
      }
    }
    *v3 = *s;
    v3 = (wchar_t *)*self;
LABEL_11:
    if ( v3 - 3 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
    {
      *(v3 - 1) = 0;
      *(v3 - 3) = n;
      v3[n] = 0;
    }
    return self;
  }
  g4_std::basic_string_wchar_t_char_traits_wcha_cc728b::M_mutate(
    self,
    0,
    v4,
    n);
  if ( n != 0 )
  {
    v7 = (wchar_t *)*self;
    if ( n == 1 )
      *v7 = *s;
    else
      wmemcpy(v7, s, n);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_list_pair_intrusive_ptr_440e67::M_fill_insert  (binary VA: 0xf18630)
// Original: std::vector<std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture>,glitch::core::rect<int>>>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_list_pair_intrusive_ptr_440e67::M_fill_insert(int a1, std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *a2, unsigned int a3, uint32_t *a4)
{
  char *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  unsigned int v8;
  char *v9;
  const std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *v10;
  bool v11;
  std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *v12;
  uint32_t *v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  bool v17;
  unsigned int v18;
  size_t v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *v25;
  typedef std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *_g4_t_v26;
  typedef std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *_g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef char *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *_g4_t_v39;
  typedef uint32_t _g4_t_v40[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v27)) > _g4_s1 ? (0u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v28)) > _g4_s2 ? (24u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v29)) > _g4_s3 ? (24u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v30)) > _g4_s4 ? (24u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v31)) > _g4_s5 ? (28u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v32)) > _g4_s6 ? (32u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v33)) > _g4_s7 ? (36u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v34)) > _g4_s8 ? (40u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v35)) > _g4_s9 ? (40u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v36)) > _g4_s10 ? (44u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v37)) > _g4_s11 ? (44u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v38)) > _g4_s12 ? (44u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v39)) > _g4_s13 ? (44u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v40)) > _g4_s14 ? (48u + sizeof(_g4_t_v40)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);

  if ( a3 == 0 )
    return;
  v4 = *(char **)(a1 + 4);
  if ( a3 <= (*(uint32_t *)(a1 + 8) - (int)(uintptr_t)(v4)) >> 3 )
  {
    v40[0] = (uint32_t)(uintptr_t)(v40);
    v40[1] = (uint32_t)(uintptr_t)(v40);
    if ( a4 != (uint32_t *)*a4 )
    {
      v5 = (uint32_t *)*a4;
      do
      {
        v6 = (uint32_t *)opNew(0x1Cu);
        if ( v6 != (uint32_t *)-8 )
        {
          v7 = v5[2];
          v6[2] = v7;
          if ( v7 != 0 )
          {
            v28 = v6;
            sub_8B1B00((volatile int32_t *)(v7 + 4));
            v6 = v28;
          }
          v6[3] = v5[3];
          v6[4] = v5[4];
          v6[5] = v5[5];
          v6[6] = v5[6];
        }
        sub_1901920(v6, v40);
        v5 = (uint32_t *)*v5;
      }
      while ( a4 != v5 );
      v4 = *(char **)(a1 + 4);
    }
    v8 = (v4 - (char *)a2) >> 3;
    if ( a3 >= v8 )
    {
      v38 = a3 - v8;
      sub_EA4F80(v4, a3 - v8, v40);
      v24 = (uint32_t *)(*(uint32_t *)(a1 + 4) + 8 * v38);
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v24);
      sub_EA5030(a2, v4, v24);
      *(uint32_t *)(a1 + 4) += 8 * ((v4 - (char *)a2) >> 3);
      if ( v4 != (char *)a2 )
      {
        v39 = (std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *)v4;
        v25 = a2;
        do
        {
          v27 = v25;
          v25 = (std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *)((char *)v25 + 8);
          g4_std::list_pair_intrusive_ptr_video_b7865a::opAssign(
            v27,
            (const std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *)v40);
        }
        while ( v39 != v25 );
      }
    }
    else
    {
      v34 = 8 * a3;
      sub_EA5030(&v4[-8 * a3], v4, v4);
      *(uint32_t *)(a1 + 4) += 8 * a3;
      v36 = (&v4[-8 * a3] - (char *)a2) >> 3;
      if ( v36 > 0 )
      {
        v9 = v4;
        v10 = (const std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *)&v4[-8 * a3];
        do
        {
          v10 = (const std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *)((char *)v10 - 8);
          v29 = v9 - 8;
          g4_std::list_pair_intrusive_ptr_video_b7865a::opAssign(
            (std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *)(v9 - 8),
            v10);
          v11 = v36-- == 1;
          v9 = v29;
        }
        while ( !v11 );
      }
      if ( (std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *)((char *)a2 + v34) != a2 )
      {
        v12 = a2;
        do
        {
          v26 = v12;
          v12 = (std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *)((char *)v12 + 8);
          g4_std::list_pair_intrusive_ptr_video_b7865a::opAssign(
            v26,
            (const std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *)v40);
        }
        while ( (std::list<std::pair<boost::intrusive_ptr<glitch::video::ITexture::Self>, glitch::core::rect<int>>> *)((char *)a2 + v34) != v12 );
      }
    }
    v13 = (uint32_t *)v40[0];
    if ( (uint32_t *)v40[0] != v40 )
    {
      while ( 1 )
      {
        v30 = (uint32_t *)*v13;
        sub_5ED480(v13 + 2);
        opDelete(v13);
        if ( v30 == v40 )
          break;
        v13 = v30;
      }
    }
    return;
  }
  v14 = (int)(uintptr_t)(&v4[-*(uint32_t *)a1]) >> 3;
  if ( a3 > 0x1FFFFFFF - v14 )
    sub_1900180("vector::_M_fill_insert");
  v15 = a3;
  if ( v14 >= a3 )
    v15 = v14;
  v16 = ((int)(uintptr_t)(a2) - *(uint32_t *)a1) >> 3;
  v17 = __CFADD__(v15, v14);
  v18 = v15 + v14;
  if ( v17 || v18 > 0x1FFFFFFF )
  {
    v31 = -2;
    v19 = 0xFFFFFFF8;
  }
  else
  {
    if ( v18 == 0 )
    {
      v32 = nullptr;
      v31 = 0;
      v20 = nullptr;
      goto LABEL_29;
    }
    v31 = 2 * v18;
    v19 = 8 * v18;
  }
  v32 = (uint32_t *)opNew(v19);
  v20 = v32;
LABEL_29:
  sub_EA4F80(&v20[2 * v16], a3, a4);
  v21 = (uint32_t *)(uintptr_t)(sub_EA5030(*(uint32_t **)a1, a2, v32));
  v33 = (uint32_t *)(uintptr_t)(sub_EA5030(a2, *(uint32_t **)(a1 + 4), &v21[2 * a3]));
  v35 = *(uint32_t **)(a1 + 4);
  v37 = *(uint32_t **)a1;
  if ( v35 != *(uint32_t **)a1 )
  {
    do
    {
      v22 = (uint32_t *)*v37;
      if ( v37 != (uint32_t *)*v37 )
      {
        while ( 1 )
        {
          v23 = (uint32_t *)*v22;
          sub_5ED480(v22 + 2);
          opDelete(v22);
          if ( v37 == v23 )
            break;
          v22 = v23;
        }
      }
      v37 += 2;
    }
    while ( v35 != v37 );
    v37 = *(uint32_t **)a1;
  }
  if ( v37 != nullptr )
    opDelete(v37);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v32);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v33);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&v32[v31]);
}

// ----------------------------------------------------------------------------
// Function: sub_F1A510  (binary VA: 0xf1a510)
// Original: sub_F1A510
// ----------------------------------------------------------------------------
uint8_t * sub_F1A510()
{
  uint8_t *result;

  sub_1900D70(&unk_20E1A3C);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20E1A3C, &unk_20D1280);
  dword_20E1A40 = 1056964608;
  dword_20E1A44 = 1056964608;
  dword_20E1A48 = 1056964608;
  glitch::scene::SProactiveMemoryAllocator::NULL_BUFFER = 0;
  *(uintptr_t *)(unk_20E18A4) = (uintptr_t)(0);
  glf::SpinLock::Construct((glf::SpinLock::Self *)&glitch::scene::CMeshBuffer::ResFileSharedContentLock);
  __cxa_atexit(
    (void (*)(void *))glf::SpinLock::Destroy,
    &glitch::scene::CMeshBuffer::ResFileSharedContentLock,
    &unk_20D1280);
  if ( g4_guard_86f6eade6a[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_86f6eade6a) = (uintptr_t)(1);
    glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::scene::CPVSDatabase>,unsigned short,false,glitch::core::detail::sidedcollection::SEmptyProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid = 0;
    __cxa_atexit(
      (void (*)(void *))boost::intrusive_ptr_scene_CPVSDatabase_019302::Destroy,
      &glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::scene::CPVSDatabase>,unsigned short,false,glitch::core::detail::sidedcollection::SEmptyProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid,
      &unk_20D1280);
  }

  dword_20E1A30 = 2139095040;
  dword_20E1A34 = 2139095040;
  dword_20E1A38 = 2139095040;
  *(uintptr_t *)(unk_20E1894) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20E1898) = (uintptr_t)(2139095040);
  glitch::scene::CPVSEvaluator::USE_INVERT_MOTION = 0;
  *(uintptr_t *)(unk_20E1884) = (uintptr_t)(0);
  *(uintptr_t *)(unk_20E1888) = (uintptr_t)(0);
  glitch::scene::CPVSEvaluator::USE_NEAREST_VIEWCELL = 0;
  dword_20E1454 = 0;
  *(uintptr_t *)(unk_20E145C) = (uintptr_t)(&dword_20E1454);
  *(uintptr_t *)(unk_20E1460) = (uintptr_t)(&dword_20E1454);
  *(uintptr_t *)(unk_20E1458) = (uintptr_t)(0);
  unk_20E1464 = 0;
  __cxa_atexit(
    (void (*)(void *))g4_std::map_basic_string_char_char_t_0e7f8a::Destroy,
    &glitch::io::CGlfFileSystem::ObfuscationMap,
    &unk_20D1280);
  glf::ReadWriteSpinLock::ReadWriteSpinLock((glf::ReadWriteSpinLock::Self *)&glitch::io::CGlfFileSystem::RWLock);
  __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &glitch::io::CGlfFileSystem::RWLock, &unk_20D1280);
  glitch::io::CGlfReadFile::ReadDescPool[0] = 0;
  glitch::io::CGlfReadFile::ReadDescPool[1] = 0;
  glitch::io::CGlfReadFile::ReadDescPool[2] = 0;
  glitch::io::CGlfReadFile::ReadDescPool[3] = 24;
  glitch::io::CGlfReadFile::ReadDescPool[4] = 32;
  glitch::io::CGlfReadFile::ReadDescPool[5] = 32;
  glitch::io::CGlfReadFile::ReadDescPool[6] = 0;
  glitch::io::CGlfReadFile::ReadDescPool[7] = 0;
  __cxa_atexit(
    (void (*)(void *))boost::object_pool_io_CGlfReadFile_SAsyncRe_0c0e94::Destroy,
    glitch::io::CGlfReadFile::ReadDescPool,
    &unk_20D1280);
  glf::Mutex::Construct((pthread_mutex_t **)&glitch::io::CGlfReadFile::PoolMutex, 0);
  __cxa_atexit((void (*)(void *))glf::Mutex::Destroy, &glitch::io::CGlfReadFile::PoolMutex, &unk_20D1280);
  if ( g4_guard_a9fc145225[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_a9fc145225) = (uintptr_t)(1);
    glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::IShader::Self>,unsigned short,false,glitch::video::detail::shadermanager::SShaderProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid = 0;
    __cxa_atexit(
      (void (*)(void *))boost::intrusive_ptr_video_IShader_d75d29::Destroy,
      &glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::IShader::Self>,unsigned short,false,glitch::video::detail::shadermanager::SShaderProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid,
      &unk_20D1280);
  }
  if ( g4_guard_0fd48228b4[0] == 0 )
  {
    g4_guard_0fd48228b4[0] = 1;
    glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture::Self>,unsigned short,false,glitch::video::detail::texturemanager::STextureProperties,glitch::core::detail::sidedcollection::SValueTraits,2>::Invalid = 0;
    __cxa_atexit(
      (void (*)(void *))((int (*)(int *))sub_5ED480),
      &glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture::Self>,unsigned short,false,glitch::video::detail::texturemanager::STextureProperties,glitch::core::detail::sidedcollection::SValueTraits,2>::Invalid,
      &unk_20D1280);
  }
  if ( g4_guard_ce4de3d33d[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_ce4de3d33d) = (uintptr_t)(1);
    glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::CMaterialRenderer::Self>,unsigned short,false,glitch::video::detail::materialrenderermanager::SProperties::Self,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid = 0;
    __cxa_atexit(
      (void (*)(void *))sub_655A30,
      &glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::CMaterialRenderer::Self>,unsigned short,false,glitch::video::detail::materialrenderermanager::SProperties::Self,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid,
      &unk_20D1280);
  }
  if ( g4_guard_c8dd31fc0a[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_c8dd31fc0a) = (uintptr_t)(1);
    glitch::video::SShaderParameterDef::Construct((glitch::video::SShaderParameterDef::Self *)&glitch::core::detail::SIDedCollection<glitch::video::SShaderParameterDef::Self,unsigned short,false,glitch::video::detail::globalmaterialparametermanager::SPropeties::Self,glitch::video::detail::globalmaterialparametermanager::SValueTraits,1>::Invalid);
    __cxa_atexit(
      (void (*)(void *))glitch::video::SShaderParameterDef::Destroy,
      &glitch::core::detail::SIDedCollection<glitch::video::SShaderParameterDef::Self,unsigned short,false,glitch::video::detail::globalmaterialparametermanager::SPropeties::Self,glitch::video::detail::globalmaterialparametermanager::SValueTraits,1>::Invalid,
      &unk_20D1280);
  }
  if ( g4_guard_53891f91ef[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_53891f91ef) = (uintptr_t)(1);
    glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture::Self>,unsigned short,false,glitch::video::detail::SLookupTableProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid = 0;
    __cxa_atexit(
      (void (*)(void *))((int (*)(int *))sub_5ED480),
      &glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::ITexture::Self>,unsigned short,false,glitch::video::detail::SLookupTableProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid,
      &unk_20D1280);
  }
  if ( g4_guard_9708045841[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_9708045841) = (uintptr_t)(1);
    glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::IShaderCode::Self>,unsigned short,false,glitch::core::detail::sidedcollection::SEmptyProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid = 0;
    __cxa_atexit(
      (void (*)(void *))boost::intrusive_ptr_video_IShaderCode_91f04c::Destroy,
      &glitch::core::detail::SIDedCollection<boost::intrusive_ptr<glitch::video::IShaderCode::Self>,unsigned short,false,glitch::core::detail::sidedcollection::SEmptyProperties,glitch::core::detail::sidedcollection::SValueTraits,1>::Invalid,
      &unk_20D1280);
  }
  result = (uint8_t *)(g4_guard_4338917c06);
  if ( g4_guard_4338917c06[0] == 0 )
  {
    g4_guard_4338917c06[0] = 1;
    boost::detail::sp_typeid_<boost::checked_array_deleter<char const>>::ti_ = (void *)(
      "static char const* boost::detail::sp_t"
      "ypeid_<T>::name() [with T = boost::che"
      "cked_array_deleter<char const>]");
    return (uint8_t *)(&boost::detail::sp_typeid_<boost::checked_array_deleter<char const>>::ti_);
  }
  return result;
}


// ============================================================================
// Address:   0xf1aef0 (size: 718 bytes)
// Symbol:    sub_F1AEF0
// Demangled: sub_F1AEF0
// ============================================================================
int (*sub_F1AEF0(int a1, int a2))(int, int, int16_t, int, int)
{
  int v2;
  uint16_t v3;
  int (*result)(int, int, int16_t, int, int);

  v2 = *(uint16_t *)(a1 + 10);
  v3 = *(uint16_t *)(a1 + 12);
  if ( a2 != 0 )
  {
    switch ( v3 )
    {
      case 1u:
        switch ( v2 )
        {
          case 0:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1CAD0);
            break;
          case 1:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1CBD0);
            break;
          case 2:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1CD20);
            break;
          case 3:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1CE20);
            break;
          case 4:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1CF70);
            break;
          case 5:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1D060);
            break;
          case 6:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1D1C0);
            break;
          default:
            result = nullptr;
            break;
        }
        break;
      case 2u:
        switch ( v2 )
        {
          case 0:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1D2B0);
            break;
          case 1:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1D3D0);
            break;
          case 2:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1D580);
            break;
          case 3:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1D6A0);
            break;
          case 4:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1D850);
            break;
          case 5:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1D960);
            break;
          case 6:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1DB20);
            break;
          default:
            result = nullptr;
            break;
        }
        break;
      case 3u:
        switch ( v2 )
        {
          case 0:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1DC30);
            break;
          case 1:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1DD90);
            break;
          case 2:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1DFA0);
            break;
          case 3:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1E0E0);
            break;
          case 4:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1E330);
            break;
          case 5:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1E460);
            break;
          case 6:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1E6D0);
            break;
          default:
            result = nullptr;
            break;
        }
        break;
      case 4u:
        switch ( v2 )
        {
          case 0:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1E800);
            break;
          case 1:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1E980);
            break;
          case 2:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1EBF0);
            break;
          case 3:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1ED70);
            break;
          case 4:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1EFE0);
            break;
          case 5:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1F140);
            break;
          case 6:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1F3D0);
            break;
          default:
            result = nullptr;
            break;
        }
        break;
      default:
        return nullptr;
    }
  }
  else
  {
    switch ( v3 )
    {
      case 1u:
        switch ( v2 )
        {
          case 0:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1F520);
            break;
          case 1:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1F590);
            break;
          case 2:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1F650);
            break;
          case 3:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1F6C0);
            break;
          case 4:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1F780);
            break;
          case 5:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1F7E0);
            break;
          case 6:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1F8B0);
            break;
          default:
            result = nullptr;
            break;
        }
        break;
      case 2u:
        switch ( v2 )
        {
          case 0:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1F900);
            break;
          case 1:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1F9A0);
            break;
          case 2:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1FAC0);
            break;
          case 3:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1FB60);
            break;
          case 4:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1FC80);
            break;
          case 5:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1FCF0);
            break;
          case 6:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1FE00);
            break;
          default:
            result = nullptr;
            break;
        }
        break;
      case 3u:
        switch ( v2 )
        {
          case 0:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1FE70);
            break;
          case 1:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F1FF30);
            break;
          case 2:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F20090);
            break;
          case 3:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F20150);
            break;
          case 4:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F202B0);
            break;
          case 5:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F20340);
            break;
          case 6:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F204C0);
            break;
          default:
            result = nullptr;
            break;
        }
        break;
      case 4u:
        switch ( v2 )
        {
          case 0:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F20540);
            break;
          case 1:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F20610);
            break;
          case 2:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F207C0);
            break;
          case 3:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F20890);
            break;
          case 4:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F20A40);
            break;
          case 5:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F20AF0);
            break;
          case 6:
            result = (int (*)(int, int, int16_t, int, int))(uintptr_t)(sub_F20CC0);
            break;
          default:
            result = nullptr;
            break;
        }
        break;
      default:
        return nullptr;
    }
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: sub_F1CAD0  (binary VA: 0xf1cad0)
// Original: sub_F1CAD0
// ----------------------------------------------------------------------------
float * sub_F1CAD0(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  float v7; // xmm4_4
  int v8;
  int v9;
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4

  v7 = (float)*(char *)(a1 + a3 * *a4);
  *a5 = v7;
  v8 = *(char *)(a1 + a3 * a4[1]);
  a5[3] = (float)v8;
  v9 = *(char *)(a1 + a4[2] * a3);
  a5[6] = (float)v9;
  v10 = (float)(a2[1] * a5[1]) + a2[4];
  v11 = (float)(a2[2] * a5[2]) + a2[5];
  *a5 = (float)(v7 * *a2) + a2[3];
  a5[1] = v10;
  a5[2] = v11;
  v12 = (float)(a2[1] * a5[4]) + a2[4];
  v13 = (float)(a2[2] * a5[5]) + a2[5];
  a5[3] = (float)((float)v8 * *a2) + a2[3];
  a5[4] = v12;
  a5[5] = v13;
  v14 = (float)(a2[1] * a5[7]) + a2[4];
  v15 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)((float)v9 * *a2) + a2[3];
  a5[7] = v14;
  a5[8] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1CBD0  (binary VA: 0xf1cbd0)
// Original: sub_F1CBD0
// ----------------------------------------------------------------------------
float * sub_F1CBD0(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm2_4
  float v15; // xmm1_4

  v7 = (float)((float)0 * 65536.0) + (float)*(uint8_t *)(a1 + a3 * *a4);
  *a5 = v7;
  v8 = (float)((float)0 * 65536.0) + (float)*(uint8_t *)(a1 + a3 * a4[1]);
  a5[3] = v8;
  v9 = (float)((float)0 * 65536.0) + (float)*(uint8_t *)(a1 + a4[2] * a3);
  a5[6] = v9;
  v10 = (float)(a2[1] * a5[1]) + a2[4];
  v11 = (float)(a2[2] * a5[2]) + a2[5];
  *a5 = (float)(v7 * *a2) + a2[3];
  a5[1] = v10;
  a5[2] = v11;
  v12 = (float)(a2[1] * a5[4]) + a2[4];
  v13 = (float)(a2[2] * a5[5]) + a2[5];
  a5[3] = (float)(v8 * *a2) + a2[3];
  a5[4] = v12;
  a5[5] = v13;
  v14 = (float)(a2[1] * a5[7]) + a2[4];
  v15 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)(v9 * *a2) + a2[3];
  a5[7] = v14;
  a5[8] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1CD20  (binary VA: 0xf1cd20)
// Original: sub_F1CD20
// ----------------------------------------------------------------------------
float * sub_F1CD20(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  float v7; // xmm4_4
  int v8;
  int v9;
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4

  v7 = (float)*(int16_t *)(a1 + a3 * *a4);
  *a5 = v7;
  v8 = *(int16_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)v8;
  v9 = *(int16_t *)(a1 + a4[2] * a3);
  a5[6] = (float)v9;
  v10 = (float)(a2[1] * a5[1]) + a2[4];
  v11 = (float)(a2[2] * a5[2]) + a2[5];
  *a5 = (float)(v7 * *a2) + a2[3];
  a5[1] = v10;
  a5[2] = v11;
  v12 = (float)(a2[1] * a5[4]) + a2[4];
  v13 = (float)(a2[2] * a5[5]) + a2[5];
  a5[3] = (float)((float)v8 * *a2) + a2[3];
  a5[4] = v12;
  a5[5] = v13;
  v14 = (float)(a2[1] * a5[7]) + a2[4];
  v15 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)((float)v9 * *a2) + a2[3];
  a5[7] = v14;
  a5[8] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1CE20  (binary VA: 0xf1ce20)
// Original: sub_F1CE20
// ----------------------------------------------------------------------------
float * sub_F1CE20(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm2_4
  float v15; // xmm1_4

  v7 = (float)((float)0 * 65536.0) + (float)*(uint16_t *)(a1 + a3 * *a4);
  *a5 = v7;
  v8 = (float)((float)0 * 65536.0) + (float)*(uint16_t *)(a1 + a3 * a4[1]);
  a5[3] = v8;
  v9 = (float)((float)0 * 65536.0) + (float)*(uint16_t *)(a1 + a4[2] * a3);
  a5[6] = v9;
  v10 = (float)(a2[1] * a5[1]) + a2[4];
  v11 = (float)(a2[2] * a5[2]) + a2[5];
  *a5 = (float)(v7 * *a2) + a2[3];
  a5[1] = v10;
  a5[2] = v11;
  v12 = (float)(a2[1] * a5[4]) + a2[4];
  v13 = (float)(a2[2] * a5[5]) + a2[5];
  a5[3] = (float)(v8 * *a2) + a2[3];
  a5[4] = v12;
  a5[5] = v13;
  v14 = (float)(a2[1] * a5[7]) + a2[4];
  v15 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)(v9 * *a2) + a2[3];
  a5[7] = v14;
  a5[8] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1CF70  (binary VA: 0xf1cf70)
// Original: sub_F1CF70
// ----------------------------------------------------------------------------
float * sub_F1CF70(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4

  v7 = (float)*(int *)(a1 + a3 * *a4);
  *a5 = v7;
  v8 = (float)*(int *)(a1 + a3 * a4[1]);
  a5[3] = v8;
  v9 = (float)*(int *)(a1 + a4[2] * a3);
  a5[6] = v9;
  v10 = (float)(a2[1] * a5[1]) + a2[4];
  v11 = (float)(a2[2] * a5[2]) + a2[5];
  *a5 = (float)(v7 * *a2) + a2[3];
  a5[1] = v10;
  a5[2] = v11;
  v12 = (float)(a2[1] * a5[4]) + a2[4];
  v13 = (float)(a2[2] * a5[5]) + a2[5];
  a5[3] = (float)(v8 * *a2) + a2[3];
  a5[4] = v12;
  a5[5] = v13;
  v14 = (float)(a2[1] * a5[7]) + a2[4];
  v15 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)(v9 * *a2) + a2[3];
  a5[7] = v14;
  a5[8] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1D060  (binary VA: 0xf1d060)
// Original: sub_F1D060
// ----------------------------------------------------------------------------
float * sub_F1D060(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  unsigned int v7;
  float v8; // xmm2_4
  unsigned int v9;
  float v10; // xmm1_4
  unsigned int v11;
  float v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm2_4
  float v18; // xmm1_4

  v7 = *(uint32_t *)(a1 + a3 * *a4);
  v8 = (float)((float)HIWORD(v7) * 65536.0) + (float)(uint16_t)v7;
  *a5 = v8;
  v9 = *(uint32_t *)(a1 + a3 * a4[1]);
  v10 = (float)((float)HIWORD(v9) * 65536.0) + (float)(uint16_t)v9;
  a5[3] = v10;
  v11 = *(uint32_t *)(a1 + a4[2] * a3);
  v12 = (float)((float)HIWORD(v11) * 65536.0) + (float)(uint16_t)v11;
  a5[6] = v12;
  v13 = (float)(a2[1] * a5[1]) + a2[4];
  v14 = (float)(a2[2] * a5[2]) + a2[5];
  *a5 = (float)(v8 * *a2) + a2[3];
  a5[1] = v13;
  a5[2] = v14;
  v15 = (float)(a2[1] * a5[4]) + a2[4];
  v16 = (float)(a2[2] * a5[5]) + a2[5];
  a5[3] = (float)(v10 * *a2) + a2[3];
  a5[4] = v15;
  a5[5] = v16;
  v17 = (float)(a2[1] * a5[7]) + a2[4];
  v18 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)(v12 * *a2) + a2[3];
  a5[7] = v17;
  a5[8] = v18;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1D1C0  (binary VA: 0xf1d1c0)
// Original: sub_F1D1C0
// ----------------------------------------------------------------------------
float * sub_F1D1C0(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4

  v7 = *(float *)(a1 + a3 * *a4);
  *a5 = v7;
  v8 = *(float *)(a1 + a3 * a4[1]);
  a5[3] = v8;
  v9 = *(float *)(a1 + a4[2] * a3);
  a5[6] = v9;
  v10 = (float)(a2[1] * a5[1]) + a2[4];
  v11 = (float)(a2[2] * a5[2]) + a2[5];
  *a5 = (float)(v7 * *a2) + a2[3];
  a5[1] = v10;
  a5[2] = v11;
  v12 = (float)(a2[1] * a5[4]) + a2[4];
  v13 = (float)(a2[2] * a5[5]) + a2[5];
  a5[3] = (float)(v8 * *a2) + a2[3];
  a5[4] = v12;
  a5[5] = v13;
  v14 = (float)(a2[1] * a5[7]) + a2[4];
  v15 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)(v9 * *a2) + a2[3];
  a5[7] = v14;
  a5[8] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1D2B0  (binary VA: 0xf1d2b0)
// Original: sub_F1D2B0
// ----------------------------------------------------------------------------
float * sub_F1D2B0(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  char *v7;
  float v8; // xmm6_4
  float v9; // xmm5_4
  char *v10;
  int v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  float v16; // xmm5_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm0_4

  v7 = (char *)(a1 + a3 * *a4);
  v8 = (float)*v7;
  *a5 = v8;
  v9 = (float)v7[1];
  a5[1] = v9;
  v10 = (char *)(a1 + a3 * a4[1]);
  v11 = *v10;
  a5[3] = (float)v11;
  v12 = v10[1];
  a5[4] = (float)v12;
  v13 = (char *)(a1 + a4[2] * a3);
  v14 = *v13;
  a5[6] = (float)v14;
  v15 = v13[1];
  a5[7] = (float)v15;
  v16 = (float)(v9 * a2[1]) + a2[4];
  v17 = (float)(a2[2] * a5[2]) + a2[5];
  *a5 = (float)(v8 * *a2) + a2[3];
  a5[1] = v16;
  a5[2] = v17;
  v18 = (float)((float)v11 * *a2) + a2[3];
  v19 = (float)(a2[2] * a5[5]) + a2[5];
  a5[4] = (float)((float)v12 * a2[1]) + a2[4];
  a5[3] = v18;
  a5[5] = v19;
  v20 = (float)((float)v14 * *a2) + a2[3];
  v21 = (float)(a2[2] * a5[8]) + a2[5];
  a5[7] = (float)((float)v15 * a2[1]) + a2[4];
  a5[6] = v20;
  a5[8] = v21;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1D3D0  (binary VA: 0xf1d3d0)
// Original: sub_F1D3D0
// ----------------------------------------------------------------------------
float * sub_F1D3D0(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint8_t *v7;
  float v8; // xmm4_4
  float v9; // xmm5_4
  uint8_t *v10;
  float v11; // xmm2_4
  float v12; // xmm3_4
  uint8_t *v13;
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm2_4

  v7 = (uint8_t *)(a1 + a3 * *a4);
  v8 = (float)((float)0 * 65536.0) + (float)*v7;
  *a5 = v8;
  v9 = (float)((float)0 * 65536.0) + (float)v7[1];
  a5[1] = v9;
  v10 = (uint8_t *)(a1 + a3 * a4[1]);
  v11 = (float)((float)0 * 65536.0) + (float)*v10;
  a5[3] = v11;
  v12 = (float)((float)0 * 65536.0) + (float)v10[1];
  a5[4] = v12;
  v13 = (uint8_t *)(a1 + a4[2] * a3);
  v14 = (float)((float)0 * 65536.0) + (float)*v13;
  a5[6] = v14;
  v15 = (float)((float)0 * 65536.0) + (float)v13[1];
  a5[7] = v15;
  v16 = (float)(v9 * a2[1]) + a2[4];
  v17 = (float)(a2[2] * a5[2]) + a2[5];
  *a5 = (float)(v8 * *a2) + a2[3];
  a5[1] = v16;
  a5[2] = v17;
  v18 = (float)(v11 * *a2) + a2[3];
  v19 = (float)(a2[2] * a5[5]) + a2[5];
  a5[4] = (float)(v12 * a2[1]) + a2[4];
  a5[3] = v18;
  a5[5] = v19;
  v20 = (float)(v14 * *a2) + a2[3];
  v21 = (float)(a2[2] * a5[8]) + a2[5];
  a5[7] = (float)(v15 * a2[1]) + a2[4];
  a5[6] = v20;
  a5[8] = v21;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1D580  (binary VA: 0xf1d580)
// Original: sub_F1D580
// ----------------------------------------------------------------------------
float * sub_F1D580(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  int16_t *v7;
  float v8; // xmm6_4
  float v9; // xmm5_4
  int16_t *v10;
  int v11;
  int v12;
  int16_t *v13;
  int v14;
  int v15;
  float v16; // xmm5_4
  float v17; // xmm0_4
  float v18; // xmm4_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm0_4

  v7 = (int16_t *)(a1 + a3 * *a4);
  v8 = (float)*v7;
  *a5 = v8;
  v9 = (float)v7[1];
  a5[1] = v9;
  v10 = (int16_t *)(a1 + a3 * a4[1]);
  v11 = *v10;
  a5[3] = (float)v11;
  v12 = v10[1];
  a5[4] = (float)v12;
  v13 = (int16_t *)(a1 + a4[2] * a3);
  v14 = *v13;
  a5[6] = (float)v14;
  v15 = v13[1];
  a5[7] = (float)v15;
  v16 = (float)(v9 * a2[1]) + a2[4];
  v17 = (float)(a2[2] * a5[2]) + a2[5];
  *a5 = (float)(v8 * *a2) + a2[3];
  a5[1] = v16;
  a5[2] = v17;
  v18 = (float)((float)v11 * *a2) + a2[3];
  v19 = (float)(a2[2] * a5[5]) + a2[5];
  a5[4] = (float)((float)v12 * a2[1]) + a2[4];
  a5[3] = v18;
  a5[5] = v19;
  v20 = (float)((float)v14 * *a2) + a2[3];
  v21 = (float)(a2[2] * a5[8]) + a2[5];
  a5[7] = (float)((float)v15 * a2[1]) + a2[4];
  a5[6] = v20;
  a5[8] = v21;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1D6A0  (binary VA: 0xf1d6a0)
// Original: sub_F1D6A0
// ----------------------------------------------------------------------------
float * sub_F1D6A0(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint16_t *v7;
  float v8; // xmm4_4
  float v9; // xmm5_4
  uint16_t *v10;
  float v11; // xmm2_4
  float v12; // xmm3_4
  uint16_t *v13;
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm2_4

  v7 = (uint16_t *)(a1 + a3 * *a4);
  v8 = (float)((float)0 * 65536.0) + (float)*v7;
  *a5 = v8;
  v9 = (float)((float)0 * 65536.0) + (float)v7[1];
  a5[1] = v9;
  v10 = (uint16_t *)(a1 + a3 * a4[1]);
  v11 = (float)((float)0 * 65536.0) + (float)*v10;
  a5[3] = v11;
  v12 = (float)((float)0 * 65536.0) + (float)v10[1];
  a5[4] = v12;
  v13 = (uint16_t *)(a1 + a4[2] * a3);
  v14 = (float)((float)0 * 65536.0) + (float)*v13;
  a5[6] = v14;
  v15 = (float)((float)0 * 65536.0) + (float)v13[1];
  a5[7] = v15;
  v16 = (float)(v9 * a2[1]) + a2[4];
  v17 = (float)(a2[2] * a5[2]) + a2[5];
  *a5 = (float)(v8 * *a2) + a2[3];
  a5[1] = v16;
  a5[2] = v17;
  v18 = (float)(v11 * *a2) + a2[3];
  v19 = (float)(a2[2] * a5[5]) + a2[5];
  a5[4] = (float)(v12 * a2[1]) + a2[4];
  a5[3] = v18;
  a5[5] = v19;
  v20 = (float)(v14 * *a2) + a2[3];
  v21 = (float)(a2[2] * a5[8]) + a2[5];
  a5[7] = (float)(v15 * a2[1]) + a2[4];
  a5[6] = v20;
  a5[8] = v21;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1D850  (binary VA: 0xf1d850)
// Original: sub_F1D850
// ----------------------------------------------------------------------------
float * sub_F1D850(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  int *v7;
  float v8; // xmm6_4
  float v9; // xmm5_4
  int *v10;
  float v11; // xmm4_4
  float v12; // xmm3_4
  int *v13;
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm0_4

  v7 = (int *)(a1 + a3 * *a4);
  v8 = (float)*v7;
  *a5 = v8;
  v9 = (float)v7[1];
  a5[1] = v9;
  v10 = (int *)(a1 + a3 * a4[1]);
  v11 = (float)*v10;
  a5[3] = v11;
  v12 = (float)v10[1];
  a5[4] = v12;
  v13 = (int *)(a1 + a4[2] * a3);
  v14 = (float)*v13;
  a5[6] = v14;
  v15 = (float)v13[1];
  a5[7] = v15;
  v16 = (float)(v8 * *a2) + a2[3];
  v17 = (float)(a2[2] * a5[2]) + a2[5];
  a5[1] = (float)(v9 * a2[1]) + a2[4];
  *a5 = v16;
  a5[2] = v17;
  v18 = (float)(v12 * a2[1]) + a2[4];
  v19 = (float)(a2[2] * a5[5]) + a2[5];
  a5[3] = (float)(v11 * *a2) + a2[3];
  a5[4] = v18;
  a5[5] = v19;
  v20 = (float)(v14 * *a2) + a2[3];
  v21 = (float)(a2[2] * a5[8]) + a2[5];
  a5[7] = (float)(v15 * a2[1]) + a2[4];
  a5[6] = v20;
  a5[8] = v21;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1D960  (binary VA: 0xf1d960)
// Original: sub_F1D960
// ----------------------------------------------------------------------------
float * sub_F1D960(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint32_t *v7;
  float v8; // xmm4_4
  float v9; // xmm5_4
  uint32_t *v10;
  float v11; // xmm2_4
  float v12; // xmm3_4
  uint32_t *v13;
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // xmm6_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  float v20; // xmm0_4
  float v21; // xmm2_4

  v7 = (uint32_t *)(a1 + a3 * *a4);
  v8 = (float)((float)HIWORD(*v7) * 65536.0) + (float)*(uint16_t *)v7;
  *a5 = v8;
  v9 = (float)((float)HIWORD(v7[1]) * 65536.0) + (float)(uint16_t)v7[1];
  a5[1] = v9;
  v10 = (uint32_t *)(a1 + a3 * a4[1]);
  v11 = (float)((float)HIWORD(*v10) * 65536.0) + (float)*(uint16_t *)v10;
  a5[3] = v11;
  v12 = (float)((float)HIWORD(v10[1]) * 65536.0) + (float)(uint16_t)v10[1];
  a5[4] = v12;
  v13 = (uint32_t *)(a1 + a4[2] * a3);
  v14 = (float)((float)HIWORD(*v13) * 65536.0) + (float)(uint16_t)*v13;
  a5[6] = v14;
  v15 = (float)((float)HIWORD(v13[1]) * 65536.0) + (float)(uint16_t)v13[1];
  a5[7] = v15;
  v16 = (float)(v8 * *a2) + a2[3];
  v17 = (float)(a2[2] * a5[2]) + a2[5];
  a5[1] = (float)(v9 * a2[1]) + a2[4];
  *a5 = v16;
  a5[2] = v17;
  v18 = (float)(v11 * *a2) + a2[3];
  v19 = (float)(a2[2] * a5[5]) + a2[5];
  a5[4] = (float)(v12 * a2[1]) + a2[4];
  a5[3] = v18;
  a5[5] = v19;
  v20 = (float)(v14 * *a2) + a2[3];
  v21 = (float)(a2[2] * a5[8]) + a2[5];
  a5[7] = (float)(v15 * a2[1]) + a2[4];
  a5[6] = v20;
  a5[8] = v21;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1DB20  (binary VA: 0xf1db20)
// Original: sub_F1DB20
// ----------------------------------------------------------------------------
float * sub_F1DB20(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  float *v7;
  float v8; // xmm6_4
  float v9; // xmm5_4
  float *v10;
  float v11; // xmm4_4
  float v12; // xmm3_4
  float *v13;
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm0_4

  v7 = (float *)(a1 + a3 * *a4);
  v8 = *v7;
  *a5 = *v7;
  v9 = v7[1];
  a5[1] = v9;
  v10 = (float *)(a1 + a3 * a4[1]);
  v11 = *v10;
  a5[3] = *v10;
  v12 = v10[1];
  a5[4] = v12;
  v13 = (float *)(a1 + a4[2] * a3);
  v14 = *v13;
  a5[6] = *v13;
  v15 = v13[1];
  a5[7] = v15;
  v16 = (float)(v8 * *a2) + a2[3];
  v17 = (float)(a2[2] * a5[2]) + a2[5];
  a5[1] = (float)(v9 * a2[1]) + a2[4];
  *a5 = v16;
  a5[2] = v17;
  v18 = (float)(v12 * a2[1]) + a2[4];
  v19 = (float)(a2[2] * a5[5]) + a2[5];
  a5[3] = (float)(v11 * *a2) + a2[3];
  a5[4] = v18;
  a5[5] = v19;
  v20 = (float)(v14 * *a2) + a2[3];
  v21 = (float)(a2[2] * a5[8]) + a2[5];
  a5[7] = (float)(v15 * a2[1]) + a2[4];
  a5[6] = v20;
  a5[8] = v21;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1DC30  (binary VA: 0xf1dc30)
// Original: sub_F1DC30
// ----------------------------------------------------------------------------
float * sub_F1DC30(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  char *v7;
  char *v8;
  char *v9;
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm2_4

  v7 = (char *)(a1 + a3 * *a4);
  *a5 = (float)*v7;
  a5[1] = (float)v7[1];
  a5[2] = (float)v7[2];
  v8 = (char *)(a1 + a3 * a4[1]);
  a5[3] = (float)*v8;
  a5[4] = (float)v8[1];
  a5[5] = (float)v8[2];
  v9 = (char *)(a1 + a4[2] * a3);
  a5[6] = (float)*v9;
  a5[7] = (float)v9[1];
  a5[8] = (float)v9[2];
  v10 = (float)(a2[1] * a5[1]) + a2[4];
  v11 = (float)(a2[2] * a5[2]) + a2[5];
  *a5 = (float)(*a2 * *a5) + a2[3];
  a5[1] = v10;
  a5[2] = v11;
  v12 = (float)(a2[2] * a5[5]) + a2[5];
  v13 = (float)(*a2 * a5[3]) + a2[3];
  a5[4] = (float)(a2[1] * a5[4]) + a2[4];
  a5[5] = v12;
  a5[3] = v13;
  v14 = (float)(a2[2] * a5[8]) + a2[5];
  v15 = (float)(*a2 * a5[6]) + a2[3];
  a5[7] = (float)(a2[1] * a5[7]) + a2[4];
  a5[8] = v14;
  a5[6] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1DD90  (binary VA: 0xf1dd90)
// Original: sub_F1DD90
// ----------------------------------------------------------------------------
float * sub_F1DD90(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint8_t *v7;
  uint8_t *v8;
  uint8_t *v9;
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4

  v7 = (uint8_t *)(a1 + a3 * *a4);
  *a5 = (float)((float)0 * 65536.0) + (float)*v7;
  a5[1] = (float)((float)0 * 65536.0) + (float)v7[1];
  a5[2] = (float)((float)0 * 65536.0) + (float)v7[2];
  v8 = (uint8_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)((float)0 * 65536.0) + (float)*v8;
  a5[4] = (float)((float)0 * 65536.0) + (float)v8[1];
  a5[5] = (float)((float)0 * 65536.0) + (float)v8[2];
  v9 = (uint8_t *)(a1 + a4[2] * a3);
  a5[6] = (float)((float)0 * 65536.0) + (float)*v9;
  a5[7] = (float)((float)0 * 65536.0) + (float)v9[1];
  a5[8] = (float)((float)0 * 65536.0) + (float)v9[2];
  v10 = (float)(a2[2] * a5[2]) + a2[5];
  v11 = (float)(*a2 * *a5) + a2[3];
  a5[1] = (float)(a2[1] * a5[1]) + a2[4];
  a5[2] = v10;
  *a5 = v11;
  v12 = (float)(a2[2] * a5[5]) + a2[5];
  v13 = (float)(*a2 * a5[3]) + a2[3];
  a5[4] = (float)(a2[1] * a5[4]) + a2[4];
  a5[5] = v12;
  a5[3] = v13;
  v14 = (float)(a2[1] * a5[7]) + a2[4];
  v15 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)(*a2 * a5[6]) + a2[3];
  a5[7] = v14;
  a5[8] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1DFA0  (binary VA: 0xf1dfa0)
// Original: sub_F1DFA0
// ----------------------------------------------------------------------------
float * sub_F1DFA0(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  int16_t *v7;
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  int16_t *v11;
  float v12; // xmm5_4
  int v13;
  int v14;
  int16_t *v15;
  float v16; // xmm3_4
  int v17;
  int v18;
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm3_4
  float v25; // xmm0_4

  v7 = (int16_t *)(a1 + a3 * *a4);
  v8 = (float)*v7;
  *a5 = v8;
  v9 = (float)v7[1];
  a5[1] = v9;
  v10 = (float)v7[2];
  a5[2] = v10;
  v11 = (int16_t *)(a1 + a3 * a4[1]);
  v12 = (float)*v11;
  a5[3] = v12;
  v13 = v11[1];
  a5[4] = (float)v13;
  v14 = v11[2];
  a5[5] = (float)v14;
  v15 = (int16_t *)(a1 + a4[2] * a3);
  v16 = (float)*v15;
  a5[6] = v16;
  v17 = v15[1];
  a5[7] = (float)v17;
  v18 = v15[2];
  a5[8] = (float)v18;
  v19 = (float)(v9 * a2[1]) + a2[4];
  v20 = (float)(v10 * a2[2]) + a2[5];
  *a5 = (float)(v8 * *a2) + a2[3];
  a5[2] = v20;
  a5[1] = v19;
  v21 = v16;
  v22 = (float)((float)v14 * a2[2]) + a2[5];
  v23 = (float)(v12 * *a2) + a2[3];
  a5[4] = (float)((float)v13 * a2[1]) + a2[4];
  a5[5] = v22;
  a5[3] = v23;
  v24 = (float)((float)v18 * a2[2]) + a2[5];
  v25 = (float)(v21 * *a2) + a2[3];
  a5[7] = (float)((float)v17 * a2[1]) + a2[4];
  a5[8] = v24;
  a5[6] = v25;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1E0E0  (binary VA: 0xf1e0e0)
// Original: sub_F1E0E0
// ----------------------------------------------------------------------------
float * sub_F1E0E0(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint16_t *v7;
  float v8; // xmm4_4
  float v9; // xmm6_4
  float v10; // xmm5_4
  uint16_t *v11;
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  uint16_t *v15;
  float v16; // xmm7_4
  float v17; // xmm7_4
  float v18; // xmm7_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25;
  float v26;

  v7 = (uint16_t *)(a1 + a3 * *a4);
  v8 = (float)((float)0 * 65536.0) + (float)*v7;
  *a5 = v8;
  v9 = (float)((float)0 * 65536.0) + (float)v7[1];
  a5[1] = v9;
  v10 = (float)((float)0 * 65536.0) + (float)v7[2];
  a5[2] = v10;
  v11 = (uint16_t *)(a1 + a3 * a4[1]);
  v12 = (float)((float)0 * 65536.0) + (float)*v11;
  a5[3] = v12;
  v13 = (float)((float)0 * 65536.0) + (float)v11[1];
  a5[4] = v13;
  v14 = (float)((float)0 * 65536.0) + (float)v11[2];
  a5[5] = v14;
  v15 = (uint16_t *)(a1 + a4[2] * a3);
  v16 = (float)*v15 + (float)((float)0 * 65536.0);
  a5[6] = v16;
  v25 = v16;
  v17 = (float)v15[1] + (float)((float)0 * 65536.0);
  a5[7] = v17;
  v26 = v17;
  v18 = (float)v15[2] + (float)(65536.0 * (float)0);
  a5[8] = v18;
  v19 = (float)(v10 * a2[2]) + a2[5];
  v20 = (float)(v8 * *a2) + a2[3];
  a5[1] = (float)(v9 * a2[1]) + a2[4];
  a5[2] = v19;
  *a5 = v20;
  v21 = (float)(v13 * a2[1]) + a2[4];
  v22 = (float)(v14 * a2[2]) + a2[5];
  a5[3] = (float)(v12 * *a2) + a2[3];
  a5[4] = v21;
  a5[5] = v22;
  v23 = (float)(v25 * *a2) + a2[3];
  v24 = (float)(a2[2] * v18) + a2[5];
  a5[7] = (float)(v26 * a2[1]) + a2[4];
  a5[6] = v23;
  a5[8] = v24;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1E330  (binary VA: 0xf1e330)
// Original: sub_F1E330
// ----------------------------------------------------------------------------
float * sub_F1E330(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  int *v7;
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  int *v11;
  float v12; // xmm5_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  int *v15;
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm3_4
  float v24; // xmm0_4
  float v25;

  v7 = (int *)(a1 + a3 * *a4);
  v8 = (float)*v7;
  *a5 = v8;
  v9 = (float)v7[1];
  a5[1] = v9;
  v10 = (float)v7[2];
  a5[2] = v10;
  v11 = (int *)(a1 + a3 * a4[1]);
  v12 = (float)*v11;
  a5[3] = v12;
  v13 = (float)v11[1];
  a5[4] = v13;
  v14 = (float)v11[2];
  a5[5] = v14;
  v15 = (int *)(a1 + a4[2] * a3);
  v16 = (float)*v15;
  a5[6] = v16;
  v17 = (float)v15[1];
  a5[7] = v17;
  v25 = v16;
  v18 = (float)v15[2];
  a5[8] = v18;
  v19 = (float)(v9 * a2[1]) + a2[4];
  v20 = (float)(v10 * a2[2]) + a2[5];
  *a5 = (float)(v8 * *a2) + a2[3];
  a5[2] = v20;
  a5[1] = v19;
  v21 = (float)(v14 * a2[2]) + a2[5];
  v22 = (float)(v12 * *a2) + a2[3];
  a5[4] = (float)(v13 * a2[1]) + a2[4];
  a5[5] = v21;
  a5[3] = v22;
  v23 = (float)(v18 * a2[2]) + a2[5];
  v24 = (float)(v25 * *a2) + a2[3];
  a5[7] = (float)(v17 * a2[1]) + a2[4];
  a5[8] = v23;
  a5[6] = v24;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1E460  (binary VA: 0xf1e460)
// Original: sub_F1E460
// ----------------------------------------------------------------------------
float * sub_F1E460(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint32_t *v7;
  float v8; // xmm4_4
  float v9; // xmm6_4
  float v10; // xmm5_4
  uint32_t *v11;
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  uint32_t *v15;
  float v16; // xmm7_4
  float v17; // xmm7_4
  float v18; // xmm7_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  float v22; // xmm2_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25;
  float v26;

  v7 = (uint32_t *)(a1 + a3 * *a4);
  v8 = (float)((float)HIWORD(*v7) * 65536.0) + (float)(uint16_t)*v7;
  *a5 = v8;
  v9 = (float)((float)HIWORD(v7[1]) * 65536.0) + (float)(uint16_t)v7[1];
  a5[1] = v9;
  v10 = (float)((float)HIWORD(v7[2]) * 65536.0) + (float)(uint16_t)v7[2];
  a5[2] = v10;
  v11 = (uint32_t *)(a1 + a3 * a4[1]);
  v12 = (float)((float)HIWORD(*v11) * 65536.0) + (float)(uint16_t)*v11;
  a5[3] = v12;
  v13 = (float)((float)HIWORD(v11[1]) * 65536.0) + (float)(uint16_t)v11[1];
  a5[4] = v13;
  v14 = (float)((float)HIWORD(v11[2]) * 65536.0) + (float)(uint16_t)v11[2];
  a5[5] = v14;
  v15 = (uint32_t *)(a1 + a4[2] * a3);
  v16 = (float)(uint16_t)*v15 + (float)((float)HIWORD(*v15) * 65536.0);
  a5[6] = v16;
  v25 = v16;
  v17 = (float)(uint16_t)v15[1] + (float)((float)HIWORD(v15[1]) * 65536.0);
  a5[7] = v17;
  v26 = v17;
  v18 = (float)(uint16_t)v15[2] + (float)(65536.0 * (float)HIWORD(v15[2]));
  a5[8] = v18;
  v19 = (float)(v10 * a2[2]) + a2[5];
  v20 = (float)(v8 * *a2) + a2[3];
  a5[1] = (float)(v9 * a2[1]) + a2[4];
  a5[2] = v19;
  *a5 = v20;
  v21 = (float)(v13 * a2[1]) + a2[4];
  v22 = (float)(v14 * a2[2]) + a2[5];
  a5[3] = (float)(v12 * *a2) + a2[3];
  a5[4] = v21;
  a5[5] = v22;
  v23 = (float)(v25 * *a2) + a2[3];
  v24 = (float)(a2[2] * v18) + a2[5];
  a5[7] = (float)(v26 * a2[1]) + a2[4];
  a5[6] = v23;
  a5[8] = v24;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1E6D0  (binary VA: 0xf1e6d0)
// Original: sub_F1E6D0
// ----------------------------------------------------------------------------
float * sub_F1E6D0(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  float *v7;
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float *v11;
  float v12; // xmm5_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  float *v15;
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm3_4
  float v24; // xmm0_4
  float v25;

  v7 = (float *)(a1 + a3 * *a4);
  v8 = *v7;
  *a5 = *v7;
  v9 = v7[1];
  a5[1] = v9;
  v10 = v7[2];
  a5[2] = v10;
  v11 = (float *)(a1 + a3 * a4[1]);
  v12 = *v11;
  a5[3] = *v11;
  v13 = v11[1];
  a5[4] = v13;
  v14 = v11[2];
  a5[5] = v14;
  v15 = (float *)(a1 + a4[2] * a3);
  v16 = *v15;
  a5[6] = *v15;
  v17 = v15[1];
  a5[7] = v17;
  v25 = v16;
  v18 = v15[2];
  a5[8] = v18;
  v19 = (float)(v9 * a2[1]) + a2[4];
  v20 = (float)(v10 * a2[2]) + a2[5];
  *a5 = (float)(v8 * *a2) + a2[3];
  a5[2] = v20;
  a5[1] = v19;
  v21 = (float)(v14 * a2[2]) + a2[5];
  v22 = (float)(v12 * *a2) + a2[3];
  a5[4] = (float)(v13 * a2[1]) + a2[4];
  a5[5] = v21;
  a5[3] = v22;
  v23 = (float)(v18 * a2[2]) + a2[5];
  v24 = (float)(v25 * *a2) + a2[3];
  a5[7] = (float)(v17 * a2[1]) + a2[4];
  a5[8] = v23;
  a5[6] = v24;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1E800  (binary VA: 0xf1e800)
// Original: sub_F1E800
// ----------------------------------------------------------------------------
float * sub_F1E800(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  char *v7;
  char *v8;
  char *v9;
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4

  v7 = (char *)(a1 + a3 * *a4);
  *a5 = (float)*v7;
  a5[1] = (float)v7[1];
  a5[2] = (float)v7[2];
  a5[3] = (float)v7[3];
  v8 = (char *)(a1 + a3 * a4[1]);
  a5[3] = (float)*v8;
  a5[4] = (float)v8[1];
  a5[5] = (float)v8[2];
  a5[6] = (float)v8[3];
  v9 = (char *)(a1 + a4[2] * a3);
  a5[6] = (float)*v9;
  a5[7] = (float)v9[1];
  a5[8] = (float)v9[2];
  a5[9] = (float)v9[3];
  v10 = (float)(a2[2] * a5[2]) + a2[5];
  v11 = (float)(*a2 * *a5) + a2[3];
  a5[1] = (float)(a2[1] * a5[1]) + a2[4];
  a5[2] = v10;
  *a5 = v11;
  v12 = (float)(a2[2] * a5[5]) + a2[5];
  v13 = (float)(*a2 * a5[3]) + a2[3];
  a5[4] = (float)(a2[1] * a5[4]) + a2[4];
  a5[5] = v12;
  a5[3] = v13;
  v14 = (float)(a2[1] * a5[7]) + a2[4];
  v15 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)(*a2 * a5[6]) + a2[3];
  a5[7] = v14;
  a5[8] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1E980  (binary VA: 0xf1e980)
// Original: sub_F1E980
// ----------------------------------------------------------------------------
float * sub_F1E980(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint8_t *v7;
  uint8_t *v8;
  uint8_t *v9;
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4

  v7 = (uint8_t *)(a1 + a3 * *a4);
  *a5 = (float)((float)0 * 65536.0) + (float)*v7;
  a5[1] = (float)((float)0 * 65536.0) + (float)v7[1];
  a5[2] = (float)((float)0 * 65536.0) + (float)v7[2];
  a5[3] = (float)((float)0 * 65536.0) + (float)v7[3];
  v8 = (uint8_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)((float)0 * 65536.0) + (float)*v8;
  a5[4] = (float)((float)0 * 65536.0) + (float)v8[1];
  a5[5] = (float)((float)0 * 65536.0) + (float)v8[2];
  a5[6] = (float)((float)0 * 65536.0) + (float)v8[3];
  v9 = (uint8_t *)(a1 + a4[2] * a3);
  a5[6] = (float)((float)0 * 65536.0) + (float)*v9;
  a5[7] = (float)((float)0 * 65536.0) + (float)v9[1];
  a5[8] = (float)((float)0 * 65536.0) + (float)v9[2];
  a5[9] = (float)((float)0 * 65536.0) + (float)v9[3];
  v10 = (float)(a2[2] * a5[2]) + a2[5];
  v11 = (float)(*a2 * *a5) + a2[3];
  a5[1] = (float)(a2[1] * a5[1]) + a2[4];
  a5[2] = v10;
  *a5 = v11;
  v12 = (float)(a2[2] * a5[5]) + a2[5];
  v13 = (float)(*a2 * a5[3]) + a2[3];
  a5[4] = (float)(a2[1] * a5[4]) + a2[4];
  a5[5] = v12;
  a5[3] = v13;
  v14 = (float)(a2[1] * a5[7]) + a2[4];
  v15 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)(*a2 * a5[6]) + a2[3];
  a5[7] = v14;
  a5[8] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1EBF0  (binary VA: 0xf1ebf0)
// Original: sub_F1EBF0
// ----------------------------------------------------------------------------
float * sub_F1EBF0(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  int16_t *v7;
  int16_t *v8;
  int16_t *v9;
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4

  v7 = (int16_t *)(a1 + a3 * *a4);
  *a5 = (float)*v7;
  a5[1] = (float)v7[1];
  a5[2] = (float)v7[2];
  a5[3] = (float)v7[3];
  v8 = (int16_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)*v8;
  a5[4] = (float)v8[1];
  a5[5] = (float)v8[2];
  a5[6] = (float)v8[3];
  v9 = (int16_t *)(a1 + a4[2] * a3);
  a5[6] = (float)*v9;
  a5[7] = (float)v9[1];
  a5[8] = (float)v9[2];
  a5[9] = (float)v9[3];
  v10 = (float)(a2[2] * a5[2]) + a2[5];
  v11 = (float)(*a2 * *a5) + a2[3];
  a5[1] = (float)(a2[1] * a5[1]) + a2[4];
  a5[2] = v10;
  *a5 = v11;
  v12 = (float)(a2[2] * a5[5]) + a2[5];
  v13 = (float)(*a2 * a5[3]) + a2[3];
  a5[4] = (float)(a2[1] * a5[4]) + a2[4];
  a5[5] = v12;
  a5[3] = v13;
  v14 = (float)(a2[1] * a5[7]) + a2[4];
  v15 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)(*a2 * a5[6]) + a2[3];
  a5[7] = v14;
  a5[8] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1ED70  (binary VA: 0xf1ed70)
// Original: sub_F1ED70
// ----------------------------------------------------------------------------
float * sub_F1ED70(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint16_t *v7;
  uint16_t *v8;
  uint16_t *v9;
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4

  v7 = (uint16_t *)(a1 + a3 * *a4);
  *a5 = (float)((float)0 * 65536.0) + (float)*v7;
  a5[1] = (float)((float)0 * 65536.0) + (float)v7[1];
  a5[2] = (float)((float)0 * 65536.0) + (float)v7[2];
  a5[3] = (float)((float)0 * 65536.0) + (float)v7[3];
  v8 = (uint16_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)((float)0 * 65536.0) + (float)*v8;
  a5[4] = (float)((float)0 * 65536.0) + (float)v8[1];
  a5[5] = (float)((float)0 * 65536.0) + (float)v8[2];
  a5[6] = (float)((float)0 * 65536.0) + (float)v8[3];
  v9 = (uint16_t *)(a1 + a4[2] * a3);
  a5[6] = (float)((float)0 * 65536.0) + (float)*v9;
  a5[7] = (float)((float)0 * 65536.0) + (float)v9[1];
  a5[8] = (float)((float)0 * 65536.0) + (float)v9[2];
  a5[9] = (float)((float)0 * 65536.0) + (float)v9[3];
  v10 = (float)(a2[2] * a5[2]) + a2[5];
  v11 = (float)(*a2 * *a5) + a2[3];
  a5[1] = (float)(a2[1] * a5[1]) + a2[4];
  a5[2] = v10;
  *a5 = v11;
  v12 = (float)(a2[2] * a5[5]) + a2[5];
  v13 = (float)(*a2 * a5[3]) + a2[3];
  a5[4] = (float)(a2[1] * a5[4]) + a2[4];
  a5[5] = v12;
  a5[3] = v13;
  v14 = (float)(a2[1] * a5[7]) + a2[4];
  v15 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)(*a2 * a5[6]) + a2[3];
  a5[7] = v14;
  a5[8] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1EFE0  (binary VA: 0xf1efe0)
// Original: sub_F1EFE0
// ----------------------------------------------------------------------------
float * sub_F1EFE0(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  int *v7;
  int *v8;
  int *v9;
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4

  v7 = (int *)(a1 + a3 * *a4);
  *a5 = (float)*v7;
  a5[1] = (float)v7[1];
  a5[2] = (float)v7[2];
  a5[3] = (float)v7[3];
  v8 = (int *)(a1 + a3 * a4[1]);
  a5[3] = (float)*v8;
  a5[4] = (float)v8[1];
  a5[5] = (float)v8[2];
  a5[6] = (float)v8[3];
  v9 = (int *)(a1 + a4[2] * a3);
  a5[6] = (float)*v9;
  a5[7] = (float)v9[1];
  a5[8] = (float)v9[2];
  a5[9] = (float)v9[3];
  v10 = (float)(a2[2] * a5[2]) + a2[5];
  v11 = (float)(*a2 * *a5) + a2[3];
  a5[1] = (float)(a2[1] * a5[1]) + a2[4];
  a5[2] = v10;
  *a5 = v11;
  v12 = (float)(a2[2] * a5[5]) + a2[5];
  v13 = (float)(*a2 * a5[3]) + a2[3];
  a5[4] = (float)(a2[1] * a5[4]) + a2[4];
  a5[5] = v12;
  a5[3] = v13;
  v14 = (float)(a2[1] * a5[7]) + a2[4];
  v15 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)(*a2 * a5[6]) + a2[3];
  a5[7] = v14;
  a5[8] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1F140  (binary VA: 0xf1f140)
// Original: sub_F1F140
// ----------------------------------------------------------------------------
float * sub_F1F140(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4

  v7 = (uint32_t *)(a1 + a3 * *a4);
  *a5 = (float)((float)HIWORD(*v7) * 65536.0) + (float)(uint16_t)*v7;
  a5[1] = (float)((float)HIWORD(v7[1]) * 65536.0) + (float)(uint16_t)v7[1];
  a5[2] = (float)((float)HIWORD(v7[2]) * 65536.0) + (float)(uint16_t)v7[2];
  a5[3] = (float)((float)HIWORD(v7[3]) * 65536.0) + (float)(uint16_t)v7[3];
  v8 = (uint32_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)((float)HIWORD(*v8) * 65536.0) + (float)(uint16_t)*v8;
  a5[4] = (float)((float)HIWORD(v8[1]) * 65536.0) + (float)(uint16_t)v8[1];
  a5[5] = (float)((float)HIWORD(v8[2]) * 65536.0) + (float)(uint16_t)v8[2];
  a5[6] = (float)((float)HIWORD(v8[3]) * 65536.0) + (float)(uint16_t)v8[3];
  v9 = (uint32_t *)(a1 + a4[2] * a3);
  a5[6] = (float)((float)HIWORD(*v9) * 65536.0) + (float)(uint16_t)*v9;
  a5[7] = (float)((float)HIWORD(v9[1]) * 65536.0) + (float)(uint16_t)v9[1];
  a5[8] = (float)((float)HIWORD(v9[2]) * 65536.0) + (float)(uint16_t)v9[2];
  a5[9] = (float)((float)HIWORD(v9[3]) * 65536.0) + (float)(uint16_t)v9[3];
  v10 = (float)(a2[2] * a5[2]) + a2[5];
  v11 = (float)(*a2 * *a5) + a2[3];
  a5[1] = (float)(a2[1] * a5[1]) + a2[4];
  a5[2] = v10;
  *a5 = v11;
  v12 = (float)(a2[2] * a5[5]) + a2[5];
  v13 = (float)(*a2 * a5[3]) + a2[3];
  a5[4] = (float)(a2[1] * a5[4]) + a2[4];
  a5[5] = v12;
  a5[3] = v13;
  v14 = (float)(a2[1] * a5[7]) + a2[4];
  v15 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)(*a2 * a5[6]) + a2[3];
  a5[7] = v14;
  a5[8] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1F3D0  (binary VA: 0xf1f3d0)
// Original: sub_F1F3D0
// ----------------------------------------------------------------------------
float * sub_F1F3D0(int a1, float *a2, uint16_t a3, uint16_t *a4, float *a5)
{
  float *v7;
  float *v8;
  float *v9;
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4

  v7 = (float *)(a1 + a3 * *a4);
  *a5 = *v7;
  a5[1] = v7[1];
  a5[2] = v7[2];
  a5[3] = v7[3];
  v8 = (float *)(a1 + a3 * a4[1]);
  a5[3] = *v8;
  a5[4] = v8[1];
  a5[5] = v8[2];
  a5[6] = v8[3];
  v9 = (float *)(a1 + a4[2] * a3);
  a5[6] = *v9;
  a5[7] = v9[1];
  a5[8] = v9[2];
  a5[9] = v9[3];
  v10 = (float)(a2[2] * a5[2]) + a2[5];
  v11 = (float)(*a2 * *a5) + a2[3];
  a5[1] = (float)(a2[1] * a5[1]) + a2[4];
  a5[2] = v10;
  *a5 = v11;
  v12 = (float)(a2[2] * a5[5]) + a2[5];
  v13 = (float)(*a2 * a5[3]) + a2[3];
  a5[4] = (float)(a2[1] * a5[4]) + a2[4];
  a5[5] = v12;
  a5[3] = v13;
  v14 = (float)(a2[1] * a5[7]) + a2[4];
  v15 = (float)(a2[2] * a5[8]) + a2[5];
  a5[6] = (float)(*a2 * a5[6]) + a2[3];
  a5[7] = v14;
  a5[8] = v15;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1F520  (binary VA: 0xf1f520)
// Original: sub_F1F520
// ----------------------------------------------------------------------------
float * sub_F1F520(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  *a5 = (float)*(char *)(a1 + a3 * *a4);
  a5[3] = (float)*(char *)(a1 + a3 * a4[1]);
  a5[6] = (float)*(char *)(a1 + a4[2] * a3);
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1F590  (binary VA: 0xf1f590)
// Original: sub_F1F590
// ----------------------------------------------------------------------------
float * sub_F1F590(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  *a5 = (float)((float)0 * 65536.0) + (float)*(uint8_t *)(a1 + a3 * *a4);
  a5[3] = (float)((float)0 * 65536.0) + (float)*(uint8_t *)(a1 + a3 * a4[1]);
  a5[6] = (float)((float)0 * 65536.0) + (float)*(uint8_t *)(a1 + a4[2] * a3);
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1F650  (binary VA: 0xf1f650)
// Original: sub_F1F650
// ----------------------------------------------------------------------------
float * sub_F1F650(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  *a5 = (float)*(int16_t *)(a1 + a3 * *a4);
  a5[3] = (float)*(int16_t *)(a1 + a3 * a4[1]);
  a5[6] = (float)*(int16_t *)(a1 + a4[2] * a3);
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1F6C0  (binary VA: 0xf1f6c0)
// Original: sub_F1F6C0
// ----------------------------------------------------------------------------
float * sub_F1F6C0(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  *a5 = (float)((float)0 * 65536.0) + (float)*(uint16_t *)(a1 + a3 * *a4);
  a5[3] = (float)((float)0 * 65536.0) + (float)*(uint16_t *)(a1 + a3 * a4[1]);
  a5[6] = (float)((float)0 * 65536.0) + (float)*(uint16_t *)(a1 + a4[2] * a3);
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1F780  (binary VA: 0xf1f780)
// Original: sub_F1F780
// ----------------------------------------------------------------------------
float * sub_F1F780(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  *a5 = (float)*(int *)(a1 + a3 * *a4);
  a5[3] = (float)*(int *)(a1 + a3 * a4[1]);
  a5[6] = (float)*(int *)(a1 + a4[2] * a3);
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1F7E0  (binary VA: 0xf1f7e0)
// Original: sub_F1F7E0
// ----------------------------------------------------------------------------
float * sub_F1F7E0(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  unsigned int v6;

  *a5 = (float)((float)HIWORD(*(uint32_t *)(a1 + a3 * *a4)) * 65536.0)
      + (float)(uint16_t)*(uint32_t *)(a1 + a3 * *a4);
  a5[3] = (float)((float)HIWORD(*(uint32_t *)(a1 + a3 * a4[1])) * 65536.0)
        + (float)(uint16_t)*(uint32_t *)(a1 + a3 * a4[1]);
  v6 = *(uint32_t *)(a1 + a4[2] * a3);
  a5[6] = (float)((float)HIWORD(v6) * 65536.0) + (float)(uint16_t)v6;
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1F8B0  (binary VA: 0xf1f8b0)
// Original: sub_F1F8B0
// ----------------------------------------------------------------------------
uint32_t * sub_F1F8B0(int a1, int a2, uint16_t a3, uint16_t *a4, uint32_t *a5)
{
  *a5 = *(uint32_t *)(a1 + a3 * *a4);
  a5[3] = *(uint32_t *)(a1 + a3 * a4[1]);
  a5[6] = *(uint32_t *)(a1 + a4[2] * a3);
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1F900  (binary VA: 0xf1f900)
// Original: sub_F1F900
// ----------------------------------------------------------------------------
float * sub_F1F900(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  char *v6;
  char *v7;
  char *v8;

  v6 = (char *)(a1 + a3 * *a4);
  *a5 = (float)*v6;
  a5[1] = (float)v6[1];
  v7 = (char *)(a1 + a3 * a4[1]);
  a5[3] = (float)*v7;
  a5[4] = (float)v7[1];
  v8 = (char *)(a1 + a4[2] * a3);
  a5[6] = (float)*v8;
  a5[7] = (float)v8[1];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1F9A0  (binary VA: 0xf1f9a0)
// Original: sub_F1F9A0
// ----------------------------------------------------------------------------
float * sub_F1F9A0(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint8_t *v6;
  uint8_t *v7;
  uint8_t *v8;

  v6 = (uint8_t *)(a1 + a3 * *a4);
  *a5 = (float)((float)0 * 65536.0) + (float)*v6;
  a5[1] = (float)((float)0 * 65536.0) + (float)v6[1];
  v7 = (uint8_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)((float)0 * 65536.0) + (float)*v7;
  a5[4] = (float)((float)0 * 65536.0) + (float)v7[1];
  v8 = (uint8_t *)(a1 + a4[2] * a3);
  a5[6] = (float)((float)0 * 65536.0) + (float)*v8;
  a5[7] = (float)((float)0 * 65536.0) + (float)v8[1];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1FAC0  (binary VA: 0xf1fac0)
// Original: sub_F1FAC0
// ----------------------------------------------------------------------------
float * sub_F1FAC0(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  int16_t *v6;
  int16_t *v7;
  int16_t *v8;

  v6 = (int16_t *)(a1 + a3 * *a4);
  *a5 = (float)*v6;
  a5[1] = (float)v6[1];
  v7 = (int16_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)*v7;
  a5[4] = (float)v7[1];
  v8 = (int16_t *)(a1 + a4[2] * a3);
  a5[6] = (float)*v8;
  a5[7] = (float)v8[1];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1FB60  (binary VA: 0xf1fb60)
// Original: sub_F1FB60
// ----------------------------------------------------------------------------
float * sub_F1FB60(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint16_t *v6;
  uint16_t *v7;
  uint16_t *v8;

  v6 = (uint16_t *)(a1 + a3 * *a4);
  *a5 = (float)((float)0 * 65536.0) + (float)*v6;
  a5[1] = (float)((float)0 * 65536.0) + (float)v6[1];
  v7 = (uint16_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)((float)0 * 65536.0) + (float)*v7;
  a5[4] = (float)((float)0 * 65536.0) + (float)v7[1];
  v8 = (uint16_t *)(a1 + a4[2] * a3);
  a5[6] = (float)((float)0 * 65536.0) + (float)*v8;
  a5[7] = (float)((float)0 * 65536.0) + (float)v8[1];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1FC80  (binary VA: 0xf1fc80)
// Original: sub_F1FC80
// ----------------------------------------------------------------------------
float * sub_F1FC80(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  int *v6;
  int *v7;
  int *v8;

  v6 = (int *)(a1 + a3 * *a4);
  *a5 = (float)*v6;
  a5[1] = (float)v6[1];
  v7 = (int *)(a1 + a3 * a4[1]);
  a5[3] = (float)*v7;
  a5[4] = (float)v7[1];
  v8 = (int *)(a1 + a4[2] * a3);
  a5[6] = (float)*v8;
  a5[7] = (float)v8[1];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1FCF0  (binary VA: 0xf1fcf0)
// Original: sub_F1FCF0
// ----------------------------------------------------------------------------
float * sub_F1FCF0(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;

  v6 = (uint32_t *)(a1 + a3 * *a4);
  *a5 = (float)((float)HIWORD(*v6) * 65536.0) + (float)(uint16_t)*v6;
  a5[1] = (float)((float)HIWORD(v6[1]) * 65536.0) + (float)(uint16_t)v6[1];
  v7 = (uint32_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)((float)HIWORD(*v7) * 65536.0) + (float)(uint16_t)*v7;
  a5[4] = (float)((float)HIWORD(v7[1]) * 65536.0) + (float)(uint16_t)v7[1];
  v8 = (uint32_t *)(a1 + a4[2] * a3);
  a5[6] = (float)((float)HIWORD(*v8) * 65536.0) + (float)(uint16_t)*v8;
  a5[7] = (float)((float)HIWORD(v8[1]) * 65536.0) + (float)(uint16_t)v8[1];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1FE00  (binary VA: 0xf1fe00)
// Original: sub_F1FE00
// ----------------------------------------------------------------------------
uint32_t * sub_F1FE00(int a1, int a2, uint16_t a3, uint16_t *a4, uint32_t *a5)
{
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;

  v6 = (uint32_t *)(a1 + a3 * *a4);
  *a5 = *v6;
  a5[1] = v6[1];
  v7 = (uint32_t *)(a1 + a3 * a4[1]);
  a5[3] = *v7;
  a5[4] = v7[1];
  v8 = (uint32_t *)(a1 + a4[2] * a3);
  a5[6] = *v8;
  a5[7] = v8[1];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1FE70  (binary VA: 0xf1fe70)
// Original: sub_F1FE70
// ----------------------------------------------------------------------------
float * sub_F1FE70(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  char *v6;
  char *v7;
  char *v8;

  v6 = (char *)(a1 + a3 * *a4);
  *a5 = (float)*v6;
  a5[1] = (float)v6[1];
  a5[2] = (float)v6[2];
  v7 = (char *)(a1 + a3 * a4[1]);
  a5[3] = (float)*v7;
  a5[4] = (float)v7[1];
  a5[5] = (float)v7[2];
  v8 = (char *)(a1 + a4[2] * a3);
  a5[6] = (float)*v8;
  a5[7] = (float)v8[1];
  a5[8] = (float)v8[2];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F1FF30  (binary VA: 0xf1ff30)
// Original: sub_F1FF30
// ----------------------------------------------------------------------------
float * sub_F1FF30(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint8_t *v6;
  uint8_t *v7;
  uint8_t *v8;

  v6 = (uint8_t *)(a1 + a3 * *a4);
  *a5 = (float)((float)0 * 65536.0) + (float)*v6;
  a5[1] = (float)((float)0 * 65536.0) + (float)v6[1];
  a5[2] = (float)((float)0 * 65536.0) + (float)v6[2];
  v7 = (uint8_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)((float)0 * 65536.0) + (float)*v7;
  a5[4] = (float)((float)0 * 65536.0) + (float)v7[1];
  a5[5] = (float)((float)0 * 65536.0) + (float)v7[2];
  v8 = (uint8_t *)(a1 + a4[2] * a3);
  a5[6] = (float)((float)0 * 65536.0) + (float)*v8;
  a5[7] = (float)((float)0 * 65536.0) + (float)v8[1];
  a5[8] = (float)((float)0 * 65536.0) + (float)v8[2];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F20090  (binary VA: 0xf20090)
// Original: sub_F20090
// ----------------------------------------------------------------------------
float * sub_F20090(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  int16_t *v6;
  int16_t *v7;
  int16_t *v8;

  v6 = (int16_t *)(a1 + a3 * *a4);
  *a5 = (float)*v6;
  a5[1] = (float)v6[1];
  a5[2] = (float)v6[2];
  v7 = (int16_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)*v7;
  a5[4] = (float)v7[1];
  a5[5] = (float)v7[2];
  v8 = (int16_t *)(a1 + a4[2] * a3);
  a5[6] = (float)*v8;
  a5[7] = (float)v8[1];
  a5[8] = (float)v8[2];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F20150  (binary VA: 0xf20150)
// Original: sub_F20150
// ----------------------------------------------------------------------------
float * sub_F20150(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint16_t *v6;
  uint16_t *v7;
  uint16_t *v8;

  v6 = (uint16_t *)(a1 + a3 * *a4);
  *a5 = (float)((float)0 * 65536.0) + (float)*v6;
  a5[1] = (float)((float)0 * 65536.0) + (float)v6[1];
  a5[2] = (float)((float)0 * 65536.0) + (float)v6[2];
  v7 = (uint16_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)((float)0 * 65536.0) + (float)*v7;
  a5[4] = (float)((float)0 * 65536.0) + (float)v7[1];
  a5[5] = (float)((float)0 * 65536.0) + (float)v7[2];
  v8 = (uint16_t *)(a1 + a4[2] * a3);
  a5[6] = (float)((float)0 * 65536.0) + (float)*v8;
  a5[7] = (float)((float)0 * 65536.0) + (float)v8[1];
  a5[8] = (float)((float)0 * 65536.0) + (float)v8[2];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F202B0  (binary VA: 0xf202b0)
// Original: sub_F202B0
// ----------------------------------------------------------------------------
float * sub_F202B0(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  int *v6;
  int *v7;
  int *v8;

  v6 = (int *)(a1 + a3 * *a4);
  *a5 = (float)*v6;
  a5[1] = (float)v6[1];
  a5[2] = (float)v6[2];
  v7 = (int *)(a1 + a3 * a4[1]);
  a5[3] = (float)*v7;
  a5[4] = (float)v7[1];
  a5[5] = (float)v7[2];
  v8 = (int *)(a1 + a4[2] * a3);
  a5[6] = (float)*v8;
  a5[7] = (float)v8[1];
  a5[8] = (float)v8[2];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F20340  (binary VA: 0xf20340)
// Original: sub_F20340
// ----------------------------------------------------------------------------
float * sub_F20340(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;

  v6 = (uint32_t *)(a1 + a3 * *a4);
  *a5 = (float)((float)HIWORD(*v6) * 65536.0) + (float)(uint16_t)*v6;
  a5[1] = (float)((float)HIWORD(v6[1]) * 65536.0) + (float)(uint16_t)v6[1];
  a5[2] = (float)((float)HIWORD(v6[2]) * 65536.0) + (float)(uint16_t)v6[2];
  v7 = (uint32_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)((float)HIWORD(*v7) * 65536.0) + (float)(uint16_t)*v7;
  a5[4] = (float)((float)HIWORD(v7[1]) * 65536.0) + (float)(uint16_t)v7[1];
  a5[5] = (float)((float)HIWORD(v7[2]) * 65536.0) + (float)(uint16_t)v7[2];
  v8 = (uint32_t *)(a1 + a4[2] * a3);
  a5[6] = (float)((float)HIWORD(*v8) * 65536.0) + (float)(uint16_t)*v8;
  a5[7] = (float)((float)HIWORD(v8[1]) * 65536.0) + (float)(uint16_t)v8[1];
  a5[8] = (float)((float)HIWORD(v8[2]) * 65536.0) + (float)(uint16_t)v8[2];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F204C0  (binary VA: 0xf204c0)
// Original: sub_F204C0
// ----------------------------------------------------------------------------
uint32_t * sub_F204C0(int a1, int a2, uint16_t a3, uint16_t *a4, uint32_t *a5)
{
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;

  v6 = (uint32_t *)(a1 + a3 * *a4);
  *a5 = *v6;
  a5[1] = v6[1];
  a5[2] = v6[2];
  v7 = (uint32_t *)(a1 + a3 * a4[1]);
  a5[3] = *v7;
  a5[4] = v7[1];
  a5[5] = v7[2];
  v8 = (uint32_t *)(a1 + a4[2] * a3);
  a5[6] = *v8;
  a5[7] = v8[1];
  a5[8] = v8[2];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F20540  (binary VA: 0xf20540)
// Original: sub_F20540
// ----------------------------------------------------------------------------
float * sub_F20540(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  char *v6;
  char *v7;
  char *v8;

  v6 = (char *)(a1 + a3 * *a4);
  *a5 = (float)*v6;
  a5[1] = (float)v6[1];
  a5[2] = (float)v6[2];
  a5[3] = (float)v6[3];
  v7 = (char *)(a1 + a3 * a4[1]);
  a5[3] = (float)*v7;
  a5[4] = (float)v7[1];
  a5[5] = (float)v7[2];
  a5[6] = (float)v7[3];
  v8 = (char *)(a1 + a4[2] * a3);
  a5[6] = (float)*v8;
  a5[7] = (float)v8[1];
  a5[8] = (float)v8[2];
  a5[9] = (float)v8[3];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F20610  (binary VA: 0xf20610)
// Original: sub_F20610
// ----------------------------------------------------------------------------
float * sub_F20610(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint8_t *v6;
  uint8_t *v7;
  uint8_t *v8;

  v6 = (uint8_t *)(a1 + a3 * *a4);
  *a5 = (float)((float)0 * 65536.0) + (float)*v6;
  a5[1] = (float)((float)0 * 65536.0) + (float)v6[1];
  a5[2] = (float)((float)0 * 65536.0) + (float)v6[2];
  a5[3] = (float)((float)0 * 65536.0) + (float)v6[3];
  v7 = (uint8_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)((float)0 * 65536.0) + (float)*v7;
  a5[4] = (float)((float)0 * 65536.0) + (float)v7[1];
  a5[5] = (float)((float)0 * 65536.0) + (float)v7[2];
  a5[6] = (float)((float)0 * 65536.0) + (float)v7[3];
  v8 = (uint8_t *)(a1 + a4[2] * a3);
  a5[6] = (float)((float)0 * 65536.0) + (float)*v8;
  a5[7] = (float)((float)0 * 65536.0) + (float)v8[1];
  a5[8] = (float)((float)0 * 65536.0) + (float)v8[2];
  a5[9] = (float)((float)0 * 65536.0) + (float)v8[3];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F207C0  (binary VA: 0xf207c0)
// Original: sub_F207C0
// ----------------------------------------------------------------------------
float * sub_F207C0(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  int16_t *v6;
  int16_t *v7;
  int16_t *v8;

  v6 = (int16_t *)(a1 + a3 * *a4);
  *a5 = (float)*v6;
  a5[1] = (float)v6[1];
  a5[2] = (float)v6[2];
  a5[3] = (float)v6[3];
  v7 = (int16_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)*v7;
  a5[4] = (float)v7[1];
  a5[5] = (float)v7[2];
  a5[6] = (float)v7[3];
  v8 = (int16_t *)(a1 + a4[2] * a3);
  a5[6] = (float)*v8;
  a5[7] = (float)v8[1];
  a5[8] = (float)v8[2];
  a5[9] = (float)v8[3];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F20890  (binary VA: 0xf20890)
// Original: sub_F20890
// ----------------------------------------------------------------------------
float * sub_F20890(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint16_t *v6;
  uint16_t *v7;
  uint16_t *v8;

  v6 = (uint16_t *)(a1 + a3 * *a4);
  *a5 = (float)((float)0 * 65536.0) + (float)*v6;
  a5[1] = (float)((float)0 * 65536.0) + (float)v6[1];
  a5[2] = (float)((float)0 * 65536.0) + (float)v6[2];
  a5[3] = (float)((float)0 * 65536.0) + (float)v6[3];
  v7 = (uint16_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)((float)0 * 65536.0) + (float)*v7;
  a5[4] = (float)((float)0 * 65536.0) + (float)v7[1];
  a5[5] = (float)((float)0 * 65536.0) + (float)v7[2];
  a5[6] = (float)((float)0 * 65536.0) + (float)v7[3];
  v8 = (uint16_t *)(a1 + a4[2] * a3);
  a5[6] = (float)((float)0 * 65536.0) + (float)*v8;
  a5[7] = (float)((float)0 * 65536.0) + (float)v8[1];
  a5[8] = (float)((float)0 * 65536.0) + (float)v8[2];
  a5[9] = (float)((float)0 * 65536.0) + (float)v8[3];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F20A40  (binary VA: 0xf20a40)
// Original: sub_F20A40
// ----------------------------------------------------------------------------
float * sub_F20A40(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  int *v6;
  int *v7;
  int *v8;

  v6 = (int *)(a1 + a3 * *a4);
  *a5 = (float)*v6;
  a5[1] = (float)v6[1];
  a5[2] = (float)v6[2];
  a5[3] = (float)v6[3];
  v7 = (int *)(a1 + a3 * a4[1]);
  a5[3] = (float)*v7;
  a5[4] = (float)v7[1];
  a5[5] = (float)v7[2];
  a5[6] = (float)v7[3];
  v8 = (int *)(a1 + a4[2] * a3);
  a5[6] = (float)*v8;
  a5[7] = (float)v8[1];
  a5[8] = (float)v8[2];
  a5[9] = (float)v8[3];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F20AF0  (binary VA: 0xf20af0)
// Original: sub_F20AF0
// ----------------------------------------------------------------------------
float * sub_F20AF0(int a1, int a2, uint16_t a3, uint16_t *a4, float *a5)
{
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;

  v6 = (uint32_t *)(a1 + a3 * *a4);
  *a5 = (float)((float)HIWORD(*v6) * 65536.0) + (float)(uint16_t)*v6;
  a5[1] = (float)((float)HIWORD(v6[1]) * 65536.0) + (float)(uint16_t)v6[1];
  a5[2] = (float)((float)HIWORD(v6[2]) * 65536.0) + (float)(uint16_t)v6[2];
  a5[3] = (float)((float)HIWORD(v6[3]) * 65536.0) + (float)(uint16_t)v6[3];
  v7 = (uint32_t *)(a1 + a3 * a4[1]);
  a5[3] = (float)((float)HIWORD(*v7) * 65536.0) + (float)(uint16_t)*v7;
  a5[4] = (float)((float)HIWORD(v7[1]) * 65536.0) + (float)(uint16_t)v7[1];
  a5[5] = (float)((float)HIWORD(v7[2]) * 65536.0) + (float)(uint16_t)v7[2];
  a5[6] = (float)((float)HIWORD(v7[3]) * 65536.0) + (float)(uint16_t)v7[3];
  v8 = (uint32_t *)(a1 + a4[2] * a3);
  a5[6] = (float)((float)HIWORD(*v8) * 65536.0) + (float)(uint16_t)*v8;
  a5[7] = (float)((float)HIWORD(v8[1]) * 65536.0) + (float)(uint16_t)v8[1];
  a5[8] = (float)((float)HIWORD(v8[2]) * 65536.0) + (float)(uint16_t)v8[2];
  a5[9] = (float)((float)HIWORD(v8[3]) * 65536.0) + (float)(uint16_t)v8[3];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F20CC0  (binary VA: 0xf20cc0)
// Original: sub_F20CC0
// ----------------------------------------------------------------------------
uint32_t * sub_F20CC0(int a1, int a2, uint16_t a3, uint16_t *a4, uint32_t *a5)
{
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;

  v6 = (uint32_t *)(a1 + a3 * *a4);
  *a5 = *v6;
  a5[1] = v6[1];
  a5[2] = v6[2];
  a5[3] = v6[3];
  v7 = (uint32_t *)(a1 + a3 * a4[1]);
  a5[3] = *v7;
  a5[4] = v7[1];
  a5[5] = v7[2];
  a5[6] = v7[3];
  v8 = (uint32_t *)(a1 + a4[2] * a3);
  a5[6] = *v8;
  a5[7] = v8[1];
  a5[8] = v8[2];
  a5[9] = v8[3];
  return a5;
}

// ----------------------------------------------------------------------------
// Function: sub_F21440  (binary VA: 0xf21440)
// Original: sub_F21440
// ----------------------------------------------------------------------------
int sub_F21440(int a1, unsigned int a2, __m128d a3)
{
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  double v9; // xmm1_8
  __m128d v10;
  __m128d v11;
  __m128d v12;
  size_t v13;
  int v14;

  v13 = 4 * a2 + 4;
  result = sub_4EBDC0(v13);
  if ( result != result + v13 )
  {
    v6 = (uint32_t *)result;
    do
    {
      if ( v6 != nullptr )
        *v6 = 0;
      ++v6;
    }
    while ( (uint32_t *)(result + v13) != v6 );
  }
  v7 = *(uint32_t *)(a1 + 20);
  if ( v7 != 0 )
  {
    *(uint32_t *)(result + 4 * a2) = *(uint32_t *)(v7 + 4 * *(uint32_t *)(a1 + 4));
    v14 = result;
    gll_operator_delete_arr(*(uint32_t *)(a1 + 20));
    result = v14;
  }
  v8 = 0;
  *(uint32_t *)(a1 + 4) = a2;
  *(uint32_t *)(a1 + 20) = result;
  if ( result == 0 )
    goto LABEL_11;
  g4_m128_lane_ref<double>(a3, 0) = (double)a2 * *(float *)(a1 + 12);
  v9 = fabs(g4_m128_lane_ref<double>(a3, 0));
  if ( v9 < 4503599627370496.0 )
  {
    v8 = -1;
    *(uint64_t *)&g4_m128_lane_ref<double>(v10, 0) = COERCE_UNSIGNED_INT64(v9 + 4503599627370496.0 - 4503599627370496.0)
                                 | *(uint64_t *)&g4_m128_lane_ref<double>(a3, 0) & 0x8000000000000000LL;
    g4_m128_lane_ref<double>(a3, 0) = g4_m128_lane_ref<double>(v10, 0)
                    - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(a3, v10), 0) & 0xBFF0000000000000LL);
    if ( g4_m128_lane_ref<double>(a3, 0) >= 4294967295.0 )
      goto LABEL_11;
  }
  else
  {
    v8 = -1;
    if ( g4_m128_lane_ref<double>(a3, 0) >= 4294967295.0 )
    {
LABEL_11:
      *(uint32_t *)(a1 + 16) = v8;
      return result;
    }
  }
  v11 = g4_to_m128d(0);
  g4_m128_lane_ref<double>(v11, 0) = g4_m128_lane_ref<double>(a3, 0);
  v12 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v11);
  *(uint32_t *)(a1 + 16) = _mm_cvtsi128_si32(
                           _mm_xor_si128(
                             _mm_cvttpd_epi32(_mm_sub_pd(v11, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v12))),
                             _mm_slli_epi32(G4_BITCAST<__m128i>(v12), 0x1Fu)));
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F216E0  (binary VA: 0xf216e0)
// Original: sub_F216E0
// ----------------------------------------------------------------------------
int sub_F216E0(int a1, unsigned int a2, int a3, int a4, float *a5)
{
  unsigned int v5;
  int v6;
  float *v7;
  unsigned int i;
  int v9;
  int result;
  float *v11;
  float v12; // xmm0_4
  int j;

  v5 = 3;
  if ( a2 <= 3 )
    v5 = a2;
  v6 = 0;
  v7 = a5 + 3;
  if ( v5 == 0 )
    goto LABEL_6;
  do
  {
    a5[v6] = *(float *)(a1 + 4 * v6);
    v7[v6] = *(float *)(a1 + 4 * v6);
    ++v6;
  }
  while ( v6 != v5 );
  if ( v5 <= 2 )
  {
LABEL_6:
    for ( i = v5; i <= 2; ++i )
    {
      a5[i] = 0.0;
      v7[i] = 0.0;
    }
  }
  v9 = a1 + a3;
  result = a1 + a3 + a3 * (a4 - 1);
  for ( j = result; j != v9; v9 += a3 )
  {
    if ( v5 != 0 )
    {
      v11 = a5;
      for ( result = 0; result != v5; ++result )
      {
        v12 = *(float *)(v9 + 4 * result);
        if ( v12 < *v11 )
        {
          *v11 = v12;
          v12 = *(float *)(v9 + 4 * result);
        }
        if ( v12 > v11[3] )
          v11[3] = v12;
        ++v11;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F218E0  (binary VA: 0xf218e0)
// Original: sub_F218E0
// ----------------------------------------------------------------------------
uint32_t * sub_F218E0(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v10;

  v10 = a1;
  if ( a2 != a1 )
  {
    v3 = a1 + 4;
    v4 = a3 + 4;
    v5 = a1 + 6;
    v6 = a3 + 6;
    v7 = a3;
    do
    {
      if ( v7 != nullptr )
      {
        *v7 = *a1;
        v7[1] = a1[1];
        v7[2] = a1[2];
        *(v4 - 1) = *(v3 - 1);
        *v4 = *v3;
        v4[1] = v3[1];
        *v6 = *v5;
        v6[1] = v5[1];
        v6[2] = v5[2];
      }
      a1 += 9;
      v7 += 9;
      v3 += 9;
      v4 += 9;
      v5 += 9;
      v6 += 9;
    }
    while ( a1 != a2 );
    a3 += ((unsigned int)((char *)a1 - (char *)(v10 + 9)) >> 2) + 9;
  }
  return a3;
}

// ----------------------------------------------------------------------------
// Function: sub_F219C0  (binary VA: 0xf219c0)
// Original: sub_F219C0
// ----------------------------------------------------------------------------
bool sub_F219C0(float *a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm3_4

  v4 = a3[1];
  v5 = *a4 - *a3;
  v6 = a3[2];
  v7 = a4[1] - v4;
  v8 = a4[2] - v6;
  return (float)((float)((float)((float)((float)((float)(*a2 - *a3) * v8) - (float)((float)(a2[2] - v6) * v5))
                               * (float)((float)((float)(*a1 - *a3) * v8) - (float)((float)(a1[2] - v6) * v5)))
                       + (float)((float)((float)((float)(a2[2] - v6) * v7) - (float)((float)(a2[1] - v4) * v8))
                               * (float)((float)((float)(a1[2] - v6) * v7) - (float)(v8 * (float)(a1[1] - v4)))))
               + (float)((float)((float)((float)(a2[1] - v4) * v5) - (float)((float)(*a2 - *a3) * v7))
                       * (float)((float)(v5 * (float)(a1[1] - v4)) - (float)(v7 * (float)(*a1 - *a3))))) >= 0.0;
}

// ----------------------------------------------------------------------------
// Function: sub_F21AE0  (binary VA: 0xf21ae0)
// Original: sub_F21AE0
// ----------------------------------------------------------------------------
int sub_F21AE0(unsigned int a1, float a2, __m128d a3)
{
  __m128d v3;
  __m128d v4;
  unsigned int v5;
  __m128d v6;
  __m128d v7;
  void **v8;
  int v9;
  int v10;
  unsigned int *v11;
  int v13;
  int v14;

  g4_m128_lane_ref<double>(a3, 0) = (double)a1 / a2;
  v3 = _mm_and_pd(a3, g4_to_m128d(0x7FFFFFFFFFFFFFFFuLL));
  if ( g4_m128_lane_ref<double>(v3, 0) < 4503599627370496.0 )
  {
    g4_m128_lane_ref<double>(v3, 0) = g4_m128_lane_ref<double>(v3, 0) + 4503599627370496.0 - 4503599627370496.0;
    v4 = _mm_or_pd(v3, _mm_andn_pd(g4_to_m128d(0x7FFFFFFFFFFFFFFFuLL), a3));
    g4_m128_lane_ref<double>(a3, 0) = g4_m128_lane_ref<double>(v4, 0)
                    - COERCE_DOUBLE(g4_m128_lane<uint64_t>(_mm_cmpgt_sd(v4, a3), 0) & 0x3FF0000000000000LL);
  }
  v5 = 0;
  if ( g4_m128_lane_ref<double>(a3, 0) < 4294967295.0 )
  {
    v6 = g4_to_m128d(0);
    g4_m128_lane_ref<double>(v6, 0) = g4_m128_lane_ref<double>(a3, 0);
    v7 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v6);
    v5 = _mm_cvtsi128_si32(
           _mm_xor_si128(
             _mm_cvttpd_epi32(_mm_sub_pd(v6, _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v7))),
             _mm_slli_epi32(G4_BITCAST<__m128i>(v7), 0x1Fu)))
       + 1;
  }
  v14 = 38;
  v8 = (void **)&unk_1C81A60;
  v9 = 38;
  while ( 1 )
  {
    v10 = v9 >> 1;
    v11 = (unsigned int *)&v8[v10];
    if ( *v11 >= v5 )
      break;
    v13 = v10;
    v10 = v14;
LABEL_14:
    v8 = (void **)(v11 + 1);
    v9 = v10 - v13 - 1;
    v14 = v9;
    if ( v9 <= 0 )
      goto LABEL_11;
  }
  while ( v10 > 0 )
  {
    v13 = v10 >> 1;
    v11 = (unsigned int *)&v8[v10 >> 1];
    if ( *v11 < v5 )
      goto LABEL_14;
    v10 >>= 1;
  }
LABEL_11:
  if ( v8 == (void **)(intptr_t)(jpt_628CA1) )
    v8 = (void **)&unk_1C81AF4;
  return (int)(uintptr_t)(*v8);
}

// ----------------------------------------------------------------------------
// Function: sub_F21C10  (binary VA: 0xf21c10)
// Original: sub_F21C10
// ----------------------------------------------------------------------------
unsigned int sub_F21C10(char *a1, char *a2, uint32_t *a3)
{
  bool v4;
  unsigned int result;
  char *v6;
  uint32_t *v7;

  v4 = a2 == a1;
  result = (unsigned int)(uintptr_t)(a3);
  if ( !v4 )
  {
    v6 = a1;
    v7 = a3;
    do
    {
      if ( v7 != nullptr )
      {
        *v7 = *(uint32_t *)v6;
        v7[1] = *((uint32_t *)v6 + 1);
        v7[2] = *((uint32_t *)v6 + 2);
        v7[3] = *((uint32_t *)v6 + 3);
        v7[4] = *((uint32_t *)v6 + 4);
      }
      v6 += 20;
      v7 += 5;
    }
    while ( v6 != a2 );
    return (unsigned int)(uintptr_t)(&a3[((unsigned int)(v6 - (a1 + 20)) >> 2) + 5]);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F21C70  (binary VA: 0xf21c70)
// Original: sub_F21C70
// ----------------------------------------------------------------------------
int ** sub_F21C70(int **a1, uint32_t *a2, unsigned int a3, const char ***a4)
{
  int *v4;
  unsigned int v5;
  int *v6;
  int v7;
  unsigned int v8;
  int v9;
  int v11;
  const char **v12;
  const char *v13;
  const char *s2;
  const char *s1;
  bool v16;

  v4 = nullptr;
  v5 = a2[1];
  if ( a2[2] != 0 )
  {
    v6 = *(int **)(a2[5] + 4 * (a3 % v5));
    if ( v6 != nullptr )
    {
      v7 = *v6;
      if ( v7 != 0 )
        v4 = (int *)(v7 - 4);
    }
  }
  while ( 1 )
  {
    if ( v4 == nullptr )
    {
LABEL_9:
      *a1 = nullptr;
      return a1;
    }
    v8 = v4[2];
    if ( a3 == v8 )
      break;
    if ( a3 % v5 != v8 % v5 )
      goto LABEL_9;
LABEL_8:
    v9 = v4[1];
    if ( v9 == 0 )
      goto LABEL_9;
    v4 = (int *)(v9 - 4);
  }
  v11 = *v4;
  v12 = *a4;
  v13 = (*a4)[1];
  if ( v13 == nullptr )
  {
    if ( *(uint32_t *)(v11 + 4) != 0 )
    {
      s2 = (const char *)(v11 + 4);
      goto LABEL_13;
    }
LABEL_18:
    s2 = *(const char **)v11;
    if ( v13 != nullptr )
    {
      s1 = (const char *)(v12 + 1);
      goto LABEL_14;
    }
LABEL_13:
    s1 = *v12;
LABEL_14:
    v16 = strcmp(s1, s2) == 0;
    goto LABEL_15;
  }
  if ( *(uint32_t *)(v11 + 4) == 0 )
    goto LABEL_18;
  v16 = v12 == (const char **)v11;
LABEL_15:
  if ( !v16 )
    goto LABEL_8;
  *a1 = v4;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_F21D50  (binary VA: 0xf21d50)
// Original: sub_F21D50
// ----------------------------------------------------------------------------
size_t sub_F21D50(int *a1, uint32_t *a2)
{
  char *src;
  int v4;
  size_t result;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  int v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  int v15;
  unsigned int v17;
  int v18;
  size_t v19;

  src = (char *)a1[1];
  if ( src == (char *)a1[2] )
  {
    v7 = (int)(uintptr_t)(&src[-*a1]) >> 2;
    v19 = 4;
    if ( v7 != 0 )
    {
      v19 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v15 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v15 = -4;
        v19 = v15;
      }
    }
    v18 = sub_4EBDC0(v19);
    v17 = v18 + 4;
    v8 = (uint32_t *)(v18 + 4 * v7);
    if ( v8 != nullptr )
      *v8 = *a2;
    v9 = *a1;
    if ( src != (char *)*a1 )
    {
      v10 = (char *)*a1;
      v11 = (uint32_t *)v18;
      do
      {
        if ( v11 != nullptr )
          *v11 = *(uint32_t *)v10;
        v10 += 4;
        ++v11;
      }
      while ( src != v10 );
      v17 = v18 + 4 * ((unsigned int)(uintptr_t)(&src[-v9 - 4]) >> 2) + 8;
    }
    v12 = (char *)a1[1];
    if ( src != v12 )
    {
      v13 = src;
      v14 = (uint32_t *)v17;
      do
      {
        if ( v14 != nullptr )
          *v14 = *(uint32_t *)v13;
        v13 += 4;
        ++v14;
      }
      while ( v12 != v13 );
      v17 += 4 * ((unsigned int)(v12 - (src + 4)) >> 2) + 4;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v18;
    a1[1] = v17;
    a1[2] = v19 + v18;
    return v19 + v18;
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *(uint32_t *)src = *((uint32_t *)src - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    result = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a2;
    if ( result != 0 )
      result = (size_t)memmove((void *)(v4 - 4 * result), src, 4 * result);
    *(uint32_t *)src = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F21EE0  (binary VA: 0xf21ee0)
// Original: sub_F21EE0
// ----------------------------------------------------------------------------
int sub_F21EE0(int *a1, int16_t *a2)
{
  int v3;
  int v4;
  int16_t v5; // bp
  int v6;
  int result;
  int v8;
  int v9;
  unsigned int v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;
  int16_t v20;
  unsigned int v21;
  int v22;
  size_t v23;

  v3 = a1[1];
  if ( v3 == a1[2] )
  {
    v10 = (v3 - *a1) >> 2;
    v23 = 4;
    if ( v10 != 0 )
    {
      v23 = 0xFFFFFFFC;
      if ( v10 <= 2 * v10 )
      {
        v18 = 8 * v10;
        if ( 2 * v10 > 0x3FFFFFFF )
          v18 = -4;
        v23 = v18;
      }
    }
    v22 = sub_4EBDC0(v23);
    v21 = v22 + 4;
    v11 = (uint32_t *)(v22 + 4 * v10);
    if ( v11 != nullptr )
      *v11 = *(uint32_t *)a2;
    v12 = *a1;
    if ( v3 != *a1 )
    {
      v13 = (uint32_t *)*a1;
      v14 = (uint32_t *)v22;
      do
      {
        if ( v14 != nullptr )
          *v14 = *v13;
        ++v13;
        ++v14;
      }
      while ( (uint32_t *)v3 != v13 );
      v21 = v22 + 4 * ((unsigned int)(v3 - (v12 + 4)) >> 2) + 8;
    }
    v15 = (uint32_t *)a1[1];
    if ( (uint32_t *)v3 != v15 )
    {
      v16 = (uint32_t *)v3;
      v17 = (uint32_t *)v21;
      do
      {
        if ( v17 != nullptr )
          *v17 = *v16;
        ++v16;
        ++v17;
      }
      while ( v15 != v16 );
      v21 += 4 * (((unsigned int)(uintptr_t)(v15) - v3 - 4) >> 2) + 4;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v22;
    a1[1] = v21;
    a1[2] = v23 + v22;
    return v23 + v22;
  }
  else
  {
    v4 = 0;
    if ( v3 != 0 )
    {
      *(uint32_t *)v3 = *(uint32_t *)(v3 - 4);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    v5 = a2[1];
    v20 = *a2;
    v6 = v4 - 4;
    result = (v4 - 4 - v3) >> 2;
    if ( result > 0 )
    {
      v8 = -4 * result + v4;
      v9 = -4 * result + v6;
      do
      {
        *(uint32_t *)(v8 + 4 * result - 4) = *(uint32_t *)(v9 + 4 * result - 4);
        --result;
      }
      while ( result != 0 );
    }
    *(uint16_t *)(v3 + 2) = v5;
    *(uint16_t *)v3 = v20;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F22070  (binary VA: 0xf22070)
// Original: sub_F22070
// ----------------------------------------------------------------------------
void sub_F22070(char a1)
{
  uint32_t *v1;
  int v2;
  int *v3;
  int v4;
  int i;
  int v6;
  void **v7;
  int v8;
  int v9;
  void **v10;
  void *v11;
  int v12;

  if ( a1 != 0 )
  {
    v6 = opNew(0x60u);
    *(uint8_t *)v6 = 0;
    v7 = (void **)&unk_1C81A60;
    v8 = 38;
    while ( 1 )
    {
      v9 = v8 >> 1;
      v10 = &v7[v8 >> 1];
      if ( (unsigned int)(uintptr_t)(*v10) > 0xA )
        break;
      v12 = v8 >> 1;
      v9 = v8;
LABEL_22:
      v7 = v10 + 1;
      v8 = v9 - v12 - 1;
      if ( v8 <= 0 )
        goto LABEL_19;
    }
    while ( v9 > 0 )
    {
      v12 = v9 >> 1;
      v10 = &v7[v9 >> 1];
      if ( (unsigned int)(uintptr_t)(*v10) <= 0xA )
        goto LABEL_22;
      v9 >>= 1;
    }
LABEL_19:
    if ( v7 == (void **)jpt_628CA1 )
      v7 = (void **)&unk_1C81AF4;
    v11 = *v7;
    *(uint32_t *)(v6 + 8) = 0;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v11);
    *(uint32_t *)(v6 + 12) = 1065353216;
    *(uint32_t *)(v6 + 16) = 0;
    *(uint32_t *)(v6 + 20) = 0;
    glf::ReadWriteSpinLock::ReadWriteSpinLock((glf::ReadWriteSpinLock::Self *)(v6 + 24));
    dword_20E1AD0 = v6;
  }
  else
  {
    v1 = (uint32_t *)dword_20E1AD0;
    if ( dword_20E1AD0 != 0 )
    {
      v2 = *(uint32_t *)(dword_20E1AD0 + 20);
      if ( v2 != 0 )
      {
        if ( *(uint32_t *)(dword_20E1AD0 + 8) != 0 )
        {
          v3 = (int *)(v2 + 4 * *(uint32_t *)(dword_20E1AD0 + 4));
          v4 = *v3;
          if ( *v3 != 0 )
            goto LABEL_7;
          for ( i = 0; ; i = v4 - 4 )
          {
            *v3 = *(uint32_t *)(i + 4);
            gll_operator_delete_arr(i);
            --v1[2];
            v4 = *v3;
            if ( *v3 == 0 )
              break;
LABEL_7:
            ;
          }
          v2 = v1[5];
        }
        gll_operator_delete_arr(v2);
        v1[5] = 0;
        v1[4] = 0;
      }
      opDelete(v1);
    }
    dword_20E1AD0 = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_F221C0  (binary VA: 0xf221c0)
// Original: sub_F221C0
// ----------------------------------------------------------------------------
int sub_F221C0(int *a1, uint32_t *a2)
{
  unsigned int v4;
  char *v5;
  uint32_t *v6;
  int *v7;
  int result;
  int v9;
  int v10;
  char *dest;
  const void *src;
  int v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int *v21;
  unsigned int v22;
  unsigned int v23;
  int *v24;
  char *v25;
  int v26;

  v4 = a1[1];
  v5 = (char *)a1[9];
  if ( v4 - ((int)(uintptr_t)(&v5[-*a1]) >> 2) <= 1 )
  {
    v24 = (int *)a1[5];
    v26 = ((v5 - (char *)v24) >> 2) + 1;
    v20 = ((v5 - (char *)v24) >> 2) + 2;
    if ( v4 > 2 * v20 )
    {
      v17 = v5 + 4 - (char *)v24;
      v14 = (int *)(*a1 + 4 * ((v4 - v20) >> 1));
      if ( v24 <= v14 )
      {
        v19 = v17 >> 2;
        if ( v19 != 0 )
        {
          v23 = *a1 + 4 * ((v4 - v20) >> 1);
          memmove(&v14[v26 - v19], v24, 4 * v19);
          v14 = (int *)v23;
        }
      }
      else
      {
        v18 = v17 >> 2;
        if ( v18 != 0 )
        {
          v22 = *a1 + 4 * ((v4 - v20) >> 1);
          memmove(v14, v24, 4 * v18);
          v14 = (int *)v22;
        }
      }
    }
    else
    {
      v9 = 1;
      if ( v4 != 0 )
        v9 = v4;
      v10 = v4 + v9 + 2;
      v25 = (char *)sub_4EBDC0(4 * v10);
      dest = &v25[4 * ((unsigned int)(v10 - v20) >> 1)];
      src = (const void *)a1[5];
      v13 = (a1[9] + 4 - (int)(uintptr_t)(src)) >> 2;
      if ( v13 != 0 )
      {
        memmove(dest, src, 4 * v13);
        dest = &v25[4 * ((unsigned int)(v10 - v20) >> 1)];
      }
      v21 = (int *)dest;
      gll_operator_delete_arr(*a1);
      a1[1] = v10;
      *a1 = (int)(uintptr_t)(v25);
      v14 = v21;
    }
    a1[5] = (int)(uintptr_t)(v14);
    v15 = *v14;
    a1[3] = *v14;
    a1[4] = v15 + 512;
    v5 = (char *)&v14[v26 - 1];
    a1[9] = (int)(uintptr_t)(v5);
    v16 = *(uint32_t *)v5;
    a1[7] = *(uint32_t *)v5;
    a1[8] = v16 + 512;
  }
  *((uint32_t *)v5 + 1) = sub_4EBDC0(0x200u);
  v6 = (uint32_t *)a1[6];
  if ( v6 != nullptr )
    *v6 = *a2;
  v7 = (int *)(a1[9] + 4);
  a1[9] = (int)(uintptr_t)(v7);
  result = *v7;
  a1[7] = *v7;
  a1[6] = result;
  a1[8] = result + 512;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F223C0  (binary VA: 0xf223c0)
// Original: sub_F223C0
// ----------------------------------------------------------------------------
int * sub_F223C0(int *a1, int a2, int a3, int a4, int *a5)
{
  int v7;
  int v8;
  int v9;
  int v11;
  char v12;
  int v13;

  v7 = a2 + 4;
  v12 = 1;
  v11 = v7;
  if ( a3 == 0 && a4 != v7 )
    v12 = *a5 < *(uint32_t *)(a4 + 16);
  v8 = opNew(0x18u);
  if ( v8 != -16 )
  {
    v9 = *a5;
    *(uint32_t *)(v8 + 20) = a5[1];
    *(uint32_t *)(v8 + 16) = v9;
  }
  v13 = v8;
  sub_1904970(v12, v8, a4, v11);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_F22480  (binary VA: 0xf22480)
// Original: sub_F22480
// ----------------------------------------------------------------------------
int sub_F22480(int *a1, int a2, int *a3)
{
  uint32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int64_t v10; // xmm0_8
  uint32_t *v11;
  int v13;
  unsigned int v14;
  int v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  int v28;

  v4 = (uint32_t *)a1[1];
  if ( v4 != (uint32_t *)a1[2] )
  {
    v5 = 0;
    if ( v4 != nullptr )
    {
      *v4 = *(v4 - 4);
      v4[1] = *(v4 - 3);
      v4[2] = *(v4 - 2);
      v4[3] = *(v4 - 1);
      v5 = a1[1];
    }
    v6 = v5 + 16;
    v7 = (uint32_t *)(v5 - 16);
    a1[1] = v6;
    v8 = ((int)(uintptr_t)(v7) - a2) >> 4;
    v25 = a3[1];
    v9 = *a3;
    v10 = *((uint64_t *)a3 + 1);
    v11 = v7;
    if ( v8 > 0 )
    {
      while ( 1 )
      {
        v11 -= 4;
        --v8;
        *v7 = *v11;
        v7[1] = v11[1];
        v7[2] = v11[2];
        v7[3] = v11[3];
        if ( v8 == 0 )
          break;
        v7 -= 4;
      }
    }
    *(uint32_t *)a2 = v9;
    *(uint32_t *)(a2 + 4) = v25;
    *(uint64_t *)(a2 + 8) = v10;
    return v25;
  }
  v13 = *a1;
  v14 = ((int)(uintptr_t)(v4) - *a1) >> 4;
  if ( v14 != 0 )
  {
    v23 = 2 * v14;
    if ( v14 > 2 * v14 || v23 > 0xFFFFFFF )
    {
      v28 = -16;
      v15 = (a2 - v13) >> 4;
    }
    else
    {
      v28 = 32 * v14;
      v15 = (a2 - v13) >> 4;
      if ( v23 == 0 )
      {
        v27 = 16;
        v26 = 0;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v28 = 16;
    v15 = (a2 - v13) >> 4;
  }
  v24 = a2;
  v26 = sub_4EBDC0(v28);
  v27 = v26 + 16;
  a2 = v24;
LABEL_12:
  v16 = (uint32_t *)(v26 + 16 * v15);
  if ( v16 != nullptr )
  {
    *v16 = *a3;
    v16[1] = a3[1];
    v16[2] = a3[2];
    v16[3] = a3[3];
  }
  v17 = *a1;
  if ( a2 != *a1 )
  {
    v18 = (uint32_t *)*a1;
    v19 = (uint32_t *)v26;
    do
    {
      if ( v19 != nullptr )
      {
        *v19 = *v18;
        v19[1] = v18[1];
        v19[2] = v18[2];
        v19[3] = v18[3];
      }
      v18 += 4;
      v19 += 4;
    }
    while ( (uint32_t *)a2 != v18 );
    v27 = v26 + ((a2 - (v17 + 16)) & 0xFFFFFFF0) + 32;
  }
  v20 = (uint32_t *)a1[1];
  if ( (uint32_t *)a2 != v20 )
  {
    v21 = (uint32_t *)a2;
    v22 = (uint32_t *)v27;
    do
    {
      if ( v22 != nullptr )
      {
        *v22 = *v21;
        v22[1] = v21[1];
        v22[2] = v21[2];
        v22[3] = v21[3];
      }
      v21 += 4;
      v22 += 4;
    }
    while ( v20 != v21 );
    v27 += (((unsigned int)(uintptr_t)(v20) - a2 - 16) & 0xFFFFFFF0) + 16;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v26;
  a1[1] = v27;
  a1[2] = v28 + v26;
  return v28 + v26;
}

// ----------------------------------------------------------------------------
// Function: sub_F22690  (binary VA: 0xf22690)
// Original: sub_F22690
// ----------------------------------------------------------------------------
size_t sub_F22690(int *a1, char *a2, int *a3)
{
  uint32_t *v4;
  int v5;
  int v6;
  char *v7;
  int v8;
  int v9;
  char *v10;
  int v12;
  unsigned int v13;
  int v14;
  int *v15;
  int v16;
  char *v17;
  uint32_t *v18;
  char *v19;
  char *v20;
  uint32_t *v21;
  unsigned int v22;
  char *v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  size_t v28;
  int v29;

  v4 = (uint32_t *)a1[1];
  if ( v4 != (uint32_t *)a1[2] )
  {
    v5 = 0;
    if ( v4 != nullptr )
    {
      *v4 = *(v4 - 4);
      v4[1] = *(v4 - 3);
      v4[2] = *(v4 - 2);
      v4[3] = *(v4 - 1);
      v5 = a1[1];
    }
    v6 = v5 + 16;
    v7 = (char *)(v5 - 16);
    a1[1] = v6;
    v8 = (v7 - a2) >> 4;
    v9 = *a3;
    v24 = a3[1];
    v26 = a3[2];
    v28 = a3[3];
    v10 = v7;
    if ( v8 > 0 )
    {
      while ( 1 )
      {
        v10 -= 16;
        --v8;
        *(uint32_t *)v7 = *(uint32_t *)v10;
        *((uint32_t *)v7 + 1) = *((uint32_t *)v10 + 1);
        *((uint32_t *)v7 + 2) = *((uint32_t *)v10 + 2);
        *((uint32_t *)v7 + 3) = *((uint32_t *)v10 + 3);
        if ( v8 == 0 )
          break;
        v7 -= 16;
      }
    }
    *((uint32_t *)a2 + 1) = v24;
    *(uint32_t *)a2 = v9;
    *((uint32_t *)a2 + 2) = v26;
    *((uint32_t *)a2 + 3) = v28;
    return v28;
  }
  v12 = *a1;
  v13 = ((int)(uintptr_t)(v4) - *a1) >> 4;
  if ( v13 != 0 )
  {
    v22 = 2 * v13;
    if ( v13 > 2 * v13 || v22 > 0xFFFFFFF )
    {
      v29 = -16;
      v14 = (int)(uintptr_t)(&a2[-v12]) >> 4;
    }
    else
    {
      v29 = 32 * v13;
      v14 = (int)(uintptr_t)(&a2[-v12]) >> 4;
      if ( v22 == 0 )
      {
        v27 = 16;
        v25 = 0;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v29 = 16;
    v14 = (int)(uintptr_t)(&a2[-v12]) >> 4;
  }
  v23 = a2;
  v25 = sub_4EBDC0(v29);
  v27 = v25 + 16;
  a2 = v23;
LABEL_12:
  v15 = (int *)(v25 + 16 * v14);
  if ( v15 != nullptr )
  {
    *v15 = *a3;
    v15[1] = a3[1];
    v15[2] = a3[2];
    v15[3] = a3[3];
  }
  v16 = *a1;
  if ( a2 != (char *)*a1 )
  {
    v17 = (char *)*a1;
    v18 = (uint32_t *)v25;
    do
    {
      if ( v18 != nullptr )
      {
        *v18 = *(uint32_t *)v17;
        v18[1] = *((uint32_t *)v17 + 1);
        v18[2] = *((uint32_t *)v17 + 2);
        v18[3] = *((uint32_t *)v17 + 3);
      }
      v17 += 16;
      v18 += 4;
    }
    while ( a2 != v17 );
    v27 = v25 + ((unsigned int)(uintptr_t)(&a2[-v16 - 16]) & 0xFFFFFFF0) + 32;
  }
  v19 = (char *)a1[1];
  if ( a2 != v19 )
  {
    v20 = a2;
    v21 = (uint32_t *)v27;
    do
    {
      if ( v21 != nullptr )
      {
        *v21 = *(uint32_t *)v20;
        v21[1] = *((uint32_t *)v20 + 1);
        v21[2] = *((uint32_t *)v20 + 2);
        v21[3] = *((uint32_t *)v20 + 3);
      }
      v20 += 16;
      v21 += 4;
    }
    while ( v19 != v20 );
    v27 += ((v19 - (a2 + 16)) & 0xFFFFFFF0) + 16;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v25;
  a1[1] = v27;
  a1[2] = v29 + v25;
  return v29 + v25;
}

// ----------------------------------------------------------------------------
// Function: sub_F228B0  (binary VA: 0xf228b0)
// Original: sub_F228B0
// ----------------------------------------------------------------------------
size_t sub_F228B0(int *a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  bool v7;
  int v8;
  size_t result;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v13)) > _g4_s3 ? (12u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  v10 = a2;
  v11 = a4;
  v12 = a3;
  v5 = G4_VCALL<int>(a2, 240);
  v6 = a1[1];
  v7 = v6 == a1[2];
  v13 = v5;
  if ( v7 )
    return sub_F22690(a1, (char *)v6, &v10);
  v8 = 0;
  if ( v6 != 0 )
  {
    *(uint32_t *)v6 = v10;
    *(uint32_t *)(v6 + 4) = v11;
    *(uint32_t *)(v6 + 8) = v12;
    *(uint32_t *)(v6 + 12) = v13;
    v8 = a1[1];
  }
  result = v8 + 16;
  a1[1] = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F22930  (binary VA: 0xf22930)
// Original: sub_F22930
// ----------------------------------------------------------------------------
int * sub_F22930(int *a1, int a2, int a3, int a4, int *a5)
{
  int v7;
  int v8;
  int v9;
  int v11;
  char v12;
  int v13;

  v7 = a2 + 4;
  v12 = 1;
  v11 = v7;
  if ( a3 == 0 && a4 != v7 )
    v12 = *a5 < *(uint32_t *)(a4 + 16);
  v8 = opNew(0x18u);
  if ( v8 != -16 )
  {
    v9 = *a5;
    *(uint32_t *)(v8 + 20) = a5[1];
    *(uint32_t *)(v8 + 16) = v9;
  }
  v13 = v8;
  sub_1904970(v12, v8, a4, v11);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_F229F0  (binary VA: 0xf229f0)
// Original: sub_F229F0
// ----------------------------------------------------------------------------
int sub_F229F0(int *a1, int *a2)
{
  int *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v12;
  uint32_t *v13;
  int v14;
  char *v15;
  uint32_t *v16;
  int *v17;
  int v18;
  char *v19;
  char *v20;
  uint32_t *v21;
  int *v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  char *v31;

  v2 = a1;
  v3 = (char *)a1[1];
  if ( v3 == (char *)a1[2] )
  {
    v12 = (int)(uintptr_t)(&v3[-*a1]) >> 3;
    v29 = 8;
    if ( v12 != 0 )
    {
      if ( v12 > 2 * v12 || 2 * v12 > 0x1FFFFFFF )
        v29 = -8;
      else
        v29 = 16 * v12;
    }
    v28 = sub_4EBDC0(v29);
    v25 = v28 + 8;
    v13 = (uint32_t *)(v28 + 8 * v12);
    if ( v13 != nullptr )
    {
      v14 = *a2;
      v13[1] = a2[1];
      *v13 = v14;
    }
    if ( v3 != (char *)*v2 )
    {
      v15 = (char *)*v2;
      v26 = *v2;
      v16 = (uint32_t *)v28;
      v17 = v2;
      do
      {
        if ( v16 != nullptr )
        {
          v18 = *(uint32_t *)v15;
          v16[1] = *((uint32_t *)v15 + 1);
          *v16 = v18;
        }
        v15 += 8;
        v16 += 2;
      }
      while ( v3 != v15 );
      v2 = v17;
      v25 = v28 + 8 * ((unsigned int)(uintptr_t)(&v3[-v26 - 8]) >> 3) + 16;
    }
    v19 = (char *)v2[1];
    if ( v3 != v19 )
    {
      v20 = v3;
      v31 = v3;
      v21 = (uint32_t *)v25;
      v22 = v2;
      do
      {
        if ( v21 != nullptr )
        {
          v23 = *(uint32_t *)v20;
          v21[1] = *((uint32_t *)v20 + 1);
          *v21 = v23;
        }
        v20 += 8;
        v21 += 2;
      }
      while ( v19 != v20 );
      v2 = v22;
      v25 += 8 * ((unsigned int)(v19 - (v31 + 8)) >> 3) + 8;
    }
    if ( *v2 != 0 )
      gll_operator_delete_arr(*v2);
    *v2 = v28;
    v2[1] = v25;
    v2[2] = v29 + v28;
    return v29 + v28;
  }
  else
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      v5 = *((uint32_t *)v3 - 1);
      *(uint32_t *)v3 = *((uint32_t *)v3 - 2);
      *((uint32_t *)v3 + 1) = v5;
      v4 = a1[1];
    }
    a1[1] = v4 + 8;
    v6 = v4 - 8;
    v24 = *a2;
    v7 = (v4 - 8 - (int)(uintptr_t)(v3)) >> 3;
    v27 = a2[1];
    if ( v7 > 0 )
    {
      v8 = -8 * v7 + v4;
      v9 = v6 - 8 * v7;
      do
      {
        v10 = *(uint32_t *)(v9 + 8 * v7 - 8);
        *(uint32_t *)(v8 + 8 * v7 - 4) = *(uint32_t *)(v9 + 8 * v7 - 4);
        *(uint32_t *)(v8 + 8 * v7-- - 8) = v10;
      }
      while ( v7 != 0 );
    }
    *(uint32_t *)v3 = v24;
    *((uint32_t *)v3 + 1) = v27;
    return v27;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_F22BC0  (binary VA: 0xf22bc0)
// Original: sub_F22BC0
// ----------------------------------------------------------------------------
int sub_F22BC0(int *a1, int *a2)
{
  int *v2;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v12;
  uint32_t *v13;
  int v14;
  char *v15;
  uint32_t *v16;
  int *v17;
  int v18;
  char *v19;
  char *v20;
  uint32_t *v21;
  int *v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  char *v31;

  v2 = a1;
  v3 = (char *)a1[1];
  if ( v3 == (char *)a1[2] )
  {
    v12 = (int)(uintptr_t)(&v3[-*a1]) >> 3;
    v29 = 8;
    if ( v12 != 0 )
    {
      if ( v12 > 2 * v12 || 2 * v12 > 0x1FFFFFFF )
        v29 = -8;
      else
        v29 = 16 * v12;
    }
    v28 = sub_4EBDC0(v29);
    v25 = v28 + 8;
    v13 = (uint32_t *)(v28 + 8 * v12);
    if ( v13 != nullptr )
    {
      v14 = *a2;
      v13[1] = a2[1];
      *v13 = v14;
    }
    if ( v3 != (char *)*v2 )
    {
      v15 = (char *)*v2;
      v26 = *v2;
      v16 = (uint32_t *)v28;
      v17 = v2;
      do
      {
        if ( v16 != nullptr )
        {
          v18 = *(uint32_t *)v15;
          v16[1] = *((uint32_t *)v15 + 1);
          *v16 = v18;
        }
        v15 += 8;
        v16 += 2;
      }
      while ( v3 != v15 );
      v2 = v17;
      v25 = v28 + 8 * ((unsigned int)(uintptr_t)(&v3[-v26 - 8]) >> 3) + 16;
    }
    v19 = (char *)v2[1];
    if ( v3 != v19 )
    {
      v20 = v3;
      v31 = v3;
      v21 = (uint32_t *)v25;
      v22 = v2;
      do
      {
        if ( v21 != nullptr )
        {
          v23 = *(uint32_t *)v20;
          v21[1] = *((uint32_t *)v20 + 1);
          *v21 = v23;
        }
        v20 += 8;
        v21 += 2;
      }
      while ( v19 != v20 );
      v2 = v22;
      v25 += 8 * ((unsigned int)(v19 - (v31 + 8)) >> 3) + 8;
    }
    if ( *v2 != 0 )
      gll_operator_delete_arr(*v2);
    *v2 = v28;
    v2[1] = v25;
    v2[2] = v29 + v28;
    return v29 + v28;
  }
  else
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      v5 = *((uint32_t *)v3 - 1);
      *(uint32_t *)v3 = *((uint32_t *)v3 - 2);
      *((uint32_t *)v3 + 1) = v5;
      v4 = a1[1];
    }
    a1[1] = v4 + 8;
    v6 = v4 - 8;
    v24 = *a2;
    v7 = (v4 - 8 - (int)(uintptr_t)(v3)) >> 3;
    v27 = a2[1];
    if ( v7 > 0 )
    {
      v8 = -8 * v7 + v4;
      v9 = v6 - 8 * v7;
      do
      {
        v10 = *(uint32_t *)(v9 + 8 * v7 - 8);
        *(uint32_t *)(v8 + 8 * v7 - 4) = *(uint32_t *)(v9 + 8 * v7 - 4);
        *(uint32_t *)(v8 + 8 * v7-- - 8) = v10;
      }
      while ( v7 != 0 );
    }
    *(uint32_t *)v3 = v24;
    *((uint32_t *)v3 + 1) = v27;
    return v27;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_F22D90  (binary VA: 0xf22d90)
// Original: sub_F22D90
// ----------------------------------------------------------------------------
uint32_t * sub_F22D90(int a1, uint32_t *a2)
{
  int v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v10;
  uint32_t *v11;
  unsigned int v12;
  unsigned int v13;
  int v15;
  uint32_t *v16;
  size_t v17;
  int v18;
  int v19;
  int v20;

  v3 = *(uint32_t *)(a1 + 4);
  if ( v3 == *(uint32_t *)(a1 + 8) )
  {
    v18 = 5;
    v10 = -858993459 * ((v3 - *(uint32_t *)a1) >> 2);
    if ( v10 != 0 )
    {
      if ( -858993459 * ((v3 - *(uint32_t *)a1) >> 2) > (unsigned int)(-1717986918 * ((v3 - *(uint32_t *)a1) >> 2))
        || (unsigned int)(-1717986918 * ((v3 - *(uint32_t *)a1) >> 2)) > 0xCCCCCCC )
      {
        v18 = -4;
      }
      else
      {
        v18 = 2 * ((v3 - *(uint32_t *)a1) >> 2);
      }
    }
    v16 = (uint32_t *)sub_4EBDC0(v18 * 4);
    v11 = &v16[5 * v10];
    if ( v11 != nullptr )
    {
      *v11 = *a2;
      v11[1] = a2[1];
      v11[2] = a2[2];
      v11[3] = a2[3];
      v11[4] = a2[4];
    }
    v12 = sub_F21C10(*(char **)a1, (char *)v3, v16);
    v13 = sub_F21C10((char *)v3, *(char **)(a1 + 4), (uint32_t *)(v12 + 20));
    if ( *(uint32_t *)a1 != 0 )
      gll_operator_delete_arr(*(uint32_t *)a1);
    *(uint32_t *)(a1 + 4) = v13;
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v16);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&v16[v18]);
    return &v16[v18];
  }
  else
  {
    v4 = 0;
    if ( v3 != 0 )
    {
      *(uint32_t *)v3 = *(uint32_t *)(v3 - 20);
      *(uint32_t *)(v3 + 4) = *(uint32_t *)(v3 - 16);
      *(uint32_t *)(v3 + 8) = *(uint32_t *)(v3 - 12);
      *(uint32_t *)(v3 + 12) = *(uint32_t *)(v3 - 8);
      *(uint32_t *)(v3 + 16) = *(uint32_t *)(v3 - 4);
      v4 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v4 + 20;
    v5 = (uint32_t *)(v4 - 20);
    v15 = a2[1];
    v17 = a2[2];
    v19 = a2[3];
    v6 = *a2;
    v7 = -858993459 * (((int)(uintptr_t)(v5) - v3) >> 2);
    v20 = a2[4];
    v8 = v5;
    if ( v7 > 0 )
    {
      while ( 1 )
      {
        v8 -= 5;
        --v7;
        *v5 = *v8;
        v5[1] = v8[1];
        v5[2] = v8[2];
        v5[3] = v8[3];
        v5[4] = v8[4];
        if ( v7 == 0 )
          break;
        v5 -= 5;
      }
    }
    *(uint32_t *)(v3 + 4) = v15;
    *(uint32_t *)v3 = v6;
    *(uint32_t *)(v3 + 8) = v17;
    *(uint32_t *)(v3 + 12) = v19;
    *(uint32_t *)(v3 + 16) = v20;
    return (uint32_t *)v19;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_F22F50  (binary VA: 0xf22f50)
// Original: sub_F22F50
// ----------------------------------------------------------------------------
int * sub_F22F50(int *result, char *a2, unsigned int a3, size_t *a4)
{
  unsigned int v4;
  char *v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  bool v9;
  unsigned int v10;
  int v11;
  int v12;
  size_t *v13;
  unsigned int v14;
  size_t v15;
  uint32_t *v16;
  char *v17;
  int v18;
  uint32_t *v19;
  char *v20;
  char *v21;
  uint32_t *v22;
  int v23;
  unsigned int v24;
  int v25;
  char *v26;
  int v27;
  char *v28;
  uint32_t *v29;
  int v30;
  int v31;
  char *v32;
  int v33;
  int v34;
  size_t v35;
  size_t *v36;
  unsigned int v37;
  unsigned int v38;
  size_t *v39;
  int *v40;
  size_t v41;
  int *v42;
  int *v44;
  size_t v45;
  size_t v46;
  int v47;
  int v49;
  int v50;

  v4 = a3;
  v42 = result;
  if ( a3 == 0 )
    return result;
  v5 = (char *)result[1];
  if ( a3 > (result[2] - (int)(uintptr_t)(v5)) >> 3 )
  {
    v6 = *result;
    v7 = (int)(uintptr_t)(&v5[-*result]) >> 3;
    if ( a3 > 0x1FFFFFFF - v7 )
      sub_1900180("vector::_M_fill_insert");
    v8 = a3;
    if ( v7 >= a3 )
      v8 = v7;
    v9 = __CFADD__(v7, v8);
    v10 = v7 + v8;
    if ( v9 || v10 > 0x1FFFFFFF )
    {
      v45 = 0xFFFFFFF8;
      v34 = (int)(uintptr_t)(&a2[-v6]);
      v35 = 0xFFFFFFF8;
      v11 = v34 >> 3;
    }
    else
    {
      v11 = (int)(uintptr_t)(&a2[-v6]) >> 3;
      if ( v10 == 0 )
      {
        v49 = 0;
        v45 = 0;
        v12 = 0;
        goto LABEL_10;
      }
      v45 = 8 * v10;
      v35 = 8 * v10;
    }
    v49 = sub_4EBDC0(v35);
    v4 = a3;
    v12 = v49;
LABEL_10:
    v13 = (size_t *)(v12 + 8 * v11);
    v14 = v4;
    do
    {
      if ( v13 != nullptr )
      {
        v15 = *a4;
        v13[1] = a4[1];
        *v13 = v15;
      }
      v13 += 2;
      --v14;
    }
    while ( v14 != 0 );
    v16 = (uint32_t *)v49;
    if ( a2 != (char *)*v42 )
    {
      v17 = (char *)*v42;
      v50 = *v42;
      do
      {
        if ( v16 != nullptr )
        {
          v18 = *(uint32_t *)v17;
          v16[1] = *((uint32_t *)v17 + 1);
          *v16 = v18;
        }
        v17 += 8;
        v16 += 2;
      }
      while ( a2 != v17 );
      v16 = (uint32_t *)(v49 + 8 * ((unsigned int)(uintptr_t)(&a2[-v50 - 8]) >> 3) + 8);
    }
    v19 = &v16[2 * v4];
    v20 = (char *)v42[1];
    if ( a2 != v20 )
    {
      v21 = a2;
      v22 = v19;
      do
      {
        if ( v22 != nullptr )
        {
          v23 = *(uint32_t *)v21;
          v22[1] = *((uint32_t *)v21 + 1);
          *v22 = v23;
        }
        v21 += 8;
        v22 += 2;
      }
      while ( v20 != v21 );
      v19 += 2 * ((unsigned int)(v20 - (a2 + 8)) >> 3) + 2;
    }
    if ( *v42 != 0 )
      gll_operator_delete_arr(*v42);
    *v42 = v49;
    v42[1] = (int)(uintptr_t)(v19);
    result = (int *)(v49 + v45);
    v42[2] = v49 + v45;
    return result;
  }
  v24 = (v5 - a2) >> 3;
  v46 = *a4;
  v47 = a4[1];
  if ( a3 >= v24 )
  {
    v36 = (size_t *)result[1];
    v37 = a3 - v24;
    if ( a3 != v24 )
    {
      v38 = a3 - v24;
      do
      {
        if ( v36 != nullptr )
        {
          *v36 = v46;
          v36[1] = v47;
        }
        v36 += 2;
        --v38;
      }
      while ( v38 != 0 );
      v24 = (v5 - a2) >> 3;
      v36 = (size_t *)result[1];
    }
    v39 = &v36[2 * v37];
    result[1] = (int)(uintptr_t)(v39);
    if ( a2 == v5 )
    {
      result = (int *)&v39[2 * v24];
      v42[1] = (int)(uintptr_t)(result);
    }
    else
    {
      v40 = (int *)a2;
      result = (int *)a2;
      v44 = (int *)v5;
      do
      {
        if ( v39 != nullptr )
        {
          v41 = *v40;
          v39[1] = v40[1];
          *v39 = v41;
        }
        v40 += 2;
        v39 += 2;
      }
      while ( v44 != v40 );
      v42[1] += 8 * v24;
      do
      {
        *result = v46;
        result[1] = v47;
        result += 2;
      }
      while ( v44 != result );
    }
  }
  else
  {
    v25 = 8 * a3;
    v26 = &v5[-8 * a3];
    v27 = result[1];
    if ( v5 != v26 )
    {
      v28 = &v5[-8 * a3];
      v29 = (uint32_t *)result[1];
      do
      {
        if ( v29 != nullptr )
        {
          v30 = *(uint32_t *)v28;
          v29[1] = *((uint32_t *)v28 + 1);
          *v29 = v30;
        }
        v28 += 8;
        v29 += 2;
      }
      while ( v5 != v28 );
      v26 = &v5[-8 * a3];
      v27 = result[1];
    }
    result[1] = v25 + v27;
    v31 = (v26 - a2) >> 3;
    if ( v31 > 0 )
    {
      v32 = &v26[-8 * v31];
      result = (int *)&v5[-8 * v31];
      do
      {
        v33 = *(uint32_t *)&v32[8 * v31 - 8];
        result[2 * v31 - 1] = *(uint32_t *)&v32[8 * v31 - 4];
        result[2 * v31-- - 2] = v33;
      }
      while ( v31 != 0 );
    }
    if ( a2 != &a2[v25] )
    {
      result = (int *)a2;
      do
      {
        *result = v46;
        result[1] = v47;
        result += 2;
      }
      while ( &a2[v25] != (char *)result );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F23480  (binary VA: 0xf23480)
// Original: sub_F23480
// ----------------------------------------------------------------------------
size_t sub_F23480(int *a1, uint32_t *a2)
{
  char *src;
  int v4;
  size_t result;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  int v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  int v15;
  unsigned int v17;
  int v18;
  size_t v19;

  src = (char *)a1[1];
  if ( src == (char *)a1[2] )
  {
    v7 = (int)(uintptr_t)(&src[-*a1]) >> 2;
    v19 = 4;
    if ( v7 != 0 )
    {
      v19 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v15 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v15 = -4;
        v19 = v15;
      }
    }
    v18 = sub_4EBDC0(v19);
    v17 = v18 + 4;
    v8 = (uint32_t *)(v18 + 4 * v7);
    if ( v8 != nullptr )
      *v8 = *a2;
    v9 = *a1;
    if ( src != (char *)*a1 )
    {
      v10 = (char *)*a1;
      v11 = (uint32_t *)v18;
      do
      {
        if ( v11 != nullptr )
          *v11 = *(uint32_t *)v10;
        v10 += 4;
        ++v11;
      }
      while ( src != v10 );
      v17 = v18 + 4 * ((unsigned int)(uintptr_t)(&src[-v9 - 4]) >> 2) + 8;
    }
    v12 = (char *)a1[1];
    if ( src != v12 )
    {
      v13 = src;
      v14 = (uint32_t *)v17;
      do
      {
        if ( v14 != nullptr )
          *v14 = *(uint32_t *)v13;
        v13 += 4;
        ++v14;
      }
      while ( v12 != v13 );
      v17 += 4 * ((unsigned int)(v12 - (src + 4)) >> 2) + 4;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v18;
    a1[1] = v17;
    a1[2] = v19 + v18;
    return v19 + v18;
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *(uint32_t *)src = *((uint32_t *)src - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    result = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a2;
    if ( result != 0 )
      result = (size_t)memmove((void *)(v4 - 4 * result), src, 4 * result);
    *(uint32_t *)src = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F23600  (binary VA: 0xf23600)
// Original: sub_F23600
// ----------------------------------------------------------------------------
size_t sub_F23600(int *a1, uint32_t *a2)
{
  char *src;
  int v4;
  size_t result;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  int v9;
  char *v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  int v15;
  unsigned int v17;
  int v18;
  size_t v19;

  src = (char *)a1[1];
  if ( src == (char *)a1[2] )
  {
    v7 = (int)(uintptr_t)(&src[-*a1]) >> 2;
    v19 = 4;
    if ( v7 != 0 )
    {
      v19 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v15 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v15 = -4;
        v19 = v15;
      }
    }
    v18 = sub_4EBDC0(v19);
    v17 = v18 + 4;
    v8 = (uint32_t *)(v18 + 4 * v7);
    if ( v8 != nullptr )
      *v8 = *a2;
    v9 = *a1;
    if ( src != (char *)*a1 )
    {
      v10 = (char *)*a1;
      v11 = (uint32_t *)v18;
      do
      {
        if ( v11 != nullptr )
          *v11 = *(uint32_t *)v10;
        v10 += 4;
        ++v11;
      }
      while ( src != v10 );
      v17 = v18 + 4 * ((unsigned int)(uintptr_t)(&src[-v9 - 4]) >> 2) + 8;
    }
    v12 = (char *)a1[1];
    if ( src != v12 )
    {
      v13 = src;
      v14 = (uint32_t *)v17;
      do
      {
        if ( v14 != nullptr )
          *v14 = *(uint32_t *)v13;
        v13 += 4;
        ++v14;
      }
      while ( v12 != v13 );
      v17 += 4 * ((unsigned int)(v12 - (src + 4)) >> 2) + 4;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = v18;
    a1[1] = v17;
    a1[2] = v19 + v18;
    return v19 + v18;
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *(uint32_t *)src = *((uint32_t *)src - 1);
      v4 = a1[1];
    }
    a1[1] = v4 + 4;
    result = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a2;
    if ( result != 0 )
      result = (size_t)memmove((void *)(v4 - 4 * result), src, 4 * result);
    *(uint32_t *)src = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F23780  (binary VA: 0xf23780)
// Original: sub_F23780
// ----------------------------------------------------------------------------
void sub_F23780(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;

  v25 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)v25[3];
      v20 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v21 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v22 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v23 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v24 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v19 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = (uint32_t *)v8[3];
                                  if ( v9 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      sub_F23780(a1, v9[3]);
                                      v18 = (uint32_t *)v9[2];
                                      opDelete(v9);
                                      if ( v18 == nullptr )
                                        break;
                                      v9 = v18;
                                    }
                                  }
                                  v10 = (uint32_t *)v8[2];
                                  opDelete(v8);
                                  if ( v10 == nullptr )
                                    break;
                                  v8 = v10;
                                }
                              }
                              v11 = (uint32_t *)v19[2];
                              opDelete(v19);
                              if ( v11 == nullptr )
                                break;
                              v19 = v11;
                              v7 = v11;
                            }
                          }
                          v12 = (uint32_t *)v24[2];
                          opDelete(v24);
                          if ( v12 == nullptr )
                            break;
                          v24 = v12;
                          v6 = v12;
                        }
                      }
                      v13 = (uint32_t *)v23[2];
                      opDelete(v23);
                      if ( v13 == nullptr )
                        break;
                      v23 = v13;
                      v5 = v13;
                    }
                  }
                  v14 = (uint32_t *)v22[2];
                  opDelete(v22);
                  if ( v14 == nullptr )
                    break;
                  v22 = v14;
                  v4 = v14;
                }
              }
              v15 = (uint32_t *)v21[2];
              opDelete(v21);
              if ( v15 == nullptr )
                break;
              v21 = v15;
              v3 = v15;
            }
          }
          v16 = (uint32_t *)v20[2];
          opDelete(v20);
          if ( v16 == nullptr )
            break;
          v20 = v16;
          v2 = v16;
        }
      }
      v17 = (uint32_t *)v25[2];
      opDelete(v25);
      if ( v17 == nullptr )
        break;
      v25 = v17;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_F23930  (binary VA: 0xf23930)
// Original: sub_F23930
// ----------------------------------------------------------------------------
int sub_F23930(int *a1, int a2, int a3)
{
  int v3;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  int result;
  uint8_t *src;
  uint8_t *dest;
  size_t n;

  v3 = *a1;
  v5 = *(uint32_t *)(*a1 - 12);
  v6 = *(uint32_t *)(*a1 - 8);
  v7 = v5 + a3 - a2;
  n = v5 - a2;
  if ( v7 <= v6 && *(int *)(v3 - 4) <= 0 )
  {
    if ( a3 != a2 && n != 0 )
    {
      src = (uint8_t *)(v3 + a2);
      dest = (uint8_t *)(a3 + v3);
      if ( n == 1 )
        *dest = *src;
      else
        memmove(dest, src, n);
      v3 = *a1;
    }
  }
  else
  {
    if ( v7 > 0x3FFFFFFC )
      sub_1900180("basic_string::_S_create");
    v8 = v5 + a3 - a2;
    if ( v7 > v6 )
    {
      v8 = 2 * v6;
      if ( v7 >= 2 * v6 )
        v8 = v5 + a3 - a2;
    }
    if ( v8 + 29 > 0x1000 && v6 < v8 )
    {
      v9 = v8 + 4096 - (((uint16_t)v8 + 29) & 0xFFF);
      v8 = 1073741820;
      if ( v9 <= 0x3FFFFFFC )
        v8 = v9;
    }
    v10 = sub_4EBDC0(v8 + 13);
    *(uint32_t *)(v10 + 4) = v8;
    *(uint32_t *)(v10 + 8) = 0;
    v3 = v10 + 12;
    if ( n != 0 )
    {
      if ( n == 1 )
        *(uint8_t *)(v3 + a3) = *(uint8_t *)(*a1 + a2);
      else
        memcpy((void *)(v3 + a3), (const void *)(*a1 + a2), n);
    }
    v11 = *a1;
    if ( (int *)(*a1 - 12) != (int *)(uintptr_t)(&dword_20D3E6C
)      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr(v11 - 12);
    }
    *a1 = v3;
  }
  result = v3 - 12;
  if ( (int *)(v3 - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v3 - 4) = 0;
    *(uint32_t *)(v3 - 12) = v7;
    *(uint8_t *)(v3 + v7) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F23B00  (binary VA: 0xf23b00)
// Original: sub_F23B00
// ----------------------------------------------------------------------------
int sub_F23B00(float *a1, int a2, float a3, int a4, float *a5)
{
  float *v5;
  int result;
  float *v7;
  bool v8; // si
  float *v9;
  float *v10;
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm6_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm6_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float *v23;
  bool v24;

  v5 = a1;
  v23 = &a1[3 * a2];
  result = 0;
  if ( v5 != v23 )
  {
    v7 = v23 - 3;
    v8 = a3 >= v23[a4 - 3];
    v9 = a5;
    while ( 1 )
    {
      v11 = v5[a4];
      v24 = a3 >= v11;
      if ( a3 >= v11 )
        break;
      if ( !v8 )
        goto LABEL_5;
      v12 = v7[a4] - v11;
      if ( fabs(v12) < 0.000001f )
      {
        v14 = *v5;
        v15 = v5[1];
        v16 = v5[2];
      }
      else
      {
        v13 = (float)(a3 - v11) / v12;
        v14 = (float)((float)(*v7 - *v5) * v13) + *v5;
        v15 = (float)((float)(v7[1] - v5[1]) * v13) + v5[1];
        v16 = (float)((float)(v7[2] - v5[2]) * v13) + v5[2];
      }
      *v9 = v14;
      v10 = v5 + 3;
      v9[1] = v15;
      v9[2] = v16;
      v9 += 3;
      if ( v23 == v5 + 3 )
        return -1431655765 * (v9 - a5);
LABEL_6:
      v7 = v5;
      v5 = v10;
      v8 = v24;
    }
    if ( !v8 )
    {
      v17 = v7[a4];
      v18 = v11 - v17;
      if ( fabs(v18) < 0.000001f )
      {
        v20 = *v7;
        v21 = v7[1];
        v22 = v7[2];
      }
      else
      {
        v19 = (float)(a3 - v17) / v18;
        v20 = (float)((float)(*v5 - *v7) * v19) + *v7;
        v21 = (float)((float)(v5[1] - v7[1]) * v19) + v7[1];
        v22 = (float)((float)(v5[2] - v7[2]) * v19) + v7[2];
      }
      *v9 = v20;
      v9[1] = v21;
      v9[2] = v22;
      v9 += 3;
    }
    *v9 = *v5;
    v9[1] = v5[1];
    v9[2] = v5[2];
    v9 += 3;
LABEL_5:
    v10 = v5 + 3;
    if ( v23 == v5 + 3 )
      return -1431655765 * (v9 - a5);
    goto LABEL_6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F23CF0  (binary VA: 0xf23cf0)
// Original: sub_F23CF0
// ----------------------------------------------------------------------------
int sub_F23CF0(float *a1, int a2, float a3, int a4, float *a5)
{
  float *v5;
  int result;
  float *v7;
  bool v8; // si
  float *v9;
  float *v10;
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm6_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm6_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float *v23;
  bool v24;

  v5 = a1;
  v23 = &a1[3 * a2];
  result = 0;
  if ( v5 != v23 )
  {
    v7 = v23 - 3;
    v8 = v23[a4 - 3] >= a3;
    v9 = a5;
    while ( 1 )
    {
      v11 = v5[a4];
      v24 = v11 >= a3;
      if ( v11 >= a3 )
        break;
      if ( !v8 )
        goto LABEL_5;
      v12 = v7[a4] - v11;
      if ( fabs(v12) < 0.000001f )
      {
        v14 = *v5;
        v15 = v5[1];
        v16 = v5[2];
      }
      else
      {
        v13 = (float)(a3 - v11) / v12;
        v14 = (float)((float)(*v7 - *v5) * v13) + *v5;
        v15 = (float)((float)(v7[1] - v5[1]) * v13) + v5[1];
        v16 = (float)((float)(v7[2] - v5[2]) * v13) + v5[2];
      }
      *v9 = v14;
      v10 = v5 + 3;
      v9[1] = v15;
      v9[2] = v16;
      v9 += 3;
      if ( v23 == v5 + 3 )
        return -1431655765 * (v9 - a5);
LABEL_6:
      v7 = v5;
      v5 = v10;
      v8 = v24;
    }
    if ( !v8 )
    {
      v17 = v7[a4];
      v18 = v11 - v17;
      if ( fabs(v18) < 0.000001f )
      {
        v20 = *v7;
        v21 = v7[1];
        v22 = v7[2];
      }
      else
      {
        v19 = (float)(a3 - v17) / v18;
        v20 = (float)((float)(*v5 - *v7) * v19) + *v7;
        v21 = (float)((float)(v5[1] - v7[1]) * v19) + v7[1];
        v22 = (float)((float)(v5[2] - v7[2]) * v19) + v7[2];
      }
      *v9 = v20;
      v9[1] = v21;
      v9[2] = v22;
      v9 += 3;
    }
    *v9 = *v5;
    v9[1] = v5[1];
    v9[2] = v5[2];
    v9 += 3;
LABEL_5:
    v10 = v5 + 3;
    if ( v23 == v5 + 3 )
      return -1431655765 * (v9 - a5);
    goto LABEL_6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F23EE0  (binary VA: 0xf23ee0)
// Original: sub_F23EE0
// ----------------------------------------------------------------------------
uint32_t * sub_F23EE0(int a1)
{
  glf::TaskManager::Self *v2;
  uint32_t *result;
  bool v4;

  *(uint32_t *)(a1 + 32) = glf::task_detail::GrabGroup();
  v2 = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
  if ( g4_fnstatic_0452fd96fc == 0 )
  {
    while ( __sync_val_compare_and_swap(
              &g4_fnstatic_e7b3943d0f,
              (int32_t)(uintptr_t)(v2),
              1) != 0 )
      glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
    v2 = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
    if ( g4_fnstatic_0452fd96fc == 0 )
    {
      v2 = (glf::TaskManager::Self *)opNew(0xE8u);
      glf::TaskManager::Construct(v2);
      _mm_mfence();
      g4_fnstatic_0452fd96fc = (uintptr_t)(uintptr_t)(v2);
    }
    v4 = *((uint8_t *)v2 + 228) == 0;
    g4_fnstatic_e7b3943d0f = 0;
    if ( !v4 )
      goto LABEL_3;
    return glf::TaskManager::Push(v2, (glf::Task::Self *)a1, true);
  }
  if ( *(uint8_t *)(g4_fnstatic_0452fd96fc + 228) == 0 )
    return glf::TaskManager::Push(v2, (glf::Task::Self *)a1, true);
LABEL_3:
  result = (uint32_t *)glf::Task::Start((glf::task_detail::Self **)a1);
  if ( *(uint8_t *)(a1 + 24) != 0 )
    return (uint32_t *)G4_VCALL<int>(a1, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F23FC0  (binary VA: 0xf23fc0)
// Original: sub_F23FC0
// ----------------------------------------------------------------------------
int sub_F23FC0(int a1, int a2, int *a3, int *a4, int a5, unsigned int a6)
{
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int Stream;
  int *v13;
  int v14;
  int v15;
  int v16;
  int result;
  int v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;

  v7 = *(uint32_t *)(*(uint32_t *)a1 + 8);
  if ( a2 != 0 )
  {
    v8 = *(uint32_t *)(a2 + 4);
    v9 = v7 + 20;
    if ( v8 != 0 )
    {
      glitch::video::IBuffer::unmap(**(glitch::video::IBuffer::Self ***)a2);
      *(uint32_t *)(a2 + 4) = 0;
      v9 = v7 + 20;
    }
    *(uint32_t *)a2 = v9;
    v10 = glitch::video::IBuffer::mapInternal(
            *(glitch::video::IBuffer::Self **)(v7 + 20),
            a6,
            0,
            *(uint32_t *)(*(uint32_t *)(v7 + 20) + 20),
            0);
    v11 = 0;
    if ( v10 != 0 )
      v11 = v10 + *(uint32_t *)(v7 + 24);
    *(uint32_t *)(a2 + 4) = v11;
  }
  if ( a3 != nullptr && (*(uint8_t *)(v7 + 4) & 2) != 0 )
  {
    Stream = glitch::video::CVertexStreams::getStream(v7, 1, v7 + 36, *(uint32_t *)(v7 + 16));
    v13 = a3;
    v14 = Stream;
    if ( a3[1] != 0 )
    {
      glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)*a3);
      v13 = a3;
      a3[1] = 0;
    }
    *v13 = v14;
    v15 = glitch::video::IBuffer::mapInternal(
            *(glitch::video::IBuffer::Self **)v14,
            a6,
            0,
            *(uint32_t *)(*(uint32_t *)v14 + 20),
            0);
    v16 = 0;
    if ( v15 != 0 )
      v16 = v15 + *(uint32_t *)(v14 + 4);
    a3[1] = v16;
  }
  result = (int)(uintptr_t)(a4);
  if ( a4 != nullptr && (*(uint8_t *)(v7 + 6) & 1) != 0 )
  {
    v18 = glitch::video::CVertexStreams::getStream(
            v7,
            16,
            v7 + 16 * (*(uint8_t *)(v7 + 12) + 1) + 20,
            *(uint32_t *)(v7 + 16));
    v19 = a4;
    v20 = v18;
    if ( a4[1] != 0 )
    {
      glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)*a4);
      v19 = a4;
      a4[1] = 0;
    }
    *v19 = v20;
    v21 = glitch::video::IBuffer::mapInternal(
            *(glitch::video::IBuffer::Self **)v20,
            a6,
            0,
            *(uint32_t *)(*(uint32_t *)v20 + 20),
            0);
    v22 = 0;
    if ( v21 != 0 )
      v22 = v21 + *(uint32_t *)(v20 + 4);
    result = (int)(uintptr_t)(a4);
    a4[1] = v22;
  }
  if ( a5 != 0 && (*(uint8_t *)(v7 + 6) & 2) != 0 )
  {
    v23 = glitch::video::CVertexStreams::getStream(
            v7,
            17,
            v7 + 16 * (*(uint8_t *)(v7 + 12) + 1) + 20,
            *(uint32_t *)(v7 + 16));
    if ( *(uint32_t *)(a5 + 4) != 0 )
    {
      glitch::video::IBuffer::unmap(**(glitch::video::IBuffer::Self ***)a5);
      *(uint32_t *)(a5 + 4) = 0;
    }
    *(uint32_t *)a5 = v23;
    result = glitch::video::IBuffer::mapInternal(
               *(glitch::video::IBuffer::Self **)v23,
               a6,
               0,
               *(uint32_t *)(*(uint32_t *)v23 + 20),
               0);
    v24 = 0;
    if ( result != 0 )
      v24 = result + *(uint32_t *)(v23 + 4);
    *(uint32_t *)(a5 + 4) = v24;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F24210  (binary VA: 0xf24210)
// Original: sub_F24210
// ----------------------------------------------------------------------------
uint32_t * sub_F24210(uint32_t *a1, const wchar_t *s)
{
  size_t v3;
  size_t n;
  size_t v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  wchar_t *v10;
  wchar_t *v11;
  uint32_t *v12;
  int v14;
  uint32_t *v15;

  if ( s == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v3 = wcslen(s);
  if ( s == &s[v3] )
  {
    v12 = (uint32_t *)(&unk_20DF960);
  }
  else
  {
    n = (int)(4 * v3) >> 2;
    if ( n > 0xFFFFFFE )
      sub_1900180("basic_string::_S_create");
    v5 = 4 * n + 16;
    v6 = 4 * n + 32;
    if ( v6 > 0x1000 && n != 0 )
    {
      v7 = 4096 - (v6 & 0xFFF);
      v8 = 268435454;
      v9 = n + (v7 >> 2);
      if ( v9 <= 0xFFFFFFE )
        v8 = v9;
      v5 = 4 * v8 + 16;
    }
    else
    {
      v8 = n;
    }
    v14 = v8;
    v10 = (wchar_t *)sub_4EBDC0(v5);
    v10[1] = v14;
    v11 = v10;
    v10[2] = 0;
    v12 = (uint32_t *)(v10 + 3);
    if ( n == 1 )
    {
      v10[3] = *s;
    }
    else
    {
      v15 = (uint32_t *)(v10 + 3);
      wmemcpy(v10 + 3, s, n);
      v12 = v15;
    }
    if ( v11 != (wchar_t *)(uintptr_t)(g4_empty_string_rep) )
    {
      v11[2] = 0;
      *v11 = n;
      v12[n] = 0;
    }
  }
  *a1 = (uint32_t)(uintptr_t)(v12);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_F245F0  (binary VA: 0xf245f0)
// Original: sub_F245F0
// ----------------------------------------------------------------------------
int * sub_F245F0(uint32_t *a1, unsigned int a2)
{
  uint8_t *v2;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int *v7;
  int v8;
  size_t n;
  int *result;
  int *v11;
  unsigned int v12;
  uint8_t *src;

  v2 = (uint8_t *)*a1;
  v4 = *(uint32_t *)(*a1 - 12);
  v5 = *(uint32_t *)(*a1 - 8);
  if ( a2 >= *((uint32_t *)v2 - 3) )
    v4 = a2;
  if ( v4 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v5 < v4 )
  {
    if ( v4 < 2 * v5 )
      v4 = 2 * v5;
    if ( v4 + 29 > 0x1000 && v4 > v5 )
    {
      v12 = v4 + 4096 - (((uint16_t)v4 + 29) & 0xFFF);
      v4 = 1073741820;
      if ( v12 <= 0x3FFFFFFC )
        v4 = v12;
    }
  }
  src = v2;
  v6 = sub_4EBDC0(v4 + 13);
  *(uint32_t *)(v6 + 4) = v4;
  *(uint32_t *)(v6 + 8) = 0;
  v7 = (int *)v6;
  v8 = 0;
  n = *((uint32_t *)src - 3);
  if ( n != 0 )
  {
    if ( n == 1 )
      *((uint8_t *)v7 + 12) = *src;
    else
      memcpy(v7 + 3, src, n);
    v8 = *((uint32_t *)src - 3);
  }
  result = (int *)(&dword_20D3E6C);
  if ( v7 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    v7[2] = 0;
    *v7 = v8;
    *((uint8_t *)v7 + v8 + 12) = 0;
  }
  v11 = (int *)(*a1 - 12);
  if ( v11 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    result = (int *)__sync_fetch_and_add((volatile int32_t *)(*a1 - 4), 0xFFFFFFFF);
    if ( (int)(uintptr_t)(result) <= 0 )
      result = (int *)gll_operator_delete_arr((int)(uintptr_t)(v11));
  }
  *a1 = (uint32_t)(uintptr_t)(v7 + 3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F24750  (binary VA: 0xf24750)
// Original: sub_F24750
// ----------------------------------------------------------------------------
int sub_F24750(int a1)
{
  unsigned int v1;
  unsigned int v3;
  unsigned int v4;
  int v5;
  size_t v6;

  v1 = *(uint32_t *)a1;
  v3 = *(uint32_t *)(a1 + 4);
  if ( v1 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v1 > v3 && v1 < 2 * v3 )
    v1 = 2 * v3;
  if ( v1 + 29 > 0x1000 && v3 < v1 )
  {
    v4 = v1 + 4096 - (((uint16_t)v1 + 29) & 0xFFF);
    v1 = 1073741820;
    if ( v4 <= 0x3FFFFFFC )
      v1 = v4;
  }
  v5 = sub_4EBDC0(v1 + 13);
  *(uint32_t *)(v5 + 4) = v1;
  *(uint32_t *)(v5 + 8) = 0;
  v6 = 0;
  if ( *(uint32_t *)a1 != 0 )
  {
    if ( *(uint32_t *)a1 == 1 )
      *(uint8_t *)(v5 + 12) = *(uint8_t *)(a1 + 12);
    else
      memcpy((void *)(v5 + 12), (const void *)(a1 + 12), *(uint32_t *)a1);
    v6 = *(uint32_t *)a1;
  }
  if ( (int *)v5 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v5 + 8) = 0;
    *(uint32_t *)v5 = v6;
    *(uint8_t *)(v5 + v6 + 12) = 0;
  }
  return v5 + 12;
}

// ----------------------------------------------------------------------------
// Function: sub_F24900  (binary VA: 0xf24900)
// Original: sub_F24900
// ----------------------------------------------------------------------------
char ** sub_F24900(char **a1, const char *s)
{
  size_t v3;
  size_t n;
  unsigned int v5;
  int v6;
  int v7;
  char *v8;
  int v10;
  char *v11;

  if ( s == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v3 = strlen(s);
  if ( s == &s[v3] )
  {
    v8 = (char *)(uintptr_t)(byte_20D3E78);
    goto LABEL_12;
  }
  n = v3;
  if ( v3 > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( v3 + 29 > 0x1000 && v3 != 0 )
  {
    v5 = v3 + 4096 - (((uint16_t)v3 + 29) & 0xFFF);
    v6 = 1073741820;
    if ( v5 <= 0x3FFFFFFC )
      v6 = v5;
    v10 = v6;
    v7 = sub_4EBDC0(v6 + 13);
    *(uint32_t *)(v7 + 4) = v10;
    *(uint32_t *)(v7 + 8) = 0;
    v8 = (char *)(v7 + 12);
    goto LABEL_9;
  }
  v7 = sub_4EBDC0(v3 + 13);
  *(uint32_t *)(v7 + 4) = n;
  *(uint32_t *)(v7 + 8) = 0;
  v8 = (char *)(v7 + 12);
  if ( n != 1 )
  {
LABEL_9:
    v11 = v8;
    memcpy(v8, s, n);
    v8 = v11;
    goto LABEL_10;
  }
  *(uint8_t *)(v7 + 12) = *s;
LABEL_10:
  if ( (int *)v7 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v7 + 8) = 0;
    *(uint32_t *)v7 = n;
    v8[n] = 0;
  }
LABEL_12:
  *a1 = v8;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_F24A60  (binary VA: 0xf24a60)
// Original: sub_F24A60
// ----------------------------------------------------------------------------
char ** sub_F24A60(char **a1, int *a2, unsigned int a3, unsigned int a4)
{
  int v4;
  unsigned int v6;
  unsigned int v7;
  uint8_t *v8;
  uint8_t *src;
  size_t n;
  int v11;
  int v12;
  int v13;
  char *dest;
  int v16;
  char *v17;
  int v18;

  v4 = *a2;
  v6 = *(uint32_t *)(*a2 - 12);
  if ( v6 < a3 )
    sub_1900210("basic_string::substr");
  v7 = v6 - a3;
  if ( a4 <= v7 )
    v7 = a4;
  v8 = (uint8_t *)(v4 + a3 + v7);
  src = (uint8_t *)(a3 + v4);
  if ( v8 == src )
  {
    dest = (char *)(uintptr_t)(byte_20D3E78);
    goto LABEL_15;
  }
  if ( src == nullptr )
  {
    if ( v8 != nullptr )
      sub_18FFFD0("basic_string::_S_construct null not valid");
    v13 = sub_4EBDC0(0xDu);
    *(uint32_t *)(v13 + 4) = 0;
    *(uint32_t *)(v13 + 8) = 0;
    dest = (char *)(v13 + 12);
    n = 0;
    goto LABEL_12;
  }
  n = v8 - src;
  if ( n > 0x3FFFFFFC )
    sub_1900180("basic_string::_S_create");
  if ( n + 29 > 0x1000 && n != 0 )
  {
    v11 = ((uint16_t)n + 29) & 0xFFF;
    v12 = 1073741820;
    if ( n + 4096 - v11 <= 0x3FFFFFFC )
      v12 = n + 4096 - v11;
    v16 = v12;
    v13 = sub_4EBDC0(v12 + 13);
    *(uint32_t *)(v13 + 4) = v16;
    *(uint32_t *)(v13 + 8) = 0;
    dest = (char *)(v13 + 12);
    goto LABEL_12;
  }
  v13 = sub_4EBDC0(n + 13);
  *(uint32_t *)(v13 + 4) = n;
  *(uint32_t *)(v13 + 8) = 0;
  dest = (char *)(v13 + 12);
  if ( n != 1 )
  {
LABEL_12:
    v18 = v13;
    v17 = dest;
    memcpy(dest, src, n);
    dest = v17;
    v13 = v18;
    goto LABEL_13;
  }
  *(uint8_t *)(v13 + 12) = *src;
LABEL_13:
  if ( (int *)v13 != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v13 + 8) = 0;
    *(uint32_t *)v13 = n;
    dest[n] = 0;
  }
LABEL_15:
  *a1 = dest;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_F24C20  (binary VA: 0xf24c20)
// Original: sub_F24C20
// ----------------------------------------------------------------------------
unsigned int * sub_F24C20(int *a1, char *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4;
  unsigned int *result;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  int *v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  unsigned int v15;
  g4_int128_t v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int *v20;
  unsigned int *v21;
  unsigned int v22;
  unsigned int v23;
  g4_int128_t v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  bool v29;
  unsigned int v30;
  int v31;
  size_t v32;
  int v33;
  int v34;
  unsigned int *v35;
  unsigned int v36;
  unsigned int v37;
  char *v38;
  uint32_t *v39;
  int v40;
  char *v41;
  char *v42;
  uint32_t *v43;
  int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int *v50;
  int v51;
  unsigned int v54;
  unsigned int v55;
  int *v56;
  unsigned int *v57;
  int v58;
  uint32_t *v59;

  v4 = a3;
  result = (unsigned int *)a2;
  if ( a3 == 0 )
    return result;
  v6 = a1[1];
  if ( a3 <= (a1[2] - v6) >> 3 )
  {
    v46 = *a4;
    v7 = a4[1];
    v48 = (v6 - (int)(uintptr_t)(a2)) >> 3;
    if ( a3 >= v48 )
    {
      v18 = a3 - v48;
      v19 = (unsigned int *)a1[1];
      if ( a3 != v48 )
      {
        do
        {
          if ( v19 != nullptr )
          {
            *v19 = v46;
            v19[1] = v7;
          }
          v19 += 2;
          --v18;
        }
        while ( v18 != 0 );
        v19 = (unsigned int *)a1[1];
        v18 = a3 - v48;
      }
      v20 = &v19[2 * v18];
      a1[1] = (int)(uintptr_t)(v20);
      if ( a2 == (char *)v6 )
      {
        result = &v20[2 * v48];
        a1[1] = (int)(uintptr_t)(result);
      }
      else
      {
        v21 = (unsigned int *)a2;
        v57 = (unsigned int *)v6;
        do
        {
          if ( v20 != nullptr )
          {
            v22 = *v21;
            v20[1] = v21[1];
            *v20 = v22;
          }
          v21 += 2;
          v20 += 2;
        }
        while ( v57 != v21 );
        a1[1] += 8 * v48;
        v55 = ((unsigned int)((char *)v57 - (a2 + 8)) >> 3) + 1;
        if ( v55 <= 2 )
          goto LABEL_71;
        if ( 2 * (v55 >> 1) == 0 )
          goto LABEL_71;
        *(uint64_t *)&v24 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v46), _mm_cvtsi32_si128(v7)), 0);
        v23 = 0;
        *((uint64_t *)&v24 + 1) = (uint64_t)(uintptr_t)(v24);
        do
        {
          v25 = v23++;
          *(g4_int128_t *)&a2[16 * v25] = v24;
        }
        while ( v55 >> 1 > v23 );
        result = (unsigned int *)&a2[16 * (v55 >> 1)];
        if ( v55 != 2 * (v55 >> 1) )
        {
LABEL_71:
          do
          {
            *result = v46;
            result[1] = v7;
            result += 2;
          }
          while ( v57 != result );
        }
      }
    }
    else
    {
      v45 = 8 * a3;
      v49 = v6 - 8 * a3;
      v8 = (uint32_t *)a1[1];
      if ( v6 != v49 )
      {
        v9 = (int *)(v6 - 8 * a3);
        v56 = (int *)a1[1];
        do
        {
          if ( v8 != nullptr )
          {
            v10 = *v9;
            v8[1] = v9[1];
            *v8 = v10;
          }
          v9 += 2;
          v8 += 2;
        }
        while ( v56 != v9 );
        v6 = (int)(uintptr_t)(v56);
        v8 = (uint32_t *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v8[v45 / 4u]);
      v11 = (int)(v49 - (uint32_t)(uintptr_t)(a2)) >> 3;
      if ( v11 > 0 )
      {
        v12 = v49 - 8 * v11;
        v50 = result;
        v13 = -8 * v11 + v6;
        do
        {
          v14 = *(uint32_t *)(v12 + 8 * v11 - 8);
          *(uint32_t *)(v13 + 8 * v11 - 4) = *(uint32_t *)(v12 + 8 * v11 - 4);
          *(uint32_t *)(v13 + 8 * v11-- - 8) = v14;
        }
        while ( v11 != 0 );
        result = v50;
      }
      if ( a2 != &a2[v45] )
      {
        v54 = ((unsigned int)(v45 - 8) >> 3) + 1;
        if ( v54 <= 2 )
          goto LABEL_72;
        if ( 2 * (v54 >> 1) == 0 )
          goto LABEL_72;
        v15 = 0;
        *(uint64_t *)&v16 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v46), _mm_cvtsi32_si128(v7)), 0);
        *((uint64_t *)&v16 + 1) = (uint64_t)(uintptr_t)(v16);
        do
        {
          v17 = v15++;
          *(g4_int128_t *)&a2[16 * v17] = v16;
        }
        while ( v54 >> 1 > v15 );
        result = (unsigned int *)&a2[16 * (v54 >> 1)];
        if ( v54 != 2 * (v54 >> 1) )
        {
LABEL_72:
          do
          {
            *result = v46;
            result[1] = v7;
            result += 2;
          }
          while ( &a2[v45] != (char *)result );
        }
      }
    }
    return result;
  }
  v26 = *a1;
  v27 = (v6 - *a1) >> 3;
  if ( a3 > 0x1FFFFFFF - v27 )
    sub_1900180("vector::_M_fill_insert");
  v28 = a3;
  if ( v27 >= a3 )
    v28 = v27;
  v29 = __CFADD__(v27, v28);
  v30 = v27 + v28;
  if ( v29 || v30 > 0x1FFFFFFF )
  {
    v47 = -8;
    v31 = (int)(uintptr_t)(&a2[-v26]);
    v32 = 0xFFFFFFF8;
    v33 = v31 >> 3;
LABEL_44:
    v51 = sub_4EBDC0(v32);
    v4 = a3;
    v34 = v51;
    goto LABEL_45;
  }
  v33 = (int)(uintptr_t)(&a2[-v26]) >> 3;
  if ( v30 != 0 )
  {
    v47 = 8 * v30;
    v32 = 8 * v30;
    goto LABEL_44;
  }
  v51 = 0;
  v47 = 0;
  v34 = 0;
LABEL_45:
  v35 = (unsigned int *)(v34 + 8 * v33);
  v36 = v4;
  do
  {
    if ( v35 != nullptr )
    {
      v37 = *a4;
      v35[1] = a4[1];
      *v35 = v37;
    }
    v35 += 2;
    --v36;
  }
  while ( v36 != 0 );
  v58 = *a1;
  v38 = (char *)*a1;
  v39 = (uint32_t *)v51;
  if ( a2 != (char *)*a1 )
  {
    do
    {
      if ( v39 != nullptr )
      {
        v40 = *(uint32_t *)v38;
        v39[1] = *((uint32_t *)v38 + 1);
        *v39 = v40;
      }
      v38 += 8;
      v39 += 2;
    }
    while ( a2 != v38 );
    v39 = (uint32_t *)(v51 + 8 * ((unsigned int)(uintptr_t)(&a2[-v58 - 8]) >> 3) + 8);
  }
  v59 = &v39[2 * v4];
  v41 = (char *)a1[1];
  if ( a2 != v41 )
  {
    v42 = a2;
    v43 = v59;
    do
    {
      if ( v43 != nullptr )
      {
        v44 = *(uint32_t *)v42;
        v43[1] = *((uint32_t *)v42 + 1);
        *v43 = v44;
      }
      v42 += 8;
      v43 += 2;
    }
    while ( v41 != v42 );
    v59 += 2 * ((unsigned int)(v41 - (a2 + 8)) >> 3) + 2;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v51;
  a1[1] = (int)(uintptr_t)(v59);
  a1[2] = v51 + v47;
  return (unsigned int *)(v51 + v47);
}

// ----------------------------------------------------------------------------
// Function: sub_F250C0  (binary VA: 0xf250c0)
// Original: sub_F250C0
// ----------------------------------------------------------------------------
int * sub_F250C0(int *a1, char *a2, unsigned int a3, int a4)
{
  int *result;
  char *v5;
  int v6;
  int64_t v7; // xmm0_8
  uint32_t *v8;
  char *v9;
  char *v10;
  int v11;
  int v12;
  unsigned int v13;
  uint32_t *v14;
  char *v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  bool v19;
  unsigned int v20;
  size_t v21;
  unsigned int v22;
  uint32_t *v23;
  int v24;
  uint32_t *v25;
  char *v26;
  uint32_t *v27;
  char *v28;
  char *v29;
  uint32_t *v30;
  unsigned int v33;
  int v34;
  int v35;
  size_t v36;
  size_t v37;

  result = (int *)a2;
  if ( a3 == 0 )
    return result;
  v5 = (char *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v5)) >> 4 )
  {
    v6 = *(uint32_t *)(a4 + 4);
    v7 = *(uint64_t *)(a4 + 8);
    v36 = *(uint32_t *)a4;
    v33 = (v5 - (char *)result) >> 4;
    if ( a3 >= v33 )
    {
      v12 = a1[1];
      if ( a3 != v33 )
      {
        v13 = a3 - v33;
        do
        {
          if ( v12 != 0 )
          {
            *(uint32_t *)v12 = v36;
            *(uint32_t *)(v12 + 4) = v6;
            *(uint64_t *)(v12 + 8) = v7;
          }
          v12 += 16;
          --v13;
        }
        while ( v13 != 0 );
        v12 = a1[1];
      }
      v14 = (uint32_t *)(v12 + 16 * (a3 - v33));
      a1[1] = (int)(uintptr_t)(v14);
      if ( a2 == v5 )
      {
        result = (int *)(&v14[4 * v33]);
        a1[1] = (int)(uintptr_t)(result);
      }
      else
      {
        v15 = a2;
        do
        {
          if ( v14 != nullptr )
          {
            *v14 = *(uint32_t *)v15;
            v14[1] = *((uint32_t *)v15 + 1);
            v14[2] = *((uint32_t *)v15 + 2);
            v14[3] = *((uint32_t *)v15 + 3);
          }
          v15 += 16;
          v14 += 4;
        }
        while ( v5 != v15 );
        a1[1] += 16 * v33;
        do
        {
          *result = v36;
          result[1] = v6;
          *((uint64_t *)result + 1) = v7;
          result += 4;
        }
        while ( v5 != (char *)result );
      }
    }
    else
    {
      v8 = (uint32_t *)a1[1];
      v34 = 16 * a3;
      v9 = &v5[-16 * a3];
      if ( v5 != v9 )
      {
        v10 = &v5[-16 * a3];
        do
        {
          if ( v8 != nullptr )
          {
            *v8 = *(uint32_t *)v10;
            v8[1] = *((uint32_t *)v10 + 1);
            v8[2] = *((uint32_t *)v10 + 2);
            v8[3] = *((uint32_t *)v10 + 3);
          }
          v10 += 16;
          v8 += 4;
        }
        while ( v5 != v10 );
        v8 = (uint32_t *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v8[v34 / 4u]);
      v11 = (v9 - a2) >> 4;
      if ( v11 > 0 )
      {
        do
        {
          v9 -= 16;
          v5 -= 16;
          --v11;
          *(uint32_t *)v5 = *(uint32_t *)v9;
          *((uint32_t *)v5 + 1) = *((uint32_t *)v9 + 1);
          *((uint32_t *)v5 + 2) = *((uint32_t *)v9 + 2);
          *((uint32_t *)v5 + 3) = *((uint32_t *)v9 + 3);
        }
        while ( v11 != 0 );
      }
      if ( a2 != &a2[v34] )
      {
        do
        {
          *result = v36;
          result[1] = v6;
          *((uint64_t *)result + 1) = v7;
          result += 4;
        }
        while ( &a2[v34] != (char *)result );
      }
    }
    return result;
  }
  v16 = (int)(uintptr_t)(&v5[-*a1]) >> 4;
  if ( a3 > 0xFFFFFFF - v16 )
    sub_1900180("vector::_M_fill_insert");
  v17 = a3;
  if ( v16 >= a3 )
    v17 = v16;
  v18 = (int)(uintptr_t)(&a2[-*a1]) >> 4;
  v19 = __CFADD__(v17, v16);
  v20 = v17 + v16;
  if ( v19 || v20 > 0xFFFFFFF )
  {
    v37 = 0xFFFFFFF0;
    v21 = 0xFFFFFFF0;
LABEL_34:
    v35 = sub_4EBDC0(v21);
    goto LABEL_35;
  }
  if ( v20 != 0 )
  {
    v21 = 16 * v20;
    v37 = v21;
    goto LABEL_34;
  }
  v37 = 0;
  v35 = 0;
LABEL_35:
  v22 = a3;
  v23 = (uint32_t *)(v35 + 16 * v18);
  do
  {
    if ( v23 != nullptr )
    {
      *v23 = *(uint32_t *)a4;
      v23[1] = *(uint32_t *)(a4 + 4);
      v23[2] = *(uint32_t *)(a4 + 8);
      v23[3] = *(uint32_t *)(a4 + 12);
    }
    v23 += 4;
    --v22;
  }
  while ( v22 != 0 );
  v24 = *a1;
  v25 = (uint32_t *)v35;
  if ( a2 != (char *)*a1 )
  {
    v26 = (char *)*a1;
    do
    {
      if ( v25 != nullptr )
      {
        *v25 = *(uint32_t *)v26;
        v25[1] = *((uint32_t *)v26 + 1);
        v25[2] = *((uint32_t *)v26 + 2);
        v25[3] = *((uint32_t *)v26 + 3);
      }
      v26 += 16;
      v25 += 4;
    }
    while ( a2 != v26 );
    v25 = (uint32_t *)(v35 + ((unsigned int)(uintptr_t)(&a2[-v24 - 16]) & 0xFFFFFFF0) + 16);
  }
  v27 = &v25[4 * a3];
  v28 = (char *)a1[1];
  if ( a2 != v28 )
  {
    v29 = a2;
    v30 = &v25[4 * a3];
    do
    {
      if ( v30 != nullptr )
      {
        *v30 = *(uint32_t *)v29;
        v30[1] = *((uint32_t *)v29 + 1);
        v30[2] = *((uint32_t *)v29 + 2);
        v30[3] = *((uint32_t *)v29 + 3);
      }
      v29 += 16;
      v30 += 4;
    }
    while ( v28 != v29 );
    v27 = (uint32_t *)((char *)v27 + ((v28 - (a2 + 16)) & 0xFFFFFFF0) + 16);
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v35;
  a1[1] = (int)(uintptr_t)(v27);
  a1[2] = v37 + v35;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_F25430  (binary VA: 0xf25430)
// Original: sub_F25430
// ----------------------------------------------------------------------------
char * sub_F25430(int *a1, char *a2, unsigned int a3, size_t *a4)
{
  char *result;
  char *v5;
  size_t v6;
  uint32_t *v7;
  char *v8;
  char *v9;
  int v10;
  size_t *v11;
  unsigned int v12;
  size_t *v13;
  char *v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  bool v18;
  unsigned int v19;
  size_t v20;
  unsigned int v21;
  size_t *v22;
  int v23;
  uint32_t *v24;
  char *v25;
  uint32_t *v26;
  char *v27;
  char *v28;
  uint32_t *v29;
  unsigned int v32;
  int v33;
  int v34;
  size_t v35;
  size_t v36;
  size_t v37;
  size_t v38;

  result = a2;
  if ( a3 == 0 )
    return result;
  v5 = (char *)a1[1];
  if ( a3 <= (a1[2] - (int)(uintptr_t)(v5)) >> 4 )
  {
    v6 = a4[3];
    v35 = *a4;
    v37 = a4[1];
    v38 = a4[2];
    v32 = (v5 - result) >> 4;
    if ( a3 >= v32 )
    {
      v11 = (size_t *)a1[1];
      if ( a3 != v32 )
      {
        v12 = a3 - v32;
        do
        {
          if ( v11 != nullptr )
          {
            *v11 = v35;
            v11[1] = v37;
            v11[2] = v38;
            v11[3] = v6;
          }
          v11 += 4;
          --v12;
        }
        while ( v12 != 0 );
        v11 = (size_t *)a1[1];
      }
      v13 = &v11[4 * (a3 - v32)];
      a1[1] = (int)(uintptr_t)(v13);
      if ( a2 == v5 )
      {
        result = (char *)&v13[4 * v32];
        a1[1] = (int)(uintptr_t)(result);
      }
      else
      {
        v14 = a2;
        do
        {
          if ( v13 != nullptr )
          {
            *v13 = *(uint32_t *)v14;
            v13[1] = *((uint32_t *)v14 + 1);
            v13[2] = *((uint32_t *)v14 + 2);
            v13[3] = *((uint32_t *)v14 + 3);
          }
          v14 += 16;
          v13 += 4;
        }
        while ( v5 != v14 );
        a1[1] += 16 * v32;
        do
        {
          *(uint32_t *)result = v35;
          *((uint32_t *)result + 1) = v37;
          *((uint32_t *)result + 2) = v38;
          *((uint32_t *)result + 3) = v6;
          result += 16;
        }
        while ( v5 != result );
      }
    }
    else
    {
      v7 = (uint32_t *)a1[1];
      v33 = 16 * a3;
      v8 = &v5[-16 * a3];
      if ( v5 != v8 )
      {
        v9 = &v5[-16 * a3];
        do
        {
          if ( v7 != nullptr )
          {
            *v7 = *(uint32_t *)v9;
            v7[1] = *((uint32_t *)v9 + 1);
            v7[2] = *((uint32_t *)v9 + 2);
            v7[3] = *((uint32_t *)v9 + 3);
          }
          v9 += 16;
          v7 += 4;
        }
        while ( v5 != v9 );
        v7 = (uint32_t *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v7[v33 / 4u]);
      v10 = (v8 - a2) >> 4;
      if ( v10 > 0 )
      {
        do
        {
          v8 -= 16;
          v5 -= 16;
          --v10;
          *(uint32_t *)v5 = *(uint32_t *)v8;
          *((uint32_t *)v5 + 1) = *((uint32_t *)v8 + 1);
          *((uint32_t *)v5 + 2) = *((uint32_t *)v8 + 2);
          *((uint32_t *)v5 + 3) = *((uint32_t *)v8 + 3);
        }
        while ( v10 != 0 );
      }
      if ( a2 != &a2[v33] )
      {
        do
        {
          *(uint32_t *)result = v35;
          *((uint32_t *)result + 1) = v37;
          *((uint32_t *)result + 2) = v38;
          *((uint32_t *)result + 3) = v6;
          result += 16;
        }
        while ( &a2[v33] != result );
      }
    }
    return result;
  }
  v15 = (int)(uintptr_t)(&v5[-*a1]) >> 4;
  if ( a3 > 0xFFFFFFF - v15 )
    sub_1900180("vector::_M_fill_insert");
  v16 = a3;
  if ( v15 >= a3 )
    v16 = v15;
  v17 = (int)(uintptr_t)(&a2[-*a1]) >> 4;
  v18 = __CFADD__(v16, v15);
  v19 = v16 + v15;
  if ( v18 || v19 > 0xFFFFFFF )
  {
    v36 = 0xFFFFFFF0;
    v20 = 0xFFFFFFF0;
LABEL_34:
    v34 = sub_4EBDC0(v20);
    goto LABEL_35;
  }
  if ( v19 != 0 )
  {
    v20 = 16 * v19;
    v36 = v20;
    goto LABEL_34;
  }
  v36 = 0;
  v34 = 0;
LABEL_35:
  v21 = a3;
  v22 = (size_t *)(v34 + 16 * v17);
  do
  {
    if ( v22 != nullptr )
    {
      *v22 = *a4;
      v22[1] = a4[1];
      v22[2] = a4[2];
      v22[3] = a4[3];
    }
    v22 += 4;
    --v21;
  }
  while ( v21 != 0 );
  v23 = *a1;
  v24 = (uint32_t *)v34;
  if ( a2 != (char *)*a1 )
  {
    v25 = (char *)*a1;
    do
    {
      if ( v24 != nullptr )
      {
        *v24 = *(uint32_t *)v25;
        v24[1] = *((uint32_t *)v25 + 1);
        v24[2] = *((uint32_t *)v25 + 2);
        v24[3] = *((uint32_t *)v25 + 3);
      }
      v25 += 16;
      v24 += 4;
    }
    while ( a2 != v25 );
    v24 = (uint32_t *)(v34 + ((unsigned int)(uintptr_t)(&a2[-v23 - 16]) & 0xFFFFFFF0) + 16);
  }
  v26 = &v24[4 * a3];
  v27 = (char *)a1[1];
  if ( a2 != v27 )
  {
    v28 = a2;
    v29 = &v24[4 * a3];
    do
    {
      if ( v29 != nullptr )
      {
        *v29 = *(uint32_t *)v28;
        v29[1] = *((uint32_t *)v28 + 1);
        v29[2] = *((uint32_t *)v28 + 2);
        v29[3] = *((uint32_t *)v28 + 3);
      }
      v28 += 16;
      v29 += 4;
    }
    while ( v27 != v28 );
    v26 = (uint32_t *)((char *)v26 + ((v27 - (a2 + 16)) & 0xFFFFFFF0) + 16);
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v34;
  a1[1] = (int)(uintptr_t)(v26);
  a1[2] = v36 + v34;
  return (char *)a1;
}

// ----------------------------------------------------------------------------
// Function: sub_F257E0  (binary VA: 0xf257e0)
// Original: sub_F257E0
// ----------------------------------------------------------------------------
unsigned int * sub_F257E0(int *a1, char *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4;
  unsigned int *result;
  int v6;
  unsigned int v7;
  uint32_t *v8;
  int *v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  unsigned int v15;
  g4_int128_t v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int *v20;
  unsigned int *v21;
  unsigned int v22;
  unsigned int v23;
  g4_int128_t v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  bool v29;
  unsigned int v30;
  int v31;
  size_t v32;
  int v33;
  int v34;
  unsigned int *v35;
  unsigned int v36;
  unsigned int v37;
  char *v38;
  uint32_t *v39;
  int v40;
  char *v41;
  char *v42;
  uint32_t *v43;
  int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int *v50;
  int v51;
  unsigned int v54;
  unsigned int v55;
  int *v56;
  unsigned int *v57;
  int v58;
  uint32_t *v59;

  v4 = a3;
  result = (unsigned int *)a2;
  if ( a3 == 0 )
    return result;
  v6 = a1[1];
  if ( a3 <= (a1[2] - v6) >> 3 )
  {
    v46 = *a4;
    v7 = a4[1];
    v48 = (v6 - (int)(uintptr_t)(a2)) >> 3;
    if ( a3 >= v48 )
    {
      v18 = a3 - v48;
      v19 = (unsigned int *)a1[1];
      if ( a3 != v48 )
      {
        do
        {
          if ( v19 != nullptr )
          {
            *v19 = v46;
            v19[1] = v7;
          }
          v19 += 2;
          --v18;
        }
        while ( v18 != 0 );
        v19 = (unsigned int *)a1[1];
        v18 = a3 - v48;
      }
      v20 = &v19[2 * v18];
      a1[1] = (int)(uintptr_t)(v20);
      if ( a2 == (char *)v6 )
      {
        result = &v20[2 * v48];
        a1[1] = (int)(uintptr_t)(result);
      }
      else
      {
        v21 = (unsigned int *)a2;
        v57 = (unsigned int *)v6;
        do
        {
          if ( v20 != nullptr )
          {
            v22 = *v21;
            v20[1] = v21[1];
            *v20 = v22;
          }
          v21 += 2;
          v20 += 2;
        }
        while ( v57 != v21 );
        a1[1] += 8 * v48;
        v55 = ((unsigned int)((char *)v57 - (a2 + 8)) >> 3) + 1;
        if ( v55 <= 2 )
          goto LABEL_71;
        if ( 2 * (v55 >> 1) == 0 )
          goto LABEL_71;
        *(uint64_t *)&v24 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v46), _mm_cvtsi32_si128(v7)), 0);
        v23 = 0;
        *((uint64_t *)&v24 + 1) = (uint64_t)(uintptr_t)(v24);
        do
        {
          v25 = v23++;
          *(g4_int128_t *)&a2[16 * v25] = v24;
        }
        while ( v55 >> 1 > v23 );
        result = (unsigned int *)&a2[16 * (v55 >> 1)];
        if ( v55 != 2 * (v55 >> 1) )
        {
LABEL_71:
          do
          {
            *result = v46;
            result[1] = v7;
            result += 2;
          }
          while ( v57 != result );
        }
      }
    }
    else
    {
      v45 = 8 * a3;
      v49 = v6 - 8 * a3;
      v8 = (uint32_t *)a1[1];
      if ( v6 != v49 )
      {
        v9 = (int *)(v6 - 8 * a3);
        v56 = (int *)a1[1];
        do
        {
          if ( v8 != nullptr )
          {
            v10 = *v9;
            v8[1] = v9[1];
            *v8 = v10;
          }
          v9 += 2;
          v8 += 2;
        }
        while ( v56 != v9 );
        v6 = (int)(uintptr_t)(v56);
        v8 = (uint32_t *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v8[v45 / 4u]);
      v11 = (int)(v49 - (uint32_t)(uintptr_t)(a2)) >> 3;
      if ( v11 > 0 )
      {
        v12 = v49 - 8 * v11;
        v50 = result;
        v13 = -8 * v11 + v6;
        do
        {
          v14 = *(uint32_t *)(v12 + 8 * v11 - 8);
          *(uint32_t *)(v13 + 8 * v11 - 4) = *(uint32_t *)(v12 + 8 * v11 - 4);
          *(uint32_t *)(v13 + 8 * v11-- - 8) = v14;
        }
        while ( v11 != 0 );
        result = v50;
      }
      if ( a2 != &a2[v45] )
      {
        v54 = ((unsigned int)(v45 - 8) >> 3) + 1;
        if ( v54 <= 2 )
          goto LABEL_72;
        if ( 2 * (v54 >> 1) == 0 )
          goto LABEL_72;
        v15 = 0;
        *(uint64_t *)&v16 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v46), _mm_cvtsi32_si128(v7)), 0);
        *((uint64_t *)&v16 + 1) = (uint64_t)(uintptr_t)(v16);
        do
        {
          v17 = v15++;
          *(g4_int128_t *)&a2[16 * v17] = v16;
        }
        while ( v54 >> 1 > v15 );
        result = (unsigned int *)&a2[16 * (v54 >> 1)];
        if ( v54 != 2 * (v54 >> 1) )
        {
LABEL_72:
          do
          {
            *result = v46;
            result[1] = v7;
            result += 2;
          }
          while ( &a2[v45] != (char *)result );
        }
      }
    }
    return result;
  }
  v26 = *a1;
  v27 = (v6 - *a1) >> 3;
  if ( a3 > 0x1FFFFFFF - v27 )
    sub_1900180("vector::_M_fill_insert");
  v28 = a3;
  if ( v27 >= a3 )
    v28 = v27;
  v29 = __CFADD__(v27, v28);
  v30 = v27 + v28;
  if ( v29 || v30 > 0x1FFFFFFF )
  {
    v47 = -8;
    v31 = (int)(uintptr_t)(&a2[-v26]);
    v32 = 0xFFFFFFF8;
    v33 = v31 >> 3;
LABEL_44:
    v51 = sub_4EBDC0(v32);
    v4 = a3;
    v34 = v51;
    goto LABEL_45;
  }
  v33 = (int)(uintptr_t)(&a2[-v26]) >> 3;
  if ( v30 != 0 )
  {
    v47 = 8 * v30;
    v32 = 8 * v30;
    goto LABEL_44;
  }
  v51 = 0;
  v47 = 0;
  v34 = 0;
LABEL_45:
  v35 = (unsigned int *)(v34 + 8 * v33);
  v36 = v4;
  do
  {
    if ( v35 != nullptr )
    {
      v37 = *a4;
      v35[1] = a4[1];
      *v35 = v37;
    }
    v35 += 2;
    --v36;
  }
  while ( v36 != 0 );
  v58 = *a1;
  v38 = (char *)*a1;
  v39 = (uint32_t *)v51;
  if ( a2 != (char *)*a1 )
  {
    do
    {
      if ( v39 != nullptr )
      {
        v40 = *(uint32_t *)v38;
        v39[1] = *((uint32_t *)v38 + 1);
        *v39 = v40;
      }
      v38 += 8;
      v39 += 2;
    }
    while ( a2 != v38 );
    v39 = (uint32_t *)(v51 + 8 * ((unsigned int)(uintptr_t)(&a2[-v58 - 8]) >> 3) + 8);
  }
  v59 = &v39[2 * v4];
  v41 = (char *)a1[1];
  if ( a2 != v41 )
  {
    v42 = a2;
    v43 = v59;
    do
    {
      if ( v43 != nullptr )
      {
        v44 = *(uint32_t *)v42;
        v43[1] = *((uint32_t *)v42 + 1);
        *v43 = v44;
      }
      v42 += 8;
      v43 += 2;
    }
    while ( v41 != v42 );
    v59 += 2 * ((unsigned int)(v41 - (a2 + 8)) >> 3) + 2;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v51;
  a1[1] = (int)(uintptr_t)(v59);
  a1[2] = v51 + v47;
  return (unsigned int *)(v51 + v47);
}

// ----------------------------------------------------------------------------
// Function: sub_F25DB0  (binary VA: 0xf25db0)
// Original: sub_F25DB0
// ----------------------------------------------------------------------------
uint32_t * sub_F25DB0(int *a1, uint32_t *a2)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  bool v9;
  uint32_t *result;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  signed int v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;

  v3 = (uint32_t *)a1[1];
  v23 = v3;
  if ( v3 == (uint32_t *)a1[2] )
  {
    v18 = 9;
    v11 = 954437177 * (((int)(uintptr_t)(v3) - *a1) >> 2);
    if ( v11 != 0 )
    {
      if ( 954437177 * (((int)(uintptr_t)(v3) - *a1) >> 2) > (unsigned int)(1908874354 * (((int)(uintptr_t)(v3) - *a1) >> 2))
        || (unsigned int)(1908874354 * (((int)(uintptr_t)(v3) - *a1) >> 2)) > 0x71C71C7 )
      {
        v18 = -1;
      }
      else
      {
        v18 = 2 * (((int)(uintptr_t)(v3) - *a1) >> 2);
      }
    }
    v12 = (uint32_t *)sub_4EBDC0(v18 * 4);
    v13 = &v12[9 * v11];
    if ( v13 != nullptr )
    {
      *v13 = *a2;
      v13[1] = a2[1];
      v13[2] = a2[2];
      v13[3] = a2[3];
      v13[4] = a2[4];
      v13[5] = a2[5];
      v13[6] = a2[6];
      v13[7] = a2[7];
      v13[8] = a2[8];
    }
    v14 = sub_F218E0((uint32_t *)*a1, v23, v12);
    result = sub_F218E0(v23, (uint32_t *)a1[1], v14 + 9);
    v15 = result;
    if ( *a1 != 0 )
      result = (uint32_t *)gll_operator_delete_arr(*a1);
    *a1 = (int)(uintptr_t)(v12);
    a1[1] = (int)(uintptr_t)(v15);
    a1[2] = (int)(uintptr_t)(&v12[v18]);
  }
  else
  {
    v24 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 9);
      v3[1] = *(v3 - 8);
      v3[2] = *(v3 - 7);
      v3[3] = *(v3 - 6);
      v3[4] = *(v3 - 5);
      v3[5] = *(v3 - 4);
      v3[6] = *(v3 - 3);
      v3[7] = *(v3 - 2);
      v3[8] = *(v3 - 1);
      v24 = a1[1];
    }
    a1[1] = v24 + 36;
    v25 = *a2;
    v26 = a2[1];
    v27 = a2[2];
    v17 = 954437177 * ((v24 - 36 - (int)(uintptr_t)(v3)) >> 2);
    v28 = a2[3];
    v29 = a2[4];
    v30 = a2[5];
    v31 = a2[6];
    v32 = a2[7];
    v33 = a2[8];
    if ( v17 > 0 )
    {
      v19 = (uint32_t *)(v24 - 36);
      v20 = v24;
      v4 = v24 - 36;
      v5 = v24 - 72;
      v6 = v24 - 60;
      v21 = v24 - 24;
      v7 = v24 - 48;
      v22 = v24 - 12;
      do
      {
        v19 -= 9;
        v20 -= 36;
        v8 = v20 - v24;
        *(uint32_t *)(v8 + v24) = *v19;
        v9 = v17-- == 1;
        *(uint32_t *)(v8 + v4 + 40) = *(uint32_t *)((char *)v19 + v5 - v4 + 40);
        *(uint32_t *)(v8 + v4 + 44) = *(uint32_t *)((char *)v19 + v5 - v4 + 44);
        *(uint32_t *)(v8 + v21 + 36) = *(uint32_t *)((char *)v19 + v6 - v4 + 36);
        *(uint32_t *)(v8 + v21 + 40) = *(uint32_t *)((char *)v19 + v6 - v4 + 40);
        *(uint32_t *)(v8 + v21 + 44) = *(uint32_t *)((char *)v19 + v6 - v4 + 44);
        *(uint32_t *)(v8 + v22 + 36) = *(uint32_t *)((char *)v19 + v7 - v4 + 36);
        *(uint32_t *)(v8 + v22 + 40) = *(uint32_t *)((char *)v19 + v7 - v4 + 40);
        *(uint32_t *)(v8 + v22 + 44) = *(uint32_t *)((char *)v19 + v7 - v4 + 44);
      }
      while ( !v9 );
    }
    *v23 = v25;
    v23[1] = v26;
    v23[2] = v27;
    v23[3] = v28;
    v23[4] = v29;
    v23[5] = v30;
    v23[6] = v31;
    v23[7] = v32;
    v23[8] = v33;
    return v23;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F260D0  (binary VA: 0xf260d0)
// Original: sub_F260D0
// ----------------------------------------------------------------------------
int sub_F260D0(int a1, uint32_t *a2, int *a3)
{
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  char v8; // bp
  int v9;
  char v11; // bp
  int v12;
  int v13;
  int v14;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v17 = v5;
  if ( v4 == nullptr )
  {
    v4 = v5;
    goto LABEL_12;
  }
  v6 = *a3;
  while ( 1 )
  {
    v9 = v4[4];
    if ( v9 <= v6 )
      break;
    v7 = (uint32_t *)v4[2];
    v8 = 1;
    if ( v7 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v7;
  }
  v7 = (uint32_t *)v4[3];
  v8 = 0;
  if ( v7 != nullptr )
    goto LABEL_4;
LABEL_7:
  v16 = v4;
  if ( v8 == 0 )
  {
    if ( v9 >= v6 )
      goto LABEL_9;
LABEL_14:
    v11 = 1;
    if ( v17 != v16 )
      v11 = v16[4] > v6;
    v12 = opNew(0x18u);
    if ( v12 != -16 )
    {
      v13 = *a3;
      *(uint32_t *)(v12 + 20) = a3[1];
      *(uint32_t *)(v12 + 16) = v13;
    }
    sub_1904970(v11, v12, v16, v17);
    *(uint32_t *)a1 = v12;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    sub_F22930(v18, (int)(uintptr_t)(a2), 0, (int)(uintptr_t)(v4), a3);
    v14 = v18[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v14;
  }
  else
  {
    v16 = v4;
    v4 = (uint32_t *)sub_19048F0(v4);
    v6 = *a3;
    if ( v4[4] < *a3 )
      goto LABEL_14;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_F26210  (binary VA: 0xf26210)
// Original: sub_F26210
// ----------------------------------------------------------------------------
int sub_F26210(int a1, uint32_t *a2, int *a3)
{
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  char v8; // bp
  int v9;
  char v11; // bp
  int v12;
  int v13;
  int v14;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v17 = v5;
  if ( v4 == nullptr )
  {
    v4 = v5;
    goto LABEL_12;
  }
  v6 = *a3;
  while ( 1 )
  {
    v9 = v4[4];
    if ( v9 <= v6 )
      break;
    v7 = (uint32_t *)v4[2];
    v8 = 1;
    if ( v7 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v7;
  }
  v7 = (uint32_t *)v4[3];
  v8 = 0;
  if ( v7 != nullptr )
    goto LABEL_4;
LABEL_7:
  v16 = v4;
  if ( v8 == 0 )
  {
    if ( v9 >= v6 )
      goto LABEL_9;
LABEL_14:
    v11 = 1;
    if ( v17 != v16 )
      v11 = v16[4] > v6;
    v12 = opNew(0x18u);
    if ( v12 != -16 )
    {
      v13 = *a3;
      *(uint32_t *)(v12 + 20) = a3[1];
      *(uint32_t *)(v12 + 16) = v13;
    }
    sub_1904970(v11, v12, v16, v17);
    *(uint32_t *)a1 = v12;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    sub_F223C0(v18, (int)(uintptr_t)(a2), 0, (int)(uintptr_t)(v4), a3);
    v14 = v18[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v14;
  }
  else
  {
    v16 = v4;
    v4 = (uint32_t *)sub_19048F0(v4);
    v6 = *a3;
    if ( v4[4] < *a3 )
      goto LABEL_14;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_F26350  (binary VA: 0xf26350)
// Original: sub_F26350
// ----------------------------------------------------------------------------
int sub_F26350(int *a1, int a2)
{
  int v2;
  unsigned int v3;
  bool v4; // cc
  int v5;
  int v6;
  unsigned int i;
  const char *v8;
  char *v9;
  int v10;
  int v11;
  unsigned int v12;
  const char *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  char *v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v25;
  typedef int _g4_t_v27[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v23)) > _g4_s3 ? (12u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v25)) > _g4_s4 ? (24u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v27)) > _g4_s5 ? (44u + sizeof(_g4_t_v27)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);

  v25 = G4_VCALL<int>(a2, 212);
  v2 = *a1;
  v3 = (unsigned int)(uintptr_t)(byte_20D3E78);
  v4 = *a1 <= 0;
  v27[0] = (int)(uintptr_t)(byte_20D3E78);
  if ( !v4 )
  {
    v5 = dword_20D3E6C;
    if ( dword_20D3E6C == 1073741820 )
      goto LABEL_40;
    v6 = dword_20D3E6C;
    for ( i = (unsigned int)(uintptr_t)(byte_20D3E78); ; i = v3 )
    {
      v22 = v5 + 1;
      v23 = *(uint32_t *)(i - 8);
      if ( v5 + 1 > v23 || (v8 = " ", *(int *)(i - 4) > 0) )
      {
        if ( i > (unsigned int)(uintptr_t)(" ") || i + v5 < (unsigned int)(uintptr_t)(" ") )
        {
          if ( v22 != v23 || (v8 = " ", *(int *)(i - 4) > 0) )
          {
            sub_F245F0(v27, v22);
            v3 = v27[0];
            v8 = " ";
            v6 = *(uint32_t *)(v27[0] - 12);
          }
        }
        else
        {
          v9 = (char *)(&asc_1B1559A[-i]);
          if ( v22 != v23 || *(int *)(i - 4) > 0 )
          {
            sub_F245F0(v27, v22);
            v3 = v27[0];
            v6 = *(uint32_t *)(v27[0] - 12);
          }
          v8 = &v9[v3];
        }
      }
      *(uint8_t *)(v3 + v6) = *v8;
      v3 = v27[0];
      if ( (int *)(v27[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
      {
        *(uint32_t *)(v27[0] - 4) = 0;
        *(uint32_t *)(v3 - 12) = v22;
        *(uint8_t *)(v3 + v22) = 0;
        v3 = v27[0];
      }
      if ( --v2 == 0 )
        break;
      v5 = *(uint32_t *)(v3 - 12);
      if ( v5 == 1073741820 )
        goto LABEL_40;
      v6 = *(uint32_t *)(v3 - 12);
    }
  }
  v10 = *(uint32_t *)(v3 - 12);
  if ( (unsigned int)(1073741820 - v10) <= 0x24 )
LABEL_40:
    sub_1900180("basic_string::append");
  v11 = v10 + 37;
  v12 = *(uint32_t *)(v3 - 8);
  if ( v10 + 37 > v12 || *(int *)(v3 - 4) > 0 )
  {
    if ( v3 > (unsigned int)(uintptr_t)("uid=%s name=%s scope=%s type=%c%c%c%c")
      || (v14 = v3 + v10, v3 + v10 < (unsigned int)(uintptr_t)("uid=%s name=%s scope=%s type=%c%c%c%c")) )
    {
      if ( v11 == v12 && *(int *)(v3 - 4) <= 0 )
      {
        v14 = v3 + v10;
        v13 = "uid=%s name=%s scope=%s type=%c%c%c%c";
      }
      else
      {
        sub_F245F0(v27, v10 + 37);
        v13 = "uid=%s name=%s scope=%s type=%c%c%c%c";
        v14 = *(uint32_t *)(v27[0] - 12) + v27[0];
      }
    }
    else
    {
      v19 = (char *)(&aUidSNameSScope /* "uid=%s name=%s scope=%s type=%c%c%c%c" */[-v3]);
      if ( v11 == v12 && *(int *)(v3 - 4) <= 0 )
      {
        v13 = "uid=%s name=%s scope=%s type=%c%c%c%c";
      }
      else
      {
        sub_F245F0(v27, v10 + 37);
        v14 = v27[0] + *(uint32_t *)(v27[0] - 12);
        v13 = &v19[v27[0]];
      }
    }
  }
  else
  {
    v14 = v3 + v10;
    v13 = "uid=%s name=%s scope=%s type=%c%c%c%c";
  }
  *(uint32_t *)v14 = *(uint32_t *)v13;
  *(uint32_t *)(v14 + 4) = *((uint32_t *)v13 + 1);
  *(uint32_t *)(v14 + 8) = *((uint32_t *)v13 + 2);
  *(uint32_t *)(v14 + 12) = *((uint32_t *)v13 + 3);
  *(uint32_t *)(v14 + 16) = *((uint32_t *)v13 + 4);
  *(uint32_t *)(v14 + 20) = *((uint32_t *)v13 + 5);
  *(uint32_t *)(v14 + 24) = *((uint32_t *)v13 + 6);
  *(uint32_t *)(v14 + 28) = *((uint32_t *)v13 + 7);
  *(uint32_t *)(v14 + 32) = *((uint32_t *)v13 + 8);
  *(uint8_t *)(v14 + 36) = v13[36];
  v15 = v27[0];
  if ( (int *)(v27[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
  {
    *(uint32_t *)(v27[0] - 4) = 0;
    *(uint32_t *)(v15 - 12) = v11;
    *(uint8_t *)(v15 + v10 + 37) = 0;
  }
  v20 = G4_VCALL<int>(a2, 100);
  v21 = G4_VCALL<int>(a2, 48);
  v16 = G4_VCALL<int>(a2, 96);
  glitch::os::Printer::logf(1, v27[0], v16, v21, v20, (char)v25, SBYTE1(v25), v25 << 8 >> 24, v25 >> 24);
  ++*a1;
  v17 = v27[0] - 12;
  if ( (int *)(v27[0] - 12) != (int *)(uintptr_t)(&dword_20D3E6C
)    && __sync_fetch_and_add((volatile int32_t *)(v27[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    gll_operator_delete_arr(v17);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: sub_F266D0  (binary VA: 0xf266d0)
// Original: sub_F266D0
// ----------------------------------------------------------------------------
int * sub_F266D0(int *a1, char *a2, int *a3)
{
  char *v4;
  int v5;
  int v6;
  int *result;
  int v8;
  int *v9;
  int *v10;
  int v11;
  int *v12;
  char *v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  int v20;
  int *v21;
  char *v22;
  uint32_t *v23;
  int *v24;
  int v25;
  int v26;
  uint32_t *v27;
  char *v28;
  int *v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int *v36;
  int *v37;
  int *v38;
  int v39;
  int *v40;
  int v41;
  int v42;
  int *v43;
  char *v44;
  int *v45;
  uint32_t *v46;
  size_t v47;
  int v48;
  int *v49;
  uint32_t *v50;
  int *v52;
  int v53;
  int v54;

  v4 = (char *)a1[1];
  if ( v4 != (char *)a1[2] )
  {
    if ( v4 != nullptr )
    {
      *(uint32_t *)v4 = *((uint32_t *)v4 - 2);
      v5 = *((uint32_t *)v4 - 1);
      if ( *(int *)(v5 - 4) < 0 )
      {
        v5 = sub_F24750(v5 - 12);
      }
      else if ( (int *)(v5 - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
      {
        __sync_add_and_fetch((volatile int32_t *)(v5 - 4), 1u);
      }
      *((uint32_t *)v4 + 1) = v5;
      v6 = a1[1];
    }
    else
    {
      v6 = 0;
    }
    result = (int *)(v6 + 8);
    a1[1] = (int)(uintptr_t)(result);
    v8 = a3[1];
    v54 = *a3;
    v53 = v8;
    v52 = (int *)(v8 - 12);
    if ( *(int *)(v8 - 4) < 0 )
    {
      v53 = sub_F24750(v8 - 12);
      result = (int *)a1[1];
      v52 = (int *)(v53 - 12);
    }
    else if ( (int *)(v8 - 12) != (int *)(uintptr_t)(&dword_20D3E6C) )
    {
      __sync_add_and_fetch((volatile int32_t *)(v8 - 4), 1u);
      result = (int *)a1[1];
    }
    v41 = ((char *)(result - 4) - a2) >> 3;
    if ( v41 > 0 )
    {
      v9 = result - 3;
      v43 = result - 3;
      v47 = (size_t)(result - 6);
      v45 = result - 4;
      v49 = result - 5;
      do
      {
        *(int *)((char *)v45  + ((uintptr_t)((char *)v9) - (uintptr_t)(char *)(v43))) = *(uint32_t *)((char *)v9 - (char *)v43 + v47);
        v35 = *v9;
        v10 = *(int **)((char *)v49  + ((uintptr_t)((char *)v9) - (uintptr_t)(char *)(v43)));
        v36 = (int *)(*v9 - 12);
        result = v10 - 3;
        if ( v10 - 3 != v36 )
        {
          if ( *(v10 - 1) >= 0 )
          {
            if ( result != (int *)(uintptr_t)(&dword_20D3E6C) )
            {
              __sync_add_and_fetch(v10 - 1, 1u);
              v35 = *v9;
              v36 = (int *)(*v9 - 12);
            }
          }
          else
          {
            result = (int *)sub_F24750((int)(uintptr_t)(result));
            v35 = *v9;
            v10 = result;
            v36 = (int *)(*v9 - 12);
          }
          if ( v36 != (int *)(uintptr_t)(&dword_20D3E6C) )
          {
            result = (int *)__sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF);
            if ( (int)(uintptr_t)(result) <= 0 )
              result = (int *)gll_operator_delete_arr((int)(uintptr_t)(v36));
          }
          *v9 = (int)(uintptr_t)(v10);
        }
        v9 -= 2;
        --v41;
      }
      while ( v41 != 0 );
    }
    *(uint32_t *)a2 = v54;
    v11 = *((uint32_t *)a2 + 1);
    v12 = (int *)(v11 - 12);
    if ( v52 != (int *)(v11 - 12) )
    {
      if ( *(int *)(v53 - 4) < 0 )
      {
        result = (int *)sub_F24750((int)(uintptr_t)(v52));
        v11 = *((uint32_t *)a2 + 1);
        v12 = (int *)(v11 - 12);
      }
      else
      {
        result = (int *)v53;
        if ( v52 != (int *)(uintptr_t)(&dword_20D3E6C) )
        {
          __sync_add_and_fetch((volatile int32_t *)(v53 - 4), 1u);
          result = (int *)v53;
          v11 = *((uint32_t *)a2 + 1);
          v12 = (int *)(v11 - 12);
        }
      }
      if ( v12 != (int *)(uintptr_t)(&dword_20D3E6C) && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        v40 = result;
        gll_operator_delete_arr((int)(uintptr_t)(v12));
        result = v40;
      }
      *((uint32_t *)a2 + 1) = (uint32_t)(uintptr_t)(result);
    }
    if ( v52 != (int *)(uintptr_t)(&dword_20D3E6C) )
    {
      result = (int *)__sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF);
      if ( (int)(uintptr_t)(result) <= 0 )
        return (int *)gll_operator_delete_arr((int)(uintptr_t)(v52));
    }
    return result;
  }
  v13 = (char *)*a1;
  v14 = (v4 - v13) >> 3;
  if ( v14 != 0 )
  {
    v15 = 2 * v14;
    if ( v14 > 2 * v14 || v15 > 0x1FFFFFFF )
    {
      v48 = -2;
      v16 = (a2 - v13) >> 3;
    }
    else
    {
      v48 = 4 * v14;
      v16 = (a2 - v13) >> 3;
      if ( v15 == 0 )
      {
        v46 = nullptr;
        v18 = 8;
        v17 = 0;
        goto LABEL_33;
      }
    }
  }
  else
  {
    v48 = 2;
    v16 = (a2 - v13) >> 3;
  }
  v17 = sub_4EBDC0(v48 * 4);
  v46 = (uint32_t *)v17;
  v18 = v17 + 8;
LABEL_33:
  v19 = (int *)(v17 + 8 * v16);
  if ( v19 != nullptr )
  {
    *v19 = *a3;
    v20 = a3[1];
    v21 = (int *)(v20 - 12);
    if ( *(int *)(v20 - 4) < 0 )
    {
      v39 = v18;
      v20 = sub_F24750((int)(uintptr_t)(v21));
      v18 = v39;
    }
    else if ( v21 != (int *)(uintptr_t)(&dword_20D3E6C) )
    {
      __sync_add_and_fetch((volatile int32_t *)(v20 - 4), 1u);
    }
    v19[1] = v20;
  }
  v22 = (char *)*a1;
  if ( a2 != (char *)*a1 )
  {
    v23 = v46;
    v24 = (int *)(&dword_20D3E6C);
    do
    {
      if ( v23 != nullptr )
      {
        *v23 = *(uint32_t *)v22;
        v25 = *((uint32_t *)v22 + 1);
        v26 = v25 - 12;
        if ( *(int *)(v25 - 4) >= 0 )
        {
          if ( (int *)v26 != v24 )
            __sync_add_and_fetch((volatile int32_t *)(v25 - 4), 1u);
        }
        else
        {
          v37 = v24;
          v25 = sub_F24750(v26);
          v24 = v37;
        }
        v23[1] = v25;
      }
      v22 += 8;
      v23 += 2;
    }
    while ( a2 != v22 );
    v18 = (int)(uintptr_t)(v23 + 2);
  }
  v44 = (char *)a1[1];
  v27 = (uint32_t *)v18;
  if ( a2 != v44 )
  {
    v28 = a2;
    v29 = (int *)(&dword_20D3E6C);
    do
    {
      if ( v27 != nullptr )
      {
        *v27 = *(uint32_t *)v28;
        v30 = *((uint32_t *)v28 + 1);
        v31 = v30 - 12;
        if ( *(int *)(v30 - 4) >= 0 )
        {
          if ( (int *)v31 != v29 )
            __sync_add_and_fetch((volatile int32_t *)(v30 - 4), 1u);
        }
        else
        {
          v38 = v29;
          v30 = sub_F24750(v31);
          v29 = v38;
        }
        v27[1] = v30;
      }
      v28 += 8;
      v27 += 2;
    }
    while ( v44 != v28 );
    v44 = (char *)a1[1];
  }
  v42 = *a1;
  if ( v44 != (char *)*a1 )
  {
    v50 = v27;
    v32 = *a1;
    v33 = *a1 + 4;
    do
    {
      v34 = *(uint32_t *)(v33 + v32 - v42);
      if ( (int *)(v34 - 12) != (int *)(uintptr_t)(&dword_20D3E6C
)        && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
      {
        gll_operator_delete_arr(v34 - 12);
      }
      v32 += 8;
    }
    while ( v44 != (char *)v32 );
    v27 = v50;
    v42 = *a1;
  }
  if ( v42 != 0 )
    gll_operator_delete_arr(v42);
  a1[1] = (int)(uintptr_t)(v27);
  *a1 = (int)(uintptr_t)(v46);
  a1[2] = (int)(uintptr_t)(&v46[v48]);
  return (int *)(&v46[v48]);
}

// ----------------------------------------------------------------------------
// Function: sub_F26CB0  (binary VA: 0xf26cb0)
// Original: sub_F26CB0
// ----------------------------------------------------------------------------
void sub_F26CB0(int a1, uint8_t *a2, float *a3, int a4, int a5, float *a6, int a7)
{
  float v8; // xmm0_4
  int v9;
  float *v10;
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float *v14;
  float v15;

  *(uint32_t *)(a1 + 4) = a5;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(a2);
  *(uint32_t *)(a1 + 8) = a4;
  if ( a7 == 0x7FFFFFFF )
  {
    *(uint32_t *)(a1 + 12) = G4_VCALL<int>(a2, 240);
    a2 = *(uint8_t **)a1;
    if ( a6 != nullptr )
      goto LABEL_3;
  }
  else
  {
    *(uint32_t *)(a1 + 12) = a7;
    if ( a6 != nullptr )
    {
LABEL_3:
      v8 = (float)((float)((float)(a6[1] - a3[1]) * (float)(a6[1] - a3[1]))
                 + (float)((float)(*a6 - *a3) * (float)(*a6 - *a3)))
         + (float)((float)(a6[2] - a3[2]) * (float)(a6[2] - a3[2]));
      goto LABEL_4;
    }
  }
  v9 = *(uint32_t *)a2;
  if ( (a2[245] & 8) != 0 )
  {
    v14 = (float *)(*(int (**)(uint8_t *))(v9 + 64))(a2);
    v13 = (float)(v14[3] + *v14) * 0.5;
    v12 = (float)(v14[4] + v14[1]) * 0.5;
    v11 = (float)(v14[5] + v14[2]) * 0.5;
  }
  else
  {
    v10 = (float *)(*(int (**)(uint8_t *))(v9 + 72))(a2);
    v11 = v10[14];
    v12 = v10[13];
    v13 = v10[12];
  }
  a2 = *(uint8_t **)a1;
  v8 = (float)((float)((float)(v12 - a3[1]) * (float)(v12 - a3[1])) + (float)((float)(v13 - *a3) * (float)(v13 - *a3)))
     + (float)((float)(v11 - a3[2]) * (float)(v11 - a3[2]));
LABEL_4:
  v15 = ((long double (*)(uint8_t *))*(uint32_t *)(*(uint32_t *)a2 + 232))(a2);
  *(float *)(a1 + 16) = v15 + v8;
}

// ----------------------------------------------------------------------------
// Function: sub_F26E10  (binary VA: 0xf26e10)
// Original: sub_F26E10
// ----------------------------------------------------------------------------
char sub_F26E10(int a1)
{
  int v2;
  uint16_t *v3;
  unsigned int v4;
  uint16_t *v5;
  float v6; // xmm7_4
  float v7; // xmm4_4
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm7_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm5_4
  float v26; // xmm4_4
  float v27; // xmm1_4
  float v28; // xmm7_4
  float v29; // xmm5_4
  float v30; // xmm6_4
  float v31; // xmm1_4
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;

  v2 = *(uint32_t *)(a1 + 244);
  if ( (v2 & 0xE0000) == 0xE0000 )
  {
    if ( (v2 & 0x10000) == 0 )
    {
      v3 = (uint16_t *)(a1 + 80);
      *(uint32_t *)(a1 + 244) = v2 | 0x10000;
      v4 = 64;
      if ( ((a1 + 80) & 1) != 0 )
      {
        *(uint8_t *)(a1 + 80) = 0;
        v3 = (uint16_t *)(a1 + 81);
        LOWORD(v4) = 63;
      }
      if ( ((uint8_t)(uintptr_t)(v3) & 2) != 0 )
      {
        *v3 = 0;
        v4 -= 2;
        ++v3;
      }
      memset(v3, 0, 4 * (v4 >> 2));
      v5 = &v3[2 * (v4 >> 2)];
      if ( (v4 & 2) != 0 )
        *v5++ = 0;
      if ( (v4 & 1) != 0 )
        *(uint8_t *)v5 = 0;
      *(uint32_t *)(a1 + 80) = 1065353216;
      *(uint32_t *)(a1 + 100) = 1065353216;
      *(uint32_t *)(a1 + 120) = 1065353216;
      *(uint32_t *)(a1 + 140) = 1065353216;
      v2 = *(uint32_t *)(a1 + 244);
    }
  }
  else
  {
    if ( (v2 & 0x60) != 0 )
    {
      v6 = *(float *)(a1 + 156);
      v7 = *(float *)(a1 + 168);
      v8 = *(float *)(a1 + 164);
      *(uint32_t *)(a1 + 92) = 0;
      *(uint32_t *)(a1 + 108) = 0;
      v36 = (float)(v6 * v6) + (float)(v6 * v6);
      v9 = (float)(v8 * v8) + (float)(v8 * v8);
      v10 = *(float *)(a1 + 160);
      v11 = (float)(v6 * v8) + (float)(v6 * v8);
      v33 = (float)(v6 * *(float *)(a1 + 168)) + (float)(v6 * *(float *)(a1 + 168));
      v12 = (float)(v6 * v10) + (float)(v6 * v10);
      v13 = (float)(v7 * v10) + (float)(v7 * v10);
      v14 = (float)(v10 * v8) + (float)(v10 * v8);
      v15 = (float)(v8 * *(float *)(a1 + 168)) + (float)(v8 * *(float *)(a1 + 168));
      v16 = -(float)((float)(v10 * v10) + (float)(v10 * v10));
      v17 = v16 - v9;
      v18 = (float)(v16 - v36) + 1.0;
      v37 = v17 + 1.0;
      v19 = v15 + v12;
      v20 = v12 - v15;
      v21 = v33 + v14;
      v22 = v14 - v33;
      v35 = v19;
      v23 = v11 - v13;
      *(float *)(a1 + 96) = v20;
      v24 = v11 + v13;
      *(float *)(a1 + 104) = v21;
      v34 = v23;
      *(float *)(a1 + 112) = v24;
      v25 = 1.0 - (float)(v9 + v36);
      *(float *)(a1 + 80) = v37;
      *(float *)(a1 + 84) = v35;
      *(float *)(a1 + 88) = v23;
      *(float *)(a1 + 100) = v25;
      *(float *)(a1 + 116) = v22;
      *(uint32_t *)(a1 + 124) = 0;
      *(float *)(a1 + 120) = v18;
      *(uint32_t *)(a1 + 128) = 0;
      *(uint32_t *)(a1 + 132) = 0;
      *(uint32_t *)(a1 + 136) = 0;
      *(uint32_t *)(a1 + 140) = 1065353216;
      if ( (v2 & 0x80000) == 0 )
      {
        v26 = *(float *)(a1 + 172);
        *(float *)(a1 + 80) = v37 * v26;
        *(float *)(a1 + 84) = v35 * v26;
        v27 = *(float *)(a1 + 176);
        v28 = v20 * v27;
        v29 = v25 * v27;
        v30 = v21 * v27;
        v31 = *(float *)(a1 + 180);
        *(float *)(a1 + 88) = v26 * v34;
        *(float *)(a1 + 96) = v28;
        *(float *)(a1 + 100) = v29;
        *(float *)(a1 + 104) = v30;
        *(float *)(a1 + 112) = v24 * v31;
        *(float *)(a1 + 116) = v22 * v31;
        *(float *)(a1 + 120) = v18 * v31;
      }
    }
    v2 &= ~0x10000u;
    *(uint32_t *)(a1 + 128) = *(uint32_t *)(a1 + 144);
    *(uint32_t *)(a1 + 132) = *(uint32_t *)(a1 + 148);
    *(uint32_t *)(a1 + 136) = *(uint32_t *)(a1 + 152);
  }
  LOBYTE(v2) = v2 & 0x1F;
  *(uint32_t *)(a1 + 244) = v2;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sub_F278E0  (binary VA: 0xf278e0)
// Original: sub_F278E0
// ----------------------------------------------------------------------------
int * sub_F278E0(int *a1, char *a2, unsigned int a3, int *a4)
{
  int *result;
  char *v5;
  int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  int *v10;
  uint32_t *v11;
  char *v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  bool v16;
  unsigned int v17;
  size_t v18;
  int v19;
  unsigned int v20;
  int *v21;
  int v22;
  uint32_t *v23;
  char *v24;
  uint32_t *v25;
  char *v26;
  char *v27;
  uint32_t *v28;
  char *v29;
  uint32_t *v30;
  char *v31;
  int v32;
  int v33;
  int v34;
  size_t v37;
  size_t v38;
  size_t v39;
  int v40;
  int v41;
  int v42;

  result = (int *)a2;
  if ( a3 == 0 )
    return result;
  v5 = (char *)a1[1];
  if ( a3 <= -858993459 * ((a1[2] - (int)(uintptr_t)(v5)) >> 2) )
  {
    v6 = a4[4];
    v33 = *a4;
    v40 = a4[1];
    v41 = a4[2];
    v42 = a4[3];
    v37 = -858993459 * ((v5 - (char *)result) >> 2);
    if ( a3 < v37 )
    {
      v29 = &v5[-20 * a3];
      v39 = 20 * a3;
      v30 = (uint32_t *)a1[1];
      if ( v5 != v29 )
      {
        v31 = &v5[-20 * a3];
        do
        {
          if ( v30 != nullptr )
          {
            *v30 = *(uint32_t *)v31;
            v30[1] = *((uint32_t *)v31 + 1);
            v30[2] = *((uint32_t *)v31 + 2);
            v30[3] = *((uint32_t *)v31 + 3);
            v30[4] = *((uint32_t *)v31 + 4);
          }
          v31 += 20;
          v30 += 5;
        }
        while ( v5 != v31 );
        v30 = (uint32_t *)a1[1];
      }
      a1[1] = (int)(uintptr_t)(&v30[v39 / 4]);
      v32 = -858993459 * ((v29 - a2) >> 2);
      if ( v32 > 0 )
      {
        do
        {
          v29 -= 20;
          v5 -= 20;
          --v32;
          *(uint32_t *)v5 = *(uint32_t *)v29;
          *((uint32_t *)v5 + 1) = *((uint32_t *)v29 + 1);
          *((uint32_t *)v5 + 2) = *((uint32_t *)v29 + 2);
          *((uint32_t *)v5 + 3) = *((uint32_t *)v29 + 3);
          *((uint32_t *)v5 + 4) = *((uint32_t *)v29 + 4);
        }
        while ( v32 != 0 );
      }
      if ( a2 != &a2[v39] )
      {
        do
        {
          *result = v33;
          result[1] = v40;
          result[2] = v41;
          result[3] = v42;
          result[4] = v6;
          result += 5;
        }
        while ( &a2[v39] != (char *)result );
      }
    }
    else
    {
      v7 = a3 - v37;
      v8 = a1[1];
      if ( a3 != v37 )
      {
        v9 = a3 - v37;
        v10 = (int *)a1[1];
        do
        {
          if ( v10 != nullptr )
          {
            v10[2] = v41;
            *v10 = v33;
            v10[1] = v40;
            v10[3] = v42;
            v10[4] = v6;
          }
          v10 += 5;
          --v9;
        }
        while ( v9 != 0 );
        v7 = a3 - v37;
        v8 = a1[1];
      }
      v11 = (uint32_t *)(v8 + 20 * v7);
      a1[1] = (int)(uintptr_t)(v11);
      if ( a2 == v5 )
      {
        result = (int *)(&v11[(v5 - (char *)result) >> 2]);
        a1[1] = (int)(uintptr_t)(result);
      }
      else
      {
        v12 = a2;
        do
        {
          if ( v11 != nullptr )
          {
            *v11 = *(uint32_t *)v12;
            v11[1] = *((uint32_t *)v12 + 1);
            v11[2] = *((uint32_t *)v12 + 2);
            v11[3] = *((uint32_t *)v12 + 3);
            v11[4] = *((uint32_t *)v12 + 4);
          }
          v12 += 20;
          v11 += 5;
        }
        while ( v5 != v12 );
        a1[1] += 4 * ((v5 - (char *)result) >> 2);
        do
        {
          *result = v33;
          result[1] = v40;
          result[2] = v41;
          result[3] = v42;
          result[4] = v6;
          result += 5;
        }
        while ( v5 != (char *)result );
      }
    }
    return result;
  }
  v13 = -858993459 * ((int)(uintptr_t)(&v5[-*a1]) >> 2);
  if ( a3 > 214748364 - v13 )
    sub_1900180("vector::_M_fill_insert");
  v14 = a3;
  if ( v13 >= a3 )
    v14 = v13;
  v15 = -858993459 * ((int)(uintptr_t)(&a2[-*a1]) >> 2);
  v16 = __CFADD__(v14, v13);
  v17 = v14 + v13;
  if ( v16 || v17 > 0xCCCCCCC )
  {
    v38 = 0xFFFFFFF0;
    v18 = 0xFFFFFFF0;
LABEL_23:
    v34 = sub_4EBDC0(v18);
    v19 = v34;
    goto LABEL_24;
  }
  if ( v17 != 0 )
  {
    v18 = 20 * v17;
    v38 = v18;
    goto LABEL_23;
  }
  v34 = 0;
  v38 = 0;
  v19 = 0;
LABEL_24:
  v20 = a3;
  v21 = (int *)(v19 + 20 * v15);
  do
  {
    if ( v21 != nullptr )
    {
      *v21 = *a4;
      v21[1] = a4[1];
      v21[2] = a4[2];
      v21[3] = a4[3];
      v21[4] = a4[4];
    }
    v21 += 5;
    --v20;
  }
  while ( v20 != 0 );
  v22 = *a1;
  v23 = (uint32_t *)v34;
  if ( a2 != (char *)*a1 )
  {
    v24 = (char *)*a1;
    do
    {
      if ( v23 != nullptr )
      {
        *v23 = *(uint32_t *)v24;
        v23[1] = *((uint32_t *)v24 + 1);
        v23[2] = *((uint32_t *)v24 + 2);
        v23[3] = *((uint32_t *)v24 + 3);
        v23[4] = *((uint32_t *)v24 + 4);
      }
      v24 += 20;
      v23 += 5;
    }
    while ( a2 != v24 );
    v23 = (uint32_t *)(v34 + 4 * ((unsigned int)(uintptr_t)(&a2[-v22 - 20]) >> 2) + 20);
  }
  v25 = &v23[5 * a3];
  v26 = (char *)a1[1];
  if ( a2 != v26 )
  {
    v27 = a2;
    v28 = &v23[5 * a3];
    do
    {
      if ( v28 != nullptr )
      {
        *v28 = *(uint32_t *)v27;
        v28[1] = *((uint32_t *)v27 + 1);
        v28[2] = *((uint32_t *)v27 + 2);
        v28[3] = *((uint32_t *)v27 + 3);
        v28[4] = *((uint32_t *)v27 + 4);
      }
      v27 += 20;
      v28 += 5;
    }
    while ( v26 != v27 );
    v25 += ((unsigned int)(v26 - (a2 + 20)) >> 2) + 5;
  }
  if ( *a1 != 0 )
    gll_operator_delete_arr(*a1);
  *a1 = v34;
  a1[1] = (int)(uintptr_t)(v25);
  a1[2] = v38 + v34;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_F28D80  (binary VA: 0xf28d80)
// Original: sub_F28D80
// ----------------------------------------------------------------------------
int * sub_F28D80(int *result, uint32_t *a2, int a3, int *a4)
{
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  typedef char _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v19)) > _g4_s4 ? (12u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v20)) > _g4_s5 ? (12u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v21)) > _g4_s6 ? (16u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v22)) > _g4_s7 ? (20u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v23)) > _g4_s8 ? (20u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v24)) > _g4_s9 ? (20u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v25)) > _g4_s10 ? (20u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v26)) > _g4_s11 ? (24u + sizeof(_g4_t_v26)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);

  v21 = result;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_19;
    v10 = a2[4];
    v25 = v10;
    if ( *(uint32_t *)(v10 + 16) >= *a4 )
      goto LABEL_19;
    v15 = a3 == v10;
    v11 = opNew(0x18u);
    if ( v11 != -16 )
    {
      v12 = *a4;
      *(uint32_t *)(v11 + 20) = a4[1];
      *(uint32_t *)(v11 + 16) = v12;
    }
    v20 = v11;
    sub_1904970(v15, v11, v25, a3);
    ++a2[5];
    *v21 = v20;
    return v21;
  }
  else
  {
    if ( *a4 < *(uint32_t *)(a3 + 16) )
    {
      if ( a3 == a2[3] )
      {
        sub_F22930(result, (int)(uintptr_t)(a2), a3, a3, a4);
        return v21;
      }
      v18 = *a4;
      v16 = a2 + 1;
      v5 = (uint32_t *)sub_1904940(a3);
      v22 = v5;
      if ( v18 > v5[4] )
      {
        if ( v5[3] != 0 )
        {
          v6 = opNew(0x18u);
          v23 = v6;
          if ( v6 != -16 )
          {
            v7 = a4[1];
            *(uint32_t *)(v6 + 16) = *a4;
            *(uint32_t *)(v6 + 20) = v7;
          }
          sub_1904970(1, v6, a3, v16);
          ++a2[5];
          *v21 = v23;
          return v21;
        }
        else
        {
          v13 = opNew(0x18u);
          if ( v13 != -16 )
          {
            v14 = *a4;
            *(uint32_t *)(v13 + 20) = a4[1];
            *(uint32_t *)(v13 + 16) = v14;
          }
          sub_1904970(v16 == v22, v13, v22, v16);
          ++a2[5];
          *v21 = v13;
          return v21;
        }
      }
LABEL_19:
      sub_F260D0((int)(uintptr_t)(v26), a2, a4);
      *v21 = v26[0];
      return v21;
    }
    if ( *a4 <= *(uint32_t *)(a3 + 16) )
    {
      *result = a3;
      return result;
    }
    if ( a3 == a2[4] )
      goto LABEL_27;
    v19 = *a4;
    v17 = a2 + 1;
    v24 = sub_19048E0(a3);
    if ( v19 >= *(uint32_t *)(v24 + 16) )
      goto LABEL_19;
    if ( *(uint32_t *)(a3 + 12) == 0 )
    {
LABEL_27:
      sub_F22930(v21, (int)(uintptr_t)(a2), 0, a3, a4);
      return v21;
    }
    v8 = opNew(0x18u);
    if ( v8 != -16 )
    {
      v9 = *a4;
      *(uint32_t *)(v8 + 20) = a4[1];
      *(uint32_t *)(v8 + 16) = v9;
    }
    sub_1904970(1, v8, v24, v17);
    ++a2[5];
    *v21 = v8;
    return v21;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_F29060  (binary VA: 0xf29060)
// Original: sub_F29060
// ----------------------------------------------------------------------------
int sub_F29060(uint16_t *a1, unsigned int a2, int a3, int *a4)
{
  glitch::video::IBuffer::Self **v5;
  int result;
  int v7;
  int v8;
  int v9;
  int i;
  int v11;
  int v12;
  int *v13;
  float v14; // xmm1_4
  float v15; // xmm2_4
  int *v16;
  float v17; // xmm3_4
  float v18; // xmm4_4
  int *v19;
  float v20; // xmm5_4
  float v21; // xmm0_4
  int v22;
  bool v23;
  int v24;
  int v25;
  int v26;
  int *v27;
  float v28; // xmm1_4
  float v29; // xmm2_4
  int *v30;
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  int *v34;
  float v35; // xmm6_4
  float v36; // xmm7_4
  float v37; // xmm0_4
  float *v38;
  int v39;
  int v40;
  int v41;
  int *v42;
  float v43; // xmm1_4
  float v44; // xmm2_4
  int *v45;
  float v46; // xmm3_4
  float v47; // xmm4_4
  float v48; // xmm5_4
  int *v49;
  float v50; // xmm6_4
  float v51; // xmm7_4
  float v52; // xmm0_4
  float *v53;
  uint16_t v54;
  unsigned int v55;
  int v56;
  int *v57;
  float v58; // xmm1_4
  float v59; // xmm2_4
  int *v60;
  int *v61;
  float v62; // xmm6_4
  float v63; // xmm7_4
  float v64; // xmm0_4
  float v65; // xmm3_4
  float v66; // xmm4_4
  float v67; // xmm5_4
  float *v68;
  uint16_t v69;
  unsigned int v70;
  int v71;
  int *v72;
  float v73; // xmm1_4
  float v74; // xmm2_4
  int *v75;
  int *v76;
  float v77; // xmm5_4
  float v78; // xmm0_4
  float v79; // xmm3_4
  float v80; // xmm4_4
  int v81;
  uint16_t v82;
  unsigned int v83;
  int v84;
  int *v85;
  float v86; // xmm1_4
  float v87; // xmm2_4
  int *v88;
  int *v89;
  float v90; // xmm6_4
  float v91; // xmm7_4
  float v92; // xmm0_4
  float v93; // xmm3_4
  float v94; // xmm4_4
  float v95; // xmm5_4
  float *v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef uint16_t *_g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef uint16_t *_g4_t_v107;
  typedef uint16_t *_g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef int _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef int _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef int _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef int _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef int _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127;
  typedef int _g4_t_v128;
  typedef float _g4_t_v129;
  typedef float _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef float _g4_t_v133;
  typedef float _g4_t_v134;
  typedef float _g4_t_v135;
  typedef float _g4_t_v136;
  typedef float _g4_t_v137;
  typedef float _g4_t_v138;
  typedef float _g4_t_v139;
  typedef float _g4_t_v140;
  typedef float _g4_t_v141;
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef float _g4_t_v151;
  typedef float _g4_t_v152;
  typedef float _g4_t_v153;
  typedef float _g4_t_v154;
  typedef float _g4_t_v155;
  typedef float _g4_t_v156;
  typedef float _g4_t_v157;
  typedef float _g4_t_v158;
  typedef float _g4_t_v159;
  typedef float _g4_t_v160;
  typedef float _g4_t_v161;
  typedef float _g4_t_v162;
  typedef float _g4_t_v163;
  typedef float _g4_t_v164;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (4u + sizeof(_g4_t_v97)) > _g4_s0 ? (4u + sizeof(_g4_t_v97)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v98)) > _g4_s1 ? (4u + sizeof(_g4_t_v98)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v99)) > _g4_s2 ? (4u + sizeof(_g4_t_v99)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v100)) > _g4_s3 ? (4u + sizeof(_g4_t_v100)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v101)) > _g4_s4 ? (4u + sizeof(_g4_t_v101)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v102)) > _g4_s5 ? (4u + sizeof(_g4_t_v102)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v104)) > _g4_s6 ? (8u + sizeof(_g4_t_v104)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v105)) > _g4_s7 ? (8u + sizeof(_g4_t_v105)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v106)) > _g4_s8 ? (8u + sizeof(_g4_t_v106)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v107)) > _g4_s9 ? (12u + sizeof(_g4_t_v107)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v108)) > _g4_s10 ? (12u + sizeof(_g4_t_v108)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v109)) > _g4_s11 ? (12u + sizeof(_g4_t_v109)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v110)) > _g4_s12 ? (12u + sizeof(_g4_t_v110)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v111)) > _g4_s13 ? (24u + sizeof(_g4_t_v111)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v112)) > _g4_s14 ? (28u + sizeof(_g4_t_v112)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v113)) > _g4_s15 ? (32u + sizeof(_g4_t_v113)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v114)) > _g4_s16 ? (36u + sizeof(_g4_t_v114)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v115)) > _g4_s17 ? (40u + sizeof(_g4_t_v115)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v116)) > _g4_s18 ? (44u + sizeof(_g4_t_v116)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v117)) > _g4_s19 ? (48u + sizeof(_g4_t_v117)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v118)) > _g4_s20 ? (52u + sizeof(_g4_t_v118)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v119)) > _g4_s21 ? (56u + sizeof(_g4_t_v119)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v120)) > _g4_s22 ? (60u + sizeof(_g4_t_v120)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v121)) > _g4_s23 ? (64u + sizeof(_g4_t_v121)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v122)) > _g4_s24 ? (68u + sizeof(_g4_t_v122)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v123)) > _g4_s25 ? (72u + sizeof(_g4_t_v123)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v124)) > _g4_s26 ? (76u + sizeof(_g4_t_v124)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v125)) > _g4_s27 ? (80u + sizeof(_g4_t_v125)) : _g4_s27,
    _g4_s29 = (84u + sizeof(_g4_t_v126)) > _g4_s28 ? (84u + sizeof(_g4_t_v126)) : _g4_s28,
    _g4_s30 = (88u + sizeof(_g4_t_v127)) > _g4_s29 ? (88u + sizeof(_g4_t_v127)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v128)) > _g4_s30 ? (92u + sizeof(_g4_t_v128)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v129)) > _g4_s31 ? (96u + sizeof(_g4_t_v129)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v130)) > _g4_s32 ? (100u + sizeof(_g4_t_v130)) : _g4_s32,
    _g4_s34 = (104u + sizeof(_g4_t_v131)) > _g4_s33 ? (104u + sizeof(_g4_t_v131)) : _g4_s33,
    _g4_s35 = (108u + sizeof(_g4_t_v132)) > _g4_s34 ? (108u + sizeof(_g4_t_v132)) : _g4_s34,
    _g4_s36 = (112u + sizeof(_g4_t_v133)) > _g4_s35 ? (112u + sizeof(_g4_t_v133)) : _g4_s35,
    _g4_s37 = (116u + sizeof(_g4_t_v134)) > _g4_s36 ? (116u + sizeof(_g4_t_v134)) : _g4_s36,
    _g4_s38 = (120u + sizeof(_g4_t_v135)) > _g4_s37 ? (120u + sizeof(_g4_t_v135)) : _g4_s37,
    _g4_s39 = (124u + sizeof(_g4_t_v136)) > _g4_s38 ? (124u + sizeof(_g4_t_v136)) : _g4_s38,
    _g4_s40 = (128u + sizeof(_g4_t_v137)) > _g4_s39 ? (128u + sizeof(_g4_t_v137)) : _g4_s39,
    _g4_s41 = (132u + sizeof(_g4_t_v138)) > _g4_s40 ? (132u + sizeof(_g4_t_v138)) : _g4_s40,
    _g4_s42 = (136u + sizeof(_g4_t_v139)) > _g4_s41 ? (136u + sizeof(_g4_t_v139)) : _g4_s41,
    _g4_s43 = (140u + sizeof(_g4_t_v140)) > _g4_s42 ? (140u + sizeof(_g4_t_v140)) : _g4_s42,
    _g4_s44 = (144u + sizeof(_g4_t_v141)) > _g4_s43 ? (144u + sizeof(_g4_t_v141)) : _g4_s43,
    _g4_s45 = (148u + sizeof(_g4_t_v142)) > _g4_s44 ? (148u + sizeof(_g4_t_v142)) : _g4_s44,
    _g4_s46 = (152u + sizeof(_g4_t_v143)) > _g4_s45 ? (152u + sizeof(_g4_t_v143)) : _g4_s45,
    _g4_s47 = (156u + sizeof(_g4_t_v144)) > _g4_s46 ? (156u + sizeof(_g4_t_v144)) : _g4_s46,
    _g4_s48 = (160u + sizeof(_g4_t_v145)) > _g4_s47 ? (160u + sizeof(_g4_t_v145)) : _g4_s47,
    _g4_s49 = (164u + sizeof(_g4_t_v146)) > _g4_s48 ? (164u + sizeof(_g4_t_v146)) : _g4_s48,
    _g4_s50 = (168u + sizeof(_g4_t_v147)) > _g4_s49 ? (168u + sizeof(_g4_t_v147)) : _g4_s49,
    _g4_s51 = (172u + sizeof(_g4_t_v148)) > _g4_s50 ? (172u + sizeof(_g4_t_v148)) : _g4_s50,
    _g4_s52 = (176u + sizeof(_g4_t_v149)) > _g4_s51 ? (176u + sizeof(_g4_t_v149)) : _g4_s51,
    _g4_s53 = (180u + sizeof(_g4_t_v150)) > _g4_s52 ? (180u + sizeof(_g4_t_v150)) : _g4_s52,
    _g4_s54 = (184u + sizeof(_g4_t_v151)) > _g4_s53 ? (184u + sizeof(_g4_t_v151)) : _g4_s53,
    _g4_s55 = (188u + sizeof(_g4_t_v152)) > _g4_s54 ? (188u + sizeof(_g4_t_v152)) : _g4_s54,
    _g4_s56 = (192u + sizeof(_g4_t_v153)) > _g4_s55 ? (192u + sizeof(_g4_t_v153)) : _g4_s55,
    _g4_s57 = (196u + sizeof(_g4_t_v154)) > _g4_s56 ? (196u + sizeof(_g4_t_v154)) : _g4_s56,
    _g4_s58 = (200u + sizeof(_g4_t_v155)) > _g4_s57 ? (200u + sizeof(_g4_t_v155)) : _g4_s57,
    _g4_s59 = (204u + sizeof(_g4_t_v156)) > _g4_s58 ? (204u + sizeof(_g4_t_v156)) : _g4_s58,
    _g4_s60 = (208u + sizeof(_g4_t_v157)) > _g4_s59 ? (208u + sizeof(_g4_t_v157)) : _g4_s59,
    _g4_s61 = (212u + sizeof(_g4_t_v158)) > _g4_s60 ? (212u + sizeof(_g4_t_v158)) : _g4_s60,
    _g4_s62 = (216u + sizeof(_g4_t_v159)) > _g4_s61 ? (216u + sizeof(_g4_t_v159)) : _g4_s61,
    _g4_s63 = (220u + sizeof(_g4_t_v160)) > _g4_s62 ? (220u + sizeof(_g4_t_v160)) : _g4_s62,
    _g4_s64 = (224u + sizeof(_g4_t_v161)) > _g4_s63 ? (224u + sizeof(_g4_t_v161)) : _g4_s63,
    _g4_s65 = (228u + sizeof(_g4_t_v162)) > _g4_s64 ? (228u + sizeof(_g4_t_v162)) : _g4_s64,
    _g4_s66 = (232u + sizeof(_g4_t_v163)) > _g4_s65 ? (232u + sizeof(_g4_t_v163)) : _g4_s65,
    _g4_s67 = (236u + sizeof(_g4_t_v164)) > _g4_s66 ? (236u + sizeof(_g4_t_v164)) : _g4_s66
  };
  alignas(16) uint8_t _g4_sf[_g4_s67];
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 4u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 4u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 4u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 4u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 4u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 4u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 8u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 8u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 8u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 12u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 12u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 12u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 12u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 24u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 28u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 32u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 36u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 40u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 44u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 48u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 52u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 56u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 60u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 64u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 68u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 72u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 76u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 80u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 84u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 88u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 92u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 96u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 100u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 104u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 108u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 112u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 116u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 120u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 124u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 128u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 132u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 136u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 140u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 144u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 148u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 152u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 156u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 160u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 164u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 168u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 172u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 176u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 180u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 184u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 188u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 192u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 196u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 200u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 204u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 208u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 212u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 216u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 220u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 224u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 228u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 232u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 236u);

  v5 = (glitch::video::IBuffer::Self **)a3;
  result = *(uint16_t *)(a3 + 12);
  switch ( (uint16_t)result )
  {
    case 2:
      v7 = glitch::video::IBuffer::mapInternal(*(glitch::video::IBuffer::Self **)a3, 0, 0, *(uint32_t *)(*(uint32_t *)a3 + 20), 0);
      v8 = 0;
      if ( v7 != 0 )
        v8 = v7 + *(uint32_t *)(a3 + 4);
      if ( a1 != nullptr )
      {
        result = (int)(uintptr_t)(&a1[a2]);
        v104 = (uint16_t *)result;
        if ( a1 == (uint16_t *)result )
          break;
        v9 = v8;
        i = a3;
        do
        {
          while ( 1 )
          {
            v12 = *(uint16_t *)(i + 14);
            v13 = (int *)(v9 + v12 * a1[2]);
            v14 = (float)v13[1];
            v15 = (float)*v13;
            v16 = (int *)(v9 + v12 * a1[1]);
            v17 = (float)v16[1];
            v18 = (float)*v16;
            v19 = (int *)(v9 + v12 * *a1);
            v20 = (float)v19[1];
            v21 = (float)*v19;
            v22 = a4[1];
            v23 = v22 == a4[2];
            v120 = v21;
            v122 = 0;
            v121 = v20;
            v125 = 0;
            v123 = v18;
            v128 = 0;
            v124 = v17;
            v126 = v15;
            v127 = v14;
            if ( !v23 )
              break;
            v97 = i;
            a1 += 3;
            sub_F25DB0(a4, &v120);
            i = v97;
            if ( v104 == a1 )
              goto LABEL_15;
          }
          v11 = 0;
          if ( v22 != 0 )
          {
            *(float *)v22 = v21;
            *(float *)(v22 + 4) = v121;
            *(uint32_t *)(v22 + 8) = v122;
            *(float *)(v22 + 12) = v123;
            *(float *)(v22 + 16) = v124;
            *(uint32_t *)(v22 + 20) = v125;
            *(float *)(v22 + 24) = v126;
            *(float *)(v22 + 28) = v127;
            *(uint32_t *)(v22 + 32) = v128;
            v11 = a4[1];
          }
          a1 += 3;
          a4[1] = v11 + 36;
        }
        while ( v104 != a1 );
        goto LABEL_15;
      }
      result = a2;
      if ( a2 != 0 )
      {
        v69 = *(uint16_t *)(a3 + 14);
        v70 = 0;
        v9 = v8;
        for ( i = a3; ; v69 = *(uint16_t *)(i + 14) )
        {
          v72 = (int *)(v9 + v69 * (v70 + 2));
          v73 = (float)v72[1];
          v74 = (float)*v72;
          v75 = (int *)(v9 + v69 * (v70 + 1));
          v76 = (int *)(v9 + v70 * v69);
          v77 = (float)v76[1];
          v78 = (float)*v76;
          v79 = (float)v75[1];
          v80 = (float)*v75;
          v81 = a4[1];
          v23 = v81 == a4[2];
          v111 = v78;
          v113 = 0;
          v112 = v77;
          v116 = 0;
          v114 = v80;
          v119 = 0;
          v115 = v79;
          v117 = v74;
          v118 = v73;
          if ( v23 )
          {
            v101 = i;
            sub_F25DB0(a4, &v111);
            i = v101;
          }
          else
          {
            v71 = 0;
            if ( v81 != 0 )
            {
              *(float *)v81 = v78;
              *(float *)(v81 + 4) = v112;
              *(uint32_t *)(v81 + 8) = v113;
              *(float *)(v81 + 12) = v114;
              *(float *)(v81 + 16) = v115;
              *(uint32_t *)(v81 + 20) = v116;
              *(float *)(v81 + 24) = v117;
              *(float *)(v81 + 28) = v118;
              *(uint32_t *)(v81 + 32) = v119;
              v71 = a4[1];
            }
            a4[1] = v71 + 36;
          }
          v70 += 3;
          if ( a2 <= v70 )
            break;
        }
LABEL_15:
        result = i;
        v8 = v9;
        v5 = (glitch::video::IBuffer::Self **)result;
      }
      break;
    case 3:
      v39 = glitch::video::IBuffer::mapInternal(
              *(glitch::video::IBuffer::Self **)a3,
              0,
              0,
              *(uint32_t *)(*(uint32_t *)a3 + 20),
              0);
      v8 = 0;
      if ( v39 != 0 )
        v8 = v39 + *(uint32_t *)(a3 + 4);
      if ( a1 != nullptr )
      {
        result = (int)(uintptr_t)(&a1[a2]);
        v108 = (uint16_t *)result;
        if ( a1 != (uint16_t *)result )
        {
          v9 = v8;
          i = a3;
          do
          {
            v41 = *(uint16_t *)(i + 14);
            v42 = (int *)(v9 + v41 * a1[2]);
            v43 = (float)v42[1];
            v44 = (float)*v42;
            v106 = (float)v42[2];
            v45 = (int *)(v9 + v41 * a1[1]);
            v46 = (float)v45[2];
            v47 = (float)v45[1];
            v48 = (float)*v45;
            v49 = (int *)(v9 + v41 * *a1);
            v50 = (float)v49[2];
            v51 = (float)v49[1];
            v52 = (float)*v49;
            v145 = v43;
            v53 = (float *)a4[1];
            v23 = v53 == (float *)a4[2];
            v138 = v52;
            v139 = v51;
            v140 = v50;
            v141 = v48;
            v142 = v47;
            v143 = v46;
            v144 = v44;
            v146 = v106;
            if ( v23 )
            {
              v99 = i;
              sub_F25DB0(a4, &v138);
              i = v99;
            }
            else
            {
              v40 = 0;
              if ( v53 != nullptr )
              {
                *v53 = v52;
                v53[1] = v139;
                v53[2] = v140;
                v53[3] = v141;
                v53[4] = v142;
                v53[5] = v143;
                v53[6] = v144;
                v53[7] = v145;
                v53[8] = v146;
                v40 = a4[1];
              }
              a4[1] = v40 + 36;
            }
            a1 += 3;
          }
          while ( v108 != a1 );
          goto LABEL_15;
        }
      }
      else
      {
        result = a2;
        if ( a2 != 0 )
        {
          v54 = *(uint16_t *)(a3 + 14);
          v55 = 0;
          v9 = v8;
          for ( i = a3; ; v54 = *(uint16_t *)(i + 14) )
          {
            v57 = (int *)(v9 + v54 * (v55 + 2));
            v58 = (float)v57[1];
            v59 = (float)*v57;
            v109 = (float)v57[2];
            v60 = (int *)(v9 + v54 * (v55 + 1));
            v61 = (int *)(v9 + v55 * v54);
            v62 = (float)v61[2];
            v63 = (float)v61[1];
            v64 = (float)*v61;
            v65 = (float)v60[2];
            v66 = (float)v60[1];
            v67 = (float)*v60;
            v68 = (float *)a4[1];
            v23 = v68 == (float *)a4[2];
            v136 = v58;
            v129 = v64;
            v130 = v63;
            v131 = v62;
            v132 = v67;
            v133 = v66;
            v134 = v65;
            v135 = v59;
            v137 = v109;
            if ( v23 )
            {
              v100 = i;
              sub_F25DB0(a4, &v129);
              i = v100;
            }
            else
            {
              v56 = 0;
              if ( v68 != nullptr )
              {
                *v68 = v64;
                v68[1] = v130;
                v68[2] = v131;
                v68[3] = v132;
                v68[4] = v133;
                v68[5] = v134;
                v68[6] = v135;
                v68[7] = v136;
                v68[8] = v137;
                v56 = a4[1];
              }
              a4[1] = v56 + 36;
            }
            v55 += 3;
            if ( a2 <= v55 )
              break;
          }
          goto LABEL_15;
        }
      }
      break;
    case 4:
      v24 = glitch::video::IBuffer::mapInternal(
              *(glitch::video::IBuffer::Self **)a3,
              0,
              0,
              *(uint32_t *)(*(uint32_t *)a3 + 20),
              0);
      v8 = 0;
      if ( v24 != 0 )
        v8 = v24 + *(uint32_t *)(a3 + 4);
      if ( a1 != nullptr )
      {
        result = (int)(uintptr_t)(&a1[a2]);
        v107 = (uint16_t *)result;
        if ( a1 != (uint16_t *)result )
        {
          v9 = v8;
          i = a3;
          do
          {
            v26 = *(uint16_t *)(i + 14);
            v27 = (int *)(v9 + v26 * a1[2]);
            v28 = (float)v27[1];
            v29 = (float)*v27;
            v105 = (float)v27[2];
            v30 = (int *)(v9 + v26 * a1[1]);
            v31 = (float)v30[2];
            v32 = (float)v30[1];
            v33 = (float)*v30;
            v34 = (int *)(v9 + v26 * *a1);
            v35 = (float)v34[2];
            v36 = (float)v34[1];
            v37 = (float)*v34;
            v163 = v28;
            v38 = (float *)a4[1];
            v23 = v38 == (float *)a4[2];
            v156 = v37;
            v157 = v36;
            v158 = v35;
            v159 = v33;
            v160 = v32;
            v161 = v31;
            v162 = v29;
            v164 = v105;
            if ( v23 )
            {
              v98 = i;
              sub_F25DB0(a4, &v156);
              i = v98;
            }
            else
            {
              v25 = 0;
              if ( v38 != nullptr )
              {
                *v38 = v37;
                v38[1] = v157;
                v38[2] = v158;
                v38[3] = v159;
                v38[4] = v160;
                v38[5] = v161;
                v38[6] = v162;
                v38[7] = v163;
                v38[8] = v164;
                v25 = a4[1];
              }
              a4[1] = v25 + 36;
            }
            a1 += 3;
          }
          while ( v107 != a1 );
          goto LABEL_15;
        }
      }
      else
      {
        result = a2;
        if ( a2 != 0 )
        {
          v82 = *(uint16_t *)(a3 + 14);
          v83 = 0;
          v9 = v8;
          for ( i = a3; ; v82 = *(uint16_t *)(i + 14) )
          {
            v85 = (int *)(v9 + v82 * (v83 + 2));
            v86 = (float)v85[1];
            v87 = (float)*v85;
            v110 = (float)v85[2];
            v88 = (int *)(v9 + v82 * (v83 + 1));
            v89 = (int *)(v9 + v83 * v82);
            v90 = (float)v89[2];
            v91 = (float)v89[1];
            v92 = (float)*v89;
            v93 = (float)v88[2];
            v94 = (float)v88[1];
            v95 = (float)*v88;
            v96 = (float *)a4[1];
            v23 = v96 == (float *)a4[2];
            v154 = v86;
            v147 = v92;
            v148 = v91;
            v149 = v90;
            v150 = v95;
            v151 = v94;
            v152 = v93;
            v153 = v87;
            v155 = v110;
            if ( v23 )
            {
              v102 = i;
              sub_F25DB0(a4, &v147);
              i = v102;
            }
            else
            {
              v84 = 0;
              if ( v96 != nullptr )
              {
                *v96 = v92;
                v96[1] = v148;
                v96[2] = v149;
                v96[3] = v150;
                v96[4] = v151;
                v96[5] = v152;
                v96[6] = v153;
                v96[7] = v154;
                v96[8] = v155;
                v84 = a4[1];
              }
              a4[1] = v84 + 36;
            }
            v83 += 3;
            if ( a2 <= v83 )
              break;
          }
          goto LABEL_15;
        }
      }
      break;
    default:
      return result;
  }
  if ( v8 != 0 )
    return glitch::video::IBuffer::unmap(*v5);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F29950  (binary VA: 0xf29950)
// Original: sub_F29950
// ----------------------------------------------------------------------------
int sub_F29950(uint16_t *a1, unsigned int a2, int a3, int *a4)
{
  int result;
  int v6;
  int v7;
  int v8;
  int *v9;
  int *v10;
  int v11; // xmm0_4
  int v12;
  int *v13;
  int v14;
  int *v15;
  bool v16;
  int v17;
  int v18;
  int *v19;
  int *v20;
  int v21; // xmm0_4
  int *v22;
  int v23;
  int v24;
  int *v25;
  int v26;
  int v27;
  int *v28;
  int *v29;
  int *v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  uint16_t j;
  int v36;
  int *v37;
  int *v38;
  int v39; // xmm0_4
  int *v40;
  int v41;
  int *v42;
  unsigned int v43;
  uint16_t ii;
  int v45;
  int *v46;
  int *v47;
  int *v48;
  int v49;
  int v50; // xmm0_4
  int v51;
  int *v52;
  unsigned int v53;
  uint16_t m;
  int v55;
  int *v56;
  int *v57;
  int *v58;
  int v59;
  int v60; // xmm0_4
  int v61;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef uint16_t *_g4_t_i;
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
  typedef uint16_t *_g4_t_n;
  typedef uint16_t *_g4_t_k;
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
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
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
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v63)) > _g4_s0 ? (4u + sizeof(_g4_t_v63)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v64)) > _g4_s1 ? (4u + sizeof(_g4_t_v64)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v65)) > _g4_s2 ? (4u + sizeof(_g4_t_v65)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v66)) > _g4_s3 ? (8u + sizeof(_g4_t_v66)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v67)) > _g4_s4 ? (8u + sizeof(_g4_t_v67)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v68)) > _g4_s5 ? (8u + sizeof(_g4_t_v68)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v69)) > _g4_s6 ? (8u + sizeof(_g4_t_v69)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v70)) > _g4_s7 ? (8u + sizeof(_g4_t_v70)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v71)) > _g4_s8 ? (8u + sizeof(_g4_t_v71)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v72)) > _g4_s9 ? (12u + sizeof(_g4_t_v72)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v73)) > _g4_s10 ? (12u + sizeof(_g4_t_v73)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v74)) > _g4_s11 ? (12u + sizeof(_g4_t_v74)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v75)) > _g4_s12 ? (12u + sizeof(_g4_t_v75)) : _g4_s12,
    _g4_s14 = (12u + sizeof(_g4_t_v76)) > _g4_s13 ? (12u + sizeof(_g4_t_v76)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_i)) > _g4_s14 ? (16u + sizeof(_g4_t_i)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v78)) > _g4_s15 ? (16u + sizeof(_g4_t_v78)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v79)) > _g4_s16 ? (16u + sizeof(_g4_t_v79)) : _g4_s16,
    _g4_s18 = (16u + sizeof(_g4_t_v80)) > _g4_s17 ? (16u + sizeof(_g4_t_v80)) : _g4_s17,
    _g4_s19 = (16u + sizeof(_g4_t_v81)) > _g4_s18 ? (16u + sizeof(_g4_t_v81)) : _g4_s18,
    _g4_s20 = (20u + sizeof(_g4_t_v82)) > _g4_s19 ? (20u + sizeof(_g4_t_v82)) : _g4_s19,
    _g4_s21 = (20u + sizeof(_g4_t_v83)) > _g4_s20 ? (20u + sizeof(_g4_t_v83)) : _g4_s20,
    _g4_s22 = (20u + sizeof(_g4_t_v84)) > _g4_s21 ? (20u + sizeof(_g4_t_v84)) : _g4_s21,
    _g4_s23 = (20u + sizeof(_g4_t_v85)) > _g4_s22 ? (20u + sizeof(_g4_t_v85)) : _g4_s22,
    _g4_s24 = (24u + sizeof(_g4_t_v86)) > _g4_s23 ? (24u + sizeof(_g4_t_v86)) : _g4_s23,
    _g4_s25 = (24u + sizeof(_g4_t_v87)) > _g4_s24 ? (24u + sizeof(_g4_t_v87)) : _g4_s24,
    _g4_s26 = (24u + sizeof(_g4_t_v88)) > _g4_s25 ? (24u + sizeof(_g4_t_v88)) : _g4_s25,
    _g4_s27 = (28u + sizeof(_g4_t_n)) > _g4_s26 ? (28u + sizeof(_g4_t_n)) : _g4_s26,
    _g4_s28 = (28u + sizeof(_g4_t_k)) > _g4_s27 ? (28u + sizeof(_g4_t_k)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v91)) > _g4_s28 ? (40u + sizeof(_g4_t_v91)) : _g4_s28,
    _g4_s30 = (44u + sizeof(_g4_t_v92)) > _g4_s29 ? (44u + sizeof(_g4_t_v92)) : _g4_s29,
    _g4_s31 = (48u + sizeof(_g4_t_v93)) > _g4_s30 ? (48u + sizeof(_g4_t_v93)) : _g4_s30,
    _g4_s32 = (52u + sizeof(_g4_t_v94)) > _g4_s31 ? (52u + sizeof(_g4_t_v94)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v95)) > _g4_s32 ? (56u + sizeof(_g4_t_v95)) : _g4_s32,
    _g4_s34 = (60u + sizeof(_g4_t_v96)) > _g4_s33 ? (60u + sizeof(_g4_t_v96)) : _g4_s33,
    _g4_s35 = (64u + sizeof(_g4_t_v97)) > _g4_s34 ? (64u + sizeof(_g4_t_v97)) : _g4_s34,
    _g4_s36 = (68u + sizeof(_g4_t_v98)) > _g4_s35 ? (68u + sizeof(_g4_t_v98)) : _g4_s35,
    _g4_s37 = (72u + sizeof(_g4_t_v99)) > _g4_s36 ? (72u + sizeof(_g4_t_v99)) : _g4_s36,
    _g4_s38 = (76u + sizeof(_g4_t_v100)) > _g4_s37 ? (76u + sizeof(_g4_t_v100)) : _g4_s37,
    _g4_s39 = (80u + sizeof(_g4_t_v101)) > _g4_s38 ? (80u + sizeof(_g4_t_v101)) : _g4_s38,
    _g4_s40 = (84u + sizeof(_g4_t_v102)) > _g4_s39 ? (84u + sizeof(_g4_t_v102)) : _g4_s39,
    _g4_s41 = (88u + sizeof(_g4_t_v103)) > _g4_s40 ? (88u + sizeof(_g4_t_v103)) : _g4_s40,
    _g4_s42 = (92u + sizeof(_g4_t_v104)) > _g4_s41 ? (92u + sizeof(_g4_t_v104)) : _g4_s41,
    _g4_s43 = (96u + sizeof(_g4_t_v105)) > _g4_s42 ? (96u + sizeof(_g4_t_v105)) : _g4_s42,
    _g4_s44 = (100u + sizeof(_g4_t_v106)) > _g4_s43 ? (100u + sizeof(_g4_t_v106)) : _g4_s43,
    _g4_s45 = (104u + sizeof(_g4_t_v107)) > _g4_s44 ? (104u + sizeof(_g4_t_v107)) : _g4_s44,
    _g4_s46 = (108u + sizeof(_g4_t_v108)) > _g4_s45 ? (108u + sizeof(_g4_t_v108)) : _g4_s45,
    _g4_s47 = (112u + sizeof(_g4_t_v109)) > _g4_s46 ? (112u + sizeof(_g4_t_v109)) : _g4_s46,
    _g4_s48 = (116u + sizeof(_g4_t_v110)) > _g4_s47 ? (116u + sizeof(_g4_t_v110)) : _g4_s47,
    _g4_s49 = (120u + sizeof(_g4_t_v111)) > _g4_s48 ? (120u + sizeof(_g4_t_v111)) : _g4_s48,
    _g4_s50 = (124u + sizeof(_g4_t_v112)) > _g4_s49 ? (124u + sizeof(_g4_t_v112)) : _g4_s49,
    _g4_s51 = (128u + sizeof(_g4_t_v113)) > _g4_s50 ? (128u + sizeof(_g4_t_v113)) : _g4_s50,
    _g4_s52 = (132u + sizeof(_g4_t_v114)) > _g4_s51 ? (132u + sizeof(_g4_t_v114)) : _g4_s51,
    _g4_s53 = (136u + sizeof(_g4_t_v115)) > _g4_s52 ? (136u + sizeof(_g4_t_v115)) : _g4_s52,
    _g4_s54 = (140u + sizeof(_g4_t_v116)) > _g4_s53 ? (140u + sizeof(_g4_t_v116)) : _g4_s53,
    _g4_s55 = (144u + sizeof(_g4_t_v117)) > _g4_s54 ? (144u + sizeof(_g4_t_v117)) : _g4_s54,
    _g4_s56 = (148u + sizeof(_g4_t_v118)) > _g4_s55 ? (148u + sizeof(_g4_t_v118)) : _g4_s55,
    _g4_s57 = (152u + sizeof(_g4_t_v119)) > _g4_s56 ? (152u + sizeof(_g4_t_v119)) : _g4_s56,
    _g4_s58 = (156u + sizeof(_g4_t_v120)) > _g4_s57 ? (156u + sizeof(_g4_t_v120)) : _g4_s57,
    _g4_s59 = (160u + sizeof(_g4_t_v121)) > _g4_s58 ? (160u + sizeof(_g4_t_v121)) : _g4_s58,
    _g4_s60 = (164u + sizeof(_g4_t_v122)) > _g4_s59 ? (164u + sizeof(_g4_t_v122)) : _g4_s59,
    _g4_s61 = (168u + sizeof(_g4_t_v123)) > _g4_s60 ? (168u + sizeof(_g4_t_v123)) : _g4_s60,
    _g4_s62 = (172u + sizeof(_g4_t_v124)) > _g4_s61 ? (172u + sizeof(_g4_t_v124)) : _g4_s61,
    _g4_s63 = (176u + sizeof(_g4_t_v125)) > _g4_s62 ? (176u + sizeof(_g4_t_v125)) : _g4_s62,
    _g4_s64 = (180u + sizeof(_g4_t_v126)) > _g4_s63 ? (180u + sizeof(_g4_t_v126)) : _g4_s63,
    _g4_s65 = (184u + sizeof(_g4_t_v127)) > _g4_s64 ? (184u + sizeof(_g4_t_v127)) : _g4_s64,
    _g4_s66 = (188u + sizeof(_g4_t_v128)) > _g4_s65 ? (188u + sizeof(_g4_t_v128)) : _g4_s65,
    _g4_s67 = (192u + sizeof(_g4_t_v129)) > _g4_s66 ? (192u + sizeof(_g4_t_v129)) : _g4_s66,
    _g4_s68 = (196u + sizeof(_g4_t_v130)) > _g4_s67 ? (196u + sizeof(_g4_t_v130)) : _g4_s67,
    _g4_s69 = (200u + sizeof(_g4_t_v131)) > _g4_s68 ? (200u + sizeof(_g4_t_v131)) : _g4_s68,
    _g4_s70 = (204u + sizeof(_g4_t_v132)) > _g4_s69 ? (204u + sizeof(_g4_t_v132)) : _g4_s69,
    _g4_s71 = (208u + sizeof(_g4_t_v133)) > _g4_s70 ? (208u + sizeof(_g4_t_v133)) : _g4_s70,
    _g4_s72 = (212u + sizeof(_g4_t_v134)) > _g4_s71 ? (212u + sizeof(_g4_t_v134)) : _g4_s71,
    _g4_s73 = (216u + sizeof(_g4_t_v135)) > _g4_s72 ? (216u + sizeof(_g4_t_v135)) : _g4_s72,
    _g4_s74 = (220u + sizeof(_g4_t_v136)) > _g4_s73 ? (220u + sizeof(_g4_t_v136)) : _g4_s73,
    _g4_s75 = (224u + sizeof(_g4_t_v137)) > _g4_s74 ? (224u + sizeof(_g4_t_v137)) : _g4_s74,
    _g4_s76 = (228u + sizeof(_g4_t_v138)) > _g4_s75 ? (228u + sizeof(_g4_t_v138)) : _g4_s75,
    _g4_s77 = (232u + sizeof(_g4_t_v139)) > _g4_s76 ? (232u + sizeof(_g4_t_v139)) : _g4_s76,
    _g4_s78 = (236u + sizeof(_g4_t_v140)) > _g4_s77 ? (236u + sizeof(_g4_t_v140)) : _g4_s77,
    _g4_s79 = (240u + sizeof(_g4_t_v141)) > _g4_s78 ? (240u + sizeof(_g4_t_v141)) : _g4_s78,
    _g4_s80 = (244u + sizeof(_g4_t_v142)) > _g4_s79 ? (244u + sizeof(_g4_t_v142)) : _g4_s79,
    _g4_s81 = (248u + sizeof(_g4_t_v143)) > _g4_s80 ? (248u + sizeof(_g4_t_v143)) : _g4_s80,
    _g4_s82 = (252u + sizeof(_g4_t_v144)) > _g4_s81 ? (252u + sizeof(_g4_t_v144)) : _g4_s81
  };
  alignas(16) uint8_t _g4_sf[_g4_s82];
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 4u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 4u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 4u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 8u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 8u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 8u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 8u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 8u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 8u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 12u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 12u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 12u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 12u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 12u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 16u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 16u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 16u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 16u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 16u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 20u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 20u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 20u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 20u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 24u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 24u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 24u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 28u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 28u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 40u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 44u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 48u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 52u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 56u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 60u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 64u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 68u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 72u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 76u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 80u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 84u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 88u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 92u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 96u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 100u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 104u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 108u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 112u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 116u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 120u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 124u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 128u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 132u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 136u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 140u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 144u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 148u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 152u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 156u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 160u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 164u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 168u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 172u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 176u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 180u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 184u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 188u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 192u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 196u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 200u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 204u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 208u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 212u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 216u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 220u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 224u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 228u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 232u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 236u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 240u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 244u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 248u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 252u);

  result = *(uint16_t *)(a3 + 12);
  switch ( (uint16_t)result )
  {
    case 2:
      v6 = 0;
      result = glitch::video::IBuffer::mapInternal(
                 *(glitch::video::IBuffer::Self **)a3,
                 0,
                 0,
                 *(uint32_t *)(*(uint32_t *)a3 + 20),
                 0);
      if ( result != 0 )
        v6 = *(uint32_t *)(a3 + 4) + result;
      if ( a1 != nullptr )
      {
        for ( i = &a1[a2]; i != a1; a1 += 3 )
        {
          v8 = *(uint16_t *)(a3 + 14);
          v9 = (int *)(v6 + v8 * a1[2]);
          v63 = v9[1];
          v66 = *v9;
          v10 = (int *)(v6 + v8 * a1[1]);
          v11 = v10[1];
          v12 = *v10;
          v13 = (int *)(v6 + v8 * *a1);
          v14 = v13[1];
          result = *v13;
          v104 = v11;
          v101 = v14;
          v15 = (int *)a4[1];
          v106 = v66;
          v16 = v15 == (int *)a4[2];
          v100 = result;
          v102 = 0;
          v103 = v12;
          v105 = 0;
          v108 = 0;
          v107 = v63;
          if ( v16 )
          {
            result = (int)(uintptr_t)(sub_F25DB0(a4, &v100));
          }
          else
          {
            v7 = 0;
            if ( v15 != nullptr )
            {
              *v15 = result;
              v15[1] = v101;
              v15[2] = v102;
              v15[3] = v103;
              v15[4] = v104;
              v15[5] = v105;
              v15[6] = v106;
              v15[7] = v107;
              result = v108;
              v15[8] = v108;
              v7 = a4[1];
            }
            a4[1] = v7 + 36;
          }
        }
      }
      else if ( a2 != 0 )
      {
        v34 = 0;
        for ( j = *(uint16_t *)(a3 + 14); ; j = *(uint16_t *)(a3 + 14) )
        {
          v37 = (int *)(v6 + j * (v34 + 2));
          v69 = v37[1];
          v74 = *v37;
          v38 = (int *)(v6 + j * (v34 + 1));
          v39 = v38[1];
          v40 = (int *)(v6 + v34 * j);
          v41 = v40[1];
          result = *v40;
          v94 = *v38;
          v95 = v39;
          v42 = (int *)a4[1];
          v16 = v42 == (int *)a4[2];
          v97 = v74;
          v91 = result;
          v92 = v41;
          v93 = 0;
          v96 = 0;
          v98 = v69;
          v99 = 0;
          if ( v16 )
          {
            result = (int)(uintptr_t)(sub_F25DB0(a4, &v91));
          }
          else
          {
            v36 = 0;
            if ( v42 != nullptr )
            {
              *v42 = result;
              v42[1] = v92;
              v42[2] = v93;
              v42[3] = v94;
              v42[4] = v95;
              v42[5] = v96;
              v42[6] = v97;
              v42[7] = v98;
              result = v99;
              v42[8] = v99;
              v36 = a4[1];
            }
            a4[1] = v36 + 36;
          }
          v34 += 3;
          if ( a2 <= v34 )
            break;
        }
      }
      break;
    case 3:
      v6 = 0;
      result = glitch::video::IBuffer::mapInternal(
                 *(glitch::video::IBuffer::Self **)a3,
                 0,
                 0,
                 *(uint32_t *)(*(uint32_t *)a3 + 20),
                 0);
      if ( result != 0 )
        v6 = *(uint32_t *)(a3 + 4) + result;
      if ( a1 != nullptr )
      {
        for ( k = &a1[a2]; k != a1; a1 += 3 )
        {
          v27 = *(uint16_t *)(a3 + 14);
          v28 = (int *)(v6 + v27 * a1[2]);
          v65 = *v28;
          v68 = v28[1];
          v73 = v28[2];
          v29 = (int *)(v6 + v27 * a1[1]);
          v79 = *v29;
          v83 = v29[1];
          v86 = v29[2];
          v30 = (int *)(v6 + v27 * *a1);
          v31 = *v30;
          v32 = v30[1];
          v33 = v30[2];
          v118 = v31;
          v121 = v79;
          v120 = v33;
          v119 = v32;
          v122 = v83;
          v123 = v86;
          v124 = v65;
          v125 = v68;
          v126 = v73;
          result = a4[1];
          if ( result == a4[2] )
          {
            result = (int)(uintptr_t)(sub_F25DB0(a4, &v118));
          }
          else
          {
            v26 = 0;
            if ( result != 0 )
            {
              *(uint32_t *)result = v31;
              *(uint32_t *)(result + 4) = v119;
              *(uint32_t *)(result + 8) = v120;
              *(uint32_t *)(result + 12) = v121;
              *(uint32_t *)(result + 16) = v122;
              *(uint32_t *)(result + 20) = v123;
              *(uint32_t *)(result + 24) = v124;
              *(uint32_t *)(result + 28) = v125;
              *(uint32_t *)(result + 32) = v126;
              v26 = a4[1];
            }
            a4[1] = v26 + 36;
          }
        }
      }
      else if ( a2 != 0 )
      {
        v53 = 0;
        for ( m = *(uint16_t *)(a3 + 14); ; m = *(uint16_t *)(a3 + 14) )
        {
          v56 = (int *)(v6 + m * (v53 + 2));
          v71 = *v56;
          v76 = v56[1];
          v81 = v56[2];
          v57 = (int *)(v6 + m * (v53 + 1));
          v58 = (int *)(v6 + v53 * m);
          v85 = *v57;
          v59 = v58[1];
          v88 = v57[1];
          v60 = v57[2];
          v61 = *v58;
          v111 = v58[2];
          v112 = v85;
          result = a4[1];
          v16 = result == a4[2];
          v113 = v88;
          v109 = v61;
          v110 = v59;
          v114 = v60;
          v115 = v71;
          v116 = v76;
          v117 = v81;
          if ( v16 )
          {
            result = (int)(uintptr_t)(sub_F25DB0(a4, &v109));
          }
          else
          {
            v55 = 0;
            if ( result != 0 )
            {
              *(uint32_t *)result = v61;
              *(uint32_t *)(result + 4) = v110;
              *(uint32_t *)(result + 8) = v111;
              *(uint32_t *)(result + 12) = v112;
              *(uint32_t *)(result + 16) = v113;
              *(uint32_t *)(result + 20) = v114;
              *(uint32_t *)(result + 24) = v115;
              *(uint32_t *)(result + 28) = v116;
              *(uint32_t *)(result + 32) = v117;
              v55 = a4[1];
            }
            a4[1] = v55 + 36;
          }
          v53 += 3;
          if ( a2 <= v53 )
            break;
        }
      }
      break;
    case 4:
      v6 = 0;
      result = glitch::video::IBuffer::mapInternal(
                 *(glitch::video::IBuffer::Self **)a3,
                 0,
                 0,
                 *(uint32_t *)(*(uint32_t *)a3 + 20),
                 0);
      if ( result != 0 )
        v6 = *(uint32_t *)(a3 + 4) + result;
      if ( a1 != nullptr )
      {
        for ( n = &a1[a2]; n != a1; a1 += 3 )
        {
          v18 = *(uint16_t *)(a3 + 14);
          v19 = (int *)(v6 + v18 * a1[2]);
          v64 = v19[2];
          v67 = v19[1];
          v72 = *v19;
          v20 = (int *)(v6 + v18 * a1[1]);
          v78 = v20[2];
          v82 = v20[1];
          v21 = *v20;
          v22 = (int *)(v6 + v18 * *a1);
          v23 = v22[2];
          v24 = v22[1];
          result = *v22;
          v138 = v23;
          v139 = v21;
          v25 = (int *)a4[1];
          v16 = v25 == (int *)a4[2];
          v140 = v82;
          v136 = result;
          v137 = v24;
          v141 = v78;
          v142 = v72;
          v143 = v67;
          v144 = v64;
          if ( v16 )
          {
            result = (int)(uintptr_t)(sub_F25DB0(a4, &v136));
          }
          else
          {
            v17 = 0;
            if ( v25 != nullptr )
            {
              *v25 = result;
              v25[1] = v137;
              v25[2] = v138;
              v25[3] = v139;
              v25[4] = v140;
              v25[5] = v141;
              v25[6] = v142;
              v25[7] = v143;
              result = v144;
              v25[8] = v144;
              v17 = a4[1];
            }
            a4[1] = v17 + 36;
          }
        }
      }
      else if ( a2 != 0 )
      {
        v43 = 0;
        for ( ii = *(uint16_t *)(a3 + 14); ; ii = *(uint16_t *)(a3 + 14) )
        {
          v46 = (int *)(v6 + ii * (v43 + 2));
          v70 = v46[2];
          v75 = v46[1];
          v80 = *v46;
          v47 = (int *)(v6 + ii * (v43 + 1));
          v48 = (int *)(v6 + v43 * ii);
          v84 = v47[2];
          v49 = v48[1];
          v87 = v47[1];
          v50 = *v47;
          v51 = v48[2];
          result = *v48;
          v129 = v51;
          v130 = v50;
          v52 = (int *)a4[1];
          v16 = v52 == (int *)a4[2];
          v131 = v87;
          v127 = result;
          v128 = v49;
          v132 = v84;
          v133 = v80;
          v134 = v75;
          v135 = v70;
          if ( v16 )
          {
            result = (int)(uintptr_t)(sub_F25DB0(a4, &v127));
          }
          else
          {
            v45 = 0;
            if ( v52 != nullptr )
            {
              *v52 = result;
              v52[1] = v128;
              v52[2] = v129;
              v52[3] = v130;
              v52[4] = v131;
              v52[5] = v132;
              v52[6] = v133;
              v52[7] = v134;
              result = v135;
              v52[8] = v135;
              v45 = a4[1];
            }
            a4[1] = v45 + 36;
          }
          v43 += 3;
          if ( a2 <= v43 )
            break;
        }
      }
      break;
    default:
      return result;
  }
  if ( v6 != 0 )
    return glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F2A310  (binary VA: 0xf2a310)
// Original: sub_F2A310
// ----------------------------------------------------------------------------
int sub_F2A310(uint16_t *a1, unsigned int a2, int a3, int *a4)
{
  int result;
  int v6;
  int v7;
  int v8;
  char *v9;
  float v10; // xmm2_4
  float v11; // xmm1_4
  char *v12;
  float v13; // xmm4_4
  float v14; // xmm3_4
  char *v15;
  float v16; // xmm5_4
  int v17;
  float v18; // xmm0_4
  bool v19;
  int v20;
  int v21;
  char *v22;
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  char *v26;
  float v27; // xmm3_4
  float v28; // xmm5_4
  float v29; // xmm4_4
  char *v30;
  float v31; // xmm6_4
  float v32; // xmm0_4
  float v33; // xmm7_4
  int v34;
  int v35;
  char *v36;
  float v37; // xmm0_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  char *v40;
  float v41; // xmm3_4
  float v42; // xmm5_4
  float v43; // xmm4_4
  char *v44;
  float v45; // xmm6_4
  float v46; // xmm0_4
  float v47; // xmm7_4
  unsigned int v48;
  uint16_t j;
  int v50;
  char *v51;
  float v52; // xmm2_4
  float v53; // xmm1_4
  char *v54;
  char *v55;
  int v56;
  float v57; // xmm4_4
  int v58;
  int v59;
  float v60; // xmm0_4
  unsigned int v61;
  uint16_t ii;
  int v63;
  char *v64;
  float v65; // xmm0_4
  float v66; // xmm2_4
  float v67; // xmm1_4
  char *v68;
  char *v69;
  float v70; // xmm3_4
  float v71; // xmm5_4
  float v72; // xmm6_4
  float v73; // xmm4_4
  float v74; // xmm0_4
  float v75; // xmm7_4
  unsigned int v76;
  uint16_t m;
  int v78;
  char *v79;
  float v80; // xmm0_4
  float v81; // xmm2_4
  float v82; // xmm1_4
  char *v83;
  char *v84;
  float v85; // xmm3_4
  float v86; // xmm5_4
  float v87; // xmm6_4
  float v88; // xmm4_4
  float v89; // xmm0_4
  float v90; // xmm7_4
  typedef uint16_t *_g4_t_i;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef uint16_t *_g4_t_n;
  typedef uint16_t *_g4_t_k;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef int _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef int _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef int _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef int _g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef int _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef int _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127;
  typedef float _g4_t_v128;
  typedef float _g4_t_v129;
  typedef float _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef float _g4_t_v133;
  typedef float _g4_t_v134;
  typedef float _g4_t_v135;
  typedef float _g4_t_v136;
  typedef float _g4_t_v137;
  typedef float _g4_t_v138;
  typedef float _g4_t_v139;
  typedef float _g4_t_v140;
  typedef float _g4_t_v141;
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef float _g4_t_v151;
  typedef float _g4_t_v152;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (8u + sizeof(_g4_t_i)) > _g4_s0 ? (8u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v93)) > _g4_s1 ? (8u + sizeof(_g4_t_v93)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v94)) > _g4_s2 ? (8u + sizeof(_g4_t_v94)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_n)) > _g4_s3 ? (12u + sizeof(_g4_t_n)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_k)) > _g4_s4 ? (12u + sizeof(_g4_t_k)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v97)) > _g4_s5 ? (12u + sizeof(_g4_t_v97)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v98)) > _g4_s6 ? (12u + sizeof(_g4_t_v98)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v99)) > _g4_s7 ? (24u + sizeof(_g4_t_v99)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v100)) > _g4_s8 ? (28u + sizeof(_g4_t_v100)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v101)) > _g4_s9 ? (32u + sizeof(_g4_t_v101)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v102)) > _g4_s10 ? (36u + sizeof(_g4_t_v102)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v103)) > _g4_s11 ? (40u + sizeof(_g4_t_v103)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v104)) > _g4_s12 ? (44u + sizeof(_g4_t_v104)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v105)) > _g4_s13 ? (48u + sizeof(_g4_t_v105)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v106)) > _g4_s14 ? (52u + sizeof(_g4_t_v106)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v107)) > _g4_s15 ? (56u + sizeof(_g4_t_v107)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v108)) > _g4_s16 ? (60u + sizeof(_g4_t_v108)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v109)) > _g4_s17 ? (64u + sizeof(_g4_t_v109)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v110)) > _g4_s18 ? (68u + sizeof(_g4_t_v110)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v111)) > _g4_s19 ? (72u + sizeof(_g4_t_v111)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v112)) > _g4_s20 ? (76u + sizeof(_g4_t_v112)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v113)) > _g4_s21 ? (80u + sizeof(_g4_t_v113)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v114)) > _g4_s22 ? (84u + sizeof(_g4_t_v114)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v115)) > _g4_s23 ? (88u + sizeof(_g4_t_v115)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v116)) > _g4_s24 ? (92u + sizeof(_g4_t_v116)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v117)) > _g4_s25 ? (96u + sizeof(_g4_t_v117)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v118)) > _g4_s26 ? (100u + sizeof(_g4_t_v118)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v119)) > _g4_s27 ? (104u + sizeof(_g4_t_v119)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v120)) > _g4_s28 ? (108u + sizeof(_g4_t_v120)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v121)) > _g4_s29 ? (112u + sizeof(_g4_t_v121)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v122)) > _g4_s30 ? (116u + sizeof(_g4_t_v122)) : _g4_s30,
    _g4_s32 = (120u + sizeof(_g4_t_v123)) > _g4_s31 ? (120u + sizeof(_g4_t_v123)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v124)) > _g4_s32 ? (124u + sizeof(_g4_t_v124)) : _g4_s32,
    _g4_s34 = (128u + sizeof(_g4_t_v125)) > _g4_s33 ? (128u + sizeof(_g4_t_v125)) : _g4_s33,
    _g4_s35 = (132u + sizeof(_g4_t_v126)) > _g4_s34 ? (132u + sizeof(_g4_t_v126)) : _g4_s34,
    _g4_s36 = (136u + sizeof(_g4_t_v127)) > _g4_s35 ? (136u + sizeof(_g4_t_v127)) : _g4_s35,
    _g4_s37 = (140u + sizeof(_g4_t_v128)) > _g4_s36 ? (140u + sizeof(_g4_t_v128)) : _g4_s36,
    _g4_s38 = (144u + sizeof(_g4_t_v129)) > _g4_s37 ? (144u + sizeof(_g4_t_v129)) : _g4_s37,
    _g4_s39 = (148u + sizeof(_g4_t_v130)) > _g4_s38 ? (148u + sizeof(_g4_t_v130)) : _g4_s38,
    _g4_s40 = (152u + sizeof(_g4_t_v131)) > _g4_s39 ? (152u + sizeof(_g4_t_v131)) : _g4_s39,
    _g4_s41 = (156u + sizeof(_g4_t_v132)) > _g4_s40 ? (156u + sizeof(_g4_t_v132)) : _g4_s40,
    _g4_s42 = (160u + sizeof(_g4_t_v133)) > _g4_s41 ? (160u + sizeof(_g4_t_v133)) : _g4_s41,
    _g4_s43 = (164u + sizeof(_g4_t_v134)) > _g4_s42 ? (164u + sizeof(_g4_t_v134)) : _g4_s42,
    _g4_s44 = (168u + sizeof(_g4_t_v135)) > _g4_s43 ? (168u + sizeof(_g4_t_v135)) : _g4_s43,
    _g4_s45 = (172u + sizeof(_g4_t_v136)) > _g4_s44 ? (172u + sizeof(_g4_t_v136)) : _g4_s44,
    _g4_s46 = (176u + sizeof(_g4_t_v137)) > _g4_s45 ? (176u + sizeof(_g4_t_v137)) : _g4_s45,
    _g4_s47 = (180u + sizeof(_g4_t_v138)) > _g4_s46 ? (180u + sizeof(_g4_t_v138)) : _g4_s46,
    _g4_s48 = (184u + sizeof(_g4_t_v139)) > _g4_s47 ? (184u + sizeof(_g4_t_v139)) : _g4_s47,
    _g4_s49 = (188u + sizeof(_g4_t_v140)) > _g4_s48 ? (188u + sizeof(_g4_t_v140)) : _g4_s48,
    _g4_s50 = (192u + sizeof(_g4_t_v141)) > _g4_s49 ? (192u + sizeof(_g4_t_v141)) : _g4_s49,
    _g4_s51 = (196u + sizeof(_g4_t_v142)) > _g4_s50 ? (196u + sizeof(_g4_t_v142)) : _g4_s50,
    _g4_s52 = (200u + sizeof(_g4_t_v143)) > _g4_s51 ? (200u + sizeof(_g4_t_v143)) : _g4_s51,
    _g4_s53 = (204u + sizeof(_g4_t_v144)) > _g4_s52 ? (204u + sizeof(_g4_t_v144)) : _g4_s52,
    _g4_s54 = (208u + sizeof(_g4_t_v145)) > _g4_s53 ? (208u + sizeof(_g4_t_v145)) : _g4_s53,
    _g4_s55 = (212u + sizeof(_g4_t_v146)) > _g4_s54 ? (212u + sizeof(_g4_t_v146)) : _g4_s54,
    _g4_s56 = (216u + sizeof(_g4_t_v147)) > _g4_s55 ? (216u + sizeof(_g4_t_v147)) : _g4_s55,
    _g4_s57 = (220u + sizeof(_g4_t_v148)) > _g4_s56 ? (220u + sizeof(_g4_t_v148)) : _g4_s56,
    _g4_s58 = (224u + sizeof(_g4_t_v149)) > _g4_s57 ? (224u + sizeof(_g4_t_v149)) : _g4_s57,
    _g4_s59 = (228u + sizeof(_g4_t_v150)) > _g4_s58 ? (228u + sizeof(_g4_t_v150)) : _g4_s58,
    _g4_s60 = (232u + sizeof(_g4_t_v151)) > _g4_s59 ? (232u + sizeof(_g4_t_v151)) : _g4_s59,
    _g4_s61 = (236u + sizeof(_g4_t_v152)) > _g4_s60 ? (236u + sizeof(_g4_t_v152)) : _g4_s60
  };
  alignas(16) uint8_t _g4_sf[_g4_s61];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 8u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 8u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 8u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 12u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 12u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 12u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 12u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 24u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 28u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 32u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 36u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 40u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 44u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 48u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 52u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 56u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 60u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 64u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 68u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 72u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 76u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 80u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 84u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 88u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 92u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 96u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 100u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 104u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 108u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 112u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 116u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 120u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 124u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 128u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 132u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 136u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 140u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 144u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 148u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 152u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 156u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 160u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 164u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 168u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 172u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 176u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 180u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 184u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 188u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 192u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 196u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 200u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 204u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 208u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 212u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 216u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 220u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 224u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 228u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 232u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 236u);

  result = *(uint16_t *)(a3 + 12);
  switch ( (uint16_t)result )
  {
    case 2:
      v6 = 0;
      result = glitch::video::IBuffer::mapInternal(
                 *(glitch::video::IBuffer::Self **)a3,
                 0,
                 0,
                 *(uint32_t *)(*(uint32_t *)a3 + 20),
                 0);
      if ( result != 0 )
        v6 = *(uint32_t *)(a3 + 4) + result;
      if ( a1 != nullptr )
      {
        for ( i = &a1[a2]; i != a1; a1 += 3 )
        {
          v8 = *(uint16_t *)(a3 + 14);
          v9 = (char *)(v6 + v8 * a1[2]);
          v10 = (float)*v9;
          v11 = (float)v9[1];
          v12 = (char *)(v6 + v8 * a1[1]);
          v13 = (float)*v12;
          v14 = (float)v12[1];
          v15 = (char *)(v6 + v8 * *a1);
          v16 = (float)v15[1];
          v17 = *v15;
          v110 = 0;
          v18 = (float)v17;
          result = a4[1];
          v19 = result == a4[2];
          v108 = v18;
          v113 = 0;
          v109 = v16;
          v116 = 0;
          v111 = v13;
          v112 = v14;
          v114 = v10;
          v115 = v11;
          if ( v19 )
          {
            result = (int)(uintptr_t)(sub_F25DB0(a4, &v108));
          }
          else
          {
            v7 = 0;
            if ( result != 0 )
            {
              *(float *)result = v18;
              *(float *)(result + 4) = v109;
              *(uint32_t *)(result + 8) = v110;
              *(float *)(result + 12) = v111;
              *(float *)(result + 16) = v112;
              *(uint32_t *)(result + 20) = v113;
              *(float *)(result + 24) = v114;
              *(float *)(result + 28) = v115;
              *(uint32_t *)(result + 32) = v116;
              v7 = a4[1];
            }
            a4[1] = v7 + 36;
          }
        }
      }
      else
      {
        result = a2;
        if ( a2 != 0 )
        {
          v48 = 0;
          for ( j = *(uint16_t *)(a3 + 14); ; j = *(uint16_t *)(a3 + 14) )
          {
            v51 = (char *)(v6 + j * (v48 + 2));
            v52 = (float)*v51;
            v53 = (float)v51[1];
            v54 = (char *)(v6 + j * (v48 + 1));
            v55 = (char *)(v6 + v48 * j);
            v56 = v54[1];
            v57 = (float)*v54;
            v58 = v55[1];
            v59 = *v55;
            v101 = 0;
            v60 = (float)v59;
            result = a4[1];
            v19 = result == a4[2];
            v99 = v60;
            v104 = 0;
            v100 = (float)v58;
            v107 = 0;
            v102 = v57;
            v103 = (float)v56;
            v105 = v52;
            v106 = v53;
            if ( v19 )
            {
              result = (int)(uintptr_t)(sub_F25DB0(a4, &v99));
            }
            else
            {
              v50 = 0;
              if ( result != 0 )
              {
                *(float *)result = v60;
                *(float *)(result + 4) = v100;
                *(uint32_t *)(result + 8) = v101;
                *(float *)(result + 12) = v102;
                *(float *)(result + 16) = v103;
                *(uint32_t *)(result + 20) = v104;
                *(float *)(result + 24) = v105;
                *(float *)(result + 28) = v106;
                *(uint32_t *)(result + 32) = v107;
                v50 = a4[1];
              }
              a4[1] = v50 + 36;
            }
            v48 += 3;
            if ( a2 <= v48 )
              break;
          }
        }
      }
      break;
    case 3:
      v6 = 0;
      result = glitch::video::IBuffer::mapInternal(
                 *(glitch::video::IBuffer::Self **)a3,
                 0,
                 0,
                 *(uint32_t *)(*(uint32_t *)a3 + 20),
                 0);
      if ( result != 0 )
        v6 = *(uint32_t *)(a3 + 4) + result;
      if ( a1 != nullptr )
      {
        for ( k = &a1[a2]; k != a1; a1 += 3 )
        {
          v35 = *(uint16_t *)(a3 + 14);
          v36 = (char *)(v6 + v35 * a1[2]);
          v37 = (float)v36[2];
          v38 = (float)*v36;
          v39 = (float)v36[1];
          v40 = (char *)(v6 + v35 * a1[1]);
          v41 = (float)v40[2];
          v42 = (float)*v40;
          v94 = v37;
          v43 = (float)v40[1];
          v44 = (char *)(v6 + v35 * *a1);
          v45 = (float)v44[2];
          v46 = (float)*v44;
          v47 = (float)v44[1];
          v133 = v39;
          result = a4[1];
          v19 = result == a4[2];
          v126 = v46;
          v127 = v47;
          v128 = v45;
          v129 = v42;
          v130 = v43;
          v131 = v41;
          v132 = v38;
          v134 = v94;
          if ( v19 )
          {
            result = (int)(uintptr_t)(sub_F25DB0(a4, &v126));
          }
          else
          {
            v34 = 0;
            if ( result != 0 )
            {
              *(float *)result = v46;
              *(float *)(result + 4) = v127;
              *(float *)(result + 8) = v128;
              *(float *)(result + 12) = v129;
              *(float *)(result + 16) = v130;
              *(float *)(result + 20) = v131;
              *(float *)(result + 24) = v132;
              *(float *)(result + 28) = v133;
              *(float *)(result + 32) = v134;
              v34 = a4[1];
            }
            a4[1] = v34 + 36;
          }
        }
      }
      else
      {
        result = a2;
        if ( a2 != 0 )
        {
          v76 = 0;
          for ( m = *(uint16_t *)(a3 + 14); ; m = *(uint16_t *)(a3 + 14) )
          {
            v79 = (char *)(v6 + m * (v76 + 2));
            v80 = (float)v79[2];
            v81 = (float)*v79;
            v82 = (float)v79[1];
            v83 = (char *)(v6 + m * (v76 + 1));
            v84 = (char *)(v6 + v76 * m);
            v85 = (float)v83[2];
            v86 = (float)*v83;
            v87 = (float)v84[2];
            v98 = v80;
            v88 = (float)v83[1];
            v89 = (float)*v84;
            v90 = (float)v84[1];
            v124 = v82;
            result = a4[1];
            v19 = result == a4[2];
            v117 = v89;
            v118 = v90;
            v119 = v87;
            v120 = v86;
            v121 = v88;
            v122 = v85;
            v123 = v81;
            v125 = v98;
            if ( v19 )
            {
              result = (int)(uintptr_t)(sub_F25DB0(a4, &v117));
            }
            else
            {
              v78 = 0;
              if ( result != 0 )
              {
                *(float *)result = v89;
                *(float *)(result + 4) = v118;
                *(float *)(result + 8) = v119;
                *(float *)(result + 12) = v120;
                *(float *)(result + 16) = v121;
                *(float *)(result + 20) = v122;
                *(float *)(result + 24) = v123;
                *(float *)(result + 28) = v124;
                *(float *)(result + 32) = v125;
                v78 = a4[1];
              }
              a4[1] = v78 + 36;
            }
            v76 += 3;
            if ( a2 <= v76 )
              break;
          }
        }
      }
      break;
    case 4:
      v6 = 0;
      result = glitch::video::IBuffer::mapInternal(
                 *(glitch::video::IBuffer::Self **)a3,
                 0,
                 0,
                 *(uint32_t *)(*(uint32_t *)a3 + 20),
                 0);
      if ( result != 0 )
        v6 = *(uint32_t *)(a3 + 4) + result;
      if ( a1 != nullptr )
      {
        for ( n = &a1[a2]; n != a1; a1 += 3 )
        {
          v21 = *(uint16_t *)(a3 + 14);
          v22 = (char *)(v6 + v21 * a1[2]);
          v23 = (float)v22[2];
          v24 = (float)*v22;
          v25 = (float)v22[1];
          v26 = (char *)(v6 + v21 * a1[1]);
          v27 = (float)v26[2];
          v28 = (float)*v26;
          v93 = v23;
          v29 = (float)v26[1];
          v30 = (char *)(v6 + v21 * *a1);
          v31 = (float)v30[2];
          v32 = (float)*v30;
          v33 = (float)v30[1];
          v151 = v25;
          result = a4[1];
          v19 = result == a4[2];
          v144 = v32;
          v145 = v33;
          v146 = v31;
          v147 = v28;
          v148 = v29;
          v149 = v27;
          v150 = v24;
          v152 = v93;
          if ( v19 )
          {
            result = (int)(uintptr_t)(sub_F25DB0(a4, &v144));
          }
          else
          {
            v20 = 0;
            if ( result != 0 )
            {
              *(float *)result = v32;
              *(float *)(result + 4) = v145;
              *(float *)(result + 8) = v146;
              *(float *)(result + 12) = v147;
              *(float *)(result + 16) = v148;
              *(float *)(result + 20) = v149;
              *(float *)(result + 24) = v150;
              *(float *)(result + 28) = v151;
              *(float *)(result + 32) = v152;
              v20 = a4[1];
            }
            a4[1] = v20 + 36;
          }
        }
      }
      else
      {
        result = a2;
        if ( a2 != 0 )
        {
          v61 = 0;
          for ( ii = *(uint16_t *)(a3 + 14); ; ii = *(uint16_t *)(a3 + 14) )
          {
            v64 = (char *)(v6 + ii * (v61 + 2));
            v65 = (float)v64[2];
            v66 = (float)*v64;
            v67 = (float)v64[1];
            v68 = (char *)(v6 + ii * (v61 + 1));
            v69 = (char *)(v6 + v61 * ii);
            v70 = (float)v68[2];
            v71 = (float)*v68;
            v72 = (float)v69[2];
            v97 = v65;
            v73 = (float)v68[1];
            v74 = (float)*v69;
            v75 = (float)v69[1];
            v142 = v67;
            result = a4[1];
            v19 = result == a4[2];
            v135 = v74;
            v136 = v75;
            v137 = v72;
            v138 = v71;
            v139 = v73;
            v140 = v70;
            v141 = v66;
            v143 = v97;
            if ( v19 )
            {
              result = (int)(uintptr_t)(sub_F25DB0(a4, &v135));
            }
            else
            {
              v63 = 0;
              if ( result != 0 )
              {
                *(float *)result = v74;
                *(float *)(result + 4) = v136;
                *(float *)(result + 8) = v137;
                *(float *)(result + 12) = v138;
                *(float *)(result + 16) = v139;
                *(float *)(result + 20) = v140;
                *(float *)(result + 24) = v141;
                *(float *)(result + 28) = v142;
                *(float *)(result + 32) = v143;
                v63 = a4[1];
              }
              a4[1] = v63 + 36;
            }
            v61 += 3;
            if ( a2 <= v61 )
              break;
          }
        }
      }
      break;
    default:
      return result;
  }
  if ( v6 != 0 )
    return glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F2AC90  (binary VA: 0xf2ac90)
// Original: sub_F2AC90
// ----------------------------------------------------------------------------
int sub_F2AC90(uint16_t *a1, unsigned int a2, int a3, int *a4)
{
  int result;
  int v6;
  int v7;
  uint8_t *v8;
  float v9; // xmm2_4
  float v10; // xmm1_4
  uint8_t *v11;
  float v12; // xmm3_4
  float v13; // xmm4_4
  uint8_t *v14;
  float v15; // xmm5_4
  float v16; // xmm1_4
  int v17;
  float v18; // xmm7_4
  bool v19;
  int v20;
  int v21;
  int v22;
  uint8_t *v23;
  float v24; // xmm1_4
  uint8_t *v25;
  float v26; // xmm3_4
  uint8_t *v27;
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm1_4
  int v31;
  float v32; // xmm1_4
  float *v33;
  int v34;
  int v35;
  int v36;
  uint8_t *v37;
  float v38; // xmm1_4
  uint8_t *v39;
  float v40; // xmm3_4
  uint8_t *v41;
  float v42; // xmm4_4
  float v43; // xmm5_4
  float v44; // xmm1_4
  int v45;
  float v46; // xmm1_4
  float *v47;
  unsigned int v48;
  uint16_t m;
  int v50;
  uint8_t *v51;
  float v52; // xmm2_4
  float v53; // xmm1_4
  uint8_t *v54;
  uint8_t *v55;
  float v56; // xmm3_4
  float v57; // xmm4_4
  float v58; // xmm5_4
  float v59; // xmm1_4
  int v60;
  float v61; // xmm7_4
  unsigned int v62;
  uint16_t ii;
  int v64;
  uint8_t *v65;
  float v66; // xmm1_4
  uint8_t *v67;
  uint8_t *v68;
  float v69; // xmm3_4
  float v70; // xmm4_4
  float v71; // xmm5_4
  float v72; // xmm6_4
  float v73; // xmm7_4
  float *v74;
  unsigned int v75;
  uint16_t j;
  int v77;
  uint8_t *v78;
  float v79; // xmm1_4
  uint8_t *v80;
  uint8_t *v81;
  float v82; // xmm3_4
  float v83; // xmm4_4
  float v84; // xmm5_4
  float v85; // xmm6_4
  float v86; // xmm7_4
  float *v87;
  typedef int _g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef uint16_t *_g4_t_k;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef int _g4_t_v101;
  typedef uint16_t *_g4_t_n;
  typedef uint16_t *_g4_t_i;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef int _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef int _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef int _g4_t_v112;
  typedef float _g4_t_v113;
  typedef float _g4_t_v114;
  typedef int _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef int _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef int _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127;
  typedef float _g4_t_v128;
  typedef float _g4_t_v129;
  typedef float _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef float _g4_t_v133;
  typedef float _g4_t_v134;
  typedef float _g4_t_v135;
  typedef float _g4_t_v136;
  typedef float _g4_t_v137;
  typedef float _g4_t_v138;
  typedef float _g4_t_v139;
  typedef float _g4_t_v140;
  typedef float _g4_t_v141;
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef float _g4_t_v151;
  typedef float _g4_t_v152;
  typedef float _g4_t_v153;
  typedef float _g4_t_v154;
  typedef float _g4_t_v155;
  typedef float _g4_t_v156;
  typedef float _g4_t_v157;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (12u + sizeof(_g4_t_v88)) > _g4_s0 ? (12u + sizeof(_g4_t_v88)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v89)) > _g4_s1 ? (12u + sizeof(_g4_t_v89)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v90)) > _g4_s2 ? (12u + sizeof(_g4_t_v90)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v91)) > _g4_s3 ? (12u + sizeof(_g4_t_v91)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v92)) > _g4_s4 ? (12u + sizeof(_g4_t_v92)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_k)) > _g4_s5 ? (16u + sizeof(_g4_t_k)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v95)) > _g4_s6 ? (16u + sizeof(_g4_t_v95)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v96)) > _g4_s7 ? (16u + sizeof(_g4_t_v96)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v97)) > _g4_s8 ? (20u + sizeof(_g4_t_v97)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v98)) > _g4_s9 ? (20u + sizeof(_g4_t_v98)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v99)) > _g4_s10 ? (20u + sizeof(_g4_t_v99)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v100)) > _g4_s11 ? (20u + sizeof(_g4_t_v100)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v101)) > _g4_s12 ? (24u + sizeof(_g4_t_v101)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_n)) > _g4_s13 ? (28u + sizeof(_g4_t_n)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_i)) > _g4_s14 ? (28u + sizeof(_g4_t_i)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v104)) > _g4_s15 ? (40u + sizeof(_g4_t_v104)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v105)) > _g4_s16 ? (44u + sizeof(_g4_t_v105)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v106)) > _g4_s17 ? (48u + sizeof(_g4_t_v106)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v107)) > _g4_s18 ? (52u + sizeof(_g4_t_v107)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v108)) > _g4_s19 ? (56u + sizeof(_g4_t_v108)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v109)) > _g4_s20 ? (60u + sizeof(_g4_t_v109)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v110)) > _g4_s21 ? (64u + sizeof(_g4_t_v110)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v111)) > _g4_s22 ? (68u + sizeof(_g4_t_v111)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v112)) > _g4_s23 ? (72u + sizeof(_g4_t_v112)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v113)) > _g4_s24 ? (76u + sizeof(_g4_t_v113)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v114)) > _g4_s25 ? (80u + sizeof(_g4_t_v114)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v115)) > _g4_s26 ? (84u + sizeof(_g4_t_v115)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v116)) > _g4_s27 ? (88u + sizeof(_g4_t_v116)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v117)) > _g4_s28 ? (92u + sizeof(_g4_t_v117)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v118)) > _g4_s29 ? (96u + sizeof(_g4_t_v118)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v119)) > _g4_s30 ? (100u + sizeof(_g4_t_v119)) : _g4_s30,
    _g4_s32 = (104u + sizeof(_g4_t_v120)) > _g4_s31 ? (104u + sizeof(_g4_t_v120)) : _g4_s31,
    _g4_s33 = (108u + sizeof(_g4_t_v121)) > _g4_s32 ? (108u + sizeof(_g4_t_v121)) : _g4_s32,
    _g4_s34 = (112u + sizeof(_g4_t_v122)) > _g4_s33 ? (112u + sizeof(_g4_t_v122)) : _g4_s33,
    _g4_s35 = (116u + sizeof(_g4_t_v123)) > _g4_s34 ? (116u + sizeof(_g4_t_v123)) : _g4_s34,
    _g4_s36 = (120u + sizeof(_g4_t_v124)) > _g4_s35 ? (120u + sizeof(_g4_t_v124)) : _g4_s35,
    _g4_s37 = (124u + sizeof(_g4_t_v125)) > _g4_s36 ? (124u + sizeof(_g4_t_v125)) : _g4_s36,
    _g4_s38 = (128u + sizeof(_g4_t_v126)) > _g4_s37 ? (128u + sizeof(_g4_t_v126)) : _g4_s37,
    _g4_s39 = (132u + sizeof(_g4_t_v127)) > _g4_s38 ? (132u + sizeof(_g4_t_v127)) : _g4_s38,
    _g4_s40 = (136u + sizeof(_g4_t_v128)) > _g4_s39 ? (136u + sizeof(_g4_t_v128)) : _g4_s39,
    _g4_s41 = (140u + sizeof(_g4_t_v129)) > _g4_s40 ? (140u + sizeof(_g4_t_v129)) : _g4_s40,
    _g4_s42 = (144u + sizeof(_g4_t_v130)) > _g4_s41 ? (144u + sizeof(_g4_t_v130)) : _g4_s41,
    _g4_s43 = (148u + sizeof(_g4_t_v131)) > _g4_s42 ? (148u + sizeof(_g4_t_v131)) : _g4_s42,
    _g4_s44 = (152u + sizeof(_g4_t_v132)) > _g4_s43 ? (152u + sizeof(_g4_t_v132)) : _g4_s43,
    _g4_s45 = (156u + sizeof(_g4_t_v133)) > _g4_s44 ? (156u + sizeof(_g4_t_v133)) : _g4_s44,
    _g4_s46 = (160u + sizeof(_g4_t_v134)) > _g4_s45 ? (160u + sizeof(_g4_t_v134)) : _g4_s45,
    _g4_s47 = (164u + sizeof(_g4_t_v135)) > _g4_s46 ? (164u + sizeof(_g4_t_v135)) : _g4_s46,
    _g4_s48 = (168u + sizeof(_g4_t_v136)) > _g4_s47 ? (168u + sizeof(_g4_t_v136)) : _g4_s47,
    _g4_s49 = (172u + sizeof(_g4_t_v137)) > _g4_s48 ? (172u + sizeof(_g4_t_v137)) : _g4_s48,
    _g4_s50 = (176u + sizeof(_g4_t_v138)) > _g4_s49 ? (176u + sizeof(_g4_t_v138)) : _g4_s49,
    _g4_s51 = (180u + sizeof(_g4_t_v139)) > _g4_s50 ? (180u + sizeof(_g4_t_v139)) : _g4_s50,
    _g4_s52 = (184u + sizeof(_g4_t_v140)) > _g4_s51 ? (184u + sizeof(_g4_t_v140)) : _g4_s51,
    _g4_s53 = (188u + sizeof(_g4_t_v141)) > _g4_s52 ? (188u + sizeof(_g4_t_v141)) : _g4_s52,
    _g4_s54 = (192u + sizeof(_g4_t_v142)) > _g4_s53 ? (192u + sizeof(_g4_t_v142)) : _g4_s53,
    _g4_s55 = (196u + sizeof(_g4_t_v143)) > _g4_s54 ? (196u + sizeof(_g4_t_v143)) : _g4_s54,
    _g4_s56 = (200u + sizeof(_g4_t_v144)) > _g4_s55 ? (200u + sizeof(_g4_t_v144)) : _g4_s55,
    _g4_s57 = (204u + sizeof(_g4_t_v145)) > _g4_s56 ? (204u + sizeof(_g4_t_v145)) : _g4_s56,
    _g4_s58 = (208u + sizeof(_g4_t_v146)) > _g4_s57 ? (208u + sizeof(_g4_t_v146)) : _g4_s57,
    _g4_s59 = (212u + sizeof(_g4_t_v147)) > _g4_s58 ? (212u + sizeof(_g4_t_v147)) : _g4_s58,
    _g4_s60 = (216u + sizeof(_g4_t_v148)) > _g4_s59 ? (216u + sizeof(_g4_t_v148)) : _g4_s59,
    _g4_s61 = (220u + sizeof(_g4_t_v149)) > _g4_s60 ? (220u + sizeof(_g4_t_v149)) : _g4_s60,
    _g4_s62 = (224u + sizeof(_g4_t_v150)) > _g4_s61 ? (224u + sizeof(_g4_t_v150)) : _g4_s61,
    _g4_s63 = (228u + sizeof(_g4_t_v151)) > _g4_s62 ? (228u + sizeof(_g4_t_v151)) : _g4_s62,
    _g4_s64 = (232u + sizeof(_g4_t_v152)) > _g4_s63 ? (232u + sizeof(_g4_t_v152)) : _g4_s63,
    _g4_s65 = (236u + sizeof(_g4_t_v153)) > _g4_s64 ? (236u + sizeof(_g4_t_v153)) : _g4_s64,
    _g4_s66 = (240u + sizeof(_g4_t_v154)) > _g4_s65 ? (240u + sizeof(_g4_t_v154)) : _g4_s65,
    _g4_s67 = (244u + sizeof(_g4_t_v155)) > _g4_s66 ? (244u + sizeof(_g4_t_v155)) : _g4_s66,
    _g4_s68 = (248u + sizeof(_g4_t_v156)) > _g4_s67 ? (248u + sizeof(_g4_t_v156)) : _g4_s67,
    _g4_s69 = (252u + sizeof(_g4_t_v157)) > _g4_s68 ? (252u + sizeof(_g4_t_v157)) : _g4_s68
  };
  alignas(16) uint8_t _g4_sf[_g4_s69];
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 12u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 12u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 12u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 12u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 12u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 16u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 16u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 16u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 20u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 20u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 20u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 20u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 24u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 28u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 28u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 40u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 44u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 48u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 52u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 56u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 60u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 64u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 68u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 72u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 76u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 80u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 84u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 88u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 92u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 96u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 100u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 104u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 108u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 112u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 116u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 120u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 124u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 128u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 132u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 136u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 140u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 144u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 148u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 152u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 156u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 160u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 164u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 168u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 172u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 176u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 180u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 184u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 188u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 192u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 196u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 200u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 204u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 208u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 212u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 216u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 220u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 224u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 228u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 232u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 236u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 240u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 244u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 248u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 252u);

  result = *(uint16_t *)(a3 + 12);
  if ( (uint16_t)result == 3 )
  {
    v34 = glitch::video::IBuffer::mapInternal(*(glitch::video::IBuffer::Self **)a3, 0, 0, *(uint32_t *)(*(uint32_t *)a3 + 20), 0);
    v101 = 0;
    if ( v34 != 0 )
      v101 = *(uint32_t *)(a3 + 4) + v34;
    if ( a1 != nullptr )
    {
      for ( i = &a1[a2]; i != a1; a1 += 3 )
      {
        v36 = *(uint16_t *)(a3 + 14);
        v37 = (uint8_t *)(v101 + v36 * a1[2]);
        v90 = (float)v37[2] + (float)((float)0 * 65536.0);
        v96 = (float)v37[1] + (float)((float)0 * 65536.0);
        v38 = (float)*v37;
        v39 = (uint8_t *)(v101 + v36 * a1[1]);
        v98 = v38 + (float)((float)0 * 65536.0);
        v40 = (float)((float)0 * 65536.0) + (float)v39[1];
        v41 = (uint8_t *)(v101 + v36 * *a1);
        v42 = (float)((float)0 * 65536.0) + (float)*v39;
        v43 = (float)((float)0 * 65536.0) + (float)v41[2];
        v44 = (float)v41[1];
        v45 = *v41;
        v136 = (float)((float)0 * 65536.0) + (float)v39[2];
        v132 = (float)((float)0 * 65536.0) + v44;
        v133 = v43;
        v46 = (float)((float)0 * 65536.0) + (float)v45;
        v134 = v42;
        v135 = v40;
        v131 = v46;
        v137 = v98;
        v47 = (float *)a4[1];
        v19 = v47 == (float *)a4[2];
        v138 = v96;
        v139 = v90;
        if ( v19 )
        {
          sub_F25DB0(a4, &v131);
        }
        else
        {
          v35 = 0;
          if ( v47 != nullptr )
          {
            *v47 = v46;
            v47[1] = v132;
            v47[2] = v133;
            v47[3] = v134;
            v47[4] = v135;
            v47[5] = v136;
            v47[6] = v137;
            v47[7] = v138;
            v47[8] = v139;
            v35 = a4[1];
          }
          a4[1] = v35 + 36;
        }
      }
    }
    else if ( a2 != 0 )
    {
      v75 = 0;
      for ( j = *(uint16_t *)(a3 + 14); ; j = *(uint16_t *)(a3 + 14) )
      {
        v78 = (uint8_t *)(v101 + j * (v75 + 2));
        v92 = (float)v78[2] + (float)((float)0 * 65536.0);
        v100 = (float)v78[1] + (float)((float)0 * 65536.0);
        v79 = (float)*v78;
        v80 = (uint8_t *)(v101 + j * (v75 + 1));
        v81 = (uint8_t *)(v101 + v75 * j);
        v82 = (float)((float)0 * 65536.0) + (float)v80[1];
        v83 = (float)((float)0 * 65536.0) + (float)*v80;
        v84 = (float)((float)0 * 65536.0) + (float)v81[2];
        v85 = (float)((float)0 * 65536.0) + (float)v81[1];
        v86 = (float)*v81;
        v87 = (float *)a4[1];
        v127 = (float)((float)0 * 65536.0) + (float)v80[2];
        v19 = v87 == (float *)a4[2];
        v128 = v79 + (float)((float)0 * 65536.0);
        v129 = v100;
        v123 = v85;
        v124 = v84;
        v122 = (float)((float)0 * 65536.0) + v86;
        v125 = v83;
        v126 = v82;
        v130 = v92;
        if ( v19 )
        {
          sub_F25DB0(a4, &v122);
        }
        else
        {
          v77 = 0;
          if ( v87 != nullptr )
          {
            *v87 = (float)((float)0 * 65536.0) + v86;
            v87[1] = v123;
            v87[2] = v124;
            v87[3] = v125;
            v87[4] = v126;
            v87[5] = v127;
            v87[6] = v128;
            v87[7] = v129;
            v87[8] = v130;
            v77 = a4[1];
          }
          a4[1] = v77 + 36;
        }
        v75 += 3;
        if ( a2 <= v75 )
          break;
      }
    }
  }
  else
  {
    if ( (uint16_t)result != 4 )
    {
      if ( (uint16_t)result == 2 )
      {
        result = glitch::video::IBuffer::mapInternal(
                   *(glitch::video::IBuffer::Self **)a3,
                   0,
                   0,
                   *(uint32_t *)(*(uint32_t *)a3 + 20),
                   0);
        v88 = 0;
        if ( result != 0 )
        {
          result += *(uint32_t *)(a3 + 4);
          v88 = result;
        }
        if ( a1 != nullptr )
        {
          for ( k = &a1[a2]; k != a1; a4[1] = v6 + 36 )
          {
            while ( 1 )
            {
              v7 = *(uint16_t *)(a3 + 14);
              v8 = (uint8_t *)(v88 + v7 * a1[2]);
              v9 = (float)((float)0 * 65536.0) + (float)v8[1];
              v10 = (float)*v8;
              v11 = (uint8_t *)(v88 + v7 * a1[1]);
              v12 = (float)((float)0 * 65536.0) + v10;
              v13 = (float)((float)0 * 65536.0) + (float)v11[1];
              v14 = (uint8_t *)(v88 + v7 * *a1);
              v15 = (float)((float)0 * 65536.0) + (float)*v11;
              v16 = (float)v14[1];
              v17 = *v14;
              v115 = 0;
              v118 = 0;
              v18 = (float)v17;
              result = a4[1];
              v19 = result == a4[2];
              v121 = 0;
              v114 = (float)((float)0 * 65536.0) + v16;
              v116 = v15;
              v117 = v13;
              v119 = v12;
              v120 = v9;
              v113 = (float)((float)0 * 65536.0) + v18;
              if ( !v19 )
                break;
              a1 += 3;
              result = (int)(uintptr_t)(sub_F25DB0(a4, &v113));
              if ( k == a1 )
                goto LABEL_15;
            }
            v6 = 0;
            if ( result != 0 )
            {
              *(float *)result = (float)((float)0 * 65536.0) + v18;
              *(float *)(result + 4) = v114;
              *(uint32_t *)(result + 8) = v115;
              *(float *)(result + 12) = v116;
              *(float *)(result + 16) = v117;
              *(uint32_t *)(result + 20) = v118;
              *(float *)(result + 24) = v119;
              *(float *)(result + 28) = v120;
              *(uint32_t *)(result + 32) = v121;
              v6 = a4[1];
            }
            a1 += 3;
          }
        }
        else if ( a2 != 0 )
        {
          v48 = 0;
          for ( m = *(uint16_t *)(a3 + 14); ; m = *(uint16_t *)(a3 + 14) )
          {
            v51 = (uint8_t *)(v88 + m * (v48 + 2));
            v52 = (float)((float)0 * 65536.0) + (float)v51[1];
            v53 = (float)*v51;
            v54 = (uint8_t *)(v88 + m * (v48 + 1));
            v55 = (uint8_t *)(v88 + v48 * m);
            v56 = (float)((float)0 * 65536.0) + v53;
            v57 = (float)((float)0 * 65536.0) + (float)v54[1];
            v58 = (float)((float)0 * 65536.0) + (float)*v54;
            v59 = (float)v55[1];
            v60 = *v55;
            v106 = 0;
            v109 = 0;
            v112 = 0;
            v107 = v58;
            v61 = (float)v60;
            result = a4[1];
            v19 = result == a4[2];
            v105 = (float)((float)0 * 65536.0) + v59;
            v108 = v57;
            v110 = v56;
            v111 = v52;
            v104 = (float)((float)0 * 65536.0) + v61;
            if ( v19 )
            {
              result = (int)(uintptr_t)(sub_F25DB0(a4, &v104));
            }
            else
            {
              v50 = 0;
              if ( result != 0 )
              {
                *(float *)result = (float)((float)0 * 65536.0) + v61;
                *(float *)(result + 4) = v105;
                *(uint32_t *)(result + 8) = v106;
                *(float *)(result + 12) = v107;
                *(float *)(result + 16) = v108;
                *(uint32_t *)(result + 20) = v109;
                *(float *)(result + 24) = v110;
                *(float *)(result + 28) = v111;
                *(uint32_t *)(result + 32) = v112;
                v50 = a4[1];
              }
              a4[1] = v50 + 36;
            }
            v48 += 3;
            if ( a2 <= v48 )
              break;
          }
        }
LABEL_15:
        if ( v88 != 0 )
          return glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)a3);
      }
      return result;
    }
    v20 = glitch::video::IBuffer::mapInternal(*(glitch::video::IBuffer::Self **)a3, 0, 0, *(uint32_t *)(*(uint32_t *)a3 + 20), 0);
    v101 = 0;
    if ( v20 != 0 )
      v101 = *(uint32_t *)(a3 + 4) + v20;
    if ( a1 != nullptr )
    {
      for ( n = &a1[a2]; n != a1; a4[1] = v21 + 36 )
      {
        while ( 1 )
        {
          v22 = *(uint16_t *)(a3 + 14);
          v23 = (uint8_t *)(v101 + v22 * a1[2]);
          v89 = (float)v23[2] + (float)((float)0 * 65536.0);
          v95 = (float)v23[1] + (float)((float)0 * 65536.0);
          v24 = (float)*v23;
          v25 = (uint8_t *)(v101 + v22 * a1[1]);
          v97 = v24 + (float)((float)0 * 65536.0);
          v26 = (float)((float)0 * 65536.0) + (float)v25[1];
          v27 = (uint8_t *)(v101 + v22 * *a1);
          v28 = (float)((float)0 * 65536.0) + (float)*v25;
          v29 = (float)((float)0 * 65536.0) + (float)v27[2];
          v30 = (float)v27[1];
          v31 = *v27;
          v154 = (float)((float)0 * 65536.0) + (float)v25[2];
          v150 = (float)((float)0 * 65536.0) + v30;
          v151 = v29;
          v32 = (float)((float)0 * 65536.0) + (float)v31;
          v152 = v28;
          v153 = v26;
          v149 = v32;
          v155 = v97;
          v33 = (float *)a4[1];
          v19 = v33 == (float *)a4[2];
          v156 = v95;
          v157 = v89;
          if ( !v19 )
            break;
          a1 += 3;
          sub_F25DB0(a4, &v149);
          if ( n == a1 )
            goto LABEL_27;
        }
        v21 = 0;
        if ( v33 != nullptr )
        {
          *v33 = v32;
          v33[1] = v150;
          v33[2] = v151;
          v33[3] = v152;
          v33[4] = v153;
          v33[5] = v154;
          v33[6] = v155;
          v33[7] = v156;
          v33[8] = v157;
          v21 = a4[1];
        }
        a1 += 3;
      }
    }
    else if ( a2 != 0 )
    {
      v62 = 0;
      for ( ii = *(uint16_t *)(a3 + 14); ; ii = *(uint16_t *)(a3 + 14) )
      {
        v65 = (uint8_t *)(v101 + ii * (v62 + 2));
        v91 = (float)v65[2] + (float)((float)0 * 65536.0);
        v99 = (float)v65[1] + (float)((float)0 * 65536.0);
        v66 = (float)*v65;
        v67 = (uint8_t *)(v101 + ii * (v62 + 1));
        v68 = (uint8_t *)(v101 + v62 * ii);
        v69 = (float)((float)0 * 65536.0) + (float)v67[1];
        v70 = (float)((float)0 * 65536.0) + (float)*v67;
        v71 = (float)((float)0 * 65536.0) + (float)v68[2];
        v72 = (float)((float)0 * 65536.0) + (float)v68[1];
        v73 = (float)*v68;
        v74 = (float *)a4[1];
        v145 = (float)((float)0 * 65536.0) + (float)v67[2];
        v19 = v74 == (float *)a4[2];
        v146 = v66 + (float)((float)0 * 65536.0);
        v147 = v99;
        v141 = v72;
        v142 = v71;
        v140 = (float)((float)0 * 65536.0) + v73;
        v143 = v70;
        v144 = v69;
        v148 = v91;
        if ( v19 )
        {
          sub_F25DB0(a4, &v140);
        }
        else
        {
          v64 = 0;
          if ( v74 != nullptr )
          {
            *v74 = (float)((float)0 * 65536.0) + v73;
            v74[1] = v141;
            v74[2] = v142;
            v74[3] = v143;
            v74[4] = v144;
            v74[5] = v145;
            v74[6] = v146;
            v74[7] = v147;
            v74[8] = v148;
            v64 = a4[1];
          }
          a4[1] = v64 + 36;
        }
        v62 += 3;
        if ( a2 <= v62 )
          break;
      }
    }
  }
LABEL_27:
  result = v101;
  if ( v101 != 0 )
    return glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F2BB20  (binary VA: 0xf2bb20)
// Original: sub_F2BB20
// ----------------------------------------------------------------------------
int sub_F2BB20(uint16_t *a1, unsigned int a2, int a3, int *a4)
{
  int result;
  int v6;
  int v7;
  int v8;
  uint16_t *v9;
  float v10; // xmm2_4
  float v11; // xmm1_4
  uint16_t *v12;
  float v13; // xmm3_4
  float v14; // xmm4_4
  uint16_t *v15;
  float v16; // xmm5_4
  float v17; // xmm1_4
  int v18;
  float v19; // xmm7_4
  int v20;
  bool v21;
  int v22;
  int v23;
  uint16_t *v24;
  float v25; // xmm1_4
  uint16_t *v26;
  float v27; // xmm3_4
  uint16_t *v28;
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm1_4
  int v32;
  float v33; // xmm1_4
  int v34;
  int v35;
  uint16_t *v36;
  float v37; // xmm1_4
  uint16_t *v38;
  float v39; // xmm3_4
  uint16_t *v40;
  float v41; // xmm4_4
  float v42; // xmm5_4
  float v43; // xmm1_4
  int v44;
  float v45; // xmm1_4
  unsigned int v46;
  uint16_t m;
  int v48;
  uint16_t *v49;
  float v50; // xmm2_4
  float v51; // xmm1_4
  uint16_t *v52;
  uint16_t *v53;
  float v54; // xmm3_4
  float v55; // xmm4_4
  float v56; // xmm5_4
  float v57; // xmm1_4
  int v58;
  float v59; // xmm7_4
  int v60;
  unsigned int v61;
  uint16_t ii;
  int v63;
  uint16_t *v64;
  float v65; // xmm1_4
  uint16_t *v66;
  uint16_t *v67;
  float v68; // xmm3_4
  float v69; // xmm4_4
  float v70; // xmm5_4
  float v71; // xmm6_4
  float v72; // xmm7_4
  unsigned int v73;
  uint16_t j;
  int v75;
  uint16_t *v76;
  float v77; // xmm1_4
  uint16_t *v78;
  uint16_t *v79;
  float v80; // xmm3_4
  float v81; // xmm4_4
  float v82; // xmm5_4
  float v83; // xmm6_4
  float v84; // xmm7_4
  typedef int _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef float _g4_t_v88;
  typedef float _g4_t_v89;
  typedef uint16_t *_g4_t_k;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef int _g4_t_v98;
  typedef uint16_t *_g4_t_n;
  typedef uint16_t *_g4_t_i;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef int _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef int _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef int _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef int _g4_t_v112;
  typedef float _g4_t_v113;
  typedef float _g4_t_v114;
  typedef int _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef int _g4_t_v118;
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127;
  typedef float _g4_t_v128;
  typedef float _g4_t_v129;
  typedef float _g4_t_v130;
  typedef float _g4_t_v131;
  typedef float _g4_t_v132;
  typedef float _g4_t_v133;
  typedef float _g4_t_v134;
  typedef float _g4_t_v135;
  typedef float _g4_t_v136;
  typedef float _g4_t_v137;
  typedef float _g4_t_v138;
  typedef float _g4_t_v139;
  typedef float _g4_t_v140;
  typedef float _g4_t_v141;
  typedef float _g4_t_v142;
  typedef float _g4_t_v143;
  typedef float _g4_t_v144;
  typedef float _g4_t_v145;
  typedef float _g4_t_v146;
  typedef float _g4_t_v147;
  typedef float _g4_t_v148;
  typedef float _g4_t_v149;
  typedef float _g4_t_v150;
  typedef float _g4_t_v151;
  typedef float _g4_t_v152;
  typedef float _g4_t_v153;
  typedef float _g4_t_v154;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (12u + sizeof(_g4_t_v85)) > _g4_s0 ? (12u + sizeof(_g4_t_v85)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v86)) > _g4_s1 ? (12u + sizeof(_g4_t_v86)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v87)) > _g4_s2 ? (12u + sizeof(_g4_t_v87)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v88)) > _g4_s3 ? (12u + sizeof(_g4_t_v88)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v89)) > _g4_s4 ? (12u + sizeof(_g4_t_v89)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_k)) > _g4_s5 ? (16u + sizeof(_g4_t_k)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v92)) > _g4_s6 ? (16u + sizeof(_g4_t_v92)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v93)) > _g4_s7 ? (16u + sizeof(_g4_t_v93)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v94)) > _g4_s8 ? (20u + sizeof(_g4_t_v94)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v95)) > _g4_s9 ? (20u + sizeof(_g4_t_v95)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v96)) > _g4_s10 ? (20u + sizeof(_g4_t_v96)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v97)) > _g4_s11 ? (20u + sizeof(_g4_t_v97)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v98)) > _g4_s12 ? (24u + sizeof(_g4_t_v98)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_n)) > _g4_s13 ? (28u + sizeof(_g4_t_n)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_i)) > _g4_s14 ? (28u + sizeof(_g4_t_i)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v101)) > _g4_s15 ? (40u + sizeof(_g4_t_v101)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v102)) > _g4_s16 ? (44u + sizeof(_g4_t_v102)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v103)) > _g4_s17 ? (48u + sizeof(_g4_t_v103)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_v104)) > _g4_s18 ? (52u + sizeof(_g4_t_v104)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v105)) > _g4_s19 ? (56u + sizeof(_g4_t_v105)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v106)) > _g4_s20 ? (60u + sizeof(_g4_t_v106)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v107)) > _g4_s21 ? (64u + sizeof(_g4_t_v107)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v108)) > _g4_s22 ? (68u + sizeof(_g4_t_v108)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v109)) > _g4_s23 ? (72u + sizeof(_g4_t_v109)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v110)) > _g4_s24 ? (76u + sizeof(_g4_t_v110)) : _g4_s24,
    _g4_s26 = (80u + sizeof(_g4_t_v111)) > _g4_s25 ? (80u + sizeof(_g4_t_v111)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v112)) > _g4_s26 ? (84u + sizeof(_g4_t_v112)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v113)) > _g4_s27 ? (88u + sizeof(_g4_t_v113)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v114)) > _g4_s28 ? (92u + sizeof(_g4_t_v114)) : _g4_s28,
    _g4_s30 = (96u + sizeof(_g4_t_v115)) > _g4_s29 ? (96u + sizeof(_g4_t_v115)) : _g4_s29,
    _g4_s31 = (100u + sizeof(_g4_t_v116)) > _g4_s30 ? (100u + sizeof(_g4_t_v116)) : _g4_s30,
    _g4_s32 = (104u + sizeof(_g4_t_v117)) > _g4_s31 ? (104u + sizeof(_g4_t_v117)) : _g4_s31,
    _g4_s33 = (108u + sizeof(_g4_t_v118)) > _g4_s32 ? (108u + sizeof(_g4_t_v118)) : _g4_s32,
    _g4_s34 = (112u + sizeof(_g4_t_v119)) > _g4_s33 ? (112u + sizeof(_g4_t_v119)) : _g4_s33,
    _g4_s35 = (116u + sizeof(_g4_t_v120)) > _g4_s34 ? (116u + sizeof(_g4_t_v120)) : _g4_s34,
    _g4_s36 = (120u + sizeof(_g4_t_v121)) > _g4_s35 ? (120u + sizeof(_g4_t_v121)) : _g4_s35,
    _g4_s37 = (124u + sizeof(_g4_t_v122)) > _g4_s36 ? (124u + sizeof(_g4_t_v122)) : _g4_s36,
    _g4_s38 = (128u + sizeof(_g4_t_v123)) > _g4_s37 ? (128u + sizeof(_g4_t_v123)) : _g4_s37,
    _g4_s39 = (132u + sizeof(_g4_t_v124)) > _g4_s38 ? (132u + sizeof(_g4_t_v124)) : _g4_s38,
    _g4_s40 = (136u + sizeof(_g4_t_v125)) > _g4_s39 ? (136u + sizeof(_g4_t_v125)) : _g4_s39,
    _g4_s41 = (140u + sizeof(_g4_t_v126)) > _g4_s40 ? (140u + sizeof(_g4_t_v126)) : _g4_s40,
    _g4_s42 = (144u + sizeof(_g4_t_v127)) > _g4_s41 ? (144u + sizeof(_g4_t_v127)) : _g4_s41,
    _g4_s43 = (148u + sizeof(_g4_t_v128)) > _g4_s42 ? (148u + sizeof(_g4_t_v128)) : _g4_s42,
    _g4_s44 = (152u + sizeof(_g4_t_v129)) > _g4_s43 ? (152u + sizeof(_g4_t_v129)) : _g4_s43,
    _g4_s45 = (156u + sizeof(_g4_t_v130)) > _g4_s44 ? (156u + sizeof(_g4_t_v130)) : _g4_s44,
    _g4_s46 = (160u + sizeof(_g4_t_v131)) > _g4_s45 ? (160u + sizeof(_g4_t_v131)) : _g4_s45,
    _g4_s47 = (164u + sizeof(_g4_t_v132)) > _g4_s46 ? (164u + sizeof(_g4_t_v132)) : _g4_s46,
    _g4_s48 = (168u + sizeof(_g4_t_v133)) > _g4_s47 ? (168u + sizeof(_g4_t_v133)) : _g4_s47,
    _g4_s49 = (172u + sizeof(_g4_t_v134)) > _g4_s48 ? (172u + sizeof(_g4_t_v134)) : _g4_s48,
    _g4_s50 = (176u + sizeof(_g4_t_v135)) > _g4_s49 ? (176u + sizeof(_g4_t_v135)) : _g4_s49,
    _g4_s51 = (180u + sizeof(_g4_t_v136)) > _g4_s50 ? (180u + sizeof(_g4_t_v136)) : _g4_s50,
    _g4_s52 = (184u + sizeof(_g4_t_v137)) > _g4_s51 ? (184u + sizeof(_g4_t_v137)) : _g4_s51,
    _g4_s53 = (188u + sizeof(_g4_t_v138)) > _g4_s52 ? (188u + sizeof(_g4_t_v138)) : _g4_s52,
    _g4_s54 = (192u + sizeof(_g4_t_v139)) > _g4_s53 ? (192u + sizeof(_g4_t_v139)) : _g4_s53,
    _g4_s55 = (196u + sizeof(_g4_t_v140)) > _g4_s54 ? (196u + sizeof(_g4_t_v140)) : _g4_s54,
    _g4_s56 = (200u + sizeof(_g4_t_v141)) > _g4_s55 ? (200u + sizeof(_g4_t_v141)) : _g4_s55,
    _g4_s57 = (204u + sizeof(_g4_t_v142)) > _g4_s56 ? (204u + sizeof(_g4_t_v142)) : _g4_s56,
    _g4_s58 = (208u + sizeof(_g4_t_v143)) > _g4_s57 ? (208u + sizeof(_g4_t_v143)) : _g4_s57,
    _g4_s59 = (212u + sizeof(_g4_t_v144)) > _g4_s58 ? (212u + sizeof(_g4_t_v144)) : _g4_s58,
    _g4_s60 = (216u + sizeof(_g4_t_v145)) > _g4_s59 ? (216u + sizeof(_g4_t_v145)) : _g4_s59,
    _g4_s61 = (220u + sizeof(_g4_t_v146)) > _g4_s60 ? (220u + sizeof(_g4_t_v146)) : _g4_s60,
    _g4_s62 = (224u + sizeof(_g4_t_v147)) > _g4_s61 ? (224u + sizeof(_g4_t_v147)) : _g4_s61,
    _g4_s63 = (228u + sizeof(_g4_t_v148)) > _g4_s62 ? (228u + sizeof(_g4_t_v148)) : _g4_s62,
    _g4_s64 = (232u + sizeof(_g4_t_v149)) > _g4_s63 ? (232u + sizeof(_g4_t_v149)) : _g4_s63,
    _g4_s65 = (236u + sizeof(_g4_t_v150)) > _g4_s64 ? (236u + sizeof(_g4_t_v150)) : _g4_s64,
    _g4_s66 = (240u + sizeof(_g4_t_v151)) > _g4_s65 ? (240u + sizeof(_g4_t_v151)) : _g4_s65,
    _g4_s67 = (244u + sizeof(_g4_t_v152)) > _g4_s66 ? (244u + sizeof(_g4_t_v152)) : _g4_s66,
    _g4_s68 = (248u + sizeof(_g4_t_v153)) > _g4_s67 ? (248u + sizeof(_g4_t_v153)) : _g4_s67,
    _g4_s69 = (252u + sizeof(_g4_t_v154)) > _g4_s68 ? (252u + sizeof(_g4_t_v154)) : _g4_s68
  };
  alignas(16) uint8_t _g4_sf[_g4_s69];
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 12u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 12u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 12u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 12u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 12u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 16u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 16u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 16u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 20u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 20u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 20u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 20u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 24u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 28u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 28u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 40u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 44u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 48u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 52u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 56u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 60u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 64u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 68u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 72u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 76u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 80u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 84u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 88u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 92u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 96u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 100u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 104u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 108u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 112u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 116u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 120u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 124u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 128u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 132u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 136u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 140u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 144u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 148u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 152u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 156u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 160u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 164u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 168u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 172u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 176u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 180u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 184u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 188u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 192u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 196u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 200u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 204u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 208u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 212u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 216u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 220u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 224u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 228u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 232u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 236u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 240u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 244u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 248u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 252u);

  result = *(uint16_t *)(a3 + 12);
  if ( (uint16_t)result == 3 )
  {
    result = glitch::video::IBuffer::mapInternal(
               *(glitch::video::IBuffer::Self **)a3,
               0,
               0,
               *(uint32_t *)(*(uint32_t *)a3 + 20),
               0);
    v98 = 0;
    if ( result != 0 )
    {
      result += *(uint32_t *)(a3 + 4);
      v98 = result;
    }
    if ( a1 != nullptr )
    {
      for ( i = &a1[a2]; i != a1; a1 += 3 )
      {
        v35 = *(uint16_t *)(a3 + 14);
        v36 = (uint16_t *)(v98 + v35 * a1[2]);
        v87 = (float)v36[2] + (float)((float)0 * 65536.0);
        v93 = (float)v36[1] + (float)((float)0 * 65536.0);
        v37 = (float)*v36;
        v38 = (uint16_t *)(v98 + v35 * a1[1]);
        v95 = v37 + (float)((float)0 * 65536.0);
        v39 = (float)((float)0 * 65536.0) + (float)v38[1];
        v40 = (uint16_t *)(v98 + v35 * *a1);
        v41 = (float)((float)0 * 65536.0) + (float)*v38;
        v42 = (float)((float)0 * 65536.0) + (float)v40[2];
        v43 = (float)v40[1];
        v44 = *v40;
        v133 = (float)((float)0 * 65536.0) + (float)v38[2];
        v129 = (float)((float)0 * 65536.0) + v43;
        v130 = v42;
        v45 = (float)((float)0 * 65536.0) + (float)v44;
        v131 = v41;
        v132 = v39;
        v128 = v45;
        v134 = v95;
        result = a4[1];
        v21 = result == a4[2];
        v135 = v93;
        v136 = v87;
        if ( v21 )
        {
          result = (int)(uintptr_t)(sub_F25DB0(a4, &v128));
        }
        else
        {
          v34 = 0;
          if ( result != 0 )
          {
            *(float *)result = v45;
            *(float *)(result + 4) = v129;
            *(float *)(result + 8) = v130;
            *(float *)(result + 12) = v131;
            *(float *)(result + 16) = v132;
            *(float *)(result + 20) = v133;
            *(float *)(result + 24) = v134;
            *(float *)(result + 28) = v135;
            *(float *)(result + 32) = v136;
            v34 = a4[1];
          }
          a4[1] = v34 + 36;
        }
      }
    }
    else
    {
      result = a2;
      if ( a2 != 0 )
      {
        v73 = 0;
        for ( j = *(uint16_t *)(a3 + 14); ; j = *(uint16_t *)(a3 + 14) )
        {
          v76 = (uint16_t *)(v98 + j * (v73 + 2));
          v89 = (float)v76[2] + (float)((float)0 * 65536.0);
          v97 = (float)v76[1] + (float)((float)0 * 65536.0);
          v77 = (float)*v76;
          v78 = (uint16_t *)(v98 + j * (v73 + 1));
          v79 = (uint16_t *)(v98 + v73 * j);
          v80 = (float)((float)0 * 65536.0) + (float)v78[1];
          v81 = (float)((float)0 * 65536.0) + (float)*v78;
          v82 = (float)((float)0 * 65536.0) + (float)v79[2];
          v83 = (float)((float)0 * 65536.0) + (float)v79[1];
          v84 = (float)*v79;
          result = a4[1];
          v124 = (float)((float)0 * 65536.0) + (float)v78[2];
          v21 = result == a4[2];
          v125 = v77 + (float)((float)0 * 65536.0);
          v126 = v97;
          v120 = v83;
          v121 = v82;
          v119 = (float)((float)0 * 65536.0) + v84;
          v122 = v81;
          v123 = v80;
          v127 = v89;
          if ( v21 )
          {
            result = (int)(uintptr_t)(sub_F25DB0(a4, &v119));
          }
          else
          {
            v75 = 0;
            if ( result != 0 )
            {
              *(float *)result = (float)((float)0 * 65536.0) + v84;
              *(float *)(result + 4) = v120;
              *(float *)(result + 8) = v121;
              *(float *)(result + 12) = v122;
              *(float *)(result + 16) = v123;
              *(float *)(result + 20) = v124;
              *(float *)(result + 24) = v125;
              *(float *)(result + 28) = v126;
              *(float *)(result + 32) = v127;
              v75 = a4[1];
            }
            a4[1] = v75 + 36;
          }
          v73 += 3;
          if ( a2 <= v73 )
            break;
        }
      }
    }
  }
  else
  {
    if ( (uint16_t)result != 4 )
    {
      if ( (uint16_t)result == 2 )
      {
        v6 = glitch::video::IBuffer::mapInternal(
               *(glitch::video::IBuffer::Self **)a3,
               0,
               0,
               *(uint32_t *)(*(uint32_t *)a3 + 20),
               0);
        v85 = 0;
        if ( v6 != 0 )
          v85 = *(uint32_t *)(a3 + 4) + v6;
        if ( a1 != nullptr )
        {
          for ( k = &a1[a2]; k != a1; a4[1] = v7 + 36 )
          {
            while ( 1 )
            {
              v8 = *(uint16_t *)(a3 + 14);
              v9 = (uint16_t *)(v85 + v8 * a1[2]);
              v10 = (float)((float)0 * 65536.0) + (float)v9[1];
              v11 = (float)*v9;
              v12 = (uint16_t *)(v85 + v8 * a1[1]);
              v13 = (float)((float)0 * 65536.0) + v11;
              v14 = (float)((float)0 * 65536.0) + (float)v12[1];
              v15 = (uint16_t *)(v85 + v8 * *a1);
              v16 = (float)((float)0 * 65536.0) + (float)*v12;
              v17 = (float)v15[1];
              v18 = *v15;
              v112 = 0;
              v115 = 0;
              v19 = (float)v18;
              v20 = a4[1];
              v21 = v20 == a4[2];
              v118 = 0;
              v111 = (float)((float)0 * 65536.0) + v17;
              v113 = v16;
              v114 = v14;
              v116 = v13;
              v117 = v10;
              v110 = (float)((float)0 * 65536.0) + v19;
              if ( !v21 )
                break;
              a1 += 3;
              sub_F25DB0(a4, &v110);
              if ( k == a1 )
                goto LABEL_15;
            }
            v7 = 0;
            if ( v20 != 0 )
            {
              *(float *)v20 = (float)((float)0 * 65536.0) + v19;
              *(float *)(v20 + 4) = v111;
              *(uint32_t *)(v20 + 8) = v112;
              *(float *)(v20 + 12) = v113;
              *(float *)(v20 + 16) = v114;
              *(uint32_t *)(v20 + 20) = v115;
              *(float *)(v20 + 24) = v116;
              *(float *)(v20 + 28) = v117;
              *(uint32_t *)(v20 + 32) = v118;
              v7 = a4[1];
            }
            a1 += 3;
          }
        }
        else if ( a2 != 0 )
        {
          v46 = 0;
          for ( m = *(uint16_t *)(a3 + 14); ; m = *(uint16_t *)(a3 + 14) )
          {
            v49 = (uint16_t *)(v85 + m * (v46 + 2));
            v50 = (float)((float)0 * 65536.0) + (float)v49[1];
            v51 = (float)*v49;
            v52 = (uint16_t *)(v85 + m * (v46 + 1));
            v53 = (uint16_t *)(v85 + v46 * m);
            v54 = (float)((float)0 * 65536.0) + v51;
            v55 = (float)((float)0 * 65536.0) + (float)v52[1];
            v56 = (float)((float)0 * 65536.0) + (float)*v52;
            v57 = (float)v53[1];
            v58 = *v53;
            v103 = 0;
            v106 = 0;
            v109 = 0;
            v104 = v56;
            v59 = (float)v58;
            v60 = a4[1];
            v21 = v60 == a4[2];
            v102 = (float)((float)0 * 65536.0) + v57;
            v105 = v55;
            v107 = v54;
            v108 = v50;
            v101 = (float)((float)0 * 65536.0) + v59;
            if ( v21 )
            {
              sub_F25DB0(a4, &v101);
            }
            else
            {
              v48 = 0;
              if ( v60 != 0 )
              {
                *(float *)v60 = (float)((float)0 * 65536.0) + v59;
                *(float *)(v60 + 4) = v102;
                *(uint32_t *)(v60 + 8) = v103;
                *(float *)(v60 + 12) = v104;
                *(float *)(v60 + 16) = v105;
                *(uint32_t *)(v60 + 20) = v106;
                *(float *)(v60 + 24) = v107;
                *(float *)(v60 + 28) = v108;
                *(uint32_t *)(v60 + 32) = v109;
                v48 = a4[1];
              }
              a4[1] = v48 + 36;
            }
            v46 += 3;
            if ( a2 <= v46 )
              break;
          }
        }
LABEL_15:
        result = v85;
        if ( v85 != 0 )
          return glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)a3);
      }
      return result;
    }
    result = glitch::video::IBuffer::mapInternal(
               *(glitch::video::IBuffer::Self **)a3,
               0,
               0,
               *(uint32_t *)(*(uint32_t *)a3 + 20),
               0);
    v98 = 0;
    if ( result != 0 )
    {
      result += *(uint32_t *)(a3 + 4);
      v98 = result;
    }
    if ( a1 != nullptr )
    {
      for ( n = &a1[a2]; n != a1; a4[1] = v22 + 36 )
      {
        while ( 1 )
        {
          v23 = *(uint16_t *)(a3 + 14);
          v24 = (uint16_t *)(v98 + v23 * a1[2]);
          v86 = (float)v24[2] + (float)((float)0 * 65536.0);
          v92 = (float)v24[1] + (float)((float)0 * 65536.0);
          v25 = (float)*v24;
          v26 = (uint16_t *)(v98 + v23 * a1[1]);
          v94 = v25 + (float)((float)0 * 65536.0);
          v27 = (float)((float)0 * 65536.0) + (float)v26[1];
          v28 = (uint16_t *)(v98 + v23 * *a1);
          v29 = (float)((float)0 * 65536.0) + (float)*v26;
          v30 = (float)((float)0 * 65536.0) + (float)v28[2];
          v31 = (float)v28[1];
          v32 = *v28;
          v151 = (float)((float)0 * 65536.0) + (float)v26[2];
          v147 = (float)((float)0 * 65536.0) + v31;
          v148 = v30;
          v33 = (float)((float)0 * 65536.0) + (float)v32;
          v149 = v29;
          v150 = v27;
          v146 = v33;
          v152 = v94;
          result = a4[1];
          v21 = result == a4[2];
          v153 = v92;
          v154 = v86;
          if ( !v21 )
            break;
          a1 += 3;
          result = (int)(uintptr_t)(sub_F25DB0(a4, &v146));
          if ( n == a1 )
            goto LABEL_27;
        }
        v22 = 0;
        if ( result != 0 )
        {
          *(float *)result = v33;
          *(float *)(result + 4) = v147;
          *(float *)(result + 8) = v148;
          *(float *)(result + 12) = v149;
          *(float *)(result + 16) = v150;
          *(float *)(result + 20) = v151;
          *(float *)(result + 24) = v152;
          *(float *)(result + 28) = v153;
          *(float *)(result + 32) = v154;
          v22 = a4[1];
        }
        a1 += 3;
      }
    }
    else if ( a2 != 0 )
    {
      v61 = 0;
      for ( ii = *(uint16_t *)(a3 + 14); ; ii = *(uint16_t *)(a3 + 14) )
      {
        v64 = (uint16_t *)(v98 + ii * (v61 + 2));
        v88 = (float)v64[2] + (float)((float)0 * 65536.0);
        v96 = (float)v64[1] + (float)((float)0 * 65536.0);
        v65 = (float)*v64;
        v66 = (uint16_t *)(v98 + ii * (v61 + 1));
        v67 = (uint16_t *)(v98 + v61 * ii);
        v68 = (float)((float)0 * 65536.0) + (float)v66[1];
        v69 = (float)((float)0 * 65536.0) + (float)*v66;
        v70 = (float)((float)0 * 65536.0) + (float)v67[2];
        v71 = (float)((float)0 * 65536.0) + (float)v67[1];
        v72 = (float)*v67;
        result = a4[1];
        v142 = (float)((float)0 * 65536.0) + (float)v66[2];
        v21 = result == a4[2];
        v143 = v65 + (float)((float)0 * 65536.0);
        v144 = v96;
        v138 = v71;
        v139 = v70;
        v137 = (float)((float)0 * 65536.0) + v72;
        v140 = v69;
        v141 = v68;
        v145 = v88;
        if ( v21 )
        {
          result = (int)(uintptr_t)(sub_F25DB0(a4, &v137));
        }
        else
        {
          v63 = 0;
          if ( result != 0 )
          {
            *(float *)result = (float)((float)0 * 65536.0) + v72;
            *(float *)(result + 4) = v138;
            *(float *)(result + 8) = v139;
            *(float *)(result + 12) = v140;
            *(float *)(result + 16) = v141;
            *(float *)(result + 20) = v142;
            *(float *)(result + 24) = v143;
            *(float *)(result + 28) = v144;
            *(float *)(result + 32) = v145;
            v63 = a4[1];
          }
          a4[1] = v63 + 36;
        }
        v61 += 3;
        if ( a2 <= v61 )
          break;
      }
    }
  }
LABEL_27:
  if ( v98 != 0 )
    return glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F2C9B0  (binary VA: 0xf2c9b0)
// Original: sub_F2C9B0
// ----------------------------------------------------------------------------
int sub_F2C9B0(uint16_t *a1, unsigned int a2, int a3, int *a4)
{
  int result;
  int v6;
  int v7;
  unsigned int *v8;
  unsigned int v9;
  unsigned int v10;
  float v11; // xmm2_4
  float v12; // xmm1_4
  int v13;
  float v14; // xmm3_4
  unsigned int *v15;
  float v16; // xmm2_4
  float v17; // xmm1_4
  unsigned int v18;
  unsigned int v19;
  int v20;
  float v21; // xmm4_4
  int v22;
  float v23; // xmm5_4
  unsigned int *v24;
  unsigned int v25;
  unsigned int v26;
  float v27; // xmm7_4
  float v28; // xmm1_4
  bool v29;
  float v30; // xmm1_4
  int v31;
  int v32;
  int v33;
  unsigned int *v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  float v39; // xmm1_4
  unsigned int *v40;
  unsigned int v41;
  int v42;
  float v43; // xmm2_4
  unsigned int v44;
  float v45; // xmm1_4
  int v46;
  unsigned int v47;
  float v48; // xmm3_4
  int v49;
  float v50; // xmm4_4
  float v51; // xmm2_4
  unsigned int *v52;
  unsigned int v53;
  float v54; // xmm5_4
  float v55; // xmm1_4
  unsigned int v56;
  unsigned int v57;
  float v58; // xmm1_4
  float *v59;
  int v60;
  int v61;
  int v62;
  unsigned int *v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  unsigned int v67;
  float v68; // xmm1_4
  unsigned int *v69;
  unsigned int v70;
  int v71;
  float v72; // xmm2_4
  unsigned int v73;
  float v74; // xmm1_4
  int v75;
  unsigned int v76;
  float v77; // xmm3_4
  int v78;
  float v79; // xmm4_4
  float v80; // xmm2_4
  unsigned int *v81;
  unsigned int v82;
  float v83; // xmm5_4
  float v84; // xmm1_4
  unsigned int v85;
  unsigned int v86;
  float v87; // xmm1_4
  float *v88;
  unsigned int v89;
  uint16_t m;
  int v91;
  unsigned int *v92;
  unsigned int v93;
  unsigned int v94;
  float v95; // xmm2_4
  float v96; // xmm1_4
  int v97;
  float v98; // xmm3_4
  unsigned int *v99;
  unsigned int *v100;
  float v101; // xmm2_4
  float v102; // xmm1_4
  unsigned int v103;
  float v104; // xmm3_4
  unsigned int v105;
  float v106; // xmm4_4
  float v107; // xmm1_4
  int v108;
  float v109; // xmm5_4
  unsigned int v110;
  unsigned int v111;
  float v112; // xmm4_4
  float v113; // xmm7_4
  float v114; // xmm1_4
  float v115; // xmm1_4
  unsigned int v116;
  uint16_t ii;
  int v118;
  unsigned int *v119;
  unsigned int v120;
  int v121;
  unsigned int v122;
  unsigned int v123;
  float v124; // xmm1_4
  unsigned int *v125;
  unsigned int *v126;
  unsigned int v127;
  int v128;
  float v129; // xmm2_4
  unsigned int v130;
  float v131; // xmm1_4
  int v132;
  unsigned int v133;
  float v134; // xmm3_4
  int v135;
  float v136; // xmm4_4
  float v137; // xmm2_4
  unsigned int v138;
  float v139; // xmm1_4
  int v140;
  float v141; // xmm5_4
  unsigned int v142;
  unsigned int v143;
  float v144; // xmm4_4
  float v145; // xmm7_4
  float v146; // xmm1_4
  float *v147;
  float v148; // xmm1_4
  unsigned int v149;
  uint16_t j;
  int v151;
  unsigned int *v152;
  unsigned int v153;
  int v154;
  unsigned int v155;
  unsigned int v156;
  float v157; // xmm1_4
  unsigned int *v158;
  unsigned int *v159;
  unsigned int v160;
  int v161;
  float v162; // xmm2_4
  unsigned int v163;
  float v164; // xmm1_4
  int v165;
  unsigned int v166;
  float v167; // xmm3_4
  int v168;
  float v169; // xmm4_4
  float v170; // xmm2_4
  unsigned int v171;
  float v172; // xmm1_4
  int v173;
  float v174; // xmm5_4
  unsigned int v175;
  unsigned int v176;
  float v177; // xmm4_4
  float v178; // xmm7_4
  float v179; // xmm1_4
  float *v180;
  float v181; // xmm1_4
  typedef int _g4_t_v182;
  typedef float _g4_t_v183;
  typedef float _g4_t_v184;
  typedef float _g4_t_v185;
  typedef float _g4_t_v186;
  typedef float _g4_t_v187;
  typedef float _g4_t_v188;
  typedef float _g4_t_v189;
  typedef float _g4_t_v190;
  typedef uint16_t *_g4_t_k;
  typedef float _g4_t_v193;
  typedef float _g4_t_v194;
  typedef float _g4_t_v195;
  typedef float _g4_t_v196;
  typedef float _g4_t_v197;
  typedef float _g4_t_v198;
  typedef float _g4_t_v199;
  typedef float _g4_t_v200;
  typedef int _g4_t_v201;
  typedef uint16_t *_g4_t_n;
  typedef uint16_t *_g4_t_i;
  typedef float _g4_t_v204;
  typedef float _g4_t_v205;
  typedef float _g4_t_v206;
  typedef float _g4_t_v207;
  typedef float _g4_t_v208;
  typedef float _g4_t_v209;
  typedef int _g4_t_v210;
  typedef float _g4_t_v211;
  typedef float _g4_t_v212;
  typedef int _g4_t_v213;
  typedef float _g4_t_v214;
  typedef float _g4_t_v215;
  typedef int _g4_t_v216;
  typedef float _g4_t_v217;
  typedef float _g4_t_v218;
  typedef int _g4_t_v219;
  typedef float _g4_t_v220;
  typedef float _g4_t_v221;
  typedef int _g4_t_v222;
  typedef float _g4_t_v223;
  typedef float _g4_t_v224;
  typedef int _g4_t_v225;
  typedef float _g4_t_v226;
  typedef float _g4_t_v227;
  typedef float _g4_t_v228;
  typedef float _g4_t_v229;
  typedef float _g4_t_v230;
  typedef float _g4_t_v231;
  typedef float _g4_t_v232;
  typedef float _g4_t_v233;
  typedef float _g4_t_v234;
  typedef float _g4_t_v235;
  typedef float _g4_t_v236;
  typedef float _g4_t_v237;
  typedef float _g4_t_v238;
  typedef float _g4_t_v239;
  typedef float _g4_t_v240;
  typedef float _g4_t_v241;
  typedef float _g4_t_v242;
  typedef float _g4_t_v243;
  typedef float _g4_t_v244;
  typedef float _g4_t_v245;
  typedef float _g4_t_v246;
  typedef float _g4_t_v247;
  typedef float _g4_t_v248;
  typedef float _g4_t_v249;
  typedef float _g4_t_v250;
  typedef float _g4_t_v251;
  typedef float _g4_t_v252;
  typedef float _g4_t_v253;
  typedef float _g4_t_v254;
  typedef float _g4_t_v255;
  typedef float _g4_t_v256;
  typedef float _g4_t_v257;
  typedef float _g4_t_v258;
  typedef float _g4_t_v259;
  typedef float _g4_t_v260;
  typedef float _g4_t_v261;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (12u + sizeof(_g4_t_v182)) > _g4_s0 ? (12u + sizeof(_g4_t_v182)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v183)) > _g4_s1 ? (12u + sizeof(_g4_t_v183)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v184)) > _g4_s2 ? (12u + sizeof(_g4_t_v184)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v185)) > _g4_s3 ? (12u + sizeof(_g4_t_v185)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v186)) > _g4_s4 ? (12u + sizeof(_g4_t_v186)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v187)) > _g4_s5 ? (12u + sizeof(_g4_t_v187)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v188)) > _g4_s6 ? (12u + sizeof(_g4_t_v188)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v189)) > _g4_s7 ? (12u + sizeof(_g4_t_v189)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v190)) > _g4_s8 ? (12u + sizeof(_g4_t_v190)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_k)) > _g4_s9 ? (16u + sizeof(_g4_t_k)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v193)) > _g4_s10 ? (16u + sizeof(_g4_t_v193)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v194)) > _g4_s11 ? (16u + sizeof(_g4_t_v194)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v195)) > _g4_s12 ? (20u + sizeof(_g4_t_v195)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v196)) > _g4_s13 ? (20u + sizeof(_g4_t_v196)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v197)) > _g4_s14 ? (20u + sizeof(_g4_t_v197)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v198)) > _g4_s15 ? (20u + sizeof(_g4_t_v198)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v199)) > _g4_s16 ? (20u + sizeof(_g4_t_v199)) : _g4_s16,
    _g4_s18 = (20u + sizeof(_g4_t_v200)) > _g4_s17 ? (20u + sizeof(_g4_t_v200)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_v201)) > _g4_s18 ? (24u + sizeof(_g4_t_v201)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_n)) > _g4_s19 ? (28u + sizeof(_g4_t_n)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_i)) > _g4_s20 ? (28u + sizeof(_g4_t_i)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v204)) > _g4_s21 ? (28u + sizeof(_g4_t_v204)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_v205)) > _g4_s22 ? (28u + sizeof(_g4_t_v205)) : _g4_s22,
    _g4_s24 = (28u + sizeof(_g4_t_v206)) > _g4_s23 ? (28u + sizeof(_g4_t_v206)) : _g4_s23,
    _g4_s25 = (28u + sizeof(_g4_t_v207)) > _g4_s24 ? (28u + sizeof(_g4_t_v207)) : _g4_s24,
    _g4_s26 = (40u + sizeof(_g4_t_v208)) > _g4_s25 ? (40u + sizeof(_g4_t_v208)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v209)) > _g4_s26 ? (44u + sizeof(_g4_t_v209)) : _g4_s26,
    _g4_s28 = (48u + sizeof(_g4_t_v210)) > _g4_s27 ? (48u + sizeof(_g4_t_v210)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v211)) > _g4_s28 ? (52u + sizeof(_g4_t_v211)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v212)) > _g4_s29 ? (56u + sizeof(_g4_t_v212)) : _g4_s29,
    _g4_s31 = (60u + sizeof(_g4_t_v213)) > _g4_s30 ? (60u + sizeof(_g4_t_v213)) : _g4_s30,
    _g4_s32 = (64u + sizeof(_g4_t_v214)) > _g4_s31 ? (64u + sizeof(_g4_t_v214)) : _g4_s31,
    _g4_s33 = (68u + sizeof(_g4_t_v215)) > _g4_s32 ? (68u + sizeof(_g4_t_v215)) : _g4_s32,
    _g4_s34 = (72u + sizeof(_g4_t_v216)) > _g4_s33 ? (72u + sizeof(_g4_t_v216)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v217)) > _g4_s34 ? (76u + sizeof(_g4_t_v217)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v218)) > _g4_s35 ? (80u + sizeof(_g4_t_v218)) : _g4_s35,
    _g4_s37 = (84u + sizeof(_g4_t_v219)) > _g4_s36 ? (84u + sizeof(_g4_t_v219)) : _g4_s36,
    _g4_s38 = (88u + sizeof(_g4_t_v220)) > _g4_s37 ? (88u + sizeof(_g4_t_v220)) : _g4_s37,
    _g4_s39 = (92u + sizeof(_g4_t_v221)) > _g4_s38 ? (92u + sizeof(_g4_t_v221)) : _g4_s38,
    _g4_s40 = (96u + sizeof(_g4_t_v222)) > _g4_s39 ? (96u + sizeof(_g4_t_v222)) : _g4_s39,
    _g4_s41 = (100u + sizeof(_g4_t_v223)) > _g4_s40 ? (100u + sizeof(_g4_t_v223)) : _g4_s40,
    _g4_s42 = (104u + sizeof(_g4_t_v224)) > _g4_s41 ? (104u + sizeof(_g4_t_v224)) : _g4_s41,
    _g4_s43 = (108u + sizeof(_g4_t_v225)) > _g4_s42 ? (108u + sizeof(_g4_t_v225)) : _g4_s42,
    _g4_s44 = (112u + sizeof(_g4_t_v226)) > _g4_s43 ? (112u + sizeof(_g4_t_v226)) : _g4_s43,
    _g4_s45 = (116u + sizeof(_g4_t_v227)) > _g4_s44 ? (116u + sizeof(_g4_t_v227)) : _g4_s44,
    _g4_s46 = (120u + sizeof(_g4_t_v228)) > _g4_s45 ? (120u + sizeof(_g4_t_v228)) : _g4_s45,
    _g4_s47 = (124u + sizeof(_g4_t_v229)) > _g4_s46 ? (124u + sizeof(_g4_t_v229)) : _g4_s46,
    _g4_s48 = (128u + sizeof(_g4_t_v230)) > _g4_s47 ? (128u + sizeof(_g4_t_v230)) : _g4_s47,
    _g4_s49 = (132u + sizeof(_g4_t_v231)) > _g4_s48 ? (132u + sizeof(_g4_t_v231)) : _g4_s48,
    _g4_s50 = (136u + sizeof(_g4_t_v232)) > _g4_s49 ? (136u + sizeof(_g4_t_v232)) : _g4_s49,
    _g4_s51 = (140u + sizeof(_g4_t_v233)) > _g4_s50 ? (140u + sizeof(_g4_t_v233)) : _g4_s50,
    _g4_s52 = (144u + sizeof(_g4_t_v234)) > _g4_s51 ? (144u + sizeof(_g4_t_v234)) : _g4_s51,
    _g4_s53 = (148u + sizeof(_g4_t_v235)) > _g4_s52 ? (148u + sizeof(_g4_t_v235)) : _g4_s52,
    _g4_s54 = (152u + sizeof(_g4_t_v236)) > _g4_s53 ? (152u + sizeof(_g4_t_v236)) : _g4_s53,
    _g4_s55 = (156u + sizeof(_g4_t_v237)) > _g4_s54 ? (156u + sizeof(_g4_t_v237)) : _g4_s54,
    _g4_s56 = (160u + sizeof(_g4_t_v238)) > _g4_s55 ? (160u + sizeof(_g4_t_v238)) : _g4_s55,
    _g4_s57 = (164u + sizeof(_g4_t_v239)) > _g4_s56 ? (164u + sizeof(_g4_t_v239)) : _g4_s56,
    _g4_s58 = (168u + sizeof(_g4_t_v240)) > _g4_s57 ? (168u + sizeof(_g4_t_v240)) : _g4_s57,
    _g4_s59 = (172u + sizeof(_g4_t_v241)) > _g4_s58 ? (172u + sizeof(_g4_t_v241)) : _g4_s58,
    _g4_s60 = (176u + sizeof(_g4_t_v242)) > _g4_s59 ? (176u + sizeof(_g4_t_v242)) : _g4_s59,
    _g4_s61 = (180u + sizeof(_g4_t_v243)) > _g4_s60 ? (180u + sizeof(_g4_t_v243)) : _g4_s60,
    _g4_s62 = (184u + sizeof(_g4_t_v244)) > _g4_s61 ? (184u + sizeof(_g4_t_v244)) : _g4_s61,
    _g4_s63 = (188u + sizeof(_g4_t_v245)) > _g4_s62 ? (188u + sizeof(_g4_t_v245)) : _g4_s62,
    _g4_s64 = (192u + sizeof(_g4_t_v246)) > _g4_s63 ? (192u + sizeof(_g4_t_v246)) : _g4_s63,
    _g4_s65 = (196u + sizeof(_g4_t_v247)) > _g4_s64 ? (196u + sizeof(_g4_t_v247)) : _g4_s64,
    _g4_s66 = (200u + sizeof(_g4_t_v248)) > _g4_s65 ? (200u + sizeof(_g4_t_v248)) : _g4_s65,
    _g4_s67 = (204u + sizeof(_g4_t_v249)) > _g4_s66 ? (204u + sizeof(_g4_t_v249)) : _g4_s66,
    _g4_s68 = (208u + sizeof(_g4_t_v250)) > _g4_s67 ? (208u + sizeof(_g4_t_v250)) : _g4_s67,
    _g4_s69 = (212u + sizeof(_g4_t_v251)) > _g4_s68 ? (212u + sizeof(_g4_t_v251)) : _g4_s68,
    _g4_s70 = (216u + sizeof(_g4_t_v252)) > _g4_s69 ? (216u + sizeof(_g4_t_v252)) : _g4_s69,
    _g4_s71 = (220u + sizeof(_g4_t_v253)) > _g4_s70 ? (220u + sizeof(_g4_t_v253)) : _g4_s70,
    _g4_s72 = (224u + sizeof(_g4_t_v254)) > _g4_s71 ? (224u + sizeof(_g4_t_v254)) : _g4_s71,
    _g4_s73 = (228u + sizeof(_g4_t_v255)) > _g4_s72 ? (228u + sizeof(_g4_t_v255)) : _g4_s72,
    _g4_s74 = (232u + sizeof(_g4_t_v256)) > _g4_s73 ? (232u + sizeof(_g4_t_v256)) : _g4_s73,
    _g4_s75 = (236u + sizeof(_g4_t_v257)) > _g4_s74 ? (236u + sizeof(_g4_t_v257)) : _g4_s74,
    _g4_s76 = (240u + sizeof(_g4_t_v258)) > _g4_s75 ? (240u + sizeof(_g4_t_v258)) : _g4_s75,
    _g4_s77 = (244u + sizeof(_g4_t_v259)) > _g4_s76 ? (244u + sizeof(_g4_t_v259)) : _g4_s76,
    _g4_s78 = (248u + sizeof(_g4_t_v260)) > _g4_s77 ? (248u + sizeof(_g4_t_v260)) : _g4_s77,
    _g4_s79 = (252u + sizeof(_g4_t_v261)) > _g4_s78 ? (252u + sizeof(_g4_t_v261)) : _g4_s78
  };
  alignas(16) uint8_t _g4_sf[_g4_s79];
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 12u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 12u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 12u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 12u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 12u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 12u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 12u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 12u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 12u);
  _g4_t_k &k = *reinterpret_cast<_g4_t_k *>(_g4_sf + 16u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 16u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 16u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 20u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 20u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 20u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 20u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 20u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 20u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 24u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 28u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 28u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 28u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 28u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 28u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 28u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 40u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 44u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 48u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 52u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 56u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 60u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 64u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 68u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 72u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 76u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 80u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 84u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 88u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 92u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 96u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 100u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 104u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 108u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 112u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 116u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 120u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 124u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 128u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 132u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 136u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 140u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 144u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 148u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 152u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 156u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 160u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 164u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 168u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 172u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 176u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 180u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 184u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 188u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 192u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 196u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 200u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 204u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 208u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 212u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 216u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 220u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 224u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 228u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 232u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 236u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 240u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 244u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 248u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 252u);

  result = *(uint16_t *)(a3 + 12);
  if ( (uint16_t)result == 3 )
  {
    v60 = glitch::video::IBuffer::mapInternal(*(glitch::video::IBuffer::Self **)a3, 0, 0, *(uint32_t *)(*(uint32_t *)a3 + 20), 0);
    v201 = 0;
    if ( v60 != 0 )
      v201 = *(uint32_t *)(a3 + 4) + v60;
    if ( a1 != nullptr )
    {
      for ( i = &a1[a2]; i != a1; a1 += 3 )
      {
        v62 = *(uint16_t *)(a3 + 14);
        v63 = (unsigned int *)(v201 + v62 * a1[2]);
        v64 = v63[2];
        v65 = (uint16_t)v64;
        v185 = (float)HIWORD(v64);
        v66 = v63[1];
        v67 = *v63;
        v186 = (float)v65 + (float)(v185 * 65536.0);
        v194 = (float)(uint16_t)v66 + (float)((float)HIWORD(v66) * 65536.0);
        v197 = (float)HIWORD(v67);
        v68 = (float)(uint16_t)v67;
        v69 = (unsigned int *)(v201 + v62 * a1[1]);
        v70 = v69[2];
        v71 = (uint16_t)v70;
        v72 = (float)HIWORD(v70);
        v198 = v68 + (float)(v197 * 65536.0);
        v73 = v69[1];
        v74 = (float)v71;
        v75 = (uint16_t)v73;
        v76 = *v69;
        v77 = (float)HIWORD(v73);
        v78 = (uint16_t)v76;
        v79 = (float)HIWORD(v76);
        v80 = (float)(v72 * 65536.0) + v74;
        v81 = (unsigned int *)(v201 + v62 * *a1);
        v82 = v81[2];
        v83 = (float)HIWORD(v82);
        v84 = (float)(uint16_t)v82;
        v85 = v81[1];
        v86 = *v81;
        v240 = v80;
        v236 = (float)((float)HIWORD(v85) * 65536.0) + (float)(uint16_t)v85;
        v237 = (float)(v83 * 65536.0) + v84;
        v238 = (float)(v79 * 65536.0) + (float)v78;
        v87 = (float)((float)HIWORD(v86) * 65536.0) + (float)(uint16_t)v86;
        v239 = (float)(v77 * 65536.0) + (float)v75;
        v235 = v87;
        v241 = v198;
        v88 = (float *)a4[1];
        v29 = v88 == (float *)a4[2];
        v242 = v194;
        v243 = v186;
        if ( v29 )
        {
          sub_F25DB0(a4, &v235);
        }
        else
        {
          v61 = 0;
          if ( v88 != nullptr )
          {
            *v88 = v87;
            v88[1] = v236;
            v88[2] = v237;
            v88[3] = v238;
            v88[4] = v239;
            v88[5] = v240;
            v88[6] = v241;
            v88[7] = v242;
            v88[8] = v243;
            v61 = a4[1];
          }
          a4[1] = v61 + 36;
        }
      }
    }
    else if ( a2 != 0 )
    {
      v149 = 0;
      for ( j = *(uint16_t *)(a3 + 14); ; j = *(uint16_t *)(a3 + 14) )
      {
        v152 = (unsigned int *)(v201 + j * (v149 + 2));
        v153 = v152[2];
        v154 = (uint16_t)v153;
        v189 = (float)HIWORD(v153);
        v155 = v152[1];
        v156 = *v152;
        v190 = (float)v154 + (float)(v189 * 65536.0);
        v200 = (float)(uint16_t)v155 + (float)((float)HIWORD(v155) * 65536.0);
        v206 = (float)HIWORD(v156);
        v157 = (float)(uint16_t)v156;
        v158 = (unsigned int *)(v201 + j * (v149 + 1));
        v159 = (unsigned int *)(v201 + v149 * j);
        v160 = v158[2];
        v161 = (uint16_t)v160;
        v162 = (float)HIWORD(v160);
        v207 = v157 + (float)(v206 * 65536.0);
        v163 = v158[1];
        v164 = (float)v161;
        v165 = (uint16_t)v163;
        v166 = *v158;
        v167 = (float)HIWORD(v163);
        v168 = (uint16_t)v166;
        v169 = (float)HIWORD(v166);
        v170 = (float)(v162 * 65536.0) + v164;
        v171 = v159[2];
        v172 = (float)v168;
        v173 = (uint16_t)v171;
        v174 = (float)HIWORD(v171);
        v175 = v159[1];
        v176 = *v159;
        v231 = v170;
        v177 = (float)(v169 * 65536.0) + v172;
        v232 = v207;
        v178 = (float)(uint16_t)v176;
        v179 = (float)HIWORD(v176) * 65536.0;
        v180 = (float *)a4[1];
        v233 = v200;
        v29 = v180 == (float *)a4[2];
        v227 = (float)((float)HIWORD(v175) * 65536.0) + (float)(uint16_t)v175;
        v181 = v179 + v178;
        v228 = (float)(v174 * 65536.0) + (float)v173;
        v229 = v177;
        v230 = (float)(v167 * 65536.0) + (float)v165;
        v234 = v190;
        v226 = v181;
        if ( v29 )
        {
          sub_F25DB0(a4, &v226);
        }
        else
        {
          v151 = 0;
          if ( v180 != nullptr )
          {
            *v180 = v181;
            v180[1] = v227;
            v180[2] = v228;
            v180[3] = v229;
            v180[4] = v230;
            v180[5] = v231;
            v180[6] = v232;
            v180[7] = v233;
            v180[8] = v234;
            v151 = a4[1];
          }
          a4[1] = v151 + 36;
        }
        v149 += 3;
        if ( a2 <= v149 )
          break;
      }
    }
  }
  else
  {
    if ( (uint16_t)result != 4 )
    {
      if ( (uint16_t)result == 2 )
      {
        result = glitch::video::IBuffer::mapInternal(
                   *(glitch::video::IBuffer::Self **)a3,
                   0,
                   0,
                   *(uint32_t *)(*(uint32_t *)a3 + 20),
                   0);
        v182 = 0;
        if ( result != 0 )
        {
          result += *(uint32_t *)(a3 + 4);
          v182 = result;
        }
        if ( a1 != nullptr )
        {
          for ( k = &a1[a2]; k != a1; a4[1] = v6 + 36 )
          {
            while ( 1 )
            {
              v7 = *(uint16_t *)(a3 + 14);
              v8 = (unsigned int *)(v182 + v7 * a1[2]);
              v9 = v8[1];
              v10 = *v8;
              v11 = (float)HIWORD(v9);
              v12 = (float)(uint16_t)v9;
              v13 = (uint16_t)v10;
              v14 = (float)HIWORD(v10);
              v15 = (unsigned int *)(v182 + v7 * a1[1]);
              v16 = (float)(v11 * 65536.0) + v12;
              v17 = (float)v13;
              v18 = v15[1];
              v19 = *v15;
              v20 = (uint16_t)v18;
              v21 = (float)HIWORD(v18);
              v22 = (uint16_t)v19;
              v23 = (float)HIWORD(v19);
              v24 = (unsigned int *)(v182 + v7 * *a1);
              v25 = v24[1];
              v26 = *v24;
              v219 = 0;
              v222 = 0;
              v225 = 0;
              v223 = (float)(v14 * 65536.0) + v17;
              v27 = (float)(uint16_t)v26;
              v220 = (float)(v23 * 65536.0) + (float)v22;
              v28 = (float)HIWORD(v26) * 65536.0;
              result = a4[1];
              v29 = result == a4[2];
              v218 = (float)((float)HIWORD(v25) * 65536.0) + (float)(uint16_t)v25;
              v221 = (float)(v21 * 65536.0) + (float)v20;
              v30 = v28 + v27;
              v224 = v16;
              v217 = v30;
              if ( !v29 )
                break;
              a1 += 3;
              result = (int)(uintptr_t)(sub_F25DB0(a4, &v217));
              if ( k == a1 )
                goto LABEL_15;
            }
            v6 = 0;
            if ( result != 0 )
            {
              *(float *)result = v30;
              *(float *)(result + 4) = v218;
              *(uint32_t *)(result + 8) = v219;
              *(float *)(result + 12) = v220;
              *(float *)(result + 16) = v221;
              *(uint32_t *)(result + 20) = v222;
              *(float *)(result + 24) = v223;
              *(float *)(result + 28) = v224;
              *(uint32_t *)(result + 32) = v225;
              v6 = a4[1];
            }
            a1 += 3;
          }
        }
        else if ( a2 != 0 )
        {
          v89 = 0;
          for ( m = *(uint16_t *)(a3 + 14); ; m = *(uint16_t *)(a3 + 14) )
          {
            v92 = (unsigned int *)(v182 + m * (v89 + 2));
            v93 = v92[1];
            v94 = *v92;
            v95 = (float)HIWORD(v93);
            v96 = (float)(uint16_t)v93;
            v97 = (uint16_t)v94;
            v98 = (float)HIWORD(v94);
            v99 = (unsigned int *)(v182 + m * (v89 + 1));
            v100 = (unsigned int *)(v182 + v89 * m);
            v101 = (float)(v95 * 65536.0) + v96;
            v102 = (float)v97;
            v103 = v99[1];
            v104 = (float)(v98 * 65536.0) + v102;
            v105 = *v99;
            v106 = (float)HIWORD(v103);
            v107 = (float)(uint16_t)v103;
            v108 = (uint16_t)v105;
            v109 = (float)HIWORD(v105);
            v110 = v100[1];
            v111 = *v100;
            v210 = 0;
            v213 = 0;
            v214 = v104;
            v216 = 0;
            v112 = (float)(v106 * 65536.0) + v107;
            v215 = v101;
            v113 = (float)(uint16_t)v111;
            v211 = (float)(v109 * 65536.0) + (float)v108;
            v114 = (float)HIWORD(v111) * 65536.0;
            result = a4[1];
            v29 = result == a4[2];
            v209 = (float)((float)HIWORD(v110) * 65536.0) + (float)(uint16_t)v110;
            v212 = v112;
            v115 = v114 + v113;
            v208 = v115;
            if ( v29 )
            {
              result = (int)(uintptr_t)(sub_F25DB0(a4, &v208));
            }
            else
            {
              v91 = 0;
              if ( result != 0 )
              {
                *(float *)result = v115;
                *(float *)(result + 4) = v209;
                *(uint32_t *)(result + 8) = v210;
                *(float *)(result + 12) = v211;
                *(float *)(result + 16) = v212;
                *(uint32_t *)(result + 20) = v213;
                *(float *)(result + 24) = v214;
                *(float *)(result + 28) = v215;
                *(uint32_t *)(result + 32) = v216;
                v91 = a4[1];
              }
              a4[1] = v91 + 36;
            }
            v89 += 3;
            if ( a2 <= v89 )
              break;
          }
        }
LABEL_15:
        if ( v182 != 0 )
          return glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)a3);
      }
      return result;
    }
    v31 = glitch::video::IBuffer::mapInternal(*(glitch::video::IBuffer::Self **)a3, 0, 0, *(uint32_t *)(*(uint32_t *)a3 + 20), 0);
    v201 = 0;
    if ( v31 != 0 )
      v201 = *(uint32_t *)(a3 + 4) + v31;
    if ( a1 != nullptr )
    {
      for ( n = &a1[a2]; n != a1; a4[1] = v32 + 36 )
      {
        while ( 1 )
        {
          v33 = *(uint16_t *)(a3 + 14);
          v34 = (unsigned int *)(v201 + v33 * a1[2]);
          v35 = v34[2];
          v36 = (uint16_t)v35;
          v183 = (float)HIWORD(v35);
          v37 = v34[1];
          v38 = *v34;
          v184 = (float)v36 + (float)(v183 * 65536.0);
          v193 = (float)(uint16_t)v37 + (float)((float)HIWORD(v37) * 65536.0);
          v195 = (float)HIWORD(v38);
          v39 = (float)(uint16_t)v38;
          v40 = (unsigned int *)(v201 + v33 * a1[1]);
          v41 = v40[2];
          v42 = (uint16_t)v41;
          v43 = (float)HIWORD(v41);
          v196 = v39 + (float)(v195 * 65536.0);
          v44 = v40[1];
          v45 = (float)v42;
          v46 = (uint16_t)v44;
          v47 = *v40;
          v48 = (float)HIWORD(v44);
          v49 = (uint16_t)v47;
          v50 = (float)HIWORD(v47);
          v51 = (float)(v43 * 65536.0) + v45;
          v52 = (unsigned int *)(v201 + v33 * *a1);
          v53 = v52[2];
          v54 = (float)HIWORD(v53);
          v55 = (float)(uint16_t)v53;
          v56 = v52[1];
          v57 = *v52;
          v258 = v51;
          v254 = (float)((float)HIWORD(v56) * 65536.0) + (float)(uint16_t)v56;
          v255 = (float)(v54 * 65536.0) + v55;
          v256 = (float)(v50 * 65536.0) + (float)v49;
          v58 = (float)((float)HIWORD(v57) * 65536.0) + (float)(uint16_t)v57;
          v257 = (float)(v48 * 65536.0) + (float)v46;
          v253 = v58;
          v259 = v196;
          v59 = (float *)a4[1];
          v29 = v59 == (float *)a4[2];
          v260 = v193;
          v261 = v184;
          if ( !v29 )
            break;
          a1 += 3;
          sub_F25DB0(a4, &v253);
          if ( n == a1 )
            goto LABEL_27;
        }
        v32 = 0;
        if ( v59 != nullptr )
        {
          *v59 = v58;
          v59[1] = v254;
          v59[2] = v255;
          v59[3] = v256;
          v59[4] = v257;
          v59[5] = v258;
          v59[6] = v259;
          v59[7] = v260;
          v59[8] = v261;
          v32 = a4[1];
        }
        a1 += 3;
      }
    }
    else if ( a2 != 0 )
    {
      v116 = 0;
      for ( ii = *(uint16_t *)(a3 + 14); ; ii = *(uint16_t *)(a3 + 14) )
      {
        v119 = (unsigned int *)(v201 + ii * (v116 + 2));
        v120 = v119[2];
        v121 = (uint16_t)v120;
        v187 = (float)HIWORD(v120);
        v122 = v119[1];
        v123 = *v119;
        v188 = (float)v121 + (float)(v187 * 65536.0);
        v199 = (float)(uint16_t)v122 + (float)((float)HIWORD(v122) * 65536.0);
        v204 = (float)HIWORD(v123);
        v124 = (float)(uint16_t)v123;
        v125 = (unsigned int *)(v201 + ii * (v116 + 1));
        v126 = (unsigned int *)(v201 + v116 * ii);
        v127 = v125[2];
        v128 = (uint16_t)v127;
        v129 = (float)HIWORD(v127);
        v205 = v124 + (float)(v204 * 65536.0);
        v130 = v125[1];
        v131 = (float)v128;
        v132 = (uint16_t)v130;
        v133 = *v125;
        v134 = (float)HIWORD(v130);
        v135 = (uint16_t)v133;
        v136 = (float)HIWORD(v133);
        v137 = (float)(v129 * 65536.0) + v131;
        v138 = v126[2];
        v139 = (float)v135;
        v140 = (uint16_t)v138;
        v141 = (float)HIWORD(v138);
        v142 = v126[1];
        v143 = *v126;
        v249 = v137;
        v144 = (float)(v136 * 65536.0) + v139;
        v250 = v205;
        v145 = (float)(uint16_t)v143;
        v146 = (float)HIWORD(v143) * 65536.0;
        v147 = (float *)a4[1];
        v251 = v199;
        v29 = v147 == (float *)a4[2];
        v245 = (float)((float)HIWORD(v142) * 65536.0) + (float)(uint16_t)v142;
        v148 = v146 + v145;
        v246 = (float)(v141 * 65536.0) + (float)v140;
        v247 = v144;
        v248 = (float)(v134 * 65536.0) + (float)v132;
        v252 = v188;
        v244 = v148;
        if ( v29 )
        {
          sub_F25DB0(a4, &v244);
        }
        else
        {
          v118 = 0;
          if ( v147 != nullptr )
          {
            *v147 = v148;
            v147[1] = v245;
            v147[2] = v246;
            v147[3] = v247;
            v147[4] = v248;
            v147[5] = v249;
            v147[6] = v250;
            v147[7] = v251;
            v147[8] = v252;
            v118 = a4[1];
          }
          a4[1] = v118 + 36;
        }
        v116 += 3;
        if ( a2 <= v116 )
          break;
      }
    }
  }
LABEL_27:
  result = v201;
  if ( v201 != 0 )
    return glitch::video::IBuffer::unmap(*(glitch::video::IBuffer::Self **)a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F2D840  (binary VA: 0xf2d840)
// Original: sub_F2D840
// ----------------------------------------------------------------------------
int sub_F2D840(uint32_t *a1, int *a2)
{
  uint32_t *v2;
  int v4;
  uint32_t *v5;
  int v6;
  int v7;
  bool v8;
  int v9;
  int v10;
  int v12;
  int v13;
  char v14; // si
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v20)) > _g4_s4 ? (12u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v21)) > _g4_s5 ? (16u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v22)) > _g4_s6 ? (28u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v23)) > _g4_s7 ? (32u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v24)) > _g4_s8 ? (36u + sizeof(_g4_t_v24)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);

  v2 = a1;
  v4 = (int)(uintptr_t)(a1 + 1);
  v5 = (uint32_t *)a1[2];
  v16 = v4;
  v6 = *a2;
  if ( v5 != nullptr )
  {
    v7 = v4;
    do
    {
      while ( v5[4] >= v6 )
      {
        v7 = (int)(uintptr_t)(v5);
        v5 = (uint32_t *)v5[2];
        if ( v5 == nullptr )
          goto LABEL_6;
      }
      v5 = (uint32_t *)v5[3];
    }
    while ( v5 != nullptr );
LABEL_6:
    v16 = v4;
    v19 = v7;
    if ( v4 != v7 )
    {
      if ( *(uint32_t *)(v7 + 16) <= v6 )
        return v7 + 20;
      v8 = v2[3] == v7;
      v23 = v6;
      v24 = 0;
      if ( v8 )
      {
        sub_F223C0(&v22, (int)(uintptr_t)(v2), v7, v7, &v23);
        v7 = v22;
        return v7 + 20;
      }
      v17 = (int)(uintptr_t)(v2);
      v9 = sub_1904940(v7);
      v2 = (uint32_t *)v17;
      if ( v6 > *(uint32_t *)(v9 + 16) )
      {
        if ( *(uint32_t *)(v9 + 12) != 0 )
        {
          v7 = opNew(0x18u);
          if ( v7 != -16 )
          {
            v10 = v24;
            *(uint32_t *)(v7 + 16) = v23;
            *(uint32_t *)(v7 + 20) = v10;
          }
          sub_1904970(1, v7, v19, v16);
          ++*(uint32_t *)(v17 + 20);
        }
        else
        {
          sub_F223C0(&v22, v17, 0, v9, &v23);
          v7 = v22;
        }
        return v7 + 20;
      }
LABEL_17:
      sub_F26210((int)(uintptr_t)(&v21), v2, &v23);
      return v21 + 20;
    }
  }
  v12 = v2[5];
  v23 = v6;
  v24 = 0;
  if ( v12 != 0 )
  {
    v13 = v2[4];
    v20 = v13;
    if ( *(uint32_t *)(v13 + 16) < v6 )
    {
      v18 = v2;
      v14 = v16 == v13;
      v7 = opNew(0x18u);
      if ( v7 != -16 )
      {
        v15 = v24;
        *(uint32_t *)(v7 + 16) = v23;
        *(uint32_t *)(v7 + 20) = v15;
      }
      sub_1904970(v14, v7, v20, v16);
      ++v18[5];
      return v7 + 20;
    }
  }
  goto LABEL_17;
}

// ----------------------------------------------------------------------------
// Function: sub_F2DA70  (binary VA: 0xf2da70)
// Original: sub_F2DA70
// ----------------------------------------------------------------------------
uint32_t * sub_F2DA70(uint32_t **a1, uint32_t **a2, uint32_t *a3)
{
  uint32_t **v3;
  bool v4;
  uint32_t *result;
  uint32_t *v6;

  v3 = a1;
  v4 = a2 == a1;
  result = a3;
  if ( !v4 )
  {
    do
    {
      if ( result != nullptr )
      {
        v6 = *v3;
        v4 = *v3 == nullptr;
        *result = (uint32_t)(uintptr_t)(*v3);
        if ( !v4 )
          __sync_add_and_fetch((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 12) + 4), 1u);
      }
      ++v3;
      ++result;
    }
    while ( v3 != a2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_F2DB80  (binary VA: 0xf2db80)
// Original: sub_F2DB80
// ----------------------------------------------------------------------------
int * sub_F2DB80(int *a1, int a2, int a3, int a4, unsigned int *a5)
{
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  bool v11;
  unsigned int v12;
  int v14;
  int v15;
  char v16;

  v16 = 1;
  v7 = a2 + 4;
  if ( a3 == 0 && a4 != v7 )
    v16 = *(uint32_t *)(a4 + 16) > *a5;
  v14 = v7;
  v8 = opNew(0x1Cu);
  v9 = v14;
  if ( v8 != -16 )
  {
    v10 = *a5;
    v11 = *a5 == 0;
    *(uint32_t *)(v8 + 16) = *a5;
    if ( !v11 )
      __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1u);
    v12 = a5[1];
    *(uint32_t *)(v8 + 20) = v12;
    if ( v12 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v12 + 4), 1u);
    *(uint16_t *)(v8 + 24) = *((uint16_t *)a5 + 4);
    *(uint16_t *)(v8 + 26) = *((uint16_t *)a5 + 5);
  }
  v15 = v8;
  sub_1904970(v16, v8, a4, v9);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v15;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_F2DC70  (binary VA: 0xf2dc70)
// Original: sub_F2DC70
// ----------------------------------------------------------------------------
int sub_F2DC70(int a1, int a2, unsigned int *a3)
{
  uint32_t *v4;
  unsigned int v5;
  uint32_t *v6;
  char v7; // bp
  unsigned int v8;
  int v10;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  v4 = *(uint32_t **)(a2 + 8);
  if ( v4 == nullptr )
  {
    v4 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v5 = *a3;
  while ( 1 )
  {
    v8 = v4[4];
    if ( v8 <= v5 )
      break;
    v6 = (uint32_t *)v4[2];
    v7 = 1;
    if ( v6 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v6;
  }
  v6 = (uint32_t *)v4[3];
  v7 = 0;
  if ( v6 != nullptr )
    goto LABEL_4;
LABEL_7:
  v12 = (int)(uintptr_t)(v4);
  if ( v7 == 0 )
  {
    if ( v5 <= v8 )
      goto LABEL_9;
LABEL_13:
    sub_F2DB80(v13, a2, 0, v12, a3);
LABEL_14:
    v10 = v13[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v10;
    return a1;
  }
LABEL_11:
  if ( *(uint32_t **)(a2 + 12) == v4 )
  {
    sub_F2DB80(v13, a2, 0, (int)(uintptr_t)(v4), a3);
    goto LABEL_14;
  }
  v12 = (int)(uintptr_t)(v4);
  v4 = (uint32_t *)sub_19048F0(v4);
  if ( *a3 > v4[4] )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_F2E370  (binary VA: 0xf2e370)
// Original: sub_F2E370
// ----------------------------------------------------------------------------
void sub_F2E370(void *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_208BC48);
  if ( *((uint32_t *)a1 + 5) != 0 )
    sub_5459C0(*((volatile int32_t **)a1 + 5));
  if ( *((uint32_t *)a1 + 2) != 0 )
    gll_operator_delete_arr(*((uint32_t *)a1 + 2));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20483C0);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_F2EC90  (binary VA: 0xf2ec90)
// Original: sub_F2EC90
// ----------------------------------------------------------------------------
volatile int32_t * sub_F2EC90(volatile int32_t ***a1, volatile int32_t ***a2)
{
  volatile int32_t **v2;
  volatile int32_t **v3;
  volatile int32_t **v4;
  volatile int32_t ***v5;
  volatile int32_t **v6;
  int v7;
  volatile int32_t *result;
  volatile int32_t **v9;
  volatile int32_t **v10;
  volatile int32_t **v11;
  unsigned int v12;
  volatile int32_t *v13;
  volatile int32_t **v14;
  volatile int32_t **v15;
  volatile int32_t *v16;
  volatile int32_t **v17;

  v14 = *a2;
  v16 = (volatile int32_t *)a2[1];
  v12 = (unsigned int)(uintptr_t)(a2[3]);
  v2 = a1[2];
  v3 = *a1;
  v4 = a1[3];
  v15 = v3;
  v5 = (volatile int32_t ***)(v4 + 1);
  v17 = v2;
  v13 = (volatile int32_t *)v4;
  if ( v12 > (unsigned int)(uintptr_t)(v4 + 1) )
  {
    do
    {
      v6 = *v5;
      v7 = (int)(uintptr_t)(*v5 + 128);
      do
      {
        if ( *v6 != nullptr )
          sub_5459C0(*v6);
        ++v6;
      }
      while ( v6 != (volatile int32_t **)v7 );
      ++v5;
    }
    while ( v12 > (unsigned int)(uintptr_t)(v5) );
  }
  result = v13;
  if ( (volatile int32_t *)v12 == v13 )
  {
    if ( v14 != v15 )
    {
      v11 = v15;
      do
      {
        result = *v11;
        if ( *v11 != nullptr )
          result = (volatile int32_t *)sub_5459C0(*v11);
        ++v11;
      }
      while ( v14 != v11 );
    }
  }
  else
  {
    if ( v15 != v17 )
    {
      v9 = v15;
      do
      {
        if ( *v9 != nullptr )
          sub_5459C0(*v9);
        ++v9;
      }
      while ( v17 != v9 );
    }
    result = v16;
    if ( v14 != (volatile int32_t **)v16 )
    {
      v10 = (volatile int32_t **)v16;
      do
      {
        result = *v10;
        if ( *v10 != nullptr )
          result = (volatile int32_t *)sub_5459C0(*v10);
        ++v10;
      }
      while ( v14 != v10 );
    }
  }
  return result;
}



// ============================================================================
// Address:   0xf2eda0 (size: 89 bytes)
// Symbol:    sub_F2EDA0
// Demangled: sub_F2EDA0
// ============================================================================
int (**sub_F2EDA0(int a1))(int)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_208BC48);
  if ( *(uint32_t *)(a1 + 20) != 0 )
    sub_5459C0(*(volatile int32_t **)(a1 + 20));
  if ( *(uint32_t *)(a1 + 8) != 0 )
    gll_operator_delete_arr(*(uint32_t *)(a1 + 8));
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_20483C0);
  return (int (**)(int))(uintptr_t)(&off_20483C0);
}
// ----------------------------------------------------------------------------
// Function: sub_F2F300  (binary VA: 0xf2f300)
// Original: sub_F2F300
// ----------------------------------------------------------------------------
int sub_F2F300(int a1, int a2, int *a3, int a4, int a5, int a6)
{
  int *v7;
  volatile int32_t *v8;
  int v9;
  int v10;
  glitch::video::CVertexStreams::Self *v11;
  uint16_t v12;
  size_t v13;
  void *v14;
  int v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef volatile int32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef void (*_g4_t_v35)(volatile int32_t **, int *, uint32_t *, int, int, int, int, int, int, int, int, int, int, int, int, uint32_t);
  typedef volatile int32_t *_g4_t_v36;
  typedef volatile int32_t *_g4_t_v37;
  typedef glitch::video::IBuffer::Self *_g4_t_v38;
  typedef uint32_t _g4_t_v39[2];
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef uint32_t _g4_t_v44[4];
  typedef char _g4_t_v45;
  typedef char _g4_t_v46;
  typedef int **_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v23)) > _g4_s6 ? (32u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v24)) > _g4_s7 ? (36u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v25)) > _g4_s8 ? (36u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v26)) > _g4_s9 ? (36u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v28)) > _g4_s10 ? (40u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v29)) > _g4_s11 ? (44u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v30)) > _g4_s12 ? (44u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v31)) > _g4_s13 ? (48u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v32)) > _g4_s14 ? (48u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v33)) > _g4_s15 ? (52u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v34)) > _g4_s16 ? (52u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v35)) > _g4_s17 ? (56u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v36)) > _g4_s18 ? (56u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v37)) > _g4_s19 ? (60u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v38)) > _g4_s20 ? (64u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v39)) > _g4_s21 ? (68u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v40)) > _g4_s22 ? (76u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v41)) > _g4_s23 ? (80u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v42)) > _g4_s24 ? (84u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (85u + sizeof(_g4_t_v43)) > _g4_s25 ? (85u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v44)) > _g4_s26 ? (88u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v45)) > _g4_s27 ? (104u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (105u + sizeof(_g4_t_v46)) > _g4_s28 ? (105u + sizeof(_g4_t_v46)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v47)) > _g4_s29 ? (116u + sizeof(_g4_t_v47)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v48)) > _g4_s30 ? (120u + sizeof(_g4_t_v48)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v49)) > _g4_s31 ? (124u + sizeof(_g4_t_v49)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 68u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 80u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 84u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 85u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 104u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 105u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 116u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 120u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 124u);

  v47 = &a3;
  v7 = a3;
  v33 = a4;
  v29 = a5;
  v31 = a6;
  v35 = *(void (**)(volatile int32_t **, int *, uint32_t *, int, int, int, int, int, int, int, int, int, int, int, int, uint32_t))(*a3 + 88);
  v40 = 2 * a5;
  v41 = opNewArray(2 * a5);
  v39[0] = 1;
  v39[1] = v31;
  v42 = 1;
  v43 = 1;
  v35(&v37, v7, v39, v17, v18, v19, v20, v21, v22, v40, v24, a2, v29, v31, v33, (uint32_t)(uintptr_t)(v35));
  v8 = v37;
  if ( v37 != nullptr )
  {
    v36 = v37 + 1;
    __sync_add_and_fetch(v37 + 1, 1u);
    v23 = v8;
    v49 = 0;
    v9 = opNew(0x2Cu);
    *(uint32_t *)(v9 + 4) = 0;
    *(uint32_t *)v9 = ((uint32_t)(uintptr_t)&off_2081E88);
    v25 = v9;
    glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self **)(v9 + 8), v28);
    *(uint32_t *)(v25 + 12) = (uint32_t)(uintptr_t)(v23);
    __sync_add_and_fetch(v36, 1u);
    *(uint32_t *)(v25 + 16) = 0;
    *(uint32_t *)(v25 + 20) = v30;
    *(uint32_t *)(v25 + 24) = 0;
    *(uint32_t *)(v25 + 28) = v34;
    *(uint16_t *)(v25 + 32) = 1;
    *(uint16_t *)(v25 + 34) = 6;
    *(uint32_t *)(v25 + 36) = 0;
    *(uint8_t *)(v25 + 40) = 1;
    *(uint8_t *)(v25 + 41) = 0;
    *(uint32_t *)a1 = v25;
    __sync_add_and_fetch((volatile int32_t *)(v25 + 4), 1u);
    sub_5459C0(v23);
  }
  else
  {
    v49 = 0;
    v16 = opNew(0x2Cu);
    *(uint32_t *)(v16 + 4) = 0;
    *(uint32_t *)v16 = ((uint32_t)(uintptr_t)&off_2081E88);
    v26 = v16;
    glitch::video::CVertexStreams::allocate((glitch::video::CVertexStreams::Self **)(v16 + 8), v28);
    *(uint32_t *)(v26 + 12) = 0;
    *(uint32_t *)(v26 + 16) = 0;
    *(uint32_t *)(v26 + 20) = v30;
    *(uint32_t *)(v26 + 24) = 0;
    *(uint32_t *)(v26 + 28) = v34;
    *(uint16_t *)(v26 + 32) = 1;
    *(uint16_t *)(v26 + 34) = 6;
    *(uint32_t *)(v26 + 36) = 0;
    *(uint8_t *)(v26 + 40) = 1;
    *(uint8_t *)(v26 + 41) = 0;
    *(uint32_t *)a1 = v26;
    __sync_add_and_fetch((volatile int32_t *)(v26 + 4), 1u);
  }
  if ( v37 != nullptr )
    sub_5459C0(v37);
  v44[1] = v32;
  v10 = *v7;
  v44[0] = 0;
  v44[2] = 0;
  v44[3] = 0;
  v45 = 1;
  v46 = 1;
  (*(void (**)(glitch::video::IBuffer::Self **, int *, uint32_t *))(v10 + 88))(&v38, v7, v44);
  v11 = *(glitch::video::CVertexStreams::Self **)(*(uint32_t *)a1 + 8);
  v12 = glitch::video::CVertexStreams::setupStreams(v11, (volatile int32_t **)&v38, -1, 0, 0);
  *((uint32_t *)v11 + 2) = v34;
  v48 = 0;
  v13 = v34 * v12;
  v14 = (void *)opNewArray(v13);
  glitch::video::IBuffer::reset(v38, v13, v14, true);
  if ( v38 != nullptr )
    sub_5459C0((volatile int32_t *)v38);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_F307B0  (binary VA: 0xf307b0)
// Original: sub_F307B0
// ----------------------------------------------------------------------------
uint32_t * sub_F307B0(uint32_t *a1, uint32_t **a2, uint32_t **a3)
{
  uint32_t **v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *result;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  bool v25;
  uint32_t **v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t **v29;
  uint32_t *v30;
  uint32_t **v31;
  uint32_t *v32;
  int v33;
  uint32_t *v34;
  int v35;
  uint32_t *v36;
  uint32_t ***v38;
  size_t v39;
  int v40;

  v3 = a2;
  v4 = a1;
  v5 = (uint32_t *)a1[1];
  if ( v5 != (uint32_t *)a1[2] )
  {
    v6 = 0;
    if ( v5 != nullptr )
    {
      v7 = (uint32_t *)*(v5 - 1);
      *v5 = (uint32_t)(uintptr_t)(v7);
      if ( v7 != nullptr )
        __sync_add_and_fetch((uint32_t *)((char *)v7 + *(uint32_t *)(*v7 - 16) + 4), 1u);
      v6 = v4[1];
    }
    v8 = v6 + 4;
    v4[1] = v8;
    v9 = *a3;
    if ( *a3 != nullptr )
    {
      __sync_add_and_fetch((uint32_t *)((char *)v9 + *(uint32_t *)(*v9 - 16) + 4), 1u);
      v8 = v4[1];
    }
    v10 = (v8 - 8 - (int)(uintptr_t)(a2)) >> 2;
    if ( v10 > 0 )
    {
      v39 = (size_t)v9;
      v35 = v8 - 8;
      v11 = v8 - 12;
      v12 = -4 * v10;
      do
      {
        v13 = *(uint32_t **)(v11 + v12 + 4 * v10);
        if ( v13 != nullptr )
          __sync_add_and_fetch((uint32_t *)((char *)v13 + *(uint32_t *)(*v13 - 16) + 4), 1u);
        v14 = *(uint32_t **)(v35 + v12 + 4 * v10);
        *(uint32_t *)(v35 + v12 + 4 * v10) = (uint32_t)(uintptr_t)(v13);
        if ( v14 != nullptr )
          sub_5459C0((uint32_t *)((char *)v14 + *(uint32_t *)(*v14 - 16)));
        --v10;
      }
      while ( v10 != 0 );
      v9 = (uint32_t *)v39;
    }
    if ( v9 != nullptr )
      __sync_add_and_fetch((uint32_t *)((char *)v9 + *(uint32_t *)(*v9 - 16) + 4), 1u);
    result = *a2;
    *a2 = v9;
    if ( result != nullptr )
      result = (uint32_t *)sub_5459C0((uint32_t *)((char *)result + *(uint32_t *)(*result - 16)));
    if ( v9 != nullptr )
      return (uint32_t *)sub_5459C0((uint32_t *)((char *)v9 + *(uint32_t *)(*v9 - 16)));
    return result;
  }
  v16 = *a1;
  v17 = ((int)(uintptr_t)(v5) - v16) >> 2;
  if ( v17 == 0 )
  {
    v40 = 1;
    v19 = ((int)(uintptr_t)(a2) - v16) >> 2;
    goto LABEL_26;
  }
  v18 = 2 * v17;
  if ( v17 > 2 * v17 || v18 > 0x3FFFFFFF )
  {
    v40 = -1;
    v19 = ((int)(uintptr_t)(a2) - v16) >> 2;
LABEL_26:
    v33 = v19;
    v20 = sub_4EBDC0(v40 * 4);
    v36 = (uint32_t *)v20;
    v21 = (uint32_t *)(v20 + 4);
    v19 = v33;
    goto LABEL_27;
  }
  v40 = 2 * v17;
  v19 = ((int)(uintptr_t)(a2) - v16) >> 2;
  if ( v18 != 0 )
    goto LABEL_26;
  v36 = nullptr;
  v21 = (uint32_t *)&loc_4;
  v20 = 0;
LABEL_27:
  v22 = (uint32_t *)(v20 + 4 * v19);
  if ( v22 != nullptr )
  {
    v23 = v22;
    v24 = *a3;
    v25 = *a3 == nullptr;
    *v23 = (uint32_t)(uintptr_t)(*a3);
    if ( !v25 )
      __sync_add_and_fetch((uint32_t *)((char *)v24 + *(uint32_t *)(*v24 - 16) + 4), 1u);
  }
  v26 = (uint32_t **)*v4;
  if ( a2 != (uint32_t **)*v4 )
  {
    v27 = v36;
    do
    {
      if ( v27 != nullptr )
      {
        v28 = *v26;
        v25 = *v26 == nullptr;
        *v27 = (uint32_t)(uintptr_t)(*v26);
        if ( !v25 )
          __sync_add_and_fetch((uint32_t *)((char *)v28 + *(uint32_t *)(*v28 - 16) + 4), 1u);
      }
      ++v26;
      ++v27;
    }
    while ( a2 != v26 );
    v21 = v27 + 1;
  }
  v29 = (uint32_t **)v4[1];
  if ( a2 != v29 )
  {
    do
    {
      if ( v21 != nullptr )
      {
        v30 = *v3;
        v25 = *v3 == nullptr;
        *v21 = (uint32_t)(uintptr_t)(*v3);
        if ( !v25 )
          __sync_add_and_fetch((uint32_t *)((char *)v30 + *(uint32_t *)(*v30 - 16) + 4), 1u);
      }
      ++v3;
      ++v21;
    }
    while ( v29 != v3 );
    v29 = (uint32_t **)v4[1];
  }
  v31 = (uint32_t **)*v4;
  if ( v29 != (uint32_t **)*v4 )
  {
    v38 = (uint32_t ***)v4;
    v32 = v21;
    do
    {
      if ( *v31 != nullptr )
        sub_5459C0((uint32_t *)((char *)*v31 + *(uint32_t *)(**v31 - 16)));
      ++v31;
    }
    while ( v29 != v31 );
    v21 = v32;
    v4 = (uint32_t *)(v38);
    v31 = *v38;
  }
  if ( v31 != nullptr )
  {
    v34 = v21;
    gll_operator_delete_arr((int)(uintptr_t)(v31));
    v21 = v34;
  }
  v4[1] = (uint32_t)(uintptr_t)(v21);
  *v4 = (uint32_t)(uintptr_t)(v36);
  v4[2] = (uint32_t)(uintptr_t)(&v36[v40]);
  return &v36[v40];
}


