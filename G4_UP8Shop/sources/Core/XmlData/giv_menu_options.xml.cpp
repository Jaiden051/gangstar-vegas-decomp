#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_menu_options.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_menu_options_struct
void giv_menu_options_struct::Init()
{
	base_struct::Init();

	// Field : BetCost0
	BetCost0 = 0;

	// Field : BetCost1
	BetCost1 = 0;

	// Field : BetCost2
	BetCost2 = 0;

	// Field : WinValue_Jackpot
	WinValue_Jackpot = 0;

	// Field : ReelConfig
	ReelConfig = 0;

	// Field : Mode
	Mode = 0;

	// Field : TypeName
	TypeName = 0;

	// Field : Multiplier
	Multiplier_f = 0.0f;

	// Field : RepeatNum
	RepeatNum = 0;

}

void giv_menu_options_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : BetCost0
	stream->ReadAs(BetCost0);

	// Field : BetCost1
	stream->ReadAs(BetCost1);

	// Field : BetCost2
	stream->ReadAs(BetCost2);

	// Field : WinValue_Jackpot
	stream->ReadAs(WinValue_Jackpot);

	// Field : ReelConfig
	stream->ReadAs(ReelConfig);

	// Field : Mode
	stream->ReadAs(Mode);

	// Field : TypeName
	stream->ReadAs(TypeName);

	// Field : Multiplier
	stream->ReadAs(Multiplier_f);

	// Field : RepeatNum
	stream->ReadAs(RepeatNum);

}

void giv_menu_options_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_menu_options
size_t giv_menu_options::size = 0;
giv_menu_options::struct_type* giv_menu_options::entries = 0;

void giv_menu_options::Load(StreamBase* stream)
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

void giv_menu_options::Unload()
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

