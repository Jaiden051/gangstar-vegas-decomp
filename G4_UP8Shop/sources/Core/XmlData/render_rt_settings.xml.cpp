#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/render_rt_settings.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : render_rt_settings_struct
void render_rt_settings_struct::Init()
{
	base_struct::Init();

	// Field : SkillBonus
	SkillBonus = 0;

	// Field : SkillDescription
	SkillDescription = 0;
	SkillDescription_hash = 0;

}

void render_rt_settings_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : SkillBonus
	stream->ReadAs(SkillBonus);

	// Field : SkillDescription
	stream->ReadString(SkillDescription);
	SkillDescription_hash = static_cast<uint32>(glitch::core::hashString(SkillDescription));

}

void render_rt_settings_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : SkillDescription
	if (SkillDescription && SkillDescription[0] != '\0') gll_delete[] SkillDescription;
	SkillDescription = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : render_rt_settings
size_t render_rt_settings::size = 0;
render_rt_settings::struct_type* render_rt_settings::entries = 0;

void render_rt_settings::Load(StreamBase* stream)
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

void render_rt_settings::Unload()
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

