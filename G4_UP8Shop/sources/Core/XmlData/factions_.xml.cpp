#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/factions_.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : factions__struct
void factions__struct::Init()
{
	base_struct::Init();

	// Field : Player
	Player = 0;

	// Field : Police
	Police = 0;

	// Field : Head
	Head = 0;

	// Field : Torso
	Torso = 0;

	// Field : Legs
	Legs = 0;

	// Field : Weapon
	Weapon = 0;

}

void factions__struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Player
	stream->ReadAs(Player);

	// Field : Police
	stream->ReadAs(Police);

	// Field : Head
	stream->ReadAs(Head);

	// Field : Torso
	stream->ReadAs(Torso);

	// Field : Legs
	stream->ReadAs(Legs);

	// Field : Weapon
	stream->ReadAs(Weapon);

}

void factions__struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : factions_
size_t factions_::size = 0;
factions_::struct_type* factions_::entries = 0;

void factions_::Load(StreamBase* stream)
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

void factions_::Unload()
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

