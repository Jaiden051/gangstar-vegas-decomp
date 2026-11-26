#include "Core/Utils/DecompTypes.h"
#include "grapher_ActorContext.h"

// ----------------------------------------------------------------------------
// Function: grapher::ActorContext::Construct  (binary VA: 0x13bfe30)
// Original: grapher::ActorContext::ActorContext
// ----------------------------------------------------------------------------
grapher::ActorContext::Self * grapher::ActorContext::Construct(grapher::ActorContext::Self *self, char *s)
{
  char *v2;
  bool v3;
  grapher::ActorContext::Self *result;
  uint32_t *v5;
  size_t v6;

  v2 = s;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094C20);
  *((uint32_t *)self + 2) = 0;
  v3 = byte_20D5B50 == 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)((char *)self + 32);
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)((char *)self + 32);
  *((uint32_t *)self + 13) = 0;
  if ( v3 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    result = (grapher::ActorContext::Self *)&unk_20D5B60;
    if ( (dword_20D5BE0 & 0x20) != 0 )
      goto LABEL_11;
LABEL_3:
    v5 = *((uint32_t **)self + 13);
    goto LABEL_4;
  }
  result = (grapher::ActorContext::Self *)&unk_20D5B60;
  if ( (dword_20D5BE0 & 0x20) == 0 )
    goto LABEL_3;
LABEL_11:
  v5 = (uint32_t *)gll_operator_new(4u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorContext.cpp"), 26);
  result = (grapher::ActorContext::Self *)&dword_213B814;
  *v5 = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(v5);
LABEL_4:
  if ( v5 != nullptr )
  {
    if ( s != nullptr )
    {
      v6 = strlen(s);
    }
    else
    {
      v6 = 7;
      v2 = "unknown";
    }
    return (grapher::ActorContext::Self *)g4_std_compat::string_assign((int)(uintptr_t)(v5), v2, v6);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorContext::GetAValue  (binary VA: 0x13bffa0)
// Original: grapher::ActorContext::_GetAValue
// ----------------------------------------------------------------------------
int grapher::ActorContext::GetAValue(grapher::ActorContext::Self *self, grapher::ActorVariable::Self *a2)
{
  int result;
  uint32_t *v3;
  uint32_t *v4;

  result = 0;
  v3 = *((uint32_t **)self + 9);
  if ( v3 != nullptr )
  {
    v4 = (uint32_t *)((char *)self + 32);
    do
    {
      while ( v3[4] >= (unsigned int)(uintptr_t)(a2) )
      {
        v4 = v3;
        v3 = (uint32_t *)v3[2];
        if ( v3 == nullptr )
          goto LABEL_6;
      }
      v3 = (uint32_t *)v3[3];
    }
    while ( v3 != nullptr );
LABEL_6:
    result = 0;
    if ( v4 != (uint32_t *)((char *)self + 32) && v4[4] <= (unsigned int)(uintptr_t)(a2) )
      return v4[5];
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorContext::ResetAValue  (binary VA: 0x13bfff0)
// Original: grapher::ActorContext::_ResetAValue
// ----------------------------------------------------------------------------
void grapher::ActorContext::ResetAValue(grapher::ActorContext::Self *self, grapher::ActorVariable::Self *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  void *v4;

  v2 = *((uint32_t **)self + 9);
  if ( v2 != nullptr )
  {
    v3 = (uint32_t *)((char *)self + 32);
    do
    {
      while ( v2[4] >= (unsigned int)(uintptr_t)(a2) )
      {
        v3 = v2;
        v2 = (uint32_t *)v2[2];
        if ( v2 == nullptr )
          goto LABEL_6;
      }
      v2 = (uint32_t *)v2[3];
    }
    while ( v2 != nullptr );
LABEL_6:
    if ( (uint32_t *)((char *)self + 32) != v3 && v3[4] <= (unsigned int)(uintptr_t)(a2) )
    {
      v4 = (void *)sub_1904AE0(v3, (char *)self + 32);
      opDelete(v4);
      --*((uint32_t *)self + 12);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorContext::SetAValue  (binary VA: 0x13c0060)
// Original: grapher::ActorContext::_SetAValue
// ----------------------------------------------------------------------------
grapher::ActorVariable::Self * grapher::ActorContext::SetAValue(grapher::ActorContext::Self *self, grapher::ActorVariable::Self *a2, grapher::ActorVariable::Self *a3)
{
  char *v3;
  grapher::ActorVariable::Self *v4;
  char *v5;
  char *v6;
  grapher::ActorVariable::Self *v7;
  char *v8;
  grapher::ActorVariable::Self *result;
  int v10;
  grapher::ActorVariable::Self *v11;
  int v12;
  grapher::ActorVariable::Self *v13;
  char v14; // di
  int v15;
  char v16; // bp
  int v17;
  char *v18;
  char *v19;
  int v20;
  unsigned int v21;
  char v22;
  bool v23;
  int v24;
  int v25;
  char v26; // bp
  int v27;
  int v28;
  char v29; // bp
  int v30;
  char *v31;
  char *v32;
  char *v33;
  grapher::ActorVariable::Self *v34;
  char *v35;
  char *v36;
  char *v37;
  char *v38;
  char *v39;
  char *v40;
  char v41;
  grapher::ActorVariable::Self *v42;
  int v43;
  char *v44;
  char *v45;

  v3 = (char *)self + 32;
  v4 = *((grapher::ActorVariable::Self **)self + 9);
  if ( v4 != nullptr )
  {
    v5 = (char *)self + 32;
    v6 = *((char **)self + 9);
    do
    {
      while ( *((uint32_t *)v6 + 4) >= (unsigned int)(uintptr_t)(a2) )
      {
        v5 = v6;
        v6 = *((char **)v6 + 2);
        if ( v6 == nullptr )
          goto LABEL_6;
      }
      v6 = *((char **)v6 + 3);
    }
    while ( v6 != nullptr );
LABEL_6:
    if ( v3 == v5
      || *((uint32_t *)v5 + 4) > (unsigned int)(uintptr_t)(a2)
      || (v7 = *((grapher::ActorVariable::Self **)v5 + 5)) == a3
      || v7 == nullptr
      || (grapher::ActorVariable::Destroy(v7),
          opDelete(v7),
          v3 = (char *)self + 32,
          (v4 = *((grapher::ActorVariable::Self **)self + 9)) != nullptr) )
    {
      v8 = v3;
      for ( result = v4; result != nullptr; result = *((grapher::ActorVariable::Self **)result + 3) )
      {
        while ( *((uint32_t *)result + 4) >= (unsigned int)(uintptr_t)(a2) )
        {
          v8 = (char *)result;
          result = *((grapher::ActorVariable::Self **)result + 2);
          if ( result == nullptr )
            goto LABEL_15;
        }
      }
LABEL_15:
      if ( v3 != v8 )
      {
        if ( *((uint32_t *)v8 + 4) <= (unsigned int)(uintptr_t)(a2) )
          goto LABEL_24;
        v45 = *((char **)self + 10);
        if ( v45 == v8 )
        {
          v37 = v3;
          v28 = opNew(0x18u);
          v8 = (char *)v28;
          if ( v28 != -16 )
          {
            *(uint32_t *)(v28 + 16) = (uint32_t)(uintptr_t)(a2);
            *(uint32_t *)(v28 + 20) = 0;
          }
          result = (grapher::ActorVariable::Self *)sub_1904970(1, v28, v45, v37);
          goto LABEL_23;
        }
        v32 = v3;
        v39 = v8;
        v10 = sub_1904940(v8);
        v43 = v10;
        v11 = (grapher::ActorVariable::Self *)v32;
        if ( *(uint32_t *)(v10 + 16) < (unsigned int)(uintptr_t)(a2) )
        {
          if ( *(uint32_t *)(v10 + 12) != 0 )
          {
            v12 = opNew(0x18u);
            v8 = (char *)v12;
            if ( v12 != -16 )
            {
              *(uint32_t *)(v12 + 16) = (uint32_t)(uintptr_t)(a2);
              *(uint32_t *)(v12 + 20) = 0;
            }
            result = (grapher::ActorVariable::Self *)sub_1904970(1, v12, v39, v32);
LABEL_23:
            ++*((uint32_t *)self + 12);
            goto LABEL_24;
          }
          v26 = v32 == (char *)v10;
          v27 = opNew(0x18u);
          v8 = (char *)v27;
          if ( v27 != -16 )
          {
            *(uint32_t *)(v27 + 16) = (uint32_t)(uintptr_t)(a2);
            *(uint32_t *)(v27 + 20) = 0;
          }
          result = (grapher::ActorVariable::Self *)sub_1904970(v26, v27, v43, v32);
LABEL_36:
          ++*((uint32_t *)self + 12);
          goto LABEL_24;
        }
        while ( 1 )
        {
          result = *((grapher::ActorVariable::Self **)v4 + 4);
          if ( result > a2 )
          {
            v13 = *((grapher::ActorVariable::Self **)v4 + 2);
            v14 = 1;
          }
          else
          {
            v13 = *((grapher::ActorVariable::Self **)v4 + 3);
            v14 = 0;
          }
          if ( v13 == nullptr )
            break;
          v4 = v13;
        }
        v22 = v14;
        v8 = (char *)v4;
        if ( v22 != 0 )
        {
          if ( v45 == (char *)v4 )
          {
LABEL_46:
            v23 = true;
            if ( v11 != v4 )
              v23 = *((uint32_t *)v4 + 4) > (unsigned int)(uintptr_t)(a2);
            v41 = v23;
            v34 = v11;
            v24 = opNew(0x18u);
            v8 = (char *)v24;
            if ( v24 != -16 )
            {
              *(uint32_t *)(v24 + 16) = (uint32_t)(uintptr_t)(a2);
              *(uint32_t *)(v24 + 20) = 0;
            }
            result = (grapher::ActorVariable::Self *)sub_1904970(v41, v24, v4, v34);
            ++*((uint32_t *)self + 12);
            goto LABEL_24;
          }
          v8 = (char *)sub_19048F0(v4);
          v11 = (grapher::ActorVariable::Self *)v32;
          result = *((grapher::ActorVariable::Self **)v8 + 4);
        }
        if ( result >= a2 )
          goto LABEL_24;
        goto LABEL_46;
      }
    }
  }
  if ( *((uint32_t *)self + 12) != 0 )
  {
    v15 = *((uint32_t *)self + 11);
    if ( *(uint32_t *)(v15 + 16) < (unsigned int)(uintptr_t)(a2) )
    {
      v40 = *((char **)self + 11);
      v33 = v3;
      v16 = v3 == (char *)v15;
      v17 = opNew(0x18u);
      v8 = (char *)v17;
      v18 = v40;
      if ( v17 != -16 )
      {
        *(uint32_t *)(v17 + 16) = (uint32_t)(uintptr_t)(a2);
        *(uint32_t *)(v17 + 20) = 0;
      }
      v31 = v33;
LABEL_35:
      result = (grapher::ActorVariable::Self *)sub_1904970(v16, v8, v18, v31);
      goto LABEL_36;
    }
  }
  v8 = (char *)v4;
  if ( v4 != nullptr )
  {
    while ( 1 )
    {
      v21 = *((uint32_t *)v8 + 4);
      if ( v21 > (unsigned int)(uintptr_t)(a2) )
      {
        v19 = *((char **)v8 + 2);
        v20 = 1;
      }
      else
      {
        v19 = *((char **)v8 + 3);
        v20 = 0;
      }
      if ( v19 == nullptr )
        break;
      v8 = v19;
    }
    result = (grapher::ActorVariable::Self *)v20;
    v44 = v8;
    if ( (uint8_t)v20 == 0 )
      goto LABEL_52;
  }
  else
  {
    v8 = v3;
  }
  if ( *((char **)self + 10) != v8 )
  {
    v36 = v3;
    result = (grapher::ActorVariable::Self *)sub_19048F0(v8);
    v21 = *((uint32_t *)result + 4);
    v44 = v8;
    v3 = v36;
    v8 = (char *)result;
LABEL_52:
    if ( v21 >= (unsigned int)(uintptr_t)(a2) )
      goto LABEL_24;
    v16 = 1;
    if ( v3 != v44 )
      v16 = *((uint32_t *)v44 + 4) > (unsigned int)(uintptr_t)(a2);
    v35 = v3;
    v25 = opNew(0x18u);
    v8 = (char *)v25;
    if ( v25 != -16 )
    {
      *(uint32_t *)(v25 + 16) = (uint32_t)(uintptr_t)(a2);
      *(uint32_t *)(v25 + 20) = 0;
    }
    v31 = v35;
    v18 = v44;
    goto LABEL_35;
  }
  v29 = 1;
  if ( v3 != v8 )
    v29 = *((uint32_t *)v8 + 4) > (unsigned int)(uintptr_t)(a2);
  v38 = v3;
  v30 = opNew(0x18u);
  if ( v30 != -16 )
  {
    *(uint32_t *)(v30 + 16) = (uint32_t)(uintptr_t)(a2);
    *(uint32_t *)(v30 + 20) = 0;
  }
  v42 = (grapher::ActorVariable::Self *)v30;
  sub_1904970(v29, v30, v8, v38);
  ++*((uint32_t *)self + 12);
  result = v42;
  v8 = (char *)v42;
LABEL_24:
  *((uint32_t *)v8 + 5) = (uint32_t)(uintptr_t)(a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorContext::RegisterAVar  (binary VA: 0x13c0460)
// Original: grapher::ActorContext::RegisterAVar
// ----------------------------------------------------------------------------
int grapher::ActorContext::RegisterAVar(grapher::ActorContext::Self *self)
{
  grapher::ActorVariable::Self *v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = (grapher::ActorVariable::Self *)gll_operator_new(0x10u, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorContext.cpp"), 118);
  grapher::ActorVariable::Construct(v1);
  v2 = *((uint32_t *)v1 + 3);
  if ( v2 != 0 )
    *(uint8_t *)(v2 + 20) = 0;
  v3 = *((uint32_t *)self + 1);
  v4 = 0;
  if ( v3 != 0 )
    v4 = (*(int (**)(uint32_t))(*(uint32_t *)v3 + 48))(*((uint32_t *)self + 1));
  v5 = *((uint32_t *)v1 + 1);
  *((uint32_t *)v1 + 1) = v4;
  if ( v5 != 0 )
    G4_VCALL<void>(v5, 44);
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  return (int)(uintptr_t)(grapher::ActorContext::SetAValue((grapher::ActorContext::Self *)&unk_20D6720, (grapher::ActorVariable::Self *)(self), v1));
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorContext::LoadAVar  (binary VA: 0x13c0560)
// Original: grapher::ActorContext::LoadAVar
// ----------------------------------------------------------------------------
int grapher::ActorContext::LoadAVar(grapher::ActorContext::Self *self, grapher::ActorVariable::Self *a2)
{
  grapher::ActorVariable::Self *AValue;
  int v3;
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  AValue = (grapher::ActorVariable::Self *)grapher::ActorContext::GetAValue(self, a2);
  if ( AValue == nullptr )
  {
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
    v11 = grapher::ActorContext::GetAValue((grapher::ActorContext::Self *)&unk_20D6720, a2);
    AValue = (grapher::ActorVariable::Self *)gll_operator_new(
                                         0x10u,
                                         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorContext.cpp"),
                                         142);
    grapher::ActorVariable::Construct(AValue);
    if ( v11 != 0 )
    {
      v7 = *((uint32_t *)AValue + 3);
      if ( v7 != 0 )
        *(uint8_t *)(v7 + 20) = 0;
      v8 = *(uint32_t *)(v11 + 4);
      v9 = 0;
      if ( v8 != 0 )
        v9 = G4_VCALL<int>(v8, 48);
      v10 = *((uint32_t *)AValue + 1);
      *((uint32_t *)AValue + 1) = v9;
      if ( v10 != 0 )
        G4_VCALL<void>(v10, 44);
    }
    grapher::ActorContext::SetAValue(self, a2, AValue);
  }
  v3 = *((uint32_t *)a2 + 3);
  if ( v3 != 0 )
    *(uint8_t *)(v3 + 20) = 0;
  v4 = *((uint32_t *)AValue + 1);
  result = 0;
  if ( v4 != 0 )
    result = (*(int (**)(uint32_t))(*(uint32_t *)v4 + 48))(*((uint32_t *)AValue + 1));
  v6 = *((uint32_t *)a2 + 1);
  *((uint32_t *)a2 + 1) = result;
  if ( v6 != 0 )
    return G4_VCALL<int>(v6, 44);
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorContext::SaveAVar  (binary VA: 0x13c06e0)
// Original: grapher::ActorContext::SaveAVar
// ----------------------------------------------------------------------------
int grapher::ActorContext::SaveAVar(grapher::ActorContext::Self *self, grapher::ActorVariable::Self *a2)
{
  grapher::ActorVariable::Self *AValue;
  int v3;
  int v4;
  int result;
  int v6;

  AValue = (grapher::ActorVariable::Self *)grapher::ActorContext::GetAValue(self, a2);
  if ( AValue == nullptr )
  {
    AValue = (grapher::ActorVariable::Self *)gll_operator_new(
                                         0x10u,
                                         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/grapher/src/Core/ActorContext.cpp"),
                                         161);
    grapher::ActorVariable::Construct(AValue);
    grapher::ActorContext::SetAValue(self, a2, AValue);
  }
  v3 = *((uint32_t *)AValue + 3);
  if ( v3 != 0 )
    *(uint8_t *)(v3 + 20) = 0;
  v4 = *((uint32_t *)a2 + 1);
  result = 0;
  if ( v4 != 0 )
    result = (*(int (**)(uint32_t))(*(uint32_t *)v4 + 48))(*((uint32_t *)a2 + 1));
  v6 = *((uint32_t *)AValue + 1);
  *((uint32_t *)AValue + 1) = result;
  if ( v6 != 0 )
    return G4_VCALL<int>(v6, 44);
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorContext::DelAValue  (binary VA: 0x13c07a0)
// Original: grapher::ActorContext::DelAValue
// ----------------------------------------------------------------------------
void grapher::ActorContext::DelAValue(grapher::ActorContext::Self *self, grapher::ActorVariable::Self *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  void *v4;
  grapher::ActorVariable::Self *v5;

  v2 = *((uint32_t **)self + 9);
  if ( v2 != nullptr )
  {
    v3 = (uint32_t *)((char *)self + 32);
    do
    {
      while ( v2[4] >= (unsigned int)(uintptr_t)(a2) )
      {
        v3 = v2;
        v2 = (uint32_t *)v2[2];
        if ( v2 == nullptr )
          goto LABEL_6;
      }
      v2 = (uint32_t *)v2[3];
    }
    while ( v2 != nullptr );
LABEL_6:
    if ( (uint32_t *)((char *)self + 32) != v3 && v3[4] <= (unsigned int)(uintptr_t)(a2) )
    {
      if ( v3[5] != 0 )
      {
        v5 = (grapher::ActorVariable::Self *)v3[5];
        grapher::ActorVariable::Destroy(v5);
        opDelete(v5);
      }
      v4 = (void *)sub_1904AE0(v3, (char *)self + 32);
      opDelete(v4);
      --*((uint32_t *)self + 12);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorContext::UnRegisterAVar  (binary VA: 0x13c0830)
// Original: grapher::ActorContext::UnRegisterAVar
// ----------------------------------------------------------------------------
void grapher::ActorContext::UnRegisterAVar(grapher::ActorContext::Self *self)
{
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  grapher::ActorContext::DelAValue((grapher::ActorContext::Self *)&unk_20D6720, (grapher::ActorVariable::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorContext::DelCValue  (binary VA: 0x13c08d0)
// Original: grapher::ActorContext::_DelCValue
// ----------------------------------------------------------------------------
void grapher::ActorContext::DelCValue(grapher::ActorContext::Self *self, void *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  void *v5;

  v2 = *((uint32_t **)self + 3);
  if ( v2 != nullptr )
  {
    v3 = (uint32_t *)((char *)self + 8);
    do
    {
      while ( v2[4] >= (unsigned int)(uintptr_t)(a2) )
      {
        v3 = v2;
        v2 = (uint32_t *)v2[2];
        if ( v2 == nullptr )
          goto LABEL_6;
      }
      v2 = (uint32_t *)v2[3];
    }
    while ( v2 != nullptr );
LABEL_6:
    if ( (uint32_t *)((char *)self + 8) != v3 && v3[4] <= (unsigned int)(uintptr_t)(a2) )
    {
      v4 = v3[5];
      if ( v4 != 0 )
        (*(void (**)(uint32_t))(*(uint32_t *)v4 + 4))(v3[5]);
      v5 = (void *)sub_1904AE0(v3, (char *)self + 8);
      opDelete(v5);
      --*((uint32_t *)self + 6);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorContext::Reset  (binary VA: 0x13c0950)
// Original: grapher::ActorContext::Reset
// ----------------------------------------------------------------------------
void grapher::ActorContext::Reset(grapher::ActorContext::Self *self)
{
  grapher::ActorContext::Self *v1;
  char *v2;
  int v3;
  uint32_t *j;
  int v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  grapher::ActorVariable::Self **v15;
  grapher::ActorVariable::Self *v16;
  int v17;
  uint32_t *m;
  int v19;
  int v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;
  uint32_t *v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  char *i;
  grapher::ActorVariable::Self **k;
  grapher::ActorContext::Self *v47;

  v1 = self;
  v2 = *((char **)self + 4);
  for ( i = (char *)self + 8; i != v2; v2 = (char *)sub_1904890(v2) )
  {
    v3 = *((uint32_t *)v2 + 5);
    if ( v3 != 0 )
      (*(void (**)(uint32_t))(*(uint32_t *)v3 + 4))(*((uint32_t *)v2 + 5));
  }
  v33 = *((uint32_t **)self + 3);
  if ( v33 != nullptr )
  {
    for ( j = *((uint32_t **)self + 3); ; j = v14 )
    {
      v35 = (uint32_t *)j[3];
      if ( v35 != nullptr )
      {
        while ( 1 )
        {
          v37 = (uint32_t *)v35[3];
          if ( v37 != nullptr )
          {
            while ( 1 )
            {
              v39 = (uint32_t *)v37[3];
              if ( v39 != nullptr )
              {
                while ( 1 )
                {
                  v41 = (uint32_t *)v39[3];
                  if ( v41 != nullptr )
                  {
                    while ( 1 )
                    {
                      v43 = (uint32_t *)v41[3];
                      if ( v43 != nullptr )
                      {
                        while ( 1 )
                        {
                          v31 = (uint32_t *)v43[3];
                          if ( v31 != nullptr )
                          {
                            while ( 1 )
                            {
                              v29 = (uint32_t *)v31[3];
                              if ( v29 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v5 = v29[3];
                                  if ( v5 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_void_pair_void_const_gra_635ee2::M_erase(
                                        (int)(uintptr_t)(self) + 4,
                                        *(void **)(v5 + 12));
                                      v6 = *(uint32_t *)(v5 + 8);
                                      opDelete((void *)v5);
                                      if ( v6 == 0 )
                                        break;
                                      v5 = v6;
                                    }
                                  }
                                  v7 = (uint32_t *)v29[2];
                                  opDelete(v29);
                                  if ( v7 == nullptr )
                                    break;
                                  v29 = v7;
                                }
                              }
                              v8 = (uint32_t *)v31[2];
                              opDelete(v31);
                              if ( v8 == nullptr )
                                break;
                              v31 = v8;
                            }
                          }
                          v9 = (uint32_t *)v43[2];
                          opDelete(v43);
                          if ( v9 == nullptr )
                            break;
                          v43 = v9;
                        }
                      }
                      v10 = (uint32_t *)v41[2];
                      opDelete(v41);
                      if ( v10 == nullptr )
                        break;
                      v41 = v10;
                    }
                  }
                  v11 = (uint32_t *)v39[2];
                  opDelete(v39);
                  if ( v11 == nullptr )
                    break;
                  v39 = v11;
                }
              }
              v12 = (uint32_t *)v37[2];
              opDelete(v37);
              if ( v12 == nullptr )
                break;
              v37 = v12;
            }
          }
          v13 = (uint32_t *)v35[2];
          opDelete(v35);
          if ( v13 == nullptr )
            break;
          v35 = v13;
        }
      }
      v14 = (uint32_t *)v33[2];
      opDelete(v33);
      if ( v14 == nullptr )
        break;
      v33 = v14;
    }
    v1 = self;
  }
  v15 = *((grapher::ActorVariable::Self ***)v1 + 10);
  *((uint32_t *)v1 + 4) = (uint32_t)(uintptr_t)(i);
  *((uint32_t *)v1 + 5) = (uint32_t)(uintptr_t)(i);
  *((uint32_t *)v1 + 3) = 0;
  *((uint32_t *)v1 + 6) = 0;
  for ( k = (grapher::ActorVariable::Self **)((char *)v1 + 32); k != v15; v15 = (grapher::ActorVariable::Self **)sub_1904890(v15) )
  {
    v16 = v15[5];
    if ( v16 != nullptr )
    {
      grapher::ActorVariable::Destroy(v15[5]);
      opDelete(v16);
    }
  }
  v36 = *((uint32_t **)v1 + 9);
  if ( v36 != nullptr )
  {
    v17 = (int)(uintptr_t)(v1) + 28;
    v47 = v1;
    for ( m = *((uint32_t **)v1 + 9); ; m = v28 )
    {
      v32 = (uint32_t *)m[3];
      if ( v32 != nullptr )
      {
        while ( 1 )
        {
          v38 = (uint32_t *)v32[3];
          if ( v38 != nullptr )
          {
            while ( 1 )
            {
              v40 = (uint32_t *)v38[3];
              if ( v40 != nullptr )
              {
                while ( 1 )
                {
                  v34 = (uint32_t *)v40[3];
                  if ( v34 != nullptr )
                  {
                    while ( 1 )
                    {
                      v42 = (uint32_t *)v34[3];
                      if ( v42 != nullptr )
                      {
                        while ( 1 )
                        {
                          v44 = (uint32_t *)v42[3];
                          if ( v44 != nullptr )
                          {
                            while ( 1 )
                            {
                              v30 = (uint32_t *)v44[3];
                              if ( v30 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v19 = v30[3];
                                  if ( v19 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_grapher_ActorVariable_pa_d58c83::M_erase(
                                        v17,
                                        *(void **)(v19 + 12));
                                      v20 = *(uint32_t *)(v19 + 8);
                                      opDelete((void *)v19);
                                      if ( v20 == 0 )
                                        break;
                                      v19 = v20;
                                    }
                                  }
                                  v21 = (uint32_t *)v30[2];
                                  opDelete(v30);
                                  if ( v21 == nullptr )
                                    break;
                                  v30 = v21;
                                }
                              }
                              v22 = (uint32_t *)v44[2];
                              opDelete(v44);
                              if ( v22 == nullptr )
                                break;
                              v44 = v22;
                            }
                          }
                          v23 = (uint32_t *)v42[2];
                          opDelete(v42);
                          if ( v23 == nullptr )
                            break;
                          v42 = v23;
                        }
                      }
                      v24 = (uint32_t *)v34[2];
                      opDelete(v34);
                      if ( v24 == nullptr )
                        break;
                      v34 = v24;
                    }
                  }
                  v25 = (uint32_t *)v40[2];
                  opDelete(v40);
                  if ( v25 == nullptr )
                    break;
                  v40 = v25;
                }
              }
              v26 = (uint32_t *)v38[2];
              opDelete(v38);
              if ( v26 == nullptr )
                break;
              v38 = v26;
            }
          }
          v27 = (uint32_t *)v32[2];
          opDelete(v32);
          if ( v27 == nullptr )
            break;
          v32 = v27;
        }
      }
      v28 = (uint32_t *)v36[2];
      opDelete(v36);
      if ( v28 == nullptr )
        break;
      v36 = v28;
    }
    v1 = v47;
  }
  *((uint32_t *)v1 + 9) = 0;
  *((uint32_t *)v1 + 10) = (uint32_t)(uintptr_t)(k);
  *((uint32_t *)v1 + 11) = (uint32_t)(uintptr_t)(k);
  *((uint32_t *)v1 + 12) = 0;
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorContext::Release  (binary VA: 0x13c0d60)
// Original: grapher::ActorContext::_Release
// ----------------------------------------------------------------------------
void grapher::ActorContext::Release(grapher::ActorContext::Self *self)
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, self);
  grapher::ActorContext::Reset(self);
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorContext::Destroy  (binary VA: 0x13c0e00)
// Original: grapher::ActorContext::~ActorContext
// ----------------------------------------------------------------------------
void grapher::ActorContext::Destroy(grapher::ActorContext::Self *self)
{
  grapher::ActorContext::Self *v1;
  uint32_t *v2;
  uint32_t *v3;
  int v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;
  int v15;
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
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;
  uint32_t *v39;

  v1 = self;
  v2 = *((uint32_t **)self + 13);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094C20);
  if ( v2 != nullptr )
  {
    v3 = (uint32_t *)(*v2 - 12);
    if ( v3 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v2 - 4), 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v3);
    opDelete(v2);
    v1 = self;
    *((uint32_t *)self + 13) = 0;
  }
  grapher::ActorContext::Release(v1);
  v29 = *((uint32_t **)self + 9);
  if ( v29 != nullptr )
  {
    while ( 1 )
    {
      v31 = (uint32_t *)v29[3];
      if ( v31 != nullptr )
      {
        while ( 1 )
        {
          v33 = (uint32_t *)v31[3];
          if ( v33 != nullptr )
          {
            while ( 1 )
            {
              v35 = (uint32_t *)v33[3];
              if ( v35 != nullptr )
              {
                while ( 1 )
                {
                  v37 = (uint32_t *)v35[3];
                  if ( v37 != nullptr )
                  {
                    while ( 1 )
                    {
                      v39 = (uint32_t *)v37[3];
                      if ( v39 != nullptr )
                      {
                        while ( 1 )
                        {
                          v26 = (uint32_t *)v39[3];
                          if ( v26 != nullptr )
                          {
                            while ( 1 )
                            {
                              v24 = (uint32_t *)v26[3];
                              if ( v24 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v4 = v24[3];
                                  if ( v4 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_grapher_ActorVariable_pa_d58c83::M_erase(
                                        (int)(uintptr_t)(self) + 28,
                                        *(void **)(v4 + 12));
                                      v5 = *(uint32_t *)(v4 + 8);
                                      opDelete((void *)v4);
                                      if ( v5 == 0 )
                                        break;
                                      v4 = v5;
                                    }
                                  }
                                  v6 = (uint32_t *)v24[2];
                                  opDelete(v24);
                                  if ( v6 == nullptr )
                                    break;
                                  v24 = v6;
                                }
                              }
                              v7 = (uint32_t *)v26[2];
                              opDelete(v26);
                              if ( v7 == nullptr )
                                break;
                              v26 = v7;
                            }
                          }
                          v8 = (uint32_t *)v39[2];
                          opDelete(v39);
                          if ( v8 == nullptr )
                            break;
                          v39 = v8;
                        }
                      }
                      v9 = (uint32_t *)v37[2];
                      opDelete(v37);
                      if ( v9 == nullptr )
                        break;
                      v37 = v9;
                    }
                  }
                  v10 = (uint32_t *)v35[2];
                  opDelete(v35);
                  if ( v10 == nullptr )
                    break;
                  v35 = v10;
                }
              }
              v11 = (uint32_t *)v33[2];
              opDelete(v33);
              if ( v11 == nullptr )
                break;
              v33 = v11;
            }
          }
          v12 = (uint32_t *)v31[2];
          opDelete(v31);
          if ( v12 == nullptr )
            break;
          v31 = v12;
        }
      }
      v13 = (uint32_t *)v29[2];
      opDelete(v29);
      if ( v13 == nullptr )
        break;
      v29 = v13;
    }
  }
  v27 = *((uint32_t **)self + 3);
  if ( v27 != nullptr )
  {
    while ( 1 )
    {
      v30 = (uint32_t *)v27[3];
      if ( v30 != nullptr )
      {
        while ( 1 )
        {
          v32 = (uint32_t *)v30[3];
          if ( v32 != nullptr )
          {
            while ( 1 )
            {
              v34 = (uint32_t *)v32[3];
              if ( v34 != nullptr )
              {
                while ( 1 )
                {
                  v28 = (uint32_t *)v34[3];
                  if ( v28 != nullptr )
                  {
                    while ( 1 )
                    {
                      v36 = (uint32_t *)v28[3];
                      if ( v36 != nullptr )
                      {
                        while ( 1 )
                        {
                          v38 = (uint32_t *)v36[3];
                          if ( v38 != nullptr )
                          {
                            while ( 1 )
                            {
                              v25 = (uint32_t *)v38[3];
                              if ( v25 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v14 = v25[3];
                                  if ( v14 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_void_pair_void_const_gra_635ee2::M_erase(
                                        (int)(uintptr_t)(self) + 4,
                                        *(void **)(v14 + 12));
                                      v15 = *(uint32_t *)(v14 + 8);
                                      opDelete((void *)v14);
                                      if ( v15 == 0 )
                                        break;
                                      v14 = v15;
                                    }
                                  }
                                  v16 = (uint32_t *)v25[2];
                                  opDelete(v25);
                                  if ( v16 == nullptr )
                                    break;
                                  v25 = v16;
                                }
                              }
                              v17 = (uint32_t *)v38[2];
                              opDelete(v38);
                              if ( v17 == nullptr )
                                break;
                              v38 = v17;
                            }
                          }
                          v18 = (uint32_t *)v36[2];
                          opDelete(v36);
                          if ( v18 == nullptr )
                            break;
                          v36 = v18;
                        }
                      }
                      v19 = (uint32_t *)v28[2];
                      opDelete(v28);
                      if ( v19 == nullptr )
                        break;
                      v28 = v19;
                    }
                  }
                  v20 = (uint32_t *)v34[2];
                  opDelete(v34);
                  if ( v20 == nullptr )
                    break;
                  v34 = v20;
                }
              }
              v21 = (uint32_t *)v32[2];
              opDelete(v32);
              if ( v21 == nullptr )
                break;
              v32 = v21;
            }
          }
          v22 = (uint32_t *)v30[2];
          opDelete(v30);
          if ( v22 == nullptr )
            break;
          v30 = v22;
        }
      }
      v23 = (uint32_t *)v27[2];
      opDelete(v27);
      if ( v23 == nullptr )
        break;
      v27 = v23;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: grapher::ActorContext::Destroy_ea13c11e0  (binary VA: 0x13c11e0)
// Original: grapher::ActorContext::~ActorContext
// ----------------------------------------------------------------------------
void grapher::ActorContext::Destroy_ea13c11e0(grapher::ActorContext::Self *self)
{
  grapher::ActorContext::Destroy(self);
  opDelete(self);
}


