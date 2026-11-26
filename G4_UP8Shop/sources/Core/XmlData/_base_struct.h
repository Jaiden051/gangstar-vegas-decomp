#pragma once
// ============================================================================
// Core/XmlData/_base_struct.h
// Referenced verbatim by DataManager::GenerateHeaderFile (0xaa9620)
// Implements __SymbolicNames, __GetSymbolicNames, __GetIndex, __GetName,
// glitch::core::hashString (0x9e3779b9 hash_combine), and base_struct.
// ============================================================================

#include "Core/Utils/StreamBase.h"
#include <string>
#include <vector>
#include <map>
#include <cstring>

namespace glitch {
namespace core {

inline size_t hashString(const char* str)
{
    size_t h = 0;
    if (!str) return 0;
    while (*str)
    {
        unsigned char c = static_cast<unsigned char>(*str++);
        h ^= (h << 6) + (h >> 2) + 0x9e3779b9u + c;
    }
    return h;
}

} // namespace core
} // namespace glitch

namespace xmldata {

struct __SymbolicNames
{
    std::vector<std::string> m_names;
    std::map<std::string, size_t> m_lookup;

    void RegisterName(const char* name)
    {
        if (!name) return;
        size_t idx = m_names.size();
        m_names.push_back(name);
        m_lookup[name] = idx;
    }

    size_t GetIndex(const char* name) const
    {
        if (!name) return static_cast<size_t>(-1);
        std::map<std::string, size_t>::const_iterator it = m_lookup.find(name);
        return (it != m_lookup.end()) ? it->second : static_cast<size_t>(-1);
    }

    const char* GetName(size_t idx) const
    {
        return (idx < m_names.size()) ? m_names[idx].c_str() : "";
    }
};

inline __SymbolicNames& __GetSymbolicNames(size_t hname)
{
    static std::map<size_t, __SymbolicNames> s_registry;
    return s_registry[hname];
}

inline size_t __GetIndex(const char* name, size_t hname)
{
    return __GetSymbolicNames(hname).GetIndex(name);
}

inline const char* __GetName(size_t idx, size_t hname)
{
    return __GetSymbolicNames(hname).GetName(idx);
}

struct base_struct
{
    static int GenerateHeader(uint32_t *a1, char *a2);
    static void GenerateCpp(uint32_t *a1, int a2);
    bool m_isLoaded;

    base_struct() : m_isLoaded(false) {}
    virtual ~base_struct() {}

    virtual void Init()
    {
        m_isLoaded = false;
    }

    virtual void Load(StreamBase* /*stream*/)
    {
        m_isLoaded = true;
    }

    virtual void Unload()
    {
        m_isLoaded = false;
    }

    bool IsLoaded() const
    {
        return m_isLoaded;
    }
};

} // namespace xmldata
