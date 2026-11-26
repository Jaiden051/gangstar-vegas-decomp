#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameObjectEnable.h"

// ----------------------------------------------------------------------------
// Function: ActorGameObjectEnable::CreateInstance  (binary VA: 0x0)
// Original: ActorGameObjectEnable::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameObjectEnable::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameObjectEnable::ActorGameObjectEnable(v3, -1);
    if ( v3 != 0 )
    {
      G4_VCALL<void>(v3, 8);
      g4_std::string::construct_copy(v5, a2);
      grapher::ActorBase::SetTemplateName(v3, v5);
      g4_std::string::Destroy(v5);
      grapher::ActorBase::ParseAttributes(v3, a3);
    }
  }
  else
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameObjectEnable::ActorGameObjectEnable(v3, a1);
  }
  return v3;
}



// Constructor (0xc38510):
int (**ActorGameObjectEnable::ActorGameObjectEnable(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD48);
  return (int (**)(int))(uintptr_t)(&off_206BD48);
}
// ----------------------------------------------------------------------------
// Function: ActorGameObjectEnable::Destroy  (binary VA: 0x0)
// Original: ActorGameObjectEnable::~ActorGameObjectEnable
// ----------------------------------------------------------------------------
void ActorGameObjectEnable::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD48);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B830  (binary VA: 0x0)
// Original: sub_C2B830
// ----------------------------------------------------------------------------
void sub_C2B830(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BD48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C30FC0  (binary VA: 0x0)
// Original: sub_C30FC0
// ----------------------------------------------------------------------------
int sub_C30FC0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  int v5;
  int v6;
  long double v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 5, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Enable Object", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Objects", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Enable", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Disable", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Release", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Delete", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 4, &v16, 1, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v17, 0, -1);
  g4_std::string::Destroy(v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "List of objects to enable", (int)(uintptr_t)(&v6) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Object", (int)(uintptr_t)(&v6));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Object", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  { g4_std::string::Destroy(&v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C2CD40  (binary VA: 0x0)
// Original: sub_C2CD40
// ----------------------------------------------------------------------------
void sub_C2CD40(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **i;
  int *v4;
  int v5;
  int *v6;
  void **v7;
  void **v8;
  void *v9[9];

  if ( (uint8_t)sub_638F10() != 0 )
  {
    v9[0] = v9;
    v9[1] = v9;
    sub_8560A0(a1, 0, (int)(uintptr_t)(v9), (int)(uintptr_t)(a3), 0x7FFFFFFF);
    for ( i = (void **)v9[0]; i != v9; i = (void **)*i )
    {
      while ( (uint8_t)sub_C170A0((int)(uintptr_t)(i[2])) == 0 )
      {
        i = (void **)*i;
        if ( i == v9 )
          goto LABEL_13;
      }
      if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      v4 = nullptr;
      if ( byte_20D4A64 == 0 )
        v4 = (int *)(&dword_20D4A60);
      G4_VCALL<void>(v4, 8, i[2]);
      v5 = (int)(uintptr_t)(i[2]);
      if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      v6 = nullptr;
      if ( byte_20D4A64 == 0 )
        v6 = (int *)(&dword_20D4A60);
      sub_5B4460((int)(uintptr_t)(v6), v5, 0);
    }
LABEL_13:
    G4_VCALL<void>(a1, 28, a3);
    grapher::ActorBase::FireEvent(a1, 3, a3);
    v7 = (void **)v9[0];
    if ( v9[0] != v9 )
    {
      while ( 1 )
      {
        v8 = (void **)*v7;
        opDelete(v7);
        if ( v8 == v9 )
          break;
        v7 = v8;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_C2CF50  (binary VA: 0x0)
// Original: sub_C2CF50
// ----------------------------------------------------------------------------
void sub_C2CF50(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  void **v4;
  void **v5;
  void **k;
  size_t v7;
  void **j;
  int *v9;
  uint32_t *v10;
  int v11;
  void **i;
  int *v13;
  uint32_t *v14;
  int v15;
  int v16;
  int *v17;
  int *v18;
  uint32_t *v19;
  int *v20;
  int v21;
  uint32_t *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  void *obj;
  uint32_t *v29;
  uint32_t *v30;
  int v31;
  int v32;
  grapher::ActorContext::Self *v33;
  grapher::ActorBase::Self *v34;
  g4_cxa_guard_t *v35;
  g4_cxa_guard_t *v36;
  g4_cxa_guard_t *v37;
  char *s;
  int v39;
  int v40;
  void *v41[5];
  uint32_t v42[9];

  v42[5] = (uint32_t)(uintptr_t)(&a1);
  v3 = a2;
  v34 = a1;
  v33 = a3;
  v41[0] = v41;
  v41[1] = v41;
  sub_8560A0(a1, 0, (int)(uintptr_t)(v41), (int)(uintptr_t)(a3), 0x7FFFFFFF);
  if ( v3 == 1 )
  {
    for ( i = (void **)v41[0]; i != v41; i = (void **)*i )
    {
      v14 = (uint32_t *)(i[2]);
      if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
      {
        v30 = (uint32_t *)(i[2]);
        v15 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50);
        v14 = v30;
        if ( v15 != 0 )
        {
          sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
          __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
          v14 = v30;
        }
      }
      v13 = nullptr;
      if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_1AA64)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        v13 = (int *)(&dword_20D4A60);
      sub_5D8870((int)(uintptr_t)(v13), v14, 0);
    }
    goto LABEL_5;
  }
  if ( v3 <= 1 )
  {
    if ( v3 == 0 )
    {
      v16 = sub_8F0680();
      v31 = v16;
      v32 = 0;
      if ( v16 != 0 )
      {
        if ( sub_8F1EA0(v16) != 0 )
        {
          v32 = sub_8F1EA0(v31);
        }
        else if ( sub_8F5BA0(v31) != 0 )
        {
          v32 = sub_8F5BA0(v31);
        }
      }
      v37 = (g4_cxa_guard_t *)v41[0];
      if ( v41[0] != v41 )
      {
        while ( 1 )
        {
          v19 = (uint32_t *)v37[2];
          if ( v19 == nullptr )
            goto LABEL_40;
          if ( (uint8_t)sub_C170A0(v37[2]) == 0 )
            break;
          G4_VCALL<void>(v19, 112, 1);
          if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
          {
LABEL_51:
            if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
            {
              sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
              __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
            }
          }
LABEL_41:
          v17 = nullptr;
          if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_1AA64)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
            v17 = (int *)(&dword_20D4A60);
          G4_VCALL<void>(v17, 8, v19);
          if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0
            && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
          {
            sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
            __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
          }
          v18 = nullptr;
          if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_1AA64)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
            v18 = (int *)(&dword_20D4A60);
          sub_5B4460((int)(uintptr_t)(v18), (int)(uintptr_t)(v19), 3);
          if ( v19 != nullptr && v32 == (uint32_t)(uintptr_t)(v19) )
          {
            v20 = (int *)G4_VCALL<int>(v19, 16);
            v21 = 0;
            if ( v20 != nullptr )
            {
              v21 = (int)(uintptr_t)(v19);
              if ( v20 != (int *)(&dword_20D68D0) )
              {
                do
                {
                  v20 = (int *)v20[1];
                  if ( v20 == nullptr )
                  {
                    v21 = 0;
                    goto LABEL_61;
                  }
                }
                while ( v20 != (int *)(&dword_20D68D0) );
                v21 = (int)(uintptr_t)(v19);
              }
            }
LABEL_61:
            v22 = sub_62A190(v31, v21);
            if ( v22 != nullptr )
            {
              v35 = *(g4_cxa_guard_t **)(*v19 + 308);
              obj = v22;
              (*(void (**)(uint32_t *, uint32_t *))(*v22 + 52))(v42, v22);
              ((void (*)(uint32_t *))v35)(v19);
              v36 = *(g4_cxa_guard_t **)(*v19 + 316);
              v23 = G4_VCALL<int>(obj, 56);
              ((void (*)(uint32_t *, int))v36)(v19, v23);
            }
          }
          v37 = (g4_cxa_guard_t *)*v37;
          if ( v37 == (g4_cxa_guard_t *)v41 )
            goto LABEL_5;
        }
        sub_C16450(v19);
        G4_VCALL<void>(v19, 32);
        if ( (*(uint8_t *)unk_20C1765) != 0 )
          G4_VCALL<void>(v19, 356);
LABEL_40:
        if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
          goto LABEL_51;
        goto LABEL_41;
      }
    }
LABEL_5:
    if ( byte_20D5B50 != 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
  if ( v3 != 2 )
  {
    if ( v3 == 4 )
    {
      for ( j = (void **)v41[0]; j != v41; j = (void **)*j )
      {
        v10 = (uint32_t *)(j[2]);
        if ( *((uint8_t *)&reinterpret_cast<G4Elf32Sym *>(stru_1AA54)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
        {
          v29 = (uint32_t *)(j[2]);
          v11 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50);
          v10 = v29;
          if ( v11 != 0 )
          {
            sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
            __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
            v10 = v29;
          }
        }
        v9 = nullptr;
        if ( *(&reinterpret_cast<G4Elf32Sym *>(stru_1AA64)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4)) == 0 )
          v9 = (int *)(&dword_20D4A60);
        sub_5D8560((int)(uintptr_t)(v9), v10, v24, v25, v26, v27);
      }
    }
    goto LABEL_5;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39) + 1, "RELEASE_", (int)(uintptr_t)(&v39));
  for ( k = (void **)v41[0]; k != v41; k = (void **)*k )
  {
    s = (char *)G4_VCALL<int>(k[2], 44);
    g4_std::string::construct_copy(&v40, (char *)&v39 + 1);
    v7 = strlen(s);
    g4_std::string::append((int)(uintptr_t)(&v40), s, v7);
    sub_C17C80((int)(uintptr_t)(k[2]), (int)(uintptr_t)(&v40));
    g4_std::string::Destroy(&v40);
    G4_VCALL<void>(k[2], 40, 512, 1);
  }
  g4_std::string::Destroy((char *)&v39 + 1);
  if ( byte_20D5B50 == 0 )
  {
LABEL_14:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
  }
LABEL_6:
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, v34, v33);
  v4 = (void **)v41[0];
  if ( v41[0] != v41 )
  {
    while ( 1 )
    {
      v5 = (void **)*v4;
      opDelete(v4);
      if ( v5 == v41 )
        break;
      v4 = v5;
    }
  }
}


