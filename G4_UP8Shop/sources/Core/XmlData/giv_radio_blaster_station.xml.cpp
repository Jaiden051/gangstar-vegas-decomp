#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_radio_blaster_station.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_radio_blaster_station_struct
void giv_radio_blaster_station_struct::Init()
{
	base_struct::Init();

	// Field : DistrictName
	DistrictName = 0;
	DistrictName_hash = 0;

	// Field : Upgrades
	Upgrades = 0;

	// Field : OwnedStashBonus
	OwnedStashBonus = 0;

	// Field : RA_Purchase
	RA_Purchase = 0;

	// Field : DistrictDominationPrize
	DistrictDominationPrize = 0;
	DistrictDominationPrize_hash = 0;

	// Field : CityDominationPrizeID
	CityDominationPrizeID = 0;

	// Field : LongDescription
	LongDescription = 0;
	LongDescription_hash = 0;

	// Field : Size
	Size = 0;

	// Field : ResetPoint
	ResetPoint = 0;

}

void giv_radio_blaster_station_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : DistrictName
	stream->ReadString(DistrictName);
	DistrictName_hash = static_cast<uint32>(glitch::core::hashString(DistrictName));

	// Field : Upgrades
	stream->ReadAs(Upgrades);

	// Field : OwnedStashBonus
	stream->ReadAs(OwnedStashBonus);

	// Field : RA_Purchase
	stream->ReadAs(RA_Purchase);

	// Field : DistrictDominationPrize
	stream->ReadString(DistrictDominationPrize);
	DistrictDominationPrize_hash = static_cast<uint32>(glitch::core::hashString(DistrictDominationPrize));

	// Field : CityDominationPrizeID
	stream->ReadAs(CityDominationPrizeID);

	// Field : LongDescription
	stream->ReadString(LongDescription);
	LongDescription_hash = static_cast<uint32>(glitch::core::hashString(LongDescription));

	// Field : Size
	stream->ReadAs(Size);

	// Field : ResetPoint
	stream->ReadAs(ResetPoint);

}

void giv_radio_blaster_station_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : DistrictName
	if (DistrictName && DistrictName[0] != '\0') gll_delete[] DistrictName;
	DistrictName = 0;

	// Field : DistrictDominationPrize
	if (DistrictDominationPrize && DistrictDominationPrize[0] != '\0') gll_delete[] DistrictDominationPrize;
	DistrictDominationPrize = 0;

	// Field : LongDescription
	if (LongDescription && LongDescription[0] != '\0') gll_delete[] LongDescription;
	LongDescription = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_radio_blaster_station
size_t giv_radio_blaster_station::size = 0;
giv_radio_blaster_station::struct_type* giv_radio_blaster_station::entries = 0;

void giv_radio_blaster_station::Load(StreamBase* stream)
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

void giv_radio_blaster_station::Unload()
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

