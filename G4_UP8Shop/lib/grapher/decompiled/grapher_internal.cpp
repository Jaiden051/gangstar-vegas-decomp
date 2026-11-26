#include "Core/Utils/DecompTypes.h"
#include "grapher_internal.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorBase::GetFromVar_double_id_76447b  (binary VA: 0x13a3cb0)
// Original: grapher::ActorBase::_GetFromVar<double>
// ----------------------------------------------------------------------------
long double grapher::ActorBase::GetFromVar_double_id_76447b(grapher::ActorBase::Self *self, grapher::ActorVariable::Self *a2, const grapher::ActorContext::Self *a3)
{
  grapher::ActorContext::Self *v3;
  int v4;
  int v5;
  int v6;
  long double result; // fst7
  int v8;
  int v9;
  int v10;
  grapher::HolderT<int> *v11;
  void *v12;
  void *v13;
  void *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  grapher::HolderT<int> *v20;
  void *v21;
  char *v22;
  grapher::HolderT<int> *v23;
  grapher::HolderT<int> *v24;
  typedef int _g4_t_v25;
  typedef double _g4_t_v26;
  typedef double _g4_t_v27;
  typedef double _g4_t_v28;
  typedef double _g4_t_v29;
  typedef double _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33[4];
  typedef const char *_g4_t_v34;
  typedef int _g4_t_v35[4];
  typedef uint32_t _g4_t_v36[4];
  typedef uint32_t _g4_t_v37[2];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_Constant;
  typedef double _g4_t_v42[2];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v26)) > _g4_s1 ? (32u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v27)) > _g4_s2 ? (32u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v28)) > _g4_s3 ? (32u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v29)) > _g4_s4 ? (32u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v30)) > _g4_s5 ? (32u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v31)) > _g4_s6 ? (44u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v32)) > _g4_s7 ? (44u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v33)) > _g4_s8 ? (64u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v34)) > _g4_s9 ? (80u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v35)) > _g4_s10 ? (96u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v36)) > _g4_s11 ? (112u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v37)) > _g4_s12 ? (128u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (136u + sizeof(_g4_t_v38)) > _g4_s13 ? (136u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (140u + sizeof(_g4_t_v39)) > _g4_s14 ? (140u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (144u + sizeof(_g4_t_v40)) > _g4_s15 ? (144u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (148u + sizeof(_g4_t_Constant)) > _g4_s16 ? (148u + sizeof(_g4_t_Constant)) : _g4_s16,
    _g4_s18 = (152u + sizeof(_g4_t_v42)) > _g4_s17 ? (152u + sizeof(_g4_t_v42)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 96u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 112u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 128u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 136u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 140u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 144u);
  _g4_t_Constant &Constant = *reinterpret_cast<_g4_t_Constant *>(_g4_sf + 148u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 152u);

  v3 = (grapher::ActorContext::Self *)(a3);
  if ( a3 == nullptr )
  {
    v3 = (grapher::ActorContext::Self *)&unk_20D6720;
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
  }
  grapher::ActorContext::LoadAVar(v3, a2);
  if ( *((uint32_t *)a2 + 2) == 12 )
  {
    v33[0] = (int)(uintptr_t)(&dword_213B814);
    v15 = *((uint32_t *)a2 + 1);
    if ( v15 != 0 )
      G4_VCALL<void>(v15, 32, v33);
    v16 = sub_1938090((int)(uintptr_t)(v33), "..", 0, 2u);
    if ( v16 == -1 )
    {
      v38 = 0;
      v23 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v23 = (uint32_t)(uintptr_t)(&off_205C508);
      grapher::HolderT_int_id_fe4c74::From(v23, &v38);
      G4_VCALL<void>(v23, 16, v42);
      v29 = v42[0];
      G4_VCALL<void>(v23, 44);
      result = v29;
    }
    else
    {
      v32 = v16;
      sub_193A6F0(&v34, v33, 0, v16);
      if ( (unsigned int)(v32 + 2) > *(uint32_t *)(v33[0] - 12) )
        goto LABEL_43;
      sub_193A6F0(v35, v33, v32 + 2, -1);
      v17 = atoi(v34);
      v18 = atoi((const char *)v35[0]);
      v19 = v18;
      if ( v17 > v18 )
      {
        v19 = v17;
        v17 = v18;
      }
      v39 = lrand48() % (v19 - v17 + 1) + v17;
      v20 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v20 = (uint32_t)(uintptr_t)(&off_205C508);
      grapher::HolderT_int_id_fe4c74::From(v20, &v39);
      G4_VCALL<void>(v20, 16, v42);
      v28 = v42[0];
      G4_VCALL<void>(v20, 44);
      result = v28;
      v21 = (void *)(v35[0] - 12);
      if ( (uint32_t *)(v35[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v21);
        result = v28;
      }
      v22 = (char *)(v34 - 12);
      if ( v34 - 12 != (const char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v34 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v22);
        result = (double)result;
      }
    }
    v14 = (void *)(v33[0] - 12);
    if ( (uint32_t *)(v33[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v33[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      goto LABEL_31;
    }
    return result;
  }
  if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v25) != 0 || *((uint32_t *)a2 + 2) != 11 )
  {
    v4 = *((uint32_t *)a2 + 1);
    if ( v4 == 0 )
      return v42[0];
    v5 = (*(int (**)(uint32_t))(*(uint32_t *)v4 + 48))(*((uint32_t *)a2 + 1));
    v6 = v5;
    if ( v5 == 0 )
      return v42[0];
    G4_VCALL<void>(v5, 16, v42);
    v26 = v42[0];
    G4_VCALL<void>(v6, 44);
    return v26;
  }
  v8 = *((uint32_t *)a2 + 1);
  v9 = 0;
  if ( v8 != 0 )
    v9 = G4_VCALL<int>(v8, 48);
  v35[0] = (int)(uintptr_t)(&dword_213B814);
  if ( v9 != 0 )
  {
    G4_VCALL<void>(v9, 32, v35);
    G4_VCALL<void>(v9, 44);
  }
  v10 = sub_1938090((int)(uintptr_t)(v35), ".", 0, 1u);
  if ( v10 == -1 )
  {
    v40 = -1;
    v24 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
    *(uint32_t *)v24 = (uint32_t)(uintptr_t)(&off_205C508);
    grapher::HolderT_int_id_fe4c74::From(v24, &v40);
    G4_VCALL<void>(v24, 16, v42);
    v30 = v42[0];
    G4_VCALL<void>(v24, 44);
    result = v30;
    goto LABEL_18;
  }
  if ( *(uint32_t *)(v35[0] - 12) < (unsigned int)(v10 + 1) )
LABEL_43:
    sub_1900210("basic_string::substr");
  v31 = v10;
  sub_193A6F0(v36, v35, v10 + 1, *(uint32_t *)(v35[0] - 12));
  sub_193A6F0(v37, v35, 0, v31);
  if ( byte_20D6758 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6758) != 0 )
  {
    grapher::DebugConstants::DebugConstants((grapher::DebugConstants::Self *)&unk_20D6760);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6758);
    __cxa_atexit((void (*)(void *))grapher::DebugConstants::Destroy, &unk_20D6760, &unk_20D1280);
  }
  Constant = grapher::DebugConstants::GetConstant(&unk_20D6760, v37, v36);
  v11 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
  *(uint32_t *)v11 = (uint32_t)(uintptr_t)(&off_205C508);
  grapher::HolderT_int_id_fe4c74::From(v11, &Constant);
  G4_VCALL<void>(v11, 16, v42);
  v27 = v42[0];
  G4_VCALL<void>(v11, 44);
  result = v27;
  v12 = (void *)(v37[0] - 12);
  if ( (uint32_t *)(v37[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
    result = v27;
  }
  v13 = (void *)(v36[0] - 12);
  if ( (uint32_t *)(v36[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
    result = (double)result;
  }
LABEL_18:
  v14 = (void *)(v35[0] - 12);
  if ( (uint32_t *)(v35[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
  {
LABEL_31:
    g4_std::string::Rep::M_destroy(v14);
    return (double)result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_13A4C00  (binary VA: 0x13a4c00)
// Original: sub_13A4C00
// ----------------------------------------------------------------------------
int * sub_13A4C00(int *a1, uint32_t *a2, uint32_t *a3, unsigned int *a4)
{
  uint32_t *v4;
  unsigned int v5;
  uint32_t *v6;
  int v7;
  unsigned int v8;
  int v10;
  int v11;
  unsigned int v12;
  uint32_t *v13;
  unsigned int v14;
  uint32_t *v15;
  char v16; // bp
  unsigned int v17;
  uint32_t *v18;
  char v19;
  unsigned int v20;
  unsigned int v21;
  char v22; // bp
  unsigned int v23;
  uint32_t *v24;
  uint32_t *v25;
  char v26;
  unsigned int v27;
  unsigned int v28;
  uint32_t *v29;
  uint32_t *v30;
  char v31; // bp
  int v32;
  unsigned int v33;
  uint32_t *v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  bool v38;
  int v39;
  unsigned int v40;
  int v41;
  char v42;
  uint32_t *v43;
  int v44;
  char v45;
  uint32_t *v48;
  uint32_t *v49;
  uint32_t *v50;
  char v51;
  uint32_t *v52;
  char v53;
  uint32_t *v54;

  v4 = a3;
  v48 = a2 + 1;
  if ( a3 == a2 + 1 )
  {
    if ( a2[5] != 0 )
    {
      v13 = (uint32_t *)a2[4];
      v50 = v13;
      if ( v13[4] < *a4 )
      {
        v42 = v13 == a3;
        v7 = opNew(0x18u);
        if ( v7 != -16 )
        {
          v28 = *a4;
          *(uint32_t *)(v7 + 20) = a4[1];
          *(uint32_t *)(v7 + 16) = v28;
        }
        sub_1904970(v42, v7, v50, a3);
        goto LABEL_9;
      }
    }
    v4 = (uint32_t *)a2[2];
    if ( v4 != nullptr )
    {
      v14 = *a4;
      while ( 1 )
      {
        v17 = v4[4];
        if ( v17 > v14 )
        {
          v15 = (uint32_t *)v4[2];
          v16 = 1;
        }
        else
        {
          v15 = (uint32_t *)v4[3];
          v16 = 0;
        }
        if ( v15 == nullptr )
          break;
        v4 = v15;
      }
      v52 = v4;
      if ( v16 == 0 )
        goto LABEL_42;
    }
    else
    {
      v4 = v48;
    }
    if ( (uint32_t *)a2[3] == v4 )
    {
      v38 = true;
      if ( v48 != v4 )
        v38 = *a4 < v4[4];
      goto LABEL_83;
    }
    v30 = (uint32_t *)sub_19048F0(v4);
    v17 = v30[4];
    v52 = v4;
    v14 = *a4;
    v4 = v30;
LABEL_42:
    if ( v17 < v14 )
    {
      v22 = 1;
      if ( v48 != v52 )
        v22 = v52[4] > v14;
      v4 = (uint32_t *)opNew(0x18u);
      if ( v4 != (uint32_t *)-16 )
      {
        v23 = *a4;
        v4[5] = a4[1];
        v4[4] = v23;
      }
      sub_1904970(v22, v4, v52, v48);
      ++a2[5];
    }
    goto LABEL_17;
  }
  v5 = *a4;
  if ( *a4 >= a3[4] )
  {
    if ( *a4 <= a3[4] )
    {
LABEL_17:
      *a1 = (int)(uintptr_t)(v4);
      return a1;
    }
    if ( a3 == (uint32_t *)a2[4] )
    {
      v7 = opNew(0x18u);
      if ( v7 == -16 )
        goto LABEL_73;
      goto LABEL_72;
    }
    v10 = sub_19048E0(a3);
    if ( v5 < *(uint32_t *)(v10 + 16) )
    {
      if ( a3[3] != 0 )
      {
        v41 = v10;
        v11 = opNew(0x18u);
        v4 = (uint32_t *)v11;
        if ( v11 != -16 )
        {
          v12 = a4[1];
          *(uint32_t *)(v11 + 16) = *a4;
          *(uint32_t *)(v11 + 20) = v12;
        }
        sub_1904970(1, v11, v41, v48);
        ++a2[5];
        goto LABEL_17;
      }
      v7 = opNew(0x18u);
      if ( v7 == -16 )
      {
LABEL_73:
        sub_1904970(0, v7, a3, v48);
LABEL_9:
        ++a2[5];
        *a1 = v7;
        return a1;
      }
LABEL_72:
      v35 = *a4;
      *(uint32_t *)(v7 + 20) = a4[1];
      *(uint32_t *)(v7 + 16) = v35;
      goto LABEL_73;
    }
    v24 = (uint32_t *)a2[2];
    if ( v24 != nullptr )
    {
      while ( 1 )
      {
        v27 = v24[4];
        if ( v5 < v27 )
        {
          v25 = (uint32_t *)v24[2];
          v26 = 1;
        }
        else
        {
          v25 = (uint32_t *)v24[3];
          v26 = 0;
        }
        if ( v25 == nullptr )
          break;
        v24 = v25;
      }
      v34 = v24;
      if ( v26 == 0 )
        goto LABEL_67;
    }
    else
    {
      v24 = v48;
    }
    if ( (uint32_t *)a2[3] != v24 )
    {
      v34 = (uint32_t *)sub_19048F0(v24);
      v27 = v34[4];
LABEL_67:
      if ( v5 <= v27 )
      {
LABEL_68:
        *a1 = (int)(uintptr_t)(v34);
        return a1;
      }
    }
    v53 = 1;
    if ( v48 != v24 )
      v53 = v5 < v24[4];
    v36 = opNew(0x18u);
    if ( v36 != -16 )
    {
      v37 = *a4;
      *(uint32_t *)(v36 + 20) = a4[1];
      *(uint32_t *)(v36 + 16) = v37;
    }
    v44 = v36;
    sub_1904970(v53, v36, v24, v48);
    ++a2[5];
    v34 = (uint32_t *)v44;
    goto LABEL_68;
  }
  v49 = (uint32_t *)a2[3];
  if ( a3 == v49 )
  {
LABEL_6:
    v7 = opNew(0x18u);
    if ( v7 != -16 )
    {
      v8 = *a4;
      *(uint32_t *)(v7 + 20) = a4[1];
      *(uint32_t *)(v7 + 16) = v8;
    }
    sub_1904970(1, v7, a3, v48);
    goto LABEL_9;
  }
  v6 = (uint32_t *)sub_1904940(a3);
  if ( v5 <= v6[4] )
  {
    v4 = (uint32_t *)a2[2];
    if ( v4 != nullptr )
    {
      while ( 1 )
      {
        v20 = v4[4];
        if ( v5 < v20 )
        {
          v18 = (uint32_t *)v4[2];
          v19 = 1;
        }
        else
        {
          v18 = (uint32_t *)v4[3];
          v19 = 0;
        }
        if ( v18 == nullptr )
          break;
        v4 = v18;
      }
      v54 = v4;
      if ( v19 == 0 )
      {
LABEL_35:
        if ( v5 > v20 )
        {
          v51 = 1;
          if ( v48 != v54 )
            v51 = v5 < v54[4];
          v4 = (uint32_t *)opNew(0x18u);
          if ( v4 != (uint32_t *)-16 )
          {
            v21 = *a4;
            v4[5] = a4[1];
            v4[4] = v21;
          }
          sub_1904970(v51, v4, v54, v48);
          ++a2[5];
        }
        goto LABEL_17;
      }
    }
    else
    {
      v4 = v48;
    }
    if ( v49 != v4 )
    {
      v29 = (uint32_t *)sub_19048F0(v4);
      v20 = v29[4];
      v54 = v4;
      v4 = v29;
      goto LABEL_35;
    }
    v38 = true;
    if ( v48 != v4 )
      v38 = v5 < v4[4];
LABEL_83:
    v45 = v38;
    v39 = opNew(0x18u);
    if ( v39 != -16 )
    {
      v40 = *a4;
      *(uint32_t *)(v39 + 20) = a4[1];
      *(uint32_t *)(v39 + 16) = v40;
    }
    sub_1904970(v45, v39, v4, v48);
    v4 = (uint32_t *)v39;
    ++a2[5];
    goto LABEL_17;
  }
  if ( v6[3] != 0 )
    goto LABEL_6;
  v31 = v48 == v6;
  v43 = v6;
  v32 = opNew(0x18u);
  if ( v32 != -16 )
  {
    v33 = *a4;
    *(uint32_t *)(v32 + 20) = a4[1];
    *(uint32_t *)(v32 + 16) = v33;
  }
  sub_1904970(v31, v32, v43, v48);
  ++a2[5];
  *a1 = v32;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_13B44D0  (binary VA: 0x13b44d0)
// Original: sub_13B44D0
// ----------------------------------------------------------------------------
uint32_t * sub_13B44D0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v14;
  int v15;
  int v17;
  int v19;
  char v20;

  v5 = a2 + 4;
  v20 = 1;
  v19 = v5;
  if ( a3 == 0 && a4 != v5 )
    v20 = *a5 < *(uint32_t *)(a4 + 16);
  v6 = gll_operator_new(0x20u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
  v7 = (uint32_t *)v6;
  if ( v6 != -16 )
  {
    v8 = 0;
    *(uint32_t *)(v6 + 16) = *a5;
    v15 = 0;
    v9 = (a5[2] - a5[1]) >> 2;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    if ( -1431655765 * v9 != 0 )
    {
      v14 = 4 * v9;
      v15 = gll_operator_new(4 * v9, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      v8 = v14;
    }
    v10 = (uint32_t *)v15;
    v7[5] = v15;
    v7[6] = v15;
    v7[7] = v15 + v8;
    v11 = a5[2];
    v17 = a5[1];
    if ( v11 != v17 )
    {
      v12 = a5[1];
      do
      {
        if ( v10 != nullptr )
        {
          *v10 = (uint32_t)(uintptr_t)(&off_20678D0);
          v10[1] = *(uint32_t *)(v12 + 4);
          v10[2] = *(uint32_t *)(v12 + 8);
        }
        v12 += 12;
        v10 += 3;
      }
      while ( v11 != v12 );
      v10 = (uint32_t *)(v15 + 4 * ((unsigned int)(v11 - (v17 + 12)) >> 2) + 12);
    }
    v7[6] = (uint32_t)(uintptr_t)(v10);
  }
  sub_1904970(v20, v7, a4, v19);
  ++*(uint32_t *)(a2 + 20);
  *a1 = (uint32_t)(uintptr_t)(v7);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_13B4670  (binary VA: 0x13b4670)
// Original: sub_13B4670
// ----------------------------------------------------------------------------
int sub_13B4670(int a1, uint32_t *a2, int *a3)
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
  bool v14;
  int v15;
  int v16;
  char v17;
  uint32_t *v19;
  uint32_t *v20;

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v20 = v5;
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
  v19 = v4;
  if ( v8 == 0 )
  {
    if ( v9 >= v6 )
      goto LABEL_9;
LABEL_14:
    v11 = 1;
    if ( v20 != v19 )
      v11 = v19[4] > v6;
    v12 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    if ( v12 != -16 )
    {
      v13 = *a3;
      *(uint32_t *)(v12 + 20) = a3[1];
      *(uint32_t *)(v12 + 16) = v13;
    }
    sub_1904970(v11, v12, v19, v20);
    *(uint32_t *)a1 = v12;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    v14 = true;
    if ( v20 != v4 )
      v14 = *a3 < v4[4];
    v17 = v14;
    v15 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    if ( v15 != -16 )
    {
      v16 = *a3;
      *(uint32_t *)(v15 + 20) = a3[1];
      *(uint32_t *)(v15 + 16) = v16;
    }
    sub_1904970(v17, v15, v4, v20);
    *(uint32_t *)a1 = v15;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
  }
  else
  {
    v19 = v4;
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
// Function: sub_13B4810  (binary VA: 0x13b4810)
// Original: sub_13B4810
// ----------------------------------------------------------------------------
int sub_13B4810(int a1, uint32_t *a2, int *a3)
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
  int v15;
  uint32_t *v17;
  char v18;
  uint32_t *v19;

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v19 = v5;
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
  v17 = v4;
  if ( v8 == 0 )
  {
    if ( v9 >= v6 )
      goto LABEL_9;
LABEL_14:
    v11 = 1;
    if ( v19 != v17 )
      v11 = v17[4] > v6;
    v12 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    v13 = v12;
    if ( v12 != -16 )
    {
      *(uint32_t *)(v12 + 16) = *a3;
      g4_std::string::construct_copy(v12 + 20, a3 + 1);
    }
    sub_1904970(v11, v13, v17, v19);
    *(uint32_t *)a1 = v13;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    v18 = 1;
    if ( v19 != v4 )
      v18 = *a3 < v4[4];
    v14 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    v15 = v14;
    if ( v14 != -16 )
    {
      *(uint32_t *)(v14 + 16) = *a3;
      g4_std::string::construct_copy(v14 + 20, a3 + 1);
    }
    sub_1904970(v18, v15, v4, v19);
    *(uint32_t *)a1 = v15;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
  }
  else
  {
    v17 = v4;
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
// Function: sub_13B49D0  (binary VA: 0x13b49d0)
// Original: sub_13B49D0
// ----------------------------------------------------------------------------
int sub_13B49D0(int a1, uint32_t *a2, int *a3)
{
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  char v8; // bp
  int v9;
  int v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef char _g4_t_v26;
  typedef int _g4_t_v27[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v21)) > _g4_s1 ? (16u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v22)) > _g4_s2 ? (20u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v23)) > _g4_s3 ? (24u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v24)) > _g4_s4 ? (28u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v25)) > _g4_s5 ? (32u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v26)) > _g4_s6 ? (40u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v27)) > _g4_s7 ? (44u + sizeof(_g4_t_v27)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);

  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v23 = v5;
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
  v22 = v4;
  if ( v8 == 0 )
  {
    if ( v9 >= v6 )
      goto LABEL_9;
LABEL_14:
    v26 = 1;
    if ( v23 != v22 )
      v26 = v6 < v22[4];
    v11 = gll_operator_new(0x20u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    v12 = (uint32_t *)v11;
    if ( v11 != -16 )
    {
      v13 = 0;
      v24 = 0;
      *(uint32_t *)(v11 + 16) = *a3;
      v14 = a3[2] - a3[1];
      v12[5] = 0;
      v15 = v14 >> 2;
      v12[6] = 0;
      v12[7] = 0;
      if ( -1431655765 * v15 != 0 )
      {
        v19 = 4 * v15;
        v24 = gll_operator_new(4 * v15, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        v13 = v19;
      }
      v12[5] = v24;
      v12[6] = v24;
      v12[7] = v13 + v24;
      v25 = a3[2];
      v16 = a3[1];
      v21 = v16;
      if ( v25 != v16 )
      {
        v17 = (uint32_t *)v24;
        do
        {
          if ( v17 != nullptr )
          {
            *v17 = (uint32_t)(uintptr_t)(&off_20678D0);
            v17[1] = *(uint32_t *)(v16 + 4);
            v17[2] = *(uint32_t *)(v16 + 8);
          }
          v16 += 12;
          v17 += 3;
        }
        while ( v25 != v16 );
        v24 += 4 * ((unsigned int)(v25 - (v21 + 12)) >> 2) + 12;
      }
      v12[6] = v24;
    }
    sub_1904970(v26, v12, v22, v23);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v12);
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    sub_13B44D0(v27, (int)(uintptr_t)(a2), 0, (int)(uintptr_t)(v4), a3);
    v18 = v27[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v18;
  }
  else
  {
    v22 = v4;
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
// Function: sub_13B4C20  (binary VA: 0x13b4c20)
// Original: sub_13B4C20
// ----------------------------------------------------------------------------
int * sub_13B4C20(int *a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  char v19;
  int v20;
  bool v21;
  uint32_t *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  char v30;
  bool v31;
  int v32;
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef uint32_t *_g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef uint32_t *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef char _g4_t_v57;
  typedef uint32_t *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef bool _g4_t_v62;
  typedef bool _g4_t_v63;
  typedef int _g4_t_v64[5];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v33)) > _g4_s0 ? (0u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v34)) > _g4_s1 ? (0u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v35)) > _g4_s2 ? (4u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v36)) > _g4_s3 ? (4u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v37)) > _g4_s4 ? (4u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v38)) > _g4_s5 ? (8u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v39)) > _g4_s6 ? (8u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v40)) > _g4_s7 ? (8u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v41)) > _g4_s8 ? (12u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v42)) > _g4_s9 ? (12u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v43)) > _g4_s10 ? (12u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v45)) > _g4_s11 ? (28u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v46)) > _g4_s12 ? (28u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v47)) > _g4_s13 ? (28u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v48)) > _g4_s14 ? (28u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v50)) > _g4_s15 ? (28u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v51)) > _g4_s16 ? (28u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v52)) > _g4_s17 ? (28u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (28u + sizeof(_g4_t_v53)) > _g4_s18 ? (28u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v54)) > _g4_s19 ? (32u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v55)) > _g4_s20 ? (32u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v56)) > _g4_s21 ? (32u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v57)) > _g4_s22 ? (32u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v59)) > _g4_s23 ? (40u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v60)) > _g4_s24 ? (40u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v61)) > _g4_s25 ? (44u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v62)) > _g4_s26 ? (44u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (44u + sizeof(_g4_t_v63)) > _g4_s27 ? (44u + sizeof(_g4_t_v63)) : _g4_s27,
    _g4_s29 = (56u + sizeof(_g4_t_v64)) > _g4_s28 ? (56u + sizeof(_g4_t_v64)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 4u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 32u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 32u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 32u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 56u);

  v4 = a2;
  v5 = (int)(uintptr_t)(a3);
  v59 = a2 + 1;
  if ( a3 == a2 + 1 )
  {
    if ( a2[5] != 0 )
    {
      v16 = (uint32_t *)a2[4];
      v60 = (int)(uintptr_t)(v16);
      if ( v16[4] < *a4 )
      {
        v62 = a3 == v16;
        v8 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        v9 = a2;
        if ( v8 != -16 )
        {
          v23 = *a4;
          *(uint32_t *)(v8 + 20) = a4[1];
          *(uint32_t *)(v8 + 16) = v23;
        }
        v41 = a3;
        v38 = v60;
        v35 = v8;
        v33 = v62;
        goto LABEL_9;
      }
    }
    goto LABEL_21;
  }
  v6 = *a4;
  if ( *a4 >= a3[4] )
  {
    if ( *a4 <= a3[4] )
    {
LABEL_18:
      *a1 = v5;
      return a1;
    }
    if ( a3 == (uint32_t *)a2[4] )
    {
      v47 = a2;
      goto LABEL_42;
    }
    v47 = a2;
    v12 = sub_19048E0(a3);
    v4 = v47;
    if ( v6 < *(uint32_t *)(v12 + 16) )
    {
      if ( a3[3] != 0 )
      {
        v54 = v12;
        v13 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        v5 = v13;
        v14 = v47;
        if ( v13 != -16 )
        {
          v15 = *a4;
          *(uint32_t *)(v13 + 20) = a4[1];
          *(uint32_t *)(v13 + 16) = v15;
        }
        v39 = v54;
        v42 = v59;
        v36 = v13;
        v34 = 1;
LABEL_17:
        v48 = v14;
        sub_1904970(v34, v36, v39, v42);
        ++v48[5];
        goto LABEL_18;
      }
LABEL_42:
      v8 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      v9 = v47;
      if ( v8 != -16 )
      {
        v26 = *a4;
        *(uint32_t *)(v8 + 20) = a4[1];
        *(uint32_t *)(v8 + 16) = v26;
      }
      v38 = (int)(uintptr_t)(a3);
      v41 = v59;
      v35 = v8;
      v33 = 0;
      goto LABEL_9;
    }
LABEL_21:
    sub_13B4670((int)(uintptr_t)(v64), v4, a4);
    *a1 = v64[0];
    return a1;
  }
  v61 = (uint32_t *)a2[3];
  if ( a3 == v61 )
    goto LABEL_6;
  v7 = sub_1904940(a3);
  v4 = a2;
  if ( v6 > *(uint32_t *)(v7 + 16) )
  {
    if ( *(uint32_t *)(v7 + 12) != 0 )
    {
LABEL_6:
      v45 = v4;
      v8 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      v9 = v45;
      if ( v8 != -16 )
      {
        v10 = *a4;
        *(uint32_t *)(v8 + 20) = a4[1];
        *(uint32_t *)(v8 + 16) = v10;
      }
      v38 = (int)(uintptr_t)(a3);
      v41 = v59;
      v35 = v8;
      v33 = 1;
LABEL_9:
      v46 = v9;
      sub_1904970(v33, v35, v38, v41);
      ++v46[5];
      *a1 = v8;
      return a1;
    }
    v55 = v7;
    v24 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    v5 = v24;
    v14 = a2;
    if ( v24 != -16 )
    {
      v25 = *a4;
      *(uint32_t *)(v24 + 20) = a4[1];
      *(uint32_t *)(v24 + 16) = v25;
    }
    v42 = v59;
    v39 = v55;
    v36 = v24;
    v34 = v59 == (uint32_t *)v55;
    goto LABEL_17;
  }
  v17 = (uint32_t *)a2[2];
  if ( v17 != nullptr )
  {
    while ( 1 )
    {
      v20 = v17[4];
      if ( v6 < v20 )
      {
        v18 = (uint32_t *)v17[2];
        v19 = 1;
      }
      else
      {
        v18 = (uint32_t *)v17[3];
        v19 = 0;
      }
      if ( v18 == nullptr )
        break;
      v17 = v18;
    }
    v21 = v19 == 0;
    v4 = a2;
    v22 = v17;
    if ( v21 )
      goto LABEL_30;
  }
  else
  {
    v17 = v59;
  }
  if ( v61 == v17 )
  {
    v31 = true;
    if ( v59 != v17 )
      v31 = v6 < v17[4];
    v57 = v31;
    v53 = v4;
    v27 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    v28 = v53;
    v30 = v57;
    if ( v27 != -16 )
    {
      v32 = *a4;
      *(uint32_t *)(v27 + 20) = a4[1];
      *(uint32_t *)(v27 + 16) = v32;
    }
    v40 = (int)(uintptr_t)(v17);
    v43 = v59;
    v37 = v27;
    goto LABEL_51;
  }
  v50 = v4;
  v22 = (uint32_t *)sub_19048F0(v17);
  v20 = v22[4];
  v4 = v50;
LABEL_30:
  if ( v6 > v20 )
  {
    v63 = true;
    if ( v59 != v17 )
      v63 = v6 < v17[4];
    v51 = v4;
    v27 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    v28 = v51;
    if ( v27 != -16 )
    {
      v29 = *a4;
      *(uint32_t *)(v27 + 20) = a4[1];
      *(uint32_t *)(v27 + 16) = v29;
    }
    v40 = (int)(uintptr_t)(v17);
    v43 = v59;
    v37 = v27;
    v30 = v63;
LABEL_51:
    v56 = v27;
    v52 = v28;
    sub_1904970(v30, v37, v40, v43);
    ++v52[5];
    v22 = (uint32_t *)v56;
  }
  *a1 = (int)(uintptr_t)(v22);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_int_string_less_int_grap_ac50db::opIndex  (binary VA: 0x13ba7b0)
// Original: std::map<int,std::string,std::less<int>,grapher::allocator<std::pair<int const,std::string>>>::operator[]
// ----------------------------------------------------------------------------
int g4_std::map_int_string_less_int_grap_ac50db::opIndex(std::map<int, std::string, std::less<int>, grapher::allocator<std::pair<int const, std::string>>> *self, int *a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int result;
  char *v6;
  int v7;
  int v8;
  char *v9;
  void *v10;
  uint32_t *v11;
  int v12;
  char *v13;
  int v14;
  uint32_t *v15;
  int v16;
  char *v17;
  int v18;
  char v19;
  int v20;
  char *v21;
  int v22;
  char *v23;
  int v24;
  char *v25;
  typedef char _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef bool _g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef char *_g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef bool _g4_t_v49;
  typedef uint32_t _g4_t_v50[6];
  typedef uint32_t *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint32_t _g4_t_v53[6];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v28)) > _g4_s2 ? (4u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v29)) > _g4_s3 ? (8u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v30)) > _g4_s4 ? (8u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v31)) > _g4_s5 ? (12u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v32)) > _g4_s6 ? (12u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v33)) > _g4_s7 ? (24u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v34)) > _g4_s8 ? (28u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v35)) > _g4_s9 ? (28u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v36)) > _g4_s10 ? (28u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v37)) > _g4_s11 ? (28u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v38)) > _g4_s12 ? (28u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v39)) > _g4_s13 ? (28u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v40)) > _g4_s14 ? (28u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v41)) > _g4_s15 ? (28u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v42)) > _g4_s16 ? (28u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v43)) > _g4_s17 ? (28u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v44)) > _g4_s18 ? (32u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v45)) > _g4_s19 ? (32u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v46)) > _g4_s20 ? (36u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v47)) > _g4_s21 ? (36u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v48)) > _g4_s22 ? (36u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v49)) > _g4_s23 ? (36u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v50)) > _g4_s24 ? (40u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v51)) > _g4_s25 ? (64u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v52)) > _g4_s26 ? (80u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (84u + sizeof(_g4_t_v53)) > _g4_s27 ? (84u + sizeof(_g4_t_v53)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 28u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 28u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 64u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 84u);

  v2 = *((uint32_t **)self + 2);
  if ( v2 == nullptr )
  {
    v4 = (uint32_t *)((char *)self + 4);
    v3 = *a2;
    goto LABEL_8;
  }
  v3 = *a2;
  v4 = (uint32_t *)((char *)self + 4);
  do
  {
    while ( v2[4] >= v3 )
    {
      v4 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_6;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_6:
  if ( (uint32_t *)((char *)self + 4) == v4 || (result = (int)(uintptr_t)(v4 + 5), v4[4] > v3) )
  {
LABEL_8:
    v52 = v3;
    v51 = &dword_213B814;
    g4_std::string::construct_copy(v53, &v51);
    v6 = (char *)self + 4;
    if ( (uint32_t *)((char *)self + 4) == v4 )
    {
      if ( *((uint32_t *)self + 5) == 0 || (v15 = *((uint32_t **)self + 4), v44 = v15, v15[4] >= v52) )
      {
LABEL_28:
        sub_13B4810((int)(uintptr_t)(v50), self, &v52);
LABEL_29:
        result = v50[0] + 20;
        goto LABEL_17;
      }
      v49 = (uint32_t *)((char *)self + 4) == v15;
      v16 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      v17 = (char *)self + 4;
      v18 = v16 + 20;
      if ( v16 != -16 )
      {
        *(uint32_t *)(v16 + 16) = v52;
        g4_std::string::construct_copy(v18, v53);
        v17 = (char *)self + 4;
        v18 = v16 + 20;
      }
      v32 = v17;
      v30 = v44;
      v28 = v16;
      v19 = v49;
    }
    else
    {
      if ( v52 < v4[4] )
      {
        v46 = *((uint32_t **)self + 3);
        if ( v46 != v4 )
        {
          v34 = v52;
          v7 = sub_1904940(v4);
          v47 = (char *)v7;
          if ( v34 > *(uint32_t *)(v7 + 16) )
          {
            if ( *(uint32_t *)(v7 + 12) == 0 )
            {
              v20 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              v21 = (char *)self + 4;
              v22 = v20 + 20;
              if ( v20 != -16 )
              {
                *(uint32_t *)(v20 + 16) = v52;
                g4_std::string::construct_copy(v22, v53);
                v21 = (char *)self + 4;
                v22 = v20 + 20;
              }
              v40 = v22;
              sub_1904970(v21 == v47, v20, v47, v21);
              ++*((uint32_t *)self + 5);
              result = v40;
              goto LABEL_17;
            }
            v8 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
            v9 = (char *)self + 4;
            if ( v8 != -16 )
            {
              *(uint32_t *)(v8 + 16) = v52;
              v35 = v8;
              g4_std::string::construct_copy(v8 + 20, v53);
              v9 = (char *)self + 4;
              v8 = v35;
            }
            v31 = v9;
            v29 = v4;
            v27 = v8;
            v26 = 1;
            goto LABEL_16;
          }
          goto LABEL_28;
        }
LABEL_24:
        v33 = v6;
        v12 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        v13 = v33;
        v14 = v12 + 20;
        if ( v12 != -16 )
        {
          *(uint32_t *)(v12 + 16) = v52;
          g4_std::string::construct_copy(v14, v53);
          v13 = v33;
          v14 = v12 + 20;
        }
        v38 = v14;
        sub_1904970(1, v12, v46, v13);
        ++*((uint32_t *)self + 5);
        result = v38;
        goto LABEL_17;
      }
      result = (int)(uintptr_t)(v4 + 5);
      if ( v52 <= v4[4] )
        goto LABEL_17;
      v48 = *((uint32_t **)self + 4);
      if ( v48 != v4 )
      {
        v37 = v52;
        v46 = (uint32_t *)sub_19048E0(v4);
        v6 = (char *)self + 4;
        if ( v37 >= v46[4] )
        {
          sub_13B4810((int)(uintptr_t)(v50), self, &v52);
          goto LABEL_29;
        }
        if ( v4[3] == 0 )
        {
          v8 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          v23 = (char *)self + 4;
          if ( v8 != -16 )
          {
            *(uint32_t *)(v8 + 16) = v52;
            v41 = v8;
            g4_std::string::construct_copy(v8 + 20, v53);
            v23 = (char *)self + 4;
            v8 = v41;
          }
          v31 = v23;
          v29 = v4;
          v27 = v8;
          v26 = 0;
LABEL_16:
          v36 = v8;
          sub_1904970(v26, v27, v29, v31);
          ++*((uint32_t *)self + 5);
          result = v36 + 20;
          goto LABEL_17;
        }
        goto LABEL_24;
      }
      v45 = v52 < v4[4];
      v24 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      v25 = (char *)self + 4;
      v18 = v24 + 20;
      if ( v24 != -16 )
      {
        *(uint32_t *)(v24 + 16) = v52;
        g4_std::string::construct_copy(v18, v53);
        v25 = (char *)self + 4;
        v18 = v24 + 20;
      }
      v32 = v25;
      v30 = v48;
      v28 = v24;
      v19 = v45;
    }
    v39 = v18;
    sub_1904970(v19, v28, v30, v32);
    ++*((uint32_t *)self + 5);
    result = v39;
LABEL_17:
    v10 = (void *)(v53[0] - 12);
    if ( (uint32_t *)(v53[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v53[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v43 = result;
      g4_std::string::Rep::M_destroy(v10);
      result = v43;
    }
    v11 = v51 - 3;
    if ( v51 - 3 != dword_213B808 && __sync_fetch_and_add(v51 - 1, 0xFFFFFFFF) <= 0 )
    {
      v42 = result;
      g4_std::string::Rep::M_destroy(v11);
      return v42;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_vecto_f0ed70::M_erase  (binary VA: 0x13bac90)
// Original: std::_Rb_tree<int,std::pair<int const,std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>>,std::_Select1st<std::pair<int const,std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>>>,std::less<int>,grapher::allocator<std::pair<int const,std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_int_pair_int_const_vecto_f0ed70::M_erase(int a1, uint32_t *a2)
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
  void (**v12)(uint32_t *);
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  void (**v16)(uint32_t *);
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  void (**v20)(uint32_t *);
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  void (**v24)(uint32_t *);
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  void (**v28)(uint32_t *);
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  void (**v32)(uint32_t *);
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  void (**v36)(uint32_t *);
  uint32_t *v37;
  uint32_t *v38;
  uint32_t *v39;
  void (**v40)(uint32_t *);
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  void (**v44)(uint32_t *);
  uint32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
  uint32_t *v48;
  uint32_t *v49;
  uint32_t *v50;
  uint32_t *v51;
  uint32_t *v52;
  uint32_t *v53;
  uint32_t *v54;
  uint32_t *v55;
  uint32_t *v56;
  uint32_t *v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  uint32_t *v61;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)a2[3];
      v56 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v57 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v58 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v59 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v60 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v61 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              v55 = v8;
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = (uint32_t *)v8[3];
                                  if ( v9 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_int_pair_int_const_vecto_f0ed70::M_erase(
                                        a1,
                                        (uint32_t *)(uintptr_t)(v9[3]));
                                      v10 = (uint32_t *)v9[6];
                                      v11 = (uint32_t *)v9[5];
                                      v54 = (uint32_t *)v9[2];
                                      if ( v10 != v11 )
                                      {
                                        do
                                        {
                                          v12 = (void (**)(uint32_t *))*v11;
                                          v45 = v11;
                                          v11 += 3;
                                          (*v12)(v45);
                                        }
                                        while ( v10 != v11 );
                                        v11 = (uint32_t *)v9[5];
                                      }
                                      if ( v11 != nullptr )
                                        sub_4EB800((int)(uintptr_t)(v11));
                                      sub_4EB800((int)(uintptr_t)(v9));
                                      if ( v54 == nullptr )
                                        break;
                                      v9 = v54;
                                    }
                                  }
                                  v13 = (uint32_t *)v55[6];
                                  v14 = (uint32_t *)v55[5];
                                  v15 = (uint32_t *)v55[2];
                                  if ( v13 != v14 )
                                  {
                                    do
                                    {
                                      v16 = (void (**)(uint32_t *))*v14;
                                      v46 = v14;
                                      v14 += 3;
                                      (*v16)(v46);
                                    }
                                    while ( v13 != v14 );
                                    v14 = (uint32_t *)v55[5];
                                  }
                                  if ( v14 != nullptr )
                                    sub_4EB800((int)(uintptr_t)(v14));
                                  sub_4EB800((int)(uintptr_t)(v55));
                                  if ( v15 == nullptr )
                                    break;
                                  v55 = v15;
                                  v8 = v15;
                                }
                              }
                              v17 = (uint32_t *)v61[6];
                              v18 = (uint32_t *)v61[5];
                              v19 = (uint32_t *)v61[2];
                              if ( v17 != v18 )
                              {
                                do
                                {
                                  v20 = (void (**)(uint32_t *))*v18;
                                  v47 = v18;
                                  v18 += 3;
                                  (*v20)(v47);
                                }
                                while ( v17 != v18 );
                                v18 = (uint32_t *)v61[5];
                              }
                              if ( v18 != nullptr )
                                sub_4EB800((int)(uintptr_t)(v18));
                              sub_4EB800((int)(uintptr_t)(v61));
                              if ( v19 == nullptr )
                                break;
                              v61 = v19;
                              v7 = v19;
                            }
                          }
                          v21 = (uint32_t *)v60[6];
                          v22 = (uint32_t *)v60[5];
                          v23 = (uint32_t *)v60[2];
                          if ( v21 != v22 )
                          {
                            do
                            {
                              v24 = (void (**)(uint32_t *))*v22;
                              v48 = v22;
                              v22 += 3;
                              (*v24)(v48);
                            }
                            while ( v21 != v22 );
                            v22 = (uint32_t *)v60[5];
                          }
                          if ( v22 != nullptr )
                            sub_4EB800((int)(uintptr_t)(v22));
                          sub_4EB800((int)(uintptr_t)(v60));
                          if ( v23 == nullptr )
                            break;
                          v60 = v23;
                          v6 = v23;
                        }
                      }
                      v25 = (uint32_t *)v59[6];
                      v26 = (uint32_t *)v59[5];
                      v27 = (uint32_t *)v59[2];
                      if ( v25 != v26 )
                      {
                        do
                        {
                          v28 = (void (**)(uint32_t *))*v26;
                          v49 = v26;
                          v26 += 3;
                          (*v28)(v49);
                        }
                        while ( v25 != v26 );
                        v26 = (uint32_t *)v59[5];
                      }
                      if ( v26 != nullptr )
                        sub_4EB800((int)(uintptr_t)(v26));
                      sub_4EB800((int)(uintptr_t)(v59));
                      if ( v27 == nullptr )
                        break;
                      v59 = v27;
                      v5 = v27;
                    }
                  }
                  v29 = (uint32_t *)v58[6];
                  v30 = (uint32_t *)v58[5];
                  v31 = (uint32_t *)v58[2];
                  if ( v29 != v30 )
                  {
                    do
                    {
                      v32 = (void (**)(uint32_t *))*v30;
                      v50 = v30;
                      v30 += 3;
                      (*v32)(v50);
                    }
                    while ( v29 != v30 );
                    v30 = (uint32_t *)v58[5];
                  }
                  if ( v30 != nullptr )
                    sub_4EB800((int)(uintptr_t)(v30));
                  sub_4EB800((int)(uintptr_t)(v58));
                  if ( v31 == nullptr )
                    break;
                  v58 = v31;
                  v4 = v31;
                }
              }
              v33 = (uint32_t *)v57[6];
              v34 = (uint32_t *)v57[5];
              v35 = (uint32_t *)v57[2];
              if ( v33 != v34 )
              {
                do
                {
                  v36 = (void (**)(uint32_t *))*v34;
                  v51 = v34;
                  v34 += 3;
                  (*v36)(v51);
                }
                while ( v33 != v34 );
                v34 = (uint32_t *)v57[5];
              }
              if ( v34 != nullptr )
                sub_4EB800((int)(uintptr_t)(v34));
              sub_4EB800((int)(uintptr_t)(v57));
              if ( v35 == nullptr )
                break;
              v57 = v35;
              v3 = v35;
            }
          }
          v37 = (uint32_t *)v56[6];
          v38 = (uint32_t *)v56[5];
          v39 = (uint32_t *)v56[2];
          if ( v37 != v38 )
          {
            do
            {
              v40 = (void (**)(uint32_t *))*v38;
              v52 = v38;
              v38 += 3;
              (*v40)(v52);
            }
            while ( v37 != v38 );
            v38 = (uint32_t *)v56[5];
          }
          if ( v38 != nullptr )
            sub_4EB800((int)(uintptr_t)(v38));
          sub_4EB800((int)(uintptr_t)(v56));
          if ( v39 == nullptr )
            break;
          v56 = v39;
          v2 = v39;
        }
      }
      v41 = (uint32_t *)a2[6];
      v42 = (uint32_t *)a2[5];
      v43 = (uint32_t *)a2[2];
      if ( v41 != v42 )
      {
        do
        {
          v44 = (void (**)(uint32_t *))*v42;
          v53 = v42;
          v42 += 3;
          (*v44)(v53);
        }
        while ( v41 != v42 );
        v42 = (uint32_t *)a2[5];
      }
      if ( v42 != nullptr )
        sub_4EB800((int)(uintptr_t)(v42));
      sub_4EB800((int)(uintptr_t)(a2));
      if ( v43 == nullptr )
        break;
      a2 = v43;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_72637e::M_erase  (binary VA: 0x13bb000)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_erase
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_string_pair_string_const_72637e::M_erase(int a1, int a2)
{
  int result;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  int v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  int v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  int v37;
  uint32_t *v38;
  uint32_t *v39;
  uint32_t *v40;
  uint32_t *v41;
  int v42;
  int v43;
  uint32_t *v44;
  int v45;
  uint32_t *v46;
  int v47;
  uint32_t *v48;
  uint32_t *v49;
  uint32_t *v50;
  uint32_t *v51;
  uint32_t *v52;
  uint32_t *v53;
  uint32_t *v54;

  result = a2;
  if ( a2 != 0 )
  {
    while ( 1 )
    {
      v50 = *(uint32_t **)(result + 12);
      if ( v50 != nullptr )
      {
        while ( 1 )
        {
          v51 = (uint32_t *)v50[3];
          if ( v51 != nullptr )
          {
            while ( 1 )
            {
              v52 = (uint32_t *)v51[3];
              if ( v52 != nullptr )
              {
                while ( 1 )
                {
                  v53 = (uint32_t *)v52[3];
                  if ( v53 != nullptr )
                  {
                    while ( 1 )
                    {
                      v54 = (uint32_t *)v53[3];
                      if ( v54 != nullptr )
                      {
                        while ( 1 )
                        {
                          v49 = (uint32_t *)v54[3];
                          if ( v49 != nullptr )
                          {
                            while ( 1 )
                            {
                              v48 = (uint32_t *)v49[3];
                              if ( v48 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v3 = (uint32_t *)v48[3];
                                  if ( v3 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_string_pair_string_const_72637e::M_erase(
                                        a1,
                                        v3[3]);
                                      v4 = (uint32_t *)v3[6];
                                      v5 = (uint32_t *)v3[2];
                                      if ( v4 != nullptr )
                                      {
                                        v6 = (uint32_t *)(*v4 - 12);
                                        if ( v6 != dword_213B808
                                          && __sync_fetch_and_add((volatile int32_t *)(*v4 - 4), 0xFFFFFFFF) <= 0 )
                                        {
                                          g4_std::string::Rep::M_destroy(v6);
                                        }
                                        opDelete(v4);
                                      }
                                      v7 = v3[4];
                                      if ( (uint32_t *)(v7 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v7 - 12));
                                      }
                                      sub_4EB800((int)(uintptr_t)(v3));
                                      if ( v5 == nullptr )
                                        break;
                                      v3 = v5;
                                    }
                                  }
                                  v8 = v48;
                                  v9 = (uint32_t *)v48[6];
                                  v10 = (uint32_t *)v48[2];
                                  if ( v9 != nullptr )
                                  {
                                    v11 = (uint32_t *)(*v9 - 12);
                                    if ( v11 != dword_213B808
                                      && __sync_fetch_and_add((volatile int32_t *)(*v9 - 4), 0xFFFFFFFF) <= 0 )
                                    {
                                      g4_std::string::Rep::M_destroy(v11);
                                    }
                                    opDelete(v9);
                                    v8 = v48;
                                  }
                                  v12 = v8[4];
                                  if ( (uint32_t *)(v12 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v12 - 12));
                                  }
                                  sub_4EB800((int)(uintptr_t)(v48));
                                  if ( v10 == nullptr )
                                    break;
                                  v48 = v10;
                                }
                              }
                              v13 = v49;
                              v14 = (uint32_t *)v49[6];
                              v15 = (uint32_t *)v49[2];
                              if ( v14 != nullptr )
                              {
                                v16 = (uint32_t *)(*v14 - 12);
                                if ( v16 != dword_213B808
                                  && __sync_fetch_and_add((volatile int32_t *)(*v14 - 4), 0xFFFFFFFF) <= 0 )
                                {
                                  g4_std::string::Rep::M_destroy(v16);
                                }
                                opDelete(v14);
                                v13 = v49;
                              }
                              v17 = v13[4];
                              if ( (uint32_t *)(v17 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v17 - 12));
                              }
                              sub_4EB800((int)(uintptr_t)(v49));
                              if ( v15 == nullptr )
                                break;
                              v49 = v15;
                            }
                          }
                          v18 = v54;
                          v19 = (uint32_t *)v54[6];
                          v20 = (uint32_t *)v54[2];
                          if ( v19 != nullptr )
                          {
                            v21 = (uint32_t *)(*v19 - 12);
                            if ( v21 != dword_213B808
                              && __sync_fetch_and_add((volatile int32_t *)(*v19 - 4), 0xFFFFFFFF) <= 0 )
                            {
                              g4_std::string::Rep::M_destroy(v21);
                            }
                            opDelete(v19);
                            v18 = v54;
                          }
                          v22 = v18[4];
                          if ( (uint32_t *)(v22 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v22 - 12));
                          }
                          sub_4EB800((int)(uintptr_t)(v54));
                          if ( v20 == nullptr )
                            break;
                          v54 = v20;
                        }
                      }
                      v23 = v53;
                      v24 = (uint32_t *)v53[6];
                      v25 = (uint32_t *)v53[2];
                      if ( v24 != nullptr )
                      {
                        v26 = (uint32_t *)(*v24 - 12);
                        if ( v26 != dword_213B808
                          && __sync_fetch_and_add((volatile int32_t *)(*v24 - 4), 0xFFFFFFFF) <= 0 )
                        {
                          g4_std::string::Rep::M_destroy(v26);
                        }
                        opDelete(v24);
                        v23 = v53;
                      }
                      v27 = v23[4];
                      if ( (uint32_t *)(v27 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v27 - 12));
                      }
                      sub_4EB800((int)(uintptr_t)(v53));
                      if ( v25 == nullptr )
                        break;
                      v53 = v25;
                    }
                  }
                  v28 = v52;
                  v29 = (uint32_t *)v52[6];
                  v30 = (uint32_t *)v52[2];
                  if ( v29 != nullptr )
                  {
                    v31 = (uint32_t *)(*v29 - 12);
                    if ( v31 != dword_213B808
                      && __sync_fetch_and_add((volatile int32_t *)(*v29 - 4), 0xFFFFFFFF) <= 0 )
                    {
                      g4_std::string::Rep::M_destroy(v31);
                    }
                    opDelete(v29);
                    v28 = v52;
                  }
                  v32 = v28[4];
                  if ( (uint32_t *)(v32 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v32 - 12));
                  }
                  sub_4EB800((int)(uintptr_t)(v52));
                  if ( v30 == nullptr )
                    break;
                  v52 = v30;
                }
              }
              v33 = v51;
              v34 = (uint32_t *)v51[6];
              v35 = (uint32_t *)v51[2];
              if ( v34 != nullptr )
              {
                v36 = (uint32_t *)(*v34 - 12);
                if ( v36 != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(*v34 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v36);
                }
                opDelete(v34);
                v33 = v51;
              }
              v37 = v33[4];
              if ( (uint32_t *)(v37 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v37 - 12));
              }
              sub_4EB800((int)(uintptr_t)(v51));
              if ( v35 == nullptr )
                break;
              v51 = v35;
            }
          }
          v38 = v50;
          v39 = (uint32_t *)v50[6];
          v40 = (uint32_t *)v50[2];
          if ( v39 != nullptr )
          {
            v41 = (uint32_t *)(*v39 - 12);
            if ( v41 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v39 - 4), 0xFFFFFFFF) <= 0 )
              g4_std::string::Rep::M_destroy(v41);
            opDelete(v39);
            v38 = v50;
          }
          v42 = v38[4];
          if ( (uint32_t *)(v42 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v42 - 12));
          }
          sub_4EB800((int)(uintptr_t)(v50));
          if ( v40 == nullptr )
            break;
          v50 = v40;
        }
      }
      v43 = a2;
      v44 = *(uint32_t **)(a2 + 24);
      v45 = *(uint32_t *)(a2 + 8);
      if ( v44 != nullptr )
      {
        v46 = (uint32_t *)(*v44 - 12);
        if ( v46 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v44 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v46);
        opDelete(v44);
        v43 = a2;
      }
      v47 = *(uint32_t *)(v43 + 16);
      if ( (uint32_t *)(v47 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v47 - 12));
      }
      result = sub_4EB800(a2);
      if ( v45 == 0 )
        break;
      a2 = v45;
      result = v45;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_erase  (binary VA: 0x13bb660)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_erase
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_erase(int a1, int a2)
{
  int result;
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  int v16;
  uint32_t *v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;

  result = a2;
  if ( a2 != 0 )
  {
    while ( 1 )
    {
      v24 = *(uint32_t **)(result + 12);
      if ( v24 != nullptr )
      {
        while ( 1 )
        {
          v25 = (uint32_t *)v24[3];
          if ( v25 != nullptr )
          {
            while ( 1 )
            {
              v26 = (uint32_t *)v25[3];
              if ( v26 != nullptr )
              {
                while ( 1 )
                {
                  v27 = (uint32_t *)v26[3];
                  if ( v27 != nullptr )
                  {
                    while ( 1 )
                    {
                      v28 = (uint32_t *)v27[3];
                      if ( v28 != nullptr )
                      {
                        while ( 1 )
                        {
                          v23 = (uint32_t *)v28[3];
                          if ( v23 != nullptr )
                          {
                            while ( 1 )
                            {
                              v22 = (uint32_t *)v23[3];
                              if ( v22 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v3 = (uint32_t *)v22[3];
                                  if ( v3 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_erase(
                                        a1,
                                        v3[3]);
                                      v4 = v3[4];
                                      v5 = (uint32_t *)v3[2];
                                      if ( (uint32_t *)(v4 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v4 - 12));
                                      }
                                      sub_4EB800((int)(uintptr_t)(v3));
                                      if ( v5 == nullptr )
                                        break;
                                      v3 = v5;
                                    }
                                  }
                                  v6 = v22[4];
                                  v7 = (uint32_t *)v22[2];
                                  if ( (uint32_t *)(v6 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
                                  }
                                  sub_4EB800((int)(uintptr_t)(v22));
                                  if ( v7 == nullptr )
                                    break;
                                  v22 = v7;
                                }
                              }
                              v8 = v23[4];
                              v9 = (uint32_t *)v23[2];
                              if ( (uint32_t *)(v8 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v8 - 12));
                              }
                              sub_4EB800((int)(uintptr_t)(v23));
                              if ( v9 == nullptr )
                                break;
                              v23 = v9;
                            }
                          }
                          v10 = v28[4];
                          v11 = (uint32_t *)v28[2];
                          if ( (uint32_t *)(v10 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v10 - 12));
                          }
                          sub_4EB800((int)(uintptr_t)(v28));
                          if ( v11 == nullptr )
                            break;
                          v28 = v11;
                        }
                      }
                      v12 = v27[4];
                      v13 = (uint32_t *)v27[2];
                      if ( (uint32_t *)(v12 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v12 - 12));
                      }
                      sub_4EB800((int)(uintptr_t)(v27));
                      if ( v13 == nullptr )
                        break;
                      v27 = v13;
                    }
                  }
                  v16 = v26[4];
                  v17 = (uint32_t *)v26[2];
                  if ( (uint32_t *)(v16 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v16 - 12));
                  }
                  sub_4EB800((int)(uintptr_t)(v26));
                  if ( v17 == nullptr )
                    break;
                  v26 = v17;
                }
              }
              v18 = v25[4];
              v19 = (uint32_t *)v25[2];
              if ( (uint32_t *)(v18 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v18 - 12));
              }
              sub_4EB800((int)(uintptr_t)(v25));
              if ( v19 == nullptr )
                break;
              v25 = v19;
            }
          }
          v14 = v24[4];
          v15 = (uint32_t *)v24[2];
          if ( (uint32_t *)(v14 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v14 - 12));
          }
          sub_4EB800((int)(uintptr_t)(v24));
          if ( v15 == nullptr )
            break;
          v24 = v15;
        }
      }
      v20 = *(uint32_t *)(a2 + 16);
      v21 = *(uint32_t *)(a2 + 8);
      if ( (uint32_t *)(v20 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v20 - 12));
      }
      result = sub_4EB800(a2);
      if ( v21 == 0 )
        break;
      a2 = v21;
      result = v21;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_erase  (binary VA: 0x13bba40)
// Original: std::_Rb_tree<int,std::pair<int const,bool>,std::_Select1st<std::pair<int const,bool>>,std::less<int>,grapher::allocator<std::pair<int const,bool>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_erase(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
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
  int v24;
  int v25;

  if ( a2 != 0 )
  {
    while ( 1 )
    {
      v2 = *(uint32_t *)(a2 + 12);
      v21 = v2;
      if ( v2 != 0 )
      {
        while ( 1 )
        {
          v3 = *(uint32_t *)(v2 + 12);
          v22 = v3;
          if ( v3 != 0 )
          {
            while ( 1 )
            {
              v4 = *(uint32_t *)(v3 + 12);
              v23 = v4;
              if ( v4 != 0 )
              {
                while ( 1 )
                {
                  v5 = *(uint32_t *)(v4 + 12);
                  v24 = v5;
                  if ( v5 != 0 )
                  {
                    while ( 1 )
                    {
                      v6 = *(uint32_t *)(v5 + 12);
                      v25 = v6;
                      if ( v6 != 0 )
                      {
                        while ( 1 )
                        {
                          v7 = *(uint32_t *)(v6 + 12);
                          v20 = v7;
                          if ( v7 != 0 )
                          {
                            while ( 1 )
                            {
                              v8 = *(uint32_t *)(v7 + 12);
                              v19 = v8;
                              if ( v8 != 0 )
                              {
                                while ( 1 )
                                {
                                  v9 = *(uint32_t *)(v8 + 12);
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_erase(
                                        a1,
                                        *(uint32_t *)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      sub_4EB800(v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = *(uint32_t *)(v19 + 8);
                                  sub_4EB800(v19);
                                  if ( v11 == 0 )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = *(uint32_t *)(v20 + 8);
                              sub_4EB800(v20);
                              if ( v12 == 0 )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = *(uint32_t *)(v25 + 8);
                          sub_4EB800(v25);
                          if ( v13 == 0 )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = *(uint32_t *)(v24 + 8);
                      sub_4EB800(v24);
                      if ( v14 == 0 )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = *(uint32_t *)(v23 + 8);
                  sub_4EB800(v23);
                  if ( v15 == 0 )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = *(uint32_t *)(v22 + 8);
              sub_4EB800(v22);
              if ( v16 == 0 )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = *(uint32_t *)(v21 + 8);
          sub_4EB800(v21);
          if ( v17 == 0 )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = *(uint32_t *)(a2 + 8);
      sub_4EB800(a2);
      if ( v18 == 0 )
        break;
      a2 = v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_erase  (binary VA: 0x13bbbf0)
// Original: std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,grapher::allocator<std::pair<int const,std::string>>>::_M_erase
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_erase(int a1, int a2)
{
  int result;
  int i;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;

  result = a2;
  if ( a2 != 0 )
  {
    for ( i = a2; ; i = v22 )
    {
      v25 = *(uint32_t **)(i + 12);
      if ( v25 != nullptr )
      {
        while ( 1 )
        {
          v26 = (uint32_t *)v25[3];
          if ( v26 != nullptr )
          {
            while ( 1 )
            {
              v27 = (uint32_t *)v26[3];
              if ( v27 != nullptr )
              {
                while ( 1 )
                {
                  v28 = (uint32_t *)v27[3];
                  if ( v28 != nullptr )
                  {
                    while ( 1 )
                    {
                      v29 = (uint32_t *)v28[3];
                      if ( v29 != nullptr )
                      {
                        while ( 1 )
                        {
                          v24 = (uint32_t *)v29[3];
                          if ( v24 != nullptr )
                          {
                            while ( 1 )
                            {
                              v23 = (uint32_t *)v24[3];
                              if ( v23 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v4 = (uint32_t *)v23[3];
                                  if ( v4 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_erase(
                                        a1,
                                        v4[3]);
                                      v5 = v4[5];
                                      v6 = (uint32_t *)v4[2];
                                      if ( (uint32_t *)(v5 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v5 - 12));
                                      }
                                      sub_4EB800((int)(uintptr_t)(v4));
                                      if ( v6 == nullptr )
                                        break;
                                      v4 = v6;
                                    }
                                  }
                                  v7 = v23[5];
                                  v8 = (uint32_t *)v23[2];
                                  if ( (uint32_t *)(v7 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
                                  }
                                  sub_4EB800((int)(uintptr_t)(v23));
                                  if ( v8 == nullptr )
                                    break;
                                  v23 = v8;
                                }
                              }
                              v9 = v24[5];
                              v10 = (uint32_t *)v24[2];
                              if ( (uint32_t *)(v9 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v9 - 12));
                              }
                              sub_4EB800((int)(uintptr_t)(v24));
                              if ( v10 == nullptr )
                                break;
                              v24 = v10;
                            }
                          }
                          v11 = v29[5];
                          v12 = (uint32_t *)v29[2];
                          if ( (uint32_t *)(v11 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v11 - 12));
                          }
                          sub_4EB800((int)(uintptr_t)(v29));
                          if ( v12 == nullptr )
                            break;
                          v29 = v12;
                        }
                      }
                      v13 = v28[5];
                      v14 = (uint32_t *)v28[2];
                      if ( (uint32_t *)(v13 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v13 - 12));
                      }
                      sub_4EB800((int)(uintptr_t)(v28));
                      if ( v14 == nullptr )
                        break;
                      v28 = v14;
                    }
                  }
                  v17 = v27[5];
                  v18 = (uint32_t *)v27[2];
                  if ( (uint32_t *)(v17 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v17 - 12));
                  }
                  sub_4EB800((int)(uintptr_t)(v27));
                  if ( v18 == nullptr )
                    break;
                  v27 = v18;
                }
              }
              v19 = v26[5];
              v20 = (uint32_t *)v26[2];
              if ( (uint32_t *)(v19 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v19 - 12));
              }
              sub_4EB800((int)(uintptr_t)(v26));
              if ( v20 == nullptr )
                break;
              v26 = v20;
            }
          }
          v15 = v25[5];
          v16 = (uint32_t *)v25[2];
          if ( (uint32_t *)(v15 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v15 - 12));
          }
          sub_4EB800((int)(uintptr_t)(v25));
          if ( v16 == nullptr )
            break;
          v25 = v16;
        }
      }
      v21 = *(uint32_t *)(a2 + 20);
      v22 = *(uint32_t *)(a2 + 8);
      if ( (uint32_t *)(v21 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v21 - 12));
      }
      result = sub_4EB800(a2);
      if ( v22 == 0 )
        break;
      a2 = v22;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_grapher_ActorInputEvent_bd5a31::M_insert_aux  (binary VA: 0x13bbfd0)
// Original: std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_grapher_ActorInputEvent_bd5a31::M_insert_aux(int *a1, void (***a2)(size_t), int a3)
{
  int *v3;
  uint32_t *v4;
  int v5;
  void (**v6)(size_t);
  int result;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  uint32_t *v15;
  void (***v16)(size_t);
  uint32_t *v17;
  void (***v18)(size_t);
  void (***v19)(size_t);
  uint32_t *v20;
  unsigned int v21;
  void (***v22)(size_t);
  void (**v23)(size_t);
  size_t v24;
  int v25;
  void (**v26)(size_t);
  int v27;
  uint32_t *v28;
  unsigned int v29;
  int v30;

  v3 = a1;
  v4 = (uint32_t *)a1[1];
  if ( v4 != (uint32_t *)a1[2] )
  {
    v5 = 0;
    if ( v4 != nullptr )
    {
      *v4 = (uint32_t)(uintptr_t)(&off_20678D0);
      v4[1] = *(v4 - 2);
      v4[2] = *(v4 - 1);
      v5 = a1[1];
    }
    a1[1] = v5 + 12;
    v6 = *(void (***)(size_t))(a3 + 8);
    v26 = *(void (***)(size_t))(a3 + 4);
    result = v5 - 12;
    v8 = -1431655765 * ((v5 - 12 - (int)(uintptr_t)(a2)) >> 2);
    if ( v8 > 0 )
    {
      v9 = (uint32_t *)(v5 - 8);
      do
      {
        result -= 12;
        --v8;
        *v9 = *(uint32_t *)(result + 4);
        v9[1] = *(uint32_t *)(result + 8);
        v9 -= 3;
      }
      while ( v8 != 0 );
    }
    a2[2] = v6;
    a2[1] = v26;
    return result;
  }
  v10 = (uint32_t *)*a1;
  v11 = ((int)(uintptr_t)(v4) - *a1) >> 2;
  v12 = -1431655765 * v11;
  if ( -1431655765 * v11 != 0 )
  {
    v13 = 1431655766 * v11;
    if ( v12 > 2 * v12 || v13 > 0x15555555 )
    {
      v30 = -4;
      v14 = -1431655765 * (a2 - (void (***)(size_t))v10);
    }
    else
    {
      v30 = 24 * v12;
      v14 = -1431655765 * (a2 - (void (***)(size_t))v10);
      if ( v13 == 0 )
      {
        v29 = 12;
        v27 = 0;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v30 = 12;
    v14 = -1431655765 * (a2 - (void (***)(size_t))v10);
  }
  v25 = v14;
  v27 = gll_operator_new(v30, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
  v29 = v27 + 12;
  v14 = v25;
LABEL_12:
  v15 = (uint32_t *)(v27 + 12 * v14);
  if ( v15 != nullptr )
  {
    *v15 = (uint32_t)(uintptr_t)(&off_20678D0);
    v15[1] = *(uint32_t *)(a3 + 4);
    v15[2] = *(uint32_t *)(a3 + 8);
  }
  v28 = (uint32_t *)*a1;
  if ( (void (***)(size_t))*a1 != a2 )
  {
    v16 = (void (***)(size_t))*a1;
    v17 = (uint32_t *)v27;
    do
    {
      if ( v17 != nullptr )
      {
        *v17 = (uint32_t)(uintptr_t)(&off_20678D0);
        v17[1] = (uint32_t)(uintptr_t)(v16[1]);
        v17[2] = (uint32_t)(uintptr_t)(v16[2]);
      }
      v16 += 3;
      v17 += 3;
    }
    while ( v16 != a2 );
    v29 = v27 + 4 * ((unsigned int)((char *)a2 - (char *)(v28 + 3)) >> 2) + 24;
  }
  v18 = (void (***)(size_t))a1[1];
  if ( v18 != a2 )
  {
    v19 = a2;
    v20 = (uint32_t *)v29;
    do
    {
      if ( v20 != nullptr )
      {
        *v20 = (uint32_t)(uintptr_t)(&off_20678D0);
        v20[1] = (uint32_t)(uintptr_t)(v19[1]);
        v20[2] = (uint32_t)(uintptr_t)(v19[2]);
      }
      v19 += 3;
      v20 += 3;
    }
    while ( v18 != v19 );
    v3 = a1;
    v21 = -2147483647 * ((unsigned int)((char *)v18 - (char *)(a2 + 3)) >> 2);
    v18 = (void (***)(size_t))a1[1];
    v29 += 4 * v21 + 12;
  }
  v22 = (void (***)(size_t))*v3;
  if ( (void (***)(size_t))*v3 != v18 )
  {
    do
    {
      v23 = *v22;
      v24 = (size_t)v22;
      v22 += 3;
      (*v23)(v24);
    }
    while ( v18 != v22 );
    v22 = (void (***)(size_t))*v3;
  }
  if ( v22 != nullptr )
    sub_4EB800((int)(uintptr_t)(v22));
  *v3 = v27;
  v3[1] = v29;
  v3[2] = v30 + v27;
  return v30 + v27;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_72637e::M_copy  (binary VA: 0x13bc260)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_copy
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_string_pair_string_const_72637e::M_copy(int a1, uint32_t *a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  uint32_t *i;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int *v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  int v19;
  uint32_t *v20;
  uint32_t *v21;
  int v22;
  int *v23;
  uint32_t *v24;
  uint32_t *v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  int v30;
  uint32_t *v31;
  uint32_t *v32;
  int v33;
  int *v34;
  uint32_t *v35;
  uint32_t *v36;
  int v37;
  int v38;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
  uint32_t *v48;
  uint32_t *v49;
  uint32_t *v50;
  int *v51;
  uint32_t *v52;

  v52 = (uint32_t *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
  if ( v52 != (uint32_t *)-16 )
  {
    g4_std::string::construct_copy(v52 + 4, a2 + 4);
    grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v52 + 5), (const grapher::PinInfo::Self *)(a2 + 5));
  }
  *v52 = *a2;
  v52[3] = 0;
  v52[2] = 0;
  v52[1] = a3;
  v3 = a2;
  v4 = (uint32_t *)a2[3];
  if ( v4 != nullptr )
  {
    v48 = (uint32_t *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    if ( v48 != (uint32_t *)-16 )
    {
      g4_std::string::construct_copy(v48 + 4, v4 + 4);
      grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v48 + 5), (const grapher::PinInfo::Self *)(v4 + 5));
    }
    *v48 = *v4;
    v48[2] = 0;
    v48[3] = 0;
    v48[1] = (uint32_t)(uintptr_t)(v52);
    v5 = v4[3];
    if ( v5 != 0 )
      v48[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_72637e::M_copy(
                 a1,
                 (uint32_t *)(uintptr_t)(v5),
                 (int)(uintptr_t)(v48)));
    v46 = (uint32_t *)v4[2];
    if ( v46 != nullptr )
    {
      for ( i = v48; ; i = v40 )
      {
        v7 = gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        v40 = (uint32_t *)v7;
        if ( v7 != -16 )
        {
          g4_std::string::construct_copy(v7 + 16, v46 + 4);
          grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v40 + 5), (const grapher::PinInfo::Self *)(v46 + 5));
        }
        v8 = *v46;
        v40[3] = 0;
        *v40 = v8;
        v40[2] = 0;
        i[2] = (uint32_t)(uintptr_t)(v40);
        v40[1] = (uint32_t)(uintptr_t)(i);
        v9 = v46;
        v10 = (uint32_t *)v46[3];
        if ( v10 != nullptr )
        {
          v43 = (uint32_t *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          if ( v43 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v43 + 4, v10 + 4);
            grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v43 + 5), (const grapher::PinInfo::Self *)(v10 + 5));
          }
          *v43 = *v10;
          v43[2] = 0;
          v43[3] = 0;
          v43[1] = (uint32_t)(uintptr_t)(v40);
          v11 = v10[3];
          if ( v11 != 0 )
            v43[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_72637e::M_copy(
                       a1,
                       (uint32_t *)(uintptr_t)(v11),
                       (int)(uintptr_t)(v43)));
          v12 = (int *)v10[2];
          v13 = v43;
          if ( v12 != nullptr )
          {
            while ( 1 )
            {
              v14 = (uint32_t *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              if ( v14 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v14 + 4, v12 + 4);
                grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v14 + 5), (const grapher::PinInfo::Self *)(v12 + 5));
              }
              v15 = *v12;
              v14[2] = 0;
              *v14 = v15;
              v14[3] = 0;
              v13[2] = (uint32_t)(uintptr_t)(v14);
              v14[1] = (uint32_t)(uintptr_t)(v13);
              v16 = v12[3];
              if ( v16 != 0 )
                v14[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_72637e::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v16),
                           (int)(uintptr_t)(v14)));
              v12 = (int *)v12[2];
              if ( v12 == nullptr )
                break;
              v13 = v14;
            }
          }
          v40[3] = (uint32_t)(uintptr_t)(v43);
          v9 = v46;
        }
        v46 = (uint32_t *)v9[2];
        if ( v46 == nullptr )
          break;
      }
    }
    v52[3] = (uint32_t)(uintptr_t)(v48);
    v3 = a2;
  }
  v17 = v52;
  v51 = (int *)v3[2];
  if ( v51 != nullptr )
  {
    while ( 1 )
    {
      v49 = (uint32_t *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      if ( v49 != (uint32_t *)-16 )
      {
        g4_std::string::construct_copy(v49 + 4, v51 + 4);
        grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v49 + 5), (const grapher::PinInfo::Self *)(v51 + 5));
      }
      v18 = *v51;
      v49[3] = 0;
      *v49 = v18;
      v49[2] = 0;
      v17[2] = (uint32_t)(uintptr_t)(v49);
      v49[1] = (uint32_t)(uintptr_t)(v17);
      v41 = (uint32_t *)v51[3];
      if ( v41 != nullptr )
      {
        v19 = gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        v50 = (uint32_t *)v19;
        if ( v19 != -16 )
        {
          g4_std::string::construct_copy(v19 + 16, v41 + 4);
          grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v50 + 5), (const grapher::PinInfo::Self *)(v41 + 5));
        }
        *v50 = *v41;
        v50[3] = 0;
        v50[2] = 0;
        v50[1] = (uint32_t)(uintptr_t)(v49);
        v20 = v41;
        v21 = (uint32_t *)v41[3];
        if ( v21 != nullptr )
        {
          v44 = (uint32_t *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          if ( v44 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v44 + 4, v21 + 4);
            grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v44 + 5), (const grapher::PinInfo::Self *)(v21 + 5));
          }
          *v44 = *v21;
          v44[2] = 0;
          v44[3] = 0;
          v44[1] = (uint32_t)(uintptr_t)(v50);
          v22 = v21[3];
          if ( v22 != 0 )
            v44[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_72637e::M_copy(
                       a1,
                       (uint32_t *)(uintptr_t)(v22),
                       (int)(uintptr_t)(v44)));
          v23 = (int *)v21[2];
          v24 = v44;
          if ( v23 != nullptr )
          {
            while ( 1 )
            {
              v25 = (uint32_t *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              if ( v25 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v25 + 4, v23 + 4);
                grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v25 + 5), (const grapher::PinInfo::Self *)(v23 + 5));
              }
              v26 = *v23;
              v25[2] = 0;
              *v25 = v26;
              v25[3] = 0;
              v24[2] = (uint32_t)(uintptr_t)(v25);
              v25[1] = (uint32_t)(uintptr_t)(v24);
              v27 = v23[3];
              if ( v27 != 0 )
                v25[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_72637e::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v27),
                           (int)(uintptr_t)(v25)));
              v23 = (int *)v23[2];
              if ( v23 == nullptr )
                break;
              v24 = v25;
            }
          }
          v50[3] = (uint32_t)(uintptr_t)(v44);
          v20 = v41;
        }
        v28 = v50;
        v47 = (uint32_t *)v20[2];
        if ( v47 != nullptr )
        {
          while ( 1 )
          {
            v29 = gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
            v42 = (uint32_t *)v29;
            if ( v29 != -16 )
            {
              g4_std::string::construct_copy(v29 + 16, v47 + 4);
              grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v42 + 5), (const grapher::PinInfo::Self *)(v47 + 5));
            }
            v30 = *v47;
            v42[3] = 0;
            *v42 = v30;
            v42[2] = 0;
            v28[2] = (uint32_t)(uintptr_t)(v42);
            v42[1] = (uint32_t)(uintptr_t)(v28);
            v31 = v47;
            v32 = (uint32_t *)v47[3];
            if ( v32 != nullptr )
            {
              v45 = (uint32_t *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              if ( v45 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v45 + 4, v32 + 4);
                grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v45 + 5), (const grapher::PinInfo::Self *)(v32 + 5));
              }
              *v45 = *v32;
              v45[2] = 0;
              v45[3] = 0;
              v45[1] = (uint32_t)(uintptr_t)(v42);
              v33 = v32[3];
              if ( v33 != 0 )
                v45[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_72637e::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v33),
                           (int)(uintptr_t)(v45)));
              v34 = (int *)v32[2];
              v35 = v45;
              if ( v34 != nullptr )
              {
                while ( 1 )
                {
                  v36 = (uint32_t *)gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
                  if ( v36 != (uint32_t *)-16 )
                  {
                    g4_std::string::construct_copy(v36 + 4, v34 + 4);
                    grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v36 + 5), (const grapher::PinInfo::Self *)(v34 + 5));
                  }
                  v37 = *v34;
                  v36[2] = 0;
                  *v36 = v37;
                  v36[3] = 0;
                  v35[2] = (uint32_t)(uintptr_t)(v36);
                  v36[1] = (uint32_t)(uintptr_t)(v35);
                  v38 = v34[3];
                  if ( v38 != 0 )
                    v36[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_72637e::M_copy(
                               a1,
                               (uint32_t *)(uintptr_t)(v38),
                               (int)(uintptr_t)(v36)));
                  v34 = (int *)v34[2];
                  if ( v34 == nullptr )
                    break;
                  v35 = v36;
                }
              }
              v42[3] = (uint32_t)(uintptr_t)(v45);
              v31 = v47;
            }
            v47 = (uint32_t *)v31[2];
            if ( v47 == nullptr )
              break;
            v28 = v42;
          }
        }
        v49[3] = (uint32_t)(uintptr_t)(v50);
      }
      v51 = (int *)v51[2];
      if ( v51 == nullptr )
        break;
      v17 = v49;
    }
  }
  return v52;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_copy  (binary VA: 0x13bc9f0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_copy
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_copy(int a1, uint32_t *a2, int a3)
{
  int v3;
  uint32_t *v4;
  int *v5;
  uint32_t *v6;
  int v7;
  int v8;
  int *v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  int *v18;
  uint32_t *v19;
  uint32_t *v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  int v25;
  uint32_t *v26;
  uint32_t *v27;
  int v28;
  int *v29;
  uint32_t *v30;
  uint32_t *v31;
  int v32;
  int v33;
  uint32_t *v34;
  int v35;
  int v36;
  uint32_t *v37;
  uint32_t *v38;
  int v39;
  uint32_t *i;
  int v41;
  int v42;
  uint32_t *v43;
  uint32_t *v44;
  int v45;
  int *v46;
  uint32_t *v47;
  uint32_t *v48;
  int v49;
  int v50;
  uint32_t *v52;
  uint32_t *v53;
  uint32_t *v54;
  uint32_t *v55;
  uint32_t *v56;
  uint32_t *v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  uint32_t *v61;
  uint32_t *v62;
  uint32_t *v63;
  uint32_t *v64;
  uint32_t *v65;
  uint32_t *v66;
  int *v67;
  uint32_t *v68;
  uint32_t *v69;

  v68 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
  if ( v68 != (uint32_t *)-16 )
  {
    g4_std::string::construct_copy(v68 + 4, a2 + 4);
    v68[5] = a2[5];
  }
  *v68 = *a2;
  v68[3] = 0;
  v68[2] = 0;
  v68[1] = a3;
  v55 = (uint32_t *)a2[3];
  if ( v55 != nullptr )
  {
    v3 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    v52 = (uint32_t *)v3;
    if ( v3 != -16 )
    {
      g4_std::string::construct_copy(v3 + 16, v55 + 4);
      v52[5] = v55[5];
    }
    *v52 = *v55;
    v52[3] = 0;
    v52[2] = 0;
    v52[1] = (uint32_t)(uintptr_t)(v68);
    v4 = v55;
    v5 = (int *)v55[3];
    if ( v5 != nullptr )
    {
      v6 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      if ( v6 != (uint32_t *)-16 )
      {
        g4_std::string::construct_copy(v6 + 4, v5 + 4);
        v6[5] = v5[5];
      }
      v7 = *v5;
      v6[2] = 0;
      *v6 = v7;
      v6[3] = 0;
      v6[1] = (uint32_t)(uintptr_t)(v52);
      v8 = v5[3];
      if ( v8 != 0 )
        v6[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_copy(
                  a1,
                  (uint32_t *)(uintptr_t)(v8),
                  (int)(uintptr_t)(v6)));
      v9 = (int *)v5[2];
      if ( v9 != nullptr )
      {
        v59 = v6;
        while ( 1 )
        {
          v10 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          if ( v10 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v10 + 4, v9 + 4);
            v10[5] = v9[5];
          }
          v11 = *v9;
          v10[2] = 0;
          *v10 = v11;
          v10[3] = 0;
          v6[2] = (uint32_t)(uintptr_t)(v10);
          v10[1] = (uint32_t)(uintptr_t)(v6);
          v12 = v9[3];
          if ( v12 != 0 )
            v10[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_copy(
                       a1,
                       (uint32_t *)(uintptr_t)(v12),
                       (int)(uintptr_t)(v10)));
          v9 = (int *)v9[2];
          if ( v9 == nullptr )
            break;
          v6 = v10;
        }
        v6 = v59;
      }
      v4 = v55;
      v52[3] = (uint32_t)(uintptr_t)(v6);
    }
    v13 = v52;
    v62 = (uint32_t *)v4[2];
    if ( v62 != nullptr )
    {
      while ( 1 )
      {
        v56 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        if ( v56 != (uint32_t *)-16 )
        {
          g4_std::string::construct_copy(v56 + 4, v62 + 4);
          v56[5] = v62[5];
        }
        v14 = *v62;
        v56[3] = 0;
        *v56 = v14;
        v56[2] = 0;
        v13[2] = (uint32_t)(uintptr_t)(v56);
        v56[1] = (uint32_t)(uintptr_t)(v13);
        v15 = v62;
        v16 = (uint32_t *)v62[3];
        if ( v16 != nullptr )
        {
          v60 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          if ( v60 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v60 + 4, v16 + 4);
            v60[5] = v16[5];
          }
          *v60 = *v16;
          v60[2] = 0;
          v60[3] = 0;
          v60[1] = (uint32_t)(uintptr_t)(v56);
          v17 = v16[3];
          if ( v17 != 0 )
            v60[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_copy(
                       a1,
                       (uint32_t *)(uintptr_t)(v17),
                       (int)(uintptr_t)(v60)));
          v18 = (int *)v16[2];
          v19 = v60;
          if ( v18 != nullptr )
          {
            while ( 1 )
            {
              v20 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              if ( v20 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v20 + 4, v18 + 4);
                v20[5] = v18[5];
              }
              v21 = *v18;
              v20[2] = 0;
              *v20 = v21;
              v20[3] = 0;
              v19[2] = (uint32_t)(uintptr_t)(v20);
              v20[1] = (uint32_t)(uintptr_t)(v19);
              v22 = v18[3];
              if ( v22 != 0 )
                v20[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v22),
                           (int)(uintptr_t)(v20)));
              v18 = (int *)v18[2];
              if ( v18 == nullptr )
                break;
              v19 = v20;
            }
          }
          v56[3] = (uint32_t)(uintptr_t)(v60);
          v15 = v62;
        }
        v62 = (uint32_t *)v15[2];
        if ( v62 == nullptr )
          break;
        v13 = v56;
      }
    }
    v68[3] = (uint32_t)(uintptr_t)(v52);
  }
  v23 = v68;
  v67 = (int *)a2[2];
  if ( v67 != nullptr )
  {
    while ( 1 )
    {
      v66 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      if ( v66 != (uint32_t *)-16 )
      {
        g4_std::string::construct_copy(v66 + 4, v67 + 4);
        v66[5] = v67[5];
      }
      v24 = *v67;
      v66[3] = 0;
      *v66 = v24;
      v66[2] = 0;
      v23[2] = (uint32_t)(uintptr_t)(v66);
      v66[1] = (uint32_t)(uintptr_t)(v23);
      v57 = (uint32_t *)v67[3];
      if ( v57 != nullptr )
      {
        v25 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        v69 = (uint32_t *)v25;
        if ( v25 != -16 )
        {
          g4_std::string::construct_copy(v25 + 16, v57 + 4);
          v69[5] = v57[5];
        }
        *v69 = *v57;
        v69[3] = 0;
        v69[2] = 0;
        v69[1] = (uint32_t)(uintptr_t)(v66);
        v26 = v57;
        v27 = (uint32_t *)v57[3];
        if ( v27 != nullptr )
        {
          v53 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          if ( v53 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v53 + 4, v27 + 4);
            v53[5] = v27[5];
          }
          *v53 = *v27;
          v53[2] = 0;
          v53[3] = 0;
          v53[1] = (uint32_t)(uintptr_t)(v69);
          v28 = v27[3];
          if ( v28 != 0 )
            v53[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_copy(
                       a1,
                       (uint32_t *)(uintptr_t)(v28),
                       (int)(uintptr_t)(v53)));
          v29 = (int *)v27[2];
          v30 = v53;
          if ( v29 != nullptr )
          {
            while ( 1 )
            {
              v31 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              if ( v31 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v31 + 4, v29 + 4);
                v31[5] = v29[5];
              }
              v32 = *v29;
              v31[2] = 0;
              *v31 = v32;
              v31[3] = 0;
              v30[2] = (uint32_t)(uintptr_t)(v31);
              v31[1] = (uint32_t)(uintptr_t)(v30);
              v33 = v29[3];
              if ( v33 != 0 )
                v31[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v33),
                           (int)(uintptr_t)(v31)));
              v29 = (int *)v29[2];
              if ( v29 == nullptr )
                break;
              v30 = v31;
            }
          }
          v69[3] = (uint32_t)(uintptr_t)(v53);
          v26 = v57;
        }
        v34 = v69;
        v65 = (uint32_t *)v26[2];
        if ( v65 != nullptr )
        {
          while ( 1 )
          {
            v35 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
            v63 = (uint32_t *)v35;
            if ( v35 != -16 )
            {
              g4_std::string::construct_copy(v35 + 16, v65 + 4);
              v63[5] = v65[5];
            }
            v36 = *v65;
            v63[3] = 0;
            *v63 = v36;
            v63[2] = 0;
            v34[2] = (uint32_t)(uintptr_t)(v63);
            v63[1] = (uint32_t)(uintptr_t)(v34);
            v37 = v65;
            v38 = (uint32_t *)v65[3];
            if ( v38 != nullptr )
            {
              v64 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              if ( v64 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v64 + 4, v38 + 4);
                v64[5] = v38[5];
              }
              *v64 = *v38;
              v64[2] = 0;
              v64[3] = 0;
              v64[1] = (uint32_t)(uintptr_t)(v63);
              v39 = v38[3];
              if ( v39 != 0 )
                v64[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v39),
                           (int)(uintptr_t)(v64)));
              v61 = (uint32_t *)v38[2];
              if ( v61 != nullptr )
              {
                for ( i = v64; ; i = v54 )
                {
                  v41 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
                  v54 = (uint32_t *)v41;
                  if ( v41 != -16 )
                  {
                    g4_std::string::construct_copy(v41 + 16, v61 + 4);
                    v54[5] = v61[5];
                  }
                  v42 = *v61;
                  v54[3] = 0;
                  *v54 = v42;
                  v54[2] = 0;
                  i[2] = (uint32_t)(uintptr_t)(v54);
                  v54[1] = (uint32_t)(uintptr_t)(i);
                  v43 = v61;
                  v44 = (uint32_t *)v61[3];
                  if ( v44 != nullptr )
                  {
                    v58 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
                    if ( v58 != (uint32_t *)-16 )
                    {
                      g4_std::string::construct_copy(v58 + 4, v44 + 4);
                      v58[5] = v44[5];
                    }
                    *v58 = *v44;
                    v58[2] = 0;
                    v58[3] = 0;
                    v58[1] = (uint32_t)(uintptr_t)(v54);
                    v45 = v44[3];
                    if ( v45 != 0 )
                      v58[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_copy(
                                 a1,
                                 (uint32_t *)(uintptr_t)(v45),
                                 (int)(uintptr_t)(v58)));
                    v46 = (int *)v44[2];
                    v47 = v58;
                    if ( v46 != nullptr )
                    {
                      while ( 1 )
                      {
                        v48 = (uint32_t *)gll_operator_new(
                                          0x18u,
                                          (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"),
                                          146);
                        if ( v48 != (uint32_t *)-16 )
                        {
                          g4_std::string::construct_copy(v48 + 4, v46 + 4);
                          v48[5] = v46[5];
                        }
                        v49 = *v46;
                        v48[2] = 0;
                        *v48 = v49;
                        v48[3] = 0;
                        v47[2] = (uint32_t)(uintptr_t)(v48);
                        v48[1] = (uint32_t)(uintptr_t)(v47);
                        v50 = v46[3];
                        if ( v50 != 0 )
                          v48[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_copy(
                                     a1,
                                     (uint32_t *)(uintptr_t)(v50),
                                     (int)(uintptr_t)(v48)));
                        v46 = (int *)v46[2];
                        if ( v46 == nullptr )
                          break;
                        v47 = v48;
                      }
                    }
                    v54[3] = (uint32_t)(uintptr_t)(v58);
                    v43 = v61;
                  }
                  v61 = (uint32_t *)v43[2];
                  if ( v61 == nullptr )
                    break;
                }
              }
              v63[3] = (uint32_t)(uintptr_t)(v64);
              v37 = v65;
            }
            v65 = (uint32_t *)v37[2];
            if ( v65 == nullptr )
              break;
            v34 = v63;
          }
        }
        v66[3] = (uint32_t)(uintptr_t)(v69);
      }
      v67 = (int *)v67[2];
      if ( v67 == nullptr )
        break;
      v23 = v66;
    }
  }
  return v68;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_copy  (binary VA: 0x13bd310)
// Original: std::_Rb_tree<int,std::pair<int const,bool>,std::_Select1st<std::pair<int const,bool>>,std::less<int>,grapher::allocator<std::pair<int const,bool>>>::_M_copy
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_copy(int a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  int *v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  int v23;
  int v24;
  int *v25;
  uint32_t *v26;
  uint32_t *v27;
  int v28;
  int v29;
  int v30;
  uint32_t *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  uint32_t *v36;
  uint32_t *v37;
  int v38;
  int v39;
  int *v40;
  uint32_t *v41;
  uint32_t *v42;
  int v43;
  int v44;
  int v45;
  uint32_t *v46;
  int v47;
  int v48;
  uint32_t *v49;
  uint32_t *v50;
  int v51;
  int v52;
  uint32_t *i;
  int v54;
  int v55;
  uint32_t *v56;
  uint32_t *v57;
  int v58;
  int v59;
  int *v60;
  uint32_t *v61;
  uint32_t *v62;
  int v63;
  int v64;
  int v65;
  uint32_t *v67;
  uint32_t *v68;
  uint32_t *v69;
  uint32_t *v70;
  uint32_t *v71;
  int *v72;
  uint32_t *v73;
  uint32_t *v74;
  uint32_t *v75;
  int *v76;
  int *v77;
  uint32_t *v78;
  uint32_t *v79;
  int *v80;
  uint32_t *v81;
  int *v82;
  uint32_t *v83;
  uint32_t *v84;

  v83 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
  if ( v83 != (uint32_t *)-16 )
  {
    v3 = a2[5];
    v83[4] = a2[4];
    v83[5] = v3;
  }
  v4 = *a2;
  v83[2] = 0;
  *v83 = v4;
  v83[3] = 0;
  v83[1] = a3;
  v70 = (uint32_t *)a2[3];
  if ( v70 != nullptr )
  {
    v67 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    if ( v67 != (uint32_t *)-16 )
    {
      v5 = v70[5];
      v67[4] = v70[4];
      v67[5] = v5;
    }
    v6 = v70;
    v7 = *v70;
    v67[2] = 0;
    *v67 = v7;
    v67[3] = 0;
    v67[1] = (uint32_t)(uintptr_t)(v83);
    v8 = (int *)v70[3];
    if ( v8 != nullptr )
    {
      v9 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      if ( v9 != (uint32_t *)-16 )
      {
        v10 = v8[4];
        v9[5] = v8[5];
        v9[4] = v10;
      }
      v11 = *v8;
      v9[2] = 0;
      *v9 = v11;
      v9[3] = 0;
      v9[1] = (uint32_t)(uintptr_t)(v67);
      v12 = v8[3];
      if ( v12 != 0 )
        v9[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_copy(
                  a1,
                  (int *)(uintptr_t)(v12),
                  (int)(uintptr_t)(v9)));
      v13 = (int *)v8[2];
      if ( v13 != nullptr )
      {
        v74 = v9;
        while ( 1 )
        {
          v14 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          if ( v14 != (uint32_t *)-16 )
          {
            v15 = v13[4];
            v14[5] = v13[5];
            v14[4] = v15;
          }
          v16 = *v13;
          v14[2] = 0;
          *v14 = v16;
          v14[3] = 0;
          v9[2] = (uint32_t)(uintptr_t)(v14);
          v14[1] = (uint32_t)(uintptr_t)(v9);
          v17 = v13[3];
          if ( v17 != 0 )
            v14[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_copy(
                       a1,
                       (int *)(uintptr_t)(v17),
                       (int)(uintptr_t)(v14)));
          v13 = (int *)v13[2];
          if ( v13 == nullptr )
            break;
          v9 = v14;
        }
        v9 = v74;
      }
      v6 = v70;
      v67[3] = (uint32_t)(uintptr_t)(v9);
    }
    v18 = v67;
    v77 = (int *)v6[2];
    if ( v77 != nullptr )
    {
      while ( 1 )
      {
        v71 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        if ( v71 != (uint32_t *)-16 )
        {
          v19 = v77[5];
          v71[4] = v77[4];
          v71[5] = v19;
        }
        v20 = *v77;
        v71[2] = 0;
        *v71 = v20;
        v71[3] = 0;
        v18[2] = (uint32_t)(uintptr_t)(v71);
        v71[1] = (uint32_t)(uintptr_t)(v18);
        v21 = (uint32_t *)v77[3];
        if ( v21 != nullptr )
        {
          v22 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          v75 = v22;
          if ( v22 != (uint32_t *)-16 )
          {
            v23 = v21[5];
            v22[4] = v21[4];
            v22[5] = v23;
          }
          *v22 = *v21;
          v22[2] = 0;
          v22[3] = 0;
          v22[1] = (uint32_t)(uintptr_t)(v71);
          v24 = v21[3];
          if ( v24 != 0 )
            v75[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_copy(
                       a1,
                       (int *)(uintptr_t)(v24),
                       (int)(uintptr_t)(v75)));
          v25 = (int *)v21[2];
          v26 = v75;
          if ( v25 != nullptr )
          {
            while ( 1 )
            {
              v27 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              if ( v27 != (uint32_t *)-16 )
              {
                v28 = v25[4];
                v27[5] = v25[5];
                v27[4] = v28;
              }
              v29 = *v25;
              v27[2] = 0;
              *v27 = v29;
              v27[3] = 0;
              v26[2] = (uint32_t)(uintptr_t)(v27);
              v27[1] = (uint32_t)(uintptr_t)(v26);
              v30 = v25[3];
              if ( v30 != 0 )
                v27[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_copy(
                           a1,
                           (int *)(uintptr_t)(v30),
                           (int)(uintptr_t)(v27)));
              v25 = (int *)v25[2];
              if ( v25 == nullptr )
                break;
              v26 = v27;
            }
          }
          v71[3] = (uint32_t)(uintptr_t)(v75);
        }
        v77 = (int *)v77[2];
        if ( v77 == nullptr )
          break;
        v18 = v71;
      }
    }
    v83[3] = (uint32_t)(uintptr_t)(v67);
  }
  v31 = v83;
  v82 = (int *)a2[2];
  if ( v82 != nullptr )
  {
    while ( 1 )
    {
      v81 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      if ( v81 != (uint32_t *)-16 )
      {
        v32 = v82[5];
        v81[4] = v82[4];
        v81[5] = v32;
      }
      v33 = *v82;
      v81[2] = 0;
      *v81 = v33;
      v81[3] = 0;
      v31[2] = (uint32_t)(uintptr_t)(v81);
      v81[1] = (uint32_t)(uintptr_t)(v31);
      v72 = (int *)v82[3];
      if ( v72 != nullptr )
      {
        v84 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        if ( v84 != (uint32_t *)-16 )
        {
          v34 = v72[5];
          v84[4] = v72[4];
          v84[5] = v34;
        }
        v35 = *v72;
        v84[2] = 0;
        *v84 = v35;
        v84[3] = 0;
        v84[1] = (uint32_t)(uintptr_t)(v81);
        v36 = (uint32_t *)v72[3];
        if ( v36 != nullptr )
        {
          v37 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          v68 = v37;
          if ( v37 != (uint32_t *)-16 )
          {
            v38 = v36[5];
            v37[4] = v36[4];
            v37[5] = v38;
          }
          *v37 = *v36;
          v37[2] = 0;
          v37[3] = 0;
          v37[1] = (uint32_t)(uintptr_t)(v84);
          v39 = v36[3];
          if ( v39 != 0 )
            v68[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_copy(
                       a1,
                       (int *)(uintptr_t)(v39),
                       (int)(uintptr_t)(v68)));
          v40 = (int *)v36[2];
          v41 = v68;
          if ( v40 != nullptr )
          {
            while ( 1 )
            {
              v42 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              if ( v42 != (uint32_t *)-16 )
              {
                v43 = v40[4];
                v42[5] = v40[5];
                v42[4] = v43;
              }
              v44 = *v40;
              v42[2] = 0;
              *v42 = v44;
              v42[3] = 0;
              v41[2] = (uint32_t)(uintptr_t)(v42);
              v42[1] = (uint32_t)(uintptr_t)(v41);
              v45 = v40[3];
              if ( v45 != 0 )
                v42[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_copy(
                           a1,
                           (int *)(uintptr_t)(v45),
                           (int)(uintptr_t)(v42)));
              v40 = (int *)v40[2];
              if ( v40 == nullptr )
                break;
              v41 = v42;
            }
          }
          v84[3] = (uint32_t)(uintptr_t)(v68);
        }
        v46 = v84;
        v80 = (int *)v72[2];
        if ( v80 != nullptr )
        {
          while ( 1 )
          {
            v78 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
            if ( v78 != (uint32_t *)-16 )
            {
              v47 = v80[5];
              v78[4] = v80[4];
              v78[5] = v47;
            }
            v48 = *v80;
            v78[2] = 0;
            *v78 = v48;
            v78[3] = 0;
            v46[2] = (uint32_t)(uintptr_t)(v78);
            v78[1] = (uint32_t)(uintptr_t)(v46);
            v49 = (uint32_t *)v80[3];
            if ( v49 != nullptr )
            {
              v50 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              v79 = v50;
              if ( v50 != (uint32_t *)-16 )
              {
                v51 = v49[5];
                v50[4] = v49[4];
                v50[5] = v51;
              }
              *v50 = *v49;
              v50[2] = 0;
              v50[3] = 0;
              v50[1] = (uint32_t)(uintptr_t)(v78);
              v52 = v49[3];
              if ( v52 != 0 )
                v79[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_copy(
                           a1,
                           (int *)(uintptr_t)(v52),
                           (int)(uintptr_t)(v79)));
              v76 = (int *)v49[2];
              if ( v76 != nullptr )
              {
                for ( i = v79; ; i = v69 )
                {
                  v69 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
                  if ( v69 != (uint32_t *)-16 )
                  {
                    v54 = v76[5];
                    v69[4] = v76[4];
                    v69[5] = v54;
                  }
                  v55 = *v76;
                  v69[2] = 0;
                  *v69 = v55;
                  v69[3] = 0;
                  i[2] = (uint32_t)(uintptr_t)(v69);
                  v69[1] = (uint32_t)(uintptr_t)(i);
                  v56 = (uint32_t *)v76[3];
                  if ( v56 != nullptr )
                  {
                    v57 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
                    v73 = v57;
                    if ( v57 != (uint32_t *)-16 )
                    {
                      v58 = v56[5];
                      v57[4] = v56[4];
                      v57[5] = v58;
                    }
                    *v57 = *v56;
                    v57[2] = 0;
                    v57[3] = 0;
                    v57[1] = (uint32_t)(uintptr_t)(v69);
                    v59 = v56[3];
                    if ( v59 != 0 )
                      v73[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_copy(
                                 a1,
                                 (int *)(uintptr_t)(v59),
                                 (int)(uintptr_t)(v73)));
                    v60 = (int *)v56[2];
                    v61 = v73;
                    if ( v60 != nullptr )
                    {
                      while ( 1 )
                      {
                        v62 = (uint32_t *)gll_operator_new(
                                          0x18u,
                                          (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"),
                                          146);
                        if ( v62 != (uint32_t *)-16 )
                        {
                          v63 = v60[4];
                          v62[5] = v60[5];
                          v62[4] = v63;
                        }
                        v64 = *v60;
                        v62[2] = 0;
                        *v62 = v64;
                        v62[3] = 0;
                        v61[2] = (uint32_t)(uintptr_t)(v62);
                        v62[1] = (uint32_t)(uintptr_t)(v61);
                        v65 = v60[3];
                        if ( v65 != 0 )
                          v62[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_bool_19bdda::M_copy(
                                     a1,
                                     (int *)(uintptr_t)(v65),
                                     (int)(uintptr_t)(v62)));
                        v60 = (int *)v60[2];
                        if ( v60 == nullptr )
                          break;
                        v61 = v62;
                      }
                    }
                    v69[3] = (uint32_t)(uintptr_t)(v73);
                  }
                  v76 = (int *)v76[2];
                  if ( v76 == nullptr )
                    break;
                }
              }
              v78[3] = (uint32_t)(uintptr_t)(v79);
            }
            v80 = (int *)v80[2];
            if ( v80 == nullptr )
              break;
            v46 = v78;
          }
        }
        v81[3] = (uint32_t)(uintptr_t)(v84);
      }
      v82 = (int *)v82[2];
      if ( v82 == nullptr )
        break;
      v31 = v81;
    }
  }
  return v83;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_copy  (binary VA: 0x13bdb40)
// Original: std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,grapher::allocator<std::pair<int const,std::string>>>::_M_copy
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_copy(int a1, uint32_t *a2, int a3)
{
  uint32_t *v3;
  int *v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;
  int v19;
  int *v20;
  uint32_t *v21;
  int v22;
  uint32_t *v23;
  int v24;
  int v25;
  uint32_t *v26;
  int v27;
  uint32_t *v28;
  uint32_t *v29;
  int v30;
  int v31;
  int *v32;
  uint32_t *v33;
  int v34;
  uint32_t *v35;
  int v36;
  int v37;
  uint32_t *v38;
  int v39;
  uint32_t *v40;
  uint32_t *v41;
  int v42;
  int v43;
  uint32_t *i;
  int v45;
  uint32_t *v46;
  uint32_t *v47;
  int v48;
  int v49;
  int *v50;
  uint32_t *v51;
  int v52;
  uint32_t *v53;
  int v54;
  int v55;
  uint32_t *v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  uint32_t *v61;
  uint32_t *v62;
  uint32_t *v63;
  uint32_t *v64;
  uint32_t *v65;
  uint32_t *v66;
  uint32_t *v67;
  uint32_t *v68;
  uint32_t *v69;
  uint32_t *v70;
  uint32_t *v71;
  int *v72;
  uint32_t *v73;
  uint32_t *v74;

  v73 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
  if ( v73 != (uint32_t *)-16 )
  {
    v73[4] = a2[4];
    g4_std::string::construct_copy(v73 + 5, a2 + 5);
  }
  *v73 = *a2;
  v73[3] = 0;
  v73[2] = 0;
  v73[1] = a3;
  v60 = (uint32_t *)a2[3];
  if ( v60 != nullptr )
  {
    v57 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    if ( v57 != (uint32_t *)-16 )
    {
      v57[4] = v60[4];
      g4_std::string::construct_copy(v57 + 5, v60 + 5);
    }
    *v57 = *v60;
    v57[3] = 0;
    v57[2] = 0;
    v57[1] = (uint32_t)(uintptr_t)(v73);
    v3 = v60;
    v4 = (int *)v60[3];
    if ( v4 != nullptr )
    {
      v5 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      v6 = (uint32_t *)v5;
      if ( v5 != -16 )
      {
        *(uint32_t *)(v5 + 16) = v4[4];
        g4_std::string::construct_copy(v5 + 20, v4 + 5);
      }
      v7 = *v4;
      v6[2] = 0;
      *v6 = v7;
      v6[3] = 0;
      v6[1] = (uint32_t)(uintptr_t)(v57);
      v8 = v4[3];
      if ( v8 != 0 )
        v6[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_copy(
                  a1,
                  (uint32_t *)(uintptr_t)(v8),
                  (int)(uintptr_t)(v6)));
      v9 = (int *)v4[2];
      if ( v9 != nullptr )
      {
        v64 = v6;
        while ( 1 )
        {
          v10 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          v11 = (uint32_t *)v10;
          if ( v10 != -16 )
          {
            *(uint32_t *)(v10 + 16) = v9[4];
            g4_std::string::construct_copy(v10 + 20, v9 + 5);
          }
          v12 = *v9;
          v11[2] = 0;
          *v11 = v12;
          v11[3] = 0;
          v6[2] = (uint32_t)(uintptr_t)(v11);
          v11[1] = (uint32_t)(uintptr_t)(v6);
          v13 = v9[3];
          if ( v13 != 0 )
            v11[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_copy(
                       a1,
                       (uint32_t *)(uintptr_t)(v13),
                       (int)(uintptr_t)(v11)));
          v9 = (int *)v9[2];
          if ( v9 == nullptr )
            break;
          v6 = v11;
        }
        v6 = v64;
      }
      v3 = v60;
      v57[3] = (uint32_t)(uintptr_t)(v6);
    }
    v14 = v57;
    v67 = (uint32_t *)v3[2];
    if ( v67 != nullptr )
    {
      while ( 1 )
      {
        v61 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        if ( v61 != (uint32_t *)-16 )
        {
          v61[4] = v67[4];
          g4_std::string::construct_copy(v61 + 5, v67 + 5);
        }
        v15 = *v67;
        v61[3] = 0;
        *v61 = v15;
        v61[2] = 0;
        v14[2] = (uint32_t)(uintptr_t)(v61);
        v61[1] = (uint32_t)(uintptr_t)(v14);
        v16 = v67;
        v17 = (uint32_t *)v67[3];
        if ( v17 != nullptr )
        {
          v18 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          v65 = (uint32_t *)v18;
          if ( v18 != -16 )
          {
            *(uint32_t *)(v18 + 16) = v17[4];
            g4_std::string::construct_copy(v18 + 20, v17 + 5);
          }
          *v65 = *v17;
          v65[2] = 0;
          v65[3] = 0;
          v65[1] = (uint32_t)(uintptr_t)(v61);
          v19 = v17[3];
          if ( v19 != 0 )
            v65[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_copy(
                       a1,
                       (uint32_t *)(uintptr_t)(v19),
                       (int)(uintptr_t)(v65)));
          v20 = (int *)v17[2];
          v21 = v65;
          if ( v20 != nullptr )
          {
            while ( 1 )
            {
              v22 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              v23 = (uint32_t *)v22;
              if ( v22 != -16 )
              {
                *(uint32_t *)(v22 + 16) = v20[4];
                g4_std::string::construct_copy(v22 + 20, v20 + 5);
              }
              v24 = *v20;
              v23[2] = 0;
              *v23 = v24;
              v23[3] = 0;
              v21[2] = (uint32_t)(uintptr_t)(v23);
              v23[1] = (uint32_t)(uintptr_t)(v21);
              v25 = v20[3];
              if ( v25 != 0 )
                v23[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v25),
                           (int)(uintptr_t)(v23)));
              v20 = (int *)v20[2];
              if ( v20 == nullptr )
                break;
              v21 = v23;
            }
          }
          v61[3] = (uint32_t)(uintptr_t)(v65);
          v16 = v67;
        }
        v67 = (uint32_t *)v16[2];
        if ( v67 == nullptr )
          break;
        v14 = v61;
      }
    }
    v73[3] = (uint32_t)(uintptr_t)(v57);
  }
  v26 = v73;
  v72 = (int *)a2[2];
  if ( v72 != nullptr )
  {
    while ( 1 )
    {
      v71 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      if ( v71 != (uint32_t *)-16 )
      {
        v71[4] = v72[4];
        g4_std::string::construct_copy(v71 + 5, v72 + 5);
      }
      v27 = *v72;
      v71[3] = 0;
      *v71 = v27;
      v71[2] = 0;
      v26[2] = (uint32_t)(uintptr_t)(v71);
      v71[1] = (uint32_t)(uintptr_t)(v26);
      v62 = (uint32_t *)v72[3];
      if ( v62 != nullptr )
      {
        v74 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        if ( v74 != (uint32_t *)-16 )
        {
          v74[4] = v62[4];
          g4_std::string::construct_copy(v74 + 5, v62 + 5);
        }
        *v74 = *v62;
        v74[3] = 0;
        v74[2] = 0;
        v74[1] = (uint32_t)(uintptr_t)(v71);
        v28 = v62;
        v29 = (uint32_t *)v62[3];
        if ( v29 != nullptr )
        {
          v30 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          v58 = (uint32_t *)v30;
          if ( v30 != -16 )
          {
            *(uint32_t *)(v30 + 16) = v29[4];
            g4_std::string::construct_copy(v30 + 20, v29 + 5);
          }
          *v58 = *v29;
          v58[2] = 0;
          v58[3] = 0;
          v58[1] = (uint32_t)(uintptr_t)(v74);
          v31 = v29[3];
          if ( v31 != 0 )
            v58[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_copy(
                       a1,
                       (uint32_t *)(uintptr_t)(v31),
                       (int)(uintptr_t)(v58)));
          v32 = (int *)v29[2];
          v33 = v58;
          if ( v32 != nullptr )
          {
            while ( 1 )
            {
              v34 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              v35 = (uint32_t *)v34;
              if ( v34 != -16 )
              {
                *(uint32_t *)(v34 + 16) = v32[4];
                g4_std::string::construct_copy(v34 + 20, v32 + 5);
              }
              v36 = *v32;
              v35[2] = 0;
              *v35 = v36;
              v35[3] = 0;
              v33[2] = (uint32_t)(uintptr_t)(v35);
              v35[1] = (uint32_t)(uintptr_t)(v33);
              v37 = v32[3];
              if ( v37 != 0 )
                v35[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v37),
                           (int)(uintptr_t)(v35)));
              v32 = (int *)v32[2];
              if ( v32 == nullptr )
                break;
              v33 = v35;
            }
          }
          v74[3] = (uint32_t)(uintptr_t)(v58);
          v28 = v62;
        }
        v38 = v74;
        v70 = (uint32_t *)v28[2];
        if ( v70 != nullptr )
        {
          while ( 1 )
          {
            v68 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
            if ( v68 != (uint32_t *)-16 )
            {
              v68[4] = v70[4];
              g4_std::string::construct_copy(v68 + 5, v70 + 5);
            }
            v39 = *v70;
            v68[3] = 0;
            *v68 = v39;
            v68[2] = 0;
            v38[2] = (uint32_t)(uintptr_t)(v68);
            v68[1] = (uint32_t)(uintptr_t)(v38);
            v40 = v70;
            v41 = (uint32_t *)v70[3];
            if ( v41 != nullptr )
            {
              v42 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
              v69 = (uint32_t *)v42;
              if ( v42 != -16 )
              {
                *(uint32_t *)(v42 + 16) = v41[4];
                g4_std::string::construct_copy(v42 + 20, v41 + 5);
              }
              *v69 = *v41;
              v69[2] = 0;
              v69[3] = 0;
              v69[1] = (uint32_t)(uintptr_t)(v68);
              v43 = v41[3];
              if ( v43 != 0 )
                v69[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_copy(
                           a1,
                           (uint32_t *)(uintptr_t)(v43),
                           (int)(uintptr_t)(v69)));
              v66 = (uint32_t *)v41[2];
              if ( v66 != nullptr )
              {
                for ( i = v69; ; i = v59 )
                {
                  v59 = (uint32_t *)gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
                  if ( v59 != (uint32_t *)-16 )
                  {
                    v59[4] = v66[4];
                    g4_std::string::construct_copy(v59 + 5, v66 + 5);
                  }
                  v45 = *v66;
                  v59[3] = 0;
                  *v59 = v45;
                  v59[2] = 0;
                  i[2] = (uint32_t)(uintptr_t)(v59);
                  v59[1] = (uint32_t)(uintptr_t)(i);
                  v46 = v66;
                  v47 = (uint32_t *)v66[3];
                  if ( v47 != nullptr )
                  {
                    v48 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
                    v63 = (uint32_t *)v48;
                    if ( v48 != -16 )
                    {
                      *(uint32_t *)(v48 + 16) = v47[4];
                      g4_std::string::construct_copy(v48 + 20, v47 + 5);
                    }
                    *v63 = *v47;
                    v63[2] = 0;
                    v63[3] = 0;
                    v63[1] = (uint32_t)(uintptr_t)(v59);
                    v49 = v47[3];
                    if ( v49 != 0 )
                      v63[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_copy(
                                 a1,
                                 (uint32_t *)(uintptr_t)(v49),
                                 (int)(uintptr_t)(v63)));
                    v50 = (int *)v47[2];
                    v51 = v63;
                    if ( v50 != nullptr )
                    {
                      while ( 1 )
                      {
                        v52 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
                        v53 = (uint32_t *)v52;
                        if ( v52 != -16 )
                        {
                          *(uint32_t *)(v52 + 16) = v50[4];
                          g4_std::string::construct_copy(v52 + 20, v50 + 5);
                        }
                        v54 = *v50;
                        v53[2] = 0;
                        *v53 = v54;
                        v53[3] = 0;
                        v51[2] = (uint32_t)(uintptr_t)(v53);
                        v53[1] = (uint32_t)(uintptr_t)(v51);
                        v55 = v50[3];
                        if ( v55 != 0 )
                          v53[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_int_pair_int_const_strin_7f7a4b::M_copy(
                                     a1,
                                     (uint32_t *)(uintptr_t)(v55),
                                     (int)(uintptr_t)(v53)));
                        v50 = (int *)v50[2];
                        if ( v50 == nullptr )
                          break;
                        v51 = v53;
                      }
                    }
                    v59[3] = (uint32_t)(uintptr_t)(v63);
                    v46 = v66;
                  }
                  v66 = (uint32_t *)v46[2];
                  if ( v66 == nullptr )
                    break;
                }
              }
              v68[3] = (uint32_t)(uintptr_t)(v69);
              v40 = v70;
            }
            v70 = (uint32_t *)v40[2];
            if ( v70 == nullptr )
              break;
            v38 = v68;
          }
        }
        v71[3] = (uint32_t)(uintptr_t)(v74);
      }
      v72 = (int *)v72[2];
      if ( v72 == nullptr )
        break;
      v26 = v71;
    }
  }
  return v73;
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_grapher_ActorProperty_gr_41e2c5::M_fill_insert  (binary VA: 0x13be7a0)
// Original: std::vector<grapher::ActorProperty *,grapher::allocator<grapher::ActorProperty *>>::_M_fill_insert
// ----------------------------------------------------------------------------
void g4_std::vector_grapher_ActorProperty_gr_41e2c5::M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  unsigned int v8;
  int v9;
  int v10;
  unsigned int *v11;
  unsigned int i;
  uint32_t *v13;
  char *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  unsigned int v18;
  unsigned int *v19;
  unsigned int *v20;
  char *v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int *v24;
  unsigned int j;
  __m128i *v26;
  __m128i v27;
  unsigned int v28;
  size_t v29;
  unsigned int v30;
  unsigned int *v31;
  unsigned int *v32;
  unsigned int *v33;
  unsigned int v34;
  bool v35;
  unsigned int *v36;
  unsigned int v37;
  __m128i v38;
  unsigned int v39;
  __m128i *v40;
  unsigned int *v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  uint32_t *v46;
  unsigned int *v47;
  uint8_t *v48;
  int v49;
  unsigned int v50;
  int v51;
  char *v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;

  if ( a3 == 0 )
    return;
  v4 = (unsigned int *)a1[1];
  if ( a3 > (a1[2] - (int)(uintptr_t)(v4)) >> 2 )
  {
    v48 = (uint8_t *)*a1;
    v5 = ((int)(uintptr_t)(v4) - *a1) >> 2;
    if ( a3 > 0x3FFFFFFF - v5 )
      sub_1900180("vector::_M_fill_insert");
    v6 = a3;
    if ( v5 >= a3 )
      v6 = v5;
    v7 = __CFADD__(v6, v5);
    v8 = v6 + v5;
    if ( v7 || v8 > 0x3FFFFFFF )
    {
      v44 = -4;
      v29 = 0xFFFFFFFC;
      v9 = (src - (char *)(v48)) >> 2;
    }
    else
    {
      v9 = (src - (char *)(v48)) >> 2;
      if ( v8 == 0 )
      {
        v49 = 0;
        v44 = 0;
        v10 = 0;
        goto LABEL_10;
      }
      v44 = 4 * v8;
      v29 = 4 * v8;
    }
    v42 = v9;
    v49 = gll_operator_new(v29, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
    v9 = v42;
    v10 = v49;
LABEL_10:
    v11 = (unsigned int *)(v10 + 4 * v9);
    for ( i = a3; i != 0; --i )
    {
      if ( v11 != nullptr )
        *v11 = *a4;
      ++v11;
    }
    v13 = (uint32_t *)v49;
    v45 = *a1;
    if ( (char *)*a1 != src )
    {
      v14 = (char *)*a1;
      do
      {
        if ( v13 != nullptr )
          *v13 = *(uint32_t *)v14;
        v14 += 4;
        ++v13;
      }
      while ( v14 != src );
      v13 = (uint32_t *)(v49 + 4 * ((unsigned int)(uintptr_t)(&src[-v45 - 4]) >> 2) + 4);
    }
    v46 = &v13[a3];
    v15 = (char *)a1[1];
    if ( v15 != src )
    {
      v16 = src;
      v17 = &v13[a3];
      do
      {
        if ( v17 != nullptr )
          *v17 = *(uint32_t *)v16;
        v16 += 4;
        ++v17;
      }
      while ( v15 != v16 );
      v46 += ((unsigned int)(v15 - (src + 4)) >> 2) + 1;
    }
    if ( *a1 != 0 )
      sub_4EB800(*a1);
    *a1 = v49;
    a1[1] = (int)(uintptr_t)(v46);
    a1[2] = v44 + v49;
    return;
  }
  v18 = *a4;
  v50 = ((char *)v4 - src) >> 2;
  if ( a3 >= v50 )
  {
    v30 = a3 - v50;
    v31 = (unsigned int *)a1[1];
    if ( a3 != v50 )
    {
      do
      {
        if ( v31 != nullptr )
          *v31 = v18;
        ++v31;
        --v30;
      }
      while ( v30 != 0 );
      v31 = (unsigned int *)a1[1];
      v30 = a3 - v50;
    }
    v32 = &v31[v30];
    a1[1] = (int)(uintptr_t)(v32);
    if ( v4 == (unsigned int *)src )
    {
      a1[1] = (int)(uintptr_t)(&v32[v50]);
    }
    else
    {
      v33 = (unsigned int *)src;
      do
      {
        if ( v32 != nullptr )
          *v32 = *v33;
        ++v33;
        ++v32;
      }
      while ( v4 != v33 );
      a1[1] += 4 * v50;
      v56 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v34 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
      if ( v34 > v56 )
        v34 = ((unsigned int)((char *)v4 - (src + 4)) >> 2) + 1;
      v35 = v34 == 0;
      v53 = v34;
      v36 = (unsigned int *)src;
      if ( v35 )
        goto LABEL_82;
      v37 = 0;
      do
      {
        ++v37;
        *v36++ = v18;
      }
      while ( v53 > v37 );
      if ( v56 != v53 )
      {
LABEL_82:
        v57 = v56 - v53;
        if ( 4 * (v57 >> 2) == 0 )
          goto LABEL_83;
        v38 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v39 = 0;
        v40 = (__m128i *)&src[4 * v53];
        do
        {
          ++v39;
          *v40++ = v38;
        }
        while ( v39 < v57 >> 2 );
        v36 += 4 * (v57 >> 2);
        if ( v57 != 4 * (v57 >> 2) )
        {
LABEL_83:
          do
          {
            *v36 = v18;
            v41 = v36 + 1;
            if ( v4 == v41 )
              break;
            *v41 = v18;
            v36 = v41 + 1;
          }
          while ( v4 != v36 );
        }
      }
    }
  }
  else
  {
    v51 = 4 * a3;
    v47 = &v4[-a3];
    v19 = (unsigned int *)a1[1];
    if ( v4 != v47 )
    {
      v20 = &v4[-a3];
      do
      {
        if ( v19 != nullptr )
          *v19 = *v20;
        ++v20;
        ++v19;
      }
      while ( v4 != v20 );
      v19 = (unsigned int *)a1[1];
    }
    a1[1] = (int)(uintptr_t)(&v19[v51 / 4u]);
    if ( ((char *)v47 - src) >> 2 != 0 )
    {
      v43 = v18;
      memmove(&v4[-(((char *)v47 - src) >> 2)], src, 4 * (((char *)v47 - src) >> 2));
      v18 = v43;
    }
    v21 = &src[v51];
    v52 = &src[v51];
    if ( v52 != src )
    {
      v22 = ((unsigned int)(v21 - (src + 4)) >> 2) + 1;
      v23 = -((uint8_t)((uint8_t)(uintptr_t)(src) & 0xF) >> 2) & 3;
      v54 = v22;
      if ( v22 <= v23 )
        v23 = v22;
      v24 = (unsigned int *)src;
      if ( v23 == 0 )
        goto LABEL_84;
      for ( j = 0; j < v23; ++j )
        *v24++ = v18;
      if ( v54 != v23 )
      {
LABEL_84:
        v55 = v54 - v23;
        if ( 4 * (v55 >> 2) == 0 )
          goto LABEL_85;
        v26 = (__m128i *)&src[4 * v23];
        v27 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v18), 0);
        v28 = 0;
        do
        {
          ++v28;
          *v26++ = v27;
        }
        while ( v28 < v55 >> 2 );
        v24 += 4 * (v55 >> 2);
        if ( v55 != 4 * (v55 >> 2) )
        {
LABEL_85:
          do
            *v24++ = v18;
          while ( v52 != (char *)v24 );
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_72637e::M_insert  (binary VA: 0x13bec30)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_72637e::M_insert(int *a1, int a2, int a3, int a4, const void **a5)
{
  unsigned int v5;
  int v6;
  size_t v8;
  size_t n;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  size_t v14;

  LOBYTE(v5) = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
  {
    v8 = *((uint32_t *)*a5 - 3);
    n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v14 = n;
    if ( n > v8 )
      n = *((uint32_t *)*a5 - 3);
    v10 = memcmp(*a5, *(const void **)(a4 + 16), n);
    v11 = v8 - v14;
    if ( v10 != 0 )
      v11 = v10;
    v5 = v11 >> 31;
  }
  v6 = gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
  if ( v6 != -16 )
  {
    v12 = v6;
    g4_std::string::construct_copy(v6 + 16, a5);
    grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v12 + 20), (const grapher::PinInfo::Self *)(a5 + 1));
    v6 = v12;
  }
  v13 = v6;
  sub_1904970(v5, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_72637e::M_insert_unique  (binary VA: 0x13bed50)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_string_pair_string_const_72637e::M_insert_unique(int a1, uint32_t *a2, const void **a3)
{
  int v3;
  size_t v4;
  int v5;
  uint32_t *v6;
  size_t n;
  size_t v8;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  size_t v13;
  int v14;
  int v15;
  int v16;
  int v18;
  size_t v19;
  size_t v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  typedef size_t _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef char _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef void *_g4_t_s1;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v24)) > _g4_s0 ? (4u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v26)) > _g4_s2 ? (12u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v27)) > _g4_s3 ? (16u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v28)) > _g4_s4 ? (16u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_s1)) > _g4_s5 ? (20u + sizeof(_g4_t_s1)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v30)) > _g4_s6 ? (24u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v31)) > _g4_s7 ? (28u + sizeof(_g4_t_v31)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);

  v30 = a2 + 1;
  if ( a2[2] == 0 )
  {
    v11 = (int)(uintptr_t)(a2 + 1);
    goto LABEL_17;
  }
  v3 = a2[2];
  s1 = (void *)*a3;
  v4 = *((uint32_t *)*a3 - 3);
  while ( 1 )
  {
    v6 = *(uint32_t **)(v3 + 16);
    n = v4;
    v8 = *(v6 - 3);
    v25 = v3;
    if ( v8 <= v4 )
      n = *(v6 - 3);
    v24 = n;
    v9 = memcmp(s1, *(const void **)(v3 + 16), n);
    if ( v9 == 0 )
      v9 = v4 - v8;
    if ( v9 >= 0 )
      break;
    v5 = *(uint32_t *)(v25 + 8);
    v27 = 1;
    if ( v5 == 0 )
      goto LABEL_11;
LABEL_4:
    v3 = v5;
  }
  v5 = *(uint32_t *)(v25 + 12);
  v27 = 0;
  if ( v5 != 0 )
    goto LABEL_4;
LABEL_11:
  v10 = v6;
  v11 = v25;
  v12 = v10;
  v13 = v24;
  v14 = v25;
  if ( v27 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( v11 == a2[3] )
  {
    g4_std::Rb_tree_string_pair_string_const_72637e::M_insert(
      v31,
      (int)(uintptr_t)(a2),
      0,
      v11,
      a3);
    *(uint32_t *)a1 = v31[0];
    *(uint8_t *)(a1 + 4) = 1;
    return a1;
  }
  else
  {
    v18 = sub_19048F0(v11);
    v12 = *(uint32_t **)(v18 + 16);
    v14 = v18;
    v8 = *(v12 - 3);
    s1 = (void *)*a3;
    v4 = *((uint32_t *)*a3 - 3);
    v13 = v8;
    if ( v4 <= v8 )
      v13 = *((uint32_t *)s1 - 3);
LABEL_12:
    v26 = v14;
    v15 = v8 - v4;
    v16 = memcmp(v12, s1, v13);
    if ( v16 != 0 )
      v15 = v16;
    if ( v15 < 0 )
    {
      LOBYTE(v28) = 1;
      if ( (uint32_t *)v11 != v30 )
      {
        v19 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
        v20 = v19;
        if ( v4 <= v19 )
          v20 = v4;
        v21 = v4 - v19;
        v22 = memcmp(s1, *(const void **)(v11 + 16), v20);
        if ( v22 == 0 )
          v22 = v21;
        v28 = v22 >> 31;
      }
      v23 = gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      if ( v23 != -16 )
      {
        g4_std::string::construct_copy(v23 + 16, a3);
        grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v23 + 20), (const grapher::PinInfo::Self *)(a3 + 1));
      }
      sub_1904970(v28, v23, v11, v30);
      ++a2[5];
      *(uint32_t *)a1 = v23;
      *(uint8_t *)(a1 + 4) = 1;
      return a1;
    }
    else
    {
      *(uint32_t *)a1 = v26;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_72637e::M_insert_unique  (binary VA: 0x13bef80)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_72637e::M_insert_unique(int *a1, uint32_t *a2, int a3, const void **a4)
{
  size_t v4;
  size_t n;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  int v11;
  int v13;
  size_t v14;
  int v15;
  int v16;
  uint32_t *v17;
  size_t v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  typedef uint32_t *_g4_t_v27;
  typedef void *_g4_t_v28;
  typedef void *_g4_t_v29;
  typedef void *_g4_t_v30;
  typedef void *_g4_t_v31;
  typedef void *_g4_t_v32;
  typedef size_t _g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef size_t _g4_t_v35;
  typedef void *_g4_t_s1;
  typedef void *_g4_t_v37;
  typedef size_t _g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef uint32_t *_g4_t_s2;
  typedef int _g4_t_v42[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v27)) > _g4_s0 ? (8u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v28)) > _g4_s1 ? (12u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v30)) > _g4_s3 ? (12u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v31)) > _g4_s4 ? (16u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v32)) > _g4_s5 ? (16u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v33)) > _g4_s6 ? (20u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v34)) > _g4_s7 ? (20u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v35)) > _g4_s8 ? (20u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_s1)) > _g4_s9 ? (24u + sizeof(_g4_t_s1)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v37)) > _g4_s10 ? (24u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v38)) > _g4_s11 ? (28u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v39)) > _g4_s12 ? (28u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v40)) > _g4_s13 ? (32u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_s2)) > _g4_s14 ? (36u + sizeof(_g4_t_s2)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v42)) > _g4_s15 ? (40u + sizeof(_g4_t_v42)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);

  v40 = a2 + 1;
  if ( a2 + 1 == (uint32_t *)a3 )
  {
    if ( a2[5] != 0 )
    {
      v34 = a2[4];
      v17 = *(uint32_t **)(v34 + 16);
      v37 = (void *)*(v17 - 3);
      v18 = (size_t)v37;
      v19 = *((uint32_t *)*a4 - 3);
      if ( v19 <= (unsigned int)(uintptr_t)(v37) )
        v18 = *((uint32_t *)*a4 - 3);
      v30 = *(void **)(v34 + 16);
      v32 = (void *)*a4;
      v39 = v18;
      v20 = memcmp(v17, *a4, v18);
      if ( v20 == 0 )
        v20 = (int)(uintptr_t)(v37) - v19;
      if ( v20 < 0 )
      {
        LOBYTE(v21) = 1;
        if ( v40 != (uint32_t *)v34 )
        {
          v22 = v19 - (uint32_t)(uintptr_t)(v37);
          v23 = memcmp(v32, v30, v39);
          if ( v23 == 0 )
            v23 = v22;
          v21 = v23 >> 31;
        }
        v24 = gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        if ( v24 != -16 )
        {
          g4_std::string::construct_copy(v24 + 16, a4);
          grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v24 + 20), (const grapher::PinInfo::Self *)(a4 + 1));
        }
LABEL_45:
        sub_1904970(v21, v24, v34, v40);
        ++a2[5];
        *a1 = v24;
        return a1;
      }
    }
LABEL_37:
    g4_std::Rb_tree_string_pair_string_const_72637e::M_insert_unique(
      (int)(uintptr_t)(v42),
      a2,
      a4);
    *a1 = v42[0];
    return a1;
  }
  s2 = *(uint32_t **)(a3 + 16);
  s1 = (void *)*a4;
  v4 = *((uint32_t *)*a4 - 3);
  n = v4;
  v28 = (void *)*(s2 - 3);
  if ( (unsigned int)(uintptr_t)(v28) <= v4 )
    n = *(s2 - 3);
  v33 = n;
  v6 = memcmp(s1, s2, n);
  if ( v6 == 0 )
    v6 = v4 - (uint32_t)(uintptr_t)(v28);
  if ( v6 >= 0 )
  {
    v13 = memcmp(s2, s1, v33);
    if ( v13 == 0 )
      v13 = (int)(uintptr_t)(v28) - v4;
    if ( v13 >= 0 )
    {
      *a1 = a3;
      return a1;
    }
    if ( a2[4] == a3 )
    {
      g4_std::Rb_tree_string_pair_string_const_72637e::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        a2[4],
        a4);
    }
    else
    {
      v35 = sub_19048E0(a3);
      v14 = v4;
      v31 = *(void **)(*(uint32_t *)(v35 + 16) - 12);
      if ( (unsigned int)(uintptr_t)(v31) <= v4 )
        v14 = *(uint32_t *)(*(uint32_t *)(v35 + 16) - 12);
      v15 = memcmp(s1, *(const void **)(v35 + 16), v14);
      v16 = v4 - (uint32_t)(uintptr_t)(v31);
      if ( v15 != 0 )
        v16 = v15;
      if ( v16 >= 0 )
        goto LABEL_37;
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        v11 = gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        if ( v11 != -16 )
        {
          g4_std::string::construct_copy(v11 + 16, a4);
          grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v11 + 20), (const grapher::PinInfo::Self *)(a4 + 1));
        }
        sub_1904970(1, v11, v35, v40);
        goto LABEL_17;
      }
      g4_std::Rb_tree_string_pair_string_const_72637e::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        a3,
        a4);
    }
  }
  else
  {
    v7 = a2[3];
    if ( v7 != a3 )
    {
      v8 = sub_1904940(a3);
      v9 = v4;
      v27 = *(uint32_t **)(v8 + 16);
      v34 = v8;
      v29 = (void *)*(v27 - 3);
      if ( (unsigned int)(uintptr_t)(v29) <= v4 )
        v9 = *(v27 - 3);
      v38 = v9;
      v10 = memcmp(v27, s1, v9);
      if ( v10 == 0 )
        v10 = (int)(uintptr_t)(v29) - v4;
      if ( v10 < 0 )
      {
        if ( *(uint32_t *)(v34 + 12) != 0 )
        {
          v11 = gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          if ( v11 != -16 )
          {
            g4_std::string::construct_copy(v11 + 16, a4);
            grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v11 + 20), (const grapher::PinInfo::Self *)(a4 + 1));
          }
          sub_1904970(1, v11, a3, v40);
LABEL_17:
          ++a2[5];
          *a1 = v11;
          return a1;
        }
        LOBYTE(v21) = 1;
        if ( v40 != (uint32_t *)v34 )
        {
          v25 = memcmp(s1, v27, v38);
          v26 = v4 - (uint32_t)(uintptr_t)(v29);
          if ( v25 == 0 )
            v25 = v26;
          v21 = v25 >> 31;
        }
        v24 = gll_operator_new(0x1Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        if ( v24 != -16 )
        {
          g4_std::string::construct_copy(v24 + 16, a4);
          grapher::PinInfo::Construct((grapher::PinInfo::Self *)(v24 + 20), (const grapher::PinInfo::Self *)(a4 + 1));
        }
        goto LABEL_45;
      }
      goto LABEL_37;
    }
    g4_std::Rb_tree_string_pair_string_const_72637e::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      v7,
      a2[3],
      a4);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_string_grapher_PinInfo_l_f79ad6::opIndex  (binary VA: 0x13bf430)
// Original: std::map<std::string,grapher::PinInfo,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::operator[]
// ----------------------------------------------------------------------------
int g4_std::map_string_grapher_PinInfo_l_f79ad6::opIndex(uint32_t *a1, void **a2)
{
  int v2;
  size_t v3;
  size_t v4;
  size_t v5;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  void *v11;
  uint32_t *v12;
  volatile int32_t *v13;
  void *v14;
  uint32_t *v15;
  typedef size_t _g4_t_n;
  typedef void **_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef void *_g4_t_s2;
  typedef int _g4_t_v23[4];
  typedef char _g4_t_v24[4];
  typedef void *_g4_t_v25;
  typedef volatile int32_t *_g4_t_v26;
  typedef char _g4_t_v27[4];
  typedef void *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_n)) > _g4_s0 ? (0u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v18)) > _g4_s1 ? (4u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v19)) > _g4_s2 ? (8u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v20)) > _g4_s3 ? (12u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v21)) > _g4_s4 ? (16u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_s2)) > _g4_s5 ? (20u + sizeof(_g4_t_s2)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v23)) > _g4_s6 ? (24u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v24)) > _g4_s7 ? (44u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v25)) > _g4_s8 ? (48u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v26)) > _g4_s9 ? (60u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v27)) > _g4_s10 ? (64u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v28)) > _g4_s11 ? (68u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v29)) > _g4_s12 ? (84u + sizeof(_g4_t_v29)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);

  v29 = (uint32_t *)(&a1);
  v20 = a1;
  v18 = a2;
  v19 = a1 + 1;
  v2 = a1[2];
  if ( v2 == 0 )
  {
    v21 = (int)(uintptr_t)(a1 + 1);
LABEL_16:
    grapher::PinInfo::Construct((grapher::PinInfo::Self *)v24);
    g4_std::string::construct_copy(&v26, v18);
    grapher::PinInfo::Construct((grapher::PinInfo::Self *)v27, (const grapher::PinInfo::Self *)v24);
    g4_std::Rb_tree_string_pair_string_const_72637e::M_insert_unique(
      v23,
      v20,
      v21,
      (const void **)&v26);
    v11 = v28;
    v21 = v23[0];
    if ( v28 != nullptr )
    {
      v12 = (uint32_t *)(*(uint32_t *)v28 - 12);
      if ( v12 != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v28 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      opDelete(v11);
    }
    v13 = v26 - 3;
    if ( v26 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v26 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy((void *)v13);
    v14 = v25;
    if ( v25 != nullptr )
    {
      v15 = (uint32_t *)(*(uint32_t *)v25 - 12);
      if ( v15 != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v25 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v15);
      }
      opDelete(v14);
    }
    return v21 + 20;
  }
  v21 = (int)(uintptr_t)(a1 + 1);
  s2 = *a2;
  v3 = *((uint32_t *)*a2 - 3);
  do
  {
    while ( 1 )
    {
      v4 = *(uint32_t *)(*(uint32_t *)(v2 + 16) - 12);
      v5 = v4;
      n = v3;
      if ( v3 <= v4 )
        v5 = v3;
      v6 = memcmp(*(const void **)(v2 + 16), s2, v5);
      v3 = n;
      v7 = v4 - n;
      if ( v6 == 0 )
        v6 = v7;
      if ( v6 < 0 )
        break;
      v21 = v2;
      v2 = *(uint32_t *)(v2 + 8);
      if ( v2 == 0 )
        goto LABEL_10;
    }
    v2 = *(uint32_t *)(v2 + 12);
  }
  while ( v2 != 0 );
LABEL_10:
  if ( v19 == (uint32_t *)v21 )
    goto LABEL_16;
  v8 = *(uint32_t *)(*(uint32_t *)(v21 + 16) - 12);
  v9 = v8;
  if ( n <= v8 )
    v9 = n;
  v10 = memcmp(s2, *(const void **)(v21 + 16), v9);
  if ( v10 == 0 )
    v10 = n - v8;
  if ( v10 < 0 )
    goto LABEL_16;
  return v21 + 20;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_insert  (binary VA: 0x13bf620)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_insert_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_insert(int *a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5;
  int v6;
  size_t v8;
  size_t n;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  size_t v14;

  LOBYTE(v5) = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
  {
    v8 = *(uint32_t *)(*(uint32_t *)a5 - 12);
    n = *(uint32_t *)(*(uint32_t *)(a4 + 16) - 12);
    v14 = n;
    if ( n > v8 )
      n = *(uint32_t *)(*(uint32_t *)a5 - 12);
    v10 = memcmp(*(const void **)a5, *(const void **)(a4 + 16), n);
    v11 = v8 - v14;
    if ( v10 != 0 )
      v11 = v10;
    v5 = v11 >> 31;
  }
  v6 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
  if ( v6 != -16 )
  {
    v12 = v6;
    g4_std::string::construct_copy(v6 + 16, a5);
    v6 = v12;
    *(uint32_t *)(v12 + 20) = *(uint32_t *)(a5 + 4);
  }
  v13 = v6;
  sub_1904970(v5, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_insert_unique  (binary VA: 0x13bf730)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_insert_unique
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_insert_unique(int a1, uint32_t *a2, void **a3)
{
  int v3;
  size_t v4;
  int v5;
  uint32_t *v6;
  size_t v7;
  size_t n;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  size_t v13;
  int v14;
  int v15;
  int v16;
  int v18;
  size_t v19;
  size_t v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  typedef size_t _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef char _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef void *_g4_t_s1;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v24)) > _g4_s0 ? (4u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v26)) > _g4_s2 ? (12u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v27)) > _g4_s3 ? (16u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v28)) > _g4_s4 ? (16u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_s1)) > _g4_s5 ? (20u + sizeof(_g4_t_s1)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v30)) > _g4_s6 ? (24u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v31)) > _g4_s7 ? (28u + sizeof(_g4_t_v31)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);

  v30 = a2 + 1;
  if ( a2[2] == 0 )
  {
    v11 = (int)(uintptr_t)(a2 + 1);
    goto LABEL_17;
  }
  v3 = a2[2];
  s1 = *a3;
  v4 = *((uint32_t *)*a3 - 3);
  while ( 1 )
  {
    v6 = *(uint32_t **)(v3 + 16);
    v7 = *(v6 - 3);
    n = v7;
    v25 = v3;
    if ( v4 <= v7 )
      n = v4;
    v24 = n;
    v9 = memcmp(s1, *(const void **)(v3 + 16), n);
    if ( v9 == 0 )
      v9 = v4 - v7;
    if ( v9 >= 0 )
      break;
    v5 = *(uint32_t *)(v25 + 8);
    v27 = 1;
    if ( v5 == 0 )
      goto LABEL_11;
LABEL_4:
    v3 = v5;
  }
  v5 = *(uint32_t *)(v25 + 12);
  v27 = 0;
  if ( v5 != 0 )
    goto LABEL_4;
LABEL_11:
  v10 = v6;
  v11 = v25;
  v12 = v10;
  v13 = v24;
  v14 = v25;
  if ( v27 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( v11 == a2[3] )
  {
    g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_insert(
      v31,
      (int)(uintptr_t)(a2),
      0,
      v11,
      (int)(uintptr_t)(a3));
    *(uint32_t *)a1 = v31[0];
    *(uint8_t *)(a1 + 4) = 1;
    return a1;
  }
  else
  {
    v18 = sub_19048F0(v11);
    v12 = *(uint32_t **)(v18 + 16);
    v14 = v18;
    v7 = *(v12 - 3);
    s1 = *a3;
    v4 = *((uint32_t *)*a3 - 3);
    v13 = v4;
    if ( v7 <= v4 )
      v13 = *(v12 - 3);
LABEL_12:
    v26 = v14;
    v15 = v7 - v4;
    v16 = memcmp(v12, s1, v13);
    if ( v16 != 0 )
      v15 = v16;
    if ( v15 < 0 )
    {
      LOBYTE(v28) = 1;
      if ( (uint32_t *)v11 != v30 )
      {
        v19 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
        v20 = v19;
        if ( v4 <= v19 )
          v20 = v4;
        v21 = v4 - v19;
        v22 = memcmp(s1, *(const void **)(v11 + 16), v20);
        if ( v22 == 0 )
          v22 = v21;
        v28 = v22 >> 31;
      }
      v23 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      if ( v23 != -16 )
      {
        g4_std::string::construct_copy(v23 + 16, a3);
        *(uint32_t *)(v23 + 20) = (uint32_t)(uintptr_t)(a3[1]);
      }
      sub_1904970(v28, v23, v11, v30);
      ++a2[5];
      *(uint32_t *)a1 = v23;
      *(uint8_t *)(a1 + 4) = 1;
      return a1;
    }
    else
    {
      *(uint32_t *)a1 = v26;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_insert_unique  (binary VA: 0x13bf950)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_insert_unique_
// ----------------------------------------------------------------------------
int * g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_insert_unique(int *a1, uint32_t *a2, int a3, int a4)
{
  size_t v4;
  size_t n;
  int v6;
  int v7;
  size_t v8;
  size_t v9;
  int v10;
  int v11;
  int v13;
  size_t v14;
  int v15;
  int v16;
  uint32_t *v17;
  size_t v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  typedef uint32_t *_g4_t_v27;
  typedef void *_g4_t_v28;
  typedef void *_g4_t_v29;
  typedef void *_g4_t_v30;
  typedef void *_g4_t_v31;
  typedef void *_g4_t_v32;
  typedef size_t _g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef size_t _g4_t_v35;
  typedef void *_g4_t_s1;
  typedef void *_g4_t_v37;
  typedef size_t _g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef uint32_t *_g4_t_s2;
  typedef int _g4_t_v42[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v27)) > _g4_s0 ? (8u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v28)) > _g4_s1 ? (12u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v29)) > _g4_s2 ? (12u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v30)) > _g4_s3 ? (12u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v31)) > _g4_s4 ? (16u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v32)) > _g4_s5 ? (16u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v33)) > _g4_s6 ? (20u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v34)) > _g4_s7 ? (20u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v35)) > _g4_s8 ? (20u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_s1)) > _g4_s9 ? (24u + sizeof(_g4_t_s1)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v37)) > _g4_s10 ? (24u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v38)) > _g4_s11 ? (28u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v39)) > _g4_s12 ? (28u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v40)) > _g4_s13 ? (32u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_s2)) > _g4_s14 ? (36u + sizeof(_g4_t_s2)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v42)) > _g4_s15 ? (40u + sizeof(_g4_t_v42)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);

  v40 = a2 + 1;
  if ( a2 + 1 == (uint32_t *)a3 )
  {
    if ( a2[5] != 0 )
    {
      v34 = a2[4];
      v17 = *(uint32_t **)(v34 + 16);
      v37 = (void *)*(v17 - 3);
      v18 = (size_t)v37;
      v19 = *(uint32_t *)(*(uint32_t *)a4 - 12);
      if ( v19 <= (unsigned int)(uintptr_t)(v37) )
        v18 = *(uint32_t *)(*(uint32_t *)a4 - 12);
      v30 = *(void **)(v34 + 16);
      v32 = *(void **)a4;
      v39 = v18;
      v20 = memcmp(v17, *(const void **)a4, v18);
      if ( v20 == 0 )
        v20 = (int)(uintptr_t)(v37) - v19;
      if ( v20 < 0 )
      {
        LOBYTE(v21) = 1;
        if ( v40 != (uint32_t *)v34 )
        {
          v22 = v19 - (uint32_t)(uintptr_t)(v37);
          v23 = memcmp(v32, v30, v39);
          if ( v23 == 0 )
            v23 = v22;
          v21 = v23 >> 31;
        }
        v24 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        if ( v24 != -16 )
        {
          g4_std::string::construct_copy(v24 + 16, a4);
          *(uint32_t *)(v24 + 20) = *(uint32_t *)(a4 + 4);
        }
LABEL_45:
        sub_1904970(v21, v24, v34, v40);
        ++a2[5];
        *a1 = v24;
        return a1;
      }
    }
LABEL_37:
    g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_insert_unique(
      (int)(uintptr_t)(v42),
      a2,
      (void **)a4);
    *a1 = v42[0];
    return a1;
  }
  s2 = *(uint32_t **)(a3 + 16);
  s1 = *(void **)a4;
  v4 = *(uint32_t *)(*(uint32_t *)a4 - 12);
  n = v4;
  v28 = (void *)*(s2 - 3);
  if ( (unsigned int)(uintptr_t)(v28) <= v4 )
    n = *(s2 - 3);
  v33 = n;
  v6 = memcmp(s1, s2, n);
  if ( v6 == 0 )
    v6 = v4 - (uint32_t)(uintptr_t)(v28);
  if ( v6 >= 0 )
  {
    v13 = memcmp(s2, s1, v33);
    if ( v13 == 0 )
      v13 = (int)(uintptr_t)(v28) - v4;
    if ( v13 >= 0 )
    {
      *a1 = a3;
      return a1;
    }
    if ( a2[4] == a3 )
    {
      g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        a2[4],
        a4);
    }
    else
    {
      v35 = sub_19048E0(a3);
      v14 = v4;
      v31 = *(void **)(*(uint32_t *)(v35 + 16) - 12);
      if ( (unsigned int)(uintptr_t)(v31) <= v4 )
        v14 = *(uint32_t *)(*(uint32_t *)(v35 + 16) - 12);
      v15 = memcmp(s1, *(const void **)(v35 + 16), v14);
      v16 = v4 - (uint32_t)(uintptr_t)(v31);
      if ( v15 != 0 )
        v16 = v15;
      if ( v16 >= 0 )
        goto LABEL_37;
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        v11 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        if ( v11 != -16 )
        {
          g4_std::string::construct_copy(v11 + 16, a4);
          *(uint32_t *)(v11 + 20) = *(uint32_t *)(a4 + 4);
        }
        sub_1904970(1, v11, v35, v40);
        goto LABEL_17;
      }
      g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_insert(
        a1,
        (int)(uintptr_t)(a2),
        0,
        a3,
        a4);
    }
  }
  else
  {
    v7 = a2[3];
    if ( v7 != a3 )
    {
      v8 = sub_1904940(a3);
      v9 = v4;
      v27 = *(uint32_t **)(v8 + 16);
      v34 = v8;
      v29 = (void *)*(v27 - 3);
      if ( (unsigned int)(uintptr_t)(v29) <= v4 )
        v9 = *(v27 - 3);
      v38 = v9;
      v10 = memcmp(v27, s1, v9);
      if ( v10 == 0 )
        v10 = (int)(uintptr_t)(v29) - v4;
      if ( v10 < 0 )
      {
        if ( *(uint32_t *)(v34 + 12) != 0 )
        {
          v11 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          if ( v11 != -16 )
          {
            g4_std::string::construct_copy(v11 + 16, a4);
            *(uint32_t *)(v11 + 20) = *(uint32_t *)(a4 + 4);
          }
          sub_1904970(1, v11, a3, v40);
LABEL_17:
          ++a2[5];
          *a1 = v11;
          return a1;
        }
        LOBYTE(v21) = 1;
        if ( v40 != (uint32_t *)v34 )
        {
          v25 = memcmp(s1, v27, v38);
          v26 = v4 - (uint32_t)(uintptr_t)(v29);
          if ( v25 == 0 )
            v25 = v26;
          v21 = v25 >> 31;
        }
        v24 = gll_operator_new(0x18u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        if ( v24 != -16 )
        {
          g4_std::string::construct_copy(v24 + 16, a4);
          *(uint32_t *)(v24 + 20) = *(uint32_t *)(a4 + 4);
        }
        goto LABEL_45;
      }
      goto LABEL_37;
    }
    g4_std::Rb_tree_string_pair_string_const_b7b5a6::M_insert(
      a1,
      (int)(uintptr_t)(a2),
      v7,
      a2[3],
      a4);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_13BFDE0  (binary VA: 0x13bfde0)
// Original: sub_13BFDE0
// ----------------------------------------------------------------------------
int sub_13BFDE0()
{
  dword_2119210 = (int)(uintptr_t)(&dword_213B814);
  return __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119210, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_void_pair_void_const_gra_635ee2::M_erase  (binary VA: 0x13c1220)
// Original: std::_Rb_tree<void *,std::pair<void * const,grapher::ActorContext::ICVar *>,std::_Select1st<std::pair<void * const,grapher::ActorContext::ICVar *>>,std::less<void *>,std::allocator<std::pair<void * const,grapher::ActorContext::ICVar *>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_void_pair_void_const_gra_635ee2::M_erase(int a1, uint32_t *a2)
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
                                      g4_std::Rb_tree_void_pair_void_const_gra_635ee2::M_erase(
                                        a1,
                                        *(void **)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      opDelete((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  opDelete(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              opDelete(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v25[2];
                          opDelete(v25);
                          if ( v13 == nullptr )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v24[2];
                      opDelete(v24);
                      if ( v14 == nullptr )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v23[2];
                  opDelete(v23);
                  if ( v15 == nullptr )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v22[2];
              opDelete(v22);
              if ( v16 == nullptr )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v21[2];
          opDelete(v21);
          if ( v17 == nullptr )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)a2[2];
      opDelete(a2);
      if ( v18 == nullptr )
        break;
      a2 = v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_grapher_ActorVariable_pa_d58c83::M_erase  (binary VA: 0x13c13d0)
// Original: std::_Rb_tree<grapher::ActorVariable *,std::pair<grapher::ActorVariable * const,grapher::ActorVariable *>,std::_Select1st<std::pair<grapher::ActorVariable * const,grapher::ActorVariable *>>,std::less<grapher::ActorVariable *>,std::allocator<std::pair<grapher::ActorVariable * const,grapher::ActorVariable *>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_grapher_ActorVariable_pa_d58c83::M_erase(int a1, uint32_t *a2)
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
                                      g4_std::Rb_tree_grapher_ActorVariable_pa_d58c83::M_erase(
                                        a1,
                                        *(void **)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      opDelete((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  opDelete(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              opDelete(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v25[2];
                          opDelete(v25);
                          if ( v13 == nullptr )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v24[2];
                      opDelete(v24);
                      if ( v14 == nullptr )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v23[2];
                  opDelete(v23);
                  if ( v15 == nullptr )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v22[2];
              opDelete(v22);
              if ( v16 == nullptr )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v21[2];
          opDelete(v21);
          if ( v17 == nullptr )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)a2[2];
      opDelete(a2);
      if ( v18 == nullptr )
        break;
      a2 = v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_13C1580  (binary VA: 0x13c1580)
// Original: sub_13C1580
// ----------------------------------------------------------------------------
uint32_t * sub_13C1580(uint32_t *a1, grapher::ActorVariable::Self *a2)
{
  int v3;
  int v4;
  int v6;
  int v7;
  uint32_t *v8;
  char *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  grapher::HolderT<int> *v15;
  char *v16;
  char *v17;
  void *v18;
  int v19;
  grapher::HolderT<int> *v20;
  typedef int _g4_t_v21;
  typedef grapher::ActorVariable::Self *_g4_t_v22;
  typedef grapher::ActorVariable::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef grapher::HolderT<int> *_g4_t_v28;
  typedef grapher::HolderT<int> *_g4_t_v29;
  typedef int _g4_t_v30[4];
  typedef const char *_g4_t_v31;
  typedef const char *_g4_t_v32[2];
  typedef int _g4_t_v33;
  typedef int _g4_t_v34[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v22)) > _g4_s1 ? (20u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v23)) > _g4_s2 ? (20u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v24)) > _g4_s3 ? (24u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v25)) > _g4_s4 ? (24u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v26)) > _g4_s5 ? (24u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v27)) > _g4_s6 ? (24u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v28)) > _g4_s7 ? (24u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v29)) > _g4_s8 ? (24u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v30)) > _g4_s9 ? (48u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v31)) > _g4_s10 ? (64u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v32)) > _g4_s11 ? (80u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v33)) > _g4_s12 ? (88u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v34)) > _g4_s13 ? (92u + sizeof(_g4_t_v34)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 88u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 92u);

  if ( byte_20D6700 == 0 )
  {
    v23 = a2;
    v19 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700);
    a2 = v23;
    if ( v19 != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
      a2 = v23;
    }
  }
  v22 = a2;
  grapher::ActorContext::LoadAVar((grapher::ActorContext::Self *)&unk_20D6720, a2);
  if ( *((uint32_t *)v22 + 2) == 12 )
  {
    v30[0] = (int)(uintptr_t)(&dword_213B814);
    v10 = *((uint32_t *)v22 + 1);
    if ( v10 != 0 )
      G4_VCALL<void>(v10, 32, v30);
    v11 = sub_1938090((int)(uintptr_t)(v30), "..", 0, 2u);
    if ( v11 == -1 )
    {
      v34[0] = 0;
      v20 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v20 = (uint32_t)(uintptr_t)(&off_205C508);
      v29 = v20;
      grapher::HolderT_int_id_fe4c74::From(v20, v34);
      *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
      G4_VCALL<void>(v29, 32, a1);
      G4_VCALL<void>(v29, 44);
    }
    else
    {
      v26 = v11;
      sub_193A6F0(&v31, v30, 0, v11);
      if ( (unsigned int)(v26 + 2) > *(uint32_t *)(v30[0] - 12) )
        sub_1900210("basic_string::substr");
      sub_193A6F0(v32, v30, v26 + 2, -1);
      v27 = atoi(v31);
      v12 = atoi(v32[0]);
      v13 = v27;
      v14 = v12;
      if ( v27 > v12 )
      {
        v14 = v27;
        v13 = v12;
      }
      v33 = lrand48() % (v14 - v13 + 1) + v13;
      v15 = (grapher::HolderT<int> *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 102);
      *(uint32_t *)v15 = (uint32_t)(uintptr_t)(&off_205C508);
      v28 = v15;
      grapher::HolderT_int_id_fe4c74::From(v15, &v33);
      *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
      G4_VCALL<void>(v28, 32, a1);
      G4_VCALL<void>(v28, 44);
      v16 = (char *)(v32[0] - 12);
      if ( (uint32_t *)v32[0] - 3 != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v32[0] - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v16);
      }
      v17 = (char *)(v31 - 12);
      if ( v31 - 12 != (const char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v31 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v17);
      }
    }
    v18 = (void *)(v30[0] - 12);
    if ( (uint32_t *)(v30[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
  }
  else if ( (uint8_t)grapher::IsGrapherModeOn((grapher::Self *)((char *)&loc_4 + 1), v21) != 0
         || *((uint32_t *)v22 + 2) != 11 )
  {
    v3 = *((uint32_t *)v22 + 1);
    v4 = 0;
    if ( v3 != 0 )
      v4 = (*(int (**)(uint32_t))(*(uint32_t *)v3 + 48))(*((uint32_t *)v22 + 1));
    *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
    if ( v4 != 0 )
    {
      G4_VCALL<void>(v4, 32, a1);
      G4_VCALL<void>(v4, 44);
    }
  }
  else
  {
    v6 = *((uint32_t *)v22 + 1);
    v7 = 0;
    if ( v6 != 0 )
      v7 = (*(int (**)(uint32_t))(*(uint32_t *)v6 + 48))(*((uint32_t *)v22 + 1));
    v32[0] = (const char *)&dword_213B814;
    if ( v7 != 0 )
    {
      v24 = v7;
      G4_VCALL<void>(v7, 32, v32);
      G4_VCALL<void>(v24, 44);
    }
    v8 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
    *v8 = (uint32_t)(uintptr_t)(&off_205C408);
    v8[1] = (uint32_t)(uintptr_t)(&dword_213B814);
    v25 = v8;
    grapher::HolderT_string_e830be::From(v8, v32);
    *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
    G4_VCALL<void>(v25, 32, a1);
    G4_VCALL<void>(v25, 44);
    v9 = (char *)(v32[0] - 12);
    if ( (uint32_t *)v32[0] - 3 != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v32[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_13C55F0  (binary VA: 0x13c55f0)
// Original: sub_13C55F0
// ----------------------------------------------------------------------------
int sub_13C55F0()
{
  sub_1900D70(&unk_2119274);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119274, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_13C5640  (binary VA: 0x13c5640)
// Original: sub_13C5640
// ----------------------------------------------------------------------------
void sub_13C5640(int a1, uint32_t *a2)
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
                                      sub_13C5640(a1, v9[3]);
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
// Function: sub_13C57F0  (binary VA: 0x13c57f0)
// Original: sub_13C57F0
// ----------------------------------------------------------------------------
void sub_13C57F0(int a1, uint32_t *a2)
{
  uint32_t *v2;
  int v3;
  uint32_t *v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  uint32_t *v22;
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;

  v37 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v32 = (uint32_t *)a2[3];
      if ( v32 != nullptr )
      {
        while ( 1 )
        {
          v33 = (uint32_t *)v32[3];
          if ( v33 != nullptr )
          {
            while ( 1 )
            {
              v34 = (uint32_t *)v33[3];
              if ( v34 != nullptr )
              {
                while ( 1 )
                {
                  v35 = (uint32_t *)v34[3];
                  if ( v35 != nullptr )
                  {
                    while ( 1 )
                    {
                      v36 = (uint32_t *)v35[3];
                      if ( v36 != nullptr )
                      {
                        while ( 1 )
                        {
                          v31 = (uint32_t *)v36[3];
                          if ( v31 != nullptr )
                          {
                            while ( 1 )
                            {
                              v30 = (uint32_t *)v31[3];
                              if ( v30 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v2 = (uint32_t *)v30[3];
                                  if ( v2 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      sub_13C57F0(a1, v2[3]);
                                      v3 = v2[5];
                                      v4 = (uint32_t *)v2[2];
                                      if ( (uint32_t *)(v3 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v3 - 12));
                                      }
                                      v5 = v2[4];
                                      if ( (uint32_t *)(v5 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v5 - 12));
                                      }
                                      opDelete(v2);
                                      if ( v4 == nullptr )
                                        break;
                                      v2 = v4;
                                    }
                                  }
                                  v6 = v30[5];
                                  v7 = (uint32_t *)v30[2];
                                  if ( (uint32_t *)(v6 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
                                  }
                                  v8 = v30[4];
                                  if ( (uint32_t *)(v8 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v8 - 12));
                                  }
                                  opDelete(v30);
                                  if ( v7 == nullptr )
                                    break;
                                  v30 = v7;
                                }
                              }
                              v9 = v31[5];
                              v10 = (uint32_t *)v31[2];
                              if ( (uint32_t *)(v9 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v9 - 12));
                              }
                              v11 = v31[4];
                              if ( (uint32_t *)(v11 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v11 - 12));
                              }
                              opDelete(v31);
                              if ( v10 == nullptr )
                                break;
                              v31 = v10;
                            }
                          }
                          v12 = v36[5];
                          v13 = (uint32_t *)v36[2];
                          if ( (uint32_t *)(v12 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v12 - 12));
                          }
                          v14 = v36[4];
                          if ( (uint32_t *)(v14 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v14 - 12));
                          }
                          opDelete(v36);
                          if ( v13 == nullptr )
                            break;
                          v36 = v13;
                        }
                      }
                      v15 = v35[5];
                      v16 = (uint32_t *)v35[2];
                      if ( (uint32_t *)(v15 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v15 - 12));
                      }
                      v17 = v35[4];
                      if ( (uint32_t *)(v17 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v17 - 12));
                      }
                      opDelete(v35);
                      if ( v16 == nullptr )
                        break;
                      v35 = v16;
                    }
                  }
                  v18 = v34[5];
                  v19 = (uint32_t *)v34[2];
                  if ( (uint32_t *)(v18 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v18 - 12));
                  }
                  v20 = v34[4];
                  if ( (uint32_t *)(v20 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v20 - 12));
                  }
                  opDelete(v34);
                  if ( v19 == nullptr )
                    break;
                  v34 = v19;
                }
              }
              v21 = v33[5];
              v22 = (uint32_t *)v33[2];
              if ( (uint32_t *)(v21 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v21 - 12));
              }
              v23 = v33[4];
              if ( (uint32_t *)(v23 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v23 - 12));
              }
              opDelete(v33);
              if ( v22 == nullptr )
                break;
              v33 = v22;
            }
          }
          v24 = v32[5];
          v25 = (uint32_t *)v32[2];
          if ( (uint32_t *)(v24 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v24 - 12));
          }
          v26 = v32[4];
          if ( (uint32_t *)(v26 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v26 - 12));
          }
          opDelete(v32);
          if ( v25 == nullptr )
            break;
          v32 = v25;
        }
      }
      v27 = v37[5];
      v28 = (uint32_t *)v37[2];
      if ( (uint32_t *)(v27 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v27 - 12));
      }
      v29 = v37[4];
      if ( (uint32_t *)(v29 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v29 - 12));
      }
      opDelete(v37);
      if ( v28 == nullptr )
        break;
      v37 = v28;
      a2 = v28;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_13C5D90  (binary VA: 0x13c5d90)
// Original: sub_13C5D90
// ----------------------------------------------------------------------------
int sub_13C5D90(int *a1, uint32_t *a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int i;
  int v12;
  int result;
  void *v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v22;
  int v23;
  uint32_t *v24;
  int v25;
  int v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int *_g4_t_v39;
  typedef uint32_t _g4_t_v40[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v30)) > _g4_s0 ? (12u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v31)) > _g4_s1 ? (12u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v32)) > _g4_s2 ? (12u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v33)) > _g4_s3 ? (16u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v34)) > _g4_s4 ? (16u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v35)) > _g4_s5 ? (16u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v36)) > _g4_s6 ? (16u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v37)) > _g4_s7 ? (20u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v38)) > _g4_s8 ? (24u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v39)) > _g4_s9 ? (28u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v40)) > _g4_s10 ? (44u + sizeof(_g4_t_v40)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 24u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);

  v3 = a2;
  v4 = a2;
  v5 = a1;
  v6 = a1[1];
  if ( v6 != a1[2] )
  {
    v7 = 0;
    if ( v6 != 0 )
    {
      g4_std::string::construct_copy(v6, v6 - 4);
      v7 = v5[1];
    }
    v5[1] = v7 + 4;
    g4_std::string::construct_copy(v40, a3);
    v8 = v5[1];
    v9 = (v8 - 8 - (int)(uintptr_t)(v3)) >> 2;
    if ( v9 > 0 )
    {
      v33 = v3;
      v10 = v8 - 4;
      for ( i = v9; i != 0; --i )
      {
        v12 = v10 - 8;
        v10 -= 4;
        g4_std::string::assign_str(v10, v12);
      }
      v3 = v33;
    }
    g4_std::string::assign_str(v3, v40);
    result = v40[0];
    v14 = (void *)(v40[0] - 12);
    if ( (uint32_t *)(v40[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v14)), (int)0);
    }
    return result;
  }
  v15 = *a1;
  v16 = (v6 - v15) >> 2;
  if ( v16 != 0 )
  {
    v17 = 2 * v16;
    if ( v16 > 2 * v16 || v17 > 0x3FFFFFFF )
    {
      v38 = -4;
      v18 = ((int)(uintptr_t)(v3) - v15) >> 2;
    }
    else
    {
      v38 = 8 * v16;
      v18 = ((int)(uintptr_t)(v3) - v15) >> 2;
      if ( v17 == 0 )
      {
        v19 = 4;
        v37 = 0;
        goto LABEL_14;
      }
    }
  }
  else
  {
    v38 = 4;
    v18 = ((int)(uintptr_t)(v3) - v15) >> 2;
  }
  v30 = v18;
  v37 = opNew(v38);
  v18 = v30;
  v19 = v37 + 4;
LABEL_14:
  v20 = v37 + 4 * v18;
  if ( v20 != 0 )
  {
    v31 = v19;
    g4_std::string::construct_copy(v20, a3);
    v19 = v31;
  }
  if ( v3 != (uint32_t *)*v5 )
  {
    v34 = v4;
    v39 = v5;
    v21 = v37;
    v22 = (uint32_t *)*v5;
    do
    {
      if ( v21 != 0 )
        g4_std::string::construct_copy(v21, v22);
      ++v22;
      v21 += 4;
    }
    while ( v3 != v22 );
    v23 = v21;
    v5 = v39;
    v4 = v34;
    v19 = v23 + 4;
  }
  v24 = (uint32_t *)v5[1];
  if ( v3 != v24 )
  {
    v35 = v5;
    v25 = v19;
    v26 = v5[1];
    do
    {
      if ( v25 != 0 )
        g4_std::string::construct_copy(v25, v4);
      ++v4;
      v25 += 4;
    }
    while ( (uint32_t *)v26 != v4 );
    v5 = v35;
    v19 = v25;
    v24 = (uint32_t *)v35[1];
  }
  v27 = (uint32_t *)*v5;
  if ( v24 != (uint32_t *)*v5 )
  {
    v36 = v19;
    v28 = v24;
    do
    {
      v29 = (uint32_t *)(*v27 - 12);
      if ( v29 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v27 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v29);
      ++v27;
    }
    while ( v28 != v27 );
    v19 = v36;
    v27 = (uint32_t *)*v5;
  }
  if ( v27 != nullptr )
  {
    v32 = v19;
    opDelete(v27);
    v19 = v32;
  }
  v5[1] = v19;
  *v5 = v37;
  v5[2] = v37 + v38;
  return v37 + v38;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_ec3052::M_erase  (binary VA: 0x13cbe40)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,grapher::ActorBase * (*)(unsigned int,std::string,pugi::xml_node)>,std::_Select1st<std::pair<std::string const,grapher::ActorBase * (*)(unsigned int,std::string,pugi::xml_node)>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::ActorBase * (*)(unsigned int,std::string,pugi::xml_node)>>>::_M_erase
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_string_pair_string_const_ec3052::M_erase(int a1, int a2)
{
  int result;
  int i;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  int v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  int v21;
  int v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;

  result = a2;
  if ( a2 != 0 )
  {
    for ( i = a2; ; i = v22 )
    {
      v25 = *(uint32_t **)(i + 12);
      if ( v25 != nullptr )
      {
        while ( 1 )
        {
          v26 = (uint32_t *)v25[3];
          if ( v26 != nullptr )
          {
            while ( 1 )
            {
              v27 = (uint32_t *)v26[3];
              if ( v27 != nullptr )
              {
                while ( 1 )
                {
                  v28 = (uint32_t *)v27[3];
                  if ( v28 != nullptr )
                  {
                    while ( 1 )
                    {
                      v29 = (uint32_t *)v28[3];
                      if ( v29 != nullptr )
                      {
                        while ( 1 )
                        {
                          v24 = (uint32_t *)v29[3];
                          if ( v24 != nullptr )
                          {
                            while ( 1 )
                            {
                              v23 = (uint32_t *)v24[3];
                              if ( v23 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v4 = (uint32_t *)v23[3];
                                  if ( v4 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_string_pair_string_const_ec3052::M_erase(
                                        a1,
                                        v4[3]);
                                      v5 = v4[4];
                                      v6 = (uint32_t *)v4[2];
                                      if ( (uint32_t *)(v5 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v5 - 12));
                                      }
                                      sub_4EB800((int)(uintptr_t)(v4));
                                      if ( v6 == nullptr )
                                        break;
                                      v4 = v6;
                                    }
                                  }
                                  v7 = v23[4];
                                  v8 = (uint32_t *)v23[2];
                                  if ( (uint32_t *)(v7 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
                                  }
                                  sub_4EB800((int)(uintptr_t)(v23));
                                  if ( v8 == nullptr )
                                    break;
                                  v23 = v8;
                                }
                              }
                              v9 = v24[4];
                              v10 = (uint32_t *)v24[2];
                              if ( (uint32_t *)(v9 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v9 - 12));
                              }
                              sub_4EB800((int)(uintptr_t)(v24));
                              if ( v10 == nullptr )
                                break;
                              v24 = v10;
                            }
                          }
                          v11 = v29[4];
                          v12 = (uint32_t *)v29[2];
                          if ( (uint32_t *)(v11 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v11 - 12));
                          }
                          sub_4EB800((int)(uintptr_t)(v29));
                          if ( v12 == nullptr )
                            break;
                          v29 = v12;
                        }
                      }
                      v13 = v28[4];
                      v14 = (uint32_t *)v28[2];
                      if ( (uint32_t *)(v13 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v13 - 12));
                      }
                      sub_4EB800((int)(uintptr_t)(v28));
                      if ( v14 == nullptr )
                        break;
                      v28 = v14;
                    }
                  }
                  v17 = v27[4];
                  v18 = (uint32_t *)v27[2];
                  if ( (uint32_t *)(v17 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v17 - 12));
                  }
                  sub_4EB800((int)(uintptr_t)(v27));
                  if ( v18 == nullptr )
                    break;
                  v27 = v18;
                }
              }
              v19 = v26[4];
              v20 = (uint32_t *)v26[2];
              if ( (uint32_t *)(v19 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v19 - 12));
              }
              sub_4EB800((int)(uintptr_t)(v26));
              if ( v20 == nullptr )
                break;
              v26 = v20;
            }
          }
          v15 = v25[4];
          v16 = (uint32_t *)v25[2];
          if ( (uint32_t *)(v15 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v15 - 12));
          }
          sub_4EB800((int)(uintptr_t)(v25));
          if ( v16 == nullptr )
            break;
          v25 = v16;
        }
      }
      v21 = *(uint32_t *)(a2 + 16);
      v22 = *(uint32_t *)(a2 + 8);
      if ( (uint32_t *)(v21 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v21 - 12));
      }
      result = sub_4EB800(a2);
      if ( v22 == 0 )
        break;
      a2 = v22;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_grapher_ContextualActor_8c72b1::M_erase  (binary VA: 0x13cc220)
// Original: std::_Rb_tree<grapher::ContextualActor,std::pair<grapher::ContextualActor const,grapher::ActorBase *>,std::_Select1st<std::pair<grapher::ContextualActor const,grapher::ActorBase *>>,std::less<grapher::ContextualActor>,grapher::allocator<std::pair<grapher::ContextualActor const,grapher::ActorBase *>>>::_M_erase
// ----------------------------------------------------------------------------
int g4_std::Rb_tree_grapher_ContextualActor_8c72b1::M_erase(int a1, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
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
  int v24;
  int v25;
  int v26;

  result = a2;
  if ( a2 != 0 )
  {
    while ( 1 )
    {
      v3 = *(uint32_t *)(a2 + 12);
      v22 = v3;
      if ( v3 != 0 )
      {
        while ( 1 )
        {
          v4 = *(uint32_t *)(v3 + 12);
          v23 = v4;
          if ( v4 != 0 )
          {
            while ( 1 )
            {
              v5 = *(uint32_t *)(v4 + 12);
              v24 = v5;
              if ( v5 != 0 )
              {
                while ( 1 )
                {
                  v6 = *(uint32_t *)(v5 + 12);
                  v25 = v6;
                  if ( v6 != 0 )
                  {
                    while ( 1 )
                    {
                      v7 = *(uint32_t *)(v6 + 12);
                      v26 = v7;
                      if ( v7 != 0 )
                      {
                        while ( 1 )
                        {
                          v8 = *(uint32_t *)(v7 + 12);
                          v21 = v8;
                          if ( v8 != 0 )
                          {
                            while ( 1 )
                            {
                              v9 = *(uint32_t *)(v8 + 12);
                              v20 = v9;
                              if ( v9 != 0 )
                              {
                                while ( 1 )
                                {
                                  v10 = *(uint32_t *)(v9 + 12);
                                  if ( v10 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_grapher_ContextualActor_8c72b1::M_erase(
                                        a1,
                                        *(uint32_t *)(v10 + 12));
                                      v11 = *(uint32_t *)(v10 + 8);
                                      sub_4EB800(v10);
                                      if ( v11 == 0 )
                                        break;
                                      v10 = v11;
                                    }
                                  }
                                  v12 = *(uint32_t *)(v20 + 8);
                                  sub_4EB800(v20);
                                  if ( v12 == 0 )
                                    break;
                                  v20 = v12;
                                  v9 = v12;
                                }
                              }
                              v13 = *(uint32_t *)(v21 + 8);
                              sub_4EB800(v21);
                              if ( v13 == 0 )
                                break;
                              v21 = v13;
                              v8 = v13;
                            }
                          }
                          v14 = *(uint32_t *)(v26 + 8);
                          sub_4EB800(v26);
                          if ( v14 == 0 )
                            break;
                          v26 = v14;
                          v7 = v14;
                        }
                      }
                      v15 = *(uint32_t *)(v25 + 8);
                      sub_4EB800(v25);
                      if ( v15 == 0 )
                        break;
                      v25 = v15;
                      v6 = v15;
                    }
                  }
                  v16 = *(uint32_t *)(v24 + 8);
                  sub_4EB800(v24);
                  if ( v16 == 0 )
                    break;
                  v24 = v16;
                  v5 = v16;
                }
              }
              v17 = *(uint32_t *)(v23 + 8);
              sub_4EB800(v23);
              if ( v17 == 0 )
                break;
              v23 = v17;
              v4 = v17;
            }
          }
          v18 = *(uint32_t *)(v22 + 8);
          sub_4EB800(v22);
          if ( v18 == 0 )
            break;
          v22 = v18;
          v3 = v18;
        }
      }
      v19 = *(uint32_t *)(a2 + 8);
      result = sub_4EB800(a2);
      if ( v19 == 0 )
        break;
      a2 = v19;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_unsigned_int_pair_unsign_a40f74::M_erase  (binary VA: 0x13cc3d0)
// Original: std::_Rb_tree<unsigned int,std::pair<unsigned int const,grapher::ManualEventActor>,std::_Select1st<std::pair<unsigned int const,grapher::ManualEventActor>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,grapher::ManualEventActor>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_unsigned_int_pair_unsign_a40f74::M_erase(int a1, uint32_t *a2)
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
                                      g4_std::Rb_tree_unsigned_int_pair_unsign_a40f74::M_erase(
                                        a1,
                                        (uint32_t *)(*(void **)(v9 + 12)));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      opDelete((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  opDelete(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              opDelete(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v25[2];
                          opDelete(v25);
                          if ( v13 == nullptr )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v24[2];
                      opDelete(v24);
                      if ( v14 == nullptr )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v23[2];
                  opDelete(v23);
                  if ( v15 == nullptr )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v22[2];
              opDelete(v22);
              if ( v16 == nullptr )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v21[2];
          opDelete(v21);
          if ( v17 == nullptr )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)a2[2];
      opDelete(a2);
      if ( v18 == nullptr )
        break;
      a2 = v18;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_13CC580  (binary VA: 0x13cc580)
// Original: sub_13CC580
// ----------------------------------------------------------------------------
int sub_13CC580()
{
  sub_1900D70(&unk_2119680);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119680, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_13CD0B0  (binary VA: 0x13cd0b0)
// Original: sub_13CD0B0
// ----------------------------------------------------------------------------
int sub_13CD0B0()
{
  int *v0;
  int result;
  uint32_t *v2;

  v0 = (int *)&unk_211972C;
  do
  {
    result = *v0;
    v2 = (uint32_t *)(*v0 - 12);
    if ( v2 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(result - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v2);
    v0 -= 2;
  }
  while ( v0 != (int *)((char *)&grapher::variableTypeTable - 4) );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_13CFA10  (binary VA: 0x13cfa10)
// Original: sub_13CFA10
// ----------------------------------------------------------------------------
int sub_13CFA10()
{
  typedef int _g4_t_v1;
  typedef int _g4_t_v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (2u + sizeof(_g4_t_v1)) > _g4_s0 ? (2u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v2)) > _g4_s1 ? (4u + sizeof(_g4_t_v2)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v3)) > _g4_s2 ? (8u + sizeof(_g4_t_v3)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v4)) > _g4_s3 ? (12u + sizeof(_g4_t_v4)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 2u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 4u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  dword_2119730 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2119730, &unk_20D1280);
  grapher::variableTypeTable[0] = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&grapher::variableTypeTable[1]), "bool", (int)(uintptr_t)(&v4) + 3);
  grapher::variableTypeTable[2] = 1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&grapher::variableTypeTable[3]), "int", (int)(uintptr_t)(&v4) + 2);
  grapher::variableTypeTable[4] = 2;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&grapher::variableTypeTable[5]), "float", (int)(uintptr_t)(&v4) + 1);
  grapher::variableTypeTable[6] = 3;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&grapher::variableTypeTable[7]), "double", (int)(uintptr_t)(&v4));
  grapher::variableTypeTable[8] = 4;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&grapher::variableTypeTable[9]), "string", (int)(uintptr_t)(&v3) + 3);
  grapher::variableTypeTable[10] = 5;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&grapher::variableTypeTable[11]), "stringlist", (int)(uintptr_t)(&v3) + 2);
  grapher::variableTypeTable[12] = 6;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&grapher::variableTypeTable[13]), "vector2d", (int)(uintptr_t)(&v3) + 1);
  grapher::variableTypeTable[14] = 7;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&grapher::variableTypeTable[15]), "vector3d", (int)(uintptr_t)(&v3));
  grapher::variableTypeTable[16] = 9;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&grapher::variableTypeTable[17]), "gameobject", (int)(uintptr_t)(&v2) + 3);
  grapher::variableTypeTable[18] = 9;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&grapher::variableTypeTable[19]), "object", (int)(uintptr_t)(&v2) + 2);
  grapher::variableTypeTable[20] = 8;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&grapher::variableTypeTable[21]), "color", (int)(uintptr_t)(&v2) + 1);
  grapher::variableTypeTable[22] = 10;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&grapher::variableTypeTable[23]), "undefine", (int)(uintptr_t)(&v2));
  grapher::variableTypeTable[24] = 11;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&grapher::variableTypeTable[25]), "constant", (int)(uintptr_t)(&v1) + 1);
  grapher::variableTypeTable[26] = 12;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_211972C), "irandom", (int)(uintptr_t)(&v1));
  return __cxa_atexit((void (*)(void *))sub_13CD0B0, nullptr, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_13D0190  (binary VA: 0x13d0190)
// Original: sub_13D0190
// ----------------------------------------------------------------------------
char * sub_13D0190(char *a1, int a2, int a3, int a4)
{
  uint32_t *v4;
  int v6;
  int v7;
  char *v8;
  int v9;
  const char *v11;
  int v12;
  char v13;
  const char *v14;
  int v15;
  int v16;
  char v17;
  const char *v18;
  const char *v19;
  const char *v20;
  int v21;
  int v22;
  char *v23;
  char *v24;
  char v25;
  const char *v26;
  unsigned int v27;
  char v28;
  unsigned int v29;
  int v30;
  char *v31;
  const char *v32;
  int v33;
  int v34;
  char s1;
  char *s2;
  char *v37;
  char *v38;
  char *v39;
  char *v40;
  char v41;
  char *v42;
  char *v43;
  char *v44;
  char *v45;
  char *v46;
  char *v47;
  char *v48;
  char *v49;
  char *v50;
  uint32_t *v51;
  char *v52;
  int v53;
  char v54;
  char v55;
  char *v56;
  char *v57;
  char *v58;
  char v59;
  char *v60;
  char *v61;
  char *v62;
  char *v63;
  char *v64;
  char *v65;
  char *v66;
  char *v67;
  char *v68;
  char v69;

  v4 = (uint32_t *)a2;
  v6 = a3;
  v60 = (char *)(a2 + 4);
  if ( a3 != a2 + 4 )
  {
    v39 = *(char **)(a3 + 16);
    v56 = *(char **)a4;
    if ( strcmp(*(const char **)a4, v39) < 0 )
    {
      v61 = (char *)v4[3];
      if ( (char *)a3 == v61 )
      {
LABEL_6:
        v9 = opNew(0x18u);
        if ( v9 != -16 )
        {
          v44 = (char *)v9;
          g4_std::string::construct_copy(v9 + 16, a4);
          v9 = (int)(uintptr_t)(v44);
          *((uint32_t *)v44 + 5) = *(uint32_t *)(a4 + 4);
        }
        v37 = (char *)a3;
        v38 = v60;
        s2 = (char *)v9;
        s1 = 1;
        goto LABEL_9;
      }
      v40 = (char *)sub_1904940(a3);
      v43 = *((char **)v40 + 4);
      v7 = strcmp(v43, v56);
      v8 = v40;
      if ( v7 < 0 )
      {
        if ( *((uint32_t *)v40 + 3) == 0 )
        {
          LOBYTE(v67) = 1;
          if ( v60 != v40 )
          {
            v29 = strcmp(v56, v43);
            v8 = v40;
            v67 = (char *)(v29 >> 31);
          }
          v42 = v8;
          v30 = opNew(0x18u);
          v31 = v42;
          if ( v30 != -16 )
          {
            g4_std::string::construct_copy(v30 + 16, a4);
            *(uint32_t *)(v30 + 20) = *(uint32_t *)(a4 + 4);
            v31 = v42;
          }
          sub_1904970((char)(uintptr_t)(v67), v30, v31, v60);
          ++v4[5];
          *(uint32_t *)a1 = v30;
          return a1;
        }
        goto LABEL_6;
      }
      v15 = v4[2];
      if ( v15 != 0 )
      {
        v52 = a1;
        while ( 1 )
        {
          v18 = *(const char **)(v15 + 16);
          if ( strcmp(v56, v18) < 0 )
          {
            v16 = *(uint32_t *)(v15 + 8);
            v17 = 1;
          }
          else
          {
            v16 = *(uint32_t *)(v15 + 12);
            v17 = 0;
          }
          if ( v16 == 0 )
            break;
          v15 = v16;
        }
        v19 = v18;
        a1 = v52;
        v53 = v15;
        if ( v17 == 0 )
          goto LABEL_37;
      }
      else
      {
        v15 = (int)(uintptr_t)(v60);
      }
      if ( v61 == (char *)v15 )
      {
        v69 = 1;
        if ( v60 != (char *)v15 )
          v69 = strcmp(v56, *(const char **)(v15 + 16)) < 0;
        v53 = opNew(0x18u);
        if ( v53 != -16 )
        {
          g4_std::string::construct_copy(v53 + 16, a4);
          *(uint32_t *)(v53 + 20) = *(uint32_t *)(a4 + 4);
        }
        goto LABEL_85;
      }
      v53 = sub_19048F0(v15);
      v19 = *(const char **)(v53 + 16);
LABEL_37:
      if ( strcmp(v19, v56) >= 0 )
      {
LABEL_38:
        *(uint32_t *)a1 = v53;
        return a1;
      }
      v69 = 1;
      if ( v60 != (char *)v15 )
        v69 = strcmp(v56, *(const char **)(v15 + 16)) < 0;
      v53 = opNew(0x18u);
      if ( v53 != -16 )
      {
        g4_std::string::construct_copy(v53 + 16, a4);
        *(uint32_t *)(v53 + 20) = *(uint32_t *)(a4 + 4);
      }
LABEL_85:
      sub_1904970(v69, v53, v15, v60);
      ++v4[5];
      goto LABEL_38;
    }
    if ( strcmp(v39, v56) >= 0 )
      goto LABEL_18;
    if ( a3 == v4[4] )
    {
      v9 = opNew(0x18u);
      v33 = v9 + 16;
      if ( v9 == -16 )
        goto LABEL_75;
      goto LABEL_74;
    }
    v62 = (char *)sub_19048E0(a3);
    if ( strcmp(v56, *((const char **)v62 + 4)) < 0 )
    {
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        v6 = opNew(0x18u);
        if ( v6 != -16 )
        {
          g4_std::string::construct_copy(v6 + 16, a4);
          *(uint32_t *)(v6 + 20) = *(uint32_t *)(a4 + 4);
        }
        sub_1904970(1, v6, v62, v60);
        ++v4[5];
        goto LABEL_18;
      }
      v9 = opNew(0x18u);
      v33 = v9 + 16;
      if ( v9 == -16 )
      {
LABEL_75:
        v37 = (char *)a3;
        v38 = v60;
        s2 = (char *)v9;
        s1 = 0;
LABEL_9:
        v45 = (char *)v9;
        sub_1904970(s1, s2, v37, v38);
        ++v4[5];
        *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v45);
        return a1;
      }
LABEL_74:
      v48 = (char *)v9;
      g4_std::string::construct_copy(v33, a4);
      v9 = (int)(uintptr_t)(v48);
      *((uint32_t *)v48 + 5) = *(uint32_t *)(a4 + 4);
      goto LABEL_75;
    }
    v23 = (char *)v4[2];
    if ( v23 != nullptr )
    {
      v66 = a1;
      while ( 1 )
      {
        v26 = *((const char **)v23 + 4);
        if ( strcmp(v56, v26) < 0 )
        {
          v24 = *((char **)v23 + 2);
          v25 = 1;
        }
        else
        {
          v24 = *((char **)v23 + 3);
          v25 = 0;
        }
        if ( v24 == nullptr )
          break;
        v23 = v24;
      }
      v32 = v26;
      a1 = v66;
      v68 = v23;
      if ( v25 == 0 )
        goto LABEL_71;
    }
    else
    {
      v23 = v60;
    }
    if ( (char *)v4[3] != v23 )
    {
      v68 = (char *)sub_19048F0(v23);
      v32 = *((const char **)v68 + 4);
LABEL_71:
      if ( strcmp(v32, v56) >= 0 )
      {
LABEL_72:
        *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v68);
        return a1;
      }
    }
    v55 = 1;
    if ( v60 != v23 )
      v55 = strcmp(v56, *((const char **)v23 + 4)) < 0;
    v68 = (char *)opNew(0x18u);
    if ( v68 != (char *)-16 )
    {
      g4_std::string::construct_copy(v68 + 16, a4);
      *((uint32_t *)v68 + 5) = *(uint32_t *)(a4 + 4);
    }
    sub_1904970(v55, v68, v23, v60);
    ++v4[5];
    goto LABEL_72;
  }
  if ( *(uint32_t *)(a2 + 20) != 0 )
  {
    v57 = *(char **)(a2 + 16);
    v63 = *(char **)a4;
    v46 = *((char **)v57 + 4);
    if ( strcmp(v46, *(const char **)a4) < 0 )
    {
      LOBYTE(v27) = 1;
      if ( (char *)a3 != v57 )
        v27 = (unsigned int)strcmp(v63, v46) >> 31;
      v41 = v27;
      v9 = opNew(0x18u);
      v28 = v41;
      if ( v9 != -16 )
      {
        v47 = (char *)v9;
        g4_std::string::construct_copy(v9 + 16, a4);
        v9 = (int)(uintptr_t)(v47);
        *((uint32_t *)v47 + 5) = *(uint32_t *)(a4 + 4);
        v28 = v41;
      }
      v38 = (char *)a3;
      v37 = v57;
      s2 = (char *)v9;
      s1 = v28;
      goto LABEL_9;
    }
  }
  v6 = v4[2];
  if ( v6 != 0 )
  {
    v51 = v4;
    v64 = a1;
    v58 = *(char **)a4;
    v11 = *(const char **)a4;
    while ( 1 )
    {
      v14 = *(const char **)(v6 + 16);
      if ( strcmp(v11, v14) < 0 )
      {
        v12 = *(uint32_t *)(v6 + 8);
        v13 = 1;
      }
      else
      {
        v12 = *(uint32_t *)(v6 + 12);
        v13 = 0;
      }
      if ( v12 == 0 )
        break;
      v6 = v12;
    }
    v20 = v14;
    v4 = v51;
    a1 = v64;
    v65 = (char *)v6;
    if ( v13 == 0 )
    {
      v21 = strcmp(v20, v58);
      goto LABEL_41;
    }
  }
  else
  {
    v6 = (int)(uintptr_t)(v60);
  }
  if ( v4[3] == v6 )
  {
    v59 = 1;
    if ( v60 != (char *)v6 )
      v59 = strcmp(*(const char **)a4, *(const char **)(v6 + 16)) < 0;
    v34 = opNew(0x18u);
    if ( v34 != -16 )
    {
      v49 = (char *)v34;
      g4_std::string::construct_copy(v34 + 16, a4);
      v34 = (int)(uintptr_t)(v49);
      *((uint32_t *)v49 + 5) = *(uint32_t *)(a4 + 4);
    }
    v50 = (char *)v34;
    sub_1904970(v59, v34, v6, v60);
    ++v4[5];
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v50);
    return a1;
  }
  v65 = (char *)v6;
  v6 = sub_19048F0(v6);
  v58 = *(char **)a4;
  v21 = strcmp(*(const char **)(v6 + 16), *(const char **)a4);
LABEL_41:
  if ( v21 < 0 )
  {
    v54 = 1;
    if ( v60 != v65 )
      v54 = strcmp(v58, *((const char **)v65 + 4)) < 0;
    v22 = opNew(0x18u);
    if ( v22 != -16 )
    {
      g4_std::string::construct_copy(v22 + 16, a4);
      *(uint32_t *)(v22 + 20) = *(uint32_t *)(a4 + 4);
    }
    sub_1904970(v54, v22, v65, v60);
    ++v4[5];
    *(uint32_t *)a1 = v22;
    return a1;
  }
LABEL_18:
  *(uint32_t *)a1 = v6;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_13D0E80  (binary VA: 0x13d0e80)
// Original: sub_13D0E80
// ----------------------------------------------------------------------------
int sub_13D0E80(int a1, uint32_t *a2, int a3)
{
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  const char *s1;
  uint32_t *v7;
  char v8;
  const char *s2;
  int v10;
  uint32_t *v12;
  int v13;
  int v14;
  int i;
  unsigned int v16;
  uint32_t *v17;
  int v18;
  int v19;
  int j;
  uint32_t *v23;
  char *v24;
  char *v25;
  uint32_t *v26;

  v3 = a1;
  v4 = (uint32_t *)a2[2];
  v5 = a2 + 1;
  v26 = v5;
  if ( v4 == nullptr )
  {
    v4 = v5;
    goto LABEL_13;
  }
  v24 = *(char **)a3;
  s1 = *(const char **)a3;
  while ( 1 )
  {
    s2 = (const char *)v4[4];
    if ( strcmp(s1, s2) >= 0 )
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
  v3 = a1;
  v23 = v4;
  if ( v8 == 0 )
  {
    v10 = strcmp(s2, v24);
    goto LABEL_9;
  }
LABEL_13:
  if ( (uint32_t *)a2[3] == v4 )
  {
    LOBYTE(v25) = 1;
    if ( v26 != v4 )
      v25 = (char *)((unsigned int)strcmp(*(const char **)a3, (const char *)v4[4]) >> 31);
    v12 = (uint32_t *)opNew(0x2Cu);
    if ( v12 != (uint32_t *)-16 )
    {
      g4_std::string::construct_copy(v12 + 4, a3);
      v12[6] = 0;
      v12[7] = 0;
      v12[10] = 0;
      v12[8] = (uint32_t)(uintptr_t)(v12 + 6);
      v12[9] = (uint32_t)(uintptr_t)(v12 + 6);
      v13 = *(uint32_t *)(a3 + 12);
      if ( v13 != 0 )
      {
        v14 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                v12 + 5,
                v13,
                v12 + 6));
        v12[7] = v14;
        for ( i = v14; *(uint32_t *)(i + 8) != 0; i = *(uint32_t *)(i + 8) )
          ;
        v12[8] = i;
        while ( *(uint32_t *)(v14 + 12) != 0 )
          v14 = *(uint32_t *)(v14 + 12);
        v12[9] = v14;
        v12[10] = *(uint32_t *)(a3 + 24);
      }
    }
    sub_1904970((char)(uintptr_t)(v25), v12, v4, v26);
    *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v12);
    *(uint8_t *)(v3 + 4) = 1;
    ++a2[5];
    return v3;
  }
  else
  {
    v23 = v4;
    v4 = (uint32_t *)sub_19048F0(v4);
    v24 = *(char **)a3;
    v10 = strcmp((const char *)v4[4], *(const char **)a3);
LABEL_9:
    if ( v10 >= 0 )
    {
      *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v4);
      *(uint8_t *)(v3 + 4) = 0;
      return v3;
    }
    LOBYTE(v16) = 1;
    if ( v26 != v23 )
      v16 = (unsigned int)strcmp(v24, (const char *)v23[4]) >> 31;
    v17 = (uint32_t *)opNew(0x2Cu);
    if ( v17 != (uint32_t *)-16 )
    {
      g4_std::string::construct_copy(v17 + 4, a3);
      v17[6] = 0;
      v17[7] = 0;
      v17[10] = 0;
      v17[8] = (uint32_t)(uintptr_t)(v17 + 6);
      v17[9] = (uint32_t)(uintptr_t)(v17 + 6);
      v18 = *(uint32_t *)(a3 + 12);
      if ( v18 != 0 )
      {
        v19 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                v17 + 5,
                v18,
                v17 + 6));
        v17[7] = v19;
        for ( j = v19; *(uint32_t *)(j + 8) != 0; j = *(uint32_t *)(j + 8) )
          ;
        v17[8] = j;
        while ( *(uint32_t *)(v19 + 12) != 0 )
          v19 = *(uint32_t *)(v19 + 12);
        v17[9] = v19;
        v17[10] = *(uint32_t *)(a3 + 24);
      }
    }
    sub_1904970(v16, v17, v23, v26);
    *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v17);
    *(uint8_t *)(v3 + 4) = 1;
    ++a2[5];
    return v3;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_13D1150  (binary VA: 0x13d1150)
// Original: sub_13D1150
// ----------------------------------------------------------------------------
uint32_t * sub_13D1150(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  const char *v5;
  int v6;
  int v7;
  char *v8;
  uint32_t *v9;
  int v10;
  int v11;
  int m;
  uint32_t *v14;
  int v15;
  int v16;
  int j;
  const char *v18;
  const char *v19;
  uint32_t *v20;
  int v21;
  int v22;
  int i;
  unsigned int v24;
  uint32_t *v25;
  char *v26;
  int v27;
  int v28;
  int v29;
  uint32_t *v30;
  int v31;
  int v32;
  int k;
  char *v34;
  int v35;
  int v36;
  int v37;
  char *v38;
  int v39;
  int v40;
  int v41;
  typedef char *_g4_t_s2;
  typedef char *_g4_t_v43;
  typedef char *_g4_t_v44;
  typedef char *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef char *_g4_t_s1;
  typedef char *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef unsigned int _g4_t_v51;
  typedef unsigned int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t _g4_t_v54[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_s2)) > _g4_s0 ? (0u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v43)) > _g4_s1 ? (0u + sizeof(_g4_t_v43)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v44)) > _g4_s2 ? (0u + sizeof(_g4_t_v44)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v45)) > _g4_s3 ? (0u + sizeof(_g4_t_v45)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v46)) > _g4_s4 ? (0u + sizeof(_g4_t_v46)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_s1)) > _g4_s5 ? (4u + sizeof(_g4_t_s1)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v49)) > _g4_s6 ? (12u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v50)) > _g4_s7 ? (16u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v51)) > _g4_s8 ? (16u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v52)) > _g4_s9 ? (16u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v53)) > _g4_s10 ? (20u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v54)) > _g4_s11 ? (24u + sizeof(_g4_t_v54)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 0u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 0u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);

  v49 = (char *)(a2 + 1);
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] != 0 )
    {
      v53 = a2[4];
      v18 = *(const char **)a4;
      v19 = *(const char **)(v53 + 16);
      if ( strcmp(v19, *(const char **)a4) < 0 )
      {
        LOBYTE(v51) = 1;
        if ( v49 != (char *)v53 )
          v51 = (unsigned int)strcmp(v18, v19) >> 31;
        v20 = (uint32_t *)opNew(0x2Cu);
        if ( v20 != (uint32_t *)-16 )
        {
          g4_std::string::construct_copy(v20 + 4, a4);
          v20[6] = 0;
          v20[7] = 0;
          v20[10] = 0;
          v20[8] = (uint32_t)(uintptr_t)(v20 + 6);
          v20[9] = (uint32_t)(uintptr_t)(v20 + 6);
          v21 = *(uint32_t *)(a4 + 12);
          if ( v21 != 0 )
          {
            v22 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                    v20 + 5,
                    v21,
                    v20 + 6));
            v20[7] = v22;
            for ( i = v22; *(uint32_t *)(i + 8) != 0; i = *(uint32_t *)(i + 8) )
              ;
            v20[8] = i;
            while ( *(uint32_t *)(v22 + 12) != 0 )
              v22 = *(uint32_t *)(v22 + 12);
            v20[9] = v22;
            v20[10] = *(uint32_t *)(a4 + 24);
          }
        }
        sub_1904970(v51, v20, v53, v49);
        ++a2[5];
        *a1 = (uint32_t)(uintptr_t)(v20);
        return a1;
      }
    }
    goto LABEL_33;
  }
  v5 = *(const char **)a4;
  s2 = *(char **)(a3 + 16);
  if ( strcmp(*(const char **)a4, s2) >= 0 )
  {
    if ( strcmp(s2, v5) >= 0 )
    {
      *a1 = a3;
      return a1;
    }
    if ( a3 == a2[4] )
    {
      v46 = (char *)a2[4];
      v30 = (uint32_t *)opNew(0x2Cu);
      v38 = v46;
      if ( v30 != (uint32_t *)-16 )
      {
        g4_std::string::construct_copy(v30 + 4, a4);
        v30[6] = 0;
        v30[7] = 0;
        v30[10] = 0;
        v30[8] = (uint32_t)(uintptr_t)(v30 + 6);
        v30[9] = (uint32_t)(uintptr_t)(v30 + 6);
        v38 = v46;
        if ( *(uint32_t *)(a4 + 12) != 0 )
        {
          v39 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                  v30 + 5,
                  *(uint32_t *)(a4 + 12),
                  v30 + 6));
          v30[7] = v39;
          v40 = v39;
          v41 = v39;
          v38 = v46;
          while ( *(uint32_t *)(v41 + 8) != 0 )
            v41 = *(uint32_t *)(v41 + 8);
          v30[8] = v41;
          while ( *(uint32_t *)(v40 + 12) != 0 )
            v40 = *(uint32_t *)(v40 + 12);
          v30[9] = v40;
          v30[10] = *(uint32_t *)(a4 + 24);
        }
      }
      sub_1904970(0, v30, v38, v49);
      goto LABEL_69;
    }
    v50 = sub_19048E0(a3);
    if ( strcmp(v5, *(const char **)(v50 + 16)) < 0 )
    {
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        v14 = (uint32_t *)opNew(0x2Cu);
        if ( v14 != (uint32_t *)-16 )
        {
          g4_std::string::construct_copy(v14 + 4, a4);
          v14[6] = 0;
          v14[7] = 0;
          v14[10] = 0;
          v14[8] = (uint32_t)(uintptr_t)(v14 + 6);
          v14[9] = (uint32_t)(uintptr_t)(v14 + 6);
          v15 = *(uint32_t *)(a4 + 12);
          if ( v15 != 0 )
          {
            v16 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                    v14 + 5,
                    v15,
                    v14 + 6));
            v14[7] = v16;
            for ( j = v16; *(uint32_t *)(j + 8) != 0; j = *(uint32_t *)(j + 8) )
              ;
            v14[8] = j;
            while ( *(uint32_t *)(v16 + 12) != 0 )
              v16 = *(uint32_t *)(v16 + 12);
            v14[9] = v16;
            v14[10] = *(uint32_t *)(a4 + 24);
          }
        }
        sub_1904970(1, v14, v50, v49);
        ++a2[5];
        *a1 = (uint32_t)(uintptr_t)(v14);
        return a1;
      }
      v30 = (uint32_t *)opNew(0x2Cu);
      if ( v30 != (uint32_t *)-16 )
      {
        g4_std::string::construct_copy(v30 + 4, a4);
        v30[6] = 0;
        v30[7] = 0;
        v30[10] = 0;
        v30[8] = (uint32_t)(uintptr_t)(v30 + 6);
        v30[9] = (uint32_t)(uintptr_t)(v30 + 6);
        v31 = *(uint32_t *)(a4 + 12);
        if ( v31 != 0 )
        {
          v32 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                  v30 + 5,
                  v31,
                  v30 + 6));
          v30[7] = v32;
          for ( k = v32; *(uint32_t *)(k + 8) != 0; k = *(uint32_t *)(k + 8) )
            ;
          v30[8] = k;
          while ( *(uint32_t *)(v32 + 12) != 0 )
            v32 = *(uint32_t *)(v32 + 12);
          v30[9] = v32;
          v30[10] = *(uint32_t *)(a4 + 24);
        }
      }
      sub_1904970(0, v30, a3, v49);
LABEL_69:
      ++a2[5];
      *a1 = (uint32_t)(uintptr_t)(v30);
      return a1;
    }
LABEL_33:
    sub_13D0E80((int)(uintptr_t)(v54), a2, a4);
    *a1 = v54[0];
    return a1;
  }
  if ( a3 == a2[3] )
  {
    v45 = (char *)a2[3];
    v9 = (uint32_t *)opNew(0x2Cu);
    v34 = v45;
    if ( v9 != (uint32_t *)-16 )
    {
      g4_std::string::construct_copy(v9 + 4, a4);
      v9[6] = 0;
      v9[7] = 0;
      v9[10] = 0;
      v9[8] = (uint32_t)(uintptr_t)(v9 + 6);
      v9[9] = (uint32_t)(uintptr_t)(v9 + 6);
      v34 = v45;
      if ( *(uint32_t *)(a4 + 12) != 0 )
      {
        v35 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                v9 + 5,
                *(uint32_t *)(a4 + 12),
                v9 + 6));
        v9[7] = v35;
        v36 = v35;
        v37 = v35;
        v34 = v45;
        while ( *(uint32_t *)(v37 + 8) != 0 )
          v37 = *(uint32_t *)(v37 + 8);
        v9[8] = v37;
        while ( *(uint32_t *)(v36 + 12) != 0 )
          v36 = *(uint32_t *)(v36 + 12);
        v9[9] = v36;
        v9[10] = *(uint32_t *)(a4 + 24);
      }
    }
    sub_1904970(1, v9, v34, v49);
    goto LABEL_16;
  }
  v6 = sub_1904940(a3);
  s1 = *(char **)(v6 + 16);
  v43 = (char *)v6;
  v7 = strcmp(s1, v5);
  v8 = v43;
  if ( v7 >= 0 )
    goto LABEL_33;
  if ( *((uint32_t *)v43 + 3) != 0 )
  {
    v9 = (uint32_t *)opNew(0x2Cu);
    if ( v9 != (uint32_t *)-16 )
    {
      g4_std::string::construct_copy(v9 + 4, a4);
      v9[6] = 0;
      v9[7] = 0;
      v9[10] = 0;
      v9[8] = (uint32_t)(uintptr_t)(v9 + 6);
      v9[9] = (uint32_t)(uintptr_t)(v9 + 6);
      v10 = *(uint32_t *)(a4 + 12);
      if ( v10 != 0 )
      {
        v11 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                v9 + 5,
                v10,
                v9 + 6));
        v9[7] = v11;
        for ( m = v11; *(uint32_t *)(m + 8) != 0; m = *(uint32_t *)(m + 8) )
          ;
        v9[8] = m;
        while ( *(uint32_t *)(v11 + 12) != 0 )
          v11 = *(uint32_t *)(v11 + 12);
        v9[9] = v11;
        v9[10] = *(uint32_t *)(a4 + 24);
      }
    }
    sub_1904970(1, v9, a3, v49);
LABEL_16:
    ++a2[5];
    *a1 = (uint32_t)(uintptr_t)(v9);
    return a1;
  }
  LOBYTE(v52) = 1;
  if ( v49 != v43 )
  {
    v24 = strcmp(v5, s1);
    v8 = v43;
    v52 = v24 >> 31;
  }
  v44 = v8;
  v25 = (uint32_t *)opNew(0x2Cu);
  v26 = v44;
  if ( v25 != (uint32_t *)-16 )
  {
    g4_std::string::construct_copy(v25 + 4, a4);
    v25[6] = 0;
    v25[7] = 0;
    v25[10] = 0;
    v25[8] = (uint32_t)(uintptr_t)(v25 + 6);
    v25[9] = (uint32_t)(uintptr_t)(v25 + 6);
    v27 = *(uint32_t *)(a4 + 12);
    v26 = v44;
    if ( v27 != 0 )
    {
      v28 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
              v25 + 5,
              v27,
              v25 + 6));
      v25[7] = v28;
      v29 = v28;
      v26 = v44;
      while ( *(uint32_t *)(v29 + 8) != 0 )
        v29 = *(uint32_t *)(v29 + 8);
      v25[8] = v29;
      while ( *(uint32_t *)(v28 + 12) != 0 )
        v28 = *(uint32_t *)(v28 + 12);
      v25[9] = v28;
      v25[10] = *(uint32_t *)(a4 + 24);
    }
  }
  sub_1904970(v52, v25, v26, v49);
  ++a2[5];
  *a1 = (uint32_t)(uintptr_t)(v25);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase  (binary VA: 0x13d1ec0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(int a1, uint32_t *a2)
{
  uint32_t *i;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  int v16;
  uint32_t *v17;
  int v18;
  uint32_t *v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;

  if ( a2 != nullptr )
  {
    for ( i = a2; ; i = v21 )
    {
      v24 = (uint32_t *)i[3];
      if ( v24 != nullptr )
      {
        while ( 1 )
        {
          v25 = (uint32_t *)v24[3];
          if ( v25 != nullptr )
          {
            while ( 1 )
            {
              v26 = (uint32_t *)v25[3];
              if ( v26 != nullptr )
              {
                while ( 1 )
                {
                  v27 = (uint32_t *)v26[3];
                  if ( v27 != nullptr )
                  {
                    while ( 1 )
                    {
                      v28 = (uint32_t *)v27[3];
                      if ( v28 != nullptr )
                      {
                        while ( 1 )
                        {
                          v23 = (uint32_t *)v28[3];
                          if ( v23 != nullptr )
                          {
                            while ( 1 )
                            {
                              v22 = (uint32_t *)v23[3];
                              if ( v22 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v3 = v22[3];
                                  if ( v3 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(
                                        a1,
                                        *(void **)(v3 + 12));
                                      v4 = *(uint32_t *)(v3 + 16);
                                      v5 = *(uint32_t *)(v3 + 8);
                                      if ( (uint32_t *)(v4 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v4 - 12));
                                      }
                                      opDelete((void *)v3);
                                      if ( v5 == 0 )
                                        break;
                                      v3 = v5;
                                    }
                                  }
                                  v6 = v22[4];
                                  v7 = (uint32_t *)v22[2];
                                  if ( (uint32_t *)(v6 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
                                  }
                                  opDelete(v22);
                                  if ( v7 == nullptr )
                                    break;
                                  v22 = v7;
                                }
                              }
                              v8 = v23[4];
                              v9 = (uint32_t *)v23[2];
                              if ( (uint32_t *)(v8 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v8 - 12));
                              }
                              opDelete(v23);
                              if ( v9 == nullptr )
                                break;
                              v23 = v9;
                            }
                          }
                          v10 = v28[4];
                          v11 = (uint32_t *)v28[2];
                          if ( (uint32_t *)(v10 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v10 - 12));
                          }
                          opDelete(v28);
                          if ( v11 == nullptr )
                            break;
                          v28 = v11;
                        }
                      }
                      v12 = v27[4];
                      v13 = (uint32_t *)v27[2];
                      if ( (uint32_t *)(v12 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v12 - 12));
                      }
                      opDelete(v27);
                      if ( v13 == nullptr )
                        break;
                      v27 = v13;
                    }
                  }
                  v16 = v26[4];
                  v17 = (uint32_t *)v26[2];
                  if ( (uint32_t *)(v16 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v16 - 12));
                  }
                  opDelete(v26);
                  if ( v17 == nullptr )
                    break;
                  v26 = v17;
                }
              }
              v18 = v25[4];
              v19 = (uint32_t *)v25[2];
              if ( (uint32_t *)(v18 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v18 - 12));
              }
              opDelete(v25);
              if ( v19 == nullptr )
                break;
              v25 = v19;
            }
          }
          v14 = v24[4];
          v15 = (uint32_t *)v24[2];
          if ( (uint32_t *)(v14 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v14 - 12));
          }
          opDelete(v24);
          if ( v15 == nullptr )
            break;
          v24 = v15;
        }
      }
      v20 = a2[4];
      v21 = (uint32_t *)a2[2];
      if ( (uint32_t *)(v20 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v20 - 12));
      }
      opDelete(a2);
      if ( v21 == nullptr )
        break;
      a2 = v21;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_c4aac7::M_erase  (binary VA: 0x13d22a0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,std::map<std::string,int,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>>,std::_Select1st<std::pair<std::string const,std::map<std::string,int,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>>>,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,std::map<std::string,int,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_string_pair_string_const_c4aac7::M_erase(int a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
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
  int v15;
  int v16;
  int v17;
  int v18;
  uint32_t *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  uint32_t *v25;
  int v26;
  int v27;
  int v28;
  int v29;
  uint32_t *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  uint32_t *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  uint32_t *v43;
  int v44;
  int v45;
  int v46;
  int v47;
  uint32_t *v48;
  char *v49;
  int v50;
  int v51;
  int v52;
  int v53;
  uint32_t *v54;
  uint32_t *v55;
  uint32_t *v56;
  uint32_t *v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  uint32_t *v61;
  uint32_t *v62;
  uint32_t *v63;
  uint32_t *v64;

  v2 = a2;
  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v59 = (uint32_t *)v2[3];
      if ( v59 != nullptr )
      {
        while ( 1 )
        {
          v60 = (uint32_t *)v59[3];
          if ( v60 != nullptr )
          {
            while ( 1 )
            {
              v61 = (uint32_t *)v60[3];
              if ( v61 != nullptr )
              {
                while ( 1 )
                {
                  v62 = (uint32_t *)v61[3];
                  if ( v62 != nullptr )
                  {
                    while ( 1 )
                    {
                      v63 = (uint32_t *)v62[3];
                      if ( v63 != nullptr )
                      {
                        while ( 1 )
                        {
                          v3 = (uint32_t *)v63[3];
                          v64 = v3;
                          if ( v3 != nullptr )
                          {
                            while ( 1 )
                            {
                              v4 = (uint32_t *)v3[3];
                              v58 = v4;
                              if ( v4 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v5 = (uint32_t *)v4[3];
                                  v54 = v5;
                                  if ( v5 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_string_pair_string_const_c4aac7::M_erase(
                                        a1,
                                        (void *)v5[3]);
                                      v6 = v54[7];
                                      v57 = (uint32_t *)v54[2];
                                      if ( v6 != 0 )
                                      {
                                        while ( 1 )
                                        {
                                          g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(
                                            (int)(uintptr_t)(v54 + 5),
                                            *(uint32_t **)(v6 + 12));
                                          v7 = *(uint32_t *)(v6 + 16);
                                          v8 = *(uint32_t *)(v6 + 8);
                                          if ( (uint32_t *)(v7 - 12) != dword_213B808
                                            && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
                                          {
                                            g4_std::string::Rep::M_destroy((void *)(v7 - 12));
                                          }
                                          opDelete((void *)v6);
                                          if ( v8 == 0 )
                                            break;
                                          v6 = v8;
                                        }
                                      }
                                      v9 = v54[4];
                                      if ( (uint32_t *)(v9 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v9 - 12));
                                      }
                                      opDelete(v54);
                                      if ( v57 == nullptr )
                                        break;
                                      v54 = v57;
                                      v5 = v57;
                                    }
                                  }
                                  v10 = v58[7];
                                  v55 = (uint32_t *)v58[2];
                                  if ( v10 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(
                                        (int)(uintptr_t)(v58 + 5),
                                        *(uint32_t **)(v10 + 12));
                                      v11 = *(uint32_t *)(v10 + 16);
                                      v12 = *(uint32_t *)(v10 + 8);
                                      if ( (uint32_t *)(v11 - 12) != dword_213B808
                                        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
                                      {
                                        g4_std::string::Rep::M_destroy((void *)(v11 - 12));
                                      }
                                      opDelete((void *)v10);
                                      if ( v12 == 0 )
                                        break;
                                      v10 = v12;
                                    }
                                  }
                                  v13 = v58[4];
                                  if ( (uint32_t *)(v13 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v13 - 12));
                                  }
                                  opDelete(v58);
                                  if ( v55 == nullptr )
                                    break;
                                  v58 = v55;
                                  v4 = v55;
                                }
                              }
                              v14 = v64[7];
                              v56 = (uint32_t *)v64[2];
                              if ( v14 != 0 )
                              {
                                while ( 1 )
                                {
                                  g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(
                                    (int)(uintptr_t)(v64 + 5),
                                    *(uint32_t **)(v14 + 12));
                                  v15 = *(uint32_t *)(v14 + 16);
                                  v16 = *(uint32_t *)(v14 + 8);
                                  if ( (uint32_t *)(v15 - 12) != dword_213B808
                                    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
                                  {
                                    g4_std::string::Rep::M_destroy((void *)(v15 - 12));
                                  }
                                  opDelete((void *)v14);
                                  if ( v16 == 0 )
                                    break;
                                  v14 = v16;
                                }
                              }
                              v17 = v64[4];
                              if ( (uint32_t *)(v17 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v17 - 12));
                              }
                              opDelete(v64);
                              if ( v56 == nullptr )
                                break;
                              v64 = v56;
                              v3 = v56;
                            }
                          }
                          v18 = v63[7];
                          v19 = (uint32_t *)v63[2];
                          v20 = (int)(uintptr_t)(v63 + 5);
                          if ( v18 != 0 )
                          {
                            while ( 1 )
                            {
                              g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(
                                v20,
                                *(uint32_t **)(v18 + 12));
                              v21 = *(uint32_t *)(v18 + 16);
                              v22 = *(uint32_t *)(v18 + 8);
                              if ( (uint32_t *)(v21 - 12) != dword_213B808
                                && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
                              {
                                g4_std::string::Rep::M_destroy((void *)(v21 - 12));
                              }
                              opDelete((void *)v18);
                              if ( v22 == 0 )
                                break;
                              v18 = v22;
                              v20 = (int)(uintptr_t)(v63 + 5);
                            }
                          }
                          v23 = v63[4];
                          if ( (uint32_t *)(v23 - 12) != dword_213B808
                            && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
                          {
                            g4_std::string::Rep::M_destroy((void *)(v23 - 12));
                          }
                          opDelete(v63);
                          if ( v19 == nullptr )
                            break;
                          v63 = v19;
                        }
                      }
                      v29 = v62[7];
                      v30 = (uint32_t *)v62[2];
                      v31 = (int)(uintptr_t)(v62 + 5);
                      if ( v29 != 0 )
                      {
                        while ( 1 )
                        {
                          g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(
                            v31,
                            *(uint32_t **)(v29 + 12));
                          v32 = *(uint32_t *)(v29 + 16);
                          v33 = *(uint32_t *)(v29 + 8);
                          if ( (uint32_t *)(v32 - 12) == dword_213B808
                            || __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) > 0 )
                          {
                            opDelete((void *)v29);
                            if ( v33 == 0 )
                              break;
                          }
                          else
                          {
                            g4_std::string::Rep::M_destroy((void *)(v32 - 12));
                            opDelete((void *)v29);
                            if ( v33 == 0 )
                              break;
                          }
                          v29 = v33;
                          v31 = (int)(uintptr_t)(v62 + 5);
                        }
                      }
                      v34 = v62[4];
                      if ( (uint32_t *)(v34 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v34 - 12));
                      }
                      opDelete(v62);
                      if ( v30 == nullptr )
                        break;
                      v62 = v30;
                    }
                  }
                  v24 = v61[7];
                  v25 = (uint32_t *)v61[2];
                  v26 = (int)(uintptr_t)(v61 + 5);
                  if ( v24 != 0 )
                  {
                    while ( 1 )
                    {
                      g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(
                        v26,
                        *(uint32_t **)(v24 + 12));
                      v27 = *(uint32_t *)(v24 + 16);
                      v28 = *(uint32_t *)(v24 + 8);
                      if ( (uint32_t *)(v27 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy((void *)(v27 - 12));
                      }
                      opDelete((void *)v24);
                      if ( v28 == 0 )
                        break;
                      v24 = v28;
                      v26 = (int)(uintptr_t)(v61 + 5);
                    }
                  }
                  v40 = v61[4];
                  if ( (uint32_t *)(v40 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v40 - 12));
                  }
                  opDelete(v61);
                  if ( v25 == nullptr )
                    break;
                  v61 = v25;
                }
              }
              v35 = v60[7];
              v36 = (uint32_t *)v60[2];
              v37 = (int)(uintptr_t)(v60 + 5);
              if ( v35 != 0 )
              {
                while ( 1 )
                {
                  g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(
                    v37,
                    *(uint32_t **)(v35 + 12));
                  v38 = *(uint32_t *)(v35 + 16);
                  v39 = *(uint32_t *)(v35 + 8);
                  if ( (uint32_t *)(v38 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy((void *)(v38 - 12));
                  }
                  opDelete((void *)v35);
                  if ( v39 == 0 )
                    break;
                  v35 = v39;
                  v37 = (int)(uintptr_t)(v60 + 5);
                }
              }
              v41 = v60[4];
              if ( (uint32_t *)(v41 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v41 - 12));
              }
              opDelete(v60);
              if ( v36 == nullptr )
                break;
              v60 = v36;
            }
          }
          v42 = v59[7];
          v43 = (uint32_t *)v59[2];
          v44 = (int)(uintptr_t)(v59 + 5);
          if ( v42 != 0 )
          {
            while ( 1 )
            {
              g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(
                v44,
                *(uint32_t **)(v42 + 12));
              v45 = *(uint32_t *)(v42 + 16);
              v46 = *(uint32_t *)(v42 + 8);
              if ( (uint32_t *)(v45 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy((void *)(v45 - 12));
              }
              opDelete((void *)v42);
              if ( v46 == 0 )
                break;
              v42 = v46;
              v44 = (int)(uintptr_t)(v59 + 5);
            }
          }
          v52 = v59[4];
          if ( (uint32_t *)(v52 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v52 - 12));
          }
          opDelete(v59);
          if ( v43 == nullptr )
            break;
          v59 = v43;
        }
      }
      v47 = a2[7];
      v48 = (uint32_t *)a2[2];
      v49 = (char *)(a2 + 5);
      if ( v47 != 0 )
      {
        while ( 1 )
        {
          g4_std::Rb_tree_string_pair_string_const_3d231e::M_erase(
            (int)(uintptr_t)(v49),
            *(uint32_t **)(v47 + 12));
          v50 = *(uint32_t *)(v47 + 16);
          v51 = *(uint32_t *)(v47 + 8);
          if ( (uint32_t *)(v50 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v50 - 12));
          }
          opDelete((void *)v47);
          if ( v51 == 0 )
            break;
          v47 = v51;
          v49 = (char *)(a2 + 5);
        }
      }
      v53 = a2[4];
      if ( (uint32_t *)(v53 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v53 - 12));
      }
      opDelete(a2);
      if ( v48 == nullptr )
        break;
      a2 = v48;
      v2 = v48;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy  (binary VA: 0x13d2af0)
// Original: std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>::_M_copy
// ----------------------------------------------------------------------------
uint32_t * g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(int a1, uint32_t *a2, int a3)
{
  uint32_t *v3;
  int *v4;
  uint32_t *v5;
  int v6;
  int v7;
  int *v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;
  int v16;
  int *v17;
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  int v21;
  uint32_t *v22;
  int v23;
  uint32_t *v24;
  uint32_t *v25;
  int v26;
  int *v27;
  uint32_t *v28;
  uint32_t *v29;
  int v30;
  int v31;
  uint32_t *v32;
  int v33;
  uint32_t *v34;
  uint32_t *v35;
  int v36;
  uint32_t *i;
  int v38;
  uint32_t *v39;
  uint32_t *v40;
  int v41;
  int *v42;
  uint32_t *v43;
  uint32_t *v44;
  int v45;
  int v46;
  uint32_t *v48;
  uint32_t *v49;
  uint32_t *v50;
  uint32_t *v51;
  uint32_t *v52;
  uint32_t *v53;
  uint32_t *v54;
  uint32_t *v55;
  uint32_t *v56;
  uint32_t *v57;
  uint32_t *v58;
  uint32_t *v59;
  uint32_t *v60;
  uint32_t *v61;
  uint32_t *v62;
  int *v63;
  uint32_t *v64;
  uint32_t *v65;

  v64 = (uint32_t *)opNew(0x18u);
  if ( v64 != (uint32_t *)-16 )
  {
    g4_std::string::construct_copy(v64 + 4, a2 + 4);
    v64[5] = a2[5];
  }
  *v64 = *a2;
  v64[3] = 0;
  v64[2] = 0;
  v64[1] = a3;
  v51 = (uint32_t *)a2[3];
  if ( v51 != nullptr )
  {
    v48 = (uint32_t *)opNew(0x18u);
    if ( v48 != (uint32_t *)-16 )
    {
      g4_std::string::construct_copy(v48 + 4, v51 + 4);
      v48[5] = v51[5];
    }
    *v48 = *v51;
    v48[3] = 0;
    v48[2] = 0;
    v48[1] = (uint32_t)(uintptr_t)(v64);
    v3 = v51;
    v4 = (int *)v51[3];
    if ( v4 != nullptr )
    {
      v5 = (uint32_t *)opNew(0x18u);
      if ( v5 != (uint32_t *)-16 )
      {
        g4_std::string::construct_copy(v5 + 4, v4 + 4);
        v5[5] = v4[5];
      }
      v6 = *v4;
      v5[2] = 0;
      *v5 = v6;
      v5[3] = 0;
      v5[1] = (uint32_t)(uintptr_t)(v48);
      v7 = v4[3];
      if ( v7 != 0 )
        v5[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                  a1,
                  v7,
                  v5));
      v8 = (int *)v4[2];
      if ( v8 != nullptr )
      {
        v55 = v5;
        while ( 1 )
        {
          v9 = (uint32_t *)opNew(0x18u);
          if ( v9 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v9 + 4, v8 + 4);
            v9[5] = v8[5];
          }
          v10 = *v8;
          v9[2] = 0;
          *v9 = v10;
          v9[3] = 0;
          v5[2] = (uint32_t)(uintptr_t)(v9);
          v9[1] = (uint32_t)(uintptr_t)(v5);
          v11 = v8[3];
          if ( v11 != 0 )
            v9[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                      a1,
                      v11,
                      v9));
          v8 = (int *)v8[2];
          if ( v8 == nullptr )
            break;
          v5 = v9;
        }
        v5 = v55;
      }
      v3 = v51;
      v48[3] = (uint32_t)(uintptr_t)(v5);
    }
    v12 = v48;
    v58 = (uint32_t *)v3[2];
    if ( v58 != nullptr )
    {
      while ( 1 )
      {
        v52 = (uint32_t *)opNew(0x18u);
        if ( v52 != (uint32_t *)-16 )
        {
          g4_std::string::construct_copy(v52 + 4, v58 + 4);
          v52[5] = v58[5];
        }
        v13 = *v58;
        v52[3] = 0;
        *v52 = v13;
        v52[2] = 0;
        v12[2] = (uint32_t)(uintptr_t)(v52);
        v52[1] = (uint32_t)(uintptr_t)(v12);
        v14 = v58;
        v15 = (uint32_t *)v58[3];
        if ( v15 != nullptr )
        {
          v56 = (uint32_t *)opNew(0x18u);
          if ( v56 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v56 + 4, v15 + 4);
            v56[5] = v15[5];
          }
          *v56 = *v15;
          v56[2] = 0;
          v56[3] = 0;
          v56[1] = (uint32_t)(uintptr_t)(v52);
          v16 = v15[3];
          if ( v16 != 0 )
            v56[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                       a1,
                       v16,
                       v56));
          v17 = (int *)v15[2];
          v18 = v56;
          if ( v17 != nullptr )
          {
            while ( 1 )
            {
              v19 = (uint32_t *)opNew(0x18u);
              if ( v19 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v19 + 4, v17 + 4);
                v19[5] = v17[5];
              }
              v20 = *v17;
              v19[2] = 0;
              *v19 = v20;
              v19[3] = 0;
              v18[2] = (uint32_t)(uintptr_t)(v19);
              v19[1] = (uint32_t)(uintptr_t)(v18);
              v21 = v17[3];
              if ( v21 != 0 )
                v19[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                           a1,
                           v21,
                           v19));
              v17 = (int *)v17[2];
              if ( v17 == nullptr )
                break;
              v18 = v19;
            }
          }
          v52[3] = (uint32_t)(uintptr_t)(v56);
          v14 = v58;
        }
        v58 = (uint32_t *)v14[2];
        if ( v58 == nullptr )
          break;
        v12 = v52;
      }
    }
    v64[3] = (uint32_t)(uintptr_t)(v48);
  }
  v22 = v64;
  v63 = (int *)a2[2];
  if ( v63 != nullptr )
  {
    while ( 1 )
    {
      v62 = (uint32_t *)opNew(0x18u);
      if ( v62 != (uint32_t *)-16 )
      {
        g4_std::string::construct_copy(v62 + 4, v63 + 4);
        v62[5] = v63[5];
      }
      v23 = *v63;
      v62[3] = 0;
      *v62 = v23;
      v62[2] = 0;
      v22[2] = (uint32_t)(uintptr_t)(v62);
      v62[1] = (uint32_t)(uintptr_t)(v22);
      v53 = (uint32_t *)v63[3];
      if ( v53 != nullptr )
      {
        v65 = (uint32_t *)opNew(0x18u);
        if ( v65 != (uint32_t *)-16 )
        {
          g4_std::string::construct_copy(v65 + 4, v53 + 4);
          v65[5] = v53[5];
        }
        *v65 = *v53;
        v65[3] = 0;
        v65[2] = 0;
        v65[1] = (uint32_t)(uintptr_t)(v62);
        v24 = v53;
        v25 = (uint32_t *)v53[3];
        if ( v25 != nullptr )
        {
          v49 = (uint32_t *)opNew(0x18u);
          if ( v49 != (uint32_t *)-16 )
          {
            g4_std::string::construct_copy(v49 + 4, v25 + 4);
            v49[5] = v25[5];
          }
          *v49 = *v25;
          v49[2] = 0;
          v49[3] = 0;
          v49[1] = (uint32_t)(uintptr_t)(v65);
          v26 = v25[3];
          if ( v26 != 0 )
            v49[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                       a1,
                       v26,
                       v49));
          v27 = (int *)v25[2];
          v28 = v49;
          if ( v27 != nullptr )
          {
            while ( 1 )
            {
              v29 = (uint32_t *)opNew(0x18u);
              if ( v29 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v29 + 4, v27 + 4);
                v29[5] = v27[5];
              }
              v30 = *v27;
              v29[2] = 0;
              *v29 = v30;
              v29[3] = 0;
              v28[2] = (uint32_t)(uintptr_t)(v29);
              v29[1] = (uint32_t)(uintptr_t)(v28);
              v31 = v27[3];
              if ( v31 != 0 )
                v29[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                           a1,
                           v31,
                           v29));
              v27 = (int *)v27[2];
              if ( v27 == nullptr )
                break;
              v28 = v29;
            }
          }
          v65[3] = (uint32_t)(uintptr_t)(v49);
          v24 = v53;
        }
        v32 = v65;
        v61 = (uint32_t *)v24[2];
        if ( v61 != nullptr )
        {
          while ( 1 )
          {
            v59 = (uint32_t *)opNew(0x18u);
            if ( v59 != (uint32_t *)-16 )
            {
              g4_std::string::construct_copy(v59 + 4, v61 + 4);
              v59[5] = v61[5];
            }
            v33 = *v61;
            v59[3] = 0;
            *v59 = v33;
            v59[2] = 0;
            v32[2] = (uint32_t)(uintptr_t)(v59);
            v59[1] = (uint32_t)(uintptr_t)(v32);
            v34 = v61;
            v35 = (uint32_t *)v61[3];
            if ( v35 != nullptr )
            {
              v60 = (uint32_t *)opNew(0x18u);
              if ( v60 != (uint32_t *)-16 )
              {
                g4_std::string::construct_copy(v60 + 4, v35 + 4);
                v60[5] = v35[5];
              }
              *v60 = *v35;
              v60[2] = 0;
              v60[3] = 0;
              v60[1] = (uint32_t)(uintptr_t)(v59);
              v36 = v35[3];
              if ( v36 != 0 )
                v60[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                           a1,
                           v36,
                           v60));
              v57 = (uint32_t *)v35[2];
              if ( v57 != nullptr )
              {
                for ( i = v60; ; i = v50 )
                {
                  v50 = (uint32_t *)opNew(0x18u);
                  if ( v50 != (uint32_t *)-16 )
                  {
                    g4_std::string::construct_copy(v50 + 4, v57 + 4);
                    v50[5] = v57[5];
                  }
                  v38 = *v57;
                  v50[3] = 0;
                  *v50 = v38;
                  v50[2] = 0;
                  i[2] = (uint32_t)(uintptr_t)(v50);
                  v50[1] = (uint32_t)(uintptr_t)(i);
                  v39 = v57;
                  v40 = (uint32_t *)v57[3];
                  if ( v40 != nullptr )
                  {
                    v54 = (uint32_t *)opNew(0x18u);
                    if ( v54 != (uint32_t *)-16 )
                    {
                      g4_std::string::construct_copy(v54 + 4, v40 + 4);
                      v54[5] = v40[5];
                    }
                    *v54 = *v40;
                    v54[2] = 0;
                    v54[3] = 0;
                    v54[1] = (uint32_t)(uintptr_t)(v50);
                    v41 = v40[3];
                    if ( v41 != 0 )
                      v54[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                                 a1,
                                 v41,
                                 v54));
                    v42 = (int *)v40[2];
                    v43 = v54;
                    if ( v42 != nullptr )
                    {
                      while ( 1 )
                      {
                        v44 = (uint32_t *)opNew(0x18u);
                        if ( v44 != (uint32_t *)-16 )
                        {
                          g4_std::string::construct_copy(v44 + 4, v42 + 4);
                          v44[5] = v42[5];
                        }
                        v45 = *v42;
                        v44[2] = 0;
                        *v44 = v45;
                        v44[3] = 0;
                        v43[2] = (uint32_t)(uintptr_t)(v44);
                        v44[1] = (uint32_t)(uintptr_t)(v43);
                        v46 = v42[3];
                        if ( v46 != 0 )
                          v44[3] = (uint32_t)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_3d231e::M_copy(
                                     a1,
                                     v46,
                                     v44));
                        v42 = (int *)v42[2];
                        if ( v42 == nullptr )
                          break;
                        v43 = v44;
                      }
                    }
                    v50[3] = (uint32_t)(uintptr_t)(v54);
                    v39 = v57;
                  }
                  v57 = (uint32_t *)v39[2];
                  if ( v57 == nullptr )
                    break;
                }
              }
              v59[3] = (uint32_t)(uintptr_t)(v60);
              v34 = v61;
            }
            v61 = (uint32_t *)v34[2];
            if ( v61 == nullptr )
              break;
            v32 = v59;
          }
        }
        v62[3] = (uint32_t)(uintptr_t)(v65);
      }
      v63 = (int *)v63[2];
      if ( v63 == nullptr )
        break;
      v22 = v62;
    }
  }
  return v64;
}

// ----------------------------------------------------------------------------
// Function: sub_13D3440  (binary VA: 0x13d3440)
// Original: sub_13D3440
// ----------------------------------------------------------------------------
int sub_13D3440()
{
  sub_1900D70(&unk_2119734);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2119734, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_13D3520  (binary VA: 0x13d3520)
// Original: sub_13D3520
// ----------------------------------------------------------------------------
int sub_13D3520(int a1, uint32_t *a2, int a3)
{
  size_t v3;
  uint32_t *v4;
  size_t v5;
  size_t i;
  size_t v7;
  uint32_t *v8;
  size_t v9;
  size_t n;
  int v11;
  uint32_t *v12;
  size_t v13;
  size_t v14;
  uint32_t *v15;
  int v16;
  int v17;
  size_t v19;
  unsigned int v20;
  size_t v21;
  size_t v22;
  size_t v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  size_t v28;
  size_t v29;
  unsigned int v30;
  int v31;
  size_t v32;
  char v33;
  void *s1;
  size_t v37;
  size_t v38;
  uint32_t *v39;

  v3 = a2[2];
  v4 = a2 + 1;
  v39 = v4;
  if ( v3 == 0 )
  {
    v13 = (size_t)v4;
    goto LABEL_17;
  }
  s1 = *(void **)a3;
  v5 = *(uint32_t *)(*(uint32_t *)a3 - 12);
  for ( i = v3; ; i = v7 )
  {
    v8 = *(uint32_t **)(i + 16);
    v9 = *(v8 - 3);
    n = v9;
    v32 = i;
    if ( v5 <= v9 )
      n = v5;
    v37 = n;
    v11 = memcmp(s1, *(const void **)(i + 16), n);
    if ( v11 == 0 )
      v11 = v5 - v9;
    if ( v11 >= 0 )
      break;
    v7 = *(uint32_t *)(v32 + 8);
    v33 = 1;
    if ( v7 == 0 )
      goto LABEL_11;
LABEL_4:
    ;
  }
  v7 = *(uint32_t *)(v32 + 12);
  v33 = 0;
  if ( v7 != 0 )
    goto LABEL_4;
LABEL_11:
  v12 = v8;
  v13 = v32;
  v14 = v37;
  v15 = v12;
  v38 = v32;
  if ( v33 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( a2[3] == v13 )
  {
    LOBYTE(v20) = 1;
    if ( v39 != (uint32_t *)v13 )
    {
      v21 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
      v22 = *(uint32_t *)(*(uint32_t *)a3 - 12);
      v23 = v22;
      if ( v21 <= v22 )
        v23 = *(uint32_t *)(*(uint32_t *)(v13 + 16) - 12);
      v24 = v22 - v21;
      v25 = memcmp(*(const void **)a3, *(const void **)(v13 + 16), v23);
      if ( v25 == 0 )
        v25 = v24;
      v20 = v25 >> 31;
    }
    v26 = opNew(0x1Cu);
    if ( v26 != -16 )
    {
      g4_std::string::construct_copy(v26 + 16, a3);
      g4_std::string::construct_copy(v26 + 20, a3 + 4);
      *(uint8_t *)(v26 + 24) = *(uint8_t *)(a3 + 8);
    }
    sub_1904970(v20, v26, v13, v39);
  }
  else
  {
    v19 = sub_19048F0(v13);
    v15 = *(uint32_t **)(v19 + 16);
    v38 = v13;
    v13 = v19;
    v9 = *(v15 - 3);
    s1 = *(void **)a3;
    v5 = *(uint32_t *)(*(uint32_t *)a3 - 12);
    v14 = v5;
    if ( v9 <= v5 )
      v14 = *(v15 - 3);
LABEL_12:
    v16 = memcmp(v15, s1, v14);
    v17 = v9 - v5;
    if ( v16 != 0 )
      v17 = v16;
    if ( v17 >= 0 )
    {
      *(uint32_t *)a1 = v13;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    LOBYTE(v27) = 1;
    if ( v39 != (uint32_t *)v38 )
    {
      v28 = *(uint32_t *)(*(uint32_t *)(v38 + 16) - 12);
      v29 = v28;
      if ( v5 <= v28 )
        v29 = v5;
      v30 = v5 - v28;
      v31 = memcmp(s1, *(const void **)(v38 + 16), v29);
      if ( v31 != 0 )
        v30 = v31;
      v27 = v30 >> 31;
    }
    v26 = opNew(0x1Cu);
    if ( v26 != -16 )
    {
      g4_std::string::construct_copy(v26 + 16, a3);
      g4_std::string::construct_copy(v26 + 20, a3 + 4);
      *(uint8_t *)(v26 + 24) = *(uint8_t *)(a3 + 8);
    }
    sub_1904970(v27, v26, v38, v39);
  }
  ++a2[5];
  *(uint32_t *)a1 = v26;
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GLFUtils::ToLowerCase  (binary VA: 0x13d3790)
// Original: GLFUtils::ToLowerCase
// ----------------------------------------------------------------------------
int GLFUtils::ToLowerCase(int *a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  int v6;
  char *v7;
  char v8;

  v3 = a3;
  v4 = a2;
  result = *a1;
  v6 = *(uint32_t *)(*a1 - 12);
  if ( a3 == -1 || v6 <= a3 )
    v3 = v6 - 1;
  if ( a2 <= v3 )
  {
    while ( 1 )
    {
      if ( *(int *)(result - 4) >= 0 )
      {
        sub_19397C0(a1);
        result = *a1;
      }
      v7 = (char *)(result + v4);
      v8 = *(uint8_t *)(result + v4);
      if ( v8 <= 64 )
        goto LABEL_5;
      if ( *(int *)(result - 4) >= 0 )
      {
        sub_19397C0(a1);
        result = *a1;
        v7 = (char *)(*a1 + v4);
        v8 = *v7;
      }
      if ( v8 > 90 )
      {
LABEL_5:
        if ( ++v4 > v3 )
          return result;
      }
      else
      {
        result = *(uint32_t *)(result - 4);
        if ( result >= 0 )
        {
          result = (int)(uintptr_t)(sub_19397C0(a1));
          v7 = (char *)(*a1 + v4);
          v8 = *v7;
        }
        ++v4;
        *v7 = v8 + 32;
        if ( v4 > v3 )
          return result;
      }
      result = *a1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher_getFiles  (binary VA: 0x13d3840)
// Original: grapher_getFiles
// ----------------------------------------------------------------------------
void grapher_getFiles(std::vector<GLFUtils::FileListEntry> *a1, char *name, bool a3, bool a4)
{
  struct dirent *v4;
  void *v5;
  int v6;
  bool v7;
  int v8;
  int v9;
  void *v10;
  void *v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  struct stat buf;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef size_t _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef DIR *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29[3];
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef bool _g4_t_v32;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v23)) > _g4_s5 ? (20u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v24)) > _g4_s6 ? (24u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v25)) > _g4_s7 ? (28u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v26)) > _g4_s8 ? (28u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v27)) > _g4_s9 ? (36u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (49u + sizeof(_g4_t_v28)) > _g4_s10 ? (49u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v29)) > _g4_s11 ? (56u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v30)) > _g4_s12 ? (68u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v31)) > _g4_s13 ? (72u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v32)) > _g4_s14 ? (76u + sizeof(_g4_t_v32)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 49u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);

  v27 = opendir(name);
  if ( v27 != nullptr )
  {
    while ( 1 )
    {
      v4 = readdir(v27);
      if ( v4 == nullptr )
        break;
      if ( strcmp(&v4->d_name[8], ".") != 0 && strcmp(&v4->d_name[8], "..") != 0 )
      {
        v18 = (int)(uintptr_t)(&v4->d_name[8]);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), name, (int)(uintptr_t)(&v28));
        g4_std::string::append((int)(uintptr_t)(v29), "/", 1u);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), (char *)v18, (int)(uintptr_t)(&v28) + 1);
        g4_std::string::append_str(v29, &v30);
        v5 = (void *)(v30 - 12);
        if ( (uint32_t *)(v30 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v5);
        }
        stat((const char *)v29[0], &buf);
        v6 = buf.st_mode & 0xF000;
        syslog(7, "--> Processing ... %s\n", v29[0]);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), (char *)v29[0], (int)(uintptr_t)(&v28) + 2);
        v7 = v6 == 0x4000;
        v32 = v6 == 0x4000;
        if ( GLFUtils::FileListEntry::s_isForcingLowercase != 0 )
        {
          GLFUtils::ToLowerCase(&v31, 0, -1);
          v7 = v32;
        }
        if ( !v7 || a4 )
        {
          v8 = *((uint32_t *)a1 + 1);
          if ( v8 == *((uint32_t *)a1 + 2) )
          {
            v24 = 8;
            v12 = (v8 - *(uint32_t *)a1) >> 3;
            if ( v12 != 0 )
            {
              if ( v12 > 2 * v12 || 2 * v12 > 0x1FFFFFFF )
                v24 = 0xFFFFFFF8;
              else
                v24 = 16 * v12;
            }
            v18 = (v8 - *(uint32_t *)a1) >> 3;
            v23 = opNew(v24);
            v13 = v23 + 8;
            if ( v23 + 8 * v18 != 0 )
            {
              v18 = v23 + 8 * v18;
              g4_std::string::construct_copy(v18, &v31);
              *(uint8_t *)(v18 + 4) = v32;
              v13 = v23 + 8;
            }
            if ( v8 != *(uint32_t *)a1 )
            {
              v25 = v8;
              v14 = v23;
              v15 = *(uint32_t *)a1;
              do
              {
                if ( v14 != 0 )
                {
                  v19 = v14;
                  g4_std::string::construct_copy(v14, v15);
                  v14 = v19;
                  *(uint8_t *)(v19 + 4) = *(uint8_t *)(v15 + 4);
                }
                v15 += 8;
                v14 += 8;
              }
              while ( v25 != v15 );
              v8 = v25;
              v13 = v14 + 8;
            }
            v26 = *((uint32_t **)a1 + 1);
            if ( (uint32_t *)v8 != v26 )
            {
              do
              {
                if ( v13 != 0 )
                {
                  v20 = v13;
                  g4_std::string::construct_copy(v13, v8);
                  v13 = v20;
                  *(uint8_t *)(v20 + 4) = *(uint8_t *)(v8 + 4);
                }
                v8 += 8;
                v13 += 8;
              }
              while ( v26 != (uint32_t *)v8 );
              v26 = *((uint32_t **)a1 + 1);
            }
            v16 = *(uint32_t **)a1;
            if ( v26 != *(uint32_t **)a1 )
            {
              v22 = v13;
              do
              {
                v17 = (uint32_t *)(*v16 - 12);
                if ( v17 != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(*v16 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v17);
                }
                v16 += 2;
              }
              while ( v26 != v16 );
              v13 = v22;
              v16 = *(uint32_t **)a1;
            }
            if ( v16 != nullptr )
            {
              v21 = v13;
              opDelete(v16);
              v13 = v21;
            }
            *((uint32_t *)a1 + 1) = v13;
            *(uint32_t *)a1 = v23;
            *((uint32_t *)a1 + 2) = v23 + v24;
          }
          else
          {
            v9 = 0;
            if ( v8 != 0 )
            {
              g4_std::string::construct_copy(v8, &v31);
              *(uint8_t *)(v8 + 4) = v32;
              v9 = *((uint32_t *)a1 + 1);
            }
            *((uint32_t *)a1 + 1) = v9 + 8;
          }
        }
        if ( a3 && v32 )
          GLFUtils::ListDir(a1, (std::vector<GLFUtils::FileListEntry> *)v31, (const char *)&dword_0 + 1, a4, v18);
        v10 = (void *)(v31 - 12);
        if ( (uint32_t *)(v31 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v10);
        }
        v11 = (void *)(v29[0] - 12);
        if ( (uint32_t *)(v29[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v29[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v11);
        }
      }
    }
    closedir(v27);
  }
  else
  {
    syslog(7, "--> Fatal error opening %s\n", name);
  }
}

// ----------------------------------------------------------------------------
// Function: GLFUtils::ListDir  (binary VA: 0x13d3ce0)
// Original: GLFUtils::ListDir
// ----------------------------------------------------------------------------
void GLFUtils::ListDir(GLFUtils::Self *self, std::vector<GLFUtils::FileListEntry> *name, const char *a3, bool a4)
{
  sub_8A2510((int)(uintptr_t)(self), (char *)name, (char)(uintptr_t)(a3), a4);
  if ( (unsigned int)(*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3 == 0 )
    grapher_getFiles(self, (char *)name, (bool)a3, a4);
}

// ----------------------------------------------------------------------------
// Function: GLFUtils::ListDir  (binary VA: 0x13d3d60)
// Original: GLFUtils::ListDir
// ----------------------------------------------------------------------------
void GLFUtils::ListDir(uint32_t *a1, std::vector<GLFUtils::FileListEntry> *a2, uint8_t a3, char a4)
{
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  size_t v11;
  int v12;
  int v13;
  size_t v14;
  size_t v15;
  int v16;
  int v17;
  char *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  size_t v22;
  int v23;
  int v24;
  int v25;
  void *v26;
  char *v27;
  void *v28;
  int v29;
  uint32_t *v30;
  uint32_t *v31;
  size_t v32;
  size_t v33;
  int v34;
  int v35;
  size_t v36;
  size_t v37;
  size_t v38;
  int v39;
  int v40;
  uint32_t *v41;
  size_t v42;
  size_t v43;
  int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  char v50;
  int v51;
  int v52;
  size_t v53;
  size_t v54;
  int v55;
  unsigned int v56;
  char v57;
  typedef size_t _g4_t_v58;
  typedef int _g4_t_v59;
  typedef size_t _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef char _g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef unsigned int _g4_t_v68;
  typedef uint32_t *_g4_t_v69;
  typedef uint32_t *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef size_t _g4_t_v72;
  typedef const void *_g4_t_v73;
  typedef size_t _g4_t_v74;
  typedef uint32_t *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef char *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef char _g4_t_v81;
  typedef uint32_t *_g4_t_v82;
  typedef uint32_t *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef int _g4_t_v86;
  typedef char _g4_t_v87;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v58)) > _g4_s0 ? (12u + sizeof(_g4_t_v58)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v59)) > _g4_s1 ? (12u + sizeof(_g4_t_v59)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v60)) > _g4_s2 ? (12u + sizeof(_g4_t_v60)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v61)) > _g4_s3 ? (12u + sizeof(_g4_t_v61)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v62)) > _g4_s4 ? (16u + sizeof(_g4_t_v62)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v63)) > _g4_s5 ? (16u + sizeof(_g4_t_v63)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v64)) > _g4_s6 ? (16u + sizeof(_g4_t_v64)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v65)) > _g4_s7 ? (20u + sizeof(_g4_t_v65)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v66)) > _g4_s8 ? (20u + sizeof(_g4_t_v66)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v67)) > _g4_s9 ? (24u + sizeof(_g4_t_v67)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v68)) > _g4_s10 ? (24u + sizeof(_g4_t_v68)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v69)) > _g4_s11 ? (28u + sizeof(_g4_t_v69)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v70)) > _g4_s12 ? (32u + sizeof(_g4_t_v70)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v71)) > _g4_s13 ? (36u + sizeof(_g4_t_v71)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v72)) > _g4_s14 ? (36u + sizeof(_g4_t_v72)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v73)) > _g4_s15 ? (40u + sizeof(_g4_t_v73)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v74)) > _g4_s16 ? (40u + sizeof(_g4_t_v74)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v75)) > _g4_s17 ? (40u + sizeof(_g4_t_v75)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v76)) > _g4_s18 ? (44u + sizeof(_g4_t_v76)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v77)) > _g4_s19 ? (48u + sizeof(_g4_t_v77)) : _g4_s19,
    _g4_s21 = (62u + sizeof(_g4_t_v78)) > _g4_s20 ? (62u + sizeof(_g4_t_v78)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v79)) > _g4_s21 ? (68u + sizeof(_g4_t_v79)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v80)) > _g4_s22 ? (72u + sizeof(_g4_t_v80)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v81)) > _g4_s23 ? (76u + sizeof(_g4_t_v81)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v82)) > _g4_s24 ? (88u + sizeof(_g4_t_v82)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v83)) > _g4_s25 ? (92u + sizeof(_g4_t_v83)) : _g4_s25,
    _g4_s27 = (96u + sizeof(_g4_t_v84)) > _g4_s26 ? (96u + sizeof(_g4_t_v84)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v85)) > _g4_s27 ? (104u + sizeof(_g4_t_v85)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v86)) > _g4_s28 ? (108u + sizeof(_g4_t_v86)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v87)) > _g4_s29 ? (112u + sizeof(_g4_t_v87)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 12u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 16u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 16u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 20u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 20u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 24u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 40u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 40u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 44u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 48u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 62u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 68u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 72u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 76u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 88u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 92u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 96u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 104u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 108u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 112u);

  v82 = nullptr;
  v83 = nullptr;
  v84 = 0;
  GLFUtils::ListDir((GLFUtils::Self *)&v82, a2, (const char *)a3, a4);
  v4 = v82;
  v70 = v83;
  if ( v82 == v83 )
    goto LABEL_31;
  v76 = (int)(uintptr_t)(v82);
  v5 = (int)(uintptr_t)(v82);
  do
  {
    if ( *(uint8_t *)(v5 + 4) != 0 )
      goto LABEL_3;
    v6 = sub_1937F30(v5, "/", -1, 1u) + 1;
    v7 = sub_1937F30(v76, "\\", -1, 1u) + 1;
    if ( v6 > v7 )
      v7 = v6;
    if ( (unsigned int)v7 > *(uint32_t *)(*(uint32_t *)v76 - 12) )
      sub_1900210("basic_string::substr");
    sub_193A6F0(&v79, v76, v7, -1);
    v69 = a1 + 1;
    v8 = a1[2];
    if ( v8 == 0 )
    {
      v71 = (int)(uintptr_t)(a1 + 1);
LABEL_35:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v80), "na", (int)(uintptr_t)(&v78));
      v81 = 0;
      g4_std::string::construct_copy(&v85, &v79);
      g4_std::string::construct_copy(&v86, &v80);
      v87 = v81;
      if ( v69 == (uint32_t *)v71 )
      {
        if ( a1[5] != 0 )
        {
          v75 = (uint32_t *)a1[4];
          v66 = (uint32_t *)v75[4];
          v36 = *(v66 - 3);
          v37 = v36;
          v38 = *(v85 - 3);
          v63 = v85;
          if ( v38 <= v36 )
            v37 = *(v85 - 3);
          v72 = v37;
          v39 = memcmp(v66, v85, v37);
          if ( v39 == 0 )
            v39 = v36 - v38;
          if ( v39 < 0 )
          {
            LOBYTE(v68) = 1;
            if ( v69 != v75 )
            {
              v45 = v38 - v36;
              v46 = memcmp(v63, v66, v72);
              if ( v46 == 0 )
                v46 = v45;
              v68 = v46 >> 31;
            }
            v71 = opNew(0x1Cu);
            v17 = v71 + 20;
            if ( v71 != -16 )
            {
              g4_std::string::construct_copy(v71 + 16, &v85);
              g4_std::string::construct_copy(v17, &v86);
              *(uint8_t *)(v71 + 24) = v87;
            }
            sub_1904970(v68, v71, v75, v69);
            ++a1[5];
            goto LABEL_44;
          }
        }
      }
      else
      {
        v21 = *(uint32_t **)(v71 + 16);
        v67 = v85;
        v22 = *(v85 - 3);
        v74 = v22;
        if ( *(v21 - 3) <= v22 )
          v22 = *(v21 - 3);
        v59 = *(v21 - 3);
        v23 = memcmp(v85, v21, v22);
        v24 = v74 - v59;
        if ( v23 != 0 )
          v24 = v23;
        if ( v24 < 0 )
        {
          v29 = a1[3];
          if ( v29 == v71 )
          {
LABEL_74:
            v71 = opNew(0x1Cu);
            v17 = v71 + 20;
            if ( v71 != -16 )
            {
              g4_std::string::construct_copy(v71 + 16, &v85);
              g4_std::string::construct_copy(v17, &v86);
              *(uint8_t *)(v71 + 24) = v87;
            }
            sub_1904970(1, v71, v29, v69);
            ++a1[5];
            goto LABEL_44;
          }
          v30 = (uint32_t *)sub_1904940(v71);
          v31 = (uint32_t *)v30[4];
          v32 = v74;
          v65 = v30;
          v33 = *(v31 - 3);
          if ( v33 <= v74 )
            v32 = *(v31 - 3);
          v60 = v32;
          v34 = memcmp(v31, v67, v32);
          if ( v34 == 0 )
            v34 = v33 - v74;
          if ( v34 < 0 )
          {
            if ( v65[3] == 0 )
            {
              LOBYTE(v47) = 1;
              if ( v69 != v65 )
              {
                v48 = memcmp(v67, v31, v60);
                v49 = v74 - v33;
                if ( v48 != 0 )
                  v49 = v48;
                v47 = v49 >> 31;
              }
              v64 = v47;
              v71 = opNew(0x1Cu);
              v17 = v71 + 20;
              v50 = v64;
              if ( v71 != -16 )
              {
                g4_std::string::construct_copy(v71 + 16, &v85);
                g4_std::string::construct_copy(v17, &v86);
                *(uint8_t *)(v71 + 24) = v87;
                v50 = v64;
              }
              sub_1904970(v50, v71, v65, v69);
              ++a1[5];
              goto LABEL_44;
            }
            v35 = opNew(0x1Cu);
            if ( v35 != -16 )
            {
              g4_std::string::construct_copy(v35 + 16, &v85);
              g4_std::string::construct_copy(v35 + 20, &v86);
              *(uint8_t *)(v35 + 24) = v87;
            }
            sub_1904970(1, v35, v71, v69);
LABEL_59:
            v71 = v35;
            v17 = v35 + 20;
            ++a1[5];
            goto LABEL_44;
          }
        }
        else
        {
          v62 = v23;
          v25 = memcmp(v21, v67, v22);
          if ( v25 == 0 )
            v25 = v59 - v74;
          v17 = v71 + 20;
          if ( v25 >= 0 )
            goto LABEL_44;
          v40 = a1[4];
          if ( v40 == v71 )
          {
            v52 = *(uint32_t *)(v71 + 16);
            v53 = v74;
            v54 = *(uint32_t *)(v52 - 12);
            if ( v54 <= v74 )
              v53 = *(uint32_t *)(v52 - 12);
            v55 = memcmp(v67, *(const void **)(v71 + 16), v53);
            v56 = v74 - v54;
            if ( v55 != 0 )
              v56 = v55;
            v61 = v56 >> 31;
            v71 = opNew(0x1Cu);
            v17 = v71 + 20;
            v57 = v61;
            if ( v71 != -16 )
            {
              g4_std::string::construct_copy(v71 + 16, &v85);
              g4_std::string::construct_copy(v17, &v86);
              *(uint8_t *)(v71 + 24) = v87;
              v57 = v61;
            }
            sub_1904970(v57, v71, v40, v69);
            ++a1[5];
            goto LABEL_44;
          }
          v29 = sub_19048E0(v71);
          v41 = *(uint32_t **)(v29 + 16);
          v42 = v74;
          v43 = *(v41 - 3);
          if ( v43 <= v74 )
            v42 = *(v41 - 3);
          v44 = memcmp(v67, v41, v42);
          if ( v44 == 0 )
            v44 = v74 - v43;
          if ( v44 < 0 )
          {
            if ( *(uint32_t *)(v71 + 12) != 0 )
              goto LABEL_74;
            v51 = v74 - v59;
            if ( v62 != 0 )
              v51 = v62;
            v35 = opNew(0x1Cu);
            if ( v35 != -16 )
            {
              g4_std::string::construct_copy(v35 + 16, &v85);
              g4_std::string::construct_copy(v35 + 20, &v86);
              *(uint8_t *)(v35 + 24) = v87;
            }
            sub_1904970(v51 < 0, v35, v71, v69);
            goto LABEL_59;
          }
        }
      }
      sub_13D3520((int)(uintptr_t)(&v77), a1, (int)(uintptr_t)(&v85));
      v71 = v77;
      v17 = v77 + 20;
LABEL_44:
      v26 = (void *)(v86 - 12);
      if ( (uint32_t *)(v86 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v86 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v26);
      }
      v27 = (char *)(v85 - 3);
      if ( v85 - 3 != dword_213B808 && __sync_fetch_and_add(v85 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v27);
      v28 = (void *)(v80 - 12);
      if ( (uint32_t *)(v80 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v80 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v28);
      }
      goto LABEL_24;
    }
    v73 = v79;
    v71 = (int)(uintptr_t)(a1 + 1);
    v9 = *((uint32_t *)v79 - 3);
    do
    {
      while ( 1 )
      {
        v10 = *(uint32_t *)(*(uint32_t *)(v8 + 16) - 12);
        v11 = v10;
        v58 = v9;
        if ( v9 <= v10 )
          v11 = v9;
        v12 = memcmp(*(const void **)(v8 + 16), v73, v11);
        v9 = v58;
        v13 = v10 - v58;
        if ( v12 == 0 )
          v12 = v13;
        if ( v12 < 0 )
          break;
        v71 = v8;
        v8 = *(uint32_t *)(v8 + 8);
        if ( v8 == 0 )
          goto LABEL_17;
      }
      v8 = *(uint32_t *)(v8 + 12);
    }
    while ( v8 != 0 );
LABEL_17:
    if ( v69 == (uint32_t *)v71 )
      goto LABEL_35;
    v14 = *(uint32_t *)(*(uint32_t *)(v71 + 16) - 12);
    v15 = v14;
    if ( v58 <= v14 )
      v15 = v58;
    v16 = memcmp(v73, *(const void **)(v71 + 16), v15);
    if ( v16 == 0 )
      v16 = v58 - v14;
    if ( v16 < 0 )
      goto LABEL_35;
    v17 = v71 + 20;
LABEL_24:
    g4_std::string::assign_str(v17, v76);
    *(uint8_t *)(v71 + 24) = *(uint8_t *)(v76 + 4);
    v18 = v79 - 12;
    if ( v79 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v79 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v18);
LABEL_3:
    v76 += 8;
    v5 = v76;
  }
  while ( v70 != (uint32_t *)v76 );
  v19 = v83;
  v4 = v82;
  if ( v83 != v82 )
  {
    do
    {
      v20 = (uint32_t *)(*v4 - 12);
      if ( v20 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v4 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v20);
      v4 += 2;
    }
    while ( v4 != v19 );
    v4 = v82;
  }
LABEL_31:
  if ( v4 != nullptr )
    opDelete(v4);
}

// ----------------------------------------------------------------------------
// Function: GLFUtils::CheckExtension  (binary VA: 0x13d4650)
// Original: GLFUtils::CheckExtension
// ----------------------------------------------------------------------------
int GLFUtils::CheckExtension(GLFUtils::Self *self, char *a2)
{
  glf::Self *v2;
  int v3;

  v2 = glf::Stristr(self, a2);
  v3 = 0;
  if ( v2 != nullptr )
    LOBYTE(v3) = glf::Stricmp(v2, a2) == 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sub_13D4900  (binary VA: 0x13d4900)
// Original: sub_13D4900
// ----------------------------------------------------------------------------
int sub_13D4900()
{
  sub_1900D70(&unk_211973C);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_211973C, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: g4_std::vector_glwebtools_NetInterfaceI_0efdbd::M_insert_aux  (binary VA: 0x13d4ee0)
// Original: std::vector<glwebtools::NetInterfaceInfo,glwebtools::SAllocator<glwebtools::NetInterfaceInfo,(glwebtools::MemHint)4>>::_M_insert_aux
// ----------------------------------------------------------------------------
int g4_std::vector_glwebtools_NetInterfaceI_0efdbd::M_insert_aux(int *a1, uint32_t *a2, int a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  void *v8;
  int result;
  void *v10;
  int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  int v20;
  uint32_t *v21;
  unsigned int v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t _g4_t_v31[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v27)) > _g4_s4 ? (20u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v28)) > _g4_s5 ? (24u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v29)) > _g4_s6 ? (28u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v30)) > _g4_s7 ? (40u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v31)) > _g4_s8 ? (44u + sizeof(_g4_t_v31)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);

  v3 = a2;
  v4 = a1[1];
  if ( v4 != a1[2] )
  {
    v5 = 0;
    if ( v4 != 0 )
    {
      g4_std::string::construct_copy(a1[1], v4 - 8);
      g4_std::string::construct_copy(v4 + 4, v4 - 4);
      v5 = a1[1];
    }
    a1[1] = v5 + 8;
    g4_std::string::construct_copy(&v30, a3);
    g4_std::string::construct_copy(v31, a3 + 4);
    v6 = a1[1] - 16;
    v7 = (v6 - (int)(uintptr_t)(a2)) >> 3;
    if ( v7 > 0 )
    {
      while ( 1 )
      {
        g4_std::string::assign_str(v6, v6 - 8);
        g4_std::string::assign_str(v6 + 4, v6 - 4);
        if ( --v7 == 0 )
          break;
        v6 -= 8;
      }
      v3 = a2;
    }
    g4_std::string::assign_str(v3, &v30);
    g4_std::string::assign_str(v3 + 1, v31);
    v8 = (void *)(v31[0] - 12);
    if ( (uint32_t *)(v31[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    result = v30;
    v10 = (void *)(v30 - 12);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      return ((g4_std::string::Rep::M_destroy(v10)), (int)0);
    }
    return result;
  }
  v11 = *a1;
  v12 = (v4 - *a1) >> 3;
  if ( v12 != 0 )
  {
    v22 = 2 * v12;
    if ( v12 > 2 * v12 || v22 > 0x1FFFFFFF )
    {
      v28 = -8;
      v13 = ((int)(uintptr_t)(a2) - v11) >> 3;
    }
    else
    {
      v13 = ((int)(uintptr_t)(a2) - v11) >> 3;
      v28 = 16 * v12;
      if ( v22 == 0 )
      {
        v14 = 8;
        v27 = 0;
        goto LABEL_15;
      }
    }
  }
  else
  {
    v28 = 8;
    v13 = ((int)(uintptr_t)(a2) - v11) >> 3;
  }
  v23 = v13;
  v27 = sub_4EBE70(v28, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  v14 = v27 + 8;
  v13 = v23;
LABEL_15:
  if ( v27 + 8 * v13 != 0 )
  {
    v24 = v27 + 8 * v13;
    g4_std::string::construct_copy(v24, a3);
    g4_std::string::construct_copy(v24 + 4, a3 + 4);
  }
  v15 = *a1;
  if ( (uint32_t *)*a1 != a2 )
  {
    v16 = v27;
    do
    {
      if ( v16 != 0 )
      {
        g4_std::string::construct_copy(v16, v15);
        g4_std::string::construct_copy(v16 + 4, v15 + 4);
      }
      v15 += 8;
      v16 += 8;
    }
    while ( (uint32_t *)v15 != a2 );
    v14 = v16 + 8;
  }
  v26 = (uint32_t *)a1[1];
  if ( v26 != a2 )
  {
    v17 = a1[1];
    do
    {
      if ( v14 != 0 )
      {
        g4_std::string::construct_copy(v14, v3);
        g4_std::string::construct_copy(v14 + 4, v3 + 1);
      }
      v3 += 2;
      v14 += 8;
    }
    while ( (uint32_t *)v17 != v3 );
    v26 = (uint32_t *)a1[1];
  }
  v25 = *a1;
  if ( (uint32_t *)*a1 != v26 )
  {
    v29 = v14;
    v18 = (uint32_t *)*a1;
    v19 = *a1 + 4;
    do
    {
      v20 = *(uint32_t *)((char *)v18 + v19 - v25);
      if ( (uint32_t *)(v20 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v20 - 12));
      }
      v21 = (uint32_t *)(*v18 - 12);
      if ( v21 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v18 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v21);
      v18 += 2;
    }
    while ( v18 != v26 );
    v14 = v29;
    v25 = *a1;
  }
  if ( v25 != 0 )
    sub_4EBEE0(v25);
  *a1 = v27;
  a1[1] = v14;
  a1[2] = v28 + v27;
  return v28 + v27;
}


