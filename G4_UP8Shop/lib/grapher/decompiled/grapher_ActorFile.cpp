#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorFile.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorFile::Construct  (binary VA: 0x13c1a00)
// Original: grapher::ActorFile::ActorFile
// ----------------------------------------------------------------------------
int grapher::ActorFile::Construct(uint32_t *a1, int a2, int a3, int a4)
{
  int result;

  *a1 = a2;
  a1[1] = a3;
  result = (int)(uintptr_t)(g4_std::string::construct_copy(a1 + 2, a4));
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  a1[12] = 0;
  a1[13] = 0;
  a1[14] = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorFile::FindActor  (binary VA: 0x13c1a90)
// Original: grapher::ActorFile::FindActor
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * grapher::ActorFile::FindActor(int a1, const void **a2)
{
  grapher::ActorBase::Self *result;
  grapher::ActorBase::Self **v3;
  uint32_t *s1;

  result = nullptr;
  v3 = *(grapher::ActorBase::Self ***)(a1 + 24);
  if ( v3 != *(grapher::ActorBase::Self ***)(a1 + 28) )
  {
    do
    {
      s1 = *(uint32_t **)grapher::ActorBase::GetName(*v3);
      if ( *(s1 - 3) == *((uint32_t *)*a2 - 3) && memcmp(s1, *a2, *(s1 - 3)) == 0 )
        return *v3;
      ++v3;
    }
    while ( *(grapher::ActorBase::Self ***)(a1 + 28) != v3 );
    return nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorFile::FindVariable  (binary VA: 0x13c1b10)
// Original: grapher::ActorFile::FindVariable
// ----------------------------------------------------------------------------
uint32_t * grapher::ActorFile::FindVariable(grapher::ActorFile::Self *self, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *result;

  v2 = *((uint32_t **)self + 3);
  v3 = *((uint32_t **)self + 4);
  result = nullptr;
  if ( v2 != v3 )
  {
    while ( 1 )
    {
      result = (uint32_t *)*v2;
      if ( (a2 & 0xFFFFF) == (*(uint32_t *)*v2 & 0xFFFFF) )
        break;
      if ( ++v2 == v3 )
        return nullptr;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorFile::FindVariable  (binary VA: 0x13c1b50)
// Original: grapher::ActorFile::FindVariable
// ----------------------------------------------------------------------------
grapher::ActorVariable::Self * grapher::ActorFile::FindVariable(int a1, const void **a2, uint8_t *a3)
{
  grapher::ActorVariable::Self *v3;
  grapher::ActorVariable::Self **v4;
  uint32_t *s1;
  uint32_t *AliasName;
  grapher::ActorVariable::Self *result;
  uint8_t v8[29];

  v3 = nullptr;
  *a3 = 0;
  v4 = *(grapher::ActorVariable::Self ***)(a1 + 12);
  if ( v4 == *(grapher::ActorVariable::Self ***)(a1 + 16) )
    return v3;
  while ( 1 )
  {
    v3 = *v4;
    s1 = *(uint32_t **)grapher::ActorVariable::GetName(*v4);
    if ( *(s1 - 3) == *((uint32_t *)*a2 - 3) && memcmp(s1, *a2, *(s1 - 3)) == 0 )
      break;
    if ( *(grapher::ActorVariable::Self ***)(a1 + 16) == ++v4 )
      return nullptr;
  }
  AliasName = (uint32_t *)grapher::ActorVariable::GetAliasName(v3);
  if ( *(uint32_t *)(*AliasName - 12) == 0 )
    return v3;
  result = (grapher::ActorVariable::Self *)grapher::ActorFile::FindVariable(a1, AliasName, v8);
  *a3 = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorFile::ConnectActorToActor  (binary VA: 0x13c1c20)
// Original: grapher::ActorFile::ConnectActorToActor
// ----------------------------------------------------------------------------
grapher::ActorBase::Self * grapher::ActorFile::ConnectActorToActor(int a1, const void **a2, void **a3, const void **a4, void **a5)
{
  grapher::ActorBase::Self *Actor;
  grapher::ActorBase::Self *result;
  grapher::ActorBase::Self *v7;
  int PinIndex;
  int v9;

  Actor = grapher::ActorFile::FindActor(a1, a2);
  result = grapher::ActorFile::FindActor(a1, a4);
  v7 = result;
  if ( result != nullptr && Actor != nullptr )
  {
    PinIndex = grapher::ActorBase::GetPinIndex((int)(uintptr_t)(Actor), a3, 0);
    v9 = grapher::ActorBase::GetPinIndex((int)(uintptr_t)(v7), a5, 1);
    return grapher::ActorBase::AddOutputPinConnection(Actor, PinIndex, v7, v9);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorFile::ConnectActorToVariable  (binary VA: 0x13c1cd0)
// Original: grapher::ActorFile::ConnectActorToVariable
// ----------------------------------------------------------------------------
grapher::ActorVariable::Self * grapher::ActorFile::ConnectActorToVariable(int a1, const void **a2, void **a3, const void **a4)
{
  grapher::ActorBase::Self *Actor;
  grapher::ActorVariable::Self *result;
  grapher::ActorVariable::Self *v6;
  int PropertyIndex;
  typedef char _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  Actor = grapher::ActorFile::FindActor(a1, a2);
  v8 = 0;
  result = grapher::ActorFile::FindVariable(a1, a4, &v8);
  v6 = result;
  if ( result != nullptr && Actor != nullptr )
  {
    PropertyIndex = grapher::ActorBase::GetPropertyIndex((int)(uintptr_t)(Actor), a3);
    return (grapher::ActorVariable::Self *)(grapher::ActorBase::AddVariable(Actor, PropertyIndex, v6));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorFile::HasStartScript  (binary VA: 0x13c1d60)
// Original: grapher::ActorFile::HasStartScript
// ----------------------------------------------------------------------------
int grapher::ActorFile::HasStartScript(grapher::ActorFile::Self *self, unsigned int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int result;

  v2 = *((uint32_t **)self + 12);
  v3 = *((uint32_t **)self + 13);
  result = 0;
  if ( v2 != v3 )
  {
    result = 1;
    if ( *v2 != a2 )
    {
      do
      {
        if ( ++v2 == v3 )
          return 0;
      }
      while ( *v2 != a2 );
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorFile::Unload  (binary VA: 0x13c1da0)
// Original: grapher::ActorFile::Unload
// ----------------------------------------------------------------------------
int grapher::ActorFile::Unload(grapher::ActorFile::Self *self, grapher::ActorContext::Self *a2)
{
  grapher::ActorContext::Self *v2;
  int v3;
  int i;
  grapher::ActorBase::Self *v5;
  int v6;
  int result;
  int j;
  void *v9;

  v2 = a2;
  if ( a2 == nullptr )
  {
    v2 = (grapher::ActorContext::Self *)&unk_20D6720;
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
  }
  v3 = *((uint32_t *)self + 7);
  for ( i = *((uint32_t *)self + 6); v3 != i; *((uint32_t *)self + 7) = v3 )
  {
    v5 = *(grapher::ActorBase::Self **)(v3 - 4);
    G4_VCALL<void>(v5, 16, v2);
    grapher::ActorManager::UnloadActor(*(grapher::ActorManager::Self **)self, v5);
    G4_VCALL<void>(v5, 4);
    i = *((uint32_t *)self + 6);
    v3 = *((uint32_t *)self + 7) - 4;
  }
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  if ( i != 0 )
    sub_4EB800(i);
  v6 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 11) = 0;
  if ( v6 != 0 )
    sub_4EB800(v6);
  result = *((uint32_t *)self + 4);
  for ( j = *((uint32_t *)self + 3); result != j; *((uint32_t *)self + 4) = result )
  {
    v9 = *(void **)(result - 4);
    if ( v9 != nullptr )
    {
      grapher::ActorVariable::Destroy(*(grapher::ActorVariable::Self **)(result - 4));
      opDelete(v9);
      result = *((uint32_t *)self + 4);
      j = *((uint32_t *)self + 3);
    }
    result -= 4;
  }
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  if ( j != 0 )
    return sub_4EB800(j);
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorFile::GetActor  (binary VA: 0x13c1f10)
// Original: grapher::ActorFile::GetActor
// ----------------------------------------------------------------------------
int grapher::ActorFile::GetActor(grapher::ActorFile::Self *self, int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 6) + 4 * (a2 & 0xFFFFF));
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorFile::RemoveActorVariable  (binary VA: 0x13c1f30)
// Original: grapher::ActorFile::RemoveActorVariable
// ----------------------------------------------------------------------------
void grapher::ActorFile::RemoveActorVariable(grapher::ActorFile::Self *self, unsigned int a2)
{
  grapher::ActorVariable::Self **dest;
  grapher::ActorVariable::Self **i;
  grapher::ActorVariable::Self **v4;
  grapher::ActorVariable::Self **v5;
  grapher::ActorVariable::Self *v6;

  dest = *((grapher::ActorVariable::Self ***)self + 3);
  for ( i = *((grapher::ActorVariable::Self ***)self + 4); i != dest; *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(i) )
  {
    while ( *(uint32_t *)*dest != a2 )
    {
      if ( i == ++dest )
        return;
    }
    v6 = *dest;
    grapher::ActorVariable::Destroy(*dest);
    opDelete(v6);
    v4 = *((grapher::ActorVariable::Self ***)self + 4);
    v5 = dest + 1;
    if ( v4 != dest + 1 && v4 - v5 != 0 )
    {
      memmove(dest, dest + 1, 4 * (v4 - v5));
      v4 = *((grapher::ActorVariable::Self ***)self + 4);
    }
    i = v4 - 1;
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorFile::Save  (binary VA: 0x13c2020)
// Original: grapher::ActorFile::Save
// ----------------------------------------------------------------------------
int grapher::ActorFile::Save(uint32_t *a1, const char **a2)
{
  int v2;
  uint8_t *v3;
  uint8_t *v4;
  unsigned int v5;
  void *v6;
  void *v7;
  char *v8;
  int v9;
  uint32_t *v10;
  int v11;
  char v12;
  int v13;
  grapher::ActorBase::Self **v14;
  grapher::ActorBase::Self *v15;
  grapher::ActorVariable::Self *Variable;
  const char *v17;
  int v18;
  size_t v19;
  unsigned int v20;
  char *v21;
  int v22;
  char *v23;
  grapher::ActorBase::Self **v24;
  grapher::ActorBase::Self *v25;
  uint32_t *TemplateName;
  int *v27;
  int v28;
  uint32_t **i;
  uint32_t *v30;
  int result;
  void *v32;
  int v33;
  unsigned int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  uint32_t *v42;
  int v43;
  char v44;
  int v45;
  void *v46;
  size_t v47;
  unsigned int v48;
  int v49;
  size_t v50;
  grapher::ActorBase::Self **v51;
  grapher::ActorBase::Self **v52;
  grapher::ActorBase::Self **v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint8_t *_g4_t_v57;
  typedef size_t _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef grapher::ActorBase::Self **_g4_t_v61;
  typedef unsigned int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef grapher::ActorBase::Self **_g4_t_v64;
  typedef grapher::ActorBase::Self **_g4_t_v65;
  typedef unsigned int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef size_t _g4_t_v68;
  typedef unsigned int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint32_t _g4_t_v71[4];
  typedef uint32_t _g4_t_v72[4];
  typedef int _g4_t_v73[3];
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef char *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef int (**_g4_t_v78)(int);
  typedef int _g4_t_v79[7];
  typedef uint8_t _g4_t_v80[8];
  typedef uint8_t _g4_t_v81[68];
  typedef uint32_t _g4_t_v82[29];
  typedef int16_t _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (0u + sizeof(_g4_t_v54)) > _g4_s0 ? (0u + sizeof(_g4_t_v54)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v55)) > _g4_s1 ? (0u + sizeof(_g4_t_v55)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v56)) > _g4_s2 ? (0u + sizeof(_g4_t_v56)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v57)) > _g4_s3 ? (4u + sizeof(_g4_t_v57)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v58)) > _g4_s4 ? (4u + sizeof(_g4_t_v58)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v59)) > _g4_s5 ? (8u + sizeof(_g4_t_v59)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v60)) > _g4_s6 ? (12u + sizeof(_g4_t_v60)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v61)) > _g4_s7 ? (16u + sizeof(_g4_t_v61)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v62)) > _g4_s8 ? (16u + sizeof(_g4_t_v62)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v63)) > _g4_s9 ? (20u + sizeof(_g4_t_v63)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v64)) > _g4_s10 ? (24u + sizeof(_g4_t_v64)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v65)) > _g4_s11 ? (28u + sizeof(_g4_t_v65)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v66)) > _g4_s12 ? (28u + sizeof(_g4_t_v66)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v67)) > _g4_s13 ? (32u + sizeof(_g4_t_v67)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v68)) > _g4_s14 ? (32u + sizeof(_g4_t_v68)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v69)) > _g4_s15 ? (32u + sizeof(_g4_t_v69)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v70)) > _g4_s16 ? (48u + sizeof(_g4_t_v70)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v71)) > _g4_s17 ? (52u + sizeof(_g4_t_v71)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v72)) > _g4_s18 ? (68u + sizeof(_g4_t_v72)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v73)) > _g4_s19 ? (84u + sizeof(_g4_t_v73)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v74)) > _g4_s20 ? (96u + sizeof(_g4_t_v74)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v75)) > _g4_s21 ? (100u + sizeof(_g4_t_v75)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v76)) > _g4_s22 ? (104u + sizeof(_g4_t_v76)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v77)) > _g4_s23 ? (108u + sizeof(_g4_t_v77)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v78)) > _g4_s24 ? (112u + sizeof(_g4_t_v78)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v79)) > _g4_s25 ? (116u + sizeof(_g4_t_v79)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v80)) > _g4_s26 ? (144u + sizeof(_g4_t_v80)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v81)) > _g4_s27 ? (152u + sizeof(_g4_t_v81)) : _g4_s27,
    _g4_s29 = (220u + sizeof(_g4_t_v82)) > _g4_s28 ? (220u + sizeof(_g4_t_v82)) : _g4_s28,
    _g4_s30 = (336u + sizeof(_g4_t_v83)) > _g4_s29 ? (336u + sizeof(_g4_t_v83)) : _g4_s29,
    _g4_s31 = (340u + sizeof(_g4_t_v84)) > _g4_s30 ? (340u + sizeof(_g4_t_v84)) : _g4_s30,
    _g4_s32 = (344u + sizeof(_g4_t_v85)) > _g4_s31 ? (344u + sizeof(_g4_t_v85)) : _g4_s31,
    _g4_s33 = (348u + sizeof(_g4_t_v86)) > _g4_s32 ? (348u + sizeof(_g4_t_v86)) : _g4_s32,
    _g4_s34 = (352u + sizeof(_g4_t_v87)) > _g4_s33 ? (352u + sizeof(_g4_t_v87)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 0u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 4u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 4u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 20u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 24u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 48u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 52u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 68u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 84u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 96u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 100u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 104u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 108u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 112u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 116u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 144u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 152u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 220u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 336u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 340u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 344u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 348u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 352u);

  v2 = (int)(uintptr_t)(a1 + 2);
  v3 = (uint8_t *)a1[2];
  if ( *((int *)v3 - 1) < 0 )
  {
    v4 = &v3[*((uint32_t *)v3 - 3)];
  }
  else
  {
    sub_19397C0(a1 + 2);
    v3 = (uint8_t *)a1[2];
    v4 = &v3[*((uint32_t *)v3 - 3)];
    if ( *((int *)v3 - 1) >= 0 )
    {
      v57 = &v3[*((uint32_t *)v3 - 3)];
      sub_19397C0(v2);
      v4 = v57;
      v3 = (uint8_t *)a1[2];
    }
  }
  for ( ; v3 != v4; ++v3 )
  {
    while ( *v3 != 92 )
    {
      if ( ++v3 == v4 )
        goto LABEL_9;
    }
    *v3 = 47;
  }
LABEL_9:
  v71[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( (uint8_t)grapher::isFile(a2) != 0 || (uint8_t)grapher::isDir() == 0 )
  {
    g4_std::string::assign_str(v71, a2);
    goto LABEL_15;
  }
  v5 = sub_1937F30(v2, "/", -1, 1u);
  if ( v5 == -1 )
  {
    g4_std::string::construct_copy(&v75, a2);
    g4_std::string::append_str(&v75, v2);
    g4_std::string::assign_str(v71, &v75);
    v7 = (void *)(v75 - 12);
    if ( (uint32_t *)(v75 - 12) == dword_213B808
      || __sync_fetch_and_add((volatile int32_t *)(v75 - 4), 0xFFFFFFFF) > 0 )
    {
      goto LABEL_15;
    }
    goto LABEL_98;
  }
  if ( v5 > *(uint32_t *)(a1[2] - 12) )
    sub_1900210("basic_string::substr");
  sub_193A6F0(v72, v2, v5, -1);
  g4_std::string::construct_copy(&v74, a2);
  g4_std::string::append_str(&v74, v72);
  g4_std::string::assign_str(v71, &v74);
  v6 = (void *)(v74 - 12);
  if ( (uint32_t *)(v74 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v74 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v72[0] - 12);
  if ( (uint32_t *)(v72[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v72[0] - 4), 0xFFFFFFFF) <= 0 )
  {
LABEL_98:
    g4_std::string::Rep::M_destroy(v7);
  }
LABEL_15:
  v8 = (char *)v71[0];
  sub_1900810(v82);
  v82[28] = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v78 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
  v82[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  *(int *)((char *)&v79[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  sub_19119D0((char *)&v79[-1] + (uint32_t)(uintptr_t)(*(v78 - 3)), 0);
  v78 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
  v82[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  sub_190A6D0(v79);
  sub_19119D0(v82, v79);
  if ( sub_190AE40((int)(uintptr_t)(v79), v8, 20) != 0 )
    sub_1911530((char *)&v79[-1] + (uint32_t)(uintptr_t)(*(v78 - 3)), 0);
  else
    sub_1911530((char *)&v79[-1] + (uint32_t)(uintptr_t)(*(v78 - 3)), *(int *)((char *)&v79[4] + (uint32_t)(uintptr_t)(*(v78 - 3))) | 4);
  if ( (uint8_t)sub_1907FD0(v81) == 0 )
  {
    g4_std_compat::ostream_write(dword_213A780, "Grapher could not open save file: ", 34);
    v42 = (uint32_t *)g4_std_compat::ostream_write(dword_213A780, v71[0], *(uint32_t *)(v71[0] - 12));
    v43 = *(uint32_t *)((char *)v42 + *(uint32_t *)(*v42 - 12) + 124);
    if ( v43 != 0 )
    {
      if ( *(uint8_t *)(v43 + 28) != 0 )
      {
        v44 = *(uint8_t *)(v43 + 39);
      }
      else
      {
        v56 = *(uint32_t *)((char *)v42 + *(uint32_t *)(*v42 - 12) + 124);
        sub_18FFC70(v43);
        v44 = G4_VCALL<int>(v56, 24, 10);
      }
      v45 = (int)(uintptr_t)(g4_std::ostream::put(v42, v44));
      g4_std_compat::ostream_flush(v45);
      v78 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
      v82[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
      v79[0] = (int)(uintptr_t)(&off_20A9DA8);
      sub_190AC60(v79);
      sub_1908070(v81);
      v79[0] = (int)(uintptr_t)(&off_20AB2C8);
      sub_1902180(v80);
      v78 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
      *(int *)((char *)&v79[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
      v82[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
      sub_1900B90(v82);
      result = v71[0];
      v46 = (void *)(v71[0] - 12);
      if ( (uint32_t *)(v71[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v71[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        return ((g4_std::string::Rep::M_destroy(v46)), (int)0);
      }
      return result;
    }
LABEL_110:
    sub_18FFF30(v9);
  }
  g4_std_compat::ostream_write(dword_213A780, "Grapher saving file : ", 22);
  v10 = (uint32_t *)g4_std_compat::ostream_write(dword_213A780, v71[0], *(uint32_t *)(v71[0] - 12));
  v11 = *(uint32_t *)((char *)v10 + *(uint32_t *)(*v10 - 12) + 124);
  if ( v11 == 0 )
    goto LABEL_110;
  if ( *(uint8_t *)(v11 + 28) != 0 )
  {
    v12 = *(uint8_t *)(v11 + 39);
  }
  else
  {
    v55 = *(uint32_t *)((char *)v10 + *(uint32_t *)(*v10 - 12) + 124);
    sub_18FFC70(v11);
    v12 = G4_VCALL<int>(v55, 24, 10);
  }
  v13 = (int)(uintptr_t)(g4_std::ostream::put(v10, v12));
  g4_std_compat::ostream_flush(v13);
  v14 = (grapher::ActorBase::Self **)a1[6];
  if ( v14 == (grapher::ActorBase::Self **)a1[7] )
  {
    v77 = 0;
    sub_192C9E0(&v78, &v77, 4);
    v63 = 0;
    goto LABEL_40;
  }
  v65 = nullptr;
  v64 = nullptr;
  v63 = 0;
  do
  {
    while ( 1 )
    {
      v15 = *v14;
      if ( G4_VCALL<uint8_t>(*v14, 20) != 0 )
        break;
      v67 = v63;
LABEL_24:
      if ( ++v14 == (grapher::ActorBase::Self **)a1[7] )
        goto LABEL_30;
    }
    if ( v65 == v64 )
    {
      v47 = 4;
      v66 = ((int)(uintptr_t)(v64) - v63) >> 2;
      if ( v66 != 0 )
      {
        v48 = 2 * (((int)(uintptr_t)(v64) - v63) >> 2);
        v47 = 0xFFFFFFFC;
        if ( v66 <= v48 && v48 <= 0x3FFFFFFF )
          v47 = 8 * v66;
      }
      v58 = v47;
      v49 = gll_operator_new(v47, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
      v62 = v49 + 4;
      v67 = v49;
      v50 = v58;
      v51 = (grapher::ActorBase::Self **)(v49 + 4 * v66);
      if ( v51 != nullptr )
        *v51 = v15;
      v52 = (grapher::ActorBase::Self **)v63;
      if ( v64 != (grapher::ActorBase::Self **)v63 )
      {
        v53 = (grapher::ActorBase::Self **)v49;
        do
        {
          if ( v53 != nullptr )
            *v53 = *v52;
          ++v52;
          ++v53;
        }
        while ( v52 != v64 );
        v62 = v49 + 4 * (((unsigned int)(uintptr_t)(v52) - v63 - 4) >> 2) + 8;
      }
      if ( v63 != 0 )
      {
        v54 = v49;
        sub_4EB800(v63);
        v50 = v58;
        v49 = v54;
      }
      v63 = v49;
      v65 = (grapher::ActorBase::Self **)(v49 + v50);
      v64 = (grapher::ActorBase::Self **)v62;
      goto LABEL_24;
    }
    if ( v64 != nullptr )
      *v64 = v15;
    ++v64;
    ++v14;
    v67 = v63;
  }
  while ( v14 != (grapher::ActorBase::Self **)a1[7] );
LABEL_30:
  v77 = ((int)(uintptr_t)(v64) - v67) >> 2;
  sub_192C9E0(&v78, &v77, 4);
  if ( (grapher::ActorBase::Self **)v63 != v64 )
  {
    v61 = (grapher::ActorBase::Self **)v63;
    do
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(*v61, 0);
      sub_13C1580(&v76, Variable);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v73), v76, (int)(uintptr_t)(&v70));
      GLFUtils::ToLowerCase(v73, 0, -1);
      v17 = (const char *)v73[0];
      v59 = v73[0];
      v60 = v73[0];
      if ( LOBYTE(g4_guard_5c4b7d5421[0]) == 0 )
      {
        if ( _cxa_guard_acquire(g4_guard_5c4b7d5421) != 0 )
        {
          v33 = 0;
          v69 = 0;
          memset(g4_fnstatic_9e962ebe99, 0, sizeof(g4_fnstatic_9e962ebe99));
          v34 = 0;
          while ( 1 )
          {
            if ( (v34 & 2) != 0 )
              v33 |= 0x40u;
            if ( (v34 & 4) != 0 )
              v33 |= 0x20u;
            if ( (v34 & 8) != 0 )
              v33 |= 0x10u;
            if ( (v34 & 0x10) != 0 )
              v33 |= 8u;
            if ( (v34 & 0x20) != 0 )
              v33 |= 4u;
            if ( (v34 & 0x40) != 0 )
              v33 |= 2u;
            if ( v34 >> 7 != 0 )
              v33 |= 1u;
            v35 = (2 * ((v33 << 25) ^ ((char)v33 >> 7) & 0x4C11DB7))
                ^ (((v33 << 25) ^ ((char)v33 >> 7) & 0x4C11DB7) >> 31)
                & 0x4C11DB7;
            v36 = 31;
            v37 = (2 * ((2 * v35) ^ (v35 >> 31) & 0x4C11DB7))
                ^ (((2 * v35) ^ (v35 >> 31) & 0x4C11DB7) >> 31)
                & 0x4C11DB7;
            v38 = (2 * ((2 * v37) ^ (v37 >> 31) & 0x4C11DB7))
                ^ (((2 * v37) ^ (v37 >> 31) & 0x4C11DB7) >> 31)
                & 0x4C11DB7;
            v39 = (2 * ((2 * v38) ^ (v38 >> 31) & 0x4C11DB7))
                ^ (((2 * v38) ^ (v38 >> 31) & 0x4C11DB7) >> 31)
                & 0x4C11DB7;
            v40 = 0;
            do
            {
              if ( (v39 & 1) != 0 )
                v40 |= 1 << v36;
              --v36;
              v39 >>= 1;
            }
            while ( v36 != -1 );
            g4_fnstatic_9e962ebe99[v69] = v40;
            v41 = v69 + 1;
            v69 = v41;
            if ( v41 == 256 )
              break;
            v34 = v41;
            v33 = -(v41 & 1) & 0x80;
          }
          _cxa_guard_release(g4_guard_5c4b7d5421);
        }
        v60 = v73[0];
        v17 = (const char *)v59;
      }
      v18 = 0;
      v19 = strlen(v17);
      if ( v19 != 0 )
      {
        v20 = 0xFFFFFFFF;
        v68 = v19;
        v21 = (char *)v59;
        do
        {
          v22 = *v21++;
          v20 = (v20 >> 8) ^ g4_fnstatic_9e962ebe99[(uint8_t)v20 ^ v22];
          --v68;
        }
        while ( v68 != 0 );
        v18 = ~v20;
      }
      if ( (uint32_t *)(v60 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v60 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std_compat::string_rep_destroy((void *)(v60 - 12));
      }
      v77 = v18;
      sub_192C9E0(&v78, &v77, 4);
      v23 = v76 - 12;
      if ( v76 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v76 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std_compat::string_rep_destroy(v23);
      }
      ++v61;
    }
    while ( v64 != v61 );
  }
LABEL_40:
  v77 = (a1[7] - a1[6]) >> 2;
  sub_192C9E0(&v78, &v77, 4);
  v24 = (grapher::ActorBase::Self **)a1[6];
  if ( (grapher::ActorBase::Self **)a1[7] != v24 )
  {
    do
    {
      v25 = *v24++;
      v77 = *((uint32_t *)v25 + 1);
      sub_192C9E0(&v78, &v77, 4);
      TemplateName = (uint32_t *)grapher::ActorBase::GetTemplateName(v25);
      v77 = *(uint32_t *)(*TemplateName - 12);
      sub_192C9E0(&v78, &v77, 4);
      sub_192C9E0(&v78, *TemplateName, *(uint32_t *)(*TemplateName - 12));
    }
    while ( v24 != (grapher::ActorBase::Self **)a1[7] );
  }
  v77 = (a1[4] - a1[3]) >> 2;
  sub_192C9E0(&v78, &v77, 4);
  v27 = (int *)a1[3];
  if ( (int *)a1[4] != v27 )
  {
    do
    {
      v28 = *v27++;
      grapher::ActorVariable::Serialize(v28, &v78);
    }
    while ( v27 != (int *)a1[4] );
  }
  v77 = (a1[7] - a1[6]) >> 2;
  sub_192C9E0(&v78, &v77, 4);
  for ( i = (uint32_t **)a1[6]; i != (uint32_t **)a1[7]; ++i )
  {
    v30 = *i;
    grapher::ActorBase::SerializeConnections(v30, (int)(uintptr_t)(&v78));
  }
  if ( v63 != 0 )
    sub_4EB800(v63);
  v78 = (int (**)(int))(uintptr_t)(&off_20A9EAC);
  v82[0] = (uint32_t)(uintptr_t)(&off_20A9EC0);
  v79[0] = (int)(uintptr_t)(&off_20A9DA8);
  sub_190AC60(v79);
  sub_1908070(v81);
  v79[0] = (int)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v80);
  v78 = (int (**)(int))(uintptr_t)(&off_20A9E6C);
  *(int *)((char *)&v79[-1] + (uint32_t)*(&off_20A9E6C - 3)) = (int)(uintptr_t)(&off_20A9E80);
  v82[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v82);
  result = v71[0];
  v32 = (void *)(v71[0] - 12);
  if ( (uint32_t *)(v71[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v71[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return g4_std_compat::string_rep_destroy(v32);
  }
  return result;
}


// ============================================================================
// Address:   0x13c2d40 (size: 1689 bytes)
// Symbol:    _ZN7grapher9ActorFile13LoadingFinishEv
// Demangled: grapher::ActorFile::LoadingFinish(void)
// ============================================================================
void grapher::ActorFile::LoadingFinish(grapher::ActorFile::Self *self)
{
  grapher::ActorBase::Self *v1;
  char *v2;
  unsigned int v3;
  int v4;
  bool v5;
  grapher::ActorVariable::Self *Variable;
  char *v7;
  char *v8;
  size_t v9;
  unsigned int v10;
  int v11;
  int *v12;
  int v13;
  void *v14;
  int v15;
  size_t v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  size_t v23;
  unsigned int v24;
  int v25;
  int v26;
  int *v27;
  unsigned int v28;
  grapher::ActorFile::Self *v29;
  int *v30;
  int *v31;
  int *v32;
  int *v33;
  uint32_t *v34;
  grapher::ActorFile::Self *v35;
  int v36;
  typedef uint8_t *_g4_t_v37;
  typedef unsigned int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef grapher::ActorFile::Self *_g4_t_v40;
  typedef int _g4_t_NumProperties;
  typedef grapher::ActorBase::Self **_g4_t_v42;
  typedef grapher::ActorBase::Self *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_i;
  typedef char *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef void *_g4_t_v49;
  typedef size_t _g4_t_v50;
  typedef size_t _g4_t_v51;
  typedef uint8_t _g4_t_v52[15];
  typedef int _g4_t_v53;
  typedef char *_g4_t_s;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef grapher::ActorFile::Self **_g4_t_v57;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v37)) > _g4_s0 ? (8u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v38)) > _g4_s1 ? (32u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v39)) > _g4_s2 ? (36u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v40)) > _g4_s3 ? (40u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_NumProperties)) > _g4_s4 ? (44u + sizeof(_g4_t_NumProperties)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v42)) > _g4_s5 ? (48u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v43)) > _g4_s6 ? (52u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v44)) > _g4_s7 ? (52u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_i)) > _g4_s8 ? (56u + sizeof(_g4_t_i)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v46)) > _g4_s9 ? (56u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v47)) > _g4_s10 ? (56u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v48)) > _g4_s11 ? (56u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v49)) > _g4_s12 ? (64u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v50)) > _g4_s13 ? (64u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v51)) > _g4_s14 ? (64u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (81u + sizeof(_g4_t_v52)) > _g4_s15 ? (81u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v53)) > _g4_s16 ? (96u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_s)) > _g4_s17 ? (100u + sizeof(_g4_t_s)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v55)) > _g4_s18 ? (104u + sizeof(_g4_t_v55)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v56)) > _g4_s19 ? (108u + sizeof(_g4_t_v56)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v57)) > _g4_s20 ? (124u + sizeof(_g4_t_v57)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 36u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_NumProperties &NumProperties = *reinterpret_cast<_g4_t_NumProperties *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 52u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 56u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 56u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 64u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 81u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 96u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 100u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 104u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 108u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 124u);

  v57 = &self;
  v40 = self;
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((__guard *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((__guard *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D6720, &unk_20D1280);
  }
  v42 = *((grapher::ActorBase::Self ***)v40 + 6);
  if ( v42 != *((grapher::ActorBase::Self ***)v40 + 7) )
  {
    while ( 1 )
    {
      v1 = *v42;
      v43 = *v42;
      grapher::ActorBase::GetName(*v42);
      grapher::ActorBase::GetNumProperties(v1);
      if ( *((uint8_t *)v1 + 44) == 0 )
        break;
LABEL_4:
      if ( ++v42 == *((grapher::ActorBase::Self ***)v40 + 7) )
        return;
    }
    NumProperties = grapher::ActorBase::GetNumProperties(v1);
    if ( NumProperties > 0 )
    {
      for ( i = 0; i != NumProperties; ++i )
      {
        s = nullptr;
        v55 = 0;
        v56 = 0;
        grapher::ActorBase::GetVariables(v43, i, (int)(uintptr_t)(&s));
        v2 = s;
        if ( (unsigned int)(v55 - (uint32_t)(uintptr_t)(s)) >> 2 != 0 )
        {
          v3 = 0;
          do
          {
            grapher::ActorVariable::GetName(*(grapher::ActorVariable::Self **)&v2[4 * v3]);
            grapher::ActorVariable::ToString((grapher::ActorVariable::Self *)&v53);
            v4 = 4 * v3;
            v49 = (void *)(v53 - 12);
            if ( (uint32_t *)(v53 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std_compat::string_rep_destroy(v49);
              v4 = 4 * v3;
            }
            ++v3;
            grapher::ActorContext::SaveAVar((grapher::ActorContext::Self *)&unk_20D6720, *(grapher::ActorVariable::Self **)&s[v4]);
            v2 = s;
          }
          while ( v3 < (v55 - (int)(uintptr_t)(s)) >> 2 );
        }
        if ( v2 != nullptr )
          operator delete(v2);
      }
    }
    (*(void (**)(grapher::ActorBase::Self *, uint8_t *))(*(uint32_t *)v43 + 12))(v43, v37);
    v5 = byte_20D5B50 == 0;
    *((uint8_t *)v43 + 44) = 1;
    if ( v5 && _cxa_guard_acquire((__guard *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((__guard *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      if ( byte_20D5BE5 == 0 )
        goto LABEL_17;
    }
    else if ( byte_20D5BE5 == 0 )
    {
      goto LABEL_17;
    }
    (*(void (**)(grapher::ActorBase::Self *))(*(uint32_t *)v43 + 40))(v43);
LABEL_17:
    if ( (*(uint8_t (**)(grapher::ActorBase::Self *))(*(uint32_t *)v43 + 20))(v43) != 0 )
    {
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((__guard *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((__guard *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      if ( (dword_20D5BE0 & 0x10) != 0 )
      {
        Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v43, 0);
        sub_13C1580(&v52[3], Variable);
        g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&s), *(char **)&v52[3], (int)(uintptr_t)(v52));
        GLFUtils::ToLowerCase(&s, 0, -1);
        v7 = s;
        v46 = s;
        v8 = s;
        if ( LOBYTE(g4_guard_5c4b7d5421[0]) == 0 )
        {
          if ( _cxa_guard_acquire(g4_guard_5c4b7d5421) != 0 )
          {
            v15 = 0;
            memset(g4_fnstatic_9e962ebe99, 0, sizeof(g4_fnstatic_9e962ebe99));
            v50 = 0;
            v16 = 0;
            while ( 1 )
            {
              if ( (v16 & 2) != 0 )
                v15 |= 0x40u;
              if ( (v16 & 4) != 0 )
                v15 |= 0x20u;
              if ( (v16 & 8) != 0 )
                v15 |= 0x10u;
              if ( (v16 & 0x10) != 0 )
                v15 |= 8u;
              if ( (v16 & 0x20) != 0 )
                v15 |= 4u;
              if ( (v16 & 0x40) != 0 )
                v15 |= 2u;
              if ( v16 >> 7 != 0 )
                v15 |= 1u;
              v17 = (2 * ((v15 << 25) ^ ((char)v15 >> 7) & 0x4C11DB7))
                  ^ (((v15 << 25) ^ ((char)v15 >> 7) & 0x4C11DB7) >> 31)
                  & 0x4C11DB7;
              v18 = 31;
              v19 = (2 * ((2 * v17) ^ (v17 >> 31) & 0x4C11DB7))
                  ^ (((2 * v17) ^ (v17 >> 31) & 0x4C11DB7) >> 31)
                  & 0x4C11DB7;
              v20 = (2 * ((2 * v19) ^ (v19 >> 31) & 0x4C11DB7))
                  ^ (((2 * v19) ^ (v19 >> 31) & 0x4C11DB7) >> 31)
                  & 0x4C11DB7;
              v21 = (2 * ((2 * v20) ^ (v20 >> 31) & 0x4C11DB7))
                  ^ (((2 * v20) ^ (v20 >> 31) & 0x4C11DB7) >> 31)
                  & 0x4C11DB7;
              v22 = 0;
              do
              {
                if ( (v21 & 1) != 0 )
                  v22 |= 1 << v18;
                --v18;
                v21 >>= 1;
              }
              while ( v18 != -1 );
              g4_fnstatic_9e962ebe99[v50] = v22;
              v23 = v50 + 1;
              v50 = v23;
              if ( v23 == 256 )
                break;
              v16 = v23;
              v15 = -(v23 & 1) & 0x80;
            }
            _cxa_guard_release(g4_guard_5c4b7d5421);
          }
          v8 = s;
          v7 = v46;
        }
        v9 = strlen(v7);
        v44 = 0;
        if ( v9 != 0 )
        {
          v47 = v9;
          v10 = 0xFFFFFFFF;
          do
          {
            v11 = *v7++;
            v10 = (v10 >> 8) ^ g4_fnstatic_9e962ebe99[(uint8_t)v10 ^ v11];
            --v47;
          }
          while ( v47 != 0 );
          v44 = ~v10;
        }
        if ( v8 - 12 != (char *)dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)v8 - 1, 0xFFFFFFFF) <= 0 )
        {
          v37 = &v52[1];
          g4_std::string::Rep::M_destroy(v8 - 12);
        }
        v12 = *((int **)v40 + 13);
        if ( v12 == *((int **)v40 + 14) )
        {
          v24 = ((int)(uintptr_t)(v12) - *((uint32_t *)v40 + 12)) >> 2;
          v51 = 4;
          if ( v24 != 0 )
          {
            v51 = 0xFFFFFFFC;
            if ( v24 <= 2 * v24 )
            {
              v25 = 8 * v24;
              if ( 2 * v24 > 0x3FFFFFFF )
                v25 = -4;
              v51 = v25;
            }
          }
          v26 = gll_operator_new(v51, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          v27 = (int *)(v26 + 4 * v24);
          v28 = v26 + 4;
          if ( v27 != nullptr )
            *v27 = v44;
          v29 = v40;
          v30 = *((int **)v40 + 12);
          if ( v12 != v30 )
          {
            v31 = *((int **)v40 + 12);
            v32 = (int *)v26;
            do
            {
              if ( v32 != nullptr )
                *v32 = *v31;
              ++v31;
              ++v32;
            }
            while ( v12 != v31 );
            v29 = v40;
            v28 = v26 + 4 * ((unsigned int)((char *)v12 - (char *)(v30 + 1)) >> 2) + 8;
          }
          v48 = *((uint32_t *)v29 + 13);
          if ( v12 != (int *)v48 )
          {
            v33 = v12;
            v34 = (uint32_t *)v28;
            do
            {
              if ( v34 != nullptr )
                *v34 = *v33;
              ++v33;
              ++v34;
            }
            while ( (int *)v48 != v33 );
            v28 += 4 * ((unsigned int)(v48 - (uint32_t)(uintptr_t)(v12 + 1)) >> 2) + 4;
          }
          v35 = v40;
          v36 = *((uint32_t *)v40 + 12);
          if ( v36 != 0 )
          {
            v39 = v26;
            v38 = v28;
            sub_4EB800(v36);
            v28 = v38;
            v26 = v39;
            v35 = v40;
          }
          *((uint32_t *)v35 + 12) = v26;
          *((uint32_t *)v35 + 13) = v28;
          *((uint32_t *)v35 + 14) = v51 + v26;
        }
        else
        {
          v13 = 0;
          if ( v12 != nullptr )
          {
            *v12 = v44;
            v13 = *((uint32_t *)v40 + 13);
          }
          *((uint32_t *)v40 + 13) = v13 + 4;
        }
        v14 = (void *)(*(uint32_t *)&v52[3] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v52[3] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v52[3] - 4), 0xFFFFFFFF) <= 0 )
        {
          v37 = &v52[2];
          g4_std::string::Rep::M_destroy(v14);
        }
      }
    }
    goto LABEL_4;
  }

}
// ----------------------------------------------------------------------------
// Function: grapher::ActorFile::Load  (binary VA: 0x13c33e0)
// Original: grapher::ActorFile::Load
// ----------------------------------------------------------------------------
int grapher::ActorFile::Load(grapher::ActorFile::Self *self, bool a2)
{
  int result;
  grapher::ActorFile::Self *v3;
  bool v4;
  char v5;
  char v6;
  grapher::Self *v7;
  void *v8;
  grapher::Self **v9;
  int v10;
  char *v11;
  char *v12;
  grapher::ActorBase::Self *v13;
  grapher::ActorBase::Self **v14;
  int v15;
  void *v16;
  void *v17;
  char *v18;
  char *v19;
  size_t v20;
  char *v21;
  size_t v22;
  void *v23;
  char *v24;
  void *v25;
  void *v26;
  void *v27;
  void *v28;
  char *v29;
  char *v30;
  void *v31;
  void *v32;
  void *v33;
  char *v34;
  int v35;
  bool v36;
  char *v37;
  char *v38;
  char *v39;
  void *v40;
  void *v41;
  void *v42;
  char *v43;
  size_t v44;
  void *v45;
  char *v46;
  char *v47;
  char *v48;
  void *v49;
  void *v50;
  int v51;
  int v52;
  bool v53;
  int v54;
  size_t *v55;
  int v56;
  int v57;
  char v58;
  unsigned int v59;
  unsigned int v60;
  size_t *v61;
  size_t *v62;
  size_t *v63;
  size_t *v64;
  size_t *v65;
  int v66;
  int v67;
  uint32_t *v68;
  int v69;
  int v70;
  int v71;
  void (*v72)(int *, int, int);
  unsigned int v73;
  int v74;
  uint32_t *v75;
  unsigned int v76;
  uint32_t *v77;
  uint32_t *v78;
  uint32_t *v79;
  uint32_t *v80;
  grapher::ActorVariable::Self *v81;
  grapher::ActorVariable::Self **v82;
  int v83;
  int v84;
  grapher::ActorBase::Self *Actor;
  int v86;
  unsigned int v87;
  bool v88;
  uint32_t *v89;
  int v90;
  void *v91;
  unsigned int v92;
  int v93;
  grapher::Self **v94;
  grapher::ActorFile::Self *v95;
  uint32_t *v96;
  char *v97;
  uint32_t *v98;
  uint32_t *v99;
  unsigned int v100;
  int v101;
  grapher::ActorVariable::Self **v102;
  unsigned int v103;
  uint32_t *v104;
  uint32_t *v105;
  char *v106;
  uint32_t *v107;
  int v108;
  unsigned int v109;
  int v110;
  int v111;
  grapher::ActorBase::Self **v112;
  unsigned int v113;
  uint32_t *v114;
  grapher::ActorFile::Self *v115;
  char *v116;
  uint32_t *v117;
  int v118;
  unsigned int v119;
  unsigned int v120;
  uint32_t *v121;
  char *v122;
  uint32_t *v123;
  uint32_t *v124;
  unsigned int v125;
  bool v126; // cc
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef size_t *_g4_t_v129;
  typedef int _g4_t_v130;
  typedef bool _g4_t_v131;
  typedef bool _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef bool _g4_t_v138;
  typedef int _g4_t_v139;
  typedef uint8_t _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef size_t _g4_t_v144;
  typedef size_t _g4_t_v145;
  typedef size_t _g4_t_v146;
  typedef size_t _g4_t_v147;
  typedef int _g4_t_v148;
  typedef size_t _g4_t_v149;
  typedef size_t _g4_t_v150;
  typedef size_t _g4_t_v151;
  typedef size_t _g4_t_v152;
  typedef size_t _g4_t_v153;
  typedef size_t _g4_t_v154;
  typedef size_t _g4_t_v155;
  typedef size_t _g4_t_v156;
  typedef size_t _g4_t_v157;
  typedef size_t _g4_t_v158;
  typedef size_t _g4_t_v159;
  typedef size_t _g4_t_v160;
  typedef size_t _g4_t_v161;
  typedef size_t _g4_t_v162;
  typedef size_t _g4_t_v163;
  typedef size_t _g4_t_v164;
  typedef char *_g4_t_v165;
  typedef size_t _g4_t_v166;
  typedef grapher::ActorFile::Self *_g4_t_v167;
  typedef grapher::ActorFile::Self *_g4_t_v168;
  typedef grapher::ActorFile::Self *_g4_t_v169;
  typedef grapher::ActorFile::Self *_g4_t_v170;
  typedef void *_g4_t_v171;
  typedef char *_g4_t_v172;
  typedef unsigned int _g4_t_v173;
  typedef void *_g4_t_v174;
  typedef char *_g4_t_v175;
  typedef unsigned int _g4_t_v176;
  typedef void *_g4_t_v177;
  typedef char *_g4_t_v178;
  typedef unsigned int _g4_t_v179;
  typedef void *_g4_t_v180;
  typedef char *_g4_t_v181;
  typedef int _g4_t_v182;
  typedef char *_g4_t_v183;
  typedef bool _g4_t_v184;
  typedef bool _g4_t_v185;
  typedef size_t _g4_t_v186;
  typedef char *_g4_t_v187;
  typedef size_t _g4_t_v188;
  typedef size_t _g4_t_v189;
  typedef uint32_t *_g4_t_v190;
  typedef uint32_t *_g4_t_v191;
  typedef uint32_t *_g4_t_v192;
  typedef int _g4_t_v193;
  typedef int _g4_t_v194;
  typedef int _g4_t_v195;
  typedef int _g4_t_v196;
  typedef int _g4_t_v197;
  typedef int _g4_t_v198[4];
  typedef int _g4_t_v199[4];
  typedef int _g4_t_v200[4];
  typedef int _g4_t_v201[4];
  typedef int _g4_t_v202[4];
  typedef int _g4_t_v203[4];
  typedef int _g4_t_v204[4];
  typedef int _g4_t_v205[4];
  typedef int _g4_t_v206[4];
  typedef int _g4_t_v207[4];
  typedef int _g4_t_v208;
  typedef int _g4_t_v209;
  typedef int _g4_t_v210;
  typedef char _g4_t_v211[4];
  typedef char _g4_t_v212[4];
  typedef int _g4_t_v213;
  typedef char _g4_t_v214[4];
  typedef char _g4_t_v215[4];
  typedef int _g4_t_v216;
  typedef char _g4_t_v217[4];
  typedef char _g4_t_v218[4];
  typedef int _g4_t_v219;
  typedef int _g4_t_v220[4];
  typedef int _g4_t_v221;
  typedef int _g4_t_v222;
  typedef int _g4_t_v223;
  typedef int _g4_t_v224;
  typedef uint32_t _g4_t_v225[4];
  typedef int _g4_t_v226;
  typedef size_t _g4_t_v227;
  typedef int _g4_t_v228[13];
  typedef uint32_t _g4_t_v229[135];
  enum : size_t {
    _g4_s0 = 1040u,
    _g4_s1 = (4u + sizeof(_g4_t_v127)) > _g4_s0 ? (4u + sizeof(_g4_t_v127)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v128)) > _g4_s1 ? (4u + sizeof(_g4_t_v128)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v129)) > _g4_s2 ? (4u + sizeof(_g4_t_v129)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v130)) > _g4_s3 ? (4u + sizeof(_g4_t_v130)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v131)) > _g4_s4 ? (32u + sizeof(_g4_t_v131)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v132)) > _g4_s5 ? (32u + sizeof(_g4_t_v132)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v133)) > _g4_s6 ? (32u + sizeof(_g4_t_v133)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v134)) > _g4_s7 ? (32u + sizeof(_g4_t_v134)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v135)) > _g4_s8 ? (32u + sizeof(_g4_t_v135)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v136)) > _g4_s9 ? (32u + sizeof(_g4_t_v136)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v137)) > _g4_s10 ? (32u + sizeof(_g4_t_v137)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v138)) > _g4_s11 ? (32u + sizeof(_g4_t_v138)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v139)) > _g4_s12 ? (36u + sizeof(_g4_t_v139)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v140)) > _g4_s13 ? (36u + sizeof(_g4_t_v140)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v141)) > _g4_s14 ? (36u + sizeof(_g4_t_v141)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v142)) > _g4_s15 ? (40u + sizeof(_g4_t_v142)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v143)) > _g4_s16 ? (40u + sizeof(_g4_t_v143)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v144)) > _g4_s17 ? (44u + sizeof(_g4_t_v144)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v145)) > _g4_s18 ? (44u + sizeof(_g4_t_v145)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v146)) > _g4_s19 ? (48u + sizeof(_g4_t_v146)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v147)) > _g4_s20 ? (48u + sizeof(_g4_t_v147)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v148)) > _g4_s21 ? (48u + sizeof(_g4_t_v148)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v149)) > _g4_s22 ? (48u + sizeof(_g4_t_v149)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v150)) > _g4_s23 ? (48u + sizeof(_g4_t_v150)) : _g4_s23,
    _g4_s25 = (52u + sizeof(_g4_t_v151)) > _g4_s24 ? (52u + sizeof(_g4_t_v151)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v152)) > _g4_s25 ? (52u + sizeof(_g4_t_v152)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v153)) > _g4_s26 ? (52u + sizeof(_g4_t_v153)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v154)) > _g4_s27 ? (52u + sizeof(_g4_t_v154)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v155)) > _g4_s28 ? (52u + sizeof(_g4_t_v155)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v156)) > _g4_s29 ? (56u + sizeof(_g4_t_v156)) : _g4_s29,
    _g4_s31 = (56u + sizeof(_g4_t_v157)) > _g4_s30 ? (56u + sizeof(_g4_t_v157)) : _g4_s30,
    _g4_s32 = (56u + sizeof(_g4_t_v158)) > _g4_s31 ? (56u + sizeof(_g4_t_v158)) : _g4_s31,
    _g4_s33 = (56u + sizeof(_g4_t_v159)) > _g4_s32 ? (56u + sizeof(_g4_t_v159)) : _g4_s32,
    _g4_s34 = (56u + sizeof(_g4_t_v160)) > _g4_s33 ? (56u + sizeof(_g4_t_v160)) : _g4_s33,
    _g4_s35 = (56u + sizeof(_g4_t_v161)) > _g4_s34 ? (56u + sizeof(_g4_t_v161)) : _g4_s34,
    _g4_s36 = (56u + sizeof(_g4_t_v162)) > _g4_s35 ? (56u + sizeof(_g4_t_v162)) : _g4_s35,
    _g4_s37 = (56u + sizeof(_g4_t_v163)) > _g4_s36 ? (56u + sizeof(_g4_t_v163)) : _g4_s36,
    _g4_s38 = (56u + sizeof(_g4_t_v164)) > _g4_s37 ? (56u + sizeof(_g4_t_v164)) : _g4_s37,
    _g4_s39 = (56u + sizeof(_g4_t_v165)) > _g4_s38 ? (56u + sizeof(_g4_t_v165)) : _g4_s38,
    _g4_s40 = (56u + sizeof(_g4_t_v166)) > _g4_s39 ? (56u + sizeof(_g4_t_v166)) : _g4_s39,
    _g4_s41 = (60u + sizeof(_g4_t_v167)) > _g4_s40 ? (60u + sizeof(_g4_t_v167)) : _g4_s40,
    _g4_s42 = (60u + sizeof(_g4_t_v168)) > _g4_s41 ? (60u + sizeof(_g4_t_v168)) : _g4_s41,
    _g4_s43 = (60u + sizeof(_g4_t_v169)) > _g4_s42 ? (60u + sizeof(_g4_t_v169)) : _g4_s42,
    _g4_s44 = (60u + sizeof(_g4_t_v170)) > _g4_s43 ? (60u + sizeof(_g4_t_v170)) : _g4_s43,
    _g4_s45 = (64u + sizeof(_g4_t_v171)) > _g4_s44 ? (64u + sizeof(_g4_t_v171)) : _g4_s44,
    _g4_s46 = (64u + sizeof(_g4_t_v172)) > _g4_s45 ? (64u + sizeof(_g4_t_v172)) : _g4_s45,
    _g4_s47 = (64u + sizeof(_g4_t_v173)) > _g4_s46 ? (64u + sizeof(_g4_t_v173)) : _g4_s46,
    _g4_s48 = (64u + sizeof(_g4_t_v174)) > _g4_s47 ? (64u + sizeof(_g4_t_v174)) : _g4_s47,
    _g4_s49 = (64u + sizeof(_g4_t_v175)) > _g4_s48 ? (64u + sizeof(_g4_t_v175)) : _g4_s48,
    _g4_s50 = (64u + sizeof(_g4_t_v176)) > _g4_s49 ? (64u + sizeof(_g4_t_v176)) : _g4_s49,
    _g4_s51 = (64u + sizeof(_g4_t_v177)) > _g4_s50 ? (64u + sizeof(_g4_t_v177)) : _g4_s50,
    _g4_s52 = (64u + sizeof(_g4_t_v178)) > _g4_s51 ? (64u + sizeof(_g4_t_v178)) : _g4_s51,
    _g4_s53 = (64u + sizeof(_g4_t_v179)) > _g4_s52 ? (64u + sizeof(_g4_t_v179)) : _g4_s52,
    _g4_s54 = (64u + sizeof(_g4_t_v180)) > _g4_s53 ? (64u + sizeof(_g4_t_v180)) : _g4_s53,
    _g4_s55 = (64u + sizeof(_g4_t_v181)) > _g4_s54 ? (64u + sizeof(_g4_t_v181)) : _g4_s54,
    _g4_s56 = (68u + sizeof(_g4_t_v182)) > _g4_s55 ? (68u + sizeof(_g4_t_v182)) : _g4_s55,
    _g4_s57 = (68u + sizeof(_g4_t_v183)) > _g4_s56 ? (68u + sizeof(_g4_t_v183)) : _g4_s56,
    _g4_s58 = (72u + sizeof(_g4_t_v184)) > _g4_s57 ? (72u + sizeof(_g4_t_v184)) : _g4_s57,
    _g4_s59 = (72u + sizeof(_g4_t_v185)) > _g4_s58 ? (72u + sizeof(_g4_t_v185)) : _g4_s58,
    _g4_s60 = (72u + sizeof(_g4_t_v186)) > _g4_s59 ? (72u + sizeof(_g4_t_v186)) : _g4_s59,
    _g4_s61 = (72u + sizeof(_g4_t_v187)) > _g4_s60 ? (72u + sizeof(_g4_t_v187)) : _g4_s60,
    _g4_s62 = (72u + sizeof(_g4_t_v188)) > _g4_s61 ? (72u + sizeof(_g4_t_v188)) : _g4_s61,
    _g4_s63 = (72u + sizeof(_g4_t_v189)) > _g4_s62 ? (72u + sizeof(_g4_t_v189)) : _g4_s62,
    _g4_s64 = (72u + sizeof(_g4_t_v190)) > _g4_s63 ? (72u + sizeof(_g4_t_v190)) : _g4_s63,
    _g4_s65 = (72u + sizeof(_g4_t_v191)) > _g4_s64 ? (72u + sizeof(_g4_t_v191)) : _g4_s64,
    _g4_s66 = (72u + sizeof(_g4_t_v192)) > _g4_s65 ? (72u + sizeof(_g4_t_v192)) : _g4_s65,
    _g4_s67 = (76u + sizeof(_g4_t_v193)) > _g4_s66 ? (76u + sizeof(_g4_t_v193)) : _g4_s66,
    _g4_s68 = (80u + sizeof(_g4_t_v194)) > _g4_s67 ? (80u + sizeof(_g4_t_v194)) : _g4_s67,
    _g4_s69 = (84u + sizeof(_g4_t_v195)) > _g4_s68 ? (84u + sizeof(_g4_t_v195)) : _g4_s68,
    _g4_s70 = (88u + sizeof(_g4_t_v196)) > _g4_s69 ? (88u + sizeof(_g4_t_v196)) : _g4_s69,
    _g4_s71 = (92u + sizeof(_g4_t_v197)) > _g4_s70 ? (92u + sizeof(_g4_t_v197)) : _g4_s70,
    _g4_s72 = (112u + sizeof(_g4_t_v198)) > _g4_s71 ? (112u + sizeof(_g4_t_v198)) : _g4_s71,
    _g4_s73 = (128u + sizeof(_g4_t_v199)) > _g4_s72 ? (128u + sizeof(_g4_t_v199)) : _g4_s72,
    _g4_s74 = (144u + sizeof(_g4_t_v200)) > _g4_s73 ? (144u + sizeof(_g4_t_v200)) : _g4_s73,
    _g4_s75 = (160u + sizeof(_g4_t_v201)) > _g4_s74 ? (160u + sizeof(_g4_t_v201)) : _g4_s74,
    _g4_s76 = (176u + sizeof(_g4_t_v202)) > _g4_s75 ? (176u + sizeof(_g4_t_v202)) : _g4_s75,
    _g4_s77 = (192u + sizeof(_g4_t_v203)) > _g4_s76 ? (192u + sizeof(_g4_t_v203)) : _g4_s76,
    _g4_s78 = (208u + sizeof(_g4_t_v204)) > _g4_s77 ? (208u + sizeof(_g4_t_v204)) : _g4_s77,
    _g4_s79 = (224u + sizeof(_g4_t_v205)) > _g4_s78 ? (224u + sizeof(_g4_t_v205)) : _g4_s78,
    _g4_s80 = (240u + sizeof(_g4_t_v206)) > _g4_s79 ? (240u + sizeof(_g4_t_v206)) : _g4_s79,
    _g4_s81 = (256u + sizeof(_g4_t_v207)) > _g4_s80 ? (256u + sizeof(_g4_t_v207)) : _g4_s80,
    _g4_s82 = (272u + sizeof(_g4_t_v208)) > _g4_s81 ? (272u + sizeof(_g4_t_v208)) : _g4_s81,
    _g4_s83 = (276u + sizeof(_g4_t_v209)) > _g4_s82 ? (276u + sizeof(_g4_t_v209)) : _g4_s82,
    _g4_s84 = (280u + sizeof(_g4_t_v210)) > _g4_s83 ? (280u + sizeof(_g4_t_v210)) : _g4_s83,
    _g4_s85 = (284u + sizeof(_g4_t_v211)) > _g4_s84 ? (284u + sizeof(_g4_t_v211)) : _g4_s84,
    _g4_s86 = (288u + sizeof(_g4_t_v212)) > _g4_s85 ? (288u + sizeof(_g4_t_v212)) : _g4_s85,
    _g4_s87 = (292u + sizeof(_g4_t_v213)) > _g4_s86 ? (292u + sizeof(_g4_t_v213)) : _g4_s86,
    _g4_s88 = (296u + sizeof(_g4_t_v214)) > _g4_s87 ? (296u + sizeof(_g4_t_v214)) : _g4_s87,
    _g4_s89 = (300u + sizeof(_g4_t_v215)) > _g4_s88 ? (300u + sizeof(_g4_t_v215)) : _g4_s88,
    _g4_s90 = (304u + sizeof(_g4_t_v216)) > _g4_s89 ? (304u + sizeof(_g4_t_v216)) : _g4_s89,
    _g4_s91 = (308u + sizeof(_g4_t_v217)) > _g4_s90 ? (308u + sizeof(_g4_t_v217)) : _g4_s90,
    _g4_s92 = (312u + sizeof(_g4_t_v218)) > _g4_s91 ? (312u + sizeof(_g4_t_v218)) : _g4_s91,
    _g4_s93 = (316u + sizeof(_g4_t_v219)) > _g4_s92 ? (316u + sizeof(_g4_t_v219)) : _g4_s92,
    _g4_s94 = (320u + sizeof(_g4_t_v220)) > _g4_s93 ? (320u + sizeof(_g4_t_v220)) : _g4_s93,
    _g4_s95 = (336u + sizeof(_g4_t_v221)) > _g4_s94 ? (336u + sizeof(_g4_t_v221)) : _g4_s94,
    _g4_s96 = (340u + sizeof(_g4_t_v222)) > _g4_s95 ? (340u + sizeof(_g4_t_v222)) : _g4_s95,
    _g4_s97 = (344u + sizeof(_g4_t_v223)) > _g4_s96 ? (344u + sizeof(_g4_t_v223)) : _g4_s96,
    _g4_s98 = (348u + sizeof(_g4_t_v224)) > _g4_s97 ? (348u + sizeof(_g4_t_v224)) : _g4_s97,
    _g4_s99 = (352u + sizeof(_g4_t_v225)) > _g4_s98 ? (352u + sizeof(_g4_t_v225)) : _g4_s98,
    _g4_s100 = (368u + sizeof(_g4_t_v226)) > _g4_s99 ? (368u + sizeof(_g4_t_v226)) : _g4_s99,
    _g4_s101 = (372u + sizeof(_g4_t_v227)) > _g4_s100 ? (372u + sizeof(_g4_t_v227)) : _g4_s100,
    _g4_s102 = (376u + sizeof(_g4_t_v228)) > _g4_s101 ? (376u + sizeof(_g4_t_v228)) : _g4_s101,
    _g4_s103 = (428u + sizeof(_g4_t_v229)) > _g4_s102 ? (428u + sizeof(_g4_t_v229)) : _g4_s102
  };
  alignas(16) uint8_t _g4_sf[_g4_s103];
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 4u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 4u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 4u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 4u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 32u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 32u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 32u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 32u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 32u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 32u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 32u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 32u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 36u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 36u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 36u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 40u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 40u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 44u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 44u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 48u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 48u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 48u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 48u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 48u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 52u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 52u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 52u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 52u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 52u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 56u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 56u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 56u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 56u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 56u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 56u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 56u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 56u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 56u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 56u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 56u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 60u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 60u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 60u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 60u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 64u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 64u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 64u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 64u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 64u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 64u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 64u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 64u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 64u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 64u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 64u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 68u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 68u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 72u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 72u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 72u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 72u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 72u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 72u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 72u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 72u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 72u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 76u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 80u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 84u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 88u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 92u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 112u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 128u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 144u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 160u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 176u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 192u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 208u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 224u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 240u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 256u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 272u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 276u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 280u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 284u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 288u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 292u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 296u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 300u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 304u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 308u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 312u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 316u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 320u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 336u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 340u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 344u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 348u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 352u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 368u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 372u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 376u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 428u);

  result = 1;
  v229[131] = (uint32_t)(uintptr_t)(&self);
  v3 = self;
  v4 = a2;
  if ( *((uint32_t *)self + 7) != *((uint32_t *)self + 6) )
    return result;
  *((uint32_t *)self + 13) = *((uint32_t *)self + 12);
  if ( byte_20D5B50 == 0 )
  {
    v131 = v4;
    v51 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50);
    v4 = v131;
    if ( v51 != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      v4 = v131;
    }
  }
  v5 = dword_20D5BE0;
  if ( (dword_20D5BE0 & 5) != 5 )
  {
    if ( byte_20D5B50 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      v5 = dword_20D5BE0;
    }
    v6 = v5;
    result = 0;
    if ( (v6 & 0x11) == 0x11 )
    {
      grapher::ActorBase::SetNewFileId(*((grapher::ActorBase::Self **)v3 + 1), v127);
      grapher::ActorVariable::SetNewFileId(*((grapher::ActorVariable::Self **)v3 + 1), v128);
      sub_B7F7C0(v229);
      sub_B80300(v228);
      sub_B7CE80(v212);
      sub_B7CE80(v211);
      pugi::xml_node::first_child(&v222);
      while ( pugi::xml_node::child(&v222) != -1 )
      {
        sub_B7C550(v225);
        pugi::xml_node::attribute(&v193);
        v225[0] = v193;
        if ( pugi::xml_attribute::as_int(v225) != -1 )
        {
          v7 = (grapher::Self *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorFile.cpp"), 308);
          grapher::ActorVariable::Construct(v7, v222);
          *(uint32_t *)v7 = (*((uint32_t *)v3 + 1) << 20) | *(uint32_t *)v7 & 0xFFFFF;
          grapher::ActorVariable::GetName(v7);
          grapher::ActorVariable::ToString((grapher::ActorVariable::Self *)&v213);
          v8 = (void *)(v213 - 12);
          if ( (uint32_t *)(v213 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v213 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          v9 = *((grapher::Self ***)v3 + 4);
          if ( v9 == *((grapher::Self ***)v3 + 5) )
          {
            v92 = 1;
            v173 = ((int)(uintptr_t)(v9) - *((uint32_t *)v3 + 3)) >> 2;
            if ( v173 == 0
              || (v93 = 0x3FFFFFFF, v92 = 2 * (((int)(uintptr_t)(v9) - *((uint32_t *)v3 + 3)) >> 2), v173 <= v92) && v92 <= 0x3FFFFFFF )
            {
              v93 = v92;
            }
            v135 = *((uint32_t *)v3 + 4);
            v162 = 4 * v93;
            v169 = (grapher::ActorFile::Self *)gll_operator_new(
                                           4 * v93,
                                           (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"),
                                           146);
            v94 = (grapher::Self **)((char *)v169 + 4 * v173);
            if ( v94 != nullptr )
              *v94 = v7;
            v95 = v169;
            v96 = *((uint32_t **)v3 + 3);
            v174 = v96;
            if ( (uint32_t *)v135 != v96 )
            {
              do
              {
                if ( v95 != nullptr )
                  *(uint32_t *)v95 = *v96;
                ++v96;
                v95 = (grapher::ActorFile::Self *)((char *)v95 + 4);
              }
              while ( (uint32_t *)v135 != v96 );
              v95 = (grapher::ActorFile::Self *)((char *)v169 + 4 * ((unsigned int)(v135 - ((uint32_t)(uintptr_t)(v174) + 4)) >> 2) + 4);
            }
            v97 = (char *)v95 + 4;
            v175 = v97;
            v98 = *((uint32_t **)v3 + 4);
            if ( (uint32_t *)v135 != v98 )
            {
              v99 = (uint32_t *)v135;
              do
              {
                if ( v97 != nullptr )
                  *(uint32_t *)v97 = *v99;
                ++v99;
                v97 += 4;
              }
              while ( v98 != v99 );
              v175 += 4 * (((unsigned int)(uintptr_t)(v98) - v135 - 4) >> 2) + 4;
            }
            if ( *((uint32_t *)v3 + 3) != 0 )
              sub_4EB800(*((uint32_t *)v3 + 3));
            *((uint32_t *)v3 + 3) = (uint32_t)(uintptr_t)(v169);
            *((uint32_t *)v3 + 4) = (uint32_t)(uintptr_t)(v175);
            *((uint32_t *)v3 + 5) = (uint32_t)(uintptr_t)((char *)v169 + v162);
          }
          else
          {
            v10 = 0;
            if ( v9 != nullptr )
            {
              *v9 = v7;
              v10 = *((uint32_t *)v3 + 4);
            }
            *((uint32_t *)v3 + 4) = v10 + 4;
          }
        }
        pugi::xml_node::next_sibling(&v193);
        v222 = v193;
      }
      sub_B7CE80(v215);
      sub_B7CE80(v214);
      pugi::xml_node::first_child(&v222);
      while ( pugi::xml_node::child(&v222) != -1 )
      {
        sub_B7C550(v225);
        pugi::xml_node::attribute(&v193);
        v225[0] = v193;
        if ( pugi::xml_attribute::as_int(v225) != -1 )
        {
          v11 = (char *)pugi::xml_attribute::value(v225);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v220), v11, (int)(uintptr_t)(&v194));
          pugi::xml_node::attribute(&v193);
          v225[0] = v193;
          if ( pugi::xml_attribute::as_int(v225) != -1 )
          {
            v12 = (char *)pugi::xml_attribute::value(v225);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v221), v12, (int)(uintptr_t)(&v194) + 1);
            v13 = (grapher::ActorBase::Self *)grapher::ActorManager::NewActor(*(uint32_t *)v3, &v221, v222, -1);
            if ( v13 != nullptr )
            {
              g4_std::string::construct_copy(&v216, (char *)v3 + 8);
              grapher::ActorBase::SetGraphName(v13, &v216);
              v171 = (void *)(v216 - 12);
              if ( (uint32_t *)(v216 - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v216 - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v171);
              }
              grapher::ActorBase::GetName(v13);
              v14 = *((grapher::ActorBase::Self ***)v3 + 7);
              v146 = (size_t)v14;
              if ( v14 == *((grapher::ActorBase::Self ***)v3 + 8) )
              {
                v108 = ((int)(uintptr_t)(v14) - *((uint32_t *)v3 + 6)) >> 2;
                v109 = 1;
                v179 = v108;
                if ( v108 == 0 || (v110 = v108, v111 = 0x3FFFFFFF, v109 = 2 * v110, v179 <= v109) && v109 <= 0x3FFFFFFF )
                  v111 = v109;
                v154 = 4 * v111;
                v170 = (grapher::ActorFile::Self *)gll_operator_new(
                                               4 * v111,
                                               (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"),
                                               146);
                v112 = (grapher::ActorBase::Self **)((char *)v170 + 4 * v179);
                if ( v112 != nullptr )
                  *v112 = v13;
                v113 = (unsigned int)(uintptr_t)(v170);
                v180 = *((void **)v3 + 6);
                if ( (void *)v146 != v180 )
                {
                  v114 = *((uint32_t **)v3 + 6);
                  v115 = v170;
                  do
                  {
                    if ( v115 != nullptr )
                      *(uint32_t *)v115 = *v114;
                    ++v114;
                    v115 = (grapher::ActorFile::Self *)((char *)v115 + 4);
                  }
                  while ( (uint32_t *)v146 != v114 );
                  v113 = (unsigned int)(uintptr_t)(v170) + 4 * ((v146 - ((unsigned int)(uintptr_t)(v180) + 4)) >> 2) + 4;
                }
                v164 = v113 + 4;
                v181 = *((char **)v3 + 7);
                if ( (char *)v146 != v181 )
                {
                  v116 = (char *)v146;
                  v117 = (uint32_t *)v164;
                  do
                  {
                    if ( v117 != nullptr )
                      *v117 = *(uint32_t *)v116;
                    v116 += 4;
                    ++v117;
                  }
                  while ( v181 != v116 );
                  v164 += 4 * ((unsigned int)(uintptr_t)(&v181[-v146 - 4]) >> 2) + 4;
                }
                v118 = *((uint32_t *)v3 + 6);
                if ( v118 != 0 )
                  sub_4EB800(v118);
                *((uint32_t *)v3 + 6) = (uint32_t)(uintptr_t)(v170);
                *((uint32_t *)v3 + 7) = v164;
                *((uint32_t *)v3 + 8) = (uint32_t)(uintptr_t)((char *)v170 + v154);
              }
              else
              {
                v15 = 0;
                if ( v14 != nullptr )
                {
                  *v14 = v13;
                  v15 = *((uint32_t *)v3 + 7);
                }
                *((uint32_t *)v3 + 7) = v15 + 4;
              }
            }
            v16 = (void *)(v221 - 12);
            if ( (uint32_t *)(v221 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v221 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v16);
            }
          }
          v17 = (void *)(v220[0] - 12);
          if ( (uint32_t *)(v220[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v220[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v17);
          }
        }
        pugi::xml_node::next_sibling(&v193);
        v222 = v193;
      }
      sub_B7CE80(v218);
      sub_B7CE80(v217);
      pugi::xml_node::first_child(&v219);
      v167 = v3;
      while ( pugi::xml_node::child(&v219) != -1 )
      {
        sub_B7C550(v220);
        sub_B7C550(&v221);
        sub_B7C550(&v222);
        v18 = (char *)sub_B7CE00(&v219);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v198), v18, (int)(uintptr_t)(&v194) + 2);
        v199[0] = (int)(uintptr_t)(&dword_213B814);
        v200[0] = (int)(uintptr_t)(&dword_213B814);
        v201[0] = (int)(uintptr_t)(&dword_213B814);
        if ( g4_std::string::compare((int)(uintptr_t)(v198), "pin_output") != 0 )
        {
          if ( g4_std::string::compare((int)(uintptr_t)(v198), "pin_property") == 0 )
          {
            pugi::xml_node::attribute(&v193);
            v221 = v193;
            if ( pugi::xml_attribute::as_int(&v221) != -1 )
            {
              pugi::xml_node::attribute(&v193);
              v222 = v193;
              if ( pugi::xml_attribute::as_int(&v222) != -1 )
              {
                pugi::xml_node::first_child(v225);
                while ( pugi::xml_node::child(v225) != -1 )
                {
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(v206), "pin_input", (int)(uintptr_t)(&v196) + 1);
                  v34 = (char *)sub_B7CE00(v225);
                  v35 = g4_std::string::compare((int)(uintptr_t)(v206), v34);
                  v36 = false;
                  if ( v35 == 0 )
                  {
                    pugi::xml_node::attribute(&v193);
                    v220[0] = v193;
                    v36 = pugi::xml_attribute::as_int(v220) != -1;
                  }
                  v33 = (void *)(v206[0] - 12);
                  if ( (uint32_t *)(v206[0] - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v206[0] - 4), 0xFFFFFFFF) <= 0 )
                  {
                    v138 = v36;
                    g4_std::string::Rep::M_destroy(v33);
                    v36 = v138;
                  }
                  if ( v36 )
                  {
                    v37 = (char *)pugi::xml_attribute::value(v220);
                    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v208), v37, (int)(uintptr_t)(&v197));
                    v38 = (char *)pugi::xml_attribute::value(&v222);
                    g4_std::string::construct_from_cstr((int)(uintptr_t)(v207), v38, (int)(uintptr_t)(&v196) + 3);
                    v39 = (char *)pugi::xml_attribute::value(&v221);
                    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v226), v39, (int)(uintptr_t)(&v196) + 2);
                    grapher::ActorFile::ConnectActorToVariable((int)(uintptr_t)(v167), (const void **)(&v226), (void **)(v207), (const void **)(&v208));
                    v40 = (void *)(v226 - 12);
                    if ( (uint32_t *)(v226 - 12) != dword_213B808
                      && __sync_fetch_and_add((volatile int32_t *)(v226 - 4), 0xFFFFFFFF) <= 0 )
                    {
                      g4_std::string::Rep::M_destroy(v40);
                    }
                    v41 = (void *)(v207[0] - 12);
                    if ( (uint32_t *)(v207[0] - 12) != dword_213B808
                      && __sync_fetch_and_add((volatile int32_t *)(v207[0] - 4), 0xFFFFFFFF) <= 0 )
                    {
                      g4_std::string::Rep::M_destroy(v41);
                    }
                    v42 = (void *)(v208 - 12);
                    if ( (uint32_t *)(v208 - 12) != dword_213B808
                      && __sync_fetch_and_add((volatile int32_t *)(v208 - 4), 0xFFFFFFFF) <= 0 )
                    {
                      g4_std::string::Rep::M_destroy(v42);
                    }
                  }
                  pugi::xml_node::next_sibling(&v193);
                  v225[0] = v193;
                }
              }
            }
          }
        }
        else
        {
          pugi::xml_node::attribute(&v193);
          v221 = v193;
          if ( pugi::xml_attribute::as_int(&v221) == -1 || (pugi::xml_node::attribute(&v193), v222 = v193, pugi::xml_attribute::as_int(&v222) == -1) )
          {
            pugi::xml_node::attribute(&v193);
            v220[0] = v193;
            if ( pugi::xml_attribute::as_int(v220) != -1 )
            {
              v43 = (char *)pugi::xml_attribute::value(v220);
              v44 = strlen(v43);
              g4_std_compat::string_assign((int)(uintptr_t)(v200), v43, v44);
              pugi::xml_node::first_child(v225);
              while ( pugi::xml_node::child(v225) != -1 )
              {
                g4_std::string::construct_from_cstr((int)(uintptr_t)(v204), "pin_property", (int)(uintptr_t)(&v195) + 2);
                v46 = (char *)sub_B7CE00(v225);
                v185 = false;
                if ( g4_std::string::compare((int)(uintptr_t)(v204), v46) == 0 )
                {
                  pugi::xml_node::attribute(&v193);
                  v221 = v193;
                  if ( pugi::xml_attribute::as_int(&v221) != -1 )
                  {
                    pugi::xml_node::attribute(&v193);
                    v222 = v193;
                    v185 = pugi::xml_attribute::as_int(&v222) != -1;
                  }
                }
                v45 = (void *)(v204[0] - 12);
                if ( (uint32_t *)(v204[0] - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v204[0] - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v45);
                }
                if ( v185 )
                {
                  v47 = (char *)pugi::xml_attribute::value(&v222);
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(v205), v47, (int)(uintptr_t)(&v196));
                  v48 = (char *)pugi::xml_attribute::value(&v221);
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v224), v48, (int)(uintptr_t)(&v195) + 3);
                  grapher::ActorFile::ConnectActorToVariable((int)(uintptr_t)(v167), (const void **)(&v224), (void **)(v205), (const void **)(v200));
                  v49 = (void *)(v224 - 12);
                  if ( (uint32_t *)(v224 - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v224 - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy(v49);
                  }
                  v50 = (void *)(v205[0] - 12);
                  if ( (uint32_t *)(v205[0] - 12) != dword_213B808
                    && __sync_fetch_and_add((volatile int32_t *)(v205[0] - 4), 0xFFFFFFFF) <= 0 )
                  {
                    g4_std::string::Rep::M_destroy(v50);
                  }
                }
                pugi::xml_node::next_sibling(&v193);
                v225[0] = v193;
              }
            }
          }
          else
          {
            v19 = (char *)pugi::xml_attribute::value(&v221);
            v20 = strlen(v19);
            g4_std_compat::string_assign((int)(uintptr_t)(v201), v19, v20);
            v21 = (char *)pugi::xml_attribute::value(&v222);
            v22 = strlen(v21);
            g4_std_compat::string_assign((int)(uintptr_t)(v199), v21, v22);
            pugi::xml_node::first_child(v225);
            while ( pugi::xml_node::child(v225) != -1 )
            {
              g4_std::string::construct_from_cstr((int)(uintptr_t)(v202), "pin_input", (int)(uintptr_t)(&v194) + 3);
              v24 = (char *)sub_B7CE00(v225);
              v184 = false;
              if ( g4_std::string::compare((int)(uintptr_t)(v202), v24) == 0 )
              {
                pugi::xml_node::attribute(&v193);
                v221 = v193;
                if ( pugi::xml_attribute::as_int(&v221) != -1 )
                {
                  pugi::xml_node::attribute(&v193);
                  v222 = v193;
                  v184 = pugi::xml_attribute::as_int(&v222) != -1;
                }
              }
              v23 = (void *)(v202[0] - 12);
              if ( (uint32_t *)(v202[0] - 12) != dword_213B808
                && __sync_fetch_and_add((volatile int32_t *)(v202[0] - 4), 0xFFFFFFFF) <= 0 )
              {
                g4_std::string::Rep::M_destroy(v23);
              }
              if ( v184 )
              {
                v29 = (char *)pugi::xml_attribute::value(&v222);
                g4_std::string::construct_from_cstr((int)(uintptr_t)(v203), v29, (int)(uintptr_t)(&v195) + 1);
                v30 = (char *)pugi::xml_attribute::value(&v221);
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v223), v30, (int)(uintptr_t)(&v195));
                grapher::ActorFile::ConnectActorToActor((int)(uintptr_t)(v167), (const void **)(v201), (void **)(v199), (const void **)(&v223), (void **)(v203));
                v31 = (void *)(v223 - 12);
                if ( (uint32_t *)(v223 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v223 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v31);
                }
                v32 = (void *)(v203[0] - 12);
                if ( (uint32_t *)(v203[0] - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v203[0] - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v32);
                }
              }
              pugi::xml_node::next_sibling(&v193);
              v225[0] = v193;
            }
          }
        }
        v25 = (void *)(v201[0] - 12);
        if ( (uint32_t *)(v201[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v201[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v25);
        }
        v26 = (void *)(v200[0] - 12);
        if ( (uint32_t *)(v200[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v200[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v26);
        }
        v27 = (void *)(v199[0] - 12);
        if ( (uint32_t *)(v199[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v199[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v27);
        }
        v28 = (void *)(v198[0] - 12);
        if ( (uint32_t *)(v198[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v198[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v28);
        }
        pugi::xml_node::next_sibling(&v193);
        v219 = v193;
      }
      grapher::ActorFile::LoadingFinish(v167);
      sub_B7F610(v229);
      return 1;
    }
    return result;
  }
  v132 = v4;
  v52 = glf::Fs::ResolvePath(
          glf::Fs::sFs,
          *((char **)v3 + 2),
          (char *)&dword_0 + 1,
          (glf::Self *)v229,
          (char *)&reinterpret_cast<G4Elf32Sym *>(stru_1F4)->st_info);
  glf::FileStreamImpl::Construct((glf::IOStream::Self *)v228, (int)(uintptr_t)(v229), v52);
  v228[0] = (int)((uint32_t)(uintptr_t)&off_2048D28);
  if ( (uint8_t)glf::Stream::IsOpened((glf::Stream::Self *)v228) == 0 )
  {
    v58 = 0;
LABEL_94:
    v140 = v58;
    v228[0] = (int)((uint32_t)(uintptr_t)&off_2048D28);
    glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v228);
    return v140;
  }
  v129 = &v227;
  (*(void (**)(int *))(v228[0] + 12))(v228);
  v186 = v227;
  v53 = v132;
  if ( (int)v227 > 0 )
  {
    v54 = 0;
    do
    {
      v139 = v54;
      v129 = &v227;
      (*(void (**)(int *))(v228[0] + 12))(v228);
      v55 = *((size_t **)v3 + 13);
      v151 = v227;
      v56 = v139;
      if ( v55 == *((size_t **)v3 + 14) )
      {
        v59 = ((int)(uintptr_t)(v55) - *((uint32_t *)v3 + 12)) >> 2;
        v60 = 1;
        v156 = v59;
        if ( v59 == 0 || (v147 = 0x3FFFFFFF, v60 = 2 * v59, v59 <= 2 * v59) && v60 <= 0x3FFFFFFF )
          v147 = v60;
        v148 = 4 * v147;
        v61 = (size_t *)gll_operator_new(v148, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        v168 = (grapher::ActorFile::Self *)v61;
        v56 = v139;
        v62 = &v61[v156];
        if ( v62 != nullptr )
          *v62 = v151;
        v63 = *((size_t **)v3 + 12);
        v157 = (size_t)v63;
        if ( v55 != v63 )
        {
          do
          {
            if ( v61 != nullptr )
              *v61 = *v63;
            ++v63;
            ++v61;
          }
          while ( v55 != v63 );
          v61 = (size_t *)((char *)v168 + 4 * (((unsigned int)(uintptr_t)(v55) - v157 - 4) >> 2) + 4);
        }
        v158 = (size_t)(v61 + 1);
        v152 = *((uint32_t *)v3 + 13);
        if ( v55 != (size_t *)v152 )
        {
          v64 = v55;
          v65 = v61 + 1;
          do
          {
            if ( v65 != nullptr )
              *v65 = *v64;
            ++v64;
            ++v65;
          }
          while ( (size_t *)v152 != v64 );
          v158 += 4 * ((v152 - (unsigned int)(uintptr_t)(v55 + 1)) >> 2) + 4;
        }
        v66 = *((uint32_t *)v3 + 12);
        if ( v66 != 0 )
        {
          sub_4EB800(v66);
          v56 = v139;
        }
        *((uint32_t *)v3 + 12) = (uint32_t)(uintptr_t)(v168);
        *((uint32_t *)v3 + 13) = v158;
        *((uint32_t *)v3 + 14) = (uint32_t)(uintptr_t)((char *)v168 + v148);
      }
      else
      {
        v57 = 0;
        if ( v55 != nullptr )
        {
          *v55 = v227;
          v57 = *((uint32_t *)v3 + 13);
        }
        *((uint32_t *)v3 + 13) = v57 + 4;
      }
      v54 = v56 + 1;
    }
    while ( v54 != v186 );
    v53 = v132;
  }
  v58 = 1;
  if ( !v53 )
    goto LABEL_94;
  grapher::ActorBase::SetNewFileId(*((grapher::ActorBase::Self **)v3 + 1), (int)(uintptr_t)(v129));
  grapher::ActorVariable::SetNewFileId(*((grapher::ActorVariable::Self **)v3 + 1), v130);
  (*(void (**)(int *, size_t *, int))(v228[0] + 12))(v228, &v227, 4);
  v172 = (char *)v227;
  v225[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( (int)v227 > 0 )
  {
    v187 = nullptr;
    do
    {
      (*(void (**)(int *, int *, int))(v228[0] + 12))(v228, &v209, 4);
      (*(void (**)(int *, size_t *, int))(v228[0] + 12))(v228, &v227, 4);
      sub_1939D80((int)(uintptr_t)(v225), v227, 0);
      v70 = v225[0];
      v71 = *(uint32_t *)(v225[0] - 12);
      if ( v71 != 0 )
      {
        v72 = *(void (**)(int *, int, int))(v228[0] + 12);
        if ( *(int *)(v225[0] - 4) >= 0 )
        {
          v133 = *(uint32_t *)(v228[0] + 12);
          sub_19397C0(v225);
          v70 = v225[0];
          v72 = (void (*)(int *, int, int))v133;
        }
        v72(v228, v70, v71);
      }
      v209 = (*((uint32_t *)v3 + 1) << 20) + (v209 & 0xFFFFF);
      sub_B7CCD0(&v210);
      v67 = grapher::ActorManager::NewActor(*(uint32_t *)v3, v225, v210, -1);
      if ( v67 != 0 )
      {
        *(uint32_t *)(v67 + 4) = v209;
        v68 = *((uint32_t **)v3 + 7);
        if ( v68 == *((uint32_t **)v3 + 8) )
        {
          v73 = 1;
          v159 = ((int)(uintptr_t)(v68) - *((uint32_t *)v3 + 6)) >> 2;
          if ( v159 == 0
            || (v74 = 0x3FFFFFFF, v73 = 2 * (((int)(uintptr_t)(v68) - *((uint32_t *)v3 + 6)) >> 2), v159 <= v73) && v73 <= 0x3FFFFFFF )
          {
            v74 = v73;
          }
          v134 = *((uint32_t *)v3 + 7);
          v142 = 4 * v74;
          v153 = gll_operator_new(4 * v74, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          v75 = (uint32_t *)(v153 + 4 * v159);
          if ( v75 != nullptr )
            *v75 = v67;
          v160 = *((uint32_t *)v3 + 6);
          v76 = v153;
          if ( v134 != v160 )
          {
            v77 = (uint32_t *)v153;
            v78 = *((uint32_t **)v3 + 6);
            do
            {
              if ( v77 != nullptr )
                *v77 = *v78;
              ++v78;
              ++v77;
            }
            while ( (uint32_t *)v134 != v78 );
            v76 = v153 + 4 * ((v134 - (v160 + 4)) >> 2) + 4;
          }
          v144 = v76 + 4;
          v161 = *((uint32_t *)v3 + 7);
          if ( v134 != v161 )
          {
            v79 = (uint32_t *)v134;
            v80 = (uint32_t *)v144;
            do
            {
              if ( v80 != nullptr )
                *v80 = *v79;
              ++v79;
              ++v80;
            }
            while ( (uint32_t *)v161 != v79 );
            v144 += 4 * ((v161 - (v134 + 4)) >> 2) + 4;
          }
          if ( *((uint32_t *)v3 + 6) != 0 )
            sub_4EB800(*((uint32_t *)v3 + 6));
          *((uint32_t *)v3 + 6) = v153;
          *((uint32_t *)v3 + 7) = v144;
          *((uint32_t *)v3 + 8) = v142 + v153;
        }
        else
        {
          v69 = 0;
          if ( v68 != nullptr )
          {
            *v68 = v67;
            v69 = *((uint32_t *)v3 + 7);
          }
          *((uint32_t *)v3 + 7) = v69 + 4;
        }
      }
      ++v187;
    }
    while ( v187 != v172 );
  }
  (*(void (**)(int *, size_t *, int))(v228[0] + 12))(v228, &v227, 4);
  v188 = v227;
  if ( (int)v227 > 0 )
  {
    v143 = 0;
    do
    {
      v81 = (grapher::ActorVariable::Self *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorFile.cpp"), 264);
      grapher::ActorVariable::Construct(v81);
      grapher::ActorVariable::UnSerialize(v81, v228);
      *(uint32_t *)v81 = (*((uint32_t *)v3 + 1) << 20) | *(uint32_t *)v81 & 0xFFFFF;
      v82 = *((grapher::ActorVariable::Self ***)v3 + 4);
      if ( v82 == *((grapher::ActorVariable::Self ***)v3 + 5) )
      {
        v100 = ((int)(uintptr_t)(v82) - *((uint32_t *)v3 + 3)) >> 2;
        v149 = 1;
        v176 = v100;
        if ( v100 == 0
          || (v149 = 2 * v100, v125 = 2 * v100, v126 = v100 <= 2 * v100, v101 = 0x3FFFFFFF, v126) && v125 <= 0x3FFFFFFF )
        {
          v101 = v149;
        }
        v136 = *((uint32_t *)v3 + 4);
        v145 = 4 * v101;
        v163 = gll_operator_new(4 * v101, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
        v102 = (grapher::ActorVariable::Self **)(v163 + 4 * v176);
        if ( v102 != nullptr )
          *v102 = v81;
        v177 = *((void **)v3 + 3);
        v103 = v163;
        if ( (void *)v136 != v177 )
        {
          v104 = *((uint32_t **)v3 + 3);
          v105 = (uint32_t *)v163;
          do
          {
            if ( v105 != nullptr )
              *v105 = *v104;
            ++v104;
            ++v105;
          }
          while ( (uint32_t *)v136 != v104 );
          v103 = v163 + 4 * ((unsigned int)(v136 - ((uint32_t)(uintptr_t)(v177) + 4)) >> 2) + 4;
        }
        v150 = v103 + 4;
        v178 = *((char **)v3 + 4);
        if ( (char *)v136 != v178 )
        {
          v106 = (char *)v136;
          v107 = (uint32_t *)v150;
          do
          {
            if ( v107 != nullptr )
              *v107 = *(uint32_t *)v106;
            v106 += 4;
            ++v107;
          }
          while ( v178 != v106 );
          v150 += 4 * ((unsigned int)(uintptr_t)(&v178[-v136 - 4]) >> 2) + 4;
        }
        if ( *((uint32_t *)v3 + 3) != 0 )
          sub_4EB800(*((uint32_t *)v3 + 3));
        *((uint32_t *)v3 + 3) = v163;
        *((uint32_t *)v3 + 4) = v150;
        *((uint32_t *)v3 + 5) = v145 + v163;
      }
      else
      {
        v83 = 0;
        if ( v82 != nullptr )
        {
          *v82 = v81;
          v83 = *((uint32_t *)v3 + 4);
        }
        *((uint32_t *)v3 + 4) = v83 + 4;
      }
      ++v143;
    }
    while ( v143 != v188 );
  }
  (*(void (**)(int *, size_t *, int))(v228[0] + 12))(v228, &v227, 4);
  v189 = v227;
  if ( (int)v227 > 0 )
  {
    v84 = 0;
    do
    {
      (*(void (**)(int *, size_t *, int))(v228[0] + 12))(v228, &v227, 4);
      ++v84;
      Actor = (grapher::ActorBase::Self *)grapher::ActorFile::GetActor(v3, v227);
      grapher::ActorBase::UnSerializeConnections(Actor, (int)(uintptr_t)(v228), v3);
    }
    while ( v84 != v189 );
  }
  grapher::ActorFile::LoadingFinish(v3);
  v86 = *((uint32_t *)v3 + 6);
  if ( (unsigned int)(*((uint32_t *)v3 + 7) - v86) >> 2 != 0 )
  {
    v87 = 0;
    do
    {
      v88 = (*(uint8_t (**)(uint32_t))(**(uint32_t **)(v86 + 4 * v87) + 20))(*(uint32_t *)(v86 + 4 * v87)) == 0;
      v86 = *((uint32_t *)v3 + 6);
      if ( !v88 )
      {
        v190 = (uint32_t *)(v86 + 4 * v87);
        v89 = *((uint32_t **)v3 + 10);
        if ( v89 == *((uint32_t **)v3 + 11) )
        {
          v119 = ((int)(uintptr_t)(v89) - *((uint32_t *)v3 + 9)) >> 2;
          v120 = 1;
          if ( v119 == 0 || (v120 = 2 * v119, v182 = 0x3FFFFFFF, v119 <= 2 * v119) && v120 <= 0x3FFFFFFF )
            v182 = v120;
          v137 = *((uint32_t *)v3 + 10);
          v141 = ((int)(uintptr_t)(v89) - *((uint32_t *)v3 + 9)) >> 2;
          v155 = 4 * v182;
          v183 = (char *)gll_operator_new(4 * v182, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/../config.h"), 146);
          v165 = &v183[4 * v141];
          if ( v165 != nullptr )
            *(uint32_t *)v165 = *v190;
          v121 = *((uint32_t **)v3 + 9);
          v122 = v183;
          v191 = v121;
          if ( (uint32_t *)v137 != v121 )
          {
            do
            {
              if ( v122 != nullptr )
                *(uint32_t *)v122 = *v121;
              ++v121;
              v122 += 4;
            }
            while ( (uint32_t *)v137 != v121 );
            v122 = &v183[4 * ((unsigned int)(v137 - (uint32_t)(uintptr_t)(v191 + 1)) >> 2) + 4];
          }
          v166 = (size_t)(v122 + 4);
          v192 = *((uint32_t **)v3 + 10);
          if ( (uint32_t *)v137 != v192 )
          {
            v123 = (uint32_t *)v137;
            v124 = (uint32_t *)(v122 + 4);
            do
            {
              if ( v124 != nullptr )
                *v124 = *v123;
              ++v123;
              ++v124;
            }
            while ( v192 != v123 );
            v166 += 4 * (((unsigned int)(uintptr_t)(v192) - v137 - 4) >> 2) + 4;
          }
          if ( *((uint32_t *)v3 + 9) != 0 )
            sub_4EB800(*((uint32_t *)v3 + 9));
          *((uint32_t *)v3 + 9) = (uint32_t)(uintptr_t)(v183);
          *((uint32_t *)v3 + 11) = (uint32_t)(uintptr_t)(&v183[v155]);
          *((uint32_t *)v3 + 10) = v166;
          v86 = *((uint32_t *)v3 + 6);
        }
        else
        {
          v90 = 0;
          if ( v89 != nullptr )
          {
            *v89 = *v190;
            v90 = *((uint32_t *)v3 + 10);
            v86 = *((uint32_t *)v3 + 6);
          }
          *((uint32_t *)v3 + 10) = v90 + 4;
        }
      }
      ++v87;
    }
    while ( v87 < (*((uint32_t *)v3 + 7) - v86) >> 2 );
  }
  v91 = (void *)(v225[0] - 12);
  if ( (uint32_t *)(v225[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v225[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v91);
  }
  v228[0] = (int)((uint32_t)(uintptr_t)&off_2048D28);
  glf::FileStreamImpl::Destroy((glf::FileStreamImpl::Self *)v228);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorFile::Reload  (binary VA: 0x13c5590)
// Original: grapher::ActorFile::Reload
// ----------------------------------------------------------------------------
int grapher::ActorFile::Reload(grapher::ActorFile::Self *self)
{
  grapher::ActorFile::Unload(self, nullptr);
  return grapher::ActorFile::Load(self, false);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorFile::SetAutoReload  (binary VA: 0x13c55e0)
// Original: grapher::ActorFile::SetAutoReload
// ----------------------------------------------------------------------------
void grapher::ActorFile::SetAutoReload()
{
  ;
}


