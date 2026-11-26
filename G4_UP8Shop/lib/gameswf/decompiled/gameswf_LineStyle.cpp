#include "Core/Utils/DecompTypes.h"
#include "gameswf_LineStyle.h"

// ----------------------------------------------------------------------------
// Function: gameswf::LineStyle::apply  (binary VA: 0x10ed850)
// Original: gameswf::LineStyle::apply
// ----------------------------------------------------------------------------
uint32_t * gameswf::LineStyle::apply(gameswf::LineStyle::Self *self)
{
  char v1; // di
  char v2; // si
  uint32_t *result;
  char v4;

  v4 = *((uint8_t *)self + 11);
  v1 = *((uint8_t *)self + 9);
  v2 = *((uint8_t *)self + 10);
  result = (uint32_t *)(gameswf::s_render_handler);
  if ( gameswf::s_render_handler != nullptr )
  {
    *((uint8_t *)gameswf::s_render_handler + 200) = *((uint8_t *)self + 8);
    *((uint8_t *)result + 201) = v1;
    *((uint8_t *)result + 202) = v2;
    *((uint8_t *)result + 203) = v4;
    result[51] = *((uint32_t *)self + 1);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::LineStyle::Construct  (binary VA: 0x10eeed0)
// Original: gameswf::LineStyle::LineStyle
// ----------------------------------------------------------------------------
gameswf::LineStyle::Self * gameswf::LineStyle::Construct(gameswf::LineStyle::Self *self)
{
  gameswf::LineStyle::Self *result;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208F690);
  *((uint32_t *)self + 1) = 0;
  *((uint8_t *)self + 8) = -1;
  *((uint8_t *)self + 9) = -1;
  *((uint8_t *)self + 10) = -1;
  *((uint8_t *)self + 11) = -1;
  result = (gameswf::LineStyle::Self *)(uintptr_t)(gameswf::FillStyle::FillStyle((gameswf::LineStyle::Self *)((char *)self + 12)));
  *((uint8_t *)self + 96) = 0;
  *((uint8_t *)self + 97) = 0;
  *((uint8_t *)self + 98) = 0;
  *((uint8_t *)self + 99) = 0;
  *((uint8_t *)self + 100) = 0;
  *((uint8_t *)self + 101) = 0;
  *((uint8_t *)self + 102) = 0;
  *((uint8_t *)self + 103) = 0;
  *((uint16_t *)self + 52) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::LineStyle::Destroy  (binary VA: 0x10eef40)
// Original: gameswf::LineStyle::~LineStyle
// ----------------------------------------------------------------------------
void gameswf::LineStyle::Destroy(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208F690);
  gameswf::FillStyle::Destroy(self + 3);
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208EB20);
}

// ----------------------------------------------------------------------------
// Function: gameswf::LineStyle::Destroy_ea10ef130  (binary VA: 0x10ef130)
// Original: gameswf::LineStyle::~LineStyle
// ----------------------------------------------------------------------------
void gameswf::LineStyle::Destroy_ea10ef130(gameswf::RefCounted::Self **self)
{
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208F690);
  gameswf::FillStyle::Destroy(self + 3);
  *self = (gameswf::RefCounted::Self *)((uint32_t)(uintptr_t)&off_208EB20);
  opDelete(self);
}


