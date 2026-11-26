#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_collectible.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_collectible_struct
void giv_collectible_struct::Init()
{
	base_struct::Init();

	// Field : CollectKeyPeriodTime
	CollectKeyPeriodTime_f = 0.0f;

	// Field : CollectKeyNum
	CollectKeyNum = 0;

}

void giv_collectible_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : CollectKeyPeriodTime
	stream->ReadAs(CollectKeyPeriodTime_f);

	// Field : CollectKeyNum
	stream->ReadAs(CollectKeyNum);

}

void giv_collectible_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_collectible
size_t giv_collectible::size = 0;
giv_collectible::struct_type* giv_collectible::entries = 0;

void giv_collectible::Load(StreamBase* stream)
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

void giv_collectible::Unload()
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

