#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_weapon_projectile.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_weapon_projectile_struct
void giv_weapon_projectile_struct::Init()
{
	base_struct::Init();

	// Field : ingameVFX
	ingameVFX = 0;
	ingameVFX_hash = 0;

	// Field : mapFlags
	mapFlags = 0;

	// Field : hudDirectionMode
	hudDirectionMode = 0;

}

void giv_weapon_projectile_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : ingameVFX
	stream->ReadString(ingameVFX);
	ingameVFX_hash = static_cast<uint32>(glitch::core::hashString(ingameVFX));

	// Field : mapFlags
	stream->ReadAs(mapFlags);

	// Field : hudDirectionMode
	stream->ReadAs(hudDirectionMode);

}

void giv_weapon_projectile_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : ingameVFX
	if (ingameVFX && ingameVFX[0] != '\0') gll_delete[] ingameVFX;
	ingameVFX = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_weapon_projectile
size_t giv_weapon_projectile::size = 0;
giv_weapon_projectile::struct_type* giv_weapon_projectile::entries = 0;

void giv_weapon_projectile::Load(StreamBase* stream)
{
	if(entries != 0)
		Unload();

	uint32 sz;
	stream->ReadAs(sz);

	if(sz > 0)
	{
		entries = gll_new struct_type[sz];
		size = sz;

		for(size_t i = 0; i < size; ++i)
		{
			entries[i].Init();
			entries[i].Load(stream);
		}
	}
}

void giv_weapon_projectile::Unload()
{
	if(entries)
	{
		for(size_t i = 0; i < size; ++i)
		{
			entries[i].Unload();
		}

		gll_delete[] entries;
		entries = 0;
		size = 0;
	}
}

}; // namespace arrays
}; // namespace xmldata

