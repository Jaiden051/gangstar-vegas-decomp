#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpAgentRe.h"

// ----------------------------------------------------------------------------
// Function: hkpAgentRegisterUtil::registerBvTreeAgents  (binary VA: 0x169b840)
// Original: hkpAgentRegisterUtil::_registerBvTreeAgents
// ----------------------------------------------------------------------------
int hkpAgentRegisterUtil::registerBvTreeAgents(hkpAgentRegisterUtil::Self *self)
{
  hkpCollisionDispatcher::Self *v2;
  hkpCollisionDispatcher::Self *v3;
  hkpCollisionDispatcher::Self *v4;
  hkpCollisionDispatcher::Self *v5;
  hkpCollisionDispatcher::Self *v6;
  hkpCollisionDispatcher::Self *v7;
  hkpCollisionDispatcher::Self *v8;

  hkpCollisionDispatcher::setEnableChecks(self, 0);
  hkpBvTreeAgent::registerAgent(self, v2);
  hkpMoppAgent::registerAgent(self, v3);
  hkpBvTreeStreamAgent::registerAgent(self, v4);
  hkpMoppBvTreeStreamAgent::registerAgent(self, v5);
  hkpBvCompressedMeshAgent::registerAgent(self, v6);
  hkpStaticCompoundAgent::registerAgent(self, v7);
  hkBvTreeAgent3::registerAgent3(self, v8);
  return hkpCollisionDispatcher::setEnableChecks(self, 1);
}

// ----------------------------------------------------------------------------
// Function: hkpAgentRegisterUtil::registerListAgents  (binary VA: 0x169b8c0)
// Original: hkpAgentRegisterUtil::_registerListAgents
// ----------------------------------------------------------------------------
int hkpAgentRegisterUtil::registerListAgents(hkpAgentRegisterUtil::Self *self)
{
  int result;
  hkpCollisionDispatcher::Self *v2;
  hkpCollisionDispatcher::Self *v3;
  hkpCollisionDispatcher::Self *v4;
  hkpCollisionDispatcher::Self *v5;
  hkpCollisionDispatcher::Self *v6;

  hkpListAgent::registerAgent(self, v2);
  hkpCollisionDispatcher::setEnableChecks(self, 0);
  hkpCollectionAgent3::registerAgent3(self, v3);
  hkpCollectionCollectionAgent3::registerAgent3(self, v4);
  hkpCollisionDispatcher::setEnableChecks(self, 1);
  hkpConvexListAgent::registerAgent(self, v5);
  hkConvexListAgent3::registerAgent3(self, v6);
  result = (int)hkpCollisionAgent::registerHeightFieldAgent[0];
  if ( hkpCollisionAgent::registerHeightFieldAgent[0] != 0 )
    return ((int (**)(hkpAgentRegisterUtil::Self *))hkpCollisionAgent::registerHeightFieldAgent)[0](self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpAgentRegisterUtil::registerTerminalAgents  (binary VA: 0x169b930)
// Original: hkpAgentRegisterUtil::_registerTerminalAgents
// ----------------------------------------------------------------------------
int hkpAgentRegisterUtil::registerTerminalAgents(hkpAgentRegisterUtil::Self *self)
{
  hkpCollisionDispatcher::Self *v2;
  hkpCollisionDispatcher::Self *v3;
  hkpCollisionDispatcher::Self *v4;
  hkpCollisionDispatcher::Self *v5;
  hkpCollisionDispatcher::Self *v6;
  hkpCollisionDispatcher::Self *v7;
  hkpCollisionDispatcher::Self *v8;
  hkpCollisionDispatcher::Self *v9;
  hkpCollisionDispatcher::Self *v10;
  hkpCollisionDispatcher::Self *v11;
  hkpCollisionDispatcher::Self *v12;
  hkpCollisionDispatcher::Self *v13;

  hkpPredGskfAgent::registerAgent(self, v2);
  hkPredGskAgent3::registerAgent3(self, (char *)&dword_14 + 3, 23);
  hkPredGskCylinderAgent3::registerAgent3(self, v3);
  hkpBoxBoxAgent::registerAgent(self, v4);
  hkBoxBoxAgent3::registerAgent3(self, v5);
  hkpSphereSphereAgent::registerAgent(self, v6);
  hkpSphereCapsuleAgent::registerAgent(self, v7);
  hkpSphereTriangleAgent::registerAgent2(self, v8);
  hkpSphereBoxAgent::registerAgent(self, v9);
  hkpCapsuleCapsuleAgent::registerAgent(self, v10);
  hkpCapsuleTriangleAgent::registerAgent(self, v11);
  hkCapsuleTriangleAgent3::registerAgent3(self, v12);
  return hkpMultiSphereTriangleAgent::registerAgent(self, v13);
}

// ----------------------------------------------------------------------------
// Function: hkpAgentRegisterUtil::registerAllAgents  (binary VA: 0x169b9d0)
// Original: hkpAgentRegisterUtil::registerAllAgents
// ----------------------------------------------------------------------------
int hkpAgentRegisterUtil::registerAllAgents(hkpAgentRegisterUtil::Self *self)
{
  hkpCollisionDispatcher::Self *v2;
  hkpCollisionDispatcher::Self *v3;
  hkpCollisionDispatcher::Self *v4;
  hkpCollisionDispatcher::Self *v5;
  hkpCollisionDispatcher::Self *v6;

  hkpRegisterAlternateShapeTypes(self);
  hkpBvAgent::registerAgent(self, v2);
  hkpMultiSphereAgent::registerAgent(self, v3);
  hkpAgentRegisterUtil::registerBvTreeAgents(self);
  hkpCollisionDispatcher::setEnableChecks(self, 0);
  hkpShapeCollectionAgent::registerAgent(self, v4);
  hkpCollisionDispatcher::setEnableChecks(self, 1);
  hkpAgentRegisterUtil::registerListAgents(self);
  hkpTransformAgent::registerAgent(self, v5);
  hkpPhantomAgent::registerAgent(self, v6);
  return hkpAgentRegisterUtil::registerTerminalAgents(self);
}


