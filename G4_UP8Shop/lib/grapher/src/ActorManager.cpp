// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - lib/grapher/src/ActorFactoryRegistry.cpp
// ============================================================================
#include "../inc/grapher/Core/ActorManager.h"

namespace grapher {

void ActorFactoryRegistry::RegisterFactory(const char* name, ActorFactoryFn factory) {
    if (name && factory) {
        m_factories[name] = factory;
    }
}

Actor* ActorFactoryRegistry::Instantiate(const char* name) const {
    if (!name) return nullptr;
    auto it = m_factories.find(name);
    if (it != m_factories.end() && it->second) {
        Actor* actor = it->second();
        if (actor) actor->Init();
        return actor;
    }
    return nullptr;
}

} // namespace grapher
