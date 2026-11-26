#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/vehicle_doors_and_seats.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : vehicle_doors_and_seats_struct
void vehicle_doors_and_seats_struct::Init()
{
	base_struct::Init();

	// Field : Collision_Impact_Small
	Collision_Impact_Small = 0;

	// Field : Collision_Impact_Medium
	Collision_Impact_Medium = 0;

	// Field : Collision_Impact_Hard
	Collision_Impact_Hard = 0;

	// Field : Collision_Body_Impact_Small
	Collision_Body_Impact_Small = 0;

	// Field : Collision_Body_Impact_Medium
	Collision_Body_Impact_Medium = 0;

	// Field : Collision_Body_Impact_Hard
	Collision_Body_Impact_Hard = 0;

	// Field : Collision_Grinding
	Collision_Grinding = 0;

	// Field : Crushed
	Crushed = 0;

	// Field : Failing
	Failing = 0;

	// Field : Siren
	Siren = 0;

	// Field : Skid_Marks
	Skid_Marks = 0;

	// Field : Water_Splash
	Water_Splash = 0;

}

void vehicle_doors_and_seats_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Collision_Impact_Small
	stream->ReadAs(Collision_Impact_Small);

	// Field : Collision_Impact_Medium
	stream->ReadAs(Collision_Impact_Medium);

	// Field : Collision_Impact_Hard
	stream->ReadAs(Collision_Impact_Hard);

	// Field : Collision_Body_Impact_Small
	stream->ReadAs(Collision_Body_Impact_Small);

	// Field : Collision_Body_Impact_Medium
	stream->ReadAs(Collision_Body_Impact_Medium);

	// Field : Collision_Body_Impact_Hard
	stream->ReadAs(Collision_Body_Impact_Hard);

	// Field : Collision_Grinding
	stream->ReadAs(Collision_Grinding);

	// Field : Crushed
	stream->ReadAs(Crushed);

	// Field : Failing
	stream->ReadAs(Failing);

	// Field : Siren
	stream->ReadAs(Siren);

	// Field : Skid_Marks
	stream->ReadAs(Skid_Marks);

	// Field : Water_Splash
	stream->ReadAs(Water_Splash);

}

void vehicle_doors_and_seats_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : vehicle_doors_and_seats
size_t vehicle_doors_and_seats::size = 0;
vehicle_doors_and_seats::struct_type* vehicle_doors_and_seats::entries = 0;

void vehicle_doors_and_seats::Load(StreamBase* stream)
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

void vehicle_doors_and_seats::Unload()
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

