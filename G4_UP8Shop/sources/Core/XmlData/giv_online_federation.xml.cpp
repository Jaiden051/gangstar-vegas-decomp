#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_online_federation.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_online_federation_struct
void giv_online_federation_struct::Init()
{
	base_struct::Init();

	// Field : ImgIndexDefault
	ImgIndexDefault = 0;

	// Field : MoneyImgPrefix
	MoneyImgPrefix = 0;

	// Field : SkillPointImgPrefix
	SkillPointImgPrefix = 0;

	// Field : KeyImgPrefix
	KeyImgPrefix = 0;

	// Field : MaxItemsBySection
	MaxItemsBySection = 0;

	// Field : DiamondImgPrefix
	DiamondImgPrefix = 0;

}

void giv_online_federation_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : ImgIndexDefault
	stream->ReadAs(ImgIndexDefault);

	// Field : MoneyImgPrefix
	stream->ReadAs(MoneyImgPrefix);

	// Field : SkillPointImgPrefix
	stream->ReadAs(SkillPointImgPrefix);

	// Field : KeyImgPrefix
	stream->ReadAs(KeyImgPrefix);

	// Field : MaxItemsBySection
	stream->ReadAs(MaxItemsBySection);

	// Field : DiamondImgPrefix
	stream->ReadAs(DiamondImgPrefix);

}

void giv_online_federation_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_online_federation
size_t giv_online_federation::size = 0;
giv_online_federation::struct_type* giv_online_federation::entries = 0;

void giv_online_federation::Load(StreamBase* stream)
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

void giv_online_federation::Unload()
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

