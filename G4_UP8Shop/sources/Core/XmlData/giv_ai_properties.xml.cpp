#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_ai_properties.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_ai_properties_struct
void giv_ai_properties_struct::Init()
{
	base_struct::Init();

	// Field : bdae
	bdae = 0;

	// Field : bdaeLowRes
	bdaeLowRes = 0;

	// Field : bdae_collected
	bdae_collected = 0;

	// Field : icon_name
	icon_name = 0;
	icon_name_hash = 0;

	// Field : pickup_vfxOID
	pickup_vfxOID = 0;

	// Field : pickup_soundLabel
	pickup_soundLabel = 0;
	pickup_soundLabel_hash = 0;

	// Field : TextColor
	TextColor = 0;
	TextColor_hash = 0;

	// Field : ProgressionName
	ProgressionName = 0;
	ProgressionName_hash = 0;

	// Field : StatCounter_FoundAll
	StatCounter_FoundAll = 0;

	// Field : stockOIDReward
	stockOIDReward = 0;

	// Field : menuIcon
	menuIcon = 0;
	menuIcon_hash = 0;

	// Field : cashReward
	cashReward = 0;

	// Field : mapIcon
	mapIcon = 0;
	mapIcon_hash = 0;

	// Field : mapIconCategory
	mapIconCategory = 0;
	mapIconCategory_hash = 0;

}

void giv_ai_properties_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : bdae
	stream->ReadAs(bdae);

	// Field : bdaeLowRes
	stream->ReadAs(bdaeLowRes);

	// Field : bdae_collected
	stream->ReadAs(bdae_collected);

	// Field : icon_name
	stream->ReadString(icon_name);
	icon_name_hash = static_cast<uint32>(glitch::core::hashString(icon_name));

	// Field : pickup_vfxOID
	stream->ReadAs(pickup_vfxOID);

	// Field : pickup_soundLabel
	stream->ReadString(pickup_soundLabel);
	pickup_soundLabel_hash = static_cast<uint32>(glitch::core::hashString(pickup_soundLabel));

	// Field : TextColor
	stream->ReadString(TextColor);
	TextColor_hash = static_cast<uint32>(glitch::core::hashString(TextColor));

	// Field : ProgressionName
	stream->ReadString(ProgressionName);
	ProgressionName_hash = static_cast<uint32>(glitch::core::hashString(ProgressionName));

	// Field : StatCounter_FoundAll
	stream->ReadAs(StatCounter_FoundAll);

	// Field : stockOIDReward
	stream->ReadAs(stockOIDReward);

	// Field : menuIcon
	stream->ReadString(menuIcon);
	menuIcon_hash = static_cast<uint32>(glitch::core::hashString(menuIcon));

	// Field : cashReward
	stream->ReadAs(cashReward);

	// Field : mapIcon
	stream->ReadString(mapIcon);
	mapIcon_hash = static_cast<uint32>(glitch::core::hashString(mapIcon));

	// Field : mapIconCategory
	stream->ReadString(mapIconCategory);
	mapIconCategory_hash = static_cast<uint32>(glitch::core::hashString(mapIconCategory));

}

void giv_ai_properties_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : icon_name
	if (icon_name && icon_name[0] != '\0') gll_delete[] icon_name;
	icon_name = 0;

	// Field : pickup_soundLabel
	if (pickup_soundLabel && pickup_soundLabel[0] != '\0') gll_delete[] pickup_soundLabel;
	pickup_soundLabel = 0;

	// Field : TextColor
	if (TextColor && TextColor[0] != '\0') gll_delete[] TextColor;
	TextColor = 0;

	// Field : ProgressionName
	if (ProgressionName && ProgressionName[0] != '\0') gll_delete[] ProgressionName;
	ProgressionName = 0;

	// Field : menuIcon
	if (menuIcon && menuIcon[0] != '\0') gll_delete[] menuIcon;
	menuIcon = 0;

	// Field : mapIcon
	if (mapIcon && mapIcon[0] != '\0') gll_delete[] mapIcon;
	mapIcon = 0;

	// Field : mapIconCategory
	if (mapIconCategory && mapIconCategory[0] != '\0') gll_delete[] mapIconCategory;
	mapIconCategory = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_ai_properties
size_t giv_ai_properties::size = 0;
giv_ai_properties::struct_type* giv_ai_properties::entries = 0;

void giv_ai_properties::Load(StreamBase* stream)
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

void giv_ai_properties::Unload()
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

