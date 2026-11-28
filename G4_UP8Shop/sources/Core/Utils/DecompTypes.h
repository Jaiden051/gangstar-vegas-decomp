#pragma once
// ============================================================================
// Core/Utils/DecompTypes.h
// Cross-platform C++14/17 primitive aliases, sub-register views, bit-casts,
// vtable dispatch helpers, and runtime intrinsics for G4_UP8Shop.
// Designed to remain independent of any specific OS or console SDK.
// ============================================================================

#include <algorithm>
#include <atomic>
#include <cassert>
#include <climits>
#include <cmath>
#include <chrono>
#include <thread>

// Portable IDA intrinsic fsqrt overloads & empty libstdc++-ABI string rep storage
inline float fsqrt(float x) { return std::sqrt(x); }
inline double fsqrt(double x) { return std::sqrt(x); }
inline long double fsqrt(long double x) { return std::sqrt(x); }
extern "C" uint8_t g4_empty_string_rep[32];
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <sys/stat.h>
#ifdef __linux__
#include <sys/epoll.h>
#else
struct epoll_event {
    uint32_t events;
    union { void *ptr; int fd; uint32_t u32; uint64_t u64; } data;
};
#endif
#if !defined(_WIN32)
#include <netdb.h>
#include <poll.h>
#include <sys/times.h>
#else
struct pollfd {
    int fd;
    short events;
    short revents;
};
struct hostent;
struct tms {
    long tms_utime;
    long tms_stime;
    long tms_cutime;
    long tms_cstime;
};
#endif
#ifndef G4_FREETYPE_TYPES_DEFINED
#define G4_FREETYPE_TYPES_DEFINED
struct FT_Vector_ { long x; long y; };
struct FT_Bitmap_ {
    unsigned int rows;
    unsigned int width;
    int pitch;
    unsigned char *buffer;
    unsigned short num_grays;
    unsigned char pixel_mode;
    unsigned char palette_mode;
    void *palette;
};
#endif
#include <deque>
#include <functional>
#include <list>
#include <map>
#include <memory>
#include <new>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <string>
#include <tuple>
#include <utility>
#include <type_traits>
#include <utility>
#include <vector>
#include <setjmp.h>
#if !defined(_WIN32)
#  include <unistd.h>
#  include <dlfcn.h>
#  include <sys/select.h>
#  include <sys/uio.h>
#  include <syslog.h>
#  include <pwd.h>
#  ifdef __linux__
#    include <sys/sendfile.h>
#  else
     inline ssize_t sendfile(int, int, off_t *, size_t) { return -1; }
#  endif
#  include <fcntl.h>
#  include <dirent.h>
#  include <sys/socket.h>
#  include <sys/ioctl.h>
#  include <sys/mman.h>
#  include <netinet/in.h>
#  include <arpa/inet.h>
inline struct in_addr g4_in_addr(uint32_t s) {
    struct in_addr a;
    std::memcpy(&a, &s, sizeof(a) < sizeof(s) ? sizeof(a) : sizeof(s));
    return a;
}
#endif
#if defined(__ANDROID__)
#  include <GLES2/gl2.h>
#  include <EGL/egl.h>
#  include <android/asset_manager.h>
#  include <android/log.h>
#  include <SLES/OpenSLES.h>
#else
#  ifndef G4_NONANDROID_STUB_TYPES
#  define G4_NONANDROID_STUB_TYPES
typedef uint32_t GLuint;
typedef int32_t  GLint;
typedef int32_t  GLsizei;
typedef float    GLfloat;
typedef void *EGLDisplay;
typedef void *EGLSurface;
inline void *eglGetProcAddress(const char *) { return nullptr; }
inline EGLDisplay eglGetCurrentDisplay(void) { return nullptr; }
inline EGLSurface eglGetCurrentSurface(int) { return nullptr; }
inline unsigned int eglSwapBuffers(EGLDisplay, EGLSurface) { return 1; }
struct AAsset;
struct AAssetManager;
typedef const struct SLInterfaceID_ *SLInterfaceID;
extern const SLInterfaceID SL_IID_ENGINE;
extern const SLInterfaceID SL_IID_BUFFERQUEUE;
extern const SLInterfaceID SL_IID_PLAY;
inline int AAsset_close(void *) { return 0; }
inline off_t AAsset_getLength(void *) { return 0; }
inline off_t AAsset_seek(void *, off_t, int) { return 0; }
struct AAssetDir;
inline void AAssetDir_close(void *) {}
inline void *AAssetManager_open(void *, const char *, int) { return nullptr; }
inline void *AAssetManager_openDir(void *, const char *) { return nullptr; }
inline int __android_log_vprint(int, const char *, const char *, va_list) { return 0; }
inline void glUseProgram(GLuint) {}
inline void glEnableVertexAttribArray(GLuint) {}
inline void glDisableVertexAttribArray(GLuint) {}
inline void glDeleteShader(GLuint) {}
inline void glUniform1iv(GLint, GLsizei, const GLint *) {}
inline void glUniform2iv(GLint, GLsizei, const GLint *) {}
inline void glUniform3iv(GLint, GLsizei, const GLint *) {}
inline void glUniform4iv(GLint, GLsizei, const GLint *) {}
inline void glUniform1fv(GLint, GLsizei, const GLfloat *) {}
inline void glUniform2fv(GLint, GLsizei, const GLfloat *) {}
inline void glUniform1f(GLint, GLfloat) {}
inline void glUniform3fv(GLint, GLsizei, const GLfloat *) {}
inline void glUniform4fv(GLint, GLsizei, const GLfloat *) {}
inline void glUniformMatrix4fv(GLint, GLsizei, uint8_t, const GLfloat *) {}
inline uint32_t slCreateEngine(void *, uint32_t, const void *, uint32_t, const void *, const void *) { return 0; }
#  endif
#endif

#include "Core/Utils/DecompSimd.h"

typedef uint8_t  uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;
typedef int8_t   int8;
typedef int16_t  int16;
typedef int32_t  int32;
typedef int64_t  int64;

typedef uint8_t  _BYTE;
typedef uint16_t _WORD;
typedef uint32_t _DWORD;
typedef uint64_t _QWORD;
typedef uint8_t  _BOOL1;
typedef uint16_t _BOOL2;
typedef uint32_t _BOOL4;

typedef uint64_t g4_cxa_guard_t;
typedef g4_cxa_guard_t __guard;

template <typename T>
struct Std {
    typedef std::vector<T> Vector;
};

#ifndef gll_new
#define gll_new new
#endif

#ifndef gll_delete
#define gll_delete delete
#endif

// IDA Pro calling-convention / ABI annotations left in some signatures
#ifndef __high
#define __high
#endif
#ifndef __hidden
#define __hidden
#endif

// Portable OpenGL scalar typedefs so cross-platform headers need not pull GLES headers.
#ifndef GL_VERSION_ES_CM_1_0
#ifndef G4_GL_TYPES_DEFINED
#define G4_GL_TYPES_DEFINED
typedef float GLfloat;
typedef float GLclampf;
typedef int   GLsizei;
#endif
#endif

// ============================================================================
// Portable 128-bit integer container (for 32-bit and 64-bit targets alike)
// ============================================================================
struct __attribute__((packed)) g4_uint128_t {
    uint64_t lo;
    uint64_t hi;

    g4_uint128_t() = default;
    constexpr g4_uint128_t(uint64_t low) : lo(low), hi(0) {}
    constexpr g4_uint128_t(uint64_t low, uint64_t high) : lo(low), hi(high) {}
    inline g4_uint128_t(const __m128i& v) noexcept { std::memcpy(this, &v, 16); }
    inline g4_uint128_t(const __m128& v) noexcept { std::memcpy(this, &v, 16); }
    inline g4_uint128_t(const __m128d& v) noexcept { std::memcpy(this, &v, 16); }
    inline g4_uint128_t(const uint8_t (&arr)[16]) noexcept { std::memcpy(this, arr, 16); }
    inline g4_uint128_t(const G4M128RawVal& o) noexcept { std::memcpy(this, o.buf, 16); }
    template <typename Vec> inline g4_uint128_t(const G4M128RawRef<Vec>& o) noexcept { std::memcpy(this, &o.v, sizeof(Vec) <= 16 ? sizeof(Vec) : 16); }
    inline g4_uint128_t& operator=(const __m128i& v) noexcept { std::memcpy(this, &v, 16); return *this; }
    inline g4_uint128_t& operator=(const __m128& v) noexcept { std::memcpy(this, &v, 16); return *this; }
    inline g4_uint128_t& operator=(const __m128d& v) noexcept { std::memcpy(this, &v, 16); return *this; }
    inline g4_uint128_t& operator=(const uint8_t (&arr)[16]) noexcept { std::memcpy(this, arr, 16); return *this; }
    inline g4_uint128_t& operator=(const G4M128RawVal& o) noexcept { std::memcpy(this, o.buf, 16); return *this; }
    template <typename Vec> inline g4_uint128_t& operator=(const G4M128RawRef<Vec>& o) noexcept { std::memcpy(this, &o.v, sizeof(Vec) <= 16 ? sizeof(Vec) : 16); return *this; }

    template <typename T, typename std::enable_if<std::is_integral<T>::value, int>::type = 0>
    explicit constexpr operator T() const { return static_cast<T>(lo); }
};

struct __attribute__((packed)) g4_int128_t {
    uint64_t lo;
    int64_t  hi;

    g4_int128_t() = default;
    constexpr g4_int128_t(int64_t low) : lo(static_cast<uint64_t>(low)), hi(low < 0 ? -1 : 0) {}
    constexpr g4_int128_t(uint64_t low, int64_t high) : lo(low), hi(high) {}
    constexpr g4_int128_t(const g4_uint128_t& u) : lo(u.lo), hi(static_cast<int64_t>(u.hi)) {}
    inline g4_int128_t(const __m128i& v) noexcept { std::memcpy(this, &v, 16); }
    inline g4_int128_t(const __m128& v) noexcept { std::memcpy(this, &v, 16); }
    inline g4_int128_t(const __m128d& v) noexcept { std::memcpy(this, &v, 16); }
    inline g4_int128_t(const uint8_t (&arr)[16]) noexcept { std::memcpy(this, arr, 16); }
    inline g4_int128_t(const G4M128RawVal& o) noexcept { std::memcpy(this, o.buf, 16); }
    template <typename Vec> inline g4_int128_t(const G4M128RawRef<Vec>& o) noexcept { std::memcpy(this, &o.v, sizeof(Vec) <= 16 ? sizeof(Vec) : 16); }
    inline g4_int128_t& operator=(const __m128i& v) noexcept { std::memcpy(this, &v, 16); return *this; }
    inline g4_int128_t& operator=(const __m128& v) noexcept { std::memcpy(this, &v, 16); return *this; }
    inline g4_int128_t& operator=(const __m128d& v) noexcept { std::memcpy(this, &v, 16); return *this; }
    inline g4_int128_t& operator=(const uint8_t (&arr)[16]) noexcept { std::memcpy(this, arr, 16); return *this; }
    inline g4_int128_t& operator=(const G4M128RawVal& o) noexcept { std::memcpy(this, o.buf, 16); return *this; }
    template <typename Vec> inline g4_int128_t& operator=(const G4M128RawRef<Vec>& o) noexcept { std::memcpy(this, &o.v, sizeof(Vec) <= 16 ? sizeof(Vec) : 16); return *this; }

    template <typename T, typename std::enable_if<std::is_integral<T>::value, int>::type = 0>
    explicit constexpr operator T() const { return static_cast<T>(lo); }
};

#define G4_DEFINE_128_INT_OPS(T128) \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator+(const T128& a, Int b) { return a.lo + static_cast<uint64_t>(static_cast<int64_t>(b)); } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator+(Int a, const T128& b) { return static_cast<uint64_t>(static_cast<int64_t>(a)) + b.lo; } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator-(const T128& a, Int b) { return a.lo - static_cast<uint64_t>(static_cast<int64_t>(b)); } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator-(Int a, const T128& b) { return static_cast<uint64_t>(static_cast<int64_t>(a)) - b.lo; } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator&(const T128& a, Int b) { return a.lo & static_cast<uint64_t>(b); } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator&(Int a, const T128& b) { return static_cast<uint64_t>(a) & b.lo; } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator|(const T128& a, Int b) { return a.lo | static_cast<uint64_t>(b); } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator|(Int a, const T128& b) { return static_cast<uint64_t>(a) | b.lo; } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator^(const T128& a, Int b) { return a.lo ^ static_cast<uint64_t>(b); } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator^(Int a, const T128& b) { return static_cast<uint64_t>(a) ^ b.lo; } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator*(const T128& a, Int b) { return a.lo * static_cast<uint64_t>(static_cast<int64_t>(b)); } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator*(Int a, const T128& b) { return static_cast<uint64_t>(static_cast<int64_t>(a)) * b.lo; } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator/(const T128& a, Int b) { return b ? a.lo / static_cast<uint64_t>(b) : 0; } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator>>(const T128& a, Int b) { \
        const int s = static_cast<int>(b); \
        if (s <= 0) return a.lo; \
        if (s < 64) return (a.lo >> s) | (static_cast<uint64_t>(a.hi) << (64 - s)); \
        if (s < 128) return static_cast<uint64_t>(a.hi) >> (s - 64); \
        return 0; \
    } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline uint64_t operator<<(const T128& a, Int b) { \
        const int s = static_cast<int>(b); \
        if (s <= 0) return a.lo; \
        return s < 64 ? (a.lo << s) : 0; \
    } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline bool operator==(const T128& a, Int b) { return a.lo == static_cast<uint64_t>(b) && a.hi == 0; } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline bool operator!=(const T128& a, Int b) { return !(a == b); } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline bool operator==(Int a, const T128& b) { return b == a; } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline bool operator!=(Int a, const T128& b) { return !(b == a); } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline bool operator<(const T128& a, Int b) { return a.lo < static_cast<uint64_t>(b); } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline bool operator>(const T128& a, Int b) { return a.lo > static_cast<uint64_t>(b); } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline bool operator<=(const T128& a, Int b) { return a.lo <= static_cast<uint64_t>(b); } \
    template <typename Int, typename std::enable_if<std::is_integral<Int>::value, int>::type = 0> \
    inline bool operator>=(const T128& a, Int b) { return a.lo >= static_cast<uint64_t>(b); }
G4_DEFINE_128_INT_OPS(g4_uint128_t)
G4_DEFINE_128_INT_OPS(g4_int128_t)
#undef G4_DEFINE_128_INT_OPS
#define G4_DEFINE_128_MIXED_OPS(OP, FIELD_OP) \
    inline uint64_t operator OP(const g4_uint128_t& a, const g4_int128_t& b) { return a.lo FIELD_OP b.lo; } \
    inline uint64_t operator OP(const g4_int128_t& a, const g4_uint128_t& b) { return a.lo FIELD_OP b.lo; } \
    inline uint64_t operator OP(const g4_uint128_t& a, const g4_uint128_t& b) { return a.lo FIELD_OP b.lo; } \
    inline uint64_t operator OP(const g4_int128_t& a, const g4_int128_t& b) { return a.lo FIELD_OP b.lo; }
G4_DEFINE_128_MIXED_OPS(+, +)
G4_DEFINE_128_MIXED_OPS(-, -)
G4_DEFINE_128_MIXED_OPS(&, &)
G4_DEFINE_128_MIXED_OPS(|, |)
G4_DEFINE_128_MIXED_OPS(^, ^)
G4_DEFINE_128_MIXED_OPS(*, *)
#undef G4_DEFINE_128_MIXED_OPS
inline bool operator==(const g4_uint128_t& a, const g4_int128_t& b) { return a.lo == b.lo && a.hi == static_cast<uint64_t>(b.hi); }
inline bool operator!=(const g4_uint128_t& a, const g4_int128_t& b) { return !(a == b); }
inline bool operator==(const g4_int128_t& a, const g4_uint128_t& b) { return b == a; }
inline bool operator!=(const g4_int128_t& a, const g4_uint128_t& b) { return !(b == a); }

// ============================================================================
// Portable bit-cast & vtable call dispatch
// ============================================================================
template <typename Dst, typename Src>
inline Dst G4_BITCAST(const Src& src) {
    Dst dst{};
    constexpr std::size_t n = sizeof(Dst) < sizeof(Src) ? sizeof(Dst) : sizeof(Src);
    std::memcpy(&dst, &src, n);
    return dst;
}

template <typename Dst, typename Src, std::size_t N>
inline Dst G4_BITCAST(const Src (&src)[N]) {
    Dst dst{};
    constexpr std::size_t n = sizeof(Dst) < sizeof(Src) * N ? sizeof(Dst) : sizeof(Src) * N;
    std::memcpy(&dst, src, n);
    return dst;
}

inline float COERCE_FLOAT(uint32_t v) { return G4_BITCAST<float>(v); }
inline float COERCE_FLOAT(int32_t v)  { return G4_BITCAST<float>(v); }
inline float COERCE_FLOAT(float v)    { return v; }
template <typename T>
inline float COERCE_FLOAT(const T& v) { return G4_BITCAST<float>(v); }

inline double COERCE_DOUBLE(uint64_t v) { return G4_BITCAST<double>(v); }
inline double COERCE_DOUBLE(int64_t v)  { return G4_BITCAST<double>(v); }
inline double COERCE_DOUBLE(double v)   { return v; }
template <typename T>
inline double COERCE_DOUBLE(const T& v) { return G4_BITCAST<double>(v); }

inline int32_t COERCE_INT(float f)    { return G4_BITCAST<int32_t>(f); }
inline int32_t COERCE_INT(uint32_t v) { return static_cast<int32_t>(v); }
template <typename T>
inline int32_t COERCE_INT(const T& v) { return G4_BITCAST<int32_t>(v); }

inline uint32_t COERCE_UNSIGNED_INT(float f)    { return G4_BITCAST<uint32_t>(f); }
inline uint32_t COERCE_UNSIGNED_INT(int32_t v)  { return static_cast<uint32_t>(v); }
template <typename T>
inline uint32_t COERCE_UNSIGNED_INT(const T& v) { return G4_BITCAST<uint32_t>(v); }

inline int64_t COERCE__INT64(double d)   { return G4_BITCAST<int64_t>(d); }
template <typename T>
inline int64_t COERCE__INT64(const T& v) { return G4_BITCAST<int64_t>(v); }

inline uint64_t COERCE_UNSIGNED_INT64(double d)   { return G4_BITCAST<uint64_t>(d); }
template <typename T>
inline uint64_t COERCE_UNSIGNED_INT64(const T& v) { return G4_BITCAST<uint64_t>(v); }

// Portable virtual table call abstraction:
// Replaces raw (*(Ret(**)(...))(*(uint32_t*)obj + offset))(obj, ...) idioms.
// Byte offsets are mapped using 32-bit vtable slot stride (sizeof(uint32_t)) so
// x86/ARMv7 offsets remain valid across 32-bit and 64-bit targets.
template <typename Ret, typename Obj, typename... Args>
inline Ret G4_VCALL(Obj* obj, std::size_t byteOffset32, Args... args) {
    const std::size_t slotIndex = byteOffset32 / 4u;
    void* const* vptr = *reinterpret_cast<void* const* const*>(
        const_cast<const void*>(static_cast<const volatile void*>(obj)));
    typedef Ret (*FnPtr)(Obj*, Args...);
    FnPtr fn = reinterpret_cast<FnPtr>(vptr[slotIndex]);
    return fn(obj, args...);
}

template <typename Ret, typename IntAddr, typename... Args,
          typename std::enable_if<std::is_integral<IntAddr>::value, int>::type = 0>
inline Ret G4_VCALL(IntAddr objAddr, std::size_t byteOffset32, Args... args) {
    return G4_VCALL<Ret, void, Args...>(
        reinterpret_cast<void*>(static_cast<uintptr_t>(objAddr)), byteOffset32, args...);
}

// ============================================================================
// Sub-register / lane accessors (support both lvalue assignment and rvalues)
// ============================================================================
namespace G4Detail {
template <typename PartT, std::size_t Index, typename BaseT, bool Fits = (sizeof(BaseT) >= (Index + 1) * sizeof(PartT))>
struct PartRef {
    static PartT& get(BaseT& x) {
        return reinterpret_cast<PartT*>(&x)[Index];
    }
};

template <typename PartT, std::size_t Index, typename BaseT>
struct PartRef<PartT, Index, BaseT, false> {
    static PartT& get(BaseT&) {
        static thread_local PartT scratch{};
        scratch = PartT{};
        return scratch;
    }
};

template <typename PartT, std::size_t Index, typename BaseT>
inline PartT read_part(const BaseT& x) {
    uint8_t buf[32]{};
    constexpr std::size_t copyBytes = sizeof(BaseT) < sizeof(buf) ? sizeof(BaseT) : sizeof(buf);
    std::memcpy(buf, &x, copyBytes);
    PartT out{};
    if ((Index + 1) * sizeof(PartT) <= sizeof(buf)) {
        std::memcpy(&out, buf + Index * sizeof(PartT), sizeof(PartT));
    }
    return out;
}
} // namespace G4Detail

#define G4_DEFINE_PART_ACCESSOR(name, PartT, idx) \
    template <typename T> inline PartT& name(T& x) { return G4Detail::PartRef<PartT, idx, T>::get(x); } \
    template <typename T> inline PartT  name(const T& x) { return G4Detail::read_part<PartT, idx>(x); }

G4_DEFINE_PART_ACCESSOR(LOBYTE,  uint8_t,  0)
G4_DEFINE_PART_ACCESSOR(BYTE1,   uint8_t,  1)
G4_DEFINE_PART_ACCESSOR(BYTE2,   uint8_t,  2)
G4_DEFINE_PART_ACCESSOR(BYTE3,   uint8_t,  3)
G4_DEFINE_PART_ACCESSOR(BYTE4,   uint8_t,  4)
G4_DEFINE_PART_ACCESSOR(BYTE5,   uint8_t,  5)
G4_DEFINE_PART_ACCESSOR(BYTE6,   uint8_t,  6)
G4_DEFINE_PART_ACCESSOR(BYTE7,   uint8_t,  7)
G4_DEFINE_PART_ACCESSOR(BYTE8,   uint8_t,  8)
G4_DEFINE_PART_ACCESSOR(BYTE9,   uint8_t,  9)
G4_DEFINE_PART_ACCESSOR(BYTE10,  uint8_t, 10)
G4_DEFINE_PART_ACCESSOR(BYTE11,  uint8_t, 11)
G4_DEFINE_PART_ACCESSOR(BYTE12,  uint8_t, 12)
G4_DEFINE_PART_ACCESSOR(BYTE13,  uint8_t, 13)
G4_DEFINE_PART_ACCESSOR(BYTE14,  uint8_t, 14)
G4_DEFINE_PART_ACCESSOR(BYTE15,  uint8_t, 15)

G4_DEFINE_PART_ACCESSOR(SBYTE0,  int8_t,   0)
G4_DEFINE_PART_ACCESSOR(SBYTE1,  int8_t,   1)
G4_DEFINE_PART_ACCESSOR(SBYTE2,  int8_t,   2)
G4_DEFINE_PART_ACCESSOR(SBYTE3,  int8_t,   3)
G4_DEFINE_PART_ACCESSOR(SBYTE4,  int8_t,   4)
G4_DEFINE_PART_ACCESSOR(SBYTE5,  int8_t,   5)
G4_DEFINE_PART_ACCESSOR(SBYTE6,  int8_t,   6)
G4_DEFINE_PART_ACCESSOR(SBYTE7,  int8_t,   7)

G4_DEFINE_PART_ACCESSOR(LOWORD,  uint16_t, 0)
G4_DEFINE_PART_ACCESSOR(WORD1,   uint16_t, 1)
G4_DEFINE_PART_ACCESSOR(WORD2,   uint16_t, 2)
G4_DEFINE_PART_ACCESSOR(WORD3,   uint16_t, 3)
G4_DEFINE_PART_ACCESSOR(WORD4,   uint16_t, 4)
G4_DEFINE_PART_ACCESSOR(WORD5,   uint16_t, 5)
G4_DEFINE_PART_ACCESSOR(WORD6,   uint16_t, 6)
G4_DEFINE_PART_ACCESSOR(WORD7,   uint16_t, 7)

G4_DEFINE_PART_ACCESSOR(SLOWORD, int16_t,  0)
G4_DEFINE_PART_ACCESSOR(SWORD1,  int16_t,  1)
G4_DEFINE_PART_ACCESSOR(SWORD2,  int16_t,  2)
G4_DEFINE_PART_ACCESSOR(SWORD3,  int16_t,  3)
G4_DEFINE_PART_ACCESSOR(SWORD4,  int16_t,  4)
G4_DEFINE_PART_ACCESSOR(SWORD5,  int16_t,  5)
G4_DEFINE_PART_ACCESSOR(SWORD6,  int16_t,  6)
G4_DEFINE_PART_ACCESSOR(SWORD7,  int16_t,  7)

G4_DEFINE_PART_ACCESSOR(LODWORD, uint32_t, 0)
G4_DEFINE_PART_ACCESSOR(DWORD1,  uint32_t, 1)
G4_DEFINE_PART_ACCESSOR(DWORD2,  uint32_t, 2)
G4_DEFINE_PART_ACCESSOR(DWORD3,  uint32_t, 3)

G4_DEFINE_PART_ACCESSOR(SLODWORD, int32_t, 0)
G4_DEFINE_PART_ACCESSOR(SDWORD1,  int32_t, 1)
G4_DEFINE_PART_ACCESSOR(SDWORD2,  int32_t, 2)
G4_DEFINE_PART_ACCESSOR(SDWORD3,  int32_t, 3)

#undef G4_DEFINE_PART_ACCESSOR

template <typename T>
inline uint8_t& HIBYTE(T& x) {
    return G4Detail::PartRef<uint8_t, (sizeof(T) > 1 ? sizeof(T) - 1 : 0), T>::get(x);
}
template <typename T>
inline uint8_t HIBYTE(const T& x) {
    return G4Detail::read_part<uint8_t, (sizeof(T) > 1 ? sizeof(T) - 1 : 0)>(x);
}

template <typename T>
inline uint16_t& HIWORD(T& x) {
    return G4Detail::PartRef<uint16_t, (sizeof(T) >= 4 ? (sizeof(T) / 2) - 1 : 0), T>::get(x);
}
template <typename T>
inline uint16_t HIWORD(const T& x) {
    return G4Detail::read_part<uint16_t, (sizeof(T) >= 4 ? (sizeof(T) / 2) - 1 : 0)>(x);
}

template <typename T>
inline uint32_t& HIDWORD(T& x) {
    return G4Detail::PartRef<uint32_t, (sizeof(T) >= 8 ? 1 : 0), T>::get(x);
}
template <typename T>
inline uint32_t HIDWORD(const T& x) {
    return G4Detail::read_part<uint32_t, (sizeof(T) >= 8 ? 1 : 0)>(x);
}

template <typename T>
inline int32_t& SHIDWORD(T& x) {
    return G4Detail::PartRef<int32_t, (sizeof(T) >= 8 ? 1 : 0), T>::get(x);
}
template <typename T>
inline int32_t SHIDWORD(const T& x) {
    return G4Detail::read_part<int32_t, (sizeof(T) >= 8 ? 1 : 0)>(x);
}

// ============================================================================
// Pair constructors, rotations, CPU flag checks, and decompiler intrinsics
// ============================================================================
template <typename T, typename std::enable_if<std::is_pointer<typename std::decay<T>::type>::value, int>::type = 0>
inline uint32_t g4_to_u32(T v) { return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(v)); }
template <typename T, typename std::enable_if<!std::is_pointer<typename std::decay<T>::type>::value, int>::type = 0>
inline uint32_t g4_to_u32(T v) { return static_cast<uint32_t>(v); }
template <typename T, typename std::enable_if<std::is_pointer<typename std::decay<T>::type>::value, int>::type = 0>
inline uintptr_t g4_to_uptr(T v) { return reinterpret_cast<uintptr_t>(v); }
template <typename T, typename std::enable_if<!std::is_pointer<typename std::decay<T>::type>::value, int>::type = 0>
inline T g4_to_uptr(T v) { return v; }

template <typename Hi, typename Lo>
inline uint64_t __PAIR64__(Hi hi, Lo lo) {
    return (static_cast<uint64_t>(g4_to_u32(hi)) << 32) |
           static_cast<uint64_t>(g4_to_u32(lo));
}

template <typename Hi, typename Lo>
inline int64_t __SPAIR64__(Hi hi, Lo lo) {
    return static_cast<int64_t>(__PAIR64__(hi, lo));
}

template <typename Hi, typename Lo>
inline g4_uint128_t __PAIR128__(Hi hi, Lo lo) {
    return g4_uint128_t(static_cast<uint64_t>(lo), static_cast<uint64_t>(hi));
}

template <typename T>
inline T __ROR__(T value, unsigned int count) {
    constexpr unsigned int nbits = sizeof(T) * 8u;
    using U = typename std::make_unsigned<T>::type;
    const unsigned int c = count % nbits;
    const U u = static_cast<U>(value);
    if (c == 0) return value;
    return static_cast<T>((u >> c) | (u << (nbits - c)));
}

template <typename T>
inline T __ROL__(T value, unsigned int count) {
    constexpr unsigned int nbits = sizeof(T) * 8u;
    using U = typename std::make_unsigned<T>::type;
    const unsigned int c = count % nbits;
    const U u = static_cast<U>(value);
    if (c == 0) return value;
    return static_cast<T>((u << c) | (u >> (nbits - c)));
}

inline uint8_t  __ROR1__(uint8_t  v, int c) { return __ROR__(v, static_cast<unsigned>(c)); }
inline uint16_t __ROR2__(uint16_t v, int c) { return __ROR__(v, static_cast<unsigned>(c)); }
inline uint32_t __ROR4__(uint32_t v, int c) { return __ROR__(v, static_cast<unsigned>(c)); }
inline uint64_t __ROR8__(uint64_t v, int c) { return __ROR__(v, static_cast<unsigned>(c)); }
inline uint8_t  __ROL1__(uint8_t  v, int c) { return __ROL__(v, static_cast<unsigned>(c)); }
inline uint16_t __ROL2__(uint16_t v, int c) { return __ROL__(v, static_cast<unsigned>(c)); }
inline uint32_t __ROL4__(uint32_t v, int c) { return __ROL__(v, static_cast<unsigned>(c)); }
inline uint64_t __ROL8__(uint64_t v, int c) { return __ROL__(v, static_cast<unsigned>(c)); }

template <typename T, typename U>
inline bool __CFADD__(T x, U y) {
    auto ax = g4_to_uptr(x);
    auto ay = g4_to_uptr(y);
    using W = typename std::make_unsigned<typename std::common_type<decltype(ax), decltype(ay)>::type>::type;
    const W ux = static_cast<W>(ax);
    const W uy = static_cast<W>(ay);
    return static_cast<W>(ux + uy) < ux;
}

template <typename T, typename U>
inline bool __CFSUB__(T x, U y) {
    auto ax = g4_to_uptr(x);
    auto ay = g4_to_uptr(y);
    using W = typename std::make_unsigned<typename std::common_type<decltype(ax), decltype(ay)>::type>::type;
    return static_cast<W>(ax) < static_cast<W>(ay);
}

template <typename T, typename U>
inline bool __OFADD__(T x, U y) {
    using S = typename std::make_signed<typename std::common_type<T, U>::type>::type;
    using US = typename std::make_unsigned<S>::type;
    const US sx = static_cast<US>(static_cast<S>(x));
    const US sy = static_cast<US>(static_cast<S>(y));
    const US sum = sx + sy;
    constexpr US signBit = US(1) << (sizeof(S) * 8u - 1u);
    return ((~(sx ^ sy)) & (sx ^ sum) & signBit) != 0;
}

template <typename T, typename U>
inline bool __OFSUB__(T x, U y) {
    using S = typename std::make_signed<typename std::common_type<T, U>::type>::type;
    using US = typename std::make_unsigned<S>::type;
    const US sx = static_cast<US>(static_cast<S>(x));
    const US sy = static_cast<US>(static_cast<S>(y));
    const US diff = sx - sy;
    constexpr US signBit = US(1) << (sizeof(S) * 8u - 1u);
    return (((sx ^ sy)) & (sx ^ diff) & signBit) != 0;
}

template <typename T, typename U>
inline bool __SETP__(T x, U y) {
    uint8_t d = static_cast<uint8_t>(x) - static_cast<uint8_t>(y);
    d ^= d >> 4;
    d ^= d >> 2;
    d ^= d >> 1;
    return (d & 1u) == 0;
}

#if !defined(__i386__) && !defined(__x86_64__) && !defined(_M_IX86) && !defined(_M_X64)
inline uint64_t __rdtsc() {
    return 0;
}
#endif

inline void __dmb(int) {
    std::atomic_thread_fence(std::memory_order_seq_cst);
}

template <typename T>
inline T __ldrex(volatile T* addr) {
    return *addr;
}

template <typename T, typename V>
inline int __strex(V val, volatile T* addr) {
    *addr = static_cast<T>(val);
    return 0;
}

#ifndef __builtin_rotateleft32
inline uint32_t g4_rotl32(uint32_t v, int c) { return __ROL4__(v, c); }
#endif

#ifndef __builtin_rotateright32
inline uint32_t g4_rotr32(uint32_t v, int c) { return __ROR4__(v, c); }
#endif

// ============================================================================
// Portable ABI / Unresolved-Address Fallbacks
// ============================================================================
extern "C" {
int _cxa_guard_acquire(g4_cxa_guard_t* g);
void _cxa_guard_release(g4_cxa_guard_t* g);
void __assert2(const char* file, int line, const char* func, const char* expr);
}
#if defined(__cplusplus)
template <typename T, typename std::enable_if<!std::is_same<typename std::decay<T>::type, g4_cxa_guard_t *>::value, int>::type = 0>
inline int _cxa_guard_acquire(T g) { return ::_cxa_guard_acquire(reinterpret_cast<g4_cxa_guard_t *>(uintptr_t(g))); }
template <typename T, typename std::enable_if<!std::is_same<typename std::decay<T>::type, g4_cxa_guard_t *>::value, int>::type = 0>
inline void _cxa_guard_release(T g) { ::_cxa_guard_release(reinterpret_cast<g4_cxa_guard_t *>(uintptr_t(g))); }
#endif

inline void G4_JUMPOUT(uintptr_t) {
    std::abort();
}

template <typename T = uintptr_t>
inline T& G4_MEM(uintptr_t addr) {
    return *reinterpret_cast<T*>(addr);
}

// ============================================================================
// Cross-platform logging & fallback indirect memory call helper
// ============================================================================
void G4_PlatformLog(int prio, const char* tag, const char* fmt, ...);

template <typename Ret = uintptr_t, typename... Args>
inline Ret G4_MEM_CALL(uintptr_t addr, Args... args) {
    typedef Ret (*FnPtr)(Args...);
    return reinterpret_cast<FnPtr>(addr)(args...);
}

#ifdef __ANDROID__
extern "C" {
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
void __cxa_pure_virtual();
}
#else
extern "C" {
inline int __cxa_atexit(void (*)(void*), void*, void*) { return 0; }
inline void __cxa_pure_virtual() { std::abort(); }
}
#endif


template <typename F, typename A, typename D>
inline int __cxa_atexit(F func, A arg, D dso) {
    return __cxa_atexit(reinterpret_cast<void (*)(void*)>((uintptr_t)func),
                        reinterpret_cast<void*>((uintptr_t)arg),
                        reinterpret_cast<void*>((uintptr_t)dso));
}

// Batch 5B: Cross-platform Elf32_Sym layout for decompiled GOT/sym entries
typedef struct G4Elf32Sym {
    uint32_t st_name;
    uint32_t st_value;
    uint32_t st_size;
    uint8_t  st_info;
    uint8_t  st_other;
    uint16_t st_shndx;
} G4Elf32Sym;

// Batch 4B: Portable IDA intrinsics, sub-byte accessors, argument casts, and runtime decls
template <typename T>
inline int8_t& SLOBYTE(T& x) { return *reinterpret_cast<int8_t*>(&x); }
template <typename T>
inline int8_t SLOBYTE(const T& x) { return *reinterpret_cast<const int8_t*>(&x); }

template <typename T>
inline int8_t& SHIBYTE(T& x) { return *(reinterpret_cast<int8_t*>(&x) + (sizeof(T) - 1)); }
template <typename T>
inline int8_t SHIBYTE(const T& x) { return *(reinterpret_cast<const int8_t*>(&x) + (sizeof(T) - 1)); }

#if !defined(_MSC_VER)
inline unsigned char _BitScanReverse(uint32_t *Index, uint32_t Mask) {
    if (Mask == 0) return 0;
#  if defined(__GNUC__) || defined(__clang__)
    *Index = 31u - static_cast<uint32_t>(__builtin_clz(Mask));
#  else
    uint32_t idx = 0;
    while (Mask >>= 1) ++idx;
    *Index = idx;
#  endif
    return 1;
}
inline unsigned char _BitScanReverse(int *Index, uint32_t Mask) {
    uint32_t tmp = 0;
    unsigned char r = _BitScanReverse(&tmp, Mask);
    if (r) *Index = static_cast<int>(tmp);
    return r;
}
inline unsigned char _BitScanForward(uint32_t *Index, uint32_t Mask) {
    if (Mask == 0) return 0;
#  if defined(__GNUC__) || defined(__clang__)
    *Index = static_cast<uint32_t>(__builtin_ctz(Mask));
#  else
    uint32_t idx = 0;
    while ((Mask & 1u) == 0u) { Mask >>= 1; ++idx; }
    *Index = idx;
#  endif
    return 1;
}
inline unsigned char _BitScanForward(int *Index, uint32_t Mask) {
    uint32_t tmp = 0;
    unsigned char r = _BitScanForward(&tmp, Mask);
    if (r) *Index = static_cast<int>(tmp);
    return r;
}
template <typename Addr>
inline unsigned char _bittestandset(Addr *a, int b) {
    uint32_t *p = reinterpret_cast<uint32_t *>(a);
    uint32_t bit = static_cast<uint32_t>(1u) << (static_cast<unsigned>(b) & 31u);
    unsigned char old = (*p & bit) ? 1 : 0;
    *p |= bit;
    return old;
}
inline unsigned char _bittest(const int *a, int b) {
    return static_cast<unsigned char>((static_cast<uint32_t>(*a) >> (static_cast<unsigned>(b) & 31u)) & 1u);
}
#endif

inline void memset32(void *dst, uint32_t val, size_t count) {
    uint32_t *p = static_cast<uint32_t *>(dst);
    while (count--) *p++ = val;
}

template <typename To, typename From,
          typename std::enable_if<std::is_same<typename std::decay<From>::type, std::nullptr_t>::value && std::is_pointer<To>::value, int>::type = 0>
inline To g4_arg_cast(From) { return static_cast<To>(nullptr); }
template <typename To, typename From,
          typename std::enable_if<std::is_same<typename std::decay<From>::type, std::nullptr_t>::value && std::is_arithmetic<To>::value, int>::type = 0>
inline To g4_arg_cast(From) { return static_cast<To>(0); }

template <typename To, typename From,
          typename std::enable_if<!std::is_same<typename std::decay<From>::type, std::nullptr_t>::value && std::is_pointer<To>::value && std::is_pointer<typename std::decay<From>::type>::value, int>::type = 0>
inline To g4_arg_cast(From&& v) { return (To)(v); }

template <typename To, typename From,
          typename std::enable_if<!std::is_same<typename std::decay<From>::type, std::nullptr_t>::value && std::is_pointer<To>::value && std::is_integral<typename std::decay<From>::type>::value, int>::type = 0>
inline To g4_arg_cast(From v) { return (To)(uintptr_t)(v); }

template <typename To, typename From,
          typename std::enable_if<std::is_arithmetic<To>::value && std::is_pointer<typename std::decay<From>::type>::value, int>::type = 0>
inline To g4_arg_cast(From&& v) { return (To)(uintptr_t)(v); }

template <typename T>
struct g4_is_simd : std::false_type {};
template <> struct g4_is_simd<__m128> : std::true_type {};
template <> struct g4_is_simd<__m128d> : std::true_type {};
template <> struct g4_is_simd<__m128i> : std::true_type {};

template <typename To, typename From,
          typename std::enable_if<std::is_same<typename std::decay<To>::type, __m128>::value, int>::type = 0>
inline To g4_arg_cast(From&& v) { return g4_to_m128(v); }

template <typename To, typename From,
          typename std::enable_if<std::is_same<typename std::decay<To>::type, __m128d>::value, int>::type = 0>
inline To g4_arg_cast(From&& v) { return g4_to_m128d(v); }

template <typename To, typename From,
          typename std::enable_if<std::is_same<typename std::decay<To>::type, __m128i>::value, int>::type = 0>
inline To g4_arg_cast(From&& v) { return g4_to_m128i(v); }

template <typename To, typename From,
          typename std::enable_if<std::is_pointer<To>::value && std::is_floating_point<typename std::decay<From>::type>::value, int>::type = 0>
inline To g4_arg_cast(From&& v) { return reinterpret_cast<To>(static_cast<uintptr_t>(static_cast<intptr_t>(v))); }

template <typename To, typename From,
          typename std::enable_if<std::is_pointer<To>::value && !std::is_pointer<typename std::decay<From>::type>::value && !std::is_arithmetic<typename std::decay<From>::type>::value && !std::is_same<typename std::decay<From>::type, std::nullptr_t>::value && !std::is_convertible<From, To>::value, int>::type = 0>
inline To g4_arg_cast(From&& v) { return reinterpret_cast<To>(const_cast<void *>(static_cast<const void *>(&v))); }

template <typename To, typename From,
          typename std::enable_if<std::is_same<typename std::decay<To>::type, va_list>::value && std::is_convertible<From, To>::value, int>::type = 0>
inline To g4_arg_cast(From&& v) { return static_cast<To>(v); }

template <typename To, typename From,
          typename std::enable_if<std::is_same<typename std::decay<To>::type, va_list>::value && !std::is_convertible<From, To>::value, int>::type = 0>
inline To g4_arg_cast(From&& v) { (void)v; va_list _g4_va{}; return _g4_va; }

template <typename To, typename From,
          typename std::enable_if<!std::is_same<typename std::decay<From>::type, std::nullptr_t>::value && !std::is_same<typename std::decay<To>::type, va_list>::value && !g4_is_simd<typename std::decay<To>::type>::value && !(std::is_pointer<To>::value && (std::is_pointer<typename std::decay<From>::type>::value || std::is_integral<typename std::decay<From>::type>::value || std::is_floating_point<typename std::decay<From>::type>::value)) && !(std::is_pointer<To>::value && !std::is_pointer<typename std::decay<From>::type>::value && !std::is_arithmetic<typename std::decay<From>::type>::value && !std::is_convertible<From, To>::value) && !(std::is_arithmetic<To>::value && std::is_pointer<typename std::decay<From>::type>::value), int>::type = 0>
inline To g4_arg_cast(From&& v) { return (To)(v); }

template <typename From, typename To>
struct g4_can_pass {
    static constexpr bool value = std::is_convertible<From, To>::value;
};

// Call a real prototype with mismatched decompiler arguments, following x86 cdecl
// semantics: each argument is converted with g4_arg_cast, missing trailing arguments
// are passed as zero, and extra trailing arguments are dropped.
template <size_t I, typename T, typename Tup, typename std::enable_if<(I < std::tuple_size<Tup>::value), int>::type = 0>
inline T g4_adapt_arg(Tup &t) { return g4_arg_cast<T>(std::get<I>(t)); }
template <size_t I, typename T, typename Tup, typename std::enable_if<!(I < std::tuple_size<Tup>::value), int>::type = 0>
inline T g4_adapt_arg(Tup &) { return T(); }
template <typename R, typename... P, typename Tup, size_t... I>
inline R g4_adapt_call_impl(R (*f)(P...), Tup &t, std::index_sequence<I...>) { return f(g4_adapt_arg<I, P>(t)...); }
template <typename R, typename... P, typename... A>
inline R g4_adapt_call(R (*f)(P...), A&... a) {
    auto t = std::forward_as_tuple(a...);
    return g4_adapt_call_impl(f, t, std::index_sequence_for<P...>{});
}

inline void *opNew(size_t size, const std::nothrow_t *) noexcept { return ::operator new(size, std::nothrow); }
inline void opDelete(void *ptr, const std::nothrow_t *) noexcept { ::operator delete(ptr, std::nothrow); }
inline void *operator new[](std::size_t size, const std::nothrow_t *) noexcept { return ::operator new[](size, std::nothrow); }

union g4_glibc_pthread_cond_t {
    struct {
        int __lock;
        unsigned int __futex;
        uint64_t __total_seq;
        uint64_t __wakeup_seq;
        uint64_t __woken_seq;
        void *__mutex;
        unsigned int __nwaiters;
        unsigned int __broadcast_seq;
    };
    char __size[48];
    long long __align;
};
static_assert(sizeof(g4_glibc_pthread_cond_t) >= 48, "g4_glibc_pthread_cond_t layout");

struct GLUtesselator;
#ifndef _cxa_allocate_exception
#  define _cxa_allocate_exception __cxxabiv1::__cxa_allocate_exception
#endif
#ifndef _cxa_bad_cast
void _cxa_bad_cast();
#endif

// Portable 24-byte glibc x86 32-bit pthread_mutex_t memory layout for raw IDA offset accesses
union g4_glibc_pthread_mutex_t {
    struct {
        int __lock;
        unsigned int __count;
        int __owner;
        int __kind;
        unsigned int __nusers;
        int __spins;
    };
    char __size[24];
};
static_assert(sizeof(g4_glibc_pthread_mutex_t) == 24, "Expected 24-byte x86 mutex layout");

extern "C" {
int inflate(void *strm, int flush);
int inflateEnd(void *strm);
int inflateInit_(void *strm, const char *version, int stream_size);
int inflateReset(void *strm);
unsigned long crc32(unsigned long crc, const void *buf, unsigned int len);
extern const uint8_t tolower_tab_[516];
extern const uint8_t toupper_tab_[516];
extern int _page_size;
extern uint8_t algn_20D408C[64];
extern uint8_t algn_2033ECC[64];
extern uint8_t algn_1000002[64];
extern uint8_t algn_20C69F8[64];
extern uint8_t algn_20BB218[64];
extern uint8_t algn_20D2B70[64];
extern uint8_t algn_20D2CA4[64];
extern uint8_t algn_20D31FC[64];
extern uint8_t algn_20D3EB5[64];
extern uint8_t algn_20D4B14[64];
}
#if defined(__cplusplus)
template <typename S, typename B, typename L>
inline unsigned long crc32(S crc, B buf, L len) {
    return ::crc32(static_cast<unsigned long>(uintptr_t(crc)), reinterpret_cast<const void *>(uintptr_t(buf)), static_cast<unsigned int>(uintptr_t(len)));
}
#endif

struct g4_flex_val {
    uintptr_t v;
    g4_flex_val() : v(0) {}
    g4_flex_val(uintptr_t x) : v(x) {}
    template <typename T> g4_flex_val(T *p) : v(reinterpret_cast<uintptr_t>(p)) {}
    operator uintptr_t() const { return v; }
    template <typename T> explicit operator T*() const { return reinterpret_cast<T*>(v); }
};
struct Vehicle { uint8_t opaque[256]; };
struct NPC { uint8_t opaque[256]; };

#if defined(_LIBCPP_VERSION)
namespace __gnu_cxx {
template <typename Iterator, typename Container>
struct __normal_iterator {
    Iterator current;
};
}
#endif

// Cross-platform 32-bit pthread_mutex_t internal layout accessors
template <typename Ptr> inline int& G4_MUTEX_LOCK(Ptr m)   { return *reinterpret_cast<int *>(reinterpret_cast<uint8_t *>(uintptr_t(m)) + 0); }
template <typename Ptr> inline unsigned int& G4_MUTEX_COUNT(Ptr m)  { return *reinterpret_cast<unsigned int *>(reinterpret_cast<uint8_t *>(uintptr_t(m)) + 4); }
template <typename Ptr> inline int& G4_MUTEX_OWNER(Ptr m)  { return *reinterpret_cast<int *>(reinterpret_cast<uint8_t *>(uintptr_t(m)) + 8); }
template <typename Ptr> inline int& G4_MUTEX_KIND(Ptr m)   { return *reinterpret_cast<int *>(reinterpret_cast<uint8_t *>(uintptr_t(m)) + 12); }
template <typename Ptr> inline unsigned int& G4_MUTEX_NUSERS(Ptr m) { return *reinterpret_cast<unsigned int *>(reinterpret_cast<uint8_t *>(uintptr_t(m)) + 16); }
template <typename Ptr> inline int& G4_MUTEX_SPINS(Ptr m)  { return *reinterpret_cast<int *>(reinterpret_cast<uint8_t *>(uintptr_t(m)) + 20); }
template <typename Ptr> inline int& G4_MUTEX_ALIGN(Ptr m)  { return *reinterpret_cast<int *>(reinterpret_cast<uint8_t *>(uintptr_t(m)) + 0); }
template <typename Ptr> inline uint8_t *G4_MUTEX_SIZE(Ptr m) { return reinterpret_cast<uint8_t *>(uintptr_t(m)); }

// Batch 9: Portable intrinsics & ABI/C runtime wrappers
inline uint16_t __PAIR16__(uint8_t hi, uint8_t lo) {
    return static_cast<uint16_t>((static_cast<uint16_t>(hi) << 8) | lo);
}
template <typename T>
inline int16_t SHIWORD(const T& x) {
    return *(reinterpret_cast<const int16_t *>(&x) + (sizeof(T) >= 4 ? (sizeof(T) / 2 - 1) : 0));
}
inline double __FPREM__(double a, double b) { return std::fmod(a, b); }

#ifndef _cxa_throw
#  define _cxa_throw __cxxabiv1::__cxa_throw
#endif
#ifndef _cxa_rethrow
#  define _cxa_rethrow __cxxabiv1::__cxa_rethrow
#endif
#ifndef _cxa_get_globals
inline void *_cxa_get_globals() { return nullptr; }
#endif

typedef int (*__compar_fn_t)(const void *, const void *);

struct __jmp_buf_tag;
template <typename... Args>
inline auto __errno(Args...) -> decltype(::__errno()) { return ::__errno(); }
inline void longjmp(struct __jmp_buf_tag *env, int val) {
    ::longjmp(reinterpret_cast<long *>(env), val);
}
#if defined(__ANDROID__) || defined(__linux__)
#  include <sys/vfs.h>
#endif
extern "C" {
extern const uint8_t ctype_[516];
extern uint8_t algn_FFFF64[64];
}


#if defined(_WIN32)
template <typename T, typename Fn>
inline int g4_pthread_once(T once_ctrl, Fn init_fn) {
    volatile int *flag = g4_arg_cast<volatile int *>(once_ctrl);
    if (flag && __sync_bool_compare_and_swap(flag, 0, 1)) { init_fn(); }
    return 0;
}
#else
#include <pthread.h>
template <typename T, typename Fn>
inline int g4_pthread_once(T once_ctrl, Fn init_fn) {
    return pthread_once(reinterpret_cast<pthread_once_t *>(g4_arg_cast<void *>(once_ctrl)),
                        reinterpret_cast<void (*)(void)>(init_fn));
}
#endif

extern "C" {
int g4_compat_string_construct_from_cstr(void *dst, const char *s);
int g4_compat_string_construct_copy(void *dst, void *src);
int g4_compat_string_rep_destroy(void *rep);
int g4_compat_string_assign(void *dst, const void *src, size_t n);
int g4_compat_sa_string_substr(void *dst, const void *src, size_t pos, size_t n);
int g4_compat_string_assign_str(void *dst, void *src);
int g4_compat_string_compare_cstr(const void *a1, const char *s);
int g4_compat_string_compare_str(const void *a1, const void *a2);
void g4_compat_string_append(void *dst, const char *s, size_t n);
uint32_t *g4_compat_ostream_shl_int(void *os, int val);
}

namespace g4_std_compat {
template <typename A1, typename A2, typename... Rest>
inline int string_construct_from_cstr(A1 dst, A2 s, Rest...) {
    return ::g4_compat_string_construct_from_cstr(g4_arg_cast<void *>(dst), g4_arg_cast<const char *>(s));
}
template <typename A1, typename A2, typename... Rest>
inline int string_construct_copy(A1 dst, A2 src, Rest...) {
    return ::g4_compat_string_construct_copy(g4_arg_cast<void *>(dst), g4_arg_cast<void *>(src));
}
template <typename A1, typename... Rest>
inline int string_rep_destroy(A1 rep, Rest...) {
    return ::g4_compat_string_rep_destroy(g4_arg_cast<void *>(rep));
}
template <typename A1, typename A2, typename A3, typename... Rest>
inline int string_assign(A1 dst, A2 src, A3 n, Rest...) {
    return ::g4_compat_string_assign(g4_arg_cast<void *>(dst), g4_arg_cast<const void *>(src), static_cast<size_t>(g4_arg_cast<uintptr_t>(n)));
}
template <typename A1, typename A2>
inline int string_assign(A1 dst, A2 src) {
    return ::g4_compat_string_assign_str(g4_arg_cast<void *>(dst), g4_arg_cast<void *>(src));
}
template <typename... Args> inline uintptr_t map_index(Args...) { return 0; }
template <typename... Args> inline int deque_reallocate_map(Args...) { return 0; }
template <typename... Args> inline int vector_fill_insert(Args...) { return 0; }
template <typename A1, size_t N>
inline int string_compare(A1 a1, const char (&s)[N]) {
    return ::g4_compat_string_compare_cstr(g4_arg_cast<const void *>(a1), s);
}
template <typename A1, typename A2>
inline int string_compare(A1 a1, A2 a2) {
    return ::g4_compat_string_compare_str(g4_arg_cast<const void *>(a1), g4_arg_cast<const void *>(a2));
}
template <typename... Args> inline void deque_destroy(Args...) {}
template <typename... Args> inline void deque_push_back(Args...) {}
template <typename T, typename... Args> inline T vec_ctor(T dst, Args...) { if (dst) std::memset((void *)dst, 0, 12); return dst; }
template <typename T, typename A2> inline T basic_string_ctor(T dst, A2 src) {
    ::g4_compat_string_construct_copy(g4_arg_cast<void *>(dst), g4_arg_cast<void *>(src));
    return dst;
}
template <typename T, typename... Args> inline T basic_string_ctor(T dst, Args...) { return dst; }
template <typename T, typename A2> inline T basic_string_assign(T dst, A2 src) {
    ::g4_compat_string_assign_str(g4_arg_cast<void *>(dst), g4_arg_cast<void *>(src));
    return dst;
}
template <typename T, typename... Args> inline T basic_string_assign(T dst, Args...) { return dst; }
// std::basic_string<char, ..., glitch::core::SAllocator<char,0>>::substr (x86 0xe955d0):
// GNU COW layout, dst receives a new string. The x86 call passes (dst, src, pos, n);
// Hex-Rays dropped n at some call sites, in which case npos is used.
template <typename T, typename S, typename P, typename N>
inline T basic_string_substr(T dst, S src, P pos, N n) {
    ::g4_compat_sa_string_substr(g4_arg_cast<void *>(dst), g4_arg_cast<const void *>(src),
                                 static_cast<size_t>(g4_arg_cast<uintptr_t>(pos)), static_cast<size_t>(g4_arg_cast<uintptr_t>(n)));
    return dst;
}
template <typename T, typename S, typename P>
inline T basic_string_substr(T dst, S src, P pos) { return basic_string_substr(dst, src, pos, static_cast<size_t>(-1)); }
template <typename... Args> inline int op_assign(Args...) { return 0; }
template <typename... Args> inline int list_sort(Args...) { return 0; }
template <typename... Args> inline void **pair_ctor(Args...) { return nullptr; }
}

inline void g4_noop_dtor(const volatile void *) {}

// Batch 10B: additional alignment padding, dtor thunk, SSE scalar lane adapter
extern "C" { extern uint8_t algn_20D5BD0[64]; }
template <typename T>
inline void g4_dtor_thunk(void *p) { if (p) static_cast<T *>(p)->~T(); }
inline double &g4_m128d_ref(__m128d &v, int idx) { return reinterpret_cast<double *>(&v)[idx]; }
inline uint64_t g4_m128d_bits(__m128d v, int idx) { uint64_t b[2]; std::memcpy(b, &v, 16); return b[idx]; }
template <typename T, typename std::enable_if<std::is_integral<T>::value || std::is_floating_point<T>::value, int>::type = 0>
inline __m128 _mm_andnot_ps(__m128 a, T b) {
    uint32_t _v[4] = { static_cast<uint32_t>(static_cast<int>(b)), 0, 0, 0 };
    __m128 _rhs{};
    std::memcpy(&_rhs, _v, sizeof(_rhs));
    return _mm_andnot_ps(a, _rhs);
}

// Batch 11B: G4_PlatformLog non-cstr overload, atomSizeRoundUp, SSE adapters & external decls
template <typename TagT, typename FmtT, typename... Args,
          typename std::enable_if<!(std::is_convertible<TagT, const char *>::value && std::is_convertible<FmtT, const char *>::value), int>::type = 0>
inline void G4_PlatformLog(int prio, TagT tag, FmtT fmt, Args... args) {
    G4_PlatformLog(prio, g4_arg_cast<const char *>(tag), g4_arg_cast<const char *>(fmt), args...);
}
// Fortify-safe raw strcpy helper for decompiled stack-overlaid char buffers
template <typename T>
inline char *g4_strcpy_raw(T dst, const char *src) {
    volatile uintptr_t p = (uintptr_t)dst;
    return strcpy((char *)p, src);
}
namespace hkcdPlanarGeometryPrimitives {
    template <unsigned long long N0> struct Collection {
        uint8_t opaque[256];
        static uintptr_t Members;
    };
    template <unsigned long long N0> uintptr_t Collection<N0>::Members = 0;
}

template <typename T>
inline int atomSizeRoundUp(T x) { return (static_cast<int>(x) + 15) & ~15; }

#if defined(__SSE__)
template <typename A, typename B,
          typename std::enable_if<!(std::is_same<typename std::decay<A>::type, __m128>::value && std::is_same<typename std::decay<B>::type, __m128>::value), int>::type = 0>
inline __m128 _mm_unpacklo_ps(A a, B b) { return ::_mm_unpacklo_ps(g4_to_m128(a), g4_to_m128(b)); }
template <typename A, typename B,
          typename std::enable_if<!(std::is_same<typename std::decay<A>::type, __m128>::value && std::is_same<typename std::decay<B>::type, __m128>::value), int>::type = 0>
inline __m128 _mm_unpackhi_ps(A a, B b) { return ::_mm_unpackhi_ps(g4_to_m128(a), g4_to_m128(b)); }
#endif
template <typename A, typename B,
          typename std::enable_if<!(std::is_same<typename std::decay<A>::type, __m128>::value && std::is_same<typename std::decay<B>::type, __m128>::value), int>::type = 0>
inline __m128 _mm_xor_ps(A a, B b) { return _mm_xor_ps(g4_to_m128(a), g4_to_m128(b)); }

extern "C" {
int lsof(...);
void *jpeg_std_error(void *);
void jinit_d_post_controller(...);
void png_set_read_fn(...);
int inflateInit2_(...);
int deflateInit_(...);
int deflate(...);
int deflateEnd(...);
void RAND_seed(const void *, int);
extern uint8_t algn_98967A[64];
extern uint8_t algn_20C1BFC[64];
unsigned long compressBound(unsigned long);
int compress(unsigned char *, unsigned long *, const unsigned char *, unsigned long);
int uncompress(unsigned char *, unsigned long *, const unsigned char *, unsigned long);
#if defined(_WIN32)
struct hostent *gethostbyname(const char *);
#endif
int (**RAND_SSLeay(void))(int, int);
void *SSLv2_client_method(void);
void *SSLv3_client_method(void);
void *TLSv1_client_method(void);
void *SSLv23_client_method(void);
void _cxa_get_globals_fast(void);
void shadow_DES_check_key(int);
void Unwind_DeleteException(void *);
int deflateReset(void *);
int deflateInit2_(void *, int, int, int, int, int, const char *, int);
const char *zError(int);
const unsigned long *get_crc_table(void);
const char *zlibVersion(void);
void *OPENSSL_gmtime(const time_t *, void *);
void OPENSSL_cpuid_setup(void);
void *SSLv23_method(void);
void png_set_write_fn(...);
void Curl_pgrsDone(void *);
int Curl_proxyCONNECT(void *, int, ...);
extern uintptr_t elf_hash_chain;
void *SSLv2_method(void);
void *SSLv3_method(void);
void *TLSv1_method(void);
void *SSLv2_server_method(void);
void *SSLv3_server_method(void);
void *TLSv1_server_method(void);
}
template <typename T>
inline int Curl_proxyCONNECT(void *conn, int tunnelsocket, T host, int port) {
    return ::Curl_proxyCONNECT(conn, tunnelsocket, reinterpret_cast<const char *>(uintptr_t(host)), port);
}
inline uint8_t abs8(int x) { int8_t v = static_cast<int8_t>(x); return static_cast<uint8_t>(v < 0 ? -v : v); }
inline uint16_t abs16(int x) { int16_t v = static_cast<int16_t>(x); return static_cast<uint16_t>(v < 0 ? -v : v); }
#ifndef __SET_PAIR__
#define __SET_PAIR__(hi, lo, val) do { uint64_t _g4v = static_cast<uint64_t>(val); (lo) = static_cast<decltype(lo)>(static_cast<uint32_t>(_g4v)); (hi) = static_cast<decltype(hi)>(static_cast<uint32_t>(_g4v >> 32)); } while (0)
#endif
#if defined(_WIN32)
inline void *dlopen(const char *, int) { return nullptr; }
inline void *dlsym(void *, const char *) { return nullptr; }
inline const char *dlerror(void) { return ""; }
inline int dlclose(void *) { return 0; }
inline int dladdr(const void *, void *) { return 0; }
inline void syslog(int, const char *, ...) {}
inline void *getpwuid(unsigned int) { return nullptr; }
#endif
extern "C" {
int curl_easy_setopt(int a1, int a2, ...);
}
template <typename... Args> inline void (*bsd_signal(int sig, Args...))(int) { return 0; }
// zlib compress/uncompress adapters for decompiled call sites passing raw integers/pointers
template <typename D, typename DL, typename S, typename SL,
          typename std::enable_if<!(std::is_convertible<D, unsigned char *>::value && std::is_convertible<DL, unsigned long *>::value && std::is_convertible<S, const unsigned char *>::value), int>::type = 0>
inline int compress(D dst, DL dlen, S src, SL slen) {
    return ::compress(g4_arg_cast<unsigned char *>(dst), g4_arg_cast<unsigned long *>(dlen), g4_arg_cast<const unsigned char *>(src), static_cast<unsigned long>(slen));
}
template <typename D, typename DL, typename S, typename SL,
          typename std::enable_if<!(std::is_convertible<D, unsigned char *>::value && std::is_convertible<DL, unsigned long *>::value && std::is_convertible<S, const unsigned char *>::value), int>::type = 0>
inline int uncompress(D dst, DL dlen, S src, SL slen) {
    return ::uncompress(g4_arg_cast<unsigned char *>(dst), g4_arg_cast<unsigned long *>(dlen), g4_arg_cast<const unsigned char *>(src), static_cast<unsigned long>(slen));
}
template <typename T, typename... Args,
          typename std::enable_if<!std::is_convertible<T, int>::value, int>::type = 0>
inline int curl_easy_setopt(T a1, int a2, Args... args) {
    return ::curl_easy_setopt(g4_arg_cast<int>(a1), a2, args...);
}
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, const char *>::value && std::is_convertible<B, const char *>::value), int>::type = 0>
inline int strcmp(A a, B b) {
    return ::strcmp(g4_arg_cast<const char *>(a), g4_arg_cast<const char *>(b));
}
extern void opDelete(void *a1);
template <typename T,
          typename std::enable_if<std::is_pointer<T>::value && std::is_const<typename std::remove_pointer<T>::type>::value, int>::type = 0>
inline void opDelete(T p) {
    ::opDelete(const_cast<void *>(static_cast<const void *>(p)));
}
template <typename T,
          typename std::enable_if<!std::is_pointer<T>::value, int>::type = 0>
inline void opDelete(T v) {
    ::opDelete(g4_arg_cast<void *>(v));
}

// Batch 14B: SFINAE C++14 adapters for libc, POSIX, AAsset, and GLES2 calls
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, const void *>::value && std::is_convertible<B, const void *>::value), int>::type = 0>
inline int memcmp(A a, B b, size_t n) {
    return ::memcmp(g4_arg_cast<const void *>(a), g4_arg_cast<const void *>(b), n);
}
template <typename A,
          typename std::enable_if<!std::is_convertible<A, const char *>::value, int>::type = 0>
inline size_t strlen(A a) {
    return ::strlen(g4_arg_cast<const char *>(a));
}
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, void *>::value && std::is_convertible<B, const void *>::value), int>::type = 0>
inline void *memcpy(A dst, B src, size_t n) {
    return ::memcpy(g4_arg_cast<void *>(dst), g4_arg_cast<const void *>(src), n);
}
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, char *>::value && std::is_convertible<B, const char *>::value), int>::type = 0>
inline char *strcpy(A dst, B src) {
    return ::strcpy(g4_arg_cast<char *>(dst), g4_arg_cast<const char *>(src));
}
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, const char *>::value && std::is_convertible<B, const char *>::value), int>::type = 0>
inline int strncmp(A a, B b, size_t n) {
    return ::strncmp(g4_arg_cast<const char *>(a), g4_arg_cast<const char *>(b), n);
}
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, const char *>::value && std::is_convertible<B, const char *>::value), int>::type = 0>
inline char *strstr(A a, B b) {
    return const_cast<char *>(::strstr(g4_arg_cast<const char *>(a), g4_arg_cast<const char *>(b)));
}
template <typename A, typename Fmt, typename... Args,
          typename std::enable_if<!(std::is_convertible<A, char *>::value && std::is_convertible<Fmt, const char *>::value), int>::type = 0>
inline int sprintf(A dst, Fmt fmt, Args... args) {
    return ::sprintf(g4_arg_cast<char *>(dst), g4_arg_cast<const char *>(fmt), args...);
}
template <typename A, typename Fmt, typename... Args,
          typename std::enable_if<!(std::is_convertible<A, char *>::value && std::is_convertible<Fmt, const char *>::value), int>::type = 0>
inline int snprintf(A dst, size_t n, Fmt fmt, Args... args) {
    return ::snprintf(g4_arg_cast<char *>(dst), n, g4_arg_cast<const char *>(fmt), args...);
}
template <typename A, typename Fmt, typename VA,
          typename std::enable_if<!(std::is_convertible<A, char *>::value && std::is_convertible<Fmt, const char *>::value && std::is_convertible<VA, va_list>::value), int>::type = 0>
inline int vsprintf(A dst, Fmt fmt, VA ap) {
    return ::vsprintf(g4_arg_cast<char *>(dst), g4_arg_cast<const char *>(fmt), g4_arg_cast<va_list>(ap));
}
template <typename A, typename Fmt, typename VA,
          typename std::enable_if<!(std::is_convertible<A, char *>::value && std::is_convertible<Fmt, const char *>::value && std::is_convertible<VA, va_list>::value), int>::type = 0>
inline int vsnprintf(A dst, size_t n, Fmt fmt, VA ap) {
    return ::vsnprintf(g4_arg_cast<char *>(dst), n, g4_arg_cast<const char *>(fmt), g4_arg_cast<va_list>(ap));
}
template <typename A, typename B,
          typename std::enable_if<!(std::is_arithmetic<A>::value && std::is_arithmetic<B>::value), int>::type = 0>
inline float fminf(A a, B b) {
    return ::fminf(g4_arg_cast<float>(a), g4_arg_cast<float>(b));
}
#if defined(__ANDROID__) || defined(__linux__) || defined(__APPLE__)
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, pthread_mutex_t *>::value && std::is_convertible<B, const pthread_mutexattr_t *>::value), int>::type = 0>
inline int pthread_mutex_init(A m, B attr) {
    return ::pthread_mutex_init(g4_arg_cast<pthread_mutex_t *>(m), g4_arg_cast<const pthread_mutexattr_t *>(attr));
}
#endif
#if defined(__ANDROID__)
template <typename A, typename B, typename C,
          typename std::enable_if<!(std::is_convertible<A, const char *>::value && std::is_convertible<B, const char *>::value && std::is_convertible<C, const char *>::value), int>::type = 0>
inline void __assert2(A file, int line, B func, C msg) {
    ::__assert2(g4_arg_cast<const char *>(file), line, g4_arg_cast<const char *>(func), g4_arg_cast<const char *>(msg));
}
#endif
template <typename A,
          typename std::enable_if<!std::is_convertible<A, AAsset *>::value, int>::type = 0>
inline void AAsset_close(A a) {
    ::AAsset_close(g4_arg_cast<AAsset *>(a));
}
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, AAssetManager *>::value && std::is_convertible<B, const char *>::value), int>::type = 0>
inline AAsset *AAssetManager_open(A mgr, B fname, int mode) {
    return static_cast<AAsset *>(::AAssetManager_open(g4_arg_cast<AAssetManager *>(mgr), g4_arg_cast<const char *>(fname), mode));
}
template <typename A,
          typename std::enable_if<!std::is_convertible<A, AAsset *>::value, int>::type = 0>
inline off_t AAsset_seek(A a, off_t off, int whence) {
    return ::AAsset_seek(g4_arg_cast<AAsset *>(a), off, whence);
}
#if defined(__ANDROID__)
template <typename A,
          typename std::enable_if<!std::is_convertible<A, AAssetDir *>::value, int>::type = 0>
inline void AAssetDir_close(A d) {
    ::AAssetDir_close(g4_arg_cast<AAssetDir *>(d));
}
#endif
template <typename A,
          typename std::enable_if<!std::is_convertible<A, AAsset *>::value, int>::type = 0>
inline off_t AAsset_getLength(A a) {
    return ::AAsset_getLength(g4_arg_cast<AAsset *>(a));
}
template <typename A,
          typename std::enable_if<!std::is_arithmetic<A>::value, int>::type = 0>
inline float logf(A a) {
    return ::logf(g4_arg_cast<float>(a));
}
template <typename A,
          typename std::enable_if<!std::is_convertible<A, const wchar_t *>::value, int>::type = 0>
inline size_t wcslen(A a) {
    return ::wcslen(g4_arg_cast<const wchar_t *>(a));
}
template <typename A>
inline char *strptime(A a) {
#if defined(_WIN32)
    (void)a;
    return nullptr;
#else
    static struct tm _g4_tm{};
    return ::strptime(g4_arg_cast<const char *>(a), "%Y-%m-%dT%H:%M:%S", &_g4_tm);
#endif
}
inline void glUniform1f(GLint loc) { ::glUniform1f(loc, 0.0f); }
inline void glUniform3fv(GLint loc) { static const GLfloat z[3] = {0}; ::glUniform3fv(loc, 0, z); }
inline void glUniform4fv(GLint loc) { static const GLfloat z[4] = {0}; ::glUniform4fv(loc, 0, z); }
inline void glUniformMatrix4fv(GLint loc) { static const GLfloat m[16] = {0}; ::glUniformMatrix4fv(loc, 0, 0, m); }
template <typename A,
          typename std::enable_if<!std::is_convertible<A, const GLfloat *>::value, int>::type = 0>
inline void glUniform3fv(GLint loc, GLsizei count, A val) {
    ::glUniform3fv(loc, count, g4_arg_cast<const GLfloat *>(val));
}
template <typename A,
          typename std::enable_if<!std::is_convertible<A, const GLfloat *>::value, int>::type = 0>
inline void glUniform4fv(GLint loc, GLsizei count, A val) {
    ::glUniform4fv(loc, count, g4_arg_cast<const GLfloat *>(val));
}
template <typename A,
          typename std::enable_if<!std::is_convertible<A, const GLfloat *>::value, int>::type = 0>
inline void glUniformMatrix4fv(GLint loc, GLsizei count, uint8_t transpose, A val) {
    ::glUniformMatrix4fv(loc, count, transpose, g4_arg_cast<const GLfloat *>(val));
}
#if defined(__ANDROID__) || defined(GL_ES_VERSION_2_0)
inline void glUniform1iv(GLint loc) { static const GLint z[1] = {0}; ::glUniform1iv(loc, 0, z); }
inline void glUniform2iv(GLint loc) { static const GLint z[2] = {0}; ::glUniform2iv(loc, 0, z); }
inline void glUniform3iv(GLint loc) { static const GLint z[3] = {0}; ::glUniform3iv(loc, 0, z); }
inline void glUniform4iv(GLint loc) { static const GLint z[4] = {0}; ::glUniform4iv(loc, 0, z); }
inline void glUniform1fv(GLint loc) { static const GLfloat z[1] = {0}; ::glUniform1fv(loc, 0, z); }
inline void glUniform2fv(GLint loc) { static const GLfloat z[2] = {0}; ::glUniform2fv(loc, 0, z); }
inline void glUniformMatrix2fv(GLint loc) { static const GLfloat m[4] = {0}; ::glUniformMatrix2fv(loc, 0, 0, m); }
inline void glUniformMatrix3fv(GLint loc) { static const GLfloat m[9] = {0}; ::glUniformMatrix3fv(loc, 0, 0, m); }
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, GLint>::value && std::is_convertible<B, GLint>::value), int>::type = 0>
inline void glUniform1i(A loc, B val) { ::glUniform1i(g4_arg_cast<GLint>(loc), g4_arg_cast<GLint>(val)); }
template <typename A,
          typename std::enable_if<!std::is_convertible<A, GLuint>::value, int>::type = 0>
inline void glEnableVertexAttribArray(A a) { ::glEnableVertexAttribArray(g4_arg_cast<GLuint>(a)); }
template <typename A,
          typename std::enable_if<!std::is_convertible<A, GLuint>::value, int>::type = 0>
inline void glDisableVertexAttribArray(A a) { ::glDisableVertexAttribArray(g4_arg_cast<GLuint>(a)); }
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, GLenum>::value && std::is_convertible<B, GLuint>::value), int>::type = 0>
inline void glBindFramebuffer(A target, B fb) { ::glBindFramebuffer(g4_arg_cast<GLenum>(target), g4_arg_cast<GLuint>(fb)); }
template <typename A,
          typename std::enable_if<!std::is_convertible<A, GLenum>::value, int>::type = 0>
inline GLenum glCheckFramebufferStatus(A target) { return ::glCheckFramebufferStatus(g4_arg_cast<GLenum>(target)); }
template <typename A,
          typename std::enable_if<!std::is_convertible<A, GLenum>::value, int>::type = 0>
inline GLuint glCreateShader(A type) { return ::glCreateShader(g4_arg_cast<GLenum>(type)); }
template <typename A, typename B, typename C,
          typename std::enable_if<!(std::is_convertible<A, GLuint>::value && std::is_convertible<B, GLenum>::value && std::is_convertible<C, GLint *>::value), int>::type = 0>
inline void glGetShaderiv(A shader, B pname, C params) {
    ::glGetShaderiv(g4_arg_cast<GLuint>(shader), g4_arg_cast<GLenum>(pname), g4_arg_cast<GLint *>(params));
}
template <typename A, typename B, typename C, typename D,
          typename std::enable_if<!(std::is_convertible<A, GLuint>::value && std::is_convertible<B, GLsizei>::value && std::is_convertible<C, GLsizei *>::value && std::is_convertible<D, GLchar *>::value), int>::type = 0>
inline void glGetShaderSource(A shader, B bufsize, C length, D source) {
    ::glGetShaderSource(g4_arg_cast<GLuint>(shader), g4_arg_cast<GLsizei>(bufsize), g4_arg_cast<GLsizei *>(length), g4_arg_cast<GLchar *>(source));
}
template <typename A, typename B, typename C, typename D,
          typename std::enable_if<!(std::is_convertible<A, GLuint>::value && std::is_convertible<B, GLsizei>::value && std::is_convertible<C, GLsizei *>::value && std::is_convertible<D, GLchar *>::value), int>::type = 0>
inline void glGetShaderInfoLog(A shader, B bufsize, C length, D infolog) {
    ::glGetShaderInfoLog(g4_arg_cast<GLuint>(shader), g4_arg_cast<GLsizei>(bufsize), g4_arg_cast<GLsizei *>(length), g4_arg_cast<GLchar *>(infolog));
}
// Pre-B44: additional GLES2 SFINAE adapters for IDA-typed arguments
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, GLenum>::value && std::is_convertible<B, GLuint>::value), int>::type = 0>
inline void glBindBuffer(A target, B buf) { ::glBindBuffer(g4_arg_cast<GLenum>(target), g4_arg_cast<GLuint>(buf)); }
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, GLsizei>::value && std::is_convertible<B, GLuint *>::value), int>::type = 0>
inline void glGenBuffers(A n, B bufs) { ::glGenBuffers(g4_arg_cast<GLsizei>(n), g4_arg_cast<GLuint *>(bufs)); }
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, GLsizei>::value && std::is_convertible<B, const GLuint *>::value), int>::type = 0>
inline void glDeleteBuffers(A n, B bufs) { ::glDeleteBuffers(g4_arg_cast<GLsizei>(n), g4_arg_cast<const GLuint *>(bufs)); }
template <typename A, typename B, typename C, typename D,
          typename std::enable_if<!(std::is_convertible<A, GLenum>::value && std::is_convertible<B, GLsizeiptr>::value && std::is_convertible<C, const void *>::value && std::is_convertible<D, GLenum>::value), int>::type = 0>
inline void glBufferData(A t, B sz, C data, D usage) { ::glBufferData(g4_arg_cast<GLenum>(t), g4_arg_cast<GLsizeiptr>(sz), g4_arg_cast<const void *>(data), g4_arg_cast<GLenum>(usage)); }
template <typename A> inline void glBufferSubData(A target) { (void)target; }
template <typename A, typename B, typename C, typename D,
          typename std::enable_if<!(std::is_convertible<A, GLenum>::value && std::is_convertible<B, GLintptr>::value && std::is_convertible<C, GLsizeiptr>::value && std::is_convertible<D, const void *>::value), int>::type = 0>
inline void glBufferSubData(A t, B off, C sz, D data) { ::glBufferSubData(g4_arg_cast<GLenum>(t), g4_arg_cast<GLintptr>(off), g4_arg_cast<GLsizeiptr>(sz), g4_arg_cast<const void *>(data)); }
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, GLsizei>::value && std::is_convertible<B, const GLuint *>::value), int>::type = 0>
inline void glDeleteFramebuffers(A n, B fbs) { ::glDeleteFramebuffers(g4_arg_cast<GLsizei>(n), g4_arg_cast<const GLuint *>(fbs)); }
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, GLsizei>::value && std::is_convertible<B, GLuint *>::value), int>::type = 0>
inline void glGenRenderbuffers(A n, B rbs) { ::glGenRenderbuffers(g4_arg_cast<GLsizei>(n), g4_arg_cast<GLuint *>(rbs)); }
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, GLsizei>::value && std::is_convertible<B, const GLuint *>::value), int>::type = 0>
inline void glDeleteRenderbuffers(A n, B rbs) { ::glDeleteRenderbuffers(g4_arg_cast<GLsizei>(n), g4_arg_cast<const GLuint *>(rbs)); }
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, GLenum>::value && std::is_convertible<B, GLuint>::value), int>::type = 0>
inline void glBindRenderbuffer(A t, B rb) { ::glBindRenderbuffer(g4_arg_cast<GLenum>(t), g4_arg_cast<GLuint>(rb)); }
template <typename A, typename B, typename C, typename D,
          typename std::enable_if<!(std::is_convertible<A, GLenum>::value && std::is_convertible<B, GLenum>::value && std::is_convertible<C, GLsizei>::value && std::is_convertible<D, GLsizei>::value), int>::type = 0>
inline void glRenderbufferStorage(A t, B fmt, C w, D h) { ::glRenderbufferStorage(g4_arg_cast<GLenum>(t), g4_arg_cast<GLenum>(fmt), g4_arg_cast<GLsizei>(w), g4_arg_cast<GLsizei>(h)); }
template <typename A, typename B, typename C, typename D, typename E,
          typename std::enable_if<!(std::is_convertible<A, GLenum>::value && std::is_convertible<B, GLenum>::value && std::is_convertible<C, GLenum>::value && std::is_convertible<D, GLuint>::value && std::is_convertible<E, GLint>::value), int>::type = 0>
inline void glFramebufferTexture2D(A t, B att, C tt, D tex, E lvl) { ::glFramebufferTexture2D(g4_arg_cast<GLenum>(t), g4_arg_cast<GLenum>(att), g4_arg_cast<GLenum>(tt), g4_arg_cast<GLuint>(tex), g4_arg_cast<GLint>(lvl)); }
template <typename A, typename B, typename C, typename D,
          typename std::enable_if<!(std::is_convertible<A, GLenum>::value && std::is_convertible<B, GLenum>::value && std::is_convertible<C, GLenum>::value && std::is_convertible<D, GLuint>::value), int>::type = 0>
inline void glFramebufferRenderbuffer(A t, B att, C rbt, D rb) { ::glFramebufferRenderbuffer(g4_arg_cast<GLenum>(t), g4_arg_cast<GLenum>(att), g4_arg_cast<GLenum>(rbt), g4_arg_cast<GLuint>(rb)); }
template <typename A, typename B, typename C, typename D, typename E, typename F,
          typename std::enable_if<!(std::is_convertible<A, GLuint>::value && std::is_convertible<B, GLint>::value && std::is_convertible<C, GLenum>::value && std::is_convertible<D, GLboolean>::value && std::is_convertible<E, GLsizei>::value && std::is_convertible<F, const void *>::value), int>::type = 0>
inline void glVertexAttribPointer(A i, B sz, C ty, D norm, E st, F ptr) { ::glVertexAttribPointer(g4_arg_cast<GLuint>(i), g4_arg_cast<GLint>(sz), g4_arg_cast<GLenum>(ty), g4_arg_cast<GLboolean>(norm), g4_arg_cast<GLsizei>(st), g4_arg_cast<const void *>(ptr)); }
template <typename A, typename B, typename C,
          typename std::enable_if<!(std::is_convertible<A, GLuint>::value && std::is_convertible<B, GLenum>::value && std::is_convertible<C, GLint *>::value), int>::type = 0>
inline void glGetProgramiv(A p, B pn, C out) { ::glGetProgramiv(g4_arg_cast<GLuint>(p), g4_arg_cast<GLenum>(pn), g4_arg_cast<GLint *>(out)); }
template <typename A, typename B, typename C, typename D,
          typename std::enable_if<!(std::is_convertible<A, GLuint>::value && std::is_convertible<B, GLsizei>::value && std::is_convertible<C, GLsizei *>::value && std::is_convertible<D, GLchar *>::value), int>::type = 0>
inline void glGetProgramInfoLog(A p, B bs, C len, D log) { ::glGetProgramInfoLog(g4_arg_cast<GLuint>(p), g4_arg_cast<GLsizei>(bs), g4_arg_cast<GLsizei *>(len), g4_arg_cast<GLchar *>(log)); }
inline void glGetActiveAttrib(GLuint) {}
template <typename A, typename B, typename C, typename D, typename E, typename F, typename G,
          typename std::enable_if<!(std::is_convertible<A, GLuint>::value && std::is_convertible<B, GLuint>::value && std::is_convertible<C, GLsizei>::value && std::is_convertible<D, GLsizei *>::value && std::is_convertible<E, GLint *>::value && std::is_convertible<F, GLenum *>::value && std::is_convertible<G, GLchar *>::value), int>::type = 0>
inline void glGetActiveAttrib(A p, B i, C bs, D len, E sz, F ty, G nm) { ::glGetActiveAttrib(g4_arg_cast<GLuint>(p), g4_arg_cast<GLuint>(i), g4_arg_cast<GLsizei>(bs), g4_arg_cast<GLsizei *>(len), g4_arg_cast<GLint *>(sz), g4_arg_cast<GLenum *>(ty), g4_arg_cast<GLchar *>(nm)); }
inline GLint glGetAttribLocation(GLuint) { return -1; }
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, GLuint>::value && std::is_convertible<B, const GLchar *>::value), int>::type = 0>
inline GLint glGetAttribLocation(A p, B name) { return ::glGetAttribLocation(g4_arg_cast<GLuint>(p), g4_arg_cast<const GLchar *>(name)); }
template <typename A, typename B, typename C, typename D, typename E, typename F, typename G,
          typename std::enable_if<!(std::is_convertible<A, GLuint>::value && std::is_convertible<B, GLuint>::value && std::is_convertible<C, GLsizei>::value && std::is_convertible<D, GLsizei *>::value && std::is_convertible<E, GLint *>::value && std::is_convertible<F, GLenum *>::value && std::is_convertible<G, GLchar *>::value), int>::type = 0>
inline void glGetActiveUniform(A p, B i, C bs, D len, E sz, F ty, G nm) { ::glGetActiveUniform(g4_arg_cast<GLuint>(p), g4_arg_cast<GLuint>(i), g4_arg_cast<GLsizei>(bs), g4_arg_cast<GLsizei *>(len), g4_arg_cast<GLint *>(sz), g4_arg_cast<GLenum *>(ty), g4_arg_cast<GLchar *>(nm)); }
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, GLuint>::value && std::is_convertible<B, const GLchar *>::value), int>::type = 0>
inline GLint glGetUniformLocation(A p, B name) { return ::glGetUniformLocation(g4_arg_cast<GLuint>(p), g4_arg_cast<const GLchar *>(name)); }
#endif
template <typename A, typename B, typename C,
          typename std::enable_if<!(std::is_convertible<A, wchar_t *>::value && std::is_convertible<B, const wchar_t *>::value), int>::type = 0>
inline wchar_t *wmemcpy(A dst, B src, C n) { return ::wmemcpy(g4_arg_cast<wchar_t *>(dst), g4_arg_cast<const wchar_t *>(src), g4_arg_cast<size_t>(n)); }
#if defined(__ANDROID__)
template <typename A,
          typename std::enable_if<!std::is_convertible<A, AAsset *>::value, int>::type = 0>
inline off_t AAsset_getRemainingLength(A asset) {
    return ::AAsset_getRemainingLength(g4_arg_cast<AAsset *>(asset));
}
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, AAsset *>::value && std::is_convertible<B, void *>::value), int>::type = 0>
inline int AAsset_read(A asset, B buf, size_t count) {
    return ::AAsset_read(g4_arg_cast<AAsset *>(asset), g4_arg_cast<void *>(buf), count);
}
template <typename P, typename T, typename Fmt, typename VA,
          typename std::enable_if<!(std::is_convertible<P, int>::value && std::is_convertible<T, const char *>::value && std::is_convertible<Fmt, const char *>::value && std::is_convertible<VA, va_list>::value), int>::type = 0>
inline int __android_log_vprint(P prio, T tag, Fmt fmt, VA ap) {
    return ::__android_log_vprint(g4_arg_cast<int>(prio), g4_arg_cast<const char *>(tag), g4_arg_cast<const char *>(fmt), g4_arg_cast<va_list>(ap));
}
#endif
template <typename A, typename B,
          typename std::enable_if<!(std::is_arithmetic<A>::value && std::is_arithmetic<B>::value), int>::type = 0>
inline double pow(A a, B b) { return ::pow(g4_arg_cast<double>(a), g4_arg_cast<double>(b)); }
template <typename A, typename B, typename C, typename... Args,
          typename std::enable_if<!std::is_arithmetic<C>::value, int>::type = 0>
inline float logf(A a, B b, C c, Args...) { (void)a; (void)b; (void)c; return 0.0f; }
template <typename T,
          typename std::enable_if<!std::is_convertible<T, void *>::value, int>::type = 0>
inline int inflateEnd(T s) { return ::inflateEnd(g4_arg_cast<void *>(s)); }
template <typename T,
          typename std::enable_if<!std::is_convertible<T, void *>::value, int>::type = 0>
inline void *jpeg_std_error(T s) { return ::jpeg_std_error(g4_arg_cast<void *>(s)); }
template <typename T,
          typename std::enable_if<!std::is_convertible<T, void *>::value, int>::type = 0>
inline void Unwind_DeleteException(T s) { ::Unwind_DeleteException(g4_arg_cast<void *>(s)); }

// Batch 15B: extra g4_std_compat STL stubs & global lib adapters
namespace g4_std_compat {
template <typename... Args> inline int vector_range_insert(Args...) { return 0; }
template <typename... Args> inline int vector_insert_aux(Args...) { return 0; }
template <typename... Args> inline int convert_to_v(Args...) { return 0; }
template <typename... Args> inline int unguarded_partition_pivot(Args...) { return 0; }
template <typename... Args> inline int inplace_stable_sort(Args...) { return 0; }
template <typename... Args> inline int unguarded_linear_insert(Args...) { return 0; }
template <typename... Args> inline int move_merge(Args...) { return 0; }
template <typename A1, typename A2, typename A3, typename... Rest>
inline void string_append(A1 dst, A2 s, A3 n, Rest...) {
    ::g4_compat_string_append(g4_arg_cast<void *>(dst), g4_arg_cast<const char *>(s), static_cast<size_t>(g4_arg_cast<uintptr_t>(n)));
}
template <typename... Args> inline int vector_insert(Args...) { return 0; }
uint32_t *ostream_flush(uint32_t *a1);
int *ostream_write(int *a1, int a2, int a3);
template <typename S, typename P, typename N,
          typename std::enable_if<!(g4_can_pass<S, int *>::value && g4_can_pass<P, int>::value && g4_can_pass<N, int>::value), int>::type = 0>
inline int *ostream_write(S s, P p, N n) { return ostream_write(g4_arg_cast<int *>(s), g4_arg_cast<int>(p), g4_arg_cast<int>(n)); }
template <typename S, typename std::enable_if<!g4_can_pass<S, uint32_t *>::value, int>::type = 0>
inline uint32_t *ostream_flush(S s) { return ostream_flush(g4_arg_cast<uint32_t *>(s)); }
inline void g4_intrusive_assign(void *dst, const void *src) {
    if (dst && src) *reinterpret_cast<void **>(dst) = *reinterpret_cast<void *const *>(src);
}
inline void g4_noop(const void *) {}
char *deque_glotv3_event_push_back(void **a1, uint32_t *a2);
void deque_glotv3_event_pop_back(void *self);
void *deque_glotv3_event_reserve_front(void *a1, void *a2, unsigned int a3);
void *deque_glotv3_event_reserve_back(void *a1, void *a2, unsigned int a3);
void *deque_glotv3_event_insert_aux(void *a1, unsigned int *a2, __int128 *a3, __int128 *a4, unsigned int a5);
template <typename A1, typename A2>
inline uint32_t *ostream_shl_int(A1 os, A2 val) {
    return ::g4_compat_ostream_shl_int(g4_arg_cast<void *>(os), g4_arg_cast<int>(val));
}
}


// Batch 17B: cross-platform intrinsics, libstdc++ sort shims, and helper decls
typedef unsigned long TMLongCard;
inline int _popcountsi2(unsigned int x) { return __builtin_popcount(x); }
inline int __fpclassifyd(uint32_t lo, uint32_t hi) {
    uint64_t bits = static_cast<uint64_t>(lo) | (static_cast<uint64_t>(hi) << 32);
    double d = 0.0;
    std::memcpy(&d, &bits, sizeof(d));
    if (std::isnan(d)) return 2;
    if (std::isinf(d)) return 1;
    if (d == 0.0) return 16;
    if (std::fpclassify(d) == FP_SUBNORMAL) return 8;
    return 4;
}
#if defined(_LIBCPP_VERSION)
namespace std {
template <typename Iter, typename Diff, typename Comp>
inline void __introsort_loop(Iter first, Iter last, Diff, Comp comp) { std::sort(first, last, comp); }
template <typename Iter, typename Comp>
inline void __insertion_sort(Iter first, Iter last, Comp comp) { std::sort(first, last, comp); }
template <typename Iter, typename Diff>
inline void __introsort_loop(Iter first, Iter last, Diff) { std::sort(first, last); }
template <typename Iter>
inline void __insertion_sort(Iter first, Iter last) { std::sort(first, last); }
template <typename Iter, typename Ptr, typename Diff, typename Comp>
inline void __stable_sort_adaptive(Iter first, Iter last, Ptr, Diff, Comp comp) { std::stable_sort(first, last, comp); }
template <typename Iter, typename Ptr, typename Diff, typename Comp,
          typename A1, typename A2, typename A3, typename A4, typename A5,
          typename std::enable_if<!std::is_convertible<A1, Iter>::value, int>::type = 0>
inline void __stable_sort_adaptive(A1, A2, A3, A4, A5) {}
template <typename Iter, typename Ptr, typename Diff>
inline void __stable_sort_adaptive(Iter first, Iter last, Ptr, Diff) { std::stable_sort(first, last); }
}
#endif
unsigned int comparePointedStrings(const void ***a1, const void ***a2);
template <typename A1>
inline int curlx_tvnow(A1 out) {
    auto *tv = g4_arg_cast<uint32_t *>(out);
    if (tv) {
        auto now = std::chrono::steady_clock::now().time_since_epoch();
        auto secs = std::chrono::duration_cast<std::chrono::seconds>(now);
        auto usecs = std::chrono::duration_cast<std::chrono::microseconds>(now - secs);
        tv[0] = static_cast<uint32_t>(secs.count());
        tv[1] = static_cast<uint32_t>(usecs.count());
    }
    return 0;
}
inline int Curl_pgrsUpdate(int) { return 0; }
template <typename A1, typename std::enable_if<!g4_can_pass<A1, int>::value, int>::type = 0>
inline int Curl_pgrsUpdate(A1 a1) { return ::Curl_pgrsUpdate(g4_arg_cast<int>(a1)); }

// === Batch 27 C++ overloads for C library / zlib / wchar helpers ===
#ifdef __cplusplus
inline int inflate(int strm, int flush) { return ::inflate((void *)(intptr_t)strm, flush); }
inline int inflateReset(int strm) { return ::inflateReset((void *)(intptr_t)strm); }
#if defined(_WIN32)
#include <cwchar>
#endif
inline int wmemcmp(const wchar_t *a, const char32_t *b, size_t n) { return ::wmemcmp(a, (const wchar_t *)b, n); }
inline int wmemcmp(const char32_t *a, const wchar_t *b, size_t n) { return ::wmemcmp((const wchar_t *)a, b, n); }
#endif // __cplusplus


// === Batch 29: _TBYTE, ELF32 types, and portable va_list view helper ===
#ifndef G4_TBYTE_DEFINED
#define G4_TBYTE_DEFINED
struct _TBYTE { uint8_t b[10]; };
#endif
#if defined(__ANDROID__) || defined(__linux__)
#  include <elf.h>
#else
#  ifndef G4_ELF32_SYM_DEFINED
#  define G4_ELF32_SYM_DEFINED
struct Elf32_Sym {
    uint32_t st_name;
    uint32_t st_value;
    uint32_t st_size;
    unsigned char st_info;
    unsigned char st_other;
    uint16_t st_shndx;
};
#  endif
#endif
template <typename Ptr>
inline Ptr g4_va_cast(va_list& va) {
    return reinterpret_cast<Ptr>(&va);
}
template <typename Ptr, typename T,
          typename std::enable_if<!std::is_same<typename std::decay<T>::type, va_list>::value, int>::type = 0>
inline Ptr g4_va_cast(T v) {
    return (Ptr)(v);
}
template <typename A, typename B,
          typename std::enable_if<!(std::is_convertible<A, const void *>::value && std::is_convertible<B, int>::value), int>::type = 0>
inline void RAND_seed(A a, B b) {
    ::RAND_seed(g4_arg_cast<const void *>(a), g4_arg_cast<int>(b));
}
bool *g4_hkEntry_lt(bool *a1, int a2, int a3);
bool *g4_hkEntry_ne(bool *a1, int a2, int a3);
inline bool *g4_hkEntry_ne(bool *a1) { *a1 = false; return a1; }
template <typename T, typename std::enable_if<!std::is_same<T, bool>::value, int>::type = 0>
inline bool *g4_hkEntry_ne(T *a1) { *reinterpret_cast<bool *>(a1) = false; return reinterpret_cast<bool *>(a1); }
int boost_asio_detail_posix_thread_function(int a1);
namespace g4_std_compat {
template <typename T, typename A, typename B>
inline void swap_ptrs(A a, B b) {
    constexpr size_t sz = sizeof(T);
    uint8_t tmp[sz];
    void* pa = reinterpret_cast<void*>(g4_arg_cast<uintptr_t>(a));
    void* pb = reinterpret_cast<void*>(g4_arg_cast<uintptr_t>(b));
    if (pa && pb && pa != pb) {
        std::memcpy(tmp, pa, sz);
        std::memcpy(pa, pb, sz);
        std::memcpy(pb, tmp, sz);
    }
}
} // namespace g4_std_compat
struct g4_glibc_mbstate_t {
    int __count;
    union { unsigned int __wch; char __wchb[4]; } __value;
};
namespace g4_std_compat {
    void __merge_without_buffer_weighted(float *a1, int a2, int a3, int a4, int a5);
    void __merge_adaptive_weighted(float *a1, float *a2, float *a3, int a4, int a5, char *a6, int a7);
    template <typename A1, typename A2, typename A3, typename A4, typename A5>
    inline void __merge_without_buffer_weighted(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) {
        __merge_without_buffer_weighted(g4_arg_cast<float *>(a1), g4_arg_cast<int>(a2), g4_arg_cast<int>(a3), g4_arg_cast<int>(a4), g4_arg_cast<int>(a5));
    }
    template <typename A1, typename A2, typename A3, typename A4, typename A5, typename A6, typename A7>
    inline void __merge_adaptive_weighted(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7) {
        __merge_adaptive_weighted(g4_arg_cast<float *>(a1), g4_arg_cast<float *>(a2), g4_arg_cast<float *>(a3), g4_arg_cast<int>(a4), g4_arg_cast<int>(a5), g4_arg_cast<char *>(a6), g4_arg_cast<int>(a7));
    }
    int std_find_deq(int a1, const void **a2, unsigned int a3, unsigned int a4, unsigned int a5, int a6, int a7, int a8, int a9, const void **a10);
    template <typename... A> inline void remove_if_kdtree_pair(A...) {}
    int marisa_rotate_weighted_range(char *a1, char *a2, int a3);
}
struct G4OpNewProxy {
    void* p;
    template <typename Ptr, typename std::enable_if<std::is_pointer<Ptr>::value, int>::type = 0>
    operator Ptr() const { return reinterpret_cast<Ptr>(p); }
    operator uintptr_t() const { return reinterpret_cast<uintptr_t>(p); }
    operator int() const { return static_cast<int>(reinterpret_cast<uintptr_t>(p)); }
};
template <typename A>
inline G4OpNewProxy g4_op_new(A) {
    return G4OpNewProxy{::operator new(256)};
}

inline char *g4_unfortify_char_ptr(const volatile void *p) {
    volatile uintptr_t u = reinterpret_cast<uintptr_t>(p);
    return reinterpret_cast<char *>(u);
}

#if !defined(G4_LIBGENERATOR_BUILD) && !defined(G4_NO_AUTO_DECLS)
#  ifndef G4_IN_GLOBAL_SYMBOLS
#    include "Core/Data/GlobalSymbols.h"
#    include "Core/Decls/DecompForwardDecls.h"
#  endif
#endif
