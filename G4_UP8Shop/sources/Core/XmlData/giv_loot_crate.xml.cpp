#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_loot_crate.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_loot_crate_struct
void giv_loot_crate_struct::Init()
{
	base_struct::Init();

	// Field : Prize
	Prize = 0;

	// Field : Prizes
	Prizes = 0;

	// Field : StockItemID
	StockItemID = 0;

	// Field : TableIDForRandomGeneration
	TableIDForRandomGeneration = 0;

	// Field : Count
	Count = 0;

}

void giv_loot_crate_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Prize
	stream->ReadAs(Prize);

	// Field : Prizes
	stream->ReadAs(Prizes);

	// Field : StockItemID
	stream->ReadAs(StockItemID);

	// Field : TableIDForRandomGeneration
	stream->ReadAs(TableIDForRandomGeneration);

	// Field : Count
	stream->ReadAs(Count);

}

void giv_loot_crate_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_loot_crate
size_t giv_loot_crate::size = 0;
giv_loot_crate::struct_type* giv_loot_crate::entries = 0;

void giv_loot_crate::Load(StreamBase* stream)
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

void giv_loot_crate::Unload()
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

