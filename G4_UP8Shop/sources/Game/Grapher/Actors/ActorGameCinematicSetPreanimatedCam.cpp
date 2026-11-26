#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCinematicSetPreanimatedCam.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicSetPreanimatedCam::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCinematicSetPreanimatedCam::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCinematicSetPreanimatedCam::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCinematicSetPreanimatedCam::ActorGameCinematicSetPreanimatedCam(v3, -1);
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
    v3 = gll_operator_new(0x38u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameCinematicSetPreanimatedCam::ActorGameCinematicSetPreanimatedCam(v3, a1);
  }
  return v3;
}



// Constructor (0x845680):
int (**ActorGameCinematicSetPreanimatedCam::ActorGameCinematicSetPreanimatedCam(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint8_t *)a1 + 52) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC08);
  return (int (**)(int))(uintptr_t)(&off_205CC08);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCinematicSetPreanimatedCam::Destroy  (binary VA: 0x0)
// Original: ActorGameCinematicSetPreanimatedCam::~ActorGameCinematicSetPreanimatedCam
// ----------------------------------------------------------------------------
int ActorGameCinematicSetPreanimatedCam::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC08);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_839AB0  (binary VA: 0x0)
// Original: sub_839AB0
// ----------------------------------------------------------------------------
void sub_839AB0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_842BB0  (binary VA: 0x0)
// Original: sub_842BB0
// ----------------------------------------------------------------------------
int sub_842BB0(grapher::ActorBase::Self *a1)
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
  int v11;
  int v12;
  int v13;
  uint8_t v14[20];
  uint32_t *v15;
  uint32_t *v16;
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
  int v27;
  int v28;
  int v29;
  int v30;
  int v31[4];

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Set Preanimated Cam", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Cinematics", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Play", (int)(uintptr_t)(v14));
  grapher::ActorBase::AddPin(a1, 0, &v28, 1, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Pause", (int)(uintptr_t)(&v14[1]));
  grapher::ActorBase::AddPin(a1, 1, &v29, 1, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Out", (int)(uintptr_t)(&v14[2]));
  grapher::ActorBase::AddPin(a1, 2, &v30, 0, -1);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Completed", (int)(uintptr_t)(&v14[3]));
  grapher::ActorBase::AddPin(a1, 3, v31, 0, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Bdae in which to get the camera.", (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "File", (int)(uintptr_t)(&v11) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v14[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v19, 4, &v14[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "File", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v20), v6, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( *(uint32_t *)&v14[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v14[4] + 44))(*(uint32_t *)&v14[4]);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "The marker to align the camera on.", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Marker", (int)(uintptr_t)(&v12) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v15 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v22, 9, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Marker", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v23), v8, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "The clip to play in the camera animation.", (int)(uintptr_t)(&v13) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Clip", (int)(uintptr_t)(&v13) + 1);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v16 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v25, 4, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Clip", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v26), v10, 1, 1, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v25);
  return ((g4_std::string::Destroy(&v27)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8390F0  (binary VA: 0x0)
// Original: sub_8390F0
// ----------------------------------------------------------------------------
int sub_8390F0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int Animators;
  int result;

  if ( dword_20D6790 == 0 )
    return G4_VCALL<int>(a1, 28, a3);
  Animators = (int)(uintptr_t)(glitch::scene::ISceneNode::getAnimators((glitch::scene::ISceneNode::Self *)dword_20D6790));
  result = (*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)Animators + 8) + 68))(*(uint32_t *)(*(uint32_t *)Animators
                                                                                                 + 8));
  if ( *((uint8_t *)a1 + 52) != 0 )
  {
    result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
    *((uint8_t *)a1 + 52) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_844690  (binary VA: 0x0)
// Original: sub_844690
// ----------------------------------------------------------------------------
int sub_844690(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int result;

  grapher::ActorBase::Cancel(a1, a2);
  result = dword_20D6790;
  if ( dword_20D6790 != 0 )
    return sub_844460();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_848A00  (binary VA: 0x0)
// Original: sub_848A00
// ----------------------------------------------------------------------------
int sub_848A00(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;
  grapher::ActorBase::Self *v4;
  grapher::ActorContext::Self *v5;
  g4_cxa_guard_t *v6;
  glitch::scene::ISceneNode::Self *v7;
  int *v8;
  uint32_t **v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  uint32_t *v16;
  volatile int32_t *v17;
  volatile int32_t *v18;
  void *v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  volatile int32_t *v24;
  volatile int32_t *v25;
  int v26;
  uint32_t **Animators;
  uint32_t *v28;
  int v29;
  int v30;
  grapher::ActorManager::Self *v31;
  int v32;
  int v33;
  int v34;
  int Variable;
  grapher::ActorManager::Self *v36;
  grapher::ActorManager::Self *v37;
  grapher::ActorManager::Self *v38;
  grapher::ActorManager::Self *v39;
  grapher::ActorManager::Self *v40;
  grapher::ActorManager::Self *v41;
  uint32_t *obj;
  volatile int32_t *obja;
  volatile int32_t *objb;
  g4_cxa_guard_t *v45;
  g4_cxa_guard_t *v46;
  g4_cxa_guard_t *v47;
  uint32_t *v48;
  uint32_t *v49;
  char *v50;
  uint32_t *v51;
  uint8_t v52[12];
  uint8_t v53[20];
  uint32_t v54[11];

  v54[10] = (uint32_t)(uintptr_t)(&a1);
  result = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
    return result;
  }
  *((uint8_t *)a1 + 52) = 0;
  grapher::ActorBase::GetVariable(v4, 0);
  sub_837C70(&v50);
  glitch::collada::CColladaDatabase::Construct((glitch::collada::CColladaDatabase::Self *)v53, v50, nullptr);
  v6 = (g4_cxa_guard_t *)sub_857260(v4, 1, v5);
  v7 = (glitch::scene::ISceneNode::Self *)dword_20D6780;
  v47 = v6;
  if ( dword_20D6780 == 0 )
  {
    glitch::collada::CColladaDatabase::Construct((glitch::collada::CColladaDatabase::Self *)v54, v50, nullptr);
    if ( v54[0] != 0 && v47 != nullptr )
    {
      v14 = sub_B97E20();
      glitch::collada::CColladaDatabase::constructScene(
        (glitch::collada::CColladaDatabase::Self *)&v48,
        (glitch::video::IVideoDriver::Self *)v54,
        v14);
      v15 = (int)(uintptr_t)(v48);
      if ( v48 != nullptr )
        __sync_add_and_fetch((uint32_t *)((char *)v48 + *(uint32_t *)(*v48 - 16) + 4), 1u);
      v16 = (uint32_t *)dword_20D6790;
      dword_20D6790 = v15;
      if ( v16 != nullptr )
      {
        v17 = (volatile int32_t *)((uint32_t *)((char *)v16 + *(uint32_t *)(*v16 - 16)));
        if ( __sync_fetch_and_add(v17 + 1, 0xFFFFFFFF) == 1 )
        {
          obja = v17;
          G4_VCALL<void>(v17, 8);
          G4_VCALL<void>(obja, 4);
        }
      }
      if ( v48 != nullptr )
      {
        v18 = (volatile int32_t *)((uint32_t *)((char *)v48 + *(uint32_t *)(*v48 - 16)));
        if ( __sync_fetch_and_add(v18 + 1, 0xFFFFFFFF) == 1 )
        {
          v37 = (grapher::ActorManager::Self *)v18;
          G4_VCALL<void>(v18, 8);
          G4_VCALL<void>(v37, 4);
        }
      }
      if ( dword_20D6790 != 0 )
      {
        if ( byte_20D4D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4D70) != 0 )
        {
          sub_5BEF40(&unk_20D4D80);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4D70);
          __cxa_atexit((void (*)(void *))sub_5BEE10, &unk_20D4D80, &unk_20D1280);
        }
        v19 = nullptr;
        if ( byte_20D4D84 == 0 )
          v19 = &unk_20D4D80;
        v20 = sub_5B9810(v19);
        G4_VCALL<void>(v20, 104, &dword_20D6790);
        v45 = *(g4_cxa_guard_t **)(*(uint32_t *)dword_20D6790 + 184);
        v38 = (grapher::ActorManager::Self *)dword_20D6790;
        (*(void (**)(uint8_t *, g4_cxa_guard_t *))(*v47 + 52))(v52, v47);
        ((void (*)(grapher::ActorManager::Self *))v45)(v38);
        v46 = *(g4_cxa_guard_t **)(*(uint32_t *)dword_20D6790 + 176);
        v39 = (grapher::ActorManager::Self *)dword_20D6790;
        v21 = G4_VCALL<int>(v47, 56);
        ((void (*)(grapher::ActorManager::Self *, int))v46)(v39, v21);
        v33 = dword_20D6790;
        glitch::scene::ISceneNode::getSceneNodeFromType(&v49);
        v22 = (int)(uintptr_t)(v49);
        if ( v49 != nullptr )
          __sync_add_and_fetch((uint32_t *)((char *)v49 + *(uint32_t *)(*v49 - 16) + 4), 1u);
        v23 = (uint32_t *)dword_20D6780;
        dword_20D6780 = v22;
        if ( v23 != nullptr )
        {
          v24 = (volatile int32_t *)((uint32_t *)((char *)v23 + *(uint32_t *)(*v23 - 16)));
          if ( __sync_fetch_and_add(v24 + 1, 0xFFFFFFFF) == 1 )
          {
            objb = v24;
            G4_VCALL<void>(v24, 8, v33, 1130717540, 3);
            G4_VCALL<void>(objb, 4);
          }
        }
        if ( v49 != nullptr )
        {
          v25 = (volatile int32_t *)((uint32_t *)((char *)v49 + *(uint32_t *)(*v49 - 16)));
          if ( __sync_fetch_and_add(v25 + 1, 0xFFFFFFFF) == 1 )
          {
            v40 = (grapher::ActorManager::Self *)v25;
            G4_VCALL<void>(v25, 8);
            G4_VCALL<void>(v40, 4);
          }
        }
        v26 = dword_20D6780;
        if ( dword_20D6780 != 0 )
          goto LABEL_46;
        v34 = dword_20D6790;
        glitch::scene::ISceneNode::getSceneNodeFromType(&v51);
        sub_8443E0(v32, v34, 1667588452);
        if ( v51 != nullptr )
          sub_5459C0((char *)v51 + *(uint32_t *)(*v51 - 16));
        v26 = dword_20D6780;
        if ( dword_20D6780 != 0 )
        {
LABEL_46:
          G4_VCALL<void>(v26, 336, 1101004800);
          Animators = (uint32_t **)glitch::scene::ISceneNode::getAnimators((glitch::scene::ISceneNode::Self *)dword_20D6790);
          v28 = *Animators;
          if ( Animators != (uint32_t **)(uintptr_t)(*Animators) )
          {
            v29 = 0;
            do
            {
              v28 = (uint32_t *)*v28;
              ++v29;
            }
            while ( Animators != (uint32_t **)(uintptr_t)(v28) );
            if ( v29 == 1 )
            {
              v30 = (int)(uintptr_t)(glitch::scene::ISceneNode::getAnimators((glitch::scene::ISceneNode::Self *)dword_20D6790));
              v31 = *(grapher::ActorManager::Self **)(*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)v30 + 8) + 68))(*(uint32_t *)(*(uint32_t *)v30 + 8));
              if ( v31 != nullptr )
              {
                v41 = v31;
                G4_VCALL<void>(v31, 72, 0);
                G4_VCALL<void>(v41, 80, 0);
                G4_VCALL<void>(v41, 20, 0);
              }
            }
          }
        }
      }
    }
    glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v54);
    v7 = (glitch::scene::ISceneNode::Self *)dword_20D6780;
    if ( dword_20D6780 == 0 )
      goto LABEL_13;
  }
  if ( byte_20D5220 == 0 )
  {
    v36 = (grapher::ActorManager::Self *)(v7);
    v12 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220);
    v7 = (glitch::scene::ISceneNode::Self *)(v36);
    if ( v12 != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      v7 = (glitch::scene::ISceneNode::Self *)(v36);
    }
  }
  v8 = nullptr;
  if ( byte_20D5248 == 0 )
    v8 = (int *)(&dword_20D5240);
  sub_9CD080((int)(uintptr_t)(v8), v7);
  v9 = (uint32_t **)glitch::scene::ISceneNode::getAnimators((glitch::scene::ISceneNode::Self *)dword_20D6790);
  v10 = *v9;
  if ( v9 == (uint32_t **)(uintptr_t)(*v9) )
    goto LABEL_13;
  v11 = 0;
  do
  {
    v10 = (uint32_t *)*v10;
    ++v11;
  }
  while ( v9 != (uint32_t **)(uintptr_t)(v10) );
  if ( v11 != 1 )
    goto LABEL_13;
  v13 = (int)(uintptr_t)(glitch::scene::ISceneNode::getAnimators((glitch::scene::ISceneNode::Self *)dword_20D6790));
  obj = *(uint32_t **)(*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)v13 + 8) + 68))(*(uint32_t *)(*(uint32_t *)v13 + 8));
  Variable = grapher::ActorBase::GetVariable(v4, 2);
  sub_837C70(v54);
  if ( obj == nullptr || *(uint32_t *)(v54[0] - 12) == 0 )
  {
    g4_std::string::Destroy(v54);
LABEL_13:
    if ( dword_20D6790 != 0 )
      sub_844460();
    grapher::ActorBase::FireEvent(v4, 2, v5);
    glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v53);
    return ((g4_std::string::Destroy(&v50)), (int)0);
  }
  G4_VCALL<void>(obj, 24, v54[0], Variable, v5);
  G4_VCALL<void>(obj, 80, 1065353216);
  obj[3] = (uint32_t)(uintptr_t)(v4);
  obj[2] = (uint32_t)(uintptr_t)(sub_838960);
  grapher::ActorBase::FireEvent(v4, 2, v5);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, v4, v5);
  g4_std::string::Destroy(v54);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v53);
  return ((g4_std::string::Destroy(&v50)), (int)0);
}


