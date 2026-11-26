#include "Core/Utils/DecompTypes.h"
#include "gameswf_HostInterface.h"

// ----------------------------------------------------------------------------
// Function: gameswf::HostInterface::getPreferedFace  (binary VA: 0x1066300)
// Original: gameswf::HostInterface::getPreferedFace
// ----------------------------------------------------------------------------
int gameswf::HostInterface::getPreferedFace()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gameswf::HostInterface::getListOfFaces  (binary VA: 0x1066310)
// Original: gameswf::HostInterface::getListOfFaces
// ----------------------------------------------------------------------------
gameswf::HostInterface::Self * gameswf::HostInterface::getListOfFaces(gameswf::HostInterface::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gameswf::HostInterface::logMessage  (binary VA: 0x1066330)
// Original: gameswf::HostInterface::logMessage
// ----------------------------------------------------------------------------
void gameswf::HostInterface::logMessage(gameswf::HostInterface::Self *self, bool a2, char *a3)
{
  glf::Console::Print((glf::Console::Self *)"%s", a3);
}

// ----------------------------------------------------------------------------
// Function: gameswf::HostInterface::getFile  (binary VA: 0x1066360)
// Original: gameswf::HostInterface::getFile
// ----------------------------------------------------------------------------
glf::IOStream::Self * gameswf::HostInterface::getFile(gameswf::HostInterface::Self *self, char *a2)
{
  glf::IOStream::Self *v2;

  v2 = (glf::IOStream::Self *)opNew(0x34u, 0);
  glf::FileStreamImpl::Construct(v2, a2, (uint8_t *)&dword_0 + 1);
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2048D28);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gameswf::HostInterface::Destroy  (binary VA: 0x1066bc0)
// Original: gameswf::HostInterface::~HostInterface
// ----------------------------------------------------------------------------
void gameswf::HostInterface::Destroy(gameswf::HostInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E028);
}

// ----------------------------------------------------------------------------
// Function: gameswf::HostInterface::getTexture  (binary VA: 0x1066be0)
// Original: gameswf::HostInterface::getTexture
// ----------------------------------------------------------------------------
int gameswf::HostInterface::getTexture(int a1, int a2)
{
  (*(void (**)(int))(*(uint32_t *)a2 + 20))(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::HostInterface::Destroy_ea1066c20  (binary VA: 0x1066c20)
// Original: gameswf::HostInterface::~HostInterface
// ----------------------------------------------------------------------------
void gameswf::HostInterface::Destroy_ea1066c20(gameswf::HostInterface::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208E028);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::HostInterface::getTexture  (binary VA: 0x1066c50)
// Original: gameswf::HostInterface::getTexture
// ----------------------------------------------------------------------------
uint32_t * gameswf::HostInterface::getTexture(uint32_t *a1)
{
  *a1 = 0;
  return a1;
}


