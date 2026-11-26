#include "Core/Utils/StreamBase.h"

void StreamBase::ReadString(const char*& outStr)
{
    uint32 len = 0;
    ReadAs(len);
    if (len > 0)
    {
        char* buf = gll_new char[len + 1];
        Read(buf, len);
        buf[len] = '\0';
        outStr = buf;
    }
    else
    {
        outStr = "";
    }
}
