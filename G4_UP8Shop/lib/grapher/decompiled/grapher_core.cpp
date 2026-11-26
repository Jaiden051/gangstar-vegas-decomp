#include "Core/Utils/DecompTypes.h"
#include "grapher_core.h"

// ----------------------------------------------------------------------------
// Function: grapher::NewActorUniqueId  (binary VA: 0x13b50c0)
// Original: grapher::NewActorUniqueId
// ----------------------------------------------------------------------------
int grapher::NewActorUniqueId()
{
  return grapher::g_actorUniqueId++;
}

// ----------------------------------------------------------------------------
// Function: grapher::isFile  (binary VA: 0x13c1fc0)
// Original: grapher::isFile
// ----------------------------------------------------------------------------
int grapher::isFile(const char **a1)
{
  FILE *v1;
  int v2;

  v1 = fopen(*a1, "r");
  v2 = 0;
  if ( v1 != nullptr )
  {
    fclose(v1);
    return 1;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: grapher::isDir  (binary VA: 0x13c2010)
// Original: grapher::isDir
// ----------------------------------------------------------------------------
int grapher::isDir()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: grapher::GetAttr  (binary VA: 0x13c9ab0)
// Original: grapher::GetAttr
// ----------------------------------------------------------------------------
int grapher::GetAttr(int a1, char a2, glf::Self *a3)
{
  int v3;
  int v4;
  char *s;
  size_t v6;
  typedef uint32_t _g4_t_v8[4];
  typedef uint32_t _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  sub_B7C550(v9);
  pugi::xml_node::attribute(v8, (int)(uintptr_t)(&a2), a3);
  v9[0] = v8[0];
  v3 = pugi::xml_attribute::as_int(v9);
  v4 = 0;
  if ( v3 != -1 )
  {
    s = (char *)pugi::xml_attribute::value((int)(uintptr_t)(v9));
    v6 = strlen(s);
    g4_std_compat::string_assign(a1, s, v6);
    return 1;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: grapher::Stricmp  (binary VA: 0x13cd120)
// Original: grapher::Stricmp
// ----------------------------------------------------------------------------
int grapher::Stricmp(grapher::Self *self, const char *a2)
{
  char v2;
  char v3; // si
  int v4;
  int v5;
  int result;
  int i;

  for ( i = 0; ; ++i )
  {
    v2 = *((uint8_t *)self + i);
    v3 = a2[i];
    v4 = v2;
    if ( (unsigned int)v2 <= 0xFF )
      v4 = *(int16_t *)(tolower_tab_ + 2 * v2 + 2);
    v5 = v3;
    if ( (unsigned int)v3 <= 0xFF )
      v5 = *(int16_t *)(tolower_tab_ + 2 * v3 + 2);
    result = v4 - v5;
    if ( result != 0 || *((uint8_t *)self + i) == 0 )
      break;
    if ( v3 == 0 )
      return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: grapher::NewVariableUniqueId  (binary VA: 0x13cd1d0)
// Original: grapher::NewVariableUniqueId
// ----------------------------------------------------------------------------
int grapher::NewVariableUniqueId()
{
  return grapher::g_variableUniqueId++;
}

// ----------------------------------------------------------------------------
// Function: grapher::SetGrapherMode  (binary VA: 0x13d46b0)
// Original: grapher::SetGrapherMode
// ----------------------------------------------------------------------------
grapher::Self * grapher::SetGrapherMode(grapher::Self *self)
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  dword_20D5BE0 = (int)(uintptr_t)(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::IsGrapherModeOn  (binary VA: 0x13d4740)
// Original: grapher::IsGrapherModeOn
// ----------------------------------------------------------------------------
bool grapher::IsGrapherModeOn(grapher::Self *self)
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  return self == (grapher::Self *)((unsigned int)(uintptr_t)(self) & dword_20D5BE0);
}

// ----------------------------------------------------------------------------
// Function: grapher::AddGrapherMode  (binary VA: 0x13d47e0)
// Original: grapher::AddGrapherMode
// ----------------------------------------------------------------------------
grapher::Self * grapher::AddGrapherMode(grapher::Self *self)
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  dword_20D5BE0 |= (unsigned int)(uintptr_t)(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: grapher::RemoveGrapherMode  (binary VA: 0x13d4870)
// Original: grapher::RemoveGrapherMode
// ----------------------------------------------------------------------------
unsigned int grapher::RemoveGrapherMode(grapher::Self *self)
{
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))grapher::ActorManager::Destroy, &unk_20D5B60, &unk_20D1280);
  }
  dword_20D5BE0 &= ~(unsigned int)(uintptr_t)(self);
  return ~(unsigned int)(uintptr_t)(self);
}


