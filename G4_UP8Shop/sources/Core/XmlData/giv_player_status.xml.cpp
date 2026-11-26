#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_player_status.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_player_status_struct
void giv_player_status_struct::Init()
{
	base_struct::Init();

	// Field : Weapons
	Weapons = 0;

	// Field : Ammo
	Ammo = 0;

	// Field : label
	label = 0;
	label_hash = 0;

	// Field : jingles
	jingles = 0;

	// Field : songs
	songs = 0;

	// Field : host
	host = 0;

	// Field : stationIcon
	stationIcon = 0;
	stationIcon_hash = 0;

	// Field : stationId
	stationId = 0;

	// Field : stationName
	stationName = 0;
	stationName_hash = 0;

	// Field : playAdvert
	playAdvert = 0;

}

void giv_player_status_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Weapons
	stream->ReadAs(Weapons);

	// Field : Ammo
	stream->ReadAs(Ammo);

	// Field : label
	stream->ReadString(label);
	label_hash = static_cast<uint32>(glitch::core::hashString(label));

	// Field : jingles
	stream->ReadAs(jingles);

	// Field : songs
	stream->ReadAs(songs);

	// Field : host
	stream->ReadAs(host);

	// Field : stationIcon
	stream->ReadString(stationIcon);
	stationIcon_hash = static_cast<uint32>(glitch::core::hashString(stationIcon));

	// Field : stationId
	stream->ReadAs(stationId);

	// Field : stationName
	stream->ReadString(stationName);
	stationName_hash = static_cast<uint32>(glitch::core::hashString(stationName));

	// Field : playAdvert
	stream->ReadAs(playAdvert);

}

void giv_player_status_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : label
	if (label && label[0] != '\0') gll_delete[] label;
	label = 0;

	// Field : stationIcon
	if (stationIcon && stationIcon[0] != '\0') gll_delete[] stationIcon;
	stationIcon = 0;

	// Field : stationName
	if (stationName && stationName[0] != '\0') gll_delete[] stationName;
	stationName = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_player_status
size_t giv_player_status::size = 0;
giv_player_status::struct_type* giv_player_status::entries = 0;

void giv_player_status::Load(StreamBase* stream)
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

void giv_player_status::Unload()
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

