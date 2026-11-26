#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_daytime.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_daytime_struct
void giv_daytime_struct::Init()
{
	base_struct::Init();

	// Field : FadeInDuration
	FadeInDuration_f = 0.0f;

	// Field : FadeOutDuration
	FadeOutDuration_f = 0.0f;

	// Field : MuteSound
	MuteSound = 0;
	MuteSound_hash = 0;

}

void giv_daytime_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : FadeInDuration
	stream->ReadAs(FadeInDuration_f);

	// Field : FadeOutDuration
	stream->ReadAs(FadeOutDuration_f);

	// Field : MuteSound
	stream->ReadString(MuteSound);
	MuteSound_hash = static_cast<uint32>(glitch::core::hashString(MuteSound));

}

void giv_daytime_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : MuteSound
	if (MuteSound && MuteSound[0] != '\0') gll_delete[] MuteSound;
	MuteSound = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_daytime
size_t giv_daytime::size = 0;
giv_daytime::struct_type* giv_daytime::entries = 0;

void giv_daytime::Load(StreamBase* stream)
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

void giv_daytime::Unload()
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

