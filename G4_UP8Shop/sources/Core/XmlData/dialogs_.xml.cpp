#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/dialogs_.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : dialogs__struct
void dialogs__struct::Init()
{
	base_struct::Init();

	// Field : Name
	Name = 0;
	Name_hash = 0;

	// Field : RA_Kill
	RA_Kill = 0;

	// Field : StatCounter_Kill
	StatCounter_Kill = 0;

	// Field : Who
	Who = 0;

	// Field : Toward
	Toward = 0;

	// Field : Value
	Value = 0;

	// Field : RequiredReputation
	RequiredReputation = 0;

	// Field : FollowerLevels
	FollowerLevels = 0;

	// Field : UnlockedClothes
	UnlockedClothes = 0;

	// Field : UnlockedWeapons
	UnlockedWeapons = 0;

	// Field : UnlockedVehicles
	UnlockedVehicles = 0;

	// Field : UnlockedSafehouses
	UnlockedSafehouses = 0;

}

void dialogs__struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Name
	stream->ReadString(Name);
	Name_hash = static_cast<uint32>(glitch::core::hashString(Name));

	// Field : RA_Kill
	stream->ReadAs(RA_Kill);

	// Field : StatCounter_Kill
	stream->ReadAs(StatCounter_Kill);

	// Field : Who
	stream->ReadAs(Who);

	// Field : Toward
	stream->ReadAs(Toward);

	// Field : Value
	stream->ReadAs(Value);

	// Field : RequiredReputation
	stream->ReadAs(RequiredReputation);

	// Field : FollowerLevels
	stream->ReadAs(FollowerLevels);

	// Field : UnlockedClothes
	stream->ReadAs(UnlockedClothes);

	// Field : UnlockedWeapons
	stream->ReadAs(UnlockedWeapons);

	// Field : UnlockedVehicles
	stream->ReadAs(UnlockedVehicles);

	// Field : UnlockedSafehouses
	stream->ReadAs(UnlockedSafehouses);

}

void dialogs__struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : Name
	if (Name && Name[0] != '\0') gll_delete[] Name;
	Name = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : dialogs_
size_t dialogs_::size = 0;
dialogs_::struct_type* dialogs_::entries = 0;

void dialogs_::Load(StreamBase* stream)
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

void dialogs_::Unload()
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

