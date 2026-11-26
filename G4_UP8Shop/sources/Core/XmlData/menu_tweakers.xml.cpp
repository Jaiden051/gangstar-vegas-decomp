#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/menu_tweakers.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : menu_tweakers_struct
void menu_tweakers_struct::Init()
{
	base_struct::Init();

	// Field : VehicleToReplace
	VehicleToReplace = 0;

	// Field : WithVehicle
	WithVehicle = 0;

	// Field : BdaeFilename
	BdaeFilename = 0;
	BdaeFilename_hash = 0;

	// Field : NodeToAttach
	NodeToAttach = 0;

	// Field : Probability
	Probability_f = 0.0f;

	// Field : IgnoredCharacters
	IgnoredCharacters = 0;

}

void menu_tweakers_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : VehicleToReplace
	stream->ReadAs(VehicleToReplace);

	// Field : WithVehicle
	stream->ReadAs(WithVehicle);

	// Field : BdaeFilename
	stream->ReadString(BdaeFilename);
	BdaeFilename_hash = static_cast<uint32>(glitch::core::hashString(BdaeFilename));

	// Field : NodeToAttach
	stream->ReadAs(NodeToAttach);

	// Field : Probability
	stream->ReadAs(Probability_f);

	// Field : IgnoredCharacters
	stream->ReadAs(IgnoredCharacters);

}

void menu_tweakers_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : BdaeFilename
	if (BdaeFilename && BdaeFilename[0] != '\0') gll_delete[] BdaeFilename;
	BdaeFilename = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : menu_tweakers
size_t menu_tweakers::size = 0;
menu_tweakers::struct_type* menu_tweakers::entries = 0;

void menu_tweakers::Load(StreamBase* stream)
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

void menu_tweakers::Unload()
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

