#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_minigames_settings.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_minigames_settings_struct
void giv_minigames_settings_struct::Init()
{
	base_struct::Init();

	// Field : Sections
	Sections = 0;

	// Field : PromptMsg
	PromptMsg = 0;

	// Field : GroupName
	GroupName = 0;
	GroupName_hash = 0;

	// Field : StatCounter_GroupComplete
	StatCounter_GroupComplete = 0;

	// Field : MissionGroup
	MissionGroup = 0;

	// Field : MapIcon
	MapIcon = 0;
	MapIcon_hash = 0;

	// Field : StatCounter_TypeComplete
	StatCounter_TypeComplete = 0;

	// Field : Diamonds
	Diamonds = 0;

	// Field : Cash
	Cash = 0;

	// Field : Respect
	Respect = 0;

	// Field : ReplayCash
	ReplayCash = 0;

	// Field : ReplayRespect
	ReplayRespect = 0;

	// Field : CashPerStar
	CashPerStar = 0;

	// Field : CashPerComplete
	CashPerComplete = 0;

	// Field : RespectPerStar
	RespectPerStar = 0;

	// Field : RespectPerComplete
	RespectPerComplete = 0;

}

void giv_minigames_settings_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Sections
	stream->ReadAs(Sections);

	// Field : PromptMsg
	stream->ReadAs(PromptMsg);

	// Field : GroupName
	stream->ReadString(GroupName);
	GroupName_hash = static_cast<uint32>(glitch::core::hashString(GroupName));

	// Field : StatCounter_GroupComplete
	stream->ReadAs(StatCounter_GroupComplete);

	// Field : MissionGroup
	stream->ReadAs(MissionGroup);

	// Field : MapIcon
	stream->ReadString(MapIcon);
	MapIcon_hash = static_cast<uint32>(glitch::core::hashString(MapIcon));

	// Field : StatCounter_TypeComplete
	stream->ReadAs(StatCounter_TypeComplete);

	// Field : Diamonds
	stream->ReadAs(Diamonds);

	// Field : Cash
	stream->ReadAs(Cash);

	// Field : Respect
	stream->ReadAs(Respect);

	// Field : ReplayCash
	stream->ReadAs(ReplayCash);

	// Field : ReplayRespect
	stream->ReadAs(ReplayRespect);

	// Field : CashPerStar
	stream->ReadAs(CashPerStar);

	// Field : CashPerComplete
	stream->ReadAs(CashPerComplete);

	// Field : RespectPerStar
	stream->ReadAs(RespectPerStar);

	// Field : RespectPerComplete
	stream->ReadAs(RespectPerComplete);

}

void giv_minigames_settings_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : GroupName
	if (GroupName && GroupName[0] != '\0') gll_delete[] GroupName;
	GroupName = 0;

	// Field : MapIcon
	if (MapIcon && MapIcon[0] != '\0') gll_delete[] MapIcon;
	MapIcon = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_minigames_settings
size_t giv_minigames_settings::size = 0;
giv_minigames_settings::struct_type* giv_minigames_settings::entries = 0;

void giv_minigames_settings::Load(StreamBase* stream)
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

void giv_minigames_settings::Unload()
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

