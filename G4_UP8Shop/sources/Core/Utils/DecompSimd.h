#pragma once
// ============================================================================
// Core/Utils/DecompSimd.h
// Cross-platform SIMD intrinsics layer for G4_UP8Shop:
// - Uses native <emmintrin.h> / <pmmintrin.h> on x86/x86_64 with SSE2/SSE3.
// - Provides portable pure-C++ implementations of the 79 SIMD intrinsics used
//   by the decompiled codebase on ARMv7, ARM64, consoles, and generic hosts.
// ============================================================================

#include <cstdint>
#include <cstring>
#include <cmath>

#if defined(__SSE2__) || defined(__x86_64__) || defined(_M_IX86) || defined(_M_X64)
    #include <emmintrin.h>
    #if defined(__SSE3__)
        #include <pmmintrin.h>
    #else
        inline __m128 g4_mm_hadd_ps(__m128 a, __m128 b) {
            float fa[4], fb[4], fc[4];
            std::memcpy(fa, &a, 16);
            std::memcpy(fb, &b, 16);
            fc[0] = fa[0] + fa[1];
            fc[1] = fa[2] + fa[3];
            fc[2] = fb[0] + fb[1];
            fc[3] = fb[2] + fb[3];
            __m128 out;
            std::memcpy(&out, fc, 16);
            return out;
        }
        #ifndef _mm_hadd_ps
            #define _mm_hadd_ps g4_mm_hadd_ps
        #endif
    #endif
    #ifndef _mm_andn_pd
        #define _mm_andn_pd _mm_andnot_pd
    #endif
    #ifndef _mm_loadh_ps
        inline __m128 g4_mm_loadh_ps(__m128 a, const void* p) {
            alignas(16) float f[4];
            std::memcpy(f, &a, 16);
            std::memcpy(&f[2], p, 8);
            __m128 out;
            std::memcpy(&out, f, 16);
            return out;
        }
        template <typename P>
        inline __m128 g4_mm_loadh_ps(P p) {
            __m128 zero{};
            return g4_mm_loadh_ps(zero, reinterpret_cast<const void*>((uintptr_t)p));
        }
        #define _mm_loadh_ps g4_mm_loadh_ps
    #endif
    #ifndef _mm_loadl_ps
        inline __m128 g4_mm_loadl_ps(__m128 a, const void* p) {
            alignas(16) float f[4];
            std::memcpy(f, &a, 16);
            std::memcpy(&f[0], p, 8);
            __m128 out;
            std::memcpy(&out, f, 16);
            return out;
        }
        template <typename P>
        inline __m128 g4_mm_loadl_ps(P p) {
            __m128 zero{};
            return g4_mm_loadl_ps(zero, reinterpret_cast<const void*>((uintptr_t)p));
        }
        #define _mm_loadl_ps g4_mm_loadl_ps
    #endif
    #ifndef _mm_storeh_ps
        template <typename P>
        inline void g4_mm_storeh_ps(P p, __m128 a) {
            alignas(16) float f[4];
            std::memcpy(f, &a, 16);
            std::memcpy(reinterpret_cast<void*>((uintptr_t)p), &f[2], 8);
        }
        #define _mm_storeh_ps g4_mm_storeh_ps
    #endif
    #ifndef _mm_storel_ps
        template <typename P>
        inline void g4_mm_storel_ps(P p, __m128 a) {
            alignas(16) float f[4];
            std::memcpy(f, &a, 16);
            std::memcpy(reinterpret_cast<void*>((uintptr_t)p), &f[0], 8);
        }
        #define _mm_storel_ps g4_mm_storel_ps
    #endif
    #ifndef _mm_sra_epi32
        inline __m128i g4_mm_sra_epi32(__m128i a, __m128i count) {
            int32_t c = _mm_cvtsi128_si32(count);
            return _mm_srai_epi32(a, c);
        }
        #define _mm_sra_epi32 g4_mm_sra_epi32
    #endif
#else
// Portable fallback SIMD vector types for ARMv7, ARM64, Nintendo Switch, etc.
struct __attribute__((packed)) __m128i {
    union {
        int8_t   i8[16];
        uint8_t  u8[16];
        int16_t  i16[8];
        uint16_t u16[8];
        int32_t  i32[4];
        uint32_t u32[4];
        int64_t  i64[2];
        uint64_t u64[2];
    };
};

struct __attribute__((packed)) __m128 {
    float f32[4];
};

struct __attribute__((packed)) __m128d {
    double f64[2];
};

namespace G4Simd {
template <typename Dst, typename Src>
inline Dst cast128(const Src& s) {
    Dst d{};
    std::memcpy(&d, &s, 16);
    return d;
}
} // namespace G4Simd

inline void _mm_mfence() {}
inline void _mm_sfence() {}

inline int32_t _mm_cvtsi128_si32(__m128i a) { return a.i32[0]; }
inline __m128i _mm_cvtsi32_si128(int32_t a) { __m128i r{}; r.i32[0] = a; return r; }

inline __m128i _mm_add_epi8(__m128i a, __m128i b)  { __m128i r{}; for (int i=0;i<16;++i) r.i8[i] = int8_t(a.i8[i] + b.i8[i]); return r; }
inline __m128i _mm_sub_epi8(__m128i a, __m128i b)  { __m128i r{}; for (int i=0;i<16;++i) r.i8[i] = int8_t(a.i8[i] - b.i8[i]); return r; }
inline __m128i _mm_add_epi16(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<8;++i)  r.i16[i] = int16_t(a.i16[i] + b.i16[i]); return r; }
inline __m128i _mm_sub_epi16(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<8;++i)  r.i16[i] = int16_t(a.i16[i] - b.i16[i]); return r; }
inline __m128i _mm_add_epi32(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<4;++i)  r.i32[i] = a.i32[i] + b.i32[i]; return r; }
inline __m128i _mm_sub_epi32(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<4;++i)  r.i32[i] = a.i32[i] - b.i32[i]; return r; }
inline __m128i _mm_add_epi64(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<2;++i)  r.i64[i] = a.i64[i] + b.i64[i]; return r; }
inline __m128i _mm_sub_epi64(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<2;++i)  r.i64[i] = a.i64[i] - b.i64[i]; return r; }
inline __m128i _mm_mul_epu32(__m128i a, __m128i b) { __m128i r{}; r.u64[0] = uint64_t(a.u32[0]) * b.u32[0]; r.u64[1] = uint64_t(a.u32[2]) * b.u32[2]; return r; }

inline __m128i _mm_and_si128(__m128i a, __m128i b)    { __m128i r{}; for (int i=0;i<2;++i) r.u64[i] = a.u64[i] & b.u64[i]; return r; }
inline __m128i _mm_andnot_si128(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<2;++i) r.u64[i] = (~a.u64[i]) & b.u64[i]; return r; }
inline __m128i _mm_or_si128(__m128i a, __m128i b)     { __m128i r{}; for (int i=0;i<2;++i) r.u64[i] = a.u64[i] | b.u64[i]; return r; }
inline __m128i _mm_xor_si128(__m128i a, __m128i b)    { __m128i r{}; for (int i=0;i<2;++i) r.u64[i] = a.u64[i] ^ b.u64[i]; return r; }

inline __m128i _mm_cmpeq_epi8(__m128i a, __m128i b)  { __m128i r{}; for (int i=0;i<16;++i) r.u8[i]  = (a.i8[i] == b.i8[i]) ? 0xFF : 0; return r; }
inline __m128i _mm_cmpgt_epi8(__m128i a, __m128i b)  { __m128i r{}; for (int i=0;i<16;++i) r.u8[i]  = (a.i8[i] >  b.i8[i]) ? 0xFF : 0; return r; }
inline __m128i _mm_cmpeq_epi16(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<8;++i)  r.u16[i] = (a.i16[i] == b.i16[i]) ? 0xFFFF : 0; return r; }
inline __m128i _mm_cmpgt_epi16(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<8;++i)  r.u16[i] = (a.i16[i] >  b.i16[i]) ? 0xFFFF : 0; return r; }
inline __m128i _mm_cmpeq_epi32(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<4;++i)  r.u32[i] = (a.i32[i] == b.i32[i]) ? 0xFFFFFFFFu : 0u; return r; }
inline __m128i _mm_cmpgt_epi32(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<4;++i)  r.u32[i] = (a.i32[i] >  b.i32[i]) ? 0xFFFFFFFFu : 0u; return r; }

inline __m128i _mm_slli_epi16(__m128i a, int imm) { __m128i r{}; for (int i=0;i<8;++i) r.u16[i] = (imm >= 16 || imm < 0) ? 0 : uint16_t(a.u16[i] << imm); return r; }
inline __m128i _mm_slli_epi32(__m128i a, int imm) { __m128i r{}; for (int i=0;i<4;++i) r.u32[i] = (imm >= 32 || imm < 0) ? 0 : (a.u32[i] << imm); return r; }
inline __m128i _mm_slli_epi64(__m128i a, int imm) { __m128i r{}; for (int i=0;i<2;++i) r.u64[i] = (imm >= 64 || imm < 0) ? 0 : (a.u64[i] << imm); return r; }
inline __m128i _mm_srli_epi32(__m128i a, int imm) { __m128i r{}; for (int i=0;i<4;++i) r.u32[i] = (imm >= 32 || imm < 0) ? 0 : (a.u32[i] >> imm); return r; }
inline __m128i _mm_srli_epi64(__m128i a, int imm) { __m128i r{}; for (int i=0;i<2;++i) r.u64[i] = (imm >= 64 || imm < 0) ? 0 : (a.u64[i] >> imm); return r; }
inline __m128i _mm_srai_epi32(__m128i a, int imm) { int s = imm > 31 ? 31 : (imm < 0 ? 0 : imm); __m128i r{}; for (int i=0;i<4;++i) r.i32[i] = (a.i32[i] >> s); return r; }
inline __m128i _mm_sra_epi32(__m128i a, __m128i count) { return _mm_srai_epi32(a, count.i32[0]); }
inline __m128i _mm_srli_si128(__m128i a, int imm) {
    __m128i r{};
    if (imm >= 0 && imm < 16) {
        for (int i = 0; i + imm < 16; ++i) r.u8[i] = a.u8[i + imm];
    }
    return r;
}

inline int _mm_extract_epi16(__m128i a, int imm) { return a.u16[imm & 7]; }
inline __m128i _mm_insert_epi16(__m128i a, int s, int imm) { a.i16[imm & 7] = int16_t(s); return a; }
inline __m128i _mm_shuffle_epi32(__m128i a, int imm) {
    __m128i r{};
    for (int i = 0; i < 4; ++i) r.u32[i] = a.u32[(imm >> (2 * i)) & 3];
    return r;
}

inline __m128i _mm_unpacklo_epi8(__m128i a, __m128i b)  { __m128i r{}; for (int i=0;i<8;++i){ r.u8[2*i]=a.u8[i]; r.u8[2*i+1]=b.u8[i]; } return r; }
inline __m128i _mm_unpackhi_epi8(__m128i a, __m128i b)  { __m128i r{}; for (int i=0;i<8;++i){ r.u8[2*i]=a.u8[8+i]; r.u8[2*i+1]=b.u8[8+i]; } return r; }
inline __m128i _mm_unpacklo_epi16(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<4;++i){ r.u16[2*i]=a.u16[i]; r.u16[2*i+1]=b.u16[i]; } return r; }
inline __m128i _mm_unpackhi_epi16(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<4;++i){ r.u16[2*i]=a.u16[4+i]; r.u16[2*i+1]=b.u16[4+i]; } return r; }
inline __m128i _mm_unpacklo_epi32(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<2;++i){ r.u32[2*i]=a.u32[i]; r.u32[2*i+1]=b.u32[i]; } return r; }
inline __m128i _mm_unpackhi_epi32(__m128i a, __m128i b) { __m128i r{}; for (int i=0;i<2;++i){ r.u32[2*i]=a.u32[2+i]; r.u32[2*i+1]=b.u32[2+i]; } return r; }
inline __m128i _mm_unpackhi_epi64(__m128i a, __m128i b) { __m128i r{}; r.u64[0]=a.u64[1]; r.u64[1]=b.u64[1]; return r; }

inline __m128 _mm_add_ps(__m128 a, __m128 b) { __m128 r{}; for (int i=0;i<4;++i) r.f32[i]=a.f32[i]+b.f32[i]; return r; }
inline __m128 _mm_sub_ps(__m128 a, __m128 b) { __m128 r{}; for (int i=0;i<4;++i) r.f32[i]=a.f32[i]-b.f32[i]; return r; }
inline __m128 _mm_mul_ps(__m128 a, __m128 b) { __m128 r{}; for (int i=0;i<4;++i) r.f32[i]=a.f32[i]*b.f32[i]; return r; }
inline __m128 _mm_div_ps(__m128 a, __m128 b) { __m128 r{}; for (int i=0;i<4;++i) r.f32[i]=a.f32[i]/b.f32[i]; return r; }
inline __m128 _mm_max_ps(__m128 a, __m128 b) { __m128 r{}; for (int i=0;i<4;++i) r.f32[i]=a.f32[i]>b.f32[i]?a.f32[i]:b.f32[i]; return r; }
inline __m128 _mm_hadd_ps(__m128 a, __m128 b){ __m128 r{}; r.f32[0]=a.f32[0]+a.f32[1]; r.f32[1]=a.f32[2]+a.f32[3]; r.f32[2]=b.f32[0]+b.f32[1]; r.f32[3]=b.f32[2]+b.f32[3]; return r; }

inline __m128 _mm_and_ps(__m128 a, __m128 b)    { return G4Simd::cast128<__m128>(_mm_and_si128(G4Simd::cast128<__m128i>(a), G4Simd::cast128<__m128i>(b))); }
inline __m128 _mm_andnot_ps(__m128 a, __m128 b) { return G4Simd::cast128<__m128>(_mm_andnot_si128(G4Simd::cast128<__m128i>(a), G4Simd::cast128<__m128i>(b))); }
inline __m128 _mm_or_ps(__m128 a, __m128 b)     { return G4Simd::cast128<__m128>(_mm_or_si128(G4Simd::cast128<__m128i>(a), G4Simd::cast128<__m128i>(b))); }
inline __m128 _mm_xor_ps(__m128 a, __m128 b)    { return G4Simd::cast128<__m128>(_mm_xor_si128(G4Simd::cast128<__m128i>(a), G4Simd::cast128<__m128i>(b))); }

inline __m128 _mm_cmpeq_ps(__m128 a, __m128 b) { __m128i r{}; for (int i=0;i<4;++i) r.u32[i]=(a.f32[i]==b.f32[i])?0xFFFFFFFFu:0u; return G4Simd::cast128<__m128>(r); }
inline __m128 _mm_cmple_ps(__m128 a, __m128 b) { __m128i r{}; for (int i=0;i<4;++i) r.u32[i]=(a.f32[i]<=b.f32[i])?0xFFFFFFFFu:0u; return G4Simd::cast128<__m128>(r); }
inline __m128 _mm_cmplt_ps(__m128 a, __m128 b) { __m128i r{}; for (int i=0;i<4;++i) r.u32[i]=(a.f32[i]< b.f32[i])?0xFFFFFFFFu:0u; return G4Simd::cast128<__m128>(r); }
inline __m128 _mm_cmple_ss(__m128 a, __m128 b) { __m128i r=G4Simd::cast128<__m128i>(a); r.u32[0]=(a.f32[0]<=b.f32[0])?0xFFFFFFFFu:0u; return G4Simd::cast128<__m128>(r); }
inline __m128 _mm_cmplt_ss(__m128 a, __m128 b) { __m128i r=G4Simd::cast128<__m128i>(a); r.u32[0]=(a.f32[0]< b.f32[0])?0xFFFFFFFFu:0u; return G4Simd::cast128<__m128>(r); }
inline __m128 _mm_cmpge_ss(__m128 a, __m128 b) { __m128i r=G4Simd::cast128<__m128i>(a); r.u32[0]=(a.f32[0]>=b.f32[0])?0xFFFFFFFFu:0u; return G4Simd::cast128<__m128>(r); }
inline __m128 _mm_cmpgt_ss(__m128 a, __m128 b) { __m128i r=G4Simd::cast128<__m128i>(a); r.u32[0]=(a.f32[0]> b.f32[0])?0xFFFFFFFFu:0u; return G4Simd::cast128<__m128>(r); }

inline __m128 _mm_shuffle_ps(__m128 a, __m128 b, int imm) {
    __m128 r{};
    r.f32[0] = a.f32[(imm >> 0) & 3];
    r.f32[1] = a.f32[(imm >> 2) & 3];
    r.f32[2] = b.f32[(imm >> 4) & 3];
    r.f32[3] = b.f32[(imm >> 6) & 3];
    return r;
}
inline __m128 _mm_unpacklo_ps(__m128 a, __m128 b) { __m128 r{}; r.f32[0]=a.f32[0]; r.f32[1]=b.f32[0]; r.f32[2]=a.f32[1]; r.f32[3]=b.f32[1]; return r; }
inline __m128 _mm_unpackhi_ps(__m128 a, __m128 b) { __m128 r{}; r.f32[0]=a.f32[2]; r.f32[1]=b.f32[2]; r.f32[2]=a.f32[3]; r.f32[3]=b.f32[3]; return r; }
inline __m128 _mm_loadl_ps(__m128 a, const void* p) { std::memcpy(&a.f32[0], p, 8); return a; }
template <typename P> inline __m128 _mm_loadl_ps(P p) { __m128 r{}; std::memcpy(&r.f32[0], reinterpret_cast<const void*>((uintptr_t)p), 8); return r; }
inline __m128 _mm_loadh_ps(__m128 a, const void* p) { std::memcpy(&a.f32[2], p, 8); return a; }
template <typename P> inline __m128 _mm_loadh_ps(P p) { __m128 r{}; std::memcpy(&r.f32[2], reinterpret_cast<const void*>((uintptr_t)p), 8); return r; }
template <typename P> inline void _mm_storel_ps(P p, __m128 a) { std::memcpy(reinterpret_cast<void*>((uintptr_t)p), &a.f32[0], 8); }
template <typename P> inline void _mm_storeh_ps(P p, __m128 a) { std::memcpy(reinterpret_cast<void*>((uintptr_t)p), &a.f32[2], 8); }

inline __m128d _mm_sub_pd(__m128d a, __m128d b) { __m128d r{}; r.f64[0]=a.f64[0]-b.f64[0]; r.f64[1]=a.f64[1]-b.f64[1]; return r; }
inline __m128d _mm_and_pd(__m128d a, __m128d b) { return G4Simd::cast128<__m128d>(_mm_and_si128(G4Simd::cast128<__m128i>(a), G4Simd::cast128<__m128i>(b))); }
inline __m128d _mm_andnot_pd(__m128d a, __m128d b) { return G4Simd::cast128<__m128d>(_mm_andnot_si128(G4Simd::cast128<__m128i>(a), G4Simd::cast128<__m128i>(b))); }
inline __m128d _mm_andn_pd(__m128d a, __m128d b) { return _mm_andnot_pd(a, b); }
inline __m128d _mm_or_pd(__m128d a, __m128d b) { return G4Simd::cast128<__m128d>(_mm_or_si128(G4Simd::cast128<__m128i>(a), G4Simd::cast128<__m128i>(b))); }
inline __m128d _mm_xor_pd(__m128d a, __m128d b) { return G4Simd::cast128<__m128d>(_mm_xor_si128(G4Simd::cast128<__m128i>(a), G4Simd::cast128<__m128i>(b))); }
inline __m128d _mm_unpacklo_pd(__m128d a, __m128d b) { __m128d r{}; r.f64[0]=a.f64[0]; r.f64[1]=b.f64[0]; return r; }
inline __m128d _mm_cmple_pd(__m128d a, __m128d b) { __m128i r{}; r.u64[0]=(a.f64[0]<=b.f64[0])?~0ULL:0ULL; r.u64[1]=(a.f64[1]<=b.f64[1])?~0ULL:0ULL; return G4Simd::cast128<__m128d>(r); }
inline __m128d _mm_cmple_sd(__m128d a, __m128d b) { __m128i r=G4Simd::cast128<__m128i>(a); r.u64[0]=(a.f64[0]<=b.f64[0])?~0ULL:0ULL; return G4Simd::cast128<__m128d>(r); }
inline __m128d _mm_cmplt_sd(__m128d a, __m128d b) { __m128i r=G4Simd::cast128<__m128i>(a); r.u64[0]=(a.f64[0]< b.f64[0])?~0ULL:0ULL; return G4Simd::cast128<__m128d>(r); }
inline __m128d _mm_cmpge_sd(__m128d a, __m128d b) { __m128i r=G4Simd::cast128<__m128i>(a); r.u64[0]=(a.f64[0]>=b.f64[0])?~0ULL:0ULL; return G4Simd::cast128<__m128d>(r); }
inline __m128d _mm_cmpgt_sd(__m128d a, __m128d b) { __m128i r=G4Simd::cast128<__m128i>(a); r.u64[0]=(a.f64[0]> b.f64[0])?~0ULL:0ULL; return G4Simd::cast128<__m128d>(r); }

inline __m128  _mm_cvtepi32_ps(__m128i a) { __m128 r{}; for (int i=0;i<4;++i) r.f32[i]=static_cast<float>(a.i32[i]); return r; }
inline __m128d _mm_cvtepi32_pd(__m128i a) { __m128d r{}; r.f64[0]=static_cast<double>(a.i32[0]); r.f64[1]=static_cast<double>(a.i32[1]); return r; }
inline __m128d _mm_cvtps_pd(__m128 a)     { __m128d r{}; r.f64[0]=static_cast<double>(a.f32[0]); r.f64[1]=static_cast<double>(a.f32[1]); return r; }
inline __m128i _mm_cvttps_epi32(__m128 a) { __m128i r{}; for (int i=0;i<4;++i) r.i32[i]=static_cast<int32_t>(a.f32[i]); return r; }
inline __m128i _mm_cvttpd_epi32(__m128d a){ __m128i r{}; r.i32[0]=static_cast<int32_t>(a.f64[0]); r.i32[1]=static_cast<int32_t>(a.f64[1]); return r; }
#endif

// ============================================================================
// Portable C++14 SIMD Lane / Cast / 128-bit Raw Accessors (x86 + ARM + Host)
// ============================================================================
template <typename Vec, typename Src>
inline Vec g4_m128_from(const Src& src) noexcept {
    Vec r;
    std::memset(&r, 0, sizeof(Vec));
    constexpr size_t n = sizeof(Src) < sizeof(Vec) ? sizeof(Src) : sizeof(Vec);
    std::memcpy(&r, &src, n);
    return r;
}

#if !(defined(__SSE2__) || defined(__x86_64__) || defined(_M_IX86) || defined(_M_X64))
template <typename A, typename B, typename std::enable_if<
    (!std::is_same<typename std::decay<A>::type, __m128>::value ||
     !std::is_same<typename std::decay<B>::type, __m128>::value), int>::type = 0>
inline __m128 _mm_andnot_ps(A a, B b) {
    return _mm_andnot_ps(g4_m128_from<__m128>(a), g4_m128_from<__m128>(b));
}
template <typename A, typename B, typename std::enable_if<
    (!std::is_same<typename std::decay<A>::type, __m128>::value ||
     !std::is_same<typename std::decay<B>::type, __m128>::value), int>::type = 0>
inline __m128 _mm_unpacklo_ps(A a, B b) {
    return _mm_unpacklo_ps(g4_m128_from<__m128>(a), g4_m128_from<__m128>(b));
}
#endif

template <typename Elem, typename Vec>
inline Elem* g4_m128_ptr(Vec& v) noexcept {
    return reinterpret_cast<Elem*>(&v);
}

template <typename Elem, typename Vec>
inline const Elem* g4_m128_ptr(const Vec& v) noexcept {
    return reinterpret_cast<const Elem*>(&v);
}

template <typename Elem, typename Vec>
inline Elem& g4_m128_lane(Vec& v, size_t idx) noexcept {
    return reinterpret_cast<Elem*>(&v)[idx];
}

template <typename Elem, typename Vec>
inline Elem g4_m128_lane(const Vec& v, size_t idx) noexcept {
    alignas(16) uint8_t buf[16];
    std::memcpy(buf, &v, sizeof(Vec) <= 16 ? sizeof(Vec) : 16);
    Elem out;
    std::memcpy(&out, buf + idx * sizeof(Elem), sizeof(Elem));
    return out;
}

struct G4M128RawVal {
    alignas(16) uint8_t buf[16];
    inline operator __m128()  const noexcept { __m128  r; std::memcpy(&r, buf, 16); return r; }
    inline operator __m128i() const noexcept { __m128i r; std::memcpy(&r, buf, 16); return r; }
    inline operator __m128d() const noexcept { __m128d r; std::memcpy(&r, buf, 16); return r; }
    inline operator uint64_t() const noexcept { uint64_t r; std::memcpy(&r, buf, 8); return r; }
    inline operator int64_t()  const noexcept { int64_t  r; std::memcpy(&r, buf, 8); return r; }
    inline operator uint32_t() const noexcept { uint32_t r; std::memcpy(&r, buf, 4); return r; }
    inline operator int32_t()  const noexcept { int32_t  r; std::memcpy(&r, buf, 4); return r; }
};

template <typename Vec>
struct G4M128RawRef {
    Vec& v;
    inline Vec& operator=(const G4M128RawVal& o) noexcept {
        std::memcpy(&v, o.buf, sizeof(Vec) <= 16 ? sizeof(Vec) : 16);
        return v;
    }
    template <typename Other>
    inline Vec& operator=(const G4M128RawRef<Other>& o) noexcept {
        if ((const void*)&v != (const void*)&o.v) {
            std::memcpy(&v, &o.v, sizeof(Vec) <= sizeof(Other) ? sizeof(Vec) : sizeof(Other));
        }
        return v;
    }
    inline Vec& operator=(const G4M128RawRef& o) noexcept {
        return operator=<Vec>(o);
    }
    template <typename Src>
    inline Vec& operator=(const Src& s) noexcept {
        std::memset(&v, 0, sizeof(Vec));
        constexpr size_t n = sizeof(Src) < sizeof(Vec) ? sizeof(Src) : sizeof(Vec);
        std::memcpy(&v, &s, n);
        return v;
    }
    inline operator __m128()  const noexcept { __m128  r; std::memcpy(&r, &v, 16); return r; }
    inline operator __m128i() const noexcept { __m128i r; std::memcpy(&r, &v, 16); return r; }
    inline operator __m128d() const noexcept { __m128d r; std::memcpy(&r, &v, 16); return r; }
    inline operator uint64_t() const noexcept { uint64_t r; std::memcpy(&r, &v, 8); return r; }
    inline operator int64_t()  const noexcept { int64_t  r; std::memcpy(&r, &v, 8); return r; }
    inline operator uint32_t() const noexcept { uint32_t r; std::memcpy(&r, &v, 4); return r; }
    inline operator int32_t()  const noexcept { int32_t  r; std::memcpy(&r, &v, 4); return r; }
};

template <typename Vec>
inline G4M128RawRef<Vec> g4_m128_raw(Vec& v) noexcept { return G4M128RawRef<Vec>{v}; }

template <typename Vec>
inline G4M128RawVal g4_m128_raw(const Vec& v) noexcept {
    G4M128RawVal r{};
    std::memcpy(r.buf, &v, sizeof(Vec) <= 16 ? sizeof(Vec) : 16);
    return r;
}

inline __m128 g4_m128_u32(__m128 v) noexcept { return v; }

inline __m128 g4_m128_u32(uint32_t v) noexcept {
    __m128 r{};
    std::memcpy(&r, &v, 4);
    return r;
}

template <typename T>
inline __m128 g4_m128_u32(T v) noexcept {
    return g4_m128_u32(static_cast<uint32_t>(v));
}

template <typename Elem, typename Vec>
inline Elem& g4_m128_lane_ref(Vec& v, size_t idx) noexcept {
    return *(reinterpret_cast<Elem*>(&v) + idx);
}

inline __m128 g4_to_m128(__m128 v) noexcept { return v; }
inline __m128 g4_to_m128(std::nullptr_t) noexcept { return {}; }
inline __m128 g4_to_m128(__m128i v) noexcept { __m128 r{}; std::memcpy(&r, &v, 16); return r; }
inline __m128 g4_to_m128(__m128d v) noexcept { __m128 r{}; std::memcpy(&r, &v, 16); return r; }
inline __m128 g4_to_m128(float v) noexcept { __m128 r{}; std::memcpy(&r, &v, 4); return r; }
inline __m128 g4_to_m128(double v) noexcept { __m128 r{}; float f = static_cast<float>(v); std::memcpy(&r, &f, 4); return r; }
template <typename T, typename std::enable_if<std::is_pointer<T>::value, int>::type = 0>
inline __m128 g4_to_m128(T v) noexcept {
    __m128 r{};
    uintptr_t p = reinterpret_cast<uintptr_t>(v);
    std::memcpy(&r, &p, sizeof(p) <= 16 ? sizeof(p) : 16);
    return r;
}
template <typename T, typename std::enable_if<std::is_integral<T>::value || std::is_enum<T>::value, int>::type = 0>
inline __m128 g4_to_m128(T v) noexcept {
    __m128 r{};
    if (sizeof(T) <= 4) {
        uint32_t val = static_cast<uint32_t>(v);
        std::memcpy(&r, &val, 4);
    } else {
        uint64_t val = static_cast<uint64_t>(v);
        std::memcpy(&r, &val, 8);
    }
    return r;
}
template <typename T, typename std::enable_if<std::is_class<T>::value && sizeof(T) == 16, int>::type = 0>
inline __m128 g4_to_m128(const T& v) noexcept {
    __m128 r{};
    std::memcpy(&r, &v, 16);
    return r;
}
template <size_t N>
inline __m128 g4_to_m128(const uint8_t (&v)[N]) noexcept {
    __m128 r{};
    std::memcpy(&r, v, N < 16 ? N : 16);
    return r;
}

inline __m128d g4_to_m128d(__m128d v) noexcept { return v; }
inline __m128d g4_to_m128d(std::nullptr_t) noexcept { return {}; }
inline __m128d g4_to_m128d(__m128 v) noexcept { __m128d r{}; std::memcpy(&r, &v, 16); return r; }
inline __m128d g4_to_m128d(__m128i v) noexcept { __m128d r{}; std::memcpy(&r, &v, 16); return r; }
inline __m128d g4_to_m128d(double v) noexcept { __m128d r{}; std::memcpy(&r, &v, 8); return r; }
inline __m128d g4_to_m128d(float v) noexcept { __m128d r{}; double d = static_cast<double>(v); std::memcpy(&r, &d, 8); return r; }
template <typename T, typename std::enable_if<std::is_pointer<T>::value, int>::type = 0>
inline __m128d g4_to_m128d(T v) noexcept {
    __m128d r{};
    uintptr_t p = reinterpret_cast<uintptr_t>(v);
    std::memcpy(&r, &p, sizeof(p) <= 16 ? sizeof(p) : 16);
    return r;
}
template <typename T, typename std::enable_if<std::is_integral<T>::value || std::is_enum<T>::value, int>::type = 0>
inline __m128d g4_to_m128d(T v) noexcept {
    __m128d r{};
    uint64_t val = static_cast<uint64_t>(v);
    std::memcpy(&r, &val, 8);
    return r;
}
template <typename T, typename std::enable_if<std::is_class<T>::value && sizeof(T) == 16, int>::type = 0>
inline __m128d g4_to_m128d(const T& v) noexcept {
    __m128d r{};
    std::memcpy(&r, &v, 16);
    return r;
}
template <size_t N>
inline __m128d g4_to_m128d(const uint8_t (&v)[N]) noexcept {
    __m128d r{};
    std::memcpy(&r, v, N < 16 ? N : 16);
    return r;
}

inline __m128i g4_to_m128i(__m128i v) noexcept { return v; }
inline __m128i g4_to_m128i(std::nullptr_t) noexcept { return {}; }
inline __m128i g4_to_m128i(__m128 v) noexcept { __m128i r{}; std::memcpy(&r, &v, 16); return r; }
inline __m128i g4_to_m128i(__m128d v) noexcept { __m128i r{}; std::memcpy(&r, &v, 16); return r; }
template <typename T, typename std::enable_if<std::is_pointer<T>::value, int>::type = 0>
inline __m128i g4_to_m128i(T v) noexcept {
    __m128i r{};
    uintptr_t p = reinterpret_cast<uintptr_t>(v);
    std::memcpy(&r, &p, sizeof(p) <= 16 ? sizeof(p) : 16);
    return r;
}
template <typename T, typename std::enable_if<std::is_arithmetic<T>::value || std::is_enum<T>::value, int>::type = 0>
inline __m128i g4_to_m128i(T v) noexcept {
    __m128i r{};
    uint64_t val = static_cast<uint64_t>(v);
    std::memcpy(&r, &val, 8);
    return r;
}
template <typename T, typename std::enable_if<std::is_class<T>::value && sizeof(T) == 16, int>::type = 0>
inline __m128i g4_to_m128i(const T& v) noexcept {
    __m128i r{};
    std::memcpy(&r, &v, 16);
    return r;
}
template <size_t N>
inline __m128i g4_to_m128i(const uint8_t (&v)[N]) noexcept {
    __m128i r{};
    std::memcpy(&r, v, N < 16 ? N : 16);
    return r;
}
