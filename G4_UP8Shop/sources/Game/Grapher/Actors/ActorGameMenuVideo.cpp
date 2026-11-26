#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameMenuVideo.h"

// ----------------------------------------------------------------------------
// Function: ActorGameMenuVideo::CreateInstance  (binary VA: 0x0)
// Original: ActorGameMenuVideo::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameMenuVideo::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameMenuVideo::ActorGameMenuVideo(v3, -1);
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
    ActorGameMenuVideo::ActorGameMenuVideo(v3, a1);
  }
  return v3;
}



// Constructor (0xc380d0):
int (**ActorGameMenuVideo::ActorGameMenuVideo(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BAC8);
  return (int (**)(int))(uintptr_t)(&off_206BAC8);
}
// ----------------------------------------------------------------------------
// Function: ActorGameMenuVideo::Destroy  (binary VA: 0x0)
// Original: ActorGameMenuVideo::~ActorGameMenuVideo
// ----------------------------------------------------------------------------
void ActorGameMenuVideo::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BAC8);
  ActorGameBase::Destroy(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2B5B0  (binary VA: 0x0)
// Original: sub_C2B5B0
// ----------------------------------------------------------------------------
void sub_C2B5B0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206BAC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_C2E5F0  (binary VA: 0x0)
// Original: sub_C2E5F0
// ----------------------------------------------------------------------------
int sub_C2E5F0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  void *v3;
  uint32_t *v4;
  void *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
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
  int v21[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Video", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Menus", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Open", (int)(uintptr_t)(&v8));
  grapher::ActorBase::AddPin(a1, 0, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Close", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Out", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Completed", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 3, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "The name of the video to be played.", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "VideoName", (int)(uintptr_t)(&v6) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v9 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v12, 4, &v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "VideoName", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v5, 1, 1, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  if ( v9 != nullptr )
    G4_VCALL<void>(v9, 44);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Whether the video will be skippable or not.", (int)(uintptr_t)(&v7) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "IsSkippable", (int)(uintptr_t)(&v7) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v15, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "IsSkippable", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v16), v3, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  { g4_std::string::Destroy(&v17); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_C2B430  (binary VA: 0x0)
// Original: sub_C2B430
// ----------------------------------------------------------------------------
unsigned int sub_C2B430(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  unsigned int result;
  int v4;

  result = sub_732CE0();
  if ( *(uint8_t *)(result + 53) == 0 )
  {
    G4_VCALL<void>(a1, 28, a3);
    grapher::ActorBase::FireEvent(a1, 3, a3);
    v4 = sub_732CE0();
    return sub_733930(v4, 4u);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C3D290  (binary VA: 0x0)
// Original: sub_C3D290
// ----------------------------------------------------------------------------
int sub_C3D290(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorBase::Self *v3;
  grapher::ActorContext::Self *v4;
  int v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v7;
  gameswf::Self *v8;
  gameswf::Self *v9;
  gameswf::Self *v10;
  void *v11;
  int *v12;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  const char *v18;
  const char *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  gameswf::ASValue::Self *v28;
  gameswf::ASValue::Self *v29;
  int *v30;
  gameswf::ASValue::Self *v31;
  void *obj;
  void *obja;
  uint32_t *objb;
  g4_cxa_guard_t *v35;
  char v36;
  g4_cxa_guard_t *v37;
  char *s;
  uint16_t v39[6];
  unsigned int v40;
  char v41;
  char v42;
  char v43;
  void *v44;
  gameswf::Self *v45;
  int16_t v46;
  char v47;
  char v48;
  char v49;
  char v50;
  void *v51;
  gameswf::Self *v52;
  int16_t v53;
  char v54;
  char v55;
  uint8_t v56[36];
  uint8_t v57[44];
  grapher::ActorBase::Self **v58;

  v58 = &a1;
  v3 = a1;
  v4 = a3;
  if ( a2 == 0 )
  {
    v5 = sub_732CE0();
    v37 = (g4_cxa_guard_t *)sub_767E40(v5, 4u, 0, 0);
    if ( v37 != nullptr )
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 0);
      sub_837C70(&s, (int)(uintptr_t)(v3), Variable, v4, v20, v22, v24, v26, (int)(uintptr_t)(v28), (int)(uintptr_t)(obj), (int)(uintptr_t)(v35));
      v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v3, 1);
      v36 = sub_837730((int)(uintptr_t)(v3), v7, v4, v17, v21, v23, v25, v27, (int)(uintptr_t)(v29), (int)(uintptr_t)(obja));
      v39[0] = 0;
      gameswf::ASValue::setString((gameswf::ASValue::Self *)v39, s);
      v42 = 1;
      v43 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v42, 9);
      v8 = (gameswf::Self *)&v43;
      if ( v42 == -1 )
        v8 = v45;
      gameswf::Strcpy_s(v8, &byte_9[1], (gameswf::Self *)"videoName", v18);
      v46 = -1;
      v47 = 127;
      v48 |= 1u;
      gameswf::RenderFX::getRootHandle((gameswf::RenderFX::Self *)v56);
      gameswf::CharacterHandle::setMember(
        (gameswf::CharacterHandle::Self *)v56,
        (const gameswf::String::Self *)&v42,
        (const gameswf::ASValue::Self *)v39);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v56);
      if ( v42 == -1 && (v48 & 1) != 0 )
        gameswf::free_internal(v45, v44, v15);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v39);
      v41 = v36;
      LOWORD(v40) = 1;
      v49 = 1;
      v50 = 0;
      gameswf::String::resize((gameswf::String::Self *)&v49, 11);
      v9 = (gameswf::Self *)&v50;
      if ( v49 == -1 )
        v9 = v52;
      gameswf::Strcpy_s(v9, &byte_9[3], (gameswf::Self *)"isSkippable", v19);
      v53 = -1;
      v54 = 127;
      v55 |= 1u;
      gameswf::RenderFX::getRootHandle((gameswf::RenderFX::Self *)v57);
      gameswf::CharacterHandle::setMember(
        (gameswf::CharacterHandle::Self *)v57,
        (const gameswf::String::Self *)&v49,
        (const gameswf::ASValue::Self *)&v40);
      gameswf::CharacterHandle::Destroy((gameswf::CharacterHandle::Self *)v57);
      if ( v49 == -1 && (v55 & 1) != 0 )
        gameswf::free_internal(v52, v51, v16);
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v40);
      v10 = (gameswf::Self *)off_20BB7B8[0];
      if ( byte_20D2B90 == 0 )
      {
        v31 = (gameswf::ASValue::Self *)off_20BB7B8[0];
        v14 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D2B90);
        v10 = (gameswf::Self *)(v31);
        if ( v14 != 0 )
        {
          sub_793360((int)(uintptr_t)(&unk_20D2B98));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D2B90);
          __cxa_atexit((void (*)(void *))sub_77D630, &unk_20D2B98, &unk_20D1280);
          v10 = (gameswf::Self *)(v31);
        }
      }
      v11 = nullptr;
      if ( byte_20D2B9C == 0 )
        v11 = &unk_20D2B98;
      sub_7933D0((int)(uintptr_t)(v11), v10, (void (*)(const gameswf::ASNativeEventState::Self *))sub_794990, (int)(uintptr_t)(v37), (int)(uintptr_t)("stage"), 0);
      if ( byte_20D54E0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D54E0) != 0 )
      {
        sub_51DC30((int)(uintptr_t)(&unk_20D5500));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D54E0);
        __cxa_atexit((void (*)(void *))sub_4EEA60, &unk_20D5500, &unk_20D1280);
      }
      v12 = nullptr;
      if ( byte_20D5514 == 0 )
        v12 = (int *)&unk_20D5500;
      v30 = v12;
      objb = (uint32_t *)sub_4EBBF0(4u, 1);
      sub_637E00(objb);
      sub_51DCA0(v30, (int)(uintptr_t)(objb));
      g4_std::string::Destroy(&s);
    }
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, v3, v4);
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(v3, 2, v4));
}


