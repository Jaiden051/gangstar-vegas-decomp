#pragma once
// ============================================================================
// Core/Utils/StreamBase.h
// Referenced verbatim by DataManager::GenerateCppFile (0xaa93f0) and
// base_array::GenerateCpp (0xa9fdc0) in libGangstar4.so.
// ============================================================================

#include "Core/Utils/DecompTypes.h"

class StreamBase
{
public:
    virtual ~StreamBase() {}

    virtual size_t Read(void* buffer, size_t size) = 0;
    virtual size_t Write(const void* buffer, size_t size) = 0;
    virtual bool   Seek(int64_t offset, int origin) = 0;
    virtual int64_t Tell() const = 0;
    virtual bool   IsEOF() const = 0;

    template <typename T>
    void ReadAs(T& outVal)
    {
        Read(&outVal, sizeof(T));
    }

    void ReadString(const char*& outStr);
};
