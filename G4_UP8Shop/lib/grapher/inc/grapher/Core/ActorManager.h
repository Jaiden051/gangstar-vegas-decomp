// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - lib/grapher/inc/grapher/Core/ActorFactoryRegistry.h
// Exact embedded path at 0x1b14c3c: ../../../../../lib/grapher/inc/grapher/Core/ActorFactoryRegistry.h
// ============================================================================
#pragma once

#include "../../../../../sources/Core/Memory/GameAllocator.h"
#include <string>
#include <vector>
#include <unordered_map>

namespace grapher {

class Actor {
public:
    Actor() = default;
    virtual ~Actor() = default;

    virtual void        Init() {}
    virtual void        Execute(int inputPinIndex = 0) { (void)inputPinIndex; }
    virtual const char* GetActorTypeName() const { return "Actor"; }

    void RegisterPin(const char* pinName) {
        if (pinName) m_pins.emplace_back(pinName);
    }

protected:
    std::vector<std::string> m_pins;
};

class ActorFactoryRegistry {
public:
    using ActorFactoryFn = Actor* (*)();

    ActorFactoryRegistry() = default;
    ~ActorFactoryRegistry() = default;

    // Template factory reconstructed from 0xbc2c70..0xbce610 (207 instantiations)
    // Uses Core::Memory::AllocateTracked referencing ActorFactoryRegistry.h:76
    template <typename T>
    static Actor* CreateActor() {
        void* mem = Core::Memory::AllocateTracked(
            sizeof(T),
            "../../../../../lib/grapher/inc/grapher/Core/ActorFactoryRegistry.h",
            76,
            false
        );
        return new (mem) T();
    }

    void   RegisterFactory(const char* name, ActorFactoryFn factory);
    Actor* Instantiate(const char* name) const;
    size_t GetRegisteredCount() const { return m_factories.size(); }

private:
    std::unordered_map<std::string, ActorFactoryFn> m_factories;
};

} // namespace grapher
