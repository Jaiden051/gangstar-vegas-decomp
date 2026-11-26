#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_loot.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_loot_struct
void giv_loot_struct::Init()
{
	base_struct::Init();

	// Field : PreferredItems
	PreferredItems = 0;

	// Field : Probabilities
	Probabilities_f = 0.0f;

	// Field : LootTable
	LootTable = 0;

}

void giv_loot_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : PreferredItems
	stream->ReadAs(PreferredItems);

	// Field : Probabilities
	stream->ReadAs(Probabilities_f);

	// Field : LootTable
	stream->ReadAs(LootTable);

}

void giv_loot_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_loot
size_t giv_loot::size = 0;
giv_loot::struct_type* giv_loot::entries = 0;

void giv_loot::Load(StreamBase* stream)
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

void giv_loot::Unload()
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

