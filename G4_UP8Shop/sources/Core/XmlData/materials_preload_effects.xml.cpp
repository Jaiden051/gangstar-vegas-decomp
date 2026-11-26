#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/materials_preload_effects.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : materials_preload_effects_struct
void materials_preload_effects_struct::Init()
{
	base_struct::Init();

	// Field : TextureName
	TextureName = 0;
	TextureName_hash = 0;

	// Field : LabelOnFoot
	LabelOnFoot = 0;
	LabelOnFoot_hash = 0;

	// Field : LabelInVehicle
	LabelInVehicle = 0;
	LabelInVehicle_hash = 0;

	// Field : IsVisible
	IsVisible = 0;

	// Field : MenuName
	MenuName = 0;
	MenuName_hash = 0;

	// Field : IsInterior
	IsInterior = 0;

	// Field : minX
	minX = 0;

	// Field : maxX
	maxX = 0;

	// Field : minY
	minY = 0;

	// Field : maxY
	maxY = 0;

}

void materials_preload_effects_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : TextureName
	stream->ReadString(TextureName);
	TextureName_hash = static_cast<uint32>(glitch::core::hashString(TextureName));

	// Field : LabelOnFoot
	stream->ReadString(LabelOnFoot);
	LabelOnFoot_hash = static_cast<uint32>(glitch::core::hashString(LabelOnFoot));

	// Field : LabelInVehicle
	stream->ReadString(LabelInVehicle);
	LabelInVehicle_hash = static_cast<uint32>(glitch::core::hashString(LabelInVehicle));

	// Field : IsVisible
	stream->ReadAs(IsVisible);

	// Field : MenuName
	stream->ReadString(MenuName);
	MenuName_hash = static_cast<uint32>(glitch::core::hashString(MenuName));

	// Field : IsInterior
	stream->ReadAs(IsInterior);

	// Field : minX
	stream->ReadAs(minX);

	// Field : maxX
	stream->ReadAs(maxX);

	// Field : minY
	stream->ReadAs(minY);

	// Field : maxY
	stream->ReadAs(maxY);

}

void materials_preload_effects_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : TextureName
	if (TextureName && TextureName[0] != '\0') gll_delete[] TextureName;
	TextureName = 0;

	// Field : LabelOnFoot
	if (LabelOnFoot && LabelOnFoot[0] != '\0') gll_delete[] LabelOnFoot;
	LabelOnFoot = 0;

	// Field : LabelInVehicle
	if (LabelInVehicle && LabelInVehicle[0] != '\0') gll_delete[] LabelInVehicle;
	LabelInVehicle = 0;

	// Field : MenuName
	if (MenuName && MenuName[0] != '\0') gll_delete[] MenuName;
	MenuName = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : materials_preload_effects
size_t materials_preload_effects::size = 0;
materials_preload_effects::struct_type* materials_preload_effects::entries = 0;

void materials_preload_effects::Load(StreamBase* stream)
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

void materials_preload_effects::Unload()
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

