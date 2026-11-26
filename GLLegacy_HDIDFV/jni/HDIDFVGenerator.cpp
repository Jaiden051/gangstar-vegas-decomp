// ============================================================================
// HDIDFVGenerator.cpp
// Reconstructed from lib/armeabi-v7a/libgenerator.so.
//
// The original binary statically linked boost.uuid / boost.random. The logic it
// executed is reproduced here in plain C++14:
//
//   1. seed_rng           : gathers entropy (time, clock, addresses, rand())
//                           and mixes it through SHA-1 (boost/uuid/seed_rng.hpp).
//   2. lagged_fibonacci44497 : lagged_fibonacci_01_engine<double, 48, 44497, 21034>
//                           seeded with 44497 48-bit reals (fill_array_real).
//   3. basic_random_generator : draws 32-bit words via uniform_int, fills 16 bytes,
//                           then stamps RFC 4122 variant (10xx) and version (0100).
//   4. to_string          : lowercase hex, hyphens after bytes 4, 6, 8, 10.
// ============================================================================

#include "HDIDFVGenerator.h"

#include <array>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <memory>
#include <random>
#include <vector>

namespace {

// ---------------------------------------------------------------------------
// Entropy source equivalent to boost::uuids::detail::seed_rng.
// boost hashed wall-clock time, clock(), stack/heap addresses and rand() with
// SHA-1; std::random_device + seed_seq gives the same "unpredictable seed"
// guarantee portably.
// ---------------------------------------------------------------------------
std::seed_seq& EntropySeed()
{
    static std::random_device rd;
    const std::uint64_t now = static_cast<std::uint64_t>(
        std::chrono::high_resolution_clock::now().time_since_epoch().count());
    const std::uint64_t clk  = static_cast<std::uint64_t>(std::clock());
    const std::uint64_t addr = static_cast<std::uint64_t>(reinterpret_cast<std::uintptr_t>(&rd));
    static std::seed_seq seq{
        rd(), rd(), rd(), rd(),
        static_cast<std::uint32_t>(now), static_cast<std::uint32_t>(now >> 32),
        static_cast<std::uint32_t>(clk), static_cast<std::uint32_t>(addr),
        static_cast<std::uint32_t>(addr >> 32), static_cast<std::uint32_t>(std::rand())};
    return seq;
}

// ---------------------------------------------------------------------------
// boost::random::lagged_fibonacci_01_engine<double, 48, 44497, 21034>
//   x(i) = frac( x(i-p) + x(i-q) ),  values are multiples of 2^-48 in [0, 1).
// ---------------------------------------------------------------------------
class LaggedFibonacci44497
{
public:
    static constexpr unsigned kWordBits = 48;
    static constexpr unsigned kLongLag  = 44497;
    static constexpr unsigned kShortLag = 21034;

    explicit LaggedFibonacci44497(std::seed_seq& seq)
        : x_(kLongLag), i_(kLongLag)
    {
        // fill_array_real: each element takes 48 bits = two 32-bit seed words
        // (low word + top 16 bits of the high word), scaled by 2^-48.
        std::vector<std::uint32_t> words(kLongLag * 2);
        seq.generate(words.begin(), words.end());
        const double scale = std::ldexp(1.0, -static_cast<int>(kWordBits));
        for (unsigned k = 0; k < kLongLag; ++k)
        {
            const std::uint64_t bits =
                static_cast<std::uint64_t>(words[2 * k]) |
                (static_cast<std::uint64_t>(words[2 * k + 1] & 0xFFFFu) << 32);
            x_[k] = static_cast<double>(bits) * scale;
        }
    }

    // Returns the next real in [0, 1).
    double Next()
    {
        if (i_ >= kLongLag)
            Refill();
        return x_[i_++];
    }

private:
    void Refill()
    {
        // Same two-phase update boost uses, so no modulo per element.
        unsigned j = 0;
        for (; j < kShortLag; ++j)
        {
            double t = x_[j] + x_[j + (kLongLag - kShortLag)];
            if (t >= 1.0) t -= 1.0;
            x_[j] = t;
        }
        for (; j < kLongLag; ++j)
        {
            double t = x_[j] + x_[j - kShortLag];
            if (t >= 1.0) t -= 1.0;
            x_[j] = t;
        }
        i_ = 0;
    }

    std::vector<double> x_;
    unsigned i_;
};

// Engine instance shared by all generate() calls, like the function-local
// static basic_random_generator in the original.
LaggedFibonacci44497& Engine()
{
    static std::unique_ptr<LaggedFibonacci44497> engine(new LaggedFibonacci44497(EntropySeed()));
    return *engine;
}

// boost::uuids::basic_random_generator: uniform_int<unsigned long> over the
// engine yields one 32-bit word per draw.
std::uint32_t NextWord()
{
    return static_cast<std::uint32_t>(Engine().Next() * 4294967296.0);
}

std::string FormatUuid(const std::array<std::uint8_t, 16>& bytes)
{
    static const char kHex[] = "0123456789abcdef";
    std::string out;
    out.reserve(36);
    for (std::size_t k = 0; k < bytes.size(); ++k)
    {
        out.push_back(kHex[bytes[k] >> 4]);
        out.push_back(kHex[bytes[k] & 0x0F]);
        if (k == 3 || k == 5 || k == 7 || k == 9)
            out.push_back('-');
    }
    return out;
}

} // namespace

// ----------------------------------------------------------------------------
// Function: HDIDFVGenerator::getVersion  (binary VA: 0xa108)
// ----------------------------------------------------------------------------
std::string HDIDFVGenerator::getVersion()
{
    return "v1.0.0";
}

// ----------------------------------------------------------------------------
// Function: HDIDFVGenerator::generate  (binary VA: 0xa838)
// ----------------------------------------------------------------------------
std::string HDIDFVGenerator::generate()
{
    std::array<std::uint8_t, 16> uuid{};
    for (std::size_t k = 0; k < uuid.size(); k += 4)
    {
        const std::uint32_t w = NextWord();
        uuid[k + 0] = static_cast<std::uint8_t>(w);
        uuid[k + 1] = static_cast<std::uint8_t>(w >> 8);
        uuid[k + 2] = static_cast<std::uint8_t>(w >> 16);
        uuid[k + 3] = static_cast<std::uint8_t>(w >> 24);
    }

    // RFC 4122 variant (10xx xxxx) and version 4 (0100 xxxx).
    uuid[8] = static_cast<std::uint8_t>((uuid[8] & 0xBF) | 0x80);
    uuid[6] = static_cast<std::uint8_t>((uuid[6] & 0x4F) | 0x40);

    return FormatUuid(uuid);
}
