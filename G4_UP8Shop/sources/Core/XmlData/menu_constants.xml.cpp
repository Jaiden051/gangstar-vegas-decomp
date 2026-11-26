#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/menu_constants.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : menu_constants_struct
void menu_constants_struct::Init()
{
	base_struct::Init();

	// Field : Elems
	Elems = 0;

	// Field : ModeFlags
	ModeFlags = 0;

	// Field : SteeringHUDFlags
	SteeringHUDFlags = 0;

	// Field : ThrottleHUDFlags
	ThrottleHUDFlags = 0;

	// Field : IsMotion
	IsMotion = 0;

	// Field : IsActiveForGamepad
	IsActiveForGamepad = 0;

}

void menu_constants_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Elems
	stream->ReadAs(Elems);

	// Field : ModeFlags
	stream->ReadAs(ModeFlags);

	// Field : SteeringHUDFlags
	stream->ReadAs(SteeringHUDFlags);

	// Field : ThrottleHUDFlags
	stream->ReadAs(ThrottleHUDFlags);

	// Field : IsMotion
	stream->ReadAs(IsMotion);

	// Field : IsActiveForGamepad
	stream->ReadAs(IsActiveForGamepad);

}

void menu_constants_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : menu_constants
size_t menu_constants::size = 0;
menu_constants::struct_type* menu_constants::entries = 0;

void menu_constants::Load(StreamBase* stream)
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

void menu_constants::Unload()
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

