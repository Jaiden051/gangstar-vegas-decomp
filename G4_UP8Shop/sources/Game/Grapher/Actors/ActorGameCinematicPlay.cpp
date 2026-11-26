#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCinematicPlay.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicPlay::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCinematicPlay::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCinematicPlay::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCinematicPlay::ActorGameCinematicPlay(v3, -1);
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
    v3 = gll_operator_new(0x3Cu, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameCinematicPlay::ActorGameCinematicPlay(v3, a1);
  }
  return v3;
}



// Constructor (0x845520):
int (**ActorGameCinematicPlay::ActorGameCinematicPlay(int a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem((grapher::ActorBase::Self *)a1, a2);
  *(uint8_t *)(a1 + 52) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB48);
  *(uint8_t *)(a1 + 53) = 0;
  *(uint32_t *)(a1 + 56) = 0;
  return (int (**)(int))(uintptr_t)(&off_205CB48);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCinematicPlay::Destroy  (binary VA: 0x0)
// Original: ActorGameCinematicPlay::~ActorGameCinematicPlay
// ----------------------------------------------------------------------------
int ActorGameCinematicPlay::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB48);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_8399F0  (binary VA: 0x0)
// Original: sub_8399F0
// ----------------------------------------------------------------------------
void sub_8399F0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_841590  (binary VA: 0x0)
// Original: sub_841590
// ----------------------------------------------------------------------------
int sub_841590(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v5;
  void *v6;
  uint32_t *v7;
  void *v8;
  uint32_t *v9;
  void *v10;
  void *v11;
  void *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint8_t v18[20];
  uint32_t *v19;
  uint32_t *v20;
  int v21;
  int v22;
  int v23;
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
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Play Cinematic", (int)(uintptr_t)(&v13));
  grapher::ActorBase::SetDisplayName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Cinematics", (int)(uintptr_t)(&v14));
  grapher::ActorBase::SetCategoryName(a1, &v22);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "In", (int)(uintptr_t)(v18));
  grapher::ActorBase::AddPin(a1, 0, &v38, 1, -1);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Out", (int)(uintptr_t)(&v18[1]));
  grapher::ActorBase::AddPin(a1, 1, &v39, 0, -1);
  g4_std::string::Destroy(&v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Completed", (int)(uintptr_t)(&v18[2]));
  grapher::ActorBase::AddPin(a1, 2, &v40, 0, -1);
  g4_std::string::Destroy(&v40);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v41), "Skip", (int)(uintptr_t)(&v18[3]));
  grapher::ActorBase::AddPin(a1, 3, v41, 0, -1);
  g4_std::string::Destroy(v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Name of the cinematic to play", (int)(uintptr_t)(&v14) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "CineName", (int)(uintptr_t)(&v14) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v18[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v23, 4, &v18[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "CineName", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v24), v6, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  if ( *(uint32_t *)&v18[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v18[4] + 44))(*(uint32_t *)&v18[4]);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Marker where the cinematic will be played", (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Marker", (int)(uintptr_t)(&v15));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v19 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v26, 9, &v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Marker", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v27), v8, 1, 1, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  if ( v19 != nullptr )
    G4_VCALL<void>(v19, 44);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Music to play during the cinematic", (int)(uintptr_t)(&v16) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Music", (int)(uintptr_t)(&v15) + 3);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v20 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v29, 4, &v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Music", (int)(uintptr_t)(&v16));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v30), v10, 1, 1, (int)(uintptr_t)(&v31), 3);
  g4_std::string::Destroy(&v30);
  if ( v20 != nullptr )
    G4_VCALL<void>(v20, 44);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Enable automatic fades.", (int)(uintptr_t)(&v17));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Use Fades", (int)(uintptr_t)(&v16) + 2);
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v32, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Use Fades", (int)(uintptr_t)(&v16) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v33), v11, 1, 1, (int)(uintptr_t)(&v34), 3);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v37),
    "Restore the HUD at the end of the cinematic. Set it to false to chain cinematics together.",
    (int)(uintptr_t)(&v17) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Restore Hud", (int)(uintptr_t)(&v17) + 1);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v35, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Restore Hud", (int)(uintptr_t)(&v17) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v36), v12, 1, 1, (int)(uintptr_t)(&v37), 3);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v35);
  return ((g4_std::string::Destroy(&v37)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8470D0  (binary VA: 0x0)
// Original: sub_8470D0
// ----------------------------------------------------------------------------
void sub_8470D0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  grapher::ActorVariable::Self *Variable;
  char v5; // bp
  char v6;
  int *v7;
  int *v8;
  int *v9;
  int *v10;
  int *v11;
  int *v12;
  int *v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  float v18;
  void *v19;
  g4_cxa_guard_t *v20;
  float v21;
  int v22;
  int v23;

  if ( !sub_62ED90() )
  {
    if ( *((uint8_t *)a1 + 53) != 0 )
    {
      if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
      {
        sub_976230(&dword_20D5240);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
        __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      }
      v3 = nullptr;
      if ( byte_20D5248 == 0 )
        v3 = (int *)(&dword_20D5240);
      if ( *((uint8_t *)v3 + 208) == 0 )
      {
        G4_VCALL<void>(a1, 28, a3);
        grapher::ActorBase::FireEvent(a1, 3, a3);
      }
    }
    else
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
      v5 = sub_837730((int)(uintptr_t)(a1), Variable, a3, v15, v16, v17, (int)(uintptr_t)(v19), (int)(uintptr_t)(v20), v22, v23);
      if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
      {
        sub_976230(&dword_20D5240);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
        __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      }
      v6 = byte_20D5248;
      v7 = nullptr;
      if ( byte_20D5248 == 0 )
        v7 = (int *)(&dword_20D5240);
      if ( *((uint8_t *)v7 + 208) != 0 )
        goto LABEL_22;
      if ( v5 != 0 && *((uint32_t *)a1 + 14) != 0 && (uint8_t)sub_977A40(*((uint32_t *)a1 + 14)) != 0 )
        goto LABEL_20;
      if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
      {
        sub_976230(&dword_20D5240);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
        __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      }
      v6 = byte_20D5248;
      v8 = nullptr;
      if ( byte_20D5248 == 0 )
        v8 = (int *)(&dword_20D5240);
      if ( *((uint8_t *)v8 + 194) != 0 )
      {
LABEL_20:
        G4_VCALL<void>(a1, 28, a3);
        if ( *((uint8_t *)a1 + 52) == 0 )
        {
          if ( byte_20D5530 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530) != 0 )
          {
            sub_902F90(&dword_20D5540);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
            __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
          }
          byte_20D5570 = 0;
        }
        grapher::ActorBase::FireEvent(a1, 2, a3);
      }
      else
      {
LABEL_22:
        if ( v5 != 0 )
        {
          if ( byte_20D5220 == 0 )
          {
            if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
            {
              sub_976230(&dword_20D5240);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
              __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
            }
            v6 = byte_20D5248;
          }
          v9 = nullptr;
          if ( v6 == 0 )
            v9 = (int *)(&dword_20D5240);
          if ( (uint8_t)sub_977850(v9) != 0 )
            goto LABEL_64;
          if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
          {
            sub_976230(&dword_20D5240);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
            __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
          }
          v14 = nullptr;
          if ( byte_20D5248 == 0 )
            v14 = (int *)(&dword_20D5240);
          if ( (uint8_t)sub_9767D0(v14) != 0 )
          {
LABEL_64:
            if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
            {
              sub_976230(&dword_20D5240);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
              __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
            }
            v10 = nullptr;
            if ( byte_20D5248 == 0 )
              v10 = (int *)(&dword_20D5240);
            if ( (uint8_t)sub_976D00(v10) == 0
              && (*((uint32_t *)a1 + 14) == 0 || (uint8_t)sub_977A60(*((uint32_t *)a1 + 14)) != 0) )
            {
              if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
              {
                sub_976230(&dword_20D5240);
                _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
                __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
              }
              v11 = nullptr;
              if ( byte_20D5248 == 0 )
                v11 = (int *)(&dword_20D5240);
              v21 = sub_977810(v11);
              if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
              {
                sub_976230(&dword_20D5240);
                _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
                __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
              }
              v12 = nullptr;
              if ( byte_20D5248 == 0 )
                v12 = (int *)(&dword_20D5240);
              v18 = sub_977800(v12);
              if ( (float)(v21 - v18) <= 700.0 )
              {
                if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
                {
                  sub_9BA6C0(&dword_20D5DA8);
                  _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
                  __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
                }
                v13 = nullptr;
                if ( byte_20D5DAC == 0 )
                  v13 = (int *)(&dword_20D5DA8);
                *((uint32_t *)a1 + 14) = sub_99C000(v13, 8);
              }
            }
          }
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_843F10  (binary VA: 0x0)
// Original: sub_843F10
// ----------------------------------------------------------------------------
int sub_843F10(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  char v2;
  char v3;
  int *v4;
  int *v5;
  int *v7;

  grapher::ActorBase::Cancel(a1, a2);
  v2 = byte_20D5220;
  if ( byte_20D5220 == 0 )
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v2 = byte_20D5220;
  }
  v3 = byte_20D5248;
  v4 = nullptr;
  if ( byte_20D5248 == 0 )
    v4 = (int *)(&dword_20D5240);
  if ( *((uint8_t *)v4 + 208) == 0 )
  {
    if ( v2 != 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
  if ( v2 == 0 )
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v3 = byte_20D5248;
  }
  v7 = nullptr;
  if ( v3 == 0 )
    v7 = (int *)(&dword_20D5240);
  sub_99B750(v7);
  if ( byte_20D5220 == 0 )
  {
LABEL_13:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
  }
LABEL_6:
  v5 = nullptr;
  if ( byte_20D5248 == 0 )
    v5 = (int *)(&dword_20D5240);
  return sub_976840(v5, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_847F40  (binary VA: 0x0)
// Original: sub_847F40
// ----------------------------------------------------------------------------
int sub_847F40(long double a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  int v4;
  int v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *v8;
  grapher::ActorVariable::Self *v9;
  grapher::ActorManager::Self *v10;
  int v11;
  int *v12;
  int *v13;
  bool v14;
  char v16;
  int v17;
  int *v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  int v23;
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
  int v34;
  int v35;
  int v36;
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
  int v47;
  char *v48;
  grapher::ActorManager::Self *v49;
  uint8_t v50;
  uint8_t v51[5];
  char *v52;
  int v53[8];

  G4_VCALL<void>(a2, 28, a4);
  if ( byte_20D5530 != 0 )
  {
    *((uint8_t *)a2 + 52) = byte_20D5570;
  }
  else
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530) != 0 )
    {
      sub_902F90(&dword_20D5540);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
      __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
    }
    v16 = byte_20D5530;
    *((uint8_t *)a2 + 52) = byte_20D5570;
    if ( v16 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530) != 0 )
    {
      sub_902F90(&dword_20D5540);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
      __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
    }
  }
  byte_20D5570 = 1;
  v5 = sub_8F0680(v4);
  sub_8F5010(v5);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 3);
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a2), Variable, a4, v20, v22, v26, v30, v34, v38, v42) != 0 )
  {
    if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
    {
      sub_9BA6C0(&dword_20D5DA8);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
      __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
    }
    v19 = nullptr;
    if ( byte_20D5DAC == 0 )
      v19 = (int *)(&dword_20D5DA8);
    *((uint32_t *)a2 + 14) = sub_99C110(v19, 8);
  }
  if ( byte_20D186E == 0 )
  {
    if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
    {
      sub_ADB4E0(&dword_20D4AC0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
      __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
    }
    v18 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v18 = (int *)(&dword_20D4AC0);
    sub_AB0860((int)(uintptr_t)(v18), 2, "sfx", 0.0);
  }
  v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
  sub_837C70(&v51[1], (int)(uintptr_t)(a2), v7, a4, v23, v27, v31, v35, v39, v43, v46);
  v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 2);
  sub_837C70(&v52, (int)(uintptr_t)(a2), v8, a4, v24, v28, v32, v36, v40, v44, v47);
  v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 4);
  v50 = sub_837730((int)(uintptr_t)(a2), v9, a4, v21, v25, v29, v33, v37, v41, v45);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v53), v52, (int)(uintptr_t)(v51));
  v10 = (grapher::ActorManager::Self *)sub_857260(a2, 1, a4);
  v11 = (int)(uintptr_t)(v10);
  v48 = *(char **)&v51[1];
  if ( byte_20D5220 == 0 )
  {
    v49 = v10;
    v17 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220);
    v11 = (int)(uintptr_t)(v49);
    if ( v17 != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      v11 = (int)(uintptr_t)(v49);
    }
  }
  v12 = nullptr;
  if ( byte_20D5248 == 0 )
    v12 = (int *)(&dword_20D5240);
  sub_9F4A70(a1, (int)(uintptr_t)(v12), v48, v11, (int)(uintptr_t)(v53), v50);
  g4_std::string::Destroy(v53);
  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v13 = nullptr;
  if ( byte_20D5248 == 0 )
    v13 = (int *)(&dword_20D5240);
  sub_976840(v13, a2, a4);
  v14 = byte_20D5B50 == 0;
  *((uint8_t *)a2 + 53) = 0;
  if ( v14 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a2, a4);
  grapher::ActorBase::FireEvent(a2, 1, a4);
  g4_std::string::Destroy(&v52);
  return ((g4_std::string::Destroy(&v51[1])), (int)0);
}


