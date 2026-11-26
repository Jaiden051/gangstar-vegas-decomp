#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASLoaderInfo.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoaderInfo::init  (binary VA: 0x114d610)
// Original: gameswf::ASLoaderInfo::init
// ----------------------------------------------------------------------------
void gameswf::ASLoaderInfo::init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoaderInfo::newOp  (binary VA: 0x114dfd0)
// Original: gameswf::ASLoaderInfo::newOp
// ----------------------------------------------------------------------------
gameswf::ASEventDispatcher::Self * gameswf::ASLoaderInfo::newOp(gameswf::ASLoaderInfo::Self *self)
{
  gameswf::ASEventDispatcher::Self *v1;

  v1 = (gameswf::ASEventDispatcher::Self *)opNew(0x38u);
  gameswf::ASEventDispatcher::ASEventDispatcher(v1, self);
  *((uint32_t *)v1 + 12) = 0;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2090808);
  *((uint32_t *)v1 + 13) = 0;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoaderInfo::getStandardMember  (binary VA: 0x1151990)
// Original: gameswf::ASLoaderInfo::getStandardMember
// ----------------------------------------------------------------------------
int gameswf::ASLoaderInfo::getStandardMember(int a1, int a2, gameswf::ASValue::Self *a3)
{
  int result;
  gameswf::ASObject::Self *v4;
  int v5;

  if ( a2 == 85 )
  {
    v5 = *(uint32_t *)(a1 + 52);
    if ( v5 != 0 )
    {
      if ( *(uint8_t *)(*(uint32_t *)(a1 + 48) + 2) == 0 )
      {
LABEL_12:
        sub_7E5ED0((gameswf::Self **)(a1 + 48), nullptr);
        *(uint32_t *)(a1 + 52) = 0;
        v4 = nullptr;
        goto LABEL_5;
      }
      v4 = *(gameswf::ASObject::Self **)(v5 + 280);
      if ( v4 == nullptr || *(uint8_t *)(*(uint32_t *)(v5 + 276) + 2) != 0 )
        goto LABEL_5;
      sub_7E5ED0((gameswf::Self **)(v5 + 276), nullptr);
      *(uint32_t *)(v5 + 280) = 0;
    }
    v4 = nullptr;
    goto LABEL_5;
  }
  result = 0;
  if ( a2 != 86 )
    return result;
  v4 = *(gameswf::ASObject::Self **)(a1 + 52);
  if ( v4 != nullptr && *(uint8_t *)(*(uint32_t *)(a1 + 48) + 2) == 0 )
    goto LABEL_12;
LABEL_5:
  gameswf::ASValue::setObject(a3, v4);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoaderInfo::is  (binary VA: 0x1162080)
// Original: gameswf::ASLoaderInfo::is
// ----------------------------------------------------------------------------
bool gameswf::ASLoaderInfo::is(gameswf::ASLoaderInfo::Self *self, int a2)
{
  bool result;

  result = true;
  if ( a2 != 61 && a2 != 57 )
    return a2 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoaderInfo::Destroy  (binary VA: 0x1163a40)
// Original: gameswf::ASLoaderInfo::~ASLoaderInfo
// ----------------------------------------------------------------------------
void gameswf::ASLoaderInfo::Destroy(gameswf::ASLoaderInfo::Self *self)
{
  gameswf::Self *v1;
  gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> **v3;
  gameswf::ASLoaderInfo::Self *v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090808);
  v1 = *((gameswf::Self **)self + 12);
  if ( v1 != nullptr && (*(uint16_t *)v1)-- == 1 )
    gameswf::free_internal(v1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091248);
  v3 = (gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> **)((char *)self + 48);
  do
  {
    v4 = (gameswf::ASLoaderInfo::Self *)(v3 - 1);
    gameswf::hash_gameswf_String_gameswf_a_5510e3::clear(v3 - 1);
    v3 = (gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> **)v4;
  }
  while ( (gameswf::ASLoaderInfo::Self *)((char *)self + 40) != v4 );
  gameswf::ASObject::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASLoaderInfo::Destroy_ea1163ad0  (binary VA: 0x1163ad0)
// Original: gameswf::ASLoaderInfo::~ASLoaderInfo
// ----------------------------------------------------------------------------
void gameswf::ASLoaderInfo::Destroy_ea1163ad0(gameswf::ASLoaderInfo::Self *self)
{
  gameswf::Self *v1;
  gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> **v3;
  gameswf::ASLoaderInfo::Self *v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2090808);
  v1 = *((gameswf::Self **)self + 12);
  if ( v1 != nullptr && (*(uint16_t *)v1)-- == 1 )
    gameswf::free_internal(v1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2091248);
  v3 = (gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> **)((char *)self + 48);
  do
  {
    v4 = (gameswf::ASLoaderInfo::Self *)(v3 - 1);
    gameswf::hash_gameswf_String_gameswf_a_5510e3::clear(v3 - 1);
    v3 = (gameswf::hash<gameswf::String::Self, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String::Self>> **)v4;
  }
  while ( (gameswf::ASLoaderInfo::Self *)((char *)self + 40) != v4 );
  gameswf::ASObject::Destroy(self);
  opDelete(self);
}


