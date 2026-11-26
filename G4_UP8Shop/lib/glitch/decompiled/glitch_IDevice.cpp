#include "Core/Utils/DecompTypes.h"
#include "glitch_IDevice.h"

// ----------------------------------------------------------------------------
// Function: glitch::IDevice::setScreenCapture  (binary VA: 0xcd0250)
// Original: glitch::IDevice::setScreenCapture
// ----------------------------------------------------------------------------
void glitch::IDevice::setScreenCapture()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::IDevice::getColorFormat  (binary VA: 0xcd0260)
// Original: glitch::IDevice::getColorFormat
// ----------------------------------------------------------------------------
int glitch::IDevice::getColorFormat()
{
  return 5;
}

// ----------------------------------------------------------------------------
// Function: glitch::IDevice::isFullscreen  (binary VA: 0xcd0c80)
// Original: glitch::IDevice::isFullscreen
// ----------------------------------------------------------------------------
int glitch::IDevice::isFullscreen()
{
  glf::App::Self *Instance;

  Instance = (glf::App::Self *)glf::App::GetInstance();
  return (uint8_t)glf::App::GetCreationSettings(Instance)[20];
}

// ----------------------------------------------------------------------------
// Function: glitch::IDevice::run  (binary VA: 0xcd4a60)
// Original: glitch::IDevice::run
// ----------------------------------------------------------------------------
int glitch::IDevice::run(glitch::IDevice::Self *self)
{
  glitch::os::Timer::Self *v2;

  ++*((uint32_t *)self + 32);
  glitch::os::Timer::tick(v2);
  sub_BCFE30((int)(uintptr_t)(self) + 80);
  glf::TaskHandler_SCENE_NODE_TASK_1597f6::Consume((glitch::IDevice::Self *)((char *)self + 104));
  return G4_VCALL<int>(self, 60);
}



// ============================================================================
// Address:   0xcd6850 (size: 96 bytes)
// Symbol:    _ZN6glitch7IDevice10initializeEv
// Demangled: glitch::IDevice::initialize(void)
// ============================================================================
glitch::scene::CPVSDatabaseManager::Self *glitch::IDevice::initialize(glitch::IDevice::Self *self)
{
  glitch::io::IFileSystem::Self *v1;
  glitch::scene::CPVSDatabaseManager::Self *v2;
  struct glitch::scene::CPVSDatabaseManager::Self *result;

  v1 = *((glitch::io::IFileSystem::Self **)self + 8);
  v2 = (glitch::scene::CPVSDatabaseManager::Self *)opNew(0x30u);
  result = glitch::scene::CPVSDatabaseManager::Construct(v2, v1);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(v2);
  return result;
}
// ----------------------------------------------------------------------------
// Function: glitch::IDevice::createScene  (binary VA: 0xcd6a50)
// Original: glitch::IDevice::createScene
// ----------------------------------------------------------------------------
int glitch::IDevice::createScene(glitch::IDevice::Self *self)
{
  glitch::IDevice::Self *v1;
  volatile int32_t *v2;
  int v3;
  uint32_t *v4;
  int result;
  typedef void *_g4_t_Instance;
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_Instance)) > _g4_s0 ? (4u + sizeof(_g4_t_Instance)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_Instance &Instance = *reinterpret_cast<_g4_t_Instance *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  v8[6] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  if ( *((uint32_t *)self + 2) != 0 )
  {
    v7 = opNew(0x20u);
    glitch::video::C2DDriver::Construct(v7, (char *)v1 + 8);
    if ( v7 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
    v2 = *((volatile int32_t **)v1 + 3);
    *((uint32_t *)v1 + 3) = v7;
    if ( v2 != nullptr )
      sub_5459C0(v2);
  }
  Instance = glitch::CIrrFactory::getInstance();
  (*(void (**)(uint32_t *, void *, uint32_t *, uint32_t *))(*(uint32_t *)Instance + 12))(
    v8,
    Instance,
    (uint32_t *)v1 + 2,
    (uint32_t *)v1 + 8);
  v3 = v8[0];
  if ( v8[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v8[0] + *(uint32_t *)(*(uint32_t *)v8[0] - 16) + 4), 1u);
  v4 = *((uint32_t **)v1 + 4);
  *((uint32_t *)v1 + 4) = v3;
  if ( v4 != nullptr )
    sub_5459C0((uint32_t *)((char *)v4 + *(uint32_t *)(*v4 - 16)));
  result = v8[0];
  if ( v8[0] != 0 )
    return sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v8[0] - 16) + v8[0]));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::IDevice::Construct  (binary VA: 0xcd7240)
// Original: glitch::IDevice::IDevice
// ----------------------------------------------------------------------------
glf::TaskDirector::Self * glitch::IDevice::Construct(glitch::IDevice::Self *a1, uint32_t *a2)
{
  glf::EventManager::Self *EventMgr;
  volatile int32_t *v3;
  volatile int32_t *v4;
  glitch::collada::CAnimationStreamingManager::Self *v5;
  glitch::collada::CAnimationStreamingManager::Self *v6;
  int v7;
  volatile int32_t *v8;
  int v9;
  volatile int32_t *v10;
  glf::TaskDirector::Self *v11;
  int v12;
  int v13;
  unsigned int v14;
  char *v15;
  const char *v16;
  glf::TaskDirector::Self *v17;
  int v18;
  pthread_t v19;
  pthread_t v20;
  int v21;
  int v22;
  int v23;
  pthread_t v24;
  pthread_t v25;
  int v26;
  glf::TaskDirector::Self *result;
  char *v28;
  int Instance;
  typedef glitch::os::Timer::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef glf::TaskDirector::Self *_g4_t_v32[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v30)) > _g4_s0 ? (0u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v31)) > _g4_s1 ? (28u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v32)) > _g4_s2 ? (44u + sizeof(_g4_t_v32)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);

  *((uint32_t *)a1 + 1) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206EA48);
  *((uint32_t *)a1 + 2) = 0;
  *((uint32_t *)a1 + 3) = 0;
  *((uint32_t *)a1 + 4) = 0;
  *((uint32_t *)a1 + 5) = 0;
  *((uint32_t *)a1 + 6) = 0;
  *((uint32_t *)a1 + 7) = 0;
  *((uint32_t *)a1 + 8) = 0;
  *((uint32_t *)a1 + 9) = 0;
  *((uint32_t *)a1 + 11) = 0;
  *((uint32_t *)a1 + 12) = *a2;
  *((uint32_t *)a1 + 13) = a2[1];
  *((uint32_t *)a1 + 14) = a2[2];
  *((uint32_t *)a1 + 15) = a2[3];
  *((uint32_t *)a1 + 16) = a2[4];
  *((uint32_t *)a1 + 17) = a2[5];
  *((uint32_t *)a1 + 18) = a2[6];
  *((uint32_t *)a1 + 19) = a2[7];
  *((uint32_t *)a1 + 21) = 0;
  *((uint32_t *)a1 + 20) = (uint32_t)(uintptr_t)(&off_206B068);
  *((uint32_t *)a1 + 22) = 0;
  *((uint32_t *)a1 + 23) = 0;
  *((uint32_t *)a1 + 24) = 5;
  *((uint32_t *)a1 + 25) = 0;
  *((uint32_t *)a1 + 27) = 0;
  *((uint32_t *)a1 + 28) = 0;
  *((uint32_t *)a1 + 29) = 0;
  *((uint32_t *)a1 + 30) = 500;
  *((uint32_t *)a1 + 31) = 0;
  *((uint32_t *)a1 + 26) = ((uint32_t)(uintptr_t)&off_206F148);
  *((uint32_t *)a1 + 32) = 0;
  glitch::init();
  EventMgr = (glf::EventManager::Self *)glf::GetEventMgr();
  glf::EventManager::RegisterUserEventType(
    EventMgr,
    &glitch::CDeviceResizeEvent::EVENT,
    "glitch::CDeviceResizeEvent",
    0x14u);
  v3 = (volatile int32_t *)opNew(0x70u);
  glitch::collada::CResFileManager::Construct((glitch::collada::CResFileManager::Self *)v3, a1);
  if ( v3 != nullptr )
    __sync_add_and_fetch(v3 + 1, 1u);
  v4 = *((volatile int32_t **)a1 + 9);
  *((uint32_t *)a1 + 9) = (uint32_t)(uintptr_t)(v3);
  if ( v4 != nullptr )
    sub_5459C0(v4);
  v5 = (glitch::collada::CAnimationStreamingManager::Self *)opNew(0x2Cu);
  glitch::collada::CAnimationStreamingManager::Construct(v5);
  v6 = *((glitch::collada::CAnimationStreamingManager::Self **)a1 + 11);
  *((uint32_t *)a1 + 11) = (uint32_t)(uintptr_t)(v5);
  if ( v6 != nullptr )
  {
    glitch::collada::CAnimationStreamingManager::Destroy(v6);
    opDelete(v6);
  }
  v7 = opNew((size_t)byte_8);
  *(uint32_t *)(v7 + 4) = 0;
  *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_206F1C8);
  glitch::os::Timer::initTimer(v30);
  __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
  v8 = *((volatile int32_t **)a1 + 5);
  *((uint32_t *)a1 + 5) = v7;
  if ( v8 != nullptr )
    sub_5459C0(v8);
  v9 = glitch::os::Printer::Logger;
  if ( glitch::os::Printer::Logger != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(glitch::os::Printer::Logger + 4), 1u);
    v10 = *((volatile int32_t **)a1 + 6);
    *((uint32_t *)a1 + 6) = v9;
    if ( v10 == nullptr )
      goto LABEL_13;
    sub_5459C0(v10);
  }
  v9 = *((uint32_t *)a1 + 6);
LABEL_13:
  glitch::os::Printer::Logger = v9;
  sub_CD39B0(v32, "Glitch Engine version ");
  v11 = v32[0];
  v12 = *((uint32_t *)v32[0] - 3);
  if ( (unsigned int)(1073741820 - v12) <= 6 )
    sub_1900180("basic_string::append");
  v13 = v12 + 7;
  v14 = *((uint32_t *)v32[0] - 2);
  if ( v12 + 7 <= v14 && *((int *)v32[0] - 1) <= 0 )
  {
    v15 = (char *)v32[0] + v12;
    v16 = "0.1.0.2";
  }
  else if ( v32[0] > (glf::TaskDirector::Self *)"0.1.0.2" || (v15 = (char *)v32[0] + v12, (char *)v32[0] + v12 < "0.1.0.2") )
  {
    if ( v13 == v14 && *((int *)v32[0] - 1) <= 0 )
    {
      v15 = (char *)v32[0] + v12;
      v16 = "0.1.0.2";
    }
    else
    {
      sub_CD3740(v32, v12 + 7);
      v16 = "0.1.0.2";
      v15 = (char *)v32[0] + *((uint32_t *)v32[0] - 3);
    }
  }
  else
  {
    v31 = "0.1.0.2" - (char *)v32[0];
    if ( v13 != v14 || *((int *)v32[0] - 1) > 0 )
    {
      sub_CD3740(v32, v12 + 7);
      v11 = v32[0];
      v15 = (char *)v32[0] + *((uint32_t *)v32[0] - 3);
    }
    v16 = (char *)v11 + v31;
  }
  *(uint32_t *)v15 = *(uint32_t *)v16;
  *((uint16_t *)v15 + 2) = *((uint16_t *)v16 + 2);
  v15[6] = v16[6];
  v17 = v32[0];
  if ( (void *)((char *)v32[0] - 12) != &unk_20D3E6C )
  {
    *((uint32_t *)v32[0] - 1) = 0;
    *((uint32_t *)v17 - 3) = v13;
    *((uint8_t *)v17 + v12 + 7) = 0;
    v17 = v32[0];
  }
  glitch::os::Printer::log(v17, 1);
  v18 = *((uint32_t *)a1 + 23);
  if ( v18 != 0 )
  {
    Instance = glf::TaskDirector::GetInstance();
    glf::TaskDirector::UnregisterHandler(Instance, (int)(uintptr_t)(a1) + 80, v18);
  }
  v19 = pthread_self();
  *((uint32_t *)a1 + 23) = v19;
  v20 = v19;
  v21 = glf::TaskDirector::GetInstance();
  glf::TaskDirector::RegisterHandler(v21, (int)(uintptr_t)(a1) + 80, v20);
  v22 = *((uint32_t *)a1 + 29);
  if ( v22 != 0 )
  {
    v23 = glf::TaskDirector::GetInstance();
    glf::TaskDirector::UnregisterHandler(v23, (int)(uintptr_t)(a1) + 104, v22);
  }
  v24 = pthread_self();
  *((uint32_t *)a1 + 29) = v24;
  v25 = v24;
  v26 = glf::TaskDirector::GetInstance();
  glf::TaskDirector::RegisterHandler(v26, (int)(uintptr_t)(a1) + 104, v25);
  result = v32[0];
  v28 = (char *)v32[0] - 12;
  if ( (void *)((char *)v32[0] - 12) != &unk_20D3E6C
    && __sync_fetch_and_add((volatile int32_t *)v32[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    return (glf::TaskDirector::Self *)gll_operator_delete_arr((int)(uintptr_t)(v28));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::IDevice::Destroy  (binary VA: 0xcd76e0)
// Original: glitch::IDevice::~IDevice
// ----------------------------------------------------------------------------
void glitch::IDevice::Destroy(glitch::IDevice::Self *self)
{
  glitch::scene::CPVSDatabaseManager::Self *v1;
  uint32_t *v2;
  volatile int32_t *v3;
  glitch::collada::CAnimationStreamingManager::Self *v4;
  volatile int32_t *v5;
  uint32_t *v6;
  volatile int32_t *v7;
  volatile int32_t *v8;
  volatile int32_t *v9;
  int v10;
  volatile int32_t *v11;
  int v12;
  int v13;
  int Instance;
  int v15;
  int v16;
  glf::TaskCondition::Self *v17;
  volatile int32_t **v18;
  glf::TaskManager::Self *v19;
  glf::TaskCondition::Self *v20;
  volatile int32_t **v21;
  glf::TaskManager::Self *v22;
  glitch::collada::CAnimationStreamingManager::Self *v23;
  uint32_t *v24;
  uint32_t *v25;
  glf::TaskManager::Self *v26;
  glf::TaskManager::Self *v27;
  glf::TaskManager::Self *v28;
  glf::TaskManager::Self *v29;

  v1 = *((glitch::scene::CPVSDatabaseManager::Self **)self + 10);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206EA48);
  if ( v1 != nullptr )
  {
    glitch::scene::CPVSDatabaseManager::Destroy(v1);
    opDelete(v1);
  }
  v2 = *((uint32_t **)self + 4);
  *((uint32_t *)self + 4) = 0;
  if ( v2 != nullptr )
    sub_5459C0((uint32_t *)((char *)v2 + *(uint32_t *)(*v2 - 16)));
  v3 = *((volatile int32_t **)self + 9);
  *((uint32_t *)self + 9) = 0;
  if ( v3 != nullptr )
    sub_5459C0(v3);
  v4 = *((glitch::collada::CAnimationStreamingManager::Self **)self + 11);
  *((uint32_t *)self + 11) = 0;
  if ( v4 != nullptr )
  {
    glitch::collada::CAnimationStreamingManager::Destroy(v4);
    opDelete(v4);
  }
  v5 = *((volatile int32_t **)self + 3);
  *((uint32_t *)self + 3) = 0;
  if ( v5 != nullptr )
    sub_5459C0(v5);
  v6 = *((uint32_t **)self + 2);
  *((uint32_t *)self + 2) = 0;
  if ( v6 != nullptr )
    sub_5459C0((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 12)));
  v7 = *((volatile int32_t **)self + 7);
  *((uint32_t *)self + 7) = 0;
  if ( v7 != nullptr )
    sub_5459C0(v7);
  v8 = *((volatile int32_t **)self + 5);
  *((uint32_t *)self + 5) = 0;
  if ( v8 != nullptr )
    sub_5459C0(v8);
  v9 = *((volatile int32_t **)self + 8);
  *((uint32_t *)self + 8) = 0;
  if ( v9 != nullptr )
    sub_5459C0(v9);
  v10 = *((uint32_t *)self + 6);
  v11 = nullptr;
  if ( v10 != 0 )
  {
    v12 = *(uint32_t *)(v10 + 4);
    _mm_mfence();
    if ( v12 == 1 )
      glitch::os::Printer::Logger = 0;
    v11 = *((volatile int32_t **)self + 6);
  }
  *((uint32_t *)self + 6) = 0;
  if ( v11 != nullptr )
    sub_5459C0(v11);
  v13 = *((uint32_t *)self + 23);
  Instance = glf::TaskDirector::GetInstance();
  glf::TaskDirector::UnregisterHandler(Instance, (int)(uintptr_t)(self) + 80, v13);
  *((uint32_t *)self + 23) = 0;
  v15 = *((uint32_t *)self + 29);
  v16 = glf::TaskDirector::GetInstance();
  glf::TaskDirector::UnregisterHandler(v16, (int)(uintptr_t)(self) + 104, v15);
  *((uint32_t *)self + 29) = 0;
  glitch::exit();
  v17 = *((glf::TaskCondition::Self **)self + 27);
  *((uint32_t *)self + 26) = ((uint32_t)(uintptr_t)&off_206F108);
  if ( v17 != nullptr )
  {
    v18 = (volatile int32_t **)g4_fnstatic_0452fd96fc;
    if ( g4_fnstatic_0452fd96fc == 0 )
    {
      while ( __sync_val_compare_and_swap(&g4_fnstatic_e7b3943d0f, 0, 1) != 0 )
        glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
      v18 = (volatile int32_t **)g4_fnstatic_0452fd96fc;
      if ( g4_fnstatic_0452fd96fc == 0 )
      {
        v28 = (glf::TaskManager::Self *)opNew(0xE8u);
        glf::TaskManager::Construct(v28);
        _mm_mfence();
        v18 = (volatile int32_t **)v28;
        g4_fnstatic_0452fd96fc = (uintptr_t)(uintptr_t)(v28);
      }
      g4_fnstatic_e7b3943d0f = 0;
    }
    glf::TaskManager::RemoveTaskCondition(v18, v17);
    v19 = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
    if ( g4_fnstatic_0452fd96fc == 0 )
    {
      while ( __sync_val_compare_and_swap(&g4_fnstatic_e7b3943d0f, 0, 1) != 0 )
        glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
      v19 = (glf::TaskManager::Self *)g4_fnstatic_0452fd96fc;
      if ( g4_fnstatic_0452fd96fc == 0 )
      {
        v29 = (glf::TaskManager::Self *)opNew(0xE8u);
        glf::TaskManager::Construct(v29);
        _mm_mfence();
        v19 = v29;
        g4_fnstatic_0452fd96fc = (uintptr_t)(uintptr_t)(v29);
      }
      g4_fnstatic_e7b3943d0f = 0;
    }
    glf::TaskCondition::RemoveTaskManager(v17, v19);
  }
  v20 = *((glf::TaskCondition::Self **)self + 21);
  *((uint32_t *)self + 26) = (uint32_t)(uintptr_t)(&off_2059FC8);
  *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)(&off_206B028);
  if ( v20 != nullptr )
  {
    v21 = (volatile int32_t **)dword_20D5400;
    if ( dword_20D5400 == 0 )
    {
      while ( __sync_val_compare_and_swap(&dword_20D5410, 0, 1) != 0 )
        glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
      v21 = (volatile int32_t **)dword_20D5400;
      if ( dword_20D5400 == 0 )
      {
        v26 = (glf::TaskManager::Self *)opNew(0xE8u);
        glf::TaskManager::Construct(v26);
        _mm_mfence();
        v21 = (volatile int32_t **)v26;
        dword_20D5400 = (int)(uintptr_t)(v26);
      }
      dword_20D5410 = 0;
    }
    glf::TaskManager::RemoveTaskCondition(v21, v20);
    v22 = (glf::TaskManager::Self *)dword_20D5400;
    if ( dword_20D5400 == 0 )
    {
      while ( __sync_val_compare_and_swap(&dword_20D5410, 0, 1) != 0 )
        glf::Thread::Sleep((glf::Thread::Self *)((char *)&dword_0 + 1));
      v22 = (glf::TaskManager::Self *)dword_20D5400;
      if ( dword_20D5400 == 0 )
      {
        v27 = (glf::TaskManager::Self *)opNew(0xE8u);
        glf::TaskManager::Construct(v27);
        _mm_mfence();
        v22 = v27;
        dword_20D5400 = (int)(uintptr_t)(v27);
      }
      dword_20D5410 = 0;
    }
    glf::TaskCondition::RemoveTaskManager(v20, v22);
  }
  v23 = *((glitch::collada::CAnimationStreamingManager::Self **)self + 11);
  *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)(&off_2059FC8);
  if ( v23 != nullptr )
  {
    glitch::collada::CAnimationStreamingManager::Destroy(v23);
    opDelete(v23);
  }
  if ( *((uint32_t *)self + 9) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 9));
  if ( *((uint32_t *)self + 8) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 8));
  if ( *((uint32_t *)self + 7) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 7));
  if ( *((uint32_t *)self + 6) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 6));
  if ( *((uint32_t *)self + 5) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 5));
  v24 = *((uint32_t **)self + 4);
  if ( v24 != nullptr )
    sub_5459C0((uint32_t *)((char *)v24 + *(uint32_t *)(*v24 - 16)));
  if ( *((uint32_t *)self + 3) != 0 )
    sub_5459C0(*((volatile int32_t **)self + 3));
  v25 = *((uint32_t **)self + 2);
  if ( v25 != nullptr )
    sub_5459C0((uint32_t *)((char *)v25 + *(uint32_t *)(*v25 - 12)));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_20483C0);
}

// ----------------------------------------------------------------------------
// Function: glitch::IDevice::Destroy_eacd7b70  (binary VA: 0xcd7b70)
// Original: glitch::IDevice::~IDevice
// ----------------------------------------------------------------------------
void glitch::IDevice::Destroy_eacd7b70(glitch::IDevice::Self *self)
{
  glitch::IDevice::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::IDevice::checkVersion  (binary VA: 0xcdc930)
// Original: glitch::IDevice::checkVersion
// ----------------------------------------------------------------------------
int glitch::IDevice::checkVersion(glitch::IDevice::Self *self, char *a2)
{
  int result;
  char *v3;
  void *v4[4];

  result = 1;
  if ( strcmp("0.1.0.2", a2) != 0 )
  {
    v4[0] = &unk_20D3E78;
    if ( &unk_20D3E78 > (void *)"Warning: The library version of the Glitch Engine ("
      || (char *)&unk_20D3E78 + dword_20D3E6C < "Warning: The library version of the Glitch Engine ("
      || (intptr_t)(*(int32_t *)unk_20D3E74) > 0 )
    {
      sub_CD15B0((int *)v4, dword_20D3E6C, 51);
      std::memcpy(v4[0], "Warning: The library version of the Glitch Engine (", 0x33u);
    }
    else if ( "Warning: The library version of the Glitch Engine (" != (char *)&unk_20D3E78 )
    {
      std::memcpy(&unk_20D3E78, "Warning: The library version of the Glitch Engine (", 51);
    }
    g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v4,
      "0.1.0.2");
    g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v4,
      ") does not match the version the application was compiled with (");
    g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v4,
      a2);
    g4_std::basic_string_char_char_traits_char_SA_77cf59::append(
      (std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *)v4,
      "). This may cause problems.");
    glitch::os::Printer::log(v4[0], 2);
    v3 = (char *)v4[0] - 12;
    if ( (char *)v4[0] - 12 == (char *)&dword_20D3E6C )
    {
      return 0;
    }
    else
    {
      result = 0;
      if ( __sync_fetch_and_add((volatile int32_t *)v4[0] - 1, 0xFFFFFFFF) <= 0 )
      {
        gll_operator_delete_arr((int)(uintptr_t)(v3));
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::IDevice::isExitRequested  (binary VA: 0xcef0f0)
// Original: glitch::IDevice::isExitRequested
// ----------------------------------------------------------------------------
int glitch::IDevice::isExitRequested()
{
  return 0;
}


