#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_pawn_shop.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_pawn_shop_struct
void giv_pawn_shop_struct::Init()
{
	base_struct::Init();

	// Field : StatCounter_MoneySpent
	StatCounter_MoneySpent = 0;

}

void giv_pawn_shop_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : StatCounter_MoneySpent
	stream->ReadAs(StatCounter_MoneySpent);

}

void giv_pawn_shop_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_pawn_shop
size_t giv_pawn_shop::size = 0;
giv_pawn_shop::struct_type* giv_pawn_shop::entries = 0;

void giv_pawn_shop::Load(StreamBase* stream)
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

void giv_pawn_shop::Unload()
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

