#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_os.h
// Library: glitch | Module: glitch_os
// Binary Address Span: 0xd1eed0 .. 0xefd980 (24 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xd1eed0] (27 bytes) glitch::os::Timer::getMicroSeconds(void)
// int64_t glitch::os::Timer::getMicroSeconds();
// [0xd1eef0] (55 bytes) glitch::os::Timer::getRealTime(void)
// uint64_t glitch::os::Timer::getRealTime();
// [0xd1ef30] (58 bytes) glitch::os::Printer::log(char const*,glitch::E_LOG_LEVEL)
// int glitch::os::Printer::log(int a1, int a2);
// [0xd1f780] (66 bytes) glitch::os::Printer::log(char const*,char const*,glitch::E_LOG_LEVEL)
// uint32_t *glitch::os::Printer::log(int a1, int a2, int a3);
// [0xd1f7d0] (58 bytes) glitch::os::Printer::log(wchar_t const*,glitch::E_LOG_LEVEL)
// uint32_t *glitch::os::Printer::log(int a1, int a2);
// [0xd1f810] (66 bytes) glitch::os::Printer::logf(glitch::E_LOG_LEVEL,char const*,...)
// uint32_t *glitch::os::Printer::logf(int a1, int a2, ...);
// [0xd23010] (66 bytes) glitch::os::Printer::logf(char const*,...)
// uint32_t *glitch::os::Printer::logf(glitch::os::Printer *this, const char *a2, ...);
// [0xd23060] (66 bytes) glitch::os::Printer::vlogf(glitch::E_LOG_LEVEL,char const*,char *)
// uint32_t *glitch::os::Printer::vlogf(int a1, int a2, int a3);
// [0xd230b0] (66 bytes) glitch::os::Printer::vlogf(char const*,char *)
// uint32_t *glitch::os::Printer::vlogf(glitch::os::Printer *this, const char *a2);
// [0xd23100] (50 bytes) glitch::os::Printer::setLogLevel(glitch::E_LOG_LEVEL)
// uint32_t *glitch::os::Printer::setLogLevel(int a1);
// [0xd23140] (47 bytes) glitch::os::Printer::getLogLevel(void)
// int glitch::os::Printer::getLogLevel();
// [0xd23170] (108 bytes) glitch::os::Randomizer::rand(void)
// int glitch::os::Randomizer::rand();
// [0xd231e0] (26 bytes) glitch::os::Randomizer::reset(void)
// int *glitch::os::Randomizer::reset();
// [0xd23200] (71 bytes) glitch::os::Timer::tick(void)
// uint32_t *glitch::os::Timer::tick();
// [0xd23250] (75 bytes) glitch::os::Timer::setTime(unsigned int)
// uint64_t glitch::os::Timer::setTime(glitch::os::Timer *this);
// [0xd232a0] (22 bytes) glitch::os::Timer::getSpeed(void)
// long double glitch::os::Timer::getSpeed();
// [0xd232c0] (25 bytes) glitch::os::Timer::isStopped(void)
// bool glitch::os::Timer::isStopped();
// [0xd232e0] (56 bytes) glitch::os::Timer::startTimer(void)
// char glitch::os::Timer::startTimer();
// [0xd23320] (184 bytes) glitch::os::Timer::getTime(void)
// int glitch::os::Timer::getTime();
// [0xd233e0] (65 bytes) glitch::os::Timer::setSpeed(float)
// uint32_t *glitch::os::Timer::setSpeed(glitch::os::Timer *this);
// [0xd23430] (53 bytes) glitch::os::Timer::stopTimer(void)
// uint32_t *glitch::os::Timer::stopTimer();
// [0xd23470] (49 bytes) glitch::os::Timer::initVirtualTimer(void)
// uint64_t glitch::os::Timer::initVirtualTimer();
// [0xd234b0] (27 bytes) glitch::os::Timer::initTimer(void)
// uint64_t glitch::os::Timer::initTimer();
// [0xefd980] (63 bytes) glitch::os::byteswap(glitch::core::quaternion const&)
// glitch::os *glitch::os::byteswap(glitch::os *this, const glitch::core::quaternion *a2);
