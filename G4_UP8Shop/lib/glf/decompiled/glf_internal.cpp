#include "Core/Utils/DecompTypes.h"
#include "glf_internal.h"

// ----------------------------------------------------------------------------
// Function: sub_C6C3A0  (binary VA: 0xc6c3a0)
// Original: sub_C6C3A0
// ----------------------------------------------------------------------------
int sub_C6C3A0()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20DEB80);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DEB80, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEB84), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEB84, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEB88), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEB88, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DEB8C), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20DEB8C, &unk_20D1280);
  dword_20DEB90 = 1056964608;
  dword_20DEB94 = 1056964608;
  dword_20DEB98 = 1056964608;
  return 1056964608;
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: AndroidOS_setKeyboardText  (binary VA: 0xc6d720)
// Original: AndroidOS_setKeyboardText
// ----------------------------------------------------------------------------
int AndroidOS_setKeyboardText(int a1)
{
  void *CurrentJNIEnv;
  int v2;
  int v3;
  int result;

  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  v2 = (int)(uintptr_t)(CurrentJNIEnv);
  if ( a1 == 0 )
    return sub_4BFF00((int)(uintptr_t)(CurrentJNIEnv), dword_20DEC28, dword_20DEC48, 0);
  v3 = G4_VCALL<int>(CurrentJNIEnv, 668, a1);
  result = sub_4BFF00(v2, dword_20DEC28, dword_20DEC48, v3);
  if ( v3 != 0 )
    return G4_VCALL<int>(v2, 92, v3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: AndroidOS_showKeyboard  (binary VA: 0xc6d7d0)
// Original: AndroidOS_showKeyboard
// ----------------------------------------------------------------------------
int AndroidOS_showKeyboard(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7;
  void *CurrentJNIEnv;
  int v9;
  int v10;
  int result;
  int v12;

  v7 = a3;
  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  v9 = (int)(uintptr_t)(CurrentJNIEnv);
  if ( a2 != 0 && a1 != 0 )
    v10 = G4_VCALL<int>(CurrentJNIEnv, 668, a2);
  else
    v10 = 0;
  v12 = v10;
  if ( a3 <= 0 )
    v7 = 5;
  sub_4BFF00(v9, dword_20DEC28, dword_20DEC44, a1, v10, v7, a4, a5, a6, a7);
  result = v12;
  if ( v12 != 0 )
    return G4_VCALL<int>(v9, 92, v12);
  return result;
}

// ----------------------------------------------------------------------------
// Function: AndroidOS_getKeyboardText  (binary VA: 0xc6d8b0)
// Original: AndroidOS_getKeyboardText
// ----------------------------------------------------------------------------
char * AndroidOS_getKeyboardText(char *dest)
{
  char *p_src;
  void *CurrentJNIEnv;
  unsigned int v3;
  char *v4;
  int v5;
  int v6;
  typedef char _g4_t_src;
  typedef uint8_t _g4_t_v9[266];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_src)) > _g4_s0 ? (0u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (1u + sizeof(_g4_t_v9)) > _g4_s1 ? (1u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 1u);

  p_src = &src;
  CurrentJNIEnv = NVThreadGetCurrentJNIEnv();
  v3 = 255;
  if ( ((unsigned int)(uintptr_t)(&src) & 1) != 0 )
  {
    p_src = (char *)(v9);
    src = 0;
    LOBYTE(v3) = -2;
    if ( ((unsigned int)(uintptr_t)(v9) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((unsigned int)(uintptr_t)(&src) & 2) == 0 )
  {
    goto LABEL_3;
  }
  *(uint16_t *)p_src = 0;
  v3 -= 2;
  p_src += 2;
LABEL_3:
  memset(p_src, 0, 4 * (v3 >> 2));
  v4 = &p_src[4 * (v3 >> 2)];
  if ( (v3 & 2) != 0 )
  {
    *(uint16_t *)v4 = 0;
    v4 += 2;
  }
  if ( (v3 & 1) != 0 )
    *v4 = 0;
  v5 = JNIEnv::CallStaticObjectMethod((int)(uintptr_t)(CurrentJNIEnv), dword_20DEC28, dword_20DEC40);
  v6 = G4_VCALL<int>(CurrentJNIEnv, 684, v5);
  G4_VCALL<void>(CurrentJNIEnv, 800, v5, 0, v6, &src);
  G4_VCALL<void>(CurrentJNIEnv, 92, v5);
  return strcpy(dest, &src);
}

extern "C" uint8_t g4_rwdata_image[];
extern "C" const uint8_t g4_rodata_image[];
#define G4_RW_PTR(ea) (reinterpret_cast<uint32_t *>(g4_rwdata_image + ((ea) - 0x20307e0u)))
#define G4_RO_PTR(ea) (reinterpret_cast<const uint32_t *>(g4_rodata_image + ((ea) - 0x1b14c40u)))

static uint32_t *g4_cc0c70(uint32_t *a1)
{
  if ( a1 != nullptr )
  {
    a1[0] = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  return a1;
}

static void g4_cc0c90(void *) {}

static void g4_glf_Thread_Construct(uint32_t *self, unsigned int a2)
{
  self[0] = (uint32_t)(uintptr_t)(&off_206D8F0);
  self[1] = 0;
  self[2] = a2;
  self[3] = 3;
  self[4] = 0;
  self[5] = (uint32_t)(uintptr_t)(&dword_213B814);
  uint32_t *v2 = (uint32_t *)sub_4EBD10(0x28u, 1);
  v2[0] = (uint32_t)(uintptr_t)(&off_206D928);
  v2[1] = (uint32_t)(uintptr_t)(self);
  v2[2] = (uint32_t)(uintptr_t)(&dword_213B814);
  v2[3] = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(v2 + 2), "thread", 6u);
  v2[4] = 0;
  v2[5] = 0;
  v2[0] = (uint32_t)(uintptr_t)(&off_206D968);
  v2[6] = (uint32_t)-1;
  *((uint8_t *)v2 + 28) = 0;
  v2[8] = 0xFFFFu & 0xFFF6FEEBu;
  v2[9] = 0xFFFFFu;
  self[6] = (uint32_t)(uintptr_t)(v2);
}

// Restored deduplicated glf .init_array constructors (in exact binary VA order)
extern "C" void g4_init_c7ce50()
{
  sub_1900D70(&unk_20DED50);
}

extern "C" void g4_init_c826f0()
{
  uint32_t *t1 = G4_RW_PTR(0x20dedc0u);
  t1[0] = *(uint32_t *)glf::TlsNode::GetHead();
  t1[1] = 4;
  t1[2] = 0;
  t1[3] = (uint32_t)(uintptr_t)G4_RO_PTR(0x1ca60f0u);
  t1[4] = 0;
  t1[5] = 0;
  t1[6] = 0;
  t1[7] = 0;
  t1[8] = 0;
  glf::TlsNode::Init((glf::TlsNode::Self *)t1);
  *(uint32_t *)glf::TlsNode::GetHead() = (uint32_t)(uintptr_t)t1;

  uint32_t *t2 = G4_RW_PTR(0x20ded80u);
  t2[0] = *(uint32_t *)glf::TlsNode::GetHead();
  t2[1] = 4;
  t2[2] = 0;
  t2[3] = (uint32_t)(uintptr_t)G4_RO_PTR(0x1ca60e0u);
  t2[4] = 0;
  t2[5] = 0;
  t2[6] = 0;
  t2[7] = 0;
  t2[8] = 0;
  glf::TlsNode::Init((glf::TlsNode::Self *)t2);
  *(uint32_t *)glf::TlsNode::GetHead() = (uint32_t)(uintptr_t)t2;
}

extern "C" void g4_init_c90c50()
{
  *G4_RW_PTR(0x20df280u) = (uint32_t)(uintptr_t)(&off_206DA98);
}

extern "C" void g4_init_ca2e40()
{
  glf::fs2::gAllFileSystems = 0;
  dword_20DF444 = 0;
  *(uintptr_t *)(unk_20DF448) = 0;
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)&glf::fs2::android::sDataDirectory);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)&glf::fs2::android::sHomeDirectory);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)&glf::fs2::android::sTempDirectory);
}

extern "C" void g4_init_cb2b20()
{
  int v1[7];
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DF494), ".", (int)(uintptr_t)v1);
  dword_20DF498 = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)&unk_20DF494);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20DF49C), "..", (int)(uintptr_t)v1 + 1);
  dword_20DF4A0 = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)&unk_20DF49C);
  glf::fs2::gLowerAppFolderName = (uintptr_t)(&dword_213B814);
  glf::fs2::gAppFolderName = (uintptr_t)(&dword_213B814);
}

extern "C" void g4_init_cb4790()
{
  auto set_rtti = [](uint32_t ea, uint32_t parent_ea, const char *name) {
    uint32_t *r = G4_RW_PTR(ea);
    r[0] = 1920234601u;
    r[1] = parent_ea ? (uint32_t)(uintptr_t)G4_RW_PTR(parent_ea) : 0u;
    r[2] = (uint32_t)(uintptr_t)name;
  };
  set_rtti(0x20df5a0u, 0u,          "InputDevice");
  set_rtti(0x20df594u, 0x20df5a0u,  "Keyboard");
  set_rtti(0x20df588u, 0x20df5a0u,  "Mouse");
  set_rtti(0x20df57cu, 0x20df5a0u,  "Gamepad");
  set_rtti(0x20df570u, 0x20df57cu,  "Ps3Controller");
  set_rtti(0x20df564u, 0x20df57cu,  "XboxController");
  set_rtti(0x20df558u, 0x20df57cu,  "OpenKodeController");
  set_rtti(0x20df54cu, 0x20df57cu,  "WiiExtension");
  set_rtti(0x20df540u, 0x20df54cu,  "WiiNunchuk");
  set_rtti(0x20df534u, 0x20df54cu,  "WiiClassicController");
  set_rtti(0x20df528u, 0x20df57cu,  "WiiRemote");
  set_rtti(0x20df51cu, 0x20df57cu,  "DsController");
  set_rtti(0x20df510u, 0x20df57cu,  "IPhoneController");
  set_rtti(0x20df504u, 0x20df57cu,  "AndroidGenericController");
  set_rtti(0x20df4f8u, 0x20df57cu,  "OspController");
  set_rtti(0x20df4ecu, 0x20df57cu,  "GameCubeController");
  set_rtti(0x20df4e0u, 0x20df57cu,  "PlaybookController");
  set_rtti(0x20df4d4u, 0x20df57cu,  "SdlController");
  set_rtti(0x20df4c8u, 0x20df57cu,  "CTRController");
  set_rtti(0x20df4bcu, 0x20df57cu,  "PSP2Controller");
  set_rtti(0x20df4b0u, 0x20df57cu,  "DuoController");
  set_rtti(0x20df4a4u, 0x20df57cu,  "IOSGameController");
}

extern "C" void g4_init_cba130()
{
  glf::Mutex::Construct((pthread_mutex_t **)&glf::gDequeMutex, 0);
  glf::Mutex::Construct((pthread_mutex_t **)&glf::gThreadMutex, 0);
  glf::Condition::Construct((glf::Condition::Self *)&glf::gThreadCondition, (glf::Mutex::Self *)&glf::gThreadMutex);
  glf::gQueuedReads = 0;
  dword_20DF5E8 = 0;
  dword_20DF5EC = 0;
  *(uintptr_t *)(unk_20DF5F0) = 0;
  dword_20DF5F4 = 0;
  *(uintptr_t *)(unk_20DF5F8) = 0;
  *(uintptr_t *)(unk_20DF5FC) = 0;
  *(uintptr_t *)(unk_20DF600) = 0;
  dword_20DF604 = 0;
  *(uintptr_t *)(unk_20DF5E4) = 8;
  glf::gQueuedReads = (uintptr_t)::operator new(0x20u);
  uint32_t *v0 = reinterpret_cast<uint32_t *>(glf::gQueuedReads + 12u);
  uint32_t buf = (uint32_t)(uintptr_t)::operator new(0x200u);
  *v0 = buf;
  dword_20DF5F4 = (uint32_t)(uintptr_t)v0;
  dword_20DF604 = (uint32_t)(uintptr_t)v0;
  dword_20DF5EC = buf;
  dword_20DF5E8 = buf;
  *(uintptr_t *)(unk_20DF5F0) = buf + 512u;
  *(uintptr_t *)(unk_20DF5FC) = buf;
  *(uintptr_t *)(unk_20DF5F8) = buf;
  *(uintptr_t *)(unk_20DF600) = buf + 512u;
  uint32_t *th = reinterpret_cast<uint32_t *>(&glf::gReadASyncThread);
  g4_glf_Thread_Construct(th, (glf::SR_ThreadSizeFix == 0) ? 4096u : 0x10000u);
  th[0] = (uint32_t)(uintptr_t)(&off_206E2A0);
}

extern "C" void g4_init_cbea10()
{
  dword_20DF63C = (uint32_t)(uintptr_t)(&dword_20DF634);
  dword_20DF640 = (uint32_t)(uintptr_t)(&dword_20DF634);
  dword_20DF634 = 0;
  dword_20DF638 = 0;
  dword_20DF644 = 0;
}

extern "C" void g4_init_cbf700()
{
  dword_20DF650 = 3;
  dword_20C2144[0] = 17;
  dword_20C2154 = 18;
  dword_20C215C = 48;
  dword_20C2164 = 18;
  dword_20C216C = 17;
  dword_20C2174 = 19;
  dword_20C2178 = 24;
  dword_20C2184 = 27;
  dword_20C2188 = 56;
  dword_20C2194 = 23;
  dword_20C2198 = 25;
  dword_20C219C = 9;
  dword_20C21A8 = 12;
  dword_20C21B8 = 20;
  dword_20C21BC = 52;
  dword_20C21C8 = 5;
  dword_20C21CC = 21;
  dword_20C21D4 = 3;
  dword_20C21D8 = 28;
  dword_20C21E4 = 11;
  dword_20C21E8 = 60;
  dword_20C21F4 = 7;
  dword_20C21F8 = 29;
  dword_20C21FC = 13;
}

extern "C" void g4_init_cc1280()
{
  dword_20DF690 = 4096;
  void *buf = ::operator new(192u);
  memset(buf, 0, 192u);
  dword_20DF6A0 = (uint32_t)(uintptr_t)buf;
  dword_20DF6A4 = dword_20DF6A0 + 192u;
  dword_20DF6A8 = dword_20DF6A0 + 192u;
  glf::TlsNode::Construct(
    (glf::TlsNode::Self *)&unk_20DF660,
    (void (*)(void *))g4_cc0c70,
    (void (*)(void *))g4_cc0c90,
    0xCu);
}

extern "C" void g4_init_cc5720()
{
  dword_20DF6E0 = *(uint32_t *)glf::TlsNode::GetHead();
  dword_20DF6E4 = 4;
  dword_20DF6E8 = 0;
  dword_20DF6EC = (uint32_t)(uintptr_t)(&unk_1CA6750);
  dword_20DF6F0 = 0;
  dword_20DF6F4 = 0;
  dword_20DF6F8 = 0;
  dword_20DF6FC = 0;
  dword_20DF700 = 0;
  glf::TlsNode::Init((glf::TlsNode::Self *)&dword_20DF6E0);
  *(uint32_t *)glf::TlsNode::GetHead() = (uint32_t)(uintptr_t)(&dword_20DF6E0);
}

#undef G4_RW_PTR
#undef G4_RO_PTR

// ----------------------------------------------------------------------------
// Function: sub_C721D0  (binary VA: 0xc721d0)
// Original: sub_C721D0
// ----------------------------------------------------------------------------
int sub_C721D0()
{
  dword_20DECA0 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DECA0, &unk_20D1280);
  dword_20DECA4 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DECA4, &unk_20D1280);
  dword_20DECA8 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DECA8, &unk_20D1280);
  dword_20DECAC = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DECAC, &unk_20D1280);
  dword_20DECB0 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DECB0, &unk_20D1280);
  dword_20DECB4 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DECB4, &unk_20D1280);
  dword_20DECB8 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DECB8, &unk_20D1280);
  dword_20DECBC = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20DECBC, &unk_20D1280);
  dword_20DECC0 = opNewArray(0x10u);
  sub_1900D70(&unk_20DECC4);
  return __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20DECC4, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_C72BA0  (binary VA: 0xc72ba0)
// Original: sub_C72BA0
// ----------------------------------------------------------------------------
int sub_C72BA0()
{
  glf::TlsNode::Construct(
    (glf::TlsNode::Self *)&glf::gScopeMsgs,
    (void (*)(void *))glf::TypegScopeMsgs_glf_ScopeMsg_f28cf0::Construct,
    (void (*)(void *))glf::TypegScopeMsgs_glf_ScopeMsg_f28cf0::Destruct,
    4u);
  __cxa_atexit((void (*)(void *))glf::Tls_glf_ScopeMsg_bdc2a2::Destroy, &glf::gScopeMsgs, &unk_20D1280);
  glf::TlsNode::Construct(
    (glf::TlsNode::Self *)&glf::gFrameHeap,
    (void (*)(void *))glf::TypegFrameHeap_glf_FrameHeap_04d213::Construct,
    (void (*)(void *))glf::TypegFrameHeap_glf_FrameHeap_04d213::Destruct,
    0x10u);
  return __cxa_atexit((void (*)(void *))glf::Tls_glf_FrameHeap_ea778d::Destroy, &glf::gFrameHeap, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_C72F10  (binary VA: 0xc72f10)
// Original: sub_C72F10
// ----------------------------------------------------------------------------
int * sub_C72F10(int *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v7;
  int v8;
  uint32_t *v10;
  int v11;
  int v12;
  char v13;

  v13 = 1;
  v7 = a2 + 4;
  v12 = v7;
  if ( a3 == 0 && a4 != v7 )
    v13 = *a5 < *(uint32_t *)(a4 + 16);
  v8 = opNew(0x24u);
  if ( v8 != -16 )
  {
    *(uint32_t *)(v8 + 16) = *a5;
    v10 = (uint32_t *)v8;
    g4_std::string::construct_copy(v8 + 20, a5 + 1);
    v8 = (int)(uintptr_t)(v10);
    v10[6] = a5[2];
    v10[7] = a5[3];
    v10[8] = a5[4];
  }
  v11 = v8;
  sub_1904970(v13, v8, a4, v12);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v11;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_C73010  (binary VA: 0xc73010)
// Original: sub_C73010
// ----------------------------------------------------------------------------
int sub_C73010(int a1, char *a2, int a3)
{
  int v3;
  int v6;
  bool v7;
  volatile int32_t *v8;
  int v9;
  int v10;
  int result;
  int v12;
  int v13;
  volatile int32_t *v14;
  int v15;
  typedef uint8_t _g4_t_v16[5];
  typedef int _g4_t_v17[9];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (3u + sizeof(_g4_t_v16)) > _g4_s0 ? (3u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 3u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);

  v3 = a1 + 308;
  sub_1900810(a1 + 308);
  *(uint32_t *)(a1 + 420) = 0;
  *(uint8_t *)(a1 + 424) = 0;
  *(uint8_t *)(a1 + 425) = 0;
  *(uint32_t *)(a1 + 428) = 0;
  *(uint32_t *)(a1 + 432) = 0;
  *(uint32_t *)(a1 + 436) = 0;
  *(uint32_t *)(a1 + 440) = 0;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_206D7CC);
  *(uint32_t *)(a1 + 308) = (uint32_t)(uintptr_t)(&off_206D7E0);
  *(uint32_t *)(a1 + 4) = 0;
  sub_19119D0(v3, a1 + 12);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&off_206D80C);
  *(uint32_t *)(a1 + 308) = (uint32_t)(uintptr_t)(&off_206D820);
  sub_19119D0(v3, a1 + 12);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206D6EC);
  *(uint32_t *)(a1 + 308) = ((uint32_t)(uintptr_t)&off_206D714);
  *(uint32_t *)(a1 + 8) = ((uint32_t)(uintptr_t)&off_206D700);
  glf::fs2::FileSystem::Get((glf::fs2::FileSystem::Self *)&v16[1]);
  *(uint32_t *)(a1 + 16) = 0;
  *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(&off_20AB2C8);
  *(uint32_t *)(a1 + 20) = 0;
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0;
  *(uint32_t *)(a1 + 36) = 0;
  sub_1903A70(a1 + 40);
  *(uint32_t *)(a1 + 12) = ((uint32_t)(uintptr_t)&off_206D728);
  v6 = *(uint32_t *)&v16[1];
  v7 = *(uint32_t *)&v16[1] == 0;
  *(uint32_t *)(a1 + 300) = *(uint32_t *)&v16[1];
  if ( v7 )
  {
    *(uint32_t *)(a1 + 304) = 0;
  }
  else
  {
    __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
    v8 = *(volatile int32_t **)&v16[1];
    *(uint32_t *)(a1 + 304) = 0;
    if ( v8 != nullptr )
    {
      if ( __sync_fetch_and_add(v8 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 8);
        G4_VCALL<void>(v8, 16);
        v10 = *(uint32_t *)(a1 + 304);
      }
      else
      {
        v9 = *((uint32_t *)v8 + 1);
        _mm_mfence();
        if ( v9 == 1 )
          G4_VCALL<void>(v8, 12);
        v10 = *(uint32_t *)(a1 + 304);
      }
      if ( v10 != 0 )
        return sub_1911530(
                 *(uint32_t *)(*(uint32_t *)a1 - 12) + a1,
                 *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1 + 20) | 4);
    }
  }
  v12 = glf::io2::Device::ConvertToOpenMode(a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), a2, (int)(uintptr_t)(v16));
  v17[1] = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v17);
  v13 = (int)(uintptr_t)(glf::fs2::FileSystem::Open(*(glf::fs2::FileSystem::Self **)(a1 + 300), (int)(uintptr_t)(v17), v12));
  if ( v13 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v13 + 4), 1u);
  v14 = *(volatile int32_t **)(a1 + 304);
  *(uint32_t *)(a1 + 304) = v13;
  if ( v14 != nullptr )
  {
    if ( __sync_fetch_and_add(v14 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v14, 8);
      G4_VCALL<void>(v14, 16);
    }
    else
    {
      v15 = *((uint32_t *)v14 + 1);
      _mm_mfence();
      if ( v15 == 1 )
        G4_VCALL<void>(v14, 12);
    }
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v17);
  result = *(uint32_t *)(a1 + 304);
  if ( result == 0 )
    return sub_1911530(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)a1 - 12) + a1 + 20) | 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_C732B0  (binary VA: 0xc732b0)
// Original: sub_C732B0
// ----------------------------------------------------------------------------
int sub_C732B0(int a1, uint32_t *a2, int *a3)
{
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  char v8; // bp
  int v9;
  char v11; // bp
  int v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
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
    v12 = opNew(0x24u);
    v13 = (uint32_t *)v12;
    if ( v12 != -16 )
    {
      *(uint32_t *)(v12 + 16) = *a3;
      g4_std::string::construct_copy(v12 + 20, a3 + 1);
      v13[6] = a3[2];
      v13[7] = a3[3];
      v13[8] = a3[4];
    }
    sub_1904970(v11, v13, v17, v19);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v13);
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
    v14 = opNew(0x24u);
    v15 = (uint32_t *)v14;
    if ( v14 != -16 )
    {
      *(uint32_t *)(v14 + 16) = *a3;
      g4_std::string::construct_copy(v14 + 20, a3 + 1);
      v15[6] = a3[2];
      v15[7] = a3[3];
      v15[8] = a3[4];
    }
    sub_1904970(v18, v15, v4, v19);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v15);
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
// Function: g4_std::map_string_pair_unsigned_int_092720::Destroy  (binary VA: 0xc7b610)
// Original: std::map<std::string,std::pair<unsigned int,bool>>::~map
// ----------------------------------------------------------------------------
void g4_std::map_string_pair_unsigned_int_092720::Destroy(std::map<std::string,std::pair<unsigned int, bool>> *self)
{
  std::_Rb_tree<std::string,std::pair<std::string const,std::pair<unsigned int,bool>>,std::_Select1st<std::pair<std::string const,std::pair<unsigned int,bool>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::pair<unsigned int,bool>>>>::_M_erase(
    (int)(uintptr_t)(self),
    *((uint32_t **)self + 2));
}

// ----------------------------------------------------------------------------
// Function: sub_CCD820  (binary VA: 0xccd820)
// Original: sub_CCD820
// ----------------------------------------------------------------------------
int sub_CCD820()
{
  dword_20DF734 = 0;
  *(uintptr_t *)(unk_20DF738) = (uintptr_t)(0);
  unk_20DF744 = 0;
  *(uintptr_t *)(unk_20DF73C) = (uintptr_t)(&dword_20DF734);
  *(uintptr_t *)(unk_20DF740) = (uintptr_t)(&dword_20DF734);
  __cxa_atexit(
    (void (*)(void *))g4_std::map_string_pair_unsigned_int_092720::Destroy,
    &glf::CrcChecker::mCrcMap,
    &unk_20D1280);
  glf::CrcChecker::mDynMapFileName[0] = (uintptr_t)(uintptr_t)(&dword_213B814);
  return __cxa_atexit((void (*)(void *))g4_std::string::Destroy, glf::CrcChecker::mDynMapFileName, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: sub_CD0D00  (binary VA: 0xcd0d00)
// Original: sub_CD0D00
// ----------------------------------------------------------------------------
bool sub_CD0D00(int a1, int a2)
{
  unsigned int v2;
  unsigned int v3;
  bool result;
  unsigned int v5;
  unsigned int v6;
  int v7;

  v2 = *(uint32_t *)a1 & 0xFFFFFF;
  v3 = *(uint32_t *)a2 & 0xFFFFFF;
  result = v2 < v3;
  if ( v2 == v3 )
  {
    v5 = *(uint32_t *)(a1 + 4);
    v6 = *(uint32_t *)(a2 + 4);
    result = v5 < v6;
    if ( v5 == v6 )
    {
      v7 = memcmp((const void *)(a1 + 8), (const void *)(a2 + 8), 8u);
      result = false;
      if ( v7 >= 0 )
        return *(uint8_t *)(a2 + 16) > *(uint8_t *)(a1 + 16);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CD0D90  (binary VA: 0xcd0d90)
// Original: sub_CD0D90
// ----------------------------------------------------------------------------
char sub_CD0D90(uint32_t *a1, uint32_t *a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;

  v2 = *a1 & 0xFFFFFF;
  v3 = *a2 & 0xFFFFFF;
  LOBYTE(v4) = v2 < v3;
  if ( v2 == v3 )
  {
    v5 = a1[1];
    v6 = a2[1];
    LOBYTE(v4) = v5 < v6;
    if ( v5 == v6 )
      return (unsigned int)memcmp(a1 + 2, a2 + 2, 8u) >> 31;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sub_CD0E10  (binary VA: 0xcd0e10)
// Original: sub_CD0E10
// ----------------------------------------------------------------------------
bool sub_CD0E10(uint32_t *a1, uint32_t *a2)
{
  unsigned int v2;
  unsigned int v3;
  bool result;
  unsigned int v5;
  unsigned int v6;

  v2 = *a1 & 0xFFFFFF;
  v3 = *a2 & 0xFFFFFF;
  result = v2 > v3;
  if ( v2 == v3 )
  {
    v5 = a1[1];
    v6 = a2[1];
    result = v5 > v6;
    if ( v5 == v6 )
      return memcmp(a1 + 2, a2 + 2, 8u) > 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CD0E90  (binary VA: 0xcd0e90)
// Original: sub_CD0E90
// ----------------------------------------------------------------------------
uint32_t * sub_CD0E90(uint32_t *a1, int a2, char a3)
{
  int v3;
  uint8_t v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int *v10;
  int *v11;

  v3 = a2;
  if ( a2 == 0 )
  {
    v5 = 0;
LABEL_10:
    *a1 = 0;
    a1[1] = v5;
    return a1;
  }
  v4 = a3 & 0xFE;
  v5 = 0;
  if ( (a3 & 0xFE) != *(uint8_t *)(v3 + 34) )
  {
    while ( 1 )
    {
      v6 = *(uint32_t *)(v3 + 8);
      ++v5;
      v7 = (int *)(v3 + 8);
      if ( v6 == 0 )
        break;
      while ( v4 < *(uint8_t *)(v6 + 32) || v4 > *(uint8_t *)(v6 + 33) )
      {
        if ( (int *)(v3 + 24) != ++v7 )
        {
          v6 = *v7;
          if ( *v7 != 0 )
            continue;
        }
        goto LABEL_9;
      }
      v3 = v6;
LABEL_12:
      if ( v4 == *(uint8_t *)(v3 + 34) )
        goto LABEL_13;
    }
LABEL_9:
    v8 = *(uint32_t *)(v3 + 28);
    if ( v8 != 0 )
    {
      v10 = *(int **)(v3 + 24);
      v11 = &v10[v8];
      if ( v10 != v11 )
      {
        while ( 1 )
        {
          v3 = *v10;
          if ( *v10 == 0 )
            break;
          if ( v4 >= *(uint8_t *)(v3 + 32) && v4 <= *(uint8_t *)(v3 + 33) )
            goto LABEL_12;
          if ( v11 == ++v10 )
            goto LABEL_10;
        }
      }
    }
    goto LABEL_10;
  }
LABEL_13:
  *a1 = v3;
  a1[1] = v5;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_CD0F60  (binary VA: 0xcd0f60)
// Original: sub_CD0F60
// ----------------------------------------------------------------------------
uint32_t * sub_CD0F60(uint32_t *a1)
{
  unsigned int v2;
  uint32_t *v3;
  unsigned int v4;
  unsigned int v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *result;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;

  v2 = a1[3];
  if ( v2 <= 3 )
  {
    v2 = 4;
  }
  else if ( (v2 & 3) != 0 )
  {
    v2 = a1[3] + 4 - (a1[3] & 3);
  }
  v12 = v2 * a1[4] + 8;
  v3 = (uint32_t *)opNewArray(v12, (const std::nothrow_t *)&std::nothrow);
  if ( v3 == nullptr )
  {
    v10 = a1[4];
    result = nullptr;
    if ( v10 <= 4 )
      return result;
    v2 = a1[3];
    v11 = v10 >> 1;
    a1[4] = v11;
    if ( v2 <= 3 )
    {
      v2 = 4;
    }
    else if ( (v2 & 3) != 0 )
    {
      v2 = v2 + 4 - (v2 & 3);
    }
    v12 = v2 * v11 + 8;
    v3 = (uint32_t *)opNewArray(v12, (const std::nothrow_t *)&std::nothrow);
    if ( v3 == nullptr )
      return nullptr;
  }
  v4 = a1[6];
  if ( v4 != 0 )
  {
    v14 = a1[4];
    v13 = a1[3];
    if ( v4 > v2 * v14 / v13 )
    {
      v5 = v4 * v13 / v2;
      if ( v5 > 2 * v14 )
        v5 = 2 * v14;
      a1[4] = v5;
    }
  }
  else
  {
    a1[4] *= 2;
  }
  v6 = (uint32_t *)((char *)v3 + v2 * ((v12 - 8 - v2) / v2));
  *v6 = *a1;
  if ( v3 != v6 )
  {
    v7 = (uint32_t *)((char *)v6 - v2);
    if ( v3 == (uint32_t *)((char *)v6 - v2) )
    {
      v7 = (uint32_t *)((char *)v3 + v2 * ((v12 - 8 - v2) / v2));
    }
    else
    {
      while ( 1 )
      {
        *v7 = (uint32_t)(uintptr_t)(v6);
        if ( v3 == (uint32_t *)((char *)v7 - v2) )
          break;
        v6 = v7;
        v7 = (uint32_t *)((char *)v7 - v2);
      }
    }
    *v3 = (uint32_t)(uintptr_t)(v7);
  }
  *a1 = (uint32_t)(uintptr_t)(v3);
  v8 = (uint32_t *)((char *)v3 + v12 - 4);
  *(v8 - 1) = a1[1];
  *v8 = a1[2];
  a1[2] = v12;
  result = (uint32_t *)*a1;
  a1[1] = (uint32_t)(uintptr_t)(v3);
  *a1 = *result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CD10D0  (binary VA: 0xcd10d0)
// Original: sub_CD10D0
// ----------------------------------------------------------------------------
uint32_t * sub_CD10D0(uint32_t *a1, uint32_t *a2, unsigned int a3)
{
  uint32_t *v3;
  unsigned int v4;
  unsigned int v5;
  int *v6;
  int v7;
  unsigned int v8;
  int v9;

  v3 = nullptr;
  v4 = a2[1];
  v5 = (a3 + (a3 >> 3)) % v4;
  if ( a2[2] != 0 )
  {
    v6 = *(int **)(a2[5] + 4 * v5);
    if ( v6 != nullptr )
    {
      v7 = *v6;
      if ( v7 != 0 )
        v3 = (uint32_t *)(v7 - 8);
    }
  }
  while ( 1 )
  {
    if ( v3 == nullptr )
    {
LABEL_9:
      *a1 = 0;
      return a1;
    }
    v8 = v3[3];
    if ( a3 + (a3 >> 3) == v8 )
      break;
    if ( v5 != v8 % v4 )
      goto LABEL_9;
LABEL_8:
    v9 = v3[2];
    if ( v9 == 0 )
      goto LABEL_9;
    v3 = (uint32_t *)(v9 - 8);
  }
  if ( *v3 != a3 )
    goto LABEL_8;
  *a1 = (uint32_t)(uintptr_t)(v3);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_CD1160  (binary VA: 0xcd1160)
// Original: sub_CD1160
// ----------------------------------------------------------------------------
char * sub_CD1160(int *a1, uint8_t *a2)
{
  uint8_t *src;
  char *result;
  char v5;
  unsigned int v6;
  int v7;
  uint8_t *v8;
  bool v9;
  uint8_t *v10;
  int v11;
  uint8_t *v12;
  uint8_t *v13;
  uint8_t *v14;
  uint8_t *v15;
  uint8_t *v16;
  char v17;
  uint8_t *v19;
  int v20;
  size_t v21;

  src = (uint8_t *)a1[1];
  if ( src == (uint8_t *)a1[2] )
  {
    v6 = (unsigned int)(uintptr_t)(&src[-*a1]);
    if ( v6 == -1 )
      sub_1900180("vector::_M_insert_aux");
    v21 = 1;
    if ( v6 != 0 )
    {
      v7 = 2 * v6;
      if ( v6 > 2 * v6 )
        v7 = -1;
      v21 = v7;
    }
    v8 = (uint8_t *)sub_4EBDC0(v21);
    v9 = &v8[v6] == nullptr;
    v10 = &v8[v6];
    v19 = v8;
    if ( !v9 )
      *v10 = *a2;
    v11 = *a1;
    if ( src != (uint8_t *)*a1 )
    {
      v12 = (uint8_t *)*a1;
      do
      {
        if ( v8 != nullptr )
          *v8 = *v12;
        ++v12;
        ++v8;
      }
      while ( v12 != src );
      v8 = &src[(uint32_t)(uintptr_t)(v19) - v11];
    }
    v13 = (uint8_t *)a1[1];
    v14 = v8 + 1;
    v20 = (int)(uintptr_t)(v14);
    if ( src != v13 )
    {
      v15 = v14;
      v16 = src;
      do
      {
        if ( v15 != nullptr )
          *v15 = *v16;
        ++v16;
        ++v15;
      }
      while ( v16 != v13 );
      v20 += v16 - src;
    }
    if ( *a1 != 0 )
      gll_operator_delete_arr(*a1);
    *a1 = (int)(uintptr_t)(v19);
    a1[1] = v20;
    a1[2] = (int)(uintptr_t)(&v19[v21]);
    return (char *)(&v19[v21]);
  }
  else
  {
    result = nullptr;
    if ( src != nullptr )
    {
      *src = *(src - 1);
      result = (char *)a1[1];
    }
    a1[1] = (int)(uintptr_t)(result + 1);
    v5 = *a2;
    if ( result - 1 != (char *)(src) )
    {
      v17 = v5;
      result = (char *)memmove(src + 1, src, (size_t)((char *)result - (char *)src - 1));
      v5 = v17;
    }
    *src = v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CD12D0  (binary VA: 0xcd12d0)
// Original: sub_CD12D0
// ----------------------------------------------------------------------------
int sub_CD12D0(uint32_t *a1, int a2)
{
  return G4_VCALL<int>(*a1, 12, a2, 4);
}

// ----------------------------------------------------------------------------
// Function: sub_CD12F0  (binary VA: 0xcd12f0)
// Original: sub_CD12F0
// ----------------------------------------------------------------------------
char * sub_CD12F0(uint8_t **a1)
{
  uint8_t *v1;
  char *v2;
  uint8_t v3;
  unsigned int v4;
  uint8_t v6;
  uint8_t v7;

  v1 = *a1;
  v2 = (char *)a1[1];
  v3 = **a1;
  v4 = v3;
  if ( v3 != 0xFF )
    return &v2[v4];
  v6 = v1[1];
  v7 = v1[2];
  if ( v6 == 0xFF && v7 == 0xFF )
  {
    v4 = __builtin_bswap32(*(uint32_t *)(v1 + 3));
    return &v2[v4];
  }
  return &v2[(v6 << 8) | v7];
}

// ----------------------------------------------------------------------------
// Function: sub_CD1350  (binary VA: 0xcd1350)
// Original: sub_CD1350
// ----------------------------------------------------------------------------
uint8_t ** sub_CD1350(uint8_t **result)
{
  uint8_t *v1;
  int v2;
  char *v3;
  uint8_t v4;
  int v5;
  int v7;
  uint8_t *v8;
  int16_t v9; // 0:di.1,1:si.1

  v1 = *result;
  v2 = 1;
  v3 = (char *)result[1];
  v4 = **result;
  v5 = v4;
  if ( v4 == 0xFF )
  {
    *result = v1 + 1;
    v9 = *(uint16_t *)(v1 + 1);
    v8 = v1 + 1;
    if ( v9 == -1 )
    {
      *result = v1 + 3;
      v2 = 4;
      v5 = __builtin_bswap32(*(uint32_t *)(v1 + 3));
      v1 += 3;
    }
    else
    {
      v7 = (uint8_t)v9;
      v2 = 2;
      v5 = (v7 << 8) | HIBYTE(v9);
      v1 = v8;
    }
  }
  *result = &v1[v2];
  result[1] = (uint8_t *)&v3[v5 + 1];
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CD1410  (binary VA: 0xcd1410)
// Original: sub_CD1410
// ----------------------------------------------------------------------------
int sub_CD1410(int *a1, int a2, int a3)
{
  int v3;

  v3 = *a1;
  if ( a2 != 0 )
    return G4_VCALL<int>(v3, 12, a2, 4 * a3);
  else
    return G4_VCALL<int>(v3, 24, 4 * a3, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_CD1460  (binary VA: 0xcd1460)
// Original: sub_CD1460
// ----------------------------------------------------------------------------
uint32_t * sub_CD1460(uint32_t *a1, uint32_t *a2, uint32_t *a3, int a4)
{
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  bool v9;
  uint32_t *v11;

  if ( a2 != a3 )
  {
    v4 = a2;
    v5 = 0;
    do
    {
      v4 = (uint32_t *)*v4;
      ++v5;
    }
    while ( a3 != v4 );
    do
    {
      v6 = a2;
      v7 = v5 >> 1;
      if ( v5 >> 1 != 0 )
      {
        v8 = v7 - 1;
        do
        {
          --v8;
          v6 = (uint32_t *)*v6;
        }
        while ( v8 != -1 );
      }
      v11 = a2;
      v9 = glitch::util::edgeComp((int)(uintptr_t)(v6 + 2), a4);
      a2 = v11;
      if ( v9 )
      {
        a2 = (uint32_t *)*v6;
        v5 = v5 - v7 - 1;
      }
      else
      {
        v5 >>= 1;
      }
    }
    while ( v5 > 0 );
  }
  *a1 = (uint32_t)(uintptr_t)(a2);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_CD1500  (binary VA: 0xcd1500)
// Original: sub_CD1500
// ----------------------------------------------------------------------------
char * sub_CD1500(char *result, char *a2)
{
  char *v2;
  int v3;
  char *v4;
  int v5;
  char *v6;
  char *v7;
  int v8;
  char *src;

  src = result;
  if ( result != a2 )
  {
    v2 = result + 4;
    if ( result + 4 != a2 )
    {
      do
      {
        v3 = *(uint32_t *)v2;
        v4 = v2;
        result = (char *)*(uint16_t *)(*(uint32_t *)v2 + 4);
        if ( (int16_t)(uintptr_t)result < *(int16_t *)(*(uint32_t *)src + 4) )
        {
          v7 = v2 + 4;
          v8 = (v2 - src) >> 2;
          if ( v8 != 0 )
            memmove(&v7[-4 * v8], src, 4 * v8);
          result = src;
          *(uint32_t *)src = v3;
        }
        else
        {
          v5 = *((uint32_t *)v2 - 1);
          v6 = v2;
          if ( (int16_t)(uintptr_t)(result) < *(int16_t *)(v5 + 4) )
          {
            result = v2 - 4;
            while ( 1 )
            {
              *(uint32_t *)v4 = v5;
              v5 = *((uint32_t *)result - 1);
              v6 = result;
              result -= 4;
              if ( *(uint16_t *)(v3 + 4) >= *(uint16_t *)(v5 + 4) )
                break;
              v4 = v6;
            }
          }
          *(uint32_t *)v6 = v3;
          v7 = v2 + 4;
        }
        v2 = v7;
      }
      while ( a2 != v7 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CD15B0  (binary VA: 0xcd15b0)
// Original: sub_CD15B0
// ----------------------------------------------------------------------------
int sub_CD15B0(int *a1, int a2, int a3)
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
    if ( (void *)(*a1 - 12) != &unk_20D3E6C
      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      gll_operator_delete_arr(v11 - 12);
    }
    *a1 = v3;
  }
  result = v3 - 12;
  if ( (void *)(v3 - 12) != &unk_20D3E6C )
  {
    *(uint32_t *)(v3 - 4) = 0;
    *(uint32_t *)(v3 - 12) = v7;
    *(uint8_t *)(v3 + v7) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CD1780  (binary VA: 0xcd1780)
// Original: sub_CD1780
// ----------------------------------------------------------------------------
void sub_CD1780(int a1, uint32_t *a2)
{
  uint32_t *src;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  char *dest;
  char *v9;
  int v10;
  int v11;
  char *v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int v18;
  int v19;
  int v20;
  char *v21;
  size_t v22;

  src = *(uint32_t **)(a1 + 4);
  if ( src == *(uint32_t **)(a1 + 8) )
  {
    v7 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    v22 = 4;
    if ( v7 != 0 )
    {
      v22 = 0xFFFFFFFC;
      if ( v7 <= 2 * v7 )
      {
        v16 = 8 * v7;
        if ( 2 * v7 > 0x3FFFFFFF )
          v16 = -4;
        v22 = v16;
      }
    }
    v20 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    dest = (char *)opNew(v22);
    v9 = &dest[4 * v20];
    if ( v9 != nullptr )
      *(uint32_t *)v9 = *a2;
    v10 = 0;
    v11 = ((int)(uintptr_t)(src) - *(uint32_t *)a1) >> 2;
    if ( v11 != 0 )
    {
      v18 = 4 * v11;
      memmove(dest, *(const void **)a1, 4 * v11);
      v10 = v18;
    }
    v12 = &dest[v10 + 4];
    v13 = 0;
    v14 = (*(uint32_t *)(a1 + 4) - (int)(uintptr_t)(src)) >> 2;
    if ( v14 != 0 )
    {
      v19 = 4 * v14;
      v21 = v12;
      memmove(v12, src, 4 * v14);
      v12 = v21;
      v13 = v19;
    }
    v15 = &v12[v13];
    if ( *(uint32_t *)a1 != 0 )
      opDelete(*(void **)a1);
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(dest);
    *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v15);
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&dest[v22]);
  }
  else
  {
    v4 = 0;
    if ( src != nullptr )
    {
      *src = *(src - 1);
      v4 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v4 + 4;
    v5 = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a2;
    if ( v5 != 0 )
      memmove((void *)(v4 - 4 * v5), src, 4 * v5);
    *src = v6;
  }
}

// ----------------------------------------------------------------------------
// Function: sub_CD18F0  (binary VA: 0xcd18f0)
// Original: sub_CD18F0
// ----------------------------------------------------------------------------
uint32_t * sub_CD18F0(int a1, uint32_t *a2)
{
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;

  if ( a2 == nullptr )
    return nullptr;
  v3 = a2[4] >> 30;
  _mm_mfence();
  if ( v3 == 2 )
  {
    v5 = a2[2];
    _mm_mfence();
    __sync_sub_and_fetch((volatile int32_t *)(v5 + 16), 1u);
    v6 = a2[3];
    _mm_mfence();
    __sync_sub_and_fetch((volatile int32_t *)(v6 + 16), 1u);
    v7 = *(uint32_t *)(a2[2] + 16);
    _mm_mfence();
    if ( (v7 & 0x3FFFFFFF) == 0 )
      sub_CD18F0(a1, (uint32_t *)a2[2]);
    v8 = *(uint32_t *)(a2[3] + 16);
    _mm_mfence();
    if ( (v8 & 0x3FFFFFFF) == 0 )
      sub_CD18F0(a1, (uint32_t *)a2[3]);
  }
  if ( byte_20D53CC == 0 )
  {
    byte_20D53CC = 1;
    if ( &dword_20D53E0 != nullptr )
    {
      glf::SpinLock::Construct((glf::SpinLock::Self *)&dword_20D53E0);
      dword_20D53E4 = 0;
      dword_20D53E8 = 0;
      dword_20D53EC = 0;
      dword_20D53F0 = 20;
      dword_20D53F4 = 32;
      dword_20D53F8 = 32;
      dword_20D53FC = 0;
    }
  }
  glf::SpinLock::Lock(&dword_20D53E0);
  *a2 = dword_20D53E4;
  dword_20D53E4 = (int)(uintptr_t)(a2);
  return glf::SpinLock::Unlock((glf::SpinLock::Self *)&dword_20D53E0);
}

// ----------------------------------------------------------------------------
// Function: sub_CD19F0  (binary VA: 0xcd19f0)
// Original: sub_CD19F0
// ----------------------------------------------------------------------------
int sub_CD19F0()
{
  int v0;
  int i;
  int *v2;

  if ( byte_20D53CC == 0 )
  {
    byte_20D53CC = 1;
    if ( &dword_20D53E0 != nullptr )
    {
      glf::SpinLock::Construct((glf::SpinLock::Self *)&dword_20D53E0);
      dword_20D53E4 = 0;
      dword_20D53E8 = 0;
      dword_20D53EC = 0;
      dword_20D53F0 = 20;
      dword_20D53F4 = 32;
      dword_20D53F8 = 32;
      dword_20D53FC = 0;
    }
  }
  glf::SpinLock::Lock(&dword_20D53E0);
  v0 = dword_20D53E8;
  for ( i = dword_20D53EC; v0 != 0; v0 = *(v2 - 1) )
  {
    v2 = (int *)(v0 + i - 4);
    i = *v2;
  }
  glf::SpinLock::Unlock((glf::SpinLock::Self *)&dword_20D53E0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sub_CD1A90  (binary VA: 0xcd1a90)
// Original: sub_CD1A90
// ----------------------------------------------------------------------------
uint32_t * sub_CD1A90(int a1, uint32_t *a2)
{
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;

  if ( a2 == nullptr )
    return nullptr;
  v3 = a2[4] >> 30;
  _mm_mfence();
  if ( v3 == 2 )
  {
    v5 = a2[2];
    _mm_mfence();
    __sync_sub_and_fetch((volatile int32_t *)(v5 + 16), 1u);
    v6 = a2[3];
    _mm_mfence();
    __sync_sub_and_fetch((volatile int32_t *)(v6 + 16), 1u);
    v7 = *(uint32_t *)(a2[2] + 16);
    _mm_mfence();
    if ( (v7 & 0x3FFFFFFF) == 0 )
      sub_CD1A90(a1, (uint32_t *)a2[2]);
    v8 = *(uint32_t *)(a2[3] + 16);
    _mm_mfence();
    if ( (v8 & 0x3FFFFFFF) == 0 )
      sub_CD1A90(a1, (uint32_t *)a2[3]);
  }
  if ( byte_20D53CC == 0 )
  {
    byte_20D53CC = 1;
    if ( &dword_20D53E0 != nullptr )
    {
      glf::SpinLock::Construct((glf::SpinLock::Self *)&dword_20D53E0);
      dword_20D53E4 = 0;
      dword_20D53E8 = 0;
      dword_20D53EC = 0;
      dword_20D53F0 = 20;
      dword_20D53F4 = 32;
      dword_20D53F8 = 32;
      dword_20D53FC = 0;
    }
  }
  glf::SpinLock::Lock(&dword_20D53E0);
  *a2 = dword_20D53E4;
  dword_20D53E4 = (int)(uintptr_t)(a2);
  return glf::SpinLock::Unlock((glf::SpinLock::Self *)&dword_20D53E0);
}

// ----------------------------------------------------------------------------
// Function: sub_CD1BF0  (binary VA: 0xcd1bf0)
// Original: sub_CD1BF0
// ----------------------------------------------------------------------------
uint32_t * sub_CD1BF0(int a1, uint32_t *a2)
{
  int v3;
  int v5;
  int v6;
  int v7;
  int v8;

  if ( a2 == nullptr )
    return nullptr;
  v3 = a2[4] >> 30;
  _mm_mfence();
  if ( v3 == 2 )
  {
    v5 = a2[2];
    _mm_mfence();
    __sync_sub_and_fetch((volatile int32_t *)(v5 + 16), 1u);
    v6 = a2[3];
    _mm_mfence();
    __sync_sub_and_fetch((volatile int32_t *)(v6 + 16), 1u);
    v7 = *(uint32_t *)(a2[2] + 16);
    _mm_mfence();
    if ( (v7 & 0x3FFFFFFF) == 0 )
      sub_CD1BF0(a1, (uint32_t *)a2[2]);
    v8 = *(uint32_t *)(a2[3] + 16);
    _mm_mfence();
    if ( (v8 & 0x3FFFFFFF) == 0 )
      sub_CD1BF0(a1, (uint32_t *)a2[3]);
  }
  if ( byte_20D53CC == 0 )
  {
    byte_20D53CC = 1;
    if ( &dword_20D53E0 != nullptr )
    {
      glf::SpinLock::Construct((glf::SpinLock::Self *)&dword_20D53E0);
      dword_20D53E4 = 0;
      dword_20D53E8 = 0;
      dword_20D53EC = 0;
      dword_20D53F0 = 20;
      dword_20D53F4 = 32;
      dword_20D53F8 = 32;
      dword_20D53FC = 0;
    }
  }
  glf::SpinLock::Lock(&dword_20D53E0);
  *a2 = dword_20D53E4;
  dword_20D53E4 = (int)(uintptr_t)(a2);
  return glf::SpinLock::Unlock((glf::SpinLock::Self *)&dword_20D53E0);
}

// ----------------------------------------------------------------------------
// Function: sub_CD1CF0  (binary VA: 0xcd1cf0)
// Original: sub_CD1CF0
// ----------------------------------------------------------------------------
unsigned int sub_CD1CF0(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int result;
  unsigned int v6;
  unsigned int v7;
  int v8;
  int v9;
  char v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  char v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  char v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  char v29;
  unsigned int v30;
  int v31;
  int v32;
  int *v33;
  unsigned int v34;
  unsigned int v35;
  int *v36;
  unsigned int v37;
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
  int v48;
  int v49;
  bool v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int *v56;
  int v57;
  int v58;
  int *v59;
  int v60;
  int v61;
  int v62;
  int v63;
  typedef uint32_t *_g4_t_v64;
  typedef unsigned int **_g4_t_v65;
  typedef unsigned int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint8_t *_g4_t_v68;
  typedef uint8_t *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint8_t *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef unsigned int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef unsigned int _g4_t_v82;
  typedef unsigned int _g4_t_v83;
  typedef uint8_t *_g4_t_v84;
  typedef uint8_t *_g4_t_v85;
  typedef char _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef unsigned int *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef unsigned int *_g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef uint32_t *_g4_t_v95;
  typedef bool _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int *_g4_t_v98;
  typedef unsigned int *_g4_t_v99;
  typedef int _g4_t_v100;
  typedef unsigned int *_g4_t_v101;
  typedef unsigned int *_g4_t_v102;
  typedef unsigned int *_g4_t_v103;
  typedef int _g4_t_v104;
  typedef uint32_t *_g4_t_v105;
  typedef int *_g4_t_v106;
  typedef int *_g4_t_v107;
  typedef int *_g4_t_v108;
  typedef unsigned int *_g4_t_v109;
  typedef int _g4_t_v110;
  typedef unsigned int *_g4_t_v111;
  typedef uint32_t *_g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef uint32_t *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef int *_g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef unsigned int _g4_t_v121;
  typedef unsigned int _g4_t_v122;
  typedef unsigned int _g4_t_v123;
  typedef uint32_t *_g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef unsigned int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef unsigned int _g4_t_v130;
  typedef uint32_t *_g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef unsigned int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef uint32_t *_g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef char _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef __m128i _g4_t_s2;
  typedef __m128i _g4_t_s1;
  typedef int _g4_t_v146;
  typedef int _g4_t_v147;
  typedef int _g4_t_v148;
  typedef int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef int _g4_t_v151;
  typedef int _g4_t_v152;
  typedef int _g4_t_v153;
  typedef int _g4_t_v154;
  typedef int _g4_t_v155;
  typedef int _g4_t_v156;
  typedef int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef int _g4_t_v162;
  typedef int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef int _g4_t_v168;
  typedef int _g4_t_v169;
  typedef int _g4_t_v170;
  typedef int _g4_t_v171;
  typedef int _g4_t_v172;
  typedef int _g4_t_v173;
  typedef int _g4_t_v174;
  typedef int _g4_t_v175;
  typedef int _g4_t_v176;
  typedef int _g4_t_v177;
  typedef uint8_t _g4_t_v178[64];
  typedef int _g4_t_v179;
  typedef uint8_t _g4_t_v180[524];
  enum : size_t {
    _g4_s0 = 1536u,
    _g4_s1 = (4u + sizeof(_g4_t_v64)) > _g4_s0 ? (4u + sizeof(_g4_t_v64)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v65)) > _g4_s1 ? (8u + sizeof(_g4_t_v65)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v66)) > _g4_s2 ? (24u + sizeof(_g4_t_v66)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v67)) > _g4_s3 ? (28u + sizeof(_g4_t_v67)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v68)) > _g4_s4 ? (32u + sizeof(_g4_t_v68)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v69)) > _g4_s5 ? (36u + sizeof(_g4_t_v69)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v70)) > _g4_s6 ? (44u + sizeof(_g4_t_v70)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v71)) > _g4_s7 ? (48u + sizeof(_g4_t_v71)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v72)) > _g4_s8 ? (52u + sizeof(_g4_t_v72)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v73)) > _g4_s9 ? (56u + sizeof(_g4_t_v73)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v74)) > _g4_s10 ? (64u + sizeof(_g4_t_v74)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v75)) > _g4_s11 ? (68u + sizeof(_g4_t_v75)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v76)) > _g4_s12 ? (72u + sizeof(_g4_t_v76)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v77)) > _g4_s13 ? (76u + sizeof(_g4_t_v77)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v78)) > _g4_s14 ? (80u + sizeof(_g4_t_v78)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v79)) > _g4_s15 ? (84u + sizeof(_g4_t_v79)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v80)) > _g4_s16 ? (96u + sizeof(_g4_t_v80)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v82)) > _g4_s17 ? (104u + sizeof(_g4_t_v82)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v83)) > _g4_s18 ? (108u + sizeof(_g4_t_v83)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v84)) > _g4_s19 ? (112u + sizeof(_g4_t_v84)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v85)) > _g4_s20 ? (116u + sizeof(_g4_t_v85)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v86)) > _g4_s21 ? (120u + sizeof(_g4_t_v86)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v87)) > _g4_s22 ? (124u + sizeof(_g4_t_v87)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v88)) > _g4_s23 ? (128u + sizeof(_g4_t_v88)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v89)) > _g4_s24 ? (132u + sizeof(_g4_t_v89)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v90)) > _g4_s25 ? (136u + sizeof(_g4_t_v90)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v91)) > _g4_s26 ? (140u + sizeof(_g4_t_v91)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v92)) > _g4_s27 ? (144u + sizeof(_g4_t_v92)) : _g4_s27,
    _g4_s29 = (148u + sizeof(_g4_t_v93)) > _g4_s28 ? (148u + sizeof(_g4_t_v93)) : _g4_s28,
    _g4_s30 = (152u + sizeof(_g4_t_v94)) > _g4_s29 ? (152u + sizeof(_g4_t_v94)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v95)) > _g4_s30 ? (156u + sizeof(_g4_t_v95)) : _g4_s30,
    _g4_s32 = (163u + sizeof(_g4_t_v96)) > _g4_s31 ? (163u + sizeof(_g4_t_v96)) : _g4_s31,
    _g4_s33 = (164u + sizeof(_g4_t_v97)) > _g4_s32 ? (164u + sizeof(_g4_t_v97)) : _g4_s32,
    _g4_s34 = (168u + sizeof(_g4_t_v98)) > _g4_s33 ? (168u + sizeof(_g4_t_v98)) : _g4_s33,
    _g4_s35 = (172u + sizeof(_g4_t_v99)) > _g4_s34 ? (172u + sizeof(_g4_t_v99)) : _g4_s34,
    _g4_s36 = (176u + sizeof(_g4_t_v100)) > _g4_s35 ? (176u + sizeof(_g4_t_v100)) : _g4_s35,
    _g4_s37 = (180u + sizeof(_g4_t_v101)) > _g4_s36 ? (180u + sizeof(_g4_t_v101)) : _g4_s36,
    _g4_s38 = (184u + sizeof(_g4_t_v102)) > _g4_s37 ? (184u + sizeof(_g4_t_v102)) : _g4_s37,
    _g4_s39 = (188u + sizeof(_g4_t_v103)) > _g4_s38 ? (188u + sizeof(_g4_t_v103)) : _g4_s38,
    _g4_s40 = (192u + sizeof(_g4_t_v104)) > _g4_s39 ? (192u + sizeof(_g4_t_v104)) : _g4_s39,
    _g4_s41 = (196u + sizeof(_g4_t_v105)) > _g4_s40 ? (196u + sizeof(_g4_t_v105)) : _g4_s40,
    _g4_s42 = (200u + sizeof(_g4_t_v106)) > _g4_s41 ? (200u + sizeof(_g4_t_v106)) : _g4_s41,
    _g4_s43 = (204u + sizeof(_g4_t_v107)) > _g4_s42 ? (204u + sizeof(_g4_t_v107)) : _g4_s42,
    _g4_s44 = (208u + sizeof(_g4_t_v108)) > _g4_s43 ? (208u + sizeof(_g4_t_v108)) : _g4_s43,
    _g4_s45 = (212u + sizeof(_g4_t_v109)) > _g4_s44 ? (212u + sizeof(_g4_t_v109)) : _g4_s44,
    _g4_s46 = (212u + sizeof(_g4_t_v110)) > _g4_s45 ? (212u + sizeof(_g4_t_v110)) : _g4_s45,
    _g4_s47 = (216u + sizeof(_g4_t_v111)) > _g4_s46 ? (216u + sizeof(_g4_t_v111)) : _g4_s46,
    _g4_s48 = (220u + sizeof(_g4_t_v112)) > _g4_s47 ? (220u + sizeof(_g4_t_v112)) : _g4_s47,
    _g4_s49 = (224u + sizeof(_g4_t_v113)) > _g4_s48 ? (224u + sizeof(_g4_t_v113)) : _g4_s48,
    _g4_s50 = (228u + sizeof(_g4_t_v114)) > _g4_s49 ? (228u + sizeof(_g4_t_v114)) : _g4_s49,
    _g4_s51 = (232u + sizeof(_g4_t_v115)) > _g4_s50 ? (232u + sizeof(_g4_t_v115)) : _g4_s50,
    _g4_s52 = (232u + sizeof(_g4_t_v116)) > _g4_s51 ? (232u + sizeof(_g4_t_v116)) : _g4_s51,
    _g4_s53 = (236u + sizeof(_g4_t_v117)) > _g4_s52 ? (236u + sizeof(_g4_t_v117)) : _g4_s52,
    _g4_s54 = (236u + sizeof(_g4_t_v118)) > _g4_s53 ? (236u + sizeof(_g4_t_v118)) : _g4_s53,
    _g4_s55 = (240u + sizeof(_g4_t_v119)) > _g4_s54 ? (240u + sizeof(_g4_t_v119)) : _g4_s54,
    _g4_s56 = (240u + sizeof(_g4_t_v120)) > _g4_s55 ? (240u + sizeof(_g4_t_v120)) : _g4_s55,
    _g4_s57 = (244u + sizeof(_g4_t_v121)) > _g4_s56 ? (244u + sizeof(_g4_t_v121)) : _g4_s56,
    _g4_s58 = (244u + sizeof(_g4_t_v122)) > _g4_s57 ? (244u + sizeof(_g4_t_v122)) : _g4_s57,
    _g4_s59 = (244u + sizeof(_g4_t_v123)) > _g4_s58 ? (244u + sizeof(_g4_t_v123)) : _g4_s58,
    _g4_s60 = (244u + sizeof(_g4_t_v124)) > _g4_s59 ? (244u + sizeof(_g4_t_v124)) : _g4_s59,
    _g4_s61 = (244u + sizeof(_g4_t_v125)) > _g4_s60 ? (244u + sizeof(_g4_t_v125)) : _g4_s60,
    _g4_s62 = (248u + sizeof(_g4_t_v126)) > _g4_s61 ? (248u + sizeof(_g4_t_v126)) : _g4_s61,
    _g4_s63 = (248u + sizeof(_g4_t_v127)) > _g4_s62 ? (248u + sizeof(_g4_t_v127)) : _g4_s62,
    _g4_s64 = (252u + sizeof(_g4_t_v128)) > _g4_s63 ? (252u + sizeof(_g4_t_v128)) : _g4_s63,
    _g4_s65 = (256u + sizeof(_g4_t_v129)) > _g4_s64 ? (256u + sizeof(_g4_t_v129)) : _g4_s64,
    _g4_s66 = (256u + sizeof(_g4_t_v130)) > _g4_s65 ? (256u + sizeof(_g4_t_v130)) : _g4_s65,
    _g4_s67 = (256u + sizeof(_g4_t_v131)) > _g4_s66 ? (256u + sizeof(_g4_t_v131)) : _g4_s66,
    _g4_s68 = (256u + sizeof(_g4_t_v132)) > _g4_s67 ? (256u + sizeof(_g4_t_v132)) : _g4_s67,
    _g4_s69 = (256u + sizeof(_g4_t_v133)) > _g4_s68 ? (256u + sizeof(_g4_t_v133)) : _g4_s68,
    _g4_s70 = (260u + sizeof(_g4_t_v134)) > _g4_s69 ? (260u + sizeof(_g4_t_v134)) : _g4_s69,
    _g4_s71 = (260u + sizeof(_g4_t_v135)) > _g4_s70 ? (260u + sizeof(_g4_t_v135)) : _g4_s70,
    _g4_s72 = (260u + sizeof(_g4_t_v136)) > _g4_s71 ? (260u + sizeof(_g4_t_v136)) : _g4_s71,
    _g4_s73 = (264u + sizeof(_g4_t_v137)) > _g4_s72 ? (264u + sizeof(_g4_t_v137)) : _g4_s72,
    _g4_s74 = (264u + sizeof(_g4_t_v138)) > _g4_s73 ? (264u + sizeof(_g4_t_v138)) : _g4_s73,
    _g4_s75 = (264u + sizeof(_g4_t_v139)) > _g4_s74 ? (264u + sizeof(_g4_t_v139)) : _g4_s74,
    _g4_s76 = (264u + sizeof(_g4_t_v140)) > _g4_s75 ? (264u + sizeof(_g4_t_v140)) : _g4_s75,
    _g4_s77 = (264u + sizeof(_g4_t_v141)) > _g4_s76 ? (264u + sizeof(_g4_t_v141)) : _g4_s76,
    _g4_s78 = (268u + sizeof(_g4_t_v142)) > _g4_s77 ? (268u + sizeof(_g4_t_v142)) : _g4_s77,
    _g4_s79 = (268u + sizeof(_g4_t_v143)) > _g4_s78 ? (268u + sizeof(_g4_t_v143)) : _g4_s78,
    _g4_s80 = (272u + sizeof(_g4_t_s2)) > _g4_s79 ? (272u + sizeof(_g4_t_s2)) : _g4_s79,
    _g4_s81 = (288u + sizeof(_g4_t_s1)) > _g4_s80 ? (288u + sizeof(_g4_t_s1)) : _g4_s80,
    _g4_s82 = (304u + sizeof(_g4_t_v146)) > _g4_s81 ? (304u + sizeof(_g4_t_v146)) : _g4_s81,
    _g4_s83 = (308u + sizeof(_g4_t_v147)) > _g4_s82 ? (308u + sizeof(_g4_t_v147)) : _g4_s82,
    _g4_s84 = (312u + sizeof(_g4_t_v148)) > _g4_s83 ? (312u + sizeof(_g4_t_v148)) : _g4_s83,
    _g4_s85 = (316u + sizeof(_g4_t_v149)) > _g4_s84 ? (316u + sizeof(_g4_t_v149)) : _g4_s84,
    _g4_s86 = (320u + sizeof(_g4_t_v150)) > _g4_s85 ? (320u + sizeof(_g4_t_v150)) : _g4_s85,
    _g4_s87 = (324u + sizeof(_g4_t_v151)) > _g4_s86 ? (324u + sizeof(_g4_t_v151)) : _g4_s86,
    _g4_s88 = (328u + sizeof(_g4_t_v152)) > _g4_s87 ? (328u + sizeof(_g4_t_v152)) : _g4_s87,
    _g4_s89 = (332u + sizeof(_g4_t_v153)) > _g4_s88 ? (332u + sizeof(_g4_t_v153)) : _g4_s88,
    _g4_s90 = (336u + sizeof(_g4_t_v154)) > _g4_s89 ? (336u + sizeof(_g4_t_v154)) : _g4_s89,
    _g4_s91 = (340u + sizeof(_g4_t_v155)) > _g4_s90 ? (340u + sizeof(_g4_t_v155)) : _g4_s90,
    _g4_s92 = (344u + sizeof(_g4_t_v156)) > _g4_s91 ? (344u + sizeof(_g4_t_v156)) : _g4_s91,
    _g4_s93 = (348u + sizeof(_g4_t_v157)) > _g4_s92 ? (348u + sizeof(_g4_t_v157)) : _g4_s92,
    _g4_s94 = (352u + sizeof(_g4_t_v158)) > _g4_s93 ? (352u + sizeof(_g4_t_v158)) : _g4_s93,
    _g4_s95 = (356u + sizeof(_g4_t_v159)) > _g4_s94 ? (356u + sizeof(_g4_t_v159)) : _g4_s94,
    _g4_s96 = (360u + sizeof(_g4_t_v160)) > _g4_s95 ? (360u + sizeof(_g4_t_v160)) : _g4_s95,
    _g4_s97 = (364u + sizeof(_g4_t_v161)) > _g4_s96 ? (364u + sizeof(_g4_t_v161)) : _g4_s96,
    _g4_s98 = (368u + sizeof(_g4_t_v162)) > _g4_s97 ? (368u + sizeof(_g4_t_v162)) : _g4_s97,
    _g4_s99 = (372u + sizeof(_g4_t_v163)) > _g4_s98 ? (372u + sizeof(_g4_t_v163)) : _g4_s98,
    _g4_s100 = (376u + sizeof(_g4_t_v164)) > _g4_s99 ? (376u + sizeof(_g4_t_v164)) : _g4_s99,
    _g4_s101 = (380u + sizeof(_g4_t_v165)) > _g4_s100 ? (380u + sizeof(_g4_t_v165)) : _g4_s100,
    _g4_s102 = (384u + sizeof(_g4_t_v166)) > _g4_s101 ? (384u + sizeof(_g4_t_v166)) : _g4_s101,
    _g4_s103 = (388u + sizeof(_g4_t_v167)) > _g4_s102 ? (388u + sizeof(_g4_t_v167)) : _g4_s102,
    _g4_s104 = (392u + sizeof(_g4_t_v168)) > _g4_s103 ? (392u + sizeof(_g4_t_v168)) : _g4_s103,
    _g4_s105 = (396u + sizeof(_g4_t_v169)) > _g4_s104 ? (396u + sizeof(_g4_t_v169)) : _g4_s104,
    _g4_s106 = (400u + sizeof(_g4_t_v170)) > _g4_s105 ? (400u + sizeof(_g4_t_v170)) : _g4_s105,
    _g4_s107 = (404u + sizeof(_g4_t_v171)) > _g4_s106 ? (404u + sizeof(_g4_t_v171)) : _g4_s106,
    _g4_s108 = (408u + sizeof(_g4_t_v172)) > _g4_s107 ? (408u + sizeof(_g4_t_v172)) : _g4_s107,
    _g4_s109 = (412u + sizeof(_g4_t_v173)) > _g4_s108 ? (412u + sizeof(_g4_t_v173)) : _g4_s108,
    _g4_s110 = (416u + sizeof(_g4_t_v174)) > _g4_s109 ? (416u + sizeof(_g4_t_v174)) : _g4_s109,
    _g4_s111 = (420u + sizeof(_g4_t_v175)) > _g4_s110 ? (420u + sizeof(_g4_t_v175)) : _g4_s110,
    _g4_s112 = (424u + sizeof(_g4_t_v176)) > _g4_s111 ? (424u + sizeof(_g4_t_v176)) : _g4_s111,
    _g4_s113 = (428u + sizeof(_g4_t_v177)) > _g4_s112 ? (428u + sizeof(_g4_t_v177)) : _g4_s112,
    _g4_s114 = (432u + sizeof(_g4_t_v178)) > _g4_s113 ? (432u + sizeof(_g4_t_v178)) : _g4_s113,
    _g4_s115 = (496u + sizeof(_g4_t_v179)) > _g4_s114 ? (496u + sizeof(_g4_t_v179)) : _g4_s114,
    _g4_s116 = (944u + sizeof(_g4_t_v180)) > _g4_s115 ? (944u + sizeof(_g4_t_v180)) : _g4_s115
  };
  alignas(16) uint8_t _g4_sf[_g4_s116];
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 4u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 8u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 24u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 28u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 56u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 64u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 68u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 72u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 76u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 80u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 84u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 96u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 104u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 108u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 112u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 116u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 120u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 124u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 128u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 132u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 136u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 140u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 144u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 148u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 152u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 156u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 163u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 164u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 168u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 172u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 176u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 180u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 184u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 188u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 192u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 196u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 200u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 204u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 208u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 212u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 212u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 216u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 220u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 224u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 228u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 232u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 232u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 236u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 236u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 240u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 240u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 244u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 244u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 244u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 244u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 244u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 248u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 248u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 252u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 256u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 256u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 256u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 256u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 256u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 260u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 260u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 260u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 264u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 264u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 264u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 264u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 264u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 268u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 268u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 272u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 288u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 304u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 308u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 312u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 316u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 320u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 324u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 328u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 332u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 336u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 340u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 344u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 348u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 352u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 356u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 360u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 364u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 368u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 372u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 376u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 380u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 384u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 388u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 392u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 396u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 400u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 404u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 408u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 412u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 416u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 420u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 424u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 428u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 432u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 496u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 944u);

  v89 = a2 == 0 ? 4 : 8;
  result = a3 / v89;
  s1 = g4_to_m128i(0);
  if ( a3 / v89 < 2 )
    result = 2;
  v83 = result;
  if ( a4 <= 7 )
  {
    if ( a4 <= 0 )
      return result;
    v82 = 2;
  }
  else
  {
    v82 = a4 >> 2;
  }
  v6 = result;
  if ( v82 <= result )
    v6 = v82;
  v128 = v6;
  v96 = a2 != 0;
  v78 = a3 - 1;
  v67 = a4 - 1;
  v80 = v89 / 2;
  v75 = 0;
  v66 = v82 - 1;
  do
  {
    if ( a3 > 0 )
    {
      v114 = (v67 & (v75 - 2)) >> 2;
      v76 = v75 & 3 | (2 * (~(uint8_t)v75 & 2));
      v113 = v66 & (v114 + 1);
      v79 = v76 << 6;
      v69 = &v178[64 * v76 - 64];
      v100 = v76 - 2;
      v68 = &v178[64 * v76 + 64];
      v74 = 4 * v89;
      v87 = v89 / -2;
      v97 = -1;
      v73 = &v178[64 * v76];
      do
      {
        v7 = 1;
        v86 = ~(uint8_t)v97;
        v129 = (v78 & v87) / v89;
        v77 = v83 - 1;
        v137 = (v83 - 1) & (v129 + 1);
        v8 = v129;
        if ( v82 >= v83 )
          v8 = (v67 & (v75 - 2)) >> 2;
        v9 = 1;
        v121 = v8;
        v10 = 0;
        v11 = 0;
        do
        {
          v12 = v11 | v9;
          if ( (v7 & v114) == 0 )
            v12 = v11;
          v11 = v12 | (2 * v9);
          if ( (v7 & v129) == 0 )
            v11 = v12;
          v7 *= 2;
          v9 *= 4;
          ++v10;
        }
        while ( v7 < v128 );
        v13 = v77 & (v129 + 1);
        v14 = v11 | (v121 >> v10 << (2 * v10));
        if ( v82 >= v83 )
          v13 = (v67 & (v75 - 2)) >> 2;
        v122 = v13;
        v15 = 1;
        v16 = 0;
g4_m128_lane<int32_t>(s2, 0) = a1 + 8 * v14;
        v17 = 1;
        v18 = 0;
        do
        {
          v19 = v15 | v18;
          if ( (v17 & v114) == 0 )
            v19 = v18;
          v18 = v19 | (2 * v15);
          if ( (v17 & v137) == 0 )
            v18 = v19;
          v17 *= 2;
          v15 *= 4;
          ++v16;
        }
        while ( v128 > v17 );
        v20 = 1;
g4_m128_lane<int32_t>(s2, 1) = a1 + 8 * (v18 | (v122 >> v16 << (2 * v16)));
        v21 = (v78 & v87) / v89;
        if ( v82 >= v83 )
          v21 = v66 & (v114 + 1);
        v123 = v21;
        v22 = 0;
        v23 = 0;
        v24 = 1;
        do
        {
          v25 = v23 | v20;
          if ( (v24 & v113) == 0 )
            v25 = v23;
          v23 = v25 | (2 * v20);
          if ( (v24 & v129) == 0 )
            v23 = v25;
          v24 *= 2;
          v20 *= 4;
          ++v22;
        }
        while ( v128 > v24 );
        v26 = v66 & (v114 + 1);
        v27 = v23 | (v123 >> v22 << (2 * v22));
        if ( v82 < v83 )
          v26 = v77 & (v129 + 1);
        v130 = v26;
        v28 = 1;
        v29 = 0;
g4_m128_lane<int32_t>(s2, 2) = a1 + 8 * v27;
        v30 = 1;
        v31 = 0;
        do
        {
          v32 = v31 | v28;
          if ( (v30 & v113) == 0 )
            v32 = v31;
          v31 = v32 | (2 * v28);
          if ( (v30 & v137) == 0 )
            v31 = v32;
          v30 *= 2;
          v28 *= 4;
          ++v29;
        }
        while ( v128 > v30 );
g4_m128_lane<int32_t>(s2, 3) = a1 + 8 * (v31 | (v130 >> v29 << (2 * v29)));
        if ( memcmp(&s1, &s2, 0x10u) != 0 )
        {
          v115 = (uint32_t *)(v180);
          v105 = (uint32_t *)(v178);
          v90 = (unsigned int *)&v179;
          v93 = 0;
          do
          {
            v106 = (int *)(v115 + 16);
            v107 = (int *)(v115 + 32);
            v85 = (uint8_t *)(v105 + 32);
            v108 = (int *)(v115 + 48);
            v84 = (uint8_t *)(v105 + 48);
            v103 = v105 + 48;
            v95 = v115;
            v102 = v105 + 32;
            v92 = v105;
            v99 = v105;
            v98 = (int *)(v115);
            v101 = v90;
            v111 = v105 + 32;
            v131 = v115 + 32;
            v112 = v105 + 48;
            v109 = v90;
            v124 = v115 + 16;
            v117 = (int *)(v105);
            v138 = v115;
            v94 = 0;
            v119 = 0;
            v91 = 2 * v93;
            v65 = (unsigned int **)&s2 + 2 * v93;
            v64 = v115 + 48;
            do
            {
              v33 = &v146 + 8 * v119 + 8 * v91;
              v34 = (*v65)[1];
              v134 = v34 & 0xFFFE;
              v35 = HIWORD(v34);
              if ( (v34 & 0x8000) != 0 )
              {
                v33[3] = 15;
                *v33 = ((uint16_t)(v34 & 0xFFFE) >> 10) & 0x1F;
                v33[1] = (v134 >> 5) & 0x1F;
                v33[2] = v34 & 0x1E | ((int)(v34 & 0x1E) >> 4);
              }
              else
              {
                *v33 = (v134 >> 7) & 0x1E | ((int)((v134 >> 7) & 0x1E) >> 4);
                v33[1] = (v134 >> 3) & 0x1E | ((int)((v134 >> 3) & 0x1E) >> 4);
                v33[2] = (2 * (v34 & 0xE)) | ((int)(2 * (v34 & 0xE)) >> 3);
                v33[3] = (v134 >> 11) & 0xE;
              }
              if ( (v35 & 0x8000) != 0 )
              {
                v56 = &v150 + 8 * v119 + 8 * v91;
                *v56 = (v34 >> 26) & 0x1F;
                v56[3] = 15;
                v56[1] = (v34 >> 21) & 0x1F;
                v56[2] = BYTE2(v34) & 0x1F;
              }
              else
              {
                v36 = &v150 + 8 * v119 + 8 * v91;
                *v36 = (v35 >> 7) & 0x1E | ((int)((v35 >> 7) & 0x1E) >> 4);
                v36[1] = (v35 >> 3) & 0x1E | ((int)((v35 >> 3) & 0x1E) >> 4);
                v36[2] = 2 * (v35 & 0xF);
                v33[2] |= v33[2] >> 4;
                v36[3] = (v35 >> 11) & 0xE;
              }
              v37 = **v65;
              v38 = (*v65)[1] & 1;
              if ( v96 )
              {
                if ( v38 != 0 )
                {
                  *v117 = **v65 & 3;
                  *v138 = 1;
                  v138[1] = 1;
                  v117[2] = (v37 >> 2) & 3;
                  v138[2] = 1;
                  v138[3] = 1;
                  v117[4] = (v37 >> 4) & 3;
                  v138[4] = 1;
                  v138[5] = 1;
                  v117[6] = (uint8_t)v37 >> 6;
                  v138[6] = 1;
                  v138[7] = 1;
                  v109[1] = (v37 >> 8) & 3;
                  v109[3] = (v37 >> 10) & 3;
                  *v124 = 1;
                  v124[1] = 1;
                  v109[5] = (v37 >> 12) & 3;
                  v124[2] = 1;
                  v124[3] = 1;
                  v109[7] = (uint16_t)v37 >> 14;
                  v124[4] = 1;
                  v124[5] = 1;
                  v124[6] = 1;
                  v124[7] = 1;
                  *v111 = HIWORD(v37) & 3;
                  *v131 = 1;
                  v131[1] = 1;
                  v131[2] = 1;
                  v111[2] = (v37 >> 18) & 3;
                  v131[3] = 1;
                  v131[4] = 1;
                  v131[5] = 1;
                  v111[4] = (v37 >> 20) & 3;
                  v131[6] = 1;
                  v131[7] = 1;
                  v111[6] = (v37 >> 22) & 3;
                  v112[1] = HIBYTE(v37) & 3;
                  *v64 = 1;
                  v64[1] = 1;
                  v112[3] = (v37 >> 26) & 3;
                  v64[2] = 1;
                  v64[3] = 1;
                  v64[4] = 1;
                  v64[5] = 1;
                  v112[5] = (v37 >> 28) & 3;
                  v64[6] = 1;
                  v64[7] = 1;
                  v112[7] = v37 >> 30;
                }
                else
                {
                  v72 = v94 + 4;
                  v70 = v94 + 6;
                  v88 = v94 + 5;
                  v127 = v94 + 2;
                  v136 = v94 + 7;
                  v71 = v94 + 3;
                  *v95 = 0;
                  v104 = v94 + 1;
                  *v92 = -(v37 & 1) & 3;
                  v95[1] = 0;
                  v105[v94 + 1] = ((int)(v37 << 30) >> 31) & 3;
                  v95[2] = 0;
                  v105[v127] = ((int)(v37 << 29) >> 31) & 3;
                  v95[3] = 0;
                  v105[v71] = ((int)(v37 << 28) >> 31) & 3;
                  v95[4] = 0;
                  v105[v72] = ((int)(v37 << 27) >> 31) & 3;
                  v95[5] = 0;
                  v105[v88] = ((int)(v37 << 26) >> 31) & 3;
                  v95[6] = 0;
                  v105[v70] = ((int)(v37 << 25) >> 31) & 3;
                  v95[7] = 0;
                  v105[v136] = ((char)v37 >> 7) & 3;
                  v95[16] = 0;
                  v92[16] = ((int)(v37 << 23) >> 31) & 3;
                  v95[17] = 0;
                  v90[v94 + 1] = ((int)(v37 << 22) >> 31) & 3;
                  v95[18] = 0;
                  v90[v127] = ((int)(v37 << 21) >> 31) & 3;
                  v95[19] = 0;
                  v90[v71] = ((int)(v37 << 20) >> 31) & 3;
                  v95[20] = 0;
                  v90[v72] = ((int)(v37 << 19) >> 31) & 3;
                  v95[21] = 0;
                  v90[v88] = ((int)(v37 << 18) >> 31) & 3;
                  v95[22] = 0;
                  v90[v70] = ((int)(v37 << 17) >> 31) & 3;
                  v95[23] = 0;
                  v90[v136] = ((int16_t)v37 >> 15) & 3;
                  v95[32] = 0;
                  v92[32] = ((int)(v37 << 15) >> 31) & 3;
                  v95[33] = 0;
                  *(uint32_t *)&v85[4 * v104] = ((int)(v37 << 14) >> 31) & 3;
                  v95[34] = 0;
                  *(uint32_t *)&v85[4 * v127] = ((int)(v37 << 13) >> 31) & 3;
                  v95[35] = 0;
                  *(uint32_t *)&v85[4 * v71] = ((int)(v37 << 12) >> 31) & 3;
                  v95[36] = 0;
                  *(uint32_t *)&v85[4 * v72] = ((int)(v37 << 11) >> 31) & 3;
                  v95[37] = 0;
                  *(uint32_t *)&v85[4 * v88] = ((int)(v37 << 10) >> 31) & 3;
                  v95[38] = 0;
                  *(uint32_t *)&v85[4 * v70] = ((int)(v37 << 9) >> 31) & 3;
                  v95[39] = 0;
                  *(uint32_t *)&v85[4 * v136] = ((int)(v37 << 8) >> 31) & 3;
                  v95[48] = 0;
                  v92[48] = ((int)(v37 << 7) >> 31) & 3;
                  v95[49] = 0;
                  *(uint32_t *)&v84[4 * v104] = ((int)(v37 << 6) >> 31) & 3;
                  v95[50] = 0;
                  *(uint32_t *)&v84[4 * v127] = ((int)(32 * v37) >> 31) & 3;
                  v95[51] = 0;
                  *(uint32_t *)&v84[4 * v71] = ((int)(16 * v37) >> 31) & 3;
                  v95[52] = 0;
                  *(uint32_t *)&v84[4 * v72] = ((int)(8 * v37) >> 31) & 3;
                  v95[53] = 0;
                  *(uint32_t *)&v84[4 * v88] = ((int)(4 * v37) >> 31) & 3;
                  v95[54] = 0;
                  *(uint32_t *)&v84[4 * v70] = ((int)(2 * v37) >> 31) & 3;
                  v95[55] = 0;
                  *(uint32_t *)&v84[4 * v136] = ((int)v37 >> 31) & 3;
                }
              }
              else
              {
                *v98 = v38;
                *v99 = v37 & 3;
                v98[1] = v38;
                v99[1] = (v37 >> 2) & 3;
                v98[2] = v38;
                v99[2] = (v37 >> 4) & 3;
                v98[3] = v38;
                v99[3] = (uint8_t)v37 >> 6;
                *v106 = v38;
                *v101 = (v37 >> 8) & 3;
                v106[1] = v38;
                v101[1] = (v37 >> 10) & 3;
                v106[2] = v38;
                v101[2] = (v37 >> 12) & 3;
                v106[3] = v38;
                v101[3] = (uint16_t)v37 >> 14;
                *v107 = v38;
                *v102 = HIWORD(v37) & 3;
                v107[1] = v38;
                v102[1] = (v37 >> 18) & 3;
                v107[2] = v38;
                v102[2] = (v37 >> 20) & 3;
                v107[3] = v38;
                v102[3] = (v37 >> 22) & 3;
                *v108 = v38;
                *v103 = HIBYTE(v37) & 3;
                v108[1] = v38;
                v103[1] = (v37 >> 26) & 3;
                v108[2] = v38;
                v103[2] = (v37 >> 28) & 3;
                v103[3] = v37 >> 30;
                v108[3] = v38;
              }
              ++v119;
              v94 += v89;
              ++v65;
              v138 = (uint32_t *)((char *)v138 + v74);
              v117 = (int *)((char *)v117 + v74);
              v124 = (uint32_t *)((char *)v124 + v74);
              v109 = (unsigned int *)((char *)v109 + v74);
              v131 = (uint32_t *)((char *)v131 + v74);
              v111 = (unsigned int *)((char *)v111 + v74);
              v64 = (uint32_t *)((char *)v64 + v74);
              v112 = (uint32_t *)((char *)v112 + v74);
              v98 = (int *)((char *)v98 + v74);
              v99 = (unsigned int *)((char *)v99 + v74);
              v106 = (int *)((char *)v106 + v74);
              v101 = (unsigned int *)((char *)v101 + v74);
              v107 = (int *)((char *)v107 + v74);
              v102 = (unsigned int *)((char *)v102 + v74);
              v108 = (int *)((char *)v108 + v74);
              v103 = (unsigned int *)((char *)v103 + v74);
              v95 = (uint32_t *)((char *)v95 + v74);
              v92 = (unsigned int *)((char *)v92 + v74);
            }
            while ( v119 != 2 );
            ++v93;
            v115 += 64;
            v105 += 64;
            v90 += 64;
          }
          while ( v93 != 2 );
          s1 = s2;
        }
        if ( v96 )
        {
          v39 = 8;
          v40 = ((2 * (v97 & 4)) | v86 & 7) - 4;
        }
        else
        {
          v39 = 4;
          v40 = ((2 * (v97 & 2)) | v86 & 3) - 2;
        }
        v118 = v100 * (v39 * v162 + v40 * (v170 - v162) - (v146 * v39 + v40 * (v154 - v146)))
             + 4 * (v146 * v39 + v40 * (v154 - v146));
        v139 = v100 * (v39 * v163 + v40 * (v171 - v163) - (v39 * v147 + v40 * (v155 - v147)))
             + 4 * (v39 * v147 + v40 * (v155 - v147));
        v41 = v100 * (v39 * v164 + v40 * (v172 - v164) - (v39 * v148 + v40 * (v156 - v148)))
            + 4 * (v39 * v148 + v40 * (v156 - v148));
        v110 = v100 * (v165 * v39 + (v173 - v165) * v40 - (v39 * v149 + v40 * (v157 - v149)))
             + 4 * (v39 * v149 + v40 * (v157 - v149));
        if ( v96 )
        {
          v42 = v118 >> 2;
          v43 = v139 >> 2;
          v44 = v41 >> 2;
          v110 >>= 1;
        }
        else
        {
          v42 = v118 >> 1;
          v43 = v139 >> 1;
          v44 = v41 >> 1;
        }
        v140 = v42 + (v42 >> 5);
        v132 = v43 + (v43 >> 5);
        v125 = v44 + (v44 >> 5);
        if ( v96 )
        {
          v45 = 8;
          v46 = (v86 & 7 | (2 * (v97 & 4))) - 4;
        }
        else
        {
          v45 = 4;
          v46 = (v86 & 3 | (2 * (v97 & 2))) - 2;
        }
        v116 = v100 * (v45 * v166 + v46 * (v174 - v166) - (v150 * v45 + v46 * (v158 - v150)))
             + 4 * (v150 * v45 + v46 * (v158 - v150));
        v142 = v100 * (v45 * v167 + v46 * (v175 - v167) - (v45 * v151 + v46 * (v159 - v151)))
             + 4 * (v45 * v151 + v46 * (v159 - v151));
        v47 = v100 * (v45 * v168 + v46 * (v176 - v168) - (v45 * v152 + v46 * (v160 - v152)))
            + 4 * (v45 * v152 + v46 * (v160 - v152));
        v120 = v100 * (v169 * v45 + (v177 - v169) * v46 - (v45 * v153 + v46 * (v161 - v153)))
             + 4 * (v45 * v153 + v46 * (v161 - v153));
        if ( v96 )
        {
          v135 = (v116 >> 7) + (v116 >> 2);
          v126 = (v142 >> 2) + (v142 >> 7);
          v120 >>= 1;
          v143 = (v47 >> 7) + (v47 >> 2);
          v48 = v86 & 7 | (2 * (v97 & 4));
        }
        else
        {
          v135 = (v116 >> 1) + (v116 >> 6);
          v126 = (v142 >> 1) + (v142 >> 6);
          v143 = (v47 >> 1) + (v47 >> 6);
          v48 = v86 & 3 | (2 * (v97 & 2));
        }
        v49 = *(uint32_t *)&v180[64 * v76 + 4 * v48];
        if ( v49 != 0 )
        {
          if ( v96 )
          {
            if ( (((uint8_t)v48 ^ (uint8_t)v76) & 1) != 0 )
            {
              if ( v49 == 1 )
              {
                v61 = dword_20B9FF4[*(uint32_t *)&v73[4 * v48 + 4] - 1068211]
                    + dword_20B9FF4[*(uint32_t *)&v73[4 * v48 - 4] - 1068211]
                    + dword_20B9FF4[*(uint32_t *)&v68[4 * v48] - 1068211]
                    + dword_20B9FF4[*(uint32_t *)&v69[4 * v48] - 1068211];
                v62 = v61 + 5;
                v63 = v61 + 2;
                if ( v63 >= 0 )
                  v62 = v63;
                v50 = false;
                v51 = v62 >> 2;
              }
              else
              {
                if ( v49 == 2 )
                {
                  v58 = *(uint32_t *)&v73[4 * v48 - 4];
                  v59 = (int *)(&dword_20B9FF4[-1068211]);
                  v60 = *(uint32_t *)&v73[4 * v48 + 4];
                }
                else
                {
                  v58 = *(uint32_t *)&v69[4 * v48];
                  v59 = (int *)(&dword_20B9FF4[-1068211]);
                  v60 = *(uint32_t *)&v68[4 * v48];
                }
                v50 = false;
                v51 = (v59[v60] + v59[v58] + 1) / 2;
              }
            }
            else
            {
              v50 = false;
              v51 = dword_1CA6D28[*(uint32_t *)&v178[4 * v48 + v79]];
            }
          }
          else
          {
            v57 = *(uint32_t *)&v178[4 * v48 + v79];
            v50 = v57 == 2;
            v51 = dword_1CA6D38[v57];
          }
        }
        else
        {
          v50 = false;
          v51 = dword_1CA6D28[*(uint32_t *)&v178[4 * v48 + v79]];
        }
        v52 = v51 * (v135 - v140) + 8 * v140;
        v141 = 0;
        v133 = (v51 * (v126 - v132) + 8 * v132) >> 3;
        v53 = (v51 * (v143 - v125) + 8 * v125) >> 3;
        if ( !v50 )
          v141 = (unsigned int)(v51 * (v120 + (v120 >> 4) - ((v110 >> 4) + v110)) + 8 * ((v110 >> 4) + v110)) >> 3;
        v54 = v87 + v80;
        ++v87;
        --v97;
        v55 = 4 * v54;
        *(uint8_t *)(a5 + 4 * v54) = v52 >> 3;
        *(uint8_t *)(a5 + v55 + 2) = v53;
        *(uint8_t *)(a5 + v55 + 1) = v133;
        *(uint8_t *)(a5 + v55 + 3) = v141;
      }
      while ( v97 != ~a3 );
    }
    ++v75;
    result = a3;
    v80 += a3;
  }
  while ( v75 != a4 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CD3740  (binary VA: 0xcd3740)
// Original: sub_CD3740
// ----------------------------------------------------------------------------
void * sub_CD3740(uint32_t *a1, unsigned int a2)
{
  uint8_t *v2;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  size_t n;
  void *result;
  void *v11;
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
  v7 = v6;
  v8 = 0;
  n = *((uint32_t *)src - 3);
  if ( n != 0 )
  {
    if ( n == 1 )
      *(uint8_t *)(v7 + 12) = *src;
    else
      memcpy((void *)(v7 + 12), src, n);
    v8 = *((uint32_t *)src - 3);
  }
  result = &unk_20D3E6C;
  if ( (void *)v7 != &unk_20D3E6C )
  {
    *(uint32_t *)(v7 + 8) = 0;
    *(uint32_t *)v7 = v8;
    *(uint8_t *)(v7 + v8 + 12) = 0;
  }
  v11 = (void *)(*a1 - 12);
  if ( v11 != &unk_20D3E6C )
  {
    result = (void *)__sync_fetch_and_add((volatile int32_t *)(*a1 - 4), 0xFFFFFFFF);
    if ( (int)(uintptr_t)(result) <= 0 )
      result = (void *)gll_operator_delete_arr((int)(uintptr_t)(v11));
  }
  *a1 = v7 + 12;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CD38A0  (binary VA: 0xcd38a0)
// Original: sub_CD38A0
// ----------------------------------------------------------------------------
int sub_CD38A0(int a1)
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
  if ( (void *)v5 != &unk_20D3E6C )
  {
    *(uint32_t *)(v5 + 8) = 0;
    *(uint32_t *)v5 = v6;
    *(uint8_t *)(v5 + v6 + 12) = 0;
  }
  return v5 + 12;
}

// ----------------------------------------------------------------------------
// Function: sub_CD39B0  (binary VA: 0xcd39b0)
// Original: sub_CD39B0
// ----------------------------------------------------------------------------
uint32_t * sub_CD39B0(uint32_t *a1, const char *s)
{
  size_t v3;
  size_t n;
  unsigned int v5;
  int v6;
  int v7;
  void *v8;
  int v10;
  void *v11;

  if ( s == nullptr )
    sub_18FFFD0("basic_string::_S_construct null not valid");
  v3 = strlen(s);
  if ( s == &s[v3] )
  {
    v8 = &unk_20D3E78;
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
    v8 = (void *)(v7 + 12);
    goto LABEL_9;
  }
  v7 = sub_4EBDC0(v3 + 13);
  *(uint32_t *)(v7 + 4) = n;
  *(uint32_t *)(v7 + 8) = 0;
  v8 = (void *)(v7 + 12);
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
  if ( (void *)v7 != &unk_20D3E6C )
  {
    *(uint32_t *)(v7 + 8) = 0;
    *(uint32_t *)v7 = n;
    *((uint8_t *)v8 + n) = 0;
  }
LABEL_12:
  *a1 = (uint32_t)(uintptr_t)(v8);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_CD3B10  (binary VA: 0xcd3b10)
// Original: sub_CD3B10
// ----------------------------------------------------------------------------
int sub_CD3B10(int *a1, int a2)
{
  int v2;

  v2 = *a1;
  if ( a2 != 0 )
    return G4_VCALL<int>(v2, 12, a2, 24);
  else
    return G4_VCALL<int>(v2, 24, 24, 1);
}

// ----------------------------------------------------------------------------
// Function: sub_CD3B60  (binary VA: 0xcd3b60)
// Original: sub_CD3B60
// ----------------------------------------------------------------------------
uint32_t * sub_CD3B60(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  bool v4;
  uint32_t *result;
  volatile int32_t *v6;

  v3 = a1;
  v4 = a1 == a2;
  result = a3;
  if ( !v4 )
  {
    do
    {
      if ( result != nullptr )
      {
        *result = *v3;
        result[1] = v3[1];
        v6 = (volatile int32_t *)v3[2];
        result[2] = (uint32_t)(uintptr_t)(v6);
        if ( v6 != nullptr )
          __sync_add_and_fetch(v6, 1u);
        result[3] = v3[3];
        result[4] = v3[4];
        result[5] = v3[5];
      }
      v3 += 6;
      result += 6;
    }
    while ( a2 != v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CD3BB0  (binary VA: 0xcd3bb0)
// Original: sub_CD3BB0
// ----------------------------------------------------------------------------
uint32_t * sub_CD3BB0(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  uint32_t *v3;
  bool v4;
  uint32_t *result;
  volatile int32_t *v6;

  v3 = a1;
  v4 = a2 == a1;
  result = a3;
  if ( !v4 )
  {
    do
    {
      if ( result != nullptr )
      {
        *result = *v3;
        result[1] = v3[1];
        v6 = (volatile int32_t *)v3[2];
        result[2] = (uint32_t)(uintptr_t)(v6);
        if ( v6 != nullptr )
          __sync_add_and_fetch(v6, 1u);
        result[3] = v3[3];
        result[4] = v3[4];
        result[5] = v3[5];
      }
      v3 += 6;
      result += 6;
    }
    while ( v3 != a2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CD3C20  (binary VA: 0xcd3c20)
// Original: sub_CD3C20
// ----------------------------------------------------------------------------
int sub_CD3C20(int result, uint32_t *a2)
{
  uint32_t *v2;
  unsigned int v3;
  uint32_t *v4;
  bool v5; // si
  uint32_t *v6;
  bool v7;
  unsigned int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  unsigned int v13;
  bool v14;
  int v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef const void *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_s1;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v17)) > _g4_s1 ? (0u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v18)) > _g4_s2 ? (4u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v19)) > _g4_s3 ? (8u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v21)) > _g4_s4 ? (16u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v22)) > _g4_s5 ? (20u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v23)) > _g4_s6 ? (20u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v24)) > _g4_s7 ? (20u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v25)) > _g4_s8 ? (24u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v26)) > _g4_s9 ? (24u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v27)) > _g4_s10 ? (28u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v28)) > _g4_s11 ? (28u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_s1)) > _g4_s12 ? (32u + sizeof(_g4_t_s1)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v30)) > _g4_s13 ? (36u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v31)) > _g4_s14 ? (40u + sizeof(_g4_t_v31)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);

  v21 = result;
  if ( (uint32_t *)result != a2 )
  {
    v2 = (uint32_t *)(result + 20);
    if ( a2 != (uint32_t *)(result + 20) )
    {
      v18 = (const void *)(result + 8);
      do
      {
        v3 = *v2 & 0xFFFFFF;
        v4 = v2;
        v22 = *(uint32_t *)v21 & 0xFFFFFF;
        v5 = v3 < v22;
        if ( v3 == v22 )
        {
          v8 = *(uint32_t *)(v21 + 4);
          v5 = v2[1] < v8;
          if ( v2[1] == v8 )
          {
            v16 = v2;
            v9 = memcmp(v2 + 2, v18, 8u);
            v2 = v16;
            if ( v9 < 0 )
            {
LABEL_14:
              v10 = *v2;
              v28 = v2[1];
              s1 = v2[2];
              v26 = v10;
              v30 = v2[3];
              v31 = v2[4];
              v24 = v10 & 0xFFFFFF;
              v11 = v2 - 5;
              v19 = v2;
              while ( 1 )
              {
                v12 = v11;
                v13 = *v11 & 0xFFFFFF;
                v14 = v13 > v24;
                if ( v13 == v24
                  && (v14 = v28 < v11[1], v28 == v11[1])
                  && (v17 = v11, v15 = memcmp(&s1, v11 + 2, 8u), v14 = false, v11 = v17, v15 >= 0) )
                {
                  v11 = v17 - 5;
                  if ( *((uint8_t *)v17 + 16) <= (uint8_t)v31 )
                  {
LABEL_21:
                    *v4 = v26;
                    v4[1] = v28;
                    v4[2] = s1;
                    v4[3] = v30;
                    result = (uint8_t)v31;
                    *((uint8_t *)v4 + 16) = v31;
                    v6 = v19 + 5;
                    goto LABEL_10;
                  }
                }
                else
                {
                  v11 -= 5;
                  if ( !v14 )
                    goto LABEL_21;
                }
                *v4 = *v12;
                v4[1] = v12[1];
                v4[2] = v12[2];
                v4[3] = v12[3];
                *((uint8_t *)v4 + 16) = *((uint8_t *)v12 + 16);
                v4 = v12;
              }
            }
            v5 = *(uint8_t *)(v21 + 16) > *((uint8_t *)v16 + 16);
          }
        }
        if ( !v5 )
          goto LABEL_14;
        v25 = *v2;
        v27 = v2[1];
        s1 = v2[2];
        v30 = v2[3];
        v31 = v2[4];
        v6 = v2 + 5;
        if ( -858993459 * (((int)(uintptr_t)(v2) - v21) >> 2) > 0 )
        {
          v23 = -858993459 * (((int)(uintptr_t)(v2) - v21) >> 2);
          do
          {
            *v2 = *(v2 - 5);
            v2[1] = *(v2 - 4);
            v2[2] = *(v2 - 3);
            v2[3] = *(v2 - 2);
            *((uint8_t *)v2 + 16) = *((uint8_t *)v2 - 4);
            v7 = v23-- == 1;
            v2 -= 5;
          }
          while ( !v7 );
        }
        *(uint32_t *)v21 = v25;
        *(uint32_t *)(v21 + 4) = v27;
        *(uint32_t *)(v21 + 8) = s1;
        *(uint32_t *)(v21 + 12) = v30;
        result = (uint8_t)v31;
        *(uint8_t *)(v21 + 16) = v31;
LABEL_10:
        v2 = v6;
      }
      while ( a2 != v6 );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CD3E90  (binary VA: 0xcd3e90)
// Original: sub_CD3E90
// ----------------------------------------------------------------------------
int sub_CD3E90(int a1, int a2, int a3, int a4, unsigned int a5, int a6, int a7, int a8)
{
  int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  int result;
  int i;
  unsigned int v18;
  bool v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef bool _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v30;
  typedef unsigned int _g4_t_v31;
  typedef int _g4_t_s2;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v24)) > _g4_s0 ? (12u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v26)) > _g4_s2 ? (16u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (27u + sizeof(_g4_t_v27)) > _g4_s3 ? (27u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v28)) > _g4_s4 ? (28u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v30)) > _g4_s5 ? (36u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v31)) > _g4_s6 ? (36u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_s2)) > _g4_s7 ? (48u + sizeof(_g4_t_s2)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v33)) > _g4_s8 ? (52u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v34)) > _g4_s9 ? (56u + sizeof(_g4_t_v34)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 27u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);

  v26 = a2;
  if ( a2 < (a3 - 1) / 2 )
  {
    while ( 1 )
    {
      v14 = 2 * (a2 + 1) - 1;
      v30 = 2 * (a2 + 1);
      v15 = a1 + 20 * v14;
      v28 = a1 + 40 * (a2 + 1);
      v9 = *(uint32_t *)v28 & 0xFFFFFF;
      v10 = *(uint32_t *)v15 & 0xFFFFFF;
      v27 = v9 < v10;
      if ( v9 != v10 )
        goto LABEL_3;
      v11 = *(uint32_t *)(v28 + 4);
      v12 = *(uint32_t *)(v15 + 4);
      v27 = v11 < v12;
      if ( v11 != v12 )
        goto LABEL_3;
      v24 = a2;
      v13 = memcmp((const void *)(v28 + 8), (const void *)(v15 + 8), 8u);
      a2 = v24;
      if ( v13 >= 0 )
        break;
LABEL_4:
      v15 = v28;
      v14 = v30;
LABEL_5:
      v8 = a1 + 20 * a2;
      *(uint32_t *)v8 = *(uint32_t *)v15;
      *(uint32_t *)(v8 + 4) = *(uint32_t *)(v15 + 4);
      *(uint32_t *)(v8 + 8) = *(uint32_t *)(v15 + 8);
      *(uint32_t *)(v8 + 12) = *(uint32_t *)(v15 + 12);
      *(uint8_t *)(v8 + 16) = *(uint8_t *)(v15 + 16);
      if ( v14 >= (a3 - 1) / 2 )
        goto LABEL_11;
      a2 = v14;
    }
    v27 = *(uint8_t *)(v15 + 16) > *(uint8_t *)(v28 + 16);
LABEL_3:
    if ( v27 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v14 = a2;
  v15 = a1 + 20 * a2;
LABEL_11:
  if ( (a3 & 1) == 0 && v14 == (a3 - 2) / 2 )
  {
    v14 = 2 * v14 + 1;
    v23 = a1 + 20 * v14;
    *(uint32_t *)v15 = *(uint32_t *)v23;
    *(uint32_t *)(v15 + 4) = *(uint32_t *)(v23 + 4);
    *(uint32_t *)(v15 + 8) = *(uint32_t *)(v23 + 8);
    *(uint32_t *)(v15 + 12) = *(uint32_t *)(v23 + 12);
    *(uint8_t *)(v15 + 16) = *(uint8_t *)(v23 + 16);
    v15 = v23;
  }
  s2 = a6;
  v33 = a7;
  v34 = a8;
  if ( v14 > v26 )
  {
    v31 = a4 & 0xFFFFFF;
    for ( i = (v14 - 1) / 2; ; i = (i - 1) / 2 )
    {
      v15 = a1 + 20 * i;
      v18 = *(uint32_t *)v15 & 0xFFFFFF;
      v19 = v18 < v31;
      if ( v18 == v31 )
      {
        v21 = *(uint32_t *)(v15 + 4);
        v19 = v21 < a5;
        if ( v21 == a5 )
        {
          v25 = i;
          v22 = memcmp((const void *)(v15 + 8), &s2, 8u);
          i = v25;
          if ( v22 < 0 )
          {
LABEL_19:
            v15 = a1 + 20 * v14;
            break;
          }
          v19 = (uint8_t)v34 > *(uint8_t *)(v15 + 16);
        }
      }
      if ( !v19 )
        goto LABEL_19;
      v20 = a1 + 20 * v14;
      *(uint32_t *)v20 = *(uint32_t *)v15;
      *(uint32_t *)(v20 + 4) = *(uint32_t *)(v15 + 4);
      *(uint32_t *)(v20 + 8) = *(uint32_t *)(v15 + 8);
      *(uint32_t *)(v20 + 12) = *(uint32_t *)(v15 + 12);
      *(uint8_t *)(v20 + 16) = *(uint8_t *)(v15 + 16);
      if ( i <= v26 )
        break;
      v14 = i;
    }
  }
  *(uint32_t *)v15 = a4;
  *(uint32_t *)(v15 + 4) = a5;
  *(uint32_t *)(v15 + 8) = s2;
  *(uint32_t *)(v15 + 12) = v33;
  result = (uint8_t)v34;
  *(uint8_t *)(v15 + 16) = v34;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CD4160  (binary VA: 0xcd4160)
// Original: sub_CD4160
// ----------------------------------------------------------------------------
int sub_CD4160(uint32_t *a1, char *a2, int a3)
{
  uint32_t *v3;
  int result;
  uint32_t *i;
  int v6;
  uint32_t *v7;
  int16_t v8;
  int v9;
  int v10;
  int16_t v11; // bp
  unsigned int v12;
  char *j;
  int k;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  int v21;
  uint32_t *m;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  int v30;
  int *v31;
  int v32;
  int v33;
  uint32_t *v34;
  int v35;
  int *v36;
  uint32_t *v37;
  uint32_t *v38;
  uint32_t *v39;
  char *v40;
  int16_t v41;
  uint32_t *v42;
  uint32_t *v43;
  char *v44;
  int v45;
  int v46;
  int v47;
  char *v48;
  uint32_t *v49;
  int v50;
  int v51;
  int v52;
  int v53;

  v3 = a1;
  result = a2 - (char *)a1;
  v40 = a2;
  if ( result > 67 )
  {
    if ( a3 == 0 )
    {
      j = a2;
      goto LABEL_37;
    }
    v34 = v3;
    v44 = (char *)(v3 + 1);
    for ( i = v3; ; i = v34 )
    {
      v6 = *i;
      --a3;
      v7 = &i[result >> 3];
      v8 = *(uint16_t *)(*i + 4);
      v9 = *v7;
      v41 = *(uint16_t *)(*v7 + 4);
      v10 = *((uint32_t *)v40 - 1);
      v11 = *(uint16_t *)(v10 + 4);
      if ( v8 >= v41 )
      {
        if ( v8 >= v11 )
        {
          if ( v41 < v11 )
            goto LABEL_21;
          *v34 = v9;
          *v7 = v6;
          v10 = *((uint32_t *)v40 - 1);
          v11 = *(uint16_t *)(v10 + 4);
          v8 = *(uint16_t *)(*v34 + 4);
        }
      }
      else if ( v41 >= v11 )
      {
        if ( v8 < v11 )
        {
LABEL_21:
          *v34 = v10;
          *((uint32_t *)v40 - 1) = v6;
          v11 = *(uint16_t *)(v6 + 4);
          v10 = v6;
          v8 = *(uint16_t *)(*v34 + 4);
        }
      }
      else
      {
        *v34 = v9;
        *v7 = v6;
        v10 = *((uint32_t *)v40 - 1);
        v11 = *(uint16_t *)(v10 + 4);
        v8 = *(uint16_t *)(*v34 + 4);
      }
      v12 = (unsigned int)(uintptr_t)(v40);
      for ( j = v44; ; j += 4 )
      {
        for ( k = *(uint32_t *)j; *(int16_t *)(*(uint32_t *)j + 4) < v8; k = *(uint32_t *)j )
          j += 4;
        v12 -= 4;
        if ( v11 > v8 )
        {
          do
          {
            v12 -= 4;
            v10 = *(uint32_t *)v12;
          }
          while ( *(int16_t *)(*(uint32_t *)v12 + 4) > v8 );
        }
        if ( v12 <= (unsigned int)(uintptr_t)(j) )
          break;
        *(uint32_t *)j = v10;
        *(uint32_t *)v12 = k;
        v10 = *(uint32_t *)(v12 - 4);
        v11 = *(uint16_t *)(v10 + 4);
        v8 = *(uint16_t *)(*v34 + 4);
      }
      sub_CD4160(a3);
      result = j - (char *)v34;
      if ( j - (char *)v34 <= 67 )
        return result;
      if ( a3 == 0 )
      {
        v3 = v34;
LABEL_37:
        v21 = result >> 2;
        v48 = j;
        v53 = v21 & 1;
        v51 = (v21 - 2) >> 1;
        v45 = (v21 - 1) >> 1;
        v47 = v51;
        v49 = &v3[v51];
        for ( m = v49; ; m = v49 )
        {
          v23 = *m;
          v38 = m;
          v24 = v47;
          v52 = v23;
          v25 = v47;
          if ( v47 < v45 )
          {
            while ( 1 )
            {
              v43 = &v3[2 * v25 + 2];
              v26 = *v43;
              v39 = &v3[2 * v25 + 1];
              v27 = 2 * (v25 + 1);
              if ( *(uint16_t *)(*v43 + 4) < *(uint16_t *)(*v39 + 4) )
              {
                v26 = *v39;
                v27 = 2 * (v25 + 1) - 1;
              }
              v28 = &v3[2 * v25 + 2];
              if ( *(uint16_t *)(*v43 + 4) < *(uint16_t *)(*v39 + 4) )
                v28 = &v3[2 * v25 + 1];
              v38 = v28;
              v3[v25] = v26;
              if ( v27 >= v45 )
                break;
              v25 = v27;
            }
            v24 = v27;
          }
          if ( v53 == 0 && v51 == v24 )
          {
            v38 = &v3[2 * v51 + 1];
            v24 = 2 * v51 + 1;
            v3[v51] = *v38;
          }
          if ( v47 < v24 )
          {
            v29 = (v24 - 1) / 2;
            v30 = v3[v29];
            if ( *(uint16_t *)(v52 + 4) > *(uint16_t *)(v30 + 4) )
            {
              while ( 1 )
              {
                v3[v24] = v30;
                v38 = &v3[v29];
                if ( v47 >= v29 )
                  break;
                v30 = v3[(v29 - 1) / 2];
                if ( *(uint16_t *)(v30 + 4) >= *(uint16_t *)(v52 + 4) )
                  break;
                v24 = v29;
                v29 = (v29 - 1) / 2;
              }
            }
          }
          --v49;
          *v38 = v52;
          if ( v47 == 0 )
            break;
          --v47;
        }
        while ( 2 )
        {
          v48 -= 4;
          v15 = 0;
          v16 = 0;
          v36 = (int *)(v3);
          v17 = *(uint32_t *)v48;
          *(uint32_t *)v48 = *v3;
          v50 = v17;
          v46 = (v48 - (char *)v3) >> 2;
          if ( (v46 - 1) / 2 > 0 )
          {
            while ( 1 )
            {
              v35 = 2 * (v16 + 1);
              v42 = &v3[2 * v16 + 2];
              v18 = *v42;
              v37 = &v3[v35 - 1];
              v19 = v35;
              if ( *(uint16_t *)(*v42 + 4) < *(uint16_t *)(*v37 + 4) )
              {
                v18 = *v37;
                v19 = v35 - 1;
              }
              v20 = (int *)(&v3[2 * v16 + 2]);
              if ( *(uint16_t *)(*v42 + 4) < *(uint16_t *)(*v37 + 4) )
                v20 = (int *)(&v3[v35 - 1]);
              v36 = v20;
              v3[v16] = v18;
              if ( (v46 - 1) / 2 <= v19 )
                break;
              v16 = v19;
            }
            v15 = v19;
          }
          if ( (v46 & 1) == 0 && v15 == (v46 - 2) / 2 )
          {
            v31 = v36;
            v15 = 2 * v15 + 1;
            v36 = (int *)(&v3[v15]);
            *v31 = *v36;
          }
          else if ( v15 <= 0 )
          {
            goto LABEL_34;
          }
          v32 = (v15 - 1) >> 1;
          v33 = v3[v32];
          if ( *(uint16_t *)(v33 + 4) < *(uint16_t *)(v50 + 4) )
          {
            while ( 1 )
            {
              v3[v15] = v33;
              v36 = (int *)(&v3[v32]);
              if ( v32 == 0 )
                break;
              v33 = v3[(v32 - 1) >> 1];
              if ( *(uint16_t *)(v33 + 4) >= *(uint16_t *)(v50 + 4) )
                break;
              v15 = v32;
              v32 = (v32 - 1) >> 1;
            }
          }
LABEL_34:
          result = v50;
          *v36 = v50;
          if ( v48 - (char *)v3 <= 7 )
            return result;
          continue;
        }
      }
      v40 = j;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch_malloc  (binary VA: 0xcd4cd0)
// Original: glitch_malloc
// ----------------------------------------------------------------------------
int glitch_malloc(size_t a1)
{
  return sub_4EBDC0(a1);
}

// ----------------------------------------------------------------------------
// Function: glitch_free  (binary VA: 0xcd4d00)
// Original: glitch_free
// ----------------------------------------------------------------------------
int glitch_free(int a1)
{
  return gll_operator_delete_arr(a1);
}

// ----------------------------------------------------------------------------
// Function: opNewArray_eacd6b40  (binary VA: 0xcd6b40)
// Original: operator new[]
// ----------------------------------------------------------------------------
int opNewArray_eacd6b40(size_t a1)
{
  return sub_4EBDC0(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_CD6B70  (binary VA: 0xcd6b70)
// Original: sub_CD6B70
// ----------------------------------------------------------------------------
uint32_t * sub_CD6B70(uint32_t *a1)
{
  unsigned int v2;
  uint32_t *v3;
  unsigned int v4;
  unsigned int v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *result;
  unsigned int v10;
  unsigned int v11;
  size_t v12;
  unsigned int v13;
  int v14;

  v2 = a1[3];
  if ( v2 <= 3 )
  {
    v2 = 4;
  }
  else if ( (v2 & 3) != 0 )
  {
    v2 = a1[3] + 4 - (a1[3] & 3);
  }
  v12 = v2 * a1[4] + 8;
  v3 = (uint32_t *)opNewArray(v12);
  if ( v3 == nullptr )
  {
    v10 = a1[4];
    result = nullptr;
    if ( v10 <= 4 )
      return result;
    v2 = a1[3];
    v11 = v10 >> 1;
    a1[4] = v11;
    if ( v2 <= 3 )
    {
      v2 = 4;
    }
    else if ( (v2 & 3) != 0 )
    {
      v2 = v2 + 4 - (v2 & 3);
    }
    v12 = v2 * v11 + 8;
    v3 = (uint32_t *)opNewArray(v12);
    if ( v3 == nullptr )
      return nullptr;
  }
  v4 = a1[6];
  if ( v4 != 0 )
  {
    v14 = a1[4];
    v13 = a1[3];
    if ( v4 > v2 * v14 / v13 )
    {
      v5 = v4 * v13 / v2;
      if ( v5 > 2 * v14 )
        v5 = 2 * v14;
      a1[4] = v5;
    }
  }
  else
  {
    a1[4] *= 2;
  }
  v6 = (uint32_t *)((char *)v3 + v2 * ((v12 - 8 - v2) / v2));
  *v6 = *a1;
  if ( v3 != v6 )
  {
    v7 = (uint32_t *)((char *)v6 - v2);
    if ( v3 == (uint32_t *)((char *)v6 - v2) )
    {
      v7 = (uint32_t *)((char *)v3 + v2 * ((v12 - 8 - v2) / v2));
    }
    else
    {
      while ( 1 )
      {
        *v7 = (uint32_t)(uintptr_t)(v6);
        if ( v3 == (uint32_t *)((char *)v7 - v2) )
          break;
        v6 = v7;
        v7 = (uint32_t *)((char *)v7 - v2);
      }
    }
    *v3 = (uint32_t)(uintptr_t)(v7);
  }
  *a1 = (uint32_t)(uintptr_t)(v3);
  v8 = (uint32_t *)((char *)v3 + v12 - 4);
  *(v8 - 1) = a1[1];
  *v8 = a1[2];
  a1[2] = v12;
  result = (uint32_t *)*a1;
  a1[1] = (uint32_t)(uintptr_t)(v3);
  *a1 = *result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CD6CF0  (binary VA: 0xcd6cf0)
// Original: sub_CD6CF0
// ----------------------------------------------------------------------------
void sub_CD6CF0(int a1, glf::Console::Self *a2, __gnuc_va_list __varargs)
{
  glf::EventManager::Self *EventMgr;
  char *v5;
  glf::EventManager::Self *v6;
  int v7;
  int v8;
  unsigned int v9;
  unsigned int i;
  __m128i *v11;
  unsigned int v12;
  void *v13;
  bool v14;
  typedef size_t _g4_t_v15;
  typedef int _g4_t_v16;
  typedef unsigned int _g4_t_v17;
  typedef char *_g4_t_v18;
  typedef size_t _g4_t_v19;
  typedef uint32_t _g4_t_v21[3];
  typedef char _g4_t_s[1024];
  typedef char *_g4_t_v23;
  enum : size_t {
    _g4_s0 = 1168u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v19)) > _g4_s4 ? (16u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_s)) > _g4_s6 ? (44u + sizeof(_g4_t_s)) : _g4_s6,
    _g4_s8 = (1068u + sizeof(_g4_t_v23)) > _g4_s7 ? (1068u + sizeof(_g4_t_v23)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 1068u);

  EventMgr = (glf::EventManager::Self *)glf::GetEventMgr();
  if ( !glf::EventManager::HasEventReceiver(EventMgr) )
  {
LABEL_10:
    glf::Console::VPrintln(a2, __varargs);
    return;
  }
  v23 = nullptr;
  if ( vsnprintf(s, 0x400u, (const char *)a2, __varargs) < 0 )
  {
    v7 = vsnprintf(nullptr, 0, (const char *)a2, __varargs);
    v19 = v7 + 1;
    v8 = opNewArray(v7 + 1);
    v18 = (char *)v8;
    if ( v7 != -1 )
    {
      v9 = -v8 & 0xF;
      if ( v9 > v19 )
        v9 = v7 + 1;
      if ( v9 == 0 )
        goto LABEL_30;
      for ( i = 0; i < v9; ++i )
      {
        --v7;
        *(uint8_t *)v8++ = 0;
      }
      if ( v19 != v9 )
      {
LABEL_30:
        v15 = v19 - v9;
        v17 = (v19 - v9) >> 4;
        v16 = 16 * v17;
        if ( 16 * v17 == 0 )
          goto LABEL_31;
        v11 = (__m128i *)&v18[v9];
        v12 = 0;
        do
        {
          ++v12;
          *v11++ = g4_m128_from<__m128i>(0LL);
        }
        while ( v17 > v12 );
        v7 -= v16;
        v8 += v16;
        if ( v15 != v16 )
        {
LABEL_31:
          do
          {
            --v7;
            *(uint8_t *)v8++ = 0;
          }
          while ( v7 != -1 );
        }
      }
    }
    v13 = v23;
    v14 = v23 == nullptr;
    v23 = v18;
    if ( !v14 )
    {
      opDeleteArray(v13);
      v18 = v23;
    }
    vsnprintf(v18, v19, (const char *)a2, __varargs);
  }
  glitch::CLogEvent::Construct((glitch::CLogEvent::Self *)v21);
  v5 = v23;
  if ( v23 == nullptr )
    v5 = s;
  v21[1] = (uint32_t)(uintptr_t)(v5);
  v21[2] = a1;
  v6 = (glf::EventManager::Self *)glf::GetEventMgr();
  if ( (uint8_t)glf::EventManager::SendEvent(v6, (uint16_t *)v21) == 0 )
  {
    if ( v23 != nullptr )
      opDeleteArray(v23);
    goto LABEL_10;
  }
  if ( v23 != nullptr )
    opDeleteArray(v23);
}

// ----------------------------------------------------------------------------
// Function: irr_malloc  (binary VA: 0xcd6fb0)
// Original: irr_malloc
// ----------------------------------------------------------------------------
int irr_malloc(size_t a1)
{
  return sub_4EBDC0(a1);
}

// ----------------------------------------------------------------------------
// Function: irr_free  (binary VA: 0xcd6fe0)
// Original: irr_free
// ----------------------------------------------------------------------------
int irr_free(int a1)
{
  gll_operator_delete_arr(a1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: opNewArray  (binary VA: 0xcd7060)
// Original: operator new[]
// ----------------------------------------------------------------------------
int opNewArray(size_t a1, int a2, int a3, int a4, int a5)
{
  return sub_4EBE00(a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: sub_CD96F0  (binary VA: 0xcd96f0)
// Original: sub_CD96F0
// ----------------------------------------------------------------------------
glitch::streaming::SGeometricObject::Self * sub_CD96F0(const glitch::streaming::SGeometricObject::Self *a1, const glitch::streaming::SGeometricObject::Self *a2, glitch::streaming::SGeometricObject::Self *a3)
{
  const glitch::streaming::SGeometricObject::Self *i;

  for ( i = a1; i != a2; a3 = (glitch::streaming::SGeometricObject::Self *)((char *)a3 + 48) )
  {
    if ( a3 != nullptr )
      glitch::streaming::SGeometricObject::Construct(a3, i);
    i = (const glitch::streaming::SGeometricObject::Self *)((char *)i + 48);
  }
  return a3;
}

// ----------------------------------------------------------------------------
// Function: PVRTCDecompress  (binary VA: 0xcdb340)
// Original: PVRTCDecompress
// ----------------------------------------------------------------------------
unsigned int PVRTCDecompress(const void *a1, int a2, int a3, int a4, uint8_t *a5)
{
  return sub_CD1CF0((int)(uintptr_t)(a1), a2, a3, a4, (int)(uintptr_t)(a5));
}

// ----------------------------------------------------------------------------
// Function: util_number_is_power_2  (binary VA: 0xcdb370)
// Original: util_number_is_power_2
// ----------------------------------------------------------------------------
bool util_number_is_power_2(unsigned int a1)
{
  bool result;

  result = false;
  if ( a1 != 0 )
    return (a1 | (a1 - 1)) == ((a1 - 1) ^ a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CDB3F0  (binary VA: 0xcdb3f0)
// Original: sub_CDB3F0
// ----------------------------------------------------------------------------
void sub_CDB3F0(int *a1, int a2, int *a3)
{
  int v3;
  int v4;
  volatile int32_t *v5;
  int v6;
  char v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  volatile int32_t *v15;
  int v16;
  bool v17;
  volatile int32_t *v18;
  volatile int32_t *v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  volatile int32_t *v29;
  int v30;
  int *v31;
  int v32;
  int v33;
  volatile int32_t *v34;
  int v35;
  int v36;
  int v37;
  int *v38;
  int v39;
  volatile int32_t *v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef size_t _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef volatile int32_t *_g4_t_v56;
  typedef volatile int32_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef volatile int32_t *_g4_t_v59;
  typedef char _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v47)) > _g4_s0 ? (8u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v48)) > _g4_s1 ? (12u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v49)) > _g4_s2 ? (12u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v50)) > _g4_s3 ? (16u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v51)) > _g4_s4 ? (16u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v52)) > _g4_s5 ? (20u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v53)) > _g4_s6 ? (20u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v54)) > _g4_s7 ? (24u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v56)) > _g4_s8 ? (36u + sizeof(_g4_t_v56)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v57)) > _g4_s9 ? (40u + sizeof(_g4_t_v57)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v58)) > _g4_s10 ? (44u + sizeof(_g4_t_v58)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v59)) > _g4_s11 ? (48u + sizeof(_g4_t_v59)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v60)) > _g4_s12 ? (52u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (53u + sizeof(_g4_t_v61)) > _g4_s13 ? (53u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (57u + sizeof(_g4_t_v62)) > _g4_s14 ? (57u + sizeof(_g4_t_v62)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 36u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 40u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 44u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 48u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 52u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 53u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 57u);

  v3 = a1[1];
  v50 = a1;
  if ( v3 != a1[2] )
  {
    v4 = 0;
    if ( v3 != 0 )
    {
      *(uint32_t *)v3 = *(uint32_t *)(v3 - 20);
      v5 = *(volatile int32_t **)(v3 - 16);
      *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(v5);
      if ( v5 != nullptr )
        __sync_add_and_fetch(v5, 1u);
      v6 = *(uint32_t *)(v3 - 11);
      *(uint32_t *)(v3 + 13) = *(uint32_t *)(v3 - 7);
      v7 = *(uint8_t *)(v3 - 12);
      *(uint32_t *)(v3 + 9) = v6;
      *(uint8_t *)(v3 + 8) = v7;
      v4 = v50[1];
    }
    v8 = v4 + 20;
    v50[1] = v8;
    v58 = *a3;
    v59 = (volatile int32_t *)a3[1];
    if ( v59 != nullptr )
    {
      __sync_add_and_fetch(v59, 1u);
      v8 = v50[1];
    }
    v9 = *(int *)((char *)a3 + 13);
    v10 = *(int *)((char *)a3 + 9);
    v60 = *((uint8_t *)a3 + 8);
    v61 = v10;
    v11 = v8 - 40;
    v62 = v9;
    v12 = -858993459 * ((v8 - 40 - a2) >> 2);
    if ( v12 > 0 )
    {
      v13 = v8 - 60;
      v51 = v8 - 60;
      v54 = v8 - 56;
      v52 = v8 - 40;
      v14 = v8 - 36;
      v48 = v12;
      do
      {
        *(uint32_t *)v11 = *(uint32_t *)v13;
        v15 = nullptr;
        v56 = *(volatile int32_t **)(v54 + v13 - v51);
        if ( v56 != nullptr )
        {
          __sync_add_and_fetch(v56, 1u);
          v15 = v56;
        }
        v56 = *(volatile int32_t **)(v11 - v52 + v14);
        *(uint32_t *)(v11 - v52 + v14) = (uint32_t)(uintptr_t)(v15);
        v47 = v14;
        boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy((boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)&v56);
        *(uint8_t *)(v11 + 8) = *(uint8_t *)(v13 + 8);
        v16 = *(uint32_t *)(v13 + 13);
        *(uint32_t *)(v11 + 9) = *(uint32_t *)(v13 + 9);
        *(uint32_t *)(v11 + 13) = v16;
        v13 -= 20;
        v11 -= 20;
        v17 = v48-- == 1;
        v14 = v47;
      }
      while ( !v17 );
    }
    *(uint32_t *)a2 = v58;
    v18 = nullptr;
    v57 = v59;
    if ( v59 != nullptr )
    {
      __sync_add_and_fetch(v59, 1u);
      v18 = v57;
    }
    v19 = *(volatile int32_t **)(a2 + 4);
    *(uint32_t *)(a2 + 4) = (uint32_t)(uintptr_t)(v18);
    v57 = v19;
    boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy((boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)&v57);
    *(uint8_t *)(a2 + 8) = v60;
    v20 = v62;
    *(uint32_t *)(a2 + 9) = v61;
    *(uint32_t *)(a2 + 13) = v20;
    boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy((boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)&v59);
    return;
  }
  v21 = *a1;
  v22 = (v3 - v21) >> 2;
  v23 = -858993459 * v22;
  if ( -858993459 * v22 != 0 )
  {
    v24 = -1717986918 * v22;
    if ( v23 > 2 * v23 || v24 > 0xCCCCCCC )
    {
      v53 = -16;
      v25 = -858993459 * ((a2 - v21) >> 2);
    }
    else
    {
      v53 = 40 * v23;
      v25 = -858993459 * ((a2 - v21) >> 2);
      if ( v24 == 0 )
      {
        v49 = 0;
        v26 = 20;
        v27 = 0;
        goto LABEL_20;
      }
    }
  }
  else
  {
    v53 = 20;
    v25 = -858993459 * ((a2 - v21) >> 2);
  }
  v49 = sub_4EBDC0(v53);
  v26 = v49 + 20;
  v27 = v49;
LABEL_20:
  v28 = v27 + 20 * v25;
  if ( v28 != 0 )
  {
    *(uint32_t *)v28 = *a3;
    v29 = (volatile int32_t *)a3[1];
    *(uint32_t *)(v28 + 4) = (uint32_t)(uintptr_t)(v29);
    if ( v29 != nullptr )
      __sync_add_and_fetch(v29, 1u);
    *(uint8_t *)(v28 + 8) = *((uint8_t *)a3 + 8);
    v30 = *(int *)((char *)a3 + 13);
    *(uint32_t *)(v28 + 9) = *(int *)((char *)a3 + 9);
    *(uint32_t *)(v28 + 13) = v30;
  }
  v31 = v50;
  v32 = *v50;
  if ( a2 != *v50 )
  {
    v33 = v49;
    do
    {
      if ( v33 != 0 )
      {
        *(uint32_t *)v33 = *(uint32_t *)v32;
        v34 = *(volatile int32_t **)(v32 + 4);
        *(uint32_t *)(v33 + 4) = (uint32_t)(uintptr_t)(v34);
        if ( v34 != nullptr )
          __sync_add_and_fetch(v34, 1u);
        *(uint8_t *)(v33 + 8) = *(uint8_t *)(v32 + 8);
        v35 = *(uint32_t *)(v32 + 13);
        *(uint32_t *)(v33 + 9) = *(uint32_t *)(v32 + 9);
        *(uint32_t *)(v33 + 13) = v35;
      }
      v32 += 20;
      v33 += 20;
    }
    while ( a2 != v32 );
    v26 = v33 + 20;
    v31 = v50;
  }
  v36 = v31[1];
  v37 = v26;
  if ( a2 != v36 )
  {
    v38 = v31;
    v39 = a2;
    do
    {
      if ( v37 != 0 )
      {
        *(uint32_t *)v37 = *(uint32_t *)v39;
        v40 = *(volatile int32_t **)(v39 + 4);
        *(uint32_t *)(v37 + 4) = (uint32_t)(uintptr_t)(v40);
        if ( v40 != nullptr )
          __sync_add_and_fetch(v40, 1u);
        *(uint8_t *)(v37 + 8) = *(uint8_t *)(v39 + 8);
        v41 = *(uint32_t *)(v39 + 13);
        *(uint32_t *)(v37 + 9) = *(uint32_t *)(v39 + 9);
        *(uint32_t *)(v37 + 13) = v41;
      }
      v39 += 20;
      v37 += 20;
    }
    while ( v36 != v39 );
    v50 = v38;
    v36 = v38[1];
  }
  v42 = *v50;
  if ( v36 != *v50 )
  {
    v43 = v37;
    v44 = v36;
    v45 = *v50;
    do
    {
      v46 = (boost::intrusive_ptr<glitch::core::detail::SSharedStringHeapEntry::SData::Self> *)(v45 + 4);
      v45 += 20;
      boost::intrusive_ptr_SSharedStringHeapEntry_S_d44db5::Destroy(v46);
    }
    while ( v44 != v45 );
    v37 = v43;
    v42 = *v50;
  }
  if ( v42 != 0 )
    gll_operator_delete_arr(v42);
  *v50 = v49;
  v50[1] = v37;
  v50[2] = v49 + v53;
}

// ----------------------------------------------------------------------------
// Function: sub_CDD810  (binary VA: 0xcdd810)
// Original: sub_CDD810
// ----------------------------------------------------------------------------
uint32_t * sub_CDD810(uint32_t *result, uint32_t *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  result[5] = a2[5];
  result[6] = a2[6];
  result[7] = a2[7];
  result[8] = a2[8];
  result[9] = a2[9];
  result[10] = a2[10];
  result[11] = a2[11];
  result[12] = a2[12];
  result[13] = a2[13];
  result[14] = a2[14];
  result[15] = a2[15];
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CDD870  (binary VA: 0xcdd870)
// Original: sub_CDD870
// ----------------------------------------------------------------------------
volatile int32_t * sub_CDD870(int a1, int a2, int a3, glitch::streaming::SCommandAndRegisterer::Self *a4, uint8_t (*a5)(int, const glitch::streaming::SCommandAndRegisterer::Self *))
{
  int v5;
  volatile int32_t *result;
  int i;
  int v8;
  const glitch::streaming::SCommandAndRegisterer::Self *v9;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v10;
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v14[16];
  typedef volatile int32_t *_g4_t_v15;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v12)) > _g4_s1 ? (40u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v14)) > _g4_s2 ? (60u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v15)) > _g4_s3 ? (76u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);

  v5 = a2;
  if ( a2 < (a3 - 1) / 2 )
  {
    while ( 1 )
    {
      v8 = 2 * (v5 + 1) - 1;
      v9 = (const glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * v8);
      if ( a5(a1 + 40 * (v5 + 1), v9) == 0 )
      {
        v9 = (const glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 40 * (v5 + 1));
        v8 = 2 * (v5 + 1);
      }
      glitch::streaming::SCommandAndRegisterer::opAssign(
        (glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * v5),
        v9);
      if ( v8 >= (a3 - 1) / 2 )
        break;
      v5 = v8;
    }
  }
  else
  {
    v8 = a2;
    v9 = (const glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * a2);
  }
  if ( (a3 & 1) == 0 && v8 == (a3 - 2) / 2 )
  {
    v8 = 2 * v8 + 1;
    v10 = (glitch::streaming::SCommandAndRegisterer::Self *)(v9);
    v9 = (const glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * v8);
    glitch::streaming::SCommandAndRegisterer::opAssign(v10, v9);
  }
  glitch::streaming::SCommandAndRegisterer::Construct((glitch::streaming::SCommandAndRegisterer::Self *)v14, a4);
  if ( v8 > a2 )
  {
    v12 = v8;
    for ( i = (v8 - 1) / 2; ; i = (i - 1) / 2 )
    {
      if ( a5(a1 + 20 * i, (const glitch::streaming::SCommandAndRegisterer::Self *)v14) == 0 )
      {
        v9 = (const glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * v12);
        goto LABEL_11;
      }
      glitch::streaming::SCommandAndRegisterer::opAssign(
        (glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * v12),
        (const glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * i));
      if ( a2 >= i )
        break;
      v12 = i;
    }
    v9 = (const glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * i);
  }
LABEL_11:
  glitch::streaming::SCommandAndRegisterer::opAssign(v9, (const glitch::streaming::SCommandAndRegisterer::Self *)v14);
  result = v15;
  if ( v15 != nullptr )
    return (volatile int32_t *)sub_5459C0(v15);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_CDDA30  (binary VA: 0xcdda30)
// Original: sub_CDDA30
// ----------------------------------------------------------------------------
volatile int32_t * sub_CDDA30(int a1, int a2, int a3, glitch::streaming::SCommandAndRegisterer::Self *a4)
{
  glitch::streaming::SCommandAndRegisterer::Self *v4;
  int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int i;
  unsigned int v13;
  unsigned int v14;
  volatile int32_t *result;
  unsigned int v16;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_s1;
  typedef int _g4_t_v18;
  typedef bool _g4_t_v19;
  typedef glitch::streaming::SCommandAndRegisterer::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef uint8_t _g4_t_s2[8];
  typedef volatile int32_t *_g4_t_v26;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_s1)) > _g4_s0 ? (0u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v18)) > _g4_s1 ? (28u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v19)) > _g4_s2 ? (32u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v21)) > _g4_s3 ? (52u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v22)) > _g4_s4 ? (60u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v23)) > _g4_s5 ? (76u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v24)) > _g4_s6 ? (80u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_s2)) > _g4_s7 ? (84u + sizeof(_g4_t_s2)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v26)) > _g4_s8 ? (92u + sizeof(_g4_t_v26)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);

  v22 = a2;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v5 = a2;
    v4 = (glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * a2);
  }
  else
  {
    while ( 1 )
    {
      v6 = 2 * (a2 + 1);
      v5 = v6 - 1;
      v4 = (glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * (v6 - 1));
      v21 = (glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 40 * (a2 + 1));
      v7 = *(uint32_t *)v21 & 0xFFFFFF;
      v8 = *(uint32_t *)v4 & 0xFFFFFF;
      v19 = v7 < v8;
      if ( v7 == v8 )
      {
        v9 = *((uint32_t *)v21 + 1);
        v10 = *((uint32_t *)v4 + 1);
        v19 = v9 < v10;
        if ( v9 == v10 )
        {
          v18 = a2;
          v11 = memcmp((char *)v21 + 8, (char *)v4 + 8, 8u);
          a2 = v18;
          v19 = v11 < 0;
        }
      }
      if ( !v19 )
      {
        v4 = v21;
        v5 = v6;
      }
      glitch::streaming::SCommandAndRegisterer::opAssign(
        (glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * a2),
        v4);
      if ( v5 >= (a3 - 1) / 2 )
        break;
      a2 = v5;
    }
  }
  if ( (a3 & 1) == 0 && v5 == (a3 - 2) / 2 )
  {
    v5 = 2 * v5 + 1;
    s1 = v4;
    v4 = (glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * v5);
    glitch::streaming::SCommandAndRegisterer::opAssign(s1, v4);
  }
  glitch::streaming::SCommandAndRegisterer::Construct((glitch::streaming::SCommandAndRegisterer::Self *)&v23, a4);
  if ( v5 > v22 )
  {
    for ( i = (v5 - 1) / 2; ; i = (i - 1) / 2 )
    {
      v4 = (glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * i);
      v13 = *(uint32_t *)v4 & 0xFFFFFF;
      LOBYTE(v14) = v13 < (v23 & 0xFFFFFFu);
      if ( v13 == (v23 & 0xFFFFFF) )
      {
        v16 = *((uint32_t *)v4 + 1);
        LOBYTE(v14) = v16 < v24;
        if ( v16 == v24 )
          v14 = (unsigned int)memcmp((char *)v4 + 8, s2, 8u) >> 31;
      }
      if ( (uint8_t)v14 == 0 )
        break;
      glitch::streaming::SCommandAndRegisterer::opAssign(
        (glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * v5),
        v4);
      if ( i <= v22 )
        goto LABEL_19;
      v5 = i;
    }
    v4 = (glitch::streaming::SCommandAndRegisterer::Self *)(a1 + 20 * v5);
  }
LABEL_19:
  glitch::streaming::SCommandAndRegisterer::opAssign(v4, (const glitch::streaming::SCommandAndRegisterer::Self *)&v23);
  result = v26;
  if ( v26 != nullptr )
    return (volatile int32_t *)sub_5459C0(v26);
  return result;
}


