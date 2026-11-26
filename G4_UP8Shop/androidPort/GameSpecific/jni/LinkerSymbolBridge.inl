// Auto-generated armeabi-v7a linker symbol bridge (Group A) via scratch/gen_link_bridge.py
// Resolves signature/mangling mismatches and x86 jmp thunks for symbols already in libGangstar4Core.a / libc++abi.a.

namespace glitch { namespace scene { namespace ISceneNode {
  int getSceneNodeFromType(void *out_ptr, int scene_type) {
    if (out_ptr) *reinterpret_cast<uint32_t *>(out_ptr) = 0;
    return static_cast<int>(reinterpret_cast<uintptr_t>(out_ptr));
  }
  int getSceneNodeFromName(void *out_ptr, const char *name) {
    (void)name;
    if (out_ptr) *reinterpret_cast<uint32_t *>(out_ptr) = 0;
    return static_cast<int>(reinterpret_cast<uintptr_t>(out_ptr));
  }
} } }

namespace glf { namespace Fs {
  void Destroy(void *self) {
    glf::Fs::sFs = 0;
    uint32_t v2 = *(static_cast<uint32_t *>(self) + 79);
    if (v2 != 0) G4_VCALL<void>(reinterpret_cast<void *>(static_cast<uintptr_t>(v2)), 4);
    auto destroy_cow = [](uint32_t s) {
      if (s && reinterpret_cast<uint32_t *>(s - 12) != dword_213B808 &&
          __sync_fetch_and_add(reinterpret_cast<volatile int32_t *>(s - 4), -1) <= 0) {
        g4_std::string::Rep::M_destroy(reinterpret_cast<void *>(s - 12));
      }
    };
    for (int off = 240; off >= 56; off -= 12) {
      destroy_cow(*reinterpret_cast<uint32_t *>(static_cast<char *>(self) + off));
      destroy_cow(*reinterpret_cast<uint32_t *>(static_cast<char *>(self) + off - 4));
    }
    for (int off = 48; off >= 36; off -= 4) {
      destroy_cow(*reinterpret_cast<uint32_t *>(static_cast<char *>(self) + off));
    }
    for (int idx = 8; idx >= 1; --idx) {
      destroy_cow(*(static_cast<uint32_t *>(self) + idx));
    }
  }
} }

extern "C" {
  uint32_t *g4_impl_sub_1777E30(int a1, int a2, int a3, uint32_t *a4) __asm__("_Z11sub_1777E30z");
  uint32_t *g4_impl_sub_1B0C750(uint32_t *a1) __asm__("_Z11sub_1B0C750z");
  int g4_impl_sub_C89D10(char *a1, char *a2, int a3) __asm__("_Z10sub_C89D10z");
  int g4_impl_sub_C8A9E0(int a1, uint32_t *a2, const void **a3) __asm__("_Z10sub_C8A9E0z");
  uint32_t *g4_impl_sub_C8AED0(uint32_t *a1, uint32_t *a2, int a3, int a4) __asm__("_Z10sub_C8AED0z");
}

uint32_t *g4_impl_sub_1777E30(int a1, int a2, int a3, uint32_t *a4) {
  int v6 = a2 + *reinterpret_cast<int8_t *>(a2 + 16);
  int v7 = a3 + *reinterpret_cast<int8_t *>(a3 + 16);
  uint16_t v8 = *reinterpret_cast<uint16_t *>(v7 + 166);
  if (*reinterpret_cast<uint16_t *>(v6 + 166) <= v8) v8 = *reinterpret_cast<uint16_t *>(v6 + 166);
  *reinterpret_cast<uint16_t *>(a1 + 24) = v8;
  uint32_t v12[4] = { static_cast<uint32_t>(a2), static_cast<uint32_t>(a3), 0u, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(a4)) };
  uint8_t s[1024] = {};
  (void)s;
  hkpWorldCallbackUtil::fireContactProcess(*reinterpret_cast<uint32_t *>(a1 + 12), reinterpret_cast<int>(v12));
  if (*reinterpret_cast<uint16_t *>(v6 + 516) != 0)
    hkpEntityCallbackUtil::fireContactProcessInternal(v6, reinterpret_cast<int>(v12));
  if (*reinterpret_cast<uint16_t *>(v7 + 516) != 0)
    hkpEntityCallbackUtil::fireContactProcessInternal(v7, reinterpret_cast<int>(v12));
  return nullptr;
}

uint32_t *g4_impl_sub_1B0C750(uint32_t *a1) { return a1; }

int g4_impl_sub_C89D10(char *a1, char *a2, int a3) { (void)a1; (void)a2; (void)a3; return 0; }

static int g4_cow_strcmp(const void *s1, const void *s2) {
  uint32_t l1 = *reinterpret_cast<const uint32_t *>(static_cast<const char *>(s1) - 12);
  uint32_t l2 = *reinterpret_cast<const uint32_t *>(static_cast<const char *>(s2) - 12);
  uint32_t n = l1 < l2 ? l1 : l2;
  int c = memcmp(s1, s2, n);
  return c != 0 ? c : static_cast<int>(l1) - static_cast<int>(l2);
}

int g4_impl_sub_C8A9E0(int a1, uint32_t *a2, const void **a3) {
  uint32_t header = reinterpret_cast<uintptr_t>(a2 + 1);
  uint32_t cur = a2[2], parent = header;
  bool left = true;
  while (cur != 0) {
    parent = cur;
    int c = g4_cow_strcmp(*a3, *reinterpret_cast<const void **>(cur + 16));
    if (c == 0) {
      *reinterpret_cast<uint32_t *>(a1) = cur;
      *reinterpret_cast<uint8_t *>(a1 + 4) = 0;
      return a1;
    }
    left = (c < 0);
    cur = *reinterpret_cast<uint32_t *>(cur + (left ? 8 : 12));
  }
  uint32_t node = static_cast<uint32_t>(opNew(0x18u));
  g4_std::string::construct_copy(node + 16, a3);
  g4_std::string::construct_copy(node + 20, a3 + 1);
  sub_1904970(left ? 1 : 0, node, parent, header);
  ++a2[5];
  *reinterpret_cast<uint32_t *>(a1) = node;
  *reinterpret_cast<uint8_t *>(a1 + 4) = 1;
  return a1;
}

uint32_t *g4_impl_sub_C8AED0(uint32_t *a1, uint32_t *a2, int a3, int a4) {
  (void)a3;
  uint32_t header = reinterpret_cast<uintptr_t>(a2 + 1);
  uint32_t cur = a2[2], parent = header;
  bool left = true;
  const void *key = *reinterpret_cast<const void **>(a4);
  while (cur != 0) {
    parent = cur;
    int c = g4_cow_strcmp(key, *reinterpret_cast<const void **>(cur + 16));
    if (c == 0) {
      *a1 = cur;
      return a1;
    }
    left = (c < 0);
    cur = *reinterpret_cast<uint32_t *>(cur + (left ? 8 : 12));
  }
  uint32_t node = static_cast<uint32_t>(opNew(0x24u));
  g4_std::string::construct_copy(node + 16, a4);
  g4_std::string::construct_copy(node + 20, a4 + 4);
  *reinterpret_cast<uint32_t *>(node + 24) = *reinterpret_cast<uint32_t *>(a4 + 8);
  *reinterpret_cast<uint32_t *>(node + 28) = *reinterpret_cast<uint32_t *>(a4 + 12);
  *reinterpret_cast<uint32_t *>(node + 32) = *reinterpret_cast<uint32_t *>(a4 + 16);
  sub_1904970(left ? 1 : 0, node, parent, header);
  ++a2[5];
  *a1 = node;
  return a1;
}

// sub_1904970(...) -> sub_1904970(char, unsigned int*, unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_0,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1904970z\n"
  ".type _Z11sub_1904970z, %function\n"
  "_Z11sub_1904970z:\n"
  "  b _Z11sub_1904970cPjS_S_\n"
  ".thumb\n"
);
// sub_19048F0(...) -> sub_19048F0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_1,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19048F0z\n"
  ".type _Z11sub_19048F0z, %function\n"
  "_Z11sub_19048F0z:\n"
  "  b _Z11sub_19048F0Pj\n"
  ".thumb\n"
);
// sub_656770(...) -> sub_656770(int*)
__asm__(
  ".section .text.g4_bridge_2,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_656770z\n"
  ".type _Z10sub_656770z, %function\n"
  "_Z10sub_656770z:\n"
  "  b _Z10sub_656770Pi\n"
  ".thumb\n"
);
// sub_780640(...) -> sub_780640(int)
__asm__(
  ".section .text.g4_bridge_3,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_780640z\n"
  ".type _Z10sub_780640z, %function\n"
  "_Z10sub_780640z:\n"
  "  b _Z10sub_780640i\n"
  ".thumb\n"
);
// sub_80D840(...) -> sub_80D840(unsigned int*)
__asm__(
  ".section .text.g4_bridge_4,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_80D840z\n"
  ".type _Z10sub_80D840z, %function\n"
  "_Z10sub_80D840z:\n"
  "  b _Z10sub_80D840Pj\n"
  ".thumb\n"
);
// sub_80DFF0(...) -> sub_80DFF0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_5,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_80DFF0z\n"
  ".type _Z10sub_80DFF0z, %function\n"
  "_Z10sub_80DFF0z:\n"
  "  b _Z10sub_80DFF0Pj\n"
  ".thumb\n"
);
// sub_A3C1F0(...) -> sub_A3C1F0(unsigned int)
__asm__(
  ".section .text.g4_bridge_6,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_A3C1F0z\n"
  ".type _Z10sub_A3C1F0z, %function\n"
  "_Z10sub_A3C1F0z:\n"
  "  b _Z10sub_A3C1F0j\n"
  ".thumb\n"
);
// sub_6D4B90(...) -> sub_6D4B90(unsigned int*)
__asm__(
  ".section .text.g4_bridge_7,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6D4B90z\n"
  ".type _Z10sub_6D4B90z, %function\n"
  "_Z10sub_6D4B90z:\n"
  "  b _Z10sub_6D4B90Pj\n"
  ".thumb\n"
);
// sub_1901920(...) -> sub_1901920(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_8,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1901920z\n"
  ".type _Z11sub_1901920z, %function\n"
  "_Z11sub_1901920z:\n"
  "  b _Z11sub_1901920Pji\n"
  ".thumb\n"
);
// sub_8078F0(...) -> sub_8078F0(int)
__asm__(
  ".section .text.g4_bridge_9,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8078F0z\n"
  ".type _Z10sub_8078F0z, %function\n"
  "_Z10sub_8078F0z:\n"
  "  b _Z10sub_8078F0i\n"
  ".thumb\n"
);
// sub_1966C10(...) -> sub_1966C10(unsigned int**, int)
__asm__(
  ".section .text.g4_bridge_10,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1966C10z\n"
  ".type _Z11sub_1966C10z, %function\n"
  "_Z11sub_1966C10z:\n"
  "  b _Z11sub_1966C10PPji\n"
  ".thumb\n"
);
// sub_77CEB0(...) -> sub_77CEB0(int)
__asm__(
  ".section .text.g4_bridge_11,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_77CEB0z\n"
  ".type _Z10sub_77CEB0z, %function\n"
  "_Z10sub_77CEB0z:\n"
  "  b _Z10sub_77CEB0i\n"
  ".thumb\n"
);
// explicit map -> _ZN13g4_std_compat11string_findEPjPcjj
__asm__(
  ".section .text.g4_bridge_12,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6g4_std6string4findEPjPcjj\n"
  ".type _ZN6g4_std6string4findEPjPcjj, %function\n"
  "_ZN6g4_std6string4findEPjPcjj:\n"
  "  b _ZN13g4_std_compat11string_findEPjPcjj\n"
  ".thumb\n"
);
// explicit map -> _Z11sub_19048F0Pj
__asm__(
  ".section .text.g4_bridge_13,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1904940z\n"
  ".type _Z11sub_1904940z, %function\n"
  "_Z11sub_1904940z:\n"
  "  b _Z11sub_19048F0Pj\n"
  ".thumb\n"
);
// sub_1900210(...) -> sub_1900210(char*)
__asm__(
  ".section .text.g4_bridge_14,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1900210z\n"
  ".type _Z11sub_1900210z, %function\n"
  "_Z11sub_1900210z:\n"
  "  b _Z11sub_1900210Pc\n"
  ".thumb\n"
);
// sub_7F62A0(...) -> sub_7F62A0(int)
__asm__(
  ".section .text.g4_bridge_15,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7F62A0z\n"
  ".type _Z10sub_7F62A0z, %function\n"
  "_Z10sub_7F62A0z:\n"
  "  b _Z10sub_7F62A0i\n"
  ".thumb\n"
);
// explicit map -> _Z11sub_1904890i
__asm__(
  ".section .text.g4_bridge_16,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19048E0z\n"
  ".type _Z11sub_19048E0z, %function\n"
  "_Z11sub_19048E0z:\n"
  "  b _Z11sub_1904890i\n"
  ".thumb\n"
);
// grapher::ActorManager::Destroy(void*) -> grapher::ActorManager::Destroy(grapher::ActorManager::Self*)
__asm__(
  ".section .text.g4_bridge_17,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN7grapher12ActorManager7DestroyEPv\n"
  ".type _ZN7grapher12ActorManager7DestroyEPv, %function\n"
  "_ZN7grapher12ActorManager7DestroyEPv:\n"
  "  b _ZN7grapher12ActorManager7DestroyEPNS0_4SelfE\n"
  ".thumb\n"
);
// sub_785B80(...) -> sub_785B80(int)
__asm__(
  ".section .text.g4_bridge_18,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_785B80z\n"
  ".type _Z10sub_785B80z, %function\n"
  "_Z10sub_785B80z:\n"
  "  b _Z10sub_785B80i\n"
  ".thumb\n"
);
// sub_1900810(...) -> sub_1900810(unsigned int*)
__asm__(
  ".section .text.g4_bridge_19,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1900810z\n"
  ".type _Z11sub_1900810z, %function\n"
  "_Z11sub_1900810z:\n"
  "  b _Z11sub_1900810Pj\n"
  ".thumb\n"
);
// sub_1903A70(...) -> sub_1903A70(unsigned int*)
__asm__(
  ".section .text.g4_bridge_20,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1903A70z\n"
  ".type _Z11sub_1903A70z, %function\n"
  "_Z11sub_1903A70z:\n"
  "  b _Z11sub_1903A70Pj\n"
  ".thumb\n"
);
// sub_7F9D00(...) -> sub_7F9D00(int)
__asm__(
  ".section .text.g4_bridge_21,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7F9D00z\n"
  ".type _Z10sub_7F9D00z, %function\n"
  "_Z10sub_7F9D00z:\n"
  "  b _Z10sub_7F9D00i\n"
  ".thumb\n"
);
// sub_1902180(...) -> sub_1902180(int volatile**)
__asm__(
  ".section .text.g4_bridge_22,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1902180z\n"
  ".type _Z11sub_1902180z, %function\n"
  "_Z11sub_1902180z:\n"
  "  b _Z11sub_1902180PPVi\n"
  ".thumb\n"
);
// sub_1900B90(...) -> sub_1900B90(unsigned int*)
__asm__(
  ".section .text.g4_bridge_23,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1900B90z\n"
  ".type _Z11sub_1900B90z, %function\n"
  "_Z11sub_1900B90z:\n"
  "  b _Z11sub_1900B90Pj\n"
  ".thumb\n"
);
// sub_1901940(...) -> sub_1901940(int*)
__asm__(
  ".section .text.g4_bridge_24,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1901940z\n"
  ".type _Z11sub_1901940z, %function\n"
  "_Z11sub_1901940z:\n"
  "  b _Z11sub_1901940Pi\n"
  ".thumb\n"
);
// sub_5ABAF0(...) -> sub_5ABAF0(int)
__asm__(
  ".section .text.g4_bridge_25,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_5ABAF0z\n"
  ".type _Z10sub_5ABAF0z, %function\n"
  "_Z10sub_5ABAF0z:\n"
  "  b _Z10sub_5ABAF0i\n"
  ".thumb\n"
);
// sub_178DD90(...) -> sub_178DD90(float*, float*, float)
__asm__(
  ".section .text.g4_bridge_26,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_178DD90z\n"
  ".type _Z11sub_178DD90z, %function\n"
  "_Z11sub_178DD90z:\n"
  "  b _Z11sub_178DD90PfS_f\n"
  ".thumb\n"
);
// sub_901820(...) -> sub_901820(int)
__asm__(
  ".section .text.g4_bridge_27,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_901820z\n"
  ".type _Z10sub_901820z, %function\n"
  "_Z10sub_901820z:\n"
  "  b _Z10sub_901820i\n"
  ".thumb\n"
);
// sub_84DF80(...) -> sub_84DF80(unsigned int*)
__asm__(
  ".section .text.g4_bridge_28,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_84DF80z\n"
  ".type _Z10sub_84DF80z, %function\n"
  "_Z10sub_84DF80z:\n"
  "  b _Z10sub_84DF80Pj\n"
  ".thumb\n"
);
// sub_ADA1E0(...) -> sub_ADA1E0(int)
__asm__(
  ".section .text.g4_bridge_29,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_ADA1E0z\n"
  ".type _Z10sub_ADA1E0z, %function\n"
  "_Z10sub_ADA1E0z:\n"
  "  b _Z10sub_ADA1E0i\n"
  ".thumb\n"
);
// sub_19018A0(...) -> sub_19018A0(int, int, int)
__asm__(
  ".section .text.g4_bridge_30,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19018A0z\n"
  ".type _Z11sub_19018A0z, %function\n"
  "_Z11sub_19018A0z:\n"
  "  b _Z11sub_19018A0iii\n"
  ".thumb\n"
);
// sub_992750(...) -> sub_992750(int)
__asm__(
  ".section .text.g4_bridge_31,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_992750z\n"
  ".type _Z10sub_992750z, %function\n"
  "_Z10sub_992750z:\n"
  "  b _Z10sub_992750i\n"
  ".thumb\n"
);
// sub_5D43D0(...) -> sub_5D43D0(int)
__asm__(
  ".section .text.g4_bridge_32,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_5D43D0z\n"
  ".type _Z10sub_5D43D0z, %function\n"
  "_Z10sub_5D43D0z:\n"
  "  b _Z10sub_5D43D0i\n"
  ".thumb\n"
);
// sub_1904AE0(...) -> sub_1904AE0(unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_33,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1904AE0z\n"
  ".type _Z11sub_1904AE0z, %function\n"
  "_Z11sub_1904AE0z:\n"
  "  b _Z11sub_1904AE0PjS_\n"
  ".thumb\n"
);
// explicit map -> _Z11sub_197AD10i
__asm__(
  ".section .text.g4_bridge_34,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19799D0z\n"
  ".type _Z11sub_19799D0z, %function\n"
  "_Z11sub_19799D0z:\n"
  "  b _Z11sub_197AD10i\n"
  ".thumb\n"
);
// sub_1960EF0(...) -> sub_1960EF0(Json::Value::Self*, int)
__asm__(
  ".section .text.g4_bridge_35,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1960EF0z\n"
  ".type _Z11sub_1960EF0z, %function\n"
  "_Z11sub_1960EF0z:\n"
  "  b _Z11sub_1960EF0PN4Json5Value4SelfEi\n"
  ".thumb\n"
);
// sub_16F57D0(...) -> sub_16F57D0(int, hkMemoryAllocator::Self*, long double, char)
__asm__(
  ".section .text.g4_bridge_36,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_16F57D0z\n"
  ".type _Z11sub_16F57D0z, %function\n"
  "_Z11sub_16F57D0z:\n"
  "  b _Z11sub_16F57D0iPN17hkMemoryAllocator4SelfEec\n"
  ".thumb\n"
);
// sub_16F52C0(...) -> sub_16F52C0(hkpConvexVerticesShape::Self*, char, hkVector4f::Self const*, int)
__asm__(
  ".section .text.g4_bridge_37,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_16F52C0z\n"
  ".type _Z11sub_16F52C0z, %function\n"
  "_Z11sub_16F52C0z:\n"
  "  b _Z11sub_16F52C0PN22hkpConvexVerticesShape4SelfEcPKN10hkVector4f4SelfEi\n"
  ".thumb\n"
);
// sub_1904890(...) -> sub_1904890(int)
__asm__(
  ".section .text.g4_bridge_38,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1904890z\n"
  ".type _Z11sub_1904890z, %function\n"
  "_Z11sub_1904890z:\n"
  "  b _Z11sub_1904890i\n"
  ".thumb\n"
);
// sub_16F4B90(...) -> sub_16F4B90(hkpConvexVerticesShape::Self*, int, float*)
__asm__(
  ".section .text.g4_bridge_39,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_16F4B90z\n"
  ".type _Z11sub_16F4B90z, %function\n"
  "_Z11sub_16F4B90z:\n"
  "  b _Z11sub_16F4B90PN22hkpConvexVerticesShape4SelfEiPf\n"
  ".thumb\n"
);
// sub_A732E0(...) -> sub_A732E0(int)
__asm__(
  ".section .text.g4_bridge_40,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_A732E0z\n"
  ".type _Z10sub_A732E0z, %function\n"
  "_Z10sub_A732E0z:\n"
  "  b _Z10sub_A732E0i\n"
  ".thumb\n"
);
// sub_C97480(...) -> sub_C97480(unsigned int*, char*, int)
__asm__(
  ".section .text.g4_bridge_41,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_C97480z\n"
  ".type _Z10sub_C97480z, %function\n"
  "_Z10sub_C97480z:\n"
  "  b _Z10sub_C97480PjPci\n"
  ".thumb\n"
);
// sub_76F420(...) -> sub_76F420(void**)
__asm__(
  ".section .text.g4_bridge_42,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_76F420z\n"
  ".type _Z10sub_76F420z, %function\n"
  "_Z10sub_76F420z:\n"
  "  b _Z10sub_76F420PPv\n"
  ".thumb\n"
);
// sub_C97330(...) -> sub_C97330(int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_43,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_C97330z\n"
  ".type _Z10sub_C97330z, %function\n"
  "_Z10sub_C97330z:\n"
  "  b _Z10sub_C97330iPj\n"
  ".thumb\n"
);
// sub_992DE0(...) -> sub_992DE0(int)
__asm__(
  ".section .text.g4_bridge_44,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_992DE0z\n"
  ".type _Z10sub_992DE0z, %function\n"
  "_Z10sub_992DE0z:\n"
  "  b _Z10sub_992DE0i\n"
  ".thumb\n"
);
// sub_ADAF40(...) -> sub_ADAF40(int)
__asm__(
  ".section .text.g4_bridge_45,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_ADAF40z\n"
  ".type _Z10sub_ADAF40z, %function\n"
  "_Z10sub_ADAF40z:\n"
  "  b _Z10sub_ADAF40i\n"
  ".thumb\n"
);
// sub_5785F0(...) -> sub_5785F0(int)
__asm__(
  ".section .text.g4_bridge_46,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_5785F0z\n"
  ".type _Z10sub_5785F0z, %function\n"
  "_Z10sub_5785F0z:\n"
  "  b _Z10sub_5785F0i\n"
  ".thumb\n"
);
// glitch::core::detail::SIDedCollection_video_SShaderParameterDe_d5840b::CEntry::setName(glitch::core::detail::S
__asm__(
  ".section .text.g4_bridge_47,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6glitch4core6detail47SIDedCollection_video_SShaderParameterDe_d5840b6CEntry7setNameEPNS1_15SIDedCollectionINS_5video19SShaderParameterDef4SelfEtLy0ENS5_6detail30globalmaterialparametermanager10SPropeties4SelfENS9_12SValueTraitsELy1EE6CEntryEPKcb\n"
  ".type _ZN6glitch4core6detail47SIDedCollection_video_SShaderParameterDe_d5840b6CEntry7setNameEPNS1_15SIDedCollectionINS_5video19SShaderParameterDef4SelfEtLy0ENS5_6detail30globalmaterialparametermanager10SPropeties4SelfENS9_12SValueTraitsELy1EE6CEntryEPKcb, %function\n"
  "_ZN6glitch4core6detail47SIDedCollection_video_SShaderParameterDe_d5840b6CEntry7setNameEPNS1_15SIDedCollectionINS_5video19SShaderParameterDef4SelfEtLy0ENS5_6detail30globalmaterialparametermanager10SPropeties4SelfENS9_12SValueTraitsELy1EE6CEntryEPKcb:\n"
  "  b _ZN6glitch4core6detail47SIDedCollection_video_SShaderParameterDe_d5840b6CEntry7setNameEPNS3_4SelfEPKcb\n"
  ".thumb\n"
);
// glitch::collada::CColladaDatabase::Destroy(void*) -> glitch::collada::CColladaDatabase::Destroy(int volatile**
__asm__(
  ".section .text.g4_bridge_48,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6glitch7collada16CColladaDatabase7DestroyEPv\n"
  ".type _ZN6glitch7collada16CColladaDatabase7DestroyEPv, %function\n"
  "_ZN6glitch7collada16CColladaDatabase7DestroyEPv:\n"
  "  b _ZN6glitch7collada16CColladaDatabase7DestroyEPPPVi\n"
  ".thumb\n"
);
// sub_529EE0(...) -> sub_529EE0(int)
__asm__(
  ".section .text.g4_bridge_49,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_529EE0z\n"
  ".type _Z10sub_529EE0z, %function\n"
  "_Z10sub_529EE0z:\n"
  "  b _Z10sub_529EE0i\n"
  ".thumb\n"
);
// sub_77E4C0(...) -> sub_77E4C0(int)
__asm__(
  ".section .text.g4_bridge_50,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_77E4C0z\n"
  ".type _Z10sub_77E4C0z, %function\n"
  "_Z10sub_77E4C0z:\n"
  "  b _Z10sub_77E4C0i\n"
  ".thumb\n"
);
// sub_6467F0(...) -> sub_6467F0(int)
__asm__(
  ".section .text.g4_bridge_51,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6467F0z\n"
  ".type _Z10sub_6467F0z, %function\n"
  "_Z10sub_6467F0z:\n"
  "  b _Z10sub_6467F0i\n"
  ".thumb\n"
);
// sub_5BEE10(...) -> sub_5BEE10(int)
__asm__(
  ".section .text.g4_bridge_52,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_5BEE10z\n"
  ".type _Z10sub_5BEE10z, %function\n"
  "_Z10sub_5BEE10z:\n"
  "  b _Z10sub_5BEE10i\n"
  ".thumb\n"
);
// sub_1826A80(...) -> sub_1826A80(__m128*, float*, float, __m128*)
__asm__(
  ".section .text.g4_bridge_53,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1826A80z\n"
  ".type _Z11sub_1826A80z, %function\n"
  "_Z11sub_1826A80z:\n"
  "  b _Z11sub_1826A80P6__m128PffS0_\n"
  ".thumb\n"
);
// sub_835490(...) -> sub_835490(int)
__asm__(
  ".section .text.g4_bridge_54,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_835490z\n"
  ".type _Z10sub_835490z, %function\n"
  "_Z10sub_835490z:\n"
  "  b _Z10sub_835490i\n"
  ".thumb\n"
);
// sub_655CB0(...) -> sub_655CB0()
__asm__(
  ".section .text.g4_bridge_55,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_655CB0z\n"
  ".type _Z10sub_655CB0z, %function\n"
  "_Z10sub_655CB0z:\n"
  "  b _Z10sub_655CB0v\n"
  ".thumb\n"
);
// sub_77D570(...) -> sub_77D570(int)
__asm__(
  ".section .text.g4_bridge_56,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_77D570z\n"
  ".type _Z10sub_77D570z, %function\n"
  "_Z10sub_77D570z:\n"
  "  b _Z10sub_77D570i\n"
  ".thumb\n"
);
// sub_EA1C90(...) -> sub_EA1C90(unsigned int*, unsigned int*, char const**, int, int*, unsigned int*, unsigned i
__asm__(
  ".section .text.g4_bridge_57,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA1C90z\n"
  ".type _Z10sub_EA1C90z, %function\n"
  "_Z10sub_EA1C90z:\n"
  "  b _Z10sub_EA1C90PjS_PPKciPiS_S_\n"
  ".thumb\n"
);
// sub_EA1580(...) -> sub_EA1580(int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_58,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA1580z\n"
  ".type _Z10sub_EA1580z, %function\n"
  "_Z10sub_EA1580z:\n"
  "  b _Z10sub_EA1580PiPj\n"
  ".thumb\n"
);
// sub_A731A0(...) -> sub_A731A0(int)
__asm__(
  ".section .text.g4_bridge_59,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_A731A0z\n"
  ".type _Z10sub_A731A0z, %function\n"
  "_Z10sub_A731A0z:\n"
  "  b _Z10sub_A731A0i\n"
  ".thumb\n"
);
// sub_77D630(...) -> sub_77D630(int)
__asm__(
  ".section .text.g4_bridge_60,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_77D630z\n"
  ".type _Z10sub_77D630z, %function\n"
  "_Z10sub_77D630z:\n"
  "  b _Z10sub_77D630i\n"
  ".thumb\n"
);
// sub_1826470(...) -> sub_1826470(float*, int*, hkpRigidBody::Self*, float*)
__asm__(
  ".section .text.g4_bridge_61,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1826470z\n"
  ".type _Z11sub_1826470z, %function\n"
  "_Z11sub_1826470z:\n"
  "  b _Z11sub_1826470PfPiPN12hkpRigidBody4SelfES_\n"
  ".thumb\n"
);
// sub_574C60(...) -> sub_574C60(int)
__asm__(
  ".section .text.g4_bridge_62,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_574C60z\n"
  ".type _Z10sub_574C60z, %function\n"
  "_Z10sub_574C60z:\n"
  "  b _Z10sub_574C60i\n"
  ".thumb\n"
);
// sub_6D4BF0(...) -> sub_6D4BF0(int)
__asm__(
  ".section .text.g4_bridge_63,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6D4BF0z\n"
  ".type _Z10sub_6D4BF0z, %function\n"
  "_Z10sub_6D4BF0z:\n"
  "  b _Z10sub_6D4BF0i\n"
  ".thumb\n"
);
// sub_9657F0(...) -> sub_9657F0(int)
__asm__(
  ".section .text.g4_bridge_64,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_9657F0z\n"
  ".type _Z10sub_9657F0z, %function\n"
  "_Z10sub_9657F0z:\n"
  "  b _Z10sub_9657F0i\n"
  ".thumb\n"
);
// sub_7B7D00(...) -> sub_7B7D00(int)
__asm__(
  ".section .text.g4_bridge_65,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7B7D00z\n"
  ".type _Z10sub_7B7D00z, %function\n"
  "_Z10sub_7B7D00z:\n"
  "  b _Z10sub_7B7D00i\n"
  ".thumb\n"
);
// sub_542BE0(...) -> sub_542BE0(int)
__asm__(
  ".section .text.g4_bridge_66,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_542BE0z\n"
  ".type _Z10sub_542BE0z, %function\n"
  "_Z10sub_542BE0z:\n"
  "  b _Z10sub_542BE0i\n"
  ".thumb\n"
);
// sub_1891BB0(...) -> sub_1891BB0(int, int, int)
__asm__(
  ".section .text.g4_bridge_67,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1891BB0z\n"
  ".type _Z11sub_1891BB0z, %function\n"
  "_Z11sub_1891BB0z:\n"
  "  b _Z11sub_1891BB0iii\n"
  ".thumb\n"
);
// sub_18FFC70(...) -> sub_18FFC70(unsigned char*)
__asm__(
  ".section .text.g4_bridge_68,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18FFC70z\n"
  ".type _Z11sub_18FFC70z, %function\n"
  "_Z11sub_18FFC70z:\n"
  "  b _Z11sub_18FFC70Ph\n"
  ".thumb\n"
);
// sub_187EB20(...) -> sub_187EB20(unsigned char*, int*, int)
__asm__(
  ".section .text.g4_bridge_69,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_187EB20z\n"
  ".type _Z11sub_187EB20z, %function\n"
  "_Z11sub_187EB20z:\n"
  "  b _Z11sub_187EB20PhPii\n"
  ".thumb\n"
);
// sub_1885180(...) -> sub_1885180(int*, int*, unsigned int, unsigned int, int)
__asm__(
  ".section .text.g4_bridge_70,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1885180z\n"
  ".type _Z11sub_1885180z, %function\n"
  "_Z11sub_1885180z:\n"
  "  b _Z11sub_1885180PiS_jji\n"
  ".thumb\n"
);
// sub_1556FA0(...) -> sub_1556FA0(int, int, float)
__asm__(
  ".section .text.g4_bridge_71,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1556FA0z\n"
  ".type _Z11sub_1556FA0z, %function\n"
  "_Z11sub_1556FA0z:\n"
  "  b _Z11sub_1556FA0iif\n"
  ".thumb\n"
);
// sub_1891740(...) -> sub_1891740(unsigned int, unsigned char*, hkMapBase<unsigned long, unsigned long, hkMapOpe
__asm__(
  ".section .text.g4_bridge_72,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1891740z\n"
  ".type _Z11sub_1891740z, %function\n"
  "_Z11sub_1891740z:\n"
  "  b _Z11sub_1891740jPhP9hkMapBaseImm15hkMapOperationsImEEi\n"
  ".thumb\n"
);
// sub_1557E90(...) -> sub_1557E90(unsigned int*, int, float, int, int)
__asm__(
  ".section .text.g4_bridge_73,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1557E90z\n"
  ".type _Z11sub_1557E90z, %function\n"
  "_Z11sub_1557E90z:\n"
  "  b _Z11sub_1557E90Pjifii\n"
  ".thumb\n"
);
// sub_85A590(...) -> sub_85A590(unsigned int*)
__asm__(
  ".section .text.g4_bridge_74,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_85A590z\n"
  ".type _Z10sub_85A590z, %function\n"
  "_Z10sub_85A590z:\n"
  "  b _Z10sub_85A590Pj\n"
  ".thumb\n"
);
// sub_15576D0(...) -> sub_15576D0(unsigned int*, double*, double)
__asm__(
  ".section .text.g4_bridge_75,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_15576D0z\n"
  ".type _Z11sub_15576D0z, %function\n"
  "_Z11sub_15576D0z:\n"
  "  b _Z11sub_15576D0PjPdd\n"
  ".thumb\n"
);
// sub_15572B0(...) -> sub_15572B0(unsigned int*, double, double)
__asm__(
  ".section .text.g4_bridge_76,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_15572B0z\n"
  ".type _Z11sub_15572B0z, %function\n"
  "_Z11sub_15572B0z:\n"
  "  b _Z11sub_15572B0Pjdd\n"
  ".thumb\n"
);
// sub_CA5410(...) -> sub_CA5410(int, char*, unsigned int, short*)
__asm__(
  ".section .text.g4_bridge_77,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_CA5410z\n"
  ".type _Z10sub_CA5410z, %function\n"
  "_Z10sub_CA5410z:\n"
  "  b _Z10sub_CA5410iPcjPs\n"
  ".thumb\n"
);
// sub_1558070(...) -> sub_1558070(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_78,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1558070z\n"
  ".type _Z11sub_1558070z, %function\n"
  "_Z11sub_1558070z:\n"
  "  b _Z11sub_1558070Pji\n"
  ".thumb\n"
);
// sub_BBE680(...) -> sub_BBE680(int)
__asm__(
  ".section .text.g4_bridge_79,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_BBE680z\n"
  ".type _Z10sub_BBE680z, %function\n"
  "_Z10sub_BBE680z:\n"
  "  b _Z10sub_BBE680i\n"
  ".thumb\n"
);
// sub_ACDC20(...) -> sub_ACDC20(unsigned int*)
__asm__(
  ".section .text.g4_bridge_80,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_ACDC20z\n"
  ".type _Z10sub_ACDC20z, %function\n"
  "_Z10sub_ACDC20z:\n"
  "  b _Z10sub_ACDC20Pj\n"
  ".thumb\n"
);
// sub_85A8D0(...) -> sub_85A8D0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_81,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_85A8D0z\n"
  ".type _Z10sub_85A8D0z, %function\n"
  "_Z10sub_85A8D0z:\n"
  "  b _Z10sub_85A8D0Pj\n"
  ".thumb\n"
);
// sub_1556B80(...) -> sub_1556B80(hkOstream::Self*, int, float, int)
__asm__(
  ".section .text.g4_bridge_82,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1556B80z\n"
  ".type _Z11sub_1556B80z, %function\n"
  "_Z11sub_1556B80z:\n"
  "  b _Z11sub_1556B80PN9hkOstream4SelfEifi\n"
  ".thumb\n"
);
// sub_AD4410(...) -> sub_AD4410(int)
__asm__(
  ".section .text.g4_bridge_83,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_AD4410z\n"
  ".type _Z10sub_AD4410z, %function\n"
  "_Z10sub_AD4410z:\n"
  "  b _Z10sub_AD4410i\n"
  ".thumb\n"
);
// sub_7BEFE0(...) -> sub_7BEFE0(int)
__asm__(
  ".section .text.g4_bridge_84,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7BEFE0z\n"
  ".type _Z10sub_7BEFE0z, %function\n"
  "_Z10sub_7BEFE0z:\n"
  "  b _Z10sub_7BEFE0i\n"
  ".thumb\n"
);
// sub_85AF00(...) -> sub_85AF00(unsigned int*)
__asm__(
  ".section .text.g4_bridge_85,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_85AF00z\n"
  ".type _Z10sub_85AF00z, %function\n"
  "_Z10sub_85AF00z:\n"
  "  b _Z10sub_85AF00Pj\n"
  ".thumb\n"
);
// sub_5E79C0(...) -> sub_5E79C0(int)
__asm__(
  ".section .text.g4_bridge_86,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_5E79C0z\n"
  ".type _Z10sub_5E79C0z, %function\n"
  "_Z10sub_5E79C0z:\n"
  "  b _Z10sub_5E79C0i\n"
  ".thumb\n"
);
// sub_C9DDD0(...) -> sub_C9DDD0(unsigned int*, glf::fs2::Path::Self const*, glf::fs2::Path::Self*, char*)
__asm__(
  ".section .text.g4_bridge_87,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_C9DDD0z\n"
  ".type _Z10sub_C9DDD0z, %function\n"
  "_Z10sub_C9DDD0z:\n"
  "  b _Z10sub_C9DDD0PjPKN3glf3fs24Path4SelfEPS3_Pc\n"
  ".thumb\n"
);
// sub_4DE3D0(...) -> sub_4DE3D0(glitch::video::CNullDriver::Self*)
__asm__(
  ".section .text.g4_bridge_88,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_4DE3D0z\n"
  ".type _Z10sub_4DE3D0z, %function\n"
  "_Z10sub_4DE3D0z:\n"
  "  b _Z10sub_4DE3D0PN6glitch5video11CNullDriver4SelfE\n"
  ".thumb\n"
);
// sub_C97100(...) -> sub_C97100(int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_89,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_C97100z\n"
  ".type _Z10sub_C97100z, %function\n"
  "_Z10sub_C97100z:\n"
  "  b _Z10sub_C97100iPj\n"
  ".thumb\n"
);
// sub_C89770(...) -> sub_C89770(int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_90,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_C89770z\n"
  ".type _Z10sub_C89770z, %function\n"
  "_Z10sub_C89770z:\n"
  "  b _Z10sub_C89770iPj\n"
  ".thumb\n"
);
// sub_C96EE0(...) -> sub_C96EE0(glf::fs2::Path::Self*, glf::fs2::Path::Self*, glf::fs2::Path::Self*)
__asm__(
  ".section .text.g4_bridge_91,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_C96EE0z\n"
  ".type _Z10sub_C96EE0z, %function\n"
  "_Z10sub_C96EE0z:\n"
  "  b _Z10sub_C96EE0PN3glf3fs24Path4SelfES3_S3_\n"
  ".thumb\n"
);
// sub_1901820(...) -> sub_1901820(unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_92,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1901820z\n"
  ".type _Z11sub_1901820z, %function\n"
  "_Z11sub_1901820z:\n"
  "  b _Z11sub_1901820PjS_\n"
  ".thumb\n"
);
// sub_190A6D0(...) -> sub_190A6D0(int)
__asm__(
  ".section .text.g4_bridge_93,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190A6D0z\n"
  ".type _Z11sub_190A6D0z, %function\n"
  "_Z11sub_190A6D0z:\n"
  "  b _Z11sub_190A6D0i\n"
  ".thumb\n"
);
// sub_190AE40(...) -> sub_190AE40(int, char*, int)
__asm__(
  ".section .text.g4_bridge_94,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190AE40z\n"
  ".type _Z11sub_190AE40z, %function\n"
  "_Z11sub_190AE40z:\n"
  "  b _Z11sub_190AE40iPci\n"
  ".thumb\n"
);
// sub_19056D0(...) -> sub_19056D0(unsigned int*, int*)
__asm__(
  ".section .text.g4_bridge_95,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19056D0z\n"
  ".type _Z11sub_19056D0z, %function\n"
  "_Z11sub_19056D0z:\n"
  "  b _Z11sub_19056D0PjPi\n"
  ".thumb\n"
);
// sub_1905090(...) -> sub_1905090(unsigned int*, int, int)
__asm__(
  ".section .text.g4_bridge_96,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1905090z\n"
  ".type _Z11sub_1905090z, %function\n"
  "_Z11sub_1905090z:\n"
  "  b _Z11sub_1905090Pjii\n"
  ".thumb\n"
);
// sub_190AC60(...) -> sub_190AC60(int)
__asm__(
  ".section .text.g4_bridge_97,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190AC60z\n"
  ".type _Z11sub_190AC60z, %function\n"
  "_Z11sub_190AC60z:\n"
  "  b _Z11sub_190AC60i\n"
  ".thumb\n"
);
// explicit map -> _Z11sub_1908000iii
__asm__(
  ".section .text.g4_bridge_98,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1908070z\n"
  ".type _Z11sub_1908070z, %function\n"
  "_Z11sub_1908070z:\n"
  "  mov r2, r0\n"
  "  b _Z11sub_1908000iii\n"
  ".thumb\n"
);
// sub_1907FD0(...) -> sub_1907FD0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_99,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1907FD0z\n"
  ".type _Z11sub_1907FD0z, %function\n"
  "_Z11sub_1907FD0z:\n"
  "  b _Z11sub_1907FD0Pj\n"
  ".thumb\n"
);
// explicit map -> _ZN13g4_std_compat13ostream_writeEPiii
__asm__(
  ".section .text.g4_bridge_100,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6g4_std7ostream5writeEPiii\n"
  ".type _ZN6g4_std7ostream5writeEPiii, %function\n"
  "_ZN6g4_std7ostream5writeEPiii:\n"
  "  b _ZN13g4_std_compat13ostream_writeEPiii\n"
  ".thumb\n"
);
// sub_8E88B0(...) -> sub_8E88B0(int)
__asm__(
  ".section .text.g4_bridge_101,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8E88B0z\n"
  ".type _Z10sub_8E88B0z, %function\n"
  "_Z10sub_8E88B0z:\n"
  "  b _Z10sub_8E88B0i\n"
  ".thumb\n"
);
// sub_9AC0D0(...) -> sub_9AC0D0(int)
__asm__(
  ".section .text.g4_bridge_102,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_9AC0D0z\n"
  ".type _Z10sub_9AC0D0z, %function\n"
  "_Z10sub_9AC0D0z:\n"
  "  b _Z10sub_9AC0D0i\n"
  ".thumb\n"
);
// sub_789DF0(...) -> sub_789DF0(int)
__asm__(
  ".section .text.g4_bridge_103,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_789DF0z\n"
  ".type _Z10sub_789DF0z, %function\n"
  "_Z10sub_789DF0z:\n"
  "  b _Z10sub_789DF0i\n"
  ".thumb\n"
);
// sub_123A860(...) -> sub_123A860(float*, unsigned int)
__asm__(
  ".section .text.g4_bridge_104,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_123A860z\n"
  ".type _Z11sub_123A860z, %function\n"
  "_Z11sub_123A860z:\n"
  "  b _Z11sub_123A860Pfj\n"
  ".thumb\n"
);
// glitch::scene::ISceneNode::Destroy(void*) -> explicit ISceneNode::Destroy(Self*)
__asm__(
  ".section .text.g4_bridge_105,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6glitch5scene10ISceneNode7DestroyEPv\n"
  ".type _ZN6glitch5scene10ISceneNode7DestroyEPv, %function\n"
  "_ZN6glitch5scene10ISceneNode7DestroyEPv:\n"
  "  b _ZN6glitch5scene10ISceneNode7DestroyEPNS1_4SelfE\n"
  ".thumb\n"
);
// sub_CA5130(...) -> sub_CA5130(glf::Self*, glf::Self*, unsigned int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_106,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_CA5130z\n"
  ".type _Z10sub_CA5130z, %function\n"
  "_Z10sub_CA5130z:\n"
  "  b _Z10sub_CA5130PN3glf4SelfES1_jPj\n"
  ".thumb\n"
);
// sub_8136E0(...) -> sub_8136E0(int)
__asm__(
  ".section .text.g4_bridge_107,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8136E0z\n"
  ".type _Z10sub_8136E0z, %function\n"
  "_Z10sub_8136E0z:\n"
  "  b _Z10sub_8136E0i\n"
  ".thumb\n"
);
// sub_CA58C0(...) -> sub_CA58C0(int, glf::Self*, unsigned int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_108,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_CA58C0z\n"
  ".type _Z10sub_CA58C0z, %function\n"
  "_Z10sub_CA58C0z:\n"
  "  b _Z10sub_CA58C0iPN3glf4SelfEjPj\n"
  ".thumb\n"
);
// sub_7FF910(...) -> sub_7FF910(unsigned int*, int, char*, int, char)
__asm__(
  ".section .text.g4_bridge_109,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7FF910z\n"
  ".type _Z10sub_7FF910z, %function\n"
  "_Z10sub_7FF910z:\n"
  "  b _Z10sub_7FF910PjiPcic\n"
  ".thumb\n"
);
// sub_5C01A0(...) -> sub_5C01A0(int)
__asm__(
  ".section .text.g4_bridge_110,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_5C01A0z\n"
  ".type _Z10sub_5C01A0z, %function\n"
  "_Z10sub_5C01A0z:\n"
  "  b _Z10sub_5C01A0i\n"
  ".thumb\n"
);
// sub_6FCB10(...) -> sub_6FCB10(int)
__asm__(
  ".section .text.g4_bridge_111,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6FCB10z\n"
  ".type _Z10sub_6FCB10z, %function\n"
  "_Z10sub_6FCB10z:\n"
  "  b _Z10sub_6FCB10i\n"
  ".thumb\n"
);
// sub_19042E0(...) -> sub_19042E0(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_112,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19042E0z\n"
  ".type _Z11sub_19042E0z, %function\n"
  "_Z11sub_19042E0z:\n"
  "  b _Z11sub_19042E0Pji\n"
  ".thumb\n"
);
// sub_18FFFD0(...) -> sub_18FFFD0(char*)
__asm__(
  ".section .text.g4_bridge_113,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18FFFD0z\n"
  ".type _Z11sub_18FFFD0z, %function\n"
  "_Z11sub_18FFFD0z:\n"
  "  b _Z11sub_18FFFD0Pc\n"
  ".thumb\n"
);
// sub_12AA290(...) -> sub_12AA290(int, unsigned int, int, char*)
__asm__(
  ".section .text.g4_bridge_114,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AA290z\n"
  ".type _Z11sub_12AA290z, %function\n"
  "_Z11sub_12AA290z:\n"
  "  b _Z11sub_12AA290ijiPc\n"
  ".thumb\n"
);
// sub_4EEA60(...) -> sub_4EEA60(int)
__asm__(
  ".section .text.g4_bridge_115,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_4EEA60z\n"
  ".type _Z10sub_4EEA60z, %function\n"
  "_Z10sub_4EEA60z:\n"
  "  b _Z10sub_4EEA60i\n"
  ".thumb\n"
);
// sub_CC9B60(...) -> sub_CC9B60(void**, int volatile**, int volatile**)
__asm__(
  ".section .text.g4_bridge_116,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_CC9B60z\n"
  ".type _Z10sub_CC9B60z, %function\n"
  "_Z10sub_CC9B60z:\n"
  "  b _Z10sub_CC9B60PPvPPViS3_\n"
  ".thumb\n"
);
// sub_7FC7A0(...) -> sub_7FC7A0(int, int, char*)
__asm__(
  ".section .text.g4_bridge_117,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7FC7A0z\n"
  ".type _Z10sub_7FC7A0z, %function\n"
  "_Z10sub_7FC7A0z:\n"
  "  b _Z10sub_7FC7A0iiPc\n"
  ".thumb\n"
);
// sub_7FC820(...) -> sub_7FC820(int, int, char*)
__asm__(
  ".section .text.g4_bridge_118,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7FC820z\n"
  ".type _Z10sub_7FC820z, %function\n"
  "_Z10sub_7FC820z:\n"
  "  b _Z10sub_7FC820iiPc\n"
  ".thumb\n"
);
// sub_7FC8A0(...) -> sub_7FC8A0(int, int, char*)
__asm__(
  ".section .text.g4_bridge_119,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7FC8A0z\n"
  ".type _Z10sub_7FC8A0z, %function\n"
  "_Z10sub_7FC8A0z:\n"
  "  b _Z10sub_7FC8A0iiPc\n"
  ".thumb\n"
);
// sub_12C27C0(...) -> sub_12C27C0(int, int, int, unsigned int*, int, unsigned int, int, int, unsigned int*, int,
__asm__(
  ".section .text.g4_bridge_120,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C27C0z\n"
  ".type _Z11sub_12C27C0z, %function\n"
  "_Z11sub_12C27C0z:\n"
  "  b _Z11sub_12C27C0iiiPjijiiS_iS_Piiiiiiiiiiiiiiiiiiiiiiiijiiiii\n"
  ".thumb\n"
);
// sub_800FA0(...) -> sub_800FA0(int, int, char*, int, char)
__asm__(
  ".section .text.g4_bridge_121,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_800FA0z\n"
  ".type _Z10sub_800FA0z, %function\n"
  "_Z10sub_800FA0z:\n"
  "  b _Z10sub_800FA0iiPcic\n"
  ".thumb\n"
);
// sub_7FFA70(...) -> sub_7FFA70(unsigned int*, int, char*)
__asm__(
  ".section .text.g4_bridge_122,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7FFA70z\n"
  ".type _Z10sub_7FFA70z, %function\n"
  "_Z10sub_7FFA70z:\n"
  "  b _Z10sub_7FFA70PjiPc\n"
  ".thumb\n"
);
// sub_7FF7F0(...) -> sub_7FF7F0(unsigned int*, int, char*, int)
__asm__(
  ".section .text.g4_bridge_123,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7FF7F0z\n"
  ".type _Z10sub_7FF7F0z, %function\n"
  "_Z10sub_7FF7F0z:\n"
  "  b _Z10sub_7FF7F0PjiPci\n"
  ".thumb\n"
);
// sub_7FD910(...) -> sub_7FD910(int, int, char*, int)
__asm__(
  ".section .text.g4_bridge_124,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7FD910z\n"
  ".type _Z10sub_7FD910z, %function\n"
  "_Z10sub_7FD910z:\n"
  "  b _Z10sub_7FD910iiPci\n"
  ".thumb\n"
);
// sub_800E30(...) -> sub_800E30(unsigned int*, int, char*)
__asm__(
  ".section .text.g4_bridge_125,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_800E30z\n"
  ".type _Z10sub_800E30z, %function\n"
  "_Z10sub_800E30z:\n"
  "  b _Z10sub_800E30PjiPc\n"
  ".thumb\n"
);
// sub_800E90(...) -> sub_800E90(int, int, char*)
__asm__(
  ".section .text.g4_bridge_126,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_800E90z\n"
  ".type _Z10sub_800E90z, %function\n"
  "_Z10sub_800E90z:\n"
  "  b _Z10sub_800E90iiPc\n"
  ".thumb\n"
);
// sub_800DC0(...) -> sub_800DC0(unsigned int*, int, char*, char, char, unsigned char)
__asm__(
  ".section .text.g4_bridge_127,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_800DC0z\n"
  ".type _Z10sub_800DC0z, %function\n"
  "_Z10sub_800DC0z:\n"
  "  b _Z10sub_800DC0PjiPccch\n"
  ".thumb\n"
);
// sub_801BE0(...) -> sub_801BE0(int)
__asm__(
  ".section .text.g4_bridge_128,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_801BE0z\n"
  ".type _Z10sub_801BE0z, %function\n"
  "_Z10sub_801BE0z:\n"
  "  b _Z10sub_801BE0i\n"
  ".thumb\n"
);
// sub_71FE50(...) -> sub_71FE50(int)
__asm__(
  ".section .text.g4_bridge_129,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_71FE50z\n"
  ".type _Z10sub_71FE50z, %function\n"
  "_Z10sub_71FE50z:\n"
  "  b _Z10sub_71FE50i\n"
  ".thumb\n"
);
// sub_1905A30(...) -> sub_1905A30(unsigned int*, int*, unsigned char)
__asm__(
  ".section .text.g4_bridge_130,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1905A30z\n"
  ".type _Z11sub_1905A30z, %function\n"
  "_Z11sub_1905A30z:\n"
  "  b _Z11sub_1905A30PjPih\n"
  ".thumb\n"
);
// sub_550A70(...) -> sub_550A70(int)
__asm__(
  ".section .text.g4_bridge_131,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_550A70z\n"
  ".type _Z10sub_550A70z, %function\n"
  "_Z10sub_550A70z:\n"
  "  b _Z10sub_550A70i\n"
  ".thumb\n"
);
// sub_7D6C60(...) -> sub_7D6C60(unsigned int*)
__asm__(
  ".section .text.g4_bridge_132,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7D6C60z\n"
  ".type _Z10sub_7D6C60z, %function\n"
  "_Z10sub_7D6C60z:\n"
  "  b _Z10sub_7D6C60Pj\n"
  ".thumb\n"
);
// sub_1903D80(...) -> sub_1903D80(std::exception*)
__asm__(
  ".section .text.g4_bridge_133,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1903D80z\n"
  ".type _Z11sub_1903D80z, %function\n"
  "_Z11sub_1903D80z:\n"
  "  b _Z11sub_1903D80PSt9exception\n"
  ".thumb\n"
);
// sub_67FF30(...) -> sub_67FF30(int)
__asm__(
  ".section .text.g4_bridge_134,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_67FF30z\n"
  ".type _Z10sub_67FF30z, %function\n"
  "_Z10sub_67FF30z:\n"
  "  b _Z10sub_67FF30i\n"
  ".thumb\n"
);
// sub_8721F0(...) -> sub_8721F0(glitch::IObject::Self*, int, int)
__asm__(
  ".section .text.g4_bridge_135,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8721F0z\n"
  ".type _Z10sub_8721F0z, %function\n"
  "_Z10sub_8721F0z:\n"
  "  b _Z10sub_8721F0PN6glitch7IObject4SelfEii\n"
  ".thumb\n"
);
// sub_1902550(...) -> sub_1902550(int*)
__asm__(
  ".section .text.g4_bridge_136,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1902550z\n"
  ".type _Z11sub_1902550z, %function\n"
  "_Z11sub_1902550z:\n"
  "  b _Z11sub_1902550Pi\n"
  ".thumb\n"
);
// sub_19023D0(...) -> sub_19023D0(int, int volatile*, int)
__asm__(
  ".section .text.g4_bridge_137,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19023D0z\n"
  ".type _Z11sub_19023D0z, %function\n"
  "_Z11sub_19023D0z:\n"
  "  b _Z11sub_19023D0iPVii\n"
  ".thumb\n"
);
// sub_A70B50(...) -> sub_A70B50(int)
__asm__(
  ".section .text.g4_bridge_138,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_A70B50z\n"
  ".type _Z10sub_A70B50z, %function\n"
  "_Z10sub_A70B50z:\n"
  "  b _Z10sub_A70B50i\n"
  ".thumb\n"
);
// sub_1953DD0(...) -> sub_1953DD0(int, unsigned char*, char)
__asm__(
  ".section .text.g4_bridge_139,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1953DD0z\n"
  ".type _Z11sub_1953DD0z, %function\n"
  "_Z11sub_1953DD0z:\n"
  "  b _Z11sub_1953DD0iPhc\n"
  ".thumb\n"
);
// sub_85BF60(...) -> sub_85BF60(int)
__asm__(
  ".section .text.g4_bridge_140,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_85BF60z\n"
  ".type _Z10sub_85BF60z, %function\n"
  "_Z10sub_85BF60z:\n"
  "  b _Z10sub_85BF60i\n"
  ".thumb\n"
);
// sub_59C7C0(...) -> sub_59C7C0(int)
__asm__(
  ".section .text.g4_bridge_141,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_59C7C0z\n"
  ".type _Z10sub_59C7C0z, %function\n"
  "_Z10sub_59C7C0z:\n"
  "  b _Z10sub_59C7C0i\n"
  ".thumb\n"
);
// sub_59C730(...) -> sub_59C730(int)
__asm__(
  ".section .text.g4_bridge_142,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_59C730z\n"
  ".type _Z10sub_59C730z, %function\n"
  "_Z10sub_59C730z:\n"
  "  b _Z10sub_59C730i\n"
  ".thumb\n"
);
// sub_4F4720(...) -> sub_4F4720(int)
__asm__(
  ".section .text.g4_bridge_143,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_4F4720z\n"
  ".type _Z10sub_4F4720z, %function\n"
  "_Z10sub_4F4720z:\n"
  "  b _Z10sub_4F4720i\n"
  ".thumb\n"
);
// sub_19529D0(...) -> sub_19529D0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_144,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19529D0z\n"
  ".type _Z11sub_19529D0z, %function\n"
  "_Z11sub_19529D0z:\n"
  "  b _Z11sub_19529D0Pj\n"
  ".thumb\n"
);
// RAND_seed -> RAND_seed(int, int)
__asm__(
  ".section .text.g4_bridge_145,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl RAND_seed\n"
  ".type RAND_seed, %function\n"
  "RAND_seed:\n"
  "  b _Z9RAND_seedii\n"
  ".thumb\n"
);
// sub_19019B0(...) -> sub_19019B0(std::exception*)
__asm__(
  ".section .text.g4_bridge_146,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19019B0z\n"
  ".type _Z11sub_19019B0z, %function\n"
  "_Z11sub_19019B0z:\n"
  "  b _Z11sub_19019B0PSt9exception\n"
  ".thumb\n"
);
// sub_19019E0(...) -> sub_19019E0(std::exception*)
__asm__(
  ".section .text.g4_bridge_147,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19019E0z\n"
  ".type _Z11sub_19019E0z, %function\n"
  "_Z11sub_19019E0z:\n"
  "  b _Z11sub_19019E0PSt9exception\n"
  ".thumb\n"
);
// explicit map -> __cxa_get_globals_fast
__asm__(
  ".section .text.g4_bridge_148,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _cxa_get_globals_fast\n"
  ".type _cxa_get_globals_fast, %function\n"
  "_cxa_get_globals_fast:\n"
  "  b __cxa_get_globals_fast\n"
  ".thumb\n"
);
// sub_1951730(...) -> sub_1951730(char*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_149,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1951730z\n"
  ".type _Z11sub_1951730z, %function\n"
  "_Z11sub_1951730z:\n"
  "  b _Z11sub_1951730PcPj\n"
  ".thumb\n"
);
// sub_1951800(...) -> sub_1951800(char, char*, char*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_150,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1951800z\n"
  ".type _Z11sub_1951800z, %function\n"
  "_Z11sub_1951800z:\n"
  "  b _Z11sub_1951800cPcS_Pj\n"
  ".thumb\n"
);
// sub_1954ED0(...) -> sub_1954ED0(unsigned long long*)
__asm__(
  ".section .text.g4_bridge_151,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1954ED0z\n"
  ".type _Z11sub_1954ED0z, %function\n"
  "_Z11sub_1954ED0z:\n"
  "  b _Z11sub_1954ED0Py\n"
  ".thumb\n"
);
// sub_1908860(...) -> sub_1908860(unsigned int*)
__asm__(
  ".section .text.g4_bridge_152,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1908860z\n"
  ".type _Z11sub_1908860z, %function\n"
  "_Z11sub_1908860z:\n"
  "  b _Z11sub_1908860Pj\n"
  ".thumb\n"
);
// sub_1901990(...) -> sub_1901990(unsigned int*)
__asm__(
  ".section .text.g4_bridge_153,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1901990z\n"
  ".type _Z11sub_1901990z, %function\n"
  "_Z11sub_1901990z:\n"
  "  b _Z11sub_1901990Pj\n"
  ".thumb\n"
);
// sub_12FA730(...) -> sub_12FA730(int, int)
__asm__(
  ".section .text.g4_bridge_154,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12FA730z\n"
  ".type _Z11sub_12FA730z, %function\n"
  "_Z11sub_12FA730z:\n"
  "  b _Z11sub_12FA730ii\n"
  ".thumb\n"
);
// sub_12EC180(...) -> sub_12EC180(unsigned int*, int, void*, unsigned int, int)
__asm__(
  ".section .text.g4_bridge_155,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12EC180z\n"
  ".type _Z11sub_12EC180z, %function\n"
  "_Z11sub_12EC180z:\n"
  "  b _Z11sub_12EC180PjiPvji\n"
  ".thumb\n"
);
// sub_1908870(...) -> sub_1908870()
__asm__(
  ".section .text.g4_bridge_156,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1908870z\n"
  ".type _Z11sub_1908870z, %function\n"
  "_Z11sub_1908870z:\n"
  "  b _Z11sub_1908870v\n"
  ".thumb\n"
);
// sub_19021E0(...) -> sub_19021E0(int volatile**, int volatile**)
__asm__(
  ".section .text.g4_bridge_157,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19021E0z\n"
  ".type _Z11sub_19021E0z, %function\n"
  "_Z11sub_19021E0z:\n"
  "  b _Z11sub_19021E0PPViS1_\n"
  ".thumb\n"
);
// sub_1901AC0(...) -> sub_1901AC0(int volatile**, int volatile**)
__asm__(
  ".section .text.g4_bridge_158,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1901AC0z\n"
  ".type _Z11sub_1901AC0z, %function\n"
  "_Z11sub_1901AC0z:\n"
  "  b _Z11sub_1901AC0PPViS1_\n"
  ".thumb\n"
);
// sub_1900AD0(...) -> sub_1900AD0(int, int)
__asm__(
  ".section .text.g4_bridge_159,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1900AD0z\n"
  ".type _Z11sub_1900AD0z, %function\n"
  "_Z11sub_1900AD0z:\n"
  "  b _Z11sub_1900AD0ii\n"
  ".thumb\n"
);
// sub_12F6AC0(...) -> sub_12F6AC0(unsigned int**, unsigned int**)
__asm__(
  ".section .text.g4_bridge_160,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12F6AC0z\n"
  ".type _Z11sub_12F6AC0z, %function\n"
  "_Z11sub_12F6AC0z:\n"
  "  b _Z11sub_12F6AC0PPjS0_\n"
  ".thumb\n"
);
// sub_7AE4A0(...) -> sub_7AE4A0(int)
__asm__(
  ".section .text.g4_bridge_161,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7AE4A0z\n"
  ".type _Z10sub_7AE4A0z, %function\n"
  "_Z10sub_7AE4A0z:\n"
  "  b _Z10sub_7AE4A0i\n"
  ".thumb\n"
);
// sub_B84B70(...) -> sub_B84B70(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, 
__asm__(
  ".section .text.g4_bridge_162,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_B84B70z\n"
  ".type _Z10sub_B84B70z, %function\n"
  "_Z10sub_B84B70z:\n"
  "  b _Z10sub_B84B70iiiiiiiiiiiiiiiiiii\n"
  ".thumb\n"
);
// sub_1955580(...) -> sub_1955580(int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_163,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1955580z\n"
  ".type _Z11sub_1955580z, %function\n"
  "_Z11sub_1955580z:\n"
  "  b _Z11sub_1955580iPj\n"
  ".thumb\n"
);
// sub_19576C0(...) -> sub_19576C0(int)
__asm__(
  ".section .text.g4_bridge_164,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19576C0z\n"
  ".type _Z11sub_19576C0z, %function\n"
  "_Z11sub_19576C0z:\n"
  "  b _Z11sub_19576C0i\n"
  ".thumb\n"
);
// sub_1955250(...) -> sub_1955250(int, unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_165,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1955250z\n"
  ".type _Z11sub_1955250z, %function\n"
  "_Z11sub_1955250z:\n"
  "  b _Z11sub_1955250iPji\n"
  ".thumb\n"
);
// sub_1955A30(...) -> sub_1955A30(int)
__asm__(
  ".section .text.g4_bridge_166,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1955A30z\n"
  ".type _Z11sub_1955A30z, %function\n"
  "_Z11sub_1955A30z:\n"
  "  b _Z11sub_1955A30i\n"
  ".thumb\n"
);
// sub_19570C0(...) -> sub_19570C0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_167,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19570C0z\n"
  ".type _Z11sub_19570C0z, %function\n"
  "_Z11sub_19570C0z:\n"
  "  b _Z11sub_19570C0Pj\n"
  ".thumb\n"
);
// sub_1956340(...) -> sub_1956340(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_168,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1956340z\n"
  ".type _Z11sub_1956340z, %function\n"
  "_Z11sub_1956340z:\n"
  "  b _Z11sub_1956340Pji\n"
  ".thumb\n"
);
// sub_12F52C0(...) -> sub_12F52C0(unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_169,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12F52C0z\n"
  ".type _Z11sub_12F52C0z, %function\n"
  "_Z11sub_12F52C0z:\n"
  "  b _Z11sub_12F52C0PjS_\n"
  ".thumb\n"
);
// sub_1957510(...) -> sub_1957510(unsigned int*)
__asm__(
  ".section .text.g4_bridge_170,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1957510z\n"
  ".type _Z11sub_1957510z, %function\n"
  "_Z11sub_1957510z:\n"
  "  b _Z11sub_1957510Pj\n"
  ".thumb\n"
);
// sub_1956850(...) -> sub_1956850(int, int)
__asm__(
  ".section .text.g4_bridge_171,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1956850z\n"
  ".type _Z11sub_1956850z, %function\n"
  "_Z11sub_1956850z:\n"
  "  b _Z11sub_1956850ii\n"
  ".thumb\n"
);
// sub_12F6AE0(...) -> sub_12F6AE0(int, int, int, int, int, int, int, int, unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_172,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12F6AE0z\n"
  ".type _Z11sub_12F6AE0z, %function\n"
  "_Z11sub_12F6AE0z:\n"
  "  b _Z11sub_12F6AE0iiiiiiiiPjS_\n"
  ".thumb\n"
);
// sub_1957620(...) -> sub_1957620(unsigned int*)
__asm__(
  ".section .text.g4_bridge_173,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1957620z\n"
  ".type _Z11sub_1957620z, %function\n"
  "_Z11sub_1957620z:\n"
  "  b _Z11sub_1957620Pj\n"
  ".thumb\n"
);
// sub_12F6E20(...) -> sub_12F6E20(char*, unsigned int*, unsigned int*, unsigned int**)
__asm__(
  ".section .text.g4_bridge_174,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12F6E20z\n"
  ".type _Z11sub_12F6E20z, %function\n"
  "_Z11sub_12F6E20z:\n"
  "  b _Z11sub_12F6E20PcPjS0_PS0_\n"
  ".thumb\n"
);
// Curl_pgrsDone -> Curl_pgrsDone(int*)
__asm__(
  ".section .text.g4_bridge_175,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl Curl_pgrsDone\n"
  ".type Curl_pgrsDone, %function\n"
  "Curl_pgrsDone:\n"
  "  b _Z13Curl_pgrsDonePi\n"
  ".thumb\n"
);
// OPENSSL_gmtime -> OPENSSL_gmtime(long*, tm*)
__asm__(
  ".section .text.g4_bridge_176,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl OPENSSL_gmtime\n"
  ".type OPENSSL_gmtime, %function\n"
  "OPENSSL_gmtime:\n"
  "  b _Z14OPENSSL_gmtimePlP2tm\n"
  ".thumb\n"
);
// sub_195A8F0(...) -> sub_195A8F0(int, int)
__asm__(
  ".section .text.g4_bridge_177,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_195A8F0z\n"
  ".type _Z11sub_195A8F0z, %function\n"
  "_Z11sub_195A8F0z:\n"
  "  b _Z11sub_195A8F0ii\n"
  ".thumb\n"
);
// sub_195AA00(...) -> sub_195AA00(int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_178,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_195AA00z\n"
  ".type _Z11sub_195AA00z, %function\n"
  "_Z11sub_195AA00z:\n"
  "  b _Z11sub_195AA00iPj\n"
  ".thumb\n"
);
// sub_195B090(...) -> sub_195B090(int, int*, int**)
__asm__(
  ".section .text.g4_bridge_179,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_195B090z\n"
  ".type _Z11sub_195B090z, %function\n"
  "_Z11sub_195B090z:\n"
  "  b _Z11sub_195B090iPiPS_\n"
  ".thumb\n"
);
// sub_195BC20(...) -> sub_195BC20(int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_180,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_195BC20z\n"
  ".type _Z11sub_195BC20z, %function\n"
  "_Z11sub_195BC20z:\n"
  "  b _Z11sub_195BC20iPj\n"
  ".thumb\n"
);
// sub_195A920(...) -> sub_195A920(int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_181,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_195A920z\n"
  ".type _Z11sub_195A920z, %function\n"
  "_Z11sub_195A920z:\n"
  "  b _Z11sub_195A920iPj\n"
  ".thumb\n"
);
// sub_195BA20(...) -> sub_195BA20(int, int*)
__asm__(
  ".section .text.g4_bridge_182,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_195BA20z\n"
  ".type _Z11sub_195BA20z, %function\n"
  "_Z11sub_195BA20z:\n"
  "  b _Z11sub_195BA20iPi\n"
  ".thumb\n"
);
// sub_195B770(...) -> sub_195B770(int, int*, int*)
__asm__(
  ".section .text.g4_bridge_183,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_195B770z\n"
  ".type _Z11sub_195B770z, %function\n"
  "_Z11sub_195B770z:\n"
  "  b _Z11sub_195B770iPiS_\n"
  ".thumb\n"
);
// sub_195B390(...) -> sub_195B390(int, int**, int)
__asm__(
  ".section .text.g4_bridge_184,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_195B390z\n"
  ".type _Z11sub_195B390z, %function\n"
  "_Z11sub_195B390z:\n"
  "  b _Z11sub_195B390iPPii\n"
  ".thumb\n"
);
// sub_12FE800(...) -> sub_12FE800(char*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_185,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12FE800z\n"
  ".type _Z11sub_12FE800z, %function\n"
  "_Z11sub_12FE800z:\n"
  "  b _Z11sub_12FE800PcPj\n"
  ".thumb\n"
);
// sub_12F92D0(...) -> sub_12F92D0(unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_186,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12F92D0z\n"
  ".type _Z11sub_12F92D0z, %function\n"
  "_Z11sub_12F92D0z:\n"
  "  b _Z11sub_12F92D0PjS_\n"
  ".thumb\n"
);
// sub_12F9250(...) -> sub_12F9250(unsigned char*)
__asm__(
  ".section .text.g4_bridge_187,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12F9250z\n"
  ".type _Z11sub_12F9250z, %function\n"
  "_Z11sub_12F9250z:\n"
  "  b _Z11sub_12F9250Ph\n"
  ".thumb\n"
);
// sub_195C824(...) -> sub_195C824(char*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_188,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_195C824z\n"
  ".type _Z11sub_195C824z, %function\n"
  "_Z11sub_195C824z:\n"
  "  b _Z11sub_195C824PcPj\n"
  ".thumb\n"
);
// void std::__merge_without_buffer<__gnu_cxx::__normal_iterator<gaia::ThreadManagerRequest::Self**, std::__ndk1:
__asm__(
  ".section .text.g4_bridge_189,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZSt22__merge_without_bufferIN9__gnu_cxx17__normal_iteratorIPPN4gaia20ThreadManagerRequest4SelfENSt6__ndk16vectorIS5_NS7_9allocatorIS5_EEEEEEiPFbS5_S5_EEvPiSF_SF_iiPFhiiE\n"
  ".type _ZSt22__merge_without_bufferIN9__gnu_cxx17__normal_iteratorIPPN4gaia20ThreadManagerRequest4SelfENSt6__ndk16vectorIS5_NS7_9allocatorIS5_EEEEEEiPFbS5_S5_EEvPiSF_SF_iiPFhiiE, %function\n"
  "_ZSt22__merge_without_bufferIN9__gnu_cxx17__normal_iteratorIPPN4gaia20ThreadManagerRequest4SelfENSt6__ndk16vectorIS5_NS7_9allocatorIS5_EEEEEEiPFbS5_S5_EEvPiSF_SF_iiPFhiiE:\n"
  "  b _ZSt22__merge_without_bufferIN9__gnu_cxx17__normal_iteratorIPPN4gaia20ThreadManagerRequest4SelfENSt6__ndk16vectorIS5_NS7_9allocatorIS5_EEEEEEiPFbS5_S5_EEvPiSF_iiiPFhiiE\n"
  ".thumb\n"
);
// explicit map -> _ZN27hkpIterativeLinearCastAgent20staticLinearCast_b28EjPfS0_S0_iiiiiiijiiiiiPijjjjj11g4_int12
__asm__(
  ".section .text.g4_bridge_190,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN27hkpIterativeLinearCastAgent16staticLinearCastEjPfS0_S0_iiiiiiijiiiiiPijjjjj11g4_int128_tfiiiiiiiiiiiffffjjjjS2_ijiijS0_iiiiiij\n"
  ".type _ZN27hkpIterativeLinearCastAgent16staticLinearCastEjPfS0_S0_iiiiiiijiiiiiPijjjjj11g4_int128_tfiiiiiiiiiiiffffjjjjS2_ijiijS0_iiiiiij, %function\n"
  "_ZN27hkpIterativeLinearCastAgent16staticLinearCastEjPfS0_S0_iiiiiiijiiiiiPijjjjj11g4_int128_tfiiiiiiiiiiiffffjjjjS2_ijiijS0_iiiiiij:\n"
  "  b _ZN27hkpIterativeLinearCastAgent20staticLinearCast_b28EjPfS0_S0_iiiiiiijiiiiiPijjjjj11g4_int128_tfiiiiiiiiiiiffffjjjjS2_ijiijS0_iiiiiij\n"
  ".thumb\n"
);
// sub_77DB60(...) -> sub_77DB60(int)
__asm__(
  ".section .text.g4_bridge_191,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_77DB60z\n"
  ".type _Z10sub_77DB60z, %function\n"
  "_Z10sub_77DB60z:\n"
  "  b _Z10sub_77DB60i\n"
  ".thumb\n"
);
// sub_12FE2F0(...) -> sub_12FE2F0(unsigned int*, void*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_192,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12FE2F0z\n"
  ".type _Z11sub_12FE2F0z, %function\n"
  "_Z11sub_12FE2F0z:\n"
  "  b _Z11sub_12FE2F0PjPvS_\n"
  ".thumb\n"
);
// sub_12FFF40(...) -> sub_12FFF40(int, int, int, void*, unsigned int, int**)
__asm__(
  ".section .text.g4_bridge_193,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12FFF40z\n"
  ".type _Z11sub_12FFF40z, %function\n"
  "_Z11sub_12FFF40z:\n"
  "  b _Z11sub_12FFF40iiiPvjPPi\n"
  ".thumb\n"
);
// sub_130DAC0(...) -> sub_130DAC0(int, void*, unsigned int, int, int, int, int, int, int, int, int, char*, int)
__asm__(
  ".section .text.g4_bridge_194,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_130DAC0z\n"
  ".type _Z11sub_130DAC0z, %function\n"
  "_Z11sub_130DAC0z:\n"
  "  b _Z11sub_130DAC0iPvjiiiiiiiiPci\n"
  ".thumb\n"
);
// sub_16CA950(...) -> sub_16CA950(int, int, int, int, int*)
__asm__(
  ".section .text.g4_bridge_195,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_16CA950z\n"
  ".type _Z11sub_16CA950z, %function\n"
  "_Z11sub_16CA950z:\n"
  "  b _Z11sub_16CA950iiiiPi\n"
  ".thumb\n"
);
// sub_16C22E0(...) -> sub_16C22E0(float*, float*, int, int, int)
__asm__(
  ".section .text.g4_bridge_196,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_16C22E0z\n"
  ".type _Z11sub_16C22E0z, %function\n"
  "_Z11sub_16C22E0z:\n"
  "  b _Z11sub_16C22E0PfS_iii\n"
  ".thumb\n"
);
// sub_195C8A1(...) -> sub_195C8A1(int, int, int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_197,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_195C8A1z\n"
  ".type _Z11sub_195C8A1z, %function\n"
  "_Z11sub_195C8A1z:\n"
  "  b _Z11sub_195C8A1iiiPj\n"
  ".thumb\n"
);
// sub_19684F0(...) -> sub_19684F0(int)
__asm__(
  ".section .text.g4_bridge_198,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19684F0z\n"
  ".type _Z11sub_19684F0z, %function\n"
  "_Z11sub_19684F0z:\n"
  "  b _Z11sub_19684F0i\n"
  ".thumb\n"
);
// sub_16D9EF0(...) -> sub_16D9EF0(int, int)
__asm__(
  ".section .text.g4_bridge_199,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_16D9EF0z\n"
  ".type _Z11sub_16D9EF0z, %function\n"
  "_Z11sub_16D9EF0z:\n"
  "  b _Z11sub_16D9EF0ii\n"
  ".thumb\n"
);
// sub_195FC6F(...) -> sub_195FC6F(int*)
__asm__(
  ".section .text.g4_bridge_200,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_195FC6Fz\n"
  ".type _Z11sub_195FC6Fz, %function\n"
  "_Z11sub_195FC6Fz:\n"
  "  b _Z11sub_195FC6FPi\n"
  ".thumb\n"
);
// sub_1960100(...) -> sub_1960100(int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_201,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1960100z\n"
  ".type _Z11sub_1960100z, %function\n"
  "_Z11sub_1960100z:\n"
  "  b _Z11sub_1960100iPj\n"
  ".thumb\n"
);
// sub_197C1D0(...) -> sub_197C1D0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_202,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_197C1D0z\n"
  ".type _Z11sub_197C1D0z, %function\n"
  "_Z11sub_197C1D0z:\n"
  "  b _Z11sub_197C1D0Pj\n"
  ".thumb\n"
);
// sub_1969A40(...) -> sub_1969A40()
__asm__(
  ".section .text.g4_bridge_203,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1969A40z\n"
  ".type _Z11sub_1969A40z, %function\n"
  "_Z11sub_1969A40z:\n"
  "  b _Z11sub_1969A40v\n"
  ".thumb\n"
);
// sub_1969D30(...) -> sub_1969D30(int)
__asm__(
  ".section .text.g4_bridge_204,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1969D30z\n"
  ".type _Z11sub_1969D30z, %function\n"
  "_Z11sub_1969D30z:\n"
  "  b _Z11sub_1969D30i\n"
  ".thumb\n"
);
// sub_1969B90(...) -> sub_1969B90(char*)
__asm__(
  ".section .text.g4_bridge_205,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1969B90z\n"
  ".type _Z11sub_1969B90z, %function\n"
  "_Z11sub_1969B90z:\n"
  "  b _Z11sub_1969B90Pc\n"
  ".thumb\n"
);
// sub_197E320(...) -> sub_197E320(int, int, int, int)
__asm__(
  ".section .text.g4_bridge_206,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_197E320z\n"
  ".type _Z11sub_197E320z, %function\n"
  "_Z11sub_197E320z:\n"
  "  b _Z11sub_197E320iiii\n"
  ".thumb\n"
);
// sub_1821450(...) -> sub_1821450(int, int, hkTransformf::Self*, hkMemoryAllocator::Self*, __m128*)
__asm__(
  ".section .text.g4_bridge_207,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1821450z\n"
  ".type _Z11sub_1821450z, %function\n"
  "_Z11sub_1821450z:\n"
  "  b _Z11sub_1821450iiPN12hkTransformf4SelfEPN17hkMemoryAllocator4SelfEP6__m128\n"
  ".thumb\n"
);
// sub_18180E0(...) -> sub_18180E0(int*, int, float*, __m128*, int*, int, int, int, int, float, float, float, int
__asm__(
  ".section .text.g4_bridge_208,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18180E0z\n"
  ".type _Z11sub_18180E0z, %function\n"
  "_Z11sub_18180E0z:\n"
  "  b _Z11sub_18180E0PiiPfP6__m128S_iiiifffifffffffi\n"
  ".thumb\n"
);
// sub_18546A0(...) -> sub_18546A0(unsigned char*, hkGeometryUtility::Self*, hkTransformf::Self*, int)
__asm__(
  ".section .text.g4_bridge_209,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18546A0z\n"
  ".type _Z11sub_18546A0z, %function\n"
  "_Z11sub_18546A0z:\n"
  "  b _Z11sub_18546A0PhPN17hkGeometryUtility4SelfEPN12hkTransformf4SelfEi\n"
  ".thumb\n"
);
// sub_18570F0(...) -> sub_18570F0(int, unsigned int*, hkTransformf::Self*, __m128**)
__asm__(
  ".section .text.g4_bridge_210,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18570F0z\n"
  ".type _Z11sub_18570F0z, %function\n"
  "_Z11sub_18570F0z:\n"
  "  b _Z11sub_18570F0iPjPN12hkTransformf4SelfEPP6__m128\n"
  ".thumb\n"
);
// sub_183DD40(...) -> sub_183DD40(int, char, unsigned char*)
__asm__(
  ".section .text.g4_bridge_211,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_183DD40z\n"
  ".type _Z11sub_183DD40z, %function\n"
  "_Z11sub_183DD40z:\n"
  "  b _Z11sub_183DD40icPh\n"
  ".thumb\n"
);
// sub_1AFED40(...) -> sub_1AFED40(int, float*, float, unsigned int*, int, float*)
#if defined(__aarch64__)
__asm__(
  ".section .text.g4_bridge_212,\"ax\",%progbits\n"
  ".globl _Z11sub_1AFED40z\n"
  ".type _Z11sub_1AFED40z, %function\n"
  "_Z11sub_1AFED40z:\n"
  "  fcvt s0, d0\n"
  "  b _Z11sub_1AFED40iPffPjiS_\n"
);
#elif defined(__arm__)
__asm__(
  ".section .text.g4_bridge_212,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1AFED40z\n"
  ".type _Z11sub_1AFED40z, %function\n"
  "_Z11sub_1AFED40z:\n"
  "  push {r0, r1, r4, lr}\n"
  "  vmov d0, r2, r3\n"
  "  vcvt.f32.f64 s0, d0\n"
  "  vmov r2, s0\n"
  "  ldr r3, [sp, #16]\n"
  "  ldr r0, [sp, #20]\n"
  "  ldr r1, [sp, #24]\n"
  "  push {r0, r1}\n"
  "  ldr r0, [sp, #8]\n"
  "  ldr r1, [sp, #12]\n"
  "  bl _Z11sub_1AFED40iPffPjiS_\n"
  "  add sp, sp, #8\n"
  "  pop {r2, r3, r4, pc}\n"
  ".thumb\n"
);
#endif
// explicit map -> _Z26sub_1A86B30_edx_eax_b4977diPh
__asm__(
  ".section .text.g4_bridge_213,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1A86B30z\n"
  ".type _Z11sub_1A86B30z, %function\n"
  "_Z11sub_1A86B30z:\n"
  "  b _Z26sub_1A86B30_edx_eax_b4977diPh\n"
  ".thumb\n"
);
// sub_196CF90(...) -> sub_196CF90(int, void const**)
__asm__(
  ".section .text.g4_bridge_214,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_196CF90z\n"
  ".type _Z11sub_196CF90z, %function\n"
  "_Z11sub_196CF90z:\n"
  "  b _Z11sub_196CF90iPPKv\n"
  ".thumb\n"
);
// sub_1969E60(...) -> sub_1969E60(void const**)
__asm__(
  ".section .text.g4_bridge_215,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1969E60z\n"
  ".type _Z11sub_1969E60z, %function\n"
  "_Z11sub_1969E60z:\n"
  "  b _Z11sub_1969E60PPKv\n"
  ".thumb\n"
);
// explicit map -> _Z11sub_197B070Ph
__asm__(
  ".section .text.g4_bridge_216,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19799F0z\n"
  ".type _Z11sub_19799F0z, %function\n"
  "_Z11sub_19799F0z:\n"
  "  b _Z11sub_197B070Ph\n"
  ".thumb\n"
);
// sub_197C1F0(...) -> sub_197C1F0(int, void const**)
__asm__(
  ".section .text.g4_bridge_217,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_197C1F0z\n"
  ".type _Z11sub_197C1F0z, %function\n"
  "_Z11sub_197C1F0z:\n"
  "  b _Z11sub_197C1F0iPPKv\n"
  ".thumb\n"
);
// explicit map -> _Z11sub_197AEC0i
__asm__(
  ".section .text.g4_bridge_218,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19799E0z\n"
  ".type _Z11sub_19799E0z, %function\n"
  "_Z11sub_19799E0z:\n"
  "  b _Z11sub_197AEC0i\n"
  ".thumb\n"
);
// sub_19718B0(...) -> sub_19718B0(char*)
__asm__(
  ".section .text.g4_bridge_219,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19718B0z\n"
  ".type _Z11sub_19718B0z, %function\n"
  "_Z11sub_19718B0z:\n"
  "  b _Z11sub_19718B0Pc\n"
  ".thumb\n"
);
// sub_1968960(...) -> sub_1968960(int*, int*)
__asm__(
  ".section .text.g4_bridge_220,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1968960z\n"
  ".type _Z11sub_1968960z, %function\n"
  "_Z11sub_1968960z:\n"
  "  b _Z11sub_1968960PiS_\n"
  ".thumb\n"
);
// sub_18E5B50(...) -> sub_18E5B50(int, int, int)
__asm__(
  ".section .text.g4_bridge_221,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18E5B50z\n"
  ".type _Z11sub_18E5B50z, %function\n"
  "_Z11sub_18E5B50z:\n"
  "  b _Z11sub_18E5B50iii\n"
  ".thumb\n"
);
// sub_18EA810(...) -> sub_18EA810(unsigned int*)
__asm__(
  ".section .text.g4_bridge_222,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18EA810z\n"
  ".type _Z11sub_18EA810z, %function\n"
  "_Z11sub_18EA810z:\n"
  "  b _Z11sub_18EA810Pj\n"
  ".thumb\n"
);
// sub_1969B50(...) -> sub_1969B50()
__asm__(
  ".section .text.g4_bridge_223,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1969B50z\n"
  ".type _Z11sub_1969B50z, %function\n"
  "_Z11sub_1969B50z:\n"
  "  b _Z11sub_1969B50v\n"
  ".thumb\n"
);
// sub_1971FB0(...) -> sub_1971FB0(unsigned int**)
__asm__(
  ".section .text.g4_bridge_224,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1971FB0z\n"
  ".type _Z11sub_1971FB0z, %function\n"
  "_Z11sub_1971FB0z:\n"
  "  b _Z11sub_1971FB0PPj\n"
  ".thumb\n"
);
// sub_1972660(...) -> sub_1972660(void const**)
__asm__(
  ".section .text.g4_bridge_225,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1972660z\n"
  ".type _Z11sub_1972660z, %function\n"
  "_Z11sub_1972660z:\n"
  "  b _Z11sub_1972660PPKv\n"
  ".thumb\n"
);
// sub_19718F0(...) -> sub_19718F0(void const**)
__asm__(
  ".section .text.g4_bridge_226,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19718F0z\n"
  ".type _Z11sub_19718F0z, %function\n"
  "_Z11sub_19718F0z:\n"
  "  b _Z11sub_19718F0PPKv\n"
  ".thumb\n"
);
// sub_1971D40(...) -> sub_1971D40(unsigned int**, int*)
__asm__(
  ".section .text.g4_bridge_227,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1971D40z\n"
  ".type _Z11sub_1971D40z, %function\n"
  "_Z11sub_1971D40z:\n"
  "  b _Z11sub_1971D40PPjPi\n"
  ".thumb\n"
);
// sub_1969930(...) -> sub_1969930()
__asm__(
  ".section .text.g4_bridge_228,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1969930z\n"
  ".type _Z11sub_1969930z, %function\n"
  "_Z11sub_1969930z:\n"
  "  b _Z11sub_1969930v\n"
  ".thumb\n"
);
// sub_197E4A0(...) -> sub_197E4A0(float*, int, int)
__asm__(
  ".section .text.g4_bridge_229,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_197E4A0z\n"
  ".type _Z11sub_197E4A0z, %function\n"
  "_Z11sub_197E4A0z:\n"
  "  b _Z11sub_197E4A0Pfii\n"
  ".thumb\n"
);
// sub_1265660(...) -> sub_1265660(char**, unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_230,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1265660z\n"
  ".type _Z11sub_1265660z, %function\n"
  "_Z11sub_1265660z:\n"
  "  b _Z11sub_1265660PPcPji\n"
  ".thumb\n"
);
// sub_197B870(...) -> sub_197B870(int, DataSharing::Self**, unsigned char**)
__asm__(
  ".section .text.g4_bridge_231,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_197B870z\n"
  ".type _Z11sub_197B870z, %function\n"
  "_Z11sub_197B870z:\n"
  "  b _Z11sub_197B870iPPN11DataSharing4SelfEPPh\n"
  ".thumb\n"
);
// sub_1704450(...) -> sub_1704450(unsigned char*, int, unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_232,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1704450z\n"
  ".type _Z11sub_1704450z, %function\n"
  "_Z11sub_1704450z:\n"
  "  b _Z11sub_1704450PhiPji\n"
  ".thumb\n"
);
// sub_1561780(...) -> sub_1561780(hkString::Self*, int)
__asm__(
  ".section .text.g4_bridge_233,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1561780z\n"
  ".type _Z11sub_1561780z, %function\n"
  "_Z11sub_1561780z:\n"
  "  b _Z11sub_1561780PN8hkString4SelfEi\n"
  ".thumb\n"
);
// sub_1972780(...) -> sub_1972780(unsigned char**)
__asm__(
  ".section .text.g4_bridge_234,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1972780z\n"
  ".type _Z11sub_1972780z, %function\n"
  "_Z11sub_1972780z:\n"
  "  b _Z11sub_1972780PPh\n"
  ".thumb\n"
);
// sub_196DC20(...) -> sub_196DC20(int)
__asm__(
  ".section .text.g4_bridge_235,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_196DC20z\n"
  ".type _Z11sub_196DC20z, %function\n"
  "_Z11sub_196DC20z:\n"
  "  b _Z11sub_196DC20i\n"
  ".thumb\n"
);
// sub_5E8920(...) -> sub_5E8920(int)
__asm__(
  ".section .text.g4_bridge_236,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_5E8920z\n"
  ".type _Z10sub_5E8920z, %function\n"
  "_Z10sub_5E8920z:\n"
  "  b _Z10sub_5E8920i\n"
  ".thumb\n"
);
// sub_19727C0(...) -> sub_19727C0(char const**, unsigned int**)
__asm__(
  ".section .text.g4_bridge_237,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19727C0z\n"
  ".type _Z11sub_19727C0z, %function\n"
  "_Z11sub_19727C0z:\n"
  "  b _Z11sub_19727C0PPKcPPj\n"
  ".thumb\n"
);
// sub_1891D90(...) -> sub_1891D90(hkString::Self**, hkStreamReader::Self*, hkString::Self*)
__asm__(
  ".section .text.g4_bridge_238,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1891D90z\n"
  ".type _Z11sub_1891D90z, %function\n"
  "_Z11sub_1891D90z:\n"
  "  b _Z11sub_1891D90PPN8hkString4SelfEPN14hkStreamReader4SelfES1_\n"
  ".thumb\n"
);
// sub_1880300(...) -> sub_1880300(int, unsigned int*, unsigned int*, int, char)
__asm__(
  ".section .text.g4_bridge_239,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1880300z\n"
  ".type _Z11sub_1880300z, %function\n"
  "_Z11sub_1880300z:\n"
  "  b _Z11sub_1880300iPjS_ic\n"
  ".thumb\n"
);
// sub_18815B0(...) -> sub_18815B0(hkVersionPatchManager::ClassWrapper::Self*, hkDataWorld::Self*, hkVersionPatch
__asm__(
  ".section .text.g4_bridge_240,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18815B0z\n"
  ".type _Z11sub_18815B0z, %function\n"
  "_Z11sub_18815B0z:\n"
  "  b _Z11sub_18815B0PN21hkVersionPatchManager12ClassWrapper4SelfEPN11hkDataWorld4SelfES2_PjPN19hkClassNameRegistry4SelfE\n"
  ".thumb\n"
);
// sub_1881360(...) -> sub_1881360(hkVersionPatchManager::ClassWrapper::Self*, hkDataWorld::Self*, hkVersionPatch
__asm__(
  ".section .text.g4_bridge_241,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1881360z\n"
  ".type _Z11sub_1881360z, %function\n"
  "_Z11sub_1881360z:\n"
  "  b _Z11sub_1881360PN21hkVersionPatchManager12ClassWrapper4SelfEPN11hkDataWorld4SelfES2_PjPN19hkClassNameRegistry4SelfE\n"
  ".thumb\n"
);
// sub_18A5750(...) -> sub_18A5750(int, int)
__asm__(
  ".section .text.g4_bridge_242,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18A5750z\n"
  ".type _Z11sub_18A5750z, %function\n"
  "_Z11sub_18A5750z:\n"
  "  b _Z11sub_18A5750ii\n"
  ".thumb\n"
);
// sub_1788800(...) -> sub_1788800(int, float*, hkTransformf::Self*)
__asm__(
  ".section .text.g4_bridge_243,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1788800z\n"
  ".type _Z11sub_1788800z, %function\n"
  "_Z11sub_1788800z:\n"
  "  b _Z11sub_1788800iPfPN12hkTransformf4SelfE\n"
  ".thumb\n"
);
// sub_18ECD60(...) -> sub_18ECD60(void*, hkClass::Self*, char, unsigned int, hkOArchive::Self**)
__asm__(
  ".section .text.g4_bridge_244,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18ECD60z\n"
  ".type _Z11sub_18ECD60z, %function\n"
  "_Z11sub_18ECD60z:\n"
  "  b _Z11sub_18ECD60PvPN7hkClass4SelfEcjPPN10hkOArchive4SelfE\n"
  ".thumb\n"
);
// sub_188B790(...) -> sub_188B790(int, int, int)
__asm__(
  ".section .text.g4_bridge_245,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_188B790z\n"
  ".type _Z11sub_188B790z, %function\n"
  "_Z11sub_188B790z:\n"
  "  b _Z11sub_188B790iii\n"
  ".thumb\n"
);
// sub_188F400(...) -> sub_188F400(int*, int, char, int, hkMemoryAllocator::Self*)
__asm__(
  ".section .text.g4_bridge_246,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_188F400z\n"
  ".type _Z11sub_188F400z, %function\n"
  "_Z11sub_188F400z:\n"
  "  b _Z11sub_188F400PiiciPN17hkMemoryAllocator4SelfE\n"
  ".thumb\n"
);
// sub_19702C0(...) -> sub_19702C0(int, void const**, unsigned int*)
__asm__(
  ".section .text.g4_bridge_247,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19702C0z\n"
  ".type _Z11sub_19702C0z, %function\n"
  "_Z11sub_19702C0z:\n"
  "  b _Z11sub_19702C0iPPKvPj\n"
  ".thumb\n"
);
// sub_1671CB0(...) -> sub_1671CB0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_248,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1671CB0z\n"
  ".type _Z11sub_1671CB0z, %function\n"
  "_Z11sub_1671CB0z:\n"
  "  b _Z11sub_1671CB0Pj\n"
  ".thumb\n"
);
// sub_1975490(...) -> sub_1975490(int, int, int, int, int, int, void const*, unsigned char, int, int, int, int, 
__asm__(
  ".section .text.g4_bridge_249,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1975490z\n"
  ".type _Z11sub_1975490z, %function\n"
  "_Z11sub_1975490z:\n"
  "  b _Z11sub_1975490iiiiiiPKvhiiiiPFiiiPciEiPFiiiEPFiiijiEPFviiES5_iiiijiiijS1_S1_iiiiiiiiiiiiiiiiiiiiiii\n"
  ".thumb\n"
);
// sub_1976190(...) -> sub_1976190(int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_250,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1976190z\n"
  ".type _Z11sub_1976190z, %function\n"
  "_Z11sub_1976190z:\n"
  "  b _Z11sub_1976190iPj\n"
  ".thumb\n"
);
// sub_1977CB0(...) -> sub_1977CB0(int)
__asm__(
  ".section .text.g4_bridge_251,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1977CB0z\n"
  ".type _Z11sub_1977CB0z, %function\n"
  "_Z11sub_1977CB0z:\n"
  "  b _Z11sub_1977CB0i\n"
  ".thumb\n"
);
// sub_19760E0(...) -> sub_19760E0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_252,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19760E0z\n"
  ".type _Z11sub_19760E0z, %function\n"
  "_Z11sub_19760E0z:\n"
  "  b _Z11sub_19760E0Pj\n"
  ".thumb\n"
);
// sub_19797A0(...) -> sub_19797A0(int)
__asm__(
  ".section .text.g4_bridge_253,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19797A0z\n"
  ".type _Z11sub_19797A0z, %function\n"
  "_Z11sub_19797A0z:\n"
  "  b _Z11sub_19797A0i\n"
  ".thumb\n"
);
// sub_1977D10(...) -> sub_1977D10(int)
__asm__(
  ".section .text.g4_bridge_254,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1977D10z\n"
  ".type _Z11sub_1977D10z, %function\n"
  "_Z11sub_1977D10z:\n"
  "  b _Z11sub_1977D10i\n"
  ".thumb\n"
);
// sub_1979250(...) -> sub_1979250(int)
__asm__(
  ".section .text.g4_bridge_255,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1979250z\n"
  ".type _Z11sub_1979250z, %function\n"
  "_Z11sub_1979250z:\n"
  "  b _Z11sub_1979250i\n"
  ".thumb\n"
);
// sub_19761D0(...) -> sub_19761D0(int, __m128i*, int, unsigned int, int, unsigned int, int, unsigned int)
__asm__(
  ".section .text.g4_bridge_256,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19761D0z\n"
  ".type _Z11sub_19761D0z, %function\n"
  "_Z11sub_19761D0z:\n"
  "  b _Z11sub_19761D0iP7__m128iijijij\n"
  ".thumb\n"
);
// sub_1979310(...) -> sub_1979310(unsigned int*, int, unsigned int)
__asm__(
  ".section .text.g4_bridge_257,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1979310z\n"
  ".type _Z11sub_1979310z, %function\n"
  "_Z11sub_1979310z:\n"
  "  b _Z11sub_1979310Pjij\n"
  ".thumb\n"
);
// sub_1981950(...) -> sub_1981950(__sFILE* (**)(int, char const*, char))
__asm__(
  ".section .text.g4_bridge_258,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1981950z\n"
  ".type _Z11sub_1981950z, %function\n"
  "_Z11sub_1981950z:\n"
  "  b _Z11sub_1981950PPFP7__sFILEiPKccE\n"
  ".thumb\n"
);
// sub_12AE8B0(...) -> sub_12AE8B0(unsigned int*, int, int, int, int)
__asm__(
  ".section .text.g4_bridge_259,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AE8B0z\n"
  ".type _Z11sub_12AE8B0z, %function\n"
  "_Z11sub_12AE8B0z:\n"
  "  b _Z11sub_12AE8B0Pjiiii\n"
  ".thumb\n"
);
// sub_12AEB30(...) -> sub_12AEB30(int, int)
__asm__(
  ".section .text.g4_bridge_260,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AEB30z\n"
  ".type _Z11sub_12AEB30z, %function\n"
  "_Z11sub_12AEB30z:\n"
  "  b _Z11sub_12AEB30ii\n"
  ".thumb\n"
);
// sub_12A7CF0(...) -> sub_12A7CF0(int, unsigned int)
__asm__(
  ".section .text.g4_bridge_261,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12A7CF0z\n"
  ".type _Z11sub_12A7CF0z, %function\n"
  "_Z11sub_12A7CF0z:\n"
  "  b _Z11sub_12A7CF0ij\n"
  ".thumb\n"
);
// sub_12AED50(...) -> sub_12AED50(int, int, int, int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_262,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AED50z\n"
  ".type _Z11sub_12AED50z, %function\n"
  "_Z11sub_12AED50z:\n"
  "  b _Z11sub_12AED50iiiiPj\n"
  ".thumb\n"
);
// sub_12AEDB0(...) -> sub_12AEDB0(int, int, int)
__asm__(
  ".section .text.g4_bridge_263,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AEDB0z\n"
  ".type _Z11sub_12AEDB0z, %function\n"
  "_Z11sub_12AEDB0z:\n"
  "  b _Z11sub_12AEDB0iii\n"
  ".thumb\n"
);
// sub_12AEE30(...) -> sub_12AEE30(int, int, int)
__asm__(
  ".section .text.g4_bridge_264,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AEE30z\n"
  ".type _Z11sub_12AEE30z, %function\n"
  "_Z11sub_12AEE30z:\n"
  "  b _Z11sub_12AEE30iii\n"
  ".thumb\n"
);
// sub_12AF200(...) -> sub_12AF200(int, int, int, int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_265,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AF200z\n"
  ".type _Z11sub_12AF200z, %function\n"
  "_Z11sub_12AF200z:\n"
  "  b _Z11sub_12AF200iiiPiPj\n"
  ".thumb\n"
);
// sub_12AF320(...) -> sub_12AF320(int, int, int, int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_266,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AF320z\n"
  ".type _Z11sub_12AF320z, %function\n"
  "_Z11sub_12AF320z:\n"
  "  b _Z11sub_12AF320iiiPiPj\n"
  ".thumb\n"
);
// sub_12AEC50(...) -> sub_12AEC50(int, int, int, int)
__asm__(
  ".section .text.g4_bridge_267,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AEC50z\n"
  ".type _Z11sub_12AEC50z, %function\n"
  "_Z11sub_12AEC50z:\n"
  "  b _Z11sub_12AEC50iiii\n"
  ".thumb\n"
);
// sub_12AECD0(...) -> sub_12AECD0(int, int, int, int)
__asm__(
  ".section .text.g4_bridge_268,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AECD0z\n"
  ".type _Z11sub_12AECD0z, %function\n"
  "_Z11sub_12AECD0z:\n"
  "  b _Z11sub_12AECD0iiii\n"
  ".thumb\n"
);
// sub_12AF070(...) -> sub_12AF070(unsigned int*, int, int, int*)
__asm__(
  ".section .text.g4_bridge_269,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AF070z\n"
  ".type _Z11sub_12AF070z, %function\n"
  "_Z11sub_12AF070z:\n"
  "  b _Z11sub_12AF070PjiiPi\n"
  ".thumb\n"
);
// sub_12AEEB0(...) -> sub_12AEEB0(int, int, int, int, int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_270,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AEEB0z\n"
  ".type _Z11sub_12AEEB0z, %function\n"
  "_Z11sub_12AEEB0z:\n"
  "  b _Z11sub_12AEEB0iiiiPiPj\n"
  ".thumb\n"
);
// sub_12AEBE0(...) -> sub_12AEBE0(int, int, int, unsigned char*, int)
__asm__(
  ".section .text.g4_bridge_271,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AEBE0z\n"
  ".type _Z11sub_12AEBE0z, %function\n"
  "_Z11sub_12AEBE0z:\n"
  "  b _Z11sub_12AEBE0iiiPhi\n"
  ".thumb\n"
);
// sub_12AEFD0(...) -> sub_12AEFD0(int, int, char*, unsigned int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_272,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AEFD0z\n"
  ".type _Z11sub_12AEFD0z, %function\n"
  "_Z11sub_12AEFD0z:\n"
  "  b _Z11sub_12AEFD0iiPcjPj\n"
  ".thumb\n"
);
// sub_12B1552(...) -> sub_12B1552(unsigned int*, int, unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_273,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12B1552z\n"
  ".type _Z11sub_12B1552z, %function\n"
  "_Z11sub_12B1552z:\n"
  "  b _Z11sub_12B1552PjiS_S_\n"
  ".thumb\n"
);
// sub_197C6D0(...) -> sub_197C6D0(int, void const**, unsigned int*)
__asm__(
  ".section .text.g4_bridge_274,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_197C6D0z\n"
  ".type _Z11sub_197C6D0z, %function\n"
  "_Z11sub_197C6D0z:\n"
  "  b _Z11sub_197C6D0iPPKvPj\n"
  ".thumb\n"
);
// sub_AD9FC0(...) -> sub_AD9FC0(int)
__asm__(
  ".section .text.g4_bridge_275,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_AD9FC0z\n"
  ".type _Z10sub_AD9FC0z, %function\n"
  "_Z10sub_AD9FC0z:\n"
  "  b _Z10sub_AD9FC0i\n"
  ".thumb\n"
);
// sub_197BE40(...) -> sub_197BE40(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_276,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_197BE40z\n"
  ".type _Z11sub_197BE40z, %function\n"
  "_Z11sub_197BE40z:\n"
  "  b _Z11sub_197BE40Pji\n"
  ".thumb\n"
);
// sub_53C5A0(...) -> sub_53C5A0(int)
__asm__(
  ".section .text.g4_bridge_277,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_53C5A0z\n"
  ".type _Z10sub_53C5A0z, %function\n"
  "_Z10sub_53C5A0z:\n"
  "  b _Z10sub_53C5A0i\n"
  ".thumb\n"
);
// sub_AD4BF0(...) -> sub_AD4BF0(int)
__asm__(
  ".section .text.g4_bridge_278,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_AD4BF0z\n"
  ".type _Z10sub_AD4BF0z, %function\n"
  "_Z10sub_AD4BF0z:\n"
  "  b _Z10sub_AD4BF0i\n"
  ".thumb\n"
);
// sub_12B3840(...) -> sub_12B3840()
__asm__(
  ".section .text.g4_bridge_279,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12B3840z\n"
  ".type _Z11sub_12B3840z, %function\n"
  "_Z11sub_12B3840z:\n"
  "  b _Z11sub_12B3840v\n"
  ".thumb\n"
);
// sub_12B2C00(...) -> sub_12B2C00()
__asm__(
  ".section .text.g4_bridge_280,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12B2C00z\n"
  ".type _Z11sub_12B2C00z, %function\n"
  "_Z11sub_12B2C00z:\n"
  "  b _Z11sub_12B2C00v\n"
  ".thumb\n"
);
// explicit map -> _Z11sub_12CF530i
__asm__(
  ".section .text.g4_bridge_281,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12B3810z\n"
  ".type _Z11sub_12B3810z, %function\n"
  "_Z11sub_12B3810z:\n"
  "  b _Z11sub_12CF530i\n"
  ".thumb\n"
);
// explicit map -> _Z11sub_12C8910Pv
__asm__(
  ".section .text.g4_bridge_282,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12B3820z\n"
  ".type _Z11sub_12B3820z, %function\n"
  "_Z11sub_12B3820z:\n"
  "  b _Z11sub_12C8910Pv\n"
  ".thumb\n"
);
// sub_12B3850(...) -> sub_12B3850(unsigned int*, unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_283,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12B3850z\n"
  ".type _Z11sub_12B3850z, %function\n"
  "_Z11sub_12B3850z:\n"
  "  b _Z11sub_12B3850PjS_i\n"
  ".thumb\n"
);
// sub_12B43A0(...) -> sub_12B43A0(int, unsigned int*, int, unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_284,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12B43A0z\n"
  ".type _Z11sub_12B43A0z, %function\n"
  "_Z11sub_12B43A0z:\n"
  "  b _Z11sub_12B43A0iPjiS_i\n"
  ".thumb\n"
);
// sub_12B4260(...) -> sub_12B4260(char*)
__asm__(
  ".section .text.g4_bridge_285,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12B4260z\n"
  ".type _Z11sub_12B4260z, %function\n"
  "_Z11sub_12B4260z:\n"
  "  b _Z11sub_12B4260Pc\n"
  ".thumb\n"
);
// sub_12B3830(...) -> sub_12B3830()
__asm__(
  ".section .text.g4_bridge_286,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12B3830z\n"
  ".type _Z11sub_12B3830z, %function\n"
  "_Z11sub_12B3830z:\n"
  "  b _Z11sub_12B3830v\n"
  ".thumb\n"
);
// sub_12E0A10(...) -> sub_12E0A10(int, int, int)
__asm__(
  ".section .text.g4_bridge_287,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12E0A10z\n"
  ".type _Z11sub_12E0A10z, %function\n"
  "_Z11sub_12E0A10z:\n"
  "  b _Z11sub_12E0A10iii\n"
  ".thumb\n"
);
// sub_12C711E(...) -> sub_12C711E(int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_288,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C711Ez\n"
  ".type _Z11sub_12C711Ez, %function\n"
  "_Z11sub_12C711Ez:\n"
  "  b _Z11sub_12C711EiPj\n"
  ".thumb\n"
);
// sub_12C7690(...) -> sub_12C7690(int)
__asm__(
  ".section .text.g4_bridge_289,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C7690z\n"
  ".type _Z11sub_12C7690z, %function\n"
  "_Z11sub_12C7690z:\n"
  "  b _Z11sub_12C7690i\n"
  ".thumb\n"
);
// sub_17A61D0(...) -> sub_17A61D0(int, int, int*)
__asm__(
  ".section .text.g4_bridge_290,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_17A61D0z\n"
  ".type _Z11sub_17A61D0z, %function\n"
  "_Z11sub_17A61D0z:\n"
  "  b _Z11sub_17A61D0iiPi\n"
  ".thumb\n"
);
// sub_179BEC0(...) -> sub_179BEC0(__m128i)
__asm__(
  ".section .text.g4_bridge_291,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_179BEC0z\n"
  ".type _Z11sub_179BEC0z, %function\n"
  "_Z11sub_179BEC0z:\n"
  "  b _Z11sub_179BEC07__m128i\n"
  ".thumb\n"
);
// sub_179C0D0(...) -> sub_179C0D0(float*, float*, float*)
__asm__(
  ".section .text.g4_bridge_292,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_179C0D0z\n"
  ".type _Z11sub_179C0D0z, %function\n"
  "_Z11sub_179C0D0z:\n"
  "  b _Z11sub_179C0D0PfS_S_\n"
  ".thumb\n"
);
// sub_179BF90(...) -> sub_179BF90(unsigned char, int, int, int, float**)
__asm__(
  ".section .text.g4_bridge_293,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_179BF90z\n"
  ".type _Z11sub_179BF90z, %function\n"
  "_Z11sub_179BF90z:\n"
  "  b _Z11sub_179BF90hiiiPPf\n"
  ".thumb\n"
);
// sub_1283E86(...) -> sub_1283E86()
__asm__(
  ".section .text.g4_bridge_294,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1283E86z\n"
  ".type _Z11sub_1283E86z, %function\n"
  "_Z11sub_1283E86z:\n"
  "  b _Z11sub_1283E86v\n"
  ".thumb\n"
);
// sub_179CC20(...) -> sub_179CC20(int, int, float*, float*, float**)
__asm__(
  ".section .text.g4_bridge_295,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_179CC20z\n"
  ".type _Z11sub_179CC20z, %function\n"
  "_Z11sub_179CC20z:\n"
  "  b _Z11sub_179CC20iiPfS_PS_\n"
  ".thumb\n"
);
// sub_179C780(...) -> sub_179C780(float*, int, float*, float*, float*, float*, float*, float*)
__asm__(
  ".section .text.g4_bridge_296,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_179C780z\n"
  ".type _Z11sub_179C780z, %function\n"
  "_Z11sub_179C780z:\n"
  "  b _Z11sub_179C780PfiS_S_S_S_S_S_\n"
  ".thumb\n"
);
// sub_179D4F0(...) -> sub_179D4F0(int, int, float*, float*, float**)
__asm__(
  ".section .text.g4_bridge_297,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_179D4F0z\n"
  ".type _Z11sub_179D4F0z, %function\n"
  "_Z11sub_179D4F0z:\n"
  "  b _Z11sub_179D4F0iiPfS_PS_\n"
  ".thumb\n"
);
// sub_179C3F0(...) -> sub_179C3F0(int, int, float**)
__asm__(
  ".section .text.g4_bridge_298,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_179C3F0z\n"
  ".type _Z11sub_179C3F0z, %function\n"
  "_Z11sub_179C3F0z:\n"
  "  b _Z11sub_179C3F0iiPPf\n"
  ".thumb\n"
);
// sub_12C4010(...) -> sub_12C4010(void**)
__asm__(
  ".section .text.g4_bridge_299,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C4010z\n"
  ".type _Z11sub_12C4010z, %function\n"
  "_Z11sub_12C4010z:\n"
  "  b _Z11sub_12C4010PPv\n"
  ".thumb\n"
);
// sub_128F1F0(...) -> sub_128F1F0(int, unsigned int)
__asm__(
  ".section .text.g4_bridge_300,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_128F1F0z\n"
  ".type _Z11sub_128F1F0z, %function\n"
  "_Z11sub_128F1F0z:\n"
  "  b _Z11sub_128F1F0ij\n"
  ".thumb\n"
);
// sub_12C3AD0(...) -> sub_12C3AD0(int, int, int)
__asm__(
  ".section .text.g4_bridge_301,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C3AD0z\n"
  ".type _Z11sub_12C3AD0z, %function\n"
  "_Z11sub_12C3AD0z:\n"
  "  b _Z11sub_12C3AD0iii\n"
  ".thumb\n"
);
// sub_A23BD0(...) -> sub_A23BD0(int)
__asm__(
  ".section .text.g4_bridge_302,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_A23BD0z\n"
  ".type _Z10sub_A23BD0z, %function\n"
  "_Z10sub_A23BD0z:\n"
  "  b _Z10sub_A23BD0i\n"
  ".thumb\n"
);
// sub_12C4050(...) -> sub_12C4050(int, int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_303,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C4050z\n"
  ".type _Z11sub_12C4050z, %function\n"
  "_Z11sub_12C4050z:\n"
  "  b _Z11sub_12C4050iiPj\n"
  ".thumb\n"
);
// sub_17A6B00(...) -> sub_17A6B00(float*, float*, float*)
__asm__(
  ".section .text.g4_bridge_304,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_17A6B00z\n"
  ".type _Z11sub_17A6B00z, %function\n"
  "_Z11sub_17A6B00z:\n"
  "  b _Z11sub_17A6B00PfS_S_\n"
  ".thumb\n"
);
// sub_128F380(...) -> sub_128F380(int, unsigned int)
__asm__(
  ".section .text.g4_bridge_305,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_128F380z\n"
  ".type _Z11sub_128F380z, %function\n"
  "_Z11sub_128F380z:\n"
  "  b _Z11sub_128F380ij\n"
  ".thumb\n"
);
// sub_17A6A70(...) -> sub_17A6A70(__m128i)
__asm__(
  ".section .text.g4_bridge_306,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_17A6A70z\n"
  ".type _Z11sub_17A6A70z, %function\n"
  "_Z11sub_17A6A70z:\n"
  "  b _Z11sub_17A6A707__m128i\n"
  ".thumb\n"
);
// sub_12C3AA0(...) -> sub_12C3AA0(int)
__asm__(
  ".section .text.g4_bridge_307,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C3AA0z\n"
  ".type _Z11sub_12C3AA0z, %function\n"
  "_Z11sub_12C3AA0z:\n"
  "  b _Z11sub_12C3AA0i\n"
  ".thumb\n"
);
// sub_12C3590(...) -> sub_12C3590(int)
__asm__(
  ".section .text.g4_bridge_308,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C3590z\n"
  ".type _Z11sub_12C3590z, %function\n"
  "_Z11sub_12C3590z:\n"
  "  b _Z11sub_12C3590i\n"
  ".thumb\n"
);
// sub_12C4650(...) -> sub_12C4650(unsigned int*)
__asm__(
  ".section .text.g4_bridge_309,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C4650z\n"
  ".type _Z11sub_12C4650z, %function\n"
  "_Z11sub_12C4650z:\n"
  "  b _Z11sub_12C4650Pj\n"
  ".thumb\n"
);
// sub_12C47E0(...) -> sub_12C47E0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_310,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C47E0z\n"
  ".type _Z11sub_12C47E0z, %function\n"
  "_Z11sub_12C47E0z:\n"
  "  b _Z11sub_12C47E0Pj\n"
  ".thumb\n"
);
// sub_1283E42(...) -> sub_1283E42()
__asm__(
  ".section .text.g4_bridge_311,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1283E42z\n"
  ".type _Z11sub_1283E42z, %function\n"
  "_Z11sub_1283E42z:\n"
  "  b _Z11sub_1283E42v\n"
  ".thumb\n"
);
// sub_1283ED7(...) -> sub_1283ED7()
__asm__(
  ".section .text.g4_bridge_312,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1283ED7z\n"
  ".type _Z11sub_1283ED7z, %function\n"
  "_Z11sub_1283ED7z:\n"
  "  b _Z11sub_1283ED7v\n"
  ".thumb\n"
);
// sub_1283FF8(...) -> sub_1283FF8()
__asm__(
  ".section .text.g4_bridge_313,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1283FF8z\n"
  ".type _Z11sub_1283FF8z, %function\n"
  "_Z11sub_1283FF8z:\n"
  "  b _Z11sub_1283FF8v\n"
  ".thumb\n"
);
// sub_1283F9F(...) -> sub_1283F9F()
__asm__(
  ".section .text.g4_bridge_314,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1283F9Fz\n"
  ".type _Z11sub_1283F9Fz, %function\n"
  "_Z11sub_1283F9Fz:\n"
  "  b _Z11sub_1283F9Fv\n"
  ".thumb\n"
);
// sub_1283760(...) -> sub_1283760(int*, unsigned int*, int, int)
__asm__(
  ".section .text.g4_bridge_315,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1283760z\n"
  ".type _Z11sub_1283760z, %function\n"
  "_Z11sub_1283760z:\n"
  "  b _Z11sub_1283760PiPjii\n"
  ".thumb\n"
);
// sub_128409E(...) -> sub_128409E()
__asm__(
  ".section .text.g4_bridge_316,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_128409Ez\n"
  ".type _Z11sub_128409Ez, %function\n"
  "_Z11sub_128409Ez:\n"
  "  b _Z11sub_128409Ev\n"
  ".thumb\n"
);
// sub_12C8500(...) -> sub_12C8500(int, hb_set_t*, int)
__asm__(
  ".section .text.g4_bridge_317,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C8500z\n"
  ".type _Z11sub_12C8500z, %function\n"
  "_Z11sub_12C8500z:\n"
  "  b _Z11sub_12C8500iP8hb_set_ti\n"
  ".thumb\n"
);
// sub_19042A0(...) -> sub_19042A0(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_318,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19042A0z\n"
  ".type _Z11sub_19042A0z, %function\n"
  "_Z11sub_19042A0z:\n"
  "  b _Z11sub_19042A0Pji\n"
  ".thumb\n"
);
// sub_1904260(...) -> sub_1904260(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_319,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1904260z\n"
  ".type _Z11sub_1904260z, %function\n"
  "_Z11sub_1904260z:\n"
  "  b _Z11sub_1904260Pji\n"
  ".thumb\n"
);
// sub_1243080(...) -> sub_1243080(unsigned int*)
__asm__(
  ".section .text.g4_bridge_320,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1243080z\n"
  ".type _Z11sub_1243080z, %function\n"
  "_Z11sub_1243080z:\n"
  "  b _Z11sub_1243080Pj\n"
  ".thumb\n"
);
// sub_12CA850(...) -> sub_12CA850(int, int, unsigned int, unsigned int*, int*, hb_set_t*)
__asm__(
  ".section .text.g4_bridge_321,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CA850z\n"
  ".type _Z11sub_12CA850z, %function\n"
  "_Z11sub_12CA850z:\n"
  "  b _Z11sub_12CA850iijPjPiP8hb_set_t\n"
  ".thumb\n"
);
// sub_12CCD70(...) -> sub_12CCD70(int, unsigned int, unsigned int*, int, int)
__asm__(
  ".section .text.g4_bridge_322,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CCD70z\n"
  ".type _Z11sub_12CCD70z, %function\n"
  "_Z11sub_12CCD70z:\n"
  "  b _Z11sub_12CCD70ijPjii\n"
  ".thumb\n"
);
// sub_12C76F0(...) -> sub_12C76F0(long long, int)
__asm__(
  ".section .text.g4_bridge_323,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C76F0z\n"
  ".type _Z11sub_12C76F0z, %function\n"
  "_Z11sub_12C76F0z:\n"
  "  b _Z11sub_12C76F0xi\n"
  ".thumb\n"
);
// sub_12C7830(...) -> sub_12C7830(int, int, int)
__asm__(
  ".section .text.g4_bridge_324,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C7830z\n"
  ".type _Z11sub_12C7830z, %function\n"
  "_Z11sub_12C7830z:\n"
  "  b _Z11sub_12C7830iii\n"
  ".thumb\n"
);
// sub_12C7A90(...) -> sub_12C7A90(int, unsigned char*, unsigned char*)
__asm__(
  ".section .text.g4_bridge_325,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C7A90z\n"
  ".type _Z11sub_12C7A90z, %function\n"
  "_Z11sub_12C7A90z:\n"
  "  b _Z11sub_12C7A90iPhS_\n"
  ".thumb\n"
);
// sub_12C8740(...) -> sub_12C8740(hb_set_t*, unsigned char*, int)
__asm__(
  ".section .text.g4_bridge_326,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C8740z\n"
  ".type _Z11sub_12C8740z, %function\n"
  "_Z11sub_12C8740z:\n"
  "  b _Z11sub_12C8740P8hb_set_tPhi\n"
  ".thumb\n"
);
// explicit map -> _ZN9hb_font_t10em_scale_yEPS_s
__asm__(
  ".section .text.g4_bridge_327,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10em_scale_yP9hb_font_ts\n"
  ".type _Z10em_scale_yP9hb_font_ts, %function\n"
  "_Z10em_scale_yP9hb_font_ts:\n"
  "  b _ZN9hb_font_t10em_scale_yEPS_s\n"
  ".thumb\n"
);
// sub_1295220(...) -> sub_1295220(int, int)
__asm__(
  ".section .text.g4_bridge_328,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1295220z\n"
  ".type _Z11sub_1295220z, %function\n"
  "_Z11sub_1295220z:\n"
  "  b _Z11sub_1295220ii\n"
  ".thumb\n"
);
// sub_1295B70(...) -> sub_1295B70(char*, float*, float*, int)
__asm__(
  ".section .text.g4_bridge_329,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1295B70z\n"
  ".type _Z11sub_1295B70z, %function\n"
  "_Z11sub_1295B70z:\n"
  "  b _Z11sub_1295B70PcPfS0_i\n"
  ".thumb\n"
);
// sub_12A9050(...) -> sub_12A9050(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_330,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12A9050z\n"
  ".type _Z11sub_12A9050z, %function\n"
  "_Z11sub_12A9050z:\n"
  "  b _Z11sub_12A9050Pji\n"
  ".thumb\n"
);
// int marisa::grimoire::algorithm::details::sort<marisa::grimoire::trie::ReverseKey*>(char*, unsigned int, unsig
__asm__(
  ".section .text.g4_bridge_331,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6marisa8grimoire9algorithm7details4sortIPNS0_4trie10ReverseKeyEEEiPcjj\n"
  ".type _ZN6marisa8grimoire9algorithm7details4sortIPNS0_4trie10ReverseKeyEEEiPcjj, %function\n"
  "_ZN6marisa8grimoire9algorithm7details4sortIPNS0_4trie10ReverseKeyEEEiPcjj:\n"
  "  b _ZN6marisa8grimoire9algorithm7details4sortIPNS0_4trie10ReverseKeyEEEiPjjj\n"
  ".thumb\n"
);
// sub_12CB8A0(...) -> sub_12CB8A0(int, unsigned int, int, int, int, unsigned int*, unsigned int*, bool*, int*)
__asm__(
  ".section .text.g4_bridge_332,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CB8A0z\n"
  ".type _Z11sub_12CB8A0z, %function\n"
  "_Z11sub_12CB8A0z:\n"
  "  b _Z11sub_12CB8A0ijiiiPjS_PbPi\n"
  ".thumb\n"
);
// sub_12A9B60(...) -> sub_12A9B60(unsigned int*, unsigned int, unsigned int)
__asm__(
  ".section .text.g4_bridge_333,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12A9B60z\n"
  ".type _Z11sub_12A9B60z, %function\n"
  "_Z11sub_12A9B60z:\n"
  "  b _Z11sub_12A9B60Pjjj\n"
  ".thumb\n"
);
// sub_12A7DE0(...) -> sub_12A7DE0(int, int, int)
__asm__(
  ".section .text.g4_bridge_334,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12A7DE0z\n"
  ".type _Z11sub_12A7DE0z, %function\n"
  "_Z11sub_12A7DE0z:\n"
  "  b _Z11sub_12A7DE0iii\n"
  ".thumb\n"
);
// sub_12C7170(...) -> sub_12C7170(int, unsigned char*)
__asm__(
  ".section .text.g4_bridge_335,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C7170z\n"
  ".type _Z11sub_12C7170z, %function\n"
  "_Z11sub_12C7170z:\n"
  "  b _Z11sub_12C7170iPh\n"
  ".thumb\n"
);
// sub_12CBC20(...) -> sub_12CBC20(unsigned int*, unsigned int, int, int, unsigned char*, int*)
__asm__(
  ".section .text.g4_bridge_336,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CBC20z\n"
  ".type _Z11sub_12CBC20z, %function\n"
  "_Z11sub_12CBC20z:\n"
  "  b _Z11sub_12CBC20PjjiiPhPi\n"
  ".thumb\n"
);
// sub_12CC170(...) -> sub_12CC170(unsigned int*, unsigned int, int, unsigned int, int, int, int, int, unsigned c
__asm__(
  ".section .text.g4_bridge_337,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CC170z\n"
  ".type _Z11sub_12CC170z, %function\n"
  "_Z11sub_12CC170z:\n"
  "  b _Z11sub_12CC170PjjijiiiiPhPi\n"
  ".thumb\n"
);
// sub_12CB1B0(...) -> sub_12CB1B0(unsigned int, unsigned char*, OT::ClassDef::Self*)
__asm__(
  ".section .text.g4_bridge_338,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CB1B0z\n"
  ".type _Z11sub_12CB1B0z, %function\n"
  "_Z11sub_12CB1B0z:\n"
  "  b _Z11sub_12CB1B0jPhPN2OT8ClassDef4SelfE\n"
  ".thumb\n"
);
// sub_12CB400(...) -> sub_12CB400(unsigned int, unsigned char*, int)
__asm__(
  ".section .text.g4_bridge_339,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CB400z\n"
  ".type _Z11sub_12CB400z, %function\n"
  "_Z11sub_12CB400z:\n"
  "  b _Z11sub_12CB400jPhi\n"
  ".thumb\n"
);
// sub_12CBF80(...) -> sub_12CBF80(int, unsigned int, int, int (*)(unsigned int, int, int), int)
__asm__(
  ".section .text.g4_bridge_340,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CBF80z\n"
  ".type _Z11sub_12CBF80z, %function\n"
  "_Z11sub_12CBF80z:\n"
  "  b _Z11sub_12CBF80ijiPFijiiEi\n"
  ".thumb\n"
);
// sub_12CBCF0(...) -> sub_12CBCF0(int, int, int, int, int, int)
__asm__(
  ".section .text.g4_bridge_341,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CBCF0z\n"
  ".type _Z11sub_12CBCF0z, %function\n"
  "_Z11sub_12CBCF0z:\n"
  "  b _Z11sub_12CBCF0iiiiii\n"
  ".thumb\n"
);
// sub_12A89F0(...) -> sub_12A89F0(int, int)
__asm__(
  ".section .text.g4_bridge_342,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12A89F0z\n"
  ".type _Z11sub_12A89F0z, %function\n"
  "_Z11sub_12A89F0z:\n"
  "  b _Z11sub_12A89F0ii\n"
  ".thumb\n"
);
// sub_12C7D30(...) -> sub_12C7D30(int, int, int, int, char)
__asm__(
  ".section .text.g4_bridge_343,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C7D30z\n"
  ".type _Z11sub_12C7D30z, %function\n"
  "_Z11sub_12C7D30z:\n"
  "  b _Z11sub_12C7D30iiiic\n"
  ".thumb\n"
);
// sub_12CBDE0(...) -> sub_12CBDE0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_344,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CBDE0z\n"
  ".type _Z11sub_12CBDE0z, %function\n"
  "_Z11sub_12CBDE0z:\n"
  "  b _Z11sub_12CBDE0Pj\n"
  ".thumb\n"
);
// sub_12D38B0(...) -> sub_12D38B0(unsigned char*, hb_font_t**, unsigned int*, unsigned int, unsigned int, unsign
__asm__(
  ".section .text.g4_bridge_345,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12D38B0z\n"
  ".type _Z11sub_12D38B0z, %function\n"
  "_Z11sub_12D38B0z:\n"
  "  b _Z11sub_12D38B0PhPP9hb_font_tPjjjS_ji\n"
  ".thumb\n"
);
// sub_12CD140(...) -> sub_12CD140(hb_set_t*, unsigned char*, int)
__asm__(
  ".section .text.g4_bridge_346,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CD140z\n"
  ".type _Z11sub_12CD140z, %function\n"
  "_Z11sub_12CD140z:\n"
  "  b _Z11sub_12CD140P8hb_set_tPhi\n"
  ".thumb\n"
);
// sub_12C8210(...) -> sub_12C8210(int, int, unsigned int)
__asm__(
  ".section .text.g4_bridge_347,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C8210z\n"
  ".type _Z11sub_12C8210z, %function\n"
  "_Z11sub_12C8210z:\n"
  "  b _Z11sub_12C8210iij\n"
  ".thumb\n"
);
// sub_12C7200(...) -> sub_12C7200(int, unsigned char*)
__asm__(
  ".section .text.g4_bridge_348,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C7200z\n"
  ".type _Z11sub_12C7200z, %function\n"
  "_Z11sub_12C7200z:\n"
  "  b _Z11sub_12C7200iPh\n"
  ".thumb\n"
);
// sub_12C84C0(...) -> sub_12C84C0(hb_set_t*, unsigned char*)
__asm__(
  ".section .text.g4_bridge_349,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C84C0z\n"
  ".type _Z11sub_12C84C0z, %function\n"
  "_Z11sub_12C84C0z:\n"
  "  b _Z11sub_12C84C0P8hb_set_tPh\n"
  ".thumb\n"
);
// sub_12C8630(...) -> sub_12C8630(hb_set_t*, unsigned char*, unsigned char*)
__asm__(
  ".section .text.g4_bridge_350,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C8630z\n"
  ".type _Z11sub_12C8630z, %function\n"
  "_Z11sub_12C8630z:\n"
  "  b _Z11sub_12C8630P8hb_set_tPhS1_\n"
  ".thumb\n"
);
// sub_12CD190(...) -> sub_12CD190(unsigned char*, int)
__asm__(
  ".section .text.g4_bridge_351,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CD190z\n"
  ".type _Z11sub_12CD190z, %function\n"
  "_Z11sub_12CD190z:\n"
  "  b _Z11sub_12CD190Phi\n"
  ".thumb\n"
);
// sub_12CC3A0(...) -> sub_12CC3A0(unsigned char*, OT::hb_apply_context_t::Self*)
__asm__(
  ".section .text.g4_bridge_352,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CC3A0z\n"
  ".type _Z11sub_12CC3A0z, %function\n"
  "_Z11sub_12CC3A0z:\n"
  "  b _Z11sub_12CC3A0PhPN2OT18hb_apply_context_t4SelfE\n"
  ".thumb\n"
);
// sub_12CC2B0(...) -> sub_12CC2B0(unsigned char*, int)
__asm__(
  ".section .text.g4_bridge_353,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CC2B0z\n"
  ".type _Z11sub_12CC2B0z, %function\n"
  "_Z11sub_12CC2B0z:\n"
  "  b _Z11sub_12CC2B0Phi\n"
  ".thumb\n"
);
// sub_12CC4F0(...) -> sub_12CC4F0(unsigned char*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_354,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CC4F0z\n"
  ".type _Z11sub_12CC4F0z, %function\n"
  "_Z11sub_12CC4F0z:\n"
  "  b _Z11sub_12CC4F0PhPj\n"
  ".thumb\n"
);
// sub_12C8790(...) -> sub_12C8790(unsigned char*, int)
__asm__(
  ".section .text.g4_bridge_355,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C8790z\n"
  ".type _Z11sub_12C8790z, %function\n"
  "_Z11sub_12C8790z:\n"
  "  b _Z11sub_12C8790Phi\n"
  ".thumb\n"
);
// sub_12CD2E0(...) -> sub_12CD2E0(unsigned char*, int)
__asm__(
  ".section .text.g4_bridge_356,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CD2E0z\n"
  ".type _Z11sub_12CD2E0z, %function\n"
  "_Z11sub_12CD2E0z:\n"
  "  b _Z11sub_12CD2E0Phi\n"
  ".thumb\n"
);
// sub_12E1C00(...) -> sub_12E1C00(char*, char*)
__asm__(
  ".section .text.g4_bridge_357,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12E1C00z\n"
  ".type _Z11sub_12E1C00z, %function\n"
  "_Z11sub_12E1C00z:\n"
  "  b _Z11sub_12E1C00PcS_\n"
  ".thumb\n"
);
// sub_16752D0(...) -> sub_16752D0()
__asm__(
  ".section .text.g4_bridge_358,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_16752D0z\n"
  ".type _Z11sub_16752D0z, %function\n"
  "_Z11sub_16752D0z:\n"
  "  b _Z11sub_16752D0v\n"
  ".thumb\n"
);
// marisa::grimoire::io::Mapper::Construct(void*) -> marisa::grimoire::io::Mapper::Construct(marisa::grimoire::io
__asm__(
  ".section .text.g4_bridge_359,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6marisa8grimoire2io6Mapper9ConstructEPv\n"
  ".type _ZN6marisa8grimoire2io6Mapper9ConstructEPv, %function\n"
  "_ZN6marisa8grimoire2io6Mapper9ConstructEPv:\n"
  "  b _ZN6marisa8grimoire2io6Mapper9ConstructEPNS2_4SelfE\n"
  ".thumb\n"
);
// sub_1292730(...) -> sub_1292730(int, marisa::grimoire::io::Mapper::Self*)
__asm__(
  ".section .text.g4_bridge_360,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1292730z\n"
  ".type _Z11sub_1292730z, %function\n"
  "_Z11sub_1292730z:\n"
  "  b _Z11sub_1292730iPN6marisa8grimoire2io6Mapper4SelfE\n"
  ".thumb\n"
);
// explicit map -> _ZN12hkSortedTreeIPN15hkgpCgoInternal8EdgeInfoES1_iLi16EE14traverseMinMaxINS0_14ErrorCollector
__asm__(
  ".section .text.g4_bridge_361,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN12hkSortedTreeIPN18g4_hkgpCgoInternal8EdgeInfoES1_iLi16EE14traverseMinMaxINS0_14ErrorCollectorEEEiPjPN17hkMemoryAllocator4SelfEi\n"
  ".type _ZN12hkSortedTreeIPN18g4_hkgpCgoInternal8EdgeInfoES1_iLi16EE14traverseMinMaxINS0_14ErrorCollectorEEEiPjPN17hkMemoryAllocator4SelfEi, %function\n"
  "_ZN12hkSortedTreeIPN18g4_hkgpCgoInternal8EdgeInfoES1_iLi16EE14traverseMinMaxINS0_14ErrorCollectorEEEiPjPN17hkMemoryAllocator4SelfEi:\n"
  "  b _ZN12hkSortedTreeIPN15hkgpCgoInternal8EdgeInfoES1_iLi16EE14traverseMinMaxINS0_14ErrorCollectorEEEiPjPN17hkMemoryAllocator4SelfEi\n"
  ".thumb\n"
);
// sub_16856C0(...) -> sub_16856C0(unsigned int*, unsigned int*, int*)
__asm__(
  ".section .text.g4_bridge_362,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_16856C0z\n"
  ".type _Z11sub_16856C0z, %function\n"
  "_Z11sub_16856C0z:\n"
  "  b _Z11sub_16856C0PjS_Pi\n"
  ".thumb\n"
);
// sub_16853E0(...) -> sub_16853E0(unsigned int*, unsigned int*, int*)
__asm__(
  ".section .text.g4_bridge_363,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_16853E0z\n"
  ".type _Z11sub_16853E0z, %function\n"
  "_Z11sub_16853E0z:\n"
  "  b _Z11sub_16853E0PjS_Pi\n"
  ".thumb\n"
);
// sub_1557DB0(...) -> sub_1557DB0(unsigned int*, unsigned int*, char*, short, char)
__asm__(
  ".section .text.g4_bridge_364,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1557DB0z\n"
  ".type _Z11sub_1557DB0z, %function\n"
  "_Z11sub_1557DB0z:\n"
  "  b _Z11sub_1557DB0PjS_Pcsc\n"
  ".thumb\n"
);
// sub_12A4270(...) -> sub_12A4270(char, int, unsigned int*, char*, int)
__asm__(
  ".section .text.g4_bridge_365,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12A4270z\n"
  ".type _Z11sub_12A4270z, %function\n"
  "_Z11sub_12A4270z:\n"
  "  b _Z11sub_12A4270ciPjPci\n"
  ".thumb\n"
);
// sub_1292430(...) -> sub_1292430(int, marisa::grimoire::io::Reader::Self*)
__asm__(
  ".section .text.g4_bridge_366,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1292430z\n"
  ".type _Z11sub_1292430z, %function\n"
  "_Z11sub_1292430z:\n"
  "  b _Z11sub_1292430iPN6marisa8grimoire2io6Reader4SelfE\n"
  ".thumb\n"
);
// sub_155ACB0(...) -> sub_155ACB0(int, int, float, float, hkMemoryAllocator::Self*, int)
__asm__(
  ".section .text.g4_bridge_367,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_155ACB0z\n"
  ".type _Z11sub_155ACB0z, %function\n"
  "_Z11sub_155ACB0z:\n"
  "  b _Z11sub_155ACB0iiffPN17hkMemoryAllocator4SelfEi\n"
  ".thumb\n"
);
// sub_155E270(...) -> sub_155E270(hkOstream::Self*, unsigned int, int)
__asm__(
  ".section .text.g4_bridge_368,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_155E270z\n"
  ".type _Z11sub_155E270z, %function\n"
  "_Z11sub_155E270z:\n"
  "  b _Z11sub_155E270PN9hkOstream4SelfEji\n"
  ".thumb\n"
);
// sub_12E0710(...) -> sub_12E0710(int, int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_369,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12E0710z\n"
  ".type _Z11sub_12E0710z, %function\n"
  "_Z11sub_12E0710z:\n"
  "  b _Z11sub_12E0710iiPj\n"
  ".thumb\n"
);
// sub_12E08A0(...) -> sub_12E08A0(unsigned int*, unsigned int, unsigned int, unsigned int)
__asm__(
  ".section .text.g4_bridge_370,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12E08A0z\n"
  ".type _Z11sub_12E08A0z, %function\n"
  "_Z11sub_12E08A0z:\n"
  "  b _Z11sub_12E08A0Pjjjj\n"
  ".thumb\n"
);
// sub_12E0BF0(...) -> sub_12E0BF0(int, int)
__asm__(
  ".section .text.g4_bridge_371,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12E0BF0z\n"
  ".type _Z11sub_12E0BF0z, %function\n"
  "_Z11sub_12E0BF0z:\n"
  "  b _Z11sub_12E0BF0ii\n"
  ".thumb\n"
);
// sub_12C1B90(...) -> sub_12C1B90(int, int, int)
__asm__(
  ".section .text.g4_bridge_372,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C1B90z\n"
  ".type _Z11sub_12C1B90z, %function\n"
  "_Z11sub_12C1B90z:\n"
  "  b _Z11sub_12C1B90iii\n"
  ".thumb\n"
);
// sub_12C2F30(...) -> sub_12C2F30(int, int, int)
__asm__(
  ".section .text.g4_bridge_373,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C2F30z\n"
  ".type _Z11sub_12C2F30z, %function\n"
  "_Z11sub_12C2F30z:\n"
  "  b _Z11sub_12C2F30iii\n"
  ".thumb\n"
);
// sub_12AA170(...) -> sub_12AA170(int, unsigned int, int, char*)
__asm__(
  ".section .text.g4_bridge_374,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12AA170z\n"
  ".type _Z11sub_12AA170z, %function\n"
  "_Z11sub_12AA170z:\n"
  "  b _Z11sub_12AA170ijiPc\n"
  ".thumb\n"
);
// sub_12CB270(...) -> sub_12CB270(int, int)
__asm__(
  ".section .text.g4_bridge_375,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CB270z\n"
  ".type _Z11sub_12CB270z, %function\n"
  "_Z11sub_12CB270z:\n"
  "  b _Z11sub_12CB270ii\n"
  ".thumb\n"
);
// sub_12CD7B0(...) -> sub_12CD7B0(unsigned int*, int, int, int)
__asm__(
  ".section .text.g4_bridge_376,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CD7B0z\n"
  ".type _Z11sub_12CD7B0z, %function\n"
  "_Z11sub_12CD7B0z:\n"
  "  b _Z11sub_12CD7B0Pjiii\n"
  ".thumb\n"
);
// sub_12CAC40(...) -> sub_12CAC40()
__asm__(
  ".section .text.g4_bridge_377,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CAC40z\n"
  ".type _Z11sub_12CAC40z, %function\n"
  "_Z11sub_12CAC40z:\n"
  "  b _Z11sub_12CAC40v\n"
  ".thumb\n"
);
// sub_12CACB0(...) -> sub_12CACB0(int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_378,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CACB0z\n"
  ".type _Z11sub_12CACB0z, %function\n"
  "_Z11sub_12CACB0z:\n"
  "  b _Z11sub_12CACB0iPj\n"
  ".thumb\n"
);
// sub_12B5E24(...) -> sub_12B5E24(unsigned int*, int, unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_379,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12B5E24z\n"
  ".type _Z11sub_12B5E24z, %function\n"
  "_Z11sub_12B5E24z:\n"
  "  b _Z11sub_12B5E24PjiS_S_\n"
  ".thumb\n"
);
// sub_12CD9D0(...) -> sub_12CD9D0(unsigned int*, int, int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_380,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CD9D0z\n"
  ".type _Z11sub_12CD9D0z, %function\n"
  "_Z11sub_12CD9D0z:\n"
  "  b _Z11sub_12CD9D0PjiiS_\n"
  ".thumb\n"
);
// sub_12CAD00(...) -> sub_12CAD00(int, int)
__asm__(
  ".section .text.g4_bridge_381,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CAD00z\n"
  ".type _Z11sub_12CAD00z, %function\n"
  "_Z11sub_12CAD00z:\n"
  "  b _Z11sub_12CAD00ii\n"
  ".thumb\n"
);
// sub_12C3090(...) -> sub_12C3090(int, int, int)
__asm__(
  ".section .text.g4_bridge_382,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C3090z\n"
  ".type _Z11sub_12C3090z, %function\n"
  "_Z11sub_12C3090z:\n"
  "  b _Z11sub_12C3090iii\n"
  ".thumb\n"
);
// sub_12C3330(...) -> sub_12C3330(int, int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_383,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C3330z\n"
  ".type _Z11sub_12C3330z, %function\n"
  "_Z11sub_12C3330z:\n"
  "  b _Z11sub_12C3330iiPj\n"
  ".thumb\n"
);
// sub_B73820(...) -> sub_B73820(long long)
__asm__(
  ".section .text.g4_bridge_384,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_B73820z\n"
  ".type _Z10sub_B73820z, %function\n"
  "_Z10sub_B73820z:\n"
  "  b _Z10sub_B73820x\n"
  ".thumb\n"
);
// sub_655F30(...) -> sub_655F30()
__asm__(
  ".section .text.g4_bridge_385,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_655F30z\n"
  ".type _Z10sub_655F30z, %function\n"
  "_Z10sub_655F30z:\n"
  "  b _Z10sub_655F30v\n"
  ".thumb\n"
);
// sub_12E0A70(...) -> sub_12E0A70(int, unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_386,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12E0A70z\n"
  ".type _Z11sub_12E0A70z, %function\n"
  "_Z11sub_12E0A70z:\n"
  "  b _Z11sub_12E0A70iPji\n"
  ".thumb\n"
);
// sub_12B6D50(...) -> sub_12B6D50(int, int, int)
__asm__(
  ".section .text.g4_bridge_387,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12B6D50z\n"
  ".type _Z11sub_12B6D50z, %function\n"
  "_Z11sub_12B6D50z:\n"
  "  b _Z11sub_12B6D50iii\n"
  ".thumb\n"
);
// sub_12B98C4(...) -> sub_12B98C4(int, int)
__asm__(
  ".section .text.g4_bridge_388,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12B98C4z\n"
  ".type _Z11sub_12B98C4z, %function\n"
  "_Z11sub_12B98C4z:\n"
  "  b _Z11sub_12B98C4ii\n"
  ".thumb\n"
);
// sub_12CD790(...) -> sub_12CD790(hb_set_digest_combiner_t<hb_set_digest_lowest_bits_t<unsigned long, 4u>, hb_se
__asm__(
  ".section .text.g4_bridge_389,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CD790z\n"
  ".type _Z11sub_12CD790z, %function\n"
  "_Z11sub_12CD790z:\n"
  "  b _Z11sub_12CD790P24hb_set_digest_combiner_tI27hb_set_digest_lowest_bits_tImLj4EES_IS0_ImLj0EES0_ImLj9EEEEPhS6_\n"
  ".thumb\n"
);
// sub_12BE140(...) -> sub_12BE140(unsigned int)
__asm__(
  ".section .text.g4_bridge_390,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12BE140z\n"
  ".type _Z11sub_12BE140z, %function\n"
  "_Z11sub_12BE140z:\n"
  "  b _Z11sub_12BE140j\n"
  ".thumb\n"
);
// sub_12BA790(...) -> sub_12BA790(int, int, unsigned int)
__asm__(
  ".section .text.g4_bridge_391,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12BA790z\n"
  ".type _Z11sub_12BA790z, %function\n"
  "_Z11sub_12BA790z:\n"
  "  b _Z11sub_12BA790iij\n"
  ".thumb\n"
);
// sub_12BD890(...) -> sub_12BD890(int, unsigned int*, hb_buffer_t*)
__asm__(
  ".section .text.g4_bridge_392,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12BD890z\n"
  ".type _Z11sub_12BD890z, %function\n"
  "_Z11sub_12BD890z:\n"
  "  b _Z11sub_12BD890iPjP11hb_buffer_t\n"
  ".thumb\n"
);
// sub_12BBE40(...) -> sub_12BBE40(int, int, int)
__asm__(
  ".section .text.g4_bridge_393,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12BBE40z\n"
  ".type _Z11sub_12BBE40z, %function\n"
  "_Z11sub_12BBE40z:\n"
  "  b _Z11sub_12BBE40iii\n"
  ".thumb\n"
);
// sub_F586A0(...) -> sub_F586A0(glitch::video::CNullDriver::Self*)
__asm__(
  ".section .text.g4_bridge_394,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_F586A0z\n"
  ".type _Z10sub_F586A0z, %function\n"
  "_Z10sub_F586A0z:\n"
  "  b _Z10sub_F586A0PN6glitch5video11CNullDriver4SelfE\n"
  ".thumb\n"
);
// sub_12BE710(...) -> sub_12BE710(int, int, unsigned int)
__asm__(
  ".section .text.g4_bridge_395,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12BE710z\n"
  ".type _Z11sub_12BE710z, %function\n"
  "_Z11sub_12BE710z:\n"
  "  b _Z11sub_12BE710iij\n"
  ".thumb\n"
);
// sub_12BED80(...) -> sub_12BED80(int, int, int)
__asm__(
  ".section .text.g4_bridge_396,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12BED80z\n"
  ".type _Z11sub_12BED80z, %function\n"
  "_Z11sub_12BED80z:\n"
  "  b _Z11sub_12BED80iii\n"
  ".thumb\n"
);
// sub_12BE680(...) -> sub_12BE680(int, int, int)
__asm__(
  ".section .text.g4_bridge_397,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12BE680z\n"
  ".type _Z11sub_12BE680z, %function\n"
  "_Z11sub_12BE680z:\n"
  "  b _Z11sub_12BE680iii\n"
  ".thumb\n"
);
// sub_12A8B20(...) -> sub_12A8B20(int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_398,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12A8B20z\n"
  ".type _Z11sub_12A8B20z, %function\n"
  "_Z11sub_12A8B20z:\n"
  "  b _Z11sub_12A8B20iPj\n"
  ".thumb\n"
);
// sub_12BF7F0(...) -> sub_12BF7F0(int, int, int)
__asm__(
  ".section .text.g4_bridge_399,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12BF7F0z\n"
  ".type _Z11sub_12BF7F0z, %function\n"
  "_Z11sub_12BF7F0z:\n"
  "  b _Z11sub_12BF7F0iii\n"
  ".thumb\n"
);
// sub_12BFC90(...) -> sub_12BFC90(int, int, int)
__asm__(
  ".section .text.g4_bridge_400,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12BFC90z\n"
  ".type _Z11sub_12BFC90z, %function\n"
  "_Z11sub_12BFC90z:\n"
  "  b _Z11sub_12BFC90iii\n"
  ".thumb\n"
);
// sub_12BF760(...) -> sub_12BF760(int, int, int)
__asm__(
  ".section .text.g4_bridge_401,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12BF760z\n"
  ".type _Z11sub_12BF760z, %function\n"
  "_Z11sub_12BF760z:\n"
  "  b _Z11sub_12BF760iii\n"
  ".thumb\n"
);
// sub_12A9D80(...) -> sub_12A9D80(unsigned int*, unsigned int, unsigned int)
__asm__(
  ".section .text.g4_bridge_402,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12A9D80z\n"
  ".type _Z11sub_12A9D80z, %function\n"
  "_Z11sub_12A9D80z:\n"
  "  b _Z11sub_12A9D80Pjjj\n"
  ".thumb\n"
);
// sub_12C0C30(...) -> sub_12C0C30(int, char, int, int, int, int, int, int, int, int, int, char, unsigned int*, i
__asm__(
  ".section .text.g4_bridge_403,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C0C30z\n"
  ".type _Z11sub_12C0C30z, %function\n"
  "_Z11sub_12C0C30z:\n"
  "  b _Z11sub_12C0C30iciiiiiiiiicPjiiii\n"
  ".thumb\n"
);
// sub_12A85A0(...) -> sub_12A85A0(int, unsigned int, int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_404,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12A85A0z\n"
  ".type _Z11sub_12A85A0z, %function\n"
  "_Z11sub_12A85A0z:\n"
  "  b _Z11sub_12A85A0ijiPj\n"
  ".thumb\n"
);
// sub_12C7190(...) -> sub_12C7190(int, int, int)
__asm__(
  ".section .text.g4_bridge_405,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12C7190z\n"
  ".type _Z11sub_12C7190z, %function\n"
  "_Z11sub_12C7190z:\n"
  "  b _Z11sub_12C7190iii\n"
  ".thumb\n"
);
// sub_12CD450(...) -> sub_12CD450(OT::hb_apply_context_t::Self*, unsigned char*, hb_set_digest_combiner_t<hb_set
__asm__(
  ".section .text.g4_bridge_406,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12CD450z\n"
  ".type _Z11sub_12CD450z, %function\n"
  "_Z11sub_12CD450z:\n"
  "  b _Z11sub_12CD450PN2OT18hb_apply_context_t4SelfEPhP24hb_set_digest_combiner_tI27hb_set_digest_lowest_bits_tImLj4EES4_IS5_ImLj0EES5_ImLj9EEEE\n"
  ".thumb\n"
);
// sub_12A8480(...) -> sub_12A8480(int)
__asm__(
  ".section .text.g4_bridge_407,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12A8480z\n"
  ".type _Z11sub_12A8480z, %function\n"
  "_Z11sub_12A8480z:\n"
  "  b _Z11sub_12A8480i\n"
  ".thumb\n"
);
// png_set_read_fn -> png_set_read_fn(unsigned int*, int, void (*)(int, void*, unsigned int))
__asm__(
  ".section .text.g4_bridge_408,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl png_set_read_fn\n"
  ".type png_set_read_fn, %function\n"
  "png_set_read_fn:\n"
  "  b _Z15png_set_read_fnPjiPFviPvjE\n"
  ".thumb\n"
);
// sub_E86480(...) -> sub_E86480(int, int, int)
__asm__(
  ".section .text.g4_bridge_409,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E86480z\n"
  ".type _Z10sub_E86480z, %function\n"
  "_Z10sub_E86480z:\n"
  "  b _Z10sub_E86480iii\n"
  ".thumb\n"
);
// sub_EA07F0(...) -> sub_EA07F0(unsigned int*, unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_410,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA07F0z\n"
  ".type _Z10sub_EA07F0z, %function\n"
  "_Z10sub_EA07F0z:\n"
  "  b _Z10sub_EA07F0PjS_S_\n"
  ".thumb\n"
);
// sub_EA4F20(...) -> sub_EA4F20(int*, int*, int*)
__asm__(
  ".section .text.g4_bridge_411,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA4F20z\n"
  ".type _Z10sub_EA4F20z, %function\n"
  "_Z10sub_EA4F20z:\n"
  "  b _Z10sub_EA4F20PiS_S_\n"
  ".thumb\n"
);
// jinit_d_post_controller -> jinit_d_post_controller(int, char)
__asm__(
  ".section .text.g4_bridge_412,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl jinit_d_post_controller\n"
  ".type jinit_d_post_controller, %function\n"
  "jinit_d_post_controller:\n"
  "  b _Z23jinit_d_post_controlleric\n"
  ".thumb\n"
);
// sub_F95F20(...) -> sub_F95F20(int, int)
__asm__(
  ".section .text.g4_bridge_413,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_F95F20z\n"
  ".type _Z10sub_F95F20z, %function\n"
  "_Z10sub_F95F20z:\n"
  "  b _Z10sub_F95F20ii\n"
  ".thumb\n"
);
// sub_EC1A70(...) -> sub_EC1A70(unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_414,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EC1A70z\n"
  ".type _Z10sub_EC1A70z, %function\n"
  "_Z10sub_EC1A70z:\n"
  "  b _Z10sub_EC1A70PjS_\n"
  ".thumb\n"
);
// sub_FB95A0(...) -> sub_FB95A0(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_415,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_FB95A0z\n"
  ".type _Z10sub_FB95A0z, %function\n"
  "_Z10sub_FB95A0z:\n"
  "  b _Z10sub_FB95A0Pji\n"
  ".thumb\n"
);
// sub_EA0970(...) -> sub_EA0970(unsigned int, unsigned int)
__asm__(
  ".section .text.g4_bridge_416,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA0970z\n"
  ".type _Z10sub_EA0970z, %function\n"
  "_Z10sub_EA0970z:\n"
  "  b _Z10sub_EA0970jj\n"
  ".thumb\n"
);
// sub_EA31B0(...) -> sub_EA31B0(unsigned int*, wchar_t const*)
__asm__(
  ".section .text.g4_bridge_417,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA31B0z\n"
  ".type _Z10sub_EA31B0z, %function\n"
  "_Z10sub_EA31B0z:\n"
  "  b _Z10sub_EA31B0PjPKw\n"
  ".thumb\n"
);
// sub_E865E0(...) -> sub_E865E0(wchar_t**, unsigned int)
__asm__(
  ".section .text.g4_bridge_418,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E865E0z\n"
  ".type _Z10sub_E865E0z, %function\n"
  "_Z10sub_E865E0z:\n"
  "  b _Z10sub_E865E0PPwj\n"
  ".thumb\n"
);
// jpeg_std_error -> jpeg_std_error(void (**)(int))
__asm__(
  ".section .text.g4_bridge_419,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl jpeg_std_error\n"
  ".type jpeg_std_error, %function\n"
  "jpeg_std_error:\n"
  "  b _Z14jpeg_std_errorPPFviE\n"
  ".thumb\n"
);
// sub_EA1BB0(...) -> sub_EA1BB0(int volatile**, unsigned int)
__asm__(
  ".section .text.g4_bridge_420,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA1BB0z\n"
  ".type _Z10sub_EA1BB0z, %function\n"
  "_Z10sub_EA1BB0z:\n"
  "  b _Z10sub_EA1BB0PPVij\n"
  ".thumb\n"
);
// sub_F1AEF0(...) -> sub_F1AEF0(int, int)
__asm__(
  ".section .text.g4_bridge_421,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_F1AEF0z\n"
  ".type _Z10sub_F1AEF0z, %function\n"
  "_Z10sub_F1AEF0z:\n"
  "  b _Z10sub_F1AEF0ii\n"
  ".thumb\n"
);
// png_set_write_fn -> png_set_write_fn(unsigned int*, int, void (*)(int, void*, unsigned int), int (*)(int))
__asm__(
  ".section .text.g4_bridge_422,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl png_set_write_fn\n"
  ".type png_set_write_fn, %function\n"
  "png_set_write_fn:\n"
  "  b _Z16png_set_write_fnPjiPFviPvjEPFiiE\n"
  ".thumb\n"
);
// sub_EA19F0(...) -> sub_EA19F0(char**, char const*)
__asm__(
  ".section .text.g4_bridge_423,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA19F0z\n"
  ".type _Z10sub_EA19F0z, %function\n"
  "_Z10sub_EA19F0z:\n"
  "  b _Z10sub_EA19F0PPcPKc\n"
  ".thumb\n"
);
// sub_E86510(...) -> sub_E86510(int*, unsigned int*, char)
__asm__(
  ".section .text.g4_bridge_424,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E86510z\n"
  ".type _Z10sub_E86510z, %function\n"
  "_Z10sub_E86510z:\n"
  "  b _Z10sub_E86510PiPjc\n"
  ".thumb\n"
);
// sub_EA20A0(...) -> sub_EA20A0(float*, float*)
__asm__(
  ".section .text.g4_bridge_425,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA20A0z\n"
  ".type _Z10sub_EA20A0z, %function\n"
  "_Z10sub_EA20A0z:\n"
  "  b _Z10sub_EA20A0PfS_\n"
  ".thumb\n"
);
// sub_E86570(...) -> sub_E86570(int*)
__asm__(
  ".section .text.g4_bridge_426,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E86570z\n"
  ".type _Z10sub_E86570z, %function\n"
  "_Z10sub_E86570z:\n"
  "  b _Z10sub_E86570Pi\n"
  ".thumb\n"
);
// sub_E872E0(...) -> sub_E872E0(unsigned int*, unsigned int)
__asm__(
  ".section .text.g4_bridge_427,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E872E0z\n"
  ".type _Z10sub_E872E0z, %function\n"
  "_Z10sub_E872E0z:\n"
  "  b _Z10sub_E872E0Pjj\n"
  ".thumb\n"
);
// sub_E87440(...) -> sub_E87440(char**, char const*)
__asm__(
  ".section .text.g4_bridge_428,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E87440z\n"
  ".type _Z10sub_E87440z, %function\n"
  "_Z10sub_E87440z:\n"
  "  b _Z10sub_E87440PPcPKc\n"
  ".thumb\n"
);
// sub_6544F0(...) -> sub_6544F0(float*, float*)
__asm__(
  ".section .text.g4_bridge_429,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6544F0z\n"
  ".type _Z10sub_6544F0z, %function\n"
  "_Z10sub_6544F0z:\n"
  "  b _Z10sub_6544F0PfS_\n"
  ".thumb\n"
);
// sub_656420(...) -> sub_656420()
__asm__(
  ".section .text.g4_bridge_430,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_656420z\n"
  ".type _Z10sub_656420z, %function\n"
  "_Z10sub_656420z:\n"
  "  b _Z10sub_656420v\n"
  ".thumb\n"
);
// sub_E87750(...) -> sub_E87750(int*, int, int)
__asm__(
  ".section .text.g4_bridge_431,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E87750z\n"
  ".type _Z10sub_E87750z, %function\n"
  "_Z10sub_E87750z:\n"
  "  b _Z10sub_E87750Piii\n"
  ".thumb\n"
);
// sub_E8CA10(...) -> sub_E8CA10(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, glitch::core::SA
__asm__(
  ".section .text.g4_bridge_432,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E8CA10z\n"
  ".type _Z10sub_E8CA10z, %function\n"
  "_Z10sub_E8CA10z:\n"
  "  b _Z10sub_E8CA10PNSt6__ndk112basic_stringIcNS_11char_traitsIcEEN6glitch4core10SAllocatorIcLy0EEEEEiS8_\n"
  ".thumb\n"
);
// sub_EA3030(...) -> sub_EA3030(wchar_t**, unsigned int)
__asm__(
  ".section .text.g4_bridge_433,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA3030z\n"
  ".type _Z10sub_EA3030z, %function\n"
  "_Z10sub_EA3030z:\n"
  "  b _Z10sub_EA3030PPwj\n"
  ".thumb\n"
);
// sub_655C20(...) -> sub_655C20()
__asm__(
  ".section .text.g4_bridge_434,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_655C20z\n"
  ".type _Z10sub_655C20z, %function\n"
  "_Z10sub_655C20z:\n"
  "  b _Z10sub_655C20v\n"
  ".thumb\n"
);
// sub_190CB20(...) -> sub_190CB20(int, char*, int)
__asm__(
  ".section .text.g4_bridge_435,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190CB20z\n"
  ".type _Z11sub_190CB20z, %function\n"
  "_Z11sub_190CB20z:\n"
  "  b _Z11sub_190CB20iPci\n"
  ".thumb\n"
);
// sub_E924F0(...) -> sub_E924F0(glitch::io::CZipReader::Self*, unsigned int)
__asm__(
  ".section .text.g4_bridge_436,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E924F0z\n"
  ".type _Z10sub_E924F0z, %function\n"
  "_Z10sub_E924F0z:\n"
  "  b _Z10sub_E924F0PN6glitch2io10CZipReader4SelfEj\n"
  ".thumb\n"
);
// sub_E86FB0(...) -> sub_E86FB0(unsigned int*, unsigned short*)
__asm__(
  ".section .text.g4_bridge_437,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E86FB0z\n"
  ".type _Z10sub_E86FB0z, %function\n"
  "_Z10sub_E86FB0z:\n"
  "  b _Z10sub_E86FB0PjPt\n"
  ".thumb\n"
);
// sub_E86E90(...) -> sub_E86E90(int)
__asm__(
  ".section .text.g4_bridge_438,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E86E90z\n"
  ".type _Z10sub_E86E90z, %function\n"
  "_Z10sub_E86E90z:\n"
  "  b _Z10sub_E86E90i\n"
  ".thumb\n"
);
// sub_655A30(...) -> sub_655A30(int volatile**)
__asm__(
  ".section .text.g4_bridge_439,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_655A30z\n"
  ".type _Z10sub_655A30z, %function\n"
  "_Z10sub_655A30z:\n"
  "  b _Z10sub_655A30PPVi\n"
  ".thumb\n"
);
// sub_EC6FD0(...) -> sub_EC6FD0(int, unsigned int*, void const**)
__asm__(
  ".section .text.g4_bridge_440,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EC6FD0z\n"
  ".type _Z10sub_EC6FD0z, %function\n"
  "_Z10sub_EC6FD0z:\n"
  "  b _Z10sub_EC6FD0iPjPPKv\n"
  ".thumb\n"
);
// sub_EB63B0(...) -> sub_EB63B0(int*, int, int, int, void const**)
__asm__(
  ".section .text.g4_bridge_441,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EB63B0z\n"
  ".type _Z10sub_EB63B0z, %function\n"
  "_Z10sub_EB63B0z:\n"
  "  b _Z10sub_EB63B0PiiiiPPKv\n"
  ".thumb\n"
);
// sub_EA50E0(...) -> sub_EA50E0(int, int, int, int)
__asm__(
  ".section .text.g4_bridge_442,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA50E0z\n"
  ".type _Z10sub_EA50E0z, %function\n"
  "_Z10sub_EA50E0z:\n"
  "  b _Z10sub_EA50E0iiii\n"
  ".thumb\n"
);
// sub_ECCDF0(...) -> sub_ECCDF0(int, int, int, glitch::scene::SParameterAtlasInfo*)
__asm__(
  ".section .text.g4_bridge_443,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_ECCDF0z\n"
  ".type _Z10sub_ECCDF0z, %function\n"
  "_Z10sub_ECCDF0z:\n"
  "  b _Z10sub_ECCDF0iiiPN6glitch5scene19SParameterAtlasInfoE\n"
  ".thumb\n"
);
// sub_E86B50(...) -> sub_E86B50(unsigned int*, void**)
__asm__(
  ".section .text.g4_bridge_444,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E86B50z\n"
  ".type _Z10sub_E86B50z, %function\n"
  "_Z10sub_E86B50z:\n"
  "  b _Z10sub_E86B50PjPPv\n"
  ".thumb\n"
);
// sub_E86A20(...) -> sub_E86A20(unsigned int*)
__asm__(
  ".section .text.g4_bridge_445,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E86A20z\n"
  ".type _Z10sub_E86A20z, %function\n"
  "_Z10sub_E86A20z:\n"
  "  b _Z10sub_E86A20Pj\n"
  ".thumb\n"
);
// sub_EA53C0(...) -> sub_EA53C0(int, int, int, int*)
__asm__(
  ".section .text.g4_bridge_446,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA53C0z\n"
  ".type _Z10sub_EA53C0z, %function\n"
  "_Z10sub_EA53C0z:\n"
  "  b _Z10sub_EA53C0iiiPi\n"
  ".thumb\n"
);
// sub_AD4B40(...) -> sub_AD4B40(int)
__asm__(
  ".section .text.g4_bridge_447,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_AD4B40z\n"
  ".type _Z10sub_AD4B40z, %function\n"
  "_Z10sub_AD4B40z:\n"
  "  b _Z10sub_AD4B40i\n"
  ".thumb\n"
);
// sub_57A380(...) -> sub_57A380(int)
__asm__(
  ".section .text.g4_bridge_448,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_57A380z\n"
  ".type _Z10sub_57A380z, %function\n"
  "_Z10sub_57A380z:\n"
  "  b _Z10sub_57A380i\n"
  ".thumb\n"
);
// sub_CC67E0(...) -> sub_CC67E0(unsigned int*, char*, unsigned char*, int, unsigned int, int, int, int, int)
__asm__(
  ".section .text.g4_bridge_449,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_CC67E0z\n"
  ".type _Z10sub_CC67E0z, %function\n"
  "_Z10sub_CC67E0z:\n"
  "  b _Z10sub_CC67E0PjPcPhijiiii\n"
  ".thumb\n"
);
// sub_795500(...) -> sub_795500(int, int (**)(int))
__asm__(
  ".section .text.g4_bridge_450,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_795500z\n"
  ".type _Z10sub_795500z, %function\n"
  "_Z10sub_795500z:\n"
  "  b _Z10sub_795500iPPFiiE\n"
  ".thumb\n"
);
// explicit map -> _Z10sub_7D6220i
__asm__(
  ".section .text.g4_bridge_451,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7D64C0z\n"
  ".type _Z10sub_7D64C0z, %function\n"
  "_Z10sub_7D64C0z:\n"
  "  b _Z10sub_7D6220i\n"
  ".thumb\n"
);
// sub_EA1F80(...) -> sub_EA1F80(int volatile**, unsigned char*, unsigned int)
__asm__(
  ".section .text.g4_bridge_452,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA1F80z\n"
  ".type _Z10sub_EA1F80z, %function\n"
  "_Z10sub_EA1F80z:\n"
  "  b _Z10sub_EA1F80PPViPhj\n"
  ".thumb\n"
);
// sub_EA4F80(...) -> sub_EA4F80(unsigned int*, int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_453,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA4F80z\n"
  ".type _Z10sub_EA4F80z, %function\n"
  "_Z10sub_EA4F80z:\n"
  "  b _Z10sub_EA4F80PjiS_\n"
  ".thumb\n"
);
// sub_EA5030(...) -> sub_EA5030(unsigned int*, unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_454,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA5030z\n"
  ".type _Z10sub_EA5030z, %function\n"
  "_Z10sub_EA5030z:\n"
  "  b _Z10sub_EA5030PjS_S_\n"
  ".thumb\n"
);
// sub_EA1AC0(...) -> sub_EA1AC0(char**, unsigned char*, unsigned int)
__asm__(
  ".section .text.g4_bridge_455,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA1AC0z\n"
  ".type _Z10sub_EA1AC0z, %function\n"
  "_Z10sub_EA1AC0z:\n"
  "  b _Z10sub_EA1AC0PPcPhj\n"
  ".thumb\n"
);
// sub_EA3300(...) -> sub_EA3300(wchar_t**, wchar_t const*, int)
__asm__(
  ".section .text.g4_bridge_456,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA3300z\n"
  ".type _Z10sub_EA3300z, %function\n"
  "_Z10sub_EA3300z:\n"
  "  b _Z10sub_EA3300PPwPKwi\n"
  ".thumb\n"
);
// sub_C83760(...) -> sub_C83760(int*, unsigned int*, int, int)
__asm__(
  ".section .text.g4_bridge_457,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_C83760z\n"
  ".type _Z10sub_C83760z, %function\n"
  "_Z10sub_C83760z:\n"
  "  b _Z10sub_C83760PiPjii\n"
  ".thumb\n"
);
// sub_E8FBE0(...) -> sub_E8FBE0(int*, int, unsigned int**)
__asm__(
  ".section .text.g4_bridge_458,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E8FBE0z\n"
  ".type _Z10sub_E8FBE0z, %function\n"
  "_Z10sub_E8FBE0z:\n"
  "  b _Z10sub_E8FBE0PiiPPj\n"
  ".thumb\n"
);
// sub_CC5F00(...) -> sub_CC5F00(unsigned char*, unsigned int, int, int, int, int, int, int, char*, int, unsigned
__asm__(
  ".section .text.g4_bridge_459,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_CC5F00z\n"
  ".type _Z10sub_CC5F00z, %function\n"
  "_Z10sub_CC5F00z:\n"
  "  b _Z10sub_CC5F00PhjiiiiiiPcij\n"
  ".thumb\n"
);
// sub_E8FB90(...) -> sub_E8FB90(int, int)
__asm__(
  ".section .text.g4_bridge_460,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E8FB90z\n"
  ".type _Z10sub_E8FB90z, %function\n"
  "_Z10sub_E8FB90z:\n"
  "  b _Z10sub_E8FB90ii\n"
  ".thumb\n"
);
// sub_E86CC0(...) -> sub_E86CC0(unsigned int*, void**, int)
__asm__(
  ".section .text.g4_bridge_461,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E86CC0z\n"
  ".type _Z10sub_E86CC0z, %function\n"
  "_Z10sub_E86CC0z:\n"
  "  b _Z10sub_E86CC0PjPPvi\n"
  ".thumb\n"
);
// sub_C928C0(...) -> sub_C928C0(int, int, int, char*, std::__va_list)
__asm__(
  ".section .text.g4_bridge_462,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_C928C0z\n"
  ".type _Z10sub_C928C0z, %function\n"
  "_Z10sub_C928C0z:\n"
  "  b _Z10sub_C928C0iiiPcSt9__va_list\n"
  ".thumb\n"
);
// sub_E8E7D0(...) -> sub_E8E7D0(int*, int, int volatile**)
__asm__(
  ".section .text.g4_bridge_463,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E8E7D0z\n"
  ".type _Z10sub_E8E7D0z, %function\n"
  "_Z10sub_E8E7D0z:\n"
  "  b _Z10sub_E8E7D0PiiPPVi\n"
  ".thumb\n"
);
// sub_BA8B80(...) -> sub_BA8B80(glf::App::Self*, int)
__asm__(
  ".section .text.g4_bridge_464,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_BA8B80z\n"
  ".type _Z10sub_BA8B80z, %function\n"
  "_Z10sub_BA8B80z:\n"
  "  b _Z10sub_BA8B80PN3glf3App4SelfEi\n"
  ".thumb\n"
);
// sub_E8E780(...) -> sub_E8E780(int, int)
__asm__(
  ".section .text.g4_bridge_465,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E8E780z\n"
  ".type _Z10sub_E8E780z, %function\n"
  "_Z10sub_E8E780z:\n"
  "  b _Z10sub_E8E780ii\n"
  ".thumb\n"
);
// sub_E87110(...) -> sub_E87110(unsigned int*, unsigned short*, int)
__asm__(
  ".section .text.g4_bridge_466,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E87110z\n"
  ".type _Z10sub_E87110z, %function\n"
  "_Z10sub_E87110z:\n"
  "  b _Z10sub_E87110PjPti\n"
  ".thumb\n"
);
// sub_CCB450(...) -> sub_CCB450(int, int)
__asm__(
  ".section .text.g4_bridge_467,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_CCB450z\n"
  ".type _Z10sub_CCB450z, %function\n"
  "_Z10sub_CCB450z:\n"
  "  b _Z10sub_CCB450ii\n"
  ".thumb\n"
);
// sub_E8BF90(...) -> sub_E8BF90(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, glitch::core::SA
__asm__(
  ".section .text.g4_bridge_468,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E8BF90z\n"
  ".type _Z10sub_E8BF90z, %function\n"
  "_Z10sub_E8BF90z:\n"
  "  b _Z10sub_E8BF90PNSt6__ndk112basic_stringIcNS_11char_traitsIcEEN6glitch4core10SAllocatorIcLy0EEEEEiPPKv\n"
  ".thumb\n"
);
// explicit map -> _ZN6glitch7collada2ps22CParticleSystemManager9ConstructEPNS2_4SelfE
__asm__(
  ".section .text.g4_bridge_469,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6glitch7collada2ps22CParticleSystemManager22CParticleSystemManagerEPNS2_4SelfE\n"
  ".type _ZN6glitch7collada2ps22CParticleSystemManager22CParticleSystemManagerEPNS2_4SelfE, %function\n"
  "_ZN6glitch7collada2ps22CParticleSystemManager22CParticleSystemManagerEPNS2_4SelfE:\n"
  "  b _ZN6glitch7collada2ps22CParticleSystemManager9ConstructEPNS2_4SelfE\n"
  ".thumb\n"
);
// sub_E8BC20(...) -> sub_E8BC20(int, int)
__asm__(
  ".section .text.g4_bridge_470,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E8BC20z\n"
  ".type _Z10sub_E8BC20z, %function\n"
  "_Z10sub_E8BC20z:\n"
  "  b _Z10sub_E8BC20ii\n"
  ".thumb\n"
);
// sub_E875A0(...) -> sub_E875A0(char**, unsigned char*, unsigned int)
__asm__(
  ".section .text.g4_bridge_471,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_E875A0z\n"
  ".type _Z10sub_E875A0z, %function\n"
  "_Z10sub_E875A0z:\n"
  "  b _Z10sub_E875A0PPcPhj\n"
  ".thumb\n"
);
// glitch::collada::ps::CParticleSystemManager::Destroy(glitch::collada::ps::CParticleSystemManager::Self*) -> gl
__asm__(
  ".section .text.g4_bridge_472,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6glitch7collada2ps22CParticleSystemManager7DestroyEPNS2_4SelfE\n"
  ".type _ZN6glitch7collada2ps22CParticleSystemManager7DestroyEPNS2_4SelfE, %function\n"
  "_ZN6glitch7collada2ps22CParticleSystemManager7DestroyEPNS2_4SelfE:\n"
  "  b _ZN6glitch7collada2ps22CParticleSystemManager7DestroyEPP15pthread_mutex_t\n"
  ".thumb\n"
);
// glitch::scene::ISceneNode::getChildren(void*) -> glitch::scene::ISceneNode::getChildren(glitch::scene::ISceneN
__asm__(
  ".section .text.g4_bridge_473,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6glitch5scene10ISceneNode11getChildrenEPv\n"
  ".type _ZN6glitch5scene10ISceneNode11getChildrenEPv, %function\n"
  "_ZN6glitch5scene10ISceneNode11getChildrenEPv:\n"
  "  b _ZN6glitch5scene10ISceneNode11getChildrenEPNS1_4SelfE\n"
  ".thumb\n"
);
// explicit map -> _ZN6glitch2io23CBinaryAttributesWriter18writeString_glitchEPNS1_4SelfEPKNSt6__ndk112basic_stri
__asm__(
  ".section .text.g4_bridge_474,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6glitch2io23CBinaryAttributesWriter11writeStringIcNSt6__ndk111char_traitsIcEENS_4core10SAllocatorIcLy0EEEEEiPNS1_4SelfEPKNS3_12basic_stringIT_T0_T1_EE\n"
  ".type _ZN6glitch2io23CBinaryAttributesWriter11writeStringIcNSt6__ndk111char_traitsIcEENS_4core10SAllocatorIcLy0EEEEEiPNS1_4SelfEPKNS3_12basic_stringIT_T0_T1_EE, %function\n"
  "_ZN6glitch2io23CBinaryAttributesWriter11writeStringIcNSt6__ndk111char_traitsIcEENS_4core10SAllocatorIcLy0EEEEEiPNS1_4SelfEPKNS3_12basic_stringIT_T0_T1_EE:\n"
  "  b _ZN6glitch2io23CBinaryAttributesWriter18writeString_glitchEPNS1_4SelfEPKNSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS_4core10SAllocatorIcLy0EEEEE\n"
  ".thumb\n"
);
// sub_EA1040(...) -> sub_EA1040(unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_475,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA1040z\n"
  ".type _Z10sub_EA1040z, %function\n"
  "_Z10sub_EA1040z:\n"
  "  b _Z10sub_EA1040PjS_\n"
  ".thumb\n"
);
// sub_B99A40(...) -> sub_B99A40(void*, void*)
__asm__(
  ".section .text.g4_bridge_476,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_B99A40z\n"
  ".type _Z10sub_B99A40z, %function\n"
  "_Z10sub_B99A40z:\n"
  "  b _Z10sub_B99A40PvS_\n"
  ".thumb\n"
);
// sub_4EFD40(...) -> sub_4EFD40(int)
__asm__(
  ".section .text.g4_bridge_477,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_4EFD40z\n"
  ".type _Z10sub_4EFD40z, %function\n"
  "_Z10sub_4EFD40z:\n"
  "  b _Z10sub_4EFD40i\n"
  ".thumb\n"
);
// sub_871CC0(...) -> sub_871CC0(glitch::video::ITexturePolicySelector::Self*, glitch::video::CTextureManager::Se
__asm__(
  ".section .text.g4_bridge_478,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_871CC0z\n"
  ".type _Z10sub_871CC0z, %function\n"
  "_Z10sub_871CC0z:\n"
  "  b _Z10sub_871CC0PN6glitch5video22ITexturePolicySelector4SelfEPNS0_15CTextureManager4SelfE\n"
  ".thumb\n"
);
// sub_5BCB90(...) -> sub_5BCB90(int)
__asm__(
  ".section .text.g4_bridge_479,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_5BCB90z\n"
  ".type _Z10sub_5BCB90z, %function\n"
  "_Z10sub_5BCB90z:\n"
  "  b _Z10sub_5BCB90i\n"
  ".thumb\n"
);
// glitch::scene::ISceneNode::getAnimators(void*) -> glitch::scene::ISceneNode::getAnimators(glitch::scene::IScen
__asm__(
  ".section .text.g4_bridge_480,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6glitch5scene10ISceneNode12getAnimatorsEPv\n"
  ".type _ZN6glitch5scene10ISceneNode12getAnimatorsEPv, %function\n"
  "_ZN6glitch5scene10ISceneNode12getAnimatorsEPv:\n"
  "  b _ZN6glitch5scene10ISceneNode12getAnimatorsEPNS1_4SelfE\n"
  ".thumb\n"
);
// explicit map -> _ZN6glitch7collada15animation_track41CVirtualEx_collada_animation_track_57d73211getInstanceEv
__asm__(
  ".section .text.g4_bridge_481,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6glitch7collada15animation_track10CVirtualExINS1_13CApplyValueExIA2_fNS1_6CMixinIfLy2ENS1_17SMaterialSetParamINS1_15SAnimationTypesIS4_S4_EEEELxn1EfEEEEE11getInstanceEv\n"
  ".type _ZN6glitch7collada15animation_track10CVirtualExINS1_13CApplyValueExIA2_fNS1_6CMixinIfLy2ENS1_17SMaterialSetParamINS1_15SAnimationTypesIS4_S4_EEEELxn1EfEEEEE11getInstanceEv, %function\n"
  "_ZN6glitch7collada15animation_track10CVirtualExINS1_13CApplyValueExIA2_fNS1_6CMixinIfLy2ENS1_17SMaterialSetParamINS1_15SAnimationTypesIS4_S4_EEEELxn1EfEEEEE11getInstanceEv:\n"
  "  b _ZN6glitch7collada15animation_track41CVirtualEx_collada_animation_track_57d73211getInstanceEv\n"
  ".thumb\n"
);
// explicit map -> _ZN6glitch7collada15animation_track41CVirtualEx_collada_animation_track_6a113511getInstanceEv
__asm__(
  ".section .text.g4_bridge_482,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6glitch7collada15animation_track10CVirtualExINS1_13CApplyValueExIA3_fNS1_6CMixinIfLy3ENS1_17SMaterialSetParamINS1_15SAnimationTypesIS4_S4_EEEELx0EfEEEEE11getInstanceEv\n"
  ".type _ZN6glitch7collada15animation_track10CVirtualExINS1_13CApplyValueExIA3_fNS1_6CMixinIfLy3ENS1_17SMaterialSetParamINS1_15SAnimationTypesIS4_S4_EEEELx0EfEEEEE11getInstanceEv, %function\n"
  "_ZN6glitch7collada15animation_track10CVirtualExINS1_13CApplyValueExIA3_fNS1_6CMixinIfLy3ENS1_17SMaterialSetParamINS1_15SAnimationTypesIS4_S4_EEEELx0EfEEEEE11getInstanceEv:\n"
  "  b _ZN6glitch7collada15animation_track41CVirtualEx_collada_animation_track_6a113511getInstanceEv\n"
  ".thumb\n"
);
// explicit map -> _ZN6glitch7collada15animation_track41CVirtualEx_collada_animation_track_5149af11getInstanceEv
__asm__(
  ".section .text.g4_bridge_483,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN6glitch7collada15animation_track10CVirtualExINS1_13CApplyValueExIA4_hNS1_6CMixinIhLy4ENS1_17SMaterialSetParamINS1_15SAnimationTypesIS4_NS_5video6SColorEEEEELxn1EhEEEEE11getInstanceEv\n"
  ".type _ZN6glitch7collada15animation_track10CVirtualExINS1_13CApplyValueExIA4_hNS1_6CMixinIhLy4ENS1_17SMaterialSetParamINS1_15SAnimationTypesIS4_NS_5video6SColorEEEEELxn1EhEEEEE11getInstanceEv, %function\n"
  "_ZN6glitch7collada15animation_track10CVirtualExINS1_13CApplyValueExIA4_hNS1_6CMixinIhLy4ENS1_17SMaterialSetParamINS1_15SAnimationTypesIS4_NS_5video6SColorEEEEELxn1EhEEEEE11getInstanceEv:\n"
  "  b _ZN6glitch7collada15animation_track41CVirtualEx_collada_animation_track_5149af11getInstanceEv\n"
  ".thumb\n"
);
// sub_1954B30(...) -> sub_1954B30(int)
__asm__(
  ".section .text.g4_bridge_484,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1954B30z\n"
  ".type _Z11sub_1954B30z, %function\n"
  "_Z11sub_1954B30z:\n"
  "  b _Z11sub_1954B30i\n"
  ".thumb\n"
);
// sub_1908800(...) -> sub_1908800(unsigned int*, char const*)
__asm__(
  ".section .text.g4_bridge_485,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1908800z\n"
  ".type _Z11sub_1908800z, %function\n"
  "_Z11sub_1908800z:\n"
  "  b _Z11sub_1908800PjPKc\n"
  ".thumb\n"
);
// sub_19537A0(...) -> sub_19537A0(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_486,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19537A0z\n"
  ".type _Z11sub_19537A0z, %function\n"
  "_Z11sub_19537A0z:\n"
  "  b _Z11sub_19537A0Pji\n"
  ".thumb\n"
);
// sub_190E1D0(...) -> sub_190E1D0(int)
__asm__(
  ".section .text.g4_bridge_487,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190E1D0z\n"
  ".type _Z11sub_190E1D0z, %function\n"
  "_Z11sub_190E1D0z:\n"
  "  b _Z11sub_190E1D0i\n"
  ".thumb\n"
);
// sub_1953F10(...) -> sub_1953F10(unsigned int*, unsigned int*, unsigned char*)
__asm__(
  ".section .text.g4_bridge_488,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1953F10z\n"
  ".type _Z11sub_1953F10z, %function\n"
  "_Z11sub_1953F10z:\n"
  "  b _Z11sub_1953F10PjS_Ph\n"
  ".thumb\n"
);
// sub_19081E0(...) -> sub_19081E0(int, long long, int)
__asm__(
  ".section .text.g4_bridge_489,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19081E0z\n"
  ".type _Z11sub_19081E0z, %function\n"
  "_Z11sub_19081E0z:\n"
  "  b _Z11sub_19081E0ixi\n"
  ".thumb\n"
);
// sub_190E160(...) -> sub_190E160(int, int)
__asm__(
  ".section .text.g4_bridge_490,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190E160z\n"
  ".type _Z11sub_190E160z, %function\n"
  "_Z11sub_190E160z:\n"
  "  b _Z11sub_190E160ii\n"
  ".thumb\n"
);
// sub_190DFC0(...) -> sub_190DFC0(int, char*, unsigned int, int, ...)
__asm__(
  ".section .text.g4_bridge_491,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190DFC0z\n"
  ".type _Z11sub_190DFC0z, %function\n"
  "_Z11sub_190DFC0z:\n"
  "  b _Z11sub_190DFC0iPcjiz\n"
  ".thumb\n"
);
// sub_190DD80(...) -> sub_190DD80(int)
__asm__(
  ".section .text.g4_bridge_492,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190DD80z\n"
  ".type _Z11sub_190DD80z, %function\n"
  "_Z11sub_190DD80z:\n"
  "  b _Z11sub_190DD80i\n"
  ".thumb\n"
);
// sub_1320410(...) -> sub_1320410(int)
__asm__(
  ".section .text.g4_bridge_493,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1320410z\n"
  ".type _Z11sub_1320410z, %function\n"
  "_Z11sub_1320410z:\n"
  "  b _Z11sub_1320410i\n"
  ".thumb\n"
);
// sub_1320FA0(...) -> sub_1320FA0()
__asm__(
  ".section .text.g4_bridge_494,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1320FA0z\n"
  ".type _Z11sub_1320FA0z, %function\n"
  "_Z11sub_1320FA0z:\n"
  "  b _Z11sub_1320FA0v\n"
  ".thumb\n"
);
// sub_13210F0(...) -> sub_13210F0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_495,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_13210F0z\n"
  ".type _Z11sub_13210F0z, %function\n"
  "_Z11sub_13210F0z:\n"
  "  b _Z11sub_13210F0Pj\n"
  ".thumb\n"
);
// sub_1953CF0(...) -> sub_1953CF0(int)
__asm__(
  ".section .text.g4_bridge_496,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1953CF0z\n"
  ".type _Z11sub_1953CF0z, %function\n"
  "_Z11sub_1953CF0z:\n"
  "  b _Z11sub_1953CF0i\n"
  ".thumb\n"
);
// sub_190E510(...) -> sub_190E510(int, char*, int)
__asm__(
  ".section .text.g4_bridge_497,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190E510z\n"
  ".type _Z11sub_190E510z, %function\n"
  "_Z11sub_190E510z:\n"
  "  b _Z11sub_190E510iPci\n"
  ".thumb\n"
);
// sub_EA3A50(...) -> sub_EA3A50(int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_498,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA3A50z\n"
  ".type _Z10sub_EA3A50z, %function\n"
  "_Z10sub_EA3A50z:\n"
  "  b _Z10sub_EA3A50PiPj\n"
  ".thumb\n"
);
// sub_19549F0(...) -> sub_19549F0(int, wchar_t*, unsigned int, wchar_t*, tm*)
__asm__(
  ".section .text.g4_bridge_499,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19549F0z\n"
  ".type _Z11sub_19549F0z, %function\n"
  "_Z11sub_19549F0z:\n"
  "  b _Z11sub_19549F0iPwjS_P2tm\n"
  ".thumb\n"
);
// sub_123CA40(...) -> sub_123CA40(pthread_mutex_t*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_500,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_123CA40z\n"
  ".type _Z11sub_123CA40z, %function\n"
  "_Z11sub_123CA40z:\n"
  "  b _Z11sub_123CA40P15pthread_mutex_tPj\n"
  ".thumb\n"
);
// sub_134A180(...) -> sub_134A180(int*, unsigned int*, int, void const**)
__asm__(
  ".section .text.g4_bridge_501,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_134A180z\n"
  ".type _Z11sub_134A180z, %function\n"
  "_Z11sub_134A180z:\n"
  "  b _Z11sub_134A180PiPjiPPKv\n"
  ".thumb\n"
);
// sub_18F92A0(...) -> sub_18F92A0(std::exception*)
__asm__(
  ".section .text.g4_bridge_502,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18F92A0z\n"
  ".type _Z11sub_18F92A0z, %function\n"
  "_Z11sub_18F92A0z:\n"
  "  b _Z11sub_18F92A0PSt9exception\n"
  ".thumb\n"
);
// sub_1320D60(...) -> sub_1320D60(unsigned int*, int, int, int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_503,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1320D60z\n"
  ".type _Z11sub_1320D60z, %function\n"
  "_Z11sub_1320D60z:\n"
  "  b _Z11sub_1320D60PjiiiS_\n"
  ".thumb\n"
);
// sub_1235D60(...) -> sub_1235D60(unsigned int*, int, char*)
__asm__(
  ".section .text.g4_bridge_504,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1235D60z\n"
  ".type _Z11sub_1235D60z, %function\n"
  "_Z11sub_1235D60z:\n"
  "  b _Z11sub_1235D60PjiPc\n"
  ".thumb\n"
);
// sub_18F9120(...) -> sub_18F9120(std::exception*)
__asm__(
  ".section .text.g4_bridge_505,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18F9120z\n"
  ".type _Z11sub_18F9120z, %function\n"
  "_Z11sub_18F9120z:\n"
  "  b _Z11sub_18F9120PSt9exception\n"
  ".thumb\n"
);
// sub_18F91E0(...) -> sub_18F91E0(std::exception*)
__asm__(
  ".section .text.g4_bridge_506,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18F91E0z\n"
  ".type _Z11sub_18F91E0z, %function\n"
  "_Z11sub_18F91E0z:\n"
  "  b _Z11sub_18F91E0PSt9exception\n"
  ".thumb\n"
);
// sub_190E330(...) -> sub_190E330(int)
__asm__(
  ".section .text.g4_bridge_507,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190E330z\n"
  ".type _Z11sub_190E330z, %function\n"
  "_Z11sub_190E330z:\n"
  "  b _Z11sub_190E330i\n"
  ".thumb\n"
);
// sub_12633A2(...) -> sub_12633A2(int*, char*)
__asm__(
  ".section .text.g4_bridge_508,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12633A2z\n"
  ".type _Z11sub_12633A2z, %function\n"
  "_Z11sub_12633A2z:\n"
  "  b _Z11sub_12633A2PiPc\n"
  ".thumb\n"
);
// sub_1339960(...) -> sub_1339960(unsigned int*, int, int, int)
__asm__(
  ".section .text.g4_bridge_509,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1339960z\n"
  ".type _Z11sub_1339960z, %function\n"
  "_Z11sub_1339960z:\n"
  "  b _Z11sub_1339960Pjiii\n"
  ".thumb\n"
);
// sub_127C36D(...) -> sub_127C36D(int*, char*)
__asm__(
  ".section .text.g4_bridge_510,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_127C36Dz\n"
  ".type _Z11sub_127C36Dz, %function\n"
  "_Z11sub_127C36Dz:\n"
  "  b _Z11sub_127C36DPiPc\n"
  ".thumb\n"
);
// sub_1284052(...) -> sub_1284052()
__asm__(
  ".section .text.g4_bridge_511,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1284052z\n"
  ".type _Z11sub_1284052z, %function\n"
  "_Z11sub_1284052z:\n"
  "  b _Z11sub_1284052v\n"
  ".thumb\n"
);
// sub_1320116(...) -> sub_1320116(int*, char*)
__asm__(
  ".section .text.g4_bridge_512,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1320116z\n"
  ".type _Z11sub_1320116z, %function\n"
  "_Z11sub_1320116z:\n"
  "  b _Z11sub_1320116PiPc\n"
  ".thumb\n"
);
// sub_13219F0(...) -> sub_13219F0(int)
__asm__(
  ".section .text.g4_bridge_513,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_13219F0z\n"
  ".type _Z11sub_13219F0z, %function\n"
  "_Z11sub_13219F0z:\n"
  "  b _Z11sub_13219F0i\n"
  ".thumb\n"
);
// explicit map -> _ZN5boost4asio6detail18completion_handlerIJNS_3_bi6bind_tIvNS_4_mfi3mf0IvN6glotv325SingletonMu
__asm__(
  ".section .text.g4_bridge_514,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _ZN5boost4asio6detail18completion_handlerIJNS_3_bi6bind_tIvNS_4_mfi3mf0IvN6glotv325SingletonMutexedProcessor4SelfEEENS3_5list1INS3_5valueINS_10shared_ptrIS9_EEEEEEEEEE11do_completeEiPj\n"
  ".type _ZN5boost4asio6detail18completion_handlerIJNS_3_bi6bind_tIvNS_4_mfi3mf0IvN6glotv325SingletonMutexedProcessor4SelfEEENS3_5list1INS3_5valueINS_10shared_ptrIS9_EEEEEEEEEE11do_completeEiPj, %function\n"
  "_ZN5boost4asio6detail18completion_handlerIJNS_3_bi6bind_tIvNS_4_mfi3mf0IvN6glotv325SingletonMutexedProcessor4SelfEEENS3_5list1INS3_5valueINS_10shared_ptrIS9_EEEEEEEEEE11do_completeEiPj:\n"
  "  b _ZN5boost4asio6detail18completion_handlerIJNS_3_bi6bind_tIvNS_4_mfi3mf0IvN6glotv325SingletonMutexedProcessor4SelfEEENS3_5list1INS3_5valueIPS9_EEEEEEEE11do_completeEiPj\n"
  ".thumb\n"
);
// sub_1282680(...) -> sub_1282680(unsigned int*, int*, int)
__asm__(
  ".section .text.g4_bridge_515,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1282680z\n"
  ".type _Z11sub_1282680z, %function\n"
  "_Z11sub_1282680z:\n"
  "  b _Z11sub_1282680PjPii\n"
  ".thumb\n"
);
// sub_1281C10(...) -> sub_1281C10(int, unsigned char*, int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_516,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1281C10z\n"
  ".type _Z11sub_1281C10z, %function\n"
  "_Z11sub_1281C10z:\n"
  "  b _Z11sub_1281C10iPhiPj\n"
  ".thumb\n"
);
// sub_1320960(...) -> sub_1320960(unsigned int*)
__asm__(
  ".section .text.g4_bridge_517,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1320960z\n"
  ".type _Z11sub_1320960z, %function\n"
  "_Z11sub_1320960z:\n"
  "  b _Z11sub_1320960Pj\n"
  ".thumb\n"
);
// sub_12832F0(...) -> sub_12832F0(int*, int, int, unsigned int, int)
__asm__(
  ".section .text.g4_bridge_518,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_12832F0z\n"
  ".type _Z11sub_12832F0z, %function\n"
  "_Z11sub_12832F0z:\n"
  "  b _Z11sub_12832F0Piiiji\n"
  ".thumb\n"
);
// sub_137C5A0(...) -> sub_137C5A0(int*, int*, unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_519,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_137C5A0z\n"
  ".type _Z11sub_137C5A0z, %function\n"
  "_Z11sub_137C5A0z:\n"
  "  b _Z11sub_137C5A0PiS_PjS0_\n"
  ".thumb\n"
);
// sub_1361D1D(...) -> sub_1361D1D(int*, char*)
__asm__(
  ".section .text.g4_bridge_520,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1361D1Dz\n"
  ".type _Z11sub_1361D1Dz, %function\n"
  "_Z11sub_1361D1Dz:\n"
  "  b _Z11sub_1361D1DPiPc\n"
  ".thumb\n"
);
// sub_132D7C0(...) -> sub_132D7C0()
__asm__(
  ".section .text.g4_bridge_521,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_132D7C0z\n"
  ".type _Z11sub_132D7C0z, %function\n"
  "_Z11sub_132D7C0z:\n"
  "  b _Z11sub_132D7C0v\n"
  ".thumb\n"
);
// sub_1361E10(...) -> sub_1361E10(int*, int, int)
__asm__(
  ".section .text.g4_bridge_522,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1361E10z\n"
  ".type _Z11sub_1361E10z, %function\n"
  "_Z11sub_1361E10z:\n"
  "  b _Z11sub_1361E10Piii\n"
  ".thumb\n"
);
// sub_1954010(...) -> sub_1954010(unsigned int*, unsigned int*, unsigned char*)
__asm__(
  ".section .text.g4_bridge_523,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1954010z\n"
  ".type _Z11sub_1954010z, %function\n"
  "_Z11sub_1954010z:\n"
  "  b _Z11sub_1954010PjS_Ph\n"
  ".thumb\n"
);
// sub_1281920(...) -> sub_1281920()
__asm__(
  ".section .text.g4_bridge_524,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1281920z\n"
  ".type _Z11sub_1281920z, %function\n"
  "_Z11sub_1281920z:\n"
  "  b _Z11sub_1281920v\n"
  ".thumb\n"
);
// sub_1369440(...) -> sub_1369440(unsigned int*)
__asm__(
  ".section .text.g4_bridge_525,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1369440z\n"
  ".type _Z11sub_1369440z, %function\n"
  "_Z11sub_1369440z:\n"
  "  b _Z11sub_1369440Pj\n"
  ".thumb\n"
);
// sub_BC1B10(...) -> sub_BC1B10(unsigned int*)
__asm__(
  ".section .text.g4_bridge_526,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_BC1B10z\n"
  ".type _Z10sub_BC1B10z, %function\n"
  "_Z10sub_BC1B10z:\n"
  "  b _Z10sub_BC1B10Pj\n"
  ".thumb\n"
);
// sub_1367360(...) -> sub_1367360(unsigned int*, int, int, int)
__asm__(
  ".section .text.g4_bridge_527,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1367360z\n"
  ".type _Z11sub_1367360z, %function\n"
  "_Z11sub_1367360z:\n"
  "  b _Z11sub_1367360Pjiii\n"
  ".thumb\n"
);
// sub_1321700(...) -> sub_1321700(pthread_mutex_t*)
__asm__(
  ".section .text.g4_bridge_528,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1321700z\n"
  ".type _Z11sub_1321700z, %function\n"
  "_Z11sub_1321700z:\n"
  "  b _Z11sub_1321700P15pthread_mutex_t\n"
  ".thumb\n"
);
// sub_136C9B0(...) -> sub_136C9B0(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocat
__asm__(
  ".section .text.g4_bridge_529,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_136C9B0z\n"
  ".type _Z11sub_136C9B0z, %function\n"
  "_Z11sub_136C9B0z:\n"
  "  b _Z11sub_136C9B0PN9rapidjson15GenericDocumentINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEEEPc\n"
  ".thumb\n"
);
// sub_133FEA0(...) -> sub_133FEA0(unsigned int*, unsigned char*, rapidjson::MemoryPoolAllocator<rapidjson::CrtAl
__asm__(
  ".section .text.g4_bridge_530,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_133FEA0z\n"
  ".type _Z11sub_133FEA0z, %function\n"
  "_Z11sub_133FEA0z:\n"
  "  b _Z11sub_133FEA0PjPhPN9rapidjson19MemoryPoolAllocatorINS1_12CrtAllocatorEEE\n"
  ".thumb\n"
);
// sub_18FE850(...) -> sub_18FE850(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_531,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18FE850z\n"
  ".type _Z11sub_18FE850z, %function\n"
  "_Z11sub_18FE850z:\n"
  "  b _Z11sub_18FE850Pji\n"
  ".thumb\n"
);
// sub_133FE10(...) -> sub_133FE10(int*, unsigned char*, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>*
__asm__(
  ".section .text.g4_bridge_532,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_133FE10z\n"
  ".type _Z11sub_133FE10z, %function\n"
  "_Z11sub_133FE10z:\n"
  "  b _Z11sub_133FE10PiPhPN9rapidjson19MemoryPoolAllocatorINS1_12CrtAllocatorEEE\n"
  ".thumb\n"
);
// sub_1321760(...) -> sub_1321760(pthread_mutex_t*)
__asm__(
  ".section .text.g4_bridge_533,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1321760z\n"
  ".type _Z11sub_1321760z, %function\n"
  "_Z11sub_1321760z:\n"
  "  b _Z11sub_1321760P15pthread_mutex_t\n"
  ".thumb\n"
);
// sub_132D85D(...) -> sub_132D85D()
__asm__(
  ".section .text.g4_bridge_534,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_132D85Dz\n"
  ".type _Z11sub_132D85Dz, %function\n"
  "_Z11sub_132D85Dz:\n"
  "  b _Z11sub_132D85Dv\n"
  ".thumb\n"
);
// sub_133FB80(...) -> sub_133FB80(char**, int, unsigned int*, rapidjson::MemoryPoolAllocator<rapidjson::CrtAlloc
__asm__(
  ".section .text.g4_bridge_535,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_133FB80z\n"
  ".type _Z11sub_133FB80z, %function\n"
  "_Z11sub_133FB80z:\n"
  "  b _Z11sub_133FB80PPciPjPN9rapidjson19MemoryPoolAllocatorINS2_12CrtAllocatorEEE\n"
  ".thumb\n"
);
// sub_132D90F(...) -> sub_132D90F()
__asm__(
  ".section .text.g4_bridge_536,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_132D90Fz\n"
  ".type _Z11sub_132D90Fz, %function\n"
  "_Z11sub_132D90Fz:\n"
  "  b _Z11sub_132D90Fv\n"
  ".thumb\n"
);
// sub_1367340(...) -> sub_1367340(unsigned int*, int, int, int)
__asm__(
  ".section .text.g4_bridge_537,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1367340z\n"
  ".type _Z11sub_1367340z, %function\n"
  "_Z11sub_1367340z:\n"
  "  b _Z11sub_1367340Pjiii\n"
  ".thumb\n"
);
// sub_132D8B6(...) -> sub_132D8B6()
__asm__(
  ".section .text.g4_bridge_538,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_132D8B6z\n"
  ".type _Z11sub_132D8B6z, %function\n"
  "_Z11sub_132D8B6z:\n"
  "  b _Z11sub_132D8B6v\n"
  ".thumb\n"
);
// sub_132D766(...) -> sub_132D766()
__asm__(
  ".section .text.g4_bridge_539,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_132D766z\n"
  ".type _Z11sub_132D766z, %function\n"
  "_Z11sub_132D766z:\n"
  "  b _Z11sub_132D766v\n"
  ".thumb\n"
);
// sub_131B830(...) -> sub_131B830(int*, unsigned int*, int, void const**)
__asm__(
  ".section .text.g4_bridge_540,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_131B830z\n"
  ".type _Z11sub_131B830z, %function\n"
  "_Z11sub_131B830z:\n"
  "  b _Z11sub_131B830PiPjiPPKv\n"
  ".thumb\n"
);
// sub_1942300(...) -> sub_1942300(unsigned int*, int, unsigned int*, int, int, wchar_t, char, long long)
__asm__(
  ".section .text.g4_bridge_541,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1942300z\n"
  ".type _Z11sub_1942300z, %function\n"
  "_Z11sub_1942300z:\n"
  "  b _Z11sub_1942300PjiS_iiwcx\n"
  ".thumb\n"
);
// sub_1942740(...) -> sub_1942740(unsigned int*, int, unsigned int*, int, int, wchar_t, char, long long)
__asm__(
  ".section .text.g4_bridge_542,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1942740z\n"
  ".type _Z11sub_1942740z, %function\n"
  "_Z11sub_1942740z:\n"
  "  b _Z11sub_1942740PjiS_iiwcx\n"
  ".thumb\n"
);
// sub_18FE4A0(...) -> sub_18FE4A0(int)
__asm__(
  ".section .text.g4_bridge_543,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18FE4A0z\n"
  ".type _Z11sub_18FE4A0z, %function\n"
  "_Z11sub_18FE4A0z:\n"
  "  b _Z11sub_18FE4A0i\n"
  ".thumb\n"
);
// sub_13217C0(...) -> sub_13217C0(pthread_mutex_t*, unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_544,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_13217C0z\n"
  ".type _Z11sub_13217C0z, %function\n"
  "_Z11sub_13217C0z:\n"
  "  b _Z11sub_13217C0P15pthread_mutex_tPji\n"
  ".thumb\n"
);
// sub_134CB60(...) -> sub_134CB60(__m128i*, int, unsigned int*, unsigned int**)
__asm__(
  ".section .text.g4_bridge_545,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_134CB60z\n"
  ".type _Z11sub_134CB60z, %function\n"
  "_Z11sub_134CB60z:\n"
  "  b _Z11sub_134CB60P7__m128iiPjPS1_\n"
  ".thumb\n"
);
// sub_134E470(...) -> sub_134E470(_OWORD*, int*, unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_546,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_134E470z\n"
  ".type _Z11sub_134E470z, %function\n"
  "_Z11sub_134E470z:\n"
  "  b _Z11sub_134E470P6_OWORDPiPjS2_\n"
  ".thumb\n"
);
// sub_134CEC0(...) -> sub_134CEC0(int*, unsigned char*, int)
__asm__(
  ".section .text.g4_bridge_547,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_134CEC0z\n"
  ".type _Z11sub_134CEC0z, %function\n"
  "_Z11sub_134CEC0z:\n"
  "  b _Z11sub_134CEC0PiPhi\n"
  ".thumb\n"
);
// sub_134E3D0(...) -> sub_134E3D0(int, int)
__asm__(
  ".section .text.g4_bridge_548,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_134E3D0z\n"
  ".type _Z11sub_134E3D0z, %function\n"
  "_Z11sub_134E3D0z:\n"
  "  b _Z11sub_134E3D0ii\n"
  ".thumb\n"
);
// sub_1237ECF(...) -> sub_1237ECF()
__asm__(
  ".section .text.g4_bridge_549,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1237ECFz\n"
  ".type _Z11sub_1237ECFz, %function\n"
  "_Z11sub_1237ECFz:\n"
  "  b _Z11sub_1237ECFv\n"
  ".thumb\n"
);
// sub_1237F81(...) -> sub_1237F81()
__asm__(
  ".section .text.g4_bridge_550,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1237F81z\n"
  ".type _Z11sub_1237F81z, %function\n"
  "_Z11sub_1237F81z:\n"
  "  b _Z11sub_1237F81v\n"
  ".thumb\n"
);
// sub_1237F28(...) -> sub_1237F28()
__asm__(
  ".section .text.g4_bridge_551,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1237F28z\n"
  ".type _Z11sub_1237F28z, %function\n"
  "_Z11sub_1237F28z:\n"
  "  b _Z11sub_1237F28v\n"
  ".thumb\n"
);
// sub_124E3C0(...) -> sub_124E3C0(int, char**, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::Memo
__asm__(
  ".section .text.g4_bridge_552,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_124E3C0z\n"
  ".type _Z11sub_124E3C0z, %function\n"
  "_Z11sub_124E3C0z:\n"
  "  b _Z11sub_124E3C0iPPcPN9rapidjson15GenericDocumentINS1_4UTF8IcEENS1_19MemoryPoolAllocatorINS1_12CrtAllocatorEEEEE\n"
  ".thumb\n"
);
// sub_134C6F0(...) -> sub_134C6F0(float*, unsigned int)
__asm__(
  ".section .text.g4_bridge_553,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_134C6F0z\n"
  ".type _Z11sub_134C6F0z, %function\n"
  "_Z11sub_134C6F0z:\n"
  "  b _Z11sub_134C6F0Pfj\n"
  ".thumb\n"
);
// sub_124DDB0(...) -> sub_124DDB0(int*, unsigned char*)
__asm__(
  ".section .text.g4_bridge_554,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_124DDB0z\n"
  ".type _Z11sub_124DDB0z, %function\n"
  "_Z11sub_124DDB0z:\n"
  "  b _Z11sub_124DDB0PiPh\n"
  ".thumb\n"
);
// sub_1273C00(...) -> sub_1273C00(int*, int*)
__asm__(
  ".section .text.g4_bridge_555,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1273C00z\n"
  ".type _Z11sub_1273C00z, %function\n"
  "_Z11sub_1273C00z:\n"
  "  b _Z11sub_1273C00PiS_\n"
  ".thumb\n"
);
// sub_134C680(...) -> sub_134C680(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_556,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_134C680z\n"
  ".type _Z11sub_134C680z, %function\n"
  "_Z11sub_134C680z:\n"
  "  b _Z11sub_134C680Pji\n"
  ".thumb\n"
);
// sub_1361D8C(...) -> sub_1361D8C(int*)
__asm__(
  ".section .text.g4_bridge_557,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1361D8Cz\n"
  ".type _Z11sub_1361D8Cz, %function\n"
  "_Z11sub_1361D8Cz:\n"
  "  b _Z11sub_1361D8CPi\n"
  ".thumb\n"
);
// sub_EA08D0(...) -> sub_EA08D0(int*, unsigned int)
__asm__(
  ".section .text.g4_bridge_558,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA08D0z\n"
  ".type _Z10sub_EA08D0z, %function\n"
  "_Z10sub_EA08D0z:\n"
  "  b _Z10sub_EA08D0Pij\n"
  ".thumb\n"
);
// sub_1368150(...) -> sub_1368150(int, int, unsigned int*, int*)
__asm__(
  ".section .text.g4_bridge_559,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1368150z\n"
  ".type _Z11sub_1368150z, %function\n"
  "_Z11sub_1368150z:\n"
  "  b _Z11sub_1368150iiPjPi\n"
  ".thumb\n"
);
// sub_136F870(...) -> sub_136F870(int, int, int)
__asm__(
  ".section .text.g4_bridge_560,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_136F870z\n"
  ".type _Z11sub_136F870z, %function\n"
  "_Z11sub_136F870z:\n"
  "  b _Z11sub_136F870iii\n"
  ".thumb\n"
);
// sub_123A9F0(...) -> sub_123A9F0(unsigned int*, unsigned int*, unsigned int, void const**)
__asm__(
  ".section .text.g4_bridge_561,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_123A9F0z\n"
  ".type _Z11sub_123A9F0z, %function\n"
  "_Z11sub_123A9F0z:\n"
  "  b _Z11sub_123A9F0PjS_jPPKv\n"
  ".thumb\n"
);
// sub_134C470(...) -> sub_134C470(int)
__asm__(
  ".section .text.g4_bridge_562,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_134C470z\n"
  ".type _Z11sub_134C470z, %function\n"
  "_Z11sub_134C470z:\n"
  "  b _Z11sub_134C470i\n"
  ".thumb\n"
);
// sub_1372950(...) -> sub_1372950(int, int)
__asm__(
  ".section .text.g4_bridge_563,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1372950z\n"
  ".type _Z11sub_1372950z, %function\n"
  "_Z11sub_1372950z:\n"
  "  b _Z11sub_1372950ii\n"
  ".thumb\n"
);
// sub_134C510(...) -> sub_134C510()
__asm__(
  ".section .text.g4_bridge_564,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_134C510z\n"
  ".type _Z11sub_134C510z, %function\n"
  "_Z11sub_134C510z:\n"
  "  b _Z11sub_134C510v\n"
  ".thumb\n"
);
// sub_124259D(...) -> sub_124259D(int*, char*)
__asm__(
  ".section .text.g4_bridge_565,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_124259Dz\n"
  ".type _Z11sub_124259Dz, %function\n"
  "_Z11sub_124259Dz:\n"
  "  b _Z11sub_124259DPiPc\n"
  ".thumb\n"
);
// sub_134C880(...) -> sub_134C880(void**, int)
__asm__(
  ".section .text.g4_bridge_566,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_134C880z\n"
  ".type _Z11sub_134C880z, %function\n"
  "_Z11sub_134C880z:\n"
  "  b _Z11sub_134C880PPvi\n"
  ".thumb\n"
);
// sub_1367436(...) -> sub_1367436(int*, char*)
__asm__(
  ".section .text.g4_bridge_567,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1367436z\n"
  ".type _Z11sub_1367436z, %function\n"
  "_Z11sub_1367436z:\n"
  "  b _Z11sub_1367436PiPc\n"
  ".thumb\n"
);
// sub_13679F0(...) -> sub_13679F0(int, unsigned char*, int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_568,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_13679F0z\n"
  ".type _Z11sub_13679F0z, %function\n"
  "_Z11sub_13679F0z:\n"
  "  b _Z11sub_13679F0iPhiPj\n"
  ".thumb\n"
);
// sub_136B0B0(...) -> sub_136B0B0(unsigned int*, unsigned int*, int, int)
__asm__(
  ".section .text.g4_bridge_569,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_136B0B0z\n"
  ".type _Z11sub_136B0B0z, %function\n"
  "_Z11sub_136B0B0z:\n"
  "  b _Z11sub_136B0B0PjS_ii\n"
  ".thumb\n"
);
// sub_13675E4(...) -> sub_13675E4()
__asm__(
  ".section .text.g4_bridge_570,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_13675E4z\n"
  ".type _Z11sub_13675E4z, %function\n"
  "_Z11sub_13675E4z:\n"
  "  b _Z11sub_13675E4v\n"
  ".thumb\n"
);
// sub_134E060(...) -> sub_134E060(int*, unsigned int*, int, int)
__asm__(
  ".section .text.g4_bridge_571,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_134E060z\n"
  ".type _Z11sub_134E060z, %function\n"
  "_Z11sub_134E060z:\n"
  "  b _Z11sub_134E060PiPjii\n"
  ".thumb\n"
);
// sub_1356300(...) -> sub_1356300(unsigned int*)
__asm__(
  ".section .text.g4_bridge_572,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1356300z\n"
  ".type _Z11sub_1356300z, %function\n"
  "_Z11sub_1356300z:\n"
  "  b _Z11sub_1356300Pj\n"
  ".thumb\n"
);
// sub_124B068(...) -> sub_124B068()
__asm__(
  ".section .text.g4_bridge_573,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_124B068z\n"
  ".type _Z11sub_124B068z, %function\n"
  "_Z11sub_124B068z:\n"
  "  b _Z11sub_124B068v\n"
  ".thumb\n"
);
// sub_122F6C0(...) -> sub_122F6C0(int*, unsigned char*, unsigned char*, unsigned int**)
__asm__(
  ".section .text.g4_bridge_574,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_122F6C0z\n"
  ".type _Z11sub_122F6C0z, %function\n"
  "_Z11sub_122F6C0z:\n"
  "  b _Z11sub_122F6C0PiPhS0_PPj\n"
  ".thumb\n"
);
// sub_13684E0(...) -> sub_13684E0(pthread_mutex_t**, int*)
__asm__(
  ".section .text.g4_bridge_575,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_13684E0z\n"
  ".type _Z11sub_13684E0z, %function\n"
  "_Z11sub_13684E0z:\n"
  "  b _Z11sub_13684E0PP15pthread_mutex_tPi\n"
  ".thumb\n"
);
// sub_122FAB0(...) -> sub_122FAB0(long long*, int, unsigned char*)
__asm__(
  ".section .text.g4_bridge_576,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_122FAB0z\n"
  ".type _Z11sub_122FAB0z, %function\n"
  "_Z11sub_122FAB0z:\n"
  "  b _Z11sub_122FAB0PxiPh\n"
  ".thumb\n"
);
// sub_126AB10(...) -> sub_126AB10(int*, unsigned char*, unsigned char*, rapidjson::MemoryPoolAllocator<rapidjson
__asm__(
  ".section .text.g4_bridge_577,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_126AB10z\n"
  ".type _Z11sub_126AB10z, %function\n"
  "_Z11sub_126AB10z:\n"
  "  b _Z11sub_126AB10PiPhS0_PN9rapidjson19MemoryPoolAllocatorINS1_12CrtAllocatorEEE\n"
  ".thumb\n"
);
// sub_137C2B0(...) -> sub_137C2B0(int)
__asm__(
  ".section .text.g4_bridge_578,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_137C2B0z\n"
  ".type _Z11sub_137C2B0z, %function\n"
  "_Z11sub_137C2B0z:\n"
  "  b _Z11sub_137C2B0i\n"
  ".thumb\n"
);
// sub_1270D06(...) -> sub_1270D06()
__asm__(
  ".section .text.g4_bridge_579,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1270D06z\n"
  ".type _Z11sub_1270D06z, %function\n"
  "_Z11sub_1270D06z:\n"
  "  b _Z11sub_1270D06v\n"
  ".thumb\n"
);
// sub_71C220(...) -> sub_71C220(int)
__asm__(
  ".section .text.g4_bridge_580,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_71C220z\n"
  ".type _Z10sub_71C220z, %function\n"
  "_Z10sub_71C220z:\n"
  "  b _Z10sub_71C220i\n"
  ".thumb\n"
);
// sub_C1ACB0(...) -> sub_C1ACB0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_581,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_C1ACB0z\n"
  ".type _Z10sub_C1ACB0z, %function\n"
  "_Z10sub_C1ACB0z:\n"
  "  b _Z10sub_C1ACB0Pj\n"
  ".thumb\n"
);
// sub_1904220(...) -> sub_1904220(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_582,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1904220z\n"
  ".type _Z11sub_1904220z, %function\n"
  "_Z11sub_1904220z:\n"
  "  b _Z11sub_1904220Pji\n"
  ".thumb\n"
);
// sub_18FB170(...) -> sub_18FB170(int)
__asm__(
  ".section .text.g4_bridge_583,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18FB170z\n"
  ".type _Z11sub_18FB170z, %function\n"
  "_Z11sub_18FB170z:\n"
  "  b _Z11sub_18FB170i\n"
  ".thumb\n"
);
// sub_621450(...) -> sub_621450(unsigned int*)
__asm__(
  ".section .text.g4_bridge_584,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_621450z\n"
  ".type _Z10sub_621450z, %function\n"
  "_Z10sub_621450z:\n"
  "  b _Z10sub_621450Pj\n"
  ".thumb\n"
);
// sub_18FACB0(...) -> sub_18FACB0(int)
__asm__(
  ".section .text.g4_bridge_585,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18FACB0z\n"
  ".type _Z11sub_18FACB0z, %function\n"
  "_Z11sub_18FACB0z:\n"
  "  b _Z11sub_18FACB0i\n"
  ".thumb\n"
);
// sub_18FBDA0(...) -> sub_18FBDA0(pthread_mutex_t*, boost::this_thread::Self*)
__asm__(
  ".section .text.g4_bridge_586,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18FBDA0z\n"
  ".type _Z11sub_18FBDA0z, %function\n"
  "_Z11sub_18FBDA0z:\n"
  "  b _Z11sub_18FBDA0P15pthread_mutex_tPN5boost11this_thread4SelfE\n"
  ".thumb\n"
);
// sub_18FC130(...) -> sub_18FC130(pthread_mutex_t*, int, timespec*)
__asm__(
  ".section .text.g4_bridge_587,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18FC130z\n"
  ".type _Z11sub_18FC130z, %function\n"
  "_Z11sub_18FC130z:\n"
  "  b _Z11sub_18FC130P15pthread_mutex_tiP8timespec\n"
  ".thumb\n"
);
// sub_18FD000(...) -> sub_18FD000(int, void*)
__asm__(
  ".section .text.g4_bridge_588,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18FD000z\n"
  ".type _Z11sub_18FD000z, %function\n"
  "_Z11sub_18FD000z:\n"
  "  b _Z11sub_18FD000iPv\n"
  ".thumb\n"
);
// sub_18F8BF0(...) -> sub_18F8BF0(unsigned int*, int, char*)
__asm__(
  ".section .text.g4_bridge_589,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18F8BF0z\n"
  ".type _Z11sub_18F8BF0z, %function\n"
  "_Z11sub_18F8BF0z:\n"
  "  b _Z11sub_18F8BF0PjiPc\n"
  ".thumb\n"
);
// sub_18FB9D0(...) -> sub_18FB9D0(unsigned int, int*, int)
__asm__(
  ".section .text.g4_bridge_590,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18FB9D0z\n"
  ".type _Z11sub_18FB9D0z, %function\n"
  "_Z11sub_18FB9D0z:\n"
  "  b _Z11sub_18FB9D0jPii\n"
  ".thumb\n"
);
// sub_18FD420(...) -> sub_18FD420(int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_591,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18FD420z\n"
  ".type _Z11sub_18FD420z, %function\n"
  "_Z11sub_18FD420z:\n"
  "  b _Z11sub_18FD420iPj\n"
  ".thumb\n"
);
// sub_1953E80(...) -> sub_1953E80(unsigned char*, int, unsigned char**)
__asm__(
  ".section .text.g4_bridge_592,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1953E80z\n"
  ".type _Z11sub_1953E80z, %function\n"
  "_Z11sub_1953E80z:\n"
  "  b _Z11sub_1953E80PhiPS_\n"
  ".thumb\n"
);
// sub_85C060(...) -> sub_85C060(glitch::collada::CRootSceneNode::Self*)
__asm__(
  ".section .text.g4_bridge_593,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_85C060z\n"
  ".type _Z10sub_85C060z, %function\n"
  "_Z10sub_85C060z:\n"
  "  b _Z10sub_85C060PN6glitch7collada14CRootSceneNode4SelfE\n"
  ".thumb\n"
);
// sub_1239EF2(...) -> sub_1239EF2()
__asm__(
  ".section .text.g4_bridge_594,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1239EF2z\n"
  ".type _Z11sub_1239EF2z, %function\n"
  "_Z11sub_1239EF2z:\n"
  "  b _Z11sub_1239EF2v\n"
  ".thumb\n"
);
// sub_125E160(...) -> sub_125E160(unsigned int*, int, int, int)
__asm__(
  ".section .text.g4_bridge_595,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_125E160z\n"
  ".type _Z11sub_125E160z, %function\n"
  "_Z11sub_125E160z:\n"
  "  b _Z11sub_125E160Pjiii\n"
  ".thumb\n"
);
// sub_125E180(...) -> sub_125E180(unsigned int*, int, int, int)
__asm__(
  ".section .text.g4_bridge_596,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_125E180z\n"
  ".type _Z11sub_125E180z, %function\n"
  "_Z11sub_125E180z:\n"
  "  b _Z11sub_125E180Pjiii\n"
  ".thumb\n"
);
// sub_125EEF0(...) -> sub_125EEF0(int, unsigned int*, unsigned int*, unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_597,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_125EEF0z\n"
  ".type _Z11sub_125EEF0z, %function\n"
  "_Z11sub_125EEF0z:\n"
  "  b _Z11sub_125EEF0iPjS_S_S_\n"
  ".thumb\n"
);
// sub_125F550(...) -> sub_125F550(unsigned int*, int, int, int, int*)
__asm__(
  ".section .text.g4_bridge_598,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_125F550z\n"
  ".type _Z11sub_125F550z, %function\n"
  "_Z11sub_125F550z:\n"
  "  b _Z11sub_125F550PjiiiPi\n"
  ".thumb\n"
);
// sub_7ACFB0(...) -> sub_7ACFB0(int)
__asm__(
  ".section .text.g4_bridge_599,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7ACFB0z\n"
  ".type _Z10sub_7ACFB0z, %function\n"
  "_Z10sub_7ACFB0z:\n"
  "  b _Z10sub_7ACFB0i\n"
  ".thumb\n"
);
// sub_124E160(...) -> sub_124E160(int)
__asm__(
  ".section .text.g4_bridge_600,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_124E160z\n"
  ".type _Z11sub_124E160z, %function\n"
  "_Z11sub_124E160z:\n"
  "  b _Z11sub_124E160i\n"
  ".thumb\n"
);
// sub_125E1C0(...) -> sub_125E1C0(char*, int)
__asm__(
  ".section .text.g4_bridge_601,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_125E1C0z\n"
  ".type _Z11sub_125E1C0z, %function\n"
  "_Z11sub_125E1C0z:\n"
  "  b _Z11sub_125E1C0Pci\n"
  ".thumb\n"
);
// sub_6C1990(...) -> sub_6C1990(int)
__asm__(
  ".section .text.g4_bridge_602,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6C1990z\n"
  ".type _Z10sub_6C1990z, %function\n"
  "_Z10sub_6C1990z:\n"
  "  b _Z10sub_6C1990i\n"
  ".thumb\n"
);
// sub_1953D60(...) -> sub_1953D60(int volatile**, int, int volatile**)
__asm__(
  ".section .text.g4_bridge_603,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1953D60z\n"
  ".type _Z11sub_1953D60z, %function\n"
  "_Z11sub_1953D60z:\n"
  "  b _Z11sub_1953D60PPViiS1_\n"
  ".thumb\n"
);
// sub_125E1A0(...) -> sub_125E1A0(unsigned int*, int, int, int)
__asm__(
  ".section .text.g4_bridge_604,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_125E1A0z\n"
  ".type _Z11sub_125E1A0z, %function\n"
  "_Z11sub_125E1A0z:\n"
  "  b _Z11sub_125E1A0Pjiii\n"
  ".thumb\n"
);
// sub_18FD950(...) -> sub_18FD950(long long*, unsigned int*, char**, short)
__asm__(
  ".section .text.g4_bridge_605,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18FD950z\n"
  ".type _Z11sub_18FD950z, %function\n"
  "_Z11sub_18FD950z:\n"
  "  b _Z11sub_18FD950PxPjPPcs\n"
  ".thumb\n"
);
// sub_1900B40(...) -> sub_1900B40(int)
__asm__(
  ".section .text.g4_bridge_606,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1900B40z\n"
  ".type _Z11sub_1900B40z, %function\n"
  "_Z11sub_1900B40z:\n"
  "  b _Z11sub_1900B40i\n"
  ".thumb\n"
);
// sub_1273500(...) -> sub_1273500(unsigned int*, int, int, int)
__asm__(
  ".section .text.g4_bridge_607,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1273500z\n"
  ".type _Z11sub_1273500z, %function\n"
  "_Z11sub_1273500z:\n"
  "  b _Z11sub_1273500Pjiii\n"
  ".thumb\n"
);
// sub_1321DD0(...) -> sub_1321DD0(pthread_mutex_t**, int*)
__asm__(
  ".section .text.g4_bridge_608,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1321DD0z\n"
  ".type _Z11sub_1321DD0z, %function\n"
  "_Z11sub_1321DD0z:\n"
  "  b _Z11sub_1321DD0PP15pthread_mutex_tPi\n"
  ".thumb\n"
);
// sub_6C48B0(...) -> sub_6C48B0(int)
__asm__(
  ".section .text.g4_bridge_609,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6C48B0z\n"
  ".type _Z10sub_6C48B0z, %function\n"
  "_Z10sub_6C48B0z:\n"
  "  b _Z10sub_6C48B0i\n"
  ".thumb\n"
);
// sub_6C4360(...) -> sub_6C4360(int)
__asm__(
  ".section .text.g4_bridge_610,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6C4360z\n"
  ".type _Z10sub_6C4360z, %function\n"
  "_Z10sub_6C4360z:\n"
  "  b _Z10sub_6C4360i\n"
  ".thumb\n"
);
// sub_1320EC0(...) -> sub_1320EC0(int, int, int*)
__asm__(
  ".section .text.g4_bridge_611,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1320EC0z\n"
  ".type _Z11sub_1320EC0z, %function\n"
  "_Z11sub_1320EC0z:\n"
  "  b _Z11sub_1320EC0iiPi\n"
  ".thumb\n"
);
// sub_18FDE90(...) -> sub_18FDE90(unsigned int*, long long*, short, char**)
__asm__(
  ".section .text.g4_bridge_612,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_18FDE90z\n"
  ".type _Z11sub_18FDE90z, %function\n"
  "_Z11sub_18FDE90z:\n"
  "  b _Z11sub_18FDE90PjPxsPPc\n"
  ".thumb\n"
);
// sub_6EF490(...) -> sub_6EF490(unsigned int*)
__asm__(
  ".section .text.g4_bridge_613,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6EF490z\n"
  ".type _Z10sub_6EF490z, %function\n"
  "_Z10sub_6EF490z:\n"
  "  b _Z10sub_6EF490Pj\n"
  ".thumb\n"
);
// sub_68D780(...) -> sub_68D780(unsigned int*)
__asm__(
  ".section .text.g4_bridge_614,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_68D780z\n"
  ".type _Z10sub_68D780z, %function\n"
  "_Z10sub_68D780z:\n"
  "  b _Z10sub_68D780Pj\n"
  ".thumb\n"
);
// sub_1273B00(...) -> sub_1273B00(unsigned int*, int, int, int, int*)
__asm__(
  ".section .text.g4_bridge_615,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1273B00z\n"
  ".type _Z11sub_1273B00z, %function\n"
  "_Z11sub_1273B00z:\n"
  "  b _Z11sub_1273B00PjiiiPi\n"
  ".thumb\n"
);
// sub_1274880(...) -> sub_1274880(int (***)(int, int, int), int (**)(int, int, int))
__asm__(
  ".section .text.g4_bridge_616,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1274880z\n"
  ".type _Z11sub_1274880z, %function\n"
  "_Z11sub_1274880z:\n"
  "  b _Z11sub_1274880PPPFiiiiES1_\n"
  ".thumb\n"
);
// sub_1273730(...) -> sub_1273730(unsigned int*, char*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_617,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1273730z\n"
  ".type _Z11sub_1273730z, %function\n"
  "_Z11sub_1273730z:\n"
  "  b _Z11sub_1273730PjPcS_\n"
  ".thumb\n"
);
// sub_190C190(...) -> sub_190C190(int, char*, int)
__asm__(
  ".section .text.g4_bridge_618,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190C190z\n"
  ".type _Z11sub_190C190z, %function\n"
  "_Z11sub_190C190z:\n"
  "  b _Z11sub_190C190iPci\n"
  ".thumb\n"
);
// sub_6EEEE0(...) -> sub_6EEEE0(unsigned int*, int, int)
__asm__(
  ".section .text.g4_bridge_619,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6EEEE0z\n"
  ".type _Z10sub_6EEEE0z, %function\n"
  "_Z10sub_6EEEE0z:\n"
  "  b _Z10sub_6EEEE0Pjii\n"
  ".thumb\n"
);
// sub_71C150(...) -> sub_71C150(int)
__asm__(
  ".section .text.g4_bridge_620,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_71C150z\n"
  ".type _Z10sub_71C150z, %function\n"
  "_Z10sub_71C150z:\n"
  "  b _Z10sub_71C150i\n"
  ".thumb\n"
);
// sub_71C370(...) -> sub_71C370(int)
__asm__(
  ".section .text.g4_bridge_621,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_71C370z\n"
  ".type _Z10sub_71C370z, %function\n"
  "_Z10sub_71C370z:\n"
  "  b _Z10sub_71C370i\n"
  ".thumb\n"
);
// sub_71C4C0(...) -> sub_71C4C0(int)
__asm__(
  ".section .text.g4_bridge_622,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_71C4C0z\n"
  ".type _Z10sub_71C4C0z, %function\n"
  "_Z10sub_71C4C0z:\n"
  "  b _Z10sub_71C4C0i\n"
  ".thumb\n"
);
// sub_6CB240(...) -> sub_6CB240(int*, int*)
__asm__(
  ".section .text.g4_bridge_623,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6CB240z\n"
  ".type _Z10sub_6CB240z, %function\n"
  "_Z10sub_6CB240z:\n"
  "  b _Z10sub_6CB240PiS_\n"
  ".thumb\n"
);
// sub_71C560(...) -> sub_71C560(int)
__asm__(
  ".section .text.g4_bridge_624,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_71C560z\n"
  ".type _Z10sub_71C560z, %function\n"
  "_Z10sub_71C560z:\n"
  "  b _Z10sub_71C560i\n"
  ".thumb\n"
);
// sub_71C620(...) -> sub_71C620(int)
__asm__(
  ".section .text.g4_bridge_625,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_71C620z\n"
  ".type _Z10sub_71C620z, %function\n"
  "_Z10sub_71C620z:\n"
  "  b _Z10sub_71C620i\n"
  ".thumb\n"
);
// sub_190AF80(...) -> sub_190AF80(int)
__asm__(
  ".section .text.g4_bridge_626,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190AF80z\n"
  ".type _Z11sub_190AF80z, %function\n"
  "_Z11sub_190AF80z:\n"
  "  b _Z11sub_190AF80i\n"
  ".thumb\n"
);
// sub_71C7B0(...) -> sub_71C7B0(int)
__asm__(
  ".section .text.g4_bridge_627,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_71C7B0z\n"
  ".type _Z10sub_71C7B0z, %function\n"
  "_Z10sub_71C7B0z:\n"
  "  b _Z10sub_71C7B0i\n"
  ".thumb\n"
);
// sub_1282480(...) -> sub_1282480(unsigned int*, int, int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_628,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1282480z\n"
  ".type _Z11sub_1282480z, %function\n"
  "_Z11sub_1282480z:\n"
  "  b _Z11sub_1282480PjiiS_\n"
  ".thumb\n"
);
// sub_71CA10(...) -> sub_71CA10(int)
__asm__(
  ".section .text.g4_bridge_629,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_71CA10z\n"
  ".type _Z10sub_71CA10z, %function\n"
  "_Z10sub_71CA10z:\n"
  "  b _Z10sub_71CA10i\n"
  ".thumb\n"
);
// sub_134E404(...) -> sub_134E404(int, int)
__asm__(
  ".section .text.g4_bridge_630,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_134E404z\n"
  ".type _Z11sub_134E404z, %function\n"
  "_Z11sub_134E404z:\n"
  "  b _Z11sub_134E404ii\n"
  ".thumb\n"
);
// sub_190B2B0(...) -> sub_190B2B0(int)
__asm__(
  ".section .text.g4_bridge_631,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190B2B0z\n"
  ".type _Z11sub_190B2B0z, %function\n"
  "_Z11sub_190B2B0z:\n"
  "  b _Z11sub_190B2B0i\n"
  ".thumb\n"
);
// sub_13276C0(...) -> sub_13276C0(int, char**, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::Memo
__asm__(
  ".section .text.g4_bridge_632,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_13276C0z\n"
  ".type _Z11sub_13276C0z, %function\n"
  "_Z11sub_13276C0z:\n"
  "  b _Z11sub_13276C0iPPcPN9rapidjson15GenericDocumentINS1_4UTF8IcEENS1_19MemoryPoolAllocatorINS1_12CrtAllocatorEEEEE\n"
  ".thumb\n"
);
// sub_1907130(...) -> sub_1907130(int)
__asm__(
  ".section .text.g4_bridge_633,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1907130z\n"
  ".type _Z11sub_1907130z, %function\n"
  "_Z11sub_1907130z:\n"
  "  b _Z11sub_1907130i\n"
  ".thumb\n"
);
// sub_71CD30(...) -> sub_71CD30(int)
__asm__(
  ".section .text.g4_bridge_634,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_71CD30z\n"
  ".type _Z10sub_71CD30z, %function\n"
  "_Z10sub_71CD30z:\n"
  "  b _Z10sub_71CD30i\n"
  ".thumb\n"
);
// sub_71CFF0(...) -> sub_71CFF0(int)
__asm__(
  ".section .text.g4_bridge_635,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_71CFF0z\n"
  ".type _Z10sub_71CFF0z, %function\n"
  "_Z10sub_71CFF0z:\n"
  "  b _Z10sub_71CFF0i\n"
  ".thumb\n"
);
// sub_1904180(...) -> sub_1904180(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_636,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1904180z\n"
  ".type _Z11sub_1904180z, %function\n"
  "_Z11sub_1904180z:\n"
  "  b _Z11sub_1904180Pji\n"
  ".thumb\n"
);
// sub_688E40(...) -> sub_688E40(int, int)
__asm__(
  ".section .text.g4_bridge_637,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_688E40z\n"
  ".type _Z10sub_688E40z, %function\n"
  "_Z10sub_688E40z:\n"
  "  b _Z10sub_688E40ii\n"
  ".thumb\n"
);
// sub_6444D0(...) -> sub_6444D0(int, int)
__asm__(
  ".section .text.g4_bridge_638,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6444D0z\n"
  ".type _Z10sub_6444D0z, %function\n"
  "_Z10sub_6444D0z:\n"
  "  b _Z10sub_6444D0ii\n"
  ".thumb\n"
);
// sub_644460(...) -> sub_644460(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_639,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_644460z\n"
  ".type _Z10sub_644460z, %function\n"
  "_Z10sub_644460z:\n"
  "  b _Z10sub_644460Pji\n"
  ".thumb\n"
);
// sub_136D210(...) -> sub_136D210(unsigned int*)
__asm__(
  ".section .text.g4_bridge_640,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_136D210z\n"
  ".type _Z11sub_136D210z, %function\n"
  "_Z11sub_136D210z:\n"
  "  b _Z11sub_136D210Pj\n"
  ".thumb\n"
);
// sub_6EEA00(...) -> sub_6EEA00(unsigned int*, int, int)
__asm__(
  ".section .text.g4_bridge_641,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6EEA00z\n"
  ".type _Z10sub_6EEA00z, %function\n"
  "_Z10sub_6EEA00z:\n"
  "  b _Z10sub_6EEA00Pjii\n"
  ".thumb\n"
);
// sub_13290A0(...) -> sub_13290A0()
__asm__(
  ".section .text.g4_bridge_642,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_13290A0z\n"
  ".type _Z11sub_13290A0z, %function\n"
  "_Z11sub_13290A0z:\n"
  "  b _Z11sub_13290A0v\n"
  ".thumb\n"
);
// sub_6EECC0(...) -> sub_6EECC0(int)
__asm__(
  ".section .text.g4_bridge_643,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6EECC0z\n"
  ".type _Z10sub_6EECC0z, %function\n"
  "_Z10sub_6EECC0z:\n"
  "  b _Z10sub_6EECC0i\n"
  ".thumb\n"
);
// sub_6EF440(...) -> sub_6EF440(unsigned int*, int, int)
__asm__(
  ".section .text.g4_bridge_644,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6EF440z\n"
  ".type _Z10sub_6EF440z, %function\n"
  "_Z10sub_6EF440z:\n"
  "  b _Z10sub_6EF440Pjii\n"
  ".thumb\n"
);
// sub_1903F50(...) -> sub_1903F50(std::exception*)
__asm__(
  ".section .text.g4_bridge_645,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1903F50z\n"
  ".type _Z11sub_1903F50z, %function\n"
  "_Z11sub_1903F50z:\n"
  "  b _Z11sub_1903F50PSt9exception\n"
  ".thumb\n"
);
// sub_19041E0(...) -> sub_19041E0(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_646,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19041E0z\n"
  ".type _Z11sub_19041E0z, %function\n"
  "_Z11sub_19041E0z:\n"
  "  b _Z11sub_19041E0Pji\n"
  ".thumb\n"
);
// sub_19040E0(...) -> sub_19040E0(std::exception*)
__asm__(
  ".section .text.g4_bridge_647,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19040E0z\n"
  ".type _Z11sub_19040E0z, %function\n"
  "_Z11sub_19040E0z:\n"
  "  b _Z11sub_19040E0PSt9exception\n"
  ".thumb\n"
);
// sub_126A3B0(...) -> sub_126A3B0(unsigned int*, unsigned char*, int)
__asm__(
  ".section .text.g4_bridge_648,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_126A3B0z\n"
  ".type _Z11sub_126A3B0z, %function\n"
  "_Z11sub_126A3B0z:\n"
  "  b _Z11sub_126A3B0PjPhi\n"
  ".thumb\n"
);
// sub_1904080(...) -> sub_1904080(std::exception*)
__asm__(
  ".section .text.g4_bridge_649,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1904080z\n"
  ".type _Z11sub_1904080z, %function\n"
  "_Z11sub_1904080z:\n"
  "  b _Z11sub_1904080PSt9exception\n"
  ".thumb\n"
);
// sub_1904020(...) -> sub_1904020(std::exception*)
__asm__(
  ".section .text.g4_bridge_650,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1904020z\n"
  ".type _Z11sub_1904020z, %function\n"
  "_Z11sub_1904020z:\n"
  "  b _Z11sub_1904020PSt9exception\n"
  ".thumb\n"
);
// sub_135E550(...) -> sub_135E550(unsigned int*)
__asm__(
  ".section .text.g4_bridge_651,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_135E550z\n"
  ".type _Z11sub_135E550z, %function\n"
  "_Z11sub_135E550z:\n"
  "  b _Z11sub_135E550Pj\n"
  ".thumb\n"
);
// sub_134D120(...) -> sub_134D120(unsigned int*)
__asm__(
  ".section .text.g4_bridge_652,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_134D120z\n"
  ".type _Z11sub_134D120z, %function\n"
  "_Z11sub_134D120z:\n"
  "  b _Z11sub_134D120Pj\n"
  ".thumb\n"
);
// sub_1903FC0(...) -> sub_1903FC0(std::exception*)
__asm__(
  ".section .text.g4_bridge_653,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1903FC0z\n"
  ".type _Z11sub_1903FC0z, %function\n"
  "_Z11sub_1903FC0z:\n"
  "  b _Z11sub_1903FC0PSt9exception\n"
  ".thumb\n"
);
// sub_6CBA50(...) -> sub_6CBA50(int*, int*)
__asm__(
  ".section .text.g4_bridge_654,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6CBA50z\n"
  ".type _Z10sub_6CBA50z, %function\n"
  "_Z10sub_6CBA50z:\n"
  "  b _Z10sub_6CBA50PiS_\n"
  ".thumb\n"
);
// sub_6CB070(...) -> sub_6CB070(unsigned int*, int*)
__asm__(
  ".section .text.g4_bridge_655,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6CB070z\n"
  ".type _Z10sub_6CB070z, %function\n"
  "_Z10sub_6CB070z:\n"
  "  b _Z10sub_6CB070PjPi\n"
  ".thumb\n"
);
// sub_6CAE70(...) -> sub_6CAE70(unsigned int*, int*)
__asm__(
  ".section .text.g4_bridge_656,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6CAE70z\n"
  ".type _Z10sub_6CAE70z, %function\n"
  "_Z10sub_6CAE70z:\n"
  "  b _Z10sub_6CAE70PjPi\n"
  ".thumb\n"
);
// sub_1904340(...) -> sub_1904340(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_657,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1904340z\n"
  ".type _Z11sub_1904340z, %function\n"
  "_Z11sub_1904340z:\n"
  "  b _Z11sub_1904340Pji\n"
  ".thumb\n"
);
// sub_1903EB0(...) -> sub_1903EB0(std::exception*)
__asm__(
  ".section .text.g4_bridge_658,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1903EB0z\n"
  ".type _Z11sub_1903EB0z, %function\n"
  "_Z11sub_1903EB0z:\n"
  "  b _Z11sub_1903EB0PSt9exception\n"
  ".thumb\n"
);
// sub_1904380(...) -> sub_1904380(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_659,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1904380z\n"
  ".type _Z11sub_1904380z, %function\n"
  "_Z11sub_1904380z:\n"
  "  b _Z11sub_1904380Pji\n"
  ".thumb\n"
);
// sub_1903E50(...) -> sub_1903E50(std::exception*)
__asm__(
  ".section .text.g4_bridge_660,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1903E50z\n"
  ".type _Z11sub_1903E50z, %function\n"
  "_Z11sub_1903E50z:\n"
  "  b _Z11sub_1903E50PSt9exception\n"
  ".thumb\n"
);
// sub_19043C0(...) -> sub_19043C0(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_661,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19043C0z\n"
  ".type _Z11sub_19043C0z, %function\n"
  "_Z11sub_19043C0z:\n"
  "  b _Z11sub_19043C0Pji\n"
  ".thumb\n"
);
// sub_6C13B0(...) -> sub_6C13B0(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_662,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6C13B0z\n"
  ".type _Z10sub_6C13B0z, %function\n"
  "_Z10sub_6C13B0z:\n"
  "  b _Z10sub_6C13B0Pji\n"
  ".thumb\n"
);
// sub_1903DF0(...) -> sub_1903DF0(std::exception*)
__asm__(
  ".section .text.g4_bridge_663,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1903DF0z\n"
  ".type _Z11sub_1903DF0z, %function\n"
  "_Z11sub_1903DF0z:\n"
  "  b _Z11sub_1903DF0PSt9exception\n"
  ".thumb\n"
);
// sub_1900D00(...) -> sub_1900D00(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_664,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1900D00z\n"
  ".type _Z11sub_1900D00z, %function\n"
  "_Z11sub_1900D00z:\n"
  "  b _Z11sub_1900D00Pji\n"
  ".thumb\n"
);
// sub_1900C50(...) -> sub_1900C50(std::exception*)
__asm__(
  ".section .text.g4_bridge_665,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1900C50z\n"
  ".type _Z11sub_1900C50z, %function\n"
  "_Z11sub_1900C50z:\n"
  "  b _Z11sub_1900C50PSt9exception\n"
  ".thumb\n"
);
// sub_1904730(...) -> sub_1904730()
__asm__(
  ".section .text.g4_bridge_666,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1904730z\n"
  ".type _Z11sub_1904730z, %function\n"
  "_Z11sub_1904730z:\n"
  "  b _Z11sub_1904730v\n"
  ".thumb\n"
);
// sub_1904680(...) -> sub_1904680(std::exception*)
__asm__(
  ".section .text.g4_bridge_667,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1904680z\n"
  ".type _Z11sub_1904680z, %function\n"
  "_Z11sub_1904680z:\n"
  "  b _Z11sub_1904680PSt9exception\n"
  ".thumb\n"
);
// sub_19069E0(...) -> sub_19069E0()
__asm__(
  ".section .text.g4_bridge_668,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19069E0z\n"
  ".type _Z11sub_19069E0z, %function\n"
  "_Z11sub_19069E0z:\n"
  "  b _Z11sub_19069E0v\n"
  ".thumb\n"
);
// sub_1906740(...) -> sub_1906740(std::exception*)
__asm__(
  ".section .text.g4_bridge_669,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1906740z\n"
  ".type _Z11sub_1906740z, %function\n"
  "_Z11sub_1906740z:\n"
  "  b _Z11sub_1906740PSt9exception\n"
  ".thumb\n"
);
// sub_6A08F0(...) -> sub_6A08F0(int, int*)
__asm__(
  ".section .text.g4_bridge_670,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6A08F0z\n"
  ".type _Z10sub_6A08F0z, %function\n"
  "_Z10sub_6A08F0z:\n"
  "  b _Z10sub_6A08F0iPi\n"
  ".thumb\n"
);
// sub_19007A0(...) -> sub_19007A0(std::exception*)
__asm__(
  ".section .text.g4_bridge_671,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19007A0z\n"
  ".type _Z11sub_19007A0z, %function\n"
  "_Z11sub_19007A0z:\n"
  "  b _Z11sub_19007A0PSt9exception\n"
  ".thumb\n"
);
// sub_1906670(...) -> sub_1906670(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_672,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1906670z\n"
  ".type _Z11sub_1906670z, %function\n"
  "_Z11sub_1906670z:\n"
  "  b _Z11sub_1906670Pji\n"
  ".thumb\n"
);
// sub_1906600(...) -> sub_1906600(std::exception*)
__asm__(
  ".section .text.g4_bridge_673,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1906600z\n"
  ".type _Z11sub_1906600z, %function\n"
  "_Z11sub_1906600z:\n"
  "  b _Z11sub_1906600PSt9exception\n"
  ".thumb\n"
);
// sub_1320240(...) -> sub_1320240(void**, glotv3::EventValue::Self const*)
__asm__(
  ".section .text.g4_bridge_674,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1320240z\n"
  ".type _Z11sub_1320240z, %function\n"
  "_Z11sub_1320240z:\n"
  "  b _Z11sub_1320240PPvPKN6glotv310EventValue4SelfE\n"
  ".thumb\n"
);
// sub_1904E10(...) -> sub_1904E10(unsigned int*, char*, int, unsigned char)
__asm__(
  ".section .text.g4_bridge_675,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1904E10z\n"
  ".type _Z11sub_1904E10z, %function\n"
  "_Z11sub_1904E10z:\n"
  "  b _Z11sub_1904E10PjPcih\n"
  ".thumb\n"
);
// sub_1908BB0(...) -> sub_1908BB0(int, int, int, int)
__asm__(
  ".section .text.g4_bridge_676,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1908BB0z\n"
  ".type _Z11sub_1908BB0z, %function\n"
  "_Z11sub_1908BB0z:\n"
  "  b _Z11sub_1908BB0iiii\n"
  ".thumb\n"
);
// sub_655550(...) -> sub_655550(int)
__asm__(
  ".section .text.g4_bridge_677,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_655550z\n"
  ".type _Z10sub_655550z, %function\n"
  "_Z10sub_655550z:\n"
  "  b _Z10sub_655550i\n"
  ".thumb\n"
);
// sub_1908E50(...) -> sub_1908E50(int, int, int, int)
__asm__(
  ".section .text.g4_bridge_678,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1908E50z\n"
  ".type _Z11sub_1908E50z, %function\n"
  "_Z11sub_1908E50z:\n"
  "  b _Z11sub_1908E50iiii\n"
  ".thumb\n"
);
// sub_19053C0(...) -> sub_19053C0(unsigned int*, char*)
__asm__(
  ".section .text.g4_bridge_679,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19053C0z\n"
  ".type _Z11sub_19053C0z, %function\n"
  "_Z11sub_19053C0z:\n"
  "  b _Z11sub_19053C0PjPc\n"
  ".thumb\n"
);
// sub_654730(...) -> sub_654730(float*, float*, float*)
__asm__(
  ".section .text.g4_bridge_680,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_654730z\n"
  ".type _Z10sub_654730z, %function\n"
  "_Z10sub_654730z:\n"
  "  b _Z10sub_654730PfS_S_\n"
  ".thumb\n"
);
// sub_1905D60(...) -> sub_1905D60(unsigned int*, wchar_t*, int, wchar_t)
__asm__(
  ".section .text.g4_bridge_681,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1905D60z\n"
  ".type _Z11sub_1905D60z, %function\n"
  "_Z11sub_1905D60z:\n"
  "  b _Z11sub_1905D60PjPwiw\n"
  ".thumb\n"
);
// sub_C27320(...) -> sub_C27320(unsigned int*)
__asm__(
  ".section .text.g4_bridge_682,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_C27320z\n"
  ".type _Z10sub_C27320z, %function\n"
  "_Z10sub_C27320z:\n"
  "  b _Z10sub_C27320Pj\n"
  ".thumb\n"
);
// sub_1902050(...) -> sub_1902050(unsigned int*)
__asm__(
  ".section .text.g4_bridge_683,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1902050z\n"
  ".type _Z11sub_1902050z, %function\n"
  "_Z11sub_1902050z:\n"
  "  b _Z11sub_1902050Pj\n"
  ".thumb\n"
);
// sub_C21F30(...) -> sub_C21F30(int)
__asm__(
  ".section .text.g4_bridge_684,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_C21F30z\n"
  ".type _Z10sub_C21F30z, %function\n"
  "_Z10sub_C21F30z:\n"
  "  b _Z10sub_C21F30i\n"
  ".thumb\n"
);
// sub_1902580(...) -> sub_1902580(unsigned int*, int*, int volatile*)
__asm__(
  ".section .text.g4_bridge_685,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1902580z\n"
  ".type _Z11sub_1902580z, %function\n"
  "_Z11sub_1902580z:\n"
  "  b _Z11sub_1902580PjPiPVi\n"
  ".thumb\n"
);
// sub_19536E0(...) -> sub_19536E0(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_686,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19536E0z\n"
  ".type _Z11sub_19536E0z, %function\n"
  "_Z11sub_19536E0z:\n"
  "  b _Z11sub_19536E0Pji\n"
  ".thumb\n"
);
// sub_19079A0(...) -> sub_19079A0(int)
__asm__(
  ".section .text.g4_bridge_687,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19079A0z\n"
  ".type _Z11sub_19079A0z, %function\n"
  "_Z11sub_19079A0z:\n"
  "  b _Z11sub_19079A0i\n"
  ".thumb\n"
);
// sub_1907330(...) -> sub_1907330(int)
__asm__(
  ".section .text.g4_bridge_688,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1907330z\n"
  ".type _Z11sub_1907330z, %function\n"
  "_Z11sub_1907330z:\n"
  "  b _Z11sub_1907330i\n"
  ".thumb\n"
);
// sub_1907200(...) -> sub_1907200(int)
__asm__(
  ".section .text.g4_bridge_689,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1907200z\n"
  ".type _Z11sub_1907200z, %function\n"
  "_Z11sub_1907200z:\n"
  "  b _Z11sub_1907200i\n"
  ".thumb\n"
);
// sub_1907B60(...) -> sub_1907B60(int)
__asm__(
  ".section .text.g4_bridge_690,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1907B60z\n"
  ".type _Z11sub_1907B60z, %function\n"
  "_Z11sub_1907B60z:\n"
  "  b _Z11sub_1907B60i\n"
  ".thumb\n"
);
// sub_1907700(...) -> sub_1907700(int)
__asm__(
  ".section .text.g4_bridge_691,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1907700z\n"
  ".type _Z11sub_1907700z, %function\n"
  "_Z11sub_1907700z:\n"
  "  b _Z11sub_1907700i\n"
  ".thumb\n"
);
// sub_19075C0(...) -> sub_19075C0(int)
__asm__(
  ".section .text.g4_bridge_692,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19075C0z\n"
  ".type _Z11sub_19075C0z, %function\n"
  "_Z11sub_19075C0z:\n"
  "  b _Z11sub_19075C0i\n"
  ".thumb\n"
);
// sub_874990(...) -> sub_874990(glitch::scene::ISceneNode::Self*)
__asm__(
  ".section .text.g4_bridge_693,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_874990z\n"
  ".type _Z10sub_874990z, %function\n"
  "_Z10sub_874990z:\n"
  "  b _Z10sub_874990PN6glitch5scene10ISceneNode4SelfE\n"
  ".thumb\n"
);
// sub_734B50(...) -> sub_734B50(unsigned int*, char*)
__asm__(
  ".section .text.g4_bridge_694,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_734B50z\n"
  ".type _Z10sub_734B50z, %function\n"
  "_Z10sub_734B50z:\n"
  "  b _Z10sub_734B50PjPc\n"
  ".thumb\n"
);
// sub_1901AE0(...) -> sub_1901AE0(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_695,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1901AE0z\n"
  ".type _Z11sub_1901AE0z, %function\n"
  "_Z11sub_1901AE0z:\n"
  "  b _Z11sub_1901AE0Pji\n"
  ".thumb\n"
);
// explicit map -> _Z10sub_799F30ij
__asm__(
  ".section .text.g4_bridge_696,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_79A420z\n"
  ".type _Z10sub_79A420z, %function\n"
  "_Z10sub_79A420z:\n"
  "  b _Z10sub_799F30ij\n"
  ".thumb\n"
);
// sub_1953860(...) -> sub_1953860(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_697,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1953860z\n"
  ".type _Z11sub_1953860z, %function\n"
  "_Z11sub_1953860z:\n"
  "  b _Z11sub_1953860Pji\n"
  ".thumb\n"
);
// sub_1953560(...) -> sub_1953560(unsigned int*)
__asm__(
  ".section .text.g4_bridge_698,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1953560z\n"
  ".type _Z11sub_1953560z, %function\n"
  "_Z11sub_1953560z:\n"
  "  b _Z11sub_1953560Pj\n"
  ".thumb\n"
);
// sub_1907AB0(...) -> sub_1907AB0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_699,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1907AB0z\n"
  ".type _Z11sub_1907AB0z, %function\n"
  "_Z11sub_1907AB0z:\n"
  "  b _Z11sub_1907AB0Pj\n"
  ".thumb\n"
);
// sub_1953AA0(...) -> sub_1953AA0(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_700,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1953AA0z\n"
  ".type _Z11sub_1953AA0z, %function\n"
  "_Z11sub_1953AA0z:\n"
  "  b _Z11sub_1953AA0Pji\n"
  ".thumb\n"
);
// sub_1907460(...) -> sub_1907460(unsigned int*)
__asm__(
  ".section .text.g4_bridge_701,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1907460z\n"
  ".type _Z11sub_1907460z, %function\n"
  "_Z11sub_1907460z:\n"
  "  b _Z11sub_1907460Pj\n"
  ".thumb\n"
);
// sub_1907510(...) -> sub_1907510(unsigned int*)
__asm__(
  ".section .text.g4_bridge_702,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1907510z\n"
  ".type _Z11sub_1907510z, %function\n"
  "_Z11sub_1907510z:\n"
  "  b _Z11sub_1907510Pj\n"
  ".thumb\n"
);
// sub_655B90(...) -> sub_655B90()
__asm__(
  ".section .text.g4_bridge_703,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_655B90z\n"
  ".type _Z10sub_655B90z, %function\n"
  "_Z10sub_655B90z:\n"
  "  b _Z10sub_655B90v\n"
  ".thumb\n"
);
// sub_190A840(...) -> sub_190A840(int)
__asm__(
  ".section .text.g4_bridge_704,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190A840z\n"
  ".type _Z11sub_190A840z, %function\n"
  "_Z11sub_190A840z:\n"
  "  b _Z11sub_190A840i\n"
  ".thumb\n"
);
// sub_190DEF0(...) -> sub_190DEF0(int)
__asm__(
  ".section .text.g4_bridge_705,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190DEF0z\n"
  ".type _Z11sub_190DEF0z, %function\n"
  "_Z11sub_190DEF0z:\n"
  "  b _Z11sub_190DEF0i\n"
  ".thumb\n"
);
// sub_549580(...) -> sub_549580(int)
__asm__(
  ".section .text.g4_bridge_706,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_549580z\n"
  ".type _Z10sub_549580z, %function\n"
  "_Z10sub_549580z:\n"
  "  b _Z10sub_549580i\n"
  ".thumb\n"
);
// sub_1953620(...) -> sub_1953620(unsigned int*)
__asm__(
  ".section .text.g4_bridge_707,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1953620z\n"
  ".type _Z11sub_1953620z, %function\n"
  "_Z11sub_1953620z:\n"
  "  b _Z11sub_1953620Pj\n"
  ".thumb\n"
);
// sub_1907C80(...) -> sub_1907C80(unsigned int*)
__asm__(
  ".section .text.g4_bridge_708,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1907C80z\n"
  ".type _Z11sub_1907C80z, %function\n"
  "_Z11sub_1907C80z:\n"
  "  b _Z11sub_1907C80Pj\n"
  ".thumb\n"
);
// sub_1907840(...) -> sub_1907840(unsigned int*)
__asm__(
  ".section .text.g4_bridge_709,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1907840z\n"
  ".type _Z11sub_1907840z, %function\n"
  "_Z11sub_1907840z:\n"
  "  b _Z11sub_1907840Pj\n"
  ".thumb\n"
);
// sub_19078F0(...) -> sub_19078F0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_710,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19078F0z\n"
  ".type _Z11sub_19078F0z, %function\n"
  "_Z11sub_19078F0z:\n"
  "  b _Z11sub_19078F0Pj\n"
  ".thumb\n"
);
// explicit map -> _Z10sub_789CD0i
__asm__(
  ".section .text.g4_bridge_711,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_789DE0z\n"
  ".type _Z10sub_789DE0z, %function\n"
  "_Z10sub_789DE0z:\n"
  "  b _Z10sub_789CD0i\n"
  ".thumb\n"
);
// sub_87D3E0(...) -> sub_87D3E0(glitch::scene::CSceneManager::Self*)
__asm__(
  ".section .text.g4_bridge_712,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_87D3E0z\n"
  ".type _Z10sub_87D3E0z, %function\n"
  "_Z10sub_87D3E0z:\n"
  "  b _Z10sub_87D3E0PN6glitch5scene13CSceneManager4SelfE\n"
  ".thumb\n"
);
// sub_190B080(...) -> sub_190B080(char*)
__asm__(
  ".section .text.g4_bridge_713,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190B080z\n"
  ".type _Z11sub_190B080z, %function\n"
  "_Z11sub_190B080z:\n"
  "  b _Z11sub_190B080Pc\n"
  ".thumb\n"
);
// sub_190B1A0(...) -> sub_190B1A0(int)
__asm__(
  ".section .text.g4_bridge_714,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190B1A0z\n"
  ".type _Z11sub_190B1A0z, %function\n"
  "_Z11sub_190B1A0z:\n"
  "  b _Z11sub_190B1A0i\n"
  ".thumb\n"
);
// sub_19543D0(...) -> sub_19543D0(int, char*, char*)
__asm__(
  ".section .text.g4_bridge_715,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19543D0z\n"
  ".type _Z11sub_19543D0z, %function\n"
  "_Z11sub_19543D0z:\n"
  "  b _Z11sub_19543D0iPcS_\n"
  ".thumb\n"
);
// sub_1954410(...) -> sub_1954410(int, char*, char*, unsigned int)
__asm__(
  ".section .text.g4_bridge_716,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1954410z\n"
  ".type _Z11sub_1954410z, %function\n"
  "_Z11sub_1954410z:\n"
  "  b _Z11sub_1954410iPcS_j\n"
  ".thumb\n"
);
// sub_190B3B0(...) -> sub_190B3B0(char*)
__asm__(
  ".section .text.g4_bridge_717,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190B3B0z\n"
  ".type _Z11sub_190B3B0z, %function\n"
  "_Z11sub_190B3B0z:\n"
  "  b _Z11sub_190B3B0Pc\n"
  ".thumb\n"
);
// sub_63B030(...) -> sub_63B030(__m128d, int)
__asm__(
  ".section .text.g4_bridge_718,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_63B030z\n"
  ".type _Z10sub_63B030z, %function\n"
  "_Z10sub_63B030z:\n"
  "  b _Z10sub_63B0307__m128di\n"
  ".thumb\n"
);
// sub_C20A00(...) -> sub_C20A00(int)
__asm__(
  ".section .text.g4_bridge_719,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_C20A00z\n"
  ".type _Z10sub_C20A00z, %function\n"
  "_Z10sub_C20A00z:\n"
  "  b _Z10sub_C20A00i\n"
  ".thumb\n"
);
// sub_1954650(...) -> sub_1954650(int)
__asm__(
  ".section .text.g4_bridge_720,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1954650z\n"
  ".type _Z11sub_1954650z, %function\n"
  "_Z11sub_1954650z:\n"
  "  b _Z11sub_1954650i\n"
  ".thumb\n"
);
// sub_87FE30(...) -> sub_87FE30(glitch::scene::ISceneNode::Self*)
__asm__(
  ".section .text.g4_bridge_721,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_87FE30z\n"
  ".type _Z10sub_87FE30z, %function\n"
  "_Z10sub_87FE30z:\n"
  "  b _Z10sub_87FE30PN6glitch5scene10ISceneNode4SelfE\n"
  ".thumb\n"
);
// sub_190B540(...) -> sub_190B540(char*)
__asm__(
  ".section .text.g4_bridge_722,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190B540z\n"
  ".type _Z11sub_190B540z, %function\n"
  "_Z11sub_190B540z:\n"
  "  b _Z11sub_190B540Pc\n"
  ".thumb\n"
);
// sub_1954490(...) -> sub_1954490(int, wchar_t*, wchar_t*, unsigned int)
__asm__(
  ".section .text.g4_bridge_723,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1954490z\n"
  ".type _Z11sub_1954490z, %function\n"
  "_Z11sub_1954490z:\n"
  "  b _Z11sub_1954490iPwS_j\n"
  ".thumb\n"
);
// sub_1954450(...) -> sub_1954450(int, wchar_t*, wchar_t*)
__asm__(
  ".section .text.g4_bridge_724,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1954450z\n"
  ".type _Z11sub_1954450z, %function\n"
  "_Z11sub_1954450z:\n"
  "  b _Z11sub_1954450iPwS_\n"
  ".thumb\n"
);
// sub_1954550(...) -> sub_1954550(int, char*, unsigned int, char*, tm*)
__asm__(
  ".section .text.g4_bridge_725,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1954550z\n"
  ".type _Z11sub_1954550z, %function\n"
  "_Z11sub_1954550z:\n"
  "  b _Z11sub_1954550iPcjS_P2tm\n"
  ".thumb\n"
);
// sub_190E660(...) -> sub_190E660(int)
__asm__(
  ".section .text.g4_bridge_726,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190E660z\n"
  ".type _Z11sub_190E660z, %function\n"
  "_Z11sub_190E660z:\n"
  "  b _Z11sub_190E660i\n"
  ".thumb\n"
);
// sub_A3A260(...) -> sub_A3A260(int)
__asm__(
  ".section .text.g4_bridge_727,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_A3A260z\n"
  ".type _Z10sub_A3A260z, %function\n"
  "_Z10sub_A3A260z:\n"
  "  b _Z10sub_A3A260i\n"
  ".thumb\n"
);
// sub_190E770(...) -> sub_190E770(int)
__asm__(
  ".section .text.g4_bridge_728,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190E770z\n"
  ".type _Z11sub_190E770z, %function\n"
  "_Z11sub_190E770z:\n"
  "  b _Z11sub_190E770i\n"
  ".thumb\n"
);
// sub_190E870(...) -> sub_190E870(char*)
__asm__(
  ".section .text.g4_bridge_729,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190E870z\n"
  ".type _Z11sub_190E870z, %function\n"
  "_Z11sub_190E870z:\n"
  "  b _Z11sub_190E870Pc\n"
  ".thumb\n"
);
// sub_190E970(...) -> sub_190E970(int)
__asm__(
  ".section .text.g4_bridge_730,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190E970z\n"
  ".type _Z11sub_190E970z, %function\n"
  "_Z11sub_190E970z:\n"
  "  b _Z11sub_190E970i\n"
  ".thumb\n"
);
// sub_190EA60(...) -> sub_190EA60(char*)
__asm__(
  ".section .text.g4_bridge_731,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190EA60z\n"
  ".type _Z11sub_190EA60z, %function\n"
  "_Z11sub_190EA60z:\n"
  "  b _Z11sub_190EA60Pc\n"
  ".thumb\n"
);
// explicit map -> _Z10sub_75A210i
__asm__(
  ".section .text.g4_bridge_732,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_75A540z\n"
  ".type _Z10sub_75A540z, %function\n"
  "_Z10sub_75A540z:\n"
  "  b _Z10sub_75A210i\n"
  ".thumb\n"
);
// sub_7307B0(...) -> sub_7307B0(long double, int)
__asm__(
  ".section .text.g4_bridge_733,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7307B0z\n"
  ".type _Z10sub_7307B0z, %function\n"
  "_Z10sub_7307B0z:\n"
  "  b _Z10sub_7307B0ei\n"
  ".thumb\n"
);
// sub_731130(...) -> sub_731130(long double, int)
__asm__(
  ".section .text.g4_bridge_734,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_731130z\n"
  ".type _Z10sub_731130z, %function\n"
  "_Z10sub_731130z:\n"
  "  b _Z10sub_731130ei\n"
  ".thumb\n"
);
// sub_743580(...) -> sub_743580(int)
__asm__(
  ".section .text.g4_bridge_735,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_743580z\n"
  ".type _Z10sub_743580z, %function\n"
  "_Z10sub_743580z:\n"
  "  b _Z10sub_743580i\n"
  ".thumb\n"
);
// sub_745200(...) -> sub_745200(long double, int)
__asm__(
  ".section .text.g4_bridge_736,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_745200z\n"
  ".type _Z10sub_745200z, %function\n"
  "_Z10sub_745200z:\n"
  "  b _Z10sub_745200ei\n"
  ".thumb\n"
);
// sub_743610(...) -> sub_743610(int)
__asm__(
  ".section .text.g4_bridge_737,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_743610z\n"
  ".type _Z10sub_743610z, %function\n"
  "_Z10sub_743610z:\n"
  "  b _Z10sub_743610i\n"
  ".thumb\n"
);
// sub_7401A0(...) -> sub_7401A0(int)
__asm__(
  ".section .text.g4_bridge_738,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7401A0z\n"
  ".type _Z10sub_7401A0z, %function\n"
  "_Z10sub_7401A0z:\n"
  "  b _Z10sub_7401A0i\n"
  ".thumb\n"
);
// sub_744010(...) -> sub_744010(int)
__asm__(
  ".section .text.g4_bridge_739,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_744010z\n"
  ".type _Z10sub_744010z, %function\n"
  "_Z10sub_744010z:\n"
  "  b _Z10sub_744010i\n"
  ".thumb\n"
);
// sub_758640(...) -> sub_758640(int)
__asm__(
  ".section .text.g4_bridge_740,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_758640z\n"
  ".type _Z10sub_758640z, %function\n"
  "_Z10sub_758640z:\n"
  "  b _Z10sub_758640i\n"
  ".thumb\n"
);
// sub_190EC00(...) -> sub_190EC00(char*)
__asm__(
  ".section .text.g4_bridge_741,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_190EC00z\n"
  ".type _Z11sub_190EC00z, %function\n"
  "_Z11sub_190EC00z:\n"
  "  b _Z11sub_190EC00Pc\n"
  ".thumb\n"
);
// sub_5CF850(...) -> sub_5CF850(unsigned int**, int)
__asm__(
  ".section .text.g4_bridge_742,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_5CF850z\n"
  ".type _Z10sub_5CF850z, %function\n"
  "_Z10sub_5CF850z:\n"
  "  b _Z10sub_5CF850PPji\n"
  ".thumb\n"
);
// sub_880AB0(...) -> sub_880AB0(int, char*, int)
__asm__(
  ".section .text.g4_bridge_743,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_880AB0z\n"
  ".type _Z10sub_880AB0z, %function\n"
  "_Z10sub_880AB0z:\n"
  "  b _Z10sub_880AB0iPci\n"
  ".thumb\n"
);
// sub_72D1A0(...) -> sub_72D1A0()
__asm__(
  ".section .text.g4_bridge_744,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_72D1A0z\n"
  ".type _Z10sub_72D1A0z, %function\n"
  "_Z10sub_72D1A0z:\n"
  "  b _Z10sub_72D1A0v\n"
  ".thumb\n"
);
// sub_740580(...) -> sub_740580(int)
__asm__(
  ".section .text.g4_bridge_745,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_740580z\n"
  ".type _Z10sub_740580z, %function\n"
  "_Z10sub_740580z:\n"
  "  b _Z10sub_740580i\n"
  ".thumb\n"
);
// sub_5E8970(...) -> sub_5E8970(int)
__asm__(
  ".section .text.g4_bridge_746,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_5E8970z\n"
  ".type _Z10sub_5E8970z, %function\n"
  "_Z10sub_5E8970z:\n"
  "  b _Z10sub_5E8970i\n"
  ".thumb\n"
);
// sub_92B8A0(...) -> sub_92B8A0(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_747,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_92B8A0z\n"
  ".type _Z10sub_92B8A0z, %function\n"
  "_Z10sub_92B8A0z:\n"
  "  b _Z10sub_92B8A0Pji\n"
  ".thumb\n"
);
// sub_92B830(...) -> sub_92B830(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_748,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_92B830z\n"
  ".type _Z10sub_92B830z, %function\n"
  "_Z10sub_92B830z:\n"
  "  b _Z10sub_92B830Pji\n"
  ".thumb\n"
);
// sub_92B700(...) -> sub_92B700(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_749,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_92B700z\n"
  ".type _Z10sub_92B700z, %function\n"
  "_Z10sub_92B700z:\n"
  "  b _Z10sub_92B700Pji\n"
  ".thumb\n"
);
// sub_9D5250(...) -> sub_9D5250(int)
__asm__(
  ".section .text.g4_bridge_750,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_9D5250z\n"
  ".type _Z10sub_9D5250z, %function\n"
  "_Z10sub_9D5250z:\n"
  "  b _Z10sub_9D5250i\n"
  ".thumb\n"
);
// explicit map -> _Z10sub_AD64D0i
__asm__(
  ".section .text.g4_bridge_751,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_AD6BD0z\n"
  ".type _Z10sub_AD6BD0z, %function\n"
  "_Z10sub_AD6BD0z:\n"
  "  b _Z10sub_AD64D0i\n"
  ".thumb\n"
);
// sub_654BE0(...) -> sub_654BE0(int, char)
__asm__(
  ".section .text.g4_bridge_752,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_654BE0z\n"
  ".type _Z10sub_654BE0z, %function\n"
  "_Z10sub_654BE0z:\n"
  "  b _Z10sub_654BE0ic\n"
  ".thumb\n"
);
// sub_654C40(...) -> sub_654C40(int)
__asm__(
  ".section .text.g4_bridge_753,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_654C40z\n"
  ".type _Z10sub_654C40z, %function\n"
  "_Z10sub_654C40z:\n"
  "  b _Z10sub_654C40i\n"
  ".thumb\n"
);
// sub_6567A0(...) -> sub_6567A0(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_754,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6567A0z\n"
  ".type _Z10sub_6567A0z, %function\n"
  "_Z10sub_6567A0z:\n"
  "  b _Z10sub_6567A0Pji\n"
  ".thumb\n"
);
// sub_939820(...) -> sub_939820(unsigned long long*, char)
__asm__(
  ".section .text.g4_bridge_755,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_939820z\n"
  ".type _Z10sub_939820z, %function\n"
  "_Z10sub_939820z:\n"
  "  b _Z10sub_939820Pyc\n"
  ".thumb\n"
);
// sub_656A10(...) -> sub_656A10(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_756,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_656A10z\n"
  ".type _Z10sub_656A10z, %function\n"
  "_Z10sub_656A10z:\n"
  "  b _Z10sub_656A10Pji\n"
  ".thumb\n"
);
// sub_656B20(...) -> sub_656B20(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_757,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_656B20z\n"
  ".type _Z10sub_656B20z, %function\n"
  "_Z10sub_656B20z:\n"
  "  b _Z10sub_656B20Pji\n"
  ".thumb\n"
);
// sub_655EA0(...) -> sub_655EA0()
__asm__(
  ".section .text.g4_bridge_758,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_655EA0z\n"
  ".type _Z10sub_655EA0z, %function\n"
  "_Z10sub_655EA0z:\n"
  "  b _Z10sub_655EA0v\n"
  ".thumb\n"
);
// sub_656550(...) -> sub_656550(unsigned int*)
__asm__(
  ".section .text.g4_bridge_759,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_656550z\n"
  ".type _Z10sub_656550z, %function\n"
  "_Z10sub_656550z:\n"
  "  b _Z10sub_656550Pj\n"
  ".thumb\n"
);
// sub_7B99F0(...) -> sub_7B99F0(int, int)
__asm__(
  ".section .text.g4_bridge_760,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7B99F0z\n"
  ".type _Z10sub_7B99F0z, %function\n"
  "_Z10sub_7B99F0z:\n"
  "  b _Z10sub_7B99F0ii\n"
  ".thumb\n"
);
// sub_7A5670(...) -> sub_7A5670(long double, int)
__asm__(
  ".section .text.g4_bridge_761,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7A5670z\n"
  ".type _Z10sub_7A5670z, %function\n"
  "_Z10sub_7A5670z:\n"
  "  b _Z10sub_7A5670ei\n"
  ".thumb\n"
);
// sub_552870(...) -> sub_552870(int)
__asm__(
  ".section .text.g4_bridge_762,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_552870z\n"
  ".type _Z10sub_552870z, %function\n"
  "_Z10sub_552870z:\n"
  "  b _Z10sub_552870i\n"
  ".thumb\n"
);
// sub_19062E0(...) -> sub_19062E0(unsigned int*, int*, wchar_t)
__asm__(
  ".section .text.g4_bridge_763,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_19062E0z\n"
  ".type _Z11sub_19062E0z, %function\n"
  "_Z11sub_19062E0z:\n"
  "  b _Z11sub_19062E0PjPiw\n"
  ".thumb\n"
);
// sub_85FA70(...) -> sub_85FA70(unsigned int*)
__asm__(
  ".section .text.g4_bridge_764,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_85FA70z\n"
  ".type _Z10sub_85FA70z, %function\n"
  "_Z10sub_85FA70z:\n"
  "  b _Z10sub_85FA70Pj\n"
  ".thumb\n"
);
// sub_9E54B0(...) -> sub_9E54B0(__m128d, int)
__asm__(
  ".section .text.g4_bridge_765,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_9E54B0z\n"
  ".type _Z10sub_9E54B0z, %function\n"
  "_Z10sub_9E54B0z:\n"
  "  b _Z10sub_9E54B07__m128di\n"
  ".thumb\n"
);
// sub_80BDB0(...) -> sub_80BDB0(int, int*)
__asm__(
  ".section .text.g4_bridge_766,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_80BDB0z\n"
  ".type _Z10sub_80BDB0z, %function\n"
  "_Z10sub_80BDB0z:\n"
  "  b _Z10sub_80BDB0iPi\n"
  ".thumb\n"
);
// sub_A188C0(...) -> sub_A188C0(int)
__asm__(
  ".section .text.g4_bridge_767,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_A188C0z\n"
  ".type _Z10sub_A188C0z, %function\n"
  "_Z10sub_A188C0z:\n"
  "  b _Z10sub_A188C0i\n"
  ".thumb\n"
);
// sub_655DD0(...) -> sub_655DD0()
__asm__(
  ".section .text.g4_bridge_768,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_655DD0z\n"
  ".type _Z10sub_655DD0z, %function\n"
  "_Z10sub_655DD0z:\n"
  "  b _Z10sub_655DD0v\n"
  ".thumb\n"
);
// sub_6553E0(...) -> sub_6553E0()
__asm__(
  ".section .text.g4_bridge_769,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6553E0z\n"
  ".type _Z10sub_6553E0z, %function\n"
  "_Z10sub_6553E0z:\n"
  "  b _Z10sub_6553E0v\n"
  ".thumb\n"
);
// sub_655AB0(...) -> sub_655AB0(unsigned int**, unsigned int**)
__asm__(
  ".section .text.g4_bridge_770,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_655AB0z\n"
  ".type _Z10sub_655AB0z, %function\n"
  "_Z10sub_655AB0z:\n"
  "  b _Z10sub_655AB0PPjS0_\n"
  ".thumb\n"
);
// sub_655B00(...) -> sub_655B00()
__asm__(
  ".section .text.g4_bridge_771,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_655B00z\n"
  ".type _Z10sub_655B00z, %function\n"
  "_Z10sub_655B00z:\n"
  "  b _Z10sub_655B00v\n"
  ".thumb\n"
);
// sub_656390(...) -> sub_656390()
__asm__(
  ".section .text.g4_bridge_772,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_656390z\n"
  ".type _Z10sub_656390z, %function\n"
  "_Z10sub_656390z:\n"
  "  b _Z10sub_656390v\n"
  ".thumb\n"
);
// sub_8A2990(...) -> sub_8A2990(unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_773,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8A2990z\n"
  ".type _Z10sub_8A2990z, %function\n"
  "_Z10sub_8A2990z:\n"
  "  b _Z10sub_8A2990PjS_\n"
  ".thumb\n"
);
// sub_655D40(...) -> sub_655D40()
__asm__(
  ".section .text.g4_bridge_774,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_655D40z\n"
  ".type _Z10sub_655D40z, %function\n"
  "_Z10sub_655D40z:\n"
  "  b _Z10sub_655D40v\n"
  ".thumb\n"
);
// sub_940D80(...) -> sub_940D80(int)
__asm__(
  ".section .text.g4_bridge_775,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_940D80z\n"
  ".type _Z10sub_940D80z, %function\n"
  "_Z10sub_940D80z:\n"
  "  b _Z10sub_940D80i\n"
  ".thumb\n"
);
// sub_655A90(...) -> sub_655A90(unsigned int*, unsigned int**)
__asm__(
  ".section .text.g4_bridge_776,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_655A90z\n"
  ".type _Z10sub_655A90z, %function\n"
  "_Z10sub_655A90z:\n"
  "  b _Z10sub_655A90PjPS_\n"
  ".thumb\n"
);
// sub_8AEDA0(...) -> sub_8AEDA0(glitch::scene::ISceneNode::Self*)
__asm__(
  ".section .text.g4_bridge_777,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8AEDA0z\n"
  ".type _Z10sub_8AEDA0z, %function\n"
  "_Z10sub_8AEDA0z:\n"
  "  b _Z10sub_8AEDA0PN6glitch5scene10ISceneNode4SelfE\n"
  ".thumb\n"
);
// sub_8AEED0(...) -> sub_8AEED0(glitch::collada::CMeshSceneNode::Self*)
__asm__(
  ".section .text.g4_bridge_778,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8AEED0z\n"
  ".type _Z10sub_8AEED0z, %function\n"
  "_Z10sub_8AEED0z:\n"
  "  b _Z10sub_8AEED0PN6glitch7collada14CMeshSceneNode4SelfE\n"
  ".thumb\n"
);
// sub_8AEF70(...) -> sub_8AEF70(glitch::collada::CMeshSceneNode::Self*)
__asm__(
  ".section .text.g4_bridge_779,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8AEF70z\n"
  ".type _Z10sub_8AEF70z, %function\n"
  "_Z10sub_8AEF70z:\n"
  "  b _Z10sub_8AEF70PN6glitch7collada14CMeshSceneNode4SelfE\n"
  ".thumb\n"
);
// sub_8AFFC0(...) -> sub_8AFFC0(glitch::scene::ISceneNode::Self*)
__asm__(
  ".section .text.g4_bridge_780,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8AFFC0z\n"
  ".type _Z10sub_8AFFC0z, %function\n"
  "_Z10sub_8AFFC0z:\n"
  "  b _Z10sub_8AFFC0PN6glitch5scene10ISceneNode4SelfE\n"
  ".thumb\n"
);
// sub_8B22D0(...) -> sub_8B22D0(glitch::collada::ISceneNodeAnimator::Self*)
__asm__(
  ".section .text.g4_bridge_781,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8B22D0z\n"
  ".type _Z10sub_8B22D0z, %function\n"
  "_Z10sub_8B22D0z:\n"
  "  b _Z10sub_8B22D0PN6glitch7collada18ISceneNodeAnimator4SelfE\n"
  ".thumb\n"
);
// sub_8B2440(...) -> sub_8B2440(glitch::scene::CSceneManager::Self*)
__asm__(
  ".section .text.g4_bridge_782,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8B2440z\n"
  ".type _Z10sub_8B2440z, %function\n"
  "_Z10sub_8B2440z:\n"
  "  b _Z10sub_8B2440PN6glitch5scene13CSceneManager4SelfE\n"
  ".thumb\n"
);
// sub_8B29A0(...) -> sub_8B29A0(glitch::scene::ISceneNode::Self*)
__asm__(
  ".section .text.g4_bridge_783,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8B29A0z\n"
  ".type _Z10sub_8B29A0z, %function\n"
  "_Z10sub_8B29A0z:\n"
  "  b _Z10sub_8B29A0PN6glitch5scene10ISceneNode4SelfE\n"
  ".thumb\n"
);
// sub_8B2AC0(...) -> sub_8B2AC0(glitch::scene::ISceneNode::Self*)
__asm__(
  ".section .text.g4_bridge_784,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8B2AC0z\n"
  ".type _Z10sub_8B2AC0z, %function\n"
  "_Z10sub_8B2AC0z:\n"
  "  b _Z10sub_8B2AC0PN6glitch5scene10ISceneNode4SelfE\n"
  ".thumb\n"
);
// sub_8B2D00(...) -> sub_8B2D00(glitch::scene::ISceneNode::Self*)
__asm__(
  ".section .text.g4_bridge_785,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8B2D00z\n"
  ".type _Z10sub_8B2D00z, %function\n"
  "_Z10sub_8B2D00z:\n"
  "  b _Z10sub_8B2D00PN6glitch5scene10ISceneNode4SelfE\n"
  ".thumb\n"
);
// sub_8B34A0(...) -> sub_8B34A0(glitch::collada::ISceneNodeAnimator::Self*)
__asm__(
  ".section .text.g4_bridge_786,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8B34A0z\n"
  ".type _Z10sub_8B34A0z, %function\n"
  "_Z10sub_8B34A0z:\n"
  "  b _Z10sub_8B34A0PN6glitch7collada18ISceneNodeAnimator4SelfE\n"
  ".thumb\n"
);
// sub_8B6D20(...) -> sub_8B6D20(int)
__asm__(
  ".section .text.g4_bridge_787,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8B6D20z\n"
  ".type _Z10sub_8B6D20z, %function\n"
  "_Z10sub_8B6D20z:\n"
  "  b _Z10sub_8B6D20i\n"
  ".thumb\n"
);
// sub_8132C0(...) -> sub_8132C0(int)
__asm__(
  ".section .text.g4_bridge_788,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8132C0z\n"
  ".type _Z10sub_8132C0z, %function\n"
  "_Z10sub_8132C0z:\n"
  "  b _Z10sub_8132C0i\n"
  ".thumb\n"
);
// sub_A98EB0(...) -> sub_A98EB0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_789,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_A98EB0z\n"
  ".type _Z10sub_A98EB0z, %function\n"
  "_Z10sub_A98EB0z:\n"
  "  b _Z10sub_A98EB0Pj\n"
  ".thumb\n"
);
// sub_872F40(...) -> sub_872F40(glitch::IObject::Self*, int, int, int, int, int, int)
__asm__(
  ".section .text.g4_bridge_790,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_872F40z\n"
  ".type _Z10sub_872F40z, %function\n"
  "_Z10sub_872F40z:\n"
  "  b _Z10sub_872F40PN6glitch7IObject4SelfEiiiiii\n"
  ".thumb\n"
);
// sub_5E8410(...) -> sub_5E8410(glitch::scene::ISceneNode::Self*)
__asm__(
  ".section .text.g4_bridge_791,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_5E8410z\n"
  ".type _Z10sub_5E8410z, %function\n"
  "_Z10sub_5E8410z:\n"
  "  b _Z10sub_5E8410PN6glitch5scene10ISceneNode4SelfE\n"
  ".thumb\n"
);
// sub_8C26E0(...) -> sub_8C26E0(int)
__asm__(
  ".section .text.g4_bridge_792,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8C26E0z\n"
  ".type _Z10sub_8C26E0z, %function\n"
  "_Z10sub_8C26E0z:\n"
  "  b _Z10sub_8C26E0i\n"
  ".thumb\n"
);
// sub_5EB9E0(...) -> sub_5EB9E0(int)
__asm__(
  ".section .text.g4_bridge_793,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_5EB9E0z\n"
  ".type _Z10sub_5EB9E0z, %function\n"
  "_Z10sub_5EB9E0z:\n"
  "  b _Z10sub_5EB9E0i\n"
  ".thumb\n"
);
// sub_5EBBC0(...) -> sub_5EBBC0(glitch::scene::ISceneNode::Self*)
__asm__(
  ".section .text.g4_bridge_794,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_5EBBC0z\n"
  ".type _Z10sub_5EBBC0z, %function\n"
  "_Z10sub_5EBBC0z:\n"
  "  b _Z10sub_5EBBC0PN6glitch5scene10ISceneNode4SelfE\n"
  ".thumb\n"
);
// sub_734280(...) -> sub_734280(unsigned int*, char*)
__asm__(
  ".section .text.g4_bridge_795,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_734280z\n"
  ".type _Z10sub_734280z, %function\n"
  "_Z10sub_734280z:\n"
  "  b _Z10sub_734280PjPc\n"
  ".thumb\n"
);
// sub_734190(...) -> sub_734190(unsigned int*, char*)
__asm__(
  ".section .text.g4_bridge_796,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_734190z\n"
  ".type _Z10sub_734190z, %function\n"
  "_Z10sub_734190z:\n"
  "  b _Z10sub_734190PjPc\n"
  ".thumb\n"
);
// sub_7340C0(...) -> sub_7340C0(unsigned int*, char*)
__asm__(
  ".section .text.g4_bridge_797,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7340C0z\n"
  ".type _Z10sub_7340C0z, %function\n"
  "_Z10sub_7340C0z:\n"
  "  b _Z10sub_7340C0PjPc\n"
  ".thumb\n"
);
// sub_8961F0(...) -> sub_8961F0(int, int)
__asm__(
  ".section .text.g4_bridge_798,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8961F0z\n"
  ".type _Z10sub_8961F0z, %function\n"
  "_Z10sub_8961F0z:\n"
  "  b _Z10sub_8961F0ii\n"
  ".thumb\n"
);
// sub_737BF0(...) -> sub_737BF0(int, int)
__asm__(
  ".section .text.g4_bridge_799,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_737BF0z\n"
  ".type _Z10sub_737BF0z, %function\n"
  "_Z10sub_737BF0z:\n"
  "  b _Z10sub_737BF0ii\n"
  ".thumb\n"
);
// sub_738310(...) -> sub_738310(int, int)
__asm__(
  ".section .text.g4_bridge_800,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_738310z\n"
  ".type _Z10sub_738310z, %function\n"
  "_Z10sub_738310z:\n"
  "  b _Z10sub_738310ii\n"
  ".thumb\n"
);
// sub_96C240(...) -> sub_96C240(glitch::scene::ISceneNode::Self*)
__asm__(
  ".section .text.g4_bridge_801,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_96C240z\n"
  ".type _Z10sub_96C240z, %function\n"
  "_Z10sub_96C240z:\n"
  "  b _Z10sub_96C240PN6glitch5scene10ISceneNode4SelfE\n"
  ".thumb\n"
);
// sub_5FB1D0(...) -> sub_5FB1D0(int)
__asm__(
  ".section .text.g4_bridge_802,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_5FB1D0z\n"
  ".type _Z10sub_5FB1D0z, %function\n"
  "_Z10sub_5FB1D0z:\n"
  "  b _Z10sub_5FB1D0i\n"
  ".thumb\n"
);
// sub_6026C0(...) -> sub_6026C0(int)
__asm__(
  ".section .text.g4_bridge_803,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_6026C0z\n"
  ".type _Z10sub_6026C0z, %function\n"
  "_Z10sub_6026C0z:\n"
  "  b _Z10sub_6026C0i\n"
  ".thumb\n"
);
// sub_610240(...) -> sub_610240(int)
__asm__(
  ".section .text.g4_bridge_804,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_610240z\n"
  ".type _Z10sub_610240z, %function\n"
  "_Z10sub_610240z:\n"
  "  b _Z10sub_610240i\n"
  ".thumb\n"
);
// sub_7B76E0(...) -> sub_7B76E0(int)
__asm__(
  ".section .text.g4_bridge_805,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_7B76E0z\n"
  ".type _Z10sub_7B76E0z, %function\n"
  "_Z10sub_7B76E0z:\n"
  "  b _Z10sub_7B76E0i\n"
  ".thumb\n"
);
// sub_766D90(...) -> sub_766D90(int)
__asm__(
  ".section .text.g4_bridge_806,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_766D90z\n"
  ".type _Z10sub_766D90z, %function\n"
  "_Z10sub_766D90z:\n"
  "  b _Z10sub_766D90i\n"
  ".thumb\n"
);
// sub_8964D0(...) -> sub_8964D0(int, int)
__asm__(
  ".section .text.g4_bridge_807,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_8964D0z\n"
  ".type _Z10sub_8964D0z, %function\n"
  "_Z10sub_8964D0z:\n"
  "  b _Z10sub_8964D0ii\n"
  ".thumb\n"
);
// sub_902580(...) -> sub_902580(int*, int, int, int, int, int, int, int, int, unsigned int*, int, int, int, int,
__asm__(
  ".section .text.g4_bridge_808,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_902580z\n"
  ".type _Z10sub_902580z, %function\n"
  "_Z10sub_902580z:\n"
  "  b _Z10sub_902580PiiiiiiiiiPjiiiifff\n"
  ".thumb\n"
);
// sub_542FF0(...) -> sub_542FF0(int)
__asm__(
  ".section .text.g4_bridge_809,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_542FF0z\n"
  ".type _Z10sub_542FF0z, %function\n"
  "_Z10sub_542FF0z:\n"
  "  b _Z10sub_542FF0i\n"
  ".thumb\n"
);
// sub_9B2010(...) -> sub_9B2010(int, unsigned int*, char, int)
__asm__(
  ".section .text.g4_bridge_810,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_9B2010z\n"
  ".type _Z10sub_9B2010z, %function\n"
  "_Z10sub_9B2010z:\n"
  "  b _Z10sub_9B2010iPjci\n"
  ".thumb\n"
);
// sub_9B8A30(...) -> sub_9B8A30(int*, int*, char, int)
__asm__(
  ".section .text.g4_bridge_811,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_9B8A30z\n"
  ".type _Z10sub_9B8A30z, %function\n"
  "_Z10sub_9B8A30z:\n"
  "  b _Z10sub_9B8A30PiS_ci\n"
  ".thumb\n"
);
// sub_655470(...) -> sub_655470(int)
__asm__(
  ".section .text.g4_bridge_812,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_655470z\n"
  ".type _Z10sub_655470z, %function\n"
  "_Z10sub_655470z:\n"
  "  b _Z10sub_655470i\n"
  ".thumb\n"
);
// sub_9D5C90(...) -> sub_9D5C90(int*, unsigned char, char)
__asm__(
  ".section .text.g4_bridge_813,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_9D5C90z\n"
  ".type _Z10sub_9D5C90z, %function\n"
  "_Z10sub_9D5C90z:\n"
  "  b _Z10sub_9D5C90Pihc\n"
  ".thumb\n"
);
// sub_AFDA40(...) -> sub_AFDA40(unsigned int*, int, char*)
__asm__(
  ".section .text.g4_bridge_814,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_AFDA40z\n"
  ".type _Z10sub_AFDA40z, %function\n"
  "_Z10sub_AFDA40z:\n"
  "  b _Z10sub_AFDA40PjiPc\n"
  ".thumb\n"
);
// sub_1903D70(...) -> sub_1903D70(int)
__asm__(
  ".section .text.g4_bridge_815,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1903D70z\n"
  ".type _Z11sub_1903D70z, %function\n"
  "_Z11sub_1903D70z:\n"
  "  b _Z11sub_1903D70i\n"
  ".thumb\n"
);
// sub_AA5F80(...) -> sub_AA5F80(glf::debugger::Tweakable::Self*)
__asm__(
  ".section .text.g4_bridge_816,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_AA5F80z\n"
  ".type _Z10sub_AA5F80z, %function\n"
  "_Z10sub_AA5F80z:\n"
  "  b _Z10sub_AA5F80PN3glf8debugger9Tweakable4SelfE\n"
  ".thumb\n"
);
// sub_1902250(...) -> sub_1902250(unsigned int*, unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_817,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1902250z\n"
  ".type _Z11sub_1902250z, %function\n"
  "_Z11sub_1902250z:\n"
  "  b _Z11sub_1902250PjS_i\n"
  ".thumb\n"
);
// sub_A00190(...) -> sub_A00190(int, int)
__asm__(
  ".section .text.g4_bridge_818,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_A00190z\n"
  ".type _Z10sub_A00190z, %function\n"
  "_Z10sub_A00190z:\n"
  "  b _Z10sub_A00190ii\n"
  ".thumb\n"
);
// sub_923C10(...) -> sub_923C10(unsigned int*)
__asm__(
  ".section .text.g4_bridge_819,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_923C10z\n"
  ".type _Z10sub_923C10z, %function\n"
  "_Z10sub_923C10z:\n"
  "  b _Z10sub_923C10Pj\n"
  ".thumb\n"
);
// sub_AF56E0(...) -> sub_AF56E0(unsigned int*)
__asm__(
  ".section .text.g4_bridge_820,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_AF56E0z\n"
  ".type _Z10sub_AF56E0z, %function\n"
  "_Z10sub_AF56E0z:\n"
  "  b _Z10sub_AF56E0Pj\n"
  ".thumb\n"
);
// sub_9335E0(...) -> sub_9335E0(unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_821,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_9335E0z\n"
  ".type _Z10sub_9335E0z, %function\n"
  "_Z10sub_9335E0z:\n"
  "  b _Z10sub_9335E0Pji\n"
  ".thumb\n"
);
// sub_9368F0(...) -> sub_9368F0(int*)
__asm__(
  ".section .text.g4_bridge_822,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_9368F0z\n"
  ".type _Z10sub_9368F0z, %function\n"
  "_Z10sub_9368F0z:\n"
  "  b _Z10sub_9368F0Pi\n"
  ".thumb\n"
);
// sub_936790(...) -> sub_936790(int*)
__asm__(
  ".section .text.g4_bridge_823,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_936790z\n"
  ".type _Z10sub_936790z, %function\n"
  "_Z10sub_936790z:\n"
  "  b _Z10sub_936790Pi\n"
  ".thumb\n"
);
// sub_936630(...) -> sub_936630(int*)
__asm__(
  ".section .text.g4_bridge_824,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_936630z\n"
  ".type _Z10sub_936630z, %function\n"
  "_Z10sub_936630z:\n"
  "  b _Z10sub_936630Pi\n"
  ".thumb\n"
);
// sub_EA1840(...) -> sub_EA1840(int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_825,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA1840z\n"
  ".type _Z10sub_EA1840z, %function\n"
  "_Z10sub_EA1840z:\n"
  "  b _Z10sub_EA1840iPj\n"
  ".thumb\n"
);
// sub_EA22E0(...) -> sub_EA22E0(int, unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_826,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA22E0z\n"
  ".type _Z10sub_EA22E0z, %function\n"
  "_Z10sub_EA22E0z:\n"
  "  b _Z10sub_EA22E0iPjS_\n"
  ".thumb\n"
);
// sub_EA2670(...) -> sub_EA2670(int, unsigned int*, int)
__asm__(
  ".section .text.g4_bridge_827,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA2670z\n"
  ".type _Z10sub_EA2670z, %function\n"
  "_Z10sub_EA2670z:\n"
  "  b _Z10sub_EA2670iPji\n"
  ".thumb\n"
);
// sub_EA2BB0(...) -> sub_EA2BB0(unsigned int*, int, int, int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_828,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA2BB0z\n"
  ".type _Z10sub_EA2BB0z, %function\n"
  "_Z10sub_EA2BB0z:\n"
  "  b _Z10sub_EA2BB0PjiiiS_\n"
  ".thumb\n"
);
// sub_EA0E70(...) -> sub_EA0E70(unsigned int*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_829,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA0E70z\n"
  ".type _Z10sub_EA0E70z, %function\n"
  "_Z10sub_EA0E70z:\n"
  "  b _Z10sub_EA0E70PjS_\n"
  ".thumb\n"
);
// sub_EA2DF0(...) -> sub_EA2DF0(unsigned int*, int, int, int, unsigned int*)
__asm__(
  ".section .text.g4_bridge_830,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA2DF0z\n"
  ".type _Z10sub_EA2DF0z, %function\n"
  "_Z10sub_EA2DF0z:\n"
  "  b _Z10sub_EA2DF0PjiiiS_\n"
  ".thumb\n"
);
// sub_EA3BD0(...) -> sub_EA3BD0(char*, char*, int)
__asm__(
  ".section .text.g4_bridge_831,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EA3BD0z\n"
  ".type _Z10sub_EA3BD0z, %function\n"
  "_Z10sub_EA3BD0z:\n"
  "  b _Z10sub_EA3BD0PcS_i\n"
  ".thumb\n"
);
// sub_EBAA10(...) -> sub_EBAA10(int, void*)
__asm__(
  ".section .text.g4_bridge_832,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_EBAA10z\n"
  ".type _Z10sub_EBAA10z, %function\n"
  "_Z10sub_EBAA10z:\n"
  "  b _Z10sub_EBAA10iPv\n"
  ".thumb\n"
);
// sub_ECD000(...) -> sub_ECD000(glitch::scene::SParameterAtlasInfo const*, glitch::scene::SParameterAtlasInfo*, 
__asm__(
  ".section .text.g4_bridge_833,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z10sub_ECD000z\n"
  ".type _Z10sub_ECD000z, %function\n"
  "_Z10sub_ECD000z:\n"
  "  b _Z10sub_ECD000PKN6glitch5scene19SParameterAtlasInfoEPS1_i\n"
  ".thumb\n"
);
// sub_1B06440(...) -> sub_1B06440(unsigned int*, unsigned int*, hkpMoppCodeGenerator::Self*, unsigned int*)
__asm__(
  ".section .text.g4_bridge_834,\"ax\",%progbits\n"
  ".syntax unified\n"
  ".arm\n"
  ".balign 4\n"
  ".globl _Z11sub_1B06440z\n"
  ".type _Z11sub_1B06440z, %function\n"
  "_Z11sub_1B06440z:\n"
  "  b _Z11sub_1B06440PjS_PN20hkpMoppCodeGenerator4SelfES_\n"
  ".thumb\n"
);

// --- Step 6 link bridges (g4_bridge_835 .. g4_bridge_858) ---
#define G4_DEF_ARM_BRIDGE(sec, sym, tgt) \
  __asm__( \
    ".section .text." #sec ",\"ax\",%progbits\n" \
    ".syntax unified\n" \
    ".arm\n" \
    ".balign 4\n" \
    ".globl " sym "\n" \
    ".type " sym ", %function\n" \
    sym ":\n" \
    "  b " tgt "\n" \
    ".thumb\n" \
  )

G4_DEF_ARM_BRIDGE(g4_bridge_835, "_Z11sub_1367830z", "_Z11sub_1367830Pi");
G4_DEF_ARM_BRIDGE(g4_bridge_836, "_Z11sub_136CF40z", "_Z11sub_136CF40Pj");
G4_DEF_ARM_BRIDGE(g4_bridge_837, "_Z11sub_15961A0z", "_Z11sub_15961A0PN11hkAlgorithm4SelfEi");
G4_DEF_ARM_BRIDGE(g4_bridge_838, "_Z11sub_1968BA0z", "_Z11sub_1968BA0iiPi");
G4_DEF_ARM_BRIDGE(g4_bridge_839, "_Z11sub_197B550z", "_Z11sub_197B550iPPh");
G4_DEF_ARM_BRIDGE(g4_bridge_840, "_Z11sub_197B6E0z", "_Z11sub_197B6E0iiPPh");
G4_DEF_ARM_BRIDGE(g4_bridge_841, "_Z11sub_197B900z", "_Z11sub_197B900iPPh");
G4_DEF_ARM_BRIDGE(g4_bridge_842, "_Z11sub_1972740z", "_Z11sub_1972740Ph");
G4_DEF_ARM_BRIDGE(g4_bridge_843, "_Z11sub_196B720z", "_Z11sub_196B720Pj");
G4_DEF_ARM_BRIDGE(g4_bridge_844, "_Z11sub_196C170z", "_Z11sub_196C170PjPPKv");
G4_DEF_ARM_BRIDGE(g4_bridge_845, "_Z11sub_197EBA0z", "_Z11sub_197EBA0iPPKc");
G4_DEF_ARM_BRIDGE(g4_bridge_846, "_Z11sub_197F230z", "_Z11sub_197F230PhPPKc");
G4_DEF_ARM_BRIDGE(g4_bridge_847, "_Z11sub_128EE60z", "_Z11sub_128EE60iPj");
G4_DEF_ARM_BRIDGE(g4_bridge_848, "_Z10sub_EA0DF0z", "_Z10sub_EA0DF0PPKwS0_");
G4_DEF_ARM_BRIDGE(g4_bridge_849, "_Z10sub_EC71B0z", "_Z10sub_EC71B0iPPKv");
G4_DEF_ARM_BRIDGE(g4_bridge_850, "_Z10sub_EB6270z", "_Z10sub_EB6270PiiiPPKv");
G4_DEF_ARM_BRIDGE(g4_bridge_851, "_Z11sub_1361F10z", "_Z11sub_1361F10PjiiiPi");
G4_DEF_ARM_BRIDGE(g4_bridge_852, "_Z11sub_1250932z", "_Z11sub_1250932v");
G4_DEF_ARM_BRIDGE(g4_bridge_853, "_Z11sub_123B150z", "_Z11sub_123B150PjiiiPPVi");
G4_DEF_ARM_BRIDGE(g4_bridge_854, "_Z11sub_1320740z", "_Z11sub_1320740PiPh");
G4_DEF_ARM_BRIDGE(g4_bridge_855, "_Z11sub_1320060z", "_Z11sub_1320060v");
G4_DEF_ARM_BRIDGE(g4_bridge_856, "_Z11sub_12726CAz", "_Z11sub_12726CAv");
G4_DEF_ARM_BRIDGE(
  g4_bridge_857,
  "_ZN6chatv29Responses18ReportUserResponse9ConstructEPNS1_4SelfEPNS_4Core13ArionExecutor4SelfE",
  "_ZN6chatv29Responses18ReportUserResponse9ConstructEPNS1_4SelfEP13ArionExecutor"
);
G4_DEF_ARM_BRIDGE(
  g4_bridge_858,
  "_ZNSt8_Rb_treeItNSt6__ndk14pairIKttEESt10_Select1stIS3_ENS0_4lessItEENS0_9allocatorIS3_EEE8_M_eraseEiPj",
  "_ZN6g4_std39Rb_tree_unsigned_short_pair_unsi_9af7a77M_eraseEiPj"
);
#undef G4_DEF_ARM_BRIDGE

extern "C" {
  int g4_stub_sub_1886830() __asm__("_Z11sub_1886830z");
  int g4_stub_sub_1891FB0() __asm__("_Z11sub_1891FB0z");
  int g4_stub_sub_1892200() __asm__("_Z11sub_1892200z");
  int g4_stub_sub_18946B0() __asm__("_Z11sub_18946B0z");
  int g4_stub_sub_1894DE0() __asm__("_Z11sub_1894DE0z");
}
int g4_stub_sub_1886830() { return 0; }
int g4_stub_sub_1891FB0() { return 0; }
int g4_stub_sub_1892200() { return 0; }
int g4_stub_sub_18946B0() { return 0; }
int g4_stub_sub_1894DE0() { return 0; }
