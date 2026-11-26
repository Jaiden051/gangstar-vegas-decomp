#include "Core/Utils/DecompTypes.h"
#include "glitch_CGlfDevice.h"

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::setWindowCaption  (binary VA: 0xcfd220)
// Original: glitch::CGlfDevice::setWindowCaption
// ----------------------------------------------------------------------------
void glitch::CGlfDevice::setWindowCaption()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::closeDevice  (binary VA: 0xcfd230)
// Original: glitch::CGlfDevice::closeDevice
// ----------------------------------------------------------------------------
void glitch::CGlfDevice::closeDevice()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::isWindowActive  (binary VA: 0xcfd240)
// Original: glitch::CGlfDevice::isWindowActive
// ----------------------------------------------------------------------------
int glitch::CGlfDevice::isWindowActive()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::isWindowFocused  (binary VA: 0xcfd250)
// Original: glitch::CGlfDevice::isWindowFocused
// ----------------------------------------------------------------------------
int glitch::CGlfDevice::isWindowFocused()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::isWindowMinimized  (binary VA: 0xcfd260)
// Original: glitch::CGlfDevice::isWindowMinimized
// ----------------------------------------------------------------------------
int glitch::CGlfDevice::isWindowMinimized()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::setResizeAble  (binary VA: 0xcfd270)
// Original: glitch::CGlfDevice::setResizeAble
// ----------------------------------------------------------------------------
void glitch::CGlfDevice::setResizeAble()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::yield  (binary VA: 0xcfd300)
// Original: glitch::CGlfDevice::yield
// ----------------------------------------------------------------------------
int glitch::CGlfDevice::yield()
{
  return ((glf::Thread::Yield()), (int)0);
}

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::Destroy  (binary VA: 0xcfd320)
// Original: glitch::CGlfDevice::~CGlfDevice
// ----------------------------------------------------------------------------
void glitch::CGlfDevice::Destroy(glitch::CGlfDevice::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2070888);
  glitch::IDevice::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::Destroy_eacfd350  (binary VA: 0xcfd350)
// Original: glitch::CGlfDevice::~CGlfDevice
// ----------------------------------------------------------------------------
void glitch::CGlfDevice::Destroy_eacfd350(glitch::CGlfDevice::Self *self)
{
  glitch::CGlfDevice::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::sleep  (binary VA: 0xcfde30)
// Original: glitch::CGlfDevice::sleep
// ----------------------------------------------------------------------------
int glitch::CGlfDevice::sleep(glitch::CGlfDevice::Self *self, glf::Thread::Self *a2, bool a3)
{
  char v3;
  int v4;

  v3 = 1;
  v4 = *((uint32_t *)self + 5);
  if ( v4 != 0 )
    v3 = (*(int (**)(uint32_t))(*(uint32_t *)v4 + 40))(*((uint32_t *)self + 5));
  if ( !a3 || v3 != 0 )
    return ((glf::Thread::Sleep(a2)), (int)0);
  (*(void (**)(uint32_t))(**((uint32_t **)self + 5) + 24))(*((uint32_t *)self + 5));
  glf::Thread::Sleep(a2);
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 5) + 28))(*((uint32_t *)self + 5));
}

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::runImpl  (binary VA: 0xd1ef70)
// Original: glitch::CGlfDevice::runImpl
// ----------------------------------------------------------------------------
int glitch::CGlfDevice::runImpl(glf::App::Self **self)
{
  int *v1;
  int v2;
  int EventMgr;
  typedef int _g4_t_v5[4];
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[2];
  typedef uint32_t _g4_t_v8[5];
  typedef char _g4_t_s[267];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v7)) > _g4_s2 ? (20u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (49u + sizeof(_g4_t_s)) > _g4_s4 ? (49u + sizeof(_g4_t_s)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 49u);

  glf::App::GetWindowSize(*(self + 33), &v6, v5);
  if ( dword_20DFC0C == v6 && dword_20DFC10 == v5[0] )
    return 1;
  if ( v6 > 1 && v5[0] > 1 )
  {
    sprintf(s, "Resizing window (%d %d)", v6, v5[0]);
    glitch::os::Printer::log((int)(uintptr_t)(s), 1);
    v1 = (int *)*(self + 2);
    v2 = *v1;
    v7[0] = v6;
    v7[1] = v5[0];
    (*(void (**)(int *, uint32_t *))(v2 + 140))(v1, v7);
    glitch::CDeviceResizeEvent::Construct((glitch::CDeviceResizeEvent::Self *)v8);
    v8[1] = dword_20DFC0C;
    v8[2] = dword_20DFC10;
    v8[3] = v6;
    v8[4] = v5[0];
    EventMgr = glf::GetEventMgr();
    glf::EventManager::PostEvent(EventMgr, (uint16_t *)v8);
    dword_20DFC0C = v6;
    dword_20DFC10 = v5[0];
    return 1;
  }
  sprintf(s, "Ignoring resize operation to (%d %d)", v6, v5[0]);
  glitch::os::Printer::log((int)(uintptr_t)(s), 1);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::createDriver  (binary VA: 0xd234d0)
// Original: glitch::CGlfDevice::createDriver
// ----------------------------------------------------------------------------
int glitch::CGlfDevice::createDriver(glf::App::Self **self)
{
  glf::App::Self **v1;
  int result;
  glf::App::Self *v3;
  glf::App::Self *v4;
  glf::App::Self *v5;
  glf::App::Self *v6;
  typedef glf::App::Self *_g4_t_v7;
  typedef uint32_t _g4_t_v8[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v1 = self;
  v8[6] = (uint32_t)(uintptr_t)(&self);
  result = *((uint32_t *)glf::App::GetCreationSettings(*(self + 33)) + 10);
  if ( (result & 7) != 0 )
  {
    if ( result == 7 || (result & 2) != 0 )
      goto LABEL_4;
    if ( (result & 1) != 0 )
      return result;
  }
  else
  {
    if ( (result & 0x70) != 0 )
    {
LABEL_4:
      glitch::video::createOpenGLES2Driver((glitch::video::Self *)&v7, (glitch::IDevice::Self *)v1);
      v3 = v7;
      if ( v7 != nullptr )
        sub_8B1B00((volatile int32_t *)((char *)v7 + *(uint32_t *)(*(uint32_t *)v7 - 12) + 4));
      v4 = v1[2];
      v1[2] = v3;
      if ( v4 != nullptr )
        sub_5459C0((volatile int32_t *)((char *)v4 + *(uint32_t *)(*(uint32_t *)v4 - 12)));
      result = (int)(uintptr_t)(v7);
      if ( v7 != nullptr )
        result = sub_5459C0((volatile int32_t *)((char *)v7 + *(uint32_t *)(*(uint32_t *)v7 - 12)));
      if ( v1[2] == nullptr )
        return glitch::os::Printer::log((int)(uintptr_t)("Could not create OpenGL|ES 2.0 driver."), 3);
      return result;
    }
    if ( result == 256 )
      return glitch::os::Printer::log((int)(uintptr_t)("DIRECT3D9 Driver was not compiled into this dll. Try another one."), 3);
    if ( result == 512 )
      return glitch::os::Printer::log((int)(uintptr_t)("Unable to create video driver of unknown type or type not cimpiled in."), 3);
  }
  glitch::video::createNullDriver((glitch::video::Self *)v8, (glitch::IDevice::Self *)v1);
  v5 = (glf::App::Self *)v8[0];
  if ( v8[0] != 0 )
    sub_8B1B00((volatile int32_t *)(v8[0] + *(uint32_t *)(*(uint32_t *)v8[0] - 12) + 4));
  v6 = v1[2];
  v1[2] = v5;
  if ( v6 != nullptr )
    sub_5459C0((volatile int32_t *)((char *)v6 + *(uint32_t *)(*(uint32_t *)v6 - 12)));
  result = v8[0];
  if ( v8[0] != 0 )
    return sub_5459C0((volatile int32_t *)(*(uint32_t *)(*(uint32_t *)v8[0] - 12) + v8[0]));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::Construct  (binary VA: 0xd23680)
// Original: glitch::CGlfDevice::CGlfDevice
// ----------------------------------------------------------------------------
int glitch::CGlfDevice::Construct(glitch::IDevice::Self *a1, glf::App::Self *a2, uint32_t *a3)
{
  glitch::IDevice::Self *v3;
  glf::App::Self *v4;
  volatile int32_t *v5;
  volatile int32_t *v6;
  int Fs;
  volatile int32_t *v8;
  volatile int32_t *v9;
  int result;
  int v11;
  unsigned int v12;
  uint32_t *v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef volatile int32_t *_g4_t_v16;
  typedef void *_g4_t_Instance;
  typedef char *_g4_t_CreationSettings;
  typedef int _g4_t_v19;
  typedef void (*_g4_t_v20)(volatile int32_t **, void *, int, int, int, void *, char *, uint32_t);
  typedef volatile int32_t *_g4_t_v21[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_Instance)) > _g4_s3 ? (16u + sizeof(_g4_t_Instance)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_CreationSettings)) > _g4_s4 ? (20u + sizeof(_g4_t_CreationSettings)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v19)) > _g4_s5 ? (20u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v20)) > _g4_s6 ? (24u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v21)) > _g4_s7 ? (28u + sizeof(_g4_t_v21)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_Instance &Instance = *reinterpret_cast<_g4_t_Instance *>(_g4_sf + 16u);
  _g4_t_CreationSettings &CreationSettings = *reinterpret_cast<_g4_t_CreationSettings *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);

  v21[6] = (volatile int32_t *)&a1;
  v3 = a1;
  v4 = a2;
  glitch::IDevice::Construct(a1, a3);
  *((uint32_t *)v3 + 33) = (uint32_t)(uintptr_t)(v4);
  *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_2070888);
  CreationSettings = glf::App::GetCreationSettings(v4);
  v16 = (volatile int32_t *)opNew(0xCu);
  glitch::COSOperator::Construct((glitch::COSOperator::Self *)v16, "android - GLF");
  v5 = v16;
  if ( v16 != nullptr )
  {
    sub_8B1B00(v16 + 1);
    v5 = v16;
  }
  v6 = *((volatile int32_t **)v3 + 7);
  *((uint32_t *)v3 + 7) = (uint32_t)(uintptr_t)(v5);
  if ( v6 != nullptr )
    sub_5459C0(v6);
  Instance = glitch::CIrrFactory::getInstance();
  v20 = *(void (**)(volatile int32_t **, void *, int, int, int, void *, char *, uint32_t))(*(uint32_t *)Instance + 8);
  Fs = glf::App::GetFs(v4);
  v20(v21, Instance, Fs, v14, v15, Instance, CreationSettings, (uint32_t)(uintptr_t)(v20));
  v8 = v21[0];
  if ( v21[0] != nullptr )
    sub_8B1B00(v21[0] + 1);
  v9 = *((volatile int32_t **)v3 + 8);
  *((uint32_t *)v3 + 8) = (uint32_t)(uintptr_t)(v8);
  if ( v9 != nullptr )
    sub_5459C0(v9);
  if ( v21[0] != nullptr )
    sub_5459C0(v21[0]);
  glitch::CGlfDevice::createDriver((glf::App::Self **)v3);
  result = *((uint32_t *)v3 + 2);
  if ( result != 0 )
  {
    v11 = 0;
    v12 = *(uint32_t *)(v19 + 68) - 2;
    if ( v12 <= 6 )
    {
      v13 = *(uint32_t **)(result + 304);
      v11 = dword_1CA79C4[v12];
      if ( v11 == v13[14] )
        goto LABEL_15;
    }
    else
    {
      v13 = *(uint32_t **)(result + 304);
      if ( v13[14] == 0 )
      {
LABEL_15:
        glitch::IDevice::createScene(v3);
        result = (*(int (**)(uint32_t))(**((uint32_t **)v3 + 2) + 64))(*((uint32_t *)v3 + 2));
        *(uint8_t *)(*((uint32_t *)v3 + 9) + 39) = (result & 7) != 0;
        return result;
      }
    }
    G4_VCALL<void>(v13, 24, v11);
    goto LABEL_15;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::onResized  (binary VA: 0xd23800)
// Original: glitch::CGlfDevice::onResized
// ----------------------------------------------------------------------------
void glitch::CGlfDevice::onResized()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glitch::CGlfDevice::getPlatformInfo  (binary VA: 0xd23810)
// Original: glitch::CGlfDevice::getPlatformInfo
// ----------------------------------------------------------------------------
char * glitch::CGlfDevice::getPlatformInfo(glf::App::Self **self)
{
  return glf::App::GetPlatformInfos(*(self + 33));
}


